# _createCharacNPCRelationship

`_ZN15DB_CreateCharac28_createCharacNPCRelationshipEj`

`DB_CreateCharac::_createCharacNPCRelationship(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x0840103e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0840103e  _ZN15DB_CreateCharac28_createCharacNPCRelationshipEj
#           DB_CreateCharac::_createCharacNPCRelationship(unsigned int)
# range [0x0840103e, 0x08401093]
0840103e +0x00:  push   %ebp
0840103f +0x01:  mov    %esp,%ebp
08401041 +0x03:  sub    $0x28,%esp
08401044 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08401049 +0x0b:  movl   $0x0,0x8(%esp)
08401051 +0x13:  movl   $0x2,0x4(%esp)
08401059 +0x1b:  mov    %eax,(%esp)
0840105c +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08401061 +0x23:  mov    %eax,-0xc(%ebp)
08401064 +0x26:  mov    0xc(%ebp),%eax
08401067 +0x29:  mov    %eax,0x8(%esp)
0840106b +0x2d:  movl   $"inSert into charac_npc(charac_no,npc_cnt,npc_data) values(%d,0,'')",0x4(%esp)
08401073 +0x35:  mov    -0xc(%ebp),%eax
08401076 +0x38:  mov    %eax,(%esp)
08401079 +0x3b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840107e +0x40:  movl   $0x1,0x4(%esp)
08401086 +0x48:  mov    -0xc(%ebp),%eax
08401089 +0x4b:  mov    %eax,(%esp)
0840108c +0x4e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08401091 +0x53:  leave
08401092 +0x54:  ret
08401093 +0x55:  nop
```

## 反编译 C

```c
// DB_CreateCharac::_createCharacNPCRelationship @ 0x840103e

/* DB_CreateCharac::_createCharacNPCRelationship(unsigned int) */

void __thiscall DB_CreateCharac::_createCharacNPCRelationship(DB_CreateCharac *this,uint param_1)

{
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,"inSert into charac_npc(charac_no,npc_cnt,npc_data) values(%d,0,\'\')",
                   param_1);
  MySQL::exec(this_00,true);
  return;
}
```
