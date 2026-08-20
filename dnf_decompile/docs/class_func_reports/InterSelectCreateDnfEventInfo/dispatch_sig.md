# dispatch_sig

`_ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci`

`InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterSelectCreateDnfEventInfo` | `0x08160d5e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08160d5e  _ZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPci
#           InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int)
# range [0x08160d5e, 0x08160ef5]
08160d5e +0x000:  push   %ebp
08160d5f +0x001:  mov    %esp,%ebp
08160d61 +0x003:  push   %ebx
08160d62 +0x004:  sub    $0x34,%esp
08160d65 +0x007:  mov    0x10(%ebp),%eax
08160d68 +0x00a:  mov    %eax,-0x10(%ebp)
08160d6b +0x00d:  cmpl   $0x0,-0x10(%ebp)
08160d6f +0x011:  jne    08160da7 <+0x49>
08160d71 +0x013:  movl   $"[Taiwan, Event] interMsg is null.",0x10(%esp)
08160d79 +0x01b:  movl   $0xfd,0xc(%esp)
08160d81 +0x023:  movl   $&_ZZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08160d89 +0x02b:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08160d91 +0x033:  movl   $0x1,(%esp)
08160d98 +0x03a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08160d9d +0x03f:  mov    $0xfe,%eax
08160da2 +0x044:  jmp    08160eef <+0x191>
08160da7 +0x049:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08160dac +0x04e:  movl   $0xa0,0x4(%esp)
08160db4 +0x056:  mov    %eax,(%esp)
08160db7 +0x059:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08160dbc +0x05e:  mov    %eax,-0xc(%ebp)
08160dbf +0x061:  cmpl   $0x0,-0xc(%ebp)
08160dc3 +0x065:  je     08160de6 <+0x88>
08160dc5 +0x067:  mov    -0xc(%ebp),%eax
08160dc8 +0x06a:  mov    (%eax),%eax
08160dca +0x06c:  add    $0x34,%eax
08160dcd +0x06f:  mov    (%eax),%edx
08160dcf +0x071:  mov    -0xc(%ebp),%eax
08160dd2 +0x074:  movl   $0x0,0x4(%esp)
08160dda +0x07c:  mov    %eax,(%esp)
08160ddd +0x07f:  call   *%edx
08160ddf +0x081:  xor    $0x1,%eax
08160de2 +0x084:  test   %al,%al
08160de4 +0x086:  je     08160ded <+0x8f>
08160de6 +0x088:  mov    $0x1,%eax
08160deb +0x08d:  jmp    08160df2 <+0x94>
08160ded +0x08f:  mov    $0x0,%eax
08160df2 +0x094:  test   %al,%al
08160df4 +0x096:  je     08160e63 <+0x105>
08160df6 +0x098:  mov    -0xc(%ebp),%eax
08160df9 +0x09b:  mov    (%eax),%eax
08160dfb +0x09d:  add    $0x34,%eax
08160dfe +0x0a0:  mov    (%eax),%edx
08160e00 +0x0a2:  mov    -0xc(%ebp),%eax
08160e03 +0x0a5:  movl   $0x0,0x4(%esp)
08160e0b +0x0ad:  mov    %eax,(%esp)
08160e0e +0x0b0:  call   *%edx
08160e10 +0x0b2:  movzbl %al,%edx
08160e13 +0x0b5:  cmpl   $0x0,-0xc(%ebp)
08160e17 +0x0b9:  jne    08160e20 <+0xc2>
08160e19 +0x0bb:  mov    $"nullptr",%eax
08160e1e +0x0c0:  jmp    08160e25 <+0xc7>
08160e20 +0x0c2:  mov    $"ok",%eax
08160e25 +0x0c7:  mov    %edx,0x18(%esp)
08160e29 +0x0cb:  mov    %eax,0x14(%esp)
08160e2d +0x0cf:  movl   $"[Taiwan, Event] stayEvent=%s eventing:%d",0x10(%esp)
08160e35 +0x0d7:  movl   $0x107,0xc(%esp)
08160e3d +0x0df:  movl   $&_ZZN29InterSelectCreateDnfEventInfo12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x8(%esp)
08160e45 +0x0e7:  movl   $"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",0x4(%esp)
08160e4d +0x0ef:  movl   $0x1,(%esp)
08160e54 +0x0f6:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08160e59 +0x0fb:  mov    $0x108,%eax
08160e5e +0x100:  jmp    08160eef <+0x191>
08160e63 +0x105:  mov    -0x10(%ebp),%eax
08160e66 +0x108:  mov    (%eax),%eax
08160e68 +0x10a:  test   %eax,%eax
08160e6a +0x10c:  jns    08160e7f <+0x121>
08160e6c +0x10e:  mov    -0xc(%ebp),%eax
08160e6f +0x111:  mov    %eax,(%esp)
08160e72 +0x114:  call   08164260 <_ZN15CEventCreateDnf7GetRateEv>  ; CEventCreateDnf::GetRate()
08160e77 +0x119:  movzwl %ax,%edx
08160e7a +0x11c:  mov    -0x10(%ebp),%eax
08160e7d +0x11f:  mov    %edx,(%eax)
08160e7f +0x121:  mov    -0x10(%ebp),%eax
08160e82 +0x124:  mov    0x8(%eax),%ecx
08160e85 +0x127:  mov    -0x10(%ebp),%eax
08160e88 +0x12a:  mov    (%eax),%edx
08160e8a +0x12c:  mov    -0x10(%ebp),%eax
08160e8d +0x12f:  mov    0x4(%eax),%eax
08160e90 +0x132:  mov    %ecx,0xc(%esp)
08160e94 +0x136:  mov    %edx,0x8(%esp)
08160e98 +0x13a:  mov    %eax,0x4(%esp)
08160e9c +0x13e:  mov    -0xc(%ebp),%eax
08160e9f +0x141:  mov    %eax,(%esp)
08160ea2 +0x144:  call   081640d4 <_ZN15CEventCreateDnf12SetEventInfoEiii>  ; CEventCreateDnf::SetEventInfo(int, int, int)
08160ea7 +0x149:  mov    -0xc(%ebp),%eax
08160eaa +0x14c:  mov    %eax,(%esp)
08160ead +0x14f:  call   08164092 <_ZN15CEventCreateDnf17IsRewardConditionEv>  ; CEventCreateDnf::IsRewardCondition()
08160eb2 +0x154:  movzbl %al,%ebx
08160eb5 +0x157:  mov    -0xc(%ebp),%eax
08160eb8 +0x15a:  mov    %eax,(%esp)
08160ebb +0x15d:  call   08164260 <_ZN15CEventCreateDnf7GetRateEv>  ; CEventCreateDnf::GetRate()
08160ec0 +0x162:  movzwl %ax,%eax
08160ec3 +0x165:  mov    %ebx,0x8(%esp)
08160ec7 +0x169:  mov    %eax,0x4(%esp)
08160ecb +0x16d:  lea    -0x14(%ebp),%eax
08160ece +0x170:  mov    %eax,(%esp)
08160ed1 +0x173:  call   08160c4a <_ZN29InterSelectCreateDnfEventInfo6RewardC1Eib>  ; InterSelectCreateDnfEventInfo::Reward::Reward(int, bool)
08160ed6 +0x178:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08160edb +0x17d:  mov    -0x14(%ebp),%edx
08160ede +0x180:  mov    %edx,0x4(%esp)
08160ee2 +0x184:  mov    %eax,(%esp)
08160ee5 +0x187:  call   0816270c <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x97a>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x97a
08160eea +0x18c:  mov    $0x0,%eax
08160eef +0x191:  add    $0x34,%esp
08160ef2 +0x194:  pop    %ebx
08160ef3 +0x195:  pop    %ebp
08160ef4 +0x196:  ret
08160ef5 +0x197:  nop
```

## 反编译 C

```c
// InterSelectCreateDnfEventInfo::dispatch_sig @ 0x8160d5e

/* InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int) */

undefined4 InterSelectCreateDnfEventInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 local_18;
  uint *local_14;
  CEventCreateDnf *local_10;
  
  local_14 = (uint *)param_3;
  if (param_3 != 0) {
    local_10 = (CEventCreateDnf *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa0);
    if ((local_10 == (CEventCreateDnf *)0x0) ||
       (cVar1 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0), cVar1 != '\x01')) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)local_10 + 0x34))(local_10,0);
      if (local_10 == (CEventCreateDnf *)0x0) {
        pcVar4 = "nullptr";
      }
      else {
        pcVar4 = "ok";
      }
      LogManager::logFormat
                (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
                 "virtual int InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int)",0x107
                 ,"[Taiwan, Event] stayEvent=%s eventing:%d",pcVar4,uVar3 & 0xff);
      uVar5 = 0x108;
    }
    else {
      if ((int)*local_14 < 0) {
        uVar3 = CEventCreateDnf::GetRate(local_10);
        *local_14 = uVar3 & 0xffff;
      }
      CEventCreateDnf::SetEventInfo(local_10,local_14[1],*local_14,local_14[2]);
      bVar2 = (bool)CEventCreateDnf::IsRewardCondition(local_10);
      uVar3 = CEventCreateDnf::GetRate(local_10);
      Reward::Reward((Reward *)&local_18,uVar3 & 0xffff,bVar2);
      uVar5 = G_GameWorld();
      GameWorld::ProcessAllUsers<InterSelectCreateDnfEventInfo::Reward>(uVar5,local_18);
      uVar5 = 0;
    }
    return uVar5;
  }
  LogManager::logFormat
            (1,"localtaiwan/Dispatcher/Taiwan_InterDispatcher.cpp",
             "virtual int InterSelectCreateDnfEventInfo::dispatch_sig(CUser*, char*, int)",0xfd,
             "[Taiwan, Event] interMsg is null.");
  return 0xfe;
}
```
