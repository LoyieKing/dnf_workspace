# ~CertificateVerify

`_ZN5yaSSL17CertificateVerifyD1Ev`

`yaSSL::CertificateVerify::~CertificateVerify()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x0874b8c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b8c0  _ZN5yaSSL17CertificateVerifyD1Ev
#           yaSSL::CertificateVerify::~CertificateVerify()
# range [0x0874b8c0, 0x0874b90a]
0874b8c0 +0x00:  push   %ebp
0874b8c1 +0x01:  mov    %esp,%ebp
0874b8c3 +0x03:  sub    $0x18,%esp
0874b8c6 +0x06:  mov    %ebx,-0x8(%ebp)
0874b8c9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b8ce +0x0e:  add    $0xc212ca,%ebx
0874b8d4 +0x14:  mov    %esi,-0x4(%ebp)
0874b8d7 +0x17:  mov    0x8(%ebp),%esi
0874b8da +0x1a:  mov    -0x58c(%ebx),%eax
0874b8e0 +0x20:  add    $0x8,%eax
0874b8e3 +0x23:  mov    %eax,(%esi)
0874b8e5 +0x25:  movb   $0x0,0x4(%esp)
0874b8ea +0x2a:  mov    0x2c(%esi),%eax
0874b8ed +0x2d:  mov    %eax,(%esp)
0874b8f0 +0x30:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
0874b8f5 +0x35:  mov    -0x5b4(%ebx),%eax
0874b8fb +0x3b:  add    $0x8,%eax
0874b8fe +0x3e:  mov    %eax,(%esi)
0874b900 +0x40:  mov    -0x8(%ebp),%ebx
0874b903 +0x43:  mov    -0x4(%ebp),%esi
0874b906 +0x46:  mov    %ebp,%esp
0874b908 +0x48:  pop    %ebp
0874b909 +0x49:  ret
0874b90a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::CertificateVerify::~CertificateVerify @ 0x874b8c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::~CertificateVerify() */

void __thiscall yaSSL::CertificateVerify::~CertificateVerify(CertificateVerify *this)

{
  *(undefined **)this = PTR_vtable_0936c60c + 8;
  operator_delete__(*(undefined4 *)(this + 0x2c),0);
  *(undefined **)this = PTR_vtable_0936c5e4 + 8;
  return;
}
```
