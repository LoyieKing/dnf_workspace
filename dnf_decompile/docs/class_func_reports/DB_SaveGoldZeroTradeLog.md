# DB_SaveGoldZeroTradeLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084227f6 DB_SaveGoldZeroTradeLog::dispatch  [0x084227f6-0x8422937] ===
 84227f6:	55                   	push   %ebp
 84227f7:	89 e5                	mov    %esp,%ebp
 84227f9:	57                   	push   %edi
 84227fa:	56                   	push   %esi
 84227fb:	53                   	push   %ebx
 84227fc:	83 ec 7c             	sub    $0x7c,%esp
 84227ff:	8b 45 14             	mov    0x14(%ebp),%eax
 8422802:	89 04 24             	mov    %eax,(%esp)
 8422805:	e8 fe f4 02 00       	call   8451d08 <_ZN6Stream12GetOutBufferI28SIG_SAVE_GOLD_ZERO_TRADE_LOGEEPT_v>
 842280a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 842280d:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8422812:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8422819:	00 
 842281a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8422821:	00 
 8422822:	89 04 24             	mov    %eax,(%esp)
 8422825:	e8 14 2a fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 842282a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 842282d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422830:	83 c0 31             	add    $0x31,%eax
 8422833:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8422836:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422839:	05 9b 00 00 00       	add    $0x9b,%eax
 842283e:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8422841:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422844:	8b 80 dc 00 00 00    	mov    0xdc(%eax),%eax
 842284a:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 842284d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422850:	0f b6 40 30          	movzbl 0x30(%eax),%eax
 8422854:	0f b6 c0             	movzbl %al,%eax
 8422857:	89 45 c8             	mov    %eax,-0x38(%ebp)
 842285a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842285d:	83 c0 1c             	add    $0x1c,%eax
 8422860:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8422863:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422866:	83 c0 08             	add    $0x8,%eax
 8422869:	89 45 d0             	mov    %eax,-0x30(%ebp)
 842286c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842286f:	8b 40 04             	mov    0x4(%eax),%eax
 8422872:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422879:	00 
 842287a:	89 04 24             	mov    %eax,(%esp)
 842287d:	e8 c9 67 ce ff       	call   810904b <_Z14NumberToStringji>
 8422882:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8422885:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422888:	0f b6 80 9a 00 00 00 	movzbl 0x9a(%eax),%eax
 842288f:	0f b6 f8             	movzbl %al,%edi
 8422892:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8422895:	8d b0 86 00 00 00    	lea    0x86(%eax),%esi
 842289b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 842289e:	8d 58 72             	lea    0x72(%eax),%ebx
 84228a1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84228a4:	8b 00                	mov    (%eax),%eax
 84228a6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84228ad:	00 
 84228ae:	89 04 24             	mov    %eax,(%esp)
 84228b1:	e8 95 67 ce ff       	call   810904b <_Z14NumberToStringji>
 84228b6:	8b 55 bc             	mov    -0x44(%ebp),%edx
 84228b9:	89 54 24 30          	mov    %edx,0x30(%esp)
 84228bd:	8b 55 c0             	mov    -0x40(%ebp),%edx
 84228c0:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 84228c4:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84228c7:	89 54 24 28          	mov    %edx,0x28(%esp)
 84228cb:	8b 55 c8             	mov    -0x38(%ebp),%edx
 84228ce:	89 54 24 24          	mov    %edx,0x24(%esp)
 84228d2:	8b 55 cc             	mov    -0x34(%ebp),%edx
 84228d5:	89 54 24 20          	mov    %edx,0x20(%esp)
 84228d9:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84228dc:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84228e0:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84228e3:	89 54 24 18          	mov    %edx,0x18(%esp)
 84228e7:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84228eb:	89 74 24 10          	mov    %esi,0x10(%esp)
 84228ef:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84228f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84228f7:	c7 44 24 04 a4 d3 c4 	movl   $0x8c4d3a4,0x4(%esp)
 84228fe:	08 
 84228ff:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8422902:	89 04 24             	mov    %eax,(%esp)
 8422905:	e8 b6 18 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842290a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8422911:	00 
 8422912:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8422915:	89 04 24             	mov    %eax,(%esp)
 8422918:	e8 09 1a fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 842291d:	83 f0 01             	xor    $0x1,%eax
 8422920:	84 c0                	test   %al,%al
 8422922:	74 07                	je     842292b <_ZN23DB_SaveGoldZeroTradeLog8dispatchEiiP6Stream+0x135>
 8422924:	b8 00 00 00 00       	mov    $0x0,%eax
 8422929:	eb 05                	jmp    8422930 <_ZN23DB_SaveGoldZeroTradeLog8dispatchEiiP6Stream+0x13a>
 842292b:	b8 01 00 00 00       	mov    $0x1,%eax
 8422930:	83 c4 7c             	add    $0x7c,%esp
 8422933:	5b                   	pop    %ebx
 8422934:	5e                   	pop    %esi
 8422935:	5f                   	pop    %edi
 8422936:	5d                   	pop    %ebp
 8422937:	c3                   	ret

```

```c
// DB_SaveGoldZeroTradeLog::dispatch @ 0x84227f6

/* DB_SaveGoldZeroTradeLog::dispatch(int, int, Stream*) */

bool DB_SaveGoldZeroTradeLog::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_SAVE_GOLD_ZERO_TRADE_LOG SVar1;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG SVar2;
  undefined4 uVar3;
  char cVar4;
  SIG_SAVE_GOLD_ZERO_TRADE_LOG *pSVar5;
  MySQL *this;
  undefined4 uVar6;
  undefined4 uVar7;
  Stream *in_stack_00000010;
  
  pSVar5 = Stream::GetOutBuffer<SIG_SAVE_GOLD_ZERO_TRADE_LOG>(in_stack_00000010);
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,4,0);
  uVar3 = *(undefined4 *)(pSVar5 + 0xdc);
  SVar1 = pSVar5[0x30];
  uVar6 = NumberToString(*(uint *)(pSVar5 + 4),1);
  SVar2 = pSVar5[0x9a];
  uVar7 = NumberToString(*(uint *)pSVar5,0);
  MySQL::set_query(this,
                   "inSert into dnf_zeromoney_log(to_m_id,to_nat_ip,to_peer_ip,to_nat_type,from_m_id,from_nat_ip,from_peer_ip,from_nat_type,occ_time,injury_money,to_mac_addr,from_mac_addr) values(%s,\'%s\',\'%s\',%d,%s,\'%s\',\'%s\',%d,now(),%d,\'%s\',\'%s\')"
                   ,uVar7,pSVar5 + 0x72,pSVar5 + 0x86,(uint)(byte)SVar2,uVar6,pSVar5 + 8,
                   pSVar5 + 0x1c,(uint)(byte)SVar1,uVar3,pSVar5 + 0x9b,pSVar5 + 0x31);
  cVar4 = MySQL::exec(this,true);
  return cVar4 == '\x01';
}

```

