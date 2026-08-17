# CheckStayTimeEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815b362 CheckStayTimeEvent::dispatch  [0x0815b362-0x815b6ab] ===
 815b362:	55                   	push   %ebp
 815b363:	89 e5                	mov    %esp,%ebp
 815b365:	56                   	push   %esi
 815b366:	53                   	push   %ebx
 815b367:	83 ec 30             	sub    $0x30,%esp
 815b36a:	8b 45 14             	mov    0x14(%ebp),%eax
 815b36d:	89 04 24             	mov    %eax,(%esp)
 815b370:	e8 ad 36 00 00       	call   815ea22 <_ZN6Stream12GetOutBufferIN6Taiwan16SigStayTimeEventEEEPT_v>
 815b375:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815b378:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815b37c:	75 2c                	jne    815b3aa <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x48>
 815b37e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b385:	e8 76 a4 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b38a:	89 c2                	mov    %eax,%edx
 815b38c:	c7 02 06 73 b7 08    	movl   $0x8b77306,(%edx)
 815b392:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b399:	00 
 815b39a:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b3a1:	09 
 815b3a2:	89 04 24             	mov    %eax,(%esp)
 815b3a5:	e8 a6 98 5c 00       	call   8724c50 <__cxa_throw>
 815b3aa:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815b3af:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b3b6:	00 
 815b3b7:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815b3be:	00 
 815b3bf:	89 04 24             	mov    %eax,(%esp)
 815b3c2:	e8 77 9e 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815b3c7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815b3ca:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815b3ce:	75 2c                	jne    815b3fc <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x9a>
 815b3d0:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b3d7:	e8 24 a4 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b3dc:	89 c2                	mov    %eax,%edx
 815b3de:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815b3e4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b3eb:	00 
 815b3ec:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b3f3:	09 
 815b3f4:	89 04 24             	mov    %eax,(%esp)
 815b3f7:	e8 54 98 5c 00       	call   8724c50 <__cxa_throw>
 815b3fc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b3ff:	8b 00                	mov    (%eax),%eax
 815b401:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815b408:	00 
 815b409:	89 04 24             	mov    %eax,(%esp)
 815b40c:	e8 3a dc fa ff       	call   810904b <_Z14NumberToStringji>
 815b411:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b415:	c7 44 24 04 bc 74 b7 	movl   $0x8b774bc,0x4(%esp)
 815b41c:	08 
 815b41d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b420:	89 04 24             	mov    %eax,(%esp)
 815b423:	e8 98 8d 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815b428:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b42f:	00 
 815b430:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b433:	89 04 24             	mov    %eax,(%esp)
 815b436:	e8 eb 8e 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815b43b:	83 f0 01             	xor    $0x1,%eax
 815b43e:	84 c0                	test   %al,%al
 815b440:	74 2c                	je     815b46e <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x10c>
 815b442:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b449:	e8 b2 a3 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b44e:	89 c2                	mov    %eax,%edx
 815b450:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815b456:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b45d:	00 
 815b45e:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b465:	09 
 815b466:	89 04 24             	mov    %eax,(%esp)
 815b469:	e8 e2 97 5c 00       	call   8724c50 <__cxa_throw>
 815b46e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b471:	89 04 24             	mov    %eax,(%esp)
 815b474:	e8 f3 6e f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815b479:	85 c0                	test   %eax,%eax
 815b47b:	0f 94 c0             	sete   %al
 815b47e:	84 c0                	test   %al,%al
 815b480:	0f 84 89 00 00 00    	je     815b50f <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x1ad>
 815b486:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b489:	8b 00                	mov    (%eax),%eax
 815b48b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815b492:	00 
 815b493:	89 04 24             	mov    %eax,(%esp)
 815b496:	e8 b0 db fa ff       	call   810904b <_Z14NumberToStringji>
 815b49b:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b49f:	c7 44 24 04 08 75 b7 	movl   $0x8b77508,0x4(%esp)
 815b4a6:	08 
 815b4a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b4aa:	89 04 24             	mov    %eax,(%esp)
 815b4ad:	e8 0e 8d 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815b4b2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b4b9:	00 
 815b4ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b4bd:	89 04 24             	mov    %eax,(%esp)
 815b4c0:	e8 61 8e 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815b4c5:	83 f0 01             	xor    $0x1,%eax
 815b4c8:	84 c0                	test   %al,%al
 815b4ca:	74 2c                	je     815b4f8 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x196>
 815b4cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b4d3:	e8 28 a3 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b4d8:	89 c2                	mov    %eax,%edx
 815b4da:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815b4e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b4e7:	00 
 815b4e8:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b4ef:	09 
 815b4f0:	89 04 24             	mov    %eax,(%esp)
 815b4f3:	e8 58 97 5c 00       	call   8724c50 <__cxa_throw>
 815b4f8:	8b 45 10             	mov    0x10(%ebp),%eax
 815b4fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b4ff:	8b 45 08             	mov    0x8(%ebp),%eax
 815b502:	89 04 24             	mov    %eax,(%esp)
 815b505:	e8 a2 01 00 00       	call   815b6ac <_ZN18CheckStayTimeEvent16sendStayTimeDataEi>
 815b50a:	e9 21 01 00 00       	jmp    815b630 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x2ce>
 815b50f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b512:	89 04 24             	mov    %eax,(%esp)
 815b515:	e8 a2 8f 29 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 815b51a:	83 f0 01             	xor    $0x1,%eax
 815b51d:	84 c0                	test   %al,%al
 815b51f:	74 2c                	je     815b54d <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x1eb>
 815b521:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b528:	e8 d3 a2 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b52d:	89 c2                	mov    %eax,%edx
 815b52f:	c7 02 45 75 b7 08    	movl   $0x8b77545,(%edx)
 815b535:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b53c:	00 
 815b53d:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b544:	09 
 815b545:	89 04 24             	mov    %eax,(%esp)
 815b548:	e8 03 97 5c 00       	call   8724c50 <__cxa_throw>
 815b54d:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 815b554:	8d 45 e8             	lea    -0x18(%ebp),%eax
 815b557:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b55b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815b562:	00 
 815b563:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b566:	89 04 24             	mov    %eax,(%esp)
 815b569:	e8 be b3 fb ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 815b56e:	83 f0 01             	xor    $0x1,%eax
 815b571:	84 c0                	test   %al,%al
 815b573:	74 2c                	je     815b5a1 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x23f>
 815b575:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b57c:	e8 7f a2 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b581:	89 c2                	mov    %eax,%edx
 815b583:	c7 02 4b 75 b7 08    	movl   $0x8b7754b,(%edx)
 815b589:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b590:	00 
 815b591:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b598:	09 
 815b599:	89 04 24             	mov    %eax,(%esp)
 815b59c:	e8 af 96 5c 00       	call   8724c50 <__cxa_throw>
 815b5a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815b5a4:	85 c0                	test   %eax,%eax
 815b5a6:	0f 85 84 00 00 00    	jne    815b630 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x2ce>
 815b5ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815b5af:	8b 00                	mov    (%eax),%eax
 815b5b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815b5b8:	00 
 815b5b9:	89 04 24             	mov    %eax,(%esp)
 815b5bc:	e8 8a da fa ff       	call   810904b <_Z14NumberToStringji>
 815b5c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b5c5:	c7 44 24 04 54 75 b7 	movl   $0x8b77554,0x4(%esp)
 815b5cc:	08 
 815b5cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b5d0:	89 04 24             	mov    %eax,(%esp)
 815b5d3:	e8 e8 8b 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815b5d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b5df:	00 
 815b5e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815b5e3:	89 04 24             	mov    %eax,(%esp)
 815b5e6:	e8 3b 8d 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815b5eb:	83 f0 01             	xor    $0x1,%eax
 815b5ee:	84 c0                	test   %al,%al
 815b5f0:	74 2c                	je     815b61e <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x2bc>
 815b5f2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815b5f9:	e8 02 a2 5c 00       	call   8725800 <__cxa_allocate_exception>
 815b5fe:	89 c2                	mov    %eax,%edx
 815b600:	c7 02 c1 75 b7 08    	movl   $0x8b775c1,(%edx)
 815b606:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815b60d:	00 
 815b60e:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815b615:	09 
 815b616:	89 04 24             	mov    %eax,(%esp)
 815b619:	e8 32 96 5c 00       	call   8724c50 <__cxa_throw>
 815b61e:	8b 45 10             	mov    0x10(%ebp),%eax
 815b621:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b625:	8b 45 08             	mov    0x8(%ebp),%eax
 815b628:	89 04 24             	mov    %eax,(%esp)
 815b62b:	e8 7c 00 00 00       	call   815b6ac <_ZN18CheckStayTimeEvent16sendStayTimeDataEi>
 815b630:	bb 01 00 00 00       	mov    $0x1,%ebx
 815b635:	eb 6c                	jmp    815b6a3 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x341>
 815b637:	83 fa 01             	cmp    $0x1,%edx
 815b63a:	74 08                	je     815b644 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x2e2>
 815b63c:	89 04 24             	mov    %eax,(%esp)
 815b63f:	e8 0c 81 98 00       	call   8ae3750 <_Unwind_Resume>
 815b644:	89 04 24             	mov    %eax,(%esp)
 815b647:	e8 94 a6 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815b64c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815b64f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815b652:	89 44 24 14          	mov    %eax,0x14(%esp)
 815b656:	c7 44 24 10 d0 75 b7 	movl   $0x8b775d0,0x10(%esp)
 815b65d:	08 
 815b65e:	c7 44 24 0c 8a 01 00 	movl   $0x18a,0xc(%esp)
 815b665:	00 
 815b666:	c7 44 24 08 e0 91 b7 	movl   $0x8b791e0,0x8(%esp)
 815b66d:	08 
 815b66e:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815b675:	08 
 815b676:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815b67d:	e8 88 85 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815b682:	bb 00 00 00 00       	mov    $0x0,%ebx
 815b687:	e8 a4 a5 5c 00       	call   8725c30 <__cxa_end_catch>
 815b68c:	eb 15                	jmp    815b6a3 <_ZN18CheckStayTimeEvent8dispatchEiiP6Stream+0x341>
 815b68e:	89 d3                	mov    %edx,%ebx
 815b690:	89 c6                	mov    %eax,%esi
 815b692:	e8 99 a5 5c 00       	call   8725c30 <__cxa_end_catch>
 815b697:	89 f0                	mov    %esi,%eax
 815b699:	89 da                	mov    %ebx,%edx
 815b69b:	89 04 24             	mov    %eax,(%esp)
 815b69e:	e8 ad 80 98 00       	call   8ae3750 <_Unwind_Resume>
 815b6a3:	89 d8                	mov    %ebx,%eax
 815b6a5:	83 c4 30             	add    $0x30,%esp
 815b6a8:	5b                   	pop    %ebx
 815b6a9:	5e                   	pop    %esi
 815b6aa:	5d                   	pop    %ebp
 815b6ab:	c3                   	ret

```

```c
// CheckStayTimeEvent::dispatch @ 0x815b362

/* CheckStayTimeEvent::dispatch(int, int, Stream*) */

undefined4 __thiscall
CheckStayTimeEvent::dispatch(CheckStayTimeEvent *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int local_1c;
  SigStayTimeEvent *local_18;
  MySQL *local_14;
  
                    /* try { // try from 0815b370 to 0815b62f has its CatchHandler @ 0815b637 */
  local_18 = Stream::GetOutBuffer<Taiwan::SigStayTimeEvent>(param_3);
  if (local_18 == (SigStayTimeEvent *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "context null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,"seLect reward_flag from event_stay_time_charac where m_id=%s",uVar3);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 == 0) {
    uVar3 = NumberToString(*(uint *)local_18,0);
    MySQL::set_query(local_14,"inSert into event_stay_time_charac values(\'%s\', 1, 1, now())",uVar3
                    );
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    sendStayTimeData(this,param_2);
  }
  else {
    cVar1 = MySQL::fetch(local_14);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    local_1c = 0;
    cVar1 = MySQL::get_int(local_14,0,&local_1c);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "get_int";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    if (local_1c == 0) {
      uVar3 = NumberToString(*(uint *)local_18,0);
      MySQL::set_query(local_14,
                       "upDate event_stay_time_charac set reward_flag=1, reward_count=reward_count+1, mod_date=now() where m_id = %s"
                       ,uVar3);
      cVar1 = MySQL::exec(local_14,true);
      if (cVar1 != '\x01') {
        puVar2 = (undefined4 *)__cxa_allocate_exception(4);
        *puVar2 = "update_exec";
                    /* WARNING: Subroutine does not return */
        __cxa_throw(puVar2,&char_const*::typeinfo,0);
      }
      sendStayTimeData(this,param_2);
    }
  }
  return 1;
}

```

---

## sendStayTimeData

```asm
// === 0815b6ac CheckStayTimeEvent::sendStayTimeData  [0x0815b6ac-0x815b769] ===
 815b6ac:	55                   	push   %ebp
 815b6ad:	89 e5                	mov    %esp,%ebp
 815b6af:	56                   	push   %esi
 815b6b0:	53                   	push   %ebx
 815b6b1:	83 ec 20             	sub    $0x20,%esp
 815b6b4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815b6b9:	c7 44 24 08 92 01 00 	movl   $0x192,0x8(%esp)
 815b6c0:	00 
 815b6c1:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815b6c8:	08 
 815b6c9:	89 04 24             	mov    %eax,(%esp)
 815b6cc:	e8 b5 43 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815b6d1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815b6d8:	00 
 815b6d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 815b6dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b6e0:	89 04 24             	mov    %eax,(%esp)
 815b6e3:	e8 3e d5 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815b6e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 815b6eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 815b6ef:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 815b6f6:	00 
 815b6f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b6fa:	89 04 24             	mov    %eax,(%esp)
 815b6fd:	e8 4e 82 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815b702:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b705:	89 04 24             	mov    %eax,(%esp)
 815b708:	e8 41 d5 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815b70d:	89 04 24             	mov    %eax,(%esp)
 815b710:	e8 61 33 00 00       	call   815ea76 <_ZN12CStreamGuard11GetInBufferIN6Taiwan16SigStayTimeEventEEEPT_v>
 815b715:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815b718:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815b71c:	74 39                	je     815b757 <_ZN18CheckStayTimeEvent16sendStayTimeDataEi+0xab>
 815b71e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815b723:	8d 55 ec             	lea    -0x14(%ebp),%edx
 815b726:	89 54 24 08          	mov    %edx,0x8(%esp)
 815b72a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815b731:	00 
 815b732:	89 04 24             	mov    %eax,(%esp)
 815b735:	e8 a4 58 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815b73a:	eb 1b                	jmp    815b757 <_ZN18CheckStayTimeEvent16sendStayTimeDataEi+0xab>
 815b73c:	89 d3                	mov    %edx,%ebx
 815b73e:	89 c6                	mov    %eax,%esi
 815b740:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b743:	89 04 24             	mov    %eax,(%esp)
 815b746:	e8 87 11 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815b74b:	89 f0                	mov    %esi,%eax
 815b74d:	89 da                	mov    %ebx,%edx
 815b74f:	89 04 24             	mov    %eax,(%esp)
 815b752:	e8 f9 7f 98 00       	call   8ae3750 <_Unwind_Resume>
 815b757:	8d 45 ec             	lea    -0x14(%ebp),%eax
 815b75a:	89 04 24             	mov    %eax,(%esp)
 815b75d:	e8 70 11 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815b762:	83 c4 20             	add    $0x20,%esp
 815b765:	5b                   	pop    %ebx
 815b766:	5e                   	pop    %esi
 815b767:	5d                   	pop    %ebp
 815b768:	c3                   	ret
 815b769:	90                   	nop

```

```c
// CheckStayTimeEvent::sendStayTimeData @ 0x815b6ac

/* CheckStayTimeEvent::sendStayTimeData(int) */

void __thiscall CheckStayTimeEvent::sendStayTimeData(CheckStayTimeEvent *this,int param_1)

{
  Stream *pSVar1;
  CStreamGuard *this_00;
  CStreamGuard local_18 [8];
  SigStayTimeEvent *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x192);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
                    /* try { // try from 0815b6fd to 0815b739 has its CatchHandler @ 0815b73c */
  Taiwan::internal_stream(local_18,5,param_1);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<Taiwan::SigStayTimeEvent>(this_00);
  if (local_10 != (SigStayTimeEvent *)0x0) {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

