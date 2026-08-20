# MakeItemList

`_ZNK6CCargo12MakeItemListEP11PacketGuard`

`CCargo::MakeItemList(PacketGuard*) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850bee2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850bee2  _ZNK6CCargo12MakeItemListEP11PacketGuard
#           CCargo::MakeItemList(PacketGuard*) const
# range [0x0850bee2, 0x0850c15f]
0850bee2 +0x000:  push   %ebp
0850bee3 +0x001:  mov    %esp,%ebp
0850bee5 +0x003:  push   %esi
0850bee6 +0x004:  push   %ebx
0850bee7 +0x005:  sub    $0x20,%esp
0850beea +0x008:  mov    0xc(%ebp),%eax
0850beed +0x00b:  movl   $0xd,0x8(%esp)
0850bef5 +0x013:  movl   $0x0,0x4(%esp)
0850befd +0x01b:  mov    %eax,(%esp)
0850bf00 +0x01e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0850bf05 +0x023:  mov    0xc(%ebp),%eax
0850bf08 +0x026:  movl   $0x2,0x4(%esp)
0850bf10 +0x02e:  mov    %eax,(%esp)
0850bf13 +0x031:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850bf18 +0x036:  mov    0x8(%ebp),%eax
0850bf1b +0x039:  mov    %eax,(%esp)
0850bf1e +0x03c:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0850bf23 +0x041:  mov    0xc(%ebp),%edx
0850bf26 +0x044:  mov    %eax,0x4(%esp)
0850bf2a +0x048:  mov    %edx,(%esp)
0850bf2d +0x04b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850bf32 +0x050:  mov    0x8(%ebp),%eax
0850bf35 +0x053:  mov    %eax,(%esp)
0850bf38 +0x056:  call   084e99f0 <_GLOBAL__I__Z7getUserj+0x9a2>  ; global constructors keyed to getUser(unsigned int)+0x9a2
0850bf3d +0x05b:  mov    0xc(%ebp),%edx
0850bf40 +0x05e:  mov    %eax,0x4(%esp)
0850bf44 +0x062:  mov    %edx,(%esp)
0850bf47 +0x065:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850bf4c +0x06a:  movl   $0x0,-0xc(%ebp)
0850bf53 +0x071:  jmp    0850c12f <+0x24d>
0850bf58 +0x076:  mov    0x8(%ebp),%eax
0850bf5b +0x079:  mov    0x4(%eax),%edx
0850bf5e +0x07c:  mov    -0xc(%ebp),%eax
0850bf61 +0x07f:  imul   $0x3d,%eax,%eax
0850bf64 +0x082:  lea    (%edx,%eax,1),%eax
0850bf67 +0x085:  mov    0x2(%eax),%eax
0850bf6a +0x088:  test   %eax,%eax
0850bf6c +0x08a:  je     0850c12b <+0x249>
0850bf72 +0x090:  mov    0xc(%ebp),%eax
0850bf75 +0x093:  mov    -0xc(%ebp),%edx
0850bf78 +0x096:  mov    %edx,0x4(%esp)
0850bf7c +0x09a:  mov    %eax,(%esp)
0850bf7f +0x09d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850bf84 +0x0a2:  mov    0x8(%ebp),%eax
0850bf87 +0x0a5:  mov    0x4(%eax),%edx
0850bf8a +0x0a8:  mov    -0xc(%ebp),%eax
0850bf8d +0x0ab:  imul   $0x3d,%eax,%eax
0850bf90 +0x0ae:  lea    (%edx,%eax,1),%eax
0850bf93 +0x0b1:  mov    0x2(%eax),%eax
0850bf96 +0x0b4:  mov    %eax,%edx
0850bf98 +0x0b6:  mov    0xc(%ebp),%eax
0850bf9b +0x0b9:  mov    %edx,0x4(%esp)
0850bf9f +0x0bd:  mov    %eax,(%esp)
0850bfa2 +0x0c0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850bfa7 +0x0c5:  mov    0x8(%ebp),%eax
0850bfaa +0x0c8:  mov    0x4(%eax),%edx
0850bfad +0x0cb:  mov    -0xc(%ebp),%eax
0850bfb0 +0x0ce:  imul   $0x3d,%eax,%eax
0850bfb3 +0x0d1:  lea    (%edx,%eax,1),%eax
0850bfb6 +0x0d4:  mov    0x7(%eax),%edx
0850bfb9 +0x0d7:  mov    0xc(%ebp),%eax
0850bfbc +0x0da:  mov    %edx,0x4(%esp)
0850bfc0 +0x0de:  mov    %eax,(%esp)
0850bfc3 +0x0e1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850bfc8 +0x0e6:  mov    0x8(%ebp),%eax
0850bfcb +0x0e9:  mov    0x4(%eax),%edx
0850bfce +0x0ec:  mov    -0xc(%ebp),%eax
0850bfd1 +0x0ef:  imul   $0x3d,%eax,%eax
0850bfd4 +0x0f2:  lea    (%edx,%eax,1),%eax
0850bfd7 +0x0f5:  mov    %eax,(%esp)
0850bfda +0x0f8:  call   084fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>  ; GetIntegratedPvPItemAttr(Inven_Item const&)
0850bfdf +0x0fd:  movzbl %al,%edx
0850bfe2 +0x100:  mov    0xc(%ebp),%eax
0850bfe5 +0x103:  mov    %edx,0x4(%esp)
0850bfe9 +0x107:  mov    %eax,(%esp)
0850bfec +0x10a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850bff1 +0x10f:  mov    0x8(%ebp),%eax
0850bff4 +0x112:  mov    0x4(%eax),%edx
0850bff7 +0x115:  mov    -0xc(%ebp),%eax
0850bffa +0x118:  imul   $0x3d,%eax,%eax
0850bffd +0x11b:  lea    (%edx,%eax,1),%eax
0850c000 +0x11e:  movzwl 0xb(%eax),%eax
0850c004 +0x122:  movzwl %ax,%edx
0850c007 +0x125:  mov    0xc(%ebp),%eax
0850c00a +0x128:  mov    %edx,0x4(%esp)
0850c00e +0x12c:  mov    %eax,(%esp)
0850c011 +0x12f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c016 +0x134:  mov    0x8(%ebp),%eax
0850c019 +0x137:  mov    0x4(%eax),%edx
0850c01c +0x13a:  mov    -0xc(%ebp),%eax
0850c01f +0x13d:  imul   $0x3d,%eax,%eax
0850c022 +0x140:  lea    (%edx,%eax,1),%eax
0850c025 +0x143:  movzbl (%eax),%eax
0850c028 +0x146:  movzbl %al,%edx
0850c02b +0x149:  mov    0xc(%ebp),%eax
0850c02e +0x14c:  mov    %edx,0x4(%esp)
0850c032 +0x150:  mov    %eax,(%esp)
0850c035 +0x153:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c03a +0x158:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0850c03f +0x15d:  mov    %eax,(%esp)
0850c042 +0x160:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
0850c047 +0x165:  test   %al,%al
0850c049 +0x167:  je     0850c060 <+0x17e>
0850c04b +0x169:  mov    0xc(%ebp),%eax
0850c04e +0x16c:  movl   $0x0,0x4(%esp)
0850c056 +0x174:  mov    %eax,(%esp)
0850c059 +0x177:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c05e +0x17c:  jmp    0850c083 <+0x1a1>
0850c060 +0x17e:  mov    0x8(%ebp),%eax
0850c063 +0x181:  mov    0x4(%eax),%edx
0850c066 +0x184:  mov    -0xc(%ebp),%eax
0850c069 +0x187:  imul   $0x3d,%eax,%eax
0850c06c +0x18a:  lea    (%edx,%eax,1),%eax
0850c06f +0x18d:  mov    0xd(%eax),%eax
0850c072 +0x190:  mov    %eax,%edx
0850c074 +0x192:  mov    0xc(%ebp),%eax
0850c077 +0x195:  mov    %edx,0x4(%esp)
0850c07b +0x199:  mov    %eax,(%esp)
0850c07e +0x19c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c083 +0x1a1:  mov    0x8(%ebp),%eax
0850c086 +0x1a4:  mov    0x4(%eax),%edx
0850c089 +0x1a7:  mov    -0xc(%ebp),%eax
0850c08c +0x1aa:  imul   $0x3d,%eax,%eax
0850c08f +0x1ad:  lea    (%edx,%eax,1),%eax
0850c092 +0x1b0:  add    $0x11,%eax
0850c095 +0x1b3:  mov    %eax,(%esp)
0850c098 +0x1b6:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0850c09d +0x1bb:  movzbl %al,%edx
0850c0a0 +0x1be:  mov    0xc(%ebp),%eax
0850c0a3 +0x1c1:  mov    %edx,0x4(%esp)
0850c0a7 +0x1c5:  mov    %eax,(%esp)
0850c0aa +0x1c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c0af +0x1cd:  mov    0x8(%ebp),%eax
0850c0b2 +0x1d0:  mov    0x4(%eax),%edx
0850c0b5 +0x1d3:  mov    -0xc(%ebp),%eax
0850c0b8 +0x1d6:  imul   $0x3d,%eax,%eax
0850c0bb +0x1d9:  lea    (%edx,%eax,1),%eax
0850c0be +0x1dc:  add    $0x11,%eax
0850c0c1 +0x1df:  mov    %eax,(%esp)
0850c0c4 +0x1e2:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0850c0c9 +0x1e7:  movzwl %ax,%edx
0850c0cc +0x1ea:  mov    0xc(%ebp),%eax
0850c0cf +0x1ed:  mov    %edx,0x4(%esp)
0850c0d3 +0x1f1:  mov    %eax,(%esp)
0850c0d6 +0x1f4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c0db +0x1f9:  mov    0x8(%ebp),%eax
0850c0de +0x1fc:  mov    0x4(%eax),%edx
0850c0e1 +0x1ff:  mov    -0xc(%ebp),%eax
0850c0e4 +0x202:  imul   $0x3d,%eax,%eax
0850c0e7 +0x205:  lea    (%edx,%eax,1),%esi
0850c0ea +0x208:  mov    0x8(%ebp),%eax
0850c0ed +0x20b:  mov    (%eax),%ebx
0850c0ef +0x20d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850c0f4 +0x212:  mov    0x20(%eax),%eax
0850c0f7 +0x215:  mov    0xc(%ebp),%edx
0850c0fa +0x218:  mov    %edx,0xc(%esp)
0850c0fe +0x21c:  mov    %esi,0x8(%esp)
0850c102 +0x220:  mov    %ebx,0x4(%esp)
0850c106 +0x224:  mov    %eax,(%esp)
0850c109 +0x227:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
0850c10e +0x22c:  mov    0x8(%ebp),%eax
0850c111 +0x22f:  mov    0x4(%eax),%edx
0850c114 +0x232:  mov    -0xc(%ebp),%eax
0850c117 +0x235:  imul   $0x3d,%eax,%eax
0850c11a +0x238:  add    %eax,%edx
0850c11c +0x23a:  mov    0xc(%ebp),%eax
0850c11f +0x23d:  mov    %edx,0x4(%esp)
0850c123 +0x241:  mov    %eax,(%esp)
0850c126 +0x244:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0850c12b +0x249:  addl   $0x1,-0xc(%ebp)
0850c12f +0x24d:  cmpl   $0x97,-0xc(%ebp)
0850c136 +0x254:  setle  %al
0850c139 +0x257:  test   %al,%al
0850c13b +0x259:  jne    0850bf58 <+0x76>
0850c141 +0x25f:  mov    0xc(%ebp),%eax
0850c144 +0x262:  movl   $0x1,0x4(%esp)
0850c14c +0x26a:  mov    %eax,(%esp)
0850c14f +0x26d:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0850c154 +0x272:  mov    $0x1,%eax
0850c159 +0x277:  add    $0x20,%esp
0850c15c +0x27a:  pop    %ebx
0850c15d +0x27b:  pop    %esi
0850c15e +0x27c:  pop    %ebp
0850c15f +0x27d:  ret
```

## 反编译 C

```c
// CCargo::MakeItemList @ 0x850bee2

/* CCargo::MakeItemList(PacketGuard*) const */

undefined4 __thiscall CCargo::MakeItemList(CCargo *this,PacketGuard *param_1)

{
  CUser *pCVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  GameWorld *this_00;
  int iVar5;
  int local_10;
  
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0xd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,2);
  iVar3 = GetCapacity(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar3);
  iVar3 = GetItemCount(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,iVar3);
  for (local_10 = 0; local_10 < 0x98; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2) != 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,local_10);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 2));
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + local_10 * 0x3d + 7));
      uVar4 = GetIntegratedPvPItemAttr((Inven_Item *)(*(int *)(this + 4) + local_10 * 0x3d));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)param_1,
                 (uint)*(ushort *)(*(int *)(this + 4) + local_10 * 0x3d + 0xb));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)param_1,(uint)*(byte *)(*(int *)(this + 4) + local_10 * 0x3d)
                );
      this_00 = (GameWorld *)G_GameWorld();
      cVar2 = GameWorld::IsEnchantRevisionChannel(this_00);
      if (cVar2 == '\0') {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)param_1,
                   *(int *)(*(int *)(this + 4) + local_10 * 0x3d + 0xd));
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
      }
      uVar4 = stAmplifyOption_t::getAbilityType
                        ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
      uVar4 = stAmplifyOption_t::getAbilityValue
                        ((stAmplifyOption_t *)(*(int *)(this + 4) + local_10 * 0x3d + 0x11));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
      iVar3 = *(int *)(this + 4);
      pCVar1 = *(CUser **)this;
      iVar5 = G_CDataManager();
      WongWork::CItemUpgrade::make3rdChroniclePacket
                (*(CItemUpgrade **)(iVar5 + 0x20),pCVar1,(Inven_Item *)(iVar3 + local_10 * 0x3d),
                 param_1);
      InterfacePacketBuf::put_packet
                ((InterfacePacketBuf *)param_1,(Inven_Item *)(*(int *)(this + 4) + local_10 * 0x3d))
      ;
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)param_1,true);
  return 1;
}
```
