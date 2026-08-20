# send

`_ZN33Dispatcher_Break_Away_Quest_Check4sendEP5CUserR9ParamBase`

`Dispatcher_Break_Away_Quest_Check::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Break_Away_Quest_Check` | `0x081d3a72` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d3a72  _ZN33Dispatcher_Break_Away_Quest_Check4sendEP5CUserR9ParamBase
#           Dispatcher_Break_Away_Quest_Check::send(CUser*, ParamBase&)
# range [0x081d3a72, 0x081d3bbb]
081d3a72 +0x000:  push   %ebp
081d3a73 +0x001:  mov    %esp,%ebp
081d3a75 +0x003:  push   %esi
081d3a76 +0x004:  push   %ebx
081d3a77 +0x005:  sub    $0x30,%esp
081d3a7a +0x008:  mov    0x10(%ebp),%eax
081d3a7d +0x00b:  mov    %eax,-0xc(%ebp)
081d3a80 +0x00e:  mov    -0xc(%ebp),%eax
081d3a83 +0x011:  mov    0x4(%eax),%eax
081d3a86 +0x014:  test   %eax,%eax
081d3a88 +0x016:  jne    081d3b19 <+0xa7>
081d3a8e +0x01c:  lea    -0x18(%ebp),%eax
081d3a91 +0x01f:  mov    %eax,(%esp)
081d3a94 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d3a99 +0x027:  movl   $0x16d,0x8(%esp)
081d3aa1 +0x02f:  movl   $0x1,0x4(%esp)
081d3aa9 +0x037:  lea    -0x18(%ebp),%eax
081d3aac +0x03a:  mov    %eax,(%esp)
081d3aaf +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d3ab4 +0x042:  movl   $0x1,0x4(%esp)
081d3abc +0x04a:  lea    -0x18(%ebp),%eax
081d3abf +0x04d:  mov    %eax,(%esp)
081d3ac2 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d3ac7 +0x055:  movl   $0x1,0x4(%esp)
081d3acf +0x05d:  lea    -0x18(%ebp),%eax
081d3ad2 +0x060:  mov    %eax,(%esp)
081d3ad5 +0x063:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d3ada +0x068:  lea    -0x18(%ebp),%eax
081d3add +0x06b:  mov    %eax,0x4(%esp)
081d3ae1 +0x06f:  mov    0xc(%ebp),%eax
081d3ae4 +0x072:  mov    %eax,(%esp)
081d3ae7 +0x075:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d3aec +0x07a:  jmp    081d3b09 <+0x97>
081d3aee +0x07c:  mov    %edx,%ebx
081d3af0 +0x07e:  mov    %eax,%esi
081d3af2 +0x080:  lea    -0x18(%ebp),%eax
081d3af5 +0x083:  mov    %eax,(%esp)
081d3af8 +0x086:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3afd +0x08b:  mov    %esi,%eax
081d3aff +0x08d:  mov    %ebx,%edx
081d3b01 +0x08f:  mov    %eax,(%esp)
081d3b04 +0x092:  call   08ae3750 <_Unwind_Resume>
081d3b09 +0x097:  lea    -0x18(%ebp),%eax
081d3b0c +0x09a:  mov    %eax,(%esp)
081d3b0f +0x09d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3b14 +0x0a2:  jmp    081d3bb4 <+0x142>
081d3b19 +0x0a7:  lea    -0x24(%ebp),%eax
081d3b1c +0x0aa:  mov    %eax,(%esp)
081d3b1f +0x0ad:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d3b24 +0x0b2:  movl   $0x16d,0x8(%esp)
081d3b2c +0x0ba:  movl   $0x1,0x4(%esp)
081d3b34 +0x0c2:  lea    -0x24(%ebp),%eax
081d3b37 +0x0c5:  mov    %eax,(%esp)
081d3b3a +0x0c8:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d3b3f +0x0cd:  movl   $0x0,0x4(%esp)
081d3b47 +0x0d5:  lea    -0x24(%ebp),%eax
081d3b4a +0x0d8:  mov    %eax,(%esp)
081d3b4d +0x0db:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d3b52 +0x0e0:  mov    -0xc(%ebp),%eax
081d3b55 +0x0e3:  mov    0x4(%eax),%eax
081d3b58 +0x0e6:  mov    %eax,0x4(%esp)
081d3b5c +0x0ea:  lea    -0x24(%ebp),%eax
081d3b5f +0x0ed:  mov    %eax,(%esp)
081d3b62 +0x0f0:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d3b67 +0x0f5:  movl   $0x1,0x4(%esp)
081d3b6f +0x0fd:  lea    -0x24(%ebp),%eax
081d3b72 +0x100:  mov    %eax,(%esp)
081d3b75 +0x103:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d3b7a +0x108:  lea    -0x24(%ebp),%eax
081d3b7d +0x10b:  mov    %eax,0x4(%esp)
081d3b81 +0x10f:  mov    0xc(%ebp),%eax
081d3b84 +0x112:  mov    %eax,(%esp)
081d3b87 +0x115:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d3b8c +0x11a:  jmp    081d3ba9 <+0x137>
081d3b8e +0x11c:  mov    %edx,%ebx
081d3b90 +0x11e:  mov    %eax,%esi
081d3b92 +0x120:  lea    -0x24(%ebp),%eax
081d3b95 +0x123:  mov    %eax,(%esp)
081d3b98 +0x126:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3b9d +0x12b:  mov    %esi,%eax
081d3b9f +0x12d:  mov    %ebx,%edx
081d3ba1 +0x12f:  mov    %eax,(%esp)
081d3ba4 +0x132:  call   08ae3750 <_Unwind_Resume>
081d3ba9 +0x137:  lea    -0x24(%ebp),%eax
081d3bac +0x13a:  mov    %eax,(%esp)
081d3baf +0x13d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d3bb4 +0x142:  add    $0x30,%esp
081d3bb7 +0x145:  pop    %ebx
081d3bb8 +0x146:  pop    %esi
081d3bb9 +0x147:  pop    %ebp
081d3bba +0x148:  ret
081d3bbb +0x149:  nop
```

## 反编译 C

```c
// Dispatcher_Break_Away_Quest_Check::send @ 0x81d3a72

/* Dispatcher_Break_Away_Quest_Check::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Break_Away_Quest_Check::send
          (Dispatcher_Break_Away_Quest_Check *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d3aaf to 081d3aeb has its CatchHandler @ 081d3aee */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x16d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d3b3a to 081d3b8b has its CatchHandler @ 081d3b8e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x16d);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
