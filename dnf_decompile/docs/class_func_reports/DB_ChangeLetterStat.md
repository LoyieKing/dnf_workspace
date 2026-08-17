# DB_ChangeLetterStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0842602e DB_ChangeLetterStat::dispatch  [0x0842602e-0x84261fb] ===
 842602e:	55                   	push   %ebp
 842602f:	89 e5                	mov    %esp,%ebp
 8426031:	83 ec 38             	sub    $0x38,%esp
 8426034:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8426039:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8426040:	00 
 8426041:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8426048:	00 
 8426049:	89 04 24             	mov    %eax,(%esp)
 842604c:	e8 ed f1 fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8426051:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8426054:	8b 45 14             	mov    0x14(%ebp),%eax
 8426057:	89 04 24             	mov    %eax,(%esp)
 842605a:	e8 a1 bf 02 00       	call   8452000 <_ZN6Stream12GetOutBufferI15SIG_LETTER_STATEEPT_v>
 842605f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8426062:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426065:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8426069:	98                   	cwtl
 842606a:	85 c0                	test   %eax,%eax
 842606c:	74 16                	je     8426084 <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x56>
 842606e:	85 c0                	test   %eax,%eax
 8426070:	0f 88 14 01 00 00    	js     842618a <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x15c>
 8426076:	83 e8 02             	sub    $0x2,%eax
 8426079:	83 f8 01             	cmp    $0x1,%eax
 842607c:	0f 87 08 01 00 00    	ja     842618a <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x15c>
 8426082:	eb 70                	jmp    84260f4 <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0xc6>
 8426084:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426087:	8b 40 04             	mov    0x4(%eax),%eax
 842608a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842608e:	c7 44 24 04 cc e8 c4 	movl   $0x8c4e8cc,0x4(%esp)
 8426095:	08 
 8426096:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8426099:	89 04 24             	mov    %eax,(%esp)
 842609c:	e8 1f e1 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84260a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84260a8:	00 
 84260a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84260ac:	89 04 24             	mov    %eax,(%esp)
 84260af:	e8 72 e2 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84260b4:	83 f0 01             	xor    $0x1,%eax
 84260b7:	84 c0                	test   %al,%al
 84260b9:	0f 84 fd 00 00 00    	je     84261bc <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x18e>
 84260bf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84260c2:	8b 00                	mov    (%eax),%eax
 84260c4:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84260cb:	00 
 84260cc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84260d3:	00 
 84260d4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84260d8:	8b 45 10             	mov    0x10(%ebp),%eax
 84260db:	89 44 24 04          	mov    %eax,0x4(%esp)
 84260df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84260e2:	89 04 24             	mov    %eax,(%esp)
 84260e5:	e8 12 01 00 00       	call   84261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>
 84260ea:	b8 00 00 00 00       	mov    $0x0,%eax
 84260ef:	e9 06 01 00 00       	jmp    84261fa <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x1cc>
 84260f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84260f7:	8b 50 04             	mov    0x4(%eax),%edx
 84260fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84260fd:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8426101:	98                   	cwtl
 8426102:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8426106:	89 44 24 08          	mov    %eax,0x8(%esp)
 842610a:	c7 44 24 04 f4 e8 c4 	movl   $0x8c4e8f4,0x4(%esp)
 8426111:	08 
 8426112:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8426115:	89 04 24             	mov    %eax,(%esp)
 8426118:	e8 a3 e0 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 842611d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8426124:	00 
 8426125:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8426128:	89 04 24             	mov    %eax,(%esp)
 842612b:	e8 f6 e1 fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8426130:	83 f0 01             	xor    $0x1,%eax
 8426133:	84 c0                	test   %al,%al
 8426135:	75 11                	jne    8426148 <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x11a>
 8426137:	8b 45 f0             	mov    -0x10(%ebp),%eax
 842613a:	89 04 24             	mov    %eax,(%esp)
 842613d:	e8 ce e1 fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8426142:	09 d0                	or     %edx,%eax
 8426144:	85 c0                	test   %eax,%eax
 8426146:	75 07                	jne    842614f <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x121>
 8426148:	b8 01 00 00 00       	mov    $0x1,%eax
 842614d:	eb 05                	jmp    8426154 <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x126>
 842614f:	b8 00 00 00 00       	mov    $0x0,%eax
 8426154:	84 c0                	test   %al,%al
 8426156:	74 67                	je     84261bf <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x191>
 8426158:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842615b:	8b 00                	mov    (%eax),%eax
 842615d:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8426164:	00 
 8426165:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 842616c:	00 
 842616d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426171:	8b 45 10             	mov    0x10(%ebp),%eax
 8426174:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426178:	8b 45 0c             	mov    0xc(%ebp),%eax
 842617b:	89 04 24             	mov    %eax,(%esp)
 842617e:	e8 79 00 00 00       	call   84261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>
 8426183:	b8 00 00 00 00       	mov    $0x0,%eax
 8426188:	eb 70                	jmp    84261fa <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x1cc>
 842618a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842618d:	8b 00                	mov    (%eax),%eax
 842618f:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8426196:	00 
 8426197:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 842619e:	00 
 842619f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84261a3:	8b 45 10             	mov    0x10(%ebp),%eax
 84261a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84261aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 84261ad:	89 04 24             	mov    %eax,(%esp)
 84261b0:	e8 47 00 00 00       	call   84261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>
 84261b5:	b8 00 00 00 00       	mov    $0x0,%eax
 84261ba:	eb 3e                	jmp    84261fa <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x1cc>
 84261bc:	90                   	nop
 84261bd:	eb 01                	jmp    84261c0 <_ZN19DB_ChangeLetterStat8dispatchEiiP6Stream+0x192>
 84261bf:	90                   	nop
 84261c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84261c3:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84261c7:	0f bf c8             	movswl %ax,%ecx
 84261ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84261cd:	8b 40 04             	mov    0x4(%eax),%eax
 84261d0:	89 c2                	mov    %eax,%edx
 84261d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84261d5:	8b 00                	mov    (%eax),%eax
 84261d7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84261db:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84261df:	89 44 24 08          	mov    %eax,0x8(%esp)
 84261e3:	8b 45 10             	mov    0x10(%ebp),%eax
 84261e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84261ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 84261ed:	89 04 24             	mov    %eax,(%esp)
 84261f0:	e8 07 00 00 00       	call   84261fc <_ZN19DB_ChangeLetterStat11makeRequestEiiiii>
 84261f5:	b8 01 00 00 00       	mov    $0x1,%eax
 84261fa:	c9                   	leave
 84261fb:	c3                   	ret

```

```c
// DB_ChangeLetterStat::dispatch @ 0x842602e

/* DB_ChangeLetterStat::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ChangeLetterStat::dispatch(DB_ChangeLetterStat *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  MySQL *this_00;
  SIG_LETTER_STAT *pSVar3;
  int iVar4;
  longlong lVar5;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  pSVar3 = Stream::GetOutBuffer<SIG_LETTER_STAT>(param_3);
  iVar4 = (int)*(short *)(pSVar3 + 8);
  if (iVar4 == 0) {
    MySQL::set_query(this_00,"deLete from letter where letter_id = %d",*(undefined4 *)(pSVar3 + 4));
    cVar2 = MySQL::exec(this_00,true);
    if (cVar2 != '\x01') {
      makeRequest(param_1,param_2,*(int *)pSVar3,0,0);
      return 0;
    }
  }
  else {
    if ((iVar4 < 0) || (1 < iVar4 - 2U)) {
      makeRequest(param_1,param_2,*(int *)pSVar3,0,0);
      return 0;
    }
    MySQL::set_query(this_00,"upDate letter set stat=%d where letter_id=%d",
                     (int)*(short *)(pSVar3 + 8),*(undefined4 *)(pSVar3 + 4));
    cVar2 = MySQL::exec(this_00,true);
    if ((cVar2 == '\x01') && (lVar5 = MySQL::getAffectedRowCount(this_00), lVar5 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      makeRequest(param_1,param_2,*(int *)pSVar3,0,0);
      return 0;
    }
  }
  makeRequest(param_1,param_2,*(int *)pSVar3,*(int *)(pSVar3 + 4),(int)*(short *)(pSVar3 + 8));
  return 1;
}

```

---

## makeRequest

```asm
// === 084261fc DB_ChangeLetterStat::makeRequest  [0x084261fc-0x84262e9] ===
 84261fc:	55                   	push   %ebp
 84261fd:	89 e5                	mov    %esp,%ebp
 84261ff:	56                   	push   %esi
 8426200:	53                   	push   %ebx
 8426201:	83 ec 20             	sub    $0x20,%esp
 8426204:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8426209:	c7 44 24 08 54 64 00 	movl   $0x6454,0x8(%esp)
 8426210:	00 
 8426211:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8426218:	08 
 8426219:	89 04 24             	mov    %eax,(%esp)
 842621c:	e8 65 98 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8426221:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8426228:	00 
 8426229:	89 44 24 04          	mov    %eax,0x4(%esp)
 842622d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426230:	89 04 24             	mov    %eax,(%esp)
 8426233:	e8 ee 29 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8426238:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842623b:	89 04 24             	mov    %eax,(%esp)
 842623e:	e8 03 2a ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8426243:	8b 55 08             	mov    0x8(%ebp),%edx
 8426246:	89 54 24 04          	mov    %edx,0x4(%esp)
 842624a:	89 04 24             	mov    %eax,(%esp)
 842624d:	e8 04 2a ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426252:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426255:	89 04 24             	mov    %eax,(%esp)
 8426258:	e8 e9 29 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 842625d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8426260:	89 54 24 04          	mov    %edx,0x4(%esp)
 8426264:	89 04 24             	mov    %eax,(%esp)
 8426267:	e8 ea 29 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 842626c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842626f:	89 04 24             	mov    %eax,(%esp)
 8426272:	e8 d7 29 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8426277:	89 04 24             	mov    %eax,(%esp)
 842627a:	e8 d5 bd 02 00       	call   8452054 <_ZN12CStreamGuard11GetInBufferI15SIG_LETTER_STATEEPT_v>
 842627f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8426282:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426285:	8b 55 10             	mov    0x10(%ebp),%edx
 8426288:	89 10                	mov    %edx,(%eax)
 842628a:	8b 55 14             	mov    0x14(%ebp),%edx
 842628d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426290:	89 50 04             	mov    %edx,0x4(%eax)
 8426293:	8b 45 18             	mov    0x18(%ebp),%eax
 8426296:	89 c2                	mov    %eax,%edx
 8426298:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842629b:	66 89 50 08          	mov    %dx,0x8(%eax)
 842629f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84262a4:	8d 55 ec             	lea    -0x14(%ebp),%edx
 84262a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84262ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84262b2:	00 
 84262b3:	89 04 24             	mov    %eax,(%esp)
 84262b6:	e8 23 ad 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84262bb:	eb 1b                	jmp    84262d8 <_ZN19DB_ChangeLetterStat11makeRequestEiiiii+0xdc>
 84262bd:	89 d3                	mov    %edx,%ebx
 84262bf:	89 c6                	mov    %eax,%esi
 84262c1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84262c4:	89 04 24             	mov    %eax,(%esp)
 84262c7:	e8 06 66 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84262cc:	89 f0                	mov    %esi,%eax
 84262ce:	89 da                	mov    %ebx,%edx
 84262d0:	89 04 24             	mov    %eax,(%esp)
 84262d3:	e8 78 d4 6b 00       	call   8ae3750 <_Unwind_Resume>
 84262d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84262db:	89 04 24             	mov    %eax,(%esp)
 84262de:	e8 ef 65 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84262e3:	83 c4 20             	add    $0x20,%esp
 84262e6:	5b                   	pop    %ebx
 84262e7:	5e                   	pop    %esi
 84262e8:	5d                   	pop    %ebp
 84262e9:	c3                   	ret

```

```c
// DB_ChangeLetterStat::makeRequest @ 0x84261fc

/* DB_ChangeLetterStat::makeRequest(int, int, int, int, int) */

void DB_ChangeLetterStat::makeRequest(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_LETTER_STAT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x6454);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0842624d to 084262ba has its CatchHandler @ 084262bd */
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_LETTER_STAT>(pCVar2);
  *(int *)local_10 = param_3;
  *(int *)(local_10 + 4) = param_4;
  *(short *)(local_10 + 8) = (short)param_5;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

