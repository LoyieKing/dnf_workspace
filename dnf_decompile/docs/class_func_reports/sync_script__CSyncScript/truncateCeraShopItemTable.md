# truncateCeraShopItemTable

`_ZN11sync_script11CSyncScript25truncateCeraShopItemTableEv`

`sync_script::CSyncScript::truncateCeraShopItemTable()`

| 类 | 地址 |
|---|---|
| `sync_script::CSyncScript` | `0x08622a5a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08622a5a  _ZN11sync_script11CSyncScript25truncateCeraShopItemTableEv
#           sync_script::CSyncScript::truncateCeraShopItemTable()
# range [0x08622a5a, 0x08622abb]
08622a5a +0x00:  push   %ebp
08622a5b +0x01:  mov    %esp,%ebp
08622a5d +0x03:  sub    $0x28,%esp
08622a60 +0x06:  mov    0x8(%ebp),%eax
08622a63 +0x09:  movzbl (%eax),%eax
08622a66 +0x0c:  xor    $0x1,%eax
08622a69 +0x0f:  test   %al,%al
08622a6b +0x11:  je     08622a74 <+0x1a>
08622a6d +0x13:  mov    $0x1,%eax
08622a72 +0x18:  jmp    08622aba <+0x60>
08622a74 +0x1a:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08622a79 +0x1f:  movl   $0x0,0x8(%esp)
08622a81 +0x27:  movl   $0x5,0x4(%esp)
08622a89 +0x2f:  mov    %eax,(%esp)
08622a8c +0x32:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08622a91 +0x37:  mov    %eax,-0xc(%ebp)
08622a94 +0x3a:  movl   $"trUncate table dnf_item_price; ",0x4(%esp)
08622a9c +0x42:  mov    -0xc(%ebp),%eax
08622a9f +0x45:  mov    %eax,(%esp)
08622aa2 +0x48:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08622aa7 +0x4d:  movl   $0x1,0x4(%esp)
08622aaf +0x55:  mov    -0xc(%ebp),%eax
08622ab2 +0x58:  mov    %eax,(%esp)
08622ab5 +0x5b:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08622aba +0x60:  leave
08622abb +0x61:  ret
```

## 反编译 C

```c
// sync_script::CSyncScript::truncateCeraShopItemTable @ 0x8622a5a

/* sync_script::CSyncScript::truncateCeraShopItemTable() */

undefined4 __thiscall sync_script::CSyncScript::truncateCeraShopItemTable(CSyncScript *this)

{
  undefined4 uVar1;
  MySQL *this_00;
  
  if (*this == (CSyncScript)0x1) {
    this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,5,0);
    MySQL::set_query(this_00,"trUncate table dnf_item_price; ");
    uVar1 = MySQL::exec(this_00,true);
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
```
