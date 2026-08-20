# _CheckBuyingCondition

`_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht`

`WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CCeraShop` | `0x08323f86` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08323f86  _ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjtht
#           WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int, unsigned short, unsigned char, unsigned short)
# range [0x08323f86, 0x0832480f]
08323f86 +0x000:  push   %ebp
08323f87 +0x001:  mov    %esp,%ebp
08323f89 +0x003:  push   %ebx
08323f8a +0x004:  sub    $0xc4,%esp
08323f90 +0x00a:  mov    0x1c(%ebp),%ecx
08323f93 +0x00d:  mov    0x20(%ebp),%edx
08323f96 +0x010:  mov    0x24(%ebp),%eax
08323f99 +0x013:  mov    %cx,-0x6c(%ebp)
08323f9d +0x017:  mov    %dl,-0x70(%ebp)
08323fa0 +0x01a:  mov    %ax,-0x74(%ebp)
08323fa4 +0x01e:  movl   $0x0,-0x1c(%ebp)
08323fab +0x025:  mov    0x10(%ebp),%eax
08323fae +0x028:  cmp    $&_ZL14gUnicodeBuffer+0x10891,%eax
08323fb3 +0x02d:  je     08323fbe <+0x38>
08323fb5 +0x02f:  cmp    $&_ZL14gUnicodeBuffer+0x11c10,%eax
08323fba +0x034:  je     08323fc7 <+0x41>
08323fbc +0x036:  jmp    08323fce <+0x48>
08323fbe +0x038:  movl   $0x1,-0x1c(%ebp)
08323fc5 +0x03f:  jmp    08323fce <+0x48>
08323fc7 +0x041:  movl   $0x3,-0x1c(%ebp)
08323fce +0x048:  cmpl   $0x1,0x14(%ebp)
08323fd2 +0x04c:  je     083240a1 <+0x11b>
08323fd8 +0x052:  mov    0x14(%ebp),%ebx
08323fdb +0x055:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08323fe0 +0x05a:  mov    %ebx,0x4(%esp)
08323fe4 +0x05e:  mov    %eax,(%esp)
08323fe7 +0x061:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08323fec +0x066:  mov    %eax,-0x18(%ebp)
08323fef +0x069:  cmpl   $0x0,-0x18(%ebp)
08323ff3 +0x06d:  jne    08323fff <+0x79>
08323ff5 +0x06f:  mov    $0x0,%eax
08323ffa +0x074:  jmp    08324806 <+0x880>
08323fff +0x079:  mov    -0x18(%ebp),%eax
08324002 +0x07c:  mov    (%eax),%eax
08324004 +0x07e:  add    $0x10,%eax
08324007 +0x081:  mov    (%eax),%edx
08324009 +0x083:  mov    -0x18(%ebp),%eax
0832400c +0x086:  mov    %eax,(%esp)
0832400f +0x089:  call   *%edx
08324011 +0x08b:  test   %al,%al
08324013 +0x08d:  je     083240a1 <+0x11b>
08324019 +0x093:  cmpw   $0x0,-0x74(%ebp)
0832401e +0x098:  je     0832403b <+0xb5>
08324020 +0x09a:  movzwl -0x74(%ebp),%ebx
08324024 +0x09e:  mov    -0x18(%ebp),%eax
08324027 +0x0a1:  mov    %eax,(%esp)
0832402a +0x0a4:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
0832402f +0x0a9:  mov    %eax,(%esp)
08324032 +0x0ac:  call   0815219a <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1acf>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1acf
08324037 +0x0b1:  cmp    %eax,%ebx
08324039 +0x0b3:  jb     08324042 <+0xbc>
0832403b +0x0b5:  mov    $0x1,%eax
08324040 +0x0ba:  jmp    08324047 <+0xc1>
08324042 +0x0bc:  mov    $0x0,%eax
08324047 +0x0c1:  test   %al,%al
08324049 +0x0c3:  je     08324055 <+0xcf>
0832404b +0x0c5:  mov    $0x0,%eax
08324050 +0x0ca:  jmp    08324806 <+0x880>
08324055 +0x0cf:  movzwl -0x74(%ebp),%eax
08324059 +0x0d3:  cmp    -0x6c(%ebp),%ax
0832405d +0x0d7:  je     08324069 <+0xe3>
0832405f +0x0d9:  mov    $0x0,%eax
08324064 +0x0de:  jmp    08324806 <+0x880>
08324069 +0x0e3:  movzwl -0x74(%ebp),%ebx
0832406d +0x0e7:  mov    -0x18(%ebp),%eax
08324070 +0x0ea:  mov    %eax,(%esp)
08324073 +0x0ed:  call   08150f28 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x85d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x85d
08324078 +0x0f2:  mov    %ebx,0x4(%esp)
0832407c +0x0f6:  mov    %eax,(%esp)
0832407f +0x0f9:  call   081522ca <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1bff>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1bff
08324084 +0x0fe:  mov    0x10(%eax),%eax
08324087 +0x101:  mov    %eax,-0x14(%ebp)
0832408a +0x104:  cmpw   $0x4,-0x6c(%ebp)
0832408f +0x109:  je     083240a1 <+0x11b>
08324091 +0x10b:  cmpl   $0x0,-0x14(%ebp)
08324095 +0x10f:  je     083240a1 <+0x11b>
08324097 +0x111:  mov    $0x0,%eax
0832409c +0x116:  jmp    08324806 <+0x880>
083240a1 +0x11b:  mov    0x14(%ebp),%eax
083240a4 +0x11e:  cmp    $0x349,%eax
083240a9 +0x123:  ja     08324130 <+0x1aa>
083240af +0x129:  cmp    $0x347,%eax
083240b4 +0x12e:  jae    083241ae <+0x228>
083240ba +0x134:  cmp    $0x43,%eax
083240bd +0x137:  ja     083240f2 <+0x16c>
083240bf +0x139:  cmp    $0x3f,%eax
083240c2 +0x13c:  jae    083241a5 <+0x21f>
083240c8 +0x142:  cmp    $0x33,%eax
083240cb +0x145:  je     0832419c <+0x216>
083240d1 +0x14b:  cmp    $0x33,%eax
083240d4 +0x14e:  ja     083240e4 <+0x15e>
083240d6 +0x150:  cmp    $0x32,%eax
083240d9 +0x153:  je     08324193 <+0x20d>
083240df +0x159:  jmp    083241d0 <+0x24a>
083240e4 +0x15e:  cmp    $0x39,%eax
083240e7 +0x161:  jb     083241d0 <+0x24a>
083240ed +0x167:  jmp    08324193 <+0x20d>
083240f2 +0x16c:  cmp    $0xc0,%eax
083240f7 +0x171:  ja     08324115 <+0x18f>
083240f9 +0x173:  cmp    $0xbe,%eax
083240fe +0x178:  jae    083241ae <+0x228>
08324104 +0x17e:  sub    $0x45,%eax
08324107 +0x181:  cmp    $0x4,%eax
0832410a +0x184:  ja     083241d0 <+0x24a>
08324110 +0x18a:  jmp    083241a5 <+0x21f>
08324115 +0x18f:  cmp    $0x2e4,%eax
0832411a +0x194:  je     083241ae <+0x228>
08324120 +0x19a:  cmp    $0x335,%eax
08324125 +0x19f:  je     083241ae <+0x228>
0832412b +0x1a5:  jmp    083241d0 <+0x24a>
08324130 +0x1aa:  cmp    $0x28978c,%eax
08324135 +0x1af:  ja     08324165 <+0x1df>
08324137 +0x1b1:  cmp    $0x28978b,%eax
0832413c +0x1b6:  jae    08324193 <+0x20d>
0832413e +0x1b8:  cmp    $0x1ee2,%eax
08324143 +0x1bd:  je     083241ae <+0x228>
08324145 +0x1bf:  cmp    $0x1ee2,%eax
0832414a +0x1c4:  ja     08324155 <+0x1cf>
0832414c +0x1c6:  cmp    $0x3a0,%eax
08324151 +0x1cb:  je     083241ae <+0x228>
08324153 +0x1cd:  jmp    083241d0 <+0x24a>
08324155 +0x1cf:  cmp    $0x2896cb,%eax
0832415a +0x1d4:  je     083241ae <+0x228>
0832415c +0x1d6:  cmp    $0x28978a,%eax
08324161 +0x1db:  je     0832419c <+0x216>
08324163 +0x1dd:  jmp    083241d0 <+0x24a>
08324165 +0x1df:  cmp    $0x2897c9,%eax
0832416a +0x1e4:  ja     0832417c <+0x1f6>
0832416c +0x1e6:  cmp    $0x2897c8,%eax
08324171 +0x1eb:  jae    083241c0 <+0x23a>
08324173 +0x1ed:  cmp    $0x28978f,%eax
08324178 +0x1f2:  je     083241b7 <+0x231>
0832417a +0x1f4:  jmp    083241d0 <+0x24a>
0832417c +0x1f6:  cmp    $0x28995d,%eax
08324181 +0x1fb:  jb     083241d0 <+0x24a>
08324183 +0x1fd:  cmp    $0x28995e,%eax
08324188 +0x202:  jbe    083241c9 <+0x243>
0832418a +0x204:  cmp    $0x2899ab,%eax
0832418f +0x209:  je     083241c9 <+0x243>
08324191 +0x20b:  jmp    083241d0 <+0x24a>
08324193 +0x20d:  movl   $0x4,-0x1c(%ebp)
0832419a +0x214:  jmp    083241d0 <+0x24a>
0832419c +0x216:  movl   $0x5,-0x1c(%ebp)
083241a3 +0x21d:  jmp    083241d0 <+0x24a>
083241a5 +0x21f:  movl   $0x6,-0x1c(%ebp)
083241ac +0x226:  jmp    083241d0 <+0x24a>
083241ae +0x228:  movl   $0xb,-0x1c(%ebp)
083241b5 +0x22f:  jmp    083241d0 <+0x24a>
083241b7 +0x231:  movl   $0xc,-0x1c(%ebp)
083241be +0x238:  jmp    083241d0 <+0x24a>
083241c0 +0x23a:  movl   $0xd,-0x1c(%ebp)
083241c7 +0x241:  jmp    083241d0 <+0x24a>
083241c9 +0x243:  movl   $0x10,-0x1c(%ebp)
083241d0 +0x24a:  cmpl   $0x0,-0x1c(%ebp)
083241d4 +0x24e:  jne    083241e0 <+0x25a>
083241d6 +0x250:  mov    $0x1,%eax
083241db +0x255:  jmp    08324806 <+0x880>
083241e0 +0x25a:  cmpl   $0x10,-0x1c(%ebp)
083241e4 +0x25e:  ja     08324801 <+0x87b>
083241ea +0x264:  mov    -0x1c(%ebp),%eax
083241ed +0x267:  shl    $0x2,%eax
083241f0 +0x26a:  mov    &data#da6fcd5a(.rodata)(%eax),%eax
083241f6 +0x270:  jmp    *%eax
083241f8 +0x272:  mov    0xc(%ebp),%eax
083241fb +0x275:  mov    %eax,0x4(%esp)
083241ff +0x279:  mov    0x8(%ebp),%eax
08324202 +0x27c:  mov    %eax,(%esp)
08324205 +0x27f:  call   08324966 <_ZN8WongWork9CCeraShop26_CheckConditionPutonAvatarEP5CUser>  ; WongWork::CCeraShop::_CheckConditionPutonAvatar(CUser*)
0832420a +0x284:  jmp    08324806 <+0x880>
0832420f +0x289:  movl   $0x4589a450,&_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE14eventStartTime
08324219 +0x293:  movl   $0x45ae8e50,&_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE12eventEndTime
08324223 +0x29d:  mov    0xc(%ebp),%eax
08324226 +0x2a0:  mov    %eax,(%esp)
08324229 +0x2a3:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
0832422e +0x2a8:  mov    &_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE14eventStartTime,%edx
08324234 +0x2ae:  cmp    %edx,%eax
08324236 +0x2b0:  jl     08324254 <+0x2ce>
08324238 +0x2b2:  mov    0xc(%ebp),%eax
0832423b +0x2b5:  mov    %eax,(%esp)
0832423e +0x2b8:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
08324243 +0x2bd:  mov    &_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE12eventEndTime,%edx
08324249 +0x2c3:  cmp    %edx,%eax
0832424b +0x2c5:  jge    08324254 <+0x2ce>
0832424d +0x2c7:  mov    $0x1,%eax
08324252 +0x2cc:  jmp    08324259 <+0x2d3>
08324254 +0x2ce:  mov    $0x0,%eax
08324259 +0x2d3:  test   %al,%al
0832425b +0x2d5:  je     083247eb <+0x865>
08324261 +0x2db:  mov    $0x1,%eax
08324266 +0x2e0:  jmp    08324806 <+0x880>
0832426b +0x2e5:  mov    0xc(%ebp),%eax
0832426e +0x2e8:  mov    %eax,(%esp)
08324271 +0x2eb:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08324276 +0x2f0:  mov    %eax,(%esp)
08324279 +0x2f3:  call   0822d708 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2db2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2db2
0832427e +0x2f8:  mov    %eax,-0x10(%ebp)
08324281 +0x2fb:  mov    0x14(%ebp),%eax
08324284 +0x2fe:  cmp    $0x3c,%eax
08324287 +0x301:  je     0832432c <+0x3a6>
0832428d +0x307:  cmp    $0x3c,%eax
08324290 +0x30a:  ja     083242b5 <+0x32f>
08324292 +0x30c:  cmp    $0x39,%eax
08324295 +0x30f:  je     083242f3 <+0x36d>
08324297 +0x311:  cmp    $0x39,%eax
0832429a +0x314:  ja     083242a6 <+0x320>
0832429c +0x316:  cmp    $0x32,%eax
0832429f +0x319:  je     083242de <+0x358>
083242a1 +0x31b:  jmp    08324801 <+0x87b>
083242a6 +0x320:  cmp    $0x3a,%eax
083242a9 +0x323:  je     08324308 <+0x382>
083242ab +0x325:  cmp    $0x3b,%eax
083242ae +0x328:  je     0832431a <+0x394>
083242b0 +0x32a:  jmp    08324801 <+0x87b>
083242b5 +0x32f:  cmp    $0x3e,%eax
083242b8 +0x332:  je     08324350 <+0x3ca>
083242be +0x338:  cmp    $0x3e,%eax
083242c1 +0x33b:  jb     0832433e <+0x3b8>
083242c3 +0x33d:  cmp    $0x28978b,%eax
083242c8 +0x342:  je     08324362 <+0x3dc>
083242ce +0x348:  cmp    $0x28978c,%eax
083242d3 +0x34d:  je     08324374 <+0x3ee>
083242d9 +0x353:  jmp    08324801 <+0x87b>
083242de +0x358:  cmpl   $0x8,-0x10(%ebp)
083242e2 +0x35c:  jne    083242ee <+0x368>
083242e4 +0x35e:  mov    $0x1,%eax
083242e9 +0x363:  jmp    08324806 <+0x880>
083242ee +0x368:  jmp    0832438b <+0x405>
083242f3 +0x36d:  cmpl   $0x18,-0x10(%ebp)
083242f7 +0x371:  jne    08324303 <+0x37d>
083242f9 +0x373:  mov    $0x1,%eax
083242fe +0x378:  jmp    08324806 <+0x880>
08324303 +0x37d:  jmp    0832438b <+0x405>
08324308 +0x382:  cmpl   $0x28,-0x10(%ebp)
0832430c +0x386:  jne    08324318 <+0x392>
0832430e +0x388:  mov    $0x1,%eax
08324313 +0x38d:  jmp    08324806 <+0x880>
08324318 +0x392:  jmp    0832438b <+0x405>
0832431a +0x394:  cmpl   $0x38,-0x10(%ebp)
0832431e +0x398:  jne    0832432a <+0x3a4>
08324320 +0x39a:  mov    $0x1,%eax
08324325 +0x39f:  jmp    08324806 <+0x880>
0832432a +0x3a4:  jmp    0832438b <+0x405>
0832432c +0x3a6:  cmpl   $0x48,-0x10(%ebp)
08324330 +0x3aa:  jne    0832433c <+0x3b6>
08324332 +0x3ac:  mov    $0x1,%eax
08324337 +0x3b1:  jmp    08324806 <+0x880>
0832433c +0x3b6:  jmp    0832438b <+0x405>
0832433e +0x3b8:  cmpl   $0x58,-0x10(%ebp)
08324342 +0x3bc:  jne    0832434e <+0x3c8>
08324344 +0x3be:  mov    $0x1,%eax
08324349 +0x3c3:  jmp    08324806 <+0x880>
0832434e +0x3c8:  jmp    0832438b <+0x405>
08324350 +0x3ca:  cmpl   $0x68,-0x10(%ebp)
08324354 +0x3ce:  jne    08324360 <+0x3da>
08324356 +0x3d0:  mov    $0x1,%eax
0832435b +0x3d5:  jmp    08324806 <+0x880>
08324360 +0x3da:  jmp    0832438b <+0x405>
08324362 +0x3dc:  cmpl   $0x78,-0x10(%ebp)
08324366 +0x3e0:  jne    08324372 <+0x3ec>
08324368 +0x3e2:  mov    $0x1,%eax
0832436d +0x3e7:  jmp    08324806 <+0x880>
08324372 +0x3ec:  jmp    0832438b <+0x405>
08324374 +0x3ee:  cmpl   $0x88,-0x10(%ebp)
0832437b +0x3f5:  jne    083247ee <+0x868>
08324381 +0x3fb:  mov    $0x1,%eax
08324386 +0x400:  jmp    08324806 <+0x880>
0832438b +0x405:  jmp    08324801 <+0x87b>
08324390 +0x40a:  mov    0x14(%ebp),%ebx
08324393 +0x40d:  mov    0xc(%ebp),%eax
08324396 +0x410:  mov    %eax,(%esp)
08324399 +0x413:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0832439e +0x418:  mov    %ebx,0x4(%esp)
083243a2 +0x41c:  mov    %eax,(%esp)
083243a5 +0x41f:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
083243aa +0x424:  cmp    $0xffffffff,%eax
083243ad +0x427:  jne    083243d5 <+0x44f>
083243af +0x429:  mov    0x14(%ebp),%ebx
083243b2 +0x42c:  mov    0xc(%ebp),%eax
083243b5 +0x42f:  mov    %eax,(%esp)
083243b8 +0x432:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
083243bd +0x437:  mov    %ebx,0x4(%esp)
083243c1 +0x43b:  mov    %eax,(%esp)
083243c4 +0x43e:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
083243c9 +0x443:  cmp    $0xffffffff,%eax
083243cc +0x446:  jne    083243d5 <+0x44f>
083243ce +0x448:  mov    $0x1,%eax
083243d3 +0x44d:  jmp    083243da <+0x454>
083243d5 +0x44f:  mov    $0x0,%eax
083243da +0x454:  test   %al,%al
083243dc +0x456:  je     083247f1 <+0x86b>
083243e2 +0x45c:  lea    -0x59(%ebp),%eax
083243e5 +0x45f:  mov    %eax,(%esp)
083243e8 +0x462:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
083243ed +0x467:  mov    0x14(%ebp),%eax
083243f0 +0x46a:  mov    %eax,-0x57(%ebp)
083243f3 +0x46d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
083243f8 +0x472:  mov    0xc(%eax),%eax
083243fb +0x475:  movl   $0x1,0xc(%esp)
08324403 +0x47d:  lea    -0x59(%ebp),%edx
08324406 +0x480:  mov    %edx,0x8(%esp)
0832440a +0x484:  movl   $0x0,0x4(%esp)
08324412 +0x48c:  mov    %eax,(%esp)
08324415 +0x48f:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
0832441a +0x494:  mov    0xc(%ebp),%eax
0832441d +0x497:  mov    %eax,(%esp)
08324420 +0x49a:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08324425 +0x49f:  mov    -0x59(%ebp),%edx
08324428 +0x4a2:  mov    %edx,0x4(%esp)
0832442c +0x4a6:  mov    -0x55(%ebp),%edx
0832442f +0x4a9:  mov    %edx,0x8(%esp)
08324433 +0x4ad:  mov    -0x51(%ebp),%edx
08324436 +0x4b0:  mov    %edx,0xc(%esp)
0832443a +0x4b4:  mov    -0x4d(%ebp),%edx
0832443d +0x4b7:  mov    %edx,0x10(%esp)
08324441 +0x4bb:  mov    -0x49(%ebp),%edx
08324444 +0x4be:  mov    %edx,0x14(%esp)
08324448 +0x4c2:  mov    -0x45(%ebp),%edx
0832444b +0x4c5:  mov    %edx,0x18(%esp)
0832444f +0x4c9:  mov    -0x41(%ebp),%edx
08324452 +0x4cc:  mov    %edx,0x1c(%esp)
08324456 +0x4d0:  mov    -0x3d(%ebp),%edx
08324459 +0x4d3:  mov    %edx,0x20(%esp)
0832445d +0x4d7:  mov    -0x39(%ebp),%edx
08324460 +0x4da:  mov    %edx,0x24(%esp)
08324464 +0x4de:  mov    -0x35(%ebp),%edx
08324467 +0x4e1:  mov    %edx,0x28(%esp)
0832446b +0x4e5:  mov    -0x31(%ebp),%edx
0832446e +0x4e8:  mov    %edx,0x2c(%esp)
08324472 +0x4ec:  mov    -0x2d(%ebp),%edx
08324475 +0x4ef:  mov    %edx,0x30(%esp)
08324479 +0x4f3:  mov    -0x29(%ebp),%edx
0832447c +0x4f6:  mov    %edx,0x34(%esp)
08324480 +0x4fa:  mov    -0x25(%ebp),%edx
08324483 +0x4fd:  mov    %edx,0x38(%esp)
08324487 +0x501:  mov    -0x21(%ebp),%edx
0832448a +0x504:  mov    %edx,0x3c(%esp)
0832448e +0x508:  movzbl -0x1d(%ebp),%edx
08324492 +0x50c:  mov    %dl,0x40(%esp)
08324496 +0x510:  mov    %eax,(%esp)
08324499 +0x513:  call   08501eca <_ZNK10CInventory26tryInsertItemIntoInventoryE10Inven_Item>  ; CInventory::tryInsertItemIntoInventory(Inven_Item) const
0832449e +0x518:  not    %eax
083244a0 +0x51a:  shr    $0x1f,%eax
083244a3 +0x51d:  test   %al,%al
083244a5 +0x51f:  je     083247f4 <+0x86e>
083244ab +0x525:  mov    $0x1,%eax
083244b0 +0x52a:  jmp    08324806 <+0x880>
083244b5 +0x52f:  movl   $0x46a7b9d0,&_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE14eventStartTime
083244bf +0x539:  movl   $0x46d5de50,&_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE12eventEndTime
083244c9 +0x543:  mov    0xc(%ebp),%eax
083244cc +0x546:  mov    %eax,(%esp)
083244cf +0x549:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
083244d4 +0x54e:  mov    &_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE14eventStartTime,%edx
083244da +0x554:  cmp    %edx,%eax
083244dc +0x556:  jl     083244fa <+0x574>
083244de +0x558:  mov    0xc(%ebp),%eax
083244e1 +0x55b:  mov    %eax,(%esp)
083244e4 +0x55e:  call   0822f202 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x48ac>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x48ac
083244e9 +0x563:  mov    &_ZZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserjmjthtE12eventEndTime,%edx
083244ef +0x569:  cmp    %edx,%eax
083244f1 +0x56b:  jge    083244fa <+0x574>
083244f3 +0x56d:  mov    $0x1,%eax
083244f8 +0x572:  jmp    083244ff <+0x579>
083244fa +0x574:  mov    $0x0,%eax
083244ff +0x579:  test   %al,%al
08324501 +0x57b:  je     083247f7 <+0x871>
08324507 +0x581:  mov    0xc(%ebp),%eax
0832450a +0x584:  mov    %eax,(%esp)
0832450d +0x587:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08324512 +0x58c:  movl   $0x65d6,0x4(%esp)
0832451a +0x594:  mov    %eax,(%esp)
0832451d +0x597:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
08324522 +0x59c:  cmp    $0xffffffff,%eax
08324525 +0x59f:  jne    08324666 <+0x6e0>
0832452b +0x5a5:  mov    0xc(%ebp),%eax
0832452e +0x5a8:  mov    %eax,(%esp)
08324531 +0x5ab:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
08324536 +0x5b0:  movl   $0x65d6,0x4(%esp)
0832453e +0x5b8:  mov    %eax,(%esp)
08324541 +0x5bb:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
08324546 +0x5c0:  cmp    $0xffffffff,%eax
08324549 +0x5c3:  jne    08324666 <+0x6e0>
0832454f +0x5c9:  mov    0xc(%ebp),%eax
08324552 +0x5cc:  mov    %eax,(%esp)
08324555 +0x5cf:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0832455a +0x5d4:  movl   $0x65d7,0x4(%esp)
08324562 +0x5dc:  mov    %eax,(%esp)
08324565 +0x5df:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0832456a +0x5e4:  cmp    $0xffffffff,%eax
0832456d +0x5e7:  jne    08324666 <+0x6e0>
08324573 +0x5ed:  mov    0xc(%ebp),%eax
08324576 +0x5f0:  mov    %eax,(%esp)
08324579 +0x5f3:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0832457e +0x5f8:  movl   $0x65d7,0x4(%esp)
08324586 +0x600:  mov    %eax,(%esp)
08324589 +0x603:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
0832458e +0x608:  cmp    $0xffffffff,%eax
08324591 +0x60b:  jne    08324666 <+0x6e0>
08324597 +0x611:  mov    0xc(%ebp),%eax
0832459a +0x614:  mov    %eax,(%esp)
0832459d +0x617:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083245a2 +0x61c:  movl   $0x65d8,0x4(%esp)
083245aa +0x624:  mov    %eax,(%esp)
083245ad +0x627:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
083245b2 +0x62c:  cmp    $0xffffffff,%eax
083245b5 +0x62f:  jne    08324666 <+0x6e0>
083245bb +0x635:  mov    0xc(%ebp),%eax
083245be +0x638:  mov    %eax,(%esp)
083245c1 +0x63b:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
083245c6 +0x640:  movl   $0x65d8,0x4(%esp)
083245ce +0x648:  mov    %eax,(%esp)
083245d1 +0x64b:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
083245d6 +0x650:  cmp    $0xffffffff,%eax
083245d9 +0x653:  jne    08324666 <+0x6e0>
083245df +0x659:  mov    0xc(%ebp),%eax
083245e2 +0x65c:  mov    %eax,(%esp)
083245e5 +0x65f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
083245ea +0x664:  movl   $0x65d9,0x4(%esp)
083245f2 +0x66c:  mov    %eax,(%esp)
083245f5 +0x66f:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
083245fa +0x674:  cmp    $0xffffffff,%eax
083245fd +0x677:  jne    08324666 <+0x6e0>
083245ff +0x679:  mov    0xc(%ebp),%eax
08324602 +0x67c:  mov    %eax,(%esp)
08324605 +0x67f:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0832460a +0x684:  movl   $0x65d9,0x4(%esp)
08324612 +0x68c:  mov    %eax,(%esp)
08324615 +0x68f:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
0832461a +0x694:  cmp    $0xffffffff,%eax
0832461d +0x697:  jne    08324666 <+0x6e0>
0832461f +0x699:  mov    0xc(%ebp),%eax
08324622 +0x69c:  mov    %eax,(%esp)
08324625 +0x69f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0832462a +0x6a4:  movl   $0x65da,0x4(%esp)
08324632 +0x6ac:  mov    %eax,(%esp)
08324635 +0x6af:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0832463a +0x6b4:  cmp    $0xffffffff,%eax
0832463d +0x6b7:  jne    08324666 <+0x6e0>
0832463f +0x6b9:  mov    0xc(%ebp),%eax
08324642 +0x6bc:  mov    %eax,(%esp)
08324645 +0x6bf:  call   08151a84 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x13b9>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x13b9
0832464a +0x6c4:  movl   $0x65da,0x4(%esp)
08324652 +0x6cc:  mov    %eax,(%esp)
08324655 +0x6cf:  call   0850bc14 <_ZNK6CCargo16check_item_existEi>  ; CCargo::check_item_exist(int) const
0832465a +0x6d4:  cmp    $0xffffffff,%eax
0832465d +0x6d7:  jne    08324666 <+0x6e0>
0832465f +0x6d9:  mov    $0x1,%eax
08324664 +0x6de:  jmp    0832466b <+0x6e5>
08324666 +0x6e0:  mov    $0x0,%eax
0832466b +0x6e5:  test   %al,%al
0832466d +0x6e7:  je     083247fa <+0x874>
08324673 +0x6ed:  mov    $0x1,%eax
08324678 +0x6f2:  jmp    08324806 <+0x880>
0832467d +0x6f7:  mov    0xc(%ebp),%eax
08324680 +0x6fa:  mov    %eax,(%esp)
08324683 +0x6fd:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
08324688 +0x702:  cmp    $0xe,%eax
0832468b +0x705:  setle  %al
0832468e +0x708:  test   %al,%al
08324690 +0x70a:  je     0832469c <+0x716>
08324692 +0x70c:  mov    $0x0,%eax
08324697 +0x711:  jmp    08324806 <+0x880>
0832469c +0x716:  mov    $0x1,%eax
083246a1 +0x71b:  jmp    08324806 <+0x880>
083246a6 +0x720:  mov    0xc(%ebp),%eax
083246a9 +0x723:  mov    %eax,(%esp)
083246ac +0x726:  call   0822f33c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x49e6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x49e6
083246b1 +0x72b:  cmp    $0xffffffff,%eax
083246b4 +0x72e:  sete   %al
083246b7 +0x731:  test   %al,%al
083246b9 +0x733:  je     083247fd <+0x877>
083246bf +0x739:  mov    $0x1,%eax
083246c4 +0x73e:  jmp    08324806 <+0x880>
083246c9 +0x743:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083246ce +0x748:  mov    0x1a8(%eax),%eax
083246d4 +0x74e:  cmp    $0x2,%eax
083246d7 +0x751:  sete   %al
083246da +0x754:  test   %al,%al
083246dc +0x756:  je     083246e8 <+0x762>
083246de +0x758:  mov    $0x0,%eax
083246e3 +0x75d:  jmp    08324806 <+0x880>
083246e8 +0x762:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
083246ed +0x767:  mov    0x378(%eax),%eax
083246f3 +0x76d:  cmp    $0xb,%eax
083246f6 +0x770:  je     08324704 <+0x77e>
083246f8 +0x772:  cmp    $0xc,%eax
083246fb +0x775:  je     08324718 <+0x792>
083246fd +0x777:  cmp    $0x5,%eax
08324700 +0x77a:  je     0832470e <+0x788>
08324702 +0x77c:  jmp    08324722 <+0x79c>
08324704 +0x77e:  mov    $0x0,%eax
08324709 +0x783:  jmp    08324806 <+0x880>
0832470e +0x788:  mov    $0x0,%eax
08324713 +0x78d:  jmp    08324806 <+0x880>
08324718 +0x792:  mov    $0x0,%eax
0832471d +0x797:  jmp    08324806 <+0x880>
08324722 +0x79c:  mov    0xc(%ebp),%eax
08324725 +0x79f:  mov    %eax,(%esp)
08324728 +0x7a2:  call   08230860 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5f0a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5f0a
0832472d +0x7a7:  cmp    $0x14,%al
0832472f +0x7a9:  setbe  %al
08324732 +0x7ac:  test   %al,%al
08324734 +0x7ae:  je     08324800 <+0x87a>
0832473a +0x7b4:  mov    $0x1,%eax
0832473f +0x7b9:  jmp    08324806 <+0x880>
08324744 +0x7be:  mov    0xc(%ebp),%eax
08324747 +0x7c1:  mov    %eax,(%esp)
0832474a +0x7c4:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0832474f +0x7c9:  mov    %eax,(%esp)
08324752 +0x7cc:  call   0822d6fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2da6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2da6
08324757 +0x7d1:  mov    %eax,-0xc(%ebp)
0832475a +0x7d4:  mov    0x14(%ebp),%eax
0832475d +0x7d7:  cmp    $0x2897c8,%eax
08324762 +0x7dc:  je     0832476d <+0x7e7>
08324764 +0x7de:  cmp    $0x2897c9,%eax
08324769 +0x7e3:  je     0832477f <+0x7f9>
0832476b +0x7e5:  jmp    0832478e <+0x808>
0832476d +0x7e7:  cmpl   $0x0,-0xc(%ebp)
08324771 +0x7eb:  jne    0832477d <+0x7f7>
08324773 +0x7ed:  mov    $0x1,%eax
08324778 +0x7f2:  jmp    08324806 <+0x880>
0832477d +0x7f7:  jmp    08324795 <+0x80f>
0832477f +0x7f9:  cmpl   $0x8,-0xc(%ebp)
08324783 +0x7fd:  jne    0832478c <+0x806>
08324785 +0x7ff:  mov    $0x1,%eax
0832478a +0x804:  jmp    08324806 <+0x880>
0832478c +0x806:  jmp    08324795 <+0x80f>
0832478e +0x808:  mov    $0x0,%eax
08324793 +0x80d:  jmp    08324806 <+0x880>
08324795 +0x80f:  jmp    08324801 <+0x87b>
08324797 +0x811:  mov    0xc(%ebp),%eax
0832479a +0x814:  mov    %eax,(%esp)
0832479d +0x817:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
083247a2 +0x81c:  cmp    $0x9,%eax
083247a5 +0x81f:  sete   %al
083247a8 +0x822:  test   %al,%al
083247aa +0x824:  je     083247b3 <+0x82d>
083247ac +0x826:  mov    $0x0,%eax
083247b1 +0x82b:  jmp    08324806 <+0x880>
083247b3 +0x82d:  mov    0xc(%ebp),%eax
083247b6 +0x830:  mov    %eax,(%esp)
083247b9 +0x833:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
083247be +0x838:  cmp    $0xa,%eax
083247c1 +0x83b:  sete   %al
083247c4 +0x83e:  test   %al,%al
083247c6 +0x840:  je     083247cf <+0x849>
083247c8 +0x842:  mov    $0x0,%eax
083247cd +0x847:  jmp    08324806 <+0x880>
083247cf +0x849:  mov    0x14(%ebp),%eax
083247d2 +0x84c:  mov    %eax,0x8(%esp)
083247d6 +0x850:  movl   $0x2e,0x4(%esp)
083247de +0x858:  mov    0xc(%ebp),%eax
083247e1 +0x85b:  mov    %eax,(%esp)
083247e4 +0x85e:  call   0868f6bc <_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEj>  ; CUser::verifyStackableItemActionPlace(StackableAction::Type, unsigned int)
083247e9 +0x863:  jmp    08324806 <+0x880>
083247eb +0x865:  nop
083247ec +0x866:  jmp    08324801 <+0x87b>
083247ee +0x868:  nop
083247ef +0x869:  jmp    08324801 <+0x87b>
083247f1 +0x86b:  nop
083247f2 +0x86c:  jmp    08324801 <+0x87b>
083247f4 +0x86e:  nop
083247f5 +0x86f:  jmp    08324801 <+0x87b>
083247f7 +0x871:  nop
083247f8 +0x872:  jmp    08324801 <+0x87b>
083247fa +0x874:  nop
083247fb +0x875:  jmp    08324801 <+0x87b>
083247fd +0x877:  nop
083247fe +0x878:  jmp    08324801 <+0x87b>
08324800 +0x87a:  nop
08324801 +0x87b:  mov    $0x0,%eax
08324806 +0x880:  add    $0xc4,%esp
0832480c +0x886:  pop    %ebx
0832480d +0x887:  pop    %ebp
0832480e +0x888:  ret
0832480f +0x889:  nop
```

## 反编译 C

```c
// WongWork::CCeraShop::_CheckBuyingCondition @ 0x8323f86

/* WongWork::CCeraShop::_CheckBuyingCondition(CUser*, unsigned int, unsigned long, unsigned int,
   unsigned short, unsigned char, unsigned short) */

undefined4 __thiscall
WongWork::CCeraShop::_CheckBuyingCondition
          (CCeraShop *this,CUser *param_1,uint param_2,ulong param_3,uint param_4,ushort param_5,
          uchar param_6,ushort param_7)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  CDataManager *this_00;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *pvVar4;
  uint uVar5;
  int iVar6;
  CCargo *pCVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  undefined2 local_5d;
  undefined4 uStack_5b;
  undefined2 uStack_57;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined1 local_21;
  int local_20;
  CEquipItem *local_1c;
  int local_18;
  
  local_20 = 0;
  if (param_2 == 0x1adbd) {
    local_20 = 1;
  }
  else if (param_2 == 0x1c13c) {
    local_20 = 3;
  }
  if (param_3 != 1) {
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = (CEquipItem *)CDataManager::find_item(this_00,param_3);
    if (local_1c == (CEquipItem *)0x0) {
      return 0;
    }
    cVar2 = (**(code **)(*(int *)local_1c + 0x10))(local_1c);
    if (cVar2 != '\0') {
      if (param_7 == 0) {
LAB_0832403b:
        bVar1 = true;
      }
      else {
        pvVar4 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
                 CEquipItem::getAvatarTypeSelect(local_1c);
        uVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size(pvVar4)
        ;
        if (uVar5 <= param_7) goto LAB_0832403b;
        bVar1 = false;
      }
      if (bVar1) {
        return 0;
      }
      if (param_7 != param_5) {
        return 0;
      }
      pvVar4 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
               CEquipItem::getAvatarTypeSelect(local_1c);
      iVar6 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::at
                        (pvVar4,(uint)param_7);
      local_18 = *(int *)(iVar6 + 0x10);
      if ((param_5 != 4) && (local_18 != 0)) {
        return 0;
      }
    }
  }
  if (param_3 < 0x34a) {
    if (0x346 < param_3) goto LAB_083241ae;
    if (param_3 < 0x44) {
      if (param_3 < 0x3f) {
        if (param_3 == 0x33) {
LAB_0832419c:
          local_20 = 5;
        }
        else if (param_3 < 0x34) {
          if (param_3 == 0x32) {
LAB_08324193:
            local_20 = 4;
          }
        }
        else if (0x38 < param_3) goto LAB_08324193;
      }
      else {
LAB_083241a5:
        local_20 = 6;
      }
    }
    else if (param_3 < 0xc1) {
      if (param_3 < 0xbe) {
        if (param_3 - 0x45 < 5) goto LAB_083241a5;
      }
      else {
LAB_083241ae:
        local_20 = 0xb;
      }
    }
    else if ((param_3 == 0x2e4) || (param_3 == 0x335)) goto LAB_083241ae;
  }
  else {
    if (0x28978c < param_3) {
      if (param_3 < 0x2897ca) {
        if (param_3 < 0x2897c8) {
          if (param_3 == 0x28978f) {
            local_20 = 0xc;
          }
        }
        else {
          local_20 = 0xd;
        }
      }
      else if ((0x28995c < param_3) && ((param_3 < 0x28995f || (param_3 == 0x2899ab)))) {
        local_20 = 0x10;
      }
      goto LAB_083241d0;
    }
    if (0x28978a < param_3) goto LAB_08324193;
    if (param_3 == 0x1ee2) goto LAB_083241ae;
    if (param_3 < 0x1ee3) {
      if (param_3 == 0x3a0) goto LAB_083241ae;
    }
    else {
      if (param_3 == 0x2896cb) goto LAB_083241ae;
      if (param_3 == 0x28978a) goto LAB_0832419c;
    }
  }
LAB_083241d0:
  if (local_20 == 0) {
    return 1;
  }
  switch(local_20) {
  case 1:
    uVar9 = _CheckConditionPutonAvatar(this,param_1);
    return uVar9;
  case 3:
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventStartTime = 0x4589a450;
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventEndTime = 0x45ae8e50;
    iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if ((iVar6 < _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
                 ::eventStartTime) ||
       (iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1),
       _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
       ::eventEndTime <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
    break;
  case 4:
    pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    iVar6 = CCargo::GetCapacity(pCVar7);
    if (param_3 == 0x3c) {
      if (iVar6 == 0x48) {
        return 1;
      }
    }
    else if (param_3 < 0x3d) {
      if (param_3 == 0x39) {
        if (iVar6 == 0x18) {
          return 1;
        }
      }
      else if (param_3 < 0x3a) {
        if ((param_3 == 0x32) && (iVar6 == 8)) {
          return 1;
        }
      }
      else if (param_3 == 0x3a) {
        if (iVar6 == 0x28) {
          return 1;
        }
      }
      else if ((param_3 == 0x3b) && (iVar6 == 0x38)) {
        return 1;
      }
    }
    else if (param_3 == 0x3e) {
      if (iVar6 == 0x68) {
        return 1;
      }
    }
    else if (param_3 < 0x3e) {
      if (iVar6 == 0x58) {
        return 1;
      }
    }
    else if (param_3 == 0x28978b) {
      if (iVar6 == 0x78) {
        return 1;
      }
    }
    else if ((param_3 == 0x28978c) && (iVar6 == 0x88)) {
      return 1;
    }
    break;
  case 5:
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::check_item_exist(pCVar8,param_3);
    if (iVar6 == -1) {
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,param_3);
      if (iVar6 != -1) goto LAB_083243d5;
      bVar1 = true;
    }
    else {
LAB_083243d5:
      bVar1 = false;
    }
    if (bVar1) {
      Inven_Item::Inven_Item((Inven_Item *)&local_5d);
      uStack_5b = param_3;
      iVar6 = G_CDataManager();
      CItemList::create_item(*(CItemList **)(iVar6 + 0xc),0,&local_5d,1);
      uVar9 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::tryInsertItemIntoInventory
                        (uVar9,CONCAT22((undefined2)uStack_5b,local_5d),
                         CONCAT22(uStack_57,uStack_5b._2_2_),local_55,local_51,local_4d,local_49,
                         local_45,local_41,local_3d,local_39,local_35,local_31,local_2d,local_29,
                         local_25,local_21);
      if (-1 < iVar6) {
        return 1;
      }
    }
    break;
  case 6:
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventStartTime = 0x46a7b9d0;
    _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
    ::eventEndTime = 0x46d5de50;
    iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1);
    if ((iVar6 < _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
                 ::eventStartTime) ||
       (iVar6 = CUserCharacInfo::getCurCharacCreateTime((CUserCharacInfo *)param_1),
       _CheckBuyingCondition(CUser*,unsigned_int,unsigned_long,unsigned_int,unsigned_short,unsigned_char,unsigned_short)
       ::eventEndTime <= iVar6)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return 0;
    }
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::check_item_exist(pCVar8,0x65d6);
    if (iVar6 == -1) {
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d6);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65d7);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d7);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65d8);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d8);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65d9);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65d9);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar6 = CInventory::check_item_exist(pCVar8,0x65da);
      if (iVar6 != -1) goto LAB_08324666;
      pCVar7 = (CCargo *)CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
      iVar6 = CCargo::check_item_exist(pCVar7,0x65da);
      if (iVar6 != -1) goto LAB_08324666;
      bVar1 = true;
    }
    else {
LAB_08324666:
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    break;
  case 8:
    iVar6 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    if (0xe < iVar6) {
      return 1;
    }
    return 0;
  case 0xb:
    iVar6 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
    if (iVar6 == -1) {
      return 1;
    }
    break;
  case 0xc:
    iVar6 = G_CEnvironment();
    if (*(int *)(iVar6 + 0x1a8) == 2) {
      return 0;
    }
    iVar6 = G_CEnvironment();
    iVar6 = *(int *)(iVar6 + 0x378);
    if (iVar6 == 0xb) {
      return 0;
    }
    if (iVar6 == 0xc) {
      return 0;
    }
    if (iVar6 == 5) {
      return 0;
    }
    bVar3 = CUser::getCharacSlotLimit(param_1);
    if (bVar3 < 0x15) {
      return 1;
    }
    break;
  case 0xd:
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar6 = CInventory::get_inventory_capacity(pCVar8);
    if (param_3 == 0x2897c8) {
      if (iVar6 == 0) {
        return 1;
      }
    }
    else {
      if (param_3 != 0x2897c9) {
        return 0;
      }
      if (iVar6 == 8) {
        return 1;
      }
    }
    break;
  case 0x10:
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar6 == 9) {
      return 0;
    }
    iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    if (iVar6 != 10) {
      uVar9 = CUser::verifyStackableItemActionPlace(param_1,0x2e,param_3);
      return uVar9;
    }
    return 0;
  }
  return 0;
}
```
