# operator<<

`_ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE`

`yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08749160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08749160  _ZN5yaSSLlsERNS_13output_bufferERKNS_17RecordLayerHeaderE
#           yaSSL::operator<<(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&)
# range [0x08749160, 0x0874920e]
08749160 +0x00:  push   %ebp
08749161 +0x01:  mov    %esp,%ebp
08749163 +0x03:  sub    $0x38,%esp
08749166 +0x06:  mov    %ebx,-0xc(%ebp)
08749169 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0874916e +0x0e:  add    $0xc23a2a,%ebx
08749174 +0x14:  mov    %esi,-0x8(%ebp)
08749177 +0x17:  mov    0x8(%ebp),%esi
0874917a +0x1a:  mov    %edi,-0x4(%ebp)
0874917d +0x1d:  mov    0xc(%ebp),%edi
08749180 +0x20:  movl   $0xfeedbeef,0x4(%esp)
08749188 +0x28:  mov    %esi,(%esp)
0874918b +0x2b:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
08749190 +0x30:  mov    (%edi),%edx
08749192 +0x32:  mov    %dl,(%eax)
08749194 +0x34:  mov    %esi,(%esp)
08749197 +0x37:  movl   $0xfeedbeef,0x4(%esp)
0874919f +0x3f:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
087491a4 +0x44:  movzbl 0x4(%edi),%edx
087491a8 +0x48:  mov    %dl,(%eax)
087491aa +0x4a:  mov    %esi,(%esp)
087491ad +0x4d:  movl   $0xfeedbeef,0x4(%esp)
087491b5 +0x55:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
087491ba +0x5a:  movzbl 0x5(%edi),%edx
087491be +0x5e:  mov    %dl,(%eax)
087491c0 +0x60:  lea    -0x1a(%ebp),%eax
087491c3 +0x63:  mov    %eax,0x4(%esp)
087491c7 +0x67:  movzwl 0x6(%edi),%eax
087491cb +0x6b:  mov    %eax,(%esp)
087491ce +0x6e:  call   0874ddd0 <_ZN5yaSSL6c16toaEtPh>  ; yaSSL::c16toa(unsigned short, unsigned char*)
087491d3 +0x73:  mov    %esi,(%esp)
087491d6 +0x76:  movl   $0xfeedbeef,0x4(%esp)
087491de +0x7e:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
087491e3 +0x83:  movzbl -0x1a(%ebp),%edx
087491e7 +0x87:  mov    %dl,(%eax)
087491e9 +0x89:  mov    %esi,(%esp)
087491ec +0x8c:  movl   $0xfeedbeef,0x4(%esp)
087491f4 +0x94:  call   08796f40 <_ZN5yaSSL13output_bufferixEj>  ; yaSSL::output_buffer::operator[](unsigned int)
087491f9 +0x99:  movzbl -0x19(%ebp),%edx
087491fd +0x9d:  mov    %dl,(%eax)
087491ff +0x9f:  mov    %esi,%eax
08749201 +0xa1:  mov    -0xc(%ebp),%ebx
08749204 +0xa4:  mov    -0x8(%ebp),%esi
08749207 +0xa7:  mov    -0x4(%ebp),%edi
0874920a +0xaa:  mov    %ebp,%esp
0874920c +0xac:  pop    %ebp
0874920d +0xad:  ret
0874920e +0xae:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::operator<< @ 0x8749160

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::output_buffer&, yaSSL::RecordLayerHeader const&) */

output_buffer * yaSSL::operator<<(output_buffer *param_1,RecordLayerHeader *param_2)

{
  undefined1 *puVar1;
  RecordLayerHeader *pRVar2;
  uchar *puVar3;
  uchar local_1e;
  undefined1 local_1d;
  
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = (char)*(undefined4 *)param_2;
  pRVar2 = (RecordLayerHeader *)output_buffer::operator[]((uint)param_1);
  *pRVar2 = param_2[4];
  pRVar2 = (RecordLayerHeader *)output_buffer::operator[]((uint)param_1);
  *pRVar2 = param_2[5];
  c16toa(*(ushort *)(param_2 + 6),&local_1e);
  puVar3 = (uchar *)output_buffer::operator[]((uint)param_1);
  *puVar3 = local_1e;
  puVar1 = (undefined1 *)output_buffer::operator[]((uint)param_1);
  *puVar1 = local_1d;
  return param_1;
}
```
