# send

`_ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase`

`DisPatcher_SetArea::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_SetArea` | `0x081c9656` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c9656  _ZN18DisPatcher_SetArea4sendEP5CUserR9ParamBase
#           DisPatcher_SetArea::send(CUser*, ParamBase&)
# range [0x081c9656, 0x081c97a5]
081c9656 +0x000:  push   %ebp
081c9657 +0x001:  mov    %esp,%ebp
081c9659 +0x003:  push   %esi
081c965a +0x004:  push   %ebx
081c965b +0x005:  sub    $0x30,%esp
081c965e +0x008:  mov    0x10(%ebp),%eax
081c9661 +0x00b:  mov    %eax,-0xc(%ebp)
081c9664 +0x00e:  mov    -0xc(%ebp),%eax
081c9667 +0x011:  mov    0x4(%eax),%eax
081c966a +0x014:  cmp    $0x7fffffff,%eax
081c966f +0x019:  je     081c979e <+0x148>
081c9675 +0x01f:  mov    -0xc(%ebp),%eax
081c9678 +0x022:  mov    0x4(%eax),%eax
081c967b +0x025:  test   %eax,%eax
081c967d +0x027:  je     081c979f <+0x149>
081c9683 +0x02d:  lea    -0x18(%ebp),%eax
081c9686 +0x030:  mov    %eax,(%esp)
081c9689 +0x033:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c968e +0x038:  movl   $0x26,0x8(%esp)
081c9696 +0x040:  movl   $0x1,0x4(%esp)
081c969e +0x048:  lea    -0x18(%ebp),%eax
081c96a1 +0x04b:  mov    %eax,(%esp)
081c96a4 +0x04e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c96a9 +0x053:  movl   $0x0,0x4(%esp)
081c96b1 +0x05b:  lea    -0x18(%ebp),%eax
081c96b4 +0x05e:  mov    %eax,(%esp)
081c96b7 +0x061:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c96bc +0x066:  mov    -0xc(%ebp),%eax
081c96bf +0x069:  mov    0x4(%eax),%eax
081c96c2 +0x06c:  mov    %eax,0x4(%esp)
081c96c6 +0x070:  lea    -0x18(%ebp),%eax
081c96c9 +0x073:  mov    %eax,(%esp)
081c96cc +0x076:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c96d1 +0x07b:  mov    -0xc(%ebp),%eax
081c96d4 +0x07e:  mov    0x4(%eax),%eax
081c96d7 +0x081:  cmp    $0x44,%eax
081c96da +0x084:  jne    081c9736 <+0xe0>
081c96dc +0x086:  mov    -0xc(%ebp),%eax
081c96df +0x089:  movzbl 0x9(%eax),%eax
081c96e3 +0x08d:  movsbl %al,%eax
081c96e6 +0x090:  mov    %eax,0x4(%esp)
081c96ea +0x094:  lea    -0x18(%ebp),%eax
081c96ed +0x097:  mov    %eax,(%esp)
081c96f0 +0x09a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c96f5 +0x09f:  mov    0xc(%ebp),%eax
081c96f8 +0x0a2:  mov    %eax,(%esp)
081c96fb +0x0a5:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
081c9700 +0x0aa:  mov    %eax,%ebx
081c9702 +0x0ac:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081c9707 +0x0b1:  mov    %ebx,0x4(%esp)
081c970b +0x0b5:  mov    %eax,(%esp)
081c970e +0x0b8:  call   086ce958 <_ZN9GameWorld26GetLeftTimeOfForbiddenMoveEPKc>  ; GameWorld::GetLeftTimeOfForbiddenMove(char const*)
081c9713 +0x0bd:  mov    %eax,-0x1c(%ebp)
081c9716 +0x0c0:  mov    $0x45e7b273,%edx
081c971b +0x0c5:  mov    -0x1c(%ebp),%eax
081c971e +0x0c8:  mul    %edx
081c9720 +0x0ca:  mov    %edx,%eax
081c9722 +0x0cc:  shr    $0xe,%eax
081c9725 +0x0cf:  mov    %eax,0x4(%esp)
081c9729 +0x0d3:  lea    -0x18(%ebp),%eax
081c972c +0x0d6:  mov    %eax,(%esp)
081c972f +0x0d9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c9734 +0x0de:  jmp    081c974f <+0xf9>
081c9736 +0x0e0:  mov    -0xc(%ebp),%eax
081c9739 +0x0e3:  movzbl 0x8(%eax),%eax
081c973d +0x0e7:  movsbl %al,%eax
081c9740 +0x0ea:  mov    %eax,0x4(%esp)
081c9744 +0x0ee:  lea    -0x18(%ebp),%eax
081c9747 +0x0f1:  mov    %eax,(%esp)
081c974a +0x0f4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c974f +0x0f9:  movl   $0x1,0x4(%esp)
081c9757 +0x101:  lea    -0x18(%ebp),%eax
081c975a +0x104:  mov    %eax,(%esp)
081c975d +0x107:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c9762 +0x10c:  lea    -0x18(%ebp),%eax
081c9765 +0x10f:  mov    %eax,0x4(%esp)
081c9769 +0x113:  mov    0xc(%ebp),%eax
081c976c +0x116:  mov    %eax,(%esp)
081c976f +0x119:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c9774 +0x11e:  jmp    081c9791 <+0x13b>
081c9776 +0x120:  mov    %edx,%ebx
081c9778 +0x122:  mov    %eax,%esi
081c977a +0x124:  lea    -0x18(%ebp),%eax
081c977d +0x127:  mov    %eax,(%esp)
081c9780 +0x12a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c9785 +0x12f:  mov    %esi,%eax
081c9787 +0x131:  mov    %ebx,%edx
081c9789 +0x133:  mov    %eax,(%esp)
081c978c +0x136:  call   08ae3750 <_Unwind_Resume>
081c9791 +0x13b:  lea    -0x18(%ebp),%eax
081c9794 +0x13e:  mov    %eax,(%esp)
081c9797 +0x141:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c979c +0x146:  jmp    081c979f <+0x149>
081c979e +0x148:  nop
081c979f +0x149:  add    $0x30,%esp
081c97a2 +0x14c:  pop    %ebx
081c97a3 +0x14d:  pop    %esi
081c97a4 +0x14e:  pop    %ebp
081c97a5 +0x14f:  ret
```

## 反编译 C

```c
// DisPatcher_SetArea::send @ 0x81c9656

/* DisPatcher_SetArea::send(CUser*, ParamBase&) */

void __thiscall DisPatcher_SetArea::send(DisPatcher_SetArea *this,CUser *param_1,ParamBase *param_2)

{
  char *pcVar1;
  GameWorld *this_00;
  uint uVar2;
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081c96a4 to 081c9773 has its CatchHandler @ 081c9776 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x26);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
    if (*(int *)(local_10 + 4) == 0x44) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[9]);
      pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      this_00 = (GameWorld *)G_GameWorld();
      uVar2 = GameWorld::GetLeftTimeOfForbiddenMove(this_00,pcVar1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,uVar2 / 60000);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}
```
