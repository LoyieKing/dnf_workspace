# advancealtar__DBAndExchangeServerProc

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getFromMemory

```asm
// === 0813394c advancealtar::DBAndExchangeServerProc::getFromMemory  [0x0813394c-0x81339af] ===
 813394c:	55                   	push   %ebp
 813394d:	89 e5                	mov    %esp,%ebp
 813394f:	83 ec 18             	sub    $0x18,%esp
 8133952:	8b 45 08             	mov    0x8(%ebp),%eax
 8133955:	89 04 24             	mov    %eax,(%esp)
 8133958:	e8 f1 82 f9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 813395d:	89 c2                	mov    %eax,%edx
 813395f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133962:	89 10                	mov    %edx,(%eax)
 8133964:	8b 45 08             	mov    0x8(%ebp),%eax
 8133967:	8d 90 60 df 08 00    	lea    0x8df60(%eax),%edx
 813396d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8133970:	89 44 24 04          	mov    %eax,0x4(%esp)
 8133974:	89 14 24             	mov    %edx,(%esp)
 8133977:	e8 94 dd ff ff       	call   8131710 <_ZNK12advancealtar25CharacAdvanceAltarManager27getCharacAdvanceAltarDbDataERNS_25_CharacAdvanceAltarDbDataE>
 813397c:	8b 45 08             	mov    0x8(%ebp),%eax
 813397f:	05 60 df 08 00       	add    $0x8df60,%eax
 8133984:	89 04 24             	mov    %eax,(%esp)
 8133987:	e8 14 dd ff ff       	call   81316a0 <_ZNK12advancealtar25CharacAdvanceAltarManager9isUpdatedEv>
 813398c:	84 c0                	test   %al,%al
 813398e:	74 1c                	je     81339ac <_ZN12advancealtar23DBAndExchangeServerProc13getFromMemoryERK5CUserRNS_25_CharacAdvanceAltarDbDataE+0x60>
 8133990:	8b 45 08             	mov    0x8(%ebp),%eax
 8133993:	89 04 24             	mov    %eax,(%esp)
 8133996:	e8 fb 52 f9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 813399b:	8b 55 0c             	mov    0xc(%ebp),%edx
 813399e:	89 54 24 04          	mov    %edx,0x4(%esp)
 81339a2:	89 04 24             	mov    %eax,(%esp)
 81339a5:	e8 8e b1 00 00       	call   813eb38 <_ZN12advancealtar9DB_Update11makeRequestEiRKNS_25_CharacAdvanceAltarDbDataE>
 81339aa:	eb 01                	jmp    81339ad <_ZN12advancealtar23DBAndExchangeServerProc13getFromMemoryERK5CUserRNS_25_CharacAdvanceAltarDbDataE+0x61>
 81339ac:	90                   	nop
 81339ad:	c9                   	leave
 81339ae:	c3                   	ret
 81339af:	90                   	nop

```

```c
// advancealtar::DBAndExchangeServerProc::getFromMemory @ 0x813394c

/* advancealtar::DBAndExchangeServerProc::getFromMemory(CUser const&,
   advancealtar::_CharacAdvanceAltarDbData&) */

void advancealtar::DBAndExchangeServerProc::getFromMemory
               (CUser *param_1,_CharacAdvanceAltarDbData *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  *(undefined4 *)param_2 = uVar2;
  CharacAdvanceAltarManager::getCharacAdvanceAltarDbData
            ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),param_2);
  cVar1 = CharacAdvanceAltarManager::isUpdated((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
  if (cVar1 != '\0') {
    iVar3 = CUser::GetUID(param_1);
    DB_Update::makeRequest(iVar3,param_2);
  }
  return;
}

```

---

## requestLoadFromDBAndES

```asm
// === 08133784 advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES  [0x08133784-0x813394b] ===
 8133784:	55                   	push   %ebp
 8133785:	89 e5                	mov    %esp,%ebp
 8133787:	56                   	push   %esi
 8133788:	53                   	push   %ebx
 8133789:	83 ec 20             	sub    $0x20,%esp
 813378c:	8b 45 08             	mov    0x8(%ebp),%eax
 813378f:	05 60 df 08 00       	add    $0x8df60,%eax
 8133794:	89 04 24             	mov    %eax,(%esp)
 8133797:	e8 c4 de ff ff       	call   8131660 <_ZN12advancealtar25CharacAdvanceAltarManager5resetEv>
 813379c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81337a1:	c7 44 24 08 3a 0c 00 	movl   $0xc3a,0x8(%esp)
 81337a8:	00 
 81337a9:	c7 44 24 04 5c c7 b6 	movl   $0x8b6c75c,0x4(%esp)
 81337b0:	08 
 81337b1:	89 04 24             	mov    %eax,(%esp)
 81337b4:	e8 cd c2 15 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81337b9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81337c0:	00 
 81337c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81337c5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81337c8:	89 04 24             	mov    %eax,(%esp)
 81337cb:	e8 56 54 f9 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81337d0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81337d3:	89 04 24             	mov    %eax,(%esp)
 81337d6:	e8 6b 54 f9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81337db:	c7 44 24 04 19 00 00 	movl   $0x19,0x4(%esp)
 81337e2:	00 
 81337e3:	89 04 24             	mov    %eax,(%esp)
 81337e6:	e8 6b 54 f9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81337eb:	8b 45 08             	mov    0x8(%ebp),%eax
 81337ee:	89 04 24             	mov    %eax,(%esp)
 81337f1:	e8 a0 54 f9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81337f6:	89 c3                	mov    %eax,%ebx
 81337f8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81337fb:	89 04 24             	mov    %eax,(%esp)
 81337fe:	e8 43 54 f9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8133803:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8133807:	89 04 24             	mov    %eax,(%esp)
 813380a:	e8 47 54 f9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 813380f:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 8133816:	00 
 8133817:	8b 45 08             	mov    0x8(%ebp),%eax
 813381a:	89 04 24             	mov    %eax,(%esp)
 813381d:	e8 ac 10 00 00       	call   81348ce <_ZN5CUser17DisableCharacInfoE13CACHE_SECTION>
 8133822:	8b 45 08             	mov    0x8(%ebp),%eax
 8133825:	89 04 24             	mov    %eax,(%esp)
 8133828:	e8 d1 10 00 00       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 813382d:	84 c0                	test   %al,%al
 813382f:	74 48                	je     8133879 <_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT+0xf5>
 8133831:	8b 45 08             	mov    0x8(%ebp),%eax
 8133834:	89 04 24             	mov    %eax,(%esp)
 8133837:	e8 b4 10 00 00       	call   81348f0 <_ZN5CUser21GetLastLoginChannelNoEv>
 813383c:	89 c3                	mov    %eax,%ebx
 813383e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8133841:	89 04 24             	mov    %eax,(%esp)
 8133844:	e8 fd 53 f9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8133849:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 813384d:	89 04 24             	mov    %eax,(%esp)
 8133850:	e8 01 54 f9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8133855:	8b 45 08             	mov    0x8(%ebp),%eax
 8133858:	89 04 24             	mov    %eax,(%esp)
 813385b:	e8 82 10 00 00       	call   81348e2 <_ZN5CUser20GetLastLoginCharacNoEv>
 8133860:	89 c3                	mov    %eax,%ebx
 8133862:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8133865:	89 04 24             	mov    %eax,(%esp)
 8133868:	e8 d9 53 f9 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 813386d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8133871:	89 04 24             	mov    %eax,(%esp)
 8133874:	e8 dd 53 f9 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8133879:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813387c:	89 04 24             	mov    %eax,(%esp)
 813387f:	e8 ca 53 f9 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8133884:	89 04 24             	mov    %eax,(%esp)
 8133887:	e8 1a 2f 00 00       	call   81367a6 <_ZN12CStreamGuard11GetInBufferIN12advancealtar25_CharacAdvanceAltarDbDataEEEPT_v>
 813388c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 813388f:	c7 44 24 08 1c 05 00 	movl   $0x51c,0x8(%esp)
 8133896:	00 
 8133897:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 813389e:	00 
 813389f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81338a2:	89 04 24             	mov    %eax,(%esp)
 81338a5:	e8 16 a4 f4 ff       	call   807dcc0 <memset@plt>
 81338aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81338ad:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81338b1:	0f be c0             	movsbl %al,%eax
 81338b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81338b8:	8b 45 08             	mov    0x8(%ebp),%eax
 81338bb:	89 04 24             	mov    %eax,(%esp)
 81338be:	e8 dd a6 51 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81338c3:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81338c6:	89 02                	mov    %eax,(%edx)
 81338c8:	8b 45 08             	mov    0x8(%ebp),%eax
 81338cb:	89 04 24             	mov    %eax,(%esp)
 81338ce:	e8 2b 10 00 00       	call   81348fe <_ZN5CUser22IsValidLastLoginCharacEv>
 81338d3:	84 c0                	test   %al,%al
 81338d5:	74 23                	je     81338fa <_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT+0x176>
 81338d7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81338dc:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81338df:	89 54 24 08          	mov    %edx,0x8(%esp)
 81338e3:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81338ea:	00 
 81338eb:	89 04 24             	mov    %eax,(%esp)
 81338ee:	e8 eb d6 43 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81338f3:	bb 01 00 00 00       	mov    $0x1,%ebx
 81338f8:	eb 3e                	jmp    8133938 <_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT+0x1b4>
 81338fa:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81338ff:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8133902:	89 54 24 08          	mov    %edx,0x8(%esp)
 8133906:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 813390d:	00 
 813390e:	89 04 24             	mov    %eax,(%esp)
 8133911:	e8 c8 d6 43 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8133916:	bb 01 00 00 00       	mov    $0x1,%ebx
 813391b:	eb 1b                	jmp    8133938 <_ZN12advancealtar23DBAndExchangeServerProc22requestLoadFromDBAndESER5CUserR17MSG_CHARAC_SELECT+0x1b4>
 813391d:	89 d3                	mov    %edx,%ebx
 813391f:	89 c6                	mov    %eax,%esi
 8133921:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8133924:	89 04 24             	mov    %eax,(%esp)
 8133927:	e8 a6 8f 4e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 813392c:	89 f0                	mov    %esi,%eax
 813392e:	89 da                	mov    %ebx,%edx
 8133930:	89 04 24             	mov    %eax,(%esp)
 8133933:	e8 18 fe 9a 00       	call   8ae3750 <_Unwind_Resume>
 8133938:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813393b:	89 04 24             	mov    %eax,(%esp)
 813393e:	e8 8f 8f 4e 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8133943:	89 d8                	mov    %ebx,%eax
 8133945:	83 c4 20             	add    $0x20,%esp
 8133948:	5b                   	pop    %ebx
 8133949:	5e                   	pop    %esi
 813394a:	5d                   	pop    %ebp
 813394b:	c3                   	ret

```

```c
// advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES @ 0x8133784

/* advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES(CUser&, MSG_CHARAC_SELECT&) */

undefined4
advancealtar::DBAndExchangeServerProc::requestLoadFromDBAndES
          (CUser *param_1,MSG_CHARAC_SELECT *param_2)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CStreamGuard local_18 [8];
  _CharacAdvanceAltarDbData *local_10;
  
  CharacAdvanceAltarManager::reset((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localglobal/global_AdvanceAltar.cpp",0xc3a
                              );
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 081337e6 to 08133915 has its CatchHandler @ 0813391d */
  CStreamGuard::operator<<(pCVar3,0x19);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  CUser::DisableCharacInfo(param_1,10);
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 != '\0') {
    iVar4 = CUser::GetLastLoginChannelNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
    iVar4 = CUser::GetLastLoginCharacNo(param_1);
    pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
    CStreamGuard::operator<<(pCVar3,iVar4);
  }
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<advancealtar::_CharacAdvanceAltarDbData>(pCVar3);
  memset(local_10,0,0x51c);
  uVar5 = CUser::get_charac_no(param_1,(int)(char)param_2[0xd]);
  *(undefined4 *)local_10 = uVar5;
  cVar1 = CUser::IsValidLastLoginCharac(param_1);
  if (cVar1 == '\0') {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  }
  else {
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_18);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

