# dispatch

`_ZN29DB_UpdateMemberPlayInfoPcRoom8dispatchEiiP6Stream`

`DB_UpdateMemberPlayInfoPcRoom::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateMemberPlayInfoPcRoom` | `0x08439be2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08439be2  _ZN29DB_UpdateMemberPlayInfoPcRoom8dispatchEiiP6Stream
#           DB_UpdateMemberPlayInfoPcRoom::dispatch(int, int, Stream*)
# range [0x08439be2, 0x08439c6b]
08439be2 +0x00:  push   %ebp
08439be3 +0x01:  mov    %esp,%ebp
08439be5 +0x03:  sub    $0x28,%esp
08439be8 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08439bed +0x0b:  movl   $0x0,0x8(%esp)
08439bf5 +0x13:  movl   $0x6,0x4(%esp)
08439bfd +0x1b:  mov    %eax,(%esp)
08439c00 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08439c05 +0x23:  mov    %eax,-0xc(%ebp)
08439c08 +0x26:  lea    -0x10(%ebp),%eax
08439c0b +0x29:  mov    %eax,0x4(%esp)
08439c0f +0x2d:  mov    0x14(%ebp),%eax
08439c12 +0x30:  mov    %eax,(%esp)
08439c15 +0x33:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08439c1a +0x38:  mov    -0x10(%ebp),%eax
08439c1d +0x3b:  movl   $0x0,0x4(%esp)
08439c25 +0x43:  mov    %eax,(%esp)
08439c28 +0x46:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08439c2d +0x4b:  mov    %eax,0x8(%esp)
08439c31 +0x4f:  movl   $"upDate member_play_info set pcbang_flag=1 where occ_date=now() and m_id=%s",0x4(%esp)
08439c39 +0x57:  mov    -0xc(%ebp),%eax
08439c3c +0x5a:  mov    %eax,(%esp)
08439c3f +0x5d:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08439c44 +0x62:  movl   $0x1,0x4(%esp)
08439c4c +0x6a:  mov    -0xc(%ebp),%eax
08439c4f +0x6d:  mov    %eax,(%esp)
08439c52 +0x70:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08439c57 +0x75:  xor    $0x1,%eax
08439c5a +0x78:  test   %al,%al
08439c5c +0x7a:  je     08439c65 <+0x83>
08439c5e +0x7c:  mov    $0x0,%eax
08439c63 +0x81:  jmp    08439c6a <+0x88>
08439c65 +0x83:  mov    $0x1,%eax
08439c6a +0x88:  leave
08439c6b +0x89:  ret
```

## 反编译 C

```c
// DB_UpdateMemberPlayInfoPcRoom::dispatch @ 0x8439be2

/* DB_UpdateMemberPlayInfoPcRoom::dispatch(int, int, Stream*) */

bool DB_UpdateMemberPlayInfoPcRoom::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar2 = NumberToString(local_14,0);
  MySQL::set_query(local_10,
                   "upDate member_play_info set pcbang_flag=1 where occ_date=now() and m_id=%s",
                   uVar2);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
