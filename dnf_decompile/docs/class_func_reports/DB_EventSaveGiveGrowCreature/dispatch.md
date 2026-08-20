# dispatch

`_ZN28DB_EventSaveGiveGrowCreature8dispatchEiiP6Stream`

`DB_EventSaveGiveGrowCreature::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_EventSaveGiveGrowCreature` | `0x08449a58` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08449a58  _ZN28DB_EventSaveGiveGrowCreature8dispatchEiiP6Stream
#           DB_EventSaveGiveGrowCreature::dispatch(int, int, Stream*)
# range [0x08449a58, 0x08449b31]
08449a58 +0x00:  push   %ebp
08449a59 +0x01:  mov    %esp,%ebp
08449a5b +0x03:  push   %edi
08449a5c +0x04:  push   %esi
08449a5d +0x05:  push   %ebx
08449a5e +0x06:  sub    $0x4c,%esp
08449a61 +0x09:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08449a66 +0x0e:  movl   $0x0,0x8(%esp)
08449a6e +0x16:  movl   $0x9,0x4(%esp)
08449a76 +0x1e:  mov    %eax,(%esp)
08449a79 +0x21:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08449a7e +0x26:  mov    %eax,-0x20(%ebp)
08449a81 +0x29:  movl   $0x0,-0x24(%ebp)
08449a88 +0x30:  lea    -0x24(%ebp),%eax
08449a8b +0x33:  mov    %eax,0x4(%esp)
08449a8f +0x37:  mov    0x14(%ebp),%eax
08449a92 +0x3a:  mov    %eax,(%esp)
08449a95 +0x3d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08449a9a +0x42:  mov    0x14(%ebp),%eax
08449a9d +0x45:  mov    %eax,(%esp)
08449aa0 +0x48:  call   084546e4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x72fa>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x72fa
08449aa5 +0x4d:  mov    %eax,-0x1c(%ebp)
08449aa8 +0x50:  mov    -0x1c(%ebp),%eax
08449aab +0x53:  add    $0xc,%eax
08449aae +0x56:  mov    %eax,-0x2c(%ebp)
08449ab1 +0x59:  mov    -0x1c(%ebp),%eax
08449ab4 +0x5c:  mov    0x8(%eax),%edi
08449ab7 +0x5f:  mov    -0x1c(%ebp),%eax
08449aba +0x62:  mov    0x4(%eax),%esi
08449abd +0x65:  mov    -0x1c(%ebp),%eax
08449ac0 +0x68:  movzwl (%eax),%eax
08449ac3 +0x6b:  movswl %ax,%ebx
08449ac6 +0x6e:  mov    -0x24(%ebp),%eax
08449ac9 +0x71:  movl   $0x0,0x4(%esp)
08449ad1 +0x79:  mov    %eax,(%esp)
08449ad4 +0x7c:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08449ad9 +0x81:  mov    -0x2c(%ebp),%edx
08449adc +0x84:  mov    %edx,0x18(%esp)
08449ae0 +0x88:  mov    %edi,0x14(%esp)
08449ae4 +0x8c:  mov    %esi,0x10(%esp)
08449ae8 +0x90:  mov    %ebx,0xc(%esp)
08449aec +0x94:  mov    %eax,0x8(%esp)
08449af0 +0x98:  movl   $"inSert into event_1208_growthcreature(m_id ,server_id, charac_no, job_type, charac_name, occ_date) values(%s, %d, %d, %d, '%s', now())",0x4(%esp)
08449af8 +0xa0:  mov    -0x20(%ebp),%eax
08449afb +0xa3:  mov    %eax,(%esp)
08449afe +0xa6:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08449b03 +0xab:  movl   $0x1,0x4(%esp)
08449b0b +0xb3:  mov    -0x20(%ebp),%eax
08449b0e +0xb6:  mov    %eax,(%esp)
08449b11 +0xb9:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08449b16 +0xbe:  xor    $0x1,%eax
08449b19 +0xc1:  test   %al,%al
08449b1b +0xc3:  je     08449b24 <+0xcc>
08449b1d +0xc5:  mov    $0x0,%eax
08449b22 +0xca:  jmp    08449b29 <+0xd1>
08449b24 +0xcc:  mov    $0x1,%eax
08449b29 +0xd1:  add    $0x4c,%esp
08449b2c +0xd4:  pop    %ebx
08449b2d +0xd5:  pop    %esi
08449b2e +0xd6:  pop    %edi
08449b2f +0xd7:  pop    %ebp
08449b30 +0xd8:  ret
08449b31 +0xd9:  nop
```

## 反编译 C

```c
// DB_EventSaveGiveGrowCreature::dispatch @ 0x8449a58

/* DB_EventSaveGiveGrowCreature::dispatch(int, int, Stream*) */

bool DB_EventSaveGiveGrowCreature::dispatch(int param_1,int param_2,Stream *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  eventCharacInfo *peVar5;
  undefined4 uVar6;
  Stream *in_stack_00000010;
  uint local_28;
  MySQL *local_24;
  eventCharacInfo *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  local_20 = Stream::GetOutBuffer<SIG_GIVE_GROWTH_CREATURE_EVENT::eventCharacInfo>
                       (in_stack_00000010);
  peVar5 = local_20 + 0xc;
  uVar2 = *(undefined4 *)(local_20 + 8);
  uVar3 = *(undefined4 *)(local_20 + 4);
  sVar1 = *(short *)local_20;
  uVar6 = NumberToString(local_28,0);
  MySQL::set_query(local_24,
                   "inSert into event_1208_growthcreature(m_id ,server_id, charac_no, job_type, charac_name, occ_date) values(%s, %d, %d, %d, \'%s\', now())"
                   ,uVar6,(int)sVar1,uVar3,uVar2,peVar5);
  cVar4 = MySQL::exec(local_24,true);
  return cVar4 == '\x01';
}
```
