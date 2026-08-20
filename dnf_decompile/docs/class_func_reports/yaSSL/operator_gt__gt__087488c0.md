# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_17CertificateVerifyE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::CertificateVerify&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x087488c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087488c0  _ZN5yaSSLrsERNS_12input_bufferERNS_17CertificateVerifyE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::CertificateVerify&)
# range [0x087488c0, 0x0874895a]
087488c0 +0x00:  push   %ebp
087488c1 +0x01:  mov    %esp,%ebp
087488c3 +0x03:  sub    $0x48,%esp
087488c6 +0x06:  mov    %ebx,-0xc(%ebp)
087488c9 +0x09:  lea    -0x1a(%ebp),%eax
087488cc +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
087488d1 +0x11:  add    $0xc242c7,%ebx
087488d7 +0x17:  mov    %esi,-0x8(%ebp)
087488da +0x1a:  mov    0x8(%ebp),%esi
087488dd +0x1d:  mov    %edi,-0x4(%ebp)
087488e0 +0x20:  mov    0xc(%ebp),%edi
087488e3 +0x23:  mov    %eax,0x4(%esp)
087488e7 +0x27:  mov    %eax,-0x2c(%ebp)
087488ea +0x2a:  movl   $0x2,0x8(%esp)
087488f2 +0x32:  mov    %esi,(%esp)
087488f5 +0x35:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
087488fa +0x3a:  mov    -0x2c(%ebp),%eax
087488fd +0x3d:  lea    -0x1c(%ebp),%edx
08748900 +0x40:  mov    %edx,0x4(%esp)
08748904 +0x44:  movw   $0x0,-0x1c(%ebp)
0874890a +0x4a:  mov    %eax,(%esp)
0874890d +0x4d:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
08748912 +0x52:  movzwl -0x1c(%ebp),%eax
08748916 +0x56:  mov    %edi,(%esp)
08748919 +0x59:  mov    %eax,0x4(%esp)
0874891d +0x5d:  call   08746ab0 <_ZN5yaSSL13HandShakeBase10set_lengthEi>  ; yaSSL::HandShakeBase::set_length(int)
08748922 +0x62:  movzwl -0x1c(%ebp),%eax
08748926 +0x66:  movb   $0x0,0x4(%esp)
0874892b +0x6b:  mov    %eax,(%esp)
0874892e +0x6e:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08748933 +0x73:  movzwl -0x1c(%ebp),%edx
08748937 +0x77:  mov    %eax,0x2c(%edi)
0874893a +0x7a:  mov    %eax,0x4(%esp)
0874893e +0x7e:  mov    %esi,(%esp)
08748941 +0x81:  mov    %edx,0x8(%esp)
08748945 +0x85:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
0874894a +0x8a:  mov    %esi,%eax
0874894c +0x8c:  mov    -0xc(%ebp),%ebx
0874894f +0x8f:  mov    -0x8(%ebp),%esi
08748952 +0x92:  mov    -0x4(%ebp),%edi
08748955 +0x95:  mov    %ebp,%esp
08748957 +0x97:  pop    %ebp
08748958 +0x98:  ret
08748959 +0x99:  nop
0874895a +0x9a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x87488c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::CertificateVerify&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,CertificateVerify *param_2)

{
  uint uVar1;
  uchar *puVar2;
  ushort local_20;
  uchar local_1e [14];
  
  input_buffer::read(param_1,local_1e,2);
  local_20 = 0;
  ato16(local_1e,&local_20);
  uVar1 = (uint)local_20;
  HandShakeBase::set_length((HandShakeBase *)param_2,uVar1);
  puVar2 = operator_new__(local_20,uVar1 & 0xffffff00);
  *(uchar **)(param_2 + 0x2c) = puVar2;
  input_buffer::read(param_1,puVar2,(uint)local_20);
  return param_1;
}
```
