# NullPolicy

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## NullPolicy

```asm
// === 0816d5aa NullPolicy::NullPolicy  [0x0816d5aa-0x816d607] ===
 816d5aa:	55                   	push   %ebp
 816d5ab:	89 e5                	mov    %esp,%ebp
 816d5ad:	56                   	push   %esi
 816d5ae:	53                   	push   %ebx
 816d5af:	83 ec 10             	sub    $0x10,%esp
 816d5b2:	8b 45 08             	mov    0x8(%ebp),%eax
 816d5b5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 816d5bc:	00 
 816d5bd:	89 04 24             	mov    %eax,(%esp)
 816d5c0:	e8 d3 17 00 00       	call   816ed98 <_ZN22InterfaceServicePolicyC1EN16RestrictCategory4EnumE>
 816d5c5:	8b 45 08             	mov    0x8(%ebp),%eax
 816d5c8:	c7 00 28 2f b8 08    	movl   $0x8b82f28,(%eax)
 816d5ce:	8b 45 08             	mov    0x8(%ebp),%eax
 816d5d1:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 816d5d5:	8b 45 08             	mov    0x8(%ebp),%eax
 816d5d8:	83 c0 0c             	add    $0xc,%eax
 816d5db:	89 04 24             	mov    %eax,(%esp)
 816d5de:	e8 8d 17 00 00       	call   816ed70 <_ZN13ServicePolicy4InitEv>
 816d5e3:	eb 1b                	jmp    816d600 <_ZN10NullPolicyC1Ev+0x56>
 816d5e5:	89 d3                	mov    %edx,%ebx
 816d5e7:	89 c6                	mov    %eax,%esi
 816d5e9:	8b 45 08             	mov    0x8(%ebp),%eax
 816d5ec:	89 04 24             	mov    %eax,(%esp)
 816d5ef:	e8 cc 17 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816d5f4:	89 f0                	mov    %esi,%eax
 816d5f6:	89 da                	mov    %ebx,%edx
 816d5f8:	89 04 24             	mov    %eax,(%esp)
 816d5fb:	e8 50 61 97 00       	call   8ae3750 <_Unwind_Resume>
 816d600:	83 c4 10             	add    $0x10,%esp
 816d603:	5b                   	pop    %ebx
 816d604:	5e                   	pop    %esi
 816d605:	5d                   	pop    %ebp
 816d606:	c3                   	ret
 816d607:	90                   	nop

```

```c
// NullPolicy::NullPolicy @ 0x816d5aa

/* NullPolicy::NullPolicy() */

void __thiscall NullPolicy::NullPolicy(NullPolicy *this)

{
  InterfaceServicePolicy::InterfaceServicePolicy((InterfaceServicePolicy *)this,0);
  *(undefined ***)this = &PTR__NullPolicy_08b82f28;
  this[4] = (NullPolicy)0x0;
                    /* try { // try from 0816d5de to 0816d5e2 has its CatchHandler @ 0816d5e5 */
  ServicePolicy::Init((ServicePolicy *)(this + 0xc));
  return;
}

```

---

## beginPolicy

```asm
// === 0816d656 NullPolicy::beginPolicy  [0x0816d656-0x816d65f] ===
 816d656:	55                   	push   %ebp
 816d657:	89 e5                	mov    %esp,%ebp
 816d659:	b8 01 00 00 00       	mov    $0x1,%eax
 816d65e:	5d                   	pop    %ebp
 816d65f:	c3                   	ret

```

```c
// NullPolicy::beginPolicy @ 0x816d656

/* NullPolicy::beginPolicy(std::string const&) */

undefined4 NullPolicy::beginPolicy(string *param_1)

{
  return 1;
}

```

---

## endPolicy

```asm
// === 0816d660 NullPolicy::endPolicy  [0x0816d660-0x816d665] ===
 816d660:	55                   	push   %ebp
 816d661:	89 e5                	mov    %esp,%ebp
 816d663:	5d                   	pop    %ebp
 816d664:	c3                   	ret
 816d665:	90                   	nop

```

```c
// NullPolicy::endPolicy @ 0x816d660

/* NullPolicy::endPolicy() */

void NullPolicy::endPolicy(void)

{
  return;
}

```

---

## getRestrictValue

```asm
// === 0816d6c8 NullPolicy::getRestrictValue  [0x0816d6c8-0x816d6cd] ===
 816d6c8:	55                   	push   %ebp
 816d6c9:	89 e5                	mov    %esp,%ebp
 816d6cb:	5d                   	pop    %ebp
 816d6cc:	c3                   	ret
 816d6cd:	90                   	nop

```

```c
// NullPolicy::getRestrictValue @ 0x816d6c8

/* NullPolicy::getRestrictValue(Taiwan::SigLoadRestrictPolicy&) */

void NullPolicy::getRestrictValue(SigLoadRestrictPolicy *param_1)

{
  return;
}

```

---

## isApply

```asm
// === 0816d666 NullPolicy::isApply  [0x0816d666-0x816d66f] ===
 816d666:	55                   	push   %ebp
 816d667:	89 e5                	mov    %esp,%ebp
 816d669:	b8 01 00 00 00       	mov    $0x1,%eax
 816d66e:	5d                   	pop    %ebp
 816d66f:	c3                   	ret

```

```c
// NullPolicy::isApply @ 0x816d666

/* NullPolicy::isApply() */

undefined4 NullPolicy::isApply(void)

{
  return 1;
}

```

---

## isApply_0816d670

```asm
// === 0816d670 NullPolicy::isApply  [0x0816d670-0x816d679] ===
 816d670:	55                   	push   %ebp
 816d671:	89 e5                	mov    %esp,%ebp
 816d673:	b8 01 00 00 00       	mov    $0x1,%eax
 816d678:	5d                   	pop    %ebp
 816d679:	c3                   	ret

```

```c
// NullPolicy::isApply @ 0x816d670

/* NullPolicy::isApply(int) */

undefined4 NullPolicy::isApply(int param_1)

{
  return 1;
}

```

---

## printRestrict

```asm
// === 0816d67a NullPolicy::printRestrict  [0x0816d67a-0x816d6c7] ===
 816d67a:	55                   	push   %ebp
 816d67b:	89 e5                	mov    %esp,%ebp
 816d67d:	83 ec 38             	sub    $0x38,%esp
 816d680:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 816d687:	00 
 816d688:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 816d68f:	00 
 816d690:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 816d697:	00 
 816d698:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 816d69f:	00 
 816d6a0:	c7 44 24 04 c0 2d b8 	movl   $0x8b82dc0,0x4(%esp)
 816d6a7:	08 
 816d6a8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816d6ab:	89 04 24             	mov    %eax,(%esp)
 816d6ae:	e8 93 20 3e 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 816d6b3:	c7 44 24 04 c6 1b b8 	movl   $0x8b81bc6,0x4(%esp)
 816d6ba:	08 
 816d6bb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 816d6be:	89 04 24             	mov    %eax,(%esp)
 816d6c1:	e8 c2 20 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 816d6c6:	c9                   	leave
 816d6c7:	c3                   	ret

```

```c
// NullPolicy::printRestrict @ 0x816d67a

/* NullPolicy::printRestrict() */

void NullPolicy::printRestrict(void)

{
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual void NullPolicy::printRestrict()",0x52,9,true,true);
  cMyTrace::operator()(local_1c,"\tDummy Restrict");
  return;
}

```

---

## ~NullPolicy

```asm
// === 0816d608 NullPolicy::~NullPolicy  [0x0816d608-0x816d637] ===
 816d608:	55                   	push   %ebp
 816d609:	89 e5                	mov    %esp,%ebp
 816d60b:	83 ec 18             	sub    $0x18,%esp
 816d60e:	8b 45 08             	mov    0x8(%ebp),%eax
 816d611:	c7 00 28 2f b8 08    	movl   $0x8b82f28,(%eax)
 816d617:	8b 45 08             	mov    0x8(%ebp),%eax
 816d61a:	89 04 24             	mov    %eax,(%esp)
 816d61d:	e8 9e 17 00 00       	call   816edc0 <_ZN22InterfaceServicePolicyD1Ev>
 816d622:	b8 00 00 00 00       	mov    $0x0,%eax
 816d627:	84 c0                	test   %al,%al
 816d629:	74 0b                	je     816d636 <_ZN10NullPolicyD1Ev+0x2e>
 816d62b:	8b 45 08             	mov    0x8(%ebp),%eax
 816d62e:	89 04 24             	mov    %eax,(%esp)
 816d631:	e8 ba 6e 5b 00       	call   87244f0 <_ZdlPv>
 816d636:	c9                   	leave
 816d637:	c3                   	ret

```

```c
// NullPolicy::~NullPolicy @ 0x816d608

/* WARNING: Removing unreachable block (ram,0x0816d62b) */
/* NullPolicy::~NullPolicy() */

void __thiscall NullPolicy::~NullPolicy(NullPolicy *this)

{
  *(undefined ***)this = &PTR__NullPolicy_08b82f28;
  InterfaceServicePolicy::~InterfaceServicePolicy((InterfaceServicePolicy *)this);
  return;
}

```

---

## ~NullPolicy_0816d638

```asm
// === 0816d638 NullPolicy::~NullPolicy  [0x0816d638-0x816d655] ===
 816d638:	55                   	push   %ebp
 816d639:	89 e5                	mov    %esp,%ebp
 816d63b:	83 ec 18             	sub    $0x18,%esp
 816d63e:	8b 45 08             	mov    0x8(%ebp),%eax
 816d641:	89 04 24             	mov    %eax,(%esp)
 816d644:	e8 bf ff ff ff       	call   816d608 <_ZN10NullPolicyD1Ev>
 816d649:	8b 45 08             	mov    0x8(%ebp),%eax
 816d64c:	89 04 24             	mov    %eax,(%esp)
 816d64f:	e8 9c 6e 5b 00       	call   87244f0 <_ZdlPv>
 816d654:	c9                   	leave
 816d655:	c3                   	ret

```

```c
// NullPolicy::~NullPolicy @ 0x816d638

/* NullPolicy::~NullPolicy() */

void __thiscall NullPolicy::~NullPolicy(NullPolicy *this)

{
  ~NullPolicy(this);
  operator_delete(this);
  return;
}

```

