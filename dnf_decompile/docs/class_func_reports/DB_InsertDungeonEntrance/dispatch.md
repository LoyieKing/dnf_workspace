# dispatch

`_ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream`

`DB_InsertDungeonEntrance::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertDungeonEntrance` | `0x08429696` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08429696  _ZN24DB_InsertDungeonEntrance8dispatchEiiP6Stream
#           DB_InsertDungeonEntrance::dispatch(int, int, Stream*)
# range [0x08429696, 0x084298a1]
08429696 +0x000:  push   %ebp
08429697 +0x001:  mov    %esp,%ebp
08429699 +0x003:  push   %edi
0842969a +0x004:  push   %esi
0842969b +0x005:  push   %ebx
0842969c +0x006:  sub    $0x45c,%esp
084296a2 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084296a7 +0x011:  movl   $0x0,0x8(%esp)
084296af +0x019:  movl   $0x4,0x4(%esp)
084296b7 +0x021:  mov    %eax,(%esp)
084296ba +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084296bf +0x029:  mov    %eax,-0x28(%ebp)
084296c2 +0x02c:  movl   $0x0,-0x2c(%ebp)
084296c9 +0x033:  lea    -0x2c(%ebp),%eax
084296cc +0x036:  mov    %eax,0x4(%esp)
084296d0 +0x03a:  mov    0x14(%ebp),%eax
084296d3 +0x03d:  mov    %eax,(%esp)
084296d6 +0x040:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084296db +0x045:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084296e2 +0x04c:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084296e7 +0x051:  mov    %eax,-0x24(%ebp)
084296ea +0x054:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084296ef +0x059:  mov    %eax,(%esp)
084296f2 +0x05c:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
084296f7 +0x061:  mov    %eax,-0x20(%ebp)
084296fa +0x064:  movl   $0x0,-0x30(%ebp)
08429701 +0x06b:  movl   $0x0,-0x34(%ebp)
08429708 +0x072:  movl   $0x0,-0x38(%ebp)
0842970f +0x079:  lea    -0x43c(%ebp),%ebx
08429715 +0x07f:  mov    $0x0,%eax
0842971a +0x084:  mov    $0x100,%edx
0842971f +0x089:  mov    %ebx,%edi
08429721 +0x08b:  mov    %edx,%ecx
08429723 +0x08d:  rep stos %eax,%es:(%edi)
08429725 +0x08f:  lea    -0x3c(%ebp),%eax
08429728 +0x092:  mov    %eax,(%esp)
0842972b +0x095:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
08429730 +0x09a:  movl   $0x0,-0x1c(%ebp)
08429737 +0x0a1:  jmp    08429813 <+0x17d>
0842973c +0x0a6:  lea    -0x30(%ebp),%eax
0842973f +0x0a9:  mov    %eax,0x4(%esp)
08429743 +0x0ad:  mov    0x14(%ebp),%eax
08429746 +0x0b0:  mov    %eax,(%esp)
08429749 +0x0b3:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842974e +0x0b8:  lea    -0x34(%ebp),%eax
08429751 +0x0bb:  mov    %eax,0x4(%esp)
08429755 +0x0bf:  mov    0x14(%ebp),%eax
08429758 +0x0c2:  mov    %eax,(%esp)
0842975b +0x0c5:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08429760 +0x0ca:  lea    -0x38(%ebp),%eax
08429763 +0x0cd:  mov    %eax,0x4(%esp)
08429767 +0x0d1:  mov    0x14(%ebp),%eax
0842976a +0x0d4:  mov    %eax,(%esp)
0842976d +0x0d7:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08429772 +0x0dc:  lea    -0x3c(%ebp),%eax
08429775 +0x0df:  mov    %eax,(%esp)
08429778 +0x0e2:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
0842977d +0x0e7:  test   %eax,%eax
0842977f +0x0e9:  setne  %al
08429782 +0x0ec:  test   %al,%al
08429784 +0x0ee:  je     084297c1 <+0x12b>
08429786 +0x0f0:  mov    -0x38(%ebp),%ecx
08429789 +0x0f3:  mov    -0x34(%ebp),%edx
0842978c +0x0f6:  mov    -0x30(%ebp),%eax
0842978f +0x0f9:  mov    %ecx,0x18(%esp)
08429793 +0x0fd:  mov    %edx,0x14(%esp)
08429797 +0x101:  mov    %eax,0x10(%esp)
0842979b +0x105:  mov    -0x24(%ebp),%eax
0842979e +0x108:  mov    %eax,0xc(%esp)
084297a2 +0x10c:  mov    -0x20(%ebp),%eax
084297a5 +0x10f:  mov    %eax,0x8(%esp)
084297a9 +0x113:  movl   $",(%d,from_unixtime(%d),%d,%d,%d)",0x4(%esp)
084297b1 +0x11b:  lea    -0x43c(%ebp),%eax
084297b7 +0x121:  mov    %eax,(%esp)
084297ba +0x124:  call   0807e440 <_init+0xd38>
084297bf +0x129:  jmp    084297fa <+0x164>
084297c1 +0x12b:  mov    -0x38(%ebp),%ecx
084297c4 +0x12e:  mov    -0x34(%ebp),%edx
084297c7 +0x131:  mov    -0x30(%ebp),%eax
084297ca +0x134:  mov    %ecx,0x18(%esp)
084297ce +0x138:  mov    %edx,0x14(%esp)
084297d2 +0x13c:  mov    %eax,0x10(%esp)
084297d6 +0x140:  mov    -0x24(%ebp),%eax
084297d9 +0x143:  mov    %eax,0xc(%esp)
084297dd +0x147:  mov    -0x20(%ebp),%eax
084297e0 +0x14a:  mov    %eax,0x8(%esp)
084297e4 +0x14e:  movl   $"(%d,from_unixtime(%d),%d,%d,%d)",0x4(%esp)
084297ec +0x156:  lea    -0x43c(%ebp),%eax
084297f2 +0x15c:  mov    %eax,(%esp)
084297f5 +0x15f:  call   0807e440 <_init+0xd38>
084297fa +0x164:  lea    -0x43c(%ebp),%eax
08429800 +0x16a:  mov    %eax,0x4(%esp)
08429804 +0x16e:  lea    -0x3c(%ebp),%eax
08429807 +0x171:  mov    %eax,(%esp)
0842980a +0x174:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0842980f +0x179:  addl   $0x1,-0x1c(%ebp)
08429813 +0x17d:  mov    -0x2c(%ebp),%eax
08429816 +0x180:  cmp    %eax,-0x1c(%ebp)
08429819 +0x183:  setl   %al
0842981c +0x186:  test   %al,%al
0842981e +0x188:  jne    0842973c <+0xa6>
08429824 +0x18e:  lea    -0x3c(%ebp),%eax
08429827 +0x191:  mov    %eax,(%esp)
0842982a +0x194:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0842982f +0x199:  mov    %eax,0x8(%esp)
08429833 +0x19d:  movl   $"inSert into log_dungeon_entrance(channel_no,occ_date,dungeon_index,enter_count, exercise_count) values%s",0x4(%esp)
0842983b +0x1a5:  mov    -0x28(%ebp),%eax
0842983e +0x1a8:  mov    %eax,(%esp)
08429841 +0x1ab:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08429846 +0x1b0:  movl   $0x1,0x4(%esp)
0842984e +0x1b8:  mov    -0x28(%ebp),%eax
08429851 +0x1bb:  mov    %eax,(%esp)
08429854 +0x1be:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08429859 +0x1c3:  xor    $0x1,%eax
0842985c +0x1c6:  test   %al,%al
0842985e +0x1c8:  je     08429867 <+0x1d1>
08429860 +0x1ca:  mov    $0x0,%ebx
08429865 +0x1cf:  jmp    08429889 <+0x1f3>
08429867 +0x1d1:  mov    $0x1,%ebx
0842986c +0x1d6:  jmp    08429889 <+0x1f3>
0842986e +0x1d8:  mov    %edx,%ebx
08429870 +0x1da:  mov    %eax,%esi
08429872 +0x1dc:  lea    -0x3c(%ebp),%eax
08429875 +0x1df:  mov    %eax,(%esp)
08429878 +0x1e2:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0842987d +0x1e7:  mov    %esi,%eax
0842987f +0x1e9:  mov    %ebx,%edx
08429881 +0x1eb:  mov    %eax,(%esp)
08429884 +0x1ee:  call   08ae3750 <_Unwind_Resume>
08429889 +0x1f3:  lea    -0x3c(%ebp),%eax
0842988c +0x1f6:  mov    %eax,(%esp)
0842988f +0x1f9:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08429894 +0x1fe:  mov    %ebx,%eax
08429896 +0x200:  add    $0x45c,%esp
0842989c +0x206:  pop    %ebx
0842989d +0x207:  pop    %esi
0842989e +0x208:  pop    %edi
0842989f +0x209:  pop    %ebp
084298a0 +0x20a:  ret
084298a1 +0x20b:  nop
```

## 反编译 C

```c
// DB_InsertDungeonEntrance::dispatch @ 0x8429696

/* DB_InsertDungeonEntrance::dispatch(int, int, Stream*) */

bool DB_InsertDungeonEntrance::dispatch(int param_1,int param_2,Stream *param_3)

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
                    /* try { // try from 08429749 to 08429858 has its CatchHandler @ 0842986e */
    Stream::operator>>(in_stack_00000010,&local_34);
    Stream::operator>>(in_stack_00000010,&local_38);
    Stream::operator>>(in_stack_00000010,&local_3c);
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
  uVar2 = std::string::c_str(local_40);
  MySQL::set_query(local_2c,
                   "inSert into log_dungeon_entrance(channel_no,occ_date,dungeon_index,enter_count, exercise_count) values%s"
                   ,uVar2);
  cVar1 = MySQL::exec(local_2c,true);
  std::string::~string(local_40);
  return cVar1 == '\x01';
}
```
