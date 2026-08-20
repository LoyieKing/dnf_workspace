# dispatch

`_ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream`

`DB_UpdateUserFatigueQuantity::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateUserFatigueQuantity` | `0x08441a8e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08441a8e  _ZN28DB_UpdateUserFatigueQuantity8dispatchEiiP6Stream
#           DB_UpdateUserFatigueQuantity::dispatch(int, int, Stream*)
# range [0x08441a8e, 0x08441c29]
08441a8e +0x000:  push   %ebp
08441a8f +0x001:  mov    %esp,%ebp
08441a91 +0x003:  push   %esi
08441a92 +0x004:  push   %ebx
08441a93 +0x005:  sub    $0x30,%esp
08441a96 +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08441a9b +0x00d:  movl   $0x0,0x8(%esp)
08441aa3 +0x015:  movl   $0x9,0x4(%esp)
08441aab +0x01d:  mov    %eax,(%esp)
08441aae +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08441ab3 +0x025:  mov    %eax,-0xc(%ebp)
08441ab6 +0x028:  movl   $0x0,-0x10(%ebp)
08441abd +0x02f:  movl   $0x0,-0x14(%ebp)
08441ac4 +0x036:  lea    -0x10(%ebp),%eax
08441ac7 +0x039:  mov    %eax,0x4(%esp)
08441acb +0x03d:  mov    0x14(%ebp),%eax
08441ace +0x040:  mov    %eax,(%esp)
08441ad1 +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08441ad6 +0x048:  lea    -0x14(%ebp),%eax
08441ad9 +0x04b:  mov    %eax,0x4(%esp)
08441add +0x04f:  mov    0x14(%ebp),%eax
08441ae0 +0x052:  mov    %eax,(%esp)
08441ae3 +0x055:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08441ae8 +0x05a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08441aed +0x05f:  mov    %eax,(%esp)
08441af0 +0x062:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08441af5 +0x067:  movl   $0x199,0x4(%esp)
08441afd +0x06f:  mov    %eax,(%esp)
08441b00 +0x072:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
08441b05 +0x077:  mov    %eax,0x4(%esp)
08441b09 +0x07b:  lea    -0x18(%ebp),%eax
08441b0c +0x07e:  mov    %eax,(%esp)
08441b0f +0x081:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08441b14 +0x086:  mov    -0x10(%ebp),%eax
08441b17 +0x089:  movl   $0x0,0x4(%esp)
08441b1f +0x091:  mov    %eax,(%esp)
08441b22 +0x094:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08441b27 +0x099:  mov    %eax,%ebx
08441b29 +0x09b:  mov    -0x14(%ebp),%esi
08441b2c +0x09e:  lea    -0x18(%ebp),%eax
08441b2f +0x0a1:  mov    %eax,(%esp)
08441b32 +0x0a4:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08441b37 +0x0a9:  mov    %ebx,0x10(%esp)
08441b3b +0x0ad:  mov    %esi,0xc(%esp)
08441b3f +0x0b1:  mov    %eax,0x8(%esp)
08441b43 +0x0b5:  movl   $"upDate %s set fatigue_quantity=fatigue_quantity+%d where m_id=%s",0x4(%esp)
08441b4b +0x0bd:  mov    -0xc(%ebp),%eax
08441b4e +0x0c0:  mov    %eax,(%esp)
08441b51 +0x0c3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441b56 +0x0c8:  movl   $0x1,0x4(%esp)
08441b5e +0x0d0:  mov    -0xc(%ebp),%eax
08441b61 +0x0d3:  mov    %eax,(%esp)
08441b64 +0x0d6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08441b69 +0x0db:  xor    $0x1,%eax
08441b6c +0x0de:  test   %al,%al
08441b6e +0x0e0:  je     08441b7a <+0xec>
08441b70 +0x0e2:  mov    $0x0,%ebx
08441b75 +0x0e7:  jmp    08441c15 <+0x187>
08441b7a +0x0ec:  mov    -0xc(%ebp),%eax
08441b7d +0x0ef:  mov    %eax,(%esp)
08441b80 +0x0f2:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08441b85 +0x0f7:  or     %edx,%eax
08441b87 +0x0f9:  test   %eax,%eax
08441b89 +0x0fb:  sete   %al
08441b8c +0x0fe:  test   %al,%al
08441b8e +0x100:  je     08441bf3 <+0x165>
08441b90 +0x102:  mov    -0x14(%ebp),%esi
08441b93 +0x105:  mov    -0x10(%ebp),%eax
08441b96 +0x108:  movl   $0x0,0x4(%esp)
08441b9e +0x110:  mov    %eax,(%esp)
08441ba1 +0x113:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08441ba6 +0x118:  mov    %eax,%ebx
08441ba8 +0x11a:  lea    -0x18(%ebp),%eax
08441bab +0x11d:  mov    %eax,(%esp)
08441bae +0x120:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08441bb3 +0x125:  mov    %esi,0x10(%esp)
08441bb7 +0x129:  mov    %ebx,0xc(%esp)
08441bbb +0x12d:  mov    %eax,0x8(%esp)
08441bbf +0x131:  movl   $"inSert into %s(m_id, fatigue_quantity) values(%s, %d)",0x4(%esp)
08441bc7 +0x139:  mov    -0xc(%ebp),%eax
08441bca +0x13c:  mov    %eax,(%esp)
08441bcd +0x13f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441bd2 +0x144:  movl   $0x1,0x4(%esp)
08441bda +0x14c:  mov    -0xc(%ebp),%eax
08441bdd +0x14f:  mov    %eax,(%esp)
08441be0 +0x152:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08441be5 +0x157:  xor    $0x1,%eax
08441be8 +0x15a:  test   %al,%al
08441bea +0x15c:  je     08441bf3 <+0x165>
08441bec +0x15e:  mov    $0x0,%ebx
08441bf1 +0x163:  jmp    08441c15 <+0x187>
08441bf3 +0x165:  mov    $0x1,%ebx
08441bf8 +0x16a:  jmp    08441c15 <+0x187>
08441bfa +0x16c:  mov    %edx,%ebx
08441bfc +0x16e:  mov    %eax,%esi
08441bfe +0x170:  lea    -0x18(%ebp),%eax
08441c01 +0x173:  mov    %eax,(%esp)
08441c04 +0x176:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08441c09 +0x17b:  mov    %esi,%eax
08441c0b +0x17d:  mov    %ebx,%edx
08441c0d +0x17f:  mov    %eax,(%esp)
08441c10 +0x182:  call   08ae3750 <_Unwind_Resume>
08441c15 +0x187:  lea    -0x18(%ebp),%eax
08441c18 +0x18a:  mov    %eax,(%esp)
08441c1b +0x18d:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08441c20 +0x192:  mov    %ebx,%eax
08441c22 +0x194:  add    $0x30,%esp
08441c25 +0x197:  pop    %ebx
08441c26 +0x198:  pop    %esi
08441c27 +0x199:  pop    %ebp
08441c28 +0x19a:  ret
08441c29 +0x19b:  nop
```

## 反编译 C

```c
// DB_UpdateUserFatigueQuantity::dispatch @ 0x8441a8e

/* DB_UpdateUserFatigueQuantity::dispatch(int, int, Stream*) */

undefined4 DB_UpdateUserFatigueQuantity::dispatch(int param_1,int param_2,Stream *param_3)

{
  uint uVar1;
  char cVar2;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar3;
  undefined4 uVar4;
  TCHAR *pTVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  string local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar3 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x199);
  std::string::string((string *)&local_1c,psVar3);
                    /* try { // try from 08441b22 to 08441be4 has its CatchHandler @ 08441bfa */
  uVar4 = NumberToString(local_14,0);
  uVar1 = local_18;
  pTVar5 = toTString(&local_1c);
  MySQL::set_query(local_10,"upDate %s set fatigue_quantity=fatigue_quantity+%d where m_id=%s",
                   pTVar5,uVar1,uVar4);
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    lVar6 = MySQL::getAffectedRowCount(local_10);
    uVar1 = local_18;
    if (lVar6 == 0) {
      uVar4 = NumberToString(local_14,0);
      pTVar5 = toTString(&local_1c);
      MySQL::set_query(local_10,"inSert into %s(m_id, fatigue_quantity) values(%s, %d)",pTVar5,uVar4
                       ,uVar1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 != '\x01') {
        uVar4 = 0;
        goto LAB_08441c15;
      }
    }
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
LAB_08441c15:
  std::string::~string((string *)&local_1c);
  return uVar4;
}
```
