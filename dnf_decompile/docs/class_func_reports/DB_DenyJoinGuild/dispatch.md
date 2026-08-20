# dispatch

`_ZN16DB_DenyJoinGuild8dispatchEiiP6Stream`

`DB_DenyJoinGuild::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_DenyJoinGuild` | `0x0843de6c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843de6c  _ZN16DB_DenyJoinGuild8dispatchEiiP6Stream
#           DB_DenyJoinGuild::dispatch(int, int, Stream*)
# range [0x0843de6c, 0x0843df0d]
0843de6c +0x00:  push   %ebp
0843de6d +0x01:  mov    %esp,%ebp
0843de6f +0x03:  sub    $0x28,%esp
0843de72 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843de77 +0x0b:  movl   $0x0,0x8(%esp)
0843de7f +0x13:  movl   $0x8,0x4(%esp)
0843de87 +0x1b:  mov    %eax,(%esp)
0843de8a +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843de8f +0x23:  mov    %eax,-0xc(%ebp)
0843de92 +0x26:  movl   $0x0,-0x10(%ebp)
0843de99 +0x2d:  movl   $0x0,-0x14(%ebp)
0843dea0 +0x34:  lea    -0x10(%ebp),%eax
0843dea3 +0x37:  mov    %eax,0x4(%esp)
0843dea7 +0x3b:  mov    0x14(%ebp),%eax
0843deaa +0x3e:  mov    %eax,(%esp)
0843dead +0x41:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843deb2 +0x46:  lea    -0x14(%ebp),%eax
0843deb5 +0x49:  mov    %eax,0x4(%esp)
0843deb9 +0x4d:  mov    0x14(%ebp),%eax
0843debc +0x50:  mov    %eax,(%esp)
0843debf +0x53:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843dec4 +0x58:  mov    -0x14(%ebp),%edx
0843dec7 +0x5b:  mov    -0x10(%ebp),%eax
0843deca +0x5e:  mov    %edx,0xc(%esp)
0843dece +0x62:  mov    %eax,0x8(%esp)
0843ded2 +0x66:  movl   $"deLete from guild_join_list where guild_id=%d and charac_no=%d",0x4(%esp)
0843deda +0x6e:  mov    -0xc(%ebp),%eax
0843dedd +0x71:  mov    %eax,(%esp)
0843dee0 +0x74:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843dee5 +0x79:  movl   $0x1,0x4(%esp)
0843deed +0x81:  mov    -0xc(%ebp),%eax
0843def0 +0x84:  mov    %eax,(%esp)
0843def3 +0x87:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843def8 +0x8c:  xor    $0x1,%eax
0843defb +0x8f:  test   %al,%al
0843defd +0x91:  je     0843df06 <+0x9a>
0843deff +0x93:  mov    $0x0,%eax
0843df04 +0x98:  jmp    0843df0b <+0x9f>
0843df06 +0x9a:  mov    $0x1,%eax
0843df0b +0x9f:  leave
0843df0c +0xa0:  ret
0843df0d +0xa1:  nop
```

## 反编译 C

```c
// DB_DenyJoinGuild::dispatch @ 0x843de6c

/* DB_DenyJoinGuild::dispatch(int, int, Stream*) */

bool DB_DenyJoinGuild::dispatch(int param_1,int param_2,Stream *param_3)

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
