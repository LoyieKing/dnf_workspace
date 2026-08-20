# truncate_skill_index

`_ZN11sync_script11CSyncScript20truncate_skill_indexEv`

`sync_script::CSyncScript::truncate_skill_index()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x086227f0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086227f0  _ZN11sync_script11CSyncScript20truncate_skill_indexEv
#           sync_script::CSyncScript::truncate_skill_index()
# range [0x086227f0, 0x08622865]
086227f0 +0x00:  push   %ebp
086227f1 +0x01:  mov    %esp,%ebp
086227f3 +0x03:  sub    $0x28,%esp
086227f6 +0x06:  mov    0x8(%ebp),%eax
086227f9 +0x09:  movzbl (%eax),%eax
086227fc +0x0c:  xor    $0x1,%eax
086227ff +0x0f:  test   %al,%al
08622801 +0x11:  je     0862280a <+0x1a>
08622803 +0x13:  mov    $0x1,%eax
08622808 +0x18:  jmp    08622863 <+0x73>
0862280a +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0862280f +0x1f:  movl   $0x0,0x8(%esp)
08622817 +0x27:  movl   $0x3,0x4(%esp)
0862281f +0x2f:  mov    %eax,(%esp)
08622822 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622827 +0x37:  mov    %eax,-0xc(%ebp)
0862282a +0x3a:  movl   $"trUncate table skill_index",0x4(%esp)
08622832 +0x42:  mov    -0xc(%ebp),%eax
08622835 +0x45:  mov    %eax,(%esp)
08622838 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0862283d +0x4d:  movl   $0x1,0x4(%esp)
08622845 +0x55:  mov    -0xc(%ebp),%eax
08622848 +0x58:  mov    %eax,(%esp)
0862284b +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622850 +0x60:  xor    $0x1,%eax
08622853 +0x63:  test   %al,%al
08622855 +0x65:  je     0862285e <+0x6e>
08622857 +0x67:  mov    $0x0,%eax
0862285c +0x6c:  jmp    08622863 <+0x73>
0862285e +0x6e:  mov    $0x1,%eax
08622863 +0x73:  leave
08622864 +0x74:  ret
08622865 +0x75:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_skill_index @ 0x86227f0

/* sync_script::CSyncScript::truncate_skill_index() */

undefined4 __thiscall sync_script::CSyncScript::truncate_skill_index(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
    MySQL::set_query(this_00,"trUncate table skill_index");
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
