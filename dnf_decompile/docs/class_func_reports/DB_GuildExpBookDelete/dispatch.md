# dispatch

`_ZN21DB_GuildExpBookDelete8dispatchEiiP6Stream`

`DB_GuildExpBookDelete::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_GuildExpBookDelete` | `0x0843c35a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0843c35a  _ZN21DB_GuildExpBookDelete8dispatchEiiP6Stream
#           DB_GuildExpBookDelete::dispatch(int, int, Stream*)
# range [0x0843c35a, 0x0843c407]
0843c35a +0x00:  push   %ebp
0843c35b +0x01:  mov    %esp,%ebp
0843c35d +0x03:  sub    $0x28,%esp
0843c360 +0x06:  movl   $0x0,-0x10(%ebp)
0843c367 +0x0d:  movl   $0x0,-0x14(%ebp)
0843c36e +0x14:  movl   $0x0,-0x18(%ebp)
0843c375 +0x1b:  lea    -0x10(%ebp),%eax
0843c378 +0x1e:  mov    %eax,0x4(%esp)
0843c37c +0x22:  mov    0x14(%ebp),%eax
0843c37f +0x25:  mov    %eax,(%esp)
0843c382 +0x28:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0843c387 +0x2d:  lea    -0x14(%ebp),%eax
0843c38a +0x30:  mov    %eax,0x4(%esp)
0843c38e +0x34:  mov    0x14(%ebp),%eax
0843c391 +0x37:  mov    %eax,(%esp)
0843c394 +0x3a:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843c399 +0x3f:  lea    -0x18(%ebp),%eax
0843c39c +0x42:  mov    %eax,0x4(%esp)
0843c3a0 +0x46:  mov    0x14(%ebp),%eax
0843c3a3 +0x49:  mov    %eax,(%esp)
0843c3a6 +0x4c:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
0843c3ab +0x51:  mov    -0x18(%ebp),%eax
0843c3ae +0x54:  mov    %eax,%edx
0843c3b0 +0x56:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0843c3b5 +0x5b:  mov    %edx,0x8(%esp)
0843c3b9 +0x5f:  movl   $0x2,0x4(%esp)
0843c3c1 +0x67:  mov    %eax,(%esp)
0843c3c4 +0x6a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0843c3c9 +0x6f:  mov    %eax,-0xc(%ebp)
0843c3cc +0x72:  mov    -0x10(%ebp),%edx
0843c3cf +0x75:  mov    -0x14(%ebp),%eax
0843c3d2 +0x78:  mov    %edx,0xc(%esp)
0843c3d6 +0x7c:  mov    %eax,0x8(%esp)
0843c3da +0x80:  movl   $"upDate charac_info set guild_secede = %d where charac_no = %u",0x4(%esp)
0843c3e2 +0x88:  mov    -0xc(%ebp),%eax
0843c3e5 +0x8b:  mov    %eax,(%esp)
0843c3e8 +0x8e:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0843c3ed +0x93:  movl   $0x1,0x4(%esp)
0843c3f5 +0x9b:  mov    -0xc(%ebp),%eax
0843c3f8 +0x9e:  mov    %eax,(%esp)
0843c3fb +0xa1:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0843c400 +0xa6:  mov    $0x1,%eax
0843c405 +0xab:  leave
0843c406 +0xac:  ret
0843c407 +0xad:  nop
```

## 反编译 C

```c
// DB_GuildExpBookDelete::dispatch @ 0x843c35a

/* DB_GuildExpBookDelete::dispatch(int, int, Stream*) */

undefined4 DB_GuildExpBookDelete::dispatch(int param_1,int param_2,Stream *param_3)

{
  Stream *in_stack_00000010;
  int local_1c;
  int local_18;
  uint local_14;
  MySQL *local_10;
  
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,local_1c);
  MySQL::set_query(local_10,"upDate charac_info set guild_secede = %d where charac_no = %u",local_18
                   ,local_14);
  MySQL::exec(local_10,true);
  return 1;
}
```
