# DisPatcher_ReturnToSelectCharacter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081fd25c DisPatcher_ReturnToSelectCharacter::dispatch_sig  [0x081fd25c-0x81fd35f] ===
 81fd25c:	55                   	push   %ebp
 81fd25d:	89 e5                	mov    %esp,%ebp
 81fd25f:	56                   	push   %esi
 81fd260:	53                   	push   %ebx
 81fd261:	83 ec 20             	sub    $0x20,%esp
 81fd264:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 81fd268:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd26b:	89 04 24             	mov    %eax,(%esp)
 81fd26e:	e8 19 d1 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81fd273:	83 f8 02             	cmp    $0x2,%eax
 81fd276:	0f 9e c0             	setle  %al
 81fd279:	84 c0                	test   %al,%al
 81fd27b:	74 06                	je     81fd283 <_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81fd27d:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 81fd281:	eb 2d                	jmp    81fd2b0 <_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf+0x54>
 81fd283:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd286:	89 04 24             	mov    %eax,(%esp)
 81fd289:	e8 d6 82 44 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 81fd28e:	3c 07                	cmp    $0x7,%al
 81fd290:	0f 94 c0             	sete   %al
 81fd293:	84 c0                	test   %al,%al
 81fd295:	74 06                	je     81fd29d <_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf+0x41>
 81fd297:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 81fd29b:	eb 13                	jmp    81fd2b0 <_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf+0x54>
 81fd29d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81fd2a4:	00 
 81fd2a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd2a8:	89 04 24             	mov    %eax,(%esp)
 81fd2ab:	e8 3e 9d 48 00       	call   8686fee <_ZN5CUser24ReturnToSelectCharacListEb>
 81fd2b0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd2b3:	89 04 24             	mov    %eax,(%esp)
 81fd2b6:	e8 91 0a 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81fd2bb:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81fd2c2:	00 
 81fd2c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fd2ca:	00 
 81fd2cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd2ce:	89 04 24             	mov    %eax,(%esp)
 81fd2d1:	e8 26 e6 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81fd2d6:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81fd2da:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd2de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd2e1:	89 04 24             	mov    %eax,(%esp)
 81fd2e4:	e8 37 e6 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fd2e9:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 81fd2ed:	83 f0 01             	xor    $0x1,%eax
 81fd2f0:	84 c0                	test   %al,%al
 81fd2f2:	74 13                	je     81fd307 <_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf+0xab>
 81fd2f4:	c7 44 24 04 13 00 00 	movl   $0x13,0x4(%esp)
 81fd2fb:	00 
 81fd2fc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd2ff:	89 04 24             	mov    %eax,(%esp)
 81fd302:	e8 19 e6 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81fd307:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81fd30e:	00 
 81fd30f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd312:	89 04 24             	mov    %eax,(%esp)
 81fd315:	e8 3e e6 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81fd31a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd31d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81fd321:	8b 45 0c             	mov    0xc(%ebp),%eax
 81fd324:	89 04 24             	mov    %eax,(%esp)
 81fd327:	e8 8e b2 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81fd32c:	eb 1b                	jmp    81fd349 <_ZN34DisPatcher_ReturnToSelectCharacter12dispatch_sigEP5CUserR9PacketBuf+0xed>
 81fd32e:	89 d3                	mov    %edx,%ebx
 81fd330:	89 c6                	mov    %eax,%esi
 81fd332:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd335:	89 04 24             	mov    %eax,(%esp)
 81fd338:	e8 43 0b 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fd33d:	89 f0                	mov    %esi,%eax
 81fd33f:	89 da                	mov    %ebx,%edx
 81fd341:	89 04 24             	mov    %eax,(%esp)
 81fd344:	e8 07 64 8e 00       	call   8ae3750 <_Unwind_Resume>
 81fd349:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81fd34c:	89 04 24             	mov    %eax,(%esp)
 81fd34f:	e8 2c 0b 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81fd354:	b8 00 00 00 00       	mov    $0x0,%eax
 81fd359:	83 c4 20             	add    $0x20,%esp
 81fd35c:	5b                   	pop    %ebx
 81fd35d:	5e                   	pop    %esi
 81fd35e:	5d                   	pop    %ebp
 81fd35f:	c3                   	ret

```

```c
// DisPatcher_ReturnToSelectCharacter::dispatch_sig @ 0x81fd25c

/* DisPatcher_ReturnToSelectCharacter::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_ReturnToSelectCharacter::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  PacketGuard local_1c [15];
  byte local_d;
  
  local_d = 1;
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 < 3) {
    local_d = 0;
  }
  else {
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_2);
    if (cVar1 == '\a') {
      local_d = 0;
    }
    else {
      CUser::ReturnToSelectCharacList((CUser *)param_2,false);
    }
  }
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081fd2d1 to 081fd32b has its CatchHandler @ 081fd32e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,7);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)local_d);
  if (local_d != 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x13);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send((CUser *)param_2,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

