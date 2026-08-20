# _getRewardInfo

`_ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA`

`DB_Login::_getRewardInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084115f8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084115f8  _ZN8DB_Login14_getRewardInfoEP14SIG_LOGIN_DATA
#           DB_Login::_getRewardInfo(SIG_LOGIN_DATA*)
# range [0x084115f8, 0x08411aef]
084115f8 +0x000:  push   %ebp
084115f9 +0x001:  mov    %esp,%ebp
084115fb +0x003:  push   %ebx
084115fc +0x004:  sub    $0x64,%esp
084115ff +0x007:  mov    0xc(%ebp),%eax
08411602 +0x00a:  movb   $0x0,0x3f0d(%eax)
08411609 +0x011:  mov    0xc(%ebp),%eax
0841160c +0x014:  movb   $0x0,0x3f0e(%eax)
08411613 +0x01b:  mov    0xc(%ebp),%eax
08411616 +0x01e:  movb   $0x0,0x3f0f(%eax)
0841161d +0x025:  mov    0xc(%ebp),%eax
08411620 +0x028:  movb   $0x0,0x38e0(%eax)
08411627 +0x02f:  mov    0xc(%ebp),%eax
0841162a +0x032:  movb   $0x0,0x390e(%eax)
08411631 +0x039:  mov    0xc(%ebp),%eax
08411634 +0x03c:  movb   $0x0,0x39e0(%eax)
0841163b +0x043:  mov    0xc(%ebp),%eax
0841163e +0x046:  movb   $0x0,0x39e1(%eax)
08411645 +0x04d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841164a +0x052:  movl   $0x0,0x8(%esp)
08411652 +0x05a:  movl   $0x1,0x4(%esp)
0841165a +0x062:  mov    %eax,(%esp)
0841165d +0x065:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08411662 +0x06a:  mov    %eax,-0x14(%ebp)
08411665 +0x06d:  mov    0xc(%ebp),%eax
08411668 +0x070:  mov    0xc0(%eax),%eax
0841166e +0x076:  movl   $0x0,0x4(%esp)
08411676 +0x07e:  mov    %eax,(%esp)
08411679 +0x081:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841167e +0x086:  mov    %eax,0x8(%esp)
08411682 +0x08a:  movl   $"seLect unix_timestamp(last_check_time), unix_timestamp(m_opt_reg), unix_timestamp(pc_opt_reg), unix_timestamp(security_card_reg), unix_timestamp(goblin_pass_mod), unix_timestamp(member_pc_reg), unix_timestamp(gatekeeper_otp_reg), goblin_validity_time>unix_timestamp(now()), security_card_validity_time>unix_timestamp(now()), validity_ip from member_security_grade where m_id = %s ",0x4(%esp)
0841168a +0x092:  mov    -0x14(%ebp),%eax
0841168d +0x095:  mov    %eax,(%esp)
08411690 +0x098:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08411695 +0x09d:  movl   $0x1,0x4(%esp)
0841169d +0x0a5:  mov    -0x14(%ebp),%eax
084116a0 +0x0a8:  mov    %eax,(%esp)
084116a3 +0x0ab:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084116a8 +0x0b0:  xor    $0x1,%eax
084116ab +0x0b3:  test   %al,%al
084116ad +0x0b5:  je     084116b9 <+0xc1>
084116af +0x0b7:  mov    $0x0,%eax
084116b4 +0x0bc:  jmp    08411ae9 <+0x4f1>
084116b9 +0x0c1:  mov    -0x14(%ebp),%eax
084116bc +0x0c4:  mov    %eax,(%esp)
084116bf +0x0c7:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084116c4 +0x0cc:  test   %eax,%eax
084116c6 +0x0ce:  setne  %al
084116c9 +0x0d1:  test   %al,%al
084116cb +0x0d3:  je     08411ae4 <+0x4ec>
084116d1 +0x0d9:  lea    -0x18(%ebp),%eax
084116d4 +0x0dc:  mov    %eax,(%esp)
084116d7 +0x0df:  call   0807d750 <_init+0x48>
084116dc +0x0e4:  mov    -0x18(%ebp),%ecx
084116df +0x0e7:  mov    $0xc22e4507,%edx
084116e4 +0x0ec:  mov    %ecx,%eax
084116e6 +0x0ee:  imul   %edx
084116e8 +0x0f0:  lea    (%edx,%ecx,1),%eax
084116eb +0x0f3:  mov    %eax,%edx
084116ed +0x0f5:  sar    $0x10,%edx
084116f0 +0x0f8:  mov    %ecx,%eax
084116f2 +0x0fa:  sar    $0x1f,%eax
084116f5 +0x0fd:  mov    %edx,%ebx
084116f7 +0x0ff:  sub    %eax,%ebx
084116f9 +0x101:  mov    %ebx,%eax
084116fb +0x103:  mov    %eax,-0x10(%ebp)
084116fe +0x106:  mov    -0x10(%ebp),%eax
08411701 +0x109:  imul   $&_ZL14gUnicodeBuffer+0xac54,%eax,%eax
08411707 +0x10f:  mov    %ecx,%edx
08411709 +0x111:  sub    %eax,%edx
0841170b +0x113:  mov    %edx,%eax
0841170d +0x115:  mov    %eax,-0x10(%ebp)
08411710 +0x118:  mov    -0x18(%ebp),%eax
08411713 +0x11b:  sub    -0x10(%ebp),%eax
08411716 +0x11e:  sub    $0x2a30,%eax
0841171b +0x123:  mov    %eax,-0x18(%ebp)
0841171e +0x126:  cmpl   $&_ZL14gUnicodeBuffer+0x8223,-0x10(%ebp)
08411725 +0x12d:  jle    08411732 <+0x13a>
08411727 +0x12f:  mov    -0x18(%ebp),%eax
0841172a +0x132:  add    $&_ZL14gUnicodeBuffer+0xac54,%eax
0841172f +0x137:  mov    %eax,-0x18(%ebp)
08411732 +0x13a:  movl   $0x0,-0x1c(%ebp)
08411739 +0x141:  movl   $0x0,-0x20(%ebp)
08411740 +0x148:  movl   $0x0,-0x24(%ebp)
08411747 +0x14f:  movl   $0x0,-0x28(%ebp)
0841174e +0x156:  movl   $0x0,-0x2c(%ebp)
08411755 +0x15d:  movl   $0x0,-0x30(%ebp)
0841175c +0x164:  movl   $0x0,-0x34(%ebp)
08411763 +0x16b:  movl   $0x0,-0x38(%ebp)
0841176a +0x172:  movl   $0x0,-0x3c(%ebp)
08411771 +0x179:  mov    -0x14(%ebp),%eax
08411774 +0x17c:  mov    %eax,(%esp)
08411777 +0x17f:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841177c +0x184:  xor    $0x1,%eax
0841177f +0x187:  test   %al,%al
08411781 +0x189:  je     0841178d <+0x195>
08411783 +0x18b:  mov    $0x0,%eax
08411788 +0x190:  jmp    08411ae9 <+0x4f1>
0841178d +0x195:  lea    -0x1c(%ebp),%eax
08411790 +0x198:  mov    %eax,0x8(%esp)
08411794 +0x19c:  movl   $0x0,0x4(%esp)
0841179c +0x1a4:  mov    -0x14(%ebp),%eax
0841179f +0x1a7:  mov    %eax,(%esp)
084117a2 +0x1aa:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084117a7 +0x1af:  lea    -0x20(%ebp),%eax
084117aa +0x1b2:  mov    %eax,0x8(%esp)
084117ae +0x1b6:  movl   $0x1,0x4(%esp)
084117b6 +0x1be:  mov    -0x14(%ebp),%eax
084117b9 +0x1c1:  mov    %eax,(%esp)
084117bc +0x1c4:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084117c1 +0x1c9:  lea    -0x24(%ebp),%eax
084117c4 +0x1cc:  mov    %eax,0x8(%esp)
084117c8 +0x1d0:  movl   $0x2,0x4(%esp)
084117d0 +0x1d8:  mov    -0x14(%ebp),%eax
084117d3 +0x1db:  mov    %eax,(%esp)
084117d6 +0x1de:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084117db +0x1e3:  lea    -0x28(%ebp),%eax
084117de +0x1e6:  mov    %eax,0x8(%esp)
084117e2 +0x1ea:  movl   $0x3,0x4(%esp)
084117ea +0x1f2:  mov    -0x14(%ebp),%eax
084117ed +0x1f5:  mov    %eax,(%esp)
084117f0 +0x1f8:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084117f5 +0x1fd:  lea    -0x2c(%ebp),%eax
084117f8 +0x200:  mov    %eax,0x8(%esp)
084117fc +0x204:  movl   $0x4,0x4(%esp)
08411804 +0x20c:  mov    -0x14(%ebp),%eax
08411807 +0x20f:  mov    %eax,(%esp)
0841180a +0x212:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841180f +0x217:  lea    -0x30(%ebp),%eax
08411812 +0x21a:  mov    %eax,0x8(%esp)
08411816 +0x21e:  movl   $0x5,0x4(%esp)
0841181e +0x226:  mov    -0x14(%ebp),%eax
08411821 +0x229:  mov    %eax,(%esp)
08411824 +0x22c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08411829 +0x231:  lea    -0x34(%ebp),%eax
0841182c +0x234:  mov    %eax,0x8(%esp)
08411830 +0x238:  movl   $0x6,0x4(%esp)
08411838 +0x240:  mov    -0x14(%ebp),%eax
0841183b +0x243:  mov    %eax,(%esp)
0841183e +0x246:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08411843 +0x24b:  lea    -0x38(%ebp),%eax
08411846 +0x24e:  mov    %eax,0x8(%esp)
0841184a +0x252:  movl   $0x7,0x4(%esp)
08411852 +0x25a:  mov    -0x14(%ebp),%eax
08411855 +0x25d:  mov    %eax,(%esp)
08411858 +0x260:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841185d +0x265:  lea    -0x3c(%ebp),%eax
08411860 +0x268:  mov    %eax,0x8(%esp)
08411864 +0x26c:  movl   $0x8,0x4(%esp)
0841186c +0x274:  mov    -0x14(%ebp),%eax
0841186f +0x277:  mov    %eax,(%esp)
08411872 +0x27a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08411877 +0x27f:  movl   $0x0,-0x4c(%ebp)
0841187e +0x286:  movl   $0x0,-0x48(%ebp)
08411885 +0x28d:  movl   $0x0,-0x44(%ebp)
0841188c +0x294:  movl   $0x0,-0x40(%ebp)
08411893 +0x29b:  movb   $0x1,-0x9(%ebp)
08411897 +0x29f:  movl   $0x10,0xc(%esp)
0841189f +0x2a7:  lea    -0x4c(%ebp),%eax
084118a2 +0x2aa:  mov    %eax,0x8(%esp)
084118a6 +0x2ae:  movl   $0x9,0x4(%esp)
084118ae +0x2b6:  mov    -0x14(%ebp),%eax
084118b1 +0x2b9:  mov    %eax,(%esp)
084118b4 +0x2bc:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084118b9 +0x2c1:  mov    0xc(%ebp),%eax
084118bc +0x2c4:  add    $0xa1,%eax
084118c1 +0x2c9:  movl   $0x10,0x8(%esp)
084118c9 +0x2d1:  mov    %eax,0x4(%esp)
084118cd +0x2d5:  lea    -0x4c(%ebp),%eax
084118d0 +0x2d8:  mov    %eax,(%esp)
084118d3 +0x2db:  call   0807e8c0 <_init+0x11b8>
084118d8 +0x2e0:  test   %eax,%eax
084118da +0x2e2:  je     084118e0 <+0x2e8>
084118dc +0x2e4:  movb   $0x0,-0x9(%ebp)
084118e0 +0x2e8:  mov    -0x2c(%ebp),%eax
084118e3 +0x2eb:  test   %eax,%eax
084118e5 +0x2ed:  je     084118f1 <+0x2f9>
084118e7 +0x2ef:  mov    0xc(%ebp),%eax
084118ea +0x2f2:  movb   $0x1,0x38e0(%eax)
084118f1 +0x2f9:  mov    -0x38(%ebp),%eax
084118f4 +0x2fc:  test   %eax,%eax
084118f6 +0x2fe:  je     08411912 <+0x31a>
084118f8 +0x300:  cmpb   $0x0,-0x9(%ebp)
084118fc +0x304:  je     08411912 <+0x31a>
084118fe +0x306:  mov    0xc(%ebp),%eax
08411901 +0x309:  movb   $0x1,0x390e(%eax)
08411908 +0x310:  mov    0xc(%ebp),%eax
0841190b +0x313:  movb   $0x2,0x390c(%eax)
08411912 +0x31a:  mov    -0x28(%ebp),%eax
08411915 +0x31d:  test   %eax,%eax
08411917 +0x31f:  je     08411923 <+0x32b>
08411919 +0x321:  mov    0xc(%ebp),%eax
0841191c +0x324:  movb   $0x1,0x39e0(%eax)
08411923 +0x32b:  mov    -0x3c(%ebp),%eax
08411926 +0x32e:  test   %eax,%eax
08411928 +0x330:  je     0841193a <+0x342>
0841192a +0x332:  cmpb   $0x0,-0x9(%ebp)
0841192e +0x336:  je     0841193a <+0x342>
08411930 +0x338:  mov    0xc(%ebp),%eax
08411933 +0x33b:  movb   $0x1,0x39e1(%eax)
0841193a +0x342:  mov    0xc(%ebp),%eax
0841193d +0x345:  movb   $0x0,0x3f0d(%eax)
08411944 +0x34c:  mov    -0x20(%ebp),%eax
08411947 +0x34f:  test   %eax,%eax
08411949 +0x351:  je     08411963 <+0x36b>
0841194b +0x353:  mov    0xc(%ebp),%eax
0841194e +0x356:  movzbl 0x3f0d(%eax),%eax
08411955 +0x35d:  mov    %eax,%edx
08411957 +0x35f:  or     $0x1,%edx
0841195a +0x362:  mov    0xc(%ebp),%eax
0841195d +0x365:  mov    %dl,0x3f0d(%eax)
08411963 +0x36b:  mov    -0x24(%ebp),%eax
08411966 +0x36e:  test   %eax,%eax
08411968 +0x370:  je     08411982 <+0x38a>
0841196a +0x372:  mov    0xc(%ebp),%eax
0841196d +0x375:  movzbl 0x3f0d(%eax),%eax
08411974 +0x37c:  mov    %eax,%edx
08411976 +0x37e:  or     $0x2,%edx
08411979 +0x381:  mov    0xc(%ebp),%eax
0841197c +0x384:  mov    %dl,0x3f0d(%eax)
08411982 +0x38a:  mov    -0x28(%ebp),%eax
08411985 +0x38d:  test   %eax,%eax
08411987 +0x38f:  je     084119a1 <+0x3a9>
08411989 +0x391:  mov    0xc(%ebp),%eax
0841198c +0x394:  movzbl 0x3f0d(%eax),%eax
08411993 +0x39b:  mov    %eax,%edx
08411995 +0x39d:  or     $0x8,%edx
08411998 +0x3a0:  mov    0xc(%ebp),%eax
0841199b +0x3a3:  mov    %dl,0x3f0d(%eax)
084119a1 +0x3a9:  mov    -0x2c(%ebp),%eax
084119a4 +0x3ac:  test   %eax,%eax
084119a6 +0x3ae:  je     084119c0 <+0x3c8>
084119a8 +0x3b0:  mov    0xc(%ebp),%eax
084119ab +0x3b3:  movzbl 0x3f0d(%eax),%eax
084119b2 +0x3ba:  mov    %eax,%edx
084119b4 +0x3bc:  or     $0x10,%edx
084119b7 +0x3bf:  mov    0xc(%ebp),%eax
084119ba +0x3c2:  mov    %dl,0x3f0d(%eax)
084119c0 +0x3c8:  mov    -0x30(%ebp),%eax
084119c3 +0x3cb:  test   %eax,%eax
084119c5 +0x3cd:  je     084119df <+0x3e7>
084119c7 +0x3cf:  mov    0xc(%ebp),%eax
084119ca +0x3d2:  movzbl 0x3f0d(%eax),%eax
084119d1 +0x3d9:  mov    %eax,%edx
084119d3 +0x3db:  or     $0x4,%edx
084119d6 +0x3de:  mov    0xc(%ebp),%eax
084119d9 +0x3e1:  mov    %dl,0x3f0d(%eax)
084119df +0x3e7:  mov    -0x34(%ebp),%eax
084119e2 +0x3ea:  test   %eax,%eax
084119e4 +0x3ec:  je     084119fe <+0x406>
084119e6 +0x3ee:  mov    0xc(%ebp),%eax
084119e9 +0x3f1:  movzbl 0x3f0d(%eax),%eax
084119f0 +0x3f8:  mov    %eax,%edx
084119f2 +0x3fa:  or     $0x20,%edx
084119f5 +0x3fd:  mov    0xc(%ebp),%eax
084119f8 +0x400:  mov    %dl,0x3f0d(%eax)
084119fe +0x406:  mov    -0x20(%ebp),%eax
08411a01 +0x409:  test   %eax,%eax
08411a03 +0x40b:  je     08411a1f <+0x427>
08411a05 +0x40d:  mov    0xc(%ebp),%eax
08411a08 +0x410:  movzbl 0x3f0f(%eax),%eax
08411a0f +0x417:  mov    %eax,%edx
08411a11 +0x419:  or     $0x1,%edx
08411a14 +0x41c:  mov    0xc(%ebp),%eax
08411a17 +0x41f:  mov    %dl,0x3f0f(%eax)
08411a1d +0x425:  jmp    08411a80 <+0x488>
08411a1f +0x427:  mov    -0x24(%ebp),%eax
08411a22 +0x42a:  test   %eax,%eax
08411a24 +0x42c:  je     08411a40 <+0x448>
08411a26 +0x42e:  mov    0xc(%ebp),%eax
08411a29 +0x431:  movzbl 0x3f0f(%eax),%eax
08411a30 +0x438:  mov    %eax,%edx
08411a32 +0x43a:  or     $0x2,%edx
08411a35 +0x43d:  mov    0xc(%ebp),%eax
08411a38 +0x440:  mov    %dl,0x3f0f(%eax)
08411a3e +0x446:  jmp    08411a80 <+0x488>
08411a40 +0x448:  mov    -0x30(%ebp),%eax
08411a43 +0x44b:  test   %eax,%eax
08411a45 +0x44d:  je     08411a61 <+0x469>
08411a47 +0x44f:  mov    0xc(%ebp),%eax
08411a4a +0x452:  movzbl 0x3f0f(%eax),%eax
08411a51 +0x459:  mov    %eax,%edx
08411a53 +0x45b:  or     $0x4,%edx
08411a56 +0x45e:  mov    0xc(%ebp),%eax
08411a59 +0x461:  mov    %dl,0x3f0f(%eax)
08411a5f +0x467:  jmp    08411a80 <+0x488>
08411a61 +0x469:  mov    -0x34(%ebp),%eax
08411a64 +0x46c:  test   %eax,%eax
08411a66 +0x46e:  je     08411a80 <+0x488>
08411a68 +0x470:  mov    0xc(%ebp),%eax
08411a6b +0x473:  movzbl 0x3f0f(%eax),%eax
08411a72 +0x47a:  mov    %eax,%edx
08411a74 +0x47c:  or     $0x20,%edx
08411a77 +0x47f:  mov    0xc(%ebp),%eax
08411a7a +0x482:  mov    %dl,0x3f0f(%eax)
08411a80 +0x488:  mov    -0x28(%ebp),%eax
08411a83 +0x48b:  test   %eax,%eax
08411a85 +0x48d:  je     08411aa1 <+0x4a9>
08411a87 +0x48f:  mov    0xc(%ebp),%eax
08411a8a +0x492:  movzbl 0x3f0f(%eax),%eax
08411a91 +0x499:  mov    %eax,%edx
08411a93 +0x49b:  or     $0x8,%edx
08411a96 +0x49e:  mov    0xc(%ebp),%eax
08411a99 +0x4a1:  mov    %dl,0x3f0f(%eax)
08411a9f +0x4a7:  jmp    08411ac0 <+0x4c8>
08411aa1 +0x4a9:  mov    -0x2c(%ebp),%eax
08411aa4 +0x4ac:  test   %eax,%eax
08411aa6 +0x4ae:  je     08411ac0 <+0x4c8>
08411aa8 +0x4b0:  mov    0xc(%ebp),%eax
08411aab +0x4b3:  movzbl 0x3f0f(%eax),%eax
08411ab2 +0x4ba:  mov    %eax,%edx
08411ab4 +0x4bc:  or     $0x10,%edx
08411ab7 +0x4bf:  mov    0xc(%ebp),%eax
08411aba +0x4c2:  mov    %dl,0x3f0f(%eax)
08411ac0 +0x4c8:  mov    0xc(%ebp),%eax
08411ac3 +0x4cb:  movzbl 0x3f0d(%eax),%eax
08411aca +0x4d2:  test   %al,%al
08411acc +0x4d4:  je     08411ae4 <+0x4ec>
08411ace +0x4d6:  mov    -0x1c(%ebp),%eax
08411ad1 +0x4d9:  mov    %eax,%edx
08411ad3 +0x4db:  mov    -0x18(%ebp),%eax
08411ad6 +0x4de:  cmp    %eax,%edx
08411ad8 +0x4e0:  jge    08411ae4 <+0x4ec>
08411ada +0x4e2:  mov    0xc(%ebp),%eax
08411add +0x4e5:  movb   $0x1,0x3f0e(%eax)
08411ae4 +0x4ec:  mov    $0x0,%eax
08411ae9 +0x4f1:  add    $0x64,%esp
08411aec +0x4f4:  pop    %ebx
08411aed +0x4f5:  pop    %ebp
08411aee +0x4f6:  ret
08411aef +0x4f7:  nop
```

## 反编译 C

```c
// DB_Login::_getRewardInfo @ 0x84115f8

/* DB_Login::_getRewardInfo(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::_getRewardInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char local_50 [16];
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  MySQL *local_18;
  int local_14;
  char local_d;
  
  param_1[0x3f0d] = (SIG_LOGIN_DATA)0x0;
  param_1[0x3f0e] = (SIG_LOGIN_DATA)0x0;
  param_1[0x3f0f] = (SIG_LOGIN_DATA)0x0;
  param_1[0x38e0] = (SIG_LOGIN_DATA)0x0;
  param_1[0x390e] = (SIG_LOGIN_DATA)0x0;
  param_1[0x39e0] = (SIG_LOGIN_DATA)0x0;
  param_1[0x39e1] = (SIG_LOGIN_DATA)0x0;
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_18,
                   "seLect unix_timestamp(last_check_time), unix_timestamp(m_opt_reg), unix_timestamp(pc_opt_reg), unix_timestamp(security_card_reg), unix_timestamp(goblin_pass_mod), unix_timestamp(member_pc_reg), unix_timestamp(gatekeeper_otp_reg), goblin_validity_time>unix_timestamp(now()), security_card_validity_time>unix_timestamp(now()), validity_ip from member_security_grade where m_id = %s "
                   ,uVar2);
  cVar1 = MySQL::exec(local_18,true);
  if ((cVar1 == '\x01') && (iVar3 = MySQL::get_n_rows(local_18), iVar3 != 0)) {
    time(&local_1c);
    local_14 = local_1c % 0x15180;
    iVar3 = local_1c - local_14;
    local_1c = iVar3 + -0x2a30;
    if (0x1274f < local_14) {
      local_1c = iVar3 + 0x12750;
    }
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    local_38 = 0;
    local_3c = 0;
    local_40 = 0;
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 == '\x01') {
      MySQL::get_uint(local_18,0,&local_20);
      MySQL::get_uint(local_18,1,&local_24);
      MySQL::get_uint(local_18,2,&local_28);
      MySQL::get_uint(local_18,3,&local_2c);
      MySQL::get_uint(local_18,4,&local_30);
      MySQL::get_uint(local_18,5,&local_34);
      MySQL::get_uint(local_18,6,&local_38);
      MySQL::get_uint(local_18,7,&local_3c);
      MySQL::get_uint(local_18,8,&local_40);
      local_50[0] = '\0';
      local_50[1] = '\0';
      local_50[2] = '\0';
      local_50[3] = '\0';
      local_50[4] = '\0';
      local_50[5] = '\0';
      local_50[6] = '\0';
      local_50[7] = '\0';
      local_50[8] = '\0';
      local_50[9] = '\0';
      local_50[10] = '\0';
      local_50[0xb] = '\0';
      local_50[0xc] = '\0';
      local_50[0xd] = '\0';
      local_50[0xe] = '\0';
      local_50[0xf] = '\0';
      local_d = '\x01';
      MySQL::get_str(local_18,9,local_50,0x10);
      iVar3 = strncmp(local_50,(char *)(param_1 + 0xa1),0x10);
      if (iVar3 != 0) {
        local_d = '\0';
      }
      if (local_30 != 0) {
        param_1[0x38e0] = (SIG_LOGIN_DATA)0x1;
      }
      if ((local_3c != 0) && (local_d != '\0')) {
        param_1[0x390e] = (SIG_LOGIN_DATA)0x1;
        param_1[0x390c] = (SIG_LOGIN_DATA)0x2;
      }
      if (local_2c != 0) {
        param_1[0x39e0] = (SIG_LOGIN_DATA)0x1;
      }
      if ((local_40 != 0) && (local_d != '\0')) {
        param_1[0x39e1] = (SIG_LOGIN_DATA)0x1;
      }
      param_1[0x3f0d] = (SIG_LOGIN_DATA)0x0;
      if (local_24 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 1);
      }
      if (local_28 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 2);
      }
      if (local_2c != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 8);
      }
      if (local_30 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 0x10);
      }
      if (local_34 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 4);
      }
      if (local_38 != 0) {
        param_1[0x3f0d] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0d] | 0x20);
      }
      if (local_24 == 0) {
        if (local_28 == 0) {
          if (local_34 == 0) {
            if (local_38 != 0) {
              param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 0x20);
            }
          }
          else {
            param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 4);
          }
        }
        else {
          param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 2);
        }
      }
      else {
        param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 1);
      }
      if (local_2c == 0) {
        if (local_30 != 0) {
          param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 0x10);
        }
      }
      else {
        param_1[0x3f0f] = (SIG_LOGIN_DATA)((byte)param_1[0x3f0f] | 8);
      }
      if ((param_1[0x3f0d] != (SIG_LOGIN_DATA)0x0) && ((int)local_20 < local_1c)) {
        param_1[0x3f0e] = (SIG_LOGIN_DATA)0x1;
      }
    }
  }
  return 0;
}
```
