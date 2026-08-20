# dispatch_sig

`_ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij`

`Timer_DungeonInoutOpenTime::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_DungeonInoutOpenTime` | `0x08639e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639e0a  _ZN26Timer_DungeonInoutOpenTime12dispatch_sigEiij
#           Timer_DungeonInoutOpenTime::dispatch_sig(int, int, unsigned int)
# range [0x08639e0a, 0x0863a1cf]
08639e0a +0x000:  push   %ebp
08639e0b +0x001:  mov    %esp,%ebp
08639e0d +0x003:  push   %ebx
08639e0e +0x004:  sub    $0xd4,%esp
08639e14 +0x00a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08639e1b +0x011:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08639e20 +0x016:  mov    %eax,-0x78(%ebp)
08639e23 +0x019:  lea    -0xac(%ebp),%eax
08639e29 +0x01f:  mov    %eax,0x4(%esp)
08639e2d +0x023:  lea    -0x78(%ebp),%eax
08639e30 +0x026:  mov    %eax,(%esp)
08639e33 +0x029:  call   0807e360 <_init+0xc58>
08639e38 +0x02e:  mov    %eax,-0x20(%ebp)
08639e3b +0x031:  mov    -0x20(%ebp),%eax
08639e3e +0x034:  mov    0x8(%eax),%eax
08639e41 +0x037:  mov    %eax,-0x18(%ebp)
08639e44 +0x03a:  mov    -0x20(%ebp),%eax
08639e47 +0x03d:  mov    0x4(%eax),%eax
08639e4a +0x040:  mov    %eax,-0x14(%ebp)
08639e4d +0x043:  mov    0x14(%ebp),%eax
08639e50 +0x046:  mov    %eax,-0x7c(%ebp)
08639e53 +0x049:  mov    -0x7c(%ebp),%eax
08639e56 +0x04c:  test   %eax,%eax
08639e58 +0x04e:  jne    08639e64 <+0x5a>
08639e5a +0x050:  mov    $0x0,%eax
08639e5f +0x055:  jmp    0863a1ca <+0x3c0>
08639e64 +0x05a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08639e69 +0x05f:  lea    0x130(%eax),%ecx
08639e6f +0x065:  lea    -0x80(%ebp),%eax
08639e72 +0x068:  lea    -0x7c(%ebp),%edx
08639e75 +0x06b:  mov    %edx,0x8(%esp)
08639e79 +0x06f:  mov    %ecx,0x4(%esp)
08639e7d +0x073:  mov    %eax,(%esp)
08639e80 +0x076:  call   0863d304 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1815>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1815
08639e85 +0x07b:  sub    $0x4,%esp
08639e88 +0x07e:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08639e8d +0x083:  lea    0x130(%eax),%edx
08639e93 +0x089:  lea    -0x74(%ebp),%eax
08639e96 +0x08c:  mov    %edx,0x4(%esp)
08639e9a +0x090:  mov    %eax,(%esp)
08639e9d +0x093:  call   0863d330 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1841>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1841
08639ea2 +0x098:  sub    $0x4,%esp
08639ea5 +0x09b:  lea    -0x74(%ebp),%eax
08639ea8 +0x09e:  mov    %eax,0x4(%esp)
08639eac +0x0a2:  lea    -0x80(%ebp),%eax
08639eaf +0x0a5:  mov    %eax,(%esp)
08639eb2 +0x0a8:  call   0863d356 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x1867>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x1867
08639eb7 +0x0ad:  test   %al,%al
08639eb9 +0x0af:  je     0863a1c5 <+0x3bb>
08639ebf +0x0b5:  lea    -0x80(%ebp),%eax
08639ec2 +0x0b8:  mov    %eax,(%esp)
08639ec5 +0x0bb:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639eca +0x0c0:  mov    0x8(%eax),%eax
08639ecd +0x0c3:  cmp    -0x18(%ebp),%eax
08639ed0 +0x0c6:  setl   %al
08639ed3 +0x0c9:  test   %al,%al
08639ed5 +0x0cb:  je     08639ff3 <+0x1e9>
08639edb +0x0d1:  lea    -0x80(%ebp),%eax
08639ede +0x0d4:  mov    %eax,(%esp)
08639ee1 +0x0d7:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639ee6 +0x0dc:  mov    0x4(%eax),%edx
08639ee9 +0x0df:  mov    -0x20(%ebp),%eax
08639eec +0x0e2:  mov    %edx,0x8(%eax)
08639eef +0x0e5:  lea    -0x80(%ebp),%eax
08639ef2 +0x0e8:  mov    %eax,(%esp)
08639ef5 +0x0eb:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
08639efa +0x0f0:  mov    0xc(%eax),%edx
08639efd +0x0f3:  mov    -0x20(%ebp),%eax
08639f00 +0x0f6:  mov    %edx,0x4(%eax)
08639f03 +0x0f9:  mov    -0x20(%ebp),%eax
08639f06 +0x0fc:  movl   $0x0,(%eax)
08639f0c +0x102:  mov    -0x20(%ebp),%eax
08639f0f +0x105:  mov    %eax,(%esp)
08639f12 +0x108:  call   0807e820 <_init+0x1118>
08639f17 +0x10d:  mov    %eax,-0x1c(%ebp)
08639f1a +0x110:  addl   $&_ZL14gUnicodeBuffer+0xac54,-0x1c(%ebp)
08639f21 +0x117:  mov    -0x78(%ebp),%eax
08639f24 +0x11a:  mov    -0x1c(%ebp),%edx
08639f27 +0x11d:  mov    %edx,%ecx
08639f29 +0x11f:  sub    %eax,%ecx
08639f2b +0x121:  mov    %ecx,%eax
08639f2d +0x123:  mov    %eax,-0xc(%ebp)
08639f30 +0x126:  cmpl   $0x0,-0xc(%ebp)
08639f34 +0x12a:  jns    08639f76 <+0x16c>
08639f36 +0x12c:  movl   $0x0,0xc(%esp)
08639f3e +0x134:  movl   $0x1445,0x8(%esp)
08639f46 +0x13c:  movl   $&_ZZN26Timer_DungeonInoutOpenTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08639f4e +0x144:  lea    -0x70(%ebp),%eax
08639f51 +0x147:  mov    %eax,(%esp)
08639f54 +0x14a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08639f59 +0x14f:  movl   $"ULTIMATE_LOG : TIMER OFF!!",0x4(%esp)
08639f61 +0x157:  lea    -0x70(%ebp),%eax
08639f64 +0x15a:  mov    %eax,(%esp)
08639f67 +0x15d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08639f6c +0x162:  mov    $0x0,%eax
08639f71 +0x167:  jmp    0863a1ca <+0x3c0>
08639f76 +0x16c:  mov    -0x7c(%ebp),%eax
08639f79 +0x16f:  mov    %eax,%ebx
08639f7b +0x171:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
08639f80 +0x176:  mov    %ebx,0x18(%esp)
08639f84 +0x17a:  movl   $0x0,0x14(%esp)
08639f8c +0x182:  mov    -0xc(%ebp),%edx
08639f8f +0x185:  mov    %edx,0x10(%esp)
08639f93 +0x189:  movl   $0x93,0xc(%esp)
08639f9b +0x191:  movl   $0x0,0x8(%esp)
08639fa3 +0x199:  movl   $0x2,0x4(%esp)
08639fab +0x1a1:  mov    %eax,(%esp)
08639fae +0x1a4:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
08639fb3 +0x1a9:  movl   $0x0,0xc(%esp)
08639fbb +0x1b1:  movl   $0x1454,0x8(%esp)
08639fc3 +0x1b9:  movl   $&_ZZN26Timer_DungeonInoutOpenTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
08639fcb +0x1c1:  lea    -0x60(%ebp),%eax
08639fce +0x1c4:  mov    %eax,(%esp)
08639fd1 +0x1c7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08639fd6 +0x1cc:  movl   $"ULTIMATE_LOG : NEXT DAY TIMER ON!!",0x4(%esp)
08639fde +0x1d4:  lea    -0x60(%ebp),%eax
08639fe1 +0x1d7:  mov    %eax,(%esp)
08639fe4 +0x1da:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08639fe9 +0x1df:  mov    $0x1,%eax
08639fee +0x1e4:  jmp    0863a1ca <+0x3c0>
08639ff3 +0x1e9:  mov    -0x20(%ebp),%eax
08639ff6 +0x1ec:  mov    -0x18(%ebp),%edx
08639ff9 +0x1ef:  mov    %edx,0x8(%eax)
08639ffc +0x1f2:  lea    -0x80(%ebp),%eax
08639fff +0x1f5:  mov    %eax,(%esp)
0863a002 +0x1f8:  call   0863d36a <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x187b>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x187b
0863a007 +0x1fd:  mov    0x10(%eax),%edx
0863a00a +0x200:  mov    -0x20(%ebp),%eax
0863a00d +0x203:  mov    %edx,0x4(%eax)
0863a010 +0x206:  mov    -0x20(%ebp),%eax
0863a013 +0x209:  movl   $0x3b,(%eax)
0863a019 +0x20f:  mov    -0x20(%ebp),%eax
0863a01c +0x212:  mov    %eax,(%esp)
0863a01f +0x215:  call   0807e820 <_init+0x1118>
0863a024 +0x21a:  mov    %eax,-0x1c(%ebp)
0863a027 +0x21d:  mov    -0x78(%ebp),%eax
0863a02a +0x220:  mov    -0x1c(%ebp),%edx
0863a02d +0x223:  mov    %edx,%ecx
0863a02f +0x225:  sub    %eax,%ecx
0863a031 +0x227:  mov    %ecx,%eax
0863a033 +0x229:  mov    %eax,-0x10(%ebp)
0863a036 +0x22c:  cmpl   $0x0,-0x10(%ebp)
0863a03a +0x230:  jns    0863a043 <+0x239>
0863a03c +0x232:  movl   $0x0,-0x10(%ebp)
0863a043 +0x239:  mov    -0x78(%ebp),%ebx
0863a046 +0x23c:  movl   $0x0,0xc(%esp)
0863a04e +0x244:  movl   $0x1462,0x8(%esp)
0863a056 +0x24c:  movl   $&_ZZN26Timer_DungeonInoutOpenTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863a05e +0x254:  lea    -0x50(%ebp),%eax
0863a061 +0x257:  mov    %eax,(%esp)
0863a064 +0x25a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863a069 +0x25f:  mov    %ebx,0x10(%esp)
0863a06d +0x263:  mov    -0x1c(%ebp),%eax
0863a070 +0x266:  mov    %eax,0xc(%esp)
0863a074 +0x26a:  mov    -0x10(%ebp),%eax
0863a077 +0x26d:  mov    %eax,0x8(%esp)
0863a07b +0x271:  movl   $"DELTA %d , CHECK_T %d , CUR_T %d\n",0x4(%esp)
0863a083 +0x279:  lea    -0x50(%ebp),%eax
0863a086 +0x27c:  mov    %eax,(%esp)
0863a089 +0x27f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863a08e +0x284:  mov    -0x7c(%ebp),%eax
0863a091 +0x287:  mov    %eax,%ebx
0863a093 +0x289:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0863a098 +0x28e:  mov    %ebx,0x18(%esp)
0863a09c +0x292:  movl   $0x0,0x14(%esp)
0863a0a4 +0x29a:  mov    -0x10(%ebp),%edx
0863a0a7 +0x29d:  mov    %edx,0x10(%esp)
0863a0ab +0x2a1:  movl   $0x94,0xc(%esp)
0863a0b3 +0x2a9:  movl   $0x0,0x8(%esp)
0863a0bb +0x2b1:  movl   $0x2,0x4(%esp)
0863a0c3 +0x2b9:  mov    %eax,(%esp)
0863a0c6 +0x2bc:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0863a0cb +0x2c1:  movl   $0x0,0xc(%esp)
0863a0d3 +0x2c9:  movl   $0x146e,0x8(%esp)
0863a0db +0x2d1:  movl   $&_ZZN26Timer_DungeonInoutOpenTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863a0e3 +0x2d9:  lea    -0x40(%ebp),%eax
0863a0e6 +0x2dc:  mov    %eax,(%esp)
0863a0e9 +0x2df:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863a0ee +0x2e4:  movl   $"ULTIMATE_LOG : ULTIMATE DUNGEON CLOSE TIMER ON!!",0x4(%esp)
0863a0f6 +0x2ec:  lea    -0x40(%ebp),%eax
0863a0f9 +0x2ef:  mov    %eax,(%esp)
0863a0fc +0x2f2:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863a101 +0x2f7:  mov    &_ZN10GlobalData15s_power_managerE,%eax
0863a106 +0x2fc:  mov    %eax,(%esp)
0863a109 +0x2ff:  call   0847f910 <_ZN13CPowerManager17IsPowerWarEventOnEv>  ; CPowerManager::IsPowerWarEventOn()
0863a10e +0x304:  xor    $0x1,%eax
0863a111 +0x307:  test   %al,%al
0863a113 +0x309:  je     0863a130 <+0x326>
0863a115 +0x30b:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%eax
0863a11a +0x310:  mov    %eax,(%esp)
0863a11d +0x313:  call   082f0f44 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0xcc8>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0xcc8
0863a122 +0x318:  xor    $0x1,%eax
0863a125 +0x31b:  test   %al,%al
0863a127 +0x31d:  je     0863a130 <+0x326>
0863a129 +0x31f:  mov    $0x1,%eax
0863a12e +0x324:  jmp    0863a135 <+0x32b>
0863a130 +0x326:  mov    $0x0,%eax
0863a135 +0x32b:  test   %al,%al
0863a137 +0x32d:  je     0863a1c5 <+0x3bb>
0863a13d +0x333:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863a142 +0x338:  add    $0x68,%eax
0863a145 +0x33b:  movl   $0x2aff,0x4(%esp)
0863a14d +0x343:  mov    %eax,(%esp)
0863a150 +0x346:  call   082687fc <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x18d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x18d
0863a155 +0x34b:  xor    $0x1,%eax
0863a158 +0x34e:  test   %al,%al
0863a15a +0x350:  je     0863a18f <+0x385>
0863a15c +0x352:  mov    -0x7c(%ebp),%ebx
0863a15f +0x355:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0863a164 +0x35a:  add    $0x68,%eax
0863a167 +0x35d:  movl   $0x1,0x8(%esp)
0863a16f +0x365:  mov    %ebx,0x4(%esp)
0863a173 +0x369:  mov    %eax,(%esp)
0863a176 +0x36c:  call   0826868c <_GLOBAL__I__ZN14CPowerWarEventC2Ev+0x1d>  ; global constructors keyed to CPowerWarEvent::CPowerWarEvent()+0x1d
0863a17b +0x371:  mov    -0x7c(%ebp),%ebx
0863a17e +0x374:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0863a183 +0x379:  mov    %ebx,0x4(%esp)
0863a187 +0x37d:  mov    %eax,(%esp)
0863a18a +0x380:  call   086c8cc4 <_ZN9GameWorld30send_all_dungeon_inout_messageEi>  ; GameWorld::send_all_dungeon_inout_message(int)
0863a18f +0x385:  movl   $0x0,0xc(%esp)
0863a197 +0x38d:  movl   $0x1478,0x8(%esp)
0863a19f +0x395:  movl   $&_ZZN26Timer_DungeonInoutOpenTime12dispatch_sigEiijE19__PRETTY_FUNCTION__,0x4(%esp)
0863a1a7 +0x39d:  lea    -0x30(%ebp),%eax
0863a1aa +0x3a0:  mov    %eax,(%esp)
0863a1ad +0x3a3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0863a1b2 +0x3a8:  movl   $"ULTIMATE_LOG : ULTIMATE DUNGEON OPEN!!",0x4(%esp)
0863a1ba +0x3b0:  lea    -0x30(%ebp),%eax
0863a1bd +0x3b3:  mov    %eax,(%esp)
0863a1c0 +0x3b6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0863a1c5 +0x3bb:  mov    $0x1,%eax
0863a1ca +0x3c0:  mov    -0x4(%ebp),%ebx
0863a1cd +0x3c3:  leave
0863a1ce +0x3c4:  ret
0863a1cf +0x3c5:  nop
```

## 反编译 C

```c
// Timer_DungeonInoutOpenTime::dispatch_sig @ 0x8639e0a

/* Timer_DungeonInoutOpenTime::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_DungeonInoutOpenTime::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  time_t tVar4;
  TimerQueue *pTVar5;
  int iVar6;
  GameWorld *this;
  int in_stack_00000010;
  tm local_b0;
  _Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>> local_84 [4];
  int local_80;
  int local_7c;
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  local_78 [4];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  tm *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_7c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_24 = localtime_r(&local_7c,&local_b0);
  local_1c = local_24->tm_hour;
  local_18 = local_24->tm_min;
  local_80 = in_stack_00000010;
  if (in_stack_00000010 == 0) {
    return 0;
  }
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::find((int *)local_84);
  G_CDataManager();
  std::
  map<int,STDungeonInoutTime,std::less<int>,std::allocator<std::pair<int_const,STDungeonInoutTime>>>
  ::end(local_78);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator!=
                    (local_84,(_Rb_tree_iterator *)local_78);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
    if (*(int *)(iVar3 + 8) < local_1c) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
      local_24->tm_hour = *(int *)(iVar3 + 4);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
      local_24->tm_min = *(int *)(iVar3 + 0xc);
      local_24->tm_sec = 0;
      tVar4 = mktime(local_24);
      local_20 = tVar4 + 0x15180;
      local_10 = local_20 - local_7c;
      if (local_10 < 0) {
        cMyTrace::cMyTrace(local_74,
                           "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                           ,0x1445,0);
        cMyTrace::operator()(local_74,"ULTIMATE_LOG : TIMER OFF!!");
        return 0;
      }
      pTVar5 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar5,2,0,0x93,local_10,0,local_80);
      cMyTrace::cMyTrace(local_64,
                         "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x1454,0);
      cMyTrace::operator()(local_64,"ULTIMATE_LOG : NEXT DAY TIMER ON!!");
      return 1;
    }
    local_24->tm_hour = local_1c;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,STDungeonInoutTime>>::operator->(local_84);
    local_24->tm_min = *(int *)(iVar3 + 0x10);
    local_24->tm_sec = 0x3b;
    local_20 = mktime(local_24);
    iVar3 = local_7c;
    local_14 = local_20 - local_7c;
    if (local_14 < 0) {
      local_14 = 0;
    }
    cMyTrace::cMyTrace(local_54,
                       "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x1462,0);
    cMyTrace::operator()(local_54,"DELTA %d , CHECK_T %d , CUR_T %d\n",local_14,local_20,iVar3);
    iVar3 = local_80;
    pTVar5 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar5,2,0,0x94,local_14,0,iVar3);
    cMyTrace::cMyTrace(local_44,
                       "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                       ,0x146e,0);
    cMyTrace::operator()(local_44,"ULTIMATE_LOG : ULTIMATE DUNGEON CLOSE TIMER ON!!");
    cVar2 = CPowerManager::IsPowerWarEventOn();
    if ((cVar2 == '\x01') ||
       (cVar2 = village_attacked::CVillageMonsterMgr::OnEvent(GlobalData::s_villageMonsterMgr),
       cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      iVar3 = G_CDataManager();
      cVar2 = ServerParameterScript::isDungeonOpen(iVar3 + 0x68);
      iVar3 = local_80;
      if (cVar2 != '\x01') {
        iVar6 = G_CDataManager();
        ServerParameterScript::setDungeonOpen((ServerParameterScript *)(iVar6 + 0x68),iVar3,true);
        this = (GameWorld *)G_GameWorld();
        GameWorld::send_all_dungeon_inout_message(this,local_80);
      }
      cMyTrace::cMyTrace(local_34,
                         "virtual bool Timer_DungeonInoutOpenTime::dispatch_sig(int, int, memberIdentificationNumber_t)"
                         ,0x1478,0);
      cMyTrace::operator()(local_34,"ULTIMATE_LOG : ULTIMATE DUNGEON OPEN!!");
    }
  }
  return 1;
}
```
