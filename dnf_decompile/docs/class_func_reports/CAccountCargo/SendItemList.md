# SendItemList

`_ZN13CAccountCargo12SendItemListEv`

`CAccountCargo::SendItemList()`

| 类 | 地址 |
|---|---|
| `CAccountCargo` | `0x0828a88a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0828a88a  _ZN13CAccountCargo12SendItemListEv
#           CAccountCargo::SendItemList()
# range [0x0828a88a, 0x0828ab1b]
0828a88a +0x000:  push   %ebp
0828a88b +0x001:  mov    %esp,%ebp
0828a88d +0x003:  push   %esi
0828a88e +0x004:  push   %ebx
0828a88f +0x005:  sub    $0x20,%esp
0828a892 +0x008:  lea    -0x18(%ebp),%eax
0828a895 +0x00b:  mov    %eax,(%esp)
0828a898 +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0828a89d +0x013:  movl   $0xd,0x8(%esp)
0828a8a5 +0x01b:  movl   $0x0,0x4(%esp)
0828a8ad +0x023:  lea    -0x18(%ebp),%eax
0828a8b0 +0x026:  mov    %eax,(%esp)
0828a8b3 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0828a8b8 +0x02e:  movl   $0xc,0x4(%esp)
0828a8c0 +0x036:  lea    -0x18(%ebp),%eax
0828a8c3 +0x039:  mov    %eax,(%esp)
0828a8c6 +0x03c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828a8cb +0x041:  mov    0x8(%ebp),%eax
0828a8ce +0x044:  mov    0xd60(%eax),%eax
0828a8d4 +0x04a:  mov    %eax,0x4(%esp)
0828a8d8 +0x04e:  lea    -0x18(%ebp),%eax
0828a8db +0x051:  mov    %eax,(%esp)
0828a8de +0x054:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828a8e3 +0x059:  mov    0x8(%ebp),%eax
0828a8e6 +0x05c:  mov    0xd5c(%eax),%eax
0828a8ec +0x062:  mov    %eax,0x4(%esp)
0828a8f0 +0x066:  lea    -0x18(%ebp),%eax
0828a8f3 +0x069:  mov    %eax,(%esp)
0828a8f6 +0x06c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828a8fb +0x071:  mov    0x8(%ebp),%eax
0828a8fe +0x074:  mov    %eax,(%esp)
0828a901 +0x077:  call   0828a794 <_ZN13CAccountCargo12GetItemCountEv>  ; CAccountCargo::GetItemCount()
0828a906 +0x07c:  mov    %eax,0x4(%esp)
0828a90a +0x080:  lea    -0x18(%ebp),%eax
0828a90d +0x083:  mov    %eax,(%esp)
0828a910 +0x086:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828a915 +0x08b:  movl   $0x0,-0xc(%ebp)
0828a91c +0x092:  jmp    0828aaac <+0x222>
0828a921 +0x097:  mov    -0xc(%ebp),%edx
0828a924 +0x09a:  mov    0x8(%ebp),%eax
0828a927 +0x09d:  imul   $0x3d,%edx,%edx
0828a92a +0x0a0:  mov    0x6(%edx,%eax,1),%eax
0828a92e +0x0a4:  test   %eax,%eax
0828a930 +0x0a6:  je     0828aaa8 <+0x21e>
0828a936 +0x0ac:  mov    -0xc(%ebp),%eax
0828a939 +0x0af:  mov    %eax,0x4(%esp)
0828a93d +0x0b3:  lea    -0x18(%ebp),%eax
0828a940 +0x0b6:  mov    %eax,(%esp)
0828a943 +0x0b9:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828a948 +0x0be:  mov    -0xc(%ebp),%edx
0828a94b +0x0c1:  mov    0x8(%ebp),%eax
0828a94e +0x0c4:  imul   $0x3d,%edx,%edx
0828a951 +0x0c7:  mov    0x6(%edx,%eax,1),%eax
0828a955 +0x0cb:  mov    %eax,0x4(%esp)
0828a959 +0x0cf:  lea    -0x18(%ebp),%eax
0828a95c +0x0d2:  mov    %eax,(%esp)
0828a95f +0x0d5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828a964 +0x0da:  mov    -0xc(%ebp),%edx
0828a967 +0x0dd:  mov    0x8(%ebp),%eax
0828a96a +0x0e0:  imul   $0x3d,%edx,%edx
0828a96d +0x0e3:  mov    0xb(%edx,%eax,1),%eax
0828a971 +0x0e7:  mov    %eax,0x4(%esp)
0828a975 +0x0eb:  lea    -0x18(%ebp),%eax
0828a978 +0x0ee:  mov    %eax,(%esp)
0828a97b +0x0f1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828a980 +0x0f6:  mov    -0xc(%ebp),%eax
0828a983 +0x0f9:  imul   $0x3d,%eax,%eax
0828a986 +0x0fc:  add    0x8(%ebp),%eax
0828a989 +0x0ff:  add    $0x4,%eax
0828a98c +0x102:  mov    %eax,(%esp)
0828a98f +0x105:  call   084fc5ff <_Z24GetIntegratedPvPItemAttrRK10Inven_Item>  ; GetIntegratedPvPItemAttr(Inven_Item const&)
0828a994 +0x10a:  movzbl %al,%eax
0828a997 +0x10d:  mov    %eax,0x4(%esp)
0828a99b +0x111:  lea    -0x18(%ebp),%eax
0828a99e +0x114:  mov    %eax,(%esp)
0828a9a1 +0x117:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828a9a6 +0x11c:  mov    -0xc(%ebp),%edx
0828a9a9 +0x11f:  mov    0x8(%ebp),%eax
0828a9ac +0x122:  imul   $0x3d,%edx,%edx
0828a9af +0x125:  movzwl 0xf(%edx,%eax,1),%eax
0828a9b4 +0x12a:  movzwl %ax,%eax
0828a9b7 +0x12d:  mov    %eax,0x4(%esp)
0828a9bb +0x131:  lea    -0x18(%ebp),%eax
0828a9be +0x134:  mov    %eax,(%esp)
0828a9c1 +0x137:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828a9c6 +0x13c:  mov    -0xc(%ebp),%edx
0828a9c9 +0x13f:  mov    0x8(%ebp),%eax
0828a9cc +0x142:  imul   $0x3d,%edx,%edx
0828a9cf +0x145:  movzbl 0x4(%edx,%eax,1),%eax
0828a9d4 +0x14a:  movzbl %al,%eax
0828a9d7 +0x14d:  mov    %eax,0x4(%esp)
0828a9db +0x151:  lea    -0x18(%ebp),%eax
0828a9de +0x154:  mov    %eax,(%esp)
0828a9e1 +0x157:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828a9e6 +0x15c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0828a9eb +0x161:  mov    %eax,(%esp)
0828a9ee +0x164:  call   082343fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9aa6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9aa6
0828a9f3 +0x169:  test   %al,%al
0828a9f5 +0x16b:  je     0828aa0c <+0x182>
0828a9f7 +0x16d:  movl   $0x0,0x4(%esp)
0828a9ff +0x175:  lea    -0x18(%ebp),%eax
0828aa02 +0x178:  mov    %eax,(%esp)
0828aa05 +0x17b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828aa0a +0x180:  jmp    0828aa28 <+0x19e>
0828aa0c +0x182:  mov    -0xc(%ebp),%edx
0828aa0f +0x185:  mov    0x8(%ebp),%eax
0828aa12 +0x188:  imul   $0x3d,%edx,%edx
0828aa15 +0x18b:  mov    0x11(%edx,%eax,1),%eax
0828aa19 +0x18f:  mov    %eax,0x4(%esp)
0828aa1d +0x193:  lea    -0x18(%ebp),%eax
0828aa20 +0x196:  mov    %eax,(%esp)
0828aa23 +0x199:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0828aa28 +0x19e:  mov    -0xc(%ebp),%eax
0828aa2b +0x1a1:  imul   $0x3d,%eax,%eax
0828aa2e +0x1a4:  add    $0x10,%eax
0828aa31 +0x1a7:  add    0x8(%ebp),%eax
0828aa34 +0x1aa:  add    $0x5,%eax
0828aa37 +0x1ad:  mov    %eax,(%esp)
0828aa3a +0x1b0:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0828aa3f +0x1b5:  movzbl %al,%eax
0828aa42 +0x1b8:  mov    %eax,0x4(%esp)
0828aa46 +0x1bc:  lea    -0x18(%ebp),%eax
0828aa49 +0x1bf:  mov    %eax,(%esp)
0828aa4c +0x1c2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828aa51 +0x1c7:  mov    -0xc(%ebp),%eax
0828aa54 +0x1ca:  imul   $0x3d,%eax,%eax
0828aa57 +0x1cd:  add    $0x10,%eax
0828aa5a +0x1d0:  add    0x8(%ebp),%eax
0828aa5d +0x1d3:  add    $0x5,%eax
0828aa60 +0x1d6:  mov    %eax,(%esp)
0828aa63 +0x1d9:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0828aa68 +0x1de:  movzwl %ax,%eax
0828aa6b +0x1e1:  mov    %eax,0x4(%esp)
0828aa6f +0x1e5:  lea    -0x18(%ebp),%eax
0828aa72 +0x1e8:  mov    %eax,(%esp)
0828aa75 +0x1eb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0828aa7a +0x1f0:  movl   $0x0,0x4(%esp)
0828aa82 +0x1f8:  lea    -0x18(%ebp),%eax
0828aa85 +0x1fb:  mov    %eax,(%esp)
0828aa88 +0x1fe:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0828aa8d +0x203:  mov    -0xc(%ebp),%eax
0828aa90 +0x206:  imul   $0x3d,%eax,%eax
0828aa93 +0x209:  add    0x8(%ebp),%eax
0828aa96 +0x20c:  add    $0x4,%eax
0828aa99 +0x20f:  mov    %eax,0x4(%esp)
0828aa9d +0x213:  lea    -0x18(%ebp),%eax
0828aaa0 +0x216:  mov    %eax,(%esp)
0828aaa3 +0x219:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0828aaa8 +0x21e:  addl   $0x1,-0xc(%ebp)
0828aaac +0x222:  mov    0x8(%ebp),%eax
0828aaaf +0x225:  mov    0xd60(%eax),%eax
0828aab5 +0x22b:  cmp    -0xc(%ebp),%eax
0828aab8 +0x22e:  setg   %al
0828aabb +0x231:  test   %al,%al
0828aabd +0x233:  jne    0828a921 <+0x97>
0828aac3 +0x239:  movl   $0x1,0x4(%esp)
0828aacb +0x241:  lea    -0x18(%ebp),%eax
0828aace +0x244:  mov    %eax,(%esp)
0828aad1 +0x247:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0828aad6 +0x24c:  mov    0x8(%ebp),%eax
0828aad9 +0x24f:  mov    (%eax),%eax
0828aadb +0x251:  lea    -0x18(%ebp),%edx
0828aade +0x254:  mov    %edx,0x4(%esp)
0828aae2 +0x258:  mov    %eax,(%esp)
0828aae5 +0x25b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0828aaea +0x260:  mov    %eax,%ebx
0828aaec +0x262:  lea    -0x18(%ebp),%eax
0828aaef +0x265:  mov    %eax,(%esp)
0828aaf2 +0x268:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828aaf7 +0x26d:  mov    %ebx,%eax
0828aaf9 +0x26f:  add    $0x20,%esp
0828aafc +0x272:  pop    %ebx
0828aafd +0x273:  pop    %esi
0828aafe +0x274:  pop    %ebp
0828aaff +0x275:  ret
0828ab00 +0x276:  mov    %edx,%ebx
0828ab02 +0x278:  mov    %eax,%esi
0828ab04 +0x27a:  lea    -0x18(%ebp),%eax
0828ab07 +0x27d:  mov    %eax,(%esp)
0828ab0a +0x280:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0828ab0f +0x285:  mov    %esi,%eax
0828ab11 +0x287:  mov    %ebx,%edx
0828ab13 +0x289:  mov    %eax,(%esp)
0828ab16 +0x28c:  call   08ae3750 <_Unwind_Resume>
0828ab1b +0x291:  nop
```

## 反编译 C

```c
// CAccountCargo::SendItemList @ 0x828a88a

/* CAccountCargo::SendItemList() */

undefined4 __thiscall CAccountCargo::SendItemList(CAccountCargo *this)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  GameWorld *this_00;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0828a8b3 to 0828aae9 has its CatchHandler @ 0828ab00 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xd);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0xc);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,*(int *)(this + 0xd60));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0xd5c));
  iVar2 = GetItemCount(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar2);
  for (local_10 = 0; local_10 < *(int *)(this + 0xd60); local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 0x3d + 6) != 0) {
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,local_10);
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_1c,*(int *)(this + local_10 * 0x3d + 6));
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_1c,*(int *)(this + local_10 * 0x3d + 0xb));
      uVar3 = GetIntegratedPvPItemAttr((Inven_Item *)(this + local_10 * 0x3d + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar3 & 0xff);
      InterfacePacketBuf::put_short
                ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + local_10 * 0x3d + 0xf));
      InterfacePacketBuf::put_byte
                ((InterfacePacketBuf *)local_1c,(uint)(byte)this[local_10 * 0x3d + 4]);
      this_00 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
      if (cVar1 == '\0') {
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_1c,*(int *)(this + local_10 * 0x3d + 0x11));
      }
      else {
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      }
      uVar3 = stAmplifyOption_t::getAbilityType
                        ((stAmplifyOption_t *)(this + local_10 * 0x3d + 0x15));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar3 & 0xff);
      uVar3 = stAmplifyOption_t::getAbilityValue
                        ((stAmplifyOption_t *)(this + local_10 * 0x3d + 0x15));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_packet
                ((InterfacePacketBuf *)local_1c,(Inven_Item *)(this + local_10 * 0x3d + 4));
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  uVar4 = CUser::Send(*(CUser **)this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return uVar4;
}
```
