# MultiplicativeInverse

`_ZNK8TaoCrypt7Integer21MultiplicativeInverseEv`

`TaoCrypt::Integer::MultiplicativeInverse() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f8c0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f8c0  _ZNK8TaoCrypt7Integer21MultiplicativeInverseEv
#           TaoCrypt::Integer::MultiplicativeInverse() const
# range [0x0875f8c0, 0x0875f90d]
0875f8c0 +0x00:  push   %ebp
0875f8c1 +0x01:  mov    %esp,%ebp
0875f8c3 +0x03:  sub    $0x28,%esp
0875f8c6 +0x06:  mov    %ebx,-0xc(%ebp)
0875f8c9 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f8ce +0x0e:  add    $0xc0d2ca,%ebx
0875f8d4 +0x14:  mov    %esi,-0x8(%ebp)
0875f8d7 +0x17:  mov    0xc(%ebp),%esi
0875f8da +0x1a:  mov    %edi,-0x4(%ebp)
0875f8dd +0x1d:  mov    0x8(%ebp),%edi
0875f8e0 +0x20:  mov    %esi,(%esp)
0875f8e3 +0x23:  call   0875d710 <_ZNK8TaoCrypt7Integer6IsUnitEv>  ; TaoCrypt::Integer::IsUnit() const
0875f8e8 +0x28:  test   %al,%al
0875f8ea +0x2a:  jne    0875f8f3 <+0x33>
0875f8ec +0x2c:  call   0875f860 <_ZN8TaoCrypt7Integer4ZeroEv>  ; TaoCrypt::Integer::Zero()
0875f8f1 +0x31:  mov    %eax,%esi
0875f8f3 +0x33:  mov    %esi,0x4(%esp)
0875f8f7 +0x37:  mov    %edi,(%esp)
0875f8fa +0x3a:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f8ff +0x3f:  mov    %edi,%eax
0875f901 +0x41:  mov    -0xc(%ebp),%ebx
0875f904 +0x44:  mov    -0x8(%ebp),%esi
0875f907 +0x47:  mov    -0x4(%ebp),%edi
0875f90a +0x4a:  mov    %ebp,%esp
0875f90c +0x4c:  pop    %ebp
0875f90d +0x4d:  ret    $0x4
```

## 反编译 C

```c
// TaoCrypt::Integer::MultiplicativeInverse @ 0x875f8c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::MultiplicativeInverse() const */

Integer * TaoCrypt::Integer::MultiplicativeInverse(void)

{
  char cVar1;
  Integer *in_stack_00000004;
  Integer *in_stack_00000008;
  
  cVar1 = IsUnit(in_stack_00000008);
  if (cVar1 == '\0') {
    in_stack_00000008 = (Integer *)Zero();
  }
  Integer(in_stack_00000004,in_stack_00000008);
  return in_stack_00000004;
}
```
