# use_certManager

`_ZN5yaSSL6Crypto15use_certManagerEv`

`yaSSL::Crypto::use_certManager()`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e7e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e7e0  _ZN5yaSSL6Crypto15use_certManagerEv
#           yaSSL::Crypto::use_certManager()
# range [0x0874e7e0, 0x0874e7ec]
0874e7e0 +0x00:  push   %ebp
0874e7e1 +0x01:  mov    %esp,%ebp
0874e7e3 +0x03:  mov    0x8(%ebp),%eax
0874e7e6 +0x06:  pop    %ebp
0874e7e7 +0x07:  add    $0x10,%eax
0874e7ea +0x0a:  ret
0874e7eb +0x0b:  nop
0874e7ec +0x0c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::Crypto::use_certManager @ 0x874e7e0

/* yaSSL::Crypto::use_certManager() */

Crypto * __thiscall yaSSL::Crypto::use_certManager(Crypto *this)

{
  return this + 0x10;
}
```
