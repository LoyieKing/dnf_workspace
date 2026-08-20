# dispatch

`_ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream`

`DB_SaveObjectBringUp::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SaveObjectBringUp` | `0x08446a1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08446a1e  _ZN20DB_SaveObjectBringUp8dispatchEiiP6Stream
#           DB_SaveObjectBringUp::dispatch(int, int, Stream*)
# range [0x08446a1e, 0x08446d9d]
08446a1e +0x000:  push   %ebp
08446a1f +0x001:  mov    %esp,%ebp
08446a21 +0x003:  push   %edi
08446a22 +0x004:  push   %esi
08446a23 +0x005:  push   %ebx
08446a24 +0x006:  sub    $0x6c,%esp
08446a27 +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08446a2c +0x00e:  movl   $0x0,0x8(%esp)
08446a34 +0x016:  movl   $0x2,0x4(%esp)
08446a3c +0x01e:  mov    %eax,(%esp)
08446a3f +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08446a44 +0x026:  mov    %eax,-0x20(%ebp)
08446a47 +0x029:  mov    0x14(%ebp),%eax
08446a4a +0x02c:  mov    %eax,(%esp)
08446a4d +0x02f:  call   084543c4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x6fda>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x6fda
08446a52 +0x034:  mov    %eax,-0x1c(%ebp)
08446a55 +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08446a5a +0x03c:  mov    %eax,(%esp)
08446a5d +0x03f:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08446a62 +0x044:  movl   $0x19b,0x4(%esp)
08446a6a +0x04c:  mov    %eax,(%esp)
08446a6d +0x04f:  call   0810b110 <_ZN13EventClassify15CEventScriptMng17get_db_table_nameEi>  ; EventClassify::CEventScriptMng::get_db_table_name(int)
08446a72 +0x054:  mov    %eax,0x4(%esp)
08446a76 +0x058:  lea    -0x44(%ebp),%eax
08446a79 +0x05b:  mov    %eax,(%esp)
08446a7c +0x05e:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
08446a81 +0x063:  mov    -0x1c(%ebp),%eax
08446a84 +0x066:  movzbl 0xd(%eax),%eax
08446a88 +0x06a:  test   %al,%al
08446a8a +0x06c:  je     08446c10 <+0x1f2>
08446a90 +0x072:  mov    -0x1c(%ebp),%eax
08446a93 +0x075:  mov    (%eax),%eax
08446a95 +0x077:  movl   $0x0,0x4(%esp)
08446a9d +0x07f:  mov    %eax,(%esp)
08446aa0 +0x082:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08446aa5 +0x087:  mov    %eax,%ebx
08446aa7 +0x089:  mov    -0x1c(%ebp),%eax
08446aaa +0x08c:  mov    0x4(%eax),%edi
08446aad +0x08f:  mov    -0x1c(%ebp),%eax
08446ab0 +0x092:  movzbl 0xc(%eax),%eax
08446ab4 +0x096:  movzbl %al,%esi
08446ab7 +0x099:  lea    -0x44(%ebp),%eax
08446aba +0x09c:  mov    %eax,(%esp)
08446abd +0x09f:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08446ac2 +0x0a4:  mov    %ebx,0x14(%esp)
08446ac6 +0x0a8:  mov    %edi,0x10(%esp)
08446aca +0x0ac:  mov    %esi,0xc(%esp)
08446ace +0x0b0:  mov    %eax,0x8(%esp)
08446ad2 +0x0b4:  movl   $"upDate %s set use_material_cnt=use_material_cnt+%u, give_reward_flag=1, occ_date = now() where charac_no=%u and m_id=%s",0x4(%esp)
08446ada +0x0bc:  mov    -0x20(%ebp),%eax
08446add +0x0bf:  mov    %eax,(%esp)
08446ae0 +0x0c2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446ae5 +0x0c7:  movl   $0x1,0x4(%esp)
08446aed +0x0cf:  mov    -0x20(%ebp),%eax
08446af0 +0x0d2:  mov    %eax,(%esp)
08446af3 +0x0d5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446af8 +0x0da:  xor    $0x1,%eax
08446afb +0x0dd:  test   %al,%al
08446afd +0x0df:  je     08446b09 <+0xeb>
08446aff +0x0e1:  mov    $0x0,%ebx
08446b04 +0x0e6:  jmp    08446d89 <+0x36b>
08446b09 +0x0eb:  mov    -0x20(%ebp),%eax
08446b0c +0x0ee:  mov    %eax,(%esp)
08446b0f +0x0f1:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08446b14 +0x0f6:  or     %edx,%eax
08446b16 +0x0f8:  test   %eax,%eax
08446b18 +0x0fa:  sete   %al
08446b1b +0x0fd:  test   %al,%al
08446b1d +0x0ff:  je     08446d67 <+0x349>
08446b23 +0x105:  mov    -0x1c(%ebp),%eax
08446b26 +0x108:  movzbl 0xd(%eax),%eax
08446b2a +0x10c:  movzbl %al,%eax
08446b2d +0x10f:  mov    %eax,-0x4c(%ebp)
08446b30 +0x112:  mov    -0x1c(%ebp),%eax
08446b33 +0x115:  movzbl 0xc(%eax),%eax
08446b37 +0x119:  movzbl %al,%edi
08446b3a +0x11c:  mov    -0x1c(%ebp),%eax
08446b3d +0x11f:  mov    (%eax),%eax
08446b3f +0x121:  movl   $0x0,0x4(%esp)
08446b47 +0x129:  mov    %eax,(%esp)
08446b4a +0x12c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08446b4f +0x131:  mov    %eax,%ebx
08446b51 +0x133:  mov    -0x1c(%ebp),%eax
08446b54 +0x136:  mov    0x4(%eax),%esi
08446b57 +0x139:  lea    -0x44(%ebp),%eax
08446b5a +0x13c:  mov    %eax,(%esp)
08446b5d +0x13f:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08446b62 +0x144:  mov    -0x4c(%ebp),%edx
08446b65 +0x147:  mov    %edx,0x18(%esp)
08446b69 +0x14b:  mov    %edi,0x14(%esp)
08446b6d +0x14f:  mov    %ebx,0x10(%esp)
08446b71 +0x153:  mov    %esi,0xc(%esp)
08446b75 +0x157:  mov    %eax,0x8(%esp)
08446b79 +0x15b:  movl   $"inSert into %s(charac_no,m_id,use_material_cnt,give_reward_flag,occ_date) values(%u,%s,%u,%u,now())",0x4(%esp)
08446b81 +0x163:  mov    -0x20(%ebp),%eax
08446b84 +0x166:  mov    %eax,(%esp)
08446b87 +0x169:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446b8c +0x16e:  movl   $0x1,0x4(%esp)
08446b94 +0x176:  mov    -0x20(%ebp),%eax
08446b97 +0x179:  mov    %eax,(%esp)
08446b9a +0x17c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446b9f +0x181:  xor    $0x1,%eax
08446ba2 +0x184:  test   %al,%al
08446ba4 +0x186:  je     08446d67 <+0x349>
08446baa +0x18c:  mov    -0x1c(%ebp),%eax
08446bad +0x18f:  movzbl 0xd(%eax),%eax
08446bb1 +0x193:  movzbl %al,%edi
08446bb4 +0x196:  mov    -0x1c(%ebp),%eax
08446bb7 +0x199:  movzbl 0xc(%eax),%eax
08446bbb +0x19d:  movzbl %al,%esi
08446bbe +0x1a0:  mov    -0x1c(%ebp),%eax
08446bc1 +0x1a3:  mov    0x4(%eax),%ebx
08446bc4 +0x1a6:  movl   $0x5,0xc(%esp)
08446bcc +0x1ae:  movl   $0xaebd,0x8(%esp)
08446bd4 +0x1b6:  movl   $&_ZZN20DB_SaveObjectBringUp8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08446bdc +0x1be:  lea    -0x40(%ebp),%eax
08446bdf +0x1c1:  mov    %eax,(%esp)
08446be2 +0x1c4:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08446be7 +0x1c9:  mov    %edi,0x10(%esp)
08446beb +0x1cd:  mov    %esi,0xc(%esp)
08446bef +0x1d1:  mov    %ebx,0x8(%esp)
08446bf3 +0x1d5:  movl   $"upDate DB_SaveObjectBringUp::dispatch failed at charac_no(%u),count(%u),flag(%u)",0x4(%esp)
08446bfb +0x1dd:  lea    -0x40(%ebp),%eax
08446bfe +0x1e0:  mov    %eax,(%esp)
08446c01 +0x1e3:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08446c06 +0x1e8:  mov    $0x0,%ebx
08446c0b +0x1ed:  jmp    08446d89 <+0x36b>
08446c10 +0x1f2:  mov    -0x1c(%ebp),%eax
08446c13 +0x1f5:  mov    (%eax),%eax
08446c15 +0x1f7:  movl   $0x0,0x4(%esp)
08446c1d +0x1ff:  mov    %eax,(%esp)
08446c20 +0x202:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08446c25 +0x207:  mov    %eax,%ebx
08446c27 +0x209:  mov    -0x1c(%ebp),%eax
08446c2a +0x20c:  mov    0x4(%eax),%edi
08446c2d +0x20f:  mov    -0x1c(%ebp),%eax
08446c30 +0x212:  movzbl 0xc(%eax),%eax
08446c34 +0x216:  movzbl %al,%esi
08446c37 +0x219:  lea    -0x44(%ebp),%eax
08446c3a +0x21c:  mov    %eax,(%esp)
08446c3d +0x21f:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08446c42 +0x224:  mov    %ebx,0x14(%esp)
08446c46 +0x228:  mov    %edi,0x10(%esp)
08446c4a +0x22c:  mov    %esi,0xc(%esp)
08446c4e +0x230:  mov    %eax,0x8(%esp)
08446c52 +0x234:  movl   $"upDate %s set use_material_cnt=use_material_cnt+%u where charac_no=%u and m_id=%s",0x4(%esp)
08446c5a +0x23c:  mov    -0x20(%ebp),%eax
08446c5d +0x23f:  mov    %eax,(%esp)
08446c60 +0x242:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446c65 +0x247:  movl   $0x1,0x4(%esp)
08446c6d +0x24f:  mov    -0x20(%ebp),%eax
08446c70 +0x252:  mov    %eax,(%esp)
08446c73 +0x255:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446c78 +0x25a:  xor    $0x1,%eax
08446c7b +0x25d:  test   %al,%al
08446c7d +0x25f:  je     08446c89 <+0x26b>
08446c7f +0x261:  mov    $0x0,%ebx
08446c84 +0x266:  jmp    08446d89 <+0x36b>
08446c89 +0x26b:  mov    -0x20(%ebp),%eax
08446c8c +0x26e:  mov    %eax,(%esp)
08446c8f +0x271:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08446c94 +0x276:  or     %edx,%eax
08446c96 +0x278:  test   %eax,%eax
08446c98 +0x27a:  sete   %al
08446c9b +0x27d:  test   %al,%al
08446c9d +0x27f:  je     08446d67 <+0x349>
08446ca3 +0x285:  mov    -0x1c(%ebp),%eax
08446ca6 +0x288:  movzbl 0xc(%eax),%eax
08446caa +0x28c:  movzbl %al,%edi
08446cad +0x28f:  mov    -0x1c(%ebp),%eax
08446cb0 +0x292:  mov    (%eax),%eax
08446cb2 +0x294:  movl   $0x0,0x4(%esp)
08446cba +0x29c:  mov    %eax,(%esp)
08446cbd +0x29f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08446cc2 +0x2a4:  mov    %eax,%ebx
08446cc4 +0x2a6:  mov    -0x1c(%ebp),%eax
08446cc7 +0x2a9:  mov    0x4(%eax),%esi
08446cca +0x2ac:  lea    -0x44(%ebp),%eax
08446ccd +0x2af:  mov    %eax,(%esp)
08446cd0 +0x2b2:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08446cd5 +0x2b7:  mov    %edi,0x14(%esp)
08446cd9 +0x2bb:  mov    %ebx,0x10(%esp)
08446cdd +0x2bf:  mov    %esi,0xc(%esp)
08446ce1 +0x2c3:  mov    %eax,0x8(%esp)
08446ce5 +0x2c7:  movl   $"inSert into %s(charac_no,m_id,use_material_cnt) values(%u,%s,%u)",0x4(%esp)
08446ced +0x2cf:  mov    -0x20(%ebp),%eax
08446cf0 +0x2d2:  mov    %eax,(%esp)
08446cf3 +0x2d5:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08446cf8 +0x2da:  movl   $0x1,0x4(%esp)
08446d00 +0x2e2:  mov    -0x20(%ebp),%eax
08446d03 +0x2e5:  mov    %eax,(%esp)
08446d06 +0x2e8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08446d0b +0x2ed:  xor    $0x1,%eax
08446d0e +0x2f0:  test   %al,%al
08446d10 +0x2f2:  je     08446d67 <+0x349>
08446d12 +0x2f4:  mov    -0x1c(%ebp),%eax
08446d15 +0x2f7:  movzbl 0xc(%eax),%eax
08446d19 +0x2fb:  movzbl %al,%esi
08446d1c +0x2fe:  mov    -0x1c(%ebp),%eax
08446d1f +0x301:  mov    0x4(%eax),%ebx
08446d22 +0x304:  movl   $0x5,0xc(%esp)
08446d2a +0x30c:  movl   $0xaece,0x8(%esp)
08446d32 +0x314:  movl   $&_ZZN20DB_SaveObjectBringUp8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08446d3a +0x31c:  lea    -0x30(%ebp),%eax
08446d3d +0x31f:  mov    %eax,(%esp)
08446d40 +0x322:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08446d45 +0x327:  mov    %esi,0xc(%esp)
08446d49 +0x32b:  mov    %ebx,0x8(%esp)
08446d4d +0x32f:  movl   $"upDate DB_SaveObjectBringUp::dispatch failed at charac_no(%u),count(%u)",0x4(%esp)
08446d55 +0x337:  lea    -0x30(%ebp),%eax
08446d58 +0x33a:  mov    %eax,(%esp)
08446d5b +0x33d:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08446d60 +0x342:  mov    $0x0,%ebx
08446d65 +0x347:  jmp    08446d89 <+0x36b>
08446d67 +0x349:  mov    $0x1,%ebx
08446d6c +0x34e:  jmp    08446d89 <+0x36b>
08446d6e +0x350:  mov    %edx,%ebx
08446d70 +0x352:  mov    %eax,%esi
08446d72 +0x354:  lea    -0x44(%ebp),%eax
08446d75 +0x357:  mov    %eax,(%esp)
08446d78 +0x35a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08446d7d +0x35f:  mov    %esi,%eax
08446d7f +0x361:  mov    %ebx,%edx
08446d81 +0x363:  mov    %eax,(%esp)
08446d84 +0x366:  call   08ae3750 <_Unwind_Resume>
08446d89 +0x36b:  lea    -0x44(%ebp),%eax
08446d8c +0x36e:  mov    %eax,(%esp)
08446d8f +0x371:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08446d94 +0x376:  mov    %ebx,%eax
08446d96 +0x378:  add    $0x6c,%esp
08446d99 +0x37b:  pop    %ebx
08446d9a +0x37c:  pop    %esi
08446d9b +0x37d:  pop    %edi
08446d9c +0x37e:  pop    %ebp
08446d9d +0x37f:  ret
```

## 反编译 C

```c
// DB_SaveObjectBringUp::dispatch @ 0x8446a1e

/* DB_SaveObjectBringUp::dispatch(int, int, Stream*) */

undefined4 DB_SaveObjectBringUp::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_OBJECT_BRING_UP SVar1;
  SIG_OBJECT_BRING_UP SVar2;
  uint uVar3;
  char cVar4;
  CDataManager *this;
  CEventScriptMng *this_00;
  string *psVar5;
  undefined4 uVar6;
  TCHAR *pTVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  string local_48;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  MySQL *local_24;
  SIG_OBJECT_BRING_UP *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = Stream::GetOutBuffer<SIG_OBJECT_BRING_UP>(in_stack_00000010);
  this = (CDataManager *)G_CDataManager();
  this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
  psVar5 = (string *)EventClassify::CEventScriptMng::get_db_table_name(this_00,0x19b);
  std::string::string((string *)&local_48,psVar5);
  if (local_20[0xd] == (SIG_OBJECT_BRING_UP)0x0) {
    uVar6 = NumberToString(*(uint *)local_20,0);
    uVar3 = *(uint *)(local_20 + 4);
    SVar1 = local_20[0xc];
    pTVar7 = toTString(&local_48);
    MySQL::set_query(local_24,
                     "upDate %s set use_material_cnt=use_material_cnt+%u where charac_no=%u and m_id=%s"
                     ,pTVar7,(uint)(byte)SVar1,uVar3,uVar6);
    cVar4 = MySQL::exec(local_24,true);
    if (cVar4 != '\x01') {
      uVar6 = 0;
      goto LAB_08446d89;
    }
    lVar8 = MySQL::getAffectedRowCount(local_24);
    if (lVar8 == 0) {
      SVar1 = local_20[0xc];
      uVar6 = NumberToString(*(uint *)local_20,0);
      uVar3 = *(uint *)(local_20 + 4);
      pTVar7 = toTString(&local_48);
      MySQL::set_query(local_24,"inSert into %s(charac_no,m_id,use_material_cnt) values(%u,%s,%u)",
                       pTVar7,uVar3,uVar6,(uint)(byte)SVar1);
      cVar4 = MySQL::exec(local_24,true);
      if (cVar4 != '\x01') {
        SVar1 = local_20[0xc];
        uVar3 = *(uint *)(local_20 + 4);
        cMyTrace::cMyTrace(local_34,"virtual bool DB_SaveObjectBringUp::dispatch(int, int, Stream*)"
                           ,0xaece,5);
        cMyTrace::operator()
                  (local_34,
                   "upDate DB_SaveObjectBringUp::dispatch failed at charac_no(%u),count(%u)",uVar3,
                   (uint)(byte)SVar1);
        uVar6 = 0;
        goto LAB_08446d89;
      }
    }
  }
  else {
                    /* try { // try from 08446aa0 to 08446d5f has its CatchHandler @ 08446d6e */
    uVar6 = NumberToString(*(uint *)local_20,0);
    uVar3 = *(uint *)(local_20 + 4);
    SVar1 = local_20[0xc];
    pTVar7 = toTString(&local_48);
    MySQL::set_query(local_24,
                     "upDate %s set use_material_cnt=use_material_cnt+%u, give_reward_flag=1, occ_date = now() where charac_no=%u and m_id=%s"
                     ,pTVar7,(uint)(byte)SVar1,uVar3,uVar6);
    cVar4 = MySQL::exec(local_24,true);
    if (cVar4 != '\x01') {
      uVar6 = 0;
      goto LAB_08446d89;
    }
    lVar8 = MySQL::getAffectedRowCount(local_24);
    if (lVar8 == 0) {
      SVar1 = local_20[0xd];
      SVar2 = local_20[0xc];
      uVar6 = NumberToString(*(uint *)local_20,0);
      uVar3 = *(uint *)(local_20 + 4);
      pTVar7 = toTString(&local_48);
      MySQL::set_query(local_24,
                       "inSert into %s(charac_no,m_id,use_material_cnt,give_reward_flag,occ_date) values(%u,%s,%u,%u,now())"
                       ,pTVar7,uVar3,uVar6,(uint)(byte)SVar2,(uint)(byte)SVar1);
      cVar4 = MySQL::exec(local_24,true);
      if (cVar4 != '\x01') {
        SVar1 = local_20[0xd];
        SVar2 = local_20[0xc];
        uVar3 = *(uint *)(local_20 + 4);
        cMyTrace::cMyTrace(local_44,"virtual bool DB_SaveObjectBringUp::dispatch(int, int, Stream*)"
                           ,0xaebd,5);
        cMyTrace::operator()
                  (local_44,
                   "upDate DB_SaveObjectBringUp::dispatch failed at charac_no(%u),count(%u),flag(%u)"
                   ,uVar3,(uint)(byte)SVar2,(uint)(byte)SVar1);
        uVar6 = 0;
        goto LAB_08446d89;
      }
    }
  }
  uVar6 = 1;
LAB_08446d89:
  std::string::~string((string *)&local_48);
  return uVar6;
}
```
