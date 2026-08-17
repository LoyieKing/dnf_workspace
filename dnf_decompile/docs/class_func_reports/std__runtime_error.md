# std__runtime_error

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## runtime_error

```asm
// === 086dd180 std::runtime_error::runtime_error  [0x086dd180-0x86dd1bf] ===
 86dd180:	55                   	push   %ebp
 86dd181:	89 e5                	mov    %esp,%ebp
 86dd183:	53                   	push   %ebx
 86dd184:	83 ec 24             	sub    $0x24,%esp
 86dd187:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd18a:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dd18d:	c7 03 b8 e1 cf 08    	movl   $0x8cfe1b8,(%ebx)
 86dd193:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dd197:	8d 43 04             	lea    0x4(%ebx),%eax
 86dd19a:	89 04 24             	mov    %eax,(%esp)
 86dd19d:	e8 0e a8 02 00       	call   87079b0 <_ZNSsC1ERKSs>
 86dd1a2:	83 c4 24             	add    $0x24,%esp
 86dd1a5:	5b                   	pop    %ebx
 86dd1a6:	5d                   	pop    %ebp
 86dd1a7:	c3                   	ret
 86dd1a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86dd1ab:	89 1c 24             	mov    %ebx,(%esp)
 86dd1ae:	e8 cd 7e 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86dd1b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86dd1b6:	89 04 24             	mov    %eax,(%esp)
 86dd1b9:	e8 92 65 40 00       	call   8ae3750 <_Unwind_Resume>
 86dd1be:	90                   	nop
 86dd1bf:	90                   	nop

```

```c
// std::runtime_error::runtime_error @ 0x86dd180

/* std::runtime_error::runtime_error(std::string const&) */

void __thiscall std::runtime_error::runtime_error(runtime_error *this,string *param_1)

{
  *(undefined ***)this = &PTR__runtime_error_08cfe1b8;
                    /* try { // try from 086dd19d to 086dd1a1 has its CatchHandler @ 086dd1a8 */
  string::string((string *)(this + 4),(string *)param_1);
  return;
}

```

---

## what

```asm
// === 086dd170 std::runtime_error::what  [0x086dd170-0x86dd17f] ===
 86dd170:	55                   	push   %ebp
 86dd171:	89 e5                	mov    %esp,%ebp
 86dd173:	8b 45 08             	mov    0x8(%ebp),%eax
 86dd176:	5d                   	pop    %ebp
 86dd177:	8b 40 04             	mov    0x4(%eax),%eax
 86dd17a:	c3                   	ret
 86dd17b:	90                   	nop
 86dd17c:	90                   	nop
 86dd17d:	90                   	nop
 86dd17e:	90                   	nop
 86dd17f:	90                   	nop

```

```c
// std::runtime_error::what @ 0x86dd170

/* std::runtime_error::what() const */

undefined4 __thiscall std::runtime_error::what(runtime_error *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## ~runtime_error

```asm
// === 086dd350 std::runtime_error::~runtime_error  [0x086dd350-0x86dd3af] ===
 86dd350:	55                   	push   %ebp
 86dd351:	89 e5                	mov    %esp,%ebp
 86dd353:	53                   	push   %ebx
 86dd354:	83 ec 24             	sub    $0x24,%esp
 86dd357:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd35a:	8b 43 04             	mov    0x4(%ebx),%eax
 86dd35d:	c7 03 b8 e1 cf 08    	movl   $0x8cfe1b8,(%ebx)
 86dd363:	83 e8 0c             	sub    $0xc,%eax
 86dd366:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 86dd36b:	75 0e                	jne    86dd37b <_ZNSt13runtime_errorD1Ev+0x2b>
 86dd36d:	89 1c 24             	mov    %ebx,(%esp)
 86dd370:	e8 0b 7d 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86dd375:	83 c4 24             	add    $0x24,%esp
 86dd378:	5b                   	pop    %ebx
 86dd379:	5d                   	pop    %ebp
 86dd37a:	c3                   	ret
 86dd37b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86dd380:	85 d2                	test   %edx,%edx
 86dd382:	74 1d                	je     86dd3a1 <_ZNSt13runtime_errorD1Ev+0x51>
 86dd384:	83 ca ff             	or     $0xffffffff,%edx
 86dd387:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 86dd38c:	85 d2                	test   %edx,%edx
 86dd38e:	7f dd                	jg     86dd36d <_ZNSt13runtime_errorD1Ev+0x1d>
 86dd390:	8d 55 f7             	lea    -0x9(%ebp),%edx
 86dd393:	89 54 24 04          	mov    %edx,0x4(%esp)
 86dd397:	89 04 24             	mov    %eax,(%esp)
 86dd39a:	e8 81 95 02 00       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 86dd39f:	eb cc                	jmp    86dd36d <_ZNSt13runtime_errorD1Ev+0x1d>
 86dd3a1:	8b 50 08             	mov    0x8(%eax),%edx
 86dd3a4:	8d 4a ff             	lea    -0x1(%edx),%ecx
 86dd3a7:	89 48 08             	mov    %ecx,0x8(%eax)
 86dd3aa:	eb e0                	jmp    86dd38c <_ZNSt13runtime_errorD1Ev+0x3c>
 86dd3ac:	90                   	nop
 86dd3ad:	90                   	nop
 86dd3ae:	90                   	nop
 86dd3af:	90                   	nop

```

```c
// std::runtime_error::~runtime_error @ 0x86dd350

/* WARNING: Removing unreachable block (ram,0x086dd3a1) */
/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  int *piVar1;
  int iVar2;
  allocator *paVar3;
  
  *(undefined ***)this = &PTR__runtime_error_08cfe1b8;
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

## ~runtime_error_086dd3b0

```asm
// === 086dd3b0 std::runtime_error::~runtime_error  [0x086dd3b0-0x86dd3cf] ===
 86dd3b0:	55                   	push   %ebp
 86dd3b1:	89 e5                	mov    %esp,%ebp
 86dd3b3:	53                   	push   %ebx
 86dd3b4:	83 ec 14             	sub    $0x14,%esp
 86dd3b7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd3ba:	89 1c 24             	mov    %ebx,(%esp)
 86dd3bd:	e8 8e ff ff ff       	call   86dd350 <_ZNSt13runtime_errorD1Ev>
 86dd3c2:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86dd3c5:	83 c4 14             	add    $0x14,%esp
 86dd3c8:	5b                   	pop    %ebx
 86dd3c9:	5d                   	pop    %ebp
 86dd3ca:	e9 21 71 04 00       	jmp    87244f0 <_ZdlPv>
 86dd3cf:	90                   	nop

```

```c
// std::runtime_error::~runtime_error @ 0x86dd3b0

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  ~runtime_error(this);
  operator_delete(this);
  return;
}

```

