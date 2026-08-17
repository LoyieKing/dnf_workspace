# Dispatcher_SecurityCardCertKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820a6bc Dispatcher_SecurityCardCertKey::dispatch_sig  [0x0820a6bc-0x820a99f] ===
 820a6bc:	55                   	push   %ebp
 820a6bd:	89 e5                	mov    %esp,%ebp
 820a6bf:	56                   	push   %esi
 820a6c0:	53                   	push   %ebx
 820a6c1:	83 ec 20             	sub    $0x20,%esp
 820a6c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a6c7:	89 04 24             	mov    %eax,(%esp)
 820a6ca:	e8 bd fc ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820a6cf:	83 f8 02             	cmp    $0x2,%eax
 820a6d2:	0f 9e c0             	setle  %al
 820a6d5:	84 c0                	test   %al,%al
 820a6d7:	74 29                	je     820a702 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x46>
 820a6d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a6e0:	00 
 820a6e1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a6e8:	00 
 820a6e9:	c7 44 24 04 a0 e3 bc 	movl   $0x8bce3a0,0x4(%esp)
 820a6f0:	08 
 820a6f1:	c7 04 24 75 a6 00 00 	movl   $0xa675,(%esp)
 820a6f8:	e8 da 61 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a6fd:	e9 96 02 00 00       	jmp    820a998 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820a702:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 820a709:	c7 45 ea 00 00 00 00 	movl   $0x0,-0x16(%ebp)
 820a710:	66 c7 45 ee 00 00    	movw   $0x0,-0x12(%ebp)
 820a716:	8d 45 f0             	lea    -0x10(%ebp),%eax
 820a719:	89 44 24 04          	mov    %eax,0x4(%esp)
 820a71d:	8b 45 10             	mov    0x10(%ebp),%eax
 820a720:	89 04 24             	mov    %eax,(%esp)
 820a723:	e8 18 2b 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 820a728:	83 f0 01             	xor    $0x1,%eax
 820a72b:	84 c0                	test   %al,%al
 820a72d:	74 29                	je     820a758 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x9c>
 820a72f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a736:	00 
 820a737:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a73e:	00 
 820a73f:	c7 44 24 04 a0 e3 bc 	movl   $0x8bce3a0,0x4(%esp)
 820a746:	08 
 820a747:	c7 04 24 81 a6 00 00 	movl   $0xa681,(%esp)
 820a74e:	e8 84 61 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a753:	e9 40 02 00 00       	jmp    820a998 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820a758:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820a75b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820a75f:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 820a766:	00 
 820a767:	8d 45 ea             	lea    -0x16(%ebp),%eax
 820a76a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820a76e:	8b 45 10             	mov    0x10(%ebp),%eax
 820a771:	89 04 24             	mov    %eax,(%esp)
 820a774:	e8 43 2b 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 820a779:	83 f0 01             	xor    $0x1,%eax
 820a77c:	84 c0                	test   %al,%al
 820a77e:	74 29                	je     820a7a9 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0xed>
 820a780:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a787:	00 
 820a788:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a78f:	00 
 820a790:	c7 44 24 04 a0 e3 bc 	movl   $0x8bce3a0,0x4(%esp)
 820a797:	08 
 820a798:	c7 04 24 83 a6 00 00 	movl   $0xa683,(%esp)
 820a79f:	e8 33 61 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a7a4:	e9 ef 01 00 00       	jmp    820a998 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820a7a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a7ac:	89 04 24             	mov    %eax,(%esp)
 820a7af:	e8 6c 55 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a7b4:	89 04 24             	mov    %eax,(%esp)
 820a7b7:	e8 52 47 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a7bc:	84 c0                	test   %al,%al
 820a7be:	74 40                	je     820a800 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x144>
 820a7c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a7c3:	89 04 24             	mov    %eax,(%esp)
 820a7c6:	e8 55 55 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a7cb:	89 04 24             	mov    %eax,(%esp)
 820a7ce:	e8 9f 47 02 00       	call   822ef72 <_ZN8WongWork13CSecurityCard12isCertFlagOnEv>
 820a7d3:	84 c0                	test   %al,%al
 820a7d5:	74 29                	je     820a800 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x144>
 820a7d7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a7de:	00 
 820a7df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a7e6:	00 
 820a7e7:	c7 44 24 04 a0 e3 bc 	movl   $0x8bce3a0,0x4(%esp)
 820a7ee:	08 
 820a7ef:	c7 04 24 88 a6 00 00 	movl   $0xa688,(%esp)
 820a7f6:	e8 dc 60 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a7fb:	e9 98 01 00 00       	jmp    820a998 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820a800:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a803:	89 04 24             	mov    %eax,(%esp)
 820a806:	e8 15 55 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a80b:	89 04 24             	mov    %eax,(%esp)
 820a80e:	e8 07 47 02 00       	call   822ef1a <_ZNK8WongWork13CSecurityCard11isCertifiedEv>
 820a813:	84 c0                	test   %al,%al
 820a815:	74 29                	je     820a840 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x184>
 820a817:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a81e:	00 
 820a81f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a826:	00 
 820a827:	c7 44 24 04 a0 e3 bc 	movl   $0x8bce3a0,0x4(%esp)
 820a82e:	08 
 820a82f:	c7 04 24 8c a6 00 00 	movl   $0xa68c,(%esp)
 820a836:	e8 9c 60 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a83b:	e9 58 01 00 00       	jmp    820a998 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820a840:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 820a847:	eb 40                	jmp    820a889 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x1cd>
 820a849:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820a84c:	0f b6 44 05 ea       	movzbl -0x16(%ebp,%eax,1),%eax
 820a851:	0f be c0             	movsbl %al,%eax
 820a854:	83 e8 30             	sub    $0x30,%eax
 820a857:	83 f8 09             	cmp    $0x9,%eax
 820a85a:	76 29                	jbe    820a885 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x1c9>
 820a85c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a863:	00 
 820a864:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a86b:	00 
 820a86c:	c7 44 24 04 a0 e3 bc 	movl   $0x8bce3a0,0x4(%esp)
 820a873:	08 
 820a874:	c7 04 24 91 a6 00 00 	movl   $0xa691,(%esp)
 820a87b:	e8 57 60 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a880:	e9 13 01 00 00       	jmp    820a998 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820a885:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 820a889:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820a88c:	83 f8 04             	cmp    $0x4,%eax
 820a88f:	0f 96 c0             	setbe  %al
 820a892:	84 c0                	test   %al,%al
 820a894:	75 b3                	jne    820a849 <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x18d>
 820a896:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a899:	89 04 24             	mov    %eax,(%esp)
 820a89c:	e8 7f 54 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a8a1:	89 04 24             	mov    %eax,(%esp)
 820a8a4:	e8 65 46 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a8a9:	84 c0                	test   %al,%al
 820a8ab:	74 22                	je     820a8cf <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x213>
 820a8ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a8b0:	05 00 97 07 00       	add    $0x79700,%eax
 820a8b5:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 820a8bc:	00 
 820a8bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a8c4:	00 
 820a8c5:	89 04 24             	mov    %eax,(%esp)
 820a8c8:	e8 cf 9e 47 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 820a8cd:	eb 20                	jmp    820a8ef <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x233>
 820a8cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a8d2:	05 00 97 07 00       	add    $0x79700,%eax
 820a8d7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 820a8de:	00 
 820a8df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a8e6:	00 
 820a8e7:	89 04 24             	mov    %eax,(%esp)
 820a8ea:	e8 ad 9e 47 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 820a8ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a8f2:	89 04 24             	mov    %eax,(%esp)
 820a8f5:	e8 26 54 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a8fa:	89 04 24             	mov    %eax,(%esp)
 820a8fd:	e8 0c 46 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a902:	84 c0                	test   %al,%al
 820a904:	74 25                	je     820a92b <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x26f>
 820a906:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a909:	89 04 24             	mov    %eax,(%esp)
 820a90c:	e8 ef 5e 02 00       	call   8230800 <_ZN5CUser8getHadesEv>
 820a911:	c7 44 24 08 1b 00 00 	movl   $0x1b,0x8(%esp)
 820a918:	00 
 820a919:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a920:	00 
 820a921:	89 04 24             	mov    %eax,(%esp)
 820a924:	e8 7f ec 2a 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 820a929:	eb 23                	jmp    820a94e <_ZN30Dispatcher_SecurityCardCertKey12dispatch_sigEP5CUserR9PacketBuf+0x292>
 820a92b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a92e:	89 04 24             	mov    %eax,(%esp)
 820a931:	e8 ca 5e 02 00       	call   8230800 <_ZN5CUser8getHadesEv>
 820a936:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 820a93d:	00 
 820a93e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a945:	00 
 820a946:	89 04 24             	mov    %eax,(%esp)
 820a949:	e8 5a ec 2a 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 820a94e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a951:	89 04 24             	mov    %eax,(%esp)
 820a954:	e8 c7 53 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a959:	89 04 24             	mov    %eax,(%esp)
 820a95c:	e8 ad 45 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a961:	0f b6 f0             	movzbl %al,%esi
 820a964:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a967:	89 04 24             	mov    %eax,(%esp)
 820a96a:	e8 ff f9 ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820a96f:	89 c3                	mov    %eax,%ebx
 820a971:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a974:	89 04 24             	mov    %eax,(%esp)
 820a977:	e8 1a e3 eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 820a97c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 820a980:	8d 55 ea             	lea    -0x16(%ebp),%edx
 820a983:	89 54 24 08          	mov    %edx,0x8(%esp)
 820a987:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820a98b:	89 04 24             	mov    %eax,(%esp)
 820a98e:	e8 c9 11 22 00       	call   842bb5c <_ZN23DB_SecurityCardActivate11makeRequestEijPKcb>
 820a993:	b8 00 00 00 00       	mov    $0x0,%eax
 820a998:	83 c4 20             	add    $0x20,%esp
 820a99b:	5b                   	pop    %ebx
 820a99c:	5e                   	pop    %esi
 820a99d:	5d                   	pop    %ebp
 820a99e:	c3                   	ret
 820a99f:	90                   	nop

```

```c
// Dispatcher_SecurityCardCertKey::dispatch_sig @ 0x820a6bc

/* Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecurityCardCertKey::dispatch_sig
          (Dispatcher_SecurityCardCertKey *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  CSecurityCard *pCVar5;
  uint uVar6;
  char local_1a [6];
  uint local_14;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0xa675,
                     "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    local_14 = 0;
    local_1a[0] = '\0';
    local_1a[1] = '\0';
    local_1a[2] = '\0';
    local_1a[3] = '\0';
    local_1a[4] = '\0';
    local_1a[5] = '\0';
    cVar1 = PacketBuf::get_int(param_2,&local_14);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_str(param_2,local_1a,6,local_14);
      if (cVar1 == '\x01') {
        pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        cVar1 = WongWork::CSecurityCard::isActivate(pCVar5);
        if (cVar1 != '\0') {
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          cVar1 = WongWork::CSecurityCard::isCertFlagOn(pCVar5);
          if (cVar1 != '\0') {
            uVar4 = LineFunc(0xa688,
                             "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar4;
          }
        }
        pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
        cVar1 = WongWork::CSecurityCard::isCertified(pCVar5);
        if (cVar1 == '\0') {
          for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
            if (9 < (int)local_1a[local_10] - 0x30U) {
              uVar4 = LineFunc(0xa691,
                               "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar4;
            }
          }
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          cVar1 = WongWork::CSecurityCard::isActivate(pCVar5);
          if (cVar1 == '\0') {
            cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,2);
          }
          else {
            cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),1,3);
          }
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          cVar1 = WongWork::CSecurityCard::isActivate(pCVar5);
          if (cVar1 == '\0') {
            uVar4 = CUser::getHades(param_1);
            XNuclear::CHades::ChangeSecurity(uVar4,1,0x1a);
          }
          else {
            uVar4 = CUser::getHades(param_1);
            XNuclear::CHades::ChangeSecurity(uVar4,1,0x1b);
          }
          pCVar5 = (CSecurityCard *)CUser::getSecurityCard(param_1);
          bVar2 = (bool)WongWork::CSecurityCard::isActivate(pCVar5);
          uVar6 = CUser::get_acc_id(param_1);
          iVar3 = CUser::GetUID(param_1);
          DB_SecurityCardActivate::makeRequest(iVar3,uVar6,local_1a,bVar2);
          uVar4 = 0;
        }
        else {
          uVar4 = LineFunc(0xa68c,
                           "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar4 = LineFunc(0xa683,
                         "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar4 = LineFunc(0xa681,
                       "virtual int Dispatcher_SecurityCardCertKey::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  return uVar4;
}

```

