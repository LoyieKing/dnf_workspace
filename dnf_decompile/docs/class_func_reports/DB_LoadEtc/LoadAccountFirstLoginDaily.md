# LoadAccountFirstLoginDaily

`_ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi`

`DB_LoadEtc::LoadAccountFirstLoginDaily(SIG_LOAD_ETC*, int)`

| 类 | 地址 |
|---|---|
| `DB_LoadEtc` | `0x08405e0a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08405e0a  _ZN10DB_LoadEtc26LoadAccountFirstLoginDailyEP12SIG_LOAD_ETCi
#           DB_LoadEtc::LoadAccountFirstLoginDaily(SIG_LOAD_ETC*, int)
# range [0x08405e0a, 0x08406091]
08405e0a +0x000:  push   %ebp
08405e0b +0x001:  mov    %esp,%ebp
08405e0d +0x003:  push   %ebx
08405e0e +0x004:  sub    $0xa4,%esp
08405e14 +0x00a:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08405e19 +0x00f:  mov    %eax,(%esp)
08405e1c +0x012:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08405e21 +0x017:  mov    0x10(%ebp),%edx
08405e24 +0x01a:  mov    %edx,0x4(%esp)
08405e28 +0x01e:  mov    %eax,(%esp)
08405e2b +0x021:  call   0810ba36 <_ZN13EventClassify15CEventScriptMng11is_eventingEi>  ; EventClassify::CEventScriptMng::is_eventing(int)
08405e30 +0x026:  xor    $0x1,%eax
08405e33 +0x029:  test   %al,%al
08405e35 +0x02b:  je     08405e41 <+0x37>
08405e37 +0x02d:  mov    $0x0,%eax
08405e3c +0x032:  jmp    08406088 <+0x27e>
08405e41 +0x037:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08405e46 +0x03c:  mov    %eax,(%esp)
08405e49 +0x03f:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08405e4e +0x044:  mov    %eax,-0x20(%ebp)
08405e51 +0x047:  mov    0x10(%ebp),%eax
08405e54 +0x04a:  mov    %eax,0x4(%esp)
08405e58 +0x04e:  mov    -0x20(%ebp),%eax
08405e5b +0x051:  mov    %eax,(%esp)
08405e5e +0x054:  call   0810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>  ; EventClassify::CEventScriptMng::get_event_entity(int)
08405e63 +0x059:  mov    %eax,-0x1c(%ebp)
08405e66 +0x05c:  cmpl   $0x0,-0x1c(%ebp)
08405e6a +0x060:  jne    08405e76 <+0x6c>
08405e6c +0x062:  mov    $0x0,%eax
08405e71 +0x067:  jmp    08406088 <+0x27e>
08405e76 +0x06c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08405e7b +0x071:  mov    %eax,(%esp)
08405e7e +0x074:  call   08110b62 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x74>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x74
08405e83 +0x079:  mov    %eax,(%esp)
08405e86 +0x07c:  call   0810c6d6 <_ZN13EventClassify15CEventScriptMng14get_today_timeEv>  ; EventClassify::CEventScriptMng::get_today_time()
08405e8b +0x081:  mov    %eax,-0x18(%ebp)
08405e8e +0x084:  mov    -0x1c(%ebp),%eax
08405e91 +0x087:  mov    %eax,(%esp)
08405e94 +0x08a:  call   0810b094 <_ZN13EventClassify12CEventEntity20get_event_start_timeEv>  ; EventClassify::CEventEntity::get_event_start_time()
08405e99 +0x08f:  cmp    -0x18(%ebp),%eax
08405e9c +0x092:  jg     08405eae <+0xa4>
08405e9e +0x094:  mov    -0x1c(%ebp),%eax
08405ea1 +0x097:  mov    %eax,(%esp)
08405ea4 +0x09a:  call   0810b0a0 <_ZN13EventClassify12CEventEntity18get_event_end_timeEv>  ; EventClassify::CEventEntity::get_event_end_time()
08405ea9 +0x09f:  cmp    -0x18(%ebp),%eax
08405eac +0x0a2:  jge    08405eb5 <+0xab>
08405eae +0x0a4:  mov    $0x1,%eax
08405eb3 +0x0a9:  jmp    08405eba <+0xb0>
08405eb5 +0x0ab:  mov    $0x0,%eax
08405eba +0x0b0:  test   %al,%al
08405ebc +0x0b2:  je     08405ec8 <+0xbe>
08405ebe +0x0b4:  mov    $0x0,%eax
08405ec3 +0x0b9:  jmp    08406088 <+0x27e>
08405ec8 +0x0be:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08405ecd +0x0c3:  movl   $0x0,0x8(%esp)
08405ed5 +0x0cb:  movl   $0x9,0x4(%esp)
08405edd +0x0d3:  mov    %eax,(%esp)
08405ee0 +0x0d6:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08405ee5 +0x0db:  mov    %eax,-0x14(%ebp)
08405ee8 +0x0de:  movl   $0x0,(%esp)
08405eef +0x0e5:  call   0807d750 <_init+0x48>
08405ef4 +0x0ea:  mov    %eax,-0x24(%ebp)
08405ef7 +0x0ed:  lea    -0x50(%ebp),%eax
08405efa +0x0f0:  mov    %eax,0x4(%esp)
08405efe +0x0f4:  lea    -0x24(%ebp),%eax
08405f01 +0x0f7:  mov    %eax,(%esp)
08405f04 +0x0fa:  call   0807e360 <_init+0xc58>
08405f09 +0x0ff:  mov    -0x50(%ebp),%eax
08405f0c +0x102:  mov    %eax,-0x7c(%ebp)
08405f0f +0x105:  mov    -0x4c(%ebp),%eax
08405f12 +0x108:  mov    %eax,-0x78(%ebp)
08405f15 +0x10b:  mov    -0x48(%ebp),%eax
08405f18 +0x10e:  mov    %eax,-0x74(%ebp)
08405f1b +0x111:  mov    -0x44(%ebp),%eax
08405f1e +0x114:  mov    %eax,-0x70(%ebp)
08405f21 +0x117:  mov    -0x40(%ebp),%eax
08405f24 +0x11a:  mov    %eax,-0x6c(%ebp)
08405f27 +0x11d:  mov    -0x3c(%ebp),%eax
08405f2a +0x120:  mov    %eax,-0x68(%ebp)
08405f2d +0x123:  mov    -0x38(%ebp),%eax
08405f30 +0x126:  mov    %eax,-0x64(%ebp)
08405f33 +0x129:  mov    -0x34(%ebp),%eax
08405f36 +0x12c:  mov    %eax,-0x60(%ebp)
08405f39 +0x12f:  mov    -0x30(%ebp),%eax
08405f3c +0x132:  mov    %eax,-0x5c(%ebp)
08405f3f +0x135:  mov    -0x2c(%ebp),%eax
08405f42 +0x138:  mov    %eax,-0x58(%ebp)
08405f45 +0x13b:  mov    -0x28(%ebp),%eax
08405f48 +0x13e:  mov    %eax,-0x54(%ebp)
08405f4b +0x141:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08405f50 +0x146:  mov    0x37c(%eax),%eax
08405f56 +0x14c:  mov    %eax,-0x74(%ebp)
08405f59 +0x14f:  movl   $0x0,-0x78(%ebp)
08405f60 +0x156:  movl   $0x0,-0x7c(%ebp)
08405f67 +0x15d:  lea    -0x7c(%ebp),%eax
08405f6a +0x160:  mov    %eax,(%esp)
08405f6d +0x163:  call   0807e820 <_init+0x1118>
08405f72 +0x168:  mov    %eax,-0x10(%ebp)
08405f75 +0x16b:  mov    -0x48(%ebp),%edx
08405f78 +0x16e:  mov    -0x74(%ebp),%eax
08405f7b +0x171:  cmp    %eax,%edx
08405f7d +0x173:  jge    08405f86 <+0x17c>
08405f7f +0x175:  subl   $&_ZL14gUnicodeBuffer+0xac54,-0x10(%ebp)
08405f86 +0x17c:  mov    0xc(%ebp),%eax
08405f89 +0x17f:  mov    (%eax),%ebx
08405f8b +0x181:  mov    -0x1c(%ebp),%eax
08405f8e +0x184:  mov    (%eax),%eax
08405f90 +0x186:  add    $0x20,%eax
08405f93 +0x189:  mov    (%eax),%edx
08405f95 +0x18b:  mov    -0x1c(%ebp),%eax
08405f98 +0x18e:  mov    %eax,(%esp)
08405f9b +0x191:  call   *%edx
08405f9d +0x193:  mov    %eax,(%esp)
08405fa0 +0x196:  call   08adeab0 <_Z9toTStringRKSs>  ; toTString(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&)
08405fa5 +0x19b:  mov    -0x10(%ebp),%edx
08405fa8 +0x19e:  mov    %edx,0x10(%esp)
08405fac +0x1a2:  mov    %ebx,0xc(%esp)
08405fb0 +0x1a6:  mov    %eax,0x8(%esp)
08405fb4 +0x1aa:  movl   $"seLect m_id from %s where m_id=%u and occ_date > FROM_UNIXTIME(%d)",0x4(%esp)
08405fbc +0x1b2:  mov    -0x14(%ebp),%eax
08405fbf +0x1b5:  mov    %eax,(%esp)
08405fc2 +0x1b8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08405fc7 +0x1bd:  movl   $0x1,0x4(%esp)
08405fcf +0x1c5:  mov    -0x14(%ebp),%eax
08405fd2 +0x1c8:  mov    %eax,(%esp)
08405fd5 +0x1cb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08405fda +0x1d0:  xor    $0x1,%eax
08405fdd +0x1d3:  test   %al,%al
08405fdf +0x1d5:  je     08406017 <+0x20d>
08405fe1 +0x1d7:  mov    0x10(%ebp),%eax
08405fe4 +0x1da:  mov    %eax,0x4(%esp)
08405fe8 +0x1de:  mov    -0x20(%ebp),%eax
08405feb +0x1e1:  mov    %eax,(%esp)
08405fee +0x1e4:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
08405ff3 +0x1e9:  mov    0xc(%ebp),%edx
08405ff6 +0x1ec:  add    $0xc9bc,%edx
08405ffc +0x1f2:  movl   $0x1,0x8(%esp)
08406004 +0x1fa:  mov    %eax,0x4(%esp)
08406008 +0x1fe:  mov    %edx,(%esp)
0840600b +0x201:  call   084506e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x32fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x32fa
08406010 +0x206:  mov    $0x0,%eax
08406015 +0x20b:  jmp    08406088 <+0x27e>
08406017 +0x20d:  mov    -0x14(%ebp),%eax
0840601a +0x210:  mov    %eax,(%esp)
0840601d +0x213:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08406022 +0x218:  mov    %eax,-0xc(%ebp)
08406025 +0x21b:  cmpl   $0x0,-0xc(%ebp)
08406029 +0x21f:  je     0840605c <+0x252>
0840602b +0x221:  mov    0x10(%ebp),%eax
0840602e +0x224:  mov    %eax,0x4(%esp)
08406032 +0x228:  mov    -0x20(%ebp),%eax
08406035 +0x22b:  mov    %eax,(%esp)
08406038 +0x22e:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
0840603d +0x233:  mov    0xc(%ebp),%edx
08406040 +0x236:  add    $0xc9bc,%edx
08406046 +0x23c:  movl   $0x1,0x8(%esp)
0840604e +0x244:  mov    %eax,0x4(%esp)
08406052 +0x248:  mov    %edx,(%esp)
08406055 +0x24b:  call   084506e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x32fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x32fa
0840605a +0x250:  jmp    08406083 <+0x279>
0840605c +0x252:  mov    0x10(%ebp),%eax
0840605f +0x255:  mov    %eax,0x4(%esp)
08406063 +0x259:  mov    -0x20(%ebp),%eax
08406066 +0x25c:  mov    %eax,(%esp)
08406069 +0x25f:  call   0810b0cc <_ZN13EventClassify15CEventScriptMng31get_convert_to_user_confirmflagEi>  ; EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(int)
0840606e +0x264:  mov    0xc(%ebp),%edx
08406071 +0x267:  add    $0xc9bc,%edx
08406077 +0x26d:  mov    %eax,0x4(%esp)
0840607b +0x271:  mov    %edx,(%esp)
0840607e +0x274:  call   0845071e <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3334>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3334
08406083 +0x279:  mov    $0x1,%eax
08406088 +0x27e:  add    $0xa4,%esp
0840608e +0x284:  pop    %ebx
0840608f +0x285:  pop    %ebp
08406090 +0x286:  ret
08406091 +0x287:  nop
```

## 反编译 C

```c
// DB_LoadEtc::LoadAccountFirstLoginDaily @ 0x8405e0a

/* DB_LoadEtc::LoadAccountFirstLoginDaily(SIG_LOAD_ETC*, int) */

undefined4 __thiscall
DB_LoadEtc::LoadAccountFirstLoginDaily(DB_LoadEtc *this,SIG_LOAD_ETC *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  CDataManager *pCVar3;
  CEventScriptMng *pCVar4;
  int iVar5;
  undefined4 uVar6;
  string *sSrc;
  TCHAR *pTVar7;
  uint uVar8;
  tm local_80;
  tm local_54;
  time_t local_28;
  CEventScriptMng *local_24;
  CEventEntity *local_20;
  int local_1c;
  MySQL *local_18;
  int local_14;
  int local_10;
  
  pCVar3 = (CDataManager *)G_CDataManager();
  pCVar4 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
  cVar2 = EventClassify::CEventScriptMng::is_eventing(pCVar4,param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  pCVar3 = (CDataManager *)G_CDataManager();
  local_24 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
  local_20 = (CEventEntity *)EventClassify::CEventScriptMng::get_event_entity((int)local_24);
  if (local_20 != (CEventEntity *)0x0) {
    pCVar3 = (CDataManager *)G_CDataManager();
    pCVar4 = (CEventScriptMng *)CDataManager::get_event_script_mng(pCVar3);
    local_1c = EventClassify::CEventScriptMng::get_today_time(pCVar4);
    iVar5 = EventClassify::CEventEntity::get_event_start_time(local_20);
    if ((local_1c < iVar5) ||
       (iVar5 = EventClassify::CEventEntity::get_event_end_time(local_20), iVar5 < local_1c)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar6 = 0;
    }
    else {
      local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
      local_28 = time((time_t *)0x0);
      localtime_r(&local_28,&local_54);
      local_80.tm_sec = local_54.tm_sec;
      local_80.tm_min = local_54.tm_min;
      local_80.tm_hour = local_54.tm_hour;
      local_80.tm_mday = local_54.tm_mday;
      local_80.tm_mon = local_54.tm_mon;
      local_80.tm_year = local_54.tm_year;
      local_80.tm_wday = local_54.tm_wday;
      local_80.tm_yday = local_54.tm_yday;
      local_80.tm_isdst = local_54.tm_isdst;
      local_80.tm_gmtoff = local_54.tm_gmtoff;
      local_80.tm_zone = local_54.tm_zone;
      iVar5 = G_CEnvironment();
      local_80.tm_hour = *(int *)(iVar5 + 0x37c);
      local_80.tm_min = 0;
      local_80.tm_sec = 0;
      local_14 = mktime(&local_80);
      if (local_54.tm_hour < local_80.tm_hour) {
        local_14 = local_14 + -0x15180;
      }
      uVar6 = *(undefined4 *)param_1;
      sSrc = (string *)(**(code **)(*(int *)local_20 + 0x20))(local_20);
      pTVar7 = toTString(sSrc);
      MySQL::set_query(local_18,"seLect m_id from %s where m_id=%u and occ_date > FROM_UNIXTIME(%d)"
                       ,pTVar7,uVar6,local_14);
      cVar2 = MySQL::exec(local_18,true);
      if (cVar2 == '\x01') {
        local_10 = MySQL::get_n_rows(local_18);
        if (local_10 == 0) {
          uVar8 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(local_24,param_2);
          std::bitset<32u>::reset((bitset<32u> *)(param_1 + 0xc9bc),uVar8);
        }
        else {
          uVar8 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(local_24,param_2);
          std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar8,true);
        }
        uVar6 = 1;
      }
      else {
        uVar8 = EventClassify::CEventScriptMng::get_convert_to_user_confirmflag(local_24,param_2);
        std::bitset<32u>::set((bitset<32u> *)(param_1 + 0xc9bc),uVar8,true);
        uVar6 = 0;
      }
    }
    return uVar6;
  }
  return 0;
}
```
