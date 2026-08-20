# dispatch

`_ZN25DB_UpdateCreatureItemLock8dispatchEiiP6Stream`

`DB_UpdateCreatureItemLock::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateCreatureItemLock` | `0x08439aba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08439aba  _ZN25DB_UpdateCreatureItemLock8dispatchEiiP6Stream
#           DB_UpdateCreatureItemLock::dispatch(int, int, Stream*)
# range [0x08439aba, 0x08439b4d]
08439aba +0x00:  push   %ebp
08439abb +0x01:  mov    %esp,%ebp
08439abd +0x03:  sub    $0x28,%esp
08439ac0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08439ac5 +0x0b:  movl   $0x0,0x8(%esp)
08439acd +0x13:  movl   $0x3,0x4(%esp)
08439ad5 +0x1b:  mov    %eax,(%esp)
08439ad8 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08439add +0x23:  mov    %eax,-0xc(%ebp)
08439ae0 +0x26:  lea    -0x10(%ebp),%eax
08439ae3 +0x29:  mov    %eax,0x4(%esp)
08439ae7 +0x2d:  mov    0x14(%ebp),%eax
08439aea +0x30:  mov    %eax,(%esp)
08439aed +0x33:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08439af2 +0x38:  lea    -0x14(%ebp),%eax
08439af5 +0x3b:  mov    %eax,0x4(%esp)
08439af9 +0x3f:  mov    0x14(%ebp),%eax
08439afc +0x42:  mov    %eax,(%esp)
08439aff +0x45:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08439b04 +0x4a:  mov    -0x10(%ebp),%edx
08439b07 +0x4d:  mov    -0x14(%ebp),%eax
08439b0a +0x50:  mov    %edx,0xc(%esp)
08439b0e +0x54:  mov    %eax,0x8(%esp)
08439b12 +0x58:  movl   $"upDate creature_items set item_lock_key=%d where ui_id=%d",0x4(%esp)
08439b1a +0x60:  mov    -0xc(%ebp),%eax
08439b1d +0x63:  mov    %eax,(%esp)
08439b20 +0x66:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439b25 +0x6b:  movl   $0x1,0x4(%esp)
08439b2d +0x73:  mov    -0xc(%ebp),%eax
08439b30 +0x76:  mov    %eax,(%esp)
08439b33 +0x79:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439b38 +0x7e:  xor    $0x1,%eax
08439b3b +0x81:  test   %al,%al
08439b3d +0x83:  je     08439b46 <+0x8c>
08439b3f +0x85:  mov    $0x0,%eax
08439b44 +0x8a:  jmp    08439b4b <+0x91>
08439b46 +0x8c:  mov    $0x1,%eax
08439b4b +0x91:  leave
08439b4c +0x92:  ret
08439b4d +0x93:  nop
```

## 反编译 C

```c
// DB_UpdateCreatureItemLock::dispatch @ 0x8439aba

/* DB_UpdateCreatureItemLock::dispatch(int, int, Stream*) */

bool DB_UpdateCreatureItemLock::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_18;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  MySQL::set_query(local_10,"upDate creature_items set item_lock_key=%d where ui_id=%d",local_18,
                   local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
