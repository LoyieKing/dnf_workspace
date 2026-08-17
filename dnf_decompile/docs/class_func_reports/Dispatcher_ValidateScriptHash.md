# Dispatcher_ValidateScriptHash

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0826435a Dispatcher_ValidateScriptHash::check_error  [0x0826435a-0x8264363] ===
 826435a:	55                   	push   %ebp
 826435b:	89 e5                	mov    %esp,%ebp
 826435d:	b8 00 00 00 00       	mov    $0x0,%eax
 8264362:	5d                   	pop    %ebp
 8264363:	c3                   	ret

```

```c
// Dispatcher_ValidateScriptHash::check_error @ 0x826435a

/* Dispatcher_ValidateScriptHash::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_ValidateScriptHash::check_error(CUser *param_1,MSG_BASE *param_2)

{
  return 0;
}

```

---

## get_hack_type

```asm
// === 08264364 Dispatcher_ValidateScriptHash::get_hack_type  [0x08264364-0x82643b1] ===
 8264364:	55                   	push   %ebp
 8264365:	89 e5                	mov    %esp,%ebp
 8264367:	83 ec 14             	sub    $0x14,%esp
 826436a:	8b 45 0c             	mov    0xc(%ebp),%eax
 826436d:	88 45 ec             	mov    %al,-0x14(%ebp)
 8264370:	0f be 45 ec          	movsbl -0x14(%ebp),%eax
 8264374:	83 f8 05             	cmp    $0x5,%eax
 8264377:	77 34                	ja     82643ad <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc+0x49>
 8264379:	8b 04 85 e4 b1 be 08 	mov    0x8beb1e4(,%eax,4),%eax
 8264380:	ff e0                	jmp    *%eax
 8264382:	c7 45 fc 44 03 00 00 	movl   $0x344,-0x4(%ebp)
 8264389:	eb 22                	jmp    82643ad <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc+0x49>
 826438b:	c7 45 fc 45 03 00 00 	movl   $0x345,-0x4(%ebp)
 8264392:	eb 19                	jmp    82643ad <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc+0x49>
 8264394:	c7 45 fc 46 03 00 00 	movl   $0x346,-0x4(%ebp)
 826439b:	eb 10                	jmp    82643ad <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc+0x49>
 826439d:	c7 45 fc 47 03 00 00 	movl   $0x347,-0x4(%ebp)
 82643a4:	eb 07                	jmp    82643ad <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc+0x49>
 82643a6:	c7 45 fc 48 03 00 00 	movl   $0x348,-0x4(%ebp)
 82643ad:	8b 45 fc             	mov    -0x4(%ebp),%eax
 82643b0:	c9                   	leave
 82643b1:	c3                   	ret

```

```c
// Dispatcher_ValidateScriptHash::get_hack_type @ 0x8264364

/* Dispatcher_ValidateScriptHash::get_hack_type(char) */

undefined4 __thiscall
Dispatcher_ValidateScriptHash::get_hack_type(Dispatcher_ValidateScriptHash *this,char param_1)

{
  undefined4 local_8;
  
  switch(param_1) {
  case '\x01':
    local_8 = 0x344;
    break;
  case '\x02':
    local_8 = 0x345;
    break;
  case '\x03':
    local_8 = 0x346;
    break;
  case '\x04':
    local_8 = 0x347;
    break;
  case '\x05':
    local_8 = 0x348;
  }
  return local_8;
}

```

---

## process

```asm
// === 082642b8 Dispatcher_ValidateScriptHash::process  [0x082642b8-0x8264359] ===
 82642b8:	55                   	push   %ebp
 82642b9:	89 e5                	mov    %esp,%ebp
 82642bb:	56                   	push   %esi
 82642bc:	53                   	push   %ebx
 82642bd:	83 ec 30             	sub    $0x30,%esp
 82642c0:	8b 45 10             	mov    0x10(%ebp),%eax
 82642c3:	89 44 24 08          	mov    %eax,0x8(%esp)
 82642c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82642ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 82642ce:	8b 45 08             	mov    0x8(%ebp),%eax
 82642d1:	89 04 24             	mov    %eax,(%esp)
 82642d4:	e8 81 00 00 00       	call   826435a <_ZN29Dispatcher_ValidateScriptHash11check_errorEP5CUserR8MSG_BASE>
 82642d9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82642dc:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 82642e0:	74 07                	je     82642e9 <_ZN29Dispatcher_ValidateScriptHash7processEP5CUserR8MSG_BASER9ParamBase+0x31>
 82642e2:	b8 00 00 00 00       	mov    $0x0,%eax
 82642e7:	eb 6a                	jmp    8264353 <_ZN29Dispatcher_ValidateScriptHash7processEP5CUserR8MSG_BASER9ParamBase+0x9b>
 82642e9:	8b 45 10             	mov    0x10(%ebp),%eax
 82642ec:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82642ef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 82642f2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 82642f6:	0f be c0             	movsbl %al,%eax
 82642f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82642fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8264300:	89 04 24             	mov    %eax,(%esp)
 8264303:	e8 5c 00 00 00       	call   8264364 <_ZN29Dispatcher_ValidateScriptHash13get_hack_typeEc>
 8264308:	89 45 f4             	mov    %eax,-0xc(%ebp)
 826430b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 826430e:	8b 40 0f             	mov    0xf(%eax),%eax
 8264311:	89 c6                	mov    %eax,%esi
 8264313:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8264316:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 826431a:	0f be d8             	movsbl %al,%ebx
 826431d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8264320:	89 04 24             	mov    %eax,(%esp)
 8264323:	e8 32 56 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8264328:	89 74 24 14          	mov    %esi,0x14(%esp)
 826432c:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8264330:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8264337:	00 
 8264338:	8b 55 f4             	mov    -0xc(%ebp),%edx
 826433b:	89 54 24 08          	mov    %edx,0x8(%esp)
 826433f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8264342:	89 54 24 04          	mov    %edx,0x4(%esp)
 8264346:	89 04 24             	mov    %eax,(%esp)
 8264349:	e8 30 49 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 826434e:	b8 00 00 00 00       	mov    $0x0,%eax
 8264353:	83 c4 30             	add    $0x30,%esp
 8264356:	5b                   	pop    %ebx
 8264357:	5e                   	pop    %esi
 8264358:	5d                   	pop    %ebp
 8264359:	c3                   	ret

```

```c
// Dispatcher_ValidateScriptHash::process @ 0x82642b8

/* Dispatcher_ValidateScriptHash::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_ValidateScriptHash::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  CHackAnalyzer *pCVar5;
  
  iVar3 = check_error(param_1,param_2);
  if (iVar3 == 0) {
    uVar4 = get_hack_type((Dispatcher_ValidateScriptHash *)param_1,(char)param_3[0xd]);
    uVar2 = *(undefined4 *)(param_3 + 0xf);
    PVar1 = param_3[0xe];
    pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar5,param_2,uVar4,1,(int)(char)PVar1,uVar2);
  }
  return 0;
}

```

---

## read

```asm
// === 082641e2 Dispatcher_ValidateScriptHash::read  [0x082641e2-0x82642b7] ===
 82641e2:	55                   	push   %ebp
 82641e3:	89 e5                	mov    %esp,%ebp
 82641e5:	83 ec 18             	sub    $0x18,%esp
 82641e8:	8b 45 10             	mov    0x10(%ebp),%eax
 82641eb:	83 c0 0d             	add    $0xd,%eax
 82641ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 82641f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 82641f5:	89 04 24             	mov    %eax,(%esp)
 82641f8:	e8 25 8d 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82641fd:	83 f0 01             	xor    $0x1,%eax
 8264200:	84 c0                	test   %al,%al
 8264202:	74 29                	je     826422d <_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE+0x4b>
 8264204:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826420b:	00 
 826420c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264213:	00 
 8264214:	c7 44 24 04 40 c8 be 	movl   $0x8bec840,0x4(%esp)
 826421b:	08 
 826421c:	c7 04 24 7d 03 00 00 	movl   $0x37d,(%esp)
 8264223:	e8 af c6 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 8264228:	e9 89 00 00 00       	jmp    82642b6 <_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE+0xd4>
 826422d:	8b 45 10             	mov    0x10(%ebp),%eax
 8264230:	83 c0 0e             	add    $0xe,%eax
 8264233:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264237:	8b 45 0c             	mov    0xc(%ebp),%eax
 826423a:	89 04 24             	mov    %eax,(%esp)
 826423d:	e8 e0 8c 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8264242:	83 f0 01             	xor    $0x1,%eax
 8264245:	84 c0                	test   %al,%al
 8264247:	74 26                	je     826426f <_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE+0x8d>
 8264249:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264250:	00 
 8264251:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8264258:	00 
 8264259:	c7 44 24 04 40 c8 be 	movl   $0x8bec840,0x4(%esp)
 8264260:	08 
 8264261:	c7 04 24 82 03 00 00 	movl   $0x382,(%esp)
 8264268:	e8 6a c6 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 826426d:	eb 47                	jmp    82642b6 <_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE+0xd4>
 826426f:	8b 45 10             	mov    0x10(%ebp),%eax
 8264272:	83 c0 0f             	add    $0xf,%eax
 8264275:	89 44 24 04          	mov    %eax,0x4(%esp)
 8264279:	8b 45 0c             	mov    0xc(%ebp),%eax
 826427c:	89 04 24             	mov    %eax,(%esp)
 826427f:	e8 6c 8e 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8264284:	83 f0 01             	xor    $0x1,%eax
 8264287:	84 c0                	test   %al,%al
 8264289:	74 26                	je     82642b1 <_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE+0xcf>
 826428b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8264292:	00 
 8264293:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826429a:	00 
 826429b:	c7 44 24 04 40 c8 be 	movl   $0x8bec840,0x4(%esp)
 82642a2:	08 
 82642a3:	c7 04 24 87 03 00 00 	movl   $0x387,(%esp)
 82642aa:	e8 28 c6 32 00       	call   85908d7 <_Z8LineFunciPKcij>
 82642af:	eb 05                	jmp    82642b6 <_ZN29Dispatcher_ValidateScriptHash4readER9PacketBufR8MSG_BASE+0xd4>
 82642b1:	b8 00 00 00 00       	mov    $0x0,%eax
 82642b6:	c9                   	leave
 82642b7:	c3                   	ret

```

```c
// Dispatcher_ValidateScriptHash::read @ 0x82641e2

/* Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_ValidateScriptHash::read
          (Dispatcher_ValidateScriptHash *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xf));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x387,
                         "virtual int Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x382,
                       "virtual int Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x37d,"virtual int Dispatcher_ValidateScriptHash::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

