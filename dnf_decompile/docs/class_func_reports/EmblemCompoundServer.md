# EmblemCompoundServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CheckCondition

```asm
// === 08191636 EmblemCompoundServer::CheckCondition  [0x08191636-0x8191817] ===
 8191636:	55                   	push   %ebp
 8191637:	89 e5                	mov    %esp,%ebp
 8191639:	56                   	push   %esi
 819163a:	53                   	push   %ebx
 819163b:	83 ec 30             	sub    $0x30,%esp
 819163e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8191645:	00 
 8191646:	8b 45 10             	mov    0x10(%ebp),%eax
 8191649:	89 44 24 08          	mov    %eax,0x8(%esp)
 819164d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191650:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191654:	8b 45 08             	mov    0x8(%ebp),%eax
 8191657:	89 04 24             	mov    %eax,(%esp)
 819165a:	e8 b9 01 00 00       	call   8191818 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi>
 819165f:	83 f0 01             	xor    $0x1,%eax
 8191662:	84 c0                	test   %al,%al
 8191664:	74 0a                	je     8191670 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x3a>
 8191666:	b8 00 00 00 00       	mov    $0x0,%eax
 819166b:	e9 a1 01 00 00       	jmp    8191811 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x1db>
 8191670:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8191677:	00 
 8191678:	8b 45 10             	mov    0x10(%ebp),%eax
 819167b:	89 44 24 08          	mov    %eax,0x8(%esp)
 819167f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191682:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191686:	8b 45 08             	mov    0x8(%ebp),%eax
 8191689:	89 04 24             	mov    %eax,(%esp)
 819168c:	e8 87 01 00 00       	call   8191818 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi>
 8191691:	83 f0 01             	xor    $0x1,%eax
 8191694:	84 c0                	test   %al,%al
 8191696:	74 0a                	je     81916a2 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x6c>
 8191698:	b8 00 00 00 00       	mov    $0x0,%eax
 819169d:	e9 6f 01 00 00       	jmp    8191811 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x1db>
 81916a2:	8b 45 10             	mov    0x10(%ebp),%eax
 81916a5:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81916a9:	98                   	cwtl
 81916aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81916ad:	8b 45 10             	mov    0x10(%ebp),%eax
 81916b0:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81916b4:	0f bf d0             	movswl %ax,%edx
 81916b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81916ba:	39 c2                	cmp    %eax,%edx
 81916bc:	75 08                	jne    81916c6 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x90>
 81916be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81916c1:	83 f8 06             	cmp    $0x6,%eax
 81916c4:	7e 7c                	jle    8191742 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x10c>
 81916c6:	c7 44 24 08 d8 00 00 	movl   $0xd8,0x8(%esp)
 81916cd:	00 
 81916ce:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 81916d5:	00 
 81916d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81916d9:	89 04 24             	mov    %eax,(%esp)
 81916dc:	e8 61 a8 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81916e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81916e4:	89 04 24             	mov    %eax,(%esp)
 81916e7:	e8 62 a5 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81916ec:	8b 55 10             	mov    0x10(%ebp),%edx
 81916ef:	0f b7 52 0a          	movzwl 0xa(%edx),%edx
 81916f3:	0f bf ca             	movswl %dx,%ecx
 81916f6:	8b 55 10             	mov    0x10(%ebp),%edx
 81916f9:	0f b7 52 02          	movzwl 0x2(%edx),%edx
 81916fd:	0f bf d2             	movswl %dx,%edx
 8191700:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8191704:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8191708:	89 54 24 14          	mov    %edx,0x14(%esp)
 819170c:	c7 44 24 10 cc a5 b9 	movl   $0x8b9a5cc,0x10(%esp)
 8191713:	08 
 8191714:	c7 44 24 0c e8 01 00 	movl   $0x1e8,0xc(%esp)
 819171b:	00 
 819171c:	c7 44 24 08 20 b7 b9 	movl   $0x8b9b720,0x8(%esp)
 8191723:	08 
 8191724:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 819172b:	08 
 819172c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8191733:	e8 d2 24 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8191738:	b8 00 00 00 00       	mov    $0x0,%eax
 819173d:	e9 cf 00 00 00       	jmp    8191811 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x1db>
 8191742:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191745:	89 04 24             	mov    %eax,(%esp)
 8191748:	e8 31 8b f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 819174d:	89 04 24             	mov    %eax,(%esp)
 8191750:	e8 81 30 fa ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8191755:	89 c3                	mov    %eax,%ebx
 8191757:	8b 45 08             	mov    0x8(%ebp),%eax
 819175a:	8d 50 04             	lea    0x4(%eax),%edx
 819175d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8191760:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191764:	89 14 24             	mov    %edx,(%esp)
 8191767:	e8 40 1d 00 00       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 819176c:	8b 00                	mov    (%eax),%eax
 819176e:	39 c3                	cmp    %eax,%ebx
 8191770:	0f 9c c0             	setl   %al
 8191773:	84 c0                	test   %al,%al
 8191775:	0f 84 91 00 00 00    	je     819180c <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x1d6>
 819177b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8191782:	00 
 8191783:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 819178a:	00 
 819178b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819178e:	89 04 24             	mov    %eax,(%esp)
 8191791:	e8 ac a7 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191796:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191799:	89 04 24             	mov    %eax,(%esp)
 819179c:	e8 ad a4 f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81917a1:	89 c3                	mov    %eax,%ebx
 81917a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81917a6:	8d 50 04             	lea    0x4(%eax),%edx
 81917a9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81917ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 81917b0:	89 14 24             	mov    %edx,(%esp)
 81917b3:	e8 f4 1c 00 00       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 81917b8:	8b 30                	mov    (%eax),%esi
 81917ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81917bd:	89 04 24             	mov    %eax,(%esp)
 81917c0:	e8 b9 8a f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81917c5:	89 04 24             	mov    %eax,(%esp)
 81917c8:	e8 09 30 fa ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81917cd:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81917d1:	89 74 24 18          	mov    %esi,0x18(%esp)
 81917d5:	89 44 24 14          	mov    %eax,0x14(%esp)
 81917d9:	c7 44 24 10 08 a6 b9 	movl   $0x8b9a608,0x10(%esp)
 81917e0:	08 
 81917e1:	c7 44 24 0c f0 01 00 	movl   $0x1f0,0xc(%esp)
 81917e8:	00 
 81917e9:	c7 44 24 08 20 b7 b9 	movl   $0x8b9b720,0x8(%esp)
 81917f0:	08 
 81917f1:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 81917f8:	08 
 81917f9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8191800:	e8 05 24 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8191805:	b8 00 00 00 00       	mov    $0x0,%eax
 819180a:	eb 05                	jmp    8191811 <_ZN20EmblemCompoundServer14CheckConditionEP5CUserPN4arad21SigAradEmblemCompoundE+0x1db>
 819180c:	b8 01 00 00 00       	mov    $0x1,%eax
 8191811:	83 c4 30             	add    $0x30,%esp
 8191814:	5b                   	pop    %ebx
 8191815:	5e                   	pop    %esi
 8191816:	5d                   	pop    %ebp
 8191817:	c3                   	ret

```

```c
// EmblemCompoundServer::CheckCondition @ 0x8191636

/* EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*) */

undefined4 __thiscall
EmblemCompoundServer::CheckCondition
          (EmblemCompoundServer *this,CUser *param_1,SigAradEmblemCompound *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int local_10;
  
  cVar1 = GetEmblemInfo(this,param_1,param_2,0);
  if (cVar1 == '\x01') {
    cVar1 = GetEmblemInfo(this,param_1,param_2,1);
    if (cVar1 == '\x01') {
      local_10 = (int)*(short *)(param_2 + 2);
      if ((*(short *)(param_2 + 10) == local_10) && (local_10 < 7)) {
        pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        iVar4 = CInventory::get_money(pCVar3);
        piVar5 = (int *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                        operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                    *)(this + 4),&local_10);
        if (iVar4 < *piVar5) {
          CUser::SendCmdErrorPacket(param_1,0x24e,10);
          uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          puVar7 = (undefined4 *)
                   std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                   operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                               *)(this + 4),&local_10);
          uVar2 = *puVar7;
          pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
          uVar8 = CInventory::get_money(pCVar3);
          LogManager::logFormat
                    (1,"localjapan/Arad_EmblemReformServer.cpp",
                     "bool EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)"
                     ,0x1f0,"EMBLEM COMPOUND : [money:%d] [need:%d] [charac_no:%d]",uVar8,uVar2,
                     uVar6);
          uVar2 = 0;
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,0xd8);
        uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"localjapan/Arad_EmblemReformServer.cpp",
                   "bool EmblemCompoundServer::CheckCondition(CUser*, arad::SigAradEmblemCompound*)"
                   ,0x1e8,"EMBLEM COMPOUND : [grade1:%d] [grade2:%d] [charac_no:%d]",
                   (int)*(short *)(param_2 + 2),(int)*(short *)(param_2 + 10),uVar2);
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## Destroy

```asm
// === 0819162c EmblemCompoundServer::Destroy  [0x0819162c-0x8191635] ===
 819162c:	55                   	push   %ebp
 819162d:	89 e5                	mov    %esp,%ebp
 819162f:	b8 01 00 00 00       	mov    $0x1,%eax
 8191634:	5d                   	pop    %ebp
 8191635:	c3                   	ret

```

```c
// EmblemCompoundServer::Destroy @ 0x819162c

/* EmblemCompoundServer::Destroy() */

undefined4 EmblemCompoundServer::Destroy(void)

{
  return 1;
}

```

---

## EmblemCompoundServer

```asm
// === 0819155e EmblemCompoundServer::EmblemCompoundServer  [0x0819155e-0x8191593] ===
 819155e:	55                   	push   %ebp
 819155f:	89 e5                	mov    %esp,%ebp
 8191561:	83 ec 18             	sub    $0x18,%esp
 8191564:	8b 45 08             	mov    0x8(%ebp),%eax
 8191567:	83 c0 04             	add    $0x4,%eax
 819156a:	89 04 24             	mov    %eax,(%esp)
 819156d:	e8 96 fe 71 00       	call   88b1408 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev>
 8191572:	8b 45 08             	mov    0x8(%ebp),%eax
 8191575:	89 04 24             	mov    %eax,(%esp)
 8191578:	e8 b9 20 00 00       	call   8193636 <_ZN4ARAD9SingletonI20EmblemCompoundServerEC1Ev>
 819157d:	8b 45 08             	mov    0x8(%ebp),%eax
 8191580:	89 04 24             	mov    %eax,(%esp)
 8191583:	e8 cc 0e f5 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 8191588:	8b 45 08             	mov    0x8(%ebp),%eax
 819158b:	c7 00 48 b9 b9 08    	movl   $0x8b9b948,(%eax)
 8191591:	c9                   	leave
 8191592:	c3                   	ret
 8191593:	90                   	nop

```

```c
// EmblemCompoundServer::EmblemCompoundServer @ 0x819155e

/* EmblemCompoundServer::EmblemCompoundServer() */

void __thiscall EmblemCompoundServer::EmblemCompoundServer(EmblemCompoundServer *this)

{
  ARAD::SCRIPT::EmblemCompound::EmblemCompound((EmblemCompound *)(this + 4));
  ARAD::Singleton<EmblemCompoundServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b9b948;
  return;
}

```

---

## GetEmblemInfo

```asm
// === 08191818 EmblemCompoundServer::GetEmblemInfo  [0x08191818-0x81919e7] ===
 8191818:	55                   	push   %ebp
 8191819:	89 e5                	mov    %esp,%ebp
 819181b:	53                   	push   %ebx
 819181c:	83 ec 24             	sub    $0x24,%esp
 819181f:	8b 55 14             	mov    0x14(%ebp),%edx
 8191822:	8b 45 10             	mov    0x10(%ebp),%eax
 8191825:	0f b7 04 d0          	movzwl (%eax,%edx,8),%eax
 8191829:	0f b7 d8             	movzwl %ax,%ebx
 819182c:	8b 45 0c             	mov    0xc(%ebp),%eax
 819182f:	89 04 24             	mov    %eax,(%esp)
 8191832:	e8 47 8a f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8191837:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 819183b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191842:	00 
 8191843:	89 04 24             	mov    %eax,(%esp)
 8191846:	e8 93 a9 36 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 819184b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 819184e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8191852:	74 0f                	je     8191863 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x4b>
 8191854:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8191857:	89 04 24             	mov    %eax,(%esp)
 819185a:	e8 07 d5 f8 ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 819185f:	84 c0                	test   %al,%al
 8191861:	74 07                	je     819186a <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x52>
 8191863:	b8 01 00 00 00       	mov    $0x1,%eax
 8191868:	eb 05                	jmp    819186f <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x57>
 819186a:	b8 00 00 00 00       	mov    $0x0,%eax
 819186f:	84 c0                	test   %al,%al
 8191871:	74 49                	je     81918bc <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0xa4>
 8191873:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 819187a:	00 
 819187b:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191882:	00 
 8191883:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191886:	89 04 24             	mov    %eax,(%esp)
 8191889:	e8 b4 a6 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 819188e:	8b 55 14             	mov    0x14(%ebp),%edx
 8191891:	8b 45 10             	mov    0x10(%ebp),%eax
 8191894:	0f b7 04 d0          	movzwl (%eax,%edx,8),%eax
 8191898:	0f b7 c0             	movzwl %ax,%eax
 819189b:	89 44 24 08          	mov    %eax,0x8(%esp)
 819189f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81918a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81918a6:	c7 04 24 3e a6 b9 08 	movl   $0x8b9a63e,(%esp)
 81918ad:	e8 f2 62 00 00       	call   8197ba4 <_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert>
 81918b2:	b8 00 00 00 00       	mov    $0x0,%eax
 81918b7:	e9 26 01 00 00       	jmp    81919e2 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x1ca>
 81918bc:	8b 55 14             	mov    0x14(%ebp),%edx
 81918bf:	8b 45 10             	mov    0x10(%ebp),%eax
 81918c2:	0f b7 04 d0          	movzwl (%eax,%edx,8),%eax
 81918c6:	0f b7 c0             	movzwl %ax,%eax
 81918c9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81918cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81918d4:	00 
 81918d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81918d8:	89 04 24             	mov    %eax,(%esp)
 81918db:	e8 62 50 4b 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81918e0:	84 c0                	test   %al,%al
 81918e2:	74 49                	je     819192d <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x115>
 81918e4:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 81918eb:	00 
 81918ec:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 81918f3:	00 
 81918f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81918f7:	89 04 24             	mov    %eax,(%esp)
 81918fa:	e8 43 a6 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81918ff:	8b 55 14             	mov    0x14(%ebp),%edx
 8191902:	8b 45 10             	mov    0x10(%ebp),%eax
 8191905:	0f b7 04 d0          	movzwl (%eax,%edx,8),%eax
 8191909:	0f b7 c0             	movzwl %ax,%eax
 819190c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8191910:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191913:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191917:	c7 04 24 3e a6 b9 08 	movl   $0x8b9a63e,(%esp)
 819191e:	e8 da 62 00 00       	call   8197bfd <_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert>
 8191923:	b8 00 00 00 00       	mov    $0x0,%eax
 8191928:	e9 b5 00 00 00       	jmp    81919e2 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x1ca>
 819192d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8191930:	8b 40 02             	mov    0x2(%eax),%eax
 8191933:	89 c3                	mov    %eax,%ebx
 8191935:	e8 61 a8 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 819193a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 819193e:	89 04 24             	mov    %eax,(%esp)
 8191941:	e8 ec e0 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8191946:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8191949:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 819194d:	74 17                	je     8191966 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x14e>
 819194f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8191952:	8b 00                	mov    (%eax),%eax
 8191954:	83 c0 0c             	add    $0xc,%eax
 8191957:	8b 10                	mov    (%eax),%edx
 8191959:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819195c:	89 04 24             	mov    %eax,(%esp)
 819195f:	ff d2                	call   *%edx
 8191961:	83 f8 14             	cmp    $0x14,%eax
 8191964:	74 07                	je     819196d <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x155>
 8191966:	b8 01 00 00 00       	mov    $0x1,%eax
 819196b:	eb 05                	jmp    8191972 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x15a>
 819196d:	b8 00 00 00 00       	mov    $0x0,%eax
 8191972:	84 c0                	test   %al,%al
 8191974:	74 3f                	je     81919b5 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x19d>
 8191976:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 819197d:	00 
 819197e:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191985:	00 
 8191986:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191989:	89 04 24             	mov    %eax,(%esp)
 819198c:	e8 b1 a5 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191991:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8191994:	8b 40 02             	mov    0x2(%eax),%eax
 8191997:	89 44 24 08          	mov    %eax,0x8(%esp)
 819199b:	8b 45 0c             	mov    0xc(%ebp),%eax
 819199e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81919a2:	c7 04 24 3e a6 b9 08 	movl   $0x8b9a63e,(%esp)
 81919a9:	e8 01 63 00 00       	call   8197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>
 81919ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81919b3:	eb 2d                	jmp    81919e2 <_ZN20EmblemCompoundServer13GetEmblemInfoEP5CUserPN4arad21SigAradEmblemCompoundEi+0x1ca>
 81919b5:	8b 5d 14             	mov    0x14(%ebp),%ebx
 81919b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81919bb:	89 04 24             	mov    %eax,(%esp)
 81919be:	e8 91 f2 f7 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 81919c3:	89 c2                	mov    %eax,%edx
 81919c5:	8b 45 10             	mov    0x10(%ebp),%eax
 81919c8:	66 89 54 d8 02       	mov    %dx,0x2(%eax,%ebx,8)
 81919cd:	8b 55 14             	mov    0x14(%ebp),%edx
 81919d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81919d3:	8b 48 02             	mov    0x2(%eax),%ecx
 81919d6:	8b 45 10             	mov    0x10(%ebp),%eax
 81919d9:	89 4c d0 04          	mov    %ecx,0x4(%eax,%edx,8)
 81919dd:	b8 01 00 00 00       	mov    $0x1,%eax
 81919e2:	83 c4 24             	add    $0x24,%esp
 81919e5:	5b                   	pop    %ebx
 81919e6:	5d                   	pop    %ebp
 81919e7:	c3                   	ret

```

```c
// EmblemCompoundServer::GetEmblemInfo @ 0x8191818

/* EmblemCompoundServer::GetEmblemInfo(CUser*, arad::SigAradEmblemCompound*, int) */

bool __thiscall
EmblemCompoundServer::GetEmblemInfo
          (EmblemCompoundServer *this,CUser *param_1,SigAradEmblemCompound *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  undefined2 uVar4;
  CInventory *this_00;
  Inven_Item *this_01;
  CDataManager *this_02;
  CItem *this_03;
  int iVar5;
  
  uVar1 = *(ushort *)(param_2 + param_3 * 8);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  this_01 = (Inven_Item *)CInventory::GetInvenRef(this_00,1,(uint)uVar1);
  if ((this_01 == (Inven_Item *)0x0) || (cVar3 = Inven_Item::isEmpty(this_01), cVar3 != '\0')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    cVar3 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(param_2 + param_3 * 8));
    if (cVar3 == '\0') {
      iVar5 = *(int *)(this_01 + 2);
      this_02 = (CDataManager *)G_CDataManager();
      this_03 = (CItem *)CDataManager::find_item(this_02,iVar5);
      if ((this_03 == (CItem *)0x0) ||
         (iVar5 = (**(code **)(*(int *)this_03 + 0xc))(this_03), iVar5 != 0x14)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) {
        uVar4 = CItem::get_grade(this_03);
        *(undefined2 *)(param_2 + param_3 * 8 + 2) = uVar4;
        *(undefined4 *)(param_2 + param_3 * 8 + 4) = *(undefined4 *)(this_01 + 2);
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,0x11);
        ARAD::PRINT_ERROR::find_item("EMBLEM COMPOUND",param_1,*(int *)(this_01 + 2));
      }
      return !bVar2;
    }
    CUser::SendCmdErrorPacket(param_1,0x24e,0xd5);
    ARAD::PRINT_ERROR::CheckItemLock("EMBLEM COMPOUND",param_1,*(ushort *)(param_2 + param_3 * 8));
    return false;
  }
  CUser::SendCmdErrorPacket(param_1,0x24e,0x16);
  ARAD::PRINT_ERROR::isEmpty("EMBLEM COMPOUND",param_1,*(ushort *)(param_2 + param_3 * 8));
  return false;
}

```

---

## GetEmblemRandomIndex

```asm
// === 081919e8 EmblemCompoundServer::GetEmblemRandomIndex  [0x081919e8-0x8191ad5] ===
 81919e8:	55                   	push   %ebp
 81919e9:	89 e5                	mov    %esp,%ebp
 81919eb:	83 ec 38             	sub    $0x38,%esp
 81919ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81919f1:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81919f5:	8b 45 08             	mov    0x8(%ebp),%eax
 81919f8:	8d 50 1c             	lea    0x1c(%eax),%edx
 81919fb:	8d 45 0c             	lea    0xc(%ebp),%eax
 81919fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191a02:	89 14 24             	mov    %edx,(%esp)
 8191a05:	e8 32 1c 00 00       	call   819363c <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEEixERS8_>
 8191a0a:	8b 00                	mov    (%eax),%eax
 8191a0c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8191a0f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8191a16:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 8191a1d:	e8 65 01 52 00       	call   86b1b87 <_Z12get_rand_inti>
 8191a22:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8191a25:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191a28:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8191a2c:	98                   	cwtl
 8191a2d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8191a30:	7e 0c                	jle    8191a3e <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit+0x56>
 8191a32:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191a35:	0f b7 00             	movzwl (%eax),%eax
 8191a38:	98                   	cwtl
 8191a39:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8191a3c:	eb 0b                	jmp    8191a49 <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit+0x61>
 8191a3e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191a41:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8191a45:	98                   	cwtl
 8191a46:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8191a49:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8191a4c:	89 d0                	mov    %edx,%eax
 8191a4e:	01 c0                	add    %eax,%eax
 8191a50:	01 d0                	add    %edx,%eax
 8191a52:	c1 e0 02             	shl    $0x2,%eax
 8191a55:	83 c0 30             	add    $0x30,%eax
 8191a58:	03 45 08             	add    0x8(%ebp),%eax
 8191a5b:	83 c0 04             	add    $0x4,%eax
 8191a5e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8191a61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8191a64:	89 04 24             	mov    %eax,(%esp)
 8191a67:	e8 c6 1c 00 00       	call   8193732 <_ZNKSt6vectorImSaImEE5emptyEv>
 8191a6c:	84 c0                	test   %al,%al
 8191a6e:	74 07                	je     8191a77 <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit+0x8f>
 8191a70:	b8 00 00 00 00       	mov    $0x0,%eax
 8191a75:	eb 5d                	jmp    8191ad4 <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit+0xec>
 8191a77:	8b 45 08             	mov    0x8(%ebp),%eax
 8191a7a:	8d 50 1c             	lea    0x1c(%eax),%edx
 8191a7d:	8d 45 0c             	lea    0xc(%ebp),%eax
 8191a80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191a84:	89 14 24             	mov    %edx,(%esp)
 8191a87:	e8 b0 1b 00 00       	call   819363c <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEEixERS8_>
 8191a8c:	8b 00                	mov    (%eax),%eax
 8191a8e:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8191a92:	83 f0 01             	xor    $0x1,%eax
 8191a95:	84 c0                	test   %al,%al
 8191a97:	74 26                	je     8191abf <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit+0xd7>
 8191a99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8191a9c:	89 04 24             	mov    %eax,(%esp)
 8191a9f:	e8 60 3b f6 ff       	call   80f5604 <_ZNKSt6vectorImSaImEE4sizeEv>
 8191aa4:	89 04 24             	mov    %eax,(%esp)
 8191aa7:	e8 db 00 52 00       	call   86b1b87 <_Z12get_rand_inti>
 8191aac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191ab0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8191ab3:	89 04 24             	mov    %eax,(%esp)
 8191ab6:	e8 c9 3b f6 ff       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 8191abb:	8b 00                	mov    (%eax),%eax
 8191abd:	eb 15                	jmp    8191ad4 <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit+0xec>
 8191abf:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 8191ac3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191ac7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8191aca:	89 04 24             	mov    %eax,(%esp)
 8191acd:	e8 b2 3b f6 ff       	call   80f5684 <_ZNSt6vectorImSaImEEixEj>
 8191ad2:	8b 00                	mov    (%eax),%eax
 8191ad4:	c9                   	leave
 8191ad5:	c3                   	ret

```

```c
// EmblemCompoundServer::GetEmblemRandomIndex @ 0x81919e8

/* EmblemCompoundServer::GetEmblemRandomIndex(int, unsigned short) */

undefined4 __thiscall
EmblemCompoundServer::GetEmblemRandomIndex(EmblemCompoundServer *this,int param_1,ushort param_2)

{
  short sVar1;
  short *psVar2;
  ushort uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  undefined2 in_stack_0000000e;
  int local_18;
  
  uVar3 = param_2;
  puVar5 = (undefined4 *)
           std::
           map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
           ::operator[]((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                         *)(this + 0x1c),&param_1);
  psVar2 = (short *)*puVar5;
  iVar6 = get_rand_int(1000);
  if (iVar6 < psVar2[1]) {
    sVar1 = *psVar2;
  }
  else {
    sVar1 = psVar2[2];
  }
  local_18 = (int)sVar1;
  this_00 = (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + local_18 * 0xc + 0x34);
  cVar4 = std::vector<unsigned_long,std::allocator<unsigned_long>>::empty();
  if (cVar4 == '\0') {
    piVar8 = (int *)std::
                    map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                    ::operator[]((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                                  *)(this + 0x1c),&param_1);
    if (*(char *)(*piVar8 + 8) == '\x01') {
      puVar5 = (undefined4 *)
               std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[]
                         (this_00,(uint)uVar3);
      uVar7 = *puVar5;
    }
    else {
      iVar6 = std::vector<unsigned_long,std::allocator<unsigned_long>>::size(this_00);
      uVar9 = get_rand_int(iVar6);
      puVar5 = (undefined4 *)
               std::vector<unsigned_long,std::allocator<unsigned_long>>::operator[](this_00,uVar9);
      uVar7 = *puVar5;
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

```

---

## IsResultSelectable

```asm
// === 08191ad6 EmblemCompoundServer::IsResultSelectable  [0x08191ad6-0x8191af9] ===
 8191ad6:	55                   	push   %ebp
 8191ad7:	89 e5                	mov    %esp,%ebp
 8191ad9:	83 ec 18             	sub    $0x18,%esp
 8191adc:	8b 45 08             	mov    0x8(%ebp),%eax
 8191adf:	8d 50 1c             	lea    0x1c(%eax),%edx
 8191ae2:	8d 45 0c             	lea    0xc(%ebp),%eax
 8191ae5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191ae9:	89 14 24             	mov    %edx,(%esp)
 8191aec:	e8 4b 1b 00 00       	call   819363c <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEEixERS8_>
 8191af1:	8b 00                	mov    (%eax),%eax
 8191af3:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 8191af7:	c9                   	leave
 8191af8:	c3                   	ret
 8191af9:	90                   	nop

```

```c
// EmblemCompoundServer::IsResultSelectable @ 0x8191ad6

/* EmblemCompoundServer::IsResultSelectable(int) */

undefined1 EmblemCompoundServer::IsResultSelectable(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)std::
                  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                  ::operator[]((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
                                *)(param_1 + 0x1c),(int *)&stack0x00000008);
  return *(undefined1 *)(*piVar1 + 8);
}

```

---

## Load

```asm
// === 081915ba EmblemCompoundServer::Load  [0x081915ba-0x819162b] ===
 81915ba:	55                   	push   %ebp
 81915bb:	89 e5                	mov    %esp,%ebp
 81915bd:	83 ec 38             	sub    $0x38,%esp
 81915c0:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81915c7:	00 
 81915c8:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 81915cf:	00 
 81915d0:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 81915d7:	00 
 81915d8:	c7 44 24 08 c7 01 00 	movl   $0x1c7,0x8(%esp)
 81915df:	00 
 81915e0:	c7 44 24 04 80 b7 b9 	movl   $0x8b9b780,0x4(%esp)
 81915e7:	08 
 81915e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81915eb:	89 04 24             	mov    %eax,(%esp)
 81915ee:	e8 53 e1 3b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 81915f3:	c7 44 24 04 a4 a5 b9 	movl   $0x8b9a5a4,0x4(%esp)
 81915fa:	08 
 81915fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81915fe:	89 04 24             	mov    %eax,(%esp)
 8191601:	e8 82 e1 3b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8191606:	8b 45 08             	mov    0x8(%ebp),%eax
 8191609:	83 c0 04             	add    $0x4,%eax
 819160c:	89 04 24             	mov    %eax,(%esp)
 819160f:	e8 36 ff 71 00       	call   88b154a <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv>
 8191614:	85 c0                	test   %eax,%eax
 8191616:	0f 95 c0             	setne  %al
 8191619:	84 c0                	test   %al,%al
 819161b:	74 07                	je     8191624 <_ZN20EmblemCompoundServer4LoadEv+0x6a>
 819161d:	b8 00 00 00 00       	mov    $0x0,%eax
 8191622:	eb 05                	jmp    8191629 <_ZN20EmblemCompoundServer4LoadEv+0x6f>
 8191624:	b8 01 00 00 00       	mov    $0x1,%eax
 8191629:	c9                   	leave
 819162a:	c3                   	ret
 819162b:	90                   	nop

```

```c
// EmblemCompoundServer::Load @ 0x81915ba

/* EmblemCompoundServer::Load() */

bool __thiscall EmblemCompoundServer::Load(EmblemCompoundServer *this)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool EmblemCompoundServer::Load()",0x1c7,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading Emblem Compound script - ");
  iVar1 = ARAD::SCRIPT::EmblemCompound::loadScript((EmblemCompound *)(this + 4));
  return iVar1 == 0;
}

```

---

## Process

```asm
// === 08191afa EmblemCompoundServer::Process  [0x08191afa-0x81921b5] ===
 8191afa:	55                   	push   %ebp
 8191afb:	89 e5                	mov    %esp,%ebp
 8191afd:	56                   	push   %esi
 8191afe:	53                   	push   %ebx
 8191aff:	81 ec e0 00 00 00    	sub    $0xe0,%esp
 8191b05:	8b 45 10             	mov    0x10(%ebp),%eax
 8191b08:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 8191b0c:	0f b7 d0             	movzwl %ax,%edx
 8191b0f:	8b 45 10             	mov    0x10(%ebp),%eax
 8191b12:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8191b16:	98                   	cwtl
 8191b17:	89 54 24 08          	mov    %edx,0x8(%esp)
 8191b1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191b1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8191b22:	89 04 24             	mov    %eax,(%esp)
 8191b25:	e8 be fe ff ff       	call   81919e8 <_ZN20EmblemCompoundServer20GetEmblemRandomIndexEit>
 8191b2a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8191b2d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8191b31:	75 25                	jne    8191b58 <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x5e>
 8191b33:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 8191b3a:	00 
 8191b3b:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191b42:	00 
 8191b43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191b46:	89 04 24             	mov    %eax,(%esp)
 8191b49:	e8 f4 a3 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191b4e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8191b53:	e9 52 06 00 00       	jmp    81921aa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x6b0>
 8191b58:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8191b5b:	e8 3b a6 f3 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8191b60:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8191b64:	89 04 24             	mov    %eax,(%esp)
 8191b67:	e8 c6 de 1c 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8191b6c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8191b6f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8191b73:	74 17                	je     8191b8c <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x92>
 8191b75:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191b78:	8b 00                	mov    (%eax),%eax
 8191b7a:	83 c0 0c             	add    $0xc,%eax
 8191b7d:	8b 10                	mov    (%eax),%edx
 8191b7f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191b82:	89 04 24             	mov    %eax,(%esp)
 8191b85:	ff d2                	call   *%edx
 8191b87:	83 f8 14             	cmp    $0x14,%eax
 8191b8a:	74 07                	je     8191b93 <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x99>
 8191b8c:	b8 01 00 00 00       	mov    $0x1,%eax
 8191b91:	eb 05                	jmp    8191b98 <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x9e>
 8191b93:	b8 00 00 00 00       	mov    $0x0,%eax
 8191b98:	84 c0                	test   %al,%al
 8191b9a:	74 3f                	je     8191bdb <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0xe1>
 8191b9c:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8191ba3:	00 
 8191ba4:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191bab:	00 
 8191bac:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191baf:	89 04 24             	mov    %eax,(%esp)
 8191bb2:	e8 8b a3 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191bb7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8191bba:	89 44 24 08          	mov    %eax,0x8(%esp)
 8191bbe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191bc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191bc5:	c7 04 24 3e a6 b9 08 	movl   $0x8b9a63e,(%esp)
 8191bcc:	e8 de 60 00 00       	call   8197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>
 8191bd1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8191bd6:	e9 cf 05 00 00       	jmp    81921aa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x6b0>
 8191bdb:	8b 45 10             	mov    0x10(%ebp),%eax
 8191bde:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8191be2:	98                   	cwtl
 8191be3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8191be6:	8b 45 08             	mov    0x8(%ebp),%eax
 8191be9:	8d 50 04             	lea    0x4(%eax),%edx
 8191bec:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8191bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191bf3:	89 14 24             	mov    %edx,(%esp)
 8191bf6:	e8 b1 18 00 00       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 8191bfb:	8b 18                	mov    (%eax),%ebx
 8191bfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191c00:	89 04 24             	mov    %eax,(%esp)
 8191c03:	e8 86 86 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8191c08:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8191c0f:	00 
 8191c10:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 8191c17:	00 
 8191c18:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8191c1c:	89 04 24             	mov    %eax,(%esp)
 8191c1f:	e8 28 d9 36 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8191c24:	83 f0 01             	xor    $0x1,%eax
 8191c27:	84 c0                	test   %al,%al
 8191c29:	0f 84 9f 00 00 00    	je     8191cce <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x1d4>
 8191c2f:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8191c36:	00 
 8191c37:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191c3e:	00 
 8191c3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191c42:	89 04 24             	mov    %eax,(%esp)
 8191c45:	e8 f8 a2 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191c4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191c4d:	89 04 24             	mov    %eax,(%esp)
 8191c50:	e8 f9 9f f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8191c55:	89 c3                	mov    %eax,%ebx
 8191c57:	8b 45 10             	mov    0x10(%ebp),%eax
 8191c5a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8191c5e:	98                   	cwtl
 8191c5f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8191c62:	8b 45 08             	mov    0x8(%ebp),%eax
 8191c65:	8d 50 04             	lea    0x4(%eax),%edx
 8191c68:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8191c6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191c6f:	89 14 24             	mov    %edx,(%esp)
 8191c72:	e8 35 18 00 00       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 8191c77:	8b 30                	mov    (%eax),%esi
 8191c79:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191c7c:	89 04 24             	mov    %eax,(%esp)
 8191c7f:	e8 fa 85 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8191c84:	89 04 24             	mov    %eax,(%esp)
 8191c87:	e8 4a 2b fa ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8191c8c:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8191c90:	89 74 24 18          	mov    %esi,0x18(%esp)
 8191c94:	89 44 24 14          	mov    %eax,0x14(%esp)
 8191c98:	c7 44 24 10 08 a6 b9 	movl   $0x8b9a608,0x10(%esp)
 8191c9f:	08 
 8191ca0:	c7 44 24 0c 4e 02 00 	movl   $0x24e,0xc(%esp)
 8191ca7:	00 
 8191ca8:	c7 44 24 08 c0 b6 b9 	movl   $0x8b9b6c0,0x8(%esp)
 8191caf:	08 
 8191cb0:	c7 44 24 04 c4 a3 b9 	movl   $0x8b9a3c4,0x4(%esp)
 8191cb7:	08 
 8191cb8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8191cbf:	e8 46 1f 94 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8191cc4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8191cc9:	e9 dc 04 00 00       	jmp    81921aa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x6b0>
 8191cce:	8b 45 10             	mov    0x10(%ebp),%eax
 8191cd1:	0f b7 00             	movzwl (%eax),%eax
 8191cd4:	0f b7 d8             	movzwl %ax,%ebx
 8191cd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191cda:	89 04 24             	mov    %eax,(%esp)
 8191cdd:	e8 ac 85 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8191ce2:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8191ce9:	00 
 8191cea:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 8191cf1:	00 
 8191cf2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8191cf9:	00 
 8191cfa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8191cfe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191d05:	00 
 8191d06:	89 04 24             	mov    %eax,(%esp)
 8191d09:	e8 fe 22 37 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8191d0e:	83 f0 01             	xor    $0x1,%eax
 8191d11:	84 c0                	test   %al,%al
 8191d13:	74 45                	je     8191d5a <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x260>
 8191d15:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8191d1c:	00 
 8191d1d:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191d24:	00 
 8191d25:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191d28:	89 04 24             	mov    %eax,(%esp)
 8191d2b:	e8 12 a2 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191d30:	8b 45 10             	mov    0x10(%ebp),%eax
 8191d33:	0f b7 00             	movzwl (%eax),%eax
 8191d36:	0f b7 c0             	movzwl %ax,%eax
 8191d39:	89 44 24 08          	mov    %eax,0x8(%esp)
 8191d3d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191d40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191d44:	c7 04 24 3e a6 b9 08 	movl   $0x8b9a63e,(%esp)
 8191d4b:	e8 06 5f 00 00       	call   8197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>
 8191d50:	bb 00 00 00 00       	mov    $0x0,%ebx
 8191d55:	e9 50 04 00 00       	jmp    81921aa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x6b0>
 8191d5a:	8b 45 10             	mov    0x10(%ebp),%eax
 8191d5d:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8191d61:	0f b7 d8             	movzwl %ax,%ebx
 8191d64:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191d67:	89 04 24             	mov    %eax,(%esp)
 8191d6a:	e8 1f 85 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8191d6f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8191d76:	00 
 8191d77:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 8191d7e:	00 
 8191d7f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8191d86:	00 
 8191d87:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8191d8b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191d92:	00 
 8191d93:	89 04 24             	mov    %eax,(%esp)
 8191d96:	e8 71 22 37 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8191d9b:	83 f0 01             	xor    $0x1,%eax
 8191d9e:	84 c0                	test   %al,%al
 8191da0:	74 46                	je     8191de8 <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x2ee>
 8191da2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8191da9:	00 
 8191daa:	c7 44 24 04 4e 02 00 	movl   $0x24e,0x4(%esp)
 8191db1:	00 
 8191db2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191db5:	89 04 24             	mov    %eax,(%esp)
 8191db8:	e8 85 a1 4e 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8191dbd:	8b 45 10             	mov    0x10(%ebp),%eax
 8191dc0:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8191dc4:	0f b7 c0             	movzwl %ax,%eax
 8191dc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 8191dcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191dce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191dd2:	c7 04 24 3e a6 b9 08 	movl   $0x8b9a63e,(%esp)
 8191dd9:	e8 78 5e 00 00       	call   8197c56 <_ZN4ARAD11PRINT_ERROR11delete_itemEPcP5CUsert>
 8191dde:	bb 00 00 00 00       	mov    $0x0,%ebx
 8191de3:	e9 c2 03 00 00       	jmp    81921aa <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x6b0>
 8191de8:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8191dee:	89 04 24             	mov    %eax,(%esp)
 8191df1:	e8 5e 9a f3 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8191df6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191df9:	89 04 24             	mov    %eax,(%esp)
 8191dfc:	e8 47 ee f7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8191e01:	89 85 79 ff ff ff    	mov    %eax,-0x87(%ebp)
 8191e07:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191e0a:	8b 00                	mov    (%eax),%eax
 8191e0c:	83 c0 08             	add    $0x8,%eax
 8191e0f:	8b 10                	mov    (%eax),%edx
 8191e11:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8191e17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191e1b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8191e1e:	89 04 24             	mov    %eax,(%esp)
 8191e21:	ff d2                	call   *%edx
 8191e23:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191e2a:	00 
 8191e2b:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8191e31:	89 04 24             	mov    %eax,(%esp)
 8191e34:	e8 4b 9a f3 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8191e39:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191e3c:	89 04 24             	mov    %eax,(%esp)
 8191e3f:	e8 4a 84 f4 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8191e44:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8191e4b:	00 
 8191e4c:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8191e53:	00 
 8191e54:	c7 44 24 44 09 00 00 	movl   $0x9,0x44(%esp)
 8191e5b:	00 
 8191e5c:	8b 95 77 ff ff ff    	mov    -0x89(%ebp),%edx
 8191e62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8191e66:	8b 95 7b ff ff ff    	mov    -0x85(%ebp),%edx
 8191e6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8191e70:	8b 95 7f ff ff ff    	mov    -0x81(%ebp),%edx
 8191e76:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8191e7a:	8b 55 83             	mov    -0x7d(%ebp),%edx
 8191e7d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8191e81:	8b 55 87             	mov    -0x79(%ebp),%edx
 8191e84:	89 54 24 14          	mov    %edx,0x14(%esp)
 8191e88:	8b 55 8b             	mov    -0x75(%ebp),%edx
 8191e8b:	89 54 24 18          	mov    %edx,0x18(%esp)
 8191e8f:	8b 55 8f             	mov    -0x71(%ebp),%edx
 8191e92:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8191e96:	8b 55 93             	mov    -0x6d(%ebp),%edx
 8191e99:	89 54 24 20          	mov    %edx,0x20(%esp)
 8191e9d:	8b 55 97             	mov    -0x69(%ebp),%edx
 8191ea0:	89 54 24 24          	mov    %edx,0x24(%esp)
 8191ea4:	8b 55 9b             	mov    -0x65(%ebp),%edx
 8191ea7:	89 54 24 28          	mov    %edx,0x28(%esp)
 8191eab:	8b 55 9f             	mov    -0x61(%ebp),%edx
 8191eae:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8191eb2:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 8191eb5:	89 54 24 30          	mov    %edx,0x30(%esp)
 8191eb9:	8b 55 a7             	mov    -0x59(%ebp),%edx
 8191ebc:	89 54 24 34          	mov    %edx,0x34(%esp)
 8191ec0:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8191ec3:	89 54 24 38          	mov    %edx,0x38(%esp)
 8191ec7:	8b 55 af             	mov    -0x51(%ebp),%edx
 8191eca:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 8191ece:	0f b6 55 b3          	movzbl -0x4d(%ebp),%edx
 8191ed2:	88 54 24 40          	mov    %dl,0x40(%esp)
 8191ed6:	89 04 24             	mov    %eax,(%esp)
 8191ed9:	e8 a8 0e 37 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8191ede:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 8191ee2:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 8191ee6:	f7 d0                	not    %eax
 8191ee8:	66 c1 e8 0f          	shr    $0xf,%ax
 8191eec:	84 c0                	test   %al,%al
 8191eee:	0f 85 bb 00 00 00    	jne    8191faf <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x4b5>
 8191ef4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8191efb:	00 
 8191efc:	c7 44 24 08 4e a6 b9 	movl   $0x8b9a64e,0x8(%esp)
 8191f03:	08 
 8191f04:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8191f0b:	00 
 8191f0c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8191f13:	e8 e6 38 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8191f18:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8191f1b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8191f22:	00 
 8191f23:	c7 44 24 08 62 a6 b9 	movl   $0x8b9a662,0x8(%esp)
 8191f2a:	08 
 8191f2b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8191f32:	00 
 8191f33:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8191f3a:	e8 bf 38 91 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8191f3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8191f42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191f45:	89 04 24             	mov    %eax,(%esp)
 8191f48:	e8 43 9d f3 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8191f4d:	89 c3                	mov    %eax,%ebx
 8191f4f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8191f52:	89 04 24             	mov    %eax,(%esp)
 8191f55:	e8 56 c4 ee ff       	call   807e3b0 <strlen@plt>
 8191f5a:	89 c6                	mov    %eax,%esi
 8191f5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191f5f:	89 04 24             	mov    %eax,(%esp)
 8191f62:	e8 e7 9c f3 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8191f67:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8191f6e:	00 
 8191f6f:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8191f76:	00 
 8191f77:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8191f7b:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8191f82:	00 
 8191f83:	89 74 24 14          	mov    %esi,0x14(%esp)
 8191f87:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8191f8a:	89 54 24 10          	mov    %edx,0x10(%esp)
 8191f8e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8191f92:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8191f99:	00 
 8191f9a:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8191fa0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8191fa4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8191fa7:	89 04 24             	mov    %eax,(%esp)
 8191faa:	e8 39 36 3c 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8191faf:	8b 45 10             	mov    0x10(%ebp),%eax
 8191fb2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8191fb5:	89 50 10             	mov    %edx,0x10(%eax)
 8191fb8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8191fbb:	89 04 24             	mov    %eax,(%esp)
 8191fbe:	e8 89 bd 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8191fc3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8191fc6:	89 04 24             	mov    %eax,(%esp)
 8191fc9:	e8 18 99 f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8191fce:	c7 44 24 08 4e 02 00 	movl   $0x24e,0x8(%esp)
 8191fd5:	00 
 8191fd6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191fdd:	00 
 8191fde:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8191fe1:	89 04 24             	mov    %eax,(%esp)
 8191fe4:	e8 13 99 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8191fe9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8191ff0:	00 
 8191ff1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8191ff4:	89 04 24             	mov    %eax,(%esp)
 8191ff7:	e8 24 99 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8191ffc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8191fff:	89 04 24             	mov    %eax,(%esp)
 8192002:	e8 77 82 f4 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8192007:	89 04 24             	mov    %eax,(%esp)
 819200a:	e8 c7 27 fa ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 819200f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192013:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8192016:	89 04 24             	mov    %eax,(%esp)
 8192019:	e8 1e 99 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819201e:	8b 45 10             	mov    0x10(%ebp),%eax
 8192021:	0f b7 00             	movzwl (%eax),%eax
 8192024:	0f b7 c0             	movzwl %ax,%eax
 8192027:	89 44 24 04          	mov    %eax,0x4(%esp)
 819202b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819202e:	89 04 24             	mov    %eax,(%esp)
 8192031:	e8 6e 7e f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8192036:	8b 45 10             	mov    0x10(%ebp),%eax
 8192039:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 819203d:	0f b7 c0             	movzwl %ax,%eax
 8192040:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192044:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8192047:	89 04 24             	mov    %eax,(%esp)
 819204a:	e8 55 7e f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 819204f:	8b 45 10             	mov    0x10(%ebp),%eax
 8192052:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8192056:	0f bf d8             	movswl %ax,%ebx
 8192059:	e8 18 17 00 00       	call   8193776 <_ZN4ARAD9SingletonI20EmblemCompoundServerE3GetEv>
 819205e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8192062:	89 04 24             	mov    %eax,(%esp)
 8192065:	e8 6c fa ff ff       	call   8191ad6 <_ZN20EmblemCompoundServer18IsResultSelectableEi>
 819206a:	0f b6 c0             	movzbl %al,%eax
 819206d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192071:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8192074:	89 04 24             	mov    %eax,(%esp)
 8192077:	e8 a4 98 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819207c:	8b 45 10             	mov    0x10(%ebp),%eax
 819207f:	8b 40 10             	mov    0x10(%eax),%eax
 8192082:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192086:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8192089:	89 04 24             	mov    %eax,(%esp)
 819208c:	e8 ab 98 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8192091:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8192098:	00 
 8192099:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819209c:	89 04 24             	mov    %eax,(%esp)
 819209f:	e8 b4 98 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81920a4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81920a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81920ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81920ae:	89 04 24             	mov    %eax,(%esp)
 81920b1:	e8 04 65 4b 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81920b6:	66 83 7d ee 00       	cmpw   $0x0,-0x12(%ebp)
 81920bb:	78 23                	js     81920e0 <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x5e6>
 81920bd:	0f bf 45 ee          	movswl -0x12(%ebp),%eax
 81920c1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81920c5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81920cc:	00 
 81920cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81920d4:	00 
 81920d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81920d8:	89 04 24             	mov    %eax,(%esp)
 81920db:	e8 f8 a1 4e 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81920e0:	8b 45 10             	mov    0x10(%ebp),%eax
 81920e3:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81920e7:	0f bf d8             	movswl %ax,%ebx
 81920ea:	e8 80 dc 47 00       	call   860fd6f <_Z26getCompoundEmblemStatisticv>
 81920ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81920f3:	89 04 24             	mov    %eax,(%esp)
 81920f6:	e8 b9 12 00 00       	call   81933b4 <_ZN24CCompoundEmblemStatistic13increaseCountEi>
 81920fb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81920fe:	89 04 24             	mov    %eax,(%esp)
 8192101:	e8 d0 28 fa ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8192106:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8192109:	8d 95 77 ff ff ff    	lea    -0x89(%ebp),%edx
 819210f:	83 c2 07             	add    $0x7,%edx
 8192112:	89 54 24 08          	mov    %edx,0x8(%esp)
 8192116:	8d 95 77 ff ff ff    	lea    -0x89(%ebp),%edx
 819211c:	83 c2 02             	add    $0x2,%edx
 819211f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8192123:	89 04 24             	mov    %eax,(%esp)
 8192126:	e8 0c f9 f7 ff       	call   8111a37 <_ZSt9make_pairIRmRiESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 819212b:	83 ec 04             	sub    $0x4,%esp
 819212e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8192131:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192135:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8192138:	89 04 24             	mov    %eax,(%esp)
 819213b:	e8 36 f9 f7 ff       	call   8111a76 <_ZNSt4pairIiiEC1ImiEEOS_IT_T0_E>
 8192140:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8192143:	89 44 24 04          	mov    %eax,0x4(%esp)
 8192147:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 819214a:	89 04 24             	mov    %eax,(%esp)
 819214d:	e8 b4 b4 f4 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 8192152:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8192155:	89 04 24             	mov    %eax,(%esp)
 8192158:	e8 7f 10 00 00       	call   81931dc <_ZN19AvatarConvertServer22StatisticsEmblemCreateERKSt6vectorISt4pairIiiESaIS2_EE>
 819215d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8192162:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8192165:	89 04 24             	mov    %eax,(%esp)
 8192168:	e8 7d 28 fa ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 819216d:	eb 30                	jmp    819219f <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x6a5>
 819216f:	89 d3                	mov    %edx,%ebx
 8192171:	89 c6                	mov    %eax,%esi
 8192173:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8192176:	89 04 24             	mov    %eax,(%esp)
 8192179:	e8 6c 28 fa ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 819217e:	89 f0                	mov    %esi,%eax
 8192180:	89 da                	mov    %ebx,%edx
 8192182:	eb 00                	jmp    8192184 <_ZN20EmblemCompoundServer7ProcessEP5CUserPN4arad21SigAradEmblemCompoundE+0x68a>
 8192184:	89 d3                	mov    %edx,%ebx
 8192186:	89 c6                	mov    %eax,%esi
 8192188:	8d 45 c0             	lea    -0x40(%ebp),%eax
 819218b:	89 04 24             	mov    %eax,(%esp)
 819218e:	e8 ed bc 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8192193:	89 f0                	mov    %esi,%eax
 8192195:	89 da                	mov    %ebx,%edx
 8192197:	89 04 24             	mov    %eax,(%esp)
 819219a:	e8 b1 15 95 00       	call   8ae3750 <_Unwind_Resume>
 819219f:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81921a2:	89 04 24             	mov    %eax,(%esp)
 81921a5:	e8 d6 bc 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81921aa:	89 d8                	mov    %ebx,%eax
 81921ac:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81921af:	83 c4 00             	add    $0x0,%esp
 81921b2:	5b                   	pop    %ebx
 81921b3:	5e                   	pop    %esi
 81921b4:	5d                   	pop    %ebp
 81921b5:	c3                   	ret

```

```c
// EmblemCompoundServer::Process @ 0x8191afa

/* EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*) */

undefined4 __thiscall
EmblemCompoundServer::Process
          (EmblemCompoundServer *this,CUser *param_1,SigAradEmblemCompound *param_2)

{
  undefined2 uVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  CDataManager *this_00;
  undefined4 *puVar6;
  CInventory *pCVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  size_t sVar10;
  uint uVar11;
  CCompoundEmblemStatistic *this_01;
  undefined4 uVar12;
  undefined2 local_8d;
  undefined2 uStack_8b;
  undefined2 uStack_89;
  undefined2 uStack_87;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined1 local_51;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_50 [12];
  PacketGuard local_44 [12];
  int local_38;
  int local_34;
  pair<int,int> local_30 [8];
  ulong local_28 [2];
  int local_20;
  CItem *local_1c;
  short local_16;
  undefined4 local_14;
  char *local_10;
  
  iVar5 = GetEmblemRandomIndex(this,(int)*(short *)(param_2 + 2),*(ushort *)(param_2 + 0x14));
  local_20 = iVar5;
  if (iVar5 != 0) {
    this_00 = (CDataManager *)G_CDataManager();
    local_1c = (CItem *)CDataManager::find_item(this_00,iVar5);
    if ((local_1c == (CItem *)0x0) ||
       (iVar5 = (**(code **)(*(int *)local_1c + 0xc))(local_1c), iVar5 != 0x14)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (bVar3) {
      CUser::SendCmdErrorPacket(param_1,0x24e,0x16);
      ARAD::PRINT_ERROR::find_item("EMBLEM COMPOUND",param_1,local_20);
      uVar12 = 0;
    }
    else {
      local_38 = (int)*(short *)(param_2 + 2);
      puVar6 = (undefined4 *)
               std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::operator[]
                         ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                          (this + 4),&local_38);
      uVar12 = *puVar6;
      pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar4 = CInventory::use_money(pCVar7,uVar12,0x23,1);
      if (cVar4 == '\x01') {
        uVar1 = *(undefined2 *)param_2;
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
        cVar4 = CInventory::delete_item(pCVar7,1,uVar1,1,8,1);
        if (cVar4 == '\x01') {
          uVar1 = *(undefined2 *)(param_2 + 8);
          pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          cVar4 = CInventory::delete_item(pCVar7,1,uVar1,1,8,1);
          if (cVar4 == '\x01') {
            Inven_Item::Inven_Item((Inven_Item *)&local_8d);
            uVar12 = CItem::get_index(local_1c);
            uStack_8b = (undefined2)uVar12;
            uStack_89 = (undefined2)((uint)uVar12 >> 0x10);
            (**(code **)(*(int *)local_1c + 8))(local_1c,&local_8d);
            Inven_Item::set_add_info((Inven_Item *)&local_8d,1);
            uVar12 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            local_16 = CInventory::insertItemIntoInventory
                                 (uVar12,CONCAT22(uStack_8b,local_8d),CONCAT22(uStack_87,uStack_89),
                                  local_85,local_81,local_7d,local_79,local_75,local_71,local_6d,
                                  local_69,local_65,local_61,local_5d,local_59,local_55,local_51,9,1
                                  ,1);
            if (local_16 < 0) {
              local_14 = RDARScriptStringManager::findString
                                   ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                    "game_server_msg_122",(bool *)0x0);
              local_10 = (char *)RDARScriptStringManager::findString
                                           ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                            "game_server_msg_123",(bool *)0x0);
              uVar12 = CUser::GetServerGroup(param_1);
              sVar10 = strlen(local_10);
              uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
              WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                        (local_14,&local_8d,0,uVar8,local_10,sVar10,0,uVar12,0,0);
            }
            *(int *)(param_2 + 0x10) = local_20;
            PacketGuard::PacketGuard(local_44);
                    /* try { // try from 08191fc9 to 08192105 has its CatchHandler @ 08192184 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_44);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,1,0x24e);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
            pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
            iVar5 = CInventory::get_money(pCVar7);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,iVar5);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_44,(uint)*(ushort *)param_2);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_44,(uint)*(ushort *)(param_2 + 8));
            iVar5 = ARAD::Singleton<EmblemCompoundServer>::Get();
            uVar11 = IsResultSelectable(iVar5);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,uVar11 & 0xff);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_44,*(int *)(param_2 + 0x10));
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
            CUser::Send(param_1,local_44);
            if (-1 < local_16) {
              CUser::SendUpdateItem(param_1,1,0,(int)local_16);
            }
            sVar2 = *(short *)(param_2 + 2);
            this_01 = (CCompoundEmblemStatistic *)getCompoundEmblemStatistic();
            CCompoundEmblemStatistic::increaseCount(this_01,(int)sVar2);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_50);
                    /* try { // try from 08192126 to 0819215c has its CatchHandler @ 0819216f */
            std::make_pair<unsigned_long&,int&>(local_28,(int *)&uStack_8b);
            std::pair<int,int>::pair<unsigned_long,int>(local_30,(pair *)local_28);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      (local_50,local_30);
            AvatarConvertServer::StatisticsEmblemCreate((vector *)local_50);
            uVar12 = 1;
                    /* try { // try from 08192168 to 0819216c has its CatchHandler @ 08192184 */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_50);
            PacketGuard::~PacketGuard(local_44);
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0x24e,1);
            ARAD::PRINT_ERROR::delete_item("EMBLEM COMPOUND",param_1,*(ushort *)(param_2 + 8));
            uVar12 = 0;
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0x24e,1);
          ARAD::PRINT_ERROR::delete_item("EMBLEM COMPOUND",param_1,*(ushort *)param_2);
          uVar12 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0x24e,10);
        uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        local_34 = (int)*(short *)(param_2 + 2);
        puVar6 = (undefined4 *)
                 std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                 operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)
                            (this + 4),&local_34);
        uVar12 = *puVar6;
        pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar9 = CInventory::get_money(pCVar7);
        LogManager::logFormat
                  (1,"localjapan/Arad_EmblemReformServer.cpp",
                   "bool EmblemCompoundServer::Process(CUser*, arad::SigAradEmblemCompound*)",0x24e,
                   "EMBLEM COMPOUND : [money:%d] [need:%d] [charac_no:%d]",uVar9,uVar12,uVar8);
        uVar12 = 0;
      }
    }
    return uVar12;
  }
  CUser::SendCmdErrorPacket(param_1,0x24e,0x13);
  return 0;
}

```

---

## Test

```asm
// === 081915b4 EmblemCompoundServer::Test  [0x081915b4-0x81915b9] ===
 81915b4:	55                   	push   %ebp
 81915b5:	89 e5                	mov    %esp,%ebp
 81915b7:	5d                   	pop    %ebp
 81915b8:	c3                   	ret
 81915b9:	90                   	nop

```

```c
// EmblemCompoundServer::Test @ 0x81915b4

/* EmblemCompoundServer::Test() */

void EmblemCompoundServer::Test(void)

{
  return;
}

```

---

## ~EmblemCompoundServer

```asm
// === 08191594 EmblemCompoundServer::~EmblemCompoundServer  [0x08191594-0x81915b3] ===
 8191594:	55                   	push   %ebp
 8191595:	89 e5                	mov    %esp,%ebp
 8191597:	83 ec 18             	sub    $0x18,%esp
 819159a:	8b 45 08             	mov    0x8(%ebp),%eax
 819159d:	c7 00 48 b9 b9 08    	movl   $0x8b9b948,(%eax)
 81915a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81915a6:	83 c0 04             	add    $0x4,%eax
 81915a9:	89 04 24             	mov    %eax,(%esp)
 81915ac:	e8 11 ff 71 00       	call   88b14c2 <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev>
 81915b1:	c9                   	leave
 81915b2:	c3                   	ret
 81915b3:	90                   	nop

```

```c
// EmblemCompoundServer::~EmblemCompoundServer @ 0x8191594

/* EmblemCompoundServer::~EmblemCompoundServer() */

void __thiscall EmblemCompoundServer::~EmblemCompoundServer(EmblemCompoundServer *this)

{
  *(undefined ***)this = &PTR_Load_08b9b948;
  ARAD::SCRIPT::EmblemCompound::~EmblemCompound((EmblemCompound *)(this + 4));
  return;
}

```

