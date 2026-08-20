# _createCharacQuest

`_ZN15DB_CreateCharac18_createCharacQuestEj`

`DB_CreateCharac::_createCharacQuest(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x08401094` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08401094  _ZN15DB_CreateCharac18_createCharacQuestEj
#           DB_CreateCharac::_createCharacQuest(unsigned int)
# range [0x08401094, 0x084010fb]
08401094 +0x00:  push   %ebp
08401095 +0x01:  mov    %esp,%ebp
08401097 +0x03:  sub    $0x28,%esp
0840109a +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840109f +0x0b:  movl   $0x0,0x8(%esp)
084010a7 +0x13:  movl   $0x2,0x4(%esp)
084010af +0x1b:  mov    %eax,(%esp)
084010b2 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084010b7 +0x23:  mov    %eax,-0xc(%ebp)
084010ba +0x26:  mov    0xc(%ebp),%eax
084010bd +0x29:  mov    %eax,0x8(%esp)
084010c1 +0x2d:  movl   $"inSert into new_charac_quest(charac_no, clear_quest) values(%u,'')",0x4(%esp)
084010c9 +0x35:  mov    -0xc(%ebp),%eax
084010cc +0x38:  mov    %eax,(%esp)
084010cf +0x3b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084010d4 +0x40:  movl   $0x1,0x4(%esp)
084010dc +0x48:  mov    -0xc(%ebp),%eax
084010df +0x4b:  mov    %eax,(%esp)
084010e2 +0x4e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084010e7 +0x53:  xor    $0x1,%eax
084010ea +0x56:  test   %al,%al
084010ec +0x58:  je     084010f5 <+0x61>
084010ee +0x5a:  mov    $0x0,%eax
084010f3 +0x5f:  jmp    084010fa <+0x66>
084010f5 +0x61:  mov    $0x1,%eax
084010fa +0x66:  leave
084010fb +0x67:  ret
```

## 反编译 C

```c
// DB_CreateCharac::_createCharacQuest @ 0x8401094

/* DB_CreateCharac::_createCharacQuest(unsigned int) */

bool __thiscall DB_CreateCharac::_createCharacQuest(DB_CreateCharac *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"inSert into new_charac_quest(charac_no, clear_quest) values(%u,\'\')",
                   param_1);
  cVar1 = MySQL::exec(this_00,true);
  return cVar1 == '\x01';
}
```
