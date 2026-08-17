# DB_ReqChangeCharacName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _hasSameCharacName

```asm
// === 084267c2 DB_ReqChangeCharacName::_hasSameCharacName  [0x084267c2-0x842688b] ===
 84267c2:	55                   	push   %ebp
 84267c3:	89 e5                	mov    %esp,%ebp
 84267c5:	83 ec 28             	sub    $0x28,%esp
 84267c8:	8b 45 14             	mov    0x14(%ebp),%eax
 84267cb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84267cf:	8b 45 10             	mov    0x10(%ebp),%eax
 84267d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84267d6:	c7 44 24 04 a4 2b c4 	movl   $0x8c42ba4,0x4(%esp)
 84267dd:	08 
 84267de:	8b 45 0c             	mov    0xc(%ebp),%eax
 84267e1:	89 04 24             	mov    %eax,(%esp)
 84267e4:	e8 d7 d9 fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84267e9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84267f0:	00 
 84267f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84267f4:	89 04 24             	mov    %eax,(%esp)
 84267f7:	e8 2a db fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84267fc:	83 f0 01             	xor    $0x1,%eax
 84267ff:	84 c0                	test   %al,%al
 8426801:	74 07                	je     842680a <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0x48>
 8426803:	b8 02 00 00 00       	mov    $0x2,%eax
 8426808:	eb 7f                	jmp    8426889 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xc7>
 842680a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8426811:	8b 45 0c             	mov    0xc(%ebp),%eax
 8426814:	89 04 24             	mov    %eax,(%esp)
 8426817:	e8 50 bb cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842681c:	85 c0                	test   %eax,%eax
 842681e:	0f 95 c0             	setne  %al
 8426821:	84 c0                	test   %al,%al
 8426823:	74 5f                	je     8426884 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xc2>
 8426825:	8b 45 0c             	mov    0xc(%ebp),%eax
 8426828:	89 04 24             	mov    %eax,(%esp)
 842682b:	e8 8c dc fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 8426830:	83 f0 01             	xor    $0x1,%eax
 8426833:	84 c0                	test   %al,%al
 8426835:	75 21                	jne    8426858 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0x96>
 8426837:	8d 45 f4             	lea    -0xc(%ebp),%eax
 842683a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842683e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426845:	00 
 8426846:	8b 45 0c             	mov    0xc(%ebp),%eax
 8426849:	89 04 24             	mov    %eax,(%esp)
 842684c:	e8 db 00 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8426851:	83 f0 01             	xor    $0x1,%eax
 8426854:	84 c0                	test   %al,%al
 8426856:	74 07                	je     842685f <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0x9d>
 8426858:	b8 01 00 00 00       	mov    $0x1,%eax
 842685d:	eb 05                	jmp    8426864 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xa2>
 842685f:	b8 00 00 00 00       	mov    $0x0,%eax
 8426864:	84 c0                	test   %al,%al
 8426866:	74 07                	je     842686f <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xad>
 8426868:	b8 02 00 00 00       	mov    $0x2,%eax
 842686d:	eb 1a                	jmp    8426889 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xc7>
 842686f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426872:	85 c0                	test   %eax,%eax
 8426874:	74 07                	je     842687d <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xbb>
 8426876:	b8 18 00 00 00       	mov    $0x18,%eax
 842687b:	eb 05                	jmp    8426882 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xc0>
 842687d:	b8 14 00 00 00       	mov    $0x14,%eax
 8426882:	eb 05                	jmp    8426889 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_+0xc7>
 8426884:	b8 00 00 00 00       	mov    $0x0,%eax
 8426889:	c9                   	leave
 842688a:	c3                   	ret
 842688b:	90                   	nop

```

```c
// DB_ReqChangeCharacName::_hasSameCharacName @ 0x84267c2

/* DB_ReqChangeCharacName::_hasSameCharacName(MySQL*, char const*, char const*) */

undefined4 __thiscall
DB_ReqChangeCharacName::_hasSameCharacName
          (DB_ReqChangeCharacName *this,MySQL *param_1,char *param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10 [3];
  
  MySQL::set_query(param_1,"seLect delete_flag from %s.charac_info where charac_name=\'%s\'",param_2
                   ,param_3);
  cVar2 = MySQL::exec(param_1,true);
  if (cVar2 == '\x01') {
    local_10[0] = 0;
    iVar4 = MySQL::get_n_rows(param_1);
    if (iVar4 == 0) {
      uVar3 = 0;
    }
    else {
      cVar2 = MySQL::fetch(param_1);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::get_int(param_1,0,local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar3 = 2;
      }
      else if (local_10[0] == 0) {
        uVar3 = 0x14;
      }
      else {
        uVar3 = 0x18;
      }
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

```

---

## _sendResult

```asm
// === 084266a4 DB_ReqChangeCharacName::_sendResult  [0x084266a4-0x84267c1] ===
 84266a4:	55                   	push   %ebp
 84266a5:	89 e5                	mov    %esp,%ebp
 84266a7:	56                   	push   %esi
 84266a8:	53                   	push   %ebx
 84266a9:	83 ec 20             	sub    $0x20,%esp
 84266ac:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84266b1:	c7 44 24 08 f8 64 00 	movl   $0x64f8,0x8(%esp)
 84266b8:	00 
 84266b9:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84266c0:	08 
 84266c1:	89 04 24             	mov    %eax,(%esp)
 84266c4:	e8 bd 93 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84266c9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84266d0:	00 
 84266d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 84266d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84266d8:	89 04 24             	mov    %eax,(%esp)
 84266db:	e8 46 25 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84266e0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84266e3:	89 04 24             	mov    %eax,(%esp)
 84266e6:	e8 5b 25 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84266eb:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 84266f2:	00 
 84266f3:	89 04 24             	mov    %eax,(%esp)
 84266f6:	e8 5b 25 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84266fb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84266fe:	89 04 24             	mov    %eax,(%esp)
 8426701:	e8 40 25 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8426706:	8b 55 10             	mov    0x10(%ebp),%edx
 8426709:	89 54 24 04          	mov    %edx,0x4(%esp)
 842670d:	89 04 24             	mov    %eax,(%esp)
 8426710:	e8 41 25 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426715:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426718:	89 04 24             	mov    %eax,(%esp)
 842671b:	e8 2e 25 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8426720:	89 04 24             	mov    %eax,(%esp)
 8426723:	e8 96 b9 02 00       	call   84520be <_ZN12CStreamGuard11GetInBufferI22SIG_CHANGE_CHARAC_NAMEEEPT_v>
 8426728:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842672b:	8b 45 0c             	mov    0xc(%ebp),%eax
 842672e:	8b 50 24             	mov    0x24(%eax),%edx
 8426731:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426734:	89 50 28             	mov    %edx,0x28(%eax)
 8426737:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842673a:	8b 55 14             	mov    0x14(%ebp),%edx
 842673d:	89 50 24             	mov    %edx,0x24(%eax)
 8426740:	8b 45 0c             	mov    0xc(%ebp),%eax
 8426743:	8b 10                	mov    (%eax),%edx
 8426745:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426748:	89 10                	mov    %edx,(%eax)
 842674a:	8b 45 0c             	mov    0xc(%ebp),%eax
 842674d:	8b 50 28             	mov    0x28(%eax),%edx
 8426750:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426753:	89 50 2c             	mov    %edx,0x2c(%eax)
 8426756:	8b 45 0c             	mov    0xc(%ebp),%eax
 8426759:	8d 50 04             	lea    0x4(%eax),%edx
 842675c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842675f:	83 c0 04             	add    $0x4,%eax
 8426762:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 8426769:	00 
 842676a:	89 54 24 04          	mov    %edx,0x4(%esp)
 842676e:	89 04 24             	mov    %eax,(%esp)
 8426771:	e8 5a 71 c5 ff       	call   807d8d0 <strncpy@plt>
 8426776:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842677b:	8d 55 ec             	lea    -0x14(%ebp),%edx
 842677e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8426782:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8426789:	00 
 842678a:	89 04 24             	mov    %eax,(%esp)
 842678d:	e8 4c a8 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8426792:	eb 1b                	jmp    84267af <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii+0x10b>
 8426794:	89 d3                	mov    %edx,%ebx
 8426796:	89 c6                	mov    %eax,%esi
 8426798:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842679b:	89 04 24             	mov    %eax,(%esp)
 842679e:	e8 2f 61 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84267a3:	89 f0                	mov    %esi,%eax
 84267a5:	89 da                	mov    %ebx,%edx
 84267a7:	89 04 24             	mov    %eax,(%esp)
 84267aa:	e8 a1 cf 6b 00       	call   8ae3750 <_Unwind_Resume>
 84267af:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84267b2:	89 04 24             	mov    %eax,(%esp)
 84267b5:	e8 18 61 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84267ba:	83 c4 20             	add    $0x20,%esp
 84267bd:	5b                   	pop    %ebx
 84267be:	5e                   	pop    %esi
 84267bf:	5d                   	pop    %ebp
 84267c0:	c3                   	ret
 84267c1:	90                   	nop

```

```c
// DB_ReqChangeCharacName::_sendResult @ 0x84266a4

/* DB_ReqChangeCharacName::_sendResult(SIG_CHANGE_CHARAC_NAME const*, int, int) */

void __thiscall
DB_ReqChangeCharacName::_sendResult
          (DB_ReqChangeCharacName *this,SIG_CHANGE_CHARAC_NAME *param_1,int param_2,int param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_CHANGE_CHARAC_NAME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x64f8);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084266f6 to 08426791 has its CatchHandler @ 08426794 */
  CStreamGuard::operator<<(pCVar2,0xc3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHANGE_CHARAC_NAME>(pCVar2);
  *(undefined4 *)(local_10 + 0x28) = *(undefined4 *)(param_1 + 0x24);
  *(int *)(local_10 + 0x24) = param_3;
  *(undefined4 *)local_10 = *(undefined4 *)param_1;
  *(undefined4 *)(local_10 + 0x2c) = *(undefined4 *)(param_1 + 0x28);
  strncpy((char *)(local_10 + 4),(char *)(param_1 + 4),0x1d);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## dispatch

```asm
// === 084262ea DB_ReqChangeCharacName::dispatch  [0x084262ea-0x842658f] ===
 84262ea:	55                   	push   %ebp
 84262eb:	89 e5                	mov    %esp,%ebp
 84262ed:	57                   	push   %edi
 84262ee:	53                   	push   %ebx
 84262ef:	83 ec 60             	sub    $0x60,%esp
 84262f2:	8b 45 08             	mov    0x8(%ebp),%eax
 84262f5:	8b 55 14             	mov    0x14(%ebp),%edx
 84262f8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84262fc:	8b 55 10             	mov    0x10(%ebp),%edx
 84262ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8426303:	8b 55 0c             	mov    0xc(%ebp),%edx
 8426306:	89 54 24 04          	mov    %edx,0x4(%esp)
 842630a:	89 04 24             	mov    %eax,(%esp)
 842630d:	e8 6a 5c fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 8426312:	83 f0 01             	xor    $0x1,%eax
 8426315:	84 c0                	test   %al,%al
 8426317:	74 0a                	je     8426323 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x39>
 8426319:	b8 00 00 00 00       	mov    $0x0,%eax
 842631e:	e9 65 02 00 00       	jmp    8426588 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x29e>
 8426323:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8426328:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 842632f:	00 
 8426330:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8426337:	00 
 8426338:	89 04 24             	mov    %eax,(%esp)
 842633b:	e8 fe ee fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8426340:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8426343:	8b 45 14             	mov    0x14(%ebp),%eax
 8426346:	89 04 24             	mov    %eax,(%esp)
 8426349:	e8 1c bd 02 00       	call   845206a <_ZN6Stream12GetOutBufferI22SIG_CHANGE_CHARAC_NAMEEEPT_v>
 842634e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8426351:	8d 5d a8             	lea    -0x58(%ebp),%ebx
 8426354:	b8 00 00 00 00       	mov    $0x0,%eax
 8426359:	ba 0f 00 00 00       	mov    $0xf,%edx
 842635e:	89 df                	mov    %ebx,%edi
 8426360:	89 d1                	mov    %edx,%ecx
 8426362:	f3 ab                	rep stos %eax,%es:(%edi)
 8426364:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8426367:	83 c0 04             	add    $0x4,%eax
 842636a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842636e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8426371:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426375:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8426378:	89 04 24             	mov    %eax,(%esp)
 842637b:	e8 2a e5 fc ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8426380:	c7 45 e4 02 00 00 00 	movl   $0x2,-0x1c(%ebp)
 8426387:	e8 f5 5d ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842638c:	8d 50 68             	lea    0x68(%eax),%edx
 842638f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8426392:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426396:	89 14 24             	mov    %edx,(%esp)
 8426399:	e8 e4 6b cc ff       	call   80ecf82 <_ZNSt3mapI18ENUM_DB_HANDLE_IDX12STDBConnInfoSt4lessIS0_ESaISt4pairIKS0_S1_EEEixERS5_>
 842639e:	83 c0 42             	add    $0x42,%eax
 84263a1:	8d 55 a8             	lea    -0x58(%ebp),%edx
 84263a4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84263a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84263ac:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84263af:	89 44 24 04          	mov    %eax,0x4(%esp)
 84263b3:	8b 45 08             	mov    0x8(%ebp),%eax
 84263b6:	89 04 24             	mov    %eax,(%esp)
 84263b9:	e8 04 04 00 00       	call   84267c2 <_ZN22DB_ReqChangeCharacName18_hasSameCharacNameEP5MySQLPKcS3_>
 84263be:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84263c1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84263c5:	74 2a                	je     84263f1 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x107>
 84263c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84263ca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84263ce:	8b 45 10             	mov    0x10(%ebp),%eax
 84263d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 84263d5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84263d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 84263dc:	8b 45 08             	mov    0x8(%ebp),%eax
 84263df:	89 04 24             	mov    %eax,(%esp)
 84263e2:	e8 bd 02 00 00       	call   84266a4 <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii>
 84263e7:	b8 01 00 00 00       	mov    $0x1,%eax
 84263ec:	e9 97 01 00 00       	jmp    8426588 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x29e>
 84263f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84263f4:	8b 00                	mov    (%eax),%eax
 84263f6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84263fa:	8d 45 a8             	lea    -0x58(%ebp),%eax
 84263fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426401:	c7 44 24 04 24 e9 c4 	movl   $0x8c4e924,0x4(%esp)
 8426408:	08 
 8426409:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842640c:	89 04 24             	mov    %eax,(%esp)
 842640f:	e8 ac dd fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8426414:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 842641b:	00 
 842641c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 842641f:	89 04 24             	mov    %eax,(%esp)
 8426422:	e8 ff de fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 8426427:	83 f0 01             	xor    $0x1,%eax
 842642a:	84 c0                	test   %al,%al
 842642c:	75 11                	jne    842643f <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x155>
 842642e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8426431:	89 04 24             	mov    %eax,(%esp)
 8426434:	e8 d7 de fc ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8426439:	09 d0                	or     %edx,%eax
 842643b:	85 c0                	test   %eax,%eax
 842643d:	75 07                	jne    8426446 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x15c>
 842643f:	b8 01 00 00 00       	mov    $0x1,%eax
 8426444:	eb 05                	jmp    842644b <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x161>
 8426446:	b8 00 00 00 00       	mov    $0x0,%eax
 842644b:	84 c0                	test   %al,%al
 842644d:	74 2b                	je     842647a <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x190>
 842644f:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8426456:	00 
 8426457:	8b 45 10             	mov    0x10(%ebp),%eax
 842645a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842645e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8426461:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426465:	8b 45 08             	mov    0x8(%ebp),%eax
 8426468:	89 04 24             	mov    %eax,(%esp)
 842646b:	e8 34 02 00 00       	call   84266a4 <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii>
 8426470:	b8 01 00 00 00       	mov    $0x1,%eax
 8426475:	e9 0e 01 00 00       	jmp    8426588 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x29e>
 842647a:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 842647f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8426486:	00 
 8426487:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 842648e:	00 
 842648f:	89 04 24             	mov    %eax,(%esp)
 8426492:	e8 a7 ed fc ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8426497:	89 45 f4             	mov    %eax,-0xc(%ebp)
 842649a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842649d:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 84264a1:	0f b6 d0             	movzbl %al,%edx
 84264a4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84264a7:	8b 00                	mov    (%eax),%eax
 84264a9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84264ad:	89 44 24 08          	mov    %eax,0x8(%esp)
 84264b1:	c7 44 24 04 74 e9 c4 	movl   $0x8c4e974,0x4(%esp)
 84264b8:	08 
 84264b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84264bc:	89 04 24             	mov    %eax,(%esp)
 84264bf:	e8 fc dc fc ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84264c4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84264c7:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 84264ce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84264d5:	00 
 84264d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84264d9:	89 04 24             	mov    %eax,(%esp)
 84264dc:	e8 45 de fc ff       	call   83f4326 <_ZN5MySQL4execEb>
 84264e1:	83 f0 01             	xor    $0x1,%eax
 84264e4:	84 c0                	test   %al,%al
 84264e6:	75 12                	jne    84264fa <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x210>
 84264e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84264eb:	89 04 24             	mov    %eax,(%esp)
 84264ee:	e8 c9 df fc ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 84264f3:	83 f0 01             	xor    $0x1,%eax
 84264f6:	84 c0                	test   %al,%al
 84264f8:	74 07                	je     8426501 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x217>
 84264fa:	b8 01 00 00 00       	mov    $0x1,%eax
 84264ff:	eb 05                	jmp    8426506 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x21c>
 8426501:	b8 00 00 00 00       	mov    $0x0,%eax
 8426506:	84 c0                	test   %al,%al
 8426508:	74 0a                	je     8426514 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x22a>
 842650a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842650d:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8426514:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426517:	89 04 24             	mov    %eax,(%esp)
 842651a:	e8 4d be cb ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 842651f:	85 c0                	test   %eax,%eax
 8426521:	0f 94 c0             	sete   %al
 8426524:	84 c0                	test   %al,%al
 8426526:	74 0c                	je     8426534 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x24a>
 8426528:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842652b:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8426532:	eb 2e                	jmp    8426562 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x278>
 8426534:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8426537:	83 c0 28             	add    $0x28,%eax
 842653a:	89 44 24 08          	mov    %eax,0x8(%esp)
 842653e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8426545:	00 
 8426546:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426549:	89 04 24             	mov    %eax,(%esp)
 842654c:	e8 a1 bd cb ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 8426551:	83 f0 01             	xor    $0x1,%eax
 8426554:	84 c0                	test   %al,%al
 8426556:	74 0a                	je     8426562 <_ZN22DB_ReqChangeCharacName8dispatchEiiP6Stream+0x278>
 8426558:	8b 45 ec             	mov    -0x14(%ebp),%eax
 842655b:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8426562:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8426569:	00 
 842656a:	8b 45 10             	mov    0x10(%ebp),%eax
 842656d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8426571:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8426574:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426578:	8b 45 08             	mov    0x8(%ebp),%eax
 842657b:	89 04 24             	mov    %eax,(%esp)
 842657e:	e8 21 01 00 00       	call   84266a4 <_ZN22DB_ReqChangeCharacName11_sendResultEPK22SIG_CHANGE_CHARAC_NAMEii>
 8426583:	b8 01 00 00 00       	mov    $0x1,%eax
 8426588:	83 c4 60             	add    $0x60,%esp
 842658b:	5b                   	pop    %ebx
 842658c:	5f                   	pop    %edi
 842658d:	5d                   	pop    %ebp
 842658e:	c3                   	ret
 842658f:	90                   	nop

```

```c
// DB_ReqChangeCharacName::dispatch @ 0x84262ea

/* DB_ReqChangeCharacName::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_ReqChangeCharacName::dispatch
          (DB_ReqChangeCharacName *this,int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  byte bVar5;
  longlong lVar6;
  Stream *pSVar7;
  char local_5c [60];
  undefined4 local_20;
  MySQL *local_1c;
  SIG_CHANGE_CHARAC_NAME *local_18;
  int local_14;
  MySQL *local_10;
  
  bVar5 = 0;
  pSVar7 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0,pSVar7);
  local_18 = Stream::GetOutBuffer<SIG_CHANGE_CHARAC_NAME>(param_3);
  pcVar4 = local_5c;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar5 * -2 + 1) * 4;
  }
  MySQL::escape_string(local_1c,local_5c,(char *)(local_18 + 4));
  local_20 = 2;
  iVar3 = G_CEnvironment();
  iVar3 = std::
          map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
          ::operator[]((map<ENUM_DB_HANDLE_IDX,STDBConnInfo,std::less<ENUM_DB_HANDLE_IDX>,std::allocator<std::pair<ENUM_DB_HANDLE_IDX_const,STDBConnInfo>>>
                        *)(iVar3 + 0x68),(ENUM_DB_HANDLE_IDX *)&local_20);
  local_14 = _hasSameCharacName(this,local_1c,(char *)(iVar3 + 0x42),local_5c);
  if (local_14 == 0) {
    MySQL::set_query(local_1c,
                     "upDate charac_info set charac_name=\'%s\' where charac_no=%d and delete_flag=0"
                     ,local_5c,*(undefined4 *)local_18);
    cVar2 = MySQL::exec(local_1c,true);
    if ((cVar2 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_1c), lVar6 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,8,0);
      MySQL::set_query(local_10,
                       "seLect guild_id from guild_member where charac_no=%d and member_flag=1 and server_id=%d"
                       ,*(undefined4 *)local_18,(uint)(byte)local_18[0x2c]);
      *(undefined4 *)(local_18 + 0x28) = 0;
      cVar2 = MySQL::exec(local_10,true);
      if ((cVar2 == '\x01') && (cVar2 = MySQL::fetch(local_10), cVar2 == '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *(undefined4 *)(local_18 + 0x28) = 0;
      }
      iVar3 = MySQL::get_n_rows(local_10);
      if (iVar3 == 0) {
        *(undefined4 *)(local_18 + 0x28) = 0;
      }
      else {
        cVar2 = MySQL::get_uint(local_10,0,(uint *)(local_18 + 0x28));
        if (cVar2 != '\x01') {
          *(undefined4 *)(local_18 + 0x28) = 0;
        }
      }
      _sendResult(this,local_18,param_2,0);
      return 1;
    }
    _sendResult(this,local_18,param_2,2);
    return 1;
  }
  _sendResult(this,local_18,param_2,local_14);
  return 1;
}

```

---

## makeRequest

```asm
// === 08426590 DB_ReqChangeCharacName::makeRequest  [0x08426590-0x84266a3] ===
 8426590:	55                   	push   %ebp
 8426591:	89 e5                	mov    %esp,%ebp
 8426593:	56                   	push   %esi
 8426594:	53                   	push   %ebx
 8426595:	83 ec 20             	sub    $0x20,%esp
 8426598:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 842659d:	c7 44 24 08 de 64 00 	movl   $0x64de,0x8(%esp)
 84265a4:	00 
 84265a5:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 84265ac:	08 
 84265ad:	89 04 24             	mov    %eax,(%esp)
 84265b0:	e8 d1 94 e6 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 84265b5:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84265bc:	00 
 84265bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84265c1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84265c4:	89 04 24             	mov    %eax,(%esp)
 84265c7:	e8 5a 26 ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 84265cc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84265cf:	89 04 24             	mov    %eax,(%esp)
 84265d2:	e8 6f 26 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84265d7:	c7 44 24 04 c3 00 00 	movl   $0xc3,0x4(%esp)
 84265de:	00 
 84265df:	89 04 24             	mov    %eax,(%esp)
 84265e2:	e8 6f 26 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84265e7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84265ea:	89 04 24             	mov    %eax,(%esp)
 84265ed:	e8 54 26 ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84265f2:	8b 55 08             	mov    0x8(%ebp),%edx
 84265f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84265f9:	89 04 24             	mov    %eax,(%esp)
 84265fc:	e8 55 26 ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8426601:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426604:	89 04 24             	mov    %eax,(%esp)
 8426607:	e8 42 26 ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 842660c:	89 04 24             	mov    %eax,(%esp)
 842660f:	e8 aa ba 02 00       	call   84520be <_ZN12CStreamGuard11GetInBufferI22SIG_CHANGE_CHARAC_NAMEEEPT_v>
 8426614:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8426617:	8b 45 f4             	mov    -0xc(%ebp),%eax
 842661a:	8b 55 0c             	mov    0xc(%ebp),%edx
 842661d:	89 10                	mov    %edx,(%eax)
 842661f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426622:	8d 50 04             	lea    0x4(%eax),%edx
 8426625:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 842662c:	00 
 842662d:	8b 45 10             	mov    0x10(%ebp),%eax
 8426630:	89 44 24 04          	mov    %eax,0x4(%esp)
 8426634:	89 14 24             	mov    %edx,(%esp)
 8426637:	e8 94 72 c5 ff       	call   807d8d0 <strncpy@plt>
 842663c:	8b 55 14             	mov    0x14(%ebp),%edx
 842663f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426642:	89 50 24             	mov    %edx,0x24(%eax)
 8426645:	e8 37 5b ca ff       	call   80cc181 <_Z14G_CEnvironmentv>
 842664a:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8426650:	89 c2                	mov    %eax,%edx
 8426652:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8426655:	88 50 2c             	mov    %dl,0x2c(%eax)
 8426658:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 842665d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8426660:	89 54 24 08          	mov    %edx,0x8(%esp)
 8426664:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 842666b:	00 
 842666c:	89 04 24             	mov    %eax,(%esp)
 842666f:	e8 6a a9 14 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8426674:	eb 1b                	jmp    8426691 <_ZN22DB_ReqChangeCharacName11makeRequestEiiPKci+0x101>
 8426676:	89 d3                	mov    %edx,%ebx
 8426678:	89 c6                	mov    %eax,%esi
 842667a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 842667d:	89 04 24             	mov    %eax,(%esp)
 8426680:	e8 4d 62 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8426685:	89 f0                	mov    %esi,%eax
 8426687:	89 da                	mov    %ebx,%edx
 8426689:	89 04 24             	mov    %eax,(%esp)
 842668c:	e8 bf d0 6b 00       	call   8ae3750 <_Unwind_Resume>
 8426691:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8426694:	89 04 24             	mov    %eax,(%esp)
 8426697:	e8 36 62 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 842669c:	83 c4 20             	add    $0x20,%esp
 842669f:	5b                   	pop    %ebx
 84266a0:	5e                   	pop    %esi
 84266a1:	5d                   	pop    %ebp
 84266a2:	c3                   	ret
 84266a3:	90                   	nop

```

```c
// DB_ReqChangeCharacName::makeRequest @ 0x8426590

/* DB_ReqChangeCharacName::makeRequest(int, int, char const*, int) */

void DB_ReqChangeCharacName::makeRequest(int param_1,int param_2,char *param_3,int param_4)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  CStreamGuard local_18 [8];
  SIG_CHANGE_CHARAC_NAME *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x64de);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 084265e2 to 08426673 has its CatchHandler @ 08426676 */
  CStreamGuard::operator<<(pCVar2,0xc3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_CHANGE_CHARAC_NAME>(pCVar2);
  *(int *)local_10 = param_2;
  strncpy((char *)(local_10 + 4),param_3,0x1d);
  *(int *)(local_10 + 0x24) = param_4;
  iVar3 = G_CEnvironment();
  local_10[0x2c] = SUB41(*(undefined4 *)(iVar3 + 0x378),0);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

