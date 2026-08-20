# input_buffer

`_ZN5yaSSL12input_bufferC1EjPKhj`

`yaSSL::input_buffer::input_buffer(unsigned int, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08797270` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797270  _ZN5yaSSL12input_bufferC1EjPKhj
#           yaSSL::input_buffer::input_buffer(unsigned int, unsigned char const*, unsigned int)
# range [0x08797270, 0x087972d9]
08797270 +0x00:  push   %ebp
08797271 +0x01:  mov    %esp,%ebp
08797273 +0x03:  sub    $0x28,%esp
08797276 +0x06:  mov    %esi,-0x8(%ebp)
08797279 +0x09:  mov    0x8(%ebp),%esi
0879727c +0x0c:  mov    %ebx,-0xc(%ebp)
0879727f +0x0f:  mov    %edi,-0x4(%ebp)
08797282 +0x12:  mov    0xc(%ebp),%edi
08797285 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879728a +0x1a:  add    $0xbd590e,%ebx
08797290 +0x20:  movl   $0x0,(%esi)
08797296 +0x26:  movl   $0x0,0x4(%esi)
0879729d +0x2d:  mov    %edi,(%esp)
087972a0 +0x30:  movb   $0x0,0x4(%esp)
087972a5 +0x35:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087972aa +0x3a:  mov    %eax,0x8(%esi)
087972ad +0x3d:  lea    (%eax,%edi,1),%edi
087972b0 +0x40:  mov    0x14(%ebp),%eax
087972b3 +0x43:  mov    %edi,0xc(%esi)
087972b6 +0x46:  mov    %esi,(%esp)
087972b9 +0x49:  mov    %eax,0x8(%esp)
087972bd +0x4d:  mov    0x10(%ebp),%eax
087972c0 +0x50:  mov    %eax,0x4(%esp)
087972c4 +0x54:  call   087970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>  ; yaSSL::input_buffer::assign(unsigned char const*, unsigned int)
087972c9 +0x59:  mov    -0xc(%ebp),%ebx
087972cc +0x5c:  mov    -0x8(%ebp),%esi
087972cf +0x5f:  mov    -0x4(%ebp),%edi
087972d2 +0x62:  mov    %ebp,%esp
087972d4 +0x64:  pop    %ebp
087972d5 +0x65:  ret
087972d6 +0x66:  lea    0x0(%esi),%esi
087972d9 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::input_buffer::input_buffer @ 0x8797270

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::input_buffer(unsigned int, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::input_buffer::input_buffer(input_buffer *this,uint param_1,uchar *param_2,uint param_3)

{
  void *pvVar1;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  pvVar1 = operator_new__(param_1,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 8) = pvVar1;
  *(uint *)(this + 0xc) = (int)pvVar1 + param_1;
  assign(this,param_2,param_3);
  return;
}
```
