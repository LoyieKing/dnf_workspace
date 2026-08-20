# arad_sp_load_event_entry

`_ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818c8b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818c8b8  _ZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EE
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
# range [0x0818c8b8, 0x0818ca68]
0818c8b8 +0x000:  push   %ebp
0818c8b9 +0x001:  mov    %esp,%ebp
0818c8bb +0x003:  sub    $0x48,%esp
0818c8be +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818c8c3 +0x00b:  movl   $0x0,0x8(%esp)
0818c8cb +0x013:  movl   $0x6,0x4(%esp)
0818c8d3 +0x01b:  mov    %eax,(%esp)
0818c8d6 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818c8db +0x023:  mov    %eax,-0x10(%ebp)
0818c8de +0x026:  cmpl   $0x0,-0x10(%ebp)
0818c8e2 +0x02a:  jne    0818c922 <+0x6a>
0818c8e4 +0x02c:  movl   $"Database null!!",0x14(%esp)
0818c8ec +0x034:  movl   $"%s",0x10(%esp)
0818c8f4 +0x03c:  movl   $0x3a5,0xc(%esp)
0818c8fc +0x044:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY24arad_sp_load_event_entryEP14SIG_LOGIN_DATARSt6vectorIN8DB_Login16tagDNFEventEntryESaIS6_EEE19__PRETTY_FUNCTION__,0x8(%esp)
0818c904 +0x04c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c90c +0x054:  movl   $0x1,(%esp)
0818c913 +0x05b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c918 +0x060:  mov    $0xffffffff,%eax
0818c91d +0x065:  jmp    0818ca67 <+0x1af>
0818c922 +0x06a:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0818c927 +0x06f:  mov    0x378(%eax),%edx
0818c92d +0x075:  mov    0x8(%ebp),%eax
0818c930 +0x078:  mov    0xc0(%eax),%eax
0818c936 +0x07e:  mov    %edx,0xc(%esp)
0818c93a +0x082:  mov    %eax,0x8(%esp)
0818c93e +0x086:  movl   $"seLect event_id,unix_timestamp(occ_date),server_id,charac_no,unix_timestamp(obtain_date) from dnf_event_entry where m_id=%d and server_id in(0,%d)",0x4(%esp)
0818c946 +0x08e:  mov    -0x10(%ebp),%eax
0818c949 +0x091:  mov    %eax,(%esp)
0818c94c +0x094:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818c951 +0x099:  test   %al,%al
0818c953 +0x09b:  je     0818c95f <+0xa7>
0818c955 +0x09d:  mov    $0xffffffff,%eax
0818c95a +0x0a2:  jmp    0818ca67 <+0x1af>
0818c95f +0x0a7:  movl   $0x0,-0xc(%ebp)
0818c966 +0x0ae:  jmp    0818ca49 <+0x191>
0818c96b +0x0b3:  lea    -0x28(%ebp),%eax
0818c96e +0x0b6:  mov    %eax,0x8(%esp)
0818c972 +0x0ba:  movl   $0x0,0x4(%esp)
0818c97a +0x0c2:  mov    -0x10(%ebp),%eax
0818c97d +0x0c5:  mov    %eax,(%esp)
0818c980 +0x0c8:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c985 +0x0cd:  xor    $0x1,%eax
0818c988 +0x0d0:  test   %al,%al
0818c98a +0x0d2:  jne    0818ca38 <+0x180>
0818c990 +0x0d8:  lea    -0x28(%ebp),%eax
0818c993 +0x0db:  add    $0x8,%eax
0818c996 +0x0de:  mov    %eax,0x8(%esp)
0818c99a +0x0e2:  movl   $0x1,0x4(%esp)
0818c9a2 +0x0ea:  mov    -0x10(%ebp),%eax
0818c9a5 +0x0ed:  mov    %eax,(%esp)
0818c9a8 +0x0f0:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c9ad +0x0f5:  xor    $0x1,%eax
0818c9b0 +0x0f8:  test   %al,%al
0818c9b2 +0x0fa:  jne    0818ca3b <+0x183>
0818c9b8 +0x100:  lea    -0x28(%ebp),%eax
0818c9bb +0x103:  add    $0xc,%eax
0818c9be +0x106:  mov    %eax,0x8(%esp)
0818c9c2 +0x10a:  movl   $0x2,0x4(%esp)
0818c9ca +0x112:  mov    -0x10(%ebp),%eax
0818c9cd +0x115:  mov    %eax,(%esp)
0818c9d0 +0x118:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c9d5 +0x11d:  xor    $0x1,%eax
0818c9d8 +0x120:  test   %al,%al
0818c9da +0x122:  jne    0818ca3e <+0x186>
0818c9dc +0x124:  lea    -0x28(%ebp),%eax
0818c9df +0x127:  add    $0x10,%eax
0818c9e2 +0x12a:  mov    %eax,0x8(%esp)
0818c9e6 +0x12e:  movl   $0x3,0x4(%esp)
0818c9ee +0x136:  mov    -0x10(%ebp),%eax
0818c9f1 +0x139:  mov    %eax,(%esp)
0818c9f4 +0x13c:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818c9f9 +0x141:  xor    $0x1,%eax
0818c9fc +0x144:  test   %al,%al
0818c9fe +0x146:  jne    0818ca41 <+0x189>
0818ca00 +0x148:  lea    -0x28(%ebp),%eax
0818ca03 +0x14b:  add    $0x14,%eax
0818ca06 +0x14e:  mov    %eax,0x8(%esp)
0818ca0a +0x152:  movl   $0x4,0x4(%esp)
0818ca12 +0x15a:  mov    -0x10(%ebp),%eax
0818ca15 +0x15d:  mov    %eax,(%esp)
0818ca18 +0x160:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0818ca1d +0x165:  xor    $0x1,%eax
0818ca20 +0x168:  test   %al,%al
0818ca22 +0x16a:  jne    0818ca44 <+0x18c>
0818ca24 +0x16c:  lea    -0x28(%ebp),%eax
0818ca27 +0x16f:  mov    %eax,0x4(%esp)
0818ca2b +0x173:  mov    0xc(%ebp),%eax
0818ca2e +0x176:  mov    %eax,(%esp)
0818ca31 +0x179:  call   0818d29c <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x1c>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x1c
0818ca36 +0x17e:  jmp    0818ca45 <+0x18d>
0818ca38 +0x180:  nop
0818ca39 +0x181:  jmp    0818ca45 <+0x18d>
0818ca3b +0x183:  nop
0818ca3c +0x184:  jmp    0818ca45 <+0x18d>
0818ca3e +0x186:  nop
0818ca3f +0x187:  jmp    0818ca45 <+0x18d>
0818ca41 +0x189:  nop
0818ca42 +0x18a:  jmp    0818ca45 <+0x18d>
0818ca44 +0x18c:  nop
0818ca45 +0x18d:  addl   $0x1,-0xc(%ebp)
0818ca49 +0x191:  mov    -0x10(%ebp),%eax
0818ca4c +0x194:  mov    %eax,(%esp)
0818ca4f +0x197:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818ca54 +0x19c:  cmp    -0xc(%ebp),%eax
0818ca57 +0x19f:  seta   %al
0818ca5a +0x1a2:  test   %al,%al
0818ca5c +0x1a4:  jne    0818c96b <+0xb3>
0818ca62 +0x1aa:  mov    $0x0,%eax
0818ca67 +0x1af:  leave
0818ca68 +0x1b0:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry @ 0x818c8b8

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*,
   std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA *param_1,vector *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  tagDNFEventEntry local_2c [8];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_14 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_load_event_entry(SIG_LOGIN_DATA*, DB_Login::vecDNFEventEntry_t&)"
               ,0x3a5,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = G_CEnvironment();
    cVar1 = MySQL::set_query(local_14,
                             "seLect event_id,unix_timestamp(occ_date),server_id,charac_no,unix_timestamp(obtain_date) from dnf_event_entry where m_id=%d and server_id in(0,%d)"
                             ,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)(iVar3 + 0x378));
    if (cVar1 == '\0') {
      local_10 = 0;
      while (uVar4 = MySQL::get_n_rows(local_14), local_10 < uVar4) {
        cVar1 = MySQL::get_int(local_14,0,(int *)local_2c);
        if ((((cVar1 == '\x01') && (cVar1 = MySQL::get_int(local_14,1,&iStack_24), cVar1 == '\x01'))
            && (cVar1 = MySQL::get_int(local_14,2,&iStack_20), cVar1 == '\x01')) &&
           ((cVar1 = MySQL::get_int(local_14,3,&iStack_1c), cVar1 == '\x01' &&
            (cVar1 = MySQL::get_int(local_14,4,&iStack_18), cVar1 == '\x01')))) {
          std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::
          push_back((vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> *
                    )param_2,local_2c);
        }
        local_10 = local_10 + 1;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
