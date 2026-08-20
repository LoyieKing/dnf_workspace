# dispatch

`_ZN27DB_UpdateInGameEventHistory8dispatchEiiP6Stream`

`DB_UpdateInGameEventHistory::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateInGameEventHistory` | `0x08444972` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08444972  _ZN27DB_UpdateInGameEventHistory8dispatchEiiP6Stream
#           DB_UpdateInGameEventHistory::dispatch(int, int, Stream*)
# range [0x08444972, 0x08444ac3]
08444972 +0x000:  push   %ebp
08444973 +0x001:  mov    %esp,%ebp
08444975 +0x003:  push   %edi
08444976 +0x004:  push   %esi
08444977 +0x005:  push   %ebx
08444978 +0x006:  sub    $0x4c,%esp
0844497b +0x009:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
08444980 +0x00e:  movl   $0x0,0x8(%esp)
08444988 +0x016:  movl   $0x9,0x4(%esp)
08444990 +0x01e:  mov    %eax,(%esp)
08444993 +0x021:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
08444998 +0x026:  mov    %eax,-0x1c(%ebp)
0844499b +0x029:  movl   $0x0,-0x20(%ebp)
084449a2 +0x030:  lea    -0x20(%ebp),%eax
084449a5 +0x033:  mov    %eax,0x4(%esp)
084449a9 +0x037:  mov    0x14(%ebp),%eax
084449ac +0x03a:  mov    %eax,(%esp)
084449af +0x03d:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084449b4 +0x042:  lea    -0x24(%ebp),%eax
084449b7 +0x045:  mov    %eax,0x4(%esp)
084449bb +0x049:  mov    0x14(%ebp),%eax
084449be +0x04c:  mov    %eax,(%esp)
084449c1 +0x04f:  call   0861c5c4 <_ZN6StreamrsERi>  ; Stream::operator>>(int&)
084449c6 +0x054:  lea    -0x28(%ebp),%eax
084449c9 +0x057:  mov    %eax,0x4(%esp)
084449cd +0x05b:  mov    0x14(%ebp),%eax
084449d0 +0x05e:  mov    %eax,(%esp)
084449d3 +0x061:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084449d8 +0x066:  lea    -0x2c(%ebp),%eax
084449db +0x069:  mov    %eax,0x4(%esp)
084449df +0x06d:  mov    0x14(%ebp),%eax
084449e2 +0x070:  mov    %eax,(%esp)
084449e5 +0x073:  call   0861c796 <_ZN6StreamrsERj>  ; Stream::operator>>(unsigned int&)
084449ea +0x078:  mov    -0x24(%ebp),%ebx
084449ed +0x07b:  mov    -0x20(%ebp),%eax
084449f0 +0x07e:  movl   $0x0,0x4(%esp)
084449f8 +0x086:  mov    %eax,(%esp)
084449fb +0x089:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08444a00 +0x08e:  mov    -0x2c(%ebp),%ecx
08444a03 +0x091:  mov    -0x28(%ebp),%edx
08444a06 +0x094:  mov    %ebx,0x14(%esp)
08444a0a +0x098:  mov    %eax,0x10(%esp)
08444a0e +0x09c:  mov    %ecx,0xc(%esp)
08444a12 +0x0a0:  mov    %edx,0x8(%esp)
08444a16 +0x0a4:  movl   $"upDate event_ingame_history set history_1 = %u,history_2 = %u where m_id=%s and type = %d",0x4(%esp)
08444a1e +0x0ac:  mov    -0x1c(%ebp),%eax
08444a21 +0x0af:  mov    %eax,(%esp)
08444a24 +0x0b2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08444a29 +0x0b7:  movl   $0x1,0x4(%esp)
08444a31 +0x0bf:  mov    -0x1c(%ebp),%eax
08444a34 +0x0c2:  mov    %eax,(%esp)
08444a37 +0x0c5:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444a3c +0x0ca:  xor    $0x1,%eax
08444a3f +0x0cd:  test   %al,%al
08444a41 +0x0cf:  jne    08444a54 <+0xe2>
08444a43 +0x0d1:  mov    -0x1c(%ebp),%eax
08444a46 +0x0d4:  mov    %eax,(%esp)
08444a49 +0x0d7:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08444a4e +0x0dc:  or     %edx,%eax
08444a50 +0x0de:  test   %eax,%eax
08444a52 +0x0e0:  jne    08444a5b <+0xe9>
08444a54 +0x0e2:  mov    $0x1,%eax
08444a59 +0x0e7:  jmp    08444a60 <+0xee>
08444a5b +0x0e9:  mov    $0x0,%eax
08444a60 +0x0ee:  test   %al,%al
08444a62 +0x0f0:  je     08444ab6 <+0x144>
08444a64 +0x0f2:  mov    -0x2c(%ebp),%edi
08444a67 +0x0f5:  mov    -0x28(%ebp),%esi
08444a6a +0x0f8:  mov    -0x24(%ebp),%ebx
08444a6d +0x0fb:  mov    -0x20(%ebp),%eax
08444a70 +0x0fe:  movl   $0x0,0x4(%esp)
08444a78 +0x106:  mov    %eax,(%esp)
08444a7b +0x109:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
08444a80 +0x10e:  mov    %edi,0x14(%esp)
08444a84 +0x112:  mov    %esi,0x10(%esp)
08444a88 +0x116:  mov    %ebx,0xc(%esp)
08444a8c +0x11a:  mov    %eax,0x8(%esp)
08444a90 +0x11e:  movl   $"inSert into event_ingame_history(m_id,type,history_1,history_2) values(%s,%d,%d,%d)",0x4(%esp)
08444a98 +0x126:  mov    -0x1c(%ebp),%eax
08444a9b +0x129:  mov    %eax,(%esp)
08444a9e +0x12c:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
08444aa3 +0x131:  movl   $0x1,0x4(%esp)
08444aab +0x139:  mov    -0x1c(%ebp),%eax
08444aae +0x13c:  mov    %eax,(%esp)
08444ab1 +0x13f:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
08444ab6 +0x144:  mov    $0x1,%eax
08444abb +0x149:  add    $0x4c,%esp
08444abe +0x14c:  pop    %ebx
08444abf +0x14d:  pop    %esi
08444ac0 +0x14e:  pop    %edi
08444ac1 +0x14f:  pop    %ebp
08444ac2 +0x150:  ret
08444ac3 +0x151:  nop
```

## 反编译 C

```c
// DB_UpdateInGameEventHistory::dispatch @ 0x8444972

/* DB_UpdateInGameEventHistory::dispatch(int, int, Stream*) */

undefined4 DB_UpdateInGameEventHistory::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  uint local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  local_24 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_30);
  iVar2 = local_28;
  uVar4 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "upDate event_ingame_history set history_1 = %u,history_2 = %u where m_id=%s and type = %d"
                   ,local_2c,local_30,uVar4,iVar2);
  cVar3 = MySQL::exec(local_20,true);
  if (cVar3 == '\x01') {
    lVar5 = MySQL::getAffectedRowCount(local_20);
    if (lVar5 != 0) {
      bVar1 = false;
      goto LAB_08444a60;
    }
  }
  bVar1 = true;
LAB_08444a60:
  if (bVar1) {
    uVar4 = NumberToString(local_24,0);
    MySQL::set_query(local_20,
                     "inSert into event_ingame_history(m_id,type,history_1,history_2) values(%s,%d,%d,%d)"
                     ,uVar4,local_28,local_2c,local_30);
    MySQL::exec(local_20,true);
  }
  return 1;
}
```
