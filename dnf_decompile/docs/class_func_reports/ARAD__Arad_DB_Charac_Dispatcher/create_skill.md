# create_skill

`_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x08184528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184528  _ZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*)
# range [0x08184528, 0x081845b7]
08184528 +0x00:  push   %ebp
08184529 +0x01:  mov    %esp,%ebp
0818452b +0x03:  sub    $0x38,%esp
0818452e +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08184533 +0x0b:  movl   $0x0,0x8(%esp)
0818453b +0x13:  movl   $0x3,0x4(%esp)
08184543 +0x1b:  mov    %eax,(%esp)
08184546 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818454b +0x23:  mov    %eax,-0xc(%ebp)
0818454e +0x26:  cmpl   $0x0,-0xc(%ebp)
08184552 +0x2a:  jne    0818458f <+0x67>
08184554 +0x2c:  movl   $"Database null!!",0x14(%esp)
0818455c +0x34:  movl   $"%s",0x10(%esp)
08184564 +0x3c:  movl   $0xb0,0xc(%esp)
0818456c +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher12create_skillEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
08184574 +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
0818457c +0x54:  movl   $0x1,(%esp)
08184583 +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08184588 +0x60:  mov    $0xffffffff,%eax
0818458d +0x65:  jmp    081845b6 <+0x8e>
0818458f +0x67:  mov    0xc(%ebp),%eax
08184592 +0x6a:  mov    %eax,0x4(%esp)
08184596 +0x6e:  mov    -0xc(%ebp),%eax
08184599 +0x71:  mov    %eax,(%esp)
0818459c +0x74:  call   0818b588 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_skillEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_skill(MySQL*, SIG_CREATE_CHARAC*)
081845a1 +0x79:  test   %eax,%eax
081845a3 +0x7b:  setne  %al
081845a6 +0x7e:  test   %al,%al
081845a8 +0x80:  je     081845b1 <+0x89>
081845aa +0x82:  mov    $0xffffffff,%eax
081845af +0x87:  jmp    081845b6 <+0x8e>
081845b1 +0x89:  mov    $0x0,%eax
081845b6 +0x8e:  leave
081845b7 +0x8f:  ret
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_skill @ 0x8184528

/* ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_skill
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_skill(SIG_CREATE_CHARAC*)",0xb0,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_skill(pMVar1,param_1);
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
