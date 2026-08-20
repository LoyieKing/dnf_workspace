# _LoadDNFEventEntry

`_ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE`

`DB_Login::_LoadDNFEventEntry(unsigned int, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08411bda` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08411bda  _ZN8DB_Login18_LoadDNFEventEntryEjRSt6vectorINS_16tagDNFEventEntryESaIS1_EE
#           DB_Login::_LoadDNFEventEntry(unsigned int, std::vector<DB_Login::tagDNFEventEntry, std::allocator<DB_Login::tagDNFEventEntry> >&)
# range [0x08411bda, 0x08411d7d]
08411bda +0x000:  push   %ebp
08411bdb +0x001:  mov    %esp,%ebp
08411bdd +0x003:  push   %ebx
08411bde +0x004:  sub    $0x34,%esp
08411be1 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08411be6 +0x00c:  movl   $0x0,0x8(%esp)
08411bee +0x014:  movl   $0x6,0x4(%esp)
08411bf6 +0x01c:  mov    %eax,(%esp)
08411bf9 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08411bfe +0x024:  mov    %eax,-0x10(%ebp)
08411c01 +0x027:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
08411c06 +0x02c:  mov    0x378(%eax),%ebx
08411c0c +0x032:  movl   $0x0,0x4(%esp)
08411c14 +0x03a:  mov    0xc(%ebp),%eax
08411c17 +0x03d:  mov    %eax,(%esp)
08411c1a +0x040:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08411c1f +0x045:  mov    %ebx,0xc(%esp)
08411c23 +0x049:  mov    %eax,0x8(%esp)
08411c27 +0x04d:  movl   $"seLect event_id,unix_timestamp(occ_date),server_id,charac_no,unix_timestamp(obtain_date) from dnf_event_entry where m_id=%s and server_id in(0,%d)",0x4(%esp)
08411c2f +0x055:  mov    -0x10(%ebp),%eax
08411c32 +0x058:  mov    %eax,(%esp)
08411c35 +0x05b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08411c3a +0x060:  movl   $0x1,0x4(%esp)
08411c42 +0x068:  mov    -0x10(%ebp),%eax
08411c45 +0x06b:  mov    %eax,(%esp)
08411c48 +0x06e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08411c4d +0x073:  xor    $0x1,%eax
08411c50 +0x076:  test   %al,%al
08411c52 +0x078:  jne    08411d73 <+0x199>
08411c58 +0x07e:  movl   $0x0,-0xc(%ebp)
08411c5f +0x085:  jmp    08411d58 <+0x17e>
08411c64 +0x08a:  mov    -0x10(%ebp),%eax
08411c67 +0x08d:  mov    %eax,(%esp)
08411c6a +0x090:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08411c6f +0x095:  xor    $0x1,%eax
08411c72 +0x098:  test   %al,%al
08411c74 +0x09a:  jne    08411d76 <+0x19c>
08411c7a +0x0a0:  lea    -0x28(%ebp),%eax
08411c7d +0x0a3:  mov    %eax,0x8(%esp)
08411c81 +0x0a7:  movl   $0x0,0x4(%esp)
08411c89 +0x0af:  mov    -0x10(%ebp),%eax
08411c8c +0x0b2:  mov    %eax,(%esp)
08411c8f +0x0b5:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08411c94 +0x0ba:  xor    $0x1,%eax
08411c97 +0x0bd:  test   %al,%al
08411c99 +0x0bf:  jne    08411d47 <+0x16d>
08411c9f +0x0c5:  lea    -0x28(%ebp),%eax
08411ca2 +0x0c8:  add    $0x8,%eax
08411ca5 +0x0cb:  mov    %eax,0x8(%esp)
08411ca9 +0x0cf:  movl   $0x1,0x4(%esp)
08411cb1 +0x0d7:  mov    -0x10(%ebp),%eax
08411cb4 +0x0da:  mov    %eax,(%esp)
08411cb7 +0x0dd:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08411cbc +0x0e2:  xor    $0x1,%eax
08411cbf +0x0e5:  test   %al,%al
08411cc1 +0x0e7:  jne    08411d4a <+0x170>
08411cc7 +0x0ed:  lea    -0x28(%ebp),%eax
08411cca +0x0f0:  add    $0xc,%eax
08411ccd +0x0f3:  mov    %eax,0x8(%esp)
08411cd1 +0x0f7:  movl   $0x2,0x4(%esp)
08411cd9 +0x0ff:  mov    -0x10(%ebp),%eax
08411cdc +0x102:  mov    %eax,(%esp)
08411cdf +0x105:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08411ce4 +0x10a:  xor    $0x1,%eax
08411ce7 +0x10d:  test   %al,%al
08411ce9 +0x10f:  jne    08411d4d <+0x173>
08411ceb +0x111:  lea    -0x28(%ebp),%eax
08411cee +0x114:  add    $0x10,%eax
08411cf1 +0x117:  mov    %eax,0x8(%esp)
08411cf5 +0x11b:  movl   $0x3,0x4(%esp)
08411cfd +0x123:  mov    -0x10(%ebp),%eax
08411d00 +0x126:  mov    %eax,(%esp)
08411d03 +0x129:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08411d08 +0x12e:  xor    $0x1,%eax
08411d0b +0x131:  test   %al,%al
08411d0d +0x133:  jne    08411d50 <+0x176>
08411d0f +0x135:  lea    -0x28(%ebp),%eax
08411d12 +0x138:  add    $0x14,%eax
08411d15 +0x13b:  mov    %eax,0x8(%esp)
08411d19 +0x13f:  movl   $0x4,0x4(%esp)
08411d21 +0x147:  mov    -0x10(%ebp),%eax
08411d24 +0x14a:  mov    %eax,(%esp)
08411d27 +0x14d:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
08411d2c +0x152:  xor    $0x1,%eax
08411d2f +0x155:  test   %al,%al
08411d31 +0x157:  jne    08411d53 <+0x179>
08411d33 +0x159:  lea    -0x28(%ebp),%eax
08411d36 +0x15c:  mov    %eax,0x4(%esp)
08411d3a +0x160:  mov    0x10(%ebp),%eax
08411d3d +0x163:  mov    %eax,(%esp)
08411d40 +0x166:  call   0818d29c <_GLOBAL__I__ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_charater_name_checkEP5MySQLP17SIG_CREATE_CHARACPKc+0x1c>  ; global constructors keyed to ARAD::DATABASE::CREATE_QUERY::arad_sp_charater_name_check(MySQL*, SIG_CREATE_CHARAC*, char const*)+0x1c
08411d45 +0x16b:  jmp    08411d54 <+0x17a>
08411d47 +0x16d:  nop
08411d48 +0x16e:  jmp    08411d54 <+0x17a>
08411d4a +0x170:  nop
08411d4b +0x171:  jmp    08411d54 <+0x17a>
08411d4d +0x173:  nop
08411d4e +0x174:  jmp    08411d54 <+0x17a>
08411d50 +0x176:  nop
08411d51 +0x177:  jmp    08411d54 <+0x17a>
08411d53 +0x179:  nop
08411d54 +0x17a:  addl   $0x1,-0xc(%ebp)
08411d58 +0x17e:  mov    -0x10(%ebp),%eax
08411d5b +0x181:  mov    %eax,(%esp)
08411d5e +0x184:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08411d63 +0x189:  cmp    -0xc(%ebp),%eax
08411d66 +0x18c:  seta   %al
08411d69 +0x18f:  test   %al,%al
08411d6b +0x191:  jne    08411c64 <+0x8a>
08411d71 +0x197:  jmp    08411d77 <+0x19d>
08411d73 +0x199:  nop
08411d74 +0x19a:  jmp    08411d77 <+0x19d>
08411d76 +0x19c:  nop
08411d77 +0x19d:  add    $0x34,%esp
08411d7a +0x1a0:  pop    %ebx
08411d7b +0x1a1:  pop    %ebp
08411d7c +0x1a2:  ret
08411d7d +0x1a3:  nop
```

## 反编译 C

```c
// DB_Login::_LoadDNFEventEntry @ 0x8411bda

/* DB_Login::_LoadDNFEventEntry(unsigned int, std::vector<DB_Login::tagDNFEventEntry,
   std::allocator<DB_Login::tagDNFEventEntry> >&) */

void __thiscall DB_Login::_LoadDNFEventEntry(DB_Login *this,uint param_1,vector *param_2)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  tagDNFEventEntry local_2c [8];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  MySQL *local_14;
  uint local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  iVar3 = G_CEnvironment();
  uVar1 = *(undefined4 *)(iVar3 + 0x378);
  uVar4 = NumberToString(param_1,0);
  MySQL::set_query(local_14,
                   "seLect event_id,unix_timestamp(occ_date),server_id,charac_no,unix_timestamp(obtain_date) from dnf_event_entry where m_id=%s and server_id in(0,%d)"
                   ,uVar4,uVar1);
  cVar2 = MySQL::exec(local_14,true);
  if (cVar2 == '\x01') {
    local_10 = 0;
    while ((uVar5 = MySQL::get_n_rows(local_14), local_10 < uVar5 &&
           (cVar2 = MySQL::fetch(local_14), cVar2 == '\x01'))) {
      cVar2 = MySQL::get_int(local_14,0,(int *)local_2c);
      if ((((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_14,1,&iStack_24), cVar2 == '\x01'))
          && (cVar2 = MySQL::get_int(local_14,2,&iStack_20), cVar2 == '\x01')) &&
         ((cVar2 = MySQL::get_int(local_14,3,&iStack_1c), cVar2 == '\x01' &&
          (cVar2 = MySQL::get_int(local_14,4,&iStack_18), cVar2 == '\x01')))) {
        std::vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>>::
        push_back((vector<DB_Login::tagDNFEventEntry,std::allocator<DB_Login::tagDNFEventEntry>> *)
                  param_2,local_2c);
      }
      local_10 = local_10 + 1;
    }
  }
  return;
}
```
