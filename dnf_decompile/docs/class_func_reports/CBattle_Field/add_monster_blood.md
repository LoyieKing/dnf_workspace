# add_monster_blood

`_ZN13CBattle_Field17add_monster_bloodER11map_monsterRiS2_`

`CBattle_Field::add_monster_blood(map_monster&, int&, int&)`

| 类 | 地址 |
|---|---|
| `CBattle_Field` | `0x08301bf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08301bf6  _ZN13CBattle_Field17add_monster_bloodER11map_monsterRiS2_
#           CBattle_Field::add_monster_blood(map_monster&, int&, int&)
# range [0x08301bf6, 0x08301d75]
08301bf6 +0x000:  push   %ebp
08301bf7 +0x001:  mov    %esp,%ebp
08301bf9 +0x003:  push   %esi
08301bfa +0x004:  push   %ebx
08301bfb +0x005:  sub    $0x40,%esp
08301bfe +0x008:  mov    0x8(%ebp),%eax
08301c01 +0x00b:  mov    0x108(%eax),%eax
08301c07 +0x011:  test   %eax,%eax
08301c09 +0x013:  jne    08301c15 <+0x1f>
08301c0b +0x015:  mov    $0x0,%eax
08301c10 +0x01a:  jmp    08301d6f <+0x179>
08301c15 +0x01f:  mov    0x8(%ebp),%eax
08301c18 +0x022:  mov    0x108(%eax),%eax
08301c1e +0x028:  add    $0xc4,%eax
08301c23 +0x02d:  mov    %eax,(%esp)
08301c26 +0x030:  call   0830ffee <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bd3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bd3
08301c2b +0x035:  test   %eax,%eax
08301c2d +0x037:  setne  %al
08301c30 +0x03a:  test   %al,%al
08301c32 +0x03c:  je     08301d6a <+0x174>
08301c38 +0x042:  mov    0x8(%ebp),%eax
08301c3b +0x045:  mov    0x108(%eax),%eax
08301c41 +0x04b:  lea    0xb8(%eax),%edx
08301c47 +0x051:  mov    0x8(%ebp),%eax
08301c4a +0x054:  add    $0x240,%eax
08301c4f +0x059:  mov    %edx,0x4(%esp)
08301c53 +0x05d:  mov    %eax,(%esp)
08301c56 +0x060:  call   08310010 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1bf5>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1bf5
08301c5b +0x065:  mov    0x8(%ebp),%eax
08301c5e +0x068:  mov    0x108(%eax),%eax
08301c64 +0x06e:  lea    0xc4(%eax),%edx
08301c6a +0x074:  mov    0x8(%ebp),%eax
08301c6d +0x077:  add    $0x24c,%eax
08301c72 +0x07c:  mov    %edx,0x4(%esp)
08301c76 +0x080:  mov    %eax,(%esp)
08301c79 +0x083:  call   08310286 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x1e6b>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x1e6b
08301c7e +0x088:  mov    0x8(%ebp),%eax
08301c81 +0x08b:  mov    0x108(%eax),%eax
08301c87 +0x091:  add    $0xc4,%eax
08301c8c +0x096:  mov    %eax,0x4(%esp)
08301c90 +0x09a:  lea    -0x20(%ebp),%eax
08301c93 +0x09d:  mov    %eax,(%esp)
08301c96 +0x0a0:  call   083105c2 <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x21a7>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x21a7
08301c9b +0x0a5:  mov    0x8(%ebp),%eax
08301c9e +0x0a8:  mov    0x108(%eax),%eax
08301ca4 +0x0ae:  add    $0xb8,%eax
08301ca9 +0x0b3:  mov    %eax,0x4(%esp)
08301cad +0x0b7:  lea    -0x14(%ebp),%eax
08301cb0 +0x0ba:  mov    %eax,(%esp)
08301cb3 +0x0bd:  call   0831050e <_GLOBAL__I__ZN13CBattle_Field21SetTournamentCurRoundEi+0x20f3>  ; global constructors keyed to CBattle_Field::SetTournamentCurRound(int)+0x20f3
08301cb8 +0x0c2:  lea    -0x20(%ebp),%eax
08301cbb +0x0c5:  mov    %eax,0x14(%esp)
08301cbf +0x0c9:  lea    -0x14(%ebp),%eax
08301cc2 +0x0cc:  mov    %eax,0x10(%esp)
08301cc6 +0x0d0:  mov    0x14(%ebp),%eax
08301cc9 +0x0d3:  mov    %eax,0xc(%esp)
08301ccd +0x0d7:  mov    0x10(%ebp),%eax
08301cd0 +0x0da:  mov    %eax,0x8(%esp)
08301cd4 +0x0de:  mov    0xc(%ebp),%eax
08301cd7 +0x0e1:  mov    %eax,0x4(%esp)
08301cdb +0x0e5:  mov    0x8(%ebp),%eax
08301cde +0x0e8:  mov    %eax,(%esp)
08301ce1 +0x0eb:  call   08304804 <_ZN13CBattle_Field17add_blood_monsterER11map_monsterRiS2_St6vectorI19STAssignBloodSystemSaIS4_EES3_I22STAssignBloodPhaseTimeSaIS7_EE>  ; CBattle_Field::add_blood_monster(map_monster&, int&, int&, std::vector<STAssignBloodSystem, std::allocator<STAssignBloodSystem> >, std::vector<STAssignBloodPhaseTime, std::allocator<STAssignBloodPhaseTime> >)
08301ce6 +0x0f0:  mov    %eax,%ebx
08301ce8 +0x0f2:  xor    $0x1,%ebx
08301ceb +0x0f5:  lea    -0x14(%ebp),%eax
08301cee +0x0f8:  mov    %eax,(%esp)
08301cf1 +0x0fb:  call   082aaa86 <_GLOBAL__I__ZN4CLog5this_E+0x6ead>  ; global constructors keyed to CLog::this_+0x6ead
08301cf6 +0x100:  jmp    08301d28 <+0x132>
08301cf8 +0x102:  mov    %edx,%ebx
08301cfa +0x104:  mov    %eax,%esi
08301cfc +0x106:  lea    -0x14(%ebp),%eax
08301cff +0x109:  mov    %eax,(%esp)
08301d02 +0x10c:  call   082aaa86 <_GLOBAL__I__ZN4CLog5this_E+0x6ead>  ; global constructors keyed to CLog::this_+0x6ead
08301d07 +0x111:  mov    %esi,%eax
08301d09 +0x113:  mov    %ebx,%edx
08301d0b +0x115:  jmp    08301d0d <+0x117>
08301d0d +0x117:  mov    %edx,%ebx
08301d0f +0x119:  mov    %eax,%esi
08301d11 +0x11b:  lea    -0x20(%ebp),%eax
08301d14 +0x11e:  mov    %eax,(%esp)
08301d17 +0x121:  call   082aaaf8 <_GLOBAL__I__ZN4CLog5this_E+0x6f1f>  ; global constructors keyed to CLog::this_+0x6f1f
08301d1c +0x126:  mov    %esi,%eax
08301d1e +0x128:  mov    %ebx,%edx
08301d20 +0x12a:  mov    %eax,(%esp)
08301d23 +0x12d:  call   08ae3750 <_Unwind_Resume>
08301d28 +0x132:  lea    -0x20(%ebp),%eax
08301d2b +0x135:  mov    %eax,(%esp)
08301d2e +0x138:  call   082aaaf8 <_GLOBAL__I__ZN4CLog5this_E+0x6f1f>  ; global constructors keyed to CLog::this_+0x6f1f
08301d33 +0x13d:  test   %bl,%bl
08301d35 +0x13f:  je     08301d6a <+0x174>
08301d37 +0x141:  movl   $"BLOOD_LOG : MONSTERS SETTING ERROR!!\n",0x10(%esp)
08301d3f +0x149:  movl   $0x62b,0xc(%esp)
08301d47 +0x151:  movl   $&_ZZN13CBattle_Field17add_monster_bloodER11map_monsterRiS2_E19__PRETTY_FUNCTION__,0x8(%esp)
08301d4f +0x159:  movl   $"battle_field.cpp",0x4(%esp)
08301d57 +0x161:  movl   $0x1,(%esp)
08301d5e +0x168:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08301d63 +0x16d:  mov    $0x0,%eax
08301d68 +0x172:  jmp    08301d6f <+0x179>
08301d6a +0x174:  mov    $0x1,%eax
08301d6f +0x179:  add    $0x40,%esp
08301d72 +0x17c:  pop    %ebx
08301d73 +0x17d:  pop    %esi
08301d74 +0x17e:  pop    %ebp
08301d75 +0x17f:  ret
```

## 反编译 C

```c
// CBattle_Field::add_monster_blood @ 0x8301bf6

/* CBattle_Field::add_monster_blood(map_monster&, int&, int&) */

undefined4 __thiscall
CBattle_Field::add_monster_blood(CBattle_Field *this,map_monster *param_1,int *param_2,int *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> local_24 [12];
  vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> local_18 [12];
  
  if (*(int *)(this + 0x108) == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::size
                      ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                       (*(int *)(this + 0x108) + 0xc4));
    if (iVar3 != 0) {
      std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::operator=
                ((vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>> *)(this + 0x240),
                 (vector *)(*(int *)(this + 0x108) + 0xb8));
      std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::operator=
                ((vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>> *)
                 (this + 0x24c),(vector *)(*(int *)(this + 0x108) + 0xc4));
      std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::vector
                (local_24,(vector *)(*(int *)(this + 0x108) + 0xc4));
                    /* try { // try from 08301cb3 to 08301cb7 has its CatchHandler @ 08301d0d */
      std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::vector
                (local_18,(vector *)(*(int *)(this + 0x108) + 0xb8));
                    /* try { // try from 08301ce1 to 08301ce5 has its CatchHandler @ 08301cf8 */
      cVar1 = add_blood_monster(this,param_1,param_2,param_3,local_18,local_24);
                    /* try { // try from 08301cf1 to 08301cf5 has its CatchHandler @ 08301d0d */
      std::vector<STAssignBloodSystem,std::allocator<STAssignBloodSystem>>::~vector(local_18);
      std::vector<STAssignBloodPhaseTime,std::allocator<STAssignBloodPhaseTime>>::~vector(local_24);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"battle_field.cpp",
                   "bool CBattle_Field::add_monster_blood(map_monster&, int&, int&)",0x62b,
                   "BLOOD_LOG : MONSTERS SETTING ERROR!!\n");
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
