# Send_Expand_Equip_Info

`_ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser`

`CExpandEquipslot::Send_Expand_Equip_Info(CUser*)`

| 类 | 地址 |
|---|---|
| `CExpandEquipslot` | `0x0849a57c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0849a57c  _ZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUser
#           CExpandEquipslot::Send_Expand_Equip_Info(CUser*)
# range [0x0849a57c, 0x0849a759]
0849a57c +0x000:  push   %ebp
0849a57d +0x001:  mov    %esp,%ebp
0849a57f +0x003:  push   %esi
0849a580 +0x004:  push   %ebx
0849a581 +0x005:  sub    $0x30,%esp
0849a584 +0x008:  cmpl   $0x0,0xc(%ebp)
0849a588 +0x00c:  jne    0849a5c0 <+0x44>
0849a58a +0x00e:  movl   $"Fail Send_Expand_Equip_Info : pUser is NULL",0x10(%esp)
0849a592 +0x016:  movl   $0x21b,0xc(%esp)
0849a59a +0x01e:  movl   $&_ZZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0849a5a2 +0x026:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
0849a5aa +0x02e:  movl   $0x1,(%esp)
0849a5b1 +0x035:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0849a5b6 +0x03a:  mov    $0x1,%ebx
0849a5bb +0x03f:  jmp    0849a750 <+0x1d4>
0849a5c0 +0x044:  mov    0xc(%ebp),%eax
0849a5c3 +0x047:  mov    %eax,(%esp)
0849a5c6 +0x04a:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0849a5cb +0x04f:  cmp    $0x2,%eax
0849a5ce +0x052:  setle  %al
0849a5d1 +0x055:  test   %al,%al
0849a5d3 +0x057:  je     0849a60b <+0x8f>
0849a5d5 +0x059:  movl   $"Fail Send_Expand_Equip_Info : pUser is NULL",0x10(%esp)
0849a5dd +0x061:  movl   $0x221,0xc(%esp)
0849a5e5 +0x069:  movl   $&_ZZN16CExpandEquipslot22Send_Expand_Equip_InfoEP5CUserE19__PRETTY_FUNCTION__,0x8(%esp)
0849a5ed +0x071:  movl   $"ExpandEquipslot.cpp",0x4(%esp)
0849a5f5 +0x079:  movl   $0x1,(%esp)
0849a5fc +0x080:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0849a601 +0x085:  mov    $0x13,%ebx
0849a606 +0x08a:  jmp    0849a750 <+0x1d4>
0849a60b +0x08f:  lea    -0x18(%ebp),%eax
0849a60e +0x092:  mov    %eax,(%esp)
0849a611 +0x095:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0849a616 +0x09a:  lea    -0x18(%ebp),%eax
0849a619 +0x09d:  mov    %eax,(%esp)
0849a61c +0x0a0:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0849a621 +0x0a5:  movl   $0x153,0x8(%esp)
0849a629 +0x0ad:  movl   $0x0,0x4(%esp)
0849a631 +0x0b5:  lea    -0x18(%ebp),%eax
0849a634 +0x0b8:  mov    %eax,(%esp)
0849a637 +0x0bb:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0849a63c +0x0c0:  mov    0xc(%ebp),%eax
0849a63f +0x0c3:  mov    %eax,(%esp)
0849a642 +0x0c6:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
0849a647 +0x0cb:  movzwl %ax,%eax
0849a64a +0x0ce:  mov    %eax,0x4(%esp)
0849a64e +0x0d2:  lea    -0x18(%ebp),%eax
0849a651 +0x0d5:  mov    %eax,(%esp)
0849a654 +0x0d8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0849a659 +0x0dd:  movb   $0x1,-0x9(%ebp)
0849a65d +0x0e1:  jmp    0849a6ef <+0x173>
0849a662 +0x0e6:  cmpb   $0x1,-0x9(%ebp)
0849a666 +0x0ea:  jne    0849a6a6 <+0x12a>
0849a668 +0x0ec:  mov    0xc(%ebp),%eax
0849a66b +0x0ef:  mov    %eax,(%esp)
0849a66e +0x0f2:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0849a673 +0x0f7:  cmp    $0x1,%al
0849a675 +0x0f9:  sete   %al
0849a678 +0x0fc:  test   %al,%al
0849a67a +0x0fe:  je     0849a691 <+0x115>
0849a67c +0x100:  movl   $0x0,0x4(%esp)
0849a684 +0x108:  lea    -0x18(%ebp),%eax
0849a687 +0x10b:  mov    %eax,(%esp)
0849a68a +0x10e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849a68f +0x113:  jmp    0849a6b9 <+0x13d>
0849a691 +0x115:  movzbl -0x9(%ebp),%eax
0849a695 +0x119:  mov    %eax,0x4(%esp)
0849a699 +0x11d:  lea    -0x18(%ebp),%eax
0849a69c +0x120:  mov    %eax,(%esp)
0849a69f +0x123:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849a6a4 +0x128:  jmp    0849a6b9 <+0x13d>
0849a6a6 +0x12a:  movzbl -0x9(%ebp),%eax
0849a6aa +0x12e:  mov    %eax,0x4(%esp)
0849a6ae +0x132:  lea    -0x18(%ebp),%eax
0849a6b1 +0x135:  mov    %eax,(%esp)
0849a6b4 +0x138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0849a6b9 +0x13d:  movzbl -0x9(%ebp),%ebx
0849a6bd +0x141:  mov    0xc(%ebp),%eax
0849a6c0 +0x144:  mov    %eax,(%esp)
0849a6c3 +0x147:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0849a6c8 +0x14c:  mov    %ebx,0x10(%esp)
0849a6cc +0x150:  movl   $0x1,0xc(%esp)
0849a6d4 +0x158:  movl   $0x1,0x8(%esp)
0849a6dc +0x160:  lea    -0x18(%ebp),%edx
0849a6df +0x163:  mov    %edx,0x4(%esp)
0849a6e3 +0x167:  mov    %eax,(%esp)
0849a6e6 +0x16a:  call   084fe2e2 <_ZNK10CInventory13MakeEquipListEPvb13ENUM_USERINFO14ENUM_EQUIPSLOT>  ; CInventory::MakeEquipList(void*, bool, ENUM_USERINFO, ENUM_EQUIPSLOT) const
0849a6eb +0x16f:  addb   $0x1,-0x9(%ebp)
0849a6ef +0x173:  cmpb   $0x3,-0x9(%ebp)
0849a6f3 +0x177:  setbe  %al
0849a6f6 +0x17a:  test   %al,%al
0849a6f8 +0x17c:  jne    0849a662 <+0xe6>
0849a6fe +0x182:  movl   $0x1,0x4(%esp)
0849a706 +0x18a:  lea    -0x18(%ebp),%eax
0849a709 +0x18d:  mov    %eax,(%esp)
0849a70c +0x190:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0849a711 +0x195:  lea    -0x18(%ebp),%eax
0849a714 +0x198:  mov    %eax,0x4(%esp)
0849a718 +0x19c:  mov    0xc(%ebp),%eax
0849a71b +0x19f:  mov    %eax,(%esp)
0849a71e +0x1a2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0849a723 +0x1a7:  mov    $0x0,%ebx
0849a728 +0x1ac:  lea    -0x18(%ebp),%eax
0849a72b +0x1af:  mov    %eax,(%esp)
0849a72e +0x1b2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849a733 +0x1b7:  jmp    0849a750 <+0x1d4>
0849a735 +0x1b9:  mov    %edx,%ebx
0849a737 +0x1bb:  mov    %eax,%esi
0849a739 +0x1bd:  lea    -0x18(%ebp),%eax
0849a73c +0x1c0:  mov    %eax,(%esp)
0849a73f +0x1c3:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0849a744 +0x1c8:  mov    %esi,%eax
0849a746 +0x1ca:  mov    %ebx,%edx
0849a748 +0x1cc:  mov    %eax,(%esp)
0849a74b +0x1cf:  call   08ae3750 <_Unwind_Resume>
0849a750 +0x1d4:  mov    %ebx,%eax
0849a752 +0x1d6:  add    $0x30,%esp
0849a755 +0x1d9:  pop    %ebx
0849a756 +0x1da:  pop    %esi
0849a757 +0x1db:  pop    %ebp
0849a758 +0x1dc:  ret
0849a759 +0x1dd:  nop
```

## 反编译 C

```c
// CExpandEquipslot::Send_Expand_Equip_Info @ 0x849a57c

/* CExpandEquipslot::Send_Expand_Equip_Info(CUser*) */

undefined4 __thiscall
CExpandEquipslot::Send_Expand_Equip_Info(CExpandEquipslot *this,CUser *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CInventory *pCVar5;
  undefined4 uVar6;
  PacketGuard local_1c [15];
  byte local_d;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Expand_Equip_Info(CUser*)",0x21b,
               "Fail Send_Expand_Equip_Info : pUser is NULL");
    uVar6 = 1;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 < 3) {
      LogManager::logFormat
                (1,"ExpandEquipslot.cpp","int CExpandEquipslot::Send_Expand_Equip_Info(CUser*)",
                 0x221,"Fail Send_Expand_Equip_Info : pUser is NULL");
      uVar6 = 0x13;
    }
    else {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0849a61c to 0849a722 has its CatchHandler @ 0849a735 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x153);
      uVar4 = CUser::get_unique_id(param_1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
      for (local_d = 1; local_d < 4; local_d = local_d + 1) {
        if (local_d == 1) {
          cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)param_1);
          if (cVar2 == '\x01') {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
          }
          else {
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
          }
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
        }
        bVar1 = local_d;
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::MakeEquipList(pCVar5,local_1c,1,1,bVar1);
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      uVar6 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return uVar6;
}
```
