# truncate_quest_category

`_ZN11sync_script11CSyncScript23truncate_quest_categoryEv`

`sync_script::CSyncScript::truncate_quest_category()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086225b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086225b6  _ZN11sync_script11CSyncScript23truncate_quest_categoryEv
#           sync_script::CSyncScript::truncate_quest_category()
# range [0x086225b6, 0x0862262b]
086225b6 +0x00:  push   %ebp
086225b7 +0x01:  mov    %esp,%ebp
086225b9 +0x03:  sub    $0x28,%esp
086225bc +0x06:  mov    0x8(%ebp),%eax
086225bf +0x09:  movzbl (%eax),%eax
086225c2 +0x0c:  xor    $0x1,%eax
086225c5 +0x0f:  test   %al,%al
086225c7 +0x11:  je     086225d0 <+0x1a>
086225c9 +0x13:  mov    $0x1,%eax
086225ce +0x18:  jmp    08622629 <+0x73>
086225d0 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086225d5 +0x1f:  movl   $0x0,0x8(%esp)
086225dd +0x27:  movl   $0x2,0x4(%esp)
086225e5 +0x2f:  mov    %eax,(%esp)
086225e8 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
086225ed +0x37:  mov    %eax,-0xc(%ebp)
086225f0 +0x3a:  movl   $"trUncate table quest_category",0x4(%esp)
086225f8 +0x42:  mov    -0xc(%ebp),%eax
086225fb +0x45:  mov    %eax,(%esp)
086225fe +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622603 +0x4d:  movl   $0x1,0x4(%esp)
0862260b +0x55:  mov    -0xc(%ebp),%eax
0862260e +0x58:  mov    %eax,(%esp)
08622611 +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622616 +0x60:  xor    $0x1,%eax
08622619 +0x63:  test   %al,%al
0862261b +0x65:  je     08622624 <+0x6e>
0862261d +0x67:  mov    $0x0,%eax
08622622 +0x6c:  jmp    08622629 <+0x73>
08622624 +0x6e:  mov    $0x1,%eax
08622629 +0x73:  leave
0862262a +0x74:  ret
0862262b +0x75:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_quest_category @ 0x86225b6

/* sync_script::CSyncScript::truncate_quest_category() */

undefined4 __thiscall sync_script::CSyncScript::truncate_quest_category(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"trUncate table quest_category");
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
