# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_17CertificateVerifyE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::CertificateVerify const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748480` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748480  _ZN5yaSSLlsERNS_13output_bufferERKNS_17CertificateVerifyE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::CertificateVerify const&)
# range [0x08748480, 0x087484ca]
08748480 +0x00:  push   %ebp
08748481 +0x01:  mov    %esp,%ebp
08748483 +0x03:  sub    $0x28,%esp
08748486 +0x06:  mov    %ebx,-0xc(%ebp)
08748489 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874848e +0x0e:  add    $0xc2470a,%ebx
08748494 +0x14:  mov    %edi,-0x4(%ebp)
08748497 +0x17:  mov    0xc(%ebp),%edi
0874849a +0x1a:  mov    %esi,-0x8(%ebp)
0874849d +0x1d:  mov    0x8(%ebp),%esi
087484a0 +0x20:  mov    %edi,(%esp)
087484a3 +0x23:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087484a8 +0x28:  mov    %eax,0x8(%esp)
087484ac +0x2c:  mov    0x2c(%edi),%eax
087484af +0x2f:  mov    %esi,(%esp)
087484b2 +0x32:  mov    %eax,0x4(%esp)
087484b6 +0x36:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087484bb +0x3b:  mov    %esi,%eax
087484bd +0x3d:  mov    -0xc(%ebp),%ebx
087484c0 +0x40:  mov    -0x8(%ebp),%esi
087484c3 +0x43:  mov    -0x4(%ebp),%edi
087484c6 +0x46:  mov    %ebp,%esp
087484c8 +0x48:  pop    %ebp
087484c9 +0x49:  ret
087484ca +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748480

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::CertificateVerify const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,CertificateVerify *param_2)

{
  uint uVar1;
  
  uVar1 = HandShakeBase::get_length((HandShakeBase *)param_2);
  output_buffer::write(param_1,*(uchar **)(param_2 + 0x2c),uVar1);
  return param_1;
}
```
