# GetMercenarySystemInfo

`_ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA`

`DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08415618` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08415618  _ZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATA
#           DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)
# range [0x08415618, 0x08415c2d]
08415618 +0x000:  push   %ebp
08415619 +0x001:  mov    %esp,%ebp
0841561b +0x003:  push   %esi
0841561c +0x004:  push   %ebx
0841561d +0x005:  sub    $0x60,%esp
08415620 +0x008:  cmpl   $0x0,0xc(%ebp)
08415624 +0x00c:  jne    08415630 <+0x18>
08415626 +0x00e:  mov    $0x0,%eax
0841562b +0x013:  jmp    08415c26 <+0x60e>
08415630 +0x018:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08415635 +0x01d:  movl   $0x0,0x8(%esp)
0841563d +0x025:  movl   $0x2,0x4(%esp)
08415645 +0x02d:  mov    %eax,(%esp)
08415648 +0x030:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841564d +0x035:  mov    %eax,-0x20(%ebp)
08415650 +0x038:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08415655 +0x03d:  movl   $0x0,0x8(%esp)
0841565d +0x045:  movl   $0x3,0x4(%esp)
08415665 +0x04d:  mov    %eax,(%esp)
08415668 +0x050:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841566d +0x055:  mov    %eax,-0x1c(%ebp)
08415670 +0x058:  movl   $0x0,-0x54(%ebp)
08415677 +0x05f:  movl   $0x0,-0x58(%ebp)
0841567e +0x066:  movl   $0x0,-0x18(%ebp)
08415685 +0x06d:  movl   $0x0,-0x14(%ebp)
0841568c +0x074:  jmp    08415bf9 <+0x5e1>
08415691 +0x079:  mov    -0x14(%ebp),%eax
08415694 +0x07c:  mov    0xc(%ebp),%edx
08415697 +0x07f:  imul   $0x94,%eax,%eax
0841569d +0x085:  lea    (%edx,%eax,1),%eax
084156a0 +0x088:  add    $0xf0,%eax
084156a5 +0x08d:  movzwl 0xa(%eax),%ebx
084156a9 +0x091:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084156ae +0x096:  movzwl 0xa8e0(%eax),%eax
084156b5 +0x09d:  cmp    %ax,%bx
084156b8 +0x0a0:  setl   %al
084156bb +0x0a3:  test   %al,%al
084156bd +0x0a5:  jne    08415bdf <+0x5c7>
084156c3 +0x0ab:  mov    -0x14(%ebp),%eax
084156c6 +0x0ae:  mov    0xc(%ebp),%edx
084156c9 +0x0b1:  imul   $0x94,%eax,%eax
084156cf +0x0b7:  lea    (%edx,%eax,1),%eax
084156d2 +0x0ba:  add    $0xe0,%eax
084156d7 +0x0bf:  mov    (%eax),%eax
084156d9 +0x0c1:  mov    %eax,0x8(%esp)
084156dd +0x0c5:  movl   $"seLect mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period from charac_link_bonus where charac_no=%u",0x4(%esp)
084156e5 +0x0cd:  mov    -0x20(%ebp),%eax
084156e8 +0x0d0:  mov    %eax,(%esp)
084156eb +0x0d3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084156f0 +0x0d8:  movl   $0x1,0x4(%esp)
084156f8 +0x0e0:  mov    -0x20(%ebp),%eax
084156fb +0x0e3:  mov    %eax,(%esp)
084156fe +0x0e6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08415703 +0x0eb:  xor    $0x1,%eax
08415706 +0x0ee:  test   %al,%al
08415708 +0x0f0:  je     08415714 <+0xfc>
0841570a +0x0f2:  mov    $0x0,%eax
0841570f +0x0f7:  jmp    08415c26 <+0x60e>
08415714 +0x0fc:  mov    -0x18(%ebp),%eax
08415717 +0x0ff:  imul   $0x54,%eax,%eax
0841571a +0x102:  add    $0x15b0,%eax
0841571f +0x107:  add    0xc(%ebp),%eax
08415722 +0x10a:  add    $0x4,%eax
08415725 +0x10d:  mov    %eax,(%esp)
08415728 +0x110:  call   081b410a <_ZN21CHARAC_LOAD_MERCENARY5ResetEv>  ; CHARAC_LOAD_MERCENARY::Reset()
0841572d +0x115:  mov    -0x14(%ebp),%eax
08415730 +0x118:  imul   $0x94,%eax,%eax
08415736 +0x11e:  add    $0xe0,%eax
0841573b +0x123:  add    0xc(%ebp),%eax
0841573e +0x126:  lea    0x4(%eax),%edx
08415741 +0x129:  mov    -0x18(%ebp),%eax
08415744 +0x12c:  imul   $0x54,%eax,%eax
08415747 +0x12f:  add    $0x15b0,%eax
0841574c +0x134:  add    0xc(%ebp),%eax
0841574f +0x137:  add    $0xa,%eax
08415752 +0x13a:  movl   $0x1e,0x8(%esp)
0841575a +0x142:  mov    %edx,0x4(%esp)
0841575e +0x146:  mov    %eax,(%esp)
08415761 +0x149:  call   0807d8d0 <_init+0x1c8>
08415766 +0x14e:  mov    -0x18(%ebp),%edx
08415769 +0x151:  mov    -0x14(%ebp),%eax
0841576c +0x154:  mov    0xc(%ebp),%ecx
0841576f +0x157:  imul   $0x94,%eax,%eax
08415775 +0x15d:  lea    (%ecx,%eax,1),%eax
08415778 +0x160:  add    $0xe0,%eax
0841577d +0x165:  mov    (%eax),%eax
0841577f +0x167:  mov    0xc(%ebp),%ecx
08415782 +0x16a:  imul   $0x54,%edx,%edx
08415785 +0x16d:  lea    (%ecx,%edx,1),%edx
08415788 +0x170:  add    $0x15b4,%edx
0841578e +0x176:  mov    %eax,(%edx)
08415790 +0x178:  mov    -0x18(%ebp),%edx
08415793 +0x17b:  mov    -0x14(%ebp),%eax
08415796 +0x17e:  mov    0xc(%ebp),%ecx
08415799 +0x181:  imul   $0x94,%eax,%eax
0841579f +0x187:  lea    (%ecx,%eax,1),%eax
084157a2 +0x18a:  add    $0xf0,%eax
084157a7 +0x18f:  movzwl 0xa(%eax),%eax
084157ab +0x193:  mov    0xc(%ebp),%ecx
084157ae +0x196:  imul   $0x54,%edx,%edx
084157b1 +0x199:  lea    (%ecx,%edx,1),%edx
084157b4 +0x19c:  add    $0x15b0,%edx
084157ba +0x1a2:  mov    %ax,0x8(%edx)
084157be +0x1a6:  mov    -0x14(%ebp),%eax
084157c1 +0x1a9:  mov    0xc(%ebp),%edx
084157c4 +0x1ac:  imul   $0x94,%eax,%eax
084157ca +0x1b2:  lea    (%edx,%eax,1),%eax
084157cd +0x1b5:  add    $0xe0,%eax
084157d2 +0x1ba:  mov    (%eax),%eax
084157d4 +0x1bc:  mov    %eax,0x8(%esp)
084157d8 +0x1c0:  movl   $"seLect slot,it_id from user_items where charac_no=%u and expire_date>now() and stat=0 order by slot limit 8",0x4(%esp)
084157e0 +0x1c8:  mov    -0x1c(%ebp),%eax
084157e3 +0x1cb:  mov    %eax,(%esp)
084157e6 +0x1ce:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084157eb +0x1d3:  movl   $0x1,0x4(%esp)
084157f3 +0x1db:  mov    -0x1c(%ebp),%eax
084157f6 +0x1de:  mov    %eax,(%esp)
084157f9 +0x1e1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084157fe +0x1e6:  xor    $0x1,%eax
08415801 +0x1e9:  test   %al,%al
08415803 +0x1eb:  jne    08415be2 <+0x5ca>
08415809 +0x1f1:  mov    -0x1c(%ebp),%eax
0841580c +0x1f4:  mov    %eax,(%esp)
0841580f +0x1f7:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08415814 +0x1fc:  mov    %eax,-0x10(%ebp)
08415817 +0x1ff:  cmpl   $0x8,-0x10(%ebp)
0841581b +0x203:  je     08415837 <+0x21f>
0841581d +0x205:  mov    -0x18(%ebp),%eax
08415820 +0x208:  mov    0xc(%ebp),%edx
08415823 +0x20b:  imul   $0x54,%eax,%eax
08415826 +0x20e:  lea    (%edx,%eax,1),%eax
08415829 +0x211:  add    $0x15e0,%eax
0841582e +0x216:  movb   $0x0,0x6(%eax)
08415832 +0x21a:  jmp    08415a0f <+0x3f7>
08415837 +0x21f:  movl   $0x0,-0xc(%ebp)
0841583e +0x226:  jmp    084159fe <+0x3e6>
08415843 +0x22b:  mov    -0x1c(%ebp),%eax
08415846 +0x22e:  mov    %eax,(%esp)
08415849 +0x231:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841584e +0x236:  xor    $0x1,%eax
08415851 +0x239:  test   %al,%al
08415853 +0x23b:  je     084158b2 <+0x29a>
08415855 +0x23d:  mov    -0x14(%ebp),%eax
08415858 +0x240:  mov    0xc(%ebp),%edx
0841585b +0x243:  imul   $0x94,%eax,%eax
08415861 +0x249:  lea    (%edx,%eax,1),%eax
08415864 +0x24c:  add    $0xe0,%eax
08415869 +0x251:  mov    (%eax),%ebx
0841586b +0x253:  movl   $0x5,0xc(%esp)
08415873 +0x25b:  movl   $0x3ea2,0x8(%esp)
0841587b +0x263:  movl   $&_ZZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08415883 +0x26b:  lea    -0x50(%ebp),%eax
08415886 +0x26e:  mov    %eax,(%esp)
08415889 +0x271:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841588e +0x276:  mov    %ebx,0xc(%esp)
08415892 +0x27a:  movl   $0x3ea2,0x8(%esp)
0841589a +0x282:  movl   $"DB_Login::GetMercenarySystemInfo %d ERROR Charac_no=%u",0x4(%esp)
084158a2 +0x28a:  lea    -0x50(%ebp),%eax
084158a5 +0x28d:  mov    %eax,(%esp)
084158a8 +0x290:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084158ad +0x295:  jmp    08415a0f <+0x3f7>
084158b2 +0x29a:  lea    -0x54(%ebp),%eax
084158b5 +0x29d:  mov    %eax,0x8(%esp)
084158b9 +0x2a1:  movl   $0x0,0x4(%esp)
084158c1 +0x2a9:  mov    -0x1c(%ebp),%eax
084158c4 +0x2ac:  mov    %eax,(%esp)
084158c7 +0x2af:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084158cc +0x2b4:  xor    $0x1,%eax
084158cf +0x2b7:  test   %al,%al
084158d1 +0x2b9:  je     08415935 <+0x31d>
084158d3 +0x2bb:  mov    -0x14(%ebp),%eax
084158d6 +0x2be:  mov    0xc(%ebp),%edx
084158d9 +0x2c1:  imul   $0x94,%eax,%eax
084158df +0x2c7:  lea    (%edx,%eax,1),%eax
084158e2 +0x2ca:  add    $0xe0,%eax
084158e7 +0x2cf:  mov    (%eax),%ebx
084158e9 +0x2d1:  movl   $0x5,0xc(%esp)
084158f1 +0x2d9:  movl   $0x3ea8,0x8(%esp)
084158f9 +0x2e1:  movl   $&_ZZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08415901 +0x2e9:  lea    -0x40(%ebp),%eax
08415904 +0x2ec:  mov    %eax,(%esp)
08415907 +0x2ef:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841590c +0x2f4:  mov    %ebx,0xc(%esp)
08415910 +0x2f8:  movl   $0x3ea8,0x8(%esp)
08415918 +0x300:  movl   $"DB_Login::GetMercenarySystemInfo %d ERROR Charac_no=%u",0x4(%esp)
08415920 +0x308:  lea    -0x40(%ebp),%eax
08415923 +0x30b:  mov    %eax,(%esp)
08415926 +0x30e:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0841592b +0x313:  mov    $0x0,%eax
08415930 +0x318:  jmp    08415c26 <+0x60e>
08415935 +0x31d:  lea    -0x58(%ebp),%eax
08415938 +0x320:  mov    %eax,0x8(%esp)
0841593c +0x324:  movl   $0x1,0x4(%esp)
08415944 +0x32c:  mov    -0x1c(%ebp),%eax
08415947 +0x32f:  mov    %eax,(%esp)
0841594a +0x332:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841594f +0x337:  xor    $0x1,%eax
08415952 +0x33a:  test   %al,%al
08415954 +0x33c:  je     084159b8 <+0x3a0>
08415956 +0x33e:  mov    -0x14(%ebp),%eax
08415959 +0x341:  mov    0xc(%ebp),%edx
0841595c +0x344:  imul   $0x94,%eax,%eax
08415962 +0x34a:  lea    (%edx,%eax,1),%eax
08415965 +0x34d:  add    $0xe0,%eax
0841596a +0x352:  mov    (%eax),%ebx
0841596c +0x354:  movl   $0x5,0xc(%esp)
08415974 +0x35c:  movl   $0x3eae,0x8(%esp)
0841597c +0x364:  movl   $&_ZZN8DB_Login22GetMercenarySystemInfoEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
08415984 +0x36c:  lea    -0x30(%ebp),%eax
08415987 +0x36f:  mov    %eax,(%esp)
0841598a +0x372:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0841598f +0x377:  mov    %ebx,0xc(%esp)
08415993 +0x37b:  movl   $0x3eae,0x8(%esp)
0841599b +0x383:  movl   $"DB_Login::GetMercenarySystemInfo %d ERROR charac_no=%u",0x4(%esp)
084159a3 +0x38b:  lea    -0x30(%ebp),%eax
084159a6 +0x38e:  mov    %eax,(%esp)
084159a9 +0x391:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084159ae +0x396:  mov    $0x0,%eax
084159b3 +0x39b:  jmp    08415c26 <+0x60e>
084159b8 +0x3a0:  mov    -0x54(%ebp),%eax
084159bb +0x3a3:  cmp    -0xc(%ebp),%eax
084159be +0x3a6:  je     084159d7 <+0x3bf>
084159c0 +0x3a8:  mov    -0x18(%ebp),%eax
084159c3 +0x3ab:  mov    0xc(%ebp),%edx
084159c6 +0x3ae:  imul   $0x54,%eax,%eax
084159c9 +0x3b1:  lea    (%edx,%eax,1),%eax
084159cc +0x3b4:  add    $0x15e0,%eax
084159d1 +0x3b9:  movb   $0x0,0x6(%eax)
084159d5 +0x3bd:  jmp    08415a0f <+0x3f7>
084159d7 +0x3bf:  mov    -0x18(%ebp),%edx
084159da +0x3c2:  mov    -0xc(%ebp),%esi
084159dd +0x3c5:  mov    -0x58(%ebp),%ebx
084159e0 +0x3c8:  mov    0xc(%ebp),%ecx
084159e3 +0x3cb:  mov    %edx,%eax
084159e5 +0x3cd:  shl    $0x2,%eax
084159e8 +0x3d0:  add    %edx,%eax
084159ea +0x3d2:  shl    $0x2,%eax
084159ed +0x3d5:  add    %edx,%eax
084159ef +0x3d7:  add    %esi,%eax
084159f1 +0x3d9:  add    $0x578,%eax
084159f6 +0x3de:  mov    %ebx,0x8(%ecx,%eax,4)
084159fa +0x3e2:  addl   $0x1,-0xc(%ebp)
084159fe +0x3e6:  mov    -0xc(%ebp),%eax
08415a01 +0x3e9:  cmp    -0x10(%ebp),%eax
08415a04 +0x3ec:  setl   %al
08415a07 +0x3ef:  test   %al,%al
08415a09 +0x3f1:  jne    08415843 <+0x22b>
08415a0f +0x3f7:  mov    -0x20(%ebp),%eax
08415a12 +0x3fa:  mov    %eax,(%esp)
08415a15 +0x3fd:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08415a1a +0x402:  or     %edx,%eax
08415a1c +0x404:  test   %eax,%eax
08415a1e +0x406:  sete   %al
08415a21 +0x409:  test   %al,%al
08415a23 +0x40b:  je     08415aea <+0x4d2>
08415a29 +0x411:  mov    -0x14(%ebp),%eax
08415a2c +0x414:  mov    0xc(%ebp),%edx
08415a2f +0x417:  imul   $0x94,%eax,%eax
08415a35 +0x41d:  lea    (%edx,%eax,1),%eax
08415a38 +0x420:  add    $0xe0,%eax
08415a3d +0x425:  mov    (%eax),%eax
08415a3f +0x427:  mov    %eax,0x8(%esp)
08415a43 +0x42b:  movl   $"inSert into charac_link_bonus (charac_no,mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period) values(%u,0,0,-1,-1)",0x4(%esp)
08415a4b +0x433:  mov    -0x20(%ebp),%eax
08415a4e +0x436:  mov    %eax,(%esp)
08415a51 +0x439:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08415a56 +0x43e:  movl   $0x1,0x4(%esp)
08415a5e +0x446:  mov    -0x20(%ebp),%eax
08415a61 +0x449:  mov    %eax,(%esp)
08415a64 +0x44c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08415a69 +0x451:  xor    $0x1,%eax
08415a6c +0x454:  test   %al,%al
08415a6e +0x456:  jne    08415be5 <+0x5cd>
08415a74 +0x45c:  mov    -0x18(%ebp),%eax
08415a77 +0x45f:  mov    0xc(%ebp),%edx
08415a7a +0x462:  imul   $0x54,%eax,%eax
08415a7d +0x465:  lea    (%edx,%eax,1),%eax
08415a80 +0x468:  add    $0x15dc,%eax
08415a85 +0x46d:  movl   $0x0,(%eax)
08415a8b +0x473:  mov    -0x18(%ebp),%eax
08415a8e +0x476:  mov    0xc(%ebp),%edx
08415a91 +0x479:  imul   $0x54,%eax,%eax
08415a94 +0x47c:  lea    (%edx,%eax,1),%eax
08415a97 +0x47f:  add    $0x15e0,%eax
08415a9c +0x484:  movl   $0x0,(%eax)
08415aa2 +0x48a:  mov    -0x18(%ebp),%eax
08415aa5 +0x48d:  mov    0xc(%ebp),%edx
08415aa8 +0x490:  imul   $0x54,%eax,%eax
08415aab +0x493:  lea    (%edx,%eax,1),%eax
08415aae +0x496:  add    $0x15e0,%eax
08415ab3 +0x49b:  movb   $0xff,0x4(%eax)
08415ab7 +0x49f:  mov    -0x18(%ebp),%eax
08415aba +0x4a2:  mov    0xc(%ebp),%edx
08415abd +0x4a5:  imul   $0x54,%eax,%eax
08415ac0 +0x4a8:  lea    (%edx,%eax,1),%eax
08415ac3 +0x4ab:  add    $0x15e0,%eax
08415ac8 +0x4b0:  movb   $0xff,0x5(%eax)
08415acc +0x4b4:  addl   $0x1,-0x18(%ebp)
08415ad0 +0x4b8:  mov    0xc(%ebp),%eax
08415ad3 +0x4bb:  mov    0x15b0(%eax),%eax
08415ad9 +0x4c1:  lea    0x1(%eax),%edx
08415adc +0x4c4:  mov    0xc(%ebp),%eax
08415adf +0x4c7:  mov    %edx,0x15b0(%eax)
08415ae5 +0x4cd:  jmp    08415bf5 <+0x5dd>
08415aea +0x4d2:  mov    -0x20(%ebp),%eax
08415aed +0x4d5:  mov    %eax,(%esp)
08415af0 +0x4d8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08415af5 +0x4dd:  xor    $0x1,%eax
08415af8 +0x4e0:  test   %al,%al
08415afa +0x4e2:  jne    08415be8 <+0x5d0>
08415b00 +0x4e8:  mov    -0x18(%ebp),%eax
08415b03 +0x4eb:  imul   $0x54,%eax,%eax
08415b06 +0x4ee:  add    $0x15d0,%eax
08415b0b +0x4f3:  add    0xc(%ebp),%eax
08415b0e +0x4f6:  add    $0xc,%eax
08415b11 +0x4f9:  mov    %eax,0x8(%esp)
08415b15 +0x4fd:  movl   $0x0,0x4(%esp)
08415b1d +0x505:  mov    -0x20(%ebp),%eax
08415b20 +0x508:  mov    %eax,(%esp)
08415b23 +0x50b:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08415b28 +0x510:  xor    $0x1,%eax
08415b2b +0x513:  test   %al,%al
08415b2d +0x515:  jne    08415beb <+0x5d3>
08415b33 +0x51b:  mov    -0x18(%ebp),%eax
08415b36 +0x51e:  imul   $0x54,%eax,%eax
08415b39 +0x521:  add    $0x15d0,%eax
08415b3e +0x526:  add    0xc(%ebp),%eax
08415b41 +0x529:  add    $0x10,%eax
08415b44 +0x52c:  mov    %eax,0x8(%esp)
08415b48 +0x530:  movl   $0x1,0x4(%esp)
08415b50 +0x538:  mov    -0x20(%ebp),%eax
08415b53 +0x53b:  mov    %eax,(%esp)
08415b56 +0x53e:  call   080e22ae <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x54>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x54
08415b5b +0x543:  xor    $0x1,%eax
08415b5e +0x546:  test   %al,%al
08415b60 +0x548:  jne    08415bee <+0x5d6>
08415b66 +0x54e:  mov    -0x18(%ebp),%eax
08415b69 +0x551:  imul   $0x54,%eax,%eax
08415b6c +0x554:  add    $0x15e0,%eax
08415b71 +0x559:  add    0xc(%ebp),%eax
08415b74 +0x55c:  add    $0x4,%eax
08415b77 +0x55f:  mov    %eax,0x8(%esp)
08415b7b +0x563:  movl   $0x2,0x4(%esp)
08415b83 +0x56b:  mov    -0x20(%ebp),%eax
08415b86 +0x56e:  mov    %eax,(%esp)
08415b89 +0x571:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08415b8e +0x576:  xor    $0x1,%eax
08415b91 +0x579:  test   %al,%al
08415b93 +0x57b:  jne    08415bf1 <+0x5d9>
08415b95 +0x57d:  mov    -0x18(%ebp),%eax
08415b98 +0x580:  imul   $0x54,%eax,%eax
08415b9b +0x583:  add    $0x15e0,%eax
08415ba0 +0x588:  add    0xc(%ebp),%eax
08415ba3 +0x58b:  add    $0x5,%eax
08415ba6 +0x58e:  mov    %eax,0x8(%esp)
08415baa +0x592:  movl   $0x3,0x4(%esp)
08415bb2 +0x59a:  mov    -0x20(%ebp),%eax
08415bb5 +0x59d:  mov    %eax,(%esp)
08415bb8 +0x5a0:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
08415bbd +0x5a5:  xor    $0x1,%eax
08415bc0 +0x5a8:  test   %al,%al
08415bc2 +0x5aa:  jne    08415bf4 <+0x5dc>
08415bc4 +0x5ac:  addl   $0x1,-0x18(%ebp)
08415bc8 +0x5b0:  mov    0xc(%ebp),%eax
08415bcb +0x5b3:  mov    0x15b0(%eax),%eax
08415bd1 +0x5b9:  lea    0x1(%eax),%edx
08415bd4 +0x5bc:  mov    0xc(%ebp),%eax
08415bd7 +0x5bf:  mov    %edx,0x15b0(%eax)
08415bdd +0x5c5:  jmp    08415bf5 <+0x5dd>
08415bdf +0x5c7:  nop
08415be0 +0x5c8:  jmp    08415bf5 <+0x5dd>
08415be2 +0x5ca:  nop
08415be3 +0x5cb:  jmp    08415bf5 <+0x5dd>
08415be5 +0x5cd:  nop
08415be6 +0x5ce:  jmp    08415bf5 <+0x5dd>
08415be8 +0x5d0:  nop
08415be9 +0x5d1:  jmp    08415bf5 <+0x5dd>
08415beb +0x5d3:  nop
08415bec +0x5d4:  jmp    08415bf5 <+0x5dd>
08415bee +0x5d6:  nop
08415bef +0x5d7:  jmp    08415bf5 <+0x5dd>
08415bf1 +0x5d9:  nop
08415bf2 +0x5da:  jmp    08415bf5 <+0x5dd>
08415bf4 +0x5dc:  nop
08415bf5 +0x5dd:  addl   $0x1,-0x14(%ebp)
08415bf9 +0x5e1:  mov    0xc(%ebp),%eax
08415bfc +0x5e4:  mov    0xdc(%eax),%eax
08415c02 +0x5ea:  cmp    -0x14(%ebp),%eax
08415c05 +0x5ed:  jle    08415c14 <+0x5fc>
08415c07 +0x5ef:  cmpl   $0x23,-0x14(%ebp)
08415c0b +0x5f3:  jg     08415c14 <+0x5fc>
08415c0d +0x5f5:  mov    $0x1,%eax
08415c12 +0x5fa:  jmp    08415c19 <+0x601>
08415c14 +0x5fc:  mov    $0x0,%eax
08415c19 +0x601:  test   %al,%al
08415c1b +0x603:  jne    08415691 <+0x79>
08415c21 +0x609:  mov    $0x1,%eax
08415c26 +0x60e:  add    $0x60,%esp
08415c29 +0x611:  pop    %ebx
08415c2a +0x612:  pop    %esi
08415c2b +0x613:  pop    %ebp
08415c2c +0x614:  ret
08415c2d +0x615:  nop
```

## 反编译 C

```c
// DB_Login::GetMercenarySystemInfo @ 0x8415618

/* DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetMercenarySystemInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  int local_5c;
  int local_58;
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  MySQL *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_1 == (SIG_LOGIN_DATA *)0x0) {
    uVar4 = 0;
  }
  else {
    local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    local_58 = 0;
    local_5c = 0;
    local_1c = 0;
    local_18 = 0;
    while( true ) {
      if ((local_18 < *(int *)(param_1 + 0xdc)) && (local_18 < 0x24)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      sVar1 = *(short *)(param_1 + local_18 * 0x94 + 0xfa);
      iVar5 = G_CDataManager();
      if (*(short *)(iVar5 + 0xa8e0) <= sVar1) {
        MySQL::set_query(local_24,
                         "seLect mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period from charac_link_bonus where charac_no=%u"
                         ,*(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0));
        cVar3 = MySQL::exec(local_24,true);
        if (cVar3 != '\x01') {
          return 0;
        }
        CHARAC_LOAD_MERCENARY::Reset((CHARAC_LOAD_MERCENARY *)(param_1 + local_1c * 0x54 + 0x15b4));
        strncpy((char *)(param_1 + local_1c * 0x54 + 0x15ba),
                (char *)(param_1 + local_18 * 0x94 + 0xe4),0x1e);
        *(undefined4 *)(param_1 + local_1c * 0x54 + 0x15b4) =
             *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
        *(undefined2 *)(param_1 + local_1c * 0x54 + 0x15b8) =
             *(undefined2 *)(param_1 + local_18 * 0x94 + 0xfa);
        MySQL::set_query(local_20,
                         "seLect slot,it_id from user_items where charac_no=%u and expire_date>now() and stat=0 order by slot limit 8"
                         ,*(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0));
        cVar3 = MySQL::exec(local_20,true);
        if (cVar3 == '\x01') {
          local_14 = MySQL::get_n_rows(local_20);
          if (local_14 == 8) {
            for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
              cVar3 = MySQL::fetch(local_20);
              if (cVar3 != '\x01') {
                uVar4 = *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
                cMyTrace::cMyTrace(local_54,"bool DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)"
                                   ,0x3ea2,5);
                cMyTrace::operator()
                          (local_54,"DB_Login::GetMercenarySystemInfo %d ERROR Charac_no=%u",0x3ea2,
                           uVar4);
                break;
              }
              cVar3 = MySQL::get_int(local_20,0,&local_58);
              if (cVar3 != '\x01') {
                uVar4 = *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
                cMyTrace::cMyTrace(local_44,"bool DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)"
                                   ,0x3ea8,5);
                cMyTrace::operator()
                          (local_44,"DB_Login::GetMercenarySystemInfo %d ERROR Charac_no=%u",0x3ea8,
                           uVar4);
                return 0;
              }
              cVar3 = MySQL::get_int(local_20,1,&local_5c);
              if (cVar3 != '\x01') {
                uVar4 = *(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0);
                cMyTrace::cMyTrace(local_34,"bool DB_Login::GetMercenarySystemInfo(SIG_LOGIN_DATA*)"
                                   ,0x3eae,5);
                cMyTrace::operator()
                          (local_34,"DB_Login::GetMercenarySystemInfo %d ERROR charac_no=%u",0x3eae,
                           uVar4);
                return 0;
              }
              if (local_58 != local_10) {
                param_1[local_1c * 0x54 + 0x15e6] = (SIG_LOGIN_DATA)0x0;
                break;
              }
              *(int *)(param_1 + local_1c * 0x54 + local_10 * 4 + 0x15e8) = local_5c;
            }
          }
          else {
            param_1[local_1c * 0x54 + 0x15e6] = (SIG_LOGIN_DATA)0x0;
          }
          lVar6 = MySQL::getAffectedRowCount(local_24);
          if (lVar6 == 0) {
            MySQL::set_query(local_24,
                             "inSert into charac_link_bonus (charac_no,mercenary_start_time,mercenary_finish_time,mercenary_area,mercenary_period) values(%u,0,0,-1,-1)"
                             ,*(undefined4 *)(param_1 + local_18 * 0x94 + 0xe0));
            cVar3 = MySQL::exec(local_24,true);
            if (cVar3 == '\x01') {
              *(undefined4 *)(param_1 + local_1c * 0x54 + 0x15dc) = 0;
              *(undefined4 *)(param_1 + local_1c * 0x54 + 0x15e0) = 0;
              param_1[local_1c * 0x54 + 0x15e4] = (SIG_LOGIN_DATA)0xff;
              param_1[local_1c * 0x54 + 0x15e5] = (SIG_LOGIN_DATA)0xff;
              local_1c = local_1c + 1;
              *(int *)(param_1 + 0x15b0) = *(int *)(param_1 + 0x15b0) + 1;
            }
          }
          else {
            cVar3 = MySQL::fetch(local_24);
            if ((((cVar3 == '\x01') &&
                 (cVar3 = MySQL::get_int(local_24,0,(uint *)(param_1 + local_1c * 0x54 + 0x15dc)),
                 cVar3 == '\x01')) &&
                (cVar3 = MySQL::get_int(local_24,1,(uint *)(param_1 + local_1c * 0x54 + 0x15e0)),
                cVar3 == '\x01')) &&
               ((cVar3 = MySQL::get_byte(local_24,2,(char *)(param_1 + local_1c * 0x54 + 0x15e4)),
                cVar3 == '\x01' &&
                (cVar3 = MySQL::get_byte(local_24,3,(char *)(param_1 + local_1c * 0x54 + 0x15e5)),
                cVar3 == '\x01')))) {
              local_1c = local_1c + 1;
              *(int *)(param_1 + 0x15b0) = *(int *)(param_1 + 0x15b0) + 1;
            }
          }
        }
      }
      local_18 = local_18 + 1;
    }
    uVar4 = 1;
  }
  return uVar4;
}
```
