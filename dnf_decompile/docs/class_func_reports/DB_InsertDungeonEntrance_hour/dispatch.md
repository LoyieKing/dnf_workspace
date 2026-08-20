# dispatch

`_ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream`

`DB_InsertDungeonEntrance_hour::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertDungeonEntrance_hour` | `0x084298a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084298a2  _ZN29DB_InsertDungeonEntrance_hour8dispatchEiiP6Stream
#           DB_InsertDungeonEntrance_hour::dispatch(int, int, Stream*)
# range [0x084298a2, 0x08429acf]
084298a2 +0x000:  push   %ebp
084298a3 +0x001:  mov    %esp,%ebp
084298a5 +0x003:  push   %edi
084298a6 +0x004:  push   %esi
084298a7 +0x005:  push   %ebx
084298a8 +0x006:  sub    $0x45c,%esp
084298ae +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084298b3 +0x011:  movl   $0x0,0x8(%esp)
084298bb +0x019:  movl   $0x4,0x4(%esp)
084298c3 +0x021:  mov    %eax,(%esp)
084298c6 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084298cb +0x029:  mov    %eax,-0x28(%ebp)
084298ce +0x02c:  movl   $0x0,-0x2c(%ebp)
084298d5 +0x033:  lea    -0x2c(%ebp),%eax
084298d8 +0x036:  mov    %eax,0x4(%esp)
084298dc +0x03a:  mov    0x14(%ebp),%eax
084298df +0x03d:  mov    %eax,(%esp)
084298e2 +0x040:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084298e7 +0x045:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084298ee +0x04c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084298f3 +0x051:  mov    %eax,-0x24(%ebp)
084298f6 +0x054:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084298fb +0x059:  mov    %eax,(%esp)
084298fe +0x05c:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
08429903 +0x061:  mov    %eax,-0x20(%ebp)
08429906 +0x064:  movl   $0x0,-0x30(%ebp)
0842990d +0x06b:  movl   $0x0,-0x34(%ebp)
08429914 +0x072:  movl   $0x0,-0x38(%ebp)
0842991b +0x079:  lea    -0x43c(%ebp),%ebx
08429921 +0x07f:  mov    $0x0,%eax
08429926 +0x084:  mov    $0x100,%edx
0842992b +0x089:  mov    %ebx,%edi
0842992d +0x08b:  mov    %edx,%ecx
0842992f +0x08d:  rep stos %eax,%es:(%edi)
08429931 +0x08f:  lea    -0x3c(%ebp),%eax
08429934 +0x092:  mov    %eax,(%esp)
08429937 +0x095:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0842993c +0x09a:  movl   $0x0,-0x1c(%ebp)
08429943 +0x0a1:  jmp    08429a2d <+0x18b>
08429948 +0x0a6:  lea    -0x30(%ebp),%eax
0842994b +0x0a9:  mov    %eax,0x4(%esp)
0842994f +0x0ad:  mov    0x14(%ebp),%eax
08429952 +0x0b0:  mov    %eax,(%esp)
08429955 +0x0b3:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842995a +0x0b8:  lea    -0x34(%ebp),%eax
0842995d +0x0bb:  mov    %eax,0x4(%esp)
08429961 +0x0bf:  mov    0x14(%ebp),%eax
08429964 +0x0c2:  mov    %eax,(%esp)
08429967 +0x0c5:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842996c +0x0ca:  lea    -0x38(%ebp),%eax
0842996f +0x0cd:  mov    %eax,0x4(%esp)
08429973 +0x0d1:  mov    0x14(%ebp),%eax
08429976 +0x0d4:  mov    %eax,(%esp)
08429979 +0x0d7:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842997e +0x0dc:  mov    -0x34(%ebp),%eax
08429981 +0x0df:  test   %eax,%eax
08429983 +0x0e1:  je     08429a28 <+0x186>
08429989 +0x0e7:  lea    -0x3c(%ebp),%eax
0842998c +0x0ea:  mov    %eax,(%esp)
0842998f +0x0ed:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08429994 +0x0f2:  test   %eax,%eax
08429996 +0x0f4:  setne  %al
08429999 +0x0f7:  test   %al,%al
0842999b +0x0f9:  je     084299d8 <+0x136>
0842999d +0x0fb:  mov    -0x38(%ebp),%ecx
084299a0 +0x0fe:  mov    -0x34(%ebp),%edx
084299a3 +0x101:  mov    -0x30(%ebp),%eax
084299a6 +0x104:  mov    %ecx,0x18(%esp)
084299aa +0x108:  mov    %edx,0x14(%esp)
084299ae +0x10c:  mov    %eax,0x10(%esp)
084299b2 +0x110:  mov    -0x24(%ebp),%eax
084299b5 +0x113:  mov    %eax,0xc(%esp)
084299b9 +0x117:  mov    -0x20(%ebp),%eax
084299bc +0x11a:  mov    %eax,0x8(%esp)
084299c0 +0x11e:  movl   $",(%d,from_unixtime(%d),%d,%d,%d)",0x4(%esp)
084299c8 +0x126:  lea    -0x43c(%ebp),%eax
084299ce +0x12c:  mov    %eax,(%esp)
084299d1 +0x12f:  call   0807e440 <_init+0xd38>
084299d6 +0x134:  jmp    08429a11 <+0x16f>
084299d8 +0x136:  mov    -0x38(%ebp),%ecx
084299db +0x139:  mov    -0x34(%ebp),%edx
084299de +0x13c:  mov    -0x30(%ebp),%eax
084299e1 +0x13f:  mov    %ecx,0x18(%esp)
084299e5 +0x143:  mov    %edx,0x14(%esp)
084299e9 +0x147:  mov    %eax,0x10(%esp)
084299ed +0x14b:  mov    -0x24(%ebp),%eax
084299f0 +0x14e:  mov    %eax,0xc(%esp)
084299f4 +0x152:  mov    -0x20(%ebp),%eax
084299f7 +0x155:  mov    %eax,0x8(%esp)
084299fb +0x159:  movl   $"(%d,from_unixtime(%d),%d,%d,%d)",0x4(%esp)
08429a03 +0x161:  lea    -0x43c(%ebp),%eax
08429a09 +0x167:  mov    %eax,(%esp)
08429a0c +0x16a:  call   0807e440 <_init+0xd38>
08429a11 +0x16f:  lea    -0x43c(%ebp),%eax
08429a17 +0x175:  mov    %eax,0x4(%esp)
08429a1b +0x179:  lea    -0x3c(%ebp),%eax
08429a1e +0x17c:  mov    %eax,(%esp)
08429a21 +0x17f:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
08429a26 +0x184:  jmp    08429a29 <+0x187>
08429a28 +0x186:  nop
08429a29 +0x187:  addl   $0x1,-0x1c(%ebp)
08429a2d +0x18b:  mov    -0x2c(%ebp),%eax
08429a30 +0x18e:  cmp    %eax,-0x1c(%ebp)
08429a33 +0x191:  setl   %al
08429a36 +0x194:  test   %al,%al
08429a38 +0x196:  jne    08429948 <+0xa6>
08429a3e +0x19c:  lea    -0x3c(%ebp),%eax
08429a41 +0x19f:  mov    %eax,(%esp)
08429a44 +0x1a2:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08429a49 +0x1a7:  test   %eax,%eax
08429a4b +0x1a9:  setne  %al
08429a4e +0x1ac:  test   %al,%al
08429a50 +0x1ae:  je     08429a95 <+0x1f3>
08429a52 +0x1b0:  lea    -0x3c(%ebp),%eax
08429a55 +0x1b3:  mov    %eax,(%esp)
08429a58 +0x1b6:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08429a5d +0x1bb:  mov    %eax,0x8(%esp)
08429a61 +0x1bf:  movl   $"inSert into log_dungeon_entrance_hour(channel_no,occ_date,dungeon_index,hour_enter_count, cnt_enter_count) values %s",0x4(%esp)
08429a69 +0x1c7:  mov    -0x28(%ebp),%eax
08429a6c +0x1ca:  mov    %eax,(%esp)
08429a6f +0x1cd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08429a74 +0x1d2:  movl   $0x1,0x4(%esp)
08429a7c +0x1da:  mov    -0x28(%ebp),%eax
08429a7f +0x1dd:  mov    %eax,(%esp)
08429a82 +0x1e0:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08429a87 +0x1e5:  xor    $0x1,%eax
08429a8a +0x1e8:  test   %al,%al
08429a8c +0x1ea:  je     08429a95 <+0x1f3>
08429a8e +0x1ec:  mov    $0x0,%ebx
08429a93 +0x1f1:  jmp    08429ab7 <+0x215>
08429a95 +0x1f3:  mov    $0x1,%ebx
08429a9a +0x1f8:  jmp    08429ab7 <+0x215>
08429a9c +0x1fa:  mov    %edx,%ebx
08429a9e +0x1fc:  mov    %eax,%esi
08429aa0 +0x1fe:  lea    -0x3c(%ebp),%eax
08429aa3 +0x201:  mov    %eax,(%esp)
08429aa6 +0x204:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08429aab +0x209:  mov    %esi,%eax
08429aad +0x20b:  mov    %ebx,%edx
08429aaf +0x20d:  mov    %eax,(%esp)
08429ab2 +0x210:  call   08ae3750 <_Unwind_Resume>
08429ab7 +0x215:  lea    -0x3c(%ebp),%eax
08429aba +0x218:  mov    %eax,(%esp)
08429abd +0x21b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08429ac2 +0x220:  mov    %ebx,%eax
08429ac4 +0x222:  add    $0x45c,%esp
08429aca +0x228:  pop    %ebx
08429acb +0x229:  pop    %esi
08429acc +0x22a:  pop    %edi
08429acd +0x22b:  pop    %ebp
08429ace +0x22c:  ret
08429acf +0x22d:  nop
```

## 反编译 C

```c
// DB_InsertDungeonEntrance_hour::dispatch @ 0x84298a2

/* DB_InsertDungeonEntrance_hour::dispatch(int, int, Stream*) */

undefined4 DB_InsertDungeonEntrance_hour::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  CEnvironment *this;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  Stream *in_stack_00000010;
  char local_440 [1024];
  string local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  MySQL *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  
  bVar5 = 0;
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_30 = 0;
  Stream::operator>>(in_stack_00000010,&local_30);
  local_28 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  this = (CEnvironment *)G_CEnvironment();
  local_24 = CEnvironment::get_channel_no(this);
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  pcVar4 = local_440;
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  std::string::string(local_40);
  for (local_20 = 0; local_20 < local_30; local_20 = local_20 + 1) {
                    /* try { // try from 08429955 to 08429a86 has its CatchHandler @ 08429a9c */
    Stream::operator>>(in_stack_00000010,&local_34);
    Stream::operator>>(in_stack_00000010,&local_38);
    Stream::operator>>(in_stack_00000010,&local_3c);
    if (local_38 != 0) {
      iVar3 = std::string::size(local_40);
      if (iVar3 == 0) {
        sprintf(local_440,"(%d,from_unixtime(%d),%d,%d,%d)",local_24,local_28,local_34,local_38,
                local_3c);
      }
      else {
        sprintf(local_440,",(%d,from_unixtime(%d),%d,%d,%d)",local_24,local_28,local_34,local_38,
                local_3c);
      }
      std::string::operator+=(local_40,local_440);
    }
  }
  iVar3 = std::string::size(local_40);
  if (iVar3 != 0) {
    uVar2 = std::string::c_str(local_40);
    MySQL::set_query(local_2c,
                     "inSert into log_dungeon_entrance_hour(channel_no,occ_date,dungeon_index,hour_enter_count, cnt_enter_count) values %s"
                     ,uVar2);
    cVar1 = MySQL::exec(local_2c,true);
    if (cVar1 != '\x01') {
      uVar2 = 0;
      goto LAB_08429ab7;
    }
  }
  uVar2 = 1;
LAB_08429ab7:
  std::string::~string(local_40);
  return uVar2;
}
```
