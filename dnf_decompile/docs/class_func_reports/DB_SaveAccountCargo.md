# DB_SaveAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0843b7c2 DB_SaveAccountCargo::dispatch  [0x0843b7c2-0x843b945] ===
 843b7c2:	55                   	push   %ebp
 843b7c3:	89 e5                	mov    %esp,%ebp
 843b7c5:	57                   	push   %edi
 843b7c6:	53                   	push   %ebx
 843b7c7:	81 ec 40 10 00 00    	sub    $0x1040,%esp
 843b7cd:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 843b7d4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843b7d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b7db:	8b 45 14             	mov    0x14(%ebp),%eax
 843b7de:	89 04 24             	mov    %eax,(%esp)
 843b7e1:	e8 b0 0f 1e 00       	call   861c796 <_ZN6StreamrsERj>
 843b7e6:	8b 45 14             	mov    0x14(%ebp),%eax
 843b7e9:	89 04 24             	mov    %eax,(%esp)
 843b7ec:	e8 35 82 01 00       	call   8453a26 <_ZN6Stream12GetOutBufferI22SIG_ACCOUNT_CARGO_DATAEEPT_v>
 843b7f1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 843b7f4:	8d 95 d9 ef ff ff    	lea    -0x1027(%ebp),%edx
 843b7fa:	bb 0f 10 00 00       	mov    $0x100f,%ebx
 843b7ff:	b8 00 00 00 00       	mov    $0x0,%eax
 843b804:	89 d1                	mov    %edx,%ecx
 843b806:	83 e1 01             	and    $0x1,%ecx
 843b809:	85 c9                	test   %ecx,%ecx
 843b80b:	74 08                	je     843b815 <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x53>
 843b80d:	88 02                	mov    %al,(%edx)
 843b80f:	83 c2 01             	add    $0x1,%edx
 843b812:	83 eb 01             	sub    $0x1,%ebx
 843b815:	89 d1                	mov    %edx,%ecx
 843b817:	83 e1 02             	and    $0x2,%ecx
 843b81a:	85 c9                	test   %ecx,%ecx
 843b81c:	74 09                	je     843b827 <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x65>
 843b81e:	66 89 02             	mov    %ax,(%edx)
 843b821:	83 c2 02             	add    $0x2,%edx
 843b824:	83 eb 02             	sub    $0x2,%ebx
 843b827:	89 d9                	mov    %ebx,%ecx
 843b829:	c1 e9 02             	shr    $0x2,%ecx
 843b82c:	89 d7                	mov    %edx,%edi
 843b82e:	f3 ab                	rep stos %eax,%es:(%edi)
 843b830:	89 fa                	mov    %edi,%edx
 843b832:	89 d9                	mov    %ebx,%ecx
 843b834:	83 e1 02             	and    $0x2,%ecx
 843b837:	85 c9                	test   %ecx,%ecx
 843b839:	74 06                	je     843b841 <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x7f>
 843b83b:	66 89 02             	mov    %ax,(%edx)
 843b83e:	83 c2 02             	add    $0x2,%edx
 843b841:	89 d9                	mov    %ebx,%ecx
 843b843:	83 e1 01             	and    $0x1,%ecx
 843b846:	85 c9                	test   %ecx,%ecx
 843b848:	74 05                	je     843b84f <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x8d>
 843b84a:	88 02                	mov    %al,(%edx)
 843b84c:	83 c2 01             	add    $0x1,%edx
 843b84f:	c7 45 e8 0f 10 00 00 	movl   $0x100f,-0x18(%ebp)
 843b856:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843b859:	83 c0 08             	add    $0x8,%eax
 843b85c:	c7 44 24 0c 58 0d 00 	movl   $0xd58,0xc(%esp)
 843b863:	00 
 843b864:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b868:	8d 45 e8             	lea    -0x18(%ebp),%eax
 843b86b:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b86f:	8d 85 d9 ef ff ff    	lea    -0x1027(%ebp),%eax
 843b875:	89 04 24             	mov    %eax,(%esp)
 843b878:	e8 a2 67 27 00       	call   86b201f <_Z12compress_zipPcRjPKcj>
 843b87d:	83 f0 01             	xor    $0x1,%eax
 843b880:	84 c0                	test   %al,%al
 843b882:	74 0a                	je     843b88e <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0xcc>
 843b884:	b8 00 00 00 00       	mov    $0x0,%eax
 843b889:	e9 ad 00 00 00       	jmp    843b93b <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x179>
 843b88e:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843b893:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843b89a:	00 
 843b89b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843b8a2:	00 
 843b8a3:	89 04 24             	mov    %eax,(%esp)
 843b8a6:	e8 93 99 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843b8ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843b8ae:	8b 45 ec             	mov    -0x14(%ebp),%eax
 843b8b1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b8b8:	00 
 843b8b9:	89 04 24             	mov    %eax,(%esp)
 843b8bc:	e8 8a d7 cc ff       	call   810904b <_Z14NumberToStringji>
 843b8c1:	89 c3                	mov    %eax,%ebx
 843b8c3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 843b8c6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843b8ca:	8d 85 d9 ef ff ff    	lea    -0x1027(%ebp),%eax
 843b8d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 843b8d4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b8db:	00 
 843b8dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b8df:	89 04 24             	mov    %eax,(%esp)
 843b8e2:	e8 43 8c fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 843b8e7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 843b8ea:	8b 4a 04             	mov    0x4(%edx),%ecx
 843b8ed:	8b 55 f0             	mov    -0x10(%ebp),%edx
 843b8f0:	8b 12                	mov    (%edx),%edx
 843b8f2:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 843b8f6:	89 44 24 10          	mov    %eax,0x10(%esp)
 843b8fa:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 843b8fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 843b902:	c7 44 24 04 08 50 c5 	movl   $0x8c55008,0x4(%esp)
 843b909:	08 
 843b90a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b90d:	89 04 24             	mov    %eax,(%esp)
 843b910:	e8 ab 88 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843b915:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843b91c:	00 
 843b91d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b920:	89 04 24             	mov    %eax,(%esp)
 843b923:	e8 fe 89 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843b928:	83 f0 01             	xor    $0x1,%eax
 843b92b:	84 c0                	test   %al,%al
 843b92d:	74 07                	je     843b936 <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x174>
 843b92f:	b8 00 00 00 00       	mov    $0x0,%eax
 843b934:	eb 05                	jmp    843b93b <_ZN19DB_SaveAccountCargo8dispatchEiiP6Stream+0x179>
 843b936:	b8 01 00 00 00       	mov    $0x1,%eax
 843b93b:	81 c4 40 10 00 00    	add    $0x1040,%esp
 843b941:	5b                   	pop    %ebx
 843b942:	5f                   	pop    %edi
 843b943:	5d                   	pop    %ebp
 843b944:	c3                   	ret
 843b945:	90                   	nop

```

```c
// DB_SaveAccountCargo::dispatch @ 0x843b7c2

/* DB_SaveAccountCargo::dispatch(int, int, Stream*) */

undefined4 DB_SaveAccountCargo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  Stream *in_stack_00000010;
  char local_102b;
  char local_102a [4110];
  uint local_1c;
  uint local_18;
  SIG_ACCOUNT_CARGO_DATA *local_14;
  MySQL *local_10;
  
  bVar8 = 0;
  local_18 = 0;
  Stream::operator>>(in_stack_00000010,&local_18);
  local_14 = Stream::GetOutBuffer<SIG_ACCOUNT_CARGO_DATA>(in_stack_00000010);
  pcVar5 = &local_102b;
  uVar6 = 0x100f;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_102b = '\0';
    pcVar5 = local_102a;
    uVar6 = 0x100e;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  local_1c = 0x100f;
  cVar1 = compress_zip(&local_102b,&local_1c,(char *)(local_14 + 8),0xd58);
  if (cVar1 == '\x01') {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    uVar2 = NumberToString(local_18,0);
    uVar3 = MySQL::blob_to_str(local_10,0,&local_102b,local_1c);
    MySQL::set_query(local_10,
                     "upDate account_cargo set capacity=%u, money=%u, cargo=\'%s\' where m_id = %s",
                     *(undefined4 *)local_14,*(undefined4 *)(local_14 + 4),uVar3,uVar2);
    cVar1 = MySQL::exec(local_10,true);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
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
// === 0843b946 DB_SaveAccountCargo::makeRequest  [0x0843b946-0x843ba93] ===
 843b946:	55                   	push   %ebp
 843b947:	89 e5                	mov    %esp,%ebp
 843b949:	56                   	push   %esi
 843b94a:	53                   	push   %ebx
 843b94b:	83 ec 20             	sub    $0x20,%esp
 843b94e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843b953:	c7 44 24 08 9f 8c 00 	movl   $0x8c9f,0x8(%esp)
 843b95a:	00 
 843b95b:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843b962:	08 
 843b963:	89 04 24             	mov    %eax,(%esp)
 843b966:	e8 1b 41 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843b96b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843b972:	00 
 843b973:	89 44 24 04          	mov    %eax,0x4(%esp)
 843b977:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843b97a:	89 04 24             	mov    %eax,(%esp)
 843b97d:	e8 a4 d2 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843b982:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843b985:	89 04 24             	mov    %eax,(%esp)
 843b988:	e8 b9 d2 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b98d:	c7 44 24 04 f1 01 00 	movl   $0x1f1,0x4(%esp)
 843b994:	00 
 843b995:	89 04 24             	mov    %eax,(%esp)
 843b998:	e8 b9 d2 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b99d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843b9a0:	89 04 24             	mov    %eax,(%esp)
 843b9a3:	e8 9e d2 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b9a8:	8b 55 08             	mov    0x8(%ebp),%edx
 843b9ab:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b9af:	89 04 24             	mov    %eax,(%esp)
 843b9b2:	e8 9f d2 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843b9b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843b9ba:	89 04 24             	mov    %eax,(%esp)
 843b9bd:	e8 84 d2 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843b9c2:	8b 55 0c             	mov    0xc(%ebp),%edx
 843b9c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 843b9c9:	89 04 24             	mov    %eax,(%esp)
 843b9cc:	e8 c1 68 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 843b9d1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843b9d4:	89 04 24             	mov    %eax,(%esp)
 843b9d7:	e8 72 d2 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843b9dc:	89 04 24             	mov    %eax,(%esp)
 843b9df:	e8 2c 80 01 00       	call   8453a10 <_ZN12CStreamGuard11GetInBufferI22SIG_ACCOUNT_CARGO_DATAEEPT_v>
 843b9e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843b9e7:	c7 44 24 08 60 0d 00 	movl   $0xd60,0x8(%esp)
 843b9ee:	00 
 843b9ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843b9f6:	00 
 843b9f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843b9fa:	89 04 24             	mov    %eax,(%esp)
 843b9fd:	e8 be 22 c4 ff       	call   807dcc0 <memset@plt>
 843ba02:	8b 45 10             	mov    0x10(%ebp),%eax
 843ba05:	8b 90 60 0d 00 00    	mov    0xd60(%eax),%edx
 843ba0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ba0e:	89 10                	mov    %edx,(%eax)
 843ba10:	8b 45 10             	mov    0x10(%ebp),%eax
 843ba13:	8b 90 5c 0d 00 00    	mov    0xd5c(%eax),%edx
 843ba19:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ba1c:	89 50 04             	mov    %edx,0x4(%eax)
 843ba1f:	8b 45 10             	mov    0x10(%ebp),%eax
 843ba22:	8d 50 04             	lea    0x4(%eax),%edx
 843ba25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843ba28:	83 c0 08             	add    $0x8,%eax
 843ba2b:	c7 44 24 08 58 0d 00 	movl   $0xd58,0x8(%esp)
 843ba32:	00 
 843ba33:	89 54 24 04          	mov    %edx,0x4(%esp)
 843ba37:	89 04 24             	mov    %eax,(%esp)
 843ba3a:	e8 61 1e c4 ff       	call   807d8a0 <memcpy@plt>
 843ba3f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843ba44:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843ba47:	89 54 24 08          	mov    %edx,0x8(%esp)
 843ba4b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843ba52:	00 
 843ba53:	89 04 24             	mov    %eax,(%esp)
 843ba56:	e8 83 55 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843ba5b:	8b 45 10             	mov    0x10(%ebp),%eax
 843ba5e:	89 04 24             	mov    %eax,(%esp)
 843ba61:	e8 b0 21 01 00       	call   844dc16 <_ZN13CAccountCargo9SetStableEv>
 843ba66:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843ba69:	89 04 24             	mov    %eax,(%esp)
 843ba6c:	e8 61 0e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ba71:	83 c4 20             	add    $0x20,%esp
 843ba74:	5b                   	pop    %ebx
 843ba75:	5e                   	pop    %esi
 843ba76:	5d                   	pop    %ebp
 843ba77:	c3                   	ret
 843ba78:	89 d3                	mov    %edx,%ebx
 843ba7a:	89 c6                	mov    %eax,%esi
 843ba7c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843ba7f:	89 04 24             	mov    %eax,(%esp)
 843ba82:	e8 4b 0e 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843ba87:	89 f0                	mov    %esi,%eax
 843ba89:	89 da                	mov    %ebx,%edx
 843ba8b:	89 04 24             	mov    %eax,(%esp)
 843ba8e:	e8 bd 7c 6a 00       	call   8ae3750 <_Unwind_Resume>
 843ba93:	90                   	nop

```

```c
// DB_SaveAccountCargo::makeRequest @ 0x843b946

/* DB_SaveAccountCargo::makeRequest(int, unsigned int, CAccountCargo*) */

void DB_SaveAccountCargo::makeRequest(int param_1,uint param_2,CAccountCargo *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_ACCOUNT_CARGO_DATA *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",35999);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843b998 to 0843ba5a has its CatchHandler @ 0843ba78 */
  CStreamGuard::operator<<(pCVar2,0x1f1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_ACCOUNT_CARGO_DATA>(pCVar2);
  memset(local_10,0,0xd60);
  *(undefined4 *)local_10 = *(undefined4 *)(param_3 + 0xd60);
  *(undefined4 *)(local_10 + 4) = *(undefined4 *)(param_3 + 0xd5c);
  memcpy(local_10 + 8,param_3 + 4,0xd58);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CAccountCargo::SetStable(param_3);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

