# dispatch_sig

`_ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci`

`Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_OnTimeEventRewardEnd` | `0x084e1062` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e1062  _ZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPci
#           Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int)
# range [0x084e1062, 0x084e11eb]
084e1062 +0x000:  push   %ebp
084e1063 +0x001:  mov    %esp,%ebp
084e1065 +0x003:  push   %esi
084e1066 +0x004:  push   %ebx
084e1067 +0x005:  sub    $0x50,%esp
084e106a +0x008:  mov    0x10(%ebp),%eax
084e106d +0x00b:  mov    %eax,-0x10(%ebp)
084e1070 +0x00e:  movl   $0x0,0xc(%esp)
084e1078 +0x016:  movl   $0x500c,0x8(%esp)
084e1080 +0x01e:  movl   $&_ZZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e1088 +0x026:  lea    -0x30(%ebp),%eax
084e108b +0x029:  mov    %eax,(%esp)
084e108e +0x02c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e1093 +0x031:  movl   $"[ON_TIME_EVENT] Reward End",0x4(%esp)
084e109b +0x039:  lea    -0x30(%ebp),%eax
084e109e +0x03c:  mov    %eax,(%esp)
084e10a1 +0x03f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e10a6 +0x044:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084e10ab +0x049:  movl   $0x33,0x4(%esp)
084e10b3 +0x051:  mov    %eax,(%esp)
084e10b6 +0x054:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084e10bb +0x059:  mov    %eax,-0xc(%ebp)
084e10be +0x05c:  cmpl   $0x0,-0xc(%ebp)
084e10c2 +0x060:  je     084e10e9 <+0x87>
084e10c4 +0x062:  mov    -0xc(%ebp),%eax
084e10c7 +0x065:  mov    (%eax),%eax
084e10c9 +0x067:  add    $0x34,%eax
084e10cc +0x06a:  mov    (%eax),%edx
084e10ce +0x06c:  mov    -0xc(%ebp),%eax
084e10d1 +0x06f:  movl   $0x0,0x4(%esp)
084e10d9 +0x077:  mov    %eax,(%esp)
084e10dc +0x07a:  call   *%edx
084e10de +0x07c:  test   %al,%al
084e10e0 +0x07e:  je     084e10e9 <+0x87>
084e10e2 +0x080:  mov    $0x1,%eax
084e10e7 +0x085:  jmp    084e10ee <+0x8c>
084e10e9 +0x087:  mov    $0x0,%eax
084e10ee +0x08c:  test   %al,%al
084e10f0 +0x08e:  je     084e1120 <+0xbe>
084e10f2 +0x090:  movl   $0x1,0x4(%esp)
084e10fa +0x098:  mov    -0xc(%ebp),%eax
084e10fd +0x09b:  mov    %eax,(%esp)
084e1100 +0x09e:  call   081bb978 <_ZN12COnTimeEvent16set_reward_stateEi>  ; COnTimeEvent::set_reward_state(int)
084e1105 +0x0a3:  mov    -0xc(%ebp),%eax
084e1108 +0x0a6:  mov    %eax,(%esp)
084e110b +0x0a9:  call   081bb9c6 <_ZN12COnTimeEvent28get_ontime_reward_user_countEv>  ; COnTimeEvent::get_ontime_reward_user_count()
084e1110 +0x0ae:  test   %eax,%eax
084e1112 +0x0b0:  setne  %al
084e1115 +0x0b3:  test   %al,%al
084e1117 +0x0b5:  je     084e1160 <+0xfe>
084e1119 +0x0b7:  call   0863ab4c <_ZN24Timer_Send_Ontime_Reward15RegistNextTimerEv>  ; Timer_Send_Ontime_Reward::RegistNextTimer()
084e111e +0x0bc:  jmp    084e1160 <+0xfe>
084e1120 +0x0be:  movl   $0x5,0xc(%esp)
084e1128 +0x0c6:  movl   $0x501b,0x8(%esp)
084e1130 +0x0ce:  movl   $&_ZZN26Inter_OnTimeEventRewardEnd12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e1138 +0x0d6:  lea    -0x20(%ebp),%eax
084e113b +0x0d9:  mov    %eax,(%esp)
084e113e +0x0dc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e1143 +0x0e1:  movl   $"[ON_TIME_EVENT] Inter_OnTimeEventRewardEnd() error",0x4(%esp)
084e114b +0x0e9:  lea    -0x20(%ebp),%eax
084e114e +0x0ec:  mov    %eax,(%esp)
084e1151 +0x0ef:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e1156 +0x0f4:  mov    $0x0,%ebx
084e115b +0x0f9:  jmp    084e11e2 <+0x180>
084e1160 +0x0fe:  lea    -0x3c(%ebp),%eax
084e1163 +0x101:  mov    %eax,(%esp)
084e1166 +0x104:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e116b +0x109:  movl   $0x106,0x8(%esp)
084e1173 +0x111:  movl   $0x0,0x4(%esp)
084e117b +0x119:  lea    -0x3c(%ebp),%eax
084e117e +0x11c:  mov    %eax,(%esp)
084e1181 +0x11f:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e1186 +0x124:  movl   $0x1,0x4(%esp)
084e118e +0x12c:  lea    -0x3c(%ebp),%eax
084e1191 +0x12f:  mov    %eax,(%esp)
084e1194 +0x132:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e1199 +0x137:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e119e +0x13c:  movl   $0x3,0x8(%esp)
084e11a6 +0x144:  lea    -0x3c(%ebp),%edx
084e11a9 +0x147:  mov    %edx,0x4(%esp)
084e11ad +0x14b:  mov    %eax,(%esp)
084e11b0 +0x14e:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
084e11b5 +0x153:  mov    $0x0,%ebx
084e11ba +0x158:  lea    -0x3c(%ebp),%eax
084e11bd +0x15b:  mov    %eax,(%esp)
084e11c0 +0x15e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e11c5 +0x163:  jmp    084e11e2 <+0x180>
084e11c7 +0x165:  mov    %edx,%ebx
084e11c9 +0x167:  mov    %eax,%esi
084e11cb +0x169:  lea    -0x3c(%ebp),%eax
084e11ce +0x16c:  mov    %eax,(%esp)
084e11d1 +0x16f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e11d6 +0x174:  mov    %esi,%eax
084e11d8 +0x176:  mov    %ebx,%edx
084e11da +0x178:  mov    %eax,(%esp)
084e11dd +0x17b:  call   08ae3750 <_Unwind_Resume>
084e11e2 +0x180:  mov    %ebx,%eax
084e11e4 +0x182:  add    $0x50,%esp
084e11e7 +0x185:  pop    %ebx
084e11e8 +0x186:  pop    %esi
084e11e9 +0x187:  pop    %ebp
084e11ea +0x188:  ret
084e11eb +0x189:  nop
```

## 反编译 C

```c
// Inter_OnTimeEventRewardEnd::dispatch_sig @ 0x84e1062

/* Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_OnTimeEventRewardEnd::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *this;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  COnTimeEvent *local_10;
  
  local_14 = param_3;
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int)",
                     0x500c,0);
  cMyTrace::operator()(local_34,"[ON_TIME_EVENT] Reward End");
  local_10 = (COnTimeEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x33);
  if (local_10 != (COnTimeEvent *)0x0) {
    cVar2 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_084e10ee;
    }
  }
  bVar1 = false;
LAB_084e10ee:
  if (bVar1) {
    COnTimeEvent::set_reward_state(local_10,1);
    iVar3 = COnTimeEvent::get_ontime_reward_user_count(local_10);
    if (iVar3 != 0) {
      Timer_Send_Ontime_Reward::RegistNextTimer();
    }
    PacketGuard::PacketGuard(local_40);
                    /* try { // try from 084e1181 to 084e11b4 has its CatchHandler @ 084e11c7 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0x106);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all_with_state(this,local_40,3);
    PacketGuard::~PacketGuard(local_40);
  }
  else {
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_OnTimeEventRewardEnd::dispatch_sig(CUser*, char*, int)",
                       0x501b,5);
    cMyTrace::operator()(local_24,"[ON_TIME_EVENT] Inter_OnTimeEventRewardEnd() error");
  }
  return 0;
}
```
