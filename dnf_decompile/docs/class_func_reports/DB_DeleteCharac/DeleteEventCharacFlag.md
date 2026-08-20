# DeleteEventCharacFlag

`_ZN15DB_DeleteCharac21DeleteEventCharacFlagEP17SIG_DELETE_CHARAC`

`DB_DeleteCharac::DeleteEventCharacFlag(SIG_DELETE_CHARAC*)`

| 类 | 地址 |
|---|---|
| `DB_DeleteCharac` | `0x084032aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084032aa  _ZN15DB_DeleteCharac21DeleteEventCharacFlagEP17SIG_DELETE_CHARAC
#           DB_DeleteCharac::DeleteEventCharacFlag(SIG_DELETE_CHARAC*)
# range [0x084032aa, 0x08403323]
084032aa +0x00:  push   %ebp
084032ab +0x01:  mov    %esp,%ebp
084032ad +0x03:  sub    $0x28,%esp
084032b0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084032b5 +0x0b:  movl   $0x0,0x8(%esp)
084032bd +0x13:  movl   $0x6,0x4(%esp)
084032c5 +0x1b:  mov    %eax,(%esp)
084032c8 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084032cd +0x23:  mov    %eax,-0xc(%ebp)
084032d0 +0x26:  mov    0xc(%ebp),%eax
084032d3 +0x29:  mov    (%eax),%eax
084032d5 +0x2b:  movl   $0x0,0x4(%esp)
084032dd +0x33:  mov    %eax,(%esp)
084032e0 +0x36:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084032e5 +0x3b:  mov    %eax,0x8(%esp)
084032e9 +0x3f:  movl   $"upDate member_login set event_charac_flag = 0 where m_id=%s",0x4(%esp)
084032f1 +0x47:  mov    -0xc(%ebp),%eax
084032f4 +0x4a:  mov    %eax,(%esp)
084032f7 +0x4d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084032fc +0x52:  movl   $0x1,0x4(%esp)
08403304 +0x5a:  mov    -0xc(%ebp),%eax
08403307 +0x5d:  mov    %eax,(%esp)
0840330a +0x60:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840330f +0x65:  xor    $0x1,%eax
08403312 +0x68:  test   %al,%al
08403314 +0x6a:  je     0840331d <+0x73>
08403316 +0x6c:  mov    $0x0,%eax
0840331b +0x71:  jmp    08403322 <+0x78>
0840331d +0x73:  mov    $0x1,%eax
08403322 +0x78:  leave
08403323 +0x79:  ret
```

## 反编译 C

```c
// DB_DeleteCharac::DeleteEventCharacFlag @ 0x84032aa

/* DB_DeleteCharac::DeleteEventCharacFlag(SIG_DELETE_CHARAC*) */

bool __thiscall
DB_DeleteCharac::DeleteEventCharacFlag(DB_DeleteCharac *this,SIG_DELETE_CHARAC *param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  uVar2 = NumberToString(*(uint *)param_1,0);
  MySQL::set_query(this_00,"upDate member_login set event_charac_flag = 0 where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```
