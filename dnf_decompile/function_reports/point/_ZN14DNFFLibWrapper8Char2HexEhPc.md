# _ZN14DNFFLibWrapper8Char2HexEhPc

`DNFFLibWrapper::Char2Hex(unsigned char, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x806bd14` | `0x42` | `0x8069312` | `0x40` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %al,-0x4(%ebp)
 movzbl -0x4(%ebp),%eax
 sar    $0x4,%eax
-movzbl "0123456789abcdef"(%eax),%eax
-mov    %eax,%edx
+movzbl "0123456789abcdef"(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
 mov    0xc(%ebp),%eax
 lea    0x1(%eax),%edx
 movzbl -0x4(%ebp),%eax
 and    $0xf,%eax
 movzbl "0123456789abcdef"(%eax),%eax
 mov    %al,(%edx)
 mov    0xc(%ebp),%eax
 add    $0x2,%eax
 movb   $0x0,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

void DNFFLibWrapper::_ZN14DNFFLibWrapper8Char2HexEhPc(uchar ch,char *szHex)

{
  *szHex = Char2Hex::lexical_block_0::saucHex[(int)(uint)ch >> 4];
  szHex[1] = Char2Hex::lexical_block_0::saucHex[ch & 0xf];
  szHex[2] = '\0';
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp)（约第 8 行）：

```cpp
void DNFFLibWrapper::Char2Hex(unsigned char ch, char* szHex)
{
    szHex[0] = saucHex[ch >> 4];
    szHex[1] = saucHex[ch & 0xf];
    szHex[2] = '\0';
}
```
