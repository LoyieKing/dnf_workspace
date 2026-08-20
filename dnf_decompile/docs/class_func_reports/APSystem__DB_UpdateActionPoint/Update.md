# Update

`_ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE`

`APSystem::DB_UpdateActionPoint::Update(bool, APSystem::_SIG_LOAD_ACTION_POINT const&)`

| 类 | 地址 |
|---|---|
| `APSystem::DB_UpdateActionPoint` | `0x08124386` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08124386  _ZN8APSystem20DB_UpdateActionPoint6UpdateEbRKNS_22_SIG_LOAD_ACTION_POINTE
#           APSystem::DB_UpdateActionPoint::Update(bool, APSystem::_SIG_LOAD_ACTION_POINT const&)
# range [0x08124386, 0x081246d5]
08124386 +0x000:  push   %ebp
08124387 +0x001:  mov    %esp,%ebp
08124389 +0x003:  push   %edi
0812438a +0x004:  push   %esi
0812438b +0x005:  push   %ebx
0812438c +0x006:  sub    $0xac,%esp
08124392 +0x00c:  mov    0xc(%ebp),%eax
08124395 +0x00f:  mov    %al,-0x6c(%ebp)
08124398 +0x012:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0812439d +0x017:  movl   $0x0,0x8(%esp)
081243a5 +0x01f:  movl   $0x2,0x4(%esp)
081243ad +0x027:  mov    %eax,(%esp)
081243b0 +0x02a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081243b5 +0x02f:  mov    %eax,-0x20(%ebp)
081243b8 +0x032:  cmpb   $0x0,-0x6c(%ebp)
081243bc +0x036:  je     081243ec <+0x66>
081243be +0x038:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
081243c5 +0x03f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
081243ca +0x044:  mov    %eax,-0x38(%ebp)
081243cd +0x047:  mov    -0x38(%ebp),%eax
081243d0 +0x04a:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
081243d5 +0x04f:  mov    %eax,-0x38(%ebp)
081243d8 +0x052:  lea    -0x64(%ebp),%eax
081243db +0x055:  mov    %eax,0x4(%esp)
081243df +0x059:  lea    -0x38(%ebp),%eax
081243e2 +0x05c:  mov    %eax,(%esp)
081243e5 +0x05f:  call   0807e360 <_init+0xc58>
081243ea +0x064:  jmp    081243f7 <+0x71>
081243ec +0x066:  lea    -0x64(%ebp),%eax
081243ef +0x069:  mov    %eax,(%esp)
081243f2 +0x06c:  call   086b1fc0 <_Z19__GetCurrentDNFDateR2tm>  ; __GetCurrentDNFDate(tm&)
081243f7 +0x071:  movl   $0xc,0x8(%esp)
081243ff +0x079:  movl   $0x0,0x4(%esp)
08124407 +0x081:  lea    -0x2c(%ebp),%eax
0812440a +0x084:  mov    %eax,(%esp)
0812440d +0x087:  call   0807dcc0 <_init+0x5b8>
08124412 +0x08c:  mov    -0x58(%ebp),%eax
08124415 +0x08f:  mov    -0x54(%ebp),%edx
08124418 +0x092:  lea    0x1(%edx),%ecx
0812441b +0x095:  mov    -0x50(%ebp),%edx
0812441e +0x098:  add    $0x76c,%edx
08124424 +0x09e:  mov    %eax,0x10(%esp)
08124428 +0x0a2:  mov    %ecx,0xc(%esp)
0812442c +0x0a6:  mov    %edx,0x8(%esp)
08124430 +0x0aa:  movl   $"%04d-%02d-%02d",0x4(%esp)
08124438 +0x0b2:  lea    -0x2c(%ebp),%eax
0812443b +0x0b5:  mov    %eax,(%esp)
0812443e +0x0b8:  call   0807e440 <_init+0xd38>
08124443 +0x0bd:  lea    -0x30(%ebp),%eax
08124446 +0x0c0:  mov    %eax,(%esp)
08124449 +0x0c3:  call   087065d0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1e0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1e0
0812444e +0x0c8:  mov    0x10(%ebp),%eax
08124451 +0x0cb:  add    $0xd,%eax
08124454 +0x0ce:  movl   $0x12c,0xc(%esp)
0812445c +0x0d6:  mov    %eax,0x8(%esp)
08124460 +0x0da:  lea    -0x30(%ebp),%eax
08124463 +0x0dd:  mov    %eax,0x4(%esp)
08124467 +0x0e1:  mov    0x8(%ebp),%eax
0812446a +0x0e4:  mov    %eax,(%esp)
0812446d +0x0e7:  call   081246d6 <_ZN8APSystem20DB_UpdateActionPoint26MakeActionClearStateStringERSsPKNS_12_ActionPointEj>  ; APSystem::DB_UpdateActionPoint::MakeActionClearStateString(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&, APSystem::_ActionPoint const*, unsigned int)
08124472 +0x0ec:  movl   $0x400,-0x34(%ebp)
08124479 +0x0f3:  mov    -0x34(%ebp),%eax
0812447c +0x0f6:  cmp    $0x7ff,%eax
08124481 +0x0fb:  jbe    0812448d <+0x107>
08124483 +0x0fd:  mov    $0x0,%ebx
08124488 +0x102:  jmp    081246be <+0x338>
0812448d +0x107:  movl   $0x800,0x8(%esp)
08124495 +0x10f:  movl   $0x0,0x4(%esp)
0812449d +0x117:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,(%esp)
081244a4 +0x11e:  call   0807dcc0 <_init+0x5b8>
081244a9 +0x123:  lea    -0x30(%ebp),%eax
081244ac +0x126:  mov    %eax,(%esp)
081244af +0x129:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
081244b4 +0x12e:  mov    %eax,%ebx
081244b6 +0x130:  lea    -0x30(%ebp),%eax
081244b9 +0x133:  mov    %eax,(%esp)
081244bc +0x136:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
081244c1 +0x13b:  mov    %ebx,0xc(%esp)
081244c5 +0x13f:  mov    %eax,0x8(%esp)
081244c9 +0x143:  lea    -0x34(%ebp),%eax
081244cc +0x146:  mov    %eax,0x4(%esp)
081244d0 +0x14a:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,(%esp)
081244d7 +0x151:  call   086b201f <_Z12compress_zipPcRjPKcj>  ; compress_zip(char*, unsigned int&, char const*, unsigned int)
081244dc +0x156:  xor    $0x1,%eax
081244df +0x159:  test   %al,%al
081244e1 +0x15b:  je     081244ed <+0x167>
081244e3 +0x15d:  mov    $0x0,%ebx
081244e8 +0x162:  jmp    081246be <+0x338>
081244ed +0x167:  mov    0x10(%ebp),%eax
081244f0 +0x16a:  mov    (%eax),%ebx
081244f2 +0x16c:  mov    -0x34(%ebp),%eax
081244f5 +0x16f:  mov    %eax,0xc(%esp)
081244f9 +0x173:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,0x8(%esp)
08124501 +0x17b:  movl   $0x0,0x4(%esp)
08124509 +0x183:  mov    -0x20(%ebp),%eax
0812450c +0x186:  mov    %eax,(%esp)
0812450f +0x189:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08124514 +0x18e:  mov    %eax,%esi
08124516 +0x190:  mov    0x10(%ebp),%eax
08124519 +0x193:  movzbl 0xc(%eax),%eax
0812451d +0x197:  movzbl %al,%eax
08124520 +0x19a:  mov    %eax,-0x80(%ebp)
08124523 +0x19d:  mov    0x10(%ebp),%eax
08124526 +0x1a0:  movzbl 0xb(%eax),%eax
0812452a +0x1a4:  movzbl %al,%eax
0812452d +0x1a7:  mov    %eax,-0x7c(%ebp)
08124530 +0x1aa:  mov    0x10(%ebp),%eax
08124533 +0x1ad:  movzbl 0xa(%eax),%eax
08124537 +0x1b1:  movzbl %al,%eax
0812453a +0x1b4:  mov    %eax,-0x78(%ebp)
0812453d +0x1b7:  mov    0x10(%ebp),%eax
08124540 +0x1ba:  movzbl 0x9(%eax),%eax
08124544 +0x1be:  movzbl %al,%edi
08124547 +0x1c1:  mov    0x10(%ebp),%eax
0812454a +0x1c4:  movzbl 0x8(%eax),%eax
0812454e +0x1c8:  movzbl %al,%ecx
08124551 +0x1cb:  mov    0x10(%ebp),%eax
08124554 +0x1ce:  mov    0x4(%eax),%edx
08124557 +0x1d1:  mov    %ebx,0x28(%esp)
0812455b +0x1d5:  lea    -0x2c(%ebp),%eax
0812455e +0x1d8:  mov    %eax,0x24(%esp)
08124562 +0x1dc:  mov    %esi,0x20(%esp)
08124566 +0x1e0:  mov    -0x80(%ebp),%eax
08124569 +0x1e3:  mov    %eax,0x1c(%esp)
0812456d +0x1e7:  mov    -0x7c(%ebp),%eax
08124570 +0x1ea:  mov    %eax,0x18(%esp)
08124574 +0x1ee:  mov    -0x78(%ebp),%eax
08124577 +0x1f1:  mov    %eax,0x14(%esp)
0812457b +0x1f5:  mov    %edi,0x10(%esp)
0812457f +0x1f9:  mov    %ecx,0xc(%esp)
08124583 +0x1fd:  mov    %edx,0x8(%esp)
08124587 +0x201:  movl   $"update charac_action_point set ap_sum=%d, is_reward_medal=%u, \t\t\t\t\tis_reward_item_1=%u, is_reward_item_2=%u, is_reward_item_3=%u, is_reward_item_4=%u,\t\t\t\t\t\tap_clear_state='%s'\t\t\t\t\t\twhere occ_date='%s'\t\t\t\t\t\tand charac_no=%u",0x4(%esp)
0812458f +0x209:  mov    -0x20(%ebp),%eax
08124592 +0x20c:  mov    %eax,(%esp)
08124595 +0x20f:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0812459a +0x214:  movl   $0x1,0x4(%esp)
081245a2 +0x21c:  mov    -0x20(%ebp),%eax
081245a5 +0x21f:  mov    %eax,(%esp)
081245a8 +0x222:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
081245ad +0x227:  mov    %al,-0x19(%ebp)
081245b0 +0x22a:  movzbl -0x19(%ebp),%eax
081245b4 +0x22e:  xor    $0x1,%eax
081245b7 +0x231:  test   %al,%al
081245b9 +0x233:  jne    081245cc <+0x246>
081245bb +0x235:  mov    -0x20(%ebp),%eax
081245be +0x238:  mov    %eax,(%esp)
081245c1 +0x23b:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
081245c6 +0x240:  or     %edx,%eax
081245c8 +0x242:  test   %eax,%eax
081245ca +0x244:  jne    081245d3 <+0x24d>
081245cc +0x246:  mov    $0x1,%eax
081245d1 +0x24b:  jmp    081245d8 <+0x252>
081245d3 +0x24d:  mov    $0x0,%eax
081245d8 +0x252:  test   %al,%al
081245da +0x254:  je     0812469d <+0x317>
081245e0 +0x25a:  mov    -0x34(%ebp),%eax
081245e3 +0x25d:  mov    %eax,0xc(%esp)
081245e7 +0x261:  movl   $&_ZN8APSystem21g_szZipAP_CLEAR_STATEE,0x8(%esp)
081245ef +0x269:  movl   $0x0,0x4(%esp)
081245f7 +0x271:  mov    -0x20(%ebp),%eax
081245fa +0x274:  mov    %eax,(%esp)
081245fd +0x277:  call   083f452a <_ZN5MySQL11blob_to_strEiPvi>  ; MySQL::blob_to_str(int, void*, int)
08124602 +0x27c:  mov    %eax,%edx
08124604 +0x27e:  mov    0x10(%ebp),%eax
08124607 +0x281:  movzbl 0xc(%eax),%eax
0812460b +0x285:  movzbl %al,%eax
0812460e +0x288:  mov    %eax,-0x74(%ebp)
08124611 +0x28b:  mov    0x10(%ebp),%eax
08124614 +0x28e:  movzbl 0xb(%eax),%eax
08124618 +0x292:  movzbl %al,%eax
0812461b +0x295:  mov    %eax,-0x70(%ebp)
0812461e +0x298:  mov    0x10(%ebp),%eax
08124621 +0x29b:  movzbl 0xa(%eax),%eax
08124625 +0x29f:  movzbl %al,%edi
08124628 +0x2a2:  mov    0x10(%ebp),%eax
0812462b +0x2a5:  movzbl 0x9(%eax),%eax
0812462f +0x2a9:  movzbl %al,%esi
08124632 +0x2ac:  mov    0x10(%ebp),%eax
08124635 +0x2af:  movzbl 0x8(%eax),%eax
08124639 +0x2b3:  movzbl %al,%ebx
0812463c +0x2b6:  mov    0x10(%ebp),%eax
0812463f +0x2b9:  mov    0x4(%eax),%ecx
08124642 +0x2bc:  mov    0x10(%ebp),%eax
08124645 +0x2bf:  mov    (%eax),%eax
08124647 +0x2c1:  mov    %edx,0x28(%esp)
0812464b +0x2c5:  mov    -0x74(%ebp),%edx
0812464e +0x2c8:  mov    %edx,0x24(%esp)
08124652 +0x2cc:  mov    -0x70(%ebp),%edx
08124655 +0x2cf:  mov    %edx,0x20(%esp)
08124659 +0x2d3:  mov    %edi,0x1c(%esp)
0812465d +0x2d7:  mov    %esi,0x18(%esp)
08124661 +0x2db:  mov    %ebx,0x14(%esp)
08124665 +0x2df:  mov    %ecx,0x10(%esp)
08124669 +0x2e3:  mov    %eax,0xc(%esp)
0812466d +0x2e7:  lea    -0x2c(%ebp),%eax
08124670 +0x2ea:  mov    %eax,0x8(%esp)
08124674 +0x2ee:  movl   $"insert into charac_action_point\t\t\t\t\t\t\t(occ_date, charac_no, ap_sum, is_reward_medal, \t\t\t\t\t\t\tis_reward_item_1, is_reward_item_2, is_reward_item_3, is_reward_item_4,\t\t\t\t\t\t\t\tap_clear_state)\t\t\t\t\t\t\t\tvalues \t\t\t\t\t\t\t('%s', %u, %u, %u, %u, %u, %u, %u, '%s')",0x4(%esp)
0812467c +0x2f6:  mov    -0x20(%ebp),%eax
0812467f +0x2f9:  mov    %eax,(%esp)
08124682 +0x2fc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08124687 +0x301:  movl   $0x1,0x4(%esp)
0812468f +0x309:  mov    -0x20(%ebp),%eax
08124692 +0x30c:  mov    %eax,(%esp)
08124695 +0x30f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0812469a +0x314:  mov    %al,-0x19(%ebp)
0812469d +0x317:  movzbl -0x19(%ebp),%ebx
081246a1 +0x31b:  jmp    081246be <+0x338>
081246a3 +0x31d:  mov    %edx,%ebx
081246a5 +0x31f:  mov    %eax,%esi
081246a7 +0x321:  lea    -0x30(%ebp),%eax
081246aa +0x324:  mov    %eax,(%esp)
081246ad +0x327:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081246b2 +0x32c:  mov    %esi,%eax
081246b4 +0x32e:  mov    %ebx,%edx
081246b6 +0x330:  mov    %eax,(%esp)
081246b9 +0x333:  call   08ae3750 <_Unwind_Resume>
081246be +0x338:  lea    -0x30(%ebp),%eax
081246c1 +0x33b:  mov    %eax,(%esp)
081246c4 +0x33e:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
081246c9 +0x343:  mov    %ebx,%eax
081246cb +0x345:  add    $0xac,%esp
081246d1 +0x34b:  pop    %ebx
081246d2 +0x34c:  pop    %esi
081246d3 +0x34d:  pop    %edi
081246d4 +0x34e:  pop    %ebp
081246d5 +0x34f:  ret
```

## 反编译 C

```c
// APSystem::DB_UpdateActionPoint::Update @ 0x8124386

/* WARNING: Removing unreachable block (ram,0x08124483) */
/* APSystem::DB_UpdateActionPoint::Update(bool, APSystem::_SIG_LOAD_ACTION_POINT const&) */

char __thiscall
APSystem::DB_UpdateActionPoint::Update
          (DB_UpdateActionPoint *this,bool param_1,_SIG_LOAD_ACTION_POINT *param_2)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  tm local_68;
  int local_3c;
  uint local_38;
  string local_34;
  char local_30 [12];
  MySQL *local_24;
  char local_1d;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (param_1) {
    local_3c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    local_3c = local_3c + -0x15180;
    localtime_r(&local_3c,&local_68);
  }
  else {
    __GetCurrentDNFDate(&local_68);
  }
  memset(local_30,0,0xc);
  sprintf(local_30,"%04d-%02d-%02d",local_68.tm_year + 0x76c,local_68.tm_mon + 1,local_68.tm_mday);
  std::string::string((string *)&local_34);
                    /* try { // try from 0812446d to 08124699 has its CatchHandler @ 081246a3 */
  MakeActionClearStateString(this,&local_34,(_ActionPoint *)(param_2 + 0xd),300);
  local_38 = 0x400;
  memset(&g_szZipAP_CLEAR_STATE,0,0x800);
  uVar3 = std::string::size((string *)&local_34);
  pcVar4 = (char *)std::string::c_str((string *)&local_34);
  cVar2 = compress_zip((char *)&g_szZipAP_CLEAR_STATE,&local_38,pcVar4,uVar3);
  if (cVar2 == '\x01') {
    uVar6 = *(undefined4 *)param_2;
    uVar5 = MySQL::blob_to_str(local_24,0,&g_szZipAP_CLEAR_STATE,local_38);
    MySQL::set_query(local_24,
                     "update charac_action_point set ap_sum=%d, is_reward_medal=%u, \t\t\t\t\tis_reward_item_1=%u, is_reward_item_2=%u, is_reward_item_3=%u, is_reward_item_4=%u,\t\t\t\t\t\tap_clear_state=\'%s\'\t\t\t\t\t\twhere occ_date=\'%s\'\t\t\t\t\t\tand charac_no=%u"
                     ,*(undefined4 *)(param_2 + 4),(uint)(byte)param_2[8],(uint)(byte)param_2[9],
                     (uint)(byte)param_2[10],(uint)(byte)param_2[0xb],(uint)(byte)param_2[0xc],uVar5
                     ,local_30,uVar6);
    local_1d = MySQL::exec(local_24,true);
    if ((local_1d == '\x01') && (lVar7 = MySQL::getAffectedRowCount(local_24), lVar7 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    cVar2 = local_1d;
    if (bVar1) {
      uVar6 = MySQL::blob_to_str(local_24,0,&g_szZipAP_CLEAR_STATE,local_38);
      MySQL::set_query(local_24,
                       "insert into charac_action_point\t\t\t\t\t\t\t(occ_date, charac_no, ap_sum, is_reward_medal, \t\t\t\t\t\t\tis_reward_item_1, is_reward_item_2, is_reward_item_3, is_reward_item_4,\t\t\t\t\t\t\t\tap_clear_state)\t\t\t\t\t\t\t\tvalues \t\t\t\t\t\t\t(\'%s\', %u, %u, %u, %u, %u, %u, %u, \'%s\')"
                       ,local_30,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                       (uint)(byte)param_2[8],(uint)(byte)param_2[9],(uint)(byte)param_2[10],
                       (uint)(byte)param_2[0xb],(uint)(byte)param_2[0xc],uVar6);
      local_1d = MySQL::exec(local_24,true);
      cVar2 = local_1d;
    }
  }
  else {
    cVar2 = '\0';
  }
  std::string::~string((string *)&local_34);
  return cVar2;
}
```
