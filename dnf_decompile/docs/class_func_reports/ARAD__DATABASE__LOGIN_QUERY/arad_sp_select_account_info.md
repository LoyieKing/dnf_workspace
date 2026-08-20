# arad_sp_select_account_info

`_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818b706` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818b706  _ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPc
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)
# range [0x0818b706, 0x0818bd66]
0818b706 +0x000:  push   %ebp
0818b707 +0x001:  mov    %esp,%ebp
0818b709 +0x003:  push   %ebx
0818b70a +0x004:  sub    $0xf4,%esp
0818b710 +0x00a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818b715 +0x00f:  movl   $0x0,0x8(%esp)
0818b71d +0x017:  movl   $0x1,0x4(%esp)
0818b725 +0x01f:  mov    %eax,(%esp)
0818b728 +0x022:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818b72d +0x027:  mov    %eax,-0x10(%ebp)
0818b730 +0x02a:  cmpl   $0x0,-0x10(%ebp)
0818b734 +0x02e:  jne    0818b774 <+0x6e>
0818b736 +0x030:  movl   $"Database null!!",0x14(%esp)
0818b73e +0x038:  movl   $"%s",0x10(%esp)
0818b746 +0x040:  movl   $0x1e8,0xc(%esp)
0818b74e +0x048:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x8(%esp)
0818b756 +0x050:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818b75e +0x058:  movl   $0x1,(%esp)
0818b765 +0x05f:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818b76a +0x064:  mov    $0xffffffff,%eax
0818b76f +0x069:  jmp    0818bd5e <+0x658>
0818b774 +0x06e:  mov    0x8(%ebp),%eax
0818b777 +0x071:  mov    0xc0(%eax),%eax
0818b77d +0x077:  mov    %eax,0x8(%esp)
0818b781 +0x07b:  movl   $"seLect m_id, passwd,first_ssn, second_ssn, mid(from_unixtime(reg_date)+0,1,8),user_name,email, user_id, hangame_flag from member_info where m_id=%d",0x4(%esp)
0818b789 +0x083:  mov    -0x10(%ebp),%eax
0818b78c +0x086:  mov    %eax,(%esp)
0818b78f +0x089:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818b794 +0x08e:  test   %eax,%eax
0818b796 +0x090:  setne  %al
0818b799 +0x093:  test   %al,%al
0818b79b +0x095:  je     0818b7a7 <+0xa1>
0818b79d +0x097:  mov    $0xffffffff,%eax
0818b7a2 +0x09c:  jmp    0818bd5e <+0x658>
0818b7a7 +0x0a1:  mov    -0x10(%ebp),%eax
0818b7aa +0x0a4:  mov    %eax,(%esp)
0818b7ad +0x0a7:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818b7b2 +0x0ac:  cmp    $0x1,%eax
0818b7b5 +0x0af:  setne  %al
0818b7b8 +0x0b2:  test   %al,%al
0818b7ba +0x0b4:  je     0818b80f <+0x109>
0818b7bc +0x0b6:  mov    0x8(%ebp),%eax
0818b7bf +0x0b9:  mov    0xc0(%eax),%ebx
0818b7c5 +0x0bf:  movl   $0x5,0xc(%esp)
0818b7cd +0x0c7:  movl   $0x1f5,0x8(%esp)
0818b7d5 +0x0cf:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818b7dd +0x0d7:  lea    -0xb0(%ebp),%eax
0818b7e3 +0x0dd:  mov    %eax,(%esp)
0818b7e6 +0x0e0:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818b7eb +0x0e5:  mov    %ebx,0x8(%esp)
0818b7ef +0x0e9:  movl   $"query get_n_rows() ERROR m_id=%u",0x4(%esp)
0818b7f7 +0x0f1:  lea    -0xb0(%ebp),%eax
0818b7fd +0x0f7:  mov    %eax,(%esp)
0818b800 +0x0fa:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818b805 +0x0ff:  mov    $0x0,%eax
0818b80a +0x104:  jmp    0818bd5e <+0x658>
0818b80f +0x109:  movl   $0x0,-0xb4(%ebp)
0818b819 +0x113:  movl   $0x0,-0xb8(%ebp)
0818b823 +0x11d:  movl   $0x0,-0xbc(%ebp)
0818b82d +0x127:  movl   $0x0,-0xc(%ebp)
0818b834 +0x12e:  movl   $0x0,-0xc0(%ebp)
0818b83e +0x138:  mov    0x8(%ebp),%eax
0818b841 +0x13b:  lea    0xc0(%eax),%edx
0818b847 +0x141:  addl   $0x1,-0xc(%ebp)
0818b84b +0x145:  mov    -0xc(%ebp),%eax
0818b84e +0x148:  mov    %edx,0x8(%esp)
0818b852 +0x14c:  mov    %eax,0x4(%esp)
0818b856 +0x150:  mov    -0x10(%ebp),%eax
0818b859 +0x153:  mov    %eax,(%esp)
0818b85c +0x156:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818b861 +0x15b:  xor    $0x1,%eax
0818b864 +0x15e:  test   %al,%al
0818b866 +0x160:  je     0818b8bb <+0x1b5>
0818b868 +0x162:  mov    0x8(%ebp),%eax
0818b86b +0x165:  mov    0xc0(%eax),%ebx
0818b871 +0x16b:  movl   $0x5,0xc(%esp)
0818b879 +0x173:  movl   $0x201,0x8(%esp)
0818b881 +0x17b:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818b889 +0x183:  lea    -0xa0(%ebp),%eax
0818b88f +0x189:  mov    %eax,(%esp)
0818b892 +0x18c:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818b897 +0x191:  mov    %ebx,0x8(%esp)
0818b89b +0x195:  movl   $"user m_id ERROR m_id=%u",0x4(%esp)
0818b8a3 +0x19d:  lea    -0xa0(%ebp),%eax
0818b8a9 +0x1a3:  mov    %eax,(%esp)
0818b8ac +0x1a6:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818b8b1 +0x1ab:  mov    $0x0,%eax
0818b8b6 +0x1b0:  jmp    0818bd5e <+0x658>
0818b8bb +0x1b5:  addl   $0x1,-0xc(%ebp)
0818b8bf +0x1b9:  mov    -0xc(%ebp),%eax
0818b8c2 +0x1bc:  movl   $0x84,0xc(%esp)
0818b8ca +0x1c4:  mov    0xc(%ebp),%edx
0818b8cd +0x1c7:  mov    %edx,0x8(%esp)
0818b8d1 +0x1cb:  mov    %eax,0x4(%esp)
0818b8d5 +0x1cf:  mov    -0x10(%ebp),%eax
0818b8d8 +0x1d2:  mov    %eax,(%esp)
0818b8db +0x1d5:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818b8e0 +0x1da:  xor    $0x1,%eax
0818b8e3 +0x1dd:  test   %al,%al
0818b8e5 +0x1df:  je     0818b93a <+0x234>
0818b8e7 +0x1e1:  mov    0x8(%ebp),%eax
0818b8ea +0x1e4:  mov    0xc0(%eax),%ebx
0818b8f0 +0x1ea:  movl   $0x5,0xc(%esp)
0818b8f8 +0x1f2:  movl   $0x207,0x8(%esp)
0818b900 +0x1fa:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818b908 +0x202:  lea    -0x90(%ebp),%eax
0818b90e +0x208:  mov    %eax,(%esp)
0818b911 +0x20b:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818b916 +0x210:  mov    %ebx,0x8(%esp)
0818b91a +0x214:  movl   $"user password ERROR m_id=%u",0x4(%esp)
0818b922 +0x21c:  lea    -0x90(%ebp),%eax
0818b928 +0x222:  mov    %eax,(%esp)
0818b92b +0x225:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818b930 +0x22a:  mov    $0x0,%eax
0818b935 +0x22f:  jmp    0818bd5e <+0x658>
0818b93a +0x234:  addl   $0x1,-0xc(%ebp)
0818b93e +0x238:  mov    -0xc(%ebp),%eax
0818b941 +0x23b:  lea    -0xb4(%ebp),%edx
0818b947 +0x241:  mov    %edx,0x8(%esp)
0818b94b +0x245:  mov    %eax,0x4(%esp)
0818b94f +0x249:  mov    -0x10(%ebp),%eax
0818b952 +0x24c:  mov    %eax,(%esp)
0818b955 +0x24f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818b95a +0x254:  xor    $0x1,%eax
0818b95d +0x257:  test   %al,%al
0818b95f +0x259:  je     0818b9ae <+0x2a8>
0818b961 +0x25b:  mov    0x8(%ebp),%eax
0818b964 +0x25e:  mov    0xc0(%eax),%ebx
0818b96a +0x264:  movl   $0x5,0xc(%esp)
0818b972 +0x26c:  movl   $0x20d,0x8(%esp)
0818b97a +0x274:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818b982 +0x27c:  lea    -0x80(%ebp),%eax
0818b985 +0x27f:  mov    %eax,(%esp)
0818b988 +0x282:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818b98d +0x287:  mov    %ebx,0x8(%esp)
0818b991 +0x28b:  movl   $"user fssn ERROR m_id=%u",0x4(%esp)
0818b999 +0x293:  lea    -0x80(%ebp),%eax
0818b99c +0x296:  mov    %eax,(%esp)
0818b99f +0x299:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818b9a4 +0x29e:  mov    $0x0,%eax
0818b9a9 +0x2a3:  jmp    0818bd5e <+0x658>
0818b9ae +0x2a8:  addl   $0x1,-0xc(%ebp)
0818b9b2 +0x2ac:  mov    -0xc(%ebp),%eax
0818b9b5 +0x2af:  lea    -0xb8(%ebp),%edx
0818b9bb +0x2b5:  mov    %edx,0x8(%esp)
0818b9bf +0x2b9:  mov    %eax,0x4(%esp)
0818b9c3 +0x2bd:  mov    -0x10(%ebp),%eax
0818b9c6 +0x2c0:  mov    %eax,(%esp)
0818b9c9 +0x2c3:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818b9ce +0x2c8:  xor    $0x1,%eax
0818b9d1 +0x2cb:  test   %al,%al
0818b9d3 +0x2cd:  je     0818ba22 <+0x31c>
0818b9d5 +0x2cf:  mov    0x8(%ebp),%eax
0818b9d8 +0x2d2:  mov    0xc0(%eax),%ebx
0818b9de +0x2d8:  movl   $0x5,0xc(%esp)
0818b9e6 +0x2e0:  movl   $0x213,0x8(%esp)
0818b9ee +0x2e8:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818b9f6 +0x2f0:  lea    -0x70(%ebp),%eax
0818b9f9 +0x2f3:  mov    %eax,(%esp)
0818b9fc +0x2f6:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818ba01 +0x2fb:  mov    %ebx,0x8(%esp)
0818ba05 +0x2ff:  movl   $"user sssn ERROR m_id=%u",0x4(%esp)
0818ba0d +0x307:  lea    -0x70(%ebp),%eax
0818ba10 +0x30a:  mov    %eax,(%esp)
0818ba13 +0x30d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818ba18 +0x312:  mov    $0x0,%eax
0818ba1d +0x317:  jmp    0818bd5e <+0x658>
0818ba22 +0x31c:  addl   $0x1,-0xc(%ebp)
0818ba26 +0x320:  mov    -0xc(%ebp),%eax
0818ba29 +0x323:  lea    -0xbc(%ebp),%edx
0818ba2f +0x329:  mov    %edx,0x8(%esp)
0818ba33 +0x32d:  mov    %eax,0x4(%esp)
0818ba37 +0x331:  mov    -0x10(%ebp),%eax
0818ba3a +0x334:  mov    %eax,(%esp)
0818ba3d +0x337:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818ba42 +0x33c:  xor    $0x1,%eax
0818ba45 +0x33f:  test   %al,%al
0818ba47 +0x341:  je     0818ba96 <+0x390>
0818ba49 +0x343:  mov    0x8(%ebp),%eax
0818ba4c +0x346:  mov    0xc0(%eax),%ebx
0818ba52 +0x34c:  movl   $0x5,0xc(%esp)
0818ba5a +0x354:  movl   $0x219,0x8(%esp)
0818ba62 +0x35c:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818ba6a +0x364:  lea    -0x60(%ebp),%eax
0818ba6d +0x367:  mov    %eax,(%esp)
0818ba70 +0x36a:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818ba75 +0x36f:  mov    %ebx,0x8(%esp)
0818ba79 +0x373:  movl   $"user regdate ERROR m_id=%u",0x4(%esp)
0818ba81 +0x37b:  lea    -0x60(%ebp),%eax
0818ba84 +0x37e:  mov    %eax,(%esp)
0818ba87 +0x381:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818ba8c +0x386:  mov    $0x0,%eax
0818ba91 +0x38b:  jmp    0818bd5e <+0x658>
0818ba96 +0x390:  mov    0x8(%ebp),%eax
0818ba99 +0x393:  lea    0x2184(%eax),%edx
0818ba9f +0x399:  addl   $0x1,-0xc(%ebp)
0818baa3 +0x39d:  mov    -0xc(%ebp),%eax
0818baa6 +0x3a0:  movl   $0x80,0xc(%esp)
0818baae +0x3a8:  mov    %edx,0x8(%esp)
0818bab2 +0x3ac:  mov    %eax,0x4(%esp)
0818bab6 +0x3b0:  mov    -0x10(%ebp),%eax
0818bab9 +0x3b3:  mov    %eax,(%esp)
0818babc +0x3b6:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818bac1 +0x3bb:  xor    $0x1,%eax
0818bac4 +0x3be:  test   %al,%al
0818bac6 +0x3c0:  je     0818bb15 <+0x40f>
0818bac8 +0x3c2:  mov    0x8(%ebp),%eax
0818bacb +0x3c5:  mov    0xc0(%eax),%ebx
0818bad1 +0x3cb:  movl   $0x5,0xc(%esp)
0818bad9 +0x3d3:  movl   $0x21f,0x8(%esp)
0818bae1 +0x3db:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818bae9 +0x3e3:  lea    -0x50(%ebp),%eax
0818baec +0x3e6:  mov    %eax,(%esp)
0818baef +0x3e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818baf4 +0x3ee:  mov    %ebx,0x8(%esp)
0818baf8 +0x3f2:  movl   $"user user_name ERROR m_id=%u",0x4(%esp)
0818bb00 +0x3fa:  lea    -0x50(%ebp),%eax
0818bb03 +0x3fd:  mov    %eax,(%esp)
0818bb06 +0x400:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818bb0b +0x405:  mov    $0x0,%eax
0818bb10 +0x40a:  jmp    0818bd5e <+0x658>
0818bb15 +0x40f:  mov    0x8(%ebp),%eax
0818bb18 +0x412:  lea    0x2204(%eax),%edx
0818bb1e +0x418:  addl   $0x1,-0xc(%ebp)
0818bb22 +0x41c:  mov    -0xc(%ebp),%eax
0818bb25 +0x41f:  movl   $0x80,0xc(%esp)
0818bb2d +0x427:  mov    %edx,0x8(%esp)
0818bb31 +0x42b:  mov    %eax,0x4(%esp)
0818bb35 +0x42f:  mov    -0x10(%ebp),%eax
0818bb38 +0x432:  mov    %eax,(%esp)
0818bb3b +0x435:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818bb40 +0x43a:  xor    $0x1,%eax
0818bb43 +0x43d:  test   %al,%al
0818bb45 +0x43f:  je     0818bb94 <+0x48e>
0818bb47 +0x441:  mov    0x8(%ebp),%eax
0818bb4a +0x444:  mov    0xc0(%eax),%ebx
0818bb50 +0x44a:  movl   $0x5,0xc(%esp)
0818bb58 +0x452:  movl   $0x225,0x8(%esp)
0818bb60 +0x45a:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818bb68 +0x462:  lea    -0x40(%ebp),%eax
0818bb6b +0x465:  mov    %eax,(%esp)
0818bb6e +0x468:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818bb73 +0x46d:  mov    %ebx,0x8(%esp)
0818bb77 +0x471:  movl   $"user email ERROR m_id=%u",0x4(%esp)
0818bb7f +0x479:  lea    -0x40(%ebp),%eax
0818bb82 +0x47c:  mov    %eax,(%esp)
0818bb85 +0x47f:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818bb8a +0x484:  mov    $0x0,%eax
0818bb8f +0x489:  jmp    0818bd5e <+0x658>
0818bb94 +0x48e:  mov    0x8(%ebp),%edx
0818bb97 +0x491:  addl   $0x1,-0xc(%ebp)
0818bb9b +0x495:  mov    -0xc(%ebp),%eax
0818bb9e +0x498:  movl   $0x1e,0xc(%esp)
0818bba6 +0x4a0:  mov    %edx,0x8(%esp)
0818bbaa +0x4a4:  mov    %eax,0x4(%esp)
0818bbae +0x4a8:  mov    -0x10(%ebp),%eax
0818bbb1 +0x4ab:  mov    %eax,(%esp)
0818bbb4 +0x4ae:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818bbb9 +0x4b3:  xor    $0x1,%eax
0818bbbc +0x4b6:  test   %al,%al
0818bbbe +0x4b8:  je     0818bc0d <+0x507>
0818bbc0 +0x4ba:  mov    0x8(%ebp),%eax
0818bbc3 +0x4bd:  mov    0xc0(%eax),%ebx
0818bbc9 +0x4c3:  movl   $0x5,0xc(%esp)
0818bbd1 +0x4cb:  movl   $0x22b,0x8(%esp)
0818bbd9 +0x4d3:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818bbe1 +0x4db:  lea    -0x30(%ebp),%eax
0818bbe4 +0x4de:  mov    %eax,(%esp)
0818bbe7 +0x4e1:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818bbec +0x4e6:  mov    %ebx,0x8(%esp)
0818bbf0 +0x4ea:  movl   $"user id ERROR m_id=%u",0x4(%esp)
0818bbf8 +0x4f2:  lea    -0x30(%ebp),%eax
0818bbfb +0x4f5:  mov    %eax,(%esp)
0818bbfe +0x4f8:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818bc03 +0x4fd:  mov    $0x0,%eax
0818bc08 +0x502:  jmp    0818bd5e <+0x658>
0818bc0d +0x507:  addl   $0x1,-0xc(%ebp)
0818bc11 +0x50b:  mov    -0xc(%ebp),%eax
0818bc14 +0x50e:  lea    -0xc0(%ebp),%edx
0818bc1a +0x514:  mov    %edx,0x8(%esp)
0818bc1e +0x518:  mov    %eax,0x4(%esp)
0818bc22 +0x51c:  mov    -0x10(%ebp),%eax
0818bc25 +0x51f:  mov    %eax,(%esp)
0818bc28 +0x522:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818bc2d +0x527:  xor    $0x1,%eax
0818bc30 +0x52a:  test   %al,%al
0818bc32 +0x52c:  je     0818bc81 <+0x57b>
0818bc34 +0x52e:  mov    0x8(%ebp),%eax
0818bc37 +0x531:  mov    0xc0(%eax),%ebx
0818bc3d +0x537:  movl   $0x5,0xc(%esp)
0818bc45 +0x53f:  movl   $0x231,0x8(%esp)
0818bc4d +0x547:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_select_account_infoEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x4(%esp)
0818bc55 +0x54f:  lea    -0x20(%ebp),%eax
0818bc58 +0x552:  mov    %eax,(%esp)
0818bc5b +0x555:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0818bc60 +0x55a:  mov    %ebx,0x8(%esp)
0818bc64 +0x55e:  movl   $"user HanGameUser Check ERROR m_id=%u",0x4(%esp)
0818bc6c +0x566:  lea    -0x20(%ebp),%eax
0818bc6f +0x569:  mov    %eax,(%esp)
0818bc72 +0x56c:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0818bc77 +0x571:  mov    $0x0,%eax
0818bc7c +0x576:  jmp    0818bd5e <+0x658>
0818bc81 +0x57b:  mov    -0xbc(%ebp),%edx
0818bc87 +0x581:  mov    0x8(%ebp),%eax
0818bc8a +0x584:  mov    %edx,0xcc(%eax)
0818bc90 +0x58a:  mov    -0xc0(%ebp),%eax
0818bc96 +0x590:  cmp    $0x1,%eax
0818bc99 +0x593:  sete   %dl
0818bc9c +0x596:  mov    0x8(%ebp),%eax
0818bc9f +0x599:  mov    %dl,0x38dd(%eax)
0818bca5 +0x59f:  mov    -0xb8(%ebp),%edx
0818bcab +0x5a5:  mov    -0xb4(%ebp),%eax
0818bcb1 +0x5ab:  mov    0x8(%ebp),%ecx
0818bcb4 +0x5ae:  add    $0x2284,%ecx
0818bcba +0x5b4:  mov    %edx,0x10(%esp)
0818bcbe +0x5b8:  mov    %eax,0xc(%esp)
0818bcc2 +0x5bc:  movl   $"%d%d",0x8(%esp)
0818bcca +0x5c4:  movl   $0x10,0x4(%esp)
0818bcd2 +0x5cc:  mov    %ecx,(%esp)
0818bcd5 +0x5cf:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
0818bcda +0x5d4:  mov    -0xb4(%ebp),%eax
0818bce0 +0x5da:  mov    %eax,-0xcc(%ebp)
0818bce6 +0x5e0:  mov    $0xd1b71759,%edx
0818bceb +0x5e5:  mov    -0xcc(%ebp),%eax
0818bcf1 +0x5eb:  mul    %edx
0818bcf3 +0x5ed:  mov    %edx,%eax
0818bcf5 +0x5ef:  shr    $0xd,%eax
0818bcf8 +0x5f2:  mov    %eax,-0xb4(%ebp)
0818bcfe +0x5f8:  mov    -0xb8(%ebp),%eax
0818bd04 +0x5fe:  mov    %eax,-0xcc(%ebp)
0818bd0a +0x604:  mov    $0x431bde83,%edx
0818bd0f +0x609:  mov    -0xcc(%ebp),%eax
0818bd15 +0x60f:  mul    %edx
0818bd17 +0x611:  mov    %edx,%eax
0818bd19 +0x613:  shr    $0x12,%eax
0818bd1c +0x616:  mov    %eax,-0xb8(%ebp)
0818bd22 +0x61c:  mov    -0xb8(%ebp),%eax
0818bd28 +0x622:  cmp    $0x2,%eax
0818bd2b +0x625:  jbe    0818bd44 <+0x63e>
0818bd2d +0x627:  mov    -0xb4(%ebp),%eax
0818bd33 +0x62d:  lea    0x7d0(%eax),%edx
0818bd39 +0x633:  mov    0x8(%ebp),%eax
0818bd3c +0x636:  mov    %edx,0xc8(%eax)
0818bd42 +0x63c:  jmp    0818bd59 <+0x653>
0818bd44 +0x63e:  mov    -0xb4(%ebp),%eax
0818bd4a +0x644:  lea    0x76c(%eax),%edx
0818bd50 +0x64a:  mov    0x8(%ebp),%eax
0818bd53 +0x64d:  mov    %edx,0xc8(%eax)
0818bd59 +0x653:  mov    $0x0,%eax
0818bd5e +0x658:  add    $0xf4,%esp
0818bd64 +0x65e:  pop    %ebx
0818bd65 +0x65f:  pop    %ebp
0818bd66 +0x660:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info @ 0x818b706

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  cMyTrace local_b4 [16];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  cMyTrace local_84 [16];
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_14 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
               ,0x1e8,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = MySQL::select(local_14,
                          "seLect m_id, passwd,first_ssn, second_ssn, mid(from_unixtime(reg_date)+0,1,8),user_name,email, user_id, hangame_flag from member_info where m_id=%d"
                          ,*(undefined4 *)(param_1 + 0xc0));
    if (iVar3 == 0) {
      iVar3 = MySQL::get_n_rows(local_14);
      if (iVar3 == 1) {
        local_b8 = 0;
        local_bc = 0;
        local_c0 = 0;
        local_c4 = 0;
        local_10 = 1;
        cVar1 = MySQL::get_uint(local_14,1,(uint *)(param_1 + 0xc0));
        if (cVar1 == '\x01') {
          local_10 = local_10 + 1;
          cVar1 = MySQL::get_str(local_14,local_10,param_2,0x84);
          if (cVar1 == '\x01') {
            local_10 = local_10 + 1;
            cVar1 = MySQL::get_uint(local_14,local_10,&local_b8);
            if (cVar1 == '\x01') {
              local_10 = local_10 + 1;
              cVar1 = MySQL::get_uint(local_14,local_10,&local_bc);
              if (cVar1 == '\x01') {
                local_10 = local_10 + 1;
                cVar1 = MySQL::get_uint(local_14,local_10,&local_c0);
                if (cVar1 == '\x01') {
                  local_10 = local_10 + 1;
                  cVar1 = MySQL::get_str(local_14,local_10,(char *)(param_1 + 0x2184),0x80);
                  if (cVar1 == '\x01') {
                    local_10 = local_10 + 1;
                    cVar1 = MySQL::get_str(local_14,local_10,(char *)(param_1 + 0x2204),0x80);
                    if (cVar1 == '\x01') {
                      local_10 = local_10 + 1;
                      cVar1 = MySQL::get_str(local_14,local_10,(char *)param_1,0x1e);
                      if (cVar1 == '\x01') {
                        local_10 = local_10 + 1;
                        cVar1 = MySQL::get_uint(local_14,local_10,&local_c4);
                        if (cVar1 == '\x01') {
                          *(uint *)(param_1 + 0xcc) = local_c0;
                          param_1[0x38dd] = (SIG_LOGIN_DATA)(local_c4 == 1);
                          OS_API::snprintf((char *)(param_1 + 0x2284),0x10,"%d%d",local_b8,local_bc)
                          ;
                          if (local_bc / 1000000 < 3) {
                            *(uint *)(param_1 + 200) = local_b8 / 10000 + 0x76c;
                          }
                          else {
                            *(uint *)(param_1 + 200) = local_b8 / 10000 + 2000;
                          }
                          uVar2 = 0;
                        }
                        else {
                          uVar2 = *(undefined4 *)(param_1 + 0xc0);
                          cMyTrace::cMyTrace(local_24,
                                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                             ,0x231,5);
                          cMyTrace::operator()
                                    (local_24,"user HanGameUser Check ERROR m_id=%u",uVar2);
                          uVar2 = 0;
                        }
                      }
                      else {
                        uVar2 = *(undefined4 *)(param_1 + 0xc0);
                        cMyTrace::cMyTrace(local_34,
                                           "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                           ,0x22b,5);
                        cMyTrace::operator()(local_34,"user id ERROR m_id=%u",uVar2);
                        uVar2 = 0;
                      }
                    }
                    else {
                      uVar2 = *(undefined4 *)(param_1 + 0xc0);
                      cMyTrace::cMyTrace(local_44,
                                         "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                         ,0x225,5);
                      cMyTrace::operator()(local_44,"user email ERROR m_id=%u",uVar2);
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = *(undefined4 *)(param_1 + 0xc0);
                    cMyTrace::cMyTrace(local_54,
                                       "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                       ,0x21f,5);
                    cMyTrace::operator()(local_54,"user user_name ERROR m_id=%u",uVar2);
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = *(undefined4 *)(param_1 + 0xc0);
                  cMyTrace::cMyTrace(local_64,
                                     "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                     ,0x219,5);
                  cMyTrace::operator()(local_64,"user regdate ERROR m_id=%u",uVar2);
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = *(undefined4 *)(param_1 + 0xc0);
                cMyTrace::cMyTrace(local_74,
                                   "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                   ,0x213,5);
                cMyTrace::operator()(local_74,"user sssn ERROR m_id=%u",uVar2);
                uVar2 = 0;
              }
            }
            else {
              uVar2 = *(undefined4 *)(param_1 + 0xc0);
              cMyTrace::cMyTrace(local_84,
                                 "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                                 ,0x20d,5);
              cMyTrace::operator()(local_84,"user fssn ERROR m_id=%u",uVar2);
              uVar2 = 0;
            }
          }
          else {
            uVar2 = *(undefined4 *)(param_1 + 0xc0);
            cMyTrace::cMyTrace(local_94,
                               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                               ,0x207,5);
            cMyTrace::operator()(local_94,"user password ERROR m_id=%u",uVar2);
            uVar2 = 0;
          }
        }
        else {
          uVar2 = *(undefined4 *)(param_1 + 0xc0);
          cMyTrace::cMyTrace(local_a4,
                             "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                             ,0x201,5);
          cMyTrace::operator()(local_a4,"user m_id ERROR m_id=%u",uVar2);
          uVar2 = 0;
        }
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0xc0);
        cMyTrace::cMyTrace(local_b4,
                           "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_account_info(SIG_LOGIN_DATA*, char*)"
                           ,0x1f5,5);
        cMyTrace::operator()(local_b4,"query get_n_rows() ERROR m_id=%u",uVar2);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
