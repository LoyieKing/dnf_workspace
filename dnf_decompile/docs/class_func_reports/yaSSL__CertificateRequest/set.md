# set

`_ZN5yaSSL18CertificateRequest3setERNS_12input_bufferE`

`yaSSL::CertificateRequest::set(yaSSL::input_buffer&)`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x08748b00` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748b00  _ZN5yaSSL18CertificateRequest3setERNS_12input_bufferE
#           yaSSL::CertificateRequest::set(yaSSL::input_buffer&)
# range [0x08748b00, 0x08748b2a]
08748b00 +0x00:  push   %ebp
08748b01 +0x01:  mov    %esp,%ebp
08748b03 +0x03:  push   %ebx
08748b04 +0x04:  sub    $0x14,%esp
08748b07 +0x07:  mov    0x8(%ebp),%eax
08748b0a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08748b0f +0x0f:  add    $0xc24089,%ebx
08748b15 +0x15:  mov    %eax,0x4(%esp)
08748b19 +0x19:  mov    0xc(%ebp),%eax
08748b1c +0x1c:  mov    %eax,(%esp)
08748b1f +0x1f:  call   08748990 <_ZN5yaSSLrsERNS_12input_bufferERNS_18CertificateRequestE>  ; yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::CertificateRequest&)
08748b24 +0x24:  add    $0x14,%esp
08748b27 +0x27:  pop    %ebx
08748b28 +0x28:  pop    %ebp
08748b29 +0x29:  ret
08748b2a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::CertificateRequest::set @ 0x8748b00

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::set(yaSSL::input_buffer&) */

void __thiscall yaSSL::CertificateRequest::set(CertificateRequest *this,input_buffer *param_1)

{
  yaSSL::operator>>(param_1,this);
  return;
}
```
