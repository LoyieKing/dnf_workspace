# arad_sp_check_goblin_reward

`_ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818c4f3` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818c4f3  _ZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPc
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)
# range [0x0818c4f3, 0x0818c608]
0818c4f3 +0x000:  push   %ebp
0818c4f4 +0x001:  mov    %esp,%ebp
0818c4f6 +0x003:  sub    $0x38,%esp
0818c4f9 +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818c4fe +0x00b:  movl   $0x0,0x8(%esp)
0818c506 +0x013:  movl   $0x6,0x4(%esp)
0818c50e +0x01b:  mov    %eax,(%esp)
0818c511 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818c516 +0x023:  mov    %eax,-0xc(%ebp)
0818c519 +0x026:  cmpl   $0x0,-0xc(%ebp)
0818c51d +0x02a:  jne    0818c55d <+0x6a>
0818c51f +0x02c:  movl   $"Database null!!",0x14(%esp)
0818c527 +0x034:  movl   $"%s",0x10(%esp)
0818c52f +0x03c:  movl   $0x30d,0xc(%esp)
0818c537 +0x044:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x8(%esp)
0818c53f +0x04c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c547 +0x054:  movl   $0x1,(%esp)
0818c54e +0x05b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c553 +0x060:  mov    $0xffffffff,%eax
0818c558 +0x065:  jmp    0818c607 <+0x114>
0818c55d +0x06a:  mov    0x8(%ebp),%eax
0818c560 +0x06d:  mov    0xc0(%eax),%eax
0818c566 +0x073:  mov    0xc(%ebp),%edx
0818c569 +0x076:  mov    %edx,0x10(%esp)
0818c56d +0x07a:  mov    %eax,0xc(%esp)
0818c571 +0x07e:  movl   $0x10,0x8(%esp)
0818c579 +0x086:  movl   $"seLect m_id from member_mousepass_history where modify_type = %d and m_id=%d and occ_time >= '%s'",0x4(%esp)
0818c581 +0x08e:  mov    -0xc(%ebp),%eax
0818c584 +0x091:  mov    %eax,(%esp)
0818c587 +0x094:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0818c58c +0x099:  movl   $0x1,0x4(%esp)
0818c594 +0x0a1:  mov    -0xc(%ebp),%eax
0818c597 +0x0a4:  mov    %eax,(%esp)
0818c59a +0x0a7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0818c59f +0x0ac:  xor    $0x1,%eax
0818c5a2 +0x0af:  test   %al,%al
0818c5a4 +0x0b1:  je     0818c5e1 <+0xee>
0818c5a6 +0x0b3:  movl   $"arad_sp_check_goblin_reward fail",0x14(%esp)
0818c5ae +0x0bb:  movl   $"%s",0x10(%esp)
0818c5b6 +0x0c3:  movl   $0x31f,0xc(%esp)
0818c5be +0x0cb:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY27arad_sp_check_goblin_rewardEP14SIG_LOGIN_DATAPcE19__PRETTY_FUNCTION__,0x8(%esp)
0818c5c6 +0x0d3:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c5ce +0x0db:  movl   $0x1,(%esp)
0818c5d5 +0x0e2:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c5da +0x0e7:  mov    $0xffffffff,%eax
0818c5df +0x0ec:  jmp    0818c607 <+0x114>
0818c5e1 +0x0ee:  mov    -0xc(%ebp),%eax
0818c5e4 +0x0f1:  mov    %eax,(%esp)
0818c5e7 +0x0f4:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
0818c5ec +0x0f9:  test   %eax,%eax
0818c5ee +0x0fb:  mov    0x8(%ebp),%eax
0818c5f1 +0x0fe:  movb   $0x1,0x38e0(%eax)
0818c5f8 +0x105:  mov    0x8(%ebp),%eax
0818c5fb +0x108:  movb   $0x2,0x390c(%eax)
0818c602 +0x10f:  mov    $0x0,%eax
0818c607 +0x114:  leave
0818c608 +0x115:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward @ 0x818c4f3

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*) */

undefined4
ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA *param_1,char *param_2)

{
  char cVar1;
  MySQL *this;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)"
               ,0x30d,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    MySQL::set_query(this,
                     "seLect m_id from member_mousepass_history where modify_type = %d and m_id=%d and occ_time >= \'%s\'"
                     ,0x10,*(undefined4 *)(param_1 + 0xc0),param_2);
    cVar1 = MySQL::exec(this,true);
    if (cVar1 == '\x01') {
      MySQL::get_n_rows(this);
      param_1[0x38e0] = (SIG_LOGIN_DATA)0x1;
      param_1[0x390c] = (SIG_LOGIN_DATA)0x2;
      uVar2 = 0;
    }
    else {
      LogManager::logFormat
                (1,"localjapan/Arad_DB_Query.cpp",
                 "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_check_goblin_reward(SIG_LOGIN_DATA*, char*)"
                 ,799,"%s","arad_sp_check_goblin_reward fail");
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
