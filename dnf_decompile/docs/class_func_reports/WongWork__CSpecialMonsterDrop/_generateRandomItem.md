# _generateRandomItem

`_ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb`

`WongWork::CSpecialMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, unsigned char, int, WongWork::stGenerateResult_t&, bool&)`

| 类 | 地址 |
|---|---|
| `WongWork::CSpecialMonsterDrop` | `0x08536882` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08536882  _ZN8WongWork19CSpecialMonsterDrop19_generateRandomItemEhchhhihiRNS_18stGenerateResult_tERb
#           WongWork::CSpecialMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, unsigned char, int, WongWork::stGenerateResult_t&, bool&)
# range [0x08536882, 0x08536da7]
08536882 +0x000:  push   %ebp
08536883 +0x001:  mov    %esp,%ebp
08536885 +0x003:  push   %edi
08536886 +0x004:  push   %esi
08536887 +0x005:  push   %ebx
08536888 +0x006:  sub    $0x21c,%esp
0853688e +0x00c:  mov    0xc(%ebp),%edi
08536891 +0x00f:  mov    0x10(%ebp),%esi
08536894 +0x012:  mov    0x14(%ebp),%ebx
08536897 +0x015:  mov    0x18(%ebp),%ecx
0853689a +0x018:  mov    0x1c(%ebp),%edx
0853689d +0x01b:  mov    0x24(%ebp),%eax
085368a0 +0x01e:  mov    %eax,-0x1ec(%ebp)
085368a6 +0x024:  mov    %edi,%eax
085368a8 +0x026:  mov    %al,-0x1cc(%ebp)
085368ae +0x02c:  mov    %esi,%eax
085368b0 +0x02e:  mov    %al,-0x1d0(%ebp)
085368b6 +0x034:  mov    %bl,-0x1d4(%ebp)
085368bc +0x03a:  mov    %cl,-0x1d8(%ebp)
085368c2 +0x040:  mov    %dl,-0x1dc(%ebp)
085368c8 +0x046:  movzbl -0x1ec(%ebp),%ecx
085368cf +0x04d:  mov    %cl,-0x1e0(%ebp)
085368d5 +0x053:  movzbl -0x1d4(%ebp),%eax
085368dc +0x05a:  mov    %eax,0x4(%esp)
085368e0 +0x05e:  mov    0x8(%ebp),%eax
085368e3 +0x061:  mov    %eax,(%esp)
085368e6 +0x064:  call   0853736e <_ZN8WongWork19CSpecialMonsterDrop18_getGenItemProbIdxEi>  ; WongWork::CSpecialMonsterDrop::_getGenItemProbIdx(int)
085368eb +0x069:  mov    %eax,-0x48(%ebp)
085368ee +0x06c:  cmpl   $0x0,-0x48(%ebp)
085368f2 +0x070:  js     08536d9b <+0x519>
085368f8 +0x076:  mov    -0x48(%ebp),%eax
085368fb +0x079:  mov    0x8(%ebp),%edx
085368fe +0x07c:  add    $0x24,%edx
08536901 +0x07f:  mov    %eax,0x4(%esp)
08536905 +0x083:  mov    %edx,(%esp)
08536908 +0x086:  call   0853b5f4 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1880>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1880
0853690d +0x08b:  mov    (%eax),%edx
0853690f +0x08d:  mov    %edx,-0x64(%ebp)
08536912 +0x090:  mov    0x4(%eax),%edx
08536915 +0x093:  mov    %edx,-0x60(%ebp)
08536918 +0x096:  mov    0x8(%eax),%edx
0853691b +0x099:  mov    %edx,-0x5c(%ebp)
0853691e +0x09c:  mov    0xc(%eax),%edx
08536921 +0x09f:  mov    %edx,-0x58(%ebp)
08536924 +0x0a2:  mov    0x10(%eax),%edx
08536927 +0x0a5:  mov    %edx,-0x54(%ebp)
0853692a +0x0a8:  mov    0x14(%eax),%edx
0853692d +0x0ab:  mov    %edx,-0x50(%ebp)
08536930 +0x0ae:  mov    0x18(%eax),%eax
08536933 +0x0b1:  mov    %eax,-0x4c(%ebp)
08536936 +0x0b4:  subb   $0x1,-0x1dc(%ebp)
0853693d +0x0bb:  movl   $0x1,-0x44(%ebp)
08536944 +0x0c2:  jmp    08536d8a <+0x508>
08536949 +0x0c7:  mov    $0x3f800000,%eax
0853694e +0x0cc:  mov    %eax,-0x40(%ebp)
08536951 +0x0cf:  lea    -0x7c(%ebp),%edx
08536954 +0x0d2:  mov    $0x0,%ecx
08536959 +0x0d7:  mov    $0x18,%eax
0853695e +0x0dc:  mov    %eax,%ebx
08536960 +0x0de:  and    $0xfffffffc,%ebx
08536963 +0x0e1:  mov    $0x0,%eax
08536968 +0x0e6:  mov    %ecx,(%edx,%eax,1)
0853696b +0x0e9:  add    $0x4,%eax
0853696e +0x0ec:  cmp    %ebx,%eax
08536970 +0x0ee:  jb     08536968 <+0xe6>
08536972 +0x0f0:  add    %eax,%edx
08536974 +0x0f2:  mov    -0x44(%ebp),%edx
08536977 +0x0f5:  mov    %edx,%eax
08536979 +0x0f7:  add    %eax,%eax
0853697b +0x0f9:  add    %edx,%eax
0853697d +0x0fb:  shl    $0x3,%eax
08536980 +0x0fe:  add    $0x30,%eax
08536983 +0x101:  add    0x8(%ebp),%eax
08536986 +0x104:  mov    %eax,-0x3c(%ebp)
08536989 +0x107:  cmpl   $0x2,-0x44(%ebp)
0853698d +0x10b:  jne    08536a20 <+0x19e>
08536993 +0x111:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536998 +0x116:  mov    %eax,(%esp)
0853699b +0x119:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
085369a0 +0x11e:  mov    -0x48(%ebp),%edx
085369a3 +0x121:  mov    %edx,0x4(%esp)
085369a7 +0x125:  mov    %eax,(%esp)
085369aa +0x128:  call   082f8ae8 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi>  ; CAutoMarketConditionsControl::GetItemDropRate(int)
085369af +0x12d:  fstps  -0x40(%ebp)
085369b2 +0x130:  fldz
085369b4 +0x132:  fstpl  -0x20(%ebp)
085369b7 +0x135:  flds   -0x40(%ebp)
085369ba +0x138:  fldz
085369bc +0x13a:  fxch   %st(1)
085369be +0x13c:  fucompp
085369c0 +0x13e:  fnstsw %ax
085369c2 +0x140:  sahf
085369c3 +0x141:  jp     085369c7 <+0x145>
085369c5 +0x143:  je     085369d3 <+0x151>
085369c7 +0x145:  fld1
085369c9 +0x147:  fdivs  -0x40(%ebp)
085369cc +0x14a:  fld1
085369ce +0x14c:  fsubrp %st,%st(1)
085369d0 +0x14e:  fstpl  -0x20(%ebp)
085369d3 +0x151:  mov    -0x44(%ebp),%edx
085369d6 +0x154:  mov    %edx,%eax
085369d8 +0x156:  add    %eax,%eax
085369da +0x158:  add    %edx,%eax
085369dc +0x15a:  shl    $0x3,%eax
085369df +0x15d:  add    $0x30,%eax
085369e2 +0x160:  add    0x8(%ebp),%eax
085369e5 +0x163:  mov    %eax,%ebx
085369e7 +0x165:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085369ec +0x16a:  mov    %eax,(%esp)
085369ef +0x16d:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
085369f4 +0x172:  fldl   -0x20(%ebp)
085369f7 +0x175:  fstpl  0x10(%esp)
085369fb +0x179:  movl   $0x6,0xc(%esp)
08536a03 +0x181:  lea    -0x7c(%ebp),%edx
08536a06 +0x184:  mov    %edx,0x8(%esp)
08536a0a +0x188:  mov    %ebx,0x4(%esp)
08536a0e +0x18c:  mov    %eax,(%esp)
08536a11 +0x18f:  call   082f8c8c <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id>  ; CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)
08536a16 +0x194:  test   %al,%al
08536a18 +0x196:  je     08536a20 <+0x19e>
08536a1a +0x198:  lea    -0x7c(%ebp),%eax
08536a1d +0x19b:  mov    %eax,-0x3c(%ebp)
08536a20 +0x19e:  mov    -0x44(%ebp),%eax
08536a23 +0x1a1:  mov    -0x5c(%ebp,%eax,4),%eax
08536a27 +0x1a5:  mov    %eax,-0x1e4(%ebp)
08536a2d +0x1ab:  fildl  -0x1e4(%ebp)
08536a33 +0x1b1:  fmuls  -0x40(%ebp)
08536a36 +0x1b4:  mov    -0x44(%ebp),%edx
08536a39 +0x1b7:  movzbl -0x1d8(%ebp),%ebx
08536a40 +0x1be:  mov    0x8(%ebp),%ecx
08536a43 +0x1c1:  mov    %edx,%eax
08536a45 +0x1c3:  shl    $0x2,%eax
08536a48 +0x1c6:  add    %edx,%eax
08536a4a +0x1c8:  add    %ebx,%eax
08536a4c +0x1ca:  add    $0x3c,%eax
08536a4f +0x1cd:  flds   0x8(%ecx,%eax,4)
08536a53 +0x1d1:  fmulp  %st,%st(1)
08536a55 +0x1d3:  mov    -0x44(%ebp),%ecx
08536a58 +0x1d6:  movsbl -0x1d0(%ebp),%edx
08536a5f +0x1dd:  mov    0x8(%ebp),%eax
08536a62 +0x1e0:  shl    $0x2,%ecx
08536a65 +0x1e3:  lea    (%ecx,%edx,1),%edx
08536a68 +0x1e6:  add    $0x54,%edx
08536a6b +0x1e9:  flds   0xc(%eax,%edx,4)
08536a6f +0x1ed:  fmulp  %st,%st(1)
08536a71 +0x1ef:  mov    -0x44(%ebp),%ecx
08536a74 +0x1f2:  movzbl -0x1dc(%ebp),%edx
08536a7b +0x1f9:  mov    0x8(%ebp),%eax
08536a7e +0x1fc:  shl    $0x2,%ecx
08536a81 +0x1ff:  lea    (%ecx,%edx,1),%edx
08536a84 +0x202:  add    $0x28,%edx
08536a87 +0x205:  flds   0x8(%eax,%edx,4)
08536a8b +0x209:  fmulp  %st,%st(1)
08536a8d +0x20b:  fnstcw -0x1e6(%ebp)
08536a93 +0x211:  movzwl -0x1e6(%ebp),%eax
08536a9a +0x218:  mov    $0xc,%ah
08536a9c +0x21a:  mov    %ax,-0x1e8(%ebp)
08536aa3 +0x221:  fldcw  -0x1e8(%ebp)
08536aa9 +0x227:  fistpl -0x38(%ebp)
08536aac +0x22a:  fldcw  -0x1e6(%ebp)
08536ab2 +0x230:  mov    -0x38(%ebp),%eax
08536ab5 +0x233:  mov    %eax,%ecx
08536ab7 +0x235:  imul   0x28(%ebp),%ecx
08536abb +0x239:  mov    $0x51eb851f,%edx
08536ac0 +0x23e:  mov    %ecx,%eax
08536ac2 +0x240:  imul   %edx
08536ac4 +0x242:  sar    $0x5,%edx
08536ac7 +0x245:  mov    %ecx,%eax
08536ac9 +0x247:  sar    $0x1f,%eax
08536acc +0x24a:  mov    %edx,%ecx
08536ace +0x24c:  sub    %eax,%ecx
08536ad0 +0x24e:  mov    %ecx,%eax
08536ad2 +0x250:  mov    %eax,-0x38(%ebp)
08536ad5 +0x253:  mov    0x8(%ebp),%eax
08536ad8 +0x256:  add    $0x8,%eax
08536adb +0x259:  movl   $0x2710,0x8(%esp)
08536ae3 +0x261:  movl   $0x0,0x4(%esp)
08536aeb +0x269:  mov    %eax,(%esp)
08536aee +0x26c:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08536af3 +0x271:  mov    %eax,-0x34(%ebp)
08536af6 +0x274:  mov    -0x38(%ebp),%eax
08536af9 +0x277:  cmp    -0x34(%ebp),%eax
08536afc +0x27a:  jl     08536d7f <+0x4fd>
08536b02 +0x280:  mov    0x8(%ebp),%eax
08536b05 +0x283:  add    $0x8,%eax
08536b08 +0x286:  movl   $0xf4240,0x8(%esp)
08536b10 +0x28e:  movl   $0x1,0x4(%esp)
08536b18 +0x296:  mov    %eax,(%esp)
08536b1b +0x299:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
08536b20 +0x29e:  mov    %eax,-0x30(%ebp)
08536b23 +0x2a1:  mov    0x2c(%ebp),%eax
08536b26 +0x2a4:  lea    0xc(%eax),%edx
08536b29 +0x2a7:  mov    -0x44(%ebp),%eax
08536b2c +0x2aa:  mov    %eax,0xc(%esp)
08536b30 +0x2ae:  mov    -0x30(%ebp),%eax
08536b33 +0x2b1:  mov    %eax,0x8(%esp)
08536b37 +0x2b5:  mov    -0x3c(%ebp),%eax
08536b3a +0x2b8:  mov    %eax,0x4(%esp)
08536b3e +0x2bc:  mov    %edx,(%esp)
08536b41 +0x2bf:  call   08550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>  ; CLuckPoint::GetItemRarity(int*, int, int)
08536b46 +0x2c4:  mov    %eax,-0x2c(%ebp)
08536b49 +0x2c7:  mov    -0x44(%ebp),%ebx
08536b4c +0x2ca:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536b51 +0x2cf:  mov    %eax,(%esp)
08536b54 +0x2d2:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
08536b59 +0x2d7:  mov    -0x2c(%ebp),%edx
08536b5c +0x2da:  mov    %edx,0xc(%esp)
08536b60 +0x2de:  mov    %ebx,0x8(%esp)
08536b64 +0x2e2:  movl   $0x0,0x4(%esp)
08536b6c +0x2ea:  mov    %eax,(%esp)
08536b6f +0x2ed:  call   085342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>  ; WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t, WongWork::eItemDropType_t, ENUM_RARITY)
08536b74 +0x2f2:  movzbl -0x1e0(%ebp),%ebx
08536b7b +0x2f9:  movzbl -0x1d8(%ebp),%ecx
08536b82 +0x300:  movzbl -0x1cc(%ebp),%edx
08536b89 +0x307:  mov    -0x44(%ebp),%eax
08536b8c +0x30a:  mov    0x8(%ebp),%esi
08536b8f +0x30d:  add    $0x340,%esi
08536b95 +0x313:  mov    %ebx,0x14(%esp)
08536b99 +0x317:  mov    %ecx,0x10(%esp)
08536b9d +0x31b:  mov    %edx,0xc(%esp)
08536ba1 +0x31f:  mov    -0x2c(%ebp),%edx
08536ba4 +0x322:  mov    %edx,0x8(%esp)
08536ba8 +0x326:  mov    %eax,0x4(%esp)
08536bac +0x32a:  mov    %esi,(%esp)
08536baf +0x32d:  call   08534fce <_ZN8WongWork35CSecialIMonsterDropItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi23ENUM_DUNGEON_DIFFICULTY27ENUM_ITEM_DROP_DUNGEON_TYPE>  ; WongWork::CSecialIMonsterDropItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int, ENUM_DUNGEON_DIFFICULTY, ENUM_ITEM_DROP_DUNGEON_TYPE)
08536bb4 +0x332:  mov    %eax,-0x28(%ebp)
08536bb7 +0x335:  cmpl   $0xffffffff,-0x28(%ebp)
08536bbb +0x339:  je     08536d82 <+0x500>
08536bc1 +0x33f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536bc6 +0x344:  mov    0xc(%eax),%eax
08536bc9 +0x347:  mov    -0x28(%ebp),%edx
08536bcc +0x34a:  mov    %edx,0x4(%esp)
08536bd0 +0x34e:  mov    %eax,(%esp)
08536bd3 +0x351:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08536bd8 +0x356:  mov    %eax,-0x24(%ebp)
08536bdb +0x359:  cmpl   $0x0,-0x24(%ebp)
08536bdf +0x35d:  je     08536d85 <+0x503>
08536be5 +0x363:  cmpl   $0x2,-0x44(%ebp)
08536be9 +0x367:  jne    08536cd2 <+0x450>
08536bef +0x36d:  lea    -0x1b9(%ebp),%edx
08536bf5 +0x373:  mov    $0x100,%ebx
08536bfa +0x378:  mov    $0x0,%eax
08536bff +0x37d:  mov    %edx,%ecx
08536c01 +0x37f:  and    $0x1,%ecx
08536c04 +0x382:  test   %ecx,%ecx
08536c06 +0x384:  je     08536c10 <+0x38e>
08536c08 +0x386:  mov    %al,(%edx)
08536c0a +0x388:  add    $0x1,%edx
08536c0d +0x38b:  sub    $0x1,%ebx
08536c10 +0x38e:  mov    %edx,%ecx
08536c12 +0x390:  and    $0x2,%ecx
08536c15 +0x393:  test   %ecx,%ecx
08536c17 +0x395:  je     08536c22 <+0x3a0>
08536c19 +0x397:  mov    %ax,(%edx)
08536c1c +0x39a:  add    $0x2,%edx
08536c1f +0x39d:  sub    $0x2,%ebx
08536c22 +0x3a0:  mov    %ebx,%ecx
08536c24 +0x3a2:  shr    $0x2,%ecx
08536c27 +0x3a5:  mov    %edx,%edi
08536c29 +0x3a7:  rep stos %eax,%es:(%edi)
08536c2b +0x3a9:  mov    %edi,%edx
08536c2d +0x3ab:  mov    %ebx,%ecx
08536c2f +0x3ad:  and    $0x2,%ecx
08536c32 +0x3b0:  test   %ecx,%ecx
08536c34 +0x3b2:  je     08536c3c <+0x3ba>
08536c36 +0x3b4:  mov    %ax,(%edx)
08536c39 +0x3b7:  add    $0x2,%edx
08536c3c +0x3ba:  mov    %ebx,%ecx
08536c3e +0x3bc:  and    $0x1,%ecx
08536c41 +0x3bf:  test   %ecx,%ecx
08536c43 +0x3c1:  je     08536c4a <+0x3c8>
08536c45 +0x3c3:  mov    %al,(%edx)
08536c47 +0x3c5:  add    $0x1,%edx
08536c4a +0x3c8:  movzbl -0x1dc(%ebp),%esi
08536c51 +0x3cf:  movzbl -0x1d8(%ebp),%ebx
08536c58 +0x3d6:  movzbl -0x1d4(%ebp),%ecx
08536c5f +0x3dd:  movsbl -0x1d0(%ebp),%edx
08536c66 +0x3e4:  movzbl -0x1cc(%ebp),%eax
08536c6d +0x3eb:  mov    -0x38(%ebp),%edi
08536c70 +0x3ee:  mov    %edi,0x2c(%esp)
08536c74 +0x3f2:  mov    -0x34(%ebp),%edi
08536c77 +0x3f5:  mov    %edi,0x28(%esp)
08536c7b +0x3f9:  mov    0x28(%ebp),%edi
08536c7e +0x3fc:  mov    %edi,0x24(%esp)
08536c82 +0x400:  mov    0x20(%ebp),%edi
08536c85 +0x403:  mov    %edi,0x20(%esp)
08536c89 +0x407:  mov    %esi,0x1c(%esp)
08536c8d +0x40b:  mov    %ebx,0x18(%esp)
08536c91 +0x40f:  mov    %ecx,0x14(%esp)
08536c95 +0x413:  mov    %edx,0x10(%esp)
08536c99 +0x417:  mov    %eax,0xc(%esp)
08536c9d +0x41b:  mov    -0x28(%ebp),%eax
08536ca0 +0x41e:  mov    %eax,0x8(%esp)
08536ca4 +0x422:  movl   $"special monster drop rate : item_id(%d), mon_lv(%d), role(%d), dungeon_lv(%d), dungeon_diff(%d), member_cnt(%d), bourgeois_rate(%d), drop_rate(%d), rand_value(%d), drop_value(%d)",0x4(%esp)
08536cac +0x42a:  lea    -0x1b9(%ebp),%eax
08536cb2 +0x430:  mov    %eax,(%esp)
08536cb5 +0x433:  call   0807e440 <_init+0xd38>
08536cba +0x438:  mov    0x2c(%ebp),%eax
08536cbd +0x43b:  lea    0xc(%eax),%edx
08536cc0 +0x43e:  lea    -0x1b9(%ebp),%eax
08536cc6 +0x444:  mov    %eax,0x4(%esp)
08536cca +0x448:  mov    %edx,(%esp)
08536ccd +0x44b:  call   08550ef0 <_ZN10CLuckPoint16sendItemDropRateEPKc>  ; CLuckPoint::sendItemDropRate(char const*)
08536cd2 +0x450:  lea    -0xb9(%ebp),%eax
08536cd8 +0x456:  mov    %eax,(%esp)
08536cdb +0x459:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08536ce0 +0x45e:  mov    -0x28(%ebp),%eax
08536ce3 +0x461:  mov    %eax,-0xb7(%ebp)
08536ce9 +0x467:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536cee +0x46c:  mov    0xc(%eax),%eax
08536cf1 +0x46f:  movl   $0x1,0xc(%esp)
08536cf9 +0x477:  lea    -0xb9(%ebp),%edx
08536cff +0x47d:  mov    %edx,0x8(%esp)
08536d03 +0x481:  movl   $0x1,0x4(%esp)
08536d0b +0x489:  mov    %eax,(%esp)
08536d0e +0x48c:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
08536d13 +0x491:  mov    0x2c(%ebp),%eax
08536d16 +0x494:  mov    %eax,(%esp)
08536d19 +0x497:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
08536d1e +0x49c:  mov    %eax,%esi
08536d20 +0x49e:  mov    -0x24(%ebp),%eax
08536d23 +0x4a1:  mov    %eax,(%esp)
08536d26 +0x4a4:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08536d2b +0x4a9:  mov    %eax,%ebx
08536d2d +0x4ab:  mov    -0x24(%ebp),%eax
08536d30 +0x4ae:  mov    %eax,(%esp)
08536d33 +0x4b1:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08536d38 +0x4b6:  mov    %eax,%edx
08536d3a +0x4b8:  movzbl -0xb8(%ebp),%eax
08536d41 +0x4bf:  movzbl %al,%eax
08536d44 +0x4c2:  mov    0x2c(%ebp),%ecx
08536d47 +0x4c5:  add    $0xc,%ecx
08536d4a +0x4c8:  mov    %esi,0x10(%esp)
08536d4e +0x4cc:  mov    %ebx,0xc(%esp)
08536d52 +0x4d0:  mov    %edx,0x8(%esp)
08536d56 +0x4d4:  mov    %eax,0x4(%esp)
08536d5a +0x4d8:  mov    %ecx,(%esp)
08536d5d +0x4db:  call   08550b14 <_ZN10CLuckPoint12UseLuckPointEiiii>  ; CLuckPoint::UseLuckPoint(int, int, int, int)
08536d62 +0x4e0:  mov    0x2c(%ebp),%eax
08536d65 +0x4e3:  lea    -0xb9(%ebp),%edx
08536d6b +0x4e9:  mov    %edx,0x4(%esp)
08536d6f +0x4ed:  mov    %eax,(%esp)
08536d72 +0x4f0:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08536d77 +0x4f5:  mov    0x30(%ebp),%eax
08536d7a +0x4f8:  movb   $0x1,(%eax)
08536d7d +0x4fb:  jmp    08536d86 <+0x504>
08536d7f +0x4fd:  nop
08536d80 +0x4fe:  jmp    08536d86 <+0x504>
08536d82 +0x500:  nop
08536d83 +0x501:  jmp    08536d86 <+0x504>
08536d85 +0x503:  nop
08536d86 +0x504:  addl   $0x1,-0x44(%ebp)
08536d8a +0x508:  cmpl   $0x4,-0x44(%ebp)
08536d8e +0x50c:  setle  %al
08536d91 +0x50f:  test   %al,%al
08536d93 +0x511:  jne    08536949 <+0xc7>
08536d99 +0x517:  jmp    08536d9c <+0x51a>
08536d9b +0x519:  nop
08536d9c +0x51a:  add    $0x21c,%esp
08536da2 +0x520:  pop    %ebx
08536da3 +0x521:  pop    %esi
08536da4 +0x522:  pop    %edi
08536da5 +0x523:  pop    %ebp
08536da6 +0x524:  ret
08536da7 +0x525:  nop
```

## 反编译 C

```c
// WongWork::CSpecialMonsterDrop::_generateRandomItem @ 0x8536882

/* WongWork::CSpecialMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned
   char, unsigned char, int, unsigned char, int, WongWork::stGenerateResult_t&, bool&) */

void __thiscall
WongWork::CSpecialMonsterDrop::_generateRandomItem
          (CSpecialMonsterDrop *this,uchar param_1,char param_2,uchar param_3,uchar param_4,
          uchar param_5,int param_6,uchar param_7,int param_8,stGenerateResult_t *param_9,
          bool *param_10)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  CDataManager *pCVar4;
  CAutoMarketConditionsControl *this_00;
  int iVar5;
  int *piVar6;
  CItemGeneratorMgr *pCVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  longdouble lVar13;
  char local_1bd;
  char local_1bc [255];
  Inven_Item local_bd;
  byte local_bc;
  int local_bb;
  CSpecialMonsterDrop local_80 [24];
  undefined4 local_68;
  undefined4 local_64;
  int local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_48;
  float local_44;
  CSpecialMonsterDrop *local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  CItem *local_28;
  double local_24;
  
  bVar12 = 0;
  local_4c = _getGenItemProbIdx(this,(uint)param_3);
  if (-1 < (int)local_4c) {
    puVar2 = (undefined4 *)
             std::
             vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
             ::operator[]((vector<WongWork::CSpecialMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CSpecialMonsterDrop::stGenItemProb_t>>
                           *)(this + 0x24),local_4c);
    local_68 = *puVar2;
    local_64 = puVar2[1];
    local_60[0] = puVar2[2];
    local_60[1] = puVar2[3];
    local_60[2] = puVar2[4];
    local_60[3] = puVar2[5];
    local_50 = puVar2[6];
    for (local_48 = 1; local_48 < 5; local_48 = local_48 + 1) {
      local_44 = 1.0;
      uVar3 = 0;
      do {
        *(undefined4 *)(local_80 + uVar3) = 0;
        uVar3 = uVar3 + 4;
      } while (uVar3 < 0x18);
      local_40 = this + local_48 * 0x18 + 0x30;
      if (local_48 == 2) {
        pCVar4 = (CDataManager *)G_CDataManager();
        this_00 = (CAutoMarketConditionsControl *)
                  CDataManager::GetAutoMarketContitionsControl(pCVar4);
        lVar13 = (longdouble)CAutoMarketConditionsControl::GetItemDropRate(this_00,local_4c);
        local_44 = (float)lVar13;
        local_24 = 0.0;
        if (local_44 != 0.0) {
          local_24 = (double)(1.0 / local_44 - 1.0);
        }
        iVar5 = local_48 * 0x18;
        pCVar4 = (CDataManager *)G_CDataManager();
        piVar6 = (int *)CDataManager::GetAutoMarketContitionsControl(pCVar4);
        cVar1 = CAutoMarketConditionsControl::ChangeItemRarity
                          (piVar6,(int *)(this + iVar5 + 0x30),(int)local_80,
                           (double)CONCAT44(SUB84(local_24,0),6));
        if (cVar1 != '\0') {
          local_40 = local_80;
        }
      }
      local_3c = ((int)ROUND(*(float *)(this + (local_48 * 4 + (uint)(byte)(param_5 - 1) + 0x28) * 4
                                               + 8) *
                             *(float *)(this + (local_48 * 4 + (int)param_2 + 0x54) * 4 + 0xc) *
                             *(float *)(this + (local_48 * 5 + (uint)param_4 + 0x3c) * 4 + 8) *
                             (float)local_60[local_48] * local_44) * param_8) / 100;
      local_38 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,10000);
      if (local_38 <= local_3c) {
        local_34 = CGenerateRandomNumber::generateNumber
                             ((CGenerateRandomNumber *)(this + 8),1,1000000);
        local_30 = CLuckPoint::GetItemRarity
                             ((CLuckPoint *)(param_9 + 0xc),(int *)local_40,local_34,local_48);
        iVar5 = local_48;
        pCVar4 = (CDataManager *)G_CDataManager();
        pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar4);
        CItemGeneratorMgr::onTryGenerateRandomItem(pCVar7,0,iVar5,local_30);
        local_2c = CSecialIMonsterDropItemGenRateTable::chooseItem
                             ((CSecialIMonsterDropItemGenRateTable *)(this + 0x340),local_48,
                              local_30,param_1,param_4,param_7);
        if (local_2c != -1) {
          iVar5 = G_CDataManager();
          local_28 = (CItem *)CItemList::find_item(*(CItemList **)(iVar5 + 0xc),local_2c);
          if (local_28 != (CItem *)0x0) {
            if (local_48 == 2) {
              pcVar10 = &local_1bd;
              uVar3 = 0x100;
              bVar11 = ((uint)pcVar10 & 1) != 0;
              if (bVar11) {
                local_1bd = '\0';
                pcVar10 = local_1bc;
                uVar3 = 0xff;
              }
              if (((uint)pcVar10 & 2) != 0) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10 = pcVar10 + 2;
                uVar3 = uVar3 - 2;
              }
              for (uVar9 = uVar3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10[2] = '\0';
                pcVar10[3] = '\0';
                pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
              }
              if ((uVar3 & 2) != 0) {
                pcVar10[0] = '\0';
                pcVar10[1] = '\0';
                pcVar10 = pcVar10 + 2;
              }
              if (bVar11) {
                *pcVar10 = '\0';
              }
              sprintf(&local_1bd,
                      "special monster drop rate : item_id(%d), mon_lv(%d), role(%d), dungeon_lv(%d), dungeon_diff(%d), member_cnt(%d), bourgeois_rate(%d), drop_rate(%d), rand_value(%d), drop_value(%d)"
                      ,local_2c,(uint)param_1,(int)param_2,(uint)param_3,(uint)param_4,
                      (uint)(byte)(param_5 - 1),param_6,param_8,local_38,local_3c);
              CLuckPoint::sendItemDropRate((CLuckPoint *)(param_9 + 0xc),&local_1bd);
            }
            Inven_Item::Inven_Item(&local_bd);
            local_bb = local_2c;
            iVar5 = G_CDataManager();
            CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,&local_bd,1);
            std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_9);
            iVar5 = CItem::get_grade(local_28);
            iVar8 = CItem::get_rarity(local_28);
            CLuckPoint::UseLuckPoint((int)(param_9 + 0xc),(uint)local_bc,iVar8,iVar5);
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_9,&local_bd);
            *param_10 = true;
          }
        }
      }
    }
  }
  return;
}
```
