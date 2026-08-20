# arad_sp_select_member_brodcast

`_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, int)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818ca69` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818ca69  _ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEi
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, int)
# range [0x0818ca69, 0x0818cc73]
0818ca69 +0x000:  push   %ebp
0818ca6a +0x001:  mov    %esp,%ebp
0818ca6c +0x003:  push   %ebx
0818ca6d +0x004:  sub    $0x44,%esp
0818ca70 +0x007:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818ca75 +0x00c:  movl   $0x0,0x8(%esp)
0818ca7d +0x014:  movl   $0x6,0x4(%esp)
0818ca85 +0x01c:  mov    %eax,(%esp)
0818ca88 +0x01f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818ca8d +0x024:  mov    %eax,-0xc(%ebp)
0818ca90 +0x027:  cmpl   $0x0,-0xc(%ebp)
0818ca94 +0x02b:  jne    0818cad4 <+0x6b>
0818ca96 +0x02d:  movl   $"Database null!!",0x14(%esp)
0818ca9e +0x035:  movl   $"%s",0x10(%esp)
0818caa6 +0x03d:  movl   $0x3d6,0xc(%esp)
0818caae +0x045:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_select_member_brodcastEP14SIG_LOGIN_DATARN8DB_Login16tagDNFEventEntryEiE19__PRETTY_FUNCTION__,0x8(%esp)
0818cab6 +0x04d:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818cabe +0x055:  movl   $0x1,(%esp)
0818cac5 +0x05c:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818caca +0x061:  mov    $0xffffffff,%eax
0818cacf +0x066:  jmp    0818cc6e <+0x205>
0818cad4 +0x06b:  mov    0xc(%ebp),%eax
0818cad7 +0x06e:  mov    (%eax),%edx
0818cad9 +0x070:  mov    0x8(%ebp),%eax
0818cadc +0x073:  mov    0xc0(%eax),%eax
0818cae2 +0x079:  mov    %edx,0xc(%esp)
0818cae6 +0x07d:  mov    %eax,0x8(%esp)
0818caea +0x081:  movl   $"seLect m_id,charac_no,server_id,unix_timestamp(start_time),charac_name from member_broadcast where event_id=%d and m_id=%d and end_time>now() limit 1",0x4(%esp)
0818caf2 +0x089:  mov    -0xc(%ebp),%eax
0818caf5 +0x08c:  mov    %eax,(%esp)
0818caf8 +0x08f:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818cafd +0x094:  test   %eax,%eax
0818caff +0x096:  setne  %al
0818cb02 +0x099:  test   %al,%al
0818cb04 +0x09b:  je     0818cb10 <+0xa7>
0818cb06 +0x09d:  mov    $0xffffffff,%eax
0818cb0b +0x0a2:  jmp    0818cc6e <+0x205>
0818cb10 +0x0a7:  movl   $0x0,-0x1c(%ebp)
0818cb17 +0x0ae:  lea    -0x18(%ebp),%eax
0818cb1a +0x0b1:  mov    %eax,0x8(%esp)
0818cb1e +0x0b5:  movl   $0x0,0x4(%esp)
0818cb26 +0x0bd:  mov    -0xc(%ebp),%eax
0818cb29 +0x0c0:  mov    %eax,(%esp)
0818cb2c +0x0c3:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818cb31 +0x0c8:  xor    $0x1,%eax
0818cb34 +0x0cb:  test   %al,%al
0818cb36 +0x0cd:  je     0818cb42 <+0xd9>
0818cb38 +0x0cf:  mov    $0xffffffff,%eax
0818cb3d +0x0d4:  jmp    0818cc6e <+0x205>
0818cb42 +0x0d9:  lea    -0x18(%ebp),%eax
0818cb45 +0x0dc:  add    $0x4,%eax
0818cb48 +0x0df:  mov    %eax,0x8(%esp)
0818cb4c +0x0e3:  movl   $0x1,0x4(%esp)
0818cb54 +0x0eb:  mov    -0xc(%ebp),%eax
0818cb57 +0x0ee:  mov    %eax,(%esp)
0818cb5a +0x0f1:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818cb5f +0x0f6:  xor    $0x1,%eax
0818cb62 +0x0f9:  test   %al,%al
0818cb64 +0x0fb:  je     0818cb70 <+0x107>
0818cb66 +0x0fd:  mov    $0xffffffff,%eax
0818cb6b +0x102:  jmp    0818cc6e <+0x205>
0818cb70 +0x107:  lea    -0x18(%ebp),%eax
0818cb73 +0x10a:  add    $0x8,%eax
0818cb76 +0x10d:  mov    %eax,0x8(%esp)
0818cb7a +0x111:  movl   $0x2,0x4(%esp)
0818cb82 +0x119:  mov    -0xc(%ebp),%eax
0818cb85 +0x11c:  mov    %eax,(%esp)
0818cb88 +0x11f:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818cb8d +0x124:  xor    $0x1,%eax
0818cb90 +0x127:  test   %al,%al
0818cb92 +0x129:  je     0818cb9e <+0x135>
0818cb94 +0x12b:  mov    $0xffffffff,%eax
0818cb99 +0x130:  jmp    0818cc6e <+0x205>
0818cb9e +0x135:  lea    -0x1c(%ebp),%eax
0818cba1 +0x138:  mov    %eax,0x8(%esp)
0818cba5 +0x13c:  movl   $0x3,0x4(%esp)
0818cbad +0x144:  mov    -0xc(%ebp),%eax
0818cbb0 +0x147:  mov    %eax,(%esp)
0818cbb3 +0x14a:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0818cbb8 +0x14f:  xor    $0x1,%eax
0818cbbb +0x152:  test   %al,%al
0818cbbd +0x154:  je     0818cbc9 <+0x160>
0818cbbf +0x156:  mov    $0xffffffff,%eax
0818cbc4 +0x15b:  jmp    0818cc6e <+0x205>
0818cbc9 +0x160:  mov    0x8(%ebp),%eax
0818cbcc +0x163:  add    $0x39b0,%eax
0818cbd1 +0x168:  movl   $0x1e,0xc(%esp)
0818cbd9 +0x170:  mov    %eax,0x8(%esp)
0818cbdd +0x174:  movl   $0x4,0x4(%esp)
0818cbe5 +0x17c:  mov    -0xc(%ebp),%eax
0818cbe8 +0x17f:  mov    %eax,(%esp)
0818cbeb +0x182:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
0818cbf0 +0x187:  xor    $0x1,%eax
0818cbf3 +0x18a:  test   %al,%al
0818cbf5 +0x18c:  je     0818cbfe <+0x195>
0818cbf7 +0x18e:  mov    $0xffffffff,%eax
0818cbfc +0x193:  jmp    0818cc6e <+0x205>
0818cbfe +0x195:  mov    -0x1c(%ebp),%eax
0818cc01 +0x198:  mov    %eax,%ebx
0818cc03 +0x19a:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0818cc0a +0x1a1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0818cc0f +0x1a6:  cmp    %eax,%ebx
0818cc11 +0x1a8:  setg   %al
0818cc14 +0x1ab:  test   %al,%al
0818cc16 +0x1ad:  je     0818cc1f <+0x1b6>
0818cc18 +0x1af:  mov    $0xffffffff,%eax
0818cc1d +0x1b4:  jmp    0818cc6e <+0x205>
0818cc1f +0x1b6:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0818cc24 +0x1bb:  mov    %eax,(%esp)
0818cc27 +0x1be:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
0818cc2c +0x1c3:  cmp    $0x7,%eax
0818cc2f +0x1c6:  sete   %al
0818cc32 +0x1c9:  test   %al,%al
0818cc34 +0x1cb:  je     0818cc51 <+0x1e8>
0818cc36 +0x1cd:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818cc3b +0x1d2:  lea    -0x18(%ebp),%edx
0818cc3e +0x1d5:  mov    %edx,0x8(%esp)
0818cc42 +0x1d9:  mov    0x10(%ebp),%edx
0818cc45 +0x1dc:  mov    %edx,0x4(%esp)
0818cc49 +0x1e0:  mov    %eax,(%esp)
0818cc4c +0x1e3:  call   083f4f9e <_ZN5DBMgr13addUserDBInfoEiRKNS_14stUserDBInfo_tE>  ; DBMgr::addUserDBInfo(int, DBMgr::stUserDBInfo_t const&)
0818cc51 +0x1e8:  mov    -0x14(%ebp),%edx
0818cc54 +0x1eb:  mov    0x8(%ebp),%eax
0818cc57 +0x1ee:  mov    %edx,0x39ac(%eax)
0818cc5d +0x1f4:  mov    -0x10(%ebp),%edx
0818cc60 +0x1f7:  mov    0x8(%ebp),%eax
0818cc63 +0x1fa:  mov    %edx,0x39a8(%eax)
0818cc69 +0x200:  mov    $0x0,%eax
0818cc6e +0x205:  add    $0x44,%esp
0818cc71 +0x208:  pop    %ebx
0818cc72 +0x209:  pop    %ebp
0818cc73 +0x20a:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast @ 0x818ca69

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*,
   DB_Login::tagDNFEventEntry&, int) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast
          (SIG_LOGIN_DATA *param_1,tagDNFEventEntry *param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  GameWorld *this;
  uint local_20;
  stUserDBInfo_t local_1c [4];
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (local_10 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_select_member_brodcast(SIG_LOGIN_DATA*, DB_Login::tagDNFEventEntry&, int)"
               ,0x3d6,"%s","Database null!!");
    uVar3 = 0xffffffff;
  }
  else {
    iVar4 = MySQL::select(local_10,
                          "seLect m_id,charac_no,server_id,unix_timestamp(start_time),charac_name from member_broadcast where event_id=%d and m_id=%d and end_time>now() limit 1"
                          ,*(undefined4 *)(param_1 + 0xc0),*(undefined4 *)param_2);
    if (iVar4 == 0) {
      local_20 = 0;
      cVar2 = MySQL::get_uint(local_10,0,(uint *)local_1c);
      if (cVar2 == '\x01') {
        cVar2 = MySQL::get_uint(local_10,1,&local_18);
        if (cVar2 == '\x01') {
          cVar2 = MySQL::get_uint(local_10,2,&local_14);
          if (cVar2 == '\x01') {
            cVar2 = MySQL::get_uint(local_10,3,&local_20);
            if (cVar2 == '\x01') {
              cVar2 = MySQL::get_str(local_10,4,(char *)(param_1 + 0x39b0),0x1e);
              uVar1 = local_20;
              if (cVar2 == '\x01') {
                iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                if (iVar4 < (int)uVar1) {
                  uVar3 = 0xffffffff;
                }
                else {
                  this = (GameWorld *)G_GameWorld();
                  iVar4 = GameWorld::GetChannelType(this);
                  if (iVar4 == 7) {
                    DBMgr::addUserDBInfo(GlobalData::s_db_mgr,param_3,local_1c);
                  }
                  *(uint *)(param_1 + 0x39ac) = local_18;
                  *(uint *)(param_1 + 0x39a8) = local_14;
                  uVar3 = 0;
                }
              }
              else {
                uVar3 = 0xffffffff;
              }
            }
            else {
              uVar3 = 0xffffffff;
            }
          }
          else {
            uVar3 = 0xffffffff;
          }
        }
        else {
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      uVar3 = 0xffffffff;
    }
  }
  return uVar3;
}
```
