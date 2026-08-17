# WongWork__CGenerateRandomNumber

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CGenerateRandomNumber

```asm
// === 085334ea WongWork::CGenerateRandomNumber::CGenerateRandomNumber  [0x085334ea-0x85335cf] ===
 85334ea:	55                   	push   %ebp
 85334eb:	89 e5                	mov    %esp,%ebp
 85334ed:	57                   	push   %edi
 85334ee:	56                   	push   %esi
 85334ef:	53                   	push   %ebx
 85334f0:	83 ec 2c             	sub    $0x2c,%esp
 85334f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85334f6:	8b 55 0c             	mov    0xc(%ebp),%edx
 85334f9:	89 50 04             	mov    %edx,0x4(%eax)
 85334fc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8533500:	0f 84 c2 00 00 00    	je     85335c8 <_ZN8WongWork21CGenerateRandomNumberC1Ei+0xde>
 8533506:	8b 45 08             	mov    0x8(%ebp),%eax
 8533509:	8b 40 04             	mov    0x4(%eax),%eax
 853350c:	89 c7                	mov    %eax,%edi
 853350e:	69 c7 c8 09 00 00    	imul   $0x9c8,%edi,%eax
 8533514:	89 04 24             	mov    %eax,(%esp)
 8533517:	e8 a4 f8 1e 00       	call   8722dc0 <_Znaj>
 853351c:	89 c3                	mov    %eax,%ebx
 853351e:	89 d8                	mov    %ebx,%eax
 8533520:	89 c6                	mov    %eax,%esi
 8533522:	8d 47 ff             	lea    -0x1(%edi),%eax
 8533525:	89 c7                	mov    %eax,%edi
 8533527:	eb 11                	jmp    853353a <_ZN8WongWork21CGenerateRandomNumberC1Ei+0x50>
 8533529:	89 34 24             	mov    %esi,(%esp)
 853352c:	e8 17 6a ba ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 8533531:	81 c6 c8 09 00 00    	add    $0x9c8,%esi
 8533537:	83 ef 01             	sub    $0x1,%edi
 853353a:	83 ff ff             	cmp    $0xffffffff,%edi
 853353d:	0f 95 c0             	setne  %al
 8533540:	84 c0                	test   %al,%al
 8533542:	75 e5                	jne    8533529 <_ZN8WongWork21CGenerateRandomNumberC1Ei+0x3f>
 8533544:	89 da                	mov    %ebx,%edx
 8533546:	8b 45 08             	mov    0x8(%ebp),%eax
 8533549:	89 10                	mov    %edx,(%eax)
 853354b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8533552:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8533559:	eb 50                	jmp    85335ab <_ZN8WongWork21CGenerateRandomNumberC1Ei+0xc1>
 853355b:	89 d6                	mov    %edx,%esi
 853355d:	89 c7                	mov    %eax,%edi
 853355f:	89 1c 24             	mov    %ebx,(%esp)
 8533562:	e8 49 16 1f 00       	call   8724bb0 <_ZdaPv>
 8533567:	89 f8                	mov    %edi,%eax
 8533569:	89 f2                	mov    %esi,%edx
 853356b:	89 04 24             	mov    %eax,(%esp)
 853356e:	e8 dd 01 5b 00       	call   8ae3750 <_Unwind_Resume>
 8533573:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 853357a:	e8 d1 a1 b4 ff       	call   807d750 <time@plt>
 853357f:	8b 15 cc de 43 09    	mov    0x943decc,%edx
 8533585:	01 d0                	add    %edx,%eax
 8533587:	03 45 e4             	add    -0x1c(%ebp),%eax
 853358a:	8b 55 08             	mov    0x8(%ebp),%edx
 853358d:	8b 0a                	mov    (%edx),%ecx
 853358f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8533592:	69 d2 c8 09 00 00    	imul   $0x9c8,%edx,%edx
 8533598:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 853359b:	89 44 24 04          	mov    %eax,0x4(%esp)
 853359f:	89 14 24             	mov    %edx,(%esp)
 85335a2:	e8 77 85 b9 ff       	call   80cbb1e <_ZN7CMTRand4seedEm>
 85335a7:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85335ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85335ae:	8b 40 04             	mov    0x4(%eax),%eax
 85335b1:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85335b4:	0f 9f c0             	setg   %al
 85335b7:	84 c0                	test   %al,%al
 85335b9:	75 b8                	jne    8533573 <_ZN8WongWork21CGenerateRandomNumberC1Ei+0x89>
 85335bb:	a1 cc de 43 09       	mov    0x943decc,%eax
 85335c0:	03 45 e4             	add    -0x1c(%ebp),%eax
 85335c3:	a3 cc de 43 09       	mov    %eax,0x943decc
 85335c8:	83 c4 2c             	add    $0x2c,%esp
 85335cb:	5b                   	pop    %ebx
 85335cc:	5e                   	pop    %esi
 85335cd:	5f                   	pop    %edi
 85335ce:	5d                   	pop    %ebp
 85335cf:	c3                   	ret

```

```c
// WongWork::CGenerateRandomNumber::CGenerateRandomNumber @ 0x85334ea

/* WongWork::CGenerateRandomNumber::CGenerateRandomNumber(int) */

void __thiscall
WongWork::CGenerateRandomNumber::CGenerateRandomNumber(CGenerateRandomNumber *this,int param_1)

{
  CMTRand *pCVar1;
  time_t tVar2;
  CMTRand *this_00;
  int iVar3;
  int local_20;
  
  *(int *)(this + 4) = param_1;
  if (param_1 != 0) {
    iVar3 = *(int *)(this + 4);
    pCVar1 = operator_new__(iVar3 * 0x9c8);
    this_00 = pCVar1;
    while (iVar3 = iVar3 + -1, iVar3 != -1) {
                    /* try { // try from 0853352c to 08533530 has its CatchHandler @ 0853355b */
      CMTRand::CMTRand(this_00);
      this_00 = this_00 + 0x9c8;
    }
    *(CMTRand **)this = pCVar1;
    for (local_20 = 0; local_20 < *(int *)(this + 4); local_20 = local_20 + 1) {
      tVar2 = time((time_t *)0x0);
      CMTRand::seed((CMTRand *)(*(int *)this + local_20 * 0x9c8),
                    tVar2 + CGenerateRandomNumber(int)::seedIncValue + local_20);
    }
    CGenerateRandomNumber(int)::seedIncValue = CGenerateRandomNumber(int)::seedIncValue + local_20;
  }
  return;
}

```

---

## generateNumber

```asm
// === 085334a4 WongWork::CGenerateRandomNumber::generateNumber  [0x085334a4-0x85334e9] ===
 85334a4:	55                   	push   %ebp
 85334a5:	89 e5                	mov    %esp,%ebp
 85334a7:	83 ec 28             	sub    $0x28,%esp
 85334aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85334ad:	8b 40 04             	mov    0x4(%eax),%eax
 85334b0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85334b3:	7d 0d                	jge    85334c2 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii+0x1e>
 85334b5:	8b 45 10             	mov    0x10(%ebp),%eax
 85334b8:	89 04 24             	mov    %eax,(%esp)
 85334bb:	e8 c7 e6 17 00       	call   86b1b87 <_Z12get_rand_inti>
 85334c0:	eb 25                	jmp    85334e7 <_ZN8WongWork21CGenerateRandomNumber14generateNumberEii+0x43>
 85334c2:	8b 45 10             	mov    0x10(%ebp),%eax
 85334c5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85334c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85334cb:	8b 10                	mov    (%eax),%edx
 85334cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85334d0:	69 c0 c8 09 00 00    	imul   $0x9c8,%eax,%eax
 85334d6:	01 c2                	add    %eax,%edx
 85334d8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85334db:	89 44 24 04          	mov    %eax,0x4(%esp)
 85334df:	89 14 24             	mov    %edx,(%esp)
 85334e2:	e8 d7 85 b9 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85334e7:	c9                   	leave
 85334e8:	c3                   	ret
 85334e9:	90                   	nop

```

```c
// WongWork::CGenerateRandomNumber::generateNumber @ 0x85334a4

/* WongWork::CGenerateRandomNumber::generateNumber(int, int) */

void __thiscall
WongWork::CGenerateRandomNumber::generateNumber(CGenerateRandomNumber *this,int param_1,int param_2)

{
  ulong local_10 [3];
  
  if (*(int *)(this + 4) < param_1) {
    get_rand_int(param_2);
  }
  else {
    local_10[0] = param_2;
    CMTRand::randInt((CMTRand *)(*(int *)this + param_1 * 0x9c8),local_10);
  }
  return;
}

```

---

## ~CGenerateRandomNumber

```asm
// === 085335d0 WongWork::CGenerateRandomNumber::~CGenerateRandomNumber  [0x085335d0-0x85335ed] ===
 85335d0:	55                   	push   %ebp
 85335d1:	89 e5                	mov    %esp,%ebp
 85335d3:	83 ec 18             	sub    $0x18,%esp
 85335d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85335d9:	8b 00                	mov    (%eax),%eax
 85335db:	85 c0                	test   %eax,%eax
 85335dd:	74 0d                	je     85335ec <_ZN8WongWork21CGenerateRandomNumberD1Ev+0x1c>
 85335df:	8b 45 08             	mov    0x8(%ebp),%eax
 85335e2:	8b 00                	mov    (%eax),%eax
 85335e4:	89 04 24             	mov    %eax,(%esp)
 85335e7:	e8 c4 15 1f 00       	call   8724bb0 <_ZdaPv>
 85335ec:	c9                   	leave
 85335ed:	c3                   	ret

```

```c
// WongWork::CGenerateRandomNumber::~CGenerateRandomNumber @ 0x85335d0

/* WongWork::CGenerateRandomNumber::~CGenerateRandomNumber() */

void __thiscall WongWork::CGenerateRandomNumber::~CGenerateRandomNumber(CGenerateRandomNumber *this)

{
  if (*(int *)this != 0) {
    operator_delete__(*(void **)this);
  }
  return;
}

```

