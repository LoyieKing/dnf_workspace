# WongWork__EventSigong

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ArrangeSigongEventItem

```asm
// === 083fa855 WongWork::EventSigong::ArrangeSigongEventItem  [0x083fa855-0x83fac0c] ===
 83fa855:	55                   	push   %ebp
 83fa856:	89 e5                	mov    %esp,%ebp
 83fa858:	53                   	push   %ebx
 83fa859:	81 ec 14 01 00 00    	sub    $0x114,%esp
 83fa85f:	c7 45 e0 0a 00 00 00 	movl   $0xa,-0x20(%ebp)
 83fa866:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fa86b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fa872:	00 
 83fa873:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa87a:	00 
 83fa87b:	89 04 24             	mov    %eax,(%esp)
 83fa87e:	e8 bb a9 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fa883:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 83fa886:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa88d:	00 
 83fa88e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa891:	89 04 24             	mov    %eax,(%esp)
 83fa894:	e8 b2 e7 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa899:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 83fa8a0:	00 
 83fa8a1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa8a5:	c7 44 24 04 bc 61 c3 	movl   $0x8c361bc,0x4(%esp)
 83fa8ac:	08 
 83fa8ad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fa8b0:	89 04 24             	mov    %eax,(%esp)
 83fa8b3:	e8 08 99 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa8b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa8bf:	00 
 83fa8c0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fa8c3:	89 04 24             	mov    %eax,(%esp)
 83fa8c6:	e8 5b 9a ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fa8cb:	83 f0 01             	xor    $0x1,%eax
 83fa8ce:	84 c0                	test   %al,%al
 83fa8d0:	74 5c                	je     83fa92e <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0xd9>
 83fa8d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa8d9:	00 
 83fa8da:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa8dd:	89 04 24             	mov    %eax,(%esp)
 83fa8e0:	e8 66 e7 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa8e5:	89 c3                	mov    %eax,%ebx
 83fa8e7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fa8ee:	00 
 83fa8ef:	c7 44 24 08 23 01 00 	movl   $0x123,0x8(%esp)
 83fa8f6:	00 
 83fa8f7:	c7 44 24 04 00 dd c5 	movl   $0x8c5dd00,0x4(%esp)
 83fa8fe:	08 
 83fa8ff:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fa902:	89 04 24             	mov    %eax,(%esp)
 83fa905:	e8 0e 4e 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fa90a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83fa90e:	c7 44 24 08 00 dd c5 	movl   $0x8c5dd00,0x8(%esp)
 83fa915:	08 
 83fa916:	c7 44 24 04 9d 60 c3 	movl   $0x8c3609d,0x4(%esp)
 83fa91d:	08 
 83fa91e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fa921:	89 04 24             	mov    %eax,(%esp)
 83fa924:	e8 5f 4e 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fa929:	e9 d6 02 00 00       	jmp    83fac04 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x3af>
 83fa92e:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 83fa935:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83fa93c:	e9 ff 01 00 00       	jmp    83fab40 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x2eb>
 83fa941:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fa944:	89 04 24             	mov    %eax,(%esp)
 83fa947:	e8 70 9b ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83fa94c:	83 f0 01             	xor    $0x1,%eax
 83fa94f:	84 c0                	test   %al,%al
 83fa951:	0f 85 04 02 00 00    	jne    83fab5b <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x306>
 83fa957:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83fa95e:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83fa965:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83fa96c:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 83fa973:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 83fa97a:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 83fa981:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 83fa988:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 83fa98f:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 83fa996:	c7 45 a4 01 00 00 00 	movl   $0x1,-0x5c(%ebp)
 83fa99d:	c7 45 a8 c8 00 00 00 	movl   $0xc8,-0x58(%ebp)
 83fa9a4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83fa9a7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa9ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa9b2:	00 
 83fa9b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fa9b6:	89 04 24             	mov    %eax,(%esp)
 83fa9b9:	e8 f0 78 ce ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 83fa9be:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83fa9c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa9c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa9cc:	00 
 83fa9cd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fa9d0:	89 04 24             	mov    %eax,(%esp)
 83fa9d3:	e8 54 bf d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa9d8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83fa9db:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa9df:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83fa9e6:	00 
 83fa9e7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fa9ea:	89 04 24             	mov    %eax,(%esp)
 83fa9ed:	e8 3a bf d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa9f2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 83fa9f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa9f9:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83faa00:	00 
 83faa01:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83faa04:	89 04 24             	mov    %eax,(%esp)
 83faa07:	e8 20 bf d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faa0c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83faa0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faa13:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83faa1a:	00 
 83faa1b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83faa1e:	89 04 24             	mov    %eax,(%esp)
 83faa21:	e8 06 bf d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faa26:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83faa29:	83 c0 04             	add    $0x4,%eax
 83faa2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faa30:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 83faa37:	00 
 83faa38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83faa3b:	89 04 24             	mov    %eax,(%esp)
 83faa3e:	e8 e9 be d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faa43:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83faa46:	83 c0 04             	add    $0x4,%eax
 83faa49:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faa4d:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 83faa54:	00 
 83faa55:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83faa58:	89 04 24             	mov    %eax,(%esp)
 83faa5b:	e8 cc be d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faa60:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 83faa63:	83 c0 04             	add    $0x4,%eax
 83faa66:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faa6a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 83faa71:	00 
 83faa72:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83faa75:	89 04 24             	mov    %eax,(%esp)
 83faa78:	e8 af be d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faa7d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 83faa80:	83 c0 04             	add    $0x4,%eax
 83faa83:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faa87:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 83faa8e:	00 
 83faa8f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83faa92:	89 04 24             	mov    %eax,(%esp)
 83faa95:	e8 92 be d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faa9a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83faaa1:	e9 87 00 00 00       	jmp    83fab2d <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x2d8>
 83faaa6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83faaa9:	8b 44 85 ac          	mov    -0x54(%ebp,%eax,4),%eax
 83faaad:	85 c0                	test   %eax,%eax
 83faaaf:	75 78                	jne    83fab29 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x2d4>
 83faab1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83faab4:	8b 44 85 bc          	mov    -0x44(%ebp,%eax,4),%eax
 83faab8:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83faabb:	75 6c                	jne    83fab29 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x2d4>
 83faabd:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83faac0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83faac3:	c1 e2 04             	shl    $0x4,%edx
 83faac6:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83faac9:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83faacc:	81 ea f4 00 00 00    	sub    $0xf4,%edx
 83faad2:	89 02                	mov    %eax,(%edx)
 83faad4:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83faad7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83faada:	8b 44 85 c4          	mov    -0x3c(%ebp,%eax,4),%eax
 83faade:	c1 e2 04             	shl    $0x4,%edx
 83faae1:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83faae4:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83faae7:	81 ea ec 00 00 00    	sub    $0xec,%edx
 83faaed:	89 02                	mov    %eax,(%edx)
 83faaef:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83faaf2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83faaf5:	8b 44 85 a4          	mov    -0x5c(%ebp,%eax,4),%eax
 83faaf9:	c1 e2 04             	shl    $0x4,%edx
 83faafc:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83faaff:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fab02:	81 ea e8 00 00 00    	sub    $0xe8,%edx
 83fab08:	89 02                	mov    %eax,(%edx)
 83fab0a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 83fab0d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83fab10:	8b 44 85 b4          	mov    -0x4c(%ebp,%eax,4),%eax
 83fab14:	c1 e2 04             	shl    $0x4,%edx
 83fab17:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fab1a:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fab1d:	81 ea f0 00 00 00    	sub    $0xf0,%edx
 83fab23:	89 02                	mov    %eax,(%edx)
 83fab25:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 83fab29:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83fab2d:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 83fab31:	0f 9e c0             	setle  %al
 83fab34:	84 c0                	test   %al,%al
 83fab36:	0f 85 6a ff ff ff    	jne    83faaa6 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x251>
 83fab3c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fab40:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 83fab43:	89 04 24             	mov    %eax,(%esp)
 83fab46:	e8 21 78 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83fab4b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83fab4e:	0f 97 c0             	seta   %al
 83fab51:	84 c0                	test   %al,%al
 83fab53:	0f 85 e8 fd ff ff    	jne    83fa941 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0xec>
 83fab59:	eb 01                	jmp    83fab5c <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x307>
 83fab5b:	90                   	nop
 83fab5c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83fab63:	e9 8b 00 00 00       	jmp    83fabf3 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x39e>
 83fab68:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fab6b:	c1 e0 04             	shl    $0x4,%eax
 83fab6e:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fab71:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fab74:	2d ec 00 00 00       	sub    $0xec,%eax
 83fab79:	8b 10                	mov    (%eax),%edx
 83fab7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fab7e:	c1 e0 04             	shl    $0x4,%eax
 83fab81:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fab84:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 83fab87:	2d f4 00 00 00       	sub    $0xf4,%eax
 83fab8c:	8b 00                	mov    (%eax),%eax
 83fab8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fab92:	89 04 24             	mov    %eax,(%esp)
 83fab95:	e8 0b fc ff ff       	call   83fa7a5 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji>
 83fab9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fab9d:	c1 e0 04             	shl    $0x4,%eax
 83faba0:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83faba3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83faba6:	2d e8 00 00 00       	sub    $0xe8,%eax
 83fabab:	8b 00                	mov    (%eax),%eax
 83fabad:	89 c1                	mov    %eax,%ecx
 83fabaf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fabb2:	c1 e0 04             	shl    $0x4,%eax
 83fabb5:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fabb8:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fabbb:	2d ec 00 00 00       	sub    $0xec,%eax
 83fabc0:	8b 00                	mov    (%eax),%eax
 83fabc2:	89 c2                	mov    %eax,%edx
 83fabc4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fabc7:	c1 e0 04             	shl    $0x4,%eax
 83fabca:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fabcd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fabd0:	2d f0 00 00 00       	sub    $0xf0,%eax
 83fabd5:	8b 00                	mov    (%eax),%eax
 83fabd7:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 83fabde:	00 
 83fabdf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83fabe3:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fabe7:	89 04 24             	mov    %eax,(%esp)
 83fabea:	e8 65 ef ff ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 83fabef:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83fabf3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fabf6:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 83fabf9:	0f 9c c0             	setl   %al
 83fabfc:	84 c0                	test   %al,%al
 83fabfe:	0f 85 64 ff ff ff    	jne    83fab68 <_ZN8WongWork11EventSigong22ArrangeSigongEventItemEjj+0x313>
 83fac04:	81 c4 14 01 00 00    	add    $0x114,%esp
 83fac0a:	5b                   	pop    %ebx
 83fac0b:	5d                   	pop    %ebp
 83fac0c:	c3                   	ret

```

```c
// WongWork::EventSigong::ArrangeSigongEventItem @ 0x83fa855

/* WongWork::EventSigong::ArrangeSigongEventItem(unsigned int, unsigned int) */

void WongWork::EventSigong::ArrangeSigongEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_100 [40];
  uint local_60 [11];
  cMyTrace local_34 [16];
  undefined4 local_24;
  MySQL *local_20;
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_24 = 10;
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_20,
                   "seLect id,item1_no,item1_server_id,item1_charac_no,item1_check,item2_no,item2_server_id,item2_charac_no,item2_check from event_sigong_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_20,true);
  if (cVar1 == '\x01') {
    local_1c = 0;
    local_18 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_20), local_18 < uVar3 &&
           (cVar1 = MySQL::fetch(local_20), cVar1 == '\x01'))) {
      local_60[10] = 0;
      local_60[8] = 0;
      local_60[9] = 0;
      local_60[6] = 0;
      local_60[7] = 0;
      local_60[4] = 0;
      local_60[5] = 0;
      local_60[2] = 0;
      local_60[3] = 0;
      local_60[0] = 1;
      local_60[1] = 200;
      MySQL::get_int(local_20,0,local_60 + 10);
      MySQL::get_int(local_20,1,(int *)(local_60 + 8));
      MySQL::get_int(local_20,2,(int *)(local_60 + 6));
      MySQL::get_int(local_20,3,(int *)(local_60 + 4));
      MySQL::get_int(local_20,4,(int *)(local_60 + 2));
      MySQL::get_int(local_20,5,(int *)(local_60 + 9));
      MySQL::get_int(local_20,6,(int *)(local_60 + 7));
      MySQL::get_int(local_20,7,(int *)(local_60 + 5));
      MySQL::get_int(local_20,8,(int *)(local_60 + 3));
      for (local_14 = 0; local_14 < 2; local_14 = local_14 + 1) {
        if ((local_60[local_14 + 2] == 0) && (local_60[local_14 + 6] == param_2)) {
          auStack_100[local_1c * 4] = local_60[10];
          auStack_100[local_1c * 4 + 2] = local_60[local_14 + 8];
          auStack_100[local_1c * 4 + 3] = local_60[local_14];
          auStack_100[local_1c * 4 + 1] = local_60[local_14 + 4];
          local_1c = local_1c + 1;
        }
      }
      local_18 = local_18 + 1;
    }
    for (local_10 = 0; local_10 < local_1c; local_10 = local_10 + 1) {
      UpdateEventSigongInfo(auStack_100[local_10 * 4],auStack_100[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_100[local_10 * 4 + 1],auStack_100[local_10 * 4 + 2],
                 auStack_100[local_10 * 4 + 3],3);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_34,
                       "void WongWork::EventSigong::ArrangeSigongEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x123,5);
    cMyTrace::operator()
              (local_34,"%s, exec ERROR m_id=%s",
               "void WongWork::EventSigong::ArrangeSigongEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}

```

---

## CheckAlreadyGetSigongItem

```asm
// === 083fa69c WongWork::EventSigong::CheckAlreadyGetSigongItem  [0x083fa69c-0x83fa7a4] ===
 83fa69c:	55                   	push   %ebp
 83fa69d:	89 e5                	mov    %esp,%ebp
 83fa69f:	83 ec 28             	sub    $0x28,%esp
 83fa6a2:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fa6a7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fa6ae:	00 
 83fa6af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa6b6:	00 
 83fa6b7:	89 04 24             	mov    %eax,(%esp)
 83fa6ba:	e8 7f ab ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fa6bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fa6c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 83fa6c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 83fa6c9:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 83fa6d0:	e8 e5 73 2c 00       	call   86c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>
 83fa6d5:	83 f8 01             	cmp    $0x1,%eax
 83fa6d8:	74 07                	je     83fa6e1 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x45>
 83fa6da:	83 f8 02             	cmp    $0x2,%eax
 83fa6dd:	74 2e                	je     83fa70d <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x71>
 83fa6df:	eb 56                	jmp    83fa737 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x9b>
 83fa6e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa6e8:	00 
 83fa6e9:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa6ec:	89 04 24             	mov    %eax,(%esp)
 83fa6ef:	e8 57 e9 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa6f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa6f8:	c7 44 24 04 b4 60 c3 	movl   $0x8c360b4,0x4(%esp)
 83fa6ff:	08 
 83fa700:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa703:	89 04 24             	mov    %eax,(%esp)
 83fa706:	e8 b5 9a ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa70b:	eb 2a                	jmp    83fa737 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x9b>
 83fa70d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa714:	00 
 83fa715:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa718:	89 04 24             	mov    %eax,(%esp)
 83fa71b:	e8 2b e9 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa720:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa724:	c7 44 24 04 ec 60 c3 	movl   $0x8c360ec,0x4(%esp)
 83fa72b:	08 
 83fa72c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa72f:	89 04 24             	mov    %eax,(%esp)
 83fa732:	e8 89 9a ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa737:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa73e:	00 
 83fa73f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa742:	89 04 24             	mov    %eax,(%esp)
 83fa745:	e8 dc 9b ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fa74a:	83 f0 01             	xor    $0x1,%eax
 83fa74d:	84 c0                	test   %al,%al
 83fa74f:	74 07                	je     83fa758 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0xbc>
 83fa751:	b8 00 00 00 00       	mov    $0x0,%eax
 83fa756:	eb 4b                	jmp    83fa7a3 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x107>
 83fa758:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fa75f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83fa762:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa766:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa76d:	00 
 83fa76e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa771:	89 04 24             	mov    %eax,(%esp)
 83fa774:	e8 b3 c1 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fa779:	83 f0 01             	xor    $0x1,%eax
 83fa77c:	84 c0                	test   %al,%al
 83fa77e:	75 07                	jne    83fa787 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0xeb>
 83fa780:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83fa783:	85 c0                	test   %eax,%eax
 83fa785:	75 07                	jne    83fa78e <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0xf2>
 83fa787:	b8 01 00 00 00       	mov    $0x1,%eax
 83fa78c:	eb 05                	jmp    83fa793 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0xf7>
 83fa78e:	b8 00 00 00 00       	mov    $0x0,%eax
 83fa793:	84 c0                	test   %al,%al
 83fa795:	74 07                	je     83fa79e <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x102>
 83fa797:	b8 00 00 00 00       	mov    $0x0,%eax
 83fa79c:	eb 05                	jmp    83fa7a3 <_ZN8WongWork11EventSigong25CheckAlreadyGetSigongItemEji+0x107>
 83fa79e:	b8 01 00 00 00       	mov    $0x1,%eax
 83fa7a3:	c9                   	leave
 83fa7a4:	c3                   	ret

```

```c
// WongWork::EventSigong::CheckAlreadyGetSigongItem @ 0x83fa69c

/* WongWork::EventSigong::CheckAlreadyGetSigongItem(unsigned int, int) */

undefined4 WongWork::EventSigong::CheckAlreadyGetSigongItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = CWebEvent::GetItemType(3,param_2);
  if (iVar3 == 1) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect item1_check from event_sigong_info where id=%s",uVar4);
  }
  else if (iVar3 == 2) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect item2_check from event_sigong_info where id=%s",uVar4);
  }
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## UpdateEventSigongInfo

```asm
// === 083fa7a5 WongWork::EventSigong::UpdateEventSigongInfo  [0x083fa7a5-0x83fa854] ===
 83fa7a5:	55                   	push   %ebp
 83fa7a6:	89 e5                	mov    %esp,%ebp
 83fa7a8:	83 ec 28             	sub    $0x28,%esp
 83fa7ab:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fa7b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fa7b7:	00 
 83fa7b8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa7bf:	00 
 83fa7c0:	89 04 24             	mov    %eax,(%esp)
 83fa7c3:	e8 76 aa ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fa7c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fa7cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 83fa7ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 83fa7d2:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 83fa7d9:	e8 dc 72 2c 00       	call   86c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>
 83fa7de:	83 f8 01             	cmp    $0x1,%eax
 83fa7e1:	74 07                	je     83fa7ea <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji+0x45>
 83fa7e3:	83 f8 02             	cmp    $0x2,%eax
 83fa7e6:	74 2e                	je     83fa816 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji+0x71>
 83fa7e8:	eb 56                	jmp    83fa840 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji+0x9b>
 83fa7ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa7f1:	00 
 83fa7f2:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa7f5:	89 04 24             	mov    %eax,(%esp)
 83fa7f8:	e8 4e e8 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa7fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa801:	c7 44 24 04 24 61 c3 	movl   $0x8c36124,0x4(%esp)
 83fa808:	08 
 83fa809:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa80c:	89 04 24             	mov    %eax,(%esp)
 83fa80f:	e8 ac 99 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa814:	eb 2a                	jmp    83fa840 <_ZN8WongWork11EventSigong21UpdateEventSigongInfoEji+0x9b>
 83fa816:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fa81d:	00 
 83fa81e:	8b 45 08             	mov    0x8(%ebp),%eax
 83fa821:	89 04 24             	mov    %eax,(%esp)
 83fa824:	e8 22 e8 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fa829:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fa82d:	c7 44 24 04 70 61 c3 	movl   $0x8c36170,0x4(%esp)
 83fa834:	08 
 83fa835:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa838:	89 04 24             	mov    %eax,(%esp)
 83fa83b:	e8 80 99 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fa840:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fa847:	00 
 83fa848:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fa84b:	89 04 24             	mov    %eax,(%esp)
 83fa84e:	e8 d3 9a ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fa853:	c9                   	leave
 83fa854:	c3                   	ret

```

```c
// WongWork::EventSigong::UpdateEventSigongInfo @ 0x83fa7a5

/* WongWork::EventSigong::UpdateEventSigongInfo(unsigned int, int) */

void WongWork::EventSigong::UpdateEventSigongInfo(uint param_1,int param_2)

{
  MySQL *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar1 = CWebEvent::GetItemType(3,param_2);
  if (iVar1 == 1) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,
                     "upDate event_sigong_info set item1_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  else if (iVar1 == 2) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,
                     "upDate event_sigong_info set item2_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  MySQL::exec(this,true);
  return;
}

```

