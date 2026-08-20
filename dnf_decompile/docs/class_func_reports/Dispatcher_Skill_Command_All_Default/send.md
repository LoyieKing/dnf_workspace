# send

`_ZN36Dispatcher_Skill_Command_All_Default4sendEP5CUserR9ParamBase`

`Dispatcher_Skill_Command_All_Default::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Skill_Command_All_Default` | `0x081d2f34` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2f34  _ZN36Dispatcher_Skill_Command_All_Default4sendEP5CUserR9ParamBase
#           Dispatcher_Skill_Command_All_Default::send(CUser*, ParamBase&)
# range [0x081d2f34, 0x081d307d]
081d2f34 +0x000:  push   %ebp
081d2f35 +0x001:  mov    %esp,%ebp
081d2f37 +0x003:  push   %esi
081d2f38 +0x004:  push   %ebx
081d2f39 +0x005:  sub    $0x30,%esp
081d2f3c +0x008:  mov    0x10(%ebp),%eax
081d2f3f +0x00b:  mov    %eax,-0xc(%ebp)
081d2f42 +0x00e:  mov    -0xc(%ebp),%eax
081d2f45 +0x011:  mov    0x4(%eax),%eax
081d2f48 +0x014:  test   %eax,%eax
081d2f4a +0x016:  jne    081d2fdb <+0xa7>
081d2f50 +0x01c:  lea    -0x18(%ebp),%eax
081d2f53 +0x01f:  mov    %eax,(%esp)
081d2f56 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d2f5b +0x027:  movl   $0x14d,0x8(%esp)
081d2f63 +0x02f:  movl   $0x1,0x4(%esp)
081d2f6b +0x037:  lea    -0x18(%ebp),%eax
081d2f6e +0x03a:  mov    %eax,(%esp)
081d2f71 +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d2f76 +0x042:  movl   $0x1,0x4(%esp)
081d2f7e +0x04a:  lea    -0x18(%ebp),%eax
081d2f81 +0x04d:  mov    %eax,(%esp)
081d2f84 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d2f89 +0x055:  movl   $0x1,0x4(%esp)
081d2f91 +0x05d:  lea    -0x18(%ebp),%eax
081d2f94 +0x060:  mov    %eax,(%esp)
081d2f97 +0x063:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d2f9c +0x068:  lea    -0x18(%ebp),%eax
081d2f9f +0x06b:  mov    %eax,0x4(%esp)
081d2fa3 +0x06f:  mov    0xc(%ebp),%eax
081d2fa6 +0x072:  mov    %eax,(%esp)
081d2fa9 +0x075:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d2fae +0x07a:  jmp    081d2fcb <+0x97>
081d2fb0 +0x07c:  mov    %edx,%ebx
081d2fb2 +0x07e:  mov    %eax,%esi
081d2fb4 +0x080:  lea    -0x18(%ebp),%eax
081d2fb7 +0x083:  mov    %eax,(%esp)
081d2fba +0x086:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d2fbf +0x08b:  mov    %esi,%eax
081d2fc1 +0x08d:  mov    %ebx,%edx
081d2fc3 +0x08f:  mov    %eax,(%esp)
081d2fc6 +0x092:  call   08ae3750 <_Unwind_Resume>
081d2fcb +0x097:  lea    -0x18(%ebp),%eax
081d2fce +0x09a:  mov    %eax,(%esp)
081d2fd1 +0x09d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d2fd6 +0x0a2:  jmp    081d3076 <+0x142>
081d2fdb +0x0a7:  lea    -0x24(%ebp),%eax
081d2fde +0x0aa:  mov    %eax,(%esp)
081d2fe1 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d2fe6 +0x0b2:  movl   $0x14d,0x8(%esp)
081d2fee +0x0ba:  movl   $0x1,0x4(%esp)
081d2ff6 +0x0c2:  lea    -0x24(%ebp),%eax
081d2ff9 +0x0c5:  mov    %eax,(%esp)
081d2ffc +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d3001 +0x0cd:  movl   $0x0,0x4(%esp)
081d3009 +0x0d5:  lea    -0x24(%ebp),%eax
081d300c +0x0d8:  mov    %eax,(%esp)
081d300f +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d3014 +0x0e0:  mov    -0xc(%ebp),%eax
081d3017 +0x0e3:  mov    0x4(%eax),%eax
081d301a +0x0e6:  mov    %eax,0x4(%esp)
081d301e +0x0ea:  lea    -0x24(%ebp),%eax
081d3021 +0x0ed:  mov    %eax,(%esp)
081d3024 +0x0f0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d3029 +0x0f5:  movl   $0x1,0x4(%esp)
081d3031 +0x0fd:  lea    -0x24(%ebp),%eax
081d3034 +0x100:  mov    %eax,(%esp)
081d3037 +0x103:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d303c +0x108:  lea    -0x24(%ebp),%eax
081d303f +0x10b:  mov    %eax,0x4(%esp)
081d3043 +0x10f:  mov    0xc(%ebp),%eax
081d3046 +0x112:  mov    %eax,(%esp)
081d3049 +0x115:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d304e +0x11a:  jmp    081d306b <+0x137>
081d3050 +0x11c:  mov    %edx,%ebx
081d3052 +0x11e:  mov    %eax,%esi
081d3054 +0x120:  lea    -0x24(%ebp),%eax
081d3057 +0x123:  mov    %eax,(%esp)
081d305a +0x126:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d305f +0x12b:  mov    %esi,%eax
081d3061 +0x12d:  mov    %ebx,%edx
081d3063 +0x12f:  mov    %eax,(%esp)
081d3066 +0x132:  call   08ae3750 <_Unwind_Resume>
081d306b +0x137:  lea    -0x24(%ebp),%eax
081d306e +0x13a:  mov    %eax,(%esp)
081d3071 +0x13d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3076 +0x142:  add    $0x30,%esp
081d3079 +0x145:  pop    %ebx
081d307a +0x146:  pop    %esi
081d307b +0x147:  pop    %ebp
081d307c +0x148:  ret
081d307d +0x149:  nop
```

## 反编译 C

```c
// Dispatcher_Skill_Command_All_Default::send @ 0x81d2f34

/* Dispatcher_Skill_Command_All_Default::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Skill_Command_All_Default::send
          (Dispatcher_Skill_Command_All_Default *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d2f71 to 081d2fad has its CatchHandler @ 081d2fb0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d2ffc to 081d304d has its CatchHandler @ 081d3050 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x14d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
