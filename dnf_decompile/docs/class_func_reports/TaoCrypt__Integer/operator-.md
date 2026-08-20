# operator-

`_ZNK8TaoCrypt7IntegerngEv`

`TaoCrypt::Integer::operator-() const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x0875f490` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0875f490  _ZNK8TaoCrypt7IntegerngEv
#           TaoCrypt::Integer::operator-() const
# range [0x0875f490, 0x0875f4cf]
0875f490 +0x00:  push   %ebp
0875f491 +0x01:  mov    %esp,%ebp
0875f493 +0x03:  sub    $0x18,%esp
0875f496 +0x06:  mov    %ebx,-0x8(%ebp)
0875f499 +0x09:  mov    0xc(%ebp),%eax
0875f49c +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0875f4a1 +0x11:  add    $0xc0d6f7,%ebx
0875f4a7 +0x17:  mov    %esi,-0x4(%ebp)
0875f4aa +0x1a:  mov    0x8(%ebp),%esi
0875f4ad +0x1d:  mov    %eax,0x4(%esp)
0875f4b1 +0x21:  mov    %esi,(%esp)
0875f4b4 +0x24:  call   0875f270 <_ZN8TaoCrypt7IntegerC1ERKS0_>  ; TaoCrypt::Integer::Integer(TaoCrypt::Integer const&)
0875f4b9 +0x29:  mov    %esi,(%esp)
0875f4bc +0x2c:  call   0875d2d0 <_ZN8TaoCrypt7Integer6NegateEv>  ; TaoCrypt::Integer::Negate()
0875f4c1 +0x31:  mov    %esi,%eax
0875f4c3 +0x33:  mov    -0x8(%ebp),%ebx
0875f4c6 +0x36:  mov    -0x4(%ebp),%esi
0875f4c9 +0x39:  mov    %ebp,%esp
0875f4cb +0x3b:  pop    %ebp
0875f4cc +0x3c:  ret    $0x4
0875f4cf +0x3f:  nop
```

## 反编译 C

```c
// TaoCrypt::Integer::operator- @ 0x875f490

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::TEMPNAMEPLACEHOLDERVALUE() const */

Integer * __thiscall TaoCrypt::Integer::operator-(Integer *this)

{
  Integer *in_stack_00000008;
  
  Integer(this,in_stack_00000008);
  Negate(this);
  return this;
}
```
