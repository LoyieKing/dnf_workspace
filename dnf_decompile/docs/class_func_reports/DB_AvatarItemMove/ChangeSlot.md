# ChangeSlot

`_ZN17DB_AvatarItemMove10ChangeSlotEiii`

`DB_AvatarItemMove::ChangeSlot(int, int, int)`

| 类 | 地址 |
|---|---|
| `DB_AvatarItemMove` | `0x08400432` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08400432  _ZN17DB_AvatarItemMove10ChangeSlotEiii
#           DB_AvatarItemMove::ChangeSlot(int, int, int)
# range [0x08400432, 0x084004bb]
08400432 +0x00:  push   %ebp
08400433 +0x01:  mov    %esp,%ebp
08400435 +0x03:  sub    $0x38,%esp
08400438 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0840043d +0x0b:  movl   $0x0,0x8(%esp)
08400445 +0x13:  movl   $0x3,0x4(%esp)
0840044d +0x1b:  mov    %eax,(%esp)
08400450 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08400455 +0x23:  mov    %eax,-0x10(%ebp)
08400458 +0x26:  cmpl   $0x0,0xc(%ebp)
0840045c +0x2a:  jns    08400465 <+0x33>
0840045e +0x2c:  mov    $0x1,%eax
08400463 +0x31:  jmp    084004ba <+0x88>
08400465 +0x33:  mov    0xc(%ebp),%eax
08400468 +0x36:  mov    %eax,0x10(%esp)
0840046c +0x3a:  mov    0x14(%ebp),%eax
0840046f +0x3d:  mov    %eax,0xc(%esp)
08400473 +0x41:  mov    0x10(%ebp),%eax
08400476 +0x44:  mov    %eax,0x8(%esp)
0840047a +0x48:  movl   $"upDate user_items set slot=%d,clear_avatar_id=%d where ui_id=%d",0x4(%esp)
08400482 +0x50:  mov    -0x10(%ebp),%eax
08400485 +0x53:  mov    %eax,(%esp)
08400488 +0x56:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0840048d +0x5b:  movl   $0x1,0x4(%esp)
08400495 +0x63:  mov    -0x10(%ebp),%eax
08400498 +0x66:  mov    %eax,(%esp)
0840049b +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084004a0 +0x6e:  mov    %al,-0x9(%ebp)
084004a3 +0x71:  movzbl -0x9(%ebp),%eax
084004a7 +0x75:  xor    $0x1,%eax
084004aa +0x78:  test   %al,%al
084004ac +0x7a:  je     084004b5 <+0x83>
084004ae +0x7c:  mov    $0x0,%eax
084004b3 +0x81:  jmp    084004ba <+0x88>
084004b5 +0x83:  mov    $0x1,%eax
084004ba +0x88:  leave
084004bb +0x89:  ret
```

## 反编译 C

```c
// DB_AvatarItemMove::ChangeSlot @ 0x8400432

/* DB_AvatarItemMove::ChangeSlot(int, int, int) */

undefined4 __thiscall
DB_AvatarItemMove::ChangeSlot(DB_AvatarItemMove *this,int param_1,int param_2,int param_3)

{
  char cVar1;
  MySQL *this_00;
  undefined4 uVar2;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (param_1 < 0) {
    uVar2 = 1;
  }
  else {
    MySQL::set_query(this_00,"upDate user_items set slot=%d,clear_avatar_id=%d where ui_id=%d",
                     param_2,param_3,param_1);
    cVar1 = MySQL::exec(this_00,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
