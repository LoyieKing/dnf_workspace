# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ServerHello&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747d10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747d10  _ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::ServerHello&)
# range [0x08747d10, 0x08747dea]
08747d10 +0x00:  push   %ebp
08747d11 +0x01:  mov    %esp,%ebp
08747d13 +0x03:  push   %edi
08747d14 +0x04:  push   %esi
08747d15 +0x05:  push   %ebx
08747d16 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
08747d1b +0x0b:  add    $0xc24e7d,%ebx
08747d21 +0x11:  sub    $0x1c,%esp
08747d24 +0x14:  mov    0x8(%ebp),%esi
08747d27 +0x17:  mov    0xc(%ebp),%edi
08747d2a +0x1a:  movl   $0xfeedbeef,0x4(%esp)
08747d32 +0x22:  mov    %esi,(%esp)
08747d35 +0x25:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747d3a +0x2a:  movzbl (%eax),%eax
08747d3d +0x2d:  mov    %al,0x8(%edi)
08747d40 +0x30:  movl   $0xfeedbeef,0x4(%esp)
08747d48 +0x38:  mov    %esi,(%esp)
08747d4b +0x3b:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747d50 +0x40:  movzbl (%eax),%eax
08747d53 +0x43:  mov    %al,0x9(%edi)
08747d56 +0x46:  lea    0xa(%edi),%eax
08747d59 +0x49:  mov    %eax,0x4(%esp)
08747d5d +0x4d:  movl   $0x20,0x8(%esp)
08747d65 +0x55:  mov    %esi,(%esp)
08747d68 +0x58:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08747d6d +0x5d:  movl   $0xfeedbeef,0x4(%esp)
08747d75 +0x65:  mov    %esi,(%esp)
08747d78 +0x68:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747d7d +0x6d:  movzbl (%eax),%eax
08747d80 +0x70:  test   %al,%al
08747d82 +0x72:  mov    %al,0x2a(%edi)
08747d85 +0x75:  je     08747d9d <+0x8d>
08747d87 +0x77:  movzbl %al,%eax
08747d8a +0x7a:  mov    %eax,0x8(%esp)
08747d8e +0x7e:  lea    0x2b(%edi),%eax
08747d91 +0x81:  mov    %eax,0x4(%esp)
08747d95 +0x85:  mov    %esi,(%esp)
08747d98 +0x88:  call   08797040 <_ZN5yaSSL12input_buffer4readEPhj>  ; yaSSL::input_buffer::read(unsigned char*, unsigned int)
08747d9d +0x8d:  mov    %esi,(%esp)
08747da0 +0x90:  movl   $0xfeedbeef,0x4(%esp)
08747da8 +0x98:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747dad +0x9d:  movzbl (%eax),%eax
08747db0 +0xa0:  mov    %al,0x4b(%edi)
08747db3 +0xa3:  mov    %esi,(%esp)
08747db6 +0xa6:  movl   $0xfeedbeef,0x4(%esp)
08747dbe +0xae:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747dc3 +0xb3:  movzbl (%eax),%eax
08747dc6 +0xb6:  mov    %al,0x4c(%edi)
08747dc9 +0xb9:  mov    %esi,(%esp)
08747dcc +0xbc:  movl   $0xfeedbeef,0x4(%esp)
08747dd4 +0xc4:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747dd9 +0xc9:  movzbl (%eax),%eax
08747ddc +0xcc:  mov    %eax,0x50(%edi)
08747ddf +0xcf:  add    $0x1c,%esp
08747de2 +0xd2:  mov    %esi,%eax
08747de4 +0xd4:  pop    %ebx
08747de5 +0xd5:  pop    %esi
08747de6 +0xd6:  pop    %edi
08747de7 +0xd7:  pop    %ebp
08747de8 +0xd8:  ret
08747de9 +0xd9:  nop
08747dea +0xda:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8747d10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::ServerHello&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,ServerHello *param_2)

{
  ServerHello SVar1;
  ServerHello *pSVar2;
  byte *pbVar3;
  
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[8] = *pSVar2;
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[9] = *pSVar2;
  input_buffer::read(param_1,(uchar *)(param_2 + 10),0x20);
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  SVar1 = *pSVar2;
  param_2[0x2a] = SVar1;
  if (SVar1 != (ServerHello)0x0) {
    input_buffer::read(param_1,(uchar *)(param_2 + 0x2b),(uint)(byte)SVar1);
  }
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[0x4b] = *pSVar2;
  pSVar2 = (ServerHello *)input_buffer::operator[]((uint)param_1);
  param_2[0x4c] = *pSVar2;
  pbVar3 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 0x50) = (uint)*pbVar3;
  return param_1;
}
```
