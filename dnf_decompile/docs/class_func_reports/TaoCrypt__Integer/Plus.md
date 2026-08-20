# Plus

`_ZNK8TaoCrypt7Integer4PlusERKS0_`

`TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::Integer` | `0x087601b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087601b0  _ZNK8TaoCrypt7Integer4PlusERKS0_
#           TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
# range [0x087601b0, 0x08760279]
087601b0 +0x00:  push   %ebp
087601b1 +0x01:  mov    %esp,%ebp
087601b3 +0x03:  sub    $0x38,%esp
087601b6 +0x06:  mov    0x10(%ebp),%eax
087601b9 +0x09:  mov    %esi,-0x8(%ebp)
087601bc +0x0c:  mov    0xc(%ebp),%esi
087601bf +0x0f:  mov    %ebx,-0xc(%ebp)
087601c2 +0x12:  call   08722df8 <__i686.get_pc_thunk.bx>
087601c7 +0x17:  add    $0xc0c9d1,%ebx
087601cd +0x1d:  mov    %edi,-0x4(%ebp)
087601d0 +0x20:  mov    0x8(%ebp),%edi
087601d3 +0x23:  mov    (%eax),%edx
087601d5 +0x25:  cmp    %edx,(%esi)
087601d7 +0x27:  cmovae (%esi),%edx
087601da +0x2a:  mov    %eax,-0x1c(%ebp)
087601dd +0x2d:  movl   $0x0,0x4(%esp)
087601e5 +0x35:  mov    %edx,0x8(%esp)
087601e9 +0x39:  mov    %edi,(%esp)
087601ec +0x3c:  call   0875f0f0 <_ZN8TaoCrypt7IntegerC1Ejj>  ; TaoCrypt::Integer::Integer(unsigned int, unsigned int)
087601f1 +0x41:  mov    -0x1c(%ebp),%eax
087601f4 +0x44:  cmpl   $0x1,0xc(%esi)
087601f8 +0x48:  je     08760228 <+0x78>
087601fa +0x4a:  cmpl   $0x1,0xc(%eax)
087601fe +0x4e:  je     08760240 <+0x90>
08760200 +0x50:  mov    %eax,0x8(%esp)
08760204 +0x54:  mov    %esi,0x4(%esp)
08760208 +0x58:  mov    %edi,(%esp)
0876020b +0x5b:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08760210 +0x60:  mov    %edi,%eax
08760212 +0x62:  mov    -0xc(%ebp),%ebx
08760215 +0x65:  mov    -0x8(%ebp),%esi
08760218 +0x68:  mov    -0x4(%ebp),%edi
0876021b +0x6b:  mov    %ebp,%esp
0876021d +0x6d:  pop    %ebp
0876021e +0x6e:  ret    $0x4
08760221 +0x71:  lea    0x0(%esi,%eiz,1),%esi
08760228 +0x78:  cmpl   $0x1,0xc(%eax)
0876022c +0x7c:  je     08760258 <+0xa8>
0876022e +0x7e:  mov    %esi,0x8(%esp)
08760232 +0x82:  mov    %eax,0x4(%esp)
08760236 +0x86:  mov    %edi,(%esp)
08760239 +0x89:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
0876023e +0x8e:  jmp    08760210 <+0x60>
08760240 +0x90:  mov    %eax,0x8(%esp)
08760244 +0x94:  mov    %esi,0x4(%esp)
08760248 +0x98:  mov    %edi,(%esp)
0876024b +0x9b:  call   0875d310 <_ZN8TaoCrypt16PositiveSubtractERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveSubtract(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08760250 +0xa0:  jmp    08760210 <+0x60>
08760252 +0xa2:  lea    0x0(%esi),%esi
08760258 +0xa8:  mov    %eax,0x8(%esp)
0876025c +0xac:  mov    %esi,0x4(%esp)
08760260 +0xb0:  mov    %edi,(%esp)
08760263 +0xb3:  call   0875fa30 <_ZN8TaoCrypt11PositiveAddERNS_7IntegerERKS0_S3_>  ; TaoCrypt::PositiveAdd(TaoCrypt::Integer&, TaoCrypt::Integer const&, TaoCrypt::Integer const&)
08760268 +0xb8:  movl   $0x1,0xc(%edi)
0876026f +0xbf:  jmp    08760210 <+0x60>
08760271 +0xc1:  nop
08760272 +0xc2:  lea    0x0(%esi,%eiz,1),%esi
08760279 +0xc9:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::Integer::Plus @ 0x87601b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const */

Integer * TaoCrypt::Integer::Plus(Integer *param_1)

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
      PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
      *(undefined4 *)(param_1 + 0xc) = 1;
    }
    else {
      PositiveSubtract(param_1,in_stack_0000000c,in_stack_00000008);
    }
  }
  else if (*(int *)(in_stack_0000000c + 0xc) == 1) {
    PositiveSubtract(param_1,in_stack_00000008,in_stack_0000000c);
  }
  else {
    PositiveAdd(param_1,in_stack_00000008,in_stack_0000000c);
  }
  return param_1;
}
```
