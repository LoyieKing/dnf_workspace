# dispatch

`_ZN28DB_InsertOnTimeRewardUserLog8dispatchEiiP6Stream`

`DB_InsertOnTimeRewardUserLog::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_InsertOnTimeRewardUserLog` | `0x08442a56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08442a56  _ZN28DB_InsertOnTimeRewardUserLog8dispatchEiiP6Stream
#           DB_InsertOnTimeRewardUserLog::dispatch(int, int, Stream*)
# range [0x08442a56, 0x08442b79]
08442a56 +0x000:  push   %ebp
08442a57 +0x001:  mov    %esp,%ebp
08442a59 +0x003:  push   %esi
08442a5a +0x004:  push   %ebx
08442a5b +0x005:  sub    $0x40,%esp
08442a5e +0x008:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08442a63 +0x00d:  movl   $0x0,0x8(%esp)
08442a6b +0x015:  movl   $0xd,0x4(%esp)
08442a73 +0x01d:  mov    %eax,(%esp)
08442a76 +0x020:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08442a7b +0x025:  mov    %eax,-0x10(%ebp)
08442a7e +0x028:  movl   $0x0,-0x24(%ebp)
08442a85 +0x02f:  movl   $0x0,-0x28(%ebp)
08442a8c +0x036:  lea    -0x24(%ebp),%eax
08442a8f +0x039:  mov    %eax,0x4(%esp)
08442a93 +0x03d:  mov    0x14(%ebp),%eax
08442a96 +0x040:  mov    %eax,(%esp)
08442a99 +0x043:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
08442a9e +0x048:  lea    -0x28(%ebp),%eax
08442aa1 +0x04b:  mov    %eax,0x4(%esp)
08442aa5 +0x04f:  mov    0x14(%ebp),%eax
08442aa8 +0x052:  mov    %eax,(%esp)
08442aab +0x055:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
08442ab0 +0x05a:  movl   $"1112",-0xc(%ebp)
08442ab7 +0x061:  mov    -0x28(%ebp),%ebx
08442aba +0x064:  mov    -0x24(%ebp),%eax
08442abd +0x067:  movl   $0x0,0x4(%esp)
08442ac5 +0x06f:  mov    %eax,(%esp)
08442ac8 +0x072:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442acd +0x077:  mov    %ebx,0x10(%esp)
08442ad1 +0x07b:  mov    %eax,0xc(%esp)
08442ad5 +0x07f:  mov    -0xc(%ebp),%eax
08442ad8 +0x082:  mov    %eax,0x8(%esp)
08442adc +0x086:  movl   $"inSert into event_%s_ontime_reward_user(m_id,recv_no) values(%s,%u)",0x4(%esp)
08442ae4 +0x08e:  mov    -0x10(%ebp),%eax
08442ae7 +0x091:  mov    %eax,(%esp)
08442aea +0x094:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08442aef +0x099:  movl   $0x1,0x4(%esp)
08442af7 +0x0a1:  mov    -0x10(%ebp),%eax
08442afa +0x0a4:  mov    %eax,(%esp)
08442afd +0x0a7:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08442b02 +0x0ac:  xor    $0x1,%eax
08442b05 +0x0af:  test   %al,%al
08442b07 +0x0b1:  je     08442b6d <+0x117>
08442b09 +0x0b3:  mov    -0x28(%ebp),%esi
08442b0c +0x0b6:  mov    -0x24(%ebp),%eax
08442b0f +0x0b9:  movl   $0x0,0x4(%esp)
08442b17 +0x0c1:  mov    %eax,(%esp)
08442b1a +0x0c4:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08442b1f +0x0c9:  mov    %eax,%ebx
08442b21 +0x0cb:  movl   $0x5,0xc(%esp)
08442b29 +0x0d3:  movl   $0xa439,0x8(%esp)
08442b31 +0x0db:  movl   $&_ZZN28DB_InsertOnTimeRewardUserLog8dispatchEiiP6StreamE19__PRETTY_FUNCTION__,0x4(%esp)
08442b39 +0x0e3:  lea    -0x20(%ebp),%eax
08442b3c +0x0e6:  mov    %eax,(%esp)
08442b3f +0x0e9:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
08442b44 +0x0ee:  mov    %esi,0x10(%esp)
08442b48 +0x0f2:  mov    %ebx,0xc(%esp)
08442b4c +0x0f6:  mov    -0xc(%ebp),%eax
08442b4f +0x0f9:  mov    %eax,0x8(%esp)
08442b53 +0x0fd:  movl   $"inSert into event_%s_ontime_reward_user(m_id,recv_no) failed at m_id(%s,%u) ",0x4(%esp)
08442b5b +0x105:  lea    -0x20(%ebp),%eax
08442b5e +0x108:  mov    %eax,(%esp)
08442b61 +0x10b:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
08442b66 +0x110:  mov    $0x0,%eax
08442b6b +0x115:  jmp    08442b72 <+0x11c>
08442b6d +0x117:  mov    $0x1,%eax
08442b72 +0x11c:  add    $0x40,%esp
08442b75 +0x11f:  pop    %ebx
08442b76 +0x120:  pop    %esi
08442b77 +0x121:  pop    %ebp
08442b78 +0x122:  ret
08442b79 +0x123:  nop
```

## 反编译 C

```c
// DB_InsertOnTimeRewardUserLog::dispatch @ 0x8442a56

/* DB_InsertOnTimeRewardUserLog::dispatch(int, int, Stream*) */

bool DB_InsertOnTimeRewardUserLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  Stream *in_stack_00000010;
  int local_2c;
  uint local_28;
  cMyTrace local_24 [16];
  MySQL *local_14;
  undefined *local_10;
  
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,0xd,0);
  local_28 = 0;
  local_2c = 0;
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  iVar1 = local_2c;
  local_10 = &DAT_08c56b43;
  uVar3 = NumberToString(local_28,0);
  MySQL::set_query(local_14,"inSert into event_%s_ontime_reward_user(m_id,recv_no) values(%s,%u)",
                   local_10,uVar3,iVar1);
  cVar2 = MySQL::exec(local_14,true);
  iVar1 = local_2c;
  if (cVar2 != '\x01') {
    uVar3 = NumberToString(local_28,0);
    cMyTrace::cMyTrace(local_24,
                       "virtual bool DB_InsertOnTimeRewardUserLog::dispatch(int, int, Stream*)",
                       0xa439,5);
    cMyTrace::operator()
              (local_24,
               "inSert into event_%s_ontime_reward_user(m_id,recv_no) failed at m_id(%s,%u) ",
               local_10,uVar3,iVar1);
  }
  return cVar2 == '\x01';
}
```
