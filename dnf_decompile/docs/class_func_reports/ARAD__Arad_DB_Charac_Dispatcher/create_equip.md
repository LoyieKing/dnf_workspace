# create_equip

`_ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x08184484` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184484  _ZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*)
# range [0x08184484, 0x08184527]
08184484 +0x00:  push   %ebp
08184485 +0x01:  mov    %esp,%ebp
08184487 +0x03:  sub    $0x38,%esp
0818448a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818448f +0x0b:  movl   $0x0,0x8(%esp)
08184497 +0x13:  movl   $0x3,0x4(%esp)
0818449f +0x1b:  mov    %eax,(%esp)
081844a2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081844a7 +0x23:  mov    %eax,-0xc(%ebp)
081844aa +0x26:  cmpl   $0x0,-0xc(%ebp)
081844ae +0x2a:  jne    081844eb <+0x67>
081844b0 +0x2c:  movl   $"Database null!!",0x14(%esp)
081844b8 +0x34:  movl   $"%s",0x10(%esp)
081844c0 +0x3c:  movl   $0x95,0xc(%esp)
081844c8 +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher12create_equipEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
081844d0 +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
081844d8 +0x54:  movl   $0x1,(%esp)
081844df +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081844e4 +0x60:  mov    $0xffffffff,%eax
081844e9 +0x65:  jmp    08184525 <+0xa1>
081844eb +0x67:  mov    0xc(%ebp),%eax
081844ee +0x6a:  add    $0x4e01,%eax
081844f3 +0x6f:  test   %eax,%eax
081844f5 +0x71:  jne    081844fe <+0x7a>
081844f7 +0x73:  mov    $0x0,%eax
081844fc +0x78:  jmp    08184525 <+0xa1>
081844fe +0x7a:  mov    0xc(%ebp),%eax
08184501 +0x7d:  mov    %eax,0x4(%esp)
08184505 +0x81:  mov    -0xc(%ebp),%eax
08184508 +0x84:  mov    %eax,(%esp)
0818450b +0x87:  call   0818b443 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_equipEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_equip(MySQL*, SIG_CREATE_CHARAC*)
08184510 +0x8c:  test   %eax,%eax
08184512 +0x8e:  setne  %al
08184515 +0x91:  test   %al,%al
08184517 +0x93:  je     08184520 <+0x9c>
08184519 +0x95:  mov    $0xffffffff,%eax
0818451e +0x9a:  jmp    08184525 <+0xa1>
08184520 +0x9c:  mov    $0x0,%eax
08184525 +0xa1:  leave
08184526 +0xa2:  ret
08184527 +0xa3:  nop
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_equip @ 0x8184484

/* ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_equip
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_equip(SIG_CREATE_CHARAC*)",0x95,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else if (param_1 == (SIG_CREATE_CHARAC *)0xffffb1ff) {
    uVar2 = 0;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_equip(pMVar1,param_1);
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
