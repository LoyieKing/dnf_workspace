# allocate

`_ZN5yaSSL12input_buffer8allocateEj`

`yaSSL::input_buffer::allocate(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08797220` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797220  _ZN5yaSSL12input_buffer8allocateEj
#           yaSSL::input_buffer::allocate(unsigned int)
# range [0x08797220, 0x0879726a]
08797220 +0x00:  push   %ebp
08797221 +0x01:  mov    %esp,%ebp
08797223 +0x03:  sub    $0x28,%esp
08797226 +0x06:  mov    %ebx,-0xc(%ebp)
08797229 +0x09:  mov    %esi,-0x8(%ebp)
0879722c +0x0c:  mov    0x8(%ebp),%esi
0879722f +0x0f:  mov    %edi,-0x4(%ebp)
08797232 +0x12:  mov    0xc(%ebp),%edi
08797235 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879723a +0x1a:  add    $0xbd595e,%ebx
08797240 +0x20:  mov    %edi,(%esp)
08797243 +0x23:  movb   $0x0,0x4(%esp)
08797248 +0x28:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879724d +0x2d:  lea    (%eax,%edi,1),%edi
08797250 +0x30:  mov    %eax,0x8(%esi)
08797253 +0x33:  mov    %edi,0xc(%esi)
08797256 +0x36:  mov    -0xc(%ebp),%ebx
08797259 +0x39:  mov    -0x8(%ebp),%esi
0879725c +0x3c:  mov    -0x4(%ebp),%edi
0879725f +0x3f:  mov    %ebp,%esp
08797261 +0x41:  pop    %ebp
08797262 +0x42:  ret
08797263 +0x43:  nop
08797264 +0x44:  lea    0x0(%esi),%esi
0879726a +0x4a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::input_buffer::allocate @ 0x8797220

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::allocate(unsigned int) */

void __thiscall yaSSL::input_buffer::allocate(input_buffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 8) = pvVar1;
  *(uint *)(this + 0xc) = (int)pvVar1 + param_1;
  return;
}
```
