# trancate_skill_info

`_ZN11sync_script11CSyncScript19trancate_skill_infoEv`

`sync_script::CSyncScript::trancate_skill_info()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622d92` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622d92  _ZN11sync_script11CSyncScript19trancate_skill_infoEv
#           sync_script::CSyncScript::trancate_skill_info()
# range [0x08622d92, 0x08622e07]
08622d92 +0x00:  push   %ebp
08622d93 +0x01:  mov    %esp,%ebp
08622d95 +0x03:  sub    $0x28,%esp
08622d98 +0x06:  mov    0x8(%ebp),%eax
08622d9b +0x09:  movzbl (%eax),%eax
08622d9e +0x0c:  xor    $0x1,%eax
08622da1 +0x0f:  test   %al,%al
08622da3 +0x11:  je     08622dac <+0x1a>
08622da5 +0x13:  mov    $0x1,%eax
08622daa +0x18:  jmp    08622e05 <+0x73>
08622dac +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622db1 +0x1f:  movl   $0x0,0x8(%esp)
08622db9 +0x27:  movl   $0x5,0x4(%esp)
08622dc1 +0x2f:  mov    %eax,(%esp)
08622dc4 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622dc9 +0x37:  mov    %eax,-0xc(%ebp)
08622dcc +0x3a:  movl   $"trUncate table skill_info; ",0x4(%esp)
08622dd4 +0x42:  mov    -0xc(%ebp),%eax
08622dd7 +0x45:  mov    %eax,(%esp)
08622dda +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622ddf +0x4d:  movl   $0x1,0x4(%esp)
08622de7 +0x55:  mov    -0xc(%ebp),%eax
08622dea +0x58:  mov    %eax,(%esp)
08622ded +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622df2 +0x60:  xor    $0x1,%eax
08622df5 +0x63:  test   %al,%al
08622df7 +0x65:  je     08622e00 <+0x6e>
08622df9 +0x67:  mov    $0x0,%eax
08622dfe +0x6c:  jmp    08622e05 <+0x73>
08622e00 +0x6e:  mov    $0x1,%eax
08622e05 +0x73:  leave
08622e06 +0x74:  ret
08622e07 +0x75:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::trancate_skill_info @ 0x8622d92

/* sync_script::CSyncScript::trancate_skill_info() */

undefined4 __thiscall sync_script::CSyncScript::trancate_skill_info(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table skill_info; ");
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
