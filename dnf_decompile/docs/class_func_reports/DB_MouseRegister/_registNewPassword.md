# _registNewPassword

`_ZN16DB_MouseRegister18_registNewPasswordEjPKcPci`

`DB_MouseRegister::_registNewPassword(unsigned int, char const*, char*, int)`

| 类 | 地址 |
|---|---|
| `DB_MouseRegister` | `0x084232e0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084232e0  _ZN16DB_MouseRegister18_registNewPasswordEjPKcPci
#           DB_MouseRegister::_registNewPassword(unsigned int, char const*, char*, int)
# range [0x084232e0, 0x08423527]
084232e0 +0x000:  push   %ebp
084232e1 +0x001:  mov    %esp,%ebp
084232e3 +0x003:  sub    $0x28,%esp
084232e6 +0x006:  call   08422938 <_ZN16DB_MouseRegister30_getDBHandleForDevideAccountDBEv>  ; DB_MouseRegister::_getDBHandleForDevideAccountDB()
084232eb +0x00b:  mov    %eax,-0x10(%ebp)
084232ee +0x00e:  movl   $0x0,0x4(%esp)
084232f6 +0x016:  mov    0xc(%ebp),%eax
084232f9 +0x019:  mov    %eax,(%esp)
084232fc +0x01c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423301 +0x021:  mov    %eax,0x8(%esp)
08423305 +0x025:  movl   $"seLect enable_flag from member_mousepass where m_id=%s",0x4(%esp)
0842330d +0x02d:  mov    -0x10(%ebp),%eax
08423310 +0x030:  mov    %eax,(%esp)
08423313 +0x033:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423318 +0x038:  movl   $0x1,0x4(%esp)
08423320 +0x040:  mov    -0x10(%ebp),%eax
08423323 +0x043:  mov    %eax,(%esp)
08423326 +0x046:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842332b +0x04b:  xor    $0x1,%eax
0842332e +0x04e:  test   %al,%al
08423330 +0x050:  je     0842333c <+0x5c>
08423332 +0x052:  mov    $0x1,%eax
08423337 +0x057:  jmp    08423525 <+0x245>
0842333c +0x05c:  mov    -0x10(%ebp),%eax
0842333f +0x05f:  mov    %eax,(%esp)
08423342 +0x062:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08423347 +0x067:  test   %eax,%eax
08423349 +0x069:  sete   %al
0842334c +0x06c:  test   %al,%al
0842334e +0x06e:  je     08423383 <+0xa3>
08423350 +0x070:  movl   $0x0,0x4(%esp)
08423358 +0x078:  mov    0xc(%ebp),%eax
0842335b +0x07b:  mov    %eax,(%esp)
0842335e +0x07e:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423363 +0x083:  mov    0x10(%ebp),%edx
08423366 +0x086:  mov    %edx,0xc(%esp)
0842336a +0x08a:  mov    %eax,0x8(%esp)
0842336e +0x08e:  movl   $"inSert into member_mousepass(m_id,mousepass,occ_time,version_info, validity_time, reward_time,enable_flag) values(%s,'%s',now(),'2', unix_timestamp(now()), 0,'1')",0x4(%esp)
08423376 +0x096:  mov    -0x10(%ebp),%eax
08423379 +0x099:  mov    %eax,(%esp)
0842337c +0x09c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423381 +0x0a1:  jmp    084233b4 <+0xd4>
08423383 +0x0a3:  movl   $0x0,0x4(%esp)
0842338b +0x0ab:  mov    0xc(%ebp),%eax
0842338e +0x0ae:  mov    %eax,(%esp)
08423391 +0x0b1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423396 +0x0b6:  mov    %eax,0xc(%esp)
0842339a +0x0ba:  mov    0x10(%ebp),%eax
0842339d +0x0bd:  mov    %eax,0x8(%esp)
084233a1 +0x0c1:  movl   $"upDate member_mousepass set mousepass = '%s', occ_time = now() ,version_info = '2', validity_time=unix_timestamp(now()), enable_flag = '1', reward_time = 0 where m_id = %s",0x4(%esp)
084233a9 +0x0c9:  mov    -0x10(%ebp),%eax
084233ac +0x0cc:  mov    %eax,(%esp)
084233af +0x0cf:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084233b4 +0x0d4:  movl   $0x1,0x4(%esp)
084233bc +0x0dc:  mov    -0x10(%ebp),%eax
084233bf +0x0df:  mov    %eax,(%esp)
084233c2 +0x0e2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084233c7 +0x0e7:  xor    $0x1,%eax
084233ca +0x0ea:  test   %al,%al
084233cc +0x0ec:  je     084233f9 <+0x119>
084233ce +0x0ee:  mov    -0x10(%ebp),%eax
084233d1 +0x0f1:  mov    %eax,(%esp)
084233d4 +0x0f4:  call   0811b97a <_GLOBAL__I_events+0x1d>  ; global constructors keyed to events+0x1d
084233d9 +0x0f9:  cmp    $0x426,%eax
084233de +0x0fe:  sete   %al
084233e1 +0x101:  test   %al,%al
084233e3 +0x103:  je     084233ef <+0x10f>
084233e5 +0x105:  mov    $0x12,%eax
084233ea +0x10a:  jmp    08423525 <+0x245>
084233ef +0x10f:  mov    $0x1,%eax
084233f4 +0x114:  jmp    08423525 <+0x245>
084233f9 +0x119:  mov    0x18(%ebp),%eax
084233fc +0x11c:  mov    %eax,0x4(%esp)
08423400 +0x120:  mov    0xc(%ebp),%eax
08423403 +0x123:  mov    %eax,(%esp)
08423406 +0x126:  call   0843741e <_ZN28DB_CancelRestingUserRestrict11makeRequestEji>  ; DB_CancelRestingUserRestrict::makeRequest(unsigned int, int)
0842340b +0x12b:  mov    0x14(%ebp),%eax
0842340e +0x12e:  mov    %eax,0x8(%esp)
08423412 +0x132:  movl   $0x8,0x4(%esp)
0842341a +0x13a:  mov    0xc(%ebp),%eax
0842341d +0x13d:  mov    %eax,(%esp)
08423420 +0x140:  call   08423914 <_ZN16DB_MouseRegister14_updateHistoryEjiPc>  ; DB_MouseRegister::_updateHistory(unsigned int, int, char*)
08423425 +0x145:  xor    $0x1,%eax
08423428 +0x148:  test   %al,%al
0842342a +0x14a:  je     08423436 <+0x156>
0842342c +0x14c:  mov    $0x1,%eax
08423431 +0x151:  jmp    08423525 <+0x245>
08423436 +0x156:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842343b +0x15b:  movl   $0x0,0x8(%esp)
08423443 +0x163:  movl   $0x1,0x4(%esp)
0842344b +0x16b:  mov    %eax,(%esp)
0842344e +0x16e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08423453 +0x173:  mov    %eax,-0xc(%ebp)
08423456 +0x176:  movl   $0x0,0x4(%esp)
0842345e +0x17e:  mov    0xc(%ebp),%eax
08423461 +0x181:  mov    %eax,(%esp)
08423464 +0x184:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08423469 +0x189:  mov    %eax,0x8(%esp)
0842346d +0x18d:  movl   $"upDate member_security_grade set goblin_pass_mod=now() where m_id=%s",0x4(%esp)
08423475 +0x195:  mov    -0xc(%ebp),%eax
08423478 +0x198:  mov    %eax,(%esp)
0842347b +0x19b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08423480 +0x1a0:  movl   $0x1,0x4(%esp)
08423488 +0x1a8:  mov    -0xc(%ebp),%eax
0842348b +0x1ab:  mov    %eax,(%esp)
0842348e +0x1ae:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08423493 +0x1b3:  xor    $0x1,%eax
08423496 +0x1b6:  test   %al,%al
08423498 +0x1b8:  jne    084234ab <+0x1cb>
0842349a +0x1ba:  mov    -0xc(%ebp),%eax
0842349d +0x1bd:  mov    %eax,(%esp)
084234a0 +0x1c0:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
084234a5 +0x1c5:  or     %edx,%eax
084234a7 +0x1c7:  test   %eax,%eax
084234a9 +0x1c9:  jne    084234b2 <+0x1d2>
084234ab +0x1cb:  mov    $0x1,%eax
084234b0 +0x1d0:  jmp    084234b7 <+0x1d7>
084234b2 +0x1d2:  mov    $0x0,%eax
084234b7 +0x1d7:  test   %al,%al
084234b9 +0x1d9:  je     08423506 <+0x226>
084234bb +0x1db:  movl   $0x0,0x4(%esp)
084234c3 +0x1e3:  mov    0xc(%ebp),%eax
084234c6 +0x1e6:  mov    %eax,(%esp)
084234c9 +0x1e9:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084234ce +0x1ee:  mov    %eax,0x8(%esp)
084234d2 +0x1f2:  movl   $"inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, now())",0x4(%esp)
084234da +0x1fa:  mov    -0xc(%ebp),%eax
084234dd +0x1fd:  mov    %eax,(%esp)
084234e0 +0x200:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084234e5 +0x205:  movl   $0x1,0x4(%esp)
084234ed +0x20d:  mov    -0xc(%ebp),%eax
084234f0 +0x210:  mov    %eax,(%esp)
084234f3 +0x213:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084234f8 +0x218:  xor    $0x1,%eax
084234fb +0x21b:  test   %al,%al
084234fd +0x21d:  je     08423506 <+0x226>
084234ff +0x21f:  mov    $0x1,%eax
08423504 +0x224:  jmp    08423525 <+0x245>
08423506 +0x226:  movl   $0x1,0x8(%esp)
0842350e +0x22e:  mov    0xc(%ebp),%eax
08423511 +0x231:  mov    %eax,0x4(%esp)
08423515 +0x235:  mov    0x18(%ebp),%eax
08423518 +0x238:  mov    %eax,(%esp)
0842351b +0x23b:  call   08444408 <_ZN18DB_CheckSecuReward11makeRequestEiji>  ; DB_CheckSecuReward::makeRequest(int, unsigned int, int)
08423520 +0x240:  mov    $0x0,%eax
08423525 +0x245:  leave
08423526 +0x246:  ret
08423527 +0x247:  nop
```

## 反编译 C

```c
// DB_MouseRegister::_registNewPassword @ 0x84232e0

/* DB_MouseRegister::_registNewPassword(unsigned int, char const*, char*, int) */

undefined4 __thiscall
DB_MouseRegister::_registNewPassword
          (DB_MouseRegister *this,uint param_1,char *param_2,char *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  MySQL *pMVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  
  pMVar3 = (MySQL *)_getDBHandleForDevideAccountDB();
  uVar4 = NumberToString(param_1,0);
  MySQL::set_query(pMVar3,"seLect enable_flag from member_mousepass where m_id=%s",uVar4);
  cVar2 = MySQL::exec(pMVar3,true);
  if (cVar2 != '\x01') {
    return 1;
  }
  iVar5 = MySQL::get_n_rows(pMVar3);
  if (iVar5 == 0) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,
                     "inSert into member_mousepass(m_id,mousepass,occ_time,version_info, validity_time, reward_time,enable_flag) values(%s,\'%s\',now(),\'2\', unix_timestamp(now()), 0,\'1\')"
                     ,uVar4,param_2);
  }
  else {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,
                     "upDate member_mousepass set mousepass = \'%s\', occ_time = now() ,version_info = \'2\', validity_time=unix_timestamp(now()), enable_flag = \'1\', reward_time = 0 where m_id = %s"
                     ,param_2,uVar4);
  }
  cVar2 = MySQL::exec(pMVar3,true);
  if (cVar2 == '\x01') {
    DB_CancelRestingUserRestrict::makeRequest(param_1,param_4);
    cVar2 = _updateHistory(param_1,8,param_3);
    if (cVar2 != '\x01') {
      return 1;
    }
    pMVar3 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(pMVar3,"upDate member_security_grade set goblin_pass_mod=now() where m_id=%s",
                     uVar4);
    cVar2 = MySQL::exec(pMVar3,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(pMVar3), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = NumberToString(param_1,0);
      MySQL::set_query(pMVar3,
                       "inSert into member_security_grade(m_id, goblin_pass_mod) values(%s, now())",
                       uVar4);
      cVar2 = MySQL::exec(pMVar3,true);
      if (cVar2 != '\x01') {
        return 1;
      }
    }
    DB_CheckSecuReward::makeRequest(param_4,param_1,1);
    return 0;
  }
  iVar5 = MySQL::getDBError(pMVar3);
  if (iVar5 == 0x426) {
    return 0x12;
  }
  return 1;
}
```
