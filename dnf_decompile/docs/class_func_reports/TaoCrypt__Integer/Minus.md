# Minus

`_ZNK8TaoCrypt7Integer5MinusERKS0_`

`TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x087600e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087600e0  _ZNK8TaoCrypt7Integer5MinusERKS0_
#           TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
# range [0x087600e0, 0x087601a9]
087600e0 +0x00:  push   %ebp
087600e1 +0x01:  mov    %esp,%ebp
087600e3 +0x03:  sub    $0x38,%esp
087600e6 +0x06:  mov    0x10(%ebp),%eax
087600e9 +0x09:  mov    %esi,-0x8(%ebp)
087600ec +0x0c:  mov    0xc(%ebp),%esi
087600ef +0x0f:  mov    %ebx,-0xc(%ebp)
087600f2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087600f7 +0x17:  add    $0xc0caa1,%ebx
087600fd +0x1d:  mov    %edi,-0x4(%ebp)
08760100 +0x20:  mov    0x8(%ebp),%edi
08760103 +0x23:  mov    (%eax),%edx
08760105 +0x25:  cmp    %edx,(%esi)
08760107 +0x27:  cmovae (%esi),%edx
0876010a +0x2a:  mov    %eax,-0x1c(%ebp)
0876010d +0x2d:  movl   $0x0,0x4(%esp)
08760115 +0x35:  mov    %edx,0x8(%esp)
08760119 +0x39:  mov    %edi,(%esp)
0876011c +0x3c:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
08760121 +0x41:  mov    -0x1c(%ebp),%eax
08760124 +0x44:  cmpl   $0x1,0xc(%esi)
08760128 +0x48:  je     08760158 <+0x78>
0876012a +0x4a:  cmpl   $0x1,0xc(%eax)
0876012e +0x4e:  je     08760178 <+0x98>
08760130 +0x50:  mov    %eax,0x8(%esp)
08760134 +0x54:  mov    %esi,0x4(%esp)
08760138 +0x58:  mov    %edi,(%esp)
0876013b +0x5b:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08760140 +0x60:  mov    %edi,%eax
08760142 +0x62:  mov    -0xc(%ebp),%ebx
08760145 +0x65:  mov    -0x8(%ebp),%esi
08760148 +0x68:  mov    -0x4(%ebp),%edi
0876014b +0x6b:  mov    %ebp,%esp
0876014d +0x6d:  pop    %ebp
0876014e +0x6e:  ret    $0x4
08760151 +0x71:  lea    0x0(%esi,%eiz,1),%esi
08760158 +0x78:  cmpl   $0x1,0xc(%eax)
0876015c +0x7c:  je     08760190 <+0xb0>
0876015e +0x7e:  mov    %eax,0x8(%esp)
08760162 +0x82:  mov    %esi,0x4(%esp)
08760166 +0x86:  mov    %edi,(%esp)
08760169 +0x89:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0876016e +0x8e:  movl   $0x1,0xc(%edi)
08760175 +0x95:  jmp    08760140 <+0x60>
08760177 +0x97:  nop
08760178 +0x98:  mov    %eax,0x8(%esp)
0876017c +0x9c:  mov    %esi,0x4(%esp)
08760180 +0xa0:  mov    %edi,(%esp)
08760183 +0xa3:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08760188 +0xa8:  jmp    08760140 <+0x60>
0876018a +0xaa:  lea    0x0(%esi),%esi
08760190 +0xb0:  mov    %esi,0x8(%esp)
08760194 +0xb4:  mov    %eax,0x4(%esp)
08760198 +0xb8:  mov    %edi,(%esp)
0876019b +0xbb:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
087601a0 +0xc0:  jmp    08760140 <+0x60>
087601a2 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
087601a9 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Minus @ 0x87600e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Minus(Integer *param_1)

{
  uint uVar1;
  Integer *in_stack_00000008;
  Integer *in_stack_0000000c;
  
  uVar1 = *(uint *)in_stack_0000000c;
  if (*(uint *)in_stack_0000000c <= *(uint *)in_stack_00000008) {
    uVar1 = *(uint *)in_stack_00000008;
  }
  Integer(param_1,0,uVar1);
  if (*(int *)(in_stack_00000008 + 0xc) == 1) {
    if (*(int *)(in_stack_0000000c + 0xc) == 1) {
      PositiveSubtract(param_1,in_stack_0000000c,in_stack_00000008);
    }
    else {
      PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
  }
  else if (*(int *)(in_stack_0000000c + 0xc) == 1) {
    PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
  }
  else {
    PositiveSubtract(param_1,in_stack_00000008,in_stack_0000000c);
  }
  return param_1;
}
```
