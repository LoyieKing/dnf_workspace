# _isAutoPunishedFirstUser

`_ZN8DB_Login24_isAutoPunishedFirstUserEj`

`DB_Login::_isAutoPunishedFirstUser(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_Login` | `0x0841102e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841102e  _ZN8DB_Login24_isAutoPunishedFirstUserEj
#           DB_Login::_isAutoPunishedFirstUser(unsigned int)
# range [0x0841102e, 0x084110c5]
0841102e +0x00:  push   %ebp
0841102f +0x01:  mov    %esp,%ebp
08411031 +0x03:  sub    $0x28,%esp
08411034 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08411039 +0x0b:  movl   $0x0,0x8(%esp)
08411041 +0x13:  movl   $0x6,0x4(%esp)
08411049 +0x1b:  mov    %eax,(%esp)
0841104c +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08411051 +0x23:  mov    %eax,-0xc(%ebp)
08411054 +0x26:  movl   $0x0,0x4(%esp)
0841105c +0x2e:  mov    0xc(%ebp),%eax
0841105f +0x31:  mov    %eax,(%esp)
08411062 +0x34:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08411067 +0x39:  mov    %eax,0x8(%esp)
0841106b +0x3d:  movl   $"seLect punish_flag from auto_punish_first_user where m_id=%s and punish_flag=1",0x4(%esp)
08411073 +0x45:  mov    -0xc(%ebp),%eax
08411076 +0x48:  mov    %eax,(%esp)
08411079 +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841107e +0x50:  movl   $0x1,0x4(%esp)
08411086 +0x58:  mov    -0xc(%ebp),%eax
08411089 +0x5b:  mov    %eax,(%esp)
0841108c +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08411091 +0x63:  xor    $0x1,%eax
08411094 +0x66:  test   %al,%al
08411096 +0x68:  jne    084110a7 <+0x79>
08411098 +0x6a:  mov    -0xc(%ebp),%eax
0841109b +0x6d:  mov    %eax,(%esp)
0841109e +0x70:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
084110a3 +0x75:  test   %eax,%eax
084110a5 +0x77:  jne    084110ae <+0x80>
084110a7 +0x79:  mov    $0x1,%eax
084110ac +0x7e:  jmp    084110b3 <+0x85>
084110ae +0x80:  mov    $0x0,%eax
084110b3 +0x85:  test   %al,%al
084110b5 +0x87:  je     084110be <+0x90>
084110b7 +0x89:  mov    $0x0,%eax
084110bc +0x8e:  jmp    084110c3 <+0x95>
084110be +0x90:  mov    $0x1,%eax
084110c3 +0x95:  leave
084110c4 +0x96:  ret
084110c5 +0x97:  nop
```

## 反编译 C

```c
// DB_Login::_isAutoPunishedFirstUser @ 0x841102e

/* DB_Login::_isAutoPunishedFirstUser(unsigned int) */

bool __thiscall DB_Login::_isAutoPunishedFirstUser(DB_Login *this,uint param_1)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  undefined4 uVar3;
  int iVar4;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(this_00,
                   "seLect punish_flag from auto_punish_first_user where m_id=%s and punish_flag=1",
                   uVar3);
  cVar2 = MySQL::exec(this_00,true);
  if ((cVar2 == '\x01') && (iVar4 = MySQL::get_n_rows(this_00), iVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}
```
