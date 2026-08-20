# use_cipher

`_ZN5yaSSL6Crypto10use_cipherEv`

`yaSSL::Crypto::use_cipher()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e7b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e7b0  _ZN5yaSSL6Crypto10use_cipherEv
#           yaSSL::Crypto::use_cipher()
# range [0x0874e7b0, 0x0874e7bc]
0874e7b0 +0x00:  push   %ebp
0874e7b1 +0x01:  mov    %esp,%ebp
0874e7b3 +0x03:  mov    0x8(%ebp),%eax
0874e7b6 +0x06:  pop    %ebp
0874e7b7 +0x07:  mov    0x4(%eax),%eax
0874e7ba +0x0a:  ret
0874e7bb +0x0b:  nop
0874e7bc +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::use_cipher @ 0x874e7b0

/* yaSSL::Crypto::use_cipher() */

undefined4 __thiscall yaSSL::Crypto::use_cipher(Crypto *this)

{
  return *(undefined4 *)(this + 4);
}
```
