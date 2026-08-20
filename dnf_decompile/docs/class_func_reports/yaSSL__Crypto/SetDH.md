# SetDH

`_ZN5yaSSL6Crypto5SetDHEPNS_13DiffieHellmanE`

`yaSSL::Crypto::SetDH(yaSSL::DiffieHellman*)`

| 类 | 地址 |
|---|---|
| `yaSSL::Crypto` | `0x0874e7f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874e7f0  _ZN5yaSSL6Crypto5SetDHEPNS_13DiffieHellmanE
#           yaSSL::Crypto::SetDH(yaSSL::DiffieHellman*)
# range [0x0874e7f0, 0x0874e7fe]
0874e7f0 +0x00:  push   %ebp
0874e7f1 +0x01:  mov    %esp,%ebp
0874e7f3 +0x03:  mov    0xc(%ebp),%edx
0874e7f6 +0x06:  mov    0x8(%ebp),%eax
0874e7f9 +0x09:  mov    %edx,0x8(%eax)
0874e7fc +0x0c:  pop    %ebp
0874e7fd +0x0d:  ret
0874e7fe +0x0e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Crypto::SetDH @ 0x874e7f0

/* yaSSL::Crypto::SetDH(yaSSL::DiffieHellman*) */

void __thiscall yaSSL::Crypto::SetDH(Crypto *this,DiffieHellman *param_1)

{
  *(DiffieHellman **)(this + 8) = param_1;
  return;
}
```
