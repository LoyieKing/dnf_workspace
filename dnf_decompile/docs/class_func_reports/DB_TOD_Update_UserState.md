# DB_TOD_Update_UserState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084403aa DB_TOD_Update_UserState::dispatch  [0x084403aa-0x8440547] ===
 84403aa:	55                   	push   %ebp
 84403ab:	89 e5                	mov    %esp,%ebp
 84403ad:	57                   	push   %edi
 84403ae:	56                   	push   %esi
 84403af:	53                   	push   %ebx
 84403b0:	83 ec 6c             	sub    $0x6c,%esp
 84403b3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84403b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84403bf:	00 
 84403c0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84403c7:	00 
 84403c8:	89 04 24             	mov    %eax,(%esp)
 84403cb:	e8 6e 4e fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84403d0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84403d3:	8b 45 14             	mov    0x14(%ebp),%eax
 84403d6:	89 04 24             	mov    %eax,(%esp)
 84403d9:	e8 f0 38 01 00       	call   8453cce <_ZN6Stream12GetOutBufferI26SIG_REQUEST_TOD_USER_STATEEEPT_v>
 84403de:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84403e1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84403e4:	8b 40 04             	mov    0x4(%eax),%eax
 84403e7:	85 c0                	test   %eax,%eax
 84403e9:	75 0a                	jne    84403f5 <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0x4b>
 84403eb:	b8 01 00 00 00       	mov    $0x1,%eax
 84403f0:	e9 4a 01 00 00       	jmp    844053f <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0x195>
 84403f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84403f8:	8b 00                	mov    (%eax),%eax
 84403fa:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84403fd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440400:	8b 78 14             	mov    0x14(%eax),%edi
 8440403:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440406:	8b 70 10             	mov    0x10(%eax),%esi
 8440409:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844040c:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 8440410:	0f bf d8             	movswl %ax,%ebx
 8440413:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440416:	83 c0 0c             	add    $0xc,%eax
 8440419:	89 04 24             	mov    %eax,(%esp)
 844041c:	e8 1f e8 de ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 8440421:	0f b7 c8             	movzwl %ax,%ecx
 8440424:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8440427:	8b 50 08             	mov    0x8(%eax),%edx
 844042a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844042d:	8b 40 04             	mov    0x4(%eax),%eax
 8440430:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8440433:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8440436:	89 44 24 20          	mov    %eax,0x20(%esp)
 844043a:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 844043e:	89 74 24 18          	mov    %esi,0x18(%esp)
 8440442:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8440446:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844044a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844044e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440451:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440455:	c7 44 24 04 74 5e c5 	movl   $0x8c55e74,0x4(%esp)
 844045c:	08 
 844045d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8440460:	89 04 24             	mov    %eax,(%esp)
 8440463:	e8 58 3d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440468:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844046f:	00 
 8440470:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8440473:	89 04 24             	mov    %eax,(%esp)
 8440476:	e8 ab 3e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844047b:	83 f0 01             	xor    $0x1,%eax
 844047e:	84 c0                	test   %al,%al
 8440480:	74 0a                	je     844048c <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0xe2>
 8440482:	b8 00 00 00 00       	mov    $0x0,%eax
 8440487:	e9 b3 00 00 00       	jmp    844053f <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0x195>
 844048c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844048f:	89 04 24             	mov    %eax,(%esp)
 8440492:	e8 79 3e fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8440497:	09 d0                	or     %edx,%eax
 8440499:	85 c0                	test   %eax,%eax
 844049b:	0f 94 c0             	sete   %al
 844049e:	84 c0                	test   %al,%al
 84404a0:	0f 84 94 00 00 00    	je     844053a <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0x190>
 84404a6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404a9:	8b 40 14             	mov    0x14(%eax),%eax
 84404ac:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84404af:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404b2:	8b 78 10             	mov    0x10(%eax),%edi
 84404b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404b8:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 84404bc:	0f bf f0             	movswl %ax,%esi
 84404bf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404c2:	83 c0 0c             	add    $0xc,%eax
 84404c5:	89 04 24             	mov    %eax,(%esp)
 84404c8:	e8 73 e7 de ff       	call   822ec40 <_ZNK9TOD_Layer8GetLayerEv>
 84404cd:	0f b7 d8             	movzwl %ax,%ebx
 84404d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404d3:	8b 48 08             	mov    0x8(%eax),%ecx
 84404d6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404d9:	8b 50 04             	mov    0x4(%eax),%edx
 84404dc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84404df:	8b 00                	mov    (%eax),%eax
 84404e1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84404e4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84404e7:	89 44 24 20          	mov    %eax,0x20(%esp)
 84404eb:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 84404ef:	89 74 24 18          	mov    %esi,0x18(%esp)
 84404f3:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 84404f7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84404fb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84404ff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8440502:	89 44 24 08          	mov    %eax,0x8(%esp)
 8440506:	c7 44 24 04 50 5f c5 	movl   $0x8c55f50,0x4(%esp)
 844050d:	08 
 844050e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8440511:	89 04 24             	mov    %eax,(%esp)
 8440514:	e8 a7 3c fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8440519:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8440520:	00 
 8440521:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8440524:	89 04 24             	mov    %eax,(%esp)
 8440527:	e8 fa 3d fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844052c:	83 f0 01             	xor    $0x1,%eax
 844052f:	84 c0                	test   %al,%al
 8440531:	74 07                	je     844053a <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0x190>
 8440533:	b8 00 00 00 00       	mov    $0x0,%eax
 8440538:	eb 05                	jmp    844053f <_ZN23DB_TOD_Update_UserState8dispatchEiiP6Stream+0x195>
 844053a:	b8 01 00 00 00       	mov    $0x1,%eax
 844053f:	83 c4 6c             	add    $0x6c,%esp
 8440542:	5b                   	pop    %ebx
 8440543:	5e                   	pop    %esi
 8440544:	5f                   	pop    %edi
 8440545:	5d                   	pop    %ebp
 8440546:	c3                   	ret
 8440547:	90                   	nop

```

```c
// DB_TOD_Update_UserState::dispatch @ 0x84403aa

/* DB_TOD_Update_UserState::dispatch(int, int, Stream*) */

undefined4 DB_TOD_Update_UserState::dispatch(int param_1,int param_2,Stream *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  MySQL *this;
  SIG_REQUEST_TOD_USER_STATE *pSVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar5 = Stream::GetOutBuffer<SIG_REQUEST_TOD_USER_STATE>(in_stack_00000010);
  if (*(int *)(pSVar5 + 4) == 0) {
    uVar6 = 1;
  }
  else {
    uVar6 = *(undefined4 *)pSVar5;
    uVar2 = *(undefined4 *)(pSVar5 + 0x14);
    uVar3 = *(undefined4 *)(pSVar5 + 0x10);
    sVar1 = *(short *)(pSVar5 + 0xe);
    uVar7 = TOD_Layer::GetLayer((TOD_Layer *)(pSVar5 + 0xc));
    MySQL::set_query(this,
                     "upDate charac_tower_despair set first_layer_start_date=from_unixtime(%d), today_enter_count=%d, last_clear_layer=%d, enter_count_by_week=%d, m_date=from_unixtime(%d), last_clear_date=from_unixtime(%d) where charac_no=%u"
                     ,*(undefined4 *)(pSVar5 + 4),*(undefined4 *)(pSVar5 + 8),uVar7 & 0xffff,
                     (int)sVar1,uVar3,uVar2,uVar6);
    cVar4 = MySQL::exec(this,true);
    if (cVar4 == '\x01') {
      lVar8 = MySQL::getAffectedRowCount(this);
      if (lVar8 == 0) {
        uVar6 = *(undefined4 *)(pSVar5 + 0x14);
        uVar2 = *(undefined4 *)(pSVar5 + 0x10);
        sVar1 = *(short *)(pSVar5 + 0xe);
        uVar7 = TOD_Layer::GetLayer((TOD_Layer *)(pSVar5 + 0xc));
        MySQL::set_query(this,
                         "inSert into charac_tower_despair(charac_no,first_layer_start_date,today_enter_count,last_clear_layer,enter_count_by_week,m_date,last_clear_date) values(%u,from_unixtime(%d),%d,%d,%d,from_unixtime(%d),from_unixtime(%d))"
                         ,*(undefined4 *)pSVar5,*(undefined4 *)(pSVar5 + 4),
                         *(undefined4 *)(pSVar5 + 8),uVar7 & 0xffff,(int)sVar1,uVar2,uVar6);
        cVar4 = MySQL::exec(this,true);
        if (cVar4 != '\x01') {
          return 0;
        }
      }
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
  }
  return uVar6;
}

```

