# DB_BlackipPrivateSecurityValuation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 084354da DB_BlackipPrivateSecurityValuation::dispatch  [0x084354da-0x84355c9] ===
 84354da:	55                   	push   %ebp
 84354db:	89 e5                	mov    %esp,%ebp
 84354dd:	83 ec 28             	sub    $0x28,%esp
 84354e0:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84354e5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84354ec:	00 
 84354ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84354f4:	00 
 84354f5:	89 04 24             	mov    %eax,(%esp)
 84354f8:	e8 41 fd fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84354fd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8435500:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8435503:	89 44 24 04          	mov    %eax,0x4(%esp)
 8435507:	8b 45 14             	mov    0x14(%ebp),%eax
 843550a:	89 04 24             	mov    %eax,(%esp)
 843550d:	e8 84 72 1e 00       	call   861c796 <_ZN6StreamrsERj>
 8435512:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8435515:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 843551c:	00 
 843551d:	89 04 24             	mov    %eax,(%esp)
 8435520:	e8 26 3b cd ff       	call   810904b <_Z14NumberToStringji>
 8435525:	89 44 24 08          	mov    %eax,0x8(%esp)
 8435529:	c7 44 24 04 78 31 c5 	movl   $0x8c53178,0x4(%esp)
 8435530:	08 
 8435531:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435534:	89 04 24             	mov    %eax,(%esp)
 8435537:	e8 84 ec fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843553c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8435543:	00 
 8435544:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435547:	89 04 24             	mov    %eax,(%esp)
 843554a:	e8 d7 ed fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 843554f:	83 f0 01             	xor    $0x1,%eax
 8435552:	84 c0                	test   %al,%al
 8435554:	75 11                	jne    8435567 <_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream+0x8d>
 8435556:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435559:	89 04 24             	mov    %eax,(%esp)
 843555c:	e8 af ed fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8435561:	09 d0                	or     %edx,%eax
 8435563:	85 c0                	test   %eax,%eax
 8435565:	75 07                	jne    843556e <_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream+0x94>
 8435567:	b8 01 00 00 00       	mov    $0x1,%eax
 843556c:	eb 05                	jmp    8435573 <_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream+0x99>
 843556e:	b8 00 00 00 00       	mov    $0x0,%eax
 8435573:	84 c0                	test   %al,%al
 8435575:	74 4b                	je     84355c2 <_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream+0xe8>
 8435577:	8b 45 f0             	mov    -0x10(%ebp),%eax
 843557a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8435581:	00 
 8435582:	89 04 24             	mov    %eax,(%esp)
 8435585:	e8 c1 3a cd ff       	call   810904b <_Z14NumberToStringji>
 843558a:	89 44 24 08          	mov    %eax,0x8(%esp)
 843558e:	c7 44 24 04 c0 31 c5 	movl   $0x8c531c0,0x4(%esp)
 8435595:	08 
 8435596:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8435599:	89 04 24             	mov    %eax,(%esp)
 843559c:	e8 1f ec fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84355a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84355a8:	00 
 84355a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84355ac:	89 04 24             	mov    %eax,(%esp)
 84355af:	e8 72 ed fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84355b4:	83 f0 01             	xor    $0x1,%eax
 84355b7:	84 c0                	test   %al,%al
 84355b9:	74 07                	je     84355c2 <_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream+0xe8>
 84355bb:	b8 00 00 00 00       	mov    $0x0,%eax
 84355c0:	eb 05                	jmp    84355c7 <_ZN34DB_BlackipPrivateSecurityValuation8dispatchEiiP6Stream+0xed>
 84355c2:	b8 01 00 00 00       	mov    $0x1,%eax
 84355c7:	c9                   	leave
 84355c8:	c3                   	ret
 84355c9:	90                   	nop

```

```c
// DB_BlackipPrivateSecurityValuation::dispatch @ 0x84354da

/* DB_BlackipPrivateSecurityValuation::dispatch(int, int, Stream*) */

undefined4 DB_BlackipPrivateSecurityValuation::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  uint local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  Stream::operator>>(in_stack_00000010,&local_14);
  uVar3 = NumberToString(local_14,0);
  MySQL::set_query(local_10,"upDate member_security_grade set black_ip_try_time=now() where m_id=%s"
                   ,uVar3);
  cVar2 = MySQL::exec(local_10,true);
  if ((cVar2 == '\x01') && (lVar4 = MySQL::getAffectedRowCount(local_10), lVar4 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar3 = NumberToString(local_14,0);
    MySQL::set_query(local_10,
                     "inSert into member_security_grade(m_id, black_ip_try_time) values(%s, now())",
                     uVar3);
    cVar2 = MySQL::exec(local_10,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  return 1;
}

```

---

## makeRequest

```asm
// === 084355ca DB_BlackipPrivateSecurityValuation::makeRequest  [0x084355ca-0x84356a1] ===
 84355ca:	55                   	push   %ebp
 84355cb:	89 e5                	mov    %esp,%ebp
 84355cd:	56                   	push   %esi
 84355ce:	53                   	push   %ebx
 84355cf:	83 ec 20             	sub    $0x20,%esp
 84355d2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84355d7:	c7 44 24 08 a1 7f 00 	movl   $0x7fa1,0x8(%esp)
 84355de:	00 
 84355df:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84355e6:	08 
 84355e7:	89 04 24             	mov    %eax,(%esp)
 84355ea:	e8 97 a4 e5 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84355ef:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84355f6:	00 
 84355f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84355fb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84355fe:	89 04 24             	mov    %eax,(%esp)
 8435601:	e8 20 36 c9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8435606:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8435609:	89 04 24             	mov    %eax,(%esp)
 843560c:	e8 35 36 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8435611:	c7 44 24 04 64 01 00 	movl   $0x164,0x4(%esp)
 8435618:	00 
 8435619:	89 04 24             	mov    %eax,(%esp)
 843561c:	e8 35 36 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8435621:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8435624:	89 04 24             	mov    %eax,(%esp)
 8435627:	e8 1a 36 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 843562c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8435633:	ff 
 8435634:	89 04 24             	mov    %eax,(%esp)
 8435637:	e8 1a 36 c9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 843563c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843563f:	89 04 24             	mov    %eax,(%esp)
 8435642:	e8 ff 35 c9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8435647:	8b 55 08             	mov    0x8(%ebp),%edx
 843564a:	89 54 24 04          	mov    %edx,0x4(%esp)
 843564e:	89 04 24             	mov    %eax,(%esp)
 8435651:	e8 3c cc ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8435656:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 843565b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 843565e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8435662:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8435669:	00 
 843566a:	89 04 24             	mov    %eax,(%esp)
 843566d:	e8 6c b9 13 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8435672:	eb 1b                	jmp    843568f <_ZN34DB_BlackipPrivateSecurityValuation11makeRequestEj+0xc5>
 8435674:	89 d3                	mov    %edx,%ebx
 8435676:	89 c6                	mov    %eax,%esi
 8435678:	8d 45 f0             	lea    -0x10(%ebp),%eax
 843567b:	89 04 24             	mov    %eax,(%esp)
 843567e:	e8 4f 72 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8435683:	89 f0                	mov    %esi,%eax
 8435685:	89 da                	mov    %ebx,%edx
 8435687:	89 04 24             	mov    %eax,(%esp)
 843568a:	e8 c1 e0 6a 00       	call   8ae3750 <_Unwind_Resume>
 843568f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8435692:	89 04 24             	mov    %eax,(%esp)
 8435695:	e8 38 72 1e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 843569a:	83 c4 20             	add    $0x20,%esp
 843569d:	5b                   	pop    %ebx
 843569e:	5e                   	pop    %esi
 843569f:	5d                   	pop    %ebp
 84356a0:	c3                   	ret
 84356a1:	90                   	nop

```

```c
// DB_BlackipPrivateSecurityValuation::makeRequest @ 0x84355ca

/* DB_BlackipPrivateSecurityValuation::makeRequest(unsigned int) */

void DB_BlackipPrivateSecurityValuation::makeRequest(uint param_1)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x7fa1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 0843561c to 08435671 has its CatchHandler @ 08435674 */
  CStreamGuard::operator<<(pCVar2,0x164);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

