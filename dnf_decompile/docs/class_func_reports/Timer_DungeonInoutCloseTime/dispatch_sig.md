# dispatch_sig

`_ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij`

`Timer_DungeonInoutCloseTime::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_DungeonInoutCloseTime` | `0x0863a1d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0863a1d0  _ZN27Timer_DungeonInoutCloseTime12dispatch_sigEiij
#           Timer_DungeonInoutCloseTime::dispatch_sig(int, int, unsigned int)
# range [0x0863a1d0, 0x0863a42f]
0863a1d0 +0x000:  push   %ebp
0863a1d1 +0x001:  mov    %esp,%ebp
0863a1d3 +0x003:  push   %ebx
0863a1d4 +0x004:  sub    $0xa4,%esp
0863a1da +0x00a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0863a1e1 +0x011:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0863a1e6 +0x016:  mov    %eax,-0x54(%ebp)
0863a1e9 +0x019:  lea    -0x88(%ebp),%eax
0863a1ef +0x01f:  mov    %eax,0x4(%esp)
0863a1f3 +0x023:  lea    -0x54(%ebp),%eax
0863a1f6 +0x026:  mov    %eax,(%esp)
0863a1f9 +0x029:  call   0807e360 <_init+0xc58>
0863a1fe +0x02e:  mov    %eax,-0x1c(%ebp)
0863a201 +0x031:  mov    -0x1c(%ebp),%eax
0863a204 +0x034:  mov    0x8(%eax),%eax
0863a207 +0x037:  mov    %eax,-0x14(%ebp)
0863a20a +0x03a:  mov    -0x1c(%ebp),%eax
0863a20d +0x03d:  mov    0x4(%eax),%eax
0863a210 +0x040:  mov    %eax,-0x10(%ebp)
0863a213 +0x043:  mov    0x14(%ebp),%eax
0863a216 +0x046:  mov    %eax,-0x58(%ebp)
0863a219 +0x049:  mov    -0x58(%ebp),%eax
0863a21c +0x04c:  test   %eax,%eax
0863a21e +0x04e:  jne    0863a22a <+0x5a>
0863a220 +0x050:  mov    $0x0,%eax
0863a225 +0x055:  jmp    0863a42a <+0x25a>
0863a22a +0x05a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863a22f +0x05f:  lea    0x130(%eax),%ecx
0863a235 +0x065:  lea    -0x5c(%ebp),%eax
0863a238 +0x068:  lea    -0x58(%ebp),%edx
0863a23b +0x06b:  mov    %edx,0x8(%esp)
0863a23f +0x06f:  mov    %ecx,0x4(%esp)
0863a243 +0x073:  mov    %eax,(%esp)
0863a246 +0x076:  call   0863d304 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1815>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1815
0863a24b +0x07b:  sub    $0x4,%esp
0863a24e +0x07e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863a253 +0x083:  lea    0x130(%eax),%edx
0863a259 +0x089:  lea    -0x50(%ebp),%eax
0863a25c +0x08c:  mov    %edx,0x4(%esp)
0863a260 +0x090:  mov    %eax,(%esp)
0863a263 +0x093:  call   0863d330 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1841>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1841
0863a268 +0x098:  sub    $0x4,%esp
0863a26b +0x09b:  lea    -0x50(%ebp),%eax
0863a26e +0x09e:  mov    %eax,0x4(%esp)
0863a272 +0x0a2:  lea    -0x5c(%ebp),%eax
0863a275 +0x0a5:  mov    %eax,(%esp)
0863a278 +0x0a8:  call   0863d356 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1867>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1867
0863a27d +0x0ad:  test   %al,%al
0863a27f +0x0af:  je     0863a425 <+0x255>
0863a285 +0x0b5:  mov    -0x14(%ebp),%eax
0863a288 +0x0b8:  lea    0x1(%eax),%edx
0863a28b +0x0bb:  mov    -0x1c(%ebp),%eax
0863a28e +0x0be:  mov    %edx,0x8(%eax)
0863a291 +0x0c1:  lea    -0x5c(%ebp),%eax
0863a294 +0x0c4:  mov    %eax,(%esp)
0863a297 +0x0c7:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
0863a29c +0x0cc:  mov    0xc(%eax),%edx
0863a29f +0x0cf:  mov    -0x1c(%ebp),%eax
0863a2a2 +0x0d2:  mov    %edx,0x4(%eax)
0863a2a5 +0x0d5:  mov    -0x1c(%ebp),%eax
0863a2a8 +0x0d8:  movl   $0x0,(%eax)
0863a2ae +0x0de:  mov    -0x1c(%ebp),%eax
0863a2b1 +0x0e1:  mov    %eax,(%esp)
0863a2b4 +0x0e4:  call   0807e820 <_init+0x1118>
0863a2b9 +0x0e9:  mov    %eax,-0x18(%ebp)
0863a2bc +0x0ec:  mov    -0x54(%ebp),%eax
0863a2bf +0x0ef:  mov    -0x18(%ebp),%edx
0863a2c2 +0x0f2:  mov    %edx,%ecx
0863a2c4 +0x0f4:  sub    %eax,%ecx
0863a2c6 +0x0f6:  mov    %ecx,%eax
0863a2c8 +0x0f8:  mov    %eax,-0xc(%ebp)
0863a2cb +0x0fb:  cmpl   $0x0,-0xc(%ebp)
0863a2cf +0x0ff:  jns    0863a311 <+0x141>
0863a2d1 +0x101:  movl   $0x0,0xc(%esp)
0863a2d9 +0x109:  movl   $0x14a3,0x8(%esp)
0863a2e1 +0x111:  movl   $&_ZZN27Timer_DungeonInoutCloseTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863a2e9 +0x119:  lea    -0x4c(%ebp),%eax
0863a2ec +0x11c:  mov    %eax,(%esp)
0863a2ef +0x11f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863a2f4 +0x124:  movl   $"ULTIMATE_LOG : TIMER OFF!!",0x4(%esp)
0863a2fc +0x12c:  lea    -0x4c(%ebp),%eax
0863a2ff +0x12f:  mov    %eax,(%esp)
0863a302 +0x132:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863a307 +0x137:  mov    $0x0,%eax
0863a30c +0x13c:  jmp    0863a42a <+0x25a>
0863a311 +0x141:  mov    -0x58(%ebp),%eax
0863a314 +0x144:  mov    %eax,%ebx
0863a316 +0x146:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863a31b +0x14b:  mov    %ebx,0x18(%esp)
0863a31f +0x14f:  movl   $0x0,0x14(%esp)
0863a327 +0x157:  mov    -0xc(%ebp),%edx
0863a32a +0x15a:  mov    %edx,0x10(%esp)
0863a32e +0x15e:  movl   $0x93,0xc(%esp)
0863a336 +0x166:  movl   $0x0,0x8(%esp)
0863a33e +0x16e:  movl   $0x2,0x4(%esp)
0863a346 +0x176:  mov    %eax,(%esp)
0863a349 +0x179:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863a34e +0x17e:  movl   $0x0,0xc(%esp)
0863a356 +0x186:  movl   $0x14b1,0x8(%esp)
0863a35e +0x18e:  movl   $&_ZZN27Timer_DungeonInoutCloseTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863a366 +0x196:  lea    -0x3c(%ebp),%eax
0863a369 +0x199:  mov    %eax,(%esp)
0863a36c +0x19c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863a371 +0x1a1:  movl   $"ULTIMATE_LOG : ULTIMATE DUNGEON OPEN TIMER ON!!",0x4(%esp)
0863a379 +0x1a9:  lea    -0x3c(%ebp),%eax
0863a37c +0x1ac:  mov    %eax,(%esp)
0863a37f +0x1af:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863a384 +0x1b4:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863a389 +0x1b9:  mov    %eax,(%esp)
0863a38c +0x1bc:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0863a391 +0x1c1:  xor    $0x1,%eax
0863a394 +0x1c4:  test   %al,%al
0863a396 +0x1c6:  je     0863a3b3 <+0x1e3>
0863a398 +0x1c8:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0863a39d +0x1cd:  mov    %eax,(%esp)
0863a3a0 +0x1d0:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
0863a3a5 +0x1d5:  xor    $0x1,%eax
0863a3a8 +0x1d8:  test   %al,%al
0863a3aa +0x1da:  je     0863a3b3 <+0x1e3>
0863a3ac +0x1dc:  mov    $0x1,%eax
0863a3b1 +0x1e1:  jmp    0863a3b8 <+0x1e8>
0863a3b3 +0x1e3:  mov    $0x0,%eax
0863a3b8 +0x1e8:  test   %al,%al
0863a3ba +0x1ea:  je     0863a425 <+0x255>
0863a3bc +0x1ec:  mov    -0x58(%ebp),%ebx
0863a3bf +0x1ef:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863a3c4 +0x1f4:  add    $0x68,%eax
0863a3c7 +0x1f7:  movl   $0x0,0x8(%esp)
0863a3cf +0x1ff:  mov    %ebx,0x4(%esp)
0863a3d3 +0x203:  mov    %eax,(%esp)
0863a3d6 +0x206:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
0863a3db +0x20b:  mov    -0x58(%ebp),%ebx
0863a3de +0x20e:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863a3e3 +0x213:  mov    %ebx,0x4(%esp)
0863a3e7 +0x217:  mov    %eax,(%esp)
0863a3ea +0x21a:  call   086c8cc4 <_ZN9GameWorld30send_all_dungeon_inout_messageEi>  ; GameWorld::send_all_dungeon_inout_message(int)
0863a3ef +0x21f:  movl   $0x0,0xc(%esp)
0863a3f7 +0x227:  movl   $0x14b8,0x8(%esp)
0863a3ff +0x22f:  movl   $&_ZZN27Timer_DungeonInoutCloseTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863a407 +0x237:  lea    -0x2c(%ebp),%eax
0863a40a +0x23a:  mov    %eax,(%esp)
0863a40d +0x23d:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863a412 +0x242:  movl   $"ULTIMATE_LOG : ULTIMATE DUNGEON CLOSE!!",0x4(%esp)
0863a41a +0x24a:  lea    -0x2c(%ebp),%eax
0863a41d +0x24d:  mov    %eax,(%esp)
0863a420 +0x250:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863a425 +0x255:  mov    $0x1,%eax
0863a42a +0x25a:  mov    -0x4(%ebp),%ebx
0863a42d +0x25d:  leave
0863a42e +0x25e:  ret
0863a42f +0x25f:  nop
```

## 反编译 C

```c
// Timer_DungeonInoutCloseTime::dispatch_sig @ 0x863a1d0

/* Timer_DungeonInoutCloseTime::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DungeonInoutCloseTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  TimerQueue *pTVar4;
  int iVar5;
  GameWorld *this;
  int in_stack_00000010;
  tm local_8c;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> local_60 [4];
  int local_5c;
  int local_58;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_54 [4];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  tm *local_20;
  time_t local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_58 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = localtime_r(&local_58,&local_8c);
  local_18 = local_20->tm_hour;
  local_14 = local_20->tm_min;
  local_5c = in_stack_00000010;
  if (in_stack_00000010 == 0) {
    return 0;
  }
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::find((int *)local_60);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_54);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                    (local_60,(_Rb_tree_iterator *)local_54);
  if (cVar2 != '\0') {
    local_20->tm_hour = local_18 + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_60);
    local_20->tm_min = *(int *)(iVar3 + 0xc);
    local_20->tm_sec = 0;
    local_1c = mktime(local_20);
    iVar3 = local_5c;
    local_10 = local_1c - local_58;
    if (local_10 < 0) {
      cMyTrace::cMyTrace(local_50,
                         "virtual bool Timer_DungeonInoutCloseTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x14a3,0);
      cMyTrace::operator()(local_50,"ULTIMATE_LOG : TIMER OFF!!");
      return 0;
    }
    pTVar4 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar4,2,0,0x93,local_10,0,iVar3);
    cMyTrace::cMyTrace(local_40,
                       "virtual bool Timer_DungeonInoutCloseTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x14b1,0);
    cMyTrace::operator()(local_40,"ULTIMATE_LOG : ULTIMATE DUNGEON OPEN TIMER ON!!");
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\x01') ||
       (cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr),
       cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar3 = local_5c;
    if (bVar1) {
      iVar5 = G_CDataManager();
      ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar5 + 0x68),iVar3,false);
      this = (GameWorld *)G_GameWorld();
      GameWorld::send_all_dungeon_inout_message(this,local_5c);
      cMyTrace::cMyTrace(local_30,
                         "virtual bool Timer_DungeonInoutCloseTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x14b8,0);
      cMyTrace::operator()(local_30,"ULTIMATE_LOG : ULTIMATE DUNGEON CLOSE!!");
    }
  }
  return 1;
}
```
