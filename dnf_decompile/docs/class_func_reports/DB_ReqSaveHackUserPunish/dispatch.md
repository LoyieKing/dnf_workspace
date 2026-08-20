# dispatch

`_ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream`

`DB_ReqSaveHackUserPunish::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_ReqSaveHackUserPunish` | `0x08425374` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08425374  _ZN24DB_ReqSaveHackUserPunish8dispatchEiiP6Stream
#           DB_ReqSaveHackUserPunish::dispatch(int, int, Stream*)
# range [0x08425374, 0x08425493]
08425374 +0x000:  push   %ebp
08425375 +0x001:  mov    %esp,%ebp
08425377 +0x003:  sub    $0x28,%esp
0842537a +0x006:  mov    0x14(%ebp),%eax
0842537d +0x009:  mov    %eax,(%esp)
08425380 +0x00c:  call   08451f96 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x4bac>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x4bac
08425385 +0x011:  mov    %eax,-0x14(%ebp)
08425388 +0x014:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842538d +0x019:  movl   $0x0,0x8(%esp)
08425395 +0x021:  movl   $0x6,0x4(%esp)
0842539d +0x029:  mov    %eax,(%esp)
084253a0 +0x02c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084253a5 +0x031:  mov    %eax,-0x10(%ebp)
084253a8 +0x034:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
084253ad +0x039:  movl   $0x0,0x8(%esp)
084253b5 +0x041:  movl   $0x1,0x4(%esp)
084253bd +0x049:  mov    %eax,(%esp)
084253c0 +0x04c:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
084253c5 +0x051:  mov    %eax,-0xc(%ebp)
084253c8 +0x054:  mov    -0x14(%ebp),%eax
084253cb +0x057:  mov    (%eax),%eax
084253cd +0x059:  movl   $0x0,0x4(%esp)
084253d5 +0x061:  mov    %eax,(%esp)
084253d8 +0x064:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
084253dd +0x069:  movl   $0x2,0xc(%esp)
084253e5 +0x071:  mov    %eax,0x8(%esp)
084253e9 +0x075:  movl   $"upDate member_punish_info set occ_time=now(), start_time=now(), end_time='9999-12-31 23:59:59', punish_value=0, apply_flag=2 where m_id=%s and punish_type=%d",0x4(%esp)
084253f1 +0x07d:  mov    -0xc(%ebp),%eax
084253f4 +0x080:  mov    %eax,(%esp)
084253f7 +0x083:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
084253fc +0x088:  movl   $0x1,0x4(%esp)
08425404 +0x090:  mov    -0xc(%ebp),%eax
08425407 +0x093:  mov    %eax,(%esp)
0842540a +0x096:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842540f +0x09b:  xor    $0x1,%eax
08425412 +0x09e:  test   %al,%al
08425414 +0x0a0:  jne    08425427 <+0xb3>
08425416 +0x0a2:  mov    -0xc(%ebp),%eax
08425419 +0x0a5:  mov    %eax,(%esp)
0842541c +0x0a8:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
08425421 +0x0ad:  or     %edx,%eax
08425423 +0x0af:  test   %eax,%eax
08425425 +0x0b1:  jne    0842542e <+0xba>
08425427 +0x0b3:  mov    $0x1,%eax
0842542c +0x0b8:  jmp    08425433 <+0xbf>
0842542e +0x0ba:  mov    $0x0,%eax
08425433 +0x0bf:  test   %al,%al
08425435 +0x0c1:  je     0842548c <+0x118>
08425437 +0x0c3:  mov    -0x14(%ebp),%eax
0842543a +0x0c6:  mov    (%eax),%eax
0842543c +0x0c8:  movl   $0x0,0x4(%esp)
08425444 +0x0d0:  mov    %eax,(%esp)
08425447 +0x0d3:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842544c +0x0d8:  movl   $0x2,0xc(%esp)
08425454 +0x0e0:  mov    %eax,0x8(%esp)
08425458 +0x0e4:  movl   $"inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), '9999-12-31 23:59:59', 0, 2)",0x4(%esp)
08425460 +0x0ec:  mov    -0xc(%ebp),%eax
08425463 +0x0ef:  mov    %eax,(%esp)
08425466 +0x0f2:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842546b +0x0f7:  movl   $0x1,0x4(%esp)
08425473 +0x0ff:  mov    -0xc(%ebp),%eax
08425476 +0x102:  mov    %eax,(%esp)
08425479 +0x105:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842547e +0x10a:  xor    $0x1,%eax
08425481 +0x10d:  test   %al,%al
08425483 +0x10f:  je     0842548c <+0x118>
08425485 +0x111:  mov    $0x0,%eax
0842548a +0x116:  jmp    08425491 <+0x11d>
0842548c +0x118:  mov    $0x1,%eax
08425491 +0x11d:  leave
08425492 +0x11e:  ret
08425493 +0x11f:  nop
```

## 反编译 C

```c
// DB_ReqSaveHackUserPunish::dispatch @ 0x8425374

/* DB_ReqSaveHackUserPunish::dispatch(int, int, Stream*) */

undefined4 DB_ReqSaveHackUserPunish::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_SAVE_HACK_USER_PUNISH *pSVar3;
  MySQL *this;
  undefined4 uVar4;
  longlong lVar5;
  Stream *in_stack_00000010;
  
  pSVar3 = Stream::GetOutBuffer<SIG_SAVE_HACK_USER_PUNISH>(in_stack_00000010);
  DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar4 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(this,
                   "upDate member_punish_info set occ_time=now(), start_time=now(), end_time=\'9999-12-31 23:59:59\', punish_value=0, apply_flag=2 where m_id=%s and punish_type=%d"
                   ,uVar4,2);
  cVar2 = MySQL::exec(this,true);
  if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this), lVar5 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = NumberToString(*(uint *)pSVar3,0);
    MySQL::set_query(this,
                     "inSert into member_punish_info(m_id, punish_type, occ_time, start_time, end_time, punish_value, apply_flag) values(%s, %d, now(), now(), \'9999-12-31 23:59:59\', 0, 2)"
                     ,uVar4,2);
    cVar2 = MySQL::exec(this,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}
```
