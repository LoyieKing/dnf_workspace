# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_11CertificateE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Certificate const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087499b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087499b0  _ZN5yaSSLlsERNS_13output_bufferERKNS_11CertificateE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::Certificate const&)
# range [0x087499b0, 0x08749a5a]
087499b0 +0x00:  push   %ebp
087499b1 +0x01:  mov    %esp,%ebp
087499b3 +0x03:  sub    $0x48,%esp
087499b6 +0x06:  mov    %ebx,-0xc(%ebp)
087499b9 +0x09:  mov    0xc(%ebp),%edx
087499bc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087499c1 +0x11:  add    $0xc231d7,%ebx
087499c7 +0x17:  mov    %esi,-0x8(%ebp)
087499ca +0x1a:  mov    0x8(%ebp),%esi
087499cd +0x1d:  mov    %edi,-0x4(%ebp)
087499d0 +0x20:  mov    %edx,(%esp)
087499d3 +0x23:  mov    %edx,-0x30(%ebp)
087499d6 +0x26:  call   08746aa0 <_ZNK5yaSSL13HandShakeBase10get_lengthEv>  ; yaSSL::HandShakeBase::get_length() const
087499db +0x2b:  lea    -0x1b(%ebp),%ecx
087499de +0x2e:  mov    %ecx,-0x2c(%ebp)
087499e1 +0x31:  mov    %ecx,0x4(%esp)
087499e5 +0x35:  lea    -0x6(%eax),%edi
087499e8 +0x38:  sub    $0x3,%eax
087499eb +0x3b:  mov    %eax,(%esp)
087499ee +0x3e:  call   0874dd10 <_ZN5yaSSL7c32to24EjRA3_h>  ; yaSSL::c32to24(unsigned int, unsigned char (&) [3])
087499f3 +0x43:  mov    -0x2c(%ebp),%eax
087499f6 +0x46:  mov    %esi,(%esp)
087499f9 +0x49:  movl   $0x3,0x8(%esp)
08749a01 +0x51:  mov    %eax,0x4(%esp)
08749a05 +0x55:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08749a0a +0x5a:  mov    -0x2c(%ebp),%ecx
08749a0d +0x5d:  mov    %edi,(%esp)
08749a10 +0x60:  mov    %ecx,0x4(%esp)
08749a14 +0x64:  call   0874dd10 <_ZN5yaSSL7c32to24EjRA3_h>  ; yaSSL::c32to24(unsigned int, unsigned char (&) [3])
08749a19 +0x69:  mov    -0x2c(%ebp),%eax
08749a1c +0x6c:  mov    %esi,(%esp)
08749a1f +0x6f:  movl   $0x3,0x8(%esp)
08749a27 +0x77:  mov    %eax,0x4(%esp)
08749a2b +0x7b:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08749a30 +0x80:  mov    -0x30(%ebp),%edx
08749a33 +0x83:  mov    %edx,(%esp)
08749a36 +0x86:  call   08749980 <_ZNK5yaSSL11Certificate10get_bufferEv>  ; yaSSL::Certificate::get_buffer() const
08749a3b +0x8b:  mov    %edi,0x8(%esp)
08749a3f +0x8f:  mov    %esi,(%esp)
08749a42 +0x92:  mov    %eax,0x4(%esp)
08749a46 +0x96:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08749a4b +0x9b:  mov    %esi,%eax
08749a4d +0x9d:  mov    -0xc(%ebp),%ebx
08749a50 +0xa0:  mov    -0x8(%ebp),%esi
08749a53 +0xa3:  mov    -0x4(%ebp),%edi
08749a56 +0xa6:  mov    %ebp,%esp
08749a58 +0xa8:  pop    %ebp
08749a59 +0xa9:  ret
08749a5a +0xaa:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x87499b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::Certificate const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,Certificate *param_2)

{
  int iVar1;
  uchar *puVar2;
  unsigned_char local_1f [15];
  
  iVar1 = HandShakeBase::get_length((HandShakeBase *)param_2);
  c32to24(iVar1 - 3,local_1f);
  output_buffer::write(param_1,(uchar *)local_1f,3);
  c32to24(iVar1 - 6U,local_1f);
  output_buffer::write(param_1,(uchar *)local_1f,3);
  puVar2 = (uchar *)Certificate::get_buffer(param_2);
  output_buffer::write(param_1,puVar2,iVar1 - 6U);
  return param_1;
}
```
