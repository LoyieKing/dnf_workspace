# CStringManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getStr

```asm
// === 08ac35f8 CStringManager::getStr  [0x08ac35f8-0x8ac36d1] ===
 8ac35f8:	55                   	push   %ebp
 8ac35f9:	89 e5                	mov    %esp,%ebp
 8ac35fb:	56                   	push   %esi
 8ac35fc:	53                   	push   %ebx
 8ac35fd:	83 ec 20             	sub    $0x20,%esp
 8ac3600:	0f b6 05 9a 18 50 09 	movzbl 0x950189a,%eax
 8ac3607:	83 f0 01             	xor    $0x1,%eax
 8ac360a:	84 c0                	test   %al,%al
 8ac360c:	74 5e                	je     8ac366c <_ZN14CStringManager6getStrEi+0x74>
 8ac360e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac3611:	89 04 24             	mov    %eax,(%esp)
 8ac3614:	e8 91 33 01 00       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ac3619:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac361c:	89 04 24             	mov    %eax,(%esp)
 8ac361f:	e8 a8 ff ff ff       	call   8ac35cc <_Z10loadStringP10CharString>
 8ac3624:	84 c0                	test   %al,%al
 8ac3626:	74 0e                	je     8ac3636 <_ZN14CStringManager6getStrEi+0x3e>
 8ac3628:	c6 05 9a 18 50 09 01 	movb   $0x1,0x950189a
 8ac362f:	be 01 00 00 00       	mov    $0x1,%esi
 8ac3634:	eb 27                	jmp    8ac365d <_ZN14CStringManager6getStrEi+0x65>
 8ac3636:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ac363b:	be 00 00 00 00       	mov    $0x0,%esi
 8ac3640:	eb 1b                	jmp    8ac365d <_ZN14CStringManager6getStrEi+0x65>
 8ac3642:	89 d3                	mov    %edx,%ebx
 8ac3644:	89 c6                	mov    %eax,%esi
 8ac3646:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac3649:	89 04 24             	mov    %eax,(%esp)
 8ac364c:	e8 69 35 01 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ac3651:	89 f0                	mov    %esi,%eax
 8ac3653:	89 da                	mov    %ebx,%edx
 8ac3655:	89 04 24             	mov    %eax,(%esp)
 8ac3658:	e8 f3 00 02 00       	call   8ae3750 <_Unwind_Resume>
 8ac365d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac3660:	89 04 24             	mov    %eax,(%esp)
 8ac3663:	e8 52 35 01 00       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ac3668:	85 f6                	test   %esi,%esi
 8ac366a:	74 5d                	je     8ac36c9 <_ZN14CStringManager6getStrEi+0xd1>
 8ac366c:	e8 c8 1d 01 00       	call   8ad5439 <_ZN3app14stringResourceEv>
 8ac3671:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8ac3674:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac3678:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac367b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac367f:	89 04 24             	mov    %eax,(%esp)
 8ac3682:	e8 f1 11 01 00       	call   8ad4878 <_ZNK14StringResource3getEiPPK10CharString>
 8ac3687:	84 c0                	test   %al,%al
 8ac3689:	74 0f                	je     8ac369a <_ZN14CStringManager6getStrEi+0xa2>
 8ac368b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac368e:	89 04 24             	mov    %eax,(%esp)
 8ac3691:	e8 66 c9 5b ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ac3696:	89 c3                	mov    %eax,%ebx
 8ac3698:	eb 2f                	jmp    8ac36c9 <_ZN14CStringManager6getStrEi+0xd1>
 8ac369a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac369d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac36a1:	c7 44 24 04 93 e7 e2 	movl   $0x8e2e793,0x4(%esp)
 8ac36a8:	08 
 8ac36a9:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8ac36af:	8d 80 b8 3f fc ff    	lea    -0x3c048(%eax),%eax
 8ac36b5:	89 04 24             	mov    %eax,(%esp)
 8ac36b8:	e8 21 00 00 00       	call   8ac36de <_Z10ss_sprintfILj32EEiRAT__cPKcz>
 8ac36bd:	65 a1 00 00 00 00    	mov    %gs:0x0,%eax
 8ac36c3:	8d 98 b8 3f fc ff    	lea    -0x3c048(%eax),%ebx
 8ac36c9:	89 d8                	mov    %ebx,%eax
 8ac36cb:	83 c4 20             	add    $0x20,%esp
 8ac36ce:	5b                   	pop    %ebx
 8ac36cf:	5e                   	pop    %esi
 8ac36d0:	5d                   	pop    %ebp
 8ac36d1:	c3                   	ret

```

```c
// CStringManager::getStr @ 0x8ac35f8

/* CStringManager::getStr(int) */

char * CStringManager::getStr(int param_1)

{
  char cVar1;
  StringResource *this;
  char *pcVar2;
  char *unaff_EBX;
  int *in_GS_OFFSET;
  int in_stack_ffffffd8;
  CharString local_14;
  CharString *local_10;
  
  if (is_sr_loaded != '\x01') {
    CharString::CharString(&local_14);
                    /* try { // try from 08ac361f to 08ac3623 has its CatchHandler @ 08ac3642 */
    cVar1 = loadString((CharString *)&local_14);
    if (cVar1 == '\0') {
      unaff_EBX = (char *)0x0;
    }
    else {
      is_sr_loaded = '\x01';
    }
    CharString::~CharString(&local_14,in_stack_ffffffd8);
    if (cVar1 == '\0') {
      return unaff_EBX;
    }
  }
  this = (StringResource *)app::stringResource();
  cVar1 = StringResource::get(this,param_1,(CharString **)&local_10);
  if (cVar1 == '\0') {
    ss_sprintf<32u>((char *)(*in_GS_OFFSET + -0x3c048),"getStr(%d) == none",param_1);
    pcVar2 = (char *)(*in_GS_OFFSET + -0x3c048);
  }
  else {
    pcVar2 = CharString::c_str(local_10);
  }
  return pcVar2;
}

```

---

## setStringResourceLoaded

```asm
// === 08ac36d2 CStringManager::setStringResourceLoaded  [0x08ac36d2-0x8ac3713] ===
 8ac36d2:	55                   	push   %ebp
 8ac36d3:	89 e5                	mov    %esp,%ebp
 8ac36d5:	c6 05 9a 18 50 09 01 	movb   $0x1,0x950189a
 8ac36dc:	5d                   	pop    %ebp
 8ac36dd:	c3                   	ret

08ac36de <_Z10ss_sprintfILj32EEiRAT__cPKcz>:
 8ac36de:	55                   	push   %ebp
 8ac36df:	89 e5                	mov    %esp,%ebp
 8ac36e1:	83 ec 28             	sub    $0x28,%esp
 8ac36e4:	8d 45 10             	lea    0x10(%ebp),%eax
 8ac36e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac36ea:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ac36ed:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac36f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac36f4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac36f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac36fb:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 8ac3702:	00 
 8ac3703:	89 04 24             	mov    %eax,(%esp)
 8ac3706:	e8 71 0e 01 00       	call   8ad457c <_Z11ss_vsprintfPcjPKcS_>
 8ac370b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac370e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac3711:	c9                   	leave
 8ac3712:	c3                   	ret
 8ac3713:	90                   	nop

```

```c
// CStringManager::setStringResourceLoaded @ 0x8ac36d2

/* CStringManager::setStringResourceLoaded() */

void CStringManager::setStringResourceLoaded(void)

{
  is_sr_loaded = 1;
  return;
}

```

