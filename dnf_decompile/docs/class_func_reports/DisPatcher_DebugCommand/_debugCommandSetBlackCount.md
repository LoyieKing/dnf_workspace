# _debugCommandSetBlackCount

`_ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandSetBlackCount(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858fcc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858fcc4  _ZN23DisPatcher_DebugCommand26_debugCommandSetBlackCountEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandSetBlackCount(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858fcc4, 0x0858fdc7]
0858fcc4 +0x000:  push   %ebp
0858fcc5 +0x001:  mov    %esp,%ebp
0858fcc7 +0x003:  push   %esi
0858fcc8 +0x004:  push   %ebx
0858fcc9 +0x005:  sub    $0x20,%esp
0858fccc +0x008:  mov    0xc(%ebp),%eax
0858fccf +0x00b:  mov    %eax,(%esp)
0858fcd2 +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858fcd7 +0x013:  xor    $0x1,%eax
0858fcda +0x016:  test   %al,%al
0858fcdc +0x018:  je     0858fce8 <+0x24>
0858fcde +0x01a:  mov    $0x0,%ebx
0858fce3 +0x01f:  jmp    0858fdbe <+0xfa>
0858fce8 +0x024:  mov    0x10(%ebp),%eax
0858fceb +0x027:  mov    0xe(%eax),%edx
0858fcee +0x02a:  mov    0xc(%ebp),%eax
0858fcf1 +0x02d:  mov    %edx,0x4(%esp)
0858fcf5 +0x031:  mov    %eax,(%esp)
0858fcf8 +0x034:  call   0822f6b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4d5e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4d5e
0858fcfd +0x039:  lea    -0x14(%ebp),%eax
0858fd00 +0x03c:  mov    %eax,(%esp)
0858fd03 +0x03f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858fd08 +0x044:  movl   $0x2,0x8(%esp)
0858fd10 +0x04c:  movl   $0x0,0x4(%esp)
0858fd18 +0x054:  lea    -0x14(%ebp),%eax
0858fd1b +0x057:  mov    %eax,(%esp)
0858fd1e +0x05a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0858fd23 +0x05f:  movl   $0x0,0x4(%esp)
0858fd2b +0x067:  lea    -0x14(%ebp),%eax
0858fd2e +0x06a:  mov    %eax,(%esp)
0858fd31 +0x06d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0858fd36 +0x072:  movl   $0x1,0x4(%esp)
0858fd3e +0x07a:  lea    -0x14(%ebp),%eax
0858fd41 +0x07d:  mov    %eax,(%esp)
0858fd44 +0x080:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0858fd49 +0x085:  lea    -0x14(%ebp),%eax
0858fd4c +0x088:  movl   $0x0,0x8(%esp)
0858fd54 +0x090:  mov    %eax,0x4(%esp)
0858fd58 +0x094:  mov    0xc(%ebp),%eax
0858fd5b +0x097:  mov    %eax,(%esp)
0858fd5e +0x09a:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0858fd63 +0x09f:  movl   $0x1,0x4(%esp)
0858fd6b +0x0a7:  lea    -0x14(%ebp),%eax
0858fd6e +0x0aa:  mov    %eax,(%esp)
0858fd71 +0x0ad:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0858fd76 +0x0b2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0858fd7b +0x0b7:  mov    0xc(%ebp),%edx
0858fd7e +0x0ba:  mov    %edx,0x8(%esp)
0858fd82 +0x0be:  lea    -0x14(%ebp),%edx
0858fd85 +0x0c1:  mov    %edx,0x4(%esp)
0858fd89 +0x0c5:  mov    %eax,(%esp)
0858fd8c +0x0c8:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0858fd91 +0x0cd:  mov    $0x1,%ebx
0858fd96 +0x0d2:  lea    -0x14(%ebp),%eax
0858fd99 +0x0d5:  mov    %eax,(%esp)
0858fd9c +0x0d8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858fda1 +0x0dd:  jmp    0858fdbe <+0xfa>
0858fda3 +0x0df:  mov    %edx,%ebx
0858fda5 +0x0e1:  mov    %eax,%esi
0858fda7 +0x0e3:  lea    -0x14(%ebp),%eax
0858fdaa +0x0e6:  mov    %eax,(%esp)
0858fdad +0x0e9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858fdb2 +0x0ee:  mov    %esi,%eax
0858fdb4 +0x0f0:  mov    %ebx,%edx
0858fdb6 +0x0f2:  mov    %eax,(%esp)
0858fdb9 +0x0f5:  call   08ae3750 <_Unwind_Resume>
0858fdbe +0x0fa:  mov    %ebx,%eax
0858fdc0 +0x0fc:  add    $0x20,%esp
0858fdc3 +0x0ff:  pop    %ebx
0858fdc4 +0x100:  pop    %esi
0858fdc5 +0x101:  pop    %ebp
0858fdc6 +0x102:  ret
0858fdc7 +0x103:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandSetBlackCount @ 0x858fcc4

/* DisPatcher_DebugCommand::_debugCommandSetBlackCount(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandSetBlackCount
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    CUserCharacInfo::setCurrCharacBlackCount((CUserCharacInfo *)param_1,*(uint *)(param_2 + 0xe));
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0858fd1e to 0858fd90 has its CatchHandler @ 0858fda3 */
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
