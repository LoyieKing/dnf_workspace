# IsNonBlocking

`_ZNK5yaSSL6Socket13IsNonBlockingEv`

`yaSSL::Socket::IsNonBlocking() const`

| 类 | 地址 |
|---|---|
| `yaSSL::Socket` | `0x087a1500` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087a1500  _ZNK5yaSSL6Socket13IsNonBlockingEv
#           yaSSL::Socket::IsNonBlocking() const
# range [0x087a1500, 0x087a150c]
087a1500 +0x00:  push   %ebp
087a1501 +0x01:  mov    %esp,%ebp
087a1503 +0x03:  mov    0x8(%ebp),%eax
087a1506 +0x06:  pop    %ebp
087a1507 +0x07:  movzbl 0x5(%eax),%eax
087a150b +0x0b:  ret
087a150c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Socket::IsNonBlocking @ 0x87a1500

/* yaSSL::Socket::IsNonBlocking() const */

Socket __thiscall yaSSL::Socket::IsNonBlocking(Socket *this)

{
  return this[5];
}
```
