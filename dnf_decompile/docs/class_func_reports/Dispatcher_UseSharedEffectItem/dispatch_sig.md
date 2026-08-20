# dispatch_sig

`_ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_UseSharedEffectItem` | `0x08220484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08220484  _ZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x08220484, 0x08220855]
08220484 +0x000:  push   %ebp
08220485 +0x001:  mov    %esp,%ebp
08220487 +0x003:  push   %esi
08220488 +0x004:  push   %ebx
08220489 +0x005:  add    $0xffffff80,%esp
0822048c +0x008:  movl   $0x0,-0x18(%ebp)
08220493 +0x00f:  movw   $0x0,-0x1a(%ebp)
08220499 +0x015:  lea    -0x18(%ebp),%eax
0822049c +0x018:  mov    %eax,0x4(%esp)
082204a0 +0x01c:  mov    0x10(%ebp),%eax
082204a3 +0x01f:  mov    %eax,(%esp)
082204a6 +0x022:  call   0858d0f0 <_ZN9PacketBuf7get_intERi>  ; PacketBuf::get_int(int&)
082204ab +0x027:  xor    $0x1,%eax
082204ae +0x02a:  test   %al,%al
082204b0 +0x02c:  je     082204db <+0x57>
082204b2 +0x02e:  movl   $0x0,0xc(%esp)
082204ba +0x036:  movl   $0x0,0x8(%esp)
082204c2 +0x03e:  movl   $&_ZZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
082204ca +0x046:  movl   $0xd919,(%esp)
082204d1 +0x04d:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
082204d6 +0x052:  jmp    0822084c <+0x3c8>
082204db +0x057:  lea    -0x1a(%ebp),%eax
082204de +0x05a:  mov    %eax,0x4(%esp)
082204e2 +0x05e:  mov    0x10(%ebp),%eax
082204e5 +0x061:  mov    %eax,(%esp)
082204e8 +0x064:  call   0858cfc0 <_ZN9PacketBuf9get_shortERs>  ; PacketBuf::get_short(short&)
082204ed +0x069:  xor    $0x1,%eax
082204f0 +0x06c:  test   %al,%al
082204f2 +0x06e:  je     0822051d <+0x99>
082204f4 +0x070:  movl   $0x0,0xc(%esp)
082204fc +0x078:  movl   $0x0,0x8(%esp)
08220504 +0x080:  movl   $&_ZZN30Dispatcher_UseSharedEffectItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
0822050c +0x088:  movl   $0xd91a,(%esp)
08220513 +0x08f:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08220518 +0x094:  jmp    0822084c <+0x3c8>
0822051d +0x099:  mov    0xc(%ebp),%eax
08220520 +0x09c:  mov    %eax,(%esp)
08220523 +0x09f:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08220528 +0x0a4:  cmp    $0x3,%eax
0822052b +0x0a7:  setne  %al
0822052e +0x0aa:  test   %al,%al
08220530 +0x0ac:  je     08220557 <+0xd3>
08220532 +0x0ae:  movl   $0x1,0x8(%esp)
0822053a +0x0b6:  movl   $0xff,0x4(%esp)
08220542 +0x0be:  mov    0xc(%ebp),%eax
08220545 +0x0c1:  mov    %eax,(%esp)
08220548 +0x0c4:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822054d +0x0c9:  mov    $0x0,%eax
08220552 +0x0ce:  jmp    0822084c <+0x3c8>
08220557 +0x0d3:  mov    0xc(%ebp),%eax
0822055a +0x0d6:  mov    %eax,(%esp)
0822055d +0x0d9:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08220562 +0x0de:  test   %eax,%eax
08220564 +0x0e0:  sete   %al
08220567 +0x0e3:  test   %al,%al
08220569 +0x0e5:  je     08220590 <+0x10c>
0822056b +0x0e7:  movl   $0x1,0x8(%esp)
08220573 +0x0ef:  movl   $0xff,0x4(%esp)
0822057b +0x0f7:  mov    0xc(%ebp),%eax
0822057e +0x0fa:  mov    %eax,(%esp)
08220581 +0x0fd:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08220586 +0x102:  mov    $0x0,%eax
0822058b +0x107:  jmp    0822084c <+0x3c8>
08220590 +0x10c:  mov    0xc(%ebp),%eax
08220593 +0x10f:  mov    %eax,(%esp)
08220596 +0x112:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0822059b +0x117:  mov    %eax,-0x14(%ebp)
0822059e +0x11a:  movzwl -0x1a(%ebp),%eax
082205a2 +0x11e:  movswl %ax,%edx
082205a5 +0x121:  lea    -0x65(%ebp),%eax
082205a8 +0x124:  mov    %edx,0xc(%esp)
082205ac +0x128:  movl   $0x1,0x8(%esp)
082205b4 +0x130:  mov    -0x14(%ebp),%edx
082205b7 +0x133:  mov    %edx,0x4(%esp)
082205bb +0x137:  mov    %eax,(%esp)
082205be +0x13a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082205c3 +0x13f:  sub    $0x4,%esp
082205c6 +0x142:  lea    -0x65(%ebp),%eax
082205c9 +0x145:  mov    %eax,(%esp)
082205cc +0x148:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
082205d1 +0x14d:  test   %al,%al
082205d3 +0x14f:  je     082205fa <+0x176>
082205d5 +0x151:  movl   $0x16,0x8(%esp)
082205dd +0x159:  movl   $0xff,0x4(%esp)
082205e5 +0x161:  mov    0xc(%ebp),%eax
082205e8 +0x164:  mov    %eax,(%esp)
082205eb +0x167:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082205f0 +0x16c:  mov    $0x0,%eax
082205f5 +0x171:  jmp    0822084c <+0x3c8>
082205fa +0x176:  mov    -0x5e(%ebp),%eax
082205fd +0x179:  test   %eax,%eax
082205ff +0x17b:  jg     08220626 <+0x1a2>
08220601 +0x17d:  movl   $0x16,0x8(%esp)
08220609 +0x185:  movl   $0xff,0x4(%esp)
08220611 +0x18d:  mov    0xc(%ebp),%eax
08220614 +0x190:  mov    %eax,(%esp)
08220617 +0x193:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822061c +0x198:  mov    $0x0,%eax
08220621 +0x19d:  jmp    0822084c <+0x3c8>
08220626 +0x1a2:  mov    -0x63(%ebp),%edx
08220629 +0x1a5:  mov    -0x18(%ebp),%eax
0822062c +0x1a8:  cmp    %eax,%edx
0822062e +0x1aa:  je     08220655 <+0x1d1>
08220630 +0x1ac:  movl   $0x1,0x8(%esp)
08220638 +0x1b4:  movl   $0xff,0x4(%esp)
08220640 +0x1bc:  mov    0xc(%ebp),%eax
08220643 +0x1bf:  mov    %eax,(%esp)
08220646 +0x1c2:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822064b +0x1c7:  mov    $0x0,%eax
08220650 +0x1cc:  jmp    0822084c <+0x3c8>
08220655 +0x1d1:  mov    -0x18(%ebp),%ebx
08220658 +0x1d4:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0822065d +0x1d9:  mov    %ebx,0x4(%esp)
08220661 +0x1dd:  mov    %eax,(%esp)
08220664 +0x1e0:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08220669 +0x1e5:  mov    %eax,-0x10(%ebp)
0822066c +0x1e8:  mov    -0x10(%ebp),%eax
0822066f +0x1eb:  mov    %eax,-0xc(%ebp)
08220672 +0x1ee:  cmpl   $0x0,-0xc(%ebp)
08220676 +0x1f2:  je     0822068a <+0x206>
08220678 +0x1f4:  mov    -0xc(%ebp),%eax
0822067b +0x1f7:  mov    %eax,(%esp)
0822067e +0x1fa:  call   0822ca18 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20c2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20c2
08220683 +0x1ff:  xor    $0x1,%eax
08220686 +0x202:  test   %al,%al
08220688 +0x204:  je     08220691 <+0x20d>
0822068a +0x206:  mov    $0x1,%eax
0822068f +0x20b:  jmp    08220696 <+0x212>
08220691 +0x20d:  mov    $0x0,%eax
08220696 +0x212:  test   %al,%al
08220698 +0x214:  je     082206bf <+0x23b>
0822069a +0x216:  movl   $0x11,0x8(%esp)
082206a2 +0x21e:  movl   $0xff,0x4(%esp)
082206aa +0x226:  mov    0xc(%ebp),%eax
082206ad +0x229:  mov    %eax,(%esp)
082206b0 +0x22c:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
082206b5 +0x231:  mov    $0x0,%eax
082206ba +0x236:  jmp    0822084c <+0x3c8>
082206bf +0x23b:  movzwl -0x1a(%ebp),%eax
082206c3 +0x23f:  movswl %ax,%ebx
082206c6 +0x242:  mov    0xc(%ebp),%eax
082206c9 +0x245:  mov    %eax,(%esp)
082206cc +0x248:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082206d1 +0x24d:  movl   $0x1,0x14(%esp)
082206d9 +0x255:  movl   $0x3,0x10(%esp)
082206e1 +0x25d:  movl   $0x1,0xc(%esp)
082206e9 +0x265:  mov    %ebx,0x8(%esp)
082206ed +0x269:  movl   $0x1,0x4(%esp)
082206f5 +0x271:  mov    %eax,(%esp)
082206f8 +0x274:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
082206fd +0x279:  xor    $0x1,%eax
08220700 +0x27c:  test   %al,%al
08220702 +0x27e:  je     08220729 <+0x2a5>
08220704 +0x280:  movl   $0x1,0x8(%esp)
0822070c +0x288:  movl   $0xff,0x4(%esp)
08220714 +0x290:  mov    0xc(%ebp),%eax
08220717 +0x293:  mov    %eax,(%esp)
0822071a +0x296:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
0822071f +0x29b:  mov    $0x0,%eax
08220724 +0x2a0:  jmp    0822084c <+0x3c8>
08220729 +0x2a5:  lea    -0x28(%ebp),%eax
0822072c +0x2a8:  mov    %eax,(%esp)
0822072f +0x2ab:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08220734 +0x2b0:  movl   $0xff,0x8(%esp)
0822073c +0x2b8:  movl   $0x1,0x4(%esp)
08220744 +0x2c0:  lea    -0x28(%ebp),%eax
08220747 +0x2c3:  mov    %eax,(%esp)
0822074a +0x2c6:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0822074f +0x2cb:  movl   $0x1,0x4(%esp)
08220757 +0x2d3:  lea    -0x28(%ebp),%eax
0822075a +0x2d6:  mov    %eax,(%esp)
0822075d +0x2d9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08220762 +0x2de:  movzwl -0x1a(%ebp),%eax
08220766 +0x2e2:  cwtl
08220767 +0x2e3:  mov    %eax,0x4(%esp)
0822076b +0x2e7:  lea    -0x28(%ebp),%eax
0822076e +0x2ea:  mov    %eax,(%esp)
08220771 +0x2ed:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08220776 +0x2f2:  movl   $0x1,0x4(%esp)
0822077e +0x2fa:  lea    -0x28(%ebp),%eax
08220781 +0x2fd:  mov    %eax,(%esp)
08220784 +0x300:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08220789 +0x305:  lea    -0x28(%ebp),%eax
0822078c +0x308:  mov    %eax,0x4(%esp)
08220790 +0x30c:  mov    0xc(%ebp),%eax
08220793 +0x30f:  mov    %eax,(%esp)
08220796 +0x312:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0822079b +0x317:  lea    -0x28(%ebp),%eax
0822079e +0x31a:  mov    %eax,(%esp)
082207a1 +0x31d:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
082207a6 +0x322:  movl   $0xdb,0x8(%esp)
082207ae +0x32a:  movl   $0x0,0x4(%esp)
082207b6 +0x332:  lea    -0x28(%ebp),%eax
082207b9 +0x335:  mov    %eax,(%esp)
082207bc +0x338:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082207c1 +0x33d:  mov    0xc(%ebp),%eax
082207c4 +0x340:  mov    %eax,(%esp)
082207c7 +0x343:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
082207cc +0x348:  movzwl %ax,%eax
082207cf +0x34b:  mov    %eax,0x4(%esp)
082207d3 +0x34f:  lea    -0x28(%ebp),%eax
082207d6 +0x352:  mov    %eax,(%esp)
082207d9 +0x355:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
082207de +0x35a:  mov    -0x18(%ebp),%eax
082207e1 +0x35d:  mov    %eax,0x4(%esp)
082207e5 +0x361:  lea    -0x28(%ebp),%eax
082207e8 +0x364:  mov    %eax,(%esp)
082207eb +0x367:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082207f0 +0x36c:  movl   $0x1,0x4(%esp)
082207f8 +0x374:  lea    -0x28(%ebp),%eax
082207fb +0x377:  mov    %eax,(%esp)
082207fe +0x37a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08220803 +0x37f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08220808 +0x384:  movl   $0x3,0x8(%esp)
08220810 +0x38c:  lea    -0x28(%ebp),%edx
08220813 +0x38f:  mov    %edx,0x4(%esp)
08220817 +0x393:  mov    %eax,(%esp)
0822081a +0x396:  call   086c9184 <_ZN9GameWorld19send_all_with_stateER11PacketGuardi>  ; GameWorld::send_all_with_state(PacketGuard&, int)
0822081f +0x39b:  jmp    0822083c <+0x3b8>
08220821 +0x39d:  mov    %edx,%ebx
08220823 +0x39f:  mov    %eax,%esi
08220825 +0x3a1:  lea    -0x28(%ebp),%eax
08220828 +0x3a4:  mov    %eax,(%esp)
0822082b +0x3a7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08220830 +0x3ac:  mov    %esi,%eax
08220832 +0x3ae:  mov    %ebx,%edx
08220834 +0x3b0:  mov    %eax,(%esp)
08220837 +0x3b3:  call   08ae3750 <_Unwind_Resume>
0822083c +0x3b8:  lea    -0x28(%ebp),%eax
0822083f +0x3bb:  mov    %eax,(%esp)
08220842 +0x3be:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08220847 +0x3c3:  mov    $0x0,%eax
0822084c +0x3c8:  lea    -0x8(%ebp),%esp
0822084f +0x3cb:  add    $0x0,%esp
08220852 +0x3ce:  pop    %ebx
08220853 +0x3cf:  pop    %esi
08220854 +0x3d0:  pop    %ebp
08220855 +0x3d1:  ret
```

## 反编译 C

```c
// Dispatcher_UseSharedEffectItem::dispatch_sig @ 0x8220484

/* Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UseSharedEffectItem::dispatch_sig
          (Dispatcher_UseSharedEffectItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this_00;
  CInventory *pCVar5;
  uint uVar6;
  GameWorld *this_01;
  int iVar7;
  Inven_Item local_69 [2];
  int local_67;
  int local_62;
  PacketGuard local_2c [14];
  short local_1e;
  int local_1c;
  int local_18;
  CStackableItem *local_14;
  CStackableItem *local_10;
  
  local_1c = 0;
  local_1e = 0;
  cVar2 = PacketBuf::get_int(param_2,&local_1c);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xd919,
                     "virtual int Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar3;
  }
  cVar2 = PacketBuf::get_short(param_2,&local_1e);
  if (cVar2 != '\x01') {
    uVar3 = LineFunc(0xd91a,
                     "virtual int Dispatcher_UseSharedEffectItem::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar3;
  }
  iVar4 = CUser::get_state(param_1);
  if (iVar4 != 3) {
    CUser::SendCmdErrorPacket(param_1,0xff,1);
    return 0;
  }
  iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar4 != 0) {
    local_18 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    iVar7 = (int)local_1e;
    CInventory::GetInvenSlot((int)local_69,local_18);
    cVar2 = Inven_Item::isEmpty(local_69);
    iVar4 = local_1c;
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0xff,0x16,iVar7);
      return 0;
    }
    if (0 < local_62) {
      if (local_67 == local_1c) {
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = (CStackableItem *)CDataManager::find_item(this_00,iVar4);
        local_10 = local_14;
        if ((local_14 == (CStackableItem *)0x0) ||
           (cVar2 = CStackableItem::IsSharedEffectItem(local_14), cVar2 != '\x01')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          CUser::SendCmdErrorPacket(param_1,0xff,0x11);
        }
        else {
          iVar4 = (int)local_1e;
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar2 = CInventory::delete_item(pCVar5,1,iVar4,1,3,1);
          if (cVar2 == '\x01') {
            PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0822074a to 0822081e has its CatchHandler @ 08220821 */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0xff);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)local_1e);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
            CUser::Send(param_1,local_2c);
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0xdb);
            uVar6 = CUser::get_unique_id(param_1);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar6 & 0xffff);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_1c);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
            this_01 = (GameWorld *)G_GameWorld();
            GameWorld::send_all_with_state(this_01,local_2c,3);
            PacketGuard::~PacketGuard(local_2c);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xff,1);
          }
        }
        return 0;
      }
      CUser::SendCmdErrorPacket(param_1,0xff,1,iVar7);
      return 0;
    }
    CUser::SendCmdErrorPacket(param_1,0xff,0x16,iVar7);
    return 0;
  }
  CUser::SendCmdErrorPacket(param_1,0xff,1);
  return 0;
}
```
