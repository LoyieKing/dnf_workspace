# _modifyPassword

`_ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib`

`DB_MouseRegister::_modifyPassword(unsigned int, char const*, char*, int, bool)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x08423528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08423528  _ZN16DB_MouseRegister15_modifyPasswordEjPKcPcib
#           DB_MouseRegister::_modifyPassword(unsigned int, char const*, char*, int, bool)
# range [0x08423528, 0x08423793]
08423528 +0x000:  push   %ebp
08423529 +0x001:  mov    %esp,%ebp
0842352b +0x003:  push   %esi
0842352c +0x004:  push   %ebx
0842352d +0x005:  sub    $0x40,%esp
08423530 +0x008:  mov    0x1c(%ebp),%eax
08423533 +0x00b:  mov    %al,-0x2c(%ebp)
08423536 +0x00e:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
0842353b +0x013:  mov    %eax,-0x14(%ebp)
0842353e +0x016:  mov    0x14(%ebp),%eax
08423541 +0x019:  mov    %eax,0x8(%esp)
08423545 +0x01d:  movl   $0x9,0x4(%esp)
0842354d +0x025:  mov    0xc(%ebp),%eax
08423550 +0x028:  mov    %eax,(%esp)
08423553 +0x02b:  call   08423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>  ; DB_MouseRegister::_updateHistory(unsigned int, int, char*)
08423558 +0x030:  xor    $0x1,%eax
0842355b +0x033:  test   %al,%al
0842355d +0x035:  je     08423569 <+0x41>
0842355f +0x037:  mov    $0x15,%eax
08423564 +0x03c:  jmp    0842378d <+0x265>
08423569 +0x041:  movl   $0x0,0x4(%esp)
08423571 +0x049:  mov    0xc(%ebp),%eax
08423574 +0x04c:  mov    %eax,(%esp)
08423577 +0x04f:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842357c +0x054:  mov    %eax,0xc(%esp)
08423580 +0x058:  mov    0x10(%ebp),%eax
08423583 +0x05b:  mov    %eax,0x8(%esp)
08423587 +0x05f:  movl   $"upDate member_mousepass set mousepass='%s',occ_time=now() where m_id=%s and enable_flag = '1'",0x4(%esp)
0842358f +0x067:  mov    -0x14(%ebp),%eax
08423592 +0x06a:  mov    %eax,(%esp)
08423595 +0x06d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842359a +0x072:  movl   $0x1,0x4(%esp)
084235a2 +0x07a:  mov    -0x14(%ebp),%eax
084235a5 +0x07d:  mov    %eax,(%esp)
084235a8 +0x080:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084235ad +0x085:  xor    $0x1,%eax
084235b0 +0x088:  test   %al,%al
084235b2 +0x08a:  jne    084235c5 <+0x9d>
084235b4 +0x08c:  mov    -0x14(%ebp),%eax
084235b7 +0x08f:  mov    %eax,(%esp)
084235ba +0x092:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084235bf +0x097:  or     %edx,%eax
084235c1 +0x099:  test   %eax,%eax
084235c3 +0x09b:  jne    084235cc <+0xa4>
084235c5 +0x09d:  mov    $0x1,%eax
084235ca +0x0a2:  jmp    084235d1 <+0xa9>
084235cc +0x0a4:  mov    $0x0,%eax
084235d1 +0x0a9:  test   %al,%al
084235d3 +0x0ab:  je     084235df <+0xb7>
084235d5 +0x0ad:  mov    $0x15,%eax
084235da +0x0b2:  jmp    0842378d <+0x265>
084235df +0x0b7:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084235e4 +0x0bc:  movl   $0x0,0x8(%esp)
084235ec +0x0c4:  movl   $0x1,0x4(%esp)
084235f4 +0x0cc:  mov    %eax,(%esp)
084235f7 +0x0cf:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084235fc +0x0d4:  mov    %eax,-0x10(%ebp)
084235ff +0x0d7:  movl   $0x0,0x4(%esp)
08423607 +0x0df:  mov    0xc(%ebp),%eax
0842360a +0x0e2:  mov    %eax,(%esp)
0842360d +0x0e5:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423612 +0x0ea:  mov    %eax,0x8(%esp)
08423616 +0x0ee:  movl   $"upDate member_security_grade set goblin_pass_mod=now() where m_id=%s",0x4(%esp)
0842361e +0x0f6:  mov    -0x10(%ebp),%eax
08423621 +0x0f9:  mov    %eax,(%esp)
08423624 +0x0fc:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423629 +0x101:  movl   $0x1,0x4(%esp)
08423631 +0x109:  mov    -0x10(%ebp),%eax
08423634 +0x10c:  mov    %eax,(%esp)
08423637 +0x10f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842363c +0x114:  xor    $0x1,%eax
0842363f +0x117:  test   %al,%al
08423641 +0x119:  jne    08423654 <+0x12c>
08423643 +0x11b:  mov    -0x10(%ebp),%eax
08423646 +0x11e:  mov    %eax,(%esp)
08423649 +0x121:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842364e +0x126:  or     %edx,%eax
08423650 +0x128:  test   %eax,%eax
08423652 +0x12a:  jne    0842365b <+0x133>
08423654 +0x12c:  mov    $0x1,%eax
08423659 +0x131:  jmp    08423660 <+0x138>
0842365b +0x133:  mov    $0x0,%eax
08423660 +0x138:  test   %al,%al
08423662 +0x13a:  je     084236b2 <+0x18a>
08423664 +0x13c:  movl   $0x0,0x4(%esp)
0842366c +0x144:  mov    0xc(%ebp),%eax
0842366f +0x147:  mov    %eax,(%esp)
08423672 +0x14a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423677 +0x14f:  mov    %eax,0x8(%esp)
0842367b +0x153:  movl   $"inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, now())",0x4(%esp)
08423683 +0x15b:  mov    -0x10(%ebp),%eax
08423686 +0x15e:  mov    %eax,(%esp)
08423689 +0x161:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842368e +0x166:  movl   $0x1,0x4(%esp)
08423696 +0x16e:  mov    -0x10(%ebp),%eax
08423699 +0x171:  mov    %eax,(%esp)
0842369c +0x174:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084236a1 +0x179:  xor    $0x1,%eax
084236a4 +0x17c:  test   %al,%al
084236a6 +0x17e:  je     084236b2 <+0x18a>
084236a8 +0x180:  mov    $0x0,%eax
084236ad +0x185:  jmp    0842378d <+0x265>
084236b2 +0x18a:  cmpb   $0x0,-0x2c(%ebp)
084236b6 +0x18e:  je     08423788 <+0x260>
084236bc +0x194:  mov    &_ZN10GlobalData13s_stream_poolE,%eax
084236c1 +0x199:  movl   $0x5dcd,0x8(%esp)
084236c9 +0x1a1:  movl   $"DBThread.cpp",0x4(%esp)
084236d1 +0x1a9:  mov    %eax,(%esp)
084236d4 +0x1ac:  call   0828fa86 <_ZN10StreamPool7AcquireEPKci>  ; StreamPool::Acquire(char const*, int)
084236d9 +0x1b1:  movl   $0x1,0x8(%esp)
084236e1 +0x1b9:  mov    %eax,0x4(%esp)
084236e5 +0x1bd:  lea    -0x1c(%ebp),%eax
084236e8 +0x1c0:  mov    %eax,(%esp)
084236eb +0x1c3:  call   080c8c26 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x7e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x7e
084236f0 +0x1c8:  lea    -0x1c(%ebp),%eax
084236f3 +0x1cb:  mov    %eax,(%esp)
084236f6 +0x1ce:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
084236fb +0x1d3:  movl   $0x245,0x4(%esp)
08423703 +0x1db:  mov    %eax,(%esp)
08423706 +0x1de:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
0842370b +0x1e3:  lea    -0x1c(%ebp),%eax
0842370e +0x1e6:  mov    %eax,(%esp)
08423711 +0x1e9:  call   080c8c46 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0x9e>  ; global constructors keyed to BestClearTime::BestClearTime()+0x9e
08423716 +0x1ee:  mov    0x18(%ebp),%edx
08423719 +0x1f1:  mov    %edx,0x4(%esp)
0842371d +0x1f5:  mov    %eax,(%esp)
08423720 +0x1f8:  call   080c8c56 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xae>  ; global constructors keyed to BestClearTime::BestClearTime()+0xae
08423725 +0x1fd:  lea    -0x1c(%ebp),%eax
08423728 +0x200:  mov    %eax,(%esp)
0842372b +0x203:  call   080c8c4e <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xa6>  ; global constructors keyed to BestClearTime::BestClearTime()+0xa6
08423730 +0x208:  mov    %eax,(%esp)
08423733 +0x20b:  call   08451db0 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x49c6>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x49c6
08423738 +0x210:  mov    %eax,-0xc(%ebp)
0842373b +0x213:  movzbl -0x2c(%ebp),%edx
0842373f +0x217:  mov    -0xc(%ebp),%eax
08423742 +0x21a:  mov    %edx,(%eax)
08423744 +0x21c:  mov    &_ZN10GlobalData10s_msgq_mgrE,%eax
08423749 +0x221:  lea    -0x1c(%ebp),%edx
0842374c +0x224:  mov    %edx,0x8(%esp)
08423750 +0x228:  movl   $0x1,0x4(%esp)
08423758 +0x230:  mov    %eax,(%esp)
0842375b +0x233:  call   08570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>  ; MsgQueueMgr::put(MsgQueueMgr::QUEUE_IDX, CStreamGuard&)
08423760 +0x238:  jmp    0842377d <+0x255>
08423762 +0x23a:  mov    %edx,%ebx
08423764 +0x23c:  mov    %eax,%esi
08423766 +0x23e:  lea    -0x1c(%ebp),%eax
08423769 +0x241:  mov    %eax,(%esp)
0842376c +0x244:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08423771 +0x249:  mov    %esi,%eax
08423773 +0x24b:  mov    %ebx,%edx
08423775 +0x24d:  mov    %eax,(%esp)
08423778 +0x250:  call   08ae3750 <_Unwind_Resume>
0842377d +0x255:  lea    -0x1c(%ebp),%eax
08423780 +0x258:  mov    %eax,(%esp)
08423783 +0x25b:  call   0861c8d2 <_ZN12CStreamGuardD1Ev>  ; CStreamGuard::~CStreamGuard()
08423788 +0x260:  mov    $0x0,%eax
0842378d +0x265:  add    $0x40,%esp
08423790 +0x268:  pop    %ebx
08423791 +0x269:  pop    %esi
08423792 +0x26a:  pop    %ebp
08423793 +0x26b:  ret
```

## 反编译 C

```c
// DB_MouseRegister::_modifyPassword @ 0x8423528

/* DB_MouseRegister::_modifyPassword(unsigned int, char const*, char*, int, bool) */

undefined4 __thiscall
DB_MouseRegister::_modifyPassword
          (DB_MouseRegister *this,uint param_1,char *param_2,char *param_3,int param_4,bool param_5)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  longlong lVar6;
  CStreamGuard local_20 [8];
  MySQL *local_18;
  MySQL *local_14;
  SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD *local_10;
  
  local_18 = (MySQL *)_getDBHandleForDevideAccountDB();
  cVar2 = _updateHistory(param_1,9,param_3);
  if (cVar2 != '\x01') {
    return 0x15;
  }
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_18,
                   "upDate member_mousepass set mousepass=\'%s\',occ_time=now() where m_id=%s and enable_flag = \'1\'"
                   ,param_2,uVar3);
  cVar2 = MySQL::exec(local_18,true);
  if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_18), lVar6 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar3 = NumberToString(param_1,0);
    MySQL::set_query(local_14,"upDate member_security_grade set goblin_pass_mod=now() where m_id=%s"
                     ,uVar3);
    cVar2 = MySQL::exec(local_14,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_14), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = NumberToString(param_1,0);
      MySQL::set_query(local_14,
                       "inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, now())",
                       uVar3);
      cVar2 = MySQL::exec(local_14,true);
      if (cVar2 != '\x01') {
        return 0;
      }
    }
    if (param_5) {
      pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5dcd);
      CStreamGuard::CStreamGuard(local_20,pSVar4,true);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
                    /* try { // try from 08423706 to 0842375f has its CatchHandler @ 08423762 */
      CStreamGuard::operator<<(pCVar5,0x245);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_20);
      CStreamGuard::operator<<(pCVar5,param_4);
      pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_20);
      local_10 = CStreamGuard::GetInBuffer<SIG_GOBLIN_PAD_ADVICE_CHANGE_PWD>(pCVar5);
      *(undefined4 *)local_10 = 1;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_20);
      CStreamGuard::~CStreamGuard(local_20);
    }
    return 0;
  }
  return 0x15;
}
```
