# compoundSystemMessage

`_ZN5CUser21compoundSystemMessageERK10Inven_Item`

`CUser::compoundSystemMessage(Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08692f62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08692f62  _ZN5CUser21compoundSystemMessageERK10Inven_Item
#           CUser::compoundSystemMessage(Inven_Item const&)
# range [0x08692f62, 0x0869304d]
08692f62 +0x00:  push   %ebp
08692f63 +0x01:  mov    %esp,%ebp
08692f65 +0x03:  push   %esi
08692f66 +0x04:  push   %ebx
08692f67 +0x05:  sub    $0x20,%esp
08692f6a +0x08:  lea    -0x14(%ebp),%eax
08692f6d +0x0b:  mov    %eax,(%esp)
08692f70 +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08692f75 +0x13:  movl   $0x56,0x8(%esp)
08692f7d +0x1b:  movl   $0x0,0x4(%esp)
08692f85 +0x23:  lea    -0x14(%ebp),%eax
08692f88 +0x26:  mov    %eax,(%esp)
08692f8b +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08692f90 +0x2e:  movl   $0xc,0x4(%esp)
08692f98 +0x36:  lea    -0x14(%ebp),%eax
08692f9b +0x39:  mov    %eax,(%esp)
08692f9e +0x3c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08692fa3 +0x41:  mov    0x8(%ebp),%eax
08692fa6 +0x44:  mov    %eax,(%esp)
08692fa9 +0x47:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08692fae +0x4c:  movzwl %ax,%eax
08692fb1 +0x4f:  mov    %eax,0x4(%esp)
08692fb5 +0x53:  lea    -0x14(%ebp),%eax
08692fb8 +0x56:  mov    %eax,(%esp)
08692fbb +0x59:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08692fc0 +0x5e:  mov    0xc(%ebp),%eax
08692fc3 +0x61:  mov    %eax,(%esp)
08692fc6 +0x64:  call   0850d14e <_GLOBAL__I_g_emptySlot+0x83>  ; global constructors keyed to g_emptySlot+0x83
08692fcb +0x69:  mov    %eax,0x4(%esp)
08692fcf +0x6d:  lea    -0x14(%ebp),%eax
08692fd2 +0x70:  mov    %eax,(%esp)
08692fd5 +0x73:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08692fda +0x78:  mov    0xc(%ebp),%eax
08692fdd +0x7b:  mov    %eax,(%esp)
08692fe0 +0x7e:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08692fe5 +0x83:  movzbl %al,%eax
08692fe8 +0x86:  mov    %eax,0x4(%esp)
08692fec +0x8a:  lea    -0x14(%ebp),%eax
08692fef +0x8d:  mov    %eax,(%esp)
08692ff2 +0x90:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08692ff7 +0x95:  movl   $0x1,0x4(%esp)
08692fff +0x9d:  lea    -0x14(%ebp),%eax
08693002 +0xa0:  mov    %eax,(%esp)
08693005 +0xa3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0869300a +0xa8:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0869300f +0xad:  lea    -0x14(%ebp),%edx
08693012 +0xb0:  mov    %edx,0x4(%esp)
08693016 +0xb4:  mov    %eax,(%esp)
08693019 +0xb7:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
0869301e +0xbc:  jmp    0869303b <+0xd9>
08693020 +0xbe:  mov    %edx,%ebx
08693022 +0xc0:  mov    %eax,%esi
08693024 +0xc2:  lea    -0x14(%ebp),%eax
08693027 +0xc5:  mov    %eax,(%esp)
0869302a +0xc8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0869302f +0xcd:  mov    %esi,%eax
08693031 +0xcf:  mov    %ebx,%edx
08693033 +0xd1:  mov    %eax,(%esp)
08693036 +0xd4:  call   08ae3750 <_Unwind_Resume>
0869303b +0xd9:  lea    -0x14(%ebp),%eax
0869303e +0xdc:  mov    %eax,(%esp)
08693041 +0xdf:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08693046 +0xe4:  add    $0x20,%esp
08693049 +0xe7:  pop    %ebx
0869304a +0xe8:  pop    %esi
0869304b +0xe9:  pop    %ebp
0869304c +0xea:  ret
0869304d +0xeb:  nop
```

## 反编译 C

```c
// CUser::compoundSystemMessage @ 0x8692f62

/* CUser::compoundSystemMessage(Inven_Item const&) */

void __thiscall CUser::compoundSystemMessage(CUser *this,Inven_Item *param_1)

{
  uint uVar1;
  int iVar2;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08692f8b to 0869301d has its CatchHandler @ 08693020 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0xc);
  uVar1 = get_unique_id(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar1 & 0xffff);
  iVar2 = Inven_Item::getKey(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar2);
  uVar1 = Inven_Item::GetUpgrade(param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar1 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
