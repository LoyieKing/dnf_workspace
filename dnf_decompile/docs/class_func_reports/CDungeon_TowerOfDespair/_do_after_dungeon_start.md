# _do_after_dungeon_start

`_ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser`

`CDungeon_TowerOfDespair::_do_after_dungeon_start(CUser*) const`

| 类 | 地址 |
|---|---|
| `CDungeon_TowerOfDespair` | `0x0834d8ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0834d8ec  _ZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUser
#           CDungeon_TowerOfDespair::_do_after_dungeon_start(CUser*) const
# range [0x0834d8ec, 0x0834dcd9]
0834d8ec +0x000:  push   %ebp
0834d8ed +0x001:  mov    %esp,%ebp
0834d8ef +0x003:  push   %esi
0834d8f0 +0x004:  push   %ebx
0834d8f1 +0x005:  sub    $0xb0,%esp
0834d8f7 +0x00b:  cmpl   $0x0,0xc(%ebp)
0834d8fb +0x00f:  jne    0834d907 <+0x1b>
0834d8fd +0x011:  mov    $0x0,%eax
0834d902 +0x016:  jmp    0834dcd0 <+0x3e4>
0834d907 +0x01b:  movl   $0xd,0x4(%esp)
0834d90f +0x023:  mov    0xc(%ebp),%eax
0834d912 +0x026:  mov    %eax,(%esp)
0834d915 +0x029:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0834d91a +0x02e:  mov    %eax,-0x14(%ebp)
0834d91d +0x031:  mov    -0x14(%ebp),%eax
0834d920 +0x034:  mov    %eax,(%esp)
0834d923 +0x037:  call   0864388a <_ZN13TOD_UserState18IncreaseEnterCountEv>  ; TOD_UserState::IncreaseEnterCount()
0834d928 +0x03c:  mov    -0x14(%ebp),%eax
0834d92b +0x03f:  mov    %eax,(%esp)
0834d92e +0x042:  call   08643872 <_ZNK13TOD_UserState13getEnterCountEv>  ; TOD_UserState::getEnterCount() const
0834d933 +0x047:  cmp    $0x1,%eax
0834d936 +0x04a:  setg   %al
0834d939 +0x04d:  test   %al,%al
0834d93b +0x04f:  je     0834dc5c <+0x370>
0834d941 +0x055:  mov    0x8(%ebp),%eax
0834d944 +0x058:  movzbl 0x7fc(%eax),%eax
0834d94b +0x05f:  test   %al,%al
0834d94d +0x061:  je     0834dc5c <+0x370>
0834d953 +0x067:  mov    0x8(%ebp),%eax
0834d956 +0x06a:  mov    0x7f4(%eax),%ebx
0834d95c +0x070:  mov    0xc(%ebp),%eax
0834d95f +0x073:  mov    %eax,(%esp)
0834d962 +0x076:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0834d967 +0x07b:  mov    %ebx,0x4(%esp)
0834d96b +0x07f:  mov    %eax,(%esp)
0834d96e +0x082:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0834d973 +0x087:  mov    %eax,-0x10(%ebp)
0834d976 +0x08a:  cmpl   $0xffffffff,-0x10(%ebp)
0834d97a +0x08e:  jne    0834d986 <+0x9a>
0834d97c +0x090:  mov    $0x0,%eax
0834d981 +0x095:  jmp    0834dcd0 <+0x3e4>
0834d986 +0x09a:  mov    0xc(%ebp),%eax
0834d989 +0x09d:  mov    %eax,(%esp)
0834d98c +0x0a0:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0834d991 +0x0a5:  lea    -0x89(%ebp),%edx
0834d997 +0x0ab:  mov    -0x10(%ebp),%ecx
0834d99a +0x0ae:  mov    %ecx,0xc(%esp)
0834d99e +0x0b2:  movl   $0x1,0x8(%esp)
0834d9a6 +0x0ba:  mov    %eax,0x4(%esp)
0834d9aa +0x0be:  mov    %edx,(%esp)
0834d9ad +0x0c1:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0834d9b2 +0x0c6:  sub    $0x4,%esp
0834d9b5 +0x0c9:  mov    -0x82(%ebp),%edx
0834d9bb +0x0cf:  mov    0x8(%ebp),%eax
0834d9be +0x0d2:  mov    0x7f8(%eax),%eax
0834d9c4 +0x0d8:  cmp    %eax,%edx
0834d9c6 +0x0da:  jge    0834d9d2 <+0xe6>
0834d9c8 +0x0dc:  mov    $0x0,%eax
0834d9cd +0x0e1:  jmp    0834dcd0 <+0x3e4>
0834d9d2 +0x0e6:  mov    0x8(%ebp),%eax
0834d9d5 +0x0e9:  mov    0x7f8(%eax),%ebx
0834d9db +0x0ef:  mov    0xc(%ebp),%eax
0834d9de +0x0f2:  mov    %eax,(%esp)
0834d9e1 +0x0f5:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0834d9e6 +0x0fa:  movl   $0x1,0x14(%esp)
0834d9ee +0x102:  movl   $0xe,0x10(%esp)
0834d9f6 +0x10a:  mov    %ebx,0xc(%esp)
0834d9fa +0x10e:  mov    -0x10(%ebp),%edx
0834d9fd +0x111:  mov    %edx,0x8(%esp)
0834da01 +0x115:  movl   $0x1,0x4(%esp)
0834da09 +0x11d:  mov    %eax,(%esp)
0834da0c +0x120:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0834da11 +0x125:  xor    $0x1,%eax
0834da14 +0x128:  test   %al,%al
0834da16 +0x12a:  je     0834da7d <+0x191>
0834da18 +0x12c:  mov    0x8(%ebp),%eax
0834da1b +0x12f:  mov    0x7f8(%eax),%esi
0834da21 +0x135:  mov    0xc(%ebp),%eax
0834da24 +0x138:  mov    %eax,(%esp)
0834da27 +0x13b:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0834da2c +0x140:  mov    %eax,%ebx
0834da2e +0x142:  movl   $0x5,0xc(%esp)
0834da36 +0x14a:  movl   $0x96f,0x8(%esp)
0834da3e +0x152:  movl   $&_ZZNK23CDungeon_TowerOfDespair23_do_after_dungeon_startEP5CUserE19__PRETTY_FUNCTION__,0x4(%esp)
0834da46 +0x15a:  lea    -0x28(%ebp),%eax
0834da49 +0x15d:  mov    %eax,(%esp)
0834da4c +0x160:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0834da51 +0x165:  mov    %esi,0x10(%esp)
0834da55 +0x169:  mov    -0x10(%ebp),%eax
0834da58 +0x16c:  mov    %eax,0xc(%esp)
0834da5c +0x170:  mov    %ebx,0x8(%esp)
0834da60 +0x174:  movl   $"CDungeon_TowerOfDespair::_do_after_dungeon_start, delete_item failed , User ch =%d , %d %d",0x4(%esp)
0834da68 +0x17c:  lea    -0x28(%ebp),%eax
0834da6b +0x17f:  mov    %eax,(%esp)
0834da6e +0x182:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0834da73 +0x187:  mov    $0x0,%eax
0834da78 +0x18c:  jmp    0834dcd0 <+0x3e4>
0834da7d +0x191:  lea    -0x4c(%ebp),%eax
0834da80 +0x194:  mov    %eax,(%esp)
0834da83 +0x197:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0834da88 +0x19c:  movl   $0xe,0x8(%esp)
0834da90 +0x1a4:  movl   $0x0,0x4(%esp)
0834da98 +0x1ac:  lea    -0x4c(%ebp),%eax
0834da9b +0x1af:  mov    %eax,(%esp)
0834da9e +0x1b2:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0834daa3 +0x1b7:  movl   $0x0,0x4(%esp)
0834daab +0x1bf:  lea    -0x4c(%ebp),%eax
0834daae +0x1c2:  mov    %eax,(%esp)
0834dab1 +0x1c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0834dab6 +0x1ca:  movl   $0x1,0x4(%esp)
0834dabe +0x1d2:  lea    -0x4c(%ebp),%eax
0834dac1 +0x1d5:  mov    %eax,(%esp)
0834dac4 +0x1d8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0834dac9 +0x1dd:  mov    -0x10(%ebp),%eax
0834dacc +0x1e0:  mov    %eax,0x4(%esp)
0834dad0 +0x1e4:  lea    -0x4c(%ebp),%eax
0834dad3 +0x1e7:  mov    %eax,(%esp)
0834dad6 +0x1ea:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0834dadb +0x1ef:  mov    -0x82(%ebp),%edx
0834dae1 +0x1f5:  mov    0x8(%ebp),%eax
0834dae4 +0x1f8:  mov    0x7f8(%eax),%eax
0834daea +0x1fe:  mov    %edx,%ecx
0834daec +0x200:  sub    %eax,%ecx
0834daee +0x202:  mov    %ecx,%eax
0834daf0 +0x204:  mov    %eax,-0xc(%ebp)
0834daf3 +0x207:  cmpl   $0x0,-0xc(%ebp)
0834daf7 +0x20b:  jne    0834db0e <+0x222>
0834daf9 +0x20d:  movl   $0xffffffff,0x4(%esp)
0834db01 +0x215:  lea    -0x4c(%ebp),%eax
0834db04 +0x218:  mov    %eax,(%esp)
0834db07 +0x21b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0834db0c +0x220:  jmp    0834db23 <+0x237>
0834db0e +0x222:  mov    -0x87(%ebp),%eax
0834db14 +0x228:  mov    %eax,0x4(%esp)
0834db18 +0x22c:  lea    -0x4c(%ebp),%eax
0834db1b +0x22f:  mov    %eax,(%esp)
0834db1e +0x232:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0834db23 +0x237:  mov    -0xc(%ebp),%eax
0834db26 +0x23a:  mov    %eax,0x4(%esp)
0834db2a +0x23e:  lea    -0x4c(%ebp),%eax
0834db2d +0x241:  mov    %eax,(%esp)
0834db30 +0x244:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0834db35 +0x249:  lea    -0x89(%ebp),%eax
0834db3b +0x24f:  mov    %eax,(%esp)
0834db3e +0x252:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0834db43 +0x257:  movzbl %al,%eax
0834db46 +0x25a:  mov    %eax,0x4(%esp)
0834db4a +0x25e:  lea    -0x4c(%ebp),%eax
0834db4d +0x261:  mov    %eax,(%esp)
0834db50 +0x264:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0834db55 +0x269:  movzwl -0x7e(%ebp),%eax
0834db59 +0x26d:  movzwl %ax,%eax
0834db5c +0x270:  mov    %eax,0x4(%esp)
0834db60 +0x274:  lea    -0x4c(%ebp),%eax
0834db63 +0x277:  mov    %eax,(%esp)
0834db66 +0x27a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0834db6b +0x27f:  movzbl -0x89(%ebp),%eax
0834db72 +0x286:  movzbl %al,%eax
0834db75 +0x289:  mov    %eax,0x4(%esp)
0834db79 +0x28d:  lea    -0x4c(%ebp),%eax
0834db7c +0x290:  mov    %eax,(%esp)
0834db7f +0x293:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0834db84 +0x298:  mov    -0x7c(%ebp),%eax
0834db87 +0x29b:  mov    %eax,0x4(%esp)
0834db8b +0x29f:  lea    -0x4c(%ebp),%eax
0834db8e +0x2a2:  mov    %eax,(%esp)
0834db91 +0x2a5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0834db96 +0x2aa:  lea    -0x89(%ebp),%eax
0834db9c +0x2b0:  add    $0x11,%eax
0834db9f +0x2b3:  mov    %eax,(%esp)
0834dba2 +0x2b6:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0834dba7 +0x2bb:  movzbl %al,%eax
0834dbaa +0x2be:  mov    %eax,0x4(%esp)
0834dbae +0x2c2:  lea    -0x4c(%ebp),%eax
0834dbb1 +0x2c5:  mov    %eax,(%esp)
0834dbb4 +0x2c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0834dbb9 +0x2cd:  lea    -0x89(%ebp),%eax
0834dbbf +0x2d3:  add    $0x11,%eax
0834dbc2 +0x2d6:  mov    %eax,(%esp)
0834dbc5 +0x2d9:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0834dbca +0x2de:  movzwl %ax,%eax
0834dbcd +0x2e1:  mov    %eax,0x4(%esp)
0834dbd1 +0x2e5:  lea    -0x4c(%ebp),%eax
0834dbd4 +0x2e8:  mov    %eax,(%esp)
0834dbd7 +0x2eb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0834dbdc +0x2f0:  movl   $0x0,0x4(%esp)
0834dbe4 +0x2f8:  lea    -0x4c(%ebp),%eax
0834dbe7 +0x2fb:  mov    %eax,(%esp)
0834dbea +0x2fe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0834dbef +0x303:  lea    -0x89(%ebp),%eax
0834dbf5 +0x309:  mov    %eax,0x4(%esp)
0834dbf9 +0x30d:  lea    -0x4c(%ebp),%eax
0834dbfc +0x310:  mov    %eax,(%esp)
0834dbff +0x313:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0834dc04 +0x318:  movl   $0x1,0x4(%esp)
0834dc0c +0x320:  lea    -0x4c(%ebp),%eax
0834dc0f +0x323:  mov    %eax,(%esp)
0834dc12 +0x326:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0834dc17 +0x32b:  lea    -0x4c(%ebp),%eax
0834dc1a +0x32e:  mov    %eax,0x4(%esp)
0834dc1e +0x332:  mov    0xc(%ebp),%eax
0834dc21 +0x335:  mov    %eax,(%esp)
0834dc24 +0x338:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0834dc29 +0x33d:  mov    0xc(%ebp),%eax
0834dc2c +0x340:  mov    %eax,(%esp)
0834dc2f +0x343:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
0834dc34 +0x348:  jmp    0834dc51 <+0x365>
0834dc36 +0x34a:  mov    %edx,%ebx
0834dc38 +0x34c:  mov    %eax,%esi
0834dc3a +0x34e:  lea    -0x4c(%ebp),%eax
0834dc3d +0x351:  mov    %eax,(%esp)
0834dc40 +0x354:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0834dc45 +0x359:  mov    %esi,%eax
0834dc47 +0x35b:  mov    %ebx,%edx
0834dc49 +0x35d:  mov    %eax,(%esp)
0834dc4c +0x360:  call   08ae3750 <_Unwind_Resume>
0834dc51 +0x365:  lea    -0x4c(%ebp),%eax
0834dc54 +0x368:  mov    %eax,(%esp)
0834dc57 +0x36b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0834dc5c +0x370:  lea    -0x3f(%ebp),%eax
0834dc5f +0x373:  mov    %eax,(%esp)
0834dc62 +0x376:  call   08374cba <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xec86>  ; global constructors keyed to CServerEvent::m_nExpRate+0xec86
0834dc67 +0x37b:  lea    -0x16(%ebp),%eax
0834dc6a +0x37e:  mov    -0x14(%ebp),%edx
0834dc6d +0x381:  mov    %edx,0x4(%esp)
0834dc71 +0x385:  mov    %eax,(%esp)
0834dc74 +0x388:  call   0864383e <_ZNK13TOD_UserState18getTodayEnterLayerEv>  ; TOD_UserState::getTodayEnterLayer() const
0834dc79 +0x38d:  sub    $0x4,%esp
0834dc7c +0x390:  lea    -0x16(%ebp),%eax
0834dc7f +0x393:  mov    %eax,(%esp)
0834dc82 +0x396:  call   0822ec40 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x42ea>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x42ea
0834dc87 +0x39b:  movzwl %ax,%eax
0834dc8a +0x39e:  mov    %eax,-0x31(%ebp)
0834dc8d +0x3a1:  movb   $0x1,-0x2d(%ebp)
0834dc91 +0x3a5:  mov    0xc(%ebp),%eax
0834dc94 +0x3a8:  mov    %eax,(%esp)
0834dc97 +0x3ab:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0834dc9c +0x3b0:  mov    %eax,-0x2c(%ebp)
0834dc9f +0x3b3:  lea    -0x3f(%ebp),%ebx
0834dca2 +0x3b6:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0834dca7 +0x3bb:  movl   $0x0,0x4(%esp)
0834dcaf +0x3c3:  mov    %eax,(%esp)
0834dcb2 +0x3c6:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
0834dcb7 +0x3cb:  movl   $0x17,0x8(%esp)
0834dcbf +0x3d3:  mov    %ebx,0x4(%esp)
0834dcc3 +0x3d7:  mov    %eax,(%esp)
0834dcc6 +0x3da:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
0834dccb +0x3df:  mov    $0x1,%eax
0834dcd0 +0x3e4:  lea    -0x8(%ebp),%esp
0834dcd3 +0x3e7:  add    $0x0,%esp
0834dcd6 +0x3ea:  pop    %ebx
0834dcd7 +0x3eb:  pop    %esi
0834dcd8 +0x3ec:  pop    %ebp
0834dcd9 +0x3ed:  ret
```

## 反编译 C

```c
// CDungeon_TowerOfDespair::_do_after_dungeon_start @ 0x834d8ec

/* CDungeon_TowerOfDespair::_do_after_dungeon_start(CUser*) const */

undefined4 __thiscall
CDungeon_TowerOfDespair::_do_after_dungeon_start(CDungeon_TowerOfDespair *this,CUser *param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  CStatisticServerProxy *this_00;
  Inven_Item local_8d [2];
  int local_8b;
  int local_86;
  ushort local_82;
  int local_80;
  stAmplifyOption_t asStack_7c [44];
  PacketGuard local_50 [13];
  Packet_TowerOfDespair_Statistic_GTS local_43 [14];
  uint local_35;
  undefined1 local_31;
  undefined4 local_30;
  cMyTrace local_2c [18];
  TOD_Layer local_1a [2];
  TOD_UserState *local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    return 0;
  }
  local_18 = (TOD_UserState *)CUser::GetCharacExpandData(param_1,0xd);
  TOD_UserState::IncreaseEnterCount(local_18);
  iVar3 = TOD_UserState::getEnterCount(local_18);
  if ((1 < iVar3) && (this[0x7fc] != (CDungeon_TowerOfDespair)0x0)) {
    iVar3 = *(int *)(this + 0x7f4);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    local_14 = CInventory::check_item_exist(pCVar4,iVar3);
    if (local_14 == -1) {
      return 0;
    }
    iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_8d,iVar3);
    if (local_86 < *(int *)(this + 0x7f8)) {
      return 0;
    }
    uVar1 = *(undefined4 *)(this + 0x7f8);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar4,1,local_14,uVar1,0xe,1);
    if (cVar2 != '\x01') {
      uVar1 = *(undefined4 *)(this + 0x7f8);
      uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      cMyTrace::cMyTrace(local_2c,
                         "virtual bool CDungeon_TowerOfDespair::_do_after_dungeon_start(CUser*) const"
                         ,0x96f,5);
      cMyTrace::operator()
                (local_2c,
                 "CDungeon_TowerOfDespair::_do_after_dungeon_start, delete_item failed , User ch =%d , %d %d"
                 ,uVar5,local_14,uVar1);
      return 0;
    }
    PacketGuard::PacketGuard(local_50);
                    /* try { // try from 0834da9e to 0834dc33 has its CatchHandler @ 0834dc36 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,local_14);
    local_10 = local_86 - *(int *)(this + 0x7f8);
    if (local_10 == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,-1);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_8b);
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_10);
    uVar6 = Inven_Item::GetItemAttr(local_8d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar6 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,(uint)local_82);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,(uint)(byte)local_8d[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,local_80);
    uVar6 = stAmplifyOption_t::getAbilityType(asStack_7c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,uVar6 & 0xff);
    uVar6 = stAmplifyOption_t::getAbilityValue(asStack_7c);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_50,uVar6 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_50,local_8d);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
    CUser::Send(param_1,local_50);
    CUser::SaveInventory(param_1);
    PacketGuard::~PacketGuard(local_50);
  }
  Packet_TowerOfDespair_Statistic_GTS::Packet_TowerOfDespair_Statistic_GTS(local_43);
  TOD_UserState::getTodayEnterLayer();
  local_35 = TOD_Layer::GetLayer(local_1a);
  local_35 = local_35 & 0xffff;
  local_31 = 1;
  local_30 = CUser::get_acc_id(param_1);
  this_00 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,0);
  CStatisticServerProxy::SendPacket(this_00,(char *)local_43,0x17);
  return 1;
}
```
