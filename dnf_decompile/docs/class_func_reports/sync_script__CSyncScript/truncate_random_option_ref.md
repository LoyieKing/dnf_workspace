# truncate_random_option_ref

`_ZN11sync_script11CSyncScript26truncate_random_option_refEv`

`sync_script::CSyncScript::truncate_random_option_ref()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08625e1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08625e1e  _ZN11sync_script11CSyncScript26truncate_random_option_refEv
#           sync_script::CSyncScript::truncate_random_option_ref()
# range [0x08625e1e, 0x08625ea1]
08625e1e +0x00:  push   %ebp
08625e1f +0x01:  mov    %esp,%ebp
08625e21 +0x03:  sub    $0x28,%esp
08625e24 +0x06:  mov    0x8(%ebp),%eax
08625e27 +0x09:  movzbl (%eax),%eax
08625e2a +0x0c:  xor    $0x1,%eax
08625e2d +0x0f:  test   %al,%al
08625e2f +0x11:  je     08625e38 <+0x1a>
08625e31 +0x13:  mov    $0x1,%eax
08625e36 +0x18:  jmp    08625e9f <+0x81>
08625e38 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08625e3d +0x1f:  movl   $0x0,0x8(%esp)
08625e45 +0x27:  movl   $0x5,0x4(%esp)
08625e4d +0x2f:  mov    %eax,(%esp)
08625e50 +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08625e55 +0x37:  mov    %eax,-0xc(%ebp)
08625e58 +0x3a:  movl   $"trUncate table random_option_ref",0x4(%esp)
08625e60 +0x42:  mov    -0xc(%ebp),%eax
08625e63 +0x45:  mov    %eax,(%esp)
08625e66 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08625e6b +0x4d:  xor    $0x1,%eax
08625e6e +0x50:  test   %al,%al
08625e70 +0x52:  je     08625e79 <+0x5b>
08625e72 +0x54:  mov    $0x0,%eax
08625e77 +0x59:  jmp    08625e9f <+0x81>
08625e79 +0x5b:  movl   $0x1,0x4(%esp)
08625e81 +0x63:  mov    -0xc(%ebp),%eax
08625e84 +0x66:  mov    %eax,(%esp)
08625e87 +0x69:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08625e8c +0x6e:  xor    $0x1,%eax
08625e8f +0x71:  test   %al,%al
08625e91 +0x73:  je     08625e9a <+0x7c>
08625e93 +0x75:  mov    $0x0,%eax
08625e98 +0x7a:  jmp    08625e9f <+0x81>
08625e9a +0x7c:  mov    $0x1,%eax
08625e9f +0x81:  leave
08625ea0 +0x82:  ret
08625ea1 +0x83:  nop
```

## 反编译 C

```c
// sync_script::CSyncScript::truncate_random_option_ref @ 0x8625e1e

/* sync_script::CSyncScript::truncate_random_option_ref() */

undefined4 __thiscall sync_script::CSyncScript::truncate_random_option_ref(CSyncScript *this)

{
  char cVar1;
  undefined4 uVar2;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    cVar1 = MySQL::set_query(this_00,"trUncate table random_option_ref");
    if (cVar1 == '\x01') {
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
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}
```
