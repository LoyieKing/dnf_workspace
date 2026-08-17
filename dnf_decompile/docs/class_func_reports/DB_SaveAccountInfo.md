# DB_SaveAccountInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08432646 DB_SaveAccountInfo::dispatch  [0x08432646-0x84327b9] ===
 8432646:	55                   	push   %ebp
 8432647:	89 e5                	mov    %esp,%ebp
 8432649:	57                   	push   %edi
 843264a:	56                   	push   %esi
 843264b:	53                   	push   %ebx
 843264c:	83 ec 4c             	sub    $0x4c,%esp
 843264f:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8432654:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843265b:	00 
 843265c:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8432663:	00 
 8432664:	89 04 24             	mov    %eax,(%esp)
 8432667:	e8 d2 2b fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843266c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843266f:	8b 45 14             	mov    0x14(%ebp),%eax
 8432672:	89 04 24             	mov    %eax,(%esp)
 8432675:	e8 26 09 02 00       	call   8452fa0 <_ZN6Stream12GetOutBufferI21SIG_SAVE_ACCOUNT_INFOEEPT_v>
 843267a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843267d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432680:	8b 00                	mov    (%eax),%eax
 8432682:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432689:	00 
 843268a:	89 04 24             	mov    %eax,(%esp)
 843268d:	e8 b9 69 cd ff       	call   810904b <_Z14NumberToStringji>
 8432692:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8432695:	8d 7a 2c             	lea    0x2c(%edx),%edi
 8432698:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843269b:	8d 72 28             	lea    0x28(%edx),%esi
 843269e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84326a1:	0f b6 52 04          	movzbl 0x4(%edx),%edx
 84326a5:	0f b6 ca             	movzbl %dl,%ecx
 84326a8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84326ab:	8b 52 08             	mov    0x8(%edx),%edx
 84326ae:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 84326b1:	83 c3 1c             	add    $0x1c,%ebx
 84326b4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84326b8:	89 7c 24 18          	mov    %edi,0x18(%esp)
 84326bc:	89 74 24 14          	mov    %esi,0x14(%esp)
 84326c0:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84326c4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84326c8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84326cc:	c7 44 24 04 40 22 c5 	movl   $0x8c52240,0x4(%esp)
 84326d3:	08 
 84326d4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84326d7:	89 04 24             	mov    %eax,(%esp)
 84326da:	e8 e1 1a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84326df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84326e6:	00 
 84326e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84326ea:	89 04 24             	mov    %eax,(%esp)
 84326ed:	e8 34 1c fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84326f2:	83 f0 01             	xor    $0x1,%eax
 84326f5:	84 c0                	test   %al,%al
 84326f7:	75 11                	jne    843270a <_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream+0xc4>
 84326f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84326fc:	89 04 24             	mov    %eax,(%esp)
 84326ff:	e8 0c 1c fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8432704:	09 d0                	or     %edx,%eax
 8432706:	85 c0                	test   %eax,%eax
 8432708:	75 07                	jne    8432711 <_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream+0xcb>
 843270a:	b8 01 00 00 00       	mov    $0x1,%eax
 843270f:	eb 05                	jmp    8432716 <_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream+0xd0>
 8432711:	b8 00 00 00 00       	mov    $0x0,%eax
 8432716:	84 c0                	test   %al,%al
 8432718:	0f 84 8f 00 00 00    	je     84327ad <_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream+0x167>
 843271e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432721:	83 c0 2c             	add    $0x2c,%eax
 8432724:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8432727:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843272a:	83 c0 28             	add    $0x28,%eax
 843272d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8432730:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432733:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 8432737:	0f b6 f0             	movzbl %al,%esi
 843273a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 843273d:	8b 58 08             	mov    0x8(%eax),%ebx
 8432740:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432743:	8d 78 1c             	lea    0x1c(%eax),%edi
 8432746:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8432749:	8b 00                	mov    (%eax),%eax
 843274b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8432752:	00 
 8432753:	89 04 24             	mov    %eax,(%esp)
 8432756:	e8 f0 68 cd ff       	call   810904b <_Z14NumberToStringji>
 843275b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 843275e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8432762:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8432765:	89 54 24 18          	mov    %edx,0x18(%esp)
 8432769:	89 74 24 14          	mov    %esi,0x14(%esp)
 843276d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8432771:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8432775:	89 44 24 08          	mov    %eax,0x8(%esp)
 8432779:	c7 44 24 04 c4 22 c5 	movl   $0x8c522c4,0x4(%esp)
 8432780:	08 
 8432781:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432784:	89 04 24             	mov    %eax,(%esp)
 8432787:	e8 34 1a fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843278c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8432793:	00 
 8432794:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8432797:	89 04 24             	mov    %eax,(%esp)
 843279a:	e8 87 1b fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 843279f:	83 f0 01             	xor    $0x1,%eax
 84327a2:	84 c0                	test   %al,%al
 84327a4:	74 07                	je     84327ad <_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream+0x167>
 84327a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84327ab:	eb 05                	jmp    84327b2 <_ZN18DB_SaveAccountInfo8dispatchEiiP6Stream+0x16c>
 84327ad:	b8 01 00 00 00       	mov    $0x1,%eax
 84327b2:	83 c4 4c             	add    $0x4c,%esp
 84327b5:	5b                   	pop    %ebx
 84327b6:	5e                   	pop    %esi
 84327b7:	5f                   	pop    %edi
 84327b8:	5d                   	pop    %ebp
 84327b9:	c3                   	ret

```

```c
// DB_SaveAccountInfo::dispatch @ 0x8432646

/* DB_SaveAccountInfo::dispatch(int, int, Stream*) */

undefined4 DB_SaveAccountInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_ACCOUNT_INFO SVar1;
  bool bVar2;
  char cVar3;
  MySQL *this;
  SIG_SAVE_ACCOUNT_INFO *pSVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  pSVar4 = Stream::GetOutBuffer<SIG_SAVE_ACCOUNT_INFO>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)pSVar4,0);
  MySQL::set_query(this,
                   "upDate member_play_info set ip=\"%s\", last_play_time=%u, pcbang_flag=%d, end_ip=\"%s\", mac_addr=\"%s\" where occ_date=now() and m_id=%s"
                   ,pSVar4 + 0x1c,*(undefined4 *)(pSVar4 + 8),(uint)(byte)pSVar4[4],pSVar4 + 0x28,
                   pSVar4 + 0x2c,uVar5);
  cVar3 = MySQL::exec(this,true);
  if ((cVar3 == '\x01') && (lVar7 = MySQL::getAffectedRowCount(this), lVar7 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    SVar1 = pSVar4[4];
    uVar5 = *(undefined4 *)(pSVar4 + 8);
    uVar6 = NumberToString(*(uint *)pSVar4,0);
    MySQL::set_query(this,
                     "inSert into member_play_info(occ_date, m_id, play_count, ip, last_play_time, pcbang_flag, end_ip, mac_addr) values(now(), %s, 1, \"%s\", %u, %d, \"%s\", \"%s\")"
                     ,uVar6,pSVar4 + 0x1c,uVar5,(uint)(byte)SVar1,pSVar4 + 0x28,pSVar4 + 0x2c);
    cVar3 = MySQL::exec(this,true);
    if (cVar3 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

