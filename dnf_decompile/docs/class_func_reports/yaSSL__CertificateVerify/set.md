# set

`_ZN5yaSSL17CertificateVerify3setERNS_12input_bufferE`

`yaSSL::CertificateVerify::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x08748960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748960  _ZN5yaSSL17CertificateVerify3setERNS_12input_bufferE
#           yaSSL::CertificateVerify::set(yaSSL::input_buffer&)
# range [0x08748960, 0x0874898a]
08748960 +0x00:  push   %ebp
08748961 +0x01:  mov    %esp,%ebp
08748963 +0x03:  push   %ebx
08748964 +0x04:  sub    $0x14,%esp
08748967 +0x07:  mov    0x8(%ebp),%eax
0874896a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874896f +0x0f:  add    $0xc24229,%ebx
08748975 +0x15:  mov    %eax,0x4(%esp)
08748979 +0x19:  mov    0xc(%ebp),%eax
0874897c +0x1c:  mov    %eax,(%esp)
0874897f +0x1f:  call   087488c0 <_ZN5yaSSLrsERNS_12input_bufferERNS_17CertificateVerifyE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::CertificateVerify&)
08748984 +0x24:  add    $0x14,%esp
08748987 +0x27:  pop    %ebx
08748988 +0x28:  pop    %ebp
08748989 +0x29:  ret
0874898a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::CertificateVerify::set @ 0x8748960

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::CertificateVerify::set(CertificateVerify *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
