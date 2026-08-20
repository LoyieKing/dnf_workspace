# send

`_ZN24Dispatcher_Clear_Used_QP4sendEP5CUserR9ParamBase`

`Dispatcher_Clear_Used_QP::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Clear_Used_QP` | `0x081d6850` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d6850  _ZN24Dispatcher_Clear_Used_QP4sendEP5CUserR9ParamBase
#           Dispatcher_Clear_Used_QP::send(CUser*, ParamBase&)
# range [0x081d6850, 0x081d69d1]
081d6850 +0x000:  push   %ebp
081d6851 +0x001:  mov    %esp,%ebp
081d6853 +0x003:  push   %esi
081d6854 +0x004:  push   %ebx
081d6855 +0x005:  sub    $0x30,%esp
081d6858 +0x008:  mov    0x10(%ebp),%eax
081d685b +0x00b:  mov    %eax,-0xc(%ebp)
081d685e +0x00e:  mov    -0xc(%ebp),%eax
081d6861 +0x011:  mov    0x4(%eax),%eax
081d6864 +0x014:  test   %eax,%eax
081d6866 +0x016:  jne    081d692f <+0xdf>
081d686c +0x01c:  lea    -0x18(%ebp),%eax
081d686f +0x01f:  mov    %eax,(%esp)
081d6872 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d6877 +0x027:  movl   $0x190,0x8(%esp)
081d687f +0x02f:  movl   $0x1,0x4(%esp)
081d6887 +0x037:  lea    -0x18(%ebp),%eax
081d688a +0x03a:  mov    %eax,(%esp)
081d688d +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d6892 +0x042:  movl   $0x1,0x4(%esp)
081d689a +0x04a:  lea    -0x18(%ebp),%eax
081d689d +0x04d:  mov    %eax,(%esp)
081d68a0 +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d68a5 +0x055:  mov    0xc(%ebp),%eax
081d68a8 +0x058:  mov    %eax,(%esp)
081d68ab +0x05b:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d68b0 +0x060:  mov    %eax,(%esp)
081d68b3 +0x063:  call   081347d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x3dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x3dd
081d68b8 +0x068:  mov    %eax,0x4(%esp)
081d68bc +0x06c:  lea    -0x18(%ebp),%eax
081d68bf +0x06f:  mov    %eax,(%esp)
081d68c2 +0x072:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d68c7 +0x077:  movl   $0x1,0x4(%esp)
081d68cf +0x07f:  lea    -0x18(%ebp),%eax
081d68d2 +0x082:  mov    %eax,(%esp)
081d68d5 +0x085:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d68da +0x08a:  lea    -0x18(%ebp),%eax
081d68dd +0x08d:  mov    %eax,0x4(%esp)
081d68e1 +0x091:  mov    0xc(%ebp),%eax
081d68e4 +0x094:  mov    %eax,(%esp)
081d68e7 +0x097:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d68ec +0x09c:  mov    0xc(%ebp),%eax
081d68ef +0x09f:  mov    %eax,(%esp)
081d68f2 +0x0a2:  call   0868ac24 <_ZN5CUser12sendCharacQpEv>  ; CUser::sendCharacQp()
081d68f7 +0x0a7:  mov    0xc(%ebp),%eax
081d68fa +0x0aa:  mov    %eax,(%esp)
081d68fd +0x0ad:  call   0868af2c <_ZN5CUser20sendCharacQuestPieceEv>  ; CUser::sendCharacQuestPiece()
081d6902 +0x0b2:  jmp    081d691f <+0xcf>
081d6904 +0x0b4:  mov    %edx,%ebx
081d6906 +0x0b6:  mov    %eax,%esi
081d6908 +0x0b8:  lea    -0x18(%ebp),%eax
081d690b +0x0bb:  mov    %eax,(%esp)
081d690e +0x0be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d6913 +0x0c3:  mov    %esi,%eax
081d6915 +0x0c5:  mov    %ebx,%edx
081d6917 +0x0c7:  mov    %eax,(%esp)
081d691a +0x0ca:  call   08ae3750 <_Unwind_Resume>
081d691f +0x0cf:  lea    -0x18(%ebp),%eax
081d6922 +0x0d2:  mov    %eax,(%esp)
081d6925 +0x0d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d692a +0x0da:  jmp    081d69ca <+0x17a>
081d692f +0x0df:  lea    -0x24(%ebp),%eax
081d6932 +0x0e2:  mov    %eax,(%esp)
081d6935 +0x0e5:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d693a +0x0ea:  movl   $0x190,0x8(%esp)
081d6942 +0x0f2:  movl   $0x1,0x4(%esp)
081d694a +0x0fa:  lea    -0x24(%ebp),%eax
081d694d +0x0fd:  mov    %eax,(%esp)
081d6950 +0x100:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d6955 +0x105:  movl   $0x0,0x4(%esp)
081d695d +0x10d:  lea    -0x24(%ebp),%eax
081d6960 +0x110:  mov    %eax,(%esp)
081d6963 +0x113:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d6968 +0x118:  mov    -0xc(%ebp),%eax
081d696b +0x11b:  mov    0x4(%eax),%eax
081d696e +0x11e:  mov    %eax,0x4(%esp)
081d6972 +0x122:  lea    -0x24(%ebp),%eax
081d6975 +0x125:  mov    %eax,(%esp)
081d6978 +0x128:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d697d +0x12d:  movl   $0x1,0x4(%esp)
081d6985 +0x135:  lea    -0x24(%ebp),%eax
081d6988 +0x138:  mov    %eax,(%esp)
081d698b +0x13b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d6990 +0x140:  lea    -0x24(%ebp),%eax
081d6993 +0x143:  mov    %eax,0x4(%esp)
081d6997 +0x147:  mov    0xc(%ebp),%eax
081d699a +0x14a:  mov    %eax,(%esp)
081d699d +0x14d:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d69a2 +0x152:  jmp    081d69bf <+0x16f>
081d69a4 +0x154:  mov    %edx,%ebx
081d69a6 +0x156:  mov    %eax,%esi
081d69a8 +0x158:  lea    -0x24(%ebp),%eax
081d69ab +0x15b:  mov    %eax,(%esp)
081d69ae +0x15e:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d69b3 +0x163:  mov    %esi,%eax
081d69b5 +0x165:  mov    %ebx,%edx
081d69b7 +0x167:  mov    %eax,(%esp)
081d69ba +0x16a:  call   08ae3750 <_Unwind_Resume>
081d69bf +0x16f:  lea    -0x24(%ebp),%eax
081d69c2 +0x172:  mov    %eax,(%esp)
081d69c5 +0x175:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d69ca +0x17a:  add    $0x30,%esp
081d69cd +0x17d:  pop    %ebx
081d69ce +0x17e:  pop    %esi
081d69cf +0x17f:  pop    %ebp
081d69d0 +0x180:  ret
081d69d1 +0x181:  nop
```

## 反编译 C

```c
// Dispatcher_Clear_Used_QP::send @ 0x81d6850

/* Dispatcher_Clear_Used_QP::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Clear_Used_QP::send(Dispatcher_Clear_Used_QP *this,CUser *param_1,ParamBase *param_2)

{
  CInventory *this_00;
  int iVar1;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d688d to 081d6901 has its CatchHandler @ 081d6904 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,400);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar1 = CInventory::get_money(this_00);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::sendCharacQp(param_1);
    CUser::sendCharacQuestPiece(param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d6950 to 081d69a1 has its CatchHandler @ 081d69a4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,400);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,*(int *)(local_10 + 4));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  return;
}
```
