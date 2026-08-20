# _getSecurityCardInfo

`_ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA`

`DB_Login::_getSecurityCardInfo(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084111e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084111e2  _ZN8DB_Login20_getSecurityCardInfoEP14SIG_LOGIN_DATA
#           DB_Login::_getSecurityCardInfo(SIG_LOGIN_DATA*)
# range [0x084111e2, 0x08411449]
084111e2 +0x000:  push   %ebp
084111e3 +0x001:  mov    %esp,%ebp
084111e5 +0x003:  push   %esi
084111e6 +0x004:  push   %ebx
084111e7 +0x005:  sub    $0x20,%esp
084111ea +0x008:  mov    0xc(%ebp),%eax
084111ed +0x00b:  movzbl 0x39dc(%eax),%eax
084111f4 +0x012:  test   %al,%al
084111f6 +0x014:  jne    08411207 <+0x25>
084111f8 +0x016:  mov    0xc(%ebp),%eax
084111fb +0x019:  movb   $0x0,0x39e0(%eax)
08411202 +0x020:  jmp    08411442 <+0x260>
08411207 +0x025:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841120c +0x02a:  movl   $0x0,0x8(%esp)
08411214 +0x032:  movl   $0x6,0x4(%esp)
0841121c +0x03a:  mov    %eax,(%esp)
0841121f +0x03d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08411224 +0x042:  mov    %eax,-0xc(%ebp)
08411227 +0x045:  mov    0xc(%ebp),%eax
0841122a +0x048:  mov    0xc0(%eax),%eax
08411230 +0x04e:  movl   $0x0,0x4(%esp)
08411238 +0x056:  mov    %eax,(%esp)
0841123b +0x059:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08411240 +0x05e:  mov    %eax,0x8(%esp)
08411244 +0x062:  movl   $"seLect card,fail_cnt,validity_time>unix_timestamp(now()),cert_flag, cert_cnt, q_pos from member_security_card where m_id=%s and apply_flag=1",0x4(%esp)
0841124c +0x06a:  mov    -0xc(%ebp),%eax
0841124f +0x06d:  mov    %eax,(%esp)
08411252 +0x070:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08411257 +0x075:  movl   $0x1,0x4(%esp)
0841125f +0x07d:  mov    -0xc(%ebp),%eax
08411262 +0x080:  mov    %eax,(%esp)
08411265 +0x083:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841126a +0x088:  mov    -0xc(%ebp),%eax
0841126d +0x08b:  mov    %eax,(%esp)
08411270 +0x08e:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08411275 +0x093:  test   %eax,%eax
08411277 +0x095:  sete   %al
0841127a +0x098:  test   %al,%al
0841127c +0x09a:  je     0841128d <+0xab>
0841127e +0x09c:  mov    0xc(%ebp),%eax
08411281 +0x09f:  movb   $0x0,0x39e0(%eax)
08411288 +0x0a6:  jmp    08411442 <+0x260>
0841128d +0x0ab:  movl   $0x0,-0x10(%ebp)
08411294 +0x0b2:  mov    -0xc(%ebp),%eax
08411297 +0x0b5:  mov    %eax,(%esp)
0841129a +0x0b8:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841129f +0x0bd:  mov    0xc(%ebp),%eax
084112a2 +0x0c0:  add    $0x39ed,%eax
084112a7 +0x0c5:  movl   $0x27,0xc(%esp)
084112af +0x0cd:  mov    %eax,0x8(%esp)
084112b3 +0x0d1:  movl   $0x0,0x4(%esp)
084112bb +0x0d9:  mov    -0xc(%ebp),%eax
084112be +0x0dc:  mov    %eax,(%esp)
084112c1 +0x0df:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
084112c6 +0x0e4:  mov    0xc(%ebp),%eax
084112c9 +0x0e7:  add    $0x39e4,%eax
084112ce +0x0ec:  mov    %eax,0x8(%esp)
084112d2 +0x0f0:  movl   $0x1,0x4(%esp)
084112da +0x0f8:  mov    -0xc(%ebp),%eax
084112dd +0x0fb:  mov    %eax,(%esp)
084112e0 +0x0fe:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084112e5 +0x103:  lea    -0x10(%ebp),%eax
084112e8 +0x106:  mov    %eax,0x8(%esp)
084112ec +0x10a:  movl   $0x2,0x4(%esp)
084112f4 +0x112:  mov    -0xc(%ebp),%eax
084112f7 +0x115:  mov    %eax,(%esp)
084112fa +0x118:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
084112ff +0x11d:  mov    0xc(%ebp),%eax
08411302 +0x120:  add    $0x39e8,%eax
08411307 +0x125:  mov    %eax,0x8(%esp)
0841130b +0x129:  movl   $0x3,0x4(%esp)
08411313 +0x131:  mov    -0xc(%ebp),%eax
08411316 +0x134:  mov    %eax,(%esp)
08411319 +0x137:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0841131e +0x13c:  mov    0xc(%ebp),%eax
08411321 +0x13f:  add    $0x39ec,%eax
08411326 +0x144:  mov    %eax,0x8(%esp)
0841132a +0x148:  movl   $0x4,0x4(%esp)
08411332 +0x150:  mov    -0xc(%ebp),%eax
08411335 +0x153:  mov    %eax,(%esp)
08411338 +0x156:  call   080fde54 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x180>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x180
0841133d +0x15b:  mov    0xc(%ebp),%eax
08411340 +0x15e:  add    $0x3a14,%eax
08411345 +0x163:  mov    %eax,0x8(%esp)
08411349 +0x167:  movl   $0x5,0x4(%esp)
08411351 +0x16f:  mov    -0xc(%ebp),%eax
08411354 +0x172:  mov    %eax,(%esp)
08411357 +0x175:  call   0814201c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x370>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x370
0841135c +0x17a:  mov    0xc(%ebp),%eax
0841135f +0x17d:  add    $0x3a18,%eax
08411364 +0x182:  movl   $0x5,0xc(%esp)
0841136c +0x18a:  mov    %eax,0x8(%esp)
08411370 +0x18e:  movl   $0x5,0x4(%esp)
08411378 +0x196:  mov    -0xc(%ebp),%eax
0841137b +0x199:  mov    %eax,(%esp)
0841137e +0x19c:  call   080ecdea <_GLOBAL__I__ZN12CDBConnectorC2EP5DBMgr+0xcf>  ; global constructors keyed to CDBConnector::CDBConnector(DBMgr*)+0xcf
08411383 +0x1a1:  mov    -0x10(%ebp),%eax
08411386 +0x1a4:  cmp    $0x1,%eax
08411389 +0x1a7:  jne    08411395 <+0x1b3>
0841138b +0x1a9:  mov    0xc(%ebp),%eax
0841138e +0x1ac:  movb   $0x1,0x39e1(%eax)
08411395 +0x1b3:  mov    0xc(%ebp),%eax
08411398 +0x1b6:  movb   $0x1,0x39e0(%eax)
0841139f +0x1bd:  mov    0xc(%ebp),%eax
084113a2 +0x1c0:  mov    0x39e8(%eax),%eax
084113a8 +0x1c6:  test   %eax,%eax
084113aa +0x1c8:  je     084113e9 <+0x207>
084113ac +0x1ca:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084113b3 +0x1d1:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084113b8 +0x1d6:  mov    %eax,%ebx
084113ba +0x1d8:  mov    0xc(%ebp),%eax
084113bd +0x1db:  mov    0x3958(%eax),%esi
084113c3 +0x1e1:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
084113c8 +0x1e6:  mov    0x37c(%eax),%eax
084113ce +0x1ec:  mov    %ebx,0x8(%esp)
084113d2 +0x1f0:  mov    %esi,0x4(%esp)
084113d6 +0x1f4:  mov    %eax,(%esp)
084113d9 +0x1f7:  call   0846c0a8 <_Z22CheckDailyScheduleTimeill>  ; CheckDailyScheduleTime(int, long, long)
084113de +0x1fc:  test   %al,%al
084113e0 +0x1fe:  je     084113e9 <+0x207>
084113e2 +0x200:  mov    $0x1,%eax
084113e7 +0x205:  jmp    084113ee <+0x20c>
084113e9 +0x207:  mov    $0x0,%eax
084113ee +0x20c:  test   %al,%al
084113f0 +0x20e:  je     08411442 <+0x260>
084113f2 +0x210:  mov    0xc(%ebp),%eax
084113f5 +0x213:  movl   $0x0,0x39e8(%eax)
084113ff +0x21d:  mov    0xc(%ebp),%eax
08411402 +0x220:  mov    0xc0(%eax),%eax
08411408 +0x226:  movl   $0x0,0x4(%esp)
08411410 +0x22e:  mov    %eax,(%esp)
08411413 +0x231:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08411418 +0x236:  mov    %eax,0x8(%esp)
0841141c +0x23a:  movl   $"upDate member_security_card set cancel_cnt=0 where m_id=%s",0x4(%esp)
08411424 +0x242:  mov    -0xc(%ebp),%eax
08411427 +0x245:  mov    %eax,(%esp)
0841142a +0x248:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841142f +0x24d:  movl   $0x1,0x4(%esp)
08411437 +0x255:  mov    -0xc(%ebp),%eax
0841143a +0x258:  mov    %eax,(%esp)
0841143d +0x25b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08411442 +0x260:  add    $0x20,%esp
08411445 +0x263:  pop    %ebx
08411446 +0x264:  pop    %esi
08411447 +0x265:  pop    %ebp
08411448 +0x266:  ret
08411449 +0x267:  nop
```

## 反编译 C

```c
// DB_Login::_getSecurityCardInfo @ 0x84111e2

/* DB_Login::_getSecurityCardInfo(SIG_LOGIN_DATA*) */

void __thiscall DB_Login::_getSecurityCardInfo(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  long lVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  uint local_14;
  MySQL *local_10;
  
  if (param_1[0x39dc] == (SIG_LOGIN_DATA)0x0) {
    param_1[0x39e0] = (SIG_LOGIN_DATA)0x0;
    return;
  }
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(local_10,
                   "seLect card,fail_cnt,validity_time>unix_timestamp(now()),cert_flag, cert_cnt, q_pos from member_security_card where m_id=%s and apply_flag=1"
                   ,uVar4);
  MySQL::exec(local_10,true);
  iVar5 = MySQL::get_n_rows(local_10);
  if (iVar5 == 0) {
    param_1[0x39e0] = (SIG_LOGIN_DATA)0x0;
    return;
  }
  local_14 = 0;
  MySQL::fetch(local_10);
  MySQL::get_str(local_10,0,(char *)(param_1 + 0x39ed),0x27);
  MySQL::get_int(local_10,1,(int *)(param_1 + 0x39e4));
  MySQL::get_uint(local_10,2,&local_14);
  MySQL::get_uint(local_10,3,(uint *)(param_1 + 0x39e8));
  MySQL::get_byte(local_10,4,(char *)(param_1 + 0x39ec));
  MySQL::get_short(local_10,5,(int *)(param_1 + 0x3a14));
  MySQL::get_str(local_10,5,(char *)(param_1 + 0x3a18),5);
  if (local_14 == 1) {
    param_1[0x39e1] = (SIG_LOGIN_DATA)0x1;
  }
  param_1[0x39e0] = (SIG_LOGIN_DATA)0x1;
  if (*(int *)(param_1 + 0x39e8) != 0) {
    lVar6 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
    lVar1 = *(long *)(param_1 + 0x3958);
    iVar5 = G_CEnvironment();
    cVar3 = CheckDailyScheduleTime(*(int *)(iVar5 + 0x37c),lVar1,lVar6);
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_084113ee;
    }
  }
  bVar2 = false;
LAB_084113ee:
  if (bVar2) {
    *(undefined4 *)(param_1 + 0x39e8) = 0;
    uVar4 = NumberToString(*(uint *)(param_1 + 0xc0),0);
    MySQL::set_query(local_10,"upDate member_security_card set cancel_cnt=0 where m_id=%s",uVar4);
    MySQL::exec(local_10,true);
  }
  return;
}
```
