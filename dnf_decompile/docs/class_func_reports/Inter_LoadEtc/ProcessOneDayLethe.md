# ProcessOneDayLethe

`_ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi`

`Inter_LoadEtc::ProcessOneDayLethe(SIG_LOAD_ETC*, CUser*, int&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084d94c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d94c4  _ZN13Inter_LoadEtc18ProcessOneDayLetheEP12SIG_LOAD_ETCP5CUserRi
#           Inter_LoadEtc::ProcessOneDayLethe(SIG_LOAD_ETC*, CUser*, int&)
# range [0x084d94c4, 0x084d98a3]
084d94c4 +0x000:  push   %ebp
084d94c5 +0x001:  mov    %esp,%ebp
084d94c7 +0x003:  push   %esi
084d94c8 +0x004:  push   %ebx
084d94c9 +0x005:  sub    $0x30,%esp
084d94cc +0x008:  mov    0xc(%ebp),%eax
084d94cf +0x00b:  movzbl 0x2b95(%eax),%eax
084d94d6 +0x012:  movzbl %al,%edx
084d94d9 +0x015:  mov    0x10(%ebp),%eax
084d94dc +0x018:  mov    %edx,0x4(%esp)
084d94e0 +0x01c:  mov    %eax,(%esp)
084d94e3 +0x01f:  call   084ec32a <_GLOBAL__I__Z7getUserj+0x32dc>  ; global constructors keyed to getUser(unsigned int)+0x32dc
084d94e8 +0x024:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d94ed +0x029:  mov    %eax,(%esp)
084d94f0 +0x02c:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
084d94f5 +0x031:  mov    %eax,-0x10(%ebp)
084d94f8 +0x034:  cmpl   $0x0,-0x10(%ebp)
084d94fc +0x038:  jne    084d9508 <+0x44>
084d94fe +0x03a:  mov    $0x0,%eax
084d9503 +0x03f:  jmp    084d989d <+0x3d9>
084d9508 +0x044:  movl   $0x21,0x4(%esp)
084d9510 +0x04c:  mov    0x10(%ebp),%eax
084d9513 +0x04f:  mov    %eax,(%esp)
084d9516 +0x052:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d951b +0x057:  xor    $0x1,%eax
084d951e +0x05a:  test   %al,%al
084d9520 +0x05c:  je     084d9553 <+0x8f>
084d9522 +0x05e:  mov    0xc(%ebp),%eax
084d9525 +0x061:  movzbl 0x2b95(%eax),%edx
084d952c +0x068:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d9533 +0x06f:  cmp    %al,%dl
084d9535 +0x071:  je     084d954c <+0x88>
084d9537 +0x073:  mov    0xc(%ebp),%eax
084d953a +0x076:  movzbl 0x2b95(%eax),%edx
084d9541 +0x07d:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d9548 +0x084:  cmp    %al,%dl
084d954a +0x086:  jne    084d9553 <+0x8f>
084d954c +0x088:  mov    $0x1,%eax
084d9551 +0x08d:  jmp    084d9558 <+0x94>
084d9553 +0x08f:  mov    $0x0,%eax
084d9558 +0x094:  test   %al,%al
084d955a +0x096:  je     084d971d <+0x259>
084d9560 +0x09c:  mov    0xc(%ebp),%eax
084d9563 +0x09f:  add    $0x29fd,%eax
084d9568 +0x0a4:  movl   $0x0,0xc(%esp)
084d9570 +0x0ac:  mov    %eax,0x8(%esp)
084d9574 +0x0b0:  mov    0x10(%ebp),%eax
084d9577 +0x0b3:  mov    %eax,0x4(%esp)
084d957b +0x0b7:  mov    -0x10(%ebp),%eax
084d957e +0x0ba:  mov    %eax,(%esp)
084d9581 +0x0bd:  call   085c3e2a <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND)
084d9586 +0x0c2:  xor    $0x1,%eax
084d9589 +0x0c5:  test   %al,%al
084d958b +0x0c7:  je     084d9597 <+0xd3>
084d958d +0x0c9:  mov    $0x40c6,%eax
084d9592 +0x0ce:  jmp    084d989d <+0x3d9>
084d9597 +0x0d3:  mov    0xc(%ebp),%eax
084d959a +0x0d6:  movzbl 0x2b95(%eax),%edx
084d95a1 +0x0dd:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d95a8 +0x0e4:  cmp    %al,%dl
084d95aa +0x0e6:  je     084d95c8 <+0x104>
084d95ac +0x0e8:  mov    0x14(%ebp),%eax
084d95af +0x0eb:  movl   $0x1,(%eax)
084d95b5 +0x0f1:  mov    0x10(%ebp),%eax
084d95b8 +0x0f4:  movl   $0x0,0x4(%esp)
084d95c0 +0x0fc:  mov    %eax,(%esp)
084d95c3 +0x0ff:  call   084ec352 <_GLOBAL__I__Z7getUserj+0x3304>  ; global constructors keyed to getUser(unsigned int)+0x3304
084d95c8 +0x104:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084d95cd +0x109:  movl   $0x40d2,0x8(%esp)
084d95d5 +0x111:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d95dd +0x119:  mov    %eax,(%esp)
084d95e0 +0x11c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084d95e5 +0x121:  movl   $0x1,0x8(%esp)
084d95ed +0x129:  mov    %eax,0x4(%esp)
084d95f1 +0x12d:  lea    -0x18(%ebp),%eax
084d95f4 +0x130:  mov    %eax,(%esp)
084d95f7 +0x133:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084d95fc +0x138:  lea    -0x18(%ebp),%eax
084d95ff +0x13b:  mov    %eax,(%esp)
084d9602 +0x13e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084d9607 +0x143:  movl   $0x15c,0x4(%esp)
084d960f +0x14b:  mov    %eax,(%esp)
084d9612 +0x14e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084d9617 +0x153:  mov    0x10(%ebp),%eax
084d961a +0x156:  mov    %eax,(%esp)
084d961d +0x159:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084d9622 +0x15e:  mov    %eax,%ebx
084d9624 +0x160:  lea    -0x18(%ebp),%eax
084d9627 +0x163:  mov    %eax,(%esp)
084d962a +0x166:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084d962f +0x16b:  mov    %ebx,0x4(%esp)
084d9633 +0x16f:  mov    %eax,(%esp)
084d9636 +0x172:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084d963b +0x177:  lea    -0x18(%ebp),%eax
084d963e +0x17a:  mov    %eax,(%esp)
084d9641 +0x17d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084d9646 +0x182:  mov    %eax,(%esp)
084d9649 +0x185:  call   084f165c <_GLOBAL__I__Z7getUserj+0x860e>  ; global constructors keyed to getUser(unsigned int)+0x860e
084d964e +0x18a:  mov    %eax,-0xc(%ebp)
084d9651 +0x18d:  mov    0x10(%ebp),%eax
084d9654 +0x190:  mov    %eax,(%esp)
084d9657 +0x193:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d965c +0x198:  mov    -0xc(%ebp),%edx
084d965f +0x19b:  mov    %eax,(%edx)
084d9661 +0x19d:  mov    0x10(%ebp),%eax
084d9664 +0x1a0:  mov    %eax,(%esp)
084d9667 +0x1a3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d966c +0x1a8:  mov    -0xc(%ebp),%edx
084d966f +0x1ab:  mov    %eax,0x4(%edx)
084d9672 +0x1ae:  mov    -0xc(%ebp),%eax
084d9675 +0x1b1:  add    $0xd,%eax
084d9678 +0x1b4:  movl   $0x198,0x8(%esp)
084d9680 +0x1bc:  movl   $0x0,0x4(%esp)
084d9688 +0x1c4:  mov    %eax,(%esp)
084d968b +0x1c7:  call   0807dcc0 <_init+0x5b8>
084d9690 +0x1cc:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
084d9697 +0x1d3:  mov    -0xc(%ebp),%eax
084d969a +0x1d6:  mov    %dl,0x1a5(%eax)
084d96a0 +0x1dc:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
084d96a7 +0x1e3:  mov    -0xc(%ebp),%eax
084d96aa +0x1e6:  mov    %dl,0xc(%eax)
084d96ad +0x1e9:  mov    -0xc(%ebp),%eax
084d96b0 +0x1ec:  movb   $0x0,0x1a6(%eax)
084d96b7 +0x1f3:  mov    -0xc(%ebp),%eax
084d96ba +0x1f6:  add    $0xd,%eax
084d96bd +0x1f9:  movl   $0x0,0x8(%esp)
084d96c5 +0x201:  mov    %eax,0x4(%esp)
084d96c9 +0x205:  mov    0x10(%ebp),%eax
084d96cc +0x208:  mov    %eax,(%esp)
084d96cf +0x20b:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d96d4 +0x210:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084d96d9 +0x215:  lea    -0x18(%ebp),%edx
084d96dc +0x218:  mov    %edx,0x8(%esp)
084d96e0 +0x21c:  movl   $0x2,0x4(%esp)
084d96e8 +0x224:  mov    %eax,(%esp)
084d96eb +0x227:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084d96f0 +0x22c:  jmp    084d970d <+0x249>
084d96f2 +0x22e:  mov    %edx,%ebx
084d96f4 +0x230:  mov    %eax,%esi
084d96f6 +0x232:  lea    -0x18(%ebp),%eax
084d96f9 +0x235:  mov    %eax,(%esp)
084d96fc +0x238:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d9701 +0x23d:  mov    %esi,%eax
084d9703 +0x23f:  mov    %ebx,%edx
084d9705 +0x241:  mov    %eax,(%esp)
084d9708 +0x244:  call   08ae3750 <_Unwind_Resume>
084d970d +0x249:  lea    -0x18(%ebp),%eax
084d9710 +0x24c:  mov    %eax,(%esp)
084d9713 +0x24f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d9718 +0x254:  jmp    084d9898 <+0x3d4>
084d971d +0x259:  movl   $0x21,0x4(%esp)
084d9725 +0x261:  mov    0x10(%ebp),%eax
084d9728 +0x264:  mov    %eax,(%esp)
084d972b +0x267:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d9730 +0x26c:  test   %al,%al
084d9732 +0x26e:  je     084d9750 <+0x28c>
084d9734 +0x270:  mov    0xc(%ebp),%eax
084d9737 +0x273:  movzbl 0x29fc(%eax),%edx
084d973e +0x27a:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d9745 +0x281:  cmp    %al,%dl
084d9747 +0x283:  jne    084d9750 <+0x28c>
084d9749 +0x285:  mov    $0x1,%eax
084d974e +0x28a:  jmp    084d9755 <+0x291>
084d9750 +0x28c:  mov    $0x0,%eax
084d9755 +0x291:  test   %al,%al
084d9757 +0x293:  je     084d97df <+0x31b>
084d975d +0x299:  movl   $0x0,0x8(%esp)
084d9765 +0x2a1:  mov    0x10(%ebp),%eax
084d9768 +0x2a4:  mov    %eax,0x4(%esp)
084d976c +0x2a8:  mov    -0x10(%ebp),%eax
084d976f +0x2ab:  mov    %eax,(%esp)
084d9772 +0x2ae:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
084d9777 +0x2b3:  mov    0x10(%ebp),%eax
084d977a +0x2b6:  lea    0x79700(%eax),%edx
084d9780 +0x2bc:  movl   $0x0,0x8(%esp)
084d9788 +0x2c4:  mov    0x10(%ebp),%eax
084d978b +0x2c7:  mov    %eax,0x4(%esp)
084d978f +0x2cb:  mov    %edx,(%esp)
084d9792 +0x2ce:  call   08686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>  ; cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)
084d9797 +0x2d3:  mov    0x10(%ebp),%eax
084d979a +0x2d6:  mov    %eax,(%esp)
084d979d +0x2d9:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084d97a2 +0x2de:  mov    %eax,%ebx
084d97a4 +0x2e0:  mov    0x10(%ebp),%eax
084d97a7 +0x2e3:  mov    %eax,(%esp)
084d97aa +0x2e6:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
084d97af +0x2eb:  lea    0x46(%eax),%edx
084d97b2 +0x2ee:  mov    0x10(%ebp),%eax
084d97b5 +0x2f1:  add    $0x79700,%eax
084d97ba +0x2f6:  movl   $0x1,0x10(%esp)
084d97c2 +0x2fe:  movl   $0x0,0xc(%esp)
084d97ca +0x306:  mov    %ebx,0x8(%esp)
084d97ce +0x30a:  mov    %edx,0x4(%esp)
084d97d2 +0x30e:  mov    %eax,(%esp)
084d97d5 +0x311:  call   08685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>  ; cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
084d97da +0x316:  jmp    084d9898 <+0x3d4>
084d97df +0x31b:  movl   $0x21,0x4(%esp)
084d97e7 +0x323:  mov    0x10(%ebp),%eax
084d97ea +0x326:  mov    %eax,(%esp)
084d97ed +0x329:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d97f2 +0x32e:  test   %al,%al
084d97f4 +0x330:  je     084d9812 <+0x34e>
084d97f6 +0x332:  mov    0xc(%ebp),%eax
084d97f9 +0x335:  movzbl 0x29fc(%eax),%edx
084d9800 +0x33c:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d9807 +0x343:  cmp    %al,%dl
084d9809 +0x345:  jne    084d9812 <+0x34e>
084d980b +0x347:  mov    $0x1,%eax
084d9810 +0x34c:  jmp    084d9817 <+0x353>
084d9812 +0x34e:  mov    $0x0,%eax
084d9817 +0x353:  test   %al,%al
084d9819 +0x355:  je     084d9898 <+0x3d4>
084d981b +0x357:  movl   $0x0,0x8(%esp)
084d9823 +0x35f:  mov    0x10(%ebp),%eax
084d9826 +0x362:  mov    %eax,0x4(%esp)
084d982a +0x366:  mov    -0x10(%ebp),%eax
084d982d +0x369:  mov    %eax,(%esp)
084d9830 +0x36c:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
084d9835 +0x371:  mov    0x10(%ebp),%eax
084d9838 +0x374:  lea    0x79700(%eax),%edx
084d983e +0x37a:  movl   $0x0,0x8(%esp)
084d9846 +0x382:  mov    0x10(%ebp),%eax
084d9849 +0x385:  mov    %eax,0x4(%esp)
084d984d +0x389:  mov    %edx,(%esp)
084d9850 +0x38c:  call   08686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>  ; cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)
084d9855 +0x391:  mov    0x10(%ebp),%eax
084d9858 +0x394:  mov    %eax,(%esp)
084d985b +0x397:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084d9860 +0x39c:  mov    %eax,%ebx
084d9862 +0x39e:  mov    0x10(%ebp),%eax
084d9865 +0x3a1:  mov    %eax,(%esp)
084d9868 +0x3a4:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
084d986d +0x3a9:  lea    0x46(%eax),%edx
084d9870 +0x3ac:  mov    0x10(%ebp),%eax
084d9873 +0x3af:  add    $0x79700,%eax
084d9878 +0x3b4:  movl   $0x1,0x10(%esp)
084d9880 +0x3bc:  movl   $0x0,0xc(%esp)
084d9888 +0x3c4:  mov    %ebx,0x8(%esp)
084d988c +0x3c8:  mov    %edx,0x4(%esp)
084d9890 +0x3cc:  mov    %eax,(%esp)
084d9893 +0x3cf:  call   08685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>  ; cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
084d9898 +0x3d4:  mov    $0x0,%eax
084d989d +0x3d9:  add    $0x30,%esp
084d98a0 +0x3dc:  pop    %ebx
084d98a1 +0x3dd:  pop    %esi
084d98a2 +0x3de:  pop    %ebp
084d98a3 +0x3df:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::ProcessOneDayLethe @ 0x84d94c4

/* Inter_LoadEtc::ProcessOneDayLethe(SIG_LOAD_ETC*, CUser*, int&) */

undefined4 __thiscall
Inter_LoadEtc::ProcessOneDayLethe
          (Inter_LoadEtc *this,SIG_LOAD_ETC *param_1,CUser *param_2,int *param_3)

{
  bool bVar1;
  char cVar2;
  CGameManager *this_00;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_1c [8];
  CPremiumLetheManager *local_14;
  SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *local_10;
  
  CUserCharacInfo::SetOneDayLetheFlag((CUserCharacInfo *)param_2,(uchar)param_1[0x2b95]);
  this_00 = (CGameManager *)G_CGameManager();
  local_14 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this_00);
  if (local_14 != (CPremiumLetheManager *)0x0) {
    cVar2 = CUser::isAffectedPremium(param_2,0x21);
    if ((cVar2 == '\x01') ||
       ((param_1[0x2b95] != CPremiumLetheManager::USE_LETHE_STATE &&
        (param_1[0x2b95] != CPremiumLetheManager::SKILL_CONFIRM_STATE)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = CPremiumLetheManager::BackToPre(local_14,param_2,param_1 + 0x29fd,0);
      if (cVar2 != '\x01') {
        return 0x40c6;
      }
      if (param_1[0x2b95] != CPremiumLetheManager::SKILL_CONFIRM_STATE) {
        *param_3 = 1;
        CUserCharacInfo::SetIsInitSkillFlag((CUserCharacInfo *)param_2,false);
      }
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x40d2)
      ;
      CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084d9612 to 084d96ef has its CatchHandler @ 084d96f2 */
      CStreamGuard::operator<<(pCVar4,0x15c);
      iVar5 = CUser::GetUID(param_2);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
      CStreamGuard::operator<<(pCVar4,iVar5);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_1c);
      local_10 = CStreamGuard::GetInBuffer<SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD>(pCVar4);
      uVar6 = CUser::get_acc_id(param_2);
      *(undefined4 *)local_10 = uVar6;
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      *(undefined4 *)(local_10 + 4) = uVar6;
      memset(local_10 + 0xd,0,0x198);
      local_10[0x1a5] = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      local_10[0xc] = CPremiumLetheManager::NOT_USE_LETHE_STATE;
      local_10[0x1a6] = (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x0;
      CUser::SaveBackupSkillInfo(param_2,local_10 + 0xd,0);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
    }
    else {
      cVar2 = CUser::isAffectedPremium(param_2,0x21);
      if ((cVar2 == '\0') ||
         (*(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(param_1 + 0x29fc) !=
          CPremiumLetheManager::NOT_USE_LETHE_STATE)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CPremiumLetheManager::BackupSkill(local_14,param_2,0);
        cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x46,uVar6,0,1);
      }
      else {
        cVar2 = CUser::isAffectedPremium(param_2,0x21);
        if ((cVar2 == '\0') || (param_1[0x29fc] != CPremiumLetheManager::SKILL_CONFIRM_STATE)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CPremiumLetheManager::BackupSkill(local_14,param_2,0);
          cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
          iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
          cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x46,uVar6,0,1);
        }
      }
    }
  }
  return 0;
}
```
