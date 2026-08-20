# _ProcPenalty

`_ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c`

`WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short, upgrade_table_t const&, upgrade_info_t const*, PacketGuard*, Inven_Item*, char)`

| 类 | 地址 |
|---|---|
| `WongWork::CItemUpgrade` | `0x08546bba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08546bba  _ZN8WongWork12CItemUpgrade12_ProcPenaltyEP5CUserP10Inven_ItemPK5CItemtRK15upgrade_table_tPK14upgrade_info_tP11PacketGuardS4_c
#           WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short, upgrade_table_t const&, upgrade_info_t const*, PacketGuard*, Inven_Item*, char)
# range [0x08546bba, 0x08547559]
08546bba +0x000:  push   %ebp
08546bbb +0x001:  mov    %esp,%ebp
08546bbd +0x003:  push   %esi
08546bbe +0x004:  push   %ebx
08546bbf +0x005:  sub    $0x180,%esp
08546bc5 +0x00b:  mov    0x18(%ebp),%edx
08546bc8 +0x00e:  mov    0x2c(%ebp),%eax
08546bcb +0x011:  mov    %dx,-0x12c(%ebp)
08546bd2 +0x018:  mov    %al,-0x130(%ebp)
08546bd8 +0x01e:  mov    0x28(%ebp),%eax
08546bdb +0x021:  mov    0x2(%eax),%eax
08546bde +0x024:  test   %eax,%eax
08546be0 +0x026:  je     08546bfd <+0x43>
08546be2 +0x028:  cmpb   $0x0,-0x130(%ebp)
08546be9 +0x02f:  jne    08546bf4 <+0x3a>
08546beb +0x031:  movl   $0x1,-0x40(%ebp)
08546bf2 +0x038:  jmp    08546c4d <+0x93>
08546bf4 +0x03a:  movl   $0x2,-0x40(%ebp)
08546bfb +0x041:  jmp    08546c4d <+0x93>
08546bfd +0x043:  mov    0x14(%ebp),%eax
08546c00 +0x046:  mov    %eax,(%esp)
08546c03 +0x049:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08546c08 +0x04e:  mov    %eax,%ebx
08546c0a +0x050:  mov    0x10(%ebp),%eax
08546c0d +0x053:  mov    %eax,(%esp)
08546c10 +0x056:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546c15 +0x05b:  movzbl %al,%eax
08546c18 +0x05e:  mov    0x20(%ebp),%edx
08546c1b +0x061:  mov    %edx,0xc(%esp)
08546c1f +0x065:  mov    %ebx,0x8(%esp)
08546c23 +0x069:  mov    %eax,0x4(%esp)
08546c27 +0x06d:  mov    0x1c(%ebp),%eax
08546c2a +0x070:  mov    %eax,(%esp)
08546c2d +0x073:  call   089003ee <_ZNK15upgrade_table_t14GetPenaltyTypeEh11ENUM_RARITYPK14upgrade_info_t>  ; upgrade_table_t::GetPenaltyType(unsigned char, ENUM_RARITY, upgrade_info_t const*) const
08546c32 +0x078:  mov    %eax,-0x40(%ebp)
08546c35 +0x07b:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
08546c3a +0x080:  mov    %eax,(%esp)
08546c3d +0x083:  call   0854b57c <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x404>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x404
08546c42 +0x088:  test   %al,%al
08546c44 +0x08a:  je     08546c4d <+0x93>
08546c46 +0x08c:  movl   $0x2,-0x40(%ebp)
08546c4d +0x093:  mov    -0x40(%ebp),%eax
08546c50 +0x096:  movsbl %al,%edx
08546c53 +0x099:  mov    0x24(%ebp),%eax
08546c56 +0x09c:  mov    %edx,0x4(%esp)
08546c5a +0x0a0:  mov    %eax,(%esp)
08546c5d +0x0a3:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08546c62 +0x0a8:  cmpl   $0x1,-0x40(%ebp)
08546c66 +0x0ac:  jne    08546ca0 <+0xe6>
08546c68 +0x0ae:  mov    0x10(%ebp),%eax
08546c6b +0x0b1:  mov    %eax,(%esp)
08546c6e +0x0b4:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546c73 +0x0b9:  movzbl %al,%edx
08546c76 +0x0bc:  mov    0x24(%ebp),%eax
08546c79 +0x0bf:  mov    %edx,0x4(%esp)
08546c7d +0x0c3:  mov    %eax,(%esp)
08546c80 +0x0c6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08546c85 +0x0cb:  movzwl -0x12c(%ebp),%edx
08546c8c +0x0d2:  mov    0x24(%ebp),%eax
08546c8f +0x0d5:  mov    %edx,0x4(%esp)
08546c93 +0x0d9:  mov    %eax,(%esp)
08546c96 +0x0dc:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08546c9b +0x0e1:  jmp    0854754b <+0x991>
08546ca0 +0x0e6:  cmpl   $0x2,-0x40(%ebp)
08546ca4 +0x0ea:  jne    08546da1 <+0x1e7>
08546caa +0x0f0:  mov    &_ZN10GlobalData20s_pEvent_UpGrade_JarE,%eax
08546caf +0x0f5:  mov    %eax,(%esp)
08546cb2 +0x0f8:  call   0854b57c <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x404>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x404
08546cb7 +0x0fd:  test   %al,%al
08546cb9 +0x0ff:  je     08546ccd <+0x113>
08546cbb +0x101:  mov    0x20(%ebp),%eax
08546cbe +0x104:  add    $0x28,%eax
08546cc1 +0x107:  mov    %eax,-0x3c(%ebp)
08546cc4 +0x10a:  mov    -0x3c(%ebp),%eax
08546cc7 +0x10d:  movl   $0x1,(%eax)
08546ccd +0x113:  mov    0x20(%ebp),%eax
08546cd0 +0x116:  mov    0x28(%eax),%ebx
08546cd3 +0x119:  mov    0x10(%ebp),%eax
08546cd6 +0x11c:  mov    %eax,(%esp)
08546cd9 +0x11f:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546cde +0x124:  movzbl %al,%eax
08546ce1 +0x127:  cmp    %eax,%ebx
08546ce3 +0x129:  jge    08546cee <+0x134>
08546ce5 +0x12b:  cmpb   $0x0,-0x130(%ebp)
08546cec +0x132:  jns    08546cf5 <+0x13b>
08546cee +0x134:  mov    $0x1,%eax
08546cf3 +0x139:  jmp    08546cfa <+0x140>
08546cf5 +0x13b:  mov    $0x0,%eax
08546cfa +0x140:  test   %al,%al
08546cfc +0x142:  je     08546d13 <+0x159>
08546cfe +0x144:  movl   $0x0,0x4(%esp)
08546d06 +0x14c:  mov    0x10(%ebp),%eax
08546d09 +0x14f:  mov    %eax,(%esp)
08546d0c +0x152:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08546d11 +0x157:  jmp    08546d69 <+0x1af>
08546d13 +0x159:  cmpb   $0x0,-0x130(%ebp)
08546d1a +0x160:  jle    08546d44 <+0x18a>
08546d1c +0x162:  mov    0x10(%ebp),%eax
08546d1f +0x165:  mov    %eax,(%esp)
08546d22 +0x168:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546d27 +0x16d:  movzbl -0x130(%ebp),%edx
08546d2e +0x174:  sub    %dl,%al
08546d30 +0x176:  movzbl %al,%eax
08546d33 +0x179:  mov    %eax,0x4(%esp)
08546d37 +0x17d:  mov    0x10(%ebp),%eax
08546d3a +0x180:  mov    %eax,(%esp)
08546d3d +0x183:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08546d42 +0x188:  jmp    08546d69 <+0x1af>
08546d44 +0x18a:  mov    0x10(%ebp),%eax
08546d47 +0x18d:  mov    %eax,(%esp)
08546d4a +0x190:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546d4f +0x195:  mov    0x20(%ebp),%edx
08546d52 +0x198:  mov    0x28(%edx),%edx
08546d55 +0x19b:  sub    %dl,%al
08546d57 +0x19d:  movzbl %al,%eax
08546d5a +0x1a0:  mov    %eax,0x4(%esp)
08546d5e +0x1a4:  mov    0x10(%ebp),%eax
08546d61 +0x1a7:  mov    %eax,(%esp)
08546d64 +0x1aa:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08546d69 +0x1af:  mov    0x10(%ebp),%eax
08546d6c +0x1b2:  mov    %eax,(%esp)
08546d6f +0x1b5:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
08546d74 +0x1ba:  movzbl %al,%edx
08546d77 +0x1bd:  mov    0x24(%ebp),%eax
08546d7a +0x1c0:  mov    %edx,0x4(%esp)
08546d7e +0x1c4:  mov    %eax,(%esp)
08546d81 +0x1c7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08546d86 +0x1cc:  movzwl -0x12c(%ebp),%edx
08546d8d +0x1d3:  mov    0x24(%ebp),%eax
08546d90 +0x1d6:  mov    %edx,0x4(%esp)
08546d94 +0x1da:  mov    %eax,(%esp)
08546d97 +0x1dd:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08546d9c +0x1e2:  jmp    0854754b <+0x991>
08546da1 +0x1e7:  cmpl   $0x3,-0x40(%ebp)
08546da5 +0x1eb:  jne    0854754b <+0x991>
08546dab +0x1f1:  mov    0x10(%ebp),%eax
08546dae +0x1f4:  add    $0x11,%eax
08546db1 +0x1f7:  mov    %eax,(%esp)
08546db4 +0x1fa:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08546db9 +0x1ff:  xor    $0x1,%eax
08546dbc +0x202:  test   %al,%al
08546dbe +0x204:  je     08547084 <+0x4ca>
08546dc4 +0x20a:  movl   $0xffffffff,-0x30(%ebp)
08546dcb +0x211:  movl   $0xffffffff,-0x2c(%ebp)
08546dd2 +0x218:  movl   $0xffffffff,-0x28(%ebp)
08546dd9 +0x21f:  mov    0xc(%ebp),%eax
08546ddc +0x222:  mov    %eax,(%esp)
08546ddf +0x225:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08546de4 +0x22a:  movl   $0x28be7e,0x4(%esp)
08546dec +0x232:  mov    %eax,(%esp)
08546def +0x235:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08546df4 +0x23a:  mov    %eax,-0x2c(%ebp)
08546df7 +0x23d:  mov    0xc(%ebp),%eax
08546dfa +0x240:  mov    %eax,(%esp)
08546dfd +0x243:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08546e02 +0x248:  movl   $0x1f72,0x4(%esp)
08546e0a +0x250:  mov    %eax,(%esp)
08546e0d +0x253:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08546e12 +0x258:  mov    %eax,-0x28(%ebp)
08546e15 +0x25b:  movl   $0xffffffff,-0x24(%ebp)
08546e1c +0x262:  mov    0xc(%ebp),%eax
08546e1f +0x265:  mov    %eax,(%esp)
08546e22 +0x268:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08546e27 +0x26d:  movl   $0x20ba,0x4(%esp)
08546e2f +0x275:  mov    %eax,(%esp)
08546e32 +0x278:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08546e37 +0x27d:  mov    %eax,-0x24(%ebp)
08546e3a +0x280:  cmpl   $0xffffffff,-0x2c(%ebp)
08546e3e +0x284:  je     08546e48 <+0x28e>
08546e40 +0x286:  mov    -0x2c(%ebp),%eax
08546e43 +0x289:  mov    %eax,-0x30(%ebp)
08546e46 +0x28c:  jmp    08546e62 <+0x2a8>
08546e48 +0x28e:  cmpl   $0xffffffff,-0x28(%ebp)
08546e4c +0x292:  je     08546e56 <+0x29c>
08546e4e +0x294:  mov    -0x28(%ebp),%eax
08546e51 +0x297:  mov    %eax,-0x30(%ebp)
08546e54 +0x29a:  jmp    08546e62 <+0x2a8>
08546e56 +0x29c:  cmpl   $0xffffffff,-0x24(%ebp)
08546e5a +0x2a0:  je     08546e62 <+0x2a8>
08546e5c +0x2a2:  mov    -0x24(%ebp),%eax
08546e5f +0x2a5:  mov    %eax,-0x30(%ebp)
08546e62 +0x2a8:  movl   $0xffffffff,-0x20(%ebp)
08546e69 +0x2af:  mov    0xc(%ebp),%eax
08546e6c +0x2b2:  mov    %eax,(%esp)
08546e6f +0x2b5:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08546e74 +0x2ba:  movl   $0x292091ac,0x4(%esp)
08546e7c +0x2c2:  mov    %eax,(%esp)
08546e7f +0x2c5:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08546e84 +0x2ca:  mov    %eax,-0x20(%ebp)
08546e87 +0x2cd:  cmpl   $0xffffffff,-0x20(%ebp)
08546e8b +0x2d1:  je     08546e93 <+0x2d9>
08546e8d +0x2d3:  mov    -0x20(%ebp),%eax
08546e90 +0x2d6:  mov    %eax,-0x30(%ebp)
08546e93 +0x2d9:  cmpl   $0xffffffff,-0x30(%ebp)
08546e97 +0x2dd:  je     08547084 <+0x4ca>
08546e9d +0x2e3:  mov    0xc(%ebp),%eax
08546ea0 +0x2e6:  mov    %eax,(%esp)
08546ea3 +0x2e9:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08546ea8 +0x2ee:  lea    -0xe1(%ebp),%edx
08546eae +0x2f4:  mov    -0x30(%ebp),%ecx
08546eb1 +0x2f7:  mov    %ecx,0xc(%esp)
08546eb5 +0x2fb:  movl   $0x1,0x8(%esp)
08546ebd +0x303:  mov    %eax,0x4(%esp)
08546ec1 +0x307:  mov    %edx,(%esp)
08546ec4 +0x30a:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08546ec9 +0x30f:  sub    $0x4,%esp
08546ecc +0x312:  mov    -0xdf(%ebp),%eax
08546ed2 +0x318:  cmp    $0x28be7e,%eax
08546ed7 +0x31d:  je     08546f0a <+0x350>
08546ed9 +0x31f:  mov    -0xdf(%ebp),%eax
08546edf +0x325:  cmp    $0x1f72,%eax
08546ee4 +0x32a:  je     08546f0a <+0x350>
08546ee6 +0x32c:  mov    -0xdf(%ebp),%eax
08546eec +0x332:  cmp    $0x20ba,%eax
08546ef1 +0x337:  je     08546f0a <+0x350>
08546ef3 +0x339:  mov    -0xdf(%ebp),%eax
08546ef9 +0x33f:  cmp    $0x292091ac,%eax
08546efe +0x344:  je     08546f0a <+0x350>
08546f00 +0x346:  mov    $0x11,%eax
08546f05 +0x34b:  jmp    08547550 <+0x996>
08546f0a +0x350:  mov    0xc(%ebp),%eax
08546f0d +0x353:  mov    %eax,(%esp)
08546f10 +0x356:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08546f15 +0x35b:  movl   $0x1,0x14(%esp)
08546f1d +0x363:  movl   $0x3,0x10(%esp)
08546f25 +0x36b:  movl   $0x1,0xc(%esp)
08546f2d +0x373:  mov    -0x30(%ebp),%edx
08546f30 +0x376:  mov    %edx,0x8(%esp)
08546f34 +0x37a:  movl   $0x1,0x4(%esp)
08546f3c +0x382:  mov    %eax,(%esp)
08546f3f +0x385:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
08546f44 +0x38a:  xor    $0x1,%eax
08546f47 +0x38d:  test   %al,%al
08546f49 +0x38f:  je     08546f55 <+0x39b>
08546f4b +0x391:  mov    $0x11,%eax
08546f50 +0x396:  jmp    08547550 <+0x996>
08546f55 +0x39b:  mov    0x10(%ebp),%eax
08546f58 +0x39e:  mov    0x2(%eax),%eax
08546f5b +0x3a1:  mov    %eax,%edx
08546f5d +0x3a3:  mov    -0xdf(%ebp),%eax
08546f63 +0x3a9:  mov    0xc(%ebp),%ecx
08546f66 +0x3ac:  add    $0x79700,%ecx
08546f6c +0x3b2:  movl   $0x0,0xc(%esp)
08546f74 +0x3ba:  mov    %edx,0x8(%esp)
08546f78 +0x3be:  mov    %eax,0x4(%esp)
08546f7c +0x3c2:  mov    %ecx,(%esp)
08546f7f +0x3c5:  call   08686c7c <_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason>  ; cUserHistoryLog::apply_Item(int, int, eApplyItemReason)
08546f84 +0x3ca:  mov    -0x30(%ebp),%eax
08546f87 +0x3cd:  mov    %eax,0xc(%esp)
08546f8b +0x3d1:  movl   $0x0,0x8(%esp)
08546f93 +0x3d9:  movl   $0x1,0x4(%esp)
08546f9b +0x3e1:  mov    0xc(%ebp),%eax
08546f9e +0x3e4:  mov    %eax,(%esp)
08546fa1 +0x3e7:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08546fa6 +0x3ec:  movl   $0x0,0x4(%esp)
08546fae +0x3f4:  mov    0x10(%ebp),%eax
08546fb1 +0x3f7:  mov    %eax,(%esp)
08546fb4 +0x3fa:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
08546fb9 +0x3ff:  movzwl -0x12c(%ebp),%ebx
08546fc0 +0x406:  mov    0xc(%ebp),%eax
08546fc3 +0x409:  mov    %eax,(%esp)
08546fc6 +0x40c:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08546fcb +0x411:  mov    %eax,%edx
08546fcd +0x413:  mov    0x10(%ebp),%eax
08546fd0 +0x416:  mov    (%eax),%ecx
08546fd2 +0x418:  mov    %ecx,0xc(%esp)
08546fd6 +0x41c:  mov    0x4(%eax),%ecx
08546fd9 +0x41f:  mov    %ecx,0x10(%esp)
08546fdd +0x423:  mov    0x8(%eax),%ecx
08546fe0 +0x426:  mov    %ecx,0x14(%esp)
08546fe4 +0x42a:  mov    0xc(%eax),%ecx
08546fe7 +0x42d:  mov    %ecx,0x18(%esp)
08546feb +0x431:  mov    0x10(%eax),%ecx
08546fee +0x434:  mov    %ecx,0x1c(%esp)
08546ff2 +0x438:  mov    0x14(%eax),%ecx
08546ff5 +0x43b:  mov    %ecx,0x20(%esp)
08546ff9 +0x43f:  mov    0x18(%eax),%ecx
08546ffc +0x442:  mov    %ecx,0x24(%esp)
08547000 +0x446:  mov    0x1c(%eax),%ecx
08547003 +0x449:  mov    %ecx,0x28(%esp)
08547007 +0x44d:  mov    0x20(%eax),%ecx
0854700a +0x450:  mov    %ecx,0x2c(%esp)
0854700e +0x454:  mov    0x24(%eax),%ecx
08547011 +0x457:  mov    %ecx,0x30(%esp)
08547015 +0x45b:  mov    0x28(%eax),%ecx
08547018 +0x45e:  mov    %ecx,0x34(%esp)
0854701c +0x462:  mov    0x2c(%eax),%ecx
0854701f +0x465:  mov    %ecx,0x38(%esp)
08547023 +0x469:  mov    0x30(%eax),%ecx
08547026 +0x46c:  mov    %ecx,0x3c(%esp)
0854702a +0x470:  mov    0x34(%eax),%ecx
0854702d +0x473:  mov    %ecx,0x40(%esp)
08547031 +0x477:  mov    0x38(%eax),%ecx
08547034 +0x47a:  mov    %ecx,0x44(%esp)
08547038 +0x47e:  movzbl 0x3c(%eax),%eax
0854703c +0x482:  mov    %al,0x48(%esp)
08547040 +0x486:  mov    %ebx,0x8(%esp)
08547044 +0x48a:  movl   $0x1,0x4(%esp)
0854704c +0x492:  mov    %edx,(%esp)
0854704f +0x495:  call   085000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>  ; CInventory::update_item(INVEN_TYPE, int, Inven_Item)
08547054 +0x49a:  movzwl -0x12c(%ebp),%eax
0854705b +0x4a1:  mov    %eax,0xc(%esp)
0854705f +0x4a5:  movl   $0x0,0x8(%esp)
08547067 +0x4ad:  movl   $0x1,0x4(%esp)
0854706f +0x4b5:  mov    0xc(%ebp),%eax
08547072 +0x4b8:  mov    %eax,(%esp)
08547075 +0x4bb:  call   0867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItem(CUser::eSendTarget, ENUM_ITEMSPACE, int)
0854707a +0x4c0:  mov    $0xd8,%eax
0854707f +0x4c5:  jmp    08547550 <+0x996>
08547084 +0x4ca:  movzwl -0x12c(%ebp),%ebx
0854708b +0x4d1:  mov    0xc(%ebp),%eax
0854708e +0x4d4:  mov    %eax,(%esp)
08547091 +0x4d7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08547096 +0x4dc:  movl   $0x1,0x14(%esp)
0854709e +0x4e4:  movl   $0xd,0x10(%esp)
085470a6 +0x4ec:  movl   $0x1,0xc(%esp)
085470ae +0x4f4:  mov    %ebx,0x8(%esp)
085470b2 +0x4f8:  movl   $0x1,0x4(%esp)
085470ba +0x500:  mov    %eax,(%esp)
085470bd +0x503:  call   0850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>  ; CInventory::delete_item(INVEN_TYPE, int, int, eItemDelReason, bool)
085470c2 +0x508:  xor    $0x1,%eax
085470c5 +0x50b:  test   %al,%al
085470c7 +0x50d:  je     085470d3 <+0x519>
085470c9 +0x50f:  mov    $0x11,%eax
085470ce +0x514:  jmp    08547550 <+0x996>
085470d3 +0x519:  mov    0x10(%ebp),%eax
085470d6 +0x51c:  mov    %eax,(%esp)
085470d9 +0x51f:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
085470de +0x524:  movzbl %al,%eax
085470e1 +0x527:  mov    %eax,-0x38(%ebp)
085470e4 +0x52a:  movl   $0x0,0x4(%esp)
085470ec +0x532:  mov    0x10(%ebp),%eax
085470ef +0x535:  mov    %eax,(%esp)
085470f2 +0x538:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
085470f7 +0x53d:  mov    0x24(%ebp),%eax
085470fa +0x540:  movl   $0x0,0x4(%esp)
08547102 +0x548:  mov    %eax,(%esp)
08547105 +0x54b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0854710a +0x550:  movzwl -0x12c(%ebp),%edx
08547111 +0x557:  mov    0x24(%ebp),%eax
08547114 +0x55a:  mov    %edx,0x4(%esp)
08547118 +0x55e:  mov    %eax,(%esp)
0854711b +0x561:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08547120 +0x566:  lea    -0xa4(%ebp),%eax
08547126 +0x56c:  mov    %eax,(%esp)
08547129 +0x56f:  call   082347a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e4c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e4c
0854712e +0x574:  mov    0x10(%ebp),%eax
08547131 +0x577:  mov    0x2(%eax),%eax
08547134 +0x57a:  mov    %eax,%ebx
08547136 +0x57c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0854713b +0x581:  mov    0x1c(%eax),%eax
0854713e +0x584:  lea    -0xa4(%ebp),%edx
08547144 +0x58a:  mov    %edx,0x8(%esp)
08547148 +0x58e:  mov    %ebx,0x4(%esp)
0854714c +0x592:  mov    %eax,(%esp)
0854714f +0x595:  call   084733f6 <_ZN8DisJoint9GetResultEiR14DisJointResult>  ; DisJoint::GetResult(int, DisJointResult&)
08547154 +0x59a:  test   %eax,%eax
08547156 +0x59c:  setne  %al
08547159 +0x59f:  test   %al,%al
0854715b +0x5a1:  je     0854717a <+0x5c0>
0854715d +0x5a3:  mov    0x24(%ebp),%eax
08547160 +0x5a6:  movl   $0x0,0x4(%esp)
08547168 +0x5ae:  mov    %eax,(%esp)
0854716b +0x5b1:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08547170 +0x5b6:  mov    $0x0,%eax
08547175 +0x5bb:  jmp    08547550 <+0x996>
0854717a +0x5c0:  mov    0x10(%ebp),%eax
0854717d +0x5c3:  movl   $0x0,0x2(%eax)
08547184 +0x5ca:  lea    -0x68(%ebp),%eax
08547187 +0x5cd:  mov    %eax,(%esp)
0854718a +0x5d0:  call   081349d6 <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5dd>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5dd
0854718f +0x5d5:  movl   $0x6,0x4(%esp)
08547197 +0x5dd:  lea    -0x68(%ebp),%eax
0854719a +0x5e0:  mov    %eax,(%esp)
0854719d +0x5e3:  call   0854b7ee <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x676>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x676
085471a2 +0x5e8:  movl   $0x0,-0x1c(%ebp)
085471a9 +0x5ef:  jmp    0854720e <+0x654>
085471ab +0x5f1:  mov    -0x1c(%ebp),%eax
085471ae +0x5f4:  add    $0x4,%eax
085471b1 +0x5f7:  mov    -0xa0(%ebp,%eax,4),%eax
085471b8 +0x5fe:  test   %eax,%eax
085471ba +0x600:  je     08547209 <+0x64f>
085471bc +0x602:  mov    -0x1c(%ebp),%edx
085471bf +0x605:  lea    -0xa4(%ebp),%eax
085471c5 +0x60b:  shl    $0x2,%edx
085471c8 +0x60e:  lea    (%eax,%edx,1),%ecx
085471cb +0x611:  mov    -0x1c(%ebp),%edx
085471ce +0x614:  lea    -0xa4(%ebp),%eax
085471d4 +0x61a:  add    $0x4,%edx
085471d7 +0x61d:  shl    $0x2,%edx
085471da +0x620:  add    %edx,%eax
085471dc +0x622:  lea    0x4(%eax),%edx
085471df +0x625:  lea    -0x5c(%ebp),%eax
085471e2 +0x628:  mov    %ecx,0x8(%esp)
085471e6 +0x62c:  mov    %edx,0x4(%esp)
085471ea +0x630:  mov    %eax,(%esp)
085471ed +0x633:  call   081112b2 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x7c4>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x7c4
085471f2 +0x638:  sub    $0x4,%esp
085471f5 +0x63b:  lea    -0x5c(%ebp),%eax
085471f8 +0x63e:  mov    %eax,0x4(%esp)
085471fc +0x642:  lea    -0x68(%ebp),%eax
085471ff +0x645:  mov    %eax,(%esp)
08547202 +0x648:  call   080dd606 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0x14f>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0x14f
08547207 +0x64d:  jmp    0854720a <+0x650>
08547209 +0x64f:  nop
0854720a +0x650:  addl   $0x1,-0x1c(%ebp)
0854720e +0x654:  cmpl   $0x4,-0x1c(%ebp)
08547212 +0x658:  setle  %al
08547215 +0x65b:  test   %al,%al
08547217 +0x65d:  jne    085471ab <+0x5f1>
08547219 +0x65f:  mov    -0x38(%ebp),%eax
0854721c +0x662:  mov    0x1c(%ebp),%edx
0854721f +0x665:  mov    %edx,0x10(%esp)
08547223 +0x669:  lea    -0x68(%ebp),%edx
08547226 +0x66c:  mov    %edx,0xc(%esp)
0854722a +0x670:  mov    0x14(%ebp),%edx
0854722d +0x673:  mov    %edx,0x8(%esp)
08547231 +0x677:  mov    %eax,0x4(%esp)
08547235 +0x67b:  mov    0x8(%ebp),%eax
08547238 +0x67e:  mov    %eax,(%esp)
0854723b +0x681:  call   08546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>  ; WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
08547240 +0x686:  mov    0x10(%ebp),%eax
08547243 +0x689:  add    $0x11,%eax
08547246 +0x68c:  mov    %eax,(%esp)
08547249 +0x68f:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
0854724e +0x694:  test   %al,%al
08547250 +0x696:  je     08547284 <+0x6ca>
08547252 +0x698:  mov    0x8(%ebp),%eax
08547255 +0x69b:  add    $0x4,%eax
08547258 +0x69e:  mov    %eax,(%esp)
0854725b +0x6a1:  call   0854b382 <_GLOBAL__I__ZN8WongWork12CItemUpgradeC2Ev+0x20a>  ; global constructors keyed to WongWork::CItemUpgrade::CItemUpgrade()+0x20a
08547260 +0x6a6:  mov    -0x38(%ebp),%edx
08547263 +0x6a9:  mov    %eax,0x10(%esp)
08547267 +0x6ad:  lea    -0x68(%ebp),%eax
0854726a +0x6b0:  mov    %eax,0xc(%esp)
0854726e +0x6b4:  mov    0x14(%ebp),%eax
08547271 +0x6b7:  mov    %eax,0x8(%esp)
08547275 +0x6bb:  mov    %edx,0x4(%esp)
08547279 +0x6bf:  mov    0x8(%ebp),%eax
0854727c +0x6c2:  mov    %eax,(%esp)
0854727f +0x6c5:  call   08546938 <_ZN8WongWork12CItemUpgrade26_getAdditionalDisjointItemEjPK5CItemRSt6vectorISt4pairIiiESaIS6_EERK15upgrade_table_t>  ; WongWork::CItemUpgrade::_getAdditionalDisjointItem(unsigned int, CItem const*, std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&, upgrade_table_t const&)
08547284 +0x6ca:  lea    -0x74(%ebp),%eax
08547287 +0x6cd:  mov    %eax,(%esp)
0854728a +0x6d0:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
0854728f +0x6d5:  mov    0xc(%ebp),%eax
08547292 +0x6d8:  mov    %eax,(%esp)
08547295 +0x6db:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
0854729a +0x6e0:  movl   $"",0x1c(%esp)
085472a2 +0x6e8:  movl   $"",0x18(%esp)
085472aa +0x6f0:  movl   $0x0,0x14(%esp)
085472b2 +0x6f8:  movl   $0x13,0x10(%esp)
085472ba +0x700:  movl   $0x7,0xc(%esp)
085472c2 +0x708:  lea    -0x74(%ebp),%edx
085472c5 +0x70b:  mov    %edx,0x8(%esp)
085472c9 +0x70f:  lea    -0x68(%ebp),%edx
085472cc +0x712:  mov    %edx,0x4(%esp)
085472d0 +0x716:  mov    %eax,(%esp)
085472d3 +0x719:  call   08506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>  ; CInventory::insert_event_items(std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > > const&, std::vector<int, std::allocator<int> >&, eMoneyAddReason, eItemAddReason, bool, char const*, char const*)
085472d8 +0x71e:  mov    %eax,-0x34(%ebp)
085472db +0x721:  mov    0x24(%ebp),%eax
085472de +0x724:  mov    -0x34(%ebp),%edx
085472e1 +0x727:  mov    %edx,0x4(%esp)
085472e5 +0x72b:  mov    %eax,(%esp)
085472e8 +0x72e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085472ed +0x733:  lea    -0x54(%ebp),%eax
085472f0 +0x736:  lea    -0x74(%ebp),%edx
085472f3 +0x739:  mov    %edx,0x4(%esp)
085472f7 +0x73d:  mov    %eax,(%esp)
085472fa +0x740:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
085472ff +0x745:  sub    $0x4,%esp
08547302 +0x748:  lea    -0x54(%ebp),%eax
08547305 +0x74b:  mov    %eax,0x4(%esp)
08547309 +0x74f:  lea    -0x78(%ebp),%eax
0854730c +0x752:  mov    %eax,(%esp)
0854730f +0x755:  call   080f99ec <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x1f8>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x1f8
08547314 +0x75a:  jmp    085474d2 <+0x918>
08547319 +0x75f:  lea    -0x4c(%ebp),%eax
0854731c +0x762:  movl   $0x0,0x8(%esp)
08547324 +0x76a:  lea    -0x78(%ebp),%edx
08547327 +0x76d:  mov    %edx,0x4(%esp)
0854732b +0x771:  mov    %eax,(%esp)
0854732e +0x774:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08547333 +0x779:  sub    $0x4,%esp
08547336 +0x77c:  lea    -0x4c(%ebp),%eax
08547339 +0x77f:  mov    %eax,(%esp)
0854733c +0x782:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
08547341 +0x787:  mov    (%eax),%eax
08547343 +0x789:  mov    %eax,-0x18(%ebp)
08547346 +0x78c:  lea    -0x48(%ebp),%eax
08547349 +0x78f:  movl   $0x0,0x8(%esp)
08547351 +0x797:  lea    -0x78(%ebp),%edx
08547354 +0x79a:  mov    %edx,0x4(%esp)
08547358 +0x79e:  mov    %eax,(%esp)
0854735b +0x7a1:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
08547360 +0x7a6:  sub    $0x4,%esp
08547363 +0x7a9:  lea    -0x48(%ebp),%eax
08547366 +0x7ac:  mov    %eax,(%esp)
08547369 +0x7af:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0854736e +0x7b4:  mov    (%eax),%eax
08547370 +0x7b6:  mov    %eax,-0x14(%ebp)
08547373 +0x7b9:  lea    -0x44(%ebp),%eax
08547376 +0x7bc:  movl   $0x0,0x8(%esp)
0854737e +0x7c4:  lea    -0x78(%ebp),%edx
08547381 +0x7c7:  mov    %edx,0x4(%esp)
08547385 +0x7cb:  mov    %eax,(%esp)
08547388 +0x7ce:  call   081938b2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x51a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x51a
0854738d +0x7d3:  sub    $0x4,%esp
08547390 +0x7d6:  lea    -0x44(%ebp),%eax
08547393 +0x7d9:  mov    %eax,(%esp)
08547396 +0x7dc:  call   080f9a1c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x228>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x228
0854739b +0x7e1:  mov    (%eax),%eax
0854739d +0x7e3:  mov    %eax,-0x10(%ebp)
085473a0 +0x7e6:  mov    0x24(%ebp),%eax
085473a3 +0x7e9:  mov    -0x18(%ebp),%edx
085473a6 +0x7ec:  mov    %edx,0x4(%esp)
085473aa +0x7f0:  mov    %eax,(%esp)
085473ad +0x7f3:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
085473b2 +0x7f8:  mov    -0x14(%ebp),%edx
085473b5 +0x7fb:  mov    0x24(%ebp),%eax
085473b8 +0x7fe:  mov    %edx,0x4(%esp)
085473bc +0x802:  mov    %eax,(%esp)
085473bf +0x805:  call   0822b794 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe3e
085473c4 +0x80a:  mov    0x24(%ebp),%eax
085473c7 +0x80d:  mov    -0x10(%ebp),%edx
085473ca +0x810:  mov    %edx,0x4(%esp)
085473ce +0x814:  mov    %eax,(%esp)
085473d1 +0x817:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085473d6 +0x81c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085473db +0x821:  mov    -0x14(%ebp),%edx
085473de +0x824:  mov    %edx,0x4(%esp)
085473e2 +0x828:  mov    %eax,(%esp)
085473e5 +0x82b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
085473ea +0x830:  mov    %eax,-0xc(%ebp)
085473ed +0x833:  cmpl   $0x0,-0xc(%ebp)
085473f1 +0x837:  je     085474d1 <+0x917>
085473f7 +0x83d:  lea    -0x11e(%ebp),%eax
085473fd +0x843:  mov    %eax,(%esp)
08547400 +0x846:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08547405 +0x84b:  mov    -0x14(%ebp),%eax
08547408 +0x84e:  mov    %eax,-0x11c(%ebp)
0854740e +0x854:  mov    -0x10(%ebp),%eax
08547411 +0x857:  mov    %eax,0x4(%esp)
08547415 +0x85b:  lea    -0x11e(%ebp),%eax
0854741b +0x861:  mov    %eax,(%esp)
0854741e +0x864:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08547423 +0x869:  mov    -0xc(%ebp),%eax
08547426 +0x86c:  mov    (%eax),%eax
08547428 +0x86e:  add    $0x8,%eax
0854742b +0x871:  mov    (%eax),%edx
0854742d +0x873:  lea    -0x11e(%ebp),%eax
08547433 +0x879:  mov    %eax,0x4(%esp)
08547437 +0x87d:  mov    -0xc(%ebp),%eax
0854743a +0x880:  mov    %eax,(%esp)
0854743d +0x883:  call   *%edx
0854743f +0x885:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
08547444 +0x88a:  movl   $0x1,0x10(%esp)
0854744c +0x892:  mov    0xc(%ebp),%edx
0854744f +0x895:  mov    %edx,0xc(%esp)
08547453 +0x899:  mov    -0x10(%ebp),%edx
08547456 +0x89c:  mov    %edx,0x8(%esp)
0854745a +0x8a0:  mov    -0xc(%ebp),%edx
0854745d +0x8a3:  mov    %edx,0x4(%esp)
08547461 +0x8a7:  mov    %eax,(%esp)
08547464 +0x8aa:  call   0860e07a <_ZN14CCubeStatistic21collectCubeStatisticsEP5CItemiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(CItem*, int, CUser*, CUBE_STATISTIC_FIELD)
08547469 +0x8af:  movl   $0x0,-0x7c(%ebp)
08547470 +0x8b6:  mov    -0x117(%ebp),%eax
08547476 +0x8bc:  movswl %ax,%ebx
08547479 +0x8bf:  call   08151add <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1412>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1412
0854747e +0x8c4:  lea    -0x7c(%ebp),%edx
08547481 +0x8c7:  mov    %edx,0x14(%esp)
08547485 +0x8cb:  movl   $0x0,0x10(%esp)
0854748d +0x8d3:  mov    %ebx,0xc(%esp)
08547491 +0x8d7:  mov    -0xc(%ebp),%edx
08547494 +0x8da:  mov    %edx,0x8(%esp)
08547498 +0x8de:  lea    -0x11e(%ebp),%edx
0854749e +0x8e4:  mov    %edx,0x4(%esp)
085474a2 +0x8e8:  mov    %eax,(%esp)
085474a5 +0x8eb:  call   08618ea0 <_ZN5Store16GetSellItemPriceER10Inven_ItemPK5CItemsbRi>  ; Store::GetSellItemPrice(Inven_Item&, CItem const*, short, bool, int&)
085474aa +0x8f0:  mov    -0x7c(%ebp),%eax
085474ad +0x8f3:  mov    %eax,%ebx
085474af +0x8f5:  call   0860d5ef <_Z25GetInstanceValueStatisticv>  ; GetInstanceValueStatistic()
085474b4 +0x8fa:  mov    %ebx,0xc(%esp)
085474b8 +0x8fe:  mov    0xc(%ebp),%edx
085474bb +0x901:  mov    %edx,0x8(%esp)
085474bf +0x905:  movl   $0x9,0x4(%esp)
085474c7 +0x90d:  mov    %eax,(%esp)
085474ca +0x910:  call   0860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>  ; CValueStatistic::AddValueStatistic(VALUE_STATISTIC_FIELD, CUser*, unsigned int)
085474cf +0x915:  jmp    085474d2 <+0x918>
085474d1 +0x917:  nop
085474d2 +0x918:  lea    -0x50(%ebp),%eax
085474d5 +0x91b:  lea    -0x74(%ebp),%edx
085474d8 +0x91e:  mov    %edx,0x4(%esp)
085474dc +0x922:  mov    %eax,(%esp)
085474df +0x925:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
085474e4 +0x92a:  sub    $0x4,%esp
085474e7 +0x92d:  lea    -0x50(%ebp),%eax
085474ea +0x930:  mov    %eax,0x4(%esp)
085474ee +0x934:  lea    -0x78(%ebp),%eax
085474f1 +0x937:  mov    %eax,(%esp)
085474f4 +0x93a:  call   08193428 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x90>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x90
085474f9 +0x93f:  test   %al,%al
085474fb +0x941:  jne    08547319 <+0x75f>
08547501 +0x947:  jmp    08547518 <+0x95e>
08547503 +0x949:  mov    %edx,%ebx
08547505 +0x94b:  mov    %eax,%esi
08547507 +0x94d:  lea    -0x74(%ebp),%eax
0854750a +0x950:  mov    %eax,(%esp)
0854750d +0x953:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08547512 +0x958:  mov    %esi,%eax
08547514 +0x95a:  mov    %ebx,%edx
08547516 +0x95c:  jmp    08547525 <+0x96b>
08547518 +0x95e:  lea    -0x74(%ebp),%eax
0854751b +0x961:  mov    %eax,(%esp)
0854751e +0x964:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08547523 +0x969:  jmp    08547540 <+0x986>
08547525 +0x96b:  mov    %edx,%ebx
08547527 +0x96d:  mov    %eax,%esi
08547529 +0x96f:  lea    -0x68(%ebp),%eax
0854752c +0x972:  mov    %eax,(%esp)
0854752f +0x975:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
08547534 +0x97a:  mov    %esi,%eax
08547536 +0x97c:  mov    %ebx,%edx
08547538 +0x97e:  mov    %eax,(%esp)
0854753b +0x981:  call   08ae3750 <_Unwind_Resume>
08547540 +0x986:  lea    -0x68(%ebp),%eax
08547543 +0x989:  mov    %eax,(%esp)
08547546 +0x98c:  call   081349ea <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x5f1>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x5f1
0854754b +0x991:  mov    $0x0,%eax
08547550 +0x996:  lea    -0x8(%ebp),%esp
08547553 +0x999:  add    $0x0,%esp
08547556 +0x99c:  pop    %ebx
08547557 +0x99d:  pop    %esi
08547558 +0x99e:  pop    %ebp
08547559 +0x99f:  ret
```

## 反编译 C

```c
// WongWork::CItemUpgrade::_ProcPenalty @ 0x8546bba

/* WongWork::CItemUpgrade::_ProcPenalty(CUser*, Inven_Item*, CItem const*, unsigned short,
   upgrade_table_t const&, upgrade_info_t const*, PacketGuard*, Inven_Item*, char) */

undefined4 __thiscall
WongWork::CItemUpgrade::_ProcPenalty
          (CItemUpgrade *this,CUser *param_1,Inven_Item *param_2,CItem *param_3,ushort param_4,
          upgrade_table_t *param_5,upgrade_info_t *param_6,PacketGuard *param_7,Inven_Item *param_8,
          char param_9)

{
  undefined1 uVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  uint uVar5;
  CInventory *pCVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  upgrade_table_t *puVar10;
  int *piVar11;
  ulong *puVar12;
  CDataManager *this_00;
  CCubeStatistic *pCVar13;
  Store *this_01;
  CValueStatistic *pCVar14;
  Inven_Item local_122 [2];
  ulong local_120;
  undefined4 local_11b;
  undefined1 local_e5 [2];
  int local_e3;
  DisJointResult local_a8 [4];
  int aiStack_a4 [9];
  int local_80;
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_7c [4];
  vector<int,std::allocator<int>> local_78 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_6c [12];
  int local_60 [2];
  __normal_iterator local_58 [4];
  __normal_iterator local_54 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_50 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_4c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_48 [4];
  int local_44;
  upgrade_info_t *local_40;
  uint local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  ulong local_18;
  int local_14;
  CItem *local_10;
  
  if (*(int *)(param_8 + 2) == 0) {
    uVar8 = CItem::get_rarity(param_3);
    uVar1 = Inven_Item::GetUpgrade(param_2);
    local_44 = upgrade_table_t::GetPenaltyType(param_5,uVar1,uVar8,param_6);
    cVar2 = Event_Upgrade_Jar::isFortune(GlobalData::s_pEvent_UpGrade_Jar);
    if (cVar2 != '\0') {
      local_44 = 2;
    }
  }
  else if (param_9 == '\0') {
    local_44 = 1;
  }
  else {
    local_44 = 2;
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,(int)(char)local_44);
  if (local_44 == 1) {
    uVar5 = Inven_Item::GetUpgrade(param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,uVar5 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,(uint)param_4);
  }
  else if (local_44 == 2) {
    cVar2 = Event_Upgrade_Jar::isFortune(GlobalData::s_pEvent_UpGrade_Jar);
    if (cVar2 != '\0') {
      local_40 = param_6 + 0x28;
      *(undefined4 *)local_40 = 1;
    }
    iVar7 = *(int *)(param_6 + 0x28);
    uVar5 = Inven_Item::GetUpgrade(param_2);
    if ((iVar7 < (int)(uVar5 & 0xff)) && (-1 < param_9)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      Inven_Item::SetUpgrade(param_2,'\0');
    }
    else if (param_9 < '\x01') {
      cVar2 = Inven_Item::GetUpgrade(param_2);
      Inven_Item::SetUpgrade(param_2,cVar2 - (char)*(undefined4 *)(param_6 + 0x28));
    }
    else {
      cVar2 = Inven_Item::GetUpgrade(param_2);
      Inven_Item::SetUpgrade(param_2,cVar2 - param_9);
    }
    uVar5 = Inven_Item::GetUpgrade(param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,uVar5 & 0xff);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,(uint)param_4);
  }
  else if (local_44 == 3) {
    cVar2 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
    if (cVar2 != '\x01') {
      local_34 = -1;
      local_30 = 0xffffffff;
      local_2c = 0xffffffff;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_30 = CInventory::check_item_exist(pCVar6,0x28be7e);
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_2c = CInventory::check_item_exist(pCVar6,0x1f72);
      local_28 = 0xffffffff;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_28 = CInventory::check_item_exist(pCVar6,0x20ba);
      if (local_30 == -1) {
        if (local_2c == -1) {
          if (local_28 != -1) {
            local_34 = local_28;
          }
        }
        else {
          local_34 = local_2c;
        }
      }
      else {
        local_34 = local_30;
      }
      local_24 = 0xffffffff;
      pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_24 = CInventory::check_item_exist(pCVar6,0x292091ac);
      if (local_24 != -1) {
        local_34 = local_24;
      }
      if (local_34 != -1) {
        iVar7 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_e5,iVar7);
        if ((((local_e3 != 0x28be7e) && (local_e3 != 0x1f72)) && (local_e3 != 0x20ba)) &&
           (local_e3 != 0x292091ac)) {
          return 0x11;
        }
        pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar2 = CInventory::delete_item(pCVar6,1,local_34,1,3,1);
        if (cVar2 != '\x01') {
          return 0x11;
        }
        cUserHistoryLog::apply_Item
                  ((cUserHistoryLog *)(param_1 + 0x79700),local_e3,*(undefined4 *)(param_2 + 2),0);
        CUser::SendUpdateItem(param_1,1,0,local_34);
        Inven_Item::SetUpgrade(param_2,'\0');
        uVar8 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        CInventory::update_item
                  (uVar8,1,param_4,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                   *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                   *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                   *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                   *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                   *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                   *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                   *(undefined4 *)(param_2 + 0x38),param_2[0x3c]);
        CUser::SendUpdateItem(param_1,1,0,param_4);
        return 0xd8;
      }
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar2 = CInventory::delete_item(pCVar6,1,param_4,1,0xd,1);
    if (cVar2 != '\x01') {
      return 0x11;
    }
    local_3c = Inven_Item::GetUpgrade(param_2);
    local_3c = local_3c & 0xff;
    Inven_Item::SetUpgrade(param_2,'\0');
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,(uint)param_4);
    DisJointResult::DisJointResult(local_a8);
    iVar7 = *(int *)(param_2 + 2);
    iVar9 = G_CDataManager();
    iVar7 = DisJoint::GetResult(*(DisJoint **)(iVar9 + 0x1c),iVar7,local_a8);
    if (iVar7 != 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,0);
      return 0;
    }
    *(undefined4 *)(param_2 + 2) = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
                    /* try { // try from 0854719d to 0854728e has its CatchHandler @ 08547525 */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::reserve(local_6c,6);
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      if (aiStack_a4[local_20 + 4] != 0) {
        std::make_pair<int&,int&>(local_60,aiStack_a4 + local_20 + 4);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                  (local_6c,(pair *)local_60);
      }
    }
    _getAdditionalDisjointItem(this,local_3c,param_3,(vector *)local_6c,param_5);
    cVar2 = stAmplifyOption_t::hasAbility((stAmplifyOption_t *)(param_2 + 0x11));
    if (cVar2 != '\0') {
      puVar10 = (upgrade_table_t *)
                CItemUpgradeTable::getUpgradeInfoTable((CItemUpgradeTable *)(this + 4));
      _getAdditionalDisjointItem(this,local_3c,param_3,(vector *)local_6c,puVar10);
    }
    std::vector<int,std::allocator<int>>::vector(local_78);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 085472d3 to 085474f8 has its CatchHandler @ 08547503 */
    local_38 = CInventory::insert_event_items
                         (pCVar6,local_6c,local_78,7,0x13,0,&DAT_08c9c3a0,&DAT_08c9c3a0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_7,local_38);
    std::vector<int,std::allocator<int>>::begin();
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
    __normal_iterator<int*>(local_7c,local_58);
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar3 = __gnu_cxx::operator!=(local_7c,local_54);
      if (!bVar3) break;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_50,(int)local_7c);
      piVar11 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                       ::operator*(local_50);
      local_1c = *piVar11;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_4c,(int)local_7c);
      puVar12 = (ulong *)__gnu_cxx::
                         __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                         operator*(local_4c);
      local_18 = *puVar12;
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_48,(int)local_7c);
      piVar11 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                       ::operator*(local_48);
      local_14 = *piVar11;
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_7,local_1c);
      InterfacePacketBuf::put_item_idx((InterfacePacketBuf *)param_7,local_18);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_7,local_14);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,local_18);
      if (local_10 != (CItem *)0x0) {
        Inven_Item::Inven_Item(local_122);
        local_120 = local_18;
        Inven_Item::set_add_info(local_122,local_14);
        (**(code **)(*(int *)local_10 + 8))(local_10,local_122);
        pCVar13 = (CCubeStatistic *)GetInstanceCubeStatistic();
        CCubeStatistic::collectCubeStatistics(pCVar13,local_10,local_14,param_1,1);
        local_80 = 0;
        sVar4 = (short)local_11b;
        this_01 = (Store *)G_Store();
        Store::GetSellItemPrice(this_01,local_122,local_10,sVar4,false,&local_80);
        iVar7 = local_80;
        pCVar14 = (CValueStatistic *)GetInstanceValueStatistic();
        CValueStatistic::AddValueStatistic(pCVar14,9,param_1,iVar7);
      }
    }
                    /* try { // try from 0854751e to 08547522 has its CatchHandler @ 08547525 */
    std::vector<int,std::allocator<int>>::~vector(local_78);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
  }
  return 0;
}
```
