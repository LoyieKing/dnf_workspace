# CreateCertificateRequest

`_ZN5yaSSL24CreateCertificateRequestEv`

`yaSSL::CreateCertificateRequest()`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747990  _ZN5yaSSL24CreateCertificateRequestEv
#           yaSSL::CreateCertificateRequest()
# range [0x08747990, 0x087479ce]
08747990 +0x00:  push   %ebp
08747991 +0x01:  mov    %esp,%ebp
08747993 +0x03:  sub    $0x18,%esp
08747996 +0x06:  mov    %ebx,-0x8(%ebp)
08747999 +0x09:  mov    %esi,-0x4(%ebp)
0874799c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087479a1 +0x11:  add    $0xc251f7,%ebx
087479a7 +0x17:  movb   $0x0,0x4(%esp)
087479ac +0x1c:  movl   $0x34,(%esp)
087479b3 +0x23:  call   08750ca0 <_ZnwjN5yaSSL5new_tE>  ; operator new(unsigned int, yaSSL::new_t)
087479b8 +0x28:  mov    %eax,%esi
087479ba +0x2a:  mov    %eax,(%esp)
087479bd +0x2d:  call   08747940 <_ZN5yaSSL18CertificateRequestC1Ev>  ; yaSSL::CertificateRequest::CertificateRequest()
087479c2 +0x32:  mov    %esi,%eax
087479c4 +0x34:  mov    -0x8(%ebp),%ebx
087479c7 +0x37:  mov    -0x4(%ebp),%esi
087479ca +0x3a:  mov    %ebp,%esp
087479cc +0x3c:  pop    %ebp
087479cd +0x3d:  ret
087479ce +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::CreateCertificateRequest @ 0x8747990

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CreateCertificateRequest() */

CertificateRequest * yaSSL::CreateCertificateRequest(void)

{
  CertificateRequest *this;
  
  this = operator_new(0x34,0);
  CertificateRequest::CertificateRequest(this);
  return this;
}
```
