# allocate

`_ZN5yaSSL13output_buffer8allocateEj`

`yaSSL::output_buffer::allocate(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08797120` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797120  _ZN5yaSSL13output_buffer8allocateEj
#           yaSSL::output_buffer::allocate(unsigned int)
# range [0x08797120, 0x0879716a]
08797120 +0x00:  push   %ebp
08797121 +0x01:  mov    %esp,%ebp
08797123 +0x03:  sub    $0x28,%esp
08797126 +0x06:  mov    %ebx,-0xc(%ebp)
08797129 +0x09:  mov    %esi,-0x8(%ebp)
0879712c +0x0c:  mov    0x8(%ebp),%esi
0879712f +0x0f:  mov    %edi,-0x4(%ebp)
08797132 +0x12:  mov    0xc(%ebp),%edi
08797135 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
0879713a +0x1a:  add    $0xbd5a5e,%ebx
08797140 +0x20:  mov    %edi,(%esp)
08797143 +0x23:  movb   $0x0,0x4(%esp)
08797148 +0x28:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
0879714d +0x2d:  lea    (%eax,%edi,1),%edi
08797150 +0x30:  mov    %eax,0x4(%esi)
08797153 +0x33:  mov    %edi,0x8(%esi)
08797156 +0x36:  mov    -0xc(%ebp),%ebx
08797159 +0x39:  mov    -0x8(%ebp),%esi
0879715c +0x3c:  mov    -0x4(%ebp),%edi
0879715f +0x3f:  mov    %ebp,%esp
08797161 +0x41:  pop    %ebp
08797162 +0x42:  ret
08797163 +0x43:  nop
08797164 +0x44:  lea    0x0(%esi),%esi
0879716a +0x4a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// yaSSL::output_buffer::allocate @ 0x8797120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::allocate(unsigned int) */

void __thiscall yaSSL::output_buffer::allocate(output_buffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  return;
}
```
