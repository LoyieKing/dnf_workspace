# get

`_ZNK5yaSSL17CertificateVerify3getERNS_13output_bufferE`

`yaSSL::CertificateVerify::get(yaSSL::output_buffer&) const`

| 类 | 地址 |
|---|---|
| `yaSSL::CertificateVerify` | `0x087484d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087484d0  _ZNK5yaSSL17CertificateVerify3getERNS_13output_bufferE
#           yaSSL::CertificateVerify::get(yaSSL::output_buffer&) const
# range [0x087484d0, 0x087484fa]
087484d0 +0x00:  push   %ebp
087484d1 +0x01:  mov    %esp,%ebp
087484d3 +0x03:  push   %ebx
087484d4 +0x04:  sub    $0x14,%esp
087484d7 +0x07:  mov    0x8(%ebp),%eax
087484da +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
087484df +0x0f:  add    $0xc246b9,%ebx
087484e5 +0x15:  mov    %eax,0x4(%esp)
087484e9 +0x19:  mov    0xc(%ebp),%eax
087484ec +0x1c:  mov    %eax,(%esp)
087484ef +0x1f:  call   08748480 <_ZN5yaSSLlsERNS_13output_bufferERKNS_17CertificateVerifyE>  ; yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::CertificateVerify const&)
087484f4 +0x24:  add    $0x14,%esp
087484f7 +0x27:  pop    %ebx
087484f8 +0x28:  pop    %ebp
087484f9 +0x29:  ret
087484fa +0x2a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::CertificateVerify::get @ 0x87484d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::CertificateVerify::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::CertificateVerify::get(CertificateVerify *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}
```
