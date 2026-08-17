# DB_UpdateMemberDoubtTrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084284a2 DB_UpdateMemberDoubtTrade::dispatch  [0x084284a2-0x84285ad] ===
 84284a2:	55                   	push   %ebp
 84284a3:	89 e5                	mov    %esp,%ebp
 84284a5:	83 ec 28             	sub    $0x28,%esp
 84284a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84284ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 84284af:	8b 45 14             	mov    0x14(%ebp),%eax
 84284b2:	89 04 24             	mov    %eax,(%esp)
 84284b5:	e8 dc 42 1f 00       	call   861c796 <_ZN6StreamrsERj>
 84284ba:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84284bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84284c6:	00 
 84284c7:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84284ce:	00 
 84284cf:	89 04 24             	mov    %eax,(%esp)
 84284d2:	e8 67 cd fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84284d7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84284da:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84284e1:	e8 b8 37 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84284e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84284e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84284ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84284f3:	00 
 84284f4:	89 04 24             	mov    %eax,(%esp)
 84284f7:	e8 4f 0b ce ff       	call   810904b <_Z14NumberToStringji>
 84284fc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8428500:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8428503:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428507:	c7 44 24 04 6c ef c4 	movl   $0x8c4ef6c,0x4(%esp)
 842850e:	08 
 842850f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8428512:	89 04 24             	mov    %eax,(%esp)
 8428515:	e8 a6 bc fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842851a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8428521:	00 
 8428522:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8428525:	89 04 24             	mov    %eax,(%esp)
 8428528:	e8 f9 bd fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842852d:	83 f0 01             	xor    $0x1,%eax
 8428530:	84 c0                	test   %al,%al
 8428532:	75 11                	jne    8428545 <_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream+0xa3>
 8428534:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8428537:	89 04 24             	mov    %eax,(%esp)
 842853a:	e8 d1 bd fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 842853f:	09 d0                	or     %edx,%eax
 8428541:	85 c0                	test   %eax,%eax
 8428543:	75 07                	jne    842854c <_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream+0xaa>
 8428545:	b8 01 00 00 00       	mov    $0x1,%eax
 842854a:	eb 05                	jmp    8428551 <_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream+0xaf>
 842854c:	b8 00 00 00 00       	mov    $0x0,%eax
 8428551:	84 c0                	test   %al,%al
 8428553:	74 52                	je     84285a7 <_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream+0x105>
 8428555:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8428558:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842855f:	00 
 8428560:	89 04 24             	mov    %eax,(%esp)
 8428563:	e8 e3 0a ce ff       	call   810904b <_Z14NumberToStringji>
 8428568:	8b 55 f4             	mov    -0xc(%ebp),%edx
 842856b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 842856f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8428573:	c7 44 24 04 d4 ef c4 	movl   $0x8c4efd4,0x4(%esp)
 842857a:	08 
 842857b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842857e:	89 04 24             	mov    %eax,(%esp)
 8428581:	e8 3a bc fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8428586:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842858d:	00 
 842858e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8428591:	89 04 24             	mov    %eax,(%esp)
 8428594:	e8 8d bd fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8428599:	83 f0 01             	xor    $0x1,%eax
 842859c:	84 c0                	test   %al,%al
 842859e:	74 07                	je     84285a7 <_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream+0x105>
 84285a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84285a5:	eb 05                	jmp    84285ac <_ZN25DB_UpdateMemberDoubtTrade8dispatchEiiP6Stream+0x10a>
 84285a7:	b8 01 00 00 00       	mov    $0x1,%eax
 84285ac:	c9                   	leave
 84285ad:	c3                   	ret

```

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

