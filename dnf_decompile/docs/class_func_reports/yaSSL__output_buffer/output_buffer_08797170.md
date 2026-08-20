# output_buffer

`_ZN5yaSSL13output_bufferC1EjPKhj`

`yaSSL::output_buffer::output_buffer(unsigned int, unsigned char const*, unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08797170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797170  _ZN5yaSSL13output_bufferC1EjPKhj
#           yaSSL::output_buffer::output_buffer(unsigned int, unsigned char const*, unsigned int)
# range [0x08797170, 0x087971cf]
08797170 +0x00:  push   %ebp
08797171 +0x01:  mov    %esp,%ebp
08797173 +0x03:  sub    $0x28,%esp
08797176 +0x06:  mov    %esi,-0x8(%ebp)
08797179 +0x09:  mov    0x8(%ebp),%esi
0879717c +0x0c:  mov    %ebx,-0xc(%ebp)
0879717f +0x0f:  mov    %edi,-0x4(%ebp)
08797182 +0x12:  mov    0xc(%ebp),%edi
08797185 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879718a +0x1a:  add    $0xbd5a0e,%ebx
08797190 +0x20:  movl   $0x0,(%esi)
08797196 +0x26:  mov    %edi,(%esp)
08797199 +0x29:  movb   $0x0,0x4(%esp)
0879719e +0x2e:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
087971a3 +0x33:  mov    %eax,0x4(%esi)
087971a6 +0x36:  lea    (%eax,%edi,1),%edi
087971a9 +0x39:  mov    0x14(%ebp),%eax
087971ac +0x3c:  mov    %edi,0x8(%esi)
087971af +0x3f:  mov    %esi,(%esp)
087971b2 +0x42:  mov    %eax,0x8(%esp)
087971b6 +0x46:  mov    0x10(%ebp),%eax
087971b9 +0x49:  mov    %eax,0x4(%esp)
087971bd +0x4d:  call   08796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>  ; yaSSL::output_buffer::write(unsigned char const*, unsigned int)
087971c2 +0x52:  mov    -0xc(%ebp),%ebx
087971c5 +0x55:  mov    -0x8(%ebp),%esi
087971c8 +0x58:  mov    -0x4(%ebp),%edi
087971cb +0x5b:  mov    %ebp,%esp
087971cd +0x5d:  pop    %ebp
087971ce +0x5e:  ret
087971cf +0x5f:  nop
```

## 反编译 C

```c
// yaSSL::output_buffer::output_buffer @ 0x8797170

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::output_buffer(unsigned int, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::output_buffer::output_buffer(output_buffer *this,uint param_1,uchar *param_2,uint param_3)

{
  void *pvVar1;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = 0;
  pvVar1 = operator_new__(param_1,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  write(this,param_2,param_3);
  return;
}
```
