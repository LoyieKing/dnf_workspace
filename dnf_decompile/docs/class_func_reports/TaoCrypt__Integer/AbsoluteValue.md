# AbsoluteValue

`_ZNK8TaoCrypt7Integer13AbsoluteValueEv`

`TaoCrypt::Integer::AbsoluteValue() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f450` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f450  _ZNK8TaoCrypt7Integer13AbsoluteValueEv
#           TaoCrypt::Integer::AbsoluteValue() const
# range [0x0875f450, 0x0875f48e]
0875f450 +0x00:  push   %ebp
0875f451 +0x01:  mov    %esp,%ebp
0875f453 +0x03:  sub    $0x18,%esp
0875f456 +0x06:  mov    %ebx,-0x8(%ebp)
0875f459 +0x09:  mov    0xc(%ebp),%eax
0875f45c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f461 +0x11:  add    $0xc0d737,%ebx
0875f467 +0x17:  mov    %esi,-0x4(%ebp)
0875f46a +0x1a:  mov    0x8(%ebp),%esi
0875f46d +0x1d:  mov    %eax,0x4(%esp)
0875f471 +0x21:  mov    %esi,(%esp)
0875f474 +0x24:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f479 +0x29:  mov    %esi,%eax
0875f47b +0x2b:  movl   $0x0,0xc(%esi)
0875f482 +0x32:  mov    -0x8(%ebp),%ebx
0875f485 +0x35:  mov    -0x4(%ebp),%esi
0875f488 +0x38:  mov    %ebp,%esp
0875f48a +0x3a:  pop    %ebp
0875f48b +0x3b:  ret    $0x4
0875f48e +0x3e:  xchg   %ax,%ax
```

## 反编译 C

```c
// TaoCrypt::Integer::AbsoluteValue @ 0x875f450

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::AbsoluteValue() const */

Integer * TaoCrypt::Integer::AbsoluteValue(void)

{
  Integer *in_stack_00000004;
  Integer *in_stack_00000008;
  
  Integer(in_stack_00000004,in_stack_00000008);
  *(undefined4 *)(in_stack_00000004 + 0xc) = 0;
  return in_stack_00000004;
}
```
