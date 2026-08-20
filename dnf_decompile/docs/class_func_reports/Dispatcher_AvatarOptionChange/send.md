# send

`_ZN29Dispatcher_AvatarOptionChange4sendEP5CUserR9ParamBase`

`Dispatcher_AvatarOptionChange::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AvatarOptionChange` | `0x081e0e32` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e0e32  _ZN29Dispatcher_AvatarOptionChange4sendEP5CUserR9ParamBase
#           Dispatcher_AvatarOptionChange::send(CUser*, ParamBase&)
# range [0x081e0e32, 0x081e0f5f]
081e0e32 +0x000:  push   %ebp
081e0e33 +0x001:  mov    %esp,%ebp
081e0e35 +0x003:  push   %esi
081e0e36 +0x004:  push   %ebx
081e0e37 +0x005:  sub    $0x20,%esp
081e0e3a +0x008:  mov    0x10(%ebp),%eax
081e0e3d +0x00b:  mov    %eax,-0xc(%ebp)
081e0e40 +0x00e:  mov    -0xc(%ebp),%eax
081e0e43 +0x011:  mov    0x4(%eax),%eax
081e0e46 +0x014:  test   %eax,%eax
081e0e48 +0x016:  jne    081e0f38 <+0x106>
081e0e4e +0x01c:  lea    -0x18(%ebp),%eax
081e0e51 +0x01f:  mov    %eax,(%esp)
081e0e54 +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081e0e59 +0x027:  lea    -0x18(%ebp),%eax
081e0e5c +0x02a:  mov    %eax,(%esp)
081e0e5f +0x02d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081e0e64 +0x032:  movl   $0x1cc,0x8(%esp)
081e0e6c +0x03a:  movl   $0x1,0x4(%esp)
081e0e74 +0x042:  lea    -0x18(%ebp),%eax
081e0e77 +0x045:  mov    %eax,(%esp)
081e0e7a +0x048:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081e0e7f +0x04d:  movl   $0x1,0x4(%esp)
081e0e87 +0x055:  lea    -0x18(%ebp),%eax
081e0e8a +0x058:  mov    %eax,(%esp)
081e0e8d +0x05b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e0e92 +0x060:  mov    -0xc(%ebp),%eax
081e0e95 +0x063:  movzwl 0xa(%eax),%eax
081e0e99 +0x067:  cwtl
081e0e9a +0x068:  mov    %eax,0x4(%esp)
081e0e9e +0x06c:  lea    -0x18(%ebp),%eax
081e0ea1 +0x06f:  mov    %eax,(%esp)
081e0ea4 +0x072:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081e0ea9 +0x077:  mov    -0xc(%ebp),%eax
081e0eac +0x07a:  movzbl 0xc(%eax),%eax
081e0eb0 +0x07e:  movsbl %al,%eax
081e0eb3 +0x081:  mov    %eax,0x4(%esp)
081e0eb7 +0x085:  lea    -0x18(%ebp),%eax
081e0eba +0x088:  mov    %eax,(%esp)
081e0ebd +0x08b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081e0ec2 +0x090:  movl   $0x1,0x4(%esp)
081e0eca +0x098:  lea    -0x18(%ebp),%eax
081e0ecd +0x09b:  mov    %eax,(%esp)
081e0ed0 +0x09e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081e0ed5 +0x0a3:  lea    -0x18(%ebp),%eax
081e0ed8 +0x0a6:  mov    %eax,0x4(%esp)
081e0edc +0x0aa:  mov    0xc(%ebp),%eax
081e0edf +0x0ad:  mov    %eax,(%esp)
081e0ee2 +0x0b0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081e0ee7 +0x0b5:  mov    -0xc(%ebp),%eax
081e0eea +0x0b8:  movzwl 0x8(%eax),%eax
081e0eee +0x0bc:  cwtl
081e0eef +0x0bd:  mov    %eax,0xc(%esp)
081e0ef3 +0x0c1:  movl   $0x0,0x8(%esp)
081e0efb +0x0c9:  movl   $0x1,0x4(%esp)
081e0f03 +0x0d1:  mov    0xc(%ebp),%eax
081e0f06 +0x0d4:  mov    %eax,(%esp)
081e0f09 +0x0d7:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
081e0f0e +0x0dc:  jmp    081e0f2b <+0xf9>
081e0f10 +0x0de:  mov    %edx,%ebx
081e0f12 +0x0e0:  mov    %eax,%esi
081e0f14 +0x0e2:  lea    -0x18(%ebp),%eax
081e0f17 +0x0e5:  mov    %eax,(%esp)
081e0f1a +0x0e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e0f1f +0x0ed:  mov    %esi,%eax
081e0f21 +0x0ef:  mov    %ebx,%edx
081e0f23 +0x0f1:  mov    %eax,(%esp)
081e0f26 +0x0f4:  call   08ae3750 <_Unwind_Resume>
081e0f2b +0x0f9:  lea    -0x18(%ebp),%eax
081e0f2e +0x0fc:  mov    %eax,(%esp)
081e0f31 +0x0ff:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081e0f36 +0x104:  jmp    081e0f58 <+0x126>
081e0f38 +0x106:  mov    -0xc(%ebp),%eax
081e0f3b +0x109:  mov    0x4(%eax),%eax
081e0f3e +0x10c:  movzbl %al,%eax
081e0f41 +0x10f:  mov    %eax,0x8(%esp)
081e0f45 +0x113:  movl   $0x1cc,0x4(%esp)
081e0f4d +0x11b:  mov    0xc(%ebp),%eax
081e0f50 +0x11e:  mov    %eax,(%esp)
081e0f53 +0x121:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081e0f58 +0x126:  add    $0x20,%esp
081e0f5b +0x129:  pop    %ebx
081e0f5c +0x12a:  pop    %esi
081e0f5d +0x12b:  pop    %ebp
081e0f5e +0x12c:  ret
081e0f5f +0x12d:  nop
```

## 反编译 C

```c
// Dispatcher_AvatarOptionChange::send @ 0x81e0e32

/* Dispatcher_AvatarOptionChange::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_AvatarOptionChange::send
          (Dispatcher_AvatarOptionChange *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e0e5f to 081e0f0d has its CatchHandler @ 081e0f10 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1cc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0xc]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)(local_10 + 8));
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1cc,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
