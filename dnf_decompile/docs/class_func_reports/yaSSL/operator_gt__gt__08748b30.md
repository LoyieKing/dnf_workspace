# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_17RecordLayerHeaderE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::RecordLayerHeader&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08748b30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08748b30  _ZN5yaSSLrsERNS_12input_bufferERNS_17RecordLayerHeaderE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::RecordLayerHeader&)
# range [0x08748b30, 0x08748bde]
08748b30 +0x00:  push   %ebp
08748b31 +0x01:  mov    %esp,%ebp
08748b33 +0x03:  sub    $0x38,%esp
08748b36 +0x06:  mov    %ebx,-0xc(%ebp)
08748b39 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08748b3e +0x0e:  add    $0xc2405a,%ebx
08748b44 +0x14:  mov    %esi,-0x8(%ebp)
08748b47 +0x17:  mov    0x8(%ebp),%esi
08748b4a +0x1a:  mov    %edi,-0x4(%ebp)
08748b4d +0x1d:  mov    0xc(%ebp),%edi
08748b50 +0x20:  movl   $0xfeedbeef,0x4(%esp)
08748b58 +0x28:  mov    %esi,(%esp)
08748b5b +0x2b:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08748b60 +0x30:  movzbl (%eax),%eax
08748b63 +0x33:  mov    %eax,(%edi)
08748b65 +0x35:  mov    %esi,(%esp)
08748b68 +0x38:  movl   $0xfeedbeef,0x4(%esp)
08748b70 +0x40:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08748b75 +0x45:  movzbl (%eax),%eax
08748b78 +0x48:  mov    %al,0x4(%edi)
08748b7b +0x4b:  mov    %esi,(%esp)
08748b7e +0x4e:  movl   $0xfeedbeef,0x4(%esp)
08748b86 +0x56:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08748b8b +0x5b:  movzbl (%eax),%eax
08748b8e +0x5e:  mov    %al,0x5(%edi)
08748b91 +0x61:  add    $0x6,%edi
08748b94 +0x64:  mov    %esi,(%esp)
08748b97 +0x67:  movl   $0xfeedbeef,0x4(%esp)
08748b9f +0x6f:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08748ba4 +0x74:  movzbl (%eax),%eax
08748ba7 +0x77:  mov    %esi,(%esp)
08748baa +0x7a:  movl   $0xfeedbeef,0x4(%esp)
08748bb2 +0x82:  mov    %al,-0x1a(%ebp)
08748bb5 +0x85:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08748bba +0x8a:  movzbl (%eax),%eax
08748bbd +0x8d:  mov    %edi,0x4(%esp)
08748bc1 +0x91:  mov    %al,-0x19(%ebp)
08748bc4 +0x94:  lea    -0x1a(%ebp),%eax
08748bc7 +0x97:  mov    %eax,(%esp)
08748bca +0x9a:  call   0874dd90 <_ZN5yaSSL5ato16EPKhRt>  ; yaSSL::ato16(unsigned char const*, unsigned short&)
08748bcf +0x9f:  mov    %esi,%eax
08748bd1 +0xa1:  mov    -0xc(%ebp),%ebx
08748bd4 +0xa4:  mov    -0x8(%ebp),%esi
08748bd7 +0xa7:  mov    -0x4(%ebp),%edi
08748bda +0xaa:  mov    %ebp,%esp
08748bdc +0xac:  pop    %ebp
08748bdd +0xad:  ret
08748bde +0xae:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8748b30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::RecordLayerHeader&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,RecordLayerHeader *param_2)

{
  byte *pbVar1;
  RecordLayerHeader *pRVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  uchar local_1e;
  undefined1 local_1d;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)param_2 = (uint)*pbVar1;
  pRVar2 = (RecordLayerHeader *)input_buffer::operator[]((uint)param_1);
  param_2[4] = *pRVar2;
  pRVar2 = (RecordLayerHeader *)input_buffer::operator[]((uint)param_1);
  param_2[5] = *pRVar2;
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_1);
  local_1e = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_1);
  local_1d = *puVar4;
  ato16(&local_1e,(ushort *)(param_2 + 6));
  return param_1;
}
```
