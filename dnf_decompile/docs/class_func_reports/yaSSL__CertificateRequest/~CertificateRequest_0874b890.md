# ~CertificateRequest

`_ZN5yaSSL18CertificateRequestD0Ev`

`yaSSL::CertificateRequest::~CertificateRequest()`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x0874b890` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874b890  _ZN5yaSSL18CertificateRequestD0Ev
#           yaSSL::CertificateRequest::~CertificateRequest()
# range [0x0874b890, 0x0874b8ba]
0874b890 +0x00:  push   %ebp
0874b891 +0x01:  mov    %esp,%ebp
0874b893 +0x03:  push   %ebx
0874b894 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874b899 +0x09:  add    $0xc212ff,%ebx
0874b89f +0x0f:  sub    $0x14,%esp
0874b8a2 +0x12:  mov    0x8(%ebp),%eax
0874b8a5 +0x15:  mov    %eax,(%esp)
0874b8a8 +0x18:  call   0874b800 <_ZN5yaSSL18CertificateRequestD1Ev>  ; yaSSL::CertificateRequest::~CertificateRequest()
0874b8ad +0x1d:  add    $0x14,%esp
0874b8b0 +0x20:  pop    %ebx
0874b8b1 +0x21:  pop    %ebp
0874b8b2 +0x22:  ret
0874b8b3 +0x23:  nop
0874b8b4 +0x24:  lea    0x0(%esi),%esi
0874b8ba +0x2a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::CertificateRequest::~CertificateRequest @ 0x874b890

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::~CertificateRequest() */

void __thiscall yaSSL::CertificateRequest::~CertificateRequest(CertificateRequest *this)

{
  ~CertificateRequest(this);
  return;
}
```
