# ~output_buffer

`_ZN5yaSSL13output_bufferD1Ev`

`yaSSL::output_buffer::~output_buffer()`

| 类 | 地址 |
|---|---|
| `yaSSL::output_buffer` | `0x08797330` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08797330  _ZN5yaSSL13output_bufferD1Ev
#           yaSSL::output_buffer::~output_buffer()
# range [0x08797330, 0x0879735c]
08797330 +0x00:  push   %ebp
08797331 +0x01:  mov    %esp,%ebp
08797333 +0x03:  push   %ebx
08797334 +0x04:  sub    $0x14,%esp
08797337 +0x07:  mov    0x8(%ebp),%eax
0879733a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0879733f +0x0f:  add    $0xbd5859,%ebx
08797345 +0x15:  movb   $0x0,0x4(%esp)
0879734a +0x1a:  mov    0x4(%eax),%eax
0879734d +0x1d:  mov    %eax,(%esp)
08797350 +0x20:  call   087508f0 <_ZdaPvN5yaSSL5new_tE>  ; operator delete[](void*, yaSSL::new_t)
08797355 +0x25:  add    $0x14,%esp
08797358 +0x28:  pop    %ebx
08797359 +0x29:  pop    %ebp
0879735a +0x2a:  ret
0879735b +0x2b:  nop
0879735c +0x2c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::output_buffer::~output_buffer @ 0x8797330

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::~output_buffer() */

void __thiscall yaSSL::output_buffer::~output_buffer(output_buffer *this)

{
  operator_delete__(*(undefined4 *)(this + 4),0);
  return;
}
```
