# multipleProtocol

`_ZNK5yaSSL10SSL_METHOD16multipleProtocolEv`

`yaSSL::SSL_METHOD::multipleProtocol() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_METHOD` | `0x0874e450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e450  _ZNK5yaSSL10SSL_METHOD16multipleProtocolEv
#           yaSSL::SSL_METHOD::multipleProtocol() const
# range [0x0874e450, 0x0874e45c]
0874e450 +0x00:  push   %ebp
0874e451 +0x01:  mov    %esp,%ebp
0874e453 +0x03:  mov    0x8(%ebp),%eax
0874e456 +0x06:  pop    %ebp
0874e457 +0x07:  movzbl 0xb(%eax),%eax
0874e45b +0x0b:  ret
0874e45c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_METHOD::multipleProtocol @ 0x874e450

/* yaSSL::SSL_METHOD::multipleProtocol() const */

SSL_METHOD __thiscall yaSSL::SSL_METHOD::multipleProtocol(SSL_METHOD *this)

{
  return this[0xb];
}
```
