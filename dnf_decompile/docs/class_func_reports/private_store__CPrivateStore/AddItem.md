# AddItem

`_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi`

`private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)`

| 类 | 地址 |
|---|---|
| `private_store::CPrivateStore` | `0x085c6d48` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085c6d48  _ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi
#           private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)
# range [0x085c6d48, 0x085c7245]
085c6d48 +0x000:  push   %ebp
085c6d49 +0x001:  mov    %esp,%ebp
085c6d4b +0x003:  push   %ebx
085c6d4c +0x004:  sub    $0x84,%esp
085c6d52 +0x00a:  mov    0x8(%ebp),%eax
085c6d55 +0x00d:  mov    %eax,(%esp)
085c6d58 +0x010:  call   082345e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c8e
085c6d5d +0x015:  test   %al,%al
085c6d5f +0x017:  je     085c6eb1 <+0x169>
085c6d65 +0x01d:  mov    0x8(%ebp),%eax
085c6d68 +0x020:  mov    %eax,(%esp)
085c6d6b +0x023:  call   085cb8f8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x60e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x60e
085c6d70 +0x028:  mov    %eax,%ebx
085c6d72 +0x02a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c6d77 +0x02f:  mov    %ebx,0x4(%esp)
085c6d7b +0x033:  mov    %eax,(%esp)
085c6d7e +0x036:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c6d83 +0x03b:  mov    %eax,-0x14(%ebp)
085c6d86 +0x03e:  cmpl   $0x0,-0x14(%ebp)
085c6d8a +0x042:  jne    085c6dd1 <+0x89>
085c6d8c +0x044:  mov    0x8(%ebp),%eax
085c6d8f +0x047:  mov    %eax,(%esp)
085c6d92 +0x04a:  call   085cb8f8 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x60e>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x60e
085c6d97 +0x04f:  mov    %eax,0x14(%esp)
085c6d9b +0x053:  movl   $"CPrivateStore::AddItem ERROR : shop_doll_item_id(%d)",0x10(%esp)
085c6da3 +0x05b:  movl   $0x550,0xc(%esp)
085c6dab +0x063:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6db3 +0x06b:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6dbb +0x073:  movl   $0x1,(%esp)
085c6dc2 +0x07a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6dc7 +0x07f:  mov    $0x0,%eax
085c6dcc +0x084:  jmp    085c7241 <+0x4f9>
085c6dd1 +0x089:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c6dd6 +0x08e:  movl   $0x4,0x4(%esp)
085c6dde +0x096:  mov    %eax,(%esp)
085c6de1 +0x099:  call   0822b5f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc9c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc9c
085c6de6 +0x09e:  mov    %eax,-0x10(%ebp)
085c6de9 +0x0a1:  mov    -0x14(%ebp),%eax
085c6dec +0x0a4:  mov    0x32c(%eax),%eax
085c6df2 +0x0aa:  mov    %eax,0x4(%esp)
085c6df6 +0x0ae:  mov    -0x10(%ebp),%eax
085c6df9 +0x0b1:  mov    %eax,(%esp)
085c6dfc +0x0b4:  call   085cb306 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c
085c6e01 +0x0b9:  cwtl
085c6e02 +0x0ba:  mov    %eax,-0xc(%ebp)
085c6e05 +0x0bd:  cmpl   $0x0,-0xc(%ebp)
085c6e09 +0x0c1:  jg     085c6e4e <+0x106>
085c6e0b +0x0c3:  mov    -0x14(%ebp),%eax
085c6e0e +0x0c6:  mov    0x32c(%eax),%eax
085c6e14 +0x0cc:  mov    %eax,0x14(%esp)
085c6e18 +0x0d0:  movl   $"CPrivateStore::AddItem ERROR : shop_doll_item_index(%d)",0x10(%esp)
085c6e20 +0x0d8:  movl   $0x559,0xc(%esp)
085c6e28 +0x0e0:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6e30 +0x0e8:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6e38 +0x0f0:  movl   $0x1,(%esp)
085c6e3f +0x0f7:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6e44 +0x0fc:  mov    $0x0,%eax
085c6e49 +0x101:  jmp    085c7241 <+0x4f9>
085c6e4e +0x106:  mov    0xc(%ebp),%eax
085c6e51 +0x109:  movzwl 0x44(%eax),%eax
085c6e55 +0x10d:  cwtl
085c6e56 +0x10e:  cmp    -0xc(%ebp),%eax
085c6e59 +0x111:  jl     085c6eb1 <+0x169>
085c6e5b +0x113:  mov    -0x14(%ebp),%eax
085c6e5e +0x116:  mov    0x32c(%eax),%edx
085c6e64 +0x11c:  mov    0xc(%ebp),%eax
085c6e67 +0x11f:  movzwl 0x44(%eax),%eax
085c6e6b +0x123:  cwtl
085c6e6c +0x124:  mov    -0xc(%ebp),%ecx
085c6e6f +0x127:  mov    %ecx,0x1c(%esp)
085c6e73 +0x12b:  mov    %edx,0x18(%esp)
085c6e77 +0x12f:  mov    %eax,0x14(%esp)
085c6e7b +0x133:  movl   $"CPrivateStore::AddItem ERROR : slot_no(%d), shop_doll_item_index(%d), maxSlot(%d)",0x10(%esp)
085c6e83 +0x13b:  movl   $0x55f,0xc(%esp)
085c6e8b +0x143:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6e93 +0x14b:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6e9b +0x153:  movl   $0x1,(%esp)
085c6ea2 +0x15a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6ea7 +0x15f:  mov    $0x0,%eax
085c6eac +0x164:  jmp    085c7241 <+0x4f9>
085c6eb1 +0x169:  mov    0xc(%ebp),%eax
085c6eb4 +0x16c:  movzwl 0x44(%eax),%eax
085c6eb8 +0x170:  cmp    $0x6,%ax
085c6ebc +0x174:  jle    085c6f00 <+0x1b8>
085c6ebe +0x176:  mov    0xc(%ebp),%eax
085c6ec1 +0x179:  movzwl 0x44(%eax),%eax
085c6ec5 +0x17d:  cwtl
085c6ec6 +0x17e:  mov    %eax,0x14(%esp)
085c6eca +0x182:  movl   $"CPrivateStore::AddItem slot_no(%d) ERROR",0x10(%esp)
085c6ed2 +0x18a:  movl   $0x566,0xc(%esp)
085c6eda +0x192:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6ee2 +0x19a:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6eea +0x1a2:  movl   $0x1,(%esp)
085c6ef1 +0x1a9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6ef6 +0x1ae:  mov    $0x0,%eax
085c6efb +0x1b3:  jmp    085c7241 <+0x4f9>
085c6f00 +0x1b8:  mov    0x8(%ebp),%eax
085c6f03 +0x1bb:  mov    0x2c(%eax),%eax
085c6f06 +0x1be:  test   %eax,%eax
085c6f08 +0x1c0:  jne    085c6f40 <+0x1f8>
085c6f0a +0x1c2:  movl   $"CPrivateStore::AddItem seller_ == NULL ERROR",0x10(%esp)
085c6f12 +0x1ca:  movl   $0x56c,0xc(%esp)
085c6f1a +0x1d2:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6f22 +0x1da:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6f2a +0x1e2:  movl   $0x1,(%esp)
085c6f31 +0x1e9:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6f36 +0x1ee:  mov    $0x0,%eax
085c6f3b +0x1f3:  jmp    085c7241 <+0x4f9>
085c6f40 +0x1f8:  mov    0x8(%ebp),%eax
085c6f43 +0x1fb:  mov    0x2c(%eax),%eax
085c6f46 +0x1fe:  mov    %eax,(%esp)
085c6f49 +0x201:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
085c6f4e +0x206:  test   %eax,%eax
085c6f50 +0x208:  sete   %al
085c6f53 +0x20b:  test   %al,%al
085c6f55 +0x20d:  je     085c6f8d <+0x245>
085c6f57 +0x20f:  movl   $"CPrivateStore::AddItem getCurCharacR() == NULL ERROR",0x10(%esp)
085c6f5f +0x217:  movl   $0x572,0xc(%esp)
085c6f67 +0x21f:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6f6f +0x227:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6f77 +0x22f:  movl   $0x1,(%esp)
085c6f7e +0x236:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6f83 +0x23b:  mov    $0x0,%eax
085c6f88 +0x240:  jmp    085c7241 <+0x4f9>
085c6f8d +0x245:  mov    0x8(%ebp),%eax
085c6f90 +0x248:  mov    0x2c(%eax),%eax
085c6f93 +0x24b:  mov    %eax,(%esp)
085c6f96 +0x24e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085c6f9b +0x253:  mov    %eax,-0x1c(%ebp)
085c6f9e +0x256:  cmpl   $0x0,-0x1c(%ebp)
085c6fa2 +0x25a:  jne    085c6fda <+0x292>
085c6fa4 +0x25c:  movl   $"CPrivateStore::AddItem inventory == NULL ERROR",0x10(%esp)
085c6fac +0x264:  movl   $0x579,0xc(%esp)
085c6fb4 +0x26c:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c6fbc +0x274:  movl   $"PrivateStore.cpp",0x4(%esp)
085c6fc4 +0x27c:  movl   $0x1,(%esp)
085c6fcb +0x283:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c6fd0 +0x288:  mov    $0x0,%eax
085c6fd5 +0x28d:  jmp    085c7241 <+0x4f9>
085c6fda +0x292:  mov    0xc(%ebp),%eax
085c6fdd +0x295:  movzwl 0x48(%eax),%eax
085c6fe1 +0x299:  movswl %ax,%ebx
085c6fe4 +0x29c:  mov    0xc(%ebp),%eax
085c6fe7 +0x29f:  movzbl 0x46(%eax),%eax
085c6feb +0x2a3:  movsbl %al,%eax
085c6fee +0x2a6:  mov    %eax,(%esp)
085c6ff1 +0x2a9:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
085c6ff6 +0x2ae:  mov    %eax,%edx
085c6ff8 +0x2b0:  lea    -0x59(%ebp),%eax
085c6ffb +0x2b3:  mov    %ebx,0xc(%esp)
085c6fff +0x2b7:  mov    %edx,0x8(%esp)
085c7003 +0x2bb:  mov    -0x1c(%ebp),%edx
085c7006 +0x2be:  mov    %edx,0x4(%esp)
085c700a +0x2c2:  mov    %eax,(%esp)
085c700d +0x2c5:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
085c7012 +0x2ca:  sub    $0x4,%esp
085c7015 +0x2cd:  movl   $0x0,-0x18(%ebp)
085c701c +0x2d4:  mov    -0x57(%ebp),%eax
085c701f +0x2d7:  mov    %eax,%ebx
085c7021 +0x2d9:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085c7026 +0x2de:  mov    %ebx,0x4(%esp)
085c702a +0x2e2:  mov    %eax,(%esp)
085c702d +0x2e5:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085c7032 +0x2ea:  mov    %eax,-0x18(%ebp)
085c7035 +0x2ed:  cmpl   $0x0,-0x18(%ebp)
085c7039 +0x2f1:  sete   %al
085c703c +0x2f4:  test   %al,%al
085c703e +0x2f6:  je     085c707d <+0x335>
085c7040 +0x2f8:  mov    -0x57(%ebp),%eax
085c7043 +0x2fb:  mov    %eax,0x14(%esp)
085c7047 +0x2ff:  movl   $"CPrivateStore::AddItem find_item() ERROR item_id(%d)",0x10(%esp)
085c704f +0x307:  movl   $0x582,0xc(%esp)
085c7057 +0x30f:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c705f +0x317:  movl   $"PrivateStore.cpp",0x4(%esp)
085c7067 +0x31f:  movl   $0x1,(%esp)
085c706e +0x326:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c7073 +0x32b:  mov    $0x0,%eax
085c7078 +0x330:  jmp    085c7241 <+0x4f9>
085c707d +0x335:  mov    -0x18(%ebp),%eax
085c7080 +0x338:  mov    %eax,(%esp)
085c7083 +0x33b:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
085c7088 +0x340:  test   %eax,%eax
085c708a +0x342:  setg   %al
085c708d +0x345:  test   %al,%al
085c708f +0x347:  je     085c70dd <+0x395>
085c7091 +0x349:  mov    -0x18(%ebp),%eax
085c7094 +0x34c:  mov    %eax,(%esp)
085c7097 +0x34f:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
085c709c +0x354:  mov    -0x57(%ebp),%edx
085c709f +0x357:  mov    %eax,0x18(%esp)
085c70a3 +0x35b:  mov    %edx,0x14(%esp)
085c70a7 +0x35f:  movl   $"CPrivateStore::AddItem GetCashPrice() ERROR item_id(%d), cash_price(%d)",0x10(%esp)
085c70af +0x367:  movl   $0x5b8,0xc(%esp)
085c70b7 +0x36f:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c70bf +0x377:  movl   $"PrivateStore.cpp",0x4(%esp)
085c70c7 +0x37f:  movl   $0x1,(%esp)
085c70ce +0x386:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c70d3 +0x38b:  mov    $0x0,%eax
085c70d8 +0x390:  jmp    085c7241 <+0x4f9>
085c70dd +0x395:  mov    -0x18(%ebp),%eax
085c70e0 +0x398:  mov    (%eax),%eax
085c70e2 +0x39a:  add    $0x10,%eax
085c70e5 +0x39d:  mov    (%eax),%edx
085c70e7 +0x39f:  mov    -0x18(%ebp),%eax
085c70ea +0x3a2:  mov    %eax,(%esp)
085c70ed +0x3a5:  call   *%edx
085c70ef +0x3a7:  test   %al,%al
085c70f1 +0x3a9:  je     085c713f <+0x3f7>
085c70f3 +0x3ab:  mov    -0x18(%ebp),%eax
085c70f6 +0x3ae:  mov    %eax,(%esp)
085c70f9 +0x3b1:  call   0822c856 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1f00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1f00
085c70fe +0x3b6:  mov    -0x57(%ebp),%edx
085c7101 +0x3b9:  mov    %eax,0x18(%esp)
085c7105 +0x3bd:  mov    %edx,0x14(%esp)
085c7109 +0x3c1:  movl   $"CPrivateStore::AddItem IsAvatarItem() ERROR item_id(%d), cash_price(%d)",0x10(%esp)
085c7111 +0x3c9:  movl   $0x5be,0xc(%esp)
085c7119 +0x3d1:  movl   $&_ZZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEiE19__PRETTY_FUNCTION__,0x8(%esp)
085c7121 +0x3d9:  movl   $"PrivateStore.cpp",0x4(%esp)
085c7129 +0x3e1:  movl   $0x1,(%esp)
085c7130 +0x3e8:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
085c7135 +0x3ed:  mov    $0x0,%eax
085c713a +0x3f2:  jmp    085c7241 <+0x4f9>
085c713f +0x3f7:  lea    -0x59(%ebp),%eax
085c7142 +0x3fa:  add    $0x33,%eax
085c7145 +0x3fd:  mov    %eax,(%esp)
085c7148 +0x400:  call   08110b0a <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1c>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1c
085c714d +0x405:  test   %al,%al
085c714f +0x407:  setne  %al
085c7152 +0x40a:  test   %al,%al
085c7154 +0x40c:  je     085c7160 <+0x418>
085c7156 +0x40e:  mov    $0x0,%eax
085c715b +0x413:  jmp    085c7241 <+0x4f9>
085c7160 +0x418:  mov    0xc(%ebp),%eax
085c7163 +0x41b:  movzwl 0x44(%eax),%eax
085c7167 +0x41f:  cmp    $0xd,%ax
085c716b +0x423:  jg     085c7179 <+0x431>
085c716d +0x425:  mov    0xc(%ebp),%eax
085c7170 +0x428:  movzwl 0x44(%eax),%eax
085c7174 +0x42c:  test   %ax,%ax
085c7177 +0x42f:  jns    085c7183 <+0x43b>
085c7179 +0x431:  mov    $0x0,%eax
085c717e +0x436:  jmp    085c7241 <+0x4f9>
085c7183 +0x43b:  cmpl   $0xd,0x10(%ebp)
085c7187 +0x43f:  jg     085c718f <+0x447>
085c7189 +0x441:  cmpl   $0x0,0x10(%ebp)
085c718d +0x445:  jns    085c7199 <+0x451>
085c718f +0x447:  mov    $0x0,%eax
085c7194 +0x44c:  jmp    085c7241 <+0x4f9>
085c7199 +0x451:  cmpl   $0x0,0x10(%ebp)
085c719d +0x455:  jne    085c71aa <+0x462>
085c719f +0x457:  mov    0x8(%ebp),%eax
085c71a2 +0x45a:  mov    %eax,(%esp)
085c71a5 +0x45d:  call   085c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>  ; private_store::CPrivateStore::ResetItems()
085c71aa +0x462:  mov    0xc(%ebp),%eax
085c71ad +0x465:  movzwl 0x44(%eax),%eax
085c71b1 +0x469:  cwtl
085c71b2 +0x46a:  mov    0x8(%ebp),%edx
085c71b5 +0x46d:  add    $0x3c,%edx
085c71b8 +0x470:  mov    %eax,0x4(%esp)
085c71bc +0x474:  mov    %edx,(%esp)
085c71bf +0x477:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c71c4 +0x47c:  movzbl 0x3d(%eax),%eax
085c71c8 +0x480:  test   %al,%al
085c71ca +0x482:  setne  %al
085c71cd +0x485:  test   %al,%al
085c71cf +0x487:  je     085c71d8 <+0x490>
085c71d1 +0x489:  mov    $0x0,%eax
085c71d6 +0x48e:  jmp    085c7241 <+0x4f9>
085c71d8 +0x490:  mov    0xc(%ebp),%eax
085c71db +0x493:  movzbl 0x46(%eax),%eax
085c71df +0x497:  cmp    $0x3,%al
085c71e1 +0x499:  jne    085c71ea <+0x4a2>
085c71e3 +0x49b:  mov    $0x0,%eax
085c71e8 +0x4a0:  jmp    085c7241 <+0x4f9>
085c71ea +0x4a2:  mov    0xc(%ebp),%eax
085c71ed +0x4a5:  movb   $0x1,0x3d(%eax)
085c71f1 +0x4a9:  mov    0xc(%ebp),%eax
085c71f4 +0x4ac:  movzwl 0x44(%eax),%eax
085c71f8 +0x4b0:  cwtl
085c71f9 +0x4b1:  mov    0x8(%ebp),%edx
085c71fc +0x4b4:  add    $0x3c,%edx
085c71ff +0x4b7:  mov    %eax,0x4(%esp)
085c7203 +0x4bb:  mov    %edx,(%esp)
085c7206 +0x4be:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c720b +0x4c3:  mov    %eax,(%esp)
085c720e +0x4c6:  call   0823459a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c44>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c44
085c7213 +0x4cb:  mov    0xc(%ebp),%eax
085c7216 +0x4ce:  movzwl 0x44(%eax),%eax
085c721a +0x4d2:  cwtl
085c721b +0x4d3:  mov    0x8(%ebp),%edx
085c721e +0x4d6:  add    $0x3c,%edx
085c7221 +0x4d9:  mov    %eax,0x4(%esp)
085c7225 +0x4dd:  mov    %edx,(%esp)
085c7228 +0x4e0:  call   085ccf06 <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x1c1c>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x1c1c
085c722d +0x4e5:  mov    0xc(%ebp),%edx
085c7230 +0x4e8:  mov    %edx,0x4(%esp)
085c7234 +0x4ec:  mov    %eax,(%esp)
085c7237 +0x4ef:  call   085cb66e <_GLOBAL__I__ZN13private_store26GetInstancePrivateStoreMgrEv+0x384>  ; global constructors keyed to private_store::GetInstancePrivateStoreMgr()+0x384
085c723c +0x4f4:  mov    $0x1,%eax
085c7241 +0x4f9:  mov    -0x4(%ebp),%ebx
085c7244 +0x4fc:  leave
085c7245 +0x4fd:  ret
```

## 反编译 C

```c
// private_store::CPrivateStore::AddItem @ 0x85c6d48

/* private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int) */

undefined4 __thiscall
private_store::CPrivateStore::AddItem(CPrivateStore *this,PrivateStoreItem *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  int iVar6;
  PrivateStoreItem *pPVar7;
  int iVar8;
  undefined1 local_5d [2];
  int local_5b;
  UpgradeSeparateInfo aUStack_2a [10];
  int local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = isDollCreated(this);
  if (cVar1 != '\0') {
    iVar3 = GetDollItemID(this);
    pCVar4 = (CDataManager *)G_CDataManager();
    local_18 = CDataManager::find_item(pCVar4,iVar3);
    if (local_18 == 0) {
      uVar5 = GetDollItemID(this);
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x550,"CPrivateStore::AddItem ERROR : shop_doll_item_id(%d)",uVar5);
      return 0;
    }
    iVar3 = G_CDataManager();
    local_14 = CDataManager::GetExpertJobScript(iVar3);
    sVar2 = STExpertJobScript::GetShopDollSlot(local_14);
    local_10 = (int)sVar2;
    if (local_10 < 1) {
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x559,"CPrivateStore::AddItem ERROR : shop_doll_item_index(%d)",
                 *(undefined4 *)(local_18 + 0x32c));
      return 0;
    }
    if (local_10 <= *(short *)(param_1 + 0x44)) {
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x55f,
                 "CPrivateStore::AddItem ERROR : slot_no(%d), shop_doll_item_index(%d), maxSlot(%d)"
                 ,(int)*(short *)(param_1 + 0x44),*(undefined4 *)(local_18 + 0x32c),local_10);
      return 0;
    }
  }
  if (*(short *)(param_1 + 0x44) < 7) {
    if (*(int *)(this + 0x2c) == 0) {
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x56c,"CPrivateStore::AddItem seller_ == NULL ERROR");
      uVar5 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c));
      if (iVar3 == 0) {
        LogManager::logFormat
                  (1,"PrivateStore.cpp",
                   "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                   ,0x572,"CPrivateStore::AddItem getCurCharacR() == NULL ERROR");
        uVar5 = 0;
      }
      else {
        local_20 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        if (local_20 == 0) {
          LogManager::logFormat
                    (1,"PrivateStore.cpp",
                     "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                     ,0x579,"CPrivateStore::AddItem inventory == NULL ERROR");
          uVar5 = 0;
        }
        else {
          iVar8 = (int)*(short *)(param_1 + 0x48);
          uVar5 = GetInvenTypeFromItemSpace((int)(char)param_1[0x46]);
          CInventory::GetInvenSlot((int)local_5d,local_20);
          iVar3 = local_5b;
          local_1c = (CItem *)0x0;
          pCVar4 = (CDataManager *)G_CDataManager();
          local_1c = (CItem *)CDataManager::find_item(pCVar4,iVar3);
          if (local_1c == (CItem *)0x0) {
            LogManager::logFormat
                      (1,"PrivateStore.cpp",
                       "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                       ,0x582,"CPrivateStore::AddItem find_item() ERROR item_id(%d)",local_5b);
            uVar5 = 0;
          }
          else {
            iVar6 = CItem::GetCashPrice(local_1c);
            if (iVar6 < 1) {
              cVar1 = (**(code **)(*(int *)local_1c + 0x10))(local_1c,iVar3,uVar5,iVar8);
              if (cVar1 == '\0') {
                cVar1 = UpgradeSeparateInfo::IsTradeRestriction(aUStack_2a);
                if (cVar1 == '\0') {
                  if ((*(short *)(param_1 + 0x44) < 0xe) && (-1 < *(short *)(param_1 + 0x44))) {
                    if ((param_2 < 0xe) && (-1 < param_2)) {
                      if (param_2 == 0) {
                        ResetItems(this);
                      }
                      iVar3 = std::
                              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                            *)(this + 0x3c),(int)*(short *)(param_1 + 0x44));
                      if (*(char *)(iVar3 + 0x3d) == '\0') {
                        if (param_1[0x46] == (PrivateStoreItem)0x3) {
                          uVar5 = 0;
                        }
                        else {
                          param_1[0x3d] = (PrivateStoreItem)0x1;
                          pPVar7 = (PrivateStoreItem *)
                                   std::
                                   vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                   ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                                 *)(this + 0x3c),(int)*(short *)(param_1 + 0x44));
                          PrivateStoreItem::Reset(pPVar7);
                          pPVar7 = (PrivateStoreItem *)
                                   std::
                                   vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                   ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                                 *)(this + 0x3c),(int)*(short *)(param_1 + 0x44));
                          PrivateStoreItem::operator=(pPVar7,param_1);
                          uVar5 = 1;
                        }
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = 0;
                }
              }
              else {
                uVar5 = CItem::GetCashPrice(local_1c);
                LogManager::logFormat
                          (1,"PrivateStore.cpp",
                           "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                           ,0x5be,
                           "CPrivateStore::AddItem IsAvatarItem() ERROR item_id(%d), cash_price(%d)"
                           ,local_5b,uVar5);
                uVar5 = 0;
              }
            }
            else {
              uVar5 = CItem::GetCashPrice(local_1c);
              LogManager::logFormat
                        (1,"PrivateStore.cpp",
                         "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                         ,0x5b8,
                         "CPrivateStore::AddItem GetCashPrice() ERROR item_id(%d), cash_price(%d)",
                         local_5b,uVar5);
              uVar5 = 0;
            }
          }
        }
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"PrivateStore.cpp",
               "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
               ,0x566,"CPrivateStore::AddItem slot_no(%d) ERROR",(int)*(short *)(param_1 + 0x44));
    uVar5 = 0;
  }
  return uVar5;
}
```
