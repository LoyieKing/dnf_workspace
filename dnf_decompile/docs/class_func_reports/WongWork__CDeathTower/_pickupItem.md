# _pickupItem

`_ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem`

`WongWork::CDeathTower::_pickupItem(CUser*, char*, int, map_item const&, bool, char, CItem const*)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x08466cfe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08466cfe  _ZN8WongWork11CDeathTower11_pickupItemEP5CUserPciRK8map_itembcPK5CItem
#           WongWork::CDeathTower::_pickupItem(CUser*, char*, int, map_item const&, bool, char, CItem const*)
# range [0x08466cfe, 0x084670f7]
08466cfe +0x000:  push   %ebp
08466cff +0x001:  mov    %esp,%ebp
08466d01 +0x003:  push   %esi
08466d02 +0x004:  push   %ebx
08466d03 +0x005:  sub    $0x90,%esp
08466d09 +0x00b:  mov    0x1c(%ebp),%edx
08466d0c +0x00e:  mov    0x20(%ebp),%eax
08466d0f +0x011:  mov    %dl,-0x3c(%ebp)
08466d12 +0x014:  mov    %al,-0x40(%ebp)
08466d15 +0x017:  mov    0xc(%ebp),%eax
08466d18 +0x01a:  mov    %eax,-0x2c(%ebp)
08466d1b +0x01d:  cmpl   $0x1,0x14(%ebp)
08466d1f +0x021:  jle    084670ea <+0x3ec>
08466d25 +0x027:  movb   $0x1,-0x25(%ebp)
08466d29 +0x02b:  mov    0x18(%ebp),%eax
08466d2c +0x02e:  movzbl (%eax),%eax
08466d2f +0x031:  xor    $0x1,%eax
08466d32 +0x034:  test   %al,%al
08466d34 +0x036:  je     08466d3a <+0x3c>
08466d36 +0x038:  movb   $0x0,-0x25(%ebp)
08466d3a +0x03c:  mov    0x24(%ebp),%eax
08466d3d +0x03f:  mov    %eax,(%esp)
08466d40 +0x042:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08466d45 +0x047:  cmp    $0x3,%eax
08466d48 +0x04a:  setg   %al
08466d4b +0x04d:  test   %al,%al
08466d4d +0x04f:  je     08466d56 <+0x58>
08466d4f +0x051:  movzbl -0x3c(%ebp),%eax
08466d53 +0x055:  mov    %al,-0x25(%ebp)
08466d56 +0x058:  mov    0x18(%ebp),%eax
08466d59 +0x05b:  movzbl (%eax),%eax
08466d5c +0x05e:  test   %al,%al
08466d5e +0x060:  je     08466d76 <+0x78>
08466d60 +0x062:  mov    0x24(%ebp),%eax
08466d63 +0x065:  mov    %eax,(%esp)
08466d66 +0x068:  call   0846996a <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x4d>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x4d
08466d6b +0x06d:  test   %al,%al
08466d6d +0x06f:  je     08466d76 <+0x78>
08466d6f +0x071:  mov    $0x1,%eax
08466d74 +0x076:  jmp    08466d7b <+0x7d>
08466d76 +0x078:  mov    $0x0,%eax
08466d7b +0x07d:  test   %al,%al
08466d7d +0x07f:  je     08466d86 <+0x88>
08466d7f +0x081:  movzbl -0x3c(%ebp),%eax
08466d83 +0x085:  mov    %al,-0x25(%ebp)
08466d86 +0x088:  cmpb   $0x0,-0x25(%ebp)
08466d8a +0x08c:  je     084670ea <+0x3ec>
08466d90 +0x092:  mov    0x24(%ebp),%eax
08466d93 +0x095:  mov    %eax,(%esp)
08466d96 +0x098:  call   0850d756 <_ZNK5CItem18check_item_routingEv>  ; CItem::check_item_routing() const
08466d9b +0x09d:  test   %al,%al
08466d9d +0x09f:  je     084670ea <+0x3ec>
08466da3 +0x0a5:  movl   $0x0,-0x2c(%ebp)
08466daa +0x0ac:  mov    0x8(%ebp),%eax
08466dad +0x0af:  add    $0x110,%eax
08466db2 +0x0b4:  mov    %eax,(%esp)
08466db5 +0x0b7:  call   08469b42 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x225>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x225
08466dba +0x0bc:  add    $0x1,%eax
08466dbd +0x0bf:  mov    %eax,-0x24(%ebp)
08466dc0 +0x0c2:  mov    -0x24(%ebp),%eax
08466dc3 +0x0c5:  cmp    0x14(%ebp),%eax
08466dc6 +0x0c8:  jl     08466dcf <+0xd1>
08466dc8 +0x0ca:  movl   $0x0,-0x24(%ebp)
08466dcf +0x0d1:  movl   $0x0,-0x20(%ebp)
08466dd6 +0x0d8:  movl   $0x0,-0x18(%ebp)
08466ddd +0x0df:  jmp    08466fed <+0x2ef>
08466de2 +0x0e4:  movl   $0x0,-0x14(%ebp)
08466de9 +0x0eb:  mov    0x8(%ebp),%eax
08466dec +0x0ee:  mov    (%eax),%eax
08466dee +0x0f0:  mov    -0x18(%ebp),%edx
08466df1 +0x0f3:  mov    %edx,0x4(%esp)
08466df5 +0x0f7:  mov    %eax,(%esp)
08466df8 +0x0fa:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
08466dfd +0x0ff:  mov    %eax,-0x14(%ebp)
08466e00 +0x102:  cmpl   $0x0,-0x14(%ebp)
08466e04 +0x106:  je     08466e21 <+0x123>
08466e06 +0x108:  mov    0x8(%ebp),%eax
08466e09 +0x10b:  mov    (%eax),%eax
08466e0b +0x10d:  mov    -0x18(%ebp),%edx
08466e0e +0x110:  mov    %edx,0x4(%esp)
08466e12 +0x114:  mov    %eax,(%esp)
08466e15 +0x117:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08466e1a +0x11c:  xor    $0x1,%eax
08466e1d +0x11f:  test   %al,%al
08466e1f +0x121:  je     08466e28 <+0x12a>
08466e21 +0x123:  mov    $0x1,%eax
08466e26 +0x128:  jmp    08466e2d <+0x12f>
08466e28 +0x12a:  mov    $0x0,%eax
08466e2d +0x12f:  test   %al,%al
08466e2f +0x131:  jne    08466fe2 <+0x2e4>
08466e35 +0x137:  mov    0x8(%ebp),%eax
08466e38 +0x13a:  lea    0x110(%eax),%edx
08466e3e +0x140:  mov    -0x18(%ebp),%eax
08466e41 +0x143:  mov    %eax,0x4(%esp)
08466e45 +0x147:  mov    %edx,(%esp)
08466e48 +0x14a:  call   08469b76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x259>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x259
08466e4d +0x14f:  xor    $0x1,%eax
08466e50 +0x152:  test   %al,%al
08466e52 +0x154:  jne    08466fe5 <+0x2e7>
08466e58 +0x15a:  mov    -0x14(%ebp),%eax
08466e5b +0x15d:  mov    %eax,(%esp)
08466e5e +0x160:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08466e63 +0x165:  mov    %eax,%edx
08466e65 +0x167:  mov    0x18(%ebp),%eax
08466e68 +0x16a:  mov    0x10(%eax),%ecx
08466e6b +0x16d:  mov    %ecx,0x4(%esp)
08466e6f +0x171:  mov    0x14(%eax),%ecx
08466e72 +0x174:  mov    %ecx,0x8(%esp)
08466e76 +0x178:  mov    0x18(%eax),%ecx
08466e79 +0x17b:  mov    %ecx,0xc(%esp)
08466e7d +0x17f:  mov    0x1c(%eax),%ecx
08466e80 +0x182:  mov    %ecx,0x10(%esp)
08466e84 +0x186:  mov    0x20(%eax),%ecx
08466e87 +0x189:  mov    %ecx,0x14(%esp)
08466e8b +0x18d:  mov    0x24(%eax),%ecx
08466e8e +0x190:  mov    %ecx,0x18(%esp)
08466e92 +0x194:  mov    0x28(%eax),%ecx
08466e95 +0x197:  mov    %ecx,0x1c(%esp)
08466e99 +0x19b:  mov    0x2c(%eax),%ecx
08466e9c +0x19e:  mov    %ecx,0x20(%esp)
08466ea0 +0x1a2:  mov    0x30(%eax),%ecx
08466ea3 +0x1a5:  mov    %ecx,0x24(%esp)
08466ea7 +0x1a9:  mov    0x34(%eax),%ecx
08466eaa +0x1ac:  mov    %ecx,0x28(%esp)
08466eae +0x1b0:  mov    0x38(%eax),%ecx
08466eb1 +0x1b3:  mov    %ecx,0x2c(%esp)
08466eb5 +0x1b7:  mov    0x3c(%eax),%ecx
08466eb8 +0x1ba:  mov    %ecx,0x30(%esp)
08466ebc +0x1be:  mov    0x40(%eax),%ecx
08466ebf +0x1c1:  mov    %ecx,0x34(%esp)
08466ec3 +0x1c5:  mov    0x44(%eax),%ecx
08466ec6 +0x1c8:  mov    %ecx,0x38(%esp)
08466eca +0x1cc:  mov    0x48(%eax),%ecx
08466ecd +0x1cf:  mov    %ecx,0x3c(%esp)
08466ed1 +0x1d3:  movzbl 0x4c(%eax),%eax
08466ed5 +0x1d7:  mov    %al,0x40(%esp)
08466ed9 +0x1db:  mov    %edx,(%esp)
08466edc +0x1de:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
08466ee1 +0x1e3:  cmp    $0xffffffff,%eax
08466ee4 +0x1e6:  sete   %al
08466ee7 +0x1e9:  test   %al,%al
08466ee9 +0x1eb:  jne    08466fe8 <+0x2ea>
08466eef +0x1f1:  mov    -0x18(%ebp),%eax
08466ef2 +0x1f4:  add    0x10(%ebp),%eax
08466ef5 +0x1f7:  mov    -0x18(%ebp),%edx
08466ef8 +0x1fa:  add    0x10(%ebp),%edx
08466efb +0x1fd:  movzbl (%edx),%edx
08466efe +0x200:  add    $0x1,%edx
08466f01 +0x203:  mov    %dl,(%eax)
08466f03 +0x205:  mov    -0x20(%ebp),%eax
08466f06 +0x208:  cmp    -0x24(%ebp),%eax
08466f09 +0x20b:  jne    08466f37 <+0x239>
08466f0b +0x20d:  mov    -0x18(%ebp),%eax
08466f0e +0x210:  add    0x10(%ebp),%eax
08466f11 +0x213:  mov    -0x18(%ebp),%edx
08466f14 +0x216:  add    0x10(%ebp),%edx
08466f17 +0x219:  movzbl (%edx),%edx
08466f1a +0x21c:  add    $0x28,%edx
08466f1d +0x21f:  mov    %dl,(%eax)
08466f1f +0x221:  mov    0x8(%ebp),%eax
08466f22 +0x224:  lea    0x110(%eax),%edx
08466f28 +0x22a:  mov    -0x20(%ebp),%eax
08466f2b +0x22d:  mov    %eax,0x4(%esp)
08466f2f +0x231:  mov    %edx,(%esp)
08466f32 +0x234:  call   08469b4c <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x22f>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x22f
08466f37 +0x239:  mov    0x24(%ebp),%eax
08466f3a +0x23c:  mov    %eax,(%esp)
08466f3d +0x23f:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
08466f42 +0x244:  xor    $0x1,%eax
08466f45 +0x247:  test   %al,%al
08466f47 +0x249:  je     08466f88 <+0x28a>
08466f49 +0x24b:  mov    0x24(%ebp),%eax
08466f4c +0x24e:  mov    (%eax),%eax
08466f4e +0x250:  add    $0xc,%eax
08466f51 +0x253:  mov    (%eax),%edx
08466f53 +0x255:  mov    0x24(%ebp),%eax
08466f56 +0x258:  mov    %eax,(%esp)
08466f59 +0x25b:  call   *%edx
08466f5b +0x25d:  cmp    $0xa,%eax
08466f5e +0x260:  jne    08466f88 <+0x28a>
08466f60 +0x262:  mov    -0x14(%ebp),%eax
08466f63 +0x265:  mov    %eax,(%esp)
08466f66 +0x268:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08466f6b +0x26d:  movsbl %al,%eax
08466f6e +0x270:  mov    %eax,0x4(%esp)
08466f72 +0x274:  mov    0x24(%ebp),%eax
08466f75 +0x277:  mov    %eax,(%esp)
08466f78 +0x27a:  call   0850d728 <_ZNK5CItem14check_job_typeEc>  ; CItem::check_job_type(char) const
08466f7d +0x27f:  test   %al,%al
08466f7f +0x281:  je     08466f88 <+0x28a>
08466f81 +0x283:  mov    $0x1,%eax
08466f86 +0x288:  jmp    08466f8d <+0x28f>
08466f88 +0x28a:  mov    $0x0,%eax
08466f8d +0x28f:  test   %al,%al
08466f8f +0x291:  je     08466fa5 <+0x2a7>
08466f91 +0x293:  mov    -0x18(%ebp),%eax
08466f94 +0x296:  add    0x10(%ebp),%eax
08466f97 +0x299:  mov    -0x18(%ebp),%edx
08466f9a +0x29c:  add    0x10(%ebp),%edx
08466f9d +0x29f:  movzbl (%edx),%edx
08466fa0 +0x2a2:  add    $0x1e,%edx
08466fa3 +0x2a5:  mov    %dl,(%eax)
08466fa5 +0x2a7:  mov    -0x18(%ebp),%eax
08466fa8 +0x2aa:  mov    %eax,%ebx
08466faa +0x2ac:  add    0x10(%ebp),%ebx
08466fad +0x2af:  mov    -0x18(%ebp),%eax
08466fb0 +0x2b2:  add    0x10(%ebp),%eax
08466fb3 +0x2b5:  movzbl (%eax),%eax
08466fb6 +0x2b8:  mov    %eax,%esi
08466fb8 +0x2ba:  mov    -0x18(%ebp),%eax
08466fbb +0x2bd:  add    0x10(%ebp),%eax
08466fbe +0x2c0:  movzbl (%eax),%eax
08466fc1 +0x2c3:  movsbl %al,%eax
08466fc4 +0x2c6:  mov    $0x64,%edx
08466fc9 +0x2cb:  mov    %edx,%ecx
08466fcb +0x2cd:  sub    %eax,%ecx
08466fcd +0x2cf:  mov    %ecx,%eax
08466fcf +0x2d1:  mov    %eax,(%esp)
08466fd2 +0x2d4:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
08466fd7 +0x2d9:  lea    (%esi,%eax,1),%eax
08466fda +0x2dc:  mov    %al,(%ebx)
08466fdc +0x2de:  addl   $0x1,-0x20(%ebp)
08466fe0 +0x2e2:  jmp    08466fe9 <+0x2eb>
08466fe2 +0x2e4:  nop
08466fe3 +0x2e5:  jmp    08466fe9 <+0x2eb>
08466fe5 +0x2e7:  nop
08466fe6 +0x2e8:  jmp    08466fe9 <+0x2eb>
08466fe8 +0x2ea:  nop
08466fe9 +0x2eb:  addl   $0x1,-0x18(%ebp)
08466fed +0x2ef:  cmpl   $0x3,-0x18(%ebp)
08466ff1 +0x2f3:  setle  %al
08466ff4 +0x2f6:  test   %al,%al
08466ff6 +0x2f8:  jne    08466de2 <+0xe4>
08466ffc +0x2fe:  movl   $0x0,-0x1c(%ebp)
08467003 +0x305:  movl   $0x0,-0x10(%ebp)
0846700a +0x30c:  jmp    084670db <+0x3dd>
0846700f +0x311:  movl   $0x0,-0xc(%ebp)
08467016 +0x318:  mov    0x8(%ebp),%eax
08467019 +0x31b:  mov    (%eax),%eax
0846701b +0x31d:  mov    -0x10(%ebp),%edx
0846701e +0x320:  mov    %edx,0x4(%esp)
08467022 +0x324:  mov    %eax,(%esp)
08467025 +0x327:  call   08145764 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x1e7>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x1e7
0846702a +0x32c:  mov    %eax,-0xc(%ebp)
0846702d +0x32f:  cmpl   $0x0,-0xc(%ebp)
08467031 +0x333:  je     0846704e <+0x350>
08467033 +0x335:  mov    0x8(%ebp),%eax
08467036 +0x338:  mov    (%eax),%eax
08467038 +0x33a:  mov    -0x10(%ebp),%edx
0846703b +0x33d:  mov    %edx,0x4(%esp)
0846703f +0x341:  mov    %eax,(%esp)
08467042 +0x344:  call   08145868 <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x2eb>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x2eb
08467047 +0x349:  xor    $0x1,%eax
0846704a +0x34c:  test   %al,%al
0846704c +0x34e:  je     08467055 <+0x357>
0846704e +0x350:  mov    $0x1,%eax
08467053 +0x355:  jmp    0846705a <+0x35c>
08467055 +0x357:  mov    $0x0,%eax
0846705a +0x35c:  test   %al,%al
0846705c +0x35e:  jne    084670d3 <+0x3d5>
0846705e +0x360:  mov    0x8(%ebp),%eax
08467061 +0x363:  lea    0x110(%eax),%edx
08467067 +0x369:  mov    -0x10(%ebp),%eax
0846706a +0x36c:  mov    %eax,0x4(%esp)
0846706e +0x370:  mov    %edx,(%esp)
08467071 +0x373:  call   08469b76 <_GLOBAL__I__ZN8WongWork11CDeathTower14CPacketHandler20makePickupItemHeaderEtt+0x259>  ; global constructors keyed to WongWork::CDeathTower::CPacketHandler::makePickupItemHeader(unsigned short, unsigned short)+0x259
08467076 +0x378:  xor    $0x1,%eax
08467079 +0x37b:  test   %al,%al
0846707b +0x37d:  jne    084670d6 <+0x3d8>
0846707d +0x37f:  mov    -0x10(%ebp),%eax
08467080 +0x382:  add    0x10(%ebp),%eax
08467083 +0x385:  movzbl (%eax),%eax
08467086 +0x388:  movsbl %al,%eax
08467089 +0x38b:  cmp    -0x1c(%ebp),%eax
0846708c +0x38e:  jle    084670a5 <+0x3a7>
0846708e +0x390:  mov    -0x10(%ebp),%eax
08467091 +0x393:  add    0x10(%ebp),%eax
08467094 +0x396:  movzbl (%eax),%eax
08467097 +0x399:  movsbl %al,%eax
0846709a +0x39c:  mov    %eax,-0x1c(%ebp)
0846709d +0x39f:  mov    -0xc(%ebp),%eax
084670a0 +0x3a2:  mov    %eax,-0x2c(%ebp)
084670a3 +0x3a5:  jmp    084670d7 <+0x3d9>
084670a5 +0x3a7:  mov    -0x10(%ebp),%eax
084670a8 +0x3aa:  add    0x10(%ebp),%eax
084670ab +0x3ad:  movzbl (%eax),%eax
084670ae +0x3b0:  movsbl %al,%eax
084670b1 +0x3b3:  cmp    -0x1c(%ebp),%eax
084670b4 +0x3b6:  jne    084670d7 <+0x3d9>
084670b6 +0x3b8:  mov    -0x10(%ebp),%eax
084670b9 +0x3bb:  add    0x10(%ebp),%eax
084670bc +0x3be:  movzbl (%eax),%eax
084670bf +0x3c1:  test   %al,%al
084670c1 +0x3c3:  jle    084670d7 <+0x3d9>
084670c3 +0x3c5:  mov    -0x10(%ebp),%eax
084670c6 +0x3c8:  add    0x10(%ebp),%eax
084670c9 +0x3cb:  movzbl (%eax),%edx
084670cc +0x3ce:  sub    $0x1,%edx
084670cf +0x3d1:  mov    %dl,(%eax)
084670d1 +0x3d3:  jmp    084670d7 <+0x3d9>
084670d3 +0x3d5:  nop
084670d4 +0x3d6:  jmp    084670d7 <+0x3d9>
084670d6 +0x3d8:  nop
084670d7 +0x3d9:  addl   $0x1,-0x10(%ebp)
084670db +0x3dd:  cmpl   $0x3,-0x10(%ebp)
084670df +0x3e1:  setle  %al
084670e2 +0x3e4:  test   %al,%al
084670e4 +0x3e6:  jne    0846700f <+0x311>
084670ea +0x3ec:  mov    -0x2c(%ebp),%eax
084670ed +0x3ef:  add    $0x90,%esp
084670f3 +0x3f5:  pop    %ebx
084670f4 +0x3f6:  pop    %esi
084670f5 +0x3f7:  pop    %ebp
084670f6 +0x3f8:  ret
084670f7 +0x3f9:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::_pickupItem @ 0x8466cfe

/* WongWork::CDeathTower::_pickupItem(CUser*, char*, int, map_item const&, bool, char, CItem const*)
    */

CUser * __thiscall
WongWork::CDeathTower::_pickupItem
          (CDeathTower *this,CUser *param_1,char *param_2,int param_3,map_item *param_4,bool param_5
          ,char param_6,CItem *param_7)

{
  map_item mVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  CUserCharacInfo *this_00;
  undefined4 uVar6;
  CUser *pCVar7;
  CUser *local_30;
  char local_29;
  int local_28;
  int local_24;
  int local_1c;
  int local_14;
  
  local_30 = param_1;
  if (1 < param_3) {
    mVar1 = *param_4;
    iVar5 = CItem::get_rarity(param_7);
    local_29 = mVar1 == (map_item)0x1;
    if (3 < iVar5) {
      local_29 = param_5;
    }
    if ((*param_4 == (map_item)0x0) || (cVar3 = CItem::isEpicRoutingItem(param_7), cVar3 == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      local_29 = param_5;
    }
    if ((local_29 != '\0') && (cVar3 = CItem::check_item_routing(param_7), cVar3 != '\0')) {
      local_30 = (CUser *)0x0;
      local_28 = CPlayData::getLastRoutedTurn((CPlayData *)(this + 0x110));
      local_28 = local_28 + 1;
      if (param_3 <= local_28) {
        local_28 = 0;
      }
      local_24 = 0;
      for (local_1c = 0; local_1c < 4; local_1c = local_1c + 1) {
        this_00 = (CUserCharacInfo *)CParty::get_user(*(CParty **)this,local_1c);
        if ((this_00 == (CUserCharacInfo *)0x0) ||
           (cVar3 = CParty::checkValidUser(*(CParty **)this,local_1c), cVar3 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) &&
           (cVar3 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_1c), cVar3 == '\x01')
           ) {
          uVar6 = CUserCharacInfo::getCurCharacInvenR(this_00);
          iVar5 = CInventory::tryInsertItemIntoInventory
                            (uVar6,*(undefined4 *)(param_4 + 0x10),*(undefined4 *)(param_4 + 0x14),
                             *(undefined4 *)(param_4 + 0x18),*(undefined4 *)(param_4 + 0x1c),
                             *(undefined4 *)(param_4 + 0x20),*(undefined4 *)(param_4 + 0x24),
                             *(undefined4 *)(param_4 + 0x28),*(undefined4 *)(param_4 + 0x2c),
                             *(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
                             *(undefined4 *)(param_4 + 0x38),*(undefined4 *)(param_4 + 0x3c),
                             *(undefined4 *)(param_4 + 0x40),*(undefined4 *)(param_4 + 0x44),
                             *(undefined4 *)(param_4 + 0x48),param_4[0x4c]);
          if (iVar5 != -1) {
            param_2[local_1c] = param_2[local_1c] + '\x01';
            if (local_24 == local_28) {
              param_2[local_1c] = param_2[local_1c] + '(';
              CPlayData::setLastRoutedTurn((CPlayData *)(this + 0x110),local_24);
            }
            cVar3 = CItem::is_stackable(param_7);
            if ((cVar3 == '\x01') ||
               (iVar5 = (**(code **)(*(int *)param_7 + 0xc))(param_7), iVar5 != 10)) {
LAB_08466f88:
              bVar2 = false;
            }
            else {
              cVar3 = CUserCharacInfo::get_charac_job(this_00);
              cVar3 = CItem::check_job_type(param_7,cVar3);
              if (cVar3 == '\0') goto LAB_08466f88;
              bVar2 = true;
            }
            if (bVar2) {
              param_2[local_1c] = param_2[local_1c] + '\x1e';
            }
            cVar3 = param_2[local_1c];
            cVar4 = get_rand_int(100 - param_2[local_1c]);
            param_2[local_1c] = cVar3 + cVar4;
            local_24 = local_24 + 1;
          }
        }
      }
      cVar3 = '\0';
      for (local_14 = 0; local_14 < 4; local_14 = local_14 + 1) {
        pCVar7 = (CUser *)CParty::get_user(*(CParty **)this,local_14);
        if ((pCVar7 == (CUser *)0x0) ||
           (cVar4 = CParty::checkValidUser(*(CParty **)this,local_14), cVar4 != '\x01')) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if ((!bVar2) &&
           (cVar4 = CPlayData::isMemberAlive((CPlayData *)(this + 0x110),local_14), cVar4 == '\x01')
           ) {
          if (cVar3 < param_2[local_14]) {
            cVar3 = param_2[local_14];
            local_30 = pCVar7;
          }
          else if ((param_2[local_14] == cVar3) && ('\0' < param_2[local_14])) {
            param_2[local_14] = param_2[local_14] + -1;
          }
        }
      }
    }
  }
  return local_30;
}
```
