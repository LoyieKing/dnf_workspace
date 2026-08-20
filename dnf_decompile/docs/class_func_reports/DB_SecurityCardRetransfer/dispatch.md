# dispatch

`_ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream`

`DB_SecurityCardRetransfer::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardRetransfer` | `0x0842c362` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842c362  _ZN25DB_SecurityCardRetransfer8dispatchEiiP6Stream
#           DB_SecurityCardRetransfer::dispatch(int, int, Stream*)
# range [0x0842c362, 0x0842c7bd]
0842c362 +0x000:  push   %ebp
0842c363 +0x001:  mov    %esp,%ebp
0842c365 +0x003:  push   %esi
0842c366 +0x004:  push   %ebx
0842c367 +0x005:  sub    $0xd0,%esp
0842c36d +0x00b:  mov    0x8(%ebp),%eax
0842c370 +0x00e:  mov    0x14(%ebp),%edx
0842c373 +0x011:  mov    %edx,0xc(%esp)
0842c377 +0x015:  mov    0x10(%ebp),%edx
0842c37a +0x018:  mov    %edx,0x8(%esp)
0842c37e +0x01c:  mov    0xc(%ebp),%edx
0842c381 +0x01f:  mov    %edx,0x4(%esp)
0842c385 +0x023:  mov    %eax,(%esp)
0842c388 +0x026:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0842c38d +0x02b:  xor    $0x1,%eax
0842c390 +0x02e:  test   %al,%al
0842c392 +0x030:  je     0842c39e <+0x3c>
0842c394 +0x032:  mov    $0x0,%eax
0842c399 +0x037:  jmp    0842c7b3 <+0x451>
0842c39e +0x03c:  mov    0x14(%ebp),%eax
0842c3a1 +0x03f:  mov    %eax,(%esp)
0842c3a4 +0x042:  call   08452772 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x5388>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x5388
0842c3a9 +0x047:  mov    %eax,-0x18(%ebp)
0842c3ac +0x04a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842c3b1 +0x04f:  movl   $0x0,0x8(%esp)
0842c3b9 +0x057:  movl   $0x6,0x4(%esp)
0842c3c1 +0x05f:  mov    %eax,(%esp)
0842c3c4 +0x062:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842c3c9 +0x067:  mov    %eax,-0x14(%ebp)
0842c3cc +0x06a:  mov    -0x18(%ebp),%eax
0842c3cf +0x06d:  mov    (%eax),%eax
0842c3d1 +0x06f:  movl   $0x0,0x4(%esp)
0842c3d9 +0x077:  mov    %eax,(%esp)
0842c3dc +0x07a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842c3e1 +0x07f:  mov    %eax,0x8(%esp)
0842c3e5 +0x083:  movl   $"seLect re_issue_cnt,unix_timestamp(last_issue_time), phone from member_security_card where m_id=%s",0x4(%esp)
0842c3ed +0x08b:  mov    -0x14(%ebp),%eax
0842c3f0 +0x08e:  mov    %eax,(%esp)
0842c3f3 +0x091:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842c3f8 +0x096:  movl   $0x1,0x4(%esp)
0842c400 +0x09e:  mov    -0x14(%ebp),%eax
0842c403 +0x0a1:  mov    %eax,(%esp)
0842c406 +0x0a4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842c40b +0x0a9:  xor    $0x1,%eax
0842c40e +0x0ac:  test   %al,%al
0842c410 +0x0ae:  je     0842c43e <+0xdc>
0842c412 +0x0b0:  movl   $0x4,(%esp)
0842c419 +0x0b7:  call   08725800 <__cxa_allocate_exception>
0842c41e +0x0bc:  mov    %eax,%edx
0842c420 +0x0be:  movl   $0x1,(%edx)
0842c426 +0x0c4:  movl   $0x0,0x8(%esp)
0842c42e +0x0cc:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842c436 +0x0d4:  mov    %eax,(%esp)
0842c439 +0x0d7:  call   08724c50 <__cxa_throw>
0842c43e +0x0dc:  movl   $0x0,-0x1c(%ebp)
0842c445 +0x0e3:  movl   $0x0,-0x20(%ebp)
0842c44c +0x0ea:  mov    -0x14(%ebp),%eax
0842c44f +0x0ed:  mov    %eax,(%esp)
0842c452 +0x0f0:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842c457 +0x0f5:  xor    $0x1,%eax
0842c45a +0x0f8:  test   %al,%al
0842c45c +0x0fa:  je     0842c48a <+0x128>
0842c45e +0x0fc:  movl   $0x4,(%esp)
0842c465 +0x103:  call   08725800 <__cxa_allocate_exception>
0842c46a +0x108:  mov    %eax,%edx
0842c46c +0x10a:  movl   $0x1,(%edx)
0842c472 +0x110:  movl   $0x0,0x8(%esp)
0842c47a +0x118:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842c482 +0x120:  mov    %eax,(%esp)
0842c485 +0x123:  call   08724c50 <__cxa_throw>
0842c48a +0x128:  lea    -0x1c(%ebp),%eax
0842c48d +0x12b:  mov    %eax,0x8(%esp)
0842c491 +0x12f:  movl   $0x0,0x4(%esp)
0842c499 +0x137:  mov    -0x14(%ebp),%eax
0842c49c +0x13a:  mov    %eax,(%esp)
0842c49f +0x13d:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842c4a4 +0x142:  lea    -0x20(%ebp),%eax
0842c4a7 +0x145:  mov    %eax,0x8(%esp)
0842c4ab +0x149:  movl   $0x1,0x4(%esp)
0842c4b3 +0x151:  mov    -0x14(%ebp),%eax
0842c4b6 +0x154:  mov    %eax,(%esp)
0842c4b9 +0x157:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842c4be +0x15c:  movl   $0x29,0x8(%esp)
0842c4c6 +0x164:  movl   $0x0,0x4(%esp)
0842c4ce +0x16c:  lea    -0x51(%ebp),%eax
0842c4d1 +0x16f:  mov    %eax,(%esp)
0842c4d4 +0x172:  call   0807dcc0 <_init+0x5b8>
0842c4d9 +0x177:  movl   $0x29,0xc(%esp)
0842c4e1 +0x17f:  lea    -0x51(%ebp),%eax
0842c4e4 +0x182:  mov    %eax,0x8(%esp)
0842c4e8 +0x186:  movl   $0x2,0x4(%esp)
0842c4f0 +0x18e:  mov    -0x14(%ebp),%eax
0842c4f3 +0x191:  mov    %eax,(%esp)
0842c4f6 +0x194:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0842c4fb +0x199:  mov    -0x18(%ebp),%eax
0842c4fe +0x19c:  lea    0x5e(%eax),%edx
0842c501 +0x19f:  movl   $0x29,0x8(%esp)
0842c509 +0x1a7:  lea    -0x51(%ebp),%eax
0842c50c +0x1aa:  mov    %eax,0x4(%esp)
0842c510 +0x1ae:  mov    %edx,(%esp)
0842c513 +0x1b1:  call   0807e8c0 <_init+0x11b8>
0842c518 +0x1b6:  test   %eax,%eax
0842c51a +0x1b8:  je     0842c548 <+0x1e6>
0842c51c +0x1ba:  movl   $0x4,(%esp)
0842c523 +0x1c1:  call   08725800 <__cxa_allocate_exception>
0842c528 +0x1c6:  mov    %eax,%edx
0842c52a +0x1c8:  movl   $0x7d,(%edx)
0842c530 +0x1ce:  movl   $0x0,0x8(%esp)
0842c538 +0x1d6:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842c540 +0x1de:  mov    %eax,(%esp)
0842c543 +0x1e1:  call   08724c50 <__cxa_throw>
0842c548 +0x1e6:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0842c54f +0x1ed:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0842c554 +0x1f2:  mov    %eax,-0x24(%ebp)
0842c557 +0x1f5:  mov    -0x20(%ebp),%eax
0842c55a +0x1f8:  mov    %eax,-0x28(%ebp)
0842c55d +0x1fb:  lea    -0x80(%ebp),%eax
0842c560 +0x1fe:  mov    %eax,0x4(%esp)
0842c564 +0x202:  lea    -0x28(%ebp),%eax
0842c567 +0x205:  mov    %eax,(%esp)
0842c56a +0x208:  call   0807e360 <_init+0xc58>
0842c56f +0x20d:  lea    -0xac(%ebp),%eax
0842c575 +0x213:  mov    %eax,0x4(%esp)
0842c579 +0x217:  lea    -0x24(%ebp),%eax
0842c57c +0x21a:  mov    %eax,(%esp)
0842c57f +0x21d:  call   0807e360 <_init+0xc58>
0842c584 +0x222:  mov    -0x64(%ebp),%edx
0842c587 +0x225:  mov    -0x90(%ebp),%eax
0842c58d +0x22b:  cmp    %eax,%edx
0842c58f +0x22d:  jne    0842c5ce <+0x26c>
0842c591 +0x22f:  mov    -0x1c(%ebp),%eax
0842c594 +0x232:  add    $0x1,%eax
0842c597 +0x235:  mov    %eax,-0x1c(%ebp)
0842c59a +0x238:  mov    -0x1c(%ebp),%eax
0842c59d +0x23b:  cmp    $0x3,%eax
0842c5a0 +0x23e:  jbe    0842c5d5 <+0x273>
0842c5a2 +0x240:  movl   $0x4,(%esp)
0842c5a9 +0x247:  call   08725800 <__cxa_allocate_exception>
0842c5ae +0x24c:  mov    %eax,%edx
0842c5b0 +0x24e:  movl   $0x78,(%edx)
0842c5b6 +0x254:  movl   $0x0,0x8(%esp)
0842c5be +0x25c:  movl   $&_ZTI10ENUM_ERROR,0x4(%esp)
0842c5c6 +0x264:  mov    %eax,(%esp)
0842c5c9 +0x267:  call   08724c50 <__cxa_throw>
0842c5ce +0x26c:  movl   $0x0,-0x1c(%ebp)
0842c5d5 +0x273:  mov    -0x18(%ebp),%eax
0842c5d8 +0x276:  mov    (%eax),%eax
0842c5da +0x278:  movl   $0x0,0x4(%esp)
0842c5e2 +0x280:  mov    %eax,(%esp)
0842c5e5 +0x283:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842c5ea +0x288:  mov    -0x1c(%ebp),%edx
0842c5ed +0x28b:  mov    -0x18(%ebp),%ecx
0842c5f0 +0x28e:  lea    0x2b(%ecx),%esi
0842c5f3 +0x291:  mov    -0x18(%ebp),%ecx
0842c5f6 +0x294:  lea    0x4(%ecx),%ebx
0842c5f9 +0x297:  mov    -0x18(%ebp),%ecx
0842c5fc +0x29a:  add    $0x25,%ecx
0842c5ff +0x29d:  mov    %eax,0x18(%esp)
0842c603 +0x2a1:  mov    %edx,0x14(%esp)
0842c607 +0x2a5:  mov    %esi,0x10(%esp)
0842c60b +0x2a9:  mov    %ebx,0xc(%esp)
0842c60f +0x2ad:  mov    %ecx,0x8(%esp)
0842c613 +0x2b1:  movl   $"upDate member_security_card set cert_key='%s',server_key='%s',card='%s',fail_cnt=0,cancel_cnt=0,re_issue_cnt=%d,last_issue_time=now(),validity_time=0,apply_flag=1,cert_flag=0,cert_cnt=0 where m_id=%s",0x4(%esp)
0842c61b +0x2b9:  mov    -0x14(%ebp),%eax
0842c61e +0x2bc:  mov    %eax,(%esp)
0842c621 +0x2bf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842c626 +0x2c4:  movl   $0x1,0x4(%esp)
0842c62e +0x2cc:  mov    -0x14(%ebp),%eax
0842c631 +0x2cf:  mov    %eax,(%esp)
0842c634 +0x2d2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842c639 +0x2d7:  mov    -0x18(%ebp),%eax
0842c63c +0x2da:  lea    0x2b(%eax),%ecx
0842c63f +0x2dd:  mov    -0x18(%ebp),%eax
0842c642 +0x2e0:  lea    0x4(%eax),%edx
0842c645 +0x2e3:  mov    -0x18(%ebp),%eax
0842c648 +0x2e6:  add    $0x52,%eax
0842c64b +0x2e9:  movl   $0x0,0x14(%esp)
0842c653 +0x2f1:  mov    %ecx,0x10(%esp)
0842c657 +0x2f5:  mov    %edx,0xc(%esp)
0842c65b +0x2f9:  mov    %eax,0x8(%esp)
0842c65f +0x2fd:  mov    0x10(%ebp),%eax
0842c662 +0x300:  mov    %eax,0x4(%esp)
0842c666 +0x304:  mov    0x8(%ebp),%eax
0842c669 +0x307:  mov    %eax,(%esp)
0842c66c +0x30a:  call   0842c7be <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR>  ; DB_SecurityCardRetransfer::_sendResult(int, char*, char const*, char const*, ENUM_ERROR)
0842c671 +0x30f:  jmp    0842c6da <+0x378>
0842c673 +0x311:  cmp    $0x1,%edx
0842c676 +0x314:  je     0842c680 <+0x31e>
0842c678 +0x316:  mov    %eax,(%esp)
0842c67b +0x319:  call   08ae3750 <_Unwind_Resume>
0842c680 +0x31e:  mov    %eax,(%esp)
0842c683 +0x321:  call   08725ce0 <__cxa_begin_catch>
0842c688 +0x326:  mov    (%eax),%eax
0842c68a +0x328:  mov    %eax,-0xc(%ebp)
0842c68d +0x32b:  mov    -0xc(%ebp),%eax
0842c690 +0x32e:  mov    %eax,0x14(%esp)
0842c694 +0x332:  movl   $0x0,0x10(%esp)
0842c69c +0x33a:  movl   $0x0,0xc(%esp)
0842c6a4 +0x342:  movl   $0x0,0x8(%esp)
0842c6ac +0x34a:  mov    0x10(%ebp),%eax
0842c6af +0x34d:  mov    %eax,0x4(%esp)
0842c6b3 +0x351:  mov    0x8(%ebp),%eax
0842c6b6 +0x354:  mov    %eax,(%esp)
0842c6b9 +0x357:  call   0842c7be <_ZN25DB_SecurityCardRetransfer11_sendResultEiPcPKcS2_10ENUM_ERROR>  ; DB_SecurityCardRetransfer::_sendResult(int, char*, char const*, char const*, ENUM_ERROR)
0842c6be +0x35c:  jmp    0842c6d5 <+0x373>
0842c6c0 +0x35e:  mov    %edx,%ebx
0842c6c2 +0x360:  mov    %eax,%esi
0842c6c4 +0x362:  call   08725c30 <__cxa_end_catch>
0842c6c9 +0x367:  mov    %esi,%eax
0842c6cb +0x369:  mov    %ebx,%edx
0842c6cd +0x36b:  mov    %eax,(%esp)
0842c6d0 +0x36e:  call   08ae3750 <_Unwind_Resume>
0842c6d5 +0x373:  call   08725c30 <__cxa_end_catch>
0842c6da +0x378:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842c6df +0x37d:  movl   $0x0,0x8(%esp)
0842c6e7 +0x385:  movl   $0x1,0x4(%esp)
0842c6ef +0x38d:  mov    %eax,(%esp)
0842c6f2 +0x390:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842c6f7 +0x395:  mov    %eax,-0x10(%ebp)
0842c6fa +0x398:  mov    -0x18(%ebp),%eax
0842c6fd +0x39b:  mov    (%eax),%eax
0842c6ff +0x39d:  movl   $0x0,0x4(%esp)
0842c707 +0x3a5:  mov    %eax,(%esp)
0842c70a +0x3a8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842c70f +0x3ad:  mov    %eax,0x8(%esp)
0842c713 +0x3b1:  movl   $"upDate member_security_grade set security_card_reg=now() where m_id=%s",0x4(%esp)
0842c71b +0x3b9:  mov    -0x10(%ebp),%eax
0842c71e +0x3bc:  mov    %eax,(%esp)
0842c721 +0x3bf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842c726 +0x3c4:  movl   $0x1,0x4(%esp)
0842c72e +0x3cc:  mov    -0x10(%ebp),%eax
0842c731 +0x3cf:  mov    %eax,(%esp)
0842c734 +0x3d2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842c739 +0x3d7:  xor    $0x1,%eax
0842c73c +0x3da:  test   %al,%al
0842c73e +0x3dc:  jne    0842c751 <+0x3ef>
0842c740 +0x3de:  mov    -0x10(%ebp),%eax
0842c743 +0x3e1:  mov    %eax,(%esp)
0842c746 +0x3e4:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842c74b +0x3e9:  or     %edx,%eax
0842c74d +0x3eb:  test   %eax,%eax
0842c74f +0x3ed:  jne    0842c758 <+0x3f6>
0842c751 +0x3ef:  mov    $0x1,%eax
0842c756 +0x3f4:  jmp    0842c75d <+0x3fb>
0842c758 +0x3f6:  mov    $0x0,%eax
0842c75d +0x3fb:  test   %al,%al
0842c75f +0x3fd:  je     0842c7ae <+0x44c>
0842c761 +0x3ff:  mov    -0x18(%ebp),%eax
0842c764 +0x402:  mov    (%eax),%eax
0842c766 +0x404:  movl   $0x0,0x4(%esp)
0842c76e +0x40c:  mov    %eax,(%esp)
0842c771 +0x40f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842c776 +0x414:  mov    %eax,0x8(%esp)
0842c77a +0x418:  movl   $"inSert into member_security_grade(m_id, security_card_reg) values(%s, now())",0x4(%esp)
0842c782 +0x420:  mov    -0x10(%ebp),%eax
0842c785 +0x423:  mov    %eax,(%esp)
0842c788 +0x426:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842c78d +0x42b:  movl   $0x1,0x4(%esp)
0842c795 +0x433:  mov    -0x10(%ebp),%eax
0842c798 +0x436:  mov    %eax,(%esp)
0842c79b +0x439:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842c7a0 +0x43e:  xor    $0x1,%eax
0842c7a3 +0x441:  test   %al,%al
0842c7a5 +0x443:  je     0842c7ae <+0x44c>
0842c7a7 +0x445:  mov    $0x0,%eax
0842c7ac +0x44a:  jmp    0842c7b3 <+0x451>
0842c7ae +0x44c:  mov    $0x1,%eax
0842c7b3 +0x451:  add    $0xd0,%esp
0842c7b9 +0x457:  pop    %ebx
0842c7ba +0x458:  pop    %esi
0842c7bb +0x459:  pop    %ebp
0842c7bc +0x45a:  ret
0842c7bd +0x45b:  nop
```

## 反编译 C

```c
// DB_SecurityCardRetransfer::dispatch @ 0x842c362

/* DB_SecurityCardRetransfer::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SecurityCardRetransfer::dispatch
          (DB_SecurityCardRetransfer *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  longlong lVar6;
  Stream *pSVar7;
  tm local_b0;
  tm local_84;
  char local_55 [41];
  uint local_2c;
  time_t local_28;
  uint local_24;
  uint local_20;
  SIG_SECURITY_CARD_RETRANSFER *local_1c;
  MySQL *local_18;
  MySQL *local_14;
  
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = Stream::GetOutBuffer<SIG_SECURITY_CARD_RETRANSFER>(param_3);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0,pSVar7);
                    /* try { // try from 0842c3dc to 0842c670 has its CatchHandler @ 0842c673 */
  uVar3 = NumberToString(*(uint *)local_1c,0);
  MySQL::set_query(local_18,
                   "seLect re_issue_cnt,unix_timestamp(last_issue_time), phone from member_security_card where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  local_20 = 0;
  local_24 = 0;
  cVar2 = MySQL::fetch(local_18);
  if (cVar2 != '\x01') {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = 1;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
  }
  MySQL::get_uint(local_18,0,&local_20);
  MySQL::get_uint(local_18,1,&local_24);
  memset(local_55,0,0x29);
  MySQL::get_str(local_18,2,local_55,0x29);
  iVar5 = strncmp((char *)(local_1c + 0x5e),local_55,0x29);
  if (iVar5 == 0) {
    local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_2c = local_24;
    localtime_r((time_t *)&local_2c,&local_84);
    localtime_r(&local_28,&local_b0);
    if (local_84.tm_yday == local_b0.tm_yday) {
      local_20 = local_20 + 1;
      if (3 < local_20) {
        puVar4 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar4 = 0x78;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
      }
    }
    else {
      local_20 = 0;
    }
    uVar3 = NumberToString(*(uint *)local_1c,0);
    MySQL::set_query(local_18,
                     "upDate member_security_card set cert_key=\'%s\',server_key=\'%s\',card=\'%s\',fail_cnt=0,cancel_cnt=0,re_issue_cnt=%d,last_issue_time=now(),validity_time=0,apply_flag=1,cert_flag=0,cert_cnt=0 where m_id=%s"
                     ,local_1c + 0x25,local_1c + 4,local_1c + 0x2b,local_20,uVar3);
    MySQL::exec(local_18,true);
    _sendResult(this,param_2,local_1c + 0x52,local_1c + 4,local_1c + 0x2b,0);
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = NumberToString(*(uint *)local_1c,0);
    MySQL::set_query(local_14,
                     "upDate member_security_grade set security_card_reg=now() where m_id=%s",uVar3)
    ;
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = NumberToString(*(uint *)local_1c,0);
      MySQL::set_query(local_14,
                       "inSert into member_security_grade(m_id, security_card_reg) values(%s, now())"
                       ,uVar3);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    return 1;
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar4 = 0x7d;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(puVar4,&ENUM_ERROR::typeinfo,0);
}
```
