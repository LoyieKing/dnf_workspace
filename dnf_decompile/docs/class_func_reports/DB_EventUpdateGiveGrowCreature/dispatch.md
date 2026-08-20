# dispatch

`_ZN30DB_EventUpdateGiveGrowCreature8dispatchEiiP6Stream`

`DB_EventUpdateGiveGrowCreature::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventUpdateGiveGrowCreature` | `0x08449c54` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449c54  _ZN30DB_EventUpdateGiveGrowCreature8dispatchEiiP6Stream
#           DB_EventUpdateGiveGrowCreature::dispatch(int, int, Stream*)
# range [0x08449c54, 0x08449d1b]
08449c54 +0x00:  push   %ebp
08449c55 +0x01:  mov    %esp,%ebp
08449c57 +0x03:  push   %esi
08449c58 +0x04:  push   %ebx
08449c59 +0x05:  sub    $0x30,%esp
08449c5c +0x08:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08449c61 +0x0d:  movl   $0x0,0x8(%esp)
08449c69 +0x15:  movl   $0x9,0x4(%esp)
08449c71 +0x1d:  mov    %eax,(%esp)
08449c74 +0x20:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449c79 +0x25:  mov    %eax,-0x10(%ebp)
08449c7c +0x28:  movl   $0x0,-0x14(%ebp)
08449c83 +0x2f:  lea    -0x14(%ebp),%eax
08449c86 +0x32:  mov    %eax,0x4(%esp)
08449c8a +0x36:  mov    0x14(%ebp),%eax
08449c8d +0x39:  mov    %eax,(%esp)
08449c90 +0x3c:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449c95 +0x41:  mov    0x14(%ebp),%eax
08449c98 +0x44:  mov    %eax,(%esp)
08449c9b +0x47:  call   084546e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x72fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x72fa
08449ca0 +0x4c:  mov    %eax,-0xc(%ebp)
08449ca3 +0x4f:  mov    -0xc(%ebp),%eax
08449ca6 +0x52:  mov    0x4(%eax),%esi
08449ca9 +0x55:  mov    -0xc(%ebp),%eax
08449cac +0x58:  movzwl (%eax),%eax
08449caf +0x5b:  movswl %ax,%ebx
08449cb2 +0x5e:  mov    -0x14(%ebp),%eax
08449cb5 +0x61:  movl   $0x0,0x4(%esp)
08449cbd +0x69:  mov    %eax,(%esp)
08449cc0 +0x6c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08449cc5 +0x71:  mov    -0xc(%ebp),%edx
08449cc8 +0x74:  add    $0xc,%edx
08449ccb +0x77:  mov    %esi,0x14(%esp)
08449ccf +0x7b:  mov    %ebx,0x10(%esp)
08449cd3 +0x7f:  mov    %eax,0xc(%esp)
08449cd7 +0x83:  mov    %edx,0x8(%esp)
08449cdb +0x87:  movl   $"upDate event_1208_growthcreature set charac_name = %s) where m_id = %s and server_id =%d and charac_no = %d",0x4(%esp)
08449ce3 +0x8f:  mov    -0x10(%ebp),%eax
08449ce6 +0x92:  mov    %eax,(%esp)
08449ce9 +0x95:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449cee +0x9a:  movl   $0x1,0x4(%esp)
08449cf6 +0xa2:  mov    -0x10(%ebp),%eax
08449cf9 +0xa5:  mov    %eax,(%esp)
08449cfc +0xa8:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08449d01 +0xad:  xor    $0x1,%eax
08449d04 +0xb0:  test   %al,%al
08449d06 +0xb2:  je     08449d0f <+0xbb>
08449d08 +0xb4:  mov    $0x0,%eax
08449d0d +0xb9:  jmp    08449d14 <+0xc0>
08449d0f +0xbb:  mov    $0x1,%eax
08449d14 +0xc0:  add    $0x30,%esp
08449d17 +0xc3:  pop    %ebx
08449d18 +0xc4:  pop    %esi
08449d19 +0xc5:  pop    %ebp
08449d1a +0xc6:  ret
08449d1b +0xc7:  nop
```

## 反编译 C

```c
// DB_EventUpdateGiveGrowCreature::dispatch @ 0x8449c54

/* DB_EventUpdateGiveGrowCreature::dispatch(int, int, Stream*) */

bool DB_EventUpdateGiveGrowCreature::dispatch(int param_1,int param_2,Stream *param_3)

{
  short sVar1;
  undefined4 uVar2;
  char cVar3;
  undefined4 uVar4;
  Stream *in_stack_00000010;
  uint local_18;
  MySQL *local_14;
  eventCharacInfo *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  local_10 = Stream::GetOutBuffer<SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo>
                       (in_stack_00000010);
  uVar2 = *(undefined4 *)(local_10 + 4);
  sVar1 = *(short *)local_10;
  uVar4 = NumberToString(local_18,0);
  MySQL::set_query(local_14,
                   "upDate event_1208_growthcreature set charac_name = %s) where m_id = %s and server_id =%d and charac_no = %d"
                   ,local_10 + 0xc,uVar4,(int)sVar1,uVar2);
  cVar3 = MySQL::exec(local_14,true);
  return cVar3 == '\x01';
}
```
