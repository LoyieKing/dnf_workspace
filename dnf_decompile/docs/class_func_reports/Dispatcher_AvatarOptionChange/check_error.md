# check_error

`_ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_AvatarOptionChange::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_AvatarOptionChange` | `0x081e0a40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081e0a40  _ZN29Dispatcher_AvatarOptionChange11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_AvatarOptionChange::check_error(CUser*, MSG_BASE&)
# range [0x081e0a40, 0x081e0e31]
081e0a40 +0x000:  push   %ebp
081e0a41 +0x001:  mov    %esp,%ebp
081e0a43 +0x003:  push   %ebx
081e0a44 +0x004:  sub    $0xc4,%esp
081e0a4a +0x00a:  cmpl   $0x0,0xc(%ebp)
081e0a4e +0x00e:  jne    081e0a5a <+0x1a>
081e0a50 +0x010:  mov    $0xffffffff,%eax
081e0a55 +0x015:  jmp    081e0e2d <+0x3ed>
081e0a5a +0x01a:  mov    0xc(%ebp),%eax
081e0a5d +0x01d:  mov    %eax,(%esp)
081e0a60 +0x020:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081e0a65 +0x025:  cmp    $0x2,%eax
081e0a68 +0x028:  setle  %al
081e0a6b +0x02b:  test   %al,%al
081e0a6d +0x02d:  je     081e0a79 <+0x39>
081e0a6f +0x02f:  mov    $0xffffffff,%eax
081e0a74 +0x034:  jmp    081e0e2d <+0x3ed>
081e0a79 +0x039:  mov    &_ZN10GlobalData22s_pSecuProtectionFieldE,%eax
081e0a7e +0x03e:  movl   $0x2a,0x8(%esp)
081e0a86 +0x046:  mov    0xc(%ebp),%edx
081e0a89 +0x049:  mov    %edx,0x4(%esp)
081e0a8d +0x04d:  mov    %eax,(%esp)
081e0a90 +0x050:  call   08288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>  ; CSecu_ProtectionField::Check(CUser*, SECURITY_PROTCTION)
081e0a95 +0x055:  mov    %eax,-0x24(%ebp)
081e0a98 +0x058:  cmpl   $0x0,-0x24(%ebp)
081e0a9c +0x05c:  je     081e0aa6 <+0x66>
081e0a9e +0x05e:  mov    -0x24(%ebp),%eax
081e0aa1 +0x061:  jmp    081e0e2d <+0x3ed>
081e0aa6 +0x066:  mov    0x10(%ebp),%eax
081e0aa9 +0x069:  mov    %eax,-0x20(%ebp)
081e0aac +0x06c:  mov    -0x20(%ebp),%eax
081e0aaf +0x06f:  movzwl 0xd(%eax),%eax
081e0ab3 +0x073:  movswl %ax,%ebx
081e0ab6 +0x076:  mov    0xc(%ebp),%eax
081e0ab9 +0x079:  mov    %eax,(%esp)
081e0abc +0x07c:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e0ac1 +0x081:  lea    -0x79(%ebp),%edx
081e0ac4 +0x084:  mov    %ebx,0xc(%esp)
081e0ac8 +0x088:  movl   $0x1,0x8(%esp)
081e0ad0 +0x090:  mov    %eax,0x4(%esp)
081e0ad4 +0x094:  mov    %edx,(%esp)
081e0ad7 +0x097:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e0adc +0x09c:  sub    $0x4,%esp
081e0adf +0x09f:  mov    -0x77(%ebp),%edx
081e0ae2 +0x0a2:  mov    -0x20(%ebp),%eax
081e0ae5 +0x0a5:  mov    0xf(%eax),%eax
081e0ae8 +0x0a8:  cmp    %eax,%edx
081e0aea +0x0aa:  je     081e0af6 <+0xb6>
081e0aec +0x0ac:  mov    $0x11,%eax
081e0af1 +0x0b1:  jmp    081e0e2d <+0x3ed>
081e0af6 +0x0b6:  mov    -0x72(%ebp),%eax
081e0af9 +0x0b9:  test   %eax,%eax
081e0afb +0x0bb:  jg     081e0b07 <+0xc7>
081e0afd +0x0bd:  mov    $0x16,%eax
081e0b02 +0x0c2:  jmp    081e0e2d <+0x3ed>
081e0b07 +0x0c7:  mov    -0x77(%ebp),%eax
081e0b0a +0x0ca:  mov    %eax,%ebx
081e0b0c +0x0cc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e0b11 +0x0d1:  mov    %ebx,0x4(%esp)
081e0b15 +0x0d5:  mov    %eax,(%esp)
081e0b18 +0x0d8:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e0b1d +0x0dd:  mov    %eax,-0x1c(%ebp)
081e0b20 +0x0e0:  cmpl   $0x0,-0x1c(%ebp)
081e0b24 +0x0e4:  jne    081e0b30 <+0xf0>
081e0b26 +0x0e6:  mov    $0x11,%eax
081e0b2b +0x0eb:  jmp    081e0e2d <+0x3ed>
081e0b30 +0x0f0:  mov    -0x1c(%ebp),%eax
081e0b33 +0x0f3:  mov    %eax,(%esp)
081e0b36 +0x0f6:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081e0b3b +0x0fb:  xor    $0x1,%eax
081e0b3e +0x0fe:  test   %al,%al
081e0b40 +0x100:  je     081e0b4c <+0x10c>
081e0b42 +0x102:  mov    $0x11,%eax
081e0b47 +0x107:  jmp    081e0e2d <+0x3ed>
081e0b4c +0x10c:  mov    -0x1c(%ebp),%eax
081e0b4f +0x10f:  mov    %eax,-0x18(%ebp)
081e0b52 +0x112:  mov    -0x18(%ebp),%eax
081e0b55 +0x115:  mov    %eax,(%esp)
081e0b58 +0x118:  call   0850eb42 <_ZNK14CStackableItem24IsAvatarOptionChangeItemEv>  ; CStackableItem::IsAvatarOptionChangeItem() const
081e0b5d +0x11d:  xor    $0x1,%eax
081e0b60 +0x120:  test   %al,%al
081e0b62 +0x122:  je     081e0b6e <+0x12e>
081e0b64 +0x124:  mov    $0x11,%eax
081e0b69 +0x129:  jmp    081e0e2d <+0x3ed>
081e0b6e +0x12e:  mov    -0x20(%ebp),%eax
081e0b71 +0x131:  movzwl 0x13(%eax),%eax
081e0b75 +0x135:  movswl %ax,%ebx
081e0b78 +0x138:  mov    0xc(%ebp),%eax
081e0b7b +0x13b:  mov    %eax,(%esp)
081e0b7e +0x13e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081e0b83 +0x143:  lea    -0xb6(%ebp),%edx
081e0b89 +0x149:  mov    %ebx,0xc(%esp)
081e0b8d +0x14d:  movl   $0x2,0x8(%esp)
081e0b95 +0x155:  mov    %eax,0x4(%esp)
081e0b99 +0x159:  mov    %edx,(%esp)
081e0b9c +0x15c:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081e0ba1 +0x161:  sub    $0x4,%esp
081e0ba4 +0x164:  mov    -0xb4(%ebp),%edx
081e0baa +0x16a:  mov    -0x20(%ebp),%eax
081e0bad +0x16d:  mov    0x15(%eax),%eax
081e0bb0 +0x170:  cmp    %eax,%edx
081e0bb2 +0x172:  je     081e0bbe <+0x17e>
081e0bb4 +0x174:  mov    $0x11,%eax
081e0bb9 +0x179:  jmp    081e0e2d <+0x3ed>
081e0bbe +0x17e:  mov    -0x20(%ebp),%eax
081e0bc1 +0x181:  mov    0x15(%eax),%ebx
081e0bc4 +0x184:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081e0bc9 +0x189:  mov    %ebx,0x4(%esp)
081e0bcd +0x18d:  mov    %eax,(%esp)
081e0bd0 +0x190:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081e0bd5 +0x195:  mov    %eax,-0x14(%ebp)
081e0bd8 +0x198:  cmpl   $0x0,-0x14(%ebp)
081e0bdc +0x19c:  jne    081e0be8 <+0x1a8>
081e0bde +0x19e:  mov    $0x11,%eax
081e0be3 +0x1a3:  jmp    081e0e2d <+0x3ed>
081e0be8 +0x1a8:  mov    -0x14(%ebp),%eax
081e0beb +0x1ab:  mov    %eax,(%esp)
081e0bee +0x1ae:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081e0bf3 +0x1b3:  test   %al,%al
081e0bf5 +0x1b5:  je     081e0c01 <+0x1c1>
081e0bf7 +0x1b7:  mov    $0x11,%eax
081e0bfc +0x1bc:  jmp    081e0e2d <+0x3ed>
081e0c01 +0x1c1:  mov    -0x14(%ebp),%eax
081e0c04 +0x1c4:  mov    (%eax),%eax
081e0c06 +0x1c6:  add    $0x10,%eax
081e0c09 +0x1c9:  mov    (%eax),%edx
081e0c0b +0x1cb:  mov    -0x14(%ebp),%eax
081e0c0e +0x1ce:  mov    %eax,(%esp)
081e0c11 +0x1d1:  call   *%edx
081e0c13 +0x1d3:  xor    $0x1,%eax
081e0c16 +0x1d6:  test   %al,%al
081e0c18 +0x1d8:  je     081e0c24 <+0x1e4>
081e0c1a +0x1da:  mov    $0x11,%eax
081e0c1f +0x1df:  jmp    081e0e2d <+0x3ed>
081e0c24 +0x1e4:  mov    -0x20(%ebp),%eax
081e0c27 +0x1e7:  movzwl 0x13(%eax),%eax
081e0c2b +0x1eb:  cwtl
081e0c2c +0x1ec:  mov    %eax,0x8(%esp)
081e0c30 +0x1f0:  movl   $0x2,0x4(%esp)
081e0c38 +0x1f8:  mov    0xc(%ebp),%eax
081e0c3b +0x1fb:  mov    %eax,(%esp)
081e0c3e +0x1fe:  call   08646942 <_ZNK5CUser13CheckItemLockEii>  ; CUser::CheckItemLock(int, int) const
081e0c43 +0x203:  test   %al,%al
081e0c45 +0x205:  je     081e0c51 <+0x211>
081e0c47 +0x207:  mov    $0xd5,%eax
081e0c4c +0x20c:  jmp    081e0e2d <+0x3ed>
081e0c51 +0x211:  mov    -0x14(%ebp),%eax
081e0c54 +0x214:  mov    %eax,-0x10(%ebp)
081e0c57 +0x217:  mov    -0x18(%ebp),%eax
081e0c5a +0x21a:  add    $0x368,%eax
081e0c5f +0x21f:  mov    %eax,(%esp)
081e0c62 +0x222:  call   08236fa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc64c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc64c
081e0c67 +0x227:  xor    $0x1,%eax
081e0c6a +0x22a:  test   %al,%al
081e0c6c +0x22c:  je     081e0cd8 <+0x298>
081e0c6e +0x22e:  mov    -0xb4(%ebp),%eax
081e0c74 +0x234:  mov    %eax,-0x34(%ebp)
081e0c77 +0x237:  mov    -0x18(%ebp),%eax
081e0c7a +0x23a:  lea    0x368(%eax),%ecx
081e0c80 +0x240:  lea    -0x38(%ebp),%eax
081e0c83 +0x243:  lea    -0x34(%ebp),%edx
081e0c86 +0x246:  mov    %edx,0x8(%esp)
081e0c8a +0x24a:  mov    %ecx,0x4(%esp)
081e0c8e +0x24e:  mov    %eax,(%esp)
081e0c91 +0x251:  call   080da46a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x607>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x607
081e0c96 +0x256:  sub    $0x4,%esp
081e0c99 +0x259:  mov    -0x18(%ebp),%eax
081e0c9c +0x25c:  lea    0x368(%eax),%edx
081e0ca2 +0x262:  lea    -0x30(%ebp),%eax
081e0ca5 +0x265:  mov    %edx,0x4(%esp)
081e0ca9 +0x269:  mov    %eax,(%esp)
081e0cac +0x26c:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
081e0cb1 +0x271:  sub    $0x4,%esp
081e0cb4 +0x274:  lea    -0x30(%ebp),%eax
081e0cb7 +0x277:  mov    %eax,0x4(%esp)
081e0cbb +0x27b:  lea    -0x38(%ebp),%eax
081e0cbe +0x27e:  mov    %eax,(%esp)
081e0cc1 +0x281:  call   080da5b2 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x74f>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x74f
081e0cc6 +0x286:  test   %al,%al
081e0cc8 +0x288:  je     081e0d83 <+0x343>
081e0cce +0x28e:  mov    $0xff,%eax
081e0cd3 +0x293:  jmp    081e0e2d <+0x3ed>
081e0cd8 +0x298:  mov    -0x18(%ebp),%eax
081e0cdb +0x29b:  add    $0x365,%eax
081e0ce0 +0x2a0:  mov    %eax,-0xc(%ebp)
081e0ce3 +0x2a3:  mov    -0xc(%ebp),%eax
081e0ce6 +0x2a6:  movzbl (%eax),%eax
081e0ce9 +0x2a9:  movsbl %al,%edx
081e0cec +0x2ac:  mov    -0x10(%ebp),%eax
081e0cef +0x2af:  mov    %edx,0x4(%esp)
081e0cf3 +0x2b3:  mov    %eax,(%esp)
081e0cf6 +0x2b6:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
081e0cfb +0x2bb:  xor    $0x1,%eax
081e0cfe +0x2be:  test   %al,%al
081e0d00 +0x2c0:  je     081e0d16 <+0x2d6>
081e0d02 +0x2c2:  mov    -0xc(%ebp),%eax
081e0d05 +0x2c5:  movzbl (%eax),%eax
081e0d08 +0x2c8:  cmp    $0xb,%al
081e0d0a +0x2ca:  je     081e0d16 <+0x2d6>
081e0d0c +0x2cc:  mov    $0xfe,%eax
081e0d11 +0x2d1:  jmp    081e0e2d <+0x3ed>
081e0d16 +0x2d6:  mov    -0x10(%ebp),%eax
081e0d19 +0x2d9:  mov    (%eax),%eax
081e0d1b +0x2db:  add    $0xc,%eax
081e0d1e +0x2de:  mov    (%eax),%edx
081e0d20 +0x2e0:  mov    -0x10(%ebp),%eax
081e0d23 +0x2e3:  mov    %eax,(%esp)
081e0d26 +0x2e6:  call   *%edx
081e0d28 +0x2e8:  mov    -0xc(%ebp),%edx
081e0d2b +0x2eb:  movzbl 0x1(%edx),%edx
081e0d2f +0x2ef:  movsbl %dl,%edx
081e0d32 +0x2f2:  cmp    %edx,%eax
081e0d34 +0x2f4:  setne  %al
081e0d37 +0x2f7:  test   %al,%al
081e0d39 +0x2f9:  je     081e0d50 <+0x310>
081e0d3b +0x2fb:  mov    -0xc(%ebp),%eax
081e0d3e +0x2fe:  movzbl 0x1(%eax),%eax
081e0d42 +0x302:  cmp    $0x1a,%al
081e0d44 +0x304:  je     081e0d50 <+0x310>
081e0d46 +0x306:  mov    $0xfd,%eax
081e0d4b +0x30b:  jmp    081e0e2d <+0x3ed>
081e0d50 +0x310:  mov    -0x10(%ebp),%eax
081e0d53 +0x313:  mov    %eax,(%esp)
081e0d56 +0x316:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
081e0d5b +0x31b:  mov    -0xc(%ebp),%edx
081e0d5e +0x31e:  movzbl 0x2(%edx),%edx
081e0d62 +0x322:  movsbl %dl,%edx
081e0d65 +0x325:  cmp    %edx,%eax
081e0d67 +0x327:  setne  %al
081e0d6a +0x32a:  test   %al,%al
081e0d6c +0x32c:  je     081e0d83 <+0x343>
081e0d6e +0x32e:  mov    -0xc(%ebp),%eax
081e0d71 +0x331:  movzbl 0x2(%eax),%eax
081e0d75 +0x335:  test   %al,%al
081e0d77 +0x337:  je     081e0d83 <+0x343>
081e0d79 +0x339:  mov    $0xfc,%eax
081e0d7e +0x33e:  jmp    081e0e2d <+0x3ed>
081e0d83 +0x343:  mov    -0x18(%ebp),%eax
081e0d86 +0x346:  add    $0x380,%eax
081e0d8b +0x34b:  mov    %eax,(%esp)
081e0d8e +0x34e:  call   08236fa2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc64c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc64c
081e0d93 +0x353:  xor    $0x1,%eax
081e0d96 +0x356:  test   %al,%al
081e0d98 +0x358:  je     081e0e01 <+0x3c1>
081e0d9a +0x35a:  mov    -0x20(%ebp),%eax
081e0d9d +0x35d:  movzbl 0x19(%eax),%eax
081e0da1 +0x361:  movsbl %al,%eax
081e0da4 +0x364:  mov    %eax,-0x2c(%ebp)
081e0da7 +0x367:  mov    -0x18(%ebp),%eax
081e0daa +0x36a:  lea    0x380(%eax),%ecx
081e0db0 +0x370:  lea    -0x3c(%ebp),%eax
081e0db3 +0x373:  lea    -0x2c(%ebp),%edx
081e0db6 +0x376:  mov    %edx,0x8(%esp)
081e0dba +0x37a:  mov    %ecx,0x4(%esp)
081e0dbe +0x37e:  mov    %eax,(%esp)
081e0dc1 +0x381:  call   080da46a <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x607>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x607
081e0dc6 +0x386:  sub    $0x4,%esp
081e0dc9 +0x389:  mov    -0x18(%ebp),%eax
081e0dcc +0x38c:  lea    0x380(%eax),%edx
081e0dd2 +0x392:  lea    -0x28(%ebp),%eax
081e0dd5 +0x395:  mov    %edx,0x4(%esp)
081e0dd9 +0x399:  mov    %eax,(%esp)
081e0ddc +0x39c:  call   080da496 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x633>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x633
081e0de1 +0x3a1:  sub    $0x4,%esp
081e0de4 +0x3a4:  lea    -0x28(%ebp),%eax
081e0de7 +0x3a7:  mov    %eax,0x4(%esp)
081e0deb +0x3ab:  lea    -0x3c(%ebp),%eax
081e0dee +0x3ae:  mov    %eax,(%esp)
081e0df1 +0x3b1:  call   080e6152 <_GLOBAL__I__ZN21CChattingEmoticonList7FactoryERKN12EmoticonType14EmoticonScriptE+0x288>  ; global constructors keyed to CChattingEmoticonList::Factory(EmoticonType::EmoticonScript const&)+0x288
081e0df6 +0x3b6:  test   %al,%al
081e0df8 +0x3b8:  je     081e0e01 <+0x3c1>
081e0dfa +0x3ba:  mov    $0xfb,%eax
081e0dff +0x3bf:  jmp    081e0e2d <+0x3ed>
081e0e01 +0x3c1:  mov    -0x20(%ebp),%eax
081e0e04 +0x3c4:  movzbl 0x19(%eax),%eax
081e0e08 +0x3c8:  movsbl %al,%eax
081e0e0b +0x3cb:  mov    %eax,0x4(%esp)
081e0e0f +0x3cf:  mov    -0x10(%ebp),%eax
081e0e12 +0x3d2:  mov    %eax,(%esp)
081e0e15 +0x3d5:  call   0851353e <_ZNK10CEquipItem19IsAvatarOptionValidEc>  ; CEquipItem::IsAvatarOptionValid(char) const
081e0e1a +0x3da:  xor    $0x1,%eax
081e0e1d +0x3dd:  test   %al,%al
081e0e1f +0x3df:  je     081e0e28 <+0x3e8>
081e0e21 +0x3e1:  mov    $0xfa,%eax
081e0e26 +0x3e6:  jmp    081e0e2d <+0x3ed>
081e0e28 +0x3e8:  mov    $0x0,%eax
081e0e2d +0x3ed:  mov    -0x4(%ebp),%ebx
081e0e30 +0x3f0:  leave
081e0e31 +0x3f1:  ret
```

## 反编译 C

```c
// Dispatcher_AvatarOptionChange::check_error @ 0x81e0a40

/* Dispatcher_AvatarOptionChange::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_AvatarOptionChange::check_error
          (Dispatcher_AvatarOptionChange *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 local_ba [2];
  int local_b8;
  undefined1 local_7d [2];
  int local_7b;
  int local_76;
  _Rb_tree_const_iterator<int> local_40 [4];
  _Rb_tree_const_iterator<int> local_3c [4];
  int local_38;
  set<int,std::less<int>,std::allocator<int>> local_34 [4];
  int local_30;
  set<int,std::less<int>,std::allocator<int>> local_2c [4];
  int local_28;
  MSG_BASE *local_24;
  CStackableItem *local_20;
  CStackableItem *local_1c;
  CItem *local_18;
  CItem *local_14;
  CStackableItem *local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_28 = -1;
  }
  else {
    iVar2 = CUser::get_state(param_1);
    if (iVar2 < 3) {
      local_28 = -1;
    }
    else {
      local_28 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
      if (local_28 == 0) {
        local_24 = param_2;
        iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_7d,iVar2);
        if (local_7b == *(int *)(local_24 + 0xf)) {
          if (local_76 < 1) {
            local_28 = 0x16;
          }
          else {
            pCVar3 = (CDataManager *)G_CDataManager();
            local_20 = (CStackableItem *)CDataManager::find_item(pCVar3,local_7b);
            if (local_20 == (CStackableItem *)0x0) {
              local_28 = 0x11;
            }
            else {
              cVar1 = CItem::is_stackable((CItem *)local_20);
              if (cVar1 == '\x01') {
                local_1c = local_20;
                cVar1 = CStackableItem::IsAvatarOptionChangeItem(local_20);
                if (cVar1 == '\x01') {
                  iVar4 = (int)*(short *)(local_24 + 0x13);
                  iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                  uVar5 = 2;
                  CInventory::GetInvenSlot((int)local_ba,iVar2);
                  if (local_b8 == *(int *)(local_24 + 0x15)) {
                    iVar2 = *(int *)(local_24 + 0x15);
                    pCVar3 = (CDataManager *)G_CDataManager();
                    local_18 = (CItem *)CDataManager::find_item(pCVar3,iVar2);
                    if (local_18 == (CItem *)0x0) {
                      local_28 = 0x11;
                    }
                    else {
                      cVar1 = CItem::is_stackable(local_18);
                      if (cVar1 == '\0') {
                        cVar1 = (**(code **)(*(int *)local_18 + 0x10))(local_18,iVar2,uVar5,iVar4);
                        if (cVar1 == '\x01') {
                          cVar1 = CUser::CheckItemLock(param_1,2,(int)*(short *)(local_24 + 0x13));
                          if (cVar1 == '\0') {
                            local_14 = local_18;
                            cVar1 = std::set<int,std::less<int>,std::allocator<int>>::empty
                                              ((set<int,std::less<int>,std::allocator<int>> *)
                                               (local_1c + 0x368));
                            if (cVar1 == '\x01') {
                              local_10 = local_1c + 0x365;
                              cVar1 = CItem::check_job_type(local_14,(char)*local_10);
                              if ((cVar1 != '\x01') && (*local_10 != (CStackableItem)0xb)) {
                                return 0xfe;
                              }
                              iVar2 = (**(code **)(*(int *)local_14 + 0xc))(local_14);
                              if ((iVar2 != (char)local_10[1]) &&
                                 (local_10[1] != (CStackableItem)0x1a)) {
                                return 0xfd;
                              }
                              iVar2 = CItem::get_grade(local_14);
                              if ((iVar2 != (char)local_10[2]) &&
                                 (local_10[2] != (CStackableItem)0x0)) {
                                return 0xfc;
                              }
                            }
                            else {
                              local_38 = local_b8;
                              std::set<int,std::less<int>,std::allocator<int>>::find
                                        ((int *)local_3c);
                              std::set<int,std::less<int>,std::allocator<int>>::end(local_34);
                              cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                                                (local_3c,(_Rb_tree_const_iterator *)local_34);
                              if (cVar1 != '\0') {
                                return 0xff;
                              }
                            }
                            cVar1 = std::set<int,std::less<int>,std::allocator<int>>::empty
                                              ((set<int,std::less<int>,std::allocator<int>> *)
                                               (local_1c + 0x380));
                            if (cVar1 != '\x01') {
                              local_30 = (int)(char)local_24[0x19];
                              std::set<int,std::less<int>,std::allocator<int>>::find
                                        ((int *)local_40);
                              std::set<int,std::less<int>,std::allocator<int>>::end(local_2c);
                              cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                                                (local_40,(_Rb_tree_const_iterator *)local_2c);
                              if (cVar1 != '\0') {
                                return 0xfb;
                              }
                            }
                            cVar1 = CEquipItem::IsAvatarOptionValid
                                              ((CEquipItem *)local_14,(char)local_24[0x19]);
                            if (cVar1 == '\x01') {
                              local_28 = 0;
                            }
                            else {
                              local_28 = 0xfa;
                            }
                          }
                          else {
                            local_28 = 0xd5;
                          }
                        }
                        else {
                          local_28 = 0x11;
                        }
                      }
                      else {
                        local_28 = 0x11;
                      }
                    }
                  }
                  else {
                    local_28 = 0x11;
                  }
                }
                else {
                  local_28 = 0x11;
                }
              }
              else {
                local_28 = 0x11;
              }
            }
          }
        }
        else {
          local_28 = 0x11;
        }
      }
    }
  }
  return local_28;
}
```
