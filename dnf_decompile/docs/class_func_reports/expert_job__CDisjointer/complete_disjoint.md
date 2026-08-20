# complete_disjoint

`_ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard`

`expert_job::CDisjointer::complete_disjoint(CUser*, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `expert_job::CDisjointer` | `0x085d31a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085d31a0  _ZN10expert_job11CDisjointer17complete_disjointEP5CUserR11PacketGuard
#           expert_job::CDisjointer::complete_disjoint(CUser*, PacketGuard&)
# range [0x085d31a0, 0x085d35cd]
085d31a0 +0x000:  push   %ebp
085d31a1 +0x001:  mov    %esp,%ebp
085d31a3 +0x003:  push   %esi
085d31a4 +0x004:  push   %ebx
085d31a5 +0x005:  sub    $0x60,%esp
085d31a8 +0x008:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d31ad +0x00d:  mov    0x270(%eax),%ebx
085d31b3 +0x013:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d31b8 +0x018:  mov    0x26c(%eax),%eax
085d31be +0x01e:  mov    %ebx,%edx
085d31c0 +0x020:  sub    %eax,%edx
085d31c2 +0x022:  mov    %edx,%eax
085d31c4 +0x024:  add    $0x1,%eax
085d31c7 +0x027:  mov    %eax,(%esp)
085d31ca +0x02a:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d31cf +0x02f:  mov    %eax,%ebx
085d31d1 +0x031:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d31d6 +0x036:  mov    0x26c(%eax),%eax
085d31dc +0x03c:  lea    (%ebx,%eax,1),%eax
085d31df +0x03f:  mov    %eax,-0x1c(%ebp)
085d31e2 +0x042:  mov    0x8(%ebp),%eax
085d31e5 +0x045:  add    $0x8,%eax
085d31e8 +0x048:  mov    %eax,(%esp)
085d31eb +0x04b:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d31f0 +0x050:  movl   $0x0,0x4(%esp)
085d31f8 +0x058:  mov    %eax,(%esp)
085d31fb +0x05b:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3200 +0x060:  mov    %eax,(%esp)
085d3203 +0x063:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d3208 +0x068:  mov    %eax,-0x18(%ebp)
085d320b +0x06b:  mov    -0x18(%ebp),%eax
085d320e +0x06e:  cmp    -0x1c(%ebp),%eax
085d3211 +0x071:  jge    085d3219 <+0x79>
085d3213 +0x073:  mov    -0x18(%ebp),%eax
085d3216 +0x076:  mov    %eax,-0x1c(%ebp)
085d3219 +0x079:  mov    -0x1c(%ebp),%eax
085d321c +0x07c:  mov    -0x18(%ebp),%edx
085d321f +0x07f:  mov    %edx,%ebx
085d3221 +0x081:  sub    %eax,%ebx
085d3223 +0x083:  mov    0x8(%ebp),%eax
085d3226 +0x086:  add    $0x8,%eax
085d3229 +0x089:  mov    %eax,(%esp)
085d322c +0x08c:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d3231 +0x091:  movl   $0x0,0x4(%esp)
085d3239 +0x099:  mov    %eax,(%esp)
085d323c +0x09c:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3241 +0x0a1:  mov    %ebx,0x4(%esp)
085d3245 +0x0a5:  mov    %eax,(%esp)
085d3248 +0x0a8:  call   085d3e72 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x367>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x367
085d324d +0x0ad:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d3252 +0x0b2:  mov    0x288(%eax),%ebx
085d3258 +0x0b8:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d325d +0x0bd:  mov    0x284(%eax),%eax
085d3263 +0x0c3:  mov    %ebx,%edx
085d3265 +0x0c5:  sub    %eax,%edx
085d3267 +0x0c7:  mov    %edx,%eax
085d3269 +0x0c9:  add    $0x1,%eax
085d326c +0x0cc:  mov    %eax,(%esp)
085d326f +0x0cf:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d3274 +0x0d4:  mov    %eax,%ebx
085d3276 +0x0d6:  call   085d1e0a <_ZN10expert_job11CDisjointer9GetScriptEv>  ; expert_job::CDisjointer::GetScript()
085d327b +0x0db:  mov    0x284(%eax),%eax
085d3281 +0x0e1:  lea    (%ebx,%eax,1),%eax
085d3284 +0x0e4:  mov    %eax,-0x14(%ebp)
085d3287 +0x0e7:  mov    0xc(%ebp),%eax
085d328a +0x0ea:  mov    %eax,(%esp)
085d328d +0x0ed:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
085d3292 +0x0f2:  mov    %eax,-0x10(%ebp)
085d3295 +0x0f5:  lea    -0x24(%ebp),%eax
085d3298 +0x0f8:  mov    %eax,(%esp)
085d329b +0x0fb:  call   0849f34c <_GLOBAL__I__ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri+0x17d>  ; global constructors keyed to expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)+0x17d
085d32a0 +0x100:  mov    0xc(%ebp),%eax
085d32a3 +0x103:  mov    %eax,(%esp)
085d32a6 +0x106:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085d32ab +0x10b:  mov    %eax,0x4(%esp)
085d32af +0x10f:  mov    0xc(%ebp),%eax
085d32b2 +0x112:  mov    %eax,(%esp)
085d32b5 +0x115:  call   0868bc7c <_ZN5CUser20GetCurExpertJobLevelEi>  ; CUser::GetCurExpertJobLevel(int)
085d32ba +0x11a:  mov    %eax,%ebx
085d32bc +0x11c:  mov    0xc(%ebp),%eax
085d32bf +0x11f:  mov    %eax,(%esp)
085d32c2 +0x122:  call   0822f894 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4f3e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4f3e
085d32c7 +0x127:  lea    -0x24(%ebp),%edx
085d32ca +0x12a:  mov    %edx,0xc(%esp)
085d32ce +0x12e:  mov    %ebx,0x8(%esp)
085d32d2 +0x132:  mov    %eax,0x4(%esp)
085d32d6 +0x136:  mov    -0x10(%ebp),%eax
085d32d9 +0x139:  mov    %eax,(%esp)
085d32dc +0x13c:  call   0850cc46 <_ZNK10CInventory24GetExpertJobAddtionalExpE20ENUM_EXPERT_JOB_TYPEiRN12STItemScript10SEXPERTJOB24stExpertJobAdditionalExpE>  ; CInventory::GetExpertJobAddtionalExp(ENUM_EXPERT_JOB_TYPE, int, STItemScript::SEXPERTJOB::stExpertJobAdditionalExp&) const
085d32e1 +0x141:  movl   $0x64,(%esp)
085d32e8 +0x148:  call   086b1b87 <_Z12get_rand_inti>  ; get_rand_int(int)
085d32ed +0x14d:  mov    %eax,-0x3c(%ebp)
085d32f0 +0x150:  fildl  -0x3c(%ebp)
085d32f3 +0x153:  flds   -0x24(%ebp)
085d32f6 +0x156:  fucompp
085d32f8 +0x158:  fnstsw %ax
085d32fa +0x15a:  test   $0x45,%ah
085d32fd +0x15d:  sete   %al
085d3300 +0x160:  test   %al,%al
085d3302 +0x162:  je     085d3310 <+0x170>
085d3304 +0x164:  mov    -0x20(%ebp),%edx
085d3307 +0x167:  mov    -0x14(%ebp),%eax
085d330a +0x16a:  lea    (%edx,%eax,1),%eax
085d330d +0x16d:  mov    %eax,-0x14(%ebp)
085d3310 +0x170:  cmpl   $0x0,-0x14(%ebp)
085d3314 +0x174:  jle    085d334b <+0x1ab>
085d3316 +0x176:  mov    0x8(%ebp),%eax
085d3319 +0x179:  add    $0x8,%eax
085d331c +0x17c:  mov    %eax,(%esp)
085d331f +0x17f:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d3324 +0x184:  mov    %eax,(%esp)
085d3327 +0x187:  call   08375026 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xeff2>  ; global constructors keyed to CServerEvent::m_nExpRate+0xeff2
085d332c +0x18c:  mov    %eax,%ebx
085d332e +0x18e:  add    -0x14(%ebp),%ebx
085d3331 +0x191:  mov    0x8(%ebp),%eax
085d3334 +0x194:  add    $0x8,%eax
085d3337 +0x197:  mov    %eax,(%esp)
085d333a +0x19a:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d333f +0x19f:  mov    %ebx,0x4(%esp)
085d3343 +0x1a3:  mov    %eax,(%esp)
085d3346 +0x1a6:  call   0849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>  ; expert_job::CExpertJob::IncreaseExpertJobExp(CUser*, int)
085d334b +0x1ab:  mov    0x8(%ebp),%eax
085d334e +0x1ae:  add    $0x8,%eax
085d3351 +0x1b1:  mov    %eax,(%esp)
085d3354 +0x1b4:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d3359 +0x1b9:  cmp    0xc(%ebp),%eax
085d335c +0x1bc:  sete   %al
085d335f +0x1bf:  test   %al,%al
085d3361 +0x1c1:  je     085d33b7 <+0x217>
085d3363 +0x1c3:  mov    0xc(%ebp),%eax
085d3366 +0x1c6:  mov    %eax,(%esp)
085d3369 +0x1c9:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d336e +0x1ce:  mov    0x10(%ebp),%edx
085d3371 +0x1d1:  mov    %eax,0x4(%esp)
085d3375 +0x1d5:  mov    %edx,(%esp)
085d3378 +0x1d8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d337d +0x1dd:  mov    0x8(%ebp),%eax
085d3380 +0x1e0:  add    $0x8,%eax
085d3383 +0x1e3:  mov    %eax,(%esp)
085d3386 +0x1e6:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d338b +0x1eb:  movl   $0x0,0x4(%esp)
085d3393 +0x1f3:  mov    %eax,(%esp)
085d3396 +0x1f6:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d339b +0x1fb:  mov    %eax,(%esp)
085d339e +0x1fe:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d33a3 +0x203:  mov    0x10(%ebp),%edx
085d33a6 +0x206:  mov    %eax,0x4(%esp)
085d33aa +0x20a:  mov    %edx,(%esp)
085d33ad +0x20d:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d33b2 +0x212:  jmp    085d3566 <+0x3c6>
085d33b7 +0x217:  mov    0x8(%ebp),%eax
085d33ba +0x21a:  mov    %eax,(%esp)
085d33bd +0x21d:  call   085d3e50 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x345>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x345
085d33c2 +0x222:  mov    %eax,-0xc(%ebp)
085d33c5 +0x225:  mov    0xc(%ebp),%eax
085d33c8 +0x228:  mov    %eax,(%esp)
085d33cb +0x22b:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085d33d0 +0x230:  movl   $0x1,0xc(%esp)
085d33d8 +0x238:  movl   $0x1d,0x8(%esp)
085d33e0 +0x240:  mov    -0xc(%ebp),%edx
085d33e3 +0x243:  mov    %edx,0x4(%esp)
085d33e7 +0x247:  mov    %eax,(%esp)
085d33ea +0x24a:  call   084ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>  ; CInventory::use_money(int, eMoneySubReason, bool)
085d33ef +0x24f:  mov    0xc(%ebp),%eax
085d33f2 +0x252:  mov    %eax,(%esp)
085d33f5 +0x255:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d33fa +0x25a:  mov    0x10(%ebp),%edx
085d33fd +0x25d:  mov    %eax,0x4(%esp)
085d3401 +0x261:  mov    %edx,(%esp)
085d3404 +0x264:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d3409 +0x269:  mov    0x8(%ebp),%eax
085d340c +0x26c:  add    $0x8,%eax
085d340f +0x26f:  mov    %eax,(%esp)
085d3412 +0x272:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d3417 +0x277:  movl   $0x0,0x4(%esp)
085d341f +0x27f:  mov    %eax,(%esp)
085d3422 +0x282:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3427 +0x287:  mov    %eax,(%esp)
085d342a +0x28a:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d342f +0x28f:  mov    0x10(%ebp),%edx
085d3432 +0x292:  mov    %eax,0x4(%esp)
085d3436 +0x296:  mov    %edx,(%esp)
085d3439 +0x299:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d343e +0x29e:  mov    0x8(%ebp),%eax
085d3441 +0x2a1:  add    $0x8,%eax
085d3444 +0x2a4:  mov    %eax,(%esp)
085d3447 +0x2a7:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d344c +0x2ac:  mov    %eax,(%esp)
085d344f +0x2af:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
085d3454 +0x2b4:  movl   $0x0,0x10(%esp)
085d345c +0x2bc:  movl   $0x1,0xc(%esp)
085d3464 +0x2c4:  movl   $0x16,0x8(%esp)
085d346c +0x2cc:  mov    -0xc(%ebp),%edx
085d346f +0x2cf:  mov    %edx,0x4(%esp)
085d3473 +0x2d3:  mov    %eax,(%esp)
085d3476 +0x2d6:  call   084ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>  ; CInventory::gain_money(int, eMoneyAddReason, bool, int)
085d347b +0x2db:  lea    -0x30(%ebp),%eax
085d347e +0x2de:  mov    %eax,(%esp)
085d3481 +0x2e1:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
085d3486 +0x2e6:  movl   $0xcb,0x8(%esp)
085d348e +0x2ee:  movl   $0x0,0x4(%esp)
085d3496 +0x2f6:  lea    -0x30(%ebp),%eax
085d3499 +0x2f9:  mov    %eax,(%esp)
085d349c +0x2fc:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
085d34a1 +0x301:  movl   $0x1,0x4(%esp)
085d34a9 +0x309:  lea    -0x30(%ebp),%eax
085d34ac +0x30c:  mov    %eax,(%esp)
085d34af +0x30f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
085d34b4 +0x314:  mov    0x8(%ebp),%eax
085d34b7 +0x317:  add    $0x8,%eax
085d34ba +0x31a:  mov    %eax,(%esp)
085d34bd +0x31d:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d34c2 +0x322:  mov    %eax,(%esp)
085d34c5 +0x325:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
085d34ca +0x32a:  mov    %eax,0x4(%esp)
085d34ce +0x32e:  lea    -0x30(%ebp),%eax
085d34d1 +0x331:  mov    %eax,(%esp)
085d34d4 +0x334:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d34d9 +0x339:  mov    0x8(%ebp),%eax
085d34dc +0x33c:  add    $0x8,%eax
085d34df +0x33f:  mov    %eax,(%esp)
085d34e2 +0x342:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d34e7 +0x347:  movl   $0x0,0x4(%esp)
085d34ef +0x34f:  mov    %eax,(%esp)
085d34f2 +0x352:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d34f7 +0x357:  mov    %eax,(%esp)
085d34fa +0x35a:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d34ff +0x35f:  mov    %eax,0x4(%esp)
085d3503 +0x363:  lea    -0x30(%ebp),%eax
085d3506 +0x366:  mov    %eax,(%esp)
085d3509 +0x369:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
085d350e +0x36e:  movl   $0x1,0x4(%esp)
085d3516 +0x376:  lea    -0x30(%ebp),%eax
085d3519 +0x379:  mov    %eax,(%esp)
085d351c +0x37c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
085d3521 +0x381:  mov    0x8(%ebp),%eax
085d3524 +0x384:  add    $0x8,%eax
085d3527 +0x387:  mov    %eax,(%esp)
085d352a +0x38a:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d352f +0x38f:  lea    -0x30(%ebp),%edx
085d3532 +0x392:  mov    %edx,0x4(%esp)
085d3536 +0x396:  mov    %eax,(%esp)
085d3539 +0x399:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
085d353e +0x39e:  jmp    085d355b <+0x3bb>
085d3540 +0x3a0:  mov    %edx,%ebx
085d3542 +0x3a2:  mov    %eax,%esi
085d3544 +0x3a4:  lea    -0x30(%ebp),%eax
085d3547 +0x3a7:  mov    %eax,(%esp)
085d354a +0x3aa:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d354f +0x3af:  mov    %esi,%eax
085d3551 +0x3b1:  mov    %ebx,%edx
085d3553 +0x3b3:  mov    %eax,(%esp)
085d3556 +0x3b6:  call   08ae3750 <_Unwind_Resume>
085d355b +0x3bb:  lea    -0x30(%ebp),%eax
085d355e +0x3be:  mov    %eax,(%esp)
085d3561 +0x3c1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
085d3566 +0x3c6:  mov    0x8(%ebp),%eax
085d3569 +0x3c9:  add    $0x8,%eax
085d356c +0x3cc:  mov    %eax,(%esp)
085d356f +0x3cf:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d3574 +0x3d4:  movl   $0x0,0x4(%esp)
085d357c +0x3dc:  mov    %eax,(%esp)
085d357f +0x3df:  call   080dd584 <_GLOBAL__I__ZN12CBoosterGage14inc_total_gageEi+0xcd>  ; global constructors keyed to CBoosterGage::inc_total_gage(int)+0xcd
085d3584 +0x3e4:  mov    %eax,(%esp)
085d3587 +0x3e7:  call   085d3e66 <_GLOBAL__I__ZN10expert_job16CDisjointMachineC2EP5CUserPKcicii+0x35b>  ; global constructors keyed to expert_job::CDisjointMachine::CDisjointMachine(CUser*, char const*, int, char, int, int)+0x35b
085d358c +0x3ec:  test   %eax,%eax
085d358e +0x3ee:  setle  %al
085d3591 +0x3f1:  test   %al,%al
085d3593 +0x3f3:  je     085d35c1 <+0x421>
085d3595 +0x3f5:  mov    0x8(%ebp),%eax
085d3598 +0x3f8:  mov    (%eax),%eax
085d359a +0x3fa:  add    $0x4,%eax
085d359d +0x3fd:  mov    (%eax),%ebx
085d359f +0x3ff:  mov    0x8(%ebp),%eax
085d35a2 +0x402:  add    $0x8,%eax
085d35a5 +0x405:  mov    %eax,(%esp)
085d35a8 +0x408:  call   082347e0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9e8a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9e8a
085d35ad +0x40d:  movl   $0x0,0x8(%esp)
085d35b5 +0x415:  mov    %eax,0x4(%esp)
085d35b9 +0x419:  mov    0x8(%ebp),%eax
085d35bc +0x41c:  mov    %eax,(%esp)
085d35bf +0x41f:  call   *%ebx
085d35c1 +0x421:  mov    $0x1,%eax
085d35c6 +0x426:  add    $0x60,%esp
085d35c9 +0x429:  pop    %ebx
085d35ca +0x42a:  pop    %esi
085d35cb +0x42b:  pop    %ebp
085d35cc +0x42c:  ret
085d35cd +0x42d:  nop
```

## 反编译 C

```c
// expert_job::CDisjointer::complete_disjoint @ 0x85d31a0

/* expert_job::CDisjointer::complete_disjoint(CUser*, PacketGuard&) */

undefined4 __thiscall
expert_job::CDisjointer::complete_disjoint(CDisjointer *this,CUser *param_1,PacketGuard *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  CUser *pCVar4;
  CCharacExpertJob *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CUserCharacInfo *pCVar8;
  CInventory *pCVar9;
  PacketGuard local_34 [12];
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CInventory *local_14;
  undefined4 local_10;
  
  iVar2 = GetScript();
  iVar2 = *(int *)(iVar2 + 0x270);
  iVar3 = GetScript();
  iVar2 = get_rand_int((iVar2 - *(int *)(iVar3 + 0x26c)) + 1);
  iVar3 = GetScript();
  local_20 = iVar2 + *(int *)(iVar3 + 0x26c);
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
  local_1c = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
  if (local_1c < local_20) {
    local_20 = local_1c;
  }
  iVar2 = local_1c - local_20;
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
  CCharacExpertJob::set_disjoint_machine_endurance(pCVar5,iVar2);
  iVar2 = GetScript();
  iVar2 = *(int *)(iVar2 + 0x288);
  iVar3 = GetScript();
  iVar2 = get_rand_int((iVar2 - *(int *)(iVar3 + 0x284)) + 1);
  iVar3 = GetScript();
  local_18 = iVar2 + *(int *)(iVar3 + 0x284);
  local_14 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  STItemScript::SEXPERTJOB::stExpertJobAdditionalExp::stExpertJobAdditionalExp
            ((stExpertJobAdditionalExp *)&local_28);
  iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp((CUserCharacInfo *)param_1);
  uVar6 = CUser::GetCurExpertJobLevel(param_1,iVar2);
  uVar7 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
  CInventory::GetExpertJobAddtionalExp(local_14,uVar7,uVar6,&local_28);
  iVar2 = get_rand_int(100);
  if ((float)iVar2 < local_28) {
    local_18 = local_24 + local_18;
  }
  if (0 < local_18) {
    pCVar8 = (CUserCharacInfo *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp(pCVar8);
    iVar2 = iVar2 + local_18;
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    CExpertJob::IncreaseExpertJobExp(pCVar4,iVar2);
  }
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  if (pCVar4 == param_1) {
    iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
    iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
  }
  else {
    local_10 = get_disjoint_cost(this);
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar9,local_10,0x1d,1);
    iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
    iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar2);
    pCVar8 = (CUserCharacInfo *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(pCVar8);
    CInventory::gain_money(pCVar9,local_10,0x16,1,0);
    PacketGuard::PacketGuard(local_34);
                    /* try { // try from 085d349c to 085d353d has its CatchHandler @ 085d3540 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xcb);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    pCVar8 = (CUserCharacInfo *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    iVar2 = CUserCharacInfo::getCurCharacMoney(pCVar8);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar2);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
    iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
    pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    CUser::Send(pCVar4,local_34);
    PacketGuard::~PacketGuard(local_34);
  }
  pCVar4 = (CUser *)CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
  pCVar5 = (CCharacExpertJob *)CUser::GetCharacExpandData(pCVar4,0);
  iVar2 = CCharacExpertJob::get_disjoint_machine_endurance(pCVar5);
  if (iVar2 < 1) {
    pcVar1 = *(code **)(*(int *)this + 4);
    uVar6 = CDisjointMachine::get_user((CDisjointMachine *)(this + 8));
    (*pcVar1)(this,uVar6,0);
  }
  return 1;
}
```
