# giveBreakAwayReward

`_ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser`

`Inter_LoadEtc::giveBreakAwayReward(CUser*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadEtc` | `0x084d8e68` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d8e68  _ZN13Inter_LoadEtc19giveBreakAwayRewardEP5CUser
#           Inter_LoadEtc::giveBreakAwayReward(CUser*)
# range [0x084d8e68, 0x084d928b]
084d8e68 +0x000:  push   %ebp
084d8e69 +0x001:  mov    %esp,%ebp
084d8e6b +0x003:  push   %edi
084d8e6c +0x004:  push   %esi
084d8e6d +0x005:  push   %ebx
084d8e6e +0x006:  sub    $0x1ac,%esp
084d8e74 +0x00c:  mov    0x8(%ebp),%eax
084d8e77 +0x00f:  mov    %eax,(%esp)
084d8e7a +0x012:  call   084ec6ba <_GLOBAL__I__Z7getUserj+0x366c>  ; global constructors keyed to getUser(unsigned int)+0x366c
084d8e7f +0x017:  test   %eax,%eax
084d8e81 +0x019:  setg   %al
084d8e84 +0x01c:  test   %al,%al
084d8e86 +0x01e:  jne    084d8e9b <+0x33>
084d8e88 +0x020:  movl   $0x0,0x4(%esp)
084d8e90 +0x028:  mov    0x8(%ebp),%eax
084d8e93 +0x02b:  mov    %eax,(%esp)
084d8e96 +0x02e:  call   0831d50c <_GLOBAL__I__ZN18break_away_prevent23CBreakAwayPreventSystemC2Ev+0x2c5>  ; global constructors keyed to break_away_prevent::CBreakAwayPreventSystem::CBreakAwayPreventSystem()+0x2c5
084d8e9b +0x033:  movl   $0x0,-0x30(%ebp)
084d8ea2 +0x03a:  movl   $0x0,-0x2c(%ebp)
084d8ea9 +0x041:  mov    0x8(%ebp),%eax
084d8eac +0x044:  mov    %eax,(%esp)
084d8eaf +0x047:  call   084ec66c <_GLOBAL__I__Z7getUserj+0x361e>  ; global constructors keyed to getUser(unsigned int)+0x361e
084d8eb4 +0x04c:  mov    %eax,-0x30(%ebp)
084d8eb7 +0x04f:  mov    0x8(%ebp),%eax
084d8eba +0x052:  mov    %eax,(%esp)
084d8ebd +0x055:  call   084ec67a <_GLOBAL__I__Z7getUserj+0x362c>  ; global constructors keyed to getUser(unsigned int)+0x362c
084d8ec2 +0x05a:  mov    %eax,-0x2c(%ebp)
084d8ec5 +0x05d:  cmpl   $0x0,-0x30(%ebp)
084d8ec9 +0x061:  jne    084d8ed5 <+0x6d>
084d8ecb +0x063:  cmpl   $0x0,-0x2c(%ebp)
084d8ecf +0x067:  je     084d9277 <+0x40f>
084d8ed5 +0x06d:  movl   $0x0,0xc(%esp)
084d8edd +0x075:  movl   $"game_server_msg_135",0x8(%esp)
084d8ee5 +0x07d:  movl   $0x4,0x4(%esp)
084d8eed +0x085:  movl   $&g_scriptStringManager_,(%esp)
084d8ef4 +0x08c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d8ef9 +0x091:  movl   $0x14,0x8(%esp)
084d8f01 +0x099:  mov    %eax,0x4(%esp)
084d8f05 +0x09d:  lea    -0x45(%ebp),%eax
084d8f08 +0x0a0:  mov    %eax,(%esp)
084d8f0b +0x0a3:  call   0807d8d0 <_init+0x1c8>
084d8f10 +0x0a8:  mov    0x8(%ebp),%eax
084d8f13 +0x0ab:  mov    %eax,(%esp)
084d8f16 +0x0ae:  call   084ec688 <_GLOBAL__I__Z7getUserj+0x363a>  ; global constructors keyed to getUser(unsigned int)+0x363a
084d8f1b +0x0b3:  test   %eax,%eax
084d8f1d +0x0b5:  sete   %al
084d8f20 +0x0b8:  test   %al,%al
084d8f22 +0x0ba:  je     084d8f67 <+0xff>
084d8f24 +0x0bc:  movl   $0x0,0xc(%esp)
084d8f2c +0x0c4:  movl   $"game_server_msg_136",0x8(%esp)
084d8f34 +0x0cc:  movl   $0x4,0x4(%esp)
084d8f3c +0x0d4:  movl   $&g_scriptStringManager_,(%esp)
084d8f43 +0x0db:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d8f48 +0x0e0:  movl   $0xff,0x8(%esp)
084d8f50 +0x0e8:  mov    %eax,0x4(%esp)
084d8f54 +0x0ec:  lea    -0x182(%ebp),%eax
084d8f5a +0x0f2:  mov    %eax,(%esp)
084d8f5d +0x0f5:  call   0807d8d0 <_init+0x1c8>
084d8f62 +0x0fa:  jmp    084d90c3 <+0x25b>
084d8f67 +0x0ff:  mov    0x8(%ebp),%eax
084d8f6a +0x102:  mov    %eax,(%esp)
084d8f6d +0x105:  call   084ec688 <_GLOBAL__I__Z7getUserj+0x363a>  ; global constructors keyed to getUser(unsigned int)+0x363a
084d8f72 +0x10a:  cmp    $0x2,%eax
084d8f75 +0x10d:  sete   %al
084d8f78 +0x110:  test   %al,%al
084d8f7a +0x112:  je     084d8fbf <+0x157>
084d8f7c +0x114:  movl   $0x0,0xc(%esp)
084d8f84 +0x11c:  movl   $"game_server_msg_142",0x8(%esp)
084d8f8c +0x124:  movl   $0x4,0x4(%esp)
084d8f94 +0x12c:  movl   $&g_scriptStringManager_,(%esp)
084d8f9b +0x133:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d8fa0 +0x138:  movl   $0xff,0x8(%esp)
084d8fa8 +0x140:  mov    %eax,0x4(%esp)
084d8fac +0x144:  lea    -0x182(%ebp),%eax
084d8fb2 +0x14a:  mov    %eax,(%esp)
084d8fb5 +0x14d:  call   0807d8d0 <_init+0x1c8>
084d8fba +0x152:  jmp    084d90c3 <+0x25b>
084d8fbf +0x157:  mov    0x8(%ebp),%eax
084d8fc2 +0x15a:  mov    %eax,(%esp)
084d8fc5 +0x15d:  call   084ec688 <_GLOBAL__I__Z7getUserj+0x363a>  ; global constructors keyed to getUser(unsigned int)+0x363a
084d8fca +0x162:  cmp    $0x4,%eax
084d8fcd +0x165:  sete   %al
084d8fd0 +0x168:  test   %al,%al
084d8fd2 +0x16a:  je     084d9017 <+0x1af>
084d8fd4 +0x16c:  movl   $0x0,0xc(%esp)
084d8fdc +0x174:  movl   $"game_server_msg_160",0x8(%esp)
084d8fe4 +0x17c:  movl   $0x4,0x4(%esp)
084d8fec +0x184:  movl   $&g_scriptStringManager_,(%esp)
084d8ff3 +0x18b:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d8ff8 +0x190:  movl   $0xff,0x8(%esp)
084d9000 +0x198:  mov    %eax,0x4(%esp)
084d9004 +0x19c:  lea    -0x182(%ebp),%eax
084d900a +0x1a2:  mov    %eax,(%esp)
084d900d +0x1a5:  call   0807d8d0 <_init+0x1c8>
084d9012 +0x1aa:  jmp    084d90c3 <+0x25b>
084d9017 +0x1af:  mov    0x8(%ebp),%eax
084d901a +0x1b2:  mov    %eax,(%esp)
084d901d +0x1b5:  call   084ec688 <_GLOBAL__I__Z7getUserj+0x363a>  ; global constructors keyed to getUser(unsigned int)+0x363a
084d9022 +0x1ba:  cmp    $0x1,%eax
084d9025 +0x1bd:  sete   %al
084d9028 +0x1c0:  test   %al,%al
084d902a +0x1c2:  je     084d906c <+0x204>
084d902c +0x1c4:  movl   $0x0,0xc(%esp)
084d9034 +0x1cc:  movl   $"game_server_msg_158",0x8(%esp)
084d903c +0x1d4:  movl   $0x4,0x4(%esp)
084d9044 +0x1dc:  movl   $&g_scriptStringManager_,(%esp)
084d904b +0x1e3:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d9050 +0x1e8:  movl   $0xff,0x8(%esp)
084d9058 +0x1f0:  mov    %eax,0x4(%esp)
084d905c +0x1f4:  lea    -0x182(%ebp),%eax
084d9062 +0x1fa:  mov    %eax,(%esp)
084d9065 +0x1fd:  call   0807d8d0 <_init+0x1c8>
084d906a +0x202:  jmp    084d90c3 <+0x25b>
084d906c +0x204:  mov    0x8(%ebp),%eax
084d906f +0x207:  mov    %eax,(%esp)
084d9072 +0x20a:  call   084ec688 <_GLOBAL__I__Z7getUserj+0x363a>  ; global constructors keyed to getUser(unsigned int)+0x363a
084d9077 +0x20f:  cmp    $0x3,%eax
084d907a +0x212:  sete   %al
084d907d +0x215:  test   %al,%al
084d907f +0x217:  je     084d927a <+0x412>
084d9085 +0x21d:  movl   $0x0,0xc(%esp)
084d908d +0x225:  movl   $"game_server_msg_159",0x8(%esp)
084d9095 +0x22d:  movl   $0x4,0x4(%esp)
084d909d +0x235:  movl   $&g_scriptStringManager_,(%esp)
084d90a4 +0x23c:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084d90a9 +0x241:  movl   $0xff,0x8(%esp)
084d90b1 +0x249:  mov    %eax,0x4(%esp)
084d90b5 +0x24d:  lea    -0x182(%ebp),%eax
084d90bb +0x253:  mov    %eax,(%esp)
084d90be +0x256:  call   0807d8d0 <_init+0x1c8>
084d90c3 +0x25b:  lea    -0x82(%ebp),%eax
084d90c9 +0x261:  mov    %eax,(%esp)
084d90cc +0x264:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084d90d1 +0x269:  movl   $0x0,-0x28(%ebp)
084d90d8 +0x270:  cmpl   $0x0,-0x30(%ebp)
084d90dc +0x274:  jne    084d9109 <+0x2a1>
084d90de +0x276:  mov    -0x2c(%ebp),%eax
084d90e1 +0x279:  mov    %eax,-0x28(%ebp)
084d90e4 +0x27c:  mov    -0x28(%ebp),%ebx
084d90e7 +0x27f:  call   0860da17 <_Z31GetInstanceCirculationStatisticv>  ; GetInstanceCirculationStatistic()
084d90ec +0x284:  mov    %ebx,0xc(%esp)
084d90f0 +0x288:  mov    0x8(%ebp),%edx
084d90f3 +0x28b:  mov    %edx,0x8(%esp)
084d90f7 +0x28f:  movl   $0x10,0x4(%esp)
084d90ff +0x297:  mov    %eax,(%esp)
084d9102 +0x29a:  call   0860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>  ; CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
084d9107 +0x29f:  jmp    084d9179 <+0x311>
084d9109 +0x2a1:  mov    -0x30(%ebp),%ebx
084d910c +0x2a4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084d9111 +0x2a9:  mov    %ebx,0x4(%esp)
084d9115 +0x2ad:  mov    %eax,(%esp)
084d9118 +0x2b0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084d911d +0x2b5:  mov    %eax,-0x1c(%ebp)
084d9120 +0x2b8:  cmpl   $0x0,-0x1c(%ebp)
084d9124 +0x2bc:  je     084d927d <+0x415>
084d912a +0x2c2:  mov    -0x30(%ebp),%eax
084d912d +0x2c5:  mov    %eax,-0x80(%ebp)
084d9130 +0x2c8:  mov    -0x1c(%ebp),%eax
084d9133 +0x2cb:  mov    (%eax),%eax
084d9135 +0x2cd:  add    $0xc,%eax
084d9138 +0x2d0:  mov    (%eax),%edx
084d913a +0x2d2:  mov    -0x1c(%ebp),%eax
084d913d +0x2d5:  mov    %eax,(%esp)
084d9140 +0x2d8:  call   *%edx
084d9142 +0x2da:  mov    %al,-0x81(%ebp)
084d9148 +0x2e0:  mov    -0x1c(%ebp),%eax
084d914b +0x2e3:  mov    (%eax),%eax
084d914d +0x2e5:  add    $0x8,%eax
084d9150 +0x2e8:  mov    (%eax),%edx
084d9152 +0x2ea:  lea    -0x82(%ebp),%eax
084d9158 +0x2f0:  mov    %eax,0x4(%esp)
084d915c +0x2f4:  mov    -0x1c(%ebp),%eax
084d915f +0x2f7:  mov    %eax,(%esp)
084d9162 +0x2fa:  call   *%edx
084d9164 +0x2fc:  mov    -0x2c(%ebp),%eax
084d9167 +0x2ff:  mov    %eax,0x4(%esp)
084d916b +0x303:  lea    -0x82(%ebp),%eax
084d9171 +0x309:  mov    %eax,(%esp)
084d9174 +0x30c:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
084d9179 +0x311:  mov    0x8(%ebp),%eax
084d917c +0x314:  mov    %eax,(%esp)
084d917f +0x317:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d9184 +0x31c:  mov    %eax,-0x24(%ebp)
084d9187 +0x31f:  movl   $0x0,-0x20(%ebp)
084d918e +0x326:  mov    0x8(%ebp),%eax
084d9191 +0x329:  mov    %eax,(%esp)
084d9194 +0x32c:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084d9199 +0x331:  mov    %eax,%ebx
084d919b +0x333:  lea    -0x182(%ebp),%eax
084d91a1 +0x339:  mov    %eax,(%esp)
084d91a4 +0x33c:  call   0807e3b0 <_init+0xca8>
084d91a9 +0x341:  mov    %eax,%esi
084d91ab +0x343:  mov    0x8(%ebp),%eax
084d91ae +0x346:  mov    %eax,(%esp)
084d91b1 +0x349:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d91b6 +0x34e:  mov    -0x28(%ebp),%edx
084d91b9 +0x351:  movl   $0x0,0x24(%esp)
084d91c1 +0x359:  movl   $0x0,0x20(%esp)
084d91c9 +0x361:  mov    %ebx,0x1c(%esp)
084d91cd +0x365:  movl   $0x7,0x18(%esp)
084d91d5 +0x36d:  mov    %esi,0x14(%esp)
084d91d9 +0x371:  lea    -0x182(%ebp),%ecx
084d91df +0x377:  mov    %ecx,0x10(%esp)
084d91e3 +0x37b:  mov    %eax,0xc(%esp)
084d91e7 +0x37f:  mov    %edx,0x8(%esp)
084d91eb +0x383:  lea    -0x82(%ebp),%eax
084d91f1 +0x389:  mov    %eax,0x4(%esp)
084d91f5 +0x38d:  lea    -0x45(%ebp),%eax
084d91f8 +0x390:  mov    %eax,(%esp)
084d91fb +0x393:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084d9200 +0x398:  mov    %eax,-0x20(%ebp)
084d9203 +0x39b:  cmpl   $0x0,-0x20(%ebp)
084d9207 +0x39f:  jne    084d9280 <+0x418>
084d9209 +0x3a1:  mov    0x8(%ebp),%eax
084d920c +0x3a4:  mov    %eax,(%esp)
084d920f +0x3a7:  call   084ec65e <_GLOBAL__I__Z7getUserj+0x3610>  ; global constructors keyed to getUser(unsigned int)+0x3610
084d9214 +0x3ac:  mov    %eax,%edi
084d9216 +0x3ae:  mov    0x8(%ebp),%eax
084d9219 +0x3b1:  mov    %eax,(%esp)
084d921c +0x3b4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084d9221 +0x3b9:  mov    %eax,%esi
084d9223 +0x3bb:  mov    0x8(%ebp),%eax
084d9226 +0x3be:  mov    %eax,(%esp)
084d9229 +0x3c1:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084d922e +0x3c6:  mov    %eax,%ebx
084d9230 +0x3c8:  mov    0x8(%ebp),%eax
084d9233 +0x3cb:  mov    %eax,(%esp)
084d9236 +0x3ce:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
084d923b +0x3d3:  mov    %edi,0xc(%esp)
084d923f +0x3d7:  mov    %esi,0x8(%esp)
084d9243 +0x3db:  mov    %ebx,0x4(%esp)
084d9247 +0x3df:  mov    %eax,(%esp)
084d924a +0x3e2:  call   0843915c <_ZN26DB_LoadBreakAwayRewardData11makeRequestEijjR18STBreakAwayRewards>  ; DB_LoadBreakAwayRewardData::makeRequest(int, unsigned int, unsigned int, STBreakAwayRewards&)
084d924f +0x3e7:  movl   $0x0,0x4(%esp)
084d9257 +0x3ef:  mov    0x8(%ebp),%eax
084d925a +0x3f2:  mov    %eax,(%esp)
084d925d +0x3f5:  call   084ec696 <_GLOBAL__I__Z7getUserj+0x3648>  ; global constructors keyed to getUser(unsigned int)+0x3648
084d9262 +0x3fa:  movl   $0x0,0x4(%esp)
084d926a +0x402:  mov    0x8(%ebp),%eax
084d926d +0x405:  mov    %eax,(%esp)
084d9270 +0x408:  call   084ec6a8 <_GLOBAL__I__Z7getUserj+0x365a>  ; global constructors keyed to getUser(unsigned int)+0x365a
084d9275 +0x40d:  jmp    084d9281 <+0x419>
084d9277 +0x40f:  nop
084d9278 +0x410:  jmp    084d9281 <+0x419>
084d927a +0x412:  nop
084d927b +0x413:  jmp    084d9281 <+0x419>
084d927d +0x415:  nop
084d927e +0x416:  jmp    084d9281 <+0x419>
084d9280 +0x418:  nop
084d9281 +0x419:  add    $0x1ac,%esp
084d9287 +0x41f:  pop    %ebx
084d9288 +0x420:  pop    %esi
084d9289 +0x421:  pop    %edi
084d928a +0x422:  pop    %ebp
084d928b +0x423:  ret
```

## 反编译 C

```c
// Inter_LoadEtc::giveBreakAwayReward @ 0x84d8e68

/* Inter_LoadEtc::giveBreakAwayReward(CUser*) */

void Inter_LoadEtc::giveBreakAwayReward(CUser *param_1)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  CCirculationStatistic *pCVar4;
  CDataManager *this;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  STBreakAwayRewards *pSVar8;
  uint uVar9;
  uint uVar10;
  char local_186 [256];
  Inven_Item local_86;
  undefined1 local_85;
  int local_84;
  char local_49 [21];
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int *local_20;
  
  iVar2 = CUser::getUserBreakAwayRewardLuckPoint(param_1);
  if (iVar2 < 1) {
    CUser::setBreakAwayRewardData(param_1,false);
  }
  local_34 = 0;
  local_30 = 0;
  local_34 = CUser::getBreakAwayRewardItemId(param_1);
  local_30 = CUser::getBreakAwayRewardAItemCnt(param_1);
  if ((local_34 != 0) || (local_30 != 0)) {
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_135",(bool *)0x0);
    strncpy(local_49,pcVar3,0x14);
    iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
    if (iVar2 == 0) {
      pcVar3 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_136",(bool *)0x0);
      strncpy(local_186,pcVar3,0xff);
    }
    else {
      iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
      if (iVar2 == 2) {
        pcVar3 = (char *)RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_142",(bool *)0x0);
        strncpy(local_186,pcVar3,0xff);
      }
      else {
        iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
        if (iVar2 == 4) {
          pcVar3 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_160",(bool *)0x0);
          strncpy(local_186,pcVar3,0xff);
        }
        else {
          iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
          if (iVar2 == 1) {
            pcVar3 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_158",(bool *)0x0);
            strncpy(local_186,pcVar3,0xff);
          }
          else {
            iVar2 = CUser::getBreakAwayRewardItemOrder(param_1);
            if (iVar2 != 3) {
              return;
            }
            pcVar3 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_159",(bool *)0x0);
            strncpy(local_186,pcVar3,0xff);
          }
        }
      }
    }
    Inven_Item::Inven_Item(&local_86);
    iVar1 = local_30;
    iVar2 = local_34;
    local_2c = 0;
    if (local_34 == 0) {
      local_2c = local_30;
      pCVar4 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
      CCirculationStatistic::AddCirculationStatistic(pCVar4,0x10,param_1,iVar1);
    }
    else {
      this = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(this,iVar2);
      if (local_20 == (int *)0x0) {
        return;
      }
      local_84 = local_34;
      local_85 = (**(code **)(*local_20 + 0xc))(local_20);
      (**(code **)(*local_20 + 8))(local_20,&local_86);
      Inven_Item::set_add_info(&local_86,local_30);
    }
    local_28 = CUser::get_acc_id(param_1);
    local_24 = 0;
    uVar5 = CUser::GetServerGroup(param_1);
    sVar6 = strlen(local_186);
    uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_24 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                         (local_49,&local_86,local_2c,uVar7,local_186,sVar6,7,uVar5,0,0);
    if (local_24 == 0) {
      pSVar8 = (STBreakAwayRewards *)CUser::getBreakAwayRewards(param_1);
      uVar9 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar10 = CUser::get_acc_id(param_1);
      iVar2 = CUser::GetUID(param_1);
      DB_LoadBreakAwayRewardData::makeRequest(iVar2,uVar10,uVar9,pSVar8);
      CUser::setBreakAwayRewardItemId(param_1,0);
      CUser::setBreakAwayRewardAItemCnt(param_1,0);
    }
  }
  return;
}
```
