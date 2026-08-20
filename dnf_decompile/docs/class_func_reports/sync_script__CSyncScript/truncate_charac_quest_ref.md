# truncate_charac_quest_ref

`_ZN11sync_script11CSyncScript25truncate_charac_quest_refEv`

`sync_script::CSyncScript::truncate_charac_quest_ref()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622960` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622960  _ZN11sync_script11CSyncScript25truncate_charac_quest_refEv
#           sync_script::CSyncScript::truncate_charac_quest_ref()
# range [0x08622960, 0x086229d5]
08622960 +0x00:  push   %ebp
08622961 +0x01:  mov    %esp,%ebp
08622963 +0x03:  sub    $0x28,%esp
08622966 +0x06:  mov    0x8(%ebp),%eax
08622969 +0x09:  movzbl (%eax),%eax
0862296c +0x0c:  xor    $0x1,%eax
0862296f +0x0f:  test   %al,%al
08622971 +0x11:  je     0862297a <+0x1a>
08622973 +0x13:  mov    $0x1,%eax
08622978 +0x18:  jmp    086229d3 <+0x73>
0862297a +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862297f +0x1f:  movl   $0x0,0x8(%esp)
08622987 +0x27:  movl   $0x2,0x4(%esp)
0862298f +0x2f:  mov    %eax,(%esp)
08622992 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622997 +0x37:  mov    %eax,-0xc(%ebp)
0862299a +0x3a:  movl   $"trUncate table charac_quest_ref; ",0x4(%esp)
086229a2 +0x42:  mov    -0xc(%ebp),%eax
086229a5 +0x45:  mov    %eax,(%esp)
086229a8 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
086229ad +0x4d:  movl   $0x1,0x4(%esp)
086229b5 +0x55:  mov    -0xc(%ebp),%eax
086229b8 +0x58:  mov    %eax,(%esp)
086229bb +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
086229c0 +0x60:  xor    $0x1,%eax
086229c3 +0x63:  test   %al,%al
086229c5 +0x65:  je     086229ce <+0x6e>
086229c7 +0x67:  mov    $0x0,%eax
086229cc +0x6c:  jmp    086229d3 <+0x73>
086229ce +0x6e:  mov    $0x1,%eax
086229d3 +0x73:  leave
086229d4 +0x74:  ret
086229d5 +0x75:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_charac_quest_ref @ 0x8622960

/* sync_script::CSyncScript::truncate_charac_quest_ref() */

undefined4 __thiscall sync_script::CSyncScript::truncate_charac_quest_ref(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"trUncate table charac_quest_ref; ");
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
