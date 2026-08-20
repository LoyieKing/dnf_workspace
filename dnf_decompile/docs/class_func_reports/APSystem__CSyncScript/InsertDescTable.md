# InsertDescTable

`_ZN8APSystem11CSyncScript15InsertDescTableEv`

`APSystem::CSyncScript::InsertDescTable()`

| 类 | 地址 |
|---|---|
| `APSystem::CSyncScript` | `0x0812268c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0812268c  _ZN8APSystem11CSyncScript15InsertDescTableEv
#           APSystem::CSyncScript::InsertDescTable()
# range [0x0812268c, 0x08122a4c]
0812268c +0x000:  push   %ebp
0812268d +0x001:  mov    %esp,%ebp
0812268f +0x003:  push   %edi
08122690 +0x004:  push   %esi
08122691 +0x005:  push   %ebx
08122692 +0x006:  sub    $0x4fc,%esp
08122698 +0x00c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0812269d +0x011:  movl   $0x0,0x4(%esp)
081226a5 +0x019:  mov    %eax,(%esp)
081226a8 +0x01c:  call   08122ace <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x41>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x41
081226ad +0x021:  add    $0x18,%eax
081226b0 +0x024:  mov    %eax,-0x2c(%ebp)
081226b3 +0x027:  lea    -0x48(%ebp),%eax
081226b6 +0x02a:  mov    %eax,(%esp)
081226b9 +0x02d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081226be +0x032:  lea    -0x4c(%ebp),%eax
081226c1 +0x035:  mov    %eax,(%esp)
081226c4 +0x038:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
081226c9 +0x03d:  movl   $"inSert into charac_action_point_desc (action_index, action_group_index, action_group_name) values ",0x4(%esp)
081226d1 +0x045:  lea    -0x48(%ebp),%eax
081226d4 +0x048:  mov    %eax,(%esp)
081226d7 +0x04b:  call   08708720 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2330>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2330
081226dc +0x050:  mov    -0x2c(%ebp),%eax
081226df +0x053:  mov    %eax,(%esp)
081226e2 +0x056:  call   08122d86 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2f9>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2f9
081226e7 +0x05b:  mov    %eax,-0x28(%ebp)
081226ea +0x05e:  lea    -0x50(%ebp),%eax
081226ed +0x061:  mov    -0x2c(%ebp),%edx
081226f0 +0x064:  mov    %edx,0x4(%esp)
081226f4 +0x068:  mov    %eax,(%esp)
081226f7 +0x06b:  call   08122d9a <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x30d>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x30d
081226fc +0x070:  sub    $0x4,%esp
081226ff +0x073:  movl   $0x0,-0x20(%ebp)
08122706 +0x07a:  jmp    08122967 <+0x2db>
0812270b +0x07f:  lea    -0x50(%ebp),%eax
0812270e +0x082:  mov    %eax,(%esp)
08122711 +0x085:  call   08122d36 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x2a9>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x2a9
08122716 +0x08a:  mov    0x4(%eax),%eax
08122719 +0x08d:  mov    %eax,-0x1c(%ebp)
0812271c +0x090:  cmpl   $0x0,-0x1c(%ebp)
08122720 +0x094:  je     08122945 <+0x2b9>
08122726 +0x09a:  lea    -0x54(%ebp),%eax
08122729 +0x09d:  mov    %eax,(%esp)
0812272c +0x0a0:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08122731 +0x0a5:  mov    -0x1c(%ebp),%eax
08122734 +0x0a8:  movzwl (%eax),%eax
08122737 +0x0ab:  movzwl %ax,%eax
0812273a +0x0ae:  mov    %eax,0x8(%esp)
0812273e +0x0b2:  movl   $"%u",0x4(%esp)
08122746 +0x0ba:  lea    -0x98(%ebp),%eax
0812274c +0x0c0:  mov    %eax,(%esp)
0812274f +0x0c3:  call   0807e440 <_init+0xd38>
08122754 +0x0c8:  mov    -0x1c(%ebp),%eax
08122757 +0x0cb:  mov    0x2(%eax),%eax
0812275a +0x0ce:  mov    %eax,0x8(%esp)
0812275e +0x0d2:  movl   $"%u",0x4(%esp)
08122766 +0x0da:  lea    -0xdc(%ebp),%eax
0812276c +0x0e0:  mov    %eax,(%esp)
0812276f +0x0e3:  call   0807e440 <_init+0xd38>
08122774 +0x0e8:  lea    -0x4dc(%ebp),%esi
0812277a +0x0ee:  mov    $0x0,%eax
0812277f +0x0f3:  mov    $0x100,%edx
08122784 +0x0f8:  mov    %esi,%edi
08122786 +0x0fa:  mov    %edx,%ecx
08122788 +0x0fc:  rep stos %eax,%es:(%edi)
0812278a +0x0fe:  mov    -0x1c(%ebp),%eax
0812278d +0x101:  add    $0x24,%eax
08122790 +0x104:  mov    %eax,(%esp)
08122793 +0x107:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08122798 +0x10c:  lea    -0x4dc(%ebp),%edx
0812279e +0x112:  mov    %edx,0x4(%esp)
081227a2 +0x116:  mov    %eax,(%esp)
081227a5 +0x119:  call   08108e08 <_ZN8CodePage15script2DatabaseEPcS0_>  ; CodePage::script2Database(char*, char*)
081227aa +0x11e:  xor    $0x1,%eax
081227ad +0x121:  test   %al,%al
081227af +0x123:  je     08122830 <+0x1a4>
081227b1 +0x125:  mov    -0x1c(%ebp),%eax
081227b4 +0x128:  add    $0x24,%eax
081227b7 +0x12b:  mov    %eax,(%esp)
081227ba +0x12e:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081227bf +0x133:  mov    %eax,%edi
081227c1 +0x135:  call   08108de0 <_ZN8CodePage8databaseEv>  ; CodePage::database()
081227c6 +0x13a:  mov    %eax,%esi
081227c8 +0x13c:  call   08108dcc <_ZN8CodePage6scriptEv>  ; CodePage::script()
081227cd +0x141:  mov    %eax,%ebx
081227cf +0x143:  movl   $0x5,0xc(%esp)
081227d7 +0x14b:  movl   $0x409,0x8(%esp)
081227df +0x153:  movl   $&_ZZN8APSystem11CSyncScript15InsertDescTableEvE19__PRETTY_FUNCTION__,0x4(%esp)
081227e7 +0x15b:  lea    -0x40(%ebp),%eax
081227ea +0x15e:  mov    %eax,(%esp)
081227ed +0x161:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
081227f2 +0x166:  movl   $0x409,0x18(%esp)
081227fa +0x16e:  movl   $&_ZZN8APSystem11CSyncScript15InsertDescTableEvE19__PRETTY_FUNCTION__,0x14(%esp)
08122802 +0x176:  mov    %edi,0x10(%esp)
08122806 +0x17a:  mov    %esi,0xc(%esp)
0812280a +0x17e:  mov    %ebx,0x8(%esp)
0812280e +0x182:  movl   $"Error!!! %s->%s [%s][%s][%d]",0x4(%esp)
08122816 +0x18a:  lea    -0x40(%ebp),%eax
08122819 +0x18d:  mov    %eax,(%esp)
0812281c +0x190:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08122821 +0x195:  mov    $0x0,%ebx
08122826 +0x19a:  mov    $0x0,%esi
0812282b +0x19f:  jmp    08122930 <+0x2a4>
08122830 +0x1a4:  movl   $"(",0x4(%esp)
08122838 +0x1ac:  lea    -0x54(%ebp),%eax
0812283b +0x1af:  mov    %eax,(%esp)
0812283e +0x1b2:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08122843 +0x1b7:  lea    -0x98(%ebp),%eax
08122849 +0x1bd:  mov    %eax,0x4(%esp)
0812284d +0x1c1:  lea    -0x54(%ebp),%eax
08122850 +0x1c4:  mov    %eax,(%esp)
08122853 +0x1c7:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08122858 +0x1cc:  movl   $", ",0x4(%esp)
08122860 +0x1d4:  lea    -0x54(%ebp),%eax
08122863 +0x1d7:  mov    %eax,(%esp)
08122866 +0x1da:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0812286b +0x1df:  lea    -0xdc(%ebp),%eax
08122871 +0x1e5:  mov    %eax,0x4(%esp)
08122875 +0x1e9:  lea    -0x54(%ebp),%eax
08122878 +0x1ec:  mov    %eax,(%esp)
0812287b +0x1ef:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08122880 +0x1f4:  movl   $", ",0x4(%esp)
08122888 +0x1fc:  lea    -0x54(%ebp),%eax
0812288b +0x1ff:  mov    %eax,(%esp)
0812288e +0x202:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08122893 +0x207:  movl   $"'",0x4(%esp)
0812289b +0x20f:  lea    -0x54(%ebp),%eax
0812289e +0x212:  mov    %eax,(%esp)
081228a1 +0x215:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081228a6 +0x21a:  lea    -0x4dc(%ebp),%eax
081228ac +0x220:  mov    %eax,0x4(%esp)
081228b0 +0x224:  lea    -0x54(%ebp),%eax
081228b3 +0x227:  mov    %eax,(%esp)
081228b6 +0x22a:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081228bb +0x22f:  movl   $"'",0x4(%esp)
081228c3 +0x237:  lea    -0x54(%ebp),%eax
081228c6 +0x23a:  mov    %eax,(%esp)
081228c9 +0x23d:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081228ce +0x242:  movl   $")",0x4(%esp)
081228d6 +0x24a:  lea    -0x54(%ebp),%eax
081228d9 +0x24d:  mov    %eax,(%esp)
081228dc +0x250:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081228e1 +0x255:  mov    -0x28(%ebp),%eax
081228e4 +0x258:  sub    $0x1,%eax
081228e7 +0x25b:  cmp    -0x20(%ebp),%eax
081228ea +0x25e:  jle    081228ff <+0x273>
081228ec +0x260:  movl   $",",0x4(%esp)
081228f4 +0x268:  lea    -0x54(%ebp),%eax
081228f7 +0x26b:  mov    %eax,(%esp)
081228fa +0x26e:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
081228ff +0x273:  lea    -0x54(%ebp),%eax
08122902 +0x276:  mov    %eax,0x4(%esp)
08122906 +0x27a:  lea    -0x48(%ebp),%eax
08122909 +0x27d:  mov    %eax,(%esp)
0812290c +0x280:  call   087081f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e00>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e00
08122911 +0x285:  mov    $0x1,%esi
08122916 +0x28a:  jmp    08122930 <+0x2a4>
08122918 +0x28c:  mov    %edx,%ebx
0812291a +0x28e:  mov    %eax,%esi
0812291c +0x290:  lea    -0x54(%ebp),%eax
0812291f +0x293:  mov    %eax,(%esp)
08122922 +0x296:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08122927 +0x29b:  mov    %esi,%eax
08122929 +0x29d:  mov    %ebx,%edx
0812292b +0x29f:  jmp    081229f8 <+0x36c>
08122930 +0x2a4:  lea    -0x54(%ebp),%eax
08122933 +0x2a7:  mov    %eax,(%esp)
08122936 +0x2aa:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0812293b +0x2af:  test   %esi,%esi
0812293d +0x2b1:  je     08122a0d <+0x381>
08122943 +0x2b7:  jmp    08122946 <+0x2ba>
08122945 +0x2b9:  nop
08122946 +0x2ba:  lea    -0x30(%ebp),%eax
08122949 +0x2bd:  movl   $0x0,0x8(%esp)
08122951 +0x2c5:  lea    -0x50(%ebp),%edx
08122954 +0x2c8:  mov    %edx,0x4(%esp)
08122958 +0x2cc:  mov    %eax,(%esp)
0812295b +0x2cf:  call   08122dfa <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x36d>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x36d
08122960 +0x2d4:  sub    $0x4,%esp
08122963 +0x2d7:  addl   $0x1,-0x20(%ebp)
08122967 +0x2db:  lea    -0x44(%ebp),%eax
0812296a +0x2de:  mov    -0x2c(%ebp),%edx
0812296d +0x2e1:  mov    %edx,0x4(%esp)
08122971 +0x2e5:  mov    %eax,(%esp)
08122974 +0x2e8:  call   08122dc0 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x333>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x333
08122979 +0x2ed:  sub    $0x4,%esp
0812297c +0x2f0:  lea    -0x44(%ebp),%eax
0812297f +0x2f3:  mov    %eax,0x4(%esp)
08122983 +0x2f7:  lea    -0x50(%ebp),%eax
08122986 +0x2fa:  mov    %eax,(%esp)
08122989 +0x2fd:  call   08122de6 <_GLOBAL__I__ZN8APSystem19CActionPointManager7_IsGMOnE+0x359>  ; global constructors keyed to APSystem::CActionPointManager::_IsGMOn+0x359
0812298e +0x302:  test   %al,%al
08122990 +0x304:  jne    0812270b <+0x7f>
08122996 +0x30a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0812299b +0x30f:  movl   $0x0,0x8(%esp)
081229a3 +0x317:  movl   $0x2,0x4(%esp)
081229ab +0x31f:  mov    %eax,(%esp)
081229ae +0x322:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081229b3 +0x327:  mov    %eax,-0x24(%ebp)
081229b6 +0x32a:  lea    -0x48(%ebp),%eax
081229b9 +0x32d:  mov    %eax,(%esp)
081229bc +0x330:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081229c1 +0x335:  mov    %eax,0x4(%esp)
081229c5 +0x339:  mov    -0x24(%ebp),%eax
081229c8 +0x33c:  mov    %eax,(%esp)
081229cb +0x33f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
081229d0 +0x344:  movl   $0x1,0x4(%esp)
081229d8 +0x34c:  mov    -0x24(%ebp),%eax
081229db +0x34f:  mov    %eax,(%esp)
081229de +0x352:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081229e3 +0x357:  xor    $0x1,%eax
081229e6 +0x35a:  test   %al,%al
081229e8 +0x35c:  je     081229f1 <+0x365>
081229ea +0x35e:  mov    $0x0,%ebx
081229ef +0x363:  jmp    08122a0d <+0x381>
081229f1 +0x365:  mov    $0x1,%ebx
081229f6 +0x36a:  jmp    08122a0d <+0x381>
081229f8 +0x36c:  mov    %edx,%ebx
081229fa +0x36e:  mov    %eax,%esi
081229fc +0x370:  lea    -0x4c(%ebp),%eax
081229ff +0x373:  mov    %eax,(%esp)
08122a02 +0x376:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08122a07 +0x37b:  mov    %esi,%eax
08122a09 +0x37d:  mov    %ebx,%edx
08122a0b +0x37f:  jmp    08122a1a <+0x38e>
08122a0d +0x381:  lea    -0x4c(%ebp),%eax
08122a10 +0x384:  mov    %eax,(%esp)
08122a13 +0x387:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08122a18 +0x38c:  jmp    08122a35 <+0x3a9>
08122a1a +0x38e:  mov    %edx,%ebx
08122a1c +0x390:  mov    %eax,%esi
08122a1e +0x392:  lea    -0x48(%ebp),%eax
08122a21 +0x395:  mov    %eax,(%esp)
08122a24 +0x398:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08122a29 +0x39d:  mov    %esi,%eax
08122a2b +0x39f:  mov    %ebx,%edx
08122a2d +0x3a1:  mov    %eax,(%esp)
08122a30 +0x3a4:  call   08ae3750 <_Unwind_Resume>
08122a35 +0x3a9:  lea    -0x48(%ebp),%eax
08122a38 +0x3ac:  mov    %eax,(%esp)
08122a3b +0x3af:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08122a40 +0x3b4:  mov    %ebx,%eax
08122a42 +0x3b6:  lea    -0xc(%ebp),%esp
08122a45 +0x3b9:  add    $0x0,%esp
08122a48 +0x3bc:  pop    %ebx
08122a49 +0x3bd:  pop    %esi
08122a4a +0x3be:  pop    %edi
08122a4b +0x3bf:  pop    %ebp
08122a4c +0x3c0:  ret
```

## 反编译 C

```c
// APSystem::CSyncScript::InsertDescTable @ 0x812268c

/* APSystem::CSyncScript::InsertDescTable() */

undefined4 APSystem::CSyncScript::InsertDescTable(void)

{
  bool bVar1;
  char cVar2;
  CDataManager *this;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 unaff_EBX;
  byte bVar8;
  char local_4e0 [1024];
  char local_e0 [68];
  char local_9c [68];
  string local_58 [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  local_54 [4];
  string local_50 [4];
  string local_4c [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  local_48 [4];
  cMyTrace local_44 [16];
  _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
  local_34 [4];
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  *local_30;
  int local_2c;
  MySQL *local_28;
  int local_24;
  ushort *local_20;
  
  bVar8 = 0;
  this = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::GetActionPointEtcParameter(this,false);
  local_30 = (map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
              *)(iVar3 + 0x18);
  std::string::string(local_4c);
                    /* try { // try from 081226c4 to 081226c8 has its CatchHandler @ 08122a1a */
  std::string::string(local_50);
                    /* try { // try from 081226d7 to 08122730 has its CatchHandler @ 081229f8 */
  std::string::operator=
            (local_4c,
             "inSert into charac_action_point_desc (action_index, action_group_index, action_group_name) values "
            );
  local_2c = std::
             map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
             ::size(local_30);
  std::
  map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
  ::begin(local_54);
  local_24 = 0;
  while( true ) {
    std::
    map<unsigned_short,APSystem::CActionPointEx_const*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>>
    ::end(local_48);
    cVar2 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
                          *)local_54,(_Rb_tree_const_iterator *)local_48);
    if (cVar2 == '\0') break;
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
            ::operator->((_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>
                          *)local_54);
    local_20 = *(ushort **)(iVar3 + 4);
    if (local_20 != (ushort *)0x0) {
      std::string::string(local_58);
      sprintf(local_9c,"%u",(uint)*local_20);
      sprintf(local_e0,"%u",*(undefined4 *)(local_20 + 1));
      pcVar7 = local_4e0;
      for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
      }
                    /* try { // try from 08122793 to 08122910 has its CatchHandler @ 08122918 */
      pcVar7 = (char *)std::string::c_str((string *)(local_20 + 0x12));
      cVar2 = CodePage::script2Database(pcVar7,local_4e0);
      if (cVar2 == '\x01') {
        std::string::operator+=(local_58,"(");
        std::string::operator+=(local_58,local_9c);
        std::string::operator+=(local_58,", ");
        std::string::operator+=(local_58,local_e0);
        std::string::operator+=(local_58,", ");
        std::string::operator+=(local_58,"\'");
        std::string::operator+=(local_58,local_4e0);
        std::string::operator+=(local_58,"\'");
        std::string::operator+=(local_58,")");
        if (local_24 < local_2c + -1) {
          std::string::operator+=(local_58,",");
        }
        std::string::operator+=(local_4c,local_58);
        bVar1 = true;
      }
      else {
        uVar4 = std::string::c_str((string *)(local_20 + 0x12));
        uVar5 = CodePage::database();
        uVar6 = CodePage::script();
        cMyTrace::cMyTrace(local_44,"static bool APSystem::CSyncScript::InsertDescTable()",0x409,5);
        cMyTrace::operator()
                  (local_44,"Error!!! %s->%s [%s][%s][%d]",uVar6,uVar5,uVar4,
                   "static bool APSystem::CSyncScript::InsertDescTable()",0x409);
        unaff_EBX = 0;
        bVar1 = false;
      }
                    /* try { // try from 08122936 to 081229e2 has its CatchHandler @ 081229f8 */
      std::string::~string(local_58);
      if (!bVar1) goto LAB_08122a0d;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned_short_const,APSystem::CActionPointEx_const*>>::
    operator++(local_34,(int)local_54);
    local_24 = local_24 + 1;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pcVar7 = (char *)std::string::c_str(local_4c);
  MySQL::set_query(local_28,pcVar7);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    unaff_EBX = 1;
  }
  else {
    unaff_EBX = 0;
  }
LAB_08122a0d:
                    /* try { // try from 08122a13 to 08122a17 has its CatchHandler @ 08122a1a */
  std::string::~string(local_50);
  std::string::~string(local_4c);
  return unaff_EBX;
}
```
