# setHackUser

`_ZN5CUser11setHackUserEjjjjtj`

`CUser::setHackUser(unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867f748` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867f748  _ZN5CUser11setHackUserEjjjjtj
#           CUser::setHackUser(unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)
# range [0x0867f748, 0x0867fbb9]
0867f748 +0x000:  push   %ebp
0867f749 +0x001:  mov    %esp,%ebp
0867f74b +0x003:  push   %esi
0867f74c +0x004:  push   %ebx
0867f74d +0x005:  sub    $0x90,%esp
0867f753 +0x00b:  mov    0x1c(%ebp),%eax
0867f756 +0x00e:  mov    %ax,-0x6c(%ebp)
0867f75a +0x012:  movzwl -0x6c(%ebp),%esi
0867f75e +0x016:  mov    0x8(%ebp),%eax
0867f761 +0x019:  mov    %eax,(%esp)
0867f764 +0x01c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867f769 +0x021:  movl   $0x0,0x4(%esp)
0867f771 +0x029:  mov    %eax,(%esp)
0867f774 +0x02c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0867f779 +0x031:  mov    %eax,%ebx
0867f77b +0x033:  movl   $0x0,0xc(%esp)
0867f783 +0x03b:  movl   $0x7e55,0x8(%esp)
0867f78b +0x043:  movl   $&_ZZN5CUser11setHackUserEjjjjtjE19__PRETTY_FUNCTION__,0x4(%esp)
0867f793 +0x04b:  lea    -0x38(%ebp),%eax
0867f796 +0x04e:  mov    %eax,(%esp)
0867f799 +0x051:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0867f79e +0x056:  mov    %esi,0x1c(%esp)
0867f7a2 +0x05a:  mov    0x18(%ebp),%eax
0867f7a5 +0x05d:  mov    %eax,0x18(%esp)
0867f7a9 +0x061:  mov    0x14(%ebp),%eax
0867f7ac +0x064:  mov    %eax,0x14(%esp)
0867f7b0 +0x068:  mov    0x10(%ebp),%eax
0867f7b3 +0x06b:  mov    %eax,0x10(%esp)
0867f7b7 +0x06f:  mov    0xc(%ebp),%eax
0867f7ba +0x072:  mov    %eax,0xc(%esp)
0867f7be +0x076:  mov    %ebx,0x8(%esp)
0867f7c2 +0x07a:  movl   $"m_id : %s, SetHackUser : %d(%d)\t  %d(%d)   ApplyFlag = %d\n",0x4(%esp)
0867f7ca +0x082:  lea    -0x38(%ebp),%eax
0867f7cd +0x085:  mov    %eax,(%esp)
0867f7d0 +0x088:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0867f7d5 +0x08d:  cmpw   $0x2,-0x6c(%ebp)
0867f7da +0x092:  jne    0867f812 <+0xca>
0867f7dc +0x094:  mov    0x14(%ebp),%eax
0867f7df +0x097:  mov    %eax,0x8(%esp)
0867f7e3 +0x09b:  mov    0xc(%ebp),%eax
0867f7e6 +0x09e:  mov    %eax,0x4(%esp)
0867f7ea +0x0a2:  lea    -0x28(%ebp),%eax
0867f7ed +0x0a5:  mov    %eax,(%esp)
0867f7f0 +0x0a8:  call   0869380e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x63
0867f7f5 +0x0ad:  mov    0x8(%ebp),%eax
0867f7f8 +0x0b0:  lea    0x8d1b8(%eax),%edx
0867f7fe +0x0b6:  lea    -0x28(%ebp),%eax
0867f801 +0x0b9:  mov    %eax,0x4(%esp)
0867f805 +0x0bd:  mov    %edx,(%esp)
0867f808 +0x0c0:  call   0869c0e2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8937>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8937
0867f80d +0x0c5:  jmp    0867fb26 <+0x3de>
0867f812 +0x0ca:  cmpw   $0x3,-0x6c(%ebp)
0867f817 +0x0cf:  jne    0867f92a <+0x1e2>
0867f81d +0x0d5:  mov    0x8(%ebp),%eax
0867f820 +0x0d8:  movzbl 0x8e950(%eax),%eax
0867f827 +0x0df:  xor    $0x1,%eax
0867f82a +0x0e2:  test   %al,%al
0867f82c +0x0e4:  je     0867fba8 <+0x460>
0867f832 +0x0ea:  movl   $0x0,-0x58(%ebp)
0867f839 +0x0f1:  movl   $0x0,-0x54(%ebp)
0867f840 +0x0f8:  movl   $0x0,-0x50(%ebp)
0867f847 +0x0ff:  movl   $0x0,-0x4c(%ebp)
0867f84e +0x106:  mov    0x8(%ebp),%eax
0867f851 +0x109:  lea    0xe0(%eax),%edx
0867f857 +0x10f:  movl   $0x10,0x8(%esp)
0867f85f +0x117:  lea    -0x58(%ebp),%eax
0867f862 +0x11a:  mov    %eax,0x4(%esp)
0867f866 +0x11e:  mov    %edx,(%esp)
0867f869 +0x121:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
0867f86e +0x126:  movl   $0x0,-0x68(%ebp)
0867f875 +0x12d:  movl   $0x0,-0x64(%ebp)
0867f87c +0x134:  movl   $0x0,-0x60(%ebp)
0867f883 +0x13b:  movl   $0x0,-0x5c(%ebp)
0867f88a +0x142:  lea    -0x58(%ebp),%eax
0867f88d +0x145:  mov    %eax,0x8(%esp)
0867f891 +0x149:  movl   $0x0,0x4(%esp)
0867f899 +0x151:  lea    -0x68(%ebp),%eax
0867f89c +0x154:  mov    %eax,(%esp)
0867f89f +0x157:  call   086b1dd5 <_Z22Divide_C_ClassIP_EndIPPcS_S_>  ; Divide_C_ClassIP_EndIP(char*, char*, char*)
0867f8a4 +0x15c:  mov    0x14(%ebp),%eax
0867f8a7 +0x15f:  mov    %eax,0x8(%esp)
0867f8ab +0x163:  mov    0xc(%ebp),%eax
0867f8ae +0x166:  mov    %eax,0x4(%esp)
0867f8b2 +0x16a:  lea    -0x20(%ebp),%eax
0867f8b5 +0x16d:  mov    %eax,(%esp)
0867f8b8 +0x170:  call   08693824 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x79>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x79
0867f8bd +0x175:  mov    0x8(%ebp),%eax
0867f8c0 +0x178:  lea    0x8d1d0(%eax),%edx
0867f8c6 +0x17e:  lea    -0x20(%ebp),%eax
0867f8c9 +0x181:  mov    %eax,0x4(%esp)
0867f8cd +0x185:  mov    %edx,(%esp)
0867f8d0 +0x188:  call   0869c104 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8959>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8959
0867f8d5 +0x18d:  mov    0x8(%ebp),%eax
0867f8d8 +0x190:  movb   $0x1,0x8e950(%eax)
0867f8df +0x197:  mov    0x14(%ebp),%edx
0867f8e2 +0x19a:  mov    0xc(%ebp),%eax
0867f8e5 +0x19d:  mov    0x8(%ebp),%ecx
0867f8e8 +0x1a0:  lea    0x79700(%ecx),%ebx
0867f8ee +0x1a6:  lea    -0x58(%ebp),%ecx
0867f8f1 +0x1a9:  mov    %ecx,0xc(%esp)
0867f8f5 +0x1ad:  mov    %edx,0x8(%esp)
0867f8f9 +0x1b1:  mov    %eax,0x4(%esp)
0867f8fd +0x1b5:  mov    %ebx,(%esp)
0867f900 +0x1b8:  call   08685d9c <_ZN15cUserHistoryLog21IPCounterLog_InsertIpEiiPc>  ; cUserHistoryLog::IPCounterLog_InsertIp(int, int, char*)
0867f905 +0x1bd:  mov    0x14(%ebp),%eax
0867f908 +0x1c0:  mov    %eax,0xc(%esp)
0867f90c +0x1c4:  mov    0xc(%ebp),%eax
0867f90f +0x1c7:  mov    %eax,0x8(%esp)
0867f913 +0x1cb:  lea    -0x58(%ebp),%eax
0867f916 +0x1ce:  mov    %eax,0x4(%esp)
0867f91a +0x1d2:  lea    -0x68(%ebp),%eax
0867f91d +0x1d5:  mov    %eax,(%esp)
0867f920 +0x1d8:  call   08436ff8 <_ZN13DB_HackIPSave11makeRequestEPKcS1_jj>  ; DB_HackIPSave::makeRequest(char const*, char const*, unsigned int, unsigned int)
0867f925 +0x1dd:  jmp    0867fbaf <+0x467>
0867f92a +0x1e2:  cmpw   $0xa,-0x6c(%ebp)
0867f92f +0x1e7:  jne    0867f9fa <+0x2b2>
0867f935 +0x1ed:  mov    0x14(%ebp),%eax
0867f938 +0x1f0:  mov    %eax,0x8(%esp)
0867f93c +0x1f4:  mov    0xc(%ebp),%eax
0867f93f +0x1f7:  mov    %eax,0x4(%esp)
0867f943 +0x1fb:  lea    -0x18(%ebp),%eax
0867f946 +0x1fe:  mov    %eax,(%esp)
0867f949 +0x201:  call   0869380e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x63>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x63
0867f94e +0x206:  mov    0x8(%ebp),%eax
0867f951 +0x209:  lea    0x8d1c4(%eax),%edx
0867f957 +0x20f:  lea    -0x18(%ebp),%eax
0867f95a +0x212:  mov    %eax,0x4(%esp)
0867f95e +0x216:  mov    %edx,(%esp)
0867f961 +0x219:  call   0869c0e2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8937>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8937
0867f966 +0x21e:  movl   $0x4,0x4(%esp)
0867f96e +0x226:  mov    0x8(%ebp),%eax
0867f971 +0x229:  mov    %eax,(%esp)
0867f974 +0x22c:  call   0868991c <_ZN5CUser17isTradePunishTypeEi>  ; CUser::isTradePunishType(int)
0867f979 +0x231:  test   %al,%al
0867f97b +0x233:  jne    0867fbab <+0x463>
0867f981 +0x239:  movl   $0x122,(%esp)
0867f988 +0x240:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0867f98d +0x245:  add    $0xa,%eax
0867f990 +0x248:  mov    %eax,-0x10(%ebp)
0867f993 +0x24b:  mov    -0x10(%ebp),%eax
0867f996 +0x24e:  mov    %eax,0x4(%esp)
0867f99a +0x252:  movl   $"ARS TRADE PUNISH USER - Rand Sec : %d\n",(%esp)
0867f9a1 +0x259:  call   0807db60 <_init+0x458>
0867f9a6 +0x25e:  mov    0x8(%ebp),%eax
0867f9a9 +0x261:  mov    %eax,(%esp)
0867f9ac +0x264:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0867f9b1 +0x269:  movzwl %ax,%esi
0867f9b4 +0x26c:  mov    0x8(%ebp),%eax
0867f9b7 +0x26f:  mov    %eax,(%esp)
0867f9ba +0x272:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0867f9bf +0x277:  mov    %eax,%ebx
0867f9c1 +0x279:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0867f9c6 +0x27e:  movl   $0xffffffff,0x18(%esp)
0867f9ce +0x286:  mov    %esi,0x14(%esp)
0867f9d2 +0x28a:  mov    -0x10(%ebp),%edx
0867f9d5 +0x28d:  mov    %edx,0x10(%esp)
0867f9d9 +0x291:  movl   $0x97,0xc(%esp)
0867f9e1 +0x299:  mov    %ebx,0x8(%esp)
0867f9e5 +0x29d:  movl   $0x0,0x4(%esp)
0867f9ed +0x2a5:  mov    %eax,(%esp)
0867f9f0 +0x2a8:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0867f9f5 +0x2ad:  jmp    0867fb26 <+0x3de>
0867f9fa +0x2b2:  movl   $0x122,(%esp)
0867fa01 +0x2b9:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
0867fa06 +0x2be:  add    $0xa,%eax
0867fa09 +0x2c1:  mov    %eax,-0xc(%ebp)
0867fa0c +0x2c4:  mov    0x8(%ebp),%eax
0867fa0f +0x2c7:  movb   $0x1,0x8d1a8(%eax)
0867fa16 +0x2ce:  cmpw   $0x8,-0x6c(%ebp)
0867fa1b +0x2d3:  jne    0867fa2e <+0x2e6>
0867fa1d +0x2d5:  mov    0x8(%ebp),%eax
0867fa20 +0x2d8:  movb   $0x1,0x8e951(%eax)
0867fa27 +0x2df:  movl   $0x1,-0xc(%ebp)
0867fa2e +0x2e6:  cmpw   $0x7,-0x6c(%ebp)
0867fa33 +0x2eb:  jne    0867fa3f <+0x2f7>
0867fa35 +0x2ed:  mov    0x8(%ebp),%eax
0867fa38 +0x2f0:  movb   $0x1,0x8e951(%eax)
0867fa3f +0x2f7:  cmpw   $0x9,-0x6c(%ebp)
0867fa44 +0x2fc:  jne    0867fa50 <+0x308>
0867fa46 +0x2fe:  mov    0x8(%ebp),%eax
0867fa49 +0x301:  movb   $0x1,0x8e951(%eax)
0867fa50 +0x308:  cmpw   $0xc,-0x6c(%ebp)
0867fa55 +0x30d:  jne    0867fa61 <+0x319>
0867fa57 +0x30f:  mov    0x8(%ebp),%eax
0867fa5a +0x312:  movb   $0x1,0x8e951(%eax)
0867fa61 +0x319:  cmpw   $0x5,-0x6c(%ebp)
0867fa66 +0x31e:  jne    0867fa72 <+0x32a>
0867fa68 +0x320:  mov    0x8(%ebp),%eax
0867fa6b +0x323:  movb   $0x1,0x8e951(%eax)
0867fa72 +0x32a:  mov    0x8(%ebp),%eax
0867fa75 +0x32d:  mov    %eax,(%esp)
0867fa78 +0x330:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0867fa7d +0x335:  movzwl %ax,%esi
0867fa80 +0x338:  mov    0x8(%ebp),%eax
0867fa83 +0x33b:  mov    %eax,(%esp)
0867fa86 +0x33e:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
0867fa8b +0x343:  mov    %eax,%ebx
0867fa8d +0x345:  call   080f647c <_GLOBAL__I__Z30GameserverDemonManagerInstancev+0x169>  ; global constructors keyed to GameserverDemonManagerInstance()+0x169
0867fa92 +0x34a:  movl   $0xffffffff,0x18(%esp)
0867fa9a +0x352:  mov    %esi,0x14(%esp)
0867fa9e +0x356:  mov    -0xc(%ebp),%edx
0867faa1 +0x359:  mov    %edx,0x10(%esp)
0867faa5 +0x35d:  movl   $0x81,0xc(%esp)
0867faad +0x365:  mov    %ebx,0x8(%esp)
0867fab1 +0x369:  movl   $0x0,0x4(%esp)
0867fab9 +0x371:  mov    %eax,(%esp)
0867fabc +0x374:  call   08630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>  ; TimerQueue::InsertTimer(TimerEntry::OBJ_TYPE, int, TIMER_MESSAGE, int, int, unsigned int)
0867fac1 +0x379:  mov    0x8(%ebp),%eax
0867fac4 +0x37c:  mov    %eax,(%esp)
0867fac7 +0x37f:  call   08681368 <_ZN5CUser12OnPunishUserEv>  ; CUser::OnPunishUser()
0867facc +0x384:  mov    0x8(%ebp),%eax
0867facf +0x387:  movzbl 0x796d8(%eax),%eax
0867fad6 +0x38e:  test   %al,%al
0867fad8 +0x390:  je     0867faf0 <+0x3a8>
0867fada +0x392:  mov    0x8(%ebp),%eax
0867fadd +0x395:  mov    %eax,(%esp)
0867fae0 +0x398:  call   0868995a <_ZN5CUser18GetTradePunishTypeEv>  ; CUser::GetTradePunishType()
0867fae5 +0x39d:  test   %eax,%eax
0867fae7 +0x39f:  je     0867faf0 <+0x3a8>
0867fae9 +0x3a1:  mov    $0x1,%eax
0867faee +0x3a6:  jmp    0867faf5 <+0x3ad>
0867faf0 +0x3a8:  mov    $0x0,%eax
0867faf5 +0x3ad:  test   %al,%al
0867faf7 +0x3af:  jne    0867fbae <+0x466>
0867fafd +0x3b5:  mov    0x8(%ebp),%eax
0867fb00 +0x3b8:  movzbl 0x796d8(%eax),%eax
0867fb07 +0x3bf:  test   %al,%al
0867fb09 +0x3c1:  je     0867fb26 <+0x3de>
0867fb0b +0x3c3:  cmpw   $0x1,-0x6c(%ebp)
0867fb10 +0x3c8:  je     0867fb20 <+0x3d8>
0867fb12 +0x3ca:  cmpw   $0x4,-0x6c(%ebp)
0867fb17 +0x3cf:  je     0867fb20 <+0x3d8>
0867fb19 +0x3d1:  cmpw   $0x9,-0x6c(%ebp)
0867fb1e +0x3d6:  jne    0867fb26 <+0x3de>
0867fb20 +0x3d8:  movw   $0xa,-0x6c(%ebp)
0867fb26 +0x3de:  movl   $0x0,-0x48(%ebp)
0867fb2d +0x3e5:  movl   $0x0,-0x44(%ebp)
0867fb34 +0x3ec:  movl   $0x0,-0x40(%ebp)
0867fb3b +0x3f3:  movl   $0x0,-0x3c(%ebp)
0867fb42 +0x3fa:  movzwl -0x6c(%ebp),%esi
0867fb46 +0x3fe:  mov    0x8(%ebp),%eax
0867fb49 +0x401:  lea    0xe0(%eax),%edx
0867fb4f +0x407:  movl   $0x10,0x8(%esp)
0867fb57 +0x40f:  lea    -0x48(%ebp),%eax
0867fb5a +0x412:  mov    %eax,0x4(%esp)
0867fb5e +0x416:  mov    %edx,(%esp)
0867fb61 +0x419:  call   0816282e <_GLOBAL__I__ZN24TaiwanInternalDispatcherC2Ev+0xa9c>  ; global constructors keyed to TaiwanInternalDispatcher::TaiwanInternalDispatcher()+0xa9c
0867fb66 +0x41e:  mov    %eax,%ebx
0867fb68 +0x420:  mov    0x8(%ebp),%eax
0867fb6b +0x423:  mov    %eax,(%esp)
0867fb6e +0x426:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0867fb73 +0x42b:  mov    0x20(%ebp),%edx
0867fb76 +0x42e:  mov    %edx,0x1c(%esp)
0867fb7a +0x432:  mov    %esi,0x18(%esp)
0867fb7e +0x436:  mov    0x18(%ebp),%edx
0867fb81 +0x439:  mov    %edx,0x14(%esp)
0867fb85 +0x43d:  mov    0x14(%ebp),%edx
0867fb88 +0x440:  mov    %edx,0x10(%esp)
0867fb8c +0x444:  mov    0x10(%ebp),%edx
0867fb8f +0x447:  mov    %edx,0xc(%esp)
0867fb93 +0x44b:  mov    0xc(%ebp),%edx
0867fb96 +0x44e:  mov    %edx,0x8(%esp)
0867fb9a +0x452:  mov    %ebx,0x4(%esp)
0867fb9e +0x456:  mov    %eax,(%esp)
0867fba1 +0x459:  call   0842dd7c <_ZN28DB_InsertAutoPunishFirstUser11makeRequestEjPKcjjjjtj>  ; DB_InsertAutoPunishFirstUser::makeRequest(unsigned int, char const*, unsigned int, unsigned int, unsigned int, unsigned int, unsigned short, unsigned int)
0867fba6 +0x45e:  jmp    0867fbaf <+0x467>
0867fba8 +0x460:  nop
0867fba9 +0x461:  jmp    0867fbaf <+0x467>
0867fbab +0x463:  nop
0867fbac +0x464:  jmp    0867fbaf <+0x467>
0867fbae +0x466:  nop
0867fbaf +0x467:  add    $0x90,%esp
0867fbb5 +0x46d:  pop    %ebx
0867fbb6 +0x46e:  pop    %esi
0867fbb7 +0x46f:  pop    %ebp
0867fbb8 +0x470:  ret
0867fbb9 +0x471:  nop
```

## 反编译 C

```c
// CUser::setHackUser @ 0x867f748

/* CUser::setHackUser(unsigned int, unsigned int, unsigned int, unsigned int, unsigned short,
   unsigned int) */

void __thiscall
CUser::setHackUser(CUser *this,uint param_1,uint param_2,uint param_3,uint param_4,ushort param_5,
                  uint param_6)

{
  bool bVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  TimerQueue *pTVar6;
  int iVar7;
  char *pcVar8;
  ushort local_70;
  char local_6c [48];
  cMyTrace local_3c [16];
  stLookOuts local_2c [8];
  tyIPCounters local_24 [8];
  stLookOuts local_1c [8];
  int local_14;
  int local_10;
  
  local_70 = param_5;
  uVar4 = get_acc_id(this);
  uVar5 = NumberToString(uVar4,0);
  cMyTrace::cMyTrace(local_3c,
                     "void CUser::setHackUser(unsigned int, unsigned int, unsigned int, unsigned int, short unsigned int, unsigned int)"
                     ,0x7e55,0);
  cMyTrace::operator()
            (local_3c,"m_id : %s, SetHackUser : %d(%d)\t  %d(%d)   ApplyFlag = %d\n",uVar5,param_1,
             param_2,param_3,param_4,(uint)param_5);
  if (param_5 == 2) {
    stLookOuts::stLookOuts(local_2c,param_1,param_3);
    std::vector<stLookOuts,std::allocator<stLookOuts>>::push_back
              ((vector<stLookOuts,std::allocator<stLookOuts>> *)(this + 0x8d1b8),local_2c);
  }
  else {
    if (param_5 == 3) {
      if (this[0x8e950] == (CUser)0x1) {
        return;
      }
      local_6c[0x10] = '\0';
      local_6c[0x11] = '\0';
      local_6c[0x12] = '\0';
      local_6c[0x13] = '\0';
      local_6c[0x14] = '\0';
      local_6c[0x15] = '\0';
      local_6c[0x16] = '\0';
      local_6c[0x17] = '\0';
      local_6c[0x18] = '\0';
      local_6c[0x19] = '\0';
      local_6c[0x1a] = '\0';
      local_6c[0x1b] = '\0';
      local_6c[0x1c] = '\0';
      local_6c[0x1d] = '\0';
      local_6c[0x1e] = '\0';
      local_6c[0x1f] = '\0';
      CNetwork<4096,450000>::GetPeerIP2((CNetwork<4096,450000> *)(this + 0xe0),local_6c + 0x10,0x10)
      ;
      local_6c[0] = '\0';
      local_6c[1] = '\0';
      local_6c[2] = '\0';
      local_6c[3] = '\0';
      local_6c[4] = '\0';
      local_6c[5] = '\0';
      local_6c[6] = '\0';
      local_6c[7] = '\0';
      local_6c[8] = '\0';
      local_6c[9] = '\0';
      local_6c[10] = '\0';
      local_6c[0xb] = '\0';
      local_6c[0xc] = '\0';
      local_6c[0xd] = '\0';
      local_6c[0xe] = '\0';
      local_6c[0xf] = '\0';
      Divide_C_ClassIP_EndIP(local_6c,(char *)0x0,local_6c + 0x10);
      tyIPCounters::tyIPCounters(local_24,param_1,param_3);
      std::vector<tyIPCounters,std::allocator<tyIPCounters>>::push_back
                ((vector<tyIPCounters,std::allocator<tyIPCounters>> *)(this + 0x8d1d0),local_24);
      this[0x8e950] = (CUser)0x1;
      cUserHistoryLog::IPCounterLog_InsertIp
                ((cUserHistoryLog *)(this + 0x79700),param_1,param_3,local_6c + 0x10);
      DB_HackIPSave::makeRequest(local_6c,local_6c + 0x10,param_1,param_3);
      return;
    }
    if (param_5 == 10) {
      stLookOuts::stLookOuts(local_1c,param_1,param_3);
      std::vector<stLookOuts,std::allocator<stLookOuts>>::push_back
                ((vector<stLookOuts,std::allocator<stLookOuts>> *)(this + 0x8d1c4),local_1c);
      cVar2 = isTradePunishType(this,4);
      if (cVar2 != '\0') {
        return;
      }
      local_14 = get_rand_int(0x122);
      local_14 = local_14 + 10;
      printf("ARS TRADE PUNISH USER - Rand Sec : %d\n",local_14);
      uVar3 = get_unique_id(this);
      uVar5 = GetUID(this);
      pTVar6 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar6,0,uVar5,0x97,local_14,uVar3,0xffffffff);
    }
    else {
      local_10 = get_rand_int(0x122);
      local_10 = local_10 + 10;
      this[0x8d1a8] = (CUser)0x1;
      if (param_5 == 8) {
        this[0x8e951] = (CUser)0x1;
        local_10 = 1;
      }
      if (param_5 == 7) {
        this[0x8e951] = (CUser)0x1;
      }
      if (param_5 == 9) {
        this[0x8e951] = (CUser)0x1;
      }
      if (param_5 == 0xc) {
        this[0x8e951] = (CUser)0x1;
      }
      if (param_5 == 5) {
        this[0x8e951] = (CUser)0x1;
      }
      uVar3 = get_unique_id(this);
      uVar5 = GetUID(this);
      pTVar6 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar6,0,uVar5,0x81,local_10,uVar3,0xffffffff);
      OnPunishUser(this);
      if ((this[0x796d8] == (CUser)0x0) || (iVar7 = GetTradePunishType(this), iVar7 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return;
      }
      if ((this[0x796d8] != (CUser)0x0) && (((param_5 == 1 || (param_5 == 4)) || (param_5 == 9)))) {
        local_70 = 10;
      }
    }
  }
  local_6c[0x20] = '\0';
  local_6c[0x21] = '\0';
  local_6c[0x22] = '\0';
  local_6c[0x23] = '\0';
  local_6c[0x24] = '\0';
  local_6c[0x25] = '\0';
  local_6c[0x26] = '\0';
  local_6c[0x27] = '\0';
  local_6c[0x28] = '\0';
  local_6c[0x29] = '\0';
  local_6c[0x2a] = '\0';
  local_6c[0x2b] = '\0';
  local_6c[0x2c] = '\0';
  local_6c[0x2d] = '\0';
  local_6c[0x2e] = '\0';
  local_6c[0x2f] = '\0';
  pcVar8 = (char *)CNetwork<4096,450000>::GetPeerIP2
                             ((CNetwork<4096,450000> *)(this + 0xe0),local_6c + 0x20,0x10);
  uVar4 = get_acc_id(this);
  DB_InsertAutoPunishFirstUser::makeRequest
            (uVar4,pcVar8,param_1,param_2,param_3,param_4,local_70,param_6);
  return;
}
```
