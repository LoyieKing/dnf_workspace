# arad_sp_delete_member_mouspass

`_ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA`

`ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `ARAD::DATABASE::LOGIN_QUERY` | `0x0818c609` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0818c609  _ZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATA
#           ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*)
# range [0x0818c609, 0x0818c6c3]
0818c609 +0x00:  push   %ebp
0818c60a +0x01:  mov    %esp,%ebp
0818c60c +0x03:  sub    $0x38,%esp
0818c60f +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0818c614 +0x0b:  movl   $0x0,0x8(%esp)
0818c61c +0x13:  movl   $0x6,0x4(%esp)
0818c624 +0x1b:  mov    %eax,(%esp)
0818c627 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0818c62c +0x23:  mov    %eax,-0xc(%ebp)
0818c62f +0x26:  cmpl   $0x0,-0xc(%ebp)
0818c633 +0x2a:  jne    0818c670 <+0x67>
0818c635 +0x2c:  movl   $"Database null!!",0x14(%esp)
0818c63d +0x34:  movl   $"%s",0x10(%esp)
0818c645 +0x3c:  movl   $0x345,0xc(%esp)
0818c64d +0x44:  movl   $&_ZZN4ARAD8DATABASE11LOGIN_QUERY30arad_sp_delete_member_mouspassEP14SIG_LOGIN_DATAE19__PRETTY_FUNCTION__,0x8(%esp)
0818c655 +0x4c:  movl   $"localjapan/Arad_DB_Query.cpp",0x4(%esp)
0818c65d +0x54:  movl   $0x1,(%esp)
0818c664 +0x5b:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0818c669 +0x60:  mov    $0xffffffff,%eax
0818c66e +0x65:  jmp    0818c6c2 <+0xb9>
0818c670 +0x67:  mov    0x8(%ebp),%eax
0818c673 +0x6a:  mov    0xc0(%eax),%eax
0818c679 +0x70:  mov    %eax,0x8(%esp)
0818c67d +0x74:  movl   $"deLete from member_mousepass where m_id=%d",0x4(%esp)
0818c685 +0x7c:  mov    -0xc(%ebp),%eax
0818c688 +0x7f:  mov    %eax,(%esp)
0818c68b +0x82:  call   083f4678 <_ZN5MySQL6selectEPKcz>  ; MySQL::select(char const*, ...)
0818c690 +0x87:  test   %eax,%eax
0818c692 +0x89:  setne  %al
0818c695 +0x8c:  test   %al,%al
0818c697 +0x8e:  je     0818c6a0 <+0x97>
0818c699 +0x90:  mov    $0xffffffff,%eax
0818c69e +0x95:  jmp    0818c6c2 <+0xb9>
0818c6a0 +0x97:  mov    -0xc(%ebp),%eax
0818c6a3 +0x9a:  mov    %eax,(%esp)
0818c6a6 +0x9d:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0818c6ab +0xa2:  or     %edx,%eax
0818c6ad +0xa4:  test   %eax,%eax
0818c6af +0xa6:  sete   %al
0818c6b2 +0xa9:  test   %al,%al
0818c6b4 +0xab:  je     0818c6bd <+0xb4>
0818c6b6 +0xad:  mov    $0xffffffff,%eax
0818c6bb +0xb2:  jmp    0818c6c2 <+0xb9>
0818c6bd +0xb4:  mov    $0x0,%eax
0818c6c2 +0xb9:  leave
0818c6c3 +0xba:  ret
```

## 反编译 C

```c
// ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass @ 0x818c609

/* ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*) */

undefined4 ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA *param_1)

{
  MySQL *this;
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  if (this == (MySQL *)0x0) {
    LogManager::logFormat
              (1,"localjapan/Arad_DB_Query.cpp",
               "int ARAD::DATABASE::LOGIN_QUERY::arad_sp_delete_member_mouspass(SIG_LOGIN_DATA*)",
               0x345,"%s","Database null!!");
    uVar1 = 0xffffffff;
  }
  else {
    iVar2 = MySQL::select(this,"deLete from member_mousepass where m_id=%d",
                          *(undefined4 *)(param_1 + 0xc0));
    if (iVar2 == 0) {
      lVar3 = MySQL::getAffectedRowCount(this);
      if (lVar3 == 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  return uVar1;
}
```
