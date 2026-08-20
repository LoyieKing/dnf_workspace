# GetCheckPickUpRandomOptionItem

`_ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA`

`DB_Login::GetCheckPickUpRandomOptionItem(SIG_LOGIN_DATA*)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x08414e7a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08414e7a  _ZN8DB_Login30GetCheckPickUpRandomOptionItemEP14SIG_LOGIN_DATA
#           DB_Login::GetCheckPickUpRandomOptionItem(SIG_LOGIN_DATA*)
# range [0x08414e7a, 0x08414f5b]
08414e7a +0x00:  push   %ebp
08414e7b +0x01:  mov    %esp,%ebp
08414e7d +0x03:  sub    $0x28,%esp
08414e80 +0x06:  mov    0xc(%ebp),%eax
08414e83 +0x09:  movb   $0x0,0x3fa8(%eax)
08414e8a +0x10:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08414e8f +0x15:  movl   $0x0,0x8(%esp)
08414e97 +0x1d:  movl   $0x1,0x4(%esp)
08414e9f +0x25:  mov    %eax,(%esp)
08414ea2 +0x28:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08414ea7 +0x2d:  mov    %eax,-0x10(%ebp)
08414eaa +0x30:  mov    0xc(%ebp),%eax
08414ead +0x33:  mov    0xc0(%eax),%eax
08414eb3 +0x39:  movl   $0x0,0x4(%esp)
08414ebb +0x41:  mov    %eax,(%esp)
08414ebe +0x44:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08414ec3 +0x49:  mov    %eax,0x8(%esp)
08414ec7 +0x4d:  movl   $"seLect check_count from check_pick_up_random_option_item where m_id = %s",0x4(%esp)
08414ecf +0x55:  mov    -0x10(%ebp),%eax
08414ed2 +0x58:  mov    %eax,(%esp)
08414ed5 +0x5b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08414eda +0x60:  movl   $0x1,0x4(%esp)
08414ee2 +0x68:  mov    -0x10(%ebp),%eax
08414ee5 +0x6b:  mov    %eax,(%esp)
08414ee8 +0x6e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08414eed +0x73:  xor    $0x1,%eax
08414ef0 +0x76:  test   %al,%al
08414ef2 +0x78:  je     08414efb <+0x81>
08414ef4 +0x7a:  mov    $0x0,%eax
08414ef9 +0x7f:  jmp    08414f5a <+0xe0>
08414efb +0x81:  mov    -0x10(%ebp),%eax
08414efe +0x84:  mov    %eax,(%esp)
08414f01 +0x87:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08414f06 +0x8c:  mov    %eax,-0xc(%ebp)
08414f09 +0x8f:  cmpl   $0x0,-0xc(%ebp)
08414f0d +0x93:  je     08414f55 <+0xdb>
08414f0f +0x95:  mov    -0x10(%ebp),%eax
08414f12 +0x98:  mov    %eax,(%esp)
08414f15 +0x9b:  call   083f44bc <_ZN5MySQL5fetchEv>  ; MySQL::fetch()
08414f1a +0xa0:  xor    $0x1,%eax
08414f1d +0xa3:  test   %al,%al
08414f1f +0xa5:  je     08414f28 <+0xae>
08414f21 +0xa7:  mov    $0x0,%eax
08414f26 +0xac:  jmp    08414f5a <+0xe0>
08414f28 +0xae:  mov    0xc(%ebp),%eax
08414f2b +0xb1:  add    $0x3fa8,%eax
08414f30 +0xb6:  mov    %eax,0x8(%esp)
08414f34 +0xba:  movl   $0x0,0x4(%esp)
08414f3c +0xc2:  mov    -0x10(%ebp),%eax
08414f3f +0xc5:  mov    %eax,(%esp)
08414f42 +0xc8:  call   080fdeba <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1e6>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1e6
08414f47 +0xcd:  xor    $0x1,%eax
08414f4a +0xd0:  test   %al,%al
08414f4c +0xd2:  je     08414f55 <+0xdb>
08414f4e +0xd4:  mov    $0x0,%eax
08414f53 +0xd9:  jmp    08414f5a <+0xe0>
08414f55 +0xdb:  mov    $0x1,%eax
08414f5a +0xe0:  leave
08414f5b +0xe1:  ret
```

## 反编译 C

```c
// DB_Login::GetCheckPickUpRandomOptionItem @ 0x8414e7a

/* DB_Login::GetCheckPickUpRandomOptionItem(SIG_LOGIN_DATA*) */

undefined4 __thiscall
DB_Login::GetCheckPickUpRandomOptionItem(DB_Login *this,SIG_LOGIN_DATA *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  param_1[0x3fa8] = (SIG_LOGIN_DATA)0x0;
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(*(uint *)(param_1 + 0xc0),0);
  MySQL::set_query(this_00,
                   "seLect check_count from check_pick_up_random_option_item where m_id = %s",uVar2)
  ;
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 != '\x01') {
    return 0;
  }
  iVar3 = MySQL::get_n_rows(this_00);
  if (iVar3 != 0) {
    cVar1 = MySQL::fetch(this_00);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_ubyte(this_00,0,(uchar *)(param_1 + 0x3fa8));
    if (cVar1 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
