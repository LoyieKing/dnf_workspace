# dispatch

`_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream`

`DB_UpdateUserGiftFatigueQuantity::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateUserGiftFatigueQuantity` | `0x08441d1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08441d1c  _ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream
#           DB_UpdateUserGiftFatigueQuantity::dispatch(int, int, Stream*)
# range [0x08441d1c, 0x08441fdd]
08441d1c +0x000:  push   %ebp
08441d1d +0x001:  mov    %esp,%ebp
08441d1f +0x003:  push   %esi
08441d20 +0x004:  push   %ebx
08441d21 +0x005:  sub    $0x40,%esp
08441d24 +0x008:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08441d29 +0x00d:  mov    %eax,(%esp)
08441d2c +0x010:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08441d31 +0x015:  mov    %eax,-0x14(%ebp)
08441d34 +0x018:  cmpl   $0x0,-0x14(%ebp)
08441d38 +0x01c:  jne    08441d44 <+0x28>
08441d3a +0x01e:  mov    $0x0,%ebx
08441d3f +0x023:  jmp    08441fd4 <+0x2b8>
08441d44 +0x028:  movl   $0x65,0x4(%esp)
08441d4c +0x030:  mov    -0x14(%ebp),%eax
08441d4f +0x033:  mov    %eax,(%esp)
08441d52 +0x036:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
08441d57 +0x03b:  mov    %eax,-0x10(%ebp)
08441d5a +0x03e:  movb   $0x0,-0x15(%ebp)
08441d5e +0x042:  cmpl   $0x0,-0x10(%ebp)
08441d62 +0x046:  je     08441d7d <+0x61>
08441d64 +0x048:  lea    -0x15(%ebp),%eax
08441d67 +0x04b:  mov    %eax,0x4(%esp)
08441d6b +0x04f:  mov    -0x10(%ebp),%eax
08441d6e +0x052:  mov    %eax,(%esp)
08441d71 +0x055:  call   081107ea <_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb>  ; EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(bool&) const
08441d76 +0x05a:  xor    $0x1,%eax
08441d79 +0x05d:  test   %al,%al
08441d7b +0x05f:  je     08441d84 <+0x68>
08441d7d +0x061:  mov    $0x1,%eax
08441d82 +0x066:  jmp    08441d89 <+0x6d>
08441d84 +0x068:  mov    $0x0,%eax
08441d89 +0x06d:  test   %al,%al
08441d8b +0x06f:  je     08441d97 <+0x7b>
08441d8d +0x071:  mov    $0x0,%ebx
08441d92 +0x076:  jmp    08441fd4 <+0x2b8>
08441d97 +0x07b:  movl   $0x0,-0x1c(%ebp)
08441d9e +0x082:  movl   $0x0,-0x20(%ebp)
08441da5 +0x089:  movl   $0x0,-0x24(%ebp)
08441dac +0x090:  lea    -0x1c(%ebp),%eax
08441daf +0x093:  mov    %eax,0x4(%esp)
08441db3 +0x097:  mov    0x14(%ebp),%eax
08441db6 +0x09a:  mov    %eax,(%esp)
08441db9 +0x09d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08441dbe +0x0a2:  lea    -0x20(%ebp),%eax
08441dc1 +0x0a5:  mov    %eax,0x4(%esp)
08441dc5 +0x0a9:  mov    0x14(%ebp),%eax
08441dc8 +0x0ac:  mov    %eax,(%esp)
08441dcb +0x0af:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08441dd0 +0x0b4:  lea    -0x24(%ebp),%eax
08441dd3 +0x0b7:  mov    %eax,0x4(%esp)
08441dd7 +0x0bb:  mov    0x14(%ebp),%eax
08441dda +0x0be:  mov    %eax,(%esp)
08441ddd +0x0c1:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08441de2 +0x0c6:  movl   $0x0,-0xc(%ebp)
08441de9 +0x0cd:  mov    -0x10(%ebp),%eax
08441dec +0x0d0:  mov    (%eax),%eax
08441dee +0x0d2:  add    $0x20,%eax
08441df1 +0x0d5:  mov    (%eax),%edx
08441df3 +0x0d7:  mov    -0x10(%ebp),%eax
08441df6 +0x0da:  mov    %eax,(%esp)
08441df9 +0x0dd:  call   *%edx
08441dfb +0x0df:  mov    %eax,0x4(%esp)
08441dff +0x0e3:  lea    -0x28(%ebp),%eax
08441e02 +0x0e6:  mov    %eax,(%esp)
08441e05 +0x0e9:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08441e0a +0x0ee:  movzbl -0x15(%ebp),%eax
08441e0e +0x0f2:  xor    $0x1,%eax
08441e11 +0x0f5:  test   %al,%al
08441e13 +0x0f7:  je     08441e79 <+0x15d>
08441e15 +0x0f9:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08441e1a +0x0fe:  movl   $0x0,0x8(%esp)
08441e22 +0x106:  movl   $0x9,0x4(%esp)
08441e2a +0x10e:  mov    %eax,(%esp)
08441e2d +0x111:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08441e32 +0x116:  mov    %eax,-0xc(%ebp)
08441e35 +0x119:  mov    -0x1c(%ebp),%eax
08441e38 +0x11c:  movl   $0x0,0x4(%esp)
08441e40 +0x124:  mov    %eax,(%esp)
08441e43 +0x127:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08441e48 +0x12c:  mov    %eax,%ebx
08441e4a +0x12e:  mov    -0x24(%ebp),%esi
08441e4d +0x131:  lea    -0x28(%ebp),%eax
08441e50 +0x134:  mov    %eax,(%esp)
08441e53 +0x137:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08441e58 +0x13c:  mov    %ebx,0x10(%esp)
08441e5c +0x140:  mov    %esi,0xc(%esp)
08441e60 +0x144:  mov    %eax,0x8(%esp)
08441e64 +0x148:  movl   $"upDate %s set fatigue_quantity=%u where m_id=%s",0x4(%esp)
08441e6c +0x150:  mov    -0xc(%ebp),%eax
08441e6f +0x153:  mov    %eax,(%esp)
08441e72 +0x156:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441e77 +0x15b:  jmp    08441ec9 <+0x1ad>
08441e79 +0x15d:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08441e7e +0x162:  movl   $0x0,0x8(%esp)
08441e86 +0x16a:  movl   $0x2,0x4(%esp)
08441e8e +0x172:  mov    %eax,(%esp)
08441e91 +0x175:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08441e96 +0x17a:  mov    %eax,-0xc(%ebp)
08441e99 +0x17d:  mov    -0x20(%ebp),%esi
08441e9c +0x180:  mov    -0x24(%ebp),%ebx
08441e9f +0x183:  lea    -0x28(%ebp),%eax
08441ea2 +0x186:  mov    %eax,(%esp)
08441ea5 +0x189:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08441eaa +0x18e:  mov    %esi,0x10(%esp)
08441eae +0x192:  mov    %ebx,0xc(%esp)
08441eb2 +0x196:  mov    %eax,0x8(%esp)
08441eb6 +0x19a:  movl   $"upDate %s set fatigue_quantity=%u where charac_no=%u",0x4(%esp)
08441ebe +0x1a2:  mov    -0xc(%ebp),%eax
08441ec1 +0x1a5:  mov    %eax,(%esp)
08441ec4 +0x1a8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441ec9 +0x1ad:  movl   $0x1,0x4(%esp)
08441ed1 +0x1b5:  mov    -0xc(%ebp),%eax
08441ed4 +0x1b8:  mov    %eax,(%esp)
08441ed7 +0x1bb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08441edc +0x1c0:  xor    $0x1,%eax
08441edf +0x1c3:  test   %al,%al
08441ee1 +0x1c5:  je     08441eed <+0x1d1>
08441ee3 +0x1c7:  mov    $0x0,%ebx
08441ee8 +0x1cc:  jmp    08441fc9 <+0x2ad>
08441eed +0x1d1:  mov    -0xc(%ebp),%eax
08441ef0 +0x1d4:  mov    %eax,(%esp)
08441ef3 +0x1d7:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08441ef8 +0x1dc:  or     %edx,%eax
08441efa +0x1de:  test   %eax,%eax
08441efc +0x1e0:  sete   %al
08441eff +0x1e3:  test   %al,%al
08441f01 +0x1e5:  je     08441fa7 <+0x28b>
08441f07 +0x1eb:  movzbl -0x15(%ebp),%eax
08441f0b +0x1ef:  xor    $0x1,%eax
08441f0e +0x1f2:  test   %al,%al
08441f10 +0x1f4:  je     08441f56 <+0x23a>
08441f12 +0x1f6:  mov    -0x24(%ebp),%esi
08441f15 +0x1f9:  mov    -0x1c(%ebp),%eax
08441f18 +0x1fc:  movl   $0x0,0x4(%esp)
08441f20 +0x204:  mov    %eax,(%esp)
08441f23 +0x207:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08441f28 +0x20c:  mov    %eax,%ebx
08441f2a +0x20e:  lea    -0x28(%ebp),%eax
08441f2d +0x211:  mov    %eax,(%esp)
08441f30 +0x214:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08441f35 +0x219:  mov    %esi,0x10(%esp)
08441f39 +0x21d:  mov    %ebx,0xc(%esp)
08441f3d +0x221:  mov    %eax,0x8(%esp)
08441f41 +0x225:  movl   $"inSert into %s(m_id, fatigue_quantity) values(%s, %u)",0x4(%esp)
08441f49 +0x22d:  mov    -0xc(%ebp),%eax
08441f4c +0x230:  mov    %eax,(%esp)
08441f4f +0x233:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441f54 +0x238:  jmp    08441f86 <+0x26a>
08441f56 +0x23a:  mov    -0x24(%ebp),%esi
08441f59 +0x23d:  mov    -0x20(%ebp),%ebx
08441f5c +0x240:  lea    -0x28(%ebp),%eax
08441f5f +0x243:  mov    %eax,(%esp)
08441f62 +0x246:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08441f67 +0x24b:  mov    %esi,0x10(%esp)
08441f6b +0x24f:  mov    %ebx,0xc(%esp)
08441f6f +0x253:  mov    %eax,0x8(%esp)
08441f73 +0x257:  movl   $"inSert into %s(charac_no, fatigue_quantity) values(%u, %u)",0x4(%esp)
08441f7b +0x25f:  mov    -0xc(%ebp),%eax
08441f7e +0x262:  mov    %eax,(%esp)
08441f81 +0x265:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08441f86 +0x26a:  movl   $0x1,0x4(%esp)
08441f8e +0x272:  mov    -0xc(%ebp),%eax
08441f91 +0x275:  mov    %eax,(%esp)
08441f94 +0x278:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08441f99 +0x27d:  xor    $0x1,%eax
08441f9c +0x280:  test   %al,%al
08441f9e +0x282:  je     08441fa7 <+0x28b>
08441fa0 +0x284:  mov    $0x0,%ebx
08441fa5 +0x289:  jmp    08441fc9 <+0x2ad>
08441fa7 +0x28b:  mov    $0x1,%ebx
08441fac +0x290:  jmp    08441fc9 <+0x2ad>
08441fae +0x292:  mov    %edx,%ebx
08441fb0 +0x294:  mov    %eax,%esi
08441fb2 +0x296:  lea    -0x28(%ebp),%eax
08441fb5 +0x299:  mov    %eax,(%esp)
08441fb8 +0x29c:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08441fbd +0x2a1:  mov    %esi,%eax
08441fbf +0x2a3:  mov    %ebx,%edx
08441fc1 +0x2a5:  mov    %eax,(%esp)
08441fc4 +0x2a8:  call   08ae3750 <_Unwind_Resume>
08441fc9 +0x2ad:  lea    -0x28(%ebp),%eax
08441fcc +0x2b0:  mov    %eax,(%esp)
08441fcf +0x2b3:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08441fd4 +0x2b8:  mov    %ebx,%eax
08441fd6 +0x2ba:  add    $0x40,%esp
08441fd9 +0x2bd:  pop    %ebx
08441fda +0x2be:  pop    %esi
08441fdb +0x2bf:  pop    %ebp
08441fdc +0x2c0:  ret
08441fdd +0x2c1:  nop
```

## 反编译 C

```c
// DB_UpdateUserGiftFatigueQuantity::dispatch @ 0x8441d1c

/* DB_UpdateUserGiftFatigueQuantity::dispatch(int, int, Stream*) */

undefined4 DB_UpdateUserGiftFatigueQuantity::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  CDataManager *this;
  string *psVar5;
  undefined4 uVar6;
  TCHAR *pTVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  string local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  bool local_19;
  int local_18;
  CUsedFatigueGiveItem *local_14;
  MySQL *local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_18 = CDataManager::get_event_script_mng(this);
  if (local_18 == 0) {
    return 0;
  }
  local_14 = (CUsedFatigueGiveItem *)EventClassify::CEventScriptMng::get_event_entity(local_18);
  local_19 = false;
  if ((local_14 == (CUsedFatigueGiveItem *)0x0) ||
     (cVar4 = EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(local_14,&local_19),
     cVar4 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  local_10 = (MySQL *)0x0;
  psVar5 = (string *)(**(code **)(*(int *)local_14 + 0x20))(local_14);
  std::string::string((string *)&local_2c,psVar5);
  if (local_19 == true) {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    uVar3 = local_24;
    uVar2 = local_28;
    pTVar7 = toTString(&local_2c);
    MySQL::set_query(local_10,"upDate %s set fatigue_quantity=%u where charac_no=%u",pTVar7,uVar2,
                     uVar3);
  }
  else {
                    /* try { // try from 08441e2d to 08441f98 has its CatchHandler @ 08441fae */
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    uVar6 = NumberToString(local_20,0);
    uVar2 = local_28;
    pTVar7 = toTString(&local_2c);
    MySQL::set_query(local_10,"upDate %s set fatigue_quantity=%u where m_id=%s",pTVar7,uVar2,uVar6);
  }
  cVar4 = MySQL::exec(local_10,true);
  if (cVar4 == '\x01') {
    lVar8 = MySQL::getAffectedRowCount(local_10);
    uVar3 = local_24;
    uVar2 = local_28;
    if (lVar8 == 0) {
      if (local_19 == true) {
        pTVar7 = toTString(&local_2c);
        MySQL::set_query(local_10,"inSert into %s(charac_no, fatigue_quantity) values(%u, %u)",
                         pTVar7,uVar3,uVar2);
      }
      else {
        uVar6 = NumberToString(local_20,0);
        pTVar7 = toTString(&local_2c);
        MySQL::set_query(local_10,"inSert into %s(m_id, fatigue_quantity) values(%s, %u)",pTVar7,
                         uVar6,uVar2);
      }
      cVar4 = MySQL::exec(local_10,true);
      if (cVar4 != '\x01') {
        uVar6 = 0;
        goto LAB_08441fc9;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
LAB_08441fc9:
  std::string::~string((string *)&local_2c);
  return uVar6;
}
```
