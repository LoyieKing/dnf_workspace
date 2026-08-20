# sendBackSecurityAuthRequest

`_ZN5CUser27sendBackSecurityAuthRequestEv`

`CUser::sendBackSecurityAuthRequest()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08680706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08680706  _ZN5CUser27sendBackSecurityAuthRequestEv
#           CUser::sendBackSecurityAuthRequest()
# range [0x08680706, 0x08680a95]
08680706 +0x000:  push   %ebp
08680707 +0x001:  mov    %esp,%ebp
08680709 +0x003:  push   %edi
0868070a +0x004:  push   %esi
0868070b +0x005:  push   %ebx
0868070c +0x006:  sub    $0x8ac,%esp
08680712 +0x00c:  lea    -0x90(%ebp),%ebx
08680718 +0x012:  mov    $0x0,%eax
0868071d +0x017:  mov    $0x10,%edx
08680722 +0x01c:  mov    %ebx,%edi
08680724 +0x01e:  mov    %edx,%ecx
08680726 +0x020:  rep stos %eax,%es:(%edi)
08680728 +0x022:  movw   $0xffff,-0x90(%ebp)
08680731 +0x02b:  lea    -0x50(%ebp),%ebx
08680734 +0x02e:  mov    $0x0,%eax
08680739 +0x033:  mov    $0x9,%edx
0868073e +0x038:  mov    %ebx,%edi
08680740 +0x03a:  mov    %edx,%ecx
08680742 +0x03c:  rep stos %eax,%es:(%edi)
08680744 +0x03e:  lea    -0x890(%ebp),%ebx
0868074a +0x044:  mov    $0x0,%eax
0868074f +0x049:  mov    $0x200,%edx
08680754 +0x04e:  mov    %ebx,%edi
08680756 +0x050:  mov    %edx,%ecx
08680758 +0x052:  rep stos %eax,%es:(%edi)
0868075a +0x054:  mov    0x8(%ebp),%eax
0868075d +0x057:  mov    %eax,(%esp)
08680760 +0x05a:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08680765 +0x05f:  lea    -0x90(%ebp),%edx
0868076b +0x065:  add    $0x6,%edx
0868076e +0x068:  mov    %edx,0x10(%esp)
08680772 +0x06c:  lea    -0x90(%ebp),%edx
08680778 +0x072:  add    $0x4,%edx
0868077b +0x075:  mov    %edx,0xc(%esp)
0868077f +0x079:  lea    -0x90(%ebp),%edx
08680785 +0x07f:  add    $0x2,%edx
08680788 +0x082:  mov    %edx,0x8(%esp)
0868078c +0x086:  lea    -0x90(%ebp),%edx
08680792 +0x08c:  mov    %edx,0x4(%esp)
08680796 +0x090:  mov    %eax,(%esp)
08680799 +0x093:  call   085fddb2 <_ZN8WongWork13CSecurityCard16generateQuestionERsS1_S1_S1_>  ; WongWork::CSecurityCard::generateQuestion(short&, short&, short&, short&)
0868079e +0x098:  movl   $0x800,-0x20(%ebp)
086807a5 +0x09f:  movb   $0x1,-0x1a(%ebp)
086807a9 +0x0a3:  movl   $0xe,(%esp)
086807b0 +0x0aa:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
086807b5 +0x0af:  mov    %al,-0x1a(%ebp)
086807b8 +0x0b2:  cmpb   $0x0,-0x1a(%ebp)
086807bc +0x0b6:  je     086807c4 <+0xbe>
086807be +0x0b8:  cmpb   $0x5,-0x1a(%ebp)
086807c2 +0x0bc:  jne    086807cb <+0xc5>
086807c4 +0x0be:  mov    $0x1,%eax
086807c9 +0x0c3:  jmp    086807d0 <+0xca>
086807cb +0x0c5:  mov    $0x0,%eax
086807d0 +0x0ca:  test   %al,%al
086807d2 +0x0cc:  jne    086807a9 <+0xa3>
086807d4 +0x0ce:  mov    0x8(%ebp),%eax
086807d7 +0x0d1:  mov    %eax,(%esp)
086807da +0x0d4:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086807df +0x0d9:  mov    %eax,(%esp)
086807e2 +0x0dc:  call   085998ea <_ZN8Sanicova4CPad18GenerateRandomDataEv>  ; Sanicova::CPad::GenerateRandomData()
086807e7 +0x0e1:  lea    -0x890(%ebp),%edi
086807ed +0x0e7:  lea    -0x90(%ebp),%esi
086807f3 +0x0ed:  movsbl -0x1a(%ebp),%ebx
086807f7 +0x0f1:  mov    0x8(%ebp),%eax
086807fa +0x0f4:  mov    %eax,(%esp)
086807fd +0x0f7:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680802 +0x0fc:  mov    %eax,(%esp)
08680805 +0x0ff:  call   0859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>  ; Sanicova::CPad::GetSelectedCipherIdx()
0868080a +0x104:  movzwl %ax,%eax
0868080d +0x107:  shl    $0x4,%eax
08680810 +0x10a:  mov    &_ZN10GlobalData32s_secu_cipher_keystring_manager_E(%eax),%eax
08680816 +0x110:  lea    -0x20(%ebp),%edx
08680819 +0x113:  mov    %edx,0x14(%esp)
0868081d +0x117:  mov    %edi,0x10(%esp)
08680821 +0x11b:  movl   $0x8,0xc(%esp)
08680829 +0x123:  mov    %esi,0x8(%esp)
0868082d +0x127:  mov    %ebx,0x4(%esp)
08680831 +0x12b:  mov    %eax,(%esp)
08680834 +0x12e:  call   08097436 <_ZN6Cipher7EncryptEiPKhiPhPi>  ; Cipher::Encrypt(int, unsigned char const*, int, unsigned char*, int*)
08680839 +0x133:  mov    0x8(%ebp),%eax
0868083c +0x136:  mov    %eax,(%esp)
0868083f +0x139:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08680844 +0x13e:  mov    %eax,(%esp)
08680847 +0x141:  call   086959b8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x220d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x220d
0868084c +0x146:  mov    %al,-0x19(%ebp)
0868084f +0x149:  lea    -0x2c(%ebp),%eax
08680852 +0x14c:  mov    %eax,(%esp)
08680855 +0x14f:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868085a +0x154:  movl   $0x98,0x8(%esp)
08680862 +0x15c:  movl   $0x0,0x4(%esp)
0868086a +0x164:  lea    -0x2c(%ebp),%eax
0868086d +0x167:  mov    %eax,(%esp)
08680870 +0x16a:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08680875 +0x16f:  movsbl -0x1a(%ebp),%eax
08680879 +0x173:  mov    %eax,0x4(%esp)
0868087d +0x177:  lea    -0x2c(%ebp),%eax
08680880 +0x17a:  mov    %eax,(%esp)
08680883 +0x17d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08680888 +0x182:  mov    0x8(%ebp),%eax
0868088b +0x185:  mov    %eax,(%esp)
0868088e +0x188:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680893 +0x18d:  movl   $0x0,0x4(%esp)
0868089b +0x195:  mov    %eax,(%esp)
0868089e +0x198:  call   08599872 <_ZN8Sanicova4CPad9GetKeyIdxEi>  ; Sanicova::CPad::GetKeyIdx(int)
086808a3 +0x19d:  movzwl %ax,%eax
086808a6 +0x1a0:  mov    %eax,0x4(%esp)
086808aa +0x1a4:  lea    -0x2c(%ebp),%eax
086808ad +0x1a7:  mov    %eax,(%esp)
086808b0 +0x1aa:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086808b5 +0x1af:  mov    0x8(%ebp),%eax
086808b8 +0x1b2:  mov    %eax,(%esp)
086808bb +0x1b5:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086808c0 +0x1ba:  movl   $0x1,0x4(%esp)
086808c8 +0x1c2:  mov    %eax,(%esp)
086808cb +0x1c5:  call   08599872 <_ZN8Sanicova4CPad9GetKeyIdxEi>  ; Sanicova::CPad::GetKeyIdx(int)
086808d0 +0x1ca:  movzwl %ax,%eax
086808d3 +0x1cd:  mov    %eax,0x4(%esp)
086808d7 +0x1d1:  lea    -0x2c(%ebp),%eax
086808da +0x1d4:  mov    %eax,(%esp)
086808dd +0x1d7:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
086808e2 +0x1dc:  mov    0x8(%ebp),%eax
086808e5 +0x1df:  mov    %eax,(%esp)
086808e8 +0x1e2:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
086808ed +0x1e7:  movl   $0x0,0x4(%esp)
086808f5 +0x1ef:  mov    %eax,(%esp)
086808f8 +0x1f2:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
086808fd +0x1f7:  movzbl %al,%eax
08680900 +0x1fa:  mov    %eax,0x4(%esp)
08680904 +0x1fe:  lea    -0x2c(%ebp),%eax
08680907 +0x201:  mov    %eax,(%esp)
0868090a +0x204:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868090f +0x209:  mov    0x8(%ebp),%eax
08680912 +0x20c:  mov    %eax,(%esp)
08680915 +0x20f:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
0868091a +0x214:  movl   $0x1,0x4(%esp)
08680922 +0x21c:  mov    %eax,(%esp)
08680925 +0x21f:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
0868092a +0x224:  movzbl %al,%eax
0868092d +0x227:  mov    %eax,0x4(%esp)
08680931 +0x22b:  lea    -0x2c(%ebp),%eax
08680934 +0x22e:  mov    %eax,(%esp)
08680937 +0x231:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868093c +0x236:  mov    0x8(%ebp),%eax
0868093f +0x239:  mov    %eax,(%esp)
08680942 +0x23c:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680947 +0x241:  movl   $0x2,0x4(%esp)
0868094f +0x249:  mov    %eax,(%esp)
08680952 +0x24c:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
08680957 +0x251:  movzbl %al,%eax
0868095a +0x254:  mov    %eax,0x4(%esp)
0868095e +0x258:  lea    -0x2c(%ebp),%eax
08680961 +0x25b:  mov    %eax,(%esp)
08680964 +0x25e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08680969 +0x263:  mov    0x8(%ebp),%eax
0868096c +0x266:  mov    %eax,(%esp)
0868096f +0x269:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680974 +0x26e:  movl   $0x3,0x4(%esp)
0868097c +0x276:  mov    %eax,(%esp)
0868097f +0x279:  call   08599936 <_ZN8Sanicova4CPad12GetShakeDataEi>  ; Sanicova::CPad::GetShakeData(int)
08680984 +0x27e:  movzbl %al,%eax
08680987 +0x281:  mov    %eax,0x4(%esp)
0868098b +0x285:  lea    -0x2c(%ebp),%eax
0868098e +0x288:  mov    %eax,(%esp)
08680991 +0x28b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08680996 +0x290:  mov    -0x20(%ebp),%eax
08680999 +0x293:  mov    %eax,0x4(%esp)
0868099d +0x297:  lea    -0x2c(%ebp),%eax
086809a0 +0x29a:  mov    %eax,(%esp)
086809a3 +0x29d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086809a8 +0x2a2:  mov    -0x20(%ebp),%eax
086809ab +0x2a5:  mov    %eax,0x8(%esp)
086809af +0x2a9:  lea    -0x890(%ebp),%eax
086809b5 +0x2af:  mov    %eax,0x4(%esp)
086809b9 +0x2b3:  lea    -0x2c(%ebp),%eax
086809bc +0x2b6:  mov    %eax,(%esp)
086809bf +0x2b9:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
086809c4 +0x2be:  movsbl -0x19(%ebp),%eax
086809c8 +0x2c2:  mov    %eax,0x4(%esp)
086809cc +0x2c6:  lea    -0x2c(%ebp),%eax
086809cf +0x2c9:  mov    %eax,(%esp)
086809d2 +0x2cc:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086809d7 +0x2d1:  movl   $0x1,0x4(%esp)
086809df +0x2d9:  lea    -0x2c(%ebp),%eax
086809e2 +0x2dc:  mov    %eax,(%esp)
086809e5 +0x2df:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086809ea +0x2e4:  lea    -0x2c(%ebp),%eax
086809ed +0x2e7:  mov    %eax,0x4(%esp)
086809f1 +0x2eb:  mov    0x8(%ebp),%eax
086809f4 +0x2ee:  mov    %eax,(%esp)
086809f7 +0x2f1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
086809fc +0x2f6:  mov    0x8(%ebp),%eax
086809ff +0x2f9:  mov    %eax,(%esp)
08680a02 +0x2fc:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08680a07 +0x301:  mov    %eax,(%esp)
08680a0a +0x304:  call   0822ef0e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x45b8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x45b8
08680a0f +0x309:  test   %al,%al
08680a11 +0x30b:  je     08680a30 <+0x32a>
08680a13 +0x30d:  mov    0x8(%ebp),%eax
08680a16 +0x310:  mov    %eax,(%esp)
08680a19 +0x313:  call   0822fd20 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53ca>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53ca
08680a1e +0x318:  movl   $0x1,0x4(%esp)
08680a26 +0x320:  mov    %eax,(%esp)
08680a29 +0x323:  call   0822ef64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x460e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x460e
08680a2e +0x328:  jmp    08680a7f <+0x379>
08680a30 +0x32a:  mov    0x8(%ebp),%eax
08680a33 +0x32d:  mov    %eax,(%esp)
08680a36 +0x330:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680a3b +0x335:  mov    %eax,(%esp)
08680a3e +0x338:  call   0822efda <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4684>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4684
08680a43 +0x33d:  test   %al,%al
08680a45 +0x33f:  je     08680a7f <+0x379>
08680a47 +0x341:  mov    0x8(%ebp),%eax
08680a4a +0x344:  mov    %eax,(%esp)
08680a4d +0x347:  call   0822fd2e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x53d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x53d8
08680a52 +0x34c:  movl   $0x1,0x4(%esp)
08680a5a +0x354:  mov    %eax,(%esp)
08680a5d +0x357:  call   0822efcc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4676>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4676
08680a62 +0x35c:  jmp    08680a7f <+0x379>
08680a64 +0x35e:  mov    %edx,%ebx
08680a66 +0x360:  mov    %eax,%esi
08680a68 +0x362:  lea    -0x2c(%ebp),%eax
08680a6b +0x365:  mov    %eax,(%esp)
08680a6e +0x368:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08680a73 +0x36d:  mov    %esi,%eax
08680a75 +0x36f:  mov    %ebx,%edx
08680a77 +0x371:  mov    %eax,(%esp)
08680a7a +0x374:  call   08ae3750 <_Unwind_Resume>
08680a7f +0x379:  lea    -0x2c(%ebp),%eax
08680a82 +0x37c:  mov    %eax,(%esp)
08680a85 +0x37f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08680a8a +0x384:  add    $0x8ac,%esp
08680a90 +0x38a:  pop    %ebx
08680a91 +0x38b:  pop    %esi
08680a92 +0x38c:  pop    %edi
08680a93 +0x38d:  pop    %ebp
08680a94 +0x38e:  ret
08680a95 +0x38f:  nop
```

## 反编译 C

```c
// CUser::sendBackSecurityAuthRequest @ 0x8680706

/* CUser::sendBackSecurityAuthRequest() */

void __thiscall CUser::sendBackSecurityAuthRequest(CUser *this)

{
  bool bVar1;
  char cVar2;
  CSecurityCard *pCVar3;
  CPad *pCVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  undefined4 *puVar8;
  uchar *puVar9;
  uchar local_894 [2048];
  short local_94;
  short sStack_92;
  short sStack_90;
  short asStack_8e [29];
  undefined4 local_54 [9];
  PacketGuard local_30 [12];
  int local_24;
  char local_1e;
  char local_1d;
  
  psVar7 = &local_94;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    psVar7[0] = 0;
    psVar7[1] = 0;
    psVar7 = psVar7 + 2;
  }
  local_94 = -1;
  puVar8 = local_54;
  for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  puVar9 = local_894;
  for (iVar6 = 0x200; iVar6 != 0; iVar6 = iVar6 + -1) {
    puVar9[0] = '\0';
    puVar9[1] = '\0';
    puVar9[2] = '\0';
    puVar9[3] = '\0';
    puVar9 = puVar9 + 4;
  }
  pCVar3 = (CSecurityCard *)getSecurityCard(this);
  WongWork::CSecurityCard::generateQuestion(pCVar3,&local_94,&sStack_92,&sStack_90,asStack_8e);
  local_24 = 0x800;
  local_1e = '\x01';
  do {
    local_1e = get_rand_int(0xe);
    if ((local_1e == '\0') || (local_1e == '\x05')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  } while (bVar1);
  pCVar4 = (CPad *)getPad(this);
  Sanicova::CPad::GenerateRandomData(pCVar4);
  iVar6 = (int)local_1e;
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetSelectedCipherIdx(pCVar4);
  Cipher::Encrypt((Cipher *)(&GlobalData::s_secu_cipher_keystring_manager_)[(uVar5 & 0xffff) * 4],
                  iVar6,(uchar *)&local_94,8,local_894,&local_24);
  pCVar3 = (CSecurityCard *)getSecurityCard(this);
  local_1d = WongWork::CSecurityCard::getCertFlag(pCVar3);
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 08680870 to 086809fb has its CatchHandler @ 08680a64 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x98);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_1e);
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetKeyIdx(pCVar4,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar5 & 0xffff);
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetKeyIdx(pCVar4,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_30,uVar5 & 0xffff);
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetShakeData(pCVar4,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar5 & 0xff);
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetShakeData(pCVar4,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar5 & 0xff);
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetShakeData(pCVar4,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar5 & 0xff);
  pCVar4 = (CPad *)getPad(this);
  uVar5 = Sanicova::CPad::GetShakeData(pCVar4,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,uVar5 & 0xff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_24);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_30,(char *)local_894,local_24);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)local_1d);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  Send(this,local_30);
  pCVar3 = (CSecurityCard *)getSecurityCard(this);
  cVar2 = WongWork::CSecurityCard::isActivate(pCVar3);
  if (cVar2 == '\0') {
    pCVar4 = (CPad *)getPad(this);
    cVar2 = Sanicova::CPad::isActivate(pCVar4);
    if (cVar2 != '\0') {
      pCVar4 = (CPad *)getPad(this);
      Sanicova::CPad::setRequestState(pCVar4,1);
    }
  }
  else {
    pCVar3 = (CSecurityCard *)getSecurityCard(this);
    WongWork::CSecurityCard::setRequestState(pCVar3,1);
  }
  PacketGuard::~PacketGuard(local_30);
  return;
}
```
