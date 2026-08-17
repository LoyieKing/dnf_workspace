# TaiwanDBDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## TaiwanDBDispatcher

```asm
// === 0815a134 TaiwanDBDispatcher::TaiwanDBDispatcher  [0x0815a134-0x815a175] ===
 815a134:	55                   	push   %ebp
 815a135:	89 e5                	mov    %esp,%ebp
 815a137:	56                   	push   %esi
 815a138:	53                   	push   %ebx
 815a139:	83 ec 10             	sub    $0x10,%esp
 815a13c:	8b 45 08             	mov    0x8(%ebp),%eax
 815a13f:	89 04 24             	mov    %eax,(%esp)
 815a142:	e8 d3 45 00 00       	call   815e71a <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEEC1Ev>
 815a147:	8b 45 08             	mov    0x8(%ebp),%eax
 815a14a:	89 04 24             	mov    %eax,(%esp)
 815a14d:	e8 42 46 00 00       	call   815e794 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE5clearEv>
 815a152:	eb 1b                	jmp    815a16f <_ZN18TaiwanDBDispatcherC1Ev+0x3b>
 815a154:	89 d3                	mov    %edx,%ebx
 815a156:	89 c6                	mov    %eax,%esi
 815a158:	8b 45 08             	mov    0x8(%ebp),%eax
 815a15b:	89 04 24             	mov    %eax,(%esp)
 815a15e:	e8 a3 45 00 00       	call   815e706 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 815a163:	89 f0                	mov    %esi,%eax
 815a165:	89 da                	mov    %ebx,%edx
 815a167:	89 04 24             	mov    %eax,(%esp)
 815a16a:	e8 e1 95 98 00       	call   8ae3750 <_Unwind_Resume>
 815a16f:	83 c4 10             	add    $0x10,%esp
 815a172:	5b                   	pop    %ebx
 815a173:	5e                   	pop    %esi
 815a174:	5d                   	pop    %ebp
 815a175:	c3                   	ret

```

```c
// TaiwanDBDispatcher::TaiwanDBDispatcher @ 0x815a134

/* TaiwanDBDispatcher::TaiwanDBDispatcher() */

void __thiscall TaiwanDBDispatcher::TaiwanDBDispatcher(TaiwanDBDispatcher *this)

{
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::map((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
         *)this);
                    /* try { // try from 0815a14d to 0815a151 has its CatchHandler @ 0815a154 */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::clear((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
           *)this);
  return;
}

```

---

## addDispatcher

```asm
// === 0815a85a TaiwanDBDispatcher::addDispatcher  [0x0815a85a-0x815a89f] ===
 815a85a:	55                   	push   %ebp
 815a85b:	89 e5                	mov    %esp,%ebp
 815a85d:	83 ec 18             	sub    $0x18,%esp
 815a860:	8b 45 0c             	mov    0xc(%ebp),%eax
 815a863:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a867:	8b 45 08             	mov    0x8(%ebp),%eax
 815a86a:	89 04 24             	mov    %eax,(%esp)
 815a86d:	e8 84 ff ff ff       	call   815a7f6 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE>
 815a872:	85 c0                	test   %eax,%eax
 815a874:	0f 95 c0             	setne  %al
 815a877:	84 c0                	test   %al,%al
 815a879:	74 07                	je     815a882 <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher+0x28>
 815a87b:	b8 00 00 00 00       	mov    $0x0,%eax
 815a880:	eb 1c                	jmp    815a89e <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher+0x44>
 815a882:	8b 45 08             	mov    0x8(%ebp),%eax
 815a885:	8d 55 0c             	lea    0xc(%ebp),%edx
 815a888:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a88c:	89 04 24             	mov    %eax,(%esp)
 815a88f:	e8 fe 3f 00 00       	call   815e892 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEEixERS7_>
 815a894:	8b 55 10             	mov    0x10(%ebp),%edx
 815a897:	89 10                	mov    %edx,(%eax)
 815a899:	b8 01 00 00 00       	mov    $0x1,%eax
 815a89e:	c9                   	leave
 815a89f:	c3                   	ret

```

```c
// TaiwanDBDispatcher::addDispatcher @ 0x815a85a

/* TaiwanDBDispatcher::addDispatcher(TaiwanInternalPack::T, TaiwanInterfaceDBDispatcher*) */

bool __thiscall
TaiwanDBDispatcher::addDispatcher(TaiwanDBDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
             ::operator[]((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
                           *)this,(T *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}

```

---

## delDispatcher

```asm
// === 0815a8a0 TaiwanDBDispatcher::delDispatcher  [0x0815a8a0-0x815a8f1] ===
 815a8a0:	55                   	push   %ebp
 815a8a1:	89 e5                	mov    %esp,%ebp
 815a8a3:	83 ec 28             	sub    $0x28,%esp
 815a8a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 815a8a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a8ad:	8b 45 08             	mov    0x8(%ebp),%eax
 815a8b0:	89 04 24             	mov    %eax,(%esp)
 815a8b3:	e8 3e ff ff ff       	call   815a7f6 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE>
 815a8b8:	85 c0                	test   %eax,%eax
 815a8ba:	0f 95 c0             	setne  %al
 815a8bd:	84 c0                	test   %al,%al
 815a8bf:	74 2e                	je     815a8ef <_ZN18TaiwanDBDispatcher13delDispatcherEN18TaiwanInternalPack1TE+0x4f>
 815a8c1:	8b 55 08             	mov    0x8(%ebp),%edx
 815a8c4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 815a8c7:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 815a8ca:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 815a8ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a8d2:	89 04 24             	mov    %eax,(%esp)
 815a8d5:	e8 6a 3f 00 00       	call   815e844 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 815a8da:	83 ec 04             	sub    $0x4,%esp
 815a8dd:	8b 45 08             	mov    0x8(%ebp),%eax
 815a8e0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a8e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a8e7:	89 04 24             	mov    %eax,(%esp)
 815a8ea:	e8 99 40 00 00       	call   815e988 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE5eraseESt17_Rb_tree_iteratorIS8_E>
 815a8ef:	c9                   	leave
 815a8f0:	c3                   	ret
 815a8f1:	90                   	nop

```

```c
// TaiwanDBDispatcher::delDispatcher @ 0x815a8a0

/* TaiwanDBDispatcher::delDispatcher(TaiwanInternalPack::T) */

void __thiscall TaiwanDBDispatcher::delDispatcher(TaiwanDBDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = getDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
    ::find((T *)local_10);
    std::
    map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
    ::erase((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}

```

---

## getDispatcher

```asm
// === 0815a7f6 TaiwanDBDispatcher::getDispatcher  [0x0815a7f6-0x815a859] ===
 815a7f6:	55                   	push   %ebp
 815a7f7:	89 e5                	mov    %esp,%ebp
 815a7f9:	83 ec 28             	sub    $0x28,%esp
 815a7fc:	8b 55 08             	mov    0x8(%ebp),%edx
 815a7ff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 815a802:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 815a805:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 815a809:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a80d:	89 04 24             	mov    %eax,(%esp)
 815a810:	e8 2f 40 00 00       	call   815e844 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE4findERS7_>
 815a815:	83 ec 04             	sub    $0x4,%esp
 815a818:	8b 55 08             	mov    0x8(%ebp),%edx
 815a81b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 815a81e:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a822:	89 04 24             	mov    %eax,(%esp)
 815a825:	e8 a4 3f 00 00       	call   815e7ce <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 815a82a:	83 ec 04             	sub    $0x4,%esp
 815a82d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 815a830:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a834:	8d 45 f0             	lea    -0x10(%ebp),%eax
 815a837:	89 04 24             	mov    %eax,(%esp)
 815a83a:	e8 31 40 00 00       	call   815e870 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherEEneERKS7_>
 815a83f:	84 c0                	test   %al,%al
 815a841:	74 10                	je     815a853 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE+0x5d>
 815a843:	8d 45 f0             	lea    -0x10(%ebp),%eax
 815a846:	89 04 24             	mov    %eax,(%esp)
 815a849:	e8 36 40 00 00       	call   815e884 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherEEptEv>
 815a84e:	8b 40 04             	mov    0x4(%eax),%eax
 815a851:	eb 05                	jmp    815a858 <_ZN18TaiwanDBDispatcher13getDispatcherEN18TaiwanInternalPack1TE+0x62>
 815a853:	b8 00 00 00 00       	mov    $0x0,%eax
 815a858:	c9                   	leave
 815a859:	c3                   	ret

```

```c
// TaiwanDBDispatcher::getDispatcher @ 0x815a7f6

/* TaiwanDBDispatcher::getDispatcher(TaiwanInternalPack::T) */

undefined4 TaiwanDBDispatcher::getDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>
  local_14 [4];
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  local_10 [12];
  
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::find(local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## init

```asm
// === 0815a1f8 TaiwanDBDispatcher::init  [0x0815a1f8-0x815a7f5] ===
 815a1f8:	55                   	push   %ebp
 815a1f9:	89 e5                	mov    %esp,%ebp
 815a1fb:	53                   	push   %ebx
 815a1fc:	83 ec 24             	sub    $0x24,%esp
 815a1ff:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 815a206:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a20d:	e8 3e a2 5c 00       	call   8724450 <_Znwj>
 815a212:	89 c3                	mov    %eax,%ebx
 815a214:	89 d8                	mov    %ebx,%eax
 815a216:	89 04 24             	mov    %eax,(%esp)
 815a219:	e8 da 3d 00 00       	call   815dff8 <_ZN25LoadServiceRestrictPolicyC1Ev>
 815a21e:	89 d8                	mov    %ebx,%eax
 815a220:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a223:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a227:	74 2f                	je     815a258 <_ZN18TaiwanDBDispatcher4initEv+0x60>
 815a229:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a22c:	89 04 24             	mov    %eax,(%esp)
 815a22f:	e8 8e 3d 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a234:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a237:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a23b:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a23f:	8b 45 08             	mov    0x8(%ebp),%eax
 815a242:	89 04 24             	mov    %eax,(%esp)
 815a245:	e8 10 06 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a24a:	83 f0 01             	xor    $0x1,%eax
 815a24d:	84 c0                	test   %al,%al
 815a24f:	74 07                	je     815a258 <_ZN18TaiwanDBDispatcher4initEv+0x60>
 815a251:	b8 01 00 00 00       	mov    $0x1,%eax
 815a256:	eb 05                	jmp    815a25d <_ZN18TaiwanDBDispatcher4initEv+0x65>
 815a258:	b8 00 00 00 00       	mov    $0x0,%eax
 815a25d:	84 c0                	test   %al,%al
 815a25f:	74 0a                	je     815a26b <_ZN18TaiwanDBDispatcher4initEv+0x73>
 815a261:	b8 00 00 00 00       	mov    $0x0,%eax
 815a266:	e9 85 05 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a26b:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a272:	e8 d9 a1 5c 00       	call   8724450 <_Znwj>
 815a277:	89 c3                	mov    %eax,%ebx
 815a279:	89 d8                	mov    %ebx,%eax
 815a27b:	89 04 24             	mov    %eax,(%esp)
 815a27e:	e8 e7 3d 00 00       	call   815e06a <_ZN25SaveServiceRestrictPolicyC1Ev>
 815a283:	89 d8                	mov    %ebx,%eax
 815a285:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a288:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a28c:	74 2f                	je     815a2bd <_ZN18TaiwanDBDispatcher4initEv+0xc5>
 815a28e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a291:	89 04 24             	mov    %eax,(%esp)
 815a294:	e8 29 3d 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a299:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a29c:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a2a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a2a4:	8b 45 08             	mov    0x8(%ebp),%eax
 815a2a7:	89 04 24             	mov    %eax,(%esp)
 815a2aa:	e8 ab 05 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a2af:	83 f0 01             	xor    $0x1,%eax
 815a2b2:	84 c0                	test   %al,%al
 815a2b4:	74 07                	je     815a2bd <_ZN18TaiwanDBDispatcher4initEv+0xc5>
 815a2b6:	b8 01 00 00 00       	mov    $0x1,%eax
 815a2bb:	eb 05                	jmp    815a2c2 <_ZN18TaiwanDBDispatcher4initEv+0xca>
 815a2bd:	b8 00 00 00 00       	mov    $0x0,%eax
 815a2c2:	84 c0                	test   %al,%al
 815a2c4:	74 0a                	je     815a2d0 <_ZN18TaiwanDBDispatcher4initEv+0xd8>
 815a2c6:	b8 00 00 00 00       	mov    $0x0,%eax
 815a2cb:	e9 20 05 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a2d0:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a2d7:	e8 74 a1 5c 00       	call   8724450 <_Znwj>
 815a2dc:	89 c3                	mov    %eax,%ebx
 815a2de:	89 d8                	mov    %ebx,%eax
 815a2e0:	89 04 24             	mov    %eax,(%esp)
 815a2e3:	e8 f4 3d 00 00       	call   815e0dc <_ZN15LoadGeolocationC1Ev>
 815a2e8:	89 d8                	mov    %ebx,%eax
 815a2ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a2ed:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a2f1:	74 2f                	je     815a322 <_ZN18TaiwanDBDispatcher4initEv+0x12a>
 815a2f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a2f6:	89 04 24             	mov    %eax,(%esp)
 815a2f9:	e8 c4 3c 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a2fe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a301:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a305:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a309:	8b 45 08             	mov    0x8(%ebp),%eax
 815a30c:	89 04 24             	mov    %eax,(%esp)
 815a30f:	e8 46 05 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a314:	83 f0 01             	xor    $0x1,%eax
 815a317:	84 c0                	test   %al,%al
 815a319:	74 07                	je     815a322 <_ZN18TaiwanDBDispatcher4initEv+0x12a>
 815a31b:	b8 01 00 00 00       	mov    $0x1,%eax
 815a320:	eb 05                	jmp    815a327 <_ZN18TaiwanDBDispatcher4initEv+0x12f>
 815a322:	b8 00 00 00 00       	mov    $0x0,%eax
 815a327:	84 c0                	test   %al,%al
 815a329:	74 0a                	je     815a335 <_ZN18TaiwanDBDispatcher4initEv+0x13d>
 815a32b:	b8 00 00 00 00       	mov    $0x0,%eax
 815a330:	e9 bb 04 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a335:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a33c:	e8 0f a1 5c 00       	call   8724450 <_Znwj>
 815a341:	89 c3                	mov    %eax,%ebx
 815a343:	89 d8                	mov    %ebx,%eax
 815a345:	89 04 24             	mov    %eax,(%esp)
 815a348:	e8 01 3e 00 00       	call   815e14e <_ZN18CheckStayTimeEventC1Ev>
 815a34d:	89 d8                	mov    %ebx,%eax
 815a34f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a352:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a356:	74 2f                	je     815a387 <_ZN18TaiwanDBDispatcher4initEv+0x18f>
 815a358:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a35b:	89 04 24             	mov    %eax,(%esp)
 815a35e:	e8 5f 3c 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a363:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a366:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a36a:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a36e:	8b 45 08             	mov    0x8(%ebp),%eax
 815a371:	89 04 24             	mov    %eax,(%esp)
 815a374:	e8 e1 04 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a379:	83 f0 01             	xor    $0x1,%eax
 815a37c:	84 c0                	test   %al,%al
 815a37e:	74 07                	je     815a387 <_ZN18TaiwanDBDispatcher4initEv+0x18f>
 815a380:	b8 01 00 00 00       	mov    $0x1,%eax
 815a385:	eb 05                	jmp    815a38c <_ZN18TaiwanDBDispatcher4initEv+0x194>
 815a387:	b8 00 00 00 00       	mov    $0x0,%eax
 815a38c:	84 c0                	test   %al,%al
 815a38e:	74 0a                	je     815a39a <_ZN18TaiwanDBDispatcher4initEv+0x1a2>
 815a390:	b8 00 00 00 00       	mov    $0x0,%eax
 815a395:	e9 56 04 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a39a:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a3a1:	e8 aa a0 5c 00       	call   8724450 <_Znwj>
 815a3a6:	89 c3                	mov    %eax,%ebx
 815a3a8:	89 d8                	mov    %ebx,%eax
 815a3aa:	89 04 24             	mov    %eax,(%esp)
 815a3ad:	e8 0e 3e 00 00       	call   815e1c0 <_ZN18ResetStayTimeEventC1Ev>
 815a3b2:	89 d8                	mov    %ebx,%eax
 815a3b4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a3b7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a3bb:	74 2f                	je     815a3ec <_ZN18TaiwanDBDispatcher4initEv+0x1f4>
 815a3bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a3c0:	89 04 24             	mov    %eax,(%esp)
 815a3c3:	e8 fa 3b 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a3c8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a3cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a3cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a3d3:	8b 45 08             	mov    0x8(%ebp),%eax
 815a3d6:	89 04 24             	mov    %eax,(%esp)
 815a3d9:	e8 7c 04 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a3de:	83 f0 01             	xor    $0x1,%eax
 815a3e1:	84 c0                	test   %al,%al
 815a3e3:	74 07                	je     815a3ec <_ZN18TaiwanDBDispatcher4initEv+0x1f4>
 815a3e5:	b8 01 00 00 00       	mov    $0x1,%eax
 815a3ea:	eb 05                	jmp    815a3f1 <_ZN18TaiwanDBDispatcher4initEv+0x1f9>
 815a3ec:	b8 00 00 00 00       	mov    $0x0,%eax
 815a3f1:	84 c0                	test   %al,%al
 815a3f3:	74 0a                	je     815a3ff <_ZN18TaiwanDBDispatcher4initEv+0x207>
 815a3f5:	b8 00 00 00 00       	mov    $0x0,%eax
 815a3fa:	e9 f1 03 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a3ff:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a406:	e8 45 a0 5c 00       	call   8724450 <_Znwj>
 815a40b:	89 c3                	mov    %eax,%ebx
 815a40d:	89 d8                	mov    %ebx,%eax
 815a40f:	89 04 24             	mov    %eax,(%esp)
 815a412:	e8 1b 3e 00 00       	call   815e232 <_ZN16DBUpdateExitTimeC1Ev>
 815a417:	89 d8                	mov    %ebx,%eax
 815a419:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a41c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a420:	74 2f                	je     815a451 <_ZN18TaiwanDBDispatcher4initEv+0x259>
 815a422:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a425:	89 04 24             	mov    %eax,(%esp)
 815a428:	e8 95 3b 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a42d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a430:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a434:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a438:	8b 45 08             	mov    0x8(%ebp),%eax
 815a43b:	89 04 24             	mov    %eax,(%esp)
 815a43e:	e8 17 04 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a443:	83 f0 01             	xor    $0x1,%eax
 815a446:	84 c0                	test   %al,%al
 815a448:	74 07                	je     815a451 <_ZN18TaiwanDBDispatcher4initEv+0x259>
 815a44a:	b8 01 00 00 00       	mov    $0x1,%eax
 815a44f:	eb 05                	jmp    815a456 <_ZN18TaiwanDBDispatcher4initEv+0x25e>
 815a451:	b8 00 00 00 00       	mov    $0x0,%eax
 815a456:	84 c0                	test   %al,%al
 815a458:	74 0a                	je     815a464 <_ZN18TaiwanDBDispatcher4initEv+0x26c>
 815a45a:	b8 00 00 00 00       	mov    $0x0,%eax
 815a45f:	e9 8c 03 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a464:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a46b:	e8 e0 9f 5c 00       	call   8724450 <_Znwj>
 815a470:	89 c3                	mov    %eax,%ebx
 815a472:	89 d8                	mov    %ebx,%eax
 815a474:	89 04 24             	mov    %eax,(%esp)
 815a477:	e8 28 3e 00 00       	call   815e2a4 <_ZN26DBSelectCreateDnfEventInfoC1Ev>
 815a47c:	89 d8                	mov    %ebx,%eax
 815a47e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a481:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a485:	74 2f                	je     815a4b6 <_ZN18TaiwanDBDispatcher4initEv+0x2be>
 815a487:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a48a:	89 04 24             	mov    %eax,(%esp)
 815a48d:	e8 30 3b 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a492:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a495:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a499:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a49d:	8b 45 08             	mov    0x8(%ebp),%eax
 815a4a0:	89 04 24             	mov    %eax,(%esp)
 815a4a3:	e8 b2 03 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a4a8:	83 f0 01             	xor    $0x1,%eax
 815a4ab:	84 c0                	test   %al,%al
 815a4ad:	74 07                	je     815a4b6 <_ZN18TaiwanDBDispatcher4initEv+0x2be>
 815a4af:	b8 01 00 00 00       	mov    $0x1,%eax
 815a4b4:	eb 05                	jmp    815a4bb <_ZN18TaiwanDBDispatcher4initEv+0x2c3>
 815a4b6:	b8 00 00 00 00       	mov    $0x0,%eax
 815a4bb:	84 c0                	test   %al,%al
 815a4bd:	74 0a                	je     815a4c9 <_ZN18TaiwanDBDispatcher4initEv+0x2d1>
 815a4bf:	b8 00 00 00 00       	mov    $0x0,%eax
 815a4c4:	e9 27 03 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a4c9:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a4d0:	e8 7b 9f 5c 00       	call   8724450 <_Znwj>
 815a4d5:	89 c3                	mov    %eax,%ebx
 815a4d7:	89 d8                	mov    %ebx,%eax
 815a4d9:	89 04 24             	mov    %eax,(%esp)
 815a4dc:	e8 35 3e 00 00       	call   815e316 <_ZN25DBSelectCreateDnfUserInfoC1Ev>
 815a4e1:	89 d8                	mov    %ebx,%eax
 815a4e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a4e6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a4ea:	74 2f                	je     815a51b <_ZN18TaiwanDBDispatcher4initEv+0x323>
 815a4ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a4ef:	89 04 24             	mov    %eax,(%esp)
 815a4f2:	e8 cb 3a 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a4f7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a4fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a4fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a502:	8b 45 08             	mov    0x8(%ebp),%eax
 815a505:	89 04 24             	mov    %eax,(%esp)
 815a508:	e8 4d 03 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a50d:	83 f0 01             	xor    $0x1,%eax
 815a510:	84 c0                	test   %al,%al
 815a512:	74 07                	je     815a51b <_ZN18TaiwanDBDispatcher4initEv+0x323>
 815a514:	b8 01 00 00 00       	mov    $0x1,%eax
 815a519:	eb 05                	jmp    815a520 <_ZN18TaiwanDBDispatcher4initEv+0x328>
 815a51b:	b8 00 00 00 00       	mov    $0x0,%eax
 815a520:	84 c0                	test   %al,%al
 815a522:	74 0a                	je     815a52e <_ZN18TaiwanDBDispatcher4initEv+0x336>
 815a524:	b8 00 00 00 00       	mov    $0x0,%eax
 815a529:	e9 c2 02 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a52e:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a535:	e8 16 9f 5c 00       	call   8724450 <_Znwj>
 815a53a:	89 c3                	mov    %eax,%ebx
 815a53c:	89 d8                	mov    %ebx,%eax
 815a53e:	89 04 24             	mov    %eax,(%esp)
 815a541:	e8 42 3e 00 00       	call   815e388 <_ZN25DBInsertCreateDnfUserInfoC1Ev>
 815a546:	89 d8                	mov    %ebx,%eax
 815a548:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a54b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a54f:	74 2f                	je     815a580 <_ZN18TaiwanDBDispatcher4initEv+0x388>
 815a551:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a554:	89 04 24             	mov    %eax,(%esp)
 815a557:	e8 66 3a 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a55c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a55f:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a563:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a567:	8b 45 08             	mov    0x8(%ebp),%eax
 815a56a:	89 04 24             	mov    %eax,(%esp)
 815a56d:	e8 e8 02 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a572:	83 f0 01             	xor    $0x1,%eax
 815a575:	84 c0                	test   %al,%al
 815a577:	74 07                	je     815a580 <_ZN18TaiwanDBDispatcher4initEv+0x388>
 815a579:	b8 01 00 00 00       	mov    $0x1,%eax
 815a57e:	eb 05                	jmp    815a585 <_ZN18TaiwanDBDispatcher4initEv+0x38d>
 815a580:	b8 00 00 00 00       	mov    $0x0,%eax
 815a585:	84 c0                	test   %al,%al
 815a587:	74 0a                	je     815a593 <_ZN18TaiwanDBDispatcher4initEv+0x39b>
 815a589:	b8 00 00 00 00       	mov    $0x0,%eax
 815a58e:	e9 5d 02 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a593:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a59a:	e8 b1 9e 5c 00       	call   8724450 <_Znwj>
 815a59f:	89 c3                	mov    %eax,%ebx
 815a5a1:	89 d8                	mov    %ebx,%eax
 815a5a3:	89 04 24             	mov    %eax,(%esp)
 815a5a6:	e8 4f 3e 00 00       	call   815e3fa <_ZN26DBSelectMobileAuthRewardTwC1Ev>
 815a5ab:	89 d8                	mov    %ebx,%eax
 815a5ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a5b0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a5b4:	74 2f                	je     815a5e5 <_ZN18TaiwanDBDispatcher4initEv+0x3ed>
 815a5b6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a5b9:	89 04 24             	mov    %eax,(%esp)
 815a5bc:	e8 01 3a 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a5c1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a5c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a5c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a5cc:	8b 45 08             	mov    0x8(%ebp),%eax
 815a5cf:	89 04 24             	mov    %eax,(%esp)
 815a5d2:	e8 83 02 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a5d7:	83 f0 01             	xor    $0x1,%eax
 815a5da:	84 c0                	test   %al,%al
 815a5dc:	74 07                	je     815a5e5 <_ZN18TaiwanDBDispatcher4initEv+0x3ed>
 815a5de:	b8 01 00 00 00       	mov    $0x1,%eax
 815a5e3:	eb 05                	jmp    815a5ea <_ZN18TaiwanDBDispatcher4initEv+0x3f2>
 815a5e5:	b8 00 00 00 00       	mov    $0x0,%eax
 815a5ea:	84 c0                	test   %al,%al
 815a5ec:	74 0a                	je     815a5f8 <_ZN18TaiwanDBDispatcher4initEv+0x400>
 815a5ee:	b8 00 00 00 00       	mov    $0x0,%eax
 815a5f3:	e9 f8 01 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a5f8:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a5ff:	e8 4c 9e 5c 00       	call   8724450 <_Znwj>
 815a604:	89 c3                	mov    %eax,%ebx
 815a606:	89 d8                	mov    %ebx,%eax
 815a608:	89 04 24             	mov    %eax,(%esp)
 815a60b:	e8 5c 3e 00 00       	call   815e46c <_ZN25DBSelectPcroomDailyRewardC1Ev>
 815a610:	89 d8                	mov    %ebx,%eax
 815a612:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a615:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a619:	74 2f                	je     815a64a <_ZN18TaiwanDBDispatcher4initEv+0x452>
 815a61b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a61e:	89 04 24             	mov    %eax,(%esp)
 815a621:	e8 9c 39 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a626:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a629:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a62d:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a631:	8b 45 08             	mov    0x8(%ebp),%eax
 815a634:	89 04 24             	mov    %eax,(%esp)
 815a637:	e8 1e 02 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a63c:	83 f0 01             	xor    $0x1,%eax
 815a63f:	84 c0                	test   %al,%al
 815a641:	74 07                	je     815a64a <_ZN18TaiwanDBDispatcher4initEv+0x452>
 815a643:	b8 01 00 00 00       	mov    $0x1,%eax
 815a648:	eb 05                	jmp    815a64f <_ZN18TaiwanDBDispatcher4initEv+0x457>
 815a64a:	b8 00 00 00 00       	mov    $0x0,%eax
 815a64f:	84 c0                	test   %al,%al
 815a651:	74 0a                	je     815a65d <_ZN18TaiwanDBDispatcher4initEv+0x465>
 815a653:	b8 00 00 00 00       	mov    $0x0,%eax
 815a658:	e9 93 01 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a65d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a664:	e8 e7 9d 5c 00       	call   8724450 <_Znwj>
 815a669:	89 c3                	mov    %eax,%ebx
 815a66b:	89 d8                	mov    %ebx,%eax
 815a66d:	89 04 24             	mov    %eax,(%esp)
 815a670:	e8 69 3e 00 00       	call   815e4de <_ZN25DBUpdatePcroomDailyRewardC1Ev>
 815a675:	89 d8                	mov    %ebx,%eax
 815a677:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a67a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a67e:	74 2f                	je     815a6af <_ZN18TaiwanDBDispatcher4initEv+0x4b7>
 815a680:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a683:	89 04 24             	mov    %eax,(%esp)
 815a686:	e8 37 39 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a68b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a68e:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a692:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a696:	8b 45 08             	mov    0x8(%ebp),%eax
 815a699:	89 04 24             	mov    %eax,(%esp)
 815a69c:	e8 b9 01 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a6a1:	83 f0 01             	xor    $0x1,%eax
 815a6a4:	84 c0                	test   %al,%al
 815a6a6:	74 07                	je     815a6af <_ZN18TaiwanDBDispatcher4initEv+0x4b7>
 815a6a8:	b8 01 00 00 00       	mov    $0x1,%eax
 815a6ad:	eb 05                	jmp    815a6b4 <_ZN18TaiwanDBDispatcher4initEv+0x4bc>
 815a6af:	b8 00 00 00 00       	mov    $0x0,%eax
 815a6b4:	84 c0                	test   %al,%al
 815a6b6:	74 0a                	je     815a6c2 <_ZN18TaiwanDBDispatcher4initEv+0x4ca>
 815a6b8:	b8 00 00 00 00       	mov    $0x0,%eax
 815a6bd:	e9 2e 01 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a6c2:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a6c9:	e8 82 9d 5c 00       	call   8724450 <_Znwj>
 815a6ce:	89 c3                	mov    %eax,%ebx
 815a6d0:	89 d8                	mov    %ebx,%eax
 815a6d2:	89 04 24             	mov    %eax,(%esp)
 815a6d5:	e8 76 3e 00 00       	call   815e550 <_ZN26DBInsertGiveBoxEventRewardC1Ev>
 815a6da:	89 d8                	mov    %ebx,%eax
 815a6dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a6df:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a6e3:	74 2f                	je     815a714 <_ZN18TaiwanDBDispatcher4initEv+0x51c>
 815a6e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a6e8:	89 04 24             	mov    %eax,(%esp)
 815a6eb:	e8 d2 38 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a6f0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a6f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a6f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a6fb:	8b 45 08             	mov    0x8(%ebp),%eax
 815a6fe:	89 04 24             	mov    %eax,(%esp)
 815a701:	e8 54 01 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a706:	83 f0 01             	xor    $0x1,%eax
 815a709:	84 c0                	test   %al,%al
 815a70b:	74 07                	je     815a714 <_ZN18TaiwanDBDispatcher4initEv+0x51c>
 815a70d:	b8 01 00 00 00       	mov    $0x1,%eax
 815a712:	eb 05                	jmp    815a719 <_ZN18TaiwanDBDispatcher4initEv+0x521>
 815a714:	b8 00 00 00 00       	mov    $0x0,%eax
 815a719:	84 c0                	test   %al,%al
 815a71b:	74 0a                	je     815a727 <_ZN18TaiwanDBDispatcher4initEv+0x52f>
 815a71d:	b8 00 00 00 00       	mov    $0x0,%eax
 815a722:	e9 c9 00 00 00       	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a727:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a72e:	e8 1d 9d 5c 00       	call   8724450 <_Znwj>
 815a733:	89 c3                	mov    %eax,%ebx
 815a735:	89 d8                	mov    %ebx,%eax
 815a737:	89 04 24             	mov    %eax,(%esp)
 815a73a:	e8 83 3e 00 00       	call   815e5c2 <_ZN26DBLoadHeroMissionEventDataC1Ev>
 815a73f:	89 d8                	mov    %ebx,%eax
 815a741:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a744:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a748:	74 2f                	je     815a779 <_ZN18TaiwanDBDispatcher4initEv+0x581>
 815a74a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a74d:	89 04 24             	mov    %eax,(%esp)
 815a750:	e8 6d 38 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a755:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a758:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a75c:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a760:	8b 45 08             	mov    0x8(%ebp),%eax
 815a763:	89 04 24             	mov    %eax,(%esp)
 815a766:	e8 ef 00 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a76b:	83 f0 01             	xor    $0x1,%eax
 815a76e:	84 c0                	test   %al,%al
 815a770:	74 07                	je     815a779 <_ZN18TaiwanDBDispatcher4initEv+0x581>
 815a772:	b8 01 00 00 00       	mov    $0x1,%eax
 815a777:	eb 05                	jmp    815a77e <_ZN18TaiwanDBDispatcher4initEv+0x586>
 815a779:	b8 00 00 00 00       	mov    $0x0,%eax
 815a77e:	84 c0                	test   %al,%al
 815a780:	74 07                	je     815a789 <_ZN18TaiwanDBDispatcher4initEv+0x591>
 815a782:	b8 00 00 00 00       	mov    $0x0,%eax
 815a787:	eb 67                	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a789:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 815a790:	e8 bb 9c 5c 00       	call   8724450 <_Znwj>
 815a795:	89 c3                	mov    %eax,%ebx
 815a797:	89 d8                	mov    %ebx,%eax
 815a799:	89 04 24             	mov    %eax,(%esp)
 815a79c:	e8 93 3e 00 00       	call   815e634 <_ZN26DBSaveHeroMissionEventDataC1Ev>
 815a7a1:	89 d8                	mov    %ebx,%eax
 815a7a3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 815a7a6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 815a7aa:	74 2f                	je     815a7db <_ZN18TaiwanDBDispatcher4initEv+0x5e3>
 815a7ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 815a7af:	89 04 24             	mov    %eax,(%esp)
 815a7b2:	e8 0b 38 00 00       	call   815dfc2 <_ZNK27TaiwanInterfaceDBDispatcher7getCodeEv>
 815a7b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a7ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a7be:	89 44 24 04          	mov    %eax,0x4(%esp)
 815a7c2:	8b 45 08             	mov    0x8(%ebp),%eax
 815a7c5:	89 04 24             	mov    %eax,(%esp)
 815a7c8:	e8 8d 00 00 00       	call   815a85a <_ZN18TaiwanDBDispatcher13addDispatcherEN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcher>
 815a7cd:	83 f0 01             	xor    $0x1,%eax
 815a7d0:	84 c0                	test   %al,%al
 815a7d2:	74 07                	je     815a7db <_ZN18TaiwanDBDispatcher4initEv+0x5e3>
 815a7d4:	b8 01 00 00 00       	mov    $0x1,%eax
 815a7d9:	eb 05                	jmp    815a7e0 <_ZN18TaiwanDBDispatcher4initEv+0x5e8>
 815a7db:	b8 00 00 00 00       	mov    $0x0,%eax
 815a7e0:	84 c0                	test   %al,%al
 815a7e2:	74 07                	je     815a7eb <_ZN18TaiwanDBDispatcher4initEv+0x5f3>
 815a7e4:	b8 00 00 00 00       	mov    $0x0,%eax
 815a7e9:	eb 05                	jmp    815a7f0 <_ZN18TaiwanDBDispatcher4initEv+0x5f8>
 815a7eb:	b8 01 00 00 00       	mov    $0x1,%eax
 815a7f0:	83 c4 24             	add    $0x24,%esp
 815a7f3:	5b                   	pop    %ebx
 815a7f4:	5d                   	pop    %ebp
 815a7f5:	c3                   	ret

```

```c
// TaiwanDBDispatcher::init @ 0x815a1f8

/* TaiwanDBDispatcher::init() */

bool __thiscall TaiwanDBDispatcher::init(TaiwanDBDispatcher *this)

{
  bool bVar1;
  char cVar2;
  LoadServiceRestrictPolicy *this_00;
  undefined4 uVar3;
  SaveServiceRestrictPolicy *this_01;
  LoadGeolocation *this_02;
  CheckStayTimeEvent *this_03;
  ResetStayTimeEvent *this_04;
  DBUpdateExitTime *this_05;
  DBSelectCreateDnfEventInfo *this_06;
  DBSelectCreateDnfUserInfo *this_07;
  DBInsertCreateDnfUserInfo *this_08;
  DBSelectMobileAuthRewardTw *this_09;
  DBSelectPcroomDailyReward *this_10;
  DBUpdatePcroomDailyReward *this_11;
  DBInsertGiveBoxEventReward *this_12;
  DBLoadHeroMissionEventData *this_13;
  DBSaveHeroMissionEventData *this_14;
  
  this_00 = operator_new(8);
  LoadServiceRestrictPolicy::LoadServiceRestrictPolicy(this_00);
  if (this_00 == (LoadServiceRestrictPolicy *)0x0) {
LAB_0815a258:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_00);
    cVar2 = addDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_0815a258;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  SaveServiceRestrictPolicy::SaveServiceRestrictPolicy(this_01);
  if (this_01 == (SaveServiceRestrictPolicy *)0x0) {
LAB_0815a2bd:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_01);
    cVar2 = addDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_0815a2bd;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  LoadGeolocation::LoadGeolocation(this_02);
  if (this_02 == (LoadGeolocation *)0x0) {
LAB_0815a322:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_02);
    cVar2 = addDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_0815a322;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  CheckStayTimeEvent::CheckStayTimeEvent(this_03);
  if (this_03 == (CheckStayTimeEvent *)0x0) {
LAB_0815a387:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_03);
    cVar2 = addDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_0815a387;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  ResetStayTimeEvent::ResetStayTimeEvent(this_04);
  if (this_04 == (ResetStayTimeEvent *)0x0) {
LAB_0815a3ec:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_04);
    cVar2 = addDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_0815a3ec;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  DBUpdateExitTime::DBUpdateExitTime(this_05);
  if (this_05 == (DBUpdateExitTime *)0x0) {
LAB_0815a451:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_05);
    cVar2 = addDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_0815a451;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  DBSelectCreateDnfEventInfo::DBSelectCreateDnfEventInfo(this_06);
  if (this_06 == (DBSelectCreateDnfEventInfo *)0x0) {
LAB_0815a4b6:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_06);
    cVar2 = addDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_0815a4b6;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  DBSelectCreateDnfUserInfo::DBSelectCreateDnfUserInfo(this_07);
  if (this_07 == (DBSelectCreateDnfUserInfo *)0x0) {
LAB_0815a51b:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_07);
    cVar2 = addDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_0815a51b;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  DBInsertCreateDnfUserInfo::DBInsertCreateDnfUserInfo(this_08);
  if (this_08 == (DBInsertCreateDnfUserInfo *)0x0) {
LAB_0815a580:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_08);
    cVar2 = addDispatcher(this,uVar3,this_08);
    if (cVar2 == '\x01') goto LAB_0815a580;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_09 = operator_new(8);
  DBSelectMobileAuthRewardTw::DBSelectMobileAuthRewardTw(this_09);
  if (this_09 == (DBSelectMobileAuthRewardTw *)0x0) {
LAB_0815a5e5:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_09);
    cVar2 = addDispatcher(this,uVar3,this_09);
    if (cVar2 == '\x01') goto LAB_0815a5e5;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_10 = operator_new(8);
  DBSelectPcroomDailyReward::DBSelectPcroomDailyReward(this_10);
  if (this_10 == (DBSelectPcroomDailyReward *)0x0) {
LAB_0815a64a:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_10);
    cVar2 = addDispatcher(this,uVar3,this_10);
    if (cVar2 == '\x01') goto LAB_0815a64a;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_11 = operator_new(8);
  DBUpdatePcroomDailyReward::DBUpdatePcroomDailyReward(this_11);
  if (this_11 == (DBUpdatePcroomDailyReward *)0x0) {
LAB_0815a6af:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_11);
    cVar2 = addDispatcher(this,uVar3,this_11);
    if (cVar2 == '\x01') goto LAB_0815a6af;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_12 = operator_new(8);
  DBInsertGiveBoxEventReward::DBInsertGiveBoxEventReward(this_12);
  if (this_12 == (DBInsertGiveBoxEventReward *)0x0) {
LAB_0815a714:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_12);
    cVar2 = addDispatcher(this,uVar3,this_12);
    if (cVar2 == '\x01') goto LAB_0815a714;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_13 = operator_new(8);
  DBLoadHeroMissionEventData::DBLoadHeroMissionEventData(this_13);
  if (this_13 == (DBLoadHeroMissionEventData *)0x0) {
LAB_0815a779:
    bVar1 = false;
  }
  else {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_13);
    cVar2 = addDispatcher(this,uVar3,this_13);
    if (cVar2 == '\x01') goto LAB_0815a779;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_14 = operator_new(8);
  DBSaveHeroMissionEventData::DBSaveHeroMissionEventData(this_14);
  if (this_14 != (DBSaveHeroMissionEventData *)0x0) {
    uVar3 = TaiwanInterfaceDBDispatcher::getCode((TaiwanInterfaceDBDispatcher *)this_14);
    cVar2 = addDispatcher(this,uVar3,this_14);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_0815a7e0;
    }
  }
  bVar1 = false;
LAB_0815a7e0:
  return !bVar1;
}

```

---

## ~TaiwanDBDispatcher

```asm
// === 0815a176 TaiwanDBDispatcher::~TaiwanDBDispatcher  [0x0815a176-0x815a1f7] ===
 815a176:	55                   	push   %ebp
 815a177:	89 e5                	mov    %esp,%ebp
 815a179:	56                   	push   %esi
 815a17a:	53                   	push   %ebx
 815a17b:	83 ec 20             	sub    $0x20,%esp
 815a17e:	8b 55 08             	mov    0x8(%ebp),%edx
 815a181:	8d 45 f0             	lea    -0x10(%ebp),%eax
 815a184:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a188:	89 04 24             	mov    %eax,(%esp)
 815a18b:	e8 3e 46 00 00       	call   815e7ce <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE3endEv>
 815a190:	83 ec 04             	sub    $0x4,%esp
 815a193:	8b 55 08             	mov    0x8(%ebp),%edx
 815a196:	8d 45 f4             	lea    -0xc(%ebp),%eax
 815a199:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a19d:	89 04 24             	mov    %eax,(%esp)
 815a1a0:	e8 03 46 00 00       	call   815e7a8 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEE5beginEv>
 815a1a5:	83 ec 04             	sub    $0x4,%esp
 815a1a8:	8d 45 ef             	lea    -0x11(%ebp),%eax
 815a1ab:	88 5c 24 0c          	mov    %bl,0xc(%esp)
 815a1af:	8b 55 f0             	mov    -0x10(%ebp),%edx
 815a1b2:	89 54 24 08          	mov    %edx,0x8(%esp)
 815a1b6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 815a1b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 815a1bd:	89 04 24             	mov    %eax,(%esp)
 815a1c0:	e8 2e 46 00 00       	call   815e7f3 <_ZSt8for_eachISt17_Rb_tree_iteratorISt4pairIKN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherEEN18TaiwanDBDispatcher8FnDeleteEET0_T_SC_SB_>
 815a1c5:	83 ec 04             	sub    $0x4,%esp
 815a1c8:	8b 45 08             	mov    0x8(%ebp),%eax
 815a1cb:	89 04 24             	mov    %eax,(%esp)
 815a1ce:	e8 33 45 00 00       	call   815e706 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 815a1d3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 815a1d6:	83 c4 00             	add    $0x0,%esp
 815a1d9:	5b                   	pop    %ebx
 815a1da:	5e                   	pop    %esi
 815a1db:	5d                   	pop    %ebp
 815a1dc:	c3                   	ret
 815a1dd:	89 d3                	mov    %edx,%ebx
 815a1df:	89 c6                	mov    %eax,%esi
 815a1e1:	8b 45 08             	mov    0x8(%ebp),%eax
 815a1e4:	89 04 24             	mov    %eax,(%esp)
 815a1e7:	e8 1a 45 00 00       	call   815e706 <_ZNSt3mapIN18TaiwanInternalPack1TEP27TaiwanInterfaceDBDispatcherSt4lessIS1_ESaISt4pairIKS1_S3_EEED1Ev>
 815a1ec:	89 f0                	mov    %esi,%eax
 815a1ee:	89 da                	mov    %ebx,%edx
 815a1f0:	89 04 24             	mov    %eax,(%esp)
 815a1f3:	e8 58 95 98 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// TaiwanDBDispatcher::~TaiwanDBDispatcher @ 0x815a176

/* TaiwanDBDispatcher::~TaiwanDBDispatcher() */

void __thiscall TaiwanDBDispatcher::~TaiwanDBDispatcher(TaiwanDBDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 0815a18b to 0815a1c4 has its CatchHandler @ 0815a1dd */
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::end((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
         *)&local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::begin((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>,TaiwanDBDispatcher::FnDelete>
            (&local_15,local_10,local_14);
  std::
  map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
  ::~map((map<TaiwanInternalPack::T,TaiwanInterfaceDBDispatcher*,std::less<TaiwanInternalPack::T>,std::allocator<std::pair<TaiwanInternalPack::T_const,TaiwanInterfaceDBDispatcher*>>>
          *)this);
  return;
}

```

