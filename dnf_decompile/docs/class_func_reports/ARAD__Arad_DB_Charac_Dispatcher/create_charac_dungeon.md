# create_charac_dungeon

`_ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x08184648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184648  _ZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*)
# range [0x08184648, 0x081846d7]
08184648 +0x00:  push   %ebp
08184649 +0x01:  mov    %esp,%ebp
0818464b +0x03:  sub    $0x38,%esp
0818464e +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08184653 +0x0b:  movl   $0x0,0x8(%esp)
0818465b +0x13:  movl   $0x2,0x4(%esp)
08184663 +0x1b:  mov    %eax,(%esp)
08184666 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818466b +0x23:  mov    %eax,-0xc(%ebp)
0818466e +0x26:  cmpl   $0x0,-0xc(%ebp)
08184672 +0x2a:  jne    081846af <+0x67>
08184674 +0x2c:  movl   $"Database null!!",0x14(%esp)
0818467c +0x34:  movl   $"%s",0x10(%esp)
08184684 +0x3c:  movl   $0xcd,0xc(%esp)
0818468c +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher21create_charac_dungeonEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
08184694 +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
0818469c +0x54:  movl   $0x1,(%esp)
081846a3 +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081846a8 +0x60:  mov    $0xffffffff,%eax
081846ad +0x65:  jmp    081846d6 <+0x8e>
081846af +0x67:  mov    0xc(%ebp),%eax
081846b2 +0x6a:  mov    %eax,0x4(%esp)
081846b6 +0x6e:  mov    -0xc(%ebp),%eax
081846b9 +0x71:  mov    %eax,(%esp)
081846bc +0x74:  call   0818b642 <_ZN4ARAD8DATABASE12CREATE_QUERY29arad_sp_create_charac_dungeonEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(MySQL*, SIG_CREATE_CHARAC*)
081846c1 +0x79:  test   %eax,%eax
081846c3 +0x7b:  setne  %al
081846c6 +0x7e:  test   %al,%al
081846c8 +0x80:  je     081846d1 <+0x89>
081846ca +0x82:  mov    $0xffffffff,%eax
081846cf +0x87:  jmp    081846d6 <+0x8e>
081846d1 +0x89:  mov    $0x0,%eax
081846d6 +0x8e:  leave
081846d7 +0x8f:  ret
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon @ 0x8184648

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac_dungeon(SIG_CREATE_CHARAC*)",0xcd
               ,"%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_charac_dungeon(pMVar1,param_1);
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
