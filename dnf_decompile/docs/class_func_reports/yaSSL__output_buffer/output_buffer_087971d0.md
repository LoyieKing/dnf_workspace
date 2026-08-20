# output_buffer

`_ZN5yaSSL13output_bufferC1Ej`

`yaSSL::output_buffer::output_buffer(unsigned int)`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x087971d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087971d0  _ZN5yaSSL13output_bufferC1Ej
#           yaSSL::output_buffer::output_buffer(unsigned int)
# range [0x087971d0, 0x0879721a]
087971d0 +0x00:  push   %ebp
087971d1 +0x01:  mov    %esp,%ebp
087971d3 +0x03:  sub    $0x28,%esp
087971d6 +0x06:  mov    %esi,-0x8(%ebp)
087971d9 +0x09:  mov    0x8(%ebp),%esi
087971dc +0x0c:  mov    %ebx,-0xc(%ebp)
087971df +0x0f:  mov    %edi,-0x4(%ebp)
087971e2 +0x12:  mov    0xc(%ebp),%edi
087971e5 +0x15:  call   08722df8 <__i686.get_pc_thunk.bx>
087971ea +0x1a:  add    $0xbd59ae,%ebx
087971f0 +0x20:  movl   $0x0,(%esi)
087971f6 +0x26:  mov    %edi,(%esp)
087971f9 +0x29:  movb   $0x0,0x4(%esp)
087971fe +0x2e:  call   08752350 <_ZnajN5yaSSL5new_tE>  ; operator new[](unsigned int, yaSSL::new_t)
08797203 +0x33:  lea    (%eax,%edi,1),%edi
08797206 +0x36:  mov    %eax,0x4(%esi)
08797209 +0x39:  mov    %edi,0x8(%esi)
0879720c +0x3c:  mov    -0xc(%ebp),%ebx
0879720f +0x3f:  mov    -0x8(%ebp),%esi
08797212 +0x42:  mov    -0x4(%ebp),%edi
08797215 +0x45:  mov    %ebp,%esp
08797217 +0x47:  pop    %ebp
08797218 +0x48:  ret
08797219 +0x49:  nop
0879721a +0x4a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::output_buffer @ 0x87971d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::output_buffer(unsigned int) */

void __thiscall yaSSL::output_buffer::output_buffer(output_buffer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  return;
}
```
