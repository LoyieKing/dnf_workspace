# Select

`_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE`

`advancealtar::DB_Load::Select(advancealtar::_CharacAdvanceAltarDbData&)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813de40` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813de40  _ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE
#           advancealtar::DB_Load::Select(advancealtar::_CharacAdvanceAltarDbData&)
# range [0x0813de40, 0x0813e3e7]
0813de40 +0x000:  push   %ebp
0813de41 +0x001:  mov    %esp,%ebp
0813de43 +0x003:  sub    $0x48,%esp
0813de46 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0813de4b +0x00b:  movl   $0x0,0x8(%esp)
0813de53 +0x013:  movl   $0x3,0x4(%esp)
0813de5b +0x01b:  mov    %eax,(%esp)
0813de5e +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0813de63 +0x023:  mov    %eax,-0x1c(%ebp)
0813de66 +0x026:  mov    0xc(%ebp),%eax
0813de69 +0x029:  mov    (%eax),%eax
0813de6b +0x02b:  mov    %eax,0x8(%esp)
0813de6f +0x02f:  movl   $"select ridable_id, ticket_free, ticket_cera, \t\t\t\t  star_game, star_cera, star_usable, \t\t\t\t  survival_best, star_reset_count, is_unlock_stage_effect, \t\t\t\t  stage_list, slot_list, buy_item_list, reward_list \t\t\t\t  from charac_advance_altar\t\t\t\t\t  where charac_no = %u",0x4(%esp)
0813de77 +0x037:  mov    -0x1c(%ebp),%eax
0813de7a +0x03a:  mov    %eax,(%esp)
0813de7d +0x03d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0813de82 +0x042:  movl   $0x1,0x4(%esp)
0813de8a +0x04a:  mov    -0x1c(%ebp),%eax
0813de8d +0x04d:  mov    %eax,(%esp)
0813de90 +0x050:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0813de95 +0x055:  xor    $0x1,%eax
0813de98 +0x058:  test   %al,%al
0813de9a +0x05a:  je     0813dea6 <+0x66>
0813de9c +0x05c:  mov    $0x0,%eax
0813dea1 +0x061:  jmp    0813e3e6 <+0x5a6>
0813dea6 +0x066:  mov    -0x1c(%ebp),%eax
0813dea9 +0x069:  mov    %eax,(%esp)
0813deac +0x06c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0813deb1 +0x071:  mov    %eax,-0x18(%ebp)
0813deb4 +0x074:  movl   $0x0,-0x14(%ebp)
0813debb +0x07b:  jmp    0813e3bf <+0x57f>
0813dec0 +0x080:  mov    -0x1c(%ebp),%eax
0813dec3 +0x083:  mov    %eax,(%esp)
0813dec6 +0x086:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0813decb +0x08b:  xor    $0x1,%eax
0813dece +0x08e:  test   %al,%al
0813ded0 +0x090:  je     0813dedc <+0x9c>
0813ded2 +0x092:  mov    $0x0,%eax
0813ded7 +0x097:  jmp    0813e3e6 <+0x5a6>
0813dedc +0x09c:  mov    -0x14(%ebp),%eax
0813dedf +0x09f:  imul   $0x518,%eax,%eax
0813dee5 +0x0a5:  add    0xc(%ebp),%eax
0813dee8 +0x0a8:  add    $0x4,%eax
0813deeb +0x0ab:  mov    %eax,-0x10(%ebp)
0813deee +0x0ae:  movl   $0x0,-0xc(%ebp)
0813def5 +0x0b5:  movl   $0x0,-0x20(%ebp)
0813defc +0x0bc:  mov    -0xc(%ebp),%eax
0813deff +0x0bf:  addl   $0x1,-0xc(%ebp)
0813df03 +0x0c3:  lea    -0x20(%ebp),%edx
0813df06 +0x0c6:  mov    %edx,0x8(%esp)
0813df0a +0x0ca:  mov    %eax,0x4(%esp)
0813df0e +0x0ce:  mov    -0x1c(%ebp),%eax
0813df11 +0x0d1:  mov    %eax,(%esp)
0813df14 +0x0d4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0813df19 +0x0d9:  xor    $0x1,%eax
0813df1c +0x0dc:  test   %al,%al
0813df1e +0x0de:  je     0813df2a <+0xea>
0813df20 +0x0e0:  mov    $0x0,%eax
0813df25 +0x0e5:  jmp    0813e3e6 <+0x5a6>
0813df2a +0x0ea:  mov    -0x20(%ebp),%eax
0813df2d +0x0ed:  mov    %eax,(%esp)
0813df30 +0x0f0:  call   08898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>  ; advancealtar::isValidRidableId(advancealtar::RidableId::T)
0813df35 +0x0f5:  xor    $0x1,%eax
0813df38 +0x0f8:  test   %al,%al
0813df3a +0x0fa:  je     0813df79 <+0x139>
0813df3c +0x0fc:  mov    -0x20(%ebp),%eax
0813df3f +0x0ff:  mov    %eax,0x14(%esp)
0813df43 +0x103:  movl   $"invalid RidableId=%d",0x10(%esp)
0813df4b +0x10b:  movl   $0xb1,0xc(%esp)
0813df53 +0x113:  movl   $&_ZZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataEE19__PRETTY_FUNCTION__,0x8(%esp)
0813df5b +0x11b:  movl   $"localglobal/global_AdvanceAltar_Dispatcher.cpp",0x4(%esp)
0813df63 +0x123:  movl   $0x1,(%esp)
0813df6a +0x12a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0813df6f +0x12f:  mov    $0x0,%eax
0813df74 +0x134:  jmp    0813e3e6 <+0x5a6>
0813df79 +0x139:  mov    -0x20(%ebp),%eax
0813df7c +0x13c:  mov    %eax,%edx
0813df7e +0x13e:  mov    -0x10(%ebp),%eax
0813df81 +0x141:  mov    %edx,(%eax)
0813df83 +0x143:  mov    -0x10(%ebp),%eax
0813df86 +0x146:  lea    0x4(%eax),%edx
0813df89 +0x149:  mov    -0xc(%ebp),%eax
0813df8c +0x14c:  addl   $0x1,-0xc(%ebp)
0813df90 +0x150:  mov    %edx,0x8(%esp)
0813df94 +0x154:  mov    %eax,0x4(%esp)
0813df98 +0x158:  mov    -0x1c(%ebp),%eax
0813df9b +0x15b:  mov    %eax,(%esp)
0813df9e +0x15e:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
0813dfa3 +0x163:  xor    $0x1,%eax
0813dfa6 +0x166:  test   %al,%al
0813dfa8 +0x168:  je     0813dfb4 <+0x174>
0813dfaa +0x16a:  mov    $0x0,%eax
0813dfaf +0x16f:  jmp    0813e3e6 <+0x5a6>
0813dfb4 +0x174:  mov    -0x10(%ebp),%eax
0813dfb7 +0x177:  lea    0x8(%eax),%edx
0813dfba +0x17a:  mov    -0xc(%ebp),%eax
0813dfbd +0x17d:  addl   $0x1,-0xc(%ebp)
0813dfc1 +0x181:  mov    %edx,0x8(%esp)
0813dfc5 +0x185:  mov    %eax,0x4(%esp)
0813dfc9 +0x189:  mov    -0x1c(%ebp),%eax
0813dfcc +0x18c:  mov    %eax,(%esp)
0813dfcf +0x18f:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
0813dfd4 +0x194:  xor    $0x1,%eax
0813dfd7 +0x197:  test   %al,%al
0813dfd9 +0x199:  je     0813dfe5 <+0x1a5>
0813dfdb +0x19b:  mov    $0x0,%eax
0813dfe0 +0x1a0:  jmp    0813e3e6 <+0x5a6>
0813dfe5 +0x1a5:  mov    -0x10(%ebp),%eax
0813dfe8 +0x1a8:  lea    0xc(%eax),%edx
0813dfeb +0x1ab:  mov    -0xc(%ebp),%eax
0813dfee +0x1ae:  addl   $0x1,-0xc(%ebp)
0813dff2 +0x1b2:  mov    %edx,0x8(%esp)
0813dff6 +0x1b6:  mov    %eax,0x4(%esp)
0813dffa +0x1ba:  mov    -0x1c(%ebp),%eax
0813dffd +0x1bd:  mov    %eax,(%esp)
0813e000 +0x1c0:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0813e005 +0x1c5:  xor    $0x1,%eax
0813e008 +0x1c8:  test   %al,%al
0813e00a +0x1ca:  je     0813e016 <+0x1d6>
0813e00c +0x1cc:  mov    $0x0,%eax
0813e011 +0x1d1:  jmp    0813e3e6 <+0x5a6>
0813e016 +0x1d6:  mov    -0x10(%ebp),%eax
0813e019 +0x1d9:  lea    0x10(%eax),%edx
0813e01c +0x1dc:  mov    -0xc(%ebp),%eax
0813e01f +0x1df:  addl   $0x1,-0xc(%ebp)
0813e023 +0x1e3:  mov    %edx,0x8(%esp)
0813e027 +0x1e7:  mov    %eax,0x4(%esp)
0813e02b +0x1eb:  mov    -0x1c(%ebp),%eax
0813e02e +0x1ee:  mov    %eax,(%esp)
0813e031 +0x1f1:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0813e036 +0x1f6:  xor    $0x1,%eax
0813e039 +0x1f9:  test   %al,%al
0813e03b +0x1fb:  je     0813e047 <+0x207>
0813e03d +0x1fd:  mov    $0x0,%eax
0813e042 +0x202:  jmp    0813e3e6 <+0x5a6>
0813e047 +0x207:  mov    -0x10(%ebp),%eax
0813e04a +0x20a:  lea    0x14(%eax),%edx
0813e04d +0x20d:  mov    -0xc(%ebp),%eax
0813e050 +0x210:  addl   $0x1,-0xc(%ebp)
0813e054 +0x214:  mov    %edx,0x8(%esp)
0813e058 +0x218:  mov    %eax,0x4(%esp)
0813e05c +0x21c:  mov    -0x1c(%ebp),%eax
0813e05f +0x21f:  mov    %eax,(%esp)
0813e062 +0x222:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0813e067 +0x227:  xor    $0x1,%eax
0813e06a +0x22a:  test   %al,%al
0813e06c +0x22c:  je     0813e078 <+0x238>
0813e06e +0x22e:  mov    $0x0,%eax
0813e073 +0x233:  jmp    0813e3e6 <+0x5a6>
0813e078 +0x238:  mov    -0x10(%ebp),%eax
0813e07b +0x23b:  lea    0x18(%eax),%edx
0813e07e +0x23e:  mov    -0xc(%ebp),%eax
0813e081 +0x241:  addl   $0x1,-0xc(%ebp)
0813e085 +0x245:  mov    %edx,0x8(%esp)
0813e089 +0x249:  mov    %eax,0x4(%esp)
0813e08d +0x24d:  mov    -0x1c(%ebp),%eax
0813e090 +0x250:  mov    %eax,(%esp)
0813e093 +0x253:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0813e098 +0x258:  xor    $0x1,%eax
0813e09b +0x25b:  test   %al,%al
0813e09d +0x25d:  je     0813e0a9 <+0x269>
0813e09f +0x25f:  mov    $0x0,%eax
0813e0a4 +0x264:  jmp    0813e3e6 <+0x5a6>
0813e0a9 +0x269:  mov    -0x10(%ebp),%eax
0813e0ac +0x26c:  lea    0x1a(%eax),%edx
0813e0af +0x26f:  mov    -0xc(%ebp),%eax
0813e0b2 +0x272:  addl   $0x1,-0xc(%ebp)
0813e0b6 +0x276:  mov    %edx,0x8(%esp)
0813e0ba +0x27a:  mov    %eax,0x4(%esp)
0813e0be +0x27e:  mov    -0x1c(%ebp),%eax
0813e0c1 +0x281:  mov    %eax,(%esp)
0813e0c4 +0x284:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0813e0c9 +0x289:  xor    $0x1,%eax
0813e0cc +0x28c:  test   %al,%al
0813e0ce +0x28e:  je     0813e0da <+0x29a>
0813e0d0 +0x290:  mov    $0x0,%eax
0813e0d5 +0x295:  jmp    0813e3e6 <+0x5a6>
0813e0da +0x29a:  movw   $0x0,-0x22(%ebp)
0813e0e0 +0x2a0:  mov    -0xc(%ebp),%eax
0813e0e3 +0x2a3:  addl   $0x1,-0xc(%ebp)
0813e0e7 +0x2a7:  lea    -0x22(%ebp),%edx
0813e0ea +0x2aa:  mov    %edx,0x8(%esp)
0813e0ee +0x2ae:  mov    %eax,0x4(%esp)
0813e0f2 +0x2b2:  mov    -0x1c(%ebp),%eax
0813e0f5 +0x2b5:  mov    %eax,(%esp)
0813e0f8 +0x2b8:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0813e0fd +0x2bd:  xor    $0x1,%eax
0813e100 +0x2c0:  test   %al,%al
0813e102 +0x2c2:  je     0813e10e <+0x2ce>
0813e104 +0x2c4:  mov    $0x0,%eax
0813e109 +0x2c9:  jmp    0813e3e6 <+0x5a6>
0813e10e +0x2ce:  movzwl -0x22(%ebp),%eax
0813e112 +0x2d2:  test   %ax,%ax
0813e115 +0x2d5:  jle    0813e120 <+0x2e0>
0813e117 +0x2d7:  mov    -0x10(%ebp),%eax
0813e11a +0x2da:  movb   $0x1,0x20(%eax)
0813e11e +0x2de:  jmp    0813e127 <+0x2e7>
0813e120 +0x2e0:  mov    -0x10(%ebp),%eax
0813e123 +0x2e3:  movb   $0x0,0x20(%eax)
0813e127 +0x2e7:  movl   $0x800,0x8(%esp)
0813e12f +0x2ef:  movl   $0x0,0x4(%esp)
0813e137 +0x2f7:  movl   $&_ZN12advancealtar16g_StrStageBufferE,(%esp)
0813e13e +0x2fe:  call   0807dcc0 <_init+0x5b8>
0813e143 +0x303:  movl   $0x800,0x8(%esp)
0813e14b +0x30b:  movl   $0x0,0x4(%esp)
0813e153 +0x313:  movl   $&_ZN12advancealtar15g_StrSlotBufferE,(%esp)
0813e15a +0x31a:  call   0807dcc0 <_init+0x5b8>
0813e15f +0x31f:  movl   $0x800,0x8(%esp)
0813e167 +0x327:  movl   $0x0,0x4(%esp)
0813e16f +0x32f:  movl   $&_ZN12advancealtar18g_StrBuyItemBufferE,(%esp)
0813e176 +0x336:  call   0807dcc0 <_init+0x5b8>
0813e17b +0x33b:  movl   $0x800,0x8(%esp)
0813e183 +0x343:  movl   $0x0,0x4(%esp)
0813e18b +0x34b:  movl   $&_ZN12advancealtar17g_StrRewardBufferE,(%esp)
0813e192 +0x352:  call   0807dcc0 <_init+0x5b8>
0813e197 +0x357:  mov    -0xc(%ebp),%eax
0813e19a +0x35a:  addl   $0x1,-0xc(%ebp)
0813e19e +0x35e:  movl   $0x800,0x14(%esp)
0813e1a6 +0x366:  movl   $&_ZN12advancealtar16g_StrStageBufferE,0x10(%esp)
0813e1ae +0x36e:  movl   $0x800,0xc(%esp)
0813e1b6 +0x376:  movl   $&_ZN12advancealtar16g_ZipStageBufferE,0x8(%esp)
0813e1be +0x37e:  mov    %eax,0x4(%esp)
0813e1c2 +0x382:  mov    -0x1c(%ebp),%eax
0813e1c5 +0x385:  mov    %eax,(%esp)
0813e1c8 +0x388:  call   0813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>  ; advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)
0813e1cd +0x38d:  xor    $0x1,%eax
0813e1d0 +0x390:  test   %al,%al
0813e1d2 +0x392:  je     0813e1de <+0x39e>
0813e1d4 +0x394:  mov    $0x0,%eax
0813e1d9 +0x399:  jmp    0813e3e6 <+0x5a6>
0813e1de +0x39e:  mov    -0xc(%ebp),%eax
0813e1e1 +0x3a1:  addl   $0x1,-0xc(%ebp)
0813e1e5 +0x3a5:  movl   $0x800,0x14(%esp)
0813e1ed +0x3ad:  movl   $&_ZN12advancealtar15g_StrSlotBufferE,0x10(%esp)
0813e1f5 +0x3b5:  movl   $0x800,0xc(%esp)
0813e1fd +0x3bd:  movl   $&_ZN12advancealtar15g_ZipSlotBufferE,0x8(%esp)
0813e205 +0x3c5:  mov    %eax,0x4(%esp)
0813e209 +0x3c9:  mov    -0x1c(%ebp),%eax
0813e20c +0x3cc:  mov    %eax,(%esp)
0813e20f +0x3cf:  call   0813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>  ; advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)
0813e214 +0x3d4:  xor    $0x1,%eax
0813e217 +0x3d7:  test   %al,%al
0813e219 +0x3d9:  je     0813e225 <+0x3e5>
0813e21b +0x3db:  mov    $0x0,%eax
0813e220 +0x3e0:  jmp    0813e3e6 <+0x5a6>
0813e225 +0x3e5:  mov    -0xc(%ebp),%eax
0813e228 +0x3e8:  addl   $0x1,-0xc(%ebp)
0813e22c +0x3ec:  movl   $0x800,0x14(%esp)
0813e234 +0x3f4:  movl   $&_ZN12advancealtar18g_StrBuyItemBufferE,0x10(%esp)
0813e23c +0x3fc:  movl   $0x800,0xc(%esp)
0813e244 +0x404:  movl   $&_ZN12advancealtar18g_ZipBuyItemBufferE,0x8(%esp)
0813e24c +0x40c:  mov    %eax,0x4(%esp)
0813e250 +0x410:  mov    -0x1c(%ebp),%eax
0813e253 +0x413:  mov    %eax,(%esp)
0813e256 +0x416:  call   0813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>  ; advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)
0813e25b +0x41b:  xor    $0x1,%eax
0813e25e +0x41e:  test   %al,%al
0813e260 +0x420:  je     0813e26c <+0x42c>
0813e262 +0x422:  mov    $0x0,%eax
0813e267 +0x427:  jmp    0813e3e6 <+0x5a6>
0813e26c +0x42c:  mov    -0xc(%ebp),%eax
0813e26f +0x42f:  addl   $0x1,-0xc(%ebp)
0813e273 +0x433:  movl   $0x800,0x14(%esp)
0813e27b +0x43b:  movl   $&_ZN12advancealtar17g_StrRewardBufferE,0x10(%esp)
0813e283 +0x443:  movl   $0x800,0xc(%esp)
0813e28b +0x44b:  movl   $&_ZN12advancealtar17g_ZipRewardBufferE,0x8(%esp)
0813e293 +0x453:  mov    %eax,0x4(%esp)
0813e297 +0x457:  mov    -0x1c(%ebp),%eax
0813e29a +0x45a:  mov    %eax,(%esp)
0813e29d +0x45d:  call   0813dc48 <_ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j>  ; advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)
0813e2a2 +0x462:  xor    $0x1,%eax
0813e2a5 +0x465:  test   %al,%al
0813e2a7 +0x467:  je     0813e2b3 <+0x473>
0813e2a9 +0x469:  mov    $0x0,%eax
0813e2ae +0x46e:  jmp    0813e3e6 <+0x5a6>
0813e2b3 +0x473:  mov    -0x14(%ebp),%eax
0813e2b6 +0x476:  imul   $0x518,%eax,%eax
0813e2bc +0x47c:  add    $0x20,%eax
0813e2bf +0x47f:  add    0xc(%ebp),%eax
0813e2c2 +0x482:  add    $0x5,%eax
0813e2c5 +0x485:  movl   $0x32,0xc(%esp)
0813e2cd +0x48d:  mov    %eax,0x8(%esp)
0813e2d1 +0x491:  movl   $&_ZN12advancealtar16g_StrStageBufferE,0x4(%esp)
0813e2d9 +0x499:  mov    0x8(%ebp),%eax
0813e2dc +0x49c:  mov    %eax,(%esp)
0813e2df +0x49f:  call   0813e3e8 <_ZN12advancealtar7DB_Load10parseStageEPcPNS_6_StageEi>  ; advancealtar::DB_Load::parseStage(char*, advancealtar::_Stage*, int)
0813e2e4 +0x4a4:  xor    $0x1,%eax
0813e2e7 +0x4a7:  test   %al,%al
0813e2e9 +0x4a9:  je     0813e2f5 <+0x4b5>
0813e2eb +0x4ab:  mov    $0x0,%eax
0813e2f0 +0x4b0:  jmp    0813e3e6 <+0x5a6>
0813e2f5 +0x4b5:  mov    -0x14(%ebp),%eax
0813e2f8 +0x4b8:  imul   $0x518,%eax,%eax
0813e2fe +0x4be:  add    $0x1b0,%eax
0813e303 +0x4c3:  add    0xc(%ebp),%eax
0813e306 +0x4c6:  add    $0x5,%eax
0813e309 +0x4c9:  movl   $0xc,0xc(%esp)
0813e311 +0x4d1:  mov    %eax,0x8(%esp)
0813e315 +0x4d5:  movl   $&_ZN12advancealtar15g_StrSlotBufferE,0x4(%esp)
0813e31d +0x4dd:  mov    0x8(%ebp),%eax
0813e320 +0x4e0:  mov    %eax,(%esp)
0813e323 +0x4e3:  call   0813e542 <_ZN12advancealtar7DB_Load9parseSlotEPcPNS_5_SlotEi>  ; advancealtar::DB_Load::parseSlot(char*, advancealtar::_Slot*, int)
0813e328 +0x4e8:  xor    $0x1,%eax
0813e32b +0x4eb:  test   %al,%al
0813e32d +0x4ed:  je     0813e339 <+0x4f9>
0813e32f +0x4ef:  mov    $0x0,%eax
0813e334 +0x4f4:  jmp    0813e3e6 <+0x5a6>
0813e339 +0x4f9:  mov    -0x14(%ebp),%eax
0813e33c +0x4fc:  imul   $0x518,%eax,%eax
0813e342 +0x502:  add    $0x220,%eax
0813e347 +0x507:  add    0xc(%ebp),%eax
0813e34a +0x50a:  add    $0xd,%eax
0813e34d +0x50d:  movl   $0x32,0xc(%esp)
0813e355 +0x515:  mov    %eax,0x8(%esp)
0813e359 +0x519:  movl   $&_ZN12advancealtar18g_StrBuyItemBufferE,0x4(%esp)
0813e361 +0x521:  mov    0x8(%ebp),%eax
0813e364 +0x524:  mov    %eax,(%esp)
0813e367 +0x527:  call   0813e708 <_ZN12advancealtar7DB_Load12parseBuyItemEPcPNS_8_BuyItemEi>  ; advancealtar::DB_Load::parseBuyItem(char*, advancealtar::_BuyItem*, int)
0813e36c +0x52c:  xor    $0x1,%eax
0813e36f +0x52f:  test   %al,%al
0813e371 +0x531:  je     0813e37a <+0x53a>
0813e373 +0x533:  mov    $0x0,%eax
0813e378 +0x538:  jmp    0813e3e6 <+0x5a6>
0813e37a +0x53a:  mov    -0x14(%ebp),%eax
0813e37d +0x53d:  imul   $0x518,%eax,%eax
0813e383 +0x543:  add    $0x480,%eax
0813e388 +0x548:  add    0xc(%ebp),%eax
0813e38b +0x54b:  add    $0x5,%eax
0813e38e +0x54e:  movl   $0x1e,0xc(%esp)
0813e396 +0x556:  mov    %eax,0x8(%esp)
0813e39a +0x55a:  movl   $&_ZN12advancealtar17g_StrRewardBufferE,0x4(%esp)
0813e3a2 +0x562:  mov    0x8(%ebp),%eax
0813e3a5 +0x565:  mov    %eax,(%esp)
0813e3a8 +0x568:  call   0813e8cc <_ZN12advancealtar7DB_Load11parseRewardEPcPNS_7_RewardEi>  ; advancealtar::DB_Load::parseReward(char*, advancealtar::_Reward*, int)
0813e3ad +0x56d:  xor    $0x1,%eax
0813e3b0 +0x570:  test   %al,%al
0813e3b2 +0x572:  je     0813e3bb <+0x57b>
0813e3b4 +0x574:  mov    $0x0,%eax
0813e3b9 +0x579:  jmp    0813e3e6 <+0x5a6>
0813e3bb +0x57b:  addl   $0x1,-0x14(%ebp)
0813e3bf +0x57f:  mov    -0x14(%ebp),%eax
0813e3c2 +0x582:  cmp    -0x18(%ebp),%eax
0813e3c5 +0x585:  jge    0813e3d4 <+0x594>
0813e3c7 +0x587:  cmpl   $0x0,-0x14(%ebp)
0813e3cb +0x58b:  jg     0813e3d4 <+0x594>
0813e3cd +0x58d:  mov    $0x1,%eax
0813e3d2 +0x592:  jmp    0813e3d9 <+0x599>
0813e3d4 +0x594:  mov    $0x0,%eax
0813e3d9 +0x599:  test   %al,%al
0813e3db +0x59b:  jne    0813dec0 <+0x80>
0813e3e1 +0x5a1:  mov    $0x1,%eax
0813e3e6 +0x5a6:  leave
0813e3e7 +0x5a7:  ret
```

## 反编译 C

```c
// advancealtar::DB_Load::Select @ 0x813de40

/* advancealtar::DB_Load::Select(advancealtar::_CharacAdvanceAltarDbData&) */

undefined4 __thiscall
advancealtar::DB_Load::Select(DB_Load *this,_CharacAdvanceAltarDbData *param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  short local_26;
  int local_24;
  MySQL *local_20;
  int local_1c;
  int local_18;
  _CharacAdvanceAltarDbData *local_14;
  int local_10;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  MySQL::set_query(local_20,
                   "select ridable_id, ticket_free, ticket_cera, \t\t\t\t  star_game, star_cera, star_usable, \t\t\t\t  survival_best, star_reset_count, is_unlock_stage_effect, \t\t\t\t  stage_list, slot_list, buy_item_list, reward_list \t\t\t\t  from charac_advance_altar\t\t\t\t\t  where charac_no = %u"
                   ,*(undefined4 *)param_1);
  cVar3 = MySQL::exec(local_20,true);
  if (cVar3 == '\x01') {
    local_1c = MySQL::get_n_rows(local_20);
    local_18 = 0;
    while( true ) {
      if ((local_18 < local_1c) && (local_18 < 1)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) {
        return 1;
      }
      cVar3 = MySQL::fetch(local_20);
      if (cVar3 != '\x01') {
        return 0;
      }
      local_14 = param_1 + local_18 * 0x518 + 4;
      local_24 = 0;
      local_10 = 1;
      cVar3 = MySQL::get_int(local_20,0,&local_24);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = isValidRidableId(local_24);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"localglobal/global_AdvanceAltar_Dispatcher.cpp",
                   "bool advancealtar::DB_Load::Select(advancealtar::CharacAdvanceAltarDbData&)",
                   0xb1,"invalid RidableId=%d",local_24);
        return 0;
      }
      *(int *)local_14 = local_24;
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(int *)(local_14 + 4));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(int *)(local_14 + 8));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_int(local_20,iVar2,(int *)(local_14 + 0xc));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_int(local_20,iVar2,(int *)(local_14 + 0x10));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_int(local_20,iVar2,(int *)(local_14 + 0x14));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(short *)(local_14 + 0x18));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,(short *)(local_14 + 0x1a));
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_26 = 0;
      local_10 = local_10 + 1;
      cVar3 = MySQL::get_short(local_20,iVar2,&local_26);
      if (cVar3 != '\x01') {
        return 0;
      }
      if (local_26 < 1) {
        local_14[0x20] = (_CharacAdvanceAltarDbData)0x0;
      }
      else {
        local_14[0x20] = (_CharacAdvanceAltarDbData)0x1;
      }
      memset(g_StrStageBuffer,0,0x800);
      memset(g_StrSlotBuffer,0,0x800);
      memset(g_StrBuyItemBuffer,0,0x800);
      memset(g_StrRewardBuffer,0,0x800);
      iVar2 = local_10;
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipStageBuffer,0x800,g_StrStageBuffer,0x800);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipSlotBuffer,0x800,g_StrSlotBuffer,0x800);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipBuyItemBuffer,0x800,g_StrBuyItemBuffer,0x800);
      iVar2 = local_10;
      if (cVar3 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      cVar3 = convertZipToString(local_20,iVar2,g_ZipRewardBuffer,0x800,g_StrRewardBuffer,0x800);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseStage(this,g_StrStageBuffer,(_Stage *)(param_1 + local_18 * 0x518 + 0x25),0x32);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseSlot(this,g_StrSlotBuffer,(_Slot *)(param_1 + local_18 * 0x518 + 0x1b5),0xc);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseBuyItem(this,g_StrBuyItemBuffer,(_BuyItem *)(param_1 + local_18 * 0x518 + 0x22d),
                           0x32);
      if (cVar3 != '\x01') {
        return 0;
      }
      cVar3 = parseReward(this,g_StrRewardBuffer,(_Reward *)(param_1 + local_18 * 0x518 + 0x485),
                          0x1e);
      if (cVar3 != '\x01') break;
      local_18 = local_18 + 1;
    }
  }
  return 0;
}
```
