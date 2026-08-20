# SendGuildFP

`_ZN7WarRoom11SendGuildFPEv`

`WarRoom::SendGuildFP()`

| 类 | 地址 |
|---|---|
| `WarRoom` | `0x086bc0b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086bc0b0  _ZN7WarRoom11SendGuildFPEv
#           WarRoom::SendGuildFP()
# range [0x086bc0b0, 0x086bc45f]
086bc0b0 +0x000:  push   %ebp
086bc0b1 +0x001:  mov    %esp,%ebp
086bc0b3 +0x003:  push   %esi
086bc0b4 +0x004:  push   %ebx
086bc0b5 +0x005:  sub    $0x70,%esp
086bc0b8 +0x008:  lea    -0x30(%ebp),%eax
086bc0bb +0x00b:  mov    %eax,(%esp)
086bc0be +0x00e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
086bc0c3 +0x013:  movl   $0x60,0x8(%esp)
086bc0cb +0x01b:  movl   $0x0,0x4(%esp)
086bc0d3 +0x023:  lea    -0x30(%ebp),%eax
086bc0d6 +0x026:  mov    %eax,(%esp)
086bc0d9 +0x029:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
086bc0de +0x02e:  mov    0x8(%ebp),%eax
086bc0e1 +0x031:  mov    %eax,(%esp)
086bc0e4 +0x034:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bc0e9 +0x039:  mov    %eax,0x4(%esp)
086bc0ed +0x03d:  lea    -0x30(%ebp),%eax
086bc0f0 +0x040:  mov    %eax,(%esp)
086bc0f3 +0x043:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bc0f8 +0x048:  movl   $0x0,-0x20(%ebp)
086bc0ff +0x04f:  jmp    086bc155 <+0xa5>
086bc101 +0x051:  mov    -0x20(%ebp),%edx
086bc104 +0x054:  mov    0x8(%ebp),%eax
086bc107 +0x057:  add    $0x48,%edx
086bc10a +0x05a:  mov    0xc(%eax,%edx,4),%eax
086bc10e +0x05e:  test   %eax,%eax
086bc110 +0x060:  je     086bc150 <+0xa0>
086bc112 +0x062:  mov    -0x20(%ebp),%edx
086bc115 +0x065:  mov    0x8(%ebp),%eax
086bc118 +0x068:  add    $0x48,%edx
086bc11b +0x06b:  mov    0xc(%eax,%edx,4),%eax
086bc11f +0x06f:  mov    %eax,(%esp)
086bc122 +0x072:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc127 +0x077:  mov    %eax,%ebx
086bc129 +0x079:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
086bc12e +0x07e:  mov    0x88a4(%eax),%eax
086bc134 +0x084:  cmp    %eax,%ebx
086bc136 +0x086:  setl   %al
086bc139 +0x089:  test   %al,%al
086bc13b +0x08b:  je     086bc151 <+0xa1>
086bc13d +0x08d:  mov    -0x20(%ebp),%edx
086bc140 +0x090:  mov    0x8(%ebp),%eax
086bc143 +0x093:  add    $0x60,%edx
086bc146 +0x096:  movl   $0x9,0xc(%eax,%edx,4)
086bc14e +0x09e:  jmp    086bc151 <+0xa1>
086bc150 +0x0a0:  nop
086bc151 +0x0a1:  addl   $0x1,-0x20(%ebp)
086bc155 +0x0a5:  cmpl   $0x5,-0x20(%ebp)
086bc159 +0x0a9:  setle  %al
086bc15c +0x0ac:  test   %al,%al
086bc15e +0x0ae:  jne    086bc101 <+0x51>
086bc160 +0x0b0:  mov    0x8(%ebp),%eax
086bc163 +0x0b3:  mov    %eax,(%esp)
086bc166 +0x0b6:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bc16b +0x0bb:  cmp    $0x4,%eax
086bc16e +0x0be:  setg   %al
086bc171 +0x0c1:  test   %al,%al
086bc173 +0x0c3:  je     086bc2dd <+0x22d>
086bc179 +0x0c9:  movl   $0x7fffffff,-0x1c(%ebp)
086bc180 +0x0d0:  lea    -0x44(%ebp),%eax
086bc183 +0x0d3:  mov    %eax,(%esp)
086bc186 +0x0d6:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
086bc18b +0x0db:  movl   $0x0,-0x48(%ebp)
086bc192 +0x0e2:  jmp    086bc23f <+0x18f>
086bc197 +0x0e7:  mov    -0x48(%ebp),%edx
086bc19a +0x0ea:  mov    0x8(%ebp),%eax
086bc19d +0x0ed:  add    $0x48,%edx
086bc1a0 +0x0f0:  mov    0xc(%eax,%edx,4),%eax
086bc1a4 +0x0f4:  test   %eax,%eax
086bc1a6 +0x0f6:  je     086bc235 <+0x185>
086bc1ac +0x0fc:  mov    -0x48(%ebp),%edx
086bc1af +0x0ff:  mov    0x8(%ebp),%eax
086bc1b2 +0x102:  add    $0x48,%edx
086bc1b5 +0x105:  mov    0xc(%eax,%edx,4),%eax
086bc1b9 +0x109:  mov    %eax,(%esp)
086bc1bc +0x10c:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc1c1 +0x111:  cmp    -0x1c(%ebp),%eax
086bc1c4 +0x114:  setl   %al
086bc1c7 +0x117:  test   %al,%al
086bc1c9 +0x119:  je     086bc202 <+0x152>
086bc1cb +0x11b:  mov    -0x48(%ebp),%edx
086bc1ce +0x11e:  mov    0x8(%ebp),%eax
086bc1d1 +0x121:  add    $0x48,%edx
086bc1d4 +0x124:  mov    0xc(%eax,%edx,4),%eax
086bc1d8 +0x128:  mov    %eax,(%esp)
086bc1db +0x12b:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc1e0 +0x130:  mov    %eax,-0x1c(%ebp)
086bc1e3 +0x133:  lea    -0x44(%ebp),%eax
086bc1e6 +0x136:  mov    %eax,(%esp)
086bc1e9 +0x139:  call   08096b6e <_GLOBAL__I_g_maxTotalDefenseRate+0x15e>  ; global constructors keyed to g_maxTotalDefenseRate+0x15e
086bc1ee +0x13e:  lea    -0x48(%ebp),%eax
086bc1f1 +0x141:  mov    %eax,0x4(%esp)
086bc1f5 +0x145:  lea    -0x44(%ebp),%eax
086bc1f8 +0x148:  mov    %eax,(%esp)
086bc1fb +0x14b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
086bc200 +0x150:  jmp    086bc236 <+0x186>
086bc202 +0x152:  mov    -0x48(%ebp),%edx
086bc205 +0x155:  mov    0x8(%ebp),%eax
086bc208 +0x158:  add    $0x48,%edx
086bc20b +0x15b:  mov    0xc(%eax,%edx,4),%eax
086bc20f +0x15f:  mov    %eax,(%esp)
086bc212 +0x162:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc217 +0x167:  cmp    -0x1c(%ebp),%eax
086bc21a +0x16a:  sete   %al
086bc21d +0x16d:  test   %al,%al
086bc21f +0x16f:  je     086bc236 <+0x186>
086bc221 +0x171:  lea    -0x48(%ebp),%eax
086bc224 +0x174:  mov    %eax,0x4(%esp)
086bc228 +0x178:  lea    -0x44(%ebp),%eax
086bc22b +0x17b:  mov    %eax,(%esp)
086bc22e +0x17e:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
086bc233 +0x183:  jmp    086bc236 <+0x186>
086bc235 +0x185:  nop
086bc236 +0x186:  mov    -0x48(%ebp),%eax
086bc239 +0x189:  add    $0x1,%eax
086bc23c +0x18c:  mov    %eax,-0x48(%ebp)
086bc23f +0x18f:  mov    -0x48(%ebp),%eax
086bc242 +0x192:  cmp    $0x5,%eax
086bc245 +0x195:  setle  %al
086bc248 +0x198:  test   %al,%al
086bc24a +0x19a:  jne    086bc197 <+0xe7>
086bc250 +0x1a0:  lea    -0x4c(%ebp),%eax
086bc253 +0x1a3:  lea    -0x44(%ebp),%edx
086bc256 +0x1a6:  mov    %edx,0x4(%esp)
086bc25a +0x1aa:  mov    %eax,(%esp)
086bc25d +0x1ad:  call   0808e248 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xb8>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xb8
086bc262 +0x1b2:  sub    $0x4,%esp
086bc265 +0x1b5:  jmp    086bc28d <+0x1dd>
086bc267 +0x1b7:  lea    -0x4c(%ebp),%eax
086bc26a +0x1ba:  mov    %eax,(%esp)
086bc26d +0x1bd:  call   0808e7cc <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x63c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x63c
086bc272 +0x1c2:  mov    (%eax),%edx
086bc274 +0x1c4:  mov    0x8(%ebp),%eax
086bc277 +0x1c7:  add    $0x60,%edx
086bc27a +0x1ca:  movl   $0xa,0xc(%eax,%edx,4)
086bc282 +0x1d2:  lea    -0x4c(%ebp),%eax
086bc285 +0x1d5:  mov    %eax,(%esp)
086bc288 +0x1d8:  call   080ea98c <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x5c5>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x5c5
086bc28d +0x1dd:  lea    -0x24(%ebp),%eax
086bc290 +0x1e0:  lea    -0x44(%ebp),%edx
086bc293 +0x1e3:  mov    %edx,0x4(%esp)
086bc297 +0x1e7:  mov    %eax,(%esp)
086bc29a +0x1ea:  call   0808e26c <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0xdc>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0xdc
086bc29f +0x1ef:  sub    $0x4,%esp
086bc2a2 +0x1f2:  lea    -0x24(%ebp),%eax
086bc2a5 +0x1f5:  mov    %eax,0x4(%esp)
086bc2a9 +0x1f9:  lea    -0x4c(%ebp),%eax
086bc2ac +0x1fc:  mov    %eax,(%esp)
086bc2af +0x1ff:  call   080ea462 <_GLOBAL__I__ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x9b>  ; global constructors keyed to ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)+0x9b
086bc2b4 +0x204:  test   %al,%al
086bc2b6 +0x206:  jne    086bc267 <+0x1b7>
086bc2b8 +0x208:  jmp    086bc2d2 <+0x222>
086bc2ba +0x20a:  mov    %edx,%ebx
086bc2bc +0x20c:  mov    %eax,%esi
086bc2be +0x20e:  lea    -0x44(%ebp),%eax
086bc2c1 +0x211:  mov    %eax,(%esp)
086bc2c4 +0x214:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
086bc2c9 +0x219:  mov    %esi,%eax
086bc2cb +0x21b:  mov    %ebx,%edx
086bc2cd +0x21d:  jmp    086bc42f <+0x37f>
086bc2d2 +0x222:  lea    -0x44(%ebp),%eax
086bc2d5 +0x225:  mov    %eax,(%esp)
086bc2d8 +0x228:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
086bc2dd +0x22d:  movl   $0x0,-0x36(%ebp)
086bc2e4 +0x234:  movw   $0x0,-0x32(%ebp)
086bc2ea +0x23a:  movl   $0x0,-0x18(%ebp)
086bc2f1 +0x241:  jmp    086bc3ef <+0x33f>
086bc2f6 +0x246:  movl   $0xffffffff,-0x14(%ebp)
086bc2fd +0x24d:  movl   $0xffffffff,-0x10(%ebp)
086bc304 +0x254:  movl   $0x0,-0xc(%ebp)
086bc30b +0x25b:  jmp    086bc371 <+0x2c1>
086bc30d +0x25d:  mov    -0xc(%ebp),%edx
086bc310 +0x260:  mov    0x8(%ebp),%eax
086bc313 +0x263:  add    $0x48,%edx
086bc316 +0x266:  mov    0xc(%eax,%edx,4),%eax
086bc31a +0x26a:  test   %eax,%eax
086bc31c +0x26c:  je     086bc369 <+0x2b9>
086bc31e +0x26e:  mov    -0xc(%ebp),%eax
086bc321 +0x271:  movzbl -0x36(%ebp,%eax,1),%eax
086bc326 +0x276:  test   %al,%al
086bc328 +0x278:  jne    086bc36c <+0x2bc>
086bc32a +0x27a:  mov    -0xc(%ebp),%edx
086bc32d +0x27d:  mov    0x8(%ebp),%eax
086bc330 +0x280:  add    $0x48,%edx
086bc333 +0x283:  mov    0xc(%eax,%edx,4),%eax
086bc337 +0x287:  mov    %eax,(%esp)
086bc33a +0x28a:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc33f +0x28f:  cmp    -0x10(%ebp),%eax
086bc342 +0x292:  setge  %al
086bc345 +0x295:  test   %al,%al
086bc347 +0x297:  je     086bc36d <+0x2bd>
086bc349 +0x299:  mov    -0xc(%ebp),%edx
086bc34c +0x29c:  mov    0x8(%ebp),%eax
086bc34f +0x29f:  add    $0x48,%edx
086bc352 +0x2a2:  mov    0xc(%eax,%edx,4),%eax
086bc356 +0x2a6:  mov    %eax,(%esp)
086bc359 +0x2a9:  call   086458ce <_ZN15CUserCharacInfo19GetFinishPointTotalEv>  ; CUserCharacInfo::GetFinishPointTotal()
086bc35e +0x2ae:  mov    %eax,-0x10(%ebp)
086bc361 +0x2b1:  mov    -0xc(%ebp),%eax
086bc364 +0x2b4:  mov    %eax,-0x14(%ebp)
086bc367 +0x2b7:  jmp    086bc36d <+0x2bd>
086bc369 +0x2b9:  nop
086bc36a +0x2ba:  jmp    086bc36d <+0x2bd>
086bc36c +0x2bc:  nop
086bc36d +0x2bd:  addl   $0x1,-0xc(%ebp)
086bc371 +0x2c1:  cmpl   $0x5,-0xc(%ebp)
086bc375 +0x2c5:  setle  %al
086bc378 +0x2c8:  test   %al,%al
086bc37a +0x2ca:  jne    086bc30d <+0x25d>
086bc37c +0x2cc:  cmpl   $0xffffffff,-0x14(%ebp)
086bc380 +0x2d0:  jne    086bc3b5 <+0x305>
086bc382 +0x2d2:  mov    -0x14(%ebp),%eax
086bc385 +0x2d5:  mov    %eax,0x14(%esp)
086bc389 +0x2d9:  movl   $"maxPlayer (%d)",0x10(%esp)
086bc391 +0x2e1:  movl   $0x430,0xc(%esp)
086bc399 +0x2e9:  movl   $&_ZZN7WarRoom11SendGuildFPEvE19__PRETTY_FUNCTION__,0x8(%esp)
086bc3a1 +0x2f1:  movl   $"WarRoom.cpp",0x4(%esp)
086bc3a9 +0x2f9:  movl   $0x1,(%esp)
086bc3b0 +0x300:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
086bc3b5 +0x305:  mov    -0x14(%ebp),%eax
086bc3b8 +0x308:  movb   $0x1,-0x36(%ebp,%eax,1)
086bc3bd +0x30d:  mov    -0x14(%ebp),%eax
086bc3c0 +0x310:  mov    %eax,0x4(%esp)
086bc3c4 +0x314:  lea    -0x30(%ebp),%eax
086bc3c7 +0x317:  mov    %eax,(%esp)
086bc3ca +0x31a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bc3cf +0x31f:  mov    -0x14(%ebp),%edx
086bc3d2 +0x322:  mov    0x8(%ebp),%eax
086bc3d5 +0x325:  add    $0x60,%edx
086bc3d8 +0x328:  mov    0xc(%eax,%edx,4),%eax
086bc3dc +0x32c:  mov    %eax,0x4(%esp)
086bc3e0 +0x330:  lea    -0x30(%ebp),%eax
086bc3e3 +0x333:  mov    %eax,(%esp)
086bc3e6 +0x336:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
086bc3eb +0x33b:  addl   $0x1,-0x18(%ebp)
086bc3ef +0x33f:  mov    0x8(%ebp),%eax
086bc3f2 +0x342:  mov    %eax,(%esp)
086bc3f5 +0x345:  call   086babcc <_ZNK7WarRoom14GetWaiterCountEv>  ; WarRoom::GetWaiterCount() const
086bc3fa +0x34a:  cmp    -0x18(%ebp),%eax
086bc3fd +0x34d:  setg   %al
086bc400 +0x350:  test   %al,%al
086bc402 +0x352:  jne    086bc2f6 <+0x246>
086bc408 +0x358:  movl   $0x1,0x4(%esp)
086bc410 +0x360:  lea    -0x30(%ebp),%eax
086bc413 +0x363:  mov    %eax,(%esp)
086bc416 +0x366:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
086bc41b +0x36b:  lea    -0x30(%ebp),%eax
086bc41e +0x36e:  mov    %eax,0x4(%esp)
086bc422 +0x372:  mov    0x8(%ebp),%eax
086bc425 +0x375:  mov    %eax,(%esp)
086bc428 +0x378:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
086bc42d +0x37d:  jmp    086bc44a <+0x39a>
086bc42f +0x37f:  mov    %edx,%ebx
086bc431 +0x381:  mov    %eax,%esi
086bc433 +0x383:  lea    -0x30(%ebp),%eax
086bc436 +0x386:  mov    %eax,(%esp)
086bc439 +0x389:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bc43e +0x38e:  mov    %esi,%eax
086bc440 +0x390:  mov    %ebx,%edx
086bc442 +0x392:  mov    %eax,(%esp)
086bc445 +0x395:  call   08ae3750 <_Unwind_Resume>
086bc44a +0x39a:  lea    -0x30(%ebp),%eax
086bc44d +0x39d:  mov    %eax,(%esp)
086bc450 +0x3a0:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
086bc455 +0x3a5:  lea    -0x8(%ebp),%esp
086bc458 +0x3a8:  add    $0x0,%esp
086bc45b +0x3ab:  pop    %ebx
086bc45c +0x3ac:  pop    %esi
086bc45d +0x3ad:  pop    %ebp
086bc45e +0x3ae:  ret
086bc45f +0x3af:  nop
```

## 反编译 C

```c
// WarRoom::SendGuildFP @ 0x86bc0b0

/* WarRoom::SendGuildFP() */

void __thiscall WarRoom::SendGuildFP(WarRoom *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_50 [4];
  int local_4c;
  vector<int,std::allocator<int>> local_48 [14];
  char local_3a [6];
  PacketGuard local_34 [12];
  __normal_iterator local_28 [4];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 086bc0d9 to 086bc18a has its CatchHandler @ 086bc42f */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x60);
  iVar2 = GetWaiterCount(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar2);
  for (local_24 = 0; local_24 < 6; local_24 = local_24 + 1) {
    if (*(int *)(this + (local_24 + 0x48) * 4 + 0xc) != 0) {
      iVar2 = CUserCharacInfo::GetFinishPointTotal
                        (*(CUserCharacInfo **)(this + (local_24 + 0x48) * 4 + 0xc));
      iVar3 = G_CDataManager();
      if (iVar2 < *(int *)(iVar3 + 0x88a4)) {
        *(undefined4 *)(this + (local_24 + 0x60) * 4 + 0xc) = 9;
      }
    }
  }
  iVar2 = GetWaiterCount(this);
  if (4 < iVar2) {
    local_20 = 0x7fffffff;
    std::vector<int,std::allocator<int>>::vector(local_48);
    for (local_4c = 0; local_4c < 6; local_4c = local_4c + 1) {
      if (*(int *)(this + (local_4c + 0x48) * 4 + 0xc) != 0) {
                    /* try { // try from 086bc1bc to 086bc2b3 has its CatchHandler @ 086bc2ba */
        iVar2 = CUserCharacInfo::GetFinishPointTotal
                          (*(CUserCharacInfo **)(this + (local_4c + 0x48) * 4 + 0xc));
        if (iVar2 < local_20) {
          local_20 = CUserCharacInfo::GetFinishPointTotal
                               (*(CUserCharacInfo **)(this + (local_4c + 0x48) * 4 + 0xc));
          std::vector<int,std::allocator<int>>::clear(local_48);
          std::vector<int,std::allocator<int>>::push_back(local_48,&local_4c);
        }
        else {
          iVar2 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_4c + 0x48) * 4 + 0xc));
          if (iVar2 == local_20) {
            std::vector<int,std::allocator<int>>::push_back(local_48,&local_4c);
          }
        }
      }
    }
    std::vector<int,std::allocator<int>>::begin();
    while( true ) {
      std::vector<int,std::allocator<int>>::end();
      bVar1 = __gnu_cxx::operator!=(local_50,local_28);
      if (!bVar1) break;
      piVar4 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                      operator*(local_50);
      *(undefined4 *)(this + (*piVar4 + 0x60) * 4 + 0xc) = 10;
      __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++(local_50);
    }
                    /* try { // try from 086bc2d8 to 086bc42c has its CatchHandler @ 086bc42f */
    std::vector<int,std::allocator<int>>::~vector(local_48);
  }
  local_3a[0] = '\0';
  local_3a[1] = '\0';
  local_3a[2] = '\0';
  local_3a[3] = '\0';
  local_3a[4] = '\0';
  local_3a[5] = '\0';
  local_1c = 0;
  while (iVar2 = GetWaiterCount(this), local_1c < iVar2) {
    local_18 = -1;
    local_14 = -1;
    for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
      if (((*(int *)(this + (local_10 + 0x48) * 4 + 0xc) != 0) && (local_3a[local_10] == '\0')) &&
         (iVar2 = CUserCharacInfo::GetFinishPointTotal
                            (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc)),
         local_14 <= iVar2)) {
        local_14 = CUserCharacInfo::GetFinishPointTotal
                             (*(CUserCharacInfo **)(this + (local_10 + 0x48) * 4 + 0xc));
        local_18 = local_10;
      }
    }
    if (local_18 == -1) {
      LogManager::logFormat
                (1,"WarRoom.cpp","void WarRoom::SendGuildFP()",0x430,"maxPlayer (%d)",0xffffffff);
    }
    local_3a[local_18] = '\x01';
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_18);
    InterfacePacketBuf::put_byte
              ((InterfacePacketBuf *)local_34,*(int *)(this + (local_18 + 0x60) * 4 + 0xc));
    local_1c = local_1c + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  SendToRoom(this,local_34);
  PacketGuard::~PacketGuard(local_34);
  return;
}
```
