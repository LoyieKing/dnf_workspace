# _processItem

`_ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE`

`WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08325b22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08325b22  _ZN8WongWork9CCeraShop12_processItemEP5CUser10Inven_ItemiRilbbRSt6vectorIS3_SaIS3_EERNS0_21stCeraShopItemParam_tE
#           WongWork::CCeraShop::_processItem(CUser*, Inven_Item, int, int&, long, bool, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&)
# range [0x08325b22, 0x08325d65]
08325b22 +0x000:  push   %ebp
08325b23 +0x001:  mov    %esp,%ebp
08325b25 +0x003:  push   %ebx
08325b26 +0x004:  sub    $0x74,%esp
08325b29 +0x007:  mov    0x5c(%ebp),%edx
08325b2c +0x00a:  mov    0x60(%ebp),%eax
08325b2f +0x00d:  mov    %dl,-0x1c(%ebp)
08325b32 +0x010:  mov    %al,-0x20(%ebp)
08325b35 +0x013:  movl   $0xffffffff,-0x10(%ebp)
08325b3c +0x01a:  mov    0x17(%ebp),%ecx
08325b3f +0x01d:  movzbl -0x1c(%ebp),%edx
08325b43 +0x021:  mov    0x12(%ebp),%eax
08325b46 +0x024:  mov    %ecx,0x30(%esp)
08325b4a +0x028:  movl   $0x0,0x2c(%esp)
08325b52 +0x030:  movl   $0x0,0x28(%esp)
08325b5a +0x038:  movl   $0x0,0x24(%esp)
08325b62 +0x040:  mov    0x68(%ebp),%ecx
08325b65 +0x043:  mov    %ecx,0x20(%esp)
08325b69 +0x047:  mov    0x64(%ebp),%ecx
08325b6c +0x04a:  mov    %ecx,0x1c(%esp)
08325b70 +0x04e:  mov    %edx,0x18(%esp)
08325b74 +0x052:  mov    0x58(%ebp),%edx
08325b77 +0x055:  mov    %edx,0x14(%esp)
08325b7b +0x059:  mov    0x54(%ebp),%edx
08325b7e +0x05c:  mov    %edx,0x10(%esp)
08325b82 +0x060:  mov    0x50(%ebp),%edx
08325b85 +0x063:  mov    %edx,0xc(%esp)
08325b89 +0x067:  mov    %eax,0x8(%esp)
08325b8d +0x06b:  mov    0xc(%ebp),%eax
08325b90 +0x06e:  mov    %eax,0x4(%esp)
08325b94 +0x072:  mov    0x8(%ebp),%eax
08325b97 +0x075:  mov    %eax,(%esp)
08325b9a +0x078:  call   0832587e <_ZN8WongWork9CCeraShop18ProcessSpecialItemEP5CUseriiRilbRSt6vectorI10Inven_ItemSaIS5_EERNS0_21stCeraShopItemParam_tEccbi>  ; WongWork::CCeraShop::ProcessSpecialItem(CUser*, int, int, int&, long, bool, std::vector<Inven_Item, std::allocator<Inven_Item> >&, WongWork::CCeraShop::stCeraShopItemParam_t&, char, char, bool, int)
08325b9f +0x07d:  xor    $0x1,%eax
08325ba2 +0x080:  test   %al,%al
08325ba4 +0x082:  je     08325d55 <+0x233>
08325baa +0x088:  lea    0x10(%ebp),%eax
08325bad +0x08b:  mov    %eax,0x4(%esp)
08325bb1 +0x08f:  mov    0xc(%ebp),%eax
08325bb4 +0x092:  mov    %eax,(%esp)
08325bb7 +0x095:  call   081801d0 <_ZN10AvatarCoin10BuyProcessEP5CUserR10Inven_Item>  ; AvatarCoin::BuyProcess(CUser*, Inven_Item&)
08325bbc +0x09a:  test   %al,%al
08325bbe +0x09c:  je     08325bca <+0xa8>
08325bc0 +0x09e:  mov    $0x0,%eax
08325bc5 +0x0a3:  jmp    08325d5f <+0x23d>
08325bca +0x0a8:  mov    0xc(%ebp),%eax
08325bcd +0x0ab:  mov    %eax,(%esp)
08325bd0 +0x0ae:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08325bd5 +0x0b3:  movl   $0x0,0x4c(%esp)
08325bdd +0x0bb:  movl   $0x1,0x48(%esp)
08325be5 +0x0c3:  movl   $0xf,0x44(%esp)
08325bed +0x0cb:  mov    0x10(%ebp),%edx
08325bf0 +0x0ce:  mov    %edx,0x4(%esp)
08325bf4 +0x0d2:  mov    0x14(%ebp),%edx
08325bf7 +0x0d5:  mov    %edx,0x8(%esp)
08325bfb +0x0d9:  mov    0x18(%ebp),%edx
08325bfe +0x0dc:  mov    %edx,0xc(%esp)
08325c02 +0x0e0:  mov    0x1c(%ebp),%edx
08325c05 +0x0e3:  mov    %edx,0x10(%esp)
08325c09 +0x0e7:  mov    0x20(%ebp),%edx
08325c0c +0x0ea:  mov    %edx,0x14(%esp)
08325c10 +0x0ee:  mov    0x24(%ebp),%edx
08325c13 +0x0f1:  mov    %edx,0x18(%esp)
08325c17 +0x0f5:  mov    0x28(%ebp),%edx
08325c1a +0x0f8:  mov    %edx,0x1c(%esp)
08325c1e +0x0fc:  mov    0x2c(%ebp),%edx
08325c21 +0x0ff:  mov    %edx,0x20(%esp)
08325c25 +0x103:  mov    0x30(%ebp),%edx
08325c28 +0x106:  mov    %edx,0x24(%esp)
08325c2c +0x10a:  mov    0x34(%ebp),%edx
08325c2f +0x10d:  mov    %edx,0x28(%esp)
08325c33 +0x111:  mov    0x38(%ebp),%edx
08325c36 +0x114:  mov    %edx,0x2c(%esp)
08325c3a +0x118:  mov    0x3c(%ebp),%edx
08325c3d +0x11b:  mov    %edx,0x30(%esp)
08325c41 +0x11f:  mov    0x40(%ebp),%edx
08325c44 +0x122:  mov    %edx,0x34(%esp)
08325c48 +0x126:  mov    0x44(%ebp),%edx
08325c4b +0x129:  mov    %edx,0x38(%esp)
08325c4f +0x12d:  mov    0x48(%ebp),%edx
08325c52 +0x130:  mov    %edx,0x3c(%esp)
08325c56 +0x134:  movzbl 0x4c(%ebp),%edx
08325c5a +0x138:  mov    %dl,0x40(%esp)
08325c5e +0x13c:  mov    %eax,(%esp)
08325c61 +0x13f:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08325c66 +0x144:  mov    %eax,-0x10(%ebp)
08325c69 +0x147:  cmpl   $0xffffffff,-0x10(%ebp)
08325c6d +0x14b:  setne  %al
08325c70 +0x14e:  test   %al,%al
08325c72 +0x150:  je     08325cdc <+0x1ba>
08325c74 +0x152:  movzbl 0x11(%ebp),%eax
08325c78 +0x156:  cmp    $0x6,%al
08325c7a +0x158:  jne    08325ca0 <+0x17e>
08325c7c +0x15a:  mov    -0x10(%ebp),%eax
08325c7f +0x15d:  mov    %eax,0xc(%esp)
08325c83 +0x161:  movl   $0x7,0x8(%esp)
08325c8b +0x169:  movl   $0x1,0x4(%esp)
08325c93 +0x171:  mov    0xc(%ebp),%eax
08325c96 +0x174:  mov    %eax,(%esp)
08325c99 +0x177:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08325c9e +0x17c:  jmp    08325cc2 <+0x1a0>
08325ca0 +0x17e:  mov    -0x10(%ebp),%eax
08325ca3 +0x181:  mov    %eax,0xc(%esp)
08325ca7 +0x185:  movl   $0x0,0x8(%esp)
08325caf +0x18d:  movl   $0x1,0x4(%esp)
08325cb7 +0x195:  mov    0xc(%ebp),%eax
08325cba +0x198:  mov    %eax,(%esp)
08325cbd +0x19b:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08325cc2 +0x1a0:  cmpb   $0x0,-0x20(%ebp)
08325cc6 +0x1a4:  je     08325d5c <+0x23a>
08325ccc +0x1aa:  mov    0xc(%ebp),%eax
08325ccf +0x1ad:  mov    %eax,(%esp)
08325cd2 +0x1b0:  call   0864fe52 <_ZN5CUser13SaveInventoryEv>  ; CUser::SaveInventory()
08325cd7 +0x1b5:  jmp    08325d5c <+0x23a>
08325cdc +0x1ba:  movl   $0x0,0xc(%esp)
08325ce4 +0x1c2:  movl   $"game_server_msg_104",0x8(%esp)
08325cec +0x1ca:  movl   $0x4,0x4(%esp)
08325cf4 +0x1d2:  movl   $&g_scriptStringManager_,(%esp)
08325cfb +0x1d9:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08325d00 +0x1de:  mov    %eax,-0xc(%ebp)
08325d03 +0x1e1:  mov    -0xc(%ebp),%eax
08325d06 +0x1e4:  mov    %eax,(%esp)
08325d09 +0x1e7:  call   0807e3b0 <_init+0xca8>
08325d0e +0x1ec:  mov    %eax,%ebx
08325d10 +0x1ee:  mov    0xc(%ebp),%eax
08325d13 +0x1f1:  mov    %eax,(%esp)
08325d16 +0x1f4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08325d1b +0x1f9:  mov    %ebx,0x18(%esp)
08325d1f +0x1fd:  mov    -0xc(%ebp),%edx
08325d22 +0x200:  mov    %edx,0x14(%esp)
08325d26 +0x204:  movl   $0x1,0x10(%esp)
08325d2e +0x20c:  mov    %eax,0xc(%esp)
08325d32 +0x210:  movl   $0x0,0x8(%esp)
08325d3a +0x218:  lea    0x10(%ebp),%eax
08325d3d +0x21b:  mov    %eax,0x4(%esp)
08325d41 +0x21f:  mov    0xc(%ebp),%eax
08325d44 +0x222:  mov    %eax,(%esp)
08325d47 +0x225:  call   08556d5c <_ZN8WongWork14CMailBoxHelper24ReqDBSendNewMailCashShopEP5CUserRK10Inven_ItemjjbPKci>  ; WongWork::CMailBoxHelper::ReqDBSendNewMailCashShop(CUser*, Inven_Item const&, unsigned int, unsigned int, bool, char const*, int)
08325d4c +0x22a:  movl   $0x0,-0x10(%ebp)
08325d53 +0x231:  jmp    08325d5c <+0x23a>
08325d55 +0x233:  mov    $0x0,%eax
08325d5a +0x238:  jmp    08325d5f <+0x23d>
08325d5c +0x23a:  mov    -0x10(%ebp),%eax
08325d5f +0x23d:  add    $0x74,%esp
08325d62 +0x240:  pop    %ebx
08325d63 +0x241:  pop    %ebp
08325d64 +0x242:  ret
08325d65 +0x243:  nop
```

## 反编译 C

> （该函数反编译 C 未生成）
