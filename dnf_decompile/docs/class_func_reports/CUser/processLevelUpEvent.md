# processLevelUpEvent

`_ZN5CUser19processLevelUpEventEv`

`CUser::processLevelUpEvent()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869115a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869115a  _ZN5CUser19processLevelUpEventEv
#           CUser::processLevelUpEvent()
# range [0x0869115a, 0x0869126d]
0869115a +0x000:  push   %ebp
0869115b +0x001:  mov    %esp,%ebp
0869115d +0x003:  sub    $0x28,%esp
08691160 +0x006:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08691165 +0x00b:  movl   $0x68,0x4(%esp)
0869116d +0x013:  mov    %eax,(%esp)
08691170 +0x016:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08691175 +0x01b:  mov    (%eax),%edx
08691177 +0x01d:  add    $0x34,%edx
0869117a +0x020:  mov    (%edx),%edx
0869117c +0x022:  movl   $0x0,0x4(%esp)
08691184 +0x02a:  mov    %eax,(%esp)
08691187 +0x02d:  call   *%edx
08691189 +0x02f:  test   %al,%al
0869118b +0x031:  je     086911c5 <+0x6b>
0869118d +0x033:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08691192 +0x038:  movl   $0x68,0x4(%esp)
0869119a +0x040:  mov    %eax,(%esp)
0869119d +0x043:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086911a2 +0x048:  mov    %eax,-0xc(%ebp)
086911a5 +0x04b:  cmpl   $0x0,-0xc(%ebp)
086911a9 +0x04f:  je     086911c5 <+0x6b>
086911ab +0x051:  movl   $0x0,0x8(%esp)
086911b3 +0x059:  mov    0x8(%ebp),%eax
086911b6 +0x05c:  mov    %eax,0x4(%esp)
086911ba +0x060:  mov    -0xc(%ebp),%eax
086911bd +0x063:  mov    %eax,(%esp)
086911c0 +0x066:  call   081b82a4 <_ZN27NewAccountLevelUpEventToJob19processLevelUpToJobER5CUserb>  ; NewAccountLevelUpEventToJob::processLevelUpToJob(CUser&, bool)
086911c5 +0x06b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
086911ca +0x070:  movl   $0x9e,0x4(%esp)
086911d2 +0x078:  mov    %eax,(%esp)
086911d5 +0x07b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
086911da +0x080:  mov    (%eax),%edx
086911dc +0x082:  add    $0x34,%edx
086911df +0x085:  mov    (%edx),%edx
086911e1 +0x087:  movl   $0x0,0x4(%esp)
086911e9 +0x08f:  mov    %eax,(%esp)
086911ec +0x092:  call   *%edx
086911ee +0x094:  test   %al,%al
086911f0 +0x096:  je     08691206 <+0xac>
086911f2 +0x098:  call   08147d68 <_GLOBAL__I__ZN25LevelupSupportEventMangerC2Ev+0x25b>  ; global constructors keyed to LevelupSupportEventManger::LevelupSupportEventManger()+0x25b
086911f7 +0x09d:  mov    0x8(%ebp),%edx
086911fa +0x0a0:  mov    %edx,0x4(%esp)
086911fe +0x0a4:  mov    %eax,(%esp)
08691201 +0x0a7:  call   081471c6 <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser>  ; LevelupSupportEventManger::UpdateEventInfo(CUser*)
08691206 +0x0ac:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0869120b +0x0b1:  movl   $0xa3,0x4(%esp)
08691213 +0x0b9:  mov    %eax,(%esp)
08691216 +0x0bc:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0869121b +0x0c1:  mov    (%eax),%edx
0869121d +0x0c3:  add    $0x34,%edx
08691220 +0x0c6:  mov    (%edx),%edx
08691222 +0x0c8:  movl   $0x0,0x4(%esp)
0869122a +0x0d0:  mov    %eax,(%esp)
0869122d +0x0d3:  call   *%edx
0869122f +0x0d5:  test   %al,%al
08691231 +0x0d7:  je     08691247 <+0xed>
08691233 +0x0d9:  call   081a167c <_GLOBAL__I__ZN4ARAD13ScriptManager10LoadScriptEv+0x142>  ; global constructors keyed to ARAD::ScriptManager::LoadScript()+0x142
08691238 +0x0de:  mov    0x8(%ebp),%edx
0869123b +0x0e1:  mov    %edx,0x4(%esp)
0869123f +0x0e5:  mov    %eax,(%esp)
08691242 +0x0e8:  call   08147880 <_ZN28LevelupSupport2ndEventManger7ProcessEP5CUser>  ; LevelupSupport2ndEventManger::Process(CUser*)
08691247 +0x0ed:  call   0811c9ce <_GLOBAL__I_events+0x1071>  ; global constructors keyed to events+0x1071
0869124c +0x0f2:  movl   $0x0,0xc(%esp)
08691254 +0x0fa:  movl   $0x4,0x8(%esp)
0869125c +0x102:  mov    0x8(%ebp),%edx
0869125f +0x105:  mov    %edx,0x4(%esp)
08691263 +0x109:  mov    %eax,(%esp)
08691266 +0x10c:  call   081672be <_ZN16HeroMissionEvent14processMissionEP5CUserN20HeroMissionCondition9MissionNo1TEj>  ; HeroMissionEvent::processMission(CUser*, HeroMissionCondition::MissionNo::T, unsigned int)
0869126b +0x111:  leave
0869126c +0x112:  ret
0869126d +0x113:  nop
```

## 反编译 C

```c
// CUser::processLevelUpEvent @ 0x869115a

/* CUser::processLevelUpEvent() */

void __thiscall CUser::processLevelUpEvent(CUser *this)

{
  char cVar1;
  int *piVar2;
  NewAccountLevelUpEventToJob *this_00;
  LevelupSupportEventManger *this_01;
  LevelupSupport2ndEventManger *this_02;
  HeroMissionEvent *pHVar3;
  
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x68);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_00 = (NewAccountLevelUpEventToJob *)
              CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x68);
    if (this_00 != (NewAccountLevelUpEventToJob *)0x0) {
      NewAccountLevelUpEventToJob::processLevelUpToJob(this_00,this,false);
    }
  }
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9e);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_01 = (LevelupSupportEventManger *)ARAD::Singleton<LevelupSupportEventManger>::Get();
    LevelupSupportEventManger::UpdateEventInfo(this_01,this);
  }
  piVar2 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa3);
  cVar1 = (**(code **)(*piVar2 + 0x34))(piVar2,0);
  if (cVar1 != '\0') {
    this_02 = (LevelupSupport2ndEventManger *)ARAD::Singleton<LevelupSupport2ndEventManger>::Get();
    LevelupSupport2ndEventManger::Process(this_02,this);
  }
  pHVar3 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
  HeroMissionEvent::processMission(pHVar3,this,4,0);
  return;
}
```
