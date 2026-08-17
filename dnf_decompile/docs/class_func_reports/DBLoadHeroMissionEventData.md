# DBLoadHeroMissionEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0815d7a8 DBLoadHeroMissionEventData::dispatch  [0x0815d7a8-0x815db97] ===
 815d7a8:	55                   	push   %ebp
 815d7a9:	89 e5                	mov    %esp,%ebp
 815d7ab:	56                   	push   %esi
 815d7ac:	53                   	push   %ebx
 815d7ad:	81 ec 40 01 00 00    	sub    $0x140,%esp
 815d7b3:	8b 45 14             	mov    0x14(%ebp),%eax
 815d7b6:	89 04 24             	mov    %eax,(%esp)
 815d7b9:	e8 b4 15 00 00       	call   815ed72 <_ZN6Stream12GetOutBufferIN6Taiwan22SigLoadHeroMissionDataEEEPT_v>
 815d7be:	89 45 e8             	mov    %eax,-0x18(%ebp)
 815d7c1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 815d7c5:	75 2c                	jne    815d7f3 <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x4b>
 815d7c7:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d7ce:	e8 2d 80 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d7d3:	89 c2                	mov    %eax,%edx
 815d7d5:	c7 02 b6 7e b7 08    	movl   $0x8b77eb6,(%edx)
 815d7db:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d7e2:	00 
 815d7e3:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d7ea:	09 
 815d7eb:	89 04 24             	mov    %eax,(%esp)
 815d7ee:	e8 5d 74 5c 00       	call   8724c50 <__cxa_throw>
 815d7f3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815d7f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d7ff:	00 
 815d800:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815d807:	00 
 815d808:	89 04 24             	mov    %eax,(%esp)
 815d80b:	e8 2e 7a 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815d810:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815d813:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815d817:	75 2c                	jne    815d845 <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x9d>
 815d819:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d820:	e8 db 7f 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d825:	89 c2                	mov    %eax,%edx
 815d827:	c7 02 c3 7e b7 08    	movl   $0x8b77ec3,(%edx)
 815d82d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d834:	00 
 815d835:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d83c:	09 
 815d83d:	89 04 24             	mov    %eax,(%esp)
 815d840:	e8 0b 74 5c 00       	call   8724c50 <__cxa_throw>
 815d845:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815d848:	8b 18                	mov    (%eax),%ebx
 815d84a:	e8 32 e9 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815d84f:	89 04 24             	mov    %eax,(%esp)
 815d852:	e8 89 94 fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 815d857:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815d85b:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d85f:	c7 44 24 04 d0 7e b7 	movl   $0x8b77ed0,0x4(%esp)
 815d866:	08 
 815d867:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d86a:	89 04 24             	mov    %eax,(%esp)
 815d86d:	e8 4e 69 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d872:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d879:	00 
 815d87a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d87d:	89 04 24             	mov    %eax,(%esp)
 815d880:	e8 a1 6a 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d885:	83 f0 01             	xor    $0x1,%eax
 815d888:	84 c0                	test   %al,%al
 815d88a:	74 2c                	je     815d8b8 <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x110>
 815d88c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d893:	e8 68 7f 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d898:	89 c2                	mov    %eax,%edx
 815d89a:	c7 02 23 7f b7 08    	movl   $0x8b77f23,(%edx)
 815d8a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d8a7:	00 
 815d8a8:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d8af:	09 
 815d8b0:	89 04 24             	mov    %eax,(%esp)
 815d8b3:	e8 98 73 5c 00       	call   8724c50 <__cxa_throw>
 815d8b8:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 815d8be:	89 04 24             	mov    %eax,(%esp)
 815d8c1:	e8 2a 61 00 00       	call   81639f0 <_ZN6Taiwan22SigLoadHeroMissionDataC1Ev>
 815d8c6:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 815d8cc:	89 04 24             	mov    %eax,(%esp)
 815d8cf:	e8 30 61 00 00       	call   8163a04 <_ZN6Taiwan22SigLoadHeroMissionData4initEv>
 815d8d4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815d8d7:	8b 00                	mov    (%eax),%eax
 815d8d9:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 815d8df:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d8e2:	89 04 24             	mov    %eax,(%esp)
 815d8e5:	e8 82 4a f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815d8ea:	85 c0                	test   %eax,%eax
 815d8ec:	0f 94 c0             	sete   %al
 815d8ef:	84 c0                	test   %al,%al
 815d8f1:	0f 84 99 00 00 00    	je     815d990 <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x1e8>
 815d8f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 815d8fa:	8b 18                	mov    (%eax),%ebx
 815d8fc:	e8 80 e8 f6 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 815d901:	89 04 24             	mov    %eax,(%esp)
 815d904:	e8 d7 93 fa ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 815d909:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 815d90d:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d911:	c7 44 24 04 30 7f b7 	movl   $0x8b77f30,0x4(%esp)
 815d918:	08 
 815d919:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d91c:	89 04 24             	mov    %eax,(%esp)
 815d91f:	e8 9c 68 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815d924:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815d92b:	00 
 815d92c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d92f:	89 04 24             	mov    %eax,(%esp)
 815d932:	e8 ef 69 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815d937:	83 f0 01             	xor    $0x1,%eax
 815d93a:	84 c0                	test   %al,%al
 815d93c:	74 2c                	je     815d96a <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x1c2>
 815d93e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d945:	e8 b6 7e 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d94a:	89 c2                	mov    %eax,%edx
 815d94c:	c7 02 6b 7f b7 08    	movl   $0x8b77f6b,(%edx)
 815d952:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d959:	00 
 815d95a:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d961:	09 
 815d962:	89 04 24             	mov    %eax,(%esp)
 815d965:	e8 e6 72 5c 00       	call   8724c50 <__cxa_throw>
 815d96a:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 815d971:	00 
 815d972:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d979:	00 
 815d97a:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 815d980:	83 c0 04             	add    $0x4,%eax
 815d983:	89 04 24             	mov    %eax,(%esp)
 815d986:	e8 35 03 f2 ff       	call   807dcc0 <memset@plt>
 815d98b:	e9 99 00 00 00       	jmp    815da29 <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x281>
 815d990:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d993:	89 04 24             	mov    %eax,(%esp)
 815d996:	e8 21 6b 29 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 815d99b:	83 f0 01             	xor    $0x1,%eax
 815d99e:	84 c0                	test   %al,%al
 815d9a0:	74 2c                	je     815d9ce <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x226>
 815d9a2:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815d9a9:	e8 52 7e 5c 00       	call   8725800 <__cxa_allocate_exception>
 815d9ae:	89 c2                	mov    %eax,%edx
 815d9b0:	c7 02 45 75 b7 08    	movl   $0x8b77545,(%edx)
 815d9b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815d9bd:	00 
 815d9be:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815d9c5:	09 
 815d9c6:	89 04 24             	mov    %eax,(%esp)
 815d9c9:	e8 82 72 5c 00       	call   8724c50 <__cxa_throw>
 815d9ce:	c7 44 24 0c 00 01 00 	movl   $0x100,0xc(%esp)
 815d9d5:	00 
 815d9d6:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 815d9dc:	83 c0 04             	add    $0x4,%eax
 815d9df:	89 44 24 08          	mov    %eax,0x8(%esp)
 815d9e3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815d9ea:	00 
 815d9eb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815d9ee:	89 04 24             	mov    %eax,(%esp)
 815d9f1:	e8 24 79 fc ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 815d9f6:	83 f0 01             	xor    $0x1,%eax
 815d9f9:	84 c0                	test   %al,%al
 815d9fb:	74 2c                	je     815da29 <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x281>
 815d9fd:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815da04:	e8 f7 7d 5c 00       	call   8725800 <__cxa_allocate_exception>
 815da09:	89 c2                	mov    %eax,%edx
 815da0b:	c7 02 77 7f b7 08    	movl   $0x8b77f77,(%edx)
 815da11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815da18:	00 
 815da19:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815da20:	09 
 815da21:	89 04 24             	mov    %eax,(%esp)
 815da24:	e8 27 72 5c 00       	call   8724c50 <__cxa_throw>
 815da29:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815da2e:	c7 44 24 08 ea 03 00 	movl   $0x3ea,0x8(%esp)
 815da35:	00 
 815da36:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815da3d:	08 
 815da3e:	89 04 24             	mov    %eax,(%esp)
 815da41:	e8 40 20 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815da46:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815da4d:	00 
 815da4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 815da52:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815da55:	89 04 24             	mov    %eax,(%esp)
 815da58:	e8 c9 b1 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815da5d:	8b 45 10             	mov    0x10(%ebp),%eax
 815da60:	89 44 24 08          	mov    %eax,0x8(%esp)
 815da64:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 815da6b:	00 
 815da6c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815da6f:	89 04 24             	mov    %eax,(%esp)
 815da72:	e8 d9 5e 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815da77:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815da7a:	89 04 24             	mov    %eax,(%esp)
 815da7d:	e8 cc b1 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815da82:	89 04 24             	mov    %eax,(%esp)
 815da85:	e8 3c 13 00 00       	call   815edc6 <_ZN12CStreamGuard11GetInBufferIN6Taiwan22SigLoadHeroMissionDataEEEPT_v>
 815da8a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815da8d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815da91:	75 2c                	jne    815dabf <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x317>
 815da93:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815da9a:	e8 61 7d 5c 00       	call   8725800 <__cxa_allocate_exception>
 815da9f:	89 c2                	mov    %eax,%edx
 815daa1:	c7 02 82 7f b7 08    	movl   $0x8b77f82,(%edx)
 815daa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815daae:	00 
 815daaf:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815dab6:	09 
 815dab7:	89 04 24             	mov    %eax,(%esp)
 815daba:	e8 91 71 5c 00       	call   8724c50 <__cxa_throw>
 815dabf:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 815dac6:	00 
 815dac7:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 815dacd:	89 44 24 04          	mov    %eax,0x4(%esp)
 815dad1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815dad4:	89 04 24             	mov    %eax,(%esp)
 815dad7:	e8 c4 fd f1 ff       	call   807d8a0 <memcpy@plt>
 815dadc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815dae1:	8d 55 e0             	lea    -0x20(%ebp),%edx
 815dae4:	89 54 24 08          	mov    %edx,0x8(%esp)
 815dae8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815daef:	00 
 815daf0:	89 04 24             	mov    %eax,(%esp)
 815daf3:	e8 e6 34 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815daf8:	89 c3                	mov    %eax,%ebx
 815dafa:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815dafd:	89 04 24             	mov    %eax,(%esp)
 815db00:	e8 cd ed 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815db05:	e9 81 00 00 00       	jmp    815db8b <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x3e3>
 815db0a:	89 d3                	mov    %edx,%ebx
 815db0c:	89 c6                	mov    %eax,%esi
 815db0e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 815db11:	89 04 24             	mov    %eax,(%esp)
 815db14:	e8 b9 ed 4b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815db19:	89 f0                	mov    %esi,%eax
 815db1b:	89 da                	mov    %ebx,%edx
 815db1d:	eb 00                	jmp    815db1f <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x377>
 815db1f:	83 fa 01             	cmp    $0x1,%edx
 815db22:	74 08                	je     815db2c <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x384>
 815db24:	89 04 24             	mov    %eax,(%esp)
 815db27:	e8 24 5c 98 00       	call   8ae3750 <_Unwind_Resume>
 815db2c:	89 04 24             	mov    %eax,(%esp)
 815db2f:	e8 ac 81 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815db34:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815db37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815db3a:	89 44 24 14          	mov    %eax,0x14(%esp)
 815db3e:	c7 44 24 10 90 7f b7 	movl   $0x8b77f90,0x10(%esp)
 815db45:	08 
 815db46:	c7 44 24 0c f5 03 00 	movl   $0x3f5,0xc(%esp)
 815db4d:	00 
 815db4e:	c7 44 24 08 a0 8c b7 	movl   $0x8b78ca0,0x8(%esp)
 815db55:	08 
 815db56:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815db5d:	08 
 815db5e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815db65:	e8 a0 60 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815db6a:	bb 00 00 00 00       	mov    $0x0,%ebx
 815db6f:	e8 bc 80 5c 00       	call   8725c30 <__cxa_end_catch>
 815db74:	eb 15                	jmp    815db8b <_ZN26DBLoadHeroMissionEventData8dispatchEiiP6Stream+0x3e3>
 815db76:	89 d3                	mov    %edx,%ebx
 815db78:	89 c6                	mov    %eax,%esi
 815db7a:	e8 b1 80 5c 00       	call   8725c30 <__cxa_end_catch>
 815db7f:	89 f0                	mov    %esi,%eax
 815db81:	89 da                	mov    %ebx,%edx
 815db83:	89 04 24             	mov    %eax,(%esp)
 815db86:	e8 c5 5b 98 00       	call   8ae3750 <_Unwind_Resume>
 815db8b:	89 d8                	mov    %ebx,%eax
 815db8d:	81 c4 40 01 00 00    	add    $0x140,%esp
 815db93:	5b                   	pop    %ebx
 815db94:	5e                   	pop    %esi
 815db95:	5d                   	pop    %ebp
 815db96:	c3                   	ret
 815db97:	90                   	nop

```

```c
// DBLoadHeroMissionEventData::dispatch @ 0x815d7a8

/* DBLoadHeroMissionEventData::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBLoadHeroMissionEventData::dispatch
          (DBLoadHeroMissionEventData *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  CEnvironment *pCVar3;
  undefined4 uVar4;
  int iVar5;
  Stream *pSVar6;
  CStreamGuard *this_00;
  undefined4 uVar7;
  undefined4 local_128;
  undefined1 auStack_124 [256];
  CStreamGuard local_24 [8];
  SigLoadHeroMissionData *local_1c;
  MySQL *local_18;
  SigLoadHeroMissionData *local_14;
  
                    /* try { // try from 0815d7b9 to 0815da45 has its CatchHandler @ 0815db1f */
  local_1c = Stream::GetOutBuffer<Taiwan::SigLoadHeroMissionData>(param_3);
  if (local_1c == (SigLoadHeroMissionData *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "context_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_18 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle_null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar7 = *(undefined4 *)local_1c;
  pCVar3 = (CEnvironment *)G_CEnvironment();
  uVar4 = CEnvironment::get_server_group(pCVar3);
  MySQL::set_query(local_18,
                   "seLect mission from event_hero_mission_data where server_group=%d and charac_no=%u"
                   ,uVar4,uVar7);
  cVar1 = MySQL::exec(local_18,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "exec_select";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  Taiwan::SigLoadHeroMissionData::SigLoadHeroMissionData((SigLoadHeroMissionData *)&local_128);
  Taiwan::SigLoadHeroMissionData::init((SigLoadHeroMissionData *)&local_128);
  local_128 = *(undefined4 *)local_1c;
  iVar5 = MySQL::get_n_rows(local_18);
  if (iVar5 == 0) {
    uVar7 = *(undefined4 *)local_1c;
    pCVar3 = (CEnvironment *)G_CEnvironment();
    uVar4 = CEnvironment::get_server_group(pCVar3);
    MySQL::set_query(local_18,"inSert into event_hero_mission_data values(%d,%u,\'\',now())",uVar4,
                     uVar7);
    cVar1 = MySQL::exec(local_18,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "exec_insert";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    memset(auStack_124,0,0x100);
  }
  else {
    cVar1 = MySQL::fetch(local_18);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "fetch";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    cVar1 = MySQL::get_binary(local_18,0,auStack_124,0x100);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "get_binary";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
  }
  pSVar6 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x3ea);
  CStreamGuard::CStreamGuard(local_24,pSVar6,true);
                    /* try { // try from 0815da72 to 0815daf7 has its CatchHandler @ 0815db0a */
  Taiwan::internal_stream(local_24,0x12,param_2);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_24);
  local_14 = CStreamGuard::GetInBuffer<Taiwan::SigLoadHeroMissionData>(this_00);
  if (local_14 == (SigLoadHeroMissionData *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "stream_alloc";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  memcpy(local_14,&local_128,0x104);
  uVar7 = MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_24);
                    /* try { // try from 0815db00 to 0815db04 has its CatchHandler @ 0815db1f */
  CStreamGuard::~CStreamGuard(local_24);
  return uVar7;
}

```

