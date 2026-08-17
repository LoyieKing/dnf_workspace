# DBSelectMobileAuthRewardTw

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0815c6a8 DBSelectMobileAuthRewardTw::dispatch  [0x0815c6a8-0x815c985] ===
 815c6a8:	55                   	push   %ebp
 815c6a9:	89 e5                	mov    %esp,%ebp
 815c6ab:	56                   	push   %esi
 815c6ac:	53                   	push   %ebx
 815c6ad:	83 ec 50             	sub    $0x50,%esp
 815c6b0:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 815c6b4:	8b 45 14             	mov    0x14(%ebp),%eax
 815c6b7:	89 04 24             	mov    %eax,(%esp)
 815c6ba:	e8 21 25 00 00       	call   815ebe0 <_ZN6Stream12GetOutBufferIN26DBSelectMobileAuthRewardTw3MSGEEEPT_v>
 815c6bf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 815c6c2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 815c6c6:	75 2c                	jne    815c6f4 <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x4c>
 815c6c8:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c6cf:	e8 2c 91 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c6d4:	89 c2                	mov    %eax,%edx
 815c6d6:	c7 02 0d 78 b7 08    	movl   $0x8b7780d,(%edx)
 815c6dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c6e3:	00 
 815c6e4:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c6eb:	09 
 815c6ec:	89 04 24             	mov    %eax,(%esp)
 815c6ef:	e8 5c 85 5c 00       	call   8724c50 <__cxa_throw>
 815c6f4:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 815c6f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c700:	00 
 815c701:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 815c708:	00 
 815c709:	89 04 24             	mov    %eax,(%esp)
 815c70c:	e8 2d 8b 29 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 815c711:	89 45 f0             	mov    %eax,-0x10(%ebp)
 815c714:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 815c718:	75 2c                	jne    815c746 <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x9e>
 815c71a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c721:	e8 da 90 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c726:	89 c2                	mov    %eax,%edx
 815c728:	c7 02 03 72 b7 08    	movl   $0x8b77203,(%edx)
 815c72e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c735:	00 
 815c736:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c73d:	09 
 815c73e:	89 04 24             	mov    %eax,(%esp)
 815c741:	e8 0a 85 5c 00       	call   8724c50 <__cxa_throw>
 815c746:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c749:	8b 00                	mov    (%eax),%eax
 815c74b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c752:	00 
 815c753:	89 04 24             	mov    %eax,(%esp)
 815c756:	e8 f0 c8 fa ff       	call   810904b <_Z14NumberToStringji>
 815c75b:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c75f:	c7 44 24 04 e8 79 b7 	movl   $0x8b779e8,0x4(%esp)
 815c766:	08 
 815c767:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c76a:	89 04 24             	mov    %eax,(%esp)
 815c76d:	e8 4e 7a 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815c772:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815c779:	00 
 815c77a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c77d:	89 04 24             	mov    %eax,(%esp)
 815c780:	e8 a1 7b 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815c785:	83 f0 01             	xor    $0x1,%eax
 815c788:	84 c0                	test   %al,%al
 815c78a:	74 2c                	je     815c7b8 <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x110>
 815c78c:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c793:	e8 68 90 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c798:	89 c2                	mov    %eax,%edx
 815c79a:	c7 02 f9 74 b7 08    	movl   $0x8b774f9,(%edx)
 815c7a0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c7a7:	00 
 815c7a8:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c7af:	09 
 815c7b0:	89 04 24             	mov    %eax,(%esp)
 815c7b3:	e8 98 84 5c 00       	call   8724c50 <__cxa_throw>
 815c7b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c7bb:	89 04 24             	mov    %eax,(%esp)
 815c7be:	e8 a9 5b f8 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 815c7c3:	85 c0                	test   %eax,%eax
 815c7c5:	0f 94 c0             	sete   %al
 815c7c8:	84 c0                	test   %al,%al
 815c7ca:	0f 84 c9 00 00 00    	je     815c899 <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x1f1>
 815c7d0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c7d3:	8b 00                	mov    (%eax),%eax
 815c7d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c7dc:	00 
 815c7dd:	89 04 24             	mov    %eax,(%esp)
 815c7e0:	e8 66 c8 fa ff       	call   810904b <_Z14NumberToStringji>
 815c7e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c7e9:	c7 44 24 04 20 7a b7 	movl   $0x8b77a20,0x4(%esp)
 815c7f0:	08 
 815c7f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c7f4:	89 04 24             	mov    %eax,(%esp)
 815c7f7:	e8 c4 79 29 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 815c7fc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 815c803:	00 
 815c804:	8b 45 f0             	mov    -0x10(%ebp),%eax
 815c807:	89 04 24             	mov    %eax,(%esp)
 815c80a:	e8 17 7b 29 00       	call   83f4326 <_ZN5MySQL4execEb>
 815c80f:	83 f0 01             	xor    $0x1,%eax
 815c812:	84 c0                	test   %al,%al
 815c814:	74 2c                	je     815c842 <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x19a>
 815c816:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 815c81d:	e8 de 8f 5c 00       	call   8725800 <__cxa_allocate_exception>
 815c822:	89 c2                	mov    %eax,%edx
 815c824:	c7 02 b2 73 b7 08    	movl   $0x8b773b2,(%edx)
 815c82a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 815c831:	00 
 815c832:	c7 44 24 04 88 b2 36 	movl   $0x936b288,0x4(%esp)
 815c839:	09 
 815c83a:	89 04 24             	mov    %eax,(%esp)
 815c83d:	e8 0e 84 5c 00       	call   8724c50 <__cxa_throw>
 815c842:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 815c846:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c849:	8b 00                	mov    (%eax),%eax
 815c84b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c852:	00 
 815c853:	89 04 24             	mov    %eax,(%esp)
 815c856:	e8 f0 c7 fa ff       	call   810904b <_Z14NumberToStringji>
 815c85b:	89 c3                	mov    %eax,%ebx
 815c85d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815c864:	00 
 815c865:	c7 44 24 08 be 02 00 	movl   $0x2be,0x8(%esp)
 815c86c:	00 
 815c86d:	c7 44 24 04 e0 8e b7 	movl   $0x8b78ee0,0x4(%esp)
 815c874:	08 
 815c875:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815c878:	89 04 24             	mov    %eax,(%esp)
 815c87b:	e8 98 2e 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815c880:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815c884:	c7 44 24 04 64 7a b7 	movl   $0x8b77a64,0x4(%esp)
 815c88b:	08 
 815c88c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 815c88f:	89 04 24             	mov    %eax,(%esp)
 815c892:	e8 f1 2e 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815c897:	eb 55                	jmp    815c8ee <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x246>
 815c899:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 815c89d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c8a0:	8b 00                	mov    (%eax),%eax
 815c8a2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 815c8a9:	00 
 815c8aa:	89 04 24             	mov    %eax,(%esp)
 815c8ad:	e8 99 c7 fa ff       	call   810904b <_Z14NumberToStringji>
 815c8b2:	89 c3                	mov    %eax,%ebx
 815c8b4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815c8bb:	00 
 815c8bc:	c7 44 24 08 c3 02 00 	movl   $0x2c3,0x8(%esp)
 815c8c3:	00 
 815c8c4:	c7 44 24 04 e0 8e b7 	movl   $0x8b78ee0,0x4(%esp)
 815c8cb:	08 
 815c8cc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c8cf:	89 04 24             	mov    %eax,(%esp)
 815c8d2:	e8 41 2e 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815c8d7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 815c8db:	c7 44 24 04 a0 7a b7 	movl   $0x8b77aa0,0x4(%esp)
 815c8e2:	08 
 815c8e3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 815c8e6:	89 04 24             	mov    %eax,(%esp)
 815c8e9:	e8 9a 2e 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815c8ee:	0f b6 55 eb          	movzbl -0x15(%ebp),%edx
 815c8f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 815c8f5:	8b 00                	mov    (%eax),%eax
 815c8f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 815c8fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 815c8ff:	8b 45 10             	mov    0x10(%ebp),%eax
 815c902:	89 04 24             	mov    %eax,(%esp)
 815c905:	e8 a4 4c 00 00       	call   81615ae <_ZN27InterSelectMobileAuthReward11makeRequestEijb>
 815c90a:	bb 01 00 00 00       	mov    $0x1,%ebx
 815c90f:	eb 6c                	jmp    815c97d <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x2d5>
 815c911:	83 fa 01             	cmp    $0x1,%edx
 815c914:	74 08                	je     815c91e <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x276>
 815c916:	89 04 24             	mov    %eax,(%esp)
 815c919:	e8 32 6e 98 00       	call   8ae3750 <_Unwind_Resume>
 815c91e:	89 04 24             	mov    %eax,(%esp)
 815c921:	e8 ba 93 5c 00       	call   8725ce0 <__cxa_begin_catch>
 815c926:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815c929:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815c92c:	89 44 24 14          	mov    %eax,0x14(%esp)
 815c930:	c7 44 24 10 dc 7a b7 	movl   $0x8b77adc,0x10(%esp)
 815c937:	08 
 815c938:	c7 44 24 0c cd 02 00 	movl   $0x2cd,0xc(%esp)
 815c93f:	00 
 815c940:	c7 44 24 08 e0 8e b7 	movl   $0x8b78ee0,0x8(%esp)
 815c947:	08 
 815c948:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815c94f:	08 
 815c950:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 815c957:	e8 ae 72 97 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 815c95c:	bb 00 00 00 00       	mov    $0x0,%ebx
 815c961:	e8 ca 92 5c 00       	call   8725c30 <__cxa_end_catch>
 815c966:	eb 15                	jmp    815c97d <_ZN26DBSelectMobileAuthRewardTw8dispatchEiiP6Stream+0x2d5>
 815c968:	89 d3                	mov    %edx,%ebx
 815c96a:	89 c6                	mov    %eax,%esi
 815c96c:	e8 bf 92 5c 00       	call   8725c30 <__cxa_end_catch>
 815c971:	89 f0                	mov    %esi,%eax
 815c973:	89 da                	mov    %ebx,%edx
 815c975:	89 04 24             	mov    %eax,(%esp)
 815c978:	e8 d3 6d 98 00       	call   8ae3750 <_Unwind_Resume>
 815c97d:	89 d8                	mov    %ebx,%eax
 815c97f:	83 c4 50             	add    $0x50,%esp
 815c982:	5b                   	pop    %ebx
 815c983:	5e                   	pop    %esi
 815c984:	5d                   	pop    %ebp
 815c985:	c3                   	ret

```

```c
// DBSelectMobileAuthRewardTw::dispatch @ 0x815c6a8

/* DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*) */

undefined4 __thiscall
DBSelectMobileAuthRewardTw::dispatch
          (DBSelectMobileAuthRewardTw *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  cMyTrace local_3c [16];
  cMyTrace local_2c [19];
  bool local_19;
  MSG *local_18;
  MySQL *local_14;
  
  local_19 = true;
                    /* try { // try from 0815c6ba to 0815c909 has its CatchHandler @ 0815c911 */
  local_18 = Stream::GetOutBuffer<DBSelectMobileAuthRewardTw::MSG>(param_3);
  if (local_18 == (MSG *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "msg is null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  local_14 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
  if (local_14 == (MySQL *)0x0) {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "handle null";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  uVar3 = NumberToString(*(uint *)local_18,0);
  MySQL::set_query(local_14,"seLect m_id from mobile_auth_reward_tw where m_id=%s",uVar3);
  cVar1 = MySQL::exec(local_14,true);
  if (cVar1 != '\x01') {
    puVar2 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar2 = "select_exec";
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar2,&char_const*::typeinfo,0);
  }
  iVar4 = MySQL::get_n_rows(local_14);
  if (iVar4 == 0) {
    uVar3 = NumberToString(*(uint *)local_18,0);
    MySQL::set_query(local_14,"inSert into mobile_auth_reward_tw(m_id,occ_date) VALUES(%s,now())",
                     uVar3);
    cVar1 = MySQL::exec(local_14,true);
    if (cVar1 != '\x01') {
      puVar2 = (undefined4 *)__cxa_allocate_exception(4);
      *puVar2 = "insert_exec";
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar2,&char_const*::typeinfo,0);
    }
    local_19 = false;
    uVar3 = NumberToString(*(uint *)local_18,0);
    cMyTrace::cMyTrace(local_3c,
                       "virtual bool DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*)",0x2be,
                       0);
    cMyTrace::operator()
              (local_3c,"[Taiwan, MobileAuth] insert mobile_auth_reward_tw. m_id:%s",uVar3);
  }
  else {
    local_19 = true;
    uVar3 = NumberToString(*(uint *)local_18,0);
    cMyTrace::cMyTrace(local_2c,
                       "virtual bool DBSelectMobileAuthRewardTw::dispatch(int, int, Stream*)",0x2c3,
                       0);
    cMyTrace::operator()
              (local_2c,"[Taiwan, MobileAuth] select mobile_auth_reward_tw. m_id:%s",uVar3);
  }
  InterSelectMobileAuthReward::makeRequest(param_2,*(uint *)local_18,local_19);
  return 1;
}

```

---

## makeRequest

```asm
// === 0815c586 DBSelectMobileAuthRewardTw::makeRequest  [0x0815c586-0x815c6a7] ===
 815c586:	55                   	push   %ebp
 815c587:	89 e5                	mov    %esp,%ebp
 815c589:	56                   	push   %esi
 815c58a:	53                   	push   %ebx
 815c58b:	83 ec 30             	sub    $0x30,%esp
 815c58e:	8b 45 08             	mov    0x8(%ebp),%eax
 815c591:	0f b6 80 31 ec 08 00 	movzbl 0x8ec31(%eax),%eax
 815c598:	84 c0                	test   %al,%al
 815c59a:	0f 85 00 01 00 00    	jne    815c6a0 <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser+0x11a>
 815c5a0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 815c5a5:	c7 44 24 08 94 02 00 	movl   $0x294,0x8(%esp)
 815c5ac:	00 
 815c5ad:	c7 44 24 04 d4 72 b7 	movl   $0x8b772d4,0x4(%esp)
 815c5b4:	08 
 815c5b5:	89 04 24             	mov    %eax,(%esp)
 815c5b8:	e8 c9 34 13 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 815c5bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 815c5c4:	00 
 815c5c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 815c5c9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c5cc:	89 04 24             	mov    %eax,(%esp)
 815c5cf:	e8 52 c6 f6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 815c5d4:	8b 45 08             	mov    0x8(%ebp),%eax
 815c5d7:	89 04 24             	mov    %eax,(%esp)
 815c5da:	e8 b7 c6 f6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 815c5df:	89 44 24 08          	mov    %eax,0x8(%esp)
 815c5e3:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 815c5ea:	00 
 815c5eb:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c5ee:	89 04 24             	mov    %eax,(%esp)
 815c5f1:	e8 5a 73 00 00       	call   8163950 <_ZN6Taiwan15internal_streamER12CStreamGuardN18TaiwanInternalPack1TEi>
 815c5f6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c5f9:	89 04 24             	mov    %eax,(%esp)
 815c5fc:	e8 4d c6 f6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 815c601:	89 04 24             	mov    %eax,(%esp)
 815c604:	e8 c1 25 00 00       	call   815ebca <_ZN12CStreamGuard11GetInBufferIN26DBSelectMobileAuthRewardTw3MSGEEEPT_v>
 815c609:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815c60c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815c610:	75 38                	jne    815c64a <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser+0xc4>
 815c612:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 815c619:	00 
 815c61a:	c7 44 24 08 9a 02 00 	movl   $0x29a,0x8(%esp)
 815c621:	00 
 815c622:	c7 44 24 04 40 8f b7 	movl   $0x8b78f40,0x4(%esp)
 815c629:	08 
 815c62a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815c62d:	89 04 24             	mov    %eax,(%esp)
 815c630:	e8 e3 30 3f 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 815c635:	c7 44 24 04 c4 79 b7 	movl   $0x8b779c4,0x4(%esp)
 815c63c:	08 
 815c63d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 815c640:	89 04 24             	mov    %eax,(%esp)
 815c643:	e8 40 31 3f 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 815c648:	eb 49                	jmp    815c693 <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser+0x10d>
 815c64a:	8b 45 08             	mov    0x8(%ebp),%eax
 815c64d:	89 04 24             	mov    %eax,(%esp)
 815c650:	e8 19 dd f7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 815c655:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815c658:	89 02                	mov    %eax,(%edx)
 815c65a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 815c65f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 815c662:	89 54 24 08          	mov    %edx,0x8(%esp)
 815c666:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 815c66d:	00 
 815c66e:	89 04 24             	mov    %eax,(%esp)
 815c671:	e8 68 49 41 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 815c676:	eb 1b                	jmp    815c693 <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser+0x10d>
 815c678:	89 d3                	mov    %edx,%ebx
 815c67a:	89 c6                	mov    %eax,%esi
 815c67c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c67f:	89 04 24             	mov    %eax,(%esp)
 815c682:	e8 4b 02 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815c687:	89 f0                	mov    %esi,%eax
 815c689:	89 da                	mov    %ebx,%edx
 815c68b:	89 04 24             	mov    %eax,(%esp)
 815c68e:	e8 bd 70 98 00       	call   8ae3750 <_Unwind_Resume>
 815c693:	8d 45 dc             	lea    -0x24(%ebp),%eax
 815c696:	89 04 24             	mov    %eax,(%esp)
 815c699:	e8 34 02 4c 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 815c69e:	eb 01                	jmp    815c6a1 <_ZN26DBSelectMobileAuthRewardTw11makeRequestEP5CUser+0x11b>
 815c6a0:	90                   	nop
 815c6a1:	83 c4 30             	add    $0x30,%esp
 815c6a4:	5b                   	pop    %ebx
 815c6a5:	5e                   	pop    %esi
 815c6a6:	5d                   	pop    %ebp
 815c6a7:	c3                   	ret

```

```c
// DBSelectMobileAuthRewardTw::makeRequest @ 0x815c586

/* DBSelectMobileAuthRewardTw::makeRequest(CUser*) */

void DBSelectMobileAuthRewardTw::makeRequest(CUser *param_1)

{
  Stream *pSVar1;
  undefined4 uVar2;
  CStreamGuard *this;
  CStreamGuard local_28 [8];
  cMyTrace local_20 [16];
  MSG *local_10;
  
  if (param_1[0x8ec31] == (CUser)0x0) {
    pSVar1 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,
                                 "localtaiwan/Dispatcher/Taiwan_DbThread.cpp",0x294);
    CStreamGuard::CStreamGuard(local_28,pSVar1,true);
    uVar2 = CUser::GetUID(param_1);
                    /* try { // try from 0815c5f1 to 0815c675 has its CatchHandler @ 0815c678 */
    Taiwan::internal_stream(local_28,0xc,uVar2);
    this = (CStreamGuard *)CStreamGuard::operator->(local_28);
    local_10 = CStreamGuard::GetInBuffer<DBSelectMobileAuthRewardTw::MSG>(this);
    if (local_10 == (MSG *)0x0) {
      cMyTrace::cMyTrace(local_20,"static void DBSelectMobileAuthRewardTw::makeRequest(CUser*)",
                         0x29a,0);
      cMyTrace::operator()(local_20,"[Taiwan, MobileAuth] msg is null");
    }
    else {
      uVar2 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_10 = uVar2;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
    }
    CStreamGuard::~CStreamGuard(local_28);
  }
  return;
}

```

