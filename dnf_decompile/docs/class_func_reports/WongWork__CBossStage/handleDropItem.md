# handleDropItem

`_ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii`

`WongWork::CBossStage::handleDropItem(CUser*, int, int, char, int, int)`

| 类 | 地址 |
|---|---|
| `WongWork::CBossStage` | `0x0814ff4a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0814ff4a  _ZN8WongWork10CBossStage14handleDropItemEP5CUseriicii
#           WongWork::CBossStage::handleDropItem(CUser*, int, int, char, int, int)
# range [0x0814ff4a, 0x08150387]
0814ff4a +0x000:  push   %ebp
0814ff4b +0x001:  mov    %esp,%ebp
0814ff4d +0x003:  push   %edi
0814ff4e +0x004:  push   %esi
0814ff4f +0x005:  push   %ebx
0814ff50 +0x006:  sub    $0xec,%esp
0814ff56 +0x00c:  mov    0x18(%ebp),%eax
0814ff59 +0x00f:  mov    %al,-0x8c(%ebp)
0814ff5f +0x015:  cmpl   $0x0,0x20(%ebp)
0814ff63 +0x019:  jns    0814ff6f <+0x25>
0814ff65 +0x01b:  mov    $0x0,%ebx
0814ff6a +0x020:  jmp    0815037b <+0x431>
0814ff6f +0x025:  lea    -0x28(%ebp),%eax
0814ff72 +0x028:  mov    %eax,(%esp)
0814ff75 +0x02b:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0814ff7a +0x030:  lea    -0x28(%ebp),%eax
0814ff7d +0x033:  mov    %eax,(%esp)
0814ff80 +0x036:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0814ff85 +0x03b:  lea    -0x7c(%ebp),%eax
0814ff88 +0x03e:  mov    %eax,(%esp)
0814ff8b +0x041:  call   081512cc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xc01>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xc01
0814ff90 +0x046:  movsbl -0x8c(%ebp),%eax
0814ff97 +0x04d:  lea    -0x7c(%ebp),%edx
0814ff9a +0x050:  mov    %edx,0x14(%esp)
0814ff9e +0x054:  mov    0x20(%ebp),%edx
0814ffa1 +0x057:  mov    %edx,0x10(%esp)
0814ffa5 +0x05b:  mov    0x1c(%ebp),%edx
0814ffa8 +0x05e:  mov    %edx,0xc(%esp)
0814ffac +0x062:  mov    %eax,0x8(%esp)
0814ffb0 +0x066:  mov    0xc(%ebp),%eax
0814ffb3 +0x069:  mov    %eax,0x4(%esp)
0814ffb7 +0x06d:  mov    0x8(%ebp),%eax
0814ffba +0x070:  mov    %eax,(%esp)
0814ffbd +0x073:  call   0814de1a <_ZN8WongWork10CBossStage8dropItemEP5CUserciiR8map_item>  ; WongWork::CBossStage::dropItem(CUser*, char, int, int, map_item&)
0814ffc2 +0x078:  xor    $0x1,%eax
0814ffc5 +0x07b:  test   %al,%al
0814ffc7 +0x07d:  je     08150053 <+0x109>
0814ffcd +0x083:  movl   $0x32,0x8(%esp)
0814ffd5 +0x08b:  movl   $0x1,0x4(%esp)
0814ffdd +0x093:  lea    -0x28(%ebp),%eax
0814ffe0 +0x096:  mov    %eax,(%esp)
0814ffe3 +0x099:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0814ffe8 +0x09e:  movl   $0x0,0x4(%esp)
0814fff0 +0x0a6:  lea    -0x28(%ebp),%eax
0814fff3 +0x0a9:  mov    %eax,(%esp)
0814fff6 +0x0ac:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0814fffb +0x0b1:  movl   $0x11,0x4(%esp)
08150003 +0x0b9:  lea    -0x28(%ebp),%eax
08150006 +0x0bc:  mov    %eax,(%esp)
08150009 +0x0bf:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0815000e +0x0c4:  movsbl -0x8c(%ebp),%eax
08150015 +0x0cb:  mov    %eax,0x4(%esp)
08150019 +0x0cf:  lea    -0x28(%ebp),%eax
0815001c +0x0d2:  mov    %eax,(%esp)
0815001f +0x0d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08150024 +0x0da:  movl   $0x1,0x4(%esp)
0815002c +0x0e2:  lea    -0x28(%ebp),%eax
0815002f +0x0e5:  mov    %eax,(%esp)
08150032 +0x0e8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08150037 +0x0ed:  lea    -0x28(%ebp),%eax
0815003a +0x0f0:  mov    %eax,0x4(%esp)
0815003e +0x0f4:  mov    0xc(%ebp),%eax
08150041 +0x0f7:  mov    %eax,(%esp)
08150044 +0x0fa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08150049 +0x0ff:  mov    $0x0,%ebx
0815004e +0x104:  jmp    08150370 <+0x426>
08150053 +0x109:  mov    0x8(%ebp),%eax
08150056 +0x10c:  mov    0xa34(%eax),%eax
0815005c +0x112:  mov    %eax,-0x1c(%ebp)
0815005f +0x115:  lea    0x1(%eax),%edx
08150062 +0x118:  mov    0x8(%ebp),%eax
08150065 +0x11b:  mov    %edx,0xa34(%eax)
0815006b +0x121:  cmpl   $0xffffffff,-0x1c(%ebp)
0815006f +0x125:  jne    081500fb <+0x1b1>
08150075 +0x12b:  movl   $0x32,0x8(%esp)
0815007d +0x133:  movl   $0x1,0x4(%esp)
08150085 +0x13b:  lea    -0x28(%ebp),%eax
08150088 +0x13e:  mov    %eax,(%esp)
0815008b +0x141:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08150090 +0x146:  movl   $0x0,0x4(%esp)
08150098 +0x14e:  lea    -0x28(%ebp),%eax
0815009b +0x151:  mov    %eax,(%esp)
0815009e +0x154:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081500a3 +0x159:  movl   $0x11,0x4(%esp)
081500ab +0x161:  lea    -0x28(%ebp),%eax
081500ae +0x164:  mov    %eax,(%esp)
081500b1 +0x167:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081500b6 +0x16c:  movsbl -0x8c(%ebp),%eax
081500bd +0x173:  mov    %eax,0x4(%esp)
081500c1 +0x177:  lea    -0x28(%ebp),%eax
081500c4 +0x17a:  mov    %eax,(%esp)
081500c7 +0x17d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081500cc +0x182:  movl   $0x1,0x4(%esp)
081500d4 +0x18a:  lea    -0x28(%ebp),%eax
081500d7 +0x18d:  mov    %eax,(%esp)
081500da +0x190:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081500df +0x195:  lea    -0x28(%ebp),%eax
081500e2 +0x198:  mov    %eax,0x4(%esp)
081500e6 +0x19c:  mov    0xc(%ebp),%eax
081500e9 +0x19f:  mov    %eax,(%esp)
081500ec +0x1a2:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081500f1 +0x1a7:  mov    $0x0,%ebx
081500f6 +0x1ac:  jmp    08150370 <+0x426>
081500fb +0x1b1:  mov    -0x1c(%ebp),%eax
081500fe +0x1b4:  mov    %eax,-0x78(%ebp)
08150101 +0x1b7:  mov    0x8(%ebp),%eax
08150104 +0x1ba:  add    $0x9f4,%eax
08150109 +0x1bf:  mov    %eax,-0x90(%ebp)
0815010f +0x1c5:  lea    0x4(%esp),%edx
08150113 +0x1c9:  lea    -0x7c(%ebp),%ebx
08150116 +0x1cc:  mov    $0x15,%eax
0815011b +0x1d1:  mov    %edx,%edi
0815011d +0x1d3:  mov    %ebx,%esi
0815011f +0x1d5:  mov    %eax,%ecx
08150121 +0x1d7:  rep movsl %ds:(%esi),%es:(%edi)
08150123 +0x1d9:  mov    -0x90(%ebp),%eax
08150129 +0x1df:  mov    %eax,(%esp)
0815012c +0x1e2:  call   081517e0 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x1115>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x1115
08150131 +0x1e7:  movl   $0x28,0x8(%esp)
08150139 +0x1ef:  movl   $0x0,0x4(%esp)
08150141 +0x1f7:  lea    -0x28(%ebp),%eax
08150144 +0x1fa:  mov    %eax,(%esp)
08150147 +0x1fd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0815014c +0x202:  mov    0xc(%ebp),%eax
0815014f +0x205:  mov    %eax,(%esp)
08150152 +0x208:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
08150157 +0x20d:  movzwl %ax,%eax
0815015a +0x210:  mov    %eax,0x4(%esp)
0815015e +0x214:  lea    -0x28(%ebp),%eax
08150161 +0x217:  mov    %eax,(%esp)
08150164 +0x21a:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08150169 +0x21f:  mov    0x10(%ebp),%eax
0815016c +0x222:  mov    %eax,0x4(%esp)
08150170 +0x226:  lea    -0x28(%ebp),%eax
08150173 +0x229:  mov    %eax,(%esp)
08150176 +0x22c:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0815017b +0x231:  mov    0x14(%ebp),%eax
0815017e +0x234:  mov    %eax,0x4(%esp)
08150182 +0x238:  lea    -0x28(%ebp),%eax
08150185 +0x23b:  mov    %eax,(%esp)
08150188 +0x23e:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0815018d +0x243:  mov    -0x78(%ebp),%eax
08150190 +0x246:  mov    %eax,0x4(%esp)
08150194 +0x24a:  lea    -0x28(%ebp),%eax
08150197 +0x24d:  mov    %eax,(%esp)
0815019a +0x250:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
0815019f +0x255:  mov    -0x6a(%ebp),%eax
081501a2 +0x258:  mov    %eax,0x4(%esp)
081501a6 +0x25c:  lea    -0x28(%ebp),%eax
081501a9 +0x25f:  mov    %eax,(%esp)
081501ac +0x262:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081501b1 +0x267:  lea    -0x7c(%ebp),%eax
081501b4 +0x26a:  add    $0x10,%eax
081501b7 +0x26d:  mov    %eax,(%esp)
081501ba +0x270:  call   081507dc <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x111>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x111
081501bf +0x275:  movzbl %al,%eax
081501c2 +0x278:  mov    %eax,0x4(%esp)
081501c6 +0x27c:  lea    -0x28(%ebp),%eax
081501c9 +0x27f:  mov    %eax,(%esp)
081501cc +0x282:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081501d1 +0x287:  lea    -0x7c(%ebp),%eax
081501d4 +0x28a:  add    $0x10,%eax
081501d7 +0x28d:  mov    %eax,(%esp)
081501da +0x290:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
081501df +0x295:  mov    %eax,0x4(%esp)
081501e3 +0x299:  lea    -0x28(%ebp),%eax
081501e6 +0x29c:  mov    %eax,(%esp)
081501e9 +0x29f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081501ee +0x2a4:  movzwl -0x61(%ebp),%eax
081501f2 +0x2a8:  movzwl %ax,%eax
081501f5 +0x2ab:  mov    %eax,0x4(%esp)
081501f9 +0x2af:  lea    -0x28(%ebp),%eax
081501fc +0x2b2:  mov    %eax,(%esp)
081501ff +0x2b5:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08150204 +0x2ba:  mov    -0x5f(%ebp),%eax
08150207 +0x2bd:  mov    %eax,0x4(%esp)
0815020b +0x2c1:  lea    -0x28(%ebp),%eax
0815020e +0x2c4:  mov    %eax,(%esp)
08150211 +0x2c7:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08150216 +0x2cc:  lea    -0x7c(%ebp),%eax
08150219 +0x2cf:  add    $0x21,%eax
0815021c +0x2d2:  mov    %eax,(%esp)
0815021f +0x2d5:  call   08150732 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x67>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x67
08150224 +0x2da:  movzbl %al,%eax
08150227 +0x2dd:  mov    %eax,0x4(%esp)
0815022b +0x2e1:  lea    -0x28(%ebp),%eax
0815022e +0x2e4:  mov    %eax,(%esp)
08150231 +0x2e7:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08150236 +0x2ec:  lea    -0x7c(%ebp),%eax
08150239 +0x2ef:  add    $0x21,%eax
0815023c +0x2f2:  mov    %eax,(%esp)
0815023f +0x2f5:  call   08150772 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0xa7>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0xa7
08150244 +0x2fa:  movzwl %ax,%eax
08150247 +0x2fd:  mov    %eax,0x4(%esp)
0815024b +0x301:  lea    -0x28(%ebp),%eax
0815024e +0x304:  mov    %eax,(%esp)
08150251 +0x307:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08150256 +0x30c:  lea    -0x7c(%ebp),%eax
08150259 +0x30f:  add    $0x10,%eax
0815025c +0x312:  mov    %eax,0x4(%esp)
08150260 +0x316:  lea    -0x28(%ebp),%eax
08150263 +0x319:  mov    %eax,(%esp)
08150266 +0x31c:  call   0815098e <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x2c3>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x2c3
0815026b +0x321:  movzbl -0x7c(%ebp),%eax
0815026f +0x325:  test   %al,%al
08150271 +0x327:  je     0815027a <+0x330>
08150273 +0x329:  mov    $0x0,%eax
08150278 +0x32e:  jmp    0815027f <+0x335>
0815027a +0x330:  mov    $0x1,%eax
0815027f +0x335:  mov    %eax,0x4(%esp)
08150283 +0x339:  lea    -0x28(%ebp),%eax
08150286 +0x33c:  mov    %eax,(%esp)
08150289 +0x33f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0815028e +0x344:  movl   $0x1,0x4(%esp)
08150296 +0x34c:  lea    -0x28(%ebp),%eax
08150299 +0x34f:  mov    %eax,(%esp)
0815029c +0x352:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081502a1 +0x357:  mov    0x8(%ebp),%eax
081502a4 +0x35a:  mov    0x4(%eax),%eax
081502a7 +0x35d:  lea    -0x28(%ebp),%edx
081502aa +0x360:  mov    %edx,0x4(%esp)
081502ae +0x364:  mov    %eax,(%esp)
081502b1 +0x367:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
081502b6 +0x36c:  lea    -0x28(%ebp),%eax
081502b9 +0x36f:  mov    %eax,(%esp)
081502bc +0x372:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
081502c1 +0x377:  movl   $0x32,0x8(%esp)
081502c9 +0x37f:  movl   $0x1,0x4(%esp)
081502d1 +0x387:  lea    -0x28(%ebp),%eax
081502d4 +0x38a:  mov    %eax,(%esp)
081502d7 +0x38d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081502dc +0x392:  movl   $0x1,0x4(%esp)
081502e4 +0x39a:  lea    -0x28(%ebp),%eax
081502e7 +0x39d:  mov    %eax,(%esp)
081502ea +0x3a0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081502ef +0x3a5:  movsbl -0x8c(%ebp),%eax
081502f6 +0x3ac:  mov    %eax,0x4(%esp)
081502fa +0x3b0:  lea    -0x28(%ebp),%eax
081502fd +0x3b3:  mov    %eax,(%esp)
08150300 +0x3b6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08150305 +0x3bb:  mov    0x1c(%ebp),%eax
08150308 +0x3be:  mov    %eax,0x4(%esp)
0815030c +0x3c2:  lea    -0x28(%ebp),%eax
0815030f +0x3c5:  mov    %eax,(%esp)
08150312 +0x3c8:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08150317 +0x3cd:  mov    0x20(%ebp),%eax
0815031a +0x3d0:  mov    %eax,0x4(%esp)
0815031e +0x3d4:  lea    -0x28(%ebp),%eax
08150321 +0x3d7:  mov    %eax,(%esp)
08150324 +0x3da:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08150329 +0x3df:  movl   $0x1,0x4(%esp)
08150331 +0x3e7:  lea    -0x28(%ebp),%eax
08150334 +0x3ea:  mov    %eax,(%esp)
08150337 +0x3ed:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0815033c +0x3f2:  lea    -0x28(%ebp),%eax
0815033f +0x3f5:  mov    %eax,0x4(%esp)
08150343 +0x3f9:  mov    0xc(%ebp),%eax
08150346 +0x3fc:  mov    %eax,(%esp)
08150349 +0x3ff:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0815034e +0x404:  mov    $0x1,%ebx
08150353 +0x409:  jmp    08150370 <+0x426>
08150355 +0x40b:  mov    %edx,%ebx
08150357 +0x40d:  mov    %eax,%esi
08150359 +0x40f:  lea    -0x28(%ebp),%eax
0815035c +0x412:  mov    %eax,(%esp)
0815035f +0x415:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08150364 +0x41a:  mov    %esi,%eax
08150366 +0x41c:  mov    %ebx,%edx
08150368 +0x41e:  mov    %eax,(%esp)
0815036b +0x421:  call   08ae3750 <_Unwind_Resume>
08150370 +0x426:  lea    -0x28(%ebp),%eax
08150373 +0x429:  mov    %eax,(%esp)
08150376 +0x42c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0815037b +0x431:  mov    %ebx,%eax
0815037d +0x433:  add    $0xec,%esp
08150383 +0x439:  pop    %ebx
08150384 +0x43a:  pop    %esi
08150385 +0x43b:  pop    %edi
08150386 +0x43c:  pop    %ebp
08150387 +0x43d:  ret
```

## 反编译 C

```c
// WongWork::CBossStage::handleDropItem @ 0x814ff4a

/* WongWork::CBossStage::handleDropItem(CUser*, int, int, char, int, int) */

undefined4 __thiscall
WongWork::CBossStage::handleDropItem
          (CBossStage *this,CUser *param_1,int param_2,int param_3,char param_4,int param_5,
          int param_6)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  map_item *pmVar5;
  undefined4 *puVar6;
  byte bVar7;
  map_item local_80 [4];
  int local_7c;
  Inven_Item aIStack_70 [2];
  int local_6e;
  ushort local_65;
  int local_63;
  stAmplifyOption_t asStack_5f [51];
  PacketGuard local_2c [12];
  int local_20;
  
  bVar7 = 0;
  if (param_6 < 0) {
    uVar4 = 0;
  }
  else {
    PacketGuard::PacketGuard(local_2c);
                    /* try { // try from 0814ff80 to 0815034d has its CatchHandler @ 08150355 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
    map_item::map_item(local_80);
    cVar1 = dropItem(this,param_1,param_4,param_5,param_6,local_80);
    if (cVar1 == '\x01') {
      local_20 = *(int *)(this + 0xa34);
      *(int *)(this + 0xa34) = local_20 + 1;
      if (local_20 == -1) {
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0x11);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)param_4);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(param_1,local_2c);
        uVar4 = 0;
      }
      else {
        local_7c = local_20;
        pmVar5 = local_80;
        puVar6 = (undefined4 *)&stack0xffffff08;
        for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar6 = *(undefined4 *)pmVar5;
          pmVar5 = pmVar5 + ((uint)bVar7 * -2 + 1) * 4;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
        MapInfo::Add_Item(this + 0x9f4);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,0,0x28);
        uVar2 = CUser::get_unique_id(param_1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar2 & 0xffff);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,param_2);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,param_3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,local_7c);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_6e);
        uVar2 = Inven_Item::GetItemAttr(aIStack_70);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar2 & 0xff);
        iVar3 = Inven_Item::get_add_info(aIStack_70);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,iVar3);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(uint)local_65);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,local_63);
        uVar2 = stAmplifyOption_t::getAbilityType(asStack_5f);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,uVar2 & 0xff);
        uVar2 = stAmplifyOption_t::getAbilityValue(asStack_5f);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,uVar2 & 0xffff);
        InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_2c,aIStack_70);
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_2c,(uint)(local_80[0] == (map_item)0x0));
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CParty::send_to_party(*(CParty **)(this + 4),local_2c);
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_2c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x32);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)param_4);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,param_5);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,param_6);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
        CUser::Send(param_1,local_2c);
        uVar4 = 1;
      }
    }
    else {
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x32);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0x11);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)param_4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
      uVar4 = 0;
    }
    PacketGuard::~PacketGuard(local_2c);
  }
  return uVar4;
}
```
