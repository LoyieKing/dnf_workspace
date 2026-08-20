# arad_sp_update_fail_record

`_ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818c6c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818c6c4  _ZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATA
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*)
# range [0x0818c6c4, 0x0818c76e]
0818c6c4 +0x00:  push   %ebp
0818c6c5 +0x01:  mov    %esp,%ebp
0818c6c7 +0x03:  sub    $0x38,%esp
0818c6ca +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818c6cf +0x0b:  movl   $0x0,0x8(%esp)
0818c6d7 +0x13:  movl   $0x6,0x4(%esp)
0818c6df +0x1b:  mov    %eax,(%esp)
0818c6e2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818c6e7 +0x23:  mov    %eax,-0xc(%ebp)
0818c6ea +0x26:  cmpl   $0x0,-0xc(%ebp)
0818c6ee +0x2a:  jne    0818c72b <+0x67>
0818c6f0 +0x2c:  movl   $"Database null!!",0x14(%esp)
0818c6f8 +0x34:  movl   $"%s",0x10(%esp)
0818c700 +0x3c:  movl   $0x365,0xc(%esp)
0818c708 +0x44:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY26arad_sp_update_fail_recordEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c710 +0x4c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c718 +0x54:  movl   $0x1,(%esp)
0818c71f +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c724 +0x60:  mov    $0xffffffff,%eax
0818c729 +0x65:  jmp    0818c76d <+0xa9>
0818c72b +0x67:  mov    0x8(%ebp),%eax
0818c72e +0x6a:  mov    0xc0(%eax),%edx
0818c734 +0x70:  mov    0x8(%ebp),%eax
0818c737 +0x73:  mov    0x3914(%eax),%eax
0818c73d +0x79:  mov    %edx,0xc(%esp)
0818c741 +0x7d:  mov    %eax,0x8(%esp)
0818c745 +0x81:  movl   $"upDate member_mousepass set fail_cnt=%d where m_id=%d",0x4(%esp)
0818c74d +0x89:  mov    -0xc(%ebp),%eax
0818c750 +0x8c:  mov    %eax,(%esp)
0818c753 +0x8f:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818c758 +0x94:  test   %eax,%eax
0818c75a +0x96:  setne  %al
0818c75d +0x99:  test   %al,%al
0818c75f +0x9b:  je     0818c768 <+0xa4>
0818c761 +0x9d:  mov    $0xffffffff,%eax
0818c766 +0xa2:  jmp    0818c76d <+0xa9>
0818c768 +0xa4:  mov    $0x0,%eax
0818c76d +0xa9:  leave
0818c76e +0xaa:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record @ 0x818c6c4

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA *param_1)

{
  MySQL *this;
  undefined4 uVar1;
  int iVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_update_fail_record(SIG_LOGIN_DATA*)",0x365,
               "%s","Database null!!");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = MySQL::select(this,"upDate member_mousepass set fail_cnt=%d where m_id=%d",
                          *(undefined4 *)(param_1 + 0x3914),*(undefined4 *)(param_1 + 0xc0));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
