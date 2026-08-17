# advancealtar__DB_Update

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## dispatch

```asm
// === 0813ec24 advancealtar::DB_Update::dispatch  [0x0813ec24-0x813ec5d] ===
 813ec24:	55                   	push   %ebp
 813ec25:	89 e5                	mov    %esp,%ebp
 813ec27:	83 ec 28             	sub    $0x28,%esp
 813ec2a:	8b 45 14             	mov    0x14(%ebp),%eax
 813ec2d:	89 04 24             	mov    %eax,(%esp)
 813ec30:	e8 57 3b 00 00       	call   814278c <_ZN6Stream12GetOutBufferIN12advancealtar25_CharacAdvanceAltarDbDataEEEPT_v>
 813ec35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813ec38:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 813ec3c:	75 07                	jne    813ec45 <_ZN12advancealtar9DB_Update8dispatchEiiP6Stream+0x21>
 813ec3e:	b8 00 00 00 00       	mov    $0x0,%eax
 813ec43:	eb 17                	jmp    813ec5c <_ZN12advancealtar9DB_Update8dispatchEiiP6Stream+0x38>
 813ec45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813ec48:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ec4c:	8b 45 08             	mov    0x8(%ebp),%eax
 813ec4f:	89 04 24             	mov    %eax,(%esp)
 813ec52:	e8 07 00 00 00       	call   813ec5e <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE>
 813ec57:	b8 01 00 00 00       	mov    $0x1,%eax
 813ec5c:	c9                   	leave
 813ec5d:	c3                   	ret

```

```c
// advancealtar::DB_Update::dispatch @ 0x813ec24

/* advancealtar::DB_Update::dispatch(int, int, Stream*) */

bool __thiscall
advancealtar::DB_Update::dispatch(DB_Update *this,int param_1,int param_2,Stream *param_3)

{
  _CharacAdvanceAltarDbData *p_Var1;
  
  p_Var1 = Stream::GetOutBuffer<advancealtar::_CharacAdvanceAltarDbData>(param_3);
  if (p_Var1 != (_CharacAdvanceAltarDbData *)0x0) {
    update(this,p_Var1);
  }
  return p_Var1 != (_CharacAdvanceAltarDbData *)0x0;
}

```

---

## makeBuyItemString

```asm
// === 0813f53c advancealtar::DB_Update::makeBuyItemString  [0x0813f53c-0x813f669] ===
 813f53c:	55                   	push   %ebp
 813f53d:	89 e5                	mov    %esp,%ebp
 813f53f:	56                   	push   %esi
 813f540:	53                   	push   %ebx
 813f541:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 813f547:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813f54b:	0f 84 0d 01 00 00    	je     813f65e <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x122>
 813f551:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f554:	89 04 24             	mov    %eax,(%esp)
 813f557:	e8 74 98 5c 00       	call   8708dd0 <_ZNSs5clearEv>
 813f55c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813f563:	e9 e3 00 00 00       	jmp    813f64b <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x10f>
 813f568:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f56b:	89 d0                	mov    %edx,%eax
 813f56d:	01 c0                	add    %eax,%eax
 813f56f:	01 d0                	add    %edx,%eax
 813f571:	c1 e0 02             	shl    $0x2,%eax
 813f574:	03 45 10             	add    0x10(%ebp),%eax
 813f577:	8b 40 04             	mov    0x4(%eax),%eax
 813f57a:	85 c0                	test   %eax,%eax
 813f57c:	75 1c                	jne    813f59a <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x5e>
 813f57e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f581:	89 d0                	mov    %edx,%eax
 813f583:	01 c0                	add    %eax,%eax
 813f585:	01 d0                	add    %edx,%eax
 813f587:	c1 e0 02             	shl    $0x2,%eax
 813f58a:	03 45 10             	add    0x10(%ebp),%eax
 813f58d:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 813f591:	66 85 c0             	test   %ax,%ax
 813f594:	0f 84 ac 00 00 00    	je     813f646 <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x10a>
 813f59a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f59d:	89 d0                	mov    %edx,%eax
 813f59f:	01 c0                	add    %eax,%eax
 813f5a1:	01 d0                	add    %edx,%eax
 813f5a3:	c1 e0 02             	shl    $0x2,%eax
 813f5a6:	03 45 10             	add    0x10(%ebp),%eax
 813f5a9:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 813f5ad:	0f bf f0             	movswl %ax,%esi
 813f5b0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f5b3:	89 d0                	mov    %edx,%eax
 813f5b5:	01 c0                	add    %eax,%eax
 813f5b7:	01 d0                	add    %edx,%eax
 813f5b9:	c1 e0 02             	shl    $0x2,%eax
 813f5bc:	03 45 10             	add    0x10(%ebp),%eax
 813f5bf:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 813f5c3:	0f bf d8             	movswl %ax,%ebx
 813f5c6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f5c9:	89 d0                	mov    %edx,%eax
 813f5cb:	01 c0                	add    %eax,%eax
 813f5cd:	01 d0                	add    %edx,%eax
 813f5cf:	c1 e0 02             	shl    $0x2,%eax
 813f5d2:	03 45 10             	add    0x10(%ebp),%eax
 813f5d5:	8b 48 04             	mov    0x4(%eax),%ecx
 813f5d8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f5db:	89 d0                	mov    %edx,%eax
 813f5dd:	01 c0                	add    %eax,%eax
 813f5df:	01 d0                	add    %edx,%eax
 813f5e1:	c1 e0 02             	shl    $0x2,%eax
 813f5e4:	03 45 10             	add    0x10(%ebp),%eax
 813f5e7:	8b 00                	mov    (%eax),%eax
 813f5e9:	c7 44 24 24 2f d8 b6 	movl   $0x8b6d82f,0x24(%esp)
 813f5f0:	08 
 813f5f1:	89 74 24 20          	mov    %esi,0x20(%esp)
 813f5f5:	c7 44 24 1c 31 d8 b6 	movl   $0x8b6d831,0x1c(%esp)
 813f5fc:	08 
 813f5fd:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 813f601:	c7 44 24 14 31 d8 b6 	movl   $0x8b6d831,0x14(%esp)
 813f608:	08 
 813f609:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 813f60d:	c7 44 24 0c 31 d8 b6 	movl   $0x8b6d831,0xc(%esp)
 813f614:	08 
 813f615:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f619:	c7 44 24 04 56 db b6 	movl   $0x8b6db56,0x4(%esp)
 813f620:	08 
 813f621:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f627:	89 04 24             	mov    %eax,(%esp)
 813f62a:	e8 11 ee f3 ff       	call   807e440 <sprintf@plt>
 813f62f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f635:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f639:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f63c:	89 04 24             	mov    %eax,(%esp)
 813f63f:	e8 ec 89 5c 00       	call   8708030 <_ZNSspLEPKc>
 813f644:	eb 01                	jmp    813f647 <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x10b>
 813f646:	90                   	nop
 813f647:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813f64b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f64e:	3b 45 14             	cmp    0x14(%ebp),%eax
 813f651:	0f 9c c0             	setl   %al
 813f654:	84 c0                	test   %al,%al
 813f656:	0f 85 0c ff ff ff    	jne    813f568 <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x2c>
 813f65c:	eb 01                	jmp    813f65f <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi+0x123>
 813f65e:	90                   	nop
 813f65f:	81 c4 c0 00 00 00    	add    $0xc0,%esp
 813f665:	5b                   	pop    %ebx
 813f666:	5e                   	pop    %esi
 813f667:	5d                   	pop    %ebp
 813f668:	c3                   	ret
 813f669:	90                   	nop

```

```c
// advancealtar::DB_Update::makeBuyItemString @ 0x813f53c

/* advancealtar::DB_Update::makeBuyItemString(std::string&, advancealtar::_BuyItem const*, int) */

void __thiscall
advancealtar::DB_Update::makeBuyItemString
          (DB_Update *this,string *param_1,_BuyItem *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_BuyItem *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if ((*(int *)(param_2 + local_10 * 0xc + 4) != 0) ||
         (*(short *)(param_2 + local_10 * 0xc + 8) != 0)) {
        sprintf(local_90,"%d%s%d%s%d%s%d%s",*(undefined4 *)(param_2 + local_10 * 0xc),&DAT_08b6d831,
                *(undefined4 *)(param_2 + local_10 * 0xc + 4),&DAT_08b6d831,
                (int)*(short *)(param_2 + local_10 * 0xc + 8),&DAT_08b6d831,
                (int)*(short *)(param_2 + local_10 * 0xc + 10),&DAT_08b6d82f);
        std::string::operator+=((string *)param_1,local_90);
      }
    }
  }
  return;
}

```

---

## makeRequest

```asm
// === 0813eb38 advancealtar::DB_Update::makeRequest  [0x0813eb38-0x813ec23] ===
 813eb38:	55                   	push   %ebp
 813eb39:	89 e5                	mov    %esp,%ebp
 813eb3b:	56                   	push   %esi
 813eb3c:	53                   	push   %ebx
 813eb3d:	83 ec 20             	sub    $0x20,%esp
 813eb40:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 813eb45:	c7 44 24 08 d9 01 00 	movl   $0x1d9,0x8(%esp)
 813eb4c:	00 
 813eb4d:	c7 44 24 04 00 d8 b6 	movl   $0x8b6d800,0x4(%esp)
 813eb54:	08 
 813eb55:	89 04 24             	mov    %eax,(%esp)
 813eb58:	e8 29 0f 15 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 813eb5d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 813eb64:	00 
 813eb65:	89 44 24 04          	mov    %eax,0x4(%esp)
 813eb69:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813eb6c:	89 04 24             	mov    %eax,(%esp)
 813eb6f:	e8 b2 a0 f8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 813eb74:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813eb77:	89 04 24             	mov    %eax,(%esp)
 813eb7a:	e8 c7 a0 f8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 813eb7f:	c7 44 24 04 1a 00 00 	movl   $0x1a,0x4(%esp)
 813eb86:	00 
 813eb87:	89 04 24             	mov    %eax,(%esp)
 813eb8a:	e8 c7 a0 f8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 813eb8f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813eb92:	89 04 24             	mov    %eax,(%esp)
 813eb95:	e8 ac a0 f8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 813eb9a:	8b 55 08             	mov    0x8(%ebp),%edx
 813eb9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 813eba1:	89 04 24             	mov    %eax,(%esp)
 813eba4:	e8 ad a0 f8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 813eba9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813ebac:	89 04 24             	mov    %eax,(%esp)
 813ebaf:	e8 9a a0 f8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 813ebb4:	89 04 24             	mov    %eax,(%esp)
 813ebb7:	e8 ea 7b ff ff       	call   81367a6 <_ZN12CStreamGuard11GetInBufferIN12advancealtar25_CharacAdvanceAltarDbDataEEEPT_v>
 813ebbc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813ebbf:	c7 44 24 08 1c 05 00 	movl   $0x51c,0x8(%esp)
 813ebc6:	00 
 813ebc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ebca:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ebce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813ebd1:	89 04 24             	mov    %eax,(%esp)
 813ebd4:	e8 c7 ec f3 ff       	call   807d8a0 <memcpy@plt>
 813ebd9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 813ebde:	8d 55 ec             	lea    -0x14(%ebp),%edx
 813ebe1:	89 54 24 08          	mov    %edx,0x8(%esp)
 813ebe5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 813ebec:	00 
 813ebed:	89 04 24             	mov    %eax,(%esp)
 813ebf0:	e8 e9 23 43 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 813ebf5:	eb 1b                	jmp    813ec12 <_ZN12advancealtar9DB_Update11makeRequestEiRKNS_25_CharacAdvanceAltarDbDataE+0xda>
 813ebf7:	89 d3                	mov    %edx,%ebx
 813ebf9:	89 c6                	mov    %eax,%esi
 813ebfb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813ebfe:	89 04 24             	mov    %eax,(%esp)
 813ec01:	e8 cc dc 4d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 813ec06:	89 f0                	mov    %esi,%eax
 813ec08:	89 da                	mov    %ebx,%edx
 813ec0a:	89 04 24             	mov    %eax,(%esp)
 813ec0d:	e8 3e 4b 9a 00       	call   8ae3750 <_Unwind_Resume>
 813ec12:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813ec15:	89 04 24             	mov    %eax,(%esp)
 813ec18:	e8 b5 dc 4d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 813ec1d:	83 c4 20             	add    $0x20,%esp
 813ec20:	5b                   	pop    %ebx
 813ec21:	5e                   	pop    %esi
 813ec22:	5d                   	pop    %ebp
 813ec23:	c3                   	ret

```

```c
// advancealtar::DB_Update::makeRequest @ 0x813eb38

/* advancealtar::DB_Update::makeRequest(int, advancealtar::_CharacAdvanceAltarDbData const&) */

void advancealtar::DB_Update::makeRequest(int param_1,_CharacAdvanceAltarDbData *param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  _CharacAdvanceAltarDbData *local_10;
  
  pSVar1 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,
                               "localglobal/global_AdvanceAltar_Dispatcher.cpp",0x1d9);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0813eb8a to 0813ebf4 has its CatchHandler @ 0813ebf7 */
  CStreamGuard::operator<<(pCVar2,0x1a);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<advancealtar::_CharacAdvanceAltarDbData>(pCVar2);
  memcpy(local_10,param_2,0x51c);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## makeRewardString

```asm
// === 0813f66a advancealtar::DB_Update::makeRewardString  [0x0813f66a-0x813f729] ===
 813f66a:	55                   	push   %ebp
 813f66b:	89 e5                	mov    %esp,%ebp
 813f66d:	81 ec b8 00 00 00    	sub    $0xb8,%esp
 813f673:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813f677:	0f 84 aa 00 00 00    	je     813f727 <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi+0xbd>
 813f67d:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f680:	89 04 24             	mov    %eax,(%esp)
 813f683:	e8 48 97 5c 00       	call   8708dd0 <_ZNSs5clearEv>
 813f688:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813f68f:	e9 80 00 00 00       	jmp    813f714 <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi+0xaa>
 813f694:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f697:	89 d0                	mov    %edx,%eax
 813f699:	c1 e0 02             	shl    $0x2,%eax
 813f69c:	01 d0                	add    %edx,%eax
 813f69e:	03 45 10             	add    0x10(%ebp),%eax
 813f6a1:	8b 00                	mov    (%eax),%eax
 813f6a3:	85 c0                	test   %eax,%eax
 813f6a5:	7e 68                	jle    813f70f <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi+0xa5>
 813f6a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f6aa:	89 d0                	mov    %edx,%eax
 813f6ac:	c1 e0 02             	shl    $0x2,%eax
 813f6af:	01 d0                	add    %edx,%eax
 813f6b1:	03 45 10             	add    0x10(%ebp),%eax
 813f6b4:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 813f6b8:	0f b6 c8             	movzbl %al,%ecx
 813f6bb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f6be:	89 d0                	mov    %edx,%eax
 813f6c0:	c1 e0 02             	shl    $0x2,%eax
 813f6c3:	01 d0                	add    %edx,%eax
 813f6c5:	03 45 10             	add    0x10(%ebp),%eax
 813f6c8:	8b 00                	mov    (%eax),%eax
 813f6ca:	c7 44 24 14 2f d8 b6 	movl   $0x8b6d82f,0x14(%esp)
 813f6d1:	08 
 813f6d2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 813f6d6:	c7 44 24 0c 31 d8 b6 	movl   $0x8b6d831,0xc(%esp)
 813f6dd:	08 
 813f6de:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f6e2:	c7 44 24 04 4d db b6 	movl   $0x8b6db4d,0x4(%esp)
 813f6e9:	08 
 813f6ea:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f6f0:	89 04 24             	mov    %eax,(%esp)
 813f6f3:	e8 48 ed f3 ff       	call   807e440 <sprintf@plt>
 813f6f8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f6fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f702:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f705:	89 04 24             	mov    %eax,(%esp)
 813f708:	e8 23 89 5c 00       	call   8708030 <_ZNSspLEPKc>
 813f70d:	eb 01                	jmp    813f710 <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi+0xa6>
 813f70f:	90                   	nop
 813f710:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813f714:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f717:	3b 45 14             	cmp    0x14(%ebp),%eax
 813f71a:	0f 9c c0             	setl   %al
 813f71d:	84 c0                	test   %al,%al
 813f71f:	0f 85 6f ff ff ff    	jne    813f694 <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi+0x2a>
 813f725:	eb 01                	jmp    813f728 <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi+0xbe>
 813f727:	90                   	nop
 813f728:	c9                   	leave
 813f729:	c3                   	ret

```

```c
// advancealtar::DB_Update::makeRewardString @ 0x813f66a

/* advancealtar::DB_Update::makeRewardString(std::string&, advancealtar::_Reward const*, int) */

void __thiscall
advancealtar::DB_Update::makeRewardString
          (DB_Update *this,string *param_1,_Reward *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_Reward *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if (0 < *(int *)(param_2 + local_10 * 5)) {
        sprintf(local_90,"%d%s%d%s",*(undefined4 *)(param_2 + local_10 * 5),&DAT_08b6d831,
                (uint)(byte)param_2[local_10 * 5 + 4],&DAT_08b6d82f);
        std::string::operator+=((string *)param_1,local_90);
      }
    }
  }
  return;
}

```

---

## makeSlotString

```asm
// === 0813f442 advancealtar::DB_Update::makeSlotString  [0x0813f442-0x813f53b] ===
 813f442:	55                   	push   %ebp
 813f443:	89 e5                	mov    %esp,%ebp
 813f445:	56                   	push   %esi
 813f446:	53                   	push   %ebx
 813f447:	81 ec c0 00 00 00    	sub    $0xc0,%esp
 813f44d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813f451:	0f 84 da 00 00 00    	je     813f531 <_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi+0xef>
 813f457:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f45a:	89 04 24             	mov    %eax,(%esp)
 813f45d:	e8 6e 99 5c 00       	call   8708dd0 <_ZNSs5clearEv>
 813f462:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813f469:	e9 b0 00 00 00       	jmp    813f51e <_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi+0xdc>
 813f46e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f471:	89 d0                	mov    %edx,%eax
 813f473:	c1 e0 02             	shl    $0x2,%eax
 813f476:	01 d0                	add    %edx,%eax
 813f478:	01 c0                	add    %eax,%eax
 813f47a:	03 45 10             	add    0x10(%ebp),%eax
 813f47d:	8b 70 06             	mov    0x6(%eax),%esi
 813f480:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f483:	89 d0                	mov    %edx,%eax
 813f485:	c1 e0 02             	shl    $0x2,%eax
 813f488:	01 d0                	add    %edx,%eax
 813f48a:	01 c0                	add    %eax,%eax
 813f48c:	03 45 10             	add    0x10(%ebp),%eax
 813f48f:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 813f493:	0f b6 d8             	movzbl %al,%ebx
 813f496:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f499:	89 d0                	mov    %edx,%eax
 813f49b:	c1 e0 02             	shl    $0x2,%eax
 813f49e:	01 d0                	add    %edx,%eax
 813f4a0:	01 c0                	add    %eax,%eax
 813f4a2:	03 45 10             	add    0x10(%ebp),%eax
 813f4a5:	8b 40 01             	mov    0x1(%eax),%eax
 813f4a8:	89 c1                	mov    %eax,%ecx
 813f4aa:	8b 55 f4             	mov    -0xc(%ebp),%edx
 813f4ad:	89 d0                	mov    %edx,%eax
 813f4af:	c1 e0 02             	shl    $0x2,%eax
 813f4b2:	01 d0                	add    %edx,%eax
 813f4b4:	01 c0                	add    %eax,%eax
 813f4b6:	03 45 10             	add    0x10(%ebp),%eax
 813f4b9:	0f b6 00             	movzbl (%eax),%eax
 813f4bc:	0f b6 c0             	movzbl %al,%eax
 813f4bf:	c7 44 24 24 2f d8 b6 	movl   $0x8b6d82f,0x24(%esp)
 813f4c6:	08 
 813f4c7:	89 74 24 20          	mov    %esi,0x20(%esp)
 813f4cb:	c7 44 24 1c 31 d8 b6 	movl   $0x8b6d831,0x1c(%esp)
 813f4d2:	08 
 813f4d3:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 813f4d7:	c7 44 24 14 31 d8 b6 	movl   $0x8b6d831,0x14(%esp)
 813f4de:	08 
 813f4df:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 813f4e3:	c7 44 24 0c 31 d8 b6 	movl   $0x8b6d831,0xc(%esp)
 813f4ea:	08 
 813f4eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f4ef:	c7 44 24 04 56 db b6 	movl   $0x8b6db56,0x4(%esp)
 813f4f6:	08 
 813f4f7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f4fd:	89 04 24             	mov    %eax,(%esp)
 813f500:	e8 3b ef f3 ff       	call   807e440 <sprintf@plt>
 813f505:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f50b:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f50f:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f512:	89 04 24             	mov    %eax,(%esp)
 813f515:	e8 16 8b 5c 00       	call   8708030 <_ZNSspLEPKc>
 813f51a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813f51e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f521:	3b 45 14             	cmp    0x14(%ebp),%eax
 813f524:	0f 9c c0             	setl   %al
 813f527:	84 c0                	test   %al,%al
 813f529:	0f 85 3f ff ff ff    	jne    813f46e <_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi+0x2c>
 813f52f:	eb 01                	jmp    813f532 <_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi+0xf0>
 813f531:	90                   	nop
 813f532:	81 c4 c0 00 00 00    	add    $0xc0,%esp
 813f538:	5b                   	pop    %ebx
 813f539:	5e                   	pop    %esi
 813f53a:	5d                   	pop    %ebp
 813f53b:	c3                   	ret

```

```c
// advancealtar::DB_Update::makeSlotString @ 0x813f442

/* advancealtar::DB_Update::makeSlotString(std::string&, advancealtar::_Slot const*, int) */

void __thiscall
advancealtar::DB_Update::makeSlotString(DB_Update *this,string *param_1,_Slot *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_Slot *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      sprintf(local_90,"%d%s%d%s%d%s%d%s",(uint)(byte)param_2[local_10 * 10],&DAT_08b6d831,
              *(undefined4 *)(param_2 + local_10 * 10 + 1),&DAT_08b6d831,
              (uint)(byte)param_2[local_10 * 10 + 5],&DAT_08b6d831,
              *(undefined4 *)(param_2 + local_10 * 10 + 6),&DAT_08b6d82f);
      std::string::operator+=((string *)param_1,local_90);
    }
  }
  return;
}

```

---

## makeStageString

```asm
// === 0813f380 advancealtar::DB_Update::makeStageString  [0x0813f380-0x813f441] ===
 813f380:	55                   	push   %ebp
 813f381:	89 e5                	mov    %esp,%ebp
 813f383:	81 ec b8 00 00 00    	sub    $0xb8,%esp
 813f389:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 813f38d:	0f 84 ac 00 00 00    	je     813f43f <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0xbf>
 813f393:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f396:	89 04 24             	mov    %eax,(%esp)
 813f399:	e8 32 9a 5c 00       	call   8708dd0 <_ZNSs5clearEv>
 813f39e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 813f3a5:	e9 82 00 00 00       	jmp    813f42c <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0xac>
 813f3aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f3ad:	c1 e0 03             	shl    $0x3,%eax
 813f3b0:	03 45 10             	add    0x10(%ebp),%eax
 813f3b3:	8b 00                	mov    (%eax),%eax
 813f3b5:	85 c0                	test   %eax,%eax
 813f3b7:	75 10                	jne    813f3c9 <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0x49>
 813f3b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f3bc:	c1 e0 03             	shl    $0x3,%eax
 813f3bf:	03 45 10             	add    0x10(%ebp),%eax
 813f3c2:	8b 40 04             	mov    0x4(%eax),%eax
 813f3c5:	85 c0                	test   %eax,%eax
 813f3c7:	74 5e                	je     813f427 <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0xa7>
 813f3c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f3cc:	c1 e0 03             	shl    $0x3,%eax
 813f3cf:	03 45 10             	add    0x10(%ebp),%eax
 813f3d2:	8b 40 04             	mov    0x4(%eax),%eax
 813f3d5:	89 c2                	mov    %eax,%edx
 813f3d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f3da:	c1 e0 03             	shl    $0x3,%eax
 813f3dd:	03 45 10             	add    0x10(%ebp),%eax
 813f3e0:	8b 00                	mov    (%eax),%eax
 813f3e2:	c7 44 24 14 2f d8 b6 	movl   $0x8b6d82f,0x14(%esp)
 813f3e9:	08 
 813f3ea:	89 54 24 10          	mov    %edx,0x10(%esp)
 813f3ee:	c7 44 24 0c 31 d8 b6 	movl   $0x8b6d831,0xc(%esp)
 813f3f5:	08 
 813f3f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f3fa:	c7 44 24 04 4d db b6 	movl   $0x8b6db4d,0x4(%esp)
 813f401:	08 
 813f402:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f408:	89 04 24             	mov    %eax,(%esp)
 813f40b:	e8 30 f0 f3 ff       	call   807e440 <sprintf@plt>
 813f410:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 813f416:	89 44 24 04          	mov    %eax,0x4(%esp)
 813f41a:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f41d:	89 04 24             	mov    %eax,(%esp)
 813f420:	e8 0b 8c 5c 00       	call   8708030 <_ZNSspLEPKc>
 813f425:	eb 01                	jmp    813f428 <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0xa8>
 813f427:	90                   	nop
 813f428:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 813f42c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813f42f:	3b 45 14             	cmp    0x14(%ebp),%eax
 813f432:	0f 9c c0             	setl   %al
 813f435:	84 c0                	test   %al,%al
 813f437:	0f 85 6d ff ff ff    	jne    813f3aa <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0x2a>
 813f43d:	eb 01                	jmp    813f440 <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi+0xc0>
 813f43f:	90                   	nop
 813f440:	c9                   	leave
 813f441:	c3                   	ret

```

```c
// advancealtar::DB_Update::makeStageString @ 0x813f380

/* advancealtar::DB_Update::makeStageString(std::string&, advancealtar::_Stage const*, int) */

void __thiscall
advancealtar::DB_Update::makeStageString
          (DB_Update *this,string *param_1,_Stage *param_2,int param_3)

{
  char local_90 [128];
  int local_10;
  
  if (param_2 != (_Stage *)0x0) {
    std::string::clear((string *)param_1);
    for (local_10 = 0; local_10 < param_3; local_10 = local_10 + 1) {
      if ((*(int *)(param_2 + local_10 * 8) != 0) || (*(int *)(param_2 + local_10 * 8 + 4) != 0)) {
        sprintf(local_90,"%d%s%d%s",*(undefined4 *)(param_2 + local_10 * 8),&DAT_08b6d831,
                *(undefined4 *)(param_2 + local_10 * 8 + 4),&DAT_08b6d82f);
        std::string::operator+=((string *)param_1,local_90);
      }
    }
  }
  return;
}

```

---

## update

```asm
// === 0813ec5e advancealtar::DB_Update::update  [0x0813ec5e-0x813f37f] ===
 813ec5e:	55                   	push   %ebp
 813ec5f:	89 e5                	mov    %esp,%ebp
 813ec61:	57                   	push   %edi
 813ec62:	56                   	push   %esi
 813ec63:	53                   	push   %ebx
 813ec64:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 813ec6a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 813ec6f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813ec76:	00 
 813ec77:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 813ec7e:	00 
 813ec7f:	89 04 24             	mov    %eax,(%esp)
 813ec82:	e8 b7 65 2b 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 813ec87:	89 45 d8             	mov    %eax,-0x28(%ebp)
 813ec8a:	c6 45 df 01          	movb   $0x1,-0x21(%ebp)
 813ec8e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 813ec95:	e9 c6 06 00 00       	jmp    813f360 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x702>
 813ec9a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 813ec9d:	69 c0 18 05 00 00    	imul   $0x518,%eax,%eax
 813eca3:	03 45 0c             	add    0xc(%ebp),%eax
 813eca6:	83 c0 04             	add    $0x4,%eax
 813eca9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 813ecac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ecaf:	0f b6 80 17 05 00 00 	movzbl 0x517(%eax),%eax
 813ecb6:	83 f0 01             	xor    $0x1,%eax
 813ecb9:	84 c0                	test   %al,%al
 813ecbb:	0f 85 97 06 00 00    	jne    813f358 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6fa>
 813ecc1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ecc4:	8b 00                	mov    (%eax),%eax
 813ecc6:	89 04 24             	mov    %eax,(%esp)
 813ecc9:	e8 22 a3 75 00       	call   8898ff0 <_ZN12advancealtar16isValidRidableIdENS_9RidableId1TE>
 813ecce:	83 f0 01             	xor    $0x1,%eax
 813ecd1:	84 c0                	test   %al,%al
 813ecd3:	0f 85 82 06 00 00    	jne    813f35b <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6fd>
 813ecd9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813ecdc:	89 04 24             	mov    %eax,(%esp)
 813ecdf:	e8 ec 78 5c 00       	call   87065d0 <_ZNSsC1Ev>
 813ece4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813ece7:	89 04 24             	mov    %eax,(%esp)
 813ecea:	e8 e1 78 5c 00       	call   87065d0 <_ZNSsC1Ev>
 813ecef:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813ecf2:	89 04 24             	mov    %eax,(%esp)
 813ecf5:	e8 d6 78 5c 00       	call   87065d0 <_ZNSsC1Ev>
 813ecfa:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813ecfd:	89 04 24             	mov    %eax,(%esp)
 813ed00:	e8 cb 78 5c 00       	call   87065d0 <_ZNSsC1Ev>
 813ed05:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ed08:	83 c0 21             	add    $0x21,%eax
 813ed0b:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 813ed12:	00 
 813ed13:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ed17:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813ed1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ed1e:	8b 45 08             	mov    0x8(%ebp),%eax
 813ed21:	89 04 24             	mov    %eax,(%esp)
 813ed24:	e8 57 06 00 00       	call   813f380 <_ZN12advancealtar9DB_Update15makeStageStringERSsPKNS_6_StageEi>
 813ed29:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ed2c:	05 b1 01 00 00       	add    $0x1b1,%eax
 813ed31:	c7 44 24 0c 0c 00 00 	movl   $0xc,0xc(%esp)
 813ed38:	00 
 813ed39:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ed3d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813ed40:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ed44:	8b 45 08             	mov    0x8(%ebp),%eax
 813ed47:	89 04 24             	mov    %eax,(%esp)
 813ed4a:	e8 f3 06 00 00       	call   813f442 <_ZN12advancealtar9DB_Update14makeSlotStringERSsPKNS_5_SlotEi>
 813ed4f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ed52:	05 29 02 00 00       	add    $0x229,%eax
 813ed57:	c7 44 24 0c 32 00 00 	movl   $0x32,0xc(%esp)
 813ed5e:	00 
 813ed5f:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ed63:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813ed66:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ed6a:	8b 45 08             	mov    0x8(%ebp),%eax
 813ed6d:	89 04 24             	mov    %eax,(%esp)
 813ed70:	e8 c7 07 00 00       	call   813f53c <_ZN12advancealtar9DB_Update17makeBuyItemStringERSsPKNS_8_BuyItemEi>
 813ed75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ed78:	05 81 04 00 00       	add    $0x481,%eax
 813ed7d:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 813ed84:	00 
 813ed85:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ed89:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813ed8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 813ed90:	8b 45 08             	mov    0x8(%ebp),%eax
 813ed93:	89 04 24             	mov    %eax,(%esp)
 813ed96:	e8 cf 08 00 00       	call   813f66a <_ZN12advancealtar9DB_Update16makeRewardStringERSsPKNS_7_RewardEi>
 813ed9b:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 813eda2:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 813eda9:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 813edb0:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 813edb7:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813edbe:	00 
 813edbf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813edc6:	00 
 813edc7:	c7 04 24 80 03 40 09 	movl   $0x9400380,(%esp)
 813edce:	e8 ed ee f3 ff       	call   807dcc0 <memset@plt>
 813edd3:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813edda:	00 
 813eddb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813ede2:	00 
 813ede3:	c7 04 24 80 23 40 09 	movl   $0x9402380,(%esp)
 813edea:	e8 d1 ee f3 ff       	call   807dcc0 <memset@plt>
 813edef:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813edf6:	00 
 813edf7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813edfe:	00 
 813edff:	c7 04 24 80 13 40 09 	movl   $0x9401380,(%esp)
 813ee06:	e8 b5 ee f3 ff       	call   807dcc0 <memset@plt>
 813ee0b:	c7 44 24 08 00 08 00 	movl   $0x800,0x8(%esp)
 813ee12:	00 
 813ee13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813ee1a:	00 
 813ee1b:	c7 04 24 80 33 40 09 	movl   $0x9403380,(%esp)
 813ee22:	e8 99 ee f3 ff       	call   807dcc0 <memset@plt>
 813ee27:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813ee2a:	89 04 24             	mov    %eax,(%esp)
 813ee2d:	e8 2e 78 5c 00       	call   8706660 <_ZNKSs4sizeEv>
 813ee32:	89 c3                	mov    %eax,%ebx
 813ee34:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813ee37:	89 04 24             	mov    %eax,(%esp)
 813ee3a:	e8 b1 76 5c 00       	call   87064f0 <_ZNKSs5c_strEv>
 813ee3f:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 813ee42:	89 54 24 10          	mov    %edx,0x10(%esp)
 813ee46:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 813ee4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ee4e:	c7 44 24 04 00 08 00 	movl   $0x800,0x4(%esp)
 813ee55:	00 
 813ee56:	c7 04 24 80 03 40 09 	movl   $0x9400380,(%esp)
 813ee5d:	e8 dc ee ff ff       	call   813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>
 813ee62:	83 f0 01             	xor    $0x1,%eax
 813ee65:	84 c0                	test   %al,%al
 813ee67:	74 0f                	je     813ee78 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x21a>
 813ee69:	be 00 00 00 00       	mov    $0x0,%esi
 813ee6e:	bb 00 00 00 00       	mov    $0x0,%ebx
 813ee73:	e9 33 04 00 00       	jmp    813f2ab <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x64d>
 813ee78:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813ee7b:	89 04 24             	mov    %eax,(%esp)
 813ee7e:	e8 dd 77 5c 00       	call   8706660 <_ZNKSs4sizeEv>
 813ee83:	89 c3                	mov    %eax,%ebx
 813ee85:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813ee88:	89 04 24             	mov    %eax,(%esp)
 813ee8b:	e8 60 76 5c 00       	call   87064f0 <_ZNKSs5c_strEv>
 813ee90:	8d 55 c0             	lea    -0x40(%ebp),%edx
 813ee93:	89 54 24 10          	mov    %edx,0x10(%esp)
 813ee97:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 813ee9b:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ee9f:	c7 44 24 04 00 08 00 	movl   $0x800,0x4(%esp)
 813eea6:	00 
 813eea7:	c7 04 24 80 23 40 09 	movl   $0x9402380,(%esp)
 813eeae:	e8 8b ee ff ff       	call   813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>
 813eeb3:	83 f0 01             	xor    $0x1,%eax
 813eeb6:	84 c0                	test   %al,%al
 813eeb8:	74 0f                	je     813eec9 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x26b>
 813eeba:	be 00 00 00 00       	mov    $0x0,%esi
 813eebf:	bb 00 00 00 00       	mov    $0x0,%ebx
 813eec4:	e9 e2 03 00 00       	jmp    813f2ab <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x64d>
 813eec9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813eecc:	89 04 24             	mov    %eax,(%esp)
 813eecf:	e8 8c 77 5c 00       	call   8706660 <_ZNKSs4sizeEv>
 813eed4:	89 c3                	mov    %eax,%ebx
 813eed6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813eed9:	89 04 24             	mov    %eax,(%esp)
 813eedc:	e8 0f 76 5c 00       	call   87064f0 <_ZNKSs5c_strEv>
 813eee1:	8d 55 bc             	lea    -0x44(%ebp),%edx
 813eee4:	89 54 24 10          	mov    %edx,0x10(%esp)
 813eee8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 813eeec:	89 44 24 08          	mov    %eax,0x8(%esp)
 813eef0:	c7 44 24 04 00 08 00 	movl   $0x800,0x4(%esp)
 813eef7:	00 
 813eef8:	c7 04 24 80 13 40 09 	movl   $0x9401380,(%esp)
 813eeff:	e8 3a ee ff ff       	call   813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>
 813ef04:	83 f0 01             	xor    $0x1,%eax
 813ef07:	84 c0                	test   %al,%al
 813ef09:	74 0f                	je     813ef1a <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x2bc>
 813ef0b:	be 00 00 00 00       	mov    $0x0,%esi
 813ef10:	bb 00 00 00 00       	mov    $0x0,%ebx
 813ef15:	e9 91 03 00 00       	jmp    813f2ab <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x64d>
 813ef1a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813ef1d:	89 04 24             	mov    %eax,(%esp)
 813ef20:	e8 3b 77 5c 00       	call   8706660 <_ZNKSs4sizeEv>
 813ef25:	89 c3                	mov    %eax,%ebx
 813ef27:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813ef2a:	89 04 24             	mov    %eax,(%esp)
 813ef2d:	e8 be 75 5c 00       	call   87064f0 <_ZNKSs5c_strEv>
 813ef32:	8d 55 b8             	lea    -0x48(%ebp),%edx
 813ef35:	89 54 24 10          	mov    %edx,0x10(%esp)
 813ef39:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 813ef3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 813ef41:	c7 44 24 04 00 08 00 	movl   $0x800,0x4(%esp)
 813ef48:	00 
 813ef49:	c7 04 24 80 33 40 09 	movl   $0x9403380,(%esp)
 813ef50:	e8 e9 ed ff ff       	call   813dd3e <_ZN12advancealtar18convertStringToZipEPcjPKcjRj>
 813ef55:	83 f0 01             	xor    $0x1,%eax
 813ef58:	84 c0                	test   %al,%al
 813ef5a:	74 0f                	je     813ef6b <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x30d>
 813ef5c:	be 00 00 00 00       	mov    $0x0,%esi
 813ef61:	bb 00 00 00 00       	mov    $0x0,%ebx
 813ef66:	e9 40 03 00 00       	jmp    813f2ab <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x64d>
 813ef6b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813ef6e:	8b 00                	mov    (%eax),%eax
 813ef70:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 813ef76:	8b 45 0c             	mov    0xc(%ebp),%eax
 813ef79:	8b 00                	mov    (%eax),%eax
 813ef7b:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 813ef81:	8b 45 b8             	mov    -0x48(%ebp),%eax
 813ef84:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813ef88:	c7 44 24 08 80 33 40 	movl   $0x9403380,0x8(%esp)
 813ef8f:	09 
 813ef90:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 813ef97:	00 
 813ef98:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813ef9b:	89 04 24             	mov    %eax,(%esp)
 813ef9e:	e8 87 55 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813efa3:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 813efa9:	8b 45 bc             	mov    -0x44(%ebp),%eax
 813efac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813efb0:	c7 44 24 08 80 13 40 	movl   $0x9401380,0x8(%esp)
 813efb7:	09 
 813efb8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 813efbf:	00 
 813efc0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813efc3:	89 04 24             	mov    %eax,(%esp)
 813efc6:	e8 5f 55 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813efcb:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 813efd1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 813efd4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813efd8:	c7 44 24 08 80 23 40 	movl   $0x9402380,0x8(%esp)
 813efdf:	09 
 813efe0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813efe7:	00 
 813efe8:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813efeb:	89 04 24             	mov    %eax,(%esp)
 813efee:	e8 37 55 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813eff3:	89 45 80             	mov    %eax,-0x80(%ebp)
 813eff6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 813eff9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813effd:	c7 44 24 08 80 03 40 	movl   $0x9400380,0x8(%esp)
 813f004:	09 
 813f005:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813f00c:	00 
 813f00d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f010:	89 04 24             	mov    %eax,(%esp)
 813f013:	e8 12 55 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813f018:	89 45 84             	mov    %eax,-0x7c(%ebp)
 813f01b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f01e:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 813f022:	0f b6 c0             	movzbl %al,%eax
 813f025:	89 45 88             	mov    %eax,-0x78(%ebp)
 813f028:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f02b:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 813f02f:	98                   	cwtl
 813f030:	89 45 8c             	mov    %eax,-0x74(%ebp)
 813f033:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f036:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 813f03a:	98                   	cwtl
 813f03b:	89 45 90             	mov    %eax,-0x70(%ebp)
 813f03e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f041:	8b 78 14             	mov    0x14(%eax),%edi
 813f044:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f047:	8b 58 10             	mov    0x10(%eax),%ebx
 813f04a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f04d:	8b 48 0c             	mov    0xc(%eax),%ecx
 813f050:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f053:	8b 50 08             	mov    0x8(%eax),%edx
 813f056:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f059:	8b 40 04             	mov    0x4(%eax),%eax
 813f05c:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 813f062:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 813f068:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 813f06c:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 813f072:	89 44 24 38          	mov    %eax,0x38(%esp)
 813f076:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 813f07c:	89 44 24 34          	mov    %eax,0x34(%esp)
 813f080:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 813f086:	89 44 24 30          	mov    %eax,0x30(%esp)
 813f08a:	8b 45 80             	mov    -0x80(%ebp),%eax
 813f08d:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 813f091:	8b 45 84             	mov    -0x7c(%ebp),%eax
 813f094:	89 44 24 28          	mov    %eax,0x28(%esp)
 813f098:	8b 45 88             	mov    -0x78(%ebp),%eax
 813f09b:	89 44 24 24          	mov    %eax,0x24(%esp)
 813f09f:	8b 45 8c             	mov    -0x74(%ebp),%eax
 813f0a2:	89 44 24 20          	mov    %eax,0x20(%esp)
 813f0a6:	8b 45 90             	mov    -0x70(%ebp),%eax
 813f0a9:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 813f0ad:	89 7c 24 18          	mov    %edi,0x18(%esp)
 813f0b1:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 813f0b5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 813f0b9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 813f0bd:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 813f0c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f0c7:	c7 44 24 04 34 d8 b6 	movl   $0x8b6d834,0x4(%esp)
 813f0ce:	08 
 813f0cf:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f0d2:	89 04 24             	mov    %eax,(%esp)
 813f0d5:	e8 e6 50 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 813f0da:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f0e1:	00 
 813f0e2:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f0e5:	89 04 24             	mov    %eax,(%esp)
 813f0e8:	e8 39 52 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 813f0ed:	88 45 df             	mov    %al,-0x21(%ebp)
 813f0f0:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 813f0f4:	83 f0 01             	xor    $0x1,%eax
 813f0f7:	84 c0                	test   %al,%al
 813f0f9:	75 11                	jne    813f10c <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x4ae>
 813f0fb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f0fe:	89 04 24             	mov    %eax,(%esp)
 813f101:	e8 0a 52 2b 00       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 813f106:	09 d0                	or     %edx,%eax
 813f108:	85 c0                	test   %eax,%eax
 813f10a:	75 07                	jne    813f113 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x4b5>
 813f10c:	b8 01 00 00 00       	mov    $0x1,%eax
 813f111:	eb 05                	jmp    813f118 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x4ba>
 813f113:	b8 00 00 00 00       	mov    $0x0,%eax
 813f118:	84 c0                	test   %al,%al
 813f11a:	0f 84 6f 01 00 00    	je     813f28f <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x631>
 813f120:	8b 45 b8             	mov    -0x48(%ebp),%eax
 813f123:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813f127:	c7 44 24 08 80 33 40 	movl   $0x9403380,0x8(%esp)
 813f12e:	09 
 813f12f:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 813f136:	00 
 813f137:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f13a:	89 04 24             	mov    %eax,(%esp)
 813f13d:	e8 e8 53 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813f142:	89 45 94             	mov    %eax,-0x6c(%ebp)
 813f145:	8b 45 bc             	mov    -0x44(%ebp),%eax
 813f148:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813f14c:	c7 44 24 08 80 13 40 	movl   $0x9401380,0x8(%esp)
 813f153:	09 
 813f154:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 813f15b:	00 
 813f15c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f15f:	89 04 24             	mov    %eax,(%esp)
 813f162:	e8 c3 53 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813f167:	89 45 98             	mov    %eax,-0x68(%ebp)
 813f16a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 813f16d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813f171:	c7 44 24 08 80 23 40 	movl   $0x9402380,0x8(%esp)
 813f178:	09 
 813f179:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f180:	00 
 813f181:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f184:	89 04 24             	mov    %eax,(%esp)
 813f187:	e8 9e 53 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813f18c:	89 45 9c             	mov    %eax,-0x64(%ebp)
 813f18f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 813f192:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813f196:	c7 44 24 08 80 03 40 	movl   $0x9400380,0x8(%esp)
 813f19d:	09 
 813f19e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813f1a5:	00 
 813f1a6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f1a9:	89 04 24             	mov    %eax,(%esp)
 813f1ac:	e8 79 53 2b 00       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 813f1b1:	89 45 a0             	mov    %eax,-0x60(%ebp)
 813f1b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1b7:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 813f1bb:	0f b6 c0             	movzbl %al,%eax
 813f1be:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 813f1c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1c4:	0f b7 40 1a          	movzwl 0x1a(%eax),%eax
 813f1c8:	98                   	cwtl
 813f1c9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 813f1cc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1cf:	0f b7 40 18          	movzwl 0x18(%eax),%eax
 813f1d3:	98                   	cwtl
 813f1d4:	89 45 ac             	mov    %eax,-0x54(%ebp)
 813f1d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1da:	8b 40 14             	mov    0x14(%eax),%eax
 813f1dd:	89 45 b0             	mov    %eax,-0x50(%ebp)
 813f1e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1e3:	8b 40 10             	mov    0x10(%eax),%eax
 813f1e6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 813f1e9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1ec:	8b 78 0c             	mov    0xc(%eax),%edi
 813f1ef:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1f2:	8b 58 08             	mov    0x8(%eax),%ebx
 813f1f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1f8:	8b 48 04             	mov    0x4(%eax),%ecx
 813f1fb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 813f1fe:	8b 00                	mov    (%eax),%eax
 813f200:	89 c2                	mov    %eax,%edx
 813f202:	8b 45 0c             	mov    0xc(%ebp),%eax
 813f205:	8b 00                	mov    (%eax),%eax
 813f207:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 813f20d:	8b 45 94             	mov    -0x6c(%ebp),%eax
 813f210:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 813f214:	8b 45 98             	mov    -0x68(%ebp),%eax
 813f217:	89 44 24 38          	mov    %eax,0x38(%esp)
 813f21b:	8b 45 9c             	mov    -0x64(%ebp),%eax
 813f21e:	89 44 24 34          	mov    %eax,0x34(%esp)
 813f222:	8b 45 a0             	mov    -0x60(%ebp),%eax
 813f225:	89 44 24 30          	mov    %eax,0x30(%esp)
 813f229:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 813f22c:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 813f230:	8b 45 a8             	mov    -0x58(%ebp),%eax
 813f233:	89 44 24 28          	mov    %eax,0x28(%esp)
 813f237:	8b 45 ac             	mov    -0x54(%ebp),%eax
 813f23a:	89 44 24 24          	mov    %eax,0x24(%esp)
 813f23e:	8b 45 b0             	mov    -0x50(%ebp),%eax
 813f241:	89 44 24 20          	mov    %eax,0x20(%esp)
 813f245:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 813f248:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 813f24c:	89 7c 24 18          	mov    %edi,0x18(%esp)
 813f250:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 813f254:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 813f258:	89 54 24 0c          	mov    %edx,0xc(%esp)
 813f25c:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 813f262:	89 44 24 08          	mov    %eax,0x8(%esp)
 813f266:	c7 44 24 04 9c d9 b6 	movl   $0x8b6d99c,0x4(%esp)
 813f26d:	08 
 813f26e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f271:	89 04 24             	mov    %eax,(%esp)
 813f274:	e8 47 4f 2b 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 813f279:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 813f280:	00 
 813f281:	8b 45 d8             	mov    -0x28(%ebp),%eax
 813f284:	89 04 24             	mov    %eax,(%esp)
 813f287:	e8 9a 50 2b 00       	call   83f4326 <_ZN5MySQL4execEb>
 813f28c:	88 45 df             	mov    %al,-0x21(%ebp)
 813f28f:	bb 01 00 00 00       	mov    $0x1,%ebx
 813f294:	eb 15                	jmp    813f2ab <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x64d>
 813f296:	89 d3                	mov    %edx,%ebx
 813f298:	89 c6                	mov    %eax,%esi
 813f29a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813f29d:	89 04 24             	mov    %eax,(%esp)
 813f2a0:	e8 3b 89 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f2a5:	89 f0                	mov    %esi,%eax
 813f2a7:	89 da                	mov    %ebx,%edx
 813f2a9:	eb 1d                	jmp    813f2c8 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x66a>
 813f2ab:	8d 45 c8             	lea    -0x38(%ebp),%eax
 813f2ae:	89 04 24             	mov    %eax,(%esp)
 813f2b1:	e8 2a 89 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f2b6:	85 db                	test   %ebx,%ebx
 813f2b8:	75 07                	jne    813f2c1 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x663>
 813f2ba:	bb 00 00 00 00       	mov    $0x0,%ebx
 813f2bf:	eb 1c                	jmp    813f2dd <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x67f>
 813f2c1:	bb 01 00 00 00       	mov    $0x1,%ebx
 813f2c6:	eb 15                	jmp    813f2dd <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x67f>
 813f2c8:	89 d3                	mov    %edx,%ebx
 813f2ca:	89 c6                	mov    %eax,%esi
 813f2cc:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813f2cf:	89 04 24             	mov    %eax,(%esp)
 813f2d2:	e8 09 89 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f2d7:	89 f0                	mov    %esi,%eax
 813f2d9:	89 da                	mov    %ebx,%edx
 813f2db:	eb 1d                	jmp    813f2fa <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x69c>
 813f2dd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 813f2e0:	89 04 24             	mov    %eax,(%esp)
 813f2e3:	e8 f8 88 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f2e8:	85 db                	test   %ebx,%ebx
 813f2ea:	75 07                	jne    813f2f3 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x695>
 813f2ec:	bb 00 00 00 00       	mov    $0x0,%ebx
 813f2f1:	eb 1c                	jmp    813f30f <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6b1>
 813f2f3:	bb 01 00 00 00       	mov    $0x1,%ebx
 813f2f8:	eb 15                	jmp    813f30f <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6b1>
 813f2fa:	89 d3                	mov    %edx,%ebx
 813f2fc:	89 c6                	mov    %eax,%esi
 813f2fe:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813f301:	89 04 24             	mov    %eax,(%esp)
 813f304:	e8 d7 88 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f309:	89 f0                	mov    %esi,%eax
 813f30b:	89 da                	mov    %ebx,%edx
 813f30d:	eb 1d                	jmp    813f32c <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6ce>
 813f30f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 813f312:	89 04 24             	mov    %eax,(%esp)
 813f315:	e8 c6 88 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f31a:	85 db                	test   %ebx,%ebx
 813f31c:	75 07                	jne    813f325 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6c7>
 813f31e:	bb 00 00 00 00       	mov    $0x0,%ebx
 813f323:	eb 22                	jmp    813f347 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6e9>
 813f325:	bb 01 00 00 00       	mov    $0x1,%ebx
 813f32a:	eb 1b                	jmp    813f347 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6e9>
 813f32c:	89 d3                	mov    %edx,%ebx
 813f32e:	89 c6                	mov    %eax,%esi
 813f330:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813f333:	89 04 24             	mov    %eax,(%esp)
 813f336:	e8 a5 88 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f33b:	89 f0                	mov    %esi,%eax
 813f33d:	89 da                	mov    %ebx,%edx
 813f33f:	89 04 24             	mov    %eax,(%esp)
 813f342:	e8 09 44 9a 00       	call   8ae3750 <_Unwind_Resume>
 813f347:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 813f34a:	89 04 24             	mov    %eax,(%esp)
 813f34d:	e8 8e 88 5c 00       	call   8707be0 <_ZNSsD1Ev>
 813f352:	85 db                	test   %ebx,%ebx
 813f354:	74 1d                	je     813f373 <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x715>
 813f356:	eb 04                	jmp    813f35c <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6fe>
 813f358:	90                   	nop
 813f359:	eb 01                	jmp    813f35c <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x6fe>
 813f35b:	90                   	nop
 813f35c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 813f360:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 813f364:	0f 9e c0             	setle  %al
 813f367:	84 c0                	test   %al,%al
 813f369:	0f 85 2b f9 ff ff    	jne    813ec9a <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE+0x3c>
 813f36f:	0f b6 75 df          	movzbl -0x21(%ebp),%esi
 813f373:	89 f0                	mov    %esi,%eax
 813f375:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 813f37b:	5b                   	pop    %ebx
 813f37c:	5e                   	pop    %esi
 813f37d:	5f                   	pop    %edi
 813f37e:	5d                   	pop    %ebp
 813f37f:	c3                   	ret

```

```c
// advancealtar::DB_Update::update @ 0x813ec5e

/* advancealtar::DB_Update::update(advancealtar::_CharacAdvanceAltarDbData const&) */

uint __thiscall advancealtar::DB_Update::update(DB_Update *this,_CharacAdvanceAltarDbData *param_1)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint unaff_ESI;
  longlong lVar11;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  string local_3c;
  string local_38;
  string local_34;
  string local_30;
  MySQL *local_2c;
  byte local_25;
  int local_24;
  _CharacAdvanceAltarDbData *local_20;
  
  local_2c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_25 = 1;
  local_24 = 0;
  do {
    if (0 < local_24) {
      return (uint)local_25;
    }
    local_20 = param_1 + local_24 * 0x518 + 4;
    if ((param_1[local_24 * 0x518 + 0x51b] == (_CharacAdvanceAltarDbData)0x1) &&
       (cVar2 = isValidRidableId(*(undefined4 *)local_20), cVar2 == '\x01')) {
      std::string::string((string *)&local_30);
                    /* try { // try from 0813ecea to 0813ecee has its CatchHandler @ 0813f32c */
      std::string::string((string *)&local_34);
                    /* try { // try from 0813ecf5 to 0813ecf9 has its CatchHandler @ 0813f2fa */
      std::string::string((string *)&local_38);
                    /* try { // try from 0813ed00 to 0813ed04 has its CatchHandler @ 0813f2c8 */
      std::string::string((string *)&local_3c);
                    /* try { // try from 0813ed24 to 0813f28b has its CatchHandler @ 0813f296 */
      makeStageString(this,&local_30,(_Stage *)(local_20 + 0x21),0x32);
      makeSlotString(this,&local_34,(_Slot *)(local_20 + 0x1b1),0xc);
      makeBuyItemString(this,&local_38,(_BuyItem *)(local_20 + 0x229),0x32);
      makeRewardString(this,&local_3c,(_Reward *)(local_20 + 0x481),0x1e);
      local_40 = 0;
      local_44 = 0;
      local_48 = 0;
      local_4c = 0;
      memset(g_ZipStageBuffer,0,0x800);
      memset(g_ZipSlotBuffer,0,0x800);
      memset(g_ZipBuyItemBuffer,0,0x800);
      memset(g_ZipRewardBuffer,0,0x800);
      uVar3 = std::string::size((string *)&local_30);
      pcVar4 = (char *)std::string::c_str((string *)&local_30);
      cVar2 = convertStringToZip(g_ZipStageBuffer,0x800,pcVar4,uVar3,&local_40);
      if (cVar2 == '\x01') {
        uVar3 = std::string::size((string *)&local_34);
        pcVar4 = (char *)std::string::c_str((string *)&local_34);
        cVar2 = convertStringToZip(g_ZipSlotBuffer,0x800,pcVar4,uVar3,&local_44);
        if (cVar2 == '\x01') {
          uVar3 = std::string::size((string *)&local_38);
          pcVar4 = (char *)std::string::c_str((string *)&local_38);
          cVar2 = convertStringToZip(g_ZipBuyItemBuffer,0x800,pcVar4,uVar3,&local_48);
          if (cVar2 == '\x01') {
            uVar3 = std::string::size((string *)&local_3c);
            pcVar4 = (char *)std::string::c_str((string *)&local_3c);
            cVar2 = convertStringToZip(g_ZipRewardBuffer,0x800,pcVar4,uVar3,&local_4c);
            if (cVar2 == '\x01') {
              uVar9 = *(undefined4 *)local_20;
              uVar10 = *(undefined4 *)param_1;
              uVar5 = MySQL::blob_to_str(local_2c,3,g_ZipRewardBuffer,local_4c);
              uVar6 = MySQL::blob_to_str(local_2c,2,g_ZipBuyItemBuffer,local_48);
              uVar7 = MySQL::blob_to_str(local_2c,1,g_ZipSlotBuffer,local_44);
              uVar8 = MySQL::blob_to_str(local_2c,0,g_ZipStageBuffer,local_40);
              MySQL::set_query(local_2c,
                               "update charac_advance_altar \t\t\t\t  set ticket_free = %d, ticket_cera = %d, \t\t\t\t  star_game = %d, star_cera = %d, star_usable = %d, \t\t\t\t  survival_best = %d, star_reset_count = %d, is_unlock_stage_effect = %d, \t\t\t\t  stage_list = \'%s\', \t\t\t\t  slot_list = \'%s\', \t\t\t\t  buy_item_list = \'%s\', \t\t\t\t  reward_list = \'%s\' \t\t\t\t  where charac_no = %u and ridable_id = %d"
                               ,*(undefined4 *)(local_20 + 4),*(undefined4 *)(local_20 + 8),
                               *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 0x10),
                               *(undefined4 *)(local_20 + 0x14),(int)*(short *)(local_20 + 0x18),
                               (int)*(short *)(local_20 + 0x1a),(uint)(byte)local_20[0x20],uVar8,
                               uVar7,uVar6,uVar5,uVar10,uVar9);
              local_25 = MySQL::exec(local_2c,true);
              if ((local_25 == 1) && (lVar11 = MySQL::getAffectedRowCount(local_2c), lVar11 != 0)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (bVar1) {
                uVar9 = MySQL::blob_to_str(local_2c,3,g_ZipRewardBuffer,local_4c);
                uVar10 = MySQL::blob_to_str(local_2c,2,g_ZipBuyItemBuffer,local_48);
                uVar5 = MySQL::blob_to_str(local_2c,1,g_ZipSlotBuffer,local_44);
                uVar6 = MySQL::blob_to_str(local_2c,0,g_ZipStageBuffer,local_40);
                MySQL::set_query(local_2c,
                                 "insert into charac_advance_altar \t\t\t\t\t\t  (charac_no, ridable_id, \t\t\t\t\t\t  ticket_free, ticket_cera, \t\t\t\t\t\t  star_game, star_cera, star_usable, \t\t\t\t\t\t  survival_best, star_reset_count, is_unlock_stage_effect, \t\t\t\t\t\t  stage_list, \t\t\t\t\t\t  slot_list, \t\t\t\t\t\t  buy_item_list, \t\t\t\t\t\t  reward_list) \t\t\t\t\t\t  values \t\t\t\t\t\t  (%u, %d, \t\t\t\t\t\t  %d, %d, \t\t\t\t\t\t  %d, %d, %d,\t\t\t\t\t\t  %d, %d, %d, \t\t\t\t\t\t  \'%s\', \t\t\t\t\t\t  \'%s\', \t\t\t\t\t\t  \'%s\', \t\t\t\t\t\t  \'%s\')"
                                 ,*(undefined4 *)param_1,*(undefined4 *)local_20,
                                 *(undefined4 *)(local_20 + 4),*(undefined4 *)(local_20 + 8),
                                 *(undefined4 *)(local_20 + 0xc),*(undefined4 *)(local_20 + 0x10),
                                 *(undefined4 *)(local_20 + 0x14),(int)*(short *)(local_20 + 0x18),
                                 (int)*(short *)(local_20 + 0x1a),(uint)(byte)local_20[0x20],uVar6,
                                 uVar5,uVar10,uVar9);
                local_25 = MySQL::exec(local_2c,true);
              }
              bVar1 = true;
            }
            else {
              unaff_ESI = 0;
              bVar1 = false;
            }
          }
          else {
            unaff_ESI = 0;
            bVar1 = false;
          }
        }
        else {
          unaff_ESI = 0;
          bVar1 = false;
        }
      }
      else {
        unaff_ESI = 0;
        bVar1 = false;
      }
                    /* try { // try from 0813f2b1 to 0813f2b5 has its CatchHandler @ 0813f2c8 */
      std::string::~string((string *)&local_3c);
                    /* try { // try from 0813f2e3 to 0813f2e7 has its CatchHandler @ 0813f2fa */
      std::string::~string((string *)&local_38);
                    /* try { // try from 0813f315 to 0813f319 has its CatchHandler @ 0813f32c */
      std::string::~string((string *)&local_34);
      std::string::~string((string *)&local_30);
      if (!bVar1) {
        return unaff_ESI;
      }
    }
    local_24 = local_24 + 1;
  } while( true );
}

```

