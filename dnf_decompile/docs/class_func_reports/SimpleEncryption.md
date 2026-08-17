# SimpleEncryption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## SimpleEncryption

```asm
// === 0808ce68 SimpleEncryption::SimpleEncryption  [0x0808ce68-0x808ce8d] ===
 808ce68:	55                   	push   %ebp
 808ce69:	89 e5                	mov    %esp,%ebp
 808ce6b:	83 ec 18             	sub    $0x18,%esp
 808ce6e:	8b 45 08             	mov    0x8(%ebp),%eax
 808ce71:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 808ce77:	8b 45 08             	mov    0x8(%ebp),%eax
 808ce7a:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 808ce81:	8b 45 08             	mov    0x8(%ebp),%eax
 808ce84:	89 04 24             	mov    %eax,(%esp)
 808ce87:	e8 7a 00 00 00       	call   808cf06 <_ZN16SimpleEncryption10initializeEv>
 808ce8c:	c9                   	leave
 808ce8d:	c3                   	ret

```

```c
// SimpleEncryption::SimpleEncryption @ 0x808ce68

/* SimpleEncryption::SimpleEncryption() */

void __thiscall SimpleEncryption::SimpleEncryption(SimpleEncryption *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  initialize(this);
  return;
}

```

---

## decryptUINT

```asm
// === 0808cf68 SimpleEncryption::decryptUINT  [0x0808cf68-0x808cfab] ===
 808cf68:	55                   	push   %ebp
 808cf69:	89 e5                	mov    %esp,%ebp
 808cf6b:	83 ec 10             	sub    $0x10,%esp
 808cf6e:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 808cf75:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 808cf7c:	8b 45 08             	mov    0x8(%ebp),%eax
 808cf7f:	8b 00                	mov    (%eax),%eax
 808cf81:	89 45 f8             	mov    %eax,-0x8(%ebp)
 808cf84:	8b 45 08             	mov    0x8(%ebp),%eax
 808cf87:	8b 40 04             	mov    0x4(%eax),%eax
 808cf8a:	89 45 fc             	mov    %eax,-0x4(%ebp)
 808cf8d:	8b 45 f8             	mov    -0x8(%ebp),%eax
 808cf90:	8b 55 0c             	mov    0xc(%ebp),%edx
 808cf93:	89 c1                	mov    %eax,%ecx
 808cf95:	d3 ea                	shr    %cl,%edx
 808cf97:	8b 45 10             	mov    0x10(%ebp),%eax
 808cf9a:	89 10                	mov    %edx,(%eax)
 808cf9c:	8b 45 fc             	mov    -0x4(%ebp),%eax
 808cf9f:	89 c2                	mov    %eax,%edx
 808cfa1:	33 55 0c             	xor    0xc(%ebp),%edx
 808cfa4:	8b 45 10             	mov    0x10(%ebp),%eax
 808cfa7:	89 10                	mov    %edx,(%eax)
 808cfa9:	c9                   	leave
 808cfaa:	c3                   	ret
 808cfab:	90                   	nop

```

```c
// SimpleEncryption::decryptUINT @ 0x808cf68

/* SimpleEncryption::decryptUINT(unsigned int, unsigned int&) */

void __thiscall SimpleEncryption::decryptUINT(SimpleEncryption *this,uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  *param_2 = param_1 >> ((byte)*(undefined4 *)this & 0x1f);
  *param_2 = uVar1 ^ param_1;
  return;
}

```

---

## decryptUINT_0808cfd8

```asm
// === 0808cfd8 SimpleEncryption::decryptUINT  [0x0808cfd8-0x808d002] ===
 808cfd8:	55                   	push   %ebp
 808cfd9:	89 e5                	mov    %esp,%ebp
 808cfdb:	83 ec 1c             	sub    $0x1c,%esp
 808cfde:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 808cfe5:	8d 45 fc             	lea    -0x4(%ebp),%eax
 808cfe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 808cfec:	8b 45 0c             	mov    0xc(%ebp),%eax
 808cfef:	89 44 24 04          	mov    %eax,0x4(%esp)
 808cff3:	8b 45 08             	mov    0x8(%ebp),%eax
 808cff6:	89 04 24             	mov    %eax,(%esp)
 808cff9:	e8 26 ff ff ff       	call   808cf24 <_ZN16SimpleEncryption11encryptUINTEjRj>
 808cffe:	8b 45 fc             	mov    -0x4(%ebp),%eax
 808d001:	c9                   	leave
 808d002:	c3                   	ret

```

```c
// SimpleEncryption::decryptUINT @ 0x808cfd8

/* SimpleEncryption::decryptUINT(unsigned int) */

uint __thiscall SimpleEncryption::decryptUINT(SimpleEncryption *this,uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  encryptUINT(this,param_1,&local_8);
  return local_8;
}

```

---

## encryptUINT

```asm
// === 0808cf24 SimpleEncryption::encryptUINT  [0x0808cf24-0x808cf67] ===
 808cf24:	55                   	push   %ebp
 808cf25:	89 e5                	mov    %esp,%ebp
 808cf27:	83 ec 10             	sub    $0x10,%esp
 808cf2a:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 808cf31:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 808cf38:	8b 45 08             	mov    0x8(%ebp),%eax
 808cf3b:	8b 00                	mov    (%eax),%eax
 808cf3d:	89 45 f8             	mov    %eax,-0x8(%ebp)
 808cf40:	8b 45 08             	mov    0x8(%ebp),%eax
 808cf43:	8b 40 04             	mov    0x4(%eax),%eax
 808cf46:	89 45 fc             	mov    %eax,-0x4(%ebp)
 808cf49:	8b 45 f8             	mov    -0x8(%ebp),%eax
 808cf4c:	8b 55 0c             	mov    0xc(%ebp),%edx
 808cf4f:	89 c1                	mov    %eax,%ecx
 808cf51:	d3 e2                	shl    %cl,%edx
 808cf53:	8b 45 10             	mov    0x10(%ebp),%eax
 808cf56:	89 10                	mov    %edx,(%eax)
 808cf58:	8b 45 fc             	mov    -0x4(%ebp),%eax
 808cf5b:	89 c2                	mov    %eax,%edx
 808cf5d:	33 55 0c             	xor    0xc(%ebp),%edx
 808cf60:	8b 45 10             	mov    0x10(%ebp),%eax
 808cf63:	89 10                	mov    %edx,(%eax)
 808cf65:	c9                   	leave
 808cf66:	c3                   	ret
 808cf67:	90                   	nop

```

```c
// SimpleEncryption::encryptUINT @ 0x808cf24

/* SimpleEncryption::encryptUINT(unsigned int, unsigned int&) */

void __thiscall SimpleEncryption::encryptUINT(SimpleEncryption *this,uint param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(this + 4);
  *param_2 = param_1 << ((byte)*(undefined4 *)this & 0x1f);
  *param_2 = uVar1 ^ param_1;
  return;
}

```

---

## encryptUINT_0808cfac

```asm
// === 0808cfac SimpleEncryption::encryptUINT  [0x0808cfac-0x808cfd7] ===
 808cfac:	55                   	push   %ebp
 808cfad:	89 e5                	mov    %esp,%ebp
 808cfaf:	83 ec 1c             	sub    $0x1c,%esp
 808cfb2:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 808cfb9:	8d 45 fc             	lea    -0x4(%ebp),%eax
 808cfbc:	89 44 24 08          	mov    %eax,0x8(%esp)
 808cfc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 808cfc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 808cfc7:	8b 45 08             	mov    0x8(%ebp),%eax
 808cfca:	89 04 24             	mov    %eax,(%esp)
 808cfcd:	e8 52 ff ff ff       	call   808cf24 <_ZN16SimpleEncryption11encryptUINTEjRj>
 808cfd2:	8b 45 fc             	mov    -0x4(%ebp),%eax
 808cfd5:	c9                   	leave
 808cfd6:	c3                   	ret
 808cfd7:	90                   	nop

```

```c
// SimpleEncryption::encryptUINT @ 0x808cfac

/* SimpleEncryption::encryptUINT(unsigned int) */

uint __thiscall SimpleEncryption::encryptUINT(SimpleEncryption *this,uint param_1)

{
  uint local_8;
  
  local_8 = 0;
  encryptUINT(this,param_1,&local_8);
  return local_8;
}

```

---

## initialize

```asm
// === 0808cf06 SimpleEncryption::initialize  [0x0808cf06-0x808cf1d] ===
 808cf06:	55                   	push   %ebp
 808cf07:	89 e5                	mov    %esp,%ebp
 808cf09:	8b 45 08             	mov    0x8(%ebp),%eax
 808cf0c:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 808cf12:	8b 45 08             	mov    0x8(%ebp),%eax
 808cf15:	c7 40 04 0f 98 89 f0 	movl   $0xf089980f,0x4(%eax)
 808cf1c:	5d                   	pop    %ebp
 808cf1d:	c3                   	ret

```

```c
// SimpleEncryption::initialize @ 0x808cf06

/* SimpleEncryption::initialize() */

void __thiscall SimpleEncryption::initialize(SimpleEncryption *this)

{
  *(undefined4 *)this = 3;
  *(undefined4 *)(this + 4) = 0xf089980f;
  return;
}

```

---

## instance

```asm
// === 0808cea2 SimpleEncryption::instance  [0x0808cea2-0x808cf05] ===
 808cea2:	55                   	push   %ebp
 808cea3:	89 e5                	mov    %esp,%ebp
 808cea5:	83 ec 18             	sub    $0x18,%esp
 808cea8:	b8 88 58 3f 09       	mov    $0x93f5888,%eax
 808cead:	0f b6 00             	movzbl (%eax),%eax
 808ceb0:	84 c0                	test   %al,%al
 808ceb2:	75 4a                	jne    808cefe <_ZN16SimpleEncryption8instanceEv+0x5c>
 808ceb4:	c7 04 24 88 58 3f 09 	movl   $0x93f5888,(%esp)
 808cebb:	e8 70 84 69 00       	call   8725330 <__cxa_guard_acquire>
 808cec0:	85 c0                	test   %eax,%eax
 808cec2:	0f 95 c0             	setne  %al
 808cec5:	84 c0                	test   %al,%al
 808cec7:	74 35                	je     808cefe <_ZN16SimpleEncryption8instanceEv+0x5c>
 808cec9:	c7 04 24 90 58 3f 09 	movl   $0x93f5890,(%esp)
 808ced0:	e8 93 ff ff ff       	call   808ce68 <_ZN16SimpleEncryptionC1Ev>
 808ced5:	c7 04 24 88 58 3f 09 	movl   $0x93f5888,(%esp)
 808cedc:	e8 6f 83 69 00       	call   8725250 <__cxa_guard_release>
 808cee1:	b8 8e ce 08 08       	mov    $0x808ce8e,%eax
 808cee6:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 808ceed:	08 
 808ceee:	c7 44 24 04 90 58 3f 	movl   $0x93f5890,0x4(%esp)
 808cef5:	09 
 808cef6:	89 04 24             	mov    %eax,(%esp)
 808cef9:	e8 d2 0e ff ff       	call   807ddd0 <__cxa_atexit@plt>
 808cefe:	b8 90 58 3f 09       	mov    $0x93f5890,%eax
 808cf03:	c9                   	leave
 808cf04:	c3                   	ret
 808cf05:	90                   	nop

```

```c
// SimpleEncryption::instance @ 0x808cea2

/* SimpleEncryption::instance() */

undefined8 * SimpleEncryption::instance(void)

{
  int iVar1;
  
  if (instance()::simpleEncryption == '\0') {
    iVar1 = __cxa_guard_acquire(&instance()::simpleEncryption);
    if (iVar1 != 0) {
      SimpleEncryption((SimpleEncryption *)&instance()::simpleEncryption);
      __cxa_guard_release(&instance()::simpleEncryption);
      __cxa_atexit(~SimpleEncryption,&instance()::simpleEncryption,&__dso_handle);
    }
  }
  return &instance()::simpleEncryption;
}

```

---

## uninitialize

```asm
// === 0808cf1e SimpleEncryption::uninitialize  [0x0808cf1e-0x808cf23] ===
 808cf1e:	55                   	push   %ebp
 808cf1f:	89 e5                	mov    %esp,%ebp
 808cf21:	5d                   	pop    %ebp
 808cf22:	c3                   	ret
 808cf23:	90                   	nop

```

```c
// SimpleEncryption::uninitialize @ 0x808cf1e

/* SimpleEncryption::uninitialize() */

void SimpleEncryption::uninitialize(void)

{
  return;
}

```

---

## ~SimpleEncryption

```asm
// === 0808ce8e SimpleEncryption::~SimpleEncryption  [0x0808ce8e-0x808cea1] ===
 808ce8e:	55                   	push   %ebp
 808ce8f:	89 e5                	mov    %esp,%ebp
 808ce91:	83 ec 18             	sub    $0x18,%esp
 808ce94:	8b 45 08             	mov    0x8(%ebp),%eax
 808ce97:	89 04 24             	mov    %eax,(%esp)
 808ce9a:	e8 7f 00 00 00       	call   808cf1e <_ZN16SimpleEncryption12uninitializeEv>
 808ce9f:	c9                   	leave
 808cea0:	c3                   	ret
 808cea1:	90                   	nop

```

```c
// SimpleEncryption::~SimpleEncryption @ 0x808ce8e

/* SimpleEncryption::~SimpleEncryption() */

void __thiscall SimpleEncryption::~SimpleEncryption(SimpleEncryption *this)

{
  uninitialize();
  return;
}

```

