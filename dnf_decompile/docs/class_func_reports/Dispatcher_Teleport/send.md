# send

`_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase`

`Dispatcher_Teleport::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Teleport` | `0x081d087c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d087c  _ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase
#           Dispatcher_Teleport::send(CUser*, ParamBase&)
# range [0x081d087c, 0x081d0a5f]
081d087c +0x000:  push   %ebp
081d087d +0x001:  mov    %esp,%ebp
081d087f +0x003:  push   %esi
081d0880 +0x004:  push   %ebx
081d0881 +0x005:  sub    $0x30,%esp
081d0884 +0x008:  mov    0x10(%ebp),%eax
081d0887 +0x00b:  mov    %eax,-0xc(%ebp)
081d088a +0x00e:  mov    -0xc(%ebp),%eax
081d088d +0x011:  mov    0x4(%eax),%eax
081d0890 +0x014:  cmp    $0x7fffffff,%eax
081d0895 +0x019:  je     081d0a58 <+0x1dc>
081d089b +0x01f:  mov    -0xc(%ebp),%eax
081d089e +0x022:  mov    0x4(%eax),%eax
081d08a1 +0x025:  test   %eax,%eax
081d08a3 +0x027:  jne    081d0a36 <+0x1ba>
081d08a9 +0x02d:  lea    -0x18(%ebp),%eax
081d08ac +0x030:  mov    %eax,(%esp)
081d08af +0x033:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d08b4 +0x038:  movl   $0xe,0x8(%esp)
081d08bc +0x040:  movl   $0x0,0x4(%esp)
081d08c4 +0x048:  lea    -0x18(%ebp),%eax
081d08c7 +0x04b:  mov    %eax,(%esp)
081d08ca +0x04e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d08cf +0x053:  mov    -0xc(%ebp),%eax
081d08d2 +0x056:  movzbl 0x10(%eax),%eax
081d08d6 +0x05a:  movsbl %al,%eax
081d08d9 +0x05d:  mov    %eax,0x4(%esp)
081d08dd +0x061:  lea    -0x18(%ebp),%eax
081d08e0 +0x064:  mov    %eax,(%esp)
081d08e3 +0x067:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d08e8 +0x06c:  movl   $0x1,0x4(%esp)
081d08f0 +0x074:  lea    -0x18(%ebp),%eax
081d08f3 +0x077:  mov    %eax,(%esp)
081d08f6 +0x07a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d08fb +0x07f:  mov    -0xc(%ebp),%eax
081d08fe +0x082:  movzwl 0x8(%eax),%eax
081d0902 +0x086:  movswl %ax,%esi
081d0905 +0x089:  mov    -0xc(%ebp),%eax
081d0908 +0x08c:  movzbl 0x10(%eax),%eax
081d090c +0x090:  movsbl %al,%eax
081d090f +0x093:  mov    %eax,(%esp)
081d0912 +0x096:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d0917 +0x09b:  mov    %eax,%ebx
081d0919 +0x09d:  mov    0xc(%ebp),%eax
081d091c +0x0a0:  mov    %eax,(%esp)
081d091f +0x0a3:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d0924 +0x0a8:  lea    -0x18(%ebp),%edx
081d0927 +0x0ab:  mov    %edx,0xc(%esp)
081d092b +0x0af:  mov    %esi,0x8(%esp)
081d092f +0x0b3:  mov    %ebx,0x4(%esp)
081d0933 +0x0b7:  mov    %eax,(%esp)
081d0936 +0x0ba:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
081d093b +0x0bf:  movl   $0x1,0x4(%esp)
081d0943 +0x0c7:  lea    -0x18(%ebp),%eax
081d0946 +0x0ca:  mov    %eax,(%esp)
081d0949 +0x0cd:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d094e +0x0d2:  lea    -0x18(%ebp),%eax
081d0951 +0x0d5:  mov    %eax,0x4(%esp)
081d0955 +0x0d9:  mov    0xc(%ebp),%eax
081d0958 +0x0dc:  mov    %eax,(%esp)
081d095b +0x0df:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d0960 +0x0e4:  lea    -0x24(%ebp),%eax
081d0963 +0x0e7:  mov    %eax,(%esp)
081d0966 +0x0ea:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081d096b +0x0ef:  movl   $0xf1,0x8(%esp)
081d0973 +0x0f7:  movl   $0x1,0x4(%esp)
081d097b +0x0ff:  lea    -0x24(%ebp),%eax
081d097e +0x102:  mov    %eax,(%esp)
081d0981 +0x105:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081d0986 +0x10a:  movl   $0x1,0x4(%esp)
081d098e +0x112:  lea    -0x24(%ebp),%eax
081d0991 +0x115:  mov    %eax,(%esp)
081d0994 +0x118:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081d0999 +0x11d:  mov    -0xc(%ebp),%eax
081d099c +0x120:  movzwl 0x8(%eax),%eax
081d09a0 +0x124:  cwtl
081d09a1 +0x125:  mov    %eax,0x4(%esp)
081d09a5 +0x129:  lea    -0x24(%ebp),%eax
081d09a8 +0x12c:  mov    %eax,(%esp)
081d09ab +0x12f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081d09b0 +0x134:  mov    -0xc(%ebp),%eax
081d09b3 +0x137:  mov    0x14(%eax),%eax
081d09b6 +0x13a:  mov    %eax,0x4(%esp)
081d09ba +0x13e:  lea    -0x24(%ebp),%eax
081d09bd +0x141:  mov    %eax,(%esp)
081d09c0 +0x144:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081d09c5 +0x149:  movl   $0x1,0x4(%esp)
081d09cd +0x151:  lea    -0x24(%ebp),%eax
081d09d0 +0x154:  mov    %eax,(%esp)
081d09d3 +0x157:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081d09d8 +0x15c:  lea    -0x24(%ebp),%eax
081d09db +0x15f:  mov    %eax,0x4(%esp)
081d09df +0x163:  mov    0xc(%ebp),%eax
081d09e2 +0x166:  mov    %eax,(%esp)
081d09e5 +0x169:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081d09ea +0x16e:  jmp    081d0a01 <+0x185>
081d09ec +0x170:  mov    %edx,%ebx
081d09ee +0x172:  mov    %eax,%esi
081d09f0 +0x174:  lea    -0x24(%ebp),%eax
081d09f3 +0x177:  mov    %eax,(%esp)
081d09f6 +0x17a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d09fb +0x17f:  mov    %esi,%eax
081d09fd +0x181:  mov    %ebx,%edx
081d09ff +0x183:  jmp    081d0a0e <+0x192>
081d0a01 +0x185:  lea    -0x24(%ebp),%eax
081d0a04 +0x188:  mov    %eax,(%esp)
081d0a07 +0x18b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d0a0c +0x190:  jmp    081d0a29 <+0x1ad>
081d0a0e +0x192:  mov    %edx,%ebx
081d0a10 +0x194:  mov    %eax,%esi
081d0a12 +0x196:  lea    -0x18(%ebp),%eax
081d0a15 +0x199:  mov    %eax,(%esp)
081d0a18 +0x19c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d0a1d +0x1a1:  mov    %esi,%eax
081d0a1f +0x1a3:  mov    %ebx,%edx
081d0a21 +0x1a5:  mov    %eax,(%esp)
081d0a24 +0x1a8:  call   08ae3750 <_Unwind_Resume>
081d0a29 +0x1ad:  lea    -0x18(%ebp),%eax
081d0a2c +0x1b0:  mov    %eax,(%esp)
081d0a2f +0x1b3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081d0a34 +0x1b8:  jmp    081d0a59 <+0x1dd>
081d0a36 +0x1ba:  mov    -0xc(%ebp),%eax
081d0a39 +0x1bd:  mov    0x4(%eax),%eax
081d0a3c +0x1c0:  movzbl %al,%eax
081d0a3f +0x1c3:  mov    %eax,0x8(%esp)
081d0a43 +0x1c7:  movl   $0xf1,0x4(%esp)
081d0a4b +0x1cf:  mov    0xc(%ebp),%eax
081d0a4e +0x1d2:  mov    %eax,(%esp)
081d0a51 +0x1d5:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081d0a56 +0x1da:  jmp    081d0a59 <+0x1dd>
081d0a58 +0x1dc:  nop
081d0a59 +0x1dd:  add    $0x30,%esp
081d0a5c +0x1e0:  pop    %ebx
081d0a5d +0x1e1:  pop    %esi
081d0a5e +0x1e2:  pop    %ebp
081d0a5f +0x1e3:  ret
```

## 反编译 C

```c
// Dispatcher_Teleport::send @ 0x81d087c

/* Dispatcher_Teleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Teleport::send(Dispatcher_Teleport *this,CUser *param_1,ParamBase *param_2)

{
  short sVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d08ca to 081d096a has its CatchHandler @ 081d0a0e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0x10]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      sVar1 = *(short *)(local_10 + 8);
      uVar2 = GetInvenTypeFromItemSpace((int)(char)local_10[0x10]);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar3,uVar2,(int)sVar1,local_1c);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d0981 to 081d09e9 has its CatchHandler @ 081d09ec */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xf1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)*(short *)(local_10 + 8));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_10 + 0x14));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
                    /* try { // try from 081d0a07 to 081d0a0b has its CatchHandler @ 081d0a0e */
      PacketGuard::~PacketGuard(local_28);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xf1,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}
```
