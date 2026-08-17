# DB_UpdateQueryCountTimerLogdb

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0841c458 DB_UpdateQueryCountTimerLogdb::dispatch  [0x0841c458-0x841c5d3] ===
 841c458:	55                   	push   %ebp
 841c459:	89 e5                	mov    %esp,%ebp
 841c45b:	83 ec 68             	sub    $0x68,%esp
 841c45e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841c463:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c46a:	00 
 841c46b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841c472:	00 
 841c473:	89 04 24             	mov    %eax,(%esp)
 841c476:	e8 c3 8d fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841c47b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 841c47e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841c481:	89 04 24             	mov    %eax,(%esp)
 841c484:	e8 79 7d e8 ff       	call   82a4202 <_ZN5MySQL15GetQueryCounterEv>
 841c489:	89 45 e0             	mov    %eax,-0x20(%ebp)
 841c48c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841c48f:	89 04 24             	mov    %eax,(%esp)
 841c492:	e8 bb 11 03 00       	call   844d652 <_ZN13CQueryCounter18GetQueryCountTableEv>
 841c497:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 841c49a:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 841c4a1:	e8 f8 f7 ca ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 841c4a6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 841c4a9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 841c4ac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841c4af:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c4b3:	89 04 24             	mov    %eax,(%esp)
 841c4b6:	e8 4b 4f 03 00       	call   8451406 <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE5beginEv>
 841c4bb:	83 ec 04             	sub    $0x4,%esp
 841c4be:	e9 cf 00 00 00       	jmp    841c592 <_ZN29DB_UpdateQueryCountTimerLogdb8dispatchEiiP6Stream+0x13a>
 841c4c3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 841c4c6:	89 04 24             	mov    %eax,(%esp)
 841c4c9:	e8 d6 4f 03 00       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 841c4ce:	8b 00                	mov    (%eax),%eax
 841c4d0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 841c4d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 841c4d6:	89 04 24             	mov    %eax,(%esp)
 841c4d9:	e8 c6 4f 03 00       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 841c4de:	8b 40 04             	mov    0x4(%eax),%eax
 841c4e1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 841c4e4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 841c4e8:	0f 8e 86 00 00 00    	jle    841c574 <_ZN29DB_UpdateQueryCountTimerLogdb8dispatchEiiP6Stream+0x11c>
 841c4ee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 841c4f1:	89 04 24             	mov    %eax,(%esp)
 841c4f4:	e8 ab 4f 03 00       	call   84514a4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEptEv>
 841c4f9:	dd 40 08             	fldl   0x8(%eax)
 841c4fc:	dd 05 c8 de c5 08    	fldl   0x8c5dec8
 841c502:	de c9                	fmulp  %st,%st(1)
 841c504:	d9 7d c6             	fnstcw -0x3a(%ebp)
 841c507:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 841c50b:	b4 0c                	mov    $0xc,%ah
 841c50d:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 841c511:	d9 6d c4             	fldcw  -0x3c(%ebp)
 841c514:	db 5d f4             	fistpl -0xc(%ebp)
 841c517:	d9 6d c6             	fldcw  -0x3a(%ebp)
 841c51a:	e8 62 fc ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 841c51f:	89 04 24             	mov    %eax,(%esp)
 841c522:	e8 a3 e5 d2 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 841c527:	89 44 24 18          	mov    %eax,0x18(%esp)
 841c52b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 841c52e:	89 44 24 14          	mov    %eax,0x14(%esp)
 841c532:	8b 45 f0             	mov    -0x10(%ebp),%eax
 841c535:	89 44 24 10          	mov    %eax,0x10(%esp)
 841c539:	8b 45 ec             	mov    -0x14(%ebp),%eax
 841c53c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841c540:	8b 45 e8             	mov    -0x18(%ebp),%eax
 841c543:	89 44 24 08          	mov    %eax,0x8(%esp)
 841c547:	c7 44 24 04 38 ba c4 	movl   $0x8c4ba38,0x4(%esp)
 841c54e:	08 
 841c54f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841c552:	89 04 24             	mov    %eax,(%esp)
 841c555:	e8 66 7c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841c55a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841c561:	00 
 841c562:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841c565:	89 04 24             	mov    %eax,(%esp)
 841c568:	e8 b9 7d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841c56d:	83 f0 01             	xor    $0x1,%eax
 841c570:	84 c0                	test   %al,%al
 841c572:	eb 01                	jmp    841c575 <_ZN29DB_UpdateQueryCountTimerLogdb8dispatchEiiP6Stream+0x11d>
 841c574:	90                   	nop
 841c575:	8d 45 d8             	lea    -0x28(%ebp),%eax
 841c578:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841c57f:	00 
 841c580:	8d 55 d0             	lea    -0x30(%ebp),%edx
 841c583:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c587:	89 04 24             	mov    %eax,(%esp)
 841c58a:	e8 d7 4e 03 00       	call   8451466 <_ZNSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEppEi>
 841c58f:	83 ec 04             	sub    $0x4,%esp
 841c592:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841c595:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841c598:	89 54 24 04          	mov    %edx,0x4(%esp)
 841c59c:	89 04 24             	mov    %eax,(%esp)
 841c59f:	e8 88 4e 03 00       	call   845142c <_ZNSt3mapIiN13CQueryCounter10QUERY_INFOESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 841c5a4:	83 ec 04             	sub    $0x4,%esp
 841c5a7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 841c5aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 841c5ae:	8d 45 d0             	lea    -0x30(%ebp),%eax
 841c5b1:	89 04 24             	mov    %eax,(%esp)
 841c5b4:	e8 99 4e 03 00       	call   8451452 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN13CQueryCounter10QUERY_INFOEEEneERKS5_>
 841c5b9:	84 c0                	test   %al,%al
 841c5bb:	0f 85 02 ff ff ff    	jne    841c4c3 <_ZN29DB_UpdateQueryCountTimerLogdb8dispatchEiiP6Stream+0x6b>
 841c5c1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841c5c4:	89 04 24             	mov    %eax,(%esp)
 841c5c7:	e8 0a 06 1d 00       	call   85ecbd6 <_ZN13CQueryCounter5ResetEv>
 841c5cc:	b8 01 00 00 00       	mov    $0x1,%eax
 841c5d1:	c9                   	leave
 841c5d2:	c3                   	ret
 841c5d3:	90                   	nop

```

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

