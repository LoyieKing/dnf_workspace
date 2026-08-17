# nexon__cash__UDPSocket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## UDPSocket

```asm
// === 081aed2c nexon::cash::UDPSocket::UDPSocket  [0x081aed2c-0x81aed43] ===
 81aed2c:	55                   	push   %ebp
 81aed2d:	89 e5                	mov    %esp,%ebp
 81aed2f:	8b 45 08             	mov    0x8(%ebp),%eax
 81aed32:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 81aed38:	8b 45 08             	mov    0x8(%ebp),%eax
 81aed3b:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 81aed41:	5d                   	pop    %ebp
 81aed42:	c3                   	ret
 81aed43:	90                   	nop

```

```c
// nexon::cash::UDPSocket::UDPSocket @ 0x81aed2c

/* nexon::cash::UDPSocket::UDPSocket() */

void __thiscall nexon::cash::UDPSocket::UDPSocket(UDPSocket *this)

{
  *(undefined4 *)this = 0xffffffff;
  *(undefined2 *)(this + 0x14) = 0;
  return;
}

```

---

## bind

```asm
// === 081aedc6 nexon::cash::UDPSocket::bind  [0x081aedc6-0x81aee81] ===
 81aedc6:	55                   	push   %ebp
 81aedc7:	89 e5                	mov    %esp,%ebp
 81aedc9:	83 ec 28             	sub    $0x28,%esp
 81aedcc:	8b 45 10             	mov    0x10(%ebp),%eax
 81aedcf:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 81aedd3:	8b 45 08             	mov    0x8(%ebp),%eax
 81aedd6:	0f b7 55 f4          	movzwl -0xc(%ebp),%edx
 81aedda:	66 89 50 14          	mov    %dx,0x14(%eax)
 81aedde:	8b 45 08             	mov    0x8(%ebp),%eax
 81aede1:	83 c0 04             	add    $0x4,%eax
 81aede4:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81aedeb:	00 
 81aedec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81aedf3:	00 
 81aedf4:	89 04 24             	mov    %eax,(%esp)
 81aedf7:	e8 c4 ee ec ff       	call   807dcc0 <memset@plt>
 81aedfc:	8b 45 08             	mov    0x8(%ebp),%eax
 81aedff:	66 c7 40 04 02 00    	movw   $0x2,0x4(%eax)
 81aee05:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aee08:	89 04 24             	mov    %eax,(%esp)
 81aee0b:	e8 20 f7 ec ff       	call   807e530 <inet_addr@plt>
 81aee10:	8b 55 08             	mov    0x8(%ebp),%edx
 81aee13:	89 42 08             	mov    %eax,0x8(%edx)
 81aee16:	8b 45 08             	mov    0x8(%ebp),%eax
 81aee19:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81aee1d:	0f b7 c0             	movzwl %ax,%eax
 81aee20:	89 04 24             	mov    %eax,(%esp)
 81aee23:	e8 58 f8 ec ff       	call   807e680 <htons@plt>
 81aee28:	8b 55 08             	mov    0x8(%ebp),%edx
 81aee2b:	66 89 42 06          	mov    %ax,0x6(%edx)
 81aee2f:	8b 45 08             	mov    0x8(%ebp),%eax
 81aee32:	83 c0 04             	add    $0x4,%eax
 81aee35:	89 c2                	mov    %eax,%edx
 81aee37:	8b 45 08             	mov    0x8(%ebp),%eax
 81aee3a:	8b 00                	mov    (%eax),%eax
 81aee3c:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81aee43:	00 
 81aee44:	89 54 24 04          	mov    %edx,0x4(%esp)
 81aee48:	89 04 24             	mov    %eax,(%esp)
 81aee4b:	e8 00 f9 ec ff       	call   807e750 <bind@plt>
 81aee50:	85 c0                	test   %eax,%eax
 81aee52:	0f 95 c0             	setne  %al
 81aee55:	84 c0                	test   %al,%al
 81aee57:	74 22                	je     81aee7b <_ZN5nexon4cash9UDPSocket4bindEPKct+0xb5>
 81aee59:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 81aee5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81aee61:	8b 45 0c             	mov    0xc(%ebp),%eax
 81aee64:	89 44 24 04          	mov    %eax,0x4(%esp)
 81aee68:	c7 04 24 08 4a bb 08 	movl   $0x8bb4a08,(%esp)
 81aee6f:	e8 ec ec ec ff       	call   807db60 <printf@plt>
 81aee74:	b8 00 00 00 00       	mov    $0x0,%eax
 81aee79:	eb 05                	jmp    81aee80 <_ZN5nexon4cash9UDPSocket4bindEPKct+0xba>
 81aee7b:	b8 01 00 00 00       	mov    $0x1,%eax
 81aee80:	c9                   	leave
 81aee81:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::bind @ 0x81aedc6

/* nexon::cash::UDPSocket::bind(char const*, unsigned short) */

bool __thiscall nexon::cash::UDPSocket::bind(UDPSocket *this,char *param_1,ushort param_2)

{
  uint16_t uVar1;
  in_addr_t iVar2;
  int iVar3;
  
  *(ushort *)(this + 0x14) = param_2;
  memset(this + 4,0,0x10);
  *(undefined2 *)(this + 4) = 2;
  iVar2 = inet_addr(param_1);
  *(in_addr_t *)(this + 8) = iVar2;
  uVar1 = htons(*(uint16_t *)(this + 0x14));
  *(uint16_t *)(this + 6) = uVar1;
  iVar3 = ::bind(*(int *)this,(sockaddr *)(this + 4),0x10);
  if (iVar3 != 0) {
    printf("Udp Port binding fail, %s , %d\n",param_1,(uint)param_2);
  }
  return iVar3 == 0;
}

```

---

## bind_081aee82

```asm
// === 081aee82 nexon::cash::UDPSocket::bind  [0x081aee82-0x81aefa1] ===
 81aee82:	55                   	push   %ebp
 81aee83:	89 e5                	mov    %esp,%ebp
 81aee85:	83 ec 38             	sub    $0x38,%esp
 81aee88:	8b 55 0c             	mov    0xc(%ebp),%edx
 81aee8b:	8b 45 10             	mov    0x10(%ebp),%eax
 81aee8e:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 81aee92:	88 45 e0             	mov    %al,-0x20(%ebp)
 81aee95:	8b 45 08             	mov    0x8(%ebp),%eax
 81aee98:	0f b7 55 e4          	movzwl -0x1c(%ebp),%edx
 81aee9c:	66 89 50 14          	mov    %dx,0x14(%eax)
 81aeea0:	8b 45 08             	mov    0x8(%ebp),%eax
 81aeea3:	83 c0 04             	add    $0x4,%eax
 81aeea6:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81aeead:	00 
 81aeeae:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81aeeb5:	00 
 81aeeb6:	89 04 24             	mov    %eax,(%esp)
 81aeeb9:	e8 02 ee ec ff       	call   807dcc0 <memset@plt>
 81aeebe:	8b 45 08             	mov    0x8(%ebp),%eax
 81aeec1:	66 c7 40 04 02 00    	movw   $0x2,0x4(%eax)
 81aeec7:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 81aeece:	e8 3d ec ec ff       	call   807db10 <htonl@plt>
 81aeed3:	8b 55 08             	mov    0x8(%ebp),%edx
 81aeed6:	89 42 08             	mov    %eax,0x8(%edx)
 81aeed9:	8b 45 08             	mov    0x8(%ebp),%eax
 81aeedc:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81aeee0:	0f b7 c0             	movzwl %ax,%eax
 81aeee3:	89 04 24             	mov    %eax,(%esp)
 81aeee6:	e8 95 f7 ec ff       	call   807e680 <htons@plt>
 81aeeeb:	8b 55 08             	mov    0x8(%ebp),%edx
 81aeeee:	66 89 42 06          	mov    %ax,0x6(%edx)
 81aeef2:	8b 45 08             	mov    0x8(%ebp),%eax
 81aeef5:	83 c0 04             	add    $0x4,%eax
 81aeef8:	89 c2                	mov    %eax,%edx
 81aeefa:	8b 45 08             	mov    0x8(%ebp),%eax
 81aeefd:	8b 00                	mov    (%eax),%eax
 81aeeff:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81aef06:	00 
 81aef07:	89 54 24 04          	mov    %edx,0x4(%esp)
 81aef0b:	89 04 24             	mov    %eax,(%esp)
 81aef0e:	e8 3d f8 ec ff       	call   807e750 <bind@plt>
 81aef13:	85 c0                	test   %eax,%eax
 81aef15:	0f 95 c0             	setne  %al
 81aef18:	84 c0                	test   %al,%al
 81aef1a:	74 6d                	je     81aef89 <_ZN5nexon4cash9UDPSocket4bindEtb+0x107>
 81aef1c:	e8 4f ee ec ff       	call   807dd70 <__errno_location@plt>
 81aef21:	8b 00                	mov    (%eax),%eax
 81aef23:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81aef26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81aef29:	83 f8 62             	cmp    $0x62,%eax
 81aef2c:	74 0b                	je     81aef39 <_ZN5nexon4cash9UDPSocket4bindEtb+0xb7>
 81aef2e:	83 f8 63             	cmp    $0x63,%eax
 81aef31:	74 1c                	je     81aef4f <_ZN5nexon4cash9UDPSocket4bindEtb+0xcd>
 81aef33:	85 c0                	test   %eax,%eax
 81aef35:	74 4a                	je     81aef81 <_ZN5nexon4cash9UDPSocket4bindEtb+0xff>
 81aef37:	eb 24                	jmp    81aef5d <_ZN5nexon4cash9UDPSocket4bindEtb+0xdb>
 81aef39:	0f b7 45 e4          	movzwl -0x1c(%ebp),%eax
 81aef3d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81aef41:	c7 04 24 28 4a bb 08 	movl   $0x8bb4a28,(%esp)
 81aef48:	e8 13 ec ec ff       	call   807db60 <printf@plt>
 81aef4d:	eb 33                	jmp    81aef82 <_ZN5nexon4cash9UDPSocket4bindEtb+0x100>
 81aef4f:	c7 04 24 50 4a bb 08 	movl   $0x8bb4a50,(%esp)
 81aef56:	e8 15 f6 ec ff       	call   807e570 <puts@plt>
 81aef5b:	eb 25                	jmp    81aef82 <_ZN5nexon4cash9UDPSocket4bindEtb+0x100>
 81aef5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81aef60:	89 04 24             	mov    %eax,(%esp)
 81aef63:	e8 c8 e7 ec ff       	call   807d730 <strerror@plt>
 81aef68:	89 44 24 08          	mov    %eax,0x8(%esp)
 81aef6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81aef6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81aef73:	c7 04 24 70 4a bb 08 	movl   $0x8bb4a70,(%esp)
 81aef7a:	e8 e1 eb ec ff       	call   807db60 <printf@plt>
 81aef7f:	eb 01                	jmp    81aef82 <_ZN5nexon4cash9UDPSocket4bindEtb+0x100>
 81aef81:	90                   	nop
 81aef82:	b8 00 00 00 00       	mov    $0x0,%eax
 81aef87:	eb 16                	jmp    81aef9f <_ZN5nexon4cash9UDPSocket4bindEtb+0x11d>
 81aef89:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 81aef8d:	74 0b                	je     81aef9a <_ZN5nexon4cash9UDPSocket4bindEtb+0x118>
 81aef8f:	8b 45 08             	mov    0x8(%ebp),%eax
 81aef92:	89 04 24             	mov    %eax,(%esp)
 81aef95:	e8 08 00 00 00       	call   81aefa2 <_ZN5nexon4cash9UDPSocket14setOptNonBlockEv>
 81aef9a:	b8 01 00 00 00       	mov    $0x1,%eax
 81aef9f:	c9                   	leave
 81aefa0:	c3                   	ret
 81aefa1:	90                   	nop

```

```c
// nexon::cash::UDPSocket::bind @ 0x81aee82

/* nexon::cash::UDPSocket::bind(unsigned short, bool) */

undefined4 __thiscall nexon::cash::UDPSocket::bind(UDPSocket *this,ushort param_1,bool param_2)

{
  uint16_t uVar1;
  uint32_t uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  *(ushort *)(this + 0x14) = param_1;
  memset(this + 4,0,0x10);
  *(undefined2 *)(this + 4) = 2;
  uVar2 = htonl(0);
  *(uint32_t *)(this + 8) = uVar2;
  uVar1 = htons(*(uint16_t *)(this + 0x14));
  *(uint16_t *)(this + 6) = uVar1;
  iVar3 = ::bind(*(int *)this,(sockaddr *)(this + 4),0x10);
  if (iVar3 == 0) {
    if (param_2) {
      setOptNonBlock(this);
    }
    uVar6 = 1;
  }
  else {
    piVar4 = __errno_location();
    iVar3 = *piVar4;
    if (iVar3 == 0x62) {
      printf("Port %d for receiving UDP is in use\n",(uint)param_1);
    }
    else if (iVar3 == 99) {
      puts("Cannot assign requested address");
    }
    else if (iVar3 != 0) {
      pcVar5 = strerror(iVar3);
      printf("Could not bind UDP receive port. Error= %d , strerror = %s\n",iVar3,pcVar5);
    }
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## close

```asm
// === 081af184 nexon::cash::UDPSocket::close  [0x081af184-0x81af1b7] ===
 81af184:	55                   	push   %ebp
 81af185:	89 e5                	mov    %esp,%ebp
 81af187:	83 ec 18             	sub    $0x18,%esp
 81af18a:	8b 45 08             	mov    0x8(%ebp),%eax
 81af18d:	8b 00                	mov    (%eax),%eax
 81af18f:	83 f8 ff             	cmp    $0xffffffff,%eax
 81af192:	74 21                	je     81af1b5 <_ZN5nexon4cash9UDPSocket5closeEv+0x31>
 81af194:	8b 45 08             	mov    0x8(%ebp),%eax
 81af197:	8b 00                	mov    (%eax),%eax
 81af199:	89 04 24             	mov    %eax,(%esp)
 81af19c:	e8 bf e6 ec ff       	call   807d860 <close@plt>
 81af1a1:	8b 45 08             	mov    0x8(%ebp),%eax
 81af1a4:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 81af1aa:	8b 45 08             	mov    0x8(%ebp),%eax
 81af1ad:	66 c7 40 14 00 00    	movw   $0x0,0x14(%eax)
 81af1b3:	eb 01                	jmp    81af1b6 <_ZN5nexon4cash9UDPSocket5closeEv+0x32>
 81af1b5:	90                   	nop
 81af1b6:	c9                   	leave
 81af1b7:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::close @ 0x81af184

/* nexon::cash::UDPSocket::close() */

void __thiscall nexon::cash::UDPSocket::close(UDPSocket *this)

{
  if (*(int *)this != -1) {
    ::close(*(int *)this);
    *(undefined4 *)this = 0xffffffff;
    *(undefined2 *)(this + 0x14) = 0;
  }
  return;
}

```

---

## getHandle

```asm
// === 081af17a nexon::cash::UDPSocket::getHandle  [0x081af17a-0x81af183] ===
 81af17a:	55                   	push   %ebp
 81af17b:	89 e5                	mov    %esp,%ebp
 81af17d:	8b 45 08             	mov    0x8(%ebp),%eax
 81af180:	8b 00                	mov    (%eax),%eax
 81af182:	5d                   	pop    %ebp
 81af183:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::getHandle @ 0x81af17a

/* nexon::cash::UDPSocket::getHandle() */

undefined4 __thiscall nexon::cash::UDPSocket::getHandle(UDPSocket *this)

{
  return *(undefined4 *)this;
}

```

---

## open

```asm
// === 081aed58 nexon::cash::UDPSocket::open  [0x081aed58-0x81aedc5] ===
 81aed58:	55                   	push   %ebp
 81aed59:	89 e5                	mov    %esp,%ebp
 81aed5b:	83 ec 28             	sub    $0x28,%esp
 81aed5e:	8b 45 08             	mov    0x8(%ebp),%eax
 81aed61:	8b 00                	mov    (%eax),%eax
 81aed63:	83 f8 ff             	cmp    $0xffffffff,%eax
 81aed66:	74 07                	je     81aed6f <_ZN5nexon4cash9UDPSocket4openEv+0x17>
 81aed68:	b8 00 00 00 00       	mov    $0x0,%eax
 81aed6d:	eb 54                	jmp    81aedc3 <_ZN5nexon4cash9UDPSocket4openEv+0x6b>
 81aed6f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81aed76:	00 
 81aed77:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81aed7e:	00 
 81aed7f:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81aed86:	e8 25 ed ec ff       	call   807dab0 <socket@plt>
 81aed8b:	8b 55 08             	mov    0x8(%ebp),%edx
 81aed8e:	89 02                	mov    %eax,(%edx)
 81aed90:	8b 45 08             	mov    0x8(%ebp),%eax
 81aed93:	8b 00                	mov    (%eax),%eax
 81aed95:	83 f8 ff             	cmp    $0xffffffff,%eax
 81aed98:	75 24                	jne    81aedbe <_ZN5nexon4cash9UDPSocket4openEv+0x66>
 81aed9a:	e8 d1 ef ec ff       	call   807dd70 <__errno_location@plt>
 81aed9f:	8b 00                	mov    (%eax),%eax
 81aeda1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81aeda4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81aeda7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81aedab:	c7 04 24 e4 49 bb 08 	movl   $0x8bb49e4,(%esp)
 81aedb2:	e8 a9 ed ec ff       	call   807db60 <printf@plt>
 81aedb7:	b8 00 00 00 00       	mov    $0x0,%eax
 81aedbc:	eb 05                	jmp    81aedc3 <_ZN5nexon4cash9UDPSocket4openEv+0x6b>
 81aedbe:	b8 01 00 00 00       	mov    $0x1,%eax
 81aedc3:	c9                   	leave
 81aedc4:	c3                   	ret
 81aedc5:	90                   	nop

```

```c
// nexon::cash::UDPSocket::open @ 0x81aed58

/* nexon::cash::UDPSocket::open() */

undefined4 __thiscall nexon::cash::UDPSocket::open(UDPSocket *this)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)this == -1) {
    iVar2 = socket(2,2,0);
    *(int *)this = iVar2;
    if (*(int *)this == -1) {
      piVar3 = __errno_location();
      printf("Could not create a UDP socket : %d\n",*piVar3);
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## pollErrorEvent

```asm
// === 081af400 nexon::cash::UDPSocket::pollErrorEvent  [0x081af400-0x81af4cb] ===
 81af400:	55                   	push   %ebp
 81af401:	89 e5                	mov    %esp,%ebp
 81af403:	57                   	push   %edi
 81af404:	56                   	push   %esi
 81af405:	53                   	push   %ebx
 81af406:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81af40c:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81af412:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81af415:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81af41c:	eb 11                	jmp    81af42f <_ZNK5nexon4cash9UDPSocket14pollErrorEventEv+0x2f>
 81af41e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81af421:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81af424:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81af42b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81af42f:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81af433:	0f 96 c0             	setbe  %al
 81af436:	84 c0                	test   %al,%al
 81af438:	75 e4                	jne    81af41e <_ZNK5nexon4cash9UDPSocket14pollErrorEventEv+0x1e>
 81af43a:	8b 45 08             	mov    0x8(%ebp),%eax
 81af43d:	8b 00                	mov    (%eax),%eax
 81af43f:	89 c2                	mov    %eax,%edx
 81af441:	c1 ea 05             	shr    $0x5,%edx
 81af444:	8b 45 08             	mov    0x8(%ebp),%eax
 81af447:	8b 00                	mov    (%eax),%eax
 81af449:	c1 e8 05             	shr    $0x5,%eax
 81af44c:	8b 9c 85 54 ff ff ff 	mov    -0xac(%ebp,%eax,4),%ebx
 81af453:	8b 45 08             	mov    0x8(%ebp),%eax
 81af456:	8b 00                	mov    (%eax),%eax
 81af458:	83 e0 1f             	and    $0x1f,%eax
 81af45b:	be 01 00 00 00       	mov    $0x1,%esi
 81af460:	89 f7                	mov    %esi,%edi
 81af462:	89 c1                	mov    %eax,%ecx
 81af464:	d3 e7                	shl    %cl,%edi
 81af466:	89 f8                	mov    %edi,%eax
 81af468:	09 d8                	or     %ebx,%eax
 81af46a:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 81af471:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81af478:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81af47f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81af482:	89 44 24 10          	mov    %eax,0x10(%esp)
 81af486:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81af48c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81af490:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81af497:	00 
 81af498:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af49f:	00 
 81af4a0:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81af4a7:	e8 94 f3 ec ff       	call   807e840 <select@plt>
 81af4ac:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81af4af:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81af4b3:	75 07                	jne    81af4bc <_ZNK5nexon4cash9UDPSocket14pollErrorEventEv+0xbc>
 81af4b5:	b8 00 00 00 00       	mov    $0x0,%eax
 81af4ba:	eb 05                	jmp    81af4c1 <_ZNK5nexon4cash9UDPSocket14pollErrorEventEv+0xc1>
 81af4bc:	b8 01 00 00 00       	mov    $0x1,%eax
 81af4c1:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 81af4c7:	5b                   	pop    %ebx
 81af4c8:	5e                   	pop    %esi
 81af4c9:	5f                   	pop    %edi
 81af4ca:	5d                   	pop    %ebp
 81af4cb:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::pollErrorEvent @ 0x81af400

/* nexon::cash::UDPSocket::pollErrorEvent() const */

bool __thiscall nexon::cash::UDPSocket::pollErrorEvent(UDPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 0;
  iVar1 = select(2,(fd_set *)0x0,(fd_set *)0x0,&local_b0,&local_30);
  return iVar1 != 0;
}

```

---

## pollReadEvent

```asm
// === 081af268 nexon::cash::UDPSocket::pollReadEvent  [0x081af268-0x81af333] ===
 81af268:	55                   	push   %ebp
 81af269:	89 e5                	mov    %esp,%ebp
 81af26b:	57                   	push   %edi
 81af26c:	56                   	push   %esi
 81af26d:	53                   	push   %ebx
 81af26e:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81af274:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81af27a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81af27d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81af284:	eb 11                	jmp    81af297 <_ZNK5nexon4cash9UDPSocket13pollReadEventEv+0x2f>
 81af286:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81af289:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81af28c:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81af293:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81af297:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81af29b:	0f 96 c0             	setbe  %al
 81af29e:	84 c0                	test   %al,%al
 81af2a0:	75 e4                	jne    81af286 <_ZNK5nexon4cash9UDPSocket13pollReadEventEv+0x1e>
 81af2a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81af2a5:	8b 00                	mov    (%eax),%eax
 81af2a7:	89 c2                	mov    %eax,%edx
 81af2a9:	c1 ea 05             	shr    $0x5,%edx
 81af2ac:	8b 45 08             	mov    0x8(%ebp),%eax
 81af2af:	8b 00                	mov    (%eax),%eax
 81af2b1:	c1 e8 05             	shr    $0x5,%eax
 81af2b4:	8b 9c 85 54 ff ff ff 	mov    -0xac(%ebp,%eax,4),%ebx
 81af2bb:	8b 45 08             	mov    0x8(%ebp),%eax
 81af2be:	8b 00                	mov    (%eax),%eax
 81af2c0:	83 e0 1f             	and    $0x1f,%eax
 81af2c3:	be 01 00 00 00       	mov    $0x1,%esi
 81af2c8:	89 f7                	mov    %esi,%edi
 81af2ca:	89 c1                	mov    %eax,%ecx
 81af2cc:	d3 e7                	shl    %cl,%edi
 81af2ce:	89 f8                	mov    %edi,%eax
 81af2d0:	09 d8                	or     %ebx,%eax
 81af2d2:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 81af2d9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81af2e0:	c7 45 d8 88 13 00 00 	movl   $0x1388,-0x28(%ebp)
 81af2e7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81af2ea:	89 44 24 10          	mov    %eax,0x10(%esp)
 81af2ee:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81af2f5:	00 
 81af2f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81af2fd:	00 
 81af2fe:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81af304:	89 44 24 04          	mov    %eax,0x4(%esp)
 81af308:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81af30f:	e8 2c f5 ec ff       	call   807e840 <select@plt>
 81af314:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81af317:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81af31b:	75 07                	jne    81af324 <_ZNK5nexon4cash9UDPSocket13pollReadEventEv+0xbc>
 81af31d:	b8 00 00 00 00       	mov    $0x0,%eax
 81af322:	eb 05                	jmp    81af329 <_ZNK5nexon4cash9UDPSocket13pollReadEventEv+0xc1>
 81af324:	b8 01 00 00 00       	mov    $0x1,%eax
 81af329:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 81af32f:	5b                   	pop    %ebx
 81af330:	5e                   	pop    %esi
 81af331:	5f                   	pop    %edi
 81af332:	5d                   	pop    %ebp
 81af333:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::pollReadEvent @ 0x81af268

/* nexon::cash::UDPSocket::pollReadEvent() const */

bool __thiscall nexon::cash::UDPSocket::pollReadEvent(UDPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 5000;
  iVar1 = select(2,&local_b0,(fd_set *)0x0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}

```

---

## pollWriteEvent

```asm
// === 081af334 nexon::cash::UDPSocket::pollWriteEvent  [0x081af334-0x81af3ff] ===
 81af334:	55                   	push   %ebp
 81af335:	89 e5                	mov    %esp,%ebp
 81af337:	57                   	push   %edi
 81af338:	56                   	push   %esi
 81af339:	53                   	push   %ebx
 81af33a:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 81af340:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81af346:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81af349:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 81af350:	eb 11                	jmp    81af363 <_ZNK5nexon4cash9UDPSocket14pollWriteEventEv+0x2f>
 81af352:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81af355:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81af358:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 81af35f:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81af363:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 81af367:	0f 96 c0             	setbe  %al
 81af36a:	84 c0                	test   %al,%al
 81af36c:	75 e4                	jne    81af352 <_ZNK5nexon4cash9UDPSocket14pollWriteEventEv+0x1e>
 81af36e:	8b 45 08             	mov    0x8(%ebp),%eax
 81af371:	8b 00                	mov    (%eax),%eax
 81af373:	89 c2                	mov    %eax,%edx
 81af375:	c1 ea 05             	shr    $0x5,%edx
 81af378:	8b 45 08             	mov    0x8(%ebp),%eax
 81af37b:	8b 00                	mov    (%eax),%eax
 81af37d:	c1 e8 05             	shr    $0x5,%eax
 81af380:	8b 9c 85 54 ff ff ff 	mov    -0xac(%ebp,%eax,4),%ebx
 81af387:	8b 45 08             	mov    0x8(%ebp),%eax
 81af38a:	8b 00                	mov    (%eax),%eax
 81af38c:	83 e0 1f             	and    $0x1f,%eax
 81af38f:	be 01 00 00 00       	mov    $0x1,%esi
 81af394:	89 f7                	mov    %esi,%edi
 81af396:	89 c1                	mov    %eax,%ecx
 81af398:	d3 e7                	shl    %cl,%edi
 81af39a:	89 f8                	mov    %edi,%eax
 81af39c:	09 d8                	or     %ebx,%eax
 81af39e:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 81af3a5:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81af3ac:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81af3b3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81af3b6:	89 44 24 10          	mov    %eax,0x10(%esp)
 81af3ba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81af3c1:	00 
 81af3c2:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 81af3c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81af3cc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af3d3:	00 
 81af3d4:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 81af3db:	e8 60 f4 ec ff       	call   807e840 <select@plt>
 81af3e0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81af3e3:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81af3e7:	75 07                	jne    81af3f0 <_ZNK5nexon4cash9UDPSocket14pollWriteEventEv+0xbc>
 81af3e9:	b8 00 00 00 00       	mov    $0x0,%eax
 81af3ee:	eb 05                	jmp    81af3f5 <_ZNK5nexon4cash9UDPSocket14pollWriteEventEv+0xc1>
 81af3f0:	b8 01 00 00 00       	mov    $0x1,%eax
 81af3f5:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 81af3fb:	5b                   	pop    %ebx
 81af3fc:	5e                   	pop    %esi
 81af3fd:	5f                   	pop    %edi
 81af3fe:	5d                   	pop    %ebp
 81af3ff:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::pollWriteEvent @ 0x81af334

/* nexon::cash::UDPSocket::pollWriteEvent() const */

bool __thiscall nexon::cash::UDPSocket::pollWriteEvent(UDPSocket *this)

{
  int iVar1;
  fd_set local_b0;
  timeval local_30;
  uint local_24;
  fd_set *local_20;
  
  local_20 = &local_b0;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_b0.fds_bits[local_24] = 0;
  }
  local_b0.fds_bits[*(uint *)this >> 5] =
       1 << ((byte)*(undefined4 *)this & 0x1f) | local_b0.fds_bits[*(uint *)this >> 5];
  local_30.tv_sec = 0;
  local_30.tv_usec = 0;
  iVar1 = select(2,(fd_set *)0x0,&local_b0,(fd_set *)0x0,&local_30);
  return iVar1 != 0;
}

```

---

## recv

```asm
// === 081af0de nexon::cash::UDPSocket::recv  [0x081af0de-0x81af179] ===
 81af0de:	55                   	push   %ebp
 81af0df:	89 e5                	mov    %esp,%ebp
 81af0e1:	53                   	push   %ebx
 81af0e2:	83 ec 34             	sub    $0x34,%esp
 81af0e5:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81af0e9:	74 06                	je     81af0f1 <_ZN5nexon4cash9UDPSocket4recvEPci+0x13>
 81af0eb:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81af0ef:	7f 07                	jg     81af0f8 <_ZN5nexon4cash9UDPSocket4recvEPci+0x1a>
 81af0f1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af0f6:	eb 7b                	jmp    81af173 <_ZN5nexon4cash9UDPSocket4recvEPci+0x95>
 81af0f8:	c7 45 f0 10 00 00 00 	movl   $0x10,-0x10(%ebp)
 81af0ff:	8d 5d f0             	lea    -0x10(%ebp),%ebx
 81af102:	8b 45 08             	mov    0x8(%ebp),%eax
 81af105:	83 c0 18             	add    $0x18,%eax
 81af108:	89 c1                	mov    %eax,%ecx
 81af10a:	8b 55 10             	mov    0x10(%ebp),%edx
 81af10d:	8b 45 08             	mov    0x8(%ebp),%eax
 81af110:	8b 00                	mov    (%eax),%eax
 81af112:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81af116:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81af11a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81af121:	00 
 81af122:	89 54 24 08          	mov    %edx,0x8(%esp)
 81af126:	8b 55 0c             	mov    0xc(%ebp),%edx
 81af129:	89 54 24 04          	mov    %edx,0x4(%esp)
 81af12d:	89 04 24             	mov    %eax,(%esp)
 81af130:	e8 db e7 ec ff       	call   807d910 <recvfrom@plt>
 81af135:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af138:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af13c:	79 32                	jns    81af170 <_ZN5nexon4cash9UDPSocket4recvEPci+0x92>
 81af13e:	e8 2d ec ec ff       	call   807dd70 <__errno_location@plt>
 81af143:	8b 00                	mov    (%eax),%eax
 81af145:	83 f8 0b             	cmp    $0xb,%eax
 81af148:	74 18                	je     81af162 <_ZN5nexon4cash9UDPSocket4recvEPci+0x84>
 81af14a:	e8 21 ec ec ff       	call   807dd70 <__errno_location@plt>
 81af14f:	8b 00                	mov    (%eax),%eax
 81af151:	83 f8 04             	cmp    $0x4,%eax
 81af154:	74 0c                	je     81af162 <_ZN5nexon4cash9UDPSocket4recvEPci+0x84>
 81af156:	e8 15 ec ec ff       	call   807dd70 <__errno_location@plt>
 81af15b:	8b 00                	mov    (%eax),%eax
 81af15d:	83 f8 0b             	cmp    $0xb,%eax
 81af160:	75 07                	jne    81af169 <_ZN5nexon4cash9UDPSocket4recvEPci+0x8b>
 81af162:	b8 00 00 00 00       	mov    $0x0,%eax
 81af167:	eb 0a                	jmp    81af173 <_ZN5nexon4cash9UDPSocket4recvEPci+0x95>
 81af169:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af16e:	eb 03                	jmp    81af173 <_ZN5nexon4cash9UDPSocket4recvEPci+0x95>
 81af170:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81af173:	83 c4 34             	add    $0x34,%esp
 81af176:	5b                   	pop    %ebx
 81af177:	5d                   	pop    %ebp
 81af178:	c3                   	ret
 81af179:	90                   	nop

```

```c
// nexon::cash::UDPSocket::recv @ 0x81af0de

/* nexon::cash::UDPSocket::recv(char*, int) */

ssize_t __thiscall nexon::cash::UDPSocket::recv(UDPSocket *this,char *param_1,int param_2)

{
  int *piVar1;
  socklen_t local_14;
  ssize_t local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    local_10 = -1;
  }
  else {
    local_14 = 0x10;
    local_10 = recvfrom(*(int *)this,param_1,param_2,0,(sockaddr *)(this + 0x18),&local_14);
    if (local_10 < 0) {
      piVar1 = __errno_location();
      if (((*piVar1 == 0xb) || (piVar1 = __errno_location(), *piVar1 == 4)) ||
         (piVar1 = __errno_location(), *piVar1 == 0xb)) {
        local_10 = 0;
      }
      else {
        local_10 = -1;
      }
    }
  }
  return local_10;
}

```

---

## send

```asm
// === 081af000 nexon::cash::UDPSocket::send  [0x081af000-0x81af0dd] ===
 81af000:	55                   	push   %ebp
 81af001:	89 e5                	mov    %esp,%ebp
 81af003:	83 ec 58             	sub    $0x58,%esp
 81af006:	8b 45 14             	mov    0x14(%ebp),%eax
 81af009:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 81af00d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81af011:	74 06                	je     81af019 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0x19>
 81af013:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 81af017:	7f 0a                	jg     81af023 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0x23>
 81af019:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81af01e:	e9 b8 00 00 00       	jmp    81af0db <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xdb>
 81af023:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 81af027:	75 0a                	jne    81af033 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0x33>
 81af029:	b8 00 00 00 00       	mov    $0x0,%eax
 81af02e:	e9 a8 00 00 00       	jmp    81af0db <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xdb>
 81af033:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 81af03a:	00 
 81af03b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81af042:	00 
 81af043:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81af046:	89 04 24             	mov    %eax,(%esp)
 81af049:	e8 72 ec ec ff       	call   807dcc0 <memset@plt>
 81af04e:	66 c7 45 e4 02 00    	movw   $0x2,-0x1c(%ebp)
 81af054:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 81af058:	89 04 24             	mov    %eax,(%esp)
 81af05b:	e8 20 f6 ec ff       	call   807e680 <htons@plt>
 81af060:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 81af064:	8b 45 18             	mov    0x18(%ebp),%eax
 81af067:	89 04 24             	mov    %eax,(%esp)
 81af06a:	e8 c1 f4 ec ff       	call   807e530 <inet_addr@plt>
 81af06f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81af072:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 81af075:	8b 55 10             	mov    0x10(%ebp),%edx
 81af078:	8b 45 08             	mov    0x8(%ebp),%eax
 81af07b:	8b 00                	mov    (%eax),%eax
 81af07d:	c7 44 24 14 10 00 00 	movl   $0x10,0x14(%esp)
 81af084:	00 
 81af085:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81af089:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81af090:	00 
 81af091:	89 54 24 08          	mov    %edx,0x8(%esp)
 81af095:	8b 55 0c             	mov    0xc(%ebp),%edx
 81af098:	89 54 24 04          	mov    %edx,0x4(%esp)
 81af09c:	89 04 24             	mov    %eax,(%esp)
 81af09f:	e8 3c f1 ec ff       	call   807e1e0 <sendto@plt>
 81af0a4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af0a7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af0ab:	79 2b                	jns    81af0d8 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xd8>
 81af0ad:	e8 be ec ec ff       	call   807dd70 <__errno_location@plt>
 81af0b2:	8b 00                	mov    (%eax),%eax
 81af0b4:	83 f8 0b             	cmp    $0xb,%eax
 81af0b7:	74 18                	je     81af0d1 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xd1>
 81af0b9:	e8 b2 ec ec ff       	call   807dd70 <__errno_location@plt>
 81af0be:	8b 00                	mov    (%eax),%eax
 81af0c0:	83 f8 0b             	cmp    $0xb,%eax
 81af0c3:	74 0c                	je     81af0d1 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xd1>
 81af0c5:	e8 a6 ec ec ff       	call   807dd70 <__errno_location@plt>
 81af0ca:	8b 00                	mov    (%eax),%eax
 81af0cc:	83 f8 04             	cmp    $0x4,%eax
 81af0cf:	75 07                	jne    81af0d8 <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xd8>
 81af0d1:	b8 00 00 00 00       	mov    $0x0,%eax
 81af0d6:	eb 03                	jmp    81af0db <_ZN5nexon4cash9UDPSocket4sendEPcitPKc+0xdb>
 81af0d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81af0db:	c9                   	leave
 81af0dc:	c3                   	ret
 81af0dd:	90                   	nop

```

```c
// nexon::cash::UDPSocket::send @ 0x81af000

/* nexon::cash::UDPSocket::send(char*, int, unsigned short, char const*) */

ssize_t __thiscall
nexon::cash::UDPSocket::send(UDPSocket *this,char *param_1,int param_2,ushort param_3,char *param_4)

{
  int *piVar1;
  sockaddr local_20;
  ssize_t local_10;
  
  if ((param_1 == (char *)0x0) || (param_2 < 1)) {
    local_10 = -1;
  }
  else if (param_4 == (char *)0x0) {
    local_10 = 0;
  }
  else {
    memset(&local_20,0,0x10);
    local_20.sa_family = 2;
    local_20.sa_data._0_2_ = htons(param_3);
    local_20.sa_data._2_4_ = inet_addr(param_4);
    local_10 = sendto(*(int *)this,param_1,param_2,0,&local_20,0x10);
    if ((local_10 < 0) &&
       (((piVar1 = __errno_location(), *piVar1 == 0xb ||
         (piVar1 = __errno_location(), *piVar1 == 0xb)) ||
        (piVar1 = __errno_location(), *piVar1 == 4)))) {
      local_10 = 0;
    }
  }
  return local_10;
}

```

---

## setOptNonBlock

```asm
// === 081aefa2 nexon::cash::UDPSocket::setOptNonBlock  [0x081aefa2-0x81aefff] ===
 81aefa2:	55                   	push   %ebp
 81aefa3:	89 e5                	mov    %esp,%ebp
 81aefa5:	83 ec 28             	sub    $0x28,%esp
 81aefa8:	8b 45 08             	mov    0x8(%ebp),%eax
 81aefab:	8b 00                	mov    (%eax),%eax
 81aefad:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81aefb4:	00 
 81aefb5:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81aefbc:	00 
 81aefbd:	89 04 24             	mov    %eax,(%esp)
 81aefc0:	e8 ab f4 ec ff       	call   807e470 <fcntl@plt>
 81aefc5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81aefc8:	81 4d f4 00 08 00 00 	orl    $0x800,-0xc(%ebp)
 81aefcf:	8b 45 08             	mov    0x8(%ebp),%eax
 81aefd2:	8b 00                	mov    (%eax),%eax
 81aefd4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81aefd7:	89 54 24 08          	mov    %edx,0x8(%esp)
 81aefdb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81aefe2:	00 
 81aefe3:	89 04 24             	mov    %eax,(%esp)
 81aefe6:	e8 85 f4 ec ff       	call   807e470 <fcntl@plt>
 81aefeb:	c1 e8 1f             	shr    $0x1f,%eax
 81aefee:	84 c0                	test   %al,%al
 81aeff0:	74 07                	je     81aeff9 <_ZN5nexon4cash9UDPSocket14setOptNonBlockEv+0x57>
 81aeff2:	b8 00 00 00 00       	mov    $0x0,%eax
 81aeff7:	eb 05                	jmp    81aeffe <_ZN5nexon4cash9UDPSocket14setOptNonBlockEv+0x5c>
 81aeff9:	b8 01 00 00 00       	mov    $0x1,%eax
 81aeffe:	c9                   	leave
 81aefff:	c3                   	ret

```

```c
// nexon::cash::UDPSocket::setOptNonBlock @ 0x81aefa2

/* nexon::cash::UDPSocket::setOptNonBlock() */

bool __thiscall nexon::cash::UDPSocket::setOptNonBlock(UDPSocket *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fcntl(*(int *)this,3,0);
  iVar2 = fcntl(*(int *)this,4,uVar1 | 0x800);
  return -1 < iVar2;
}

```

---

## setOptResizeRecvBuf

```asm
// === 081af210 nexon::cash::UDPSocket::setOptResizeRecvBuf  [0x081af210-0x81af267] ===
 81af210:	55                   	push   %ebp
 81af211:	89 e5                	mov    %esp,%ebp
 81af213:	83 ec 38             	sub    $0x38,%esp
 81af216:	8b 45 0c             	mov    0xc(%ebp),%eax
 81af219:	85 c0                	test   %eax,%eax
 81af21b:	7f 07                	jg     81af224 <_ZN5nexon4cash9UDPSocket19setOptResizeRecvBufEi+0x14>
 81af21d:	b8 00 00 00 00       	mov    $0x0,%eax
 81af222:	eb 41                	jmp    81af265 <_ZN5nexon4cash9UDPSocket19setOptResizeRecvBufEi+0x55>
 81af224:	8b 45 08             	mov    0x8(%ebp),%eax
 81af227:	8b 00                	mov    (%eax),%eax
 81af229:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 81af230:	00 
 81af231:	8d 55 0c             	lea    0xc(%ebp),%edx
 81af234:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81af238:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 81af23f:	00 
 81af240:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81af247:	00 
 81af248:	89 04 24             	mov    %eax,(%esp)
 81af24b:	e8 50 f0 ec ff       	call   807e2a0 <setsockopt@plt>
 81af250:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af253:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af257:	79 07                	jns    81af260 <_ZN5nexon4cash9UDPSocket19setOptResizeRecvBufEi+0x50>
 81af259:	b8 00 00 00 00       	mov    $0x0,%eax
 81af25e:	eb 05                	jmp    81af265 <_ZN5nexon4cash9UDPSocket19setOptResizeRecvBufEi+0x55>
 81af260:	b8 01 00 00 00       	mov    $0x1,%eax
 81af265:	c9                   	leave
 81af266:	c3                   	ret
 81af267:	90                   	nop

```

```c
// nexon::cash::UDPSocket::setOptResizeRecvBuf @ 0x81af210

/* nexon::cash::UDPSocket::setOptResizeRecvBuf(int) */

undefined4 __thiscall nexon::cash::UDPSocket::setOptResizeRecvBuf(UDPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,8,&param_1,4);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## setOptResizeSendBuf

```asm
// === 081af1b8 nexon::cash::UDPSocket::setOptResizeSendBuf  [0x081af1b8-0x81af20f] ===
 81af1b8:	55                   	push   %ebp
 81af1b9:	89 e5                	mov    %esp,%ebp
 81af1bb:	83 ec 38             	sub    $0x38,%esp
 81af1be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81af1c1:	85 c0                	test   %eax,%eax
 81af1c3:	7f 07                	jg     81af1cc <_ZN5nexon4cash9UDPSocket19setOptResizeSendBufEi+0x14>
 81af1c5:	b8 00 00 00 00       	mov    $0x0,%eax
 81af1ca:	eb 41                	jmp    81af20d <_ZN5nexon4cash9UDPSocket19setOptResizeSendBufEi+0x55>
 81af1cc:	8b 45 08             	mov    0x8(%ebp),%eax
 81af1cf:	8b 00                	mov    (%eax),%eax
 81af1d1:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 81af1d8:	00 
 81af1d9:	8d 55 0c             	lea    0xc(%ebp),%edx
 81af1dc:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81af1e0:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 81af1e7:	00 
 81af1e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81af1ef:	00 
 81af1f0:	89 04 24             	mov    %eax,(%esp)
 81af1f3:	e8 a8 f0 ec ff       	call   807e2a0 <setsockopt@plt>
 81af1f8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81af1fb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81af1ff:	79 07                	jns    81af208 <_ZN5nexon4cash9UDPSocket19setOptResizeSendBufEi+0x50>
 81af201:	b8 00 00 00 00       	mov    $0x0,%eax
 81af206:	eb 05                	jmp    81af20d <_ZN5nexon4cash9UDPSocket19setOptResizeSendBufEi+0x55>
 81af208:	b8 01 00 00 00       	mov    $0x1,%eax
 81af20d:	c9                   	leave
 81af20e:	c3                   	ret
 81af20f:	90                   	nop

```

```c
// nexon::cash::UDPSocket::setOptResizeSendBuf @ 0x81af1b8

/* nexon::cash::UDPSocket::setOptResizeSendBuf(int) */

undefined4 __thiscall nexon::cash::UDPSocket::setOptResizeSendBuf(UDPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,7,&param_1,4);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

```

---

## ~UDPSocket

```asm
// === 081aed44 nexon::cash::UDPSocket::~UDPSocket  [0x081aed44-0x81aed57] ===
 81aed44:	55                   	push   %ebp
 81aed45:	89 e5                	mov    %esp,%ebp
 81aed47:	83 ec 18             	sub    $0x18,%esp
 81aed4a:	8b 45 08             	mov    0x8(%ebp),%eax
 81aed4d:	89 04 24             	mov    %eax,(%esp)
 81aed50:	e8 2f 04 00 00       	call   81af184 <_ZN5nexon4cash9UDPSocket5closeEv>
 81aed55:	c9                   	leave
 81aed56:	c3                   	ret
 81aed57:	90                   	nop

```

```c
// nexon::cash::UDPSocket::~UDPSocket @ 0x81aed44

/* nexon::cash::UDPSocket::~UDPSocket() */

void __thiscall nexon::cash::UDPSocket::~UDPSocket(UDPSocket *this)

{
  close(this);
  return;
}

```

