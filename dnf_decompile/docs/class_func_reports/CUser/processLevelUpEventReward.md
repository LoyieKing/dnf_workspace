# processLevelUpEventReward

`_ZN5CUser25processLevelUpEventRewardEb`

`CUser::processLevelUpEventReward(bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08663cc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08663cc0  _ZN5CUser25processLevelUpEventRewardEb
#           CUser::processLevelUpEventReward(bool)
# range [0x08663cc0, 0x08664079]
08663cc0 +0x000:  push   %ebp
08663cc1 +0x001:  mov    %esp,%ebp
08663cc3 +0x003:  push   %edi
08663cc4 +0x004:  push   %esi
08663cc5 +0x005:  push   %ebx
08663cc6 +0x006:  sub    $0x2fc,%esp
08663ccc +0x00c:  mov    0xc(%ebp),%eax
08663ccf +0x00f:  mov    %al,-0x2cc(%ebp)
08663cd5 +0x015:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08663cda +0x01a:  movl   $0x5d,0x4(%esp)
08663ce2 +0x022:  mov    %eax,(%esp)
08663ce5 +0x025:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08663cea +0x02a:  mov    %eax,-0x20(%ebp)
08663ced +0x02d:  mov    -0x20(%ebp),%eax
08663cf0 +0x030:  mov    (%eax),%eax
08663cf2 +0x032:  add    $0x34,%eax
08663cf5 +0x035:  mov    (%eax),%edx
08663cf7 +0x037:  movl   $0x0,0x4(%esp)
08663cff +0x03f:  mov    -0x20(%ebp),%eax
08663d02 +0x042:  mov    %eax,(%esp)
08663d05 +0x045:  call   *%edx
08663d07 +0x047:  xor    $0x1,%eax
08663d0a +0x04a:  test   %al,%al
08663d0c +0x04c:  jne    0866406e <+0x3ae>
08663d12 +0x052:  mov    0x8(%ebp),%eax
08663d15 +0x055:  mov    %eax,(%esp)
08663d18 +0x058:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
08663d1d +0x05d:  movsbl %al,%esi
08663d20 +0x060:  mov    0x8(%ebp),%eax
08663d23 +0x063:  mov    %eax,(%esp)
08663d26 +0x066:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08663d2b +0x06b:  mov    %eax,%ebx
08663d2d +0x06d:  mov    0x8(%ebp),%eax
08663d30 +0x070:  mov    %eax,(%esp)
08663d33 +0x073:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08663d38 +0x078:  mov    %esi,0xc(%esp)
08663d3c +0x07c:  mov    %ebx,0x8(%esp)
08663d40 +0x080:  mov    %eax,0x4(%esp)
08663d44 +0x084:  lea    -0x28(%ebp),%eax
08663d47 +0x087:  mov    %eax,(%esp)
08663d4a +0x08a:  call   081b8896 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x9d>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x9d
08663d4f +0x08f:  lea    -0x34(%ebp),%eax
08663d52 +0x092:  mov    %eax,(%esp)
08663d55 +0x095:  call   081b8c00 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x407>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x407
08663d5a +0x09a:  cmpb   $0x0,-0x2cc(%ebp)
08663d61 +0x0a1:  je     08663d90 <+0xd0>
08663d63 +0x0a3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08663d68 +0x0a8:  lea    0x50ac(%eax),%edx
08663d6e +0x0ae:  lea    -0x34(%ebp),%eax
08663d71 +0x0b1:  mov    %eax,0x8(%esp)
08663d75 +0x0b5:  lea    -0x28(%ebp),%eax
08663d78 +0x0b8:  mov    %eax,0x4(%esp)
08663d7c +0x0bc:  mov    %edx,(%esp)
08663d7f +0x0bf:  call   081b895a <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x161>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x161
08663d84 +0x0c4:  xor    $0x1,%eax
08663d87 +0x0c7:  test   %al,%al
08663d89 +0x0c9:  je     08663dd9 <+0x119>
08663d8b +0x0cb:  jmp    08664061 <+0x3a1>
08663d90 +0x0d0:  lea    -0x3c(%ebp),%eax
08663d93 +0x0d3:  mov    %eax,(%esp)
08663d96 +0x0d6:  call   081b88bc <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0xc3>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0xc3
08663d9b +0x0db:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08663da0 +0x0e0:  lea    0x50ac(%eax),%edx
08663da6 +0x0e6:  lea    -0x3c(%ebp),%eax
08663da9 +0x0e9:  mov    %eax,0x8(%esp)
08663dad +0x0ed:  lea    -0x28(%ebp),%eax
08663db0 +0x0f0:  mov    %eax,0x4(%esp)
08663db4 +0x0f4:  mov    %edx,(%esp)
08663db7 +0x0f7:  call   081b89de <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x1e5>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x1e5
08663dbc +0x0fc:  xor    $0x1,%eax
08663dbf +0x0ff:  test   %al,%al
08663dc1 +0x101:  jne    08664061 <+0x3a1>
08663dc7 +0x107:  lea    -0x3c(%ebp),%eax
08663dca +0x10a:  mov    %eax,0x4(%esp)
08663dce +0x10e:  lea    -0x34(%ebp),%eax
08663dd1 +0x111:  mov    %eax,(%esp)
08663dd4 +0x114:  call   081b8a52 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x259>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x259
08663dd9 +0x119:  lea    -0x17d(%ebp),%edx
08663ddf +0x11f:  mov    $0x100,%ebx
08663de4 +0x124:  mov    $0x0,%eax
08663de9 +0x129:  mov    %edx,%ecx
08663deb +0x12b:  and    $0x1,%ecx
08663dee +0x12e:  test   %ecx,%ecx
08663df0 +0x130:  je     08663dfa <+0x13a>
08663df2 +0x132:  mov    %al,(%edx)
08663df4 +0x134:  add    $0x1,%edx
08663df7 +0x137:  sub    $0x1,%ebx
08663dfa +0x13a:  mov    %edx,%ecx
08663dfc +0x13c:  and    $0x2,%ecx
08663dff +0x13f:  test   %ecx,%ecx
08663e01 +0x141:  je     08663e0c <+0x14c>
08663e03 +0x143:  mov    %ax,(%edx)
08663e06 +0x146:  add    $0x2,%edx
08663e09 +0x149:  sub    $0x2,%ebx
08663e0c +0x14c:  mov    %ebx,%ecx
08663e0e +0x14e:  shr    $0x2,%ecx
08663e11 +0x151:  mov    %edx,%edi
08663e13 +0x153:  rep stos %eax,%es:(%edi)
08663e15 +0x155:  mov    %edi,%edx
08663e17 +0x157:  mov    %ebx,%ecx
08663e19 +0x159:  and    $0x2,%ecx
08663e1c +0x15c:  test   %ecx,%ecx
08663e1e +0x15e:  je     08663e26 <+0x166>
08663e20 +0x160:  mov    %ax,(%edx)
08663e23 +0x163:  add    $0x2,%edx
08663e26 +0x166:  mov    %ebx,%ecx
08663e28 +0x168:  and    $0x1,%ecx
08663e2b +0x16b:  test   %ecx,%ecx
08663e2d +0x16d:  je     08663e34 <+0x174>
08663e2f +0x16f:  mov    %al,(%edx)
08663e31 +0x171:  add    $0x1,%edx
08663e34 +0x174:  movl   $0x0,0xc(%esp)
08663e3c +0x17c:  movl   $"game_server_msg_188",0x8(%esp)
08663e44 +0x184:  movl   $0x4,0x4(%esp)
08663e4c +0x18c:  movl   $&g_scriptStringManager_,(%esp)
08663e53 +0x193:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663e58 +0x198:  movl   $0xff,0x8(%esp)
08663e60 +0x1a0:  mov    %eax,0x4(%esp)
08663e64 +0x1a4:  lea    -0x17d(%ebp),%eax
08663e6a +0x1aa:  mov    %eax,(%esp)
08663e6d +0x1ad:  call   0807d8d0 <_init+0x1c8>
08663e72 +0x1b2:  lea    -0x40(%ebp),%eax
08663e75 +0x1b5:  lea    -0x34(%ebp),%edx
08663e78 +0x1b8:  mov    %edx,0x4(%esp)
08663e7c +0x1bc:  mov    %eax,(%esp)
08663e7f +0x1bf:  call   081b8db8 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x5bf>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x5bf
08663e84 +0x1c4:  sub    $0x4,%esp
08663e87 +0x1c7:  jmp    08664015 <+0x355>
08663e8c +0x1cc:  lea    -0x40(%ebp),%eax
08663e8f +0x1cf:  mov    %eax,(%esp)
08663e92 +0x1d2:  call   081b8e44 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x64b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x64b
08663e97 +0x1d7:  mov    %eax,-0x1c(%ebp)
08663e9a +0x1da:  lea    -0x7d(%ebp),%eax
08663e9d +0x1dd:  mov    %eax,(%esp)
08663ea0 +0x1e0:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08663ea5 +0x1e5:  mov    -0x1c(%ebp),%eax
08663ea8 +0x1e8:  mov    (%eax),%eax
08663eaa +0x1ea:  mov    %eax,-0x7b(%ebp)
08663ead +0x1ed:  mov    -0x1c(%ebp),%eax
08663eb0 +0x1f0:  mov    0x4(%eax),%ebx
08663eb3 +0x1f3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08663eb8 +0x1f8:  mov    0xc(%eax),%eax
08663ebb +0x1fb:  mov    %ebx,0xc(%esp)
08663ebf +0x1ff:  lea    -0x7d(%ebp),%edx
08663ec2 +0x202:  mov    %edx,0x8(%esp)
08663ec6 +0x206:  movl   $0x0,0x4(%esp)
08663ece +0x20e:  mov    %eax,(%esp)
08663ed1 +0x211:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08663ed6 +0x216:  mov    0x8(%ebp),%eax
08663ed9 +0x219:  mov    %eax,(%esp)
08663edc +0x21c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08663ee1 +0x221:  mov    %eax,%esi
08663ee3 +0x223:  lea    -0x17d(%ebp),%eax
08663ee9 +0x229:  mov    %eax,(%esp)
08663eec +0x22c:  call   0807e3b0 <_init+0xca8>
08663ef1 +0x231:  mov    %eax,%edi
08663ef3 +0x233:  mov    0x8(%ebp),%eax
08663ef6 +0x236:  mov    %eax,(%esp)
08663ef9 +0x239:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08663efe +0x23e:  mov    %eax,%ebx
08663f00 +0x240:  movl   $0x0,0xc(%esp)
08663f08 +0x248:  movl   $"game_server_msg_187",0x8(%esp)
08663f10 +0x250:  movl   $0x4,0x4(%esp)
08663f18 +0x258:  movl   $&g_scriptStringManager_,(%esp)
08663f1f +0x25f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663f24 +0x264:  movl   $0x0,0x24(%esp)
08663f2c +0x26c:  movl   $0x0,0x20(%esp)
08663f34 +0x274:  mov    %esi,0x1c(%esp)
08663f38 +0x278:  movl   $0x0,0x18(%esp)
08663f40 +0x280:  mov    %edi,0x14(%esp)
08663f44 +0x284:  lea    -0x17d(%ebp),%edx
08663f4a +0x28a:  mov    %edx,0x10(%esp)
08663f4e +0x28e:  mov    %ebx,0xc(%esp)
08663f52 +0x292:  movl   $0x0,0x8(%esp)
08663f5a +0x29a:  lea    -0x7d(%ebp),%edx
08663f5d +0x29d:  mov    %edx,0x4(%esp)
08663f61 +0x2a1:  mov    %eax,(%esp)
08663f64 +0x2a4:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08663f69 +0x2a9:  test   %eax,%eax
08663f6b +0x2ab:  sete   %al
08663f6e +0x2ae:  test   %al,%al
08663f70 +0x2b0:  je     0866400a <+0x34a>
08663f76 +0x2b6:  movl   $0x145,0x8(%esp)
08663f7e +0x2be:  movl   $0x0,0x4(%esp)
08663f86 +0x2c6:  lea    -0x2c2(%ebp),%eax
08663f8c +0x2cc:  mov    %eax,(%esp)
08663f8f +0x2cf:  call   0807dcc0 <_init+0x5b8>
08663f94 +0x2d4:  movl   $0x0,0xc(%esp)
08663f9c +0x2dc:  movl   $"game_server_msg_187",0x8(%esp)
08663fa4 +0x2e4:  movl   $0x4,0x4(%esp)
08663fac +0x2ec:  movl   $&g_scriptStringManager_,(%esp)
08663fb3 +0x2f3:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08663fb8 +0x2f8:  movl   $0x14,0x8(%esp)
08663fc0 +0x300:  mov    %eax,0x4(%esp)
08663fc4 +0x304:  lea    -0x2c2(%ebp),%eax
08663fca +0x30a:  add    $0x11,%eax
08663fcd +0x30d:  mov    %eax,(%esp)
08663fd0 +0x310:  call   0807d8d0 <_init+0x1c8>
08663fd5 +0x315:  mov    -0x7b(%ebp),%eax
08663fd8 +0x318:  mov    %eax,-0x289(%ebp)
08663fde +0x31e:  mov    -0x76(%ebp),%eax
08663fe1 +0x321:  mov    %eax,-0x285(%ebp)
08663fe7 +0x327:  mov    0x8(%ebp),%eax
08663fea +0x32a:  lea    0x79700(%eax),%edx
08663ff0 +0x330:  movl   $0x0,0x8(%esp)
08663ff8 +0x338:  lea    -0x2c2(%ebp),%eax
08663ffe +0x33e:  mov    %eax,0x4(%esp)
08664002 +0x342:  mov    %edx,(%esp)
08664005 +0x345:  call   086847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>  ; cUserHistoryLog::SendMail(MSG_MAILBOX_SEND*, unsigned int)
0866400a +0x34a:  lea    -0x40(%ebp),%eax
0866400d +0x34d:  mov    %eax,(%esp)
08664010 +0x350:  call   081b8e2e <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x635>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x635
08664015 +0x355:  lea    -0x24(%ebp),%eax
08664018 +0x358:  lea    -0x34(%ebp),%edx
0866401b +0x35b:  mov    %edx,0x4(%esp)
0866401f +0x35f:  mov    %eax,(%esp)
08664022 +0x362:  call   081b8ddc <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x5e3>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x5e3
08664027 +0x367:  sub    $0x4,%esp
0866402a +0x36a:  lea    -0x24(%ebp),%eax
0866402d +0x36d:  mov    %eax,0x4(%esp)
08664031 +0x371:  lea    -0x40(%ebp),%eax
08664034 +0x374:  mov    %eax,(%esp)
08664037 +0x377:  call   081b8e02 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x609>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x609
0866403c +0x37c:  test   %al,%al
0866403e +0x37e:  jne    08663e8c <+0x1cc>
08664044 +0x384:  jmp    08664061 <+0x3a1>
08664046 +0x386:  mov    %edx,%ebx
08664048 +0x388:  mov    %eax,%esi
0866404a +0x38a:  lea    -0x34(%ebp),%eax
0866404d +0x38d:  mov    %eax,(%esp)
08664050 +0x390:  call   081b8c14 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x41b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x41b
08664055 +0x395:  mov    %esi,%eax
08664057 +0x397:  mov    %ebx,%edx
08664059 +0x399:  mov    %eax,(%esp)
0866405c +0x39c:  call   08ae3750 <_Unwind_Resume>
08664061 +0x3a1:  lea    -0x34(%ebp),%eax
08664064 +0x3a4:  mov    %eax,(%esp)
08664067 +0x3a7:  call   081b8c14 <_GLOBAL__I__ZN27NewAccountLevelUpEventToJobC2Ev+0x41b>  ; global constructors keyed to NewAccountLevelUpEventToJob::NewAccountLevelUpEventToJob()+0x41b
0866406c +0x3ac:  jmp    0866406f <+0x3af>
0866406e +0x3ae:  nop
0866406f +0x3af:  lea    -0xc(%ebp),%esp
08664072 +0x3b2:  add    $0x0,%esp
08664075 +0x3b5:  pop    %ebx
08664076 +0x3b6:  pop    %esi
08664077 +0x3b7:  pop    %edi
08664078 +0x3b8:  pop    %ebp
08664079 +0x3b9:  ret
```

## 反编译 C

```c
// CUser::processLevelUpEventReward @ 0x8663cc0

/* CUser::processLevelUpEventReward(bool) */

void __thiscall CUser::processLevelUpEventReward(CUser *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  MSG_MAILBOX_SEND local_2c6 [17];
  char acStack_2b5 [40];
  undefined4 local_28d;
  undefined4 local_289;
  char local_181;
  char local_180 [255];
  Inven_Item local_81 [2];
  undefined4 local_7f;
  undefined4 local_7a;
  __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
  local_44 [4];
  LevelUpRewardItemData local_40 [8];
  vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>> local_38 [12];
  LevelUpRewardItemTableKey local_2c [4];
  __normal_iterator local_28 [4];
  int *local_24;
  undefined4 *local_20;
  
  bVar12 = 0;
  local_24 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5d);
  cVar1 = (**(code **)(*local_24 + 0x34))(local_24,0);
  if (cVar1 != '\x01') {
    return;
  }
  cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)this);
  iVar2 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)this);
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  LevelUpRewardItemTableKey::LevelUpRewardItemTableKey(local_2c,iVar3,iVar2,(int)cVar1);
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::vector(local_38);
  if (param_1) {
                    /* try { // try from 08663d63 to 0866403b has its CatchHandler @ 08664046 */
    iVar2 = G_CDataManager();
    cVar1 = stLevelUpRewardItemScript::get_data_when_growup
                      ((stLevelUpRewardItemScript *)(iVar2 + 0x50ac),local_2c,(vector *)local_38);
    if (cVar1 != '\x01') goto LAB_08664061;
  }
  else {
    LevelUpRewardItemData::LevelUpRewardItemData(local_40);
    iVar2 = G_CDataManager();
    cVar1 = stLevelUpRewardItemScript::get_data
                      ((stLevelUpRewardItemScript *)(iVar2 + 0x50ac),local_2c,local_40);
    if (cVar1 != '\x01') goto LAB_08664061;
    std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::push_back
              (local_38,local_40);
  }
  pcVar9 = &local_181;
  uVar10 = 0x100;
  bVar11 = ((uint)pcVar9 & 1) != 0;
  if (bVar11) {
    local_181 = '\0';
    pcVar9 = local_180;
    uVar10 = 0xff;
  }
  if (((uint)pcVar9 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
    uVar10 = uVar10 - 2;
  }
  for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9[2] = '\0';
    pcVar9[3] = '\0';
    pcVar9 = pcVar9 + ((uint)bVar12 * -2 + 1) * 4;
  }
  if ((uVar10 & 2) != 0) {
    pcVar9[0] = '\0';
    pcVar9[1] = '\0';
    pcVar9 = pcVar9 + 2;
  }
  if (bVar11) {
    *pcVar9 = '\0';
  }
  pcVar9 = (char *)RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_188",(bool *)0x0);
  strncpy(&local_181,pcVar9,0xff);
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::begin();
  while( true ) {
    std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::end();
    bVar11 = __gnu_cxx::operator!=(local_44,local_28);
    if (!bVar11) break;
    local_20 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
               ::operator*(local_44);
    Inven_Item::Inven_Item(local_81);
    local_7f = *local_20;
    uVar4 = local_20[1];
    iVar2 = G_CDataManager();
    CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_81,uVar4);
    uVar4 = GetServerGroup(this);
    sVar5 = strlen(&local_181);
    uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar7 = RDARScriptStringManager::findString
                      ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_187",
                       (bool *)0x0);
    iVar2 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (uVar7,local_81,0,uVar6,&local_181,sVar5,0,uVar4,0,0);
    if (iVar2 == 0) {
      memset(local_2c6,0,0x145);
      pcVar9 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_187",(bool *)0x0);
      strncpy(acStack_2b5,pcVar9,0x14);
      local_28d = local_7f;
      local_289 = local_7a;
      cUserHistoryLog::SendMail((cUserHistoryLog *)(this + 0x79700),local_2c6,0);
    }
    __gnu_cxx::
    __normal_iterator<LevelUpRewardItemData*,std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>>
    ::operator++(local_44);
  }
LAB_08664061:
  std::vector<LevelUpRewardItemData,std::allocator<LevelUpRewardItemData>>::~vector(local_38);
  return;
}
```
