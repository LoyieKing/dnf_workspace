# dispatch

`_ZN32DB_EventUpdateGrowthWeaponCharac8dispatchEiiP6Stream`

`DB_EventUpdateGrowthWeaponCharac::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventUpdateGrowthWeaponCharac` | `0x084494e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084494e2  _ZN32DB_EventUpdateGrowthWeaponCharac8dispatchEiiP6Stream
#           DB_EventUpdateGrowthWeaponCharac::dispatch(int, int, Stream*)
# range [0x084494e2, 0x084495c5]
084494e2 +0x00:  push   %ebp
084494e3 +0x01:  mov    %esp,%ebp
084494e5 +0x03:  push   %ebx
084494e6 +0x04:  sub    $0x44,%esp
084494e9 +0x07:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084494ee +0x0c:  movl   $0x0,0x8(%esp)
084494f6 +0x14:  movl   $0x9,0x4(%esp)
084494fe +0x1c:  mov    %eax,(%esp)
08449501 +0x1f:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449506 +0x24:  mov    %eax,-0xc(%ebp)
08449509 +0x27:  movl   $0x0,-0x10(%ebp)
08449510 +0x2e:  movl   $0x0,-0x14(%ebp)
08449517 +0x35:  movl   $0x0,-0x18(%ebp)
0844951e +0x3c:  lea    -0x10(%ebp),%eax
08449521 +0x3f:  mov    %eax,0x4(%esp)
08449525 +0x43:  mov    0x14(%ebp),%eax
08449528 +0x46:  mov    %eax,(%esp)
0844952b +0x49:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449530 +0x4e:  lea    -0x14(%ebp),%eax
08449533 +0x51:  mov    %eax,0x4(%esp)
08449537 +0x55:  mov    0x14(%ebp),%eax
0844953a +0x58:  mov    %eax,(%esp)
0844953d +0x5b:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449542 +0x60:  lea    -0x18(%ebp),%eax
08449545 +0x63:  mov    %eax,0x4(%esp)
08449549 +0x67:  mov    0x14(%ebp),%eax
0844954c +0x6a:  mov    %eax,(%esp)
0844954f +0x6d:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08449554 +0x72:  lea    -0x1a(%ebp),%eax
08449557 +0x75:  mov    %eax,0x4(%esp)
0844955b +0x79:  mov    0x14(%ebp),%eax
0844955e +0x7c:  mov    %eax,(%esp)
08449561 +0x7f:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
08449566 +0x84:  mov    -0x10(%ebp),%ebx
08449569 +0x87:  movzwl -0x1a(%ebp),%eax
0844956d +0x8b:  movswl %ax,%ecx
08449570 +0x8e:  mov    -0x18(%ebp),%edx
08449573 +0x91:  mov    -0x14(%ebp),%eax
08449576 +0x94:  mov    %ebx,0x14(%esp)
0844957a +0x98:  mov    %ecx,0x10(%esp)
0844957e +0x9c:  mov    %edx,0xc(%esp)
08449582 +0xa0:  mov    %eax,0x8(%esp)
08449586 +0xa4:  movl   $"upDate event_1207_growthweapon set occ_date = now(), charac_no = %d, growthweapon_id = %d, server_id = %d where m_id = %u",0x4(%esp)
0844958e +0xac:  mov    -0xc(%ebp),%eax
08449591 +0xaf:  mov    %eax,(%esp)
08449594 +0xb2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449599 +0xb7:  movl   $0x1,0x4(%esp)
084495a1 +0xbf:  mov    -0xc(%ebp),%eax
084495a4 +0xc2:  mov    %eax,(%esp)
084495a7 +0xc5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084495ac +0xca:  xor    $0x1,%eax
084495af +0xcd:  test   %al,%al
084495b1 +0xcf:  je     084495ba <+0xd8>
084495b3 +0xd1:  mov    $0x0,%eax
084495b8 +0xd6:  jmp    084495bf <+0xdd>
084495ba +0xd8:  mov    $0x1,%eax
084495bf +0xdd:  add    $0x44,%esp
084495c2 +0xe0:  pop    %ebx
084495c3 +0xe1:  pop    %ebp
084495c4 +0xe2:  ret
084495c5 +0xe3:  nop
```

## 反编译 C

```c
// DB_EventUpdateGrowthWeaponCharac::dispatch @ 0x84494e2

/* DB_EventUpdateGrowthWeaponCharac::dispatch(int, int, Stream*) */

bool DB_EventUpdateGrowthWeaponCharac::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  short local_1e;
  int local_1c;
  uint local_18;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_18);
  Stream::operator>>(in_stack_00000010,&local_1c);
  Stream::operator>>(in_stack_00000010,&local_1e);
  MySQL::set_query(local_10,
                   "upDate event_1207_growthweapon set occ_date = now(), charac_no = %d, growthweapon_id = %d, server_id = %d where m_id = %u"
                   ,local_18,local_1c,(int)local_1e,local_14);
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
