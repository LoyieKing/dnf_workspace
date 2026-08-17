# std__logic_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## logic_error

```asm
// === 086dd250 std::logic_error::logic_error  [0x086dd250-0x86dd28f] ===
 86dd250:	55                   	push   %ebp
 86dd251:	89 e5                	mov    %esp,%ebp
 86dd253:	53                   	push   %ebx
 86dd254:	83 ec 24             	sub    $0x24,%esp
 86dd257:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd25a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd25d:	c7 03 d0 e1 cf 08    	movl   $0x8cfe1d0,(%ebx)
 86dd263:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd267:	8d 43 04             	lea    0x4(%ebx),%eax
 86dd26a:	89 04 24             	mov    %eax,(%esp)
 86dd26d:	e8 3e a7 02 00       	call   87079b0 <_ZNSsC1ERKSs>
 86dd272:	83 c4 24             	add    $0x24,%esp
 86dd275:	5b                   	pop    %ebx
 86dd276:	5d                   	pop    %ebp
 86dd277:	c3                   	ret
 86dd278:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86dd27b:	89 1c 24             	mov    %ebx,(%esp)
 86dd27e:	e8 fd 7d 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86dd283:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86dd286:	89 04 24             	mov    %eax,(%esp)
 86dd289:	e8 c2 64 40 00       	call   8ae3750 <_Unwind_Resume>
 86dd28e:	90                   	nop
 86dd28f:	90                   	nop

```

```c
// std::logic_error::logic_error @ 0x86dd250

/* std::logic_error::logic_error(std::string const&) */

void __thiscall std::logic_error::logic_error(logic_error *this,string *param_1)

{
  *(undefined ***)this = &PTR__logic_error_08cfe1d0;
                    /* try { // try from 086dd26d to 086dd271 has its CatchHandler @ 086dd278 */
  string::string((string *)(this + 4),(string *)param_1);
  return;
}

```

---

## what

```asm
// === 086dd160 std::logic_error::what  [0x086dd160-0x86dd16f] ===
 86dd160:	55                   	push   %ebp
 86dd161:	89 e5                	mov    %esp,%ebp
 86dd163:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd166:	5d                   	pop    %ebp
 86dd167:	8b 40 04             	mov    0x4(%eax),%eax
 86dd16a:	c3                   	ret
 86dd16b:	90                   	nop
 86dd16c:	90                   	nop
 86dd16d:	90                   	nop
 86dd16e:	90                   	nop
 86dd16f:	90                   	nop

```

```c
// std::logic_error::what @ 0x86dd160

/* std::logic_error::what() const */

undefined4 __thiscall std::logic_error::what(logic_error *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## ~logic_error

```asm
// === 086dd3d0 std::logic_error::~logic_error  [0x086dd3d0-0x86dd42f] ===
 86dd3d0:	55                   	push   %ebp
 86dd3d1:	89 e5                	mov    %esp,%ebp
 86dd3d3:	53                   	push   %ebx
 86dd3d4:	83 ec 24             	sub    $0x24,%esp
 86dd3d7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd3da:	8b 43 04             	mov    0x4(%ebx),%eax
 86dd3dd:	c7 03 d0 e1 cf 08    	movl   $0x8cfe1d0,(%ebx)
 86dd3e3:	83 e8 0c             	sub    $0xc,%eax
 86dd3e6:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 86dd3eb:	75 0e                	jne    86dd3fb <_ZNSt11logic_errorD1Ev+0x2b>
 86dd3ed:	89 1c 24             	mov    %ebx,(%esp)
 86dd3f0:	e8 8b 7c 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86dd3f5:	83 c4 24             	add    $0x24,%esp
 86dd3f8:	5b                   	pop    %ebx
 86dd3f9:	5d                   	pop    %ebp
 86dd3fa:	c3                   	ret
 86dd3fb:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86dd400:	85 d2                	test   %edx,%edx
 86dd402:	74 1d                	je     86dd421 <_ZNSt11logic_errorD1Ev+0x51>
 86dd404:	83 ca ff             	or     $0xffffffff,%edx
 86dd407:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 86dd40c:	85 d2                	test   %edx,%edx
 86dd40e:	7f dd                	jg     86dd3ed <_ZNSt11logic_errorD1Ev+0x1d>
 86dd410:	8d 55 f7             	lea    -0x9(%ebp),%edx
 86dd413:	89 54 24 04          	mov    %edx,0x4(%esp)
 86dd417:	89 04 24             	mov    %eax,(%esp)
 86dd41a:	e8 01 95 02 00       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 86dd41f:	eb cc                	jmp    86dd3ed <_ZNSt11logic_errorD1Ev+0x1d>
 86dd421:	8b 50 08             	mov    0x8(%eax),%edx
 86dd424:	8d 4a ff             	lea    -0x1(%edx),%ecx
 86dd427:	89 48 08             	mov    %ecx,0x8(%eax)
 86dd42a:	eb e0                	jmp    86dd40c <_ZNSt11logic_errorD1Ev+0x3c>
 86dd42c:	90                   	nop
 86dd42d:	90                   	nop
 86dd42e:	90                   	nop
 86dd42f:	90                   	nop

```

```c
// std::logic_error::~logic_error @ 0x86dd3d0

/* WARNING: Removing unreachable block (ram,0x086dd421) */
/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  int *piVar1;
  int iVar2;
  allocator *paVar3;
  
  *(undefined ***)this = &PTR__logic_error_08cfe1d0;
  paVar3 = (allocator *)(*(int *)(this + 4) + -0xc);
  if (paVar3 != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(*(int *)(this + 4) + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      string::_Rep::_M_destroy(paVar3);
    }
  }
  exception::~exception((exception *)this);
  return;
}

```

---

## ~logic_error_086dd430

```asm
// === 086dd430 std::logic_error::~logic_error  [0x086dd430-0x86dd44f] ===
 86dd430:	55                   	push   %ebp
 86dd431:	89 e5                	mov    %esp,%ebp
 86dd433:	53                   	push   %ebx
 86dd434:	83 ec 14             	sub    $0x14,%esp
 86dd437:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd43a:	89 1c 24             	mov    %ebx,(%esp)
 86dd43d:	e8 8e ff ff ff       	call   86dd3d0 <_ZNSt11logic_errorD1Ev>
 86dd442:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86dd445:	83 c4 14             	add    $0x14,%esp
 86dd448:	5b                   	pop    %ebx
 86dd449:	5d                   	pop    %ebp
 86dd44a:	e9 a1 70 04 00       	jmp    87244f0 <_ZdlPv>
 86dd44f:	90                   	nop

```

```c
// std::logic_error::~logic_error @ 0x86dd430

/* std::logic_error::~logic_error() */

void __thiscall std::logic_error::~logic_error(logic_error *this)

{
  ~logic_error(this);
  operator_delete(this);
  return;
}

```

