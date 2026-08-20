# create_pvp

`_ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x081845b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081845b8  _ZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*)
# range [0x081845b8, 0x08184647]
081845b8 +0x00:  push   %ebp
081845b9 +0x01:  mov    %esp,%ebp
081845bb +0x03:  sub    $0x38,%esp
081845be +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
081845c3 +0x0b:  movl   $0x0,0x8(%esp)
081845cb +0x13:  movl   $0x2,0x4(%esp)
081845d3 +0x1b:  mov    %eax,(%esp)
081845d6 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081845db +0x23:  mov    %eax,-0xc(%ebp)
081845de +0x26:  cmpl   $0x0,-0xc(%ebp)
081845e2 +0x2a:  jne    0818461f <+0x67>
081845e4 +0x2c:  movl   $"Database null!!",0x14(%esp)
081845ec +0x34:  movl   $"%s",0x10(%esp)
081845f4 +0x3c:  movl   $0xbf,0xc(%esp)
081845fc +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher10create_pvpEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
08184604 +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
0818460c +0x54:  movl   $0x1,(%esp)
08184613 +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08184618 +0x60:  mov    $0xffffffff,%eax
0818461d +0x65:  jmp    08184646 <+0x8e>
0818461f +0x67:  mov    0xc(%ebp),%eax
08184622 +0x6a:  mov    %eax,0x4(%esp)
08184626 +0x6e:  mov    -0xc(%ebp),%eax
08184629 +0x71:  mov    %eax,(%esp)
0818462c +0x74:  call   0818b5f4 <_ZN4ARAD8DATABASE12CREATE_QUERY18arad_sp_create_pvpEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_pvp(MySQL*, SIG_CREATE_CHARAC*)
08184631 +0x79:  test   %eax,%eax
08184633 +0x7b:  setne  %al
08184636 +0x7e:  test   %al,%al
08184638 +0x80:  je     08184641 <+0x89>
0818463a +0x82:  mov    $0xffffffff,%eax
0818463f +0x87:  jmp    08184646 <+0x8e>
08184641 +0x89:  mov    $0x0,%eax
08184646 +0x8e:  leave
08184647 +0x8f:  ret
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_pvp @ 0x81845b8

/* ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_pvp
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_pvp(SIG_CREATE_CHARAC*)",0xbf,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_pvp(pMVar1,param_1);
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
