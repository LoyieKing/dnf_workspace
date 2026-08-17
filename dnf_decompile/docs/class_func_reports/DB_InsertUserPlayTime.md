# DB_InsertUserPlayTime

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084256b4 DB_InsertUserPlayTime::dispatch  [0x084256b4-0x84258ed] ===
 84256b4:	55                   	push   %ebp
 84256b5:	89 e5                	mov    %esp,%ebp
 84256b7:	57                   	push   %edi
 84256b8:	56                   	push   %esi
 84256b9:	53                   	push   %ebx
 84256ba:	83 ec 7c             	sub    $0x7c,%esp
 84256bd:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84256c2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84256c9:	00 
 84256ca:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84256d1:	00 
 84256d2:	89 04 24             	mov    %eax,(%esp)
 84256d5:	e8 64 fb fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84256da:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84256dd:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84256e4:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84256eb:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84256f2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84256f9:	66 c7 45 d2 00 00    	movw   $0x0,-0x2e(%ebp)
 84256ff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8425702:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425706:	8b 45 14             	mov    0x14(%ebp),%eax
 8425709:	89 04 24             	mov    %eax,(%esp)
 842570c:	e8 85 70 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425711:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8425714:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425718:	8b 45 14             	mov    0x14(%ebp),%eax
 842571b:	89 04 24             	mov    %eax,(%esp)
 842571e:	e8 a1 6e 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8425723:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8425726:	89 44 24 04          	mov    %eax,0x4(%esp)
 842572a:	8b 45 14             	mov    0x14(%ebp),%eax
 842572d:	89 04 24             	mov    %eax,(%esp)
 8425730:	e8 8f 6e 1f 00       	call   861c5c4 <_ZN6StreamrsERi>
 8425735:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8425738:	89 44 24 04          	mov    %eax,0x4(%esp)
 842573c:	8b 45 14             	mov    0x14(%ebp),%eax
 842573f:	89 04 24             	mov    %eax,(%esp)
 8425742:	e8 4f 70 1f 00       	call   861c796 <_ZN6StreamrsERj>
 8425747:	8d 45 d2             	lea    -0x2e(%ebp),%eax
 842574a:	89 44 24 04          	mov    %eax,0x4(%esp)
 842574e:	8b 45 14             	mov    0x14(%ebp),%eax
 8425751:	89 04 24             	mov    %eax,(%esp)
 8425754:	e8 09 70 1f 00       	call   861c762 <_ZN6StreamrsERt>
 8425759:	8d 45 d1             	lea    -0x2f(%ebp),%eax
 842575c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8425760:	8b 45 14             	mov    0x14(%ebp),%eax
 8425763:	89 04 24             	mov    %eax,(%esp)
 8425766:	e8 11 6d 1f 00       	call   861c47c <_ZN6StreamrsERb>
 842576b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8425772:	00 
 8425773:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842577a:	00 
 842577b:	8d 45 bd             	lea    -0x43(%ebp),%eax
 842577e:	89 04 24             	mov    %eax,(%esp)
 8425781:	e8 3a 85 c5 ff       	call   807dcc0 <memset@plt>
 8425786:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 842578d:	00 
 842578e:	c7 44 24 04 4f e6 c4 	movl   $0x8c4e64f,0x4(%esp)
 8425795:	08 
 8425796:	8d 45 bd             	lea    -0x43(%ebp),%eax
 8425799:	89 04 24             	mov    %eax,(%esp)
 842579c:	e8 ff 80 c5 ff       	call   807d8a0 <memcpy@plt>
 84257a1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84257a4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84257ab:	00 
 84257ac:	89 04 24             	mov    %eax,(%esp)
 84257af:	e8 97 38 ce ff       	call   810904b <_Z14NumberToStringji>
 84257b4:	89 c2                	mov    %eax,%edx
 84257b6:	0f b6 45 d1          	movzbl -0x2f(%ebp),%eax
 84257ba:	84 c0                	test   %al,%al
 84257bc:	74 07                	je     84257c5 <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x111>
 84257be:	b8 00 00 00 00       	mov    $0x0,%eax
 84257c3:	eb 05                	jmp    84257ca <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x116>
 84257c5:	b8 01 00 00 00       	mov    $0x1,%eax
 84257ca:	0f b7 4d d2          	movzwl -0x2e(%ebp),%ecx
 84257ce:	0f b7 f9             	movzwl %cx,%edi
 84257d1:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 84257d4:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 84257d7:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 84257da:	89 54 24 20          	mov    %edx,0x20(%esp)
 84257de:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84257e2:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84257e6:	89 74 24 14          	mov    %esi,0x14(%esp)
 84257ea:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84257ee:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84257f2:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84257f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84257f9:	c7 44 24 04 60 e6 c4 	movl   $0x8c4e660,0x4(%esp)
 8425800:	08 
 8425801:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8425804:	89 04 24             	mov    %eax,(%esp)
 8425807:	e8 b4 e9 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842580c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8425813:	00 
 8425814:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8425817:	89 04 24             	mov    %eax,(%esp)
 842581a:	e8 07 eb fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 842581f:	83 f0 01             	xor    $0x1,%eax
 8425822:	84 c0                	test   %al,%al
 8425824:	75 11                	jne    8425837 <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x183>
 8425826:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8425829:	89 04 24             	mov    %eax,(%esp)
 842582c:	e8 df ea fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8425831:	09 d0                	or     %edx,%eax
 8425833:	85 c0                	test   %eax,%eax
 8425835:	75 07                	jne    842583e <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x18a>
 8425837:	b8 01 00 00 00       	mov    $0x1,%eax
 842583c:	eb 05                	jmp    8425843 <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x18f>
 842583e:	b8 00 00 00 00       	mov    $0x0,%eax
 8425843:	84 c0                	test   %al,%al
 8425845:	0f 84 96 00 00 00    	je     84258e1 <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x22d>
 842584b:	0f b6 45 d1          	movzbl -0x2f(%ebp),%eax
 842584f:	84 c0                	test   %al,%al
 8425851:	74 07                	je     842585a <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x1a6>
 8425853:	bb 00 00 00 00       	mov    $0x0,%ebx
 8425858:	eb 05                	jmp    842585f <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x1ab>
 842585a:	bb 01 00 00 00       	mov    $0x1,%ebx
 842585f:	0f b7 45 d2          	movzwl -0x2e(%ebp),%eax
 8425863:	0f b7 c0             	movzwl %ax,%eax
 8425866:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8425869:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 842586c:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 842586f:	8b 7d d8             	mov    -0x28(%ebp),%edi
 8425872:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8425875:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8425878:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 842587f:	00 
 8425880:	89 04 24             	mov    %eax,(%esp)
 8425883:	e8 c3 37 ce ff       	call   810904b <_Z14NumberToStringji>
 8425888:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 842588c:	8b 55 b0             	mov    -0x50(%ebp),%edx
 842588f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8425893:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8425896:	89 54 24 18          	mov    %edx,0x18(%esp)
 842589a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 842589e:	89 74 24 10          	mov    %esi,0x10(%esp)
 84258a2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84258a6:	8d 45 bd             	lea    -0x43(%ebp),%eax
 84258a9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84258ad:	c7 44 24 04 28 e7 c4 	movl   $0x8c4e728,0x4(%esp)
 84258b4:	08 
 84258b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84258b8:	89 04 24             	mov    %eax,(%esp)
 84258bb:	e8 00 e9 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84258c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84258c7:	00 
 84258c8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84258cb:	89 04 24             	mov    %eax,(%esp)
 84258ce:	e8 53 ea fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84258d3:	83 f0 01             	xor    $0x1,%eax
 84258d6:	84 c0                	test   %al,%al
 84258d8:	74 07                	je     84258e1 <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x22d>
 84258da:	b8 00 00 00 00       	mov    $0x0,%eax
 84258df:	eb 05                	jmp    84258e6 <_ZN21DB_InsertUserPlayTime8dispatchEiiP6Stream+0x232>
 84258e1:	b8 01 00 00 00       	mov    $0x1,%eax
 84258e6:	83 c4 7c             	add    $0x7c,%esp
 84258e9:	5b                   	pop    %ebx
 84258ea:	5e                   	pop    %esi
 84258eb:	5f                   	pop    %edi
 84258ec:	5d                   	pop    %ebp
 84258ed:	c3                   	ret

```

```c
// DB_InsertUserPlayTime::dispatch @ 0x84256b4

/* DB_InsertUserPlayTime::dispatch(int, int, Stream*) */

undefined4 DB_InsertUserPlayTime::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  undefined1 local_47 [20];
  bool local_33;
  ushort local_32;
  uint local_30;
  int local_2c;
  int local_28;
  uint local_24;
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_32 = 0;
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  Stream::operator>>(in_stack_00000010,&local_2c);
  Stream::operator>>(in_stack_00000010,&local_30);
  Stream::operator>>(in_stack_00000010,&local_32);
  Stream::operator>>(in_stack_00000010,&local_33);
  memset(local_47,0,0x14);
  memcpy(local_47,"member_play_info",0x11);
  uVar6 = NumberToString(local_24,0);
  MySQL::set_query(local_20,
                   "upDate %s set play_time=play_time+%d,play_count=play_count+1,trade_cnt=trade_cnt+%d, exp=exp+%u, used_fatigue=used_fatigue+%u, ting_count=ting_count+%d where occ_date=cast(now() as date) and m_id=%s"
                   ,local_47,local_28,local_2c,local_30,(uint)local_32,(uint)(local_33 == false),
                   uVar6);
  cVar5 = MySQL::exec(local_20,true);
  if ((cVar5 == '\x01') && (lVar8 = MySQL::getAffectedRowCount(local_20), lVar8 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar4 = local_28;
  iVar3 = local_2c;
  uVar2 = local_30;
  if (bVar1) {
    uVar7 = (uint)local_32;
    uVar6 = NumberToString(local_24,0);
    MySQL::set_query(local_20,
                     "inSert into %s(occ_date,m_id,play_time,play_count,trade_cnt,exp,used_fatigue,ting_count) values(cast(now() as date),%s,%d,1,%d,%u,%u,%d)"
                     ,local_47,uVar6,iVar4,iVar3,uVar2,uVar7,(uint)(local_33 == false));
    cVar5 = MySQL::exec(local_20,true);
    if (cVar5 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

