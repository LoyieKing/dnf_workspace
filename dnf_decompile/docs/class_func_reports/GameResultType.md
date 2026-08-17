# GameResultType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Clear

```asm
// === 084b7442 GameResultType::Clear  [0x084b7442-0x84b750b] ===
 84b7442:	55                   	push   %ebp
 84b7443:	89 e5                	mov    %esp,%ebp
 84b7445:	83 ec 18             	sub    $0x18,%esp
 84b7448:	8b 45 08             	mov    0x8(%ebp),%eax
 84b744b:	c6 00 00             	movb   $0x0,(%eax)
 84b744e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7451:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84b7458:	8b 45 08             	mov    0x8(%ebp),%eax
 84b745b:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b745f:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7462:	c6 40 09 00          	movb   $0x0,0x9(%eax)
 84b7466:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7469:	c6 40 0a 00          	movb   $0x0,0xa(%eax)
 84b746d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7470:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 84b7477:	8b 45 08             	mov    0x8(%ebp),%eax
 84b747a:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 84b747e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7481:	66 c7 40 34 00 00    	movw   $0x0,0x34(%eax)
 84b7487:	8b 45 08             	mov    0x8(%ebp),%eax
 84b748a:	66 c7 40 36 00 00    	movw   $0x0,0x36(%eax)
 84b7490:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7493:	66 c7 40 38 00 00    	movw   $0x0,0x38(%eax)
 84b7499:	8b 45 08             	mov    0x8(%ebp),%eax
 84b749c:	66 c7 40 3a 00 00    	movw   $0x0,0x3a(%eax)
 84b74a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74a5:	66 c7 40 3c 00 00    	movw   $0x0,0x3c(%eax)
 84b74ab:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74ae:	66 c7 40 3e 00 00    	movw   $0x0,0x3e(%eax)
 84b74b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74b7:	66 c7 40 40 00 00    	movw   $0x0,0x40(%eax)
 84b74bd:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74c0:	66 c7 40 42 00 00    	movw   $0x0,0x42(%eax)
 84b74c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74c9:	66 c7 40 48 00 00    	movw   $0x0,0x48(%eax)
 84b74cf:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74d2:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 84b74d9:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74dc:	66 c7 40 4a 00 00    	movw   $0x0,0x4a(%eax)
 84b74e2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74e5:	c7 40 4c 00 00 00 00 	movl   $0x0,0x4c(%eax)
 84b74ec:	8b 45 08             	mov    0x8(%ebp),%eax
 84b74ef:	83 c0 14             	add    $0x14,%eax
 84b74f2:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 84b74f9:	00 
 84b74fa:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b7501:	00 
 84b7502:	89 04 24             	mov    %eax,(%esp)
 84b7505:	e8 b6 67 bc ff       	call   807dcc0 <memset@plt>
 84b750a:	c9                   	leave
 84b750b:	c3                   	ret

```

```c
// GameResultType::Clear @ 0x84b7442

/* GameResultType::Clear() */

void __thiscall GameResultType::Clear(GameResultType *this)

{
  *this = (GameResultType)0x0;
  *(undefined4 *)(this + 4) = 0;
  this[8] = (GameResultType)0x0;
  this[9] = (GameResultType)0x0;
  this[10] = (GameResultType)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (GameResultType)0x0;
  *(undefined2 *)(this + 0x34) = 0;
  *(undefined2 *)(this + 0x36) = 0;
  *(undefined2 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x3a) = 0;
  *(undefined2 *)(this + 0x3c) = 0;
  *(undefined2 *)(this + 0x3e) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(undefined2 *)(this + 0x42) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined2 *)(this + 0x4a) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  memset(this + 0x14,0,0x20);
  return;
}

```

---

## GameResultType

```asm
// === 084b73d4 GameResultType::GameResultType  [0x084b73d4-0x84b7415] ===
 84b73d4:	55                   	push   %ebp
 84b73d5:	89 e5                	mov    %esp,%ebp
 84b73d7:	56                   	push   %esi
 84b73d8:	53                   	push   %ebx
 84b73d9:	83 ec 10             	sub    $0x10,%esp
 84b73dc:	8b 45 08             	mov    0x8(%ebp),%eax
 84b73df:	83 c0 14             	add    $0x14,%eax
 84b73e2:	89 c3                	mov    %eax,%ebx
 84b73e4:	be 03 00 00 00       	mov    $0x3,%esi
 84b73e9:	eb 0e                	jmp    84b73f9 <_ZN14GameResultTypeC1Ev+0x25>
 84b73eb:	89 1c 24             	mov    %ebx,(%esp)
 84b73ee:	e8 77 02 00 00       	call   84b766a <_ZN20DungeonUserShotCountC1Ev>
 84b73f3:	83 c3 08             	add    $0x8,%ebx
 84b73f6:	83 ee 01             	sub    $0x1,%esi
 84b73f9:	83 fe ff             	cmp    $0xffffffff,%esi
 84b73fc:	0f 95 c0             	setne  %al
 84b73ff:	84 c0                	test   %al,%al
 84b7401:	75 e8                	jne    84b73eb <_ZN14GameResultTypeC1Ev+0x17>
 84b7403:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7406:	89 04 24             	mov    %eax,(%esp)
 84b7409:	e8 34 00 00 00       	call   84b7442 <_ZN14GameResultType5ClearEv>
 84b740e:	83 c4 10             	add    $0x10,%esp
 84b7411:	5b                   	pop    %ebx
 84b7412:	5e                   	pop    %esi
 84b7413:	5d                   	pop    %ebp
 84b7414:	c3                   	ret
 84b7415:	90                   	nop

```

```c
// GameResultType::GameResultType @ 0x84b73d4

/* GameResultType::GameResultType() */

void __thiscall GameResultType::GameResultType(GameResultType *this)

{
  DungeonUserShotCount *this_00;
  int iVar1;
  
  this_00 = (DungeonUserShotCount *)(this + 0x14);
  for (iVar1 = 3; iVar1 != -1; iVar1 = iVar1 + -1) {
    DungeonUserShotCount::DungeonUserShotCount(this_00);
    this_00 = this_00 + 8;
  }
  Clear(this);
  return;
}

```

---

## GetUniqueKey

```asm
// === 084b75ae GameResultType::GetUniqueKey  [0x084b75ae-0x84b75d1] ===
 84b75ae:	55                   	push   %ebp
 84b75af:	89 e5                	mov    %esp,%ebp
 84b75b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84b75b4:	8b 50 04             	mov    0x4(%eax),%edx
 84b75b7:	89 d0                	mov    %edx,%eax
 84b75b9:	c1 e0 02             	shl    $0x2,%eax
 84b75bc:	01 d0                	add    %edx,%eax
 84b75be:	01 c0                	add    %eax,%eax
 84b75c0:	89 c2                	mov    %eax,%edx
 84b75c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84b75c5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b75c9:	0f b6 c0             	movzbl %al,%eax
 84b75cc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84b75cf:	5d                   	pop    %ebp
 84b75d0:	c3                   	ret
 84b75d1:	90                   	nop

```

```c
// GameResultType::GetUniqueKey @ 0x84b75ae

/* GameResultType::GetUniqueKey() */

int __thiscall GameResultType::GetUniqueKey(GameResultType *this)

{
  return *(int *)(this + 4) * 10 + (uint)(byte)this[8];
}

```

---

## Set

```asm
// === 084b741c GameResultType::Set  [0x084b741c-0x84b7441] ===
 84b741c:	55                   	push   %ebp
 84b741d:	89 e5                	mov    %esp,%ebp
 84b741f:	57                   	push   %edi
 84b7420:	56                   	push   %esi
 84b7421:	53                   	push   %ebx
 84b7422:	8b 55 08             	mov    0x8(%ebp),%edx
 84b7425:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7428:	89 c3                	mov    %eax,%ebx
 84b742a:	b8 14 00 00 00       	mov    $0x14,%eax
 84b742f:	89 d7                	mov    %edx,%edi
 84b7431:	89 de                	mov    %ebx,%esi
 84b7433:	89 c1                	mov    %eax,%ecx
 84b7435:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 84b7437:	b8 01 00 00 00       	mov    $0x1,%eax
 84b743c:	5b                   	pop    %ebx
 84b743d:	5e                   	pop    %esi
 84b743e:	5f                   	pop    %edi
 84b743f:	5d                   	pop    %ebp
 84b7440:	c3                   	ret
 84b7441:	90                   	nop

```

```c
// GameResultType::Set @ 0x84b741c

/* GameResultType::Set(GameResultType const&) */

undefined4 __thiscall GameResultType::Set(GameResultType *this,GameResultType *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)this = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    this = this + 4;
  }
  return 1;
}

```

---

## UpdateHighScore

```asm
// === 084b750c GameResultType::UpdateHighScore  [0x084b750c-0x84b75ad] ===
 84b750c:	55                   	push   %ebp
 84b750d:	89 e5                	mov    %esp,%ebp
 84b750f:	83 ec 10             	sub    $0x10,%esp
 84b7512:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 84b7519:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b751c:	0f b7 50 40          	movzwl 0x40(%eax),%edx
 84b7520:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7523:	0f b7 40 40          	movzwl 0x40(%eax),%eax
 84b7527:	66 39 c2             	cmp    %ax,%dx
 84b752a:	76 12                	jbe    84b753e <_ZN14GameResultType15UpdateHighScoreERKS_+0x32>
 84b752c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b752f:	0f b7 50 40          	movzwl 0x40(%eax),%edx
 84b7533:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7536:	66 89 50 40          	mov    %dx,0x40(%eax)
 84b753a:	83 4d fc 01          	orl    $0x1,-0x4(%ebp)
 84b753e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7541:	0f b7 50 42          	movzwl 0x42(%eax),%edx
 84b7545:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7548:	0f b7 40 42          	movzwl 0x42(%eax),%eax
 84b754c:	66 39 c2             	cmp    %ax,%dx
 84b754f:	76 12                	jbe    84b7563 <_ZN14GameResultType15UpdateHighScoreERKS_+0x57>
 84b7551:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7554:	0f b7 50 42          	movzwl 0x42(%eax),%edx
 84b7558:	8b 45 08             	mov    0x8(%ebp),%eax
 84b755b:	66 89 50 42          	mov    %dx,0x42(%eax)
 84b755f:	83 4d fc 02          	orl    $0x2,-0x4(%ebp)
 84b7563:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7566:	0f b7 50 48          	movzwl 0x48(%eax),%edx
 84b756a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b756d:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 84b7571:	66 39 c2             	cmp    %ax,%dx
 84b7574:	76 12                	jbe    84b7588 <_ZN14GameResultType15UpdateHighScoreERKS_+0x7c>
 84b7576:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b7579:	0f b7 50 48          	movzwl 0x48(%eax),%edx
 84b757d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7580:	66 89 50 48          	mov    %dx,0x48(%eax)
 84b7584:	83 4d fc 08          	orl    $0x8,-0x4(%ebp)
 84b7588:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b758b:	8b 50 44             	mov    0x44(%eax),%edx
 84b758e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b7591:	8b 40 44             	mov    0x44(%eax),%eax
 84b7594:	39 c2                	cmp    %eax,%edx
 84b7596:	73 10                	jae    84b75a8 <_ZN14GameResultType15UpdateHighScoreERKS_+0x9c>
 84b7598:	8b 45 0c             	mov    0xc(%ebp),%eax
 84b759b:	8b 50 44             	mov    0x44(%eax),%edx
 84b759e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b75a1:	89 50 44             	mov    %edx,0x44(%eax)
 84b75a4:	83 4d fc 04          	orl    $0x4,-0x4(%ebp)
 84b75a8:	8b 45 fc             	mov    -0x4(%ebp),%eax
 84b75ab:	c9                   	leave
 84b75ac:	c3                   	ret
 84b75ad:	90                   	nop

```

```c
// GameResultType::UpdateHighScore @ 0x84b750c

/* GameResultType::UpdateHighScore(GameResultType const&) */

byte __thiscall GameResultType::UpdateHighScore(GameResultType *this,GameResultType *param_1)

{
  byte bVar1;
  
  bVar1 = *(ushort *)(this + 0x40) < *(ushort *)(param_1 + 0x40);
  if ((bool)bVar1) {
    *(undefined2 *)(this + 0x40) = *(undefined2 *)(param_1 + 0x40);
  }
  if (*(ushort *)(this + 0x42) < *(ushort *)(param_1 + 0x42)) {
    *(undefined2 *)(this + 0x42) = *(undefined2 *)(param_1 + 0x42);
    bVar1 = bVar1 | 2;
  }
  if (*(ushort *)(this + 0x48) < *(ushort *)(param_1 + 0x48)) {
    *(undefined2 *)(this + 0x48) = *(undefined2 *)(param_1 + 0x48);
    bVar1 = bVar1 | 8;
  }
  if (*(uint *)(param_1 + 0x44) < *(uint *)(this + 0x44)) {
    *(undefined4 *)(this + 0x44) = *(undefined4 *)(param_1 + 0x44);
    bVar1 = bVar1 | 4;
  }
  return bVar1;
}

```

---

## ~GameResultType

```asm
// === 084b7416 GameResultType::~GameResultType  [0x084b7416-0x84b741b] ===
 84b7416:	55                   	push   %ebp
 84b7417:	89 e5                	mov    %esp,%ebp
 84b7419:	5d                   	pop    %ebp
 84b741a:	c3                   	ret
 84b741b:	90                   	nop

```

```c
// GameResultType::~GameResultType @ 0x84b7416

/* GameResultType::~GameResultType() */

void __thiscall GameResultType::~GameResultType(GameResultType *this)

{
  return;
}

```

