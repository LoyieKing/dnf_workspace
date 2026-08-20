# CVillageMonsterArea

`_ZN16village_attacked19CVillageMonsterAreaC1EiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE`

`village_attacked::CVillageMonsterArea::CVillageMonsterArea(int, int, int, int, std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea, std::allocator<MapArea> >*)`

| 类 | 地址 |
|---|---|
| `village_attacked::CVillageMonsterArea` | `0x086b3752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086b3752  _ZN16village_attacked19CVillageMonsterAreaC1EiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE
#           village_attacked::CVillageMonsterArea::CVillageMonsterArea(int, int, int, int, std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea, std::allocator<MapArea> >*)
# range [0x086b3752, 0x086b37f9]
086b3752 +0x00:  push   %ebp
086b3753 +0x01:  mov    %esp,%ebp
086b3755 +0x03:  push   %esi
086b3756 +0x04:  push   %ebx
086b3757 +0x05:  sub    $0x10,%esp
086b375a +0x08:  mov    0x8(%ebp),%eax
086b375d +0x0b:  mov    %eax,(%esp)
086b3760 +0x0e:  call   086b4cca <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x1f4>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x1f4
086b3765 +0x13:  mov    0x8(%ebp),%eax
086b3768 +0x16:  add    $0x1c,%eax
086b376b +0x19:  mov    %eax,(%esp)
086b376e +0x1c:  call   0838347c <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12f1c>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12f1c
086b3773 +0x21:  mov    0x8(%ebp),%eax
086b3776 +0x24:  mov    0xc(%ebp),%edx
086b3779 +0x27:  mov    %edx,0x28(%eax)
086b377c +0x2a:  mov    0x8(%ebp),%eax
086b377f +0x2d:  mov    0x10(%ebp),%edx
086b3782 +0x30:  mov    %edx,0x2c(%eax)
086b3785 +0x33:  mov    0x8(%ebp),%eax
086b3788 +0x36:  lea    0x1c(%eax),%edx
086b378b +0x39:  mov    0x1c(%ebp),%eax
086b378e +0x3c:  mov    %eax,0x4(%esp)
086b3792 +0x40:  mov    %edx,(%esp)
086b3795 +0x43:  call   086b4d44 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x26e>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x26e
086b379a +0x48:  mov    0x8(%ebp),%eax
086b379d +0x4b:  mov    0x20(%ebp),%edx
086b37a0 +0x4e:  mov    %edx,0x18(%eax)
086b37a3 +0x51:  mov    0x14(%ebp),%edx
086b37a6 +0x54:  mov    0x8(%ebp),%eax
086b37a9 +0x57:  mov    %edx,0x34(%eax)
086b37ac +0x5a:  mov    0x8(%ebp),%eax
086b37af +0x5d:  mov    0x18(%ebp),%edx
086b37b2 +0x60:  mov    %edx,0x38(%eax)
086b37b5 +0x63:  mov    0x8(%ebp),%eax
086b37b8 +0x66:  movl   $0x0,0x30(%eax)
086b37bf +0x6d:  add    $0x10,%esp
086b37c2 +0x70:  pop    %ebx
086b37c3 +0x71:  pop    %esi
086b37c4 +0x72:  pop    %ebp
086b37c5 +0x73:  ret
086b37c6 +0x74:  mov    %edx,%ebx
086b37c8 +0x76:  mov    %eax,%esi
086b37ca +0x78:  mov    0x8(%ebp),%eax
086b37cd +0x7b:  add    $0x1c,%eax
086b37d0 +0x7e:  mov    %eax,(%esp)
086b37d3 +0x81:  call   08383490 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x12f30>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x12f30
086b37d8 +0x86:  mov    %esi,%eax
086b37da +0x88:  mov    %ebx,%edx
086b37dc +0x8a:  jmp    086b37de <+0x8c>
086b37de +0x8c:  mov    %edx,%ebx
086b37e0 +0x8e:  mov    %eax,%esi
086b37e2 +0x90:  mov    0x8(%ebp),%eax
086b37e5 +0x93:  mov    %eax,(%esp)
086b37e8 +0x96:  call   086b4b70 <_GLOBAL__I__ZN16village_attacked15CVillageMonsterC2EtiiiPNS_19CVillageMonsterAreaEii+0x9a>  ; global constructors keyed to village_attacked::CVillageMonster::CVillageMonster(unsigned short, int, int, int, village_attacked::CVillageMonsterArea*, int, int)+0x9a
086b37ed +0x9b:  mov    %esi,%eax
086b37ef +0x9d:  mov    %ebx,%edx
086b37f1 +0x9f:  mov    %eax,(%esp)
086b37f4 +0xa2:  call   08ae3750 <_Unwind_Resume>
086b37f9 +0xa7:  nop
```

## 反编译 C

```c
// village_attacked::CVillageMonsterArea::CVillageMonsterArea @ 0x86b3752

/* village_attacked::CVillageMonsterArea::CVillageMonsterArea(int, int, int, int,
   std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea,
   std::allocator<MapArea> >*) */

void __thiscall
village_attacked::CVillageMonsterArea::CVillageMonsterArea
          (CVillageMonsterArea *this,int param_1,int param_2,int param_3,int param_4,vector *param_5
          ,vector *param_6)

{
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::map((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
         *)this);
                    /* try { // try from 086b376e to 086b3772 has its CatchHandler @ 086b37de */
  std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::vector
            ((vector<STAttackedMonster,std::allocator<STAttackedMonster>> *)(this + 0x1c));
  *(int *)(this + 0x28) = param_1;
  *(int *)(this + 0x2c) = param_2;
                    /* try { // try from 086b3795 to 086b3799 has its CatchHandler @ 086b37c6 */
  std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::operator=
            ((vector<STAttackedMonster,std::allocator<STAttackedMonster>> *)(this + 0x1c),param_5);
  *(vector **)(this + 0x18) = param_6;
  *(int *)(this + 0x34) = param_3;
  *(int *)(this + 0x38) = param_4;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}
```
