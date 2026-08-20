# dispatch

`_ZN18DB_CancelJoinGuild8dispatchEiiP6Stream`

`DB_CancelJoinGuild::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_CancelJoinGuild` | `0x0843d6ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843d6ea  _ZN18DB_CancelJoinGuild8dispatchEiiP6Stream
#           DB_CancelJoinGuild::dispatch(int, int, Stream*)
# range [0x0843d6ea, 0x0843d78b]
0843d6ea +0x00:  push   %ebp
0843d6eb +0x01:  mov    %esp,%ebp
0843d6ed +0x03:  sub    $0x28,%esp
0843d6f0 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843d6f5 +0x0b:  movl   $0x0,0x8(%esp)
0843d6fd +0x13:  movl   $0x8,0x4(%esp)
0843d705 +0x1b:  mov    %eax,(%esp)
0843d708 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843d70d +0x23:  mov    %eax,-0xc(%ebp)
0843d710 +0x26:  movl   $0x0,-0x10(%ebp)
0843d717 +0x2d:  movl   $0x0,-0x14(%ebp)
0843d71e +0x34:  lea    -0x10(%ebp),%eax
0843d721 +0x37:  mov    %eax,0x4(%esp)
0843d725 +0x3b:  mov    0x14(%ebp),%eax
0843d728 +0x3e:  mov    %eax,(%esp)
0843d72b +0x41:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843d730 +0x46:  lea    -0x14(%ebp),%eax
0843d733 +0x49:  mov    %eax,0x4(%esp)
0843d737 +0x4d:  mov    0x14(%ebp),%eax
0843d73a +0x50:  mov    %eax,(%esp)
0843d73d +0x53:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843d742 +0x58:  mov    -0x14(%ebp),%edx
0843d745 +0x5b:  mov    -0x10(%ebp),%eax
0843d748 +0x5e:  mov    %edx,0xc(%esp)
0843d74c +0x62:  mov    %eax,0x8(%esp)
0843d750 +0x66:  movl   $"deLete from guild_join_list where guild_id=%d and charac_no=%d",0x4(%esp)
0843d758 +0x6e:  mov    -0xc(%ebp),%eax
0843d75b +0x71:  mov    %eax,(%esp)
0843d75e +0x74:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843d763 +0x79:  movl   $0x1,0x4(%esp)
0843d76b +0x81:  mov    -0xc(%ebp),%eax
0843d76e +0x84:  mov    %eax,(%esp)
0843d771 +0x87:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843d776 +0x8c:  xor    $0x1,%eax
0843d779 +0x8f:  test   %al,%al
0843d77b +0x91:  je     0843d784 <+0x9a>
0843d77d +0x93:  mov    $0x0,%eax
0843d782 +0x98:  jmp    0843d789 <+0x9f>
0843d784 +0x9a:  mov    $0x1,%eax
0843d789 +0x9f:  leave
0843d78a +0xa0:  ret
0843d78b +0xa1:  nop
```

## 反编译 C

```c
// DB_CancelJoinGuild::dispatch @ 0x843d6ea

/* DB_CancelJoinGuild::dispatch(int, int, Stream*) */

bool DB_CancelJoinGuild::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
  local_14 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  MySQL::set_query(local_10,"deLete from guild_join_list where guild_id=%d and charac_no=%d",
                   local_14,local_18);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
