# _getCharacStat

`_ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC`

`DB_LoadCharac::_getCharacStat(SIG_LOAD_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadCharac` | `0x084093f6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084093f6  _ZN13DB_LoadCharac14_getCharacStatEP15SIG_LOAD_CHARAC
#           DB_LoadCharac::_getCharacStat(SIG_LOAD_CHARAC*)
# range [0x084093f6, 0x08409d2d]
084093f6 +0x000:  push   %ebp
084093f7 +0x001:  mov    %esp,%ebp
084093f9 +0x003:  sub    $0x28,%esp
084093fc +0x006:  mov    0x8(%ebp),%eax
084093ff +0x009:  mov    %eax,(%esp)
08409402 +0x00c:  call   08408c0a <_ZN13DB_LoadCharac10_getGameDBEv>  ; DB_LoadCharac::_getGameDB()
08409407 +0x011:  mov    %eax,-0x10(%ebp)
0840940a +0x014:  mov    0xc(%ebp),%eax
0840940d +0x017:  mov    0x4(%eax),%eax
08409410 +0x01a:  mov    %eax,0x8(%esp)
08409414 +0x01e:  movl   $"seLect village,exp,HP,fatigue,premium_fatigue,unix_timestamp(last_play_time),used_fatigue,tutorial_flag,trade_gold_total,trade_gold_daily,open_flag,chaos_point,chaos_exp,chaos_mode_count,chaos_kill_count,chaos_die_count,unix_timestamp(chaos_die_time),assault_count,luck_point,dungeon_play_count,unix_timestamp(chaos_kill_time),help_abuse_ratio,help_abuse_exp,expert_job_exp,fatigue_battery_charging,escalade_tutorial_flag,power_war_point,village_prev,power_war_assault_count,power_war_assault_victory_count,unix_timestamp(last_play_time_powerwar),fatigue_grownup_buff,emotion,add_slot_flag,member_dungeon_flag,member_bonus_fatigue,last_play_dungeon_index, add_equipslot_flag, channel_equipslot_switch, expand_equipslot_switch, visible_flags, growth_power_reward, unix_timestamp(chaos_respon_time) from charac_stat where charac_no=%u",0x4(%esp)
0840941c +0x026:  mov    -0x10(%ebp),%eax
0840941f +0x029:  mov    %eax,(%esp)
08409422 +0x02c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08409427 +0x031:  movl   $0x1,0x4(%esp)
0840942f +0x039:  mov    -0x10(%ebp),%eax
08409432 +0x03c:  mov    %eax,(%esp)
08409435 +0x03f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840943a +0x044:  xor    $0x1,%eax
0840943d +0x047:  test   %al,%al
0840943f +0x049:  jne    08409453 <+0x5d>
08409441 +0x04b:  mov    -0x10(%ebp),%eax
08409444 +0x04e:  mov    %eax,(%esp)
08409447 +0x051:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840944c +0x056:  xor    $0x1,%eax
0840944f +0x059:  test   %al,%al
08409451 +0x05b:  je     0840945a <+0x64>
08409453 +0x05d:  mov    $0x1,%eax
08409458 +0x062:  jmp    0840945f <+0x69>
0840945a +0x064:  mov    $0x0,%eax
0840945f +0x069:  test   %al,%al
08409461 +0x06b:  je     0840946d <+0x77>
08409463 +0x06d:  mov    $0x0,%eax
08409468 +0x072:  jmp    08409d2b <+0x935>
0840946d +0x077:  movl   $0x0,-0xc(%ebp)
08409474 +0x07e:  mov    0xc(%ebp),%eax
08409477 +0x081:  lea    0x2e(%eax),%edx
0840947a +0x084:  mov    -0xc(%ebp),%eax
0840947d +0x087:  addl   $0x1,-0xc(%ebp)
08409481 +0x08b:  mov    %edx,0x8(%esp)
08409485 +0x08f:  mov    %eax,0x4(%esp)
08409489 +0x093:  mov    -0x10(%ebp),%eax
0840948c +0x096:  mov    %eax,(%esp)
0840948f +0x099:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409494 +0x09e:  xor    $0x1,%eax
08409497 +0x0a1:  test   %al,%al
08409499 +0x0a3:  je     084094a5 <+0xaf>
0840949b +0x0a5:  mov    $0x0,%eax
084094a0 +0x0aa:  jmp    08409d2b <+0x935>
084094a5 +0x0af:  mov    0xc(%ebp),%eax
084094a8 +0x0b2:  lea    0x34(%eax),%edx
084094ab +0x0b5:  mov    -0xc(%ebp),%eax
084094ae +0x0b8:  addl   $0x1,-0xc(%ebp)
084094b2 +0x0bc:  mov    %edx,0x8(%esp)
084094b6 +0x0c0:  mov    %eax,0x4(%esp)
084094ba +0x0c4:  mov    -0x10(%ebp),%eax
084094bd +0x0c7:  mov    %eax,(%esp)
084094c0 +0x0ca:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084094c5 +0x0cf:  xor    $0x1,%eax
084094c8 +0x0d2:  test   %al,%al
084094ca +0x0d4:  je     084094d6 <+0xe0>
084094cc +0x0d6:  mov    $0x0,%eax
084094d1 +0x0db:  jmp    08409d2b <+0x935>
084094d6 +0x0e0:  mov    0xc(%ebp),%eax
084094d9 +0x0e3:  lea    0xbe(%eax),%edx
084094df +0x0e9:  mov    -0xc(%ebp),%eax
084094e2 +0x0ec:  addl   $0x1,-0xc(%ebp)
084094e6 +0x0f0:  mov    %edx,0x8(%esp)
084094ea +0x0f4:  mov    %eax,0x4(%esp)
084094ee +0x0f8:  mov    -0x10(%ebp),%eax
084094f1 +0x0fb:  mov    %eax,(%esp)
084094f4 +0x0fe:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
084094f9 +0x103:  xor    $0x1,%eax
084094fc +0x106:  test   %al,%al
084094fe +0x108:  je     0840950a <+0x114>
08409500 +0x10a:  mov    $0x0,%eax
08409505 +0x10f:  jmp    08409d2b <+0x935>
0840950a +0x114:  mov    0xc(%ebp),%eax
0840950d +0x117:  lea    0x38(%eax),%edx
08409510 +0x11a:  mov    -0xc(%ebp),%eax
08409513 +0x11d:  addl   $0x1,-0xc(%ebp)
08409517 +0x121:  mov    %edx,0x8(%esp)
0840951b +0x125:  mov    %eax,0x4(%esp)
0840951f +0x129:  mov    -0x10(%ebp),%eax
08409522 +0x12c:  mov    %eax,(%esp)
08409525 +0x12f:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840952a +0x134:  xor    $0x1,%eax
0840952d +0x137:  test   %al,%al
0840952f +0x139:  je     0840953b <+0x145>
08409531 +0x13b:  mov    $0x0,%eax
08409536 +0x140:  jmp    08409d2b <+0x935>
0840953b +0x145:  mov    0xc(%ebp),%eax
0840953e +0x148:  lea    0x67(%eax),%edx
08409541 +0x14b:  mov    -0xc(%ebp),%eax
08409544 +0x14e:  addl   $0x1,-0xc(%ebp)
08409548 +0x152:  mov    %edx,0x8(%esp)
0840954c +0x156:  mov    %eax,0x4(%esp)
08409550 +0x15a:  mov    -0x10(%ebp),%eax
08409553 +0x15d:  mov    %eax,(%esp)
08409556 +0x160:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0840955b +0x165:  xor    $0x1,%eax
0840955e +0x168:  test   %al,%al
08409560 +0x16a:  je     0840956c <+0x176>
08409562 +0x16c:  mov    $0x0,%eax
08409567 +0x171:  jmp    08409d2b <+0x935>
0840956c +0x176:  mov    0xc(%ebp),%eax
0840956f +0x179:  add    $0x59,%eax
08409572 +0x17c:  mov    %eax,%edx
08409574 +0x17e:  mov    -0xc(%ebp),%eax
08409577 +0x181:  addl   $0x1,-0xc(%ebp)
0840957b +0x185:  mov    %edx,0x8(%esp)
0840957f +0x189:  mov    %eax,0x4(%esp)
08409583 +0x18d:  mov    -0x10(%ebp),%eax
08409586 +0x190:  mov    %eax,(%esp)
08409589 +0x193:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840958e +0x198:  xor    $0x1,%eax
08409591 +0x19b:  test   %al,%al
08409593 +0x19d:  je     0840959f <+0x1a9>
08409595 +0x19f:  mov    $0x0,%eax
0840959a +0x1a4:  jmp    08409d2b <+0x935>
0840959f +0x1a9:  mov    0xc(%ebp),%eax
084095a2 +0x1ac:  lea    0xbf(%eax),%edx
084095a8 +0x1b2:  mov    -0xc(%ebp),%eax
084095ab +0x1b5:  addl   $0x1,-0xc(%ebp)
084095af +0x1b9:  mov    %edx,0x8(%esp)
084095b3 +0x1bd:  mov    %eax,0x4(%esp)
084095b7 +0x1c1:  mov    -0x10(%ebp),%eax
084095ba +0x1c4:  mov    %eax,(%esp)
084095bd +0x1c7:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
084095c2 +0x1cc:  xor    $0x1,%eax
084095c5 +0x1cf:  test   %al,%al
084095c7 +0x1d1:  je     084095d3 <+0x1dd>
084095c9 +0x1d3:  mov    $0x0,%eax
084095ce +0x1d8:  jmp    08409d2b <+0x935>
084095d3 +0x1dd:  mov    0xc(%ebp),%eax
084095d6 +0x1e0:  lea    0xc1(%eax),%edx
084095dc +0x1e6:  mov    -0xc(%ebp),%eax
084095df +0x1e9:  addl   $0x1,-0xc(%ebp)
084095e3 +0x1ed:  mov    %edx,0x8(%esp)
084095e7 +0x1f1:  mov    %eax,0x4(%esp)
084095eb +0x1f5:  mov    -0x10(%ebp),%eax
084095ee +0x1f8:  mov    %eax,(%esp)
084095f1 +0x1fb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084095f6 +0x200:  xor    $0x1,%eax
084095f9 +0x203:  test   %al,%al
084095fb +0x205:  je     08409607 <+0x211>
084095fd +0x207:  mov    $0x0,%eax
08409602 +0x20c:  jmp    08409d2b <+0x935>
08409607 +0x211:  mov    0xc(%ebp),%eax
0840960a +0x214:  lea    0xd5(%eax),%edx
08409610 +0x21a:  mov    -0xc(%ebp),%eax
08409613 +0x21d:  addl   $0x1,-0xc(%ebp)
08409617 +0x221:  mov    %edx,0x8(%esp)
0840961b +0x225:  mov    %eax,0x4(%esp)
0840961f +0x229:  mov    -0x10(%ebp),%eax
08409622 +0x22c:  mov    %eax,(%esp)
08409625 +0x22f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840962a +0x234:  xor    $0x1,%eax
0840962d +0x237:  test   %al,%al
0840962f +0x239:  je     0840963b <+0x245>
08409631 +0x23b:  mov    $0x0,%eax
08409636 +0x240:  jmp    08409d2b <+0x935>
0840963b +0x245:  mov    0xc(%ebp),%eax
0840963e +0x248:  lea    0xdd(%eax),%edx
08409644 +0x24e:  mov    -0xc(%ebp),%eax
08409647 +0x251:  addl   $0x1,-0xc(%ebp)
0840964b +0x255:  mov    %edx,0x8(%esp)
0840964f +0x259:  mov    %eax,0x4(%esp)
08409653 +0x25d:  mov    -0x10(%ebp),%eax
08409656 +0x260:  mov    %eax,(%esp)
08409659 +0x263:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840965e +0x268:  xor    $0x1,%eax
08409661 +0x26b:  test   %al,%al
08409663 +0x26d:  je     0840966f <+0x279>
08409665 +0x26f:  mov    $0x0,%eax
0840966a +0x274:  jmp    08409d2b <+0x935>
0840966f +0x279:  mov    0xc(%ebp),%eax
08409672 +0x27c:  movl   $0x0,0xd9(%eax)
0840967c +0x286:  mov    0xc(%ebp),%eax
0840967f +0x289:  lea    0x101(%eax),%edx
08409685 +0x28f:  mov    -0xc(%ebp),%eax
08409688 +0x292:  addl   $0x1,-0xc(%ebp)
0840968c +0x296:  mov    %edx,0x8(%esp)
08409690 +0x29a:  mov    %eax,0x4(%esp)
08409694 +0x29e:  mov    -0x10(%ebp),%eax
08409697 +0x2a1:  mov    %eax,(%esp)
0840969a +0x2a4:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0840969f +0x2a9:  xor    $0x1,%eax
084096a2 +0x2ac:  test   %al,%al
084096a4 +0x2ae:  je     084096b0 <+0x2ba>
084096a6 +0x2b0:  mov    $0x0,%eax
084096ab +0x2b5:  jmp    08409d2b <+0x935>
084096b0 +0x2ba:  mov    0xc(%ebp),%eax
084096b3 +0x2bd:  lea    0xe1(%eax),%edx
084096b9 +0x2c3:  mov    -0xc(%ebp),%eax
084096bc +0x2c6:  addl   $0x1,-0xc(%ebp)
084096c0 +0x2ca:  mov    %edx,0x8(%esp)
084096c4 +0x2ce:  mov    %eax,0x4(%esp)
084096c8 +0x2d2:  mov    -0x10(%ebp),%eax
084096cb +0x2d5:  mov    %eax,(%esp)
084096ce +0x2d8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084096d3 +0x2dd:  xor    $0x1,%eax
084096d6 +0x2e0:  test   %al,%al
084096d8 +0x2e2:  je     084096e4 <+0x2ee>
084096da +0x2e4:  mov    $0x0,%eax
084096df +0x2e9:  jmp    08409d2b <+0x935>
084096e4 +0x2ee:  mov    0xc(%ebp),%eax
084096e7 +0x2f1:  lea    0xe5(%eax),%edx
084096ed +0x2f7:  mov    -0xc(%ebp),%eax
084096f0 +0x2fa:  addl   $0x1,-0xc(%ebp)
084096f4 +0x2fe:  mov    %edx,0x8(%esp)
084096f8 +0x302:  mov    %eax,0x4(%esp)
084096fc +0x306:  mov    -0x10(%ebp),%eax
084096ff +0x309:  mov    %eax,(%esp)
08409702 +0x30c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08409707 +0x311:  xor    $0x1,%eax
0840970a +0x314:  test   %al,%al
0840970c +0x316:  je     08409718 <+0x322>
0840970e +0x318:  mov    $0x0,%eax
08409713 +0x31d:  jmp    08409d2b <+0x935>
08409718 +0x322:  mov    0xc(%ebp),%eax
0840971b +0x325:  lea    0xe9(%eax),%edx
08409721 +0x32b:  mov    -0xc(%ebp),%eax
08409724 +0x32e:  addl   $0x1,-0xc(%ebp)
08409728 +0x332:  mov    %edx,0x8(%esp)
0840972c +0x336:  mov    %eax,0x4(%esp)
08409730 +0x33a:  mov    -0x10(%ebp),%eax
08409733 +0x33d:  mov    %eax,(%esp)
08409736 +0x340:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840973b +0x345:  xor    $0x1,%eax
0840973e +0x348:  test   %al,%al
08409740 +0x34a:  je     0840974c <+0x356>
08409742 +0x34c:  mov    $0x0,%eax
08409747 +0x351:  jmp    08409d2b <+0x935>
0840974c +0x356:  mov    0xc(%ebp),%eax
0840974f +0x359:  lea    0xed(%eax),%edx
08409755 +0x35f:  mov    -0xc(%ebp),%eax
08409758 +0x362:  addl   $0x1,-0xc(%ebp)
0840975c +0x366:  mov    %edx,0x8(%esp)
08409760 +0x36a:  mov    %eax,0x4(%esp)
08409764 +0x36e:  mov    -0x10(%ebp),%eax
08409767 +0x371:  mov    %eax,(%esp)
0840976a +0x374:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840976f +0x379:  xor    $0x1,%eax
08409772 +0x37c:  test   %al,%al
08409774 +0x37e:  je     08409780 <+0x38a>
08409776 +0x380:  mov    $0x0,%eax
0840977b +0x385:  jmp    08409d2b <+0x935>
08409780 +0x38a:  mov    0xc(%ebp),%eax
08409783 +0x38d:  lea    0xf1(%eax),%edx
08409789 +0x393:  mov    -0xc(%ebp),%eax
0840978c +0x396:  addl   $0x1,-0xc(%ebp)
08409790 +0x39a:  mov    %edx,0x8(%esp)
08409794 +0x39e:  mov    %eax,0x4(%esp)
08409798 +0x3a2:  mov    -0x10(%ebp),%eax
0840979b +0x3a5:  mov    %eax,(%esp)
0840979e +0x3a8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084097a3 +0x3ad:  xor    $0x1,%eax
084097a6 +0x3b0:  test   %al,%al
084097a8 +0x3b2:  je     084097b4 <+0x3be>
084097aa +0x3b4:  mov    $0x0,%eax
084097af +0x3b9:  jmp    08409d2b <+0x935>
084097b4 +0x3be:  mov    0xc(%ebp),%eax
084097b7 +0x3c1:  lea    0xf5(%eax),%edx
084097bd +0x3c7:  mov    -0xc(%ebp),%eax
084097c0 +0x3ca:  addl   $0x1,-0xc(%ebp)
084097c4 +0x3ce:  mov    %edx,0x8(%esp)
084097c8 +0x3d2:  mov    %eax,0x4(%esp)
084097cc +0x3d6:  mov    -0x10(%ebp),%eax
084097cf +0x3d9:  mov    %eax,(%esp)
084097d2 +0x3dc:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084097d7 +0x3e1:  xor    $0x1,%eax
084097da +0x3e4:  test   %al,%al
084097dc +0x3e6:  je     084097e8 <+0x3f2>
084097de +0x3e8:  mov    $0x0,%eax
084097e3 +0x3ed:  jmp    08409d2b <+0x935>
084097e8 +0x3f2:  mov    0xc(%ebp),%eax
084097eb +0x3f5:  lea    0xf9(%eax),%edx
084097f1 +0x3fb:  mov    -0xc(%ebp),%eax
084097f4 +0x3fe:  addl   $0x1,-0xc(%ebp)
084097f8 +0x402:  mov    %edx,0x8(%esp)
084097fc +0x406:  mov    %eax,0x4(%esp)
08409800 +0x40a:  mov    -0x10(%ebp),%eax
08409803 +0x40d:  mov    %eax,(%esp)
08409806 +0x410:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840980b +0x415:  xor    $0x1,%eax
0840980e +0x418:  test   %al,%al
08409810 +0x41a:  je     0840981c <+0x426>
08409812 +0x41c:  mov    $0x0,%eax
08409817 +0x421:  jmp    08409d2b <+0x935>
0840981c +0x426:  mov    0xc(%ebp),%eax
0840981f +0x429:  lea    0x102(%eax),%edx
08409825 +0x42f:  mov    -0xc(%ebp),%eax
08409828 +0x432:  addl   $0x1,-0xc(%ebp)
0840982c +0x436:  mov    %edx,0x8(%esp)
08409830 +0x43a:  mov    %eax,0x4(%esp)
08409834 +0x43e:  mov    -0x10(%ebp),%eax
08409837 +0x441:  mov    %eax,(%esp)
0840983a +0x444:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840983f +0x449:  xor    $0x1,%eax
08409842 +0x44c:  test   %al,%al
08409844 +0x44e:  je     08409850 <+0x45a>
08409846 +0x450:  mov    $0x0,%eax
0840984b +0x455:  jmp    08409d2b <+0x935>
08409850 +0x45a:  mov    0xc(%ebp),%eax
08409853 +0x45d:  lea    0x106(%eax),%edx
08409859 +0x463:  mov    -0xc(%ebp),%eax
0840985c +0x466:  addl   $0x1,-0xc(%ebp)
08409860 +0x46a:  mov    %edx,0x8(%esp)
08409864 +0x46e:  mov    %eax,0x4(%esp)
08409868 +0x472:  mov    -0x10(%ebp),%eax
0840986b +0x475:  mov    %eax,(%esp)
0840986e +0x478:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08409873 +0x47d:  xor    $0x1,%eax
08409876 +0x480:  test   %al,%al
08409878 +0x482:  je     08409884 <+0x48e>
0840987a +0x484:  mov    $0x0,%eax
0840987f +0x489:  jmp    08409d2b <+0x935>
08409884 +0x48e:  mov    0xc(%ebp),%eax
08409887 +0x491:  lea    0xfd(%eax),%edx
0840988d +0x497:  mov    -0xc(%ebp),%eax
08409890 +0x49a:  addl   $0x1,-0xc(%ebp)
08409894 +0x49e:  mov    %edx,0x8(%esp)
08409898 +0x4a2:  mov    %eax,0x4(%esp)
0840989c +0x4a6:  mov    -0x10(%ebp),%eax
0840989f +0x4a9:  mov    %eax,(%esp)
084098a2 +0x4ac:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084098a7 +0x4b1:  xor    $0x1,%eax
084098aa +0x4b4:  test   %al,%al
084098ac +0x4b6:  je     084098b8 <+0x4c2>
084098ae +0x4b8:  mov    $0x0,%eax
084098b3 +0x4bd:  jmp    08409d2b <+0x935>
084098b8 +0x4c2:  mov    0xc(%ebp),%eax
084098bb +0x4c5:  lea    0x10a(%eax),%edx
084098c1 +0x4cb:  mov    -0xc(%ebp),%eax
084098c4 +0x4ce:  addl   $0x1,-0xc(%ebp)
084098c8 +0x4d2:  mov    %edx,0x8(%esp)
084098cc +0x4d6:  mov    %eax,0x4(%esp)
084098d0 +0x4da:  mov    -0x10(%ebp),%eax
084098d3 +0x4dd:  mov    %eax,(%esp)
084098d6 +0x4e0:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084098db +0x4e5:  xor    $0x1,%eax
084098de +0x4e8:  test   %al,%al
084098e0 +0x4ea:  je     084098ec <+0x4f6>
084098e2 +0x4ec:  mov    $0x0,%eax
084098e7 +0x4f1:  jmp    08409d2b <+0x935>
084098ec +0x4f6:  mov    0xc(%ebp),%eax
084098ef +0x4f9:  lea    0x10e(%eax),%edx
084098f5 +0x4ff:  mov    -0xc(%ebp),%eax
084098f8 +0x502:  addl   $0x1,-0xc(%ebp)
084098fc +0x506:  mov    %edx,0x8(%esp)
08409900 +0x50a:  mov    %eax,0x4(%esp)
08409904 +0x50e:  mov    -0x10(%ebp),%eax
08409907 +0x511:  mov    %eax,(%esp)
0840990a +0x514:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0840990f +0x519:  xor    $0x1,%eax
08409912 +0x51c:  test   %al,%al
08409914 +0x51e:  je     08409920 <+0x52a>
08409916 +0x520:  mov    $0x0,%eax
0840991b +0x525:  jmp    08409d2b <+0x935>
08409920 +0x52a:  mov    0xc(%ebp),%eax
08409923 +0x52d:  lea    0x116(%eax),%edx
08409929 +0x533:  mov    -0xc(%ebp),%eax
0840992c +0x536:  addl   $0x1,-0xc(%ebp)
08409930 +0x53a:  mov    %edx,0x8(%esp)
08409934 +0x53e:  mov    %eax,0x4(%esp)
08409938 +0x542:  mov    -0x10(%ebp),%eax
0840993b +0x545:  mov    %eax,(%esp)
0840993e +0x548:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08409943 +0x54d:  xor    $0x1,%eax
08409946 +0x550:  test   %al,%al
08409948 +0x552:  je     08409954 <+0x55e>
0840994a +0x554:  mov    $0x0,%eax
0840994f +0x559:  jmp    08409d2b <+0x935>
08409954 +0x55e:  mov    0xc(%ebp),%eax
08409957 +0x561:  lea    0x3e(%eax),%edx
0840995a +0x564:  mov    -0xc(%ebp),%eax
0840995d +0x567:  addl   $0x1,-0xc(%ebp)
08409961 +0x56b:  mov    %edx,0x8(%esp)
08409965 +0x56f:  mov    %eax,0x4(%esp)
08409969 +0x573:  mov    -0x10(%ebp),%eax
0840996c +0x576:  mov    %eax,(%esp)
0840996f +0x579:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08409974 +0x57e:  xor    $0x1,%eax
08409977 +0x581:  test   %al,%al
08409979 +0x583:  je     08409985 <+0x58f>
0840997b +0x585:  mov    $0x0,%eax
08409980 +0x58a:  jmp    08409d2b <+0x935>
08409985 +0x58f:  mov    0xc(%ebp),%eax
08409988 +0x592:  lea    0xc5(%eax),%edx
0840998e +0x598:  mov    -0xc(%ebp),%eax
08409991 +0x59b:  addl   $0x1,-0xc(%ebp)
08409995 +0x59f:  movl   $0x10,0xc(%esp)
0840999d +0x5a7:  mov    %edx,0x8(%esp)
084099a1 +0x5ab:  mov    %eax,0x4(%esp)
084099a5 +0x5af:  mov    -0x10(%ebp),%eax
084099a8 +0x5b2:  mov    %eax,(%esp)
084099ab +0x5b5:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
084099b0 +0x5ba:  xor    $0x1,%eax
084099b3 +0x5bd:  test   %al,%al
084099b5 +0x5bf:  je     084099c1 <+0x5cb>
084099b7 +0x5c1:  mov    $0x0,%eax
084099bc +0x5c6:  jmp    08409d2b <+0x935>
084099c1 +0x5cb:  mov    0xc(%ebp),%eax
084099c4 +0x5ce:  lea    0x11a(%eax),%edx
084099ca +0x5d4:  mov    -0xc(%ebp),%eax
084099cd +0x5d7:  addl   $0x1,-0xc(%ebp)
084099d1 +0x5db:  mov    %edx,0x8(%esp)
084099d5 +0x5df:  mov    %eax,0x4(%esp)
084099d9 +0x5e3:  mov    -0x10(%ebp),%eax
084099dc +0x5e6:  mov    %eax,(%esp)
084099df +0x5e9:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
084099e4 +0x5ee:  xor    $0x1,%eax
084099e7 +0x5f1:  test   %al,%al
084099e9 +0x5f3:  je     084099f5 <+0x5ff>
084099eb +0x5f5:  mov    $0x0,%eax
084099f0 +0x5fa:  jmp    08409d2b <+0x935>
084099f5 +0x5ff:  mov    0xc(%ebp),%eax
084099f8 +0x602:  lea    0x2f(%eax),%edx
084099fb +0x605:  mov    -0xc(%ebp),%eax
084099fe +0x608:  addl   $0x1,-0xc(%ebp)
08409a02 +0x60c:  mov    %edx,0x8(%esp)
08409a06 +0x610:  mov    %eax,0x4(%esp)
08409a0a +0x614:  mov    -0x10(%ebp),%eax
08409a0d +0x617:  mov    %eax,(%esp)
08409a10 +0x61a:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409a15 +0x61f:  xor    $0x1,%eax
08409a18 +0x622:  test   %al,%al
08409a1a +0x624:  je     08409a26 <+0x630>
08409a1c +0x626:  mov    $0x0,%eax
08409a21 +0x62b:  jmp    08409d2b <+0x935>
08409a26 +0x630:  mov    0xc(%ebp),%eax
08409a29 +0x633:  lea    0x11c(%eax),%edx
08409a2f +0x639:  mov    -0xc(%ebp),%eax
08409a32 +0x63c:  addl   $0x1,-0xc(%ebp)
08409a36 +0x640:  mov    %edx,0x8(%esp)
08409a3a +0x644:  mov    %eax,0x4(%esp)
08409a3e +0x648:  mov    -0x10(%ebp),%eax
08409a41 +0x64b:  mov    %eax,(%esp)
08409a44 +0x64e:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08409a49 +0x653:  xor    $0x1,%eax
08409a4c +0x656:  test   %al,%al
08409a4e +0x658:  je     08409a5a <+0x664>
08409a50 +0x65a:  mov    $0x0,%eax
08409a55 +0x65f:  jmp    08409d2b <+0x935>
08409a5a +0x664:  mov    0xc(%ebp),%eax
08409a5d +0x667:  lea    0x120(%eax),%edx
08409a63 +0x66d:  mov    -0xc(%ebp),%eax
08409a66 +0x670:  addl   $0x1,-0xc(%ebp)
08409a6a +0x674:  mov    %edx,0x8(%esp)
08409a6e +0x678:  mov    %eax,0x4(%esp)
08409a72 +0x67c:  mov    -0x10(%ebp),%eax
08409a75 +0x67f:  mov    %eax,(%esp)
08409a78 +0x682:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08409a7d +0x687:  xor    $0x1,%eax
08409a80 +0x68a:  test   %al,%al
08409a82 +0x68c:  je     08409a8e <+0x698>
08409a84 +0x68e:  mov    $0x0,%eax
08409a89 +0x693:  jmp    08409d2b <+0x935>
08409a8e +0x698:  mov    0xc(%ebp),%eax
08409a91 +0x69b:  lea    0x124(%eax),%edx
08409a97 +0x6a1:  mov    -0xc(%ebp),%eax
08409a9a +0x6a4:  addl   $0x1,-0xc(%ebp)
08409a9e +0x6a8:  mov    %edx,0x8(%esp)
08409aa2 +0x6ac:  mov    %eax,0x4(%esp)
08409aa6 +0x6b0:  mov    -0x10(%ebp),%eax
08409aa9 +0x6b3:  mov    %eax,(%esp)
08409aac +0x6b6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08409ab1 +0x6bb:  xor    $0x1,%eax
08409ab4 +0x6be:  test   %al,%al
08409ab6 +0x6c0:  je     08409ac2 <+0x6cc>
08409ab8 +0x6c2:  mov    $0x0,%eax
08409abd +0x6c7:  jmp    08409d2b <+0x935>
08409ac2 +0x6cc:  mov    0xc(%ebp),%eax
08409ac5 +0x6cf:  lea    0x3c(%eax),%edx
08409ac8 +0x6d2:  mov    -0xc(%ebp),%eax
08409acb +0x6d5:  addl   $0x1,-0xc(%ebp)
08409acf +0x6d9:  mov    %edx,0x8(%esp)
08409ad3 +0x6dd:  mov    %eax,0x4(%esp)
08409ad7 +0x6e1:  mov    -0x10(%ebp),%eax
08409ada +0x6e4:  mov    %eax,(%esp)
08409add +0x6e7:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
08409ae2 +0x6ec:  xor    $0x1,%eax
08409ae5 +0x6ef:  test   %al,%al
08409ae7 +0x6f1:  je     08409af3 <+0x6fd>
08409ae9 +0x6f3:  mov    $0x0,%eax
08409aee +0x6f8:  jmp    08409d2b <+0x935>
08409af3 +0x6fd:  mov    0xc(%ebp),%eax
08409af6 +0x700:  lea    0x128(%eax),%edx
08409afc +0x706:  mov    -0xc(%ebp),%eax
08409aff +0x709:  addl   $0x1,-0xc(%ebp)
08409b03 +0x70d:  mov    %edx,0x8(%esp)
08409b07 +0x711:  mov    %eax,0x4(%esp)
08409b0b +0x715:  mov    -0x10(%ebp),%eax
08409b0e +0x718:  mov    %eax,(%esp)
08409b11 +0x71b:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08409b16 +0x720:  xor    $0x1,%eax
08409b19 +0x723:  test   %al,%al
08409b1b +0x725:  je     08409b27 <+0x731>
08409b1d +0x727:  mov    $0x0,%eax
08409b22 +0x72c:  jmp    08409d2b <+0x935>
08409b27 +0x731:  mov    0xc(%ebp),%eax
08409b2a +0x734:  lea    0x12b(%eax),%edx
08409b30 +0x73a:  mov    -0xc(%ebp),%eax
08409b33 +0x73d:  addl   $0x1,-0xc(%ebp)
08409b37 +0x741:  mov    %edx,0x8(%esp)
08409b3b +0x745:  mov    %eax,0x4(%esp)
08409b3f +0x749:  mov    -0x10(%ebp),%eax
08409b42 +0x74c:  mov    %eax,(%esp)
08409b45 +0x74f:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409b4a +0x754:  xor    $0x1,%eax
08409b4d +0x757:  test   %al,%al
08409b4f +0x759:  je     08409b5b <+0x765>
08409b51 +0x75b:  mov    $0x0,%eax
08409b56 +0x760:  jmp    08409d2b <+0x935>
08409b5b +0x765:  mov    0xc(%ebp),%eax
08409b5e +0x768:  lea    0x12d(%eax),%edx
08409b64 +0x76e:  mov    -0xc(%ebp),%eax
08409b67 +0x771:  addl   $0x1,-0xc(%ebp)
08409b6b +0x775:  mov    %edx,0x8(%esp)
08409b6f +0x779:  mov    %eax,0x4(%esp)
08409b73 +0x77d:  mov    -0x10(%ebp),%eax
08409b76 +0x780:  mov    %eax,(%esp)
08409b79 +0x783:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409b7e +0x788:  xor    $0x1,%eax
08409b81 +0x78b:  test   %al,%al
08409b83 +0x78d:  je     08409b8f <+0x799>
08409b85 +0x78f:  mov    $0x0,%eax
08409b8a +0x794:  jmp    08409d2b <+0x935>
08409b8f +0x799:  mov    0xc(%ebp),%eax
08409b92 +0x79c:  lea    0x12e(%eax),%edx
08409b98 +0x7a2:  mov    -0xc(%ebp),%eax
08409b9b +0x7a5:  addl   $0x1,-0xc(%ebp)
08409b9f +0x7a9:  mov    %edx,0x8(%esp)
08409ba3 +0x7ad:  mov    %eax,0x4(%esp)
08409ba7 +0x7b1:  mov    -0x10(%ebp),%eax
08409baa +0x7b4:  mov    %eax,(%esp)
08409bad +0x7b7:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
08409bb2 +0x7bc:  xor    $0x1,%eax
08409bb5 +0x7bf:  test   %al,%al
08409bb7 +0x7c1:  je     08409bc3 <+0x7cd>
08409bb9 +0x7c3:  mov    $0x0,%eax
08409bbe +0x7c8:  jmp    08409d2b <+0x935>
08409bc3 +0x7cd:  mov    0xc(%ebp),%eax
08409bc6 +0x7d0:  lea    0x131(%eax),%edx
08409bcc +0x7d6:  mov    -0xc(%ebp),%eax
08409bcf +0x7d9:  addl   $0x1,-0xc(%ebp)
08409bd3 +0x7dd:  mov    %edx,0x8(%esp)
08409bd7 +0x7e1:  mov    %eax,0x4(%esp)
08409bdb +0x7e5:  mov    -0x10(%ebp),%eax
08409bde +0x7e8:  mov    %eax,(%esp)
08409be1 +0x7eb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08409be6 +0x7f0:  xor    $0x1,%eax
08409be9 +0x7f3:  test   %al,%al
08409beb +0x7f5:  je     08409bf7 <+0x801>
08409bed +0x7f7:  mov    $0x0,%eax
08409bf2 +0x7fc:  jmp    08409d2b <+0x935>
08409bf7 +0x801:  mov    0xc(%ebp),%eax
08409bfa +0x804:  lea    0x135(%eax),%edx
08409c00 +0x80a:  mov    -0xc(%ebp),%eax
08409c03 +0x80d:  addl   $0x1,-0xc(%ebp)
08409c07 +0x811:  mov    %edx,0x8(%esp)
08409c0b +0x815:  mov    %eax,0x4(%esp)
08409c0f +0x819:  mov    -0x10(%ebp),%eax
08409c12 +0x81c:  mov    %eax,(%esp)
08409c15 +0x81f:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409c1a +0x824:  xor    $0x1,%eax
08409c1d +0x827:  test   %al,%al
08409c1f +0x829:  je     08409c2b <+0x835>
08409c21 +0x82b:  mov    $0x0,%eax
08409c26 +0x830:  jmp    08409d2b <+0x935>
08409c2b +0x835:  mov    0xc(%ebp),%eax
08409c2e +0x838:  lea    0x136(%eax),%edx
08409c34 +0x83e:  mov    -0xc(%ebp),%eax
08409c37 +0x841:  addl   $0x1,-0xc(%ebp)
08409c3b +0x845:  mov    %edx,0x8(%esp)
08409c3f +0x849:  mov    %eax,0x4(%esp)
08409c43 +0x84d:  mov    -0x10(%ebp),%eax
08409c46 +0x850:  mov    %eax,(%esp)
08409c49 +0x853:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409c4e +0x858:  xor    $0x1,%eax
08409c51 +0x85b:  test   %al,%al
08409c53 +0x85d:  je     08409c5f <+0x869>
08409c55 +0x85f:  mov    $0x0,%eax
08409c5a +0x864:  jmp    08409d2b <+0x935>
08409c5f +0x869:  mov    0xc(%ebp),%eax
08409c62 +0x86c:  lea    0x137(%eax),%edx
08409c68 +0x872:  mov    -0xc(%ebp),%eax
08409c6b +0x875:  addl   $0x1,-0xc(%ebp)
08409c6f +0x879:  mov    %edx,0x8(%esp)
08409c73 +0x87d:  mov    %eax,0x4(%esp)
08409c77 +0x881:  mov    -0x10(%ebp),%eax
08409c7a +0x884:  mov    %eax,(%esp)
08409c7d +0x887:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409c82 +0x88c:  xor    $0x1,%eax
08409c85 +0x88f:  test   %al,%al
08409c87 +0x891:  je     08409c93 <+0x89d>
08409c89 +0x893:  mov    $0x0,%eax
08409c8e +0x898:  jmp    08409d2b <+0x935>
08409c93 +0x89d:  mov    0xc(%ebp),%eax
08409c96 +0x8a0:  lea    0x13a(%eax),%edx
08409c9c +0x8a6:  mov    -0xc(%ebp),%eax
08409c9f +0x8a9:  addl   $0x1,-0xc(%ebp)
08409ca3 +0x8ad:  mov    %edx,0x8(%esp)
08409ca7 +0x8b1:  mov    %eax,0x4(%esp)
08409cab +0x8b5:  mov    -0x10(%ebp),%eax
08409cae +0x8b8:  mov    %eax,(%esp)
08409cb1 +0x8bb:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08409cb6 +0x8c0:  xor    $0x1,%eax
08409cb9 +0x8c3:  test   %al,%al
08409cbb +0x8c5:  je     08409cc4 <+0x8ce>
08409cbd +0x8c7:  mov    $0x0,%eax
08409cc2 +0x8cc:  jmp    08409d2b <+0x935>
08409cc4 +0x8ce:  mov    0xc(%ebp),%eax
08409cc7 +0x8d1:  lea    0x13b(%eax),%edx
08409ccd +0x8d7:  mov    -0xc(%ebp),%eax
08409cd0 +0x8da:  addl   $0x1,-0xc(%ebp)
08409cd4 +0x8de:  mov    %edx,0x8(%esp)
08409cd8 +0x8e2:  mov    %eax,0x4(%esp)
08409cdc +0x8e6:  mov    -0x10(%ebp),%eax
08409cdf +0x8e9:  mov    %eax,(%esp)
08409ce2 +0x8ec:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08409ce7 +0x8f1:  xor    $0x1,%eax
08409cea +0x8f4:  test   %al,%al
08409cec +0x8f6:  je     08409cf5 <+0x8ff>
08409cee +0x8f8:  mov    $0x0,%eax
08409cf3 +0x8fd:  jmp    08409d2b <+0x935>
08409cf5 +0x8ff:  mov    0xc(%ebp),%eax
08409cf8 +0x902:  lea    0x13c(%eax),%edx
08409cfe +0x908:  mov    -0xc(%ebp),%eax
08409d01 +0x90b:  addl   $0x1,-0xc(%ebp)
08409d05 +0x90f:  mov    %edx,0x8(%esp)
08409d09 +0x913:  mov    %eax,0x4(%esp)
08409d0d +0x917:  mov    -0x10(%ebp),%eax
08409d10 +0x91a:  mov    %eax,(%esp)
08409d13 +0x91d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08409d18 +0x922:  xor    $0x1,%eax
08409d1b +0x925:  test   %al,%al
08409d1d +0x927:  je     08409d26 <+0x930>
08409d1f +0x929:  mov    $0x0,%eax
08409d24 +0x92e:  jmp    08409d2b <+0x935>
08409d26 +0x930:  mov    $0x1,%eax
08409d2b +0x935:  leave
08409d2c +0x936:  ret
08409d2d +0x937:  nop
```

## 反编译 C

```c
// DB_LoadCharac::_getCharacStat @ 0x84093f6

/* DB_LoadCharac::_getCharacStat(SIG_LOAD_CHARAC*) */

undefined4 __thiscall DB_LoadCharac::_getCharacStat(DB_LoadCharac *this,SIG_LOAD_CHARAC *param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  
  this_00 = (MySQL *)_getGameDB();
  MySQL::set_query(this_00,
                   "seLect village,exp,HP,fatigue,premium_fatigue,unix_timestamp(last_play_time),used_fatigue,tutorial_flag,trade_gold_total,trade_gold_daily,open_flag,chaos_point,chaos_exp,chaos_mode_count,chaos_kill_count,chaos_die_count,unix_timestamp(chaos_die_time),assault_count,luck_point,dungeon_play_count,unix_timestamp(chaos_kill_time),help_abuse_ratio,help_abuse_exp,expert_job_exp,fatigue_battery_charging,escalade_tutorial_flag,power_war_point,village_prev,power_war_assault_count,power_war_assault_victory_count,unix_timestamp(last_play_time_powerwar),fatigue_grownup_buff,emotion,add_slot_flag,member_dungeon_flag,member_bonus_fatigue,last_play_dungeon_index, add_equipslot_flag, channel_equipslot_switch, expand_equipslot_switch, visible_flags, growth_power_reward, unix_timestamp(chaos_respon_time) from charac_stat where charac_no=%u"
                   ,*(undefined4 *)(param_1 + 4));
  cVar2 = MySQL::exec(this_00,true);
  if (cVar2 == '\x01') {
    cVar2 = MySQL::fetch(this_00);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_0840945f;
    }
  }
  bVar1 = true;
LAB_0840945f:
  if (bVar1) {
    uVar3 = 0;
  }
  else {
    cVar2 = MySQL::get_byte(this_00,0,(char *)(param_1 + 0x2e));
    if (cVar2 == '\x01') {
      cVar2 = MySQL::get_uint(this_00,1,(uint *)(param_1 + 0x34));
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_ubyte(this_00,2,(uchar *)(param_1 + 0xbe));
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_ushort(this_00,3,(ushort *)(param_1 + 0x38));
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_ushort(this_00,4,(ushort *)(param_1 + 0x67));
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_uint(this_00,5,(uint *)(param_1 + 0x59));
              if (cVar2 == '\x01') {
                cVar2 = MySQL::get_ushort(this_00,6,(ushort *)(param_1 + 0xbf));
                if (cVar2 == '\x01') {
                  cVar2 = MySQL::get_uint(this_00,7,(uint *)(param_1 + 0xc1));
                  if (cVar2 == '\x01') {
                    cVar2 = MySQL::get_uint(this_00,8,(uint *)(param_1 + 0xd5));
                    if (cVar2 == '\x01') {
                      cVar2 = MySQL::get_uint(this_00,9,(uint *)(param_1 + 0xdd));
                      if (cVar2 == '\x01') {
                        *(undefined4 *)(param_1 + 0xd9) = 0;
                        cVar2 = MySQL::get_byte(this_00,10,(char *)(param_1 + 0x101));
                        if (cVar2 == '\x01') {
                          cVar2 = MySQL::get_int(this_00,0xb,(int *)(param_1 + 0xe1));
                          if (cVar2 == '\x01') {
                            cVar2 = MySQL::get_int(this_00,0xc,(int *)(param_1 + 0xe5));
                            if (cVar2 == '\x01') {
                              cVar2 = MySQL::get_int(this_00,0xd,(int *)(param_1 + 0xe9));
                              if (cVar2 == '\x01') {
                                cVar2 = MySQL::get_int(this_00,0xe,(int *)(param_1 + 0xed));
                                if (cVar2 == '\x01') {
                                  cVar2 = MySQL::get_int(this_00,0xf,(int *)(param_1 + 0xf1));
                                  if (cVar2 == '\x01') {
                                    cVar2 = MySQL::get_int(this_00,0x10,(int *)(param_1 + 0xf5));
                                    if (cVar2 == '\x01') {
                                      cVar2 = MySQL::get_int(this_00,0x11,(int *)(param_1 + 0xf9));
                                      if (cVar2 == '\x01') {
                                        cVar2 = MySQL::get_int(this_00,0x12,(int *)(param_1 + 0x102)
                                                              );
                                        if (cVar2 == '\x01') {
                                          cVar2 = MySQL::get_int(this_00,0x13,
                                                                 (int *)(param_1 + 0x106));
                                          if (cVar2 == '\x01') {
                                            cVar2 = MySQL::get_int(this_00,0x14,
                                                                   (int *)(param_1 + 0xfd));
                                            if (cVar2 == '\x01') {
                                              cVar2 = MySQL::get_uint(this_00,0x15,
                                                                      (uint *)(param_1 + 0x10a));
                                              if (cVar2 == '\x01') {
                                                cVar2 = MySQL::get_uint(this_00,0x16,
                                                                        (uint *)(param_1 + 0x10e));
                                                if (cVar2 == '\x01') {
                                                  cVar2 = MySQL::get_int(this_00,0x17,
                                                                         (int *)(param_1 + 0x116));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_short(this_00,0x18,
                                                                             (short *)(param_1 +
                                                                                      0x3e));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_binary(this_00,0x19,
                                                                                param_1 + 0xc5,0x10)
                                                      ;
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_short(this_00,0x1a,
                                                                                 (short *)(param_1 +
                                                                                          0x11a));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x1b,
                                                                                  (char *)(param_1 +
                                                                                          0x2f));
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_uint(this_00,0x1c,
                                                                                    (uint *)(param_1
                                                                                            + 0x11c)
                                                                                   );
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_uint(this_00,0x1d,
                                                                                      (uint *)(
                                                  param_1 + 0x120));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_uint(this_00,0x1e,
                                                                            (uint *)(param_1 + 0x124
                                                                                    ));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_ushort(this_00,0x1f,
                                                                                (ushort *)
                                                                                (param_1 + 0x3c));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_short(this_00,0x20,
                                                                                 (short *)(param_1 +
                                                                                          0x128));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x21,
                                                                                  (char *)(param_1 +
                                                                                          299));
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_byte(this_00,0x22,
                                                                                    (char *)(param_1
                                                                                            + 0x12d)
                                                                                   );
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_short(this_00,0x23,
                                                                                       (short *)(
                                                  param_1 + 0x12e));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_uint(this_00,0x24,
                                                                            (uint *)(param_1 + 0x131
                                                                                    ));
                                                    if (cVar2 == '\x01') {
                                                      cVar2 = MySQL::get_byte(this_00,0x25,
                                                                              (char *)(param_1 +
                                                                                      0x135));
                                                      if (cVar2 == '\x01') {
                                                        cVar2 = MySQL::get_byte(this_00,0x26,
                                                                                (char *)(param_1 +
                                                                                        0x136));
                                                        if (cVar2 == '\x01') {
                                                          cVar2 = MySQL::get_byte(this_00,0x27,
                                                                                  (char *)(param_1 +
                                                                                          0x137));
                                                          if (cVar2 == '\x01') {
                                                            cVar2 = MySQL::get_byte(this_00,0x28,
                                                                                    (char *)(param_1
                                                                                            + 0x13a)
                                                                                   );
                                                            if (cVar2 == '\x01') {
                                                              cVar2 = MySQL::get_ubyte(this_00,0x29,
                                                                                       (uchar *)(
                                                  param_1 + 0x13b));
                                                  if (cVar2 == '\x01') {
                                                    cVar2 = MySQL::get_int(this_00,0x2a,
                                                                           (int *)(param_1 + 0x13c))
                                                    ;
                                                    if (cVar2 == '\x01') {
                                                      uVar3 = 1;
                                                    }
                                                    else {
                                                      uVar3 = 0;
                                                    }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                  }
                                                  else {
                                                    uVar3 = 0;
                                                  }
                                                }
                                                else {
                                                  uVar3 = 0;
                                                }
                                              }
                                              else {
                                                uVar3 = 0;
                                              }
                                            }
                                            else {
                                              uVar3 = 0;
                                            }
                                          }
                                          else {
                                            uVar3 = 0;
                                          }
                                        }
                                        else {
                                          uVar3 = 0;
                                        }
                                      }
                                      else {
                                        uVar3 = 0;
                                      }
                                    }
                                    else {
                                      uVar3 = 0;
                                    }
                                  }
                                  else {
                                    uVar3 = 0;
                                  }
                                }
                                else {
                                  uVar3 = 0;
                                }
                              }
                              else {
                                uVar3 = 0;
                              }
                            }
                            else {
                              uVar3 = 0;
                            }
                          }
                          else {
                            uVar3 = 0;
                          }
                        }
                        else {
                          uVar3 = 0;
                        }
                      }
                      else {
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = 0;
                    }
                  }
                  else {
                    uVar3 = 0;
                  }
                }
                else {
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0;
              }
            }
            else {
              uVar3 = 0;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}
```
