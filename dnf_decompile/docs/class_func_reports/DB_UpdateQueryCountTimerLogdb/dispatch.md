# dispatch

`_ZN29DB_UpdateQueryCountTimerLogdb8dispatchEiiP6Stream`

`DB_UpdateQueryCountTimerLogdb::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_UpdateQueryCountTimerLogdb` | `0x0841c458` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0841c458  _ZN29DB_UpdateQueryCountTimerLogdb8dispatchEiiP6Stream
#           DB_UpdateQueryCountTimerLogdb::dispatch(int, int, Stream*)
# range [0x0841c458, 0x0841c5d3]
0841c458 +0x000:  push   %ebp
0841c459 +0x001:  mov    %esp,%ebp
0841c45b +0x003:  sub    $0x68,%esp
0841c45e +0x006:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0841c463 +0x00b:  movl   $0x0,0x8(%esp)
0841c46b +0x013:  movl   $0x4,0x4(%esp)
0841c473 +0x01b:  mov    %eax,(%esp)
0841c476 +0x01e:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0841c47b +0x023:  mov    %eax,-0x24(%ebp)
0841c47e +0x026:  mov    -0x24(%ebp),%eax
0841c481 +0x029:  mov    %eax,(%esp)
0841c484 +0x02c:  call   082a4202 <_GLOBAL__I__ZN4CLog5this_E+0x629>  ; global constructors keyed to CLog::this_+0x629
0841c489 +0x031:  mov    %eax,-0x20(%ebp)
0841c48c +0x034:  mov    -0x20(%ebp),%eax
0841c48f +0x037:  mov    %eax,(%esp)
0841c492 +0x03a:  call   0844d652 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x268>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x268
0841c497 +0x03f:  mov    %eax,-0x1c(%ebp)
0841c49a +0x042:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0841c4a1 +0x049:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0841c4a6 +0x04e:  mov    %eax,-0x18(%ebp)
0841c4a9 +0x051:  lea    -0x30(%ebp),%eax
0841c4ac +0x054:  mov    -0x1c(%ebp),%edx
0841c4af +0x057:  mov    %edx,0x4(%esp)
0841c4b3 +0x05b:  mov    %eax,(%esp)
0841c4b6 +0x05e:  call   08451406 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x401c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x401c
0841c4bb +0x063:  sub    $0x4,%esp
0841c4be +0x066:  jmp    0841c592 <+0x13a>
0841c4c3 +0x06b:  lea    -0x30(%ebp),%eax
0841c4c6 +0x06e:  mov    %eax,(%esp)
0841c4c9 +0x071:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
0841c4ce +0x076:  mov    (%eax),%eax
0841c4d0 +0x078:  mov    %eax,-0x14(%ebp)
0841c4d3 +0x07b:  lea    -0x30(%ebp),%eax
0841c4d6 +0x07e:  mov    %eax,(%esp)
0841c4d9 +0x081:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
0841c4de +0x086:  mov    0x4(%eax),%eax
0841c4e1 +0x089:  mov    %eax,-0x10(%ebp)
0841c4e4 +0x08c:  cmpl   $0x0,-0x10(%ebp)
0841c4e8 +0x090:  jle    0841c574 <+0x11c>
0841c4ee +0x096:  lea    -0x30(%ebp),%eax
0841c4f1 +0x099:  mov    %eax,(%esp)
0841c4f4 +0x09c:  call   084514a4 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x40ba>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x40ba
0841c4f9 +0x0a1:  fldl   0x8(%eax)
0841c4fc +0x0a4:  fldl   &data#a2821b98(.rodata)
0841c502 +0x0aa:  fmulp  %st,%st(1)
0841c504 +0x0ac:  fnstcw -0x3a(%ebp)
0841c507 +0x0af:  movzwl -0x3a(%ebp),%eax
0841c50b +0x0b3:  mov    $0xc,%ah
0841c50d +0x0b5:  mov    %ax,-0x3c(%ebp)
0841c511 +0x0b9:  fldcw  -0x3c(%ebp)
0841c514 +0x0bc:  fistpl -0xc(%ebp)
0841c517 +0x0bf:  fldcw  -0x3a(%ebp)
0841c51a +0x0c2:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0841c51f +0x0c7:  mov    %eax,(%esp)
0841c522 +0x0ca:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0841c527 +0x0cf:  mov    %eax,0x18(%esp)
0841c52b +0x0d3:  mov    -0xc(%ebp),%eax
0841c52e +0x0d6:  mov    %eax,0x14(%esp)
0841c532 +0x0da:  mov    -0x10(%ebp),%eax
0841c535 +0x0dd:  mov    %eax,0x10(%esp)
0841c539 +0x0e1:  mov    -0x14(%ebp),%eax
0841c53c +0x0e4:  mov    %eax,0xc(%esp)
0841c540 +0x0e8:  mov    -0x18(%ebp),%eax
0841c543 +0x0eb:  mov    %eax,0x8(%esp)
0841c547 +0x0ef:  movl   $"inSert into log_query_stat(occ_time,q_id,total,response_time,gc_no) values(from_unixtime(%d),%d,%d,%d,%d)",0x4(%esp)
0841c54f +0x0f7:  mov    -0x24(%ebp),%eax
0841c552 +0x0fa:  mov    %eax,(%esp)
0841c555 +0x0fd:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0841c55a +0x102:  movl   $0x1,0x4(%esp)
0841c562 +0x10a:  mov    -0x24(%ebp),%eax
0841c565 +0x10d:  mov    %eax,(%esp)
0841c568 +0x110:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0841c56d +0x115:  xor    $0x1,%eax
0841c570 +0x118:  test   %al,%al
0841c572 +0x11a:  jmp    0841c575 <+0x11d>
0841c574 +0x11c:  nop
0841c575 +0x11d:  lea    -0x28(%ebp),%eax
0841c578 +0x120:  movl   $0x0,0x8(%esp)
0841c580 +0x128:  lea    -0x30(%ebp),%edx
0841c583 +0x12b:  mov    %edx,0x4(%esp)
0841c587 +0x12f:  mov    %eax,(%esp)
0841c58a +0x132:  call   08451466 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x407c>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x407c
0841c58f +0x137:  sub    $0x4,%esp
0841c592 +0x13a:  lea    -0x2c(%ebp),%eax
0841c595 +0x13d:  mov    -0x1c(%ebp),%edx
0841c598 +0x140:  mov    %edx,0x4(%esp)
0841c59c +0x144:  mov    %eax,(%esp)
0841c59f +0x147:  call   0845142c <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4042>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4042
0841c5a4 +0x14c:  sub    $0x4,%esp
0841c5a7 +0x14f:  lea    -0x2c(%ebp),%eax
0841c5aa +0x152:  mov    %eax,0x4(%esp)
0841c5ae +0x156:  lea    -0x30(%ebp),%eax
0841c5b1 +0x159:  mov    %eax,(%esp)
0841c5b4 +0x15c:  call   08451452 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4068>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4068
0841c5b9 +0x161:  test   %al,%al
0841c5bb +0x163:  jne    0841c4c3 <+0x6b>
0841c5c1 +0x169:  mov    -0x20(%ebp),%eax
0841c5c4 +0x16c:  mov    %eax,(%esp)
0841c5c7 +0x16f:  call   085ecbd6 <_ZN13CQueryCounter5ResetEv>  ; CQueryCounter::Reset()
0841c5cc +0x174:  mov    $0x1,%eax
0841c5d1 +0x179:  leave
0841c5d2 +0x17a:  ret
0841c5d3 +0x17b:  nop
```

## 反编译 C

```c
// DB_UpdateQueryCountTimerLogdb::dispatch @ 0x841c458

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DB_UpdateQueryCountTimerLogdb::dispatch(int, int, Stream*) */

undefined4 DB_UpdateQueryCountTimerLogdb::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  CEnvironment *this;
  undefined4 uVar4;
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_34 [4];
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  local_30 [4];
  _Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> local_2c [4];
  MySQL *local_28;
  CQueryCounter *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  local_24 = (CQueryCounter *)MySQL::GetQueryCounter(local_28);
  local_20 = CQueryCounter::GetQueryCountTable(local_24);
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  std::
  map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
  ::begin(local_34);
  while( true ) {
    std::
    map<int,CQueryCounter::QUERY_INFO,std::less<int>,std::allocator<std::pair<int_const,CQueryCounter::QUERY_INFO>>>
    ::end(local_30);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_34
                       ,(_Rb_tree_iterator *)local_30);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)
             std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                       ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                        local_34);
    local_18 = *puVar2;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)local_34
                      );
    local_14 = *(int *)(iVar3 + 4);
    if (0 < local_14) {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>> *)
                         local_34);
      local_10 = (int)ROUND(_DAT_08c5dec8 * *(double *)(iVar3 + 8));
      this = (CEnvironment *)G_CEnvironment();
      uVar4 = CEnvironment::get_channel_no(this);
      MySQL::set_query(local_28,
                       "inSert into log_query_stat(occ_time,q_id,total,response_time,gc_no) values(from_unixtime(%d),%d,%d,%d,%d)"
                       ,local_1c,local_18,local_14,local_10,uVar4);
      MySQL::exec(local_28,true);
    }
    std::_Rb_tree_iterator<std::pair<int_const,CQueryCounter::QUERY_INFO>>::operator++
              (local_2c,(int)local_34);
  }
  CQueryCounter::Reset(local_24);
  return 1;
}
```
