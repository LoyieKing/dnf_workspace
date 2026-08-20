# _debugCommandUserPowerwarPointUp

`_ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858fee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858fee8  _ZN23DisPatcher_DebugCommand32_debugCommandUserPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858fee8, 0x0858ffed]
0858fee8 +0x000:  push   %ebp
0858fee9 +0x001:  mov    %esp,%ebp
0858feeb +0x003:  push   %esi
0858feec +0x004:  push   %ebx
0858feed +0x005:  sub    $0x20,%esp
0858fef0 +0x008:  mov    0xc(%ebp),%eax
0858fef3 +0x00b:  mov    %eax,(%esp)
0858fef6 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858fefb +0x013:  xor    $0x1,%eax
0858fefe +0x016:  test   %al,%al
0858ff00 +0x018:  je     0858ff0c <+0x24>
0858ff02 +0x01a:  mov    $0x0,%ebx
0858ff07 +0x01f:  jmp    0858ffe5 <+0xfd>
0858ff0c +0x024:  mov    0x10(%ebp),%eax
0858ff0f +0x027:  mov    0xe(%eax),%eax
0858ff12 +0x02a:  movswl %ax,%edx
0858ff15 +0x02d:  mov    0xc(%ebp),%eax
0858ff18 +0x030:  mov    %edx,0x4(%esp)
0858ff1c +0x034:  mov    %eax,(%esp)
0858ff1f +0x037:  call   08687efc <_ZN15CUserCharacInfo21IncreasePowerWarPointEs>  ; CUserCharacInfo::IncreasePowerWarPoint(short)
0858ff24 +0x03c:  lea    -0x14(%ebp),%eax
0858ff27 +0x03f:  mov    %eax,(%esp)
0858ff2a +0x042:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858ff2f +0x047:  movl   $0x2,0x8(%esp)
0858ff37 +0x04f:  movl   $0x0,0x4(%esp)
0858ff3f +0x057:  lea    -0x14(%ebp),%eax
0858ff42 +0x05a:  mov    %eax,(%esp)
0858ff45 +0x05d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0858ff4a +0x062:  movl   $0x0,0x4(%esp)
0858ff52 +0x06a:  lea    -0x14(%ebp),%eax
0858ff55 +0x06d:  mov    %eax,(%esp)
0858ff58 +0x070:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0858ff5d +0x075:  movl   $0x1,0x4(%esp)
0858ff65 +0x07d:  lea    -0x14(%ebp),%eax
0858ff68 +0x080:  mov    %eax,(%esp)
0858ff6b +0x083:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0858ff70 +0x088:  lea    -0x14(%ebp),%eax
0858ff73 +0x08b:  movl   $0x0,0x8(%esp)
0858ff7b +0x093:  mov    %eax,0x4(%esp)
0858ff7f +0x097:  mov    0xc(%ebp),%eax
0858ff82 +0x09a:  mov    %eax,(%esp)
0858ff85 +0x09d:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0858ff8a +0x0a2:  movl   $0x1,0x4(%esp)
0858ff92 +0x0aa:  lea    -0x14(%ebp),%eax
0858ff95 +0x0ad:  mov    %eax,(%esp)
0858ff98 +0x0b0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0858ff9d +0x0b5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0858ffa2 +0x0ba:  mov    0xc(%ebp),%edx
0858ffa5 +0x0bd:  mov    %edx,0x8(%esp)
0858ffa9 +0x0c1:  lea    -0x14(%ebp),%edx
0858ffac +0x0c4:  mov    %edx,0x4(%esp)
0858ffb0 +0x0c8:  mov    %eax,(%esp)
0858ffb3 +0x0cb:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0858ffb8 +0x0d0:  mov    $0x1,%ebx
0858ffbd +0x0d5:  lea    -0x14(%ebp),%eax
0858ffc0 +0x0d8:  mov    %eax,(%esp)
0858ffc3 +0x0db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858ffc8 +0x0e0:  jmp    0858ffe5 <+0xfd>
0858ffca +0x0e2:  mov    %edx,%ebx
0858ffcc +0x0e4:  mov    %eax,%esi
0858ffce +0x0e6:  lea    -0x14(%ebp),%eax
0858ffd1 +0x0e9:  mov    %eax,(%esp)
0858ffd4 +0x0ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858ffd9 +0x0f1:  mov    %esi,%eax
0858ffdb +0x0f3:  mov    %ebx,%edx
0858ffdd +0x0f5:  mov    %eax,(%esp)
0858ffe0 +0x0f8:  call   08ae3750 <_Unwind_Resume>
0858ffe5 +0x0fd:  mov    %ebx,%eax
0858ffe7 +0x0ff:  add    $0x20,%esp
0858ffea +0x102:  pop    %ebx
0858ffeb +0x103:  pop    %esi
0858ffec +0x104:  pop    %ebp
0858ffed +0x105:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp @ 0x858fee8

/* DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandUserPowerwarPointUp
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    CUserCharacInfo::IncreasePowerWarPoint
              ((CUserCharacInfo *)param_1,(short)*(undefined4 *)(param_2 + 0xe));
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0858ff45 to 0858ffb7 has its CatchHandler @ 0858ffca */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return cVar1 == '\x01';
}
```
