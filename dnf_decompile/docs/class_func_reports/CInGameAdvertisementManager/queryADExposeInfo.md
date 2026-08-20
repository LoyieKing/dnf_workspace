# queryADExposeInfo

`_ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition`

`CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)`

| 类 | 地址 |
|---|---|
| `CInGameAdvertisementManager` | `0x080fd19e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 080fd19e  _ZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeCondition
#           CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)
# range [0x080fd19e, 0x080fd83b]
080fd19e +0x000:  push   %ebp
080fd19f +0x001:  mov    %esp,%ebp
080fd1a1 +0x003:  sub    $0x58,%esp
080fd1a4 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
080fd1a9 +0x00b:  movl   $0x0,0x8(%esp)
080fd1b1 +0x013:  movl   $0x9,0x4(%esp)
080fd1b9 +0x01b:  mov    %eax,(%esp)
080fd1bc +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
080fd1c1 +0x023:  mov    %eax,-0x14(%ebp)
080fd1c4 +0x026:  movl   $"seLect * from in_game_ad where visible = 1",0x4(%esp)
080fd1cc +0x02e:  mov    -0x14(%ebp),%eax
080fd1cf +0x031:  mov    %eax,(%esp)
080fd1d2 +0x034:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
080fd1d7 +0x039:  movl   $0x1,0x4(%esp)
080fd1df +0x041:  mov    -0x14(%ebp),%eax
080fd1e2 +0x044:  mov    %eax,(%esp)
080fd1e5 +0x047:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
080fd1ea +0x04c:  mov    %al,-0x15(%ebp)
080fd1ed +0x04f:  movzbl -0x15(%ebp),%eax
080fd1f1 +0x053:  xor    $0x1,%eax
080fd1f4 +0x056:  test   %al,%al
080fd1f6 +0x058:  je     080fd202 <+0x64>
080fd1f8 +0x05a:  mov    $0x0,%eax
080fd1fd +0x05f:  jmp    080fd839 <+0x69b>
080fd202 +0x064:  mov    -0x14(%ebp),%eax
080fd205 +0x067:  mov    %eax,(%esp)
080fd208 +0x06a:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
080fd20d +0x06f:  mov    %eax,-0x10(%ebp)
080fd210 +0x072:  movl   $0x0,-0xc(%ebp)
080fd217 +0x079:  jmp    080fd7bd <+0x61f>
080fd21c +0x07e:  mov    -0x14(%ebp),%eax
080fd21f +0x081:  mov    %eax,(%esp)
080fd222 +0x084:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
080fd227 +0x089:  mov    %al,-0x15(%ebp)
080fd22a +0x08c:  movzbl -0x15(%ebp),%eax
080fd22e +0x090:  xor    $0x1,%eax
080fd231 +0x093:  test   %al,%al
080fd233 +0x095:  jne    080fd7d0 <+0x632>
080fd239 +0x09b:  cmpl   $0xc7,-0xc(%ebp)
080fd240 +0x0a2:  jle    080fd284 <+0xe6>
080fd242 +0x0a4:  movl   $0x5,0xc(%esp)
080fd24a +0x0ac:  movl   $0xeb,0x8(%esp)
080fd252 +0x0b4:  movl   $&_ZZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeConditionE19__PRETTY_FUNCTION__,0x4(%esp)
080fd25a +0x0bc:  lea    -0x38(%ebp),%eax
080fd25d +0x0bf:  mov    %eax,(%esp)
080fd260 +0x0c2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
080fd265 +0x0c7:  mov    -0x10(%ebp),%eax
080fd268 +0x0ca:  mov    %eax,0x8(%esp)
080fd26c +0x0ce:  movl   $"[IN_GAME_ADVERTISEMENT_ERROR] count(%d)",0x4(%esp)
080fd274 +0x0d6:  lea    -0x38(%ebp),%eax
080fd277 +0x0d9:  mov    %eax,(%esp)
080fd27a +0x0dc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080fd27f +0x0e1:  jmp    080fd7d1 <+0x633>
080fd284 +0x0e6:  mov    -0xc(%ebp),%eax
080fd287 +0x0e9:  imul   $0x84c,%eax,%eax
080fd28d +0x0ef:  add    0xc(%ebp),%eax
080fd290 +0x0f2:  add    $0x210,%eax
080fd295 +0x0f7:  mov    %eax,0x8(%esp)
080fd299 +0x0fb:  movl   $0x0,0x4(%esp)
080fd2a1 +0x103:  mov    -0x14(%ebp),%eax
080fd2a4 +0x106:  mov    %eax,(%esp)
080fd2a7 +0x109:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
080fd2ac +0x10e:  mov    %al,-0x15(%ebp)
080fd2af +0x111:  movzbl -0x15(%ebp),%eax
080fd2b3 +0x115:  xor    $0x1,%eax
080fd2b6 +0x118:  test   %al,%al
080fd2b8 +0x11a:  je     080fd2c4 <+0x126>
080fd2ba +0x11c:  mov    $0x0,%eax
080fd2bf +0x121:  jmp    080fd839 <+0x69b>
080fd2c4 +0x126:  mov    -0xc(%ebp),%eax
080fd2c7 +0x129:  imul   $0x84c,%eax,%eax
080fd2cd +0x12f:  add    0xc(%ebp),%eax
080fd2d0 +0x132:  add    $0x214,%eax
080fd2d5 +0x137:  movl   $0x32,0xc(%esp)
080fd2dd +0x13f:  mov    %eax,0x8(%esp)
080fd2e1 +0x143:  movl   $0x1,0x4(%esp)
080fd2e9 +0x14b:  mov    -0x14(%ebp),%eax
080fd2ec +0x14e:  mov    %eax,(%esp)
080fd2ef +0x151:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd2f4 +0x156:  mov    %al,-0x15(%ebp)
080fd2f7 +0x159:  movzbl -0x15(%ebp),%eax
080fd2fb +0x15d:  xor    $0x1,%eax
080fd2fe +0x160:  test   %al,%al
080fd300 +0x162:  je     080fd30c <+0x16e>
080fd302 +0x164:  mov    $0x0,%eax
080fd307 +0x169:  jmp    080fd839 <+0x69b>
080fd30c +0x16e:  mov    -0xc(%ebp),%eax
080fd30f +0x171:  imul   $0x84c,%eax,%eax
080fd315 +0x177:  add    0xc(%ebp),%eax
080fd318 +0x17a:  mov    %eax,0x8(%esp)
080fd31c +0x17e:  movl   $0x2,0x4(%esp)
080fd324 +0x186:  mov    -0x14(%ebp),%eax
080fd327 +0x189:  mov    %eax,(%esp)
080fd32a +0x18c:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
080fd32f +0x191:  mov    %al,-0x15(%ebp)
080fd332 +0x194:  movzbl -0x15(%ebp),%eax
080fd336 +0x198:  xor    $0x1,%eax
080fd339 +0x19b:  test   %al,%al
080fd33b +0x19d:  je     080fd347 <+0x1a9>
080fd33d +0x19f:  mov    $0x0,%eax
080fd342 +0x1a4:  jmp    080fd839 <+0x69b>
080fd347 +0x1a9:  mov    -0xc(%ebp),%eax
080fd34a +0x1ac:  imul   $0x84c,%eax,%eax
080fd350 +0x1b2:  add    0xc(%ebp),%eax
080fd353 +0x1b5:  add    $0x1,%eax
080fd356 +0x1b8:  mov    %eax,0x8(%esp)
080fd35a +0x1bc:  movl   $0x3,0x4(%esp)
080fd362 +0x1c4:  mov    -0x14(%ebp),%eax
080fd365 +0x1c7:  mov    %eax,(%esp)
080fd368 +0x1ca:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
080fd36d +0x1cf:  mov    %al,-0x15(%ebp)
080fd370 +0x1d2:  movzbl -0x15(%ebp),%eax
080fd374 +0x1d6:  xor    $0x1,%eax
080fd377 +0x1d9:  test   %al,%al
080fd379 +0x1db:  je     080fd385 <+0x1e7>
080fd37b +0x1dd:  mov    $0x0,%eax
080fd380 +0x1e2:  jmp    080fd839 <+0x69b>
080fd385 +0x1e7:  mov    -0xc(%ebp),%eax
080fd388 +0x1ea:  imul   $0x84c,%eax,%eax
080fd38e +0x1f0:  add    0xc(%ebp),%eax
080fd391 +0x1f3:  add    $0x2,%eax
080fd394 +0x1f6:  mov    %eax,0x8(%esp)
080fd398 +0x1fa:  movl   $0x4,0x4(%esp)
080fd3a0 +0x202:  mov    -0x14(%ebp),%eax
080fd3a3 +0x205:  mov    %eax,(%esp)
080fd3a6 +0x208:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
080fd3ab +0x20d:  mov    %al,-0x15(%ebp)
080fd3ae +0x210:  movzbl -0x15(%ebp),%eax
080fd3b2 +0x214:  xor    $0x1,%eax
080fd3b5 +0x217:  test   %al,%al
080fd3b7 +0x219:  je     080fd3c3 <+0x225>
080fd3b9 +0x21b:  mov    $0x0,%eax
080fd3be +0x220:  jmp    080fd839 <+0x69b>
080fd3c3 +0x225:  mov    -0xc(%ebp),%eax
080fd3c6 +0x228:  imul   $0x84c,%eax,%eax
080fd3cc +0x22e:  add    0xc(%ebp),%eax
080fd3cf +0x231:  add    $0x3,%eax
080fd3d2 +0x234:  movl   $0x200,0xc(%esp)
080fd3da +0x23c:  mov    %eax,0x8(%esp)
080fd3de +0x240:  movl   $0x5,0x4(%esp)
080fd3e6 +0x248:  mov    -0x14(%ebp),%eax
080fd3e9 +0x24b:  mov    %eax,(%esp)
080fd3ec +0x24e:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd3f1 +0x253:  mov    %al,-0x15(%ebp)
080fd3f4 +0x256:  movzbl -0x15(%ebp),%eax
080fd3f8 +0x25a:  xor    $0x1,%eax
080fd3fb +0x25d:  test   %al,%al
080fd3fd +0x25f:  je     080fd409 <+0x26b>
080fd3ff +0x261:  mov    $0x0,%eax
080fd404 +0x266:  jmp    080fd839 <+0x69b>
080fd409 +0x26b:  mov    -0xc(%ebp),%eax
080fd40c +0x26e:  imul   $0x84c,%eax,%eax
080fd412 +0x274:  add    0xc(%ebp),%eax
080fd415 +0x277:  add    $0x246,%eax
080fd41a +0x27c:  movl   $0xff,0xc(%esp)
080fd422 +0x284:  mov    %eax,0x8(%esp)
080fd426 +0x288:  movl   $0x6,0x4(%esp)
080fd42e +0x290:  mov    -0x14(%ebp),%eax
080fd431 +0x293:  mov    %eax,(%esp)
080fd434 +0x296:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd439 +0x29b:  mov    %al,-0x15(%ebp)
080fd43c +0x29e:  movzbl -0x15(%ebp),%eax
080fd440 +0x2a2:  xor    $0x1,%eax
080fd443 +0x2a5:  test   %al,%al
080fd445 +0x2a7:  je     080fd451 <+0x2b3>
080fd447 +0x2a9:  mov    $0x0,%eax
080fd44c +0x2ae:  jmp    080fd839 <+0x69b>
080fd451 +0x2b3:  mov    -0xc(%ebp),%eax
080fd454 +0x2b6:  imul   $0x84c,%eax,%eax
080fd45a +0x2bc:  add    0xc(%ebp),%eax
080fd45d +0x2bf:  add    $0x444,%eax
080fd462 +0x2c4:  mov    %eax,0x8(%esp)
080fd466 +0x2c8:  movl   $0x7,0x4(%esp)
080fd46e +0x2d0:  mov    -0x14(%ebp),%eax
080fd471 +0x2d3:  mov    %eax,(%esp)
080fd474 +0x2d6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
080fd479 +0x2db:  mov    %al,-0x15(%ebp)
080fd47c +0x2de:  movzbl -0x15(%ebp),%eax
080fd480 +0x2e2:  xor    $0x1,%eax
080fd483 +0x2e5:  test   %al,%al
080fd485 +0x2e7:  je     080fd491 <+0x2f3>
080fd487 +0x2e9:  mov    $0x0,%eax
080fd48c +0x2ee:  jmp    080fd839 <+0x69b>
080fd491 +0x2f3:  mov    -0xc(%ebp),%eax
080fd494 +0x2f6:  imul   $0x84c,%eax,%eax
080fd49a +0x2fc:  add    0xc(%ebp),%eax
080fd49d +0x2ff:  add    $0x345,%eax
080fd4a2 +0x304:  movl   $0xff,0xc(%esp)
080fd4aa +0x30c:  mov    %eax,0x8(%esp)
080fd4ae +0x310:  movl   $0x8,0x4(%esp)
080fd4b6 +0x318:  mov    -0x14(%ebp),%eax
080fd4b9 +0x31b:  mov    %eax,(%esp)
080fd4bc +0x31e:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd4c1 +0x323:  mov    %al,-0x15(%ebp)
080fd4c4 +0x326:  movzbl -0x15(%ebp),%eax
080fd4c8 +0x32a:  xor    $0x1,%eax
080fd4cb +0x32d:  test   %al,%al
080fd4cd +0x32f:  je     080fd4d9 <+0x33b>
080fd4cf +0x331:  mov    $0x0,%eax
080fd4d4 +0x336:  jmp    080fd839 <+0x69b>
080fd4d9 +0x33b:  mov    -0xc(%ebp),%eax
080fd4dc +0x33e:  imul   $0x84c,%eax,%eax
080fd4e2 +0x344:  add    0xc(%ebp),%eax
080fd4e5 +0x347:  add    $0x54a,%eax
080fd4ea +0x34c:  movl   $0xff,0xc(%esp)
080fd4f2 +0x354:  mov    %eax,0x8(%esp)
080fd4f6 +0x358:  movl   $0x9,0x4(%esp)
080fd4fe +0x360:  mov    -0x14(%ebp),%eax
080fd501 +0x363:  mov    %eax,(%esp)
080fd504 +0x366:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd509 +0x36b:  mov    %al,-0x15(%ebp)
080fd50c +0x36e:  movzbl -0x15(%ebp),%eax
080fd510 +0x372:  xor    $0x1,%eax
080fd513 +0x375:  test   %al,%al
080fd515 +0x377:  je     080fd521 <+0x383>
080fd517 +0x379:  mov    $0x0,%eax
080fd51c +0x37e:  jmp    080fd839 <+0x69b>
080fd521 +0x383:  mov    -0xc(%ebp),%eax
080fd524 +0x386:  imul   $0x84c,%eax,%eax
080fd52a +0x38c:  add    0xc(%ebp),%eax
080fd52d +0x38f:  add    $0x649,%eax
080fd532 +0x394:  movl   $0xff,0xc(%esp)
080fd53a +0x39c:  mov    %eax,0x8(%esp)
080fd53e +0x3a0:  movl   $0xa,0x4(%esp)
080fd546 +0x3a8:  mov    -0x14(%ebp),%eax
080fd549 +0x3ab:  mov    %eax,(%esp)
080fd54c +0x3ae:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd551 +0x3b3:  mov    %al,-0x15(%ebp)
080fd554 +0x3b6:  movzbl -0x15(%ebp),%eax
080fd558 +0x3ba:  xor    $0x1,%eax
080fd55b +0x3bd:  test   %al,%al
080fd55d +0x3bf:  je     080fd569 <+0x3cb>
080fd55f +0x3c1:  mov    $0x0,%eax
080fd564 +0x3c6:  jmp    080fd839 <+0x69b>
080fd569 +0x3cb:  mov    -0xc(%ebp),%eax
080fd56c +0x3ce:  imul   $0x84c,%eax,%eax
080fd572 +0x3d4:  add    0xc(%ebp),%eax
080fd575 +0x3d7:  add    $0x748,%eax
080fd57a +0x3dc:  mov    %eax,0x8(%esp)
080fd57e +0x3e0:  movl   $0xb,0x4(%esp)
080fd586 +0x3e8:  mov    -0x14(%ebp),%eax
080fd589 +0x3eb:  mov    %eax,(%esp)
080fd58c +0x3ee:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
080fd591 +0x3f3:  mov    %al,-0x15(%ebp)
080fd594 +0x3f6:  movzbl -0x15(%ebp),%eax
080fd598 +0x3fa:  xor    $0x1,%eax
080fd59b +0x3fd:  test   %al,%al
080fd59d +0x3ff:  je     080fd5a9 <+0x40b>
080fd59f +0x401:  mov    $0x0,%eax
080fd5a4 +0x406:  jmp    080fd839 <+0x69b>
080fd5a9 +0x40b:  mov    -0xc(%ebp),%eax
080fd5ac +0x40e:  imul   $0x84c,%eax,%eax
080fd5b2 +0x414:  add    0xc(%ebp),%eax
080fd5b5 +0x417:  add    $0x74c,%eax
080fd5ba +0x41c:  movl   $0xff,0xc(%esp)
080fd5c2 +0x424:  mov    %eax,0x8(%esp)
080fd5c6 +0x428:  movl   $0xc,0x4(%esp)
080fd5ce +0x430:  mov    -0x14(%ebp),%eax
080fd5d1 +0x433:  mov    %eax,(%esp)
080fd5d4 +0x436:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd5d9 +0x43b:  mov    %al,-0x15(%ebp)
080fd5dc +0x43e:  movzbl -0x15(%ebp),%eax
080fd5e0 +0x442:  xor    $0x1,%eax
080fd5e3 +0x445:  test   %al,%al
080fd5e5 +0x447:  je     080fd5f1 <+0x453>
080fd5e7 +0x449:  mov    $0x0,%eax
080fd5ec +0x44e:  jmp    080fd839 <+0x69b>
080fd5f1 +0x453:  mov    -0xc(%ebp),%eax
080fd5f4 +0x456:  imul   $0x84c,%eax,%eax
080fd5fa +0x45c:  add    0xc(%ebp),%eax
080fd5fd +0x45f:  add    $0x208,%eax
080fd602 +0x464:  mov    %eax,0x8(%esp)
080fd606 +0x468:  movl   $0xd,0x4(%esp)
080fd60e +0x470:  mov    -0x14(%ebp),%eax
080fd611 +0x473:  mov    %eax,(%esp)
080fd614 +0x476:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
080fd619 +0x47b:  mov    %al,-0x15(%ebp)
080fd61c +0x47e:  movzbl -0x15(%ebp),%eax
080fd620 +0x482:  xor    $0x1,%eax
080fd623 +0x485:  test   %al,%al
080fd625 +0x487:  je     080fd631 <+0x493>
080fd627 +0x489:  mov    $0x0,%eax
080fd62c +0x48e:  jmp    080fd839 <+0x69b>
080fd631 +0x493:  mov    -0xc(%ebp),%eax
080fd634 +0x496:  imul   $0x84c,%eax,%eax
080fd63a +0x49c:  add    0xc(%ebp),%eax
080fd63d +0x49f:  add    $0x20c,%eax
080fd642 +0x4a4:  mov    %eax,0x8(%esp)
080fd646 +0x4a8:  movl   $0xe,0x4(%esp)
080fd64e +0x4b0:  mov    -0x14(%ebp),%eax
080fd651 +0x4b3:  mov    %eax,(%esp)
080fd654 +0x4b6:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
080fd659 +0x4bb:  mov    %al,-0x15(%ebp)
080fd65c +0x4be:  movzbl -0x15(%ebp),%eax
080fd660 +0x4c2:  xor    $0x1,%eax
080fd663 +0x4c5:  test   %al,%al
080fd665 +0x4c7:  je     080fd671 <+0x4d3>
080fd667 +0x4c9:  mov    $0x0,%eax
080fd66c +0x4ce:  jmp    080fd839 <+0x69b>
080fd671 +0x4d3:  mov    -0xc(%ebp),%eax
080fd674 +0x4d6:  imul   $0x84c,%eax,%eax
080fd67a +0x4dc:  add    0xc(%ebp),%eax
080fd67d +0x4df:  add    $0x547,%eax
080fd682 +0x4e4:  mov    %eax,0x8(%esp)
080fd686 +0x4e8:  movl   $0xf,0x4(%esp)
080fd68e +0x4f0:  mov    -0x14(%ebp),%eax
080fd691 +0x4f3:  mov    %eax,(%esp)
080fd694 +0x4f6:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
080fd699 +0x4fb:  mov    %al,-0x15(%ebp)
080fd69c +0x4fe:  movzbl -0x15(%ebp),%eax
080fd6a0 +0x502:  xor    $0x1,%eax
080fd6a3 +0x505:  test   %al,%al
080fd6a5 +0x507:  je     080fd6b1 <+0x513>
080fd6a7 +0x509:  mov    $0x0,%eax
080fd6ac +0x50e:  jmp    080fd839 <+0x69b>
080fd6b1 +0x513:  mov    -0xc(%ebp),%eax
080fd6b4 +0x516:  imul   $0x84c,%eax,%eax
080fd6ba +0x51c:  add    0xc(%ebp),%eax
080fd6bd +0x51f:  add    $0x203,%eax
080fd6c2 +0x524:  mov    %eax,0x8(%esp)
080fd6c6 +0x528:  movl   $0x11,0x4(%esp)
080fd6ce +0x530:  mov    -0x14(%ebp),%eax
080fd6d1 +0x533:  mov    %eax,(%esp)
080fd6d4 +0x536:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
080fd6d9 +0x53b:  mov    %al,-0x15(%ebp)
080fd6dc +0x53e:  movzbl -0x15(%ebp),%eax
080fd6e0 +0x542:  xor    $0x1,%eax
080fd6e3 +0x545:  test   %al,%al
080fd6e5 +0x547:  je     080fd6f1 <+0x553>
080fd6e7 +0x549:  mov    $0x0,%eax
080fd6ec +0x54e:  jmp    080fd839 <+0x69b>
080fd6f1 +0x553:  mov    -0xc(%ebp),%eax
080fd6f4 +0x556:  imul   $0x84c,%eax,%eax
080fd6fa +0x55c:  add    0xc(%ebp),%eax
080fd6fd +0x55f:  add    $0x204,%eax
080fd702 +0x564:  mov    %eax,0x8(%esp)
080fd706 +0x568:  movl   $0x12,0x4(%esp)
080fd70e +0x570:  mov    -0x14(%ebp),%eax
080fd711 +0x573:  mov    %eax,(%esp)
080fd714 +0x576:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
080fd719 +0x57b:  mov    %al,-0x15(%ebp)
080fd71c +0x57e:  movzbl -0x15(%ebp),%eax
080fd720 +0x582:  xor    $0x1,%eax
080fd723 +0x585:  test   %al,%al
080fd725 +0x587:  je     080fd731 <+0x593>
080fd727 +0x589:  mov    $0x0,%eax
080fd72c +0x58e:  jmp    080fd839 <+0x69b>
080fd731 +0x593:  mov    -0xc(%ebp),%eax
080fd734 +0x596:  imul   $0x84c,%eax,%eax
080fd73a +0x59c:  add    0xc(%ebp),%eax
080fd73d +0x59f:  add    $0x448,%eax
080fd742 +0x5a4:  movl   $0xff,0xc(%esp)
080fd74a +0x5ac:  mov    %eax,0x8(%esp)
080fd74e +0x5b0:  movl   $0x14,0x4(%esp)
080fd756 +0x5b8:  mov    -0x14(%ebp),%eax
080fd759 +0x5bb:  mov    %eax,(%esp)
080fd75c +0x5be:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
080fd761 +0x5c3:  mov    %al,-0x15(%ebp)
080fd764 +0x5c6:  movzbl -0x15(%ebp),%eax
080fd768 +0x5ca:  xor    $0x1,%eax
080fd76b +0x5cd:  test   %al,%al
080fd76d +0x5cf:  je     080fd779 <+0x5db>
080fd76f +0x5d1:  mov    $0x0,%eax
080fd774 +0x5d6:  jmp    080fd839 <+0x69b>
080fd779 +0x5db:  mov    -0xc(%ebp),%eax
080fd77c +0x5de:  imul   $0x84c,%eax,%eax
080fd782 +0x5e4:  add    0xc(%ebp),%eax
080fd785 +0x5e7:  add    $0x548,%eax
080fd78a +0x5ec:  mov    %eax,0x8(%esp)
080fd78e +0x5f0:  movl   $0x15,0x4(%esp)
080fd796 +0x5f8:  mov    -0x14(%ebp),%eax
080fd799 +0x5fb:  mov    %eax,(%esp)
080fd79c +0x5fe:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
080fd7a1 +0x603:  mov    %al,-0x15(%ebp)
080fd7a4 +0x606:  movzbl -0x15(%ebp),%eax
080fd7a8 +0x60a:  xor    $0x1,%eax
080fd7ab +0x60d:  test   %al,%al
080fd7ad +0x60f:  je     080fd7b9 <+0x61b>
080fd7af +0x611:  mov    $0x0,%eax
080fd7b4 +0x616:  jmp    080fd839 <+0x69b>
080fd7b9 +0x61b:  addl   $0x1,-0xc(%ebp)
080fd7bd +0x61f:  mov    -0xc(%ebp),%eax
080fd7c0 +0x622:  cmp    -0x10(%ebp),%eax
080fd7c3 +0x625:  setl   %al
080fd7c6 +0x628:  test   %al,%al
080fd7c8 +0x62a:  jne    080fd21c <+0x7e>
080fd7ce +0x630:  jmp    080fd7d1 <+0x633>
080fd7d0 +0x632:  nop
080fd7d1 +0x633:  movl   $0x1,0x14(%esp)
080fd7d9 +0x63b:  movl   $0x1,0x10(%esp)
080fd7e1 +0x643:  movl   $0x9,0xc(%esp)
080fd7e9 +0x64b:  movl   $0x12c,0x8(%esp)
080fd7f1 +0x653:  movl   $&_ZZN27CInGameAdvertisementManager17queryADExposeInfoEP25stInGameADExposeConditionE19__PRETTY_FUNCTION__,0x4(%esp)
080fd7f9 +0x65b:  lea    -0x28(%ebp),%eax
080fd7fc +0x65e:  mov    %eax,(%esp)
080fd7ff +0x661:  call   0854f746 <_ZN8cMyTraceC1EPKciibb>  ; cMyTrace::cMyTrace(char const*, int, int, bool, bool)
080fd804 +0x666:  mov    -0x10(%ebp),%eax
080fd807 +0x669:  mov    %eax,0x8(%esp)
080fd80b +0x66d:  movl   $"[!] Load In Game Advertisement Expose Info From DB(%d) Complete",0x4(%esp)
080fd813 +0x675:  lea    -0x28(%ebp),%eax
080fd816 +0x678:  mov    %eax,(%esp)
080fd819 +0x67b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
080fd81e +0x680:  mov    -0xc(%ebp),%eax
080fd821 +0x683:  imul   $0x84c,%eax,%eax
080fd827 +0x689:  add    0xc(%ebp),%eax
080fd82a +0x68c:  movl   $0xffffffff,0x210(%eax)
080fd834 +0x696:  mov    $0x1,%eax
080fd839 +0x69b:  leave
080fd83a +0x69c:  ret
080fd83b +0x69d:  nop
```

## 反编译 C

```c
// CInGameAdvertisementManager::queryADExposeInfo @ 0x80fd19e

/* CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*) */

undefined4 __thiscall
CInGameAdvertisementManager::queryADExposeInfo
          (CInGameAdvertisementManager *this,stInGameADExposeCondition *param_1)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  MySQL::set_query(local_18,"seLect * from in_game_ad where visible = 1");
  local_19 = MySQL::exec(local_18,true);
  if (local_19 == '\x01') {
    local_14 = MySQL::get_n_rows(local_18);
    local_10 = 0;
    while( true ) {
      if ((local_14 <= local_10) || (local_19 = MySQL::fetch(local_18), local_19 != '\x01'))
      goto LAB_080fd7d1;
      if (199 < local_10) break;
      local_19 = MySQL::get_uint(local_18,0,(uint *)(param_1 + local_10 * 0x84c + 0x210));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,1,(char *)(param_1 + local_10 * 0x84c + 0x214),0x32);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,2,(char *)(param_1 + local_10 * 0x84c));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,3,(char *)(param_1 + local_10 * 0x84c + 1));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,4,(char *)(param_1 + local_10 * 0x84c + 2));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,5,(char *)(param_1 + local_10 * 0x84c + 3),0x200);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,6,(char *)(param_1 + local_10 * 0x84c + 0x246),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,7,(uint *)(param_1 + local_10 * 0x84c + 0x444));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,8,(char *)(param_1 + local_10 * 0x84c + 0x345),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,9,(char *)(param_1 + local_10 * 0x84c + 0x54a),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,10,(char *)(param_1 + local_10 * 0x84c + 0x649),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,0xb,(uint *)(param_1 + local_10 * 0x84c + 0x748));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,0xc,(char *)(param_1 + local_10 * 0x84c + 0x74c),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,0xd,(uint *)(param_1 + local_10 * 0x84c + 0x208));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_uint(local_18,0xe,(uint *)(param_1 + local_10 * 0x84c + 0x20c));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_byte(local_18,0xf,(char *)(param_1 + local_10 * 0x84c + 0x547));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_ubyte(local_18,0x11,(uchar *)(param_1 + local_10 * 0x84c + 0x203));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_short(local_18,0x12,(short *)(param_1 + local_10 * 0x84c + 0x204));
      if (local_19 != '\x01') {
        return 0;
      }
      local_19 = MySQL::get_str(local_18,0x14,(char *)(param_1 + local_10 * 0x84c + 0x448),0xff);
      if (local_19 != '\x01') {
        return 0;
      }
      cVar1 = MySQL::get_byte(local_18,0x15,(char *)(param_1 + local_10 * 0x84c + 0x548));
      if (cVar1 != '\x01') {
        return 0;
      }
      local_10 = local_10 + 1;
      local_19 = '\x01';
    }
    cMyTrace::cMyTrace(local_3c,
                       "bool CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)"
                       ,0xeb,5);
    cMyTrace::operator()(local_3c,"[IN_GAME_ADVERTISEMENT_ERROR] count(%d)",local_14);
LAB_080fd7d1:
    cMyTrace::cMyTrace(local_2c,
                       "bool CInGameAdvertisementManager::queryADExposeInfo(stInGameADExposeCondition*)"
                       ,300,9,true,true);
    cMyTrace::operator()
              (local_2c,"[!] Load In Game Advertisement Expose Info From DB(%d) Complete",local_14);
    *(undefined4 *)(param_1 + local_10 * 0x84c + 0x210) = 0xffffffff;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
