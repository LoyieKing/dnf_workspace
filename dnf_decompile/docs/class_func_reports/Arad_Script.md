# Arad_Script

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 35

---

## Arad_Script

```asm
// === 0817b474 Arad_Script::Arad_Script  [0x0817b474-0x817b531] ===
 817b474:	55                   	push   %ebp
 817b475:	89 e5                	mov    %esp,%ebp
 817b477:	56                   	push   %esi
 817b478:	53                   	push   %ebx
 817b479:	83 ec 10             	sub    $0x10,%esp
 817b47c:	8b 45 08             	mov    0x8(%ebp),%eax
 817b47f:	83 c0 18             	add    $0x18,%eax
 817b482:	89 04 24             	mov    %eax,(%esp)
 817b485:	e8 46 b1 58 00       	call   87065d0 <_ZNSsC1Ev>
 817b48a:	8b 45 08             	mov    0x8(%ebp),%eax
 817b48d:	83 c0 1c             	add    $0x1c,%eax
 817b490:	89 04 24             	mov    %eax,(%esp)
 817b493:	e8 38 b1 58 00       	call   87065d0 <_ZNSsC1Ev>
 817b498:	8b 45 08             	mov    0x8(%ebp),%eax
 817b49b:	83 c0 20             	add    $0x20,%eax
 817b49e:	89 04 24             	mov    %eax,(%esp)
 817b4a1:	e8 2a b1 58 00       	call   87065d0 <_ZNSsC1Ev>
 817b4a6:	8b 45 08             	mov    0x8(%ebp),%eax
 817b4a9:	83 c0 24             	add    $0x24,%eax
 817b4ac:	89 04 24             	mov    %eax,(%esp)
 817b4af:	e8 36 17 00 00       	call   817cbea <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1Ev>
 817b4b4:	8b 45 08             	mov    0x8(%ebp),%eax
 817b4b7:	83 c0 3c             	add    $0x3c,%eax
 817b4ba:	89 04 24             	mov    %eax,(%esp)
 817b4bd:	e8 28 17 00 00       	call   817cbea <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1Ev>
 817b4c2:	eb 66                	jmp    817b52a <_ZN11Arad_ScriptC1Ev+0xb6>
 817b4c4:	89 d3                	mov    %edx,%ebx
 817b4c6:	89 c6                	mov    %eax,%esi
 817b4c8:	8b 45 08             	mov    0x8(%ebp),%eax
 817b4cb:	83 c0 24             	add    $0x24,%eax
 817b4ce:	89 04 24             	mov    %eax,(%esp)
 817b4d1:	e8 00 17 00 00       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 817b4d6:	89 f0                	mov    %esi,%eax
 817b4d8:	89 da                	mov    %ebx,%edx
 817b4da:	eb 00                	jmp    817b4dc <_ZN11Arad_ScriptC1Ev+0x68>
 817b4dc:	89 d3                	mov    %edx,%ebx
 817b4de:	89 c6                	mov    %eax,%esi
 817b4e0:	8b 45 08             	mov    0x8(%ebp),%eax
 817b4e3:	83 c0 20             	add    $0x20,%eax
 817b4e6:	89 04 24             	mov    %eax,(%esp)
 817b4e9:	e8 f2 c6 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b4ee:	89 f0                	mov    %esi,%eax
 817b4f0:	89 da                	mov    %ebx,%edx
 817b4f2:	eb 00                	jmp    817b4f4 <_ZN11Arad_ScriptC1Ev+0x80>
 817b4f4:	89 d3                	mov    %edx,%ebx
 817b4f6:	89 c6                	mov    %eax,%esi
 817b4f8:	8b 45 08             	mov    0x8(%ebp),%eax
 817b4fb:	83 c0 1c             	add    $0x1c,%eax
 817b4fe:	89 04 24             	mov    %eax,(%esp)
 817b501:	e8 da c6 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b506:	89 f0                	mov    %esi,%eax
 817b508:	89 da                	mov    %ebx,%edx
 817b50a:	eb 00                	jmp    817b50c <_ZN11Arad_ScriptC1Ev+0x98>
 817b50c:	89 d3                	mov    %edx,%ebx
 817b50e:	89 c6                	mov    %eax,%esi
 817b510:	8b 45 08             	mov    0x8(%ebp),%eax
 817b513:	83 c0 18             	add    $0x18,%eax
 817b516:	89 04 24             	mov    %eax,(%esp)
 817b519:	e8 c2 c6 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b51e:	89 f0                	mov    %esi,%eax
 817b520:	89 da                	mov    %ebx,%edx
 817b522:	89 04 24             	mov    %eax,(%esp)
 817b525:	e8 26 82 96 00       	call   8ae3750 <_Unwind_Resume>
 817b52a:	83 c4 10             	add    $0x10,%esp
 817b52d:	5b                   	pop    %ebx
 817b52e:	5e                   	pop    %esi
 817b52f:	5d                   	pop    %ebp
 817b530:	c3                   	ret
 817b531:	90                   	nop

```

```c
// Arad_Script::Arad_Script @ 0x817b474

/* Arad_Script::Arad_Script() */

void __thiscall Arad_Script::Arad_Script(Arad_Script *this)

{
  std::string::string((string *)(this + 0x18));
                    /* try { // try from 0817b493 to 0817b497 has its CatchHandler @ 0817b50c */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0817b4a1 to 0817b4a5 has its CatchHandler @ 0817b4f4 */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0817b4af to 0817b4b3 has its CatchHandler @ 0817b4dc */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x24));
                    /* try { // try from 0817b4bd to 0817b4c1 has its CatchHandler @ 0817b4c4 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x3c));
  return;
}

```

---

## Arad_Script_0817b532

```asm
// === 0817b532 Arad_Script::Arad_Script  [0x0817b532-0x817b623] ===
 817b532:	55                   	push   %ebp
 817b533:	89 e5                	mov    %esp,%ebp
 817b535:	56                   	push   %esi
 817b536:	53                   	push   %ebx
 817b537:	83 ec 10             	sub    $0x10,%esp
 817b53a:	8b 45 08             	mov    0x8(%ebp),%eax
 817b53d:	83 c0 18             	add    $0x18,%eax
 817b540:	89 04 24             	mov    %eax,(%esp)
 817b543:	e8 88 b0 58 00       	call   87065d0 <_ZNSsC1Ev>
 817b548:	8b 45 08             	mov    0x8(%ebp),%eax
 817b54b:	83 c0 1c             	add    $0x1c,%eax
 817b54e:	89 04 24             	mov    %eax,(%esp)
 817b551:	e8 7a b0 58 00       	call   87065d0 <_ZNSsC1Ev>
 817b556:	8b 45 08             	mov    0x8(%ebp),%eax
 817b559:	83 c0 20             	add    $0x20,%eax
 817b55c:	89 04 24             	mov    %eax,(%esp)
 817b55f:	e8 6c b0 58 00       	call   87065d0 <_ZNSsC1Ev>
 817b564:	8b 45 08             	mov    0x8(%ebp),%eax
 817b567:	83 c0 24             	add    $0x24,%eax
 817b56a:	89 04 24             	mov    %eax,(%esp)
 817b56d:	e8 78 16 00 00       	call   817cbea <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1Ev>
 817b572:	8b 45 08             	mov    0x8(%ebp),%eax
 817b575:	83 c0 3c             	add    $0x3c,%eax
 817b578:	89 04 24             	mov    %eax,(%esp)
 817b57b:	e8 6a 16 00 00       	call   817cbea <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEC1Ev>
 817b580:	8b 45 0c             	mov    0xc(%ebp),%eax
 817b583:	89 04 24             	mov    %eax,(%esp)
 817b586:	e8 7f 01 00 00       	call   817b70a <_ZN11Arad_Script14make_file_pathEPKc>
 817b58b:	8b 55 08             	mov    0x8(%ebp),%edx
 817b58e:	83 c2 20             	add    $0x20,%edx
 817b591:	89 44 24 04          	mov    %eax,0x4(%esp)
 817b595:	89 14 24             	mov    %edx,(%esp)
 817b598:	e8 63 ca 58 00       	call   8708000 <_ZNSs6appendEPKc>
 817b59d:	eb 7e                	jmp    817b61d <_ZN11Arad_ScriptC1EPKc+0xeb>
 817b59f:	89 d3                	mov    %edx,%ebx
 817b5a1:	89 c6                	mov    %eax,%esi
 817b5a3:	8b 45 08             	mov    0x8(%ebp),%eax
 817b5a6:	83 c0 3c             	add    $0x3c,%eax
 817b5a9:	89 04 24             	mov    %eax,(%esp)
 817b5ac:	e8 25 16 00 00       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 817b5b1:	89 f0                	mov    %esi,%eax
 817b5b3:	89 da                	mov    %ebx,%edx
 817b5b5:	eb 00                	jmp    817b5b7 <_ZN11Arad_ScriptC1EPKc+0x85>
 817b5b7:	89 d3                	mov    %edx,%ebx
 817b5b9:	89 c6                	mov    %eax,%esi
 817b5bb:	8b 45 08             	mov    0x8(%ebp),%eax
 817b5be:	83 c0 24             	add    $0x24,%eax
 817b5c1:	89 04 24             	mov    %eax,(%esp)
 817b5c4:	e8 0d 16 00 00       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 817b5c9:	89 f0                	mov    %esi,%eax
 817b5cb:	89 da                	mov    %ebx,%edx
 817b5cd:	eb 00                	jmp    817b5cf <_ZN11Arad_ScriptC1EPKc+0x9d>
 817b5cf:	89 d3                	mov    %edx,%ebx
 817b5d1:	89 c6                	mov    %eax,%esi
 817b5d3:	8b 45 08             	mov    0x8(%ebp),%eax
 817b5d6:	83 c0 20             	add    $0x20,%eax
 817b5d9:	89 04 24             	mov    %eax,(%esp)
 817b5dc:	e8 ff c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b5e1:	89 f0                	mov    %esi,%eax
 817b5e3:	89 da                	mov    %ebx,%edx
 817b5e5:	eb 00                	jmp    817b5e7 <_ZN11Arad_ScriptC1EPKc+0xb5>
 817b5e7:	89 d3                	mov    %edx,%ebx
 817b5e9:	89 c6                	mov    %eax,%esi
 817b5eb:	8b 45 08             	mov    0x8(%ebp),%eax
 817b5ee:	83 c0 1c             	add    $0x1c,%eax
 817b5f1:	89 04 24             	mov    %eax,(%esp)
 817b5f4:	e8 e7 c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b5f9:	89 f0                	mov    %esi,%eax
 817b5fb:	89 da                	mov    %ebx,%edx
 817b5fd:	eb 00                	jmp    817b5ff <_ZN11Arad_ScriptC1EPKc+0xcd>
 817b5ff:	89 d3                	mov    %edx,%ebx
 817b601:	89 c6                	mov    %eax,%esi
 817b603:	8b 45 08             	mov    0x8(%ebp),%eax
 817b606:	83 c0 18             	add    $0x18,%eax
 817b609:	89 04 24             	mov    %eax,(%esp)
 817b60c:	e8 cf c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b611:	89 f0                	mov    %esi,%eax
 817b613:	89 da                	mov    %ebx,%edx
 817b615:	89 04 24             	mov    %eax,(%esp)
 817b618:	e8 33 81 96 00       	call   8ae3750 <_Unwind_Resume>
 817b61d:	83 c4 10             	add    $0x10,%esp
 817b620:	5b                   	pop    %ebx
 817b621:	5e                   	pop    %esi
 817b622:	5d                   	pop    %ebp
 817b623:	c3                   	ret

```

```c
// Arad_Script::Arad_Script @ 0x817b532

/* Arad_Script::Arad_Script(char const*) */

void __thiscall Arad_Script::Arad_Script(Arad_Script *this,char *param_1)

{
  char *pcVar1;
  
  std::string::string((string *)(this + 0x18));
                    /* try { // try from 0817b551 to 0817b555 has its CatchHandler @ 0817b5ff */
  std::string::string((string *)(this + 0x1c));
                    /* try { // try from 0817b55f to 0817b563 has its CatchHandler @ 0817b5e7 */
  std::string::string((string *)(this + 0x20));
                    /* try { // try from 0817b56d to 0817b571 has its CatchHandler @ 0817b5cf */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x24));
                    /* try { // try from 0817b57b to 0817b57f has its CatchHandler @ 0817b5b7 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
         *)(this + 0x3c));
  pcVar1 = (char *)make_file_path(param_1);
                    /* try { // try from 0817b598 to 0817b59c has its CatchHandler @ 0817b59f */
  std::string::append((string *)(this + 0x20),pcVar1);
  return;
}

```

---

## Create

```asm
// === 0817b72a Arad_Script::Create  [0x0817b72a-0x817b7ff] ===
 817b72a:	55                   	push   %ebp
 817b72b:	89 e5                	mov    %esp,%ebp
 817b72d:	83 ec 18             	sub    $0x18,%esp
 817b730:	8b 45 08             	mov    0x8(%ebp),%eax
 817b733:	8b 40 14             	mov    0x14(%eax),%eax
 817b736:	85 c0                	test   %eax,%eax
 817b738:	75 18                	jne    817b752 <_ZN11Arad_Script6CreateEv+0x28>
 817b73a:	8b 45 08             	mov    0x8(%ebp),%eax
 817b73d:	8b 40 14             	mov    0x14(%eax),%eax
 817b740:	85 c0                	test   %eax,%eax
 817b742:	74 0e                	je     817b752 <_ZN11Arad_Script6CreateEv+0x28>
 817b744:	8b 45 08             	mov    0x8(%ebp),%eax
 817b747:	8b 40 14             	mov    0x14(%eax),%eax
 817b74a:	89 04 24             	mov    %eax,(%esp)
 817b74d:	e8 5e 94 5a 00       	call   8724bb0 <_ZdaPv>
 817b752:	8b 45 08             	mov    0x8(%ebp),%eax
 817b755:	c7 00 20 00 00 00    	movl   $0x20,(%eax)
 817b75b:	8b 45 08             	mov    0x8(%ebp),%eax
 817b75e:	c7 40 04 00 01 00 00 	movl   $0x100,0x4(%eax)
 817b765:	8b 45 08             	mov    0x8(%ebp),%eax
 817b768:	8b 00                	mov    (%eax),%eax
 817b76a:	89 c2                	mov    %eax,%edx
 817b76c:	8b 45 08             	mov    0x8(%ebp),%eax
 817b76f:	8b 40 04             	mov    0x4(%eax),%eax
 817b772:	0f af c2             	imul   %edx,%eax
 817b775:	c1 e0 07             	shl    $0x7,%eax
 817b778:	89 c2                	mov    %eax,%edx
 817b77a:	8b 45 08             	mov    0x8(%ebp),%eax
 817b77d:	89 50 10             	mov    %edx,0x10(%eax)
 817b780:	8b 45 08             	mov    0x8(%ebp),%eax
 817b783:	8b 40 10             	mov    0x10(%eax),%eax
 817b786:	89 04 24             	mov    %eax,(%esp)
 817b789:	e8 32 76 5a 00       	call   8722dc0 <_Znaj>
 817b78e:	89 c2                	mov    %eax,%edx
 817b790:	8b 45 08             	mov    0x8(%ebp),%eax
 817b793:	89 50 14             	mov    %edx,0x14(%eax)
 817b796:	8b 45 08             	mov    0x8(%ebp),%eax
 817b799:	8b 40 14             	mov    0x14(%eax),%eax
 817b79c:	85 c0                	test   %eax,%eax
 817b79e:	75 07                	jne    817b7a7 <_ZN11Arad_Script6CreateEv+0x7d>
 817b7a0:	b8 00 00 00 00       	mov    $0x0,%eax
 817b7a5:	eb 57                	jmp    817b7fe <_ZN11Arad_Script6CreateEv+0xd4>
 817b7a7:	8b 45 08             	mov    0x8(%ebp),%eax
 817b7aa:	8b 40 10             	mov    0x10(%eax),%eax
 817b7ad:	89 c2                	mov    %eax,%edx
 817b7af:	8b 45 08             	mov    0x8(%ebp),%eax
 817b7b2:	8b 40 14             	mov    0x14(%eax),%eax
 817b7b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 817b7b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817b7c0:	00 
 817b7c1:	89 04 24             	mov    %eax,(%esp)
 817b7c4:	e8 f7 24 f0 ff       	call   807dcc0 <memset@plt>
 817b7c9:	8b 45 08             	mov    0x8(%ebp),%eax
 817b7cc:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 817b7d3:	8b 45 08             	mov    0x8(%ebp),%eax
 817b7d6:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 817b7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 817b7e0:	83 c0 24             	add    $0x24,%eax
 817b7e3:	89 04 24             	mov    %eax,(%esp)
 817b7e6:	e8 79 14 00 00       	call   817cc64 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE5clearEv>
 817b7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 817b7ee:	83 c0 3c             	add    $0x3c,%eax
 817b7f1:	89 04 24             	mov    %eax,(%esp)
 817b7f4:	e8 6b 14 00 00       	call   817cc64 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE5clearEv>
 817b7f9:	b8 01 00 00 00       	mov    $0x1,%eax
 817b7fe:	c9                   	leave
 817b7ff:	c3                   	ret

```

```c
// Arad_Script::Create @ 0x817b72a

/* Arad_Script::Create() */

bool __thiscall Arad_Script::Create(Arad_Script *this)

{
  int iVar1;
  void *pvVar2;
  
  if ((*(int *)(this + 0x14) == 0) && (*(int *)(this + 0x14) != 0)) {
    operator_delete__(*(void **)(this + 0x14));
  }
  *(undefined4 *)this = 0x20;
  *(undefined4 *)(this + 4) = 0x100;
  *(int *)(this + 0x10) = *(int *)(this + 4) * *(int *)this * 0x80;
  pvVar2 = operator_new__(*(uint *)(this + 0x10));
  *(void **)(this + 0x14) = pvVar2;
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != 0) {
    memset(*(void **)(this + 0x14),0,*(size_t *)(this + 0x10));
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x24));
    std::
    map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>::
    clear((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
           *)(this + 0x3c));
  }
  return iVar1 != 0;
}

```

---

## ExpandCol

```asm
// === 0817b800 Arad_Script::ExpandCol  [0x0817b800-0x817b891] ===
 817b800:	55                   	push   %ebp
 817b801:	89 e5                	mov    %esp,%ebp
 817b803:	83 ec 28             	sub    $0x28,%esp
 817b806:	8b 45 08             	mov    0x8(%ebp),%eax
 817b809:	8b 00                	mov    (%eax),%eax
 817b80b:	8d 50 20             	lea    0x20(%eax),%edx
 817b80e:	8b 45 08             	mov    0x8(%ebp),%eax
 817b811:	89 10                	mov    %edx,(%eax)
 817b813:	8b 45 08             	mov    0x8(%ebp),%eax
 817b816:	8b 40 04             	mov    0x4(%eax),%eax
 817b819:	89 c2                	mov    %eax,%edx
 817b81b:	8b 45 08             	mov    0x8(%ebp),%eax
 817b81e:	8b 00                	mov    (%eax),%eax
 817b820:	0f af c2             	imul   %edx,%eax
 817b823:	c1 e0 07             	shl    $0x7,%eax
 817b826:	89 c2                	mov    %eax,%edx
 817b828:	8b 45 08             	mov    0x8(%ebp),%eax
 817b82b:	89 50 10             	mov    %edx,0x10(%eax)
 817b82e:	8b 45 08             	mov    0x8(%ebp),%eax
 817b831:	8b 40 10             	mov    0x10(%eax),%eax
 817b834:	89 04 24             	mov    %eax,(%esp)
 817b837:	e8 84 75 5a 00       	call   8722dc0 <_Znaj>
 817b83c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817b83f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 817b843:	75 07                	jne    817b84c <_ZN11Arad_Script9ExpandColEv+0x4c>
 817b845:	b8 00 00 00 00       	mov    $0x0,%eax
 817b84a:	eb 43                	jmp    817b88f <_ZN11Arad_Script9ExpandColEv+0x8f>
 817b84c:	8b 45 08             	mov    0x8(%ebp),%eax
 817b84f:	8b 40 10             	mov    0x10(%eax),%eax
 817b852:	89 44 24 08          	mov    %eax,0x8(%esp)
 817b856:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817b85d:	00 
 817b85e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817b861:	89 04 24             	mov    %eax,(%esp)
 817b864:	e8 57 24 f0 ff       	call   807dcc0 <memset@plt>
 817b869:	8b 45 08             	mov    0x8(%ebp),%eax
 817b86c:	8b 40 14             	mov    0x14(%eax),%eax
 817b86f:	85 c0                	test   %eax,%eax
 817b871:	74 0e                	je     817b881 <_ZN11Arad_Script9ExpandColEv+0x81>
 817b873:	8b 45 08             	mov    0x8(%ebp),%eax
 817b876:	8b 40 14             	mov    0x14(%eax),%eax
 817b879:	89 04 24             	mov    %eax,(%esp)
 817b87c:	e8 2f 93 5a 00       	call   8724bb0 <_ZdaPv>
 817b881:	8b 45 08             	mov    0x8(%ebp),%eax
 817b884:	8b 55 f4             	mov    -0xc(%ebp),%edx
 817b887:	89 50 14             	mov    %edx,0x14(%eax)
 817b88a:	b8 01 00 00 00       	mov    $0x1,%eax
 817b88f:	c9                   	leave
 817b890:	c3                   	ret
 817b891:	90                   	nop

```

```c
// Arad_Script::ExpandCol @ 0x817b800

/* Arad_Script::ExpandCol() */

undefined4 __thiscall Arad_Script::ExpandCol(Arad_Script *this)

{
  void *__s;
  undefined4 uVar1;
  
  *(int *)this = *(int *)this + 0x20;
  *(int *)(this + 0x10) = *(int *)this * *(int *)(this + 4) * 0x80;
  __s = operator_new__(*(uint *)(this + 0x10));
  if (__s == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    memset(__s,0,*(size_t *)(this + 0x10));
    if (*(int *)(this + 0x14) != 0) {
      operator_delete__(*(void **)(this + 0x14));
    }
    *(void **)(this + 0x14) = __s;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## ExpandRow

```asm
// === 0817b892 Arad_Script::ExpandRow  [0x0817b892-0x817b94f] ===
 817b892:	55                   	push   %ebp
 817b893:	89 e5                	mov    %esp,%ebp
 817b895:	83 ec 28             	sub    $0x28,%esp
 817b898:	8b 45 08             	mov    0x8(%ebp),%eax
 817b89b:	8b 40 04             	mov    0x4(%eax),%eax
 817b89e:	8d 14 00             	lea    (%eax,%eax,1),%edx
 817b8a1:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8a4:	89 50 04             	mov    %edx,0x4(%eax)
 817b8a7:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8aa:	8b 50 04             	mov    0x4(%eax),%edx
 817b8ad:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8b0:	8b 00                	mov    (%eax),%eax
 817b8b2:	0f af c2             	imul   %edx,%eax
 817b8b5:	89 c2                	mov    %eax,%edx
 817b8b7:	c1 e2 07             	shl    $0x7,%edx
 817b8ba:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8bd:	89 50 10             	mov    %edx,0x10(%eax)
 817b8c0:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8c3:	8b 40 10             	mov    0x10(%eax),%eax
 817b8c6:	89 04 24             	mov    %eax,(%esp)
 817b8c9:	e8 f2 74 5a 00       	call   8722dc0 <_Znaj>
 817b8ce:	89 45 f0             	mov    %eax,-0x10(%ebp)
 817b8d1:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 817b8d5:	75 07                	jne    817b8de <_ZN11Arad_Script9ExpandRowEv+0x4c>
 817b8d7:	b8 00 00 00 00       	mov    $0x0,%eax
 817b8dc:	eb 70                	jmp    817b94e <_ZN11Arad_Script9ExpandRowEv+0xbc>
 817b8de:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8e1:	8b 40 10             	mov    0x10(%eax),%eax
 817b8e4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817b8e7:	8b 45 08             	mov    0x8(%ebp),%eax
 817b8ea:	8b 40 10             	mov    0x10(%eax),%eax
 817b8ed:	2b 45 f4             	sub    -0xc(%ebp),%eax
 817b8f0:	89 c2                	mov    %eax,%edx
 817b8f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817b8f5:	03 45 f0             	add    -0x10(%ebp),%eax
 817b8f8:	89 54 24 08          	mov    %edx,0x8(%esp)
 817b8fc:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817b903:	00 
 817b904:	89 04 24             	mov    %eax,(%esp)
 817b907:	e8 b4 23 f0 ff       	call   807dcc0 <memset@plt>
 817b90c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 817b90f:	8b 45 08             	mov    0x8(%ebp),%eax
 817b912:	8b 40 14             	mov    0x14(%eax),%eax
 817b915:	89 54 24 08          	mov    %edx,0x8(%esp)
 817b919:	89 44 24 04          	mov    %eax,0x4(%esp)
 817b91d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 817b920:	89 04 24             	mov    %eax,(%esp)
 817b923:	e8 78 1f f0 ff       	call   807d8a0 <memcpy@plt>
 817b928:	8b 45 08             	mov    0x8(%ebp),%eax
 817b92b:	8b 40 14             	mov    0x14(%eax),%eax
 817b92e:	85 c0                	test   %eax,%eax
 817b930:	74 0e                	je     817b940 <_ZN11Arad_Script9ExpandRowEv+0xae>
 817b932:	8b 45 08             	mov    0x8(%ebp),%eax
 817b935:	8b 40 14             	mov    0x14(%eax),%eax
 817b938:	89 04 24             	mov    %eax,(%esp)
 817b93b:	e8 70 92 5a 00       	call   8724bb0 <_ZdaPv>
 817b940:	8b 45 08             	mov    0x8(%ebp),%eax
 817b943:	8b 55 f0             	mov    -0x10(%ebp),%edx
 817b946:	89 50 14             	mov    %edx,0x14(%eax)
 817b949:	b8 01 00 00 00       	mov    $0x1,%eax
 817b94e:	c9                   	leave
 817b94f:	c3                   	ret

```

```c
// Arad_Script::ExpandRow @ 0x817b892

/* Arad_Script::ExpandRow() */

undefined4 __thiscall Arad_Script::ExpandRow(Arad_Script *this)

{
  size_t __n;
  void *__dest;
  undefined4 uVar1;
  
  *(int *)(this + 4) = *(int *)(this + 4) * 2;
  *(int *)(this + 0x10) = *(int *)this * *(int *)(this + 4) * 0x80;
  __dest = operator_new__(*(uint *)(this + 0x10));
  if (__dest == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    __n = *(size_t *)(this + 0x10);
    memset((void *)(__n + (int)__dest),0,*(int *)(this + 0x10) - __n);
    memcpy(__dest,*(void **)(this + 0x14),__n);
    if (*(int *)(this + 0x14) != 0) {
      operator_delete__(*(void **)(this + 0x14));
    }
    *(void **)(this + 0x14) = __dest;
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## GetDouble

```asm
// === 0817c8b4 Arad_Script::GetDouble  [0x0817c8b4-0x817c8e7] ===
 817c8b4:	55                   	push   %ebp
 817c8b5:	89 e5                	mov    %esp,%ebp
 817c8b7:	83 ec 28             	sub    $0x28,%esp
 817c8ba:	8b 45 08             	mov    0x8(%ebp),%eax
 817c8bd:	8b 50 14             	mov    0x14(%eax),%edx
 817c8c0:	8b 45 08             	mov    0x8(%ebp),%eax
 817c8c3:	8b 00                	mov    (%eax),%eax
 817c8c5:	0f af 45 0c          	imul   0xc(%ebp),%eax
 817c8c9:	89 c1                	mov    %eax,%ecx
 817c8cb:	8b 45 10             	mov    0x10(%ebp),%eax
 817c8ce:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817c8d1:	c1 e0 07             	shl    $0x7,%eax
 817c8d4:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817c8d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817c8da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817c8dd:	89 04 24             	mov    %eax,(%esp)
 817c8e0:	e8 1b 1c f0 ff       	call   807e500 <atof@plt>
 817c8e5:	c9                   	leave
 817c8e6:	c3                   	ret
 817c8e7:	90                   	nop

```

```c
// Arad_Script::GetDouble @ 0x817c8b4

/* Arad_Script::GetDouble(int, int) */

longdouble __thiscall Arad_Script::GetDouble(Arad_Script *this,int param_1,int param_2)

{
  double dVar1;
  
  dVar1 = atof((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80));
  return (longdouble)dVar1;
}

```

---

## GetDouble_0817c8e8

```asm
// === 0817c8e8 Arad_Script::GetDouble  [0x0817c8e8-0x817c92d] ===
 817c8e8:	55                   	push   %ebp
 817c8e9:	89 e5                	mov    %esp,%ebp
 817c8eb:	53                   	push   %ebx
 817c8ec:	83 ec 14             	sub    $0x14,%esp
 817c8ef:	8b 45 10             	mov    0x10(%ebp),%eax
 817c8f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c8f6:	8b 45 08             	mov    0x8(%ebp),%eax
 817c8f9:	89 04 24             	mov    %eax,(%esp)
 817c8fc:	e8 4d fb ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c901:	89 c3                	mov    %eax,%ebx
 817c903:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c906:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c90a:	8b 45 08             	mov    0x8(%ebp),%eax
 817c90d:	89 04 24             	mov    %eax,(%esp)
 817c910:	e8 19 fc ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c915:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817c919:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c91d:	8b 45 08             	mov    0x8(%ebp),%eax
 817c920:	89 04 24             	mov    %eax,(%esp)
 817c923:	e8 8c ff ff ff       	call   817c8b4 <_ZN11Arad_Script9GetDoubleEii>
 817c928:	83 c4 14             	add    $0x14,%esp
 817c92b:	5b                   	pop    %ebx
 817c92c:	5d                   	pop    %ebp
 817c92d:	c3                   	ret

```

```c
// Arad_Script::GetDouble @ 0x817c8e8

/* Arad_Script::GetDouble(char*, char*) */

void __thiscall Arad_Script::GetDouble(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  GetDouble(this,iVar2,iVar1);
  return;
}

```

---

## GetDouble_0817c92e

```asm
// === 0817c92e Arad_Script::GetDouble  [0x0817c92e-0x817c95d] ===
 817c92e:	55                   	push   %ebp
 817c92f:	89 e5                	mov    %esp,%ebp
 817c931:	83 ec 18             	sub    $0x18,%esp
 817c934:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c937:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c93b:	8b 45 08             	mov    0x8(%ebp),%eax
 817c93e:	89 04 24             	mov    %eax,(%esp)
 817c941:	e8 e8 fb ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c946:	8b 55 10             	mov    0x10(%ebp),%edx
 817c949:	89 54 24 08          	mov    %edx,0x8(%esp)
 817c94d:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c951:	8b 45 08             	mov    0x8(%ebp),%eax
 817c954:	89 04 24             	mov    %eax,(%esp)
 817c957:	e8 58 ff ff ff       	call   817c8b4 <_ZN11Arad_Script9GetDoubleEii>
 817c95c:	c9                   	leave
 817c95d:	c3                   	ret

```

```c
// Arad_Script::GetDouble @ 0x817c92e

/* Arad_Script::GetDouble(char*, int) */

void __thiscall Arad_Script::GetDouble(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  GetDouble(this,iVar1,param_2);
  return;
}

```

---

## GetDouble_0817c95e

```asm
// === 0817c95e Arad_Script::GetDouble  [0x0817c95e-0x817c98d] ===
 817c95e:	55                   	push   %ebp
 817c95f:	89 e5                	mov    %esp,%ebp
 817c961:	83 ec 18             	sub    $0x18,%esp
 817c964:	8b 45 10             	mov    0x10(%ebp),%eax
 817c967:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c96b:	8b 45 08             	mov    0x8(%ebp),%eax
 817c96e:	89 04 24             	mov    %eax,(%esp)
 817c971:	e8 d8 fa ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c976:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c97a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c97d:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c981:	8b 45 08             	mov    0x8(%ebp),%eax
 817c984:	89 04 24             	mov    %eax,(%esp)
 817c987:	e8 28 ff ff ff       	call   817c8b4 <_ZN11Arad_Script9GetDoubleEii>
 817c98c:	c9                   	leave
 817c98d:	c3                   	ret

```

```c
// Arad_Script::GetDouble @ 0x817c95e

/* Arad_Script::GetDouble(int, char*) */

void __thiscall Arad_Script::GetDouble(Arad_Script *this,int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  GetDouble(this,param_1,iVar1);
  return;
}

```

---

## GetFloat

```asm
// === 0817c7b0 Arad_Script::GetFloat  [0x0817c7b0-0x817c7e9] ===
 817c7b0:	55                   	push   %ebp
 817c7b1:	89 e5                	mov    %esp,%ebp
 817c7b3:	83 ec 38             	sub    $0x38,%esp
 817c7b6:	8b 45 08             	mov    0x8(%ebp),%eax
 817c7b9:	8b 50 14             	mov    0x14(%eax),%edx
 817c7bc:	8b 45 08             	mov    0x8(%ebp),%eax
 817c7bf:	8b 00                	mov    (%eax),%eax
 817c7c1:	0f af 45 0c          	imul   0xc(%ebp),%eax
 817c7c5:	89 c1                	mov    %eax,%ecx
 817c7c7:	8b 45 10             	mov    0x10(%ebp),%eax
 817c7ca:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817c7cd:	c1 e0 07             	shl    $0x7,%eax
 817c7d0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817c7d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817c7d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817c7d9:	89 04 24             	mov    %eax,(%esp)
 817c7dc:	e8 1f 1d f0 ff       	call   807e500 <atof@plt>
 817c7e1:	d9 5d e4             	fstps  -0x1c(%ebp)
 817c7e4:	d9 45 e4             	flds   -0x1c(%ebp)
 817c7e7:	c9                   	leave
 817c7e8:	c3                   	ret
 817c7e9:	90                   	nop

```

```c
// Arad_Script::GetFloat @ 0x817c7b0

/* Arad_Script::GetFloat(int, int) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,int param_1,int param_2)

{
  double dVar1;
  
  dVar1 = atof((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80));
  return (longdouble)(float)dVar1;
}

```

---

## GetFloat_0817c7ea

```asm
// === 0817c7ea Arad_Script::GetFloat  [0x0817c7ea-0x817c83b] ===
 817c7ea:	55                   	push   %ebp
 817c7eb:	89 e5                	mov    %esp,%ebp
 817c7ed:	53                   	push   %ebx
 817c7ee:	83 ec 24             	sub    $0x24,%esp
 817c7f1:	8b 45 10             	mov    0x10(%ebp),%eax
 817c7f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c7f8:	8b 45 08             	mov    0x8(%ebp),%eax
 817c7fb:	89 04 24             	mov    %eax,(%esp)
 817c7fe:	e8 4b fc ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c803:	89 c3                	mov    %eax,%ebx
 817c805:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c808:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c80c:	8b 45 08             	mov    0x8(%ebp),%eax
 817c80f:	89 04 24             	mov    %eax,(%esp)
 817c812:	e8 17 fd ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c817:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817c81b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c81f:	8b 45 08             	mov    0x8(%ebp),%eax
 817c822:	89 04 24             	mov    %eax,(%esp)
 817c825:	e8 86 ff ff ff       	call   817c7b0 <_ZN11Arad_Script8GetFloatEii>
 817c82a:	d9 5d f4             	fstps  -0xc(%ebp)
 817c82d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817c830:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817c833:	d9 45 f4             	flds   -0xc(%ebp)
 817c836:	83 c4 24             	add    $0x24,%esp
 817c839:	5b                   	pop    %ebx
 817c83a:	5d                   	pop    %ebp
 817c83b:	c3                   	ret

```

```c
// Arad_Script::GetFloat @ 0x817c7ea

/* Arad_Script::GetFloat(char*, char*) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longdouble lVar3;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  lVar3 = (longdouble)GetFloat(this,iVar2,iVar1);
  return (longdouble)(float)lVar3;
}

```

---

## GetFloat_0817c83c

```asm
// === 0817c83c Arad_Script::GetFloat  [0x0817c83c-0x817c877] ===
 817c83c:	55                   	push   %ebp
 817c83d:	89 e5                	mov    %esp,%ebp
 817c83f:	83 ec 28             	sub    $0x28,%esp
 817c842:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c845:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c849:	8b 45 08             	mov    0x8(%ebp),%eax
 817c84c:	89 04 24             	mov    %eax,(%esp)
 817c84f:	e8 da fc ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c854:	8b 55 10             	mov    0x10(%ebp),%edx
 817c857:	89 54 24 08          	mov    %edx,0x8(%esp)
 817c85b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c85f:	8b 45 08             	mov    0x8(%ebp),%eax
 817c862:	89 04 24             	mov    %eax,(%esp)
 817c865:	e8 46 ff ff ff       	call   817c7b0 <_ZN11Arad_Script8GetFloatEii>
 817c86a:	d9 5d f4             	fstps  -0xc(%ebp)
 817c86d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817c870:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817c873:	d9 45 f4             	flds   -0xc(%ebp)
 817c876:	c9                   	leave
 817c877:	c3                   	ret

```

```c
// Arad_Script::GetFloat @ 0x817c83c

/* Arad_Script::GetFloat(char*, int) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = GetIdx4Row(this,param_1);
  lVar2 = (longdouble)GetFloat(this,iVar1,param_2);
  return (longdouble)(float)lVar2;
}

```

---

## GetFloat_0817c878

```asm
// === 0817c878 Arad_Script::GetFloat  [0x0817c878-0x817c8b3] ===
 817c878:	55                   	push   %ebp
 817c879:	89 e5                	mov    %esp,%ebp
 817c87b:	83 ec 28             	sub    $0x28,%esp
 817c87e:	8b 45 10             	mov    0x10(%ebp),%eax
 817c881:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c885:	8b 45 08             	mov    0x8(%ebp),%eax
 817c888:	89 04 24             	mov    %eax,(%esp)
 817c88b:	e8 be fb ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c890:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c894:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c897:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c89b:	8b 45 08             	mov    0x8(%ebp),%eax
 817c89e:	89 04 24             	mov    %eax,(%esp)
 817c8a1:	e8 0a ff ff ff       	call   817c7b0 <_ZN11Arad_Script8GetFloatEii>
 817c8a6:	d9 5d f4             	fstps  -0xc(%ebp)
 817c8a9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817c8ac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817c8af:	d9 45 f4             	flds   -0xc(%ebp)
 817c8b2:	c9                   	leave
 817c8b3:	c3                   	ret

```

```c
// Arad_Script::GetFloat @ 0x817c878

/* Arad_Script::GetFloat(int, char*) */

longdouble __thiscall Arad_Script::GetFloat(Arad_Script *this,int param_1,char *param_2)

{
  int iVar1;
  longdouble lVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  lVar2 = (longdouble)GetFloat(this,param_1,iVar1);
  return (longdouble)(float)lVar2;
}

```

---

## GetIdx4Col

```asm
// === 0817c44e Arad_Script::GetIdx4Col  [0x0817c44e-0x817c52d] ===
 817c44e:	55                   	push   %ebp
 817c44f:	89 e5                	mov    %esp,%ebp
 817c451:	56                   	push   %esi
 817c452:	53                   	push   %ebx
 817c453:	83 ec 20             	sub    $0x20,%esp
 817c456:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c459:	89 04 24             	mov    %eax,(%esp)
 817c45c:	e8 6f 3c 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817c461:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c464:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c468:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c46b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c46f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817c472:	89 04 24             	mov    %eax,(%esp)
 817c475:	e8 b6 b1 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817c47a:	8b 45 08             	mov    0x8(%ebp),%eax
 817c47d:	8d 48 24             	lea    0x24(%eax),%ecx
 817c480:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817c483:	8d 55 ec             	lea    -0x14(%ebp),%edx
 817c486:	89 54 24 08          	mov    %edx,0x8(%esp)
 817c48a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 817c48e:	89 04 24             	mov    %eax,(%esp)
 817c491:	e8 1a 09 00 00       	call   817cdb0 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE4findERS3_>
 817c496:	83 ec 04             	sub    $0x4,%esp
 817c499:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817c49c:	89 04 24             	mov    %eax,(%esp)
 817c49f:	e8 3c b7 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c4a4:	eb 30                	jmp    817c4d6 <_ZN11Arad_Script10GetIdx4ColEPc+0x88>
 817c4a6:	89 d3                	mov    %edx,%ebx
 817c4a8:	89 c6                	mov    %eax,%esi
 817c4aa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817c4ad:	89 04 24             	mov    %eax,(%esp)
 817c4b0:	e8 2b b7 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c4b5:	89 f0                	mov    %esi,%eax
 817c4b7:	89 da                	mov    %ebx,%edx
 817c4b9:	eb 00                	jmp    817c4bb <_ZN11Arad_Script10GetIdx4ColEPc+0x6d>
 817c4bb:	89 d3                	mov    %edx,%ebx
 817c4bd:	89 c6                	mov    %eax,%esi
 817c4bf:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c4c2:	89 04 24             	mov    %eax,(%esp)
 817c4c5:	e8 26 3c 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c4ca:	89 f0                	mov    %esi,%eax
 817c4cc:	89 da                	mov    %ebx,%edx
 817c4ce:	89 04 24             	mov    %eax,(%esp)
 817c4d1:	e8 7a 72 96 00       	call   8ae3750 <_Unwind_Resume>
 817c4d6:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c4d9:	89 04 24             	mov    %eax,(%esp)
 817c4dc:	e8 0f 3c 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c4e1:	8b 45 08             	mov    0x8(%ebp),%eax
 817c4e4:	8d 50 24             	lea    0x24(%eax),%edx
 817c4e7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 817c4ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 817c4ee:	89 04 24             	mov    %eax,(%esp)
 817c4f1:	e8 e6 08 00 00       	call   817cddc <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE3endEv>
 817c4f6:	83 ec 04             	sub    $0x4,%esp
 817c4f9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 817c4fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c500:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817c503:	89 04 24             	mov    %eax,(%esp)
 817c506:	e8 f7 08 00 00       	call   817ce02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEneERKS3_>
 817c50b:	84 c0                	test   %al,%al
 817c50d:	74 10                	je     817c51f <_ZN11Arad_Script10GetIdx4ColEPc+0xd1>
 817c50f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817c512:	89 04 24             	mov    %eax,(%esp)
 817c515:	e8 fc 08 00 00       	call   817ce16 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEptEv>
 817c51a:	8b 40 04             	mov    0x4(%eax),%eax
 817c51d:	eb 05                	jmp    817c524 <_ZN11Arad_Script10GetIdx4ColEPc+0xd6>
 817c51f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 817c524:	8d 65 f8             	lea    -0x8(%ebp),%esp
 817c527:	83 c4 00             	add    $0x0,%esp
 817c52a:	5b                   	pop    %ebx
 817c52b:	5e                   	pop    %esi
 817c52c:	5d                   	pop    %ebp
 817c52d:	c3                   	ret

```

```c
// Arad_Script::GetIdx4Col @ 0x817c44e

/* Arad_Script::GetIdx4Col(char*) */

undefined4 __thiscall Arad_Script::GetIdx4Col(Arad_Script *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 0817c475 to 0817c479 has its CatchHandler @ 0817c4bb */
  std::string::string(local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 0817c491 to 0817c495 has its CatchHandler @ 0817c4a6 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_1c);
                    /* try { // try from 0817c49f to 0817c4a3 has its CatchHandler @ 0817c4bb */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GetIdx4Row

```asm
// === 0817c52e Arad_Script::GetIdx4Row  [0x0817c52e-0x817c60d] ===
 817c52e:	55                   	push   %ebp
 817c52f:	89 e5                	mov    %esp,%ebp
 817c531:	56                   	push   %esi
 817c532:	53                   	push   %ebx
 817c533:	83 ec 20             	sub    $0x20,%esp
 817c536:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c539:	89 04 24             	mov    %eax,(%esp)
 817c53c:	e8 8f 3b 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817c541:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c544:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c548:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c54b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c54f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817c552:	89 04 24             	mov    %eax,(%esp)
 817c555:	e8 d6 b0 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817c55a:	8b 45 08             	mov    0x8(%ebp),%eax
 817c55d:	8d 48 3c             	lea    0x3c(%eax),%ecx
 817c560:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817c563:	8d 55 ec             	lea    -0x14(%ebp),%edx
 817c566:	89 54 24 08          	mov    %edx,0x8(%esp)
 817c56a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 817c56e:	89 04 24             	mov    %eax,(%esp)
 817c571:	e8 3a 08 00 00       	call   817cdb0 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE4findERS3_>
 817c576:	83 ec 04             	sub    $0x4,%esp
 817c579:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817c57c:	89 04 24             	mov    %eax,(%esp)
 817c57f:	e8 5c b6 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c584:	eb 30                	jmp    817c5b6 <_ZN11Arad_Script10GetIdx4RowEPc+0x88>
 817c586:	89 d3                	mov    %edx,%ebx
 817c588:	89 c6                	mov    %eax,%esi
 817c58a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817c58d:	89 04 24             	mov    %eax,(%esp)
 817c590:	e8 4b b6 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c595:	89 f0                	mov    %esi,%eax
 817c597:	89 da                	mov    %ebx,%edx
 817c599:	eb 00                	jmp    817c59b <_ZN11Arad_Script10GetIdx4RowEPc+0x6d>
 817c59b:	89 d3                	mov    %edx,%ebx
 817c59d:	89 c6                	mov    %eax,%esi
 817c59f:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c5a2:	89 04 24             	mov    %eax,(%esp)
 817c5a5:	e8 46 3b 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c5aa:	89 f0                	mov    %esi,%eax
 817c5ac:	89 da                	mov    %ebx,%edx
 817c5ae:	89 04 24             	mov    %eax,(%esp)
 817c5b1:	e8 9a 71 96 00       	call   8ae3750 <_Unwind_Resume>
 817c5b6:	8d 45 f3             	lea    -0xd(%ebp),%eax
 817c5b9:	89 04 24             	mov    %eax,(%esp)
 817c5bc:	e8 2f 3b 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c5c1:	8b 45 08             	mov    0x8(%ebp),%eax
 817c5c4:	8d 50 3c             	lea    0x3c(%eax),%edx
 817c5c7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 817c5ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 817c5ce:	89 04 24             	mov    %eax,(%esp)
 817c5d1:	e8 06 08 00 00       	call   817cddc <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEE3endEv>
 817c5d6:	83 ec 04             	sub    $0x4,%esp
 817c5d9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 817c5dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c5e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817c5e3:	89 04 24             	mov    %eax,(%esp)
 817c5e6:	e8 17 08 00 00       	call   817ce02 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEneERKS3_>
 817c5eb:	84 c0                	test   %al,%al
 817c5ed:	74 10                	je     817c5ff <_ZN11Arad_Script10GetIdx4RowEPc+0xd1>
 817c5ef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817c5f2:	89 04 24             	mov    %eax,(%esp)
 817c5f5:	e8 1c 08 00 00       	call   817ce16 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsiEEptEv>
 817c5fa:	8b 40 04             	mov    0x4(%eax),%eax
 817c5fd:	eb 05                	jmp    817c604 <_ZN11Arad_Script10GetIdx4RowEPc+0xd6>
 817c5ff:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 817c604:	8d 65 f8             	lea    -0x8(%ebp),%esp
 817c607:	83 c4 00             	add    $0x0,%esp
 817c60a:	5b                   	pop    %ebx
 817c60b:	5e                   	pop    %esi
 817c60c:	5d                   	pop    %ebp
 817c60d:	c3                   	ret

```

```c
// Arad_Script::GetIdx4Row @ 0x817c52e

/* Arad_Script::GetIdx4Row(char*) */

undefined4 __thiscall Arad_Script::GetIdx4Row(Arad_Script *this,char *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  string local_1c;
  string local_18 [7];
  allocator<char> local_11;
  map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  local_10 [4];
  
  std::allocator<char>::allocator();
                    /* try { // try from 0817c555 to 0817c559 has its CatchHandler @ 0817c59b */
  std::string::string(local_18,param_1,(allocator *)&local_11);
                    /* try { // try from 0817c571 to 0817c575 has its CatchHandler @ 0817c586 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::find(&local_1c);
                    /* try { // try from 0817c57f to 0817c583 has its CatchHandler @ 0817c59b */
  std::string::~string(local_18);
  std::allocator<char>::~allocator(&local_11);
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,int>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,int>> *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GetInt

```asm
// === 0817c6d6 Arad_Script::GetInt  [0x0817c6d6-0x817c709] ===
 817c6d6:	55                   	push   %ebp
 817c6d7:	89 e5                	mov    %esp,%ebp
 817c6d9:	83 ec 28             	sub    $0x28,%esp
 817c6dc:	8b 45 08             	mov    0x8(%ebp),%eax
 817c6df:	8b 50 14             	mov    0x14(%eax),%edx
 817c6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 817c6e5:	8b 00                	mov    (%eax),%eax
 817c6e7:	0f af 45 0c          	imul   0xc(%ebp),%eax
 817c6eb:	89 c1                	mov    %eax,%ecx
 817c6ed:	8b 45 10             	mov    0x10(%ebp),%eax
 817c6f0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817c6f3:	c1 e0 07             	shl    $0x7,%eax
 817c6f6:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817c6f9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817c6fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817c6ff:	89 04 24             	mov    %eax,(%esp)
 817c702:	e8 e9 1f f0 ff       	call   807e6f0 <atoi@plt>
 817c707:	c9                   	leave
 817c708:	c3                   	ret
 817c709:	90                   	nop

```

```c
// Arad_Script::GetInt @ 0x817c6d6

/* Arad_Script::GetInt(int, int) */

void __thiscall Arad_Script::GetInt(Arad_Script *this,int param_1,int param_2)

{
  atoi((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80));
  return;
}

```

---

## GetInt_0817c70a

```asm
// === 0817c70a Arad_Script::GetInt  [0x0817c70a-0x817c74f] ===
 817c70a:	55                   	push   %ebp
 817c70b:	89 e5                	mov    %esp,%ebp
 817c70d:	53                   	push   %ebx
 817c70e:	83 ec 14             	sub    $0x14,%esp
 817c711:	8b 45 10             	mov    0x10(%ebp),%eax
 817c714:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c718:	8b 45 08             	mov    0x8(%ebp),%eax
 817c71b:	89 04 24             	mov    %eax,(%esp)
 817c71e:	e8 2b fd ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c723:	89 c3                	mov    %eax,%ebx
 817c725:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c728:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c72c:	8b 45 08             	mov    0x8(%ebp),%eax
 817c72f:	89 04 24             	mov    %eax,(%esp)
 817c732:	e8 f7 fd ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c737:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817c73b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c73f:	8b 45 08             	mov    0x8(%ebp),%eax
 817c742:	89 04 24             	mov    %eax,(%esp)
 817c745:	e8 8c ff ff ff       	call   817c6d6 <_ZN11Arad_Script6GetIntEii>
 817c74a:	83 c4 14             	add    $0x14,%esp
 817c74d:	5b                   	pop    %ebx
 817c74e:	5d                   	pop    %ebp
 817c74f:	c3                   	ret

```

```c
// Arad_Script::GetInt @ 0x817c70a

/* Arad_Script::GetInt(char*, char*) */

void __thiscall Arad_Script::GetInt(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  GetInt(this,iVar2,iVar1);
  return;
}

```

---

## GetInt_0817c750

```asm
// === 0817c750 Arad_Script::GetInt  [0x0817c750-0x817c77f] ===
 817c750:	55                   	push   %ebp
 817c751:	89 e5                	mov    %esp,%ebp
 817c753:	83 ec 18             	sub    $0x18,%esp
 817c756:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c759:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c75d:	8b 45 08             	mov    0x8(%ebp),%eax
 817c760:	89 04 24             	mov    %eax,(%esp)
 817c763:	e8 c6 fd ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c768:	8b 55 10             	mov    0x10(%ebp),%edx
 817c76b:	89 54 24 08          	mov    %edx,0x8(%esp)
 817c76f:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c773:	8b 45 08             	mov    0x8(%ebp),%eax
 817c776:	89 04 24             	mov    %eax,(%esp)
 817c779:	e8 58 ff ff ff       	call   817c6d6 <_ZN11Arad_Script6GetIntEii>
 817c77e:	c9                   	leave
 817c77f:	c3                   	ret

```

```c
// Arad_Script::GetInt @ 0x817c750

/* Arad_Script::GetInt(char*, int) */

void __thiscall Arad_Script::GetInt(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  GetInt(this,iVar1,param_2);
  return;
}

```

---

## GetInt_0817c780

```asm
// === 0817c780 Arad_Script::GetInt  [0x0817c780-0x817c7af] ===
 817c780:	55                   	push   %ebp
 817c781:	89 e5                	mov    %esp,%ebp
 817c783:	83 ec 18             	sub    $0x18,%esp
 817c786:	8b 45 10             	mov    0x10(%ebp),%eax
 817c789:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c78d:	8b 45 08             	mov    0x8(%ebp),%eax
 817c790:	89 04 24             	mov    %eax,(%esp)
 817c793:	e8 b6 fc ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c798:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c79c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c79f:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c7a3:	8b 45 08             	mov    0x8(%ebp),%eax
 817c7a6:	89 04 24             	mov    %eax,(%esp)
 817c7a9:	e8 28 ff ff ff       	call   817c6d6 <_ZN11Arad_Script6GetIntEii>
 817c7ae:	c9                   	leave
 817c7af:	c3                   	ret

```

```c
// Arad_Script::GetInt @ 0x817c780

/* Arad_Script::GetInt(int, char*) */

void __thiscall Arad_Script::GetInt(Arad_Script *this,int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  GetInt(this,param_1,iVar1);
  return;
}

```

---

## GetString

```asm
// === 0817c60e Arad_Script::GetString  [0x0817c60e-0x817c62f] ===
 817c60e:	55                   	push   %ebp
 817c60f:	89 e5                	mov    %esp,%ebp
 817c611:	8b 45 08             	mov    0x8(%ebp),%eax
 817c614:	8b 50 14             	mov    0x14(%eax),%edx
 817c617:	8b 45 08             	mov    0x8(%ebp),%eax
 817c61a:	8b 00                	mov    (%eax),%eax
 817c61c:	0f af 45 0c          	imul   0xc(%ebp),%eax
 817c620:	89 c1                	mov    %eax,%ecx
 817c622:	8b 45 10             	mov    0x10(%ebp),%eax
 817c625:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817c628:	c1 e0 07             	shl    $0x7,%eax
 817c62b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817c62e:	5d                   	pop    %ebp
 817c62f:	c3                   	ret

```

```c
// Arad_Script::GetString @ 0x817c60e

/* Arad_Script::GetString(int, int) */

int __thiscall Arad_Script::GetString(Arad_Script *this,int param_1,int param_2)

{
  return *(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80;
}

```

---

## GetString_0817c630

```asm
// === 0817c630 Arad_Script::GetString  [0x0817c630-0x817c675] ===
 817c630:	55                   	push   %ebp
 817c631:	89 e5                	mov    %esp,%ebp
 817c633:	53                   	push   %ebx
 817c634:	83 ec 14             	sub    $0x14,%esp
 817c637:	8b 45 10             	mov    0x10(%ebp),%eax
 817c63a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c63e:	8b 45 08             	mov    0x8(%ebp),%eax
 817c641:	89 04 24             	mov    %eax,(%esp)
 817c644:	e8 05 fe ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c649:	89 c3                	mov    %eax,%ebx
 817c64b:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c64e:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c652:	8b 45 08             	mov    0x8(%ebp),%eax
 817c655:	89 04 24             	mov    %eax,(%esp)
 817c658:	e8 d1 fe ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c65d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817c661:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c665:	8b 45 08             	mov    0x8(%ebp),%eax
 817c668:	89 04 24             	mov    %eax,(%esp)
 817c66b:	e8 9e ff ff ff       	call   817c60e <_ZN11Arad_Script9GetStringEii>
 817c670:	83 c4 14             	add    $0x14,%esp
 817c673:	5b                   	pop    %ebx
 817c674:	5d                   	pop    %ebp
 817c675:	c3                   	ret

```

```c
// Arad_Script::GetString @ 0x817c630

/* Arad_Script::GetString(char*, char*) */

void __thiscall Arad_Script::GetString(Arad_Script *this,char *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  GetString(this,iVar2,iVar1);
  return;
}

```

---

## GetString_0817c676

```asm
// === 0817c676 Arad_Script::GetString  [0x0817c676-0x817c6a5] ===
 817c676:	55                   	push   %ebp
 817c677:	89 e5                	mov    %esp,%ebp
 817c679:	83 ec 18             	sub    $0x18,%esp
 817c67c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c67f:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c683:	8b 45 08             	mov    0x8(%ebp),%eax
 817c686:	89 04 24             	mov    %eax,(%esp)
 817c689:	e8 a0 fe ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c68e:	8b 55 10             	mov    0x10(%ebp),%edx
 817c691:	89 54 24 08          	mov    %edx,0x8(%esp)
 817c695:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c699:	8b 45 08             	mov    0x8(%ebp),%eax
 817c69c:	89 04 24             	mov    %eax,(%esp)
 817c69f:	e8 6a ff ff ff       	call   817c60e <_ZN11Arad_Script9GetStringEii>
 817c6a4:	c9                   	leave
 817c6a5:	c3                   	ret

```

```c
// Arad_Script::GetString @ 0x817c676

/* Arad_Script::GetString(char*, int) */

void __thiscall Arad_Script::GetString(Arad_Script *this,char *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  GetString(this,iVar1,param_2);
  return;
}

```

---

## GetString_0817c6a6

```asm
// === 0817c6a6 Arad_Script::GetString  [0x0817c6a6-0x817c6d5] ===
 817c6a6:	55                   	push   %ebp
 817c6a7:	89 e5                	mov    %esp,%ebp
 817c6a9:	83 ec 18             	sub    $0x18,%esp
 817c6ac:	8b 45 10             	mov    0x10(%ebp),%eax
 817c6af:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c6b3:	8b 45 08             	mov    0x8(%ebp),%eax
 817c6b6:	89 04 24             	mov    %eax,(%esp)
 817c6b9:	e8 90 fd ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c6be:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c6c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c6c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c6c9:	8b 45 08             	mov    0x8(%ebp),%eax
 817c6cc:	89 04 24             	mov    %eax,(%esp)
 817c6cf:	e8 3a ff ff ff       	call   817c60e <_ZN11Arad_Script9GetStringEii>
 817c6d4:	c9                   	leave
 817c6d5:	c3                   	ret

```

```c
// Arad_Script::GetString @ 0x817c6a6

/* Arad_Script::GetString(int, char*) */

void __thiscall Arad_Script::GetString(Arad_Script *this,int param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  GetString(this,param_1,iVar1);
  return;
}

```

---

## Load

```asm
// === 0817b950 Arad_Script::Load  [0x0817b950-0x817bea3] ===
 817b950:	55                   	push   %ebp
 817b951:	89 e5                	mov    %esp,%ebp
 817b953:	57                   	push   %edi
 817b954:	56                   	push   %esi
 817b955:	53                   	push   %ebx
 817b956:	81 ec 5c 06 00 00    	sub    $0x65c,%esp
 817b95c:	8b 45 08             	mov    0x8(%ebp),%eax
 817b95f:	89 04 24             	mov    %eax,(%esp)
 817b962:	e8 c3 fd ff ff       	call   817b72a <_ZN11Arad_Script6CreateEv>
 817b967:	83 f0 01             	xor    $0x1,%eax
 817b96a:	84 c0                	test   %al,%al
 817b96c:	74 0a                	je     817b978 <_ZN11Arad_Script4LoadEPKcS1_+0x28>
 817b96e:	b8 00 00 00 00       	mov    $0x0,%eax
 817b973:	e9 21 05 00 00       	jmp    817be99 <_ZN11Arad_Script4LoadEPKcS1_+0x549>
 817b978:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 817b97f:	8d 9d ac f9 ff ff    	lea    -0x654(%ebp),%ebx
 817b985:	b8 00 00 00 00       	mov    $0x0,%eax
 817b98a:	ba 00 01 00 00       	mov    $0x100,%edx
 817b98f:	89 df                	mov    %ebx,%edi
 817b991:	89 d1                	mov    %edx,%ecx
 817b993:	f3 ab                	rep stos %eax,%es:(%edi)
 817b995:	8b 45 10             	mov    0x10(%ebp),%eax
 817b998:	89 44 24 08          	mov    %eax,0x8(%esp)
 817b99c:	c7 44 24 04 e0 71 b8 	movl   $0x8b871e0,0x4(%esp)
 817b9a3:	08 
 817b9a4:	8d 85 ac f9 ff ff    	lea    -0x654(%ebp),%eax
 817b9aa:	89 04 24             	mov    %eax,(%esp)
 817b9ad:	e8 8e 2a f0 ff       	call   807e440 <sprintf@plt>
 817b9b2:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 817b9b9:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 817b9c0:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 817b9c7:	8d 85 ac f9 ff ff    	lea    -0x654(%ebp),%eax
 817b9cd:	89 04 24             	mov    %eax,(%esp)
 817b9d0:	e8 db 29 f0 ff       	call   807e3b0 <strlen@plt>
 817b9d5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 817b9d8:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 817b9df:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817b9e6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 817b9ed:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 817b9f4:	eb 07                	jmp    817b9fd <_ZN11Arad_Script4LoadEPKcS1_+0xad>
 817b9f6:	90                   	nop
 817b9f7:	eb 04                	jmp    817b9fd <_ZN11Arad_Script4LoadEPKcS1_+0xad>
 817b9f9:	90                   	nop
 817b9fa:	eb 01                	jmp    817b9fd <_ZN11Arad_Script4LoadEPKcS1_+0xad>
 817b9fc:	90                   	nop
 817b9fd:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ba00:	0f b6 00             	movzbl (%eax),%eax
 817ba03:	0f be c0             	movsbl %al,%eax
 817ba06:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817ba09:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 817ba0d:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817ba11:	75 0a                	jne    817ba1d <_ZN11Arad_Script4LoadEPKcS1_+0xcd>
 817ba13:	b8 00 00 00 00       	mov    $0x0,%eax
 817ba18:	e9 7c 04 00 00       	jmp    817be99 <_ZN11Arad_Script4LoadEPKcS1_+0x549>
 817ba1d:	83 7d d8 20          	cmpl   $0x20,-0x28(%ebp)
 817ba21:	7e d3                	jle    817b9f6 <_ZN11Arad_Script4LoadEPKcS1_+0xa6>
 817ba23:	83 7d d8 7e          	cmpl   $0x7e,-0x28(%ebp)
 817ba27:	7f d0                	jg     817b9f9 <_ZN11Arad_Script4LoadEPKcS1_+0xa9>
 817ba29:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817ba2c:	0f b6 84 05 ac f9 ff 	movzbl -0x654(%ebp,%eax,1),%eax
 817ba33:	ff 
 817ba34:	0f be c0             	movsbl %al,%eax
 817ba37:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 817ba3a:	75 0e                	jne    817ba4a <_ZN11Arad_Script4LoadEPKcS1_+0xfa>
 817ba3c:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 817ba40:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817ba43:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 817ba46:	75 b4                	jne    817b9fc <_ZN11Arad_Script4LoadEPKcS1_+0xac>
 817ba48:	eb 09                	jmp    817ba53 <_ZN11Arad_Script4LoadEPKcS1_+0x103>
 817ba4a:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 817ba51:	eb aa                	jmp    817b9fd <_ZN11Arad_Script4LoadEPKcS1_+0xad>
 817ba53:	8d 9d ac fd ff ff    	lea    -0x254(%ebp),%ebx
 817ba59:	b8 00 00 00 00       	mov    $0x0,%eax
 817ba5e:	ba 80 00 00 00       	mov    $0x80,%edx
 817ba63:	89 df                	mov    %ebx,%edi
 817ba65:	89 d1                	mov    %edx,%ecx
 817ba67:	f3 ab                	rep stos %eax,%es:(%edi)
 817ba69:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 817ba70:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ba73:	0f b6 00             	movzbl (%eax),%eax
 817ba76:	0f be c0             	movsbl %al,%eax
 817ba79:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817ba7c:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 817ba80:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817ba84:	75 0a                	jne    817ba90 <_ZN11Arad_Script4LoadEPKcS1_+0x140>
 817ba86:	b8 00 00 00 00       	mov    $0x0,%eax
 817ba8b:	e9 09 04 00 00       	jmp    817be99 <_ZN11Arad_Script4LoadEPKcS1_+0x549>
 817ba90:	83 7d d8 20          	cmpl   $0x20,-0x28(%ebp)
 817ba94:	74 16                	je     817baac <_ZN11Arad_Script4LoadEPKcS1_+0x15c>
 817ba96:	83 7d d8 09          	cmpl   $0x9,-0x28(%ebp)
 817ba9a:	74 10                	je     817baac <_ZN11Arad_Script4LoadEPKcS1_+0x15c>
 817ba9c:	83 7d d8 0a          	cmpl   $0xa,-0x28(%ebp)
 817baa0:	74 0a                	je     817baac <_ZN11Arad_Script4LoadEPKcS1_+0x15c>
 817baa2:	83 7d d8 0d          	cmpl   $0xd,-0x28(%ebp)
 817baa6:	0f 85 dd 01 00 00    	jne    817bc89 <_ZN11Arad_Script4LoadEPKcS1_+0x339>
 817baac:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 817bab0:	0f 8e c7 01 00 00    	jle    817bc7d <_ZN11Arad_Script4LoadEPKcS1_+0x32d>
 817bab6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817bab9:	c6 84 05 ac fd ff ff 	movb   $0x0,-0x254(%ebp,%eax,1)
 817bac0:	00 
 817bac1:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 817bac8:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 817bace:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 817bad1:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 817bad7:	89 04 24             	mov    %eax,(%esp)
 817bada:	e8 d1 28 f0 ff       	call   807e3b0 <strlen@plt>
 817badf:	89 45 cc             	mov    %eax,-0x34(%ebp)
 817bae2:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 817bae9:	e9 bc 00 00 00       	jmp    817bbaa <_ZN11Arad_Script4LoadEPKcS1_+0x25a>
 817baee:	8b 45 c8             	mov    -0x38(%ebp),%eax
 817baf1:	0f b6 84 05 ac fd ff 	movzbl -0x254(%ebp,%eax,1),%eax
 817baf8:	ff 
 817baf9:	3c 2f                	cmp    $0x2f,%al
 817bafb:	0f 85 a5 00 00 00    	jne    817bba6 <_ZN11Arad_Script4LoadEPKcS1_+0x256>
 817bb01:	8b 45 c8             	mov    -0x38(%ebp),%eax
 817bb04:	c6 84 05 ac fd ff ff 	movb   $0x0,-0x254(%ebp,%eax,1)
 817bb0b:	00 
 817bb0c:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817bb0f:	89 04 24             	mov    %eax,(%esp)
 817bb12:	e8 b9 45 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817bb17:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817bb1a:	89 44 24 08          	mov    %eax,0x8(%esp)
 817bb1e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817bb21:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bb25:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817bb28:	89 04 24             	mov    %eax,(%esp)
 817bb2b:	e8 00 bb 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817bb30:	8b 45 08             	mov    0x8(%ebp),%eax
 817bb33:	8d 50 24             	lea    0x24(%eax),%edx
 817bb36:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817bb39:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bb3d:	89 14 24             	mov    %edx,(%esp)
 817bb40:	e8 47 11 00 00       	call   817cc8c <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_>
 817bb45:	8b 55 08             	mov    0x8(%ebp),%edx
 817bb48:	8b 52 08             	mov    0x8(%edx),%edx
 817bb4b:	89 10                	mov    %edx,(%eax)
 817bb4d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817bb50:	89 04 24             	mov    %eax,(%esp)
 817bb53:	e8 88 c0 58 00       	call   8707be0 <_ZNSsD1Ev>
 817bb58:	eb 30                	jmp    817bb8a <_ZN11Arad_Script4LoadEPKcS1_+0x23a>
 817bb5a:	89 d3                	mov    %edx,%ebx
 817bb5c:	89 c6                	mov    %eax,%esi
 817bb5e:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817bb61:	89 04 24             	mov    %eax,(%esp)
 817bb64:	e8 77 c0 58 00       	call   8707be0 <_ZNSsD1Ev>
 817bb69:	89 f0                	mov    %esi,%eax
 817bb6b:	89 da                	mov    %ebx,%edx
 817bb6d:	eb 00                	jmp    817bb6f <_ZN11Arad_Script4LoadEPKcS1_+0x21f>
 817bb6f:	89 d3                	mov    %edx,%ebx
 817bb71:	89 c6                	mov    %eax,%esi
 817bb73:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817bb76:	89 04 24             	mov    %eax,(%esp)
 817bb79:	e8 72 45 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817bb7e:	89 f0                	mov    %esi,%eax
 817bb80:	89 da                	mov    %ebx,%edx
 817bb82:	89 04 24             	mov    %eax,(%esp)
 817bb85:	e8 c6 7b 96 00       	call   8ae3750 <_Unwind_Resume>
 817bb8a:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817bb8d:	89 04 24             	mov    %eax,(%esp)
 817bb90:	e8 5b 45 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817bb95:	8b 45 c8             	mov    -0x38(%ebp),%eax
 817bb98:	8d 50 01             	lea    0x1(%eax),%edx
 817bb9b:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 817bba1:	01 d0                	add    %edx,%eax
 817bba3:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 817bba6:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 817bbaa:	8b 45 c8             	mov    -0x38(%ebp),%eax
 817bbad:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 817bbb0:	0f 92 c0             	setb   %al
 817bbb3:	84 c0                	test   %al,%al
 817bbb5:	0f 85 33 ff ff ff    	jne    817baee <_ZN11Arad_Script4LoadEPKcS1_+0x19e>
 817bbbb:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817bbbe:	89 04 24             	mov    %eax,(%esp)
 817bbc1:	e8 0a 45 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817bbc6:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817bbc9:	89 44 24 08          	mov    %eax,0x8(%esp)
 817bbcd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817bbd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bbd4:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817bbd7:	89 04 24             	mov    %eax,(%esp)
 817bbda:	e8 51 ba 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817bbdf:	8b 45 08             	mov    0x8(%ebp),%eax
 817bbe2:	8d 50 24             	lea    0x24(%eax),%edx
 817bbe5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817bbe8:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bbec:	89 14 24             	mov    %edx,(%esp)
 817bbef:	e8 98 10 00 00       	call   817cc8c <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_>
 817bbf4:	89 c2                	mov    %eax,%edx
 817bbf6:	8b 45 08             	mov    0x8(%ebp),%eax
 817bbf9:	8b 40 08             	mov    0x8(%eax),%eax
 817bbfc:	89 02                	mov    %eax,(%edx)
 817bbfe:	8d 50 01             	lea    0x1(%eax),%edx
 817bc01:	8b 45 08             	mov    0x8(%ebp),%eax
 817bc04:	89 50 08             	mov    %edx,0x8(%eax)
 817bc07:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817bc0a:	89 04 24             	mov    %eax,(%esp)
 817bc0d:	e8 ce bf 58 00       	call   8707be0 <_ZNSsD1Ev>
 817bc12:	eb 30                	jmp    817bc44 <_ZN11Arad_Script4LoadEPKcS1_+0x2f4>
 817bc14:	89 d3                	mov    %edx,%ebx
 817bc16:	89 c6                	mov    %eax,%esi
 817bc18:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817bc1b:	89 04 24             	mov    %eax,(%esp)
 817bc1e:	e8 bd bf 58 00       	call   8707be0 <_ZNSsD1Ev>
 817bc23:	89 f0                	mov    %esi,%eax
 817bc25:	89 da                	mov    %ebx,%edx
 817bc27:	eb 00                	jmp    817bc29 <_ZN11Arad_Script4LoadEPKcS1_+0x2d9>
 817bc29:	89 d3                	mov    %edx,%ebx
 817bc2b:	89 c6                	mov    %eax,%esi
 817bc2d:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817bc30:	89 04 24             	mov    %eax,(%esp)
 817bc33:	e8 b8 44 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817bc38:	89 f0                	mov    %esi,%eax
 817bc3a:	89 da                	mov    %ebx,%edx
 817bc3c:	89 04 24             	mov    %eax,(%esp)
 817bc3f:	e8 0c 7b 96 00       	call   8ae3750 <_Unwind_Resume>
 817bc44:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817bc47:	89 04 24             	mov    %eax,(%esp)
 817bc4a:	e8 a1 44 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817bc4f:	8b 45 08             	mov    0x8(%ebp),%eax
 817bc52:	8b 40 08             	mov    0x8(%eax),%eax
 817bc55:	8d 50 01             	lea    0x1(%eax),%edx
 817bc58:	8b 45 08             	mov    0x8(%ebp),%eax
 817bc5b:	8b 00                	mov    (%eax),%eax
 817bc5d:	39 c2                	cmp    %eax,%edx
 817bc5f:	7c 1c                	jl     817bc7d <_ZN11Arad_Script4LoadEPKcS1_+0x32d>
 817bc61:	8b 45 08             	mov    0x8(%ebp),%eax
 817bc64:	89 04 24             	mov    %eax,(%esp)
 817bc67:	e8 94 fb ff ff       	call   817b800 <_ZN11Arad_Script9ExpandColEv>
 817bc6c:	83 f0 01             	xor    $0x1,%eax
 817bc6f:	84 c0                	test   %al,%al
 817bc71:	74 0a                	je     817bc7d <_ZN11Arad_Script4LoadEPKcS1_+0x32d>
 817bc73:	b8 00 00 00 00       	mov    $0x0,%eax
 817bc78:	e9 1c 02 00 00       	jmp    817be99 <_ZN11Arad_Script4LoadEPKcS1_+0x549>
 817bc7d:	83 7d d8 0a          	cmpl   $0xa,-0x28(%ebp)
 817bc81:	74 1c                	je     817bc9f <_ZN11Arad_Script4LoadEPKcS1_+0x34f>
 817bc83:	90                   	nop
 817bc84:	e9 e7 fd ff ff       	jmp    817ba70 <_ZN11Arad_Script4LoadEPKcS1_+0x120>
 817bc89:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817bc8c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 817bc8f:	88 94 05 ac fd ff ff 	mov    %dl,-0x254(%ebp,%eax,1)
 817bc96:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 817bc9a:	e9 d1 fd ff ff       	jmp    817ba70 <_ZN11Arad_Script4LoadEPKcS1_+0x120>
 817bc9f:	90                   	nop
 817bca0:	eb 01                	jmp    817bca3 <_ZN11Arad_Script4LoadEPKcS1_+0x353>
 817bca2:	90                   	nop
 817bca3:	c7 45 dc ff ff ff ff 	movl   $0xffffffff,-0x24(%ebp)
 817bcaa:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 817bcb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 817bcb4:	0f b6 00             	movzbl (%eax),%eax
 817bcb7:	0f be c0             	movsbl %al,%eax
 817bcba:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817bcbd:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 817bcc1:	83 7d d8 20          	cmpl   $0x20,-0x28(%ebp)
 817bcc5:	74 1c                	je     817bce3 <_ZN11Arad_Script4LoadEPKcS1_+0x393>
 817bcc7:	83 7d d8 09          	cmpl   $0x9,-0x28(%ebp)
 817bccb:	74 16                	je     817bce3 <_ZN11Arad_Script4LoadEPKcS1_+0x393>
 817bccd:	83 7d d8 0a          	cmpl   $0xa,-0x28(%ebp)
 817bcd1:	74 10                	je     817bce3 <_ZN11Arad_Script4LoadEPKcS1_+0x393>
 817bcd3:	83 7d d8 0d          	cmpl   $0xd,-0x28(%ebp)
 817bcd7:	74 0a                	je     817bce3 <_ZN11Arad_Script4LoadEPKcS1_+0x393>
 817bcd9:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817bcdd:	0f 85 8c 01 00 00    	jne    817be6f <_ZN11Arad_Script4LoadEPKcS1_+0x51f>
 817bce3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 817bce7:	7e 1d                	jle    817bd06 <_ZN11Arad_Script4LoadEPKcS1_+0x3b6>
 817bce9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817bcec:	c6 84 05 ac fd ff ff 	movb   $0x0,-0x254(%ebp,%eax,1)
 817bcf3:	00 
 817bcf4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 817bcfb:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 817bcff:	74 11                	je     817bd12 <_ZN11Arad_Script4LoadEPKcS1_+0x3c2>
 817bd01:	e9 9a 00 00 00       	jmp    817bda0 <_ZN11Arad_Script4LoadEPKcS1_+0x450>
 817bd06:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 817bd0d:	e9 77 01 00 00       	jmp    817be89 <_ZN11Arad_Script4LoadEPKcS1_+0x539>
 817bd12:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 817bd15:	89 04 24             	mov    %eax,(%esp)
 817bd18:	e8 b3 43 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817bd1d:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 817bd20:	89 44 24 08          	mov    %eax,0x8(%esp)
 817bd24:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 817bd2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bd2e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 817bd31:	89 04 24             	mov    %eax,(%esp)
 817bd34:	e8 f7 b8 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817bd39:	8b 45 08             	mov    0x8(%ebp),%eax
 817bd3c:	8d 50 3c             	lea    0x3c(%eax),%edx
 817bd3f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 817bd42:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bd46:	89 14 24             	mov    %edx,(%esp)
 817bd49:	e8 3e 0f 00 00       	call   817cc8c <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_>
 817bd4e:	8b 55 08             	mov    0x8(%ebp),%edx
 817bd51:	8b 52 0c             	mov    0xc(%edx),%edx
 817bd54:	89 10                	mov    %edx,(%eax)
 817bd56:	8d 45 bc             	lea    -0x44(%ebp),%eax
 817bd59:	89 04 24             	mov    %eax,(%esp)
 817bd5c:	e8 7f be 58 00       	call   8707be0 <_ZNSsD1Ev>
 817bd61:	eb 30                	jmp    817bd93 <_ZN11Arad_Script4LoadEPKcS1_+0x443>
 817bd63:	89 d3                	mov    %edx,%ebx
 817bd65:	89 c6                	mov    %eax,%esi
 817bd67:	8d 45 bc             	lea    -0x44(%ebp),%eax
 817bd6a:	89 04 24             	mov    %eax,(%esp)
 817bd6d:	e8 6e be 58 00       	call   8707be0 <_ZNSsD1Ev>
 817bd72:	89 f0                	mov    %esi,%eax
 817bd74:	89 da                	mov    %ebx,%edx
 817bd76:	eb 00                	jmp    817bd78 <_ZN11Arad_Script4LoadEPKcS1_+0x428>
 817bd78:	89 d3                	mov    %edx,%ebx
 817bd7a:	89 c6                	mov    %eax,%esi
 817bd7c:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 817bd7f:	89 04 24             	mov    %eax,(%esp)
 817bd82:	e8 69 43 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817bd87:	89 f0                	mov    %esi,%eax
 817bd89:	89 da                	mov    %ebx,%edx
 817bd8b:	89 04 24             	mov    %eax,(%esp)
 817bd8e:	e8 bd 79 96 00       	call   8ae3750 <_Unwind_Resume>
 817bd93:	8d 45 c3             	lea    -0x3d(%ebp),%eax
 817bd96:	89 04 24             	mov    %eax,(%esp)
 817bd99:	e8 52 43 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817bd9e:	eb 33                	jmp    817bdd3 <_ZN11Arad_Script4LoadEPKcS1_+0x483>
 817bda0:	8b 45 08             	mov    0x8(%ebp),%eax
 817bda3:	8b 50 14             	mov    0x14(%eax),%edx
 817bda6:	8b 45 08             	mov    0x8(%ebp),%eax
 817bda9:	8b 48 0c             	mov    0xc(%eax),%ecx
 817bdac:	8b 45 08             	mov    0x8(%ebp),%eax
 817bdaf:	8b 00                	mov    (%eax),%eax
 817bdb1:	0f af c1             	imul   %ecx,%eax
 817bdb4:	89 c1                	mov    %eax,%ecx
 817bdb6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817bdb9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817bdbc:	c1 e0 07             	shl    $0x7,%eax
 817bdbf:	01 c2                	add    %eax,%edx
 817bdc1:	8d 85 ac fd ff ff    	lea    -0x254(%ebp),%eax
 817bdc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bdcb:	89 14 24             	mov    %edx,(%esp)
 817bdce:	e8 1d 21 f0 ff       	call   807def0 <strcpy@plt>
 817bdd3:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 817bdd7:	8b 45 08             	mov    0x8(%ebp),%eax
 817bdda:	8b 40 08             	mov    0x8(%eax),%eax
 817bddd:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 817bde0:	75 2e                	jne    817be10 <_ZN11Arad_Script4LoadEPKcS1_+0x4c0>
 817bde2:	eb 10                	jmp    817bdf4 <_ZN11Arad_Script4LoadEPKcS1_+0x4a4>
 817bde4:	8b 45 0c             	mov    0xc(%ebp),%eax
 817bde7:	0f b6 00             	movzbl (%eax),%eax
 817bdea:	0f be c0             	movsbl %al,%eax
 817bded:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817bdf0:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 817bdf4:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817bdf8:	74 0d                	je     817be07 <_ZN11Arad_Script4LoadEPKcS1_+0x4b7>
 817bdfa:	83 7d d8 0a          	cmpl   $0xa,-0x28(%ebp)
 817bdfe:	74 07                	je     817be07 <_ZN11Arad_Script4LoadEPKcS1_+0x4b7>
 817be00:	b8 01 00 00 00       	mov    $0x1,%eax
 817be05:	eb 05                	jmp    817be0c <_ZN11Arad_Script4LoadEPKcS1_+0x4bc>
 817be07:	b8 00 00 00 00       	mov    $0x0,%eax
 817be0c:	84 c0                	test   %al,%al
 817be0e:	75 d4                	jne    817bde4 <_ZN11Arad_Script4LoadEPKcS1_+0x494>
 817be10:	83 7d d8 0a          	cmpl   $0xa,-0x28(%ebp)
 817be14:	74 06                	je     817be1c <_ZN11Arad_Script4LoadEPKcS1_+0x4cc>
 817be16:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817be1a:	75 4d                	jne    817be69 <_ZN11Arad_Script4LoadEPKcS1_+0x519>
 817be1c:	8b 45 08             	mov    0x8(%ebp),%eax
 817be1f:	8b 40 08             	mov    0x8(%eax),%eax
 817be22:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 817be25:	74 07                	je     817be2e <_ZN11Arad_Script4LoadEPKcS1_+0x4de>
 817be27:	b8 00 00 00 00       	mov    $0x0,%eax
 817be2c:	eb 6b                	jmp    817be99 <_ZN11Arad_Script4LoadEPKcS1_+0x549>
 817be2e:	8b 45 08             	mov    0x8(%ebp),%eax
 817be31:	8b 40 0c             	mov    0xc(%eax),%eax
 817be34:	8d 50 01             	lea    0x1(%eax),%edx
 817be37:	8b 45 08             	mov    0x8(%ebp),%eax
 817be3a:	89 50 0c             	mov    %edx,0xc(%eax)
 817be3d:	8b 45 08             	mov    0x8(%ebp),%eax
 817be40:	8b 40 0c             	mov    0xc(%eax),%eax
 817be43:	8d 50 01             	lea    0x1(%eax),%edx
 817be46:	8b 45 08             	mov    0x8(%ebp),%eax
 817be49:	8b 40 04             	mov    0x4(%eax),%eax
 817be4c:	39 c2                	cmp    %eax,%edx
 817be4e:	7c 35                	jl     817be85 <_ZN11Arad_Script4LoadEPKcS1_+0x535>
 817be50:	8b 45 08             	mov    0x8(%ebp),%eax
 817be53:	89 04 24             	mov    %eax,(%esp)
 817be56:	e8 37 fa ff ff       	call   817b892 <_ZN11Arad_Script9ExpandRowEv>
 817be5b:	83 f0 01             	xor    $0x1,%eax
 817be5e:	84 c0                	test   %al,%al
 817be60:	74 26                	je     817be88 <_ZN11Arad_Script4LoadEPKcS1_+0x538>
 817be62:	b8 00 00 00 00       	mov    $0x0,%eax
 817be67:	eb 30                	jmp    817be99 <_ZN11Arad_Script4LoadEPKcS1_+0x549>
 817be69:	90                   	nop
 817be6a:	e9 42 fe ff ff       	jmp    817bcb1 <_ZN11Arad_Script4LoadEPKcS1_+0x361>
 817be6f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817be72:	8b 55 d8             	mov    -0x28(%ebp),%edx
 817be75:	88 94 05 ac fd ff ff 	mov    %dl,-0x254(%ebp,%eax,1)
 817be7c:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 817be80:	e9 2c fe ff ff       	jmp    817bcb1 <_ZN11Arad_Script4LoadEPKcS1_+0x361>
 817be85:	90                   	nop
 817be86:	eb 01                	jmp    817be89 <_ZN11Arad_Script4LoadEPKcS1_+0x539>
 817be88:	90                   	nop
 817be89:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817be8d:	0f 85 0f fe ff ff    	jne    817bca2 <_ZN11Arad_Script4LoadEPKcS1_+0x352>
 817be93:	90                   	nop
 817be94:	b8 01 00 00 00       	mov    $0x1,%eax
 817be99:	81 c4 5c 06 00 00    	add    $0x65c,%esp
 817be9f:	5b                   	pop    %ebx
 817bea0:	5e                   	pop    %esi
 817bea1:	5f                   	pop    %edi
 817bea2:	5d                   	pop    %ebp
 817bea3:	c3                   	ret

```

```c
// Arad_Script::Load @ 0x817b950

/* Arad_Script::Load(char const*, char const*) */

undefined4 __thiscall Arad_Script::Load(Arad_Script *this,char *param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_658 [1024];
  char local_258 [512];
  string local_58;
  allocator<char> local_51;
  string local_50;
  allocator<char> local_49;
  string local_48;
  allocator<char> local_41;
  char *local_40;
  uint local_3c;
  uint local_38;
  size_t local_34;
  size_t local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  bVar8 = 0;
  cVar2 = Create(this);
  if (cVar2 == '\x01') {
    local_40 = (char *)0x0;
    pcVar7 = local_658;
    for (iVar6 = 0x100; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    sprintf(local_658,"[%s]",param_2);
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = strlen(local_658);
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    do {
      while( true ) {
        do {
          local_2c = (int)*param_1;
          param_1 = param_1 + 1;
          if (local_2c == -1) {
            return 0;
          }
        } while ((local_2c < 0x21) || (0x7e < local_2c));
        if (local_658[local_34] == local_2c) break;
        local_34 = 0;
      }
      local_34 = local_34 + 1;
    } while (local_34 != local_30);
    pcVar7 = local_258;
    for (iVar6 = 0x80; iVar6 != 0; iVar6 = iVar6 + -1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar8 * -2 + 1) * 4;
    }
    local_24 = 0;
    do {
      while( true ) {
        cVar2 = *param_1;
        local_2c = (int)cVar2;
        param_1 = param_1 + 1;
        if (local_2c == -1) {
          return 0;
        }
        if ((((local_2c == 0x20) || (local_2c == 9)) || (local_2c == 10)) || (local_2c == 0xd))
        break;
        local_258[local_24] = cVar2;
        local_24 = local_24 + 1;
      }
      if (0 < local_24) {
        local_258[local_24] = '\0';
        local_24 = 0;
        local_40 = local_258;
        local_38 = strlen(local_258);
        for (local_3c = 0; local_3c < local_38; local_3c = local_3c + 1) {
          if (local_258[local_3c] == '/') {
            local_258[local_3c] = '\0';
            std::allocator<char>::allocator();
                    /* try { // try from 0817bb2b to 0817bb2f has its CatchHandler @ 0817bb6f */
            std::string::string((string *)&local_58,local_40,(allocator *)&local_51);
                    /* try { // try from 0817bb40 to 0817bb44 has its CatchHandler @ 0817bb5a */
            puVar5 = (undefined4 *)
                     std::
                     map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                   *)(this + 0x24),&local_58);
            *puVar5 = *(undefined4 *)(this + 8);
                    /* try { // try from 0817bb53 to 0817bb57 has its CatchHandler @ 0817bb6f */
            std::string::~string((string *)&local_58);
            std::allocator<char>::~allocator(&local_51);
            local_40 = local_258 + local_3c + 1;
          }
        }
        std::allocator<char>::allocator();
                    /* try { // try from 0817bbda to 0817bbde has its CatchHandler @ 0817bc29 */
        std::string::string((string *)&local_50,local_40,(allocator *)&local_49);
                    /* try { // try from 0817bbef to 0817bbf3 has its CatchHandler @ 0817bc14 */
        piVar4 = (int *)std::
                        map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                        ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                      *)(this + 0x24),&local_50);
        iVar6 = *(int *)(this + 8);
        *piVar4 = iVar6;
        *(int *)(this + 8) = iVar6 + 1;
                    /* try { // try from 0817bc0d to 0817bc11 has its CatchHandler @ 0817bc29 */
        std::string::~string((string *)&local_50);
        std::allocator<char>::~allocator(&local_49);
        if ((*(int *)this <= *(int *)(this + 8) + 1) && (cVar2 = ExpandCol(this), cVar2 != '\x01'))
        {
          return 0;
        }
      }
    } while (local_2c != 10);
    do {
      local_28 = -1;
      local_24 = 0;
      do {
        while( true ) {
          cVar2 = *param_1;
          local_2c = (int)cVar2;
          param_1 = param_1 + 1;
          if (((local_2c == 0x20) || (local_2c == 9)) ||
             ((local_2c == 10 || ((local_2c == 0xd || (local_2c == -1)))))) break;
          local_258[local_24] = cVar2;
          local_24 = local_24 + 1;
        }
        if (local_24 < 1) {
          local_2c = -1;
          goto LAB_0817be89;
        }
        local_258[local_24] = '\0';
        local_24 = 0;
        if (local_28 == -1) {
          std::allocator<char>::allocator();
                    /* try { // try from 0817bd34 to 0817bd38 has its CatchHandler @ 0817bd78 */
          std::string::string((string *)&local_48,local_258,(allocator *)&local_41);
                    /* try { // try from 0817bd49 to 0817bd4d has its CatchHandler @ 0817bd63 */
          puVar5 = (undefined4 *)
                   std::
                   map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                   ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                 *)(this + 0x3c),&local_48);
          *puVar5 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 0817bd5c to 0817bd60 has its CatchHandler @ 0817bd78 */
          std::string::~string((string *)&local_48);
          std::allocator<char>::~allocator(&local_41);
        }
        else {
          strcpy((char *)(*(int *)(this + 0x14) +
                         (*(int *)this * *(int *)(this + 0xc) + local_28) * 0x80),local_258);
        }
        local_28 = local_28 + 1;
        if (*(int *)(this + 8) == local_28) {
          while( true ) {
            if ((local_2c == -1) || (local_2c == 10)) {
              bVar1 = false;
            }
            else {
              bVar1 = true;
            }
            if (!bVar1) break;
            local_2c = (int)*param_1;
            param_1 = param_1 + 1;
          }
        }
      } while ((local_2c != 10) && (local_2c != -1));
      if (*(int *)(this + 8) != local_28) {
        return 0;
      }
      *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
      if ((*(int *)(this + 4) <= *(int *)(this + 0xc) + 1) &&
         (cVar2 = ExpandRow(this), cVar2 != '\x01')) {
        return 0;
      }
LAB_0817be89:
    } while (local_2c != -1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## Load_0817bea4

```asm
// === 0817bea4 Arad_Script::Load  [0x0817bea4-0x817c44d] ===
 817bea4:	55                   	push   %ebp
 817bea5:	89 e5                	mov    %esp,%ebp
 817bea7:	57                   	push   %edi
 817bea8:	56                   	push   %esi
 817bea9:	53                   	push   %ebx
 817beaa:	81 ec 6c 06 00 00    	sub    $0x66c,%esp
 817beb0:	8b 45 08             	mov    0x8(%ebp),%eax
 817beb3:	83 c0 20             	add    $0x20,%eax
 817beb6:	89 04 24             	mov    %eax,(%esp)
 817beb9:	e8 32 a6 58 00       	call   87064f0 <_ZNKSs5c_strEv>
 817bebe:	c7 44 24 04 e5 71 b8 	movl   $0x8b871e5,0x4(%esp)
 817bec5:	08 
 817bec6:	89 04 24             	mov    %eax,(%esp)
 817bec9:	e8 a2 28 f0 ff       	call   807e770 <fopen@plt>
 817bece:	89 45 bc             	mov    %eax,-0x44(%ebp)
 817bed1:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 817bed5:	75 0a                	jne    817bee1 <_ZN11Arad_Script4LoadEPKc+0x3d>
 817bed7:	b8 00 00 00 00       	mov    $0x0,%eax
 817bedc:	e9 62 05 00 00       	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817bee1:	8b 45 08             	mov    0x8(%ebp),%eax
 817bee4:	89 04 24             	mov    %eax,(%esp)
 817bee7:	e8 3e f8 ff ff       	call   817b72a <_ZN11Arad_Script6CreateEv>
 817beec:	83 f0 01             	xor    $0x1,%eax
 817beef:	84 c0                	test   %al,%al
 817bef1:	74 0a                	je     817befd <_ZN11Arad_Script4LoadEPKc+0x59>
 817bef3:	b8 00 00 00 00       	mov    $0x0,%eax
 817bef8:	e9 46 05 00 00       	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817befd:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 817bf04:	8d 9d a4 f9 ff ff    	lea    -0x65c(%ebp),%ebx
 817bf0a:	b8 00 00 00 00       	mov    $0x0,%eax
 817bf0f:	ba 00 01 00 00       	mov    $0x100,%edx
 817bf14:	89 df                	mov    %ebx,%edi
 817bf16:	89 d1                	mov    %edx,%ecx
 817bf18:	f3 ab                	rep stos %eax,%es:(%edi)
 817bf1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817bf1d:	89 44 24 08          	mov    %eax,0x8(%esp)
 817bf21:	c7 44 24 04 e0 71 b8 	movl   $0x8b871e0,0x4(%esp)
 817bf28:	08 
 817bf29:	8d 85 a4 f9 ff ff    	lea    -0x65c(%ebp),%eax
 817bf2f:	89 04 24             	mov    %eax,(%esp)
 817bf32:	e8 09 25 f0 ff       	call   807e440 <sprintf@plt>
 817bf37:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 817bf3e:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 817bf45:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 817bf4c:	8d 85 a4 f9 ff ff    	lea    -0x65c(%ebp),%eax
 817bf52:	89 04 24             	mov    %eax,(%esp)
 817bf55:	e8 56 24 f0 ff       	call   807e3b0 <strlen@plt>
 817bf5a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 817bf5d:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 817bf64:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 817bf6b:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817bf72:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 817bf79:	eb 07                	jmp    817bf82 <_ZN11Arad_Script4LoadEPKc+0xde>
 817bf7b:	90                   	nop
 817bf7c:	eb 04                	jmp    817bf82 <_ZN11Arad_Script4LoadEPKc+0xde>
 817bf7e:	90                   	nop
 817bf7f:	eb 01                	jmp    817bf82 <_ZN11Arad_Script4LoadEPKc+0xde>
 817bf81:	90                   	nop
 817bf82:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817bf85:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 817bf89:	8b 55 08             	mov    0x8(%ebp),%edx
 817bf8c:	83 c2 20             	add    $0x20,%edx
 817bf8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 817bf93:	89 14 24             	mov    %edx,(%esp)
 817bf96:	e8 25 cf 58 00       	call   8708ec0 <_ZNSsixEj>
 817bf9b:	0f b6 00             	movzbl (%eax),%eax
 817bf9e:	0f be c0             	movsbl %al,%eax
 817bfa1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817bfa4:	8b 45 bc             	mov    -0x44(%ebp),%eax
 817bfa7:	89 04 24             	mov    %eax,(%esp)
 817bfaa:	e8 21 1f f0 ff       	call   807ded0 <fgetc@plt>
 817bfaf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 817bfb2:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 817bfb6:	75 0a                	jne    817bfc2 <_ZN11Arad_Script4LoadEPKc+0x11e>
 817bfb8:	b8 00 00 00 00       	mov    $0x0,%eax
 817bfbd:	e9 81 04 00 00       	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817bfc2:	83 7d d4 20          	cmpl   $0x20,-0x2c(%ebp)
 817bfc6:	7e b3                	jle    817bf7b <_ZN11Arad_Script4LoadEPKc+0xd7>
 817bfc8:	83 7d d4 7e          	cmpl   $0x7e,-0x2c(%ebp)
 817bfcc:	7f b0                	jg     817bf7e <_ZN11Arad_Script4LoadEPKc+0xda>
 817bfce:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817bfd1:	0f b6 84 05 a4 f9 ff 	movzbl -0x65c(%ebp,%eax,1),%eax
 817bfd8:	ff 
 817bfd9:	0f be c0             	movsbl %al,%eax
 817bfdc:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 817bfdf:	75 0e                	jne    817bfef <_ZN11Arad_Script4LoadEPKc+0x14b>
 817bfe1:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 817bfe5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 817bfe8:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 817bfeb:	75 94                	jne    817bf81 <_ZN11Arad_Script4LoadEPKc+0xdd>
 817bfed:	eb 09                	jmp    817bff8 <_ZN11Arad_Script4LoadEPKc+0x154>
 817bfef:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 817bff6:	eb 8a                	jmp    817bf82 <_ZN11Arad_Script4LoadEPKc+0xde>
 817bff8:	8d 9d a4 fd ff ff    	lea    -0x25c(%ebp),%ebx
 817bffe:	b8 00 00 00 00       	mov    $0x0,%eax
 817c003:	ba 80 00 00 00       	mov    $0x80,%edx
 817c008:	89 df                	mov    %ebx,%edi
 817c00a:	89 d1                	mov    %edx,%ecx
 817c00c:	f3 ab                	rep stos %eax,%es:(%edi)
 817c00e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817c015:	8b 45 bc             	mov    -0x44(%ebp),%eax
 817c018:	89 04 24             	mov    %eax,(%esp)
 817c01b:	e8 b0 1e f0 ff       	call   807ded0 <fgetc@plt>
 817c020:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 817c023:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 817c027:	75 0a                	jne    817c033 <_ZN11Arad_Script4LoadEPKc+0x18f>
 817c029:	b8 00 00 00 00       	mov    $0x0,%eax
 817c02e:	e9 10 04 00 00       	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817c033:	83 7d d4 20          	cmpl   $0x20,-0x2c(%ebp)
 817c037:	74 16                	je     817c04f <_ZN11Arad_Script4LoadEPKc+0x1ab>
 817c039:	83 7d d4 09          	cmpl   $0x9,-0x2c(%ebp)
 817c03d:	74 10                	je     817c04f <_ZN11Arad_Script4LoadEPKc+0x1ab>
 817c03f:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 817c043:	74 0a                	je     817c04f <_ZN11Arad_Script4LoadEPKc+0x1ab>
 817c045:	83 7d d4 0d          	cmpl   $0xd,-0x2c(%ebp)
 817c049:	0f 85 dd 01 00 00    	jne    817c22c <_ZN11Arad_Script4LoadEPKc+0x388>
 817c04f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 817c053:	0f 8e c7 01 00 00    	jle    817c220 <_ZN11Arad_Script4LoadEPKc+0x37c>
 817c059:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817c05c:	c6 84 05 a4 fd ff ff 	movb   $0x0,-0x25c(%ebp,%eax,1)
 817c063:	00 
 817c064:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817c06b:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 817c071:	89 45 c0             	mov    %eax,-0x40(%ebp)
 817c074:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 817c07a:	89 04 24             	mov    %eax,(%esp)
 817c07d:	e8 2e 23 f0 ff       	call   807e3b0 <strlen@plt>
 817c082:	89 45 c8             	mov    %eax,-0x38(%ebp)
 817c085:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 817c08c:	e9 bc 00 00 00       	jmp    817c14d <_ZN11Arad_Script4LoadEPKc+0x2a9>
 817c091:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817c094:	0f b6 84 05 a4 fd ff 	movzbl -0x25c(%ebp,%eax,1),%eax
 817c09b:	ff 
 817c09c:	3c 2f                	cmp    $0x2f,%al
 817c09e:	0f 85 a5 00 00 00    	jne    817c149 <_ZN11Arad_Script4LoadEPKc+0x2a5>
 817c0a4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817c0a7:	c6 84 05 a4 fd ff ff 	movb   $0x0,-0x25c(%ebp,%eax,1)
 817c0ae:	00 
 817c0af:	8d 45 ab             	lea    -0x55(%ebp),%eax
 817c0b2:	89 04 24             	mov    %eax,(%esp)
 817c0b5:	e8 16 40 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817c0ba:	8d 45 ab             	lea    -0x55(%ebp),%eax
 817c0bd:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c0c1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 817c0c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c0c8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 817c0cb:	89 04 24             	mov    %eax,(%esp)
 817c0ce:	e8 5d b5 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817c0d3:	8b 45 08             	mov    0x8(%ebp),%eax
 817c0d6:	8d 50 24             	lea    0x24(%eax),%edx
 817c0d9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 817c0dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c0e0:	89 14 24             	mov    %edx,(%esp)
 817c0e3:	e8 a4 0b 00 00       	call   817cc8c <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_>
 817c0e8:	8b 55 08             	mov    0x8(%ebp),%edx
 817c0eb:	8b 52 08             	mov    0x8(%edx),%edx
 817c0ee:	89 10                	mov    %edx,(%eax)
 817c0f0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 817c0f3:	89 04 24             	mov    %eax,(%esp)
 817c0f6:	e8 e5 ba 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c0fb:	eb 30                	jmp    817c12d <_ZN11Arad_Script4LoadEPKc+0x289>
 817c0fd:	89 d3                	mov    %edx,%ebx
 817c0ff:	89 c6                	mov    %eax,%esi
 817c101:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 817c104:	89 04 24             	mov    %eax,(%esp)
 817c107:	e8 d4 ba 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c10c:	89 f0                	mov    %esi,%eax
 817c10e:	89 da                	mov    %ebx,%edx
 817c110:	eb 00                	jmp    817c112 <_ZN11Arad_Script4LoadEPKc+0x26e>
 817c112:	89 d3                	mov    %edx,%ebx
 817c114:	89 c6                	mov    %eax,%esi
 817c116:	8d 45 ab             	lea    -0x55(%ebp),%eax
 817c119:	89 04 24             	mov    %eax,(%esp)
 817c11c:	e8 cf 3f 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c121:	89 f0                	mov    %esi,%eax
 817c123:	89 da                	mov    %ebx,%edx
 817c125:	89 04 24             	mov    %eax,(%esp)
 817c128:	e8 23 76 96 00       	call   8ae3750 <_Unwind_Resume>
 817c12d:	8d 45 ab             	lea    -0x55(%ebp),%eax
 817c130:	89 04 24             	mov    %eax,(%esp)
 817c133:	e8 b8 3f 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c138:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817c13b:	8d 50 01             	lea    0x1(%eax),%edx
 817c13e:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 817c144:	01 d0                	add    %edx,%eax
 817c146:	89 45 c0             	mov    %eax,-0x40(%ebp)
 817c149:	83 45 c4 01          	addl   $0x1,-0x3c(%ebp)
 817c14d:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 817c150:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 817c153:	0f 92 c0             	setb   %al
 817c156:	84 c0                	test   %al,%al
 817c158:	0f 85 33 ff ff ff    	jne    817c091 <_ZN11Arad_Script4LoadEPKc+0x1ed>
 817c15e:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817c161:	89 04 24             	mov    %eax,(%esp)
 817c164:	e8 67 3f 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817c169:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817c16c:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c170:	8b 45 c0             	mov    -0x40(%ebp),%eax
 817c173:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c177:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817c17a:	89 04 24             	mov    %eax,(%esp)
 817c17d:	e8 ae b4 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817c182:	8b 45 08             	mov    0x8(%ebp),%eax
 817c185:	8d 50 24             	lea    0x24(%eax),%edx
 817c188:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817c18b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c18f:	89 14 24             	mov    %edx,(%esp)
 817c192:	e8 f5 0a 00 00       	call   817cc8c <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_>
 817c197:	89 c2                	mov    %eax,%edx
 817c199:	8b 45 08             	mov    0x8(%ebp),%eax
 817c19c:	8b 40 08             	mov    0x8(%eax),%eax
 817c19f:	89 02                	mov    %eax,(%edx)
 817c1a1:	8d 50 01             	lea    0x1(%eax),%edx
 817c1a4:	8b 45 08             	mov    0x8(%ebp),%eax
 817c1a7:	89 50 08             	mov    %edx,0x8(%eax)
 817c1aa:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817c1ad:	89 04 24             	mov    %eax,(%esp)
 817c1b0:	e8 2b ba 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c1b5:	eb 30                	jmp    817c1e7 <_ZN11Arad_Script4LoadEPKc+0x343>
 817c1b7:	89 d3                	mov    %edx,%ebx
 817c1b9:	89 c6                	mov    %eax,%esi
 817c1bb:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817c1be:	89 04 24             	mov    %eax,(%esp)
 817c1c1:	e8 1a ba 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c1c6:	89 f0                	mov    %esi,%eax
 817c1c8:	89 da                	mov    %ebx,%edx
 817c1ca:	eb 00                	jmp    817c1cc <_ZN11Arad_Script4LoadEPKc+0x328>
 817c1cc:	89 d3                	mov    %edx,%ebx
 817c1ce:	89 c6                	mov    %eax,%esi
 817c1d0:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817c1d3:	89 04 24             	mov    %eax,(%esp)
 817c1d6:	e8 15 3f 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c1db:	89 f0                	mov    %esi,%eax
 817c1dd:	89 da                	mov    %ebx,%edx
 817c1df:	89 04 24             	mov    %eax,(%esp)
 817c1e2:	e8 69 75 96 00       	call   8ae3750 <_Unwind_Resume>
 817c1e7:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817c1ea:	89 04 24             	mov    %eax,(%esp)
 817c1ed:	e8 fe 3e 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c1f2:	8b 45 08             	mov    0x8(%ebp),%eax
 817c1f5:	8b 40 08             	mov    0x8(%eax),%eax
 817c1f8:	8d 50 01             	lea    0x1(%eax),%edx
 817c1fb:	8b 45 08             	mov    0x8(%ebp),%eax
 817c1fe:	8b 00                	mov    (%eax),%eax
 817c200:	39 c2                	cmp    %eax,%edx
 817c202:	7c 1c                	jl     817c220 <_ZN11Arad_Script4LoadEPKc+0x37c>
 817c204:	8b 45 08             	mov    0x8(%ebp),%eax
 817c207:	89 04 24             	mov    %eax,(%esp)
 817c20a:	e8 f1 f5 ff ff       	call   817b800 <_ZN11Arad_Script9ExpandColEv>
 817c20f:	83 f0 01             	xor    $0x1,%eax
 817c212:	84 c0                	test   %al,%al
 817c214:	74 0a                	je     817c220 <_ZN11Arad_Script4LoadEPKc+0x37c>
 817c216:	b8 00 00 00 00       	mov    $0x0,%eax
 817c21b:	e9 23 02 00 00       	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817c220:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 817c224:	74 1c                	je     817c242 <_ZN11Arad_Script4LoadEPKc+0x39e>
 817c226:	90                   	nop
 817c227:	e9 e9 fd ff ff       	jmp    817c015 <_ZN11Arad_Script4LoadEPKc+0x171>
 817c22c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817c22f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 817c232:	88 94 05 a4 fd ff ff 	mov    %dl,-0x25c(%ebp,%eax,1)
 817c239:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 817c23d:	e9 d3 fd ff ff       	jmp    817c015 <_ZN11Arad_Script4LoadEPKc+0x171>
 817c242:	90                   	nop
 817c243:	eb 01                	jmp    817c246 <_ZN11Arad_Script4LoadEPKc+0x3a2>
 817c245:	90                   	nop
 817c246:	c7 45 d8 ff ff ff ff 	movl   $0xffffffff,-0x28(%ebp)
 817c24d:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817c254:	8b 45 bc             	mov    -0x44(%ebp),%eax
 817c257:	89 04 24             	mov    %eax,(%esp)
 817c25a:	e8 71 1c f0 ff       	call   807ded0 <fgetc@plt>
 817c25f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 817c262:	83 7d d4 20          	cmpl   $0x20,-0x2c(%ebp)
 817c266:	74 1c                	je     817c284 <_ZN11Arad_Script4LoadEPKc+0x3e0>
 817c268:	83 7d d4 09          	cmpl   $0x9,-0x2c(%ebp)
 817c26c:	74 16                	je     817c284 <_ZN11Arad_Script4LoadEPKc+0x3e0>
 817c26e:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 817c272:	74 10                	je     817c284 <_ZN11Arad_Script4LoadEPKc+0x3e0>
 817c274:	83 7d d4 0d          	cmpl   $0xd,-0x2c(%ebp)
 817c278:	74 0a                	je     817c284 <_ZN11Arad_Script4LoadEPKc+0x3e0>
 817c27a:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 817c27e:	0f 85 8a 01 00 00    	jne    817c40e <_ZN11Arad_Script4LoadEPKc+0x56a>
 817c284:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 817c288:	7e 1d                	jle    817c2a7 <_ZN11Arad_Script4LoadEPKc+0x403>
 817c28a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817c28d:	c6 84 05 a4 fd ff ff 	movb   $0x0,-0x25c(%ebp,%eax,1)
 817c294:	00 
 817c295:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 817c29c:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 817c2a0:	74 11                	je     817c2b3 <_ZN11Arad_Script4LoadEPKc+0x40f>
 817c2a2:	e9 9a 00 00 00       	jmp    817c341 <_ZN11Arad_Script4LoadEPKc+0x49d>
 817c2a7:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
 817c2ae:	e9 75 01 00 00       	jmp    817c428 <_ZN11Arad_Script4LoadEPKc+0x584>
 817c2b3:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817c2b6:	89 04 24             	mov    %eax,(%esp)
 817c2b9:	e8 12 3e 56 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 817c2be:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817c2c1:	89 44 24 08          	mov    %eax,0x8(%esp)
 817c2c5:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 817c2cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c2cf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817c2d2:	89 04 24             	mov    %eax,(%esp)
 817c2d5:	e8 56 b3 58 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 817c2da:	8b 45 08             	mov    0x8(%ebp),%eax
 817c2dd:	8d 50 3c             	lea    0x3c(%eax),%edx
 817c2e0:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817c2e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c2e7:	89 14 24             	mov    %edx,(%esp)
 817c2ea:	e8 9d 09 00 00       	call   817cc8c <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEEixERS3_>
 817c2ef:	8b 55 08             	mov    0x8(%ebp),%edx
 817c2f2:	8b 52 0c             	mov    0xc(%edx),%edx
 817c2f5:	89 10                	mov    %edx,(%eax)
 817c2f7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817c2fa:	89 04 24             	mov    %eax,(%esp)
 817c2fd:	e8 de b8 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c302:	eb 30                	jmp    817c334 <_ZN11Arad_Script4LoadEPKc+0x490>
 817c304:	89 d3                	mov    %edx,%ebx
 817c306:	89 c6                	mov    %eax,%esi
 817c308:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817c30b:	89 04 24             	mov    %eax,(%esp)
 817c30e:	e8 cd b8 58 00       	call   8707be0 <_ZNSsD1Ev>
 817c313:	89 f0                	mov    %esi,%eax
 817c315:	89 da                	mov    %ebx,%edx
 817c317:	eb 00                	jmp    817c319 <_ZN11Arad_Script4LoadEPKc+0x475>
 817c319:	89 d3                	mov    %edx,%ebx
 817c31b:	89 c6                	mov    %eax,%esi
 817c31d:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817c320:	89 04 24             	mov    %eax,(%esp)
 817c323:	e8 c8 3d 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c328:	89 f0                	mov    %esi,%eax
 817c32a:	89 da                	mov    %ebx,%edx
 817c32c:	89 04 24             	mov    %eax,(%esp)
 817c32f:	e8 1c 74 96 00       	call   8ae3750 <_Unwind_Resume>
 817c334:	8d 45 bb             	lea    -0x45(%ebp),%eax
 817c337:	89 04 24             	mov    %eax,(%esp)
 817c33a:	e8 b1 3d 56 00       	call   86e00f0 <_ZNSaIcED1Ev>
 817c33f:	eb 33                	jmp    817c374 <_ZN11Arad_Script4LoadEPKc+0x4d0>
 817c341:	8b 45 08             	mov    0x8(%ebp),%eax
 817c344:	8b 50 14             	mov    0x14(%eax),%edx
 817c347:	8b 45 08             	mov    0x8(%ebp),%eax
 817c34a:	8b 48 0c             	mov    0xc(%eax),%ecx
 817c34d:	8b 45 08             	mov    0x8(%ebp),%eax
 817c350:	8b 00                	mov    (%eax),%eax
 817c352:	0f af c1             	imul   %ecx,%eax
 817c355:	89 c1                	mov    %eax,%ecx
 817c357:	8b 45 d8             	mov    -0x28(%ebp),%eax
 817c35a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817c35d:	c1 e0 07             	shl    $0x7,%eax
 817c360:	01 c2                	add    %eax,%edx
 817c362:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
 817c368:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c36c:	89 14 24             	mov    %edx,(%esp)
 817c36f:	e8 7c 1b f0 ff       	call   807def0 <strcpy@plt>
 817c374:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 817c378:	8b 45 08             	mov    0x8(%ebp),%eax
 817c37b:	8b 40 08             	mov    0x8(%eax),%eax
 817c37e:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 817c381:	75 2c                	jne    817c3af <_ZN11Arad_Script4LoadEPKc+0x50b>
 817c383:	eb 0e                	jmp    817c393 <_ZN11Arad_Script4LoadEPKc+0x4ef>
 817c385:	8b 45 bc             	mov    -0x44(%ebp),%eax
 817c388:	89 04 24             	mov    %eax,(%esp)
 817c38b:	e8 40 1b f0 ff       	call   807ded0 <fgetc@plt>
 817c390:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 817c393:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 817c397:	74 0d                	je     817c3a6 <_ZN11Arad_Script4LoadEPKc+0x502>
 817c399:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 817c39d:	74 07                	je     817c3a6 <_ZN11Arad_Script4LoadEPKc+0x502>
 817c39f:	b8 01 00 00 00       	mov    $0x1,%eax
 817c3a4:	eb 05                	jmp    817c3ab <_ZN11Arad_Script4LoadEPKc+0x507>
 817c3a6:	b8 00 00 00 00       	mov    $0x0,%eax
 817c3ab:	84 c0                	test   %al,%al
 817c3ad:	75 d6                	jne    817c385 <_ZN11Arad_Script4LoadEPKc+0x4e1>
 817c3af:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 817c3b3:	74 06                	je     817c3bb <_ZN11Arad_Script4LoadEPKc+0x517>
 817c3b5:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 817c3b9:	75 4d                	jne    817c408 <_ZN11Arad_Script4LoadEPKc+0x564>
 817c3bb:	8b 45 08             	mov    0x8(%ebp),%eax
 817c3be:	8b 40 08             	mov    0x8(%eax),%eax
 817c3c1:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 817c3c4:	74 07                	je     817c3cd <_ZN11Arad_Script4LoadEPKc+0x529>
 817c3c6:	b8 00 00 00 00       	mov    $0x0,%eax
 817c3cb:	eb 76                	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817c3cd:	8b 45 08             	mov    0x8(%ebp),%eax
 817c3d0:	8b 40 0c             	mov    0xc(%eax),%eax
 817c3d3:	8d 50 01             	lea    0x1(%eax),%edx
 817c3d6:	8b 45 08             	mov    0x8(%ebp),%eax
 817c3d9:	89 50 0c             	mov    %edx,0xc(%eax)
 817c3dc:	8b 45 08             	mov    0x8(%ebp),%eax
 817c3df:	8b 40 0c             	mov    0xc(%eax),%eax
 817c3e2:	8d 50 01             	lea    0x1(%eax),%edx
 817c3e5:	8b 45 08             	mov    0x8(%ebp),%eax
 817c3e8:	8b 40 04             	mov    0x4(%eax),%eax
 817c3eb:	39 c2                	cmp    %eax,%edx
 817c3ed:	7c 35                	jl     817c424 <_ZN11Arad_Script4LoadEPKc+0x580>
 817c3ef:	8b 45 08             	mov    0x8(%ebp),%eax
 817c3f2:	89 04 24             	mov    %eax,(%esp)
 817c3f5:	e8 98 f4 ff ff       	call   817b892 <_ZN11Arad_Script9ExpandRowEv>
 817c3fa:	83 f0 01             	xor    $0x1,%eax
 817c3fd:	84 c0                	test   %al,%al
 817c3ff:	74 26                	je     817c427 <_ZN11Arad_Script4LoadEPKc+0x583>
 817c401:	b8 00 00 00 00       	mov    $0x0,%eax
 817c406:	eb 3b                	jmp    817c443 <_ZN11Arad_Script4LoadEPKc+0x59f>
 817c408:	90                   	nop
 817c409:	e9 46 fe ff ff       	jmp    817c254 <_ZN11Arad_Script4LoadEPKc+0x3b0>
 817c40e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817c411:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 817c414:	88 94 05 a4 fd ff ff 	mov    %dl,-0x25c(%ebp,%eax,1)
 817c41b:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 817c41f:	e9 30 fe ff ff       	jmp    817c254 <_ZN11Arad_Script4LoadEPKc+0x3b0>
 817c424:	90                   	nop
 817c425:	eb 01                	jmp    817c428 <_ZN11Arad_Script4LoadEPKc+0x584>
 817c427:	90                   	nop
 817c428:	83 7d d4 ff          	cmpl   $0xffffffff,-0x2c(%ebp)
 817c42c:	0f 85 13 fe ff ff    	jne    817c245 <_ZN11Arad_Script4LoadEPKc+0x3a1>
 817c432:	90                   	nop
 817c433:	8b 45 bc             	mov    -0x44(%ebp),%eax
 817c436:	89 04 24             	mov    %eax,(%esp)
 817c439:	e8 62 1a f0 ff       	call   807dea0 <fclose@plt>
 817c43e:	b8 01 00 00 00       	mov    $0x1,%eax
 817c443:	81 c4 6c 06 00 00    	add    $0x66c,%esp
 817c449:	5b                   	pop    %ebx
 817c44a:	5e                   	pop    %esi
 817c44b:	5f                   	pop    %edi
 817c44c:	5d                   	pop    %ebp
 817c44d:	c3                   	ret

```

```c
// Arad_Script::Load @ 0x817bea4

/* Arad_Script::Load(char const*) */

undefined4 __thiscall Arad_Script::Load(Arad_Script *this,char *param_1)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  byte bVar9;
  char local_660 [1024];
  char local_260 [512];
  string local_60;
  allocator<char> local_59;
  string local_58;
  allocator<char> local_51;
  string local_50;
  allocator<char> local_49;
  FILE *local_48;
  char *local_44;
  uint local_40;
  uint local_3c;
  size_t local_38;
  size_t local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  int local_20;
  
  bVar9 = 0;
  pcVar4 = (char *)std::string::c_str((string *)(this + 0x20));
  local_48 = fopen(pcVar4,"rt");
  if (local_48 == (FILE *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar3 = Create(this);
    if (cVar3 == '\x01') {
      local_44 = (char *)0x0;
      pcVar4 = local_660;
      for (iVar8 = 0x100; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
      }
      sprintf(local_660,"[%s]",param_1);
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = strlen(local_660);
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      do {
        while( true ) {
          do {
            uVar2 = local_24;
            local_24 = local_24 + 1;
            pcVar4 = (char *)std::string::operator[]((string *)(this + 0x20),uVar2);
            local_20 = (int)*pcVar4;
            local_30 = fgetc(local_48);
            if (local_30 == -1) {
              return 0;
            }
          } while ((local_30 < 0x21) || (0x7e < local_30));
          if (local_660[local_38] == local_30) break;
          local_38 = 0;
        }
        local_38 = local_38 + 1;
      } while (local_38 != local_34);
      pcVar4 = local_260;
      for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
        pcVar4[0] = '\0';
        pcVar4[1] = '\0';
        pcVar4[2] = '\0';
        pcVar4[3] = '\0';
        pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
      }
      local_28 = 0;
      do {
        while( true ) {
          local_30 = fgetc(local_48);
          if (local_30 == -1) {
            return 0;
          }
          if ((((local_30 == 0x20) || (local_30 == 9)) || (local_30 == 10)) || (local_30 == 0xd))
          break;
          local_260[local_28] = (char)local_30;
          local_28 = local_28 + 1;
        }
        if (0 < local_28) {
          local_260[local_28] = '\0';
          local_28 = 0;
          local_44 = local_260;
          local_3c = strlen(local_260);
          for (local_40 = 0; local_40 < local_3c; local_40 = local_40 + 1) {
            if (local_260[local_40] == '/') {
              local_260[local_40] = '\0';
              std::allocator<char>::allocator();
                    /* try { // try from 0817c0ce to 0817c0d2 has its CatchHandler @ 0817c112 */
              std::string::string((string *)&local_60,local_44,(allocator *)&local_59);
                    /* try { // try from 0817c0e3 to 0817c0e7 has its CatchHandler @ 0817c0fd */
              puVar7 = (undefined4 *)
                       std::
                       map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                       ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                     *)(this + 0x24),&local_60);
              *puVar7 = *(undefined4 *)(this + 8);
                    /* try { // try from 0817c0f6 to 0817c0fa has its CatchHandler @ 0817c112 */
              std::string::~string((string *)&local_60);
              std::allocator<char>::~allocator(&local_59);
              local_44 = local_260 + local_40 + 1;
            }
          }
          std::allocator<char>::allocator();
                    /* try { // try from 0817c17d to 0817c181 has its CatchHandler @ 0817c1cc */
          std::string::string((string *)&local_58,local_44,(allocator *)&local_51);
                    /* try { // try from 0817c192 to 0817c196 has its CatchHandler @ 0817c1b7 */
          piVar6 = (int *)std::
                          map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                          ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                        *)(this + 0x24),&local_58);
          iVar8 = *(int *)(this + 8);
          *piVar6 = iVar8;
          *(int *)(this + 8) = iVar8 + 1;
                    /* try { // try from 0817c1b0 to 0817c1b4 has its CatchHandler @ 0817c1cc */
          std::string::~string((string *)&local_58);
          std::allocator<char>::~allocator(&local_51);
          if ((*(int *)this <= *(int *)(this + 8) + 1) && (cVar3 = ExpandCol(this), cVar3 != '\x01')
             ) {
            return 0;
          }
        }
      } while (local_30 != 10);
      do {
        local_2c = -1;
        local_28 = 0;
        do {
          while (((local_30 = fgetc(local_48), local_30 != 0x20 && (local_30 != 9)) &&
                 ((local_30 != 10 && ((local_30 != 0xd && (local_30 != -1))))))) {
            local_260[local_28] = (char)local_30;
            local_28 = local_28 + 1;
          }
          if (local_28 < 1) {
            local_30 = -1;
            goto LAB_0817c428;
          }
          local_260[local_28] = '\0';
          local_28 = 0;
          if (local_2c == -1) {
            std::allocator<char>::allocator();
                    /* try { // try from 0817c2d5 to 0817c2d9 has its CatchHandler @ 0817c319 */
            std::string::string((string *)&local_50,local_260,(allocator *)&local_49);
                    /* try { // try from 0817c2ea to 0817c2ee has its CatchHandler @ 0817c304 */
            puVar7 = (undefined4 *)
                     std::
                     map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                     ::operator[]((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
                                   *)(this + 0x3c),&local_50);
            *puVar7 = *(undefined4 *)(this + 0xc);
                    /* try { // try from 0817c2fd to 0817c301 has its CatchHandler @ 0817c319 */
            std::string::~string((string *)&local_50);
            std::allocator<char>::~allocator(&local_49);
          }
          else {
            strcpy((char *)(*(int *)(this + 0x14) +
                           (*(int *)this * *(int *)(this + 0xc) + local_2c) * 0x80),local_260);
          }
          local_2c = local_2c + 1;
          if (*(int *)(this + 8) == local_2c) {
            while( true ) {
              if ((local_30 == -1) || (local_30 == 10)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              local_30 = fgetc(local_48);
            }
          }
        } while ((local_30 != 10) && (local_30 != -1));
        if (*(int *)(this + 8) != local_2c) {
          return 0;
        }
        *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
        if ((*(int *)(this + 4) <= *(int *)(this + 0xc) + 1) &&
           (cVar3 = ExpandRow(this), cVar3 != '\x01')) {
          return 0;
        }
LAB_0817c428:
      } while (local_30 != -1);
      fclose(local_48);
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## SetInt

```asm
// === 0817ca80 Arad_Script::SetInt  [0x0817ca80-0x817cabb] ===
 817ca80:	55                   	push   %ebp
 817ca81:	89 e5                	mov    %esp,%ebp
 817ca83:	83 ec 18             	sub    $0x18,%esp
 817ca86:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca89:	8b 50 14             	mov    0x14(%eax),%edx
 817ca8c:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca8f:	8b 00                	mov    (%eax),%eax
 817ca91:	0f af 45 0c          	imul   0xc(%ebp),%eax
 817ca95:	89 c1                	mov    %eax,%ecx
 817ca97:	8b 45 10             	mov    0x10(%ebp),%eax
 817ca9a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817ca9d:	c1 e0 07             	shl    $0x7,%eax
 817caa0:	01 c2                	add    %eax,%edx
 817caa2:	8b 45 14             	mov    0x14(%ebp),%eax
 817caa5:	89 44 24 08          	mov    %eax,0x8(%esp)
 817caa9:	c7 44 24 04 e8 71 b8 	movl   $0x8b871e8,0x4(%esp)
 817cab0:	08 
 817cab1:	89 14 24             	mov    %edx,(%esp)
 817cab4:	e8 87 19 f0 ff       	call   807e440 <sprintf@plt>
 817cab9:	c9                   	leave
 817caba:	c3                   	ret
 817cabb:	90                   	nop

```

```c
// Arad_Script::SetInt @ 0x817ca80

/* Arad_Script::SetInt(int, int, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,int param_1,int param_2,int param_3)

{
  sprintf((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80),"%d",param_3);
  return;
}

```

---

## SetInt_0817cabc

```asm
// === 0817cabc Arad_Script::SetInt  [0x0817cabc-0x817cb09] ===
 817cabc:	55                   	push   %ebp
 817cabd:	89 e5                	mov    %esp,%ebp
 817cabf:	53                   	push   %ebx
 817cac0:	83 ec 14             	sub    $0x14,%esp
 817cac3:	8b 45 10             	mov    0x10(%ebp),%eax
 817cac6:	89 44 24 04          	mov    %eax,0x4(%esp)
 817caca:	8b 45 08             	mov    0x8(%ebp),%eax
 817cacd:	89 04 24             	mov    %eax,(%esp)
 817cad0:	e8 79 f9 ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817cad5:	89 c3                	mov    %eax,%ebx
 817cad7:	8b 45 0c             	mov    0xc(%ebp),%eax
 817cada:	89 44 24 04          	mov    %eax,0x4(%esp)
 817cade:	8b 45 08             	mov    0x8(%ebp),%eax
 817cae1:	89 04 24             	mov    %eax,(%esp)
 817cae4:	e8 45 fa ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817cae9:	8b 55 14             	mov    0x14(%ebp),%edx
 817caec:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817caf0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817caf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 817caf8:	8b 45 08             	mov    0x8(%ebp),%eax
 817cafb:	89 04 24             	mov    %eax,(%esp)
 817cafe:	e8 7d ff ff ff       	call   817ca80 <_ZN11Arad_Script6SetIntEiii>
 817cb03:	83 c4 14             	add    $0x14,%esp
 817cb06:	5b                   	pop    %ebx
 817cb07:	5d                   	pop    %ebp
 817cb08:	c3                   	ret
 817cb09:	90                   	nop

```

```c
// Arad_Script::SetInt @ 0x817cabc

/* Arad_Script::SetInt(char*, char*, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,char *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  SetInt(this,iVar2,iVar1,param_3);
  return;
}

```

---

## SetInt_0817cb0a

```asm
// === 0817cb0a Arad_Script::SetInt  [0x0817cb0a-0x817cb41] ===
 817cb0a:	55                   	push   %ebp
 817cb0b:	89 e5                	mov    %esp,%ebp
 817cb0d:	83 ec 18             	sub    $0x18,%esp
 817cb10:	8b 45 0c             	mov    0xc(%ebp),%eax
 817cb13:	89 44 24 04          	mov    %eax,0x4(%esp)
 817cb17:	8b 45 08             	mov    0x8(%ebp),%eax
 817cb1a:	89 04 24             	mov    %eax,(%esp)
 817cb1d:	e8 0c fa ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817cb22:	8b 55 14             	mov    0x14(%ebp),%edx
 817cb25:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817cb29:	8b 55 10             	mov    0x10(%ebp),%edx
 817cb2c:	89 54 24 08          	mov    %edx,0x8(%esp)
 817cb30:	89 44 24 04          	mov    %eax,0x4(%esp)
 817cb34:	8b 45 08             	mov    0x8(%ebp),%eax
 817cb37:	89 04 24             	mov    %eax,(%esp)
 817cb3a:	e8 41 ff ff ff       	call   817ca80 <_ZN11Arad_Script6SetIntEiii>
 817cb3f:	c9                   	leave
 817cb40:	c3                   	ret
 817cb41:	90                   	nop

```

```c
// Arad_Script::SetInt @ 0x817cb0a

/* Arad_Script::SetInt(char*, int, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,char *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  SetInt(this,iVar1,param_2,param_3);
  return;
}

```

---

## SetInt_0817cb42

```asm
// === 0817cb42 Arad_Script::SetInt  [0x0817cb42-0x817cb78] ===
 817cb42:	55                   	push   %ebp
 817cb43:	89 e5                	mov    %esp,%ebp
 817cb45:	83 ec 18             	sub    $0x18,%esp
 817cb48:	8b 45 10             	mov    0x10(%ebp),%eax
 817cb4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817cb4f:	8b 45 08             	mov    0x8(%ebp),%eax
 817cb52:	89 04 24             	mov    %eax,(%esp)
 817cb55:	e8 f4 f8 ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817cb5a:	8b 55 14             	mov    0x14(%ebp),%edx
 817cb5d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817cb61:	89 44 24 08          	mov    %eax,0x8(%esp)
 817cb65:	8b 45 0c             	mov    0xc(%ebp),%eax
 817cb68:	89 44 24 04          	mov    %eax,0x4(%esp)
 817cb6c:	8b 45 08             	mov    0x8(%ebp),%eax
 817cb6f:	89 04 24             	mov    %eax,(%esp)
 817cb72:	e8 09 ff ff ff       	call   817ca80 <_ZN11Arad_Script6SetIntEiii>
 817cb77:	c9                   	leave
 817cb78:	c3                   	ret

```

```c
// Arad_Script::SetInt @ 0x817cb42

/* Arad_Script::SetInt(int, char*, int) */

void __thiscall Arad_Script::SetInt(Arad_Script *this,int param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  SetInt(this,param_1,iVar1,param_3);
  return;
}

```

---

## SetString

```asm
// === 0817c98e Arad_Script::SetString  [0x0817c98e-0x817c9c1] ===
 817c98e:	55                   	push   %ebp
 817c98f:	89 e5                	mov    %esp,%ebp
 817c991:	83 ec 18             	sub    $0x18,%esp
 817c994:	8b 45 08             	mov    0x8(%ebp),%eax
 817c997:	8b 50 14             	mov    0x14(%eax),%edx
 817c99a:	8b 45 08             	mov    0x8(%ebp),%eax
 817c99d:	8b 00                	mov    (%eax),%eax
 817c99f:	0f af 45 0c          	imul   0xc(%ebp),%eax
 817c9a3:	89 c1                	mov    %eax,%ecx
 817c9a5:	8b 45 10             	mov    0x10(%ebp),%eax
 817c9a8:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 817c9ab:	c1 e0 07             	shl    $0x7,%eax
 817c9ae:	01 c2                	add    %eax,%edx
 817c9b0:	8b 45 14             	mov    0x14(%ebp),%eax
 817c9b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c9b7:	89 14 24             	mov    %edx,(%esp)
 817c9ba:	e8 31 15 f0 ff       	call   807def0 <strcpy@plt>
 817c9bf:	c9                   	leave
 817c9c0:	c3                   	ret
 817c9c1:	90                   	nop

```

```c
// Arad_Script::SetString @ 0x817c98e

/* Arad_Script::SetString(int, int, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,int param_1,int param_2,char *param_3)

{
  strcpy((char *)(*(int *)(this + 0x14) + (*(int *)this * param_1 + param_2) * 0x80),param_3);
  return;
}

```

---

## SetString_0817c9c2

```asm
// === 0817c9c2 Arad_Script::SetString  [0x0817c9c2-0x817ca0f] ===
 817c9c2:	55                   	push   %ebp
 817c9c3:	89 e5                	mov    %esp,%ebp
 817c9c5:	53                   	push   %ebx
 817c9c6:	83 ec 14             	sub    $0x14,%esp
 817c9c9:	8b 45 10             	mov    0x10(%ebp),%eax
 817c9cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c9d0:	8b 45 08             	mov    0x8(%ebp),%eax
 817c9d3:	89 04 24             	mov    %eax,(%esp)
 817c9d6:	e8 73 fa ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817c9db:	89 c3                	mov    %eax,%ebx
 817c9dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 817c9e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c9e4:	8b 45 08             	mov    0x8(%ebp),%eax
 817c9e7:	89 04 24             	mov    %eax,(%esp)
 817c9ea:	e8 3f fb ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817c9ef:	8b 55 14             	mov    0x14(%ebp),%edx
 817c9f2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817c9f6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817c9fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 817c9fe:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca01:	89 04 24             	mov    %eax,(%esp)
 817ca04:	e8 85 ff ff ff       	call   817c98e <_ZN11Arad_Script9SetStringEiiPc>
 817ca09:	83 c4 14             	add    $0x14,%esp
 817ca0c:	5b                   	pop    %ebx
 817ca0d:	5d                   	pop    %ebp
 817ca0e:	c3                   	ret
 817ca0f:	90                   	nop

```

```c
// Arad_Script::SetString @ 0x817c9c2

/* Arad_Script::SetString(char*, char*, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,char *param_1,char *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = GetIdx4Col(this,param_2);
  iVar2 = GetIdx4Row(this,param_1);
  SetString(this,iVar2,iVar1,param_3);
  return;
}

```

---

## SetString_0817ca10

```asm
// === 0817ca10 Arad_Script::SetString  [0x0817ca10-0x817ca47] ===
 817ca10:	55                   	push   %ebp
 817ca11:	89 e5                	mov    %esp,%ebp
 817ca13:	83 ec 18             	sub    $0x18,%esp
 817ca16:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ca19:	89 44 24 04          	mov    %eax,0x4(%esp)
 817ca1d:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca20:	89 04 24             	mov    %eax,(%esp)
 817ca23:	e8 06 fb ff ff       	call   817c52e <_ZN11Arad_Script10GetIdx4RowEPc>
 817ca28:	8b 55 14             	mov    0x14(%ebp),%edx
 817ca2b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817ca2f:	8b 55 10             	mov    0x10(%ebp),%edx
 817ca32:	89 54 24 08          	mov    %edx,0x8(%esp)
 817ca36:	89 44 24 04          	mov    %eax,0x4(%esp)
 817ca3a:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca3d:	89 04 24             	mov    %eax,(%esp)
 817ca40:	e8 49 ff ff ff       	call   817c98e <_ZN11Arad_Script9SetStringEiiPc>
 817ca45:	c9                   	leave
 817ca46:	c3                   	ret
 817ca47:	90                   	nop

```

```c
// Arad_Script::SetString @ 0x817ca10

/* Arad_Script::SetString(char*, int, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,char *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Row(this,param_1);
  SetString(this,iVar1,param_2,param_3);
  return;
}

```

---

## SetString_0817ca48

```asm
// === 0817ca48 Arad_Script::SetString  [0x0817ca48-0x817ca7f] ===
 817ca48:	55                   	push   %ebp
 817ca49:	89 e5                	mov    %esp,%ebp
 817ca4b:	83 ec 18             	sub    $0x18,%esp
 817ca4e:	8b 45 10             	mov    0x10(%ebp),%eax
 817ca51:	89 44 24 04          	mov    %eax,0x4(%esp)
 817ca55:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca58:	89 04 24             	mov    %eax,(%esp)
 817ca5b:	e8 ee f9 ff ff       	call   817c44e <_ZN11Arad_Script10GetIdx4ColEPc>
 817ca60:	8b 55 14             	mov    0x14(%ebp),%edx
 817ca63:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817ca67:	89 44 24 08          	mov    %eax,0x8(%esp)
 817ca6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ca6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 817ca72:	8b 45 08             	mov    0x8(%ebp),%eax
 817ca75:	89 04 24             	mov    %eax,(%esp)
 817ca78:	e8 11 ff ff ff       	call   817c98e <_ZN11Arad_Script9SetStringEiiPc>
 817ca7d:	c9                   	leave
 817ca7e:	c3                   	ret
 817ca7f:	90                   	nop

```

```c
// Arad_Script::SetString @ 0x817ca48

/* Arad_Script::SetString(int, char*, char*) */

void __thiscall Arad_Script::SetString(Arad_Script *this,int param_1,char *param_2,char *param_3)

{
  int iVar1;
  
  iVar1 = GetIdx4Col(this,param_2);
  SetString(this,param_1,iVar1,param_3);
  return;
}

```

---

## make_file_path

```asm
// === 0817b70a Arad_Script::make_file_path  [0x0817b70a-0x817b729] ===
 817b70a:	55                   	push   %ebp
 817b70b:	89 e5                	mov    %esp,%ebp
 817b70d:	83 ec 18             	sub    $0x18,%esp
 817b710:	8b 45 08             	mov    0x8(%ebp),%eax
 817b713:	89 44 24 04          	mov    %eax,0x4(%esp)
 817b717:	c7 04 24 60 48 40 09 	movl   $0x9404860,(%esp)
 817b71e:	e8 cd 27 f0 ff       	call   807def0 <strcpy@plt>
 817b723:	b8 60 48 40 09       	mov    $0x9404860,%eax
 817b728:	c9                   	leave
 817b729:	c3                   	ret

```

```c
// Arad_Script::make_file_path @ 0x817b70a

/* Arad_Script::make_file_path(char const*) */

undefined1 * Arad_Script::make_file_path(char *param_1)

{
  strcpy(make_file_path(char_const*)::full_path,param_1);
  return make_file_path(char_const*)::full_path;
}

```

---

## ~Arad_Script

```asm
// === 0817b624 Arad_Script::~Arad_Script  [0x0817b624-0x817b709] ===
 817b624:	55                   	push   %ebp
 817b625:	89 e5                	mov    %esp,%ebp
 817b627:	56                   	push   %esi
 817b628:	53                   	push   %ebx
 817b629:	83 ec 10             	sub    $0x10,%esp
 817b62c:	8b 45 08             	mov    0x8(%ebp),%eax
 817b62f:	8b 40 14             	mov    0x14(%eax),%eax
 817b632:	85 c0                	test   %eax,%eax
 817b634:	74 18                	je     817b64e <_ZN11Arad_ScriptD1Ev+0x2a>
 817b636:	8b 45 08             	mov    0x8(%ebp),%eax
 817b639:	8b 40 14             	mov    0x14(%eax),%eax
 817b63c:	85 c0                	test   %eax,%eax
 817b63e:	74 0e                	je     817b64e <_ZN11Arad_ScriptD1Ev+0x2a>
 817b640:	8b 45 08             	mov    0x8(%ebp),%eax
 817b643:	8b 40 14             	mov    0x14(%eax),%eax
 817b646:	89 04 24             	mov    %eax,(%esp)
 817b649:	e8 62 95 5a 00       	call   8724bb0 <_ZdaPv>
 817b64e:	8b 45 08             	mov    0x8(%ebp),%eax
 817b651:	83 c0 3c             	add    $0x3c,%eax
 817b654:	89 04 24             	mov    %eax,(%esp)
 817b657:	e8 7a 15 00 00       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 817b65c:	eb 18                	jmp    817b676 <_ZN11Arad_ScriptD1Ev+0x52>
 817b65e:	89 d3                	mov    %edx,%ebx
 817b660:	89 c6                	mov    %eax,%esi
 817b662:	8b 45 08             	mov    0x8(%ebp),%eax
 817b665:	83 c0 24             	add    $0x24,%eax
 817b668:	89 04 24             	mov    %eax,(%esp)
 817b66b:	e8 66 15 00 00       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 817b670:	89 f0                	mov    %esi,%eax
 817b672:	89 da                	mov    %ebx,%edx
 817b674:	eb 10                	jmp    817b686 <_ZN11Arad_ScriptD1Ev+0x62>
 817b676:	8b 45 08             	mov    0x8(%ebp),%eax
 817b679:	83 c0 24             	add    $0x24,%eax
 817b67c:	89 04 24             	mov    %eax,(%esp)
 817b67f:	e8 52 15 00 00       	call   817cbd6 <_ZNSt3mapISsiSt4lessISsESaISt4pairIKSsiEEED1Ev>
 817b684:	eb 18                	jmp    817b69e <_ZN11Arad_ScriptD1Ev+0x7a>
 817b686:	89 d3                	mov    %edx,%ebx
 817b688:	89 c6                	mov    %eax,%esi
 817b68a:	8b 45 08             	mov    0x8(%ebp),%eax
 817b68d:	83 c0 20             	add    $0x20,%eax
 817b690:	89 04 24             	mov    %eax,(%esp)
 817b693:	e8 48 c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b698:	89 f0                	mov    %esi,%eax
 817b69a:	89 da                	mov    %ebx,%edx
 817b69c:	eb 10                	jmp    817b6ae <_ZN11Arad_ScriptD1Ev+0x8a>
 817b69e:	8b 45 08             	mov    0x8(%ebp),%eax
 817b6a1:	83 c0 20             	add    $0x20,%eax
 817b6a4:	89 04 24             	mov    %eax,(%esp)
 817b6a7:	e8 34 c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b6ac:	eb 18                	jmp    817b6c6 <_ZN11Arad_ScriptD1Ev+0xa2>
 817b6ae:	89 d3                	mov    %edx,%ebx
 817b6b0:	89 c6                	mov    %eax,%esi
 817b6b2:	8b 45 08             	mov    0x8(%ebp),%eax
 817b6b5:	83 c0 1c             	add    $0x1c,%eax
 817b6b8:	89 04 24             	mov    %eax,(%esp)
 817b6bb:	e8 20 c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b6c0:	89 f0                	mov    %esi,%eax
 817b6c2:	89 da                	mov    %ebx,%edx
 817b6c4:	eb 10                	jmp    817b6d6 <_ZN11Arad_ScriptD1Ev+0xb2>
 817b6c6:	8b 45 08             	mov    0x8(%ebp),%eax
 817b6c9:	83 c0 1c             	add    $0x1c,%eax
 817b6cc:	89 04 24             	mov    %eax,(%esp)
 817b6cf:	e8 0c c5 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b6d4:	eb 1e                	jmp    817b6f4 <_ZN11Arad_ScriptD1Ev+0xd0>
 817b6d6:	89 d3                	mov    %edx,%ebx
 817b6d8:	89 c6                	mov    %eax,%esi
 817b6da:	8b 45 08             	mov    0x8(%ebp),%eax
 817b6dd:	83 c0 18             	add    $0x18,%eax
 817b6e0:	89 04 24             	mov    %eax,(%esp)
 817b6e3:	e8 f8 c4 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b6e8:	89 f0                	mov    %esi,%eax
 817b6ea:	89 da                	mov    %ebx,%edx
 817b6ec:	89 04 24             	mov    %eax,(%esp)
 817b6ef:	e8 5c 80 96 00       	call   8ae3750 <_Unwind_Resume>
 817b6f4:	8b 45 08             	mov    0x8(%ebp),%eax
 817b6f7:	83 c0 18             	add    $0x18,%eax
 817b6fa:	89 04 24             	mov    %eax,(%esp)
 817b6fd:	e8 de c4 58 00       	call   8707be0 <_ZNSsD1Ev>
 817b702:	83 c4 10             	add    $0x10,%esp
 817b705:	5b                   	pop    %ebx
 817b706:	5e                   	pop    %esi
 817b707:	5d                   	pop    %ebp
 817b708:	c3                   	ret
 817b709:	90                   	nop

```

```c
// Arad_Script::~Arad_Script @ 0x817b624

/* Arad_Script::~Arad_Script() */

void __thiscall Arad_Script::~Arad_Script(Arad_Script *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x14) != 0)) {
    operator_delete__(*(void **)(this + 0x14));
  }
                    /* try { // try from 0817b657 to 0817b65b has its CatchHandler @ 0817b65e */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x3c));
                    /* try { // try from 0817b67f to 0817b683 has its CatchHandler @ 0817b686 */
  std::map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::~map((map<std::string,int,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
          *)(this + 0x24));
                    /* try { // try from 0817b6a7 to 0817b6ab has its CatchHandler @ 0817b6ae */
  std::string::~string((string *)(this + 0x20));
                    /* try { // try from 0817b6cf to 0817b6d3 has its CatchHandler @ 0817b6d6 */
  std::string::~string((string *)(this + 0x1c));
  std::string::~string((string *)(this + 0x18));
  return;
}

```

