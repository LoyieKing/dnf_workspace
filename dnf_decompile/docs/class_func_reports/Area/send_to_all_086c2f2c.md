# send_to_all

`_ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE`

`Area::send_to_all(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)`

| 类 | 地址 |
|---|---|
| `Area` | `0x086c2f2c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086c2f2c  _ZN4Area11send_to_allER11PacketGuardRSt6vectorIP5CUserSaIS4_EE
#           Area::send_to_all(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&)
# range [0x086c2f2c, 0x086c305d]
086c2f2c +0x000:  push   %ebp
086c2f2d +0x001:  mov    %esp,%ebp
086c2f2f +0x003:  sub    $0x48,%esp
086c2f32 +0x006:  movl   $0x0,-0x10(%ebp)
086c2f39 +0x00d:  lea    -0x20(%ebp),%eax
086c2f3c +0x010:  mov    %eax,(%esp)
086c2f3f +0x013:  call   086d3826 <_GLOBAL__I_MAX_VILLAGE_NUM+0x2057>  ; global constructors keyed to MAX_VILLAGE_NUM+0x2057
086c2f44 +0x018:  mov    0x8(%ebp),%eax
086c2f47 +0x01b:  lea    0x44(%eax),%edx
086c2f4a +0x01e:  lea    -0x2c(%ebp),%eax
086c2f4d +0x021:  mov    %edx,0x4(%esp)
086c2f51 +0x025:  mov    %eax,(%esp)
086c2f54 +0x028:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086c2f59 +0x02d:  sub    $0x4,%esp
086c2f5c +0x030:  mov    -0x2c(%ebp),%eax
086c2f5f +0x033:  mov    %eax,-0x20(%ebp)
086c2f62 +0x036:  jmp    086c302a <+0xfe>
086c2f67 +0x03b:  lea    -0x20(%ebp),%eax
086c2f6a +0x03e:  mov    %eax,(%esp)
086c2f6d +0x041:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086c2f72 +0x046:  mov    0x4(%eax),%eax
086c2f75 +0x049:  mov    %eax,-0x10(%ebp)
086c2f78 +0x04c:  movl   $0x0,-0xc(%ebp)
086c2f7f +0x053:  jmp    086c2fa1 <+0x75>
086c2f81 +0x055:  mov    -0xc(%ebp),%eax
086c2f84 +0x058:  mov    %eax,0x4(%esp)
086c2f88 +0x05c:  mov    0x10(%ebp),%eax
086c2f8b +0x05f:  mov    %eax,(%esp)
086c2f8e +0x062:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
086c2f93 +0x067:  mov    (%eax),%eax
086c2f95 +0x069:  cmp    -0x10(%ebp),%eax
086c2f98 +0x06c:  sete   %al
086c2f9b +0x06f:  test   %al,%al
086c2f9d +0x071:  addl   $0x1,-0xc(%ebp)
086c2fa1 +0x075:  mov    0x10(%ebp),%eax
086c2fa4 +0x078:  mov    %eax,(%esp)
086c2fa7 +0x07b:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
086c2fac +0x080:  cmp    -0xc(%ebp),%eax
086c2faf +0x083:  seta   %al
086c2fb2 +0x086:  test   %al,%al
086c2fb4 +0x088:  jne    086c2f81 <+0x55>
086c2fb6 +0x08a:  cmpl   $0x0,-0x10(%ebp)
086c2fba +0x08e:  je     086c2fcc <+0xa0>
086c2fbc +0x090:  mov    -0x10(%ebp),%eax
086c2fbf +0x093:  mov    %eax,(%esp)
086c2fc2 +0x096:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086c2fc7 +0x09b:  cmp    $0x2,%eax
086c2fca +0x09e:  jg     086c2fd3 <+0xa7>
086c2fcc +0x0a0:  mov    $0x1,%eax
086c2fd1 +0x0a5:  jmp    086c2fd8 <+0xac>
086c2fd3 +0x0a7:  mov    $0x0,%eax
086c2fd8 +0x0ac:  test   %al,%al
086c2fda +0x0ae:  je     086c2ffb <+0xcf>
086c2fdc +0x0b0:  lea    -0x18(%ebp),%eax
086c2fdf +0x0b3:  movl   $0x0,0x8(%esp)
086c2fe7 +0x0bb:  lea    -0x20(%ebp),%edx
086c2fea +0x0be:  mov    %edx,0x4(%esp)
086c2fee +0x0c2:  mov    %eax,(%esp)
086c2ff1 +0x0c5:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c2ff6 +0x0ca:  sub    $0x4,%esp
086c2ff9 +0x0cd:  jmp    086c302a <+0xfe>
086c2ffb +0x0cf:  mov    0xc(%ebp),%eax
086c2ffe +0x0d2:  mov    %eax,0x4(%esp)
086c3002 +0x0d6:  mov    -0x10(%ebp),%eax
086c3005 +0x0d9:  mov    %eax,(%esp)
086c3008 +0x0dc:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086c300d +0x0e1:  lea    -0x14(%ebp),%eax
086c3010 +0x0e4:  movl   $0x0,0x8(%esp)
086c3018 +0x0ec:  lea    -0x20(%ebp),%edx
086c301b +0x0ef:  mov    %edx,0x4(%esp)
086c301f +0x0f3:  mov    %eax,(%esp)
086c3022 +0x0f6:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086c3027 +0x0fb:  sub    $0x4,%esp
086c302a +0x0fe:  mov    0x8(%ebp),%eax
086c302d +0x101:  lea    0x44(%eax),%edx
086c3030 +0x104:  lea    -0x1c(%ebp),%eax
086c3033 +0x107:  mov    %edx,0x4(%esp)
086c3037 +0x10b:  mov    %eax,(%esp)
086c303a +0x10e:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086c303f +0x113:  sub    $0x4,%esp
086c3042 +0x116:  lea    -0x1c(%ebp),%eax
086c3045 +0x119:  mov    %eax,0x4(%esp)
086c3049 +0x11d:  lea    -0x20(%ebp),%eax
086c304c +0x120:  mov    %eax,(%esp)
086c304f +0x123:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086c3054 +0x128:  test   %al,%al
086c3056 +0x12a:  jne    086c2f67 <+0x3b>
086c305c +0x130:  leave
086c305d +0x131:  ret
```

## 反编译 C

```c
// Area::send_to_all @ 0x86c2f2c

/* Area::send_to_all(PacketGuard&, std::vector<CUser*, std::allocator<CUser*> >&) */

void __thiscall Area::send_to_all(Area *this,PacketGuard *param_1,vector *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_30 [3];
  undefined4 local_24;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_20 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_1c [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_18 [4];
  CUser *local_14;
  uint local_10;
  
  local_14 = (CUser *)0x0;
  std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin((map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
           *)local_30);
  local_24 = local_30[0];
  do {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_20);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24,
                       (_Rb_tree_iterator *)local_20);
    if (cVar2 == '\0') {
      return;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)&local_24);
    local_14 = *(CUser **)(iVar3 + 4);
    local_10 = 0;
    while( true ) {
      uVar4 = std::vector<CUser*,std::allocator<CUser*>>::size
                        ((vector<CUser*,std::allocator<CUser*>> *)param_2);
      if (uVar4 <= local_10) break;
      std::vector<CUser*,std::allocator<CUser*>>::operator[]
                ((vector<CUser*,std::allocator<CUser*>> *)param_2,local_10);
      local_10 = local_10 + 1;
    }
    if (local_14 == (CUser *)0x0) {
LAB_086c2fcc:
      bVar1 = true;
    }
    else {
      iVar3 = CUser::get_state(local_14);
      if (iVar3 < 3) goto LAB_086c2fcc;
      bVar1 = false;
    }
    if (bVar1) {
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_1c,(int)&local_24);
    }
    else {
      CUser::Send(local_14,param_1);
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
                (local_18,(int)&local_24);
    }
  } while( true );
}
```
