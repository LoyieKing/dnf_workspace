# ~CertificateVerify

`_ZN5yaSSL17CertificateVerifyD0Ev`

`yaSSL::CertificateVerify::~CertificateVerify()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x0874b910` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b910  _ZN5yaSSL17CertificateVerifyD0Ev
#           yaSSL::CertificateVerify::~CertificateVerify()
# range [0x0874b910, 0x0874b93a]
0874b910 +0x00:  push   %ebp
0874b911 +0x01:  mov    %esp,%ebp
0874b913 +0x03:  push   %ebx
0874b914 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b919 +0x09:  add    $0xc2127f,%ebx
0874b91f +0x0f:  sub    $0x14,%esp
0874b922 +0x12:  mov    0x8(%ebp),%eax
0874b925 +0x15:  mov    %eax,(%esp)
0874b928 +0x18:  call   0874b8c0 <_ZN5yaSSL17CertificateVerifyD1Ev>  ; yaSSL::CertificateVerify::~CertificateVerify()
0874b92d +0x1d:  add    $0x14,%esp
0874b930 +0x20:  pop    %ebx
0874b931 +0x21:  pop    %ebp
0874b932 +0x22:  ret
0874b933 +0x23:  nop
0874b934 +0x24:  lea    0x0(%esi),%esi
0874b93a +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CertificateVerify::~CertificateVerify @ 0x874b910

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::~CertificateVerify() */

void __thiscall yaSSL::CertificateVerify::~CertificateVerify(CertificateVerify *this)

{
  ~CertificateVerify(this);
  return;
}
```
