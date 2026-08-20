# Subtract

`_ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_`

`TaoCrypt::ModularArithmetic::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x08760580` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08760580  _ZNK8TaoCrypt17ModularArithmetic8SubtractERKNS_7IntegerES3_
#           TaoCrypt::ModularArithmetic::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x08760580, 0x0876069a]
08760580 +0x000:  push   %ebp
08760581 +0x001:  mov    %esp,%ebp
08760583 +0x003:  sub    $0x48,%esp
08760586 +0x006:  mov    %edi,-0x4(%ebp)
08760589 +0x009:  mov    0xc(%ebp),%edi
0876058c +0x00c:  mov    %esi,-0x8(%ebp)
0876058f +0x00f:  mov    0x8(%ebp),%esi
08760592 +0x012:  mov    %ebx,-0xc(%ebp)
08760595 +0x015:  mov    0x10(%ebp),%edx
08760598 +0x018:  call   08722df8 <__i686.get_pc_thunk.bx>
0876059d +0x01d:  add    $0xc0c5fb,%ebx
087605a3 +0x023:  mov    (%edi),%eax
087605a5 +0x025:  cmp    0xc(%esi),%eax
087605a8 +0x028:  je     08760620 <+0xa0>
087605aa +0x02a:  lea    -0x28(%ebp),%eax
087605ad +0x02d:  mov    %edx,0x8(%esp)
087605b1 +0x031:  mov    %edi,0x4(%esp)
087605b5 +0x035:  lea    0x2c(%esi),%edi
087605b8 +0x038:  mov    %eax,(%esp)
087605bb +0x03b:  mov    %eax,-0x2c(%ebp)
087605be +0x03e:  call   087600e0 <_ZNK8TaoCrypt7Integer5MinusERKS0_>  ; TaoCrypt::Integer::Minus(TaoCrypt::Integer const&) const
087605c3 +0x043:  mov    -0x2c(%ebp),%eax
087605c6 +0x046:  sub    $0x4,%esp
087605c9 +0x049:  mov    %eax,0x4(%esp)
087605cd +0x04d:  mov    %edi,(%esp)
087605d0 +0x050:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087605d5 +0x055:  mov    -0x28(%ebp),%eax
087605d8 +0x058:  mov    -0x24(%ebp),%edx
087605db +0x05b:  movl   $0x0,0x4(%esp)
087605e3 +0x063:  shl    $0x2,%eax
087605e6 +0x066:  mov    %edx,(%esp)
087605e9 +0x069:  mov    %edx,-0x2c(%ebp)
087605ec +0x06c:  mov    %eax,0x8(%esp)
087605f0 +0x070:  call   0807dcc0 <_init+0x5b8>
087605f5 +0x075:  mov    -0x2c(%ebp),%edx
087605f8 +0x078:  movb   $0x0,0x4(%esp)
087605fd +0x07d:  mov    %edx,(%esp)
08760600 +0x080:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760605 +0x085:  cmpl   $0x1,0x38(%esi)
08760609 +0x089:  je     08760680 <+0x100>
0876060b +0x08b:  mov    %edi,%eax
0876060d +0x08d:  mov    -0xc(%ebp),%ebx
08760610 +0x090:  mov    -0x8(%ebp),%esi
08760613 +0x093:  mov    -0x4(%ebp),%edi
08760616 +0x096:  mov    %ebp,%esp
08760618 +0x098:  pop    %ebp
08760619 +0x099:  ret
0876061a +0x09a:  lea    0x0(%esi),%esi
08760620 +0x0a0:  cmp    (%edx),%eax
08760622 +0x0a2:  jne    087605aa <+0x2a>
08760624 +0x0a4:  mov    %eax,0xc(%esp)
08760628 +0x0a8:  mov    0x4(%edx),%eax
0876062b +0x0ab:  mov    %eax,0x8(%esp)
0876062f +0x0af:  mov    0x4(%edi),%eax
08760632 +0x0b2:  mov    %eax,0x4(%esp)
08760636 +0x0b6:  mov    0x20(%esi),%eax
08760639 +0x0b9:  mov    %eax,(%esp)
0876063c +0x0bc:  call   *0x124c90(%ebx)
08760642 +0x0c2:  test   %eax,%eax
08760644 +0x0c4:  jne    08760658 <+0xd8>
08760646 +0x0c6:  lea    0x1c(%esi),%edi
08760649 +0x0c9:  mov    %edi,%eax
0876064b +0x0cb:  mov    -0xc(%ebp),%ebx
0876064e +0x0ce:  mov    -0x8(%ebp),%esi
08760651 +0x0d1:  mov    -0x4(%ebp),%edi
08760654 +0x0d4:  mov    %ebp,%esp
08760656 +0x0d6:  pop    %ebp
08760657 +0x0d7:  ret
08760658 +0x0d8:  mov    (%edi),%edx
0876065a +0x0da:  lea    0x1c(%esi),%edi
0876065d +0x0dd:  mov    0x20(%esi),%eax
08760660 +0x0e0:  mov    %edx,0xc(%esp)
08760664 +0x0e4:  mov    0x10(%esi),%edx
08760667 +0x0e7:  mov    %eax,0x4(%esp)
0876066b +0x0eb:  mov    %eax,(%esp)
0876066e +0x0ee:  mov    %edx,0x8(%esp)
08760672 +0x0f2:  call   *0x124c8c(%ebx)
08760678 +0x0f8:  jmp    08760649 <+0xc9>
0876067a +0x0fa:  lea    0x0(%esi),%esi
08760680 +0x100:  add    $0xc,%esi
08760683 +0x103:  mov    %esi,0x4(%esp)
08760687 +0x107:  mov    %edi,(%esp)
0876068a +0x10a:  call   0875fde0 <_ZN8TaoCrypt7IntegerpLERKS0_>  ; TaoCrypt::Integer::operator+=(TaoCrypt::Integer const&)
0876068f +0x10f:  jmp    0876060b <+0x8b>
08760694 +0x114:  lea    0x0(%esi),%esi
0876069a +0x11a:  lea    0x0(%edi),%edi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::Subtract @ 0x8760580

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Subtract(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
    */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Subtract(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *this_00;
  int iVar1;
  uint uVar2;
  int local_2c;
  void *local_28;
  
  iVar1 = *(int *)param_1;
  if ((iVar1 == *(int *)(this + 0xc)) && (iVar1 == *(int *)param_2)) {
    iVar1 = (*s_pSub)(*(undefined4 *)(this + 0x20),*(undefined4 *)(param_1 + 4),
                      *(undefined4 *)(param_2 + 4),iVar1);
    if (iVar1 != 0) {
      (*s_pAdd)(*(undefined4 *)(this + 0x20),*(undefined4 *)(this + 0x20),
                *(undefined4 *)(this + 0x10),*(undefined4 *)param_1);
    }
    return (Integer *)(this + 0x1c);
  }
  this_00 = (Integer *)(this + 0x2c);
  Integer::Minus((Integer *)&local_2c);
  Integer::operator=(this_00,(Integer *)&local_2c);
  uVar2 = 0;
  memset(local_28,0,local_2c << 2);
  operator_delete__(local_28,uVar2 & 0xffffff00);
  if (*(int *)(this + 0x38) == 1) {
    Integer::operator+=(this_00,(Integer *)(this + 0xc));
  }
  return this_00;
}
```
