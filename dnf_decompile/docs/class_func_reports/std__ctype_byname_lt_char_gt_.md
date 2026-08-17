# std__ctype_byname_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ctype_byname

```asm
// === 0872f370 std::ctype_byname<char>::ctype_byname  [0x0872f370-0x872f46f] ===
 872f370:	55                   	push   %ebp
 872f371:	89 e5                	mov    %esp,%ebp
 872f373:	83 ec 28             	sub    $0x28,%esp
 872f376:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872f379:	8b 45 10             	mov    0x10(%ebp),%eax
 872f37c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872f37f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 872f382:	89 7d fc             	mov    %edi,-0x4(%ebp)
 872f385:	bf c7 cd d3 08       	mov    $0x8d3cdc7,%edi
 872f38a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 872f38e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 872f395:	00 
 872f396:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 872f39d:	00 
 872f39e:	89 1c 24             	mov    %ebx,(%esp)
 872f3a1:	e8 fa 77 ff ff       	call   8726ba0 <_ZNSt5ctypeIcEC1EPKtbj>
 872f3a6:	8b 75 0c             	mov    0xc(%ebp),%esi
 872f3a9:	b9 02 00 00 00       	mov    $0x2,%ecx
 872f3ae:	c7 03 48 29 d0 08    	movl   $0x8d02948,(%ebx)
 872f3b4:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 872f3b6:	74 11                	je     872f3c9 <_ZNSt12ctype_bynameIcEC1EPKcj+0x59>
 872f3b8:	8b 75 0c             	mov    0xc(%ebp),%esi
 872f3bb:	bf 3c ed cf 08       	mov    $0x8cfed3c,%edi
 872f3c0:	b9 06 00 00 00       	mov    $0x6,%ecx
 872f3c5:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 872f3c7:	75 0f                	jne    872f3d8 <_ZNSt12ctype_bynameIcEC1EPKcj+0x68>
 872f3c9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872f3cc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872f3cf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872f3d2:	89 ec                	mov    %ebp,%esp
 872f3d4:	5d                   	pop    %ebp
 872f3d5:	c3                   	ret
 872f3d6:	66 90                	xchg   %ax,%ax
 872f3d8:	8d 73 08             	lea    0x8(%ebx),%esi
 872f3db:	89 34 24             	mov    %esi,(%esp)
 872f3de:	e8 4d 37 ff ff       	call   8722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>
 872f3e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 872f3e6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 872f3ed:	00 
 872f3ee:	89 34 24             	mov    %esi,(%esp)
 872f3f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f3f5:	e8 66 37 ff ff       	call   8722b60 <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_>
 872f3fa:	8b 43 08             	mov    0x8(%ebx),%eax
 872f3fd:	8b 50 3c             	mov    0x3c(%eax),%edx
 872f400:	89 53 10             	mov    %edx,0x10(%ebx)
 872f403:	8b 50 38             	mov    0x38(%eax),%edx
 872f406:	8b 40 34             	mov    0x34(%eax),%eax
 872f409:	89 53 14             	mov    %edx,0x14(%ebx)
 872f40c:	89 43 18             	mov    %eax,0x18(%ebx)
 872f40f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872f412:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872f415:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872f418:	89 ec                	mov    %ebp,%esp
 872f41a:	5d                   	pop    %ebp
 872f41b:	c3                   	ret
 872f41c:	89 c6                	mov    %eax,%esi
 872f41e:	89 1c 24             	mov    %ebx,(%esp)
 872f421:	e8 fa 76 ff ff       	call   8726b20 <_ZNSt5ctypeIcED1Ev>
 872f426:	89 34 24             	mov    %esi,(%esp)
 872f429:	e8 22 43 3b 00       	call   8ae3750 <_Unwind_Resume>
 872f42e:	90                   	nop
 872f42f:	90                   	nop

0872f430 <_ZNK10__cxxabiv117__pbase_type_info15__pointer_catchEPKS0_PPvj>:
 872f430:	55                   	push   %ebp
 872f431:	89 e5                	mov    %esp,%ebp
 872f433:	83 ec 18             	sub    $0x18,%esp
 872f436:	8b 45 08             	mov    0x8(%ebp),%eax
 872f439:	8b 4d 14             	mov    0x14(%ebp),%ecx
 872f43c:	8b 40 0c             	mov    0xc(%eax),%eax
 872f43f:	83 c1 02             	add    $0x2,%ecx
 872f442:	8b 10                	mov    (%eax),%edx
 872f444:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 872f448:	8b 4d 10             	mov    0x10(%ebp),%ecx
 872f44b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 872f44f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 872f452:	8b 49 0c             	mov    0xc(%ecx),%ecx
 872f455:	89 04 24             	mov    %eax,(%esp)
 872f458:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 872f45c:	ff 52 10             	call   *0x10(%edx)
 872f45f:	c9                   	leave
 872f460:	c3                   	ret
 872f461:	90                   	nop
 872f462:	90                   	nop
 872f463:	90                   	nop
 872f464:	90                   	nop
 872f465:	90                   	nop
 872f466:	90                   	nop
 872f467:	90                   	nop
 872f468:	90                   	nop
 872f469:	90                   	nop
 872f46a:	90                   	nop
 872f46b:	90                   	nop
 872f46c:	90                   	nop
 872f46d:	90                   	nop
 872f46e:	90                   	nop
 872f46f:	90                   	nop

```

```c
// std::ctype_byname<char>::ctype_byname @ 0x872f370

/* std::ctype_byname<char>::ctype_byname(char const*, unsigned int) */

void __thiscall
std::ctype_byname<char>::ctype_byname(ctype_byname<char> *this,char *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 uVar5;
  byte bVar6;
  
  bVar6 = 0;
  uVar5 = &stack0x00000000 == (undefined1 *)0x2c;
  ctype<char>::ctype((ctype<char> *)this,(ushort *)0x0,false,param_2);
  iVar2 = 2;
  *(undefined ***)this = &PTR__ctype_byname_08d02948;
  pcVar3 = param_1;
  pcVar4 = "C";
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    uVar5 = *pcVar3 == *pcVar4;
    pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
    pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
  } while ((bool)uVar5);
  if (!(bool)uVar5) {
    iVar2 = 6;
    pcVar3 = param_1;
    pcVar4 = "POSIX";
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      uVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
    } while ((bool)uVar5);
    if (!(bool)uVar5) {
                    /* try { // try from 0872f3de to 0872f3f9 has its CatchHandler @ 0872f41c */
      locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
      locale::facet::_S_create_c_locale
                ((__locale_struct **)(this + 8),param_1,(__locale_struct *)0x0);
      iVar2 = *(int *)(this + 8);
      *(undefined4 *)(this + 0x10) = *(undefined4 *)(iVar2 + 0x3c);
      uVar1 = *(undefined4 *)(iVar2 + 0x34);
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(iVar2 + 0x38);
      *(undefined4 *)(this + 0x18) = uVar1;
      return;
    }
  }
  return;
}

```

---

## ~ctype_byname

```asm
// === 0872f330 std::ctype_byname<char>::~ctype_byname  [0x0872f330-0x872f34f] ===
 872f330:	55                   	push   %ebp
 872f331:	89 e5                	mov    %esp,%ebp
 872f333:	83 ec 08             	sub    $0x8,%esp
 872f336:	8b 45 08             	mov    0x8(%ebp),%eax
 872f339:	c7 00 48 29 d0 08    	movl   $0x8d02948,(%eax)
 872f33f:	c9                   	leave
 872f340:	e9 db 77 ff ff       	jmp    8726b20 <_ZNSt5ctypeIcED1Ev>
 872f345:	90                   	nop
 872f346:	90                   	nop
 872f347:	90                   	nop
 872f348:	90                   	nop
 872f349:	90                   	nop
 872f34a:	90                   	nop
 872f34b:	90                   	nop
 872f34c:	90                   	nop
 872f34d:	90                   	nop
 872f34e:	90                   	nop
 872f34f:	90                   	nop

```

```c
// std::ctype_byname<char>::~ctype_byname @ 0x872f330

/* std::ctype_byname<char>::~ctype_byname() */

void __thiscall std::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  *(undefined ***)this = &PTR__ctype_byname_08d02948;
  ctype<char>::~ctype((ctype<char> *)this);
  return;
}

```

---

## ~ctype_byname_0872f350

```asm
// === 0872f350 std::ctype_byname<char>::~ctype_byname  [0x0872f350-0x872f36f] ===
 872f350:	55                   	push   %ebp
 872f351:	89 e5                	mov    %esp,%ebp
 872f353:	53                   	push   %ebx
 872f354:	83 ec 14             	sub    $0x14,%esp
 872f357:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872f35a:	89 1c 24             	mov    %ebx,(%esp)
 872f35d:	e8 ce ff ff ff       	call   872f330 <_ZNSt12ctype_bynameIcED1Ev>
 872f362:	89 5d 08             	mov    %ebx,0x8(%ebp)
 872f365:	83 c4 14             	add    $0x14,%esp
 872f368:	5b                   	pop    %ebx
 872f369:	5d                   	pop    %ebp
 872f36a:	e9 81 51 ff ff       	jmp    87244f0 <_ZdlPv>
 872f36f:	90                   	nop

```

```c
// std::ctype_byname<char>::~ctype_byname @ 0x872f350

/* std::ctype_byname<char>::~ctype_byname() */

void __thiscall std::ctype_byname<char>::~ctype_byname(ctype_byname<char> *this)

{
  ~ctype_byname(this);
  operator_delete(this);
  return;
}

```

