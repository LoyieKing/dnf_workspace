# GetSecret

`_ZNK5yaSSL11SSL_SESSION9GetSecretEv`

`yaSSL::SSL_SESSION::GetSecret() const`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874e330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e330  _ZNK5yaSSL11SSL_SESSION9GetSecretEv
#           yaSSL::SSL_SESSION::GetSecret() const
# range [0x0874e330, 0x0874e33c]
0874e330 +0x00:  push   %ebp
0874e331 +0x01:  mov    %esp,%ebp
0874e333 +0x03:  mov    0x8(%ebp),%eax
0874e336 +0x06:  pop    %ebp
0874e337 +0x07:  add    $0x20,%eax
0874e33a +0x0a:  ret
0874e33b +0x0b:  nop
0874e33c +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::GetSecret @ 0x874e330

/* yaSSL::SSL_SESSION::GetSecret() const */

SSL_SESSION * __thiscall yaSSL::SSL_SESSION::GetSecret(SSL_SESSION *this)

{
  return this + 0x20;
}
```
