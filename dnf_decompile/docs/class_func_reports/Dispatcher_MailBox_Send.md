# Dispatcher_MailBox_Send

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GuildMailCheck

```asm
// === 081cc8c2 Dispatcher_MailBox_Send::GuildMailCheck  [0x081cc8c2-0x81cc957] ===
 81cc8c2:	55                   	push   %ebp
 81cc8c3:	89 e5                	mov    %esp,%ebp
 81cc8c5:	83 ec 28             	sub    $0x28,%esp
 81cc8c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc8cb:	89 04 24             	mov    %eax,(%esp)
 81cc8ce:	e8 99 2b 06 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81cc8d3:	85 c0                	test   %eax,%eax
 81cc8d5:	0f 94 c0             	sete   %al
 81cc8d8:	84 c0                	test   %al,%al
 81cc8da:	74 07                	je     81cc8e3 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x21>
 81cc8dc:	b8 22 00 00 00       	mov    $0x22,%eax
 81cc8e1:	eb 72                	jmp    81cc955 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x93>
 81cc8e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc8e6:	89 04 24             	mov    %eax,(%esp)
 81cc8e9:	e8 26 fb 49 00       	call   866c414 <_ZN5CUser16IsSubGuildMasterEv>
 81cc8ee:	83 f0 01             	xor    $0x1,%eax
 81cc8f1:	84 c0                	test   %al,%al
 81cc8f3:	74 19                	je     81cc90e <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x4c>
 81cc8f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc8f8:	89 04 24             	mov    %eax,(%esp)
 81cc8fb:	e8 72 38 06 00       	call   8230172 <_ZN5CUser13IsGuildMasterEv>
 81cc900:	83 f0 01             	xor    $0x1,%eax
 81cc903:	84 c0                	test   %al,%al
 81cc905:	74 07                	je     81cc90e <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x4c>
 81cc907:	b8 01 00 00 00       	mov    $0x1,%eax
 81cc90c:	eb 05                	jmp    81cc913 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x51>
 81cc90e:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc913:	84 c0                	test   %al,%al
 81cc915:	74 07                	je     81cc91e <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x5c>
 81cc917:	b8 24 00 00 00       	mov    $0x24,%eax
 81cc91c:	eb 37                	jmp    81cc955 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x93>
 81cc91e:	e8 78 f8 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81cc923:	8b 80 24 a6 00 00    	mov    0xa624(%eax),%eax
 81cc929:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cc92c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc92f:	89 04 24             	mov    %eax,(%esp)
 81cc932:	e8 47 d9 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81cc937:	89 04 24             	mov    %eax,(%esp)
 81cc93a:	e8 97 7e f6 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81cc93f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81cc942:	0f 9c c0             	setl   %al
 81cc945:	84 c0                	test   %al,%al
 81cc947:	74 07                	je     81cc950 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x8e>
 81cc949:	b8 23 00 00 00       	mov    $0x23,%eax
 81cc94e:	eb 05                	jmp    81cc955 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE+0x93>
 81cc950:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc955:	c9                   	leave
 81cc956:	c3                   	ret
 81cc957:	90                   	nop

```

```c
// Dispatcher_MailBox_Send::GuildMailCheck @ 0x81cc8c2

/* Dispatcher_MailBox_Send::GuildMailCheck(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MailBox_Send::GuildMailCheck(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CInventory *this;
  int iVar5;
  
  iVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    cVar2 = CUser::IsSubGuildMaster((CUser *)param_2);
    if ((cVar2 == '\x01') || (cVar2 = CUser::IsGuildMaster((CUser *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0x24;
    }
    else {
      iVar3 = G_CDataManager();
      iVar3 = *(int *)(iVar3 + 0xa624);
      this = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      iVar5 = CInventory::get_money(this);
      if (iVar5 < iVar3) {
        uVar4 = 0x23;
      }
      else {
        uVar4 = 0;
      }
    }
    return uVar4;
  }
  return 0x22;
}

```

---

## check_error

```asm
// === 081cc636 Dispatcher_MailBox_Send::check_error  [0x081cc636-0x81cc8c1] ===
 81cc636:	55                   	push   %ebp
 81cc637:	89 e5                	mov    %esp,%ebp
 81cc639:	56                   	push   %esi
 81cc63a:	53                   	push   %ebx
 81cc63b:	83 ec 30             	sub    $0x30,%esp
 81cc63e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc641:	89 04 24             	mov    %eax,(%esp)
 81cc644:	e8 43 dd f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cc649:	83 f8 03             	cmp    $0x3,%eax
 81cc64c:	75 0f                	jne    81cc65d <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x27>
 81cc64e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc651:	89 04 24             	mov    %eax,(%esp)
 81cc654:	e8 d9 3d f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cc659:	85 c0                	test   %eax,%eax
 81cc65b:	75 07                	jne    81cc664 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x2e>
 81cc65d:	b8 01 00 00 00       	mov    $0x1,%eax
 81cc662:	eb 05                	jmp    81cc669 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x33>
 81cc664:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc669:	84 c0                	test   %al,%al
 81cc66b:	74 0a                	je     81cc677 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x41>
 81cc66d:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81cc672:	e9 42 02 00 00       	jmp    81cc8b9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x283>
 81cc677:	e8 6a 5f f9 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 81cc67c:	c7 44 24 0c 04 00 00 	movl   $0x4,0xc(%esp)
 81cc683:	00 
 81cc684:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81cc68b:	00 
 81cc68c:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cc68f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc693:	89 04 24             	mov    %eax,(%esp)
 81cc696:	e8 1d 20 fa ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 81cc69b:	84 c0                	test   %al,%al
 81cc69d:	74 0a                	je     81cc6a9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x73>
 81cc69f:	bb d1 00 00 00       	mov    $0xd1,%ebx
 81cc6a4:	e9 10 02 00 00       	jmp    81cc8b9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x283>
 81cc6a9:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81cc6ae:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 81cc6b5:	00 
 81cc6b6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81cc6b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc6bd:	89 04 24             	mov    %eax,(%esp)
 81cc6c0:	e8 3d c3 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81cc6c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cc6c8:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81cc6cc:	74 08                	je     81cc6d6 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0xa0>
 81cc6ce:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 81cc6d1:	e9 e3 01 00 00       	jmp    81cc8b9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x283>
 81cc6d6:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc6d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cc6dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc6df:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 81cc6e3:	0f b7 d8             	movzwl %ax,%ebx
 81cc6e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc6e9:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 81cc6ed:	0f b6 c0             	movzbl %al,%eax
 81cc6f0:	89 04 24             	mov    %eax,(%esp)
 81cc6f3:	e8 4d b1 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81cc6f8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cc6fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc700:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc703:	89 04 24             	mov    %eax,(%esp)
 81cc706:	e8 37 a2 47 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81cc70b:	84 c0                	test   %al,%al
 81cc70d:	74 0a                	je     81cc719 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0xe3>
 81cc70f:	bb d5 00 00 00       	mov    $0xd5,%ebx
 81cc714:	e9 a0 01 00 00       	jmp    81cc8b9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x283>
 81cc719:	c6 45 ea 01          	movb   $0x1,-0x16(%ebp)
 81cc71d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc720:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 81cc724:	0f b7 d8             	movzwl %ax,%ebx
 81cc727:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc72a:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 81cc72e:	0f b6 c0             	movzbl %al,%eax
 81cc731:	89 04 24             	mov    %eax,(%esp)
 81cc734:	e8 0c b1 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81cc739:	8d 55 ea             	lea    -0x16(%ebp),%edx
 81cc73c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81cc740:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cc744:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc748:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc74b:	89 04 24             	mov    %eax,(%esp)
 81cc74e:	e8 db 3b f5 ff       	call   812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>
 81cc753:	0f b6 45 ea          	movzbl -0x16(%ebp),%eax
 81cc757:	83 f0 01             	xor    $0x1,%eax
 81cc75a:	84 c0                	test   %al,%al
 81cc75c:	74 0a                	je     81cc768 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x132>
 81cc75e:	bb 72 00 00 00       	mov    $0x72,%ebx
 81cc763:	e9 51 01 00 00       	jmp    81cc8b9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x283>
 81cc768:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81cc76b:	89 04 24             	mov    %eax,(%esp)
 81cc76e:	e8 5d 39 51 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81cc773:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc776:	8d 50 45             	lea    0x45(%eax),%edx
 81cc779:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81cc77c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc780:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc784:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cc787:	89 04 24             	mov    %eax,(%esp)
 81cc78a:	e8 a1 ae 53 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81cc78f:	eb 1b                	jmp    81cc7ac <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x176>
 81cc791:	89 d3                	mov    %edx,%ebx
 81cc793:	89 c6                	mov    %eax,%esi
 81cc795:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81cc798:	89 04 24             	mov    %eax,(%esp)
 81cc79b:	e8 50 39 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81cc7a0:	89 f0                	mov    %esi,%eax
 81cc7a2:	89 da                	mov    %ebx,%edx
 81cc7a4:	89 04 24             	mov    %eax,(%esp)
 81cc7a7:	e8 a4 6f 91 00       	call   8ae3750 <_Unwind_Resume>
 81cc7ac:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81cc7af:	89 04 24             	mov    %eax,(%esp)
 81cc7b2:	e8 39 39 51 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81cc7b7:	e8 45 88 06 00       	call   8235001 <_ZN16CSyncSlangFilter11GetInstanceEv>
 81cc7bc:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 81cc7bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc7c3:	89 04 24             	mov    %eax,(%esp)
 81cc7c6:	e8 57 1e 46 00       	call   862e622 <_ZN16CSyncSlangFilter8HasSlangERKSs>
 81cc7cb:	84 c0                	test   %al,%al
 81cc7cd:	74 0a                	je     81cc7d9 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x1a3>
 81cc7cf:	bb 9f 00 00 00       	mov    $0x9f,%ebx
 81cc7d4:	e9 d5 00 00 00       	jmp    81cc8ae <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x278>
 81cc7d9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc7dc:	83 c0 45             	add    $0x45,%eax
 81cc7df:	89 04 24             	mov    %eax,(%esp)
 81cc7e2:	e8 c9 1b eb ff       	call   807e3b0 <strlen@plt>
 81cc7e7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81cc7ea:	8b 52 41             	mov    0x41(%edx),%edx
 81cc7ed:	39 d0                	cmp    %edx,%eax
 81cc7ef:	74 0a                	je     81cc7fb <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x1c5>
 81cc7f1:	bb fd ff ff ff       	mov    $0xfffffffd,%ebx
 81cc7f6:	e9 b3 00 00 00       	jmp    81cc8ae <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x278>
 81cc7fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc7fe:	8b 40 39             	mov    0x39(%eax),%eax
 81cc801:	85 c0                	test   %eax,%eax
 81cc803:	75 21                	jne    81cc826 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x1f0>
 81cc805:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc808:	8b 40 2e             	mov    0x2e(%eax),%eax
 81cc80b:	85 c0                	test   %eax,%eax
 81cc80d:	75 17                	jne    81cc826 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x1f0>
 81cc80f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc812:	83 c0 45             	add    $0x45,%eax
 81cc815:	0f b6 00             	movzbl (%eax),%eax
 81cc818:	84 c0                	test   %al,%al
 81cc81a:	75 0a                	jne    81cc826 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x1f0>
 81cc81c:	bb 16 00 00 00       	mov    $0x16,%ebx
 81cc821:	e9 88 00 00 00       	jmp    81cc8ae <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x278>
 81cc826:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc829:	8b 40 32             	mov    0x32(%eax),%eax
 81cc82c:	85 c0                	test   %eax,%eax
 81cc82e:	74 27                	je     81cc857 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x221>
 81cc830:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc833:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc837:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc83a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc83e:	8b 45 08             	mov    0x8(%ebp),%eax
 81cc841:	89 04 24             	mov    %eax,(%esp)
 81cc844:	e8 79 00 00 00       	call   81cc8c2 <_ZN23Dispatcher_MailBox_Send14GuildMailCheckEP5CUserR8MSG_BASE>
 81cc849:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cc84c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cc850:	74 05                	je     81cc857 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x221>
 81cc852:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 81cc855:	eb 57                	jmp    81cc8ae <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x278>
 81cc857:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc85a:	89 04 24             	mov    %eax,(%esp)
 81cc85d:	e8 1e 2b 06 00       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 81cc862:	83 f0 01             	xor    $0x1,%eax
 81cc865:	84 c0                	test   %al,%al
 81cc867:	74 23                	je     81cc88c <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x256>
 81cc869:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cc86c:	8b 50 2e             	mov    0x2e(%eax),%edx
 81cc86f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc872:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc876:	89 04 24             	mov    %eax,(%esp)
 81cc879:	e8 18 9c 47 00       	call   8646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>
 81cc87e:	83 f0 01             	xor    $0x1,%eax
 81cc881:	84 c0                	test   %al,%al
 81cc883:	74 07                	je     81cc88c <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x256>
 81cc885:	bb 46 00 00 00       	mov    $0x46,%ebx
 81cc88a:	eb 22                	jmp    81cc8ae <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x278>
 81cc88c:	bb 00 00 00 00       	mov    $0x0,%ebx
 81cc891:	eb 1b                	jmp    81cc8ae <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE+0x278>
 81cc893:	89 d3                	mov    %edx,%ebx
 81cc895:	89 c6                	mov    %eax,%esi
 81cc897:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cc89a:	89 04 24             	mov    %eax,(%esp)
 81cc89d:	e8 3e b3 53 00       	call   8707be0 <_ZNSsD1Ev>
 81cc8a2:	89 f0                	mov    %esi,%eax
 81cc8a4:	89 da                	mov    %ebx,%edx
 81cc8a6:	89 04 24             	mov    %eax,(%esp)
 81cc8a9:	e8 a2 6e 91 00       	call   8ae3750 <_Unwind_Resume>
 81cc8ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81cc8b1:	89 04 24             	mov    %eax,(%esp)
 81cc8b4:	e8 27 b3 53 00       	call   8707be0 <_ZNSsD1Ev>
 81cc8b9:	89 d8                	mov    %ebx,%eax
 81cc8bb:	83 c4 30             	add    $0x30,%esp
 81cc8be:	5b                   	pop    %ebx
 81cc8bf:	5e                   	pop    %esi
 81cc8c0:	5d                   	pop    %ebp
 81cc8c1:	c3                   	ret

```

```c
// Dispatcher_MailBox_Send::check_error @ 0x81cc636

/* Dispatcher_MailBox_Send::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_MailBox_Send::check_error(Dispatcher_MailBox_Send *this,CUser *param_1,MSG_BASE *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  CSyncSlangFilter *this_00;
  size_t sVar6;
  string local_20;
  bool local_1a;
  allocator<char> local_19;
  int local_18;
  MSG_BASE *local_14;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 == 3) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar4 = -1;
  }
  else {
    pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar3 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,4);
    if (cVar3 == '\0') {
      iVar4 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3f);
      if (iVar4 == 0) {
        local_14 = param_2;
        uVar1 = *(ushort *)(param_2 + 0x37);
        local_18 = iVar4;
        iVar4 = GetInvenTypeFromItemSpace(param_2[0x36]);
        cVar3 = CUser::CheckItemLock(param_1,iVar4,(uint)uVar1);
        if (cVar3 == '\0') {
          local_1a = true;
          uVar1 = *(ushort *)(local_14 + 0x37);
          iVar4 = GetInvenTypeFromItemSpace(local_14[0x36]);
          CheckItemTradeLimitCountToMoveByUser(param_1,iVar4,(uint)uVar1,&local_1a);
          if (local_1a == true) {
            std::allocator<char>::allocator();
                    /* try { // try from 081cc78a to 081cc78e has its CatchHandler @ 081cc791 */
            std::string::string((string *)&local_20,(char *)(local_14 + 0x45),(allocator *)&local_19
                               );
            std::allocator<char>::~allocator(&local_19);
                    /* try { // try from 081cc7b7 to 081cc87d has its CatchHandler @ 081cc893 */
            this_00 = (CSyncSlangFilter *)CSyncSlangFilter::GetInstance();
            cVar3 = CSyncSlangFilter::HasSlang(this_00,&local_20);
            if (cVar3 == '\0') {
              sVar6 = strlen((char *)(local_14 + 0x45));
              if (sVar6 == *(size_t *)(local_14 + 0x41)) {
                if (((*(int *)(local_14 + 0x39) == 0) && (*(int *)(local_14 + 0x2e) == 0)) &&
                   (local_14[0x45] == (MSG_BASE)0x0)) {
                  iVar4 = 0x16;
                }
                else if ((*(int *)(local_14 + 0x32) == 0) ||
                        (iVar4 = GuildMailCheck((CUser *)this,(MSG_BASE *)param_1), local_10 = iVar4
                        , iVar4 == 0)) {
                  cVar3 = CUserCharacInfo::GetReliablePerson((CUserCharacInfo *)param_1);
                  if ((cVar3 == '\x01') ||
                     (cVar3 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                                        ((CUserCharacInfo *)param_1,*(uint *)(local_14 + 0x2e)),
                     cVar3 == '\x01')) {
                    iVar4 = 0;
                  }
                  else {
                    iVar4 = 0x46;
                  }
                }
              }
              else {
                iVar4 = -3;
              }
            }
            else {
              iVar4 = 0x9f;
            }
            std::string::~string((string *)&local_20);
          }
          else {
            iVar4 = 0x72;
          }
        }
        else {
          iVar4 = 0xd5;
        }
      }
    }
    else {
      iVar4 = 0xd1;
    }
  }
  return iVar4;
}

```

---

## process

```asm
// === 081cc958 Dispatcher_MailBox_Send::process  [0x081cc958-0x81ccdb1] ===
 81cc958:	55                   	push   %ebp
 81cc959:	89 e5                	mov    %esp,%ebp
 81cc95b:	57                   	push   %edi
 81cc95c:	56                   	push   %esi
 81cc95d:	53                   	push   %ebx
 81cc95e:	81 ec 0c 40 00 00    	sub    $0x400c,%esp
 81cc964:	8b 45 14             	mov    0x14(%ebp),%eax
 81cc967:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81cc96a:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc96d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cc971:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc974:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc978:	8b 45 08             	mov    0x8(%ebp),%eax
 81cc97b:	89 04 24             	mov    %eax,(%esp)
 81cc97e:	e8 b3 fc ff ff       	call   81cc636 <_ZN23Dispatcher_MailBox_Send11check_errorEP5CUserR8MSG_BASE>
 81cc983:	89 c2                	mov    %eax,%edx
 81cc985:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81cc988:	89 50 04             	mov    %edx,0x4(%eax)
 81cc98b:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81cc98e:	8b 40 04             	mov    0x4(%eax),%eax
 81cc991:	85 c0                	test   %eax,%eax
 81cc993:	7e 0a                	jle    81cc99f <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x47>
 81cc995:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc99a:	e9 08 04 00 00       	jmp    81ccda7 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x44f>
 81cc99f:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81cc9a2:	8b 40 04             	mov    0x4(%eax),%eax
 81cc9a5:	85 c0                	test   %eax,%eax
 81cc9a7:	79 32                	jns    81cc9db <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x83>
 81cc9a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc9ac:	89 04 24             	mov    %eax,(%esp)
 81cc9af:	e8 ba d9 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cc9b4:	8b 55 c0             	mov    -0x40(%ebp),%edx
 81cc9b7:	8b 52 04             	mov    0x4(%edx),%edx
 81cc9ba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cc9be:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cc9c2:	c7 44 24 04 40 4b bd 	movl   $0x8bd4b40,0x4(%esp)
 81cc9c9:	08 
 81cc9ca:	c7 04 24 ce 23 00 00 	movl   $0x23ce,(%esp)
 81cc9d1:	e8 01 3f 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc9d6:	e9 cc 03 00 00       	jmp    81ccda7 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x44f>
 81cc9db:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc9de:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81cc9e1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81cc9e4:	8b 40 32             	mov    0x32(%eax),%eax
 81cc9e7:	85 c0                	test   %eax,%eax
 81cc9e9:	0f 84 a9 00 00 00    	je     81cca98 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x140>
 81cc9ef:	e8 a7 f7 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81cc9f4:	8b 80 24 a6 00 00    	mov    0xa624(%eax),%eax
 81cc9fa:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81cc9fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cca00:	89 04 24             	mov    %eax,(%esp)
 81cca03:	e8 86 d8 f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81cca08:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81cca0f:	00 
 81cca10:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 81cca17:	00 
 81cca18:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81cca1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cca1f:	89 04 24             	mov    %eax,(%esp)
 81cca22:	e8 25 2b 33 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81cca27:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81cca2a:	83 c0 45             	add    $0x45,%eax
 81cca2d:	89 85 0c c0 ff ff    	mov    %eax,-0x3ff4(%ebp)
 81cca33:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81cca36:	8b 78 41             	mov    0x41(%eax),%edi
 81cca39:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cca3c:	89 04 24             	mov    %eax,(%esp)
 81cca3f:	e8 28 2a 06 00       	call   822f46c <_ZN15CUserCharacInfo19get_charac_guildkeyEv>
 81cca44:	89 c6                	mov    %eax,%esi
 81cca46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cca49:	89 04 24             	mov    %eax,(%esp)
 81cca4c:	e8 fd f1 ef ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81cca51:	89 c3                	mov    %eax,%ebx
 81cca53:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cca56:	89 04 24             	mov    %eax,(%esp)
 81cca59:	e8 32 f2 ef ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81cca5e:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 81cca64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cca68:	89 14 24             	mov    %edx,(%esp)
 81cca6b:	e8 48 09 f5 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81cca70:	8b 95 0c c0 ff ff    	mov    -0x3ff4(%ebp),%edx
 81cca76:	89 54 24 10          	mov    %edx,0x10(%esp)
 81cca7a:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81cca7e:	89 74 24 08          	mov    %esi,0x8(%esp)
 81cca82:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cca86:	89 04 24             	mov    %eax,(%esp)
 81cca89:	e8 f6 15 2a 00       	call   846e084 <_ZN17CGuildServerProxy13SendGuildMailEjjiPc>
 81cca8e:	b8 00 00 00 00       	mov    $0x0,%eax
 81cca93:	e9 0f 03 00 00       	jmp    81ccda7 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x44f>
 81cca98:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81cca9b:	8b 40 2e             	mov    0x2e(%eax),%eax
 81cca9e:	85 c0                	test   %eax,%eax
 81ccaa0:	74 16                	je     81ccab8 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x160>
 81ccaa2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccaa5:	89 04 24             	mov    %eax,(%esp)
 81ccaa8:	e8 6d da 4b 00       	call   868a51a <_ZN5CUser18reqSendMailCertifyEv>
 81ccaad:	84 c0                	test   %al,%al
 81ccaaf:	74 07                	je     81ccab8 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x160>
 81ccab1:	b8 01 00 00 00       	mov    $0x1,%eax
 81ccab6:	eb 05                	jmp    81ccabd <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x165>
 81ccab8:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccabd:	84 c0                	test   %al,%al
 81ccabf:	74 1c                	je     81ccadd <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x185>
 81ccac1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ccac8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccacb:	89 04 24             	mov    %eax,(%esp)
 81ccace:	e8 e3 d9 4b 00       	call   868a4b6 <_ZN5CUser15set_MailMsgDataEP16MSG_MAILBOX_SEND>
 81ccad3:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccad8:	e9 ca 02 00 00       	jmp    81ccda7 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x44f>
 81ccadd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ccae4:	8d 85 30 c0 ff ff    	lea    -0x3fd0(%ebp),%eax
 81ccaea:	89 04 24             	mov    %eax,(%esp)
 81ccaed:	e8 14 a3 06 00       	call   8236e06 <_ZN23MSG_CHECK_MAIL_RECEIVER3setILNS_22ENUM_MAILBOX_CHECKTYPEE0E16MSG_MAILBOX_SENDEEvRKT0_>
 81ccaf2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccaf5:	8d 50 11             	lea    0x11(%eax),%edx
 81ccaf8:	8d 85 30 c0 ff ff    	lea    -0x3fd0(%ebp),%eax
 81ccafe:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ccb02:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ccb06:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccb09:	89 04 24             	mov    %eax,(%esp)
 81ccb0c:	e8 53 89 38 00       	call   8555464 <_ZN8WongWork14CMailBoxHelper18ReqDBCheckReceiverEP5CUserPKcP23MSG_CHECK_MAIL_RECEIVER>
 81ccb11:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81ccb14:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 81ccb18:	74 0e                	je     81ccb28 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x1d0>
 81ccb1a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81ccb1d:	8b 55 c8             	mov    -0x38(%ebp),%edx
 81ccb20:	89 50 04             	mov    %edx,0x4(%eax)
 81ccb23:	e9 8e 00 00 00       	jmp    81ccbb6 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x25e>
 81ccb28:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 81ccb2c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccb2f:	8b 40 39             	mov    0x39(%eax),%eax
 81ccb32:	89 c3                	mov    %eax,%ebx
 81ccb34:	e8 62 f6 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ccb39:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ccb3d:	89 04 24             	mov    %eax,(%esp)
 81ccb40:	e8 ed 2e 19 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81ccb45:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81ccb48:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81ccb4c:	74 3d                	je     81ccb8b <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x233>
 81ccb4e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ccb51:	8b 00                	mov    (%eax),%eax
 81ccb53:	83 c0 10             	add    $0x10,%eax
 81ccb56:	8b 10                	mov    (%eax),%edx
 81ccb58:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ccb5b:	89 04 24             	mov    %eax,(%esp)
 81ccb5e:	ff d2                	call   *%edx
 81ccb60:	83 f0 01             	xor    $0x1,%eax
 81ccb63:	84 c0                	test   %al,%al
 81ccb65:	74 17                	je     81ccb7e <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x226>
 81ccb67:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81ccb6a:	89 04 24             	mov    %eax,(%esp)
 81ccb6d:	e8 64 47 f2 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 81ccb72:	83 f8 01             	cmp    $0x1,%eax
 81ccb75:	7f 07                	jg     81ccb7e <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x226>
 81ccb77:	b8 01 00 00 00       	mov    $0x1,%eax
 81ccb7c:	eb 05                	jmp    81ccb83 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x22b>
 81ccb7e:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccb83:	84 c0                	test   %al,%al
 81ccb85:	74 04                	je     81ccb8b <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x233>
 81ccb87:	c6 45 db 01          	movb   $0x1,-0x25(%ebp)
 81ccb8b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccb8e:	8b 40 39             	mov    0x39(%eax),%eax
 81ccb91:	85 c0                	test   %eax,%eax
 81ccb93:	75 04                	jne    81ccb99 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x241>
 81ccb95:	c6 45 db 01          	movb   $0x1,-0x25(%ebp)
 81ccb99:	0f b6 55 db          	movzbl -0x25(%ebp),%edx
 81ccb9d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccba0:	8b 40 2e             	mov    0x2e(%eax),%eax
 81ccba3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ccba7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ccbab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccbae:	89 04 24             	mov    %eax,(%esp)
 81ccbb1:	e8 d4 99 47 00       	call   864658a <_ZN5CUser18IncrementTradeGoldEji>
 81ccbb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccbb9:	89 04 24             	mov    %eax,(%esp)
 81ccbbc:	e8 f9 40 f4 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 81ccbc1:	66 89 45 ce          	mov    %ax,-0x32(%ebp)
 81ccbc5:	c7 04 24 19 00 00 00 	movl   $0x19,(%esp)
 81ccbcc:	e8 b6 4f 4e 00       	call   86b1b87 <_Z12get_rand_inti>
 81ccbd1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81ccbd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccbd7:	89 04 24             	mov    %eax,(%esp)
 81ccbda:	e8 9f d6 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81ccbdf:	89 04 24             	mov    %eax,(%esp)
 81ccbe2:	e8 ef 7b f6 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81ccbe7:	89 85 20 c0 ff ff    	mov    %eax,-0x3fe0(%ebp)
 81ccbed:	db 85 20 c0 ff ff    	fildl  -0x3fe0(%ebp)
 81ccbf3:	db 45 d0             	fildl  -0x30(%ebp)
 81ccbf6:	dd 05 38 63 bd 08    	fldl   0x8bd6338
 81ccbfc:	de c9                	fmulp  %st,%st(1)
 81ccbfe:	d9 9d 24 c0 ff ff    	fstps  -0x3fdc(%ebp)
 81ccc04:	d9 85 24 c0 ff ff    	flds   -0x3fdc(%ebp)
 81ccc0a:	dd 05 40 63 bd 08    	fldl   0x8bd6340
 81ccc10:	de c1                	faddp  %st,%st(1)
 81ccc12:	de c9                	fmulp  %st,%st(1)
 81ccc14:	d9 bd 1e c0 ff ff    	fnstcw -0x3fe2(%ebp)
 81ccc1a:	0f b7 85 1e c0 ff ff 	movzwl -0x3fe2(%ebp),%eax
 81ccc21:	b4 0c                	mov    $0xc,%ah
 81ccc23:	66 89 85 1c c0 ff ff 	mov    %ax,-0x3fe4(%ebp)
 81ccc2a:	d9 ad 1c c0 ff ff    	fldcw  -0x3fe4(%ebp)
 81ccc30:	df bd 10 c0 ff ff    	fistpll -0x3ff0(%ebp)
 81ccc36:	d9 ad 1e c0 ff ff    	fldcw  -0x3fe2(%ebp)
 81ccc3c:	8b 85 10 c0 ff ff    	mov    -0x3ff0(%ebp),%eax
 81ccc42:	8b 95 14 c0 ff ff    	mov    -0x3fec(%ebp),%edx
 81ccc48:	89 c2                	mov    %eax,%edx
 81ccc4a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccc4d:	8b 40 2e             	mov    0x2e(%eax),%eax
 81ccc50:	39 c2                	cmp    %eax,%edx
 81ccc52:	0f 96 c0             	setbe  %al
 81ccc55:	84 c0                	test   %al,%al
 81ccc57:	0f 84 45 01 00 00    	je     81ccda2 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x44a>
 81ccc5d:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 81ccc62:	c7 44 24 08 1d 24 00 	movl   $0x241d,0x8(%esp)
 81ccc69:	00 
 81ccc6a:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81ccc71:	08 
 81ccc72:	89 04 24             	mov    %eax,(%esp)
 81ccc75:	e8 0c 2e 0c 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 81ccc7a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81ccc81:	00 
 81ccc82:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ccc86:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81ccc89:	89 04 24             	mov    %eax,(%esp)
 81ccc8c:	e8 95 bf ef ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 81ccc91:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81ccc94:	89 04 24             	mov    %eax,(%esp)
 81ccc97:	e8 aa bf ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81ccc9c:	c7 44 24 04 8a 01 00 	movl   $0x18a,0x4(%esp)
 81ccca3:	00 
 81ccca4:	89 04 24             	mov    %eax,(%esp)
 81ccca7:	e8 aa bf ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cccac:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cccaf:	89 04 24             	mov    %eax,(%esp)
 81cccb2:	e8 df bf ef ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81cccb7:	89 c3                	mov    %eax,%ebx
 81cccb9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81cccbc:	89 04 24             	mov    %eax,(%esp)
 81cccbf:	e8 82 bf ef ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81cccc4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81cccc8:	89 04 24             	mov    %eax,(%esp)
 81ccccb:	e8 86 bf ef ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81cccd0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81cccd3:	89 04 24             	mov    %eax,(%esp)
 81cccd6:	e8 73 bf ef ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81cccdb:	89 04 24             	mov    %eax,(%esp)
 81cccde:	e8 51 a1 06 00       	call   8236e34 <_ZN12CStreamGuard11GetInBufferI20SIG_FIND_FACTORY_HUBEEPT_v>
 81ccce3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81ccce6:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81ccced:	00 
 81cccee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cccf5:	00 
 81cccf6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81cccf9:	89 04 24             	mov    %eax,(%esp)
 81cccfc:	e8 bf 0f eb ff       	call   807dcc0 <memset@plt>
 81ccd01:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccd04:	89 04 24             	mov    %eax,(%esp)
 81ccd07:	e8 62 d6 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81ccd0c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81ccd0f:	89 02                	mov    %eax,(%edx)
 81ccd11:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81ccd14:	8b 40 0d             	mov    0xd(%eax),%eax
 81ccd17:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 81ccd1a:	8d 4a 11             	lea    0x11(%edx),%ecx
 81ccd1d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81ccd20:	83 c2 04             	add    $0x4,%edx
 81ccd23:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ccd27:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81ccd2b:	89 14 24             	mov    %edx,(%esp)
 81ccd2e:	e8 9d 0b eb ff       	call   807d8d0 <strncpy@plt>
 81ccd33:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ccd36:	c6 40 21 00          	movb   $0x0,0x21(%eax)
 81ccd3a:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 81ccd41:	e8 41 4e 4e 00       	call   86b1b87 <_Z12get_rand_inti>
 81ccd46:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ccd49:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 81ccd4d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81ccd50:	83 c2 78             	add    $0x78,%edx
 81ccd53:	39 d0                	cmp    %edx,%eax
 81ccd55:	7c 07                	jl     81ccd5e <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x406>
 81ccd57:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81ccd5a:	c6 40 21 01          	movb   $0x1,0x21(%eax)
 81ccd5e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 81ccd63:	8d 55 b8             	lea    -0x48(%ebp),%edx
 81ccd66:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ccd6a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ccd71:	00 
 81ccd72:	89 04 24             	mov    %eax,(%esp)
 81ccd75:	e8 64 42 3a 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 81ccd7a:	eb 1b                	jmp    81ccd97 <_ZN23Dispatcher_MailBox_Send7processEP5CUserR8MSG_BASER9ParamBase+0x43f>
 81ccd7c:	89 d3                	mov    %edx,%ebx
 81ccd7e:	89 c6                	mov    %eax,%esi
 81ccd80:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81ccd83:	89 04 24             	mov    %eax,(%esp)
 81ccd86:	e8 47 fb 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81ccd8b:	89 f0                	mov    %esi,%eax
 81ccd8d:	89 da                	mov    %ebx,%edx
 81ccd8f:	89 04 24             	mov    %eax,(%esp)
 81ccd92:	e8 b9 69 91 00       	call   8ae3750 <_Unwind_Resume>
 81ccd97:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81ccd9a:	89 04 24             	mov    %eax,(%esp)
 81ccd9d:	e8 30 fb 44 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 81ccda2:	b8 00 00 00 00       	mov    $0x0,%eax
 81ccda7:	81 c4 0c 40 00 00    	add    $0x400c,%esp
 81ccdad:	5b                   	pop    %ebx
 81ccdae:	5e                   	pop    %esi
 81ccdaf:	5f                   	pop    %edi
 81ccdb0:	5d                   	pop    %ebp
 81ccdb1:	c3                   	ret

```

```c
// Dispatcher_MailBox_Send::process @ 0x81cc958

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_MailBox_Send::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MailBox_Send::process
          (Dispatcher_MailBox_Send *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  CInventory *pCVar6;
  MSG_BASE *pMVar7;
  uint uVar8;
  CGuildServerProxy *this_00;
  CDataManager *this_01;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  uint local_3ff4;
  MSG_CHECK_MAIL_RECEIVER local_3fd4 [16264];
  CStreamGuard local_4c [8];
  ParamBase *local_44;
  MSG_BASE *local_40;
  int local_3c;
  ushort local_36;
  int local_34;
  undefined4 local_30;
  byte local_29;
  CItem *local_28;
  SIG_FIND_FACTORY_HUB *local_24;
  int local_20;
  
  local_44 = param_3;
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_44 + 4) = uVar3;
  if (0 < *(int *)(local_44 + 4)) {
    return 0;
  }
  if (*(int *)(local_44 + 4) < 0) {
    uVar4 = CUser::get_acc_id(param_1);
    uVar3 = LineFunc(0x23ce,
                     "virtual int Dispatcher_MailBox_Send::process(CUser*, MSG_BASE&, ParamBase&)",
                     *(int *)(local_44 + 4),uVar4);
    return uVar3;
  }
  local_40 = param_2;
  if (*(int *)(param_2 + 0x32) != 0) {
    iVar5 = G_CDataManager();
    local_30 = *(undefined4 *)(iVar5 + 0xa624);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    CInventory::use_money(pCVar6,local_30,0x16,1);
    pMVar7 = local_40 + 0x45;
    iVar5 = *(int *)(local_40 + 0x41);
    uVar4 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    uVar3 = CUser::GetServerGroup(param_1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::SendGuildMail(this_00,uVar8,uVar4,iVar5,(char *)pMVar7);
    return 0;
  }
  if ((*(int *)(param_2 + 0x2e) == 0) || (cVar2 = CUser::reqSendMailCertify(param_1), cVar2 == '\0')
     ) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    MSG_CHECK_MAIL_RECEIVER::
    set<(MSG_CHECK_MAIL_RECEIVER::ENUM_MAILBOX_CHECKTYPE)0,MSG_MAILBOX_SEND>
              (local_3fd4,(MSG_MAILBOX_SEND *)local_40);
    local_3c = WongWork::CMailBoxHelper::ReqDBCheckReceiver
                         (param_1,(char *)(local_40 + 0x11),local_3fd4);
    if (local_3c == 0) {
      local_29 = 0;
      iVar5 = *(int *)(local_40 + 0x39);
      this_01 = (CDataManager *)G_CDataManager();
      local_28 = (CItem *)CDataManager::find_item(this_01,iVar5);
      if (local_28 != (CItem *)0x0) {
        cVar2 = (**(code **)(*(int *)local_28 + 0x10))(local_28);
        if ((cVar2 == '\x01') || (iVar5 = CItem::get_rarity(local_28), 1 < iVar5)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          local_29 = 1;
        }
      }
      if (*(int *)(local_40 + 0x39) == 0) {
        local_29 = 1;
      }
      CUser::IncrementTradeGold(param_1,*(uint *)(local_40 + 0x2e),(uint)local_29);
    }
    else {
      *(int *)(local_44 + 4) = local_3c;
    }
    local_36 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_1);
    local_34 = get_rand_int(0x19);
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    iVar5 = CInventory::get_money(pCVar6);
    local_3ff4 = (uint)(longlong)
                       ROUND(((float)_DAT_08bd6340 + (float)_DAT_08bd6338 * (float)local_34) *
                             (float)iVar5);
    if (local_3ff4 <= *(uint *)(local_40 + 0x2e)) {
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Impl_1.cpp",0x241d);
      CStreamGuard::CStreamGuard(local_4c,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 081ccca7 to 081ccd79 has its CatchHandler @ 081ccd7c */
      CStreamGuard::operator<<(pCVar10,0x18a);
      iVar5 = CUser::GetUID(param_1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
      CStreamGuard::operator<<(pCVar10,iVar5);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
      local_24 = CStreamGuard::GetInBuffer<SIG_FIND_FACTORY_HUB>(pCVar10);
      memset(local_24,0,0x24);
      uVar3 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_24 = uVar3;
      strncpy((char *)(local_24 + 4),(char *)(local_40 + 0x11),*(size_t *)(local_40 + 0xd));
      local_24[0x21] = (SIG_FIND_FACTORY_HUB)0x0;
      local_20 = get_rand_int(0x14);
      if (local_20 + 0x78 <= (int)(uint)local_36) {
        local_24[0x21] = (SIG_FIND_FACTORY_HUB)0x1;
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_4c);
      CStreamGuard::~CStreamGuard(local_4c);
    }
    return 0;
  }
  CUser::set_MailMsgData(param_1,(MSG_MAILBOX_SEND *)local_40);
  return 0;
}

```

---

## read

```asm
// === 081cc3da Dispatcher_MailBox_Send::read  [0x081cc3da-0x81cc635] ===
 81cc3da:	55                   	push   %ebp
 81cc3db:	89 e5                	mov    %esp,%ebp
 81cc3dd:	83 ec 28             	sub    $0x28,%esp
 81cc3e0:	8b 45 10             	mov    0x10(%ebp),%eax
 81cc3e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cc3e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc3e9:	83 c0 0d             	add    $0xd,%eax
 81cc3ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc3f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc3f3:	89 04 24             	mov    %eax,(%esp)
 81cc3f6:	e8 f5 0c 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cc3fb:	83 f0 01             	xor    $0x1,%eax
 81cc3fe:	84 c0                	test   %al,%al
 81cc400:	74 29                	je     81cc42b <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x51>
 81cc402:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc409:	00 
 81cc40a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc411:	00 
 81cc412:	c7 44 24 04 a0 4b bd 	movl   $0x8bd4ba0,0x4(%esp)
 81cc419:	08 
 81cc41a:	c7 04 24 09 23 00 00 	movl   $0x2309,(%esp)
 81cc421:	e8 b1 44 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc426:	e9 09 02 00 00       	jmp    81cc634 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x25a>
 81cc42b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc42e:	8b 40 0d             	mov    0xd(%eax),%eax
 81cc431:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cc434:	83 c2 11             	add    $0x11,%edx
 81cc437:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cc43b:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81cc442:	00 
 81cc443:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc447:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc44a:	89 04 24             	mov    %eax,(%esp)
 81cc44d:	e8 6a 0e 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cc452:	83 f0 01             	xor    $0x1,%eax
 81cc455:	84 c0                	test   %al,%al
 81cc457:	0f 85 8c 00 00 00    	jne    81cc4e9 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x10f>
 81cc45d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc460:	83 c0 2e             	add    $0x2e,%eax
 81cc463:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc467:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc46a:	89 04 24             	mov    %eax,(%esp)
 81cc46d:	e8 ce 0d 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cc472:	83 f0 01             	xor    $0x1,%eax
 81cc475:	84 c0                	test   %al,%al
 81cc477:	75 70                	jne    81cc4e9 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x10f>
 81cc479:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc47c:	83 c0 36             	add    $0x36,%eax
 81cc47f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc483:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc486:	89 04 24             	mov    %eax,(%esp)
 81cc489:	e8 e2 0a 3c 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81cc48e:	83 f0 01             	xor    $0x1,%eax
 81cc491:	84 c0                	test   %al,%al
 81cc493:	75 54                	jne    81cc4e9 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x10f>
 81cc495:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc498:	83 c0 37             	add    $0x37,%eax
 81cc49b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc49f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc4a2:	89 04 24             	mov    %eax,(%esp)
 81cc4a5:	e8 06 0c 3c 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81cc4aa:	83 f0 01             	xor    $0x1,%eax
 81cc4ad:	84 c0                	test   %al,%al
 81cc4af:	75 38                	jne    81cc4e9 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x10f>
 81cc4b1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc4b4:	83 c0 39             	add    $0x39,%eax
 81cc4b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc4bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc4be:	89 04 24             	mov    %eax,(%esp)
 81cc4c1:	e8 b8 0d 3c 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81cc4c6:	83 f0 01             	xor    $0x1,%eax
 81cc4c9:	84 c0                	test   %al,%al
 81cc4cb:	75 1c                	jne    81cc4e9 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x10f>
 81cc4cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc4d0:	83 c0 3d             	add    $0x3d,%eax
 81cc4d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc4d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc4da:	89 04 24             	mov    %eax,(%esp)
 81cc4dd:	e8 0e 0c 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cc4e2:	83 f0 01             	xor    $0x1,%eax
 81cc4e5:	84 c0                	test   %al,%al
 81cc4e7:	74 07                	je     81cc4f0 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x116>
 81cc4e9:	b8 01 00 00 00       	mov    $0x1,%eax
 81cc4ee:	eb 05                	jmp    81cc4f5 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x11b>
 81cc4f0:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc4f5:	84 c0                	test   %al,%al
 81cc4f7:	74 29                	je     81cc522 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x148>
 81cc4f9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc500:	00 
 81cc501:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc508:	00 
 81cc509:	c7 44 24 04 a0 4b bd 	movl   $0x8bd4ba0,0x4(%esp)
 81cc510:	08 
 81cc511:	c7 04 24 15 23 00 00 	movl   $0x2315,(%esp)
 81cc518:	e8 ba 43 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc51d:	e9 12 01 00 00       	jmp    81cc634 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x25a>
 81cc522:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc525:	c7 40 41 00 00 00 00 	movl   $0x0,0x41(%eax)
 81cc52c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc52f:	c7 40 32 00 00 00 00 	movl   $0x0,0x32(%eax)
 81cc536:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc539:	83 c0 45             	add    $0x45,%eax
 81cc53c:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81cc543:	00 
 81cc544:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cc54b:	00 
 81cc54c:	89 04 24             	mov    %eax,(%esp)
 81cc54f:	e8 6c 17 eb ff       	call   807dcc0 <memset@plt>
 81cc554:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc557:	83 c0 41             	add    $0x41,%eax
 81cc55a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc55e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc561:	89 04 24             	mov    %eax,(%esp)
 81cc564:	e8 87 0b 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cc569:	83 f0 01             	xor    $0x1,%eax
 81cc56c:	84 c0                	test   %al,%al
 81cc56e:	74 29                	je     81cc599 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x1bf>
 81cc570:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc577:	00 
 81cc578:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc57f:	00 
 81cc580:	c7 44 24 04 a0 4b bd 	movl   $0x8bd4ba0,0x4(%esp)
 81cc587:	08 
 81cc588:	c7 04 24 1b 23 00 00 	movl   $0x231b,(%esp)
 81cc58f:	e8 43 43 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc594:	e9 9b 00 00 00       	jmp    81cc634 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x25a>
 81cc599:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc59c:	8b 40 41             	mov    0x41(%eax),%eax
 81cc59f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cc5a2:	83 c2 45             	add    $0x45,%edx
 81cc5a5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cc5a9:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81cc5b0:	00 
 81cc5b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cc5b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc5b8:	89 04 24             	mov    %eax,(%esp)
 81cc5bb:	e8 fc 0c 3c 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cc5c0:	83 f0 01             	xor    $0x1,%eax
 81cc5c3:	84 c0                	test   %al,%al
 81cc5c5:	74 26                	je     81cc5ed <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x213>
 81cc5c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc5ce:	00 
 81cc5cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc5d6:	00 
 81cc5d7:	c7 44 24 04 a0 4b bd 	movl   $0x8bd4ba0,0x4(%esp)
 81cc5de:	08 
 81cc5df:	c7 04 24 1e 23 00 00 	movl   $0x231e,(%esp)
 81cc5e6:	e8 ec 42 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc5eb:	eb 47                	jmp    81cc634 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x25a>
 81cc5ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cc5f0:	83 c0 32             	add    $0x32,%eax
 81cc5f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cc5f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cc5fa:	89 04 24             	mov    %eax,(%esp)
 81cc5fd:	e8 3e 0c 3c 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81cc602:	83 f0 01             	xor    $0x1,%eax
 81cc605:	84 c0                	test   %al,%al
 81cc607:	74 26                	je     81cc62f <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x255>
 81cc609:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cc610:	00 
 81cc611:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cc618:	00 
 81cc619:	c7 44 24 04 a0 4b bd 	movl   $0x8bd4ba0,0x4(%esp)
 81cc620:	08 
 81cc621:	c7 04 24 21 23 00 00 	movl   $0x2321,(%esp)
 81cc628:	e8 aa 42 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cc62d:	eb 05                	jmp    81cc634 <_ZN23Dispatcher_MailBox_Send4readER9PacketBufR8MSG_BASE+0x25a>
 81cc62f:	b8 00 00 00 00       	mov    $0x0,%eax
 81cc634:	c9                   	leave
 81cc635:	c3                   	ret

```

```c
// Dispatcher_MailBox_Send::read @ 0x81cc3da

/* Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_MailBox_Send::read(Dispatcher_MailBox_Send *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  
  cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar2 == '\x01') {
    cVar2 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x11),0x1d,*(int *)(param_2 + 0xd));
    if ((((cVar2 == '\x01') &&
         (cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x2e)), cVar2 == '\x01')) &&
        (cVar2 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x36)), cVar2 == '\x01')) &&
       (((cVar2 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x37)), cVar2 == '\x01' &&
         (cVar2 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x39)), cVar2 == '\x01')) &&
        (cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x3d)), cVar2 == '\x01')))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = LineFunc(0x2315,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
    else {
      *(undefined4 *)(param_2 + 0x41) = 0;
      *(undefined4 *)(param_2 + 0x32) = 0;
      memset(param_2 + 0x45,0,0x100);
      cVar2 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x41));
      if (cVar2 == '\x01') {
        cVar2 = PacketBuf::get_str(param_1,(char *)(param_2 + 0x45),0x100,*(int *)(param_2 + 0x41));
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x32));
          if (cVar2 == '\x01') {
            uVar3 = 0;
          }
          else {
            uVar3 = LineFunc(0x2321,
                             "virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0,0)
            ;
          }
        }
        else {
          uVar3 = LineFunc(0x231e,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0x231b,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    return uVar3;
  }
  uVar3 = LineFunc(0x2309,"virtual int Dispatcher_MailBox_Send::read(PacketBuf&, MSG_BASE&)",0,0);
  return uVar3;
}

```

---

## send

```asm
// === 081ccdb2 Dispatcher_MailBox_Send::send  [0x081ccdb2-0x81ccdf9] ===
 81ccdb2:	55                   	push   %ebp
 81ccdb3:	89 e5                	mov    %esp,%ebp
 81ccdb5:	83 ec 28             	sub    $0x28,%esp
 81ccdb8:	8b 45 10             	mov    0x10(%ebp),%eax
 81ccdbb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ccdbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccdc1:	8b 40 04             	mov    0x4(%eax),%eax
 81ccdc4:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81ccdc9:	74 2c                	je     81ccdf7 <_ZN23Dispatcher_MailBox_Send4sendEP5CUserR9ParamBase+0x45>
 81ccdcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccdce:	8b 40 04             	mov    0x4(%eax),%eax
 81ccdd1:	85 c0                	test   %eax,%eax
 81ccdd3:	74 23                	je     81ccdf8 <_ZN23Dispatcher_MailBox_Send4sendEP5CUserR9ParamBase+0x46>
 81ccdd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ccdd8:	8b 40 04             	mov    0x4(%eax),%eax
 81ccddb:	0f b6 c0             	movzbl %al,%eax
 81ccdde:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ccde2:	c7 44 24 04 61 00 00 	movl   $0x61,0x4(%esp)
 81ccde9:	00 
 81ccdea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ccded:	89 04 24             	mov    %eax,(%esp)
 81ccdf0:	e8 4d f1 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81ccdf5:	eb 01                	jmp    81ccdf8 <_ZN23Dispatcher_MailBox_Send4sendEP5CUserR9ParamBase+0x46>
 81ccdf7:	90                   	nop
 81ccdf8:	c9                   	leave
 81ccdf9:	c3                   	ret

```

```c
// Dispatcher_MailBox_Send::send @ 0x81ccdb2

/* Dispatcher_MailBox_Send::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_MailBox_Send::send(Dispatcher_MailBox_Send *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x61,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

