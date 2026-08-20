# SelectLetter

`_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST`

`DB_MailBox_Req_List::SelectLetter(MySQL*, int, int, unsigned int, SIG_MAILBOX_LIST*)`

| 类 | 地址 |
|---|---|
| `DB_MailBox_Req_List` | `0x0841d52c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841d52c  _ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST
#           DB_MailBox_Req_List::SelectLetter(MySQL*, int, int, unsigned int, SIG_MAILBOX_LIST*)
# range [0x0841d52c, 0x0841dc83]
0841d52c +0x000:  push   %ebp
0841d52d +0x001:  mov    %esp,%ebp
0841d52f +0x003:  push   %edi
0841d530 +0x004:  push   %esi
0841d531 +0x005:  push   %ebx
0841d532 +0x006:  sub    $0x1cc,%esp
0841d538 +0x00c:  mov    0x1c(%ebp),%eax
0841d53b +0x00f:  add    $0x101c,%eax
0841d540 +0x014:  movl   $0x230a,0x8(%esp)
0841d548 +0x01c:  movl   $0x0,0x4(%esp)
0841d550 +0x024:  mov    %eax,(%esp)
0841d553 +0x027:  call   0807dcc0 <_init+0x5b8>
0841d558 +0x02c:  cmpl   $0x0,0x18(%ebp)
0841d55c +0x030:  jne    0841d633 <+0x107>
0841d562 +0x036:  movl   $0x2,0x10(%esp)
0841d56a +0x03e:  movl   $0xf,0xc(%esp)
0841d572 +0x046:  mov    0x14(%ebp),%eax
0841d575 +0x049:  mov    %eax,0x8(%esp)
0841d579 +0x04d:  movl   $"deLete from letter where charac_no=%d and reg_date<subdate(now(),interval %d day) and stat=%d",0x4(%esp)
0841d581 +0x055:  mov    0xc(%ebp),%eax
0841d584 +0x058:  mov    %eax,(%esp)
0841d587 +0x05b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841d58c +0x060:  movl   $0x1,0x4(%esp)
0841d594 +0x068:  mov    0xc(%ebp),%eax
0841d597 +0x06b:  mov    %eax,(%esp)
0841d59a +0x06e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841d59f +0x073:  movzbl %al,%eax
0841d5a2 +0x076:  mov    %eax,-0x40(%ebp)
0841d5a5 +0x079:  cmpl   $0x0,-0x40(%ebp)
0841d5a9 +0x07d:  jne    0841d5b5 <+0x89>
0841d5ab +0x07f:  mov    $0x0,%ebx
0841d5b0 +0x084:  jmp    0841dc76 <+0x74a>
0841d5b5 +0x089:  movl   $0x1,0x10(%esp)
0841d5bd +0x091:  movl   $0xf,0xc(%esp)
0841d5c5 +0x099:  mov    0x14(%ebp),%eax
0841d5c8 +0x09c:  mov    %eax,0x8(%esp)
0841d5cc +0x0a0:  movl   $"deLete from letter where charac_no=%d and reg_date<subdate(now(),interval %d day) and stat=%d",0x4(%esp)
0841d5d4 +0x0a8:  mov    0xc(%ebp),%eax
0841d5d7 +0x0ab:  mov    %eax,(%esp)
0841d5da +0x0ae:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841d5df +0x0b3:  movl   $0x1,0x4(%esp)
0841d5e7 +0x0bb:  mov    0xc(%ebp),%eax
0841d5ea +0x0be:  mov    %eax,(%esp)
0841d5ed +0x0c1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841d5f2 +0x0c6:  movzbl %al,%eax
0841d5f5 +0x0c9:  mov    %eax,-0x40(%ebp)
0841d5f8 +0x0cc:  cmpl   $0x0,-0x40(%ebp)
0841d5fc +0x0d0:  jne    0841d608 <+0xdc>
0841d5fe +0x0d2:  mov    $0x0,%ebx
0841d603 +0x0d7:  jmp    0841dc76 <+0x74a>
0841d608 +0x0dc:  movl   $0xf,0x10(%esp)
0841d610 +0x0e4:  mov    0x14(%ebp),%eax
0841d613 +0x0e7:  mov    %eax,0xc(%esp)
0841d617 +0x0eb:  mov    0x14(%ebp),%eax
0841d61a +0x0ee:  mov    %eax,0x8(%esp)
0841d61e +0x0f2:  movl   $"seLect letter_id,send_charac_no,send_charac_name,letter_text,unix_timestamp(reg_date),stat from letter where (charac_no=%d and stat = 3) or (charac_no=%d and reg_date>subdate(now(),interval %d day)) order by letter_id",0x4(%esp)
0841d626 +0x0fa:  mov    0xc(%ebp),%eax
0841d629 +0x0fd:  mov    %eax,(%esp)
0841d62c +0x100:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841d631 +0x105:  jmp    0841d663 <+0x137>
0841d633 +0x107:  movl   $0xf,0x14(%esp)
0841d63b +0x10f:  mov    0x18(%ebp),%eax
0841d63e +0x112:  mov    %eax,0x10(%esp)
0841d642 +0x116:  mov    0x14(%ebp),%eax
0841d645 +0x119:  mov    %eax,0xc(%esp)
0841d649 +0x11d:  mov    0x14(%ebp),%eax
0841d64c +0x120:  mov    %eax,0x8(%esp)
0841d650 +0x124:  movl   $"seLect letter_id,send_charac_no,send_charac_name,letter_text,unix_timestamp(reg_date),stat from letter where (charac_no=%d and stat = 3) or (charac_no=%d and letter_id > %d and reg_date>subdate(now(),interval %d day)) order by letter_id",0x4(%esp)
0841d658 +0x12c:  mov    0xc(%ebp),%eax
0841d65b +0x12f:  mov    %eax,(%esp)
0841d65e +0x132:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841d663 +0x137:  movl   $0x1,0x4(%esp)
0841d66b +0x13f:  mov    0xc(%ebp),%eax
0841d66e +0x142:  mov    %eax,(%esp)
0841d671 +0x145:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841d676 +0x14a:  movzbl %al,%eax
0841d679 +0x14d:  mov    %eax,-0x40(%ebp)
0841d67c +0x150:  cmpl   $0x0,-0x40(%ebp)
0841d680 +0x154:  jne    0841d68c <+0x160>
0841d682 +0x156:  mov    $0x0,%ebx
0841d687 +0x15b:  jmp    0841dc76 <+0x74a>
0841d68c +0x160:  mov    0x1c(%ebp),%eax
0841d68f +0x163:  mov    0x794(%eax),%eax
0841d695 +0x169:  mov    %eax,-0x3c(%ebp)
0841d698 +0x16c:  mov    0x1c(%ebp),%eax
0841d69b +0x16f:  mov    0x1018(%eax),%eax
0841d6a1 +0x175:  mov    %eax,-0x38(%ebp)
0841d6a4 +0x178:  mov    0x1c(%ebp),%eax
0841d6a7 +0x17b:  movl   $0x0,0x1018(%eax)
0841d6b1 +0x185:  mov    0xc(%ebp),%eax
0841d6b4 +0x188:  mov    %eax,(%esp)
0841d6b7 +0x18b:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0841d6bc +0x190:  mov    %eax,%edx
0841d6be +0x192:  mov    0x1c(%ebp),%eax
0841d6c1 +0x195:  mov    %edx,0x1018(%eax)
0841d6c7 +0x19b:  lea    -0x78(%ebp),%ebx
0841d6ca +0x19e:  mov    %ebx,%edi
0841d6cc +0x1a0:  mov    $0x2,%esi
0841d6d1 +0x1a5:  jmp    0841d6e1 <+0x1b5>
0841d6d3 +0x1a7:  mov    %edi,(%esp)
0841d6d6 +0x1aa:  call   084517ea <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4400>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4400
0841d6db +0x1af:  add    $0xc,%edi
0841d6de +0x1b2:  sub    $0x1,%esi
0841d6e1 +0x1b5:  cmp    $0xffffffff,%esi
0841d6e4 +0x1b8:  setne  %al
0841d6e7 +0x1bb:  test   %al,%al
0841d6e9 +0x1bd:  jne    0841d6d3 <+0x1a7>
0841d6eb +0x1bf:  jmp    0841d72f <+0x203>
0841d6ed +0x1c1:  mov    %edx,%edi
0841d6ef +0x1c3:  mov    %eax,-0x1ac(%ebp)
0841d6f5 +0x1c9:  test   %ebx,%ebx
0841d6f7 +0x1cb:  je     0841d71f <+0x1f3>
0841d6f9 +0x1cd:  mov    $0x2,%eax
0841d6fe +0x1d2:  sub    %esi,%eax
0841d700 +0x1d4:  mov    %eax,%edx
0841d702 +0x1d6:  mov    %edx,%eax
0841d704 +0x1d8:  add    %eax,%eax
0841d706 +0x1da:  add    %edx,%eax
0841d708 +0x1dc:  shl    $0x2,%eax
0841d70b +0x1df:  lea    (%ebx,%eax,1),%esi
0841d70e +0x1e2:  cmp    %ebx,%esi
0841d710 +0x1e4:  je     0841d71f <+0x1f3>
0841d712 +0x1e6:  sub    $0xc,%esi
0841d715 +0x1e9:  mov    %esi,(%esp)
0841d718 +0x1ec:  call   084517fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4414>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4414
0841d71d +0x1f1:  jmp    0841d70e <+0x1e2>
0841d71f +0x1f3:  mov    -0x1ac(%ebp),%eax
0841d725 +0x1f9:  mov    %edi,%edx
0841d727 +0x1fb:  mov    %eax,(%esp)
0841d72a +0x1fe:  call   08ae3750 <_Unwind_Resume>
0841d72f +0x203:  movl   $0x0,-0x54(%ebp)
0841d736 +0x20a:  movl   $0x0,-0x50(%ebp)
0841d73d +0x211:  movl   $0x0,-0x4c(%ebp)
0841d744 +0x218:  movl   $0x0,-0x28(%ebp)
0841d74b +0x21f:  jmp    0841d97d <+0x451>
0841d750 +0x224:  cmpl   $0x0,0x18(%ebp)
0841d754 +0x228:  je     0841d782 <+0x256>
0841d756 +0x22a:  mov    -0x3c(%ebp),%eax
0841d759 +0x22d:  cmp    -0x38(%ebp),%eax
0841d75c +0x230:  jl     0841d782 <+0x256>
0841d75e +0x232:  mov    0x1c(%ebp),%eax
0841d761 +0x235:  mov    0x798(%eax),%eax
0841d767 +0x23b:  test   %eax,%eax
0841d769 +0x23d:  je     0841d782 <+0x256>
0841d76b +0x23f:  lea    -0x78(%ebp),%eax
0841d76e +0x242:  mov    %eax,(%esp)
0841d771 +0x245:  call   08451680 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4296>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4296
0841d776 +0x24a:  cmp    -0x38(%ebp),%eax
0841d779 +0x24d:  jl     0841d782 <+0x256>
0841d77b +0x24f:  mov    $0x1,%eax
0841d780 +0x254:  jmp    0841d787 <+0x25b>
0841d782 +0x256:  mov    $0x0,%eax
0841d787 +0x25b:  test   %al,%al
0841d789 +0x25d:  jne    0841d996 <+0x46a>
0841d78f +0x263:  mov    0xc(%ebp),%eax
0841d792 +0x266:  mov    %eax,(%esp)
0841d795 +0x269:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841d79a +0x26e:  xor    $0x1,%eax
0841d79d +0x271:  test   %al,%al
0841d79f +0x273:  je     0841d7ab <+0x27f>
0841d7a1 +0x275:  mov    $0x0,%ebx
0841d7a6 +0x27a:  jmp    0841dc5c <+0x730>
0841d7ab +0x27f:  movl   $0x12b,0x8(%esp)
0841d7b3 +0x287:  movl   $0x0,0x4(%esp)
0841d7bb +0x28f:  lea    -0x1a3(%ebp),%eax
0841d7c1 +0x295:  mov    %eax,(%esp)
0841d7c4 +0x298:  call   0807dcc0 <_init+0x5b8>
0841d7c9 +0x29d:  lea    -0x1a3(%ebp),%eax
0841d7cf +0x2a3:  mov    %eax,0x8(%esp)
0841d7d3 +0x2a7:  movl   $0x0,0x4(%esp)
0841d7db +0x2af:  mov    0xc(%ebp),%eax
0841d7de +0x2b2:  mov    %eax,(%esp)
0841d7e1 +0x2b5:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841d7e6 +0x2ba:  xor    $0x1,%eax
0841d7e9 +0x2bd:  test   %al,%al
0841d7eb +0x2bf:  je     0841d7f7 <+0x2cb>
0841d7ed +0x2c1:  mov    $0x0,%ebx
0841d7f2 +0x2c6:  jmp    0841dc5c <+0x730>
0841d7f7 +0x2cb:  lea    -0x1a3(%ebp),%eax
0841d7fd +0x2d1:  add    $0x4,%eax
0841d800 +0x2d4:  mov    %eax,0x8(%esp)
0841d804 +0x2d8:  movl   $0x1,0x4(%esp)
0841d80c +0x2e0:  mov    0xc(%ebp),%eax
0841d80f +0x2e3:  mov    %eax,(%esp)
0841d812 +0x2e6:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841d817 +0x2eb:  xor    $0x1,%eax
0841d81a +0x2ee:  test   %al,%al
0841d81c +0x2f0:  je     0841d828 <+0x2fc>
0841d81e +0x2f2:  mov    $0x0,%ebx
0841d823 +0x2f7:  jmp    0841dc5c <+0x730>
0841d828 +0x2fc:  movl   $0x1d,0xc(%esp)
0841d830 +0x304:  lea    -0x1a3(%ebp),%eax
0841d836 +0x30a:  add    $0x8,%eax
0841d839 +0x30d:  mov    %eax,0x8(%esp)
0841d83d +0x311:  movl   $0x2,0x4(%esp)
0841d845 +0x319:  mov    0xc(%ebp),%eax
0841d848 +0x31c:  mov    %eax,(%esp)
0841d84b +0x31f:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0841d850 +0x324:  xor    $0x1,%eax
0841d853 +0x327:  test   %al,%al
0841d855 +0x329:  je     0841d861 <+0x335>
0841d857 +0x32b:  mov    $0x0,%ebx
0841d85c +0x330:  jmp    0841dc5c <+0x730>
0841d861 +0x335:  movl   $0x100,0xc(%esp)
0841d869 +0x33d:  lea    -0x1a3(%ebp),%eax
0841d86f +0x343:  add    $0x25,%eax
0841d872 +0x346:  mov    %eax,0x8(%esp)
0841d876 +0x34a:  movl   $0x3,0x4(%esp)
0841d87e +0x352:  mov    0xc(%ebp),%eax
0841d881 +0x355:  mov    %eax,(%esp)
0841d884 +0x358:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0841d889 +0x35d:  xor    $0x1,%eax
0841d88c +0x360:  test   %al,%al
0841d88e +0x362:  je     0841d89a <+0x36e>
0841d890 +0x364:  mov    $0x0,%ebx
0841d895 +0x369:  jmp    0841dc5c <+0x730>
0841d89a +0x36e:  lea    -0x1a3(%ebp),%eax
0841d8a0 +0x374:  add    $0x125,%eax
0841d8a5 +0x379:  mov    %eax,0x8(%esp)
0841d8a9 +0x37d:  movl   $0x4,0x4(%esp)
0841d8b1 +0x385:  mov    0xc(%ebp),%eax
0841d8b4 +0x388:  mov    %eax,(%esp)
0841d8b7 +0x38b:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841d8bc +0x390:  xor    $0x1,%eax
0841d8bf +0x393:  test   %al,%al
0841d8c1 +0x395:  je     0841d8cd <+0x3a1>
0841d8c3 +0x397:  mov    $0x0,%ebx
0841d8c8 +0x39c:  jmp    0841dc5c <+0x730>
0841d8cd +0x3a1:  lea    -0x1a3(%ebp),%eax
0841d8d3 +0x3a7:  add    $0x129,%eax
0841d8d8 +0x3ac:  mov    %eax,0x8(%esp)
0841d8dc +0x3b0:  movl   $0x5,0x4(%esp)
0841d8e4 +0x3b8:  mov    0xc(%ebp),%eax
0841d8e7 +0x3bb:  mov    %eax,(%esp)
0841d8ea +0x3be:  call   080fddec <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x118>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x118
0841d8ef +0x3c3:  xor    $0x1,%eax
0841d8f2 +0x3c6:  test   %al,%al
0841d8f4 +0x3c8:  je     0841d900 <+0x3d4>
0841d8f6 +0x3ca:  mov    $0x0,%ebx
0841d8fb +0x3cf:  jmp    0841dc5c <+0x730>
0841d900 +0x3d4:  movzwl -0x7a(%ebp),%eax
0841d904 +0x3d8:  cwtl
0841d905 +0x3d9:  cmp    $0x1,%eax
0841d908 +0x3dc:  jl     0841d979 <+0x44d>
0841d90a +0x3de:  cmp    $0x2,%eax
0841d90d +0x3e1:  jle    0841d916 <+0x3ea>
0841d90f +0x3e3:  cmp    $0x3,%eax
0841d912 +0x3e6:  je     0841d960 <+0x434>
0841d914 +0x3e8:  jmp    0841d979 <+0x44d>
0841d916 +0x3ea:  mov    -0x1a3(%ebp),%eax
0841d91c +0x3f0:  mov    %eax,0x4(%esp)
0841d920 +0x3f4:  mov    0x1c(%ebp),%eax
0841d923 +0x3f7:  mov    %eax,(%esp)
0841d926 +0x3fa:  call   0841ccb6 <_Z17IsContainedLetterP16SIG_MAILBOX_LISTi>  ; IsContainedLetter(SIG_MAILBOX_LIST*, int)
0841d92b +0x3ff:  test   %al,%al
0841d92d +0x401:  je     0841d946 <+0x41a>
0841d92f +0x403:  lea    -0x1a3(%ebp),%eax
0841d935 +0x409:  mov    %eax,0x4(%esp)
0841d939 +0x40d:  lea    -0x78(%ebp),%eax
0841d93c +0x410:  mov    %eax,(%esp)
0841d93f +0x413:  call   0845185c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4472>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4472
0841d944 +0x418:  jmp    0841d979 <+0x44d>
0841d946 +0x41a:  lea    -0x1a3(%ebp),%eax
0841d94c +0x420:  mov    %eax,0x4(%esp)
0841d950 +0x424:  lea    -0x78(%ebp),%eax
0841d953 +0x427:  add    $0xc,%eax
0841d956 +0x42a:  mov    %eax,(%esp)
0841d959 +0x42d:  call   0845185c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4472>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4472
0841d95e +0x432:  jmp    0841d979 <+0x44d>
0841d960 +0x434:  lea    -0x1a3(%ebp),%eax
0841d966 +0x43a:  mov    %eax,0x4(%esp)
0841d96a +0x43e:  lea    -0x78(%ebp),%eax
0841d96d +0x441:  add    $0x18,%eax
0841d970 +0x444:  mov    %eax,(%esp)
0841d973 +0x447:  call   0845185c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4472>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4472
0841d978 +0x44c:  nop
0841d979 +0x44d:  addl   $0x1,-0x28(%ebp)
0841d97d +0x451:  mov    0x1c(%ebp),%eax
0841d980 +0x454:  mov    0x1018(%eax),%eax
0841d986 +0x45a:  cmp    -0x28(%ebp),%eax
0841d989 +0x45d:  setg   %al
0841d98c +0x460:  test   %al,%al
0841d98e +0x462:  jne    0841d750 <+0x224>
0841d994 +0x468:  jmp    0841d997 <+0x46b>
0841d996 +0x46a:  nop
0841d997 +0x46b:  lea    -0x78(%ebp),%eax
0841d99a +0x46e:  add    $0xc,%eax
0841d99d +0x471:  mov    %eax,(%esp)
0841d9a0 +0x474:  call   08451680 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4296>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4296
0841d9a5 +0x479:  mov    %eax,%ebx
0841d9a7 +0x47b:  lea    -0x78(%ebp),%eax
0841d9aa +0x47e:  mov    %eax,(%esp)
0841d9ad +0x481:  call   08451680 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4296>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4296
0841d9b2 +0x486:  lea    (%ebx,%eax,1),%edx
0841d9b5 +0x489:  mov    0x1c(%ebp),%eax
0841d9b8 +0x48c:  mov    0x3326(%eax),%eax
0841d9be +0x492:  mov    %edx,%ecx
0841d9c0 +0x494:  sub    %eax,%ecx
0841d9c2 +0x496:  mov    %ecx,%eax
0841d9c4 +0x498:  mov    %eax,-0x34(%ebp)
0841d9c7 +0x49b:  cmpl   $0x0,-0x34(%ebp)
0841d9cb +0x49f:  jle    0841da1b <+0x4ef>
0841d9cd +0x4a1:  lea    -0x78(%ebp),%eax
0841d9d0 +0x4a4:  mov    %eax,0xc(%esp)
0841d9d4 +0x4a8:  mov    -0x34(%ebp),%eax
0841d9d7 +0x4ab:  mov    %eax,0x8(%esp)
0841d9db +0x4af:  lea    -0x78(%ebp),%eax
0841d9de +0x4b2:  add    $0xc,%eax
0841d9e1 +0x4b5:  mov    %eax,0x4(%esp)
0841d9e5 +0x4b9:  mov    0x1c(%ebp),%eax
0841d9e8 +0x4bc:  mov    %eax,(%esp)
0841d9eb +0x4bf:  call   0841d16d <_Z25ArrangeMailAndLetterIndexP16SIG_MAILBOX_LISTRSt6vectorI15SIG_LETTER_INFOSaIS2_EEiS5_>  ; ArrangeMailAndLetterIndex(SIG_MAILBOX_LIST*, std::vector<SIG_LETTER_INFO, std::allocator<SIG_LETTER_INFO> >&, int, std::vector<SIG_LETTER_INFO, std::allocator<SIG_LETTER_INFO> >&)
0841d9f0 +0x4c4:  mov    0x1c(%ebp),%eax
0841d9f3 +0x4c7:  mov    0x794(%eax),%eax
0841d9f9 +0x4cd:  test   %eax,%eax
0841d9fb +0x4cf:  je     0841da1b <+0x4ef>
0841d9fd +0x4d1:  mov    0x1c(%ebp),%eax
0841da00 +0x4d4:  mov    0x794(%eax),%eax
0841da06 +0x4da:  lea    -0x1(%eax),%edx
0841da09 +0x4dd:  mov    0x1c(%ebp),%eax
0841da0c +0x4e0:  imul   $0x61,%edx,%edx
0841da0f +0x4e3:  mov    (%edx,%eax,1),%edx
0841da12 +0x4e6:  mov    0x1c(%ebp),%eax
0841da15 +0x4e9:  mov    %edx,0x79c(%eax)
0841da1b +0x4ef:  movl   $0x0,-0x30(%ebp)
0841da22 +0x4f6:  mov    0x1c(%ebp),%eax
0841da25 +0x4f9:  mov    0x1018(%eax),%eax
0841da2b +0x4ff:  test   %eax,%eax
0841da2d +0x501:  je     0841dadb <+0x5af>
0841da33 +0x507:  movl   $0x0,-0x24(%ebp)
0841da3a +0x50e:  jmp    0841da61 <+0x535>
0841da3c +0x510:  mov    -0x24(%ebp),%ebx
0841da3f +0x513:  mov    -0x24(%ebp),%edx
0841da42 +0x516:  lea    -0x78(%ebp),%ecx
0841da45 +0x519:  mov    %edx,%eax
0841da47 +0x51b:  add    %eax,%eax
0841da49 +0x51d:  add    %edx,%eax
0841da4b +0x51f:  shl    $0x2,%eax
0841da4e +0x522:  lea    (%ecx,%eax,1),%eax
0841da51 +0x525:  mov    %eax,(%esp)
0841da54 +0x528:  call   08451680 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4296>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4296
0841da59 +0x52d:  mov    %eax,-0x54(%ebp,%ebx,4)
0841da5d +0x531:  addl   $0x1,-0x24(%ebp)
0841da61 +0x535:  cmpl   $0x2,-0x24(%ebp)
0841da65 +0x539:  setle  %al
0841da68 +0x53c:  test   %al,%al
0841da6a +0x53e:  jne    0841da3c <+0x510>
0841da6c +0x540:  mov    -0x54(%ebp),%edx
0841da6f +0x543:  mov    0x1c(%ebp),%eax
0841da72 +0x546:  mov    0x3326(%eax),%eax
0841da78 +0x54c:  cmp    %eax,%edx
0841da7a +0x54e:  jle    0841da88 <+0x55c>
0841da7c +0x550:  mov    0x1c(%ebp),%eax
0841da7f +0x553:  mov    0x3326(%eax),%eax
0841da85 +0x559:  mov    %eax,-0x54(%ebp)
0841da88 +0x55c:  mov    0x1c(%ebp),%eax
0841da8b +0x55f:  mov    0x794(%eax),%edx
0841da91 +0x565:  mov    -0x50(%ebp),%eax
0841da94 +0x568:  add    %eax,%edx
0841da96 +0x56a:  mov    0x1c(%ebp),%eax
0841da99 +0x56d:  mov    0x3326(%eax),%eax
0841da9f +0x573:  cmp    %eax,%edx
0841daa1 +0x575:  jle    0841dacc <+0x5a0>
0841daa3 +0x577:  mov    0x1c(%ebp),%eax
0841daa6 +0x57a:  mov    0x794(%eax),%edx
0841daac +0x580:  mov    -0x50(%ebp),%eax
0841daaf +0x583:  add    %eax,%edx
0841dab1 +0x585:  mov    0x1c(%ebp),%eax
0841dab4 +0x588:  mov    0x3326(%eax),%eax
0841daba +0x58e:  mov    %edx,%esi
0841dabc +0x590:  sub    %eax,%esi
0841dabe +0x592:  mov    %esi,%eax
0841dac0 +0x594:  mov    %eax,-0x30(%ebp)
0841dac3 +0x597:  mov    -0x50(%ebp),%eax
0841dac6 +0x59a:  sub    -0x30(%ebp),%eax
0841dac9 +0x59d:  mov    %eax,-0x50(%ebp)
0841dacc +0x5a0:  mov    -0x4c(%ebp),%eax
0841dacf +0x5a3:  cmp    $0xa,%eax
0841dad2 +0x5a6:  jle    0841dadb <+0x5af>
0841dad4 +0x5a8:  movl   $0xa,-0x4c(%ebp)
0841dadb +0x5af:  movl   $0x0,-0x2c(%ebp)
0841dae2 +0x5b6:  movl   $0x0,-0x20(%ebp)
0841dae9 +0x5bd:  jmp    0841dbbf <+0x693>
0841daee +0x5c2:  movl   $0x0,-0x1c(%ebp)
0841daf5 +0x5c9:  jmp    0841dba6 <+0x67a>
0841dafa +0x5ce:  mov    -0x2c(%ebp),%ebx
0841dafd +0x5d1:  mov    -0x1c(%ebp),%ecx
0841db00 +0x5d4:  mov    -0x20(%ebp),%edx
0841db03 +0x5d7:  lea    -0x78(%ebp),%esi
0841db06 +0x5da:  mov    %edx,%eax
0841db08 +0x5dc:  add    %eax,%eax
0841db0a +0x5de:  add    %edx,%eax
0841db0c +0x5e0:  shl    $0x2,%eax
0841db0f +0x5e3:  lea    (%esi,%eax,1),%eax
0841db12 +0x5e6:  mov    %ecx,0x4(%esp)
0841db16 +0x5ea:  mov    %eax,(%esp)
0841db19 +0x5ed:  call   084518d2 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x44e8>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x44e8
0841db1e +0x5f2:  mov    %eax,%edx
0841db20 +0x5f4:  mov    0x1c(%ebp),%ecx
0841db23 +0x5f7:  imul   $0x12b,%ebx,%eax
0841db29 +0x5fd:  lea    (%ecx,%eax,1),%eax
0841db2c +0x600:  add    $0x1010,%eax
0841db31 +0x605:  add    $0xc,%eax
0841db34 +0x608:  mov    $0x12b,%ebx
0841db39 +0x60d:  mov    %eax,%ecx
0841db3b +0x60f:  and    $0x1,%ecx
0841db3e +0x612:  test   %ecx,%ecx
0841db40 +0x614:  je     0841db50 <+0x624>
0841db42 +0x616:  movzbl (%edx),%ecx
0841db45 +0x619:  mov    %cl,(%eax)
0841db47 +0x61b:  add    $0x1,%eax
0841db4a +0x61e:  add    $0x1,%edx
0841db4d +0x621:  sub    $0x1,%ebx
0841db50 +0x624:  mov    %eax,%ecx
0841db52 +0x626:  and    $0x2,%ecx
0841db55 +0x629:  test   %ecx,%ecx
0841db57 +0x62b:  je     0841db68 <+0x63c>
0841db59 +0x62d:  movzwl (%edx),%ecx
0841db5c +0x630:  mov    %cx,(%eax)
0841db5f +0x633:  add    $0x2,%eax
0841db62 +0x636:  add    $0x2,%edx
0841db65 +0x639:  sub    $0x2,%ebx
0841db68 +0x63c:  mov    %ebx,%ecx
0841db6a +0x63e:  shr    $0x2,%ecx
0841db6d +0x641:  mov    %eax,%edi
0841db6f +0x643:  mov    %edx,%esi
0841db71 +0x645:  rep movsl %ds:(%esi),%es:(%edi)
0841db73 +0x647:  mov    %esi,%edx
0841db75 +0x649:  mov    %edi,%eax
0841db77 +0x64b:  mov    $0x0,%ecx
0841db7c +0x650:  mov    %ebx,%esi
0841db7e +0x652:  and    $0x2,%esi
0841db81 +0x655:  test   %esi,%esi
0841db83 +0x657:  je     0841db90 <+0x664>
0841db85 +0x659:  movzwl (%edx,%ecx,1),%esi
0841db89 +0x65d:  mov    %si,(%eax,%ecx,1)
0841db8d +0x661:  add    $0x2,%ecx
0841db90 +0x664:  and    $0x1,%ebx
0841db93 +0x667:  test   %ebx,%ebx
0841db95 +0x669:  je     0841db9e <+0x672>
0841db97 +0x66b:  movzbl (%edx,%ecx,1),%edx
0841db9b +0x66f:  mov    %dl,(%eax,%ecx,1)
0841db9e +0x672:  addl   $0x1,-0x2c(%ebp)
0841dba2 +0x676:  addl   $0x1,-0x1c(%ebp)
0841dba6 +0x67a:  mov    -0x20(%ebp),%eax
0841dba9 +0x67d:  mov    -0x54(%ebp,%eax,4),%eax
0841dbad +0x681:  cmp    -0x1c(%ebp),%eax
0841dbb0 +0x684:  setg   %al
0841dbb3 +0x687:  test   %al,%al
0841dbb5 +0x689:  jne    0841dafa <+0x5ce>
0841dbbb +0x68f:  addl   $0x1,-0x20(%ebp)
0841dbbf +0x693:  cmpl   $0x2,-0x20(%ebp)
0841dbc3 +0x697:  setle  %al
0841dbc6 +0x69a:  test   %al,%al
0841dbc8 +0x69c:  jne    0841daee <+0x5c2>
0841dbce +0x6a2:  mov    -0x50(%ebp),%edx
0841dbd1 +0x6a5:  mov    0x1c(%ebp),%eax
0841dbd4 +0x6a8:  mov    %edx,0x332a(%eax)
0841dbda +0x6ae:  mov    0x1c(%ebp),%eax
0841dbdd +0x6b1:  mov    0x798(%eax),%ebx
0841dbe3 +0x6b7:  movl   $0x0,-0x48(%ebp)
0841dbea +0x6be:  mov    0x1c(%ebp),%eax
0841dbed +0x6c1:  mov    0x332e(%eax),%eax
0841dbf3 +0x6c7:  mov    -0x30(%ebp),%edx
0841dbf6 +0x6ca:  mov    %edx,%ecx
0841dbf8 +0x6cc:  sub    %eax,%ecx
0841dbfa +0x6ce:  mov    %ecx,%eax
0841dbfc +0x6d0:  mov    %eax,-0x44(%ebp)
0841dbff +0x6d3:  lea    -0x48(%ebp),%eax
0841dc02 +0x6d6:  mov    %eax,0x4(%esp)
0841dc06 +0x6da:  lea    -0x44(%ebp),%eax
0841dc09 +0x6dd:  mov    %eax,(%esp)
0841dc0c +0x6e0:  call   0808e218 <_GLOBAL__I_ACTIVESTATUS_MAXLEVEL+0x88>  ; global constructors keyed to ACTIVESTATUS_MAXLEVEL+0x88
0841dc11 +0x6e5:  mov    (%eax),%eax
0841dc13 +0x6e7:  lea    (%ebx,%eax,1),%edx
0841dc16 +0x6ea:  mov    0x1c(%ebp),%eax
0841dc19 +0x6ed:  mov    %edx,0x798(%eax)
0841dc1f +0x6f3:  mov    0x1c(%ebp),%eax
0841dc22 +0x6f6:  mov    -0x2c(%ebp),%edx
0841dc25 +0x6f9:  mov    %edx,0x1018(%eax)
0841dc2b +0x6ff:  mov    $0x1,%ebx
0841dc30 +0x704:  jmp    0841dc5c <+0x730>
0841dc32 +0x706:  mov    %edx,%esi
0841dc34 +0x708:  mov    %eax,%edi
0841dc36 +0x70a:  lea    -0x78(%ebp),%eax
0841dc39 +0x70d:  lea    0x24(%eax),%ebx
0841dc3c +0x710:  lea    -0x78(%ebp),%eax
0841dc3f +0x713:  cmp    %eax,%ebx
0841dc41 +0x715:  je     0841dc50 <+0x724>
0841dc43 +0x717:  sub    $0xc,%ebx
0841dc46 +0x71a:  mov    %ebx,(%esp)
0841dc49 +0x71d:  call   084517fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4414>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4414
0841dc4e +0x722:  jmp    0841dc3c <+0x710>
0841dc50 +0x724:  mov    %edi,%eax
0841dc52 +0x726:  mov    %esi,%edx
0841dc54 +0x728:  mov    %eax,(%esp)
0841dc57 +0x72b:  call   08ae3750 <_Unwind_Resume>
0841dc5c +0x730:  lea    -0x78(%ebp),%eax
0841dc5f +0x733:  lea    0x24(%eax),%esi
0841dc62 +0x736:  lea    -0x78(%ebp),%eax
0841dc65 +0x739:  cmp    %eax,%esi
0841dc67 +0x73b:  je     0841dc76 <+0x74a>
0841dc69 +0x73d:  sub    $0xc,%esi
0841dc6c +0x740:  mov    %esi,(%esp)
0841dc6f +0x743:  call   084517fe <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4414>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4414
0841dc74 +0x748:  jmp    0841dc62 <+0x736>
0841dc76 +0x74a:  mov    %ebx,%eax
0841dc78 +0x74c:  add    $0x1cc,%esp
0841dc7e +0x752:  pop    %ebx
0841dc7f +0x753:  pop    %esi
0841dc80 +0x754:  pop    %edi
0841dc81 +0x755:  pop    %ebp
0841dc82 +0x756:  ret
0841dc83 +0x757:  nop
```

## 反编译 C

```c
// DB_MailBox_Req_List::SelectLetter @ 0x841d52c

/* DB_MailBox_Req_List::SelectLetter(MySQL*, int, int, unsigned int, SIG_MAILBOX_LIST*) */

undefined4 __thiscall
DB_MailBox_Req_List::SelectLetter
          (DB_MailBox_Req_List *this,MySQL *param_1,int param_2,int param_3,uint param_4,
          SIG_MAILBOX_LIST *param_5)

{
  char cVar1;
  int iVar2;
  SIG_MAILBOX_LIST *pSVar3;
  SIG_MAILBOX_LIST *pSVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> *pvVar10;
  bool bVar11;
  byte bVar12;
  uint local_1a7;
  int iStack_1a3;
  char acStack_19f [29];
  char acStack_182 [256];
  int iStack_82;
  short local_7e;
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> local_7c [12];
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> avStack_70 [12];
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> avStack_64 [12];
  int local_58 [5];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar12 = 0;
  memset(param_5 + 0x101c,0,0x230a);
  if (param_4 == 0) {
    MySQL::set_query(param_1,
                     "deLete from letter where charac_no=%d and reg_date<subdate(now(),interval %d day) and stat=%d"
                     ,param_3,0xf,2);
    local_44 = MySQL::exec(param_1,true);
    local_44 = local_44 & 0xff;
    if (local_44 == 0) {
      return 0;
    }
    MySQL::set_query(param_1,
                     "deLete from letter where charac_no=%d and reg_date<subdate(now(),interval %d day) and stat=%d"
                     ,param_3,0xf,1);
    local_44 = MySQL::exec(param_1,true);
    local_44 = local_44 & 0xff;
    if (local_44 == 0) {
      return 0;
    }
    MySQL::set_query(param_1,
                     "seLect letter_id,send_charac_no,send_charac_name,letter_text,unix_timestamp(reg_date),stat from letter where (charac_no=%d and stat = 3) or (charac_no=%d and reg_date>subdate(now(),interval %d day)) order by letter_id"
                     ,param_3,param_3,0xf);
  }
  else {
    MySQL::set_query(param_1,
                     "seLect letter_id,send_charac_no,send_charac_name,letter_text,unix_timestamp(reg_date),stat from letter where (charac_no=%d and stat = 3) or (charac_no=%d and letter_id > %d and reg_date>subdate(now(),interval %d day)) order by letter_id"
                     ,param_3,param_3,param_4,0xf);
  }
  local_44 = MySQL::exec(param_1,true);
  local_44 = local_44 & 0xff;
  if (local_44 == 0) {
    uVar7 = 0;
  }
  else {
    local_40 = *(int *)(param_5 + 0x794);
    local_3c = *(int *)(param_5 + 0x1018);
    *(undefined4 *)(param_5 + 0x1018) = 0;
    uVar7 = MySQL::get_n_rows(param_1);
    *(undefined4 *)(param_5 + 0x1018) = uVar7;
    pvVar10 = local_7c;
    for (iVar9 = 2; iVar9 != -1; iVar9 = iVar9 + -1) {
                    /* try { // try from 0841d6d6 to 0841d6da has its CatchHandler @ 0841d6ed */
      std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::vector(pvVar10);
      pvVar10 = pvVar10 + 0xc;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    for (local_2c = 0; local_2c < *(int *)(param_5 + 0x1018); local_2c = local_2c + 1) {
      if ((((param_4 == 0) || (local_40 < local_3c)) || (*(int *)(param_5 + 0x798) == 0)) ||
         (iVar9 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size(local_7c),
         iVar9 < local_3c)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) break;
                    /* try { // try from 0841d795 to 0841db1d has its CatchHandler @ 0841dc32 */
      cVar1 = MySQL::fetch(param_1);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      memset(&local_1a7,0,299);
      cVar1 = MySQL::get_uint(param_1,0,&local_1a7);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_int(param_1,1,&iStack_1a3);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_str(param_1,2,acStack_19f,0x1d);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_str(param_1,3,acStack_182,0x100);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_int(param_1,4,&iStack_82);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_short(param_1,5,&local_7e);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      if (0 < local_7e) {
        if (local_7e < 3) {
          cVar1 = IsContainedLetter(param_5,local_1a7);
          if (cVar1 == '\0') {
            std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::push_back
                      (avStack_70,(SIG_LETTER_INFO *)&local_1a7);
          }
          else {
            std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::push_back
                      (local_7c,(SIG_LETTER_INFO *)&local_1a7);
          }
        }
        else if (local_7e == 3) {
          std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::push_back
                    (avStack_64,(SIG_LETTER_INFO *)&local_1a7);
        }
      }
    }
    iVar9 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size(avStack_70);
    iVar2 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size(local_7c);
    local_38 = (iVar9 + iVar2) - *(int *)(param_5 + 0x3326);
    if ((0 < local_38) &&
       (ArrangeMailAndLetterIndex(param_5,(vector *)avStack_70,local_38,(vector *)local_7c),
       *(int *)(param_5 + 0x794) != 0)) {
      *(undefined4 *)(param_5 + 0x79c) =
           *(undefined4 *)(param_5 + (*(int *)(param_5 + 0x794) + -1) * 0x61);
    }
    local_34 = 0;
    if (*(int *)(param_5 + 0x1018) != 0) {
      for (local_28 = 0; iVar9 = local_28, local_28 < 3; local_28 = local_28 + 1) {
        iVar2 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size
                          (local_7c + local_28 * 0xc);
        local_58[iVar9] = iVar2;
      }
      if (*(int *)(param_5 + 0x3326) < local_58[0]) {
        local_58[0] = *(int *)(param_5 + 0x3326);
      }
      if (*(int *)(param_5 + 0x3326) < *(int *)(param_5 + 0x794) + local_58[1]) {
        local_34 = (*(int *)(param_5 + 0x794) + local_58[1]) - *(int *)(param_5 + 0x3326);
        local_58[1] = local_58[1] - local_34;
      }
      if (10 < local_58[2]) {
        local_58[2] = 10;
      }
    }
    local_30 = 0;
    for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
      for (local_20 = 0; iVar9 = local_30, (int)local_20 < local_58[local_24];
          local_20 = local_20 + 1) {
        pSVar3 = (SIG_MAILBOX_LIST *)
                 std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::at
                           (local_7c + local_24 * 0xc,local_20);
        pSVar4 = param_5 + iVar9 * 299 + 0x101c;
        uVar8 = 299;
        bVar11 = ((uint)pSVar4 & 1) != 0;
        if (bVar11) {
          *pSVar4 = *pSVar3;
          pSVar4 = param_5 + iVar9 * 299 + 0x101d;
          pSVar3 = pSVar3 + 1;
          uVar8 = 0x12a;
        }
        if (((uint)pSVar4 & 2) != 0) {
          *(undefined2 *)pSVar4 = *(undefined2 *)pSVar3;
          pSVar4 = pSVar4 + 2;
          pSVar3 = pSVar3 + 2;
          uVar8 = uVar8 - 2;
        }
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pSVar4 = *(undefined4 *)pSVar3;
          pSVar3 = pSVar3 + (uint)bVar12 * -8 + 4;
          pSVar4 = pSVar4 + (uint)bVar12 * -8 + 4;
        }
        iVar9 = 0;
        if ((uVar8 & 2) != 0) {
          *(undefined2 *)pSVar4 = *(undefined2 *)pSVar3;
          iVar9 = 2;
        }
        if (!bVar11) {
          pSVar4[iVar9] = pSVar3[iVar9];
        }
        local_30 = local_30 + 1;
      }
    }
    *(int *)(param_5 + 0x332a) = local_58[1];
    iVar9 = *(int *)(param_5 + 0x798);
    local_58[3] = 0;
    local_58[4] = local_34 - *(int *)(param_5 + 0x332e);
    piVar5 = std::max<int>(local_58 + 4,local_58 + 3);
    *(int *)(param_5 + 0x798) = iVar9 + *piVar5;
    *(int *)(param_5 + 0x1018) = local_30;
    uVar7 = 1;
LAB_0841dc5c:
    pvVar10 = (vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> *)local_58;
    while (pvVar10 != local_7c) {
      pvVar10 = pvVar10 + -0xc;
      std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::~vector(pvVar10);
    }
  }
  return uVar7;
}
```
