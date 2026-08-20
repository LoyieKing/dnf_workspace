# dispatch

`_ZN25DB_EventGrowthWeaponReset8dispatchEiiP6Stream`

`DB_EventGrowthWeaponReset::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventGrowthWeaponReset` | `0x084498fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084498fe  _ZN25DB_EventGrowthWeaponReset8dispatchEiiP6Stream
#           DB_EventGrowthWeaponReset::dispatch(int, int, Stream*)
# range [0x084498fe, 0x0844997f]
084498fe +0x00:  push   %ebp
084498ff +0x01:  mov    %esp,%ebp
08449901 +0x03:  sub    $0x28,%esp
08449904 +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08449909 +0x0b:  movl   $0x0,0x8(%esp)
08449911 +0x13:  movl   $0x9,0x4(%esp)
08449919 +0x1b:  mov    %eax,(%esp)
0844991c +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449921 +0x23:  mov    %eax,-0xc(%ebp)
08449924 +0x26:  movl   $0x0,-0x10(%ebp)
0844992b +0x2d:  lea    -0x10(%ebp),%eax
0844992e +0x30:  mov    %eax,0x4(%esp)
08449932 +0x34:  mov    0x14(%ebp),%eax
08449935 +0x37:  mov    %eax,(%esp)
08449938 +0x3a:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
0844993d +0x3f:  mov    -0x10(%ebp),%eax
08449940 +0x42:  mov    %eax,0x8(%esp)
08449944 +0x46:  movl   $"deLete from event_1207_growthweapon where m_id = %u",0x4(%esp)
0844994c +0x4e:  mov    -0xc(%ebp),%eax
0844994f +0x51:  mov    %eax,(%esp)
08449952 +0x54:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449957 +0x59:  movl   $0x1,0x4(%esp)
0844995f +0x61:  mov    -0xc(%ebp),%eax
08449962 +0x64:  mov    %eax,(%esp)
08449965 +0x67:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0844996a +0x6c:  xor    $0x1,%eax
0844996d +0x6f:  test   %al,%al
0844996f +0x71:  je     08449978 <+0x7a>
08449971 +0x73:  mov    $0x0,%eax
08449976 +0x78:  jmp    0844997d <+0x7f>
08449978 +0x7a:  mov    $0x1,%eax
0844997d +0x7f:  leave
0844997e +0x80:  ret
0844997f +0x81:  nop
```

## 反编译 C

```c
// DB_EventGrowthWeaponReset::dispatch @ 0x84498fe

/* DB_EventGrowthWeaponReset::dispatch(int, int, Stream*) */

bool DB_EventGrowthWeaponReset::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  MySQL::set_query(local_10,"deLete from event_1207_growthweapon where m_id = %u",local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
