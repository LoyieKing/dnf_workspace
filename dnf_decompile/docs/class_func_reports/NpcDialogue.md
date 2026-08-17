# NpcDialogue

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## NpcDialogue

```asm
// === 089fb688 NpcDialogue::NpcDialogue  [0x089fb688-0x89fb71b] ===
 89fb688:	55                   	push   %ebp
 89fb689:	89 e5                	mov    %esp,%ebp
 89fb68b:	56                   	push   %esi
 89fb68c:	53                   	push   %ebx
 89fb68d:	83 ec 10             	sub    $0x10,%esp
 89fb690:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb693:	83 c0 0c             	add    $0xc,%eax
 89fb696:	89 04 24             	mov    %eax,(%esp)
 89fb699:	e8 32 af d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb69e:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb6a1:	83 c0 10             	add    $0x10,%eax
 89fb6a4:	89 04 24             	mov    %eax,(%esp)
 89fb6a7:	e8 24 af d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb6ac:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb6af:	83 c0 14             	add    $0x14,%eax
 89fb6b2:	89 04 24             	mov    %eax,(%esp)
 89fb6b5:	e8 f2 2a 69 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 89fb6ba:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb6bd:	89 04 24             	mov    %eax,(%esp)
 89fb6c0:	e8 57 00 00 00       	call   89fb71c <_ZN11NpcDialogue5clearEv>
 89fb6c5:	eb 4e                	jmp    89fb715 <_ZN11NpcDialogueC1Ev+0x8d>
 89fb6c7:	89 d3                	mov    %edx,%ebx
 89fb6c9:	89 c6                	mov    %eax,%esi
 89fb6cb:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb6ce:	83 c0 14             	add    $0x14,%eax
 89fb6d1:	89 04 24             	mov    %eax,(%esp)
 89fb6d4:	e8 01 87 68 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 89fb6d9:	89 f0                	mov    %esi,%eax
 89fb6db:	89 da                	mov    %ebx,%edx
 89fb6dd:	eb 00                	jmp    89fb6df <_ZN11NpcDialogueC1Ev+0x57>
 89fb6df:	89 d3                	mov    %edx,%ebx
 89fb6e1:	89 c6                	mov    %eax,%esi
 89fb6e3:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb6e6:	83 c0 10             	add    $0x10,%eax
 89fb6e9:	89 04 24             	mov    %eax,(%esp)
 89fb6ec:	e8 ef c4 d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fb6f1:	89 f0                	mov    %esi,%eax
 89fb6f3:	89 da                	mov    %ebx,%edx
 89fb6f5:	eb 00                	jmp    89fb6f7 <_ZN11NpcDialogueC1Ev+0x6f>
 89fb6f7:	89 d3                	mov    %edx,%ebx
 89fb6f9:	89 c6                	mov    %eax,%esi
 89fb6fb:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb6fe:	83 c0 0c             	add    $0xc,%eax
 89fb701:	89 04 24             	mov    %eax,(%esp)
 89fb704:	e8 d7 c4 d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fb709:	89 f0                	mov    %esi,%eax
 89fb70b:	89 da                	mov    %ebx,%edx
 89fb70d:	89 04 24             	mov    %eax,(%esp)
 89fb710:	e8 3b 80 0e 00       	call   8ae3750 <_Unwind_Resume>
 89fb715:	83 c4 10             	add    $0x10,%esp
 89fb718:	5b                   	pop    %ebx
 89fb719:	5e                   	pop    %esi
 89fb71a:	5d                   	pop    %ebp
 89fb71b:	c3                   	ret

```

```c
// NpcDialogue::NpcDialogue @ 0x89fb688

/* NpcDialogue::NpcDialogue() */

void __thiscall NpcDialogue::NpcDialogue(NpcDialogue *this)

{
  std::string::string((string *)(this + 0xc));
                    /* try { // try from 089fb6a7 to 089fb6ab has its CatchHandler @ 089fb6f7 */
  std::string::string((string *)(this + 0x10));
                    /* try { // try from 089fb6b5 to 089fb6b9 has its CatchHandler @ 089fb6df */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x14));
                    /* try { // try from 089fb6c0 to 089fb6c4 has its CatchHandler @ 089fb6c7 */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 089fb71c NpcDialogue::clear  [0x089fb71c-0x89fb78d] ===
 89fb71c:	55                   	push   %ebp
 89fb71d:	89 e5                	mov    %esp,%ebp
 89fb71f:	83 ec 28             	sub    $0x28,%esp
 89fb722:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb725:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 89fb72b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89fb732:	eb 12                	jmp    89fb746 <_ZN11NpcDialogue5clearEv+0x2a>
 89fb734:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89fb737:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb73a:	c7 44 90 04 00 00 00 	movl   $0x0,0x4(%eax,%edx,4)
 89fb741:	00 
 89fb742:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89fb746:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 89fb74a:	0f 9e c0             	setle  %al
 89fb74d:	84 c0                	test   %al,%al
 89fb74f:	75 e3                	jne    89fb734 <_ZN11NpcDialogue5clearEv+0x18>
 89fb751:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb754:	83 c0 0c             	add    $0xc,%eax
 89fb757:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fb75e:	08 
 89fb75f:	89 04 24             	mov    %eax,(%esp)
 89fb762:	e8 b9 cf d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fb767:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb76a:	83 c0 10             	add    $0x10,%eax
 89fb76d:	c7 44 24 04 20 ce e1 	movl   $0x8e1ce20,0x4(%esp)
 89fb774:	08 
 89fb775:	89 04 24             	mov    %eax,(%esp)
 89fb778:	e8 a3 cf d0 ff       	call   8708720 <_ZNSsaSEPKc>
 89fb77d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb780:	83 c0 14             	add    $0x14,%eax
 89fb783:	89 04 24             	mov    %eax,(%esp)
 89fb786:	e8 e3 b3 69 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 89fb78b:	c9                   	leave
 89fb78c:	c3                   	ret
 89fb78d:	90                   	nop

```

```c
// NpcDialogue::clear @ 0x89fb71c

/* NpcDialogue::clear() */

void __thiscall NpcDialogue::clear(NpcDialogue *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 4 + 4) = 0;
  }
  std::string::operator=((string *)(this + 0xc),"");
  std::string::operator=((string *)(this + 0x10),"");
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x14));
  return;
}

```

