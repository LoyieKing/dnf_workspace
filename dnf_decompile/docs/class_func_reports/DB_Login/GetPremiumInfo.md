# GetPremiumInfo

`_ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE`

`DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08411ee8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08411ee8  _ZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EE
#           DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
# range [0x08411ee8, 0x084128c3]
08411ee8 +0x000:  push   %ebp
08411ee9 +0x001:  mov    %esp,%ebp
08411eeb +0x003:  push   %esi
08411eec +0x004:  push   %ebx
08411eed +0x005:  sub    $0xa0,%esp
08411ef3 +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08411ef8 +0x010:  movl   $0x0,0x8(%esp)
08411f00 +0x018:  movl   $0x6,0x4(%esp)
08411f08 +0x020:  mov    %eax,(%esp)
08411f0b +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08411f10 +0x028:  mov    %eax,-0x18(%ebp)
08411f13 +0x02b:  mov    0x8(%ebp),%eax
08411f16 +0x02e:  mov    %eax,(%esp)
08411f19 +0x031:  call   08411bae <_ZN8DB_Login16_GetDNFAccountDBEv>  ; DB_Login::_GetDNFAccountDB()
08411f1e +0x036:  mov    %eax,-0x14(%ebp)
08411f21 +0x039:  lea    -0x54(%ebp),%eax
08411f24 +0x03c:  mov    %eax,(%esp)
08411f27 +0x03f:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08411f2c +0x044:  lea    -0x60(%ebp),%eax
08411f2f +0x047:  mov    %eax,(%esp)
08411f32 +0x04a:  call   0808e1ac <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x1c>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x1c
08411f37 +0x04f:  movl   $0x0,-0x10(%ebp)
08411f3e +0x056:  mov    0x10(%ebp),%eax
08411f41 +0x059:  movl   $0x0,0x2294(%eax)
08411f4b +0x063:  mov    0x10(%ebp),%eax
08411f4e +0x066:  movw   $0x0,0x293a(%eax)
08411f57 +0x06f:  mov    0x10(%ebp),%eax
08411f5a +0x072:  movl   $0x0,0x394c(%eax)
08411f64 +0x07c:  lea    -0x64(%ebp),%eax
08411f67 +0x07f:  mov    0x14(%ebp),%edx
08411f6a +0x082:  mov    %edx,0x4(%esp)
08411f6e +0x086:  mov    %eax,(%esp)
08411f71 +0x089:  call   0818d7ea <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x56a>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x56a
08411f76 +0x08e:  sub    $0x4,%esp
08411f79 +0x091:  lea    -0x68(%ebp),%eax
08411f7c +0x094:  mov    0x14(%ebp),%edx
08411f7f +0x097:  mov    %edx,0x4(%esp)
08411f83 +0x09b:  mov    %eax,(%esp)
08411f86 +0x09e:  call   0818d356 <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0xd6>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0xd6
08411f8b +0x0a3:  sub    $0x4,%esp
08411f8e +0x0a6:  jmp    08412828 <+0x940>
08411f93 +0x0ab:  lea    -0x64(%ebp),%eax
08411f96 +0x0ae:  mov    %eax,(%esp)
08411f99 +0x0b1:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08411f9e +0x0b6:  mov    (%eax),%eax
08411fa0 +0x0b8:  cmp    $0xa028,%eax
08411fa5 +0x0bd:  jle    08411fc2 <+0xda>
08411fa7 +0x0bf:  lea    -0x64(%ebp),%eax
08411faa +0x0c2:  mov    %eax,(%esp)
08411fad +0x0c5:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08411fb2 +0x0ca:  mov    (%eax),%eax
08411fb4 +0x0cc:  cmp    $0xa02b,%eax
08411fb9 +0x0d1:  jg     08411fc2 <+0xda>
08411fbb +0x0d3:  mov    $0x1,%eax
08411fc0 +0x0d8:  jmp    08411fc7 <+0xdf>
08411fc2 +0x0da:  mov    $0x0,%eax
08411fc7 +0x0df:  test   %al,%al
08411fc9 +0x0e1:  je     08412308 <+0x420>
08411fcf +0x0e7:  mov    0x10(%ebp),%eax
08411fd2 +0x0ea:  mov    0xc0(%eax),%eax
08411fd8 +0x0f0:  movl   $0x0,0x4(%esp)
08411fe0 +0x0f8:  mov    %eax,(%esp)
08411fe3 +0x0fb:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08411fe8 +0x100:  mov    %eax,%ebx
08411fea +0x102:  lea    -0x64(%ebp),%eax
08411fed +0x105:  mov    %eax,(%esp)
08411ff0 +0x108:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08411ff5 +0x10d:  mov    (%eax),%eax
08411ff7 +0x10f:  mov    %ebx,0xc(%esp)
08411ffb +0x113:  mov    %eax,0x8(%esp)
08411fff +0x117:  movl   $"seLect m_id,charac_no,server_id,unix_timestamp(start_time),charac_name from member_broadcast where event_id=%d and m_id=%s and end_time>now() limit 1",0x4(%esp)
08412007 +0x11f:  mov    -0x14(%ebp),%eax
0841200a +0x122:  mov    %eax,(%esp)
0841200d +0x125:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08412012 +0x12a:  movl   $0x1,0x4(%esp)
0841201a +0x132:  mov    -0x14(%ebp),%eax
0841201d +0x135:  mov    %eax,(%esp)
08412020 +0x138:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08412025 +0x13d:  mov    -0x14(%ebp),%eax
08412028 +0x140:  mov    %eax,(%esp)
0841202b +0x143:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08412030 +0x148:  test   %eax,%eax
08412032 +0x14a:  sete   %al
08412035 +0x14d:  test   %al,%al
08412037 +0x14f:  je     08412058 <+0x170>
08412039 +0x151:  lea    -0x64(%ebp),%eax
0841203c +0x154:  mov    %eax,(%esp)
0841203f +0x157:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412044 +0x15c:  mov    %eax,0x4(%esp)
08412048 +0x160:  lea    -0x60(%ebp),%eax
0841204b +0x163:  mov    %eax,(%esp)
0841204e +0x166:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
08412053 +0x16b:  jmp    0841281d <+0x935>
08412058 +0x170:  mov    -0x14(%ebp),%eax
0841205b +0x173:  mov    %eax,(%esp)
0841205e +0x176:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08412063 +0x17b:  xor    $0x1,%eax
08412066 +0x17e:  test   %al,%al
08412068 +0x180:  jne    08412844 <+0x95c>
0841206e +0x186:  lea    -0x74(%ebp),%eax
08412071 +0x189:  mov    %eax,0x8(%esp)
08412075 +0x18d:  movl   $0x0,0x4(%esp)
0841207d +0x195:  mov    -0x14(%ebp),%eax
08412080 +0x198:  mov    %eax,(%esp)
08412083 +0x19b:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08412088 +0x1a0:  xor    $0x1,%eax
0841208b +0x1a3:  test   %al,%al
0841208d +0x1a5:  jne    084127fe <+0x916>
08412093 +0x1ab:  lea    -0x74(%ebp),%eax
08412096 +0x1ae:  add    $0x4,%eax
08412099 +0x1b1:  mov    %eax,0x8(%esp)
0841209d +0x1b5:  movl   $0x1,0x4(%esp)
084120a5 +0x1bd:  mov    -0x14(%ebp),%eax
084120a8 +0x1c0:  mov    %eax,(%esp)
084120ab +0x1c3:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084120b0 +0x1c8:  xor    $0x1,%eax
084120b3 +0x1cb:  test   %al,%al
084120b5 +0x1cd:  jne    08412801 <+0x919>
084120bb +0x1d3:  lea    -0x74(%ebp),%eax
084120be +0x1d6:  add    $0x8,%eax
084120c1 +0x1d9:  mov    %eax,0x8(%esp)
084120c5 +0x1dd:  movl   $0x2,0x4(%esp)
084120cd +0x1e5:  mov    -0x14(%ebp),%eax
084120d0 +0x1e8:  mov    %eax,(%esp)
084120d3 +0x1eb:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084120d8 +0x1f0:  xor    $0x1,%eax
084120db +0x1f3:  test   %al,%al
084120dd +0x1f5:  jne    08412804 <+0x91c>
084120e3 +0x1fb:  lea    -0x78(%ebp),%eax
084120e6 +0x1fe:  mov    %eax,0x8(%esp)
084120ea +0x202:  movl   $0x3,0x4(%esp)
084120f2 +0x20a:  mov    -0x14(%ebp),%eax
084120f5 +0x20d:  mov    %eax,(%esp)
084120f8 +0x210:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084120fd +0x215:  xor    $0x1,%eax
08412100 +0x218:  test   %al,%al
08412102 +0x21a:  jne    08412807 <+0x91f>
08412108 +0x220:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0841210d +0x225:  mov    %eax,(%esp)
08412110 +0x228:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08412115 +0x22d:  cmp    $0x7,%eax
08412118 +0x230:  sete   %al
0841211b +0x233:  test   %al,%al
0841211d +0x235:  je     0841216f <+0x287>
0841211f +0x237:  lea    -0x64(%ebp),%eax
08412122 +0x23a:  mov    %eax,(%esp)
08412125 +0x23d:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0841212a +0x242:  mov    (%eax),%eax
0841212c +0x244:  cmp    $0xa029,%eax
08412131 +0x249:  sete   %al
08412134 +0x24c:  test   %al,%al
08412136 +0x24e:  je     0841280a <+0x922>
0841213c +0x254:  mov    0x10(%ebp),%eax
0841213f +0x257:  add    $0x39b0,%eax
08412144 +0x25c:  movl   $0x1e,0xc(%esp)
0841214c +0x264:  mov    %eax,0x8(%esp)
08412150 +0x268:  movl   $0x4,0x4(%esp)
08412158 +0x270:  mov    -0x14(%ebp),%eax
0841215b +0x273:  mov    %eax,(%esp)
0841215e +0x276:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08412163 +0x27b:  xor    $0x1,%eax
08412166 +0x27e:  test   %al,%al
08412168 +0x280:  je     084121e4 <+0x2fc>
0841216a +0x282:  jmp    0841281d <+0x935>
0841216f +0x287:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08412174 +0x28c:  mov    %eax,(%esp)
08412177 +0x28f:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0841217c +0x294:  cmp    $0xe,%eax
0841217f +0x297:  sete   %al
08412182 +0x29a:  test   %al,%al
08412184 +0x29c:  je     084121e4 <+0x2fc>
08412186 +0x29e:  lea    -0x64(%ebp),%eax
08412189 +0x2a1:  mov    %eax,(%esp)
0841218c +0x2a4:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412191 +0x2a9:  mov    (%eax),%eax
08412193 +0x2ab:  cmp    $0xa02a,%eax
08412198 +0x2b0:  jne    084121aa <+0x2c2>
0841219a +0x2b2:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
0841219f +0x2b7:  cmp    $0x1,%al
084121a1 +0x2b9:  jne    084121aa <+0x2c2>
084121a3 +0x2bb:  mov    $0x1,%eax
084121a8 +0x2c0:  jmp    084121af <+0x2c7>
084121aa +0x2c2:  mov    $0x0,%eax
084121af +0x2c7:  test   %al,%al
084121b1 +0x2c9:  jne    084121e4 <+0x2fc>
084121b3 +0x2cb:  lea    -0x64(%ebp),%eax
084121b6 +0x2ce:  mov    %eax,(%esp)
084121b9 +0x2d1:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
084121be +0x2d6:  mov    (%eax),%eax
084121c0 +0x2d8:  cmp    $0xa02b,%eax
084121c5 +0x2dd:  jne    084121d7 <+0x2ef>
084121c7 +0x2df:  call   0855fee8 <_ZN18online_preliminary18COnlinePreliminary22GetPlayCountPerOneTeamEv>  ; online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam()
084121cc +0x2e4:  cmp    $0x1,%al
084121ce +0x2e6:  je     084121d7 <+0x2ef>
084121d0 +0x2e8:  mov    $0x1,%eax
084121d5 +0x2ed:  jmp    084121dc <+0x2f4>
084121d7 +0x2ef:  mov    $0x0,%eax
084121dc +0x2f4:  test   %al,%al
084121de +0x2f6:  je     0841280d <+0x925>
084121e4 +0x2fc:  mov    -0x78(%ebp),%eax
084121e7 +0x2ff:  mov    %eax,%ebx
084121e9 +0x301:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084121f0 +0x308:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084121f5 +0x30d:  cmp    %eax,%ebx
084121f7 +0x30f:  setg   %al
084121fa +0x312:  test   %al,%al
084121fc +0x314:  jne    08412810 <+0x928>
08412202 +0x31a:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08412207 +0x31f:  mov    %eax,(%esp)
0841220a +0x322:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0841220f +0x327:  cmp    $0x7,%eax
08412212 +0x32a:  je     08412226 <+0x33e>
08412214 +0x32c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08412219 +0x331:  mov    %eax,(%esp)
0841221c +0x334:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
08412221 +0x339:  cmp    $0xe,%eax
08412224 +0x33c:  jne    0841222d <+0x345>
08412226 +0x33e:  mov    $0x1,%eax
0841222b +0x343:  jmp    08412232 <+0x34a>
0841222d +0x345:  mov    $0x0,%eax
08412232 +0x34a:  test   %al,%al
08412234 +0x34c:  je     08412251 <+0x369>
08412236 +0x34e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841223b +0x353:  lea    -0x74(%ebp),%edx
0841223e +0x356:  mov    %edx,0x8(%esp)
08412242 +0x35a:  mov    0xc(%ebp),%edx
08412245 +0x35d:  mov    %edx,0x4(%esp)
08412249 +0x361:  mov    %eax,(%esp)
0841224c +0x364:  call   083f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>  ; DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&)
08412251 +0x369:  lea    -0x64(%ebp),%eax
08412254 +0x36c:  mov    %eax,(%esp)
08412257 +0x36f:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0841225c +0x374:  mov    (%eax),%eax
0841225e +0x376:  cmp    $0xa02a,%eax
08412263 +0x37b:  sete   %al
08412266 +0x37e:  test   %al,%al
08412268 +0x380:  je     0841229e <+0x3b6>
0841226a +0x382:  mov    -0x70(%ebp),%edx
0841226d +0x385:  mov    0x10(%ebp),%eax
08412270 +0x388:  mov    %edx,0x39d4(%eax)
08412276 +0x38e:  mov    -0x6c(%ebp),%edx
08412279 +0x391:  mov    0x10(%ebp),%eax
0841227c +0x394:  mov    %edx,0x39d0(%eax)
08412282 +0x39a:  mov    0x10(%ebp),%eax
08412285 +0x39d:  mov    0x39d8(%eax),%eax
0841228b +0x3a3:  mov    %eax,%edx
0841228d +0x3a5:  or     $0x1,%edx
08412290 +0x3a8:  mov    0x10(%ebp),%eax
08412293 +0x3ab:  mov    %edx,0x39d8(%eax)
08412299 +0x3b1:  jmp    0841281d <+0x935>
0841229e +0x3b6:  lea    -0x64(%ebp),%eax
084122a1 +0x3b9:  mov    %eax,(%esp)
084122a4 +0x3bc:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
084122a9 +0x3c1:  mov    (%eax),%eax
084122ab +0x3c3:  cmp    $0xa02b,%eax
084122b0 +0x3c8:  sete   %al
084122b3 +0x3cb:  test   %al,%al
084122b5 +0x3cd:  je     084122eb <+0x403>
084122b7 +0x3cf:  mov    -0x70(%ebp),%edx
084122ba +0x3d2:  mov    0x10(%ebp),%eax
084122bd +0x3d5:  mov    %edx,0x39d4(%eax)
084122c3 +0x3db:  mov    -0x6c(%ebp),%edx
084122c6 +0x3de:  mov    0x10(%ebp),%eax
084122c9 +0x3e1:  mov    %edx,0x39d0(%eax)
084122cf +0x3e7:  mov    0x10(%ebp),%eax
084122d2 +0x3ea:  mov    0x39d8(%eax),%eax
084122d8 +0x3f0:  mov    %eax,%edx
084122da +0x3f2:  or     $0x2,%edx
084122dd +0x3f5:  mov    0x10(%ebp),%eax
084122e0 +0x3f8:  mov    %edx,0x39d8(%eax)
084122e6 +0x3fe:  jmp    0841281d <+0x935>
084122eb +0x403:  mov    -0x70(%ebp),%edx
084122ee +0x406:  mov    0x10(%ebp),%eax
084122f1 +0x409:  mov    %edx,0x39ac(%eax)
084122f7 +0x40f:  mov    -0x6c(%ebp),%edx
084122fa +0x412:  mov    0x10(%ebp),%eax
084122fd +0x415:  mov    %edx,0x39a8(%eax)
08412303 +0x41b:  jmp    0841281d <+0x935>
08412308 +0x420:  lea    -0x64(%ebp),%eax
0841230b +0x423:  mov    %eax,(%esp)
0841230e +0x426:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412313 +0x42b:  mov    (%eax),%eax
08412315 +0x42d:  cmp    $0xc34f,%eax
0841231a +0x432:  jle    08412330 <+0x448>
0841231c +0x434:  lea    -0x64(%ebp),%eax
0841231f +0x437:  mov    %eax,(%esp)
08412322 +0x43a:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412327 +0x43f:  mov    (%eax),%eax
08412329 +0x441:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
0841232e +0x446:  jle    08412337 <+0x44f>
08412330 +0x448:  mov    $0x1,%eax
08412335 +0x44d:  jmp    0841233c <+0x454>
08412337 +0x44f:  mov    $0x0,%eax
0841233c +0x454:  test   %al,%al
0841233e +0x456:  jne    08412813 <+0x92b>
08412344 +0x45c:  lea    -0x64(%ebp),%eax
08412347 +0x45f:  mov    %eax,(%esp)
0841234a +0x462:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0841234f +0x467:  mov    (%eax),%eax
08412351 +0x469:  cmp    $&_ZL14gUnicodeBuffer+0x6c43,%eax
08412356 +0x46e:  jle    08412373 <+0x48b>
08412358 +0x470:  lea    -0x64(%ebp),%eax
0841235b +0x473:  mov    %eax,(%esp)
0841235e +0x476:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412363 +0x47b:  mov    (%eax),%eax
08412365 +0x47d:  cmp    $&_ZL14gUnicodeBuffer+0xba63,%eax
0841236a +0x482:  jg     08412373 <+0x48b>
0841236c +0x484:  mov    $0x1,%eax
08412371 +0x489:  jmp    08412378 <+0x490>
08412373 +0x48b:  mov    $0x0,%eax
08412378 +0x490:  test   %al,%al
0841237a +0x492:  je     084123b5 <+0x4cd>
0841237c +0x494:  mov    0x10(%ebp),%eax
0841237f +0x497:  movzwl 0x293a(%eax),%ebx
08412386 +0x49e:  movzwl %bx,%esi
08412389 +0x4a1:  lea    -0x64(%ebp),%eax
0841238c +0x4a4:  mov    %eax,(%esp)
0841238f +0x4a7:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412394 +0x4ac:  mov    (%eax),%edx
08412396 +0x4ae:  mov    0x10(%ebp),%eax
08412399 +0x4b1:  lea    0xa4c(%esi),%ecx
0841239f +0x4b7:  mov    %edx,0xc(%eax,%ecx,4)
084123a3 +0x4bb:  lea    0x1(%ebx),%edx
084123a6 +0x4be:  mov    0x10(%ebp),%eax
084123a9 +0x4c1:  mov    %dx,0x293a(%eax)
084123b0 +0x4c8:  jmp    0841281d <+0x935>
084123b5 +0x4cd:  lea    -0x64(%ebp),%eax
084123b8 +0x4d0:  mov    %eax,(%esp)
084123bb +0x4d3:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
084123c0 +0x4d8:  mov    (%eax),%eax
084123c2 +0x4da:  cmp    $0xe678,%eax
084123c7 +0x4df:  sete   %al
084123ca +0x4e2:  test   %al,%al
084123cc +0x4e4:  je     08412407 <+0x51f>
084123ce +0x4e6:  mov    0x10(%ebp),%eax
084123d1 +0x4e9:  movzwl 0x293a(%eax),%ebx
084123d8 +0x4f0:  movzwl %bx,%esi
084123db +0x4f3:  lea    -0x64(%ebp),%eax
084123de +0x4f6:  mov    %eax,(%esp)
084123e1 +0x4f9:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
084123e6 +0x4fe:  mov    (%eax),%edx
084123e8 +0x500:  mov    0x10(%ebp),%eax
084123eb +0x503:  lea    0xa4c(%esi),%ecx
084123f1 +0x509:  mov    %edx,0xc(%eax,%ecx,4)
084123f5 +0x50d:  lea    0x1(%ebx),%edx
084123f8 +0x510:  mov    0x10(%ebp),%eax
084123fb +0x513:  mov    %dx,0x293a(%eax)
08412402 +0x51a:  jmp    0841281d <+0x935>
08412407 +0x51f:  lea    -0x64(%ebp),%eax
0841240a +0x522:  mov    %eax,(%esp)
0841240d +0x525:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412412 +0x52a:  mov    (%eax),%eax
08412414 +0x52c:  mov    %eax,(%esp)
08412417 +0x52f:  call   086af7c4 <_ZN8WongWork12CUserPremium19IsRestrictedPremiumEi>  ; WongWork::CUserPremium::IsRestrictedPremium(int)
0841241c +0x534:  test   %al,%al
0841241e +0x536:  je     08412459 <+0x571>
08412420 +0x538:  mov    0x10(%ebp),%eax
08412423 +0x53b:  movzwl 0x293a(%eax),%ebx
0841242a +0x542:  movzwl %bx,%esi
0841242d +0x545:  lea    -0x64(%ebp),%eax
08412430 +0x548:  mov    %eax,(%esp)
08412433 +0x54b:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412438 +0x550:  mov    (%eax),%edx
0841243a +0x552:  mov    0x10(%ebp),%eax
0841243d +0x555:  lea    0xa4c(%esi),%ecx
08412443 +0x55b:  mov    %edx,0xc(%eax,%ecx,4)
08412447 +0x55f:  lea    0x1(%ebx),%edx
0841244a +0x562:  mov    0x10(%ebp),%eax
0841244d +0x565:  mov    %dx,0x293a(%eax)
08412454 +0x56c:  jmp    0841281d <+0x935>
08412459 +0x571:  lea    -0x64(%ebp),%eax
0841245c +0x574:  mov    %eax,(%esp)
0841245f +0x577:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412464 +0x57c:  mov    0xc(%eax),%esi
08412467 +0x57f:  lea    -0x64(%ebp),%eax
0841246a +0x582:  mov    %eax,(%esp)
0841246d +0x585:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
08412472 +0x58a:  mov    (%eax),%ebx
08412474 +0x58c:  mov    0x10(%ebp),%eax
08412477 +0x58f:  mov    0xc0(%eax),%eax
0841247d +0x595:  movl   $0x0,0x4(%esp)
08412485 +0x59d:  mov    %eax,(%esp)
08412488 +0x5a0:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841248d +0x5a5:  mov    %esi,0x10(%esp)
08412491 +0x5a9:  mov    %ebx,0xc(%esp)
08412495 +0x5ad:  mov    %eax,0x8(%esp)
08412499 +0x5b1:  movl   $"seLect pre_type,unix_timestamp(service_start),unix_timestamp(service_end) from member_premium where m_id=%s and event_id=%d and service_end>now() and server_id in(0,%d) order by service_end desc limit 1",0x4(%esp)
084124a1 +0x5b9:  mov    -0x18(%ebp),%eax
084124a4 +0x5bc:  mov    %eax,(%esp)
084124a7 +0x5bf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084124ac +0x5c4:  movl   $0x1,0x4(%esp)
084124b4 +0x5cc:  mov    -0x18(%ebp),%eax
084124b7 +0x5cf:  mov    %eax,(%esp)
084124ba +0x5d2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084124bf +0x5d7:  xor    $0x1,%eax
084124c2 +0x5da:  test   %al,%al
084124c4 +0x5dc:  jne    08412816 <+0x92e>
084124ca +0x5e2:  mov    -0x18(%ebp),%eax
084124cd +0x5e5:  mov    %eax,(%esp)
084124d0 +0x5e8:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084124d5 +0x5ed:  test   %eax,%eax
084124d7 +0x5ef:  sete   %al
084124da +0x5f2:  test   %al,%al
084124dc +0x5f4:  je     084124fd <+0x615>
084124de +0x5f6:  lea    -0x64(%ebp),%eax
084124e1 +0x5f9:  mov    %eax,(%esp)
084124e4 +0x5fc:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
084124e9 +0x601:  mov    %eax,0x4(%esp)
084124ed +0x605:  lea    -0x60(%ebp),%eax
084124f0 +0x608:  mov    %eax,(%esp)
084124f3 +0x60b:  call   08111126 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x638>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x638
084124f8 +0x610:  jmp    0841281d <+0x935>
084124fd +0x615:  movl   $0x0,-0xc(%ebp)
08412504 +0x61c:  jmp    084127e3 <+0x8fb>
08412509 +0x621:  mov    -0x18(%ebp),%eax
0841250c +0x624:  mov    %eax,(%esp)
0841250f +0x627:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08412514 +0x62c:  xor    $0x1,%eax
08412517 +0x62f:  test   %al,%al
08412519 +0x631:  jne    08412819 <+0x931>
0841251f +0x637:  movl   $0x0,-0x7c(%ebp)
08412526 +0x63e:  movl   $0x0,-0x80(%ebp)
0841252d +0x645:  movl   $0x0,-0x84(%ebp)
08412537 +0x64f:  lea    -0x7c(%ebp),%eax
0841253a +0x652:  mov    %eax,0x8(%esp)
0841253e +0x656:  movl   $0x0,0x4(%esp)
08412546 +0x65e:  mov    -0x18(%ebp),%eax
08412549 +0x661:  mov    %eax,(%esp)
0841254c +0x664:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412551 +0x669:  xor    $0x1,%eax
08412554 +0x66c:  test   %al,%al
08412556 +0x66e:  je     084125b7 <+0x6cf>
08412558 +0x670:  mov    0x10(%ebp),%eax
0841255b +0x673:  mov    0xc0(%eax),%eax
08412561 +0x679:  movl   $0x0,0x4(%esp)
08412569 +0x681:  mov    %eax,(%esp)
0841256c +0x684:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08412571 +0x689:  mov    %eax,%ebx
08412573 +0x68b:  movl   $0x5,0xc(%esp)
0841257b +0x693:  movl   $0x3628,0x8(%esp)
08412583 +0x69b:  movl   $&_ZZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EEE19__PRETTY_FUNCTION__,0x4(%esp)
0841258b +0x6a3:  lea    -0x48(%ebp),%eax
0841258e +0x6a6:  mov    %eax,(%esp)
08412591 +0x6a9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08412596 +0x6ae:  mov    %ebx,0x8(%esp)
0841259a +0x6b2:  movl   $"DB_Login::GetPremiumInfo, get(1) ERROR m_id=%s",0x4(%esp)
084125a2 +0x6ba:  lea    -0x48(%ebp),%eax
084125a5 +0x6bd:  mov    %eax,(%esp)
084125a8 +0x6c0:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084125ad +0x6c5:  mov    $0x0,%ebx
084125b2 +0x6ca:  jmp    08412886 <+0x99e>
084125b7 +0x6cf:  lea    -0x80(%ebp),%eax
084125ba +0x6d2:  mov    %eax,0x8(%esp)
084125be +0x6d6:  movl   $0x1,0x4(%esp)
084125c6 +0x6de:  mov    -0x18(%ebp),%eax
084125c9 +0x6e1:  mov    %eax,(%esp)
084125cc +0x6e4:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084125d1 +0x6e9:  xor    $0x1,%eax
084125d4 +0x6ec:  test   %al,%al
084125d6 +0x6ee:  je     08412637 <+0x74f>
084125d8 +0x6f0:  mov    0x10(%ebp),%eax
084125db +0x6f3:  mov    0xc0(%eax),%eax
084125e1 +0x6f9:  movl   $0x0,0x4(%esp)
084125e9 +0x701:  mov    %eax,(%esp)
084125ec +0x704:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084125f1 +0x709:  mov    %eax,%ebx
084125f3 +0x70b:  movl   $0x5,0xc(%esp)
084125fb +0x713:  movl   $0x362e,0x8(%esp)
08412603 +0x71b:  movl   $&_ZZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EEE19__PRETTY_FUNCTION__,0x4(%esp)
0841260b +0x723:  lea    -0x38(%ebp),%eax
0841260e +0x726:  mov    %eax,(%esp)
08412611 +0x729:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08412616 +0x72e:  mov    %ebx,0x8(%esp)
0841261a +0x732:  movl   $"DB_Login::GetPremiumInfo, get(2) ERROR m_id=%s",0x4(%esp)
08412622 +0x73a:  lea    -0x38(%ebp),%eax
08412625 +0x73d:  mov    %eax,(%esp)
08412628 +0x740:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841262d +0x745:  mov    $0x0,%ebx
08412632 +0x74a:  jmp    08412886 <+0x99e>
08412637 +0x74f:  lea    -0x84(%ebp),%eax
0841263d +0x755:  mov    %eax,0x8(%esp)
08412641 +0x759:  movl   $0x2,0x4(%esp)
08412649 +0x761:  mov    -0x18(%ebp),%eax
0841264c +0x764:  mov    %eax,(%esp)
0841264f +0x767:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08412654 +0x76c:  xor    $0x1,%eax
08412657 +0x76f:  test   %al,%al
08412659 +0x771:  je     084126ba <+0x7d2>
0841265b +0x773:  mov    0x10(%ebp),%eax
0841265e +0x776:  mov    0xc0(%eax),%eax
08412664 +0x77c:  movl   $0x0,0x4(%esp)
0841266c +0x784:  mov    %eax,(%esp)
0841266f +0x787:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08412674 +0x78c:  mov    %eax,%ebx
08412676 +0x78e:  movl   $0x5,0xc(%esp)
0841267e +0x796:  movl   $0x3634,0x8(%esp)
08412686 +0x79e:  movl   $&_ZZN8DB_Login14GetPremiumInfoEiP14SIG_LOGIN_DATARSt6vectorINS_16tagDNFEventEntryESaIS3_EEE19__PRETTY_FUNCTION__,0x4(%esp)
0841268e +0x7a6:  lea    -0x28(%ebp),%eax
08412691 +0x7a9:  mov    %eax,(%esp)
08412694 +0x7ac:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08412699 +0x7b1:  mov    %ebx,0x8(%esp)
0841269d +0x7b5:  movl   $"DB_Login::GetPremiumInfo, get(3) ERROR m_id=%s",0x4(%esp)
084126a5 +0x7bd:  lea    -0x28(%ebp),%eax
084126a8 +0x7c0:  mov    %eax,(%esp)
084126ab +0x7c3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084126b0 +0x7c8:  mov    $0x0,%ebx
084126b5 +0x7cd:  jmp    08412886 <+0x99e>
084126ba +0x7d2:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084126bf +0x7d7:  mov    %eax,(%esp)
084126c2 +0x7da:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084126c7 +0x7df:  cmp    $0x7,%eax
084126ca +0x7e2:  jne    084126e3 <+0x7fb>
084126cc +0x7e4:  mov    -0x7c(%ebp),%eax
084126cf +0x7e7:  cmp    $0x16,%eax
084126d2 +0x7ea:  je     084126dc <+0x7f4>
084126d4 +0x7ec:  mov    -0x7c(%ebp),%eax
084126d7 +0x7ef:  cmp    $0x1b,%eax
084126da +0x7f2:  jne    084126e3 <+0x7fb>
084126dc +0x7f4:  mov    $0x1,%eax
084126e1 +0x7f9:  jmp    084126e8 <+0x800>
084126e3 +0x7fb:  mov    $0x0,%eax
084126e8 +0x800:  test   %al,%al
084126ea +0x802:  jne    084127db <+0x8f3>
084126f0 +0x808:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084126f5 +0x80d:  mov    %eax,(%esp)
084126f8 +0x810:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084126fd +0x815:  cmp    $0xe,%eax
08412700 +0x818:  jne    08412719 <+0x831>
08412702 +0x81a:  mov    -0x7c(%ebp),%eax
08412705 +0x81d:  cmp    $0x16,%eax
08412708 +0x820:  je     08412712 <+0x82a>
0841270a +0x822:  mov    -0x7c(%ebp),%eax
0841270d +0x825:  cmp    $0x1b,%eax
08412710 +0x828:  jne    08412719 <+0x831>
08412712 +0x82a:  mov    $0x1,%eax
08412717 +0x82f:  jmp    0841271e <+0x836>
08412719 +0x831:  mov    $0x0,%eax
0841271e +0x836:  test   %al,%al
08412720 +0x838:  jne    084127de <+0x8f6>
08412726 +0x83e:  cmpl   $0x69,-0x10(%ebp)
0841272a +0x842:  jg     0841281c <+0x934>
08412730 +0x848:  mov    -0x10(%ebp),%ebx
08412733 +0x84b:  lea    -0x64(%ebp),%eax
08412736 +0x84e:  mov    %eax,(%esp)
08412739 +0x851:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
0841273e +0x856:  mov    (%eax),%eax
08412740 +0x858:  mov    0x10(%ebp),%edx
08412743 +0x85b:  lea    0x229(%ebx),%ecx
08412749 +0x861:  shl    $0x4,%ecx
0841274c +0x864:  add    %ecx,%edx
0841274e +0x866:  add    $0x14,%edx
08412751 +0x869:  mov    %eax,(%edx)
08412753 +0x86b:  mov    -0x10(%ebp),%ecx
08412756 +0x86e:  mov    -0x7c(%ebp),%eax
08412759 +0x871:  mov    0x10(%ebp),%edx
0841275c +0x874:  add    $0x229,%ecx
08412762 +0x87a:  shl    $0x4,%ecx
08412765 +0x87d:  add    %ecx,%edx
08412767 +0x87f:  add    $0x8,%edx
0841276a +0x882:  mov    %eax,(%edx)
0841276c +0x884:  mov    -0x10(%ebp),%ecx
0841276f +0x887:  mov    -0x80(%ebp),%eax
08412772 +0x88a:  mov    0x10(%ebp),%edx
08412775 +0x88d:  add    $0x229,%ecx
0841277b +0x893:  shl    $0x4,%ecx
0841277e +0x896:  add    %ecx,%edx
08412780 +0x898:  add    $0xc,%edx
08412783 +0x89b:  mov    %eax,(%edx)
08412785 +0x89d:  mov    -0x10(%ebp),%ecx
08412788 +0x8a0:  mov    -0x84(%ebp),%eax
0841278e +0x8a6:  mov    0x10(%ebp),%edx
08412791 +0x8a9:  add    $0x229,%ecx
08412797 +0x8af:  shl    $0x4,%ecx
0841279a +0x8b2:  add    %ecx,%edx
0841279c +0x8b4:  add    $0x10,%edx
0841279f +0x8b7:  mov    %eax,(%edx)
084127a1 +0x8b9:  addl   $0x1,-0x10(%ebp)
084127a5 +0x8bd:  mov    0x10(%ebp),%eax
084127a8 +0x8c0:  movzwl 0x293a(%eax),%ebx
084127af +0x8c7:  movzwl %bx,%esi
084127b2 +0x8ca:  lea    -0x64(%ebp),%eax
084127b5 +0x8cd:  mov    %eax,(%esp)
084127b8 +0x8d0:  call   0818fcbc <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1be>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1be
084127bd +0x8d5:  mov    (%eax),%edx
084127bf +0x8d7:  mov    0x10(%ebp),%eax
084127c2 +0x8da:  lea    0xa4c(%esi),%ecx
084127c8 +0x8e0:  mov    %edx,0xc(%eax,%ecx,4)
084127cc +0x8e4:  lea    0x1(%ebx),%edx
084127cf +0x8e7:  mov    0x10(%ebp),%eax
084127d2 +0x8ea:  mov    %dx,0x293a(%eax)
084127d9 +0x8f1:  jmp    084127df <+0x8f7>
084127db +0x8f3:  nop
084127dc +0x8f4:  jmp    084127df <+0x8f7>
084127de +0x8f6:  nop
084127df +0x8f7:  addl   $0x1,-0xc(%ebp)
084127e3 +0x8fb:  mov    -0x18(%ebp),%eax
084127e6 +0x8fe:  mov    %eax,(%esp)
084127e9 +0x901:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084127ee +0x906:  cmp    -0xc(%ebp),%eax
084127f1 +0x909:  seta   %al
084127f4 +0x90c:  test   %al,%al
084127f6 +0x90e:  jne    08412509 <+0x621>
084127fc +0x914:  jmp    0841281d <+0x935>
084127fe +0x916:  nop
084127ff +0x917:  jmp    0841281d <+0x935>
08412801 +0x919:  nop
08412802 +0x91a:  jmp    0841281d <+0x935>
08412804 +0x91c:  nop
08412805 +0x91d:  jmp    0841281d <+0x935>
08412807 +0x91f:  nop
08412808 +0x920:  jmp    0841281d <+0x935>
0841280a +0x922:  nop
0841280b +0x923:  jmp    0841281d <+0x935>
0841280d +0x925:  nop
0841280e +0x926:  jmp    0841281d <+0x935>
08412810 +0x928:  nop
08412811 +0x929:  jmp    0841281d <+0x935>
08412813 +0x92b:  nop
08412814 +0x92c:  jmp    0841281d <+0x935>
08412816 +0x92e:  nop
08412817 +0x92f:  jmp    0841281d <+0x935>
08412819 +0x931:  nop
0841281a +0x932:  jmp    0841281d <+0x935>
0841281c +0x934:  nop
0841281d +0x935:  lea    -0x64(%ebp),%eax
08412820 +0x938:  mov    %eax,(%esp)
08412823 +0x93b:  call   0818fca6 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x1a8>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x1a8
08412828 +0x940:  lea    -0x68(%ebp),%eax
0841282b +0x943:  mov    %eax,0x4(%esp)
0841282f +0x947:  lea    -0x64(%ebp),%eax
08412832 +0x94a:  mov    %eax,(%esp)
08412835 +0x94d:  call   0818fc79 <_GLOBAL__I__ZN4ARAD26Arad_Dispatcher_Login_ImplC2Ev+0x17b>  ; global constructors keyed to ARAD::Arad_Dispatcher_Login_Impl::Arad_Dispatcher_Login_Impl()+0x17b
0841283a +0x952:  test   %al,%al
0841283c +0x954:  jne    08411f93 <+0xab>
08412842 +0x95a:  jmp    08412845 <+0x95d>
08412844 +0x95c:  nop
08412845 +0x95d:  mov    0x10(%ebp),%eax
08412848 +0x960:  mov    -0x10(%ebp),%edx
0841284b +0x963:  mov    %edx,0x2294(%eax)
08412851 +0x969:  lea    -0x60(%ebp),%eax
08412854 +0x96c:  mov    %eax,0x8(%esp)
08412858 +0x970:  mov    0x10(%ebp),%eax
0841285b +0x973:  mov    %eax,0x4(%esp)
0841285f +0x977:  mov    0x8(%ebp),%eax
08412862 +0x97a:  mov    %eax,(%esp)
08412865 +0x97d:  call   084128c4 <_ZN8DB_Login17RemovePreminuInfoEP14SIG_LOGIN_DATARSt6vectorIiSaIiEE>  ; DB_Login::RemovePreminuInfo(SIG_LOGIN_DATA*, std::vector<int, std::allocator<int> >&)
0841286a +0x982:  mov    $0x1,%ebx
0841286f +0x987:  jmp    08412886 <+0x99e>
08412871 +0x989:  mov    %edx,%ebx
08412873 +0x98b:  mov    %eax,%esi
08412875 +0x98d:  lea    -0x60(%ebp),%eax
08412878 +0x990:  mov    %eax,(%esp)
0841287b +0x993:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08412880 +0x998:  mov    %esi,%eax
08412882 +0x99a:  mov    %ebx,%edx
08412884 +0x99c:  jmp    084128a8 <+0x9c0>
08412886 +0x99e:  lea    -0x60(%ebp),%eax
08412889 +0x9a1:  mov    %eax,(%esp)
0841288c +0x9a4:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
08412891 +0x9a9:  test   %ebx,%ebx
08412893 +0x9ab:  lea    -0x54(%ebp),%eax
08412896 +0x9ae:  mov    %eax,(%esp)
08412899 +0x9b1:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
0841289e +0x9b6:  lea    -0x8(%ebp),%esp
084128a1 +0x9b9:  add    $0x0,%esp
084128a4 +0x9bc:  pop    %ebx
084128a5 +0x9bd:  pop    %esi
084128a6 +0x9be:  pop    %ebp
084128a7 +0x9bf:  ret
084128a8 +0x9c0:  mov    %edx,%ebx
084128aa +0x9c2:  mov    %eax,%esi
084128ac +0x9c4:  lea    -0x54(%ebp),%eax
084128af +0x9c7:  mov    %eax,(%esp)
084128b2 +0x9ca:  call   08083dda <_GLOBAL__I__ZN15CHumanCertifier18humanCertifyTable_E+0x1d>  ; global constructors keyed to CHumanCertifier::humanCertifyTable_+0x1d
084128b7 +0x9cf:  mov    %esi,%eax
084128b9 +0x9d1:  mov    %ebx,%edx
084128bb +0x9d3:  mov    %eax,(%esp)
084128be +0x9d6:  call   08ae3750 <_Unwind_Resume>
084128c3 +0x9db:  nop
```

## 反编译 C

```c
// DB_Login::GetPremiumInfo @ 0x8411ee8

/* DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry,
   std::allocator<DB_Login::tagDNFEventEntry> >&) */

void DB_Login::GetPremiumInfo(int param_1,SIG_LOGIN_DATA *param_2,vector *param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  GameWorld *pGVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  stUserDBInfo_t local_78 [4];
  uint local_74;
  uint local_70;
  __normal_iterator local_6c [4];
  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
  local_68 [4];
  vector<int,std::allocator<int>> local_64 [12];
  vector<int,std::allocator<int>> local_58 [12];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  MySQL *local_1c;
  MySQL *local_18;
  int local_14;
  uint local_10;
  
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_18 = (MySQL *)_GetDNFAccountDB();
  std::vector<int,std::allocator<int>>::vector(local_58);
                    /* try { // try from 08411f32 to 08411f36 has its CatchHandler @ 084128a8 */
  std::vector<int,std::allocator<int>>::vector(local_64);
  local_14 = 0;
  *(undefined4 *)(param_3 + 0x2294) = 0;
  *(undefined2 *)(param_3 + 0x293a) = 0;
  *(undefined4 *)(param_3 + 0x394c) = 0;
                    /* try { // try from 08411f71 to 08412869 has its CatchHandler @ 08412871 */
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::begin();
  std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::end();
  while (bVar4 = __gnu_cxx::operator!=(local_68,local_6c), bVar4) {
    piVar5 = (int *)__gnu_cxx::
                    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                    ::operator->(local_68);
    if ((*piVar5 < 0xa029) ||
       (piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_68), 0xa02b < *piVar5)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
      puVar7 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
               ::operator->(local_68);
      MySQL::set_query(local_18,
                       "seLect m_id,charac_no,server_id,unix_timestamp(start_time),charac_name from member_broadcast where event_id=%d and m_id=%s and end_time>now() limit 1"
                       ,*puVar7,uVar6);
      MySQL::exec(local_18,true);
      iVar8 = MySQL::get_n_rows(local_18);
      if (iVar8 == 0) {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_68);
        std::vector<int,std::allocator<int>>::push_back(local_64,piVar5);
      }
      else {
        cVar3 = MySQL::fetch(local_18);
        if (cVar3 != '\x01') break;
        cVar3 = MySQL::get_uint(local_18,0,(uint *)local_78);
        if ((((cVar3 == '\x01') && (cVar3 = MySQL::get_uint(local_18,1,&local_74), cVar3 == '\x01'))
            && (cVar3 = MySQL::get_uint(local_18,2,&local_70), cVar3 == '\x01')) &&
           (cVar3 = MySQL::get_uint(local_18,3,&local_7c), cVar3 == '\x01')) {
          pGVar9 = (GameWorld *)G_GameWorld();
          iVar8 = GameWorld::GetChannelType(pGVar9);
          if (iVar8 == 7) {
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68);
            if ((*piVar5 != 0xa029) ||
               (cVar3 = MySQL::get_str(local_18,4,(char *)(param_3 + 0x39b0),0x1e), cVar3 != '\x01')
               ) goto LAB_0841281d;
          }
          else {
            pGVar9 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::GetChannelType(pGVar9);
            if (iVar8 == 0xe) {
              piVar5 = (int *)__gnu_cxx::
                              __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                              ::operator->(local_68);
              if ((*piVar5 == 0xa02a) &&
                 (cVar3 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam(),
                 cVar3 == '\x01')) {
                bVar4 = true;
              }
              else {
                bVar4 = false;
              }
              if (!bVar4) {
                piVar5 = (int *)__gnu_cxx::
                                __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                ::operator->(local_68);
                if ((*piVar5 == 0xa02b) &&
                   (cVar3 = online_preliminary::COnlinePreliminary::GetPlayCountPerOneTeam(),
                   cVar3 != '\x01')) {
                  bVar4 = true;
                }
                else {
                  bVar4 = false;
                }
                if (!bVar4) goto LAB_0841281d;
              }
            }
          }
          uVar12 = local_7c;
          iVar8 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
          if ((int)uVar12 <= iVar8) {
            pGVar9 = (GameWorld *)G_GameWorld();
            iVar8 = GameWorld::GetChannelType(pGVar9);
            if (iVar8 == 7) {
LAB_08412226:
              bVar4 = true;
            }
            else {
              pGVar9 = (GameWorld *)G_GameWorld();
              iVar8 = GameWorld::GetChannelType(pGVar9);
              if (iVar8 == 0xe) goto LAB_08412226;
              bVar4 = false;
            }
            if (bVar4) {
              DBMgr::addUserDBInfo(GlobalData::s_db_mgr,(int)param_2,local_78);
            }
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68);
            if (*piVar5 == 0xa02a) {
              *(uint *)(param_3 + 0x39d4) = local_74;
              *(uint *)(param_3 + 0x39d0) = local_70;
              *(uint *)(param_3 + 0x39d8) = *(uint *)(param_3 + 0x39d8) | 1;
            }
            else {
              piVar5 = (int *)__gnu_cxx::
                              __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                              ::operator->(local_68);
              if (*piVar5 == 0xa02b) {
                *(uint *)(param_3 + 0x39d4) = local_74;
                *(uint *)(param_3 + 0x39d0) = local_70;
                *(uint *)(param_3 + 0x39d8) = *(uint *)(param_3 + 0x39d8) | 2;
              }
              else {
                *(uint *)(param_3 + 0x39ac) = local_74;
                *(uint *)(param_3 + 0x39a8) = local_70;
              }
            }
          }
        }
      }
    }
    else {
      piVar5 = (int *)__gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_68);
      if ((*piVar5 < 50000) ||
         (piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                          ::operator->(local_68), 89999 < *piVar5)) {
        bVar4 = true;
      }
      else {
        bVar4 = false;
      }
      if (!bVar4) {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                        ::operator->(local_68);
        if ((*piVar5 < 70000) ||
           (piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68), 89999 < *piVar5)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          uVar1 = *(ushort *)(param_3 + 0x293a);
          puVar7 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                   ::operator->(local_68);
          *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
          *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
        }
        else {
          piVar5 = (int *)__gnu_cxx::
                          __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                          ::operator->(local_68);
          if (*piVar5 == 59000) {
            uVar1 = *(ushort *)(param_3 + 0x293a);
            puVar7 = (undefined4 *)
                     __gnu_cxx::
                     __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                     ::operator->(local_68);
            *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
            *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
          }
          else {
            piVar5 = (int *)__gnu_cxx::
                            __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                            ::operator->(local_68);
            cVar3 = WongWork::CUserPremium::IsRestrictedPremium(*piVar5);
            if (cVar3 == '\0') {
              iVar8 = __gnu_cxx::
                      __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                      ::operator->(local_68);
              uVar6 = *(undefined4 *)(iVar8 + 0xc);
              puVar7 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                       ::operator->(local_68);
              uVar2 = *puVar7;
              uVar10 = NumberToString(*(uint *)(param_3 + 0xc0),0);
              MySQL::set_query(local_1c,
                               "seLect pre_type,unix_timestamp(service_start),unix_timestamp(service_end) from member_premium where m_id=%s and event_id=%d and service_end>now() and server_id in(0,%d) order by service_end desc limit 1"
                               ,uVar10,uVar2,uVar6);
              cVar3 = MySQL::exec(local_1c,true);
              if (cVar3 == '\x01') {
                iVar8 = MySQL::get_n_rows(local_1c);
                if (iVar8 == 0) {
                  piVar5 = (int *)__gnu_cxx::
                                  __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                  ::operator->(local_68);
                  std::vector<int,std::allocator<int>>::push_back(local_64,piVar5);
                }
                else {
                  local_10 = 0;
                  while ((uVar12 = MySQL::get_n_rows(local_1c), local_10 < uVar12 &&
                         (cVar3 = MySQL::fetch(local_1c), cVar3 == '\x01'))) {
                    local_80 = 0;
                    local_84 = 0;
                    local_88 = 0;
                    cVar3 = MySQL::get_int(local_1c,0,&local_80);
                    if (cVar3 != '\x01') {
                      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
                      cMyTrace::cMyTrace(local_4c,
                                         "void DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
                                         ,0x3628,5);
                      cMyTrace::operator()
                                (local_4c,"DB_Login::GetPremiumInfo, get(1) ERROR m_id=%s",uVar6);
                      goto LAB_08412886;
                    }
                    cVar3 = MySQL::get_int(local_1c,1,&local_84);
                    if (cVar3 != '\x01') {
                      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
                      cMyTrace::cMyTrace(local_3c,
                                         "void DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
                                         ,0x362e,5);
                      cMyTrace::operator()
                                (local_3c,"DB_Login::GetPremiumInfo, get(2) ERROR m_id=%s",uVar6);
                      goto LAB_08412886;
                    }
                    cVar3 = MySQL::get_int(local_1c,2,&local_88);
                    if (cVar3 != '\x01') {
                      uVar6 = NumberToString(*(uint *)(param_3 + 0xc0),0);
                      cMyTrace::cMyTrace(local_2c,
                                         "void DB_Login::GetPremiumInfo(int, SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
                                         ,0x3634,5);
                      cMyTrace::operator()
                                (local_2c,"DB_Login::GetPremiumInfo, get(3) ERROR m_id=%s",uVar6);
                      goto LAB_08412886;
                    }
                    pGVar9 = (GameWorld *)G_GameWorld();
                    iVar8 = GameWorld::GetChannelType(pGVar9);
                    if ((iVar8 == 7) && ((local_80 == 0x16 || (local_80 == 0x1b)))) {
                      bVar4 = true;
                    }
                    else {
                      bVar4 = false;
                    }
                    if (!bVar4) {
                      pGVar9 = (GameWorld *)G_GameWorld();
                      iVar11 = GameWorld::GetChannelType(pGVar9);
                      iVar8 = local_14;
                      if ((iVar11 == 0xe) && ((local_80 == 0x16 || (local_80 == 0x1b)))) {
                        bVar4 = true;
                      }
                      else {
                        bVar4 = false;
                      }
                      if (!bVar4) {
                        if (0x69 < local_14) break;
                        puVar7 = (undefined4 *)
                                 __gnu_cxx::
                                 __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                 ::operator->(local_68);
                        *(undefined4 *)(param_3 + (iVar8 + 0x229) * 0x10 + 0x14) = *puVar7;
                        *(int *)(param_3 + (local_14 + 0x229) * 0x10 + 8) = local_80;
                        *(int *)(param_3 + (local_14 + 0x229) * 0x10 + 0xc) = local_84;
                        *(int *)(param_3 + (local_14 + 0x229) * 0x10 + 0x10) = local_88;
                        local_14 = local_14 + 1;
                        uVar1 = *(ushort *)(param_3 + 0x293a);
                        puVar7 = (undefined4 *)
                                 __gnu_cxx::
                                 __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                                 ::operator->(local_68);
                        *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
                        *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
                      }
                    }
                    local_10 = local_10 + 1;
                  }
                }
              }
            }
            else {
              uVar1 = *(ushort *)(param_3 + 0x293a);
              puVar7 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
                       ::operator->(local_68);
              *(undefined4 *)(param_3 + (uVar1 + 0xa4c) * 4 + 0xc) = *puVar7;
              *(ushort *)(param_3 + 0x293a) = uVar1 + 1;
            }
          }
        }
      }
    }
LAB_0841281d:
    __gnu_cxx::
    __normal_iterator<DB_Login::tagDNFEventEntry*,std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>>
    ::operator++(local_68);
  }
  *(int *)(param_3 + 0x2294) = local_14;
  RemovePreminuInfo((SIG_LOGIN_DATA *)param_1,param_3);
LAB_08412886:
                    /* try { // try from 0841288c to 08412890 has its CatchHandler @ 084128a8 */
  std::vector<int,std::allocator<int>>::~vector(local_64);
  std::vector<int,std::allocator<int>>::~vector(local_58);
  return;
}
```
