# UseAncientDungeonItems

`_ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi`

`CParty::UseAncientDungeonItems(CDungeon const*, Inven_Item*, int*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859eac2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859eac2  _ZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPi
#           CParty::UseAncientDungeonItems(CDungeon const*, Inven_Item*, int*)
# range [0x0859eac2, 0x0859ee65]
0859eac2 +0x000:  push   %ebp
0859eac3 +0x001:  mov    %esp,%ebp
0859eac5 +0x003:  push   %edi
0859eac6 +0x004:  push   %esi
0859eac7 +0x005:  push   %ebx
0859eac8 +0x006:  sub    $0x5c,%esp
0859eacb +0x009:  mov    0x8(%ebp),%eax
0859eace +0x00c:  mov    0xcd8(%eax),%eax
0859ead4 +0x012:  cmp    $0x1,%eax
0859ead7 +0x015:  jne    0859eae3 <+0x21>
0859ead9 +0x017:  mov    $0x1,%eax
0859eade +0x01c:  jmp    0859ee5e <+0x39c>
0859eae3 +0x021:  mov    0xc(%ebp),%eax
0859eae6 +0x024:  movzbl 0x7fc(%eax),%eax
0859eaed +0x02b:  test   %al,%al
0859eaef +0x02d:  je     0859ee59 <+0x397>
0859eaf5 +0x033:  movl   $0x0,-0x20(%ebp)
0859eafc +0x03a:  jmp    0859ee4a <+0x388>
0859eb01 +0x03f:  mov    -0x20(%ebp),%eax
0859eb04 +0x042:  mov    %eax,0x4(%esp)
0859eb08 +0x046:  mov    0x8(%ebp),%eax
0859eb0b +0x049:  mov    %eax,(%esp)
0859eb0e +0x04c:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859eb13 +0x051:  xor    $0x1,%eax
0859eb16 +0x054:  test   %al,%al
0859eb18 +0x056:  jne    0859ee45 <+0x383>
0859eb1e +0x05c:  mov    0xc(%ebp),%eax
0859eb21 +0x05f:  mov    0x7f8(%eax),%esi
0859eb27 +0x065:  mov    -0x20(%ebp),%eax
0859eb2a +0x068:  shl    $0x2,%eax
0859eb2d +0x06b:  add    0x14(%ebp),%eax
0859eb30 +0x06e:  mov    (%eax),%ebx
0859eb32 +0x070:  mov    -0x20(%ebp),%edx
0859eb35 +0x073:  mov    0x8(%ebp),%ecx
0859eb38 +0x076:  mov    %edx,%eax
0859eb3a +0x078:  add    %eax,%eax
0859eb3c +0x07a:  add    %edx,%eax
0859eb3e +0x07c:  shl    $0x3,%eax
0859eb41 +0x07f:  lea    (%ecx,%eax,1),%eax
0859eb44 +0x082:  add    $0x78,%eax
0859eb47 +0x085:  mov    (%eax),%eax
0859eb49 +0x087:  mov    %eax,(%esp)
0859eb4c +0x08a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0859eb51 +0x08f:  movl   $0x1,0x14(%esp)
0859eb59 +0x097:  movl   $0xe,0x10(%esp)
0859eb61 +0x09f:  mov    %esi,0xc(%esp)
0859eb65 +0x0a3:  mov    %ebx,0x8(%esp)
0859eb69 +0x0a7:  movl   $0x1,0x4(%esp)
0859eb71 +0x0af:  mov    %eax,(%esp)
0859eb74 +0x0b2:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0859eb79 +0x0b7:  xor    $0x1,%eax
0859eb7c +0x0ba:  test   %al,%al
0859eb7e +0x0bc:  je     0859ec05 <+0x143>
0859eb84 +0x0c2:  mov    0xc(%ebp),%eax
0859eb87 +0x0c5:  mov    0x7f8(%eax),%edi
0859eb8d +0x0cb:  mov    -0x20(%ebp),%eax
0859eb90 +0x0ce:  shl    $0x2,%eax
0859eb93 +0x0d1:  add    0x14(%ebp),%eax
0859eb96 +0x0d4:  mov    (%eax),%esi
0859eb98 +0x0d6:  mov    -0x20(%ebp),%edx
0859eb9b +0x0d9:  mov    0x8(%ebp),%ecx
0859eb9e +0x0dc:  mov    %edx,%eax
0859eba0 +0x0de:  add    %eax,%eax
0859eba2 +0x0e0:  add    %edx,%eax
0859eba4 +0x0e2:  shl    $0x3,%eax
0859eba7 +0x0e5:  lea    (%ecx,%eax,1),%eax
0859ebaa +0x0e8:  add    $0x78,%eax
0859ebad +0x0eb:  mov    (%eax),%eax
0859ebaf +0x0ed:  mov    %eax,(%esp)
0859ebb2 +0x0f0:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0859ebb7 +0x0f5:  mov    %eax,%ebx
0859ebb9 +0x0f7:  movl   $0x5,0xc(%esp)
0859ebc1 +0x0ff:  movl   $0xa60,0x8(%esp)
0859ebc9 +0x107:  movl   $&_ZZN6CParty22UseAncientDungeonItemsEPK8CDungeonP10Inven_ItemPiE19__PRETTY_FUNCTION__,0x4(%esp)
0859ebd1 +0x10f:  lea    -0x30(%ebp),%eax
0859ebd4 +0x112:  mov    %eax,(%esp)
0859ebd7 +0x115:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0859ebdc +0x11a:  mov    %edi,0x10(%esp)
0859ebe0 +0x11e:  mov    %esi,0xc(%esp)
0859ebe4 +0x122:  mov    %ebx,0x8(%esp)
0859ebe8 +0x126:  movl   $"CParty::UseAncientDungeonItems, delete_item failed , User ch=%d , %d %d",0x4(%esp)
0859ebf0 +0x12e:  lea    -0x30(%ebp),%eax
0859ebf3 +0x131:  mov    %eax,(%esp)
0859ebf6 +0x134:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0859ebfb +0x139:  mov    $0x0,%eax
0859ec00 +0x13e:  jmp    0859ee5e <+0x39c>
0859ec05 +0x143:  lea    -0x3c(%ebp),%eax
0859ec08 +0x146:  mov    %eax,(%esp)
0859ec0b +0x149:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0859ec10 +0x14e:  movl   $0xe,0x8(%esp)
0859ec18 +0x156:  movl   $0x0,0x4(%esp)
0859ec20 +0x15e:  lea    -0x3c(%ebp),%eax
0859ec23 +0x161:  mov    %eax,(%esp)
0859ec26 +0x164:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0859ec2b +0x169:  movl   $0x0,0x4(%esp)
0859ec33 +0x171:  lea    -0x3c(%ebp),%eax
0859ec36 +0x174:  mov    %eax,(%esp)
0859ec39 +0x177:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ec3e +0x17c:  movl   $0x1,0x4(%esp)
0859ec46 +0x184:  lea    -0x3c(%ebp),%eax
0859ec49 +0x187:  mov    %eax,(%esp)
0859ec4c +0x18a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859ec51 +0x18f:  mov    -0x20(%ebp),%eax
0859ec54 +0x192:  shl    $0x2,%eax
0859ec57 +0x195:  add    0x14(%ebp),%eax
0859ec5a +0x198:  mov    (%eax),%eax
0859ec5c +0x19a:  mov    %eax,0x4(%esp)
0859ec60 +0x19e:  lea    -0x3c(%ebp),%eax
0859ec63 +0x1a1:  mov    %eax,(%esp)
0859ec66 +0x1a4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859ec6b +0x1a9:  mov    -0x20(%ebp),%eax
0859ec6e +0x1ac:  imul   $0x3d,%eax,%eax
0859ec71 +0x1af:  add    0x10(%ebp),%eax
0859ec74 +0x1b2:  mov    0x7(%eax),%edx
0859ec77 +0x1b5:  mov    0xc(%ebp),%eax
0859ec7a +0x1b8:  mov    0x7f8(%eax),%eax
0859ec80 +0x1be:  mov    %edx,%ecx
0859ec82 +0x1c0:  sub    %eax,%ecx
0859ec84 +0x1c2:  mov    %ecx,%eax
0859ec86 +0x1c4:  mov    %eax,-0x1c(%ebp)
0859ec89 +0x1c7:  cmpl   $0x0,-0x1c(%ebp)
0859ec8d +0x1cb:  jne    0859eca4 <+0x1e2>
0859ec8f +0x1cd:  movl   $0xffffffff,0x4(%esp)
0859ec97 +0x1d5:  lea    -0x3c(%ebp),%eax
0859ec9a +0x1d8:  mov    %eax,(%esp)
0859ec9d +0x1db:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859eca2 +0x1e0:  jmp    0859ecbf <+0x1fd>
0859eca4 +0x1e2:  mov    -0x20(%ebp),%eax
0859eca7 +0x1e5:  imul   $0x3d,%eax,%eax
0859ecaa +0x1e8:  add    0x10(%ebp),%eax
0859ecad +0x1eb:  mov    0x2(%eax),%eax
0859ecb0 +0x1ee:  mov    %eax,0x4(%esp)
0859ecb4 +0x1f2:  lea    -0x3c(%ebp),%eax
0859ecb7 +0x1f5:  mov    %eax,(%esp)
0859ecba +0x1f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859ecbf +0x1fd:  mov    -0x1c(%ebp),%eax
0859ecc2 +0x200:  mov    %eax,0x4(%esp)
0859ecc6 +0x204:  lea    -0x3c(%ebp),%eax
0859ecc9 +0x207:  mov    %eax,(%esp)
0859eccc +0x20a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859ecd1 +0x20f:  mov    -0x20(%ebp),%eax
0859ecd4 +0x212:  imul   $0x3d,%eax,%eax
0859ecd7 +0x215:  add    0x10(%ebp),%eax
0859ecda +0x218:  mov    %eax,(%esp)
0859ecdd +0x21b:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
0859ece2 +0x220:  movzbl %al,%eax
0859ece5 +0x223:  mov    %eax,0x4(%esp)
0859ece9 +0x227:  lea    -0x3c(%ebp),%eax
0859ecec +0x22a:  mov    %eax,(%esp)
0859ecef +0x22d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ecf4 +0x232:  mov    -0x20(%ebp),%eax
0859ecf7 +0x235:  imul   $0x3d,%eax,%eax
0859ecfa +0x238:  add    0x10(%ebp),%eax
0859ecfd +0x23b:  movzwl 0xb(%eax),%eax
0859ed01 +0x23f:  movzwl %ax,%eax
0859ed04 +0x242:  mov    %eax,0x4(%esp)
0859ed08 +0x246:  lea    -0x3c(%ebp),%eax
0859ed0b +0x249:  mov    %eax,(%esp)
0859ed0e +0x24c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859ed13 +0x251:  mov    -0x20(%ebp),%eax
0859ed16 +0x254:  imul   $0x3d,%eax,%eax
0859ed19 +0x257:  add    0x10(%ebp),%eax
0859ed1c +0x25a:  movzbl (%eax),%eax
0859ed1f +0x25d:  movzbl %al,%eax
0859ed22 +0x260:  mov    %eax,0x4(%esp)
0859ed26 +0x264:  lea    -0x3c(%ebp),%eax
0859ed29 +0x267:  mov    %eax,(%esp)
0859ed2c +0x26a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ed31 +0x26f:  mov    -0x20(%ebp),%eax
0859ed34 +0x272:  imul   $0x3d,%eax,%eax
0859ed37 +0x275:  add    0x10(%ebp),%eax
0859ed3a +0x278:  mov    0xd(%eax),%eax
0859ed3d +0x27b:  mov    %eax,0x4(%esp)
0859ed41 +0x27f:  lea    -0x3c(%ebp),%eax
0859ed44 +0x282:  mov    %eax,(%esp)
0859ed47 +0x285:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0859ed4c +0x28a:  mov    -0x20(%ebp),%eax
0859ed4f +0x28d:  imul   $0x3d,%eax,%eax
0859ed52 +0x290:  add    0x10(%ebp),%eax
0859ed55 +0x293:  add    $0x11,%eax
0859ed58 +0x296:  mov    %eax,(%esp)
0859ed5b +0x299:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
0859ed60 +0x29e:  movzbl %al,%eax
0859ed63 +0x2a1:  mov    %eax,0x4(%esp)
0859ed67 +0x2a5:  lea    -0x3c(%ebp),%eax
0859ed6a +0x2a8:  mov    %eax,(%esp)
0859ed6d +0x2ab:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859ed72 +0x2b0:  mov    -0x20(%ebp),%eax
0859ed75 +0x2b3:  imul   $0x3d,%eax,%eax
0859ed78 +0x2b6:  add    0x10(%ebp),%eax
0859ed7b +0x2b9:  add    $0x11,%eax
0859ed7e +0x2bc:  mov    %eax,(%esp)
0859ed81 +0x2bf:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
0859ed86 +0x2c4:  movzwl %ax,%eax
0859ed89 +0x2c7:  mov    %eax,0x4(%esp)
0859ed8d +0x2cb:  lea    -0x3c(%ebp),%eax
0859ed90 +0x2ce:  mov    %eax,(%esp)
0859ed93 +0x2d1:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0859ed98 +0x2d6:  movl   $0x0,0x4(%esp)
0859eda0 +0x2de:  lea    -0x3c(%ebp),%eax
0859eda3 +0x2e1:  mov    %eax,(%esp)
0859eda6 +0x2e4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0859edab +0x2e9:  mov    -0x20(%ebp),%eax
0859edae +0x2ec:  imul   $0x3d,%eax,%eax
0859edb1 +0x2ef:  add    0x10(%ebp),%eax
0859edb4 +0x2f2:  mov    %eax,0x4(%esp)
0859edb8 +0x2f6:  lea    -0x3c(%ebp),%eax
0859edbb +0x2f9:  mov    %eax,(%esp)
0859edbe +0x2fc:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0859edc3 +0x301:  movl   $0x1,0x4(%esp)
0859edcb +0x309:  lea    -0x3c(%ebp),%eax
0859edce +0x30c:  mov    %eax,(%esp)
0859edd1 +0x30f:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0859edd6 +0x314:  mov    -0x20(%ebp),%edx
0859edd9 +0x317:  mov    0x8(%ebp),%ecx
0859eddc +0x31a:  mov    %edx,%eax
0859edde +0x31c:  add    %eax,%eax
0859ede0 +0x31e:  add    %edx,%eax
0859ede2 +0x320:  shl    $0x3,%eax
0859ede5 +0x323:  lea    (%ecx,%eax,1),%eax
0859ede8 +0x326:  add    $0x78,%eax
0859edeb +0x329:  mov    (%eax),%eax
0859eded +0x32b:  lea    -0x3c(%ebp),%edx
0859edf0 +0x32e:  mov    %edx,0x4(%esp)
0859edf4 +0x332:  mov    %eax,(%esp)
0859edf7 +0x335:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0859edfc +0x33a:  mov    -0x20(%ebp),%edx
0859edff +0x33d:  mov    0x8(%ebp),%ecx
0859ee02 +0x340:  mov    %edx,%eax
0859ee04 +0x342:  add    %eax,%eax
0859ee06 +0x344:  add    %edx,%eax
0859ee08 +0x346:  shl    $0x3,%eax
0859ee0b +0x349:  lea    (%ecx,%eax,1),%eax
0859ee0e +0x34c:  add    $0x78,%eax
0859ee11 +0x34f:  mov    (%eax),%eax
0859ee13 +0x351:  mov    %eax,(%esp)
0859ee16 +0x354:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
0859ee1b +0x359:  jmp    0859ee38 <+0x376>
0859ee1d +0x35b:  mov    %edx,%ebx
0859ee1f +0x35d:  mov    %eax,%esi
0859ee21 +0x35f:  lea    -0x3c(%ebp),%eax
0859ee24 +0x362:  mov    %eax,(%esp)
0859ee27 +0x365:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859ee2c +0x36a:  mov    %esi,%eax
0859ee2e +0x36c:  mov    %ebx,%edx
0859ee30 +0x36e:  mov    %eax,(%esp)
0859ee33 +0x371:  call   08ae3750 <_Unwind_Resume>
0859ee38 +0x376:  lea    -0x3c(%ebp),%eax
0859ee3b +0x379:  mov    %eax,(%esp)
0859ee3e +0x37c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0859ee43 +0x381:  jmp    0859ee46 <+0x384>
0859ee45 +0x383:  nop
0859ee46 +0x384:  addl   $0x1,-0x20(%ebp)
0859ee4a +0x388:  cmpl   $0x3,-0x20(%ebp)
0859ee4e +0x38c:  setle  %al
0859ee51 +0x38f:  test   %al,%al
0859ee53 +0x391:  jne    0859eb01 <+0x3f>
0859ee59 +0x397:  mov    $0x1,%eax
0859ee5e +0x39c:  add    $0x5c,%esp
0859ee61 +0x39f:  pop    %ebx
0859ee62 +0x3a0:  pop    %esi
0859ee63 +0x3a1:  pop    %edi
0859ee64 +0x3a2:  pop    %ebp
0859ee65 +0x3a3:  ret
```

## 反编译 C

```c
// CParty::UseAncientDungeonItems @ 0x859eac2

/* CParty::UseAncientDungeonItems(CDungeon const*, Inven_Item*, int*) */

undefined4 __thiscall
CParty::UseAncientDungeonItems(CParty *this,CDungeon *param_1,Inven_Item *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  PacketGuard local_40 [12];
  cMyTrace local_34 [16];
  int local_24;
  int local_20;
  
  if ((*(int *)(this + 0xcd8) != 1) && (param_1[0x7fc] != (CDungeon)0x0)) {
    for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
      cVar3 = _checkValidUser(this,local_24);
      if (cVar3 == '\x01') {
        uVar1 = *(undefined4 *)(param_1 + 0x7f8);
        iVar2 = param_3[local_24];
        pCVar4 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenW
                           (*(CUserCharacInfo **)(this + local_24 * 0x18 + 0x78));
        cVar3 = CInventory::delete_item(pCVar4,1,iVar2,uVar1,0xe,1);
        if (cVar3 != '\x01') {
          uVar1 = *(undefined4 *)(param_1 + 0x7f8);
          iVar2 = param_3[local_24];
          uVar5 = CUserCharacInfo::getCurCharacNo
                            (*(CUserCharacInfo **)(this + local_24 * 0x18 + 0x78));
          cMyTrace::cMyTrace(local_34,
                             "bool CParty::UseAncientDungeonItems(const CDungeon*, Inven_Item*, int*)"
                             ,0xa60,5);
          cMyTrace::operator()
                    (local_34,
                     "CParty::UseAncientDungeonItems, delete_item failed , User ch=%d , %d %d",uVar5
                     ,iVar2,uVar1);
          return 0;
        }
        PacketGuard::PacketGuard(local_40);
                    /* try { // try from 0859ec26 to 0859ee1a has its CatchHandler @ 0859ee1d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_40,0,0xe);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,param_3[local_24]);
        local_20 = *(int *)(param_2 + local_24 * 0x3d + 7) - *(int *)(param_1 + 0x7f8);
        if (local_20 == 0) {
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,-1);
        }
        else {
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_40,*(int *)(param_2 + local_24 * 0x3d + 2));
        }
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_40,local_20);
        uVar6 = Inven_Item::GetItemAttr(param_2 + local_24 * 0x3d);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,uVar6 & 0xff);
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)local_40,(uint)*(ushort *)(param_2 + local_24 * 0x3d + 0xb)
                  );
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_40,(uint)(byte)param_2[local_24 * 0x3d]);
        InterfacePacketBuf::put_int
                  ((InterfacePacketBuf *)local_40,*(int *)(param_2 + local_24 * 0x3d + 0xd));
        uVar6 = stAmplifyOption_t::getAbilityType
                          ((stAmplifyOption_t *)(param_2 + local_24 * 0x3d + 0x11));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,uVar6 & 0xff);
        uVar6 = stAmplifyOption_t::getAbilityValue
                          ((stAmplifyOption_t *)(param_2 + local_24 * 0x3d + 0x11));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_40,uVar6 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_40,0);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_40,param_2 + local_24 * 0x3d);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_40,true);
        CUser::Send(*(CUser **)(this + local_24 * 0x18 + 0x78),local_40);
        CUser::SaveInventory(*(CUser **)(this + local_24 * 0x18 + 0x78));
        PacketGuard::~PacketGuard(local_40);
      }
    }
  }
  return 1;
}
```
