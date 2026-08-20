# MakePacketSocre

`_ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi`

`fair_pvp::CFairPvPScore::MakePacketSocre(PacketGuard&, int) const`

| 类 | 地址 |
|---|---|
| `fair_pvp::CFairPvPScore` | `0x084a5cc2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a5cc2  _ZNK8fair_pvp13CFairPvPScore15MakePacketSocreER11PacketGuardi
#           fair_pvp::CFairPvPScore::MakePacketSocre(PacketGuard&, int) const
# range [0x084a5cc2, 0x084a5fd7]
084a5cc2 +0x000:  push   %ebp
084a5cc3 +0x001:  mov    %esp,%ebp
084a5cc5 +0x003:  sub    $0x38,%esp
084a5cc8 +0x006:  mov    0xc(%ebp),%eax
084a5ccb +0x009:  mov    0x10(%ebp),%edx
084a5cce +0x00c:  mov    %edx,0x4(%esp)
084a5cd2 +0x010:  mov    %eax,(%esp)
084a5cd5 +0x013:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5cda +0x018:  mov    0x8(%ebp),%eax
084a5cdd +0x01b:  mov    0x28(%eax),%eax
084a5ce0 +0x01e:  mov    %eax,%edx
084a5ce2 +0x020:  mov    0xc(%ebp),%eax
084a5ce5 +0x023:  mov    %edx,0x4(%esp)
084a5ce9 +0x027:  mov    %eax,(%esp)
084a5cec +0x02a:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5cf1 +0x02f:  mov    0x8(%ebp),%eax
084a5cf4 +0x032:  mov    0x34(%eax),%eax
084a5cf7 +0x035:  mov    %eax,%edx
084a5cf9 +0x037:  mov    0xc(%ebp),%eax
084a5cfc +0x03a:  mov    %edx,0x4(%esp)
084a5d00 +0x03e:  mov    %eax,(%esp)
084a5d03 +0x041:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5d08 +0x046:  movl   $0x0,-0x14(%ebp)
084a5d0f +0x04d:  movl   $0x0,-0x10(%ebp)
084a5d16 +0x054:  movl   $0x0,-0xc(%ebp)
084a5d1d +0x05b:  mov    0x8(%ebp),%eax
084a5d20 +0x05e:  lea    0x20(%eax),%edx
084a5d23 +0x061:  lea    -0x20(%ebp),%eax
084a5d26 +0x064:  mov    %edx,0x4(%esp)
084a5d2a +0x068:  mov    %eax,(%esp)
084a5d2d +0x06b:  call   084a6772 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x75a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x75a
084a5d32 +0x070:  sub    $0x4,%esp
084a5d35 +0x073:  jmp    084a5d97 <+0xd5>
084a5d37 +0x075:  lea    -0x20(%ebp),%eax
084a5d3a +0x078:  mov    %eax,(%esp)
084a5d3d +0x07b:  call   084a67e4 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7cc>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7cc
084a5d42 +0x080:  movzbl (%eax),%eax
084a5d45 +0x083:  cmp    $0x1,%al
084a5d47 +0x085:  sete   %al
084a5d4a +0x088:  test   %al,%al
084a5d4c +0x08a:  je     084a5d54 <+0x92>
084a5d4e +0x08c:  addl   $0x1,-0x14(%ebp)
084a5d52 +0x090:  jmp    084a5d8c <+0xca>
084a5d54 +0x092:  lea    -0x20(%ebp),%eax
084a5d57 +0x095:  mov    %eax,(%esp)
084a5d5a +0x098:  call   084a67e4 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7cc>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7cc
084a5d5f +0x09d:  movzbl (%eax),%eax
084a5d62 +0x0a0:  cmp    $0x2,%al
084a5d64 +0x0a2:  sete   %al
084a5d67 +0x0a5:  test   %al,%al
084a5d69 +0x0a7:  je     084a5d71 <+0xaf>
084a5d6b +0x0a9:  addl   $0x1,-0x10(%ebp)
084a5d6f +0x0ad:  jmp    084a5d8c <+0xca>
084a5d71 +0x0af:  lea    -0x20(%ebp),%eax
084a5d74 +0x0b2:  mov    %eax,(%esp)
084a5d77 +0x0b5:  call   084a67e4 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7cc>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7cc
084a5d7c +0x0ba:  movzbl (%eax),%eax
084a5d7f +0x0bd:  cmp    $0x3,%al
084a5d81 +0x0bf:  sete   %al
084a5d84 +0x0c2:  test   %al,%al
084a5d86 +0x0c4:  je     084a5d8c <+0xca>
084a5d88 +0x0c6:  addl   $0x1,-0xc(%ebp)
084a5d8c +0x0ca:  lea    -0x20(%ebp),%eax
084a5d8f +0x0cd:  mov    %eax,(%esp)
084a5d92 +0x0d0:  call   084a67d0 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7b8>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7b8
084a5d97 +0x0d5:  mov    0x8(%ebp),%eax
084a5d9a +0x0d8:  lea    0x20(%eax),%edx
084a5d9d +0x0db:  lea    -0x1c(%ebp),%eax
084a5da0 +0x0de:  mov    %edx,0x4(%esp)
084a5da4 +0x0e2:  mov    %eax,(%esp)
084a5da7 +0x0e5:  call   084a6798 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x780>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x780
084a5dac +0x0ea:  sub    $0x4,%esp
084a5daf +0x0ed:  lea    -0x1c(%ebp),%eax
084a5db2 +0x0f0:  mov    %eax,0x4(%esp)
084a5db6 +0x0f4:  lea    -0x20(%ebp),%eax
084a5db9 +0x0f7:  mov    %eax,(%esp)
084a5dbc +0x0fa:  call   084a67bc <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x7a4>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x7a4
084a5dc1 +0x0ff:  test   %al,%al
084a5dc3 +0x101:  jne    084a5d37 <+0x75>
084a5dc9 +0x107:  mov    0xc(%ebp),%eax
084a5dcc +0x10a:  mov    -0x14(%ebp),%edx
084a5dcf +0x10d:  mov    %edx,0x4(%esp)
084a5dd3 +0x111:  mov    %eax,(%esp)
084a5dd6 +0x114:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5ddb +0x119:  mov    0xc(%ebp),%eax
084a5dde +0x11c:  mov    -0x10(%ebp),%edx
084a5de1 +0x11f:  mov    %edx,0x4(%esp)
084a5de5 +0x123:  mov    %eax,(%esp)
084a5de8 +0x126:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5ded +0x12b:  mov    0xc(%ebp),%eax
084a5df0 +0x12e:  mov    -0xc(%ebp),%edx
084a5df3 +0x131:  mov    %edx,0x4(%esp)
084a5df7 +0x135:  mov    %eax,(%esp)
084a5dfa +0x138:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5dff +0x13d:  mov    0x8(%ebp),%eax
084a5e02 +0x140:  mov    0x48(%eax),%eax
084a5e05 +0x143:  mov    %eax,%edx
084a5e07 +0x145:  mov    0xc(%ebp),%eax
084a5e0a +0x148:  mov    %edx,0x4(%esp)
084a5e0e +0x14c:  mov    %eax,(%esp)
084a5e11 +0x14f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5e16 +0x154:  mov    0x8(%ebp),%eax
084a5e19 +0x157:  mov    0x40(%eax),%eax
084a5e1c +0x15a:  mov    %eax,%edx
084a5e1e +0x15c:  mov    0xc(%ebp),%eax
084a5e21 +0x15f:  mov    %edx,0x4(%esp)
084a5e25 +0x163:  mov    %eax,(%esp)
084a5e28 +0x166:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5e2d +0x16b:  mov    0x8(%ebp),%eax
084a5e30 +0x16e:  mov    0x44(%eax),%eax
084a5e33 +0x171:  mov    %eax,%edx
084a5e35 +0x173:  mov    0xc(%ebp),%eax
084a5e38 +0x176:  mov    %edx,0x4(%esp)
084a5e3c +0x17a:  mov    %eax,(%esp)
084a5e3f +0x17d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5e44 +0x182:  mov    0x8(%ebp),%eax
084a5e47 +0x185:  mov    0x4c(%eax),%eax
084a5e4a +0x188:  mov    %eax,%edx
084a5e4c +0x18a:  mov    0xc(%ebp),%eax
084a5e4f +0x18d:  mov    %edx,0x4(%esp)
084a5e53 +0x191:  mov    %eax,(%esp)
084a5e56 +0x194:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5e5b +0x199:  cmpl   $0x1,0x10(%ebp)
084a5e5f +0x19d:  jne    084a5fd6 <+0x314>
084a5e65 +0x1a3:  mov    0x8(%ebp),%eax
084a5e68 +0x1a6:  mov    0x2c(%eax),%eax
084a5e6b +0x1a9:  mov    %eax,%edx
084a5e6d +0x1ab:  mov    0xc(%ebp),%eax
084a5e70 +0x1ae:  mov    %edx,0x4(%esp)
084a5e74 +0x1b2:  mov    %eax,(%esp)
084a5e77 +0x1b5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5e7c +0x1ba:  mov    0x8(%ebp),%eax
084a5e7f +0x1bd:  mov    0x30(%eax),%eax
084a5e82 +0x1c0:  mov    %eax,%edx
084a5e84 +0x1c2:  mov    0xc(%ebp),%eax
084a5e87 +0x1c5:  mov    %edx,0x4(%esp)
084a5e8b +0x1c9:  mov    %eax,(%esp)
084a5e8e +0x1cc:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5e93 +0x1d1:  mov    0x8(%ebp),%eax
084a5e96 +0x1d4:  mov    0x38(%eax),%eax
084a5e99 +0x1d7:  mov    %eax,%edx
084a5e9b +0x1d9:  mov    0xc(%ebp),%eax
084a5e9e +0x1dc:  mov    %edx,0x4(%esp)
084a5ea2 +0x1e0:  mov    %eax,(%esp)
084a5ea5 +0x1e3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5eaa +0x1e8:  mov    0x8(%ebp),%eax
084a5ead +0x1eb:  mov    0x3c(%eax),%eax
084a5eb0 +0x1ee:  mov    %eax,%edx
084a5eb2 +0x1f0:  mov    0xc(%ebp),%eax
084a5eb5 +0x1f3:  mov    %edx,0x4(%esp)
084a5eb9 +0x1f7:  mov    %eax,(%esp)
084a5ebc +0x1fa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5ec1 +0x1ff:  mov    0x8(%ebp),%eax
084a5ec4 +0x202:  add    $0x8,%eax
084a5ec7 +0x205:  mov    %eax,(%esp)
084a5eca +0x208:  call   084a69a8 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x990>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x990
084a5ecf +0x20d:  mov    %eax,%edx
084a5ed1 +0x20f:  mov    0xc(%ebp),%eax
084a5ed4 +0x212:  mov    %edx,0x4(%esp)
084a5ed8 +0x216:  mov    %eax,(%esp)
084a5edb +0x219:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5ee0 +0x21e:  mov    0x8(%ebp),%eax
084a5ee3 +0x221:  lea    0x8(%eax),%edx
084a5ee6 +0x224:  lea    -0x24(%ebp),%eax
084a5ee9 +0x227:  mov    %edx,0x4(%esp)
084a5eed +0x22b:  mov    %eax,(%esp)
084a5ef0 +0x22e:  call   084a66e6 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x6ce>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x6ce
084a5ef5 +0x233:  sub    $0x4,%esp
084a5ef8 +0x236:  jmp    084a5fa4 <+0x2e2>
084a5efd +0x23b:  lea    -0x24(%ebp),%eax
084a5f00 +0x23e:  mov    %eax,(%esp)
084a5f03 +0x241:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a5f08 +0x246:  mov    (%eax),%eax
084a5f0a +0x248:  mov    %eax,%edx
084a5f0c +0x24a:  mov    0xc(%ebp),%eax
084a5f0f +0x24d:  mov    %edx,0x4(%esp)
084a5f13 +0x251:  mov    %eax,(%esp)
084a5f16 +0x254:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5f1b +0x259:  lea    -0x24(%ebp),%eax
084a5f1e +0x25c:  mov    %eax,(%esp)
084a5f21 +0x25f:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a5f26 +0x264:  movzbl 0x4(%eax),%eax
084a5f2a +0x268:  movsbl %al,%edx
084a5f2d +0x26b:  mov    0xc(%ebp),%eax
084a5f30 +0x26e:  mov    %edx,0x4(%esp)
084a5f34 +0x272:  mov    %eax,(%esp)
084a5f37 +0x275:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a5f3c +0x27a:  lea    -0x24(%ebp),%eax
084a5f3f +0x27d:  mov    %eax,(%esp)
084a5f42 +0x280:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a5f47 +0x285:  mov    0x8(%eax),%eax
084a5f4a +0x288:  mov    %eax,%edx
084a5f4c +0x28a:  mov    0xc(%ebp),%eax
084a5f4f +0x28d:  mov    %edx,0x4(%esp)
084a5f53 +0x291:  mov    %eax,(%esp)
084a5f56 +0x294:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5f5b +0x299:  lea    -0x24(%ebp),%eax
084a5f5e +0x29c:  mov    %eax,(%esp)
084a5f61 +0x29f:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a5f66 +0x2a4:  mov    0xc(%eax),%eax
084a5f69 +0x2a7:  mov    %eax,%edx
084a5f6b +0x2a9:  mov    0xc(%ebp),%eax
084a5f6e +0x2ac:  mov    %edx,0x4(%esp)
084a5f72 +0x2b0:  mov    %eax,(%esp)
084a5f75 +0x2b3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5f7a +0x2b8:  lea    -0x24(%ebp),%eax
084a5f7d +0x2bb:  mov    %eax,(%esp)
084a5f80 +0x2be:  call   084a6764 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x74c>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x74c
084a5f85 +0x2c3:  mov    0x10(%eax),%eax
084a5f88 +0x2c6:  mov    %eax,%edx
084a5f8a +0x2c8:  mov    0xc(%ebp),%eax
084a5f8d +0x2cb:  mov    %edx,0x4(%esp)
084a5f91 +0x2cf:  mov    %eax,(%esp)
084a5f94 +0x2d2:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a5f99 +0x2d7:  lea    -0x24(%ebp),%eax
084a5f9c +0x2da:  mov    %eax,(%esp)
084a5f9f +0x2dd:  call   084a6746 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x72e>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x72e
084a5fa4 +0x2e2:  mov    0x8(%ebp),%eax
084a5fa7 +0x2e5:  lea    0x8(%eax),%edx
084a5faa +0x2e8:  lea    -0x18(%ebp),%eax
084a5fad +0x2eb:  mov    %edx,0x4(%esp)
084a5fb1 +0x2ef:  mov    %eax,(%esp)
084a5fb4 +0x2f2:  call   084a670c <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x6f4>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x6f4
084a5fb9 +0x2f7:  sub    $0x4,%esp
084a5fbc +0x2fa:  lea    -0x18(%ebp),%eax
084a5fbf +0x2fd:  mov    %eax,0x4(%esp)
084a5fc3 +0x301:  lea    -0x24(%ebp),%eax
084a5fc6 +0x304:  mov    %eax,(%esp)
084a5fc9 +0x307:  call   084a6732 <_GLOBAL__I__ZN8fair_pvp13CFairPvPScoreC2Ev+0x71a>  ; global constructors keyed to fair_pvp::CFairPvPScore::CFairPvPScore()+0x71a
084a5fce +0x30c:  test   %al,%al
084a5fd0 +0x30e:  jne    084a5efd <+0x23b>
084a5fd6 +0x314:  leave
084a5fd7 +0x315:  ret
```

## 反编译 C

```c
// fair_pvp::CFairPvPScore::MakePacketSocre @ 0x84a5cc2

/* fair_pvp::CFairPvPScore::MakePacketSocre(PacketGuard&, int) const */

void __thiscall
fair_pvp::CFairPvPScore::MakePacketSocre(CFairPvPScore *this,PacketGuard *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_28 [4];
  _List_const_iterator<unsigned_char> local_24 [4];
  _List_const_iterator local_20 [4];
  map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
  local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x34));
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  std::list<unsigned_char,std::allocator<unsigned_char>>::begin();
  while( true ) {
    std::list<unsigned_char,std::allocator<unsigned_char>>::end();
    cVar1 = std::_List_const_iterator<unsigned_char>::operator!=(local_24,local_20);
    if (cVar1 == '\0') break;
    pcVar2 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
    if (*pcVar2 == '\x01') {
      local_18 = local_18 + 1;
    }
    else {
      pcVar2 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
      if (*pcVar2 == '\x02') {
        local_14 = local_14 + 1;
      }
      else {
        pcVar2 = (char *)std::_List_const_iterator<unsigned_char>::operator*(local_24);
        if (*pcVar2 == '\x03') {
          local_10 = local_10 + 1;
        }
      }
    }
    std::_List_const_iterator<unsigned_char>::operator++(local_24);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_18);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_14);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,local_10);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x48));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x40));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x44));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x4c));
  if (param_2 == 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x2c));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x30));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x38));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x3c));
    iVar3 = std::
            map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
            ::size((map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
                    *)(this + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,iVar3);
    std::
    map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
    ::begin(local_28);
    while( true ) {
      std::
      map<fair_pvp::JobKey,FAIR_PVP_SCORE_MODE_COUNT,std::less<fair_pvp::JobKey>,std::allocator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>>
      ::end(local_1c);
      cVar1 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator!=((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28,(_Rb_tree_const_iterator *)local_1c);
      if (cVar1 == '\0') break;
      piVar4 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                      ::operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                                    *)local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,*piVar4);
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)*(char *)(iVar3 + 4));
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(iVar3 + 8));
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(iVar3 + 0xc));
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
              operator->((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                          *)local_28);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(iVar3 + 0x10));
      std::_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>::
      operator++((_Rb_tree_const_iterator<std::pair<fair_pvp::JobKey_const,FAIR_PVP_SCORE_MODE_COUNT>>
                  *)local_28);
    }
  }
  return;
}
```
