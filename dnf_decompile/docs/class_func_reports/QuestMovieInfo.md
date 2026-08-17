# QuestMovieInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## QuestMovieInfo

```asm
// === 089173f0 QuestMovieInfo::QuestMovieInfo  [0x089173f0-0x8917457] ===
 89173f0:	55                   	push   %ebp
 89173f1:	89 e5                	mov    %esp,%ebp
 89173f3:	56                   	push   %esi
 89173f4:	53                   	push   %ebx
 89173f5:	83 ec 10             	sub    $0x10,%esp
 89173f8:	8b 45 08             	mov    0x8(%ebp),%eax
 89173fb:	89 04 24             	mov    %eax,(%esp)
 89173fe:	e8 cd f1 de ff       	call   87065d0 <_ZNSsC1Ev>
 8917403:	8b 45 08             	mov    0x8(%ebp),%eax
 8917406:	83 c0 04             	add    $0x4,%eax
 8917409:	89 04 24             	mov    %eax,(%esp)
 891740c:	e8 bf f1 de ff       	call   87065d0 <_ZNSsC1Ev>
 8917411:	8b 45 08             	mov    0x8(%ebp),%eax
 8917414:	89 04 24             	mov    %eax,(%esp)
 8917417:	e8 b8 00 00 00       	call   89174d4 <_ZN14QuestMovieInfo5clearEv>
 891741c:	eb 33                	jmp    8917451 <_ZN14QuestMovieInfoC1Ev+0x61>
 891741e:	89 d3                	mov    %edx,%ebx
 8917420:	89 c6                	mov    %eax,%esi
 8917422:	8b 45 08             	mov    0x8(%ebp),%eax
 8917425:	83 c0 04             	add    $0x4,%eax
 8917428:	89 04 24             	mov    %eax,(%esp)
 891742b:	e8 b0 07 df ff       	call   8707be0 <_ZNSsD1Ev>
 8917430:	89 f0                	mov    %esi,%eax
 8917432:	89 da                	mov    %ebx,%edx
 8917434:	eb 00                	jmp    8917436 <_ZN14QuestMovieInfoC1Ev+0x46>
 8917436:	89 d3                	mov    %edx,%ebx
 8917438:	89 c6                	mov    %eax,%esi
 891743a:	8b 45 08             	mov    0x8(%ebp),%eax
 891743d:	89 04 24             	mov    %eax,(%esp)
 8917440:	e8 9b 07 df ff       	call   8707be0 <_ZNSsD1Ev>
 8917445:	89 f0                	mov    %esi,%eax
 8917447:	89 da                	mov    %ebx,%edx
 8917449:	89 04 24             	mov    %eax,(%esp)
 891744c:	e8 ff c2 1c 00       	call   8ae3750 <_Unwind_Resume>
 8917451:	83 c4 10             	add    $0x10,%esp
 8917454:	5b                   	pop    %ebx
 8917455:	5e                   	pop    %esi
 8917456:	5d                   	pop    %ebp
 8917457:	c3                   	ret

```

```c
// QuestMovieInfo::QuestMovieInfo @ 0x89173f0

/* QuestMovieInfo::QuestMovieInfo() */

void __thiscall QuestMovieInfo::QuestMovieInfo(QuestMovieInfo *this)

{
  std::string::string((string *)this);
                    /* try { // try from 0891740c to 08917410 has its CatchHandler @ 08917436 */
  std::string::string((string *)(this + 4));
                    /* try { // try from 08917417 to 0891741b has its CatchHandler @ 0891741e */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 089174d4 QuestMovieInfo::clear  [0x089174d4-0x89174f4] ===
 89174d4:	55                   	push   %ebp
 89174d5:	89 e5                	mov    %esp,%ebp
 89174d7:	83 ec 18             	sub    $0x18,%esp
 89174da:	8b 45 08             	mov    0x8(%ebp),%eax
 89174dd:	89 04 24             	mov    %eax,(%esp)
 89174e0:	e8 eb 18 df ff       	call   8708dd0 <_ZNSs5clearEv>
 89174e5:	8b 45 08             	mov    0x8(%ebp),%eax
 89174e8:	83 c0 04             	add    $0x4,%eax
 89174eb:	89 04 24             	mov    %eax,(%esp)
 89174ee:	e8 dd 18 df ff       	call   8708dd0 <_ZNSs5clearEv>
 89174f3:	c9                   	leave
 89174f4:	c3                   	ret

```

```c
// QuestMovieInfo::clear @ 0x89174d4

/* QuestMovieInfo::clear() */

void __thiscall QuestMovieInfo::clear(QuestMovieInfo *this)

{
  std::string::clear((string *)this);
  std::string::clear((string *)(this + 4));
  return;
}

```

---

## operator=

```asm
// === 08917458 QuestMovieInfo::operator=  [0x08917458-0x891748d] ===
 8917458:	55                   	push   %ebp
 8917459:	89 e5                	mov    %esp,%ebp
 891745b:	83 ec 18             	sub    $0x18,%esp
 891745e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8917461:	8b 45 08             	mov    0x8(%ebp),%eax
 8917464:	89 54 24 04          	mov    %edx,0x4(%esp)
 8917468:	89 04 24             	mov    %eax,(%esp)
 891746b:	e8 90 08 df ff       	call   8707d00 <_ZNSsaSERKSs>
 8917470:	8b 45 0c             	mov    0xc(%ebp),%eax
 8917473:	8d 50 04             	lea    0x4(%eax),%edx
 8917476:	8b 45 08             	mov    0x8(%ebp),%eax
 8917479:	83 c0 04             	add    $0x4,%eax
 891747c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8917480:	89 04 24             	mov    %eax,(%esp)
 8917483:	e8 78 08 df ff       	call   8707d00 <_ZNSsaSERKSs>
 8917488:	8b 45 08             	mov    0x8(%ebp),%eax
 891748b:	c9                   	leave
 891748c:	c3                   	ret
 891748d:	90                   	nop

```

```c
// QuestMovieInfo::operator= @ 0x8917458

/* QuestMovieInfo::TEMPNAMEPLACEHOLDERVALUE(QuestMovieInfo&) */

QuestMovieInfo * __thiscall QuestMovieInfo::operator=(QuestMovieInfo *this,QuestMovieInfo *param_1)

{
  std::string::operator=((string *)this,(string *)param_1);
  std::string::operator=((string *)(this + 4),(string *)(param_1 + 4));
  return this;
}

```

---

## operator==

```asm
// === 0891748e QuestMovieInfo::operator==  [0x0891748e-0x89174d3] ===
 891748e:	55                   	push   %ebp
 891748f:	89 e5                	mov    %esp,%ebp
 8917491:	83 ec 18             	sub    $0x18,%esp
 8917494:	8b 55 0c             	mov    0xc(%ebp),%edx
 8917497:	8b 45 08             	mov    0x8(%ebp),%eax
 891749a:	89 54 24 04          	mov    %edx,0x4(%esp)
 891749e:	89 04 24             	mov    %eax,(%esp)
 89174a1:	e8 cd 9d 85 ff       	call   8171273 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_>
 89174a6:	84 c0                	test   %al,%al
 89174a8:	74 23                	je     89174cd <_ZN14QuestMovieInfoeqERKS_+0x3f>
 89174aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 89174ad:	8d 50 04             	lea    0x4(%eax),%edx
 89174b0:	8b 45 08             	mov    0x8(%ebp),%eax
 89174b3:	83 c0 04             	add    $0x4,%eax
 89174b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 89174ba:	89 04 24             	mov    %eax,(%esp)
 89174bd:	e8 b1 9d 85 ff       	call   8171273 <_ZSteqIcEN9__gnu_cxx11__enable_ifIXsrSt9__is_charIT_E7__valueEbE6__typeERKSbIS3_St11char_traitsIS3_ESaIS3_EESC_>
 89174c2:	84 c0                	test   %al,%al
 89174c4:	74 07                	je     89174cd <_ZN14QuestMovieInfoeqERKS_+0x3f>
 89174c6:	b8 01 00 00 00       	mov    $0x1,%eax
 89174cb:	eb 05                	jmp    89174d2 <_ZN14QuestMovieInfoeqERKS_+0x44>
 89174cd:	b8 00 00 00 00       	mov    $0x0,%eax
 89174d2:	c9                   	leave
 89174d3:	c3                   	ret

```

```c
// QuestMovieInfo::operator== @ 0x891748e

/* QuestMovieInfo::TEMPNAMEPLACEHOLDERVALUE(QuestMovieInfo const&) */

undefined4 __thiscall QuestMovieInfo::operator==(QuestMovieInfo *this,QuestMovieInfo *param_1)

{
  char cVar1;
  
  cVar1 = std::operator==((string *)this,(string *)param_1);
  if ((cVar1 != '\0') &&
     (cVar1 = std::operator==((string *)(this + 4),(string *)(param_1 + 4)), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

```

