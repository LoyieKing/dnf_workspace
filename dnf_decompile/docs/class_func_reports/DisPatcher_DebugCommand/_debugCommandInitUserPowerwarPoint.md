# _debugCommandInitUserPowerwarPoint

`_ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x08590092` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08590092  _ZN23DisPatcher_DebugCommand34_debugCommandInitUserPowerwarPointEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint(CUser*, MSG_DEBUG_COMMAND&)
# range [0x08590092, 0x0859019d]
08590092 +0x000:  push   %ebp
08590093 +0x001:  mov    %esp,%ebp
08590095 +0x003:  push   %esi
08590096 +0x004:  push   %ebx
08590097 +0x005:  sub    $0x20,%esp
0859009a +0x008:  mov    0xc(%ebp),%eax
0859009d +0x00b:  mov    %eax,(%esp)
085900a0 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
085900a5 +0x013:  xor    $0x1,%eax
085900a8 +0x016:  test   %al,%al
085900aa +0x018:  je     085900b6 <+0x24>
085900ac +0x01a:  mov    $0x0,%ebx
085900b1 +0x01f:  jmp    08590194 <+0x102>
085900b6 +0x024:  mov    0xc(%ebp),%eax
085900b9 +0x027:  mov    %eax,(%esp)
085900bc +0x02a:  call   0822f9c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5072>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5072
085900c1 +0x02f:  movswl %ax,%edx
085900c4 +0x032:  mov    0xc(%ebp),%eax
085900c7 +0x035:  mov    %edx,0x4(%esp)
085900cb +0x039:  mov    %eax,(%esp)
085900ce +0x03c:  call   08687f66 <_ZN15CUserCharacInfo21DecreasePowerWarPointEs>  ; CUserCharacInfo::DecreasePowerWarPoint(short)
085900d3 +0x041:  lea    -0x14(%ebp),%eax
085900d6 +0x044:  mov    %eax,(%esp)
085900d9 +0x047:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085900de +0x04c:  movl   $0x2,0x8(%esp)
085900e6 +0x054:  movl   $0x0,0x4(%esp)
085900ee +0x05c:  lea    -0x14(%ebp),%eax
085900f1 +0x05f:  mov    %eax,(%esp)
085900f4 +0x062:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085900f9 +0x067:  movl   $0x0,0x4(%esp)
08590101 +0x06f:  lea    -0x14(%ebp),%eax
08590104 +0x072:  mov    %eax,(%esp)
08590107 +0x075:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859010c +0x07a:  movl   $0x1,0x4(%esp)
08590114 +0x082:  lea    -0x14(%ebp),%eax
08590117 +0x085:  mov    %eax,(%esp)
0859011a +0x088:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859011f +0x08d:  lea    -0x14(%ebp),%eax
08590122 +0x090:  movl   $0x0,0x8(%esp)
0859012a +0x098:  mov    %eax,0x4(%esp)
0859012e +0x09c:  mov    0xc(%ebp),%eax
08590131 +0x09f:  mov    %eax,(%esp)
08590134 +0x0a2:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
08590139 +0x0a7:  movl   $0x1,0x4(%esp)
08590141 +0x0af:  lea    -0x14(%ebp),%eax
08590144 +0x0b2:  mov    %eax,(%esp)
08590147 +0x0b5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859014c +0x0ba:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08590151 +0x0bf:  mov    0xc(%ebp),%edx
08590154 +0x0c2:  mov    %edx,0x8(%esp)
08590158 +0x0c6:  lea    -0x14(%ebp),%edx
0859015b +0x0c9:  mov    %edx,0x4(%esp)
0859015f +0x0cd:  mov    %eax,(%esp)
08590162 +0x0d0:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
08590167 +0x0d5:  mov    $0x1,%ebx
0859016c +0x0da:  lea    -0x14(%ebp),%eax
0859016f +0x0dd:  mov    %eax,(%esp)
08590172 +0x0e0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08590177 +0x0e5:  jmp    08590194 <+0x102>
08590179 +0x0e7:  mov    %edx,%ebx
0859017b +0x0e9:  mov    %eax,%esi
0859017d +0x0eb:  lea    -0x14(%ebp),%eax
08590180 +0x0ee:  mov    %eax,(%esp)
08590183 +0x0f1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08590188 +0x0f6:  mov    %esi,%eax
0859018a +0x0f8:  mov    %ebx,%edx
0859018c +0x0fa:  mov    %eax,(%esp)
0859018f +0x0fd:  call   08ae3750 <_Unwind_Resume>
08590194 +0x102:  mov    %ebx,%eax
08590196 +0x104:  add    $0x20,%esp
08590199 +0x107:  pop    %ebx
0859019a +0x108:  pop    %esi
0859019b +0x109:  pop    %ebp
0859019c +0x10a:  ret
0859019d +0x10b:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint @ 0x8590092

/* DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandInitUserPowerwarPoint
               (CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  short sVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    sVar2 = CUserCharacInfo::GetUserPowerWarPoint((CUserCharacInfo *)param_2);
    CUserCharacInfo::DecreasePowerWarPoint((CUserCharacInfo *)param_2,sVar2);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 085900f4 to 08590166 has its CatchHandler @ 08590179 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18,(CUser *)param_2);
    PacketGuard::~PacketGuard(local_18);
  }
  return cVar1 == '\x01';
}
```
