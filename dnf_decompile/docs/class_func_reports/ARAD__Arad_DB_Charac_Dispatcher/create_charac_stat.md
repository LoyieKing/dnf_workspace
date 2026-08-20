# create_charac_stat

`_ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x08184342` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184342  _ZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*)
# range [0x08184342, 0x081843d1]
08184342 +0x00:  push   %ebp
08184343 +0x01:  mov    %esp,%ebp
08184345 +0x03:  sub    $0x38,%esp
08184348 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818434d +0x0b:  movl   $0x0,0x8(%esp)
08184355 +0x13:  movl   $0x2,0x4(%esp)
0818435d +0x1b:  mov    %eax,(%esp)
08184360 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08184365 +0x23:  mov    %eax,-0xc(%ebp)
08184368 +0x26:  cmpl   $0x0,-0xc(%ebp)
0818436c +0x2a:  jne    081843a9 <+0x67>
0818436e +0x2c:  movl   $"Database null!!",0x14(%esp)
08184376 +0x34:  movl   $"%s",0x10(%esp)
0818437e +0x3c:  movl   $0x67,0xc(%esp)
08184386 +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher18create_charac_statEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818438e +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
08184396 +0x54:  movl   $0x1,(%esp)
0818439d +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081843a2 +0x60:  mov    $0xffffffff,%eax
081843a7 +0x65:  jmp    081843d0 <+0x8e>
081843a9 +0x67:  mov    0xc(%ebp),%eax
081843ac +0x6a:  mov    %eax,0x4(%esp)
081843b0 +0x6e:  mov    -0xc(%ebp),%eax
081843b3 +0x71:  mov    %eax,(%esp)
081843b6 +0x74:  call   0818b26d <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_create_charac_statEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(MySQL*, SIG_CREATE_CHARAC*)
081843bb +0x79:  test   %eax,%eax
081843bd +0x7b:  setne  %al
081843c0 +0x7e:  test   %al,%al
081843c2 +0x80:  je     081843cb <+0x89>
081843c4 +0x82:  mov    $0xffffffff,%eax
081843c9 +0x87:  jmp    081843d0 <+0x8e>
081843cb +0x89:  mov    $0x0,%eax
081843d0 +0x8e:  leave
081843d1 +0x8f:  ret
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat @ 0x8184342

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac_stat(SIG_CREATE_CHARAC*)",0x67,
               "%s","Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_charac_stat(pMVar1,param_1);
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
