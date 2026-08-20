# _GetEquipMaxItemLevel

`_ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY`

`DB_LoadInventory::_GetEquipMaxItemLevel(SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `DB_LoadInventory` | `0x0840aac8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840aac8  _ZN16DB_LoadInventory21_GetEquipMaxItemLevelEP18SIG_LOAD_INVENTORY
#           DB_LoadInventory::_GetEquipMaxItemLevel(SIG_LOAD_INVENTORY*)
# range [0x0840aac8, 0x0840aba1]
0840aac8 +0x00:  push   %ebp
0840aac9 +0x01:  mov    %esp,%ebp
0840aacb +0x03:  sub    $0x28,%esp
0840aace +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840aad3 +0x0b:  movl   $0x0,0x8(%esp)
0840aadb +0x13:  movl   $0x2,0x4(%esp)
0840aae3 +0x1b:  mov    %eax,(%esp)
0840aae6 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840aaeb +0x23:  mov    %eax,-0x10(%ebp)
0840aaee +0x26:  mov    0xc(%ebp),%eax
0840aaf1 +0x29:  mov    0x4(%eax),%eax
0840aaf4 +0x2c:  mov    %eax,0x8(%esp)
0840aaf8 +0x30:  movl   $"seLect max_equip_level from charac_manage_info where charac_no = %d",0x4(%esp)
0840ab00 +0x38:  mov    -0x10(%ebp),%eax
0840ab03 +0x3b:  mov    %eax,(%esp)
0840ab06 +0x3e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840ab0b +0x43:  movl   $0x1,0x4(%esp)
0840ab13 +0x4b:  mov    -0x10(%ebp),%eax
0840ab16 +0x4e:  mov    %eax,(%esp)
0840ab19 +0x51:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840ab1e +0x56:  xor    $0x1,%eax
0840ab21 +0x59:  test   %al,%al
0840ab23 +0x5b:  je     0840ab2c <+0x64>
0840ab25 +0x5d:  mov    $0x0,%eax
0840ab2a +0x62:  jmp    0840ab9f <+0xd7>
0840ab2c +0x64:  mov    -0x10(%ebp),%eax
0840ab2f +0x67:  mov    %eax,(%esp)
0840ab32 +0x6a:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0840ab37 +0x6f:  or     %edx,%eax
0840ab39 +0x71:  test   %eax,%eax
0840ab3b +0x73:  sete   %al
0840ab3e +0x76:  test   %al,%al
0840ab40 +0x78:  je     0840ab49 <+0x81>
0840ab42 +0x7a:  mov    $0x1,%eax
0840ab47 +0x7f:  jmp    0840ab9f <+0xd7>
0840ab49 +0x81:  mov    -0x10(%ebp),%eax
0840ab4c +0x84:  mov    %eax,(%esp)
0840ab4f +0x87:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
0840ab54 +0x8c:  xor    $0x1,%eax
0840ab57 +0x8f:  test   %al,%al
0840ab59 +0x91:  je     0840ab62 <+0x9a>
0840ab5b +0x93:  mov    $0x0,%eax
0840ab60 +0x98:  jmp    0840ab9f <+0xd7>
0840ab62 +0x9a:  movl   $0x0,-0xc(%ebp)
0840ab69 +0xa1:  mov    0xc(%ebp),%eax
0840ab6c +0xa4:  lea    &_ZL14gUnicodeBuffer+0xaf1c(%eax),%edx
0840ab72 +0xaa:  mov    -0xc(%ebp),%eax
0840ab75 +0xad:  addl   $0x1,-0xc(%ebp)
0840ab79 +0xb1:  mov    %edx,0x8(%esp)
0840ab7d +0xb5:  mov    %eax,0x4(%esp)
0840ab81 +0xb9:  mov    -0x10(%ebp),%eax
0840ab84 +0xbc:  mov    %eax,(%esp)
0840ab87 +0xbf:  call   0811692c <_GLOBAL__I__ZN13CEventManagerC2Ev+0x41>  ; global constructors keyed to CEventManager::CEventManager()+0x41
0840ab8c +0xc4:  xor    $0x1,%eax
0840ab8f +0xc7:  test   %al,%al
0840ab91 +0xc9:  je     0840ab9a <+0xd2>
0840ab93 +0xcb:  mov    $0x0,%eax
0840ab98 +0xd0:  jmp    0840ab9f <+0xd7>
0840ab9a +0xd2:  mov    $0x1,%eax
0840ab9f +0xd7:  leave
0840aba0 +0xd8:  ret
0840aba1 +0xd9:  nop
```

## 反编译 C

```c
// DB_LoadInventory::_GetEquipMaxItemLevel @ 0x840aac8

/* DB_LoadInventory::_GetEquipMaxItemLevel(SIG_LOAD_INVENTORY*) */

undefined4 __thiscall
DB_LoadInventory::_GetEquipMaxItemLevel(DB_LoadInventory *this,SIG_LOAD_INVENTORY *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  longlong lVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"seLect max_equip_level from charac_manage_info where charac_no = %d",
                   *(undefined4 *)(param_1 + 4));
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    lVar3 = MySQL::getAffectedRowCount(this_00);
    if (lVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(this_00);
      if (cVar1 == '\x01') {
        cVar1 = MySQL::get_int(this_00,0,(int *)(param_1 + 0x15448));
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
