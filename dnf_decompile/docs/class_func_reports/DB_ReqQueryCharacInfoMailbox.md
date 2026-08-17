# DB_ReqQueryCharacInfoMailbox

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _sendResult

```asm
// === 0843c224 DB_ReqQueryCharacInfoMailbox::_sendResult  [0x0843c224-0x843c359] ===
 843c224:	55                   	push   %ebp
 843c225:	89 e5                	mov    %esp,%ebp
 843c227:	56                   	push   %esi
 843c228:	53                   	push   %ebx
 843c229:	83 ec 20             	sub    $0x20,%esp
 843c22c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843c231:	c7 44 24 08 d6 8e 00 	movl   $0x8ed6,0x8(%esp)
 843c238:	00 
 843c239:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843c240:	08 
 843c241:	89 04 24             	mov    %eax,(%esp)
 843c244:	e8 3d 38 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843c249:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843c250:	00 
 843c251:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c255:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c258:	89 04 24             	mov    %eax,(%esp)
 843c25b:	e8 c6 c9 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843c260:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c263:	89 04 24             	mov    %eax,(%esp)
 843c266:	e8 db c9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c26b:	c7 44 24 04 f6 01 00 	movl   $0x1f6,0x4(%esp)
 843c272:	00 
 843c273:	89 04 24             	mov    %eax,(%esp)
 843c276:	e8 db c9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c27b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c27e:	89 04 24             	mov    %eax,(%esp)
 843c281:	e8 c0 c9 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c286:	8b 55 10             	mov    0x10(%ebp),%edx
 843c289:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c28d:	89 04 24             	mov    %eax,(%esp)
 843c290:	e8 c1 c9 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c295:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c298:	89 04 24             	mov    %eax,(%esp)
 843c29b:	e8 ae c9 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843c2a0:	89 04 24             	mov    %eax,(%esp)
 843c2a3:	e8 80 5e 01 00       	call   8452128 <_ZN12CStreamGuard11GetInBufferI21SIG_QUERY_CHARAC_INFOEEPT_v>
 843c2a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843c2ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c2ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 843c2b1:	89 50 20             	mov    %edx,0x20(%eax)
 843c2b4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 843c2b8:	75 50                	jne    843c30a <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii+0xe6>
 843c2ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c2bd:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 843c2c4:	00 
 843c2c5:	8b 55 14             	mov    0x14(%ebp),%edx
 843c2c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c2cc:	89 04 24             	mov    %eax,(%esp)
 843c2cf:	e8 fc 15 c4 ff       	call   807d8d0 <strncpy@plt>
 843c2d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c2d7:	8b 55 18             	mov    0x18(%ebp),%edx
 843c2da:	89 50 24             	mov    %edx,0x24(%eax)
 843c2dd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 843c2e0:	89 c2                	mov    %eax,%edx
 843c2e2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c2e5:	88 50 28             	mov    %dl,0x28(%eax)
 843c2e8:	8b 45 20             	mov    0x20(%ebp),%eax
 843c2eb:	89 c2                	mov    %eax,%edx
 843c2ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c2f0:	66 89 50 2a          	mov    %dx,0x2a(%eax)
 843c2f4:	8b 45 24             	mov    0x24(%ebp),%eax
 843c2f7:	89 c2                	mov    %eax,%edx
 843c2f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c2fc:	88 50 2c             	mov    %dl,0x2c(%eax)
 843c2ff:	8b 45 28             	mov    0x28(%ebp),%eax
 843c302:	89 c2                	mov    %eax,%edx
 843c304:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c307:	88 50 2d             	mov    %dl,0x2d(%eax)
 843c30a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843c30f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843c312:	89 54 24 08          	mov    %edx,0x8(%esp)
 843c316:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843c31d:	00 
 843c31e:	89 04 24             	mov    %eax,(%esp)
 843c321:	e8 b8 4c 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843c326:	bb 01 00 00 00       	mov    $0x1,%ebx
 843c32b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c32e:	89 04 24             	mov    %eax,(%esp)
 843c331:	e8 9c 05 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c336:	89 d8                	mov    %ebx,%eax
 843c338:	83 c4 20             	add    $0x20,%esp
 843c33b:	5b                   	pop    %ebx
 843c33c:	5e                   	pop    %esi
 843c33d:	5d                   	pop    %ebp
 843c33e:	c3                   	ret
 843c33f:	89 d3                	mov    %edx,%ebx
 843c341:	89 c6                	mov    %eax,%esi
 843c343:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c346:	89 04 24             	mov    %eax,(%esp)
 843c349:	e8 84 05 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c34e:	89 f0                	mov    %esi,%eax
 843c350:	89 da                	mov    %ebx,%edx
 843c352:	89 04 24             	mov    %eax,(%esp)
 843c355:	e8 f6 73 6a 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// DB_ReqQueryCharacInfoMailbox::_sendResult @ 0x843c224

/* DB_ReqQueryCharacInfoMailbox::_sendResult(int, int, char const*, int, int, int, int, int) */

undefined4 __thiscall
DB_ReqQueryCharacInfoMailbox::_sendResult
          (DB_ReqQueryCharacInfoMailbox *this,int param_1,int param_2,char *param_3,int param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8ed6);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843c276 to 0843c325 has its CatchHandler @ 0843c33f */
  CStreamGuard::operator<<(pCVar2,0x1f6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  *(int *)(local_10 + 0x20) = param_1;
  if (param_1 == 0) {
    strncpy((char *)local_10,param_3,0x1d);
    *(int *)(local_10 + 0x24) = param_4;
    local_10[0x28] = SUB41(param_5,0);
    *(short *)(local_10 + 0x2a) = (short)param_6;
    local_10[0x2c] = SUB41(param_7,0);
    local_10[0x2d] = SUB41(param_8,0);
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

---

## dispatch

```asm
// === 0843bd46 DB_ReqQueryCharacInfoMailbox::dispatch  [0x0843bd46-0x843c137] ===
 843bd46:	55                   	push   %ebp
 843bd47:	89 e5                	mov    %esp,%ebp
 843bd49:	57                   	push   %edi
 843bd4a:	56                   	push   %esi
 843bd4b:	53                   	push   %ebx
 843bd4c:	81 ec ac 00 00 00    	sub    $0xac,%esp
 843bd52:	8b 45 08             	mov    0x8(%ebp),%eax
 843bd55:	8b 55 14             	mov    0x14(%ebp),%edx
 843bd58:	89 54 24 0c          	mov    %edx,0xc(%esp)
 843bd5c:	8b 55 10             	mov    0x10(%ebp),%edx
 843bd5f:	89 54 24 08          	mov    %edx,0x8(%esp)
 843bd63:	8b 55 0c             	mov    0xc(%ebp),%edx
 843bd66:	89 54 24 04          	mov    %edx,0x4(%esp)
 843bd6a:	89 04 24             	mov    %eax,(%esp)
 843bd6d:	e8 0a 02 fc ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 843bd72:	83 f0 01             	xor    $0x1,%eax
 843bd75:	84 c0                	test   %al,%al
 843bd77:	74 0a                	je     843bd83 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3d>
 843bd79:	b8 00 00 00 00       	mov    $0x0,%eax
 843bd7e:	e9 a9 03 00 00       	jmp    843c12c <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3e6>
 843bd83:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843bd88:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 843bd8f:	00 
 843bd90:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843bd97:	00 
 843bd98:	89 04 24             	mov    %eax,(%esp)
 843bd9b:	e8 9e 94 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 843bda0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 843bda3:	8b 45 14             	mov    0x14(%ebp),%eax
 843bda6:	89 04 24             	mov    %eax,(%esp)
 843bda9:	e8 26 63 01 00       	call   84520d4 <_ZN6Stream12GetOutBufferI21SIG_QUERY_CHARAC_INFOEEPT_v>
 843bdae:	89 45 e0             	mov    %eax,-0x20(%ebp)
 843bdb1:	8d 5d 84             	lea    -0x7c(%ebp),%ebx
 843bdb4:	b8 00 00 00 00       	mov    $0x0,%eax
 843bdb9:	ba 0f 00 00 00       	mov    $0xf,%edx
 843bdbe:	89 df                	mov    %ebx,%edi
 843bdc0:	89 d1                	mov    %edx,%ecx
 843bdc2:	f3 ab                	rep stos %eax,%es:(%edi)
 843bdc4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843bdc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843bdcb:	8d 45 84             	lea    -0x7c(%ebp),%eax
 843bdce:	89 44 24 04          	mov    %eax,0x4(%esp)
 843bdd2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bdd5:	89 04 24             	mov    %eax,(%esp)
 843bdd8:	e8 cd 8a fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 843bddd:	8d 45 84             	lea    -0x7c(%ebp),%eax
 843bde0:	89 44 24 08          	mov    %eax,0x8(%esp)
 843bde4:	c7 44 24 04 cc e9 c4 	movl   $0x8c4e9cc,0x4(%esp)
 843bdeb:	08 
 843bdec:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bdef:	89 04 24             	mov    %eax,(%esp)
 843bdf2:	e8 c9 83 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843bdf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843bdfe:	00 
 843bdff:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843be02:	89 04 24             	mov    %eax,(%esp)
 843be05:	e8 1c 85 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843be0a:	83 f0 01             	xor    $0x1,%eax
 843be0d:	84 c0                	test   %al,%al
 843be0f:	74 4f                	je     843be60 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x11a>
 843be11:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 843be18:	00 
 843be19:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 843be20:	00 
 843be21:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 843be28:	00 
 843be29:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 843be30:	00 
 843be31:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 843be38:	00 
 843be39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843be40:	00 
 843be41:	8b 45 10             	mov    0x10(%ebp),%eax
 843be44:	89 44 24 08          	mov    %eax,0x8(%esp)
 843be48:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843be4f:	00 
 843be50:	8b 45 08             	mov    0x8(%ebp),%eax
 843be53:	89 04 24             	mov    %eax,(%esp)
 843be56:	e8 c9 03 00 00       	call   843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>
 843be5b:	e9 cc 02 00 00       	jmp    843c12c <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3e6>
 843be60:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843be63:	89 04 24             	mov    %eax,(%esp)
 843be66:	e8 01 65 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843be6b:	85 c0                	test   %eax,%eax
 843be6d:	0f 94 c0             	sete   %al
 843be70:	84 c0                	test   %al,%al
 843be72:	74 4f                	je     843bec3 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x17d>
 843be74:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 843be7b:	00 
 843be7c:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 843be83:	00 
 843be84:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 843be8b:	00 
 843be8c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 843be93:	00 
 843be94:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 843be9b:	00 
 843be9c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843bea3:	00 
 843bea4:	8b 45 10             	mov    0x10(%ebp),%eax
 843bea7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843beab:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 843beb2:	00 
 843beb3:	8b 45 08             	mov    0x8(%ebp),%eax
 843beb6:	89 04 24             	mov    %eax,(%esp)
 843beb9:	e8 66 03 00 00       	call   843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>
 843bebe:	e9 69 02 00 00       	jmp    843c12c <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3e6>
 843bec3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bec6:	89 04 24             	mov    %eax,(%esp)
 843bec9:	e8 9e 64 ca ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 843bece:	85 c0                	test   %eax,%eax
 843bed0:	0f 95 c0             	setne  %al
 843bed3:	84 c0                	test   %al,%al
 843bed5:	0f 84 02 02 00 00    	je     843c0dd <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x397>
 843bedb:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 843bee2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bee5:	89 04 24             	mov    %eax,(%esp)
 843bee8:	e8 cf 85 fb ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 843beed:	83 f0 01             	xor    $0x1,%eax
 843bef0:	84 c0                	test   %al,%al
 843bef2:	75 21                	jne    843bf15 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x1cf>
 843bef4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 843bef7:	89 44 24 08          	mov    %eax,0x8(%esp)
 843befb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843bf02:	00 
 843bf03:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843bf06:	89 04 24             	mov    %eax,(%esp)
 843bf09:	e8 1e aa cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843bf0e:	83 f0 01             	xor    $0x1,%eax
 843bf11:	84 c0                	test   %al,%al
 843bf13:	74 07                	je     843bf1c <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x1d6>
 843bf15:	b8 01 00 00 00       	mov    $0x1,%eax
 843bf1a:	eb 05                	jmp    843bf21 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x1db>
 843bf1c:	b8 00 00 00 00       	mov    $0x0,%eax
 843bf21:	84 c0                	test   %al,%al
 843bf23:	74 4f                	je     843bf74 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x22e>
 843bf25:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 843bf2c:	00 
 843bf2d:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 843bf34:	00 
 843bf35:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 843bf3c:	00 
 843bf3d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 843bf44:	00 
 843bf45:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 843bf4c:	00 
 843bf4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843bf54:	00 
 843bf55:	8b 45 10             	mov    0x10(%ebp),%eax
 843bf58:	89 44 24 08          	mov    %eax,0x8(%esp)
 843bf5c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843bf63:	00 
 843bf64:	8b 45 08             	mov    0x8(%ebp),%eax
 843bf67:	89 04 24             	mov    %eax,(%esp)
 843bf6a:	e8 b5 02 00 00       	call   843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>
 843bf6f:	e9 b8 01 00 00       	jmp    843c12c <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3e6>
 843bf74:	8b 45 d8             	mov    -0x28(%ebp),%eax
 843bf77:	85 c0                	test   %eax,%eax
 843bf79:	74 4f                	je     843bfca <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x284>
 843bf7b:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 843bf82:	00 
 843bf83:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 843bf8a:	00 
 843bf8b:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 843bf92:	00 
 843bf93:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 843bf9a:	00 
 843bf9b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 843bfa2:	00 
 843bfa3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843bfaa:	00 
 843bfab:	8b 45 10             	mov    0x10(%ebp),%eax
 843bfae:	89 44 24 08          	mov    %eax,0x8(%esp)
 843bfb2:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 843bfb9:	00 
 843bfba:	8b 45 08             	mov    0x8(%ebp),%eax
 843bfbd:	89 04 24             	mov    %eax,(%esp)
 843bfc0:	e8 5f 02 00 00       	call   843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>
 843bfc5:	e9 62 01 00 00       	jmp    843c12c <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3e6>
 843bfca:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 843bfd1:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 843bfd8:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 843bfdf:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 843bfe6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 843bfed:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 843bff4:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 843bffb:	8d 45 c0             	lea    -0x40(%ebp),%eax
 843bffe:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c002:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 843c009:	00 
 843c00a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843c00d:	89 04 24             	mov    %eax,(%esp)
 843c010:	e8 99 62 ca ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 843c015:	8d 45 c8             	lea    -0x38(%ebp),%eax
 843c018:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c01c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843c023:	00 
 843c024:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843c027:	89 04 24             	mov    %eax,(%esp)
 843c02a:	e8 fd a8 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843c02f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 843c032:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c036:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 843c03d:	00 
 843c03e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843c041:	89 04 24             	mov    %eax,(%esp)
 843c044:	e8 e3 a8 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843c049:	8d 45 d0             	lea    -0x30(%ebp),%eax
 843c04c:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c050:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 843c057:	00 
 843c058:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843c05b:	89 04 24             	mov    %eax,(%esp)
 843c05e:	e8 c9 a8 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843c063:	8d 45 cc             	lea    -0x34(%ebp),%eax
 843c066:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c06a:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 843c071:	00 
 843c072:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843c075:	89 04 24             	mov    %eax,(%esp)
 843c078:	e8 af a8 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843c07d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 843c080:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c084:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 843c08b:	00 
 843c08c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 843c08f:	89 04 24             	mov    %eax,(%esp)
 843c092:	e8 95 a8 cd ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 843c097:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 843c09a:	8b 75 cc             	mov    -0x34(%ebp),%esi
 843c09d:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 843c0a0:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 843c0a3:	8b 55 c8             	mov    -0x38(%ebp),%edx
 843c0a6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 843c0a9:	89 7c 24 20          	mov    %edi,0x20(%esp)
 843c0ad:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 843c0b1:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 843c0b5:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 843c0b9:	89 54 24 10          	mov    %edx,0x10(%esp)
 843c0bd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 843c0c1:	8b 45 10             	mov    0x10(%ebp),%eax
 843c0c4:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c0c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843c0cf:	00 
 843c0d0:	8b 45 08             	mov    0x8(%ebp),%eax
 843c0d3:	89 04 24             	mov    %eax,(%esp)
 843c0d6:	e8 49 01 00 00       	call   843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>
 843c0db:	eb 4a                	jmp    843c127 <_ZN28DB_ReqQueryCharacInfoMailbox8dispatchEiiP6Stream+0x3e1>
 843c0dd:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 843c0e4:	00 
 843c0e5:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 843c0ec:	00 
 843c0ed:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 843c0f4:	00 
 843c0f5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 843c0fc:	00 
 843c0fd:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 843c104:	00 
 843c105:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 843c10c:	00 
 843c10d:	8b 45 10             	mov    0x10(%ebp),%eax
 843c110:	89 44 24 08          	mov    %eax,0x8(%esp)
 843c114:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 843c11b:	00 
 843c11c:	8b 45 08             	mov    0x8(%ebp),%eax
 843c11f:	89 04 24             	mov    %eax,(%esp)
 843c122:	e8 fd 00 00 00       	call   843c224 <_ZN28DB_ReqQueryCharacInfoMailbox11_sendResultEiiPKciiiii>
 843c127:	b8 01 00 00 00       	mov    $0x1,%eax
 843c12c:	81 c4 ac 00 00 00    	add    $0xac,%esp
 843c132:	5b                   	pop    %ebx
 843c133:	5e                   	pop    %esi
 843c134:	5f                   	pop    %edi
 843c135:	5d                   	pop    %ebp
 843c136:	c3                   	ret
 843c137:	90                   	nop

```

```c
// DB_ReqQueryCharacInfoMailbox::dispatch @ 0x843bd46

/* DB_ReqQueryCharacInfoMailbox::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqQueryCharacInfoMailbox::dispatch
          (DB_ReqQueryCharacInfoMailbox *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  byte bVar6;
  Stream *pSVar7;
  char local_80 [60];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  MySQL *local_28;
  SIG_QUERY_CHARAC_INFO *local_24;
  undefined4 local_20;
  
  bVar6 = 0;
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_28 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar7);
  local_24 = Stream::GetOutBuffer<SIG_QUERY_CHARAC_INFO>(param_3);
  pcVar5 = local_80;
  for (iVar4 = 0xf; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_28,local_80,(char *)local_24);
  MySQL::set_query(local_28,
                   "seLect delete_flag,m_id,charac_no,job,lev,grow_type,sex from charac_info where charac_name=\'%s\'"
                   ,local_80);
  cVar2 = MySQL::exec(local_28,true);
  if (cVar2 == '\x01') {
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0);
      return uVar3;
    }
    iVar4 = MySQL::get_n_rows(local_28);
    if (iVar4 == 0) {
      _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0);
    }
    else {
      local_2c = 0;
      cVar2 = MySQL::fetch(local_28);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_28,0,&local_2c), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0);
        return uVar3;
      }
      if (local_2c != 0) {
        uVar3 = _sendResult(this,0x15,param_2,(char *)0x0,0,0,0,0,0);
        return uVar3;
      }
      local_30 = 0;
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_20 = 0;
      local_40 = 0;
      local_44 = 0;
      MySQL::get_int(local_28,1,&local_44);
      MySQL::get_int(local_28,2,&local_3c);
      MySQL::get_int(local_28,3,&local_30);
      MySQL::get_int(local_28,4,&local_34);
      MySQL::get_int(local_28,5,&local_38);
      MySQL::get_int(local_28,6,&local_40);
      _sendResult(this,0,param_2,(char *)local_24,local_3c,local_30,local_34,local_38,local_40);
    }
    return 1;
  }
  uVar3 = _sendResult(this,2,param_2,(char *)0x0,0,0,0,0,0);
  return uVar3;
}

```

---

## makeRequest

```asm
// === 0843c138 DB_ReqQueryCharacInfoMailbox::makeRequest  [0x0843c138-0x843c223] ===
 843c138:	55                   	push   %ebp
 843c139:	89 e5                	mov    %esp,%ebp
 843c13b:	56                   	push   %esi
 843c13c:	53                   	push   %ebx
 843c13d:	83 ec 20             	sub    $0x20,%esp
 843c140:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 843c145:	c7 44 24 08 c5 8e 00 	movl   $0x8ec5,0x8(%esp)
 843c14c:	00 
 843c14d:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 843c154:	08 
 843c155:	89 04 24             	mov    %eax,(%esp)
 843c158:	e8 29 39 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 843c15d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 843c164:	00 
 843c165:	89 44 24 04          	mov    %eax,0x4(%esp)
 843c169:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c16c:	89 04 24             	mov    %eax,(%esp)
 843c16f:	e8 b2 ca c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 843c174:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c177:	89 04 24             	mov    %eax,(%esp)
 843c17a:	e8 c7 ca c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c17f:	c7 44 24 04 f6 01 00 	movl   $0x1f6,0x4(%esp)
 843c186:	00 
 843c187:	89 04 24             	mov    %eax,(%esp)
 843c18a:	e8 c7 ca c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c18f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c192:	89 04 24             	mov    %eax,(%esp)
 843c195:	e8 ac ca c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843c19a:	8b 55 08             	mov    0x8(%ebp),%edx
 843c19d:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c1a1:	89 04 24             	mov    %eax,(%esp)
 843c1a4:	e8 ad ca c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843c1a9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c1ac:	89 04 24             	mov    %eax,(%esp)
 843c1af:	e8 9a ca c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 843c1b4:	89 04 24             	mov    %eax,(%esp)
 843c1b7:	e8 6c 5f 01 00       	call   8452128 <_ZN12CStreamGuard11GetInBufferI21SIG_QUERY_CHARAC_INFOEEPT_v>
 843c1bc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 843c1bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843c1c2:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 843c1c9:	00 
 843c1ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 843c1cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 843c1d1:	89 04 24             	mov    %eax,(%esp)
 843c1d4:	e8 f7 16 c4 ff       	call   807d8d0 <strncpy@plt>
 843c1d9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843c1de:	8d 55 ec             	lea    -0x14(%ebp),%edx
 843c1e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 843c1e5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843c1ec:	00 
 843c1ed:	89 04 24             	mov    %eax,(%esp)
 843c1f0:	e8 e9 4d 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 843c1f5:	eb 1b                	jmp    843c212 <_ZN28DB_ReqQueryCharacInfoMailbox11makeRequestEiPKc+0xda>
 843c1f7:	89 d3                	mov    %edx,%ebx
 843c1f9:	89 c6                	mov    %eax,%esi
 843c1fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c1fe:	89 04 24             	mov    %eax,(%esp)
 843c201:	e8 cc 06 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c206:	89 f0                	mov    %esi,%eax
 843c208:	89 da                	mov    %ebx,%edx
 843c20a:	89 04 24             	mov    %eax,(%esp)
 843c20d:	e8 3e 75 6a 00       	call   8ae3750 <_Unwind_Resume>
 843c212:	8d 45 ec             	lea    -0x14(%ebp),%eax
 843c215:	89 04 24             	mov    %eax,(%esp)
 843c218:	e8 b5 06 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843c21d:	83 c4 20             	add    $0x20,%esp
 843c220:	5b                   	pop    %ebx
 843c221:	5e                   	pop    %esi
 843c222:	5d                   	pop    %ebp
 843c223:	c3                   	ret

```

```c
// DB_ReqQueryCharacInfoMailbox::makeRequest @ 0x843c138

/* DB_ReqQueryCharacInfoMailbox::makeRequest(int, char const*) */

void DB_ReqQueryCharacInfoMailbox::makeRequest(int param_1,char *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_QUERY_CHARAC_INFO *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x8ec5);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0843c18a to 0843c1f4 has its CatchHandler @ 0843c1f7 */
  CStreamGuard::operator<<(pCVar2,0x1f6);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_QUERY_CHARAC_INFO>(pCVar2);
  strncpy((char *)local_10,param_2,0x1d);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

