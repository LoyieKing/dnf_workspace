# CertificateVerify

`_ZN5yaSSL17CertificateVerifyC1Ev`

`yaSSL::CertificateVerify::CertificateVerify()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x08747070` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747070  _ZN5yaSSL17CertificateVerifyC1Ev
#           yaSSL::CertificateVerify::CertificateVerify()
# range [0x08747070, 0x08747099]
08747070 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
08747075 +0x05:  add    $0xc25b23,%ecx
0874707b +0x0b:  push   %ebp
0874707c +0x0c:  mov    %esp,%ebp
0874707e +0x0e:  mov    0x8(%ebp),%eax
08747081 +0x11:  mov    -0x58c(%ecx),%edx
08747087 +0x17:  movl   $0x0,0x2c(%eax)
0874708e +0x1e:  add    $0x8,%edx
08747091 +0x21:  mov    %edx,(%eax)
08747093 +0x23:  pop    %ebp
08747094 +0x24:  ret
08747095 +0x25:  nop
08747096 +0x26:  lea    0x0(%esi),%esi
08747099 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::CertificateVerify::CertificateVerify @ 0x8747070

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::CertificateVerify::CertificateVerify() */

void __thiscall yaSSL::CertificateVerify::CertificateVerify(CertificateVerify *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936c60c;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}
```
