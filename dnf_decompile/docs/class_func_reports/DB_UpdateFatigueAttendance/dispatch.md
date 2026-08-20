# dispatch

`_ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream`

`DB_UpdateFatigueAttendance::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateFatigueAttendance` | `0x084444ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084444ec  _ZN26DB_UpdateFatigueAttendance8dispatchEiiP6Stream
#           DB_UpdateFatigueAttendance::dispatch(int, int, Stream*)
# range [0x084444ec, 0x084447d5]
084444ec +0x000:  push   %ebp
084444ed +0x001:  mov    %esp,%ebp
084444ef +0x003:  push   %edi
084444f0 +0x004:  push   %esi
084444f1 +0x005:  push   %ebx
084444f2 +0x006:  sub    $0x7c,%esp
084444f5 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084444fa +0x00e:  movl   $0x0,0x8(%esp)
08444502 +0x016:  movl   $0x9,0x4(%esp)
0844450a +0x01e:  mov    %eax,(%esp)
0844450d +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08444512 +0x026:  mov    %eax,-0x20(%ebp)
08444515 +0x029:  movl   $0x0,-0x30(%ebp)
0844451c +0x030:  movl   $0x0,-0x34(%ebp)
08444523 +0x037:  lea    -0x4c(%ebp),%eax
08444526 +0x03a:  mov    %eax,(%esp)
08444529 +0x03d:  call   083855c8 <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+&_ZL14gUnicodeBuffer+0x15068>  ; global constructors keyed to CServerEvent::m_nExpRate+&_ZL14gUnicodeBuffer+0x15068
0844452e +0x042:  lea    -0x30(%ebp),%eax
08444531 +0x045:  mov    %eax,0x4(%esp)
08444535 +0x049:  mov    0x14(%ebp),%eax
08444538 +0x04c:  mov    %eax,(%esp)
0844453b +0x04f:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08444540 +0x054:  lea    -0x34(%ebp),%eax
08444543 +0x057:  mov    %eax,0x4(%esp)
08444547 +0x05b:  mov    0x14(%ebp),%eax
0844454a +0x05e:  mov    %eax,(%esp)
0844454d +0x061:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08444552 +0x066:  movl   $0x0,-0x1c(%ebp)
08444559 +0x06d:  jmp    084445b8 <+0xcc>
0844455b +0x06f:  lea    -0x59(%ebp),%eax
0844455e +0x072:  mov    %eax,0x4(%esp)
08444562 +0x076:  mov    0x14(%ebp),%eax
08444565 +0x079:  mov    %eax,(%esp)
08444568 +0x07c:  call   0861c732 <_ZN6StreamrsERh>  ; Stream::operator>>(unsigned char&)
0844456d +0x081:  lea    -0x5c(%ebp),%eax
08444570 +0x084:  mov    %eax,0x4(%esp)
08444574 +0x088:  mov    0x14(%ebp),%eax
08444577 +0x08b:  mov    %eax,(%esp)
0844457a +0x08e:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
0844457f +0x093:  lea    -0x5c(%ebp),%eax
08444582 +0x096:  mov    %eax,0x8(%esp)
08444586 +0x09a:  lea    -0x59(%ebp),%eax
08444589 +0x09d:  mov    %eax,0x4(%esp)
0844458d +0x0a1:  lea    -0x24(%ebp),%eax
08444590 +0x0a4:  mov    %eax,(%esp)
08444593 +0x0a7:  call   08454084 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6c9a>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6c9a
08444598 +0x0ac:  lea    -0x2c(%ebp),%eax
0844459b +0x0af:  lea    -0x24(%ebp),%edx
0844459e +0x0b2:  mov    %edx,0x8(%esp)
084445a2 +0x0b6:  lea    -0x4c(%ebp),%edx
084445a5 +0x0b9:  mov    %edx,0x4(%esp)
084445a9 +0x0bd:  mov    %eax,(%esp)
084445ac +0x0c0:  call   084540b4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cca>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cca
084445b1 +0x0c5:  sub    $0x4,%esp
084445b4 +0x0c8:  addl   $0x1,-0x1c(%ebp)
084445b8 +0x0cc:  mov    -0x34(%ebp),%eax
084445bb +0x0cf:  cmp    %eax,-0x1c(%ebp)
084445be +0x0d2:  setl   %al
084445c1 +0x0d5:  test   %al,%al
084445c3 +0x0d7:  jne    0844455b <+0x6f>
084445c5 +0x0d9:  lea    -0x50(%ebp),%eax
084445c8 +0x0dc:  lea    -0x4c(%ebp),%edx
084445cb +0x0df:  mov    %edx,0x4(%esp)
084445cf +0x0e3:  mov    %eax,(%esp)
084445d2 +0x0e6:  call   0845015a <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d70>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d70
084445d7 +0x0eb:  sub    $0x4,%esp
084445da +0x0ee:  lea    -0x54(%ebp),%eax
084445dd +0x0f1:  lea    -0x4c(%ebp),%edx
084445e0 +0x0f4:  mov    %edx,0x4(%esp)
084445e4 +0x0f8:  mov    %eax,(%esp)
084445e7 +0x0fb:  call   08450180 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2d96>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2d96
084445ec +0x100:  sub    $0x4,%esp
084445ef +0x103:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084445f4 +0x108:  mov    %eax,(%esp)
084445f7 +0x10b:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084445fc +0x110:  movl   $0x56,0x4(%esp)
08444604 +0x118:  mov    %eax,(%esp)
08444607 +0x11b:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
0844460c +0x120:  mov    %eax,0x4(%esp)
08444610 +0x124:  lea    -0x58(%ebp),%eax
08444613 +0x127:  mov    %eax,(%esp)
08444616 +0x12a:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
0844461b +0x12f:  jmp    08444762 <+0x276>
08444620 +0x134:  lea    -0x50(%ebp),%eax
08444623 +0x137:  mov    %eax,(%esp)
08444626 +0x13a:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0844462b +0x13f:  movzwl 0x2(%eax),%eax
0844462f +0x143:  test   %ax,%ax
08444632 +0x146:  setg   %al
08444635 +0x149:  test   %al,%al
08444637 +0x14b:  je     08444757 <+0x26b>
0844463d +0x151:  mov    -0x30(%ebp),%eax
08444640 +0x154:  movl   $0x0,0x4(%esp)
08444648 +0x15c:  mov    %eax,(%esp)
0844464b +0x15f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08444650 +0x164:  mov    %eax,%ebx
08444652 +0x166:  lea    -0x50(%ebp),%eax
08444655 +0x169:  mov    %eax,(%esp)
08444658 +0x16c:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0844465d +0x171:  movzbl (%eax),%eax
08444660 +0x174:  movzbl %al,%edi
08444663 +0x177:  lea    -0x50(%ebp),%eax
08444666 +0x17a:  mov    %eax,(%esp)
08444669 +0x17d:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
0844466e +0x182:  movzwl 0x2(%eax),%eax
08444672 +0x186:  movswl %ax,%esi
08444675 +0x189:  lea    -0x58(%ebp),%eax
08444678 +0x18c:  mov    %eax,(%esp)
0844467b +0x18f:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08444680 +0x194:  mov    %ebx,0x14(%esp)
08444684 +0x198:  mov    %edi,0x10(%esp)
08444688 +0x19c:  mov    %esi,0xc(%esp)
0844468c +0x1a0:  mov    %eax,0x8(%esp)
08444690 +0x1a4:  movl   $"upDate %s set fatigue = fatigue + %d where occ_day = %d and m_id = %s",0x4(%esp)
08444698 +0x1ac:  mov    -0x20(%ebp),%eax
0844469b +0x1af:  mov    %eax,(%esp)
0844469e +0x1b2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084446a3 +0x1b7:  movl   $0x1,0x4(%esp)
084446ab +0x1bf:  mov    -0x20(%ebp),%eax
084446ae +0x1c2:  mov    %eax,(%esp)
084446b1 +0x1c5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084446b6 +0x1ca:  xor    $0x1,%eax
084446b9 +0x1cd:  test   %al,%al
084446bb +0x1cf:  jne    084446ce <+0x1e2>
084446bd +0x1d1:  mov    -0x20(%ebp),%eax
084446c0 +0x1d4:  mov    %eax,(%esp)
084446c3 +0x1d7:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084446c8 +0x1dc:  or     %edx,%eax
084446ca +0x1de:  test   %eax,%eax
084446cc +0x1e0:  jne    084446d5 <+0x1e9>
084446ce +0x1e2:  mov    $0x1,%eax
084446d3 +0x1e7:  jmp    084446da <+0x1ee>
084446d5 +0x1e9:  mov    $0x0,%eax
084446da +0x1ee:  test   %al,%al
084446dc +0x1f0:  je     08444757 <+0x26b>
084446de +0x1f2:  lea    -0x50(%ebp),%eax
084446e1 +0x1f5:  mov    %eax,(%esp)
084446e4 +0x1f8:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
084446e9 +0x1fd:  movzwl 0x2(%eax),%eax
084446ed +0x201:  movswl %ax,%edi
084446f0 +0x204:  mov    -0x30(%ebp),%eax
084446f3 +0x207:  movl   $0x0,0x4(%esp)
084446fb +0x20f:  mov    %eax,(%esp)
084446fe +0x212:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08444703 +0x217:  mov    %eax,%ebx
08444705 +0x219:  lea    -0x50(%ebp),%eax
08444708 +0x21c:  mov    %eax,(%esp)
0844470b +0x21f:  call   084501ba <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dd0>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dd0
08444710 +0x224:  movzbl (%eax),%eax
08444713 +0x227:  movzbl %al,%esi
08444716 +0x22a:  lea    -0x58(%ebp),%eax
08444719 +0x22d:  mov    %eax,(%esp)
0844471c +0x230:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08444721 +0x235:  mov    %edi,0x14(%esp)
08444725 +0x239:  mov    %ebx,0x10(%esp)
08444729 +0x23d:  mov    %esi,0xc(%esp)
0844472d +0x241:  mov    %eax,0x8(%esp)
08444731 +0x245:  movl   $"inSert into %s(occ_day,m_id,fatigue) values(%d,%s,%d)",0x4(%esp)
08444739 +0x24d:  mov    -0x20(%ebp),%eax
0844473c +0x250:  mov    %eax,(%esp)
0844473f +0x253:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08444744 +0x258:  movl   $0x1,0x4(%esp)
0844474c +0x260:  mov    -0x20(%ebp),%eax
0844474f +0x263:  mov    %eax,(%esp)
08444752 +0x266:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444757 +0x26b:  lea    -0x50(%ebp),%eax
0844475a +0x26e:  mov    %eax,(%esp)
0844475d +0x271:  call   084540e0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6cf6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6cf6
08444762 +0x276:  lea    -0x54(%ebp),%eax
08444765 +0x279:  mov    %eax,0x4(%esp)
08444769 +0x27d:  lea    -0x50(%ebp),%eax
0844476c +0x280:  mov    %eax,(%esp)
0844476f +0x283:  call   084501a6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x2dbc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x2dbc
08444774 +0x288:  test   %al,%al
08444776 +0x28a:  jne    08444620 <+0x134>
0844477c +0x290:  mov    $0x1,%ebx
08444781 +0x295:  lea    -0x58(%ebp),%eax
08444784 +0x298:  mov    %eax,(%esp)
08444787 +0x29b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0844478c +0x2a0:  jmp    084447be <+0x2d2>
0844478e +0x2a2:  mov    %edx,%ebx
08444790 +0x2a4:  mov    %eax,%esi
08444792 +0x2a6:  lea    -0x58(%ebp),%eax
08444795 +0x2a9:  mov    %eax,(%esp)
08444798 +0x2ac:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
0844479d +0x2b1:  mov    %esi,%eax
0844479f +0x2b3:  mov    %ebx,%edx
084447a1 +0x2b5:  jmp    084447a3 <+0x2b7>
084447a3 +0x2b7:  mov    %edx,%ebx
084447a5 +0x2b9:  mov    %eax,%esi
084447a7 +0x2bb:  lea    -0x4c(%ebp),%eax
084447aa +0x2be:  mov    %eax,(%esp)
084447ad +0x2c1:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
084447b2 +0x2c6:  mov    %esi,%eax
084447b4 +0x2c8:  mov    %ebx,%edx
084447b6 +0x2ca:  mov    %eax,(%esp)
084447b9 +0x2cd:  call   08ae3750 <_Unwind_Resume>
084447be +0x2d2:  lea    -0x4c(%ebp),%eax
084447c1 +0x2d5:  mov    %eax,(%esp)
084447c4 +0x2d8:  call   0837176e <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xb73a>  ; global constructors keyed to CServerEvent::m_nExpRate+0xb73a
084447c9 +0x2dd:  mov    %ebx,%eax
084447cb +0x2df:  lea    -0xc(%ebp),%esp
084447ce +0x2e2:  add    $0x0,%esp
084447d1 +0x2e5:  pop    %ebx
084447d2 +0x2e6:  pop    %esi
084447d3 +0x2e7:  pop    %edi
084447d4 +0x2e8:  pop    %ebp
084447d5 +0x2e9:  ret
```

## 反编译 C

```c
// DB_UpdateFatigueAttendance::dispatch @ 0x84444ec

/* DB_UpdateFatigueAttendance::dispatch(int, int, Stream*) */

undefined4 DB_UpdateFatigueAttendance::dispatch(int param_1,int param_2,Stream *param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  TCHAR *pTVar9;
  longlong lVar10;
  Stream *in_stack_00000010;
  short local_60;
  uchar local_5d;
  string local_5c;
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_58 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_54 [4];
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  local_50 [24];
  int local_38;
  uint local_34;
  pair local_30 [8];
  pair<unsigned_char_const,short> local_28 [4];
  MySQL *local_24;
  int local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_34 = 0;
  local_38 = 0;
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::map(local_50);
                    /* try { // try from 0844453b to 0844461a has its CatchHandler @ 084447a3 */
  Stream::operator>>(in_stack_00000010,&local_34);
  Stream::operator>>(in_stack_00000010,&local_38);
  for (local_20 = 0; local_20 < local_38; local_20 = local_20 + 1) {
    Stream::operator>>(in_stack_00000010,&local_5d);
    Stream::operator>>(in_stack_00000010,&local_60);
    std::pair<unsigned_char_const,short>::pair<unsigned_char&,short&>(local_28,&local_5d,&local_60);
    std::
    map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
    ::insert(local_30);
  }
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::begin(local_54);
  std::
  map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
  ::end(local_58);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar5 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x56);
  std::string::string((string *)&local_5c,psVar5);
  do {
    cVar4 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54,
                       (_Rb_tree_iterator *)local_58);
    if (cVar4 == '\0') {
                    /* try { // try from 08444787 to 0844478b has its CatchHandler @ 084447a3 */
      std::string::~string((string *)&local_5c);
      std::
      map<unsigned_char,short,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,short>>>
      ::~map(local_50);
      return 1;
    }
    iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
    if (0 < *(short *)(iVar6 + 2)) {
                    /* try { // try from 0844464b to 08444761 has its CatchHandler @ 0844478e */
      uVar7 = NumberToString(local_34,0);
      pbVar8 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                 ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                  local_54);
      bVar1 = *pbVar8;
      iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
      sVar2 = *(short *)(iVar6 + 2);
      pTVar9 = toTString(&local_5c);
      MySQL::set_query(local_24,
                       "upDate %s set fatigue = fatigue + %d where occ_day = %d and m_id = %s",
                       pTVar9,(int)sVar2,(uint)bVar1,uVar7);
      cVar4 = MySQL::exec(local_24,true);
      if (cVar4 == '\x01') {
        lVar10 = MySQL::getAffectedRowCount(local_24);
        if (lVar10 == 0) goto LAB_084446ce;
        bVar3 = false;
      }
      else {
LAB_084446ce:
        bVar3 = true;
      }
      if (bVar3) {
        iVar6 = std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
        sVar2 = *(short *)(iVar6 + 2);
        uVar7 = NumberToString(local_34,0);
        pbVar8 = (byte *)std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator->
                                   ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)
                                    local_54);
        bVar1 = *pbVar8;
        pTVar9 = toTString(&local_5c);
        MySQL::set_query(local_24,"inSert into %s(occ_day,m_id,fatigue) values(%d,%s,%d)",pTVar9,
                         (uint)bVar1,uVar7,(int)sVar2);
        MySQL::exec(local_24,true);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_char_const,short>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_char_const,short>> *)local_54);
  } while( true );
}
```
