# DB_LoadAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843b3b6 DB_LoadAccountCargo::dispatch  [0x0843b3b6-0x843b6eb] ===
 843b3b6:	55                   	push   %ebp
 843b3b7:	89 e5                	mov    %esp,%ebp
 843b3b9:	57                   	push   %edi
 843b3ba:	56                   	push   %esi
 843b3bb:	53                   	push   %ebx
 843b3bc:	81 ec 5c 10 00 00    	sub    $0x105c,%esp
 843b3c2:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 843b3c9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843b3cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b3d0:	8b 45 14             	mov    0x14(%ebp),%eax
 843b3d3:	89 04 24             	mov    %eax,(%esp)
 843b3d6:	e8 bb 13 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843b3db:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843b3e0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843b3e7:	00 
 843b3e8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b3ef:	00 
 843b3f0:	89 04 24             	mov    %eax,(%esp)
 843b3f3:	e8 46 9e fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843b3f8:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843b3fb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843b3fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b405:	00 
 843b406:	89 04 24             	mov    %eax,(%esp)
 843b409:	e8 3d dc cc ff       	call   810904b <_Z14NumberToStringji>
 843b40e:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b412:	c7 44 24 04 c4 4f c5 	movl   $0x8c54fc4,0x4(%esp)
 843b419:	08 
 843b41a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b41d:	89 04 24             	mov    %eax,(%esp)
 843b420:	e8 9b 8d fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843b425:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b42c:	00 
 843b42d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b430:	89 04 24             	mov    %eax,(%esp)
 843b433:	e8 ee 8e fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843b438:	83 f0 01             	xor    $0x1,%eax
 843b43b:	84 c0                	test   %al,%al
 843b43d:	74 0a                	je     843b449 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x93>
 843b43f:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b444:	e9 95 02 00 00       	jmp    843b6de <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x328>
 843b449:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b44c:	89 04 24             	mov    %eax,(%esp)
 843b44f:	e8 18 6f ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843b454:	85 c0                	test   %eax,%eax
 843b456:	0f 94 c0             	sete   %al
 843b459:	84 c0                	test   %al,%al
 843b45b:	74 0a                	je     843b467 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0xb1>
 843b45d:	bb 01 00 00 00       	mov    $0x1,%ebx
 843b462:	e9 77 02 00 00       	jmp    843b6de <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x328>
 843b467:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b46a:	89 04 24             	mov    %eax,(%esp)
 843b46d:	e8 4a 90 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843b472:	83 f0 01             	xor    $0x1,%eax
 843b475:	84 c0                	test   %al,%al
 843b477:	74 0a                	je     843b483 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0xcd>
 843b479:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b47e:	e9 5b 02 00 00       	jmp    843b6de <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x328>
 843b483:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843b488:	c7 44 24 08 53 8c 00 	movl   $0x8c53,0x8(%esp)
 843b48f:	00 
 843b490:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843b497:	08 
 843b498:	89 04 24             	mov    %eax,(%esp)
 843b49b:	e8 e6 45 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843b4a0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843b4a7:	00 
 843b4a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b4ac:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843b4af:	89 04 24             	mov    %eax,(%esp)
 843b4b2:	e8 6f d7 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843b4b7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843b4ba:	89 04 24             	mov    %eax,(%esp)
 843b4bd:	e8 84 d7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b4c2:	8b 55 0c             	mov    0xc(%ebp),%edx
 843b4c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b4c9:	89 04 24             	mov    %eax,(%esp)
 843b4cc:	e8 85 d7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b4d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843b4d4:	89 04 24             	mov    %eax,(%esp)
 843b4d7:	e8 6a d7 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b4dc:	8b 55 10             	mov    0x10(%ebp),%edx
 843b4df:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b4e3:	89 04 24             	mov    %eax,(%esp)
 843b4e6:	e8 6b d7 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b4eb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843b4ee:	89 04 24             	mov    %eax,(%esp)
 843b4f1:	e8 58 d7 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843b4f6:	89 04 24             	mov    %eax,(%esp)
 843b4f9:	e8 12 85 01 00       	call   8453a10 <_ZN12CStreamGuard11GetInBufferI22SIG_ACCOUNT_CARGO_DATAEEPT_v>
 843b4fe:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843b501:	c7 44 24 08 60 0d 00 	movl   $0xd60,0x8(%esp)
 843b508:	00 
 843b509:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b510:	00 
 843b511:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843b514:	89 04 24             	mov    %eax,(%esp)
 843b517:	e8 a4 27 c4 ff       	call   807dcc0 <memset@plt>
 843b51c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843b51f:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b523:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b52a:	00 
 843b52b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b52e:	89 04 24             	mov    %eax,(%esp)
 843b531:	e8 bc 6d ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843b536:	83 f0 01             	xor    $0x1,%eax
 843b539:	84 c0                	test   %al,%al
 843b53b:	74 0a                	je     843b547 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x191>
 843b53d:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b542:	e9 8c 01 00 00       	jmp    843b6d3 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x31d>
 843b547:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843b54a:	83 c0 04             	add    $0x4,%eax
 843b54d:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b551:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b558:	00 
 843b559:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b55c:	89 04 24             	mov    %eax,(%esp)
 843b55f:	e8 8e 6d ca ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 843b564:	83 f0 01             	xor    $0x1,%eax
 843b567:	84 c0                	test   %al,%al
 843b569:	74 0a                	je     843b575 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x1bf>
 843b56b:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b570:	e9 5e 01 00 00       	jmp    843b6d3 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x31d>
 843b575:	8d 95 bd ef ff ff    	lea    -0x1043(%ebp),%edx
 843b57b:	bb 0f 10 00 00       	mov    $0x100f,%ebx
 843b580:	b8 00 00 00 00       	mov    $0x0,%eax
 843b585:	89 d1                	mov    %edx,%ecx
 843b587:	83 e1 01             	and    $0x1,%ecx
 843b58a:	85 c9                	test   %ecx,%ecx
 843b58c:	74 08                	je     843b596 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x1e0>
 843b58e:	88 02                	mov    %al,(%edx)
 843b590:	83 c2 01             	add    $0x1,%edx
 843b593:	83 eb 01             	sub    $0x1,%ebx
 843b596:	89 d1                	mov    %edx,%ecx
 843b598:	83 e1 02             	and    $0x2,%ecx
 843b59b:	85 c9                	test   %ecx,%ecx
 843b59d:	74 09                	je     843b5a8 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x1f2>
 843b59f:	66 89 02             	mov    %ax,(%edx)
 843b5a2:	83 c2 02             	add    $0x2,%edx
 843b5a5:	83 eb 02             	sub    $0x2,%ebx
 843b5a8:	89 d9                	mov    %ebx,%ecx
 843b5aa:	c1 e9 02             	shr    $0x2,%ecx
 843b5ad:	89 d7                	mov    %edx,%edi
 843b5af:	f3 ab                	rep stos %eax,%es:(%edi)
 843b5b1:	89 fa                	mov    %edi,%edx
 843b5b3:	89 d9                	mov    %ebx,%ecx
 843b5b5:	83 e1 02             	and    $0x2,%ecx
 843b5b8:	85 c9                	test   %ecx,%ecx
 843b5ba:	74 06                	je     843b5c2 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x20c>
 843b5bc:	66 89 02             	mov    %ax,(%edx)
 843b5bf:	83 c2 02             	add    $0x2,%edx
 843b5c2:	89 d9                	mov    %ebx,%ecx
 843b5c4:	83 e1 01             	and    $0x1,%ecx
 843b5c7:	85 c9                	test   %ecx,%ecx
 843b5c9:	74 05                	je     843b5d0 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x21a>
 843b5cb:	88 02                	mov    %al,(%edx)
 843b5cd:	83 c2 01             	add    $0x1,%edx
 843b5d0:	c7 44 24 0c 0f 10 00 	movl   $0x100f,0xc(%esp)
 843b5d7:	00 
 843b5d8:	8d 85 bd ef ff ff    	lea    -0x1043(%ebp),%eax
 843b5de:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b5e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b5e9:	00 
 843b5ea:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b5ed:	89 04 24             	mov    %eax,(%esp)
 843b5f0:	e8 25 9d ce ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 843b5f5:	83 f0 01             	xor    $0x1,%eax
 843b5f8:	84 c0                	test   %al,%al
 843b5fa:	74 0a                	je     843b606 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x250>
 843b5fc:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b601:	e9 cd 00 00 00       	jmp    843b6d3 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x31d>
 843b606:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b60d:	00 
 843b60e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843b611:	89 04 24             	mov    %eax,(%esp)
 843b614:	e8 c5 9d ce ff       	call   81253de <_ZN5MySQL17get_binary_lengthEi>
 843b619:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 843b61c:	c7 45 cc 58 0d 00 00 	movl   $0xd58,-0x34(%ebp)
 843b623:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843b626:	83 c0 08             	add    $0x8,%eax
 843b629:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 843b62c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843b630:	8d 95 bd ef ff ff    	lea    -0x1043(%ebp),%edx
 843b636:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b63a:	8d 55 cc             	lea    -0x34(%ebp),%edx
 843b63d:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b641:	89 04 24             	mov    %eax,(%esp)
 843b644:	e8 b9 6a 27 00       	call   86b2102 <_Z14uncompress_zipPcRjPKcj>
 843b649:	83 f0 01             	xor    $0x1,%eax
 843b64c:	84 c0                	test   %al,%al
 843b64e:	74 07                	je     843b657 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x2a1>
 843b650:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b655:	eb 7c                	jmp    843b6d3 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x31d>
 843b657:	8b 45 cc             	mov    -0x34(%ebp),%eax
 843b65a:	85 c0                	test   %eax,%eax
 843b65c:	74 37                	je     843b695 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x2df>
 843b65e:	8b 4d cc             	mov    -0x34(%ebp),%ecx
 843b661:	89 c8                	mov    %ecx,%eax
 843b663:	c1 e8 03             	shr    $0x3,%eax
 843b666:	89 85 b4 ef ff ff    	mov    %eax,-0x104c(%ebp)
 843b66c:	ba 77 ae 97 09       	mov    $0x997ae77,%edx
 843b671:	8b 85 b4 ef ff ff    	mov    -0x104c(%ebp),%eax
 843b677:	f7 e2                	mul    %edx
 843b679:	89 d0                	mov    %edx,%eax
 843b67b:	c1 e8 04             	shr    $0x4,%eax
 843b67e:	69 c0 58 0d 00 00    	imul   $0xd58,%eax,%eax
 843b684:	89 ca                	mov    %ecx,%edx
 843b686:	29 c2                	sub    %eax,%edx
 843b688:	89 d0                	mov    %edx,%eax
 843b68a:	85 c0                	test   %eax,%eax
 843b68c:	74 07                	je     843b695 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x2df>
 843b68e:	bb 00 00 00 00       	mov    $0x0,%ebx
 843b693:	eb 3e                	jmp    843b6d3 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x31d>
 843b695:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843b69a:	8d 55 d0             	lea    -0x30(%ebp),%edx
 843b69d:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b6a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b6a8:	00 
 843b6a9:	89 04 24             	mov    %eax,(%esp)
 843b6ac:	e8 2d 59 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843b6b1:	bb 01 00 00 00       	mov    $0x1,%ebx
 843b6b6:	eb 1b                	jmp    843b6d3 <_ZN19DB_LoadAccountCargo8dispatchEiiP6Stream+0x31d>
 843b6b8:	89 d3                	mov    %edx,%ebx
 843b6ba:	89 c6                	mov    %eax,%esi
 843b6bc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843b6bf:	89 04 24             	mov    %eax,(%esp)
 843b6c2:	e8 0b 12 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b6c7:	89 f0                	mov    %esi,%eax
 843b6c9:	89 da                	mov    %ebx,%edx
 843b6cb:	89 04 24             	mov    %eax,(%esp)
 843b6ce:	e8 7d 80 6a 00       	call   8ae3750 <_Unwind_Resume>
 843b6d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843b6d6:	89 04 24             	mov    %eax,(%esp)
 843b6d9:	e8 f4 11 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b6de:	89 d8                	mov    %ebx,%eax
 843b6e0:	81 c4 5c 10 00 00    	add    $0x105c,%esp
 843b6e6:	5b                   	pop    %ebx
 843b6e7:	5e                   	pop    %esi
 843b6e8:	5f                   	pop    %edi
 843b6e9:	5d                   	pop    %ebp
 843b6ea:	c3                   	ret
 843b6eb:	90                   	nop

```

```c
// DB_LoadAccountCargo::dispatch @ 0x843b3b6

/* DB_LoadAccountCargo::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_LoadAccountCargo::dispatch(DB_LoadAccountCargo *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  Stream *pSVar4;
  CStreamGuard *pCVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_1047;
  char local_1046 [4110];
  uint local_38;
  CStreamGuard local_34 [8];
  uint local_2c;
  MySQL *local_28;
  SIG_ACCOUNT_CARGO_DATA *local_24;
  uint local_20;
  
  bVar10 = 0;
  local_2c = 0;
  Stream::operator>>(param_3,&local_2c);
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  uVar2 = NumberToString(local_2c,0);
  MySQL::set_query(local_28,"seLect capacity, money, cargo from account_cargo where m_id = %s",uVar2
                  );
  cVar1 = MySQL::exec(local_28,true);
  if (cVar1 == '\x01') {
    iVar3 = MySQL::get_n_rows(local_28);
    if (iVar3 == 0) {
      uVar2 = 1;
    }
    else {
      cVar1 = MySQL::fetch(local_28);
      if (cVar1 == '\x01') {
        pSVar4 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c53);
        CStreamGuard::CStreamGuard(local_34,pSVar4,true);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
                    /* try { // try from 0843b4cc to 0843b6b0 has its CatchHandler @ 0843b6b8 */
        CStreamGuard::operator<<(pCVar5,param_1);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator*(local_34);
        CStreamGuard::operator<<(pCVar5,param_2);
        pCVar5 = (CStreamGuard *)CStreamGuard::operator->(local_34);
        local_24 = CStreamGuard::GetInBuffer<SIG_ACCOUNT_CARGO_DATA>(pCVar5);
        memset(local_24,0,0xd60);
        cVar1 = MySQL::get_uint(local_28,0,(uint *)local_24);
        if (cVar1 == '\x01') {
          cVar1 = MySQL::get_uint(local_28,1,(uint *)(local_24 + 4));
          if (cVar1 == '\x01') {
            pcVar7 = &local_1047;
            uVar8 = 0x100f;
            bVar9 = ((uint)pcVar7 & 1) != 0;
            if (bVar9) {
              local_1047 = '\0';
              pcVar7 = local_1046;
              uVar8 = 0x100e;
            }
            if (((uint)pcVar7 & 2) != 0) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7 = pcVar7 + 2;
              uVar8 = uVar8 - 2;
            }
            for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7[2] = '\0';
              pcVar7[3] = '\0';
              pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
            }
            if ((uVar8 & 2) != 0) {
              pcVar7[0] = '\0';
              pcVar7[1] = '\0';
              pcVar7 = pcVar7 + 2;
            }
            if (!bVar9) {
              *pcVar7 = '\0';
            }
            cVar1 = MySQL::get_binary(local_28,2,&local_1047,0x100f);
            if (cVar1 == '\x01') {
              local_20 = MySQL::get_binary_length(local_28,2);
              local_38 = 0xd58;
              cVar1 = uncompress_zip((char *)(local_24 + 8),&local_38,&local_1047,local_20);
              if (cVar1 == '\x01') {
                if ((local_38 == 0) || (local_38 == (local_38 / 0xd58) * 0xd58)) {
                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_34);
                  uVar2 = 1;
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
        CStreamGuard::~CStreamGuard(local_34);
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## makeRequest

```asm
// === 0843b6ec DB_LoadAccountCargo::makeRequest  [0x0843b6ec-0x843b7c1] ===
 843b6ec:	55                   	push   %ebp
 843b6ed:	89 e5                	mov    %esp,%ebp
 843b6ef:	56                   	push   %esi
 843b6f0:	53                   	push   %ebx
 843b6f1:	83 ec 20             	sub    $0x20,%esp
 843b6f4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843b6f9:	c7 44 24 08 75 8c 00 	movl   $0x8c75,0x8(%esp)
 843b700:	00 
 843b701:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843b708:	08 
 843b709:	89 04 24             	mov    %eax,(%esp)
 843b70c:	e8 75 43 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843b711:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843b718:	00 
 843b719:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b71d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b720:	89 04 24             	mov    %eax,(%esp)
 843b723:	e8 fe d4 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843b728:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b72b:	89 04 24             	mov    %eax,(%esp)
 843b72e:	e8 13 d5 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b733:	c7 44 24 04 f2 01 00 	movl   $0x1f2,0x4(%esp)
 843b73a:	00 
 843b73b:	89 04 24             	mov    %eax,(%esp)
 843b73e:	e8 13 d5 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b743:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b746:	89 04 24             	mov    %eax,(%esp)
 843b749:	e8 f8 d4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b74e:	8b 55 08             	mov    0x8(%ebp),%edx
 843b751:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b755:	89 04 24             	mov    %eax,(%esp)
 843b758:	e8 f9 d4 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b75d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b760:	89 04 24             	mov    %eax,(%esp)
 843b763:	e8 de d4 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b768:	8b 55 0c             	mov    0xc(%ebp),%edx
 843b76b:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b76f:	89 04 24             	mov    %eax,(%esp)
 843b772:	e8 1b 6b ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843b777:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843b77c:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843b77f:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b783:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b78a:	00 
 843b78b:	89 04 24             	mov    %eax,(%esp)
 843b78e:	e8 4b 58 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843b793:	eb 1b                	jmp    843b7b0 <_ZN19DB_LoadAccountCargo11makeRequestEij+0xc4>
 843b795:	89 d3                	mov    %edx,%ebx
 843b797:	89 c6                	mov    %eax,%esi
 843b799:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b79c:	89 04 24             	mov    %eax,(%esp)
 843b79f:	e8 2e 11 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b7a4:	89 f0                	mov    %esi,%eax
 843b7a6:	89 da                	mov    %ebx,%edx
 843b7a8:	89 04 24             	mov    %eax,(%esp)
 843b7ab:	e8 a0 7f 6a 00       	call   8ae3750 <_Unwind_Resume>
 843b7b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843b7b3:	89 04 24             	mov    %eax,(%esp)
 843b7b6:	e8 17 11 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843b7bb:	83 c4 20             	add    $0x20,%esp
 843b7be:	5b                   	pop    %ebx
 843b7bf:	5e                   	pop    %esi
 843b7c0:	5d                   	pop    %ebp
 843b7c1:	c3                   	ret

```

```c
// DB_LoadAccountCargo::makeRequest @ 0x843b6ec

/* DB_LoadAccountCargo::makeRequest(int, unsigned int) */

void DB_LoadAccountCargo::makeRequest(int param_1,uint param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8c75);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843b73e to 0843b792 has its CatchHandler @ 0843b795 */
  CStreamGuard::operator<<(pCVar2,0x1f2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

