# ProcUpgrade

`_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard`

`WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x0854779c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854779c  _ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard
#           WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*)
# range [0x0854779c, 0x08548c3b]
0854779c +0x0000:  push   %ebp
0854779d +0x0001:  mov    %esp,%ebp
0854779f +0x0003:  push   %edi
085477a0 +0x0004:  push   %esi
085477a1 +0x0005:  push   %ebx
085477a2 +0x0006:  sub    $0x32c,%esp
085477a8 +0x000c:  mov    0xc(%ebp),%eax
085477ab +0x000f:  mov    %eax,(%esp)
085477ae +0x0012:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085477b3 +0x0017:  mov    %eax,-0x50(%ebp)
085477b6 +0x001a:  mov    0x10(%ebp),%eax
085477b9 +0x001d:  movzwl 0x1b(%eax),%eax
085477bd +0x0021:  movzwl %ax,%edx
085477c0 +0x0024:  lea    -0x121(%ebp),%eax
085477c6 +0x002a:  mov    %edx,0xc(%esp)
085477ca +0x002e:  movl   $0x1,0x8(%esp)
085477d2 +0x0036:  mov    -0x50(%ebp),%edx
085477d5 +0x0039:  mov    %edx,0x4(%esp)
085477d9 +0x003d:  mov    %eax,(%esp)
085477dc +0x0040:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085477e1 +0x0045:  sub    $0x4,%esp
085477e4 +0x0048:  lea    -0x121(%ebp),%eax
085477ea +0x004e:  mov    %eax,(%esp)
085477ed +0x0051:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
085477f2 +0x0056:  test   %al,%al
085477f4 +0x0058:  je     08547800 <+0x64>
085477f6 +0x005a:  mov    $0x4,%eax
085477fb +0x005f:  jmp    08548c30 <+0x1494>
08547800 +0x0064:  mov    -0x11f(%ebp),%edx
08547806 +0x006a:  mov    0x10(%ebp),%eax
08547809 +0x006d:  mov    0x1d(%eax),%eax
0854780c +0x0070:  cmp    %eax,%edx
0854780e +0x0072:  je     0854781a <+0x7e>
08547810 +0x0074:  mov    $0x4,%eax
08547815 +0x0079:  jmp    08548c30 <+0x1494>
0854781a +0x007e:  lea    -0x15e(%ebp),%eax
08547820 +0x0084:  mov    %eax,(%esp)
08547823 +0x0087:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08547828 +0x008c:  mov    0x10(%ebp),%eax
0854782b +0x008f:  movzwl 0x23(%eax),%eax
0854782f +0x0093:  movzwl %ax,%edx
08547832 +0x0096:  lea    -0x2c8(%ebp),%eax
08547838 +0x009c:  mov    %edx,0xc(%esp)
0854783c +0x00a0:  movl   $0x1,0x8(%esp)
08547844 +0x00a8:  mov    -0x50(%ebp),%edx
08547847 +0x00ab:  mov    %edx,0x4(%esp)
0854784b +0x00af:  mov    %eax,(%esp)
0854784e +0x00b2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08547853 +0x00b7:  sub    $0x4,%esp
08547856 +0x00ba:  mov    -0x2c8(%ebp),%eax
0854785c +0x00c0:  mov    %eax,-0x15e(%ebp)
08547862 +0x00c6:  mov    -0x2c4(%ebp),%eax
08547868 +0x00cc:  mov    %eax,-0x15a(%ebp)
0854786e +0x00d2:  mov    -0x2c0(%ebp),%eax
08547874 +0x00d8:  mov    %eax,-0x156(%ebp)
0854787a +0x00de:  mov    -0x2bc(%ebp),%eax
08547880 +0x00e4:  mov    %eax,-0x152(%ebp)
08547886 +0x00ea:  mov    -0x2b8(%ebp),%eax
0854788c +0x00f0:  mov    %eax,-0x14e(%ebp)
08547892 +0x00f6:  mov    -0x2b4(%ebp),%eax
08547898 +0x00fc:  mov    %eax,-0x14a(%ebp)
0854789e +0x0102:  mov    -0x2b0(%ebp),%eax
085478a4 +0x0108:  mov    %eax,-0x146(%ebp)
085478aa +0x010e:  mov    -0x2ac(%ebp),%eax
085478b0 +0x0114:  mov    %eax,-0x142(%ebp)
085478b6 +0x011a:  mov    -0x2a8(%ebp),%eax
085478bc +0x0120:  mov    %eax,-0x13e(%ebp)
085478c2 +0x0126:  mov    -0x2a4(%ebp),%eax
085478c8 +0x012c:  mov    %eax,-0x13a(%ebp)
085478ce +0x0132:  mov    -0x2a0(%ebp),%eax
085478d4 +0x0138:  mov    %eax,-0x136(%ebp)
085478da +0x013e:  mov    -0x29c(%ebp),%eax
085478e0 +0x0144:  mov    %eax,-0x132(%ebp)
085478e6 +0x014a:  mov    -0x298(%ebp),%eax
085478ec +0x0150:  mov    %eax,-0x12e(%ebp)
085478f2 +0x0156:  mov    -0x294(%ebp),%eax
085478f8 +0x015c:  mov    %eax,-0x12a(%ebp)
085478fe +0x0162:  mov    -0x290(%ebp),%eax
08547904 +0x0168:  mov    %eax,-0x126(%ebp)
0854790a +0x016e:  movzbl -0x28c(%ebp),%eax
08547911 +0x0175:  mov    %al,-0x122(%ebp)
08547917 +0x017b:  lea    -0x15e(%ebp),%eax
0854791d +0x0181:  mov    %eax,(%esp)
08547920 +0x0184:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08547925 +0x0189:  test   %al,%al
08547927 +0x018b:  je     08547933 <+0x197>
08547929 +0x018d:  mov    $0x16,%eax
0854792e +0x0192:  jmp    08548c30 <+0x1494>
08547933 +0x0197:  mov    -0x15c(%ebp),%edx
08547939 +0x019d:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
0854793e +0x01a2:  mov    %edx,0x8(%esp)
08547942 +0x01a6:  lea    -0x121(%ebp),%edx
08547948 +0x01ac:  mov    %edx,0x4(%esp)
0854794c +0x01b0:  mov    %eax,(%esp)
0854794f +0x01b3:  call   080f4f62 <_ZN17Event_Upgrade_Jar18CheckMaxLuckyLevelER10Inven_Itemm>  ; Event_Upgrade_Jar::CheckMaxLuckyLevel(Inven_Item&, unsigned long)
08547954 +0x01b8:  xor    $0x1,%eax
08547957 +0x01bb:  test   %al,%al
08547959 +0x01bd:  je     08547965 <+0x1c9>
0854795b +0x01bf:  mov    $0x3f4,%eax
08547960 +0x01c4:  jmp    08548c30 <+0x1494>
08547965 +0x01c9:  mov    -0x15c(%ebp),%edx
0854796b +0x01cf:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
08547970 +0x01d4:  mov    %edx,0x4(%esp)
08547974 +0x01d8:  mov    %eax,(%esp)
08547977 +0x01db:  call   080f4d20 <_ZN17Event_Upgrade_Jar18CheckMaterialIndexEm>  ; Event_Upgrade_Jar::CheckMaterialIndex(unsigned long)
0854797c +0x01e0:  movl   $0x0,-0xdc(%ebp)
08547986 +0x01ea:  lea    -0xdc(%ebp),%eax
0854798c +0x01f0:  mov    %eax,0xc(%esp)
08547990 +0x01f4:  lea    -0x15e(%ebp),%eax
08547996 +0x01fa:  mov    %eax,0x8(%esp)
0854799a +0x01fe:  lea    -0x121(%ebp),%eax
085479a0 +0x0204:  mov    %eax,0x4(%esp)
085479a4 +0x0208:  mov    0x8(%ebp),%eax
085479a7 +0x020b:  mov    %eax,(%esp)
085479aa +0x020e:  call   08548e68 <_ZN8WongWork12CItemUpgrade29_getUpgradeCountByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR>  ; WongWork::CItemUpgrade::_getUpgradeCountByUpgradeItem(Inven_Item const&, Inven_Item const&, ENUM_ERROR&)
085479af +0x0213:  mov    0x10(%ebp),%edx
085479b2 +0x0216:  mov    %ax,0x25(%edx)
085479b6 +0x021a:  mov    -0xdc(%ebp),%eax
085479bc +0x0220:  test   %eax,%eax
085479be +0x0222:  je     085479cb <+0x22f>
085479c0 +0x0224:  mov    -0xdc(%ebp),%eax
085479c6 +0x022a:  jmp    08548c30 <+0x1494>
085479cb +0x022f:  lea    -0xdc(%ebp),%eax
085479d1 +0x0235:  mov    %eax,0xc(%esp)
085479d5 +0x0239:  lea    -0x15e(%ebp),%eax
085479db +0x023f:  mov    %eax,0x8(%esp)
085479df +0x0243:  lea    -0x121(%ebp),%eax
085479e5 +0x0249:  mov    %eax,0x4(%esp)
085479e9 +0x024d:  mov    0x8(%ebp),%eax
085479ec +0x0250:  mov    %eax,(%esp)
085479ef +0x0253:  call   08548ffa <_ZN8WongWork12CItemUpgrade28_getUpgradeRateByUpgradeItemERK10Inven_ItemS3_R10ENUM_ERROR>  ; WongWork::CItemUpgrade::_getUpgradeRateByUpgradeItem(Inven_Item const&, Inven_Item const&, ENUM_ERROR&)
085479f4 +0x0258:  mov    0x10(%ebp),%edx
085479f7 +0x025b:  mov    %al,0x27(%edx)
085479fa +0x025e:  mov    -0xdc(%ebp),%eax
08547a00 +0x0264:  test   %eax,%eax
08547a02 +0x0266:  je     08547a0f <+0x273>
08547a04 +0x0268:  mov    -0xdc(%ebp),%eax
08547a0a +0x026e:  jmp    08548c30 <+0x1494>
08547a0f +0x0273:  mov    -0x11f(%ebp),%eax
08547a15 +0x0279:  mov    %eax,%ebx
08547a17 +0x027b:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08547a1c +0x0280:  mov    %ebx,0x4(%esp)
08547a20 +0x0284:  mov    %eax,(%esp)
08547a23 +0x0287:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08547a28 +0x028c:  mov    %eax,-0x4c(%ebp)
08547a2b +0x028f:  cmpl   $0x0,-0x4c(%ebp)
08547a2f +0x0293:  jne    08547a3b <+0x29f>
08547a31 +0x0295:  mov    $0x4,%eax
08547a36 +0x029a:  jmp    08548c30 <+0x1494>
08547a3b +0x029f:  lea    -0x19b(%ebp),%eax
08547a41 +0x02a5:  mov    %eax,(%esp)
08547a44 +0x02a8:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08547a49 +0x02ad:  movb   $0x0,-0x45(%ebp)
08547a4d +0x02b1:  mov    0x10(%ebp),%eax
08547a50 +0x02b4:  movzwl 0x21(%eax),%eax
08547a54 +0x02b8:  cmp    $0xffff,%ax
08547a58 +0x02bc:  je     08547c80 <+0x4e4>
08547a5e +0x02c2:  mov    -0x4c(%ebp),%eax
08547a61 +0x02c5:  mov    (%eax),%eax
08547a63 +0x02c7:  add    $0x44,%eax
08547a66 +0x02ca:  mov    (%eax),%edx
08547a68 +0x02cc:  mov    -0x4c(%ebp),%eax
08547a6b +0x02cf:  mov    %eax,(%esp)
08547a6e +0x02d2:  call   *%edx
08547a70 +0x02d4:  xor    $0x1,%eax
08547a73 +0x02d7:  test   %al,%al
08547a75 +0x02d9:  je     08547a81 <+0x2e5>
08547a77 +0x02db:  mov    $0xea,%eax
08547a7c +0x02e0:  jmp    08548c30 <+0x1494>
08547a81 +0x02e5:  mov    0x10(%ebp),%eax
08547a84 +0x02e8:  movzwl 0x21(%eax),%eax
08547a88 +0x02ec:  movzwl %ax,%edx
08547a8b +0x02ef:  lea    -0x2c8(%ebp),%eax
08547a91 +0x02f5:  mov    %edx,0xc(%esp)
08547a95 +0x02f9:  movl   $0x1,0x8(%esp)
08547a9d +0x0301:  mov    -0x50(%ebp),%edx
08547aa0 +0x0304:  mov    %edx,0x4(%esp)
08547aa4 +0x0308:  mov    %eax,(%esp)
08547aa7 +0x030b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08547aac +0x0310:  sub    $0x4,%esp
08547aaf +0x0313:  mov    -0x2c8(%ebp),%eax
08547ab5 +0x0319:  mov    %eax,-0x19b(%ebp)
08547abb +0x031f:  mov    -0x2c4(%ebp),%eax
08547ac1 +0x0325:  mov    %eax,-0x197(%ebp)
08547ac7 +0x032b:  mov    -0x2c0(%ebp),%eax
08547acd +0x0331:  mov    %eax,-0x193(%ebp)
08547ad3 +0x0337:  mov    -0x2bc(%ebp),%eax
08547ad9 +0x033d:  mov    %eax,-0x18f(%ebp)
08547adf +0x0343:  mov    -0x2b8(%ebp),%eax
08547ae5 +0x0349:  mov    %eax,-0x18b(%ebp)
08547aeb +0x034f:  mov    -0x2b4(%ebp),%eax
08547af1 +0x0355:  mov    %eax,-0x187(%ebp)
08547af7 +0x035b:  mov    -0x2b0(%ebp),%eax
08547afd +0x0361:  mov    %eax,-0x183(%ebp)
08547b03 +0x0367:  mov    -0x2ac(%ebp),%eax
08547b09 +0x036d:  mov    %eax,-0x17f(%ebp)
08547b0f +0x0373:  mov    -0x2a8(%ebp),%eax
08547b15 +0x0379:  mov    %eax,-0x17b(%ebp)
08547b1b +0x037f:  mov    -0x2a4(%ebp),%eax
08547b21 +0x0385:  mov    %eax,-0x177(%ebp)
08547b27 +0x038b:  mov    -0x2a0(%ebp),%eax
08547b2d +0x0391:  mov    %eax,-0x173(%ebp)
08547b33 +0x0397:  mov    -0x29c(%ebp),%eax
08547b39 +0x039d:  mov    %eax,-0x16f(%ebp)
08547b3f +0x03a3:  mov    -0x298(%ebp),%eax
08547b45 +0x03a9:  mov    %eax,-0x16b(%ebp)
08547b4b +0x03af:  mov    -0x294(%ebp),%eax
08547b51 +0x03b5:  mov    %eax,-0x167(%ebp)
08547b57 +0x03bb:  mov    -0x290(%ebp),%eax
08547b5d +0x03c1:  mov    %eax,-0x163(%ebp)
08547b63 +0x03c7:  movzbl -0x28c(%ebp),%eax
08547b6a +0x03ce:  mov    %al,-0x15f(%ebp)
08547b70 +0x03d4:  lea    -0x19b(%ebp),%eax
08547b76 +0x03da:  mov    %eax,(%esp)
08547b79 +0x03dd:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08547b7e +0x03e2:  test   %al,%al
08547b80 +0x03e4:  je     08547b8c <+0x3f0>
08547b82 +0x03e6:  mov    $0x4,%eax
08547b87 +0x03eb:  jmp    08548c30 <+0x1494>
08547b8c +0x03f0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08547b91 +0x03f5:  add    $0x4d0,%eax
08547b96 +0x03fa:  mov    %eax,-0x30(%ebp)
08547b99 +0x03fd:  mov    -0x199(%ebp),%eax
08547b9f +0x0403:  mov    %eax,-0xd8(%ebp)
08547ba5 +0x0409:  lea    -0xe0(%ebp),%eax
08547bab +0x040f:  lea    -0xd8(%ebp),%edx
08547bb1 +0x0415:  mov    %edx,0x8(%esp)
08547bb5 +0x0419:  mov    -0x30(%ebp),%edx
08547bb8 +0x041c:  mov    %edx,0x4(%esp)
08547bbc +0x0420:  mov    %eax,(%esp)
08547bbf +0x0423:  call   0854b912 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x79a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x79a
08547bc4 +0x0428:  sub    $0x4,%esp
08547bc7 +0x042b:  lea    -0xd4(%ebp),%eax
08547bcd +0x0431:  mov    -0x30(%ebp),%edx
08547bd0 +0x0434:  mov    %edx,0x4(%esp)
08547bd4 +0x0438:  mov    %eax,(%esp)
08547bd7 +0x043b:  call   0854b93e <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x7c6>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x7c6
08547bdc +0x0440:  sub    $0x4,%esp
08547bdf +0x0443:  lea    -0xd4(%ebp),%eax
08547be5 +0x0449:  mov    %eax,0x4(%esp)
08547be9 +0x044d:  lea    -0xe0(%ebp),%eax
08547bef +0x0453:  mov    %eax,(%esp)
08547bf2 +0x0456:  call   0854b964 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x7ec>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x7ec
08547bf7 +0x045b:  test   %al,%al
08547bf9 +0x045d:  je     08547c05 <+0x469>
08547bfb +0x045f:  mov    $0x9,%eax
08547c00 +0x0464:  jmp    08548c30 <+0x1494>
08547c05 +0x0469:  lea    -0x121(%ebp),%eax
08547c0b +0x046f:  mov    %eax,(%esp)
08547c0e +0x0472:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08547c13 +0x0477:  mov    %eax,%ebx
08547c15 +0x0479:  lea    -0xe0(%ebp),%eax
08547c1b +0x047f:  mov    %eax,(%esp)
08547c1e +0x0482:  call   0854b978 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x800>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x800
08547c23 +0x0487:  movzbl 0x4(%eax),%eax
08547c27 +0x048b:  cmp    %al,%bl
08547c29 +0x048d:  jb     08547c51 <+0x4b5>
08547c2b +0x048f:  lea    -0x121(%ebp),%eax
08547c31 +0x0495:  mov    %eax,(%esp)
08547c34 +0x0498:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08547c39 +0x049d:  mov    %eax,%ebx
08547c3b +0x049f:  lea    -0xe0(%ebp),%eax
08547c41 +0x04a5:  mov    %eax,(%esp)
08547c44 +0x04a8:  call   0854b978 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x800>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x800
08547c49 +0x04ad:  movzbl 0x5(%eax),%eax
08547c4d +0x04b1:  cmp    %al,%bl
08547c4f +0x04b3:  jbe    08547c58 <+0x4bc>
08547c51 +0x04b5:  mov    $0x1,%eax
08547c56 +0x04ba:  jmp    08547c5d <+0x4c1>
08547c58 +0x04bc:  mov    $0x0,%eax
08547c5d +0x04c1:  test   %al,%al
08547c5f +0x04c3:  je     08547c6b <+0x4cf>
08547c61 +0x04c5:  mov    $0x8,%eax
08547c66 +0x04ca:  jmp    08548c30 <+0x1494>
08547c6b +0x04cf:  lea    -0xe0(%ebp),%eax
08547c71 +0x04d5:  mov    %eax,(%esp)
08547c74 +0x04d8:  call   0854b978 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x800>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x800
08547c79 +0x04dd:  movzbl 0x6(%eax),%eax
08547c7d +0x04e1:  mov    %al,-0x45(%ebp)
08547c80 +0x04e4:  lea    -0x121(%ebp),%eax
08547c86 +0x04ea:  add    $0x11,%eax
08547c89 +0x04ed:  mov    %eax,(%esp)
08547c8c +0x04f0:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08547c91 +0x04f5:  test   %al,%al
08547c93 +0x04f7:  je     08547ca4 <+0x508>
08547c95 +0x04f9:  mov    &_ZN10GlobalData16s_itemAmplifier_E,%eax
08547c9a +0x04fe:  mov    %eax,(%esp)
08547c9d +0x0501:  call   0854b560 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3e8>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3e8
08547ca2 +0x0506:  jmp    08547cb2 <+0x516>
08547ca4 +0x0508:  mov    0x8(%ebp),%eax
08547ca7 +0x050b:  add    $0x4,%eax
08547caa +0x050e:  mov    %eax,(%esp)
08547cad +0x0511:  call   0854b382 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x20a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x20a
08547cb2 +0x0516:  mov    %eax,-0x44(%ebp)
08547cb5 +0x0519:  lea    -0x284(%ebp),%eax
08547cbb +0x051f:  mov    %eax,(%esp)
08547cbe +0x0522:  call   0854b282 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x10a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x10a
08547cc3 +0x0527:  mov    0xc(%ebp),%eax
08547cc6 +0x052a:  mov    %eax,(%esp)
08547cc9 +0x052d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08547cce +0x0532:  mov    %eax,0x14(%esp)
08547cd2 +0x0536:  lea    -0x284(%ebp),%eax
08547cd8 +0x053c:  mov    %eax,0x10(%esp)
08547cdc +0x0540:  mov    -0x44(%ebp),%eax
08547cdf +0x0543:  mov    %eax,0xc(%esp)
08547ce3 +0x0547:  mov    -0x4c(%ebp),%eax
08547ce6 +0x054a:  mov    %eax,0x8(%esp)
08547cea +0x054e:  lea    -0x121(%ebp),%eax
08547cf0 +0x0554:  mov    %eax,0x4(%esp)
08547cf4 +0x0558:  mov    0x8(%ebp),%eax
08547cf7 +0x055b:  mov    %eax,(%esp)
08547cfa +0x055e:  call   0854678a <_ZN8WongWork12CItemUpgrade15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK15upgrade_table_tP14upgrade_info_ti>  ; WongWork::CItemUpgrade::_GetUpgradeInfo(Inven_Item const*, CItem const*, upgrade_table_t const&, upgrade_info_t*, int)
08547cff +0x0563:  xor    $0x1,%eax
08547d02 +0x0566:  test   %al,%al
08547d04 +0x0568:  je     08547d10 <+0x574>
08547d06 +0x056a:  mov    $0xd,%eax
08547d0b +0x056f:  jmp    08548c30 <+0x1494>
08547d10 +0x0574:  mov    0x10(%ebp),%eax
08547d13 +0x0577:  movzwl 0x25(%eax),%eax
08547d17 +0x057b:  test   %ax,%ax
08547d1a +0x057e:  je     08547d3c <+0x5a0>
08547d1c +0x0580:  movl   $0x0,-0x250(%ebp)
08547d26 +0x058a:  movl   $0x1,-0x254(%ebp)
08547d30 +0x0594:  mov    -0x15c(%ebp),%eax
08547d36 +0x059a:  mov    %eax,-0x258(%ebp)
08547d3c +0x05a0:  lea    -0x121(%ebp),%eax
08547d42 +0x05a6:  mov    %eax,0x8(%esp)
08547d46 +0x05aa:  lea    -0x15e(%ebp),%eax
08547d4c +0x05b0:  mov    %eax,0x4(%esp)
08547d50 +0x05b4:  mov    0x8(%ebp),%eax
08547d53 +0x05b7:  mov    %eax,(%esp)
08547d56 +0x05ba:  call   08548c3c <_ZNK8WongWork12CItemUpgrade20_CheckTargetUsableLvERK10Inven_ItemS3_>  ; WongWork::CItemUpgrade::_CheckTargetUsableLv(Inven_Item const&, Inven_Item const&) const
08547d5b +0x05bf:  xor    $0x1,%eax
08547d5e +0x05c2:  test   %al,%al
08547d60 +0x05c4:  je     08547d6c <+0x5d0>
08547d62 +0x05c6:  mov    $0x13,%eax
08547d67 +0x05cb:  jmp    08548c30 <+0x1494>
08547d6c +0x05d0:  lea    -0x284(%ebp),%eax
08547d72 +0x05d6:  mov    %eax,0xc(%esp)
08547d76 +0x05da:  lea    -0x121(%ebp),%eax
08547d7c +0x05e0:  mov    %eax,0x8(%esp)
08547d80 +0x05e4:  lea    -0x15e(%ebp),%eax
08547d86 +0x05ea:  mov    %eax,0x4(%esp)
08547d8a +0x05ee:  mov    0x8(%ebp),%eax
08547d8d +0x05f1:  mov    %eax,(%esp)
08547d90 +0x05f4:  call   08548d3c <_ZNK8WongWork12CItemUpgrade24_ProcPortableUpgradeItemERK10Inven_ItemS3_R14upgrade_info_t>  ; WongWork::CItemUpgrade::_ProcPortableUpgradeItem(Inven_Item const&, Inven_Item const&, upgrade_info_t&) const
08547d95 +0x05f9:  mov    %eax,-0x40(%ebp)
08547d98 +0x05fc:  cmpl   $0x0,-0x40(%ebp)
08547d9c +0x0600:  je     08547da6 <+0x60a>
08547d9e +0x0602:  mov    -0x40(%ebp),%eax
08547da1 +0x0605:  jmp    08548c30 <+0x1494>
08547da6 +0x060a:  mov    -0x199(%ebp),%eax
08547dac +0x0610:  cmp    $0x28d30e,%eax
08547db1 +0x0615:  je     08547dc0 <+0x624>
08547db3 +0x0617:  mov    -0x199(%ebp),%eax
08547db9 +0x061d:  cmp    $0x28d30f,%eax
08547dbe +0x0622:  jne    08547dca <+0x62e>
08547dc0 +0x0624:  movl   $0x0,-0x250(%ebp)
08547dca +0x062e:  lea    -0x121(%ebp),%eax
08547dd0 +0x0634:  mov    %eax,(%esp)
08547dd3 +0x0637:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08547dd8 +0x063c:  movzbl %al,%ecx
08547ddb +0x063f:  mov    -0x15c(%ebp),%eax
08547de1 +0x0645:  mov    %eax,%edx
08547de3 +0x0647:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
08547de8 +0x064c:  mov    %ecx,0xc(%esp)
08547dec +0x0650:  lea    -0x284(%ebp),%ecx
08547df2 +0x0656:  mov    %ecx,0x8(%esp)
08547df6 +0x065a:  mov    %edx,0x4(%esp)
08547dfa +0x065e:  mov    %eax,(%esp)
08547dfd +0x0661:  call   080f4dac <_ZN17Event_Upgrade_Jar22SettingRecipeNUpConuntEiR14upgrade_info_th>  ; Event_Upgrade_Jar::SettingRecipeNUpConunt(int, upgrade_info_t&, unsigned char)
08547e02 +0x0666:  mov    0x10(%ebp),%eax
08547e05 +0x0669:  movzbl 0x1a(%eax),%eax
08547e09 +0x066d:  test   %al,%al
08547e0b +0x066f:  jne    08547e2a <+0x68e>
08547e0d +0x0671:  mov    -0x4c(%ebp),%eax
08547e10 +0x0674:  mov    (%eax),%eax
08547e12 +0x0676:  add    $0x30,%eax
08547e15 +0x0679:  mov    (%eax),%edx
08547e17 +0x067b:  mov    -0x4c(%ebp),%eax
08547e1a +0x067e:  mov    %eax,(%esp)
08547e1d +0x0681:  call   *%edx
08547e1f +0x0683:  test   %al,%al
08547e21 +0x0685:  je     08547e2a <+0x68e>
08547e23 +0x0687:  mov    $0x1,%eax
08547e28 +0x068c:  jmp    08547e2f <+0x693>
08547e2a +0x068e:  mov    $0x0,%eax
08547e2f +0x0693:  test   %al,%al
08547e31 +0x0695:  je     08547e3d <+0x6a1>
08547e33 +0x0697:  mov    $0x13,%eax
08547e38 +0x069c:  jmp    08548c30 <+0x1494>
08547e3d +0x06a1:  mov    0x10(%ebp),%eax
08547e40 +0x06a4:  movzbl 0x1a(%eax),%eax
08547e44 +0x06a8:  cmp    $0x1,%al
08547e46 +0x06aa:  jne    08547e65 <+0x6c9>
08547e48 +0x06ac:  mov    -0x4c(%ebp),%eax
08547e4b +0x06af:  mov    (%eax),%eax
08547e4d +0x06b1:  add    $0x34,%eax
08547e50 +0x06b4:  mov    (%eax),%edx
08547e52 +0x06b6:  mov    -0x4c(%ebp),%eax
08547e55 +0x06b9:  mov    %eax,(%esp)
08547e58 +0x06bc:  call   *%edx
08547e5a +0x06be:  test   %al,%al
08547e5c +0x06c0:  je     08547e65 <+0x6c9>
08547e5e +0x06c2:  mov    $0x1,%eax
08547e63 +0x06c7:  jmp    08547e6a <+0x6ce>
08547e65 +0x06c9:  mov    $0x0,%eax
08547e6a +0x06ce:  test   %al,%al
08547e6c +0x06d0:  je     08547e78 <+0x6dc>
08547e6e +0x06d2:  mov    $0x13,%eax
08547e73 +0x06d7:  jmp    08548c30 <+0x1494>
08547e78 +0x06dc:  mov    0x10(%ebp),%eax
08547e7b +0x06df:  movzwl 0x21(%eax),%eax
08547e7f +0x06e3:  cmp    $0xffff,%ax
08547e83 +0x06e7:  je     08547fe4 <+0x848>
08547e89 +0x06ed:  lea    -0x1d8(%ebp),%eax
08547e8f +0x06f3:  mov    %eax,(%esp)
08547e92 +0x06f6:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08547e97 +0x06fb:  mov    0x10(%ebp),%eax
08547e9a +0x06fe:  movzwl 0x21(%eax),%eax
08547e9e +0x0702:  movzwl %ax,%edx
08547ea1 +0x0705:  lea    -0x2c8(%ebp),%eax
08547ea7 +0x070b:  mov    %edx,0xc(%esp)
08547eab +0x070f:  movl   $0x1,0x8(%esp)
08547eb3 +0x0717:  mov    -0x50(%ebp),%edx
08547eb6 +0x071a:  mov    %edx,0x4(%esp)
08547eba +0x071e:  mov    %eax,(%esp)
08547ebd +0x0721:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08547ec2 +0x0726:  sub    $0x4,%esp
08547ec5 +0x0729:  mov    -0x2c8(%ebp),%eax
08547ecb +0x072f:  mov    %eax,-0x1d8(%ebp)
08547ed1 +0x0735:  mov    -0x2c4(%ebp),%eax
08547ed7 +0x073b:  mov    %eax,-0x1d4(%ebp)
08547edd +0x0741:  mov    -0x2c0(%ebp),%eax
08547ee3 +0x0747:  mov    %eax,-0x1d0(%ebp)
08547ee9 +0x074d:  mov    -0x2bc(%ebp),%eax
08547eef +0x0753:  mov    %eax,-0x1cc(%ebp)
08547ef5 +0x0759:  mov    -0x2b8(%ebp),%eax
08547efb +0x075f:  mov    %eax,-0x1c8(%ebp)
08547f01 +0x0765:  mov    -0x2b4(%ebp),%eax
08547f07 +0x076b:  mov    %eax,-0x1c4(%ebp)
08547f0d +0x0771:  mov    -0x2b0(%ebp),%eax
08547f13 +0x0777:  mov    %eax,-0x1c0(%ebp)
08547f19 +0x077d:  mov    -0x2ac(%ebp),%eax
08547f1f +0x0783:  mov    %eax,-0x1bc(%ebp)
08547f25 +0x0789:  mov    -0x2a8(%ebp),%eax
08547f2b +0x078f:  mov    %eax,-0x1b8(%ebp)
08547f31 +0x0795:  mov    -0x2a4(%ebp),%eax
08547f37 +0x079b:  mov    %eax,-0x1b4(%ebp)
08547f3d +0x07a1:  mov    -0x2a0(%ebp),%eax
08547f43 +0x07a7:  mov    %eax,-0x1b0(%ebp)
08547f49 +0x07ad:  mov    -0x29c(%ebp),%eax
08547f4f +0x07b3:  mov    %eax,-0x1ac(%ebp)
08547f55 +0x07b9:  mov    -0x298(%ebp),%eax
08547f5b +0x07bf:  mov    %eax,-0x1a8(%ebp)
08547f61 +0x07c5:  mov    -0x294(%ebp),%eax
08547f67 +0x07cb:  mov    %eax,-0x1a4(%ebp)
08547f6d +0x07d1:  mov    -0x290(%ebp),%eax
08547f73 +0x07d7:  mov    %eax,-0x1a0(%ebp)
08547f79 +0x07dd:  movzbl -0x28c(%ebp),%eax
08547f80 +0x07e4:  mov    %al,-0x19c(%ebp)
08547f86 +0x07ea:  mov    -0x1d6(%ebp),%eax
08547f8c +0x07f0:  cmp    $0x28d30f,%eax
08547f91 +0x07f5:  jne    08547fb6 <+0x81a>
08547f93 +0x07f7:  mov    0x10(%ebp),%eax
08547f96 +0x07fa:  movzbl 0x1a(%eax),%eax
08547f9a +0x07fe:  test   %al,%al
08547f9c +0x0800:  jne    08547faa <+0x80e>
08547f9e +0x0802:  movl   $0x32,-0x254(%ebp)
08547fa8 +0x080c:  jmp    08547fe4 <+0x848>
08547faa +0x080e:  movl   $0xa,-0x254(%ebp)
08547fb4 +0x0818:  jmp    08547fe4 <+0x848>
08547fb6 +0x081a:  mov    -0x1d6(%ebp),%eax
08547fbc +0x0820:  cmp    $0x28d30e,%eax
08547fc1 +0x0825:  jne    08547fe4 <+0x848>
08547fc3 +0x0827:  mov    0x10(%ebp),%eax
08547fc6 +0x082a:  movzbl 0x1a(%eax),%eax
08547fca +0x082e:  test   %al,%al
08547fcc +0x0830:  jne    08547fda <+0x83e>
08547fce +0x0832:  movl   $0x64,-0x254(%ebp)
08547fd8 +0x083c:  jmp    08547fe4 <+0x848>
08547fda +0x083e:  movl   $0x14,-0x254(%ebp)
08547fe4 +0x0848:  movl   $0x0,-0x3c(%ebp)
08547feb +0x084f:  lea    -0x284(%ebp),%eax
08547ff1 +0x0855:  mov    %eax,0x18(%esp)
08547ff5 +0x0859:  mov    -0x44(%ebp),%eax
08547ff8 +0x085c:  mov    %eax,0x14(%esp)
08547ffc +0x0860:  lea    -0x15e(%ebp),%eax
08548002 +0x0866:  mov    %eax,0x10(%esp)
08548006 +0x086a:  mov    -0x4c(%ebp),%eax
08548009 +0x086d:  mov    %eax,0xc(%esp)
0854800d +0x0871:  lea    -0x121(%ebp),%eax
08548013 +0x0877:  mov    %eax,0x8(%esp)
08548017 +0x087b:  mov    0xc(%ebp),%eax
0854801a +0x087e:  mov    %eax,0x4(%esp)
0854801e +0x0882:  mov    0x8(%ebp),%eax
08548021 +0x0885:  mov    %eax,(%esp)
08548024 +0x0888:  call   08546342 <_ZN8WongWork12CItemUpgrade15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK15upgrade_table_tRK14upgrade_info_t>  ; WongWork::CItemUpgrade::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, upgrade_table_t const&, upgrade_info_t const&)
08548029 +0x088d:  mov    %eax,-0x3c(%ebp)
0854802c +0x0890:  cmpl   $0x0,-0x3c(%ebp)
08548030 +0x0894:  setne  %al
08548033 +0x0897:  test   %al,%al
08548035 +0x0899:  je     0854803f <+0x8a3>
08548037 +0x089b:  mov    -0x3c(%ebp),%eax
0854803a +0x089e:  jmp    08548c30 <+0x1494>
0854803f +0x08a3:  mov    0x10(%ebp),%eax
08548042 +0x08a6:  movzbl 0x1a(%eax),%eax
08548046 +0x08aa:  test   %al,%al
08548048 +0x08ac:  jne    08548066 <+0x8ca>
0854804a +0x08ae:  lea    -0x121(%ebp),%eax
08548050 +0x08b4:  add    $0x11,%eax
08548053 +0x08b7:  mov    %eax,(%esp)
08548056 +0x08ba:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0854805b +0x08bf:  test   %al,%al
0854805d +0x08c1:  je     08548066 <+0x8ca>
0854805f +0x08c3:  mov    $0x1,%eax
08548064 +0x08c8:  jmp    0854806b <+0x8cf>
08548066 +0x08ca:  mov    $0x0,%eax
0854806b +0x08cf:  test   %al,%al
0854806d +0x08d1:  je     08548079 <+0x8dd>
0854806f +0x08d3:  mov    $0x17,%eax
08548074 +0x08d8:  jmp    08548c30 <+0x1494>
08548079 +0x08dd:  mov    0x10(%ebp),%eax
0854807c +0x08e0:  movzbl 0x1a(%eax),%eax
08548080 +0x08e4:  cmp    $0x1,%al
08548082 +0x08e6:  jne    085480a3 <+0x907>
08548084 +0x08e8:  lea    -0x121(%ebp),%eax
0854808a +0x08ee:  add    $0x11,%eax
0854808d +0x08f1:  mov    %eax,(%esp)
08548090 +0x08f4:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08548095 +0x08f9:  xor    $0x1,%eax
08548098 +0x08fc:  test   %al,%al
0854809a +0x08fe:  je     085480a3 <+0x907>
0854809c +0x0900:  mov    $0x1,%eax
085480a1 +0x0905:  jmp    085480a8 <+0x90c>
085480a3 +0x0907:  mov    $0x0,%eax
085480a8 +0x090c:  test   %al,%al
085480aa +0x090e:  je     085480b6 <+0x91a>
085480ac +0x0910:  mov    $0x17,%eax
085480b1 +0x0915:  jmp    08548c30 <+0x1494>
085480b6 +0x091a:  mov    0x14(%ebp),%eax
085480b9 +0x091d:  movl   $0x1,0x4(%esp)
085480c1 +0x0925:  mov    %eax,(%esp)
085480c4 +0x0928:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085480c9 +0x092d:  lea    -0x121(%ebp),%eax
085480cf +0x0933:  mov    %eax,(%esp)
085480d2 +0x0936:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085480d7 +0x093b:  movzbl %al,%eax
085480da +0x093e:  mov    %eax,-0x38(%ebp)
085480dd +0x0941:  movb   $0x0,-0x32(%ebp)
085480e1 +0x0945:  movb   $0x0,-0x31(%ebp)
085480e5 +0x0949:  mov    0x10(%ebp),%eax
085480e8 +0x094c:  movzwl 0x25(%eax),%eax
085480ec +0x0950:  test   %ax,%ax
085480ef +0x0953:  je     08548177 <+0x9db>
085480f5 +0x0959:  movb   $0x1,-0x32(%ebp)
085480f9 +0x095d:  movl   $0x63,-0xd0(%ebp)
08548103 +0x0967:  mov    0x8(%ebp),%eax
08548106 +0x096a:  mov    0x4e8(%eax),%eax
0854810c +0x0970:  lea    -0xd0(%ebp),%edx
08548112 +0x0976:  mov    %edx,0x4(%esp)
08548116 +0x097a:  mov    %eax,(%esp)
08548119 +0x097d:  call   080cbabe <_GLOBAL__I__ZN10BingoEventC2Ev+0x90b>  ; global constructors keyed to BingoEvent::BingoEvent()+0x90b
0854811e +0x0982:  mov    0x10(%ebp),%edx
08548121 +0x0985:  movzbl 0x27(%edx),%edx
08548125 +0x0989:  movzbl %dl,%edx
08548128 +0x098c:  cmp    %edx,%eax
0854812a +0x098e:  setb   %al
0854812d +0x0991:  test   %al,%al
0854812f +0x0993:  je     08548156 <+0x9ba>
08548131 +0x0995:  mov    0x10(%ebp),%eax
08548134 +0x0998:  movzwl 0x25(%eax),%eax
08548138 +0x099c:  movzbl %al,%eax
0854813b +0x099f:  mov    %eax,0x4(%esp)
0854813f +0x09a3:  lea    -0x121(%ebp),%eax
08548145 +0x09a9:  mov    %eax,(%esp)
08548148 +0x09ac:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
0854814d +0x09b1:  movb   $0x1,-0x31(%ebp)
08548151 +0x09b5:  jmp    085483a3 <+0xc07>
08548156 +0x09ba:  mov    -0x38(%ebp),%eax
08548159 +0x09bd:  movzbl %al,%eax
0854815c +0x09c0:  mov    %eax,0x4(%esp)
08548160 +0x09c4:  lea    -0x121(%ebp),%eax
08548166 +0x09ca:  mov    %eax,(%esp)
08548169 +0x09cd:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
0854816e +0x09d2:  movb   $0x0,-0x31(%ebp)
08548172 +0x09d6:  jmp    085483a3 <+0xc07>
08548177 +0x09db:  lea    -0x284(%ebp),%eax
0854817d +0x09e1:  mov    %eax,0xc(%esp)
08548181 +0x09e5:  lea    -0x121(%ebp),%eax
08548187 +0x09eb:  mov    %eax,0x8(%esp)
0854818b +0x09ef:  mov    0xc(%ebp),%eax
0854818e +0x09f2:  mov    %eax,0x4(%esp)
08548192 +0x09f6:  mov    0x8(%ebp),%eax
08548195 +0x09f9:  mov    %eax,(%esp)
08548198 +0x09fc:  call   0854755a <_ZN8WongWork12CItemUpgrade14_DoProcUpgradeEP5CUserP10Inven_ItemPK14upgrade_info_t>  ; WongWork::CItemUpgrade::_DoProcUpgrade(CUser*, Inven_Item*, upgrade_info_t const*)
0854819d +0x0a01:  mov    %al,-0x32(%ebp)
085481a0 +0x0a04:  movl   $0x0,-0x2c(%ebp)
085481a7 +0x0a0b:  mov    &_ZN10GlobalData15s_event_managerE,%eax
085481ac +0x0a10:  movl   $0x32,0x4(%esp)
085481b4 +0x0a18:  mov    %eax,(%esp)
085481b7 +0x0a1b:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
085481bc +0x0a20:  mov    (%eax),%edx
085481be +0x0a22:  add    $0x34,%edx
085481c1 +0x0a25:  mov    (%edx),%edx
085481c3 +0x0a27:  movl   $0x0,0x4(%esp)
085481cb +0x0a2f:  mov    %eax,(%esp)
085481ce +0x0a32:  call   *%edx
085481d0 +0x0a34:  test   %al,%al
085481d2 +0x0a36:  je     085481f3 <+0xa57>
085481d4 +0x0a38:  lea    -0x121(%ebp),%eax
085481da +0x0a3e:  add    $0x11,%eax
085481dd +0x0a41:  mov    %eax,(%esp)
085481e0 +0x0a44:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
085481e5 +0x0a49:  xor    $0x1,%eax
085481e8 +0x0a4c:  test   %al,%al
085481ea +0x0a4e:  je     085481f3 <+0xa57>
085481ec +0x0a50:  mov    $0x1,%eax
085481f1 +0x0a55:  jmp    085481f8 <+0xa5c>
085481f3 +0x0a57:  mov    $0x0,%eax
085481f8 +0x0a5c:  test   %al,%al
085481fa +0x0a5e:  je     08548263 <+0xac7>
085481fc +0x0a60:  mov    &_ZN10GlobalData15s_event_managerE,%eax
08548201 +0x0a65:  movl   $0x32,0x4(%esp)
08548209 +0x0a6d:  mov    %eax,(%esp)
0854820c +0x0a70:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
08548211 +0x0a75:  mov    %eax,(%esp)
08548214 +0x0a78:  call   0854b56e <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x3f6>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x3f6
08548219 +0x0a7d:  mov    %eax,-0x20(%ebp)
0854821c +0x0a80:  cmpl   $0x0,-0x20(%ebp)
08548220 +0x0a84:  jle    0854826c <+0xad0>
08548222 +0x0a86:  mov    -0x250(%ebp),%ebx
08548228 +0x0a8c:  mov    -0x250(%ebp),%eax
0854822e +0x0a92:  mov    %eax,%ecx
08548230 +0x0a94:  imul   -0x20(%ebp),%ecx
08548234 +0x0a98:  mov    $0x51eb851f,%edx
08548239 +0x0a9d:  mov    %ecx,%eax
0854823b +0x0a9f:  imul   %edx
0854823d +0x0aa1:  sar    $0x5,%edx
08548240 +0x0aa4:  mov    %ecx,%eax
08548242 +0x0aa6:  sar    $0x1f,%eax
08548245 +0x0aa9:  mov    %edx,%ecx
08548247 +0x0aab:  sub    %eax,%ecx
08548249 +0x0aad:  mov    %ecx,%eax
0854824b +0x0aaf:  mov    %ebx,%edx
0854824d +0x0ab1:  sub    %eax,%edx
0854824f +0x0ab3:  mov    %edx,%eax
08548251 +0x0ab5:  mov    %eax,-0x2c(%ebp)
08548254 +0x0ab8:  cmpl   $0x0,-0x2c(%ebp)
08548258 +0x0abc:  jns    0854826c <+0xad0>
0854825a +0x0abe:  movl   $0x0,-0x2c(%ebp)
08548261 +0x0ac5:  jmp    0854826c <+0xad0>
08548263 +0x0ac7:  mov    -0x250(%ebp),%eax
08548269 +0x0acd:  mov    %eax,-0x2c(%ebp)
0854826c +0x0ad0:  mov    0xc(%ebp),%eax
0854826f +0x0ad3:  mov    %eax,(%esp)
08548272 +0x0ad6:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08548277 +0x0adb:  lea    -0xca(%ebp),%edx
0854827d +0x0ae1:  movl   $0xb,0xc(%esp)
08548285 +0x0ae9:  movl   $0x0,0x8(%esp)
0854828d +0x0af1:  mov    %eax,0x4(%esp)
08548291 +0x0af5:  mov    %edx,(%esp)
08548294 +0x0af8:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08548299 +0x0afd:  sub    $0x4,%esp
0854829c +0x0b00:  mov    -0xc8(%ebp),%eax
085482a2 +0x0b06:  mov    %eax,-0x28(%ebp)
085482a5 +0x0b09:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085482aa +0x0b0e:  mov    -0x28(%ebp),%edx
085482ad +0x0b11:  mov    %edx,0x4(%esp)
085482b1 +0x0b15:  mov    %eax,(%esp)
085482b4 +0x0b18:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085482b9 +0x0b1d:  mov    %eax,-0x24(%ebp)
085482bc +0x0b20:  cmpl   $0x0,-0x24(%ebp)
085482c0 +0x0b24:  je     08548318 <+0xb7c>
085482c2 +0x0b26:  fildl  -0x2c(%ebp)
085482c5 +0x0b29:  fstps  -0x2dc(%ebp)
085482cb +0x0b2f:  fildl  -0x2c(%ebp)
085482ce +0x0b32:  fstps  -0x2d8(%ebp)
085482d4 +0x0b38:  mov    -0x24(%ebp),%eax
085482d7 +0x0b3b:  mov    %eax,(%esp)
085482da +0x0b3e:  call   0822ca80 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x212a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x212a
085482df +0x0b43:  fmuls  -0x2d8(%ebp)
085482e5 +0x0b49:  flds   ""
085482eb +0x0b4f:  fdivrp %st,%st(1)
085482ed +0x0b51:  fadds  -0x2dc(%ebp)
085482f3 +0x0b57:  fnstcw -0x2ca(%ebp)
085482f9 +0x0b5d:  movzwl -0x2ca(%ebp),%eax
08548300 +0x0b64:  mov    $0xc,%ah
08548302 +0x0b66:  mov    %ax,-0x2cc(%ebp)
08548309 +0x0b6d:  fldcw  -0x2cc(%ebp)
0854830f +0x0b73:  fistpl -0x2c(%ebp)
08548312 +0x0b76:  fldcw  -0x2ca(%ebp)
08548318 +0x0b7c:  lea    -0x121(%ebp),%eax
0854831e +0x0b82:  add    $0x11,%eax
08548321 +0x0b85:  mov    %eax,(%esp)
08548324 +0x0b88:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08548329 +0x0b8d:  test   %al,%al
0854832b +0x0b8f:  je     08548368 <+0xbcc>
0854832d +0x0b91:  mov    0xc(%ebp),%eax
08548330 +0x0b94:  mov    %eax,(%esp)
08548333 +0x0b97:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08548338 +0x0b9c:  movl   $0x1,0xc(%esp)
08548340 +0x0ba4:  movl   $0x2e,0x8(%esp)
08548348 +0x0bac:  mov    -0x2c(%ebp),%edx
0854834b +0x0baf:  mov    %edx,0x4(%esp)
0854834f +0x0bb3:  mov    %eax,(%esp)
08548352 +0x0bb6:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08548357 +0x0bbb:  xor    $0x1,%eax
0854835a +0x0bbe:  test   %al,%al
0854835c +0x0bc0:  je     085483a3 <+0xc07>
0854835e +0x0bc2:  mov    $0xa,%eax
08548363 +0x0bc7:  jmp    08548c30 <+0x1494>
08548368 +0x0bcc:  mov    0xc(%ebp),%eax
0854836b +0x0bcf:  mov    %eax,(%esp)
0854836e +0x0bd2:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08548373 +0x0bd7:  movl   $0x1,0xc(%esp)
0854837b +0x0bdf:  movl   $0xd,0x8(%esp)
08548383 +0x0be7:  mov    -0x2c(%ebp),%edx
08548386 +0x0bea:  mov    %edx,0x4(%esp)
0854838a +0x0bee:  mov    %eax,(%esp)
0854838d +0x0bf1:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
08548392 +0x0bf6:  xor    $0x1,%eax
08548395 +0x0bf9:  test   %al,%al
08548397 +0x0bfb:  je     085483a3 <+0xc07>
08548399 +0x0bfd:  mov    $0xa,%eax
0854839e +0x0c02:  jmp    08548c30 <+0x1494>
085483a3 +0x0c07:  mov    0x10(%ebp),%eax
085483a6 +0x0c0a:  movzwl 0x21(%eax),%eax
085483aa +0x0c0e:  cmp    $0xffff,%ax
085483ae +0x0c12:  je     08548590 <+0xdf4>
085483b4 +0x0c18:  lea    -0x215(%ebp),%eax
085483ba +0x0c1e:  mov    %eax,(%esp)
085483bd +0x0c21:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085483c2 +0x0c26:  mov    0x10(%ebp),%eax
085483c5 +0x0c29:  movzwl 0x21(%eax),%eax
085483c9 +0x0c2d:  movzwl %ax,%edx
085483cc +0x0c30:  lea    -0x2c8(%ebp),%eax
085483d2 +0x0c36:  mov    %edx,0xc(%esp)
085483d6 +0x0c3a:  movl   $0x1,0x8(%esp)
085483de +0x0c42:  mov    -0x50(%ebp),%edx
085483e1 +0x0c45:  mov    %edx,0x4(%esp)
085483e5 +0x0c49:  mov    %eax,(%esp)
085483e8 +0x0c4c:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085483ed +0x0c51:  sub    $0x4,%esp
085483f0 +0x0c54:  mov    -0x2c8(%ebp),%eax
085483f6 +0x0c5a:  mov    %eax,-0x215(%ebp)
085483fc +0x0c60:  mov    -0x2c4(%ebp),%eax
08548402 +0x0c66:  mov    %eax,-0x211(%ebp)
08548408 +0x0c6c:  mov    -0x2c0(%ebp),%eax
0854840e +0x0c72:  mov    %eax,-0x20d(%ebp)
08548414 +0x0c78:  mov    -0x2bc(%ebp),%eax
0854841a +0x0c7e:  mov    %eax,-0x209(%ebp)
08548420 +0x0c84:  mov    -0x2b8(%ebp),%eax
08548426 +0x0c8a:  mov    %eax,-0x205(%ebp)
0854842c +0x0c90:  mov    -0x2b4(%ebp),%eax
08548432 +0x0c96:  mov    %eax,-0x201(%ebp)
08548438 +0x0c9c:  mov    -0x2b0(%ebp),%eax
0854843e +0x0ca2:  mov    %eax,-0x1fd(%ebp)
08548444 +0x0ca8:  mov    -0x2ac(%ebp),%eax
0854844a +0x0cae:  mov    %eax,-0x1f9(%ebp)
08548450 +0x0cb4:  mov    -0x2a8(%ebp),%eax
08548456 +0x0cba:  mov    %eax,-0x1f5(%ebp)
0854845c +0x0cc0:  mov    -0x2a4(%ebp),%eax
08548462 +0x0cc6:  mov    %eax,-0x1f1(%ebp)
08548468 +0x0ccc:  mov    -0x2a0(%ebp),%eax
0854846e +0x0cd2:  mov    %eax,-0x1ed(%ebp)
08548474 +0x0cd8:  mov    -0x29c(%ebp),%eax
0854847a +0x0cde:  mov    %eax,-0x1e9(%ebp)
08548480 +0x0ce4:  mov    -0x298(%ebp),%eax
08548486 +0x0cea:  mov    %eax,-0x1e5(%ebp)
0854848c +0x0cf0:  mov    -0x294(%ebp),%eax
08548492 +0x0cf6:  mov    %eax,-0x1e1(%ebp)
08548498 +0x0cfc:  mov    -0x290(%ebp),%eax
0854849e +0x0d02:  mov    %eax,-0x1dd(%ebp)
085484a4 +0x0d08:  movzbl -0x28c(%ebp),%eax
085484ab +0x0d0f:  mov    %al,-0x1d9(%ebp)
085484b1 +0x0d15:  mov    -0x213(%ebp),%eax
085484b7 +0x0d1b:  cmp    $0x28d30f,%eax
085484bc +0x0d20:  jne    085484e1 <+0xd45>
085484be +0x0d22:  mov    0x10(%ebp),%eax
085484c1 +0x0d25:  movzbl 0x1a(%eax),%eax
085484c5 +0x0d29:  test   %al,%al
085484c7 +0x0d2b:  jne    085484d5 <+0xd39>
085484c9 +0x0d2d:  movl   $0x32,-0x254(%ebp)
085484d3 +0x0d37:  jmp    0854850f <+0xd73>
085484d5 +0x0d39:  movl   $0xa,-0x254(%ebp)
085484df +0x0d43:  jmp    0854850f <+0xd73>
085484e1 +0x0d45:  mov    -0x213(%ebp),%eax
085484e7 +0x0d4b:  cmp    $0x28d30e,%eax
085484ec +0x0d50:  jne    0854850f <+0xd73>
085484ee +0x0d52:  mov    0x10(%ebp),%eax
085484f1 +0x0d55:  movzbl 0x1a(%eax),%eax
085484f5 +0x0d59:  test   %al,%al
085484f7 +0x0d5b:  jne    08548505 <+0xd69>
085484f9 +0x0d5d:  movl   $0x64,-0x254(%ebp)
08548503 +0x0d67:  jmp    0854850f <+0xd73>
08548505 +0x0d69:  movl   $0x14,-0x254(%ebp)
0854850f +0x0d73:  mov    0x10(%ebp),%eax
08548512 +0x0d76:  movzwl 0x21(%eax),%eax
08548516 +0x0d7a:  movzwl %ax,%ebx
08548519 +0x0d7d:  mov    0xc(%ebp),%eax
0854851c +0x0d80:  mov    %eax,(%esp)
0854851f +0x0d83:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08548524 +0x0d88:  movl   $0x1,0x14(%esp)
0854852c +0x0d90:  movl   $0x3,0x10(%esp)
08548534 +0x0d98:  movl   $0x1,0xc(%esp)
0854853c +0x0da0:  mov    %ebx,0x8(%esp)
08548540 +0x0da4:  movl   $0x1,0x4(%esp)
08548548 +0x0dac:  mov    %eax,(%esp)
0854854b +0x0daf:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08548550 +0x0db4:  xor    $0x1,%eax
08548553 +0x0db7:  test   %al,%al
08548555 +0x0db9:  je     08548561 <+0xdc5>
08548557 +0x0dbb:  mov    $0x11,%eax
0854855c +0x0dc0:  jmp    08548c30 <+0x1494>
08548561 +0x0dc5:  mov    -0x11f(%ebp),%eax
08548567 +0x0dcb:  mov    %eax,%edx
08548569 +0x0dcd:  mov    -0x199(%ebp),%eax
0854856f +0x0dd3:  mov    0xc(%ebp),%ecx
08548572 +0x0dd6:  add    $0x79700,%ecx
08548578 +0x0ddc:  movl   $0x0,0xc(%esp)
08548580 +0x0de4:  mov    %edx,0x8(%esp)
08548584 +0x0de8:  mov    %eax,0x4(%esp)
08548588 +0x0dec:  mov    %ecx,(%esp)
0854858b +0x0def:  call   08686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>  ; cUserHistoryLog::apply_Item(int, int, eApplyItemReason)
08548590 +0x0df4:  mov    -0x254(%ebp),%esi
08548596 +0x0dfa:  mov    0x10(%ebp),%eax
08548599 +0x0dfd:  movzwl 0x23(%eax),%eax
0854859d +0x0e01:  movzwl %ax,%ebx
085485a0 +0x0e04:  mov    0xc(%ebp),%eax
085485a3 +0x0e07:  mov    %eax,(%esp)
085485a6 +0x0e0a:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085485ab +0x0e0f:  movl   $0x1,0x14(%esp)
085485b3 +0x0e17:  movl   $0xc,0x10(%esp)
085485bb +0x0e1f:  mov    %esi,0xc(%esp)
085485bf +0x0e23:  mov    %ebx,0x8(%esp)
085485c3 +0x0e27:  movl   $0x1,0x4(%esp)
085485cb +0x0e2f:  mov    %eax,(%esp)
085485ce +0x0e32:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085485d3 +0x0e37:  xor    $0x1,%eax
085485d6 +0x0e3a:  test   %al,%al
085485d8 +0x0e3c:  je     085485e4 <+0xe48>
085485da +0x0e3e:  mov    $0x11,%eax
085485df +0x0e43:  jmp    08548c30 <+0x1494>
085485e4 +0x0e48:  mov    0x10(%ebp),%eax
085485e7 +0x0e4b:  movzwl 0x25(%eax),%eax
085485eb +0x0e4f:  test   %ax,%ax
085485ee +0x0e52:  je     0854861f <+0xe83>
085485f0 +0x0e54:  mov    -0x11f(%ebp),%eax
085485f6 +0x0e5a:  mov    %eax,%edx
085485f8 +0x0e5c:  mov    -0x15c(%ebp),%eax
085485fe +0x0e62:  mov    0xc(%ebp),%ecx
08548601 +0x0e65:  add    $0x79700,%ecx
08548607 +0x0e6b:  movl   $0x1,0xc(%esp)
0854860f +0x0e73:  mov    %edx,0x8(%esp)
08548613 +0x0e77:  mov    %eax,0x4(%esp)
08548617 +0x0e7b:  mov    %ecx,(%esp)
0854861a +0x0e7e:  call   08686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>  ; cUserHistoryLog::apply_Item(int, int, eApplyItemReason)
0854861f +0x0e83:  mov    -0x250(%ebp),%eax
08548625 +0x0e89:  mov    %eax,%ebx
08548627 +0x0e8b:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
0854862c +0x0e90:  mov    %ebx,0xc(%esp)
08548630 +0x0e94:  mov    0xc(%ebp),%edx
08548633 +0x0e97:  mov    %edx,0x8(%esp)
08548637 +0x0e9b:  movl   $0xe,0x4(%esp)
0854863f +0x0ea3:  mov    %eax,(%esp)
08548642 +0x0ea6:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
08548647 +0x0eab:  mov    0x10(%ebp),%eax
0854864a +0x0eae:  movzbl 0x1a(%eax),%eax
0854864e +0x0eb2:  movzbl %al,%edx
08548651 +0x0eb5:  mov    0x14(%ebp),%eax
08548654 +0x0eb8:  mov    %edx,0x4(%esp)
08548658 +0x0ebc:  mov    %eax,(%esp)
0854865b +0x0ebf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08548660 +0x0ec4:  mov    0x10(%ebp),%eax
08548663 +0x0ec7:  movzwl 0x23(%eax),%eax
08548667 +0x0ecb:  movzwl %ax,%edx
0854866a +0x0ece:  mov    0x14(%ebp),%eax
0854866d +0x0ed1:  mov    %edx,0x4(%esp)
08548671 +0x0ed5:  mov    %eax,(%esp)
08548674 +0x0ed8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08548679 +0x0edd:  mov    0x10(%ebp),%eax
0854867c +0x0ee0:  movzwl 0x23(%eax),%eax
08548680 +0x0ee4:  movzwl %ax,%ebx
08548683 +0x0ee7:  mov    0xc(%ebp),%eax
08548686 +0x0eea:  mov    %eax,(%esp)
08548689 +0x0eed:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0854868e +0x0ef2:  lea    -0x8d(%ebp),%edx
08548694 +0x0ef8:  mov    %ebx,0xc(%esp)
08548698 +0x0efc:  movl   $0x1,0x8(%esp)
085486a0 +0x0f04:  mov    %eax,0x4(%esp)
085486a4 +0x0f08:  mov    %edx,(%esp)
085486a7 +0x0f0b:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085486ac +0x0f10:  sub    $0x4,%esp
085486af +0x0f13:  lea    -0x8d(%ebp),%eax
085486b5 +0x0f19:  mov    %eax,(%esp)
085486b8 +0x0f1c:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
085486bd +0x0f21:  mov    0x14(%ebp),%edx
085486c0 +0x0f24:  mov    %eax,0x4(%esp)
085486c4 +0x0f28:  mov    %edx,(%esp)
085486c7 +0x0f2b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085486cc +0x0f30:  mov    0x10(%ebp),%eax
085486cf +0x0f33:  movzwl 0x21(%eax),%eax
085486d3 +0x0f37:  movzwl %ax,%edx
085486d6 +0x0f3a:  mov    0x14(%ebp),%eax
085486d9 +0x0f3d:  mov    %edx,0x4(%esp)
085486dd +0x0f41:  mov    %eax,(%esp)
085486e0 +0x0f44:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085486e5 +0x0f49:  mov    0x10(%ebp),%eax
085486e8 +0x0f4c:  movzwl 0x25(%eax),%eax
085486ec +0x0f50:  test   %ax,%ax
085486ef +0x0f53:  je     08548706 <+0xf6a>
085486f1 +0x0f55:  mov    0x14(%ebp),%eax
085486f4 +0x0f58:  movl   $0x1,0x4(%esp)
085486fc +0x0f60:  mov    %eax,(%esp)
085486ff +0x0f63:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08548704 +0x0f68:  jmp    08548765 <+0xfc9>
08548706 +0x0f6a:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
0854870b +0x0f6f:  mov    %eax,(%esp)
0854870e +0x0f72:  call   0854b590 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x418>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x418
08548713 +0x0f77:  test   %al,%al
08548715 +0x0f79:  je     0854872c <+0xf90>
08548717 +0x0f7b:  mov    0x14(%ebp),%eax
0854871a +0x0f7e:  movl   $0x2,0x4(%esp)
08548722 +0x0f86:  mov    %eax,(%esp)
08548725 +0x0f89:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854872a +0x0f8e:  jmp    08548765 <+0xfc9>
0854872c +0x0f90:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
08548731 +0x0f95:  mov    %eax,(%esp)
08548734 +0x0f98:  call   0854b57c <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x404>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x404
08548739 +0x0f9d:  test   %al,%al
0854873b +0x0f9f:  je     08548752 <+0xfb6>
0854873d +0x0fa1:  mov    0x14(%ebp),%eax
08548740 +0x0fa4:  movl   $0x3,0x4(%esp)
08548748 +0x0fac:  mov    %eax,(%esp)
0854874b +0x0faf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08548750 +0x0fb4:  jmp    08548765 <+0xfc9>
08548752 +0x0fb6:  mov    0x14(%ebp),%eax
08548755 +0x0fb9:  movl   $0x0,0x4(%esp)
0854875d +0x0fc1:  mov    %eax,(%esp)
08548760 +0x0fc4:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08548765 +0x0fc9:  mov    -0x38(%ebp),%eax
08548768 +0x0fcc:  movsbl %al,%edx
0854876b +0x0fcf:  mov    0x14(%ebp),%eax
0854876e +0x0fd2:  mov    %edx,0x4(%esp)
08548772 +0x0fd6:  mov    %eax,(%esp)
08548775 +0x0fd9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854877a +0x0fde:  lea    -0x121(%ebp),%eax
08548780 +0x0fe4:  mov    %eax,(%esp)
08548783 +0x0fe7:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548788 +0x0fec:  movzbl %al,%edx
0854878b +0x0fef:  mov    -0x44(%ebp),%eax
0854878e +0x0ff2:  mov    0x234(%eax),%eax
08548794 +0x0ff8:  cmp    %eax,%edx
08548796 +0x0ffa:  setge  %al
08548799 +0x0ffd:  test   %al,%al
0854879b +0x0fff:  je     085487d3 <+0x1037>
0854879d +0x1001:  mov    0x10(%ebp),%eax
085487a0 +0x1004:  movzwl 0x25(%eax),%eax
085487a4 +0x1008:  test   %ax,%ax
085487a7 +0x100b:  je     085487af <+0x1013>
085487a9 +0x100d:  cmpb   $0x0,-0x31(%ebp)
085487ad +0x1011:  je     085487d3 <+0x1037>
085487af +0x1013:  movzbl -0x32(%ebp),%eax
085487b3 +0x1017:  mov    %eax,0xc(%esp)
085487b7 +0x101b:  lea    -0x121(%ebp),%eax
085487bd +0x1021:  mov    %eax,0x8(%esp)
085487c1 +0x1025:  mov    0xc(%ebp),%eax
085487c4 +0x1028:  mov    %eax,0x4(%esp)
085487c8 +0x102c:  mov    0x8(%ebp),%eax
085487cb +0x102f:  mov    %eax,(%esp)
085487ce +0x1032:  call   08546824 <_ZN8WongWork12CItemUpgrade14_NoticeUpgradeEPK5CUserRK10Inven_Itemb>  ; WongWork::CItemUpgrade::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)
085487d3 +0x1037:  lea    -0x121(%ebp),%eax
085487d9 +0x103d:  mov    %eax,(%esp)
085487dc +0x1040:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085487e1 +0x1045:  cmp    $0xc,%al
085487e3 +0x1047:  seta   %al
085487e6 +0x104a:  test   %al,%al
085487e8 +0x104c:  je     0854885e <+0x10c2>
085487ea +0x104e:  movzbl -0x32(%ebp),%eax
085487ee +0x1052:  mov    %eax,-0x2d4(%ebp)
085487f4 +0x1058:  lea    -0x121(%ebp),%eax
085487fa +0x105e:  mov    %eax,(%esp)
085487fd +0x1061:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548802 +0x1066:  movzbl %al,%eax
08548805 +0x1069:  mov    %eax,-0x2d0(%ebp)
0854880b +0x106f:  mov    0xc(%ebp),%eax
0854880e +0x1072:  mov    %eax,(%esp)
08548811 +0x1075:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
08548816 +0x107a:  mov    %eax,%esi
08548818 +0x107c:  mov    0xc(%ebp),%eax
0854881b +0x107f:  mov    %eax,(%esp)
0854881e +0x1082:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08548823 +0x1087:  mov    %eax,%ebx
08548825 +0x1089:  mov    -0x11f(%ebp),%edi
0854882b +0x108f:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08548830 +0x1094:  mov    0x378(%eax),%eax
08548836 +0x109a:  mov    -0x2d4(%ebp),%edx
0854883c +0x10a0:  mov    %edx,0x14(%esp)
08548840 +0x10a4:  mov    -0x2d0(%ebp),%ecx
08548846 +0x10aa:  mov    %ecx,0x10(%esp)
0854884a +0x10ae:  mov    %esi,0xc(%esp)
0854884e +0x10b2:  mov    %ebx,0x8(%esp)
08548852 +0x10b6:  mov    %edi,0x4(%esp)
08548856 +0x10ba:  mov    %eax,(%esp)
08548859 +0x10bd:  call   08425ece <_ZN20DB_ReqItemUpgradeLog11makeRequestEjjjPKcjb>  ; DB_ReqItemUpgradeLog::makeRequest(unsigned int, unsigned int, unsigned int, char const*, unsigned int, bool)
0854885e +0x10c2:  movzbl -0x32(%ebp),%eax
08548862 +0x10c6:  xor    $0x1,%eax
08548865 +0x10c9:  test   %al,%al
08548867 +0x10cb:  je     085489ae <+0x1212>
0854886d +0x10d1:  movl   $0x0,-0xe4(%ebp)
08548877 +0x10db:  mov    -0x11a(%ebp),%eax
0854887d +0x10e1:  movswl %ax,%ebx
08548880 +0x10e4:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
08548885 +0x10e9:  lea    -0xe4(%ebp),%edx
0854888b +0x10ef:  mov    %edx,0x14(%esp)
0854888f +0x10f3:  movl   $0x0,0x10(%esp)
08548897 +0x10fb:  mov    %ebx,0xc(%esp)
0854889b +0x10ff:  mov    -0x4c(%ebp),%edx
0854889e +0x1102:  mov    %edx,0x8(%esp)
085488a2 +0x1106:  lea    -0x121(%ebp),%edx
085488a8 +0x110c:  mov    %edx,0x4(%esp)
085488ac +0x1110:  mov    %eax,(%esp)
085488af +0x1113:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085488b4 +0x1118:  mov    -0xe4(%ebp),%eax
085488ba +0x111e:  mov    %eax,%ebx
085488bc +0x1120:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085488c1 +0x1125:  mov    %ebx,0xc(%esp)
085488c5 +0x1129:  mov    0xc(%ebp),%edx
085488c8 +0x112c:  mov    %edx,0x8(%esp)
085488cc +0x1130:  movl   $0xf,0x4(%esp)
085488d4 +0x1138:  mov    %eax,(%esp)
085488d7 +0x113b:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085488dc +0x1140:  movl   $0x0,-0x1c(%ebp)
085488e3 +0x1147:  movsbl -0x45(%ebp),%edx
085488e7 +0x114b:  mov    0x10(%ebp),%eax
085488ea +0x114e:  movzwl 0x1b(%eax),%eax
085488ee +0x1152:  movzwl %ax,%eax
085488f1 +0x1155:  mov    %edx,0x24(%esp)
085488f5 +0x1159:  lea    -0x19b(%ebp),%edx
085488fb +0x115f:  mov    %edx,0x20(%esp)
085488ff +0x1163:  mov    0x14(%ebp),%edx
08548902 +0x1166:  mov    %edx,0x1c(%esp)
08548906 +0x116a:  lea    -0x284(%ebp),%edx
0854890c +0x1170:  mov    %edx,0x18(%esp)
08548910 +0x1174:  mov    -0x44(%ebp),%edx
08548913 +0x1177:  mov    %edx,0x14(%esp)
08548917 +0x117b:  mov    %eax,0x10(%esp)
0854891b +0x117f:  mov    -0x4c(%ebp),%eax
0854891e +0x1182:  mov    %eax,0xc(%esp)
08548922 +0x1186:  lea    -0x121(%ebp),%eax
08548928 +0x118c:  mov    %eax,0x8(%esp)
0854892c +0x1190:  mov    0xc(%ebp),%eax
0854892f +0x1193:  mov    %eax,0x4(%esp)
08548933 +0x1197:  mov    0x8(%ebp),%eax
08548936 +0x119a:  mov    %eax,(%esp)
08548939 +0x119d:  call   08546bba <_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c>  ; WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short, upgrade_table_t const&, upgrade_info_t const*, PacketGuard*, Inven_Item*, char)
0854893e +0x11a2:  mov    %eax,-0x1c(%ebp)
08548941 +0x11a5:  cmpl   $0x0,-0x1c(%ebp)
08548945 +0x11a9:  setne  %al
08548948 +0x11ac:  test   %al,%al
0854894a +0x11ae:  je     08548a65 <+0x12c9>
08548950 +0x11b4:  mov    -0x1c(%ebp),%eax
08548953 +0x11b7:  cmp    $0xd8,%eax
08548958 +0x11bc:  jne    085489a6 <+0x120a>
0854895a +0x11be:  mov    0x10(%ebp),%eax
0854895d +0x11c1:  movzwl 0x23(%eax),%eax
08548961 +0x11c5:  movzwl %ax,%eax
08548964 +0x11c8:  mov    %eax,0xc(%esp)
08548968 +0x11cc:  movl   $0x0,0x8(%esp)
08548970 +0x11d4:  movl   $0x1,0x4(%esp)
08548978 +0x11dc:  mov    0xc(%ebp),%eax
0854897b +0x11df:  mov    %eax,(%esp)
0854897e +0x11e2:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08548983 +0x11e7:  movl   $0x0,0xc(%esp)
0854898b +0x11ef:  movl   $0x0,0x8(%esp)
08548993 +0x11f7:  movl   $0x1,0x4(%esp)
0854899b +0x11ff:  mov    0xc(%ebp),%eax
0854899e +0x1202:  mov    %eax,(%esp)
085489a1 +0x1205:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
085489a6 +0x120a:  mov    -0x1c(%ebp),%eax
085489a9 +0x120d:  jmp    08548c30 <+0x1494>
085489ae +0x1212:  mov    0x10(%ebp),%eax
085489b1 +0x1215:  movzwl 0x25(%eax),%eax
085489b5 +0x1219:  test   %ax,%ax
085489b8 +0x121c:  je     085489ea <+0x124e>
085489ba +0x121e:  cmpb   $0x0,-0x31(%ebp)
085489be +0x1222:  je     085489d5 <+0x1239>
085489c0 +0x1224:  mov    0x14(%ebp),%eax
085489c3 +0x1227:  movl   $0x0,0x4(%esp)
085489cb +0x122f:  mov    %eax,(%esp)
085489ce +0x1232:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085489d3 +0x1237:  jmp    085489fd <+0x1261>
085489d5 +0x1239:  mov    0x14(%ebp),%eax
085489d8 +0x123c:  movl   $0x1,0x4(%esp)
085489e0 +0x1244:  mov    %eax,(%esp)
085489e3 +0x1247:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085489e8 +0x124c:  jmp    085489fd <+0x1261>
085489ea +0x124e:  mov    0x14(%ebp),%eax
085489ed +0x1251:  movl   $0x0,0x4(%esp)
085489f5 +0x1259:  mov    %eax,(%esp)
085489f8 +0x125c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085489fd +0x1261:  lea    -0x121(%ebp),%eax
08548a03 +0x1267:  mov    %eax,(%esp)
08548a06 +0x126a:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548a0b +0x126f:  movzbl %al,%edx
08548a0e +0x1272:  mov    0x14(%ebp),%eax
08548a11 +0x1275:  mov    %edx,0x4(%esp)
08548a15 +0x1279:  mov    %eax,(%esp)
08548a18 +0x127c:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08548a1d +0x1281:  mov    0x10(%ebp),%eax
08548a20 +0x1284:  movzwl 0x1b(%eax),%eax
08548a24 +0x1288:  movzwl %ax,%edx
08548a27 +0x128b:  mov    0x14(%ebp),%eax
08548a2a +0x128e:  mov    %edx,0x4(%esp)
08548a2e +0x1292:  mov    %eax,(%esp)
08548a31 +0x1295:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08548a36 +0x129a:  mov    0x10(%ebp),%eax
08548a39 +0x129d:  movzwl 0x25(%eax),%eax
08548a3d +0x12a1:  test   %ax,%ax
08548a40 +0x12a4:  jne    08548a65 <+0x12c9>
08548a42 +0x12a6:  movl   $0x0,0xc(%esp)
08548a4a +0x12ae:  movl   $0x0,0x8(%esp)
08548a52 +0x12b6:  movl   $0xc,0x4(%esp)
08548a5a +0x12be:  mov    0xc(%ebp),%eax
08548a5d +0x12c1:  mov    %eax,(%esp)
08548a60 +0x12c4:  call   08122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>  ; APSystem::CUserProc::ClearActionAndSendtoUser(CUser*, APSystem::_ActionGroupIndex, int, ENUM_PACKETCLASS)
08548a65 +0x12c9:  movzbl -0x32(%ebp),%esi
08548a69 +0x12cd:  lea    -0x121(%ebp),%eax
08548a6f +0x12d3:  mov    %eax,(%esp)
08548a72 +0x12d6:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548a77 +0x12db:  movzbl %al,%ebx
08548a7a +0x12de:  mov    -0x4c(%ebp),%eax
08548a7d +0x12e1:  mov    %eax,(%esp)
08548a80 +0x12e4:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
08548a85 +0x12e9:  mov    0xc(%ebp),%edx
08548a88 +0x12ec:  lea    0x79700(%edx),%ecx
08548a8e +0x12f2:  mov    %esi,0x10(%esp)
08548a92 +0x12f6:  mov    %ebx,0xc(%esp)
08548a96 +0x12fa:  mov    -0x38(%ebp),%edx
08548a99 +0x12fd:  mov    %edx,0x8(%esp)
08548a9d +0x1301:  mov    %eax,0x4(%esp)
08548aa1 +0x1305:  mov    %ecx,(%esp)
08548aa4 +0x1308:  call   08684ca0 <_ZN15cUserHistoryLog11UpgradeItemEiiib>  ; cUserHistoryLog::UpgradeItem(int, int, int, bool)
08548aa9 +0x130d:  mov    -0x4c(%ebp),%eax
08548aac +0x1310:  mov    (%eax),%eax
08548aae +0x1312:  add    $0x4c,%eax
08548ab1 +0x1315:  mov    (%eax),%edx
08548ab3 +0x1317:  mov    -0x4c(%ebp),%eax
08548ab6 +0x131a:  mov    %eax,(%esp)
08548ab9 +0x131d:  call   *%edx
08548abb +0x131f:  test   %al,%al
08548abd +0x1321:  je     08548afa <+0x135e>
08548abf +0x1323:  movzbl -0x32(%ebp),%ebx
08548ac3 +0x1327:  lea    -0x121(%ebp),%eax
08548ac9 +0x132d:  mov    %eax,(%esp)
08548acc +0x1330:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548ad1 +0x1335:  movzbl %al,%eax
08548ad4 +0x1338:  mov    0x10(%ebp),%edx
08548ad7 +0x133b:  add    $0x28,%edx
08548ada +0x133e:  mov    %ebx,0x10(%esp)
08548ade +0x1342:  mov    %eax,0xc(%esp)
08548ae2 +0x1346:  mov    -0x38(%ebp),%eax
08548ae5 +0x1349:  mov    %eax,0x8(%esp)
08548ae9 +0x134d:  mov    %edx,0x4(%esp)
08548aed +0x1351:  mov    0xc(%ebp),%eax
08548af0 +0x1354:  mov    %eax,(%esp)
08548af3 +0x1357:  call   08679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>  ; CUser::makeGuildItemUpgradMessage(char const*, int, int, bool)
08548af8 +0x135c:  jmp    08548b38 <+0x139c>
08548afa +0x135e:  movzbl -0x32(%ebp),%esi
08548afe +0x1362:  lea    -0x121(%ebp),%eax
08548b04 +0x1368:  mov    %eax,(%esp)
08548b07 +0x136b:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08548b0c +0x1370:  movzbl %al,%ebx
08548b0f +0x1373:  mov    -0x4c(%ebp),%eax
08548b12 +0x1376:  mov    %eax,(%esp)
08548b15 +0x1379:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
08548b1a +0x137e:  mov    %esi,0x10(%esp)
08548b1e +0x1382:  mov    %ebx,0xc(%esp)
08548b22 +0x1386:  mov    -0x38(%ebp),%edx
08548b25 +0x1389:  mov    %edx,0x8(%esp)
08548b29 +0x138d:  mov    %eax,0x4(%esp)
08548b2d +0x1391:  mov    0xc(%ebp),%eax
08548b30 +0x1394:  mov    %eax,(%esp)
08548b33 +0x1397:  call   08679cee <_ZN5CUser26makeGuildItemUpgradMessageEPKciib>  ; CUser::makeGuildItemUpgradMessage(char const*, int, int, bool)
08548b38 +0x139c:  mov    -0x11f(%ebp),%eax
08548b3e +0x13a2:  test   %eax,%eax
08548b40 +0x13a4:  je     08548c08 <+0x146c>
08548b46 +0x13aa:  mov    0x10(%ebp),%eax
08548b49 +0x13ad:  movzwl 0x1b(%eax),%eax
08548b4d +0x13b1:  movzwl %ax,%eax
08548b50 +0x13b4:  mov    -0x121(%ebp),%edx
08548b56 +0x13ba:  mov    %edx,0xc(%esp)
08548b5a +0x13be:  mov    -0x11d(%ebp),%edx
08548b60 +0x13c4:  mov    %edx,0x10(%esp)
08548b64 +0x13c8:  mov    -0x119(%ebp),%edx
08548b6a +0x13ce:  mov    %edx,0x14(%esp)
08548b6e +0x13d2:  mov    -0x115(%ebp),%edx
08548b74 +0x13d8:  mov    %edx,0x18(%esp)
08548b78 +0x13dc:  mov    -0x111(%ebp),%edx
08548b7e +0x13e2:  mov    %edx,0x1c(%esp)
08548b82 +0x13e6:  mov    -0x10d(%ebp),%edx
08548b88 +0x13ec:  mov    %edx,0x20(%esp)
08548b8c +0x13f0:  mov    -0x109(%ebp),%edx
08548b92 +0x13f6:  mov    %edx,0x24(%esp)
08548b96 +0x13fa:  mov    -0x105(%ebp),%edx
08548b9c +0x1400:  mov    %edx,0x28(%esp)
08548ba0 +0x1404:  mov    -0x101(%ebp),%edx
08548ba6 +0x140a:  mov    %edx,0x2c(%esp)
08548baa +0x140e:  mov    -0xfd(%ebp),%edx
08548bb0 +0x1414:  mov    %edx,0x30(%esp)
08548bb4 +0x1418:  mov    -0xf9(%ebp),%edx
08548bba +0x141e:  mov    %edx,0x34(%esp)
08548bbe +0x1422:  mov    -0xf5(%ebp),%edx
08548bc4 +0x1428:  mov    %edx,0x38(%esp)
08548bc8 +0x142c:  mov    -0xf1(%ebp),%edx
08548bce +0x1432:  mov    %edx,0x3c(%esp)
08548bd2 +0x1436:  mov    -0xed(%ebp),%edx
08548bd8 +0x143c:  mov    %edx,0x40(%esp)
08548bdc +0x1440:  mov    -0xe9(%ebp),%edx
08548be2 +0x1446:  mov    %edx,0x44(%esp)
08548be6 +0x144a:  movzbl -0xe5(%ebp),%edx
08548bed +0x1451:  mov    %dl,0x48(%esp)
08548bf1 +0x1455:  mov    %eax,0x8(%esp)
08548bf5 +0x1459:  movl   $0x1,0x4(%esp)
08548bfd +0x1461:  mov    -0x50(%ebp),%eax
08548c00 +0x1464:  mov    %eax,(%esp)
08548c03 +0x1467:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
08548c08 +0x146c:  movl   $0x0,0xc(%esp)
08548c10 +0x1474:  movl   $0x0,0x8(%esp)
08548c18 +0x147c:  movl   $0x1,0x4(%esp)
08548c20 +0x1484:  mov    0xc(%ebp),%eax
08548c23 +0x1487:  mov    %eax,(%esp)
08548c26 +0x148a:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08548c2b +0x148f:  mov    $0x0,%eax
08548c30 +0x1494:  lea    -0xc(%ebp),%esp
08548c33 +0x1497:  add    $0x0,%esp
08548c36 +0x149a:  pop    %ebx
08548c37 +0x149b:  pop    %esi
08548c38 +0x149c:  pop    %edi
08548c39 +0x149d:  pop    %ebp
08548c3a +0x149e:  ret
08548c3b +0x149f:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade::ProcUpgrade @ 0x854779c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CItemUpgrade::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*) */

int __thiscall
WongWork::CItemUpgrade::ProcUpgrade
          (CItemUpgrade *this,CUser *param_1,MSG_ITEM_UPGRADE *param_2,PacketGuard *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  char cVar3;
  MSG_ITEM_UPGRADE MVar4;
  byte bVar5;
  uchar uVar6;
  undefined2 uVar7;
  short sVar8;
  CDataManager *pCVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  CReduceUpgradeItemPay *this_00;
  CInventory *pCVar13;
  CValueStatistic *pCVar14;
  uint uVar15;
  char *pcVar16;
  uint uVar17;
  Store *this_01;
  longdouble lVar18;
  undefined1 local_2cc [8];
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined1 local_290;
  upgrade_info_t local_288 [44];
  undefined4 local_25c;
  undefined4 local_258;
  int local_254;
  undefined2 local_219;
  undefined2 uStack_217;
  undefined2 local_215;
  undefined2 uStack_213;
  undefined4 local_211;
  undefined4 local_20d;
  undefined4 local_209;
  undefined4 local_205;
  undefined4 local_201;
  undefined4 local_1fd;
  undefined4 local_1f9;
  undefined4 local_1f5;
  undefined4 local_1f1;
  undefined4 local_1ed;
  undefined4 local_1e9;
  undefined4 local_1e5;
  undefined4 local_1e1;
  undefined1 local_1dd;
  undefined2 local_1dc;
  undefined2 uStack_1da;
  undefined2 local_1d8;
  undefined2 uStack_1d6;
  undefined4 local_1d4;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined2 local_19f;
  undefined2 uStack_19d;
  undefined2 local_19b;
  undefined2 uStack_199;
  undefined4 local_197;
  undefined4 local_193;
  undefined4 local_18f;
  undefined4 local_18b;
  undefined4 local_187;
  undefined4 local_183;
  undefined4 local_17f;
  undefined4 local_17b;
  undefined4 local_177;
  undefined4 local_173;
  undefined4 local_16f;
  undefined4 local_16b;
  undefined4 local_167;
  undefined1 local_163;
  undefined2 local_162;
  undefined2 uStack_160;
  undefined2 local_15e;
  undefined2 uStack_15c;
  undefined4 local_15a;
  undefined4 local_156;
  undefined4 local_152;
  undefined4 local_14e;
  undefined4 local_14a;
  undefined4 local_146;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  undefined4 local_136;
  undefined4 local_132;
  undefined4 local_12e;
  undefined4 local_12a;
  undefined1 local_126;
  undefined2 local_125;
  undefined2 uStack_123;
  undefined2 uStack_121;
  undefined1 uStack_11f;
  undefined1 uStack_11e;
  undefined3 uStack_11d;
  undefined1 uStack_11a;
  undefined4 local_119;
  undefined4 local_115;
  undefined4 local_111;
  undefined4 local_10d;
  undefined4 local_109;
  undefined4 local_105;
  undefined4 local_101;
  undefined4 local_fd;
  undefined4 local_f9;
  undefined4 local_f5;
  undefined4 local_f1;
  undefined4 local_ed;
  undefined1 local_e9;
  int local_e8;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>> local_e4 [4];
  int local_e0;
  undefined4 local_dc;
  map<unsigned_int,stUpgradeItemTicketParam_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>>
  local_d8 [4];
  ulong local_d4;
  undefined1 local_ce [2];
  int local_cc;
  Inven_Item local_91 [61];
  int local_54;
  CItem *local_50;
  char local_49;
  upgrade_table_t *local_48;
  int local_44;
  int local_40;
  uint local_3c;
  bool local_36;
  char local_35;
  int local_34;
  int local_30;
  int local_2c;
  CEquipItem *local_28;
  int local_24;
  int local_20;
  
  local_54 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_125,local_54);
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_125);
  if (cVar3 != '\0') {
    return 4;
  }
  if (CONCAT22(uStack_121,uStack_123) != *(int *)(param_2 + 0x1d)) {
    return 4;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_162);
  CInventory::GetInvenSlot((int)local_2cc,local_54);
  local_162 = (undefined2)local_2cc._0_4_;
  uStack_160 = SUB42(local_2cc._0_4_,2);
  local_15e = (undefined2)local_2cc._4_4_;
  uStack_15c = SUB42(local_2cc._4_4_,2);
  local_15a = local_2c4;
  local_156 = local_2c0;
  local_152 = local_2bc;
  local_14e = local_2b8;
  local_14a = local_2b4;
  local_146 = local_2b0;
  local_142 = local_2ac;
  local_13e = local_2a8;
  local_13a = local_2a4;
  local_136 = local_2a0;
  local_132 = local_29c;
  local_12e = local_298;
  local_12a = local_294;
  local_126 = local_290;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_162);
  if (cVar3 != '\0') {
    return 0x16;
  }
  cVar3 = Event_Upgrade_Jar::CheckMaxLuckyLevel
                    (GlobalData::s_pEvent_UpGrade_Jar,(Inven_Item *)&local_125,
                     CONCAT22(local_15e,uStack_160));
  if (cVar3 != '\x01') {
    return 0x3f4;
  }
  Event_Upgrade_Jar::CheckMaterialIndex
            (GlobalData::s_pEvent_UpGrade_Jar,CONCAT22(local_15e,uStack_160));
  local_e0 = 0;
  uVar7 = _getUpgradeCountByUpgradeItem
                    (this,(Inven_Item *)&local_125,(Inven_Item *)&local_162,(ENUM_ERROR *)&local_e0)
  ;
  *(undefined2 *)(param_2 + 0x25) = uVar7;
  if (local_e0 != 0) {
    return local_e0;
  }
  MVar4 = (MSG_ITEM_UPGRADE)
          _getUpgradeRateByUpgradeItem
                    (this,(Inven_Item *)&local_125,(Inven_Item *)&local_162,(ENUM_ERROR *)&local_e0)
  ;
  param_2[0x27] = MVar4;
  if (local_e0 != 0) {
    return local_e0;
  }
  iVar10 = CONCAT22(uStack_121,uStack_123);
  pCVar9 = (CDataManager *)G_CDataManager();
  local_50 = (CItem *)CDataManager::find_item(pCVar9,iVar10);
  if (local_50 == (CItem *)0x0) {
    return 4;
  }
  Inven_Item::Inven_Item((Inven_Item *)&local_19f);
  local_49 = '\0';
  if (*(short *)(param_2 + 0x21) == -1) goto LAB_08547c80;
  cVar3 = (**(code **)(*(int *)local_50 + 0x44))(local_50);
  if (cVar3 != '\x01') {
    return 0xea;
  }
  CInventory::GetInvenSlot((int)local_2cc,local_54);
  local_19f = (undefined2)local_2cc._0_4_;
  uStack_19d = SUB42(local_2cc._0_4_,2);
  local_19b = (undefined2)local_2cc._4_4_;
  uStack_199 = SUB42(local_2cc._4_4_,2);
  local_197 = local_2c4;
  local_193 = local_2c0;
  local_18f = local_2bc;
  local_18b = local_2b8;
  local_187 = local_2b4;
  local_183 = local_2b0;
  local_17f = local_2ac;
  local_17b = local_2a8;
  local_177 = local_2a4;
  local_173 = local_2a0;
  local_16f = local_29c;
  local_16b = local_298;
  local_167 = local_294;
  local_163 = local_290;
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_19f);
  if (cVar3 != '\0') {
    return 4;
  }
  local_34 = G_CDataManager();
  local_34 = local_34 + 0x4d0;
  local_dc = CONCAT22(local_19b,uStack_19d);
  std::
  map<unsigned_int,stUpgradeItemTicketParam_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>>
  ::find((uint *)local_e4);
  std::
  map<unsigned_int,stUpgradeItemTicketParam_t,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>>
  ::end(local_d8);
  cVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
          operator==(local_e4,(_Rb_tree_iterator *)local_d8);
  if (cVar3 != '\0') {
    return 9;
  }
  bVar5 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
  iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
           operator->(local_e4);
  if (bVar5 < *(byte *)(iVar10 + 4)) {
LAB_08547c51:
    bVar1 = true;
  }
  else {
    bVar5 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
    iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
             operator->(local_e4);
    if (*(byte *)(iVar10 + 5) < bVar5) goto LAB_08547c51;
    bVar1 = false;
  }
  if (bVar1) {
    return 8;
  }
  iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stUpgradeItemTicketParam_t>>::
           operator->(local_e4);
  local_49 = *(char *)(iVar10 + 6);
LAB_08547c80:
  cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_115 + 1));
  if (cVar3 == '\0') {
    local_48 = (upgrade_table_t *)
               CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
  }
  else {
    local_48 = (upgrade_table_t *)CItemAmplifier::getUpgradeInfoTable(GlobalData::s_itemAmplifier_);
  }
  upgrade_info_t::upgrade_info_t(local_288);
  iVar10 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar3 = _GetUpgradeInfo(this,(Inven_Item *)&local_125,local_50,local_48,local_288,iVar10);
  if (cVar3 == '\x01') {
    if (*(short *)(param_2 + 0x25) != 0) {
      local_254 = 0;
      local_258 = 1;
      local_25c = CONCAT22(local_15e,uStack_160);
    }
    cVar3 = _CheckTargetUsableLv(this,(Inven_Item *)&local_162,(Inven_Item *)&local_125);
    if (cVar3 == '\x01') {
      local_40 = _ProcPortableUpgradeItem
                           (this,(Inven_Item *)&local_162,(Inven_Item *)&local_125,local_288);
      if (local_40 == 0) {
        if ((CONCAT22(local_19b,uStack_19d) == 0x28d30e) ||
           (CONCAT22(local_19b,uStack_19d) == 0x28d30f)) {
          local_254 = 0;
        }
        local_44 = local_40;
        uVar6 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
        Event_Upgrade_Jar::SettingRecipeNUpConunt
                  (GlobalData::s_pEvent_UpGrade_Jar,CONCAT22(local_15e,uStack_160),local_288,uVar6);
        if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) &&
           (cVar3 = (**(code **)(*(int *)local_50 + 0x30))(local_50), cVar3 != '\0')) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (bVar1) {
          local_40 = 0x13;
        }
        else {
          if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x1) &&
             (cVar3 = (**(code **)(*(int *)local_50 + 0x34))(local_50), cVar3 != '\0')) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (bVar1) {
            local_40 = 0x13;
          }
          else {
            if (*(short *)(param_2 + 0x21) != -1) {
              Inven_Item::Inven_Item((Inven_Item *)&local_1dc);
              CInventory::GetInvenSlot((int)local_2cc,local_54);
              local_1dc = (undefined2)local_2cc._0_4_;
              uStack_1da = SUB42(local_2cc._0_4_,2);
              local_1d8 = (undefined2)local_2cc._4_4_;
              uStack_1d6 = SUB42(local_2cc._4_4_,2);
              local_1d4 = local_2c4;
              local_1d0 = local_2c0;
              local_1cc = local_2bc;
              local_1c8 = local_2b8;
              local_1c4 = local_2b4;
              local_1c0 = local_2b0;
              local_1bc = local_2ac;
              local_1b8 = local_2a8;
              local_1b4 = local_2a4;
              local_1b0 = local_2a0;
              local_1ac = local_29c;
              local_1a8 = local_298;
              local_1a4 = local_294;
              local_1a0 = local_290;
              if (CONCAT22(local_1d8,uStack_1da) == 0x28d30f) {
                if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                  local_258 = 0x32;
                }
                else {
                  local_258 = 10;
                }
              }
              else if (CONCAT22(local_1d8,uStack_1da) == 0x28d30e) {
                if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                  local_258 = 100;
                }
                else {
                  local_258 = 0x14;
                }
              }
            }
            local_40 = 0;
            local_40 = _CheckCondition(this,param_1,(Inven_Item *)&local_125,local_50,
                                       (Inven_Item *)&local_162,local_48,local_288);
            if (local_40 == 0) {
              if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) &&
                 (cVar3 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)((int)&local_115 + 1)),
                 cVar3 != '\0')) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (bVar1) {
                local_40 = 0x17;
              }
              else {
                if ((param_2[0x1a] == (MSG_ITEM_UPGRADE)0x1) &&
                   (cVar3 = stAmplifyOption_t::hasAbility
                                      ((stAmplifyOption_t *)((int)&local_115 + 1)), cVar3 != '\x01')
                   ) {
                  bVar1 = true;
                }
                else {
                  bVar1 = false;
                }
                if (bVar1) {
                  local_40 = 0x17;
                }
                else {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                  local_3c = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                  local_3c = local_3c & 0xff;
                  local_36 = false;
                  local_35 = '\0';
                  if (*(short *)(param_2 + 0x25) == 0) {
                    local_36 = (bool)_DoProcUpgrade(this,param_1,(Inven_Item *)&local_125,local_288)
                    ;
                    local_30 = 0;
                    piVar12 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32)
                    ;
                    cVar3 = (**(code **)(*piVar12 + 0x34))(piVar12,0);
                    if ((cVar3 == '\0') ||
                       (cVar3 = stAmplifyOption_t::hasAbility
                                          ((stAmplifyOption_t *)((int)&local_115 + 1)),
                       cVar3 == '\x01')) {
                      bVar1 = false;
                    }
                    else {
                      bVar1 = true;
                    }
                    if (bVar1) {
                      this_00 = (CReduceUpgradeItemPay *)
                                CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x32);
                      local_24 = CReduceUpgradeItemPay::GetReduceRate(this_00);
                      if ((0 < local_24) &&
                         (local_30 = local_254 - (local_254 * local_24) / 100, local_30 < 0)) {
                        local_30 = 0;
                      }
                    }
                    else {
                      local_30 = local_254;
                    }
                    iVar10 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                    CInventory::GetInvenSlot((int)local_ce,iVar10);
                    local_2c = local_cc;
                    pCVar9 = (CDataManager *)G_CDataManager();
                    local_28 = (CEquipItem *)CDataManager::find_item(pCVar9,local_2c);
                    iVar10 = local_30;
                    if (local_28 != (CEquipItem *)0x0) {
                      lVar18 = (longdouble)CEquipItem::getUpgradeCostDiscount(local_28);
                      local_30 = (int)ROUND((lVar18 * (longdouble)iVar10) /
                                            (longdouble)_DAT_08c9d304 + (longdouble)iVar10);
                    }
                    cVar3 = stAmplifyOption_t::hasAbility
                                      ((stAmplifyOption_t *)((int)&local_115 + 1));
                    if (cVar3 == '\0') {
                      pCVar13 = (CInventory *)
                                CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      cVar3 = CInventory::use_money(pCVar13,local_30,0xd,1);
                      if (cVar3 != '\x01') {
                        return 10;
                      }
                    }
                    else {
                      pCVar13 = (CInventory *)
                                CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                      cVar3 = CInventory::use_money(pCVar13,local_30,0x2e,1);
                      if (cVar3 != '\x01') {
                        return 10;
                      }
                    }
                  }
                  else {
                    local_36 = true;
                    local_d4 = 99;
                    uVar11 = CMTRand::randInt(*(CMTRand **)(this + 0x4e8),&local_d4);
                    if (uVar11 < (byte)param_2[0x27]) {
                      Inven_Item::SetUpgrade
                                ((Inven_Item *)&local_125,(uchar)*(undefined2 *)(param_2 + 0x25));
                      local_35 = '\x01';
                    }
                    else {
                      Inven_Item::SetUpgrade((Inven_Item *)&local_125,(uchar)local_3c);
                      local_35 = '\0';
                    }
                  }
                  if (*(short *)(param_2 + 0x21) != -1) {
                    Inven_Item::Inven_Item((Inven_Item *)&local_219);
                    CInventory::GetInvenSlot((int)local_2cc,local_54);
                    local_219 = (undefined2)local_2cc._0_4_;
                    uStack_217 = SUB42(local_2cc._0_4_,2);
                    local_215 = (undefined2)local_2cc._4_4_;
                    uStack_213 = SUB42(local_2cc._4_4_,2);
                    local_211 = local_2c4;
                    local_20d = local_2c0;
                    local_209 = local_2bc;
                    local_205 = local_2b8;
                    local_201 = local_2b4;
                    local_1fd = local_2b0;
                    local_1f9 = local_2ac;
                    local_1f5 = local_2a8;
                    local_1f1 = local_2a4;
                    local_1ed = local_2a0;
                    local_1e9 = local_29c;
                    local_1e5 = local_298;
                    local_1e1 = local_294;
                    local_1dd = local_290;
                    if (CONCAT22(local_215,uStack_217) == 0x28d30f) {
                      if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                        local_258 = 0x32;
                      }
                      else {
                        local_258 = 10;
                      }
                    }
                    else if (CONCAT22(local_215,uStack_217) == 0x28d30e) {
                      if (param_2[0x1a] == (MSG_ITEM_UPGRADE)0x0) {
                        local_258 = 100;
                      }
                      else {
                        local_258 = 0x14;
                      }
                    }
                    uVar7 = *(undefined2 *)(param_2 + 0x21);
                    pCVar13 = (CInventory *)
                              CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    cVar3 = CInventory::delete_item(pCVar13,1,uVar7,1,3,1);
                    if (cVar3 != '\x01') {
                      return 0x11;
                    }
                    cUserHistoryLog::apply_Item
                              ((cUserHistoryLog *)(param_1 + 0x79700),CONCAT22(local_19b,uStack_19d)
                               ,CONCAT22(uStack_121,uStack_123),0);
                  }
                  uVar2 = local_258;
                  uVar7 = *(undefined2 *)(param_2 + 0x23);
                  pCVar13 = (CInventory *)
                            CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  cVar3 = CInventory::delete_item(pCVar13,1,uVar7,uVar2,0xc,1);
                  if (cVar3 == '\x01') {
                    if (*(short *)(param_2 + 0x25) != 0) {
                      cUserHistoryLog::apply_Item
                                ((cUserHistoryLog *)(param_1 + 0x79700),
                                 CONCAT22(local_15e,uStack_160),CONCAT22(uStack_121,uStack_123),1);
                    }
                    iVar10 = local_254;
                    pCVar14 = (CValueStatistic *)GetInstanceValueStatistic();
                    CValueStatistic::AddValueStatistic(pCVar14,0xe,param_1,iVar10);
                    InterfacePacketBuf::put_byte
                              ((InterfacePacketBuf *)param_3,(uint)(byte)param_2[0x1a]);
                    InterfacePacketBuf::put_short
                              ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x23));
                    iVar10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    CInventory::GetInvenSlot((int)local_91,iVar10);
                    iVar10 = Inven_Item::get_add_info(local_91);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar10);
                    InterfacePacketBuf::put_short
                              ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x21));
                    if (*(short *)(param_2 + 0x25) == 0) {
                      cVar3 = Event_Upgrade_Jar::isNewNPC(GlobalData::s_pEvent_UpGrade_Jar);
                      if (cVar3 == '\0') {
                        cVar3 = Event_Upgrade_Jar::isFortune(GlobalData::s_pEvent_UpGrade_Jar);
                        if (cVar3 == '\0') {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                        }
                        else {
                          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,3);
                        }
                      }
                      else {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,2);
                      }
                    }
                    else {
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                    }
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(int)(char)local_3c);
                    uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                    if ((*(int *)(local_48 + 0x234) <= (int)(uVar11 & 0xff)) &&
                       ((*(short *)(param_2 + 0x25) == 0 || (local_35 != '\0')))) {
                      _NoticeUpgrade(this,param_1,(Inven_Item *)&local_125,local_36);
                    }
                    bVar5 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                    bVar1 = local_36;
                    if (0xc < bVar5) {
                      uVar15 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      pcVar16 = (char *)CUserCharacInfo::getCurCharacName
                                                  ((CUserCharacInfo *)param_1);
                      uVar17 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                      uVar11 = CONCAT22(uStack_121,uStack_123);
                      iVar10 = G_CEnvironment();
                      DB_ReqItemUpgradeLog::makeRequest
                                (*(uint *)(iVar10 + 0x378),uVar11,uVar17,pcVar16,uVar15 & 0xff,bVar1
                                );
                    }
                    if (local_36 == true) {
                      if (*(short *)(param_2 + 0x25) == 0) {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                      }
                      else if (local_35 == '\0') {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                      }
                      else {
                        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                      }
                      uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,uVar11 & 0xff);
                      InterfacePacketBuf::put_short
                                ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x1b));
                      if (*(short *)(param_2 + 0x25) == 0) {
                        APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0xc,0,0);
                      }
                    }
                    else {
                      local_e8 = 0;
                      sVar8 = (short)_uStack_11e;
                      this_01 = (Store *)G_Store();
                      Store::GetSellItemPrice
                                (this_01,(Inven_Item *)&local_125,local_50,sVar8,false,&local_e8);
                      iVar10 = local_e8;
                      pCVar14 = (CValueStatistic *)GetInstanceValueStatistic();
                      CValueStatistic::AddValueStatistic(pCVar14,0xf,param_1,iVar10);
                      local_20 = 0;
                      local_20 = _ProcPenalty(this,param_1,(Inven_Item *)&local_125,local_50,
                                              *(ushort *)(param_2 + 0x1b),local_48,local_288,param_3
                                              ,(Inven_Item *)&local_19f,local_49);
                      if (local_20 != 0) {
                        if (local_20 != 0xd8) {
                          return local_20;
                        }
                        CUser::SendUpdateItem(param_1,1,0,*(undefined2 *)(param_2 + 0x23));
                        CUser::SendUpdateItemList(param_1,1,0,0);
                        return local_20;
                      }
                    }
                    bVar1 = local_36;
                    uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                    iVar10 = CItem::get_index(local_50);
                    cUserHistoryLog::UpgradeItem
                              ((cUserHistoryLog *)(param_1 + 0x79700),iVar10,local_3c,uVar11 & 0xff,
                               bVar1);
                    cVar3 = (**(code **)(*(int *)local_50 + 0x4c))(local_50);
                    bVar1 = local_36;
                    if (cVar3 == '\0') {
                      uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      pcVar16 = (char *)CItem::GetItemName(local_50);
                      CUser::makeGuildItemUpgradMessage
                                (param_1,pcVar16,local_3c,uVar11 & 0xff,bVar1);
                    }
                    else {
                      uVar11 = Inven_Item::GetUpgrade((Inven_Item *)&local_125);
                      CUser::makeGuildItemUpgradMessage
                                (param_1,(char *)(param_2 + 0x28),local_3c,uVar11 & 0xff,bVar1);
                    }
                    if (CONCAT22(uStack_121,uStack_123) != 0) {
                      CInventory::update_item
                                (local_54,1,*(undefined2 *)(param_2 + 0x1b),
                                 CONCAT22(uStack_123,local_125),
                                 CONCAT13(uStack_11e,CONCAT12(uStack_11f,uStack_121)),
                                 CONCAT13(uStack_11a,uStack_11d),local_119,local_115,local_111,
                                 local_10d,local_109,local_105,local_101,local_fd,local_f9,local_f5,
                                 local_f1,local_ed,local_e9);
                    }
                    CUser::SendUpdateItemList(param_1,1,0,0);
                    local_40 = 0;
                  }
                  else {
                    local_40 = 0x11;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      local_40 = 0x13;
    }
  }
  else {
    local_40 = 0xd;
  }
  return local_40;
}
```
