# MakeItemPacket

`_ZNK6CCargo14MakeItemPacketEP11PacketGuardi`

`CCargo::MakeItemPacket(PacketGuard*, int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850c160` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850c160  _ZNK6CCargo14MakeItemPacketEP11PacketGuardi
#           CCargo::MakeItemPacket(PacketGuard*, int) const
# range [0x0850c160, 0x0850c405]
0850c160 +0x000:  push   %ebp
0850c161 +0x001:  mov    %esp,%ebp
0850c163 +0x003:  push   %esi
0850c164 +0x004:  push   %ebx
0850c165 +0x005:  sub    $0x10,%esp
0850c168 +0x008:  mov    0xc(%ebp),%eax
0850c16b +0x00b:  mov    0x10(%ebp),%edx
0850c16e +0x00e:  mov    %edx,0x4(%esp)
0850c172 +0x012:  mov    %eax,(%esp)
0850c175 +0x015:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c17a +0x01a:  mov    0x8(%ebp),%eax
0850c17d +0x01d:  mov    0x4(%eax),%edx
0850c180 +0x020:  mov    0x10(%ebp),%eax
0850c183 +0x023:  imul   $0x3d,%eax,%eax
0850c186 +0x026:  lea    (%edx,%eax,1),%eax
0850c189 +0x029:  mov    0x2(%eax),%eax
0850c18c +0x02c:  test   %eax,%eax
0850c18e +0x02e:  je     0850c340 <+0x1e0>
0850c194 +0x034:  mov    0x8(%ebp),%eax
0850c197 +0x037:  mov    0x4(%eax),%edx
0850c19a +0x03a:  mov    0x10(%ebp),%eax
0850c19d +0x03d:  imul   $0x3d,%eax,%eax
0850c1a0 +0x040:  lea    (%edx,%eax,1),%eax
0850c1a3 +0x043:  mov    0x2(%eax),%eax
0850c1a6 +0x046:  mov    %eax,%edx
0850c1a8 +0x048:  mov    0xc(%ebp),%eax
0850c1ab +0x04b:  mov    %edx,0x4(%esp)
0850c1af +0x04f:  mov    %eax,(%esp)
0850c1b2 +0x052:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c1b7 +0x057:  mov    0x8(%ebp),%eax
0850c1ba +0x05a:  mov    0x4(%eax),%edx
0850c1bd +0x05d:  mov    0x10(%ebp),%eax
0850c1c0 +0x060:  imul   $0x3d,%eax,%eax
0850c1c3 +0x063:  lea    (%edx,%eax,1),%eax
0850c1c6 +0x066:  mov    0x7(%eax),%edx
0850c1c9 +0x069:  mov    0xc(%ebp),%eax
0850c1cc +0x06c:  mov    %edx,0x4(%esp)
0850c1d0 +0x070:  mov    %eax,(%esp)
0850c1d3 +0x073:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c1d8 +0x078:  mov    0x8(%ebp),%eax
0850c1db +0x07b:  mov    0x4(%eax),%edx
0850c1de +0x07e:  mov    0x10(%ebp),%eax
0850c1e1 +0x081:  imul   $0x3d,%eax,%eax
0850c1e4 +0x084:  lea    (%edx,%eax,1),%eax
0850c1e7 +0x087:  mov    %eax,(%esp)
0850c1ea +0x08a:  call   084fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>  ; GetIntegratedPvPItemAttr(Inven_Item const&)
0850c1ef +0x08f:  movzbl %al,%edx
0850c1f2 +0x092:  mov    0xc(%ebp),%eax
0850c1f5 +0x095:  mov    %edx,0x4(%esp)
0850c1f9 +0x099:  mov    %eax,(%esp)
0850c1fc +0x09c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c201 +0x0a1:  mov    0x8(%ebp),%eax
0850c204 +0x0a4:  mov    0x4(%eax),%edx
0850c207 +0x0a7:  mov    0x10(%ebp),%eax
0850c20a +0x0aa:  imul   $0x3d,%eax,%eax
0850c20d +0x0ad:  lea    (%edx,%eax,1),%eax
0850c210 +0x0b0:  movzwl 0xb(%eax),%eax
0850c214 +0x0b4:  movzwl %ax,%edx
0850c217 +0x0b7:  mov    0xc(%ebp),%eax
0850c21a +0x0ba:  mov    %edx,0x4(%esp)
0850c21e +0x0be:  mov    %eax,(%esp)
0850c221 +0x0c1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c226 +0x0c6:  mov    0x8(%ebp),%eax
0850c229 +0x0c9:  mov    0x4(%eax),%edx
0850c22c +0x0cc:  mov    0x10(%ebp),%eax
0850c22f +0x0cf:  imul   $0x3d,%eax,%eax
0850c232 +0x0d2:  lea    (%edx,%eax,1),%eax
0850c235 +0x0d5:  movzbl (%eax),%eax
0850c238 +0x0d8:  movzbl %al,%edx
0850c23b +0x0db:  mov    0xc(%ebp),%eax
0850c23e +0x0de:  mov    %edx,0x4(%esp)
0850c242 +0x0e2:  mov    %eax,(%esp)
0850c245 +0x0e5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c24a +0x0ea:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0850c24f +0x0ef:  mov    %eax,(%esp)
0850c252 +0x0f2:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
0850c257 +0x0f7:  test   %al,%al
0850c259 +0x0f9:  je     0850c270 <+0x110>
0850c25b +0x0fb:  mov    0xc(%ebp),%eax
0850c25e +0x0fe:  movl   $0x0,0x4(%esp)
0850c266 +0x106:  mov    %eax,(%esp)
0850c269 +0x109:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c26e +0x10e:  jmp    0850c293 <+0x133>
0850c270 +0x110:  mov    0x8(%ebp),%eax
0850c273 +0x113:  mov    0x4(%eax),%edx
0850c276 +0x116:  mov    0x10(%ebp),%eax
0850c279 +0x119:  imul   $0x3d,%eax,%eax
0850c27c +0x11c:  lea    (%edx,%eax,1),%eax
0850c27f +0x11f:  mov    0xd(%eax),%eax
0850c282 +0x122:  mov    %eax,%edx
0850c284 +0x124:  mov    0xc(%ebp),%eax
0850c287 +0x127:  mov    %edx,0x4(%esp)
0850c28b +0x12b:  mov    %eax,(%esp)
0850c28e +0x12e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c293 +0x133:  mov    0x8(%ebp),%eax
0850c296 +0x136:  mov    0x4(%eax),%edx
0850c299 +0x139:  mov    0x10(%ebp),%eax
0850c29c +0x13c:  imul   $0x3d,%eax,%eax
0850c29f +0x13f:  lea    (%edx,%eax,1),%eax
0850c2a2 +0x142:  add    $0x11,%eax
0850c2a5 +0x145:  mov    %eax,(%esp)
0850c2a8 +0x148:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0850c2ad +0x14d:  movzbl %al,%edx
0850c2b0 +0x150:  mov    0xc(%ebp),%eax
0850c2b3 +0x153:  mov    %edx,0x4(%esp)
0850c2b7 +0x157:  mov    %eax,(%esp)
0850c2ba +0x15a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c2bf +0x15f:  mov    0x8(%ebp),%eax
0850c2c2 +0x162:  mov    0x4(%eax),%edx
0850c2c5 +0x165:  mov    0x10(%ebp),%eax
0850c2c8 +0x168:  imul   $0x3d,%eax,%eax
0850c2cb +0x16b:  lea    (%edx,%eax,1),%eax
0850c2ce +0x16e:  add    $0x11,%eax
0850c2d1 +0x171:  mov    %eax,(%esp)
0850c2d4 +0x174:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0850c2d9 +0x179:  movzwl %ax,%edx
0850c2dc +0x17c:  mov    0xc(%ebp),%eax
0850c2df +0x17f:  mov    %edx,0x4(%esp)
0850c2e3 +0x183:  mov    %eax,(%esp)
0850c2e6 +0x186:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c2eb +0x18b:  mov    0x8(%ebp),%eax
0850c2ee +0x18e:  mov    0x4(%eax),%edx
0850c2f1 +0x191:  mov    0x10(%ebp),%eax
0850c2f4 +0x194:  imul   $0x3d,%eax,%eax
0850c2f7 +0x197:  lea    (%edx,%eax,1),%esi
0850c2fa +0x19a:  mov    0x8(%ebp),%eax
0850c2fd +0x19d:  mov    (%eax),%ebx
0850c2ff +0x19f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0850c304 +0x1a4:  mov    0x20(%eax),%eax
0850c307 +0x1a7:  mov    0xc(%ebp),%edx
0850c30a +0x1aa:  mov    %edx,0xc(%esp)
0850c30e +0x1ae:  mov    %esi,0x8(%esp)
0850c312 +0x1b2:  mov    %ebx,0x4(%esp)
0850c316 +0x1b6:  mov    %eax,(%esp)
0850c319 +0x1b9:  call   0854a9aa <_ZN8WongWork12CItemUpgrade22make3rdChroniclePacketEP5CUserRK10Inven_ItemP11PacketGuard>  ; WongWork::CItemUpgrade::make3rdChroniclePacket(CUser*, Inven_Item const&, PacketGuard*)
0850c31e +0x1be:  mov    0x8(%ebp),%eax
0850c321 +0x1c1:  mov    0x4(%eax),%edx
0850c324 +0x1c4:  mov    0x10(%ebp),%eax
0850c327 +0x1c7:  imul   $0x3d,%eax,%eax
0850c32a +0x1ca:  add    %eax,%edx
0850c32c +0x1cc:  mov    0xc(%ebp),%eax
0850c32f +0x1cf:  mov    %edx,0x4(%esp)
0850c333 +0x1d3:  mov    %eax,(%esp)
0850c336 +0x1d6:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0850c33b +0x1db:  jmp    0850c3fe <+0x29e>
0850c340 +0x1e0:  mov    0xc(%ebp),%eax
0850c343 +0x1e3:  movl   $0xffffffff,0x4(%esp)
0850c34b +0x1eb:  mov    %eax,(%esp)
0850c34e +0x1ee:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c353 +0x1f3:  mov    0xc(%ebp),%eax
0850c356 +0x1f6:  movl   $0x0,0x4(%esp)
0850c35e +0x1fe:  mov    %eax,(%esp)
0850c361 +0x201:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c366 +0x206:  mov    0xc(%ebp),%eax
0850c369 +0x209:  movl   $0x0,0x4(%esp)
0850c371 +0x211:  mov    %eax,(%esp)
0850c374 +0x214:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c379 +0x219:  mov    0xc(%ebp),%eax
0850c37c +0x21c:  movl   $0x0,0x4(%esp)
0850c384 +0x224:  mov    %eax,(%esp)
0850c387 +0x227:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c38c +0x22c:  mov    0xc(%ebp),%eax
0850c38f +0x22f:  movl   $0x0,0x4(%esp)
0850c397 +0x237:  mov    %eax,(%esp)
0850c39a +0x23a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c39f +0x23f:  mov    0xc(%ebp),%eax
0850c3a2 +0x242:  movl   $0x0,0x4(%esp)
0850c3aa +0x24a:  mov    %eax,(%esp)
0850c3ad +0x24d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0850c3b2 +0x252:  mov    0xc(%ebp),%eax
0850c3b5 +0x255:  movl   $0x0,0x4(%esp)
0850c3bd +0x25d:  mov    %eax,(%esp)
0850c3c0 +0x260:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c3c5 +0x265:  mov    0xc(%ebp),%eax
0850c3c8 +0x268:  movl   $0x0,0x4(%esp)
0850c3d0 +0x270:  mov    %eax,(%esp)
0850c3d3 +0x273:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0850c3d8 +0x278:  mov    0xc(%ebp),%eax
0850c3db +0x27b:  movl   $0x0,0x4(%esp)
0850c3e3 +0x283:  mov    %eax,(%esp)
0850c3e6 +0x286:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0850c3eb +0x28b:  mov    0xc(%ebp),%eax
0850c3ee +0x28e:  movl   $&g_emptySlot,0x4(%esp)
0850c3f6 +0x296:  mov    %eax,(%esp)
0850c3f9 +0x299:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0850c3fe +0x29e:  add    $0x10,%esp
0850c401 +0x2a1:  pop    %ebx
0850c402 +0x2a2:  pop    %esi
0850c403 +0x2a3:  pop    %ebp
0850c404 +0x2a4:  ret
0850c405 +0x2a5:  nop
```

## 反编译 C

```c
// CCargo::MakeItemPacket @ 0x850c160

/* CCargo::MakeItemPacket(PacketGuard*, int) const */

void __thiscall CCargo::MakeItemPacket(CCargo *this,PacketGuard *param_1,int param_2)

{
  int iVar1;
  CUser *pCVar2;
  char cVar3;
  uint uVar4;
  GameWorld *this_00;
  int iVar5;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_2);
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,-1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_1,(Inven_Item *)g_emptySlot);
  }
  else {
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2));
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 7));
    uVar4 = GetIntegratedPvPItemAttr((Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)param_1,
               (uint)*(ushort *)(*(int *)(this + 4) + param_2 * 0x3d + 0xb));
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)param_1,(uint)*(byte *)(*(int *)(this + 4) + param_2 * 0x3d));
    this_00 = (GameWorld *)G_GameWorld();
    cVar3 = GameWorld::IsEnchantRevisionChannel(this_00);
    if (cVar3 == '\0') {
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 0xd));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    }
    uVar4 = stAmplifyOption_t::getAbilityType
                      ((stAmplifyOption_t *)(*(int *)(this + 4) + param_2 * 0x3d + 0x11));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar4 & 0xff);
    uVar4 = stAmplifyOption_t::getAbilityValue
                      ((stAmplifyOption_t *)(*(int *)(this + 4) + param_2 * 0x3d + 0x11));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar4 & 0xffff);
    iVar1 = *(int *)(this + 4);
    pCVar2 = *(CUser **)this;
    iVar5 = G_CDataManager();
    WongWork::CItemUpgrade::make3rdChroniclePacket
              (*(CItemUpgrade **)(iVar5 + 0x20),pCVar2,(Inven_Item *)(iVar1 + param_2 * 0x3d),
               param_1);
    InterfacePacketBuf::put_packet
              ((InterfacePacketBuf *)param_1,(Inven_Item *)(*(int *)(this + 4) + param_2 * 0x3d));
  }
  return;
}
```
