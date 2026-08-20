# dispatch

`_ZN19DB_InsertDungeonExp8dispatchEiiP6Stream`

`DB_InsertDungeonExp::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertDungeonExp` | `0x0842e944` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e944  _ZN19DB_InsertDungeonExp8dispatchEiiP6Stream
#           DB_InsertDungeonExp::dispatch(int, int, Stream*)
# range [0x0842e944, 0x0842eb2d]
0842e944 +0x000:  push   %ebp
0842e945 +0x001:  mov    %esp,%ebp
0842e947 +0x003:  push   %edi
0842e948 +0x004:  push   %esi
0842e949 +0x005:  push   %ebx
0842e94a +0x006:  sub    $0x46c,%esp
0842e950 +0x00c:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842e955 +0x011:  movl   $0x0,0x8(%esp)
0842e95d +0x019:  movl   $0x4,0x4(%esp)
0842e965 +0x021:  mov    %eax,(%esp)
0842e968 +0x024:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842e96d +0x029:  mov    %eax,-0x24(%ebp)
0842e970 +0x02c:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0842e977 +0x033:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0842e97c +0x038:  mov    %eax,-0x20(%ebp)
0842e97f +0x03b:  movl   $0x0,-0x28(%ebp)
0842e986 +0x042:  movl   $0x0,-0x2c(%ebp)
0842e98d +0x049:  movl   $0x0,-0x30(%ebp)
0842e994 +0x050:  movl   $0x0,-0x34(%ebp)
0842e99b +0x057:  lea    -0x38(%ebp),%eax
0842e99e +0x05a:  mov    %eax,(%esp)
0842e9a1 +0x05d:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0842e9a6 +0x062:  movl   $0x0,-0x3c(%ebp)
0842e9ad +0x069:  lea    -0x3c(%ebp),%eax
0842e9b0 +0x06c:  mov    %eax,0x4(%esp)
0842e9b4 +0x070:  mov    0x14(%ebp),%eax
0842e9b7 +0x073:  mov    %eax,(%esp)
0842e9ba +0x076:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842e9bf +0x07b:  movl   $0x0,-0x1c(%ebp)
0842e9c6 +0x082:  jmp    0842eaa0 <+0x15c>
0842e9cb +0x087:  lea    -0x28(%ebp),%eax
0842e9ce +0x08a:  mov    %eax,0x4(%esp)
0842e9d2 +0x08e:  mov    0x14(%ebp),%eax
0842e9d5 +0x091:  mov    %eax,(%esp)
0842e9d8 +0x094:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842e9dd +0x099:  lea    -0x2c(%ebp),%eax
0842e9e0 +0x09c:  mov    %eax,0x4(%esp)
0842e9e4 +0x0a0:  mov    0x14(%ebp),%eax
0842e9e7 +0x0a3:  mov    %eax,(%esp)
0842e9ea +0x0a6:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842e9ef +0x0ab:  lea    -0x30(%ebp),%eax
0842e9f2 +0x0ae:  mov    %eax,0x4(%esp)
0842e9f6 +0x0b2:  mov    0x14(%ebp),%eax
0842e9f9 +0x0b5:  mov    %eax,(%esp)
0842e9fc +0x0b8:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842ea01 +0x0bd:  lea    -0x34(%ebp),%eax
0842ea04 +0x0c0:  mov    %eax,0x4(%esp)
0842ea08 +0x0c4:  mov    0x14(%ebp),%eax
0842ea0b +0x0c7:  mov    %eax,(%esp)
0842ea0e +0x0ca:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842ea13 +0x0cf:  mov    -0x34(%ebp),%eax
0842ea16 +0x0d2:  mov    %eax,-0x44c(%ebp)
0842ea1c +0x0d8:  mov    -0x30(%ebp),%edi
0842ea1f +0x0db:  mov    -0x2c(%ebp),%esi
0842ea22 +0x0de:  mov    -0x28(%ebp),%ebx
0842ea25 +0x0e1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842ea2a +0x0e6:  mov    %eax,(%esp)
0842ea2d +0x0e9:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0842ea32 +0x0ee:  mov    -0x44c(%ebp),%edx
0842ea38 +0x0f4:  mov    %edx,0x1c(%esp)
0842ea3c +0x0f8:  mov    %edi,0x18(%esp)
0842ea40 +0x0fc:  mov    %esi,0x14(%esp)
0842ea44 +0x100:  mov    %ebx,0x10(%esp)
0842ea48 +0x104:  mov    %eax,0xc(%esp)
0842ea4c +0x108:  mov    -0x20(%ebp),%eax
0842ea4f +0x10b:  mov    %eax,0x8(%esp)
0842ea53 +0x10f:  movl   $"(from_unixtime(%d),%d,%d,%d,%d,%d)",0x4(%esp)
0842ea5b +0x117:  lea    -0x43c(%ebp),%eax
0842ea61 +0x11d:  mov    %eax,(%esp)
0842ea64 +0x120:  call   0807e440 <_init+0xd38>
0842ea69 +0x125:  lea    -0x43c(%ebp),%eax
0842ea6f +0x12b:  mov    %eax,0x4(%esp)
0842ea73 +0x12f:  lea    -0x38(%ebp),%eax
0842ea76 +0x132:  mov    %eax,(%esp)
0842ea79 +0x135:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0842ea7e +0x13a:  mov    -0x3c(%ebp),%eax
0842ea81 +0x13d:  sub    $0x1,%eax
0842ea84 +0x140:  cmp    -0x1c(%ebp),%eax
0842ea87 +0x143:  jle    0842ea9c <+0x158>
0842ea89 +0x145:  movl   $",",0x4(%esp)
0842ea91 +0x14d:  lea    -0x38(%ebp),%eax
0842ea94 +0x150:  mov    %eax,(%esp)
0842ea97 +0x153:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0842ea9c +0x158:  addl   $0x1,-0x1c(%ebp)
0842eaa0 +0x15c:  mov    -0x3c(%ebp),%eax
0842eaa3 +0x15f:  cmp    %eax,-0x1c(%ebp)
0842eaa6 +0x162:  setl   %al
0842eaa9 +0x165:  test   %al,%al
0842eaab +0x167:  jne    0842e9cb <+0x87>
0842eab1 +0x16d:  lea    -0x38(%ebp),%eax
0842eab4 +0x170:  mov    %eax,(%esp)
0842eab7 +0x173:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0842eabc +0x178:  mov    %eax,0x8(%esp)
0842eac0 +0x17c:  movl   $"inSert into log_dungeon_exp(occ_time,channel_no,lev,exp,fatigue,user_count) values%s",0x4(%esp)
0842eac8 +0x184:  mov    -0x24(%ebp),%eax
0842eacb +0x187:  mov    %eax,(%esp)
0842eace +0x18a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842ead3 +0x18f:  movl   $0x1,0x4(%esp)
0842eadb +0x197:  mov    -0x24(%ebp),%eax
0842eade +0x19a:  mov    %eax,(%esp)
0842eae1 +0x19d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842eae6 +0x1a2:  xor    $0x1,%eax
0842eae9 +0x1a5:  test   %al,%al
0842eaeb +0x1a7:  je     0842eaf4 <+0x1b0>
0842eaed +0x1a9:  mov    $0x0,%ebx
0842eaf2 +0x1ae:  jmp    0842eb16 <+0x1d2>
0842eaf4 +0x1b0:  mov    $0x1,%ebx
0842eaf9 +0x1b5:  jmp    0842eb16 <+0x1d2>
0842eafb +0x1b7:  mov    %edx,%ebx
0842eafd +0x1b9:  mov    %eax,%esi
0842eaff +0x1bb:  lea    -0x38(%ebp),%eax
0842eb02 +0x1be:  mov    %eax,(%esp)
0842eb05 +0x1c1:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0842eb0a +0x1c6:  mov    %esi,%eax
0842eb0c +0x1c8:  mov    %ebx,%edx
0842eb0e +0x1ca:  mov    %eax,(%esp)
0842eb11 +0x1cd:  call   08ae3750 <_Unwind_Resume>
0842eb16 +0x1d2:  lea    -0x38(%ebp),%eax
0842eb19 +0x1d5:  mov    %eax,(%esp)
0842eb1c +0x1d8:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0842eb21 +0x1dd:  mov    %ebx,%eax
0842eb23 +0x1df:  add    $0x46c,%esp
0842eb29 +0x1e5:  pop    %ebx
0842eb2a +0x1e6:  pop    %esi
0842eb2b +0x1e7:  pop    %edi
0842eb2c +0x1e8:  pop    %ebp
0842eb2d +0x1e9:  ret
```

## 反编译 C

```c
// DB_InsertDungeonExp::dispatch @ 0x842e944

/* DB_InsertDungeonExp::dispatch(int, int, Stream*) */

bool DB_InsertDungeonExp::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  CEnvironment *this;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  char local_440 [1024];
  int local_40;
  string local_3c [4];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  MySQL *local_28;
  undefined4 local_24;
  int local_20;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  std::string::string(local_3c);
  local_40 = 0;
                    /* try { // try from 0842e9ba to 0842eae5 has its CatchHandler @ 0842eafb */
  Stream::operator>>(in_stack_00000010,&local_40);
  for (local_20 = 0; local_20 < local_40; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,&local_2c);
    Stream::operator>>(in_stack_00000010,&local_30);
    Stream::operator>>(in_stack_00000010,&local_34);
    Stream::operator>>(in_stack_00000010,&local_38);
    iVar4 = local_2c;
    iVar3 = local_30;
    iVar2 = local_34;
    iVar1 = local_38;
    this = (CEnvironment *)G_CEnvironment();
    uVar6 = CEnvironment::get_channel_no(this);
    sprintf(local_440,"(from_unixtime(%d),%d,%d,%d,%d,%d)",local_24,uVar6,iVar4,iVar3,iVar2,iVar1);
    std::string::operator+=(local_3c,local_440);
    if (local_20 < local_40 + -1) {
      std::string::operator+=(local_3c,",");
    }
  }
  uVar6 = std::string::c_str(local_3c);
  MySQL::set_query(local_28,
                   "inSert into log_dungeon_exp(occ_time,channel_no,lev,exp,fatigue,user_count) values%s"
                   ,uVar6);
  cVar5 = MySQL::exec(local_28,true);
  std::string::~string(local_3c);
  return cVar5 == '\x01';
}
```
