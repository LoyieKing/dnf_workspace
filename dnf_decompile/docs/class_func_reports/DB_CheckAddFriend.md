# DB_CheckAddFriend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 0844c6e0 DB_CheckAddFriend::dispatch  [0x0844c6e0-0x844c9d3] ===
 844c6e0:	55                   	push   %ebp
 844c6e1:	89 e5                	mov    %esp,%ebp
 844c6e3:	57                   	push   %edi
 844c6e4:	56                   	push   %esi
 844c6e5:	53                   	push   %ebx
 844c6e6:	83 ec 7c             	sub    $0x7c,%esp
 844c6e9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 844c6f0:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 844c6f7:	c7 45 dc 01 00 00 00 	movl   $0x1,-0x24(%ebp)
 844c6fe:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 844c705:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 844c70c:	8d 55 91             	lea    -0x6f(%ebp),%edx
 844c70f:	bb 3b 00 00 00       	mov    $0x3b,%ebx
 844c714:	b8 00 00 00 00       	mov    $0x0,%eax
 844c719:	89 d1                	mov    %edx,%ecx
 844c71b:	83 e1 01             	and    $0x1,%ecx
 844c71e:	85 c9                	test   %ecx,%ecx
 844c720:	74 08                	je     844c72a <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x4a>
 844c722:	88 02                	mov    %al,(%edx)
 844c724:	83 c2 01             	add    $0x1,%edx
 844c727:	83 eb 01             	sub    $0x1,%ebx
 844c72a:	89 d1                	mov    %edx,%ecx
 844c72c:	83 e1 02             	and    $0x2,%ecx
 844c72f:	85 c9                	test   %ecx,%ecx
 844c731:	74 09                	je     844c73c <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x5c>
 844c733:	66 89 02             	mov    %ax,(%edx)
 844c736:	83 c2 02             	add    $0x2,%edx
 844c739:	83 eb 02             	sub    $0x2,%ebx
 844c73c:	89 d9                	mov    %ebx,%ecx
 844c73e:	c1 e9 02             	shr    $0x2,%ecx
 844c741:	89 d7                	mov    %edx,%edi
 844c743:	f3 ab                	rep stos %eax,%es:(%edi)
 844c745:	89 fa                	mov    %edi,%edx
 844c747:	89 d9                	mov    %ebx,%ecx
 844c749:	83 e1 02             	and    $0x2,%ecx
 844c74c:	85 c9                	test   %ecx,%ecx
 844c74e:	74 06                	je     844c756 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x76>
 844c750:	66 89 02             	mov    %ax,(%edx)
 844c753:	83 c2 02             	add    $0x2,%edx
 844c756:	89 d9                	mov    %ebx,%ecx
 844c758:	83 e1 01             	and    $0x1,%ecx
 844c75b:	85 c9                	test   %ecx,%ecx
 844c75d:	74 05                	je     844c764 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x84>
 844c75f:	88 02                	mov    %al,(%edx)
 844c761:	83 c2 01             	add    $0x1,%edx
 844c764:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 844c768:	75 0a                	jne    844c774 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x94>
 844c76a:	be 00 00 00 00       	mov    $0x0,%esi
 844c76f:	e9 56 02 00 00       	jmp    844c9ca <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x2ea>
 844c774:	8b 45 14             	mov    0x14(%ebp),%eax
 844c777:	89 04 24             	mov    %eax,(%esp)
 844c77a:	e8 5d 82 00 00       	call   84549dc <_ZN6Stream12GetOutBufferI20SIG_CHECK_ADD_FRIENDEEPT_v>
 844c77f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 844c782:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 844c786:	75 0a                	jne    844c792 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0xb2>
 844c788:	be 00 00 00 00       	mov    $0x0,%esi
 844c78d:	e9 38 02 00 00       	jmp    844c9ca <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x2ea>
 844c792:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c795:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 844c799:	84 c0                	test   %al,%al
 844c79b:	0f 84 08 01 00 00    	je     844c8a9 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1c9>
 844c7a1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844c7a6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844c7ad:	00 
 844c7ae:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 844c7b5:	00 
 844c7b6:	89 04 24             	mov    %eax,(%esp)
 844c7b9:	e8 80 8a fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844c7be:	89 45 d8             	mov    %eax,-0x28(%ebp)
 844c7c1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 844c7c5:	0f 84 e7 00 00 00    	je     844c8b2 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1d2>
 844c7cb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c7ce:	83 c0 05             	add    $0x5,%eax
 844c7d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c7d5:	8d 45 91             	lea    -0x6f(%ebp),%eax
 844c7d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 844c7dc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 844c7df:	89 04 24             	mov    %eax,(%esp)
 844c7e2:	e8 c3 80 fa ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 844c7e7:	85 c0                	test   %eax,%eax
 844c7e9:	0f 94 c0             	sete   %al
 844c7ec:	84 c0                	test   %al,%al
 844c7ee:	0f 85 c1 00 00 00    	jne    844c8b5 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1d5>
 844c7f4:	8d 45 91             	lea    -0x6f(%ebp),%eax
 844c7f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c7fb:	c7 44 24 04 d8 9a c5 	movl   $0x8c59ad8,0x4(%esp)
 844c802:	08 
 844c803:	8b 45 d8             	mov    -0x28(%ebp),%eax
 844c806:	89 04 24             	mov    %eax,(%esp)
 844c809:	e8 b2 79 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844c80e:	83 f0 01             	xor    $0x1,%eax
 844c811:	84 c0                	test   %al,%al
 844c813:	0f 85 9f 00 00 00    	jne    844c8b8 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1d8>
 844c819:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c820:	00 
 844c821:	8b 45 d8             	mov    -0x28(%ebp),%eax
 844c824:	89 04 24             	mov    %eax,(%esp)
 844c827:	e8 fa 7a fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844c82c:	83 f0 01             	xor    $0x1,%eax
 844c82f:	84 c0                	test   %al,%al
 844c831:	75 22                	jne    844c855 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x175>
 844c833:	8b 45 d8             	mov    -0x28(%ebp),%eax
 844c836:	89 04 24             	mov    %eax,(%esp)
 844c839:	e8 7e 7c fa ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 844c83e:	83 f0 01             	xor    $0x1,%eax
 844c841:	84 c0                	test   %al,%al
 844c843:	75 10                	jne    844c855 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x175>
 844c845:	8b 45 d8             	mov    -0x28(%ebp),%eax
 844c848:	89 04 24             	mov    %eax,(%esp)
 844c84b:	e8 1c 5b c9 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 844c850:	83 f8 01             	cmp    $0x1,%eax
 844c853:	74 07                	je     844c85c <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x17c>
 844c855:	b8 01 00 00 00       	mov    $0x1,%eax
 844c85a:	eb 05                	jmp    844c861 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x181>
 844c85c:	b8 00 00 00 00       	mov    $0x0,%eax
 844c861:	84 c0                	test   %al,%al
 844c863:	75 56                	jne    844c8bb <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1db>
 844c865:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844c868:	89 44 24 08          	mov    %eax,0x8(%esp)
 844c86c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844c873:	00 
 844c874:	8b 45 d8             	mov    -0x28(%ebp),%eax
 844c877:	89 04 24             	mov    %eax,(%esp)
 844c87a:	e8 ad a0 cc ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 844c87f:	83 f0 01             	xor    $0x1,%eax
 844c882:	84 c0                	test   %al,%al
 844c884:	75 38                	jne    844c8be <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1de>
 844c886:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 844c889:	89 c2                	mov    %eax,%edx
 844c88b:	a1 10 f7 41 09       	mov    0x941f710,%eax
 844c890:	89 54 24 04          	mov    %edx,0x4(%esp)
 844c894:	89 04 24             	mov    %eax,(%esp)
 844c897:	e8 aa ca cb ff       	call   8109346 <_ZN8WongWork11CGMAccounts4isGMEj>
 844c89c:	84 c0                	test   %al,%al
 844c89e:	74 09                	je     844c8a9 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1c9>
 844c8a0:	c7 45 dc 5a 00 00 00 	movl   $0x5a,-0x24(%ebp)
 844c8a7:	eb 16                	jmp    844c8bf <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1df>
 844c8a9:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 844c8b0:	eb 0d                	jmp    844c8bf <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1df>
 844c8b2:	90                   	nop
 844c8b3:	eb 0a                	jmp    844c8bf <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1df>
 844c8b5:	90                   	nop
 844c8b6:	eb 07                	jmp    844c8bf <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1df>
 844c8b8:	90                   	nop
 844c8b9:	eb 04                	jmp    844c8bf <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1df>
 844c8bb:	90                   	nop
 844c8bc:	eb 01                	jmp    844c8bf <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x1df>
 844c8be:	90                   	nop
 844c8bf:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 844c8c4:	c7 44 24 08 5e c0 00 	movl   $0xc05e,0x8(%esp)
 844c8cb:	00 
 844c8cc:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 844c8d3:	08 
 844c8d4:	89 04 24             	mov    %eax,(%esp)
 844c8d7:	e8 aa 31 e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 844c8dc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844c8e3:	00 
 844c8e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 844c8e8:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844c8eb:	89 04 24             	mov    %eax,(%esp)
 844c8ee:	e8 33 c3 c7 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844c8f3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844c8f6:	89 04 24             	mov    %eax,(%esp)
 844c8f9:	e8 48 c3 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c8fe:	c7 44 24 04 3e 03 00 	movl   $0x33e,0x4(%esp)
 844c905:	00 
 844c906:	89 04 24             	mov    %eax,(%esp)
 844c909:	e8 48 c3 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844c90e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844c911:	89 04 24             	mov    %eax,(%esp)
 844c914:	e8 2d c3 c7 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844c919:	8b 55 10             	mov    0x10(%ebp),%edx
 844c91c:	89 54 24 04          	mov    %edx,0x4(%esp)
 844c920:	89 04 24             	mov    %eax,(%esp)
 844c923:	e8 2e c3 c7 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 844c928:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844c92b:	89 04 24             	mov    %eax,(%esp)
 844c92e:	e8 1b c3 c7 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 844c933:	89 04 24             	mov    %eax,(%esp)
 844c936:	e8 b5 a4 de ff       	call   8236df0 <_ZN12CStreamGuard11GetInBufferI20SIG_CHECK_ADD_FRIENDEEPT_v>
 844c93b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 844c93e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 844c942:	75 0c                	jne    844c950 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x270>
 844c944:	be 00 00 00 00       	mov    $0x0,%esi
 844c949:	bb 00 00 00 00       	mov    $0x0,%ebx
 844c94e:	eb 66                	jmp    844c9b6 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x2d6>
 844c950:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c953:	8b 55 dc             	mov    -0x24(%ebp),%edx
 844c956:	89 10                	mov    %edx,(%eax)
 844c958:	8b 45 e0             	mov    -0x20(%ebp),%eax
 844c95b:	8d 50 05             	lea    0x5(%eax),%edx
 844c95e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844c961:	83 c0 05             	add    $0x5,%eax
 844c964:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 844c96b:	00 
 844c96c:	89 54 24 04          	mov    %edx,0x4(%esp)
 844c970:	89 04 24             	mov    %eax,(%esp)
 844c973:	e8 58 0f c3 ff       	call   807d8d0 <strncpy@plt>
 844c978:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 844c97d:	8d 55 cc             	lea    -0x34(%ebp),%edx
 844c980:	89 54 24 08          	mov    %edx,0x8(%esp)
 844c984:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844c98b:	00 
 844c98c:	89 04 24             	mov    %eax,(%esp)
 844c98f:	e8 4a 46 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 844c994:	bb 01 00 00 00       	mov    $0x1,%ebx
 844c999:	eb 1b                	jmp    844c9b6 <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x2d6>
 844c99b:	89 d3                	mov    %edx,%ebx
 844c99d:	89 c6                	mov    %eax,%esi
 844c99f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844c9a2:	89 04 24             	mov    %eax,(%esp)
 844c9a5:	e8 28 ff 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844c9aa:	89 f0                	mov    %esi,%eax
 844c9ac:	89 da                	mov    %ebx,%edx
 844c9ae:	89 04 24             	mov    %eax,(%esp)
 844c9b1:	e8 9a 6d 69 00       	call   8ae3750 <_Unwind_Resume>
 844c9b6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844c9b9:	89 04 24             	mov    %eax,(%esp)
 844c9bc:	e8 11 ff 1c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 844c9c1:	85 db                	test   %ebx,%ebx
 844c9c3:	74 05                	je     844c9ca <_ZN17DB_CheckAddFriend8dispatchEiiP6Stream+0x2ea>
 844c9c5:	be 01 00 00 00       	mov    $0x1,%esi
 844c9ca:	89 f0                	mov    %esi,%eax
 844c9cc:	83 c4 7c             	add    $0x7c,%esp
 844c9cf:	5b                   	pop    %ebx
 844c9d0:	5e                   	pop    %esi
 844c9d1:	5f                   	pop    %edi
 844c9d2:	5d                   	pop    %ebp
 844c9d3:	c3                   	ret

```

```c
// DB_CheckAddFriend::dispatch @ 0x844c6e0

/* DB_CheckAddFriend::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_CheckAddFriend::dispatch(DB_CheckAddFriend *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  bool bVar8;
  char local_73;
  char local_72 [58];
  CStreamGuard local_38 [8];
  uint local_30;
  MySQL *local_2c;
  undefined4 local_28;
  SIG_CHECK_ADD_FRIEND *local_24;
  SIG_CHECK_ADD_FRIEND *local_20;
  
  local_30 = 0;
  local_2c = (MySQL *)0x0;
  local_28 = 1;
  local_24 = (SIG_CHECK_ADD_FRIEND *)0x0;
  local_20 = (SIG_CHECK_ADD_FRIEND *)0x0;
  pcVar6 = &local_73;
  uVar7 = 0x3b;
  bVar8 = ((uint)pcVar6 & 1) != 0;
  if (bVar8) {
    local_73 = '\0';
    pcVar6 = local_72;
    uVar7 = 0x3a;
  }
  if (((uint)pcVar6 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
    uVar7 = uVar7 - 2;
  }
  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + 4;
  }
  if ((uVar7 & 2) != 0) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6 = pcVar6 + 2;
  }
  if (!bVar8) {
    *pcVar6 = '\0';
  }
  if (param_3 == (Stream *)0x0) {
    return 0;
  }
  local_24 = Stream::GetOutBuffer<SIG_CHECK_ADD_FRIEND>(param_3);
  if (local_24 == (SIG_CHECK_ADD_FRIEND *)0x0) {
    return 0;
  }
  if (local_24[4] != (SIG_CHECK_ADD_FRIEND)0x0) {
    local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    if (((local_2c == (MySQL *)0x0) ||
        (iVar2 = MySQL::escape_string(local_2c,&local_73,(char *)(local_24 + 5)), iVar2 == 0)) ||
       (cVar1 = MySQL::set_query(local_2c,
                                 "seLect m_id from charac_info where charac_name=\'%s\' and delete_flag=0"
                                 ,&local_73), cVar1 != '\x01')) goto LAB_0844c8bf;
    cVar1 = MySQL::exec(local_2c,true);
    if (((cVar1 == '\x01') && (cVar1 = MySQL::fetch(local_2c), cVar1 == '\x01')) &&
       (iVar2 = MySQL::get_n_rows(local_2c), iVar2 == 1)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if ((bVar8) || (cVar1 = MySQL::get_int(local_2c,0,(int *)&local_30), cVar1 != '\x01'))
    goto LAB_0844c8bf;
    cVar1 = WongWork::CGMAccounts::isGM(GlobalData::s_pGMAccounts_,local_30);
    if (cVar1 != '\0') {
      local_28 = 0x5a;
      goto LAB_0844c8bf;
    }
  }
  local_28 = 0;
LAB_0844c8bf:
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xc05e);
  CStreamGuard::CStreamGuard(local_38,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
                    /* try { // try from 0844c909 to 0844c993 has its CatchHandler @ 0844c99b */
  CStreamGuard::operator<<(pCVar4,0x33e);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_38);
  CStreamGuard::operator<<(pCVar4,param_2);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_38);
  local_20 = CStreamGuard::GetInBuffer<SIG_CHECK_ADD_FRIEND>(pCVar4);
  bVar8 = local_20 != (SIG_CHECK_ADD_FRIEND *)0x0;
  if (bVar8) {
    *(undefined4 *)local_20 = local_28;
    strncpy((char *)(local_20 + 5),(char *)(local_24 + 5),0x1e);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_38);
  }
  else {
    unaff_ESI = 0;
  }
  CStreamGuard::~CStreamGuard(local_38);
  if (bVar8) {
    unaff_ESI = 1;
  }
  return unaff_ESI;
}

```

