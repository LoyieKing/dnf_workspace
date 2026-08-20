# _SaveCharacStat

`_ZN22DB_SaveExpandEquipslot15_SaveCharacStatEjP27SIG_SAVE_EXPAND_CHARAC_STAT`

`DB_SaveExpandEquipslot::_SaveCharacStat(unsigned int, SIG_SAVE_EXPAND_CHARAC_STAT*)`

| 类 | 地址 |
|---|---|
| `DB_SaveExpandEquipslot` | `0x0843febe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843febe  _ZN22DB_SaveExpandEquipslot15_SaveCharacStatEjP27SIG_SAVE_EXPAND_CHARAC_STAT
#           DB_SaveExpandEquipslot::_SaveCharacStat(unsigned int, SIG_SAVE_EXPAND_CHARAC_STAT*)
# range [0x0843febe, 0x0843ff47]
0843febe +0x00:  push   %ebp
0843febf +0x01:  mov    %esp,%ebp
0843fec1 +0x03:  sub    $0x38,%esp
0843fec4 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843fec9 +0x0b:  movl   $0x0,0x8(%esp)
0843fed1 +0x13:  movl   $0x2,0x4(%esp)
0843fed9 +0x1b:  mov    %eax,(%esp)
0843fedc +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843fee1 +0x23:  mov    %eax,-0xc(%ebp)
0843fee4 +0x26:  mov    0x10(%ebp),%eax
0843fee7 +0x29:  movzbl 0x1(%eax),%eax
0843feeb +0x2d:  movsbl %al,%edx
0843feee +0x30:  mov    0x10(%ebp),%eax
0843fef1 +0x33:  movzbl (%eax),%eax
0843fef4 +0x36:  movsbl %al,%eax
0843fef7 +0x39:  mov    0xc(%ebp),%ecx
0843fefa +0x3c:  mov    %ecx,0x10(%esp)
0843fefe +0x40:  mov    %edx,0xc(%esp)
0843ff02 +0x44:  mov    %eax,0x8(%esp)
0843ff06 +0x48:  movl   $"upDate charac_stat set channel_equipslot_switch=%d, expand_equipslot_switch=%d where charac_no = %u",0x4(%esp)
0843ff0e +0x50:  mov    -0xc(%ebp),%eax
0843ff11 +0x53:  mov    %eax,(%esp)
0843ff14 +0x56:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843ff19 +0x5b:  movl   $0x1,0x4(%esp)
0843ff21 +0x63:  mov    -0xc(%ebp),%eax
0843ff24 +0x66:  mov    %eax,(%esp)
0843ff27 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843ff2c +0x6e:  mov    %al,-0xd(%ebp)
0843ff2f +0x71:  movzbl -0xd(%ebp),%eax
0843ff33 +0x75:  xor    $0x1,%eax
0843ff36 +0x78:  test   %al,%al
0843ff38 +0x7a:  je     0843ff41 <+0x83>
0843ff3a +0x7c:  mov    $0x0,%eax
0843ff3f +0x81:  jmp    0843ff46 <+0x88>
0843ff41 +0x83:  mov    $0x1,%eax
0843ff46 +0x88:  leave
0843ff47 +0x89:  ret
```

## 反编译 C

```c
// DB_SaveExpandEquipslot::_SaveCharacStat @ 0x843febe

/* DB_SaveExpandEquipslot::_SaveCharacStat(unsigned int, SIG_SAVE_EXPAND_CHARAC_STAT*) */

bool __thiscall
DB_SaveExpandEquipslot::_SaveCharacStat
          (DB_SaveExpandEquipslot *this,uint param_1,SIG_SAVE_EXPAND_CHARAC_STAT *param_2)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "upDate charac_stat set channel_equipslot_switch=%d, expand_equipslot_switch=%d where charac_no = %u"
                   ,(int)(char)*param_2,(int)(char)param_2[1],param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```
