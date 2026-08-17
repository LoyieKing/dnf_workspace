# Dispatcher_SecurityCardDisuse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820a0f6 Dispatcher_SecurityCardDisuse::dispatch_sig  [0x0820a0f6-0x820a2c3] ===
 820a0f6:	55                   	push   %ebp
 820a0f7:	89 e5                	mov    %esp,%ebp
 820a0f9:	56                   	push   %esi
 820a0fa:	53                   	push   %ebx
 820a0fb:	83 ec 20             	sub    $0x20,%esp
 820a0fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a101:	89 04 24             	mov    %eax,(%esp)
 820a104:	e8 83 02 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820a109:	83 f8 03             	cmp    $0x3,%eax
 820a10c:	0f 95 c0             	setne  %al
 820a10f:	84 c0                	test   %al,%al
 820a111:	74 2b                	je     820a13e <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x48>
 820a113:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a11a:	00 
 820a11b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a122:	00 
 820a123:	c7 44 24 04 c0 e4 bc 	movl   $0x8bce4c0,0x4(%esp)
 820a12a:	08 
 820a12b:	c7 04 24 dc a5 00 00 	movl   $0xa5dc,(%esp)
 820a132:	e8 a0 67 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a137:	89 c3                	mov    %eax,%ebx
 820a139:	e9 7d 01 00 00       	jmp    820a2bb <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x1c5>
 820a13e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a141:	89 04 24             	mov    %eax,(%esp)
 820a144:	e8 d7 5b 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a149:	89 04 24             	mov    %eax,(%esp)
 820a14c:	e8 bd 4d 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820a151:	83 f0 01             	xor    $0x1,%eax
 820a154:	84 c0                	test   %al,%al
 820a156:	74 2b                	je     820a183 <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x8d>
 820a158:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a15f:	00 
 820a160:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a167:	00 
 820a168:	c7 44 24 04 c0 e4 bc 	movl   $0x8bce4c0,0x4(%esp)
 820a16f:	08 
 820a170:	c7 04 24 e3 a5 00 00 	movl   $0xa5e3,(%esp)
 820a177:	e8 5b 67 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a17c:	89 c3                	mov    %eax,%ebx
 820a17e:	e9 38 01 00 00       	jmp    820a2bb <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x1c5>
 820a183:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a186:	89 04 24             	mov    %eax,(%esp)
 820a189:	e8 92 5b 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a18e:	89 04 24             	mov    %eax,(%esp)
 820a191:	e8 84 4d 02 00       	call   822ef1a <_ZNK8WongWork13CSecurityCard11isCertifiedEv>
 820a196:	83 f0 01             	xor    $0x1,%eax
 820a199:	84 c0                	test   %al,%al
 820a19b:	74 2b                	je     820a1c8 <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0xd2>
 820a19d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a1a4:	00 
 820a1a5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a1ac:	00 
 820a1ad:	c7 44 24 04 c0 e4 bc 	movl   $0x8bce4c0,0x4(%esp)
 820a1b4:	08 
 820a1b5:	c7 04 24 e6 a5 00 00 	movl   $0xa5e6,(%esp)
 820a1bc:	e8 16 67 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a1c1:	89 c3                	mov    %eax,%ebx
 820a1c3:	e9 f3 00 00 00       	jmp    820a2bb <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x1c5>
 820a1c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a1cb:	89 04 24             	mov    %eax,(%esp)
 820a1ce:	e8 4d 5b 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a1d3:	89 04 24             	mov    %eax,(%esp)
 820a1d6:	e8 4b 4d 02 00       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 820a1db:	83 f8 02             	cmp    $0x2,%eax
 820a1de:	0f 97 c0             	seta   %al
 820a1e1:	84 c0                	test   %al,%al
 820a1e3:	74 25                	je     820a20a <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x114>
 820a1e5:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 820a1ec:	00 
 820a1ed:	c7 44 24 04 a5 00 00 	movl   $0xa5,0x4(%esp)
 820a1f4:	00 
 820a1f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a1f8:	89 04 24             	mov    %eax,(%esp)
 820a1fb:	e8 42 1d 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820a200:	bb 00 00 00 00       	mov    $0x0,%ebx
 820a205:	e9 b1 00 00 00       	jmp    820a2bb <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x1c5>
 820a20a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a20d:	89 04 24             	mov    %eax,(%esp)
 820a210:	e8 37 3b 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820a215:	c7 44 24 08 a5 00 00 	movl   $0xa5,0x8(%esp)
 820a21c:	00 
 820a21d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a224:	00 
 820a225:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a228:	89 04 24             	mov    %eax,(%esp)
 820a22b:	e8 cc 16 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820a230:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a237:	00 
 820a238:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a23b:	89 04 24             	mov    %eax,(%esp)
 820a23e:	e8 dd 16 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820a243:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820a24a:	00 
 820a24b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a24e:	89 04 24             	mov    %eax,(%esp)
 820a251:	e8 02 17 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820a256:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a259:	89 44 24 04          	mov    %eax,0x4(%esp)
 820a25d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a260:	89 04 24             	mov    %eax,(%esp)
 820a263:	e8 52 e3 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820a268:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a26b:	89 04 24             	mov    %eax,(%esp)
 820a26e:	e8 fb 00 ed ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820a273:	89 04 24             	mov    %eax,(%esp)
 820a276:	e8 15 15 22 00       	call   842b790 <_ZN21DB_SecurityCardDisuse11makeRequestEj>
 820a27b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a27e:	89 04 24             	mov    %eax,(%esp)
 820a281:	e8 9a 5a 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820a286:	89 04 24             	mov    %eax,(%esp)
 820a289:	e8 da 3a 3f 00       	call   85fdd68 <_ZN8WongWork13CSecurityCard4initEv>
 820a28e:	bb 00 00 00 00       	mov    $0x0,%ebx
 820a293:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a296:	89 04 24             	mov    %eax,(%esp)
 820a299:	e8 e2 3b 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820a29e:	eb 1b                	jmp    820a2bb <_ZN29Dispatcher_SecurityCardDisuse12dispatch_sigEP5CUserR9PacketBuf+0x1c5>
 820a2a0:	89 d3                	mov    %edx,%ebx
 820a2a2:	89 c6                	mov    %eax,%esi
 820a2a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820a2a7:	89 04 24             	mov    %eax,(%esp)
 820a2aa:	e8 d1 3b 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820a2af:	89 f0                	mov    %esi,%eax
 820a2b1:	89 da                	mov    %ebx,%edx
 820a2b3:	89 04 24             	mov    %eax,(%esp)
 820a2b6:	e8 95 94 8d 00       	call   8ae3750 <_Unwind_Resume>
 820a2bb:	89 d8                	mov    %ebx,%eax
 820a2bd:	83 c4 20             	add    $0x20,%esp
 820a2c0:	5b                   	pop    %ebx
 820a2c1:	5e                   	pop    %esi
 820a2c2:	5d                   	pop    %ebp
 820a2c3:	c3                   	ret

```

```c
// Dispatcher_SecurityCardDisuse::dispatch_sig @ 0x820a0f6

/* Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_SecurityCardDisuse::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  uint uVar5;
  PacketGuard local_18 [12];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
    cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
    if (cVar1 == '\x01') {
      pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
      cVar1 = WongWork::CSecurityCard::isCertified(pCVar4);
      if (cVar1 == '\x01') {
        pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
        uVar5 = WongWork::CSecurityCard::getFailCnt(pCVar4);
        if (uVar5 < 3) {
          PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0820a22b to 0820a28d has its CatchHandler @ 0820a2a0 */
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xa5);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
          CUser::Send((CUser *)param_2,local_18);
          uVar5 = CUser::get_acc_id((CUser *)param_2);
          DB_SecurityCardDisuse::makeRequest(uVar5);
          pCVar4 = (CSecurityCard *)CUser::getSecurityCard((CUser *)param_2);
          WongWork::CSecurityCard::init(pCVar4);
          uVar3 = 0;
          PacketGuard::~PacketGuard(local_18);
        }
        else {
          CUser::SendCmdErrorPacket((CUser *)param_2,0xa5,0x7a);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = LineFunc(0xa5e6,
                         "virtual int Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa5e3,
                       "virtual int Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar3 = LineFunc(0xa5dc,
                     "virtual int Dispatcher_SecurityCardDisuse::dispatch_sig(CUser*, PacketBuf&)",0
                     ,0);
  }
  return uVar3;
}

```

