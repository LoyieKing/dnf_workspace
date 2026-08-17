# Dispatcher_Teleport

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d056c Dispatcher_Teleport::check_error  [0x081d056c-0x81d07bb] ===
 81d056c:	55                   	push   %ebp
 81d056d:	89 e5                	mov    %esp,%ebp
 81d056f:	56                   	push   %esi
 81d0570:	53                   	push   %ebx
 81d0571:	83 ec 30             	sub    $0x30,%esp
 81d0574:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0577:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d057a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d057d:	89 04 24             	mov    %eax,(%esp)
 81d0580:	e8 07 9e f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d0585:	83 f8 02             	cmp    $0x2,%eax
 81d0588:	7e 0f                	jle    81d0599 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2d>
 81d058a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d058d:	89 04 24             	mov    %eax,(%esp)
 81d0590:	e8 9d fe f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d0595:	85 c0                	test   %eax,%eax
 81d0597:	75 07                	jne    81d05a0 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x34>
 81d0599:	b8 01 00 00 00       	mov    $0x1,%eax
 81d059e:	eb 05                	jmp    81d05a5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x39>
 81d05a0:	b8 00 00 00 00       	mov    $0x0,%eax
 81d05a5:	84 c0                	test   %al,%al
 81d05a7:	74 0a                	je     81d05b3 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x47>
 81d05a9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d05ae:	e9 02 02 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d05b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d05b6:	89 04 24             	mov    %eax,(%esp)
 81d05b9:	e8 ce 9d f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d05be:	83 f8 04             	cmp    $0x4,%eax
 81d05c1:	0f 9f c0             	setg   %al
 81d05c4:	84 c0                	test   %al,%al
 81d05c6:	74 25                	je     81d05ed <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x81>
 81d05c8:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81d05cf:	00 
 81d05d0:	c7 44 24 04 f1 00 00 	movl   $0xf1,0x4(%esp)
 81d05d7:	00 
 81d05d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d05db:	89 04 24             	mov    %eax,(%esp)
 81d05de:	e8 5f b9 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d05e3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81d05e8:	e9 c8 01 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d05ed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d05f0:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d05f4:	0f bf f0             	movswl %ax,%esi
 81d05f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d05fa:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 81d05fe:	0f be c0             	movsbl %al,%eax
 81d0601:	89 04 24             	mov    %eax,(%esp)
 81d0604:	e8 3c 72 f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d0609:	89 c3                	mov    %eax,%ebx
 81d060b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d060e:	89 04 24             	mov    %eax,(%esp)
 81d0611:	e8 68 9c f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d0616:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d061a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d061e:	89 04 24             	mov    %eax,(%esp)
 81d0621:	e8 b8 bb 32 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81d0626:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d0629:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81d062d:	74 0d                	je     81d063c <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd0>
 81d062f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d0632:	8b 40 02             	mov    0x2(%eax),%eax
 81d0635:	3d 4e ac 27 00       	cmp    $0x27ac4e,%eax
 81d063a:	eb 0a                	jmp    81d0646 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0xda>
 81d063c:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81d0641:	e9 6f 01 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d0646:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d0649:	8b 40 02             	mov    0x2(%eax),%eax
 81d064c:	3d 4e ac 27 00       	cmp    $0x27ac4e,%eax
 81d0651:	74 24                	je     81d0677 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d0653:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d0656:	8b 40 02             	mov    0x2(%eax),%eax
 81d0659:	3d d0 e7 28 00       	cmp    $0x28e7d0,%eax
 81d065e:	74 17                	je     81d0677 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d0660:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d0663:	8b 40 02             	mov    0x2(%eax),%eax
 81d0666:	3d 88 f2 29 00       	cmp    $0x29f288,%eax
 81d066b:	74 0a                	je     81d0677 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x10b>
 81d066d:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81d0672:	e9 3e 01 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d0677:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d067a:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 81d067e:	84 c0                	test   %al,%al
 81d0680:	7f 0a                	jg     81d068c <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x120>
 81d0682:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81d0687:	e9 29 01 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d068c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d068f:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 81d0693:	0f be c0             	movsbl %al,%eax
 81d0696:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d069a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d069d:	89 04 24             	mov    %eax,(%esp)
 81d06a0:	e8 81 7e 4a 00       	call   8678526 <_ZN5CUser13CheckMoveTownEi>
 81d06a5:	85 c0                	test   %eax,%eax
 81d06a7:	0f 95 c0             	setne  %al
 81d06aa:	84 c0                	test   %al,%al
 81d06ac:	74 0a                	je     81d06b8 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x14c>
 81d06ae:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81d06b3:	e9 fd 00 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d06b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d06bb:	89 04 24             	mov    %eax,(%esp)
 81d06be:	e8 89 4a 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81d06c3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d06c6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d06ca:	74 48                	je     81d0714 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1a8>
 81d06cc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d06cf:	89 04 24             	mov    %eax,(%esp)
 81d06d2:	e8 37 d2 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81d06d7:	89 04 24             	mov    %eax,(%esp)
 81d06da:	e8 0f d1 05 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 81d06df:	84 c0                	test   %al,%al
 81d06e1:	78 1e                	js     81d0701 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x195>
 81d06e3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d06e6:	89 04 24             	mov    %eax,(%esp)
 81d06e9:	e8 20 d2 05 00       	call   822d90e <_ZN6CParty16GetPartyTelePortEv>
 81d06ee:	89 04 24             	mov    %eax,(%esp)
 81d06f1:	e8 f8 d0 05 00       	call   822d7ee <_ZN14CPartyTelePort18get_teleport_stateEv>
 81d06f6:	3c 03                	cmp    $0x3,%al
 81d06f8:	7f 07                	jg     81d0701 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x195>
 81d06fa:	b8 01 00 00 00       	mov    $0x1,%eax
 81d06ff:	eb 05                	jmp    81d0706 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x19a>
 81d0701:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0706:	84 c0                	test   %al,%al
 81d0708:	74 0a                	je     81d0714 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1a8>
 81d070a:	b8 9e 00 00 00       	mov    $0x9e,%eax
 81d070f:	e9 a1 00 00 00       	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d0714:	8b 45 14             	mov    0x14(%ebp),%eax
 81d0717:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d071a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d071d:	8b 50 02             	mov    0x2(%eax),%edx
 81d0720:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0723:	89 50 14             	mov    %edx,0x14(%eax)
 81d0726:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d0729:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 81d072d:	0f be d0             	movsbl %al,%edx
 81d0730:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d0733:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d0737:	98                   	cwtl
 81d0738:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 81d073f:	ff 
 81d0740:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 81d0747:	ff 
 81d0748:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d074c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0750:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0753:	89 04 24             	mov    %eax,(%esp)
 81d0756:	e8 53 d9 48 00       	call   865e0ae <_ZN5CUser13use_stackableEsiii>
 81d075b:	83 f0 01             	xor    $0x1,%eax
 81d075e:	84 c0                	test   %al,%al
 81d0760:	74 07                	je     81d0769 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x1fd>
 81d0762:	b8 11 00 00 00       	mov    $0x11,%eax
 81d0767:	eb 4c                	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d0769:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d076c:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 81d0770:	0f be c0             	movsbl %al,%eax
 81d0773:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81d077a:	00 
 81d077b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81d0782:	00 
 81d0783:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d078a:	00 
 81d078b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0792:	00 
 81d0793:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0797:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d079a:	89 04 24             	mov    %eax,(%esp)
 81d079d:	e8 82 0c 40 00       	call   85d1424 <_ZN10expert_job10CAlchemist19OnTeleportCharacterEP5CUseriiiib>
 81d07a2:	83 f0 01             	xor    $0x1,%eax
 81d07a5:	84 c0                	test   %al,%al
 81d07a7:	74 07                	je     81d07b0 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x244>
 81d07a9:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81d07ae:	eb 05                	jmp    81d07b5 <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase+0x249>
 81d07b0:	b8 00 00 00 00       	mov    $0x0,%eax
 81d07b5:	83 c4 30             	add    $0x30,%esp
 81d07b8:	5b                   	pop    %ebx
 81d07b9:	5e                   	pop    %esi
 81d07ba:	5d                   	pop    %ebp
 81d07bb:	c3                   	ret

```

```c
// Dispatcher_Teleport::check_error @ 0x81d056c

/* Dispatcher_Teleport::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Teleport::check_error
          (Dispatcher_Teleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  CInventory *this_00;
  int iVar5;
  CParty *this_01;
  CPartyTelePort *pCVar6;
  undefined4 uVar7;
  
  iVar4 = CUser::get_state(param_1);
  if ((iVar4 < 3) ||
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    return 0xffffffff;
  }
  iVar4 = CUser::get_state(param_1);
  if (4 < iVar4) {
    CUser::SendCmdErrorPacket(param_1,0xf1,0x13);
    return 0xffffffff;
  }
  sVar1 = *(short *)(param_2 + 0xe);
  iVar4 = GetInvenTypeFromItemSpace((int)(char)param_2[0x14]);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  iVar4 = CInventory::GetInvenRef(this_00,iVar4,(int)sVar1);
  if (iVar4 == 0) {
    return 0xfffffffe;
  }
  if (((*(int *)(iVar4 + 2) != 0x27ac4e) && (*(int *)(iVar4 + 2) != 0x28e7d0)) &&
     (*(int *)(iVar4 + 2) != 0x29f288)) {
    return 0xfffffffe;
  }
  if ((char)param_2[0x15] < '\x01') {
    return 0x7fffffff;
  }
  iVar5 = CUser::CheckMoveTown(param_1,(int)(char)param_2[0x15]);
  if (iVar5 != 0) {
    return 0x7fffffff;
  }
  this_01 = (CParty *)CUser::GetParty(param_1);
  if (this_01 == (CParty *)0x0) goto LAB_081d0714;
  pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(this_01);
  cVar3 = CPartyTelePort::get_teleport_state(pCVar6);
  if (cVar3 < '\0') {
LAB_081d0701:
    bVar2 = false;
  }
  else {
    pCVar6 = (CPartyTelePort *)CParty::GetPartyTelePort(this_01);
    cVar3 = CPartyTelePort::get_teleport_state(pCVar6);
    if ('\x03' < cVar3) goto LAB_081d0701;
    bVar2 = true;
  }
  if (bVar2) {
    return 0x9e;
  }
LAB_081d0714:
  *(undefined4 *)(param_3 + 0x14) = *(undefined4 *)(iVar4 + 2);
  cVar3 = CUser::use_stackable(param_1,*(short *)(param_2 + 0xe),(int)(char)param_2[0x14],-1,-1);
  if (cVar3 == '\x01') {
    cVar3 = expert_job::CAlchemist::OnTeleportCharacter(param_1,(int)(char)param_2[0x15],0,0,0,true)
    ;
    if (cVar3 == '\x01') {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x7fffffff;
    }
  }
  else {
    uVar7 = 0x11;
  }
  return uVar7;
}

```

---

## process

```asm
// === 081d07bc Dispatcher_Teleport::process  [0x081d07bc-0x81d087b] ===
 81d07bc:	55                   	push   %ebp
 81d07bd:	89 e5                	mov    %esp,%ebp
 81d07bf:	83 ec 28             	sub    $0x28,%esp
 81d07c2:	8b 45 14             	mov    0x14(%ebp),%eax
 81d07c5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d07c8:	8b 45 14             	mov    0x14(%ebp),%eax
 81d07cb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d07cf:	8b 45 10             	mov    0x10(%ebp),%eax
 81d07d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d07d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d07d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d07dd:	8b 45 08             	mov    0x8(%ebp),%eax
 81d07e0:	89 04 24             	mov    %eax,(%esp)
 81d07e3:	e8 84 fd ff ff       	call   81d056c <_ZN19Dispatcher_Teleport11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d07e8:	89 c2                	mov    %eax,%edx
 81d07ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d07ed:	89 50 04             	mov    %edx,0x4(%eax)
 81d07f0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d07f3:	8b 40 04             	mov    0x4(%eax),%eax
 81d07f6:	85 c0                	test   %eax,%eax
 81d07f8:	7e 07                	jle    81d0801 <_ZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 81d07fa:	b8 00 00 00 00       	mov    $0x0,%eax
 81d07ff:	eb 78                	jmp    81d0879 <_ZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBase+0xbd>
 81d0801:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d0804:	8b 40 04             	mov    0x4(%eax),%eax
 81d0807:	85 c0                	test   %eax,%eax
 81d0809:	79 2f                	jns    81d083a <_ZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBase+0x7e>
 81d080b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d080e:	89 04 24             	mov    %eax,(%esp)
 81d0811:	e8 58 9b f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81d0816:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d0819:	8b 52 04             	mov    0x4(%edx),%edx
 81d081c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d0820:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d0824:	c7 44 24 04 20 3d bd 	movl   $0x8bd3d20,0x4(%esp)
 81d082b:	08 
 81d082c:	c7 04 24 cc 2b 00 00 	movl   $0x2bcc,(%esp)
 81d0833:	e8 9f 00 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0838:	eb 3f                	jmp    81d0879 <_ZN19Dispatcher_Teleport7processEP5CUserR8MSG_BASER9ParamBase+0xbd>
 81d083a:	8b 45 10             	mov    0x10(%ebp),%eax
 81d083d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0840:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0843:	0f b6 50 14          	movzbl 0x14(%eax),%edx
 81d0847:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d084a:	88 50 10             	mov    %dl,0x10(%eax)
 81d084d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0850:	8b 50 10             	mov    0x10(%eax),%edx
 81d0853:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d0856:	89 50 0c             	mov    %edx,0xc(%eax)
 81d0859:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d085c:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81d0860:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d0863:	66 89 50 08          	mov    %dx,0x8(%eax)
 81d0867:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d086a:	0f b6 50 15          	movzbl 0x15(%eax),%edx
 81d086e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d0871:	88 50 11             	mov    %dl,0x11(%eax)
 81d0874:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0879:	c9                   	leave
 81d087a:	c3                   	ret
 81d087b:	90                   	nop

```

```c
// Dispatcher_Teleport::process @ 0x81d07bc

/* Dispatcher_Teleport::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Teleport::process
          (Dispatcher_Teleport *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = check_error(this,param_1,param_2,param_3);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2bcc,
                       "virtual int Dispatcher_Teleport::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),uVar2);
    }
    else {
      *(MSG_BASE *)(param_3 + 0x10) = param_2[0x14];
      *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_3 + 8) = *(undefined2 *)(param_2 + 0xe);
      *(MSG_BASE *)(param_3 + 0x11) = param_2[0x15];
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081d044a Dispatcher_Teleport::read  [0x081d044a-0x81d056b] ===
 81d044a:	55                   	push   %ebp
 81d044b:	89 e5                	mov    %esp,%ebp
 81d044d:	83 ec 28             	sub    $0x28,%esp
 81d0450:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0453:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d0456:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0459:	83 c0 0e             	add    $0xe,%eax
 81d045c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0460:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0463:	89 04 24             	mov    %eax,(%esp)
 81d0466:	e8 55 cb 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d046b:	83 f0 01             	xor    $0x1,%eax
 81d046e:	84 c0                	test   %al,%al
 81d0470:	74 29                	je     81d049b <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x51>
 81d0472:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0479:	00 
 81d047a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d0481:	00 
 81d0482:	c7 44 24 04 80 3d bd 	movl   $0x8bd3d80,0x4(%esp)
 81d0489:	08 
 81d048a:	c7 04 24 34 2b 00 00 	movl   $0x2b34,(%esp)
 81d0491:	e8 41 04 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0496:	e9 ce 00 00 00       	jmp    81d0569 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x11f>
 81d049b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d049e:	83 c0 10             	add    $0x10,%eax
 81d04a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d04a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d04a8:	89 04 24             	mov    %eax,(%esp)
 81d04ab:	e8 90 cd 3b 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81d04b0:	83 f0 01             	xor    $0x1,%eax
 81d04b3:	84 c0                	test   %al,%al
 81d04b5:	74 29                	je     81d04e0 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x96>
 81d04b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d04be:	00 
 81d04bf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d04c6:	00 
 81d04c7:	c7 44 24 04 80 3d bd 	movl   $0x8bd3d80,0x4(%esp)
 81d04ce:	08 
 81d04cf:	c7 04 24 38 2b 00 00 	movl   $0x2b38,(%esp)
 81d04d6:	e8 fc 03 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d04db:	e9 89 00 00 00       	jmp    81d0569 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x11f>
 81d04e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d04e3:	83 c0 14             	add    $0x14,%eax
 81d04e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d04ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d04ed:	89 04 24             	mov    %eax,(%esp)
 81d04f0:	e8 2d ca 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d04f5:	83 f0 01             	xor    $0x1,%eax
 81d04f8:	84 c0                	test   %al,%al
 81d04fa:	74 26                	je     81d0522 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0xd8>
 81d04fc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0503:	00 
 81d0504:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d050b:	00 
 81d050c:	c7 44 24 04 80 3d bd 	movl   $0x8bd3d80,0x4(%esp)
 81d0513:	08 
 81d0514:	c7 04 24 3c 2b 00 00 	movl   $0x2b3c,(%esp)
 81d051b:	e8 b7 03 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0520:	eb 47                	jmp    81d0569 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x11f>
 81d0522:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0525:	83 c0 15             	add    $0x15,%eax
 81d0528:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d052c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d052f:	89 04 24             	mov    %eax,(%esp)
 81d0532:	e8 eb c9 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d0537:	83 f0 01             	xor    $0x1,%eax
 81d053a:	84 c0                	test   %al,%al
 81d053c:	74 26                	je     81d0564 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x11a>
 81d053e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d0545:	00 
 81d0546:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d054d:	00 
 81d054e:	c7 44 24 04 80 3d bd 	movl   $0x8bd3d80,0x4(%esp)
 81d0555:	08 
 81d0556:	c7 04 24 3f 2b 00 00 	movl   $0x2b3f,(%esp)
 81d055d:	e8 75 03 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d0562:	eb 05                	jmp    81d0569 <_ZN19Dispatcher_Teleport4readER9PacketBufR8MSG_BASE+0x11f>
 81d0564:	b8 00 00 00 00       	mov    $0x0,%eax
 81d0569:	c9                   	leave
 81d056a:	c3                   	ret
 81d056b:	90                   	nop

```

```c
// Dispatcher_Teleport::read @ 0x81d044a

/* Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Teleport::read(Dispatcher_Teleport *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x14));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x15));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2b3f,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0
                          );
        }
      }
      else {
        uVar2 = LineFunc(0x2b3c,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2b38,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x2b34,"virtual int Dispatcher_Teleport::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d087c Dispatcher_Teleport::send  [0x081d087c-0x81d0a5f] ===
 81d087c:	55                   	push   %ebp
 81d087d:	89 e5                	mov    %esp,%ebp
 81d087f:	56                   	push   %esi
 81d0880:	53                   	push   %ebx
 81d0881:	83 ec 30             	sub    $0x30,%esp
 81d0884:	8b 45 10             	mov    0x10(%ebp),%eax
 81d0887:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d088a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d088d:	8b 40 04             	mov    0x4(%eax),%eax
 81d0890:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81d0895:	0f 84 bd 01 00 00    	je     81d0a58 <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x1dc>
 81d089b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d089e:	8b 40 04             	mov    0x4(%eax),%eax
 81d08a1:	85 c0                	test   %eax,%eax
 81d08a3:	0f 85 8d 01 00 00    	jne    81d0a36 <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x1ba>
 81d08a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d08ac:	89 04 24             	mov    %eax,(%esp)
 81d08af:	e8 98 d4 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d08b4:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81d08bb:	00 
 81d08bc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81d08c3:	00 
 81d08c4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d08c7:	89 04 24             	mov    %eax,(%esp)
 81d08ca:	e8 2d b0 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d08cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d08d2:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81d08d6:	0f be c0             	movsbl %al,%eax
 81d08d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d08dd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d08e0:	89 04 24             	mov    %eax,(%esp)
 81d08e3:	e8 38 b0 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d08e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d08ef:	00 
 81d08f0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d08f3:	89 04 24             	mov    %eax,(%esp)
 81d08f6:	e8 a9 95 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d08fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d08fe:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81d0902:	0f bf f0             	movswl %ax,%esi
 81d0905:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0908:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81d090c:	0f be c0             	movsbl %al,%eax
 81d090f:	89 04 24             	mov    %eax,(%esp)
 81d0912:	e8 2e 6f f2 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81d0917:	89 c3                	mov    %eax,%ebx
 81d0919:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d091c:	89 04 24             	mov    %eax,(%esp)
 81d091f:	e8 5a 99 f0 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81d0924:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81d0927:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d092b:	89 74 24 08          	mov    %esi,0x8(%esp)
 81d092f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d0933:	89 04 24             	mov    %eax,(%esp)
 81d0936:	e8 81 bd 32 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 81d093b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d0942:	00 
 81d0943:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d0946:	89 04 24             	mov    %eax,(%esp)
 81d0949:	e8 0a b0 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d094e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d0951:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d0955:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0958:	89 04 24             	mov    %eax,(%esp)
 81d095b:	e8 5a 7c 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d0960:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d0963:	89 04 24             	mov    %eax,(%esp)
 81d0966:	e8 e1 d3 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d096b:	c7 44 24 08 f1 00 00 	movl   $0xf1,0x8(%esp)
 81d0972:	00 
 81d0973:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d097a:	00 
 81d097b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d097e:	89 04 24             	mov    %eax,(%esp)
 81d0981:	e8 76 af ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d0986:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d098d:	00 
 81d098e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d0991:	89 04 24             	mov    %eax,(%esp)
 81d0994:	e8 87 af ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81d0999:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d099c:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81d09a0:	98                   	cwtl
 81d09a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d09a5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d09a8:	89 04 24             	mov    %eax,(%esp)
 81d09ab:	e8 f4 94 f0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81d09b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d09b3:	8b 40 14             	mov    0x14(%eax),%eax
 81d09b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d09ba:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d09bd:	89 04 24             	mov    %eax,(%esp)
 81d09c0:	e8 77 af ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81d09c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d09cc:	00 
 81d09cd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d09d0:	89 04 24             	mov    %eax,(%esp)
 81d09d3:	e8 80 af ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d09d8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d09db:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d09df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d09e2:	89 04 24             	mov    %eax,(%esp)
 81d09e5:	e8 d0 7b 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d09ea:	eb 15                	jmp    81d0a01 <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x185>
 81d09ec:	89 d3                	mov    %edx,%ebx
 81d09ee:	89 c6                	mov    %eax,%esi
 81d09f0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d09f3:	89 04 24             	mov    %eax,(%esp)
 81d09f6:	e8 85 d4 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d09fb:	89 f0                	mov    %esi,%eax
 81d09fd:	89 da                	mov    %ebx,%edx
 81d09ff:	eb 0d                	jmp    81d0a0e <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x192>
 81d0a01:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d0a04:	89 04 24             	mov    %eax,(%esp)
 81d0a07:	e8 74 d4 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d0a0c:	eb 1b                	jmp    81d0a29 <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x1ad>
 81d0a0e:	89 d3                	mov    %edx,%ebx
 81d0a10:	89 c6                	mov    %eax,%esi
 81d0a12:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d0a15:	89 04 24             	mov    %eax,(%esp)
 81d0a18:	e8 63 d4 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d0a1d:	89 f0                	mov    %esi,%eax
 81d0a1f:	89 da                	mov    %ebx,%edx
 81d0a21:	89 04 24             	mov    %eax,(%esp)
 81d0a24:	e8 27 2d 91 00       	call   8ae3750 <_Unwind_Resume>
 81d0a29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81d0a2c:	89 04 24             	mov    %eax,(%esp)
 81d0a2f:	e8 4c d4 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d0a34:	eb 23                	jmp    81d0a59 <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x1dd>
 81d0a36:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d0a39:	8b 40 04             	mov    0x4(%eax),%eax
 81d0a3c:	0f b6 c0             	movzbl %al,%eax
 81d0a3f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d0a43:	c7 44 24 04 f1 00 00 	movl   $0xf1,0x4(%esp)
 81d0a4a:	00 
 81d0a4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d0a4e:	89 04 24             	mov    %eax,(%esp)
 81d0a51:	e8 ec b4 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d0a56:	eb 01                	jmp    81d0a59 <_ZN19Dispatcher_Teleport4sendEP5CUserR9ParamBase+0x1dd>
 81d0a58:	90                   	nop
 81d0a59:	83 c4 30             	add    $0x30,%esp
 81d0a5c:	5b                   	pop    %ebx
 81d0a5d:	5e                   	pop    %esi
 81d0a5e:	5d                   	pop    %ebp
 81d0a5f:	c3                   	ret

```

```c
// Dispatcher_Teleport::send @ 0x81d087c

/* Dispatcher_Teleport::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Teleport::send(Dispatcher_Teleport *this,CUser *param_1,ParamBase *param_2)

{
  short sVar1;
  undefined4 uVar2;
  CInventory *pCVar3;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081d08ca to 081d096a has its CatchHandler @ 081d0a0e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0x10]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
      sVar1 = *(short *)(local_10 + 8);
      uVar2 = GetInvenTypeFromItemSpace((int)(char)local_10[0x10]);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar3,uVar2,(int)sVar1,local_1c);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d0981 to 081d09e9 has its CatchHandler @ 081d09ec */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xf1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)*(short *)(local_10 + 8));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_28,*(int *)(local_10 + 0x14));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
                    /* try { // try from 081d0a07 to 081d0a0b has its CatchHandler @ 081d0a0e */
      PacketGuard::~PacketGuard(local_28);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xf1,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

