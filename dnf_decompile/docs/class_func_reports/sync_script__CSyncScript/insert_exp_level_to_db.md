# insert_exp_level_to_db

`_ZN11sync_script11CSyncScript22insert_exp_level_to_dbEji`

`sync_script::CSyncScript::insert_exp_level_to_db(unsigned int, int)`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086228dc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086228dc  _ZN11sync_script11CSyncScript22insert_exp_level_to_dbEji
#           sync_script::CSyncScript::insert_exp_level_to_db(unsigned int, int)
# range [0x086228dc, 0x0862295f]
086228dc +0x00:  push   %ebp
086228dd +0x01:  mov    %esp,%ebp
086228df +0x03:  sub    $0x28,%esp
086228e2 +0x06:  mov    0x8(%ebp),%eax
086228e5 +0x09:  movzbl (%eax),%eax
086228e8 +0x0c:  xor    $0x1,%eax
086228eb +0x0f:  test   %al,%al
086228ed +0x11:  je     086228f6 <+0x1a>
086228ef +0x13:  mov    $0x1,%eax
086228f4 +0x18:  jmp    0862295d <+0x81>
086228f6 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
086228fb +0x1f:  movl   $0x0,0x8(%esp)
08622903 +0x27:  movl   $0x5,0x4(%esp)
0862290b +0x2f:  mov    %eax,(%esp)
0862290e +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622913 +0x37:  mov    %eax,-0xc(%ebp)
08622916 +0x3a:  mov    0x10(%ebp),%eax
08622919 +0x3d:  mov    %eax,0xc(%esp)
0862291d +0x41:  mov    0xc(%ebp),%eax
08622920 +0x44:  mov    %eax,0x8(%esp)
08622924 +0x48:  movl   $"inSert into exp_level_ref(exp, lev) values(%u, %d)",0x4(%esp)
0862292c +0x50:  mov    -0xc(%ebp),%eax
0862292f +0x53:  mov    %eax,(%esp)
08622932 +0x56:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622937 +0x5b:  movl   $0x1,0x4(%esp)
0862293f +0x63:  mov    -0xc(%ebp),%eax
08622942 +0x66:  mov    %eax,(%esp)
08622945 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0862294a +0x6e:  xor    $0x1,%eax
0862294d +0x71:  test   %al,%al
0862294f +0x73:  je     08622958 <+0x7c>
08622951 +0x75:  mov    $0x0,%eax
08622956 +0x7a:  jmp    0862295d <+0x81>
08622958 +0x7c:  mov    $0x1,%eax
0862295d +0x81:  leave
0862295e +0x82:  ret
0862295f +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::insert_exp_level_to_db @ 0x86228dc

/* sync_script::CSyncScript::insert_exp_level_to_db(unsigned int, int) */

undefined4 __thiscall
sync_script::CSyncScript::insert_exp_level_to_db(CSyncScript *this,uint param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"inSert into exp_level_ref(exp, lev) values(%u, %d)",param_1,param_2);
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
