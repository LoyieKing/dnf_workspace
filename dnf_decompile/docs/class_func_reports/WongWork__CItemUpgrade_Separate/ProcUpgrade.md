# ProcUpgrade

`_ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard`

`WongWork::CItemUpgrade_Separate::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade_Separate` | `0x0811e66e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0811e66e  _ZN8WongWork21CItemUpgrade_Separate11ProcUpgradeEP5CUserP16MSG_ITEM_UPGRADEP11PacketGuard
#           WongWork::CItemUpgrade_Separate::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*)
# range [0x0811e66e, 0x0811eca7]
0811e66e +0x000:  push   %ebp
0811e66f +0x001:  mov    %esp,%ebp
0811e671 +0x003:  push   %edi
0811e672 +0x004:  push   %esi
0811e673 +0x005:  push   %ebx
0811e674 +0x006:  sub    $0x17c,%esp
0811e67a +0x00c:  mov    0xc(%ebp),%eax
0811e67d +0x00f:  mov    %eax,(%esp)
0811e680 +0x012:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0811e685 +0x017:  mov    %eax,-0x34(%ebp)
0811e688 +0x01a:  mov    0x10(%ebp),%eax
0811e68b +0x01d:  movzwl 0x1b(%eax),%eax
0811e68f +0x021:  movzwl %ax,%edx
0811e692 +0x024:  lea    -0xb9(%ebp),%eax
0811e698 +0x02a:  mov    %edx,0xc(%esp)
0811e69c +0x02e:  movl   $0x1,0x8(%esp)
0811e6a4 +0x036:  mov    -0x34(%ebp),%edx
0811e6a7 +0x039:  mov    %edx,0x4(%esp)
0811e6ab +0x03d:  mov    %eax,(%esp)
0811e6ae +0x040:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0811e6b3 +0x045:  sub    $0x4,%esp
0811e6b6 +0x048:  lea    -0xb9(%ebp),%eax
0811e6bc +0x04e:  mov    %eax,(%esp)
0811e6bf +0x051:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0811e6c4 +0x056:  test   %al,%al
0811e6c6 +0x058:  je     0811e6d2 <+0x64>
0811e6c8 +0x05a:  mov    $0x4,%eax
0811e6cd +0x05f:  jmp    0811ec9c <+0x62e>
0811e6d2 +0x064:  mov    -0xb7(%ebp),%edx
0811e6d8 +0x06a:  mov    0x10(%ebp),%eax
0811e6db +0x06d:  mov    0x1d(%eax),%eax
0811e6de +0x070:  cmp    %eax,%edx
0811e6e0 +0x072:  je     0811e6ec <+0x7e>
0811e6e2 +0x074:  mov    $0x4,%eax
0811e6e7 +0x079:  jmp    0811ec9c <+0x62e>
0811e6ec +0x07e:  lea    -0xf6(%ebp),%eax
0811e6f2 +0x084:  mov    %eax,(%esp)
0811e6f5 +0x087:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0811e6fa +0x08c:  mov    0x10(%ebp),%eax
0811e6fd +0x08f:  movzwl 0x23(%eax),%eax
0811e701 +0x093:  movzwl %ax,%edx
0811e704 +0x096:  lea    -0x138(%ebp),%eax
0811e70a +0x09c:  mov    %edx,0xc(%esp)
0811e70e +0x0a0:  movl   $0x1,0x8(%esp)
0811e716 +0x0a8:  mov    -0x34(%ebp),%edx
0811e719 +0x0ab:  mov    %edx,0x4(%esp)
0811e71d +0x0af:  mov    %eax,(%esp)
0811e720 +0x0b2:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0811e725 +0x0b7:  sub    $0x4,%esp
0811e728 +0x0ba:  mov    -0x138(%ebp),%eax
0811e72e +0x0c0:  mov    %eax,-0xf6(%ebp)
0811e734 +0x0c6:  mov    -0x134(%ebp),%eax
0811e73a +0x0cc:  mov    %eax,-0xf2(%ebp)
0811e740 +0x0d2:  mov    -0x130(%ebp),%eax
0811e746 +0x0d8:  mov    %eax,-0xee(%ebp)
0811e74c +0x0de:  mov    -0x12c(%ebp),%eax
0811e752 +0x0e4:  mov    %eax,-0xea(%ebp)
0811e758 +0x0ea:  mov    -0x128(%ebp),%eax
0811e75e +0x0f0:  mov    %eax,-0xe6(%ebp)
0811e764 +0x0f6:  mov    -0x124(%ebp),%eax
0811e76a +0x0fc:  mov    %eax,-0xe2(%ebp)
0811e770 +0x102:  mov    -0x120(%ebp),%eax
0811e776 +0x108:  mov    %eax,-0xde(%ebp)
0811e77c +0x10e:  mov    -0x11c(%ebp),%eax
0811e782 +0x114:  mov    %eax,-0xda(%ebp)
0811e788 +0x11a:  mov    -0x118(%ebp),%eax
0811e78e +0x120:  mov    %eax,-0xd6(%ebp)
0811e794 +0x126:  mov    -0x114(%ebp),%eax
0811e79a +0x12c:  mov    %eax,-0xd2(%ebp)
0811e7a0 +0x132:  mov    -0x110(%ebp),%eax
0811e7a6 +0x138:  mov    %eax,-0xce(%ebp)
0811e7ac +0x13e:  mov    -0x10c(%ebp),%eax
0811e7b2 +0x144:  mov    %eax,-0xca(%ebp)
0811e7b8 +0x14a:  mov    -0x108(%ebp),%eax
0811e7be +0x150:  mov    %eax,-0xc6(%ebp)
0811e7c4 +0x156:  mov    -0x104(%ebp),%eax
0811e7ca +0x15c:  mov    %eax,-0xc2(%ebp)
0811e7d0 +0x162:  mov    -0x100(%ebp),%eax
0811e7d6 +0x168:  mov    %eax,-0xbe(%ebp)
0811e7dc +0x16e:  movzbl -0xfc(%ebp),%eax
0811e7e3 +0x175:  mov    %al,-0xba(%ebp)
0811e7e9 +0x17b:  lea    -0xf6(%ebp),%eax
0811e7ef +0x181:  mov    %eax,(%esp)
0811e7f2 +0x184:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0811e7f7 +0x189:  test   %al,%al
0811e7f9 +0x18b:  je     0811e805 <+0x197>
0811e7fb +0x18d:  mov    $0x16,%eax
0811e800 +0x192:  jmp    0811ec9c <+0x62e>
0811e805 +0x197:  mov    -0xb7(%ebp),%eax
0811e80b +0x19d:  mov    %eax,%ebx
0811e80d +0x19f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0811e812 +0x1a4:  mov    %ebx,0x4(%esp)
0811e816 +0x1a8:  mov    %eax,(%esp)
0811e819 +0x1ab:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0811e81e +0x1b0:  mov    %eax,-0x30(%ebp)
0811e821 +0x1b3:  cmpl   $0x0,-0x30(%ebp)
0811e825 +0x1b7:  jne    0811e831 <+0x1c3>
0811e827 +0x1b9:  mov    $0x4,%eax
0811e82c +0x1be:  jmp    0811ec9c <+0x62e>
0811e831 +0x1c3:  mov    0x8(%ebp),%eax
0811e834 +0x1c6:  mov    %eax,(%esp)
0811e837 +0x1c9:  call   0811ee16 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x111>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x111
0811e83c +0x1ce:  mov    %eax,-0x2c(%ebp)
0811e83f +0x1d1:  lea    -0x7c(%ebp),%eax
0811e842 +0x1d4:  mov    %eax,(%esp)
0811e845 +0x1d7:  call   0811edfe <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0xf9>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0xf9
0811e84a +0x1dc:  mov    0xc(%ebp),%eax
0811e84d +0x1df:  mov    %eax,(%esp)
0811e850 +0x1e2:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0811e855 +0x1e7:  mov    %eax,0x14(%esp)
0811e859 +0x1eb:  lea    -0x7c(%ebp),%eax
0811e85c +0x1ee:  mov    %eax,0x10(%esp)
0811e860 +0x1f2:  mov    -0x2c(%ebp),%eax
0811e863 +0x1f5:  mov    %eax,0xc(%esp)
0811e867 +0x1f9:  mov    -0x30(%ebp),%eax
0811e86a +0x1fc:  mov    %eax,0x8(%esp)
0811e86e +0x200:  lea    -0xb9(%ebp),%eax
0811e874 +0x206:  mov    %eax,0x4(%esp)
0811e878 +0x20a:  mov    0x8(%ebp),%eax
0811e87b +0x20d:  mov    %eax,(%esp)
0811e87e +0x210:  call   0811e2e2 <_ZN8WongWork21CItemUpgrade_Separate15_GetUpgradeInfoEPK10Inven_ItemPK5CItemRK25GenuineDamageUpgradeTablePNS_13STUpgradeInfoEi>  ; WongWork::CItemUpgrade_Separate::_GetUpgradeInfo(Inven_Item const*, CItem const*, GenuineDamageUpgradeTable const&, WongWork::STUpgradeInfo*, int)
0811e883 +0x215:  xor    $0x1,%eax
0811e886 +0x218:  test   %al,%al
0811e888 +0x21a:  je     0811e894 <+0x226>
0811e88a +0x21c:  mov    $0xd,%eax
0811e88f +0x221:  jmp    0811ec9c <+0x62e>
0811e894 +0x226:  movl   $0x0,-0x28(%ebp)
0811e89b +0x22d:  mov    0xc(%ebp),%eax
0811e89e +0x230:  mov    %eax,(%esp)
0811e8a1 +0x233:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0811e8a6 +0x238:  mov    %eax,0x18(%esp)
0811e8aa +0x23c:  mov    -0x2c(%ebp),%eax
0811e8ad +0x23f:  mov    %eax,0x14(%esp)
0811e8b1 +0x243:  lea    -0xf6(%ebp),%eax
0811e8b7 +0x249:  mov    %eax,0x10(%esp)
0811e8bb +0x24d:  mov    -0x30(%ebp),%eax
0811e8be +0x250:  mov    %eax,0xc(%esp)
0811e8c2 +0x254:  lea    -0xb9(%ebp),%eax
0811e8c8 +0x25a:  mov    %eax,0x8(%esp)
0811e8cc +0x25e:  mov    0xc(%ebp),%eax
0811e8cf +0x261:  mov    %eax,0x4(%esp)
0811e8d3 +0x265:  mov    0x8(%ebp),%eax
0811e8d6 +0x268:  mov    %eax,(%esp)
0811e8d9 +0x26b:  call   0811e138 <_ZNK8WongWork21CItemUpgrade_Separate15_CheckConditionEPK5CUserRK10Inven_ItemPK5CItemS6_RK25GenuineDamageUpgradeTablei>  ; WongWork::CItemUpgrade_Separate::_CheckCondition(CUser const*, Inven_Item const&, CItem const*, Inven_Item const&, GenuineDamageUpgradeTable const&, int) const
0811e8de +0x270:  mov    %eax,-0x28(%ebp)
0811e8e1 +0x273:  cmpl   $0x0,-0x28(%ebp)
0811e8e5 +0x277:  setne  %al
0811e8e8 +0x27a:  test   %al,%al
0811e8ea +0x27c:  je     0811e8f4 <+0x286>
0811e8ec +0x27e:  mov    -0x28(%ebp),%eax
0811e8ef +0x281:  jmp    0811ec9c <+0x62e>
0811e8f4 +0x286:  lea    -0xb9(%ebp),%eax
0811e8fa +0x28c:  add    $0x33,%eax
0811e8fd +0x28f:  mov    %eax,(%esp)
0811e900 +0x292:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811e905 +0x297:  movzbl %al,%eax
0811e908 +0x29a:  mov    %eax,-0x24(%ebp)
0811e90b +0x29d:  movb   $0x0,-0x1d(%ebp)
0811e90f +0x2a1:  lea    -0x7c(%ebp),%eax
0811e912 +0x2a4:  mov    %eax,0xc(%esp)
0811e916 +0x2a8:  lea    -0xb9(%ebp),%eax
0811e91c +0x2ae:  mov    %eax,0x8(%esp)
0811e920 +0x2b2:  mov    0xc(%ebp),%eax
0811e923 +0x2b5:  mov    %eax,0x4(%esp)
0811e927 +0x2b9:  mov    0x8(%ebp),%eax
0811e92a +0x2bc:  mov    %eax,(%esp)
0811e92d +0x2bf:  call   0811e468 <_ZN8WongWork21CItemUpgrade_Separate14_DoProcUpgradeEP5CUserP10Inven_ItemPKNS_13STUpgradeInfoE>  ; WongWork::CItemUpgrade_Separate::_DoProcUpgrade(CUser*, Inven_Item*, WongWork::STUpgradeInfo const*)
0811e932 +0x2c4:  mov    %al,-0x1d(%ebp)
0811e935 +0x2c7:  mov    -0x7c(%ebp),%eax
0811e938 +0x2ca:  mov    %eax,%esi
0811e93a +0x2cc:  mov    0x10(%ebp),%eax
0811e93d +0x2cf:  movzwl 0x23(%eax),%eax
0811e941 +0x2d3:  movzwl %ax,%ebx
0811e944 +0x2d6:  mov    0xc(%ebp),%eax
0811e947 +0x2d9:  mov    %eax,(%esp)
0811e94a +0x2dc:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0811e94f +0x2e1:  movl   $0x1,0x14(%esp)
0811e957 +0x2e9:  movl   $0xc,0x10(%esp)
0811e95f +0x2f1:  mov    %esi,0xc(%esp)
0811e963 +0x2f5:  mov    %ebx,0x8(%esp)
0811e967 +0x2f9:  movl   $0x1,0x4(%esp)
0811e96f +0x301:  mov    %eax,(%esp)
0811e972 +0x304:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
0811e977 +0x309:  xor    $0x1,%eax
0811e97a +0x30c:  test   %al,%al
0811e97c +0x30e:  je     0811e988 <+0x31a>
0811e97e +0x310:  mov    $0x11,%eax
0811e983 +0x315:  jmp    0811ec9c <+0x62e>
0811e988 +0x31a:  mov    0x14(%ebp),%eax
0811e98b +0x31d:  movl   $0x1,0x4(%esp)
0811e993 +0x325:  mov    %eax,(%esp)
0811e996 +0x328:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811e99b +0x32d:  mov    0x10(%ebp),%eax
0811e99e +0x330:  movzwl 0x23(%eax),%eax
0811e9a2 +0x334:  movzwl %ax,%edx
0811e9a5 +0x337:  mov    0x14(%ebp),%eax
0811e9a8 +0x33a:  mov    %edx,0x4(%esp)
0811e9ac +0x33e:  mov    %eax,(%esp)
0811e9af +0x341:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0811e9b4 +0x346:  mov    0x10(%ebp),%eax
0811e9b7 +0x349:  movzwl 0x23(%eax),%eax
0811e9bb +0x34d:  movzwl %ax,%ebx
0811e9be +0x350:  mov    0xc(%ebp),%eax
0811e9c1 +0x353:  mov    %eax,(%esp)
0811e9c4 +0x356:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0811e9c9 +0x35b:  lea    -0x71(%ebp),%edx
0811e9cc +0x35e:  mov    %ebx,0xc(%esp)
0811e9d0 +0x362:  movl   $0x1,0x8(%esp)
0811e9d8 +0x36a:  mov    %eax,0x4(%esp)
0811e9dc +0x36e:  mov    %edx,(%esp)
0811e9df +0x371:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0811e9e4 +0x376:  sub    $0x4,%esp
0811e9e7 +0x379:  lea    -0x71(%ebp),%eax
0811e9ea +0x37c:  mov    %eax,(%esp)
0811e9ed +0x37f:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
0811e9f2 +0x384:  mov    0x14(%ebp),%edx
0811e9f5 +0x387:  mov    %eax,0x4(%esp)
0811e9f9 +0x38b:  mov    %edx,(%esp)
0811e9fc +0x38e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0811ea01 +0x393:  mov    -0x24(%ebp),%eax
0811ea04 +0x396:  movsbl %al,%edx
0811ea07 +0x399:  mov    0x14(%ebp),%eax
0811ea0a +0x39c:  mov    %edx,0x4(%esp)
0811ea0e +0x3a0:  mov    %eax,(%esp)
0811ea11 +0x3a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811ea16 +0x3a8:  lea    -0xb9(%ebp),%eax
0811ea1c +0x3ae:  add    $0x33,%eax
0811ea1f +0x3b1:  mov    %eax,(%esp)
0811ea22 +0x3b4:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811ea27 +0x3b9:  cmp    $0x5,%al
0811ea29 +0x3bb:  seta   %al
0811ea2c +0x3be:  test   %al,%al
0811ea2e +0x3c0:  je     0811ea54 <+0x3e6>
0811ea30 +0x3c2:  movzbl -0x1d(%ebp),%eax
0811ea34 +0x3c6:  mov    %eax,0xc(%esp)
0811ea38 +0x3ca:  lea    -0xb9(%ebp),%eax
0811ea3e +0x3d0:  mov    %eax,0x8(%esp)
0811ea42 +0x3d4:  mov    0xc(%ebp),%eax
0811ea45 +0x3d7:  mov    %eax,0x4(%esp)
0811ea49 +0x3db:  mov    0x8(%ebp),%eax
0811ea4c +0x3de:  mov    %eax,(%esp)
0811ea4f +0x3e1:  call   0811e53a <_ZN8WongWork21CItemUpgrade_Separate14_NoticeUpgradeEPK5CUserRK10Inven_Itemb>  ; WongWork::CItemUpgrade_Separate::_NoticeUpgrade(CUser const*, Inven_Item const&, bool)
0811ea54 +0x3e6:  cmpb   $0x0,-0x1d(%ebp)
0811ea58 +0x3ea:  je     0811ea6f <+0x401>
0811ea5a +0x3ec:  mov    0x14(%ebp),%eax
0811ea5d +0x3ef:  movl   $0x0,0x4(%esp)
0811ea65 +0x3f7:  mov    %eax,(%esp)
0811ea68 +0x3fa:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811ea6d +0x3ff:  jmp    0811ea82 <+0x414>
0811ea6f +0x401:  mov    0x14(%ebp),%eax
0811ea72 +0x404:  movl   $0x1,0x4(%esp)
0811ea7a +0x40c:  mov    %eax,(%esp)
0811ea7d +0x40f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811ea82 +0x414:  lea    -0xb9(%ebp),%eax
0811ea88 +0x41a:  add    $0x33,%eax
0811ea8b +0x41d:  mov    %eax,(%esp)
0811ea8e +0x420:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811ea93 +0x425:  movzbl %al,%eax
0811ea96 +0x428:  mov    %eax,-0x1c(%ebp)
0811ea99 +0x42b:  mov    0x14(%ebp),%eax
0811ea9c +0x42e:  mov    -0x1c(%ebp),%edx
0811ea9f +0x431:  mov    %edx,0x4(%esp)
0811eaa3 +0x435:  mov    %eax,(%esp)
0811eaa6 +0x438:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0811eaab +0x43d:  mov    0x10(%ebp),%eax
0811eaae +0x440:  movzwl 0x1b(%eax),%eax
0811eab2 +0x444:  movzwl %ax,%edx
0811eab5 +0x447:  mov    0x14(%ebp),%eax
0811eab8 +0x44a:  mov    %edx,0x4(%esp)
0811eabc +0x44e:  mov    %eax,(%esp)
0811eabf +0x451:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0811eac4 +0x456:  mov    -0xb7(%ebp),%eax
0811eaca +0x45c:  test   %eax,%eax
0811eacc +0x45e:  je     0811eb91 <+0x523>
0811ead2 +0x464:  mov    0x10(%ebp),%eax
0811ead5 +0x467:  movzwl 0x1b(%eax),%eax
0811ead9 +0x46b:  movzwl %ax,%eax
0811eadc +0x46e:  mov    -0xb9(%ebp),%edx
0811eae2 +0x474:  mov    %edx,0xc(%esp)
0811eae6 +0x478:  mov    -0xb5(%ebp),%edx
0811eaec +0x47e:  mov    %edx,0x10(%esp)
0811eaf0 +0x482:  mov    -0xb1(%ebp),%edx
0811eaf6 +0x488:  mov    %edx,0x14(%esp)
0811eafa +0x48c:  mov    -0xad(%ebp),%edx
0811eb00 +0x492:  mov    %edx,0x18(%esp)
0811eb04 +0x496:  mov    -0xa9(%ebp),%edx
0811eb0a +0x49c:  mov    %edx,0x1c(%esp)
0811eb0e +0x4a0:  mov    -0xa5(%ebp),%edx
0811eb14 +0x4a6:  mov    %edx,0x20(%esp)
0811eb18 +0x4aa:  mov    -0xa1(%ebp),%edx
0811eb1e +0x4b0:  mov    %edx,0x24(%esp)
0811eb22 +0x4b4:  mov    -0x9d(%ebp),%edx
0811eb28 +0x4ba:  mov    %edx,0x28(%esp)
0811eb2c +0x4be:  mov    -0x99(%ebp),%edx
0811eb32 +0x4c4:  mov    %edx,0x2c(%esp)
0811eb36 +0x4c8:  mov    -0x95(%ebp),%edx
0811eb3c +0x4ce:  mov    %edx,0x30(%esp)
0811eb40 +0x4d2:  mov    -0x91(%ebp),%edx
0811eb46 +0x4d8:  mov    %edx,0x34(%esp)
0811eb4a +0x4dc:  mov    -0x8d(%ebp),%edx
0811eb50 +0x4e2:  mov    %edx,0x38(%esp)
0811eb54 +0x4e6:  mov    -0x89(%ebp),%edx
0811eb5a +0x4ec:  mov    %edx,0x3c(%esp)
0811eb5e +0x4f0:  mov    -0x85(%ebp),%edx
0811eb64 +0x4f6:  mov    %edx,0x40(%esp)
0811eb68 +0x4fa:  mov    -0x81(%ebp),%edx
0811eb6e +0x500:  mov    %edx,0x44(%esp)
0811eb72 +0x504:  movzbl -0x7d(%ebp),%edx
0811eb76 +0x508:  mov    %dl,0x48(%esp)
0811eb7a +0x50c:  mov    %eax,0x8(%esp)
0811eb7e +0x510:  movl   $0x1,0x4(%esp)
0811eb86 +0x518:  mov    -0x34(%ebp),%eax
0811eb89 +0x51b:  mov    %eax,(%esp)
0811eb8c +0x51e:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
0811eb91 +0x523:  movzbl -0x1d(%ebp),%esi
0811eb95 +0x527:  lea    -0xb9(%ebp),%eax
0811eb9b +0x52d:  add    $0x33,%eax
0811eb9e +0x530:  mov    %eax,(%esp)
0811eba1 +0x533:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811eba6 +0x538:  movzbl %al,%ebx
0811eba9 +0x53b:  mov    -0x30(%ebp),%eax
0811ebac +0x53e:  mov    %eax,(%esp)
0811ebaf +0x541:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0811ebb4 +0x546:  mov    0xc(%ebp),%edx
0811ebb7 +0x549:  lea    0x79700(%edx),%ecx
0811ebbd +0x54f:  mov    %esi,0x10(%esp)
0811ebc1 +0x553:  mov    %ebx,0xc(%esp)
0811ebc5 +0x557:  mov    -0x24(%ebp),%edx
0811ebc8 +0x55a:  mov    %edx,0x8(%esp)
0811ebcc +0x55e:  mov    %eax,0x4(%esp)
0811ebd0 +0x562:  mov    %ecx,(%esp)
0811ebd3 +0x565:  call   08684d0a <_ZN15cUserHistoryLog19SeparateUpgradeItemEiiib>  ; cUserHistoryLog::SeparateUpgradeItem(int, int, int, bool)
0811ebd8 +0x56a:  mov    -0x30(%ebp),%eax
0811ebdb +0x56d:  mov    (%eax),%eax
0811ebdd +0x56f:  add    $0x4c,%eax
0811ebe0 +0x572:  mov    (%eax),%edx
0811ebe2 +0x574:  mov    -0x30(%ebp),%eax
0811ebe5 +0x577:  mov    %eax,(%esp)
0811ebe8 +0x57a:  call   *%edx
0811ebea +0x57c:  test   %al,%al
0811ebec +0x57e:  je     0811ec41 <+0x5d3>
0811ebee +0x580:  lea    -0xb9(%ebp),%eax
0811ebf4 +0x586:  mov    %eax,(%esp)
0811ebf7 +0x589:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0811ebfc +0x58e:  movzbl %al,%esi
0811ebff +0x591:  movzbl -0x1d(%ebp),%ebx
0811ec03 +0x595:  lea    -0xb9(%ebp),%eax
0811ec09 +0x59b:  add    $0x33,%eax
0811ec0c +0x59e:  mov    %eax,(%esp)
0811ec0f +0x5a1:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811ec14 +0x5a6:  movzbl %al,%eax
0811ec17 +0x5a9:  mov    0x10(%ebp),%edx
0811ec1a +0x5ac:  add    $0x28,%edx
0811ec1d +0x5af:  mov    %esi,0x14(%esp)
0811ec21 +0x5b3:  mov    %ebx,0x10(%esp)
0811ec25 +0x5b7:  mov    %eax,0xc(%esp)
0811ec29 +0x5bb:  mov    -0x24(%ebp),%eax
0811ec2c +0x5be:  mov    %eax,0x8(%esp)
0811ec30 +0x5c2:  mov    %edx,0x4(%esp)
0811ec34 +0x5c6:  mov    0xc(%ebp),%eax
0811ec37 +0x5c9:  mov    %eax,(%esp)
0811ec3a +0x5cc:  call   0867a242 <_ZN5CUser34makeGuildItemSeparateUpgradMessageEPKciibi>  ; CUser::makeGuildItemSeparateUpgradMessage(char const*, int, int, bool, int)
0811ec3f +0x5d1:  jmp    0811ec97 <+0x629>
0811ec41 +0x5d3:  lea    -0xb9(%ebp),%eax
0811ec47 +0x5d9:  mov    %eax,(%esp)
0811ec4a +0x5dc:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
0811ec4f +0x5e1:  movzbl %al,%edi
0811ec52 +0x5e4:  movzbl -0x1d(%ebp),%esi
0811ec56 +0x5e8:  lea    -0xb9(%ebp),%eax
0811ec5c +0x5ee:  add    $0x33,%eax
0811ec5f +0x5f1:  mov    %eax,(%esp)
0811ec62 +0x5f4:  call   0811ed58 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x53>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x53
0811ec67 +0x5f9:  movzbl %al,%ebx
0811ec6a +0x5fc:  mov    -0x30(%ebp),%eax
0811ec6d +0x5ff:  mov    %eax,(%esp)
0811ec70 +0x602:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
0811ec75 +0x607:  mov    %edi,0x14(%esp)
0811ec79 +0x60b:  mov    %esi,0x10(%esp)
0811ec7d +0x60f:  mov    %ebx,0xc(%esp)
0811ec81 +0x613:  mov    -0x24(%ebp),%edx
0811ec84 +0x616:  mov    %edx,0x8(%esp)
0811ec88 +0x61a:  mov    %eax,0x4(%esp)
0811ec8c +0x61e:  mov    0xc(%ebp),%eax
0811ec8f +0x621:  mov    %eax,(%esp)
0811ec92 +0x624:  call   0867a242 <_ZN5CUser34makeGuildItemSeparateUpgradMessageEPKciibi>  ; CUser::makeGuildItemSeparateUpgradMessage(char const*, int, int, bool, int)
0811ec97 +0x629:  mov    $0x0,%eax
0811ec9c +0x62e:  lea    -0xc(%ebp),%esp
0811ec9f +0x631:  add    $0x0,%esp
0811eca2 +0x634:  pop    %ebx
0811eca3 +0x635:  pop    %esi
0811eca4 +0x636:  pop    %edi
0811eca5 +0x637:  pop    %ebp
0811eca6 +0x638:  ret
0811eca7 +0x639:  nop
```

## 反编译 C

```c
// WongWork::CItemUpgrade_Separate::ProcUpgrade @ 0x811e66e

/* WongWork::CItemUpgrade_Separate::ProcUpgrade(CUser*, MSG_ITEM_UPGRADE*, PacketGuard*) */

int __thiscall
WongWork::CItemUpgrade_Separate::ProcUpgrade
          (CItemUpgrade_Separate *this,CUser *param_1,MSG_ITEM_UPGRADE *param_2,PacketGuard *param_3
          )

{
  undefined2 uVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  CDataManager *this_00;
  int iVar5;
  CInventory *pCVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined1 local_100;
  undefined4 local_fa;
  undefined4 local_f6;
  undefined4 local_f2;
  undefined4 local_ee;
  undefined4 local_ea;
  undefined4 local_e6;
  undefined4 local_e2;
  undefined4 local_de;
  undefined4 local_da;
  undefined4 local_d6;
  undefined4 local_d2;
  undefined4 local_ce;
  undefined4 local_ca;
  undefined4 local_c6;
  undefined4 local_c2;
  undefined1 local_be;
  undefined2 local_bd;
  undefined2 uStack_bb;
  undefined2 uStack_b9;
  undefined2 uStack_b7;
  undefined4 local_b5;
  undefined4 local_b1;
  undefined4 local_ad;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined1 local_81;
  undefined4 local_80 [2];
  Inven_Item local_75 [61];
  int local_38;
  CItem *local_34;
  GenuineDamageUpgradeTable *local_30;
  int local_2c;
  uint local_28;
  bool local_21;
  uint local_20;
  
  local_38 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_bd,local_38);
  cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_bd);
  if (cVar3 == '\0') {
    if (CONCAT22(uStack_b9,uStack_bb) == *(int *)(param_2 + 0x1d)) {
      Inven_Item::Inven_Item((Inven_Item *)&local_fa);
      CInventory::GetInvenSlot((int)&local_13c,local_38);
      local_fa = local_13c;
      local_f6 = local_138;
      local_f2 = local_134;
      local_ee = local_130;
      local_ea = local_12c;
      local_e6 = local_128;
      local_e2 = local_124;
      local_de = local_120;
      local_da = local_11c;
      local_d6 = local_118;
      local_d2 = local_114;
      local_ce = local_110;
      local_ca = local_10c;
      local_c6 = local_108;
      local_c2 = local_104;
      local_be = local_100;
      cVar3 = Inven_Item::isEmpty((Inven_Item *)&local_fa);
      if (cVar3 == '\0') {
        iVar5 = CONCAT22(uStack_b9,uStack_bb);
        this_00 = (CDataManager *)G_CDataManager();
        local_34 = (CItem *)CDataManager::find_item(this_00,iVar5);
        if (local_34 == (CItem *)0x0) {
          local_2c = 4;
        }
        else {
          local_30 = (GenuineDamageUpgradeTable *)getUpgradeInfoTable(this);
          STUpgradeInfo::STUpgradeInfo((STUpgradeInfo *)local_80);
          iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          cVar3 = _GetUpgradeInfo(this,(Inven_Item *)&local_bd,local_34,local_30,
                                  (STUpgradeInfo *)local_80,iVar5);
          if (cVar3 == '\x01') {
            local_2c = 0;
            iVar5 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
            local_2c = _CheckCondition(this,param_1,(Inven_Item *)&local_bd,local_34,
                                       (Inven_Item *)&local_fa,local_30,iVar5);
            if (local_2c == 0) {
              local_28 = UpgradeSeparateInfo::GetUpgradeSeparate
                                   ((UpgradeSeparateInfo *)((int)&local_8d + 3));
              local_28 = local_28 & 0xff;
              local_21 = false;
              local_21 = (bool)_DoProcUpgrade(this,param_1,(Inven_Item *)&local_bd,
                                              (STUpgradeInfo *)local_80);
              uVar1 = *(undefined2 *)(param_2 + 0x23);
              pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1)
              ;
              cVar3 = CInventory::delete_item(pCVar6,1,uVar1,local_80[0],0xc,1);
              if (cVar3 == '\x01') {
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x23));
                iVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::GetInvenSlot((int)local_75,iVar5);
                iVar5 = Inven_Item::get_add_info(local_75);
                InterfacePacketBuf::put_int((InterfacePacketBuf *)param_3,iVar5);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,(int)(char)local_28);
                bVar4 = UpgradeSeparateInfo::GetUpgradeSeparate
                                  ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                if (5 < bVar4) {
                  _NoticeUpgrade(this,param_1,(Inven_Item *)&local_bd,local_21);
                }
                if (local_21 == false) {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,1);
                }
                else {
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,0);
                }
                local_20 = UpgradeSeparateInfo::GetUpgradeSeparate
                                     ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                local_20 = local_20 & 0xff;
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_3,local_20);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)param_3,(uint)*(ushort *)(param_2 + 0x1b));
                if (CONCAT22(uStack_b9,uStack_bb) != 0) {
                  CInventory::update_item
                            (local_38,1,*(undefined2 *)(param_2 + 0x1b),CONCAT22(uStack_bb,local_bd)
                             ,CONCAT22(uStack_b7,uStack_b9),local_b5,local_b1,local_ad,local_a9,
                             local_a5,local_a1,local_9d,local_99,local_95,local_91,local_8d,local_89
                             ,local_85,local_81);
                }
                bVar2 = local_21;
                uVar7 = UpgradeSeparateInfo::GetUpgradeSeparate
                                  ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                iVar5 = CItem::get_index(local_34);
                cUserHistoryLog::SeparateUpgradeItem
                          ((cUserHistoryLog *)(param_1 + 0x79700),iVar5,local_28,uVar7 & 0xff,bVar2)
                ;
                cVar3 = (**(code **)(*(int *)local_34 + 0x4c))(local_34);
                if (cVar3 == '\0') {
                  uVar7 = Inven_Item::GetUpgrade((Inven_Item *)&local_bd);
                  bVar2 = local_21;
                  uVar8 = UpgradeSeparateInfo::GetUpgradeSeparate
                                    ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                  pcVar9 = (char *)CItem::GetItemName(local_34);
                  CUser::makeGuildItemSeparateUpgradMessage
                            (param_1,pcVar9,local_28,uVar8 & 0xff,bVar2,uVar7 & 0xff);
                }
                else {
                  uVar7 = Inven_Item::GetUpgrade((Inven_Item *)&local_bd);
                  bVar2 = local_21;
                  uVar8 = UpgradeSeparateInfo::GetUpgradeSeparate
                                    ((UpgradeSeparateInfo *)((int)&local_8d + 3));
                  CUser::makeGuildItemSeparateUpgradMessage
                            (param_1,(char *)(param_2 + 0x28),local_28,uVar8 & 0xff,bVar2,
                             uVar7 & 0xff);
                }
                local_2c = 0;
              }
              else {
                local_2c = 0x11;
              }
            }
          }
          else {
            local_2c = 0xd;
          }
        }
      }
      else {
        local_2c = 0x16;
      }
    }
    else {
      local_2c = 4;
    }
  }
  else {
    local_2c = 4;
  }
  return local_2c;
}
```
