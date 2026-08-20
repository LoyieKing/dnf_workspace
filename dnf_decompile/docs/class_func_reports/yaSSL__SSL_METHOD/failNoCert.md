# failNoCert

`_ZNK5yaSSL10SSL_METHOD10failNoCertEv`

`yaSSL::SSL_METHOD::failNoCert() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e440` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e440  _ZNK5yaSSL10SSL_METHOD10failNoCertEv
#           yaSSL::SSL_METHOD::failNoCert() const
# range [0x0874e440, 0x0874e44c]
0874e440 +0x00:  push   %ebp
0874e441 +0x01:  mov    %esp,%ebp
0874e443 +0x03:  mov    0x8(%ebp),%eax
0874e446 +0x06:  pop    %ebp
0874e447 +0x07:  movzbl 0xa(%eax),%eax
0874e44b +0x0b:  ret
0874e44c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::failNoCert @ 0x874e440

/* yaSSL::SSL_METHOD::failNoCert() const */

SSL_METHOD __thiscall yaSSL::SSL_METHOD::failNoCert(SSL_METHOD *this)

{
  return this[10];
}
```
