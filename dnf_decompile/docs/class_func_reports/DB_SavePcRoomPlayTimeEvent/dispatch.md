# dispatch

`_ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream`

`DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SavePcRoomPlayTimeEvent` | `0x08447992` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08447992  _ZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6Stream
#           DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*)
# range [0x08447992, 0x08447bcf]
08447992 +0x000:  push   %ebp
08447993 +0x001:  mov    %esp,%ebp
08447995 +0x003:  push   %edi
08447996 +0x004:  push   %esi
08447997 +0x005:  push   %ebx
08447998 +0x006:  sub    $0x3c,%esp
0844799b +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084479a0 +0x00e:  movl   $0x0,0x8(%esp)
084479a8 +0x016:  movl   $0x9,0x4(%esp)
084479b0 +0x01e:  mov    %eax,(%esp)
084479b3 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084479b8 +0x026:  mov    %eax,-0x20(%ebp)
084479bb +0x029:  mov    0x14(%ebp),%eax
084479be +0x02c:  mov    %eax,(%esp)
084479c1 +0x02f:  call   08454568 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x717e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x717e
084479c6 +0x034:  mov    %eax,-0x1c(%ebp)
084479c9 +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084479ce +0x03c:  mov    %eax,(%esp)
084479d1 +0x03f:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
084479d6 +0x044:  movl   $0x5c,0x4(%esp)
084479de +0x04c:  mov    %eax,(%esp)
084479e1 +0x04f:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
084479e6 +0x054:  mov    %eax,0x4(%esp)
084479ea +0x058:  lea    -0x24(%ebp),%eax
084479ed +0x05b:  mov    %eax,(%esp)
084479f0 +0x05e:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
084479f5 +0x063:  mov    -0x1c(%ebp),%eax
084479f8 +0x066:  mov    (%eax),%eax
084479fa +0x068:  movl   $0x0,0x4(%esp)
08447a02 +0x070:  mov    %eax,(%esp)
08447a05 +0x073:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08447a0a +0x078:  mov    %eax,%ebx
08447a0c +0x07a:  mov    -0x1c(%ebp),%eax
08447a0f +0x07d:  movzbl 0x8(%eax),%eax
08447a13 +0x081:  movzbl %al,%edi
08447a16 +0x084:  mov    -0x1c(%ebp),%eax
08447a19 +0x087:  mov    0x4(%eax),%esi
08447a1c +0x08a:  lea    -0x24(%ebp),%eax
08447a1f +0x08d:  mov    %eax,(%esp)
08447a22 +0x090:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08447a27 +0x095:  mov    %ebx,0x14(%esp)
08447a2b +0x099:  mov    %edi,0x10(%esp)
08447a2f +0x09d:  mov    %esi,0xc(%esp)
08447a33 +0x0a1:  mov    %eax,0x8(%esp)
08447a37 +0x0a5:  movl   $"upDate %s set play_time = %u, reward_cnt = %u, occ_date = now() where m_id = %s",0x4(%esp)
08447a3f +0x0ad:  mov    -0x20(%ebp),%eax
08447a42 +0x0b0:  mov    %eax,(%esp)
08447a45 +0x0b3:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447a4a +0x0b8:  movl   $0x1,0x4(%esp)
08447a52 +0x0c0:  mov    -0x20(%ebp),%eax
08447a55 +0x0c3:  mov    %eax,(%esp)
08447a58 +0x0c6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08447a5d +0x0cb:  xor    $0x1,%eax
08447a60 +0x0ce:  test   %al,%al
08447a62 +0x0d0:  je     08447abb <+0x129>
08447a64 +0x0d2:  mov    -0x1c(%ebp),%eax
08447a67 +0x0d5:  movzbl 0x8(%eax),%eax
08447a6b +0x0d9:  movzbl %al,%ecx
08447a6e +0x0dc:  mov    -0x1c(%ebp),%eax
08447a71 +0x0df:  mov    0x4(%eax),%edx
08447a74 +0x0e2:  mov    -0x1c(%ebp),%eax
08447a77 +0x0e5:  mov    (%eax),%eax
08447a79 +0x0e7:  mov    %ecx,0x1c(%esp)
08447a7d +0x0eb:  mov    %edx,0x18(%esp)
08447a81 +0x0ef:  mov    %eax,0x14(%esp)
08447a85 +0x0f3:  movl   $"<PCROOM_PLAY_TIME_EVENT> update_error m_id(%d), total_time(%d), reward_cnt(%d)",0x10(%esp)
08447a8d +0x0fb:  movl   $0xb25b,0xc(%esp)
08447a95 +0x103:  movl   $&_ZZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08447a9d +0x10b:  movl   $"DBThread.cpp",0x4(%esp)
08447aa5 +0x113:  movl   $0x1,(%esp)
08447aac +0x11a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447ab1 +0x11f:  mov    $0x0,%ebx
08447ab6 +0x124:  jmp    08447bba <+0x228>
08447abb +0x129:  mov    -0x20(%ebp),%eax
08447abe +0x12c:  mov    %eax,(%esp)
08447ac1 +0x12f:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08447ac6 +0x134:  or     %edx,%eax
08447ac8 +0x136:  test   %eax,%eax
08447aca +0x138:  sete   %al
08447acd +0x13b:  test   %al,%al
08447acf +0x13d:  je     08447b98 <+0x206>
08447ad5 +0x143:  mov    -0x1c(%ebp),%eax
08447ad8 +0x146:  movzbl 0x8(%eax),%eax
08447adc +0x14a:  movzbl %al,%edi
08447adf +0x14d:  mov    -0x1c(%ebp),%eax
08447ae2 +0x150:  mov    0x4(%eax),%esi
08447ae5 +0x153:  mov    -0x1c(%ebp),%eax
08447ae8 +0x156:  mov    (%eax),%eax
08447aea +0x158:  movl   $0x0,0x4(%esp)
08447af2 +0x160:  mov    %eax,(%esp)
08447af5 +0x163:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08447afa +0x168:  mov    %eax,%ebx
08447afc +0x16a:  lea    -0x24(%ebp),%eax
08447aff +0x16d:  mov    %eax,(%esp)
08447b02 +0x170:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08447b07 +0x175:  mov    %edi,0x14(%esp)
08447b0b +0x179:  mov    %esi,0x10(%esp)
08447b0f +0x17d:  mov    %ebx,0xc(%esp)
08447b13 +0x181:  mov    %eax,0x8(%esp)
08447b17 +0x185:  movl   $"inSert into %s(m_id, play_time, reward_cnt, occ_date) values(%s,%u,%u,now())",0x4(%esp)
08447b1f +0x18d:  mov    -0x20(%ebp),%eax
08447b22 +0x190:  mov    %eax,(%esp)
08447b25 +0x193:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08447b2a +0x198:  movl   $0x1,0x4(%esp)
08447b32 +0x1a0:  mov    -0x20(%ebp),%eax
08447b35 +0x1a3:  mov    %eax,(%esp)
08447b38 +0x1a6:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08447b3d +0x1ab:  xor    $0x1,%eax
08447b40 +0x1ae:  test   %al,%al
08447b42 +0x1b0:  je     08447b98 <+0x206>
08447b44 +0x1b2:  mov    -0x1c(%ebp),%eax
08447b47 +0x1b5:  movzbl 0x8(%eax),%eax
08447b4b +0x1b9:  movzbl %al,%ecx
08447b4e +0x1bc:  mov    -0x1c(%ebp),%eax
08447b51 +0x1bf:  mov    0x4(%eax),%edx
08447b54 +0x1c2:  mov    -0x1c(%ebp),%eax
08447b57 +0x1c5:  mov    (%eax),%eax
08447b59 +0x1c7:  mov    %ecx,0x1c(%esp)
08447b5d +0x1cb:  mov    %edx,0x18(%esp)
08447b61 +0x1cf:  mov    %eax,0x14(%esp)
08447b65 +0x1d3:  movl   $"<PCROOM_PLAY_TIME_EVENT> insert_error m_id(%d), total_time(%d), reward_cnt(%d)",0x10(%esp)
08447b6d +0x1db:  movl   $0xb266,0xc(%esp)
08447b75 +0x1e3:  movl   $&_ZZN26DB_SavePcRoomPlayTimeEvent8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x8(%esp)
08447b7d +0x1eb:  movl   $"DBThread.cpp",0x4(%esp)
08447b85 +0x1f3:  movl   $0x1,(%esp)
08447b8c +0x1fa:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08447b91 +0x1ff:  mov    $0x0,%ebx
08447b96 +0x204:  jmp    08447bba <+0x228>
08447b98 +0x206:  mov    $0x1,%ebx
08447b9d +0x20b:  jmp    08447bba <+0x228>
08447b9f +0x20d:  mov    %edx,%ebx
08447ba1 +0x20f:  mov    %eax,%esi
08447ba3 +0x211:  lea    -0x24(%ebp),%eax
08447ba6 +0x214:  mov    %eax,(%esp)
08447ba9 +0x217:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08447bae +0x21c:  mov    %esi,%eax
08447bb0 +0x21e:  mov    %ebx,%edx
08447bb2 +0x220:  mov    %eax,(%esp)
08447bb5 +0x223:  call   08ae3750 <_Unwind_Resume>
08447bba +0x228:  lea    -0x24(%ebp),%eax
08447bbd +0x22b:  mov    %eax,(%esp)
08447bc0 +0x22e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08447bc5 +0x233:  mov    %ebx,%eax
08447bc7 +0x235:  add    $0x3c,%esp
08447bca +0x238:  pop    %ebx
08447bcb +0x239:  pop    %esi
08447bcc +0x23a:  pop    %edi
08447bcd +0x23b:  pop    %ebp
08447bce +0x23c:  ret
08447bcf +0x23d:  nop
```

## 反编译 C

```c
// DB_SavePcRoomPlayTimeEvent::dispatch @ 0x8447992

/* DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*) */

undefined4 DB_SavePcRoomPlayTimeEvent::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_PC_ROOM_PLAY_TIME SVar1;
  uint uVar2;
  char cVar3;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar4;
  undefined4 uVar5;
  TCHAR *pTVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  string local_28;
  MySQL *local_24;
  SIG_SAVE_PC_ROOM_PLAY_TIME *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_20 = Stream::GetOutBuffer<SIG_SAVE_PC_ROOM_PLAY_TIME>(in_stack_00000010);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar4 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x5c);
  std::string::string((string *)&local_28,psVar4);
                    /* try { // try from 08447a05 to 08447b90 has its CatchHandler @ 08447b9f */
  uVar5 = NumberToString(*(uint *)local_20,0);
  SVar1 = local_20[8];
  uVar2 = *(uint *)(local_20 + 4);
  pTVar6 = toTString(&local_28);
  MySQL::set_query(local_24,
                   "upDate %s set play_time = %u, reward_cnt = %u, occ_date = now() where m_id = %s"
                   ,pTVar6,uVar2,(uint)(byte)SVar1,uVar5);
  cVar3 = MySQL::exec(local_24,true);
  if (cVar3 == '\x01') {
    lVar7 = MySQL::getAffectedRowCount(local_24);
    if (lVar7 == 0) {
      SVar1 = local_20[8];
      uVar2 = *(uint *)(local_20 + 4);
      uVar5 = NumberToString(*(uint *)local_20,0);
      pTVar6 = toTString(&local_28);
      MySQL::set_query(local_24,
                       "inSert into %s(m_id, play_time, reward_cnt, occ_date) values(%s,%u,%u,now())"
                       ,pTVar6,uVar5,uVar2,(uint)(byte)SVar1);
      cVar3 = MySQL::exec(local_24,true);
      if (cVar3 != '\x01') {
        LogManager::logFormat
                  (1,"DBThread.cpp",
                   "virtual bool DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*)",0xb266,
                   "<PCROOM_PLAY_TIME_EVENT> insert_error m_id(%d), total_time(%d), reward_cnt(%d)",
                   *(uint *)local_20,*(uint *)(local_20 + 4),(uint)(byte)local_20[8]);
        uVar5 = 0;
        goto LAB_08447bba;
      }
    }
    uVar5 = 1;
  }
  else {
    LogManager::logFormat
              (1,"DBThread.cpp",
               "virtual bool DB_SavePcRoomPlayTimeEvent::dispatch(int, int, Stream*)",0xb25b,
               "<PCROOM_PLAY_TIME_EVENT> update_error m_id(%d), total_time(%d), reward_cnt(%d)",
               *(uint *)local_20,*(uint *)(local_20 + 4),(uint)(byte)local_20[8]);
    uVar5 = 0;
  }
LAB_08447bba:
  std::string::~string((string *)&local_28);
  return uVar5;
}
```
