# Dispatcher_Mercenary_Competition

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081ddd00 Dispatcher_Mercenary_Competition::process  [0x081ddd00-0x81dde1f] ===
 81ddd00:	55                   	push   %ebp
 81ddd01:	89 e5                	mov    %esp,%ebp
 81ddd03:	53                   	push   %ebx
 81ddd04:	83 ec 24             	sub    $0x24,%esp
 81ddd07:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ddd0b:	75 0a                	jne    81ddd17 <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x17>
 81ddd0d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ddd12:	e9 03 01 00 00       	jmp    81dde1a <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x11a>
 81ddd17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddd1a:	89 04 24             	mov    %eax,(%esp)
 81ddd1d:	e8 6a c6 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81ddd22:	83 f8 03             	cmp    $0x3,%eax
 81ddd25:	0f 95 c0             	setne  %al
 81ddd28:	84 c0                	test   %al,%al
 81ddd2a:	74 0a                	je     81ddd36 <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x36>
 81ddd2c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ddd31:	e9 e4 00 00 00       	jmp    81dde1a <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x11a>
 81ddd36:	8b 45 10             	mov    0x10(%ebp),%eax
 81ddd39:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ddd3c:	8b 45 14             	mov    0x14(%ebp),%eax
 81ddd3f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ddd42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddd45:	89 04 24             	mov    %eax,(%esp)
 81ddd48:	e8 ff 73 47 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81ddd4d:	85 c0                	test   %eax,%eax
 81ddd4f:	0f 95 c0             	setne  %al
 81ddd52:	84 c0                	test   %al,%al
 81ddd54:	74 2b                	je     81ddd81 <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x81>
 81ddd56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddd59:	89 04 24             	mov    %eax,(%esp)
 81ddd5c:	e8 ed de ee ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81ddd61:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81ddd64:	8b 52 10             	mov    0x10(%edx),%edx
 81ddd67:	39 d0                	cmp    %edx,%eax
 81ddd69:	0f 94 c0             	sete   %al
 81ddd6c:	84 c0                	test   %al,%al
 81ddd6e:	74 11                	je     81ddd81 <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x81>
 81ddd70:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddd73:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 81ddd77:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81ddd7c:	e9 99 00 00 00       	jmp    81dde1a <_ZN32Dispatcher_Mercenary_Competition7processEP5CUserR8MSG_BASER9ParamBase+0x11a>
 81ddd81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ddd84:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 81ddd88:	0f be c8             	movsbl %al,%ecx
 81ddd8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ddd8e:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 81ddd92:	0f be d0             	movsbl %al,%edx
 81ddd95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ddd98:	8b 40 10             	mov    0x10(%eax),%eax
 81ddd9b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81ddd9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ddda3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddda7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dddaa:	89 04 24             	mov    %eax,(%esp)
 81dddad:	e8 0e 09 4b 00       	call   868e6c0 <_ZN5CUser28Competition_Mercenary_CharacEjcc>
 81dddb2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81dddb5:	88 42 04             	mov    %al,0x4(%edx)
 81dddb8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dddbb:	8b 50 10             	mov    0x10(%eax),%edx
 81dddbe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dddc1:	89 50 08             	mov    %edx,0x8(%eax)
 81dddc4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dddc7:	0f b6 50 15          	movzbl 0x15(%eax),%edx
 81dddcb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dddce:	88 50 0c             	mov    %dl,0xc(%eax)
 81dddd1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dddd4:	0f b6 50 14          	movzbl 0x14(%eax),%edx
 81dddd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddddb:	88 50 0d             	mov    %dl,0xd(%eax)
 81dddde:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ddde1:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 81ddde5:	0f be c8             	movsbl %al,%ecx
 81ddde8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dddeb:	0f b6 40 15          	movzbl 0x15(%eax),%eax
 81dddef:	0f be d0             	movsbl %al,%edx
 81dddf2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dddf5:	8b 40 10             	mov    0x10(%eax),%eax
 81dddf8:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81dddfb:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 81dde01:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81dde05:	89 54 24 08          	mov    %edx,0x8(%esp)
 81dde09:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dde0d:	89 1c 24             	mov    %ebx,(%esp)
 81dde10:	e8 b5 8c 4a 00       	call   8686aca <_ZN15cUserHistoryLog20MercenaryCompetitionEjcc>
 81dde15:	b8 00 00 00 00       	mov    $0x0,%eax
 81dde1a:	83 c4 24             	add    $0x24,%esp
 81dde1d:	5b                   	pop    %ebx
 81dde1e:	5d                   	pop    %ebp
 81dde1f:	c3                   	ret

```

```c
// Dispatcher_Mercenary_Competition::process @ 0x81ddd00

/* Dispatcher_Mercenary_Competition::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Mercenary_Competition::process
          (Dispatcher_Mercenary_Competition *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  ParamBase PVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      iVar3 = CUser::GetParty(param_1);
      if ((iVar3 != 0) &&
         (iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1),
         iVar3 == *(int *)(param_2 + 0x10))) {
        param_3[4] = (ParamBase)0x0;
        return 0xffffffff;
      }
      PVar1 = (ParamBase)
              CUser::Competition_Mercenary_Charac
                        (param_1,*(uint *)(param_2 + 0x10),(char)param_2[0x15],(char)param_2[0x14]);
      param_3[4] = PVar1;
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
      *(MSG_BASE *)(param_3 + 0xc) = param_2[0x15];
      *(MSG_BASE *)(param_3 + 0xd) = param_2[0x14];
      cUserHistoryLog::MercenaryCompetition
                ((cUserHistoryLog *)(param_1 + 0x79700),*(uint *)(param_2 + 0x10),
                 (char)param_2[0x15],(char)param_2[0x14]);
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

```

---

## read

```asm
// === 081ddc24 Dispatcher_Mercenary_Competition::read  [0x081ddc24-0x81ddcff] ===
 81ddc24:	55                   	push   %ebp
 81ddc25:	89 e5                	mov    %esp,%ebp
 81ddc27:	83 ec 28             	sub    $0x28,%esp
 81ddc2a:	8b 45 10             	mov    0x10(%ebp),%eax
 81ddc2d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ddc30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddc33:	83 c0 10             	add    $0x10,%eax
 81ddc36:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddc3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddc3d:	89 04 24             	mov    %eax,(%esp)
 81ddc40:	e8 fb f5 3a 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 81ddc45:	83 f0 01             	xor    $0x1,%eax
 81ddc48:	84 c0                	test   %al,%al
 81ddc4a:	74 29                	je     81ddc75 <_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE+0x51>
 81ddc4c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ddc53:	00 
 81ddc54:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ddc5b:	00 
 81ddc5c:	c7 44 24 04 20 1e bd 	movl   $0x8bd1e20,0x4(%esp)
 81ddc63:	08 
 81ddc64:	c7 04 24 da 4e 00 00 	movl   $0x4eda,(%esp)
 81ddc6b:	e8 67 2c 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ddc70:	e9 89 00 00 00       	jmp    81ddcfe <_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE+0xda>
 81ddc75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddc78:	83 c0 14             	add    $0x14,%eax
 81ddc7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddc7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddc82:	89 04 24             	mov    %eax,(%esp)
 81ddc85:	e8 98 f2 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ddc8a:	83 f0 01             	xor    $0x1,%eax
 81ddc8d:	84 c0                	test   %al,%al
 81ddc8f:	74 26                	je     81ddcb7 <_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE+0x93>
 81ddc91:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ddc98:	00 
 81ddc99:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ddca0:	00 
 81ddca1:	c7 44 24 04 20 1e bd 	movl   $0x8bd1e20,0x4(%esp)
 81ddca8:	08 
 81ddca9:	c7 04 24 dc 4e 00 00 	movl   $0x4edc,(%esp)
 81ddcb0:	e8 22 2c 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ddcb5:	eb 47                	jmp    81ddcfe <_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE+0xda>
 81ddcb7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddcba:	83 c0 15             	add    $0x15,%eax
 81ddcbd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddcc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddcc4:	89 04 24             	mov    %eax,(%esp)
 81ddcc7:	e8 56 f2 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81ddccc:	83 f0 01             	xor    $0x1,%eax
 81ddccf:	84 c0                	test   %al,%al
 81ddcd1:	74 26                	je     81ddcf9 <_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE+0xd5>
 81ddcd3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ddcda:	00 
 81ddcdb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ddce2:	00 
 81ddce3:	c7 44 24 04 20 1e bd 	movl   $0x8bd1e20,0x4(%esp)
 81ddcea:	08 
 81ddceb:	c7 04 24 de 4e 00 00 	movl   $0x4ede,(%esp)
 81ddcf2:	e8 e0 2b 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81ddcf7:	eb 05                	jmp    81ddcfe <_ZN32Dispatcher_Mercenary_Competition4readER9PacketBufR8MSG_BASE+0xda>
 81ddcf9:	b8 00 00 00 00       	mov    $0x0,%eax
 81ddcfe:	c9                   	leave
 81ddcff:	c3                   	ret

```

```c
// Dispatcher_Mercenary_Competition::read @ 0x81ddc24

/* Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Mercenary_Competition::read
          (Dispatcher_Mercenary_Competition *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(uint *)(param_2 + 0x10));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x14));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x15));
      if (cVar1 == '\x01') {
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x4ede,
                         "virtual int Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x4edc,
                       "virtual int Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x4eda,
                     "virtual int Dispatcher_Mercenary_Competition::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dde20 Dispatcher_Mercenary_Competition::send  [0x081dde20-0x81ddf35] ===
 81dde20:	55                   	push   %ebp
 81dde21:	89 e5                	mov    %esp,%ebp
 81dde23:	56                   	push   %esi
 81dde24:	53                   	push   %ebx
 81dde25:	83 ec 20             	sub    $0x20,%esp
 81dde28:	8b 45 10             	mov    0x10(%ebp),%eax
 81dde2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dde2e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dde31:	89 04 24             	mov    %eax,(%esp)
 81dde34:	e8 13 ff 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dde39:	c7 44 24 08 bb 01 00 	movl   $0x1bb,0x8(%esp)
 81dde40:	00 
 81dde41:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dde48:	00 
 81dde49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dde4c:	89 04 24             	mov    %eax,(%esp)
 81dde4f:	e8 a8 da ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dde54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dde57:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81dde5b:	84 c0                	test   %al,%al
 81dde5d:	74 07                	je     81dde66 <_ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase+0x46>
 81dde5f:	b8 01 00 00 00       	mov    $0x1,%eax
 81dde64:	eb 05                	jmp    81dde6b <_ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase+0x4b>
 81dde66:	b8 00 00 00 00       	mov    $0x0,%eax
 81dde6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dde6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dde72:	89 04 24             	mov    %eax,(%esp)
 81dde75:	e8 a6 da ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dde7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dde7d:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81dde81:	84 c0                	test   %al,%al
 81dde83:	74 49                	je     81ddece <_ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase+0xae>
 81dde85:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dde88:	8b 40 08             	mov    0x8(%eax),%eax
 81dde8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dde8f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dde92:	89 04 24             	mov    %eax,(%esp)
 81dde95:	e8 a2 da ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81dde9a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dde9d:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81ddea1:	0f be c0             	movsbl %al,%eax
 81ddea4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddea8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddeab:	89 04 24             	mov    %eax,(%esp)
 81ddeae:	e8 6d da ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ddeb3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ddeb6:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 81ddeba:	0f be c0             	movsbl %al,%eax
 81ddebd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddec1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddec4:	89 04 24             	mov    %eax,(%esp)
 81ddec7:	e8 54 da ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ddecc:	eb 13                	jmp    81ddee1 <_ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase+0xc1>
 81ddece:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 81dded5:	00 
 81dded6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dded9:	89 04 24             	mov    %eax,(%esp)
 81ddedc:	e8 3f da ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ddee1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ddee8:	00 
 81ddee9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddeec:	89 04 24             	mov    %eax,(%esp)
 81ddeef:	e8 64 da ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81ddef4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddef7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ddefb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ddefe:	89 04 24             	mov    %eax,(%esp)
 81ddf01:	e8 b4 a6 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81ddf06:	eb 1b                	jmp    81ddf23 <_ZN32Dispatcher_Mercenary_Competition4sendEP5CUserR9ParamBase+0x103>
 81ddf08:	89 d3                	mov    %edx,%ebx
 81ddf0a:	89 c6                	mov    %eax,%esi
 81ddf0c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddf0f:	89 04 24             	mov    %eax,(%esp)
 81ddf12:	e8 69 ff 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ddf17:	89 f0                	mov    %esi,%eax
 81ddf19:	89 da                	mov    %ebx,%edx
 81ddf1b:	89 04 24             	mov    %eax,(%esp)
 81ddf1e:	e8 2d 58 90 00       	call   8ae3750 <_Unwind_Resume>
 81ddf23:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ddf26:	89 04 24             	mov    %eax,(%esp)
 81ddf29:	e8 52 ff 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81ddf2e:	83 c4 20             	add    $0x20,%esp
 81ddf31:	5b                   	pop    %ebx
 81ddf32:	5e                   	pop    %esi
 81ddf33:	5d                   	pop    %ebp
 81ddf34:	c3                   	ret
 81ddf35:	90                   	nop

```

```c
// Dispatcher_Mercenary_Competition::send @ 0x81dde20

/* Dispatcher_Mercenary_Competition::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Mercenary_Competition::send
          (Dispatcher_Mercenary_Competition *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081dde4f to 081ddf05 has its CatchHandler @ 081ddf08 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1bb);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(local_10[4] != (ParamBase)0x0))
  ;
  if (local_10[4] == (ParamBase)0x0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0x15);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0xd]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[0xc]);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

