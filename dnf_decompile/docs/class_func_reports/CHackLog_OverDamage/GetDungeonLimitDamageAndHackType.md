# GetDungeonLimitDamageAndHackType

`_ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE`

`CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&, WongWork::ENUM_HACKTYPE&)`

| 类 | 地址 |
|---|---|
| `CHackLog_OverDamage` | `0x08286790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08286790  _ZN19CHackLog_OverDamage32GetDungeonLimitDamageAndHackTypeEP5CUserRjRN8WongWork13ENUM_HACKTYPEE
#           CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&, WongWork::ENUM_HACKTYPE&)
# range [0x08286790, 0x08286983]
08286790 +0x000:  push   %ebp
08286791 +0x001:  mov    %esp,%ebp
08286793 +0x003:  push   %ebx
08286794 +0x004:  sub    $0x54,%esp
08286797 +0x007:  cmpl   $0x0,0x8(%ebp)
0828679b +0x00b:  je     082867d7 <+0x47>
0828679d +0x00d:  mov    0x8(%ebp),%eax
082867a0 +0x010:  mov    %eax,(%esp)
082867a3 +0x013:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082867a8 +0x018:  test   %eax,%eax
082867aa +0x01a:  je     082867d7 <+0x47>
082867ac +0x01c:  mov    0x8(%ebp),%eax
082867af +0x01f:  mov    %eax,(%esp)
082867b2 +0x022:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082867b7 +0x027:  mov    0xcac(%eax),%eax
082867bd +0x02d:  test   %eax,%eax
082867bf +0x02f:  je     082867d7 <+0x47>
082867c1 +0x031:  mov    0x8(%ebp),%eax
082867c4 +0x034:  mov    %eax,(%esp)
082867c7 +0x037:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082867cc +0x03c:  test   %eax,%eax
082867ce +0x03e:  jle    082867d7 <+0x47>
082867d0 +0x040:  mov    $0x1,%eax
082867d5 +0x045:  jmp    082867dc <+0x4c>
082867d7 +0x047:  mov    $0x0,%eax
082867dc +0x04c:  test   %al,%al
082867de +0x04e:  je     0828697e <+0x1ee>
082867e4 +0x054:  movl   $0x6,-0x2c(%ebp)
082867eb +0x05b:  fld1
082867ed +0x05d:  fstpl  -0x28(%ebp)
082867f0 +0x060:  mov    0x8(%ebp),%eax
082867f3 +0x063:  mov    %eax,(%esp)
082867f6 +0x066:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082867fb +0x06b:  mov    %eax,%ebx
082867fd +0x06d:  mov    0x8(%ebp),%eax
08286800 +0x070:  mov    %eax,(%esp)
08286803 +0x073:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08286808 +0x078:  mov    0xcac(%eax),%eax
0828680e +0x07e:  mov    %eax,(%esp)
08286811 +0x081:  call   0814559a <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1d>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1d
08286816 +0x086:  mov    %ebx,%edx
08286818 +0x088:  sub    %eax,%edx
0828681a +0x08a:  mov    %edx,%eax
0828681c +0x08c:  mov    %eax,-0x1c(%ebp)
0828681f +0x08f:  cmpl   $0x0,-0x1c(%ebp)
08286823 +0x093:  jns    0828682c <+0x9c>
08286825 +0x095:  movl   $0x0,-0x1c(%ebp)
0828682c +0x09c:  fld1
0828682e +0x09e:  fstpl  -0x18(%ebp)
08286831 +0x0a1:  mov    0x8(%ebp),%eax
08286834 +0x0a4:  mov    %eax,(%esp)
08286837 +0x0a7:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0828683c +0x0ac:  mov    0xcac(%eax),%eax
08286842 +0x0b2:  mov    %eax,(%esp)
08286845 +0x0b5:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0828684a +0x0ba:  cmp    $0x2af8,%eax
0828684f +0x0bf:  je     08286927 <+0x197>
08286855 +0x0c5:  cmp    $0x2af8,%eax
0828685a +0x0ca:  jg     08286863 <+0xd3>
0828685c +0x0cc:  cmp    $0x64,%eax
0828685f +0x0cf:  je     0828687b <+0xeb>
08286861 +0x0d1:  jmp    082868a2 <+0x112>
08286863 +0x0d3:  cmp    $0x2af9,%eax
08286868 +0x0d8:  je     0828692a <+0x19a>
0828686e +0x0de:  cmp    $0x2afe,%eax
08286873 +0x0e3:  je     0828692d <+0x19d>
08286879 +0x0e9:  jmp    082868a2 <+0x112>
0828687b +0x0eb:  mov    0x8(%ebp),%eax
0828687e +0x0ee:  mov    %eax,(%esp)
08286881 +0x0f1:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08286886 +0x0f6:  add    $0xb24,%eax
0828688b +0x0fb:  mov    %eax,(%esp)
0828688e +0x0fe:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
08286893 +0x103:  fldl   &_ZL41_S_KILL_MONSTER_OVER_DAMAGE_DUNGEON_RATIO(,%eax,8)
0828689a +0x10a:  fstpl  -0x28(%ebp)
0828689d +0x10d:  jmp    0828692e <+0x19e>
082868a2 +0x112:  mov    -0x1c(%ebp),%ecx
082868a5 +0x115:  mov    $0x66666667,%edx
082868aa +0x11a:  mov    %ecx,%eax
082868ac +0x11c:  imul   %edx
082868ae +0x11e:  sar    $0x3,%edx
082868b1 +0x121:  mov    %ecx,%eax
082868b3 +0x123:  sar    $0x1f,%eax
082868b6 +0x126:  mov    %edx,%ecx
082868b8 +0x128:  sub    %eax,%ecx
082868ba +0x12a:  mov    %ecx,%eax
082868bc +0x12c:  mov    %eax,-0x48(%ebp)
082868bf +0x12f:  fildl  -0x48(%ebp)
082868c2 +0x132:  fstpl  -0x18(%ebp)
082868c5 +0x135:  fldl   -0x18(%ebp)
082868c8 +0x138:  fld1
082868ca +0x13a:  fucompp
082868cc +0x13c:  fnstsw %ax
082868ce +0x13e:  test   $0x45,%ah
082868d1 +0x141:  sete   %al
082868d4 +0x144:  test   %al,%al
082868d6 +0x146:  je     082868dd <+0x14d>
082868d8 +0x148:  fld1
082868da +0x14a:  fstpl  -0x18(%ebp)
082868dd +0x14d:  mov    0x8(%ebp),%eax
082868e0 +0x150:  mov    %eax,(%esp)
082868e3 +0x153:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
082868e8 +0x158:  sub    $0x1,%eax
082868eb +0x15b:  mov    %eax,-0xc(%ebp)
082868ee +0x15e:  mov    -0xc(%ebp),%eax
082868f1 +0x161:  sar    $0x1f,%eax
082868f4 +0x164:  not    %eax
082868f6 +0x166:  and    -0xc(%ebp),%eax
082868f9 +0x169:  mov    &_ZL19LEVEL_SECTION_TABLE(,%eax,4),%eax
08286900 +0x170:  mov    %eax,-0x2c(%ebp)
08286903 +0x173:  mov    0x8(%ebp),%eax
08286906 +0x176:  mov    %eax,(%esp)
08286909 +0x179:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0828690e +0x17e:  add    $0xb24,%eax
08286913 +0x183:  mov    %eax,(%esp)
08286916 +0x186:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
0828691b +0x18b:  fldl   &_ZL41_S_KILL_MONSTER_OVER_DAMAGE_DUNGEON_RATIO(,%eax,8)
08286922 +0x192:  fstpl  -0x28(%ebp)
08286925 +0x195:  jmp    0828692e <+0x19e>
08286927 +0x197:  nop
08286928 +0x198:  jmp    0828692e <+0x19e>
0828692a +0x19a:  nop
0828692b +0x19b:  jmp    0828692e <+0x19e>
0828692d +0x19d:  nop
0828692e +0x19e:  mov    -0x2c(%ebp),%eax
08286931 +0x1a1:  mov    &_ZL33_S_KILL_MONSTER_OVER_DAMAGE_CONST(,%eax,4),%eax
08286938 +0x1a8:  mov    $0x0,%edx
0828693d +0x1ad:  mov    %eax,-0x40(%ebp)
08286940 +0x1b0:  mov    %edx,-0x3c(%ebp)
08286943 +0x1b3:  fildll -0x40(%ebp)
08286946 +0x1b6:  fmull  -0x28(%ebp)
08286949 +0x1b9:  fmull  -0x18(%ebp)
0828694c +0x1bc:  fnstcw -0x42(%ebp)
0828694f +0x1bf:  movzwl -0x42(%ebp),%eax
08286953 +0x1c3:  mov    $0xc,%ah
08286955 +0x1c5:  mov    %ax,-0x44(%ebp)
08286959 +0x1c9:  fldcw  -0x44(%ebp)
0828695c +0x1cc:  fistpll -0x40(%ebp)
0828695f +0x1cf:  fldcw  -0x42(%ebp)
08286962 +0x1d2:  mov    -0x40(%ebp),%eax
08286965 +0x1d5:  mov    -0x3c(%ebp),%edx
08286968 +0x1d8:  mov    %eax,%edx
0828696a +0x1da:  mov    0xc(%ebp),%eax
0828696d +0x1dd:  mov    %edx,(%eax)
0828696f +0x1df:  mov    -0x2c(%ebp),%eax
08286972 +0x1e2:  mov    &_ZL37_S_KILL_MONSTER_OVER_DAMAGE_HACK_TYPE(,%eax,4),%edx
08286979 +0x1e9:  mov    0x10(%ebp),%eax
0828697c +0x1ec:  mov    %edx,(%eax)
0828697e +0x1ee:  add    $0x54,%esp
08286981 +0x1f1:  pop    %ebx
08286982 +0x1f2:  pop    %ebp
08286983 +0x1f3:  ret
```

## 反编译 C

```c
// CHackLog_OverDamage::GetDungeonLimitDamageAndHackType @ 0x8286790

/* CHackLog_OverDamage::GetDungeonLimitDamageAndHackType(CUser*, unsigned int&,
   WongWork::ENUM_HACKTYPE&) */

void CHackLog_OverDamage::GetDungeonLimitDamageAndHackType
               (CUser *param_1,uint *param_2,ENUM_HACKTYPE *param_3)

{
  bool bVar1;
  int iVar2;
  ulonglong local_44;
  int local_30;
  double local_2c;
  int local_20;
  double local_1c;
  
  if ((((param_1 == (CUser *)0x0) || (iVar2 = CUser::GetParty(param_1), iVar2 == 0)) ||
      (iVar2 = CUser::GetParty(param_1), *(int *)(iVar2 + 0xcac) == 0)) ||
     (iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1), iVar2 < 1)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return;
  }
  local_30 = 6;
  local_2c = 1.0;
  local_20 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  iVar2 = CUser::GetParty(param_1);
  iVar2 = CDungeon::get_min_level(*(CDungeon **)(iVar2 + 0xcac));
  local_20 = local_20 - iVar2;
  if (local_20 < 0) {
    local_20 = 0;
  }
  local_1c = 1.0;
  iVar2 = CUser::GetParty(param_1);
  iVar2 = CDungeon::get_index(*(CDungeon **)(iVar2 + 0xcac));
  if (iVar2 != 11000) {
    if (iVar2 < 0x2af9) {
      if (iVar2 == 100) {
        iVar2 = CUser::GetParty(param_1);
        iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(iVar2 + 0xb24));
        local_2c = *(double *)(_S_KILL_MONSTER_OVER_DAMAGE_DUNGEON_RATIO + iVar2 * 8);
        goto LAB_0828692e;
      }
    }
    else if ((iVar2 == 0x2af9) || (iVar2 == 0x2afe)) goto LAB_0828692e;
    local_1c = (double)(local_20 / 0x14);
    if (local_1c < 1.0) {
      local_1c = 1.0;
    }
    iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    local_30 = *(int *)(LEVEL_SECTION_TABLE + (~((int)(iVar2 - 1U) >> 0x1f) & iVar2 - 1U) * 4);
    iVar2 = CUser::GetParty(param_1);
    iVar2 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(iVar2 + 0xb24));
    local_2c = *(double *)(_S_KILL_MONSTER_OVER_DAMAGE_DUNGEON_RATIO + iVar2 * 8);
  }
LAB_0828692e:
  local_44 = (ulonglong)*(uint *)(_S_KILL_MONSTER_OVER_DAMAGE_CONST + local_30 * 4);
  local_44._0_4_ = (uint)(longlong)ROUND((double)local_44 * local_2c * local_1c);
  *param_2 = (uint)local_44;
  *(undefined4 *)param_3 = *(undefined4 *)(_S_KILL_MONSTER_OVER_DAMAGE_HACK_TYPE + local_30 * 4);
  return;
}
```
