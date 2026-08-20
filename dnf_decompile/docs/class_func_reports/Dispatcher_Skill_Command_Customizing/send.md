# send

`_ZN36Dispatcher_Skill_Command_Customizing4sendEP5CUserR9ParamBase`

`Dispatcher_Skill_Command_Customizing::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Skill_Command_Customizing` | `0x081d2da4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d2da4  _ZN36Dispatcher_Skill_Command_Customizing4sendEP5CUserR9ParamBase
#           Dispatcher_Skill_Command_Customizing::send(CUser*, ParamBase&)
# range [0x081d2da4, 0x081d2eed]
081d2da4 +0x000:  push   %ebp
081d2da5 +0x001:  mov    %esp,%ebp
081d2da7 +0x003:  push   %esi
081d2da8 +0x004:  push   %ebx
081d2da9 +0x005:  sub    $0x30,%esp
081d2dac +0x008:  mov    0x10(%ebp),%eax
081d2daf +0x00b:  mov    %eax,-0xc(%ebp)
081d2db2 +0x00e:  mov    -0xc(%ebp),%eax
081d2db5 +0x011:  mov    0x4(%eax),%eax
081d2db8 +0x014:  test   %eax,%eax
081d2dba +0x016:  jne    081d2e4b <+0xa7>
081d2dc0 +0x01c:  lea    -0x18(%ebp),%eax
081d2dc3 +0x01f:  mov    %eax,(%esp)
081d2dc6 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d2dcb +0x027:  movl   $0x14c,0x8(%esp)
081d2dd3 +0x02f:  movl   $0x1,0x4(%esp)
081d2ddb +0x037:  lea    -0x18(%ebp),%eax
081d2dde +0x03a:  mov    %eax,(%esp)
081d2de1 +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d2de6 +0x042:  movl   $0x1,0x4(%esp)
081d2dee +0x04a:  lea    -0x18(%ebp),%eax
081d2df1 +0x04d:  mov    %eax,(%esp)
081d2df4 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d2df9 +0x055:  movl   $0x1,0x4(%esp)
081d2e01 +0x05d:  lea    -0x18(%ebp),%eax
081d2e04 +0x060:  mov    %eax,(%esp)
081d2e07 +0x063:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d2e0c +0x068:  lea    -0x18(%ebp),%eax
081d2e0f +0x06b:  mov    %eax,0x4(%esp)
081d2e13 +0x06f:  mov    0xc(%ebp),%eax
081d2e16 +0x072:  mov    %eax,(%esp)
081d2e19 +0x075:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d2e1e +0x07a:  jmp    081d2e3b <+0x97>
081d2e20 +0x07c:  mov    %edx,%ebx
081d2e22 +0x07e:  mov    %eax,%esi
081d2e24 +0x080:  lea    -0x18(%ebp),%eax
081d2e27 +0x083:  mov    %eax,(%esp)
081d2e2a +0x086:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d2e2f +0x08b:  mov    %esi,%eax
081d2e31 +0x08d:  mov    %ebx,%edx
081d2e33 +0x08f:  mov    %eax,(%esp)
081d2e36 +0x092:  call   08ae3750 <_Unwind_Resume>
081d2e3b +0x097:  lea    -0x18(%ebp),%eax
081d2e3e +0x09a:  mov    %eax,(%esp)
081d2e41 +0x09d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d2e46 +0x0a2:  jmp    081d2ee6 <+0x142>
081d2e4b +0x0a7:  lea    -0x24(%ebp),%eax
081d2e4e +0x0aa:  mov    %eax,(%esp)
081d2e51 +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d2e56 +0x0b2:  movl   $0x14c,0x8(%esp)
081d2e5e +0x0ba:  movl   $0x1,0x4(%esp)
081d2e66 +0x0c2:  lea    -0x24(%ebp),%eax
081d2e69 +0x0c5:  mov    %eax,(%esp)
081d2e6c +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d2e71 +0x0cd:  movl   $0x0,0x4(%esp)
081d2e79 +0x0d5:  lea    -0x24(%ebp),%eax
081d2e7c +0x0d8:  mov    %eax,(%esp)
081d2e7f +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d2e84 +0x0e0:  mov    -0xc(%ebp),%eax
081d2e87 +0x0e3:  mov    0x4(%eax),%eax
081d2e8a +0x0e6:  mov    %eax,0x4(%esp)
081d2e8e +0x0ea:  lea    -0x24(%ebp),%eax
081d2e91 +0x0ed:  mov    %eax,(%esp)
081d2e94 +0x0f0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d2e99 +0x0f5:  movl   $0x1,0x4(%esp)
081d2ea1 +0x0fd:  lea    -0x24(%ebp),%eax
081d2ea4 +0x100:  mov    %eax,(%esp)
081d2ea7 +0x103:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d2eac +0x108:  lea    -0x24(%ebp),%eax
081d2eaf +0x10b:  mov    %eax,0x4(%esp)
081d2eb3 +0x10f:  mov    0xc(%ebp),%eax
081d2eb6 +0x112:  mov    %eax,(%esp)
081d2eb9 +0x115:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d2ebe +0x11a:  jmp    081d2edb <+0x137>
081d2ec0 +0x11c:  mov    %edx,%ebx
081d2ec2 +0x11e:  mov    %eax,%esi
081d2ec4 +0x120:  lea    -0x24(%ebp),%eax
081d2ec7 +0x123:  mov    %eax,(%esp)
081d2eca +0x126:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d2ecf +0x12b:  mov    %esi,%eax
081d2ed1 +0x12d:  mov    %ebx,%edx
081d2ed3 +0x12f:  mov    %eax,(%esp)
081d2ed6 +0x132:  call   08ae3750 <_Unwind_Resume>
081d2edb +0x137:  lea    -0x24(%ebp),%eax
081d2ede +0x13a:  mov    %eax,(%esp)
081d2ee1 +0x13d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d2ee6 +0x142:  add    $0x30,%esp
081d2ee9 +0x145:  pop    %ebx
081d2eea +0x146:  pop    %esi
081d2eeb +0x147:  pop    %ebp
081d2eec +0x148:  ret
081d2eed +0x149:  nop
```

## 反编译 C

```c
// Dispatcher_Skill_Command_Customizing::send @ 0x81d2da4

/* Dispatcher_Skill_Command_Customizing::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Skill_Command_Customizing::send
          (Dispatcher_Skill_Command_Customizing *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d2de1 to 081d2e1d has its CatchHandler @ 081d2e20 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x14c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d2e6c to 081d2ebd has its CatchHandler @ 081d2ec0 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x14c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
