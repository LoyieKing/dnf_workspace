# CreateDnfEventSciprtServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Destroy

```asm
// === 08164590 CreateDnfEventSciprtServer::Destroy  [0x08164590-0x8164599] ===
 8164590:	55                   	push   %ebp
 8164591:	89 e5                	mov    %esp,%ebp
 8164593:	b8 01 00 00 00       	mov    $0x1,%eax
 8164598:	5d                   	pop    %ebp
 8164599:	c3                   	ret

```

```c
// CreateDnfEventSciprtServer::Destroy @ 0x8164590

/* CreateDnfEventSciprtServer::Destroy() */

undefined4 CreateDnfEventSciprtServer::Destroy(void)

{
  return 1;
}

```

---

## Load

```asm
// === 0816451e CreateDnfEventSciprtServer::Load  [0x0816451e-0x816458f] ===
 816451e:	55                   	push   %ebp
 816451f:	89 e5                	mov    %esp,%ebp
 8164521:	83 ec 38             	sub    $0x38,%esp
 8164524:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 816452b:	00 
 816452c:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8164533:	00 
 8164534:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816453b:	00 
 816453c:	c7 44 24 08 d0 00 00 	movl   $0xd0,0x8(%esp)
 8164543:	00 
 8164544:	c7 44 24 04 a0 c9 b7 	movl   $0x8b7c9a0,0x4(%esp)
 816454b:	08 
 816454c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816454f:	89 04 24             	mov    %eax,(%esp)
 8164552:	e8 ef b1 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8164557:	c7 44 24 04 64 bc b7 	movl   $0x8b7bc64,0x4(%esp)
 816455e:	08 
 816455f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8164562:	89 04 24             	mov    %eax,(%esp)
 8164565:	e8 1e b2 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816456a:	8b 45 08             	mov    0x8(%ebp),%eax
 816456d:	83 c0 04             	add    $0x4,%eax
 8164570:	89 04 24             	mov    %eax,(%esp)
 8164573:	e8 bc ba 95 00       	call   8ac0034 <_ZN20CreateDnfEventSciprt10loadScriptEv>
 8164578:	85 c0                	test   %eax,%eax
 816457a:	0f 95 c0             	setne  %al
 816457d:	84 c0                	test   %al,%al
 816457f:	74 07                	je     8164588 <_ZN26CreateDnfEventSciprtServer4LoadEv+0x6a>
 8164581:	b8 00 00 00 00       	mov    $0x0,%eax
 8164586:	eb 05                	jmp    816458d <_ZN26CreateDnfEventSciprtServer4LoadEv+0x6f>
 8164588:	b8 01 00 00 00       	mov    $0x1,%eax
 816458d:	c9                   	leave
 816458e:	c3                   	ret
 816458f:	90                   	nop

```

```c
// CreateDnfEventSciprtServer::Load @ 0x816451e

/* CreateDnfEventSciprtServer::Load() */

bool CreateDnfEventSciprtServer::Load(void)

{
  int iVar1;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool CreateDnfEventSciprtServer::Load()",0xd0,9,true,false);
  cMyTrace::operator()(local_1c,"\t- Loading EventCreateDnf script - ");
  iVar1 = CreateDnfEventSciprt::loadScript();
  return iVar1 == 0;
}

```

