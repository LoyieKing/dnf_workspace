# input_buffer

`_ZN5yaSSL12input_bufferC1Ej`

`yaSSL::input_buffer::input_buffer(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x087972e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087972e0  _ZN5yaSSL12input_bufferC1Ej
#           yaSSL::input_buffer::input_buffer(unsigned int)
# range [0x087972e0, 0x0879732f]
087972e0 +0x00:  push   %ebp
087972e1 +0x01:  mov    %esp,%ebp
087972e3 +0x03:  sub    $0x28,%esp
087972e6 +0x06:  mov    %esi,-0x8(%ebp)
087972e9 +0x09:  mov    0x8(%ebp),%esi
087972ec +0x0c:  mov    %ebx,-0xc(%ebp)
087972ef +0x0f:  mov    %edi,-0x4(%ebp)
087972f2 +0x12:  mov    0xc(%ebp),%edi
087972f5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087972fa +0x1a:  add    $0xbd589e,%ebx
08797300 +0x20:  movl   $0x0,(%esi)
08797306 +0x26:  movl   $0x0,0x4(%esi)
0879730d +0x2d:  mov    %edi,(%esp)
08797310 +0x30:  movb   $0x0,0x4(%esp)
08797315 +0x35:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879731a +0x3a:  lea    (%eax,%edi,1),%edi
0879731d +0x3d:  mov    %eax,0x8(%esi)
08797320 +0x40:  mov    %edi,0xc(%esi)
08797323 +0x43:  mov    -0xc(%ebp),%ebx
08797326 +0x46:  mov    -0x8(%ebp),%esi
08797329 +0x49:  mov    -0x4(%ebp),%edi
0879732c +0x4c:  mov    %ebp,%esp
0879732e +0x4e:  pop    %ebp
0879732f +0x4f:  ret
```

## 反编译 C

```c
// yaSSL::input_buffer::input_buffer @ 0x87972e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::input_buffer(unsigned int) */

void __thiscall yaSSL::input_buffer::input_buffer(input_buffer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 8) = pvVar1;
  *(uint *)(this + 0xc) = (int)pvVar1 + param_1;
  return;
}
```
