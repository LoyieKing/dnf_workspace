# GetUserSkill

`_ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC`

`DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x084075d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084075d2  _ZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETC
#           DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)
# range [0x084075d2, 0x08407db3]
084075d2 +0x000:  push   %ebp
084075d3 +0x001:  mov    %esp,%ebp
084075d5 +0x003:  push   %ebx
084075d6 +0x004:  sub    $0xd4,%esp
084075dc +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084075e1 +0x00f:  movl   $0x0,0x8(%esp)
084075e9 +0x017:  movl   $0x3,0x4(%esp)
084075f1 +0x01f:  mov    %eax,(%esp)
084075f4 +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084075f9 +0x027:  mov    %eax,-0x14(%ebp)
084075fc +0x02a:  mov    0xc(%ebp),%eax
084075ff +0x02d:  mov    0x4(%eax),%ebx
08407602 +0x030:  movl   $0x0,(%esp)
08407609 +0x037:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
0840760e +0x03c:  mov    %ebx,0xc(%esp)
08407612 +0x040:  mov    %eax,0x8(%esp)
08407616 +0x044:  movl   $"seLect remain_sp,skill_slot,remain_sp_2nd, skill_slot_2nd, remain_sfp_1st, remain_sfp_2nd, skill_command, skill_slot_lethe, lethe_flag, skill_slot_lethe_2nd, lethe_flag_2nd,script_version from %s where charac_no=%u",0x4(%esp)
0840761e +0x04c:  mov    -0x14(%ebp),%eax
08407621 +0x04f:  mov    %eax,(%esp)
08407624 +0x052:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08407629 +0x057:  movl   $0x1,0x4(%esp)
08407631 +0x05f:  mov    -0x14(%ebp),%eax
08407634 +0x062:  mov    %eax,(%esp)
08407637 +0x065:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840763c +0x06a:  mov    %al,-0x15(%ebp)
0840763f +0x06d:  movzbl -0x15(%ebp),%eax
08407643 +0x071:  xor    $0x1,%eax
08407646 +0x074:  test   %al,%al
08407648 +0x076:  je     0840769a <+0xc8>
0840764a +0x078:  mov    0xc(%ebp),%eax
0840764d +0x07b:  mov    0x4(%eax),%ebx
08407650 +0x07e:  movl   $0x5,0xc(%esp)
08407658 +0x086:  movl   $0x1d50,0x8(%esp)
08407660 +0x08e:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08407668 +0x096:  lea    -0xa8(%ebp),%eax
0840766e +0x09c:  mov    %eax,(%esp)
08407671 +0x09f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407676 +0x0a4:  mov    %ebx,0x8(%esp)
0840767a +0x0a8:  movl   $"DB_LoadSkill::GetUserSkill, exec() ERROR charac_no=%u",0x4(%esp)
08407682 +0x0b0:  lea    -0xa8(%ebp),%eax
08407688 +0x0b6:  mov    %eax,(%esp)
0840768b +0x0b9:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407690 +0x0be:  mov    $0x0,%eax
08407695 +0x0c3:  jmp    08407daa <+0x7d8>
0840769a +0x0c8:  mov    -0x14(%ebp),%eax
0840769d +0x0cb:  mov    %eax,(%esp)
084076a0 +0x0ce:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084076a5 +0x0d3:  test   %eax,%eax
084076a7 +0x0d5:  jne    084076c1 <+0xef>
084076a9 +0x0d7:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084076ae +0x0dc:  mov    %eax,(%esp)
084076b1 +0x0df:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
084076b6 +0x0e4:  test   %al,%al
084076b8 +0x0e6:  je     084076c1 <+0xef>
084076ba +0x0e8:  mov    $0x1,%eax
084076bf +0x0ed:  jmp    084076c6 <+0xf4>
084076c1 +0x0ef:  mov    $0x0,%eax
084076c6 +0x0f4:  test   %al,%al
084076c8 +0x0f6:  je     08407780 <+0x1ae>
084076ce +0x0fc:  mov    0xc(%ebp),%eax
084076d1 +0x0ff:  mov    0x4(%eax),%ebx
084076d4 +0x102:  movl   $0x0,(%esp)
084076db +0x109:  call   083fbdc6 <_Z20get_skill_table_nameb>  ; get_skill_table_name(bool)
084076e0 +0x10e:  mov    %ebx,0xc(%esp)
084076e4 +0x112:  mov    %eax,0x8(%esp)
084076e8 +0x116:  movl   $"inSert into %s (charac_no) values(%u)",0x4(%esp)
084076f0 +0x11e:  mov    -0x14(%ebp),%eax
084076f3 +0x121:  mov    %eax,(%esp)
084076f6 +0x124:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084076fb +0x129:  movl   $0x1,0x4(%esp)
08407703 +0x131:  mov    -0x14(%ebp),%eax
08407706 +0x134:  mov    %eax,(%esp)
08407709 +0x137:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840770e +0x13c:  mov    %al,-0x15(%ebp)
08407711 +0x13f:  movzbl -0x15(%ebp),%eax
08407715 +0x143:  xor    $0x1,%eax
08407718 +0x146:  test   %al,%al
0840771a +0x148:  je     0840776c <+0x19a>
0840771c +0x14a:  mov    0xc(%ebp),%eax
0840771f +0x14d:  mov    0x4(%eax),%ebx
08407722 +0x150:  movl   $0x5,0xc(%esp)
0840772a +0x158:  movl   $0x1d5d,0x8(%esp)
08407732 +0x160:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840773a +0x168:  lea    -0x98(%ebp),%eax
08407740 +0x16e:  mov    %eax,(%esp)
08407743 +0x171:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407748 +0x176:  mov    %ebx,0x8(%esp)
0840774c +0x17a:  movl   $"DB_LoadSkill::GetUserSkill insert, exec() ERROR charac_no=%u",0x4(%esp)
08407754 +0x182:  lea    -0x98(%ebp),%eax
0840775a +0x188:  mov    %eax,(%esp)
0840775d +0x18b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407762 +0x190:  mov    $0x0,%eax
08407767 +0x195:  jmp    08407daa <+0x7d8>
0840776c +0x19a:  mov    0xc(%ebp),%eax
0840776f +0x19d:  movb   $0x1,0xcdd4(%eax)
08407776 +0x1a4:  mov    $0x1,%eax
0840777b +0x1a9:  jmp    08407daa <+0x7d8>
08407780 +0x1ae:  mov    -0x14(%ebp),%eax
08407783 +0x1b1:  mov    %eax,(%esp)
08407786 +0x1b4:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840778b +0x1b9:  mov    %al,-0x15(%ebp)
0840778e +0x1bc:  movzbl -0x15(%ebp),%eax
08407792 +0x1c0:  xor    $0x1,%eax
08407795 +0x1c3:  test   %al,%al
08407797 +0x1c5:  je     084077e9 <+0x217>
08407799 +0x1c7:  mov    0xc(%ebp),%eax
0840779c +0x1ca:  mov    0x4(%eax),%ebx
0840779f +0x1cd:  movl   $0x5,0xc(%esp)
084077a7 +0x1d5:  movl   $0x1d69,0x8(%esp)
084077af +0x1dd:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084077b7 +0x1e5:  lea    -0x88(%ebp),%eax
084077bd +0x1eb:  mov    %eax,(%esp)
084077c0 +0x1ee:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084077c5 +0x1f3:  mov    %ebx,0x8(%esp)
084077c9 +0x1f7:  movl   $"DB_LoadSkill::GetUserSkill, fetch() ERROR charac_no=%u",0x4(%esp)
084077d1 +0x1ff:  lea    -0x88(%ebp),%eax
084077d7 +0x205:  mov    %eax,(%esp)
084077da +0x208:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084077df +0x20d:  mov    $0x0,%eax
084077e4 +0x212:  jmp    08407daa <+0x7d8>
084077e9 +0x217:  movl   $0x0,-0x10(%ebp)
084077f0 +0x21e:  mov    0xc(%ebp),%eax
084077f3 +0x221:  lea    0xc9c8(%eax),%edx
084077f9 +0x227:  mov    -0x10(%ebp),%eax
084077fc +0x22a:  addl   $0x1,-0x10(%ebp)
08407800 +0x22e:  mov    %edx,0x8(%esp)
08407804 +0x232:  mov    %eax,0x4(%esp)
08407808 +0x236:  mov    -0x14(%ebp),%eax
0840780b +0x239:  mov    %eax,(%esp)
0840780e +0x23c:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08407813 +0x241:  mov    %al,-0x15(%ebp)
08407816 +0x244:  movzbl -0x15(%ebp),%eax
0840781a +0x248:  xor    $0x1,%eax
0840781d +0x24b:  test   %al,%al
0840781f +0x24d:  je     0840786b <+0x299>
08407821 +0x24f:  mov    0xc(%ebp),%eax
08407824 +0x252:  mov    0x4(%eax),%ebx
08407827 +0x255:  movl   $0x5,0xc(%esp)
0840782f +0x25d:  movl   $0x1d71,0x8(%esp)
08407837 +0x265:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
0840783f +0x26d:  lea    -0x78(%ebp),%eax
08407842 +0x270:  mov    %eax,(%esp)
08407845 +0x273:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840784a +0x278:  mov    %ebx,0x8(%esp)
0840784e +0x27c:  movl   $"DB_LoadSkill::GetUserSkill, get(0) ERROR charac_no=%u",0x4(%esp)
08407856 +0x284:  lea    -0x78(%ebp),%eax
08407859 +0x287:  mov    %eax,(%esp)
0840785c +0x28a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407861 +0x28f:  mov    $0x0,%eax
08407866 +0x294:  jmp    08407daa <+0x7d8>
0840786b +0x299:  mov    0xc(%ebp),%eax
0840786e +0x29c:  add    $0xc9cc,%eax
08407873 +0x2a1:  mov    %eax,%edx
08407875 +0x2a3:  mov    -0x10(%ebp),%eax
08407878 +0x2a6:  addl   $0x1,-0x10(%ebp)
0840787c +0x2aa:  movl   $0x2,0x10(%esp)
08407884 +0x2b2:  movl   $0x198,0xc(%esp)
0840788c +0x2ba:  mov    %edx,0x8(%esp)
08407890 +0x2be:  mov    %eax,0x4(%esp)
08407894 +0x2c2:  mov    -0x14(%ebp),%eax
08407897 +0x2c5:  mov    %eax,(%esp)
0840789a +0x2c8:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0840789f +0x2cd:  xor    $0x1,%eax
084078a2 +0x2d0:  test   %al,%al
084078a4 +0x2d2:  je     084078b0 <+0x2de>
084078a6 +0x2d4:  mov    $0x0,%eax
084078ab +0x2d9:  jmp    08407daa <+0x7d8>
084078b0 +0x2de:  mov    0xc(%ebp),%eax
084078b3 +0x2e1:  lea    0xcb64(%eax),%edx
084078b9 +0x2e7:  mov    -0x10(%ebp),%eax
084078bc +0x2ea:  addl   $0x1,-0x10(%ebp)
084078c0 +0x2ee:  mov    %edx,0x8(%esp)
084078c4 +0x2f2:  mov    %eax,0x4(%esp)
084078c8 +0x2f6:  mov    -0x14(%ebp),%eax
084078cb +0x2f9:  mov    %eax,(%esp)
084078ce +0x2fc:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084078d3 +0x301:  mov    %al,-0x15(%ebp)
084078d6 +0x304:  movzbl -0x15(%ebp),%eax
084078da +0x308:  xor    $0x1,%eax
084078dd +0x30b:  test   %al,%al
084078df +0x30d:  je     0840792b <+0x359>
084078e1 +0x30f:  mov    0xc(%ebp),%eax
084078e4 +0x312:  mov    0x4(%eax),%ebx
084078e7 +0x315:  movl   $0x5,0xc(%esp)
084078ef +0x31d:  movl   $0x1d98,0x8(%esp)
084078f7 +0x325:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084078ff +0x32d:  lea    -0x68(%ebp),%eax
08407902 +0x330:  mov    %eax,(%esp)
08407905 +0x333:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0840790a +0x338:  mov    %ebx,0x8(%esp)
0840790e +0x33c:  movl   $"DB_LoadSkill::GetUserSkill, get(4) ERROR charac_no=%u",0x4(%esp)
08407916 +0x344:  lea    -0x68(%ebp),%eax
08407919 +0x347:  mov    %eax,(%esp)
0840791c +0x34a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407921 +0x34f:  mov    $0x0,%eax
08407926 +0x354:  jmp    08407daa <+0x7d8>
0840792b +0x359:  mov    0xc(%ebp),%eax
0840792e +0x35c:  add    $0xcb68,%eax
08407933 +0x361:  mov    %eax,%edx
08407935 +0x363:  mov    -0x10(%ebp),%eax
08407938 +0x366:  addl   $0x1,-0x10(%ebp)
0840793c +0x36a:  movl   $0x2,0x10(%esp)
08407944 +0x372:  movl   $0x198,0xc(%esp)
0840794c +0x37a:  mov    %edx,0x8(%esp)
08407950 +0x37e:  mov    %eax,0x4(%esp)
08407954 +0x382:  mov    -0x14(%ebp),%eax
08407957 +0x385:  mov    %eax,(%esp)
0840795a +0x388:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
0840795f +0x38d:  xor    $0x1,%eax
08407962 +0x390:  test   %al,%al
08407964 +0x392:  je     08407970 <+0x39e>
08407966 +0x394:  mov    $0x0,%eax
0840796b +0x399:  jmp    08407daa <+0x7d8>
08407970 +0x39e:  mov    0xc(%ebp),%eax
08407973 +0x3a1:  lea    0xcd00(%eax),%edx
08407979 +0x3a7:  mov    -0x10(%ebp),%eax
0840797c +0x3aa:  addl   $0x1,-0x10(%ebp)
08407980 +0x3ae:  mov    %edx,0x8(%esp)
08407984 +0x3b2:  mov    %eax,0x4(%esp)
08407988 +0x3b6:  mov    -0x14(%ebp),%eax
0840798b +0x3b9:  mov    %eax,(%esp)
0840798e +0x3bc:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08407993 +0x3c1:  mov    %al,-0x15(%ebp)
08407996 +0x3c4:  movzbl -0x15(%ebp),%eax
0840799a +0x3c8:  xor    $0x1,%eax
0840799d +0x3cb:  test   %al,%al
0840799f +0x3cd:  je     084079eb <+0x419>
084079a1 +0x3cf:  mov    0xc(%ebp),%eax
084079a4 +0x3d2:  mov    0x4(%eax),%ebx
084079a7 +0x3d5:  movl   $0x5,0xc(%esp)
084079af +0x3dd:  movl   $0x1dac,0x8(%esp)
084079b7 +0x3e5:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
084079bf +0x3ed:  lea    -0x58(%ebp),%eax
084079c2 +0x3f0:  mov    %eax,(%esp)
084079c5 +0x3f3:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084079ca +0x3f8:  mov    %ebx,0x8(%esp)
084079ce +0x3fc:  movl   $"DB_LoadSkill::GetUserSkill, get(7) ERROR charac_no=%u",0x4(%esp)
084079d6 +0x404:  lea    -0x58(%ebp),%eax
084079d9 +0x407:  mov    %eax,(%esp)
084079dc +0x40a:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084079e1 +0x40f:  mov    $0x0,%eax
084079e6 +0x414:  jmp    08407daa <+0x7d8>
084079eb +0x419:  mov    0xc(%ebp),%eax
084079ee +0x41c:  lea    0xcd04(%eax),%edx
084079f4 +0x422:  mov    -0x10(%ebp),%eax
084079f7 +0x425:  addl   $0x1,-0x10(%ebp)
084079fb +0x429:  mov    %edx,0x8(%esp)
084079ff +0x42d:  mov    %eax,0x4(%esp)
08407a03 +0x431:  mov    -0x14(%ebp),%eax
08407a06 +0x434:  mov    %eax,(%esp)
08407a09 +0x437:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08407a0e +0x43c:  mov    %al,-0x15(%ebp)
08407a11 +0x43f:  movzbl -0x15(%ebp),%eax
08407a15 +0x443:  xor    $0x1,%eax
08407a18 +0x446:  test   %al,%al
08407a1a +0x448:  je     08407a66 <+0x494>
08407a1c +0x44a:  mov    0xc(%ebp),%eax
08407a1f +0x44d:  mov    0x4(%eax),%ebx
08407a22 +0x450:  movl   $0x5,0xc(%esp)
08407a2a +0x458:  movl   $0x1db2,0x8(%esp)
08407a32 +0x460:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08407a3a +0x468:  lea    -0x48(%ebp),%eax
08407a3d +0x46b:  mov    %eax,(%esp)
08407a40 +0x46e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407a45 +0x473:  mov    %ebx,0x8(%esp)
08407a49 +0x477:  movl   $"DB_LoadSkill::GetUserSkill, get(8) ERROR charac_no=%u",0x4(%esp)
08407a51 +0x47f:  lea    -0x48(%ebp),%eax
08407a54 +0x482:  mov    %eax,(%esp)
08407a57 +0x485:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407a5c +0x48a:  mov    $0x0,%eax
08407a61 +0x48f:  jmp    08407daa <+0x7d8>
08407a66 +0x494:  mov    0xc(%ebp),%eax
08407a69 +0x497:  add    $0xcd08,%eax
08407a6e +0x49c:  mov    %eax,%edx
08407a70 +0x49e:  mov    -0x10(%ebp),%eax
08407a73 +0x4a1:  addl   $0x1,-0x10(%ebp)
08407a77 +0x4a5:  movl   $0x4,0x10(%esp)
08407a7f +0x4ad:  movl   $0xc8,0xc(%esp)
08407a87 +0x4b5:  mov    %edx,0x8(%esp)
08407a8b +0x4b9:  mov    %eax,0x4(%esp)
08407a8f +0x4bd:  mov    -0x14(%ebp),%eax
08407a92 +0x4c0:  mov    %eax,(%esp)
08407a95 +0x4c3:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08407a9a +0x4c8:  xor    $0x1,%eax
08407a9d +0x4cb:  test   %al,%al
08407a9f +0x4cd:  je     08407aab <+0x4d9>
08407aa1 +0x4cf:  mov    $0x0,%eax
08407aa6 +0x4d4:  jmp    08407daa <+0x7d8>
08407aab +0x4d9:  mov    0xc(%ebp),%eax
08407aae +0x4dc:  add    $0x29fd,%eax
08407ab3 +0x4e1:  mov    %eax,%edx
08407ab5 +0x4e3:  mov    -0x10(%ebp),%eax
08407ab8 +0x4e6:  addl   $0x1,-0x10(%ebp)
08407abc +0x4ea:  movl   $0x2,0x10(%esp)
08407ac4 +0x4f2:  movl   $0x198,0xc(%esp)
08407acc +0x4fa:  mov    %edx,0x8(%esp)
08407ad0 +0x4fe:  mov    %eax,0x4(%esp)
08407ad4 +0x502:  mov    -0x14(%ebp),%eax
08407ad7 +0x505:  mov    %eax,(%esp)
08407ada +0x508:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08407adf +0x50d:  xor    $0x1,%eax
08407ae2 +0x510:  test   %al,%al
08407ae4 +0x512:  je     08407af0 <+0x51e>
08407ae6 +0x514:  mov    $0x0,%eax
08407aeb +0x519:  jmp    08407daa <+0x7d8>
08407af0 +0x51e:  movl   $0x0,-0xac(%ebp)
08407afa +0x528:  mov    -0x10(%ebp),%eax
08407afd +0x52b:  addl   $0x1,-0x10(%ebp)
08407b01 +0x52f:  lea    -0xac(%ebp),%edx
08407b07 +0x535:  mov    %edx,0x8(%esp)
08407b0b +0x539:  mov    %eax,0x4(%esp)
08407b0f +0x53d:  mov    -0x14(%ebp),%eax
08407b12 +0x540:  mov    %eax,(%esp)
08407b15 +0x543:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407b1a +0x548:  xor    $0x1,%eax
08407b1d +0x54b:  test   %al,%al
08407b1f +0x54d:  je     08407b2b <+0x559>
08407b21 +0x54f:  mov    $0x0,%eax
08407b26 +0x554:  jmp    08407daa <+0x7d8>
08407b2b +0x559:  mov    0xc(%ebp),%eax
08407b2e +0x55c:  add    $0x2b97,%eax
08407b33 +0x561:  mov    %eax,%edx
08407b35 +0x563:  mov    -0x10(%ebp),%eax
08407b38 +0x566:  addl   $0x1,-0x10(%ebp)
08407b3c +0x56a:  movl   $0x2,0x10(%esp)
08407b44 +0x572:  movl   $0x198,0xc(%esp)
08407b4c +0x57a:  mov    %edx,0x8(%esp)
08407b50 +0x57e:  mov    %eax,0x4(%esp)
08407b54 +0x582:  mov    -0x14(%ebp),%eax
08407b57 +0x585:  mov    %eax,(%esp)
08407b5a +0x588:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08407b5f +0x58d:  xor    $0x1,%eax
08407b62 +0x590:  test   %al,%al
08407b64 +0x592:  je     08407b70 <+0x59e>
08407b66 +0x594:  mov    $0x0,%eax
08407b6b +0x599:  jmp    08407daa <+0x7d8>
08407b70 +0x59e:  movl   $0x0,-0xb0(%ebp)
08407b7a +0x5a8:  mov    -0x10(%ebp),%eax
08407b7d +0x5ab:  addl   $0x1,-0x10(%ebp)
08407b81 +0x5af:  lea    -0xb0(%ebp),%edx
08407b87 +0x5b5:  mov    %edx,0x8(%esp)
08407b8b +0x5b9:  mov    %eax,0x4(%esp)
08407b8f +0x5bd:  mov    -0x14(%ebp),%eax
08407b92 +0x5c0:  mov    %eax,(%esp)
08407b95 +0x5c3:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08407b9a +0x5c8:  xor    $0x1,%eax
08407b9d +0x5cb:  test   %al,%al
08407b9f +0x5cd:  je     08407bab <+0x5d9>
08407ba1 +0x5cf:  mov    $0x0,%eax
08407ba6 +0x5d4:  jmp    08407daa <+0x7d8>
08407bab +0x5d9:  mov    0xc(%ebp),%eax
08407bae +0x5dc:  lea    0xcdd1(%eax),%edx
08407bb4 +0x5e2:  mov    -0x10(%ebp),%eax
08407bb7 +0x5e5:  addl   $0x1,-0x10(%ebp)
08407bbb +0x5e9:  mov    %edx,0x8(%esp)
08407bbf +0x5ed:  mov    %eax,0x4(%esp)
08407bc3 +0x5f1:  mov    -0x14(%ebp),%eax
08407bc6 +0x5f4:  mov    %eax,(%esp)
08407bc9 +0x5f7:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08407bce +0x5fc:  xor    $0x1,%eax
08407bd1 +0x5ff:  test   %al,%al
08407bd3 +0x601:  je     08407bdf <+0x60d>
08407bd5 +0x603:  mov    $0x0,%eax
08407bda +0x608:  jmp    08407daa <+0x7d8>
08407bdf +0x60d:  mov    -0xac(%ebp),%eax
08407be5 +0x613:  mov    %eax,%edx
08407be7 +0x615:  mov    0xc(%ebp),%eax
08407bea +0x618:  mov    %dl,0x2b95(%eax)
08407bf0 +0x61e:  mov    -0xac(%ebp),%eax
08407bf6 +0x624:  mov    %eax,%edx
08407bf8 +0x626:  mov    0xc(%ebp),%eax
08407bfb +0x629:  mov    %dl,0x29fc(%eax)
08407c01 +0x62f:  mov    -0xb0(%ebp),%eax
08407c07 +0x635:  mov    %eax,%edx
08407c09 +0x637:  mov    0xc(%ebp),%eax
08407c0c +0x63a:  mov    %dl,0x2d2f(%eax)
08407c12 +0x640:  mov    -0xb0(%ebp),%eax
08407c18 +0x646:  mov    %eax,%edx
08407c1a +0x648:  mov    0xc(%ebp),%eax
08407c1d +0x64b:  mov    %dl,0x2b96(%eax)
08407c23 +0x651:  mov    0xc(%ebp),%eax
08407c26 +0x654:  mov    0xc(%eax),%eax
08407c29 +0x657:  test   %eax,%eax
08407c2b +0x659:  je     08407da5 <+0x7d3>
08407c31 +0x65f:  mov    0xc(%ebp),%eax
08407c34 +0x662:  mov    0xc(%eax),%eax
08407c37 +0x665:  mov    %eax,0x8(%esp)
08407c3b +0x669:  movl   $"seLect skill_slot, skill_slot_2nd from skill where charac_no=%u",0x4(%esp)
08407c43 +0x671:  mov    -0x14(%ebp),%eax
08407c46 +0x674:  mov    %eax,(%esp)
08407c49 +0x677:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08407c4e +0x67c:  movl   $0x1,0x4(%esp)
08407c56 +0x684:  mov    -0x14(%ebp),%eax
08407c59 +0x687:  mov    %eax,(%esp)
08407c5c +0x68a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08407c61 +0x68f:  mov    %al,-0x15(%ebp)
08407c64 +0x692:  movzbl -0x15(%ebp),%eax
08407c68 +0x696:  xor    $0x1,%eax
08407c6b +0x699:  test   %al,%al
08407c6d +0x69b:  je     08407cb9 <+0x6e7>
08407c6f +0x69d:  mov    0xc(%ebp),%eax
08407c72 +0x6a0:  mov    0xc(%eax),%ebx
08407c75 +0x6a3:  movl   $0x5,0xc(%esp)
08407c7d +0x6ab:  movl   $0x1dea,0x8(%esp)
08407c85 +0x6b3:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08407c8d +0x6bb:  lea    -0x38(%ebp),%eax
08407c90 +0x6be:  mov    %eax,(%esp)
08407c93 +0x6c1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407c98 +0x6c6:  mov    %ebx,0x8(%esp)
08407c9c +0x6ca:  movl   $"DB_LoadSkill::GetUserSkill, exec() ERROR tagCharacNo=%u",0x4(%esp)
08407ca4 +0x6d2:  lea    -0x38(%ebp),%eax
08407ca7 +0x6d5:  mov    %eax,(%esp)
08407caa +0x6d8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407caf +0x6dd:  mov    $0x0,%eax
08407cb4 +0x6e2:  jmp    08407daa <+0x7d8>
08407cb9 +0x6e7:  mov    -0x14(%ebp),%eax
08407cbc +0x6ea:  mov    %eax,(%esp)
08407cbf +0x6ed:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08407cc4 +0x6f2:  mov    %al,-0x15(%ebp)
08407cc7 +0x6f5:  movzbl -0x15(%ebp),%eax
08407ccb +0x6f9:  xor    $0x1,%eax
08407cce +0x6fc:  test   %al,%al
08407cd0 +0x6fe:  je     08407d1c <+0x74a>
08407cd2 +0x700:  mov    0xc(%ebp),%eax
08407cd5 +0x703:  mov    0xc(%eax),%ebx
08407cd8 +0x706:  movl   $0x5,0xc(%esp)
08407ce0 +0x70e:  movl   $0x1df1,0x8(%esp)
08407ce8 +0x716:  movl   $&_ZZN10DB_LoadEtc12GetUserSkillEP12SIG_LOAD_ETCE19__PRETTY_FUNCTION__,0x4(%esp)
08407cf0 +0x71e:  lea    -0x28(%ebp),%eax
08407cf3 +0x721:  mov    %eax,(%esp)
08407cf6 +0x724:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08407cfb +0x729:  mov    %ebx,0x8(%esp)
08407cff +0x72d:  movl   $"DB_LoadSkill::GetUserSkill, fetch() ERROR tagCharacNo=%u",0x4(%esp)
08407d07 +0x735:  lea    -0x28(%ebp),%eax
08407d0a +0x738:  mov    %eax,(%esp)
08407d0d +0x73b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08407d12 +0x740:  mov    $0x0,%eax
08407d17 +0x745:  jmp    08407daa <+0x7d8>
08407d1c +0x74a:  movl   $0x0,-0xc(%ebp)
08407d23 +0x751:  mov    0xc(%ebp),%eax
08407d26 +0x754:  add    $0x10,%eax
08407d29 +0x757:  mov    %eax,%edx
08407d2b +0x759:  mov    -0xc(%ebp),%eax
08407d2e +0x75c:  addl   $0x1,-0xc(%ebp)
08407d32 +0x760:  movl   $0x2,0x10(%esp)
08407d3a +0x768:  movl   $0x198,0xc(%esp)
08407d42 +0x770:  mov    %edx,0x8(%esp)
08407d46 +0x774:  mov    %eax,0x4(%esp)
08407d4a +0x778:  mov    -0x14(%ebp),%eax
08407d4d +0x77b:  mov    %eax,(%esp)
08407d50 +0x77e:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08407d55 +0x783:  xor    $0x1,%eax
08407d58 +0x786:  test   %al,%al
08407d5a +0x788:  je     08407d63 <+0x791>
08407d5c +0x78a:  mov    $0x0,%eax
08407d61 +0x78f:  jmp    08407daa <+0x7d8>
08407d63 +0x791:  mov    0xc(%ebp),%eax
08407d66 +0x794:  add    $0x1a8,%eax
08407d6b +0x799:  mov    %eax,%edx
08407d6d +0x79b:  mov    -0xc(%ebp),%eax
08407d70 +0x79e:  addl   $0x1,-0xc(%ebp)
08407d74 +0x7a2:  movl   $0x2,0x10(%esp)
08407d7c +0x7aa:  movl   $0x198,0xc(%esp)
08407d84 +0x7b2:  mov    %edx,0x8(%esp)
08407d88 +0x7b6:  mov    %eax,0x4(%esp)
08407d8c +0x7ba:  mov    -0x14(%ebp),%eax
08407d8f +0x7bd:  mov    %eax,(%esp)
08407d92 +0x7c0:  call   083fbc79 <_Z24get_compressed_blob_dataP5MySQLiPcii>  ; get_compressed_blob_data(MySQL*, int, char*, int, int)
08407d97 +0x7c5:  xor    $0x1,%eax
08407d9a +0x7c8:  test   %al,%al
08407d9c +0x7ca:  je     08407da5 <+0x7d3>
08407d9e +0x7cc:  mov    $0x0,%eax
08407da3 +0x7d1:  jmp    08407daa <+0x7d8>
08407da5 +0x7d3:  mov    $0x1,%eax
08407daa +0x7d8:  add    $0xd4,%esp
08407db0 +0x7de:  pop    %ebx
08407db1 +0x7df:  pop    %ebp
08407db2 +0x7e0:  ret
08407db3 +0x7e1:  nop
```

## 反编译 C

```c
// DB_LoadEtc::GetUserSkill @ 0x84075d2

/* DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::GetUserSkill(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  GameWorld *this_00;
  undefined4 uVar5;
  int local_b4 [2];
  cMyTrace local_ac [16];
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  char local_19;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  uVar5 = *(undefined4 *)(param_1 + 4);
  uVar3 = get_skill_table_name(false);
  MySQL::set_query(local_18,
                   "seLect remain_sp,skill_slot,remain_sp_2nd, skill_slot_2nd, remain_sfp_1st, remain_sfp_2nd, skill_command, skill_slot_lethe, lethe_flag, skill_slot_lethe_2nd, lethe_flag_2nd,script_version from %s where charac_no=%u"
                   ,uVar3,uVar5);
  local_19 = MySQL::exec(local_18,true);
  if (local_19 != '\x01') {
    uVar5 = *(undefined4 *)(param_1 + 4);
    cMyTrace::cMyTrace(local_ac,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d50,5);
    cMyTrace::operator()(local_ac,"DB_LoadSkill::GetUserSkill, exec() ERROR charac_no=%u",uVar5);
    return 0;
  }
  iVar4 = MySQL::get_n_rows(local_18);
  if (iVar4 == 0) {
    this_00 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(this_00);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_084076c6;
    }
  }
  bVar1 = false;
LAB_084076c6:
  if (bVar1) {
    uVar5 = *(undefined4 *)(param_1 + 4);
    uVar3 = get_skill_table_name(false);
    MySQL::set_query(local_18,"inSert into %s (charac_no) values(%u)",uVar3,uVar5);
    local_19 = MySQL::exec(local_18,true);
    if (local_19 == '\x01') {
      param_1[0xcdd4] = (SIG_LOAD_ETC)0x1;
      uVar5 = 1;
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_9c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d5d,5);
      cMyTrace::operator()
                (local_9c,"DB_LoadSkill::GetUserSkill insert, exec() ERROR charac_no=%u",uVar5);
      uVar5 = 0;
    }
  }
  else {
    local_19 = MySQL::fetch(local_18);
    if (local_19 == '\x01') {
      local_14 = 1;
      local_19 = MySQL::get_uint(local_18,0,(uint *)(param_1 + 0xc9c8));
      iVar4 = local_14;
      if (local_19 == '\x01') {
        local_14 = local_14 + 1;
        cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xc9cc),0x198,2);
        iVar4 = local_14;
        if (cVar2 == '\x01') {
          local_14 = local_14 + 1;
          local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcb64));
          iVar4 = local_14;
          if (local_19 == '\x01') {
            local_14 = local_14 + 1;
            cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xcb68),0x198,2);
            iVar4 = local_14;
            if (cVar2 == '\x01') {
              local_14 = local_14 + 1;
              local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcd00));
              iVar4 = local_14;
              if (local_19 == '\x01') {
                local_14 = local_14 + 1;
                local_19 = MySQL::get_uint(local_18,iVar4,(uint *)(param_1 + 0xcd04));
                iVar4 = local_14;
                if (local_19 == '\x01') {
                  local_14 = local_14 + 1;
                  cVar2 = get_compressed_blob_data(local_18,iVar4,(char *)(param_1 + 0xcd08),200,4);
                  iVar4 = local_14;
                  if (cVar2 == '\x01') {
                    local_14 = local_14 + 1;
                    cVar2 = get_compressed_blob_data
                                      (local_18,iVar4,(char *)(param_1 + 0x29fd),0x198,2);
                    iVar4 = local_14;
                    if (cVar2 == '\x01') {
                      local_b4[1] = 0;
                      local_14 = local_14 + 1;
                      cVar2 = MySQL::get_int(local_18,iVar4,local_b4 + 1);
                      iVar4 = local_14;
                      if (cVar2 == '\x01') {
                        local_14 = local_14 + 1;
                        cVar2 = get_compressed_blob_data
                                          (local_18,iVar4,(char *)(param_1 + 0x2b97),0x198,2);
                        iVar4 = local_14;
                        if (cVar2 == '\x01') {
                          local_b4[0] = 0;
                          local_14 = local_14 + 1;
                          cVar2 = MySQL::get_int(local_18,iVar4,local_b4);
                          iVar4 = local_14;
                          if (cVar2 == '\x01') {
                            local_14 = local_14 + 1;
                            cVar2 = MySQL::get_ubyte(local_18,iVar4,(uchar *)(param_1 + 0xcdd1));
                            if (cVar2 == '\x01') {
                              param_1[0x2b95] = SUB41(local_b4[1],0);
                              param_1[0x29fc] = SUB41(local_b4[1],0);
                              param_1[0x2d2f] = SUB41(local_b4[0],0);
                              param_1[0x2b96] = SUB41(local_b4[0],0);
                              if (*(int *)(param_1 + 0xc) != 0) {
                                MySQL::set_query(local_18,
                                                 "seLect skill_slot, skill_slot_2nd from skill where charac_no=%u"
                                                 ,*(undefined4 *)(param_1 + 0xc));
                                local_19 = MySQL::exec(local_18,true);
                                if (local_19 != '\x01') {
                                  uVar5 = *(undefined4 *)(param_1 + 0xc);
                                  cMyTrace::cMyTrace(local_3c,
                                                  "bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",
                                                  0x1dea,5);
                                  cMyTrace::operator()
                                            (local_3c,
                                             "DB_LoadSkill::GetUserSkill, exec() ERROR tagCharacNo=%u"
                                             ,uVar5);
                                  return 0;
                                }
                                local_19 = MySQL::fetch(local_18);
                                if (local_19 != '\x01') {
                                  uVar5 = *(undefined4 *)(param_1 + 0xc);
                                  cMyTrace::cMyTrace(local_2c,
                                                  "bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",
                                                  0x1df1,5);
                                  cMyTrace::operator()
                                            (local_2c,
                                             "DB_LoadSkill::GetUserSkill, fetch() ERROR tagCharacNo=%u"
                                             ,uVar5);
                                  return 0;
                                }
                                local_10 = 1;
                                cVar2 = get_compressed_blob_data
                                                  (local_18,0,(char *)(param_1 + 0x10),0x198,2);
                                iVar4 = local_10;
                                if (cVar2 != '\x01') {
                                  return 0;
                                }
                                local_10 = local_10 + 1;
                                cVar2 = get_compressed_blob_data
                                                  (local_18,iVar4,(char *)(param_1 + 0x1a8),0x198,2)
                                ;
                                if (cVar2 != '\x01') {
                                  return 0;
                                }
                              }
                              uVar5 = 1;
                            }
                            else {
                              uVar5 = 0;
                            }
                          }
                          else {
                            uVar5 = 0;
                          }
                        }
                        else {
                          uVar5 = 0;
                        }
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = *(undefined4 *)(param_1 + 4);
                  cMyTrace::cMyTrace(local_4c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1db2,
                                     5);
                  cMyTrace::operator()
                            (local_4c,"DB_LoadSkill::GetUserSkill, get(8) ERROR charac_no=%u",uVar5)
                  ;
                  uVar5 = 0;
                }
              }
              else {
                uVar5 = *(undefined4 *)(param_1 + 4);
                cMyTrace::cMyTrace(local_5c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1dac,5)
                ;
                cMyTrace::operator()
                          (local_5c,"DB_LoadSkill::GetUserSkill, get(7) ERROR charac_no=%u",uVar5);
                uVar5 = 0;
              }
            }
            else {
              uVar5 = 0;
            }
          }
          else {
            uVar5 = *(undefined4 *)(param_1 + 4);
            cMyTrace::cMyTrace(local_6c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d98,5);
            cMyTrace::operator()
                      (local_6c,"DB_LoadSkill::GetUserSkill, get(4) ERROR charac_no=%u",uVar5);
            uVar5 = 0;
          }
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = *(undefined4 *)(param_1 + 4);
        cMyTrace::cMyTrace(local_7c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d71,5);
        cMyTrace::operator()(local_7c,"DB_LoadSkill::GetUserSkill, get(0) ERROR charac_no=%u",uVar5)
        ;
        uVar5 = 0;
      }
    }
    else {
      uVar5 = *(undefined4 *)(param_1 + 4);
      cMyTrace::cMyTrace(local_8c,"bool DB_LoadEtc::GetUserSkill(SIG_LOAD_ETC*)",0x1d69,5);
      cMyTrace::operator()(local_8c,"DB_LoadSkill::GetUserSkill, fetch() ERROR charac_no=%u",uVar5);
      uVar5 = 0;
    }
  }
  return uVar5;
}
```
