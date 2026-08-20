# GetCiphers

`_ZNK5yaSSL7SSL_CTX10GetCiphersEv`

`yaSSL::SSL_CTX::GetCiphers() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_CTX` | `0x0874e4b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e4b0  _ZNK5yaSSL7SSL_CTX10GetCiphersEv
#           yaSSL::SSL_CTX::GetCiphers() const
# range [0x0874e4b0, 0x0874e4bc]
0874e4b0 +0x00:  push   %ebp
0874e4b1 +0x01:  mov    %esp,%ebp
0874e4b3 +0x03:  mov    0x8(%ebp),%eax
0874e4b6 +0x06:  pop    %ebp
0874e4b7 +0x07:  add    $0x18,%eax
0874e4ba +0x0a:  ret
0874e4bb +0x0b:  nop
0874e4bc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_CTX::GetCiphers @ 0x874e4b0

/* yaSSL::SSL_CTX::GetCiphers() const */

SSL_CTX * __thiscall yaSSL::SSL_CTX::GetCiphers(SSL_CTX *this)

{
  return this + 0x18;
}
```
