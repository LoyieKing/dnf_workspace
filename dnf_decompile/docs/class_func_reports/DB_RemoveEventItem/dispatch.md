# dispatch

`_ZN18DB_RemoveEventItem8dispatchEiiP6Stream`

`DB_RemoveEventItem::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_RemoveEventItem` | `0x0841ab30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841ab30  _ZN18DB_RemoveEventItem8dispatchEiiP6Stream
#           DB_RemoveEventItem::dispatch(int, int, Stream*)
# range [0x0841ab30, 0x0841abbb]
0841ab30 +0x00:  push   %ebp
0841ab31 +0x01:  mov    %esp,%ebp
0841ab33 +0x03:  sub    $0x28,%esp
0841ab36 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841ab3b +0x0b:  movl   $0x0,0x8(%esp)
0841ab43 +0x13:  movl   $0x3,0x4(%esp)
0841ab4b +0x1b:  mov    %eax,(%esp)
0841ab4e +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841ab53 +0x23:  mov    %eax,-0x14(%ebp)
0841ab56 +0x26:  mov    0x14(%ebp),%eax
0841ab59 +0x29:  mov    %eax,(%esp)
0841ab5c +0x2c:  call   08451070 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x3c86>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x3c86
0841ab61 +0x31:  mov    %eax,-0x10(%ebp)
0841ab64 +0x34:  movl   $0x0,-0xc(%ebp)
0841ab6b +0x3b:  jmp    0841aba5 <+0x75>
0841ab6d +0x3d:  mov    -0xc(%ebp),%edx
0841ab70 +0x40:  mov    -0x10(%ebp),%eax
0841ab73 +0x43:  mov    0x4(%eax,%edx,4),%eax
0841ab77 +0x47:  mov    %eax,0x8(%esp)
0841ab7b +0x4b:  movl   $"upDate charac_event_items set delete_flag=1,delete_time=now() where id=%u",0x4(%esp)
0841ab83 +0x53:  mov    -0x14(%ebp),%eax
0841ab86 +0x56:  mov    %eax,(%esp)
0841ab89 +0x59:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841ab8e +0x5e:  movl   $0x1,0x4(%esp)
0841ab96 +0x66:  mov    -0x14(%ebp),%eax
0841ab99 +0x69:  mov    %eax,(%esp)
0841ab9c +0x6c:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841aba1 +0x71:  addl   $0x1,-0xc(%ebp)
0841aba5 +0x75:  mov    -0x10(%ebp),%eax
0841aba8 +0x78:  mov    (%eax),%eax
0841abaa +0x7a:  cmp    -0xc(%ebp),%eax
0841abad +0x7d:  setg   %al
0841abb0 +0x80:  test   %al,%al
0841abb2 +0x82:  jne    0841ab6d <+0x3d>
0841abb4 +0x84:  mov    $0x1,%eax
0841abb9 +0x89:  leave
0841abba +0x8a:  ret
0841abbb +0x8b:  nop
```

## 反编译 C

```c
// DB_RemoveEventItem::dispatch @ 0x841ab30

/* DB_RemoveEventItem::dispatch(int, int, Stream*) */

undefined4 DB_RemoveEventItem::dispatch(int param_1,int param_2,Stream *param_3)

{
  MySQL *this;
  SIG_REMOVE_EVENTITEM *pSVar1;
  Stream *in_stack_00000010;
  int local_10;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar1 = Stream::GetOutBuffer<SIG_REMOVE_EVENTITEM>(in_stack_00000010);
  for (local_10 = 0; local_10 < *(int *)pSVar1; local_10 = local_10 + 1) {
    MySQL::set_query(this,
                     "upDate charac_event_items set delete_flag=1,delete_time=now() where id=%u",
                     *(undefined4 *)(pSVar1 + local_10 * 4 + 4));
    MySQL::exec(this,true);
  }
  return 1;
}
```
