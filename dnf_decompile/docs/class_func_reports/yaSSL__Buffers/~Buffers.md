# ~Buffers

`_ZN5yaSSL7BuffersD1Ev`

`yaSSL::Buffers::~Buffers()`

| 类 | 地址 |
|---|---|
| `yaSSL::Buffers` | `0x08752ce0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08752ce0  _ZN5yaSSL7BuffersD1Ev
#           yaSSL::Buffers::~Buffers()
# range [0x08752ce0, 0x08752dd9]
08752ce0 +0x00:  push   %ebp
08752ce1 +0x01:  mov    %esp,%ebp
08752ce3 +0x03:  push   %edi
08752ce4 +0x04:  push   %esi
08752ce5 +0x05:  push   %ebx
08752ce6 +0x06:  sub    $0x1c,%esp
08752ce9 +0x09:  mov    0x8(%ebp),%eax
08752cec +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
08752cf1 +0x11:  add    $0xc19ea7,%ebx
08752cf7 +0x17:  mov    0xc(%eax),%esi
08752cfa +0x1a:  test   %esi,%esi
08752cfc +0x1c:  je     08752d2a <+0x4a>
08752cfe +0x1e:  xchg   %ax,%ax
08752d00 +0x20:  mov    0x8(%esi),%edi
08752d03 +0x23:  movl   $0x0,0x8(%esi)
08752d0a +0x2a:  test   %edi,%edi
08752d0c +0x2c:  je     08752d16 <+0x36>
08752d0e +0x2e:  mov    %edi,(%esp)
08752d11 +0x31:  call   08797330 <_ZN5yaSSL13output_bufferD1Ev>  ; yaSSL::output_buffer::~output_buffer()
08752d16 +0x36:  movb   $0x0,0x4(%esp)
08752d1b +0x3b:  mov    %edi,(%esp)
08752d1e +0x3e:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752d23 +0x43:  mov    0x4(%esi),%esi
08752d26 +0x46:  test   %esi,%esi
08752d28 +0x48:  jne    08752d00 <+0x20>
08752d2a +0x4a:  mov    0x8(%ebp),%edx
08752d2d +0x4d:  mov    (%edx),%esi
08752d2f +0x4f:  test   %esi,%esi
08752d31 +0x51:  je     08752d62 <+0x82>
08752d33 +0x53:  nop
08752d34 +0x54:  lea    0x0(%esi,%eiz,1),%esi
08752d38 +0x58:  mov    0x8(%esi),%edi
08752d3b +0x5b:  movl   $0x0,0x8(%esi)
08752d42 +0x62:  test   %edi,%edi
08752d44 +0x64:  je     08752d4e <+0x6e>
08752d46 +0x66:  mov    %edi,(%esp)
08752d49 +0x69:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08752d4e +0x6e:  movb   $0x0,0x4(%esp)
08752d53 +0x73:  mov    %edi,(%esp)
08752d56 +0x76:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752d5b +0x7b:  mov    0x4(%esi),%esi
08752d5e +0x7e:  test   %esi,%esi
08752d60 +0x80:  jne    08752d38 <+0x58>
08752d62 +0x82:  mov    0x8(%ebp),%eax
08752d65 +0x85:  mov    0x18(%eax),%esi
08752d68 +0x88:  test   %esi,%esi
08752d6a +0x8a:  je     08752d74 <+0x94>
08752d6c +0x8c:  mov    %esi,(%esp)
08752d6f +0x8f:  call   08797360 <_ZN5yaSSL12input_bufferD1Ev>  ; yaSSL::input_buffer::~input_buffer()
08752d74 +0x94:  movb   $0x0,0x4(%esp)
08752d79 +0x99:  mov    %esi,(%esp)
08752d7c +0x9c:  call   08750820 <_ZdlPvN5yaSSL5new_tE>  ; operator delete(void*, yaSSL::new_t)
08752d81 +0xa1:  mov    0x8(%ebp),%edx
08752d84 +0xa4:  mov    0xc(%edx),%eax
08752d87 +0xa7:  test   %eax,%eax
08752d89 +0xa9:  jne    08752d92 <+0xb2>
08752d8b +0xab:  jmp    08752da6 <+0xc6>
08752d8d +0xad:  lea    0x0(%esi),%esi
08752d90 +0xb0:  mov    %esi,%eax
08752d92 +0xb2:  mov    0x4(%eax),%esi
08752d95 +0xb5:  movb   $0x0,0x4(%esp)
08752d9a +0xba:  mov    %eax,(%esp)
08752d9d +0xbd:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752da2 +0xc2:  test   %esi,%esi
08752da4 +0xc4:  jne    08752d90 <+0xb0>
08752da6 +0xc6:  mov    0x8(%ebp),%edx
08752da9 +0xc9:  mov    (%edx),%eax
08752dab +0xcb:  test   %eax,%eax
08752dad +0xcd:  jne    08752dba <+0xda>
08752daf +0xcf:  nop
08752db0 +0xd0:  jmp    08752dce <+0xee>
08752db2 +0xd2:  lea    0x0(%esi),%esi
08752db8 +0xd8:  mov    %esi,%eax
08752dba +0xda:  mov    0x4(%eax),%esi
08752dbd +0xdd:  movb   $0x0,0x4(%esp)
08752dc2 +0xe2:  mov    %eax,(%esp)
08752dc5 +0xe5:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08752dca +0xea:  test   %esi,%esi
08752dcc +0xec:  jne    08752db8 <+0xd8>
08752dce +0xee:  add    $0x1c,%esp
08752dd1 +0xf1:  pop    %ebx
08752dd2 +0xf2:  pop    %esi
08752dd3 +0xf3:  pop    %edi
08752dd4 +0xf4:  pop    %ebp
08752dd5 +0xf5:  ret
08752dd6 +0xf6:  lea    0x0(%esi),%esi
08752dd9 +0xf9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::Buffers::~Buffers @ 0x8752ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Buffers::~Buffers() */

void __thiscall yaSSL::Buffers::~Buffers(Buffers *this)

{
  int iVar1;
  output_buffer *this_00;
  input_buffer *piVar2;
  int iVar3;
  
  for (iVar1 = *(int *)(this + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    this_00 = *(output_buffer **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (this_00 != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this_00);
    }
    operator_delete(this_00,0);
  }
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(input_buffer **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (piVar2 != (input_buffer *)0x0) {
      input_buffer::~input_buffer(piVar2);
    }
    operator_delete(piVar2,0);
  }
  piVar2 = *(input_buffer **)(this + 0x18);
  if (piVar2 != (input_buffer *)0x0) {
    input_buffer::~input_buffer(piVar2);
  }
  operator_delete(piVar2,0);
  iVar1 = *(int *)(this + 0xc);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  iVar1 = *(int *)this;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  return;
}
```
