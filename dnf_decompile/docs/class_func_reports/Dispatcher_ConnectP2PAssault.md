# Dispatcher_ConnectP2PAssault

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08206fea Dispatcher_ConnectP2PAssault::dispatch_sig  [0x08206fea-0x8207207] ===
 8206fea:	55                   	push   %ebp
 8206feb:	89 e5                	mov    %esp,%ebp
 8206fed:	53                   	push   %ebx
 8206fee:	83 ec 24             	sub    $0x24,%esp
 8206ff1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8206ff4:	89 04 24             	mov    %eax,(%esp)
 8206ff7:	e8 90 33 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8206ffc:	83 f8 01             	cmp    $0x1,%eax
 8206fff:	0f 9e c0             	setle  %al
 8207002:	84 c0                	test   %al,%al
 8207004:	74 29                	je     820702f <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x45>
 8207006:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820700d:	00 
 820700e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207015:	00 
 8207016:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 820701d:	08 
 820701e:	c7 04 24 b0 a1 00 00 	movl   $0xa1b0,(%esp)
 8207025:	e8 ad 98 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820702a:	e9 d2 01 00 00       	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 820702f:	c6 45 f3 ff          	movb   $0xff,-0xd(%ebp)
 8207033:	8d 45 f3             	lea    -0xd(%ebp),%eax
 8207036:	89 44 24 04          	mov    %eax,0x4(%esp)
 820703a:	8b 45 10             	mov    0x10(%ebp),%eax
 820703d:	89 04 24             	mov    %eax,(%esp)
 8207040:	e8 dd 5e 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8207045:	83 f0 01             	xor    $0x1,%eax
 8207048:	84 c0                	test   %al,%al
 820704a:	74 29                	je     8207075 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x8b>
 820704c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207053:	00 
 8207054:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820705b:	00 
 820705c:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 8207063:	08 
 8207064:	c7 04 24 b4 a1 00 00 	movl   $0xa1b4,(%esp)
 820706b:	e8 67 98 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207070:	e9 8c 01 00 00       	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 8207075:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8207079:	3c 08                	cmp    $0x8,%al
 820707b:	7f 08                	jg     8207085 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x9b>
 820707d:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8207081:	84 c0                	test   %al,%al
 8207083:	79 29                	jns    82070ae <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0xc4>
 8207085:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820708c:	00 
 820708d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207094:	00 
 8207095:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 820709c:	08 
 820709d:	c7 04 24 b8 a1 00 00 	movl   $0xa1b8,(%esp)
 82070a4:	e8 2e 98 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82070a9:	e9 53 01 00 00       	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 82070ae:	c7 45 eb 00 00 00 00 	movl   $0x0,-0x15(%ebp)
 82070b5:	c7 45 ef 00 00 00 00 	movl   $0x0,-0x11(%ebp)
 82070bc:	c6 45 ea ff          	movb   $0xff,-0x16(%ebp)
 82070c0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 82070c7:	e9 c8 00 00 00       	jmp    8207194 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x1aa>
 82070cc:	8d 45 ea             	lea    -0x16(%ebp),%eax
 82070cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 82070d3:	8b 45 10             	mov    0x10(%ebp),%eax
 82070d6:	89 04 24             	mov    %eax,(%esp)
 82070d9:	e8 44 5e 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82070de:	83 f0 01             	xor    $0x1,%eax
 82070e1:	84 c0                	test   %al,%al
 82070e3:	74 29                	je     820710e <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x124>
 82070e5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82070ec:	00 
 82070ed:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82070f4:	00 
 82070f5:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 82070fc:	08 
 82070fd:	c7 04 24 bf a1 00 00 	movl   $0xa1bf,(%esp)
 8207104:	e8 ce 97 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207109:	e9 f3 00 00 00       	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 820710e:	0f b6 45 ea          	movzbl -0x16(%ebp),%eax
 8207112:	3c 07                	cmp    $0x7,%al
 8207114:	7f 08                	jg     820711e <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x134>
 8207116:	0f b6 45 ea          	movzbl -0x16(%ebp),%eax
 820711a:	84 c0                	test   %al,%al
 820711c:	79 29                	jns    8207147 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x15d>
 820711e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207125:	00 
 8207126:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820712d:	00 
 820712e:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 8207135:	08 
 8207136:	c7 04 24 c2 a1 00 00 	movl   $0xa1c2,(%esp)
 820713d:	e8 95 97 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8207142:	e9 ba 00 00 00       	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 8207147:	0f b6 45 ea          	movzbl -0x16(%ebp),%eax
 820714b:	0f be c0             	movsbl %al,%eax
 820714e:	8d 55 eb             	lea    -0x15(%ebp),%edx
 8207151:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8207154:	89 44 24 04          	mov    %eax,0x4(%esp)
 8207158:	8b 45 10             	mov    0x10(%ebp),%eax
 820715b:	89 04 24             	mov    %eax,(%esp)
 820715e:	e8 bf 5d 38 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 8207163:	83 f0 01             	xor    $0x1,%eax
 8207166:	84 c0                	test   %al,%al
 8207168:	74 26                	je     8207190 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x1a6>
 820716a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8207171:	00 
 8207172:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8207179:	00 
 820717a:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 8207181:	08 
 8207182:	c7 04 24 c5 a1 00 00 	movl   $0xa1c5,(%esp)
 8207189:	e8 49 97 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820718e:	eb 71                	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 8207190:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8207194:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8207198:	0f be c0             	movsbl %al,%eax
 820719b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 820719e:	0f 9f c0             	setg   %al
 82071a1:	84 c0                	test   %al,%al
 82071a3:	0f 85 23 ff ff ff    	jne    82070cc <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0xe2>
 82071a9:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 82071ad:	0f be d8             	movsbl %al,%ebx
 82071b0:	e8 eb de 02 00       	call   82350a0 <_ZN11pvp_assault21GetInstanceAssaultMgrEv>
 82071b5:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82071b9:	8d 55 eb             	lea    -0x15(%ebp),%edx
 82071bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 82071c0:	8b 55 0c             	mov    0xc(%ebp),%edx
 82071c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 82071c7:	89 04 24             	mov    %eax,(%esp)
 82071ca:	e8 ab 80 0e 00       	call   82ef27a <_ZN11pvp_assault11CAssaultMgr12OnConnectP2PEP5CUserPci>
 82071cf:	83 f0 01             	xor    $0x1,%eax
 82071d2:	84 c0                	test   %al,%al
 82071d4:	74 26                	je     82071fc <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x212>
 82071d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82071dd:	00 
 82071de:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82071e5:	00 
 82071e6:	c7 44 24 04 60 ea bc 	movl   $0x8bcea60,0x4(%esp)
 82071ed:	08 
 82071ee:	c7 04 24 cb a1 00 00 	movl   $0xa1cb,(%esp)
 82071f5:	e8 dd 96 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82071fa:	eb 05                	jmp    8207201 <_ZN28Dispatcher_ConnectP2PAssault12dispatch_sigEP5CUserR9PacketBuf+0x217>
 82071fc:	b8 00 00 00 00       	mov    $0x0,%eax
 8207201:	83 c4 24             	add    $0x24,%esp
 8207204:	5b                   	pop    %ebx
 8207205:	5d                   	pop    %ebp
 8207206:	c3                   	ret
 8207207:	90                   	nop

```

```c
// Dispatcher_ConnectP2PAssault::dispatch_sig @ 0x8206fea

/* Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ConnectP2PAssault::dispatch_sig
          (Dispatcher_ConnectP2PAssault *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CUser *pCVar4;
  char local_1a;
  char local_19 [9];
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 2) {
    uVar3 = LineFunc(0xa1b0,
                     "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
  }
  else {
    local_19[8] = -1;
    cVar1 = PacketBuf::get_byte(param_2,local_19 + 8);
    if (cVar1 == '\x01') {
      if ((local_19[8] < '\t') && (-1 < local_19[8])) {
        local_19[0] = '\0';
        local_19[1] = '\0';
        local_19[2] = '\0';
        local_19[3] = '\0';
        local_19[4] = '\0';
        local_19[5] = '\0';
        local_19[6] = '\0';
        local_19[7] = '\0';
        local_1a = -1;
        for (local_10 = 0; local_10 < local_19[8]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_byte(param_2,&local_1a);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa1bf,
                             "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          if (('\a' < local_1a) || (local_1a < '\0')) {
            uVar3 = LineFunc(0xa1c2,
                             "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
          cVar1 = PacketBuf::get_byte(param_2,local_19 + local_1a);
          if (cVar1 != '\x01') {
            uVar3 = LineFunc(0xa1c5,
                             "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar3;
          }
        }
        pCVar4 = (CUser *)pvp_assault::GetInstanceAssaultMgr();
        cVar1 = pvp_assault::CAssaultMgr::OnConnectP2P(pCVar4,(char *)param_1,(int)local_19);
        if (cVar1 == '\x01') {
          uVar3 = 0;
        }
        else {
          uVar3 = LineFunc(0xa1cb,
                           "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      else {
        uVar3 = LineFunc(0xa1b8,
                         "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
      }
    }
    else {
      uVar3 = LineFunc(0xa1b4,
                       "virtual int Dispatcher_ConnectP2PAssault::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar3;
}

```

