# _generateRandomItem

`_ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb`

`WongWork::CMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, int, WongWork::stGenerateResult_t&, bool&)`

| 类 | 地址 |
|---|---|
| `WongWork::CMonsterDrop` | `0x08535ed2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08535ed2  _ZN8WongWork12CMonsterDrop19_generateRandomItemEhchhhiiRNS_18stGenerateResult_tERb
#           WongWork::CMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char, unsigned char, int, int, WongWork::stGenerateResult_t&, bool&)
# range [0x08535ed2, 0x08536881]
08535ed2 +0x000:  push   %ebp
08535ed3 +0x001:  mov    %esp,%ebp
08535ed5 +0x003:  push   %edi
08535ed6 +0x004:  push   %esi
08535ed7 +0x005:  push   %ebx
08535ed8 +0x006:  sub    $0x24c,%esp
08535ede +0x00c:  mov    0xc(%ebp),%esi
08535ee1 +0x00f:  mov    0x10(%ebp),%ebx
08535ee4 +0x012:  mov    0x14(%ebp),%ecx
08535ee7 +0x015:  mov    0x18(%ebp),%edx
08535eea +0x018:  mov    0x1c(%ebp),%eax
08535eed +0x01b:  mov    %eax,-0x21c(%ebp)
08535ef3 +0x021:  mov    %esi,%eax
08535ef5 +0x023:  mov    %al,-0x1fc(%ebp)
08535efb +0x029:  mov    %bl,-0x200(%ebp)
08535f01 +0x02f:  mov    %cl,-0x204(%ebp)
08535f07 +0x035:  mov    %dl,-0x208(%ebp)
08535f0d +0x03b:  movzbl -0x21c(%ebp),%ecx
08535f14 +0x042:  mov    %cl,-0x20c(%ebp)
08535f1a +0x048:  movzbl -0x204(%ebp),%eax
08535f21 +0x04f:  mov    %eax,0x4(%esp)
08535f25 +0x053:  mov    0x8(%ebp),%eax
08535f28 +0x056:  mov    %eax,(%esp)
08535f2b +0x059:  call   085372ee <_ZN8WongWork12CMonsterDrop18_getGenItemProbIdxEi>  ; WongWork::CMonsterDrop::_getGenItemProbIdx(int)
08535f30 +0x05e:  mov    %eax,-0x64(%ebp)
08535f33 +0x061:  cmpl   $0x0,-0x64(%ebp)
08535f37 +0x065:  js     08536873 <+0x9a1>
08535f3d +0x06b:  mov    -0x64(%ebp),%eax
08535f40 +0x06e:  mov    0x8(%ebp),%edx
08535f43 +0x071:  add    $0x24,%edx
08535f46 +0x074:  mov    %eax,0x4(%esp)
08535f4a +0x078:  mov    %edx,(%esp)
08535f4d +0x07b:  call   0853b904 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1b90>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1b90
08535f52 +0x080:  mov    (%eax),%edx
08535f54 +0x082:  mov    %edx,-0x90(%ebp)
08535f5a +0x088:  mov    0x4(%eax),%edx
08535f5d +0x08b:  mov    %edx,-0x8c(%ebp)
08535f63 +0x091:  mov    0x8(%eax),%edx
08535f66 +0x094:  mov    %edx,-0x88(%ebp)
08535f6c +0x09a:  mov    0xc(%eax),%edx
08535f6f +0x09d:  mov    %edx,-0x84(%ebp)
08535f75 +0x0a3:  mov    0x10(%eax),%edx
08535f78 +0x0a6:  mov    %edx,-0x80(%ebp)
08535f7b +0x0a9:  mov    0x14(%eax),%edx
08535f7e +0x0ac:  mov    %edx,-0x7c(%ebp)
08535f81 +0x0af:  mov    0x18(%eax),%eax
08535f84 +0x0b2:  mov    %eax,-0x78(%ebp)
08535f87 +0x0b5:  subb   $0x1,-0x20c(%ebp)
08535f8e +0x0bc:  mov    -0x88(%ebp),%eax
08535f94 +0x0c2:  mov    %eax,-0x214(%ebp)
08535f9a +0x0c8:  fildl  -0x214(%ebp)
08535fa0 +0x0ce:  movzbl -0x208(%ebp),%edx
08535fa7 +0x0d5:  mov    0x8(%ebp),%eax
08535faa +0x0d8:  add    $0x3c,%edx
08535fad +0x0db:  flds   0x8(%eax,%edx,4)
08535fb1 +0x0df:  fmulp  %st,%st(1)
08535fb3 +0x0e1:  movsbl -0x200(%ebp),%edx
08535fba +0x0e8:  mov    0x8(%ebp),%eax
08535fbd +0x0eb:  add    $0x54,%edx
08535fc0 +0x0ee:  flds   0xc(%eax,%edx,4)
08535fc4 +0x0f2:  fmulp  %st,%st(1)
08535fc6 +0x0f4:  movzbl -0x20c(%ebp),%edx
08535fcd +0x0fb:  mov    0x8(%ebp),%eax
08535fd0 +0x0fe:  add    $0x28,%edx
08535fd3 +0x101:  flds   0x8(%eax,%edx,4)
08535fd7 +0x105:  fmulp  %st,%st(1)
08535fd9 +0x107:  fnstcw -0x20e(%ebp)
08535fdf +0x10d:  movzwl -0x20e(%ebp),%eax
08535fe6 +0x114:  mov    $0xc,%ah
08535fe8 +0x116:  mov    %ax,-0x210(%ebp)
08535fef +0x11d:  fldcw  -0x210(%ebp)
08535ff5 +0x123:  fistpl -0x60(%ebp)
08535ff8 +0x126:  fldcw  -0x20e(%ebp)
08535ffe +0x12c:  movl   $0x0,-0x74(%ebp)
08536005 +0x133:  lea    0x20(%ebp),%eax
08536008 +0x136:  mov    %eax,0x4(%esp)
0853600c +0x13a:  lea    -0x74(%ebp),%eax
0853600f +0x13d:  mov    %eax,(%esp)
08536012 +0x140:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08536017 +0x145:  movl   $0x64,-0x70(%ebp)
0853601e +0x14c:  mov    %eax,0x4(%esp)
08536022 +0x150:  lea    -0x70(%ebp),%eax
08536025 +0x153:  mov    %eax,(%esp)
08536028 +0x156:  call   080df90e <_GLOBAL__I__ZN10CaptchaGenC2Ev+0x12a>  ; global constructors keyed to CaptchaGen::CaptchaGen()+0x12a
0853602d +0x15b:  mov    (%eax),%eax
0853602f +0x15d:  mov    %eax,0x20(%ebp)
08536032 +0x160:  mov    0x20(%ebp),%eax
08536035 +0x163:  cmp    $0x32,%eax
08536038 +0x166:  jle    0853608e <+0x1bc>
0853603a +0x168:  mov    0x20(%ebp),%eax
0853603d +0x16b:  sub    $0x32,%eax
08536040 +0x16e:  mov    %eax,-0x214(%ebp)
08536046 +0x174:  fildl  -0x214(%ebp)
0853604c +0x17a:  flds   &data#f937919e(.rodata)
08536052 +0x180:  fmulp  %st,%st(1)
08536054 +0x182:  flds   "\n�#<"
0853605a +0x188:  faddp  %st,%st(1)
0853605c +0x18a:  fstps  -0x5c(%ebp)
0853605f +0x18d:  fildl  -0x60(%ebp)
08536062 +0x190:  fld1
08536064 +0x192:  fsubs  -0x5c(%ebp)
08536067 +0x195:  fmulp  %st,%st(1)
08536069 +0x197:  fnstcw -0x20e(%ebp)
0853606f +0x19d:  movzwl -0x20e(%ebp),%eax
08536076 +0x1a4:  mov    $0xc,%ah
08536078 +0x1a6:  mov    %ax,-0x210(%ebp)
0853607f +0x1ad:  fldcw  -0x210(%ebp)
08536085 +0x1b3:  fistpl -0x60(%ebp)
08536088 +0x1b6:  fldcw  -0x20e(%ebp)
0853608e +0x1bc:  mov    -0x60(%ebp),%eax
08536091 +0x1bf:  mov    %eax,%ecx
08536093 +0x1c1:  imul   0x24(%ebp),%ecx
08536097 +0x1c5:  mov    $0x51eb851f,%edx
0853609c +0x1ca:  mov    %ecx,%eax
0853609e +0x1cc:  imul   %edx
085360a0 +0x1ce:  sar    $0x5,%edx
085360a3 +0x1d1:  mov    %ecx,%eax
085360a5 +0x1d3:  sar    $0x1f,%eax
085360a8 +0x1d6:  mov    %edx,%ecx
085360aa +0x1d8:  sub    %eax,%ecx
085360ac +0x1da:  mov    %ecx,%eax
085360ae +0x1dc:  mov    %eax,-0x60(%ebp)
085360b1 +0x1df:  mov    0x8(%ebp),%eax
085360b4 +0x1e2:  add    $0x8,%eax
085360b7 +0x1e5:  movl   $0x2710,0x8(%esp)
085360bf +0x1ed:  movl   $0x0,0x4(%esp)
085360c7 +0x1f5:  mov    %eax,(%esp)
085360ca +0x1f8:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085360cf +0x1fd:  cmp    -0x60(%ebp),%eax
085360d2 +0x200:  setl   %al
085360d5 +0x203:  test   %al,%al
085360d7 +0x205:  je     085362a8 <+0x3d6>
085360dd +0x20b:  movzbl -0x1fc(%ebp),%edx
085360e4 +0x212:  mov    0x8(%ebp),%eax
085360e7 +0x215:  mov    0x4(%eax),%eax
085360ea +0x218:  mov    %edx,0x4(%esp)
085360ee +0x21c:  mov    %eax,(%esp)
085360f1 +0x21f:  call   08533424 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh>  ; WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)
085360f6 +0x224:  mov    %eax,-0x58(%ebp)
085360f9 +0x227:  mov    -0x58(%ebp),%eax
085360fc +0x22a:  mov    (%eax),%ebx
085360fe +0x22c:  mov    -0x58(%ebp),%eax
08536101 +0x22f:  mov    (%eax),%esi
08536103 +0x231:  mov    -0x58(%ebp),%eax
08536106 +0x234:  mov    0x4(%eax),%eax
08536109 +0x237:  mov    -0x58(%ebp),%edx
0853610c +0x23a:  mov    0x4(%edx),%edx
0853610f +0x23d:  neg    %edx
08536111 +0x23f:  mov    %eax,0x4(%esp)
08536115 +0x243:  mov    %edx,(%esp)
08536118 +0x246:  call   08539d90 <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x1c>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x1c
0853611d +0x24b:  mov    %esi,%ecx
0853611f +0x24d:  imul   %eax,%ecx
08536122 +0x250:  mov    $0x51eb851f,%edx
08536127 +0x255:  mov    %ecx,%eax
08536129 +0x257:  imul   %edx
0853612b +0x259:  sar    $0x5,%edx
0853612e +0x25c:  mov    %ecx,%eax
08536130 +0x25e:  sar    $0x1f,%eax
08536133 +0x261:  mov    %edx,%ecx
08536135 +0x263:  sub    %eax,%ecx
08536137 +0x265:  mov    %ecx,%eax
08536139 +0x267:  lea    (%ebx,%eax,1),%eax
0853613c +0x26a:  mov    %eax,-0x94(%ebp)
08536142 +0x270:  lea    -0x1ed(%ebp),%eax
08536148 +0x276:  mov    %eax,(%esp)
0853614b +0x279:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
08536150 +0x27e:  movb   $0x2,-0x1ec(%ebp)
08536157 +0x285:  movl   $0x0,-0x1eb(%ebp)
08536161 +0x28f:  movl   $0x1,-0x6c(%ebp)
08536168 +0x296:  lea    -0x94(%ebp),%eax
0853616e +0x29c:  mov    %eax,0x4(%esp)
08536172 +0x2a0:  lea    -0x6c(%ebp),%eax
08536175 +0x2a3:  mov    %eax,(%esp)
08536178 +0x2a6:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0853617d +0x2ab:  mov    (%eax),%eax
0853617f +0x2ad:  mov    %eax,0x4(%esp)
08536183 +0x2b1:  lea    -0x1ed(%ebp),%eax
08536189 +0x2b7:  mov    %eax,(%esp)
0853618c +0x2ba:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08536191 +0x2bf:  cmpb   $0x3,-0x200(%ebp)
08536198 +0x2c6:  jne    08536293 <+0x3c1>
0853619e +0x2cc:  movw   $0x0,-0x96(%ebp)
085361a7 +0x2d5:  movw   $0x0,-0x98(%ebp)
085361b0 +0x2de:  movzbl -0x20c(%ebp),%eax
085361b7 +0x2e5:  lea    -0x98(%ebp),%edx
085361bd +0x2eb:  mov    %edx,0xc(%esp)
085361c1 +0x2ef:  lea    -0x96(%ebp),%edx
085361c7 +0x2f5:  mov    %edx,0x8(%esp)
085361cb +0x2f9:  mov    %eax,0x4(%esp)
085361cf +0x2fd:  mov    0x8(%ebp),%eax
085361d2 +0x300:  mov    %eax,(%esp)
085361d5 +0x303:  call   08535dc8 <_ZN8WongWork12CMonsterDrop16_getBossGoldDropEhRtS1_>  ; WongWork::CMonsterDrop::_getBossGoldDrop(unsigned char, unsigned short&, unsigned short&)
085361da +0x308:  test   %al,%al
085361dc +0x30a:  je     0853627c <+0x3aa>
085361e2 +0x310:  movzwl -0x98(%ebp),%eax
085361e9 +0x317:  movzwl %ax,%edx
085361ec +0x31a:  mov    -0x94(%ebp),%eax
085361f2 +0x320:  mov    %edx,%ecx
085361f4 +0x322:  imul   %eax,%ecx
085361f7 +0x325:  mov    $0x51eb851f,%edx
085361fc +0x32a:  mov    %ecx,%eax
085361fe +0x32c:  imul   %edx
08536200 +0x32e:  sar    $0x5,%edx
08536203 +0x331:  mov    %ecx,%eax
08536205 +0x333:  sar    $0x1f,%eax
08536208 +0x336:  mov    %edx,%ecx
0853620a +0x338:  sub    %eax,%ecx
0853620c +0x33a:  mov    %ecx,%eax
0853620e +0x33c:  mov    %eax,-0x94(%ebp)
08536214 +0x342:  movl   $0x1,-0x68(%ebp)
0853621b +0x349:  lea    -0x94(%ebp),%eax
08536221 +0x34f:  mov    %eax,0x4(%esp)
08536225 +0x353:  lea    -0x68(%ebp),%eax
08536228 +0x356:  mov    %eax,(%esp)
0853622b +0x359:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
08536230 +0x35e:  mov    (%eax),%eax
08536232 +0x360:  mov    %eax,0x4(%esp)
08536236 +0x364:  lea    -0x1ed(%ebp),%eax
0853623c +0x36a:  mov    %eax,(%esp)
0853623f +0x36d:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
08536244 +0x372:  movl   $0x0,-0x54(%ebp)
0853624b +0x379:  jmp    08536266 <+0x394>
0853624d +0x37b:  mov    0x28(%ebp),%eax
08536250 +0x37e:  lea    -0x1ed(%ebp),%edx
08536256 +0x384:  mov    %edx,0x4(%esp)
0853625a +0x388:  mov    %eax,(%esp)
0853625d +0x38b:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08536262 +0x390:  addl   $0x1,-0x54(%ebp)
08536266 +0x394:  movzwl -0x96(%ebp),%eax
0853626d +0x39b:  movzwl %ax,%eax
08536270 +0x39e:  cmp    -0x54(%ebp),%eax
08536273 +0x3a1:  setg   %al
08536276 +0x3a4:  test   %al,%al
08536278 +0x3a6:  jne    0853624d <+0x37b>
0853627a +0x3a8:  jmp    085362a8 <+0x3d6>
0853627c +0x3aa:  mov    0x28(%ebp),%eax
0853627f +0x3ad:  lea    -0x1ed(%ebp),%edx
08536285 +0x3b3:  mov    %edx,0x4(%esp)
08536289 +0x3b7:  mov    %eax,(%esp)
0853628c +0x3ba:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08536291 +0x3bf:  jmp    085362a8 <+0x3d6>
08536293 +0x3c1:  mov    0x28(%ebp),%eax
08536296 +0x3c4:  lea    -0x1ed(%ebp),%edx
0853629c +0x3ca:  mov    %edx,0x4(%esp)
085362a0 +0x3ce:  mov    %eax,(%esp)
085362a3 +0x3d1:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
085362a8 +0x3d6:  mov    0x2c(%ebp),%eax
085362ab +0x3d9:  movzbl (%eax),%eax
085362ae +0x3dc:  test   %al,%al
085362b0 +0x3de:  jne    08536876 <+0x9a4>
085362b6 +0x3e4:  movl   $0x1,-0x50(%ebp)
085362bd +0x3eb:  jmp    08536862 <+0x990>
085362c2 +0x3f0:  mov    $0x3f800000,%eax
085362c7 +0x3f5:  mov    %eax,-0x4c(%ebp)
085362ca +0x3f8:  lea    -0xb0(%ebp),%edx
085362d0 +0x3fe:  mov    $0x0,%ecx
085362d5 +0x403:  mov    $0x18,%eax
085362da +0x408:  mov    %eax,%ebx
085362dc +0x40a:  and    $0xfffffffc,%ebx
085362df +0x40d:  mov    $0x0,%eax
085362e4 +0x412:  mov    %ecx,(%edx,%eax,1)
085362e7 +0x415:  add    $0x4,%eax
085362ea +0x418:  cmp    %ebx,%eax
085362ec +0x41a:  jb     085362e4 <+0x412>
085362ee +0x41c:  add    %eax,%edx
085362f0 +0x41e:  mov    -0x50(%ebp),%edx
085362f3 +0x421:  mov    %edx,%eax
085362f5 +0x423:  add    %eax,%eax
085362f7 +0x425:  add    %edx,%eax
085362f9 +0x427:  shl    $0x3,%eax
085362fc +0x42a:  add    $0x30,%eax
085362ff +0x42d:  add    0x8(%ebp),%eax
08536302 +0x430:  mov    %eax,-0x48(%ebp)
08536305 +0x433:  cmpl   $0x2,-0x50(%ebp)
08536309 +0x437:  jne    085363a2 <+0x4d0>
0853630f +0x43d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536314 +0x442:  mov    %eax,(%esp)
08536317 +0x445:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
0853631c +0x44a:  mov    -0x64(%ebp),%edx
0853631f +0x44d:  mov    %edx,0x4(%esp)
08536323 +0x451:  mov    %eax,(%esp)
08536326 +0x454:  call   082f8ae8 <_ZN28CAutoMarketConditionsControl15GetItemDropRateEi>  ; CAutoMarketConditionsControl::GetItemDropRate(int)
0853632b +0x459:  fstps  -0x4c(%ebp)
0853632e +0x45c:  fldz
08536330 +0x45e:  fstpl  -0x28(%ebp)
08536333 +0x461:  flds   -0x4c(%ebp)
08536336 +0x464:  fldz
08536338 +0x466:  fxch   %st(1)
0853633a +0x468:  fucompp
0853633c +0x46a:  fnstsw %ax
0853633e +0x46c:  sahf
0853633f +0x46d:  jp     08536343 <+0x471>
08536341 +0x46f:  je     0853634f <+0x47d>
08536343 +0x471:  fld1
08536345 +0x473:  fdivs  -0x4c(%ebp)
08536348 +0x476:  fld1
0853634a +0x478:  fsubrp %st,%st(1)
0853634c +0x47a:  fstpl  -0x28(%ebp)
0853634f +0x47d:  mov    -0x50(%ebp),%edx
08536352 +0x480:  mov    %edx,%eax
08536354 +0x482:  add    %eax,%eax
08536356 +0x484:  add    %edx,%eax
08536358 +0x486:  shl    $0x3,%eax
0853635b +0x489:  add    $0x30,%eax
0853635e +0x48c:  add    0x8(%ebp),%eax
08536361 +0x48f:  mov    %eax,%ebx
08536363 +0x491:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536368 +0x496:  mov    %eax,(%esp)
0853636b +0x499:  call   084e92fc <_GLOBAL__I__Z7getUserj+0x2ae>  ; global constructors keyed to getUser(unsigned int)+0x2ae
08536370 +0x49e:  fldl   -0x28(%ebp)
08536373 +0x4a1:  fstpl  0x10(%esp)
08536377 +0x4a5:  movl   $0x6,0xc(%esp)
0853637f +0x4ad:  lea    -0xb0(%ebp),%edx
08536385 +0x4b3:  mov    %edx,0x8(%esp)
08536389 +0x4b7:  mov    %ebx,0x4(%esp)
0853638d +0x4bb:  mov    %eax,(%esp)
08536390 +0x4be:  call   082f8c8c <_ZN28CAutoMarketConditionsControl16ChangeItemRarityEPiS0_id>  ; CAutoMarketConditionsControl::ChangeItemRarity(int*, int*, int, double)
08536395 +0x4c3:  test   %al,%al
08536397 +0x4c5:  je     085363a2 <+0x4d0>
08536399 +0x4c7:  lea    -0xb0(%ebp),%eax
0853639f +0x4cd:  mov    %eax,-0x48(%ebp)
085363a2 +0x4d0:  mov    -0x50(%ebp),%eax
085363a5 +0x4d3:  mov    -0x88(%ebp,%eax,4),%eax
085363ac +0x4da:  mov    %eax,-0x214(%ebp)
085363b2 +0x4e0:  fildl  -0x214(%ebp)
085363b8 +0x4e6:  fstps  -0x44(%ebp)
085363bb +0x4e9:  cmpl   $0x2,-0x50(%ebp)
085363bf +0x4ed:  jne    085363de <+0x50c>
085363c1 +0x4ef:  mov    0x8(%ebp),%eax
085363c4 +0x4f2:  mov    0x259380(%eax),%eax
085363ca +0x4f8:  mov    %eax,-0x214(%ebp)
085363d0 +0x4fe:  fildl  -0x214(%ebp)
085363d6 +0x504:  flds   -0x44(%ebp)
085363d9 +0x507:  fmulp  %st,%st(1)
085363db +0x509:  fstps  -0x44(%ebp)
085363de +0x50c:  cmpl   $0x2,-0x50(%ebp)
085363e2 +0x510:  jne    085363f5 <+0x523>
085363e4 +0x512:  mov    0x8(%ebp),%eax
085363e7 +0x515:  flds   0x259384(%eax)
085363ed +0x51b:  flds   -0x44(%ebp)
085363f0 +0x51e:  fmulp  %st,%st(1)
085363f2 +0x520:  fstps  -0x44(%ebp)
085363f5 +0x523:  flds   -0x44(%ebp)
085363f8 +0x526:  fmuls  -0x4c(%ebp)
085363fb +0x529:  mov    -0x50(%ebp),%edx
085363fe +0x52c:  movzbl -0x208(%ebp),%ebx
08536405 +0x533:  mov    0x8(%ebp),%ecx
08536408 +0x536:  mov    %edx,%eax
0853640a +0x538:  shl    $0x2,%eax
0853640d +0x53b:  add    %edx,%eax
0853640f +0x53d:  add    %ebx,%eax
08536411 +0x53f:  add    $0x3c,%eax
08536414 +0x542:  flds   0x8(%ecx,%eax,4)
08536418 +0x546:  fmulp  %st,%st(1)
0853641a +0x548:  mov    -0x50(%ebp),%ecx
0853641d +0x54b:  movsbl -0x200(%ebp),%edx
08536424 +0x552:  mov    0x8(%ebp),%eax
08536427 +0x555:  shl    $0x2,%ecx
0853642a +0x558:  lea    (%ecx,%edx,1),%edx
0853642d +0x55b:  add    $0x54,%edx
08536430 +0x55e:  flds   0xc(%eax,%edx,4)
08536434 +0x562:  fmulp  %st,%st(1)
08536436 +0x564:  mov    -0x50(%ebp),%ecx
08536439 +0x567:  movzbl -0x20c(%ebp),%edx
08536440 +0x56e:  mov    0x8(%ebp),%eax
08536443 +0x571:  shl    $0x2,%ecx
08536446 +0x574:  lea    (%ecx,%edx,1),%edx
08536449 +0x577:  add    $0x28,%edx
0853644c +0x57a:  flds   0x8(%eax,%edx,4)
08536450 +0x57e:  fmulp  %st,%st(1)
08536452 +0x580:  fnstcw -0x20e(%ebp)
08536458 +0x586:  movzwl -0x20e(%ebp),%eax
0853645f +0x58d:  mov    $0xc,%ah
08536461 +0x58f:  mov    %ax,-0x210(%ebp)
08536468 +0x596:  fldcw  -0x210(%ebp)
0853646e +0x59c:  fistpl -0x40(%ebp)
08536471 +0x59f:  fldcw  -0x20e(%ebp)
08536477 +0x5a5:  mov    -0x40(%ebp),%eax
0853647a +0x5a8:  mov    %eax,%ecx
0853647c +0x5aa:  imul   0x24(%ebp),%ecx
08536480 +0x5ae:  mov    $0x51eb851f,%edx
08536485 +0x5b3:  mov    %ecx,%eax
08536487 +0x5b5:  imul   %edx
08536489 +0x5b7:  sar    $0x5,%edx
0853648c +0x5ba:  mov    %ecx,%eax
0853648e +0x5bc:  sar    $0x1f,%eax
08536491 +0x5bf:  mov    %edx,%ecx
08536493 +0x5c1:  sub    %eax,%ecx
08536495 +0x5c3:  mov    %ecx,%eax
08536497 +0x5c5:  mov    %eax,-0x40(%ebp)
0853649a +0x5c8:  mov    0x8(%ebp),%eax
0853649d +0x5cb:  add    $0x8,%eax
085364a0 +0x5ce:  movl   $0x2710,0x8(%esp)
085364a8 +0x5d6:  movl   $0x0,0x4(%esp)
085364b0 +0x5de:  mov    %eax,(%esp)
085364b3 +0x5e1:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085364b8 +0x5e6:  mov    %eax,-0x3c(%ebp)
085364bb +0x5e9:  mov    -0x40(%ebp),%eax
085364be +0x5ec:  cmp    -0x3c(%ebp),%eax
085364c1 +0x5ef:  jl     08536857 <+0x985>
085364c7 +0x5f5:  mov    0x8(%ebp),%eax
085364ca +0x5f8:  add    $0x8,%eax
085364cd +0x5fb:  movl   $0xf4240,0x8(%esp)
085364d5 +0x603:  movl   $0x1,0x4(%esp)
085364dd +0x60b:  mov    %eax,(%esp)
085364e0 +0x60e:  call   085334a4 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii>  ; WongWork::CGenerateRandomNumber::generateNumber(int, int)
085364e5 +0x613:  mov    %eax,-0x38(%ebp)
085364e8 +0x616:  mov    0x28(%ebp),%eax
085364eb +0x619:  lea    0xc(%eax),%edx
085364ee +0x61c:  mov    -0x50(%ebp),%eax
085364f1 +0x61f:  mov    %eax,0xc(%esp)
085364f5 +0x623:  mov    -0x38(%ebp),%eax
085364f8 +0x626:  mov    %eax,0x8(%esp)
085364fc +0x62a:  mov    -0x48(%ebp),%eax
085364ff +0x62d:  mov    %eax,0x4(%esp)
08536503 +0x631:  mov    %edx,(%esp)
08536506 +0x634:  call   08550be4 <_ZN10CLuckPoint13GetItemRarityEPiii>  ; CLuckPoint::GetItemRarity(int*, int, int)
0853650b +0x639:  mov    %eax,-0x34(%ebp)
0853650e +0x63c:  mov    -0x50(%ebp),%esi
08536511 +0x63f:  mov    0x8(%ebp),%eax
08536514 +0x642:  mov    %eax,(%esp)
08536517 +0x645:  call   0853a41a <_GLOBAL__I__ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x6a6>  ; global constructors keyed to WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char)+0x6a6
0853651c +0x64a:  mov    %eax,%ebx
0853651e +0x64c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536523 +0x651:  mov    %eax,(%esp)
08536526 +0x654:  call   0814a6ea <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x489>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x489
0853652b +0x659:  mov    -0x34(%ebp),%edx
0853652e +0x65c:  mov    %edx,0xc(%esp)
08536532 +0x660:  mov    %esi,0x8(%esp)
08536536 +0x664:  mov    %ebx,0x4(%esp)
0853653a +0x668:  mov    %eax,(%esp)
0853653d +0x66b:  call   085342c6 <_ZN8WongWork17CItemGeneratorMgr23onTryGenerateRandomItemENS0_15eGenerateType_tENS_15eItemDropType_tE11ENUM_RARITY>  ; WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t, WongWork::eItemDropType_t, ENUM_RARITY)
08536542 +0x670:  movzbl -0x1fc(%ebp),%edx
08536549 +0x677:  mov    -0x50(%ebp),%eax
0853654c +0x67a:  mov    0x8(%ebp),%ecx
0853654f +0x67d:  add    $0x340,%ecx
08536555 +0x683:  mov    %edx,0xc(%esp)
08536559 +0x687:  mov    -0x34(%ebp),%edx
0853655c +0x68a:  mov    %edx,0x8(%esp)
08536560 +0x68e:  mov    %eax,0x4(%esp)
08536564 +0x692:  mov    %ecx,(%esp)
08536567 +0x695:  call   085349a4 <_ZN8WongWork17CItemGenRateTable10chooseItemENS_15eItemDropType_tE11ENUM_RARITYi>  ; WongWork::CItemGenRateTable::chooseItem(WongWork::eItemDropType_t, ENUM_RARITY, int)
0853656c +0x69a:  mov    %eax,-0x30(%ebp)
0853656f +0x69d:  cmpl   $0xffffffff,-0x30(%ebp)
08536573 +0x6a1:  je     0853685a <+0x988>
08536579 +0x6a7:  cmpl   $0x2,-0x50(%ebp)
0853657d +0x6ab:  jne    08536672 <+0x7a0>
08536583 +0x6b1:  lea    -0x1ed(%ebp),%edx
08536589 +0x6b7:  mov    $0x100,%ebx
0853658e +0x6bc:  mov    $0x0,%eax
08536593 +0x6c1:  mov    %edx,%ecx
08536595 +0x6c3:  and    $0x1,%ecx
08536598 +0x6c6:  test   %ecx,%ecx
0853659a +0x6c8:  je     085365a4 <+0x6d2>
0853659c +0x6ca:  mov    %al,(%edx)
0853659e +0x6cc:  add    $0x1,%edx
085365a1 +0x6cf:  sub    $0x1,%ebx
085365a4 +0x6d2:  mov    %edx,%ecx
085365a6 +0x6d4:  and    $0x2,%ecx
085365a9 +0x6d7:  test   %ecx,%ecx
085365ab +0x6d9:  je     085365b6 <+0x6e4>
085365ad +0x6db:  mov    %ax,(%edx)
085365b0 +0x6de:  add    $0x2,%edx
085365b3 +0x6e1:  sub    $0x2,%ebx
085365b6 +0x6e4:  mov    %ebx,%ecx
085365b8 +0x6e6:  shr    $0x2,%ecx
085365bb +0x6e9:  mov    %edx,%edi
085365bd +0x6eb:  rep stos %eax,%es:(%edi)
085365bf +0x6ed:  mov    %edi,%edx
085365c1 +0x6ef:  mov    %ebx,%ecx
085365c3 +0x6f1:  and    $0x2,%ecx
085365c6 +0x6f4:  test   %ecx,%ecx
085365c8 +0x6f6:  je     085365d0 <+0x6fe>
085365ca +0x6f8:  mov    %ax,(%edx)
085365cd +0x6fb:  add    $0x2,%edx
085365d0 +0x6fe:  mov    %ebx,%ecx
085365d2 +0x700:  and    $0x1,%ecx
085365d5 +0x703:  test   %ecx,%ecx
085365d7 +0x705:  je     085365de <+0x70c>
085365d9 +0x707:  mov    %al,(%edx)
085365db +0x709:  add    $0x1,%edx
085365de +0x70c:  mov    0x20(%ebp),%eax
085365e1 +0x70f:  mov    %eax,-0x218(%ebp)
085365e7 +0x715:  movzbl -0x20c(%ebp),%edi
085365ee +0x71c:  movzbl -0x208(%ebp),%esi
085365f5 +0x723:  movzbl -0x204(%ebp),%ebx
085365fc +0x72a:  movsbl -0x200(%ebp),%ecx
08536603 +0x731:  movzbl -0x1fc(%ebp),%edx
0853660a +0x738:  mov    -0x40(%ebp),%eax
0853660d +0x73b:  mov    %eax,0x2c(%esp)
08536611 +0x73f:  mov    -0x3c(%ebp),%eax
08536614 +0x742:  mov    %eax,0x28(%esp)
08536618 +0x746:  mov    0x24(%ebp),%eax
0853661b +0x749:  mov    %eax,0x24(%esp)
0853661f +0x74d:  mov    -0x218(%ebp),%eax
08536625 +0x753:  mov    %eax,0x20(%esp)
08536629 +0x757:  mov    %edi,0x1c(%esp)
0853662d +0x75b:  mov    %esi,0x18(%esp)
08536631 +0x75f:  mov    %ebx,0x14(%esp)
08536635 +0x763:  mov    %ecx,0x10(%esp)
08536639 +0x767:  mov    %edx,0xc(%esp)
0853663d +0x76b:  mov    -0x30(%ebp),%eax
08536640 +0x76e:  mov    %eax,0x8(%esp)
08536644 +0x772:  movl   $"monster drop rate : item_id(%d), mon_lv(%d), role(%d), dungeon_lv(%d), dungeon_diff(%d), member_cnt(%d), bourgeois_rate(%d), drop_rate(%d), rand_value(%d), drop_value(%d)",0x4(%esp)
0853664c +0x77a:  lea    -0x1ed(%ebp),%eax
08536652 +0x780:  mov    %eax,(%esp)
08536655 +0x783:  call   0807e440 <_init+0xd38>
0853665a +0x788:  mov    0x28(%ebp),%eax
0853665d +0x78b:  lea    0xc(%eax),%edx
08536660 +0x78e:  lea    -0x1ed(%ebp),%eax
08536666 +0x794:  mov    %eax,0x4(%esp)
0853666a +0x798:  mov    %edx,(%esp)
0853666d +0x79b:  call   08550ef0 <_ZN10CLuckPoint16sendItemDropRateEPKc>  ; CLuckPoint::sendItemDropRate(char const*)
08536672 +0x7a0:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08536677 +0x7a5:  mov    0xc(%eax),%eax
0853667a +0x7a8:  mov    -0x30(%ebp),%edx
0853667d +0x7ab:  mov    %edx,0x4(%esp)
08536681 +0x7af:  mov    %eax,(%esp)
08536684 +0x7b2:  call   08511e8a <_ZN9CItemList9find_itemEi>  ; CItemList::find_item(int)
08536689 +0x7b7:  mov    %eax,-0x2c(%ebp)
0853668c +0x7ba:  cmpl   $0x0,-0x2c(%ebp)
08536690 +0x7be:  je     0853685d <+0x98b>
08536696 +0x7c4:  lea    -0xed(%ebp),%eax
0853669c +0x7ca:  mov    %eax,(%esp)
0853669f +0x7cd:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
085366a4 +0x7d2:  mov    -0x30(%ebp),%eax
085366a7 +0x7d5:  mov    %eax,-0xeb(%ebp)
085366ad +0x7db:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
085366b2 +0x7e0:  mov    0xc(%eax),%eax
085366b5 +0x7e3:  movl   $0x1,0xc(%esp)
085366bd +0x7eb:  lea    -0xed(%ebp),%edx
085366c3 +0x7f1:  mov    %edx,0x8(%esp)
085366c7 +0x7f5:  movl   $0x1,0x4(%esp)
085366cf +0x7fd:  mov    %eax,(%esp)
085366d2 +0x800:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
085366d7 +0x805:  cmpl   $0x2,-0x50(%ebp)
085366db +0x809:  jne    085367f1 <+0x91f>
085366e1 +0x80f:  mov    -0x2c(%ebp),%eax
085366e4 +0x812:  mov    (%eax),%eax
085366e6 +0x814:  add    $0x14,%eax
085366e9 +0x817:  mov    (%eax),%edx
085366eb +0x819:  mov    -0x2c(%ebp),%eax
085366ee +0x81c:  mov    %eax,(%esp)
085366f1 +0x81f:  call   *%edx
085366f3 +0x821:  xor    $0x1,%eax
085366f6 +0x824:  test   %al,%al
085366f8 +0x826:  je     0853671a <+0x848>
085366fa +0x828:  mov    -0x2c(%ebp),%eax
085366fd +0x82b:  mov    (%eax),%eax
085366ff +0x82d:  add    $0x10,%eax
08536702 +0x830:  mov    (%eax),%edx
08536704 +0x832:  mov    -0x2c(%ebp),%eax
08536707 +0x835:  mov    %eax,(%esp)
0853670a +0x838:  call   *%edx
0853670c +0x83a:  xor    $0x1,%eax
0853670f +0x83d:  test   %al,%al
08536711 +0x83f:  je     0853671a <+0x848>
08536713 +0x841:  mov    $0x1,%eax
08536718 +0x846:  jmp    0853671f <+0x84d>
0853671a +0x848:  mov    $0x0,%eax
0853671f +0x84d:  test   %al,%al
08536721 +0x84f:  je     0853675d <+0x88b>
08536723 +0x851:  movzbl -0x1fc(%ebp),%ebx
0853672a +0x858:  mov    -0x2c(%ebp),%eax
0853672d +0x85b:  mov    %eax,(%esp)
08536730 +0x85e:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08536735 +0x863:  mov    %ebx,%edx
08536737 +0x865:  sub    %eax,%edx
08536739 +0x867:  mov    0x8(%ebp),%eax
0853673c +0x86a:  add    $0x10,%eax
0853673f +0x86d:  mov    %edx,0x4(%esp)
08536743 +0x871:  mov    %eax,(%esp)
08536746 +0x874:  call   08533932 <_ZN8WongWork21GenerateRandomUpgrade18generateEquipGradeEi>  ; WongWork::GenerateRandomUpgrade::generateEquipGrade(int)
0853674b +0x879:  mov    %eax,0x4(%esp)
0853674f +0x87d:  lea    -0xed(%ebp),%eax
08536755 +0x883:  mov    %eax,(%esp)
08536758 +0x886:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0853675d +0x88b:  mov    -0x2c(%ebp),%eax
08536760 +0x88e:  mov    (%eax),%eax
08536762 +0x890:  add    $0x5c,%eax
08536765 +0x893:  mov    (%eax),%edx
08536767 +0x895:  mov    -0x2c(%ebp),%eax
0853676a +0x898:  mov    %eax,(%esp)
0853676d +0x89b:  call   *%edx
0853676f +0x89d:  test   %al,%al
08536771 +0x89f:  je     08536792 <+0x8c0>
08536773 +0x8a1:  lea    -0xed(%ebp),%eax
08536779 +0x8a7:  add    $0x11,%eax
0853677c +0x8aa:  mov    %eax,(%esp)
0853677f +0x8ad:  call   081507cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x101>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x101
08536784 +0x8b2:  xor    $0x1,%eax
08536787 +0x8b5:  test   %al,%al
08536789 +0x8b7:  je     08536792 <+0x8c0>
0853678b +0x8b9:  mov    $0x1,%eax
08536790 +0x8be:  jmp    08536797 <+0x8c5>
08536792 +0x8c0:  mov    $0x0,%eax
08536797 +0x8c5:  test   %al,%al
08536799 +0x8c7:  je     085367f1 <+0x91f>
0853679b +0x8c9:  movzbl -0x1fc(%ebp),%ebx
085367a2 +0x8d0:  mov    -0x2c(%ebp),%eax
085367a5 +0x8d3:  mov    %eax,(%esp)
085367a8 +0x8d6:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
085367ad +0x8db:  sub    %eax,%ebx
085367af +0x8dd:  mov    -0x2c(%ebp),%eax
085367b2 +0x8e0:  mov    %eax,(%esp)
085367b5 +0x8e3:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
085367ba +0x8e8:  mov    0x8(%ebp),%edx
085367bd +0x8eb:  add    $0x10,%edx
085367c0 +0x8ee:  mov    %ebx,0x8(%esp)
085367c4 +0x8f2:  mov    %eax,0x4(%esp)
085367c8 +0x8f6:  mov    %edx,(%esp)
085367cb +0x8f9:  call   08533676 <_ZN8WongWork21GenerateRandomUpgrade15generateUpgradeE11ENUM_RARITYi>  ; WongWork::GenerateRandomUpgrade::generateUpgrade(ENUM_RARITY, int)
085367d0 +0x8fe:  mov    %eax,-0x1c(%ebp)
085367d3 +0x901:  cmpl   $0x0,-0x1c(%ebp)
085367d7 +0x905:  jle    085367f1 <+0x91f>
085367d9 +0x907:  mov    -0x1c(%ebp),%eax
085367dc +0x90a:  movzbl %al,%eax
085367df +0x90d:  mov    %eax,0x4(%esp)
085367e3 +0x911:  lea    -0xed(%ebp),%eax
085367e9 +0x917:  mov    %eax,(%esp)
085367ec +0x91a:  call   080f0ffc <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x7e>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x7e
085367f1 +0x91f:  mov    0x28(%ebp),%eax
085367f4 +0x922:  mov    %eax,(%esp)
085367f7 +0x925:  call   0817a65e <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6dc>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x6dc
085367fc +0x92a:  mov    %eax,%esi
085367fe +0x92c:  mov    -0x2c(%ebp),%eax
08536801 +0x92f:  mov    %eax,(%esp)
08536804 +0x932:  call   08110c54 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x166>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x166
08536809 +0x937:  mov    %eax,%ebx
0853680b +0x939:  mov    -0x2c(%ebp),%eax
0853680e +0x93c:  mov    %eax,(%esp)
08536811 +0x93f:  call   080f12d6 <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x358>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x358
08536816 +0x944:  mov    %eax,%edx
08536818 +0x946:  movzbl -0xec(%ebp),%eax
0853681f +0x94d:  movzbl %al,%eax
08536822 +0x950:  mov    0x28(%ebp),%ecx
08536825 +0x953:  add    $0xc,%ecx
08536828 +0x956:  mov    %esi,0x10(%esp)
0853682c +0x95a:  mov    %ebx,0xc(%esp)
08536830 +0x95e:  mov    %edx,0x8(%esp)
08536834 +0x962:  mov    %eax,0x4(%esp)
08536838 +0x966:  mov    %ecx,(%esp)
0853683b +0x969:  call   08550b14 <_ZN10CLuckPoint12UseLuckPointEiiii>  ; CLuckPoint::UseLuckPoint(int, int, int, int)
08536840 +0x96e:  mov    0x28(%ebp),%eax
08536843 +0x971:  lea    -0xed(%ebp),%edx
08536849 +0x977:  mov    %edx,0x4(%esp)
0853684d +0x97b:  mov    %eax,(%esp)
08536850 +0x97e:  call   08237262 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xc90c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xc90c
08536855 +0x983:  jmp    0853685e <+0x98c>
08536857 +0x985:  nop
08536858 +0x986:  jmp    0853685e <+0x98c>
0853685a +0x988:  nop
0853685b +0x989:  jmp    0853685e <+0x98c>
0853685d +0x98b:  nop
0853685e +0x98c:  addl   $0x1,-0x50(%ebp)
08536862 +0x990:  cmpl   $0x4,-0x50(%ebp)
08536866 +0x994:  setle  %al
08536869 +0x997:  test   %al,%al
0853686b +0x999:  jne    085362c2 <+0x3f0>
08536871 +0x99f:  jmp    08536877 <+0x9a5>
08536873 +0x9a1:  nop
08536874 +0x9a2:  jmp    08536877 <+0x9a5>
08536876 +0x9a4:  nop
08536877 +0x9a5:  add    $0x24c,%esp
0853687d +0x9ab:  pop    %ebx
0853687e +0x9ac:  pop    %esi
0853687f +0x9ad:  pop    %edi
08536880 +0x9ae:  pop    %ebp
08536881 +0x9af:  ret
```

## 反编译 C

```c
// WongWork::CMonsterDrop::_generateRandomItem @ 0x8535ed2

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CMonsterDrop::_generateRandomItem(unsigned char, char, unsigned char, unsigned char,
   unsigned char, int, int, WongWork::stGenerateResult_t&, bool&) */

void __thiscall
WongWork::CMonsterDrop::_generateRandomItem
          (CMonsterDrop *this,uchar param_1,char param_2,uchar param_3,uchar param_4,uchar param_5,
          int param_6,int param_7,stGenerateResult_t *param_8,bool *param_9)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  CDataManager *pCVar8;
  CAutoMarketConditionsControl *this_00;
  undefined4 uVar9;
  CItemGeneratorMgr *pCVar10;
  int iVar11;
  uint uVar12;
  Inven_Item *pIVar13;
  bool bVar14;
  byte bVar15;
  longdouble lVar16;
  Inven_Item local_1f1;
  Inven_Item local_1f0;
  undefined4 uStack_1ef;
  Inven_Item local_f1;
  byte local_f0;
  int local_ef;
  stAmplifyOption_t asStack_e0 [44];
  CMonsterDrop local_b4 [24];
  ushort local_9c;
  ushort local_9a;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_8c [4];
  undefined4 local_7c;
  int local_78 [5];
  int local_64;
  float local_60;
  int *local_5c;
  int local_58;
  int local_54;
  float local_50;
  CMonsterDrop *local_4c;
  float local_48;
  int local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  CItem *local_30;
  double local_2c;
  int local_20;
  
  bVar15 = 0;
  local_78[4] = _getGenItemProbIdx(this,(uint)param_3);
  if (-1 < local_78[4]) {
    puVar3 = (undefined4 *)
             std::
             vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
             ::operator[]((vector<WongWork::CMonsterDrop::stGenItemProb_t,std::allocator<WongWork::CMonsterDrop::stGenItemProb_t>>
                           *)(this + 0x24),local_78[4]);
    local_94 = *puVar3;
    local_90 = puVar3[1];
    local_8c[0] = puVar3[2];
    local_8c[1] = puVar3[3];
    local_8c[2] = puVar3[4];
    local_8c[3] = puVar3[5];
    local_7c = puVar3[6];
    bVar1 = param_5 - 1;
    local_64 = (int)ROUND(*(float *)(this + (bVar1 + 0x28) * 4 + 8) *
                          *(float *)(this + (param_2 + 0x54) * 4 + 0xc) *
                          *(float *)(this + (param_4 + 0x3c) * 4 + 8) * (float)local_8c[0]);
    local_78[0] = 0;
    piVar4 = std::max<int>(local_78,&param_6);
    local_78[1] = 100;
    piVar4 = std::min<int>(local_78 + 1,piVar4);
    param_6 = *piVar4;
    if (0x32 < param_6) {
      local_60 = _DAT_08c9a6d4 + _DAT_08c9a6d0 * (float)(param_6 + -0x32);
      local_64 = (int)ROUND((1.0 - local_60) * (float)local_64);
    }
    local_64 = (local_64 * param_7) / 100;
    iVar5 = CGenerateRandomNumber::generateNumber((CGenerateRandomNumber *)(this + 8),0,10000);
    if (iVar5 < local_64) {
      local_5c = (int *)CGeneratorCommonData::getGoldGenTable
                                  (*(CGeneratorCommonData **)(this + 4),param_1);
      iVar5 = *local_5c;
      iVar11 = *local_5c;
      iVar6 = GetRandomRange(-local_5c[1],local_5c[1]);
      local_98 = iVar5 + (iVar11 * iVar6) / 100;
      Inven_Item::Inven_Item(&local_1f1);
      local_1f0 = (Inven_Item)0x2;
      uStack_1ef = 0;
      local_78[2] = 1;
      piVar4 = std::max<int>(local_78 + 2,&local_98);
      Inven_Item::set_add_info(&local_1f1,*piVar4);
      if (param_2 == '\x03') {
        local_9a = 0;
        local_9c = 0;
        cVar2 = _getBossGoldDrop(this,bVar1,&local_9a,&local_9c);
        if (cVar2 == '\0') {
          std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                    ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_1f1);
        }
        else {
          local_98 = (int)((uint)local_9c * local_98) / 100;
          local_78[3] = 1;
          piVar4 = std::max<int>(local_78 + 3,&local_98);
          Inven_Item::set_add_info(&local_1f1,*piVar4);
          for (local_58 = 0; local_58 < (int)(uint)local_9a; local_58 = local_58 + 1) {
            std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                      ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_1f1);
          }
        }
      }
      else {
        std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                  ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_1f1);
      }
    }
    if (*param_9 == false) {
      for (local_54 = 1; local_54 < 5; local_54 = local_54 + 1) {
        local_50 = 1.0;
        uVar7 = 0;
        do {
          *(undefined4 *)(local_b4 + uVar7) = 0;
          uVar7 = uVar7 + 4;
        } while (uVar7 < 0x18);
        local_4c = this + local_54 * 0x18 + 0x30;
        if (local_54 == 2) {
          pCVar8 = (CDataManager *)G_CDataManager();
          this_00 = (CAutoMarketConditionsControl *)
                    CDataManager::GetAutoMarketContitionsControl(pCVar8);
          lVar16 = (longdouble)CAutoMarketConditionsControl::GetItemDropRate(this_00,local_78[4]);
          local_50 = (float)lVar16;
          local_2c = 0.0;
          if (local_50 != 0.0) {
            local_2c = (double)(1.0 / local_50 - 1.0);
          }
          iVar5 = local_54 * 0x18;
          pCVar8 = (CDataManager *)G_CDataManager();
          piVar4 = (int *)CDataManager::GetAutoMarketContitionsControl(pCVar8);
          cVar2 = CAutoMarketConditionsControl::ChangeItemRarity
                            (piVar4,(int *)(this + iVar5 + 0x30),(int)local_b4,
                             (double)CONCAT44(SUB84(local_2c,0),6));
          if (cVar2 != '\0') {
            local_4c = local_b4;
          }
        }
        local_48 = (float)local_8c[local_54];
        if (local_54 == 2) {
          local_48 = local_48 * (float)*(int *)(this + 0x259380) * *(float *)(this + 0x259384);
        }
        local_44 = ((int)ROUND(*(float *)(this + (local_54 * 4 + (uint)bVar1 + 0x28) * 4 + 8) *
                               *(float *)(this + (local_54 * 4 + (int)param_2 + 0x54) * 4 + 0xc) *
                               *(float *)(this + (local_54 * 5 + (uint)param_4 + 0x3c) * 4 + 8) *
                               local_48 * local_50) * param_7) / 100;
        local_40 = CGenerateRandomNumber::generateNumber
                             ((CGenerateRandomNumber *)(this + 8),0,10000);
        if (local_40 <= local_44) {
          local_3c = CGenerateRandomNumber::generateNumber
                               ((CGenerateRandomNumber *)(this + 8),1,1000000);
          local_38 = CLuckPoint::GetItemRarity
                               ((CLuckPoint *)(param_8 + 0xc),(int *)local_4c,local_3c,local_54);
          iVar5 = local_54;
          uVar9 = CItemGenerator::getGeneratorType((CItemGenerator *)this);
          pCVar8 = (CDataManager *)G_CDataManager();
          pCVar10 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar8);
          CItemGeneratorMgr::onTryGenerateRandomItem(pCVar10,uVar9,iVar5,local_38);
          local_34 = CItemGenRateTable::chooseItem
                               ((CItemGenRateTable *)(this + 0x340),local_54,local_38,param_1);
          if (local_34 != -1) {
            if (local_54 == 2) {
              pIVar13 = &local_1f1;
              uVar7 = 0x100;
              bVar14 = ((uint)pIVar13 & 1) != 0;
              if (bVar14) {
                local_1f1 = (Inven_Item)0x0;
                pIVar13 = &local_1f0;
                uVar7 = 0xff;
              }
              if (((uint)pIVar13 & 2) != 0) {
                *(undefined2 *)pIVar13 = 0;
                pIVar13 = pIVar13 + 2;
                uVar7 = uVar7 - 2;
              }
              for (uVar12 = uVar7 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
                *(undefined4 *)pIVar13 = 0;
                pIVar13 = pIVar13 + ((uint)bVar15 * -2 + 1) * 4;
              }
              if ((uVar7 & 2) != 0) {
                *(undefined2 *)pIVar13 = 0;
                pIVar13 = pIVar13 + 2;
              }
              if (bVar14) {
                *pIVar13 = (Inven_Item)0x0;
              }
              sprintf((char *)&local_1f1,
                      "monster drop rate : item_id(%d), mon_lv(%d), role(%d), dungeon_lv(%d), dungeon_diff(%d), member_cnt(%d), bourgeois_rate(%d), drop_rate(%d), rand_value(%d), drop_value(%d)"
                      ,local_34,(uint)param_1,(int)param_2,(uint)param_3,(uint)param_4,(uint)bVar1,
                      param_6,param_7,local_40,local_44);
              CLuckPoint::sendItemDropRate((CLuckPoint *)(param_8 + 0xc),(char *)&local_1f1);
            }
            iVar5 = G_CDataManager();
            local_30 = (CItem *)CItemList::find_item(*(CItemList **)(iVar5 + 0xc),local_34);
            if (local_30 != (CItem *)0x0) {
              Inven_Item::Inven_Item(&local_f1);
              local_ef = local_34;
              iVar5 = G_CDataManager();
              CItemList::create_item(*(CItemList **)(iVar5 + 0xc),1,&local_f1,1);
              if (local_54 == 2) {
                cVar2 = (**(code **)(*(int *)local_30 + 0x14))(local_30);
                if ((cVar2 == '\x01') ||
                   (cVar2 = (**(code **)(*(int *)local_30 + 0x10))(local_30), cVar2 == '\x01')) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                if (bVar14) {
                  iVar5 = CItem::get_grade(local_30);
                  iVar5 = GenerateRandomUpgrade::generateEquipGrade
                                    ((GenerateRandomUpgrade *)(this + 0x10),(uint)param_1 - iVar5);
                  Inven_Item::set_add_info(&local_f1,iVar5);
                }
                cVar2 = (**(code **)(*(int *)local_30 + 0x5c))(local_30);
                if ((cVar2 == '\0') ||
                   (cVar2 = stAmplifyOption_t::hasAbility(asStack_e0), cVar2 == '\x01')) {
                  bVar14 = false;
                }
                else {
                  bVar14 = true;
                }
                if (bVar14) {
                  iVar5 = CItem::get_grade(local_30);
                  uVar9 = CItem::get_rarity(local_30);
                  local_20 = GenerateRandomUpgrade::generateUpgrade
                                       ((GenerateRandomUpgrade *)(this + 0x10),uVar9,
                                        (uint)param_1 - iVar5);
                  if (0 < local_20) {
                    Inven_Item::SetUpgrade(&local_f1,(uchar)local_20);
                  }
                }
              }
              std::vector<Inven_Item,std::allocator<Inven_Item>>::size
                        ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8);
              iVar5 = CItem::get_grade(local_30);
              iVar11 = CItem::get_rarity(local_30);
              CLuckPoint::UseLuckPoint((int)(param_8 + 0xc),(uint)local_f0,iVar11,iVar5);
              std::vector<Inven_Item,std::allocator<Inven_Item>>::push_back
                        ((vector<Inven_Item,std::allocator<Inven_Item>> *)param_8,&local_f1);
            }
          }
        }
      }
    }
  }
  return;
}
```
