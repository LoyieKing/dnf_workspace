# HandleDieCharacer

`_ZN7WarRoom17HandleDieCharacerEP5CUseri`

`WarRoom::HandleDieCharacer(CUser*, int)`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bd87e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bd87e  _ZN7WarRoom17HandleDieCharacerEP5CUseri
#           WarRoom::HandleDieCharacer(CUser*, int)
# range [0x086bd87e, 0x086bdd57]
086bd87e +0x000:  push   %ebp
086bd87f +0x001:  mov    %esp,%ebp
086bd881 +0x003:  push   %esi
086bd882 +0x004:  push   %ebx
086bd883 +0x005:  sub    $0x70,%esp
086bd886 +0x008:  mov    0x8(%ebp),%eax
086bd889 +0x00b:  mov    %eax,(%esp)
086bd88c +0x00e:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bd891 +0x013:  cmp    $0x3,%eax
086bd894 +0x016:  je     086bd8bb <+0x3d>
086bd896 +0x018:  mov    0x8(%ebp),%eax
086bd899 +0x01b:  mov    %eax,(%esp)
086bd89c +0x01e:  call   0822ee96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4540>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4540
086bd8a1 +0x023:  cmp    $0x4,%eax
086bd8a4 +0x026:  je     086bd8bb <+0x3d>
086bd8a6 +0x028:  mov    0x8(%ebp),%eax
086bd8a9 +0x02b:  mov    0x144(%eax),%eax
086bd8af +0x031:  cmp    $0x5,%eax
086bd8b2 +0x034:  je     086bd8bb <+0x3d>
086bd8b4 +0x036:  mov    $0x1,%eax
086bd8b9 +0x03b:  jmp    086bd8c0 <+0x42>
086bd8bb +0x03d:  mov    $0x0,%eax
086bd8c0 +0x042:  test   %al,%al
086bd8c2 +0x044:  je     086bd8ce <+0x50>
086bd8c4 +0x046:  mov    $0x13,%eax
086bd8c9 +0x04b:  jmp    086bdd50 <+0x4d2>
086bd8ce +0x050:  mov    0xc(%ebp),%eax
086bd8d1 +0x053:  mov    %eax,0x4(%esp)
086bd8d5 +0x057:  mov    0x8(%ebp),%eax
086bd8d8 +0x05a:  mov    %eax,(%esp)
086bd8db +0x05d:  call   086bd842 <_ZN7WarRoom11GetUserSlotEP5CUser>  ; WarRoom::GetUserSlot(CUser*)
086bd8e0 +0x062:  mov    %eax,-0x14(%ebp)
086bd8e3 +0x065:  cmpl   $0x0,-0x14(%ebp)
086bd8e7 +0x069:  jns    086bd8f3 <+0x75>
086bd8e9 +0x06b:  mov    $0x4,%eax
086bd8ee +0x070:  jmp    086bdd50 <+0x4d2>
086bd8f3 +0x075:  mov    -0x14(%ebp),%eax
086bd8f6 +0x078:  mov    0x8(%ebp),%edx
086bd8f9 +0x07b:  movzbl 0x184(%edx,%eax,1),%eax
086bd901 +0x083:  xor    $0x1,%eax
086bd904 +0x086:  test   %al,%al
086bd906 +0x088:  je     086bd912 <+0x94>
086bd908 +0x08a:  mov    $0x12,%eax
086bd90d +0x08f:  jmp    086bdd50 <+0x4d2>
086bd912 +0x094:  cmpl   $0xff,0x10(%ebp)
086bd919 +0x09b:  je     086bd96e <+0xf0>
086bd91b +0x09d:  cmpl   $0x0,0x10(%ebp)
086bd91f +0x0a1:  js     086bd927 <+0xa9>
086bd921 +0x0a3:  cmpl   $0x5,0x10(%ebp)
086bd925 +0x0a7:  jle    086bd96e <+0xf0>
086bd927 +0x0a9:  movl   $0x5,0xc(%esp)
086bd92f +0x0b1:  movl   $0x6d0,0x8(%esp)
086bd937 +0x0b9:  movl   $&_ZZN7WarRoom17HandleDieCharacerEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
086bd93f +0x0c1:  lea    -0x34(%ebp),%eax
086bd942 +0x0c4:  mov    %eax,(%esp)
086bd945 +0x0c7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bd94a +0x0cc:  mov    0x10(%ebp),%eax
086bd94d +0x0cf:  mov    %eax,0x8(%esp)
086bd951 +0x0d3:  movl   $"WarRoom::HandleDieCharacer killerSlotIndex Error(%d)",0x4(%esp)
086bd959 +0x0db:  lea    -0x34(%ebp),%eax
086bd95c +0x0de:  mov    %eax,(%esp)
086bd95f +0x0e1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bd964 +0x0e6:  mov    $0x1,%eax
086bd969 +0x0eb:  jmp    086bdd50 <+0x4d2>
086bd96e +0x0f0:  movw   $0xffff,-0xe(%ebp)
086bd974 +0x0f6:  cmpl   $0xff,0x10(%ebp)
086bd97b +0x0fd:  je     086bd9ec <+0x16e>
086bd97d +0x0ff:  mov    0x10(%ebp),%edx
086bd980 +0x102:  mov    0x8(%ebp),%eax
086bd983 +0x105:  add    $0x48,%edx
086bd986 +0x108:  mov    0xc(%eax,%edx,4),%eax
086bd98a +0x10c:  test   %eax,%eax
086bd98c +0x10e:  je     086bd9a9 <+0x12b>
086bd98e +0x110:  mov    0x10(%ebp),%edx
086bd991 +0x113:  mov    0x8(%ebp),%eax
086bd994 +0x116:  add    $0x48,%edx
086bd997 +0x119:  mov    0xc(%eax,%edx,4),%eax
086bd99b +0x11d:  mov    %eax,(%esp)
086bd99e +0x120:  call   080da37c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x519>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x519
086bd9a3 +0x125:  mov    %ax,-0xe(%ebp)
086bd9a7 +0x129:  jmp    086bd9ec <+0x16e>
086bd9a9 +0x12b:  movl   $0x5,0xc(%esp)
086bd9b1 +0x133:  movl   $0x6de,0x8(%esp)
086bd9b9 +0x13b:  movl   $&_ZZN7WarRoom17HandleDieCharacerEP5CUseriE19__PRETTY_FUNCTION__,0x4(%esp)
086bd9c1 +0x143:  lea    -0x24(%ebp),%eax
086bd9c4 +0x146:  mov    %eax,(%esp)
086bd9c7 +0x149:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
086bd9cc +0x14e:  mov    0x10(%ebp),%eax
086bd9cf +0x151:  mov    %eax,0x8(%esp)
086bd9d3 +0x155:  movl   $"WARAREA WarRoom::HandleDieCharacer player_[] is NULL killerSlotIndex(%d)",0x4(%esp)
086bd9db +0x15d:  lea    -0x24(%ebp),%eax
086bd9de +0x160:  mov    %eax,(%esp)
086bd9e1 +0x163:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
086bd9e6 +0x168:  movw   $0xffff,-0xe(%ebp)
086bd9ec +0x16e:  movzwl -0xe(%ebp),%eax
086bd9f0 +0x172:  cwtl
086bd9f1 +0x173:  mov    0x10(%ebp),%edx
086bd9f4 +0x176:  mov    %edx,0x18(%esp)
086bd9f8 +0x17a:  mov    %eax,0x14(%esp)
086bd9fc +0x17e:  movl   $0x0,0x10(%esp)
086bda04 +0x186:  movl   $0x0,0xc(%esp)
086bda0c +0x18e:  mov    0xc(%ebp),%eax
086bda0f +0x191:  mov    %eax,0x8(%esp)
086bda13 +0x195:  mov    -0x14(%ebp),%eax
086bda16 +0x198:  mov    %eax,0x4(%esp)
086bda1a +0x19c:  mov    0x8(%ebp),%eax
086bda1d +0x19f:  mov    %eax,(%esp)
086bda20 +0x1a2:  call   086be8b4 <_ZN7WarRoom16SetCharacterLiveEiP5CUserbbsi>  ; WarRoom::SetCharacterLive(int, CUser*, bool, bool, short, int)
086bda25 +0x1a7:  cmpl   $0xff,0x10(%ebp)
086bda2c +0x1ae:  je     086bdb72 <+0x2f4>
086bda32 +0x1b4:  cmpl   $0x0,0x10(%ebp)
086bda36 +0x1b8:  js     086bdb72 <+0x2f4>
086bda3c +0x1be:  cmpl   $0x5,0x10(%ebp)
086bda40 +0x1c2:  jg     086bdb72 <+0x2f4>
086bda46 +0x1c8:  mov    0x10(%ebp),%edx
086bda49 +0x1cb:  mov    0x8(%ebp),%eax
086bda4c +0x1ce:  add    $0x48,%edx
086bda4f +0x1d1:  mov    0xc(%eax,%edx,4),%eax
086bda53 +0x1d5:  test   %eax,%eax
086bda55 +0x1d7:  je     086bdb72 <+0x2f4>
086bda5b +0x1dd:  mov    0x8(%ebp),%eax
086bda5e +0x1e0:  movzbl 0x12(%eax),%eax
086bda62 +0x1e4:  test   %al,%al
086bda64 +0x1e6:  je     086bda96 <+0x218>
086bda66 +0x1e8:  mov    0x10(%ebp),%edx
086bda69 +0x1eb:  mov    0x8(%ebp),%eax
086bda6c +0x1ee:  add    $0x48,%edx
086bda6f +0x1f1:  mov    0xc(%eax,%edx,4),%eax
086bda73 +0x1f5:  mov    $0x3f800000,%edx
086bda78 +0x1fa:  mov    %edx,0xc(%esp)
086bda7c +0x1fe:  movl   $0x0,0x8(%esp)
086bda84 +0x206:  movl   $0x4,0x4(%esp)
086bda8c +0x20e:  mov    %eax,(%esp)
086bda8f +0x211:  call   086459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>  ; CUserCharacInfo::WarAreaKill(int, int, float)
086bda94 +0x216:  jmp    086bdacf <+0x251>
086bda96 +0x218:  mov    0x8(%ebp),%eax
086bda99 +0x21b:  mov    0x1d0(%eax),%eax
086bda9f +0x221:  mov    0x7c8(%eax),%edx
086bdaa5 +0x227:  mov    0x10(%ebp),%ecx
086bdaa8 +0x22a:  mov    0x8(%ebp),%eax
086bdaab +0x22d:  add    $0x48,%ecx
086bdaae +0x230:  mov    0xc(%eax,%ecx,4),%eax
086bdab2 +0x234:  mov    $0x3f800000,%ecx
086bdab7 +0x239:  mov    %ecx,0xc(%esp)
086bdabb +0x23d:  mov    %edx,0x8(%esp)
086bdabf +0x241:  movl   $0x4,0x4(%esp)
086bdac7 +0x249:  mov    %eax,(%esp)
086bdaca +0x24c:  call   086459c4 <_ZN15CUserCharacInfo11WarAreaKillEiif>  ; CUserCharacInfo::WarAreaKill(int, int, float)
086bdacf +0x251:  lea    -0x40(%ebp),%eax
086bdad2 +0x254:  mov    %eax,(%esp)
086bdad5 +0x257:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bdada +0x25c:  lea    -0x40(%ebp),%eax
086bdadd +0x25f:  mov    %eax,(%esp)
086bdae0 +0x262:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
086bdae5 +0x267:  movl   $0x5f,0x8(%esp)
086bdaed +0x26f:  movl   $0x1,0x4(%esp)
086bdaf5 +0x277:  lea    -0x40(%ebp),%eax
086bdaf8 +0x27a:  mov    %eax,(%esp)
086bdafb +0x27d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bdb00 +0x282:  movl   $0x1,0x4(%esp)
086bdb08 +0x28a:  lea    -0x40(%ebp),%eax
086bdb0b +0x28d:  mov    %eax,(%esp)
086bdb0e +0x290:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdb13 +0x295:  mov    0x10(%ebp),%eax
086bdb16 +0x298:  mov    %eax,0x4(%esp)
086bdb1a +0x29c:  lea    -0x40(%ebp),%eax
086bdb1d +0x29f:  mov    %eax,(%esp)
086bdb20 +0x2a2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdb25 +0x2a7:  movl   $0x1,0x4(%esp)
086bdb2d +0x2af:  lea    -0x40(%ebp),%eax
086bdb30 +0x2b2:  mov    %eax,(%esp)
086bdb33 +0x2b5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bdb38 +0x2ba:  lea    -0x40(%ebp),%eax
086bdb3b +0x2bd:  mov    %eax,0x4(%esp)
086bdb3f +0x2c1:  mov    0x8(%ebp),%eax
086bdb42 +0x2c4:  mov    %eax,(%esp)
086bdb45 +0x2c7:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bdb4a +0x2cc:  jmp    086bdb67 <+0x2e9>
086bdb4c +0x2ce:  mov    %edx,%ebx
086bdb4e +0x2d0:  mov    %eax,%esi
086bdb50 +0x2d2:  lea    -0x40(%ebp),%eax
086bdb53 +0x2d5:  mov    %eax,(%esp)
086bdb56 +0x2d8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bdb5b +0x2dd:  mov    %esi,%eax
086bdb5d +0x2df:  mov    %ebx,%edx
086bdb5f +0x2e1:  mov    %eax,(%esp)
086bdb62 +0x2e4:  call   08ae3750 <_Unwind_Resume>
086bdb67 +0x2e9:  lea    -0x40(%ebp),%eax
086bdb6a +0x2ec:  mov    %eax,(%esp)
086bdb6d +0x2ef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bdb72 +0x2f4:  mov    0x8(%ebp),%eax
086bdb75 +0x2f7:  movzbl 0x10(%eax),%eax
086bdb79 +0x2fb:  test   %al,%al
086bdb7b +0x2fd:  je     086bdd2c <+0x4ae>
086bdb81 +0x303:  mov    0x8(%ebp),%eax
086bdb84 +0x306:  mov    %eax,(%esp)
086bdb87 +0x309:  call   086bc460 <_ZN7WarRoom9ReviveAllEv>  ; WarRoom::ReviveAll()
086bdb8c +0x30e:  mov    0x8(%ebp),%eax
086bdb8f +0x311:  mov    0x128(%eax),%edx
086bdb95 +0x317:  mov    0x8(%ebp),%eax
086bdb98 +0x31a:  mov    0x1d0(%eax),%eax
086bdb9e +0x320:  mov    0x744(%eax),%eax
086bdba4 +0x326:  cmp    %eax,%edx
086bdba6 +0x328:  je     086bdbb3 <+0x335>
086bdba8 +0x32a:  mov    0x8(%ebp),%eax
086bdbab +0x32d:  movzbl 0x11(%eax),%eax
086bdbaf +0x331:  test   %al,%al
086bdbb1 +0x333:  je     086bdbbd <+0x33f>
086bdbb3 +0x335:  mov    $0x0,%eax
086bdbb8 +0x33a:  jmp    086bdd50 <+0x4d2>
086bdbbd +0x33f:  lea    -0x4c(%ebp),%eax
086bdbc0 +0x342:  mov    %eax,(%esp)
086bdbc3 +0x345:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bdbc8 +0x34a:  movl   $0x156,0x8(%esp)
086bdbd0 +0x352:  movl   $0x0,0x4(%esp)
086bdbd8 +0x35a:  lea    -0x4c(%ebp),%eax
086bdbdb +0x35d:  mov    %eax,(%esp)
086bdbde +0x360:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bdbe3 +0x365:  mov    0x8(%ebp),%eax
086bdbe6 +0x368:  mov    %eax,(%esp)
086bdbe9 +0x36b:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bdbee +0x370:  mov    %eax,0x4(%esp)
086bdbf2 +0x374:  lea    -0x4c(%ebp),%eax
086bdbf5 +0x377:  mov    %eax,(%esp)
086bdbf8 +0x37a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdbfd +0x37f:  movl   $0x0,-0xc(%ebp)
086bdc04 +0x386:  jmp    086bdcc9 <+0x44b>
086bdc09 +0x38b:  mov    -0xc(%ebp),%edx
086bdc0c +0x38e:  mov    0x8(%ebp),%eax
086bdc0f +0x391:  add    $0x48,%edx
086bdc12 +0x394:  mov    0xc(%eax,%edx,4),%eax
086bdc16 +0x398:  test   %eax,%eax
086bdc18 +0x39a:  je     086bdcc4 <+0x446>
086bdc1e +0x3a0:  mov    -0xc(%ebp),%edx
086bdc21 +0x3a3:  mov    0x8(%ebp),%eax
086bdc24 +0x3a6:  add    $0x48,%edx
086bdc27 +0x3a9:  mov    0xc(%eax,%edx,4),%eax
086bdc2b +0x3ad:  mov    %eax,(%esp)
086bdc2e +0x3b0:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bdc33 +0x3b5:  mov    %eax,%ebx
086bdc35 +0x3b7:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bdc3a +0x3bc:  mov    0x88ec(%eax),%eax
086bdc40 +0x3c2:  cmp    %eax,%ebx
086bdc42 +0x3c4:  setle  %al
086bdc45 +0x3c7:  test   %al,%al
086bdc47 +0x3c9:  je     086bdc68 <+0x3ea>
086bdc49 +0x3cb:  mov    -0xc(%ebp),%edx
086bdc4c +0x3ce:  mov    0x8(%ebp),%eax
086bdc4f +0x3d1:  add    $0x48,%edx
086bdc52 +0x3d4:  mov    0xc(%eax,%edx,4),%eax
086bdc56 +0x3d8:  movl   $0x0,0x4(%esp)
086bdc5e +0x3e0:  mov    %eax,(%esp)
086bdc61 +0x3e3:  call   08645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>  ; CUserCharacInfo::DecreaseWarPoint(int)
086bdc66 +0x3e8:  jmp    086bdc8c <+0x40e>
086bdc68 +0x3ea:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bdc6d +0x3ef:  mov    0x88ec(%eax),%edx
086bdc73 +0x3f5:  mov    -0xc(%ebp),%ecx
086bdc76 +0x3f8:  mov    0x8(%ebp),%eax
086bdc79 +0x3fb:  add    $0x48,%ecx
086bdc7c +0x3fe:  mov    0xc(%eax,%ecx,4),%eax
086bdc80 +0x402:  mov    %edx,0x4(%esp)
086bdc84 +0x406:  mov    %eax,(%esp)
086bdc87 +0x409:  call   08645aa0 <_ZN15CUserCharacInfo16DecreaseWarPointEi>  ; CUserCharacInfo::DecreaseWarPoint(int)
086bdc8c +0x40e:  mov    -0xc(%ebp),%eax
086bdc8f +0x411:  mov    %eax,0x4(%esp)
086bdc93 +0x415:  lea    -0x4c(%ebp),%eax
086bdc96 +0x418:  mov    %eax,(%esp)
086bdc99 +0x41b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bdc9e +0x420:  mov    -0xc(%ebp),%edx
086bdca1 +0x423:  mov    0x8(%ebp),%eax
086bdca4 +0x426:  add    $0x48,%edx
086bdca7 +0x429:  mov    0xc(%eax,%edx,4),%eax
086bdcab +0x42d:  mov    %eax,(%esp)
086bdcae +0x430:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bdcb3 +0x435:  mov    %eax,0x4(%esp)
086bdcb7 +0x439:  lea    -0x4c(%ebp),%eax
086bdcba +0x43c:  mov    %eax,(%esp)
086bdcbd +0x43f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
086bdcc2 +0x444:  jmp    086bdcc5 <+0x447>
086bdcc4 +0x446:  nop
086bdcc5 +0x447:  addl   $0x1,-0xc(%ebp)
086bdcc9 +0x44b:  cmpl   $0x5,-0xc(%ebp)
086bdccd +0x44f:  setle  %al
086bdcd0 +0x452:  test   %al,%al
086bdcd2 +0x454:  jne    086bdc09 <+0x38b>
086bdcd8 +0x45a:  movl   $0x1,0x4(%esp)
086bdce0 +0x462:  lea    -0x4c(%ebp),%eax
086bdce3 +0x465:  mov    %eax,(%esp)
086bdce6 +0x468:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bdceb +0x46d:  lea    -0x4c(%ebp),%eax
086bdcee +0x470:  mov    %eax,0x4(%esp)
086bdcf2 +0x474:  mov    0x8(%ebp),%eax
086bdcf5 +0x477:  mov    %eax,(%esp)
086bdcf8 +0x47a:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bdcfd +0x47f:  mov    0x8(%ebp),%eax
086bdd00 +0x482:  movb   $0x1,0x11(%eax)
086bdd04 +0x486:  lea    -0x4c(%ebp),%eax
086bdd07 +0x489:  mov    %eax,(%esp)
086bdd0a +0x48c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bdd0f +0x491:  jmp    086bdd4b <+0x4cd>
086bdd11 +0x493:  mov    %edx,%ebx
086bdd13 +0x495:  mov    %eax,%esi
086bdd15 +0x497:  lea    -0x4c(%ebp),%eax
086bdd18 +0x49a:  mov    %eax,(%esp)
086bdd1b +0x49d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bdd20 +0x4a2:  mov    %esi,%eax
086bdd22 +0x4a4:  mov    %ebx,%edx
086bdd24 +0x4a6:  mov    %eax,(%esp)
086bdd27 +0x4a9:  call   08ae3750 <_Unwind_Resume>
086bdd2c +0x4ae:  mov    0x8(%ebp),%eax
086bdd2f +0x4b1:  mov    %eax,(%esp)
086bdd32 +0x4b4:  call   086bac0c <_ZNK7WarRoom12GetLiveCountEv>  ; WarRoom::GetLiveCount() const
086bdd37 +0x4b9:  test   %eax,%eax
086bdd39 +0x4bb:  sete   %al
086bdd3c +0x4be:  test   %al,%al
086bdd3e +0x4c0:  je     086bdd4b <+0x4cd>
086bdd40 +0x4c2:  mov    0x8(%ebp),%eax
086bdd43 +0x4c5:  mov    %eax,(%esp)
086bdd46 +0x4c8:  call   086c078e <_ZN7WarRoom18SendWarRoomFailMsgEv>  ; WarRoom::SendWarRoomFailMsg()
086bdd4b +0x4cd:  mov    $0x0,%eax
086bdd50 +0x4d2:  add    $0x70,%esp
086bdd53 +0x4d5:  pop    %ebx
086bdd54 +0x4d6:  pop    %esi
086bdd55 +0x4d7:  pop    %ebp
086bdd56 +0x4d8:  ret
086bdd57 +0x4d9:  nop
```

## 反编译 C

```c
// WarRoom::HandleDieCharacer @ 0x86bd87e

/* WarRoom::HandleDieCharacer(CUser*, int) */

undefined4 __thiscall WarRoom::HandleDieCharacer(WarRoom *this,CUser *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  short local_12;
  int local_10;
  
  iVar2 = GetState(this);
  if (((iVar2 == 3) || (iVar2 = GetState(this), iVar2 == 4)) || (*(int *)(this + 0x144) == 5)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = 0x13;
  }
  else {
    local_18 = GetUserSlot(this,param_1);
    if (local_18 < 0) {
      uVar3 = 4;
    }
    else if (this[local_18 + 0x184] == (WarRoom)0x1) {
      if ((param_2 == 0xff) || ((-1 < param_2 && (param_2 < 6)))) {
        local_12 = -1;
        if (param_2 != 0xff) {
          if (*(int *)(this + (param_2 + 0x48) * 4 + 0xc) == 0) {
            cMyTrace::cMyTrace(local_28,"int WarRoom::HandleDieCharacer(CUser*, int)",0x6de,5);
            cMyTrace::operator()
                      (local_28,
                       "WARAREA WarRoom::HandleDieCharacer player_[] is NULL killerSlotIndex(%d)",
                       param_2);
            local_12 = -1;
          }
          else {
            local_12 = CUser::get_unique_id(*(CUser **)(this + (param_2 + 0x48) * 4 + 0xc));
          }
        }
        SetCharacterLive(this,local_18,param_1,false,false,local_12,param_2);
        if (((param_2 != 0xff) && (-1 < param_2)) &&
           ((param_2 < 6 && (*(int *)(this + (param_2 + 0x48) * 4 + 0xc) != 0)))) {
          if (this[0x12] == (WarRoom)0x0) {
            CUserCharacInfo::WarAreaKill
                      (*(CUserCharacInfo **)(this + (param_2 + 0x48) * 4 + 0xc),4,
                       *(int *)(*(int *)(this + 0x1d0) + 0x7c8),1.0);
          }
          else {
            CUserCharacInfo::WarAreaKill
                      (*(CUserCharacInfo **)(this + (param_2 + 0x48) * 4 + 0xc),4,0,1.0);
          }
          PacketGuard::PacketGuard(local_44);
                    /* try { // try from 086bdae0 to 086bdb49 has its CatchHandler @ 086bdb4c */
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,1,0x5f);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,param_2);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
          SendToRoom(this,local_44);
          PacketGuard::~PacketGuard(local_44);
        }
        if (this[0x10] == (WarRoom)0x0) {
          iVar2 = GetLiveCount(this);
          if (iVar2 == 0) {
            SendWarRoomFailMsg(this);
          }
        }
        else {
          ReviveAll(this);
          if ((*(int *)(this + 0x128) == *(int *)(*(int *)(this + 0x1d0) + 0x744)) ||
             (this[0x11] != (WarRoom)0x0)) {
            return 0;
          }
          PacketGuard::PacketGuard(local_50);
                    /* try { // try from 086bdbde to 086bdcfc has its CatchHandler @ 086bdd11 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x156);
          iVar2 = GetWaiterCount(this);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,iVar2);
          for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
            if (*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) {
              iVar2 = CUserCharacInfo::GetFinishPointTotal
                                (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
              iVar4 = G_CDataManager();
              if (*(int *)(iVar4 + 0x88ec) < iVar2) {
                iVar2 = G_CDataManager();
                CUserCharacInfo::DecreaseWarPoint
                          (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc),
                           *(int *)(iVar2 + 0x88ec));
              }
              else {
                CUserCharacInfo::DecreaseWarPoint
                          (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc),0);
              }
              InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,local_10);
              iVar2 = CUserCharacInfo::GetFinishPointTotal
                                (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
              InterfacePacketBuf::put_int((InterfacePacketBuf *)local_50,iVar2);
            }
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
          SendToRoom(this,local_50);
          this[0x11] = (WarRoom)0x1;
          PacketGuard::~PacketGuard(local_50);
        }
        uVar3 = 0;
      }
      else {
        cMyTrace::cMyTrace(local_38,"int WarRoom::HandleDieCharacer(CUser*, int)",0x6d0,5);
        cMyTrace::operator()
                  (local_38,"WarRoom::HandleDieCharacer killerSlotIndex Error(%d)",param_2);
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0x12;
    }
  }
  return uVar3;
}
```
