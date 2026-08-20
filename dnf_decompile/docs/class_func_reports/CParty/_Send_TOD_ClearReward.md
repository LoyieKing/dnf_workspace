# _Send_TOD_ClearReward

`_ZN6CParty21_Send_TOD_ClearRewardEv`

`CParty::_Send_TOD_ClearReward()`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085baa06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085baa06  _ZN6CParty21_Send_TOD_ClearRewardEv
#           CParty::_Send_TOD_ClearReward()
# range [0x085baa06, 0x085bac21]
085baa06 +0x000:  push   %ebp
085baa07 +0x001:  mov    %esp,%ebp
085baa09 +0x003:  push   %esi
085baa0a +0x004:  push   %ebx
085baa0b +0x005:  sub    $0x30,%esp
085baa0e +0x008:  lea    -0x24(%ebp),%eax
085baa11 +0x00b:  mov    %eax,(%esp)
085baa14 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085baa19 +0x013:  movl   $0x15b,0x8(%esp)
085baa21 +0x01b:  movl   $0x0,0x4(%esp)
085baa29 +0x023:  lea    -0x24(%ebp),%eax
085baa2c +0x026:  mov    %eax,(%esp)
085baa2f +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085baa34 +0x02e:  mov    0x8(%ebp),%eax
085baa37 +0x031:  mov    0x330(%eax),%edx
085baa3d +0x037:  mov    0x32c(%eax),%eax
085baa43 +0x03d:  mov    %eax,0x4(%esp)
085baa47 +0x041:  lea    -0x24(%ebp),%eax
085baa4a +0x044:  mov    %eax,(%esp)
085baa4d +0x047:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085baa52 +0x04c:  mov    0x8(%ebp),%eax
085baa55 +0x04f:  mov    %eax,(%esp)
085baa58 +0x052:  call   08145780 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x203>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x203
085baa5d +0x057:  movl   $0xd,0x4(%esp)
085baa65 +0x05f:  mov    %eax,(%esp)
085baa68 +0x062:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085baa6d +0x067:  mov    %eax,-0x14(%ebp)
085baa70 +0x06a:  lea    -0x16(%ebp),%eax
085baa73 +0x06d:  mov    -0x14(%ebp),%edx
085baa76 +0x070:  mov    %edx,0x4(%esp)
085baa7a +0x074:  mov    %eax,(%esp)
085baa7d +0x077:  call   08643942 <_ZNK13TOD_UserState17getLastEnterLayerEv>  ; TOD_UserState::getLastEnterLayer() const
085baa82 +0x07c:  sub    $0x4,%esp
085baa85 +0x07f:  lea    -0x16(%ebp),%eax
085baa88 +0x082:  mov    %eax,(%esp)
085baa8b +0x085:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
085baa90 +0x08a:  movzwl %ax,%eax
085baa93 +0x08d:  mov    %eax,0x4(%esp)
085baa97 +0x091:  lea    -0x24(%ebp),%eax
085baa9a +0x094:  mov    %eax,(%esp)
085baa9d +0x097:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085baaa2 +0x09c:  movl   $0xa,0x4(%esp)
085baaaa +0x0a4:  lea    -0x24(%ebp),%eax
085baaad +0x0a7:  mov    %eax,(%esp)
085baab0 +0x0aa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085baab5 +0x0af:  mov    0x8(%ebp),%eax
085baab8 +0x0b2:  add    $0x17a8,%eax
085baabd +0x0b7:  mov    %eax,(%esp)
085baac0 +0x0ba:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085baac5 +0x0bf:  cmp    $0x9,%eax
085baac8 +0x0c2:  movl   $0x0,-0x10(%ebp)
085baacf +0x0c9:  jmp    085bab28 <+0x122>
085baad1 +0x0cb:  mov    0x8(%ebp),%eax
085baad4 +0x0ce:  lea    0x17a8(%eax),%edx
085baada +0x0d4:  mov    -0x10(%ebp),%eax
085baadd +0x0d7:  mov    %eax,0x4(%esp)
085baae1 +0x0db:  mov    %edx,(%esp)
085baae4 +0x0de:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085baae9 +0x0e3:  mov    (%eax),%eax
085baaeb +0x0e5:  mov    %eax,0x4(%esp)
085baaef +0x0e9:  lea    -0x24(%ebp),%eax
085baaf2 +0x0ec:  mov    %eax,(%esp)
085baaf5 +0x0ef:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085baafa +0x0f4:  mov    0x8(%ebp),%eax
085baafd +0x0f7:  lea    0x17a8(%eax),%edx
085bab03 +0x0fd:  mov    -0x10(%ebp),%eax
085bab06 +0x100:  mov    %eax,0x4(%esp)
085bab0a +0x104:  mov    %edx,(%esp)
085bab0d +0x107:  call   080ea8a4 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4dd>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x4dd
085bab12 +0x10c:  mov    0x4(%eax),%eax
085bab15 +0x10f:  mov    %eax,0x4(%esp)
085bab19 +0x113:  lea    -0x24(%ebp),%eax
085bab1c +0x116:  mov    %eax,(%esp)
085bab1f +0x119:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085bab24 +0x11e:  addl   $0x1,-0x10(%ebp)
085bab28 +0x122:  mov    0x8(%ebp),%eax
085bab2b +0x125:  add    $0x17a8,%eax
085bab30 +0x12a:  mov    %eax,(%esp)
085bab33 +0x12d:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085bab38 +0x132:  cmp    -0x10(%ebp),%eax
085bab3b +0x135:  seta   %al
085bab3e +0x138:  test   %al,%al
085bab40 +0x13a:  jne    085baad1 <+0xcb>
085bab42 +0x13c:  movl   $0x0,-0xc(%ebp)
085bab49 +0x143:  jmp    085bab75 <+0x16f>
085bab4b +0x145:  movl   $0xffffffff,0x4(%esp)
085bab53 +0x14d:  lea    -0x24(%ebp),%eax
085bab56 +0x150:  mov    %eax,(%esp)
085bab59 +0x153:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085bab5e +0x158:  movl   $0x0,0x4(%esp)
085bab66 +0x160:  lea    -0x24(%ebp),%eax
085bab69 +0x163:  mov    %eax,(%esp)
085bab6c +0x166:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085bab71 +0x16b:  addl   $0x1,-0xc(%ebp)
085bab75 +0x16f:  mov    0x8(%ebp),%eax
085bab78 +0x172:  add    $0x17a8,%eax
085bab7d +0x177:  mov    %eax,(%esp)
085bab80 +0x17a:  call   080dd814 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x35d>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x35d
085bab85 +0x17f:  mov    $0x9,%edx
085bab8a +0x184:  mov    %edx,%ecx
085bab8c +0x186:  sub    %eax,%ecx
085bab8e +0x188:  mov    %ecx,%eax
085bab90 +0x18a:  cmp    -0xc(%ebp),%eax
085bab93 +0x18d:  seta   %al
085bab96 +0x190:  test   %al,%al
085bab98 +0x192:  jne    085bab4b <+0x145>
085bab9a +0x194:  mov    0x8(%ebp),%eax
085bab9d +0x197:  mov    0x17b4(%eax),%eax
085baba3 +0x19d:  mov    %eax,0x4(%esp)
085baba7 +0x1a1:  lea    -0x24(%ebp),%eax
085babaa +0x1a4:  mov    %eax,(%esp)
085babad +0x1a7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085babb2 +0x1ac:  mov    0x8(%ebp),%eax
085babb5 +0x1af:  mov    0x17b8(%eax),%eax
085babbb +0x1b5:  mov    %eax,0x4(%esp)
085babbf +0x1b9:  lea    -0x24(%ebp),%eax
085babc2 +0x1bc:  mov    %eax,(%esp)
085babc5 +0x1bf:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085babca +0x1c4:  movl   $0x1,0x4(%esp)
085babd2 +0x1cc:  lea    -0x24(%ebp),%eax
085babd5 +0x1cf:  mov    %eax,(%esp)
085babd8 +0x1d2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085babdd +0x1d7:  lea    -0x24(%ebp),%eax
085babe0 +0x1da:  mov    %eax,0x4(%esp)
085babe4 +0x1de:  mov    0x8(%ebp),%eax
085babe7 +0x1e1:  mov    %eax,(%esp)
085babea +0x1e4:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085babef +0x1e9:  mov    $0x1,%ebx
085babf4 +0x1ee:  lea    -0x24(%ebp),%eax
085babf7 +0x1f1:  mov    %eax,(%esp)
085babfa +0x1f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085babff +0x1f9:  mov    %ebx,%eax
085bac01 +0x1fb:  lea    -0x8(%ebp),%esp
085bac04 +0x1fe:  add    $0x0,%esp
085bac07 +0x201:  pop    %ebx
085bac08 +0x202:  pop    %esi
085bac09 +0x203:  pop    %ebp
085bac0a +0x204:  ret
085bac0b +0x205:  mov    %edx,%ebx
085bac0d +0x207:  mov    %eax,%esi
085bac0f +0x209:  lea    -0x24(%ebp),%eax
085bac12 +0x20c:  mov    %eax,(%esp)
085bac15 +0x20f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085bac1a +0x214:  mov    %esi,%eax
085bac1c +0x216:  mov    %ebx,%edx
085bac1e +0x218:  mov    %eax,(%esp)
085bac21 +0x21b:  call   08ae3750 <_Unwind_Resume>
```

## 反编译 C

```c
// CParty::_Send_TOD_ClearReward @ 0x85baa06

/* CParty::_Send_TOD_ClearReward() */

undefined4 __thiscall CParty::_Send_TOD_ClearReward(CParty *this)

{
  CUser *pCVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  PacketGuard local_28 [14];
  TOD_Layer local_1a [2];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 085baa2f to 085babee has its CatchHandler @ 085bac0b */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0x15b);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 0x32c));
  pCVar1 = (CUser *)getManager(this);
  local_18 = CUser::GetCharacExpandData(pCVar1,0xd);
  TOD_UserState::getLastEnterLayer();
  uVar2 = TOD_Layer::GetLayer(local_1a);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,uVar2 & 0xffff);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,10);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x17a8));
  local_14 = 0;
  while( true ) {
    uVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + 0x17a8));
    if (uVar2 <= local_14) break;
    piVar3 = (int *)std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                               (this + 0x17a8),local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*piVar3);
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + 0x17a8),local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(iVar4 + 4));
    local_14 = local_14 + 1;
  }
  local_10 = 0;
  while( true ) {
    iVar4 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (this + 0x17a8));
    if (9U - iVar4 <= local_10) break;
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,-1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,0);
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 0x17b4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(this + 0x17b8));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  send_to_party(this,local_28);
  PacketGuard::~PacketGuard(local_28);
  return 1;
}
```
