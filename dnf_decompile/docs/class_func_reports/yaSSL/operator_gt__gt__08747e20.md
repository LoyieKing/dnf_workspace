# operator>>

`_ZN5yaSSLrsERNS_12input_bufferERNS_5AlertE`

`yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Alert&)`

| 类 | 地址 |
|---|---|
| `yaSSL` | `0x08747e20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747e20  _ZN5yaSSLrsERNS_12input_bufferERNS_5AlertE
#           yaSSL::operator>>(yaSSL::input_buffer&, yaSSL::Alert&)
# range [0x08747e20, 0x08747e7c]
08747e20 +0x00:  push   %ebp
08747e21 +0x01:  mov    %esp,%ebp
08747e23 +0x03:  sub    $0x28,%esp
08747e26 +0x06:  mov    %ebx,-0xc(%ebp)
08747e29 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08747e2e +0x0e:  add    $0xc24d6a,%ebx
08747e34 +0x14:  mov    %esi,-0x8(%ebp)
08747e37 +0x17:  mov    0x8(%ebp),%esi
08747e3a +0x1a:  mov    %edi,-0x4(%ebp)
08747e3d +0x1d:  mov    0xc(%ebp),%edi
08747e40 +0x20:  movl   $0xfeedbeef,0x4(%esp)
08747e48 +0x28:  mov    %esi,(%esp)
08747e4b +0x2b:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747e50 +0x30:  movzbl (%eax),%eax
08747e53 +0x33:  mov    %eax,0x4(%edi)
08747e56 +0x36:  mov    %esi,(%esp)
08747e59 +0x39:  movl   $0xfeedbeef,0x4(%esp)
08747e61 +0x41:  call   08796e20 <_ZN5yaSSL12input_bufferixEj>  ; yaSSL::input_buffer::operator[](unsigned int)
08747e66 +0x46:  movzbl (%eax),%eax
08747e69 +0x49:  mov    %eax,0x8(%edi)
08747e6c +0x4c:  mov    %esi,%eax
08747e6e +0x4e:  mov    -0xc(%ebp),%ebx
08747e71 +0x51:  mov    -0x8(%ebp),%esi
08747e74 +0x54:  mov    -0x4(%ebp),%edi
08747e77 +0x57:  mov    %ebp,%esp
08747e79 +0x59:  pop    %ebp
08747e7a +0x5a:  ret
08747e7b +0x5b:  nop
08747e7c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::operator>> @ 0x8747e20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::TEMPNAMEPLACEHOLDERVALUE(yaSSL::input_buffer&, yaSSL::Alert&) */

input_buffer * yaSSL::operator>>(input_buffer *param_1,Alert *param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 4) = (uint)*pbVar1;
  pbVar1 = (byte *)input_buffer::operator[]((uint)param_1);
  *(uint *)(param_2 + 8) = (uint)*pbVar1;
  return param_1;
}
```
