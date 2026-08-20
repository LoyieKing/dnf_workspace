# dispatch

`_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream`

`DB_UpdateMemberDoubtTrade::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateMemberDoubtTrade` | `0x084284a2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084284a2  _ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream
#           DB_UpdateMemberDoubtTrade::dispatch(int, int, Stream*)
# range [0x084284a2, 0x084285ad]
084284a2 +0x000:  push   %ebp
084284a3 +0x001:  mov    %esp,%ebp
084284a5 +0x003:  sub    $0x28,%esp
084284a8 +0x006:  lea    -0x14(%ebp),%eax
084284ab +0x009:  mov    %eax,0x4(%esp)
084284af +0x00d:  mov    0x14(%ebp),%eax
084284b2 +0x010:  mov    %eax,(%esp)
084284b5 +0x013:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084284ba +0x018:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084284bf +0x01d:  movl   $0x0,0x8(%esp)
084284c7 +0x025:  movl   $0x6,0x4(%esp)
084284cf +0x02d:  mov    %eax,(%esp)
084284d2 +0x030:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084284d7 +0x035:  mov    %eax,-0x10(%ebp)
084284da +0x038:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
084284e1 +0x03f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
084284e6 +0x044:  mov    %eax,-0xc(%ebp)
084284e9 +0x047:  mov    -0x14(%ebp),%eax
084284ec +0x04a:  movl   $0x0,0x4(%esp)
084284f4 +0x052:  mov    %eax,(%esp)
084284f7 +0x055:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084284fc +0x05a:  mov    %eax,0xc(%esp)
08428500 +0x05e:  mov    -0xc(%ebp),%eax
08428503 +0x061:  mov    %eax,0x8(%esp)
08428507 +0x065:  movl   $"upDate member_doubt_trade set last_update_time=from_unixtime(%d),over_count=over_count+1 where m_id=%s",0x4(%esp)
0842850f +0x06d:  mov    -0x10(%ebp),%eax
08428512 +0x070:  mov    %eax,(%esp)
08428515 +0x073:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842851a +0x078:  movl   $0x1,0x4(%esp)
08428522 +0x080:  mov    -0x10(%ebp),%eax
08428525 +0x083:  mov    %eax,(%esp)
08428528 +0x086:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842852d +0x08b:  xor    $0x1,%eax
08428530 +0x08e:  test   %al,%al
08428532 +0x090:  jne    08428545 <+0xa3>
08428534 +0x092:  mov    -0x10(%ebp),%eax
08428537 +0x095:  mov    %eax,(%esp)
0842853a +0x098:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842853f +0x09d:  or     %edx,%eax
08428541 +0x09f:  test   %eax,%eax
08428543 +0x0a1:  jne    0842854c <+0xaa>
08428545 +0x0a3:  mov    $0x1,%eax
0842854a +0x0a8:  jmp    08428551 <+0xaf>
0842854c +0x0aa:  mov    $0x0,%eax
08428551 +0x0af:  test   %al,%al
08428553 +0x0b1:  je     084285a7 <+0x105>
08428555 +0x0b3:  mov    -0x14(%ebp),%eax
08428558 +0x0b6:  movl   $0x0,0x4(%esp)
08428560 +0x0be:  mov    %eax,(%esp)
08428563 +0x0c1:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08428568 +0x0c6:  mov    -0xc(%ebp),%edx
0842856b +0x0c9:  mov    %edx,0xc(%esp)
0842856f +0x0cd:  mov    %eax,0x8(%esp)
08428573 +0x0d1:  movl   $"inSert into member_doubt_trade(m_id,last_update_time,over_count) values(%s,from_unixtime(%d),1)",0x4(%esp)
0842857b +0x0d9:  mov    -0x10(%ebp),%eax
0842857e +0x0dc:  mov    %eax,(%esp)
08428581 +0x0df:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08428586 +0x0e4:  movl   $0x1,0x4(%esp)
0842858e +0x0ec:  mov    -0x10(%ebp),%eax
08428591 +0x0ef:  mov    %eax,(%esp)
08428594 +0x0f2:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08428599 +0x0f7:  xor    $0x1,%eax
0842859c +0x0fa:  test   %al,%al
0842859e +0x0fc:  je     084285a7 <+0x105>
084285a0 +0x0fe:  mov    $0x0,%eax
084285a5 +0x103:  jmp    084285ac <+0x10a>
084285a7 +0x105:  mov    $0x1,%eax
084285ac +0x10a:  leave
084285ad +0x10b:  ret
```

## 反编译 C

```c
// DB_UpdateMemberDoubtTrade::dispatch @ 0x84284a2

/* DB_UpdateMemberDoubtTrade::dispatch(int, int, Stream*) */

undefined4 DB_UpdateMemberDoubtTrade::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_18;
  MySQL *local_14;
  undefined4 local_10;
  
  Stream::operator>>(in_stack_00000010,&local_18);
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  uVar3 = NumberToString(local_18,0);
  MySQL::set_query(local_14,
                   "upDate member_doubt_trade set last_update_time=from_unixtime(%d),over_count=over_count+1 where m_id=%s"
                   ,local_10,uVar3);
  cVar2 = MySQL::exec(local_14,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_14), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(local_18,0);
    MySQL::set_query(local_14,
                     "inSert into member_doubt_trade(m_id,last_update_time,over_count) values(%s,from_unixtime(%d),1)"
                     ,uVar3,local_10);
    cVar2 = MySQL::exec(local_14,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
