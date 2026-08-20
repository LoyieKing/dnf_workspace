# IsThisIPLoginPermissionGranted

`_ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA`

`DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0844b982` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0844b982  _ZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATA
#           DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)
# range [0x0844b982, 0x0844bb6f]
0844b982 +0x000:  push   %ebp
0844b983 +0x001:  mov    %esp,%ebp
0844b985 +0x003:  sub    $0x58,%esp
0844b988 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0844b98d +0x00b:  movl   $0x0,0x8(%esp)
0844b995 +0x013:  movl   $0x1,0x4(%esp)
0844b99d +0x01b:  mov    %eax,(%esp)
0844b9a0 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0844b9a5 +0x023:  mov    %eax,-0xc(%ebp)
0844b9a8 +0x026:  movl   $0x0,-0x40(%ebp)
0844b9af +0x02d:  mov    0xc(%ebp),%eax
0844b9b2 +0x030:  movb   $0x0,0xb5(%eax)
0844b9b9 +0x037:  mov    0xc(%ebp),%eax
0844b9bc +0x03a:  add    $0xa1,%eax
0844b9c1 +0x03f:  mov    %eax,0x8(%esp)
0844b9c5 +0x043:  movl   $"seLect count(*) from geo_allow where allow_ip = '%s'",0x4(%esp)
0844b9cd +0x04b:  mov    -0xc(%ebp),%eax
0844b9d0 +0x04e:  mov    %eax,(%esp)
0844b9d3 +0x051:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844b9d8 +0x056:  movl   $0x1,0x4(%esp)
0844b9e0 +0x05e:  mov    -0xc(%ebp),%eax
0844b9e3 +0x061:  mov    %eax,(%esp)
0844b9e6 +0x064:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844b9eb +0x069:  xor    $0x1,%eax
0844b9ee +0x06c:  test   %al,%al
0844b9f0 +0x06e:  je     0844ba32 <+0xb0>
0844b9f2 +0x070:  movl   $0x5,0xc(%esp)
0844b9fa +0x078:  movl   $0xbc49,0x8(%esp)
0844ba02 +0x080:  movl   $&_ZZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0844ba0a +0x088:  lea    -0x3c(%ebp),%eax
0844ba0d +0x08b:  mov    %eax,(%esp)
0844ba10 +0x08e:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844ba15 +0x093:  movl   $"[QUERY_ERROR] (select from geo_allow)",0x4(%esp)
0844ba1d +0x09b:  lea    -0x3c(%ebp),%eax
0844ba20 +0x09e:  mov    %eax,(%esp)
0844ba23 +0x0a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844ba28 +0x0a6:  mov    $0x0,%eax
0844ba2d +0x0ab:  jmp    0844bb6d <+0x1eb>
0844ba32 +0x0b0:  mov    -0xc(%ebp),%eax
0844ba35 +0x0b3:  mov    %eax,(%esp)
0844ba38 +0x0b6:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0844ba3d +0x0bb:  test   %eax,%eax
0844ba3f +0x0bd:  sete   %al
0844ba42 +0x0c0:  test   %al,%al
0844ba44 +0x0c2:  je     0844ba50 <+0xce>
0844ba46 +0x0c4:  mov    $0x1,%eax
0844ba4b +0x0c9:  jmp    0844bb6d <+0x1eb>
0844ba50 +0x0ce:  mov    -0xc(%ebp),%eax
0844ba53 +0x0d1:  mov    %eax,(%esp)
0844ba56 +0x0d4:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0844ba5b +0x0d9:  xor    $0x1,%eax
0844ba5e +0x0dc:  test   %al,%al
0844ba60 +0x0de:  jne    0844ba83 <+0x101>
0844ba62 +0x0e0:  lea    -0x40(%ebp),%eax
0844ba65 +0x0e3:  mov    %eax,0x8(%esp)
0844ba69 +0x0e7:  movl   $0x0,0x4(%esp)
0844ba71 +0x0ef:  mov    -0xc(%ebp),%eax
0844ba74 +0x0f2:  mov    %eax,(%esp)
0844ba77 +0x0f5:  call   080e22f2 <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x98>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x98
0844ba7c +0x0fa:  xor    $0x1,%eax
0844ba7f +0x0fd:  test   %al,%al
0844ba81 +0x0ff:  je     0844ba8a <+0x108>
0844ba83 +0x101:  mov    $0x1,%eax
0844ba88 +0x106:  jmp    0844ba8f <+0x10d>
0844ba8a +0x108:  mov    $0x0,%eax
0844ba8f +0x10d:  test   %al,%al
0844ba91 +0x10f:  je     0844bad3 <+0x151>
0844ba93 +0x111:  movl   $0x5,0xc(%esp)
0844ba9b +0x119:  movl   $0xbc52,0x8(%esp)
0844baa3 +0x121:  movl   $&_ZZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0844baab +0x129:  lea    -0x2c(%ebp),%eax
0844baae +0x12c:  mov    %eax,(%esp)
0844bab1 +0x12f:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844bab6 +0x134:  movl   $"[QUERY_ERROR] (fetch get_uint)",0x4(%esp)
0844babe +0x13c:  lea    -0x2c(%ebp),%eax
0844bac1 +0x13f:  mov    %eax,(%esp)
0844bac4 +0x142:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844bac9 +0x147:  mov    $0x0,%eax
0844bace +0x14c:  jmp    0844bb6d <+0x1eb>
0844bad3 +0x151:  mov    -0x40(%ebp),%eax
0844bad6 +0x154:  test   %eax,%eax
0844bad8 +0x156:  je     0844bae4 <+0x162>
0844bada +0x158:  mov    0xc(%ebp),%eax
0844badd +0x15b:  movb   $0x1,0xb5(%eax)
0844bae4 +0x162:  mov    0xc(%ebp),%eax
0844bae7 +0x165:  lea    0xa1(%eax),%edx
0844baed +0x16b:  mov    0xc(%ebp),%eax
0844baf0 +0x16e:  mov    0xc0(%eax),%eax
0844baf6 +0x174:  mov    %edx,0xc(%esp)
0844bafa +0x178:  mov    %eax,0x8(%esp)
0844bafe +0x17c:  movl   $"insert into member_join_info(m_id, reg_date, ip) values(%d, now(), '%s')",0x4(%esp)
0844bb06 +0x184:  mov    -0xc(%ebp),%eax
0844bb09 +0x187:  mov    %eax,(%esp)
0844bb0c +0x18a:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0844bb11 +0x18f:  movl   $0x1,0x4(%esp)
0844bb19 +0x197:  mov    -0xc(%ebp),%eax
0844bb1c +0x19a:  mov    %eax,(%esp)
0844bb1f +0x19d:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844bb24 +0x1a2:  xor    $0x1,%eax
0844bb27 +0x1a5:  test   %al,%al
0844bb29 +0x1a7:  je     0844bb68 <+0x1e6>
0844bb2b +0x1a9:  movl   $0x5,0xc(%esp)
0844bb33 +0x1b1:  movl   $0xbc63,0x8(%esp)
0844bb3b +0x1b9:  movl   $&_ZZN8DB_Login30IsThisIPLoginPermissionGrantedEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x4(%esp)
0844bb43 +0x1c1:  lea    -0x1c(%ebp),%eax
0844bb46 +0x1c4:  mov    %eax,(%esp)
0844bb49 +0x1c7:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0844bb4e +0x1cc:  movl   $"[QUERY_ERROR] (insert into member_join_info)",0x4(%esp)
0844bb56 +0x1d4:  lea    -0x1c(%ebp),%eax
0844bb59 +0x1d7:  mov    %eax,(%esp)
0844bb5c +0x1da:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0844bb61 +0x1df:  mov    $0x0,%eax
0844bb66 +0x1e4:  jmp    0844bb6d <+0x1eb>
0844bb68 +0x1e6:  mov    $0x1,%eax
0844bb6d +0x1eb:  leave
0844bb6e +0x1ec:  ret
0844bb6f +0x1ed:  nop
```

## 反编译 C

```c
// DB_Login::IsThisIPLoginPermissionGranted @ 0x844b982

/* DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::IsThisIPLoginPermissionGranted(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_44;
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  cMyTrace local_20 [16];
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  local_44 = 0;
  param_1[0xb5] = (SIG_LOGIN_DATA)0x0;
  MySQL::set_query(local_10,"seLect count(*) from geo_allow where allow_ip = \'%s\'",param_1 + 0xa1)
  ;
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 != '\x01') {
    cMyTrace::cMyTrace(local_40,"bool DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)",
                       0xbc49,5);
    cMyTrace::operator()(local_40,"[QUERY_ERROR] (select from geo_allow)");
    return 0;
  }
  iVar3 = MySQL::get_n_rows(local_10);
  if (iVar3 != 0) {
    cVar2 = MySQL::fetch(local_10);
    if ((cVar2 == '\x01') && (cVar2 = MySQL::get_uint(local_10,0,&local_44), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      cMyTrace::cMyTrace(local_30,"bool DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)",
                         0xbc52,5);
      cMyTrace::operator()(local_30,"[QUERY_ERROR] (fetch get_uint)");
      uVar4 = 0;
    }
    else {
      if (local_44 != 0) {
        param_1[0xb5] = (SIG_LOGIN_DATA)0x1;
      }
      MySQL::set_query(local_10,
                       "insert into member_join_info(m_id, reg_date, ip) values(%d, now(), \'%s\')",
                       *(undefined4 *)(param_1 + 0xc0),param_1 + 0xa1);
      cVar2 = MySQL::exec(local_10,true);
      if (cVar2 == '\x01') {
        uVar4 = 1;
      }
      else {
        cMyTrace::cMyTrace(local_20,"bool DB_Login::IsThisIPLoginPermissionGranted(SIG_LOGIN_DATA*)"
                           ,0xbc63,5);
        cMyTrace::operator()(local_20,"[QUERY_ERROR] (insert into member_join_info)");
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 1;
}
```
