# yaSSL__Connection

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AllocPreSecret

```asm
// === 08747280 yaSSL::Connection::AllocPreSecret  [0x08747280-0x87472bf] ===
 8747280:	55                   	push   %ebp
 8747281:	89 e5                	mov    %esp,%ebp
 8747283:	83 ec 18             	sub    $0x18,%esp
 8747286:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747289:	8b 45 0c             	mov    0xc(%ebp),%eax
 874728c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874728f:	8b 75 08             	mov    0x8(%ebp),%esi
 8747292:	e8 61 bb fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747297:	81 c3 01 59 c2 00    	add    $0xc25901,%ebx
 874729d:	89 86 24 01 00 00    	mov    %eax,0x124(%esi)
 87472a3:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87472a8:	89 04 24             	mov    %eax,(%esp)
 87472ab:	e8 a0 b0 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87472b0:	89 06                	mov    %eax,(%esi)
 87472b2:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87472b5:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87472b8:	89 ec                	mov    %ebp,%esp
 87472ba:	5d                   	pop    %ebp
 87472bb:	c3                   	ret
 87472bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Connection::AllocPreSecret @ 0x8747280

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::AllocPreSecret(unsigned int) */

void __thiscall yaSSL::Connection::AllocPreSecret(Connection *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)(this + 0x124) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)this = pvVar1;
  return;
}

```

---

## CleanMaster

```asm
// === 08747cb0 yaSSL::Connection::CleanMaster  [0x08747cb0-0x8747d0f] ===
 8747cb0:	55                   	push   %ebp
 8747cb1:	89 e5                	mov    %esp,%ebp
 8747cb3:	83 ec 18             	sub    $0x18,%esp
 8747cb6:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8747cb9:	8b 75 08             	mov    0x8(%ebp),%esi
 8747cbc:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747cbf:	e8 34 b1 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747cc4:	81 c3 d4 4e c2 00    	add    $0xc24ed4,%ebx
 8747cca:	80 be 29 01 00 00 00 	cmpb   $0x0,0x129(%esi)
 8747cd1:	75 24                	jne    8747cf7 <_ZN5yaSSL10Connection11CleanMasterEv+0x47>
 8747cd3:	8b 86 34 01 00 00    	mov    0x134(%esi),%eax
 8747cd9:	c7 44 24 04 30 00 00 	movl   $0x30,0x4(%esp)
 8747ce0:	00 
 8747ce1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8747ce5:	8d 46 04             	lea    0x4(%esi),%eax
 8747ce8:	89 04 24             	mov    %eax,(%esp)
 8747ceb:	e8 40 ff ff ff       	call   8747c30 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE>
 8747cf0:	c6 86 29 01 00 00 01 	movb   $0x1,0x129(%esi)
 8747cf7:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747cfa:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747cfd:	89 ec                	mov    %ebp,%esp
 8747cff:	5d                   	pop    %ebp
 8747d00:	c3                   	ret
 8747d01:	eb 0d                	jmp    8747d10 <_ZN5yaSSLrsERNS_12input_bufferERNS_11ServerHelloE>
 8747d03:	90                   	nop
 8747d04:	90                   	nop
 8747d05:	90                   	nop
 8747d06:	90                   	nop
 8747d07:	90                   	nop
 8747d08:	90                   	nop
 8747d09:	90                   	nop
 8747d0a:	90                   	nop
 8747d0b:	90                   	nop
 8747d0c:	90                   	nop
 8747d0d:	90                   	nop
 8747d0e:	90                   	nop
 8747d0f:	90                   	nop

```

```c
// yaSSL::Connection::CleanMaster @ 0x8747cb0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::CleanMaster() */

void __thiscall yaSSL::Connection::CleanMaster(Connection *this)

{
  if (this[0x129] == (Connection)0x0) {
    clean((uchar *)(this + 4),0x30,*(RandomPool **)(this + 0x134));
    this[0x129] = (Connection)0x1;
  }
  return;
}

```

---

## CleanPreMaster

```asm
// === 0874bb40 yaSSL::Connection::CleanPreMaster  [0x0874bb40-0x874bb9f] ===
 874bb40:	55                   	push   %ebp
 874bb41:	89 e5                	mov    %esp,%ebp
 874bb43:	83 ec 18             	sub    $0x18,%esp
 874bb46:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874bb49:	8b 75 08             	mov    0x8(%ebp),%esi
 874bb4c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874bb4f:	e8 a4 72 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874bb54:	81 c3 44 10 c2 00    	add    $0xc21044,%ebx
 874bb5a:	8b 06                	mov    (%esi),%eax
 874bb5c:	85 c0                	test   %eax,%eax
 874bb5e:	74 31                	je     874bb91 <_ZN5yaSSL10Connection14CleanPreMasterEv+0x51>
 874bb60:	8b 96 34 01 00 00    	mov    0x134(%esi),%edx
 874bb66:	89 54 24 08          	mov    %edx,0x8(%esp)
 874bb6a:	8b 96 24 01 00 00    	mov    0x124(%esi),%edx
 874bb70:	89 04 24             	mov    %eax,(%esp)
 874bb73:	89 54 24 04          	mov    %edx,0x4(%esp)
 874bb77:	e8 b4 c0 ff ff       	call   8747c30 <_ZN5yaSSL5cleanEPVhjRNS_10RandomPoolE>
 874bb7c:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bb81:	8b 06                	mov    (%esi),%eax
 874bb83:	89 04 24             	mov    %eax,(%esp)
 874bb86:	e8 65 4d 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874bb8b:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 874bb91:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874bb94:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874bb97:	89 ec                	mov    %ebp,%esp
 874bb99:	5d                   	pop    %ebp
 874bb9a:	c3                   	ret
 874bb9b:	90                   	nop
 874bb9c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Connection::CleanPreMaster @ 0x874bb40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::CleanPreMaster() */

void __thiscall yaSSL::Connection::CleanPreMaster(Connection *this)

{
  uint uVar1;
  
  if (*(uchar **)this != (uchar *)0x0) {
    uVar1 = *(uint *)(this + 0x124);
    clean(*(uchar **)this,uVar1,*(RandomPool **)(this + 0x134));
    operator_delete__(*(undefined4 *)this,uVar1 & 0xffffff00);
    *(undefined4 *)this = 0;
  }
  return;
}

```

---

## Connection

```asm
// === 08747850 yaSSL::Connection::Connection  [0x08747850-0x874793f] ===
 8747850:	55                   	push   %ebp
 8747851:	89 e5                	mov    %esp,%ebp
 8747853:	56                   	push   %esi
 8747854:	53                   	push   %ebx
 8747855:	83 ec 10             	sub    $0x10,%esp
 8747858:	0f b7 55 0c          	movzwl 0xc(%ebp),%edx
 874785c:	8b 75 08             	mov    0x8(%ebp),%esi
 874785f:	e8 94 b5 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747864:	81 c3 34 53 c2 00    	add    $0xc25334,%ebx
 874786a:	89 d0                	mov    %edx,%eax
 874786c:	0f b6 d6             	movzbl %dh,%edx
 874786f:	3c 02                	cmp    $0x2,%al
 8747871:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8747877:	c7 86 1c 01 00 00 00 	movl   $0x0,0x11c(%esi)
 874787e:	00 00 00 
 8747881:	c7 86 20 01 00 00 00 	movl   $0x0,0x120(%esi)
 8747888:	00 00 00 
 874788b:	c7 86 24 01 00 00 00 	movl   $0x0,0x124(%esi)
 8747892:	00 00 00 
 8747895:	c6 86 28 01 00 00 00 	movb   $0x0,0x128(%esi)
 874789c:	c6 86 29 01 00 00 00 	movb   $0x0,0x129(%esi)
 87478a3:	76 1b                	jbe    87478c0 <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE+0x70>
 87478a5:	84 d2                	test   %dl,%dl
 87478a7:	74 7f                	je     8747928 <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE+0xd8>
 87478a9:	80 fa 01             	cmp    $0x1,%dl
 87478ac:	c6 86 2a 01 00 00 01 	movb   $0x1,0x12a(%esi)
 87478b3:	76 7a                	jbe    874792f <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE+0xdf>
 87478b5:	b9 01 00 00 00       	mov    $0x1,%ecx
 87478ba:	eb 0d                	jmp    87478c9 <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE+0x79>
 87478bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87478c0:	c6 86 2a 01 00 00 00 	movb   $0x0,0x12a(%esi)
 87478c7:	31 c9                	xor    %ecx,%ecx
 87478c9:	88 86 2e 01 00 00    	mov    %al,0x12e(%esi)
 87478cf:	8d 86 30 01 00 00    	lea    0x130(%esi),%eax
 87478d5:	88 8e 2b 01 00 00    	mov    %cl,0x12b(%esi)
 87478db:	c6 86 2d 01 00 00 00 	movb   $0x0,0x12d(%esi)
 87478e2:	88 96 2f 01 00 00    	mov    %dl,0x12f(%esi)
 87478e8:	89 04 24             	mov    %eax,(%esp)
 87478eb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87478f2:	00 
 87478f3:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 87478fa:	00 
 87478fb:	e8 50 f0 ff ff       	call   8746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>
 8747900:	8b 45 10             	mov    0x10(%ebp),%eax
 8747903:	89 86 34 01 00 00    	mov    %eax,0x134(%esi)
 8747909:	83 c6 74             	add    $0x74,%esi
 874790c:	31 c0                	xor    %eax,%eax
 874790e:	c7 04 06 00 00 00 00 	movl   $0x0,(%esi,%eax,1)
 8747915:	83 c0 04             	add    $0x4,%eax
 8747918:	83 f8 20             	cmp    $0x20,%eax
 874791b:	72 f1                	jb     874790e <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE+0xbe>
 874791d:	83 c4 10             	add    $0x10,%esp
 8747920:	5b                   	pop    %ebx
 8747921:	5e                   	pop    %esi
 8747922:	5d                   	pop    %ebp
 8747923:	c3                   	ret
 8747924:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8747928:	c6 86 2a 01 00 00 00 	movb   $0x0,0x12a(%esi)
 874792f:	31 c9                	xor    %ecx,%ecx
 8747931:	eb 96                	jmp    87478c9 <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE+0x79>
 8747933:	90                   	nop
 8747934:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874793a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::Connection::Connection @ 0x8747850

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::Connection(yaSSL::ProtocolVersion, yaSSL::RandomPool&) */

void __thiscall
yaSSL::Connection::Connection(Connection *this,undefined2 param_2,undefined4 param_3)

{
  Connection CVar1;
  uint uVar2;
  Connection CVar3;
  
  CVar1 = SUB21((ushort)param_2 >> 8,0);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  this[0x128] = (Connection)0x0;
  this[0x129] = (Connection)0x0;
  if ((byte)SUB21(param_2,0) < 3) {
    this[0x12a] = (Connection)0x0;
    CVar3 = (Connection)0x0;
  }
  else {
    if (CVar1 == (Connection)0x0) {
      this[0x12a] = (Connection)0x0;
    }
    else {
      this[0x12a] = (Connection)0x1;
      if (1 < (byte)CVar1) {
        CVar3 = (Connection)0x1;
        goto LAB_087478c9;
      }
    }
    CVar3 = (Connection)0x0;
  }
LAB_087478c9:
  this[0x12e] = SUB21(param_2,0);
  this[299] = CVar3;
  this[0x12d] = (Connection)0x0;
  this[0x12f] = CVar1;
  ProtocolVersion::ProtocolVersion((ProtocolVersion *)(this + 0x130),'\x03','\0');
  *(undefined4 *)(this + 0x134) = param_3;
  uVar2 = 0;
  do {
    *(undefined4 *)(this + uVar2 + 0x74) = 0;
    uVar2 = uVar2 + 4;
  } while (uVar2 < 0x20);
  return;
}

```

---

## TurnOffTLS

```asm
// === 08747240 yaSSL::Connection::TurnOffTLS  [0x08747240-0x874725f] ===
 8747240:	55                   	push   %ebp
 8747241:	89 e5                	mov    %esp,%ebp
 8747243:	8b 45 08             	mov    0x8(%ebp),%eax
 8747246:	c6 80 2a 01 00 00 00 	movb   $0x0,0x12a(%eax)
 874724d:	c6 80 2f 01 00 00 00 	movb   $0x0,0x12f(%eax)
 8747254:	5d                   	pop    %ebp
 8747255:	c3                   	ret
 8747256:	8d 76 00             	lea    0x0(%esi),%esi
 8747259:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Connection::TurnOffTLS @ 0x8747240

/* yaSSL::Connection::TurnOffTLS() */

void __thiscall yaSSL::Connection::TurnOffTLS(Connection *this)

{
  this[0x12a] = (Connection)0x0;
  this[0x12f] = (Connection)0x0;
  return;
}

```

---

## TurnOffTLS1_1

```asm
// === 08747260 yaSSL::Connection::TurnOffTLS1_1  [0x08747260-0x874727f] ===
 8747260:	55                   	push   %ebp
 8747261:	89 e5                	mov    %esp,%ebp
 8747263:	8b 45 08             	mov    0x8(%ebp),%eax
 8747266:	c6 80 2b 01 00 00 00 	movb   $0x0,0x12b(%eax)
 874726d:	c6 80 2f 01 00 00 01 	movb   $0x1,0x12f(%eax)
 8747274:	5d                   	pop    %ebp
 8747275:	c3                   	ret
 8747276:	8d 76 00             	lea    0x0(%esi),%esi
 8747279:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Connection::TurnOffTLS1_1 @ 0x8747260

/* yaSSL::Connection::TurnOffTLS1_1() */

void __thiscall yaSSL::Connection::TurnOffTLS1_1(Connection *this)

{
  this[299] = (Connection)0x0;
  this[0x12f] = (Connection)0x1;
  return;
}

```

---

## ~Connection

```asm
// === 0874bba0 yaSSL::Connection::~Connection  [0x0874bba0-0x874bbef] ===
 874bba0:	55                   	push   %ebp
 874bba1:	89 e5                	mov    %esp,%ebp
 874bba3:	83 ec 18             	sub    $0x18,%esp
 874bba6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874bba9:	e8 4a 72 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874bbae:	81 c3 ea 0f c2 00    	add    $0xc20fea,%ebx
 874bbb4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874bbb7:	8b 75 08             	mov    0x8(%ebp),%esi
 874bbba:	89 34 24             	mov    %esi,(%esp)
 874bbbd:	e8 ee c0 ff ff       	call   8747cb0 <_ZN5yaSSL10Connection11CleanMasterEv>
 874bbc2:	89 34 24             	mov    %esi,(%esp)
 874bbc5:	e8 76 ff ff ff       	call   874bb40 <_ZN5yaSSL10Connection14CleanPreMasterEv>
 874bbca:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874bbcf:	8b 06                	mov    (%esi),%eax
 874bbd1:	89 04 24             	mov    %eax,(%esp)
 874bbd4:	e8 17 4d 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874bbd9:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874bbdc:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874bbdf:	89 ec                	mov    %ebp,%esp
 874bbe1:	5d                   	pop    %ebp
 874bbe2:	c3                   	ret
 874bbe3:	90                   	nop
 874bbe4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874bbea:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::Connection::~Connection @ 0x874bba0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Connection::~Connection() */

void __thiscall yaSSL::Connection::~Connection(Connection *this)

{
  CleanMaster(this);
  CleanPreMaster(this);
  operator_delete__(*(undefined4 *)this,0);
  return;
}

```

