# DbmwClient

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## Close

```asm
// === 08120ab0 DbmwClient::Close  [0x08120ab0-0x8120af5] ===
 8120ab0:	55                   	push   %ebp
 8120ab1:	89 e5                	mov    %esp,%ebp
 8120ab3:	83 ec 18             	sub    $0x18,%esp
 8120ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ab9:	8b 40 08             	mov    0x8(%eax),%eax
 8120abc:	89 04 24             	mov    %eax,(%esp)
 8120abf:	e8 9c cd f5 ff       	call   807d860 <close@plt>
 8120ac4:	83 f8 ff             	cmp    $0xffffffff,%eax
 8120ac7:	0f 94 c0             	sete   %al
 8120aca:	84 c0                	test   %al,%al
 8120acc:	74 09                	je     8120ad7 <_ZN10DbmwClient5CloseEv+0x27>
 8120ace:	e8 9d d2 f5 ff       	call   807dd70 <__errno_location@plt>
 8120ad3:	8b 00                	mov    (%eax),%eax
 8120ad5:	eb 1d                	jmp    8120af4 <_ZN10DbmwClient5CloseEv+0x44>
 8120ad7:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ada:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 8120ade:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ae1:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 8120ae5:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ae8:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 8120aef:	b8 00 00 00 00       	mov    $0x0,%eax
 8120af4:	c9                   	leave
 8120af5:	c3                   	ret

```

```c
// DbmwClient::Close @ 0x8120ab0

/* DbmwClient::Close() */

int __thiscall DbmwClient::Close(DbmwClient *this)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = close(*(int *)(this + 8));
  if (iVar1 == -1) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
  }
  else {
    this[2] = (DbmwClient)0x0;
    this[1] = (DbmwClient)0x0;
    *(undefined4 *)(this + 8) = 0xffffffff;
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## Connect

```asm
// === 081209fa DbmwClient::Connect  [0x081209fa-0x8120aaf] ===
 81209fa:	55                   	push   %ebp
 81209fb:	89 e5                	mov    %esp,%ebp
 81209fd:	83 ec 18             	sub    $0x18,%esp
 8120a00:	8b 45 08             	mov    0x8(%ebp),%eax
 8120a03:	89 04 24             	mov    %eax,(%esp)
 8120a06:	e8 db fb ff ff       	call   81205e6 <_ZN10DbmwClient4InitEv>
 8120a0b:	85 c0                	test   %eax,%eax
 8120a0d:	0f 95 c0             	setne  %al
 8120a10:	84 c0                	test   %al,%al
 8120a12:	74 0a                	je     8120a1e <_ZN10DbmwClient7ConnectEv+0x24>
 8120a14:	b8 9e ff ff ff       	mov    $0xffffff9e,%eax
 8120a19:	e9 8f 00 00 00       	jmp    8120aad <_ZN10DbmwClient7ConnectEv+0xb3>
 8120a1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8120a21:	0f b6 40 02          	movzbl 0x2(%eax),%eax
 8120a25:	84 c0                	test   %al,%al
 8120a27:	74 07                	je     8120a30 <_ZN10DbmwClient7ConnectEv+0x36>
 8120a29:	b8 a0 ff ff ff       	mov    $0xffffffa0,%eax
 8120a2e:	eb 7d                	jmp    8120aad <_ZN10DbmwClient7ConnectEv+0xb3>
 8120a30:	8b 45 08             	mov    0x8(%ebp),%eax
 8120a33:	83 c0 1c             	add    $0x1c,%eax
 8120a36:	89 c2                	mov    %eax,%edx
 8120a38:	8b 45 08             	mov    0x8(%ebp),%eax
 8120a3b:	8b 40 08             	mov    0x8(%eax),%eax
 8120a3e:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8120a45:	00 
 8120a46:	89 54 24 04          	mov    %edx,0x4(%esp)
 8120a4a:	89 04 24             	mov    %eax,(%esp)
 8120a4d:	e8 de d7 f5 ff       	call   807e230 <connect@plt>
 8120a52:	83 f8 ff             	cmp    $0xffffffff,%eax
 8120a55:	0f 94 c0             	sete   %al
 8120a58:	84 c0                	test   %al,%al
 8120a5a:	74 2c                	je     8120a88 <_ZN10DbmwClient7ConnectEv+0x8e>
 8120a5c:	e8 0f d3 f5 ff       	call   807dd70 <__errno_location@plt>
 8120a61:	8b 00                	mov    (%eax),%eax
 8120a63:	83 f8 73             	cmp    $0x73,%eax
 8120a66:	75 19                	jne    8120a81 <_ZN10DbmwClient7ConnectEv+0x87>
 8120a68:	8b 45 08             	mov    0x8(%ebp),%eax
 8120a6b:	89 04 24             	mov    %eax,(%esp)
 8120a6e:	e8 47 ff ff ff       	call   81209ba <_ZN10DbmwClient6RegistEv>
 8120a73:	83 f0 01             	xor    $0x1,%eax
 8120a76:	84 c0                	test   %al,%al
 8120a78:	74 27                	je     8120aa1 <_ZN10DbmwClient7ConnectEv+0xa7>
 8120a7a:	b8 a1 ff ff ff       	mov    $0xffffffa1,%eax
 8120a7f:	eb 2c                	jmp    8120aad <_ZN10DbmwClient7ConnectEv+0xb3>
 8120a81:	b8 9f ff ff ff       	mov    $0xffffff9f,%eax
 8120a86:	eb 25                	jmp    8120aad <_ZN10DbmwClient7ConnectEv+0xb3>
 8120a88:	8b 45 08             	mov    0x8(%ebp),%eax
 8120a8b:	89 04 24             	mov    %eax,(%esp)
 8120a8e:	e8 27 ff ff ff       	call   81209ba <_ZN10DbmwClient6RegistEv>
 8120a93:	83 f0 01             	xor    $0x1,%eax
 8120a96:	84 c0                	test   %al,%al
 8120a98:	74 07                	je     8120aa1 <_ZN10DbmwClient7ConnectEv+0xa7>
 8120a9a:	b8 a1 ff ff ff       	mov    $0xffffffa1,%eax
 8120a9f:	eb 0c                	jmp    8120aad <_ZN10DbmwClient7ConnectEv+0xb3>
 8120aa1:	8b 45 08             	mov    0x8(%ebp),%eax
 8120aa4:	c6 40 02 01          	movb   $0x1,0x2(%eax)
 8120aa8:	b8 00 00 00 00       	mov    $0x0,%eax
 8120aad:	c9                   	leave
 8120aae:	c3                   	ret
 8120aaf:	90                   	nop

```

```c
// DbmwClient::Connect @ 0x81209fa

/* DbmwClient::Connect() */

undefined4 __thiscall DbmwClient::Connect(DbmwClient *this)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  
  iVar2 = Init(this);
  if (iVar2 == 0) {
    if (this[2] == (DbmwClient)0x0) {
      iVar2 = connect(*(int *)(this + 8),(sockaddr *)(this + 0x1c),0x10);
      if (iVar2 == -1) {
        piVar4 = __errno_location();
        if (*piVar4 != 0x73) {
          return 0xffffff9f;
        }
        cVar1 = Regist(this);
        if (cVar1 != '\x01') {
          return 0xffffffa1;
        }
      }
      else {
        cVar1 = Regist(this);
        if (cVar1 != '\x01') {
          return 0xffffffa1;
        }
      }
      this[2] = (DbmwClient)0x1;
      uVar3 = 0;
    }
    else {
      uVar3 = 0xffffffa0;
    }
  }
  else {
    uVar3 = 0xffffff9e;
  }
  return uVar3;
}

```

---

## DbmwClient

```asm
// === 08120454 DbmwClient::DbmwClient  [0x08120454-0x81204bd] ===
 8120454:	55                   	push   %ebp
 8120455:	89 e5                	mov    %esp,%ebp
 8120457:	83 ec 18             	sub    $0x18,%esp
 812045a:	8b 45 08             	mov    0x8(%ebp),%eax
 812045d:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 8120461:	8b 45 08             	mov    0x8(%ebp),%eax
 8120464:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 8120468:	8b 45 08             	mov    0x8(%ebp),%eax
 812046b:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 8120472:	c7 04 24 00 02 00 00 	movl   $0x200,(%esp)
 8120479:	e8 42 29 60 00       	call   8722dc0 <_Znaj>
 812047e:	89 c2                	mov    %eax,%edx
 8120480:	8b 45 08             	mov    0x8(%ebp),%eax
 8120483:	89 50 2c             	mov    %edx,0x2c(%eax)
 8120486:	8b 45 08             	mov    0x8(%ebp),%eax
 8120489:	c7 80 38 10 00 00 00 	movl   $0x0,0x1038(%eax)
 8120490:	00 00 00 
 8120493:	8b 45 08             	mov    0x8(%ebp),%eax
 8120496:	83 c0 34             	add    $0x34,%eax
 8120499:	c7 44 24 08 01 10 00 	movl   $0x1001,0x8(%esp)
 81204a0:	00 
 81204a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81204a8:	00 
 81204a9:	89 04 24             	mov    %eax,(%esp)
 81204ac:	e8 0f d8 f5 ff       	call   807dcc0 <memset@plt>
 81204b1:	8b 45 08             	mov    0x8(%ebp),%eax
 81204b4:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 81204bb:	c9                   	leave
 81204bc:	c3                   	ret
 81204bd:	90                   	nop

```

```c
// DbmwClient::DbmwClient @ 0x8120454

/* DbmwClient::DbmwClient() */

void __thiscall DbmwClient::DbmwClient(DbmwClient *this)

{
  void *pvVar1;
  
  this[1] = (DbmwClient)0x0;
  this[2] = (DbmwClient)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  pvVar1 = operator_new__(0x200);
  *(void **)(this + 0x2c) = pvVar1;
  *(undefined4 *)(this + 0x1038) = 0;
  memset(this + 0x34,0,0x1001);
  *(undefined4 *)(this + 4) = 0;
  return;
}

```

---

## DoQuery

```asm
// === 08120cd0 DbmwClient::DoQuery  [0x08120cd0-0x8120dab] ===
 8120cd0:	55                   	push   %ebp
 8120cd1:	89 e5                	mov    %esp,%ebp
 8120cd3:	83 ec 28             	sub    $0x28,%esp
 8120cd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8120cd9:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 8120ce0:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ce3:	83 c0 34             	add    $0x34,%eax
 8120ce6:	89 04 24             	mov    %eax,(%esp)
 8120ce9:	e8 c2 d6 f5 ff       	call   807e3b0 <strlen@plt>
 8120cee:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8120cf1:	81 7d f0 ff 0f 00 00 	cmpl   $0xfff,-0x10(%ebp)
 8120cf8:	7f 06                	jg     8120d00 <_ZN10DbmwClient7DoQueryEv+0x30>
 8120cfa:	83 7d f0 07          	cmpl   $0x7,-0x10(%ebp)
 8120cfe:	7f 0a                	jg     8120d0a <_ZN10DbmwClient7DoQueryEv+0x3a>
 8120d00:	b8 00 00 00 00       	mov    $0x0,%eax
 8120d05:	e9 a0 00 00 00       	jmp    8120daa <_ZN10DbmwClient7DoQueryEv+0xda>
 8120d0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d0d:	8b 80 38 10 00 00    	mov    0x1038(%eax),%eax
 8120d13:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8120d16:	74 0a                	je     8120d22 <_ZN10DbmwClient7DoQueryEv+0x52>
 8120d18:	b8 00 00 00 00       	mov    $0x0,%eax
 8120d1d:	e9 88 00 00 00       	jmp    8120daa <_ZN10DbmwClient7DoQueryEv+0xda>
 8120d22:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d25:	8b 80 38 10 00 00    	mov    0x1038(%eax),%eax
 8120d2b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8120d2f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8120d36:	00 
 8120d37:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d3a:	89 04 24             	mov    %eax,(%esp)
 8120d3d:	e8 12 f9 ff ff       	call   8120654 <_ZN10DbmwClient10SendHeaderEci>
 8120d42:	83 f0 01             	xor    $0x1,%eax
 8120d45:	84 c0                	test   %al,%al
 8120d47:	74 12                	je     8120d5b <_ZN10DbmwClient7DoQueryEv+0x8b>
 8120d49:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d4c:	89 04 24             	mov    %eax,(%esp)
 8120d4f:	e8 5c fd ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8120d54:	b8 00 00 00 00       	mov    $0x0,%eax
 8120d59:	eb 4f                	jmp    8120daa <_ZN10DbmwClient7DoQueryEv+0xda>
 8120d5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d5e:	8b 80 38 10 00 00    	mov    0x1038(%eax),%eax
 8120d64:	89 c2                	mov    %eax,%edx
 8120d66:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d69:	8d 48 34             	lea    0x34(%eax),%ecx
 8120d6c:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d6f:	8b 40 08             	mov    0x8(%eax),%eax
 8120d72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120d79:	00 
 8120d7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8120d7e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8120d82:	89 04 24             	mov    %eax,(%esp)
 8120d85:	e8 b6 cd f5 ff       	call   807db40 <send@plt>
 8120d8a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8120d8d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8120d91:	7f 12                	jg     8120da5 <_ZN10DbmwClient7DoQueryEv+0xd5>
 8120d93:	8b 45 08             	mov    0x8(%ebp),%eax
 8120d96:	89 04 24             	mov    %eax,(%esp)
 8120d99:	e8 12 fd ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8120d9e:	b8 00 00 00 00       	mov    $0x0,%eax
 8120da3:	eb 05                	jmp    8120daa <_ZN10DbmwClient7DoQueryEv+0xda>
 8120da5:	b8 01 00 00 00       	mov    $0x1,%eax
 8120daa:	c9                   	leave
 8120dab:	c3                   	ret

```

```c
// DbmwClient::DoQuery @ 0x8120cd0

/* DbmwClient::DoQuery() */

undefined4 __thiscall DbmwClient::DoQuery(DbmwClient *this)

{
  char cVar1;
  size_t sVar2;
  undefined4 uVar3;
  ssize_t sVar4;
  
  *(undefined4 *)(this + 0x30) = 0;
  sVar2 = strlen((char *)(this + 0x34));
  if (((int)sVar2 < 0x1000) && (7 < (int)sVar2)) {
    if (*(size_t *)(this + 0x1038) == sVar2) {
      cVar1 = SendHeader(this,'\x01',*(int *)(this + 0x1038));
      if (cVar1 == '\x01') {
        sVar4 = ::send(*(int *)(this + 8),this + 0x34,*(size_t *)(this + 0x1038),0);
        if (sVar4 < 1) {
          Close(this);
          uVar3 = 0;
        }
        else {
          uVar3 = 1;
        }
      }
      else {
        Close(this);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## DoReceive

```asm
// === 08120dbc DbmwClient::DoReceive  [0x08120dbc-0x8121155] ===
 8120dbc:	55                   	push   %ebp
 8120dbd:	89 e5                	mov    %esp,%ebp
 8120dbf:	57                   	push   %edi
 8120dc0:	56                   	push   %esi
 8120dc1:	53                   	push   %ebx
 8120dc2:	81 ec 2c 01 00 00    	sub    $0x12c,%esp
 8120dc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8120dcb:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
 8120dd2:	8b 45 08             	mov    0x8(%ebp),%eax
 8120dd5:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8120ddc:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8120de2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8120de5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8120dec:	eb 11                	jmp    8120dff <_ZN10DbmwClient9DoReceiveEv+0x43>
 8120dee:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8120df1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8120df4:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 8120dfb:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8120dff:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 8120e03:	0f 96 c0             	setbe  %al
 8120e06:	84 c0                	test   %al,%al
 8120e08:	75 e4                	jne    8120dee <_ZN10DbmwClient9DoReceiveEv+0x32>
 8120e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8120e0d:	8b 40 08             	mov    0x8(%eax),%eax
 8120e10:	c1 e8 05             	shr    $0x5,%eax
 8120e13:	89 c2                	mov    %eax,%edx
 8120e15:	8b 9c 85 f4 fe ff ff 	mov    -0x10c(%ebp,%eax,4),%ebx
 8120e1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8120e1f:	8b 40 08             	mov    0x8(%eax),%eax
 8120e22:	83 e0 1f             	and    $0x1f,%eax
 8120e25:	be 01 00 00 00       	mov    $0x1,%esi
 8120e2a:	89 f7                	mov    %esi,%edi
 8120e2c:	89 c1                	mov    %eax,%ecx
 8120e2e:	d3 e7                	shl    %cl,%edi
 8120e30:	89 f8                	mov    %edi,%eax
 8120e32:	09 d8                	or     %ebx,%eax
 8120e34:	89 84 95 f4 fe ff ff 	mov    %eax,-0x10c(%ebp,%edx,4)
 8120e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8120e3e:	8d 48 14             	lea    0x14(%eax),%ecx
 8120e41:	8b 45 08             	mov    0x8(%ebp),%eax
 8120e44:	8b 40 08             	mov    0x8(%eax),%eax
 8120e47:	8d 50 01             	lea    0x1(%eax),%edx
 8120e4a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8120e4e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120e55:	00 
 8120e56:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8120e5d:	00 
 8120e5e:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 8120e64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8120e68:	89 14 24             	mov    %edx,(%esp)
 8120e6b:	e8 d0 d9 f5 ff       	call   807e840 <select@plt>
 8120e70:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8120e73:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 8120e77:	7f 71                	jg     8120eea <_ZN10DbmwClient9DoReceiveEv+0x12e>
 8120e79:	e8 f2 ce f5 ff       	call   807dd70 <__errno_location@plt>
 8120e7e:	8b 00                	mov    (%eax),%eax
 8120e80:	89 04 24             	mov    %eax,(%esp)
 8120e83:	e8 a8 c8 f5 ff       	call   807d730 <strerror@plt>
 8120e88:	89 c3                	mov    %eax,%ebx
 8120e8a:	e8 e1 ce f5 ff       	call   807dd70 <__errno_location@plt>
 8120e8f:	8b 30                	mov    (%eax),%esi
 8120e91:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120e98:	00 
 8120e99:	c7 44 24 08 5e 02 00 	movl   $0x25e,0x8(%esp)
 8120ea0:	00 
 8120ea1:	c7 44 24 04 9f a4 b5 	movl   $0x8b5a49f,0x4(%esp)
 8120ea8:	08 
 8120ea9:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8120eaf:	89 04 24             	mov    %eax,(%esp)
 8120eb2:	e8 61 e8 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120eb7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8120ebb:	89 74 24 08          	mov    %esi,0x8(%esp)
 8120ebf:	c7 44 24 04 00 9d b5 	movl   $0x8b59d00,0x4(%esp)
 8120ec6:	08 
 8120ec7:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8120ecd:	89 04 24             	mov    %eax,(%esp)
 8120ed0:	e8 b3 e8 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8120ed5:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ed8:	89 04 24             	mov    %eax,(%esp)
 8120edb:	e8 d0 fb ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8120ee0:	b8 00 00 00 00       	mov    $0x0,%eax
 8120ee5:	e9 61 02 00 00       	jmp    812114b <_ZN10DbmwClient9DoReceiveEv+0x38f>
 8120eea:	8b 45 08             	mov    0x8(%ebp),%eax
 8120eed:	8b 40 08             	mov    0x8(%eax),%eax
 8120ef0:	c1 e8 05             	shr    $0x5,%eax
 8120ef3:	8b 94 85 f4 fe ff ff 	mov    -0x10c(%ebp,%eax,4),%edx
 8120efa:	8b 45 08             	mov    0x8(%ebp),%eax
 8120efd:	8b 40 08             	mov    0x8(%eax),%eax
 8120f00:	83 e0 1f             	and    $0x1f,%eax
 8120f03:	89 d3                	mov    %edx,%ebx
 8120f05:	89 c1                	mov    %eax,%ecx
 8120f07:	d3 fb                	sar    %cl,%ebx
 8120f09:	89 d8                	mov    %ebx,%eax
 8120f0b:	83 e0 01             	and    $0x1,%eax
 8120f0e:	83 f0 01             	xor    $0x1,%eax
 8120f11:	84 c0                	test   %al,%al
 8120f13:	75 d5                	jne    8120eea <_ZN10DbmwClient9DoReceiveEv+0x12e>
 8120f15:	c7 45 c4 12 00 00 00 	movl   $0x12,-0x3c(%ebp)
 8120f1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8120f1f:	8b 40 2c             	mov    0x2c(%eax),%eax
 8120f22:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8120f25:	89 54 24 08          	mov    %edx,0x8(%esp)
 8120f29:	89 44 24 04          	mov    %eax,0x4(%esp)
 8120f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8120f30:	89 04 24             	mov    %eax,(%esp)
 8120f33:	e8 fa fb ff ff       	call   8120b32 <_ZN10DbmwClient8ReadDataEPci>
 8120f38:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8120f3b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8120f3e:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 8120f41:	74 5f                	je     8120fa2 <_ZN10DbmwClient9DoReceiveEv+0x1e6>
 8120f43:	83 7d c8 ff          	cmpl   $0xffffffff,-0x38(%ebp)
 8120f47:	74 44                	je     8120f8d <_ZN10DbmwClient9DoReceiveEv+0x1d1>
 8120f49:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120f50:	00 
 8120f51:	c7 44 24 08 71 02 00 	movl   $0x271,0x8(%esp)
 8120f58:	00 
 8120f59:	c7 44 24 04 9f a4 b5 	movl   $0x8b5a49f,0x4(%esp)
 8120f60:	08 
 8120f61:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8120f64:	89 04 24             	mov    %eax,(%esp)
 8120f67:	e8 ac e7 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120f6c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8120f6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8120f73:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8120f76:	89 44 24 08          	mov    %eax,0x8(%esp)
 8120f7a:	c7 44 24 04 fc 9d b5 	movl   $0x8b59dfc,0x4(%esp)
 8120f81:	08 
 8120f82:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8120f85:	89 04 24             	mov    %eax,(%esp)
 8120f88:	e8 fb e7 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8120f8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8120f90:	89 04 24             	mov    %eax,(%esp)
 8120f93:	e8 18 fb ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8120f98:	b8 00 00 00 00       	mov    $0x0,%eax
 8120f9d:	e9 a9 01 00 00       	jmp    812114b <_ZN10DbmwClient9DoReceiveEv+0x38f>
 8120fa2:	8b 45 08             	mov    0x8(%ebp),%eax
 8120fa5:	8b 40 2c             	mov    0x2c(%eax),%eax
 8120fa8:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 8120fac:	0f be c0             	movsbl %al,%eax
 8120faf:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8120fb2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120fb9:	00 
 8120fba:	c7 44 24 08 78 02 00 	movl   $0x278,0x8(%esp)
 8120fc1:	00 
 8120fc2:	c7 44 24 04 9f a4 b5 	movl   $0x8b5a49f,0x4(%esp)
 8120fc9:	08 
 8120fca:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8120fcd:	89 04 24             	mov    %eax,(%esp)
 8120fd0:	e8 43 e7 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120fd5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8120fd8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8120fdc:	c7 44 24 04 59 9d b5 	movl   $0x8b59d59,0x4(%esp)
 8120fe3:	08 
 8120fe4:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8120fe7:	89 04 24             	mov    %eax,(%esp)
 8120fea:	e8 99 e7 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8120fef:	83 7d d0 01          	cmpl   $0x1,-0x30(%ebp)
 8120ff3:	75 15                	jne    812100a <_ZN10DbmwClient9DoReceiveEv+0x24e>
 8120ff5:	8b 45 08             	mov    0x8(%ebp),%eax
 8120ff8:	89 04 24             	mov    %eax,(%esp)
 8120ffb:	e8 b0 fa ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8121000:	b8 01 00 00 00       	mov    $0x1,%eax
 8121005:	e9 41 01 00 00       	jmp    812114b <_ZN10DbmwClient9DoReceiveEv+0x38f>
 812100a:	8b 45 08             	mov    0x8(%ebp),%eax
 812100d:	8b 40 2c             	mov    0x2c(%eax),%eax
 8121010:	8b 40 02             	mov    0x2(%eax),%eax
 8121013:	83 f8 1a             	cmp    $0x1a,%eax
 8121016:	76 41                	jbe    8121059 <_ZN10DbmwClient9DoReceiveEv+0x29d>
 8121018:	8b 45 08             	mov    0x8(%ebp),%eax
 812101b:	89 04 24             	mov    %eax,(%esp)
 812101e:	e8 8d fa ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8121023:	c7 44 24 10 34 9e b5 	movl   $0x8b59e34,0x10(%esp)
 812102a:	08 
 812102b:	c7 44 24 0c 84 02 00 	movl   $0x284,0xc(%esp)
 8121032:	00 
 8121033:	c7 44 24 08 9f a4 b5 	movl   $0x8b5a49f,0x8(%esp)
 812103a:	08 
 812103b:	c7 44 24 04 a4 9d b5 	movl   $0x8b59da4,0x4(%esp)
 8121042:	08 
 8121043:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 812104a:	e8 bb 2b 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 812104f:	b8 00 00 00 00       	mov    $0x0,%eax
 8121054:	e9 f2 00 00 00       	jmp    812114b <_ZN10DbmwClient9DoReceiveEv+0x38f>
 8121059:	8b 45 08             	mov    0x8(%ebp),%eax
 812105c:	8b 40 2c             	mov    0x2c(%eax),%eax
 812105f:	8b 40 02             	mov    0x2(%eax),%eax
 8121062:	83 e8 12             	sub    $0x12,%eax
 8121065:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8121068:	8b 45 08             	mov    0x8(%ebp),%eax
 812106b:	8b 40 2c             	mov    0x2c(%eax),%eax
 812106e:	8d 50 12             	lea    0x12(%eax),%edx
 8121071:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8121074:	89 44 24 08          	mov    %eax,0x8(%esp)
 8121078:	89 54 24 04          	mov    %edx,0x4(%esp)
 812107c:	8b 45 08             	mov    0x8(%ebp),%eax
 812107f:	89 04 24             	mov    %eax,(%esp)
 8121082:	e8 ab fa ff ff       	call   8120b32 <_ZN10DbmwClient8ReadDataEPci>
 8121087:	89 45 c8             	mov    %eax,-0x38(%ebp)
 812108a:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 812108d:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 8121090:	74 55                	je     81210e7 <_ZN10DbmwClient9DoReceiveEv+0x32b>
 8121092:	83 7d c8 ff          	cmpl   $0xffffffff,-0x38(%ebp)
 8121096:	74 3d                	je     81210d5 <_ZN10DbmwClient9DoReceiveEv+0x319>
 8121098:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812109f:	00 
 81210a0:	c7 44 24 08 90 02 00 	movl   $0x290,0x8(%esp)
 81210a7:	00 
 81210a8:	c7 44 24 04 9f a4 b5 	movl   $0x8b5a49f,0x4(%esp)
 81210af:	08 
 81210b0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81210b3:	89 04 24             	mov    %eax,(%esp)
 81210b6:	e8 5d e6 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81210bb:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81210be:	89 44 24 08          	mov    %eax,0x8(%esp)
 81210c2:	c7 44 24 04 60 9e b5 	movl   $0x8b59e60,0x4(%esp)
 81210c9:	08 
 81210ca:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81210cd:	89 04 24             	mov    %eax,(%esp)
 81210d0:	e8 b3 e6 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81210d5:	8b 45 08             	mov    0x8(%ebp),%eax
 81210d8:	89 04 24             	mov    %eax,(%esp)
 81210db:	e8 d0 f9 ff ff       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 81210e0:	b8 00 00 00 00       	mov    $0x0,%eax
 81210e5:	eb 64                	jmp    812114b <_ZN10DbmwClient9DoReceiveEv+0x38f>
 81210e7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81210ee:	00 
 81210ef:	c7 44 24 08 96 02 00 	movl   $0x296,0x8(%esp)
 81210f6:	00 
 81210f7:	c7 44 24 04 9f a4 b5 	movl   $0x8b5a49f,0x4(%esp)
 81210fe:	08 
 81210ff:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8121102:	89 04 24             	mov    %eax,(%esp)
 8121105:	e8 0e e6 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 812110a:	c7 44 24 04 87 9e b5 	movl   $0x8b59e87,0x4(%esp)
 8121111:	08 
 8121112:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8121115:	89 04 24             	mov    %eax,(%esp)
 8121118:	e8 6b e6 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812111d:	8b 45 08             	mov    0x8(%ebp),%eax
 8121120:	8b 40 2c             	mov    0x2c(%eax),%eax
 8121123:	83 c0 12             	add    $0x12,%eax
 8121126:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8121129:	8b 45 d8             	mov    -0x28(%ebp),%eax
 812112c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 812112f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8121132:	8b 00                	mov    (%eax),%eax
 8121134:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8121137:	83 45 dc 04          	addl   $0x4,-0x24(%ebp)
 812113b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 812113e:	8b 10                	mov    (%eax),%edx
 8121140:	8b 45 08             	mov    0x8(%ebp),%eax
 8121143:	89 50 30             	mov    %edx,0x30(%eax)
 8121146:	b8 02 00 00 00       	mov    $0x2,%eax
 812114b:	81 c4 2c 01 00 00    	add    $0x12c,%esp
 8121151:	5b                   	pop    %ebx
 8121152:	5e                   	pop    %esi
 8121153:	5f                   	pop    %edi
 8121154:	5d                   	pop    %ebp
 8121155:	c3                   	ret

```

```c
// DbmwClient::DoReceive @ 0x8120dbc

/* DbmwClient::DoReceive() */

undefined4 __thiscall DbmwClient::DoReceive(DbmwClient *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  fd_set local_110;
  cMyTrace local_90 [16];
  cMyTrace local_80 [16];
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_24;
  fd_set *local_20;
  
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  local_20 = &local_110;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_110.fds_bits[local_24] = 0;
  }
  local_110.fds_bits[*(uint *)(this + 8) >> 5] =
       1 << ((byte)*(undefined4 *)(this + 8) & 0x1f) | local_110.fds_bits[*(uint *)(this + 8) >> 5];
  local_38 = select(*(int *)(this + 8) + 1,&local_110,(fd_set *)0x0,(fd_set *)0x0,
                    (timeval *)(this + 0x14));
  if (local_38 < 1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    cMyTrace::cMyTrace(local_90,"DoReceive",0x25e,0);
    cMyTrace::operator()(local_90,"AccountDBMW select error : %d(%s)",iVar1,pcVar3);
    Close(this);
    uVar4 = 0;
  }
  else {
    do {
    } while (((byte)(local_110.fds_bits[*(uint *)(this + 8) >> 5] >>
                    ((byte)*(undefined4 *)(this + 8) & 0x1f)) & 1) != 1);
    local_40 = 0x12;
    local_3c = ReadData(this,*(char **)(this + 0x2c),0x12);
    if (local_40 == local_3c) {
      local_34 = (int)*(char *)(*(int *)(this + 0x2c) + 1);
      cMyTrace::cMyTrace(local_70,"DoReceive",0x278,0);
      cMyTrace::operator()(local_70,"AccountDBMW read msg_no : %d",local_34);
      if (local_34 == 1) {
        Close(this);
        uVar4 = 1;
      }
      else if (*(uint *)(*(int *)(this + 0x2c) + 2) < 0x1b) {
        local_40 = *(int *)(*(int *)(this + 0x2c) + 2) + -0x12;
        local_3c = ReadData(this,(char *)(*(int *)(this + 0x2c) + 0x12),local_40);
        if (local_40 == local_3c) {
          cMyTrace::cMyTrace(local_50,"DoReceive",0x296,0);
          cMyTrace::operator()(local_50,"AccountDBMW payload read ok");
          *(undefined4 *)(this + 0x30) = *(undefined4 *)(*(int *)(this + 0x2c) + 0x16);
          uVar4 = 2;
        }
        else {
          if (local_3c != -1) {
            cMyTrace::cMyTrace(local_60,"DoReceive",0x290,0);
            cMyTrace::operator()(local_60,"AccountDBMW payload read size error:%d",local_3c);
          }
          Close(this);
          uVar4 = 0;
        }
      }
      else {
        Close(this);
        LogManager::logFormat
                  (1,"localchina/DbmwClient.cpp","DoReceive",0x284,
                   "AccountDBMW header packet size invalid!!");
        uVar4 = 0;
      }
    }
    else {
      if (local_3c != -1) {
        cMyTrace::cMyTrace(local_80,"DoReceive",0x271,0);
        cMyTrace::operator()
                  (local_80,"AccountDBMW header read size error : %d, expected : %d",local_3c,
                   local_40);
      }
      Close(this);
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## Error

```asm
// === 08120c18 DbmwClient::Error  [0x08120c18-0x8120ccf] ===
 8120c18:	55                   	push   %ebp
 8120c19:	89 e5                	mov    %esp,%ebp
 8120c1b:	53                   	push   %ebx
 8120c1c:	81 ec e4 00 00 00    	sub    $0xe4,%esp
 8120c22:	8d 45 18             	lea    0x18(%ebp),%eax
 8120c25:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8120c28:	e8 43 d1 f5 ff       	call   807dd70 <__errno_location@plt>
 8120c2d:	8b 00                	mov    (%eax),%eax
 8120c2f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8120c32:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8120c35:	89 44 24 08          	mov    %eax,0x8(%esp)
 8120c39:	8b 45 14             	mov    0x14(%ebp),%eax
 8120c3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8120c40:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8120c46:	89 04 24             	mov    %eax,(%esp)
 8120c49:	e8 82 cb f5 ff       	call   807d7d0 <vsprintf@plt>
 8120c4e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8120c52:	74 3b                	je     8120c8f <_ZN10DbmwClient5ErrorEiiPcz+0x77>
 8120c54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8120c57:	89 04 24             	mov    %eax,(%esp)
 8120c5a:	e8 d1 ca f5 ff       	call   807d730 <strerror@plt>
 8120c5f:	89 c3                	mov    %eax,%ebx
 8120c61:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8120c67:	89 04 24             	mov    %eax,(%esp)
 8120c6a:	e8 41 d7 f5 ff       	call   807e3b0 <strlen@plt>
 8120c6f:	89 c2                	mov    %eax,%edx
 8120c71:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8120c77:	01 d0                	add    %edx,%eax
 8120c79:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8120c7d:	c7 44 24 04 f4 9d b5 	movl   $0x8b59df4,0x4(%esp)
 8120c84:	08 
 8120c85:	89 04 24             	mov    %eax,(%esp)
 8120c88:	e8 b3 d7 f5 ff       	call   807e440 <sprintf@plt>
 8120c8d:	eb 16                	jmp    8120ca5 <_ZN10DbmwClient5ErrorEiiPcz+0x8d>
 8120c8f:	c7 44 24 04 fa 9d b5 	movl   $0x8b59dfa,0x4(%esp)
 8120c96:	08 
 8120c97:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8120c9d:	89 04 24             	mov    %eax,(%esp)
 8120ca0:	e8 bb d0 f5 ff       	call   807dd60 <strcat@plt>
 8120ca5:	a1 c4 56 3f 09       	mov    0x93f56c4,%eax
 8120caa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8120cae:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 8120cb4:	89 04 24             	mov    %eax,(%esp)
 8120cb7:	e8 64 da f5 ff       	call   807e720 <fputs@plt>
 8120cbc:	e8 af d0 f5 ff       	call   807dd70 <__errno_location@plt>
 8120cc1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8120cc4:	89 10                	mov    %edx,(%eax)
 8120cc6:	81 c4 e4 00 00 00    	add    $0xe4,%esp
 8120ccc:	5b                   	pop    %ebx
 8120ccd:	5d                   	pop    %ebp
 8120cce:	c3                   	ret
 8120ccf:	90                   	nop

```

```c
// DbmwClient::Error @ 0x8120c18

/* DbmwClient::Error(int, int, char*, ...) */

void __thiscall DbmwClient::Error(DbmwClient *this,int param_1,int param_2,char *param_3,...)

{
  int *piVar1;
  char *pcVar2;
  size_t sVar3;
  char local_dc [200];
  undefined1 *local_14;
  int local_10;
  
  local_14 = &stack0x00000014;
  piVar1 = __errno_location();
  local_10 = *piVar1;
  vsprintf(local_dc,param_3,local_14);
  if (param_2 == 0) {
    strcat(local_dc,"\n");
  }
  else {
    pcVar2 = strerror(local_10);
    sVar3 = strlen(local_dc);
    sprintf(local_dc + sVar3,": %s\n",pcVar2);
  }
  fputs(local_dc,stderr);
  piVar1 = __errno_location();
  *piVar1 = local_10;
  return;
}

```

---

## Init

```asm
// === 081205e6 DbmwClient::Init  [0x081205e6-0x8120653] ===
 81205e6:	55                   	push   %ebp
 81205e7:	89 e5                	mov    %esp,%ebp
 81205e9:	83 ec 18             	sub    $0x18,%esp
 81205ec:	8b 45 08             	mov    0x8(%ebp),%eax
 81205ef:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81205f3:	84 c0                	test   %al,%al
 81205f5:	74 07                	je     81205fe <_ZN10DbmwClient4InitEv+0x18>
 81205f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81205fc:	eb 54                	jmp    8120652 <_ZN10DbmwClient4InitEv+0x6c>
 81205fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8120605:	00 
 8120606:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 812060d:	00 
 812060e:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
 8120615:	e8 96 d4 f5 ff       	call   807dab0 <socket@plt>
 812061a:	8b 55 08             	mov    0x8(%ebp),%edx
 812061d:	89 42 08             	mov    %eax,0x8(%edx)
 8120620:	8b 45 08             	mov    0x8(%ebp),%eax
 8120623:	8b 40 08             	mov    0x8(%eax),%eax
 8120626:	83 f8 ff             	cmp    $0xffffffff,%eax
 8120629:	75 07                	jne    8120632 <_ZN10DbmwClient4InitEv+0x4c>
 812062b:	b8 9c ff ff ff       	mov    $0xffffff9c,%eax
 8120630:	eb 20                	jmp    8120652 <_ZN10DbmwClient4InitEv+0x6c>
 8120632:	8b 45 08             	mov    0x8(%ebp),%eax
 8120635:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 812063c:	8b 45 08             	mov    0x8(%ebp),%eax
 812063f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8120646:	8b 45 08             	mov    0x8(%ebp),%eax
 8120649:	c6 40 01 01          	movb   $0x1,0x1(%eax)
 812064d:	b8 00 00 00 00       	mov    $0x0,%eax
 8120652:	c9                   	leave
 8120653:	c3                   	ret

```

```c
// DbmwClient::Init @ 0x81205e6

/* DbmwClient::Init() */

undefined4 __thiscall DbmwClient::Init(DbmwClient *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (this[1] == (DbmwClient)0x0) {
    iVar2 = socket(2,1,0);
    *(int *)(this + 8) = iVar2;
    if (*(int *)(this + 8) == -1) {
      uVar1 = 0xffffff9c;
    }
    else {
      *(undefined4 *)(this + 0xc) = 0;
      *(undefined4 *)(this + 0x10) = 0;
      this[1] = (DbmwClient)0x1;
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

## ReadData

```asm
// === 08120b32 DbmwClient::ReadData  [0x08120b32-0x8120c17] ===
 8120b32:	55                   	push   %ebp
 8120b33:	89 e5                	mov    %esp,%ebp
 8120b35:	53                   	push   %ebx
 8120b36:	83 ec 34             	sub    $0x34,%esp
 8120b39:	8b 45 10             	mov    0x10(%ebp),%eax
 8120b3c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8120b3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8120b42:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8120b45:	e9 b6 00 00 00       	jmp    8120c00 <_ZN10DbmwClient8ReadDataEPci+0xce>
 8120b4a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8120b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8120b50:	8b 40 08             	mov    0x8(%eax),%eax
 8120b53:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120b5a:	00 
 8120b5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8120b5f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8120b62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8120b66:	89 04 24             	mov    %eax,(%esp)
 8120b69:	e8 d2 d6 f5 ff       	call   807e240 <recv@plt>
 8120b6e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8120b71:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8120b75:	79 66                	jns    8120bdd <_ZN10DbmwClient8ReadDataEPci+0xab>
 8120b77:	e8 f4 d1 f5 ff       	call   807dd70 <__errno_location@plt>
 8120b7c:	8b 00                	mov    (%eax),%eax
 8120b7e:	83 f8 04             	cmp    $0x4,%eax
 8120b81:	74 7c                	je     8120bff <_ZN10DbmwClient8ReadDataEPci+0xcd>
 8120b83:	e8 e8 d1 f5 ff       	call   807dd70 <__errno_location@plt>
 8120b88:	8b 00                	mov    (%eax),%eax
 8120b8a:	89 04 24             	mov    %eax,(%esp)
 8120b8d:	e8 9e cb f5 ff       	call   807d730 <strerror@plt>
 8120b92:	89 c3                	mov    %eax,%ebx
 8120b94:	e8 d7 d1 f5 ff       	call   807dd70 <__errno_location@plt>
 8120b99:	8b 00                	mov    (%eax),%eax
 8120b9b:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8120b9f:	89 44 24 18          	mov    %eax,0x18(%esp)
 8120ba3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8120ba6:	89 44 24 14          	mov    %eax,0x14(%esp)
 8120baa:	c7 44 24 10 c0 9d b5 	movl   $0x8b59dc0,0x10(%esp)
 8120bb1:	08 
 8120bb2:	c7 44 24 0c dd 01 00 	movl   $0x1dd,0xc(%esp)
 8120bb9:	00 
 8120bba:	c7 44 24 08 aa a4 b5 	movl   $0x8b5a4aa,0x8(%esp)
 8120bc1:	08 
 8120bc2:	c7 44 24 04 a4 9d b5 	movl   $0x8b59da4,0x4(%esp)
 8120bc9:	08 
 8120bca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8120bd1:	e8 34 30 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8120bd6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8120bdb:	eb 35                	jmp    8120c12 <_ZN10DbmwClient8ReadDataEPci+0xe0>
 8120bdd:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8120be1:	75 0e                	jne    8120bf1 <_ZN10DbmwClient8ReadDataEPci+0xbf>
 8120be3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8120be6:	8b 55 10             	mov    0x10(%ebp),%edx
 8120be9:	89 d1                	mov    %edx,%ecx
 8120beb:	29 c1                	sub    %eax,%ecx
 8120bed:	89 c8                	mov    %ecx,%eax
 8120bef:	eb 21                	jmp    8120c12 <_ZN10DbmwClient8ReadDataEPci+0xe0>
 8120bf1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8120bf4:	01 45 f4             	add    %eax,-0xc(%ebp)
 8120bf7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8120bfa:	29 45 f0             	sub    %eax,-0x10(%ebp)
 8120bfd:	eb 01                	jmp    8120c00 <_ZN10DbmwClient8ReadDataEPci+0xce>
 8120bff:	90                   	nop
 8120c00:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8120c04:	0f 9f c0             	setg   %al
 8120c07:	84 c0                	test   %al,%al
 8120c09:	0f 85 3b ff ff ff    	jne    8120b4a <_ZN10DbmwClient8ReadDataEPci+0x18>
 8120c0f:	8b 45 10             	mov    0x10(%ebp),%eax
 8120c12:	83 c4 34             	add    $0x34,%esp
 8120c15:	5b                   	pop    %ebx
 8120c16:	5d                   	pop    %ebp
 8120c17:	c3                   	ret

```

```c
// DbmwClient::ReadData @ 0x8120b32

/* DbmwClient::ReadData(char*, int) */

int __thiscall DbmwClient::ReadData(DbmwClient *this,char *param_1,int param_2)

{
  ssize_t sVar1;
  int *piVar2;
  char *pcVar3;
  size_t local_14;
  char *local_10;
  
  local_14 = param_2;
  local_10 = param_1;
  while( true ) {
    while( true ) {
      if ((int)local_14 < 1) {
        return param_2;
      }
      sVar1 = recv(*(int *)(this + 8),local_10,local_14,0);
      if (-1 < sVar1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        piVar2 = __errno_location();
        pcVar3 = strerror(*piVar2);
        piVar2 = __errno_location();
        LogManager::logFormat
                  (1,"localchina/DbmwClient.cpp","ReadData",0x1dd,
                   "AccountDBMW read error; recv result:%d, errno:%d:%s",sVar1,*piVar2,pcVar3);
        return -1;
      }
    }
    if (sVar1 == 0) break;
    local_10 = local_10 + sVar1;
    local_14 = local_14 - sVar1;
  }
  return param_2 - local_14;
}

```

---

## ReceiveRegistAck

```asm
// === 08120702 DbmwClient::ReceiveRegistAck  [0x08120702-0x81209b9] ===
 8120702:	55                   	push   %ebp
 8120703:	89 e5                	mov    %esp,%ebp
 8120705:	57                   	push   %edi
 8120706:	56                   	push   %esi
 8120707:	53                   	push   %ebx
 8120708:	81 ec 0c 01 00 00    	sub    $0x10c,%esp
 812070e:	8b 45 08             	mov    0x8(%ebp),%eax
 8120711:	c7 40 14 02 00 00 00 	movl   $0x2,0x14(%eax)
 8120718:	8b 45 08             	mov    0x8(%ebp),%eax
 812071b:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8120722:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8120728:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 812072b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8120732:	eb 11                	jmp    8120745 <_ZN10DbmwClient16ReceiveRegistAckEv+0x43>
 8120734:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8120737:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 812073a:	c7 04 90 00 00 00 00 	movl   $0x0,(%eax,%edx,4)
 8120741:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8120745:	83 7d e0 1f          	cmpl   $0x1f,-0x20(%ebp)
 8120749:	0f 96 c0             	setbe  %al
 812074c:	84 c0                	test   %al,%al
 812074e:	75 e4                	jne    8120734 <_ZN10DbmwClient16ReceiveRegistAckEv+0x32>
 8120750:	8b 45 08             	mov    0x8(%ebp),%eax
 8120753:	8b 40 08             	mov    0x8(%eax),%eax
 8120756:	c1 e8 05             	shr    $0x5,%eax
 8120759:	89 c2                	mov    %eax,%edx
 812075b:	8b 9c 85 10 ff ff ff 	mov    -0xf0(%ebp,%eax,4),%ebx
 8120762:	8b 45 08             	mov    0x8(%ebp),%eax
 8120765:	8b 40 08             	mov    0x8(%eax),%eax
 8120768:	83 e0 1f             	and    $0x1f,%eax
 812076b:	be 01 00 00 00       	mov    $0x1,%esi
 8120770:	89 f7                	mov    %esi,%edi
 8120772:	89 c1                	mov    %eax,%ecx
 8120774:	d3 e7                	shl    %cl,%edi
 8120776:	89 f8                	mov    %edi,%eax
 8120778:	09 d8                	or     %ebx,%eax
 812077a:	89 84 95 10 ff ff ff 	mov    %eax,-0xf0(%ebp,%edx,4)
 8120781:	8b 45 08             	mov    0x8(%ebp),%eax
 8120784:	8d 48 14             	lea    0x14(%eax),%ecx
 8120787:	8b 45 08             	mov    0x8(%ebp),%eax
 812078a:	8b 40 08             	mov    0x8(%eax),%eax
 812078d:	8d 50 01             	lea    0x1(%eax),%edx
 8120790:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8120794:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812079b:	00 
 812079c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81207a3:	00 
 81207a4:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 81207aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 81207ae:	89 14 24             	mov    %edx,(%esp)
 81207b1:	e8 8a e0 f5 ff       	call   807e840 <select@plt>
 81207b6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81207b9:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81207bd:	7f 6b                	jg     812082a <_ZN10DbmwClient16ReceiveRegistAckEv+0x128>
 81207bf:	e8 ac d5 f5 ff       	call   807dd70 <__errno_location@plt>
 81207c4:	8b 00                	mov    (%eax),%eax
 81207c6:	89 04 24             	mov    %eax,(%esp)
 81207c9:	e8 62 cf f5 ff       	call   807d730 <strerror@plt>
 81207ce:	89 c3                	mov    %eax,%ebx
 81207d0:	e8 9b d5 f5 ff       	call   807dd70 <__errno_location@plt>
 81207d5:	8b 30                	mov    (%eax),%esi
 81207d7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81207de:	00 
 81207df:	c7 44 24 08 fd 00 00 	movl   $0xfd,0x8(%esp)
 81207e6:	00 
 81207e7:	c7 44 24 04 b3 a4 b5 	movl   $0x8b5a4b3,0x4(%esp)
 81207ee:	08 
 81207ef:	8d 45 90             	lea    -0x70(%ebp),%eax
 81207f2:	89 04 24             	mov    %eax,(%esp)
 81207f5:	e8 1e ef 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81207fa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81207fe:	89 74 24 08          	mov    %esi,0x8(%esp)
 8120802:	c7 44 24 04 00 9d b5 	movl   $0x8b59d00,0x4(%esp)
 8120809:	08 
 812080a:	8d 45 90             	lea    -0x70(%ebp),%eax
 812080d:	89 04 24             	mov    %eax,(%esp)
 8120810:	e8 73 ef 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8120815:	8b 45 08             	mov    0x8(%ebp),%eax
 8120818:	89 04 24             	mov    %eax,(%esp)
 812081b:	e8 90 02 00 00       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 8120820:	b8 00 00 00 00       	mov    $0x0,%eax
 8120825:	e9 84 01 00 00       	jmp    81209ae <_ZN10DbmwClient16ReceiveRegistAckEv+0x2ac>
 812082a:	8b 45 08             	mov    0x8(%ebp),%eax
 812082d:	8b 40 08             	mov    0x8(%eax),%eax
 8120830:	c1 e8 05             	shr    $0x5,%eax
 8120833:	8b 94 85 10 ff ff ff 	mov    -0xf0(%ebp,%eax,4),%edx
 812083a:	8b 45 08             	mov    0x8(%ebp),%eax
 812083d:	8b 40 08             	mov    0x8(%eax),%eax
 8120840:	83 e0 1f             	and    $0x1f,%eax
 8120843:	89 d3                	mov    %edx,%ebx
 8120845:	89 c1                	mov    %eax,%ecx
 8120847:	d3 fb                	sar    %cl,%ebx
 8120849:	89 d8                	mov    %ebx,%eax
 812084b:	83 e0 01             	and    $0x1,%eax
 812084e:	83 f0 01             	xor    $0x1,%eax
 8120851:	84 c0                	test   %al,%al
 8120853:	75 d5                	jne    812082a <_ZN10DbmwClient16ReceiveRegistAckEv+0x128>
 8120855:	c7 45 d0 12 00 00 00 	movl   $0x12,-0x30(%ebp)
 812085c:	8b 45 08             	mov    0x8(%ebp),%eax
 812085f:	8b 40 2c             	mov    0x2c(%eax),%eax
 8120862:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8120865:	89 54 24 08          	mov    %edx,0x8(%esp)
 8120869:	89 44 24 04          	mov    %eax,0x4(%esp)
 812086d:	8b 45 08             	mov    0x8(%ebp),%eax
 8120870:	89 04 24             	mov    %eax,(%esp)
 8120873:	e8 ba 02 00 00       	call   8120b32 <_ZN10DbmwClient8ReadDataEPci>
 8120878:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 812087b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 812087e:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8120881:	74 5f                	je     81208e2 <_ZN10DbmwClient16ReceiveRegistAckEv+0x1e0>
 8120883:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 8120887:	74 44                	je     81208cd <_ZN10DbmwClient16ReceiveRegistAckEv+0x1cb>
 8120889:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120890:	00 
 8120891:	c7 44 24 08 10 01 00 	movl   $0x110,0x8(%esp)
 8120898:	00 
 8120899:	c7 44 24 04 b3 a4 b5 	movl   $0x8b5a4b3,0x4(%esp)
 81208a0:	08 
 81208a1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81208a4:	89 04 24             	mov    %eax,(%esp)
 81208a7:	e8 6c ee 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81208ac:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81208af:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81208b3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81208b6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81208ba:	c7 44 24 04 24 9d b5 	movl   $0x8b59d24,0x4(%esp)
 81208c1:	08 
 81208c2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81208c5:	89 04 24             	mov    %eax,(%esp)
 81208c8:	e8 bb ee 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81208cd:	8b 45 08             	mov    0x8(%ebp),%eax
 81208d0:	89 04 24             	mov    %eax,(%esp)
 81208d3:	e8 d8 01 00 00       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 81208d8:	b8 00 00 00 00       	mov    $0x0,%eax
 81208dd:	e9 cc 00 00 00       	jmp    81209ae <_ZN10DbmwClient16ReceiveRegistAckEv+0x2ac>
 81208e2:	8b 45 08             	mov    0x8(%ebp),%eax
 81208e5:	8b 40 2c             	mov    0x2c(%eax),%eax
 81208e8:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 81208ec:	0f be c0             	movsbl %al,%eax
 81208ef:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81208f2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81208f9:	00 
 81208fa:	c7 44 24 08 17 01 00 	movl   $0x117,0x8(%esp)
 8120901:	00 
 8120902:	c7 44 24 04 b3 a4 b5 	movl   $0x8b5a4b3,0x4(%esp)
 8120909:	08 
 812090a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 812090d:	89 04 24             	mov    %eax,(%esp)
 8120910:	e8 03 ee 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120915:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8120918:	89 44 24 08          	mov    %eax,0x8(%esp)
 812091c:	c7 44 24 04 59 9d b5 	movl   $0x8b59d59,0x4(%esp)
 8120923:	08 
 8120924:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8120927:	89 04 24             	mov    %eax,(%esp)
 812092a:	e8 59 ee 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812092f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8120933:	75 3d                	jne    8120972 <_ZN10DbmwClient16ReceiveRegistAckEv+0x270>
 8120935:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812093c:	00 
 812093d:	c7 44 24 08 1d 01 00 	movl   $0x11d,0x8(%esp)
 8120944:	00 
 8120945:	c7 44 24 04 b3 a4 b5 	movl   $0x8b5a4b3,0x4(%esp)
 812094c:	08 
 812094d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8120950:	89 04 24             	mov    %eax,(%esp)
 8120953:	e8 c0 ed 42 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8120958:	c7 44 24 04 76 9d b5 	movl   $0x8b59d76,0x4(%esp)
 812095f:	08 
 8120960:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8120963:	89 04 24             	mov    %eax,(%esp)
 8120966:	e8 1d ee 42 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 812096b:	b8 01 00 00 00       	mov    $0x1,%eax
 8120970:	eb 3c                	jmp    81209ae <_ZN10DbmwClient16ReceiveRegistAckEv+0x2ac>
 8120972:	8b 45 08             	mov    0x8(%ebp),%eax
 8120975:	89 04 24             	mov    %eax,(%esp)
 8120978:	e8 33 01 00 00       	call   8120ab0 <_ZN10DbmwClient5CloseEv>
 812097d:	c7 44 24 10 8c 9d b5 	movl   $0x8b59d8c,0x10(%esp)
 8120984:	08 
 8120985:	c7 44 24 0c 23 01 00 	movl   $0x123,0xc(%esp)
 812098c:	00 
 812098d:	c7 44 24 08 b3 a4 b5 	movl   $0x8b5a4b3,0x8(%esp)
 8120994:	08 
 8120995:	c7 44 24 04 a4 9d b5 	movl   $0x8b59da4,0x4(%esp)
 812099c:	08 
 812099d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81209a4:	e8 61 32 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81209a9:	b8 00 00 00 00       	mov    $0x0,%eax
 81209ae:	81 c4 0c 01 00 00    	add    $0x10c,%esp
 81209b4:	5b                   	pop    %ebx
 81209b5:	5e                   	pop    %esi
 81209b6:	5f                   	pop    %edi
 81209b7:	5d                   	pop    %ebp
 81209b8:	c3                   	ret
 81209b9:	90                   	nop

```

```c
// DbmwClient::ReceiveRegistAck @ 0x8120702

/* DbmwClient::ReceiveRegistAck() */

undefined4 __thiscall DbmwClient::ReceiveRegistAck(DbmwClient *this)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  fd_set local_f4;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  cMyTrace local_54 [16];
  cMyTrace local_44 [16];
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  fd_set *local_20;
  
  *(undefined4 *)(this + 0x14) = 2;
  *(undefined4 *)(this + 0x18) = 0;
  local_20 = &local_f4;
  for (local_24 = 0; local_24 < 0x20; local_24 = local_24 + 1) {
    local_f4.fds_bits[local_24] = 0;
  }
  local_f4.fds_bits[*(uint *)(this + 8) >> 5] =
       1 << ((byte)*(undefined4 *)(this + 8) & 0x1f) | local_f4.fds_bits[*(uint *)(this + 8) >> 5];
  local_2c = select(*(int *)(this + 8) + 1,&local_f4,(fd_set *)0x0,(fd_set *)0x0,
                    (timeval *)(this + 0x14));
  if (local_2c < 1) {
    piVar2 = __errno_location();
    pcVar3 = strerror(*piVar2);
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    cMyTrace::cMyTrace(local_74,"ReceiveRegistAck",0xfd,0);
    cMyTrace::operator()(local_74,"AccountDBMW select error : %d(%s)",iVar1,pcVar3);
    Close(this);
    uVar4 = 0;
  }
  else {
    do {
    } while (((byte)(local_f4.fds_bits[*(uint *)(this + 8) >> 5] >>
                    ((byte)*(undefined4 *)(this + 8) & 0x1f)) & 1) != 1);
    local_34 = 0x12;
    local_30 = ReadData(this,*(char **)(this + 0x2c),0x12);
    if (local_34 == local_30) {
      local_28 = (int)*(char *)(*(int *)(this + 0x2c) + 1);
      cMyTrace::cMyTrace(local_54,"ReceiveRegistAck",0x117,0);
      cMyTrace::operator()(local_54,"AccountDBMW read msg_no : %d",local_28);
      if (local_28 == 0) {
        cMyTrace::cMyTrace(local_44,"ReceiveRegistAck",0x11d,0);
        cMyTrace::operator()(local_44,"AccountDBMW regist Ok");
        uVar4 = 1;
      }
      else {
        Close(this);
        LogManager::logFormat
                  (1,"localchina/DbmwClient.cpp","ReceiveRegistAck",0x123,"AccountDBMW regist fail")
        ;
        uVar4 = 0;
      }
    }
    else {
      if (local_30 != -1) {
        cMyTrace::cMyTrace(local_64,"ReceiveRegistAck",0x110,0);
        cMyTrace::operator()
                  (local_64,"ReceiveRegistAck read size error : %d, expected : %d",local_30,local_34
                  );
      }
      Close(this);
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## Reconnect

```asm
// === 08121156 DbmwClient::Reconnect  [0x08121156-0x81211c3] ===
 8121156:	55                   	push   %ebp
 8121157:	89 e5                	mov    %esp,%ebp
 8121159:	83 ec 28             	sub    $0x28,%esp
 812115c:	8b 45 08             	mov    0x8(%ebp),%eax
 812115f:	8b 40 04             	mov    0x4(%eax),%eax
 8121162:	8d 50 01             	lea    0x1(%eax),%edx
 8121165:	8b 45 08             	mov    0x8(%ebp),%eax
 8121168:	89 50 04             	mov    %edx,0x4(%eax)
 812116b:	8b 45 08             	mov    0x8(%ebp),%eax
 812116e:	89 04 24             	mov    %eax,(%esp)
 8121171:	e8 84 f8 ff ff       	call   81209fa <_ZN10DbmwClient7ConnectEv>
 8121176:	85 c0                	test   %eax,%eax
 8121178:	0f 95 c0             	setne  %al
 812117b:	84 c0                	test   %al,%al
 812117d:	74 3d                	je     81211bc <_ZN10DbmwClient9ReconnectEv+0x66>
 812117f:	8b 45 08             	mov    0x8(%ebp),%eax
 8121182:	83 c0 34             	add    $0x34,%eax
 8121185:	89 44 24 14          	mov    %eax,0x14(%esp)
 8121189:	c7 44 24 10 a4 9e b5 	movl   $0x8b59ea4,0x10(%esp)
 8121190:	08 
 8121191:	c7 44 24 0c cd 02 00 	movl   $0x2cd,0xc(%esp)
 8121198:	00 
 8121199:	c7 44 24 08 95 a4 b5 	movl   $0x8b5a495,0x8(%esp)
 81211a0:	08 
 81211a1:	c7 44 24 04 a4 9d b5 	movl   $0x8b59da4,0x4(%esp)
 81211a8:	08 
 81211a9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81211b0:	e8 55 2a 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81211b5:	b8 00 00 00 00       	mov    $0x0,%eax
 81211ba:	eb 05                	jmp    81211c1 <_ZN10DbmwClient9ReconnectEv+0x6b>
 81211bc:	b8 01 00 00 00       	mov    $0x1,%eax
 81211c1:	c9                   	leave
 81211c2:	c3                   	ret
 81211c3:	90                   	nop

```

```c
// DbmwClient::Reconnect @ 0x8121156

/* DbmwClient::Reconnect() */

bool __thiscall DbmwClient::Reconnect(DbmwClient *this)

{
  int iVar1;
  
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  iVar1 = Connect(this);
  if (iVar1 != 0) {
    LogManager::logFormat
              (1,"localchina/DbmwClient.cpp","Reconnect",0x2cd,
               "AccountDBMW Reconnect() Error!! Query(%s)",this + 0x34);
  }
  return iVar1 == 0;
}

```

---

## Regist

```asm
// === 081209ba DbmwClient::Regist  [0x081209ba-0x81209f9] ===
 81209ba:	55                   	push   %ebp
 81209bb:	89 e5                	mov    %esp,%ebp
 81209bd:	83 ec 18             	sub    $0x18,%esp
 81209c0:	8b 45 08             	mov    0x8(%ebp),%eax
 81209c3:	89 04 24             	mov    %eax,(%esp)
 81209c6:	e8 fb fc ff ff       	call   81206c6 <_ZN10DbmwClient18RegistToMiddlewareEv>
 81209cb:	83 f0 01             	xor    $0x1,%eax
 81209ce:	84 c0                	test   %al,%al
 81209d0:	74 07                	je     81209d9 <_ZN10DbmwClient6RegistEv+0x1f>
 81209d2:	b8 00 00 00 00       	mov    $0x0,%eax
 81209d7:	eb 1e                	jmp    81209f7 <_ZN10DbmwClient6RegistEv+0x3d>
 81209d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81209dc:	89 04 24             	mov    %eax,(%esp)
 81209df:	e8 1e fd ff ff       	call   8120702 <_ZN10DbmwClient16ReceiveRegistAckEv>
 81209e4:	83 f0 01             	xor    $0x1,%eax
 81209e7:	84 c0                	test   %al,%al
 81209e9:	74 07                	je     81209f2 <_ZN10DbmwClient6RegistEv+0x38>
 81209eb:	b8 00 00 00 00       	mov    $0x0,%eax
 81209f0:	eb 05                	jmp    81209f7 <_ZN10DbmwClient6RegistEv+0x3d>
 81209f2:	b8 01 00 00 00       	mov    $0x1,%eax
 81209f7:	c9                   	leave
 81209f8:	c3                   	ret
 81209f9:	90                   	nop

```

```c
// DbmwClient::Regist @ 0x81209ba

/* DbmwClient::Regist() */

undefined4 __thiscall DbmwClient::Regist(DbmwClient *this)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = RegistToMiddleware(this);
  if (cVar1 == '\x01') {
    cVar1 = ReceiveRegistAck(this);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## RegistToMiddleware

```asm
// === 081206c6 DbmwClient::RegistToMiddleware  [0x081206c6-0x8120701] ===
 81206c6:	55                   	push   %ebp
 81206c7:	89 e5                	mov    %esp,%ebp
 81206c9:	83 ec 28             	sub    $0x28,%esp
 81206cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81206d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81206d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81206da:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81206e1:	00 
 81206e2:	8b 45 08             	mov    0x8(%ebp),%eax
 81206e5:	89 04 24             	mov    %eax,(%esp)
 81206e8:	e8 67 ff ff ff       	call   8120654 <_ZN10DbmwClient10SendHeaderEci>
 81206ed:	83 f0 01             	xor    $0x1,%eax
 81206f0:	84 c0                	test   %al,%al
 81206f2:	74 07                	je     81206fb <_ZN10DbmwClient18RegistToMiddlewareEv+0x35>
 81206f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81206f9:	eb 05                	jmp    8120700 <_ZN10DbmwClient18RegistToMiddlewareEv+0x3a>
 81206fb:	b8 01 00 00 00       	mov    $0x1,%eax
 8120700:	c9                   	leave
 8120701:	c3                   	ret

```

```c
// DbmwClient::RegistToMiddleware @ 0x81206c6

/* DbmwClient::RegistToMiddleware() */

bool __thiscall DbmwClient::RegistToMiddleware(DbmwClient *this)

{
  char cVar1;
  
  cVar1 = SendHeader(this,'\0',0);
  return cVar1 == '\x01';
}

```

---

## SendHeader

```asm
// === 08120654 DbmwClient::SendHeader  [0x08120654-0x81206c5] ===
 8120654:	55                   	push   %ebp
 8120655:	89 e5                	mov    %esp,%ebp
 8120657:	83 ec 48             	sub    $0x48,%esp
 812065a:	8b 45 0c             	mov    0xc(%ebp),%eax
 812065d:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8120660:	c6 45 e2 15          	movb   $0x15,-0x1e(%ebp)
 8120664:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8120668:	88 45 e3             	mov    %al,-0x1d(%ebp)
 812066b:	8b 45 10             	mov    0x10(%ebp),%eax
 812066e:	83 c0 12             	add    $0x12,%eax
 8120671:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8120674:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 812067b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8120682:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8120689:	8b 45 08             	mov    0x8(%ebp),%eax
 812068c:	8b 40 08             	mov    0x8(%eax),%eax
 812068f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8120696:	00 
 8120697:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 812069e:	00 
 812069f:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 81206a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81206a6:	89 04 24             	mov    %eax,(%esp)
 81206a9:	e8 92 d4 f5 ff       	call   807db40 <send@plt>
 81206ae:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81206b1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81206b5:	7f 07                	jg     81206be <_ZN10DbmwClient10SendHeaderEci+0x6a>
 81206b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81206bc:	eb 05                	jmp    81206c3 <_ZN10DbmwClient10SendHeaderEci+0x6f>
 81206be:	b8 01 00 00 00       	mov    $0x1,%eax
 81206c3:	c9                   	leave
 81206c4:	c3                   	ret
 81206c5:	90                   	nop

```

```c
// DbmwClient::SendHeader @ 0x8120654

/* DbmwClient::SendHeader(char, int) */

bool __thiscall DbmwClient::SendHeader(DbmwClient *this,char param_1,int param_2)

{
  ssize_t sVar1;
  undefined1 local_22;
  char local_21;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_21 = param_1;
  local_22 = 0x15;
  local_20 = param_2 + 0x12;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  sVar1 = ::send(*(int *)(this + 8),&local_22,0x12,0);
  return 0 < sVar1;
}

```

---

## SetServerAddress

```asm
// === 08120af6 DbmwClient::SetServerAddress  [0x08120af6-0x8120b31] ===
 8120af6:	55                   	push   %ebp
 8120af7:	89 e5                	mov    %esp,%ebp
 8120af9:	83 ec 28             	sub    $0x28,%esp
 8120afc:	8b 45 10             	mov    0x10(%ebp),%eax
 8120aff:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8120b03:	8b 45 08             	mov    0x8(%ebp),%eax
 8120b06:	66 c7 40 1c 02 00    	movw   $0x2,0x1c(%eax)
 8120b0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8120b0f:	89 04 24             	mov    %eax,(%esp)
 8120b12:	e8 19 da f5 ff       	call   807e530 <inet_addr@plt>
 8120b17:	8b 55 08             	mov    0x8(%ebp),%edx
 8120b1a:	89 42 20             	mov    %eax,0x20(%edx)
 8120b1d:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 8120b21:	89 04 24             	mov    %eax,(%esp)
 8120b24:	e8 57 db f5 ff       	call   807e680 <htons@plt>
 8120b29:	8b 55 08             	mov    0x8(%ebp),%edx
 8120b2c:	66 89 42 1e          	mov    %ax,0x1e(%edx)
 8120b30:	c9                   	leave
 8120b31:	c3                   	ret

```

```c
// DbmwClient::SetServerAddress @ 0x8120af6

/* DbmwClient::SetServerAddress(char const*, unsigned short) */

void __thiscall DbmwClient::SetServerAddress(DbmwClient *this,char *param_1,ushort param_2)

{
  uint16_t uVar1;
  in_addr_t iVar2;
  
  *(undefined2 *)(this + 0x1c) = 2;
  iVar2 = inet_addr(param_1);
  *(in_addr_t *)(this + 0x20) = iVar2;
  uVar1 = htons(param_2);
  *(uint16_t *)(this + 0x1e) = uVar1;
  return;
}

```

---

## exec

```asm
// === 081211c4 DbmwClient::exec  [0x081211c4-0x81213bf] ===
 81211c4:	55                   	push   %ebp
 81211c5:	89 e5                	mov    %esp,%ebp
 81211c7:	83 ec 38             	sub    $0x38,%esp
 81211ca:	8b 45 08             	mov    0x8(%ebp),%eax
 81211cd:	0f b6 00             	movzbl (%eax),%eax
 81211d0:	84 c0                	test   %al,%al
 81211d2:	74 0a                	je     81211de <_ZN10DbmwClient4execEv+0x1a>
 81211d4:	b8 00 00 00 00       	mov    $0x0,%eax
 81211d9:	e9 e0 01 00 00       	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81211de:	8b 45 08             	mov    0x8(%ebp),%eax
 81211e1:	89 04 24             	mov    %eax,(%esp)
 81211e4:	e8 33 02 00 00       	call   812141c <_ZN10DbmwClient13IsInitializedEv>
 81211e9:	83 f0 01             	xor    $0x1,%eax
 81211ec:	84 c0                	test   %al,%al
 81211ee:	75 12                	jne    8121202 <_ZN10DbmwClient4execEv+0x3e>
 81211f0:	8b 45 08             	mov    0x8(%ebp),%eax
 81211f3:	89 04 24             	mov    %eax,(%esp)
 81211f6:	e8 2d 02 00 00       	call   8121428 <_ZN10DbmwClient11IsConnectedEv>
 81211fb:	83 f0 01             	xor    $0x1,%eax
 81211fe:	84 c0                	test   %al,%al
 8121200:	74 07                	je     8121209 <_ZN10DbmwClient4execEv+0x45>
 8121202:	b8 01 00 00 00       	mov    $0x1,%eax
 8121207:	eb 05                	jmp    812120e <_ZN10DbmwClient4execEv+0x4a>
 8121209:	b8 00 00 00 00       	mov    $0x0,%eax
 812120e:	84 c0                	test   %al,%al
 8121210:	74 1c                	je     812122e <_ZN10DbmwClient4execEv+0x6a>
 8121212:	8b 45 08             	mov    0x8(%ebp),%eax
 8121215:	89 04 24             	mov    %eax,(%esp)
 8121218:	e8 39 ff ff ff       	call   8121156 <_ZN10DbmwClient9ReconnectEv>
 812121d:	83 f0 01             	xor    $0x1,%eax
 8121220:	84 c0                	test   %al,%al
 8121222:	74 0a                	je     812122e <_ZN10DbmwClient4execEv+0x6a>
 8121224:	b8 00 00 00 00       	mov    $0x0,%eax
 8121229:	e9 90 01 00 00       	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 812122e:	8b 45 08             	mov    0x8(%ebp),%eax
 8121231:	89 04 24             	mov    %eax,(%esp)
 8121234:	e8 97 fa ff ff       	call   8120cd0 <_ZN10DbmwClient7DoQueryEv>
 8121239:	83 f0 01             	xor    $0x1,%eax
 812123c:	84 c0                	test   %al,%al
 812123e:	0f 84 b4 00 00 00    	je     81212f8 <_ZN10DbmwClient4execEv+0x134>
 8121244:	8b 45 08             	mov    0x8(%ebp),%eax
 8121247:	89 04 24             	mov    %eax,(%esp)
 812124a:	e8 cd 01 00 00       	call   812141c <_ZN10DbmwClient13IsInitializedEv>
 812124f:	83 f0 01             	xor    $0x1,%eax
 8121252:	84 c0                	test   %al,%al
 8121254:	75 12                	jne    8121268 <_ZN10DbmwClient4execEv+0xa4>
 8121256:	8b 45 08             	mov    0x8(%ebp),%eax
 8121259:	89 04 24             	mov    %eax,(%esp)
 812125c:	e8 c7 01 00 00       	call   8121428 <_ZN10DbmwClient11IsConnectedEv>
 8121261:	83 f0 01             	xor    $0x1,%eax
 8121264:	84 c0                	test   %al,%al
 8121266:	74 07                	je     812126f <_ZN10DbmwClient4execEv+0xab>
 8121268:	b8 01 00 00 00       	mov    $0x1,%eax
 812126d:	eb 05                	jmp    8121274 <_ZN10DbmwClient4execEv+0xb0>
 812126f:	b8 00 00 00 00       	mov    $0x0,%eax
 8121274:	84 c0                	test   %al,%al
 8121276:	74 76                	je     81212ee <_ZN10DbmwClient4execEv+0x12a>
 8121278:	8b 45 08             	mov    0x8(%ebp),%eax
 812127b:	83 c0 34             	add    $0x34,%eax
 812127e:	c7 44 24 18 f4 02 00 	movl   $0x2f4,0x18(%esp)
 8121285:	00 
 8121286:	89 44 24 14          	mov    %eax,0x14(%esp)
 812128a:	c7 44 24 10 d0 9e b5 	movl   $0x8b59ed0,0x10(%esp)
 8121291:	08 
 8121292:	c7 44 24 0c f4 02 00 	movl   $0x2f4,0xc(%esp)
 8121299:	00 
 812129a:	c7 44 24 08 90 a4 b5 	movl   $0x8b5a490,0x8(%esp)
 81212a1:	08 
 81212a2:	c7 44 24 04 a4 9d b5 	movl   $0x8b59da4,0x4(%esp)
 81212a9:	08 
 81212aa:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81212b1:	e8 54 29 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81212b6:	8b 45 08             	mov    0x8(%ebp),%eax
 81212b9:	89 04 24             	mov    %eax,(%esp)
 81212bc:	e8 95 fe ff ff       	call   8121156 <_ZN10DbmwClient9ReconnectEv>
 81212c1:	83 f0 01             	xor    $0x1,%eax
 81212c4:	84 c0                	test   %al,%al
 81212c6:	74 0a                	je     81212d2 <_ZN10DbmwClient4execEv+0x10e>
 81212c8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81212cd:	e9 ec 00 00 00       	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81212d2:	8b 45 08             	mov    0x8(%ebp),%eax
 81212d5:	89 04 24             	mov    %eax,(%esp)
 81212d8:	e8 f3 f9 ff ff       	call   8120cd0 <_ZN10DbmwClient7DoQueryEv>
 81212dd:	83 f0 01             	xor    $0x1,%eax
 81212e0:	84 c0                	test   %al,%al
 81212e2:	74 0a                	je     81212ee <_ZN10DbmwClient4execEv+0x12a>
 81212e4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81212e9:	e9 d0 00 00 00       	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81212ee:	b8 00 00 00 00       	mov    $0x0,%eax
 81212f3:	e9 c6 00 00 00       	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81212f8:	8b 45 08             	mov    0x8(%ebp),%eax
 81212fb:	89 04 24             	mov    %eax,(%esp)
 81212fe:	e8 b9 fa ff ff       	call   8120dbc <_ZN10DbmwClient9DoReceiveEv>
 8121303:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8121306:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 812130a:	0f 85 92 00 00 00    	jne    81213a2 <_ZN10DbmwClient4execEv+0x1de>
 8121310:	8b 45 08             	mov    0x8(%ebp),%eax
 8121313:	89 04 24             	mov    %eax,(%esp)
 8121316:	e8 01 01 00 00       	call   812141c <_ZN10DbmwClient13IsInitializedEv>
 812131b:	83 f0 01             	xor    $0x1,%eax
 812131e:	84 c0                	test   %al,%al
 8121320:	75 12                	jne    8121334 <_ZN10DbmwClient4execEv+0x170>
 8121322:	8b 45 08             	mov    0x8(%ebp),%eax
 8121325:	89 04 24             	mov    %eax,(%esp)
 8121328:	e8 fb 00 00 00       	call   8121428 <_ZN10DbmwClient11IsConnectedEv>
 812132d:	83 f0 01             	xor    $0x1,%eax
 8121330:	84 c0                	test   %al,%al
 8121332:	74 07                	je     812133b <_ZN10DbmwClient4execEv+0x177>
 8121334:	b8 01 00 00 00       	mov    $0x1,%eax
 8121339:	eb 05                	jmp    8121340 <_ZN10DbmwClient4execEv+0x17c>
 812133b:	b8 00 00 00 00       	mov    $0x0,%eax
 8121340:	84 c0                	test   %al,%al
 8121342:	74 57                	je     812139b <_ZN10DbmwClient4execEv+0x1d7>
 8121344:	8b 45 08             	mov    0x8(%ebp),%eax
 8121347:	83 c0 34             	add    $0x34,%eax
 812134a:	c7 44 24 18 06 03 00 	movl   $0x306,0x18(%esp)
 8121351:	00 
 8121352:	89 44 24 14          	mov    %eax,0x14(%esp)
 8121356:	c7 44 24 10 04 9f b5 	movl   $0x8b59f04,0x10(%esp)
 812135d:	08 
 812135e:	c7 44 24 0c 06 03 00 	movl   $0x306,0xc(%esp)
 8121365:	00 
 8121366:	c7 44 24 08 90 a4 b5 	movl   $0x8b5a490,0x8(%esp)
 812136d:	08 
 812136e:	c7 44 24 04 a4 9d b5 	movl   $0x8b59da4,0x4(%esp)
 8121375:	08 
 8121376:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 812137d:	e8 88 28 9b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8121382:	8b 45 08             	mov    0x8(%ebp),%eax
 8121385:	89 04 24             	mov    %eax,(%esp)
 8121388:	e8 c9 fd ff ff       	call   8121156 <_ZN10DbmwClient9ReconnectEv>
 812138d:	83 f0 01             	xor    $0x1,%eax
 8121390:	84 c0                	test   %al,%al
 8121392:	74 07                	je     812139b <_ZN10DbmwClient4execEv+0x1d7>
 8121394:	b8 00 00 00 00       	mov    $0x0,%eax
 8121399:	eb 23                	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 812139b:	b8 00 00 00 00       	mov    $0x0,%eax
 81213a0:	eb 1c                	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81213a2:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 81213a6:	75 07                	jne    81213af <_ZN10DbmwClient4execEv+0x1eb>
 81213a8:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81213ad:	eb 0f                	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81213af:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 81213b3:	75 07                	jne    81213bc <_ZN10DbmwClient4execEv+0x1f8>
 81213b5:	b8 01 00 00 00       	mov    $0x1,%eax
 81213ba:	eb 02                	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81213bc:	eb 00                	jmp    81213be <_ZN10DbmwClient4execEv+0x1fa>
 81213be:	c9                   	leave
 81213bf:	c3                   	ret

```

```c
// DbmwClient::exec @ 0x81211c4

/* DbmwClient::exec() */

int __thiscall DbmwClient::exec(DbmwClient *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (*this == (DbmwClient)0x0) {
    cVar2 = IsInitialized(this);
    if ((cVar2 == '\x01') && (cVar2 = IsConnected(this), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) && (cVar2 = Reconnect(this), cVar2 != '\x01')) {
      iVar3 = 0;
    }
    else {
      cVar2 = DoQuery(this);
      if (cVar2 == '\x01') {
        iVar3 = DoReceive(this);
        if (iVar3 == 0) {
          cVar2 = IsInitialized(this);
          if ((cVar2 == '\x01') && (cVar2 = IsConnected(this), cVar2 == '\x01')) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            LogManager::logFormat
                      (1,"localchina/DbmwClient.cpp","exec",0x306,
                       "AccountDBMW DoReceive() Error!! Query(%s) line(%d)",this + 0x34,0x306);
            cVar2 = Reconnect(this);
            if (cVar2 != '\x01') {
              return 0;
            }
          }
          iVar3 = 0;
        }
        else if (iVar3 == 1) {
          iVar3 = -2;
        }
        else if (iVar3 == 2) {
          iVar3 = 1;
        }
      }
      else {
        cVar2 = IsInitialized(this);
        if ((cVar2 == '\x01') && (cVar2 = IsConnected(this), cVar2 == '\x01')) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          LogManager::logFormat
                    (1,"localchina/DbmwClient.cpp","exec",0x2f4,
                     "AccountDBMW DoQuery() Error!! Query(%s) line(%d)",this + 0x34,0x2f4);
          cVar2 = Reconnect(this);
          if (cVar2 != '\x01') {
            return -1;
          }
          cVar2 = DoQuery(this);
          if (cVar2 != '\x01') {
            return -1;
          }
        }
        iVar3 = 0;
      }
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

```

---

## getAffectedRowCount

```asm
// === 08120dac DbmwClient::getAffectedRowCount  [0x08120dac-0x8120dbb] ===
 8120dac:	55                   	push   %ebp
 8120dad:	89 e5                	mov    %esp,%ebp
 8120daf:	8b 45 08             	mov    0x8(%ebp),%eax
 8120db2:	8b 40 30             	mov    0x30(%eax),%eax
 8120db5:	89 c2                	mov    %eax,%edx
 8120db7:	c1 fa 1f             	sar    $0x1f,%edx
 8120dba:	5d                   	pop    %ebp
 8120dbb:	c3                   	ret

```

```c
// DbmwClient::getAffectedRowCount @ 0x8120dac

/* DbmwClient::getAffectedRowCount() */

void DbmwClient::getAffectedRowCount(void)

{
  return;
}

```

---

## set_query

```asm
// === 081204fa DbmwClient::set_query  [0x081204fa-0x81205e5] ===
 81204fa:	55                   	push   %ebp
 81204fb:	89 e5                	mov    %esp,%ebp
 81204fd:	83 ec 28             	sub    $0x28,%esp
 8120500:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8120504:	75 0a                	jne    8120510 <_ZN10DbmwClient9set_queryEPKcz+0x16>
 8120506:	b8 00 00 00 00       	mov    $0x0,%eax
 812050b:	e9 d4 00 00 00       	jmp    81205e4 <_ZN10DbmwClient9set_queryEPKcz+0xea>
 8120510:	8b 45 08             	mov    0x8(%ebp),%eax
 8120513:	83 c0 34             	add    $0x34,%eax
 8120516:	c7 44 24 08 01 10 00 	movl   $0x1001,0x8(%esp)
 812051d:	00 
 812051e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8120525:	00 
 8120526:	89 04 24             	mov    %eax,(%esp)
 8120529:	e8 92 d7 f5 ff       	call   807dcc0 <memset@plt>
 812052e:	8d 45 10             	lea    0x10(%ebp),%eax
 8120531:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8120534:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8120537:	8b 55 08             	mov    0x8(%ebp),%edx
 812053a:	83 c2 34             	add    $0x34,%edx
 812053d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8120541:	8b 45 0c             	mov    0xc(%ebp),%eax
 8120544:	89 44 24 04          	mov    %eax,0x4(%esp)
 8120548:	89 14 24             	mov    %edx,(%esp)
 812054b:	e8 80 d2 f5 ff       	call   807d7d0 <vsprintf@plt>
 8120550:	8b 45 08             	mov    0x8(%ebp),%eax
 8120553:	83 c0 34             	add    $0x34,%eax
 8120556:	89 04 24             	mov    %eax,(%esp)
 8120559:	e8 52 de f5 ff       	call   807e3b0 <strlen@plt>
 812055e:	89 c2                	mov    %eax,%edx
 8120560:	8b 45 08             	mov    0x8(%ebp),%eax
 8120563:	89 90 38 10 00 00    	mov    %edx,0x1038(%eax)
 8120569:	8b 45 08             	mov    0x8(%ebp),%eax
 812056c:	8b 80 38 10 00 00    	mov    0x1038(%eax),%eax
 8120572:	3d ff 0f 00 00       	cmp    $0xfff,%eax
 8120577:	7f 0e                	jg     8120587 <_ZN10DbmwClient9set_queryEPKcz+0x8d>
 8120579:	8b 45 08             	mov    0x8(%ebp),%eax
 812057c:	8b 80 38 10 00 00    	mov    0x1038(%eax),%eax
 8120582:	83 f8 07             	cmp    $0x7,%eax
 8120585:	7f 28                	jg     81205af <_ZN10DbmwClient9set_queryEPKcz+0xb5>
 8120587:	8b 45 08             	mov    0x8(%ebp),%eax
 812058a:	8b 80 38 10 00 00    	mov    0x1038(%eax),%eax
 8120590:	c7 44 24 08 00 10 00 	movl   $0x1000,0x8(%esp)
 8120597:	00 
 8120598:	89 44 24 04          	mov    %eax,0x4(%esp)
 812059c:	c7 04 24 c0 9c b5 08 	movl   $0x8b59cc0,(%esp)
 81205a3:	e8 b8 d5 f5 ff       	call   807db60 <printf@plt>
 81205a8:	b8 00 00 00 00       	mov    $0x0,%eax
 81205ad:	eb 35                	jmp    81205e4 <_ZN10DbmwClient9set_queryEPKcz+0xea>
 81205af:	8b 45 08             	mov    0x8(%ebp),%eax
 81205b2:	83 c0 34             	add    $0x34,%eax
 81205b5:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 81205bc:	00 
 81205bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81205c1:	c7 04 24 f8 9c b5 08 	movl   $0x8b59cf8,(%esp)
 81205c8:	e8 53 db f5 ff       	call   807e120 <strncasecmp@plt>
 81205cd:	85 c0                	test   %eax,%eax
 81205cf:	75 08                	jne    81205d9 <_ZN10DbmwClient9set_queryEPKcz+0xdf>
 81205d1:	8b 45 08             	mov    0x8(%ebp),%eax
 81205d4:	c6 00 01             	movb   $0x1,(%eax)
 81205d7:	eb 06                	jmp    81205df <_ZN10DbmwClient9set_queryEPKcz+0xe5>
 81205d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81205dc:	c6 00 00             	movb   $0x0,(%eax)
 81205df:	b8 01 00 00 00       	mov    $0x1,%eax
 81205e4:	c9                   	leave
 81205e5:	c3                   	ret

```

```c
// DbmwClient::set_query @ 0x81204fa

/* DbmwClient::set_query(char const*, ...) */

undefined4 __thiscall DbmwClient::set_query(DbmwClient *this,char *param_1,...)

{
  undefined4 uVar1;
  size_t sVar2;
  int iVar3;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    memset(this + 0x34,0,0x1001);
    vsprintf((char *)(this + 0x34),param_1,&stack0x0000000c);
    sVar2 = strlen((char *)(this + 0x34));
    *(size_t *)(this + 0x1038) = sVar2;
    if ((*(int *)(this + 0x1038) < 0x1000) && (7 < *(int *)(this + 0x1038))) {
      iVar3 = strncasecmp("select",(char *)(this + 0x34),6);
      if (iVar3 == 0) {
        *this = (DbmwClient)0x1;
      }
      else {
        *this = (DbmwClient)0x0;
      }
      uVar1 = 1;
    }
    else {
      printf("QueryLength Size ERROR QUERY_SIZE-%d MAX_QUERY_SIZE-%d\n",
             *(undefined4 *)(this + 0x1038),0x1000);
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## ~DbmwClient

```asm
// === 081204be DbmwClient::~DbmwClient  [0x081204be-0x81204f9] ===
 81204be:	55                   	push   %ebp
 81204bf:	89 e5                	mov    %esp,%ebp
 81204c1:	83 ec 18             	sub    $0x18,%esp
 81204c4:	8b 45 08             	mov    0x8(%ebp),%eax
 81204c7:	c6 40 02 00          	movb   $0x0,0x2(%eax)
 81204cb:	8b 45 08             	mov    0x8(%ebp),%eax
 81204ce:	8b 40 08             	mov    0x8(%eax),%eax
 81204d1:	89 04 24             	mov    %eax,(%esp)
 81204d4:	e8 87 d3 f5 ff       	call   807d860 <close@plt>
 81204d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81204dc:	c6 40 01 00          	movb   $0x0,0x1(%eax)
 81204e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81204e3:	c7 40 08 ff ff ff ff 	movl   $0xffffffff,0x8(%eax)
 81204ea:	8b 45 08             	mov    0x8(%ebp),%eax
 81204ed:	8b 40 2c             	mov    0x2c(%eax),%eax
 81204f0:	89 04 24             	mov    %eax,(%esp)
 81204f3:	e8 f8 3f 60 00       	call   87244f0 <_ZdlPv>
 81204f8:	c9                   	leave
 81204f9:	c3                   	ret

```

```c
// DbmwClient::~DbmwClient @ 0x81204be

/* DbmwClient::~DbmwClient() */

void __thiscall DbmwClient::~DbmwClient(DbmwClient *this)

{
  this[2] = (DbmwClient)0x0;
  close(*(int *)(this + 8));
  this[1] = (DbmwClient)0x0;
  *(undefined4 *)(this + 8) = 0xffffffff;
  operator_delete(*(void **)(this + 0x2c));
  return;
}

```

