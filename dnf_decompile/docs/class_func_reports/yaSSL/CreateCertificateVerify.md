# CreateCertificateVerify

`_ZN5yaSSL23CreateCertificateVerifyEv`

`yaSSL::CreateCertificateVerify()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747610` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747610  _ZN5yaSSL23CreateCertificateVerifyEv
#           yaSSL::CreateCertificateVerify()
# range [0x08747610, 0x0874764e]
08747610 +0x00:  push   %ebp
08747611 +0x01:  mov    %esp,%ebp
08747613 +0x03:  sub    $0x18,%esp
08747616 +0x06:  mov    %ebx,-0x8(%ebp)
08747619 +0x09:  mov    %esi,-0x4(%ebp)
0874761c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08747621 +0x11:  add    $0xc25577,%ebx
08747627 +0x17:  movb   $0x0,0x4(%esp)
0874762c +0x1c:  movl   $0x30,(%esp)
08747633 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
08747638 +0x28:  mov    %eax,%esi
0874763a +0x2a:  mov    %eax,(%esp)
0874763d +0x2d:  call   08747070 <_ZN5yaSSL17CertificateVerifyC1Ev>  ; yaSSL::CertificateVerify::CertificateVerify()
08747642 +0x32:  mov    %esi,%eax
08747644 +0x34:  mov    -0x8(%ebp),%ebx
08747647 +0x37:  mov    -0x4(%ebp),%esi
0874764a +0x3a:  mov    %ebp,%esp
0874764c +0x3c:  pop    %ebp
0874764d +0x3d:  ret
0874764e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateCertificateVerify @ 0x8747610

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCertificateVerify() */

CertificateVerify * yaSSL::CreateCertificateVerify(void)

{
  CertificateVerify *this;
  
  this = operator_new(0x30,0);
  CertificateVerify::CertificateVerify(this);
  return this;
}
```
