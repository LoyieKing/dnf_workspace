# ThreadInterface

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## ThreadInterface

```asm
// === 08630b38 ThreadInterface::ThreadInterface  [0x08630b38-0x8630b45] ===
 8630b38:	55                   	push   %ebp
 8630b39:	89 e5                	mov    %esp,%ebp
 8630b3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b3e:	c7 00 98 6b ce 08    	movl   $0x8ce6b98,(%eax)
 8630b44:	5d                   	pop    %ebp
 8630b45:	c3                   	ret

```

```c
// ThreadInterface::ThreadInterface @ 0x8630b38

/* ThreadInterface::ThreadInterface() */

void __thiscall ThreadInterface::ThreadInterface(ThreadInterface *this)

{
  *(undefined ***)this = &PTR_stop_08ce6b98;
  return;
}

```

---

## begin

```asm
// === 08630b8a ThreadInterface::begin  [0x08630b8a-0x8630c13] ===
 8630b8a:	55                   	push   %ebp
 8630b8b:	89 e5                	mov    %esp,%ebp
 8630b8d:	83 ec 28             	sub    $0x28,%esp
 8630b90:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b93:	8d 50 04             	lea    0x4(%eax),%edx
 8630b96:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b99:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8630b9d:	c7 44 24 08 1a 0c 63 	movl   $0x8630c1a,0x8(%esp)
 8630ba4:	08 
 8630ba5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8630bac:	00 
 8630bad:	89 14 24             	mov    %edx,(%esp)
 8630bb0:	e8 db cc a4 ff       	call   807d890 <pthread_create@plt>
 8630bb5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8630bb8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8630bbc:	74 43                	je     8630c01 <_ZN15ThreadInterface5beginEv+0x77>
 8630bbe:	c7 44 24 04 20 66 ce 	movl   $0x8ce6620,0x4(%esp)
 8630bc5:	08 
 8630bc6:	c7 04 24 c0 b3 48 09 	movl   $0x948b3c0,(%esp)
 8630bcd:	e8 2e c7 0c 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8630bd2:	c7 44 24 04 4c 66 ce 	movl   $0x8ce664c,0x4(%esp)
 8630bd9:	08 
 8630bda:	89 04 24             	mov    %eax,(%esp)
 8630bdd:	e8 1e c7 0c 00       	call   86fd300 <_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc>
 8630be2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8630be5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8630be9:	89 04 24             	mov    %eax,(%esp)
 8630bec:	e8 4f f4 0c 00       	call   8700040 <_ZNSolsEi>
 8630bf1:	c7 44 24 04 b0 d7 6f 	movl   $0x86fd7b0,0x4(%esp)
 8630bf8:	08 
 8630bf9:	89 04 24             	mov    %eax,(%esp)
 8630bfc:	e8 5f ac 0c 00       	call   86fb860 <_ZNSolsEPFRSoS_E>
 8630c01:	8b 45 08             	mov    0x8(%ebp),%eax
 8630c04:	8b 50 04             	mov    0x4(%eax),%edx
 8630c07:	8b 45 08             	mov    0x8(%ebp),%eax
 8630c0a:	89 50 08             	mov    %edx,0x8(%eax)
 8630c0d:	b8 01 00 00 00       	mov    $0x1,%eax
 8630c12:	c9                   	leave
 8630c13:	c3                   	ret

```

```c
// ThreadInterface::begin @ 0x8630b8a

/* ThreadInterface::begin() */

undefined4 __thiscall ThreadInterface::begin(ThreadInterface *this)

{
  int iVar1;
  ostream *poVar2;
  
  iVar1 = pthread_create((pthread_t *)(this + 4),(pthread_attr_t *)0x0,dispatch_proxy,this);
  if (iVar1 != 0) {
    poVar2 = std::operator<<((ostream *)std::cout,"[ThreadInterface::begin] Can\'t begin thread");
    poVar2 = std::operator<<(poVar2," ");
    poVar2 = (ostream *)std::ostream::operator<<(poVar2,iVar1);
    std::ostream::operator<<(poVar2,std::endl<char,std::char_traits<char>>);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 4);
  return 1;
}

```

---

## dispatch_proxy

```asm
// === 08630c1a ThreadInterface::dispatch_proxy  [0x08630c1a-0x8630c45] ===
 8630c1a:	55                   	push   %ebp
 8630c1b:	89 e5                	mov    %esp,%ebp
 8630c1d:	83 ec 28             	sub    $0x28,%esp
 8630c20:	8b 45 08             	mov    0x8(%ebp),%eax
 8630c23:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8630c26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8630c29:	8b 00                	mov    (%eax),%eax
 8630c2b:	83 c0 0c             	add    $0xc,%eax
 8630c2e:	8b 10                	mov    (%eax),%edx
 8630c30:	8b 45 08             	mov    0x8(%ebp),%eax
 8630c33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8630c37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8630c3a:	89 04 24             	mov    %eax,(%esp)
 8630c3d:	ff d2                	call   *%edx
 8630c3f:	b8 00 00 00 00       	mov    $0x0,%eax
 8630c44:	c9                   	leave
 8630c45:	c3                   	ret

```

```c
// ThreadInterface::dispatch_proxy @ 0x8630c1a

/* ThreadInterface::dispatch_proxy(void*) */

undefined4 ThreadInterface::dispatch_proxy(void *param_1)

{
  (**(code **)(*(int *)param_1 + 0xc))(param_1,param_1);
  return 0;
}

```

---

## join

```asm
// === 08630c46 ThreadInterface::join  [0x08630c46-0x8630c78] ===
 8630c46:	55                   	push   %ebp
 8630c47:	89 e5                	mov    %esp,%ebp
 8630c49:	83 ec 18             	sub    $0x18,%esp
 8630c4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8630c4f:	8b 40 04             	mov    0x4(%eax),%eax
 8630c52:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8630c59:	00 
 8630c5a:	89 04 24             	mov    %eax,(%esp)
 8630c5d:	e8 de d6 a4 ff       	call   807e340 <pthread_join@plt>
 8630c62:	85 c0                	test   %eax,%eax
 8630c64:	0f 95 c0             	setne  %al
 8630c67:	84 c0                	test   %al,%al
 8630c69:	74 07                	je     8630c72 <_ZN15ThreadInterface4joinEv+0x2c>
 8630c6b:	b8 00 00 00 00       	mov    $0x0,%eax
 8630c70:	eb 05                	jmp    8630c77 <_ZN15ThreadInterface4joinEv+0x31>
 8630c72:	b8 01 00 00 00       	mov    $0x1,%eax
 8630c77:	c9                   	leave
 8630c78:	c3                   	ret

```

```c
// ThreadInterface::join @ 0x8630c46

/* ThreadInterface::join() */

bool __thiscall ThreadInterface::join(ThreadInterface *this)

{
  int iVar1;
  
  iVar1 = pthread_join(*(pthread_t *)(this + 4),(void **)0x0);
  return iVar1 == 0;
}

```

---

## stop

```asm
// === 08630c14 ThreadInterface::stop  [0x08630c14-0x8630c19] ===
 8630c14:	55                   	push   %ebp
 8630c15:	89 e5                	mov    %esp,%ebp
 8630c17:	5d                   	pop    %ebp
 8630c18:	c3                   	ret
 8630c19:	90                   	nop

```

```c
// ThreadInterface::stop @ 0x8630c14

/* ThreadInterface::stop() */

void ThreadInterface::stop(void)

{
  return;
}

```

---

## ~ThreadInterface

```asm
// === 08630b46 ThreadInterface::~ThreadInterface  [0x08630b46-0x8630b6b] ===
 8630b46:	55                   	push   %ebp
 8630b47:	89 e5                	mov    %esp,%ebp
 8630b49:	83 ec 18             	sub    $0x18,%esp
 8630b4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b4f:	c7 00 98 6b ce 08    	movl   $0x8ce6b98,(%eax)
 8630b55:	b8 00 00 00 00       	mov    $0x0,%eax
 8630b5a:	84 c0                	test   %al,%al
 8630b5c:	74 0b                	je     8630b69 <_ZN15ThreadInterfaceD1Ev+0x23>
 8630b5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b61:	89 04 24             	mov    %eax,(%esp)
 8630b64:	e8 87 39 0f 00       	call   87244f0 <_ZdlPv>
 8630b69:	c9                   	leave
 8630b6a:	c3                   	ret
 8630b6b:	90                   	nop

```

```c
// ThreadInterface::~ThreadInterface @ 0x8630b46

/* WARNING: Removing unreachable block (ram,0x08630b5e) */
/* ThreadInterface::~ThreadInterface() */

void __thiscall ThreadInterface::~ThreadInterface(ThreadInterface *this)

{
  *(undefined ***)this = &PTR_stop_08ce6b98;
  return;
}

```

---

## ~ThreadInterface_08630b6c

```asm
// === 08630b6c ThreadInterface::~ThreadInterface  [0x08630b6c-0x8630b89] ===
 8630b6c:	55                   	push   %ebp
 8630b6d:	89 e5                	mov    %esp,%ebp
 8630b6f:	83 ec 18             	sub    $0x18,%esp
 8630b72:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b75:	89 04 24             	mov    %eax,(%esp)
 8630b78:	e8 c9 ff ff ff       	call   8630b46 <_ZN15ThreadInterfaceD1Ev>
 8630b7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8630b80:	89 04 24             	mov    %eax,(%esp)
 8630b83:	e8 68 39 0f 00       	call   87244f0 <_ZdlPv>
 8630b88:	c9                   	leave
 8630b89:	c3                   	ret

```

```c
// ThreadInterface::~ThreadInterface @ 0x8630b6c

/* ThreadInterface::~ThreadInterface() */

void __thiscall ThreadInterface::~ThreadInterface(ThreadInterface *this)

{
  ~ThreadInterface(this);
  operator_delete(this);
  return;
}

```

