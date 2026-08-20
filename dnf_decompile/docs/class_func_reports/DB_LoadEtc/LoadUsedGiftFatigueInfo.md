# LoadUsedGiftFatigueInfo

`_ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC`

`DB_LoadEtc::LoadUsedGiftFatigueInfo(SIG_LOAD_ETC*)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08406810` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08406810  _ZN10DB_LoadEtc23LoadUsedGiftFatigueInfoEP12SIG_LOAD_ETC
#           DB_LoadEtc::LoadUsedGiftFatigueInfo(SIG_LOAD_ETC*)
# range [0x08406810, 0x08406a69]
08406810 +0x000:  push   %ebp
08406811 +0x001:  mov    %esp,%ebp
08406813 +0x003:  push   %esi
08406814 +0x004:  push   %ebx
08406815 +0x005:  sub    $0x30,%esp
08406818 +0x008:  mov    0xc(%ebp),%eax
0840681b +0x00b:  movl   $0x0,0xc9b8(%eax)
08406825 +0x015:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0840682a +0x01a:  mov    %eax,(%esp)
0840682d +0x01d:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08406832 +0x022:  mov    %eax,-0x14(%ebp)
08406835 +0x025:  cmpl   $0x0,-0x14(%ebp)
08406839 +0x029:  je     08406855 <+0x45>
0840683b +0x02b:  movl   $0x65,0x4(%esp)
08406843 +0x033:  mov    -0x14(%ebp),%eax
08406846 +0x036:  mov    %eax,(%esp)
08406849 +0x039:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
0840684e +0x03e:  xor    $0x1,%eax
08406851 +0x041:  test   %al,%al
08406853 +0x043:  je     0840685c <+0x4c>
08406855 +0x045:  mov    $0x1,%eax
0840685a +0x04a:  jmp    08406861 <+0x51>
0840685c +0x04c:  mov    $0x0,%eax
08406861 +0x051:  test   %al,%al
08406863 +0x053:  je     0840686f <+0x5f>
08406865 +0x055:  mov    $0x1,%ebx
0840686a +0x05a:  jmp    08406a60 <+0x250>
0840686f +0x05f:  movl   $0x65,0x4(%esp)
08406877 +0x067:  mov    -0x14(%ebp),%eax
0840687a +0x06a:  mov    %eax,(%esp)
0840687d +0x06d:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
08406882 +0x072:  mov    %eax,-0x10(%ebp)
08406885 +0x075:  movb   $0x0,-0x15(%ebp)
08406889 +0x079:  cmpl   $0x0,-0x10(%ebp)
0840688d +0x07d:  je     084068a8 <+0x98>
0840688f +0x07f:  lea    -0x15(%ebp),%eax
08406892 +0x082:  mov    %eax,0x4(%esp)
08406896 +0x086:  mov    -0x10(%ebp),%eax
08406899 +0x089:  mov    %eax,(%esp)
0840689c +0x08c:  call   081107ea <_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb>  ; EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(bool&) const
084068a1 +0x091:  xor    $0x1,%eax
084068a4 +0x094:  test   %al,%al
084068a6 +0x096:  je     084068af <+0x9f>
084068a8 +0x098:  mov    $0x1,%eax
084068ad +0x09d:  jmp    084068b4 <+0xa4>
084068af +0x09f:  mov    $0x0,%eax
084068b4 +0x0a4:  test   %al,%al
084068b6 +0x0a6:  je     084068c2 <+0xb2>
084068b8 +0x0a8:  mov    $0x1,%ebx
084068bd +0x0ad:  jmp    08406a60 <+0x250>
084068c2 +0x0b2:  movl   $0x0,-0xc(%ebp)
084068c9 +0x0b9:  mov    -0x10(%ebp),%eax
084068cc +0x0bc:  mov    (%eax),%eax
084068ce +0x0be:  add    $0x20,%eax
084068d1 +0x0c1:  mov    (%eax),%edx
084068d3 +0x0c3:  mov    -0x10(%ebp),%eax
084068d6 +0x0c6:  mov    %eax,(%esp)
084068d9 +0x0c9:  call   *%edx
084068db +0x0cb:  mov    %eax,0x4(%esp)
084068df +0x0cf:  lea    -0x1c(%ebp),%eax
084068e2 +0x0d2:  mov    %eax,(%esp)
084068e5 +0x0d5:  call   087079b0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x15c0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x15c0
084068ea +0x0da:  movzbl -0x15(%ebp),%eax
084068ee +0x0de:  xor    $0x1,%eax
084068f1 +0x0e1:  test   %al,%al
084068f3 +0x0e3:  je     08406954 <+0x144>
084068f5 +0x0e5:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084068fa +0x0ea:  movl   $0x0,0x8(%esp)
08406902 +0x0f2:  movl   $0x9,0x4(%esp)
0840690a +0x0fa:  mov    %eax,(%esp)
0840690d +0x0fd:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08406912 +0x102:  mov    %eax,-0xc(%ebp)
08406915 +0x105:  mov    0xc(%ebp),%eax
08406918 +0x108:  mov    (%eax),%eax
0840691a +0x10a:  movl   $0x0,0x4(%esp)
08406922 +0x112:  mov    %eax,(%esp)
08406925 +0x115:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0840692a +0x11a:  mov    %eax,%ebx
0840692c +0x11c:  lea    -0x1c(%ebp),%eax
0840692f +0x11f:  mov    %eax,(%esp)
08406932 +0x122:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08406937 +0x127:  mov    %ebx,0xc(%esp)
0840693b +0x12b:  mov    %eax,0x8(%esp)
0840693f +0x12f:  movl   $"seLect fatigue_quantity from %s where m_id = %s",0x4(%esp)
08406947 +0x137:  mov    -0xc(%ebp),%eax
0840694a +0x13a:  mov    %eax,(%esp)
0840694d +0x13d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08406952 +0x142:  jmp    084069a0 <+0x190>
08406954 +0x144:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08406959 +0x149:  movl   $0x0,0x8(%esp)
08406961 +0x151:  movl   $0x2,0x4(%esp)
08406969 +0x159:  mov    %eax,(%esp)
0840696c +0x15c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08406971 +0x161:  mov    %eax,-0xc(%ebp)
08406974 +0x164:  mov    0xc(%ebp),%eax
08406977 +0x167:  mov    0x4(%eax),%ebx
0840697a +0x16a:  lea    -0x1c(%ebp),%eax
0840697d +0x16d:  mov    %eax,(%esp)
08406980 +0x170:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08406985 +0x175:  mov    %ebx,0xc(%esp)
08406989 +0x179:  mov    %eax,0x8(%esp)
0840698d +0x17d:  movl   $"seLect fatigue_quantity from %s where charac_no = %u",0x4(%esp)
08406995 +0x185:  mov    -0xc(%ebp),%eax
08406998 +0x188:  mov    %eax,(%esp)
0840699b +0x18b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084069a0 +0x190:  movl   $0x1,0x4(%esp)
084069a8 +0x198:  mov    -0xc(%ebp),%eax
084069ab +0x19b:  mov    %eax,(%esp)
084069ae +0x19e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084069b3 +0x1a3:  xor    $0x1,%eax
084069b6 +0x1a6:  test   %al,%al
084069b8 +0x1a8:  je     084069c4 <+0x1b4>
084069ba +0x1aa:  mov    $0x0,%ebx
084069bf +0x1af:  jmp    08406a55 <+0x245>
084069c4 +0x1b4:  movl   $0x0,-0x20(%ebp)
084069cb +0x1bb:  mov    -0xc(%ebp),%eax
084069ce +0x1be:  mov    %eax,(%esp)
084069d1 +0x1c1:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084069d6 +0x1c6:  test   %eax,%eax
084069d8 +0x1c8:  sete   %al
084069db +0x1cb:  test   %al,%al
084069dd +0x1cd:  je     084069e6 <+0x1d6>
084069df +0x1cf:  mov    $0x1,%ebx
084069e4 +0x1d4:  jmp    08406a55 <+0x245>
084069e6 +0x1d6:  mov    -0xc(%ebp),%eax
084069e9 +0x1d9:  mov    %eax,(%esp)
084069ec +0x1dc:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
084069f1 +0x1e1:  xor    $0x1,%eax
084069f4 +0x1e4:  test   %al,%al
084069f6 +0x1e6:  je     084069ff <+0x1ef>
084069f8 +0x1e8:  mov    $0x0,%ebx
084069fd +0x1ed:  jmp    08406a55 <+0x245>
084069ff +0x1ef:  lea    -0x20(%ebp),%eax
08406a02 +0x1f2:  mov    %eax,0x8(%esp)
08406a06 +0x1f6:  movl   $0x0,0x4(%esp)
08406a0e +0x1fe:  mov    -0xc(%ebp),%eax
08406a11 +0x201:  mov    %eax,(%esp)
08406a14 +0x204:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
08406a19 +0x209:  xor    $0x1,%eax
08406a1c +0x20c:  test   %al,%al
08406a1e +0x20e:  je     08406a27 <+0x217>
08406a20 +0x210:  mov    $0x0,%ebx
08406a25 +0x215:  jmp    08406a55 <+0x245>
08406a27 +0x217:  mov    -0x20(%ebp),%edx
08406a2a +0x21a:  mov    0xc(%ebp),%eax
08406a2d +0x21d:  mov    %edx,0xc9b8(%eax)
08406a33 +0x223:  mov    $0x1,%ebx
08406a38 +0x228:  jmp    08406a55 <+0x245>
08406a3a +0x22a:  mov    %edx,%ebx
08406a3c +0x22c:  mov    %eax,%esi
08406a3e +0x22e:  lea    -0x1c(%ebp),%eax
08406a41 +0x231:  mov    %eax,(%esp)
08406a44 +0x234:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08406a49 +0x239:  mov    %esi,%eax
08406a4b +0x23b:  mov    %ebx,%edx
08406a4d +0x23d:  mov    %eax,(%esp)
08406a50 +0x240:  call   08ae3750 <_Unwind_Resume>
08406a55 +0x245:  lea    -0x1c(%ebp),%eax
08406a58 +0x248:  mov    %eax,(%esp)
08406a5b +0x24b:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
08406a60 +0x250:  mov    %ebx,%eax
08406a62 +0x252:  add    $0x30,%esp
08406a65 +0x255:  pop    %ebx
08406a66 +0x256:  pop    %esi
08406a67 +0x257:  pop    %ebp
08406a68 +0x258:  ret
08406a69 +0x259:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadUsedGiftFatigueInfo @ 0x8406810

/* DB_LoadEtc::LoadUsedGiftFatigueInfo(SIG_LOAD_ETC*) */

undefined4 __thiscall DB_LoadEtc::LoadUsedGiftFatigueInfo(DB_LoadEtc *this,SIG_LOAD_ETC *param_1)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  string *psVar3;
  TCHAR *pTVar4;
  int iVar5;
  undefined4 uVar6;
  bool *pbVar7;
  uint local_24;
  string local_20;
  bool local_19;
  CEventScriptMng *local_18;
  CUsedFatigueGiveItem *local_14;
  MySQL *local_10;
  
  *(undefined4 *)(param_1 + 0xc9b8) = 0;
  this_00 = (CDataManager *)G_CDataManager();
  local_18 = (CEventScriptMng *)CDataManager::get_event_script_mng(this_00);
  if ((local_18 == (CEventScriptMng *)0x0) ||
     (cVar2 = EventClassify::CEventScriptMng::is_eventing(local_18,0x65), cVar2 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 1;
  }
  pbVar7 = (bool *)0x65;
  local_14 = (CUsedFatigueGiveItem *)EventClassify::CEventScriptMng::get_event_entity((int)local_18)
  ;
  local_19 = false;
  if (local_14 != (CUsedFatigueGiveItem *)0x0) {
    pbVar7 = &local_19;
    cVar2 = EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(local_14,pbVar7);
    if (cVar2 == '\x01') {
      bVar1 = false;
      goto LAB_084068b4;
    }
  }
  bVar1 = true;
LAB_084068b4:
  if (bVar1) {
    uVar6 = 1;
  }
  else {
    local_10 = (MySQL *)0x0;
    psVar3 = (string *)(**(code **)(*(int *)local_14 + 0x20))(local_14,pbVar7);
    std::string::string((string *)&local_20,psVar3);
    if (local_19 == true) {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
      uVar6 = *(undefined4 *)(param_1 + 4);
      pTVar4 = toTString(&local_20);
      MySQL::set_query(local_10,"seLect fatigue_quantity from %s where charac_no = %u",pTVar4,uVar6)
      ;
    }
    else {
                    /* try { // try from 0840690d to 084069f0 has its CatchHandler @ 08406a3a */
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      uVar6 = NumberToString(*(uint *)param_1,0);
      pTVar4 = toTString(&local_20);
      MySQL::set_query(local_10,"seLect fatigue_quantity from %s where m_id = %s",pTVar4,uVar6);
    }
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 == '\x01') {
      local_24 = 0;
      iVar5 = MySQL::get_n_rows(local_10);
      if (iVar5 == 0) {
        uVar6 = 1;
      }
      else {
        cVar2 = MySQL::fetch(local_10);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_uint(local_10,0,&local_24);
          if (cVar2 == '\x01') {
            *(uint *)(param_1 + 0xc9b8) = local_24;
            uVar6 = 1;
          }
          else {
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 0;
        }
      }
    }
    else {
      uVar6 = 0;
    }
    std::string::~string((string *)&local_20);
  }
  return uVar6;
}
```
