# generatePowerUp

`_ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi`

`TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int)`

| 类 | 地址 |
|---|---|
| `TimerGeneratePowerUp` | `0x08638960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08638960  _ZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEi
#           TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int)
# range [0x08638960, 0x08638aab]
08638960 +0x000:  push   %ebp
08638961 +0x001:  mov    %esp,%ebp
08638963 +0x003:  push   %esi
08638964 +0x004:  push   %ebx
08638965 +0x005:  sub    $0x50,%esp
08638968 +0x008:  mov    0xc(%ebp),%eax
0863896b +0x00b:  mov    %eax,(%esp)
0863896e +0x00e:  call   082f1b90 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x1914>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x1914
08638973 +0x013:  mov    %eax,-0x1c(%ebp)
08638976 +0x016:  movl   $0x0,-0x18(%ebp)
0863897d +0x01d:  movl   $0x0,-0x14(%ebp)
08638984 +0x024:  movl   $0x0,-0x30(%ebp)
0863898b +0x02b:  movl   $0x2710,-0x10(%ebp)
08638992 +0x032:  movl   $0x0,-0xc(%ebp)
08638999 +0x039:  lea    -0x3c(%ebp),%eax
0863899c +0x03c:  mov    %eax,(%esp)
0863899f +0x03f:  call   082f1b1e <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18a2>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18a2
086389a4 +0x044:  jmp    08638a50 <+0xf0>
086389a9 +0x049:  call   0807dca0 <_init+0x598>
086389ae +0x04e:  mov    %eax,%edx
086389b0 +0x050:  sar    $0x1f,%edx
086389b3 +0x053:  idivl  -0x1c(%ebp)
086389b6 +0x056:  mov    %edx,-0x14(%ebp)
086389b9 +0x059:  mov    -0x14(%ebp),%eax
086389bc +0x05c:  mov    %eax,0x4(%esp)
086389c0 +0x060:  mov    0xc(%ebp),%eax
086389c3 +0x063:  mov    %eax,(%esp)
086389c6 +0x066:  call   082f2ad6 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x285a>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x285a
086389cb +0x06b:  mov    (%eax),%eax
086389cd +0x06d:  mov    %eax,-0x30(%ebp)
086389d0 +0x070:  mov    -0x30(%ebp),%eax
086389d3 +0x073:  mov    %eax,(%esp)
086389d6 +0x076:  call   0863be64 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x375>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x375
086389db +0x07b:  xor    $0x1,%eax
086389de +0x07e:  test   %al,%al
086389e0 +0x080:  je     08638a0b <+0xab>
086389e2 +0x082:  mov    -0x30(%ebp),%eax
086389e5 +0x085:  movl   $0x1,0x4(%esp)
086389ed +0x08d:  mov    %eax,(%esp)
086389f0 +0x090:  call   08595078 <_GLOBAL__I__ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND+0x58>  ; global constructors keyed to DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)+0x58
086389f5 +0x095:  lea    -0x30(%ebp),%eax
086389f8 +0x098:  mov    %eax,0x4(%esp)
086389fc +0x09c:  lea    -0x3c(%ebp),%eax
086389ff +0x09f:  mov    %eax,(%esp)
08638a02 +0x0a2:  call   08551088 <_GLOBAL__I__ZN10CLuckPointC2Ev+0xdb>  ; global constructors keyed to CLuckPoint::CLuckPoint()+0xdb
08638a07 +0x0a7:  addl   $0x1,-0x18(%ebp)
08638a0b +0x0ab:  addl   $0x1,-0xc(%ebp)
08638a0f +0x0af:  cmpl   $0x2710,-0xc(%ebp)
08638a16 +0x0b6:  jle    08638a50 <+0xf0>
08638a18 +0x0b8:  movl   $0x5,0xc(%esp)
08638a20 +0x0c0:  movl   $0x104e,0x8(%esp)
08638a28 +0x0c8:  movl   $&_ZZN20TimerGeneratePowerUp15generatePowerUpERSt6vectorIP5CUserSaIS2_EEiE19__PRETTY_FUNCTION__,0x4(%esp)
08638a30 +0x0d0:  lea    -0x2c(%ebp),%eax
08638a33 +0x0d3:  mov    %eax,(%esp)
08638a36 +0x0d6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08638a3b +0x0db:  movl   $"Generate Power Up Party Failure",0x4(%esp)
08638a43 +0x0e3:  lea    -0x2c(%ebp),%eax
08638a46 +0x0e6:  mov    %eax,(%esp)
08638a49 +0x0e9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08638a4e +0x0ee:  jmp    08638a61 <+0x101>
08638a50 +0x0f0:  mov    0x10(%ebp),%eax
08638a53 +0x0f3:  cmp    -0x18(%ebp),%eax
08638a56 +0x0f6:  setg   %al
08638a59 +0x0f9:  test   %al,%al
08638a5b +0x0fb:  jne    086389a9 <+0x49>
08638a61 +0x101:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08638a66 +0x106:  lea    -0x3c(%ebp),%edx
08638a69 +0x109:  mov    %edx,0x8(%esp)
08638a6d +0x10d:  movl   $0x1,0x4(%esp)
08638a75 +0x115:  mov    %eax,(%esp)
08638a78 +0x118:  call   086cf46a <_ZN9GameWorld15SendPowerUpListE27ENUM_POWER_UP_ACTIVATE_TYPERSt6vectorIP5CUserSaIS3_EE>  ; GameWorld::SendPowerUpList(ENUM_POWER_UP_ACTIVATE_TYPE, std::vector<CUser*, std::allocator<CUser*> >&)
08638a7d +0x11d:  jmp    08638a9a <+0x13a>
08638a7f +0x11f:  mov    %edx,%ebx
08638a81 +0x121:  mov    %eax,%esi
08638a83 +0x123:  lea    -0x3c(%ebp),%eax
08638a86 +0x126:  mov    %eax,(%esp)
08638a89 +0x129:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
08638a8e +0x12e:  mov    %esi,%eax
08638a90 +0x130:  mov    %ebx,%edx
08638a92 +0x132:  mov    %eax,(%esp)
08638a95 +0x135:  call   08ae3750 <_Unwind_Resume>
08638a9a +0x13a:  lea    -0x3c(%ebp),%eax
08638a9d +0x13d:  mov    %eax,(%esp)
08638aa0 +0x140:  call   082f1b32 <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x18b6>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x18b6
08638aa5 +0x145:  add    $0x50,%esp
08638aa8 +0x148:  pop    %ebx
08638aa9 +0x149:  pop    %esi
08638aaa +0x14a:  pop    %ebp
08638aab +0x14b:  ret
```

## 反编译 C

```c
// TimerGeneratePowerUp::generatePowerUp @ 0x8638960

/* TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int) */

void __thiscall
TimerGeneratePowerUp::generatePowerUp(TimerGeneratePowerUp *this,vector *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  GameWorld *pGVar4;
  vector<CUser*,std::allocator<CUser*>> local_40 [12];
  CUser *local_34;
  cMyTrace local_30 [16];
  int local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  int local_10;
  
  local_20 = std::vector<CUser*,std::allocator<CUser*>>::size
                       ((vector<CUser*,std::allocator<CUser*>> *)param_1);
  local_1c = 0;
  local_18 = 0;
  local_34 = (CUser *)0x0;
  local_14 = 10000;
  local_10 = 0;
  std::vector<CUser*,std::allocator<CUser*>>::vector(local_40);
  do {
    if (param_2 <= local_1c) goto LAB_08638a61;
    iVar2 = rand();
    local_18 = iVar2 % local_20;
    puVar3 = (undefined4 *)
             std::vector<CUser*,std::allocator<CUser*>>::operator[]
                       ((vector<CUser*,std::allocator<CUser*>> *)param_1,local_18);
    local_34 = (CUser *)*puVar3;
    cVar1 = CUser::IsPowerUp(local_34);
    if (cVar1 != '\x01') {
      CUser::SetPowerUp(local_34,true);
                    /* try { // try from 08638a02 to 08638a7c has its CatchHandler @ 08638a7f */
      std::vector<CUser*,std::allocator<CUser*>>::push_back(local_40,&local_34);
      local_1c = local_1c + 1;
    }
    local_10 = local_10 + 1;
  } while (local_10 < 0x2711);
  cMyTrace::cMyTrace(local_30,
                     "void TimerGeneratePowerUp::generatePowerUp(std::vector<CUser*, std::allocator<CUser*> >&, int)"
                     ,0x104e,5);
  cMyTrace::operator()(local_30,"Generate Power Up Party Failure");
LAB_08638a61:
  pGVar4 = (GameWorld *)G_GameWorld();
  GameWorld::SendPowerUpList(pGVar4,1,local_40);
  std::vector<CUser*,std::allocator<CUser*>>::~vector(local_40);
  return;
}
```
