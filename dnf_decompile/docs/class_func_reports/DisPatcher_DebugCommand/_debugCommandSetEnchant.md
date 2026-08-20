# _debugCommandSetEnchant

`_ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandSetEnchant(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858fb4e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858fb4e  _ZN23DisPatcher_DebugCommand23_debugCommandSetEnchantEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandSetEnchant(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858fb4e, 0x0858fcc3]
0858fb4e +0x000:  push   %ebp
0858fb4f +0x001:  mov    %esp,%ebp
0858fb51 +0x003:  push   %esi
0858fb52 +0x004:  push   %ebx
0858fb53 +0x005:  sub    $0x30,%esp
0858fb56 +0x008:  mov    0xc(%ebp),%eax
0858fb59 +0x00b:  mov    %eax,(%esp)
0858fb5c +0x00e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858fb61 +0x013:  xor    $0x1,%eax
0858fb64 +0x016:  test   %al,%al
0858fb66 +0x018:  je     0858fb72 <+0x24>
0858fb68 +0x01a:  mov    $0x0,%ebx
0858fb6d +0x01f:  jmp    0858fcba <+0x16c>
0858fb72 +0x024:  mov    0xc(%ebp),%eax
0858fb75 +0x027:  mov    %eax,(%esp)
0858fb78 +0x02a:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0858fb7d +0x02f:  test   %eax,%eax
0858fb7f +0x031:  setne  %al
0858fb82 +0x034:  test   %al,%al
0858fb84 +0x036:  je     0858fcb5 <+0x167>
0858fb8a +0x03c:  mov    0x10(%ebp),%eax
0858fb8d +0x03f:  mov    0xe(%eax),%eax
0858fb90 +0x042:  mov    %eax,(%esp)
0858fb93 +0x045:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
0858fb98 +0x04a:  mov    %eax,-0x10(%ebp)
0858fb9b +0x04d:  mov    0x10(%ebp),%eax
0858fb9e +0x050:  mov    0x12(%eax),%ebx
0858fba1 +0x053:  mov    0xc(%ebp),%eax
0858fba4 +0x056:  mov    %eax,(%esp)
0858fba7 +0x059:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0858fbac +0x05e:  mov    %ebx,0x8(%esp)
0858fbb0 +0x062:  mov    -0x10(%ebp),%edx
0858fbb3 +0x065:  mov    %edx,0x4(%esp)
0858fbb7 +0x069:  mov    %eax,(%esp)
0858fbba +0x06c:  call   084fc2ae <_ZN10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int)
0858fbbf +0x071:  mov    %eax,-0xc(%ebp)
0858fbc2 +0x074:  cmpl   $0x0,-0xc(%ebp)
0858fbc6 +0x078:  je     0858fcb5 <+0x167>
0858fbcc +0x07e:  mov    0x10(%ebp),%eax
0858fbcf +0x081:  mov    0x16(%eax),%eax
0858fbd2 +0x084:  mov    %eax,%edx
0858fbd4 +0x086:  mov    -0xc(%ebp),%eax
0858fbd7 +0x089:  mov    %edx,0xd(%eax)
0858fbda +0x08c:  lea    -0x1c(%ebp),%eax
0858fbdd +0x08f:  mov    %eax,(%esp)
0858fbe0 +0x092:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0858fbe5 +0x097:  movl   $0xe,0x8(%esp)
0858fbed +0x09f:  movl   $0x0,0x4(%esp)
0858fbf5 +0x0a7:  lea    -0x1c(%ebp),%eax
0858fbf8 +0x0aa:  mov    %eax,(%esp)
0858fbfb +0x0ad:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0858fc00 +0x0b2:  mov    0x10(%ebp),%eax
0858fc03 +0x0b5:  mov    0xe(%eax),%eax
0858fc06 +0x0b8:  mov    %eax,0x4(%esp)
0858fc0a +0x0bc:  lea    -0x1c(%ebp),%eax
0858fc0d +0x0bf:  mov    %eax,(%esp)
0858fc10 +0x0c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0858fc15 +0x0c7:  movl   $0x1,0x4(%esp)
0858fc1d +0x0cf:  lea    -0x1c(%ebp),%eax
0858fc20 +0x0d2:  mov    %eax,(%esp)
0858fc23 +0x0d5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0858fc28 +0x0da:  mov    0x10(%ebp),%eax
0858fc2b +0x0dd:  mov    0x12(%eax),%esi
0858fc2e +0x0e0:  mov    -0x10(%ebp),%ebx
0858fc31 +0x0e3:  mov    0xc(%ebp),%eax
0858fc34 +0x0e6:  mov    %eax,(%esp)
0858fc37 +0x0e9:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0858fc3c +0x0ee:  lea    -0x1c(%ebp),%edx
0858fc3f +0x0f1:  mov    %edx,0xc(%esp)
0858fc43 +0x0f5:  mov    %esi,0x8(%esp)
0858fc47 +0x0f9:  mov    %ebx,0x4(%esp)
0858fc4b +0x0fd:  mov    %eax,(%esp)
0858fc4e +0x100:  call   084fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>  ; CInventory::MakeItemPacket(INVEN_TYPE, int, PacketGuard&) const
0858fc53 +0x105:  xor    $0x1,%eax
0858fc56 +0x108:  test   %al,%al
0858fc58 +0x10a:  je     0858fc61 <+0x113>
0858fc5a +0x10c:  mov    $0x0,%ebx
0858fc5f +0x111:  jmp    0858fca8 <+0x15a>
0858fc61 +0x113:  movl   $0x1,0x4(%esp)
0858fc69 +0x11b:  lea    -0x1c(%ebp),%eax
0858fc6c +0x11e:  mov    %eax,(%esp)
0858fc6f +0x121:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0858fc74 +0x126:  lea    -0x1c(%ebp),%eax
0858fc77 +0x129:  mov    %eax,0x4(%esp)
0858fc7b +0x12d:  mov    0xc(%ebp),%eax
0858fc7e +0x130:  mov    %eax,(%esp)
0858fc81 +0x133:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0858fc86 +0x138:  mov    $0x1,%ebx
0858fc8b +0x13d:  jmp    0858fca8 <+0x15a>
0858fc8d +0x13f:  mov    %edx,%ebx
0858fc8f +0x141:  mov    %eax,%esi
0858fc91 +0x143:  lea    -0x1c(%ebp),%eax
0858fc94 +0x146:  mov    %eax,(%esp)
0858fc97 +0x149:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858fc9c +0x14e:  mov    %esi,%eax
0858fc9e +0x150:  mov    %ebx,%edx
0858fca0 +0x152:  mov    %eax,(%esp)
0858fca3 +0x155:  call   08ae3750 <_Unwind_Resume>
0858fca8 +0x15a:  lea    -0x1c(%ebp),%eax
0858fcab +0x15d:  mov    %eax,(%esp)
0858fcae +0x160:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0858fcb3 +0x165:  jmp    0858fcba <+0x16c>
0858fcb5 +0x167:  mov    $0x0,%ebx
0858fcba +0x16c:  mov    %ebx,%eax
0858fcbc +0x16e:  add    $0x30,%esp
0858fcbf +0x171:  pop    %ebx
0858fcc0 +0x172:  pop    %esi
0858fcc1 +0x173:  pop    %ebp
0858fcc2 +0x174:  ret
0858fcc3 +0x175:  nop
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandSetEnchant @ 0x858fb4e

/* DisPatcher_DebugCommand::_debugCommandSetEnchant(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandSetEnchant
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  cVar2 = CUser::isGMUser(param_1);
  if ((cVar2 == '\x01') &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    local_14 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xe));
    iVar3 = *(int *)(param_2 + 0x12);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_10 = CInventory::GetInvenRef(pCVar4,local_14,iVar3);
    if (local_10 != 0) {
      *(undefined4 *)(local_10 + 0xd) = *(undefined4 *)(param_2 + 0x16);
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0858fbfb to 0858fc85 has its CatchHandler @ 0858fc8d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(param_2 + 0xe));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,1);
      iVar3 = local_14;
      uVar1 = *(undefined4 *)(param_2 + 0x12);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::MakeItemPacket(pCVar4,iVar3,uVar1,local_20);
      if (cVar2 == '\x01') {
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
        CUser::Send(param_1,local_20);
      }
      PacketGuard::~PacketGuard(local_20);
      return cVar2 == '\x01';
    }
  }
  return false;
}
```
