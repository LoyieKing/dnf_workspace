# _SendResult

`_ZN22Dispatcher_ModItemAttr11_SendResultEP5CUserttt`

`Dispatcher_ModItemAttr::_SendResult(CUser*, unsigned short, unsigned short, unsigned short)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ModItemAttr` | `0x08201938` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08201938  _ZN22Dispatcher_ModItemAttr11_SendResultEP5CUserttt
#           Dispatcher_ModItemAttr::_SendResult(CUser*, unsigned short, unsigned short, unsigned short)
# range [0x08201938, 0x08201b05]
08201938 +0x000:  push   %ebp
08201939 +0x001:  mov    %esp,%ebp
0820193b +0x003:  push   %esi
0820193c +0x004:  push   %ebx
0820193d +0x005:  sub    $0xb0,%esp
08201943 +0x00b:  mov    0x10(%ebp),%ecx
08201946 +0x00e:  mov    0x14(%ebp),%edx
08201949 +0x011:  mov    0x18(%ebp),%eax
0820194c +0x014:  mov    %cx,-0x5c(%ebp)
08201950 +0x018:  mov    %dx,-0x60(%ebp)
08201954 +0x01c:  mov    %ax,-0x64(%ebp)
08201958 +0x020:  lea    -0x51(%ebp),%eax
0820195b +0x023:  mov    %eax,(%esp)
0820195e +0x026:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08201963 +0x02b:  movzwl -0x60(%ebp),%ebx
08201967 +0x02f:  mov    0xc(%ebp),%eax
0820196a +0x032:  mov    %eax,(%esp)
0820196d +0x035:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08201972 +0x03a:  lea    -0xa8(%ebp),%edx
08201978 +0x040:  mov    %ebx,0xc(%esp)
0820197c +0x044:  movl   $0x1,0x8(%esp)
08201984 +0x04c:  mov    %eax,0x4(%esp)
08201988 +0x050:  mov    %edx,(%esp)
0820198b +0x053:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08201990 +0x058:  sub    $0x4,%esp
08201993 +0x05b:  mov    -0xa8(%ebp),%eax
08201999 +0x061:  mov    %eax,-0x51(%ebp)
0820199c +0x064:  mov    -0xa4(%ebp),%eax
082019a2 +0x06a:  mov    %eax,-0x4d(%ebp)
082019a5 +0x06d:  mov    -0xa0(%ebp),%eax
082019ab +0x073:  mov    %eax,-0x49(%ebp)
082019ae +0x076:  mov    -0x9c(%ebp),%eax
082019b4 +0x07c:  mov    %eax,-0x45(%ebp)
082019b7 +0x07f:  mov    -0x98(%ebp),%eax
082019bd +0x085:  mov    %eax,-0x41(%ebp)
082019c0 +0x088:  mov    -0x94(%ebp),%eax
082019c6 +0x08e:  mov    %eax,-0x3d(%ebp)
082019c9 +0x091:  mov    -0x90(%ebp),%eax
082019cf +0x097:  mov    %eax,-0x39(%ebp)
082019d2 +0x09a:  mov    -0x8c(%ebp),%eax
082019d8 +0x0a0:  mov    %eax,-0x35(%ebp)
082019db +0x0a3:  mov    -0x88(%ebp),%eax
082019e1 +0x0a9:  mov    %eax,-0x31(%ebp)
082019e4 +0x0ac:  mov    -0x84(%ebp),%eax
082019ea +0x0b2:  mov    %eax,-0x2d(%ebp)
082019ed +0x0b5:  mov    -0x80(%ebp),%eax
082019f0 +0x0b8:  mov    %eax,-0x29(%ebp)
082019f3 +0x0bb:  mov    -0x7c(%ebp),%eax
082019f6 +0x0be:  mov    %eax,-0x25(%ebp)
082019f9 +0x0c1:  mov    -0x78(%ebp),%eax
082019fc +0x0c4:  mov    %eax,-0x21(%ebp)
082019ff +0x0c7:  mov    -0x74(%ebp),%eax
08201a02 +0x0ca:  mov    %eax,-0x1d(%ebp)
08201a05 +0x0cd:  mov    -0x70(%ebp),%eax
08201a08 +0x0d0:  mov    %eax,-0x19(%ebp)
08201a0b +0x0d3:  movzbl -0x6c(%ebp),%eax
08201a0f +0x0d7:  mov    %al,-0x15(%ebp)
08201a12 +0x0da:  lea    -0x14(%ebp),%eax
08201a15 +0x0dd:  mov    %eax,(%esp)
08201a18 +0x0e0:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08201a1d +0x0e5:  movl   $0x54,0x8(%esp)
08201a25 +0x0ed:  movl   $0x1,0x4(%esp)
08201a2d +0x0f5:  lea    -0x14(%ebp),%eax
08201a30 +0x0f8:  mov    %eax,(%esp)
08201a33 +0x0fb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08201a38 +0x100:  movl   $0x1,0x4(%esp)
08201a40 +0x108:  lea    -0x14(%ebp),%eax
08201a43 +0x10b:  mov    %eax,(%esp)
08201a46 +0x10e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08201a4b +0x113:  movzwl -0x60(%ebp),%eax
08201a4f +0x117:  mov    %eax,0x4(%esp)
08201a53 +0x11b:  lea    -0x14(%ebp),%eax
08201a56 +0x11e:  mov    %eax,(%esp)
08201a59 +0x121:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08201a5e +0x126:  lea    -0x51(%ebp),%eax
08201a61 +0x129:  mov    %eax,(%esp)
08201a64 +0x12c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08201a69 +0x131:  mov    %eax,0x4(%esp)
08201a6d +0x135:  lea    -0x14(%ebp),%eax
08201a70 +0x138:  mov    %eax,(%esp)
08201a73 +0x13b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08201a78 +0x140:  movzwl -0x5c(%ebp),%eax
08201a7c +0x144:  mov    %eax,0x4(%esp)
08201a80 +0x148:  lea    -0x14(%ebp),%eax
08201a83 +0x14b:  mov    %eax,(%esp)
08201a86 +0x14e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08201a8b +0x153:  movl   $0x1,0x4(%esp)
08201a93 +0x15b:  lea    -0x14(%ebp),%eax
08201a96 +0x15e:  mov    %eax,(%esp)
08201a99 +0x161:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08201a9e +0x166:  lea    -0x14(%ebp),%eax
08201aa1 +0x169:  mov    %eax,0x4(%esp)
08201aa5 +0x16d:  mov    0xc(%ebp),%eax
08201aa8 +0x170:  mov    %eax,(%esp)
08201aab +0x173:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08201ab0 +0x178:  movzwl -0x64(%ebp),%eax
08201ab4 +0x17c:  mov    %eax,0xc(%esp)
08201ab8 +0x180:  movl   $0x0,0x8(%esp)
08201ac0 +0x188:  movl   $0x1,0x4(%esp)
08201ac8 +0x190:  mov    0xc(%ebp),%eax
08201acb +0x193:  mov    %eax,(%esp)
08201ace +0x196:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08201ad3 +0x19b:  jmp    08201af0 <+0x1b8>
08201ad5 +0x19d:  mov    %edx,%ebx
08201ad7 +0x19f:  mov    %eax,%esi
08201ad9 +0x1a1:  lea    -0x14(%ebp),%eax
08201adc +0x1a4:  mov    %eax,(%esp)
08201adf +0x1a7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08201ae4 +0x1ac:  mov    %esi,%eax
08201ae6 +0x1ae:  mov    %ebx,%edx
08201ae8 +0x1b0:  mov    %eax,(%esp)
08201aeb +0x1b3:  call   08ae3750 <_Unwind_Resume>
08201af0 +0x1b8:  lea    -0x14(%ebp),%eax
08201af3 +0x1bb:  mov    %eax,(%esp)
08201af6 +0x1be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08201afb +0x1c3:  lea    -0x8(%ebp),%esp
08201afe +0x1c6:  add    $0x0,%esp
08201b01 +0x1c9:  pop    %ebx
08201b02 +0x1ca:  pop    %esi
08201b03 +0x1cb:  pop    %ebp
08201b04 +0x1cc:  ret
08201b05 +0x1cd:  nop
```

## 反编译 C

```c
// Dispatcher_ModItemAttr::_SendResult @ 0x8201938

/* Dispatcher_ModItemAttr::_SendResult(CUser*, unsigned short, unsigned short, unsigned short) */

void __thiscall
Dispatcher_ModItemAttr::_SendResult
          (Dispatcher_ModItemAttr *this,CUser *param_1,ushort param_2,ushort param_3,ushort param_4)

{
  int iVar1;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  ushort local_68;
  ushort local_64;
  ushort local_60;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined1 local_19;
  PacketGuard local_18 [12];
  
  local_60 = param_2;
  local_64 = param_3;
  local_68 = param_4;
  Inven_Item::Inven_Item((Inven_Item *)&local_55);
  iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_ac,iVar1);
  local_55 = local_ac;
  local_51 = local_a8;
  local_4d = local_a4;
  local_49 = local_a0;
  local_45 = local_9c;
  local_41 = local_98;
  local_3d = local_94;
  local_39 = local_90;
  local_35 = local_8c;
  local_31 = local_88;
  local_2d = local_84;
  local_29 = local_80;
  local_25 = local_7c;
  local_21 = local_78;
  local_1d = local_74;
  local_19 = local_70;
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08201a33 to 08201ad2 has its CatchHandler @ 08201ad5 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x54);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)local_64);
  iVar1 = Inven_Item::get_add_info((Inven_Item *)&local_55);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,(uint)local_60);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  CUser::SendUpdateItemList(param_1,1,0,local_68);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
