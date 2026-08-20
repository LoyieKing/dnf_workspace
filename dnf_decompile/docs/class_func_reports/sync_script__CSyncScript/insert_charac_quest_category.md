# insert_charac_quest_category

`_ZN11sync_script11CSyncScript28insert_charac_quest_categoryEjj`

`sync_script::CSyncScript::insert_charac_quest_category(unsigned int, unsigned int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086229d6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086229d6  _ZN11sync_script11CSyncScript28insert_charac_quest_categoryEjj
#           sync_script::CSyncScript::insert_charac_quest_category(unsigned int, unsigned int)
# range [0x086229d6, 0x08622a59]
086229d6 +0x00:  push   %ebp
086229d7 +0x01:  mov    %esp,%ebp
086229d9 +0x03:  sub    $0x28,%esp
086229dc +0x06:  mov    0x8(%ebp),%eax
086229df +0x09:  movzbl (%eax),%eax
086229e2 +0x0c:  xor    $0x1,%eax
086229e5 +0x0f:  test   %al,%al
086229e7 +0x11:  je     086229f0 <+0x1a>
086229e9 +0x13:  mov    $0x1,%eax
086229ee +0x18:  jmp    08622a57 <+0x81>
086229f0 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086229f5 +0x1f:  movl   $0x0,0x8(%esp)
086229fd +0x27:  movl   $0x2,0x4(%esp)
08622a05 +0x2f:  mov    %eax,(%esp)
08622a08 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622a0d +0x37:  mov    %eax,-0xc(%ebp)
08622a10 +0x3a:  mov    0x10(%ebp),%eax
08622a13 +0x3d:  mov    %eax,0xc(%esp)
08622a17 +0x41:  mov    0xc(%ebp),%eax
08622a1a +0x44:  mov    %eax,0x8(%esp)
08622a1e +0x48:  movl   $"inSert into charac_quest_ref(origin_idx, mapped_idx) values(%d, %d)",0x4(%esp)
08622a26 +0x50:  mov    -0xc(%ebp),%eax
08622a29 +0x53:  mov    %eax,(%esp)
08622a2c +0x56:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622a31 +0x5b:  movl   $0x1,0x4(%esp)
08622a39 +0x63:  mov    -0xc(%ebp),%eax
08622a3c +0x66:  mov    %eax,(%esp)
08622a3f +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622a44 +0x6e:  xor    $0x1,%eax
08622a47 +0x71:  test   %al,%al
08622a49 +0x73:  je     08622a52 <+0x7c>
08622a4b +0x75:  mov    $0x0,%eax
08622a50 +0x7a:  jmp    08622a57 <+0x81>
08622a52 +0x7c:  mov    $0x1,%eax
08622a57 +0x81:  leave
08622a58 +0x82:  ret
08622a59 +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_charac_quest_category @ 0x86229d6

/* sync_script::CSyncScript::insert_charac_quest_category(unsigned int, unsigned int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_charac_quest_category(CSyncScript *this,uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    MySQL::set_query(this_00,"inSert into charac_quest_ref(origin_idx, mapped_idx) values(%d, %d)",
                     param_1,param_2);
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
