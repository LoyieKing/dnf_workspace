# get

`_ZNK5yaSSL18CertificateRequest3getERNS_13output_bufferE`

`yaSSL::CertificateRequest::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateRequest` | `0x08748d30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748d30  _ZNK5yaSSL18CertificateRequest3getERNS_13output_bufferE
#           yaSSL::CertificateRequest::get(yaSSL::output_buffer&) const
# range [0x08748d30, 0x08748d5a]
08748d30 +0x00:  push   %ebp
08748d31 +0x01:  mov    %esp,%ebp
08748d33 +0x03:  push   %ebx
08748d34 +0x04:  sub    $0x14,%esp
08748d37 +0x07:  mov    0x8(%ebp),%eax
08748d3a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
08748d3f +0x0f:  add    $0xc23e59,%ebx
08748d45 +0x15:  mov    %eax,0x4(%esp)
08748d49 +0x19:  mov    0xc(%ebp),%eax
08748d4c +0x1c:  mov    %eax,(%esp)
08748d4f +0x1f:  call   08748c40 <_ZN5yaSSLlsERNS_13output_bufferERKNS_18CertificateRequestE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::CertificateRequest const&)
08748d54 +0x24:  add    $0x14,%esp
08748d57 +0x27:  pop    %ebx
08748d58 +0x28:  pop    %ebp
08748d59 +0x29:  ret
08748d5a +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::CertificateRequest::get @ 0x8748d30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateRequest::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::CertificateRequest::get(CertificateRequest *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
