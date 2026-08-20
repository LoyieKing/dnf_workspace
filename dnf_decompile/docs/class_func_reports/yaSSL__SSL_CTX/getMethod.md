# getMethod

`_ZNK5yaSSL7SSL_CTX9getMethodEv`

`yaSSL::SSL_CTX::getMethod() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e4a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e4a0  _ZNK5yaSSL7SSL_CTX9getMethodEv
#           yaSSL::SSL_CTX::getMethod() const
# range [0x0874e4a0, 0x0874e4aa]
0874e4a0 +0x00:  push   %ebp
0874e4a1 +0x01:  mov    %esp,%ebp
0874e4a3 +0x03:  mov    0x8(%ebp),%eax
0874e4a6 +0x06:  pop    %ebp
0874e4a7 +0x07:  mov    (%eax),%eax
0874e4a9 +0x09:  ret
0874e4aa +0x0a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::getMethod @ 0x874e4a0

/* yaSSL::SSL_CTX::getMethod() const */

undefined4 __thiscall yaSSL::SSL_CTX::getMethod(SSL_CTX *this)

{
  return *(undefined4 *)this;
}
```
