# dispatch

`_ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream`

`DB_Insert0712WinterEventCoupon::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `DB_Insert0712WinterEventCoupon` | `0x0842e45e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0842e45e  _ZN30DB_Insert0712WinterEventCoupon8dispatchEiiP6Stream
#           DB_Insert0712WinterEventCoupon::dispatch(int, int, Stream*)
# range [0x0842e45e, 0x0842e647]
0842e45e +0x000:  push   %ebp
0842e45f +0x001:  mov    %esp,%ebp
0842e461 +0x003:  push   %ebx
0842e462 +0x004:  sub    $0x24,%esp
0842e465 +0x007:  mov    0x14(%ebp),%eax
0842e468 +0x00a:  mov    %eax,(%esp)
0842e46b +0x00d:  call   084528c6 <_GLOBAL__I__ZN8WongWork8DBCommon11GetIdentityEP5MySQL+0x54dc>  ; global constructors keyed to WongWork::DBCommon::GetIdentity(MySQL*)+0x54dc
0842e470 +0x012:  mov    %eax,-0x14(%ebp)
0842e473 +0x015:  cmpl   $0x112,0xc(%ebp)
0842e47a +0x01c:  jne    0842e563 <+0x105>
0842e480 +0x022:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842e485 +0x027:  movl   $0x0,0x8(%esp)
0842e48d +0x02f:  movl   $0x1,0x4(%esp)
0842e495 +0x037:  mov    %eax,(%esp)
0842e498 +0x03a:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842e49d +0x03f:  mov    %eax,-0x10(%ebp)
0842e4a0 +0x042:  mov    -0x14(%ebp),%eax
0842e4a3 +0x045:  mov    (%eax),%eax
0842e4a5 +0x047:  movl   $0x0,0x4(%esp)
0842e4ad +0x04f:  mov    %eax,(%esp)
0842e4b0 +0x052:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e4b5 +0x057:  mov    -0x14(%ebp),%edx
0842e4b8 +0x05a:  mov    0x8(%edx),%edx
0842e4bb +0x05d:  mov    %eax,0xc(%esp)
0842e4bf +0x061:  mov    %edx,0x8(%esp)
0842e4c3 +0x065:  movl   $"upDate event_goldcard_info set coupon=coupon+%d where m_id=%s",0x4(%esp)
0842e4cb +0x06d:  mov    -0x10(%ebp),%eax
0842e4ce +0x070:  mov    %eax,(%esp)
0842e4d1 +0x073:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e4d6 +0x078:  movl   $0x1,0x4(%esp)
0842e4de +0x080:  mov    -0x10(%ebp),%eax
0842e4e1 +0x083:  mov    %eax,(%esp)
0842e4e4 +0x086:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e4e9 +0x08b:  xor    $0x1,%eax
0842e4ec +0x08e:  test   %al,%al
0842e4ee +0x090:  jne    0842e501 <+0xa3>
0842e4f0 +0x092:  mov    -0x10(%ebp),%eax
0842e4f3 +0x095:  mov    %eax,(%esp)
0842e4f6 +0x098:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842e4fb +0x09d:  or     %edx,%eax
0842e4fd +0x09f:  test   %eax,%eax
0842e4ff +0x0a1:  jne    0842e508 <+0xaa>
0842e501 +0x0a3:  mov    $0x1,%eax
0842e506 +0x0a8:  jmp    0842e50d <+0xaf>
0842e508 +0x0aa:  mov    $0x0,%eax
0842e50d +0x0af:  test   %al,%al
0842e50f +0x0b1:  je     0842e63d <+0x1df>
0842e515 +0x0b7:  mov    -0x14(%ebp),%eax
0842e518 +0x0ba:  mov    0x8(%eax),%ebx
0842e51b +0x0bd:  mov    -0x14(%ebp),%eax
0842e51e +0x0c0:  mov    (%eax),%eax
0842e520 +0x0c2:  movl   $0x0,0x4(%esp)
0842e528 +0x0ca:  mov    %eax,(%esp)
0842e52b +0x0cd:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e530 +0x0d2:  mov    %ebx,0xc(%esp)
0842e534 +0x0d6:  mov    %eax,0x8(%esp)
0842e538 +0x0da:  movl   $"inSert into event_goldcard_info(m_id,coupon) values(%s,%d)",0x4(%esp)
0842e540 +0x0e2:  mov    -0x10(%ebp),%eax
0842e543 +0x0e5:  mov    %eax,(%esp)
0842e546 +0x0e8:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e54b +0x0ed:  movl   $0x1,0x4(%esp)
0842e553 +0x0f5:  mov    -0x10(%ebp),%eax
0842e556 +0x0f8:  mov    %eax,(%esp)
0842e559 +0x0fb:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e55e +0x100:  jmp    0842e63d <+0x1df>
0842e563 +0x105:  mov    &_ZN10GlobalData8s_db_mgrE,%eax
0842e568 +0x10a:  movl   $0x0,0x8(%esp)
0842e570 +0x112:  movl   $0x4,0x4(%esp)
0842e578 +0x11a:  mov    %eax,(%esp)
0842e57b +0x11d:  call   083f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>  ; DBMgr::GetDBHandle(ENUM_DB_HANDLE_IDX, ENUM_SERVER_GROUP)
0842e580 +0x122:  mov    %eax,-0xc(%ebp)
0842e583 +0x125:  mov    -0x14(%ebp),%eax
0842e586 +0x128:  mov    (%eax),%eax
0842e588 +0x12a:  movl   $0x0,0x4(%esp)
0842e590 +0x132:  mov    %eax,(%esp)
0842e593 +0x135:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e598 +0x13a:  mov    -0x14(%ebp),%edx
0842e59b +0x13d:  mov    0x8(%edx),%edx
0842e59e +0x140:  mov    %eax,0xc(%esp)
0842e5a2 +0x144:  mov    %edx,0x8(%esp)
0842e5a6 +0x148:  movl   $"upDate event_goldcard_log set cnt=cnt+%d where m_id=%s and occ_date=now()",0x4(%esp)
0842e5ae +0x150:  mov    -0xc(%ebp),%eax
0842e5b1 +0x153:  mov    %eax,(%esp)
0842e5b4 +0x156:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e5b9 +0x15b:  movl   $0x1,0x4(%esp)
0842e5c1 +0x163:  mov    -0xc(%ebp),%eax
0842e5c4 +0x166:  mov    %eax,(%esp)
0842e5c7 +0x169:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e5cc +0x16e:  xor    $0x1,%eax
0842e5cf +0x171:  test   %al,%al
0842e5d1 +0x173:  jne    0842e5e4 <+0x186>
0842e5d3 +0x175:  mov    -0xc(%ebp),%eax
0842e5d6 +0x178:  mov    %eax,(%esp)
0842e5d9 +0x17b:  call   083f4310 <_ZN5MySQL19getAffectedRowCountEv>  ; MySQL::getAffectedRowCount()
0842e5de +0x180:  or     %edx,%eax
0842e5e0 +0x182:  test   %eax,%eax
0842e5e2 +0x184:  jne    0842e5eb <+0x18d>
0842e5e4 +0x186:  mov    $0x1,%eax
0842e5e9 +0x18b:  jmp    0842e5f0 <+0x192>
0842e5eb +0x18d:  mov    $0x0,%eax
0842e5f0 +0x192:  test   %al,%al
0842e5f2 +0x194:  je     0842e63d <+0x1df>
0842e5f4 +0x196:  mov    -0x14(%ebp),%eax
0842e5f7 +0x199:  mov    0x8(%eax),%ebx
0842e5fa +0x19c:  mov    -0x14(%ebp),%eax
0842e5fd +0x19f:  mov    (%eax),%eax
0842e5ff +0x1a1:  movl   $0x0,0x4(%esp)
0842e607 +0x1a9:  mov    %eax,(%esp)
0842e60a +0x1ac:  call   0810904b <_Z14NumberToStringji>  ; NumberToString(unsigned int, int)
0842e60f +0x1b1:  mov    %ebx,0xc(%esp)
0842e613 +0x1b5:  mov    %eax,0x8(%esp)
0842e617 +0x1b9:  movl   $"inSert into event_goldcard_log(m_id,cnt,occ_date) values(%s,%d,now())",0x4(%esp)
0842e61f +0x1c1:  mov    -0xc(%ebp),%eax
0842e622 +0x1c4:  mov    %eax,(%esp)
0842e625 +0x1c7:  call   083f41c0 <_ZN5MySQL9set_queryEPKcz>  ; MySQL::set_query(char const*, ...)
0842e62a +0x1cc:  movl   $0x1,0x4(%esp)
0842e632 +0x1d4:  mov    -0xc(%ebp),%eax
0842e635 +0x1d7:  mov    %eax,(%esp)
0842e638 +0x1da:  call   083f4326 <_ZN5MySQL4execEb>  ; MySQL::exec(bool)
0842e63d +0x1df:  mov    $0x1,%eax
0842e642 +0x1e4:  add    $0x24,%esp
0842e645 +0x1e7:  pop    %ebx
0842e646 +0x1e8:  pop    %ebp
0842e647 +0x1e9:  ret
```

## 反编译 C

```c
// DB_Insert0712WinterEventCoupon::dispatch @ 0x842e45e

/* DB_Insert0712WinterEventCoupon::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_Insert0712WinterEventCoupon::dispatch
          (DB_Insert0712WinterEventCoupon *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  SIG_INSERT_0712_WINTER_EVENT_COUPON *pSVar3;
  MySQL *pMVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  
  pSVar3 = Stream::GetOutBuffer<SIG_INSERT_0712_WINTER_EVENT_COUPON>(param_3);
  if (param_1 == 0x112) {
    pMVar4 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
    uVar5 = NumberToString(*(uint *)pSVar3,0);
    MySQL::set_query(pMVar4,"upDate event_goldcard_info set coupon=coupon+%d where m_id=%s",
                     *(undefined4 *)(pSVar3 + 8),uVar5);
    cVar2 = MySQL::exec(pMVar4,true);
    if ((cVar2 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(pMVar4), lVar7 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = *(undefined4 *)(pSVar3 + 8);
      uVar6 = NumberToString(*(uint *)pSVar3,0);
      MySQL::set_query(pMVar4,"inSert into event_goldcard_info(m_id,coupon) values(%s,%d)",uVar6,
                       uVar5);
      MySQL::exec(pMVar4,true);
    }
    return 1;
  }
  pMVar4 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar5 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(pMVar4,
                   "upDate event_goldcard_log set cnt=cnt+%d where m_id=%s and occ_date=now()",
                   *(undefined4 *)(pSVar3 + 8),uVar5);
  cVar2 = MySQL::exec(pMVar4,true);
  if ((cVar2 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(pMVar4), lVar7 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 1;
  }
  uVar5 = *(undefined4 *)(pSVar3 + 8);
  uVar6 = NumberToString(*(uint *)pSVar3,0);
  MySQL::set_query(pMVar4,"inSert into event_goldcard_log(m_id,cnt,occ_date) values(%s,%d,now())",
                   uVar6,uVar5);
  MySQL::exec(pMVar4,true);
  return 1;
}
```
