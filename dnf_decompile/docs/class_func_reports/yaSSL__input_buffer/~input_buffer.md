# ~input_buffer

`_ZN5yaSSL12input_bufferD1Ev`

`yaSSL::input_buffer::~input_buffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::input_buffer` | `0x08797360` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797360  _ZN5yaSSL12input_bufferD1Ev
#           yaSSL::input_buffer::~input_buffer()
# range [0x08797360, 0x0879738f]
08797360 +0x00:  push   %ebp
08797361 +0x01:  mov    %esp,%ebp
08797363 +0x03:  push   %ebx
08797364 +0x04:  sub    $0x14,%esp
08797367 +0x07:  mov    0x8(%ebp),%eax
0879736a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879736f +0x0f:  add    $0xbd5829,%ebx
08797375 +0x15:  movb   $0x0,0x4(%esp)
0879737a +0x1a:  mov    0x8(%eax),%eax
0879737d +0x1d:  mov    %eax,(%esp)
08797380 +0x20:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08797385 +0x25:  add    $0x14,%esp
08797388 +0x28:  pop    %ebx
08797389 +0x29:  pop    %ebp
0879738a +0x2a:  ret
0879738b +0x2b:  nop
0879738c +0x2c:  nop
0879738d +0x2d:  nop
0879738e +0x2e:  nop
0879738f +0x2f:  nop
```

## 反编译 C

```c
// yaSSL::input_buffer::~input_buffer @ 0x8797360

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::~input_buffer() */

void __thiscall yaSSL::input_buffer::~input_buffer(input_buffer *this)

{
  operator_delete__(*(undefined4 *)(this + 8),0);
  return;
}
```
