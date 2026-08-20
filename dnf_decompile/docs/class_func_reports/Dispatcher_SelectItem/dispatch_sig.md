# dispatch_sig

`_ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_SelectItem` | `0x0822997a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0822997a  _ZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)
# range [0x0822997a, 0x0822a0a3]
0822997a +0x000:  push   %ebp
0822997b +0x001:  mov    %esp,%ebp
0822997d +0x003:  push   %edi
0822997e +0x004:  push   %esi
0822997f +0x005:  push   %ebx
08229980 +0x006:  sub    $0x1cc,%esp
08229986 +0x00c:  mov    0xc(%ebp),%eax
08229989 +0x00f:  mov    %eax,(%esp)
0822998c +0x012:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08229991 +0x017:  cmp    $0x3,%eax
08229994 +0x01a:  jne    082299a5 <+0x2b>
08229996 +0x01c:  mov    0xc(%ebp),%eax
08229999 +0x01f:  mov    %eax,(%esp)
0822999c +0x022:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
082299a1 +0x027:  test   %eax,%eax
082299a3 +0x029:  jne    082299ac <+0x32>
082299a5 +0x02b:  mov    $0x1,%eax
082299aa +0x030:  jmp    082299b1 <+0x37>
082299ac +0x032:  mov    $0x0,%eax
082299b1 +0x037:  test   %al,%al
082299b3 +0x039:  je     082299bf <+0x45>
082299b5 +0x03b:  mov    $0x0,%ebx
082299ba +0x040:  jmp    0822a097 <+0x71d>
082299bf +0x045:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082299c4 +0x04a:  mov    %eax,(%esp)
082299c7 +0x04d:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
082299cc +0x052:  cmp    $0xf,%eax
082299cf +0x055:  je     082299ea <+0x70>
082299d1 +0x057:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
082299d6 +0x05c:  mov    %eax,(%esp)
082299d9 +0x05f:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
082299de +0x064:  cmp    $0x10,%eax
082299e1 +0x067:  je     082299ea <+0x70>
082299e3 +0x069:  mov    $0x1,%eax
082299e8 +0x06e:  jmp    082299ef <+0x75>
082299ea +0x070:  mov    $0x0,%eax
082299ef +0x075:  test   %al,%al
082299f1 +0x077:  je     082299fd <+0x83>
082299f3 +0x079:  mov    $0x0,%ebx
082299f8 +0x07e:  jmp    0822a097 <+0x71d>
082299fd +0x083:  movl   $0x7,0x4(%esp)
08229a05 +0x08b:  mov    0xc(%ebp),%eax
08229a08 +0x08e:  mov    %eax,(%esp)
08229a0b +0x091:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
08229a10 +0x096:  mov    %eax,(%esp)
08229a13 +0x099:  call   08234f64 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa60e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa60e
08229a18 +0x09e:  mov    %eax,%esi
08229a1a +0x0a0:  mov    0xc(%ebp),%eax
08229a1d +0x0a3:  mov    %eax,(%esp)
08229a20 +0x0a6:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08229a25 +0x0ab:  mov    %eax,%ebx
08229a27 +0x0ad:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229a2c +0x0b2:  add    $0x68,%eax
08229a2f +0x0b5:  mov    %ebx,0x4(%esp)
08229a33 +0x0b9:  mov    %eax,(%esp)
08229a36 +0x0bc:  call   0822adfc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4a6
08229a3b +0x0c1:  cmp    %eax,%esi
08229a3d +0x0c3:  setg   %al
08229a40 +0x0c6:  test   %al,%al
08229a42 +0x0c8:  je     08229a4e <+0xd4>
08229a44 +0x0ca:  mov    $0x0,%ebx
08229a49 +0x0cf:  jmp    0822a097 <+0x71d>
08229a4e +0x0d4:  movb   $0x0,-0x49(%ebp)
08229a52 +0x0d8:  movb   $0x0,-0x4a(%ebp)
08229a56 +0x0dc:  lea    -0x49(%ebp),%eax
08229a59 +0x0df:  mov    %eax,0x4(%esp)
08229a5d +0x0e3:  mov    0x10(%ebp),%eax
08229a60 +0x0e6:  mov    %eax,(%esp)
08229a63 +0x0e9:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08229a68 +0x0ee:  xor    $0x1,%eax
08229a6b +0x0f1:  test   %al,%al
08229a6d +0x0f3:  je     08229a9a <+0x120>
08229a6f +0x0f5:  movl   $0x0,0xc(%esp)
08229a77 +0x0fd:  movl   $0x0,0x8(%esp)
08229a7f +0x105:  movl   $&_ZZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08229a87 +0x10d:  movl   $0xe785,(%esp)
08229a8e +0x114:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08229a93 +0x119:  mov    %eax,%ebx
08229a95 +0x11b:  jmp    0822a097 <+0x71d>
08229a9a +0x120:  movl   $0x0,-0x50(%ebp)
08229aa1 +0x127:  lea    -0x54(%ebp),%eax
08229aa4 +0x12a:  mov    %eax,(%esp)
08229aa7 +0x12d:  call   082370e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc78e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc78e
08229aac +0x132:  mov    0xc(%ebp),%eax
08229aaf +0x135:  mov    %eax,(%esp)
08229ab2 +0x138:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08229ab7 +0x13d:  mov    %eax,%ebx
08229ab9 +0x13f:  mov    0xc(%ebp),%eax
08229abc +0x142:  mov    %eax,(%esp)
08229abf +0x145:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
08229ac4 +0x14a:  mov    %ebx,0x4(%esp)
08229ac8 +0x14e:  mov    %eax,(%esp)
08229acb +0x151:  call   088945ad <_Z30makeFairPVPEquipmentPackageKeyii>  ; makeFairPVPEquipmentPackageKey(int, int)
08229ad0 +0x156:  mov    %eax,-0x50(%ebp)
08229ad3 +0x159:  movl   $0x0,-0x20(%ebp)
08229ada +0x160:  jmp    08229b72 <+0x1f8>
08229adf +0x165:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229ae4 +0x16a:  lea    0x86f8(%eax),%ecx
08229aea +0x170:  lea    -0x44(%ebp),%eax
08229aed +0x173:  lea    -0x50(%ebp),%edx
08229af0 +0x176:  mov    %edx,0x8(%esp)
08229af4 +0x17a:  mov    %ecx,0x4(%esp)
08229af8 +0x17e:  mov    %eax,(%esp)
08229afb +0x181:  call   082370f2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc79c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc79c
08229b00 +0x186:  sub    $0x4,%esp
08229b03 +0x189:  lea    -0x44(%ebp),%eax
08229b06 +0x18c:  mov    %eax,0x4(%esp)
08229b0a +0x190:  lea    -0x48(%ebp),%eax
08229b0d +0x193:  mov    %eax,(%esp)
08229b10 +0x196:  call   0823711e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7c8
08229b15 +0x19b:  mov    -0x48(%ebp),%eax
08229b18 +0x19e:  mov    %eax,-0x54(%ebp)
08229b1b +0x1a1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229b20 +0x1a6:  lea    0x86f8(%eax),%edx
08229b26 +0x1ac:  lea    -0x3c(%ebp),%eax
08229b29 +0x1af:  mov    %edx,0x4(%esp)
08229b2d +0x1b3:  mov    %eax,(%esp)
08229b30 +0x1b6:  call   0823712e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7d8
08229b35 +0x1bb:  sub    $0x4,%esp
08229b38 +0x1be:  lea    -0x3c(%ebp),%eax
08229b3b +0x1c1:  mov    %eax,0x4(%esp)
08229b3f +0x1c5:  lea    -0x40(%ebp),%eax
08229b42 +0x1c8:  mov    %eax,(%esp)
08229b45 +0x1cb:  call   0823711e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7c8
08229b4a +0x1d0:  lea    -0x40(%ebp),%eax
08229b4d +0x1d3:  mov    %eax,0x4(%esp)
08229b51 +0x1d7:  lea    -0x54(%ebp),%eax
08229b54 +0x1da:  mov    %eax,(%esp)
08229b57 +0x1dd:  call   082380b4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd75e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd75e
08229b5c +0x1e2:  test   %al,%al
08229b5e +0x1e4:  jne    08229b8d <+0x213>
08229b60 +0x1e6:  mov    -0x50(%ebp),%eax
08229b63 +0x1e9:  mov    %eax,(%esp)
08229b66 +0x1ec:  call   088945c6 <_Z40decreaseRankOfFairPVPEquipmentPackageKeyi>  ; decreaseRankOfFairPVPEquipmentPackageKey(int)
08229b6b +0x1f1:  mov    %eax,-0x50(%ebp)
08229b6e +0x1f4:  addl   $0x1,-0x20(%ebp)
08229b72 +0x1f8:  mov    0xc(%ebp),%eax
08229b75 +0x1fb:  mov    %eax,(%esp)
08229b78 +0x1fe:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
08229b7d +0x203:  cmp    -0x20(%ebp),%eax
08229b80 +0x206:  setge  %al
08229b83 +0x209:  test   %al,%al
08229b85 +0x20b:  jne    08229adf <+0x165>
08229b8b +0x211:  jmp    08229b8e <+0x214>
08229b8d +0x213:  nop
08229b8e +0x214:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229b93 +0x219:  lea    0x86f8(%eax),%edx
08229b99 +0x21f:  lea    -0x34(%ebp),%eax
08229b9c +0x222:  mov    %edx,0x4(%esp)
08229ba0 +0x226:  mov    %eax,(%esp)
08229ba3 +0x229:  call   0823712e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7d8
08229ba8 +0x22e:  sub    $0x4,%esp
08229bab +0x231:  lea    -0x34(%ebp),%eax
08229bae +0x234:  mov    %eax,0x4(%esp)
08229bb2 +0x238:  lea    -0x38(%ebp),%eax
08229bb5 +0x23b:  mov    %eax,(%esp)
08229bb8 +0x23e:  call   0823711e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7c8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7c8
08229bbd +0x243:  lea    -0x38(%ebp),%eax
08229bc0 +0x246:  mov    %eax,0x4(%esp)
08229bc4 +0x24a:  lea    -0x54(%ebp),%eax
08229bc7 +0x24d:  mov    %eax,(%esp)
08229bca +0x250:  call   08237154 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc7fe>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc7fe
08229bcf +0x255:  test   %al,%al
08229bd1 +0x257:  je     08229bdd <+0x263>
08229bd3 +0x259:  mov    $0x0,%ebx
08229bd8 +0x25e:  jmp    0822a097 <+0x71d>
08229bdd +0x263:  lea    -0x54(%ebp),%eax
08229be0 +0x266:  mov    %eax,(%esp)
08229be3 +0x269:  call   08237168 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc812>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc812
08229be8 +0x26e:  add    $0x4,%eax
08229beb +0x271:  mov    %eax,(%esp)
08229bee +0x274:  call   082380c8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xd772>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xd772
08229bf3 +0x279:  movzbl -0x49(%ebp),%edx
08229bf7 +0x27d:  movzbl %dl,%edx
08229bfa +0x280:  cmp    %edx,%eax
08229bfc +0x282:  setne  %al
08229bff +0x285:  test   %al,%al
08229c01 +0x287:  je     08229c0d <+0x293>
08229c03 +0x289:  mov    $0x0,%ebx
08229c08 +0x28e:  jmp    0822a097 <+0x71d>
08229c0d +0x293:  lea    -0x60(%ebp),%eax
08229c10 +0x296:  mov    %eax,(%esp)
08229c13 +0x299:  call   0814ac92 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa31>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa31
08229c18 +0x29e:  lea    -0x54(%ebp),%eax
08229c1b +0x2a1:  mov    %eax,(%esp)
08229c1e +0x2a4:  call   08237168 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc812>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc812
08229c23 +0x2a9:  lea    0x4(%eax),%edx
08229c26 +0x2ac:  lea    -0x64(%ebp),%eax
08229c29 +0x2af:  mov    %edx,0x4(%esp)
08229c2d +0x2b3:  mov    %eax,(%esp)
08229c30 +0x2b6:  call   08237176 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc820>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc820
08229c35 +0x2bb:  sub    $0x4,%esp
08229c38 +0x2be:  jmp    08229db8 <+0x43e>
08229c3d +0x2c3:  lea    -0x4a(%ebp),%eax
08229c40 +0x2c6:  mov    %eax,0x4(%esp)
08229c44 +0x2ca:  mov    0x10(%ebp),%eax
08229c47 +0x2cd:  mov    %eax,(%esp)
08229c4a +0x2d0:  call   0858cf70 <_ZN9PacketBuf8get_byteERh>  ; PacketBuf::get_byte(unsigned char&)
08229c4f +0x2d5:  xor    $0x1,%eax
08229c52 +0x2d8:  test   %al,%al
08229c54 +0x2da:  je     08229c81 <+0x307>
08229c56 +0x2dc:  movl   $0x0,0xc(%esp)
08229c5e +0x2e4:  movl   $0x0,0x8(%esp)
08229c66 +0x2ec:  movl   $&_ZZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08229c6e +0x2f4:  movl   $0xe7a1,(%esp)
08229c75 +0x2fb:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08229c7a +0x300:  mov    %eax,%ebx
08229c7c +0x302:  jmp    0822a08c <+0x712>
08229c81 +0x307:  lea    -0x64(%ebp),%eax
08229c84 +0x30a:  mov    %eax,(%esp)
08229c87 +0x30d:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
08229c8c +0x312:  mov    %eax,(%esp)
08229c8f +0x315:  call   0823721a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8c4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8c4
08229c94 +0x31a:  movzbl -0x4a(%ebp),%edx
08229c98 +0x31e:  movzbl %dl,%edx
08229c9b +0x321:  cmp    %edx,%eax
08229c9d +0x323:  setbe  %al
08229ca0 +0x326:  test   %al,%al
08229ca2 +0x328:  je     08229ccf <+0x355>
08229ca4 +0x32a:  movl   $0x0,0xc(%esp)
08229cac +0x332:  movl   $0x0,0x8(%esp)
08229cb4 +0x33a:  movl   $&_ZZN21Dispatcher_SelectItem12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08229cbc +0x342:  movl   $0xe7a4,(%esp)
08229cc3 +0x349:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08229cc8 +0x34e:  mov    %eax,%ebx
08229cca +0x350:  jmp    0822a08c <+0x712>
08229ccf +0x355:  lea    -0x17d(%ebp),%eax
08229cd5 +0x35b:  mov    %eax,(%esp)
08229cd8 +0x35e:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08229cdd +0x363:  movzbl -0x4a(%ebp),%eax
08229ce1 +0x367:  movzbl %al,%ebx
08229ce4 +0x36a:  lea    -0x64(%ebp),%eax
08229ce7 +0x36d:  mov    %eax,(%esp)
08229cea +0x370:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
08229cef +0x375:  mov    %ebx,0x4(%esp)
08229cf3 +0x379:  mov    %eax,(%esp)
08229cf6 +0x37c:  call   08237236 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8e0
08229cfb +0x381:  mov    (%eax),%eax
08229cfd +0x383:  mov    %eax,-0x17b(%ebp)
08229d03 +0x389:  mov    -0x17b(%ebp),%eax
08229d09 +0x38f:  mov    %eax,%ebx
08229d0b +0x391:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08229d10 +0x396:  mov    %ebx,0x4(%esp)
08229d14 +0x39a:  mov    %eax,(%esp)
08229d17 +0x39d:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
08229d1c +0x3a2:  mov    %eax,-0x1c(%ebp)
08229d1f +0x3a5:  cmpl   $0x0,-0x1c(%ebp)
08229d23 +0x3a9:  jne    08229d4a <+0x3d0>
08229d25 +0x3ab:  movl   $0x11,0x8(%esp)
08229d2d +0x3b3:  movl   $0x196,0x4(%esp)
08229d35 +0x3bb:  mov    0xc(%ebp),%eax
08229d38 +0x3be:  mov    %eax,(%esp)
08229d3b +0x3c1:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08229d40 +0x3c6:  mov    $0x0,%ebx
08229d45 +0x3cb:  jmp    0822a08c <+0x712>
08229d4a +0x3d0:  mov    -0x1c(%ebp),%eax
08229d4d +0x3d3:  mov    (%eax),%eax
08229d4f +0x3d5:  add    $0x8,%eax
08229d52 +0x3d8:  mov    (%eax),%edx
08229d54 +0x3da:  lea    -0x17d(%ebp),%eax
08229d5a +0x3e0:  mov    %eax,0x4(%esp)
08229d5e +0x3e4:  mov    -0x1c(%ebp),%eax
08229d61 +0x3e7:  mov    %eax,(%esp)
08229d64 +0x3ea:  call   *%edx
08229d66 +0x3ec:  movzbl -0x17c(%ebp),%eax
08229d6d +0x3f3:  cmp    $0x1,%al
08229d6f +0x3f5:  je     08229d98 <+0x41e>
08229d71 +0x3f7:  movzbl -0x4a(%ebp),%eax
08229d75 +0x3fb:  movzbl %al,%ebx
08229d78 +0x3fe:  lea    -0x64(%ebp),%eax
08229d7b +0x401:  mov    %eax,(%esp)
08229d7e +0x404:  call   08237210 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8ba>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8ba
08229d83 +0x409:  mov    %ebx,0x4(%esp)
08229d87 +0x40d:  mov    %eax,(%esp)
08229d8a +0x410:  call   08237236 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8e0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8e0
08229d8f +0x415:  mov    0x4(%eax),%eax
08229d92 +0x418:  mov    %eax,-0x176(%ebp)
08229d98 +0x41e:  lea    -0x17d(%ebp),%eax
08229d9e +0x424:  mov    %eax,0x4(%esp)
08229da2 +0x428:  lea    -0x60(%ebp),%eax
08229da5 +0x42b:  mov    %eax,(%esp)
08229da8 +0x42e:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08229dad +0x433:  lea    -0x64(%ebp),%eax
08229db0 +0x436:  mov    %eax,(%esp)
08229db3 +0x439:  call   082371fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc8a4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc8a4
08229db8 +0x43e:  lea    -0x54(%ebp),%eax
08229dbb +0x441:  mov    %eax,(%esp)
08229dbe +0x444:  call   08237168 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc812>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc812
08229dc3 +0x449:  lea    0x4(%eax),%edx
08229dc6 +0x44c:  lea    -0x30(%ebp),%eax
08229dc9 +0x44f:  mov    %edx,0x4(%esp)
08229dcd +0x453:  mov    %eax,(%esp)
08229dd0 +0x456:  call   082371a2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc84c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc84c
08229dd5 +0x45b:  sub    $0x4,%esp
08229dd8 +0x45e:  lea    -0x30(%ebp),%eax
08229ddb +0x461:  mov    %eax,0x4(%esp)
08229ddf +0x465:  lea    -0x64(%ebp),%eax
08229de2 +0x468:  mov    %eax,(%esp)
08229de5 +0x46b:  call   082371ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc878>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc878
08229dea +0x470:  test   %al,%al
08229dec +0x472:  jne    08229c3d <+0x2c3>
08229df2 +0x478:  movl   $0x0,-0x24(%ebp)
08229df9 +0x47f:  lea    -0x2c(%ebp),%eax
08229dfc +0x482:  lea    -0x60(%ebp),%edx
08229dff +0x485:  mov    %edx,0x4(%esp)
08229e03 +0x489:  mov    %eax,(%esp)
08229e06 +0x48c:  call   0814ad04 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xaa3>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xaa3
08229e0b +0x491:  sub    $0x4,%esp
08229e0e +0x494:  lea    -0x2c(%ebp),%eax
08229e11 +0x497:  mov    %eax,0x4(%esp)
08229e15 +0x49b:  lea    -0x68(%ebp),%eax
08229e18 +0x49e:  mov    %eax,(%esp)
08229e1b +0x4a1:  call   08152aec <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2421>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2421
08229e20 +0x4a6:  jmp    08229ffb <+0x681>
08229e25 +0x4ab:  lea    -0x68(%ebp),%eax
08229e28 +0x4ae:  mov    %eax,(%esp)
08229e2b +0x4b1:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
08229e30 +0x4b6:  mov    %eax,%ebx
08229e32 +0x4b8:  mov    0xc(%ebp),%eax
08229e35 +0x4bb:  mov    %eax,(%esp)
08229e38 +0x4be:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
08229e3d +0x4c3:  movl   $0x1,0x4c(%esp)
08229e45 +0x4cb:  movl   $0x1,0x48(%esp)
08229e4d +0x4d3:  movl   $0x8,0x44(%esp)
08229e55 +0x4db:  mov    (%ebx),%edx
08229e57 +0x4dd:  mov    %edx,0x4(%esp)
08229e5b +0x4e1:  mov    0x4(%ebx),%edx
08229e5e +0x4e4:  mov    %edx,0x8(%esp)
08229e62 +0x4e8:  mov    0x8(%ebx),%edx
08229e65 +0x4eb:  mov    %edx,0xc(%esp)
08229e69 +0x4ef:  mov    0xc(%ebx),%edx
08229e6c +0x4f2:  mov    %edx,0x10(%esp)
08229e70 +0x4f6:  mov    0x10(%ebx),%edx
08229e73 +0x4f9:  mov    %edx,0x14(%esp)
08229e77 +0x4fd:  mov    0x14(%ebx),%edx
08229e7a +0x500:  mov    %edx,0x18(%esp)
08229e7e +0x504:  mov    0x18(%ebx),%edx
08229e81 +0x507:  mov    %edx,0x1c(%esp)
08229e85 +0x50b:  mov    0x1c(%ebx),%edx
08229e88 +0x50e:  mov    %edx,0x20(%esp)
08229e8c +0x512:  mov    0x20(%ebx),%edx
08229e8f +0x515:  mov    %edx,0x24(%esp)
08229e93 +0x519:  mov    0x24(%ebx),%edx
08229e96 +0x51c:  mov    %edx,0x28(%esp)
08229e9a +0x520:  mov    0x28(%ebx),%edx
08229e9d +0x523:  mov    %edx,0x2c(%esp)
08229ea1 +0x527:  mov    0x2c(%ebx),%edx
08229ea4 +0x52a:  mov    %edx,0x30(%esp)
08229ea8 +0x52e:  mov    0x30(%ebx),%edx
08229eab +0x531:  mov    %edx,0x34(%esp)
08229eaf +0x535:  mov    0x34(%ebx),%edx
08229eb2 +0x538:  mov    %edx,0x38(%esp)
08229eb6 +0x53c:  mov    0x38(%ebx),%edx
08229eb9 +0x53f:  mov    %edx,0x3c(%esp)
08229ebd +0x543:  movzbl 0x3c(%ebx),%edx
08229ec1 +0x547:  mov    %dl,0x40(%esp)
08229ec5 +0x54b:  mov    %eax,(%esp)
08229ec8 +0x54e:  call   08502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>  ; CInventory::insertItemIntoInventory(Inven_Item, eItemAddReason, bool, bool)
08229ecd +0x553:  mov    %eax,-0x24(%ebp)
08229ed0 +0x556:  cmpl   $0x0,-0x24(%ebp)
08229ed4 +0x55a:  js     08229efd <+0x583>
08229ed6 +0x55c:  mov    -0x24(%ebp),%eax
08229ed9 +0x55f:  mov    %eax,0xc(%esp)
08229edd +0x563:  movl   $0x0,0x8(%esp)
08229ee5 +0x56b:  movl   $0x1,0x4(%esp)
08229eed +0x573:  mov    0xc(%ebp),%eax
08229ef0 +0x576:  mov    %eax,(%esp)
08229ef3 +0x579:  call   0867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>  ; CUser::SendUpdateItemList(CUser::eSendTarget, ENUM_ITEMSPACE, int)
08229ef8 +0x57e:  jmp    08229ff0 <+0x676>
08229efd +0x583:  movl   $0x0,0xc(%esp)
08229f05 +0x58b:  movl   $"game_server_msg_171",0x8(%esp)
08229f0d +0x593:  movl   $0x4,0x4(%esp)
08229f15 +0x59b:  movl   $&g_scriptStringManager_,(%esp)
08229f1c +0x5a2:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08229f21 +0x5a7:  movl   $0x14,0x8(%esp)
08229f29 +0x5af:  mov    %eax,0x4(%esp)
08229f2d +0x5b3:  lea    -0x7d(%ebp),%eax
08229f30 +0x5b6:  mov    %eax,(%esp)
08229f33 +0x5b9:  call   0807d8d0 <_init+0x1c8>
08229f38 +0x5be:  movl   $0x0,0xc(%esp)
08229f40 +0x5c6:  movl   $"game_server_msg_172",0x8(%esp)
08229f48 +0x5ce:  movl   $0x4,0x4(%esp)
08229f50 +0x5d6:  movl   $&g_scriptStringManager_,(%esp)
08229f57 +0x5dd:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
08229f5c +0x5e2:  movl   $0xff,0x8(%esp)
08229f64 +0x5ea:  mov    %eax,0x4(%esp)
08229f68 +0x5ee:  lea    -0x17d(%ebp),%eax
08229f6e +0x5f4:  mov    %eax,(%esp)
08229f71 +0x5f7:  call   0807d8d0 <_init+0x1c8>
08229f76 +0x5fc:  mov    0xc(%ebp),%eax
08229f79 +0x5ff:  mov    %eax,(%esp)
08229f7c +0x602:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08229f81 +0x607:  mov    %eax,%esi
08229f83 +0x609:  lea    -0x17d(%ebp),%eax
08229f89 +0x60f:  mov    %eax,(%esp)
08229f8c +0x612:  call   0807e3b0 <_init+0xca8>
08229f91 +0x617:  mov    %eax,%edi
08229f93 +0x619:  mov    0xc(%ebp),%eax
08229f96 +0x61c:  mov    %eax,(%esp)
08229f99 +0x61f:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08229f9e +0x624:  mov    %eax,%ebx
08229fa0 +0x626:  lea    -0x68(%ebp),%eax
08229fa3 +0x629:  mov    %eax,(%esp)
08229fa6 +0x62c:  call   08152b48 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x247d>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x247d
08229fab +0x631:  movl   $0x0,0x24(%esp)
08229fb3 +0x639:  movl   $0x0,0x20(%esp)
08229fbb +0x641:  mov    %esi,0x1c(%esp)
08229fbf +0x645:  movl   $0x0,0x18(%esp)
08229fc7 +0x64d:  mov    %edi,0x14(%esp)
08229fcb +0x651:  lea    -0x17d(%ebp),%edx
08229fd1 +0x657:  mov    %edx,0x10(%esp)
08229fd5 +0x65b:  mov    %ebx,0xc(%esp)
08229fd9 +0x65f:  movl   $0x0,0x8(%esp)
08229fe1 +0x667:  mov    %eax,0x4(%esp)
08229fe5 +0x66b:  lea    -0x7d(%ebp),%eax
08229fe8 +0x66e:  mov    %eax,(%esp)
08229feb +0x671:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
08229ff0 +0x676:  lea    -0x68(%ebp),%eax
08229ff3 +0x679:  mov    %eax,(%esp)
08229ff6 +0x67c:  call   08152b32 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2467>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2467
08229ffb +0x681:  lea    -0x28(%ebp),%eax
08229ffe +0x684:  lea    -0x60(%ebp),%edx
0822a001 +0x687:  mov    %edx,0x4(%esp)
0822a005 +0x68b:  mov    %eax,(%esp)
0822a008 +0x68e:  call   081528ea <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x221f>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x221f
0822a00d +0x693:  sub    $0x4,%esp
0822a010 +0x696:  lea    -0x28(%ebp),%eax
0822a013 +0x699:  mov    %eax,0x4(%esp)
0822a017 +0x69d:  lea    -0x68(%ebp),%eax
0822a01a +0x6a0:  mov    %eax,(%esp)
0822a01d +0x6a3:  call   082372d5 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc97f>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc97f
0822a022 +0x6a8:  test   %al,%al
0822a024 +0x6aa:  jne    08229e25 <+0x4ab>
0822a02a +0x6b0:  mov    0xc(%ebp),%eax
0822a02d +0x6b3:  mov    %eax,(%esp)
0822a030 +0x6b6:  call   0819ee4a <_GLOBAL__I__ZN4ARAD16GetQuarterOfYearEPc+0x86>  ; global constructors keyed to ARAD::GetQuarterOfYear(char*)+0x86
0822a035 +0x6bb:  lea    0x1(%eax),%ebx
0822a038 +0x6be:  movl   $0x7,0x4(%esp)
0822a040 +0x6c6:  mov    0xc(%ebp),%eax
0822a043 +0x6c9:  mov    %eax,(%esp)
0822a046 +0x6cc:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
0822a04b +0x6d1:  mov    %ebx,0x4(%esp)
0822a04f +0x6d5:  mov    %eax,(%esp)
0822a052 +0x6d8:  call   08234f74 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa61e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa61e
0822a057 +0x6dd:  movl   $0x196,0x4(%esp)
0822a05f +0x6e5:  mov    0xc(%ebp),%eax
0822a062 +0x6e8:  mov    %eax,(%esp)
0822a065 +0x6eb:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
0822a06a +0x6f0:  mov    $0x0,%ebx
0822a06f +0x6f5:  jmp    0822a08c <+0x712>
0822a071 +0x6f7:  mov    %edx,%ebx
0822a073 +0x6f9:  mov    %eax,%esi
0822a075 +0x6fb:  lea    -0x60(%ebp),%eax
0822a078 +0x6fe:  mov    %eax,(%esp)
0822a07b +0x701:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0822a080 +0x706:  mov    %esi,%eax
0822a082 +0x708:  mov    %ebx,%edx
0822a084 +0x70a:  mov    %eax,(%esp)
0822a087 +0x70d:  call   08ae3750 <_Unwind_Resume>
0822a08c +0x712:  lea    -0x60(%ebp),%eax
0822a08f +0x715:  mov    %eax,(%esp)
0822a092 +0x718:  call   0814aca6 <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0xa45>  ; global constructors keyed to WongWork::CBossPlay::reset()+0xa45
0822a097 +0x71d:  mov    %ebx,%eax
0822a099 +0x71f:  lea    -0xc(%ebp),%esp
0822a09c +0x722:  add    $0x0,%esp
0822a09f +0x725:  pop    %ebx
0822a0a0 +0x726:  pop    %esi
0822a0a1 +0x727:  pop    %edi
0822a0a2 +0x728:  pop    %ebp
0822a0a3 +0x729:  ret
```

## 反编译 C

```c
// Dispatcher_SelectItem::dispatch_sig @ 0x822997a

/* Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SelectItem::dispatch_sig(Dispatcher_SelectItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  GameWorld *pGVar4;
  CFairPvPScore *pCVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  vector<STStackablePackageData,std::allocator<STStackablePackageData>> *pvVar9;
  int *piVar10;
  CDataManager *this_00;
  undefined4 *puVar11;
  char *pcVar12;
  size_t sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  Inven_Item local_181;
  char local_180;
  int local_17f;
  undefined4 local_17a;
  char local_81 [21];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_6c [4];
  __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
  local_68 [4];
  vector<Inven_Item,std::allocator<Inven_Item>> local_64 [12];
  undefined4 local_58;
  int local_54;
  byte local_4e;
  byte local_4d;
  undefined4 local_4c;
  _Rb_tree_iterator local_48 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
  local_44 [4];
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  local_40 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
  local_3c [4];
  map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
  local_38 [4];
  __normal_iterator local_34 [4];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  int local_28;
  int local_24;
  int *local_20;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    return 0;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetChannelType(pGVar4);
  if (iVar3 != 0xf) {
    pGVar4 = (GameWorld *)G_GameWorld();
    iVar3 = GameWorld::GetChannelType(pGVar4);
    if (iVar3 != 0x10) {
      bVar2 = true;
      goto LAB_082299ef;
    }
  }
  bVar2 = false;
LAB_082299ef:
  if (bVar2) {
    uVar16 = 0;
  }
  else {
    pCVar5 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
    iVar3 = fair_pvp::CFairPvPScore::GetGiveItem(pCVar5);
    iVar6 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
    iVar7 = G_CDataManager();
    iVar6 = ServerParameterScript::get_pvp_item_give((ServerParameterScript *)(iVar7 + 0x68),iVar6);
    if (iVar6 < iVar3) {
      uVar16 = 0;
    }
    else {
      local_4d = 0;
      local_4e = 0;
      cVar1 = PacketBuf::get_byte(param_2,&local_4d);
      if (cVar1 == '\x01') {
        local_54 = 0;
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
        ::_Rb_tree_const_iterator
                  ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                    *)&local_58);
        iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
        iVar6 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        local_54 = makeFairPVPEquipmentPackageKey(iVar6,iVar3);
        local_24 = 0;
        while (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), local_24 <= iVar3
              ) {
          G_CDataManager();
          std::
          map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
          ::find((int *)local_48);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
          ::_Rb_tree_const_iterator
                    ((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                      *)&local_4c,local_48);
          local_58 = local_4c;
          G_CDataManager();
          std::
          map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
          ::end(local_40);
          std::
          _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
          ::_Rb_tree_const_iterator(local_44,(_Rb_tree_iterator *)local_40);
          cVar1 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                                *)&local_58,(_Rb_tree_const_iterator *)local_44);
          if (cVar1 != '\0') break;
          local_54 = decreaseRankOfFairPVPEquipmentPackageKey(local_54);
          local_24 = local_24 + 1;
        }
        G_CDataManager();
        std::
        map<int,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>>
        ::end(local_38);
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
        ::_Rb_tree_const_iterator(local_3c,(_Rb_tree_iterator *)local_38);
        cVar1 = std::
                _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                ::operator==((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                              *)&local_58,(_Rb_tree_const_iterator *)local_3c);
        if (cVar1 == '\0') {
          iVar3 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                                *)&local_58);
          uVar8 = std::
                  vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                  ::size((vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
                          *)(iVar3 + 4));
          if (uVar8 == local_4d) {
            std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_64);
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
            ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                          *)&local_58);
                    /* try { // try from 08229c30 to 0822a069 has its CatchHandler @ 0822a071 */
            std::
            vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
            ::begin();
            while( true ) {
              std::
              _Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
              ::operator->((_Rb_tree_const_iterator<std::pair<int_const,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>>
                            *)&local_58);
              std::
              vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>
              ::end();
              bVar2 = __gnu_cxx::operator!=(local_68,local_34);
              if (!bVar2) break;
              cVar1 = PacketBuf::get_byte(param_2,&local_4e);
              if (cVar1 != '\x01') {
                uVar16 = LineFunc(0xe7a1,
                                  "virtual int Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)"
                                  ,0,0);
                goto LAB_0822a08c;
              }
              pvVar9 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                       __gnu_cxx::
                       __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                       ::operator->(local_68);
              uVar8 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::
                      size(pvVar9);
              if (uVar8 <= local_4e) {
                uVar16 = LineFunc(0xe7a4,
                                  "virtual int Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)"
                                  ,0,0);
                goto LAB_0822a08c;
              }
              Inven_Item::Inven_Item(&local_181);
              uVar8 = (uint)local_4e;
              pvVar9 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                       __gnu_cxx::
                       __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                       ::operator->(local_68);
              piVar10 = (int *)std::
                               vector<STStackablePackageData,std::allocator<STStackablePackageData>>
                               ::at(pvVar9,uVar8);
              iVar3 = *piVar10;
              local_17f = iVar3;
              this_00 = (CDataManager *)G_CDataManager();
              local_20 = (int *)CDataManager::find_item(this_00,iVar3);
              if (local_20 == (int *)0x0) {
                CUser::SendCmdErrorPacket(param_1,0x196,0x11);
                uVar16 = 0;
                goto LAB_0822a08c;
              }
              (**(code **)(*local_20 + 8))(local_20,&local_181);
              if (local_180 != '\x01') {
                uVar8 = (uint)local_4e;
                pvVar9 = (vector<STStackablePackageData,std::allocator<STStackablePackageData>> *)
                         __gnu_cxx::
                         __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
                         ::operator->(local_68);
                iVar3 = std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>::
                        at(pvVar9,uVar8);
                local_17a = *(undefined4 *)(iVar3 + 4);
              }
              std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back(local_64,&local_181);
              __gnu_cxx::
              __normal_iterator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>const*,std::vector<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>,std::allocator<std::vector<STStackablePackageData,std::allocator<STStackablePackageData>>>>>
              ::operator++(local_68);
            }
            local_28 = 0;
            std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
            __gnu_cxx::
            __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
            ::__normal_iterator<Inven_Item*>(local_6c,local_30);
            while( true ) {
              std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
              bVar2 = __gnu_cxx::operator!=(local_6c,local_2c);
              if (!bVar2) break;
              puVar11 = (undefined4 *)
                        __gnu_cxx::
                        __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                        ::operator*(local_6c);
              uVar16 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              local_28 = CInventory::insertItemIntoInventory
                                   (uVar16,*puVar11,puVar11[1],puVar11[2],puVar11[3],puVar11[4],
                                    puVar11[5],puVar11[6],puVar11[7],puVar11[8],puVar11[9],
                                    puVar11[10],puVar11[0xb],puVar11[0xc],puVar11[0xd],puVar11[0xe],
                                    *(undefined1 *)(puVar11 + 0xf),8,1,1);
              if (local_28 < 0) {
                pcVar12 = (char *)RDARScriptStringManager::findString
                                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                             "game_server_msg_171",(bool *)0x0);
                strncpy(local_81,pcVar12,0x14);
                pcVar12 = (char *)RDARScriptStringManager::findString
                                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                             "game_server_msg_172",(bool *)0x0);
                strncpy((char *)&local_181,pcVar12,0xff);
                uVar16 = CUser::GetServerGroup(param_1);
                sVar13 = strlen((char *)&local_181);
                uVar14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
                uVar15 = __gnu_cxx::
                         __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
                         ::operator*(local_6c);
                WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                          (local_81,uVar15,0,uVar14,&local_181,sVar13,0,uVar16,0,0);
              }
              else {
                CUser::SendUpdateItemList(param_1,1,0,local_28);
              }
              __gnu_cxx::
              __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
              ::operator++(local_6c);
            }
            iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1);
            pCVar5 = (CFairPvPScore *)CUser::GetCharacExpandData(param_1,7);
            fair_pvp::CFairPvPScore::SetGiveItem(pCVar5,iVar3 + 1);
            CUser::SendCmdOkPacket(param_1,0x196);
            uVar16 = 0;
LAB_0822a08c:
            std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_64);
          }
          else {
            uVar16 = 0;
          }
        }
        else {
          uVar16 = 0;
        }
      }
      else {
        uVar16 = LineFunc(0xe785,
                          "virtual int Dispatcher_SelectItem::dispatch_sig(CUser*, PacketBuf&)",0,0)
        ;
      }
    }
  }
  return uVar16;
}
```
