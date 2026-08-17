# Dispatcher_BossDieCheck

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cd71e Dispatcher_BossDieCheck::check_error  [0x081cd71e-0x81cd7a1] ===
 81cd71e:	55                   	push   %ebp
 81cd71f:	89 e5                	mov    %esp,%ebp
 81cd721:	53                   	push   %ebx
 81cd722:	83 ec 34             	sub    $0x34,%esp
 81cd725:	8b 45 14             	mov    0x14(%ebp),%eax
 81cd728:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cd72b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cd72e:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 81cd732:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd735:	89 04 24             	mov    %eax,(%esp)
 81cd738:	e8 11 27 06 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81cd73d:	0f bf d8             	movswl %ax,%ebx
 81cd740:	e8 49 ea ef ff       	call   80cc18e <_Z14G_CGameManagerv>
 81cd745:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cd749:	89 04 24             	mov    %eax,(%esp)
 81cd74c:	e8 e1 77 0c 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81cd751:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd754:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cd758:	75 3d                	jne    81cd797 <_ZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBase+0x79>
 81cd75a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd761:	00 
 81cd762:	c7 44 24 08 8b 25 00 	movl   $0x258b,0x8(%esp)
 81cd769:	00 
 81cd76a:	c7 44 24 04 40 48 bd 	movl   $0x8bd4840,0x4(%esp)
 81cd771:	08 
 81cd772:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cd775:	89 04 24             	mov    %eax,(%esp)
 81cd778:	e8 9b 1f 38 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81cd77d:	c7 44 24 04 c8 17 bc 	movl   $0x8bc17c8,0x4(%esp)
 81cd784:	08 
 81cd785:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81cd788:	89 04 24             	mov    %eax,(%esp)
 81cd78b:	e8 f8 1f 38 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81cd790:	b8 08 00 00 00       	mov    $0x8,%eax
 81cd795:	eb 05                	jmp    81cd79c <_ZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81cd797:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd79c:	83 c4 34             	add    $0x34,%esp
 81cd79f:	5b                   	pop    %ebx
 81cd7a0:	5d                   	pop    %ebp
 81cd7a1:	c3                   	ret

```

```c
// Dispatcher_BossDieCheck::check_error @ 0x81cd71e

/* Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BossDieCheck::check_error
          (Dispatcher_BossDieCheck *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  cMyTrace local_24 [16];
  ParamBase *local_14;
  int local_10;
  
  local_14 = param_3;
  param_3[8] = (ParamBase)0x0;
  CUser::GetPartyIndex(param_1);
  iVar1 = G_CGameManager();
  local_10 = CGameManager::GetParty(iVar1);
  if (local_10 == 0) {
    cMyTrace::cMyTrace(local_24,
                       "int Dispatcher_BossDieCheck::check_error(CUser*, MSG_BASE&, ParamBase&)",
                       0x258b,0);
    cMyTrace::operator()(local_24,"Party == NULL");
    uVar2 = 8;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## process

```asm
// === 081cd7a2 Dispatcher_BossDieCheck::process  [0x081cd7a2-0x81cda61] ===
 81cd7a2:	55                   	push   %ebp
 81cd7a3:	89 e5                	mov    %esp,%ebp
 81cd7a5:	57                   	push   %edi
 81cd7a6:	56                   	push   %esi
 81cd7a7:	53                   	push   %ebx
 81cd7a8:	83 ec 4c             	sub    $0x4c,%esp
 81cd7ab:	8b 45 14             	mov    0x14(%ebp),%eax
 81cd7ae:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81cd7b1:	8b 45 14             	mov    0x14(%ebp),%eax
 81cd7b4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cd7b8:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd7bb:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cd7bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd7c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd7c6:	8b 45 08             	mov    0x8(%ebp),%eax
 81cd7c9:	89 04 24             	mov    %eax,(%esp)
 81cd7cc:	e8 4d ff ff ff       	call   81cd71e <_ZN23Dispatcher_BossDieCheck11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81cd7d1:	89 c2                	mov    %eax,%edx
 81cd7d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cd7d6:	89 50 04             	mov    %edx,0x4(%eax)
 81cd7d9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cd7dc:	8b 40 04             	mov    0x4(%eax),%eax
 81cd7df:	85 c0                	test   %eax,%eax
 81cd7e1:	7e 0a                	jle    81cd7ed <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81cd7e3:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd7e8:	e9 6a 02 00 00       	jmp    81cda57 <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x2b5>
 81cd7ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cd7f0:	8b 40 04             	mov    0x4(%eax),%eax
 81cd7f3:	85 c0                	test   %eax,%eax
 81cd7f5:	79 32                	jns    81cd829 <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x87>
 81cd7f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd7fa:	89 04 24             	mov    %eax,(%esp)
 81cd7fd:	e8 6c cb f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cd802:	8b 55 dc             	mov    -0x24(%ebp),%edx
 81cd805:	8b 52 04             	mov    0x4(%edx),%edx
 81cd808:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cd80c:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cd810:	c7 44 24 04 e0 47 bd 	movl   $0x8bd47e0,0x4(%esp)
 81cd817:	08 
 81cd818:	c7 04 24 9e 25 00 00 	movl   $0x259e,(%esp)
 81cd81f:	e8 b3 30 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd824:	e9 2e 02 00 00       	jmp    81cda57 <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x2b5>
 81cd829:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd82c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81cd82f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd832:	89 04 24             	mov    %eax,(%esp)
 81cd835:	e8 da 08 48 00       	call   864e114 <_ZNK5CUser25getCurCharacSkillCheckSumEv>
 81cd83a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81cd83d:	8b 52 14             	mov    0x14(%edx),%edx
 81cd840:	39 d0                	cmp    %edx,%eax
 81cd842:	0f 95 c0             	setne  %al
 81cd845:	84 c0                	test   %al,%al
 81cd847:	74 3a                	je     81cd883 <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0xe1>
 81cd849:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd84c:	89 04 24             	mov    %eax,(%esp)
 81cd84f:	e8 06 c1 f2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81cd854:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81cd85b:	00 
 81cd85c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81cd863:	00 
 81cd864:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81cd86b:	00 
 81cd86c:	c7 44 24 08 5c 02 00 	movl   $0x25c,0x8(%esp)
 81cd873:	00 
 81cd874:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cd877:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd87b:	89 04 24             	mov    %eax,(%esp)
 81cd87e:	e8 fb b3 f2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81cd883:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd886:	89 04 24             	mov    %eax,(%esp)
 81cd889:	e8 c0 25 06 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81cd88e:	0f bf d8             	movswl %ax,%ebx
 81cd891:	e8 f8 e8 ef ff       	call   80cc18e <_Z14G_CGameManagerv>
 81cd896:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cd89a:	89 04 24             	mov    %eax,(%esp)
 81cd89d:	e8 90 76 0c 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81cd8a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81cd8a5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cd8a8:	8d 58 10             	lea    0x10(%eax),%ebx
 81cd8ab:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd8ae:	8d 90 3c 0c 00 00    	lea    0xc3c(%eax),%edx
 81cd8b4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81cd8b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd8bb:	89 04 24             	mov    %eax,(%esp)
 81cd8be:	e8 a9 09 ec ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81cd8c3:	83 ec 04             	sub    $0x4,%esp
 81cd8c6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd8c9:	8d 90 3c 0c 00 00    	lea    0xc3c(%eax),%edx
 81cd8cf:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81cd8d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd8d6:	89 04 24             	mov    %eax,(%esp)
 81cd8d9:	e8 6a 09 ec ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 81cd8de:	83 ec 04             	sub    $0x4,%esp
 81cd8e1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81cd8e4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81cd8e8:	8b 55 cc             	mov    -0x34(%ebp),%edx
 81cd8eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cd8ef:	8b 55 d0             	mov    -0x30(%ebp),%edx
 81cd8f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd8f6:	89 04 24             	mov    %eax,(%esp)
 81cd8f9:	e8 4b 95 06 00       	call   8236e49 <_ZSt4findIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEtET_S7_S7_RKT0_>
 81cd8fe:	83 ec 04             	sub    $0x4,%esp
 81cd901:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd904:	8d 90 3c 0c 00 00    	lea    0xc3c(%eax),%edx
 81cd90a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81cd90d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cd911:	89 04 24             	mov    %eax,(%esp)
 81cd914:	e8 53 09 ec ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 81cd919:	83 ec 04             	sub    $0x4,%esp
 81cd91c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81cd91f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd923:	8d 45 c8             	lea    -0x38(%ebp),%eax
 81cd926:	89 04 24             	mov    %eax,(%esp)
 81cd929:	e8 34 cb f1 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 81cd92e:	84 c0                	test   %al,%al
 81cd930:	74 32                	je     81cd964 <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x1c2>
 81cd932:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd935:	8d 88 3c 0c 00 00    	lea    0xc3c(%eax),%ecx
 81cd93b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81cd93e:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81cd941:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cd945:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81cd949:	89 04 24             	mov    %eax,(%esp)
 81cd94c:	e8 3d cb f1 ff       	call   80ea48e <_ZNSt6vectorIiSaIiEE5eraseEN9__gnu_cxx17__normal_iteratorIPiS1_EE>
 81cd951:	83 ec 04             	sub    $0x4,%esp
 81cd954:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cd957:	0f b7 50 10          	movzwl 0x10(%eax),%edx
 81cd95b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cd95e:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81cd962:	eb 0a                	jmp    81cd96e <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x1cc>
 81cd964:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cd967:	c7 40 04 15 00 00 00 	movl   $0x15,0x4(%eax)
 81cd96e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd971:	05 3c 0c 00 00       	add    $0xc3c,%eax
 81cd976:	89 04 24             	mov    %eax,(%esp)
 81cd979:	e8 42 08 ec ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 81cd97e:	85 c0                	test   %eax,%eax
 81cd980:	0f 94 c0             	sete   %al
 81cd983:	84 c0                	test   %al,%al
 81cd985:	0f 84 80 00 00 00    	je     81cda0b <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x269>
 81cd98b:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 81cd992:	e8 07 e3 ef ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81cd997:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81cd99a:	89 82 48 0c 00 00    	mov    %eax,0xc48(%edx)
 81cd9a0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81cd9a7:	ff 
 81cd9a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd9ab:	89 04 24             	mov    %eax,(%esp)
 81cd9ae:	e8 ed 05 48 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81cd9b3:	89 c7                	mov    %eax,%edi
 81cd9b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd9b8:	8b b0 48 0c 00 00    	mov    0xc48(%eax),%esi
 81cd9be:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81cd9c1:	89 04 24             	mov    %eax,(%esp)
 81cd9c4:	e8 7d fe 05 00       	call   822d846 <_ZN6CParty13GetPartyIndexEv>
 81cd9c9:	89 c3                	mov    %eax,%ebx
 81cd9cb:	e8 ac 8a f2 ff       	call   80f647c <_Z12G_TimerQueuev>
 81cd9d0:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 81cd9d4:	89 74 24 18          	mov    %esi,0x18(%esp)
 81cd9d8:	c7 44 24 10 e8 03 00 	movl   $0x3e8,0x10(%esp)
 81cd9df:	00 
 81cd9e0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81cd9e7:	00 
 81cd9e8:	c7 44 24 0c 64 00 00 	movl   $0x64,0xc(%esp)
 81cd9ef:	00 
 81cd9f0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cd9f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cd9fb:	00 
 81cd9fc:	89 04 24             	mov    %eax,(%esp)
 81cd9ff:	e8 5c 34 46 00       	call   8630e60 <_ZN10TimerQueue23InsertTimerInMilisecondEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGExij>
 81cda04:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81cda07:	c6 40 08 01          	movb   $0x1,0x8(%eax)
 81cda0b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cda0e:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81cda12:	66 83 f8 ff          	cmp    $0xffff,%ax
 81cda16:	75 3a                	jne    81cda52 <_ZN23Dispatcher_BossDieCheck7processEP5CUserR8MSG_BASER9ParamBase+0x2b0>
 81cda18:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cda1b:	89 04 24             	mov    %eax,(%esp)
 81cda1e:	e8 37 bf f2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 81cda23:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81cda2a:	00 
 81cda2b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81cda32:	00 
 81cda33:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81cda3a:	00 
 81cda3b:	c7 44 24 08 cb 00 00 	movl   $0xcb,0x8(%esp)
 81cda42:	00 
 81cda43:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cda46:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cda4a:	89 04 24             	mov    %eax,(%esp)
 81cda4d:	e8 2c b2 f2 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 81cda52:	b8 00 00 00 00       	mov    $0x0,%eax
 81cda57:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81cda5a:	83 c4 00             	add    $0x0,%esp
 81cda5d:	5b                   	pop    %ebx
 81cda5e:	5e                   	pop    %esi
 81cda5f:	5f                   	pop    %edi
 81cda60:	5d                   	pop    %ebp
 81cda61:	c3                   	ret

```

```c
// Dispatcher_BossDieCheck::process @ 0x81cd7a2

/* Dispatcher_BossDieCheck::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_BossDieCheck::process
          (Dispatcher_BossDieCheck *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE *pMVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  CHackAnalyzer *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  __normal_iterator local_30 [4];
  undefined1 local_2c [4];
  ParamBase *local_28;
  MSG_BASE *local_24;
  CParty *local_20;
  
  local_28 = param_3;
  uVar3 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(local_28 + 4) = uVar3;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar4 = CUser::get_acc_id(param_1);
      uVar3 = LineFunc(0x259e,
                       "virtual int Dispatcher_BossDieCheck::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_28 + 4),uVar4);
    }
    else {
      local_24 = param_2;
      iVar5 = CUser::getCurCharacSkillCheckSum(param_1);
      if (iVar5 != *(int *)(local_24 + 0x14)) {
        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x25c,1,0,0);
      }
      CUser::GetPartyIndex(param_1);
      iVar5 = G_CGameManager();
      local_20 = (CParty *)CGameManager::GetParty(iVar5);
      pMVar1 = local_24 + 0x10;
      std::vector<int,std::allocator<int>>::end();
      std::vector<int,std::allocator<int>>::begin();
      std::
      find<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,unsigned_short>
                (&local_3c,local_34,local_38,pMVar1);
      std::vector<int,std::allocator<int>>::end();
      bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_3c,local_30);
      if (bVar2) {
        std::vector<int,std::allocator<int>>::erase(local_2c,local_20 + 0xc3c,local_3c);
        *(undefined2 *)(local_28 + 10) = *(undefined2 *)(local_24 + 0x10);
      }
      else {
        *(undefined4 *)(local_28 + 4) = 0x15;
      }
      iVar5 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(local_20 + 0xc3c));
      if (iVar5 == 0) {
        uVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        *(undefined4 *)(local_20 + 0xc48) = uVar3;
        uVar7 = CUser::get_charac_no(param_1,-1);
        uVar3 = *(undefined4 *)(local_20 + 0xc48);
        uVar8 = CParty::GetPartyIndex(local_20);
        uVar9 = G_TimerQueue();
        TimerQueue::InsertTimerInMilisecond(uVar9,1,uVar8,100,1000,0,uVar3,uVar7);
        local_28[8] = (ParamBase)0x1;
      }
      if (*(short *)(local_24 + 0xe) == -1) {
        pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0xcb,1,0,0);
      }
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081cd642 Dispatcher_BossDieCheck::read  [0x081cd642-0x81cd71d] ===
 81cd642:	55                   	push   %ebp
 81cd643:	89 e5                	mov    %esp,%ebp
 81cd645:	83 ec 28             	sub    $0x28,%esp
 81cd648:	8b 45 10             	mov    0x10(%ebp),%eax
 81cd64b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cd64e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd651:	83 c0 0e             	add    $0xe,%eax
 81cd654:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd658:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd65b:	89 04 24             	mov    %eax,(%esp)
 81cd65e:	e8 4d fa 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cd663:	83 f0 01             	xor    $0x1,%eax
 81cd666:	84 c0                	test   %al,%al
 81cd668:	74 29                	je     81cd693 <_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE+0x51>
 81cd66a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd671:	00 
 81cd672:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd679:	00 
 81cd67a:	c7 44 24 04 a0 48 bd 	movl   $0x8bd48a0,0x4(%esp)
 81cd681:	08 
 81cd682:	c7 04 24 78 25 00 00 	movl   $0x2578,(%esp)
 81cd689:	e8 49 32 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd68e:	e9 89 00 00 00       	jmp    81cd71c <_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE+0xda>
 81cd693:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd696:	83 c0 10             	add    $0x10,%eax
 81cd699:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd69d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd6a0:	89 04 24             	mov    %eax,(%esp)
 81cd6a3:	e8 08 fa 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cd6a8:	83 f0 01             	xor    $0x1,%eax
 81cd6ab:	84 c0                	test   %al,%al
 81cd6ad:	74 26                	je     81cd6d5 <_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE+0x93>
 81cd6af:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd6b6:	00 
 81cd6b7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd6be:	00 
 81cd6bf:	c7 44 24 04 a0 48 bd 	movl   $0x8bd48a0,0x4(%esp)
 81cd6c6:	08 
 81cd6c7:	c7 04 24 79 25 00 00 	movl   $0x2579,(%esp)
 81cd6ce:	e8 04 32 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd6d3:	eb 47                	jmp    81cd71c <_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE+0xda>
 81cd6d5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cd6d8:	83 c0 14             	add    $0x14,%eax
 81cd6db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cd6df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cd6e2:	89 04 24             	mov    %eax,(%esp)
 81cd6e5:	e8 06 fa 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cd6ea:	83 f0 01             	xor    $0x1,%eax
 81cd6ed:	84 c0                	test   %al,%al
 81cd6ef:	74 26                	je     81cd717 <_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE+0xd5>
 81cd6f1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cd6f8:	00 
 81cd6f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cd700:	00 
 81cd701:	c7 44 24 04 a0 48 bd 	movl   $0x8bd48a0,0x4(%esp)
 81cd708:	08 
 81cd709:	c7 04 24 7b 25 00 00 	movl   $0x257b,(%esp)
 81cd710:	e8 c2 31 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cd715:	eb 05                	jmp    81cd71c <_ZN23Dispatcher_BossDieCheck4readER9PacketBufR8MSG_BASE+0xda>
 81cd717:	b8 00 00 00 00       	mov    $0x0,%eax
 81cd71c:	c9                   	leave
 81cd71d:	c3                   	ret

```

```c
// Dispatcher_BossDieCheck::read @ 0x81cd642

/* Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_BossDieCheck::read(Dispatcher_BossDieCheck *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x257b,"virtual int Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2579,"virtual int Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2578,"virtual int Dispatcher_BossDieCheck::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cda62 Dispatcher_BossDieCheck::send  [0x081cda62-0x81cdbc5] ===
 81cda62:	55                   	push   %ebp
 81cda63:	89 e5                	mov    %esp,%ebp
 81cda65:	56                   	push   %esi
 81cda66:	53                   	push   %ebx
 81cda67:	83 ec 30             	sub    $0x30,%esp
 81cda6a:	8b 45 10             	mov    0x10(%ebp),%eax
 81cda6d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cda70:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cda73:	8b 40 0c             	mov    0xc(%eax),%eax
 81cda76:	83 f8 02             	cmp    $0x2,%eax
 81cda79:	75 1b                	jne    81cda96 <_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase+0x34>
 81cda7b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81cda82:	00 
 81cda83:	c7 44 24 04 b7 00 00 	movl   $0xb7,0x4(%esp)
 81cda8a:	00 
 81cda8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cda8e:	89 04 24             	mov    %eax,(%esp)
 81cda91:	e8 ac e4 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cda96:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cda99:	89 04 24             	mov    %eax,(%esp)
 81cda9c:	e8 ab 02 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81cdaa1:	c7 44 24 08 73 00 00 	movl   $0x73,0x8(%esp)
 81cdaa8:	00 
 81cdaa9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cdab0:	00 
 81cdab1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdab4:	89 04 24             	mov    %eax,(%esp)
 81cdab7:	e8 40 de ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81cdabc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdabf:	8b 40 04             	mov    0x4(%eax),%eax
 81cdac2:	85 c0                	test   %eax,%eax
 81cdac4:	74 2a                	je     81cdaf0 <_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase+0x8e>
 81cdac6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cdacd:	00 
 81cdace:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdad1:	89 04 24             	mov    %eax,(%esp)
 81cdad4:	e8 47 de ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cdad9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdadc:	8b 40 04             	mov    0x4(%eax),%eax
 81cdadf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdae3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdae6:	89 04 24             	mov    %eax,(%esp)
 81cdae9:	e8 32 de ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cdaee:	eb 45                	jmp    81cdb35 <_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase+0xd3>
 81cdaf0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cdaf7:	00 
 81cdaf8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdafb:	89 04 24             	mov    %eax,(%esp)
 81cdafe:	e8 1d de ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cdb03:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdb06:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81cdb0a:	0f b6 c0             	movzbl %al,%eax
 81cdb0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdb11:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdb14:	89 04 24             	mov    %eax,(%esp)
 81cdb17:	e8 04 de ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81cdb1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cdb1f:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81cdb23:	0f b7 c0             	movzwl %ax,%eax
 81cdb26:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdb2a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdb2d:	89 04 24             	mov    %eax,(%esp)
 81cdb30:	e8 6f c3 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81cdb35:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81cdb3c:	00 
 81cdb3d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdb40:	89 04 24             	mov    %eax,(%esp)
 81cdb43:	e8 10 de ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81cdb48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdb4b:	89 04 24             	mov    %eax,(%esp)
 81cdb4e:	e8 fb 22 06 00       	call   822fe4e <_ZN5CUser13GetPartyIndexEv>
 81cdb53:	0f bf d8             	movswl %ax,%ebx
 81cdb56:	e8 33 e6 ef ff       	call   80cc18e <_Z14G_CGameManagerv>
 81cdb5b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cdb5f:	89 04 24             	mov    %eax,(%esp)
 81cdb62:	e8 cb 73 0c 00       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 81cdb67:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cdb6a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cdb6e:	74 14                	je     81cdb84 <_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase+0x122>
 81cdb70:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdb73:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdb77:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cdb7a:	89 04 24             	mov    %eax,(%esp)
 81cdb7d:	e8 cc f5 3c 00       	call   859d14e <_ZN6CParty13send_to_partyER11PacketGuard>
 81cdb82:	eb 2f                	jmp    81cdbb3 <_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase+0x151>
 81cdb84:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdb87:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cdb8b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cdb8e:	89 04 24             	mov    %eax,(%esp)
 81cdb91:	e8 24 aa 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81cdb96:	eb 1b                	jmp    81cdbb3 <_ZN23Dispatcher_BossDieCheck4sendEP5CUserR9ParamBase+0x151>
 81cdb98:	89 d3                	mov    %edx,%ebx
 81cdb9a:	89 c6                	mov    %eax,%esi
 81cdb9c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdb9f:	89 04 24             	mov    %eax,(%esp)
 81cdba2:	e8 d9 02 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cdba7:	89 f0                	mov    %esi,%eax
 81cdba9:	89 da                	mov    %ebx,%edx
 81cdbab:	89 04 24             	mov    %eax,(%esp)
 81cdbae:	e8 9d 5b 91 00       	call   8ae3750 <_Unwind_Resume>
 81cdbb3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cdbb6:	89 04 24             	mov    %eax,(%esp)
 81cdbb9:	e8 c2 02 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81cdbbe:	83 c4 30             	add    $0x30,%esp
 81cdbc1:	5b                   	pop    %ebx
 81cdbc2:	5e                   	pop    %esi
 81cdbc3:	5d                   	pop    %ebp
 81cdbc4:	c3                   	ret
 81cdbc5:	90                   	nop

```

```c
// Dispatcher_BossDieCheck::send @ 0x81cda62

/* Dispatcher_BossDieCheck::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_BossDieCheck::send(Dispatcher_BossDieCheck *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  PacketGuard local_20 [12];
  ParamBase *local_14;
  CParty *local_10;
  
  local_14 = param_2;
  if (*(int *)(param_2 + 0xc) == 2) {
    CUser::SendCmdErrorPacket(param_1,0xb7,2);
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 081cdab7 to 081cdb95 has its CatchHandler @ 081cdb98 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x73);
  if (*(int *)(local_14 + 4) == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)(byte)local_14[8]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,(uint)*(ushort *)(local_14 + 10));
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::GetPartyIndex(param_1);
  iVar1 = G_CGameManager();
  local_10 = (CParty *)CGameManager::GetParty(iVar1);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_1,local_20);
  }
  else {
    CParty::send_to_party(local_10,local_20);
  }
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

