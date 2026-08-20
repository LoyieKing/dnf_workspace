# ChangeHiddenOption

`_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE`

`AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)`

| 类 | 地址 |
|---|---|
| `AvatarFixedHiddenOptionServer` | `0x0817e8d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817e8d6  _ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE
#           AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)
# range [0x0817e8d6, 0x0817ec66]
0817e8d6 +0x000:  push   %ebp
0817e8d7 +0x001:  mov    %esp,%ebp
0817e8d9 +0x003:  push   %edi
0817e8da +0x004:  push   %esi
0817e8db +0x005:  push   %ebx
0817e8dc +0x006:  sub    $0x7c,%esp
0817e8df +0x009:  mov    0x10(%ebp),%eax
0817e8e2 +0x00c:  movzwl (%eax),%eax
0817e8e5 +0x00f:  movswl %ax,%ebx
0817e8e8 +0x012:  mov    0xc(%ebp),%eax
0817e8eb +0x015:  mov    %eax,(%esp)
0817e8ee +0x018:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0817e8f3 +0x01d:  movl   $0x1,0x14(%esp)
0817e8fb +0x025:  movl   $0x3,0x10(%esp)
0817e903 +0x02d:  movl   $0x1,0xc(%esp)
0817e90b +0x035:  mov    %ebx,0x8(%esp)
0817e90f +0x039:  movl   $0x1,0x4(%esp)
0817e917 +0x041:  mov    %eax,(%esp)
0817e91a +0x044:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0817e91f +0x049:  xor    $0x1,%eax
0817e922 +0x04c:  test   %al,%al
0817e924 +0x04e:  je     0817e993 <+0xbd>
0817e926 +0x050:  mov    0xc(%ebp),%eax
0817e929 +0x053:  mov    %eax,(%esp)
0817e92c +0x056:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817e931 +0x05b:  mov    0x10(%ebp),%edx
0817e934 +0x05e:  movzwl (%edx),%edx
0817e937 +0x061:  movswl %dx,%edx
0817e93a +0x064:  mov    %eax,0x18(%esp)
0817e93e +0x068:  mov    %edx,0x14(%esp)
0817e942 +0x06c:  movl   $"AVATAR HIDDEN OPTION CHANGE : delete_item() failed. [slot:%d] [charac_no:%d]",0x10(%esp)
0817e94a +0x074:  movl   $0xa1,0xc(%esp)
0817e952 +0x07c:  movl   $&_ZZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x8(%esp)
0817e95a +0x084:  movl   $"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0x4(%esp)
0817e962 +0x08c:  movl   $0x1,(%esp)
0817e969 +0x093:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0817e96e +0x098:  movl   $0x13,0x8(%esp)
0817e976 +0x0a0:  movl   $0x24c,0x4(%esp)
0817e97e +0x0a8:  mov    0xc(%ebp),%eax
0817e981 +0x0ab:  mov    %eax,(%esp)
0817e984 +0x0ae:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0817e989 +0x0b3:  mov    $0x0,%ebx
0817e98e +0x0b8:  jmp    0817ec5d <+0x387>
0817e993 +0x0bd:  mov    0x10(%ebp),%eax
0817e996 +0x0c0:  movzwl (%eax),%eax
0817e999 +0x0c3:  cwtl
0817e99a +0x0c4:  mov    %eax,0xc(%esp)
0817e99e +0x0c8:  movl   $0x0,0x8(%esp)
0817e9a6 +0x0d0:  movl   $0x1,0x4(%esp)
0817e9ae +0x0d8:  mov    0xc(%ebp),%eax
0817e9b1 +0x0db:  mov    %eax,(%esp)
0817e9b4 +0x0de:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0817e9b9 +0x0e3:  mov    0xc(%ebp),%eax
0817e9bc +0x0e6:  mov    %eax,(%esp)
0817e9bf +0x0e9:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817e9c4 +0x0ee:  mov    %eax,%ebx
0817e9c6 +0x0f0:  mov    0x10(%ebp),%eax
0817e9c9 +0x0f3:  movzwl (%eax),%eax
0817e9cc +0x0f6:  movswl %ax,%esi
0817e9cf +0x0f9:  movl   $0x0,0xc(%esp)
0817e9d7 +0x101:  movl   $0xa6,0x8(%esp)
0817e9df +0x109:  movl   $&_ZZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x4(%esp)
0817e9e7 +0x111:  lea    -0x40(%ebp),%eax
0817e9ea +0x114:  mov    %eax,(%esp)
0817e9ed +0x117:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0817e9f2 +0x11c:  mov    %ebx,0xc(%esp)
0817e9f6 +0x120:  mov    %esi,0x8(%esp)
0817e9fa +0x124:  movl   $"AVATAR HIDDEN OPTION CHANGE : delete_item() success. [slot:%d] [charac_no:%d]",0x4(%esp)
0817ea02 +0x12c:  lea    -0x40(%ebp),%eax
0817ea05 +0x12f:  mov    %eax,(%esp)
0817ea08 +0x132:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817ea0d +0x137:  mov    0x10(%ebp),%eax
0817ea10 +0x13a:  movzwl 0x2(%eax),%eax
0817ea14 +0x13e:  movswl %ax,%ebx
0817ea17 +0x141:  mov    0xc(%ebp),%eax
0817ea1a +0x144:  mov    %eax,(%esp)
0817ea1d +0x147:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0817ea22 +0x14c:  mov    %ebx,0x8(%esp)
0817ea26 +0x150:  movl   $0x2,0x4(%esp)
0817ea2e +0x158:  mov    %eax,(%esp)
0817ea31 +0x15b:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0817ea36 +0x160:  mov    %eax,-0x20(%ebp)
0817ea39 +0x163:  cmpl   $0x0,-0x20(%ebp)
0817ea3d +0x167:  jne    0817ea49 <+0x173>
0817ea3f +0x169:  mov    $0x0,%ebx
0817ea44 +0x16e:  jmp    0817ec5d <+0x387>
0817ea49 +0x173:  mov    -0x20(%ebp),%eax
0817ea4c +0x176:  mov    0x2(%eax),%eax
0817ea4f +0x179:  mov    %eax,%ebx
0817ea51 +0x17b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0817ea56 +0x180:  mov    %ebx,0x4(%esp)
0817ea5a +0x184:  mov    %eax,(%esp)
0817ea5d +0x187:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0817ea62 +0x18c:  mov    %eax,-0x1c(%ebp)
0817ea65 +0x18f:  cmpl   $0x0,-0x1c(%ebp)
0817ea69 +0x193:  jne    0817ea75 <+0x19f>
0817ea6b +0x195:  mov    $0x0,%ebx
0817ea70 +0x19a:  jmp    0817ec5d <+0x387>
0817ea75 +0x19f:  mov    -0x1c(%ebp),%eax
0817ea78 +0x1a2:  mov    (%eax),%eax
0817ea7a +0x1a4:  add    $0x10,%eax
0817ea7d +0x1a7:  mov    (%eax),%edx
0817ea7f +0x1a9:  mov    -0x1c(%ebp),%eax
0817ea82 +0x1ac:  mov    %eax,(%esp)
0817ea85 +0x1af:  call   *%edx
0817ea87 +0x1b1:  xor    $0x1,%eax
0817ea8a +0x1b4:  test   %al,%al
0817ea8c +0x1b6:  je     0817ea98 <+0x1c2>
0817ea8e +0x1b8:  mov    $0x0,%ebx
0817ea93 +0x1bd:  jmp    0817ec5d <+0x387>
0817ea98 +0x1c2:  mov    -0x1c(%ebp),%eax
0817ea9b +0x1c5:  mov    %eax,(%esp)
0817ea9e +0x1c8:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
0817eaa3 +0x1cd:  mov    %eax,0x4(%esp)
0817eaa7 +0x1d1:  mov    0x8(%ebp),%eax
0817eaaa +0x1d4:  mov    %eax,(%esp)
0817eaad +0x1d7:  call   0817e1ec <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITY>  ; AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY)
0817eab2 +0x1dc:  mov    %eax,%edx
0817eab4 +0x1de:  mov    -0x20(%ebp),%eax
0817eab7 +0x1e1:  mov    %dx,0xd(%eax)
0817eabb +0x1e5:  mov    -0x20(%ebp),%eax
0817eabe +0x1e8:  movzwl 0xd(%eax),%edx
0817eac2 +0x1ec:  mov    0x10(%ebp),%eax
0817eac5 +0x1ef:  mov    %dx,0x4(%eax)
0817eac9 +0x1f3:  lea    -0x50(%ebp),%eax
0817eacc +0x1f6:  mov    %eax,(%esp)
0817eacf +0x1f9:  call   0817edfc <_GLOBAL__I__ZN29AvatarFixedHiddenOptionServerC2Ev+0x2d>  ; global constructors keyed to AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer()+0x2d
0817ead4 +0x1fe:  mov    0xc(%ebp),%eax
0817ead7 +0x201:  mov    %eax,(%esp)
0817eada +0x204:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0817eadf +0x209:  mov    %eax,-0x50(%ebp)
0817eae2 +0x20c:  mov    0xc(%ebp),%eax
0817eae5 +0x20f:  mov    %eax,(%esp)
0817eae8 +0x212:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0817eaed +0x217:  mov    (%eax),%eax
0817eaef +0x219:  mov    %eax,-0x4c(%ebp)
0817eaf2 +0x21c:  mov    -0x20(%ebp),%eax
0817eaf5 +0x21f:  mov    0x2(%eax),%eax
0817eaf8 +0x222:  mov    %eax,-0x48(%ebp)
0817eafb +0x225:  mov    0x10(%ebp),%eax
0817eafe +0x228:  movzwl 0x2(%eax),%eax
0817eb02 +0x22c:  add    $0xa,%eax
0817eb05 +0x22f:  mov    %ax,-0x44(%ebp)
0817eb09 +0x233:  mov    -0x20(%ebp),%eax
0817eb0c +0x236:  movzwl 0xd(%eax),%eax
0817eb10 +0x23a:  mov    %ax,-0x42(%ebp)
0817eb14 +0x23e:  mov    0xc(%ebp),%eax
0817eb17 +0x241:  mov    %eax,(%esp)
0817eb1a +0x244:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0817eb1f +0x249:  mov    %eax,%ebx
0817eb21 +0x24b:  movzwl -0x42(%ebp),%eax
0817eb25 +0x24f:  cwtl
0817eb26 +0x250:  mov    %eax,-0x5c(%ebp)
0817eb29 +0x253:  mov    -0x48(%ebp),%edi
0817eb2c +0x256:  movzwl -0x44(%ebp),%eax
0817eb30 +0x25a:  movswl %ax,%esi
0817eb33 +0x25d:  movl   $0x0,0xc(%esp)
0817eb3b +0x265:  movl   $0xc2,0x8(%esp)
0817eb43 +0x26d:  movl   $&_ZZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeEE19__PRETTY_FUNCTION__,0x4(%esp)
0817eb4b +0x275:  lea    -0x30(%ebp),%eax
0817eb4e +0x278:  mov    %eax,(%esp)
0817eb51 +0x27b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0817eb56 +0x280:  mov    %ebx,0x14(%esp)
0817eb5a +0x284:  mov    -0x5c(%ebp),%eax
0817eb5d +0x287:  mov    %eax,0x10(%esp)
0817eb61 +0x28b:  mov    %edi,0xc(%esp)
0817eb65 +0x28f:  mov    %esi,0x8(%esp)
0817eb69 +0x293:  movl   $"AVATAR HIDDEN OPTION CHANGE : success [slot:%d] [item_id:%d] [hidden_option:%d] [charac_no:%d]",0x4(%esp)
0817eb71 +0x29b:  lea    -0x30(%ebp),%eax
0817eb74 +0x29e:  mov    %eax,(%esp)
0817eb77 +0x2a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0817eb7c +0x2a6:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0817eb81 +0x2ab:  movl   $0xc6,0x8(%esp)
0817eb89 +0x2b3:  movl   $"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0x4(%esp)
0817eb91 +0x2bb:  mov    %eax,(%esp)
0817eb94 +0x2be:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0817eb99 +0x2c3:  movl   $0x1,0x8(%esp)
0817eba1 +0x2cb:  mov    %eax,0x4(%esp)
0817eba5 +0x2cf:  lea    -0x58(%ebp),%eax
0817eba8 +0x2d2:  mov    %eax,(%esp)
0817ebab +0x2d5:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0817ebb0 +0x2da:  movl   $0xffffffff,0x8(%esp)
0817ebb8 +0x2e2:  movl   $0x2f,0x4(%esp)
0817ebc0 +0x2ea:  lea    -0x58(%ebp),%eax
0817ebc3 +0x2ed:  mov    %eax,(%esp)
0817ebc6 +0x2f0:  call   081977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>  ; ARAD::DISPATCHER::make_internal_stream_jpn(CStreamGuard&, ARAD::ENUM_INTERNALPACKET_JPN, int)
0817ebcb +0x2f5:  lea    -0x58(%ebp),%eax
0817ebce +0x2f8:  mov    %eax,(%esp)
0817ebd1 +0x2fb:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0817ebd6 +0x300:  movl   $0x10,0x8(%esp)
0817ebde +0x308:  lea    -0x50(%ebp),%edx
0817ebe1 +0x30b:  mov    %edx,0x4(%esp)
0817ebe5 +0x30f:  mov    %eax,(%esp)
0817ebe8 +0x312:  call   080de652 <_GLOBAL__I__ZN13CBusinessImpl18SendBuffertoClientEiiijPhs+0x42>  ; global constructors keyed to CBusinessImpl::SendBuffertoClient(int, int, int, unsigned int, unsigned char*, short)+0x42
0817ebed +0x317:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0817ebf2 +0x31c:  lea    -0x58(%ebp),%edx
0817ebf5 +0x31f:  mov    %edx,0x8(%esp)
0817ebf9 +0x323:  movl   $0x2,0x4(%esp)
0817ec01 +0x32b:  mov    %eax,(%esp)
0817ec04 +0x32e:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0817ec09 +0x333:  mov    0x10(%ebp),%eax
0817ec0c +0x336:  movzwl 0x2(%eax),%eax
0817ec10 +0x33a:  cwtl
0817ec11 +0x33b:  mov    %eax,0xc(%esp)
0817ec15 +0x33f:  movl   $0x1,0x8(%esp)
0817ec1d +0x347:  movl   $0x1,0x4(%esp)
0817ec25 +0x34f:  mov    0xc(%ebp),%eax
0817ec28 +0x352:  mov    %eax,(%esp)
0817ec2b +0x355:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0817ec30 +0x35a:  mov    $0x1,%ebx
0817ec35 +0x35f:  lea    -0x58(%ebp),%eax
0817ec38 +0x362:  mov    %eax,(%esp)
0817ec3b +0x365:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0817ec40 +0x36a:  jmp    0817ec5d <+0x387>
0817ec42 +0x36c:  mov    %edx,%ebx
0817ec44 +0x36e:  mov    %eax,%esi
0817ec46 +0x370:  lea    -0x58(%ebp),%eax
0817ec49 +0x373:  mov    %eax,(%esp)
0817ec4c +0x376:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0817ec51 +0x37b:  mov    %esi,%eax
0817ec53 +0x37d:  mov    %ebx,%edx
0817ec55 +0x37f:  mov    %eax,(%esp)
0817ec58 +0x382:  call   08ae3750 <_Unwind_Resume>
0817ec5d +0x387:  mov    %ebx,%eax
0817ec5f +0x389:  add    $0x7c,%esp
0817ec62 +0x38c:  pop    %ebx
0817ec63 +0x38d:  pop    %esi
0817ec64 +0x38e:  pop    %edi
0817ec65 +0x38f:  pop    %ebp
0817ec66 +0x390:  ret
```

## 反编译 C

```c
// AvatarFixedHiddenOptionServer::ChangeHiddenOption @ 0x817e8d6

/* AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::ChangeHiddenOption
          (AvatarFixedHiddenOptionServer *this,CUser *param_1,SigAvatarHiddenOptionChange *param_2)

{
  short sVar1;
  char cVar2;
  undefined2 uVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  Stream *pSVar9;
  CStreamGuard *this_01;
  int iVar10;
  CStreamGuard local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  short local_48;
  short local_46;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  CItem *local_20;
  
  sVar1 = *(short *)param_2;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar2 = CInventory::delete_item(pCVar4,1,(int)sVar1,1,3,1);
  if (cVar2 == '\x01') {
    CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)param_2);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    sVar1 = *(short *)param_2;
    cMyTrace::cMyTrace(local_44,
                       "bool AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)"
                       ,0xa6,0);
    cMyTrace::operator()
              (local_44,
               "AVATAR HIDDEN OPTION CHANGE : delete_item() success. [slot:%d] [charac_no:%d]",
               (int)sVar1,uVar5);
    sVar1 = *(short *)(param_2 + 2);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_24 = CInventory::GetInvenRef(pCVar4,2,(int)sVar1);
    if (local_24 == 0) {
      uVar5 = 0;
    }
    else {
      iVar8 = *(int *)(local_24 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,iVar8);
      if (local_20 == (CItem *)0x0) {
        uVar5 = 0;
      }
      else {
        cVar2 = (**(code **)(*(int *)local_20 + 0x10))(local_20);
        if (cVar2 == '\x01') {
          uVar5 = CItem::get_grade(local_20);
          uVar3 = GetSkillIndex(this,uVar5);
          *(undefined2 *)(local_24 + 0xd) = uVar3;
          *(undefined2 *)(param_2 + 4) = *(undefined2 *)(local_24 + 0xd);
          arad::SigAradAvatarHiddenOptionSave::SigAradAvatarHiddenOptionSave
                    ((SigAradAvatarHiddenOptionSave *)&local_54);
          local_54 = CUser::get_acc_id(param_1);
          puVar6 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          local_50 = *puVar6;
          local_4c = *(undefined4 *)(local_24 + 2);
          local_48 = *(short *)(param_2 + 2) + 10;
          local_46 = *(short *)(local_24 + 0xd);
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar5 = local_4c;
          iVar8 = (int)local_46;
          iVar10 = (int)local_48;
          cMyTrace::cMyTrace(local_34,
                             "bool AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)"
                             ,0xc2,0);
          cMyTrace::operator()
                    (local_34,
                     "AVATAR HIDDEN OPTION CHANGE : success [slot:%d] [item_id:%d] [hidden_option:%d] [charac_no:%d]"
                     ,iVar10,uVar5,iVar8,uVar7);
          pSVar9 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,
                                       "localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0xc6);
          CStreamGuard::CStreamGuard(local_5c,pSVar9,true);
                    /* try { // try from 0817ebc6 to 0817ec2f has its CatchHandler @ 0817ec42 */
          ARAD::DISPATCHER::make_internal_stream_jpn(local_5c,0x2f,0xffffffff);
          this_01 = (CStreamGuard *)CStreamGuard::operator->(local_5c);
          CStreamGuard::put_binary(this_01,&local_54,0x10);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_5c);
          CUser::SendUpdateItemList(param_1,1,1,(int)*(short *)(param_2 + 2));
          uVar5 = 1;
          CStreamGuard::~CStreamGuard(local_5c);
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  else {
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
               "bool AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)"
               ,0xa1,"AVATAR HIDDEN OPTION CHANGE : delete_item() failed. [slot:%d] [charac_no:%d]",
               (int)*(short *)param_2,uVar5);
    CUser::SendCmdErrorPacket(param_1,0x24c,0x13);
    uVar5 = 0;
  }
  return uVar5;
}
```
