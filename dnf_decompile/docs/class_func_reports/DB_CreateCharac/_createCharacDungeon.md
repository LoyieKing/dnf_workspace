# _createCharacDungeon

`_ZN15DB_CreateCharac20_createCharacDungeonEj`

`DB_CreateCharac::_createCharacDungeon(unsigned int)`

| 类 | 地址 |
|---|---|
| `DB_CreateCharac` | `0x084010fc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084010fc  _ZN15DB_CreateCharac20_createCharacDungeonEj
#           DB_CreateCharac::_createCharacDungeon(unsigned int)
# range [0x084010fc, 0x084011d3]
084010fc +0x00:  push   %ebp
084010fd +0x01:  mov    %esp,%ebp
084010ff +0x03:  sub    $0x28,%esp
08401102 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08401107 +0x0b:  movl   $0x0,0x8(%esp)
0840110f +0x13:  movl   $0x2,0x4(%esp)
08401117 +0x1b:  mov    %eax,(%esp)
0840111a +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0840111f +0x23:  mov    %eax,-0xc(%ebp)
08401122 +0x26:  movl   $0x0,0x4(%esp)
0840112a +0x2e:  mov    0xc(%ebp),%eax
0840112d +0x31:  mov    %eax,(%esp)
08401130 +0x34:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401135 +0x39:  mov    %eax,0x8(%esp)
08401139 +0x3d:  movl   $"seLect * from member_dungeon where m_id=%s",0x4(%esp)
08401141 +0x45:  mov    -0xc(%ebp),%eax
08401144 +0x48:  mov    %eax,(%esp)
08401147 +0x4b:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840114c +0x50:  movl   $0x1,0x4(%esp)
08401154 +0x58:  mov    -0xc(%ebp),%eax
08401157 +0x5b:  mov    %eax,(%esp)
0840115a +0x5e:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0840115f +0x63:  xor    $0x1,%eax
08401162 +0x66:  test   %al,%al
08401164 +0x68:  je     0840116d <+0x71>
08401166 +0x6a:  mov    $0x0,%eax
0840116b +0x6f:  jmp    084011d1 <+0xd5>
0840116d +0x71:  mov    -0xc(%ebp),%eax
08401170 +0x74:  mov    %eax,(%esp)
08401173 +0x77:  call   080e236c <_GLOBAL__I__ZN19CerashopAddRestrict7ManagerC2Ev+0x112>  ; global constructors keyed to CerashopAddRestrict::Manager::Manager()+0x112
08401178 +0x7c:  test   %eax,%eax
0840117a +0x7e:  sete   %al
0840117d +0x81:  test   %al,%al
0840117f +0x83:  je     084011ab <+0xaf>
08401181 +0x85:  movl   $0x0,0x4(%esp)
08401189 +0x8d:  mov    0xc(%ebp),%eax
0840118c +0x90:  mov    %eax,(%esp)
0840118f +0x93:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08401194 +0x98:  mov    %eax,0x8(%esp)
08401198 +0x9c:  movl   $"inSert into member_dungeon (m_id,dungeon) values (%s,'')",0x4(%esp)
084011a0 +0xa4:  mov    -0xc(%ebp),%eax
084011a3 +0xa7:  mov    %eax,(%esp)
084011a6 +0xaa:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084011ab +0xaf:  movl   $0x1,0x4(%esp)
084011b3 +0xb7:  mov    -0xc(%ebp),%eax
084011b6 +0xba:  mov    %eax,(%esp)
084011b9 +0xbd:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084011be +0xc2:  xor    $0x1,%eax
084011c1 +0xc5:  test   %al,%al
084011c3 +0xc7:  je     084011cc <+0xd0>
084011c5 +0xc9:  mov    $0x0,%eax
084011ca +0xce:  jmp    084011d1 <+0xd5>
084011cc +0xd0:  mov    $0x1,%eax
084011d1 +0xd5:  leave
084011d2 +0xd6:  ret
084011d3 +0xd7:  nop
```

## 反编译 C

```c
// DB_CreateCharac::_createCharacDungeon @ 0x84010fc

/* DB_CreateCharac::_createCharacDungeon(unsigned int) */

undefined4 __thiscall DB_CreateCharac::_createCharacDungeon(DB_CreateCharac *this,uint param_1)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  int iVar3;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(this_00,"seLect * from member_dungeon where m_id=%s",uVar2);
  cVar1 = MySQL::exec(this_00,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(this_00);
    if (iVar3 == 0) {
      uVar2 = NumberToString(param_1,0);
      MySQL::set_query(this_00,"inSert into member_dungeon (m_id,dungeon) values (%s,\'\')",uVar2);
    }
    cVar1 = MySQL::exec(this_00,true);
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
  return uVar2;
}
```
