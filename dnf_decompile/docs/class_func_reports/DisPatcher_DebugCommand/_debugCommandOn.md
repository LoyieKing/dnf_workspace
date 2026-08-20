# _debugCommandOn

`_ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858e724` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858e724  _ZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858e724, 0x0858e917]
0858e724 +0x000:  push   %ebp
0858e725 +0x001:  mov    %esp,%ebp
0858e727 +0x003:  push   %esi
0858e728 +0x004:  push   %ebx
0858e729 +0x005:  sub    $0x30,%esp
0858e72c +0x008:  mov    0xc(%ebp),%eax
0858e72f +0x00b:  mov    %eax,(%esp)
0858e732 +0x00e:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
0858e737 +0x013:  mov    %eax,%esi
0858e739 +0x015:  mov    0xc(%ebp),%eax
0858e73c +0x018:  mov    %eax,(%esp)
0858e73f +0x01b:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0858e744 +0x020:  movl   $0x0,0x4(%esp)
0858e74c +0x028:  mov    %eax,(%esp)
0858e74f +0x02b:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0858e754 +0x030:  mov    %eax,%ebx
0858e756 +0x032:  movl   $0x0,0xc(%esp)
0858e75e +0x03a:  movl   $0x10,0x8(%esp)
0858e766 +0x042:  movl   $&_ZZN23DisPatcher_DebugCommand15_debugCommandOnEP5CUserR17MSG_DEBUG_COMMANDE19__PRETTY_FUNCTION__,0x4(%esp)
0858e76e +0x04a:  lea    -0x18(%ebp),%eax
0858e771 +0x04d:  mov    %eax,(%esp)
0858e774 +0x050:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0858e779 +0x055:  mov    %esi,0xc(%esp)
0858e77d +0x059:  mov    %ebx,0x8(%esp)
0858e781 +0x05d:  movl   $"%s:'%s' GM Mode ON.",0x4(%esp)
0858e789 +0x065:  lea    -0x18(%ebp),%eax
0858e78c +0x068:  mov    %eax,(%esp)
0858e78f +0x06b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0858e794 +0x070:  movl   $0x1,0x4(%esp)
0858e79c +0x078:  mov    0xc(%ebp),%eax
0858e79f +0x07b:  mov    %eax,(%esp)
0858e7a2 +0x07e:  call   086796dc <_ZN5CUser17SetGameMasterModeEb>  ; CUser::SetGameMasterMode(bool)
0858e7a7 +0x083:  mov    0xc(%ebp),%eax
0858e7aa +0x086:  mov    %eax,(%esp)
0858e7ad +0x089:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0858e7b2 +0x08e:  test   %eax,%eax
0858e7b4 +0x090:  setne  %al
0858e7b7 +0x093:  test   %al,%al
0858e7b9 +0x095:  je     0858e90a <+0x1e6>
0858e7bf +0x09b:  lea    -0x24(%ebp),%eax
0858e7c2 +0x09e:  mov    %eax,(%esp)
0858e7c5 +0x0a1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858e7ca +0x0a6:  movl   $0xe,0x8(%esp)
0858e7d2 +0x0ae:  movl   $0x0,0x4(%esp)
0858e7da +0x0b6:  lea    -0x24(%ebp),%eax
0858e7dd +0x0b9:  mov    %eax,(%esp)
0858e7e0 +0x0bc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0858e7e5 +0x0c1:  movl   $0x0,0x4(%esp)
0858e7ed +0x0c9:  lea    -0x24(%ebp),%eax
0858e7f0 +0x0cc:  mov    %eax,(%esp)
0858e7f3 +0x0cf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0858e7f8 +0x0d4:  movl   $0x3,0x4(%esp)
0858e800 +0x0dc:  lea    -0x24(%ebp),%eax
0858e803 +0x0df:  mov    %eax,(%esp)
0858e806 +0x0e2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0858e80b +0x0e7:  mov    0xc(%ebp),%eax
0858e80e +0x0ea:  mov    %eax,(%esp)
0858e811 +0x0ed:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0858e816 +0x0f2:  lea    -0x24(%ebp),%edx
0858e819 +0x0f5:  mov    %edx,0xc(%esp)
0858e81d +0x0f9:  movl   $0x1,0x8(%esp)
0858e825 +0x101:  movl   $0x1,0x4(%esp)
0858e82d +0x109:  mov    %eax,(%esp)
0858e830 +0x10c:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0858e835 +0x111:  xor    $0x1,%eax
0858e838 +0x114:  test   %al,%al
0858e83a +0x116:  je     0858e846 <+0x122>
0858e83c +0x118:  mov    $0x0,%ebx
0858e841 +0x11d:  jmp    0858e8fd <+0x1d9>
0858e846 +0x122:  mov    0xc(%ebp),%eax
0858e849 +0x125:  mov    %eax,(%esp)
0858e84c +0x128:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0858e851 +0x12d:  lea    -0x24(%ebp),%edx
0858e854 +0x130:  mov    %edx,0xc(%esp)
0858e858 +0x134:  movl   $0x0,0x8(%esp)
0858e860 +0x13c:  movl   $0x1,0x4(%esp)
0858e868 +0x144:  mov    %eax,(%esp)
0858e86b +0x147:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0858e870 +0x14c:  xor    $0x1,%eax
0858e873 +0x14f:  test   %al,%al
0858e875 +0x151:  je     0858e87e <+0x15a>
0858e877 +0x153:  mov    $0x0,%ebx
0858e87c +0x158:  jmp    0858e8fd <+0x1d9>
0858e87e +0x15a:  mov    0xc(%ebp),%eax
0858e881 +0x15d:  mov    %eax,(%esp)
0858e884 +0x160:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0858e889 +0x165:  lea    -0x24(%ebp),%edx
0858e88c +0x168:  mov    %edx,0xc(%esp)
0858e890 +0x16c:  movl   $0x2,0x8(%esp)
0858e898 +0x174:  movl   $0x1,0x4(%esp)
0858e8a0 +0x17c:  mov    %eax,(%esp)
0858e8a3 +0x17f:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0858e8a8 +0x184:  xor    $0x1,%eax
0858e8ab +0x187:  test   %al,%al
0858e8ad +0x189:  je     0858e8b6 <+0x192>
0858e8af +0x18b:  mov    $0x0,%ebx
0858e8b4 +0x190:  jmp    0858e8fd <+0x1d9>
0858e8b6 +0x192:  movl   $0x1,0x4(%esp)
0858e8be +0x19a:  lea    -0x24(%ebp),%eax
0858e8c1 +0x19d:  mov    %eax,(%esp)
0858e8c4 +0x1a0:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0858e8c9 +0x1a5:  lea    -0x24(%ebp),%eax
0858e8cc +0x1a8:  mov    %eax,0x4(%esp)
0858e8d0 +0x1ac:  mov    0xc(%ebp),%eax
0858e8d3 +0x1af:  mov    %eax,(%esp)
0858e8d6 +0x1b2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858e8db +0x1b7:  mov    $0x1,%ebx
0858e8e0 +0x1bc:  jmp    0858e8fd <+0x1d9>
0858e8e2 +0x1be:  mov    %edx,%ebx
0858e8e4 +0x1c0:  mov    %eax,%esi
0858e8e6 +0x1c2:  lea    -0x24(%ebp),%eax
0858e8e9 +0x1c5:  mov    %eax,(%esp)
0858e8ec +0x1c8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858e8f1 +0x1cd:  mov    %esi,%eax
0858e8f3 +0x1cf:  mov    %ebx,%edx
0858e8f5 +0x1d1:  mov    %eax,(%esp)
0858e8f8 +0x1d4:  call   08ae3750 <_Unwind_Resume>
0858e8fd +0x1d9:  lea    -0x24(%ebp),%eax
0858e900 +0x1dc:  mov    %eax,(%esp)
0858e903 +0x1df:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858e908 +0x1e4:  jmp    0858e90f <+0x1eb>
0858e90a +0x1e6:  mov    $0x0,%ebx
0858e90f +0x1eb:  mov    %ebx,%eax
0858e911 +0x1ed:  add    $0x30,%esp
0858e914 +0x1f0:  pop    %ebx
0858e915 +0x1f1:  pop    %esi
0858e916 +0x1f2:  pop    %ebp
0858e917 +0x1f3:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandOn @ 0x858e724

/* DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&) */

undefined4 DisPatcher_DebugCommand::_debugCommandOn(CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  CInventory *pCVar6;
  PacketGuard local_28 [12];
  cMyTrace local_1c [16];
  
  uVar2 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
  uVar3 = CUser::get_acc_id((CUser *)param_2);
  uVar4 = NumberToString(uVar3,0);
  cMyTrace::cMyTrace(local_1c,
                     "bool DisPatcher_DebugCommand::_debugCommandOn(CUser*, MSG_DEBUG_COMMAND&)",
                     0x10,0);
  cMyTrace::operator()(local_1c,"%s:\'%s\' GM Mode ON.",uVar4,uVar2);
  CUser::SetGameMasterMode((CUser *)param_2,true);
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar5 == 0) {
    uVar2 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0858e7e0 to 0858e8da has its CatchHandler @ 0858e8e2 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xe);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,3);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
    cVar1 = CInventory::MakeItemPacket(pCVar6,1,1,local_28);
    if (cVar1 == '\x01') {
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      cVar1 = CInventory::MakeItemPacket(pCVar6,1,0,local_28);
      if (cVar1 == '\x01') {
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
        cVar1 = CInventory::MakeItemPacket(pCVar6,1,2,local_28);
        if (cVar1 == '\x01') {
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
          CUser::Send((CUser *)param_2,local_28);
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
    PacketGuard::~PacketGuard(local_28);
  }
  return uVar2;
}
```
