# create_inventory

`_ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC`

`ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_DB_Charac_Dispatcher` | `0x081843d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081843d2  _ZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARAC
#           ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*)
# range [0x081843d2, 0x08184483]
081843d2 +0x00:  push   %ebp
081843d3 +0x01:  mov    %esp,%ebp
081843d5 +0x03:  sub    $0x38,%esp
081843d8 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
081843dd +0x0b:  movl   $0x0,0x8(%esp)
081843e5 +0x13:  movl   $0x3,0x4(%esp)
081843ed +0x1b:  mov    %eax,(%esp)
081843f0 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
081843f5 +0x23:  mov    %eax,-0xc(%ebp)
081843f8 +0x26:  cmpl   $0x0,-0xc(%ebp)
081843fc +0x2a:  jne    08184439 <+0x67>
081843fe +0x2c:  movl   $"Database null!!",0x14(%esp)
08184406 +0x34:  movl   $"%s",0x10(%esp)
0818440e +0x3c:  movl   $0x7b,0xc(%esp)
08184416 +0x44:  movl   $&_ZZN4ARAD25Arad_DB_Charac_Dispatcher16create_inventoryEP17SIG_CREATE_CHARACE19__PRETTY_FUNCTION__,0x8(%esp)
0818441e +0x4c:  movl   $"localjapan/Arad_Character.cpp",0x4(%esp)
08184426 +0x54:  movl   $0x1,(%esp)
0818442d +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08184432 +0x60:  mov    $0xffffffff,%eax
08184437 +0x65:  jmp    08184482 <+0xb0>
08184439 +0x67:  mov    0xc(%ebp),%eax
0818443c +0x6a:  mov    %eax,0x4(%esp)
08184440 +0x6e:  mov    -0xc(%ebp),%eax
08184443 +0x71:  mov    %eax,(%esp)
08184446 +0x74:  call   0818b2b7 <_ZN4ARAD8DATABASE12CREATE_QUERY20arad_sp_create_invenEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_inven(MySQL*, SIG_CREATE_CHARAC*)
0818444b +0x79:  test   %eax,%eax
0818444d +0x7b:  setne  %al
08184450 +0x7e:  test   %al,%al
08184452 +0x80:  je     0818445b <+0x89>
08184454 +0x82:  mov    $0xffffffff,%eax
08184459 +0x87:  jmp    08184482 <+0xb0>
0818445b +0x89:  mov    0xc(%ebp),%eax
0818445e +0x8c:  mov    %eax,0x4(%esp)
08184462 +0x90:  mov    -0xc(%ebp),%eax
08184465 +0x93:  mov    %eax,(%esp)
08184468 +0x96:  call   0818b406 <_ZN4ARAD8DATABASE12CREATE_QUERY27arad_sp_create_expand_invenEP5MySQLP17SIG_CREATE_CHARAC>  ; ARAD::DATABASE::CREATE_QUERY::arad_sp_create_expand_inven(MySQL*, SIG_CREATE_CHARAC*)
0818446d +0x9b:  test   %eax,%eax
0818446f +0x9d:  setne  %al
08184472 +0xa0:  test   %al,%al
08184474 +0xa2:  je     0818447d <+0xab>
08184476 +0xa4:  mov    $0xffffffff,%eax
0818447b +0xa9:  jmp    08184482 <+0xb0>
0818447d +0xab:  mov    $0x0,%eax
08184482 +0xb0:  leave
08184483 +0xb1:  ret
```

## 反编译 C

```c
// ARAD::Arad_DB_Charac_Dispatcher::create_inventory @ 0x81843d2

/* ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*) */

undefined4 __thiscall
ARAD::Arad_DB_Charac_Dispatcher::create_inventory
          (Arad_DB_Charac_Dispatcher *this,SIG_CREATE_CHARAC *param_1)

{
  MySQL *pMVar1;
  undefined4 uVar2;
  int iVar3;
  
  pMVar1 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (pMVar1 == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_Character.cpp",
               "int ARAD::Arad_DB_Charac_Dispatcher::create_inventory(SIG_CREATE_CHARAC*)",0x7b,"%s"
               ,"Database null!!");
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_inven(pMVar1,param_1);
    if (iVar3 == 0) {
      iVar3 = DATABASE::CREATE_QUERY::arad_sp_create_expand_inven(pMVar1,param_1);
      if (iVar3 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0xffffffff;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}
```
