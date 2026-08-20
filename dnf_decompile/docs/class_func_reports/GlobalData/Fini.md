# Fini

`_ZN10GlobalData4FiniEv`

`GlobalData::Fini()`

| 类 | 地址 |
|---|---|
| `GlobalData` | `0x0829e0b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0829e0b2  _ZN10GlobalData4FiniEv
#           GlobalData::Fini()
# range [0x0829e0b2, 0x0829e4c3]
0829e0b2 +0x000:  push   %ebp
0829e0b3 +0x001:  mov    %esp,%ebp
0829e0b5 +0x003:  push   %ebx
0829e0b6 +0x004:  sub    $0x24,%esp
0829e0b9 +0x007:  mov    &_ZN10GlobalData15s_ref_pvp_gradeE,%ebx
0829e0bf +0x00d:  test   %ebx,%ebx
0829e0c1 +0x00f:  je     0829e0d3 <+0x21>
0829e0c3 +0x011:  mov    %ebx,(%esp)
0829e0c6 +0x014:  call   085d470a <_ZN11RefPvpGradeD1Ev>  ; RefPvpGrade::~RefPvpGrade()
0829e0cb +0x019:  mov    %ebx,(%esp)
0829e0ce +0x01c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e0d3 +0x021:  mov    &_ZN10GlobalData12s_accept_thrE,%eax
0829e0d8 +0x026:  test   %eax,%eax
0829e0da +0x028:  je     0829e0f2 <+0x40>
0829e0dc +0x02a:  mov    &_ZN10GlobalData12s_accept_thrE,%eax
0829e0e1 +0x02f:  mov    (%eax),%eax
0829e0e3 +0x031:  add    $0x8,%eax
0829e0e6 +0x034:  mov    (%eax),%edx
0829e0e8 +0x036:  mov    &_ZN10GlobalData12s_accept_thrE,%eax
0829e0ed +0x03b:  mov    %eax,(%esp)
0829e0f0 +0x03e:  call   *%edx
0829e0f2 +0x040:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%eax
0829e0f7 +0x045:  test   %eax,%eax
0829e0f9 +0x047:  je     0829e11f <+0x6d>
0829e0fb +0x049:  mov    &_ZN10GlobalData19s_monitor_proxy_mgrE,%ebx
0829e101 +0x04f:  test   %ebx,%ebx
0829e103 +0x051:  je     0829e115 <+0x63>
0829e105 +0x053:  mov    %ebx,(%esp)
0829e108 +0x056:  call   082b39fe <_GLOBAL__I__ZN4CLog5this_E+0xfe25>  ; global constructors keyed to CLog::this_+0xfe25
0829e10d +0x05b:  mov    %ebx,(%esp)
0829e110 +0x05e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e115 +0x063:  movl   $0x0,&_ZN10GlobalData19s_monitor_proxy_mgrE
0829e11f +0x06d:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0829e124 +0x072:  test   %eax,%eax
0829e126 +0x074:  je     0829e14c <+0x9a>
0829e128 +0x076:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%ebx
0829e12e +0x07c:  test   %ebx,%ebx
0829e130 +0x07e:  je     0829e142 <+0x90>
0829e132 +0x080:  mov    %ebx,(%esp)
0829e135 +0x083:  call   082b3ac6 <_GLOBAL__I__ZN4CLog5this_E+0xfeed>  ; global constructors keyed to CLog::this_+0xfeed
0829e13a +0x088:  mov    %ebx,(%esp)
0829e13d +0x08b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e142 +0x090:  movl   $0x0,&_ZN10GlobalData17s_guild_proxy_mgrE
0829e14c +0x09a:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%eax
0829e151 +0x09f:  test   %eax,%eax
0829e153 +0x0a1:  je     0829e179 <+0xc7>
0829e155 +0x0a3:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%ebx
0829e15b +0x0a9:  test   %ebx,%ebx
0829e15d +0x0ab:  je     0829e16f <+0xbd>
0829e15f +0x0ad:  mov    %ebx,(%esp)
0829e162 +0x0b0:  call   082b3b8e <_GLOBAL__I__ZN4CLog5this_E+0xffb5>  ; global constructors keyed to CLog::this_+0xffb5
0829e167 +0x0b5:  mov    %ebx,(%esp)
0829e16a +0x0b8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e16f +0x0bd:  movl   $0x0,&_ZN10GlobalData21s_statistic_proxy_mgrE
0829e179 +0x0c7:  mov    &_ZN10GlobalData9s_udp_thrE,%eax
0829e17e +0x0cc:  test   %eax,%eax
0829e180 +0x0ce:  je     0829e198 <+0xe6>
0829e182 +0x0d0:  mov    &_ZN10GlobalData9s_udp_thrE,%eax
0829e187 +0x0d5:  mov    (%eax),%eax
0829e189 +0x0d7:  add    $0x8,%eax
0829e18c +0x0da:  mov    (%eax),%edx
0829e18e +0x0dc:  mov    &_ZN10GlobalData9s_udp_thrE,%eax
0829e193 +0x0e1:  mov    %eax,(%esp)
0829e196 +0x0e4:  call   *%edx
0829e198 +0x0e6:  mov    &_ZN10GlobalData9s_net_thrE,%eax
0829e19d +0x0eb:  test   %eax,%eax
0829e19f +0x0ed:  je     0829e1b7 <+0x105>
0829e1a1 +0x0ef:  mov    &_ZN10GlobalData9s_net_thrE,%eax
0829e1a6 +0x0f4:  mov    (%eax),%eax
0829e1a8 +0x0f6:  add    $0x8,%eax
0829e1ab +0x0f9:  mov    (%eax),%edx
0829e1ad +0x0fb:  mov    &_ZN10GlobalData9s_net_thrE,%eax
0829e1b2 +0x100:  mov    %eax,(%esp)
0829e1b5 +0x103:  call   *%edx
0829e1b7 +0x105:  mov    &_ZN10GlobalData14s_dispatch_thrE,%eax
0829e1bc +0x10a:  test   %eax,%eax
0829e1be +0x10c:  je     0829e1d6 <+0x124>
0829e1c0 +0x10e:  mov    &_ZN10GlobalData14s_dispatch_thrE,%eax
0829e1c5 +0x113:  mov    (%eax),%eax
0829e1c7 +0x115:  add    $0x8,%eax
0829e1ca +0x118:  mov    (%eax),%edx
0829e1cc +0x11a:  mov    &_ZN10GlobalData14s_dispatch_thrE,%eax
0829e1d1 +0x11f:  mov    %eax,(%esp)
0829e1d4 +0x122:  call   *%edx
0829e1d6 +0x124:  mov    &_ZN10GlobalData18s_db_thr_for_logDBE,%eax
0829e1db +0x129:  test   %eax,%eax
0829e1dd +0x12b:  je     0829e1f5 <+0x143>
0829e1df +0x12d:  mov    &_ZN10GlobalData18s_db_thr_for_logDBE,%eax
0829e1e4 +0x132:  mov    (%eax),%eax
0829e1e6 +0x134:  add    $0x8,%eax
0829e1e9 +0x137:  mov    (%eax),%edx
0829e1eb +0x139:  mov    &_ZN10GlobalData18s_db_thr_for_logDBE,%eax
0829e1f0 +0x13e:  mov    %eax,(%esp)
0829e1f3 +0x141:  call   *%edx
0829e1f5 +0x143:  mov    &_ZN10GlobalData8s_db_thrE,%eax
0829e1fa +0x148:  test   %eax,%eax
0829e1fc +0x14a:  je     0829e214 <+0x162>
0829e1fe +0x14c:  mov    &_ZN10GlobalData8s_db_thrE,%eax
0829e203 +0x151:  mov    (%eax),%eax
0829e205 +0x153:  add    $0x8,%eax
0829e208 +0x156:  mov    (%eax),%edx
0829e20a +0x158:  mov    &_ZN10GlobalData8s_db_thrE,%eax
0829e20f +0x15d:  mov    %eax,(%esp)
0829e212 +0x160:  call   *%edx
0829e214 +0x162:  mov    &_ZN10GlobalData17s_monitor_tcp_thrE,%eax
0829e219 +0x167:  test   %eax,%eax
0829e21b +0x169:  je     0829e233 <+0x181>
0829e21d +0x16b:  mov    &_ZN10GlobalData17s_monitor_tcp_thrE,%eax
0829e222 +0x170:  mov    (%eax),%eax
0829e224 +0x172:  add    $0x8,%eax
0829e227 +0x175:  mov    (%eax),%edx
0829e229 +0x177:  mov    &_ZN10GlobalData17s_monitor_tcp_thrE,%eax
0829e22e +0x17c:  mov    %eax,(%esp)
0829e231 +0x17f:  call   *%edx
0829e233 +0x181:  mov    &_ZN10GlobalData8s_db_mgrE,%ebx
0829e239 +0x187:  test   %ebx,%ebx
0829e23b +0x189:  je     0829e24d <+0x19b>
0829e23d +0x18b:  mov    %ebx,(%esp)
0829e240 +0x18e:  call   083f4a1c <_ZN5DBMgrD1Ev>  ; DBMgr::~DBMgr()
0829e245 +0x193:  mov    %ebx,(%esp)
0829e248 +0x196:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e24d +0x19b:  mov    &_ZN10GlobalData13s_stream_poolE,%ebx
0829e253 +0x1a1:  test   %ebx,%ebx
0829e255 +0x1a3:  je     0829e267 <+0x1b5>
0829e257 +0x1a5:  mov    %ebx,(%esp)
0829e25a +0x1a8:  call   0828fa20 <_ZN10StreamPoolD1Ev>  ; StreamPool::~StreamPool()
0829e25f +0x1ad:  mov    %ebx,(%esp)
0829e262 +0x1b0:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e267 +0x1b5:  mov    &_ZN10GlobalData19s_small_stream_poolE,%ebx
0829e26d +0x1bb:  test   %ebx,%ebx
0829e26f +0x1bd:  je     0829e281 <+0x1cf>
0829e271 +0x1bf:  mov    %ebx,(%esp)
0829e274 +0x1c2:  call   0828ff0e <_ZN15SmallStreamPoolD1Ev>  ; SmallStreamPool::~SmallStreamPool()
0829e279 +0x1c7:  mov    %ebx,(%esp)
0829e27c +0x1ca:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e281 +0x1cf:  mov    &_ZN10GlobalData17s_big_stream_poolE,%ebx
0829e287 +0x1d5:  test   %ebx,%ebx
0829e289 +0x1d7:  je     0829e29b <+0x1e9>
0829e28b +0x1d9:  mov    %ebx,(%esp)
0829e28e +0x1dc:  call   082901fc <_ZN13BigStreamPoolD1Ev>  ; BigStreamPool::~BigStreamPool()
0829e293 +0x1e1:  mov    %ebx,(%esp)
0829e296 +0x1e4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e29b +0x1e9:  mov    &_ZN10GlobalData10s_msgq_mgrE,%ebx
0829e2a1 +0x1ef:  test   %ebx,%ebx
0829e2a3 +0x1f1:  je     0829e2b5 <+0x203>
0829e2a5 +0x1f3:  mov    %ebx,(%esp)
0829e2a8 +0x1f6:  call   08570f42 <_ZN11MsgQueueMgrD1Ev>  ; MsgQueueMgr::~MsgQueueMgr()
0829e2ad +0x1fb:  mov    %ebx,(%esp)
0829e2b0 +0x1fe:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e2b5 +0x203:  mov    &_ZN10GlobalData21s_pItemVendingMachineE,%ebx
0829e2bb +0x209:  test   %ebx,%ebx
0829e2bd +0x20b:  je     0829e2cf <+0x21d>
0829e2bf +0x20d:  mov    %ebx,(%esp)
0829e2c2 +0x210:  call   0854c42a <_ZN18ItemVendingMachineD1Ev>  ; ItemVendingMachine::~ItemVendingMachine()
0829e2c7 +0x215:  mov    %ebx,(%esp)
0829e2ca +0x218:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e2cf +0x21d:  call   082a7147 <_GLOBAL__I__ZN4CLog5this_E+0x356e>  ; global constructors keyed to CLog::this_+0x356e
0829e2d4 +0x222:  mov    &_ZN10GlobalData28s_pcryptRijndael_CharacView_E,%eax
0829e2d9 +0x227:  test   %eax,%eax
0829e2db +0x229:  je     0829e2f3 <+0x241>
0829e2dd +0x22b:  mov    &_ZN10GlobalData28s_pcryptRijndael_CharacView_E,%eax
0829e2e2 +0x230:  mov    (%eax),%eax
0829e2e4 +0x232:  add    $0x4,%eax
0829e2e7 +0x235:  mov    (%eax),%edx
0829e2e9 +0x237:  mov    &_ZN10GlobalData28s_pcryptRijndael_CharacView_E,%eax
0829e2ee +0x23c:  mov    %eax,(%esp)
0829e2f1 +0x23f:  call   *%edx
0829e2f3 +0x241:  mov    &_ZN10GlobalData12s_psimpleSSOE,%ebx
0829e2f9 +0x247:  test   %ebx,%ebx
0829e2fb +0x249:  je     0829e30d <+0x25b>
0829e2fd +0x24b:  mov    %ebx,(%esp)
0829e300 +0x24e:  call   082a7352 <_GLOBAL__I__ZN4CLog5this_E+0x3779>  ; global constructors keyed to CLog::this_+0x3779
0829e305 +0x253:  mov    %ebx,(%esp)
0829e308 +0x256:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e30d +0x25b:  mov    &_ZN10GlobalData14s_pGMAccounts_E,%ebx
0829e313 +0x261:  test   %ebx,%ebx
0829e315 +0x263:  je     0829e327 <+0x275>
0829e317 +0x265:  mov    %ebx,(%esp)
0829e31a +0x268:  call   082a73b8 <_GLOBAL__I__ZN4CLog5this_E+0x37df>  ; global constructors keyed to CLog::this_+0x37df
0829e31f +0x26d:  mov    %ebx,(%esp)
0829e322 +0x270:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e327 +0x275:  mov    &_ZN10GlobalData12s_GM_ManagerE,%ebx
0829e32d +0x27b:  test   %ebx,%ebx
0829e32f +0x27d:  je     0829e341 <+0x28f>
0829e331 +0x27f:  mov    %ebx,(%esp)
0829e334 +0x282:  call   0829915a <_ZN11CGM_ManagerD1Ev>  ; CGM_Manager::~CGM_Manager()
0829e339 +0x287:  mov    %ebx,(%esp)
0829e33c +0x28a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e341 +0x28f:  mov    &_ZN10GlobalData22s_antibotBusinessImpl_E,%ebx
0829e347 +0x295:  test   %ebx,%ebx
0829e349 +0x297:  je     0829e35b <+0x2a9>
0829e34b +0x299:  mov    %ebx,(%esp)
0829e34e +0x29c:  call   082a7c4e <_GLOBAL__I__ZN4CLog5this_E+0x4075>  ; global constructors keyed to CLog::this_+0x4075
0829e353 +0x2a1:  mov    %ebx,(%esp)
0829e356 +0x2a4:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e35b +0x2a9:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%ebx
0829e361 +0x2af:  test   %ebx,%ebx
0829e363 +0x2b1:  je     0829e375 <+0x2c3>
0829e365 +0x2b3:  mov    %ebx,(%esp)
0829e368 +0x2b6:  call   0831c486 <_ZN18break_away_prevent23CBreakAwayPreventSystemD1Ev>  ; break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem()
0829e36d +0x2bb:  mov    %ebx,(%esp)
0829e370 +0x2be:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e375 +0x2c3:  mov    &_ZN10GlobalData14s_ExpertJobMgrE,%ebx
0829e37b +0x2c9:  test   %ebx,%ebx
0829e37d +0x2cb:  je     0829e38f <+0x2dd>
0829e37f +0x2cd:  mov    %ebx,(%esp)
0829e382 +0x2d0:  call   0849e1ac <_ZN10expert_job13CExpertJobMgrD1Ev>  ; expert_job::CExpertJobMgr::~CExpertJobMgr()
0829e387 +0x2d5:  mov    %ebx,(%esp)
0829e38a +0x2d8:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e38f +0x2dd:  mov    &_ZN10GlobalData18s_villageObjectMgrE,%ebx
0829e395 +0x2e3:  test   %ebx,%ebx
0829e397 +0x2e5:  je     0829e3a9 <+0x2f7>
0829e399 +0x2e7:  mov    %ebx,(%esp)
0829e39c +0x2ea:  call   086b6f44 <_ZN14village_object17CVillageObjectMgrD1Ev>  ; village_object::CVillageObjectMgr::~CVillageObjectMgr()
0829e3a1 +0x2ef:  mov    %ebx,(%esp)
0829e3a4 +0x2f2:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e3a9 +0x2f7:  mov    &_ZN10GlobalData19s_villageMonsterMgrE,%ebx
0829e3af +0x2fd:  test   %ebx,%ebx
0829e3b1 +0x2ff:  je     0829e3c3 <+0x311>
0829e3b3 +0x301:  mov    %ebx,(%esp)
0829e3b6 +0x304:  call   086b4a80 <_ZN16village_attacked18CVillageMonsterMgrD1Ev>  ; village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr()
0829e3bb +0x309:  mov    %ebx,(%esp)
0829e3be +0x30c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e3c3 +0x311:  mov    &_ZN10GlobalData19s_revengeDungeonMgrE,%eax
0829e3c8 +0x316:  mov    %eax,(%esp)
0829e3cb +0x319:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e3d0 +0x31e:  mov    &_ZN10GlobalData22s_DailyScheduleManagerE,%ebx
0829e3d6 +0x324:  test   %ebx,%ebx
0829e3d8 +0x326:  je     0829e3ea <+0x338>
0829e3da +0x328:  mov    %ebx,(%esp)
0829e3dd +0x32b:  call   08125c24 <_ZN21CDailyScheduleManagerD1Ev>  ; CDailyScheduleManager::~CDailyScheduleManager()
0829e3e2 +0x330:  mov    %ebx,(%esp)
0829e3e5 +0x333:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e3ea +0x338:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%ebx
0829e3f0 +0x33e:  test   %ebx,%ebx
0829e3f2 +0x340:  je     0829e404 <+0x352>
0829e3f4 +0x342:  mov    %ebx,(%esp)
0829e3f7 +0x345:  call   085886fe <_ZN18online_preliminary25COnlinePreliminaryTeamMgrD1Ev>  ; online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr()
0829e3fc +0x34a:  mov    %ebx,(%esp)
0829e3ff +0x34d:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e404 +0x352:  mov    &_ZN10GlobalData15s_auction_proxyE,%ebx
0829e40a +0x358:  test   %ebx,%ebx
0829e40c +0x35a:  je     0829e41e <+0x36c>
0829e40e +0x35c:  mov    %ebx,(%esp)
0829e411 +0x35f:  call   082aa9ac <_GLOBAL__I__ZN4CLog5this_E+0x6dd3>  ; global constructors keyed to CLog::this_+0x6dd3
0829e416 +0x364:  mov    %ebx,(%esp)
0829e419 +0x367:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e41e +0x36c:  mov    &_ZN10GlobalData20s_cera_auction_proxyE,%ebx
0829e424 +0x372:  test   %ebx,%ebx
0829e426 +0x374:  je     0829e438 <+0x386>
0829e428 +0x376:  mov    %ebx,(%esp)
0829e42b +0x379:  call   082aa9c8 <_GLOBAL__I__ZN4CLog5this_E+0x6def>  ; global constructors keyed to CLog::this_+0x6def
0829e430 +0x37e:  mov    %ebx,(%esp)
0829e433 +0x381:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e438 +0x386:  mov    &_ZN10GlobalData14s_db_connectorE,%ebx
0829e43e +0x38c:  test   %ebx,%ebx
0829e440 +0x38e:  je     0829e452 <+0x3a0>
0829e442 +0x390:  mov    %ebx,(%esp)
0829e445 +0x393:  call   080ec61a <_ZN12CDBConnectorD1Ev>  ; CDBConnector::~CDBConnector()
0829e44a +0x398:  mov    %ebx,(%esp)
0829e44d +0x39b:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e452 +0x3a0:  mov    &_ZN10GlobalData14s_rentalSystemE,%ebx
0829e458 +0x3a6:  test   %ebx,%ebx
0829e45a +0x3a8:  je     0829e46c <+0x3ba>
0829e45c +0x3aa:  mov    %ebx,(%esp)
0829e45f +0x3ad:  call   08270110 <_ZN20InstanceRentalSystemD1Ev>  ; InstanceRentalSystem::~InstanceRentalSystem()
0829e464 +0x3b2:  mov    %ebx,(%esp)
0829e467 +0x3b5:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e46c +0x3ba:  movl   $0x0,-0xc(%ebp)
0829e473 +0x3c1:  jmp    0829e4b3 <+0x401>
0829e475 +0x3c3:  mov    -0xc(%ebp),%eax
0829e478 +0x3c6:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%eax
0829e47f +0x3cd:  test   %eax,%eax
0829e481 +0x3cf:  je     0829e4af <+0x3fd>
0829e483 +0x3d1:  mov    -0xc(%ebp),%eax
0829e486 +0x3d4:  mov    &_ZN10GlobalData18s_packet_pool_listE(,%eax,4),%ebx
0829e48d +0x3db:  test   %ebx,%ebx
0829e48f +0x3dd:  je     0829e4a1 <+0x3ef>
0829e491 +0x3df:  mov    %ebx,(%esp)
0829e494 +0x3e2:  call   0828fd82 <_ZN10PacketPoolD1Ev>  ; PacketPool::~PacketPool()
0829e499 +0x3e7:  mov    %ebx,(%esp)
0829e49c +0x3ea:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0829e4a1 +0x3ef:  mov    -0xc(%ebp),%eax
0829e4a4 +0x3f2:  movl   $0x0,&_ZN10GlobalData18s_packet_pool_listE(,%eax,4)
0829e4af +0x3fd:  addl   $0x1,-0xc(%ebp)
0829e4b3 +0x401:  cmpl   $0x8,-0xc(%ebp)
0829e4b7 +0x405:  setle  %al
0829e4ba +0x408:  test   %al,%al
0829e4bc +0x40a:  jne    0829e475 <+0x3c3>
0829e4be +0x40c:  add    $0x24,%esp
0829e4c1 +0x40f:  pop    %ebx
0829e4c2 +0x410:  pop    %ebp
0829e4c3 +0x411:  ret
```

## 反编译 C

```c
// GlobalData::Fini @ 0x829e0b2

/* GlobalData::Fini() */

void GlobalData::Fini(void)

{
  PacketPool *this;
  MsgQueueMgr *pMVar1;
  StreamPool *pSVar2;
  BigStreamPool *pBVar3;
  SmallStreamPool *pSVar4;
  DBMgr *pDVar5;
  CServerProxyMgr<CMonitorServerProxy> *pCVar6;
  CServerProxyMgr<CGuildServerProxy> *pCVar7;
  CServerProxyMgr<CStatisticServerProxy> *pCVar8;
  CAuctionServerProxy *pCVar9;
  CCeraAuctionServerProxy *pCVar10;
  CSimpleSSO *pCVar11;
  CGMAccounts *pCVar12;
  InstanceRentalSystem *pIVar13;
  RefPvpGrade *pRVar14;
  CDBConnector *pCVar15;
  CGM_Manager *pCVar16;
  ItemVendingMachine *pIVar17;
  CExpertJobMgr *pCVar18;
  CBreakAwayPreventSystem *pCVar19;
  CVillageObjectMgr *pCVar20;
  CVillageMonsterMgr *pCVar21;
  CDailyScheduleManager *pCVar22;
  COnlinePreliminaryTeamMgr *pCVar23;
  CBusinessImpl *pCVar24;
  int local_10;
  
  pRVar14 = s_ref_pvp_grade;
  if (s_ref_pvp_grade != (RefPvpGrade *)0x0) {
    RefPvpGrade::~RefPvpGrade(s_ref_pvp_grade);
    operator_delete(pRVar14);
  }
  if (s_accept_thr != (int *)0x0) {
    (**(code **)(*s_accept_thr + 8))(s_accept_thr);
  }
  pCVar6 = s_monitor_proxy_mgr;
  if (s_monitor_proxy_mgr != (CServerProxyMgr<CMonitorServerProxy> *)0x0) {
    if (s_monitor_proxy_mgr != (CServerProxyMgr<CMonitorServerProxy> *)0x0) {
      CServerProxyMgr<CMonitorServerProxy>::~CServerProxyMgr(s_monitor_proxy_mgr);
      operator_delete(pCVar6);
    }
    s_monitor_proxy_mgr = (CServerProxyMgr<CMonitorServerProxy> *)0x0;
  }
  pCVar7 = s_guild_proxy_mgr;
  if (s_guild_proxy_mgr != (CServerProxyMgr<CGuildServerProxy> *)0x0) {
    if (s_guild_proxy_mgr != (CServerProxyMgr<CGuildServerProxy> *)0x0) {
      CServerProxyMgr<CGuildServerProxy>::~CServerProxyMgr(s_guild_proxy_mgr);
      operator_delete(pCVar7);
    }
    s_guild_proxy_mgr = (CServerProxyMgr<CGuildServerProxy> *)0x0;
  }
  pCVar8 = s_statistic_proxy_mgr;
  if (s_statistic_proxy_mgr != (CServerProxyMgr<CStatisticServerProxy> *)0x0) {
    if (s_statistic_proxy_mgr != (CServerProxyMgr<CStatisticServerProxy> *)0x0) {
      CServerProxyMgr<CStatisticServerProxy>::~CServerProxyMgr(s_statistic_proxy_mgr);
      operator_delete(pCVar8);
    }
    s_statistic_proxy_mgr = (CServerProxyMgr<CStatisticServerProxy> *)0x0;
  }
  if (s_udp_thr != (int *)0x0) {
    (**(code **)(*s_udp_thr + 8))(s_udp_thr);
  }
  if (s_net_thr != (int *)0x0) {
    (**(code **)(*s_net_thr + 8))(s_net_thr);
  }
  if (s_dispatch_thr != (int *)0x0) {
    (**(code **)(*s_dispatch_thr + 8))(s_dispatch_thr);
  }
  if (s_db_thr_for_logDB != (int *)0x0) {
    (**(code **)(*s_db_thr_for_logDB + 8))(s_db_thr_for_logDB);
  }
  if (s_db_thr != (int *)0x0) {
    (**(code **)(*s_db_thr + 8))(s_db_thr);
  }
  if (s_monitor_tcp_thr != (int *)0x0) {
    (**(code **)(*s_monitor_tcp_thr + 8))(s_monitor_tcp_thr);
  }
  pDVar5 = s_db_mgr;
  if (s_db_mgr != (DBMgr *)0x0) {
    DBMgr::~DBMgr(s_db_mgr);
    operator_delete(pDVar5);
  }
  pSVar2 = s_stream_pool;
  if (s_stream_pool != (StreamPool *)0x0) {
    StreamPool::~StreamPool(s_stream_pool);
    operator_delete(pSVar2);
  }
  pSVar4 = s_small_stream_pool;
  if (s_small_stream_pool != (SmallStreamPool *)0x0) {
    SmallStreamPool::~SmallStreamPool(s_small_stream_pool);
    operator_delete(pSVar4);
  }
  pBVar3 = s_big_stream_pool;
  if (s_big_stream_pool != (BigStreamPool *)0x0) {
    BigStreamPool::~BigStreamPool(s_big_stream_pool);
    operator_delete(pBVar3);
  }
  pMVar1 = s_msgq_mgr;
  if (s_msgq_mgr != (MsgQueueMgr *)0x0) {
    MsgQueueMgr::~MsgQueueMgr(s_msgq_mgr);
    operator_delete(pMVar1);
  }
  pIVar17 = s_pItemVendingMachine;
  if (s_pItemVendingMachine != (ItemVendingMachine *)0x0) {
    ItemVendingMachine::~ItemVendingMachine(s_pItemVendingMachine);
    operator_delete(pIVar17);
  }
  CSyncSlangFilter::FreeInstance();
  if (s_pcryptRijndael_CharacView_ != (int *)0x0) {
    (**(code **)(*s_pcryptRijndael_CharacView_ + 4))(s_pcryptRijndael_CharacView_);
  }
  pCVar11 = s_psimpleSSO;
  if (s_psimpleSSO != (CSimpleSSO *)0x0) {
    WongWork::CSimpleSSO::~CSimpleSSO(s_psimpleSSO);
    operator_delete(pCVar11);
  }
  pCVar12 = s_pGMAccounts_;
  if (s_pGMAccounts_ != (CGMAccounts *)0x0) {
    WongWork::CGMAccounts::~CGMAccounts(s_pGMAccounts_);
    operator_delete(pCVar12);
  }
  pCVar16 = s_GM_Manager;
  if (s_GM_Manager != (CGM_Manager *)0x0) {
    CGM_Manager::~CGM_Manager(s_GM_Manager);
    operator_delete(pCVar16);
  }
  pCVar24 = s_antibotBusinessImpl_;
  if (s_antibotBusinessImpl_ != (CBusinessImpl *)0x0) {
    CBusinessImpl::~CBusinessImpl(s_antibotBusinessImpl_);
    operator_delete(pCVar24);
  }
  pCVar19 = s_BreakAwaySys;
  if (s_BreakAwaySys != (CBreakAwayPreventSystem *)0x0) {
    break_away_prevent::CBreakAwayPreventSystem::~CBreakAwayPreventSystem(s_BreakAwaySys);
    operator_delete(pCVar19);
  }
  pCVar18 = s_ExpertJobMgr;
  if (s_ExpertJobMgr != (CExpertJobMgr *)0x0) {
    expert_job::CExpertJobMgr::~CExpertJobMgr(s_ExpertJobMgr);
    operator_delete(pCVar18);
  }
  pCVar20 = s_villageObjectMgr;
  if (s_villageObjectMgr != (CVillageObjectMgr *)0x0) {
    village_object::CVillageObjectMgr::~CVillageObjectMgr(s_villageObjectMgr);
    operator_delete(pCVar20);
  }
  pCVar21 = s_villageMonsterMgr;
  if (s_villageMonsterMgr != (CVillageMonsterMgr *)0x0) {
    village_attacked::CVillageMonsterMgr::~CVillageMonsterMgr(s_villageMonsterMgr);
    operator_delete(pCVar21);
  }
  operator_delete(s_revengeDungeonMgr);
  pCVar22 = s_DailyScheduleManager;
  if (s_DailyScheduleManager != (CDailyScheduleManager *)0x0) {
    CDailyScheduleManager::~CDailyScheduleManager(s_DailyScheduleManager);
    operator_delete(pCVar22);
  }
  pCVar23 = s_onlinePreliminaryTeamMgr;
  if (s_onlinePreliminaryTeamMgr != (COnlinePreliminaryTeamMgr *)0x0) {
    online_preliminary::COnlinePreliminaryTeamMgr::~COnlinePreliminaryTeamMgr
              (s_onlinePreliminaryTeamMgr);
    operator_delete(pCVar23);
  }
  pCVar9 = s_auction_proxy;
  if (s_auction_proxy != (CAuctionServerProxy *)0x0) {
    CAuctionServerProxy::~CAuctionServerProxy(s_auction_proxy);
    operator_delete(pCVar9);
  }
  pCVar10 = s_cera_auction_proxy;
  if (s_cera_auction_proxy != (CCeraAuctionServerProxy *)0x0) {
    CCeraAuctionServerProxy::~CCeraAuctionServerProxy(s_cera_auction_proxy);
    operator_delete(pCVar10);
  }
  pCVar15 = s_db_connector;
  if (s_db_connector != (CDBConnector *)0x0) {
    CDBConnector::~CDBConnector(s_db_connector);
    operator_delete(pCVar15);
  }
  pIVar13 = s_rentalSystem;
  if (s_rentalSystem != (InstanceRentalSystem *)0x0) {
    InstanceRentalSystem::~InstanceRentalSystem(s_rentalSystem);
    operator_delete(pIVar13);
  }
  for (local_10 = 0; local_10 < 9; local_10 = local_10 + 1) {
    if (*(int *)(s_packet_pool_list + local_10 * 4) != 0) {
      this = *(PacketPool **)(s_packet_pool_list + local_10 * 4);
      if (this != (PacketPool *)0x0) {
        PacketPool::~PacketPool(this);
        operator_delete(this);
      }
      *(undefined4 *)(s_packet_pool_list + local_10 * 4) = 0;
    }
  }
  return;
}
```
