# dispatch

`_ZN15DB_InsertPVPMap8dispatchEiiP6Stream`

`DB_InsertPVPMap::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertPVPMap` | `0x0842cb12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842cb12  _ZN15DB_InsertPVPMap8dispatchEiiP6Stream
#           DB_InsertPVPMap::dispatch(int, int, Stream*)
# range [0x0842cb12, 0x0842cc97]
0842cb12 +0x000:  push   %ebp
0842cb13 +0x001:  mov    %esp,%ebp
0842cb15 +0x003:  push   %esi
0842cb16 +0x004:  push   %ebx
0842cb17 +0x005:  sub    $0x440,%esp
0842cb1d +0x00b:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842cb22 +0x010:  movl   $0x0,0x8(%esp)
0842cb2a +0x018:  movl   $0x4,0x4(%esp)
0842cb32 +0x020:  mov    %eax,(%esp)
0842cb35 +0x023:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842cb3a +0x028:  mov    %eax,-0x10(%ebp)
0842cb3d +0x02b:  movl   $0x0,-0x14(%ebp)
0842cb44 +0x032:  movl   $0x0,-0x18(%ebp)
0842cb4b +0x039:  movl   $0x0,-0x1c(%ebp)
0842cb52 +0x040:  lea    -0x20(%ebp),%eax
0842cb55 +0x043:  mov    %eax,(%esp)
0842cb58 +0x046:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0842cb5d +0x04b:  lea    -0x14(%ebp),%eax
0842cb60 +0x04e:  mov    %eax,0x4(%esp)
0842cb64 +0x052:  mov    0x14(%ebp),%eax
0842cb67 +0x055:  mov    %eax,(%esp)
0842cb6a +0x058:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842cb6f +0x05d:  movl   $0x0,-0xc(%ebp)
0842cb76 +0x064:  jmp    0842cc0b <+0xf9>
0842cb7b +0x069:  lea    -0x18(%ebp),%eax
0842cb7e +0x06c:  mov    %eax,0x4(%esp)
0842cb82 +0x070:  mov    0x14(%ebp),%eax
0842cb85 +0x073:  mov    %eax,(%esp)
0842cb88 +0x076:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842cb8d +0x07b:  lea    -0x1c(%ebp),%eax
0842cb90 +0x07e:  mov    %eax,0x4(%esp)
0842cb94 +0x082:  mov    0x14(%ebp),%eax
0842cb97 +0x085:  mov    %eax,(%esp)
0842cb9a +0x088:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0842cb9f +0x08d:  mov    -0x1c(%ebp),%esi
0842cba2 +0x090:  mov    -0x18(%ebp),%ebx
0842cba5 +0x093:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0842cbaa +0x098:  mov    %eax,(%esp)
0842cbad +0x09b:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0842cbb2 +0x0a0:  mov    %esi,0x10(%esp)
0842cbb6 +0x0a4:  mov    %ebx,0xc(%esp)
0842cbba +0x0a8:  mov    %eax,0x8(%esp)
0842cbbe +0x0ac:  movl   $"(%d,now(),%d,%d)",0x4(%esp)
0842cbc6 +0x0b4:  lea    -0x420(%ebp),%eax
0842cbcc +0x0ba:  mov    %eax,(%esp)
0842cbcf +0x0bd:  call   0807e440 <_init+0xd38>
0842cbd4 +0x0c2:  lea    -0x420(%ebp),%eax
0842cbda +0x0c8:  mov    %eax,0x4(%esp)
0842cbde +0x0cc:  lea    -0x20(%ebp),%eax
0842cbe1 +0x0cf:  mov    %eax,(%esp)
0842cbe4 +0x0d2:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0842cbe9 +0x0d7:  mov    -0x14(%ebp),%eax
0842cbec +0x0da:  sub    $0x1,%eax
0842cbef +0x0dd:  cmp    -0xc(%ebp),%eax
0842cbf2 +0x0e0:  jle    0842cc07 <+0xf5>
0842cbf4 +0x0e2:  movl   $",",0x4(%esp)
0842cbfc +0x0ea:  lea    -0x20(%ebp),%eax
0842cbff +0x0ed:  mov    %eax,(%esp)
0842cc02 +0x0f0:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
0842cc07 +0x0f5:  addl   $0x1,-0xc(%ebp)
0842cc0b +0x0f9:  mov    -0x14(%ebp),%eax
0842cc0e +0x0fc:  cmp    %eax,-0xc(%ebp)
0842cc11 +0x0ff:  setl   %al
0842cc14 +0x102:  test   %al,%al
0842cc16 +0x104:  jne    0842cb7b <+0x69>
0842cc1c +0x10a:  lea    -0x20(%ebp),%eax
0842cc1f +0x10d:  mov    %eax,(%esp)
0842cc22 +0x110:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
0842cc27 +0x115:  mov    %eax,0x8(%esp)
0842cc2b +0x119:  movl   $"inSert into log_pvp_map(channel_no,occ_date,map_id,play_count) values%s",0x4(%esp)
0842cc33 +0x121:  mov    -0x10(%ebp),%eax
0842cc36 +0x124:  mov    %eax,(%esp)
0842cc39 +0x127:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842cc3e +0x12c:  movl   $0x1,0x4(%esp)
0842cc46 +0x134:  mov    -0x10(%ebp),%eax
0842cc49 +0x137:  mov    %eax,(%esp)
0842cc4c +0x13a:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842cc51 +0x13f:  xor    $0x1,%eax
0842cc54 +0x142:  test   %al,%al
0842cc56 +0x144:  je     0842cc5f <+0x14d>
0842cc58 +0x146:  mov    $0x0,%ebx
0842cc5d +0x14b:  jmp    0842cc81 <+0x16f>
0842cc5f +0x14d:  mov    $0x1,%ebx
0842cc64 +0x152:  jmp    0842cc81 <+0x16f>
0842cc66 +0x154:  mov    %edx,%ebx
0842cc68 +0x156:  mov    %eax,%esi
0842cc6a +0x158:  lea    -0x20(%ebp),%eax
0842cc6d +0x15b:  mov    %eax,(%esp)
0842cc70 +0x15e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0842cc75 +0x163:  mov    %esi,%eax
0842cc77 +0x165:  mov    %ebx,%edx
0842cc79 +0x167:  mov    %eax,(%esp)
0842cc7c +0x16a:  call   08ae3750 <_Unwind_Resume>
0842cc81 +0x16f:  lea    -0x20(%ebp),%eax
0842cc84 +0x172:  mov    %eax,(%esp)
0842cc87 +0x175:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0842cc8c +0x17a:  mov    %ebx,%eax
0842cc8e +0x17c:  add    $0x440,%esp
0842cc94 +0x182:  pop    %ebx
0842cc95 +0x183:  pop    %esi
0842cc96 +0x184:  pop    %ebp
0842cc97 +0x185:  ret
```

## 反编译 C

```c
// DB_InsertPVPMap::dispatch @ 0x842cb12

/* DB_InsertPVPMap::dispatch(int, int, Stream*) */

bool DB_InsertPVPMap::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  CEnvironment *this;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  char local_424 [1024];
  string local_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  MySQL *local_14;
  int local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  std::string::string(local_24);
                    /* try { // try from 0842cb6a to 0842cc50 has its CatchHandler @ 0842cc66 */
  Stream::operator>>(in_stack_00000010,&local_18);
  for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
    Stream::operator>>(in_stack_00000010,&local_1c);
    Stream::operator>>(in_stack_00000010,&local_20);
    iVar2 = local_1c;
    iVar1 = local_20;
    this = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_channel_no(this);
    sprintf(local_424,"(%d,now(),%d,%d)",uVar4,iVar2,iVar1);
    std::string::operator+=(local_24,local_424);
    if (local_10 < local_18 + -1) {
      std::string::operator+=(local_24,",");
    }
  }
  uVar4 = std::string::c_str(local_24);
  MySQL::set_query(local_14,
                   "inSert into log_pvp_map(channel_no,occ_date,map_id,play_count) values%s",uVar4);
  cVar3 = MySQL::exec(local_14,true);
  std::string::~string(local_24);
  return cVar3 == '\x01';
}
```
