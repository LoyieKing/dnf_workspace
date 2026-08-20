# dispatch

`_ZN35DB_EventUpdateGrowthWeaponTimepiece8dispatchEiiP6Stream`

`DB_EventUpdateGrowthWeaponTimepiece::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventUpdateGrowthWeaponTimepiece` | `0x084496f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084496f4  _ZN35DB_EventUpdateGrowthWeaponTimepiece8dispatchEiiP6Stream
#           DB_EventUpdateGrowthWeaponTimepiece::dispatch(int, int, Stream*)
# range [0x084496f4, 0x084497e9]
084496f4 +0x00:  push   %ebp
084496f5 +0x01:  mov    %esp,%ebp
084496f7 +0x03:  sub    $0x38,%esp
084496fa +0x06:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084496ff +0x0b:  movl   $0x0,0x8(%esp)
08449707 +0x13:  movl   $0x9,0x4(%esp)
0844970f +0x1b:  mov    %eax,(%esp)
08449712 +0x1e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449717 +0x23:  mov    %eax,-0xc(%ebp)
0844971a +0x26:  movl   $0x0,-0x10(%ebp)
08449721 +0x2d:  movw   $0x0,-0x12(%ebp)
08449727 +0x33:  movl   $0x0,-0x18(%ebp)
0844972e +0x3a:  lea    -0x10(%ebp),%eax
08449731 +0x3d:  mov    %eax,0x4(%esp)
08449735 +0x41:  mov    0x14(%ebp),%eax
08449738 +0x44:  mov    %eax,(%esp)
0844973b +0x47:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449740 +0x4c:  lea    -0x12(%ebp),%eax
08449743 +0x4f:  mov    %eax,0x4(%esp)
08449747 +0x53:  mov    0x14(%ebp),%eax
0844974a +0x56:  mov    %eax,(%esp)
0844974d +0x59:  call   0861c552 <_ZN6StreamrsERs>  ; Stream::operator>>(short&)
08449752 +0x5e:  lea    -0x18(%ebp),%eax
08449755 +0x61:  mov    %eax,0x4(%esp)
08449759 +0x65:  mov    0x14(%ebp),%eax
0844975c +0x68:  mov    %eax,(%esp)
0844975f +0x6b:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08449764 +0x70:  mov    -0x18(%ebp),%eax
08449767 +0x73:  test   %eax,%eax
08449769 +0x75:  je     08449797 <+0xa3>
0844976b +0x77:  mov    -0x10(%ebp),%ecx
0844976e +0x7a:  mov    -0x18(%ebp),%edx
08449771 +0x7d:  movzwl -0x12(%ebp),%eax
08449775 +0x81:  cwtl
08449776 +0x82:  mov    %ecx,0x10(%esp)
0844977a +0x86:  mov    %edx,0xc(%esp)
0844977e +0x8a:  mov    %eax,0x8(%esp)
08449782 +0x8e:  movl   $"upDate event_1207_growthweapon set  reward_occ_date = now(), timepiece = %d, infinityweapon_id = %d  where m_id = %u",0x4(%esp)
0844978a +0x96:  mov    -0xc(%ebp),%eax
0844978d +0x99:  mov    %eax,(%esp)
08449790 +0x9c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449795 +0xa1:  jmp    084497c1 <+0xcd>
08449797 +0xa3:  mov    -0x10(%ebp),%ecx
0844979a +0xa6:  mov    -0x18(%ebp),%edx
0844979d +0xa9:  movzwl -0x12(%ebp),%eax
084497a1 +0xad:  cwtl
084497a2 +0xae:  mov    %ecx,0x10(%esp)
084497a6 +0xb2:  mov    %edx,0xc(%esp)
084497aa +0xb6:  mov    %eax,0x8(%esp)
084497ae +0xba:  movl   $"upDate event_1207_growthweapon set  timepiece = %d, infinityweapon_id = %d  where m_id = %u",0x4(%esp)
084497b6 +0xc2:  mov    -0xc(%ebp),%eax
084497b9 +0xc5:  mov    %eax,(%esp)
084497bc +0xc8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084497c1 +0xcd:  movl   $0x1,0x4(%esp)
084497c9 +0xd5:  mov    -0xc(%ebp),%eax
084497cc +0xd8:  mov    %eax,(%esp)
084497cf +0xdb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
084497d4 +0xe0:  xor    $0x1,%eax
084497d7 +0xe3:  test   %al,%al
084497d9 +0xe5:  je     084497e2 <+0xee>
084497db +0xe7:  mov    $0x0,%eax
084497e0 +0xec:  jmp    084497e7 <+0xf3>
084497e2 +0xee:  mov    $0x1,%eax
084497e7 +0xf3:  leave
084497e8 +0xf4:  ret
084497e9 +0xf5:  nop
```

## 反编译 C

```c
// DB_EventUpdateGrowthWeaponTimepiece::dispatch @ 0x84496f4

/* DB_EventUpdateGrowthWeaponTimepiece::dispatch(int, int, Stream*) */

bool DB_EventUpdateGrowthWeaponTimepiece::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  Stream *in_stack_00000010;
  int local_1c;
  short local_16;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_14 = 0;
  local_16 = 0;
  local_1c = 0;
  Stream::operator>>(in_stack_00000010,&local_14);
  Stream::operator>>(in_stack_00000010,&local_16);
  Stream::operator>>(in_stack_00000010,&local_1c);
  if (local_1c == 0) {
    MySQL::set_query(local_10,
                     "upDate event_1207_growthweapon set  timepiece = %d, infinityweapon_id = %d  where m_id = %u"
                     ,(int)local_16,0,local_14);
  }
  else {
    MySQL::set_query(local_10,
                     "upDate event_1207_growthweapon set  reward_occ_date = now(), timepiece = %d, infinityweapon_id = %d  where m_id = %u"
                     ,(int)local_16,local_1c,local_14);
  }
  cVar1 = MySQL::exec(local_10,true);
  return cVar1 == '\x01';
}
```
