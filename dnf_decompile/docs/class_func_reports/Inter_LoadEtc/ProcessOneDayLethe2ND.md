# ProcessOneDayLethe2ND

`_ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi`

`Inter_LoadEtc::ProcessOneDayLethe2ND(SIG_LOAD_ETC*, CUser*, int&)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084d98a4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d98a4  _ZN13Inter_LoadEtc21ProcessOneDayLethe2NDEP12SIG_LOAD_ETCP5CUserRi
#           Inter_LoadEtc::ProcessOneDayLethe2ND(SIG_LOAD_ETC*, CUser*, int&)
# range [0x084d98a4, 0x084d9c8d]
084d98a4 +0x000:  push   %ebp
084d98a5 +0x001:  mov    %esp,%ebp
084d98a7 +0x003:  push   %esi
084d98a8 +0x004:  push   %ebx
084d98a9 +0x005:  sub    $0x30,%esp
084d98ac +0x008:  mov    0xc(%ebp),%eax
084d98af +0x00b:  movzbl 0x2d2f(%eax),%eax
084d98b6 +0x012:  movzbl %al,%edx
084d98b9 +0x015:  mov    0x10(%ebp),%eax
084d98bc +0x018:  mov    %edx,0x4(%esp)
084d98c0 +0x01c:  mov    %eax,(%esp)
084d98c3 +0x01f:  call   084ec37a <_GLOBAL__I__Z7getUserj+0x332c>  ; global constructors keyed to getUser(unsigned int)+0x332c
084d98c8 +0x024:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d98cd +0x029:  mov    %eax,(%esp)
084d98d0 +0x02c:  call   08298e88 <_ZN12CGameManager22GetPremiumLetheManagerEv>  ; CGameManager::GetPremiumLetheManager()
084d98d5 +0x031:  mov    %eax,-0x10(%ebp)
084d98d8 +0x034:  cmpl   $0x0,-0x10(%ebp)
084d98dc +0x038:  jne    084d98e8 <+0x44>
084d98de +0x03a:  mov    $0x0,%eax
084d98e3 +0x03f:  jmp    084d9c87 <+0x3e3>
084d98e8 +0x044:  movl   $0x21,0x4(%esp)
084d98f0 +0x04c:  mov    0x10(%ebp),%eax
084d98f3 +0x04f:  mov    %eax,(%esp)
084d98f6 +0x052:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d98fb +0x057:  xor    $0x1,%eax
084d98fe +0x05a:  test   %al,%al
084d9900 +0x05c:  je     084d9933 <+0x8f>
084d9902 +0x05e:  mov    0xc(%ebp),%eax
084d9905 +0x061:  movzbl 0x2d2f(%eax),%edx
084d990c +0x068:  movzbl &_ZN20CPremiumLetheManager15USE_LETHE_STATEE,%eax
084d9913 +0x06f:  cmp    %al,%dl
084d9915 +0x071:  je     084d992c <+0x88>
084d9917 +0x073:  mov    0xc(%ebp),%eax
084d991a +0x076:  movzbl 0x2d2f(%eax),%edx
084d9921 +0x07d:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d9928 +0x084:  cmp    %al,%dl
084d992a +0x086:  jne    084d9933 <+0x8f>
084d992c +0x088:  mov    $0x1,%eax
084d9931 +0x08d:  jmp    084d9938 <+0x94>
084d9933 +0x08f:  mov    $0x0,%eax
084d9938 +0x094:  test   %al,%al
084d993a +0x096:  je     084d9afd <+0x259>
084d9940 +0x09c:  mov    0xc(%ebp),%eax
084d9943 +0x09f:  add    $0x2b97,%eax
084d9948 +0x0a4:  movl   $0x1,0xc(%esp)
084d9950 +0x0ac:  mov    %eax,0x8(%esp)
084d9954 +0x0b0:  mov    0x10(%ebp),%eax
084d9957 +0x0b3:  mov    %eax,0x4(%esp)
084d995b +0x0b7:  mov    -0x10(%ebp),%eax
084d995e +0x0ba:  mov    %eax,(%esp)
084d9961 +0x0bd:  call   085c3e2a <_ZN20CPremiumLetheManager9BackToPreEP5CUserP15_Mastered_skill20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackToPre(CUser*, _Mastered_skill*, ENUM_SKILL_TREE_KIND)
084d9966 +0x0c2:  xor    $0x1,%eax
084d9969 +0x0c5:  test   %al,%al
084d996b +0x0c7:  je     084d9977 <+0xd3>
084d996d +0x0c9:  mov    $0x4111,%eax
084d9972 +0x0ce:  jmp    084d9c87 <+0x3e3>
084d9977 +0x0d3:  mov    0xc(%ebp),%eax
084d997a +0x0d6:  movzbl 0x2d2f(%eax),%edx
084d9981 +0x0dd:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d9988 +0x0e4:  cmp    %al,%dl
084d998a +0x0e6:  je     084d99a8 <+0x104>
084d998c +0x0e8:  mov    0x14(%ebp),%eax
084d998f +0x0eb:  movl   $0x1,(%eax)
084d9995 +0x0f1:  mov    0x10(%ebp),%eax
084d9998 +0x0f4:  movl   $0x0,0x4(%esp)
084d99a0 +0x0fc:  mov    %eax,(%esp)
084d99a3 +0x0ff:  call   084ec3a2 <_GLOBAL__I__Z7getUserj+0x3354>  ; global constructors keyed to getUser(unsigned int)+0x3354
084d99a8 +0x104:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084d99ad +0x109:  movl   $0x411d,0x8(%esp)
084d99b5 +0x111:  movl   $"InterDispatcher.cpp",0x4(%esp)
084d99bd +0x119:  mov    %eax,(%esp)
084d99c0 +0x11c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084d99c5 +0x121:  movl   $0x1,0x8(%esp)
084d99cd +0x129:  mov    %eax,0x4(%esp)
084d99d1 +0x12d:  lea    -0x18(%ebp),%eax
084d99d4 +0x130:  mov    %eax,(%esp)
084d99d7 +0x133:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084d99dc +0x138:  lea    -0x18(%ebp),%eax
084d99df +0x13b:  mov    %eax,(%esp)
084d99e2 +0x13e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084d99e7 +0x143:  movl   $0x15c,0x4(%esp)
084d99ef +0x14b:  mov    %eax,(%esp)
084d99f2 +0x14e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084d99f7 +0x153:  mov    0x10(%ebp),%eax
084d99fa +0x156:  mov    %eax,(%esp)
084d99fd +0x159:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084d9a02 +0x15e:  mov    %eax,%ebx
084d9a04 +0x160:  lea    -0x18(%ebp),%eax
084d9a07 +0x163:  mov    %eax,(%esp)
084d9a0a +0x166:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084d9a0f +0x16b:  mov    %ebx,0x4(%esp)
084d9a13 +0x16f:  mov    %eax,(%esp)
084d9a16 +0x172:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
084d9a1b +0x177:  lea    -0x18(%ebp),%eax
084d9a1e +0x17a:  mov    %eax,(%esp)
084d9a21 +0x17d:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
084d9a26 +0x182:  mov    %eax,(%esp)
084d9a29 +0x185:  call   084f165c <_GLOBAL__I__Z7getUserj+0x860e>  ; global constructors keyed to getUser(unsigned int)+0x860e
084d9a2e +0x18a:  mov    %eax,-0xc(%ebp)
084d9a31 +0x18d:  mov    0x10(%ebp),%eax
084d9a34 +0x190:  mov    %eax,(%esp)
084d9a37 +0x193:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d9a3c +0x198:  mov    -0xc(%ebp),%edx
084d9a3f +0x19b:  mov    %eax,(%edx)
084d9a41 +0x19d:  mov    0x10(%ebp),%eax
084d9a44 +0x1a0:  mov    %eax,(%esp)
084d9a47 +0x1a3:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d9a4c +0x1a8:  mov    -0xc(%ebp),%edx
084d9a4f +0x1ab:  mov    %eax,0x4(%edx)
084d9a52 +0x1ae:  mov    -0xc(%ebp),%eax
084d9a55 +0x1b1:  add    $0xd,%eax
084d9a58 +0x1b4:  movl   $0x198,0x8(%esp)
084d9a60 +0x1bc:  movl   $0x0,0x4(%esp)
084d9a68 +0x1c4:  mov    %eax,(%esp)
084d9a6b +0x1c7:  call   0807dcc0 <_init+0x5b8>
084d9a70 +0x1cc:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
084d9a77 +0x1d3:  mov    -0xc(%ebp),%eax
084d9a7a +0x1d6:  mov    %dl,0x1a5(%eax)
084d9a80 +0x1dc:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%edx
084d9a87 +0x1e3:  mov    -0xc(%ebp),%eax
084d9a8a +0x1e6:  mov    %dl,0xc(%eax)
084d9a8d +0x1e9:  mov    -0xc(%ebp),%eax
084d9a90 +0x1ec:  movb   $0x1,0x1a6(%eax)
084d9a97 +0x1f3:  mov    -0xc(%ebp),%eax
084d9a9a +0x1f6:  add    $0xd,%eax
084d9a9d +0x1f9:  movl   $0x1,0x8(%esp)
084d9aa5 +0x201:  mov    %eax,0x4(%esp)
084d9aa9 +0x205:  mov    0x10(%ebp),%eax
084d9aac +0x208:  mov    %eax,(%esp)
084d9aaf +0x20b:  call   0868148c <_ZN5CUser19SaveBackupSkillInfoEP22SIG_LOAD_PREMIUM_LETHE20ENUM_SKILL_TREE_KIND>  ; CUser::SaveBackupSkillInfo(SIG_LOAD_PREMIUM_LETHE*, ENUM_SKILL_TREE_KIND)
084d9ab4 +0x210:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
084d9ab9 +0x215:  lea    -0x18(%ebp),%edx
084d9abc +0x218:  mov    %edx,0x8(%esp)
084d9ac0 +0x21c:  movl   $0x2,0x4(%esp)
084d9ac8 +0x224:  mov    %eax,(%esp)
084d9acb +0x227:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
084d9ad0 +0x22c:  jmp    084d9aed <+0x249>
084d9ad2 +0x22e:  mov    %edx,%ebx
084d9ad4 +0x230:  mov    %eax,%esi
084d9ad6 +0x232:  lea    -0x18(%ebp),%eax
084d9ad9 +0x235:  mov    %eax,(%esp)
084d9adc +0x238:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d9ae1 +0x23d:  mov    %esi,%eax
084d9ae3 +0x23f:  mov    %ebx,%edx
084d9ae5 +0x241:  mov    %eax,(%esp)
084d9ae8 +0x244:  call   08ae3750 <_Unwind_Resume>
084d9aed +0x249:  lea    -0x18(%ebp),%eax
084d9af0 +0x24c:  mov    %eax,(%esp)
084d9af3 +0x24f:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
084d9af8 +0x254:  jmp    084d9c82 <+0x3de>
084d9afd +0x259:  movl   $0x21,0x4(%esp)
084d9b05 +0x261:  mov    0x10(%ebp),%eax
084d9b08 +0x264:  mov    %eax,(%esp)
084d9b0b +0x267:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d9b10 +0x26c:  test   %al,%al
084d9b12 +0x26e:  je     084d9b30 <+0x28c>
084d9b14 +0x270:  mov    0xc(%ebp),%eax
084d9b17 +0x273:  movzbl 0x2b96(%eax),%edx
084d9b1e +0x27a:  movzbl &_ZN20CPremiumLetheManager19NOT_USE_LETHE_STATEE,%eax
084d9b25 +0x281:  cmp    %al,%dl
084d9b27 +0x283:  jne    084d9b30 <+0x28c>
084d9b29 +0x285:  mov    $0x1,%eax
084d9b2e +0x28a:  jmp    084d9b35 <+0x291>
084d9b30 +0x28c:  mov    $0x0,%eax
084d9b35 +0x291:  test   %al,%al
084d9b37 +0x293:  je     084d9bc2 <+0x31e>
084d9b3d +0x299:  movl   $0x1,0x8(%esp)
084d9b45 +0x2a1:  mov    0x10(%ebp),%eax
084d9b48 +0x2a4:  mov    %eax,0x4(%esp)
084d9b4c +0x2a8:  mov    -0x10(%ebp),%eax
084d9b4f +0x2ab:  mov    %eax,(%esp)
084d9b52 +0x2ae:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
084d9b57 +0x2b3:  mov    0x10(%ebp),%eax
084d9b5a +0x2b6:  lea    0x79700(%eax),%edx
084d9b60 +0x2bc:  movl   $0x0,0x8(%esp)
084d9b68 +0x2c4:  mov    0x10(%ebp),%eax
084d9b6b +0x2c7:  mov    %eax,0x4(%esp)
084d9b6f +0x2cb:  mov    %edx,(%esp)
084d9b72 +0x2ce:  call   08686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>  ; cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)
084d9b77 +0x2d3:  mov    0x10(%ebp),%eax
084d9b7a +0x2d6:  mov    %eax,(%esp)
084d9b7d +0x2d9:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084d9b82 +0x2de:  mov    %eax,%ebx
084d9b84 +0x2e0:  mov    0x10(%ebp),%eax
084d9b87 +0x2e3:  mov    %eax,(%esp)
084d9b8a +0x2e6:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
084d9b8f +0x2eb:  lea    0x1de(%eax),%edx
084d9b95 +0x2f1:  mov    0x10(%ebp),%eax
084d9b98 +0x2f4:  add    $0x79700,%eax
084d9b9d +0x2f9:  movl   $0x1,0x10(%esp)
084d9ba5 +0x301:  movl   $0x1,0xc(%esp)
084d9bad +0x309:  mov    %ebx,0x8(%esp)
084d9bb1 +0x30d:  mov    %edx,0x4(%esp)
084d9bb5 +0x311:  mov    %eax,(%esp)
084d9bb8 +0x314:  call   08685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>  ; cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
084d9bbd +0x319:  jmp    084d9c82 <+0x3de>
084d9bc2 +0x31e:  movl   $0x21,0x4(%esp)
084d9bca +0x326:  mov    0x10(%ebp),%eax
084d9bcd +0x329:  mov    %eax,(%esp)
084d9bd0 +0x32c:  call   080e600e <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x144>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x144
084d9bd5 +0x331:  test   %al,%al
084d9bd7 +0x333:  je     084d9bf5 <+0x351>
084d9bd9 +0x335:  mov    0xc(%ebp),%eax
084d9bdc +0x338:  movzbl 0x2b96(%eax),%edx
084d9be3 +0x33f:  movzbl &_ZN20CPremiumLetheManager19SKILL_CONFIRM_STATEE,%eax
084d9bea +0x346:  cmp    %al,%dl
084d9bec +0x348:  jne    084d9bf5 <+0x351>
084d9bee +0x34a:  mov    $0x1,%eax
084d9bf3 +0x34f:  jmp    084d9bfa <+0x356>
084d9bf5 +0x351:  mov    $0x0,%eax
084d9bfa +0x356:  test   %al,%al
084d9bfc +0x358:  je     084d9c82 <+0x3de>
084d9c02 +0x35e:  movl   $0x1,0x8(%esp)
084d9c0a +0x366:  mov    0x10(%ebp),%eax
084d9c0d +0x369:  mov    %eax,0x4(%esp)
084d9c11 +0x36d:  mov    -0x10(%ebp),%eax
084d9c14 +0x370:  mov    %eax,(%esp)
084d9c17 +0x373:  call   085c46e8 <_ZN20CPremiumLetheManager11BackupSkillEP5CUser20ENUM_SKILL_TREE_KIND>  ; CPremiumLetheManager::BackupSkill(CUser*, ENUM_SKILL_TREE_KIND)
084d9c1c +0x378:  mov    0x10(%ebp),%eax
084d9c1f +0x37b:  lea    0x79700(%eax),%edx
084d9c25 +0x381:  movl   $0x0,0x8(%esp)
084d9c2d +0x389:  mov    0x10(%ebp),%eax
084d9c30 +0x38c:  mov    %eax,0x4(%esp)
084d9c34 +0x390:  mov    %edx,(%esp)
084d9c37 +0x393:  call   08686188 <_ZN15cUserHistoryLog15SkillSPInfoSaveEP5CUser22eSkillSPInfoSaveReason>  ; cUserHistoryLog::SkillSPInfoSave(CUser*, eSkillSPInfoSaveReason)
084d9c3c +0x398:  mov    0x10(%ebp),%eax
084d9c3f +0x39b:  mov    %eax,(%esp)
084d9c42 +0x39e:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
084d9c47 +0x3a3:  mov    %eax,%ebx
084d9c49 +0x3a5:  mov    0x10(%ebp),%eax
084d9c4c +0x3a8:  mov    %eax,(%esp)
084d9c4f +0x3ab:  call   0822f130 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x47da>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x47da
084d9c54 +0x3b0:  lea    0x1de(%eax),%edx
084d9c5a +0x3b6:  mov    0x10(%ebp),%eax
084d9c5d +0x3b9:  add    $0x79700,%eax
084d9c62 +0x3be:  movl   $0x1,0x10(%esp)
084d9c6a +0x3c6:  movl   $0x1,0xc(%esp)
084d9c72 +0x3ce:  mov    %ebx,0x8(%esp)
084d9c76 +0x3d2:  mov    %edx,0x4(%esp)
084d9c7a +0x3d6:  mov    %eax,(%esp)
084d9c7d +0x3d9:  call   08685dce <_ZN15cUserHistoryLog9SkillSaveEPK15_Mastered_skillji16eSkillSaveReason>  ; cUserHistoryLog::SkillSave(_Mastered_skill const*, unsigned int, int, eSkillSaveReason)
084d9c82 +0x3de:  mov    $0x0,%eax
084d9c87 +0x3e3:  add    $0x30,%esp
084d9c8a +0x3e6:  pop    %ebx
084d9c8b +0x3e7:  pop    %esi
084d9c8c +0x3e8:  pop    %ebp
084d9c8d +0x3e9:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::ProcessOneDayLethe2ND @ 0x84d98a4

/* Inter_LoadEtc::ProcessOneDayLethe2ND(SIG_LOAD_ETC*, CUser*, int&) */

undefined4 __thiscall
Inter_LoadEtc::ProcessOneDayLethe2ND
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
  
  CUserCharacInfo::SetOneDayLetheFlag2ND((CUserCharacInfo *)param_2,(uchar)param_1[0x2d2f]);
  this_00 = (CGameManager *)G_CGameManager();
  local_14 = (CPremiumLetheManager *)CGameManager::GetPremiumLetheManager(this_00);
  if (local_14 != (CPremiumLetheManager *)0x0) {
    cVar2 = CUser::isAffectedPremium(param_2,0x21);
    if ((cVar2 == '\x01') ||
       ((param_1[0x2d2f] != CPremiumLetheManager::USE_LETHE_STATE &&
        (param_1[0x2d2f] != CPremiumLetheManager::SKILL_CONFIRM_STATE)))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cVar2 = CPremiumLetheManager::BackToPre(local_14,param_2,param_1 + 0x2b97,1);
      if (cVar2 != '\x01') {
        return 0x4111;
      }
      if (param_1[0x2d2f] != CPremiumLetheManager::SKILL_CONFIRM_STATE) {
        *param_3 = 1;
        CUserCharacInfo::SetIsInitSkillFlag2ND((CUserCharacInfo *)param_2,false);
      }
      pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"InterDispatcher.cpp",0x411d)
      ;
      CStreamGuard::CStreamGuard(local_1c,pSVar3,true);
      pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_1c);
                    /* try { // try from 084d99f2 to 084d9acf has its CatchHandler @ 084d9ad2 */
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
      local_10[0x1a6] = (SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD)0x1;
      CUser::SaveBackupSkillInfo(param_2,local_10 + 0xd,1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_1c);
      CStreamGuard::~CStreamGuard(local_1c);
    }
    else {
      cVar2 = CUser::isAffectedPremium(param_2,0x21);
      if ((cVar2 == '\0') ||
         (*(SIG_RESULT_PREMIUM_LETHE_SKILL_LOAD *)(param_1 + 0x2b96) !=
          CPremiumLetheManager::NOT_USE_LETHE_STATE)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CPremiumLetheManager::BackupSkill(local_14,param_2,1);
        cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
        uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
        iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
        cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x1de,uVar6,1,1);
      }
      else {
        cVar2 = CUser::isAffectedPremium(param_2,0x21);
        if ((cVar2 == '\0') || (param_1[0x2b96] != CPremiumLetheManager::SKILL_CONFIRM_STATE)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          CPremiumLetheManager::BackupSkill(local_14,param_2,1);
          cUserHistoryLog::SkillSPInfoSave((cUserHistoryLog *)(param_2 + 0x79700),param_2,0);
          uVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
          iVar5 = CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_2);
          cUserHistoryLog::SkillSave((cUserHistoryLog *)(param_2 + 0x79700),iVar5 + 0x1de,uVar6,1,1)
          ;
        }
      }
    }
  }
  return 0;
}
```
