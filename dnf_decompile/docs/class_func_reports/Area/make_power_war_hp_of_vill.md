# make_power_war_hp_of_vill

`_ZN4Area25make_power_war_hp_of_villER11PacketGuardRi`

`Area::make_power_war_hp_of_vill(PacketGuard&, int&)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c2c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c2c1e  _ZN4Area25make_power_war_hp_of_villER11PacketGuardRi
#           Area::make_power_war_hp_of_vill(PacketGuard&, int&)
# range [0x086c2c1e, 0x086c2d29]
086c2c1e +0x000:  push   %ebp
086c2c1f +0x001:  mov    %esp,%ebp
086c2c21 +0x003:  sub    $0x48,%esp
086c2c24 +0x006:  movl   $0x0,-0xc(%ebp)
086c2c2b +0x00d:  lea    -0x1c(%ebp),%eax
086c2c2e +0x010:  mov    %eax,(%esp)
086c2c31 +0x013:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c2c36 +0x018:  mov    0x8(%ebp),%eax
086c2c39 +0x01b:  lea    0x44(%eax),%edx
086c2c3c +0x01e:  lea    -0x2c(%ebp),%eax
086c2c3f +0x021:  mov    %edx,0x4(%esp)
086c2c43 +0x025:  mov    %eax,(%esp)
086c2c46 +0x028:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c2c4b +0x02d:  sub    $0x4,%esp
086c2c4e +0x030:  mov    -0x2c(%ebp),%eax
086c2c51 +0x033:  mov    %eax,-0x1c(%ebp)
086c2c54 +0x036:  jmp    086c2cf6 <+0xd8>
086c2c59 +0x03b:  lea    -0x1c(%ebp),%eax
086c2c5c +0x03e:  mov    %eax,(%esp)
086c2c5f +0x041:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c2c64 +0x046:  mov    0x4(%eax),%eax
086c2c67 +0x049:  mov    %eax,-0xc(%ebp)
086c2c6a +0x04c:  cmpl   $0x0,-0xc(%ebp)
086c2c6e +0x050:  je     086c2c80 <+0x62>
086c2c70 +0x052:  mov    -0xc(%ebp),%eax
086c2c73 +0x055:  mov    %eax,(%esp)
086c2c76 +0x058:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c2c7b +0x05d:  cmp    $0x2,%eax
086c2c7e +0x060:  jg     086c2c87 <+0x69>
086c2c80 +0x062:  mov    $0x1,%eax
086c2c85 +0x067:  jmp    086c2c8c <+0x6e>
086c2c87 +0x069:  mov    $0x0,%eax
086c2c8c +0x06e:  test   %al,%al
086c2c8e +0x070:  je     086c2caf <+0x91>
086c2c90 +0x072:  lea    -0x14(%ebp),%eax
086c2c93 +0x075:  movl   $0x0,0x8(%esp)
086c2c9b +0x07d:  lea    -0x1c(%ebp),%edx
086c2c9e +0x080:  mov    %edx,0x4(%esp)
086c2ca2 +0x084:  mov    %eax,(%esp)
086c2ca5 +0x087:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2caa +0x08c:  sub    $0x4,%esp
086c2cad +0x08f:  jmp    086c2cf6 <+0xd8>
086c2caf +0x091:  mov    -0xc(%ebp),%eax
086c2cb2 +0x094:  mov    %eax,(%esp)
086c2cb5 +0x097:  call   082f09ee <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x772>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x772
086c2cba +0x09c:  movzwl %ax,%edx
086c2cbd +0x09f:  mov    0xc(%ebp),%eax
086c2cc0 +0x0a2:  mov    %edx,0x4(%esp)
086c2cc4 +0x0a6:  mov    %eax,(%esp)
086c2cc7 +0x0a9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086c2ccc +0x0ae:  lea    -0x10(%ebp),%eax
086c2ccf +0x0b1:  movl   $0x0,0x8(%esp)
086c2cd7 +0x0b9:  lea    -0x1c(%ebp),%edx
086c2cda +0x0bc:  mov    %edx,0x4(%esp)
086c2cde +0x0c0:  mov    %eax,(%esp)
086c2ce1 +0x0c3:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2ce6 +0x0c8:  sub    $0x4,%esp
086c2ce9 +0x0cb:  mov    0x10(%ebp),%eax
086c2cec +0x0ce:  mov    (%eax),%eax
086c2cee +0x0d0:  lea    0x1(%eax),%edx
086c2cf1 +0x0d3:  mov    0x10(%ebp),%eax
086c2cf4 +0x0d6:  mov    %edx,(%eax)
086c2cf6 +0x0d8:  mov    0x8(%ebp),%eax
086c2cf9 +0x0db:  lea    0x44(%eax),%edx
086c2cfc +0x0de:  lea    -0x18(%ebp),%eax
086c2cff +0x0e1:  mov    %edx,0x4(%esp)
086c2d03 +0x0e5:  mov    %eax,(%esp)
086c2d06 +0x0e8:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c2d0b +0x0ed:  sub    $0x4,%esp
086c2d0e +0x0f0:  lea    -0x18(%ebp),%eax
086c2d11 +0x0f3:  mov    %eax,0x4(%esp)
086c2d15 +0x0f7:  lea    -0x1c(%ebp),%eax
086c2d18 +0x0fa:  mov    %eax,(%esp)
086c2d1b +0x0fd:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c2d20 +0x102:  test   %al,%al
086c2d22 +0x104:  jne    086c2c59 <+0x3b>
086c2d28 +0x10a:  leave
086c2d29 +0x10b:  ret
```

## 反编译 C

```c
// Area::make_power_war_hp_of_vill @ 0x86c2c1e

/* Area::make_power_war_hp_of_vill(PacketGuard&, int&) */

void __thiscall Area::make_power_war_hp_of_vill(Area *this,PacketGuard *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30 [4];
  undefined4 local_20;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUserCharacInfo *local_10;
  
  local_10 = (CUserCharacInfo *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_20 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_1c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_20);
    local_10 = *(CUserCharacInfo **)(iVar3 + 4);
    if (local_10 == (CUserCharacInfo *)0x0) {
LAB_086c2c80:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state((CUser *)local_10);
      if (iVar3 < 3) goto LAB_086c2c80;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_20);
    }
    else {
      uVar4 = CUserCharacInfo::getPowerWarHP(local_10);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_14,(int)&local_20);
      *param_2 = *param_2 + 1;
    }
  } while( true );
}
```
