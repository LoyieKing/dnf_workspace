# Dispatcher_MouseRegister

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## checkValiedPassword

```asm
// === 082632ca Dispatcher_MouseRegister::checkValiedPassword  [0x082632ca-0x8263339] ===
 82632ca:	55                   	push   %ebp
 82632cb:	89 e5                	mov    %esp,%ebp
 82632cd:	83 ec 28             	sub    $0x28,%esp
 82632d0:	8b 45 08             	mov    0x8(%ebp),%eax
 82632d3:	89 04 24             	mov    %eax,(%esp)
 82632d6:	e8 d5 b0 e1 ff       	call   807e3b0 <strlen@plt>
 82632db:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82632de:	83 7d f0 06          	cmpl   $0x6,-0x10(%ebp)
 82632e2:	7e 07                	jle    82632eb <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x21>
 82632e4:	b8 00 00 00 00       	mov    $0x0,%eax
 82632e9:	eb 4d                	jmp    8263338 <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x6e>
 82632eb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82632f2:	eb 32                	jmp    8263326 <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x5c>
 82632f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82632f7:	03 45 08             	add    0x8(%ebp),%eax
 82632fa:	0f b6 00             	movzbl (%eax),%eax
 82632fd:	3c 61                	cmp    $0x61,%al
 82632ff:	74 21                	je     8263322 <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x58>
 8263301:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8263304:	03 45 08             	add    0x8(%ebp),%eax
 8263307:	0f b6 00             	movzbl (%eax),%eax
 826330a:	3c 2f                	cmp    $0x2f,%al
 826330c:	7e 0d                	jle    826331b <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x51>
 826330e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8263311:	03 45 08             	add    0x8(%ebp),%eax
 8263314:	0f b6 00             	movzbl (%eax),%eax
 8263317:	3c 39                	cmp    $0x39,%al
 8263319:	7e 07                	jle    8263322 <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x58>
 826331b:	b8 00 00 00 00       	mov    $0x0,%eax
 8263320:	eb 16                	jmp    8263338 <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x6e>
 8263322:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8263326:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8263329:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 826332c:	0f 9c c0             	setl   %al
 826332f:	84 c0                	test   %al,%al
 8263331:	75 c1                	jne    82632f4 <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc+0x2a>
 8263333:	b8 01 00 00 00       	mov    $0x1,%eax
 8263338:	c9                   	leave
 8263339:	c3                   	ret

```

```c
// Dispatcher_MouseRegister::checkValiedPassword @ 0x82632ca

/* Dispatcher_MouseRegister::checkValiedPassword(char const*) */

undefined4 Dispatcher_MouseRegister::checkValiedPassword(char *param_1)

{
  size_t sVar1;
  undefined4 uVar2;
  int local_10;
  
  sVar1 = strlen(param_1);
  if ((int)sVar1 < 7) {
    for (local_10 = 0; local_10 < (int)sVar1; local_10 = local_10 + 1) {
      if ((param_1[local_10] != 'a') && ((param_1[local_10] < '0' || ('9' < param_1[local_10])))) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## check_error

```asm
// === 082632a0 Dispatcher_MouseRegister::check_error  [0x082632a0-0x82632b3] ===
 82632a0:	55                   	push   %ebp
 82632a1:	89 e5                	mov    %esp,%ebp
 82632a3:	83 ec 10             	sub    $0x10,%esp
 82632a6:	8b 45 10             	mov    0x10(%ebp),%eax
 82632a9:	89 45 fc             	mov    %eax,-0x4(%ebp)
 82632ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82632b1:	c9                   	leave
 82632b2:	c3                   	ret
 82632b3:	90                   	nop

```

```c
// Dispatcher_MouseRegister::check_error @ 0x82632a0

/* Dispatcher_MouseRegister::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_MouseRegister::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## decryptPassword

```asm
// === 0826333a Dispatcher_MouseRegister::decryptPassword  [0x0826333a-0x82633c5] ===
 826333a:	55                   	push   %ebp
 826333b:	89 e5                	mov    %esp,%ebp
 826333d:	83 ec 38             	sub    $0x38,%esp
 8263340:	a1 00 f7 41 09       	mov    0x941f700,%eax
 8263345:	8b 00                	mov    (%eax),%eax
 8263347:	83 c0 10             	add    $0x10,%eax
 826334a:	8b 08                	mov    (%eax),%ecx
 826334c:	a1 00 f7 41 09       	mov    0x941f700,%eax
 8263351:	8b 55 10             	mov    0x10(%ebp),%edx
 8263354:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8263358:	8b 55 0c             	mov    0xc(%ebp),%edx
 826335b:	89 54 24 08          	mov    %edx,0x8(%esp)
 826335f:	8b 55 08             	mov    0x8(%ebp),%edx
 8263362:	89 54 24 04          	mov    %edx,0x4(%esp)
 8263366:	89 04 24             	mov    %eax,(%esp)
 8263369:	ff d1                	call   *%ecx
 826336b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826336e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8263372:	79 4b                	jns    82633bf <_ZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcj+0x85>
 8263374:	c7 44 24 1c af b1 be 	movl   $0x8beb1af,0x1c(%esp)
 826337b:	08 
 826337c:	c7 44 24 18 b1 01 00 	movl   $0x1b1,0x18(%esp)
 8263383:	00 
 8263384:	c7 44 24 14 bc b1 be 	movl   $0x8beb1bc,0x14(%esp)
 826338b:	08 
 826338c:	c7 44 24 10 d6 b1 be 	movl   $0x8beb1d6,0x10(%esp)
 8263393:	08 
 8263394:	c7 44 24 0c b1 01 00 	movl   $0x1b1,0xc(%esp)
 826339b:	00 
 826339c:	c7 44 24 08 00 c9 be 	movl   $0x8bec900,0x8(%esp)
 82633a3:	08 
 82633a4:	c7 44 24 04 bc b1 be 	movl   $0x8beb1bc,0x4(%esp)
 82633ab:	08 
 82633ac:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 82633b3:	e8 52 08 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 82633b8:	b8 00 00 00 00       	mov    $0x0,%eax
 82633bd:	eb 05                	jmp    82633c4 <_ZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcj+0x8a>
 82633bf:	b8 01 00 00 00       	mov    $0x1,%eax
 82633c4:	c9                   	leave
 82633c5:	c3                   	ret

```

```c
// Dispatcher_MouseRegister::decryptPassword @ 0x826333a

/* Dispatcher_MouseRegister::decryptPassword(char const*, char*, unsigned int) */

bool Dispatcher_MouseRegister::decryptPassword(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*GlobalData::s_pcryptTEA_MousePassword_ + 0x10))
                    (GlobalData::s_pcryptTEA_MousePassword_,param_1,param_2,param_3);
  if (-1 >= iVar1) {
    LogManager::logFormat
              (1,"PacketDispatcher_Secu.cpp",
               "static bool Dispatcher_MouseRegister::decryptPassword(const char*, char*, size_t)",
               0x1b1,"[%s][%d][%s]","PacketDispatcher_Secu.cpp",0x1b1,"Decrypt Fail");
  }
  return -1 < iVar1;
}

```

---

## dispatch_sig

```asm
// === 082637fe Dispatcher_MouseRegister::dispatch_sig  [0x082637fe-0x82641e1] ===
 82637fe:	55                   	push   %ebp
 82637ff:	89 e5                	mov    %esp,%ebp
 8263801:	57                   	push   %edi
 8263802:	56                   	push   %esi
 8263803:	53                   	push   %ebx
 8263804:	81 ec bc 20 00 00    	sub    $0x20bc,%esp
 826380a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826380d:	89 04 24             	mov    %eax,(%esp)
 8263810:	e8 77 6b e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8263815:	83 f8 03             	cmp    $0x3,%eax
 8263818:	74 17                	je     8263831 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x33>
 826381a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826381d:	89 04 24             	mov    %eax,(%esp)
 8263820:	e8 67 6b e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8263825:	83 f8 02             	cmp    $0x2,%eax
 8263828:	74 07                	je     8263831 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x33>
 826382a:	b8 01 00 00 00       	mov    $0x1,%eax
 826382f:	eb 05                	jmp    8263836 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x38>
 8263831:	b8 00 00 00 00       	mov    $0x0,%eax
 8263836:	84 c0                	test   %al,%al
 8263838:	74 2b                	je     8263865 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x67>
 826383a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263841:	00 
 8263842:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263849:	00 
 826384a:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263851:	08 
 8263852:	c7 04 24 7c 02 00 00 	movl   $0x27c,(%esp)
 8263859:	e8 79 d0 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826385e:	89 c3                	mov    %eax,%ebx
 8263860:	e9 70 09 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263865:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 826386b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826386f:	8b 45 10             	mov    0x10(%ebp),%eax
 8263872:	89 04 24             	mov    %eax,(%esp)
 8263875:	e8 f6 96 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 826387a:	83 f0 01             	xor    $0x1,%eax
 826387d:	84 c0                	test   %al,%al
 826387f:	74 2b                	je     82638ac <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0xae>
 8263881:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263888:	00 
 8263889:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263890:	00 
 8263891:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263898:	08 
 8263899:	c7 04 24 82 02 00 00 	movl   $0x282,(%esp)
 82638a0:	e8 32 d0 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82638a5:	89 c3                	mov    %eax,%ebx
 82638a7:	e9 29 09 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 82638ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 82638af:	89 04 24             	mov    %eax,(%esp)
 82638b2:	e8 77 c4 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 82638b7:	89 04 24             	mov    %eax,(%esp)
 82638ba:	e8 cf b6 fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 82638bf:	83 f8 02             	cmp    $0x2,%eax
 82638c2:	0f 9f c0             	setg   %al
 82638c5:	84 c0                	test   %al,%al
 82638c7:	74 25                	je     82638ee <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0xf0>
 82638c9:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 82638d0:	00 
 82638d1:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 82638d8:	00 
 82638d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82638dc:	89 04 24             	mov    %eax,(%esp)
 82638df:	e8 5e 86 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82638e4:	bb 00 00 00 00       	mov    $0x0,%ebx
 82638e9:	e9 e7 08 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 82638ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 82638f1:	89 04 24             	mov    %eax,(%esp)
 82638f4:	e8 35 c4 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 82638f9:	89 04 24             	mov    %eax,(%esp)
 82638fc:	e8 b3 b6 fc ff       	call   822efb4 <_ZN8Sanicova4CPad12getCancelCntEv>
 8263901:	83 f8 0a             	cmp    $0xa,%eax
 8263904:	0f 9f c0             	setg   %al
 8263907:	84 c0                	test   %al,%al
 8263909:	74 25                	je     8263930 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x132>
 826390b:	c7 44 24 08 8b 00 00 	movl   $0x8b,0x8(%esp)
 8263912:	00 
 8263913:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 826391a:	00 
 826391b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826391e:	89 04 24             	mov    %eax,(%esp)
 8263921:	e8 1c 86 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8263926:	bb 00 00 00 00       	mov    $0x0,%ebx
 826392b:	e9 a5 08 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263930:	8d 95 77 ef ff ff    	lea    -0x1089(%ebp),%edx
 8263936:	bb 00 10 00 00       	mov    $0x1000,%ebx
 826393b:	b8 00 00 00 00       	mov    $0x0,%eax
 8263940:	89 d1                	mov    %edx,%ecx
 8263942:	83 e1 01             	and    $0x1,%ecx
 8263945:	85 c9                	test   %ecx,%ecx
 8263947:	74 08                	je     8263951 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x153>
 8263949:	88 02                	mov    %al,(%edx)
 826394b:	83 c2 01             	add    $0x1,%edx
 826394e:	83 eb 01             	sub    $0x1,%ebx
 8263951:	89 d1                	mov    %edx,%ecx
 8263953:	83 e1 02             	and    $0x2,%ecx
 8263956:	85 c9                	test   %ecx,%ecx
 8263958:	74 09                	je     8263963 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x165>
 826395a:	66 89 02             	mov    %ax,(%edx)
 826395d:	83 c2 02             	add    $0x2,%edx
 8263960:	83 eb 02             	sub    $0x2,%ebx
 8263963:	89 d9                	mov    %ebx,%ecx
 8263965:	c1 e9 02             	shr    $0x2,%ecx
 8263968:	89 d7                	mov    %edx,%edi
 826396a:	f3 ab                	rep stos %eax,%es:(%edi)
 826396c:	89 fa                	mov    %edi,%edx
 826396e:	89 d9                	mov    %ebx,%ecx
 8263970:	83 e1 02             	and    $0x2,%ecx
 8263973:	85 c9                	test   %ecx,%ecx
 8263975:	74 06                	je     826397d <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x17f>
 8263977:	66 89 02             	mov    %ax,(%edx)
 826397a:	83 c2 02             	add    $0x2,%edx
 826397d:	89 d9                	mov    %ebx,%ecx
 826397f:	83 e1 01             	and    $0x1,%ecx
 8263982:	85 c9                	test   %ecx,%ecx
 8263984:	74 05                	je     826398b <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x18d>
 8263986:	88 02                	mov    %al,(%edx)
 8263988:	83 c2 01             	add    $0x1,%edx
 826398b:	8d 95 77 df ff ff    	lea    -0x2089(%ebp),%edx
 8263991:	bb 00 10 00 00       	mov    $0x1000,%ebx
 8263996:	b8 00 00 00 00       	mov    $0x0,%eax
 826399b:	89 d1                	mov    %edx,%ecx
 826399d:	83 e1 01             	and    $0x1,%ecx
 82639a0:	85 c9                	test   %ecx,%ecx
 82639a2:	74 08                	je     82639ac <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x1ae>
 82639a4:	88 02                	mov    %al,(%edx)
 82639a6:	83 c2 01             	add    $0x1,%edx
 82639a9:	83 eb 01             	sub    $0x1,%ebx
 82639ac:	89 d1                	mov    %edx,%ecx
 82639ae:	83 e1 02             	and    $0x2,%ecx
 82639b1:	85 c9                	test   %ecx,%ecx
 82639b3:	74 09                	je     82639be <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x1c0>
 82639b5:	66 89 02             	mov    %ax,(%edx)
 82639b8:	83 c2 02             	add    $0x2,%edx
 82639bb:	83 eb 02             	sub    $0x2,%ebx
 82639be:	89 d9                	mov    %ebx,%ecx
 82639c0:	c1 e9 02             	shr    $0x2,%ecx
 82639c3:	89 d7                	mov    %edx,%edi
 82639c5:	f3 ab                	rep stos %eax,%es:(%edi)
 82639c7:	89 fa                	mov    %edi,%edx
 82639c9:	89 d9                	mov    %ebx,%ecx
 82639cb:	83 e1 02             	and    $0x2,%ecx
 82639ce:	85 c9                	test   %ecx,%ecx
 82639d0:	74 06                	je     82639d8 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x1da>
 82639d2:	66 89 02             	mov    %ax,(%edx)
 82639d5:	83 c2 02             	add    $0x2,%edx
 82639d8:	89 d9                	mov    %ebx,%ecx
 82639da:	83 e1 01             	and    $0x1,%ecx
 82639dd:	85 c9                	test   %ecx,%ecx
 82639df:	74 05                	je     82639e6 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x1e8>
 82639e1:	88 02                	mov    %al,(%edx)
 82639e3:	83 c2 01             	add    $0x1,%edx
 82639e6:	c7 45 d8 00 10 00 00 	movl   $0x1000,-0x28(%ebp)
 82639ed:	c7 45 d4 00 10 00 00 	movl   $0x1000,-0x2c(%ebp)
 82639f4:	c6 45 d3 0e          	movb   $0xe,-0x2d(%ebp)
 82639f8:	c6 45 d2 0e          	movb   $0xe,-0x2e(%ebp)
 82639fc:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 8263a03:	3c 01                	cmp    $0x1,%al
 8263a05:	74 7e                	je     8263a85 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x287>
 8263a07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263a0a:	89 04 24             	mov    %eax,(%esp)
 8263a0d:	e8 1c c3 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263a12:	89 04 24             	mov    %eax,(%esp)
 8263a15:	e8 c0 b5 fc ff       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 8263a1a:	83 f0 01             	xor    $0x1,%eax
 8263a1d:	84 c0                	test   %al,%al
 8263a1f:	74 25                	je     8263a46 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x248>
 8263a21:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8263a28:	00 
 8263a29:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 8263a30:	00 
 8263a31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263a34:	89 04 24             	mov    %eax,(%esp)
 8263a37:	e8 06 85 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8263a3c:	bb 00 00 00 00       	mov    $0x0,%ebx
 8263a41:	e9 8f 07 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263a46:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263a49:	89 04 24             	mov    %eax,(%esp)
 8263a4c:	e8 dd c2 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263a51:	89 04 24             	mov    %eax,(%esp)
 8263a54:	e8 8d b5 fc ff       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 8263a59:	83 f0 01             	xor    $0x1,%eax
 8263a5c:	84 c0                	test   %al,%al
 8263a5e:	74 25                	je     8263a85 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x287>
 8263a60:	c7 44 24 08 86 00 00 	movl   $0x86,0x8(%esp)
 8263a67:	00 
 8263a68:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 8263a6f:	00 
 8263a70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263a73:	89 04 24             	mov    %eax,(%esp)
 8263a76:	e8 c7 84 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8263a7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 8263a80:	e9 50 07 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263a85:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 8263a8c:	3c 03                	cmp    $0x3,%al
 8263a8e:	0f 85 9d 01 00 00    	jne    8263c31 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x433>
 8263a94:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8263a99:	c7 44 24 08 ba 02 00 	movl   $0x2ba,0x8(%esp)
 8263aa0:	00 
 8263aa1:	c7 44 24 04 bc b1 be 	movl   $0x8beb1bc,0x4(%esp)
 8263aa8:	08 
 8263aa9:	89 04 24             	mov    %eax,(%esp)
 8263aac:	e8 d5 bf 02 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8263ab1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8263ab8:	00 
 8263ab9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263abd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8263ac0:	89 04 24             	mov    %eax,(%esp)
 8263ac3:	e8 5e 51 e6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8263ac8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8263acb:	89 04 24             	mov    %eax,(%esp)
 8263ace:	e8 73 51 e6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8263ad3:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8263ada:	00 
 8263adb:	89 04 24             	mov    %eax,(%esp)
 8263ade:	e8 73 51 e6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8263ae3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263ae6:	89 04 24             	mov    %eax,(%esp)
 8263ae9:	e8 a8 51 e6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8263aee:	89 c3                	mov    %eax,%ebx
 8263af0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8263af3:	89 04 24             	mov    %eax,(%esp)
 8263af6:	e8 4b 51 e6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8263afb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8263aff:	89 04 24             	mov    %eax,(%esp)
 8263b02:	e8 4f 51 e6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8263b07:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8263b0a:	89 04 24             	mov    %eax,(%esp)
 8263b0d:	e8 3c 51 e6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8263b12:	89 04 24             	mov    %eax,(%esp)
 8263b15:	e8 a6 19 00 00       	call   82654c0 <_ZN12CStreamGuard11GetInBufferI18SIG_MOUSE_REGISTEREEPT_v>
 8263b1a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8263b1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263b20:	89 04 24             	mov    %eax,(%esp)
 8263b23:	e8 46 68 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8263b28:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8263b2b:	89 02                	mov    %eax,(%edx)
 8263b2d:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 8263b34:	0f b6 d0             	movzbl %al,%edx
 8263b37:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8263b3a:	89 50 04             	mov    %edx,0x4(%eax)
 8263b3d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8263b40:	8d 50 08             	lea    0x8(%eax),%edx
 8263b43:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8263b4a:	00 
 8263b4b:	8d 85 77 ef ff ff    	lea    -0x1089(%ebp),%eax
 8263b51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263b55:	89 14 24             	mov    %edx,(%esp)
 8263b58:	e8 73 9d e1 ff       	call   807d8d0 <strncpy@plt>
 8263b5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8263b60:	8d 50 0f             	lea    0xf(%eax),%edx
 8263b63:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8263b6a:	00 
 8263b6b:	8d 85 77 df ff ff    	lea    -0x2089(%ebp),%eax
 8263b71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263b75:	89 14 24             	mov    %edx,(%esp)
 8263b78:	e8 53 9d e1 ff       	call   807d8d0 <strncpy@plt>
 8263b7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263b80:	89 04 24             	mov    %eax,(%esp)
 8263b83:	e8 8a c1 fc ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 8263b88:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8263b8b:	83 c2 48             	add    $0x48,%edx
 8263b8e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8263b95:	00 
 8263b96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263b9a:	89 14 24             	mov    %edx,(%esp)
 8263b9d:	e8 2e 9d e1 ff       	call   807d8d0 <strncpy@plt>
 8263ba2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263ba5:	05 00 97 07 00       	add    $0x79700,%eax
 8263baa:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8263bb1:	00 
 8263bb2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8263bb9:	00 
 8263bba:	89 04 24             	mov    %eax,(%esp)
 8263bbd:	e8 da 0b 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 8263bc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263bc5:	89 04 24             	mov    %eax,(%esp)
 8263bc8:	e8 33 cc fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8263bcd:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 8263bd4:	00 
 8263bd5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8263bdc:	00 
 8263bdd:	89 04 24             	mov    %eax,(%esp)
 8263be0:	e8 c3 59 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8263be5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8263bea:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8263bed:	89 54 24 08          	mov    %edx,0x8(%esp)
 8263bf1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8263bf8:	00 
 8263bf9:	89 04 24             	mov    %eax,(%esp)
 8263bfc:	e8 dd d3 30 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8263c01:	bb 00 00 00 00       	mov    $0x0,%ebx
 8263c06:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8263c09:	89 04 24             	mov    %eax,(%esp)
 8263c0c:	e8 c1 8c 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8263c11:	e9 bf 05 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263c16:	89 d3                	mov    %edx,%ebx
 8263c18:	89 c6                	mov    %eax,%esi
 8263c1a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8263c1d:	89 04 24             	mov    %eax,(%esp)
 8263c20:	e8 ad 8c 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8263c25:	89 f0                	mov    %esi,%eax
 8263c27:	89 da                	mov    %ebx,%edx
 8263c29:	89 04 24             	mov    %eax,(%esp)
 8263c2c:	e8 1f fb 87 00       	call   8ae3750 <_Unwind_Resume>
 8263c31:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8263c34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263c38:	8b 45 10             	mov    0x10(%ebp),%eax
 8263c3b:	89 04 24             	mov    %eax,(%esp)
 8263c3e:	e8 2d 93 32 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8263c43:	83 f0 01             	xor    $0x1,%eax
 8263c46:	84 c0                	test   %al,%al
 8263c48:	74 2b                	je     8263c75 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x477>
 8263c4a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263c51:	00 
 8263c52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263c59:	00 
 8263c5a:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263c61:	08 
 8263c62:	c7 04 24 dc 02 00 00 	movl   $0x2dc,(%esp)
 8263c69:	e8 69 cc 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8263c6e:	89 c3                	mov    %eax,%ebx
 8263c70:	e9 60 05 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263c75:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8263c79:	84 c0                	test   %al,%al
 8263c7b:	74 10                	je     8263c8d <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x48f>
 8263c7d:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8263c81:	3c 0d                	cmp    $0xd,%al
 8263c83:	77 08                	ja     8263c8d <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x48f>
 8263c85:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8263c89:	3c 05                	cmp    $0x5,%al
 8263c8b:	75 2b                	jne    8263cb8 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x4ba>
 8263c8d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263c94:	00 
 8263c95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263c9c:	00 
 8263c9d:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263ca4:	08 
 8263ca5:	c7 04 24 e3 02 00 00 	movl   $0x2e3,(%esp)
 8263cac:	e8 26 cc 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8263cb1:	89 c3                	mov    %eax,%ebx
 8263cb3:	e9 1d 05 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263cb8:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8263cbf:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8263cc6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8263cc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263ccd:	8b 45 10             	mov    0x10(%ebp),%eax
 8263cd0:	89 04 24             	mov    %eax,(%esp)
 8263cd3:	e8 18 94 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8263cd8:	83 f0 01             	xor    $0x1,%eax
 8263cdb:	84 c0                	test   %al,%al
 8263cdd:	74 2b                	je     8263d0a <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x50c>
 8263cdf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263ce6:	00 
 8263ce7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263cee:	00 
 8263cef:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263cf6:	08 
 8263cf7:	c7 04 24 e8 02 00 00 	movl   $0x2e8,(%esp)
 8263cfe:	e8 d4 cb 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8263d03:	89 c3                	mov    %eax,%ebx
 8263d05:	e9 cb 04 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263d0a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8263d0d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8263d11:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8263d17:	83 c0 01             	add    $0x1,%eax
 8263d1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263d1e:	8b 45 10             	mov    0x10(%ebp),%eax
 8263d21:	89 04 24             	mov    %eax,(%esp)
 8263d24:	e8 89 96 32 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8263d29:	83 f0 01             	xor    $0x1,%eax
 8263d2c:	84 c0                	test   %al,%al
 8263d2e:	74 2b                	je     8263d5b <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x55d>
 8263d30:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263d37:	00 
 8263d38:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263d3f:	00 
 8263d40:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263d47:	08 
 8263d48:	c7 04 24 ea 02 00 00 	movl   $0x2ea,(%esp)
 8263d4f:	e8 83 cb 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8263d54:	89 c3                	mov    %eax,%ebx
 8263d56:	e9 7a 04 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263d5b:	90                   	nop
 8263d5c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8263d5f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8263d62:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8263d66:	88 45 d2             	mov    %al,-0x2e(%ebp)
 8263d69:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8263d6c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8263d70:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8263d76:	83 c0 01             	add    $0x1,%eax
 8263d79:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263d7d:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8263d83:	83 c0 21             	add    $0x21,%eax
 8263d86:	89 04 24             	mov    %eax,(%esp)
 8263d89:	e8 12 9b e1 ff       	call   807d8a0 <memcpy@plt>
 8263d8e:	8d bd 77 ef ff ff    	lea    -0x1089(%ebp),%edi
 8263d94:	8b 75 cc             	mov    -0x34(%ebp),%esi
 8263d97:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8263d9d:	83 c0 01             	add    $0x1,%eax
 8263da0:	89 85 60 df ff ff    	mov    %eax,-0x20a0(%ebp)
 8263da6:	0f b6 45 d3          	movzbl -0x2d(%ebp),%eax
 8263daa:	0f b6 d8             	movzbl %al,%ebx
 8263dad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263db0:	89 04 24             	mov    %eax,(%esp)
 8263db3:	e8 76 bf fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263db8:	89 04 24             	mov    %eax,(%esp)
 8263dbb:	e8 8c 5a 33 00       	call   859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>
 8263dc0:	0f b7 c0             	movzwl %ax,%eax
 8263dc3:	c1 e0 04             	shl    $0x4,%eax
 8263dc6:	8b 80 80 be 40 09    	mov    0x940be80(%eax),%eax
 8263dcc:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8263dcf:	89 54 24 14          	mov    %edx,0x14(%esp)
 8263dd3:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8263dd7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8263ddb:	8b 95 60 df ff ff    	mov    -0x20a0(%ebp),%edx
 8263de1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8263de5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8263de9:	89 04 24             	mov    %eax,(%esp)
 8263dec:	e8 2d 37 e3 ff       	call   809751e <_ZN6Cipher7DecryptEiPKhiPhPi>
 8263df1:	83 f0 01             	xor    $0x1,%eax
 8263df4:	84 c0                	test   %al,%al
 8263df6:	75 6a                	jne    8263e62 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x664>
 8263df8:	8d bd 77 df ff ff    	lea    -0x2089(%ebp),%edi
 8263dfe:	8b 75 c8             	mov    -0x38(%ebp),%esi
 8263e01:	8d 85 77 ff ff ff    	lea    -0x89(%ebp),%eax
 8263e07:	83 c0 21             	add    $0x21,%eax
 8263e0a:	89 85 64 df ff ff    	mov    %eax,-0x209c(%ebp)
 8263e10:	0f b6 45 d2          	movzbl -0x2e(%ebp),%eax
 8263e14:	0f b6 d8             	movzbl %al,%ebx
 8263e17:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263e1a:	89 04 24             	mov    %eax,(%esp)
 8263e1d:	e8 0c bf fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263e22:	89 04 24             	mov    %eax,(%esp)
 8263e25:	e8 22 5a 33 00       	call   859984c <_ZN8Sanicova4CPad20GetSelectedCipherIdxEv>
 8263e2a:	0f b7 c0             	movzwl %ax,%eax
 8263e2d:	c1 e0 04             	shl    $0x4,%eax
 8263e30:	8b 80 80 be 40 09    	mov    0x940be80(%eax),%eax
 8263e36:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8263e39:	89 54 24 14          	mov    %edx,0x14(%esp)
 8263e3d:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8263e41:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8263e45:	8b bd 64 df ff ff    	mov    -0x209c(%ebp),%edi
 8263e4b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8263e4f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8263e53:	89 04 24             	mov    %eax,(%esp)
 8263e56:	e8 c3 36 e3 ff       	call   809751e <_ZN6Cipher7DecryptEiPKhiPhPi>
 8263e5b:	83 f0 01             	xor    $0x1,%eax
 8263e5e:	84 c0                	test   %al,%al
 8263e60:	74 07                	je     8263e69 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x66b>
 8263e62:	b8 01 00 00 00       	mov    $0x1,%eax
 8263e67:	eb 05                	jmp    8263e6e <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x670>
 8263e69:	b8 00 00 00 00       	mov    $0x0,%eax
 8263e6e:	84 c0                	test   %al,%al
 8263e70:	74 25                	je     8263e97 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x699>
 8263e72:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8263e79:	00 
 8263e7a:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 8263e81:	00 
 8263e82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263e85:	89 04 24             	mov    %eax,(%esp)
 8263e88:	e8 b5 80 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8263e8d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8263e92:	e9 3e 03 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263e97:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8263e9e:	eb 72                	jmp    8263f12 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x714>
 8263ea0:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8263ea3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8263ea6:	0f b6 84 05 77 ef ff 	movzbl -0x1089(%ebp,%eax,1),%eax
 8263ead:	ff 
 8263eae:	89 c6                	mov    %eax,%esi
 8263eb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263eb3:	89 04 24             	mov    %eax,(%esp)
 8263eb6:	e8 73 be fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263ebb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8263ebe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8263ec2:	89 04 24             	mov    %eax,(%esp)
 8263ec5:	e8 6c 5a 33 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 8263eca:	89 f2                	mov    %esi,%edx
 8263ecc:	28 c2                	sub    %al,%dl
 8263ece:	89 d0                	mov    %edx,%eax
 8263ed0:	88 84 1d 77 ef ff ff 	mov    %al,-0x1089(%ebp,%ebx,1)
 8263ed7:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8263eda:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8263edd:	0f b6 84 05 77 df ff 	movzbl -0x2089(%ebp,%eax,1),%eax
 8263ee4:	ff 
 8263ee5:	89 c6                	mov    %eax,%esi
 8263ee7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263eea:	89 04 24             	mov    %eax,(%esp)
 8263eed:	e8 3c be fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263ef2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8263ef5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8263ef9:	89 04 24             	mov    %eax,(%esp)
 8263efc:	e8 35 5a 33 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 8263f01:	89 f2                	mov    %esi,%edx
 8263f03:	28 c2                	sub    %al,%dl
 8263f05:	89 d0                	mov    %edx,%eax
 8263f07:	88 84 1d 77 df ff ff 	mov    %al,-0x2089(%ebp,%ebx,1)
 8263f0e:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8263f12:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 8263f16:	0f 9e c0             	setle  %al
 8263f19:	84 c0                	test   %al,%al
 8263f1b:	75 83                	jne    8263ea0 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x6a2>
 8263f1d:	8d 85 77 ef ff ff    	lea    -0x1089(%ebp),%eax
 8263f23:	89 04 24             	mov    %eax,(%esp)
 8263f26:	e8 9f f3 ff ff       	call   82632ca <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc>
 8263f2b:	83 f0 01             	xor    $0x1,%eax
 8263f2e:	84 c0                	test   %al,%al
 8263f30:	75 15                	jne    8263f47 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x749>
 8263f32:	8d 85 77 df ff ff    	lea    -0x2089(%ebp),%eax
 8263f38:	89 04 24             	mov    %eax,(%esp)
 8263f3b:	e8 8a f3 ff ff       	call   82632ca <_ZN24Dispatcher_MouseRegister19checkValiedPasswordEPKc>
 8263f40:	83 f0 01             	xor    $0x1,%eax
 8263f43:	84 c0                	test   %al,%al
 8263f45:	74 07                	je     8263f4e <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x750>
 8263f47:	b8 01 00 00 00       	mov    $0x1,%eax
 8263f4c:	eb 05                	jmp    8263f53 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x755>
 8263f4e:	b8 00 00 00 00       	mov    $0x0,%eax
 8263f53:	84 c0                	test   %al,%al
 8263f55:	74 2b                	je     8263f82 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x784>
 8263f57:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263f5e:	00 
 8263f5f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263f66:	00 
 8263f67:	c7 44 24 04 a0 c8 be 	movl   $0x8bec8a0,0x4(%esp)
 8263f6e:	08 
 8263f6f:	c7 04 24 43 03 00 00 	movl   $0x343,(%esp)
 8263f76:	e8 5c c9 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8263f7b:	89 c3                	mov    %eax,%ebx
 8263f7d:	e9 53 02 00 00       	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 8263f82:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8263f87:	c7 44 24 08 46 03 00 	movl   $0x346,0x8(%esp)
 8263f8e:	00 
 8263f8f:	c7 44 24 04 bc b1 be 	movl   $0x8beb1bc,0x4(%esp)
 8263f96:	08 
 8263f97:	89 04 24             	mov    %eax,(%esp)
 8263f9a:	e8 e7 ba 02 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8263f9f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8263fa6:	00 
 8263fa7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8263fab:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8263fae:	89 04 24             	mov    %eax,(%esp)
 8263fb1:	e8 70 4c e6 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8263fb6:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8263fb9:	89 04 24             	mov    %eax,(%esp)
 8263fbc:	e8 85 4c e6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8263fc1:	c7 44 24 04 a3 00 00 	movl   $0xa3,0x4(%esp)
 8263fc8:	00 
 8263fc9:	89 04 24             	mov    %eax,(%esp)
 8263fcc:	e8 85 4c e6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8263fd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8263fd4:	89 04 24             	mov    %eax,(%esp)
 8263fd7:	e8 ba 4c e6 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8263fdc:	89 c3                	mov    %eax,%ebx
 8263fde:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8263fe1:	89 04 24             	mov    %eax,(%esp)
 8263fe4:	e8 5d 4c e6 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8263fe9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8263fed:	89 04 24             	mov    %eax,(%esp)
 8263ff0:	e8 61 4c e6 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8263ff5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8263ff8:	89 04 24             	mov    %eax,(%esp)
 8263ffb:	e8 4e 4c e6 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8264000:	89 04 24             	mov    %eax,(%esp)
 8264003:	e8 b8 14 00 00       	call   82654c0 <_ZN12CStreamGuard11GetInBufferI18SIG_MOUSE_REGISTEREEPT_v>
 8264008:	89 45 dc             	mov    %eax,-0x24(%ebp)
 826400b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826400e:	89 04 24             	mov    %eax,(%esp)
 8264011:	e8 58 63 e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8264016:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8264019:	89 02                	mov    %eax,(%edx)
 826401b:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 8264022:	0f b6 d0             	movzbl %al,%edx
 8264025:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8264028:	89 50 04             	mov    %edx,0x4(%eax)
 826402b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 826402e:	8d 50 08             	lea    0x8(%eax),%edx
 8264031:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8264038:	00 
 8264039:	8d 85 77 ef ff ff    	lea    -0x1089(%ebp),%eax
 826403f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264043:	89 14 24             	mov    %edx,(%esp)
 8264046:	e8 85 98 e1 ff       	call   807d8d0 <strncpy@plt>
 826404b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 826404e:	8d 50 0f             	lea    0xf(%eax),%edx
 8264051:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8264058:	00 
 8264059:	8d 85 77 df ff ff    	lea    -0x2089(%ebp),%eax
 826405f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264063:	89 14 24             	mov    %edx,(%esp)
 8264066:	e8 65 98 e1 ff       	call   807d8d0 <strncpy@plt>
 826406b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826406e:	89 04 24             	mov    %eax,(%esp)
 8264071:	e8 9c bc fc ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 8264076:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8264079:	83 c2 48             	add    $0x48,%edx
 826407c:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8264083:	00 
 8264084:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264088:	89 14 24             	mov    %edx,(%esp)
 826408b:	e8 40 98 e1 ff       	call   807d8d0 <strncpy@plt>
 8264090:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 8264097:	3c 01                	cmp    $0x1,%al
 8264099:	75 22                	jne    82640bd <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x8bf>
 826409b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826409e:	05 00 97 07 00       	add    $0x79700,%eax
 82640a3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 82640aa:	00 
 82640ab:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82640b2:	00 
 82640b3:	89 04 24             	mov    %eax,(%esp)
 82640b6:	e8 e1 06 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 82640bb:	eb 2b                	jmp    82640e8 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x8ea>
 82640bd:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 82640c4:	3c 02                	cmp    $0x2,%al
 82640c6:	75 20                	jne    82640e8 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x8ea>
 82640c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82640cb:	05 00 97 07 00       	add    $0x79700,%eax
 82640d0:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 82640d7:	00 
 82640d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82640df:	00 
 82640e0:	89 04 24             	mov    %eax,(%esp)
 82640e3:	e8 b4 06 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 82640e8:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 82640ef:	3c 01                	cmp    $0x1,%al
 82640f1:	75 25                	jne    8264118 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x91a>
 82640f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 82640f6:	89 04 24             	mov    %eax,(%esp)
 82640f9:	e8 02 c7 fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82640fe:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 8264105:	00 
 8264106:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826410d:	00 
 826410e:	89 04 24             	mov    %eax,(%esp)
 8264111:	e8 92 54 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8264116:	eb 2e                	jmp    8264146 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x948>
 8264118:	0f b6 85 77 ff ff ff 	movzbl -0x89(%ebp),%eax
 826411f:	3c 02                	cmp    $0x2,%al
 8264121:	75 23                	jne    8264146 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x948>
 8264123:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264126:	89 04 24             	mov    %eax,(%esp)
 8264129:	e8 d2 c6 fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 826412e:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8264135:	00 
 8264136:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826413d:	00 
 826413e:	89 04 24             	mov    %eax,(%esp)
 8264141:	e8 62 54 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 8264146:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264149:	89 04 24             	mov    %eax,(%esp)
 826414c:	e8 dd bb fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8264151:	89 04 24             	mov    %eax,(%esp)
 8264154:	e8 cd 11 00 00       	call   8265326 <_ZN8Sanicova4CPad11getPasswordEv>
 8264159:	8b 55 dc             	mov    -0x24(%ebp),%edx
 826415c:	83 c2 23             	add    $0x23,%edx
 826415f:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 8264166:	00 
 8264167:	89 44 24 04          	mov    %eax,0x4(%esp)
 826416b:	89 14 24             	mov    %edx,(%esp)
 826416e:	e8 2d 97 e1 ff       	call   807d8a0 <memcpy@plt>
 8264173:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264176:	89 04 24             	mov    %eax,(%esp)
 8264179:	e8 b0 bb fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 826417e:	89 04 24             	mov    %eax,(%esp)
 8264181:	e8 7c 11 00 00       	call   8265302 <_ZN8Sanicova4CPad18getAdvideChangePwdEv>
 8264186:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8264189:	88 42 58             	mov    %al,0x58(%edx)
 826418c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8264191:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8264194:	89 54 24 08          	mov    %edx,0x8(%esp)
 8264198:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 826419f:	00 
 82641a0:	89 04 24             	mov    %eax,(%esp)
 82641a3:	e8 36 ce 30 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82641a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 82641ad:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82641b0:	89 04 24             	mov    %eax,(%esp)
 82641b3:	e8 1a 87 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82641b8:	eb 1b                	jmp    82641d5 <_ZN24Dispatcher_MouseRegister12dispatch_sigEP5CUserR9PacketBuf+0x9d7>
 82641ba:	89 d3                	mov    %edx,%ebx
 82641bc:	89 c6                	mov    %eax,%esi
 82641be:	8d 45 c0             	lea    -0x40(%ebp),%eax
 82641c1:	89 04 24             	mov    %eax,(%esp)
 82641c4:	e8 09 87 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82641c9:	89 f0                	mov    %esi,%eax
 82641cb:	89 da                	mov    %ebx,%edx
 82641cd:	89 04 24             	mov    %eax,(%esp)
 82641d0:	e8 7b f5 87 00       	call   8ae3750 <_Unwind_Resume>
 82641d5:	89 d8                	mov    %ebx,%eax
 82641d7:	81 c4 bc 20 00 00    	add    $0x20bc,%esp
 82641dd:	5b                   	pop    %ebx
 82641de:	5e                   	pop    %esi
 82641df:	5f                   	pop    %edi
 82641e0:	5d                   	pop    %ebp
 82641e1:	c3                   	ret

```

```c
// Dispatcher_MouseRegister::dispatch_sig @ 0x82637fe

/* Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_MouseRegister::dispatch_sig
          (Dispatcher_MouseRegister *this,CUser *param_1,PacketBuf *param_2)

{
  uchar uVar1;
  size_t sVar2;
  int iVar3;
  char cVar4;
  SIG_MOUSE_REGISTER SVar5;
  int iVar6;
  undefined4 uVar7;
  CPad *pCVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  char *pcVar11;
  void *__src;
  uint uVar12;
  uchar *puVar13;
  uint uVar14;
  bool bVar15;
  byte bVar16;
  uchar local_208d [4096];
  uchar local_108d [4096];
  byte local_8d;
  uchar auStack_8c [32];
  uchar auStack_6c [32];
  CStreamGuard local_4c [8];
  CStreamGuard local_44 [8];
  size_t local_3c;
  size_t local_38;
  byte local_32;
  byte local_31;
  int local_30 [2];
  SIG_MOUSE_REGISTER *local_28;
  SIG_MOUSE_REGISTER *local_24;
  int local_20;
  
  bVar16 = 0;
  iVar6 = CUser::get_state(param_1);
  if ((iVar6 == 3) || (iVar6 = CUser::get_state(param_1), iVar6 == 2)) {
    bVar15 = false;
  }
  else {
    bVar15 = true;
  }
  if (bVar15) {
    uVar7 = LineFunc(0x27c,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  cVar4 = PacketBuf::get_byte(param_2,&local_8d);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x282,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  pCVar8 = (CPad *)CUser::getPad(param_1);
  iVar6 = Sanicova::CPad::getFailCnt(pCVar8);
  if (2 < iVar6) {
    CUser::SendCmdErrorPacket(param_1,0x74,0x88);
    return 0;
  }
  pCVar8 = (CPad *)CUser::getPad(param_1);
  iVar6 = Sanicova::CPad::getCancelCnt(pCVar8);
  if (10 < iVar6) {
    CUser::SendCmdErrorPacket(param_1,0x74,0x8b);
    return 0;
  }
  puVar13 = local_108d;
  uVar14 = 0x1000;
  bVar15 = ((uint)puVar13 & 1) != 0;
  if (bVar15) {
    local_108d[0] = '\0';
    puVar13 = local_108d + 1;
    uVar14 = 0xfff;
  }
  if (((uint)puVar13 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 2;
  }
  for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13[2] = '\0';
    puVar13[3] = '\0';
    puVar13 = puVar13 + ((uint)bVar16 * -2 + 1) * 4;
  }
  if ((uVar14 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
  }
  if (bVar15) {
    *puVar13 = '\0';
  }
  puVar13 = local_208d;
  uVar14 = 0x1000;
  bVar15 = ((uint)puVar13 & 1) != 0;
  if (bVar15) {
    local_208d[0] = '\0';
    puVar13 = local_208d + 1;
    uVar14 = 0xfff;
  }
  if (((uint)puVar13 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 2;
  }
  for (uVar12 = uVar14 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13[2] = '\0';
    puVar13[3] = '\0';
    puVar13 = puVar13 + ((uint)bVar16 * -2 + 1) * 4;
  }
  if ((uVar14 & 2) != 0) {
    puVar13[0] = '\0';
    puVar13[1] = '\0';
    puVar13 = puVar13 + 2;
  }
  if (bVar15) {
    *puVar13 = '\0';
  }
  local_30[1] = 0x1000;
  local_30[0] = 0x1000;
  local_31 = 0xe;
  local_32 = 0xe;
  if (local_8d != 1) {
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar4 = Sanicova::CPad::isActivate(pCVar8);
    if (cVar4 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x74,1);
      return 0;
    }
    pCVar8 = (CPad *)CUser::getPad(param_1);
    cVar4 = Sanicova::CPad::isCertified(pCVar8);
    if (cVar4 != '\x01') {
      CUser::SendCmdErrorPacket(param_1,0x74,0x86);
      return 0;
    }
  }
  if (local_8d == 3) {
    pSVar9 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Secu.cpp",0x2ba);
    CStreamGuard::CStreamGuard(local_4c,pSVar9,true);
    pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
                    /* try { // try from 08263ade to 08263c00 has its CatchHandler @ 08263c16 */
    CStreamGuard::operator<<(pCVar10,0xa3);
    iVar6 = CUser::GetUID(param_1);
    pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_4c);
    CStreamGuard::operator<<(pCVar10,iVar6);
    pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_4c);
    local_24 = CStreamGuard::GetInBuffer<SIG_MOUSE_REGISTER>(pCVar10);
    uVar7 = CUser::get_acc_id(param_1);
    *(undefined4 *)local_24 = uVar7;
    *(uint *)(local_24 + 4) = (uint)local_8d;
    strncpy((char *)(local_24 + 8),(char *)local_108d,7);
    strncpy((char *)(local_24 + 0xf),(char *)local_208d,7);
    pcVar11 = (char *)CUser::getWebAddress(param_1);
    strncpy((char *)(local_24 + 0x48),pcVar11,0x10);
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,4);
    uVar7 = CUser::getHades(param_1);
    XNuclear::CHades::ChangeSecurity(uVar7,1,0x26);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_4c);
    CStreamGuard::~CStreamGuard(local_4c);
    return 0;
  }
  cVar4 = PacketBuf::get_byte(param_2,&local_31);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x2dc,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  if (((local_31 == 0) || (0xd < local_31)) || (local_31 == 5)) {
    uVar7 = LineFunc(0x2e3,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  local_38 = 0;
  local_3c = 0;
  cVar4 = PacketBuf::get_int(param_2,(int *)&local_38);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x2e8,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  cVar4 = PacketBuf::get_binary(param_2,(char *)auStack_8c,local_38);
  if (cVar4 != '\x01') {
    uVar7 = LineFunc(0x2ea,"virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar7;
  }
  local_3c = local_38;
  local_32 = local_31;
  memcpy(auStack_6c,auStack_8c,local_38);
  sVar2 = local_38;
  uVar12 = (uint)local_31;
  pCVar8 = (CPad *)CUser::getPad(param_1);
  uVar14 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
  cVar4 = Cipher::Decrypt((Cipher *)
                          (&GlobalData::s_secu_cipher_keystring_manager_)[(uVar14 & 0xffff) * 4],
                          uVar12,auStack_8c,sVar2,local_108d,local_30 + 1);
  sVar2 = local_3c;
  if (cVar4 == '\x01') {
    uVar12 = (uint)local_32;
    pCVar8 = (CPad *)CUser::getPad(param_1);
    uVar14 = Sanicova::CPad::GetSelectedCipherIdx(pCVar8);
    cVar4 = Cipher::Decrypt((Cipher *)
                            (&GlobalData::s_secu_cipher_keystring_manager_)[(uVar14 & 0xffff) * 4],
                            uVar12,auStack_6c,sVar2,local_208d,local_30);
    if (cVar4 == '\x01') {
      bVar15 = false;
      goto LAB_08263e6e;
    }
  }
  bVar15 = true;
LAB_08263e6e:
  if (!bVar15) {
    for (local_20 = 0; iVar6 = local_20, local_20 < 4; local_20 = local_20 + 1) {
      uVar1 = local_108d[local_20];
      pCVar8 = (CPad *)CUser::getPad(param_1);
      cVar4 = Sanicova::CPad::GetShakeData(pCVar8,local_20);
      iVar3 = local_20;
      local_108d[iVar6] = uVar1 - cVar4;
      uVar1 = local_208d[local_20];
      pCVar8 = (CPad *)CUser::getPad(param_1);
      cVar4 = Sanicova::CPad::GetShakeData(pCVar8,local_20);
      local_208d[iVar3] = uVar1 - cVar4;
    }
    cVar4 = checkValiedPassword((char *)local_108d);
    if ((cVar4 == '\x01') && (cVar4 = checkValiedPassword((char *)local_208d), cVar4 == '\x01')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    if (bVar15) {
      uVar7 = LineFunc(0x343,
                       "virtual int Dispatcher_MouseRegister::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
    else {
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"PacketDispatcher_Secu.cpp",0x346);
      CStreamGuard::CStreamGuard(local_44,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_44);
                    /* try { // try from 08263fcc to 082641a7 has its CatchHandler @ 082641ba */
      CStreamGuard::operator<<(pCVar10,0xa3);
      iVar6 = CUser::GetUID(param_1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_44);
      CStreamGuard::operator<<(pCVar10,iVar6);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_44);
      local_28 = CStreamGuard::GetInBuffer<SIG_MOUSE_REGISTER>(pCVar10);
      uVar7 = CUser::get_acc_id(param_1);
      *(undefined4 *)local_28 = uVar7;
      *(uint *)(local_28 + 4) = (uint)local_8d;
      strncpy((char *)(local_28 + 8),(char *)local_108d,7);
      strncpy((char *)(local_28 + 0xf),(char *)local_208d,7);
      pcVar11 = (char *)CUser::getWebAddress(param_1);
      strncpy((char *)(local_28 + 0x48),pcVar11,0x10);
      if (local_8d == 1) {
        cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,2);
      }
      else if (local_8d == 2) {
        cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,3);
      }
      if (local_8d == 1) {
        uVar7 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar7,1,0x25);
      }
      else if (local_8d == 2) {
        uVar7 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar7,1,0x24);
      }
      pCVar8 = (CPad *)CUser::getPad(param_1);
      __src = (void *)Sanicova::CPad::getPassword(pCVar8);
      memcpy(local_28 + 0x23,__src,0x24);
      pCVar8 = (CPad *)CUser::getPad(param_1);
      SVar5 = (SIG_MOUSE_REGISTER)Sanicova::CPad::getAdvideChangePwd(pCVar8);
      local_28[0x58] = SVar5;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_44);
      uVar7 = 0;
      CStreamGuard::~CStreamGuard(local_44);
    }
    return uVar7;
  }
  CUser::SendCmdErrorPacket(param_1,0x74,1);
  return 0;
}

```

---

## doPassPadReplay

```asm
// === 082633c6 Dispatcher_MouseRegister::doPassPadReplay  [0x082633c6-0x82637fd] ===
 82633c6:	55                   	push   %ebp
 82633c7:	89 e5                	mov    %esp,%ebp
 82633c9:	56                   	push   %esi
 82633ca:	53                   	push   %ebx
 82633cb:	83 ec 50             	sub    $0x50,%esp
 82633ce:	8b 45 10             	mov    0x10(%ebp),%eax
 82633d1:	88 45 d4             	mov    %al,-0x2c(%ebp)
 82633d4:	8b 45 14             	mov    0x14(%ebp),%eax
 82633d7:	c6 00 00             	movb   $0x0,(%eax)
 82633da:	8b 45 18             	mov    0x18(%ebp),%eax
 82633dd:	c6 00 00             	movb   $0x0,(%eax)
 82633e0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82633e7:	eb 39                	jmp    8263422 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x5c>
 82633e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82633ec:	89 c3                	mov    %eax,%ebx
 82633ee:	03 5d 0c             	add    0xc(%ebp),%ebx
 82633f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 82633f4:	03 45 0c             	add    0xc(%ebp),%eax
 82633f7:	0f b6 00             	movzbl (%eax),%eax
 82633fa:	89 c6                	mov    %eax,%esi
 82633fc:	8b 45 08             	mov    0x8(%ebp),%eax
 82633ff:	89 04 24             	mov    %eax,(%esp)
 8263402:	e8 27 c9 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263407:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826340a:	89 54 24 04          	mov    %edx,0x4(%esp)
 826340e:	89 04 24             	mov    %eax,(%esp)
 8263411:	e8 20 65 33 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 8263416:	89 f2                	mov    %esi,%edx
 8263418:	28 c2                	sub    %al,%dl
 826341a:	89 d0                	mov    %edx,%eax
 826341c:	88 03                	mov    %al,(%ebx)
 826341e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8263422:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8263426:	0f 9e c0             	setle  %al
 8263429:	84 c0                	test   %al,%al
 826342b:	75 bc                	jne    82633e9 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x23>
 826342d:	8b 45 08             	mov    0x8(%ebp),%eax
 8263430:	89 04 24             	mov    %eax,(%esp)
 8263433:	e8 f6 c8 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263438:	8b 55 0c             	mov    0xc(%ebp),%edx
 826343b:	89 54 24 04          	mov    %edx,0x4(%esp)
 826343f:	89 04 24             	mov    %eax,(%esp)
 8263442:	e8 cb 62 33 00       	call   8599712 <_ZNK8Sanicova4CPad11checkAnswerEPc>
 8263447:	83 f0 01             	xor    $0x1,%eax
 826344a:	84 c0                	test   %al,%al
 826344c:	0f 84 07 02 00 00    	je     8263659 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x293>
 8263452:	8b 45 08             	mov    0x8(%ebp),%eax
 8263455:	05 00 97 07 00       	add    $0x79700,%eax
 826345a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8263461:	00 
 8263462:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8263469:	00 
 826346a:	89 04 24             	mov    %eax,(%esp)
 826346d:	e8 2a 13 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 8263472:	8b 45 08             	mov    0x8(%ebp),%eax
 8263475:	89 04 24             	mov    %eax,(%esp)
 8263478:	e8 b1 c8 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 826347d:	89 04 24             	mov    %eax,(%esp)
 8263480:	e8 53 1e 00 00       	call   82652d8 <_ZN8Sanicova4CPad10incFailCntEv>
 8263485:	83 f8 02             	cmp    $0x2,%eax
 8263488:	0f 9f c0             	setg   %al
 826348b:	84 c0                	test   %al,%al
 826348d:	74 68                	je     82634f7 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x131>
 826348f:	8b 45 18             	mov    0x18(%ebp),%eax
 8263492:	c6 00 88             	movb   $0x88,(%eax)
 8263495:	8b 45 08             	mov    0x8(%ebp),%eax
 8263498:	89 04 24             	mov    %eax,(%esp)
 826349b:	e8 60 d3 fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82634a0:	c7 44 24 08 21 00 00 	movl   $0x21,0x8(%esp)
 82634a7:	00 
 82634a8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82634af:	00 
 82634b0:	89 04 24             	mov    %eax,(%esp)
 82634b3:	e8 f0 60 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 82634b8:	8b 45 08             	mov    0x8(%ebp),%eax
 82634bb:	89 04 24             	mov    %eax,(%esp)
 82634be:	e8 97 64 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 82634c3:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 82634ca:	00 
 82634cb:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 82634d2:	00 
 82634d3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 82634da:	00 
 82634db:	c7 44 24 08 42 03 00 	movl   $0x342,0x8(%esp)
 82634e2:	00 
 82634e3:	8b 55 08             	mov    0x8(%ebp),%edx
 82634e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 82634ea:	89 04 24             	mov    %eax,(%esp)
 82634ed:	e8 8c 57 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 82634f2:	e9 20 01 00 00       	jmp    8263617 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x251>
 82634f7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82634fa:	89 04 24             	mov    %eax,(%esp)
 82634fd:	e8 4a a8 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8263502:	c7 44 24 08 a7 00 00 	movl   $0xa7,0x8(%esp)
 8263509:	00 
 826350a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8263511:	00 
 8263512:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8263515:	89 04 24             	mov    %eax,(%esp)
 8263518:	e8 df 83 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 826351d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8263524:	00 
 8263525:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8263528:	89 04 24             	mov    %eax,(%esp)
 826352b:	e8 f0 83 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8263530:	c7 44 24 04 87 00 00 	movl   $0x87,0x4(%esp)
 8263537:	00 
 8263538:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826353b:	89 04 24             	mov    %eax,(%esp)
 826353e:	e8 dd 83 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8263543:	8b 45 08             	mov    0x8(%ebp),%eax
 8263546:	89 04 24             	mov    %eax,(%esp)
 8263549:	e8 e0 c7 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 826354e:	89 04 24             	mov    %eax,(%esp)
 8263551:	e8 38 ba fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 8263556:	89 44 24 04          	mov    %eax,0x4(%esp)
 826355a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826355d:	89 04 24             	mov    %eax,(%esp)
 8263560:	e8 bb 83 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8263565:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826356c:	00 
 826356d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8263570:	89 04 24             	mov    %eax,(%esp)
 8263573:	e8 e0 83 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8263578:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826357b:	89 44 24 04          	mov    %eax,0x4(%esp)
 826357f:	8b 45 08             	mov    0x8(%ebp),%eax
 8263582:	89 04 24             	mov    %eax,(%esp)
 8263585:	e8 30 50 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 826358a:	8b 45 08             	mov    0x8(%ebp),%eax
 826358d:	89 04 24             	mov    %eax,(%esp)
 8263590:	e8 99 c7 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263595:	89 04 24             	mov    %eax,(%esp)
 8263598:	e8 f1 b9 fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 826359d:	83 f8 01             	cmp    $0x1,%eax
 82635a0:	0f 94 c0             	sete   %al
 82635a3:	84 c0                	test   %al,%al
 82635a5:	74 25                	je     82635cc <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x206>
 82635a7:	8b 45 08             	mov    0x8(%ebp),%eax
 82635aa:	89 04 24             	mov    %eax,(%esp)
 82635ad:	e8 4e d2 fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82635b2:	c7 44 24 08 1f 00 00 	movl   $0x1f,0x8(%esp)
 82635b9:	00 
 82635ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82635c1:	00 
 82635c2:	89 04 24             	mov    %eax,(%esp)
 82635c5:	e8 de 5f 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 82635ca:	eb 40                	jmp    826360c <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x246>
 82635cc:	8b 45 08             	mov    0x8(%ebp),%eax
 82635cf:	89 04 24             	mov    %eax,(%esp)
 82635d2:	e8 29 d2 fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 82635d7:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 82635de:	00 
 82635df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82635e6:	00 
 82635e7:	89 04 24             	mov    %eax,(%esp)
 82635ea:	e8 b9 5f 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 82635ef:	eb 1b                	jmp    826360c <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x246>
 82635f1:	89 d3                	mov    %edx,%ebx
 82635f3:	89 c6                	mov    %eax,%esi
 82635f5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 82635f8:	89 04 24             	mov    %eax,(%esp)
 82635fb:	e8 80 a8 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8263600:	89 f0                	mov    %esi,%eax
 8263602:	89 da                	mov    %ebx,%edx
 8263604:	89 04 24             	mov    %eax,(%esp)
 8263607:	e8 44 01 88 00       	call   8ae3750 <_Unwind_Resume>
 826360c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 826360f:	89 04 24             	mov    %eax,(%esp)
 8263612:	e8 69 a8 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8263617:	8b 45 08             	mov    0x8(%ebp),%eax
 826361a:	89 04 24             	mov    %eax,(%esp)
 826361d:	e8 f0 c6 fc ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 8263622:	89 c3                	mov    %eax,%ebx
 8263624:	8b 45 08             	mov    0x8(%ebp),%eax
 8263627:	89 04 24             	mov    %eax,(%esp)
 826362a:	e8 ff c6 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 826362f:	89 04 24             	mov    %eax,(%esp)
 8263632:	e8 57 b9 fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 8263637:	89 c6                	mov    %eax,%esi
 8263639:	8b 45 08             	mov    0x8(%ebp),%eax
 826363c:	89 04 24             	mov    %eax,(%esp)
 826363f:	e8 2a 6d e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8263644:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8263648:	89 74 24 04          	mov    %esi,0x4(%esp)
 826364c:	89 04 24             	mov    %eax,(%esp)
 826364f:	e8 60 08 1c 00       	call   8423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>
 8263654:	e9 9e 01 00 00       	jmp    82637f7 <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x431>
 8263659:	8b 45 08             	mov    0x8(%ebp),%eax
 826365c:	05 00 97 07 00       	add    $0x79700,%eax
 8263661:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8263668:	00 
 8263669:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8263670:	00 
 8263671:	89 04 24             	mov    %eax,(%esp)
 8263674:	e8 23 11 42 00       	call   868479c <_ZN15cUserHistoryLog11SecuServiceE22ENUM_SECU_SERVICE_TYPE24ENUM_SECU_SERVICE_ACTION>
 8263679:	8b 45 08             	mov    0x8(%ebp),%eax
 826367c:	89 04 24             	mov    %eax,(%esp)
 826367f:	e8 7c d1 fc ff       	call   8230800 <_ZN5CUser8getHadesEv>
 8263684:	c7 44 24 08 23 00 00 	movl   $0x23,0x8(%esp)
 826368b:	00 
 826368c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8263693:	00 
 8263694:	89 04 24             	mov    %eax,(%esp)
 8263697:	e8 0c 5f 25 00       	call   84b95a8 <_ZN8XNuclear6CHades14ChangeSecurityENS_19ENUM_HADES_SECURITYEj>
 826369c:	8b 45 14             	mov    0x14(%ebp),%eax
 826369f:	c6 00 01             	movb   $0x1,(%eax)
 82636a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82636a5:	89 04 24             	mov    %eax,(%esp)
 82636a8:	e8 9f a6 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82636ad:	c7 44 24 08 a7 00 00 	movl   $0xa7,0x8(%esp)
 82636b4:	00 
 82636b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82636bc:	00 
 82636bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82636c0:	89 04 24             	mov    %eax,(%esp)
 82636c3:	e8 34 82 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82636c8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82636cf:	00 
 82636d0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82636d3:	89 04 24             	mov    %eax,(%esp)
 82636d6:	e8 45 82 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82636db:	8b 45 08             	mov    0x8(%ebp),%eax
 82636de:	89 04 24             	mov    %eax,(%esp)
 82636e1:	e8 48 c6 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 82636e6:	89 04 24             	mov    %eax,(%esp)
 82636e9:	e8 14 1c 00 00       	call   8265302 <_ZN8Sanicova4CPad18getAdvideChangePwdEv>
 82636ee:	0f b6 c0             	movzbl %al,%eax
 82636f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82636f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82636f8:	89 04 24             	mov    %eax,(%esp)
 82636fb:	e8 20 82 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8263700:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8263707:	00 
 8263708:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826370b:	89 04 24             	mov    %eax,(%esp)
 826370e:	e8 45 82 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8263713:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8263716:	89 44 24 04          	mov    %eax,0x4(%esp)
 826371a:	8b 45 08             	mov    0x8(%ebp),%eax
 826371d:	89 04 24             	mov    %eax,(%esp)
 8263720:	e8 95 4e 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8263725:	8b 45 08             	mov    0x8(%ebp),%eax
 8263728:	89 04 24             	mov    %eax,(%esp)
 826372b:	e8 fe c5 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263730:	89 04 24             	mov    %eax,(%esp)
 8263733:	e8 56 b8 fc ff       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 8263738:	85 c0                	test   %eax,%eax
 826373a:	0f 9f c0             	setg   %al
 826373d:	84 c0                	test   %al,%al
 826373f:	74 2c                	je     826376d <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x3a7>
 8263741:	8b 45 08             	mov    0x8(%ebp),%eax
 8263744:	89 04 24             	mov    %eax,(%esp)
 8263747:	e8 c6 c5 fc ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 826374c:	89 c3                	mov    %eax,%ebx
 826374e:	8b 45 08             	mov    0x8(%ebp),%eax
 8263751:	89 04 24             	mov    %eax,(%esp)
 8263754:	e8 15 6c e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8263759:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 826375d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8263764:	00 
 8263765:	89 04 24             	mov    %eax,(%esp)
 8263768:	e8 47 07 1c 00       	call   8423eb4 <_ZN23DB_PassPadUpdateFailCnt11makeRequestEjjPc>
 826376d:	8b 45 08             	mov    0x8(%ebp),%eax
 8263770:	89 04 24             	mov    %eax,(%esp)
 8263773:	e8 b6 c5 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263778:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 826377f:	00 
 8263780:	89 04 24             	mov    %eax,(%esp)
 8263783:	e8 86 1b 00 00       	call   826530e <_ZN8Sanicova4CPad12setCertifiedEb>
 8263788:	8b 45 08             	mov    0x8(%ebp),%eax
 826378b:	89 04 24             	mov    %eax,(%esp)
 826378e:	e8 9b c5 fc ff       	call   822fd2e <_ZN5CUser6getPadEv>
 8263793:	89 04 24             	mov    %eax,(%esp)
 8263796:	e8 57 1b 00 00       	call   82652f2 <_ZN8Sanicova4CPad12resetFailCntEv>
 826379b:	8b 45 08             	mov    0x8(%ebp),%eax
 826379e:	89 04 24             	mov    %eax,(%esp)
 82637a1:	e8 6c c5 fc ff       	call   822fd12 <_ZN5CUser13getWebAddressEv>
 82637a6:	89 c3                	mov    %eax,%ebx
 82637a8:	0f be 75 d4          	movsbl -0x2c(%ebp),%esi
 82637ac:	8b 45 08             	mov    0x8(%ebp),%eax
 82637af:	89 04 24             	mov    %eax,(%esp)
 82637b2:	e8 b7 6b e7 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 82637b7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82637bb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82637c2:	00 
 82637c3:	89 74 24 04          	mov    %esi,0x4(%esp)
 82637c7:	89 04 24             	mov    %eax,(%esp)
 82637ca:	e8 83 0c 1c 00       	call   8424452 <_ZN24DB_GoblinPadUpdateReward11makeRequestEjcbPc>
 82637cf:	eb 1b                	jmp    82637ec <_ZN24Dispatcher_MouseRegister15doPassPadReplayEP5CUserPccRbRh+0x426>
 82637d1:	89 d3                	mov    %edx,%ebx
 82637d3:	89 c6                	mov    %eax,%esi
 82637d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82637d8:	89 04 24             	mov    %eax,(%esp)
 82637db:	e8 a0 a6 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82637e0:	89 f0                	mov    %esi,%eax
 82637e2:	89 da                	mov    %ebx,%edx
 82637e4:	89 04 24             	mov    %eax,(%esp)
 82637e7:	e8 64 ff 87 00       	call   8ae3750 <_Unwind_Resume>
 82637ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 82637ef:	89 04 24             	mov    %eax,(%esp)
 82637f2:	e8 89 a6 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 82637f7:	83 c4 50             	add    $0x50,%esp
 82637fa:	5b                   	pop    %ebx
 82637fb:	5e                   	pop    %esi
 82637fc:	5d                   	pop    %ebp
 82637fd:	c3                   	ret

```

```c
// Dispatcher_MouseRegister::doPassPadReplay @ 0x82633c6

/* Dispatcher_MouseRegister::doPassPadReplay(CUser*, char*, char, bool&, unsigned char&) */

void Dispatcher_MouseRegister::doPassPadReplay
               (CUser *param_1,char *param_2,char param_3,bool *param_4,uchar *param_5)

{
  char cVar1;
  char cVar2;
  CPad *pCVar3;
  int iVar4;
  undefined4 uVar5;
  CHackAnalyzer *pCVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  int local_10;
  
  *param_4 = false;
  *param_5 = '\0';
  for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
    pcVar7 = param_2 + local_10;
    cVar2 = param_2[local_10];
    pCVar3 = (CPad *)CUser::getPad(param_1);
    cVar1 = Sanicova::CPad::GetShakeData(pCVar3,local_10);
    *pcVar7 = cVar2 - cVar1;
  }
  pCVar3 = (CPad *)CUser::getPad(param_1);
  cVar2 = Sanicova::CPad::checkAnswer(pCVar3,param_2);
  if (cVar2 == '\x01') {
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,1);
    uVar5 = CUser::getHades(param_1);
    XNuclear::CHades::ChangeSecurity(uVar5,1,0x23);
    *param_4 = true;
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082636c3 to 082637ce has its CatchHandler @ 082637d1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa7);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    uVar8 = Sanicova::CPad::getAdvideChangePwd(pCVar3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar8 & 0xff);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    iVar4 = Sanicova::CPad::getFailCnt(pCVar3);
    if (0 < iVar4) {
      pcVar7 = (char *)CUser::getWebAddress(param_1);
      uVar8 = CUser::get_acc_id(param_1);
      DB_PassPadUpdateFailCnt::makeRequest(uVar8,0,pcVar7);
    }
    pCVar3 = (CPad *)CUser::getPad(param_1);
    Sanicova::CPad::setCertified(pCVar3,true);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    Sanicova::CPad::resetFailCnt(pCVar3);
    pcVar7 = (char *)CUser::getWebAddress(param_1);
    uVar8 = CUser::get_acc_id(param_1);
    DB_GoblinPadUpdateReward::makeRequest(uVar8,param_3,false,pcVar7);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    cUserHistoryLog::SecuService((cUserHistoryLog *)(param_1 + 0x79700),0,0);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    iVar4 = Sanicova::CPad::incFailCnt(pCVar3);
    if (iVar4 < 3) {
      PacketGuard::PacketGuard(local_28);
                    /* try { // try from 08263518 to 082635ee has its CatchHandler @ 082635f1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0xa7);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0x87);
      pCVar3 = (CPad *)CUser::getPad(param_1);
      iVar4 = Sanicova::CPad::getFailCnt(pCVar3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,iVar4);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
      pCVar3 = (CPad *)CUser::getPad(param_1);
      iVar4 = Sanicova::CPad::getFailCnt(pCVar3);
      if (iVar4 == 1) {
        uVar5 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar5,1,0x1f);
      }
      else {
        uVar5 = CUser::getHades(param_1);
        XNuclear::CHades::ChangeSecurity(uVar5,1,0x20);
      }
      PacketGuard::~PacketGuard(local_28);
    }
    else {
      *param_5 = 0x88;
      uVar5 = CUser::getHades(param_1);
      XNuclear::CHades::ChangeSecurity(uVar5,1,0x21);
      pCVar6 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar6,param_1,0x342,1,0,0);
    }
    pcVar7 = (char *)CUser::getWebAddress(param_1);
    pCVar3 = (CPad *)CUser::getPad(param_1);
    uVar8 = Sanicova::CPad::getFailCnt(pCVar3);
    uVar9 = CUser::get_acc_id(param_1);
    DB_PassPadUpdateFailCnt::makeRequest(uVar9,uVar8,pcVar7);
  }
  return;
}

```

---

## process

```asm
// === 08263224 Dispatcher_MouseRegister::process  [0x08263224-0x826329f] ===
 8263224:	55                   	push   %ebp
 8263225:	89 e5                	mov    %esp,%ebp
 8263227:	83 ec 28             	sub    $0x28,%esp
 826322a:	8b 45 14             	mov    0x14(%ebp),%eax
 826322d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8263230:	8b 45 10             	mov    0x10(%ebp),%eax
 8263233:	89 44 24 08          	mov    %eax,0x8(%esp)
 8263237:	8b 45 0c             	mov    0xc(%ebp),%eax
 826323a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826323e:	8b 45 08             	mov    0x8(%ebp),%eax
 8263241:	89 04 24             	mov    %eax,(%esp)
 8263244:	e8 57 00 00 00       	call   82632a0 <_ZN24Dispatcher_MouseRegister11check_errorEP5CUserR8MSG_BASE>
 8263249:	8b 55 f0             	mov    -0x10(%ebp),%edx
 826324c:	89 42 04             	mov    %eax,0x4(%edx)
 826324f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8263252:	8b 40 04             	mov    0x4(%eax),%eax
 8263255:	85 c0                	test   %eax,%eax
 8263257:	7e 07                	jle    8263260 <_ZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 8263259:	b8 00 00 00 00       	mov    $0x0,%eax
 826325e:	eb 3d                	jmp    826329d <_ZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 8263260:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8263263:	8b 40 04             	mov    0x4(%eax),%eax
 8263266:	85 c0                	test   %eax,%eax
 8263268:	79 28                	jns    8263292 <_ZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 826326a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826326d:	8b 40 04             	mov    0x4(%eax),%eax
 8263270:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8263277:	00 
 8263278:	89 44 24 08          	mov    %eax,0x8(%esp)
 826327c:	c7 44 24 04 60 c9 be 	movl   $0x8bec960,0x4(%esp)
 8263283:	08 
 8263284:	c7 04 24 78 01 00 00 	movl   $0x178,(%esp)
 826328b:	e8 47 d6 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8263290:	eb 0b                	jmp    826329d <_ZN24Dispatcher_MouseRegister7processEP5CUserR8MSG_BASER9ParamBase+0x79>
 8263292:	8b 45 10             	mov    0x10(%ebp),%eax
 8263295:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8263298:	b8 00 00 00 00       	mov    $0x0,%eax
 826329d:	c9                   	leave
 826329e:	c3                   	ret
 826329f:	90                   	nop

```

```c
// Dispatcher_MouseRegister::process @ 0x8263224

/* Dispatcher_MouseRegister::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_MouseRegister::process
          (Dispatcher_MouseRegister *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x178,
                       "virtual int Dispatcher_MouseRegister::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
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
// === 08263210 Dispatcher_MouseRegister::read  [0x08263210-0x8263223] ===
 8263210:	55                   	push   %ebp
 8263211:	89 e5                	mov    %esp,%ebp
 8263213:	83 ec 10             	sub    $0x10,%esp
 8263216:	8b 45 10             	mov    0x10(%ebp),%eax
 8263219:	89 45 fc             	mov    %eax,-0x4(%ebp)
 826321c:	b8 00 00 00 00       	mov    $0x0,%eax
 8263221:	c9                   	leave
 8263222:	c3                   	ret
 8263223:	90                   	nop

```

```c
// Dispatcher_MouseRegister::read @ 0x8263210

/* Dispatcher_MouseRegister::read(PacketBuf&, MSG_BASE&) */

undefined4 Dispatcher_MouseRegister::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## send

```asm
// === 082632b4 Dispatcher_MouseRegister::send  [0x082632b4-0x82632c9] ===
 82632b4:	55                   	push   %ebp
 82632b5:	89 e5                	mov    %esp,%ebp
 82632b7:	83 ec 10             	sub    $0x10,%esp
 82632ba:	8b 45 10             	mov    0x10(%ebp),%eax
 82632bd:	89 45 fc             	mov    %eax,-0x4(%ebp)
 82632c0:	8b 45 fc             	mov    -0x4(%ebp),%eax
 82632c3:	8b 40 04             	mov    0x4(%eax),%eax
 82632c6:	85 c0                	test   %eax,%eax
 82632c8:	c9                   	leave
 82632c9:	c3                   	ret

```

```c
// Dispatcher_MouseRegister::send @ 0x82632b4

/* Dispatcher_MouseRegister::send(CUser*, ParamBase&) */

undefined4 __thiscall
Dispatcher_MouseRegister::send(Dispatcher_MouseRegister *this,CUser *param_1,ParamBase *param_2)

{
  return *(undefined4 *)(param_2 + 4);
}

```

