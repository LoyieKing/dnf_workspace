# dispatch

`_ZN23DB_SecurityCardActivate8dispatchEiiP6Stream`

`DB_SecurityCardActivate::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_SecurityCardActivate` | `0x0842b86c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842b86c  _ZN23DB_SecurityCardActivate8dispatchEiiP6Stream
#           DB_SecurityCardActivate::dispatch(int, int, Stream*)
# range [0x0842b86c, 0x0842bb5b]
0842b86c +0x000:  push   %ebp
0842b86d +0x001:  mov    %esp,%ebp
0842b86f +0x003:  push   %edi
0842b870 +0x004:  push   %esi
0842b871 +0x005:  push   %ebx
0842b872 +0x006:  sub    $0x3c,%esp
0842b875 +0x009:  mov    0x14(%ebp),%eax
0842b878 +0x00c:  mov    %eax,(%esp)
0842b87b +0x00f:  call   08452688 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x529e>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x529e
0842b880 +0x014:  mov    %eax,-0x2c(%ebp)
0842b883 +0x017:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842b888 +0x01c:  movl   $0x0,0x8(%esp)
0842b890 +0x024:  movl   $0x6,0x4(%esp)
0842b898 +0x02c:  mov    %eax,(%esp)
0842b89b +0x02f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842b8a0 +0x034:  mov    %eax,-0x28(%ebp)
0842b8a3 +0x037:  mov    -0x2c(%ebp),%eax
0842b8a6 +0x03a:  lea    0x4(%eax),%edi
0842b8a9 +0x03d:  mov    -0x2c(%ebp),%eax
0842b8ac +0x040:  mov    (%eax),%eax
0842b8ae +0x042:  movl   $0x0,0x4(%esp)
0842b8b6 +0x04a:  mov    %eax,(%esp)
0842b8b9 +0x04d:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842b8be +0x052:  mov    %edi,0xc(%esp)
0842b8c2 +0x056:  mov    %eax,0x8(%esp)
0842b8c6 +0x05a:  movl   $"upDate member_security_card set apply_flag=1, cert_flag=1, cert_cnt = 0 where m_id=%s and cert_key='%s'",0x4(%esp)
0842b8ce +0x062:  mov    -0x28(%ebp),%eax
0842b8d1 +0x065:  mov    %eax,(%esp)
0842b8d4 +0x068:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b8d9 +0x06d:  movl   $0x1,0x4(%esp)
0842b8e1 +0x075:  mov    -0x28(%ebp),%eax
0842b8e4 +0x078:  mov    %eax,(%esp)
0842b8e7 +0x07b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b8ec +0x080:  movb   $0x0,-0x21(%ebp)
0842b8f0 +0x084:  mov    -0x28(%ebp),%eax
0842b8f3 +0x087:  mov    %eax,(%esp)
0842b8f6 +0x08a:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842b8fb +0x08f:  mov    %eax,%ebx
0842b8fd +0x091:  xor    $0x1,%ebx
0842b900 +0x094:  mov    %edx,%esi
0842b902 +0x096:  xor    $0x0,%esi
0842b905 +0x099:  mov    %ebx,%eax
0842b907 +0x09b:  or     %esi,%eax
0842b909 +0x09d:  test   %eax,%eax
0842b90b +0x09f:  sete   %al
0842b90e +0x0a2:  test   %al,%al
0842b910 +0x0a4:  je     0842b92a <+0xbe>
0842b912 +0x0a6:  movb   $0x1,-0x21(%ebp)
0842b916 +0x0aa:  mov    -0x2c(%ebp),%eax
0842b919 +0x0ad:  mov    (%eax),%eax
0842b91b +0x0af:  mov    %eax,0x4(%esp)
0842b91f +0x0b3:  mov    -0x28(%ebp),%eax
0842b922 +0x0b6:  mov    %eax,(%esp)
0842b925 +0x0b9:  call   0842ae90 <_Z18turnOnSecurityFlagP5MySQLj>  ; turnOnSecurityFlag(MySQL*, unsigned int)
0842b92a +0x0be:  mov    -0x2c(%ebp),%eax
0842b92d +0x0c1:  mov    (%eax),%eax
0842b92f +0x0c3:  mov    0x10(%ebp),%edx
0842b932 +0x0c6:  mov    %edx,0x4(%esp)
0842b936 +0x0ca:  mov    %eax,(%esp)
0842b939 +0x0cd:  call   0843741e <_ZN28DB_CancelRestingUserRestrict11makeRequestEji>  ; DB_CancelRestingUserRestrict::makeRequest(unsigned int, int)
0842b93e +0x0d2:  mov    -0x2c(%ebp),%eax
0842b941 +0x0d5:  movzbl 0xb(%eax),%eax
0842b945 +0x0d9:  test   %al,%al
0842b947 +0x0db:  je     0842b967 <+0xfb>
0842b949 +0x0dd:  mov    -0x2c(%ebp),%eax
0842b94c +0x0e0:  mov    (%eax),%eax
0842b94e +0x0e2:  movl   $0x1,0x8(%esp)
0842b956 +0x0ea:  mov    %eax,0x4(%esp)
0842b95a +0x0ee:  mov    -0x28(%ebp),%eax
0842b95d +0x0f1:  mov    %eax,(%esp)
0842b960 +0x0f4:  call   0842ae3f <_Z23saveSecurityCardHistoryP5MySQLj26ENUM_SECURITYCARD_MOD_TYPE>  ; saveSecurityCardHistory(MySQL*, unsigned int, ENUM_SECURITYCARD_MOD_TYPE)
0842b965 +0x0f9:  jmp    0842b983 <+0x117>
0842b967 +0x0fb:  mov    -0x2c(%ebp),%eax
0842b96a +0x0fe:  mov    (%eax),%eax
0842b96c +0x100:  movl   $0x0,0x8(%esp)
0842b974 +0x108:  mov    %eax,0x4(%esp)
0842b978 +0x10c:  mov    -0x28(%ebp),%eax
0842b97b +0x10f:  mov    %eax,(%esp)
0842b97e +0x112:  call   0842ae3f <_Z23saveSecurityCardHistoryP5MySQLj26ENUM_SECURITYCARD_MOD_TYPE>  ; saveSecurityCardHistory(MySQL*, unsigned int, ENUM_SECURITYCARD_MOD_TYPE)
0842b983 +0x117:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842b988 +0x11c:  movl   $0x0,0x8(%esp)
0842b990 +0x124:  movl   $0x1,0x4(%esp)
0842b998 +0x12c:  mov    %eax,(%esp)
0842b99b +0x12f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842b9a0 +0x134:  mov    %eax,-0x20(%ebp)
0842b9a3 +0x137:  cmpb   $0x0,-0x21(%ebp)
0842b9a7 +0x13b:  je     0842ba80 <+0x214>
0842b9ad +0x141:  mov    -0x2c(%ebp),%eax
0842b9b0 +0x144:  mov    (%eax),%eax
0842b9b2 +0x146:  movl   $0x0,0x4(%esp)
0842b9ba +0x14e:  mov    %eax,(%esp)
0842b9bd +0x151:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842b9c2 +0x156:  mov    %eax,0x8(%esp)
0842b9c6 +0x15a:  movl   $"upDate member_security_grade set security_card_reg=now() where m_id=%s",0x4(%esp)
0842b9ce +0x162:  mov    -0x20(%ebp),%eax
0842b9d1 +0x165:  mov    %eax,(%esp)
0842b9d4 +0x168:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842b9d9 +0x16d:  movl   $0x1,0x4(%esp)
0842b9e1 +0x175:  mov    -0x20(%ebp),%eax
0842b9e4 +0x178:  mov    %eax,(%esp)
0842b9e7 +0x17b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842b9ec +0x180:  xor    $0x1,%eax
0842b9ef +0x183:  test   %al,%al
0842b9f1 +0x185:  jne    0842ba04 <+0x198>
0842b9f3 +0x187:  mov    -0x20(%ebp),%eax
0842b9f6 +0x18a:  mov    %eax,(%esp)
0842b9f9 +0x18d:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842b9fe +0x192:  or     %edx,%eax
0842ba00 +0x194:  test   %eax,%eax
0842ba02 +0x196:  jne    0842ba0b <+0x19f>
0842ba04 +0x198:  mov    $0x1,%eax
0842ba09 +0x19d:  jmp    0842ba10 <+0x1a4>
0842ba0b +0x19f:  mov    $0x0,%eax
0842ba10 +0x1a4:  test   %al,%al
0842ba12 +0x1a6:  je     0842ba64 <+0x1f8>
0842ba14 +0x1a8:  mov    -0x2c(%ebp),%eax
0842ba17 +0x1ab:  mov    (%eax),%eax
0842ba19 +0x1ad:  movl   $0x0,0x4(%esp)
0842ba21 +0x1b5:  mov    %eax,(%esp)
0842ba24 +0x1b8:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842ba29 +0x1bd:  mov    %eax,0x8(%esp)
0842ba2d +0x1c1:  movl   $"inSert into member_security_grade(m_id, security_card_reg) values(%s, now())",0x4(%esp)
0842ba35 +0x1c9:  mov    -0x20(%ebp),%eax
0842ba38 +0x1cc:  mov    %eax,(%esp)
0842ba3b +0x1cf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842ba40 +0x1d4:  movl   $0x1,0x4(%esp)
0842ba48 +0x1dc:  mov    -0x20(%ebp),%eax
0842ba4b +0x1df:  mov    %eax,(%esp)
0842ba4e +0x1e2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842ba53 +0x1e7:  xor    $0x1,%eax
0842ba56 +0x1ea:  test   %al,%al
0842ba58 +0x1ec:  je     0842ba64 <+0x1f8>
0842ba5a +0x1ee:  mov    $0x0,%ebx
0842ba5f +0x1f3:  jmp    0842bb52 <+0x2e6>
0842ba64 +0x1f8:  mov    -0x2c(%ebp),%eax
0842ba67 +0x1fb:  mov    (%eax),%eax
0842ba69 +0x1fd:  movl   $0x0,0x8(%esp)
0842ba71 +0x205:  mov    %eax,0x4(%esp)
0842ba75 +0x209:  mov    0x10(%ebp),%eax
0842ba78 +0x20c:  mov    %eax,(%esp)
0842ba7b +0x20f:  call   08444408 <_ZN18DB_CheckSecuReward11makeRequestEiji>  ; DB_CheckSecuReward::makeRequest(int, unsigned int, int)
0842ba80 +0x214:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
0842ba85 +0x219:  movl   $0x6e89,0x8(%esp)
0842ba8d +0x221:  movl   $"DBThread.cpp",0x4(%esp)
0842ba95 +0x229:  mov    %eax,(%esp)
0842ba98 +0x22c:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
0842ba9d +0x231:  movl   $0x1,0x8(%esp)
0842baa5 +0x239:  mov    %eax,0x4(%esp)
0842baa9 +0x23d:  lea    -0x34(%ebp),%eax
0842baac +0x240:  mov    %eax,(%esp)
0842baaf +0x243:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
0842bab4 +0x248:  lea    -0x34(%ebp),%eax
0842bab7 +0x24b:  mov    %eax,(%esp)
0842baba +0x24e:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842babf +0x253:  movl   $0xff,0x4(%esp)
0842bac7 +0x25b:  mov    %eax,(%esp)
0842baca +0x25e:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842bacf +0x263:  lea    -0x34(%ebp),%eax
0842bad2 +0x266:  mov    %eax,(%esp)
0842bad5 +0x269:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
0842bada +0x26e:  mov    0x10(%ebp),%edx
0842badd +0x271:  mov    %edx,0x4(%esp)
0842bae1 +0x275:  mov    %eax,(%esp)
0842bae4 +0x278:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842bae9 +0x27d:  lea    -0x34(%ebp),%eax
0842baec +0x280:  mov    %eax,(%esp)
0842baef +0x283:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
0842baf4 +0x288:  mov    %eax,(%esp)
0842baf7 +0x28b:  call   084526dc <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x52f2>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x52f2
0842bafc +0x290:  mov    %eax,-0x1c(%ebp)
0842baff +0x293:  mov    -0x1c(%ebp),%eax
0842bb02 +0x296:  movzbl -0x21(%ebp),%edx
0842bb06 +0x29a:  mov    %dl,0xa(%eax)
0842bb09 +0x29d:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
0842bb0e +0x2a2:  lea    -0x34(%ebp),%edx
0842bb11 +0x2a5:  mov    %edx,0x8(%esp)
0842bb15 +0x2a9:  movl   $0x1,0x4(%esp)
0842bb1d +0x2b1:  mov    %eax,(%esp)
0842bb20 +0x2b4:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
0842bb25 +0x2b9:  mov    $0x1,%ebx
0842bb2a +0x2be:  lea    -0x34(%ebp),%eax
0842bb2d +0x2c1:  mov    %eax,(%esp)
0842bb30 +0x2c4:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842bb35 +0x2c9:  jmp    0842bb52 <+0x2e6>
0842bb37 +0x2cb:  mov    %edx,%ebx
0842bb39 +0x2cd:  mov    %eax,%esi
0842bb3b +0x2cf:  lea    -0x34(%ebp),%eax
0842bb3e +0x2d2:  mov    %eax,(%esp)
0842bb41 +0x2d5:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
0842bb46 +0x2da:  mov    %esi,%eax
0842bb48 +0x2dc:  mov    %ebx,%edx
0842bb4a +0x2de:  mov    %eax,(%esp)
0842bb4d +0x2e1:  call   08ae3750 <_Unwind_Resume>
0842bb52 +0x2e6:  mov    %ebx,%eax
0842bb54 +0x2e8:  add    $0x3c,%esp
0842bb57 +0x2eb:  pop    %ebx
0842bb58 +0x2ec:  pop    %esi
0842bb59 +0x2ed:  pop    %edi
0842bb5a +0x2ee:  pop    %ebp
0842bb5b +0x2ef:  ret
```

## 反编译 C

```c
// DB_SecurityCardActivate::dispatch @ 0x842b86c

/* DB_SecurityCardActivate::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SecurityCardActivate::dispatch
          (DB_SecurityCardActivate *this,int param_1,int param_2,Stream *param_3)

{
  SIG_SECURITY_CARD_ACTIVATE *pSVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  Stream *pSVar5;
  CStreamGuard *pCVar6;
  longlong lVar7;
  CStreamGuard local_38 [8];
  SIG_SECURITY_CARD_ACTIVATE *local_30;
  MySQL *local_2c;
  SIG_SECURITY_CARD_ACTIVATE local_25;
  MySQL *local_24;
  SIG_SECURITY_CARD_ACTIVATE *local_20;
  
  local_30 = Stream::GetOutBuffer<SIG_SECURITY_CARD_ACTIVATE>(param_3);
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar1 = local_30 + 4;
  uVar4 = NumberToString(*(uint *)local_30,0);
  MySQL::set_query(local_2c,
                   "upDate member_security_card set apply_flag=1, cert_flag=1, cert_cnt = 0 where m_id=%s and cert_key=\'%s\'"
                   ,uVar4,pSVar1);
  MySQL::exec(local_2c,true);
  local_25 = (SIG_SECURITY_CARD_ACTIVATE)0x0;
  lVar7 = MySQL::getAffectedRowCount(local_2c);
  if (lVar7 == 1) {
    local_25 = (SIG_SECURITY_CARD_ACTIVATE)0x1;
    turnOnSecurityFlag(local_2c,*(uint *)local_30);
  }
  DB_CancelRestingUserRestrict::makeRequest(*(uint *)local_30,param_2);
  if (local_30[0xb] == (SIG_SECURITY_CARD_ACTIVATE)0x0) {
    saveSecurityCardHistory(local_2c,*(uint *)local_30,0);
  }
  else {
    saveSecurityCardHistory(local_2c,*(uint *)local_30,1);
  }
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  if (local_25 != (SIG_SECURITY_CARD_ACTIVATE)0x0) {
    uVar4 = NumberToString(*(uint *)local_30,0);
    MySQL::set_query(local_24,
                     "upDate member_security_grade set security_card_reg=now() where m_id=%s",uVar4)
    ;
    cVar3 = MySQL::exec(local_24,true);
    if ((cVar3 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(local_24), lVar7 != 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar4 = NumberToString(*(uint *)local_30,0);
      MySQL::set_query(local_24,
                       "inSert into member_security_grade(m_id, security_card_reg) values(%s, now())"
                       ,uVar4);
      cVar3 = MySQL::exec(local_24,true);
      if (cVar3 != '\x01') {
        return 0;
      }
    }
    DB_CheckSecuReward::makeRequest(param_2,*(uint *)local_30,0);
  }
  pSVar5 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6e89);
  CStreamGuard::CStreamGuard(local_38,pSVar5,true);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 0842baca to 0842bb24 has its CatchHandler @ 0842bb37 */
  CStreamGuard::operator<<(pCVar6,0xff);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar6,param_2);
  pCVar6 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_20 = CStreamGuard::GetInBuffer<SIG_SECURITY_CARD_ACTIVATE>(pCVar6);
  local_20[10] = local_25;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
  CStreamGuard::~CStreamGuard(local_38);
  return 1;
}
```
