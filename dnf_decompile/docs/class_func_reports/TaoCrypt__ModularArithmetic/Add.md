# Add

`_ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_`

`TaoCrypt::ModularArithmetic::Add(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const`

| 类 | 地址 |
|---|---|
| `TaoCrypt::ModularArithmetic` | `0x087606a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087606a0  _ZNK8TaoCrypt17ModularArithmetic3AddERKNS_7IntegerES3_
#           TaoCrypt::ModularArithmetic::Add(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const
# range [0x087606a0, 0x08760819]
087606a0 +0x000:  push   %ebp
087606a1 +0x001:  mov    %esp,%ebp
087606a3 +0x003:  push   %edi
087606a4 +0x004:  push   %esi
087606a5 +0x005:  push   %ebx
087606a6 +0x006:  sub    $0x4c,%esp
087606a9 +0x009:  mov    0xc(%ebp),%edi
087606ac +0x00c:  mov    0x8(%ebp),%esi
087606af +0x00f:  call   08722df8 <__i686.get_pc_thunk.bx>
087606b4 +0x014:  add    $0xc0c4e4,%ebx
087606ba +0x01a:  mov    0x10(%ebp),%edx
087606bd +0x01d:  mov    (%edi),%eax
087606bf +0x01f:  cmp    0xc(%esi),%eax
087606c2 +0x022:  je     08760750 <+0xb0>
087606c8 +0x028:  lea    -0x28(%ebp),%eax
087606cb +0x02b:  mov    %edx,0x8(%esp)
087606cf +0x02f:  mov    %edi,0x4(%esp)
087606d3 +0x033:  lea    0x2c(%esi),%edi
087606d6 +0x036:  add    $0xc,%esi
087606d9 +0x039:  mov    %eax,(%esp)
087606dc +0x03c:  mov    %eax,-0x3c(%ebp)
087606df +0x03f:  call   087601b0 <_ZNK8TaoCrypt7Integer4PlusERKS0_>  ; TaoCrypt::Integer::Plus(TaoCrypt::Integer const&) const
087606e4 +0x044:  mov    -0x3c(%ebp),%eax
087606e7 +0x047:  sub    $0x4,%esp
087606ea +0x04a:  mov    %eax,0x4(%esp)
087606ee +0x04e:  mov    %edi,(%esp)
087606f1 +0x051:  call   08760460 <_ZN8TaoCrypt7IntegeraSERKS0_>  ; TaoCrypt::Integer::operator=(TaoCrypt::Integer const&)
087606f6 +0x056:  mov    -0x28(%ebp),%eax
087606f9 +0x059:  mov    -0x24(%ebp),%edx
087606fc +0x05c:  movl   $0x0,0x4(%esp)
08760704 +0x064:  shl    $0x2,%eax
08760707 +0x067:  mov    %edx,(%esp)
0876070a +0x06a:  mov    %edx,-0x3c(%ebp)
0876070d +0x06d:  mov    %eax,0x8(%esp)
08760711 +0x071:  call   0807dcc0 <_init+0x5b8>
08760716 +0x076:  mov    -0x3c(%ebp),%edx
08760719 +0x079:  movb   $0x0,0x4(%esp)
0876071e +0x07e:  mov    %edx,(%esp)
08760721 +0x081:  call   08767720 <_ZdaPvN8TaoCrypt5new_tE>  ; operator delete[](void*, TaoCrypt::new_t)
08760726 +0x086:  mov    %esi,0x4(%esp)
0876072a +0x08a:  mov    %edi,(%esp)
0876072d +0x08d:  call   0875d220 <_ZNK8TaoCrypt7Integer7CompareERKS0_>  ; TaoCrypt::Integer::Compare(TaoCrypt::Integer const&) const
08760732 +0x092:  test   %eax,%eax
08760734 +0x094:  js     08760742 <+0xa2>
08760736 +0x096:  mov    %esi,0x4(%esp)
0876073a +0x09a:  mov    %edi,(%esp)
0876073d +0x09d:  call   0875fcc0 <_ZN8TaoCrypt7IntegermIERKS0_>  ; TaoCrypt::Integer::operator-=(TaoCrypt::Integer const&)
08760742 +0x0a2:  lea    -0xc(%ebp),%esp
08760745 +0x0a5:  mov    %edi,%eax
08760747 +0x0a7:  pop    %ebx
08760748 +0x0a8:  pop    %esi
08760749 +0x0a9:  pop    %edi
0876074a +0x0aa:  pop    %ebp
0876074b +0x0ab:  ret
0876074c +0x0ac:  lea    0x0(%esi,%eiz,1),%esi
08760750 +0x0b0:  cmp    (%edx),%eax
08760752 +0x0b2:  jne    087606c8 <+0x28>
08760758 +0x0b8:  mov    %eax,0xc(%esp)
0876075c +0x0bc:  mov    0x4(%edx),%eax
0876075f +0x0bf:  mov    %eax,0x8(%esp)
08760763 +0x0c3:  mov    0x4(%edi),%eax
08760766 +0x0c6:  mov    %eax,0x4(%esp)
0876076a +0x0ca:  mov    0x20(%esi),%eax
0876076d +0x0cd:  mov    %eax,(%esp)
08760770 +0x0d0:  call   *0x124c8c(%ebx)
08760776 +0x0d6:  test   %eax,%eax
08760778 +0x0d8:  jne    08760800 <+0x160>
0876077e +0x0de:  mov    0x10(%esi),%eax
08760781 +0x0e1:  mov    (%edi),%edi
08760783 +0x0e3:  mov    %esi,-0x38(%ebp)
08760786 +0x0e6:  mov    %eax,-0x34(%ebp)
08760789 +0x0e9:  mov    0x20(%esi),%eax
0876078c +0x0ec:  lea    -0x4(,%edi,4),%edx
08760793 +0x0f3:  mov    %edi,-0x2c(%ebp)
08760796 +0x0f6:  mov    %eax,%ecx
08760798 +0x0f8:  add    %edx,%ecx
0876079a +0x0fa:  add    -0x34(%ebp),%edx
0876079d +0x0fd:  mov    %eax,-0x30(%ebp)
087607a0 +0x100:  mov    %edi,%eax
087607a2 +0x102:  lea    0x0(%esi),%esi
087607a8 +0x108:  test   %eax,%eax
087607aa +0x10a:  je     087607d8 <+0x138>
087607ac +0x10c:  mov    (%ecx),%edi
087607ae +0x10e:  sub    $0x1,%eax
087607b1 +0x111:  mov    (%edx),%esi
087607b3 +0x113:  cmp    %esi,%edi
087607b5 +0x115:  ja     087607d8 <+0x138>
087607b7 +0x117:  sub    $0x4,%ecx
087607ba +0x11a:  sub    $0x4,%edx
087607bd +0x11d:  cmp    %esi,%edi
087607bf +0x11f:  jae    087607a8 <+0x108>
087607c1 +0x121:  mov    -0x38(%ebp),%esi
087607c4 +0x124:  lea    0x1c(%esi),%edi
087607c7 +0x127:  lea    -0xc(%ebp),%esp
087607ca +0x12a:  mov    %edi,%eax
087607cc +0x12c:  pop    %ebx
087607cd +0x12d:  pop    %esi
087607ce +0x12e:  pop    %edi
087607cf +0x12f:  pop    %ebp
087607d0 +0x130:  ret
087607d1 +0x131:  lea    0x0(%esi,%eiz,1),%esi
087607d8 +0x138:  mov    -0x38(%ebp),%esi
087607db +0x13b:  mov    -0x2c(%ebp),%eax
087607de +0x13e:  mov    %eax,0xc(%esp)
087607e2 +0x142:  mov    -0x34(%ebp),%eax
087607e5 +0x145:  mov    %eax,0x8(%esp)
087607e9 +0x149:  mov    -0x30(%ebp),%eax
087607ec +0x14c:  mov    %eax,0x4(%esp)
087607f0 +0x150:  mov    %eax,(%esp)
087607f3 +0x153:  call   *0x124c90(%ebx)
087607f9 +0x159:  jmp    087607c4 <+0x124>
087607fb +0x15b:  nop
087607fc +0x15c:  lea    0x0(%esi,%eiz,1),%esi
08760800 +0x160:  mov    0x10(%esi),%eax
08760803 +0x163:  mov    (%edi),%edi
08760805 +0x165:  mov    %eax,-0x34(%ebp)
08760808 +0x168:  mov    0x20(%esi),%eax
0876080b +0x16b:  mov    %edi,-0x2c(%ebp)
0876080e +0x16e:  mov    %eax,-0x30(%ebp)
08760811 +0x171:  mov    %edi,%eax
08760813 +0x173:  jmp    087607de <+0x13e>
08760815 +0x175:  nop
08760816 +0x176:  lea    0x0(%esi),%esi
08760819 +0x179:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// TaoCrypt::ModularArithmetic::Add @ 0x87606a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::ModularArithmetic::Add(TaoCrypt::Integer const&, TaoCrypt::Integer const&) const */

Integer * __thiscall
TaoCrypt::ModularArithmetic::Add(ModularArithmetic *this,Integer *param_1,Integer *param_2)

{
  Integer *this_00;
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int local_38;
  int local_34;
  int local_2c;
  void *local_28;
  
  iVar2 = *(int *)param_1;
  if ((iVar2 != *(int *)(this + 0xc)) || (iVar2 != *(int *)param_2)) {
    this_00 = (Integer *)(this + 0x2c);
    Integer::Plus((Integer *)&local_2c);
    Integer::operator=(this_00,(Integer *)&local_2c);
    uVar6 = 0;
    memset(local_28,0,local_2c << 2);
    operator_delete__(local_28,uVar6 & 0xffffff00);
    iVar2 = Integer::Compare(this_00,(Integer *)(this + 0xc));
    if (-1 < iVar2) {
      Integer::operator-=(this_00,(Integer *)(this + 0xc));
    }
    return this_00;
  }
  iVar2 = (*s_pAdd)(*(undefined4 *)(this + 0x20),*(undefined4 *)(param_1 + 4),
                    *(undefined4 *)(param_2 + 4),iVar2);
  if (iVar2 == 0) {
    local_38 = *(int *)(this + 0x10);
    iVar2 = *(int *)param_1;
    local_34 = *(int *)(this + 0x20);
    iVar3 = iVar2 * 4 + -4;
    puVar4 = (uint *)(local_34 + iVar3);
    puVar5 = (uint *)(iVar3 + local_38);
    iVar3 = iVar2;
    do {
      if (iVar3 == 0) goto LAB_087607de;
      uVar6 = *puVar4;
      iVar3 = iVar3 + -1;
      uVar1 = *puVar5;
      if (uVar1 < uVar6) goto LAB_087607de;
      puVar4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
    } while (uVar1 <= uVar6);
  }
  else {
    local_38 = *(int *)(this + 0x10);
    iVar2 = *(int *)param_1;
    local_34 = *(int *)(this + 0x20);
LAB_087607de:
    (*s_pSub)(local_34,local_34,local_38,iVar2);
  }
  return (Integer *)(this + 0x1c);
}
```
