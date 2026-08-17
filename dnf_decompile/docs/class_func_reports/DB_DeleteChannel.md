# DB_DeleteChannel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DB_DeleteChannel

```asm
// === 08402892 DB_DeleteChannel::DB_DeleteChannel  [0x08402892-0x84028ad] ===
 8402892:	55                   	push   %ebp
 8402893:	89 e5                	mov    %esp,%ebp
 8402895:	83 ec 18             	sub    $0x18,%esp
 8402898:	8b 45 08             	mov    0x8(%ebp),%eax
 840289b:	89 04 24             	mov    %eax,(%esp)
 840289e:	e8 03 af 04 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 84028a3:	8b 45 08             	mov    0x8(%ebp),%eax
 84028a6:	c7 00 60 fc c5 08    	movl   $0x8c5fc60,(%eax)
 84028ac:	c9                   	leave
 84028ad:	c3                   	ret

```

```c
// DB_DeleteChannel::DB_DeleteChannel @ 0x8402892

/* DB_DeleteChannel::DB_DeleteChannel() */

void __thiscall DB_DeleteChannel::DB_DeleteChannel(DB_DeleteChannel *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fc60;
  return;
}

```

---

## DeleteChannel

```asm
// === 084029ae DB_DeleteChannel::DeleteChannel  [0x084029ae-0x8402aeb] ===
 84029ae:	55                   	push   %ebp
 84029af:	89 e5                	mov    %esp,%ebp
 84029b1:	53                   	push   %ebx
 84029b2:	83 ec 44             	sub    $0x44,%esp
 84029b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84029b8:	8b 50 04             	mov    0x4(%eax),%edx
 84029bb:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84029c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84029c4:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84029cb:	00 
 84029cc:	89 04 24             	mov    %eax,(%esp)
 84029cf:	e8 6a 28 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84029d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84029d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84029da:	8b 00                	mov    (%eax),%eax
 84029dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84029e0:	c7 44 24 04 64 31 c4 	movl   $0x8c43164,0x4(%esp)
 84029e7:	08 
 84029e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84029eb:	89 04 24             	mov    %eax,(%esp)
 84029ee:	e8 cd 17 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84029f3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84029fa:	00 
 84029fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84029fe:	89 04 24             	mov    %eax,(%esp)
 8402a01:	e8 20 19 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8402a06:	88 45 f3             	mov    %al,-0xd(%ebp)
 8402a09:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8402a0d:	83 f0 01             	xor    $0x1,%eax
 8402a10:	84 c0                	test   %al,%al
 8402a12:	74 0a                	je     8402a1e <_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL+0x70>
 8402a14:	b8 00 00 00 00       	mov    $0x0,%eax
 8402a19:	e9 c7 00 00 00       	jmp    8402ae5 <_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL+0x137>
 8402a1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402a21:	8b 18                	mov    (%eax),%ebx
 8402a23:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8402a2a:	00 
 8402a2b:	c7 44 24 08 62 12 00 	movl   $0x1262,0x8(%esp)
 8402a32:	00 
 8402a33:	c7 44 24 04 a0 d7 c5 	movl   $0x8c5d7a0,0x4(%esp)
 8402a3a:	08 
 8402a3b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8402a3e:	89 04 24             	mov    %eax,(%esp)
 8402a41:	e8 d2 cc 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8402a46:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8402a4a:	c7 44 24 04 64 31 c4 	movl   $0x8c43164,0x4(%esp)
 8402a51:	08 
 8402a52:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8402a55:	89 04 24             	mov    %eax,(%esp)
 8402a58:	e8 2b cd 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8402a5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402a60:	8b 00                	mov    (%eax),%eax
 8402a62:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402a66:	c7 44 24 04 8c 31 c4 	movl   $0x8c4318c,0x4(%esp)
 8402a6d:	08 
 8402a6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402a71:	89 04 24             	mov    %eax,(%esp)
 8402a74:	e8 47 17 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8402a79:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8402a80:	00 
 8402a81:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402a84:	89 04 24             	mov    %eax,(%esp)
 8402a87:	e8 9a 18 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 8402a8c:	88 45 f3             	mov    %al,-0xd(%ebp)
 8402a8f:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8402a93:	83 f0 01             	xor    $0x1,%eax
 8402a96:	84 c0                	test   %al,%al
 8402a98:	74 07                	je     8402aa1 <_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL+0xf3>
 8402a9a:	b8 00 00 00 00       	mov    $0x0,%eax
 8402a9f:	eb 44                	jmp    8402ae5 <_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL+0x137>
 8402aa1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402aa4:	8b 18                	mov    (%eax),%ebx
 8402aa6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8402aad:	00 
 8402aae:	c7 44 24 08 6a 12 00 	movl   $0x126a,0x8(%esp)
 8402ab5:	00 
 8402ab6:	c7 44 24 04 a0 d7 c5 	movl   $0x8c5d7a0,0x4(%esp)
 8402abd:	08 
 8402abe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8402ac1:	89 04 24             	mov    %eax,(%esp)
 8402ac4:	e8 4f cc 14 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8402ac9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8402acd:	c7 44 24 04 8c 31 c4 	movl   $0x8c4318c,0x4(%esp)
 8402ad4:	08 
 8402ad5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8402ad8:	89 04 24             	mov    %eax,(%esp)
 8402adb:	e8 a8 cc 14 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8402ae0:	b8 01 00 00 00       	mov    $0x1,%eax
 8402ae5:	83 c4 44             	add    $0x44,%esp
 8402ae8:	5b                   	pop    %ebx
 8402ae9:	5d                   	pop    %ebp
 8402aea:	c3                   	ret
 8402aeb:	90                   	nop

```

```c
// DB_DeleteChannel::DeleteChannel @ 0x84029ae

/* DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*) */

undefined4 __thiscall
DB_DeleteChannel::DeleteChannel(DB_DeleteChannel *this,SIG_DELETE_CHANNEL *param_1)

{
  undefined4 uVar1;
  cMyTrace local_34 [16];
  cMyTrace local_24 [19];
  char local_11;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,*(undefined4 *)(param_1 + 4));
  MySQL::set_query(local_10,"deLete from game_channel where gc_no=%d",*(undefined4 *)param_1);
  local_11 = MySQL::exec(local_10,true);
  if (local_11 == '\x01') {
    uVar1 = *(undefined4 *)param_1;
    cMyTrace::cMyTrace(local_34,"bool DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)",0x1262,0
                      );
    cMyTrace::operator()(local_34,"deLete from game_channel where gc_no=%d",uVar1);
    MySQL::set_query(local_10,"deLete from channel_occ_info where gc_no=%d",*(undefined4 *)param_1);
    local_11 = MySQL::exec(local_10,true);
    if (local_11 == '\x01') {
      uVar1 = *(undefined4 *)param_1;
      cMyTrace::cMyTrace(local_24,"bool DB_DeleteChannel::DeleteChannel(SIG_DELETE_CHANNEL*)",0x126a
                         ,0);
      cMyTrace::operator()(local_24,"deLete from channel_occ_info where gc_no=%d",uVar1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## SendResult

```asm
// === 08402aec DB_DeleteChannel::SendResult  [0x08402aec-0x8402bcd] ===
 8402aec:	55                   	push   %ebp
 8402aed:	89 e5                	mov    %esp,%ebp
 8402aef:	56                   	push   %esi
 8402af0:	53                   	push   %ebx
 8402af1:	83 ec 20             	sub    $0x20,%esp
 8402af4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8402af9:	c7 44 24 08 71 12 00 	movl   $0x1271,0x8(%esp)
 8402b00:	00 
 8402b01:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8402b08:	08 
 8402b09:	89 04 24             	mov    %eax,(%esp)
 8402b0c:	e8 75 cf e8 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8402b11:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8402b18:	00 
 8402b19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402b1d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402b20:	89 04 24             	mov    %eax,(%esp)
 8402b23:	e8 fe 60 cc ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8402b28:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402b2b:	89 04 24             	mov    %eax,(%esp)
 8402b2e:	e8 13 61 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8402b33:	8b 55 0c             	mov    0xc(%ebp),%edx
 8402b36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8402b3a:	89 04 24             	mov    %eax,(%esp)
 8402b3d:	e8 14 61 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8402b42:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402b45:	89 04 24             	mov    %eax,(%esp)
 8402b48:	e8 f9 60 cc ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8402b4d:	8b 55 10             	mov    0x10(%ebp),%edx
 8402b50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8402b54:	89 04 24             	mov    %eax,(%esp)
 8402b57:	e8 fa 60 cc ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8402b5c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402b5f:	89 04 24             	mov    %eax,(%esp)
 8402b62:	e8 e7 60 cc ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8402b67:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8402b6e:	00 
 8402b6f:	8b 55 14             	mov    0x14(%ebp),%edx
 8402b72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8402b76:	89 04 24             	mov    %eax,(%esp)
 8402b79:	e8 d4 ba cd ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8402b7e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8402b83:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8402b86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8402b8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8402b91:	00 
 8402b92:	89 04 24             	mov    %eax,(%esp)
 8402b95:	e8 44 e4 16 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8402b9a:	bb 01 00 00 00       	mov    $0x1,%ebx
 8402b9f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402ba2:	89 04 24             	mov    %eax,(%esp)
 8402ba5:	e8 28 9d 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8402baa:	89 d8                	mov    %ebx,%eax
 8402bac:	83 c4 20             	add    $0x20,%esp
 8402baf:	5b                   	pop    %ebx
 8402bb0:	5e                   	pop    %esi
 8402bb1:	5d                   	pop    %ebp
 8402bb2:	c3                   	ret
 8402bb3:	89 d3                	mov    %edx,%ebx
 8402bb5:	89 c6                	mov    %eax,%esi
 8402bb7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8402bba:	89 04 24             	mov    %eax,(%esp)
 8402bbd:	e8 10 9d 21 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8402bc2:	89 f0                	mov    %esi,%eax
 8402bc4:	89 da                	mov    %ebx,%edx
 8402bc6:	89 04 24             	mov    %eax,(%esp)
 8402bc9:	e8 82 0b 6e 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_DeleteChannel::SendResult @ 0x8402aec

/* DB_DeleteChannel::SendResult(int, int, SIG_DELETE_CHANNEL*) */

undefined4 __thiscall
DB_DeleteChannel::SendResult
          (DB_DeleteChannel *this,int param_1,int param_2,SIG_DELETE_CHANNEL *param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x1271);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08402b3d to 08402b99 has its CatchHandler @ 08402bb3 */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_14);
  CStreamGuard::put_binary(pCVar2,param_3,0xc);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## dispatch

```asm
// === 084028fc DB_DeleteChannel::dispatch  [0x084028fc-0x84029ad] ===
 84028fc:	55                   	push   %ebp
 84028fd:	89 e5                	mov    %esp,%ebp
 84028ff:	83 ec 28             	sub    $0x28,%esp
 8402902:	8b 45 08             	mov    0x8(%ebp),%eax
 8402905:	8b 55 14             	mov    0x14(%ebp),%edx
 8402908:	89 54 24 0c          	mov    %edx,0xc(%esp)
 840290c:	8b 55 10             	mov    0x10(%ebp),%edx
 840290f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8402913:	8b 55 0c             	mov    0xc(%ebp),%edx
 8402916:	89 54 24 04          	mov    %edx,0x4(%esp)
 840291a:	89 04 24             	mov    %eax,(%esp)
 840291d:	e8 5a 96 ff ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8402922:	83 f0 01             	xor    $0x1,%eax
 8402925:	84 c0                	test   %al,%al
 8402927:	74 07                	je     8402930 <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0x34>
 8402929:	b8 00 00 00 00       	mov    $0x0,%eax
 840292e:	eb 7c                	jmp    84029ac <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0xb0>
 8402930:	8b 45 14             	mov    0x14(%ebp),%eax
 8402933:	89 04 24             	mov    %eax,(%esp)
 8402936:	e8 b1 db 04 00       	call   84504ec <_ZN6Stream12GetOutBufferI18SIG_DELETE_CHANNELEEPT_v>
 840293b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 840293e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8402942:	75 07                	jne    840294b <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0x4f>
 8402944:	b8 00 00 00 00       	mov    $0x0,%eax
 8402949:	eb 61                	jmp    84029ac <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0xb0>
 840294b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 840294e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402952:	8b 45 08             	mov    0x8(%ebp),%eax
 8402955:	89 04 24             	mov    %eax,(%esp)
 8402958:	e8 51 00 00 00       	call   84029ae <_ZN16DB_DeleteChannel13DeleteChannelEP18SIG_DELETE_CHANNEL>
 840295d:	88 45 f3             	mov    %al,-0xd(%ebp)
 8402960:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8402964:	83 f0 01             	xor    $0x1,%eax
 8402967:	84 c0                	test   %al,%al
 8402969:	74 07                	je     8402972 <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0x76>
 840296b:	b8 00 00 00 00       	mov    $0x0,%eax
 8402970:	eb 3a                	jmp    84029ac <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0xb0>
 8402972:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8402975:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8402979:	8b 45 10             	mov    0x10(%ebp),%eax
 840297c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8402980:	8b 45 0c             	mov    0xc(%ebp),%eax
 8402983:	89 44 24 04          	mov    %eax,0x4(%esp)
 8402987:	8b 45 08             	mov    0x8(%ebp),%eax
 840298a:	89 04 24             	mov    %eax,(%esp)
 840298d:	e8 5a 01 00 00       	call   8402aec <_ZN16DB_DeleteChannel10SendResultEiiP18SIG_DELETE_CHANNEL>
 8402992:	88 45 f3             	mov    %al,-0xd(%ebp)
 8402995:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8402999:	83 f0 01             	xor    $0x1,%eax
 840299c:	84 c0                	test   %al,%al
 840299e:	74 07                	je     84029a7 <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0xab>
 84029a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84029a5:	eb 05                	jmp    84029ac <_ZN16DB_DeleteChannel8dispatchEiiP6Stream+0xb0>
 84029a7:	b8 01 00 00 00       	mov    $0x1,%eax
 84029ac:	c9                   	leave
 84029ad:	c3                   	ret

```

```c
// DB_DeleteChannel::dispatch @ 0x84028fc

/* DB_DeleteChannel::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_DeleteChannel::dispatch(DB_DeleteChannel *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  SIG_DELETE_CHANNEL *pSVar3;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    pSVar3 = Stream::GetOutBuffer<SIG_DELETE_CHANNEL>(param_3);
    if (pSVar3 == (SIG_DELETE_CHANNEL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = DeleteChannel(this,pSVar3);
      if (cVar1 == '\x01') {
        cVar1 = SendResult(this,param_1,param_2,pSVar3);
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
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## ~DB_DeleteChannel

```asm
// === 084028ae DB_DeleteChannel::~DB_DeleteChannel  [0x084028ae-0x84028dd] ===
 84028ae:	55                   	push   %ebp
 84028af:	89 e5                	mov    %esp,%ebp
 84028b1:	83 ec 18             	sub    $0x18,%esp
 84028b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84028b7:	c7 00 60 fc c5 08    	movl   $0x8c5fc60,(%eax)
 84028bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84028c0:	89 04 24             	mov    %eax,(%esp)
 84028c3:	e8 b0 fa cd ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 84028c8:	b8 00 00 00 00       	mov    $0x0,%eax
 84028cd:	84 c0                	test   %al,%al
 84028cf:	74 0b                	je     84028dc <_ZN16DB_DeleteChannelD1Ev+0x2e>
 84028d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84028d4:	89 04 24             	mov    %eax,(%esp)
 84028d7:	e8 14 1c 32 00       	call   87244f0 <_ZdlPv>
 84028dc:	c9                   	leave
 84028dd:	c3                   	ret

```

```c
// DB_DeleteChannel::~DB_DeleteChannel @ 0x84028ae

/* WARNING: Removing unreachable block (ram,0x084028d1) */
/* DB_DeleteChannel::~DB_DeleteChannel() */

void __thiscall DB_DeleteChannel::~DB_DeleteChannel(DB_DeleteChannel *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fc60;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_DeleteChannel_084028de

```asm
// === 084028de DB_DeleteChannel::~DB_DeleteChannel  [0x084028de-0x84028fb] ===
 84028de:	55                   	push   %ebp
 84028df:	89 e5                	mov    %esp,%ebp
 84028e1:	83 ec 18             	sub    $0x18,%esp
 84028e4:	8b 45 08             	mov    0x8(%ebp),%eax
 84028e7:	89 04 24             	mov    %eax,(%esp)
 84028ea:	e8 bf ff ff ff       	call   84028ae <_ZN16DB_DeleteChannelD1Ev>
 84028ef:	8b 45 08             	mov    0x8(%ebp),%eax
 84028f2:	89 04 24             	mov    %eax,(%esp)
 84028f5:	e8 f6 1b 32 00       	call   87244f0 <_ZdlPv>
 84028fa:	c9                   	leave
 84028fb:	c3                   	ret

```

```c
// DB_DeleteChannel::~DB_DeleteChannel @ 0x84028de

/* DB_DeleteChannel::~DB_DeleteChannel() */

void __thiscall DB_DeleteChannel::~DB_DeleteChannel(DB_DeleteChannel *this)

{
  ~DB_DeleteChannel(this);
  operator_delete(this);
  return;
}

```

