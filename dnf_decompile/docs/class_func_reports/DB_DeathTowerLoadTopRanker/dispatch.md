# dispatch

`_ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream`

`DB_DeathTowerLoadTopRanker::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DeathTowerLoadTopRanker` | `0x0842a484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842a484  _ZN26DB_DeathTowerLoadTopRanker8dispatchEiiP6Stream
#           DB_DeathTowerLoadTopRanker::dispatch(int, int, Stream*)
# range [0x0842a484, 0x0842a90f]
0842a484 +0x000:  push   %ebp
0842a485 +0x001:  mov    %esp,%ebp
0842a487 +0x003:  push   %esi
0842a488 +0x004:  push   %ebx
0842a489 +0x005:  sub    $0x70,%esp
0842a48c +0x008:  movb   $0x1,-0x2d(%ebp)
0842a490 +0x00c:  lea    -0x2d(%ebp),%eax
0842a493 +0x00f:  mov    %eax,0x4(%esp)
0842a497 +0x013:  mov    0x14(%ebp),%eax
0842a49a +0x016:  mov    %eax,(%esp)
0842a49d +0x019:  call   0861c732 <_ZN6StreamrsERh>  ; Stream::operator>>(unsigned char&)
0842a4a2 +0x01e:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842a4a7 +0x023:  movl   $0x0,0x8(%esp)
0842a4af +0x02b:  movl   $0x2,0x4(%esp)
0842a4b7 +0x033:  mov    %eax,(%esp)
0842a4ba +0x036:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842a4bf +0x03b:  mov    %eax,-0x24(%ebp)
0842a4c2 +0x03e:  mov    &_ZN10GlobalData17s_big_stream_poolE,%eax
0842a4c7 +0x043:  movl   $0x6c21,0x8(%esp)
0842a4cf +0x04b:  movl   $"DBThread.cpp",0x4(%esp)
0842a4d7 +0x053:  mov    %eax,(%esp)
0842a4da +0x056:  call   08290262 <_ZN13BigStreamPool7AcquireEPKci>  ; BigStreamPool::Acquire(char const*, int)
0842a4df +0x05b:  movl   $0x1,0x8(%esp)
0842a4e7 +0x063:  mov    %eax,0x4(%esp)
0842a4eb +0x067:  lea    -0x38(%ebp),%eax
0842a4ee +0x06a:  mov    %eax,(%esp)
0842a4f1 +0x06d:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842a4f6 +0x072:  lea    -0x38(%ebp),%eax
0842a4f9 +0x075:  mov    %eax,(%esp)
0842a4fc +0x078:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a501 +0x07d:  movl   $0xe4,0x4(%esp)
0842a509 +0x085:  mov    %eax,(%esp)
0842a50c +0x088:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a511 +0x08d:  lea    -0x38(%ebp),%eax
0842a514 +0x090:  mov    %eax,(%esp)
0842a517 +0x093:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842a51c +0x098:  movl   $0xffffffff,0x4(%esp)
0842a524 +0x0a0:  mov    %eax,(%esp)
0842a527 +0x0a3:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842a52c +0x0a8:  lea    -0x38(%ebp),%eax
0842a52f +0x0ab:  mov    %eax,(%esp)
0842a532 +0x0ae:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842a537 +0x0b3:  mov    %eax,(%esp)
0842a53a +0x0b6:  call   0845248c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x50a2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x50a2
0842a53f +0x0bb:  mov    %eax,-0x20(%ebp)
0842a542 +0x0be:  mov    -0x20(%ebp),%eax
0842a545 +0x0c1:  movl   $0x0,(%eax)
0842a54b +0x0c7:  movzbl -0x2d(%ebp),%edx
0842a54f +0x0cb:  mov    -0x20(%ebp),%eax
0842a552 +0x0ce:  mov    %dl,0x4(%eax)
0842a555 +0x0d1:  movl   $0x0,-0x1c(%ebp)
0842a55c +0x0d8:  jmp    0842a8ad <+0x429>
0842a561 +0x0dd:  movl   $0x1,-0x18(%ebp)
0842a568 +0x0e4:  jmp    0842a89a <+0x416>
0842a56d +0x0e9:  movzbl -0x2d(%ebp),%eax
0842a571 +0x0ed:  test   %al,%al
0842a573 +0x0ef:  jne    0842a69b <+0x217>
0842a579 +0x0f5:  movl   $0x1,-0x10(%ebp)
0842a580 +0x0fc:  movl   $0x0,-0x3c(%ebp)
0842a587 +0x103:  mov    -0x18(%ebp),%eax
0842a58a +0x106:  mov    %eax,0xc(%esp)
0842a58e +0x10a:  mov    -0x1c(%ebp),%eax
0842a591 +0x10d:  mov    %eax,0x8(%esp)
0842a595 +0x111:  movl   $"seLect count(*) from charac_tower_rank where tower_index=%d and part_type=%d",0x4(%esp)
0842a59d +0x119:  mov    -0x24(%ebp),%eax
0842a5a0 +0x11c:  mov    %eax,(%esp)
0842a5a3 +0x11f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842a5a8 +0x124:  movl   $0x1,0x4(%esp)
0842a5b0 +0x12c:  mov    -0x24(%ebp),%eax
0842a5b3 +0x12f:  mov    %eax,(%esp)
0842a5b6 +0x132:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842a5bb +0x137:  xor    $0x1,%eax
0842a5be +0x13a:  test   %al,%al
0842a5c0 +0x13c:  je     0842a5cc <+0x148>
0842a5c2 +0x13e:  mov    $0x0,%ebx
0842a5c7 +0x143:  jmp    0842a8fc <+0x478>
0842a5cc +0x148:  mov    -0x24(%ebp),%eax
0842a5cf +0x14b:  mov    %eax,(%esp)
0842a5d2 +0x14e:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842a5d7 +0x153:  xor    $0x1,%eax
0842a5da +0x156:  test   %al,%al
0842a5dc +0x158:  je     0842a5e8 <+0x164>
0842a5de +0x15a:  mov    $0x0,%ebx
0842a5e3 +0x15f:  jmp    0842a8fc <+0x478>
0842a5e8 +0x164:  lea    -0x3c(%ebp),%eax
0842a5eb +0x167:  mov    %eax,0x8(%esp)
0842a5ef +0x16b:  movl   $0x0,0x4(%esp)
0842a5f7 +0x173:  mov    -0x24(%ebp),%eax
0842a5fa +0x176:  mov    %eax,(%esp)
0842a5fd +0x179:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842a602 +0x17e:  xor    $0x1,%eax
0842a605 +0x181:  test   %al,%al
0842a607 +0x183:  je     0842a613 <+0x18f>
0842a609 +0x185:  mov    $0x0,%ebx
0842a60e +0x18a:  jmp    0842a8fc <+0x478>
0842a613 +0x18f:  mov    -0x3c(%ebp),%eax
0842a616 +0x192:  cmp    $0x5,%eax
0842a619 +0x195:  jbe    0842a654 <+0x1d0>
0842a61b +0x197:  mov    -0x3c(%ebp),%ecx
0842a61e +0x19a:  mov    $0x58ed2309,%edx
0842a623 +0x19f:  mov    %ecx,%eax
0842a625 +0x1a1:  mul    %edx
0842a627 +0x1a3:  mov    %ecx,%eax
0842a629 +0x1a5:  sub    %edx,%eax
0842a62b +0x1a7:  shr    %eax
0842a62d +0x1a9:  lea    (%edx,%eax,1),%eax
0842a630 +0x1ac:  shr    $0x6,%eax
0842a633 +0x1af:  mov    %eax,-0x2c(%ebp)
0842a636 +0x1b2:  movl   $0x1,-0x28(%ebp)
0842a63d +0x1b9:  lea    -0x2c(%ebp),%eax
0842a640 +0x1bc:  mov    %eax,0x4(%esp)
0842a644 +0x1c0:  lea    -0x28(%ebp),%eax
0842a647 +0x1c3:  mov    %eax,(%esp)
0842a64a +0x1c6:  call   0807f531 <_GLOBAL__I__Z13base64_encodePKhjRSs+0x601>  ; global constructors keyed to base64_encode(unsigned char const*, unsigned int, std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x601
0842a64f +0x1cb:  mov    (%eax),%eax
0842a651 +0x1cd:  mov    %eax,-0x10(%ebp)
0842a654 +0x1d0:  movl   $0x5f,0x20(%esp)
0842a65c +0x1d8:  mov    -0x18(%ebp),%eax
0842a65f +0x1db:  mov    %eax,0x1c(%esp)
0842a663 +0x1df:  mov    -0x10(%ebp),%eax
0842a666 +0x1e2:  mov    %eax,0x18(%esp)
0842a66a +0x1e6:  mov    -0x1c(%ebp),%eax
0842a66d +0x1e9:  mov    %eax,0x14(%esp)
0842a671 +0x1ed:  mov    -0x18(%ebp),%eax
0842a674 +0x1f0:  mov    %eax,0x10(%esp)
0842a678 +0x1f4:  mov    -0x18(%ebp),%eax
0842a67b +0x1f7:  mov    %eax,0xc(%esp)
0842a67f +0x1fb:  mov    -0x18(%ebp),%eax
0842a682 +0x1fe:  mov    %eax,0x8(%esp)
0842a686 +0x202:  movl   $"seLect b.rank,a.tower_index, a.member_info_%d,a.stage_%d,a.play_time_%d from charac_tower_record a,charac_tower_rank b where b.tower_index=%d and b.tower_index=a.tower_index and (b.rank>5 and (b.rank%%%d)=0) and a.charac_no=b.charac_no and b.part_type=%d order by b.rank asc limit %d",0x4(%esp)
0842a68e +0x20a:  mov    -0x24(%ebp),%eax
0842a691 +0x20d:  mov    %eax,(%esp)
0842a694 +0x210:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842a699 +0x215:  jmp    0842a6d9 <+0x255>
0842a69b +0x217:  movl   $0x5,0x1c(%esp)
0842a6a3 +0x21f:  mov    -0x18(%ebp),%eax
0842a6a6 +0x222:  mov    %eax,0x18(%esp)
0842a6aa +0x226:  mov    -0x1c(%ebp),%eax
0842a6ad +0x229:  mov    %eax,0x14(%esp)
0842a6b1 +0x22d:  mov    -0x18(%ebp),%eax
0842a6b4 +0x230:  mov    %eax,0x10(%esp)
0842a6b8 +0x234:  mov    -0x18(%ebp),%eax
0842a6bb +0x237:  mov    %eax,0xc(%esp)
0842a6bf +0x23b:  mov    -0x18(%ebp),%eax
0842a6c2 +0x23e:  mov    %eax,0x8(%esp)
0842a6c6 +0x242:  movl   $"seLect b.rank,a.tower_index, a.member_info_%d,a.stage_%d,a.play_time_%d from charac_tower_record a,charac_tower_rank_top5 b where b.tower_index=%d and b.tower_index=a.tower_index and b.rank<=5 and a.charac_no=b.charac_no and b.part_type=%d order by b.rank asc limit %d",0x4(%esp)
0842a6ce +0x24a:  mov    -0x24(%ebp),%eax
0842a6d1 +0x24d:  mov    %eax,(%esp)
0842a6d4 +0x250:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842a6d9 +0x255:  movl   $0x1,0x4(%esp)
0842a6e1 +0x25d:  mov    -0x24(%ebp),%eax
0842a6e4 +0x260:  mov    %eax,(%esp)
0842a6e7 +0x263:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842a6ec +0x268:  xor    $0x1,%eax
0842a6ef +0x26b:  test   %al,%al
0842a6f1 +0x26d:  je     0842a6fd <+0x279>
0842a6f3 +0x26f:  mov    $0x0,%ebx
0842a6f8 +0x274:  jmp    0842a8fc <+0x478>
0842a6fd +0x279:  mov    -0x20(%ebp),%eax
0842a700 +0x27c:  mov    (%eax),%eax
0842a702 +0x27e:  mov    %eax,-0x14(%ebp)
0842a705 +0x281:  mov    -0x20(%ebp),%eax
0842a708 +0x284:  mov    (%eax),%ebx
0842a70a +0x286:  mov    -0x24(%ebp),%eax
0842a70d +0x289:  mov    %eax,(%esp)
0842a710 +0x28c:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0842a715 +0x291:  lea    (%ebx,%eax,1),%edx
0842a718 +0x294:  mov    -0x20(%ebp),%eax
0842a71b +0x297:  mov    %edx,(%eax)
0842a71d +0x299:  mov    -0x14(%ebp),%eax
0842a720 +0x29c:  mov    %eax,-0xc(%ebp)
0842a723 +0x29f:  jmp    0842a883 <+0x3ff>
0842a728 +0x2a4:  mov    -0x24(%ebp),%eax
0842a72b +0x2a7:  mov    %eax,(%esp)
0842a72e +0x2aa:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0842a733 +0x2af:  xor    $0x1,%eax
0842a736 +0x2b2:  test   %al,%al
0842a738 +0x2b4:  je     0842a744 <+0x2c0>
0842a73a +0x2b6:  mov    $0x0,%ebx
0842a73f +0x2bb:  jmp    0842a8fc <+0x478>
0842a744 +0x2c0:  mov    -0xc(%ebp),%eax
0842a747 +0x2c3:  add    %eax,%eax
0842a749 +0x2c5:  add    -0x20(%ebp),%eax
0842a74c +0x2c8:  add    $0x6,%eax
0842a74f +0x2cb:  mov    %eax,0x8(%esp)
0842a753 +0x2cf:  movl   $0x0,0x4(%esp)
0842a75b +0x2d7:  mov    -0x24(%ebp),%eax
0842a75e +0x2da:  mov    %eax,(%esp)
0842a761 +0x2dd:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0842a766 +0x2e2:  xor    $0x1,%eax
0842a769 +0x2e5:  test   %al,%al
0842a76b +0x2e7:  je     0842a777 <+0x2f3>
0842a76d +0x2e9:  mov    $0x0,%ebx
0842a772 +0x2ee:  jmp    0842a8fc <+0x478>
0842a777 +0x2f3:  mov    -0xc(%ebp),%eax
0842a77a +0x2f6:  imul   $0x6c,%eax,%eax
0842a77d +0x2f9:  add    $0xfa0,%eax
0842a782 +0x2fe:  add    -0x20(%ebp),%eax
0842a785 +0x301:  add    $0xc,%eax
0842a788 +0x304:  mov    %eax,0x8(%esp)
0842a78c +0x308:  movl   $0x1,0x4(%esp)
0842a794 +0x310:  mov    -0x24(%ebp),%eax
0842a797 +0x313:  mov    %eax,(%esp)
0842a79a +0x316:  call   08116990 <_GLOBAL__I__ZN13CEventManagerC2Ev+0xa5>  ; global constructors keyed to CEventManager::CEventManager()+0xa5
0842a79f +0x31b:  xor    $0x1,%eax
0842a7a2 +0x31e:  test   %al,%al
0842a7a4 +0x320:  je     0842a7b0 <+0x32c>
0842a7a6 +0x322:  mov    $0x0,%ebx
0842a7ab +0x327:  jmp    0842a8fc <+0x478>
0842a7b0 +0x32c:  mov    -0x18(%ebp),%eax
0842a7b3 +0x32f:  imul   $0x17,%eax,%eax
0842a7b6 +0x332:  mov    -0xc(%ebp),%edx
0842a7b9 +0x335:  imul   $0x6c,%edx,%edx
0842a7bc +0x338:  add    $0xfa0,%edx
0842a7c2 +0x33e:  add    -0x20(%ebp),%edx
0842a7c5 +0x341:  add    $0x10,%edx
0842a7c8 +0x344:  mov    %eax,0xc(%esp)
0842a7cc +0x348:  mov    %edx,0x8(%esp)
0842a7d0 +0x34c:  movl   $0x2,0x4(%esp)
0842a7d8 +0x354:  mov    -0x24(%ebp),%eax
0842a7db +0x357:  mov    %eax,(%esp)
0842a7de +0x35a:  call   0812531a <_GLOBAL__I__ZN8APSystem21g_szZipAP_CLEAR_STATEE+0x7d>  ; global constructors keyed to APSystem::g_szZipAP_CLEAR_STATE+0x7d
0842a7e3 +0x35f:  xor    $0x1,%eax
0842a7e6 +0x362:  test   %al,%al
0842a7e8 +0x364:  je     0842a7f4 <+0x370>
0842a7ea +0x366:  mov    $0x0,%ebx
0842a7ef +0x36b:  jmp    0842a8fc <+0x478>
0842a7f4 +0x370:  mov    -0xc(%ebp),%eax
0842a7f7 +0x373:  imul   $0x6c,%eax,%eax
0842a7fa +0x376:  add    $0x1000,%eax
0842a7ff +0x37b:  add    -0x20(%ebp),%eax
0842a802 +0x37e:  add    $0xc,%eax
0842a805 +0x381:  mov    %eax,0x8(%esp)
0842a809 +0x385:  movl   $0x3,0x4(%esp)
0842a811 +0x38d:  mov    -0x24(%ebp),%eax
0842a814 +0x390:  mov    %eax,(%esp)
0842a817 +0x393:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842a81c +0x398:  xor    $0x1,%eax
0842a81f +0x39b:  test   %al,%al
0842a821 +0x39d:  je     0842a82d <+0x3a9>
0842a823 +0x39f:  mov    $0x0,%ebx
0842a828 +0x3a4:  jmp    0842a8fc <+0x478>
0842a82d +0x3a9:  mov    -0xc(%ebp),%eax
0842a830 +0x3ac:  imul   $0x6c,%eax,%eax
0842a833 +0x3af:  add    $0x1000,%eax
0842a838 +0x3b4:  add    -0x20(%ebp),%eax
0842a83b +0x3b7:  add    $0x10,%eax
0842a83e +0x3ba:  mov    %eax,0x8(%esp)
0842a842 +0x3be:  movl   $0x4,0x4(%esp)
0842a84a +0x3c6:  mov    -0x24(%ebp),%eax
0842a84d +0x3c9:  mov    %eax,(%esp)
0842a850 +0x3cc:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0842a855 +0x3d1:  xor    $0x1,%eax
0842a858 +0x3d4:  test   %al,%al
0842a85a +0x3d6:  je     0842a866 <+0x3e2>
0842a85c +0x3d8:  mov    $0x0,%ebx
0842a861 +0x3dd:  jmp    0842a8fc <+0x478>
0842a866 +0x3e2:  mov    -0xc(%ebp),%edx
0842a869 +0x3e5:  mov    -0x18(%ebp),%eax
0842a86c +0x3e8:  mov    -0x20(%ebp),%ecx
0842a86f +0x3eb:  imul   $0x6c,%edx,%edx
0842a872 +0x3ee:  lea    (%ecx,%edx,1),%edx
0842a875 +0x3f1:  add    $0xfa0,%edx
0842a87b +0x3f7:  mov    %ax,0xe(%edx)
0842a87f +0x3fb:  addl   $0x1,-0xc(%ebp)
0842a883 +0x3ff:  mov    -0x20(%ebp),%eax
0842a886 +0x402:  mov    (%eax),%eax
0842a888 +0x404:  cmp    -0xc(%ebp),%eax
0842a88b +0x407:  seta   %al
0842a88e +0x40a:  test   %al,%al
0842a890 +0x40c:  jne    0842a728 <+0x2a4>
0842a896 +0x412:  addl   $0x1,-0x18(%ebp)
0842a89a +0x416:  cmpl   $0x4,-0x18(%ebp)
0842a89e +0x41a:  setle  %al
0842a8a1 +0x41d:  test   %al,%al
0842a8a3 +0x41f:  jne    0842a56d <+0xe9>
0842a8a9 +0x425:  addl   $0x1,-0x1c(%ebp)
0842a8ad +0x429:  mov    -0x1c(%ebp),%eax
0842a8b0 +0x42c:  cmp    $0x4,%eax
0842a8b3 +0x42f:  setbe  %al
0842a8b6 +0x432:  test   %al,%al
0842a8b8 +0x434:  jne    0842a561 <+0xdd>
0842a8be +0x43a:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842a8c3 +0x43f:  lea    -0x38(%ebp),%edx
0842a8c6 +0x442:  mov    %edx,0x8(%esp)
0842a8ca +0x446:  movl   $0x1,0x4(%esp)
0842a8d2 +0x44e:  mov    %eax,(%esp)
0842a8d5 +0x451:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842a8da +0x456:  mov    $0x1,%ebx
0842a8df +0x45b:  jmp    0842a8fc <+0x478>
0842a8e1 +0x45d:  mov    %edx,%ebx
0842a8e3 +0x45f:  mov    %eax,%esi
0842a8e5 +0x461:  lea    -0x38(%ebp),%eax
0842a8e8 +0x464:  mov    %eax,(%esp)
0842a8eb +0x467:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a8f0 +0x46c:  mov    %esi,%eax
0842a8f2 +0x46e:  mov    %ebx,%edx
0842a8f4 +0x470:  mov    %eax,(%esp)
0842a8f7 +0x473:  call   08ae3750 <_Unwind_Resume>
0842a8fc +0x478:  lea    -0x38(%ebp),%eax
0842a8ff +0x47b:  mov    %eax,(%esp)
0842a902 +0x47e:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842a907 +0x483:  mov    %ebx,%eax
0842a909 +0x485:  add    $0x70,%esp
0842a90c +0x488:  pop    %ebx
0842a90d +0x489:  pop    %esi
0842a90e +0x48a:  pop    %ebp
0842a90f +0x48b:  ret
```

## 反编译 C

```c
// DB_DeathTowerLoadTopRanker::dispatch @ 0x842a484

/* DB_DeathTowerLoadTopRanker::dispatch(int, int, Stream*) */

undefined4 DB_DeathTowerLoadTopRanker::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  size_t *psVar5;
  int iVar6;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  uint local_40;
  CStreamGuard local_3c [11];
  SIG_DEATH_TOWER_LOAD_TOP_RANKER local_31;
  uint local_30;
  size_t local_2c;
  MySQL *local_28;
  SIG_DEATH_TOWER_LOAD_TOP_RANKER *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  size_t local_14;
  uint local_10;
  
  local_31 = (SIG_DEATH_TOWER_LOAD_TOP_RANKER)0x1;
  Stream::operator>>(in_stack_00000010,(uchar *)&local_31);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar3 = (Stream *)BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DBThread.cpp",0x6c21);
  CStreamGuard::CStreamGuard(local_3c,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
                    /* try { // try from 0842a50c to 0842a8d9 has its CatchHandler @ 0842a8e1 */
  CStreamGuard::operator<<(pCVar4,0xe4);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_3c);
  CStreamGuard::operator<<(pCVar4,-1);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_3c);
  local_24 = CStreamGuard::GetInBuffer<SIG_DEATH_TOWER_LOAD_TOP_RANKER>(pCVar4);
  *(undefined4 *)local_24 = 0;
  local_24[4] = local_31;
  local_20 = 0;
  do {
    if (4 < local_20) {
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_3c);
      uVar7 = 1;
LAB_0842a8fc:
      CStreamGuard::~CStreamGuard(local_3c);
      return uVar7;
    }
    for (local_1c = 1; local_1c < 5; local_1c = local_1c + 1) {
      if (local_31 == (SIG_DEATH_TOWER_LOAD_TOP_RANKER)0x0) {
        local_14 = 1;
        local_40 = 0;
        MySQL::set_query(local_28,
                         "seLect count(*) from charac_tower_rank where tower_index=%d and part_type=%d"
                         ,local_20,local_1c);
        cVar2 = MySQL::exec(local_28,true);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::fetch(local_28);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_uint(local_28,0,&local_40);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        if (5 < local_40) {
          local_30 = local_40 / 0x5f;
          local_2c = 1;
          psVar5 = std::max<size_t>(&local_2c,&local_30);
          local_14 = *psVar5;
        }
        MySQL::set_query(local_28,
                         "seLect b.rank,a.tower_index, a.member_info_%d,a.stage_%d,a.play_time_%d from charac_tower_record a,charac_tower_rank b where b.tower_index=%d and b.tower_index=a.tower_index and (b.rank>5 and (b.rank%%%d)=0) and a.charac_no=b.charac_no and b.part_type=%d order by b.rank asc limit %d"
                         ,local_1c,local_1c,local_1c,local_20,local_14,local_1c,0x5f);
      }
      else {
        MySQL::set_query(local_28,
                         "seLect b.rank,a.tower_index, a.member_info_%d,a.stage_%d,a.play_time_%d from charac_tower_record a,charac_tower_rank_top5 b where b.tower_index=%d and b.tower_index=a.tower_index and b.rank<=5 and a.charac_no=b.charac_no and b.part_type=%d order by b.rank asc limit %d"
                         ,local_1c,local_1c,local_1c,local_20,local_1c,5);
      }
      cVar2 = MySQL::exec(local_28,true);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0842a8fc;
      }
      local_18 = *(uint *)local_24;
      uVar1 = *(uint *)local_24;
      iVar6 = MySQL::get_n_rows(local_28);
      *(uint *)local_24 = uVar1 + iVar6;
      for (local_10 = local_18; local_10 < *(uint *)local_24; local_10 = local_10 + 1) {
        cVar2 = MySQL::fetch(local_28);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_ushort(local_28,0,(ushort *)(local_24 + local_10 * 2 + 6));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_ushort(local_28,1,(ushort *)(local_24 + local_10 * 0x6c + 0xfac));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_binary(local_28,2,local_24 + local_10 * 0x6c + 0xfb0,local_1c * 0x17);
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_uint(local_28,3,(uint *)(local_24 + local_10 * 0x6c + 0x100c));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        cVar2 = MySQL::get_uint(local_28,4,(uint *)(local_24 + local_10 * 0x6c + 0x1010));
        if (cVar2 != '\x01') {
          uVar7 = 0;
          goto LAB_0842a8fc;
        }
        *(short *)(local_24 + local_10 * 0x6c + 0xfae) = (short)local_1c;
      }
    }
    local_20 = local_20 + 1;
  } while( true );
}
```
