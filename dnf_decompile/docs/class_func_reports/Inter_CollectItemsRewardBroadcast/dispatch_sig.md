# dispatch_sig

`_ZN33Inter_CollectItemsRewardBroadcast12dispatch_sigEP5CUserPci`

`Inter_CollectItemsRewardBroadcast::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CollectItemsRewardBroadcast` | `0x084e7598` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e7598  _ZN33Inter_CollectItemsRewardBroadcast12dispatch_sigEP5CUserPci
#           Inter_CollectItemsRewardBroadcast::dispatch_sig(CUser*, char*, int)
# range [0x084e7598, 0x084e770b]
084e7598 +0x000:  push   %ebp
084e7599 +0x001:  mov    %esp,%ebp
084e759b +0x003:  push   %esi
084e759c +0x004:  push   %ebx
084e759d +0x005:  sub    $0x30,%esp
084e75a0 +0x008:  mov    0x10(%ebp),%eax
084e75a3 +0x00b:  mov    %eax,-0xc(%ebp)
084e75a6 +0x00e:  lea    -0x18(%ebp),%eax
084e75a9 +0x011:  mov    %eax,(%esp)
084e75ac +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e75b1 +0x019:  movl   $0x56,0x8(%esp)
084e75b9 +0x021:  movl   $0x0,0x4(%esp)
084e75c1 +0x029:  lea    -0x18(%ebp),%eax
084e75c4 +0x02c:  mov    %eax,(%esp)
084e75c7 +0x02f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e75cc +0x034:  movl   $0xb,0x4(%esp)
084e75d4 +0x03c:  lea    -0x18(%ebp),%eax
084e75d7 +0x03f:  mov    %eax,(%esp)
084e75da +0x042:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e75df +0x047:  mov    -0xc(%ebp),%eax
084e75e2 +0x04a:  movzbl 0x12(%eax),%eax
084e75e6 +0x04e:  movzbl %al,%eax
084e75e9 +0x051:  mov    %eax,0x4(%esp)
084e75ed +0x055:  lea    -0x18(%ebp),%eax
084e75f0 +0x058:  mov    %eax,(%esp)
084e75f3 +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e75f8 +0x060:  mov    -0xc(%ebp),%eax
084e75fb +0x063:  movzbl 0x12(%eax),%eax
084e75ff +0x067:  movzbl %al,%eax
084e7602 +0x06a:  cmp    $0x2,%eax
084e7605 +0x06d:  jne    084e7659 <+0xc1>
084e7607 +0x06f:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084e760c +0x074:  movl   $0x64,0x4(%esp)
084e7614 +0x07c:  mov    %eax,(%esp)
084e7617 +0x07f:  call   084ed4a4 <_GLOBAL__I__Z7getUserj+0x4456>  ; global constructors keyed to getUser(unsigned int)+0x4456
084e761c +0x084:  lea    -0x1c(%ebp),%eax
084e761f +0x087:  mov    %eax,(%esp)
084e7622 +0x08a:  call   084f0886 <_GLOBAL__I__Z7getUserj+0x7838>  ; global constructors keyed to getUser(unsigned int)+0x7838
084e7627 +0x08f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e762c +0x094:  lea    -0x1c(%ebp),%edx
084e762f +0x097:  mov    %edx,0x4(%esp)
084e7633 +0x09b:  mov    %eax,(%esp)
084e7636 +0x09e:  call   086c9308 <_ZN9GameWorld11modify_userEP13CUserModifier>  ; GameWorld::modify_user(CUserModifier*)
084e763b +0x0a3:  mov    &_ZN10GlobalData11s_timeGate_E,%eax
084e7640 +0x0a8:  mov    %eax,(%esp)
084e7643 +0x0ab:  call   084ed498 <_GLOBAL__I__Z7getUserj+0x444a>  ; global constructors keyed to getUser(unsigned int)+0x444a
084e7648 +0x0b0:  mov    %eax,0x4(%esp)
084e764c +0x0b4:  lea    -0x18(%ebp),%eax
084e764f +0x0b7:  mov    %eax,(%esp)
084e7652 +0x0ba:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e7657 +0x0bf:  jmp    084e766c <+0xd4>
084e7659 +0x0c1:  movl   $0x0,0x4(%esp)
084e7661 +0x0c9:  lea    -0x18(%ebp),%eax
084e7664 +0x0cc:  mov    %eax,(%esp)
084e7667 +0x0cf:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e766c +0x0d4:  mov    -0xc(%ebp),%eax
084e766f +0x0d7:  add    $0x14,%eax
084e7672 +0x0da:  mov    %eax,(%esp)
084e7675 +0x0dd:  call   0807e3b0 <_init+0xca8>
084e767a +0x0e2:  mov    %eax,0x4(%esp)
084e767e +0x0e6:  lea    -0x18(%ebp),%eax
084e7681 +0x0e9:  mov    %eax,(%esp)
084e7684 +0x0ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e7689 +0x0f1:  mov    -0xc(%ebp),%eax
084e768c +0x0f4:  add    $0x14,%eax
084e768f +0x0f7:  mov    %eax,(%esp)
084e7692 +0x0fa:  call   0807e3b0 <_init+0xca8>
084e7697 +0x0ff:  mov    -0xc(%ebp),%edx
084e769a +0x102:  add    $0x14,%edx
084e769d +0x105:  mov    %eax,0x8(%esp)
084e76a1 +0x109:  mov    %edx,0x4(%esp)
084e76a5 +0x10d:  lea    -0x18(%ebp),%eax
084e76a8 +0x110:  mov    %eax,(%esp)
084e76ab +0x113:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e76b0 +0x118:  movl   $0x1,0x4(%esp)
084e76b8 +0x120:  lea    -0x18(%ebp),%eax
084e76bb +0x123:  mov    %eax,(%esp)
084e76be +0x126:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e76c3 +0x12b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e76c8 +0x130:  lea    -0x18(%ebp),%edx
084e76cb +0x133:  mov    %edx,0x4(%esp)
084e76cf +0x137:  mov    %eax,(%esp)
084e76d2 +0x13a:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
084e76d7 +0x13f:  mov    $0x0,%ebx
084e76dc +0x144:  lea    -0x18(%ebp),%eax
084e76df +0x147:  mov    %eax,(%esp)
084e76e2 +0x14a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e76e7 +0x14f:  mov    %ebx,%eax
084e76e9 +0x151:  add    $0x30,%esp
084e76ec +0x154:  pop    %ebx
084e76ed +0x155:  pop    %esi
084e76ee +0x156:  pop    %ebp
084e76ef +0x157:  ret
084e76f0 +0x158:  mov    %edx,%ebx
084e76f2 +0x15a:  mov    %eax,%esi
084e76f4 +0x15c:  lea    -0x18(%ebp),%eax
084e76f7 +0x15f:  mov    %eax,(%esp)
084e76fa +0x162:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e76ff +0x167:  mov    %esi,%eax
084e7701 +0x169:  mov    %ebx,%edx
084e7703 +0x16b:  mov    %eax,(%esp)
084e7706 +0x16e:  call   08ae3750 <_Unwind_Resume>
084e770b +0x173:  nop
```

## 反编译 C

```c
// Inter_CollectItemsRewardBroadcast::dispatch_sig @ 0x84e7598

/* Inter_CollectItemsRewardBroadcast::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CollectItemsRewardBroadcast::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *pGVar1;
  int iVar2;
  size_t sVar3;
  CUserResetTimeGateQuest local_20 [4];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e75c7 to 084e76d6 has its CatchHandler @ 084e76f0 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
  if (*(char *)(local_10 + 0x12) == '\x02') {
    CTimeGate::SetLevel(GlobalData::s_timeGate_,100);
    CUserResetTimeGateQuest::CUserResetTimeGateQuest(local_20);
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::modify_user(pGVar1,(CUserModifier *)local_20);
    iVar2 = CTimeGate::getNpcIndex(GlobalData::s_timeGate_);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
  }
  else {
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,0);
  }
  sVar3 = strlen((char *)(local_10 + 0x14));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar3);
  sVar3 = strlen((char *)(local_10 + 0x14));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0x14),sVar3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  pGVar1 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(pGVar1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}
```
