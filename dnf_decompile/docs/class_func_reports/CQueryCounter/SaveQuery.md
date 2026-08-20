# SaveQuery

`_ZN13CQueryCounter9SaveQueryEPKcRi`

`CQueryCounter::SaveQuery(char const*, int&)`

| 类 | 地址 |
|---|---|
| `CQueryCounter` | `0x085ed3a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085ed3a2  _ZN13CQueryCounter9SaveQueryEPKcRi
#           CQueryCounter::SaveQuery(char const*, int&)
# range [0x085ed3a2, 0x085ed5ad]
085ed3a2 +0x000:  push   %ebp
085ed3a3 +0x001:  mov    %esp,%ebp
085ed3a5 +0x003:  sub    $0xc058,%esp
085ed3ab +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
085ed3b0 +0x00e:  movl   $0x0,0x8(%esp)
085ed3b8 +0x016:  movl   $0x6,0x4(%esp)
085ed3c0 +0x01e:  mov    %eax,(%esp)
085ed3c3 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
085ed3c8 +0x026:  mov    %eax,-0xc(%ebp)
085ed3cb +0x029:  lea    -0xc03d(%ebp),%eax
085ed3d1 +0x02f:  mov    $0xc001,%edx
085ed3d6 +0x034:  mov    %edx,0x8(%esp)
085ed3da +0x038:  movl   $0x0,0x4(%esp)
085ed3e2 +0x040:  mov    %eax,(%esp)
085ed3e5 +0x043:  call   0807dcc0 <_init+0x5b8>
085ed3ea +0x048:  mov    0xc(%ebp),%eax
085ed3ed +0x04b:  mov    %eax,0x8(%esp)
085ed3f1 +0x04f:  lea    -0xc03d(%ebp),%eax
085ed3f7 +0x055:  mov    %eax,0x4(%esp)
085ed3fb +0x059:  mov    -0xc(%ebp),%eax
085ed3fe +0x05c:  mov    %eax,(%esp)
085ed401 +0x05f:  call   083f48aa <_ZN5MySQL13escape_stringEPcPKc>  ; MySQL::escape_string(char*, char const*)
085ed406 +0x064:  lea    -0xc03d(%ebp),%eax
085ed40c +0x06a:  mov    %eax,0xc(%esp)
085ed410 +0x06e:  lea    -0xc03d(%ebp),%eax
085ed416 +0x074:  mov    %eax,0x8(%esp)
085ed41a +0x078:  movl   $"inSert into log_query_ref(query, query_hash) values('%s',password('%s'))",0x4(%esp)
085ed422 +0x080:  mov    -0xc(%ebp),%eax
085ed425 +0x083:  mov    %eax,(%esp)
085ed428 +0x086:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
085ed42d +0x08b:  movl   $0x1,0x4(%esp)
085ed435 +0x093:  mov    -0xc(%ebp),%eax
085ed438 +0x096:  mov    %eax,(%esp)
085ed43b +0x099:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
085ed440 +0x09e:  xor    $0x1,%eax
085ed443 +0x0a1:  test   %al,%al
085ed445 +0x0a3:  je     085ed594 <+0x1f2>
085ed44b +0x0a9:  lea    -0xc03d(%ebp),%eax
085ed451 +0x0af:  mov    %eax,0x8(%esp)
085ed455 +0x0b3:  movl   $"seLect q_id from log_query_ref where query_hash=password('%s')",0x4(%esp)
085ed45d +0x0bb:  mov    -0xc(%ebp),%eax
085ed460 +0x0be:  mov    %eax,(%esp)
085ed463 +0x0c1:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
085ed468 +0x0c6:  movl   $0x1,0x4(%esp)
085ed470 +0x0ce:  mov    -0xc(%ebp),%eax
085ed473 +0x0d1:  mov    %eax,(%esp)
085ed476 +0x0d4:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
085ed47b +0x0d9:  xor    $0x1,%eax
085ed47e +0x0dc:  test   %al,%al
085ed480 +0x0de:  je     085ed4c2 <+0x120>
085ed482 +0x0e0:  movl   $0x5,0xc(%esp)
085ed48a +0x0e8:  movl   $0x265,0x8(%esp)
085ed492 +0x0f0:  movl   $&_ZZN13CQueryCounter9SaveQueryEPKcRiE19__PRETTY_FUNCTION__,0x4(%esp)
085ed49a +0x0f8:  lea    -0x3c(%ebp),%eax
085ed49d +0x0fb:  mov    %eax,(%esp)
085ed4a0 +0x0fe:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed4a5 +0x103:  movl   $"SaveQuery, exec() ERROR",0x4(%esp)
085ed4ad +0x10b:  lea    -0x3c(%ebp),%eax
085ed4b0 +0x10e:  mov    %eax,(%esp)
085ed4b3 +0x111:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed4b8 +0x116:  mov    $0x0,%eax
085ed4bd +0x11b:  jmp    085ed5ab <+0x209>
085ed4c2 +0x120:  mov    -0xc(%ebp),%eax
085ed4c5 +0x123:  mov    %eax,(%esp)
085ed4c8 +0x126:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
085ed4cd +0x12b:  test   %eax,%eax
085ed4cf +0x12d:  sete   %al
085ed4d2 +0x130:  test   %al,%al
085ed4d4 +0x132:  je     085ed4e0 <+0x13e>
085ed4d6 +0x134:  mov    $0x0,%eax
085ed4db +0x139:  jmp    085ed5ab <+0x209>
085ed4e0 +0x13e:  mov    -0xc(%ebp),%eax
085ed4e3 +0x141:  mov    %eax,(%esp)
085ed4e6 +0x144:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
085ed4eb +0x149:  xor    $0x1,%eax
085ed4ee +0x14c:  test   %al,%al
085ed4f0 +0x14e:  je     085ed52f <+0x18d>
085ed4f2 +0x150:  movl   $0x5,0xc(%esp)
085ed4fa +0x158:  movl   $0x271,0x8(%esp)
085ed502 +0x160:  movl   $&_ZZN13CQueryCounter9SaveQueryEPKcRiE19__PRETTY_FUNCTION__,0x4(%esp)
085ed50a +0x168:  lea    -0x2c(%ebp),%eax
085ed50d +0x16b:  mov    %eax,(%esp)
085ed510 +0x16e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed515 +0x173:  movl   $"SaveQuery, fetch() ERROR",0x4(%esp)
085ed51d +0x17b:  lea    -0x2c(%ebp),%eax
085ed520 +0x17e:  mov    %eax,(%esp)
085ed523 +0x181:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed528 +0x186:  mov    $0x0,%eax
085ed52d +0x18b:  jmp    085ed5ab <+0x209>
085ed52f +0x18d:  mov    0x10(%ebp),%eax
085ed532 +0x190:  mov    %eax,0x8(%esp)
085ed536 +0x194:  movl   $0x0,0x4(%esp)
085ed53e +0x19c:  mov    -0xc(%ebp),%eax
085ed541 +0x19f:  mov    %eax,(%esp)
085ed544 +0x1a2:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
085ed549 +0x1a7:  xor    $0x1,%eax
085ed54c +0x1aa:  test   %al,%al
085ed54e +0x1ac:  je     085ed58d <+0x1eb>
085ed550 +0x1ae:  movl   $0x5,0xc(%esp)
085ed558 +0x1b6:  movl   $0x277,0x8(%esp)
085ed560 +0x1be:  movl   $&_ZZN13CQueryCounter9SaveQueryEPKcRiE19__PRETTY_FUNCTION__,0x4(%esp)
085ed568 +0x1c6:  lea    -0x1c(%ebp),%eax
085ed56b +0x1c9:  mov    %eax,(%esp)
085ed56e +0x1cc:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
085ed573 +0x1d1:  movl   $"SaveQuery, get_int(0) ERROR",0x4(%esp)
085ed57b +0x1d9:  lea    -0x1c(%ebp),%eax
085ed57e +0x1dc:  mov    %eax,(%esp)
085ed581 +0x1df:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
085ed586 +0x1e4:  mov    $0x0,%eax
085ed58b +0x1e9:  jmp    085ed5ab <+0x209>
085ed58d +0x1eb:  mov    $0x1,%eax
085ed592 +0x1f0:  jmp    085ed5ab <+0x209>
085ed594 +0x1f2:  mov    -0xc(%ebp),%eax
085ed597 +0x1f5:  mov    %eax,(%esp)
085ed59a +0x1f8:  call   083fbc66 <_Z17GetIdentityFromDBP5MySQL>  ; GetIdentityFromDB(MySQL*)
085ed59f +0x1fd:  mov    %eax,%edx
085ed5a1 +0x1ff:  mov    0x10(%ebp),%eax
085ed5a4 +0x202:  mov    %edx,(%eax)
085ed5a6 +0x204:  mov    $0x1,%eax
085ed5ab +0x209:  leave
085ed5ac +0x20a:  ret
085ed5ad +0x20b:  nop
```

## 反编译 C

```c
// CQueryCounter::SaveQuery @ 0x85ed3a2

/* CQueryCounter::SaveQuery(char const*, int&) */

undefined4 __thiscall CQueryCounter::SaveQuery(CQueryCounter *this,char *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  char local_c041 [49153];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  memset(local_c041,0,0xc001);
  MySQL::escape_string(local_10,local_c041,param_1);
  pcVar4 = local_c041;
  MySQL::set_query(local_10,
                   "inSert into log_query_ref(query, query_hash) values(\'%s\',password(\'%s\'))",
                   local_c041,pcVar4);
  cVar1 = MySQL::exec(local_10,true);
  if (cVar1 == '\x01') {
    iVar3 = GetIdentityFromDB(local_10);
    *param_2 = iVar3;
    uVar2 = 1;
  }
  else {
    MySQL::set_query(local_10,"seLect q_id from log_query_ref where query_hash=password(\'%s\')",
                     local_c041,pcVar4);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      iVar3 = MySQL::get_n_rows(local_10);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        cVar1 = MySQL::fetch(local_10);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_int(local_10,0,param_2);
          if (cVar1 == '\x01') {
            uVar2 = 1;
          }
          else {
            cMyTrace::cMyTrace(local_20,"bool CQueryCounter::SaveQuery(const char*, int&)",0x277,5);
            cMyTrace::operator()(local_20,"SaveQuery, get_int(0) ERROR");
            uVar2 = 0;
          }
        }
        else {
          cMyTrace::cMyTrace(local_30,"bool CQueryCounter::SaveQuery(const char*, int&)",0x271,5);
          cMyTrace::operator()(local_30,"SaveQuery, fetch() ERROR");
          uVar2 = 0;
        }
      }
    }
    else {
      cMyTrace::cMyTrace(local_40,"bool CQueryCounter::SaveQuery(const char*, int&)",0x265,5);
      cMyTrace::operator()(local_40,"SaveQuery, exec() ERROR");
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
