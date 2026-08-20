# send

`_ZN28Dispatcher_FatigueAttendance4sendEP5CUserR9ParamBase`

`Dispatcher_FatigueAttendance::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_FatigueAttendance` | `0x081db392` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081db392  _ZN28Dispatcher_FatigueAttendance4sendEP5CUserR9ParamBase
#           Dispatcher_FatigueAttendance::send(CUser*, ParamBase&)
# range [0x081db392, 0x081db4c3]
081db392 +0x000:  push   %ebp
081db393 +0x001:  mov    %esp,%ebp
081db395 +0x003:  push   %esi
081db396 +0x004:  push   %ebx
081db397 +0x005:  sub    $0x20,%esp
081db39a +0x008:  mov    0x10(%ebp),%eax
081db39d +0x00b:  mov    %eax,-0xc(%ebp)
081db3a0 +0x00e:  lea    -0x18(%ebp),%eax
081db3a3 +0x011:  mov    %eax,(%esp)
081db3a6 +0x014:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081db3ab +0x019:  lea    -0x18(%ebp),%eax
081db3ae +0x01c:  mov    %eax,(%esp)
081db3b1 +0x01f:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081db3b6 +0x024:  movl   $0x1ad,0x8(%esp)
081db3be +0x02c:  movl   $0x1,0x4(%esp)
081db3c6 +0x034:  lea    -0x18(%ebp),%eax
081db3c9 +0x037:  mov    %eax,(%esp)
081db3cc +0x03a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081db3d1 +0x03f:  mov    -0xc(%ebp),%eax
081db3d4 +0x042:  mov    0x4(%eax),%eax
081db3d7 +0x045:  test   %eax,%eax
081db3d9 +0x047:  jne    081db42f <+0x9d>
081db3db +0x049:  movl   $0x1,0x4(%esp)
081db3e3 +0x051:  lea    -0x18(%ebp),%eax
081db3e6 +0x054:  mov    %eax,(%esp)
081db3e9 +0x057:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081db3ee +0x05c:  mov    -0xc(%ebp),%eax
081db3f1 +0x05f:  mov    0x8(%eax),%eax
081db3f4 +0x062:  mov    %eax,0x4(%esp)
081db3f8 +0x066:  lea    -0x18(%ebp),%eax
081db3fb +0x069:  mov    %eax,(%esp)
081db3fe +0x06c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081db403 +0x071:  mov    -0xc(%ebp),%eax
081db406 +0x074:  mov    0xc(%eax),%eax
081db409 +0x077:  mov    %eax,0x4(%esp)
081db40d +0x07b:  lea    -0x18(%ebp),%eax
081db410 +0x07e:  mov    %eax,(%esp)
081db413 +0x081:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081db418 +0x086:  mov    -0xc(%ebp),%eax
081db41b +0x089:  mov    0x10(%eax),%eax
081db41e +0x08c:  mov    %eax,0x4(%esp)
081db422 +0x090:  lea    -0x18(%ebp),%eax
081db425 +0x093:  mov    %eax,(%esp)
081db428 +0x096:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081db42d +0x09b:  jmp    081db46f <+0xdd>
081db42f +0x09d:  movl   $0x0,0x4(%esp)
081db437 +0x0a5:  lea    -0x18(%ebp),%eax
081db43a +0x0a8:  mov    %eax,(%esp)
081db43d +0x0ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081db442 +0x0b0:  mov    -0xc(%ebp),%eax
081db445 +0x0b3:  mov    0x4(%eax),%eax
081db448 +0x0b6:  movsbl %al,%eax
081db44b +0x0b9:  mov    %eax,0x4(%esp)
081db44f +0x0bd:  lea    -0x18(%ebp),%eax
081db452 +0x0c0:  mov    %eax,(%esp)
081db455 +0x0c3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081db45a +0x0c8:  mov    -0xc(%ebp),%eax
081db45d +0x0cb:  mov    0x8(%eax),%eax
081db460 +0x0ce:  mov    %eax,0x4(%esp)
081db464 +0x0d2:  lea    -0x18(%ebp),%eax
081db467 +0x0d5:  mov    %eax,(%esp)
081db46a +0x0d8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081db46f +0x0dd:  movl   $0x1,0x4(%esp)
081db477 +0x0e5:  lea    -0x18(%ebp),%eax
081db47a +0x0e8:  mov    %eax,(%esp)
081db47d +0x0eb:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081db482 +0x0f0:  lea    -0x18(%ebp),%eax
081db485 +0x0f3:  mov    %eax,0x4(%esp)
081db489 +0x0f7:  mov    0xc(%ebp),%eax
081db48c +0x0fa:  mov    %eax,(%esp)
081db48f +0x0fd:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081db494 +0x102:  jmp    081db4b1 <+0x11f>
081db496 +0x104:  mov    %edx,%ebx
081db498 +0x106:  mov    %eax,%esi
081db49a +0x108:  lea    -0x18(%ebp),%eax
081db49d +0x10b:  mov    %eax,(%esp)
081db4a0 +0x10e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081db4a5 +0x113:  mov    %esi,%eax
081db4a7 +0x115:  mov    %ebx,%edx
081db4a9 +0x117:  mov    %eax,(%esp)
081db4ac +0x11a:  call   08ae3750 <_Unwind_Resume>
081db4b1 +0x11f:  lea    -0x18(%ebp),%eax
081db4b4 +0x122:  mov    %eax,(%esp)
081db4b7 +0x125:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081db4bc +0x12a:  add    $0x20,%esp
081db4bf +0x12d:  pop    %ebx
081db4c0 +0x12e:  pop    %esi
081db4c1 +0x12f:  pop    %ebp
081db4c2 +0x130:  ret
081db4c3 +0x131:  nop
```

## 反编译 C

```c
// Dispatcher_FatigueAttendance::send @ 0x81db392

/* Dispatcher_FatigueAttendance::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_FatigueAttendance::send
          (Dispatcher_FatigueAttendance *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081db3b1 to 081db493 has its CatchHandler @ 081db496 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ad);
  if (*(int *)(local_10 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x10));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_1c,(int)(char)*(undefined4 *)(local_10 + 4));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
