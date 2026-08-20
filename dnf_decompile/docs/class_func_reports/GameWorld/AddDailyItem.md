# AddDailyItem

`_ZN9GameWorld12AddDailyItemEv`

`GameWorld::AddDailyItem()`

| 类 | 地址 |
|---|---|
| `GameWorld` | `0x086ccdce` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086ccdce  _ZN9GameWorld12AddDailyItemEv
#           GameWorld::AddDailyItem()
# range [0x086ccdce, 0x086ccf57]
086ccdce +0x000:  push   %ebp
086ccdcf +0x001:  mov    %esp,%ebp
086ccdd1 +0x003:  push   %esi
086ccdd2 +0x004:  push   %ebx
086ccdd3 +0x005:  sub    $0x30,%esp
086ccdd6 +0x008:  mov    0x8(%ebp),%eax
086ccdd9 +0x00b:  lea    0x134(%eax),%edx
086ccddf +0x011:  lea    -0x18(%ebp),%eax
086ccde2 +0x014:  mov    %edx,0x4(%esp)
086ccde6 +0x018:  mov    %eax,(%esp)
086ccde9 +0x01b:  call   080f78a6 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xa3>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xa3
086ccdee +0x020:  sub    $0x4,%esp
086ccdf1 +0x023:  jmp    086ccf18 <+0x14a>
086ccdf6 +0x028:  lea    -0x18(%ebp),%eax
086ccdf9 +0x02b:  mov    %eax,(%esp)
086ccdfc +0x02e:  call   080f7944 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x141>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x141
086cce01 +0x033:  mov    0x4(%eax),%eax
086cce04 +0x036:  mov    %eax,-0xc(%ebp)
086cce07 +0x039:  mov    -0xc(%ebp),%eax
086cce0a +0x03c:  mov    %eax,(%esp)
086cce0d +0x03f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
086cce12 +0x044:  cmp    $0x2,%eax
086cce15 +0x047:  setle  %al
086cce18 +0x04a:  test   %al,%al
086cce1a +0x04c:  jne    086ccefa <+0x12c>
086cce20 +0x052:  mov    -0xc(%ebp),%eax
086cce23 +0x055:  mov    %eax,(%esp)
086cce26 +0x058:  call   08656caa <_ZN5CUser12AddDailyItemEv>  ; CUser::AddDailyItem()
086cce2b +0x05d:  mov    -0xc(%ebp),%eax
086cce2e +0x060:  mov    %eax,(%esp)
086cce31 +0x063:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086cce36 +0x068:  test   %eax,%eax
086cce38 +0x06a:  setne  %al
086cce3b +0x06d:  test   %al,%al
086cce3d +0x06f:  je     086cceb4 <+0xe6>
086cce3f +0x071:  mov    -0xc(%ebp),%eax
086cce42 +0x074:  mov    %eax,(%esp)
086cce45 +0x077:  call   08657570 <_ZN5CUser15ResetDailyQuestEv>  ; CUser::ResetDailyQuest()
086cce4a +0x07c:  mov    -0xc(%ebp),%eax
086cce4d +0x07f:  mov    %eax,(%esp)
086cce50 +0x082:  call   08657662 <_ZN5CUser18ResetTrainingQuestEv>  ; CUser::ResetTrainingQuest()
086cce55 +0x087:  lea    -0x24(%ebp),%eax
086cce58 +0x08a:  mov    %eax,(%esp)
086cce5b +0x08d:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086cce60 +0x092:  lea    -0x24(%ebp),%ebx
086cce63 +0x095:  mov    -0xc(%ebp),%eax
086cce66 +0x098:  mov    %eax,(%esp)
086cce69 +0x09b:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
086cce6e +0x0a0:  mov    %ebx,0x4(%esp)
086cce72 +0x0a4:  mov    %eax,(%esp)
086cce75 +0x0a7:  call   086abba8 <_ZNK9UserQuest14get_quest_infoEPc>  ; UserQuest::get_quest_info(char*) const
086cce7a +0x0ac:  lea    -0x24(%ebp),%eax
086cce7d +0x0af:  mov    %eax,0x4(%esp)
086cce81 +0x0b3:  mov    -0xc(%ebp),%eax
086cce84 +0x0b6:  mov    %eax,(%esp)
086cce87 +0x0b9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086cce8c +0x0be:  jmp    086ccea9 <+0xdb>
086cce8e +0x0c0:  mov    %edx,%ebx
086cce90 +0x0c2:  mov    %eax,%esi
086cce92 +0x0c4:  lea    -0x24(%ebp),%eax
086cce95 +0x0c7:  mov    %eax,(%esp)
086cce98 +0x0ca:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cce9d +0x0cf:  mov    %esi,%eax
086cce9f +0x0d1:  mov    %ebx,%edx
086ccea1 +0x0d3:  mov    %eax,(%esp)
086ccea4 +0x0d6:  call   08ae3750 <_Unwind_Resume>
086ccea9 +0x0db:  lea    -0x24(%ebp),%eax
086cceac +0x0de:  mov    %eax,(%esp)
086cceaf +0x0e1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086cceb4 +0x0e6:  mov    -0xc(%ebp),%eax
086cceb7 +0x0e9:  mov    %eax,(%esp)
086cceba +0x0ec:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
086ccebf +0x0f1:  test   %eax,%eax
086ccec1 +0x0f3:  setne  %al
086ccec4 +0x0f6:  test   %al,%al
086ccec6 +0x0f8:  je     086ccefb <+0x12d>
086ccec8 +0x0fa:  mov    -0xc(%ebp),%eax
086ccecb +0x0fd:  mov    %eax,(%esp)
086ccece +0x100:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
086cced3 +0x105:  cmp    $0x3b,%eax
086cced6 +0x108:  setg   %al
086cced9 +0x10b:  test   %al,%al
086ccedb +0x10d:  je     086ccefb <+0x12d>
086ccedd +0x10f:  movl   $0x1,0x8(%esp)
086ccee5 +0x117:  movl   $0x1,0x4(%esp)
086cceed +0x11f:  mov    -0xc(%ebp),%eax
086ccef0 +0x122:  mov    %eax,(%esp)
086ccef3 +0x125:  call   08656c12 <_ZN5CUser20DimensionInoutUpdateEbb>  ; CUser::DimensionInoutUpdate(bool, bool)
086ccef8 +0x12a:  jmp    086ccefb <+0x12d>
086ccefa +0x12c:  nop
086ccefb +0x12d:  lea    -0x10(%ebp),%eax
086ccefe +0x130:  movl   $0x0,0x8(%esp)
086ccf06 +0x138:  lea    -0x18(%ebp),%edx
086ccf09 +0x13b:  mov    %edx,0x4(%esp)
086ccf0d +0x13f:  mov    %eax,(%esp)
086ccf10 +0x142:  call   080f7906 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x103>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x103
086ccf15 +0x147:  sub    $0x4,%esp
086ccf18 +0x14a:  mov    0x8(%ebp),%eax
086ccf1b +0x14d:  lea    0x134(%eax),%edx
086ccf21 +0x153:  lea    -0x14(%ebp),%eax
086ccf24 +0x156:  mov    %edx,0x4(%esp)
086ccf28 +0x15a:  mov    %eax,(%esp)
086ccf2b +0x15d:  call   080f78cc <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xc9>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xc9
086ccf30 +0x162:  sub    $0x4,%esp
086ccf33 +0x165:  lea    -0x14(%ebp),%eax
086ccf36 +0x168:  mov    %eax,0x4(%esp)
086ccf3a +0x16c:  lea    -0x18(%ebp),%eax
086ccf3d +0x16f:  mov    %eax,(%esp)
086ccf40 +0x172:  call   080f78f2 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0xef>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0xef
086ccf45 +0x177:  test   %al,%al
086ccf47 +0x179:  jne    086ccdf6 <+0x28>
086ccf4d +0x17f:  lea    -0x8(%ebp),%esp
086ccf50 +0x182:  add    $0x0,%esp
086ccf53 +0x185:  pop    %ebx
086ccf54 +0x186:  pop    %esi
086ccf55 +0x187:  pop    %ebp
086ccf56 +0x188:  ret
086ccf57 +0x189:  nop
```

## 反编译 C

```c
// GameWorld::AddDailyItem @ 0x86ccdce

/* GameWorld::AddDailyItem() */

void GameWorld::AddDailyItem(void)

{
  char cVar1;
  int iVar2;
  UserQuest *this;
  PacketGuard local_28 [12];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      CUser::AddDailyItem(local_10);
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_10);
      if (iVar2 != 0) {
        CUser::ResetDailyQuest(local_10);
        CUser::ResetTrainingQuest(local_10);
        PacketGuard::PacketGuard(local_28);
        this = (UserQuest *)CUser::getCurCharacQuestR(local_10);
                    /* try { // try from 086cce75 to 086cce8b has its CatchHandler @ 086cce8e */
        UserQuest::get_quest_info(this,(char *)local_28);
        CUser::Send(local_10,local_28);
        PacketGuard::~PacketGuard(local_28);
      }
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)local_10);
      if (iVar2 != 0) {
        iVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)local_10);
        if (0x3b < iVar2) {
          CUser::DimensionInoutUpdate(local_10,true,true);
        }
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}
```
