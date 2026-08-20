# CreatePvP

`_ZN15DB_CreateCharac9CreatePvPEj`

`DB_CreateCharac::CreatePvP(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084026ec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084026ec  _ZN15DB_CreateCharac9CreatePvPEj
#           DB_CreateCharac::CreatePvP(unsigned int)
# range [0x084026ec, 0x0840275b]
084026ec +0x00:  push   %ebp
084026ed +0x01:  mov    %esp,%ebp
084026ef +0x03:  sub    $0x28,%esp
084026f2 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084026f7 +0x0b:  movl   $0x0,0x8(%esp)
084026ff +0x13:  movl   $0x2,0x4(%esp)
08402707 +0x1b:  mov    %eax,(%esp)
0840270a +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840270f +0x23:  mov    %eax,-0xc(%ebp)
08402712 +0x26:  mov    0xc(%ebp),%eax
08402715 +0x29:  mov    %eax,0x8(%esp)
08402719 +0x2d:  movl   $"inSert into pvp_result (charac_no) values(%u)",0x4(%esp)
08402721 +0x35:  mov    -0xc(%ebp),%eax
08402724 +0x38:  mov    %eax,(%esp)
08402727 +0x3b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840272c +0x40:  movl   $0x1,0x4(%esp)
08402734 +0x48:  mov    -0xc(%ebp),%eax
08402737 +0x4b:  mov    %eax,(%esp)
0840273a +0x4e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840273f +0x53:  mov    %al,-0xd(%ebp)
08402742 +0x56:  movzbl -0xd(%ebp),%eax
08402746 +0x5a:  xor    $0x1,%eax
08402749 +0x5d:  test   %al,%al
0840274b +0x5f:  je     08402754 <+0x68>
0840274d +0x61:  mov    $0x0,%eax
08402752 +0x66:  jmp    08402759 <+0x6d>
08402754 +0x68:  mov    $0x1,%eax
08402759 +0x6d:  leave
0840275a +0x6e:  ret
0840275b +0x6f:  nop
```

## 反编译 C

```c
// DB_CreateCharac::CreatePvP @ 0x84026ec

/* DB_CreateCharac::CreatePvP(unsigned int) */

bool __thiscall DB_CreateCharac::CreatePvP(DB_CreateCharac *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"inSert into pvp_result (charac_no) values(%u)",param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```
