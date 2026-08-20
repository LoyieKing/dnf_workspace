# GetUserInGameEventHistory

`_ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA`

`DB_Login::GetUserInGameEventHistory(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x084152b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084152b0  _ZN8DB_Login25GetUserInGameEventHistoryEP14SIG_LOGIN_DATA
#           DB_Login::GetUserInGameEventHistory(SIG_LOGIN_DATA*)
# range [0x084152b0, 0x08415471]
084152b0 +0x000:  push   %ebp
084152b1 +0x001:  mov    %esp,%ebp
084152b3 +0x003:  sub    $0x28,%esp
084152b6 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084152bb +0x00b:  movl   $0x0,0x8(%esp)
084152c3 +0x013:  movl   $0x9,0x4(%esp)
084152cb +0x01b:  mov    %eax,(%esp)
084152ce +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084152d3 +0x023:  mov    %eax,-0x18(%ebp)
084152d6 +0x026:  mov    0xc(%ebp),%eax
084152d9 +0x029:  add    $0x3fac,%eax
084152de +0x02e:  movl   $0x168,0x8(%esp)
084152e6 +0x036:  movl   $0x0,0x4(%esp)
084152ee +0x03e:  mov    %eax,(%esp)
084152f1 +0x041:  call   0807dcc0 <_init+0x5b8>
084152f6 +0x046:  mov    0xc(%ebp),%eax
084152f9 +0x049:  mov    0xc0(%eax),%eax
084152ff +0x04f:  movl   $0x0,0x4(%esp)
08415307 +0x057:  mov    %eax,(%esp)
0841530a +0x05a:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0841530f +0x05f:  mov    %eax,0x8(%esp)
08415313 +0x063:  movl   $"seLect type , history_1 ,history_2 from event_ingame_history where m_id=%s order by type desc",0x4(%esp)
0841531b +0x06b:  mov    -0x18(%ebp),%eax
0841531e +0x06e:  mov    %eax,(%esp)
08415321 +0x071:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08415326 +0x076:  movl   $0x1,0x4(%esp)
0841532e +0x07e:  mov    -0x18(%ebp),%eax
08415331 +0x081:  mov    %eax,(%esp)
08415334 +0x084:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08415339 +0x089:  xor    $0x1,%eax
0841533c +0x08c:  test   %al,%al
0841533e +0x08e:  je     0841534a <+0x9a>
08415340 +0x090:  mov    $0x0,%eax
08415345 +0x095:  jmp    0841546f <+0x1bf>
0841534a +0x09a:  mov    -0x18(%ebp),%eax
0841534d +0x09d:  mov    %eax,(%esp)
08415350 +0x0a0:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08415355 +0x0a5:  mov    %eax,-0x14(%ebp)
08415358 +0x0a8:  movl   $0x0,-0xc(%ebp)
0841535f +0x0af:  jmp    0841544d <+0x19d>
08415364 +0x0b4:  cmpl   $0x1d,-0x14(%ebp)
08415368 +0x0b8:  jle    08415374 <+0xc4>
0841536a +0x0ba:  mov    $0x1,%eax
0841536f +0x0bf:  jmp    0841546f <+0x1bf>
08415374 +0x0c4:  mov    -0x18(%ebp),%eax
08415377 +0x0c7:  mov    %eax,(%esp)
0841537a +0x0ca:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0841537f +0x0cf:  mov    %al,-0xd(%ebp)
08415382 +0x0d2:  movzbl -0xd(%ebp),%eax
08415386 +0x0d6:  xor    $0x1,%eax
08415389 +0x0d9:  test   %al,%al
0841538b +0x0db:  jne    08415460 <+0x1b0>
08415391 +0x0e1:  mov    -0xc(%ebp),%edx
08415394 +0x0e4:  mov    %edx,%eax
08415396 +0x0e6:  add    %eax,%eax
08415398 +0x0e8:  add    %edx,%eax
0841539a +0x0ea:  shl    $0x2,%eax
0841539d +0x0ed:  add    $0x3fa0,%eax
084153a2 +0x0f2:  add    0xc(%ebp),%eax
084153a5 +0x0f5:  add    $0xc,%eax
084153a8 +0x0f8:  mov    %eax,0x8(%esp)
084153ac +0x0fc:  movl   $0x0,0x4(%esp)
084153b4 +0x104:  mov    -0x18(%ebp),%eax
084153b7 +0x107:  mov    %eax,(%esp)
084153ba +0x10a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084153bf +0x10f:  mov    %al,-0xd(%ebp)
084153c2 +0x112:  movzbl -0xd(%ebp),%eax
084153c6 +0x116:  xor    $0x1,%eax
084153c9 +0x119:  test   %al,%al
084153cb +0x11b:  jne    08415463 <+0x1b3>
084153d1 +0x121:  mov    -0xc(%ebp),%edx
084153d4 +0x124:  mov    %edx,%eax
084153d6 +0x126:  add    %eax,%eax
084153d8 +0x128:  add    %edx,%eax
084153da +0x12a:  shl    $0x2,%eax
084153dd +0x12d:  add    $0x3fa0,%eax
084153e2 +0x132:  add    0xc(%ebp),%eax
084153e5 +0x135:  add    $0x10,%eax
084153e8 +0x138:  mov    %eax,0x8(%esp)
084153ec +0x13c:  movl   $0x1,0x4(%esp)
084153f4 +0x144:  mov    -0x18(%ebp),%eax
084153f7 +0x147:  mov    %eax,(%esp)
084153fa +0x14a:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
084153ff +0x14f:  mov    %al,-0xd(%ebp)
08415402 +0x152:  movzbl -0xd(%ebp),%eax
08415406 +0x156:  xor    $0x1,%eax
08415409 +0x159:  test   %al,%al
0841540b +0x15b:  jne    08415466 <+0x1b6>
0841540d +0x15d:  mov    -0xc(%ebp),%edx
08415410 +0x160:  mov    %edx,%eax
08415412 +0x162:  add    %eax,%eax
08415414 +0x164:  add    %edx,%eax
08415416 +0x166:  shl    $0x2,%eax
08415419 +0x169:  add    $0x3fa0,%eax
0841541e +0x16e:  add    0xc(%ebp),%eax
08415421 +0x171:  add    $0x14,%eax
08415424 +0x174:  mov    %eax,0x8(%esp)
08415428 +0x178:  movl   $0x2,0x4(%esp)
08415430 +0x180:  mov    -0x18(%ebp),%eax
08415433 +0x183:  mov    %eax,(%esp)
08415436 +0x186:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0841543b +0x18b:  mov    %al,-0xd(%ebp)
0841543e +0x18e:  movzbl -0xd(%ebp),%eax
08415442 +0x192:  xor    $0x1,%eax
08415445 +0x195:  test   %al,%al
08415447 +0x197:  jne    08415469 <+0x1b9>
08415449 +0x199:  addl   $0x1,-0xc(%ebp)
0841544d +0x19d:  mov    -0xc(%ebp),%eax
08415450 +0x1a0:  cmp    -0x14(%ebp),%eax
08415453 +0x1a3:  setl   %al
08415456 +0x1a6:  test   %al,%al
08415458 +0x1a8:  jne    08415364 <+0xb4>
0841545e +0x1ae:  jmp    0841546a <+0x1ba>
08415460 +0x1b0:  nop
08415461 +0x1b1:  jmp    0841546a <+0x1ba>
08415463 +0x1b3:  nop
08415464 +0x1b4:  jmp    0841546a <+0x1ba>
08415466 +0x1b6:  nop
08415467 +0x1b7:  jmp    0841546a <+0x1ba>
08415469 +0x1b9:  nop
0841546a +0x1ba:  mov    $0x1,%eax
0841546f +0x1bf:  leave
08415470 +0x1c0:  ret
08415471 +0x1c1:  nop
```

## 反编译 C

```c
// DB_Login::GetUserInGameEventHistory @ 0x84152b0

/* DB_Login::GetUserInGameEventHistory(SIG_LOGIN_DATA*) */

undefined4 __thiscall DB_Login::GetUserInGameEventHistory(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  int local_10;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  memset(param_1 + 0x3fac,0,0x168);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect type , history_1 ,history_2 from event_ingame_history where m_id=%s order by type desc"
                   ,uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    for (local_10 = 0; local_10 < iVar3; local_10 = local_10 + 1) {
      if (0x1d < iVar3) {
        return 1;
      }
      cVar1 = MySQL::fetch(this_00);
      if ((((cVar1 != '\x01') ||
           (cVar1 = MySQL::get_int(this_00,0,(int *)(param_1 + local_10 * 0xc + 0x3fac)),
           cVar1 != '\x01')) ||
          (cVar1 = MySQL::get_int(this_00,1,(int *)(param_1 + local_10 * 0xc + 0x3fb0)),
          cVar1 != '\x01')) ||
         (cVar1 = MySQL::get_int(this_00,2,(int *)(param_1 + local_10 * 0xc + 0x3fb4)),
         cVar1 != '\x01')) break;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
