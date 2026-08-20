# MakeItemPacket

`_ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi`

`CAccountCargo::MakeItemPacket(PacketGuard*, int) const`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828ab1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828ab1c  _ZNK13CAccountCargo14MakeItemPacketEP11PacketGuardi
#           CAccountCargo::MakeItemPacket(PacketGuard*, int) const
# range [0x0828ab1c, 0x0828ad71]
0828ab1c +0x000:  push   %ebp
0828ab1d +0x001:  mov    %esp,%ebp
0828ab1f +0x003:  sub    $0x18,%esp
0828ab22 +0x006:  mov    0xc(%ebp),%eax
0828ab25 +0x009:  mov    0x10(%ebp),%edx
0828ab28 +0x00c:  mov    %edx,0x4(%esp)
0828ab2c +0x010:  mov    %eax,(%esp)
0828ab2f +0x013:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828ab34 +0x018:  mov    0x10(%ebp),%edx
0828ab37 +0x01b:  mov    0x8(%ebp),%eax
0828ab3a +0x01e:  imul   $0x3d,%edx,%edx
0828ab3d +0x021:  mov    0x6(%edx,%eax,1),%eax
0828ab41 +0x025:  test   %eax,%eax
0828ab43 +0x027:  je     0828acb2 <+0x196>
0828ab49 +0x02d:  mov    0x10(%ebp),%edx
0828ab4c +0x030:  mov    0x8(%ebp),%eax
0828ab4f +0x033:  imul   $0x3d,%edx,%edx
0828ab52 +0x036:  mov    0x6(%edx,%eax,1),%eax
0828ab56 +0x03a:  mov    %eax,%edx
0828ab58 +0x03c:  mov    0xc(%ebp),%eax
0828ab5b +0x03f:  mov    %edx,0x4(%esp)
0828ab5f +0x043:  mov    %eax,(%esp)
0828ab62 +0x046:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828ab67 +0x04b:  mov    0x10(%ebp),%edx
0828ab6a +0x04e:  mov    0x8(%ebp),%eax
0828ab6d +0x051:  imul   $0x3d,%edx,%edx
0828ab70 +0x054:  mov    0xb(%edx,%eax,1),%edx
0828ab74 +0x058:  mov    0xc(%ebp),%eax
0828ab77 +0x05b:  mov    %edx,0x4(%esp)
0828ab7b +0x05f:  mov    %eax,(%esp)
0828ab7e +0x062:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828ab83 +0x067:  mov    0x10(%ebp),%eax
0828ab86 +0x06a:  imul   $0x3d,%eax,%eax
0828ab89 +0x06d:  add    0x8(%ebp),%eax
0828ab8c +0x070:  add    $0x4,%eax
0828ab8f +0x073:  mov    %eax,(%esp)
0828ab92 +0x076:  call   084fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>  ; GetIntegratedPvPItemAttr(Inven_Item const&)
0828ab97 +0x07b:  movzbl %al,%edx
0828ab9a +0x07e:  mov    0xc(%ebp),%eax
0828ab9d +0x081:  mov    %edx,0x4(%esp)
0828aba1 +0x085:  mov    %eax,(%esp)
0828aba4 +0x088:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828aba9 +0x08d:  mov    0x10(%ebp),%edx
0828abac +0x090:  mov    0x8(%ebp),%eax
0828abaf +0x093:  imul   $0x3d,%edx,%edx
0828abb2 +0x096:  movzwl 0xf(%edx,%eax,1),%eax
0828abb7 +0x09b:  movzwl %ax,%edx
0828abba +0x09e:  mov    0xc(%ebp),%eax
0828abbd +0x0a1:  mov    %edx,0x4(%esp)
0828abc1 +0x0a5:  mov    %eax,(%esp)
0828abc4 +0x0a8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828abc9 +0x0ad:  mov    0x10(%ebp),%edx
0828abcc +0x0b0:  mov    0x8(%ebp),%eax
0828abcf +0x0b3:  imul   $0x3d,%edx,%edx
0828abd2 +0x0b6:  movzbl 0x4(%edx,%eax,1),%eax
0828abd7 +0x0bb:  movzbl %al,%edx
0828abda +0x0be:  mov    0xc(%ebp),%eax
0828abdd +0x0c1:  mov    %edx,0x4(%esp)
0828abe1 +0x0c5:  mov    %eax,(%esp)
0828abe4 +0x0c8:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828abe9 +0x0cd:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0828abee +0x0d2:  mov    %eax,(%esp)
0828abf1 +0x0d5:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
0828abf6 +0x0da:  test   %al,%al
0828abf8 +0x0dc:  je     0828ac0f <+0xf3>
0828abfa +0x0de:  mov    0xc(%ebp),%eax
0828abfd +0x0e1:  movl   $0x0,0x4(%esp)
0828ac05 +0x0e9:  mov    %eax,(%esp)
0828ac08 +0x0ec:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828ac0d +0x0f1:  jmp    0828ac2d <+0x111>
0828ac0f +0x0f3:  mov    0x10(%ebp),%edx
0828ac12 +0x0f6:  mov    0x8(%ebp),%eax
0828ac15 +0x0f9:  imul   $0x3d,%edx,%edx
0828ac18 +0x0fc:  mov    0x11(%edx,%eax,1),%eax
0828ac1c +0x100:  mov    %eax,%edx
0828ac1e +0x102:  mov    0xc(%ebp),%eax
0828ac21 +0x105:  mov    %edx,0x4(%esp)
0828ac25 +0x109:  mov    %eax,(%esp)
0828ac28 +0x10c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828ac2d +0x111:  mov    0x10(%ebp),%eax
0828ac30 +0x114:  imul   $0x3d,%eax,%eax
0828ac33 +0x117:  add    $0x10,%eax
0828ac36 +0x11a:  add    0x8(%ebp),%eax
0828ac39 +0x11d:  add    $0x5,%eax
0828ac3c +0x120:  mov    %eax,(%esp)
0828ac3f +0x123:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0828ac44 +0x128:  movzbl %al,%edx
0828ac47 +0x12b:  mov    0xc(%ebp),%eax
0828ac4a +0x12e:  mov    %edx,0x4(%esp)
0828ac4e +0x132:  mov    %eax,(%esp)
0828ac51 +0x135:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828ac56 +0x13a:  mov    0x10(%ebp),%eax
0828ac59 +0x13d:  imul   $0x3d,%eax,%eax
0828ac5c +0x140:  add    $0x10,%eax
0828ac5f +0x143:  add    0x8(%ebp),%eax
0828ac62 +0x146:  add    $0x5,%eax
0828ac65 +0x149:  mov    %eax,(%esp)
0828ac68 +0x14c:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0828ac6d +0x151:  movzwl %ax,%edx
0828ac70 +0x154:  mov    0xc(%ebp),%eax
0828ac73 +0x157:  mov    %edx,0x4(%esp)
0828ac77 +0x15b:  mov    %eax,(%esp)
0828ac7a +0x15e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828ac7f +0x163:  mov    0xc(%ebp),%eax
0828ac82 +0x166:  movl   $0x0,0x4(%esp)
0828ac8a +0x16e:  mov    %eax,(%esp)
0828ac8d +0x171:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828ac92 +0x176:  mov    0x10(%ebp),%eax
0828ac95 +0x179:  imul   $0x3d,%eax,%eax
0828ac98 +0x17c:  add    0x8(%ebp),%eax
0828ac9b +0x17f:  lea    0x4(%eax),%edx
0828ac9e +0x182:  mov    0xc(%ebp),%eax
0828aca1 +0x185:  mov    %edx,0x4(%esp)
0828aca5 +0x189:  mov    %eax,(%esp)
0828aca8 +0x18c:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0828acad +0x191:  jmp    0828ad70 <+0x254>
0828acb2 +0x196:  mov    0xc(%ebp),%eax
0828acb5 +0x199:  movl   $0xffffffff,0x4(%esp)
0828acbd +0x1a1:  mov    %eax,(%esp)
0828acc0 +0x1a4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828acc5 +0x1a9:  mov    0xc(%ebp),%eax
0828acc8 +0x1ac:  movl   $0x0,0x4(%esp)
0828acd0 +0x1b4:  mov    %eax,(%esp)
0828acd3 +0x1b7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828acd8 +0x1bc:  mov    0xc(%ebp),%eax
0828acdb +0x1bf:  movl   $0x0,0x4(%esp)
0828ace3 +0x1c7:  mov    %eax,(%esp)
0828ace6 +0x1ca:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828aceb +0x1cf:  mov    0xc(%ebp),%eax
0828acee +0x1d2:  movl   $0x0,0x4(%esp)
0828acf6 +0x1da:  mov    %eax,(%esp)
0828acf9 +0x1dd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828acfe +0x1e2:  mov    0xc(%ebp),%eax
0828ad01 +0x1e5:  movl   $0x0,0x4(%esp)
0828ad09 +0x1ed:  mov    %eax,(%esp)
0828ad0c +0x1f0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828ad11 +0x1f5:  mov    0xc(%ebp),%eax
0828ad14 +0x1f8:  movl   $0x0,0x4(%esp)
0828ad1c +0x200:  mov    %eax,(%esp)
0828ad1f +0x203:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828ad24 +0x208:  mov    0xc(%ebp),%eax
0828ad27 +0x20b:  movl   $0x0,0x4(%esp)
0828ad2f +0x213:  mov    %eax,(%esp)
0828ad32 +0x216:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828ad37 +0x21b:  mov    0xc(%ebp),%eax
0828ad3a +0x21e:  movl   $0x0,0x4(%esp)
0828ad42 +0x226:  mov    %eax,(%esp)
0828ad45 +0x229:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828ad4a +0x22e:  mov    0xc(%ebp),%eax
0828ad4d +0x231:  movl   $0x0,0x4(%esp)
0828ad55 +0x239:  mov    %eax,(%esp)
0828ad58 +0x23c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828ad5d +0x241:  mov    0xc(%ebp),%eax
0828ad60 +0x244:  movl   $&g_emptySlot,0x4(%esp)
0828ad68 +0x24c:  mov    %eax,(%esp)
0828ad6b +0x24f:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0828ad70 +0x254:  leave
0828ad71 +0x255:  ret
```

## 反编译 C

```c
// CAccountCargo::MakeItemPacket @ 0x828ab1c

/* CAccountCargo::MakeItemPacket(PacketGuard*, int) const */

void __thiscall CAccountCargo::MakeItemPacket(CAccountCargo *this,PacketGuard *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  GameWorld *this_00;
  
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,param_2);
  if (*(int *)(this + param_2 * 0x3d + 6) == 0) {
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
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + param_2 * 0x3d + 6));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + param_2 * 0x3d + 0xb))
    ;
    uVar2 = GetIntegratedPvPItemAttr((Inven_Item *)(this + param_2 * 0x3d + 4));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + param_2 * 0x3d + 0xf));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)this[param_2 * 0x3d + 4])
    ;
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
    if (cVar1 == '\0') {
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)param_1,*(int *)(this + param_2 * 0x3d + 0x11));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    }
    uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + param_2 * 0x3d + 0x15));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar2 & 0xff);
    uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + param_2 * 0x3d + 0x15));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar2 & 0xffff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    InterfacePacketBuf::put_packet
              ((InterfacePacketBuf *)param_1,(Inven_Item *)(this + param_2 * 0x3d + 4));
  }
  return;
}
```
