# _ZN14DNFFLibWrapper8Hex2CharEPKcRh

`DNFFLibWrapper::Hex2Char(char const*, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x806bd56` | `0xe1` | `0x8069354` | `0xc8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,84 +1,76 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x2f,%al
 jle    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x27>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x39,%al
 jg     <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x27>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 lea    -0x30(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
-jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x55>
+jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x52>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x60,%al
 jle    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x4b>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x66,%al
 jg     <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x4b>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 lea    -0x57(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
-jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x55>
+jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x52>
 mov    $0x0,%eax
-jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xdf>
+jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xc6>
 addl   $0x1,0x8(%ebp)
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x2f,%al
-jle    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x96>
+jle    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x88>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x39,%al
-jg     <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x96>
+jg     <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0x88>
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 mov    %eax,%edx
 shl    $0x4,%edx
-mov    0xc(%ebp),%eax
-mov    %dl,(%eax)
-mov    0xc(%ebp),%eax
-movzbl (%eax),%edx
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 lea    (%edx,%eax,1),%eax
 lea    -0x30(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
-jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xda>
+jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xc1>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x60,%al
-jle    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xd3>
+jle    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xba>
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 cmp    $0x66,%al
-jg     <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xd3>
+jg     <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xba>
 mov    0xc(%ebp),%eax
 movzbl (%eax),%eax
 mov    %eax,%edx
 shl    $0x4,%edx
-mov    0xc(%ebp),%eax
-mov    %dl,(%eax)
-mov    0xc(%ebp),%eax
-movzbl (%eax),%edx
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
 lea    (%edx,%eax,1),%eax
 lea    -0x57(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
-jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xda>
+jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xc1>
 mov    $0x0,%eax
-jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xdf>
+jmp    <T> <_ZN14DNFFLibWrapper8Hex2CharEPKcRh+0xc6>
 mov    $0x1,%eax
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

bool DNFFLibWrapper::_ZN14DNFFLibWrapper8Hex2CharEPKcRh(char *szHex,uchar *rch)

{
  char *pcVar1;
  
  if ((*szHex < '0') || ('9' < *szHex)) {
    if ((*szHex < 'a') || ('f' < *szHex)) {
      return false;
    }
    *rch = *szHex + 0xa9;
  }
  else {
    *rch = *szHex + 0xd0;
  }
  pcVar1 = szHex + 1;
  if ((*pcVar1 < '0') || ('9' < *pcVar1)) {
    if ((*pcVar1 < 'a') || ('f' < *pcVar1)) {
      return false;
    }
    *rch = *rch << 4;
    *rch = *rch + *pcVar1 + 0xa9;
  }
  else {
    *rch = *rch << 4;
    *rch = *rch + *pcVar1 + 0xd0;
  }
  return true;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp](source/DNFServer/GameServer/ServerLab/Auction/AuctionServer/GameData/DNFFunctionLibWrapper.cpp)（约第 15 行）：

```cpp
bool DNFFLibWrapper::Hex2Char(const char* szHex, unsigned char& rch)
{
    if ((szHex[0] > 0x2f) && (szHex[0] <= 0x39))
    {
        rch = szHex[0] - 0x30;
    }
    else if ((szHex[0] > 0x60) && (szHex[0] <= 0x66))
    {
        rch = szHex[0] - 0x57;
    }
    else
    {
        return false;
    }
    szHex = szHex + 1;
    if ((szHex[0] > 0x2f) && (szHex[0] <= 0x39))
    {
        rch = (unsigned char)((rch << 4) + (szHex[0] - 0x30));
    }
    else if ((szHex[0] > 0x60) && (szHex[0] <= 0x66))
    {
        rch = (unsigned char)((rch << 4) + (szHex[0] - 0x57));
    }
    else
    {
        return false;
    }
    return true;
}
```
