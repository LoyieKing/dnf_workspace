# FunctionGuildMember

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## LogMakeGuildMembersInfo

```asm
// === 084ca55a FunctionGuildMember::LogMakeGuildMembersInfo  [0x084ca55a-0x84ca7e5] ===
 84ca55a:	55                   	push   %ebp
 84ca55b:	89 e5                	mov    %esp,%ebp
 84ca55d:	57                   	push   %edi
 84ca55e:	53                   	push   %ebx
 84ca55f:	81 ec 20 11 00 00    	sub    $0x1120,%esp
 84ca565:	8d 9d f0 ee ff ff    	lea    -0x1110(%ebp),%ebx
 84ca56b:	b8 00 00 00 00       	mov    $0x0,%eax
 84ca570:	ba 00 04 00 00       	mov    $0x400,%edx
 84ca575:	89 df                	mov    %ebx,%edi
 84ca577:	89 d1                	mov    %edx,%ecx
 84ca579:	f3 ab                	rep stos %eax,%es:(%edi)
 84ca57b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ca57e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca582:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca585:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca589:	c7 44 24 04 00 7d c8 	movl   $0x8c87d00,0x4(%esp)
 84ca590:	08 
 84ca591:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca597:	89 04 24             	mov    %eax,(%esp)
 84ca59a:	e8 a1 3e bb ff       	call   807e440 <sprintf@plt>
 84ca59f:	e9 a2 01 00 00       	jmp    84ca746 <_ZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_Info+0x1ec>
 84ca5a4:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca5a7:	83 c0 04             	add    $0x4,%eax
 84ca5aa:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca5ae:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca5b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca5b8:	c7 44 24 04 11 7d c8 	movl   $0x8c87d11,0x4(%esp)
 84ca5bf:	08 
 84ca5c0:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca5c6:	89 04 24             	mov    %eax,(%esp)
 84ca5c9:	e8 72 3e bb ff       	call   807e440 <sprintf@plt>
 84ca5ce:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca5d1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84ca5d5:	98                   	cwtl
 84ca5d6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca5da:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca5e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca5e4:	c7 44 24 04 17 7d c8 	movl   $0x8c87d17,0x4(%esp)
 84ca5eb:	08 
 84ca5ec:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca5f2:	89 04 24             	mov    %eax,(%esp)
 84ca5f5:	e8 46 3e bb ff       	call   807e440 <sprintf@plt>
 84ca5fa:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca5fd:	0f b6 00             	movzbl (%eax),%eax
 84ca600:	0f be c0             	movsbl %al,%eax
 84ca603:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca607:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca60d:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca611:	c7 44 24 04 20 7d c8 	movl   $0x8c87d20,0x4(%esp)
 84ca618:	08 
 84ca619:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca61f:	89 04 24             	mov    %eax,(%esp)
 84ca622:	e8 19 3e bb ff       	call   807e440 <sprintf@plt>
 84ca627:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca62a:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84ca62e:	0f be c0             	movsbl %al,%eax
 84ca631:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca635:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca63b:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca63f:	c7 44 24 04 29 7d c8 	movl   $0x8c87d29,0x4(%esp)
 84ca646:	08 
 84ca647:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca64d:	89 04 24             	mov    %eax,(%esp)
 84ca650:	e8 eb 3d bb ff       	call   807e440 <sprintf@plt>
 84ca655:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca658:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 84ca65c:	0f b6 c0             	movzbl %al,%eax
 84ca65f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca663:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca669:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca66d:	c7 44 24 04 32 7d c8 	movl   $0x8c87d32,0x4(%esp)
 84ca674:	08 
 84ca675:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca67b:	89 04 24             	mov    %eax,(%esp)
 84ca67e:	e8 bd 3d bb ff       	call   807e440 <sprintf@plt>
 84ca683:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca686:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 84ca68a:	0f be c0             	movsbl %al,%eax
 84ca68d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca691:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca697:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca69b:	c7 44 24 04 3c 7d c8 	movl   $0x8c87d3c,0x4(%esp)
 84ca6a2:	08 
 84ca6a3:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca6a9:	89 04 24             	mov    %eax,(%esp)
 84ca6ac:	e8 8f 3d bb ff       	call   807e440 <sprintf@plt>
 84ca6b1:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca6b4:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 84ca6b8:	0f be c0             	movsbl %al,%eax
 84ca6bb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca6bf:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca6c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca6c9:	c7 44 24 04 45 7d c8 	movl   $0x8c87d45,0x4(%esp)
 84ca6d0:	08 
 84ca6d1:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca6d7:	89 04 24             	mov    %eax,(%esp)
 84ca6da:	e8 61 3d bb ff       	call   807e440 <sprintf@plt>
 84ca6df:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca6e2:	0f b6 40 3a          	movzbl 0x3a(%eax),%eax
 84ca6e6:	0f b6 c0             	movzbl %al,%eax
 84ca6e9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca6ed:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca6f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca6f7:	c7 44 24 04 4e 7d c8 	movl   $0x8c87d4e,0x4(%esp)
 84ca6fe:	08 
 84ca6ff:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca705:	89 04 24             	mov    %eax,(%esp)
 84ca708:	e8 33 3d bb ff       	call   807e440 <sprintf@plt>
 84ca70d:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca713:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca717:	c7 44 24 04 58 7d c8 	movl   $0x8c87d58,0x4(%esp)
 84ca71e:	08 
 84ca71f:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca725:	89 04 24             	mov    %eax,(%esp)
 84ca728:	e8 13 3d bb ff       	call   807e440 <sprintf@plt>
 84ca72d:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca733:	89 04 24             	mov    %eax,(%esp)
 84ca736:	e8 75 3c bb ff       	call   807e3b0 <strlen@plt>
 84ca73b:	3d ff 0f 00 00       	cmp    $0xfff,%eax
 84ca740:	77 19                	ja     84ca75b <_ZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_Info+0x201>
 84ca742:	83 45 10 3f          	addl   $0x3f,0x10(%ebp)
 84ca746:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84ca74a:	0f 95 c0             	setne  %al
 84ca74d:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 84ca751:	84 c0                	test   %al,%al
 84ca753:	0f 85 4b fe ff ff    	jne    84ca5a4 <_ZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_Info+0x4a>
 84ca759:	eb 01                	jmp    84ca75c <_ZN19FunctionGuildMember23LogMakeGuildMembersInfoEjiP17ST_Guild_Mem_Info+0x202>
 84ca75b:	90                   	nop
 84ca75c:	8d 9d f0 fe ff ff    	lea    -0x110(%ebp),%ebx
 84ca762:	b8 00 00 00 00       	mov    $0x0,%eax
 84ca767:	ba 40 00 00 00       	mov    $0x40,%edx
 84ca76c:	89 df                	mov    %ebx,%edi
 84ca76e:	89 d1                	mov    %edx,%ecx
 84ca770:	f3 ab                	rep stos %eax,%es:(%edi)
 84ca772:	e8 0a 1a c0 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 84ca777:	89 04 24             	mov    %eax,(%esp)
 84ca77a:	e8 1b fc c0 ff       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 84ca77f:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ca783:	c7 44 24 04 5c 7d c8 	movl   $0x8c87d5c,0x4(%esp)
 84ca78a:	08 
 84ca78b:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 84ca791:	89 04 24             	mov    %eax,(%esp)
 84ca794:	e8 a7 3c bb ff       	call   807e440 <sprintf@plt>
 84ca799:	c7 44 24 08 ac 24 00 	movl   $0x24ac,0x8(%esp)
 84ca7a0:	00 
 84ca7a1:	c7 44 24 04 80 d8 c8 	movl   $0x8c8d880,0x4(%esp)
 84ca7a8:	08 
 84ca7a9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ca7ac:	89 04 24             	mov    %eax,(%esp)
 84ca7af:	e8 b8 d0 c3 ff       	call   810786c <_ZN10CMyFileLogC1EPKci>
 84ca7b4:	8d 85 f0 ee ff ff    	lea    -0x1110(%ebp),%eax
 84ca7ba:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84ca7be:	c7 44 24 08 6f 7d c8 	movl   $0x8c87d6f,0x8(%esp)
 84ca7c5:	08 
 84ca7c6:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 84ca7cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ca7d0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84ca7d3:	89 04 24             	mov    %eax,(%esp)
 84ca7d6:	e8 bd d0 c3 ff       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 84ca7db:	81 c4 20 11 00 00    	add    $0x1120,%esp
 84ca7e1:	5b                   	pop    %ebx
 84ca7e2:	5f                   	pop    %edi
 84ca7e3:	5d                   	pop    %ebp
 84ca7e4:	c3                   	ret
 84ca7e5:	90                   	nop

```

```c
// FunctionGuildMember::LogMakeGuildMembersInfo @ 0x84ca55a

/* FunctionGuildMember::LogMakeGuildMembersInfo(unsigned int, int, ST_Guild_Mem_Info*) */

void FunctionGuildMember::LogMakeGuildMembersInfo
               (uint param_1,int param_2,ST_Guild_Mem_Info *param_3)

{
  size_t sVar1;
  CEnvironment *this;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  bool bVar5;
  byte bVar6;
  char local_1114 [4096];
  char local_114 [256];
  CMyFileLog local_14 [8];
  
  bVar6 = 0;
  pcVar4 = local_1114;
  for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + 4;
  }
  sprintf(local_1114,"gKey(%d) Cnt(%d)",param_1,param_2);
  while (bVar5 = param_2 != 0, param_2 = param_2 + -1, bVar5) {
    sprintf(local_1114,"%s %s",local_1114,param_3 + 4);
    sprintf(local_1114,"%s l(%d)",local_1114,(int)*(short *)(param_3 + 2));
    sprintf(local_1114,"%s j(%d)",local_1114,(int)(char)*param_3);
    sprintf(local_1114,"%s g(%d)",local_1114,(int)(char)param_3[1]);
    sprintf(local_1114,"%s Ch(%d)",local_1114,(uint)(byte)param_3[0x37]);
    sprintf(local_1114,"%s S(%d)",local_1114,(int)(char)param_3[0x38]);
    sprintf(local_1114,"%s B(%d)",local_1114,(int)(char)param_3[0x39]);
    sprintf(local_1114,"%s MG(%d)",local_1114,(uint)(byte)param_3[0x3a]);
    sprintf(local_1114,"%s\n",local_1114);
    sVar1 = strlen(local_1114);
    if (0xfff < sVar1) break;
    param_3 = param_3 + 0x3f;
  }
  pcVar4 = local_114;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar6 * -2 + 1) * 4;
  }
  this = (CEnvironment *)G_CEnvironment();
  uVar2 = CEnvironment::get_file_name(this);
  sprintf(local_114,"./log/%s/GuildModi",uVar2);
  CMyFileLog::CMyFileLog
            (local_14,
             "static void FunctionGuildMember::LogMakeGuildMembersInfo(unsigned int, int, ST_Guild_Mem_Info*)"
             ,0x24ac);
  CMyFileLog::operator()(local_14,local_114,"%s",local_1114);
  return;
}

```

---

## MakePacketGuildMembersInfo

```asm
// === 084ca37a FunctionGuildMember::MakePacketGuildMembersInfo  [0x084ca37a-0x84ca559] ===
 84ca37a:	55                   	push   %ebp
 84ca37b:	89 e5                	mov    %esp,%ebp
 84ca37d:	83 ec 28             	sub    $0x28,%esp
 84ca380:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca383:	8b 55 0c             	mov    0xc(%ebp),%edx
 84ca386:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca38a:	89 04 24             	mov    %eax,(%esp)
 84ca38d:	e8 8e 15 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca392:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 84ca399:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 84ca3a0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84ca3a7:	e8 f2 18 c0 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84ca3ac:	89 c2                	mov    %eax,%edx
 84ca3ae:	c1 fa 1f             	sar    $0x1f,%edx
 84ca3b1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ca3b4:	89 55 f4             	mov    %edx,-0xc(%ebp)
 84ca3b7:	e9 89 01 00 00       	jmp    84ca545 <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x1cb>
 84ca3bc:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca3bf:	83 c0 04             	add    $0x4,%eax
 84ca3c2:	89 04 24             	mov    %eax,(%esp)
 84ca3c5:	e8 e6 3f bb ff       	call   807e3b0 <strlen@plt>
 84ca3ca:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84ca3cd:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca3d0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84ca3d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca3d7:	89 04 24             	mov    %eax,(%esp)
 84ca3da:	e8 5d 15 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca3df:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca3e2:	8d 48 04             	lea    0x4(%eax),%ecx
 84ca3e5:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca3e8:	8b 55 e8             	mov    -0x18(%ebp),%edx
 84ca3eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ca3ef:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ca3f3:	89 04 24             	mov    %eax,(%esp)
 84ca3f6:	e8 e9 cf ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ca3fb:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca3fe:	83 c0 22             	add    $0x22,%eax
 84ca401:	89 04 24             	mov    %eax,(%esp)
 84ca404:	e8 a7 3f bb ff       	call   807e3b0 <strlen@plt>
 84ca409:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84ca40c:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca40f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ca412:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca416:	89 04 24             	mov    %eax,(%esp)
 84ca419:	e8 1e 15 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca41e:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca421:	8d 48 22             	lea    0x22(%eax),%ecx
 84ca424:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca427:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84ca42a:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ca42e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84ca432:	89 04 24             	mov    %eax,(%esp)
 84ca435:	e8 aa cf ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ca43a:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca43d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84ca441:	0f bf d0             	movswl %ax,%edx
 84ca444:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca447:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca44b:	89 04 24             	mov    %eax,(%esp)
 84ca44e:	e8 51 fa c0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84ca453:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca456:	0f b6 00             	movzbl (%eax),%eax
 84ca459:	0f be d0             	movsbl %al,%edx
 84ca45c:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca45f:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca463:	89 04 24             	mov    %eax,(%esp)
 84ca466:	e8 b5 14 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca46b:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca46e:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84ca472:	0f be d0             	movsbl %al,%edx
 84ca475:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca478:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca47c:	89 04 24             	mov    %eax,(%esp)
 84ca47f:	e8 9c 14 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca484:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca487:	0f b6 40 37          	movzbl 0x37(%eax),%eax
 84ca48b:	0f b6 d0             	movzbl %al,%edx
 84ca48e:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca491:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca495:	89 04 24             	mov    %eax,(%esp)
 84ca498:	e8 83 14 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca49d:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca4a0:	0f b6 40 38          	movzbl 0x38(%eax),%eax
 84ca4a4:	0f be d0             	movsbl %al,%edx
 84ca4a7:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca4aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca4ae:	89 04 24             	mov    %eax,(%esp)
 84ca4b1:	e8 6a 14 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca4b6:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca4b9:	0f b6 40 39          	movzbl 0x39(%eax),%eax
 84ca4bd:	0f be d0             	movsbl %al,%edx
 84ca4c0:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca4c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca4c7:	89 04 24             	mov    %eax,(%esp)
 84ca4ca:	e8 51 14 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca4cf:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca4d2:	0f b6 40 3a          	movzbl 0x3a(%eax),%eax
 84ca4d6:	0f b6 d0             	movzbl %al,%edx
 84ca4d9:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca4dc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca4e0:	89 04 24             	mov    %eax,(%esp)
 84ca4e3:	e8 38 14 c0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ca4e8:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca4eb:	8b 40 3b             	mov    0x3b(%eax),%eax
 84ca4ee:	85 c0                	test   %eax,%eax
 84ca4f0:	74 1a                	je     84ca50c <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x192>
 84ca4f2:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca4f5:	8b 40 3b             	mov    0x3b(%eax),%eax
 84ca4f8:	ba 00 00 00 00       	mov    $0x0,%edx
 84ca4fd:	3b 55 f4             	cmp    -0xc(%ebp),%edx
 84ca500:	7c 1f                	jl     84ca521 <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x1a7>
 84ca502:	3b 55 f4             	cmp    -0xc(%ebp),%edx
 84ca505:	7f 05                	jg     84ca50c <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x192>
 84ca507:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84ca50a:	76 15                	jbe    84ca521 <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x1a7>
 84ca50c:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca50f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ca516:	00 
 84ca517:	89 04 24             	mov    %eax,(%esp)
 84ca51a:	e8 1d 14 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca51f:	eb 20                	jmp    84ca541 <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x1c7>
 84ca521:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ca524:	8b 45 10             	mov    0x10(%ebp),%eax
 84ca527:	8b 40 3b             	mov    0x3b(%eax),%eax
 84ca52a:	89 d1                	mov    %edx,%ecx
 84ca52c:	29 c1                	sub    %eax,%ecx
 84ca52e:	89 c8                	mov    %ecx,%eax
 84ca530:	89 c2                	mov    %eax,%edx
 84ca532:	8b 45 08             	mov    0x8(%ebp),%eax
 84ca535:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ca539:	89 04 24             	mov    %eax,(%esp)
 84ca53c:	e8 fb 13 c0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ca541:	83 45 10 3f          	addl   $0x3f,0x10(%ebp)
 84ca545:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84ca549:	0f 95 c0             	setne  %al
 84ca54c:	83 6d 0c 01          	subl   $0x1,0xc(%ebp)
 84ca550:	84 c0                	test   %al,%al
 84ca552:	0f 85 64 fe ff ff    	jne    84ca3bc <_ZN19FunctionGuildMember26MakePacketGuildMembersInfoER11PacketGuardiP17ST_Guild_Mem_Info+0x42>
 84ca558:	c9                   	leave
 84ca559:	c3                   	ret

```

```c
// FunctionGuildMember::MakePacketGuildMembersInfo @ 0x84ca37a

/* FunctionGuildMember::MakePacketGuildMembersInfo(PacketGuard&, int, ST_Guild_Mem_Info*) */

void FunctionGuildMember::MakePacketGuildMembersInfo
               (PacketGuard *param_1,int param_2,ST_Guild_Mem_Info *param_3)

{
  uint uVar1;
  size_t sVar2;
  bool bVar3;
  
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,param_2);
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  while (bVar3 = param_2 != 0, param_2 = param_2 + -1, bVar3) {
    sVar2 = strlen((char *)(param_3 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(param_3 + 4),sVar2);
    sVar2 = strlen((char *)(param_3 + 0x22));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar2);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(param_3 + 0x22),sVar2);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(param_3 + 2));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)*param_3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)param_3[1]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)param_3[0x37]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)param_3[0x38]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(int)(char)param_3[0x39]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(byte)param_3[0x3a]);
    if ((*(int *)(param_3 + 0x3b) == 0) ||
       (((int)uVar1 >> 0x1f < 1 &&
        ((0x7fffffff < (uint)((int)uVar1 >> 0x1f) || (uVar1 < *(uint *)(param_3 + 0x3b))))))) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,uVar1 - *(int *)(param_3 + 0x3b));
    }
    param_3 = param_3 + 0x3f;
  }
  return;
}

```

