# dispatch_sig

`_ZN29InterLoadHeroMissionEventData12dispatch_sigEP5CUserPci`

`InterLoadHeroMissionEventData::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `InterLoadHeroMissionEventData` | `0x08161c92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08161c92  _ZN29InterLoadHeroMissionEventData12dispatch_sigEP5CUserPci
#           InterLoadHeroMissionEventData::dispatch_sig(CUser*, char*, int)
# range [0x08161c92, 0x08161d51]
08161c92 +0x00:  push   %ebp
08161c93 +0x01:  mov    %esp,%ebp
08161c95 +0x03:  push   %ebx
08161c96 +0x04:  sub    $0x34,%esp
08161c99 +0x07:  mov    0x10(%ebp),%eax
08161c9c +0x0a:  mov    %eax,-0xc(%ebp)
08161c9f +0x0d:  cmpl   $0x0,-0xc(%ebp)
08161ca3 +0x11:  jne    08161ce2 <+0x50>
08161ca5 +0x13:  movl   $0x5,0xc(%esp)
08161cad +0x1b:  movl   $0x1ff,0x8(%esp)
08161cb5 +0x23:  movl   $&_ZZN29InterLoadHeroMissionEventData12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
08161cbd +0x2b:  lea    -0x1c(%ebp),%eax
08161cc0 +0x2e:  mov    %eax,(%esp)
08161cc3 +0x31:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08161cc8 +0x36:  movl   $"[HeroMission] msg is null.",0x4(%esp)
08161cd0 +0x3e:  lea    -0x1c(%ebp),%eax
08161cd3 +0x41:  mov    %eax,(%esp)
08161cd6 +0x44:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08161cdb +0x49:  mov    $0x200,%eax
08161ce0 +0x4e:  jmp    08161d4c <+0xba>
08161ce2 +0x50:  mov    -0xc(%ebp),%eax
08161ce5 +0x53:  lea    0x4(%eax),%ebx
08161ce8 +0x56:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
08161ced +0x5b:  mov    %ebx,0x8(%esp)
08161cf1 +0x5f:  mov    0xc(%ebp),%edx
08161cf4 +0x62:  mov    %edx,0x4(%esp)
08161cf8 +0x66:  mov    %eax,(%esp)
08161cfb +0x69:  call   08166752 <_ZN16HeroMissionEvent12setEventDataEP5CUserPKc>  ; HeroMissionEvent::setEventData(CUser*, char const*)
08161d00 +0x6e:  mov    0xc(%ebp),%eax
08161d03 +0x71:  mov    %eax,(%esp)
08161d06 +0x74:  call   08162338 <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0x5a6>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0x5a6
08161d0b +0x79:  test   %al,%al
08161d0d +0x7b:  je     08161d33 <+0xa1>
08161d0f +0x7d:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
08161d14 +0x82:  movl   $0x0,0xc(%esp)
08161d1c +0x8a:  movl   $0x5,0x8(%esp)
08161d24 +0x92:  mov    0xc(%ebp),%edx
08161d27 +0x95:  mov    %edx,0x4(%esp)
08161d2b +0x99:  mov    %eax,(%esp)
08161d2e +0x9c:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
08161d33 +0xa1:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
08161d38 +0xa6:  mov    0xc(%ebp),%edx
08161d3b +0xa9:  mov    %edx,0x4(%esp)
08161d3f +0xad:  mov    %eax,(%esp)
08161d42 +0xb0:  call   0816770e <_ZN16HeroMissionEvent15sendMissionDataEP5CUser>  ; HeroMissionEvent::sendMissionData(CUser*)
08161d47 +0xb5:  mov    $0x0,%eax
08161d4c +0xba:  add    $0x34,%esp
08161d4f +0xbd:  pop    %ebx
08161d50 +0xbe:  pop    %ebp
08161d51 +0xbf:  ret
```

## 反编译 C

```c
// InterLoadHeroMissionEventData::dispatch_sig @ 0x8161c92

/* InterLoadHeroMissionEventData::dispatch_sig(CUser*, char*, int) */

undefined4 InterLoadHeroMissionEventData::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  HeroMissionEvent *pHVar3;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_20,
                       "virtual int InterLoadHeroMissionEventData::dispatch_sig(CUser*, char*, int)"
                       ,0x1ff,5);
    cMyTrace::operator()(local_20,"[HeroMission] msg is null.");
    uVar2 = 0x200;
  }
  else {
    pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
    HeroMissionEvent::setEventData(pHVar3,(CUser *)param_2,(char *)(param_3 + 4));
    cVar1 = CUserCharacInfo::IsFirstTimeLogin((CUserCharacInfo *)param_2);
    if (cVar1 != '\0') {
      pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::processMission(pHVar3,param_2,5,0);
    }
    pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
    HeroMissionEvent::sendMissionData(pHVar3,(CUser *)param_2);
    uVar2 = 0;
  }
  return uVar2;
}
```
