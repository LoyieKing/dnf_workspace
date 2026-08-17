# user_creature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GetCreatureEggPoolRemainSize

```asm
// === 08336c9d user_creature::GetCreatureEggPoolRemainSize  [0x08336c9d-0x8336cb9] ===
 8336c9d:	55                   	push   %ebp
 8336c9e:	89 e5                	mov    %esp,%ebp
 8336ca0:	83 ec 18             	sub    $0x18,%esp
 8336ca3:	e8 6d 8a 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 8336ca8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8336caf:	00 
 8336cb0:	89 04 24             	mov    %eax,(%esp)
 8336cb3:	e8 58 88 00 00       	call   833f510 <_ZN13user_creature20CCreatureItemFactory13GetRemainSizeENS_18CREATURE_ITME_TYPEE>
 8336cb8:	c9                   	leave
 8336cb9:	c3                   	ret

```

```c
// user_creature::GetCreatureEggPoolRemainSize @ 0x8336c9d

/* user_creature::GetCreatureEggPoolRemainSize() */

void user_creature::GetCreatureEggPoolRemainSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetRemainSize(pCVar1,0);
  return;
}

```

---

## GetCreatureEggPoolSize

```asm
// === 08336c63 user_creature::GetCreatureEggPoolSize  [0x08336c63-0x8336c7f] ===
 8336c63:	55                   	push   %ebp
 8336c64:	89 e5                	mov    %esp,%ebp
 8336c66:	83 ec 18             	sub    $0x18,%esp
 8336c69:	e8 a7 8a 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 8336c6e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8336c75:	00 
 8336c76:	89 04 24             	mov    %eax,(%esp)
 8336c79:	e8 c8 88 00 00       	call   833f546 <_ZN13user_creature20CCreatureItemFactory7GetSizeENS_18CREATURE_ITME_TYPEE>
 8336c7e:	c9                   	leave
 8336c7f:	c3                   	ret

```

```c
// user_creature::GetCreatureEggPoolSize @ 0x8336c63

/* user_creature::GetCreatureEggPoolSize() */

void user_creature::GetCreatureEggPoolSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetSize(pCVar1,0);
  return;
}

```

---

## GetCreaturePoolRemainSize

```asm
// === 08336cba user_creature::GetCreaturePoolRemainSize  [0x08336cba-0x8336cd7] ===
 8336cba:	55                   	push   %ebp
 8336cbb:	89 e5                	mov    %esp,%ebp
 8336cbd:	83 ec 18             	sub    $0x18,%esp
 8336cc0:	e8 50 8a 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 8336cc5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8336ccc:	00 
 8336ccd:	89 04 24             	mov    %eax,(%esp)
 8336cd0:	e8 3b 88 00 00       	call   833f510 <_ZN13user_creature20CCreatureItemFactory13GetRemainSizeENS_18CREATURE_ITME_TYPEE>
 8336cd5:	c9                   	leave
 8336cd6:	c3                   	ret
 8336cd7:	90                   	nop

```

```c
// user_creature::GetCreaturePoolRemainSize @ 0x8336cba

/* user_creature::GetCreaturePoolRemainSize() */

void user_creature::GetCreaturePoolRemainSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetRemainSize(pCVar1,1);
  return;
}

```

---

## GetCreaturePoolSize

```asm
// === 08336c80 user_creature::GetCreaturePoolSize  [0x08336c80-0x8336c9c] ===
 8336c80:	55                   	push   %ebp
 8336c81:	89 e5                	mov    %esp,%ebp
 8336c83:	83 ec 18             	sub    $0x18,%esp
 8336c86:	e8 8a 8a 00 00       	call   833f715 <_ZN13user_creature30GetInstanceCreatureItemFactoryEv>
 8336c8b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8336c92:	00 
 8336c93:	89 04 24             	mov    %eax,(%esp)
 8336c96:	e8 ab 88 00 00       	call   833f546 <_ZN13user_creature20CCreatureItemFactory7GetSizeENS_18CREATURE_ITME_TYPEE>
 8336c9b:	c9                   	leave
 8336c9c:	c3                   	ret

```

```c
// user_creature::GetCreaturePoolSize @ 0x8336c80

/* user_creature::GetCreaturePoolSize() */

void user_creature::GetCreaturePoolSize(void)

{
  CCreatureItemFactory *pCVar1;
  
  pCVar1 = (CCreatureItemFactory *)GetInstanceCreatureItemFactory();
  CCreatureItemFactory::GetSize(pCVar1,1);
  return;
}

```

---

## GetInstanceCreatureScriptMgr

```asm
// === 08336bd0 user_creature::GetInstanceCreatureScriptMgr  [0x08336bd0-0x8336c62] ===
 8336bd0:	55                   	push   %ebp
 8336bd1:	89 e5                	mov    %esp,%ebp
 8336bd3:	57                   	push   %edi
 8336bd4:	56                   	push   %esi
 8336bd5:	53                   	push   %ebx
 8336bd6:	83 ec 1c             	sub    $0x1c,%esp
 8336bd9:	b8 20 c0 43 09       	mov    $0x943c020,%eax
 8336bde:	0f b6 00             	movzbl (%eax),%eax
 8336be1:	84 c0                	test   %al,%al
 8336be3:	75 71                	jne    8336c56 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x86>
 8336be5:	c7 04 24 20 c0 43 09 	movl   $0x943c020,(%esp)
 8336bec:	e8 3f e7 3e 00       	call   8725330 <__cxa_guard_acquire>
 8336bf1:	85 c0                	test   %eax,%eax
 8336bf3:	0f 95 c0             	setne  %al
 8336bf6:	84 c0                	test   %al,%al
 8336bf8:	74 5c                	je     8336c56 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x86>
 8336bfa:	bb 00 00 00 00       	mov    $0x0,%ebx
 8336bff:	c7 04 24 40 c0 43 09 	movl   $0x943c040,(%esp)
 8336c06:	e8 55 5f 00 00       	call   833cb60 <_ZN13user_creature18CCreatureScriptMgrC1Ev>
 8336c0b:	c7 04 24 20 c0 43 09 	movl   $0x943c020,(%esp)
 8336c12:	e8 39 e6 3e 00       	call   8725250 <__cxa_guard_release>
 8336c17:	b8 ca f4 33 08       	mov    $0x833f4ca,%eax
 8336c1c:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8336c23:	08 
 8336c24:	c7 44 24 04 40 c0 43 	movl   $0x943c040,0x4(%esp)
 8336c2b:	09 
 8336c2c:	89 04 24             	mov    %eax,(%esp)
 8336c2f:	e8 9c 71 d4 ff       	call   807ddd0 <__cxa_atexit@plt>
 8336c34:	eb 20                	jmp    8336c56 <_ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x86>
 8336c36:	89 d6                	mov    %edx,%esi
 8336c38:	89 c7                	mov    %eax,%edi
 8336c3a:	84 db                	test   %bl,%bl
 8336c3c:	75 0c                	jne    8336c4a <_ZN13user_creature28GetInstanceCreatureScriptMgrEv+0x7a>
 8336c3e:	c7 04 24 20 c0 43 09 	movl   $0x943c020,(%esp)
 8336c45:	e8 76 e6 3e 00       	call   87252c0 <__cxa_guard_abort>
 8336c4a:	89 f8                	mov    %edi,%eax
 8336c4c:	89 f2                	mov    %esi,%edx
 8336c4e:	89 04 24             	mov    %eax,(%esp)
 8336c51:	e8 fa ca 7a 00       	call   8ae3750 <_Unwind_Resume>
 8336c56:	b8 40 c0 43 09       	mov    $0x943c040,%eax
 8336c5b:	83 c4 1c             	add    $0x1c,%esp
 8336c5e:	5b                   	pop    %ebx
 8336c5f:	5e                   	pop    %esi
 8336c60:	5f                   	pop    %edi
 8336c61:	5d                   	pop    %ebp
 8336c62:	c3                   	ret

```

```c
// user_creature::GetInstanceCreatureScriptMgr @ 0x8336bd0

/* user_creature::GetInstanceCreatureScriptMgr() */

undefined1 * user_creature::GetInstanceCreatureScriptMgr(void)

{
  int iVar1;
  
  if (GetInstanceCreatureScriptMgr()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&GetInstanceCreatureScriptMgr()::instance);
    if (iVar1 != 0) {
                    /* try { // try from 08336c06 to 08336c0a has its CatchHandler @ 08336c36 */
      CCreatureScriptMgr::CCreatureScriptMgr
                ((CCreatureScriptMgr *)GetInstanceCreatureScriptMgr()::instance);
      __cxa_guard_release(&GetInstanceCreatureScriptMgr()::instance);
      __cxa_atexit(CCreatureScriptMgr::~CCreatureScriptMgr,GetInstanceCreatureScriptMgr()::instance,
                   &__dso_handle);
    }
  }
  return GetInstanceCreatureScriptMgr()::instance;
}

```

