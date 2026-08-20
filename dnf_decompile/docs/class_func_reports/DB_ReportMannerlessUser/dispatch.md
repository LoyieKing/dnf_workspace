# dispatch

`_ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream`

`DB_ReportMannerlessUser::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReportMannerlessUser` | `0x0842796a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842796a  _ZN23DB_ReportMannerlessUser8dispatchEiiP6Stream
#           DB_ReportMannerlessUser::dispatch(int, int, Stream*)
# range [0x0842796a, 0x08427bcd]
0842796a +0x000:  push   %ebp
0842796b +0x001:  mov    %esp,%ebp
0842796d +0x003:  push   %edi
0842796e +0x004:  push   %esi
0842796f +0x005:  push   %ebx
08427970 +0x006:  sub    $0x12c,%esp
08427976 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842797b +0x011:  movl   $0x0,0x8(%esp)
08427983 +0x019:  movl   $0x4,0x4(%esp)
0842798b +0x021:  mov    %eax,(%esp)
0842798e +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08427993 +0x029:  mov    %eax,-0x24(%ebp)
08427996 +0x02c:  mov    0x14(%ebp),%eax
08427999 +0x02f:  mov    %eax,(%esp)
0842799c +0x032:  call   084521e6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4dfc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4dfc
084279a1 +0x037:  mov    %eax,-0x20(%ebp)
084279a4 +0x03a:  mov    $&_ZGVZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,%eax
084279a9 +0x03f:  movzbl (%eax),%eax
084279ac +0x042:  test   %al,%al
084279ae +0x044:  jne    08427a21 <+0xb7>
084279b0 +0x046:  movl   $&_ZGVZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
084279b7 +0x04d:  call   08725330 <__cxa_guard_acquire>
084279bc +0x052:  test   %eax,%eax
084279be +0x054:  setne  %al
084279c1 +0x057:  test   %al,%al
084279c3 +0x059:  je     08427a21 <+0xb7>
084279c5 +0x05b:  mov    $0x0,%ebx
084279ca +0x060:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
084279d1 +0x067:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
084279d6 +0x06c:  movl   $&_ZGVZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
084279dd +0x073:  call   08725250 <__cxa_guard_release>
084279e2 +0x078:  mov    $&_ZNSsD1Ev,%eax
084279e7 +0x07d:  movl   $&__dso_handle,0x8(%esp)
084279ef +0x085:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,0x4(%esp)
084279f7 +0x08d:  mov    %eax,(%esp)
084279fa +0x090:  call   0807ddd0 <_init+0x6c8>
084279ff +0x095:  jmp    08427a21 <+0xb7>
08427a01 +0x097:  mov    %edx,%esi
08427a03 +0x099:  mov    %eax,%edi
08427a05 +0x09b:  test   %bl,%bl
08427a07 +0x09d:  jne    08427a15 <+0xab>
08427a09 +0x09f:  movl   $&_ZGVZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a10 +0x0a6:  call   087252c0 <__cxa_guard_abort>
08427a15 +0x0ab:  mov    %edi,%eax
08427a17 +0x0ad:  mov    %esi,%edx
08427a19 +0x0af:  mov    %eax,(%esp)
08427a1c +0x0b2:  call   08ae3750 <_Unwind_Resume>
08427a21 +0x0b7:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a28 +0x0be:  call   087066a0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x2b0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x2b0
08427a2d +0x0c3:  xor    $0x1,%eax
08427a30 +0x0c6:  test   %al,%al
08427a32 +0x0c8:  je     08427a48 <+0xde>
08427a34 +0x0ca:  movl   $",",0x4(%esp)
08427a3c +0x0d2:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a43 +0x0d9:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427a48 +0x0de:  movl   $"(",0x4(%esp)
08427a50 +0x0e6:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a57 +0x0ed:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427a5c +0x0f2:  mov    -0x20(%ebp),%eax
08427a5f +0x0f5:  mov    %eax,0x4(%esp)
08427a63 +0x0f9:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a6a +0x100:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427a6f +0x105:  movl   $",",0x4(%esp)
08427a77 +0x10d:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a7e +0x114:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427a83 +0x119:  mov    -0x20(%ebp),%eax
08427a86 +0x11c:  add    $0x1d,%eax
08427a89 +0x11f:  mov    %eax,0x4(%esp)
08427a8d +0x123:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427a94 +0x12a:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427a99 +0x12f:  movl   $",",0x4(%esp)
08427aa1 +0x137:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427aa8 +0x13e:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427aad +0x143:  mov    -0x20(%ebp),%eax
08427ab0 +0x146:  add    $0x3a,%eax
08427ab3 +0x149:  mov    %eax,0x4(%esp)
08427ab7 +0x14d:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427abe +0x154:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427ac3 +0x159:  movl   $",",0x4(%esp)
08427acb +0x161:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427ad2 +0x168:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427ad7 +0x16d:  lea    -0x123(%ebp),%edx
08427add +0x173:  mov    $0xff,%ebx
08427ae2 +0x178:  mov    $0x0,%eax
08427ae7 +0x17d:  mov    %edx,%ecx
08427ae9 +0x17f:  and    $0x1,%ecx
08427aec +0x182:  test   %ecx,%ecx
08427aee +0x184:  je     08427af8 <+0x18e>
08427af0 +0x186:  mov    %al,(%edx)
08427af2 +0x188:  add    $0x1,%edx
08427af5 +0x18b:  sub    $0x1,%ebx
08427af8 +0x18e:  mov    %edx,%ecx
08427afa +0x190:  and    $0x2,%ecx
08427afd +0x193:  test   %ecx,%ecx
08427aff +0x195:  je     08427b0a <+0x1a0>
08427b01 +0x197:  mov    %ax,(%edx)
08427b04 +0x19a:  add    $0x2,%edx
08427b07 +0x19d:  sub    $0x2,%ebx
08427b0a +0x1a0:  mov    %ebx,%ecx
08427b0c +0x1a2:  shr    $0x2,%ecx
08427b0f +0x1a5:  mov    %edx,%edi
08427b11 +0x1a7:  rep stos %eax,%es:(%edi)
08427b13 +0x1a9:  mov    %edi,%edx
08427b15 +0x1ab:  mov    %ebx,%ecx
08427b17 +0x1ad:  and    $0x2,%ecx
08427b1a +0x1b0:  test   %ecx,%ecx
08427b1c +0x1b2:  je     08427b24 <+0x1ba>
08427b1e +0x1b4:  mov    %ax,(%edx)
08427b21 +0x1b7:  add    $0x2,%edx
08427b24 +0x1ba:  mov    %ebx,%ecx
08427b26 +0x1bc:  and    $0x1,%ecx
08427b29 +0x1bf:  test   %ecx,%ecx
08427b2b +0x1c1:  je     08427b32 <+0x1c8>
08427b2d +0x1c3:  mov    %al,(%edx)
08427b2f +0x1c5:  add    $0x1,%edx
08427b32 +0x1c8:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08427b39 +0x1cf:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08427b3e +0x1d4:  mov    %eax,-0x1c(%ebp)
08427b41 +0x1d7:  mov    -0x1c(%ebp),%eax
08427b44 +0x1da:  mov    %eax,0x8(%esp)
08427b48 +0x1de:  movl   $"from_unixtime(%d)",0x4(%esp)
08427b50 +0x1e6:  lea    -0x123(%ebp),%eax
08427b56 +0x1ec:  mov    %eax,(%esp)
08427b59 +0x1ef:  call   0807e440 <_init+0xd38>
08427b5e +0x1f4:  lea    -0x123(%ebp),%eax
08427b64 +0x1fa:  mov    %eax,0x4(%esp)
08427b68 +0x1fe:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427b6f +0x205:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427b74 +0x20a:  movl   $")",0x4(%esp)
08427b7c +0x212:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427b83 +0x219:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08427b88 +0x21e:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427b8f +0x225:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08427b94 +0x22a:  mov    $0x6000,%edx
08427b99 +0x22f:  mov    %edx,%ecx
08427b9b +0x231:  sub    %eax,%ecx
08427b9d +0x233:  mov    %ecx,%eax
08427b9f +0x235:  cmp    $0x273,%eax
08427ba4 +0x23a:  seta   %al
08427ba7 +0x23d:  test   %al,%al
08427ba9 +0x23f:  je     08427bb2 <+0x248>
08427bab +0x241:  mov    $0x1,%eax
08427bb0 +0x246:  jmp    08427bc3 <+0x259>
08427bb2 +0x248:  movl   $&_ZZN23DB_ReportMannerlessUser8dispatchEiiP6StreamE11cache_query,(%esp)
08427bb9 +0x24f:  call   08708dd0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x29e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x29e0
08427bbe +0x254:  mov    $0x1,%eax
08427bc3 +0x259:  add    $0x12c,%esp
08427bc9 +0x25f:  pop    %ebx
08427bca +0x260:  pop    %esi
08427bcb +0x261:  pop    %edi
08427bcc +0x262:  pop    %ebp
08427bcd +0x263:  ret
```

## 反编译 C

```c
// DB_ReportMannerlessUser::dispatch @ 0x842796a

/* DB_ReportMannerlessUser::dispatch(int, int, Stream*) */

undefined4 DB_ReportMannerlessUser::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  Stream *in_stack_00000010;
  char local_127;
  char local_126 [254];
  undefined4 local_28;
  SIG_MANNERLESS_USER *local_24;
  undefined4 local_20;
  
  bVar7 = 0;
  local_28 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = Stream::GetOutBuffer<SIG_MANNERLESS_USER>(in_stack_00000010);
  if ((dispatch(int,int,Stream*)::cache_query == '\0') &&
     (iVar2 = __cxa_guard_acquire(&dispatch(int,int,Stream*)::cache_query), iVar2 != 0)) {
                    /* try { // try from 084279d1 to 084279d5 has its CatchHandler @ 08427a01 */
    std::string::string((string *)&dispatch(int,int,Stream*)::cache_query);
    __cxa_guard_release(&dispatch(int,int,Stream*)::cache_query);
    __cxa_atexit(std::string::~string,&dispatch(int,int,Stream*)::cache_query,&__dso_handle);
  }
  cVar1 = std::string::empty((string *)&dispatch(int,int,Stream*)::cache_query);
  if (cVar1 != '\x01') {
    std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  }
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,"(");
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,(char *)local_24);
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  std::string::operator+=
            ((string *)&dispatch(int,int,Stream*)::cache_query,(char *)(local_24 + 0x1d));
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  std::string::operator+=
            ((string *)&dispatch(int,int,Stream*)::cache_query,(char *)(local_24 + 0x3a));
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,",");
  pcVar4 = &local_127;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_127 = '\0';
    pcVar4 = local_126;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  sprintf(&local_127,"from_unixtime(%d)",local_20);
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,&local_127);
  std::string::operator+=((string *)&dispatch(int,int,Stream*)::cache_query,")");
  iVar2 = std::string::size((string *)&dispatch(int,int,Stream*)::cache_query);
  if (0x6000U - iVar2 < 0x274) {
    std::string::clear((string *)&dispatch(int,int,Stream*)::cache_query);
  }
  return 1;
}
```
