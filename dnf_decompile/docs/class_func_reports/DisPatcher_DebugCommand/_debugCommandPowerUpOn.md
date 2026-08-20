# _debugCommandPowerUpOn

`_ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858ffee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858ffee  _ZN23DisPatcher_DebugCommand22_debugCommandPowerUpOnEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858ffee, 0x08590091]
0858ffee +0x00:  push   %ebp
0858ffef +0x01:  mov    %esp,%ebp
0858fff1 +0x03:  push   %esi
0858fff2 +0x04:  push   %ebx
0858fff3 +0x05:  sub    $0x20,%esp
0858fff6 +0x08:  mov    0xc(%ebp),%eax
0858fff9 +0x0b:  mov    %eax,(%esp)
0858fffc +0x0e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
08590001 +0x13:  xor    $0x1,%eax
08590004 +0x16:  test   %al,%al
08590006 +0x18:  je     0859000f <+0x21>
08590008 +0x1a:  mov    $0x0,%ebx
0859000d +0x1f:  jmp    08590088 <+0x9a>
0859000f +0x21:  mov    0xc(%ebp),%eax
08590012 +0x24:  movl   $0x1,0x4(%esp)
0859001a +0x2c:  mov    %eax,(%esp)
0859001d +0x2f:  call   08595078 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x58>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x58
08590022 +0x34:  lea    -0x14(%ebp),%eax
08590025 +0x37:  mov    %eax,(%esp)
08590028 +0x3a:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
0859002d +0x3f:  lea    0xc(%ebp),%eax
08590030 +0x42:  mov    %eax,0x4(%esp)
08590034 +0x46:  lea    -0x14(%ebp),%eax
08590037 +0x49:  mov    %eax,(%esp)
0859003a +0x4c:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
0859003f +0x51:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08590044 +0x56:  lea    -0x14(%ebp),%edx
08590047 +0x59:  mov    %edx,0x8(%esp)
0859004b +0x5d:  movl   $0x1,0x4(%esp)
08590053 +0x65:  mov    %eax,(%esp)
08590056 +0x68:  call   086cf46a <_ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE>  ; GameWorld::SendPowerUpList(ENUM_POWER_UP_ACTIVATE_TYPE, std::vector<CUser*, std::allocator<CUser*> >&)
0859005b +0x6d:  mov    $0x1,%ebx
08590060 +0x72:  lea    -0x14(%ebp),%eax
08590063 +0x75:  mov    %eax,(%esp)
08590066 +0x78:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0859006b +0x7d:  jmp    08590088 <+0x9a>
0859006d +0x7f:  mov    %edx,%ebx
0859006f +0x81:  mov    %eax,%esi
08590071 +0x83:  lea    -0x14(%ebp),%eax
08590074 +0x86:  mov    %eax,(%esp)
08590077 +0x89:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
0859007c +0x8e:  mov    %esi,%eax
0859007e +0x90:  mov    %ebx,%edx
08590080 +0x92:  mov    %eax,(%esp)
08590083 +0x95:  call   08ae3750 <_Unwind_Resume>
08590088 +0x9a:  mov    %ebx,%eax
0859008a +0x9c:  add    $0x20,%esp
0859008d +0x9f:  pop    %ebx
0859008e +0xa0:  pop    %esi
0859008f +0xa1:  pop    %ebp
08590090 +0xa2:  ret
08590091 +0xa3:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandPowerUpOn @ 0x858ffee

/* DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser*, MSG_DEBUG_COMMAND&) */

bool DisPatcher_DebugCommand::_debugCommandPowerUpOn(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  GameWorld *pGVar2;
  vector<CUser*,std::allocator<CUser*>> local_18 [12];
  
  cVar1 = CUser::isGMUser((CUser *)param_2);
  if (cVar1 == '\x01') {
    CUser::SetPowerUp((CUser *)param_2,true);
    std::vector<CUser*,std::allocator<CUser*>>::vector(local_18);
                    /* try { // try from 0859003a to 0859005a has its CatchHandler @ 0859006d */
    std::vector<CUser*,std::allocator<CUser*>>::push_back(local_18,(CUser **)&param_2);
    pGVar2 = (GameWorld *)G_GameWorld();
    GameWorld::SendPowerUpList(pGVar2,1,local_18);
    std::vector<CUser*,std::allocator<CUser*>>::~vector(local_18);
  }
  return cVar1 == '\x01';
}
```
