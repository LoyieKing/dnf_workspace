# TaiwanInternalDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## TaiwanInternalDispatcher

```asm
// === 081601d0 TaiwanInternalDispatcher::TaiwanInternalDispatcher  [0x081601d0-0x8160211] ===
 81601d0:	55                   	push   %ebp
 81601d1:	89 e5                	mov    %esp,%ebp
 81601d3:	56                   	push   %esi
 81601d4:	53                   	push   %ebx
 81601d5:	83 ec 10             	sub    $0x10,%esp
 81601d8:	8b 45 08             	mov    0x8(%ebp),%eax
 81601db:	89 04 24             	mov    %eax,(%esp)
 81601de:	e8 7b 21 00 00       	call   816235e <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEEC1Ev>
 81601e3:	8b 45 08             	mov    0x8(%ebp),%eax
 81601e6:	89 04 24             	mov    %eax,(%esp)
 81601e9:	e8 ea 21 00 00       	call   81623d8 <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE5clearEv>
 81601ee:	eb 1b                	jmp    816020b <_ZN24TaiwanInternalDispatcherC1Ev+0x3b>
 81601f0:	89 d3                	mov    %edx,%ebx
 81601f2:	89 c6                	mov    %eax,%esi
 81601f4:	8b 45 08             	mov    0x8(%ebp),%eax
 81601f7:	89 04 24             	mov    %eax,(%esp)
 81601fa:	e8 4b 21 00 00       	call   816234a <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 81601ff:	89 f0                	mov    %esi,%eax
 8160201:	89 da                	mov    %ebx,%edx
 8160203:	89 04 24             	mov    %eax,(%esp)
 8160206:	e8 45 35 98 00       	call   8ae3750 <_Unwind_Resume>
 816020b:	83 c4 10             	add    $0x10,%esp
 816020e:	5b                   	pop    %ebx
 816020f:	5e                   	pop    %esi
 8160210:	5d                   	pop    %ebp
 8160211:	c3                   	ret

```

```c
// TaiwanInternalDispatcher::TaiwanInternalDispatcher @ 0x81601d0

/* TaiwanInternalDispatcher::TaiwanInternalDispatcher() */

void __thiscall TaiwanInternalDispatcher::TaiwanInternalDispatcher(TaiwanInternalDispatcher *this)

{
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::map((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
         *)this);
                    /* try { // try from 081601e9 to 081601ed has its CatchHandler @ 081601f0 */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::clear((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
           *)this);
  return;
}

```

---

## addDispatcher

```asm
// === 081606fe TaiwanInternalDispatcher::addDispatcher  [0x081606fe-0x8160743] ===
 81606fe:	55                   	push   %ebp
 81606ff:	89 e5                	mov    %esp,%ebp
 8160701:	83 ec 18             	sub    $0x18,%esp
 8160704:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160707:	89 44 24 04          	mov    %eax,0x4(%esp)
 816070b:	8b 45 08             	mov    0x8(%ebp),%eax
 816070e:	89 04 24             	mov    %eax,(%esp)
 8160711:	e8 84 ff ff ff       	call   816069a <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE>
 8160716:	85 c0                	test   %eax,%eax
 8160718:	0f 95 c0             	setne  %al
 816071b:	84 c0                	test   %al,%al
 816071d:	74 07                	je     8160726 <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher+0x28>
 816071f:	b8 00 00 00 00       	mov    $0x0,%eax
 8160724:	eb 1c                	jmp    8160742 <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher+0x44>
 8160726:	8b 45 08             	mov    0x8(%ebp),%eax
 8160729:	8d 55 0c             	lea    0xc(%ebp),%edx
 816072c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160730:	89 04 24             	mov    %eax,(%esp)
 8160733:	e8 9e 1d 00 00       	call   81624d6 <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEEixERS7_>
 8160738:	8b 55 10             	mov    0x10(%ebp),%edx
 816073b:	89 10                	mov    %edx,(%eax)
 816073d:	b8 01 00 00 00       	mov    $0x1,%eax
 8160742:	c9                   	leave
 8160743:	c3                   	ret

```

```c
// TaiwanInternalDispatcher::addDispatcher @ 0x81606fe

/* TaiwanInternalDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceInterDispatcher*)
    */

bool __thiscall
TaiwanInternalDispatcher::addDispatcher
          (TaiwanInternalDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
             ::operator[]((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
                           *)this,(T *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}

```

---

## delDispatcher

```asm
// === 08160744 TaiwanInternalDispatcher::delDispatcher  [0x08160744-0x8160795] ===
 8160744:	55                   	push   %ebp
 8160745:	89 e5                	mov    %esp,%ebp
 8160747:	83 ec 28             	sub    $0x28,%esp
 816074a:	8b 45 0c             	mov    0xc(%ebp),%eax
 816074d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160751:	8b 45 08             	mov    0x8(%ebp),%eax
 8160754:	89 04 24             	mov    %eax,(%esp)
 8160757:	e8 3e ff ff ff       	call   816069a <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE>
 816075c:	85 c0                	test   %eax,%eax
 816075e:	0f 95 c0             	setne  %al
 8160761:	84 c0                	test   %al,%al
 8160763:	74 2e                	je     8160793 <_ZN24TaiwanInternalDispatcher13delDispatcherEN18TaiwanInternalPack1TE+0x4f>
 8160765:	8b 55 08             	mov    0x8(%ebp),%edx
 8160768:	8d 45 f4             	lea    -0xc(%ebp),%eax
 816076b:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 816076e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8160772:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160776:	89 04 24             	mov    %eax,(%esp)
 8160779:	e8 0a 1d 00 00       	call   8162488 <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 816077e:	83 ec 04             	sub    $0x4,%esp
 8160781:	8b 45 08             	mov    0x8(%ebp),%eax
 8160784:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160787:	89 54 24 04          	mov    %edx,0x4(%esp)
 816078b:	89 04 24             	mov    %eax,(%esp)
 816078e:	e8 39 1e 00 00       	call   81625cc <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE5eraseESt17_Rb_tree_iteratorIS8_E>
 8160793:	c9                   	leave
 8160794:	c3                   	ret
 8160795:	90                   	nop

```

```c
// TaiwanInternalDispatcher::delDispatcher @ 0x8160744

/* TaiwanInternalDispatcher::delDispatcher(TaiwanInternalPack::T) */

void __thiscall
TaiwanInternalDispatcher::delDispatcher(TaiwanInternalDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
    ::find((T *)local_10);
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
    ::erase((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}

```

---

## getDispatcher

```asm
// === 0816069a TaiwanInternalDispatcher::getDispatcher  [0x0816069a-0x81606fd] ===
 816069a:	55                   	push   %ebp
 816069b:	89 e5                	mov    %esp,%ebp
 816069d:	83 ec 28             	sub    $0x28,%esp
 81606a0:	8b 55 08             	mov    0x8(%ebp),%edx
 81606a3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81606a6:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81606a9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81606ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 81606b1:	89 04 24             	mov    %eax,(%esp)
 81606b4:	e8 cf 1d 00 00       	call   8162488 <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 81606b9:	83 ec 04             	sub    $0x4,%esp
 81606bc:	8b 55 08             	mov    0x8(%ebp),%edx
 81606bf:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81606c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81606c6:	89 04 24             	mov    %eax,(%esp)
 81606c9:	e8 44 1d 00 00       	call   8162412 <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 81606ce:	83 ec 04             	sub    $0x4,%esp
 81606d1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81606d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81606d8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81606db:	89 04 24             	mov    %eax,(%esp)
 81606de:	e8 d1 1d 00 00       	call   81624b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherEEneERKS7_>
 81606e3:	84 c0                	test   %al,%al
 81606e5:	74 10                	je     81606f7 <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE+0x5d>
 81606e7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81606ea:	89 04 24             	mov    %eax,(%esp)
 81606ed:	e8 d6 1d 00 00       	call   81624c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherEEptEv>
 81606f2:	8b 40 04             	mov    0x4(%eax),%eax
 81606f5:	eb 05                	jmp    81606fc <_ZN24TaiwanInternalDispatcher13getDispatcherEN18TaiwanInternalPack1TE+0x62>
 81606f7:	b8 00 00 00 00       	mov    $0x0,%eax
 81606fc:	c9                   	leave
 81606fd:	c3                   	ret

```

```c
// TaiwanInternalDispatcher::getDispatcher @ 0x816069a

/* TaiwanInternalDispatcher::getDispatcher(TaiwanInternalPack::T) */

undefined4 TaiwanInternalDispatcher::getDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>
  local_14 [4];
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  local_10 [12];
  
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::find(local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## init

```asm
// === 08160294 TaiwanInternalDispatcher::init  [0x08160294-0x8160699] ===
 8160294:	55                   	push   %ebp
 8160295:	89 e5                	mov    %esp,%ebp
 8160297:	53                   	push   %ebx
 8160298:	83 ec 24             	sub    $0x24,%esp
 816029b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81602a2:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81602a9:	e8 a2 41 5c 00       	call   8724450 <_Znwj>
 81602ae:	89 c3                	mov    %eax,%ebx
 81602b0:	89 d8                	mov    %ebx,%eax
 81602b2:	89 04 24             	mov    %eax,(%esp)
 81602b5:	e8 0a 1c 00 00       	call   8161ec4 <_ZN30InterLoadServiceRestrictPolicyC1Ev>
 81602ba:	89 d8                	mov    %ebx,%eax
 81602bc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81602bf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81602c3:	74 2f                	je     81602f4 <_ZN24TaiwanInternalDispatcher4initEv+0x60>
 81602c5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81602c8:	89 04 24             	mov    %eax,(%esp)
 81602cb:	e8 be 1b 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 81602d0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81602d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81602d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81602db:	8b 45 08             	mov    0x8(%ebp),%eax
 81602de:	89 04 24             	mov    %eax,(%esp)
 81602e1:	e8 18 04 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 81602e6:	83 f0 01             	xor    $0x1,%eax
 81602e9:	84 c0                	test   %al,%al
 81602eb:	74 07                	je     81602f4 <_ZN24TaiwanInternalDispatcher4initEv+0x60>
 81602ed:	b8 01 00 00 00       	mov    $0x1,%eax
 81602f2:	eb 05                	jmp    81602f9 <_ZN24TaiwanInternalDispatcher4initEv+0x65>
 81602f4:	b8 00 00 00 00       	mov    $0x0,%eax
 81602f9:	84 c0                	test   %al,%al
 81602fb:	74 0a                	je     8160307 <_ZN24TaiwanInternalDispatcher4initEv+0x73>
 81602fd:	b8 00 00 00 00       	mov    $0x0,%eax
 8160302:	e9 8c 03 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 8160307:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 816030e:	e8 3d 41 5c 00       	call   8724450 <_Znwj>
 8160313:	89 c3                	mov    %eax,%ebx
 8160315:	89 d8                	mov    %ebx,%eax
 8160317:	89 04 24             	mov    %eax,(%esp)
 816031a:	e8 17 1c 00 00       	call   8161f36 <_ZN20InterLoadGeolocationC1Ev>
 816031f:	89 d8                	mov    %ebx,%eax
 8160321:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160324:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160328:	74 2f                	je     8160359 <_ZN24TaiwanInternalDispatcher4initEv+0xc5>
 816032a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816032d:	89 04 24             	mov    %eax,(%esp)
 8160330:	e8 59 1b 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 8160335:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160338:	89 54 24 08          	mov    %edx,0x8(%esp)
 816033c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160340:	8b 45 08             	mov    0x8(%ebp),%eax
 8160343:	89 04 24             	mov    %eax,(%esp)
 8160346:	e8 b3 03 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 816034b:	83 f0 01             	xor    $0x1,%eax
 816034e:	84 c0                	test   %al,%al
 8160350:	74 07                	je     8160359 <_ZN24TaiwanInternalDispatcher4initEv+0xc5>
 8160352:	b8 01 00 00 00       	mov    $0x1,%eax
 8160357:	eb 05                	jmp    816035e <_ZN24TaiwanInternalDispatcher4initEv+0xca>
 8160359:	b8 00 00 00 00       	mov    $0x0,%eax
 816035e:	84 c0                	test   %al,%al
 8160360:	74 0a                	je     816036c <_ZN24TaiwanInternalDispatcher4initEv+0xd8>
 8160362:	b8 00 00 00 00       	mov    $0x0,%eax
 8160367:	e9 27 03 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 816036c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8160373:	e8 d8 40 5c 00       	call   8724450 <_Znwj>
 8160378:	89 c3                	mov    %eax,%ebx
 816037a:	89 d8                	mov    %ebx,%eax
 816037c:	89 04 24             	mov    %eax,(%esp)
 816037f:	e8 24 1c 00 00       	call   8161fa8 <_ZN23InterCheckStayTimeEventC1Ev>
 8160384:	89 d8                	mov    %ebx,%eax
 8160386:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160389:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816038d:	74 2f                	je     81603be <_ZN24TaiwanInternalDispatcher4initEv+0x12a>
 816038f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160392:	89 04 24             	mov    %eax,(%esp)
 8160395:	e8 f4 1a 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 816039a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816039d:	89 54 24 08          	mov    %edx,0x8(%esp)
 81603a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81603a5:	8b 45 08             	mov    0x8(%ebp),%eax
 81603a8:	89 04 24             	mov    %eax,(%esp)
 81603ab:	e8 4e 03 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 81603b0:	83 f0 01             	xor    $0x1,%eax
 81603b3:	84 c0                	test   %al,%al
 81603b5:	74 07                	je     81603be <_ZN24TaiwanInternalDispatcher4initEv+0x12a>
 81603b7:	b8 01 00 00 00       	mov    $0x1,%eax
 81603bc:	eb 05                	jmp    81603c3 <_ZN24TaiwanInternalDispatcher4initEv+0x12f>
 81603be:	b8 00 00 00 00       	mov    $0x0,%eax
 81603c3:	84 c0                	test   %al,%al
 81603c5:	74 0a                	je     81603d1 <_ZN24TaiwanInternalDispatcher4initEv+0x13d>
 81603c7:	b8 00 00 00 00       	mov    $0x0,%eax
 81603cc:	e9 c2 02 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 81603d1:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81603d8:	e8 73 40 5c 00       	call   8724450 <_Znwj>
 81603dd:	89 c3                	mov    %eax,%ebx
 81603df:	89 d8                	mov    %ebx,%eax
 81603e1:	89 04 24             	mov    %eax,(%esp)
 81603e4:	e8 31 1c 00 00       	call   816201a <_ZN29InterSelectCreateDnfEventInfoC1Ev>
 81603e9:	89 d8                	mov    %ebx,%eax
 81603eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81603ee:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81603f2:	74 2f                	je     8160423 <_ZN24TaiwanInternalDispatcher4initEv+0x18f>
 81603f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81603f7:	89 04 24             	mov    %eax,(%esp)
 81603fa:	e8 8f 1a 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 81603ff:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160402:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160406:	89 44 24 04          	mov    %eax,0x4(%esp)
 816040a:	8b 45 08             	mov    0x8(%ebp),%eax
 816040d:	89 04 24             	mov    %eax,(%esp)
 8160410:	e8 e9 02 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 8160415:	83 f0 01             	xor    $0x1,%eax
 8160418:	84 c0                	test   %al,%al
 816041a:	74 07                	je     8160423 <_ZN24TaiwanInternalDispatcher4initEv+0x18f>
 816041c:	b8 01 00 00 00       	mov    $0x1,%eax
 8160421:	eb 05                	jmp    8160428 <_ZN24TaiwanInternalDispatcher4initEv+0x194>
 8160423:	b8 00 00 00 00       	mov    $0x0,%eax
 8160428:	84 c0                	test   %al,%al
 816042a:	74 0a                	je     8160436 <_ZN24TaiwanInternalDispatcher4initEv+0x1a2>
 816042c:	b8 00 00 00 00       	mov    $0x0,%eax
 8160431:	e9 5d 02 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 8160436:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 816043d:	e8 0e 40 5c 00       	call   8724450 <_Znwj>
 8160442:	89 c3                	mov    %eax,%ebx
 8160444:	89 d8                	mov    %ebx,%eax
 8160446:	89 04 24             	mov    %eax,(%esp)
 8160449:	e8 3e 1c 00 00       	call   816208c <_ZN28InterSelectCreateDnfUserInfoC1Ev>
 816044e:	89 d8                	mov    %ebx,%eax
 8160450:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160453:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160457:	74 2f                	je     8160488 <_ZN24TaiwanInternalDispatcher4initEv+0x1f4>
 8160459:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816045c:	89 04 24             	mov    %eax,(%esp)
 816045f:	e8 2a 1a 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 8160464:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160467:	89 54 24 08          	mov    %edx,0x8(%esp)
 816046b:	89 44 24 04          	mov    %eax,0x4(%esp)
 816046f:	8b 45 08             	mov    0x8(%ebp),%eax
 8160472:	89 04 24             	mov    %eax,(%esp)
 8160475:	e8 84 02 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 816047a:	83 f0 01             	xor    $0x1,%eax
 816047d:	84 c0                	test   %al,%al
 816047f:	74 07                	je     8160488 <_ZN24TaiwanInternalDispatcher4initEv+0x1f4>
 8160481:	b8 01 00 00 00       	mov    $0x1,%eax
 8160486:	eb 05                	jmp    816048d <_ZN24TaiwanInternalDispatcher4initEv+0x1f9>
 8160488:	b8 00 00 00 00       	mov    $0x0,%eax
 816048d:	84 c0                	test   %al,%al
 816048f:	74 0a                	je     816049b <_ZN24TaiwanInternalDispatcher4initEv+0x207>
 8160491:	b8 00 00 00 00       	mov    $0x0,%eax
 8160496:	e9 f8 01 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 816049b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81604a2:	e8 a9 3f 5c 00       	call   8724450 <_Znwj>
 81604a7:	89 c3                	mov    %eax,%ebx
 81604a9:	89 d8                	mov    %ebx,%eax
 81604ab:	89 04 24             	mov    %eax,(%esp)
 81604ae:	e8 4b 1c 00 00       	call   81620fe <_ZN27InterSelectMobileAuthRewardC1Ev>
 81604b3:	89 d8                	mov    %ebx,%eax
 81604b5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81604b8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81604bc:	74 2f                	je     81604ed <_ZN24TaiwanInternalDispatcher4initEv+0x259>
 81604be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81604c1:	89 04 24             	mov    %eax,(%esp)
 81604c4:	e8 c5 19 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 81604c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81604cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 81604d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81604d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81604d7:	89 04 24             	mov    %eax,(%esp)
 81604da:	e8 1f 02 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 81604df:	83 f0 01             	xor    $0x1,%eax
 81604e2:	84 c0                	test   %al,%al
 81604e4:	74 07                	je     81604ed <_ZN24TaiwanInternalDispatcher4initEv+0x259>
 81604e6:	b8 01 00 00 00       	mov    $0x1,%eax
 81604eb:	eb 05                	jmp    81604f2 <_ZN24TaiwanInternalDispatcher4initEv+0x25e>
 81604ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81604f2:	84 c0                	test   %al,%al
 81604f4:	74 0a                	je     8160500 <_ZN24TaiwanInternalDispatcher4initEv+0x26c>
 81604f6:	b8 00 00 00 00       	mov    $0x0,%eax
 81604fb:	e9 93 01 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 8160500:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8160507:	e8 44 3f 5c 00       	call   8724450 <_Znwj>
 816050c:	89 c3                	mov    %eax,%ebx
 816050e:	89 d8                	mov    %ebx,%eax
 8160510:	89 04 24             	mov    %eax,(%esp)
 8160513:	e8 58 1c 00 00       	call   8162170 <_ZN28InterSelectPcroomDailyRewardC1Ev>
 8160518:	89 d8                	mov    %ebx,%eax
 816051a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 816051d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160521:	74 2f                	je     8160552 <_ZN24TaiwanInternalDispatcher4initEv+0x2be>
 8160523:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160526:	89 04 24             	mov    %eax,(%esp)
 8160529:	e8 60 19 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 816052e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160531:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160535:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160539:	8b 45 08             	mov    0x8(%ebp),%eax
 816053c:	89 04 24             	mov    %eax,(%esp)
 816053f:	e8 ba 01 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 8160544:	83 f0 01             	xor    $0x1,%eax
 8160547:	84 c0                	test   %al,%al
 8160549:	74 07                	je     8160552 <_ZN24TaiwanInternalDispatcher4initEv+0x2be>
 816054b:	b8 01 00 00 00       	mov    $0x1,%eax
 8160550:	eb 05                	jmp    8160557 <_ZN24TaiwanInternalDispatcher4initEv+0x2c3>
 8160552:	b8 00 00 00 00       	mov    $0x0,%eax
 8160557:	84 c0                	test   %al,%al
 8160559:	74 0a                	je     8160565 <_ZN24TaiwanInternalDispatcher4initEv+0x2d1>
 816055b:	b8 00 00 00 00       	mov    $0x0,%eax
 8160560:	e9 2e 01 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 8160565:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 816056c:	e8 df 3e 5c 00       	call   8724450 <_Znwj>
 8160571:	89 c3                	mov    %eax,%ebx
 8160573:	89 d8                	mov    %ebx,%eax
 8160575:	89 04 24             	mov    %eax,(%esp)
 8160578:	e8 65 1c 00 00       	call   81621e2 <_ZN31InterUpdateP2pHolePunchingStateC1Ev>
 816057d:	89 d8                	mov    %ebx,%eax
 816057f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160582:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8160586:	74 2f                	je     81605b7 <_ZN24TaiwanInternalDispatcher4initEv+0x323>
 8160588:	8b 45 f4             	mov    -0xc(%ebp),%eax
 816058b:	89 04 24             	mov    %eax,(%esp)
 816058e:	e8 fb 18 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 8160593:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160596:	89 54 24 08          	mov    %edx,0x8(%esp)
 816059a:	89 44 24 04          	mov    %eax,0x4(%esp)
 816059e:	8b 45 08             	mov    0x8(%ebp),%eax
 81605a1:	89 04 24             	mov    %eax,(%esp)
 81605a4:	e8 55 01 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 81605a9:	83 f0 01             	xor    $0x1,%eax
 81605ac:	84 c0                	test   %al,%al
 81605ae:	74 07                	je     81605b7 <_ZN24TaiwanInternalDispatcher4initEv+0x323>
 81605b0:	b8 01 00 00 00       	mov    $0x1,%eax
 81605b5:	eb 05                	jmp    81605bc <_ZN24TaiwanInternalDispatcher4initEv+0x328>
 81605b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81605bc:	84 c0                	test   %al,%al
 81605be:	74 0a                	je     81605ca <_ZN24TaiwanInternalDispatcher4initEv+0x336>
 81605c0:	b8 00 00 00 00       	mov    $0x0,%eax
 81605c5:	e9 c9 00 00 00       	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 81605ca:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 81605d1:	e8 7a 3e 5c 00       	call   8724450 <_Znwj>
 81605d6:	89 c3                	mov    %eax,%ebx
 81605d8:	89 d8                	mov    %ebx,%eax
 81605da:	89 04 24             	mov    %eax,(%esp)
 81605dd:	e8 72 1c 00 00       	call   8162254 <_ZN29InterInsertGiveBoxEventRewardC1Ev>
 81605e2:	89 d8                	mov    %ebx,%eax
 81605e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81605e7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81605eb:	74 2f                	je     816061c <_ZN24TaiwanInternalDispatcher4initEv+0x388>
 81605ed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81605f0:	89 04 24             	mov    %eax,(%esp)
 81605f3:	e8 96 18 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 81605f8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81605fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81605ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160603:	8b 45 08             	mov    0x8(%ebp),%eax
 8160606:	89 04 24             	mov    %eax,(%esp)
 8160609:	e8 f0 00 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 816060e:	83 f0 01             	xor    $0x1,%eax
 8160611:	84 c0                	test   %al,%al
 8160613:	74 07                	je     816061c <_ZN24TaiwanInternalDispatcher4initEv+0x388>
 8160615:	b8 01 00 00 00       	mov    $0x1,%eax
 816061a:	eb 05                	jmp    8160621 <_ZN24TaiwanInternalDispatcher4initEv+0x38d>
 816061c:	b8 00 00 00 00       	mov    $0x0,%eax
 8160621:	84 c0                	test   %al,%al
 8160623:	74 07                	je     816062c <_ZN24TaiwanInternalDispatcher4initEv+0x398>
 8160625:	b8 00 00 00 00       	mov    $0x0,%eax
 816062a:	eb 67                	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 816062c:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8160633:	e8 18 3e 5c 00       	call   8724450 <_Znwj>
 8160638:	89 c3                	mov    %eax,%ebx
 816063a:	89 d8                	mov    %ebx,%eax
 816063c:	89 04 24             	mov    %eax,(%esp)
 816063f:	e8 82 1c 00 00       	call   81622c6 <_ZN29InterLoadHeroMissionEventDataC1Ev>
 8160644:	89 d8                	mov    %ebx,%eax
 8160646:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160649:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 816064d:	74 2f                	je     816067e <_ZN24TaiwanInternalDispatcher4initEv+0x3ea>
 816064f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160652:	89 04 24             	mov    %eax,(%esp)
 8160655:	e8 34 18 00 00       	call   8161e8e <_ZNK30TaiwanInterfaceInterDispatcher7getCodeEv>
 816065a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 816065d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160661:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160665:	8b 45 08             	mov    0x8(%ebp),%eax
 8160668:	89 04 24             	mov    %eax,(%esp)
 816066b:	e8 8e 00 00 00       	call   81606fe <_ZN24TaiwanInternalDispatcher13addDispatcherEN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcher>
 8160670:	83 f0 01             	xor    $0x1,%eax
 8160673:	84 c0                	test   %al,%al
 8160675:	74 07                	je     816067e <_ZN24TaiwanInternalDispatcher4initEv+0x3ea>
 8160677:	b8 01 00 00 00       	mov    $0x1,%eax
 816067c:	eb 05                	jmp    8160683 <_ZN24TaiwanInternalDispatcher4initEv+0x3ef>
 816067e:	b8 00 00 00 00       	mov    $0x0,%eax
 8160683:	84 c0                	test   %al,%al
 8160685:	74 07                	je     816068e <_ZN24TaiwanInternalDispatcher4initEv+0x3fa>
 8160687:	b8 00 00 00 00       	mov    $0x0,%eax
 816068c:	eb 05                	jmp    8160693 <_ZN24TaiwanInternalDispatcher4initEv+0x3ff>
 816068e:	b8 01 00 00 00       	mov    $0x1,%eax
 8160693:	83 c4 24             	add    $0x24,%esp
 8160696:	5b                   	pop    %ebx
 8160697:	5d                   	pop    %ebp
 8160698:	c3                   	ret
 8160699:	90                   	nop

```

```c
// TaiwanInternalDispatcher::init @ 0x8160294

/* TaiwanInternalDispatcher::init() */

bool __thiscall TaiwanInternalDispatcher::init(TaiwanInternalDispatcher *this)

{
  bool bVar1;
  char cVar2;
  InterLoadServiceRestrictPolicy *this_00;
  undefined4 uVar3;
  InterLoadGeolocation *this_01;
  InterCheckStayTimeEvent *this_02;
  InterSelectCreateDnfEventInfo *this_03;
  InterSelectCreateDnfUserInfo *this_04;
  InterSelectMobileAuthReward *this_05;
  InterSelectPcroomDailyReward *this_06;
  InterUpdateP2pHolePunchingState *this_07;
  InterInsertGiveBoxEventReward *this_08;
  InterLoadHeroMissionEventData *this_09;
  
  this_00 = operator_new(8);
  InterLoadServiceRestrictPolicy::InterLoadServiceRestrictPolicy(this_00);
  if (this_00 == (InterLoadServiceRestrictPolicy *)0x0) {
LAB_081602f4:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_00);
    cVar2 = addDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_081602f4;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  InterLoadGeolocation::InterLoadGeolocation(this_01);
  if (this_01 == (InterLoadGeolocation *)0x0) {
LAB_08160359:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_01);
    cVar2 = addDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_08160359;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  InterCheckStayTimeEvent::InterCheckStayTimeEvent(this_02);
  if (this_02 == (InterCheckStayTimeEvent *)0x0) {
LAB_081603be:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_02);
    cVar2 = addDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_081603be;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  InterSelectCreateDnfEventInfo::InterSelectCreateDnfEventInfo(this_03);
  if (this_03 == (InterSelectCreateDnfEventInfo *)0x0) {
LAB_08160423:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_03);
    cVar2 = addDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_08160423;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  InterSelectCreateDnfUserInfo::InterSelectCreateDnfUserInfo(this_04);
  if (this_04 == (InterSelectCreateDnfUserInfo *)0x0) {
LAB_08160488:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_04);
    cVar2 = addDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_08160488;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  InterSelectMobileAuthReward::InterSelectMobileAuthReward(this_05);
  if (this_05 == (InterSelectMobileAuthReward *)0x0) {
LAB_081604ed:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_05);
    cVar2 = addDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_081604ed;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  InterSelectPcroomDailyReward::InterSelectPcroomDailyReward(this_06);
  if (this_06 == (InterSelectPcroomDailyReward *)0x0) {
LAB_08160552:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_06);
    cVar2 = addDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_08160552;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  InterUpdateP2pHolePunchingState::InterUpdateP2pHolePunchingState(this_07);
  if (this_07 == (InterUpdateP2pHolePunchingState *)0x0) {
LAB_081605b7:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_07);
    cVar2 = addDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_081605b7;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  InterInsertGiveBoxEventReward::InterInsertGiveBoxEventReward(this_08);
  if (this_08 == (InterInsertGiveBoxEventReward *)0x0) {
LAB_0816061c:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_08);
    cVar2 = addDispatcher(this,uVar3,this_08);
    if (cVar2 == '\x01') goto LAB_0816061c;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_09 = operator_new(8);
  InterLoadHeroMissionEventData::InterLoadHeroMissionEventData(this_09);
  if (this_09 != (InterLoadHeroMissionEventData *)0x0) {
    uVar3 = TaiwanInterfaceInterDispatcher::getCode((TaiwanInterfaceInterDispatcher *)this_09);
    cVar2 = addDispatcher(this,uVar3,this_09);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_08160683;
    }
  }
  bVar1 = false;
LAB_08160683:
  return !bVar1;
}

```

---

## ~TaiwanInternalDispatcher

```asm
// === 08160212 TaiwanInternalDispatcher::~TaiwanInternalDispatcher  [0x08160212-0x8160293] ===
 8160212:	55                   	push   %ebp
 8160213:	89 e5                	mov    %esp,%ebp
 8160215:	56                   	push   %esi
 8160216:	53                   	push   %ebx
 8160217:	83 ec 20             	sub    $0x20,%esp
 816021a:	8b 55 08             	mov    0x8(%ebp),%edx
 816021d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8160220:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160224:	89 04 24             	mov    %eax,(%esp)
 8160227:	e8 e6 21 00 00       	call   8162412 <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 816022c:	83 ec 04             	sub    $0x4,%esp
 816022f:	8b 55 08             	mov    0x8(%ebp),%edx
 8160232:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8160235:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160239:	89 04 24             	mov    %eax,(%esp)
 816023c:	e8 ab 21 00 00       	call   81623ec <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE5beginEv>
 8160241:	83 ec 04             	sub    $0x4,%esp
 8160244:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8160247:	88 5c 24 0c          	mov    %bl,0xc(%esp)
 816024b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 816024e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8160252:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160255:	89 54 24 04          	mov    %edx,0x4(%esp)
 8160259:	89 04 24             	mov    %eax,(%esp)
 816025c:	e8 d6 21 00 00       	call   8162437 <_ZSt8for_eachISt17_Rb_tree_iteratorISt4pairIKN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherEEN24TaiwanInternalDispatcher8FnDeleteEET0_T_SC_SB_>
 8160261:	83 ec 04             	sub    $0x4,%esp
 8160264:	8b 45 08             	mov    0x8(%ebp),%eax
 8160267:	89 04 24             	mov    %eax,(%esp)
 816026a:	e8 db 20 00 00       	call   816234a <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 816026f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8160272:	83 c4 00             	add    $0x0,%esp
 8160275:	5b                   	pop    %ebx
 8160276:	5e                   	pop    %esi
 8160277:	5d                   	pop    %ebp
 8160278:	c3                   	ret
 8160279:	89 d3                	mov    %edx,%ebx
 816027b:	89 c6                	mov    %eax,%esi
 816027d:	8b 45 08             	mov    0x8(%ebp),%eax
 8160280:	89 04 24             	mov    %eax,(%esp)
 8160283:	e8 c2 20 00 00       	call   816234a <_ZNSt3mapIN18TaiwanInternalPack1TEP30TaiwanInterfaceInterDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 8160288:	89 f0                	mov    %esi,%eax
 816028a:	89 da                	mov    %ebx,%edx
 816028c:	89 04 24             	mov    %eax,(%esp)
 816028f:	e8 bc 34 98 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// TaiwanInternalDispatcher::~TaiwanInternalDispatcher @ 0x8160212

/* TaiwanInternalDispatcher::~TaiwanInternalDispatcher() */

void __thiscall TaiwanInternalDispatcher::~TaiwanInternalDispatcher(TaiwanInternalDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 08160227 to 08160260 has its CatchHandler @ 08160279 */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::end((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
         *)&local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::begin((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>,TaiwanInternalDispatcher::FnDelete>
            (&local_15,local_10,local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
  ::~map((map<TaiwanInternalPack::T,TaiwanInterfaceInterDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceInterDispatcher*>>>
          *)this);
  return;
}

```

