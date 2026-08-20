# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_11ServerHelloE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ServerHello const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748ec0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748ec0  _ZN5yaSSLlsERNS_13output_bufferERKNS_11ServerHelloE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::ServerHello const&)
# range [0x08748ec0, 0x08748f99]
08748ec0 +0x00:  push   %ebp
08748ec1 +0x01:  mov    %esp,%ebp
08748ec3 +0x03:  push   %edi
08748ec4 +0x04:  push   %esi
08748ec5 +0x05:  push   %ebx
08748ec6 +0x06:  call   08722df8 <__i686.get_pc_thunk.bx>
08748ecb +0x0b:  add    $0xc23ccd,%ebx
08748ed1 +0x11:  sub    $0x1c,%esp
08748ed4 +0x14:  mov    0x8(%ebp),%esi
08748ed7 +0x17:  mov    0xc(%ebp),%edi
08748eda +0x1a:  movl   $0xfeedbeef,0x4(%esp)
08748ee2 +0x22:  mov    %esi,(%esp)
08748ee5 +0x25:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748eea +0x2a:  movzbl 0x8(%edi),%edx
08748eee +0x2e:  mov    %dl,(%eax)
08748ef0 +0x30:  mov    %esi,(%esp)
08748ef3 +0x33:  movl   $0xfeedbeef,0x4(%esp)
08748efb +0x3b:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748f00 +0x40:  movzbl 0x9(%edi),%edx
08748f04 +0x44:  mov    %dl,(%eax)
08748f06 +0x46:  lea    0xa(%edi),%eax
08748f09 +0x49:  mov    %eax,0x4(%esp)
08748f0d +0x4d:  mov    %esi,(%esp)
08748f10 +0x50:  movl   $0x20,0x8(%esp)
08748f18 +0x58:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748f1d +0x5d:  mov    %esi,(%esp)
08748f20 +0x60:  movl   $0xfeedbeef,0x4(%esp)
08748f28 +0x68:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748f2d +0x6d:  movzbl 0x2a(%edi),%edx
08748f31 +0x71:  mov    %dl,(%eax)
08748f33 +0x73:  lea    0x2b(%edi),%eax
08748f36 +0x76:  mov    %eax,0x4(%esp)
08748f3a +0x7a:  mov    %esi,(%esp)
08748f3d +0x7d:  movl   $0x20,0x8(%esp)
08748f45 +0x85:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
08748f4a +0x8a:  mov    %esi,(%esp)
08748f4d +0x8d:  movl   $0xfeedbeef,0x4(%esp)
08748f55 +0x95:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748f5a +0x9a:  movzbl 0x4b(%edi),%edx
08748f5e +0x9e:  mov    %dl,(%eax)
08748f60 +0xa0:  mov    %esi,(%esp)
08748f63 +0xa3:  movl   $0xfeedbeef,0x4(%esp)
08748f6b +0xab:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748f70 +0xb0:  movzbl 0x4c(%edi),%edx
08748f74 +0xb4:  mov    %dl,(%eax)
08748f76 +0xb6:  mov    %esi,(%esp)
08748f79 +0xb9:  movl   $0xfeedbeef,0x4(%esp)
08748f81 +0xc1:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08748f86 +0xc6:  mov    0x50(%edi),%edx
08748f89 +0xc9:  mov    %dl,(%eax)
08748f8b +0xcb:  add    $0x1c,%esp
08748f8e +0xce:  mov    %esi,%eax
08748f90 +0xd0:  pop    %ebx
08748f91 +0xd1:  pop    %esi
08748f92 +0xd2:  pop    %edi
08748f93 +0xd3:  pop    %ebp
08748f94 +0xd4:  ret
08748f95 +0xd5:  nop
08748f96 +0xd6:  lea    0x0(%esi),%esi
08748f99 +0xd9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8748ec0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::ServerHello const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,ServerHello *param_2)

{
  ServerHello *pSVar1;
  undefined1 *puVar2;
  
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[8];
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[9];
  output_buffer::write(param_1,(uchar *)(param_2 + 10),0x20);
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[0x2a];
  output_buffer::write(param_1,(uchar *)(param_2 + 0x2b),0x20);
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[0x4b];
  pSVar1 = (ServerHello *)output_buffer::operator[]((uint)param_1);
  *pSVar1 = param_2[0x4c];
  puVar2 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar2 = (char)*(undefined4 *)(param_2 + 0x50);
  return param_1;
}
```
