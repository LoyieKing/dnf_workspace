# send

`_ZN29Dispatcher_StackableActionUse4sendEP5CUserR9ParamBase`

`Dispatcher_StackableActionUse::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_StackableActionUse` | `0x0825e4ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0825e4ec  _ZN29Dispatcher_StackableActionUse4sendEP5CUserR9ParamBase
#           Dispatcher_StackableActionUse::send(CUser*, ParamBase&)
# range [0x0825e4ec, 0x0825e681]
0825e4ec +0x000:  push   %ebp
0825e4ed +0x001:  mov    %esp,%ebp
0825e4ef +0x003:  push   %esi
0825e4f0 +0x004:  push   %ebx
0825e4f1 +0x005:  sub    $0x30,%esp
0825e4f4 +0x008:  mov    0x10(%ebp),%eax
0825e4f7 +0x00b:  mov    %eax,-0xc(%ebp)
0825e4fa +0x00e:  mov    -0xc(%ebp),%eax
0825e4fd +0x011:  mov    0x4(%eax),%eax
0825e500 +0x014:  test   %eax,%eax
0825e502 +0x016:  je     0825e5c4 <+0xd8>
0825e508 +0x01c:  lea    -0x18(%ebp),%eax
0825e50b +0x01f:  mov    %eax,(%esp)
0825e50e +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825e513 +0x027:  movl   $0x204,0x8(%esp)
0825e51b +0x02f:  movl   $0x1,0x4(%esp)
0825e523 +0x037:  lea    -0x18(%ebp),%eax
0825e526 +0x03a:  mov    %eax,(%esp)
0825e529 +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825e52e +0x042:  movl   $0x0,0x4(%esp)
0825e536 +0x04a:  lea    -0x18(%ebp),%eax
0825e539 +0x04d:  mov    %eax,(%esp)
0825e53c +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e541 +0x055:  mov    -0xc(%ebp),%eax
0825e544 +0x058:  mov    0x4(%eax),%eax
0825e547 +0x05b:  movzbl %al,%eax
0825e54a +0x05e:  mov    %eax,0x4(%esp)
0825e54e +0x062:  lea    -0x18(%ebp),%eax
0825e551 +0x065:  mov    %eax,(%esp)
0825e554 +0x068:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e559 +0x06d:  mov    -0xc(%ebp),%eax
0825e55c +0x070:  movzbl 0xa(%eax),%eax
0825e560 +0x074:  movsbl %al,%eax
0825e563 +0x077:  mov    %eax,0x4(%esp)
0825e567 +0x07b:  lea    -0x18(%ebp),%eax
0825e56a +0x07e:  mov    %eax,(%esp)
0825e56d +0x081:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e572 +0x086:  movl   $0x1,0x4(%esp)
0825e57a +0x08e:  lea    -0x18(%ebp),%eax
0825e57d +0x091:  mov    %eax,(%esp)
0825e580 +0x094:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825e585 +0x099:  lea    -0x18(%ebp),%eax
0825e588 +0x09c:  mov    %eax,0x4(%esp)
0825e58c +0x0a0:  mov    0xc(%ebp),%eax
0825e58f +0x0a3:  mov    %eax,(%esp)
0825e592 +0x0a6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825e597 +0x0ab:  jmp    0825e5b4 <+0xc8>
0825e599 +0x0ad:  mov    %edx,%ebx
0825e59b +0x0af:  mov    %eax,%esi
0825e59d +0x0b1:  lea    -0x18(%ebp),%eax
0825e5a0 +0x0b4:  mov    %eax,(%esp)
0825e5a3 +0x0b7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825e5a8 +0x0bc:  mov    %esi,%eax
0825e5aa +0x0be:  mov    %ebx,%edx
0825e5ac +0x0c0:  mov    %eax,(%esp)
0825e5af +0x0c3:  call   08ae3750 <_Unwind_Resume>
0825e5b4 +0x0c8:  lea    -0x18(%ebp),%eax
0825e5b7 +0x0cb:  mov    %eax,(%esp)
0825e5ba +0x0ce:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825e5bf +0x0d3:  jmp    0825e67a <+0x18e>
0825e5c4 +0x0d8:  lea    -0x24(%ebp),%eax
0825e5c7 +0x0db:  mov    %eax,(%esp)
0825e5ca +0x0de:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0825e5cf +0x0e3:  movl   $0x204,0x8(%esp)
0825e5d7 +0x0eb:  movl   $0x1,0x4(%esp)
0825e5df +0x0f3:  lea    -0x24(%ebp),%eax
0825e5e2 +0x0f6:  mov    %eax,(%esp)
0825e5e5 +0x0f9:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0825e5ea +0x0fe:  movl   $0x1,0x4(%esp)
0825e5f2 +0x106:  lea    -0x24(%ebp),%eax
0825e5f5 +0x109:  mov    %eax,(%esp)
0825e5f8 +0x10c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e5fd +0x111:  mov    -0xc(%ebp),%eax
0825e600 +0x114:  movzwl 0x8(%eax),%eax
0825e604 +0x118:  cwtl
0825e605 +0x119:  mov    %eax,0x4(%esp)
0825e609 +0x11d:  lea    -0x24(%ebp),%eax
0825e60c +0x120:  mov    %eax,(%esp)
0825e60f +0x123:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0825e614 +0x128:  mov    -0xc(%ebp),%eax
0825e617 +0x12b:  movzbl 0xa(%eax),%eax
0825e61b +0x12f:  movsbl %al,%eax
0825e61e +0x132:  mov    %eax,0x4(%esp)
0825e622 +0x136:  lea    -0x24(%ebp),%eax
0825e625 +0x139:  mov    %eax,(%esp)
0825e628 +0x13c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0825e62d +0x141:  movl   $0x1,0x4(%esp)
0825e635 +0x149:  lea    -0x24(%ebp),%eax
0825e638 +0x14c:  mov    %eax,(%esp)
0825e63b +0x14f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0825e640 +0x154:  lea    -0x24(%ebp),%eax
0825e643 +0x157:  mov    %eax,0x4(%esp)
0825e647 +0x15b:  mov    0xc(%ebp),%eax
0825e64a +0x15e:  mov    %eax,(%esp)
0825e64d +0x161:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0825e652 +0x166:  jmp    0825e66f <+0x183>
0825e654 +0x168:  mov    %edx,%ebx
0825e656 +0x16a:  mov    %eax,%esi
0825e658 +0x16c:  lea    -0x24(%ebp),%eax
0825e65b +0x16f:  mov    %eax,(%esp)
0825e65e +0x172:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825e663 +0x177:  mov    %esi,%eax
0825e665 +0x179:  mov    %ebx,%edx
0825e667 +0x17b:  mov    %eax,(%esp)
0825e66a +0x17e:  call   08ae3750 <_Unwind_Resume>
0825e66f +0x183:  lea    -0x24(%ebp),%eax
0825e672 +0x186:  mov    %eax,(%esp)
0825e675 +0x189:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0825e67a +0x18e:  add    $0x30,%esp
0825e67d +0x191:  pop    %ebx
0825e67e +0x192:  pop    %esi
0825e67f +0x193:  pop    %ebp
0825e680 +0x194:  ret
0825e681 +0x195:  nop
```

## 反编译 C

```c
// Dispatcher_StackableActionUse::send @ 0x825e4ec

/* Dispatcher_StackableActionUse::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_StackableActionUse::send
          (Dispatcher_StackableActionUse *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0825e5e5 to 0825e651 has its CatchHandler @ 0825e654 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x204);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)*(short *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)(char)local_10[10]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  else {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825e529 to 0825e596 has its CatchHandler @ 0825e599 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x204);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(uint *)(local_10 + 4) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[10]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
