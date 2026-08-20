# drop_item_gm

`_ZN6CParty12drop_item_gmEP5CUserj`

`CParty::drop_item_gm(CUser*, unsigned int)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085a73a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085a73a6  _ZN6CParty12drop_item_gmEP5CUserj
#           CParty::drop_item_gm(CUser*, unsigned int)
# range [0x085a73a6, 0x085a7785]
085a73a6 +0x000:  push   %ebp
085a73a7 +0x001:  mov    %esp,%ebp
085a73a9 +0x003:  push   %edi
085a73aa +0x004:  push   %esi
085a73ab +0x005:  push   %ebx
085a73ac +0x006:  sub    $0x12c,%esp
085a73b2 +0x00c:  mov    0xc(%ebp),%eax
085a73b5 +0x00f:  mov    %eax,(%esp)
085a73b8 +0x012:  call   080da2fe <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x49b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x49b
085a73bd +0x017:  test   %al,%al
085a73bf +0x019:  je     085a73cb <+0x25>
085a73c1 +0x01b:  mov    $0x13,%ebx
085a73c6 +0x020:  jmp    085a7778 <+0x3d2>
085a73cb +0x025:  mov    0x10(%ebp),%ebx
085a73ce +0x028:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085a73d3 +0x02d:  mov    %ebx,0x4(%esp)
085a73d7 +0x031:  mov    %eax,(%esp)
085a73da +0x034:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085a73df +0x039:  mov    %eax,-0x28(%ebp)
085a73e2 +0x03c:  cmpl   $0x0,-0x28(%ebp)
085a73e6 +0x040:  jne    085a73f2 <+0x4c>
085a73e8 +0x042:  mov    $0xffffffff,%ebx
085a73ed +0x047:  jmp    085a7778 <+0x3d2>
085a73f2 +0x04c:  lea    -0xc8(%ebp),%eax
085a73f8 +0x052:  mov    %eax,(%esp)
085a73fb +0x055:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
085a7400 +0x05a:  lea    -0x71(%ebp),%eax
085a7403 +0x05d:  mov    %eax,(%esp)
085a7406 +0x060:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085a740b +0x065:  mov    0x10(%ebp),%eax
085a740e +0x068:  mov    %eax,-0x6f(%ebp)
085a7411 +0x06b:  mov    -0x28(%ebp),%eax
085a7414 +0x06e:  mov    (%eax),%eax
085a7416 +0x070:  add    $0x8,%eax
085a7419 +0x073:  mov    (%eax),%edx
085a741b +0x075:  lea    -0x71(%ebp),%eax
085a741e +0x078:  mov    %eax,0x4(%esp)
085a7422 +0x07c:  mov    -0x28(%ebp),%eax
085a7425 +0x07f:  mov    %eax,(%esp)
085a7428 +0x082:  call   *%edx
085a742a +0x084:  mov    -0x6f(%ebp),%eax
085a742d +0x087:  test   %eax,%eax
085a742f +0x089:  je     085a754f <+0x1a9>
085a7435 +0x08f:  movzbl -0x70(%ebp),%eax
085a7439 +0x093:  cmp    $0x1,%al
085a743b +0x095:  jne    085a7469 <+0xc3>
085a743d +0x097:  mov    -0x28(%ebp),%eax
085a7440 +0x09a:  mov    %eax,-0x1c(%ebp)
085a7443 +0x09d:  mov    -0x1c(%ebp),%eax
085a7446 +0x0a0:  mov    0x234(%eax),%eax
085a744c +0x0a6:  cmp    $0xb,%eax
085a744f +0x0a9:  je     085a745f <+0xb9>
085a7451 +0x0ab:  mov    -0x1c(%ebp),%eax
085a7454 +0x0ae:  mov    0x234(%eax),%eax
085a745a +0x0b4:  cmp    $0x9,%eax
085a745d +0x0b7:  jg     085a7469 <+0xc3>
085a745f +0x0b9:  mov    $0x17,%ebx
085a7464 +0x0be:  jmp    085a7778 <+0x3d2>
085a7469 +0x0c3:  movb   $0x0,-0xc8(%ebp)
085a7470 +0x0ca:  movzbl -0x70(%ebp),%eax
085a7474 +0x0ce:  mov    %al,-0xb7(%ebp)
085a747a +0x0d4:  mov    -0x6f(%ebp),%eax
085a747d +0x0d7:  mov    %eax,-0xb6(%ebp)
085a7483 +0x0dd:  movl   $0x1,0x4(%esp)
085a748b +0x0e5:  lea    -0xc8(%ebp),%eax
085a7491 +0x0eb:  add    $0x10,%eax
085a7494 +0x0ee:  mov    %eax,(%esp)
085a7497 +0x0f1:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
085a749c +0x0f6:  lea    -0x71(%ebp),%eax
085a749f +0x0f9:  mov    %eax,(%esp)
085a74a2 +0x0fc:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085a74a7 +0x101:  movzbl %al,%eax
085a74aa +0x104:  mov    %eax,0x4(%esp)
085a74ae +0x108:  lea    -0xc8(%ebp),%eax
085a74b4 +0x10e:  add    $0x10,%eax
085a74b7 +0x111:  mov    %eax,(%esp)
085a74ba +0x114:  call   081507e8 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x11d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x11d
085a74bf +0x119:  movzwl -0x66(%ebp),%eax
085a74c3 +0x11d:  mov    %ax,-0xad(%ebp)
085a74ca +0x124:  movzbl -0x71(%ebp),%eax
085a74ce +0x128:  mov    %al,-0xb8(%ebp)
085a74d4 +0x12e:  mov    -0x64(%ebp),%eax
085a74d7 +0x131:  mov    %eax,-0xab(%ebp)
085a74dd +0x137:  mov    -0x5c(%ebp),%eax
085a74e0 +0x13a:  mov    %eax,-0xa3(%ebp)
085a74e6 +0x140:  mov    -0x58(%ebp),%eax
085a74e9 +0x143:  mov    %eax,-0x9f(%ebp)
085a74ef +0x149:  movzwl -0x54(%ebp),%eax
085a74f3 +0x14d:  mov    %ax,-0x9b(%ebp)
085a74fa +0x154:  mov    -0x60(%ebp),%eax
085a74fd +0x157:  mov    %eax,-0xa7(%ebp)
085a7503 +0x15d:  mov    -0x4c(%ebp),%eax
085a7506 +0x160:  mov    %eax,-0x93(%ebp)
085a750c +0x166:  mov    -0x48(%ebp),%eax
085a750f +0x169:  mov    %eax,-0x8f(%ebp)
085a7515 +0x16f:  mov    -0x44(%ebp),%eax
085a7518 +0x172:  mov    %eax,-0x8b(%ebp)
085a751e +0x178:  movzwl -0x40(%ebp),%eax
085a7522 +0x17c:  mov    %ax,-0x87(%ebp)
085a7529 +0x183:  lea    -0x71(%ebp),%eax
085a752c +0x186:  add    $0x33,%eax
085a752f +0x189:  mov    %eax,(%esp)
085a7532 +0x18c:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
085a7537 +0x191:  movzbl %al,%eax
085a753a +0x194:  mov    %eax,0x4(%esp)
085a753e +0x198:  lea    -0xc8(%ebp),%eax
085a7544 +0x19e:  add    $0x43,%eax
085a7547 +0x1a1:  mov    %eax,(%esp)
085a754a +0x1a4:  call   084e906a <_GLOBAL__I__Z7getUserj+0x1c>  ; global constructors keyed to getUser(unsigned int)+0x1c
085a754f +0x1a9:  mov    0x8(%ebp),%eax
085a7552 +0x1ac:  add    $0xb24,%eax
085a7557 +0x1b1:  mov    %eax,-0xcc(%ebp)
085a755d +0x1b7:  lea    0x4(%esp),%edx
085a7561 +0x1bb:  lea    -0xc8(%ebp),%ebx
085a7567 +0x1c1:  mov    $0x15,%eax
085a756c +0x1c6:  mov    %edx,%edi
085a756e +0x1c8:  mov    %ebx,%esi
085a7570 +0x1ca:  mov    %eax,%ecx
085a7572 +0x1cc:  rep movsl %ds:(%esi),%es:(%edi)
085a7574 +0x1ce:  mov    -0xcc(%ebp),%eax
085a757a +0x1d4:  mov    %eax,(%esp)
085a757d +0x1d7:  call   0830db84 <_ZN13CBattle_Field9drop_itemE8map_item>  ; CBattle_Field::drop_item(map_item)
085a7582 +0x1dc:  mov    %eax,-0x24(%ebp)
085a7585 +0x1df:  cmpl   $0xffffffff,-0x24(%ebp)
085a7589 +0x1e3:  jne    085a7595 <+0x1ef>
085a758b +0x1e5:  mov    $0x16,%ebx
085a7590 +0x1ea:  jmp    085a7778 <+0x3d2>
085a7595 +0x1ef:  movw   $0x12c,-0x20(%ebp)
085a759b +0x1f5:  movw   $0xf0,-0x1e(%ebp)
085a75a1 +0x1fb:  lea    -0x34(%ebp),%eax
085a75a4 +0x1fe:  mov    %eax,(%esp)
085a75a7 +0x201:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085a75ac +0x206:  movl   $0x28,0x8(%esp)
085a75b4 +0x20e:  movl   $0x0,0x4(%esp)
085a75bc +0x216:  lea    -0x34(%ebp),%eax
085a75bf +0x219:  mov    %eax,(%esp)
085a75c2 +0x21c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085a75c7 +0x221:  mov    0xc(%ebp),%eax
085a75ca +0x224:  mov    %eax,(%esp)
085a75cd +0x227:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
085a75d2 +0x22c:  movzwl %ax,%eax
085a75d5 +0x22f:  mov    %eax,0x4(%esp)
085a75d9 +0x233:  lea    -0x34(%ebp),%eax
085a75dc +0x236:  mov    %eax,(%esp)
085a75df +0x239:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a75e4 +0x23e:  movswl -0x20(%ebp),%eax
085a75e8 +0x242:  mov    %eax,0x4(%esp)
085a75ec +0x246:  lea    -0x34(%ebp),%eax
085a75ef +0x249:  mov    %eax,(%esp)
085a75f2 +0x24c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a75f7 +0x251:  movswl -0x1e(%ebp),%eax
085a75fb +0x255:  mov    %eax,0x4(%esp)
085a75ff +0x259:  lea    -0x34(%ebp),%eax
085a7602 +0x25c:  mov    %eax,(%esp)
085a7605 +0x25f:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a760a +0x264:  mov    -0x24(%ebp),%eax
085a760d +0x267:  mov    %eax,0x4(%esp)
085a7611 +0x26b:  lea    -0x34(%ebp),%eax
085a7614 +0x26e:  mov    %eax,(%esp)
085a7617 +0x271:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a761c +0x276:  mov    -0xb6(%ebp),%eax
085a7622 +0x27c:  mov    %eax,0x4(%esp)
085a7626 +0x280:  lea    -0x34(%ebp),%eax
085a7629 +0x283:  mov    %eax,(%esp)
085a762c +0x286:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a7631 +0x28b:  lea    -0xc8(%ebp),%eax
085a7637 +0x291:  add    $0x10,%eax
085a763a +0x294:  mov    %eax,(%esp)
085a763d +0x297:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
085a7642 +0x29c:  movzbl %al,%eax
085a7645 +0x29f:  mov    %eax,0x4(%esp)
085a7649 +0x2a3:  lea    -0x34(%ebp),%eax
085a764c +0x2a6:  mov    %eax,(%esp)
085a764f +0x2a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7654 +0x2ae:  lea    -0xc8(%ebp),%eax
085a765a +0x2b4:  add    $0x10,%eax
085a765d +0x2b7:  mov    %eax,(%esp)
085a7660 +0x2ba:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085a7665 +0x2bf:  mov    %eax,0x4(%esp)
085a7669 +0x2c3:  lea    -0x34(%ebp),%eax
085a766c +0x2c6:  mov    %eax,(%esp)
085a766f +0x2c9:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a7674 +0x2ce:  movzwl -0xad(%ebp),%eax
085a767b +0x2d5:  movzwl %ax,%eax
085a767e +0x2d8:  mov    %eax,0x4(%esp)
085a7682 +0x2dc:  lea    -0x34(%ebp),%eax
085a7685 +0x2df:  mov    %eax,(%esp)
085a7688 +0x2e2:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a768d +0x2e7:  mov    -0xab(%ebp),%eax
085a7693 +0x2ed:  mov    %eax,0x4(%esp)
085a7697 +0x2f1:  lea    -0x34(%ebp),%eax
085a769a +0x2f4:  mov    %eax,(%esp)
085a769d +0x2f7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085a76a2 +0x2fc:  lea    -0xc8(%ebp),%eax
085a76a8 +0x302:  add    $0x21,%eax
085a76ab +0x305:  mov    %eax,(%esp)
085a76ae +0x308:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
085a76b3 +0x30d:  movzbl %al,%eax
085a76b6 +0x310:  mov    %eax,0x4(%esp)
085a76ba +0x314:  lea    -0x34(%ebp),%eax
085a76bd +0x317:  mov    %eax,(%esp)
085a76c0 +0x31a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a76c5 +0x31f:  lea    -0xc8(%ebp),%eax
085a76cb +0x325:  add    $0x21,%eax
085a76ce +0x328:  mov    %eax,(%esp)
085a76d1 +0x32b:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
085a76d6 +0x330:  movzwl %ax,%eax
085a76d9 +0x333:  mov    %eax,0x4(%esp)
085a76dd +0x337:  lea    -0x34(%ebp),%eax
085a76e0 +0x33a:  mov    %eax,(%esp)
085a76e3 +0x33d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085a76e8 +0x342:  lea    -0xc8(%ebp),%eax
085a76ee +0x348:  add    $0x10,%eax
085a76f1 +0x34b:  mov    %eax,0x4(%esp)
085a76f5 +0x34f:  lea    -0x34(%ebp),%eax
085a76f8 +0x352:  mov    %eax,(%esp)
085a76fb +0x355:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
085a7700 +0x35a:  movzbl -0xc8(%ebp),%eax
085a7707 +0x361:  test   %al,%al
085a7709 +0x363:  je     085a7712 <+0x36c>
085a770b +0x365:  mov    $0x0,%eax
085a7710 +0x36a:  jmp    085a7717 <+0x371>
085a7712 +0x36c:  mov    $0x1,%eax
085a7717 +0x371:  mov    %eax,0x4(%esp)
085a771b +0x375:  lea    -0x34(%ebp),%eax
085a771e +0x378:  mov    %eax,(%esp)
085a7721 +0x37b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085a7726 +0x380:  movl   $0x1,0x4(%esp)
085a772e +0x388:  lea    -0x34(%ebp),%eax
085a7731 +0x38b:  mov    %eax,(%esp)
085a7734 +0x38e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085a7739 +0x393:  lea    -0x34(%ebp),%eax
085a773c +0x396:  mov    %eax,0x4(%esp)
085a7740 +0x39a:  mov    0x8(%ebp),%eax
085a7743 +0x39d:  mov    %eax,(%esp)
085a7746 +0x3a0:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
085a774b +0x3a5:  mov    $0x0,%ebx
085a7750 +0x3aa:  lea    -0x34(%ebp),%eax
085a7753 +0x3ad:  mov    %eax,(%esp)
085a7756 +0x3b0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a775b +0x3b5:  jmp    085a7778 <+0x3d2>
085a775d +0x3b7:  mov    %edx,%ebx
085a775f +0x3b9:  mov    %eax,%esi
085a7761 +0x3bb:  lea    -0x34(%ebp),%eax
085a7764 +0x3be:  mov    %eax,(%esp)
085a7767 +0x3c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085a776c +0x3c6:  mov    %esi,%eax
085a776e +0x3c8:  mov    %ebx,%edx
085a7770 +0x3ca:  mov    %eax,(%esp)
085a7773 +0x3cd:  call   08ae3750 <_Unwind_Resume>
085a7778 +0x3d2:  mov    %ebx,%eax
085a777a +0x3d4:  add    $0x12c,%esp
085a7780 +0x3da:  pop    %ebx
085a7781 +0x3db:  pop    %esi
085a7782 +0x3dc:  pop    %edi
085a7783 +0x3dd:  pop    %ebp
085a7784 +0x3de:  ret
085a7785 +0x3df:  nop
```

## 反编译 C

```c
// CParty::drop_item_gm @ 0x85a73a6

/* CParty::drop_item_gm(CUser*, unsigned int) */

undefined4 __thiscall CParty::drop_item_gm(CParty *this,CUser *param_1,uint param_2)

{
  char cVar1;
  uchar uVar2;
  CDataManager *this_00;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  map_item *pmVar6;
  undefined4 *puVar7;
  byte bVar8;
  map_item local_cc [16];
  Inven_Item local_bc;
  char local_bb;
  uint local_ba;
  ushort local_b1;
  int local_af;
  undefined4 local_ab;
  undefined4 local_a7;
  undefined4 local_a3;
  undefined2 local_9f;
  undefined4 local_97;
  undefined4 local_93;
  undefined4 local_8f;
  undefined2 local_8b;
  UpgradeSeparateInfo aUStack_89 [20];
  Inven_Item local_75;
  char local_74;
  uint local_73;
  ushort local_6a;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined2 local_44;
  UpgradeSeparateInfo aUStack_42 [10];
  PacketGuard local_38 [12];
  int *local_2c;
  int local_28;
  short local_24;
  short local_22;
  int *local_20;
  
  bVar8 = 0;
  cVar1 = CUser::CheckInTrade(param_1);
  if (cVar1 == '\0') {
    this_00 = (CDataManager *)G_CDataManager();
    local_2c = (int *)CDataManager::find_item(this_00,param_2);
    if (local_2c == (int *)0x0) {
      uVar5 = 0xffffffff;
    }
    else {
      map_item::map_item(local_cc);
      Inven_Item::Inven_Item(&local_75);
      local_73 = param_2;
      (**(code **)(*local_2c + 8))(local_2c);
      if (local_73 != 0) {
        if ((local_74 == '\x01') &&
           ((local_20 = local_2c, local_2c[0x8d] == 0xb || (local_2c[0x8d] < 10)))) {
          return 0x17;
        }
        local_cc[0] = (map_item)0x0;
        local_bb = local_74;
        local_ba = local_73;
        Inven_Item::set_add_info(&local_bc,1);
        uVar2 = Inven_Item::GetItemAttr(&local_75);
        Inven_Item::SetItemAttr(&local_bc,uVar2);
        local_b1 = local_6a;
        local_bc = local_75;
        local_af = local_68;
        local_a7 = local_60;
        local_a3 = local_5c;
        local_9f = local_58;
        local_ab = local_64;
        local_97 = local_50;
        local_93 = local_4c;
        local_8f = local_48;
        local_8b = local_44;
        uVar2 = UpgradeSeparateInfo::GetUpgradeSeparate(aUStack_42);
        UpgradeSeparateInfo::SetUpgradeSeparate(aUStack_89,uVar2);
      }
      pmVar6 = local_cc;
      puVar7 = (undefined4 *)&stack0xfffffec8;
      for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *(undefined4 *)pmVar6;
        pmVar6 = pmVar6 + ((uint)bVar8 * -2 + 1) * 4;
        puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
      }
      local_28 = CBattle_Field::drop_item(this + 0xb24);
      if (local_28 == -1) {
        uVar5 = 0x16;
      }
      else {
        local_24 = 300;
        local_22 = 0xf0;
        PacketGuard::PacketGuard(local_38);
                    /* try { // try from 085a75c2 to 085a774a has its CatchHandler @ 085a775d */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,0,0x28);
        uVar3 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar3 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,(int)local_24);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,(int)local_22);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,local_28);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_ba);
        uVar3 = Inven_Item::GetItemAttr(&local_bc);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
        iVar4 = Inven_Item::get_add_info(&local_bc);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,iVar4);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,(uint)local_b1);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,local_af);
        uVar3 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)&local_ab);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar3 & 0xff);
        uVar3 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)&local_ab);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar3 & 0xffff);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_38,&local_bc);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_38,(uint)(local_cc[0] == (map_item)0x0));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
        send_to_party(this,local_38);
        uVar5 = 0;
        PacketGuard::~PacketGuard(local_38);
      }
    }
  }
  else {
    uVar5 = 0x13;
  }
  return uVar5;
}
```
