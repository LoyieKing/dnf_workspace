# dispatch_sig

`_ZN15Inter_IPGResult12dispatch_sigEP5CUserPci`

`Inter_IPGResult::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_IPGResult` | `0x084ceaee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ceaee  _ZN15Inter_IPGResult12dispatch_sigEP5CUserPci
#           Inter_IPGResult::dispatch_sig(CUser*, char*, int)
# range [0x084ceaee, 0x084ceea1]
084ceaee +0x000:  push   %ebp
084ceaef +0x001:  mov    %esp,%ebp
084ceaf1 +0x003:  push   %edi
084ceaf2 +0x004:  push   %esi
084ceaf3 +0x005:  push   %ebx
084ceaf4 +0x006:  sub    $0x8c,%esp
084ceafa +0x00c:  mov    0x10(%ebp),%eax
084ceafd +0x00f:  movzbl (%eax),%eax
084ceb00 +0x012:  mov    %al,-0x31(%ebp)
084ceb03 +0x015:  cmpb   $0x0,-0x31(%ebp)
084ceb07 +0x019:  jne    084cee08 <+0x31a>
084ceb0d +0x01f:  mov    0x10(%ebp),%eax
084ceb10 +0x022:  add    $0x1,%eax
084ceb13 +0x025:  mov    %eax,-0x20(%ebp)
084ceb16 +0x028:  mov    -0x20(%ebp),%eax
084ceb19 +0x02b:  mov    0x20(%eax),%eax
084ceb1c +0x02e:  mov    %eax,%ebx
084ceb1e +0x030:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084ceb23 +0x035:  movl   $0xa,0x8(%esp)
084ceb2b +0x03d:  mov    %ebx,0x4(%esp)
084ceb2f +0x041:  mov    %eax,(%esp)
084ceb32 +0x044:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084ceb37 +0x049:  mov    %eax,-0x1c(%ebp)
084ceb3a +0x04c:  cmpl   $0x0,-0x1c(%ebp)
084ceb3e +0x050:  jne    084ceb4a <+0x5c>
084ceb40 +0x052:  mov    $0x0,%ebx
084ceb45 +0x057:  jmp    084cee94 <+0x3a6>
084ceb4a +0x05c:  lea    -0x60(%ebp),%eax
084ceb4d +0x05f:  mov    %eax,(%esp)
084ceb50 +0x062:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084ceb55 +0x067:  mov    -0x20(%ebp),%eax
084ceb58 +0x06a:  mov    0x1c(%eax),%eax
084ceb5b +0x06d:  cmp    $0x4,%eax
084ceb5e +0x070:  jne    084ceb78 <+0x8a>
084ceb60 +0x072:  movl   $0x1,0x4(%esp)
084ceb68 +0x07a:  mov    -0x1c(%ebp),%eax
084ceb6b +0x07d:  mov    %eax,(%esp)
084ceb6e +0x080:  call   0865082a <_ZN5CUser12SendCashDataEb>  ; CUser::SendCashData(bool)
084ceb73 +0x085:  jmp    084ceda2 <+0x2b4>
084ceb78 +0x08a:  mov    -0x20(%ebp),%eax
084ceb7b +0x08d:  mov    0x1c(%eax),%eax
084ceb7e +0x090:  cmp    $0x6,%eax
084ceb81 +0x093:  jne    084cec1f <+0x131>
084ceb87 +0x099:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084ceb8c +0x09e:  mov    (%eax),%eax
084ceb8e +0x0a0:  add    $0x2c,%eax
084ceb91 +0x0a3:  mov    (%eax),%ecx
084ceb93 +0x0a5:  mov    &_ZN10GlobalData12s_pIPGHelperE,%eax
084ceb98 +0x0aa:  mov    -0x1c(%ebp),%edx
084ceb9b +0x0ad:  mov    %edx,0x4(%esp)
084ceb9f +0x0b1:  mov    %eax,(%esp)
084ceba2 +0x0b4:  call   *%ecx
084ceba4 +0x0b6:  mov    -0x20(%ebp),%eax
084ceba7 +0x0b9:  add    $0xb3,%eax
084cebac +0x0be:  mov    %eax,-0x70(%ebp)
084cebaf +0x0c1:  mov    -0x20(%ebp),%eax
084cebb2 +0x0c4:  movzbl 0xb1(%eax),%eax
084cebb9 +0x0cb:  movsbl %al,%edi
084cebbc +0x0ce:  mov    -0x20(%ebp),%eax
084cebbf +0x0d1:  add    $0x64,%eax
084cebc2 +0x0d4:  mov    %eax,%esi
084cebc4 +0x0d6:  mov    -0x20(%ebp),%eax
084cebc7 +0x0d9:  add    $0x3c,%eax
084cebca +0x0dc:  mov    %eax,%ebx
084cebcc +0x0de:  movl   $0x0,0xc(%esp)
084cebd4 +0x0e6:  movl   $0x2b65,0x8(%esp)
084cebdc +0x0ee:  movl   $&_ZZN15Inter_IPGResult12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084cebe4 +0x0f6:  lea    -0x54(%ebp),%eax
084cebe7 +0x0f9:  mov    %eax,(%esp)
084cebea +0x0fc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cebef +0x101:  mov    -0x70(%ebp),%eax
084cebf2 +0x104:  mov    %eax,0x14(%esp)
084cebf6 +0x108:  mov    %edi,0x10(%esp)
084cebfa +0x10c:  mov    %esi,0xc(%esp)
084cebfe +0x110:  mov    %ebx,0x8(%esp)
084cec02 +0x114:  movl   $"[Taiwan, Billing] ChargePointQuery Result:%s, %s, %d, %s",0x4(%esp)
084cec0a +0x11c:  lea    -0x54(%ebp),%eax
084cec0d +0x11f:  mov    %eax,(%esp)
084cec10 +0x122:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cec15 +0x127:  mov    $0x0,%ebx
084cec1a +0x12c:  jmp    084cedf8 <+0x30a>
084cec1f +0x131:  mov    -0x20(%ebp),%eax
084cec22 +0x134:  mov    0x1c(%eax),%eax
084cec25 +0x137:  test   %eax,%eax
084cec27 +0x139:  jne    084ceca4 <+0x1b6>
084cec29 +0x13b:  mov    -0x20(%ebp),%eax
084cec2c +0x13e:  movzbl 0x26d(%eax),%eax
084cec33 +0x145:  movzbl %al,%edi
084cec36 +0x148:  mov    -0x20(%ebp),%eax
084cec39 +0x14b:  add    $0x26e,%eax
084cec3e +0x150:  mov    %eax,-0x6c(%ebp)
084cec41 +0x153:  mov    -0x20(%ebp),%eax
084cec44 +0x156:  add    $0x50,%eax
084cec47 +0x159:  mov    %eax,%esi
084cec49 +0x15b:  mov    -0x20(%ebp),%eax
084cec4c +0x15e:  add    $0x28,%eax
084cec4f +0x161:  mov    %eax,%ebx
084cec51 +0x163:  movl   $0x0,0xc(%esp)
084cec59 +0x16b:  movl   $0x2b6e,0x8(%esp)
084cec61 +0x173:  movl   $&_ZZN15Inter_IPGResult12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084cec69 +0x17b:  lea    -0x44(%ebp),%eax
084cec6c +0x17e:  mov    %eax,(%esp)
084cec6f +0x181:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084cec74 +0x186:  mov    %edi,0x14(%esp)
084cec78 +0x18a:  mov    -0x6c(%ebp),%eax
084cec7b +0x18d:  mov    %eax,0x10(%esp)
084cec7f +0x191:  mov    %esi,0xc(%esp)
084cec83 +0x195:  mov    %ebx,0x8(%esp)
084cec87 +0x199:  movl   $"[Taiwan, Billing] ChargeCeraQuery Result:%s, %s, %s, %d",0x4(%esp)
084cec8f +0x1a1:  lea    -0x44(%ebp),%eax
084cec92 +0x1a4:  mov    %eax,(%esp)
084cec95 +0x1a7:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084cec9a +0x1ac:  mov    $0x0,%ebx
084cec9f +0x1b1:  jmp    084cedf8 <+0x30a>
084ceca4 +0x1b6:  movl   $0x43,0x8(%esp)
084cecac +0x1be:  movl   $0x1,0x4(%esp)
084cecb4 +0x1c6:  lea    -0x60(%ebp),%eax
084cecb7 +0x1c9:  mov    %eax,(%esp)
084cecba +0x1cc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084cecbf +0x1d1:  movl   $0x0,0x4(%esp)
084cecc7 +0x1d9:  lea    -0x60(%ebp),%eax
084cecca +0x1dc:  mov    %eax,(%esp)
084ceccd +0x1df:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cecd2 +0x1e4:  movl   $0x0,0x4(%esp)
084cecda +0x1ec:  lea    -0x60(%ebp),%eax
084cecdd +0x1ef:  mov    %eax,(%esp)
084cece0 +0x1f2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084cece5 +0x1f7:  movl   $0x19,0x4(%esp)
084ceced +0x1ff:  lea    -0x60(%ebp),%eax
084cecf0 +0x202:  mov    %eax,(%esp)
084cecf3 +0x205:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084cecf8 +0x20a:  movl   $0x0,0x4(%esp)
084ced00 +0x212:  lea    -0x60(%ebp),%eax
084ced03 +0x215:  mov    %eax,(%esp)
084ced06 +0x218:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ced0b +0x21d:  movl   $0x19,0x4(%esp)
084ced13 +0x225:  lea    -0x60(%ebp),%eax
084ced16 +0x228:  mov    %eax,(%esp)
084ced19 +0x22b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084ced1e +0x230:  movl   $0x0,0x4(%esp)
084ced26 +0x238:  lea    -0x60(%ebp),%eax
084ced29 +0x23b:  mov    %eax,(%esp)
084ced2c +0x23e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ced31 +0x243:  movl   $0x0,0x4(%esp)
084ced39 +0x24b:  lea    -0x60(%ebp),%eax
084ced3c +0x24e:  mov    %eax,(%esp)
084ced3f +0x251:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ced44 +0x256:  movl   $0x0,0x4(%esp)
084ced4c +0x25e:  lea    -0x60(%ebp),%eax
084ced4f +0x261:  mov    %eax,(%esp)
084ced52 +0x264:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ced57 +0x269:  movl   $0x0,0x4(%esp)
084ced5f +0x271:  lea    -0x60(%ebp),%eax
084ced62 +0x274:  mov    %eax,(%esp)
084ced65 +0x277:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ced6a +0x27c:  movl   $0xffffffff,0x4(%esp)
084ced72 +0x284:  lea    -0x60(%ebp),%eax
084ced75 +0x287:  mov    %eax,(%esp)
084ced78 +0x28a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084ced7d +0x28f:  movl   $0x1,0x4(%esp)
084ced85 +0x297:  lea    -0x60(%ebp),%eax
084ced88 +0x29a:  mov    %eax,(%esp)
084ced8b +0x29d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084ced90 +0x2a2:  lea    -0x60(%ebp),%eax
084ced93 +0x2a5:  mov    %eax,0x4(%esp)
084ced97 +0x2a9:  mov    -0x1c(%ebp),%eax
084ced9a +0x2ac:  mov    %eax,(%esp)
084ced9d +0x2af:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084ceda2 +0x2b4:  movl   $"IPG Network Error",0x14(%esp)
084cedaa +0x2bc:  movl   $"IPG ERROR (%s)",0x10(%esp)
084cedb2 +0x2c4:  movl   $0x2b96,0xc(%esp)
084cedba +0x2cc:  movl   $&_ZZN15Inter_IPGResult12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
084cedc2 +0x2d4:  movl   $"InterDispatcher.cpp",0x4(%esp)
084cedca +0x2dc:  movl   $0x1,(%esp)
084cedd1 +0x2e3:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084cedd6 +0x2e8:  mov    $0x0,%ebx
084ceddb +0x2ed:  jmp    084cedf8 <+0x30a>
084ceddd +0x2ef:  mov    %edx,%ebx
084ceddf +0x2f1:  mov    %eax,%esi
084cede1 +0x2f3:  lea    -0x60(%ebp),%eax
084cede4 +0x2f6:  mov    %eax,(%esp)
084cede7 +0x2f9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cedec +0x2fe:  mov    %esi,%eax
084cedee +0x300:  mov    %ebx,%edx
084cedf0 +0x302:  mov    %eax,(%esp)
084cedf3 +0x305:  call   08ae3750 <_Unwind_Resume>
084cedf8 +0x30a:  lea    -0x60(%ebp),%eax
084cedfb +0x30d:  mov    %eax,(%esp)
084cedfe +0x310:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084cee03 +0x315:  jmp    084cee94 <+0x3a6>
084cee08 +0x31a:  mov    0x10(%ebp),%eax
084cee0b +0x31d:  add    $0x1,%eax
084cee0e +0x320:  mov    %eax,-0x30(%ebp)
084cee11 +0x323:  mov    0x10(%ebp),%eax
084cee14 +0x326:  add    $0x2dd,%eax
084cee19 +0x32b:  mov    %eax,-0x2c(%ebp)
084cee1c +0x32e:  mov    -0x30(%ebp),%eax
084cee1f +0x331:  mov    0x20(%eax),%eax
084cee22 +0x334:  mov    %eax,%ebx
084cee24 +0x336:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084cee29 +0x33b:  movl   $0xb,0x8(%esp)
084cee31 +0x343:  mov    %ebx,0x4(%esp)
084cee35 +0x347:  mov    %eax,(%esp)
084cee38 +0x34a:  call   082947a4 <_ZN12CGameManager7getUserEii>  ; CGameManager::getUser(int, int)
084cee3d +0x34f:  mov    %eax,-0x28(%ebp)
084cee40 +0x352:  mov    -0x30(%ebp),%eax
084cee43 +0x355:  mov    0x2d8(%eax),%eax
084cee49 +0x35b:  mov    %eax,-0x24(%ebp)
084cee4c +0x35e:  cmpl   $0x0,-0x28(%ebp)
084cee50 +0x362:  je     084cee7b <+0x38d>
084cee52 +0x364:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%eax
084cee57 +0x369:  mov    -0x24(%ebp),%edx
084cee5a +0x36c:  mov    %edx,0x10(%esp)
084cee5e +0x370:  mov    -0x30(%ebp),%edx
084cee61 +0x373:  mov    %edx,0xc(%esp)
084cee65 +0x377:  mov    -0x2c(%ebp),%edx
084cee68 +0x37a:  mov    %edx,0x8(%esp)
084cee6c +0x37e:  mov    -0x28(%ebp),%edx
084cee6f +0x381:  mov    %edx,0x4(%esp)
084cee73 +0x385:  mov    %eax,(%esp)
084cee76 +0x388:  call   0854c4f6 <_ZN18ItemVendingMachine18ProcessIPGUserDataEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>  ; ItemVendingMachine::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)
084cee7b +0x38d:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084cee80 +0x392:  mov    -0x24(%ebp),%edx
084cee83 +0x395:  mov    %edx,0x4(%esp)
084cee87 +0x399:  mov    %eax,(%esp)
084cee8a +0x39c:  call   0828fb28 <_ZN10StreamPool4FreeEP6Stream>  ; StreamPool::Free(Stream*)
084cee8f +0x3a1:  mov    $0x0,%ebx
084cee94 +0x3a6:  mov    %ebx,%eax
084cee96 +0x3a8:  add    $0x8c,%esp
084cee9c +0x3ae:  pop    %ebx
084cee9d +0x3af:  pop    %esi
084cee9e +0x3b0:  pop    %edi
084cee9f +0x3b1:  pop    %ebp
084ceea0 +0x3b2:  ret
084ceea1 +0x3b3:  nop
```

## 反编译 C

```c
// Inter_IPGResult::dispatch_sig @ 0x84ceaee

/* Inter_IPGResult::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_IPGResult::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  PacketGuard local_64 [12];
  cMyTrace local_58 [16];
  cMyTrace local_48 [19];
  char local_35;
  SIPGData *local_34;
  SIPGData *local_30;
  CUser *local_2c;
  Stream *local_28;
  int local_24;
  CUser *local_20;
  
  local_35 = *(char *)param_3;
  if (local_35 != '\0') {
    local_34 = (SIPGData *)(param_3 + 1);
    local_30 = (SIPGData *)(param_3 + 0x2dd);
    iVar4 = *(int *)(param_3 + 0x21);
    iVar3 = G_CGameManager();
    local_2c = (CUser *)CGameManager::getUser(iVar3,iVar4);
    local_28 = *(Stream **)(local_34 + 0x2d8);
    if (local_2c != (CUser *)0x0) {
      ItemVendingMachine::ProcessIPGUserData
                (GlobalData::s_pItemVendingMachine,local_2c,local_30,local_34,local_28);
    }
    StreamPool::Free(GlobalData::s_stream_pool,local_28);
    return 0;
  }
  local_24 = param_3 + 1;
  iVar4 = *(int *)(param_3 + 0x21);
  iVar3 = G_CGameManager();
  uVar6 = 10;
  local_20 = (CUser *)CGameManager::getUser(iVar3,iVar4);
  if (local_20 == (CUser *)0x0) {
    return 0;
  }
  PacketGuard::PacketGuard(local_64);
  if (*(int *)(local_24 + 0x1c) == 4) {
                    /* try { // try from 084ceb6e to 084cedd5 has its CatchHandler @ 084ceddd */
    CUser::SendCashData(local_20,true);
  }
  else {
    if (*(int *)(local_24 + 0x1c) == 6) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0x2c))(GlobalData::s_pIPGHelper,local_20,uVar6);
      iVar4 = local_24 + 0xb3;
      cVar1 = *(char *)(local_24 + 0xb1);
      iVar3 = local_24 + 100;
      iVar5 = local_24 + 0x3c;
      cMyTrace::cMyTrace(local_58,"virtual int Inter_IPGResult::dispatch_sig(CUser*, char*, int)",
                         0x2b65,0);
      cMyTrace::operator()
                (local_58,"[Taiwan, Billing] ChargePointQuery Result:%s, %s, %d, %s",iVar5,iVar3,
                 (int)cVar1,iVar4);
      goto LAB_084cedf8;
    }
    if (*(int *)(local_24 + 0x1c) == 0) {
      bVar2 = *(byte *)(local_24 + 0x26d);
      iVar4 = local_24 + 0x26e;
      iVar3 = local_24 + 0x50;
      iVar5 = local_24 + 0x28;
      cMyTrace::cMyTrace(local_48,"virtual int Inter_IPGResult::dispatch_sig(CUser*, char*, int)",
                         0x2b6e,0);
      cMyTrace::operator()
                (local_48,"[Taiwan, Billing] ChargeCeraQuery Result:%s, %s, %s, %d",iVar5,iVar3,
                 iVar4,(uint)bVar2);
      goto LAB_084cedf8;
    }
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_64,1,0x43);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_64,0x19);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_64,0x19);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_64,-1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_64,true);
    CUser::Send(local_20,local_64);
  }
  LogManager::logFormat
            (1,"InterDispatcher.cpp","virtual int Inter_IPGResult::dispatch_sig(CUser*, char*, int)"
             ,0x2b96,"IPG ERROR (%s)","IPG Network Error");
LAB_084cedf8:
  PacketGuard::~PacketGuard(local_64);
  return 0;
}
```
