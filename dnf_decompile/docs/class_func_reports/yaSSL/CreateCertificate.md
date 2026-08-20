# CreateCertificate

`_ZN5yaSSL17CreateCertificateEv`

`yaSSL::CreateCertificate()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087476d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087476d0  _ZN5yaSSL17CreateCertificateEv
#           yaSSL::CreateCertificate()
# range [0x087476d0, 0x0874770e]
087476d0 +0x00:  push   %ebp
087476d1 +0x01:  mov    %esp,%ebp
087476d3 +0x03:  sub    $0x18,%esp
087476d6 +0x06:  mov    %ebx,-0x8(%ebp)
087476d9 +0x09:  mov    %esi,-0x4(%ebp)
087476dc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087476e1 +0x11:  add    $0xc254b7,%ebx
087476e7 +0x17:  movb   $0x0,0x4(%esp)
087476ec +0x1c:  movl   $0xc,(%esp)
087476f3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087476f8 +0x28:  mov    %eax,%esi
087476fa +0x2a:  mov    %eax,(%esp)
087476fd +0x2d:  call   08746d10 <_ZN5yaSSL11CertificateC1Ev>  ; yaSSL::Certificate::Certificate()
08747702 +0x32:  mov    %esi,%eax
08747704 +0x34:  mov    -0x8(%ebp),%ebx
08747707 +0x37:  mov    -0x4(%ebp),%esi
0874770a +0x3a:  mov    %ebp,%esp
0874770c +0x3c:  pop    %ebp
0874770d +0x3d:  ret
0874770e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateCertificate @ 0x87476d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCertificate() */

Certificate * yaSSL::CreateCertificate(void)

{
  Certificate *this;
  
  this = operator_new(0xc,0);
  Certificate::Certificate(this);
  return this;
}
```
