# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_11ClientHelloE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ClientHello const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748d60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748d60  _ZN5yaSSLlsERNS_13output_bufferERKNS_11ClientHelloE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ClientHello const&)
# range [0x08748d60, 0x08748e89]
08748d60 +0x000:  push   %ebp
08748d61 +0x001:  mov    %esp,%ebp
08748d63 +0x003:  push   %edi
08748d64 +0x004:  push   %esi
08748d65 +0x005:  push   %ebx
08748d66 +0x006:  call   08722df8 <__i686.get_pc_thunk.bx>
08748d6b +0x00b:  add    $0xc23e2d,%ebx
08748d71 +0x011:  sub    $0x2c,%esp
08748d74 +0x014:  mov    0x8(%ebp),%esi
08748d77 +0x017:  mov    0xc(%ebp),%edi
08748d7a +0x01a:  movl   $0xfeedbeef,0x4(%esp)
08748d82 +0x022:  mov    %esi,(%esp)
08748d85 +0x025:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748d8a +0x02a:  movzbl 0x8(%edi),%edx
08748d8e +0x02e:  mov    %dl,(%eax)
08748d90 +0x030:  movl   $0xfeedbeef,0x4(%esp)
08748d98 +0x038:  mov    %esi,(%esp)
08748d9b +0x03b:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748da0 +0x040:  movzbl 0x9(%edi),%edx
08748da4 +0x044:  mov    %dl,(%eax)
08748da6 +0x046:  lea    0xa(%edi),%eax
08748da9 +0x049:  mov    %eax,0x4(%esp)
08748dad +0x04d:  movl   $0x20,0x8(%esp)
08748db5 +0x055:  mov    %esi,(%esp)
08748db8 +0x058:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748dbd +0x05d:  movl   $0xfeedbeef,0x4(%esp)
08748dc5 +0x065:  mov    %esi,(%esp)
08748dc8 +0x068:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748dcd +0x06d:  movzbl 0x2a(%edi),%edx
08748dd1 +0x071:  mov    %dl,(%eax)
08748dd3 +0x073:  cmpb   $0x0,0x2a(%edi)
08748dd7 +0x077:  je     08748df0 <+0x90>
08748dd9 +0x079:  lea    0x2b(%edi),%eax
08748ddc +0x07c:  movl   $0x20,0x8(%esp)
08748de4 +0x084:  mov    %eax,0x4(%esp)
08748de8 +0x088:  mov    %esi,(%esp)
08748deb +0x08b:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748df0 +0x090:  lea    -0x1a(%ebp),%eax
08748df3 +0x093:  mov    %eax,0x4(%esp)
08748df7 +0x097:  movzwl 0x4c(%edi),%eax
08748dfb +0x09b:  mov    %eax,(%esp)
08748dfe +0x09e:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
08748e03 +0x0a3:  mov    %esi,(%esp)
08748e06 +0x0a6:  movl   $0xfeedbeef,0x4(%esp)
08748e0e +0x0ae:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748e13 +0x0b3:  movzbl -0x1a(%ebp),%edx
08748e17 +0x0b7:  mov    %dl,(%eax)
08748e19 +0x0b9:  mov    %esi,(%esp)
08748e1c +0x0bc:  movl   $0xfeedbeef,0x4(%esp)
08748e24 +0x0c4:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748e29 +0x0c9:  movzbl -0x19(%ebp),%edx
08748e2d +0x0cd:  mov    %dl,(%eax)
08748e2f +0x0cf:  movzwl 0x4c(%edi),%eax
08748e33 +0x0d3:  mov    %esi,(%esp)
08748e36 +0x0d6:  mov    %eax,0x8(%esp)
08748e3a +0x0da:  lea    0x4e(%edi),%eax
08748e3d +0x0dd:  mov    %eax,0x4(%esp)
08748e41 +0x0e1:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748e46 +0x0e6:  mov    %esi,(%esp)
08748e49 +0x0e9:  movl   $0xfeedbeef,0x4(%esp)
08748e51 +0x0f1:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748e56 +0x0f6:  movzbl 0xce(%edi),%edx
08748e5d +0x0fd:  mov    %dl,(%eax)
08748e5f +0x0ff:  mov    %esi,(%esp)
08748e62 +0x102:  movl   $0xfeedbeef,0x4(%esp)
08748e6a +0x10a:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748e6f +0x10f:  mov    0xd0(%edi),%edx
08748e75 +0x115:  mov    %dl,(%eax)
08748e77 +0x117:  add    $0x2c,%esp
08748e7a +0x11a:  mov    %esi,%eax
08748e7c +0x11c:  pop    %ebx
08748e7d +0x11d:  pop    %esi
08748e7e +0x11e:  pop    %edi
08748e7f +0x11f:  pop    %ebp
08748e80 +0x120:  ret
08748e81 +0x121:  nop
08748e82 +0x122:  lea    0x0(%esi,%eiz,1),%esi
08748e89 +0x129:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748d60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ClientHello const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ClientHello *param_2)

{
  ClientHello *pCVar1;
  uchar *puVar2;
  undefined1 *puVar3;
  uchar local_1e;
  undefined1 local_1d;
  undefined4 uStack_14;
  
  uStack_14 = 0x8748d6b;
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[8];
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[9];
  output_buffer::write(param_1,(uchar *)(param_2 + 10),0x20);
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[0x2a];
  if (param_2[0x2a] != (ClientHello)0x0) {
    output_buffer::write(param_1,(uchar *)(param_2 + 0x2b),0x20);
  }
  c16toa(*(ushort *)(param_2 + 0x4c),&local_1e);
  puVar2 = (uchar *)output_buffer::operator[]((uint)param_1);
  *puVar2 = local_1e;
  puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar3 = local_1d;
  output_buffer::write(param_1,(uchar *)(param_2 + 0x4e),(uint)*(ushort *)(param_2 + 0x4c));
  pCVar1 = (ClientHello *)output_buffer::operator[]((uint)param_1);
  *pCVar1 = param_2[0xce];
  puVar3 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar3 = (char)*(undefined4 *)(param_2 + 0xd0);
  return param_1;
}
```
