# private_store

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## GetInstancePrivateStoreMgr

```asm
// === 085c4be8 private_store::GetInstancePrivateStoreMgr  [0x085c4be8-0x85c4c7b] ===
 85c4be8:	55                   	push   %ebp
 85c4be9:	89 e5                	mov    %esp,%ebp
 85c4beb:	57                   	push   %edi
 85c4bec:	56                   	push   %esi
 85c4bed:	53                   	push   %ebx
 85c4bee:	83 ec 1c             	sub    $0x1c,%esp
 85c4bf1:	b8 20 2e 47 09       	mov    $0x9472e20,%eax
 85c4bf6:	0f b6 00             	movzbl (%eax),%eax
 85c4bf9:	84 c0                	test   %al,%al
 85c4bfb:	75 71                	jne    85c4c6e <_ZN13private_store26GetInstancePrivateStoreMgrEv+0x86>
 85c4bfd:	c7 04 24 20 2e 47 09 	movl   $0x9472e20,(%esp)
 85c4c04:	e8 27 07 16 00       	call   8725330 <__cxa_guard_acquire>
 85c4c09:	85 c0                	test   %eax,%eax
 85c4c0b:	0f 95 c0             	setne  %al
 85c4c0e:	84 c0                	test   %al,%al
 85c4c10:	74 5c                	je     85c4c6e <_ZN13private_store26GetInstancePrivateStoreMgrEv+0x86>
 85c4c12:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c4c17:	c7 04 24 60 2e 47 09 	movl   $0x9472e60,(%esp)
 85c4c1e:	e8 b3 57 00 00       	call   85ca3d6 <_ZN13private_store16CPrivateStoreMgrC1Ev>
 85c4c23:	c7 04 24 20 2e 47 09 	movl   $0x9472e20,(%esp)
 85c4c2a:	e8 21 06 16 00       	call   8725250 <__cxa_guard_release>
 85c4c2f:	b8 fe a4 5c 08       	mov    $0x85ca4fe,%eax
 85c4c34:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 85c4c3b:	08 
 85c4c3c:	c7 44 24 04 60 2e 47 	movl   $0x9472e60,0x4(%esp)
 85c4c43:	09 
 85c4c44:	89 04 24             	mov    %eax,(%esp)
 85c4c47:	e8 84 91 ab ff       	call   807ddd0 <__cxa_atexit@plt>
 85c4c4c:	eb 20                	jmp    85c4c6e <_ZN13private_store26GetInstancePrivateStoreMgrEv+0x86>
 85c4c4e:	89 d6                	mov    %edx,%esi
 85c4c50:	89 c7                	mov    %eax,%edi
 85c4c52:	84 db                	test   %bl,%bl
 85c4c54:	75 0c                	jne    85c4c62 <_ZN13private_store26GetInstancePrivateStoreMgrEv+0x7a>
 85c4c56:	c7 04 24 20 2e 47 09 	movl   $0x9472e20,(%esp)
 85c4c5d:	e8 5e 06 16 00       	call   87252c0 <__cxa_guard_abort>
 85c4c62:	89 f8                	mov    %edi,%eax
 85c4c64:	89 f2                	mov    %esi,%edx
 85c4c66:	89 04 24             	mov    %eax,(%esp)
 85c4c69:	e8 e2 ea 51 00       	call   8ae3750 <_Unwind_Resume>
 85c4c6e:	b8 60 2e 47 09       	mov    $0x9472e60,%eax
 85c4c73:	83 c4 1c             	add    $0x1c,%esp
 85c4c76:	5b                   	pop    %ebx
 85c4c77:	5e                   	pop    %esi
 85c4c78:	5f                   	pop    %edi
 85c4c79:	5d                   	pop    %ebp
 85c4c7a:	c3                   	ret
 85c4c7b:	90                   	nop

```

```c
// private_store::GetInstancePrivateStoreMgr @ 0x85c4be8

/* private_store::GetInstancePrivateStoreMgr() */

undefined1 * private_store::GetInstancePrivateStoreMgr(void)

{
  int iVar1;
  
  if (GetInstancePrivateStoreMgr()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstancePrivateStoreMgr()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 085c4c1e to 085c4c22 has its CatchHandler @ 085c4c4e */
      CPrivateStoreMgr::CPrivateStoreMgr((CPrivateStoreMgr *)GetInstancePrivateStoreMgr()::instance)
      ;
      __cxa_guard_release(&GetInstancePrivateStoreMgr()::instance);
      __cxa_atexit(CPrivateStoreMgr::~CPrivateStoreMgr,GetInstancePrivateStoreMgr()::instance,
                   &__dso_handle);
    }
  }
  return GetInstancePrivateStoreMgr()::instance;
}

```

