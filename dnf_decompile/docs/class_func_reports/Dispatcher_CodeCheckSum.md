# Dispatcher_CodeCheckSum

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082044b0 Dispatcher_CodeCheckSum::dispatch_sig  [0x082044b0-0x820464d] ===
 82044b0:	55                   	push   %ebp
 82044b1:	89 e5                	mov    %esp,%ebp
 82044b3:	57                   	push   %edi
 82044b4:	53                   	push   %ebx
 82044b5:	81 ec 50 01 00 00    	sub    $0x150,%esp
 82044bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82044be:	89 04 24             	mov    %eax,(%esp)
 82044c1:	e8 c6 5e ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82044c6:	83 f8 01             	cmp    $0x1,%eax
 82044c9:	0f 9e c0             	setle  %al
 82044cc:	84 c0                	test   %al,%al
 82044ce:	74 0a                	je     82044da <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x2a>
 82044d0:	b8 00 00 00 00       	mov    $0x0,%eax
 82044d5:	e9 6a 01 00 00       	jmp    8204644 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x194>
 82044da:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82044e1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82044e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82044e8:	8b 45 10             	mov    0x10(%ebp),%eax
 82044eb:	89 04 24             	mov    %eax,(%esp)
 82044ee:	e8 fd 8b 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 82044f3:	83 f0 01             	xor    $0x1,%eax
 82044f6:	84 c0                	test   %al,%al
 82044f8:	74 29                	je     8204523 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x73>
 82044fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204501:	00 
 8204502:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204509:	00 
 820450a:	c7 44 24 04 60 f0 bc 	movl   $0x8bcf060,0x4(%esp)
 8204511:	08 
 8204512:	c7 04 24 fd 9b 00 00 	movl   $0x9bfd,(%esp)
 8204519:	e8 b9 c3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820451e:	e9 21 01 00 00       	jmp    8204644 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x194>
 8204523:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8204526:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 820452d:	00 
 820452e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204532:	8b 45 10             	mov    0x10(%ebp),%eax
 8204535:	89 04 24             	mov    %eax,(%esp)
 8204538:	e8 75 8e 38 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 820453d:	83 f0 01             	xor    $0x1,%eax
 8204540:	84 c0                	test   %al,%al
 8204542:	74 29                	je     820456d <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0xbd>
 8204544:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820454b:	00 
 820454c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8204553:	00 
 8204554:	c7 44 24 04 60 f0 bc 	movl   $0x8bcf060,0x4(%esp)
 820455b:	08 
 820455c:	c7 04 24 ff 9b 00 00 	movl   $0x9bff,(%esp)
 8204563:	e8 6f c3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204568:	e9 d7 00 00 00       	jmp    8204644 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x194>
 820456d:	8d 9d c8 fe ff ff    	lea    -0x138(%ebp),%ebx
 8204573:	b8 00 00 00 00       	mov    $0x0,%eax
 8204578:	ba 41 00 00 00       	mov    $0x41,%edx
 820457d:	89 df                	mov    %ebx,%edi
 820457f:	89 d1                	mov    %edx,%ecx
 8204581:	f3 ab                	rep stos %eax,%es:(%edi)
 8204583:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 8204589:	89 44 24 08          	mov    %eax,0x8(%esp)
 820458d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8204590:	89 44 24 04          	mov    %eax,0x4(%esp)
 8204594:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204597:	89 04 24             	mov    %eax,(%esp)
 820459a:	e8 1b a6 47 00       	call   867ebba <_ZN5CUser17checkCodeChecksumERK16CodeHackChecksumPc>
 820459f:	88 45 f3             	mov    %al,-0xd(%ebp)
 82045a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82045a5:	89 04 24             	mov    %eax,(%esp)
 82045a8:	e8 ef b7 02 00       	call   822fd9c <_ZN5CUser22IncChecksumAnswerCountEv>
 82045ad:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82045b1:	83 f0 01             	xor    $0x1,%eax
 82045b4:	84 c0                	test   %al,%al
 82045b6:	0f 84 83 00 00 00    	je     820463f <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x18f>
 82045bc:	c7 45 f4 02 00 00 00 	movl   $0x2,-0xc(%ebp)
 82045c3:	c7 44 24 04 b3 29 bc 	movl   $0x8bc29b3,0x4(%esp)
 82045ca:	08 
 82045cb:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 82045d1:	89 04 24             	mov    %eax,(%esp)
 82045d4:	e8 99 63 02 00       	call   822a972 <_ZSt6strstrPcPKc>
 82045d9:	85 c0                	test   %eax,%eax
 82045db:	0f 94 c0             	sete   %al
 82045de:	84 c0                	test   %al,%al
 82045e0:	74 07                	je     82045e9 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x139>
 82045e2:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 82045e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 82045ec:	89 04 24             	mov    %eax,(%esp)
 82045ef:	e8 98 5d ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82045f4:	83 f8 01             	cmp    $0x1,%eax
 82045f7:	0f 9f c0             	setg   %al
 82045fa:	84 c0                	test   %al,%al
 82045fc:	74 3a                	je     8204638 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x188>
 82045fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204601:	89 04 24             	mov    %eax,(%esp)
 8204604:	e8 51 53 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8204609:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8204610:	00 
 8204611:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8204618:	00 
 8204619:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8204620:	00 
 8204621:	c7 44 24 08 c8 03 00 	movl   $0x3c8,0x8(%esp)
 8204628:	00 
 8204629:	8b 55 0c             	mov    0xc(%ebp),%edx
 820462c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8204630:	89 04 24             	mov    %eax,(%esp)
 8204633:	e8 46 46 ef ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8204638:	b8 00 00 00 00       	mov    $0x0,%eax
 820463d:	eb 05                	jmp    8204644 <_ZN23Dispatcher_CodeCheckSum12dispatch_sigEP5CUserR9PacketBuf+0x194>
 820463f:	b8 00 00 00 00       	mov    $0x0,%eax
 8204644:	81 c4 50 01 00 00    	add    $0x150,%esp
 820464a:	5b                   	pop    %ebx
 820464b:	5f                   	pop    %edi
 820464c:	5d                   	pop    %ebp
 820464d:	c3                   	ret

```

```c
// Dispatcher_CodeCheckSum::dispatch_sig @ 0x82044b0

/* Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CodeCheckSum::dispatch_sig
          (Dispatcher_CodeCheckSum *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CHackAnalyzer *pCVar4;
  char *pcVar5;
  byte bVar6;
  char local_13c [260];
  CodeHackChecksum local_38 [32];
  int local_18;
  char local_11;
  undefined4 local_10;
  
  bVar6 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = 0;
  }
  else {
    local_18 = 0;
    cVar1 = PacketBuf::get_int(param_2,&local_18);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_binary(param_2,(char *)local_38,0x20);
      if (cVar1 == '\x01') {
        pcVar5 = local_13c;
        for (iVar2 = 0x41; iVar2 != 0; iVar2 = iVar2 + -1) {
          pcVar5[0] = '\0';
          pcVar5[1] = '\0';
          pcVar5[2] = '\0';
          pcVar5[3] = '\0';
          pcVar5 = pcVar5 + ((uint)bVar6 * -2 + 1) * 4;
        }
        local_11 = CUser::checkCodeChecksum(param_1,local_38,local_13c);
        CUser::IncChecksumAnswerCount(param_1);
        if (local_11 == '\x01') {
          uVar3 = 0;
        }
        else {
          local_10 = 2;
          iVar2 = std::strstr(local_13c,".exe.bak");
          if (iVar2 == 0) {
            local_10 = 3;
          }
          iVar2 = CUser::get_state(param_1);
          if (1 < iVar2) {
            pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,param_1,0x3c8,1,0,0);
          }
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0x9bff,
                         "virtual int Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&)",0,0
                        );
      }
    }
    else {
      uVar3 = LineFunc(0x9bfd,
                       "virtual int Dispatcher_CodeCheckSum::dispatch_sig(CUser*, PacketBuf&)",0,0);
    }
  }
  return uVar3;
}

```

