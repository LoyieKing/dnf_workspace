# create_charac

`_ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x08184290` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08184290  _ZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*)
# range [0x08184290, 0x08184341]
08184290 +0x00:  push   %ebp
08184291 +0x01:  mov    %esp,%ebp
08184293 +0x03:  sub    $0x38,%esp
08184296 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818429b +0x0b:  movl   $0x0,0x8(%esp)
081842a3 +0x13:  movl   $0x2,0x4(%esp)
081842ab +0x1b:  mov    %eax,(%esp)
081842ae +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081842b3 +0x23:  mov    %eax,-0xc(%ebp)
081842b6 +0x26:  cmpl   $0x0,-0xc(%ebp)
081842ba +0x2a:  jne    081842f7 <+0x67>
081842bc +0x2c:  movl   $"Database null!!",0x14(%esp)
081842c4 +0x34:  movl   $"%s",0x10(%esp)
081842cc +0x3c:  movl   $0x4e,0xc(%esp)
081842d4 +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher13create_characEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
081842dc +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
081842e4 +0x54:  movl   $0x1,(%esp)
081842eb +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
081842f0 +0x60:  mov    $0xffffffff,%eax
081842f5 +0x65:  jmp    08184340 <+0xb0>
081842f7 +0x67:  mov    0xc(%ebp),%eax
081842fa +0x6a:  mov    %eax,0x4(%esp)
081842fe +0x6e:  mov    -0xc(%ebp),%eax
08184301 +0x71:  mov    %eax,(%esp)
08184304 +0x74:  call   0818af9a <_ZN4ARAD8DATABASE12CREATE_QUERY24arad_sp_create_characterEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_character(MySQL*, SIG_CREATE_CHARAC*)
08184309 +0x79:  test   %eax,%eax
0818430b +0x7b:  setne  %al
0818430e +0x7e:  test   %al,%al
08184310 +0x80:  je     08184319 <+0x89>
08184312 +0x82:  mov    $0xffffffff,%eax
08184317 +0x87:  jmp    08184340 <+0xb0>
08184319 +0x89:  mov    0xc(%ebp),%eax
0818431c +0x8c:  mov    %eax,0x4(%esp)
08184320 +0x90:  mov    -0xc(%ebp),%eax
08184323 +0x93:  mov    %eax,(%esp)
08184326 +0x96:  call   0818ad8b <_ZN4ARAD8DATABASE12CREATE_QUERY26arad_sp_get_characer_indexEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_get_characer_index(MySQL*, SIG_CREATE_CHARAC*)
0818432b +0x9b:  test   %eax,%eax
0818432d +0x9d:  setne  %al
08184330 +0xa0:  test   %al,%al
08184332 +0xa2:  je     0818433b <+0xab>
08184334 +0xa4:  mov    $0x59,%eax
08184339 +0xa9:  jmp    08184340 <+0xb0>
0818433b +0xab:  mov    $0x0,%eax
08184340 +0xb0:  leave
08184341 +0xb1:  ret
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_charac @ 0x8184290

/* ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_charac
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_charac(SIG_CREATE_CHARAC*)",0x4e,"%s",
               "Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_character(pMVar1,param_1);
    if (iVar3 == 0) {
      iVar3 = DATABASE::CREATE_QUERY::arad_sp_get_characer_index(pMVar1,param_1);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0x59;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
