# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_15HandShakeHeaderE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::HandShakeHeader&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747f20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747f20  _ZN5yaSSLrsERNS_12input_bufferERNS_15HandShakeHeaderE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::HandShakeHeader&)
# range [0x08747f20, 0x08747fa9]
08747f20 +0x00:  push   %ebp
08747f21 +0x01:  mov    %esp,%ebp
08747f23 +0x03:  sub    $0x28,%esp
08747f26 +0x06:  mov    %ebx,-0xc(%ebp)
08747f29 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08747f2e +0x0e:  add    $0xc24c6a,%ebx
08747f34 +0x14:  mov    %esi,-0x8(%ebp)
08747f37 +0x17:  mov    0x8(%ebp),%esi
08747f3a +0x1a:  mov    %edi,-0x4(%ebp)
08747f3d +0x1d:  mov    0xc(%ebp),%edi
08747f40 +0x20:  movl   $0xfeedbeef,0x4(%esp)
08747f48 +0x28:  mov    %esi,(%esp)
08747f4b +0x2b:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747f50 +0x30:  movzbl (%eax),%eax
08747f53 +0x33:  mov    %eax,0x4(%edi)
08747f56 +0x36:  mov    %esi,(%esp)
08747f59 +0x39:  movl   $0xfeedbeef,0x4(%esp)
08747f61 +0x41:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747f66 +0x46:  movzbl (%eax),%eax
08747f69 +0x49:  mov    %al,0x8(%edi)
08747f6c +0x4c:  mov    %esi,(%esp)
08747f6f +0x4f:  movl   $0xfeedbeef,0x4(%esp)
08747f77 +0x57:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747f7c +0x5c:  movzbl (%eax),%eax
08747f7f +0x5f:  mov    %al,0x9(%edi)
08747f82 +0x62:  mov    %esi,(%esp)
08747f85 +0x65:  movl   $0xfeedbeef,0x4(%esp)
08747f8d +0x6d:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747f92 +0x72:  movzbl (%eax),%eax
08747f95 +0x75:  mov    %al,0xa(%edi)
08747f98 +0x78:  mov    %esi,%eax
08747f9a +0x7a:  mov    -0xc(%ebp),%ebx
08747f9d +0x7d:  mov    -0x8(%ebp),%esi
08747fa0 +0x80:  mov    -0x4(%ebp),%edi
08747fa3 +0x83:  mov    %ebp,%esp
08747fa5 +0x85:  pop    %ebp
08747fa6 +0x86:  ret
08747fa7 +0x87:  nop
08747fa8 +0x88:  nop
08747fa9 +0x89:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8747f20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::HandShakeHeader&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,HandShakeHeader *param_2)

{
  byte *pbVar1;
  HandShakeHeader *pHVar2;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 4) = (uint)*pbVar1;
  pHVar2 = (HandShakeHeader *)input_buffer::operator[]((uint)param_1);
  param_2[8] = *pHVar2;
  pHVar2 = (HandShakeHeader *)input_buffer::operator[]((uint)param_1);
  param_2[9] = *pHVar2;
  pHVar2 = (HandShakeHeader *)input_buffer::operator[]((uint)param_1);
  param_2[10] = *pHVar2;
  return param_1;
}
```
