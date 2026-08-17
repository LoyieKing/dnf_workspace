# NpcMovieData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## NpcMovieData

```asm
// === 089fb78e NpcMovieData::NpcMovieData  [0x089fb78e-0x89fb7cf] ===
 89fb78e:	55                   	push   %ebp
 89fb78f:	89 e5                	mov    %esp,%ebp
 89fb791:	56                   	push   %esi
 89fb792:	53                   	push   %ebx
 89fb793:	83 ec 10             	sub    $0x10,%esp
 89fb796:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb799:	89 04 24             	mov    %eax,(%esp)
 89fb79c:	e8 cd 5c 00 00       	call   8a0146e <_ZNSt5dequeISsSaISsEEC1Ev>
 89fb7a1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb7a4:	89 04 24             	mov    %eax,(%esp)
 89fb7a7:	e8 24 00 00 00       	call   89fb7d0 <_ZN12NpcMovieData5clearEv>
 89fb7ac:	eb 1b                	jmp    89fb7c9 <_ZN12NpcMovieDataC1Ev+0x3b>
 89fb7ae:	89 d3                	mov    %edx,%ebx
 89fb7b0:	89 c6                	mov    %eax,%esi
 89fb7b2:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb7b5:	89 04 24             	mov    %eax,(%esp)
 89fb7b8:	e8 e3 70 b8 ff       	call   85828a0 <_ZNSt5dequeISsSaISsEED1Ev>
 89fb7bd:	89 f0                	mov    %esi,%eax
 89fb7bf:	89 da                	mov    %ebx,%edx
 89fb7c1:	89 04 24             	mov    %eax,(%esp)
 89fb7c4:	e8 87 7f 0e 00       	call   8ae3750 <_Unwind_Resume>
 89fb7c9:	83 c4 10             	add    $0x10,%esp
 89fb7cc:	5b                   	pop    %ebx
 89fb7cd:	5e                   	pop    %esi
 89fb7ce:	5d                   	pop    %ebp
 89fb7cf:	c3                   	ret

```

```c
// NpcMovieData::NpcMovieData @ 0x89fb78e

/* NpcMovieData::NpcMovieData() */

void __thiscall NpcMovieData::NpcMovieData(NpcMovieData *this)

{
  std::deque<std::string,std::allocator<std::string>>::deque
            ((deque<std::string,std::allocator<std::string>> *)this);
                    /* try { // try from 089fb7a7 to 089fb7ab has its CatchHandler @ 089fb7ae */
  clear(this);
  return;
}

```

---

## clear

```asm
// === 089fb7d0 NpcMovieData::clear  [0x089fb7d0-0x89fb7ed] ===
 89fb7d0:	55                   	push   %ebp
 89fb7d1:	89 e5                	mov    %esp,%ebp
 89fb7d3:	83 ec 18             	sub    $0x18,%esp
 89fb7d6:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb7d9:	89 04 24             	mov    %eax,(%esp)
 89fb7dc:	e8 a1 5c 00 00       	call   8a01482 <_ZNSt5dequeISsSaISsEE5clearEv>
 89fb7e1:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb7e4:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 89fb7eb:	c9                   	leave
 89fb7ec:	c3                   	ret
 89fb7ed:	90                   	nop

```

```c
// NpcMovieData::clear @ 0x89fb7d0

/* NpcMovieData::clear() */

void __thiscall NpcMovieData::clear(NpcMovieData *this)

{
  std::deque<std::string,std::allocator<std::string>>::clear
            ((deque<std::string,std::allocator<std::string>> *)this);
  *(undefined4 *)(this + 0x28) = 0;
  return;
}

```

---

## getNextMoviePath

```asm
// === 089fb7ee NpcMovieData::getNextMoviePath  [0x089fb7ee-0x89fb8b5] ===
 89fb7ee:	55                   	push   %ebp
 89fb7ef:	89 e5                	mov    %esp,%ebp
 89fb7f1:	57                   	push   %edi
 89fb7f2:	56                   	push   %esi
 89fb7f3:	53                   	push   %ebx
 89fb7f4:	83 ec 2c             	sub    $0x2c,%esp
 89fb7f7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 89fb7fa:	89 d8                	mov    %ebx,%eax
 89fb7fc:	89 04 24             	mov    %eax,(%esp)
 89fb7ff:	e8 cc ad d0 ff       	call   87065d0 <_ZNSsC1Ev>
 89fb804:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb807:	89 04 24             	mov    %eax,(%esp)
 89fb80a:	e8 a3 5c 00 00       	call   8a014b2 <_ZNKSt5dequeISsSaISsEE5emptyEv>
 89fb80f:	84 c0                	test   %al,%al
 89fb811:	0f 85 8c 00 00 00    	jne    89fb8a3 <_ZN12NpcMovieData16getNextMoviePathEv+0xb5>
 89fb817:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb81a:	89 04 24             	mov    %eax,(%esp)
 89fb81d:	e8 b0 5c 00 00       	call   8a014d2 <_ZNKSt5dequeISsSaISsEE4sizeEv>
 89fb822:	89 c2                	mov    %eax,%edx
 89fb824:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb827:	8b 40 28             	mov    0x28(%eax),%eax
 89fb82a:	39 c2                	cmp    %eax,%edx
 89fb82c:	0f 9f c0             	setg   %al
 89fb82f:	84 c0                	test   %al,%al
 89fb831:	74 73                	je     89fb8a6 <_ZN12NpcMovieData16getNextMoviePathEv+0xb8>
 89fb833:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb836:	8b 40 28             	mov    0x28(%eax),%eax
 89fb839:	89 c2                	mov    %eax,%edx
 89fb83b:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb83e:	89 54 24 04          	mov    %edx,0x4(%esp)
 89fb842:	89 04 24             	mov    %eax,(%esp)
 89fb845:	e8 a8 5c 00 00       	call   8a014f2 <_ZNSt5dequeISsSaISsEEixEj>
 89fb84a:	89 da                	mov    %ebx,%edx
 89fb84c:	89 44 24 04          	mov    %eax,0x4(%esp)
 89fb850:	89 14 24             	mov    %edx,(%esp)
 89fb853:	e8 a8 c4 d0 ff       	call   8707d00 <_ZNSsaSERKSs>
 89fb858:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb85b:	8b 40 28             	mov    0x28(%eax),%eax
 89fb85e:	83 c0 01             	add    $0x1,%eax
 89fb861:	89 c6                	mov    %eax,%esi
 89fb863:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb866:	89 04 24             	mov    %eax,(%esp)
 89fb869:	e8 64 5c 00 00       	call   8a014d2 <_ZNKSt5dequeISsSaISsEE4sizeEv>
 89fb86e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 89fb871:	89 f0                	mov    %esi,%eax
 89fb873:	ba 00 00 00 00       	mov    $0x0,%edx
 89fb878:	f7 75 e4             	divl   -0x1c(%ebp)
 89fb87b:	89 d1                	mov    %edx,%ecx
 89fb87d:	89 c8                	mov    %ecx,%eax
 89fb87f:	89 c2                	mov    %eax,%edx
 89fb881:	8b 45 0c             	mov    0xc(%ebp),%eax
 89fb884:	89 50 28             	mov    %edx,0x28(%eax)
 89fb887:	eb 1e                	jmp    89fb8a7 <_ZN12NpcMovieData16getNextMoviePathEv+0xb9>
 89fb889:	89 d6                	mov    %edx,%esi
 89fb88b:	89 c7                	mov    %eax,%edi
 89fb88d:	89 d8                	mov    %ebx,%eax
 89fb88f:	89 04 24             	mov    %eax,(%esp)
 89fb892:	e8 49 c3 d0 ff       	call   8707be0 <_ZNSsD1Ev>
 89fb897:	89 f8                	mov    %edi,%eax
 89fb899:	89 f2                	mov    %esi,%edx
 89fb89b:	89 04 24             	mov    %eax,(%esp)
 89fb89e:	e8 ad 7e 0e 00       	call   8ae3750 <_Unwind_Resume>
 89fb8a3:	90                   	nop
 89fb8a4:	eb 01                	jmp    89fb8a7 <_ZN12NpcMovieData16getNextMoviePathEv+0xb9>
 89fb8a6:	90                   	nop
 89fb8a7:	89 d8                	mov    %ebx,%eax
 89fb8a9:	89 d8                	mov    %ebx,%eax
 89fb8ab:	83 c4 2c             	add    $0x2c,%esp
 89fb8ae:	5b                   	pop    %ebx
 89fb8af:	5e                   	pop    %esi
 89fb8b0:	5f                   	pop    %edi
 89fb8b1:	5d                   	pop    %ebp
 89fb8b2:	c2 04 00             	ret    $0x4
 89fb8b5:	90                   	nop

```

```c
// NpcMovieData::getNextMoviePath @ 0x89fb7ee

/* NpcMovieData::getNextMoviePath() */

string * NpcMovieData::getNextMoviePath(void)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  uint uVar4;
  string *in_stack_00000004;
  deque<std::string,std::allocator<std::string>> *in_stack_00000008;
  
  std::string::string(in_stack_00000004);
                    /* try { // try from 089fb80a to 089fb86d has its CatchHandler @ 089fb889 */
  cVar1 = std::deque<std::string,std::allocator<std::string>>::empty(in_stack_00000008);
  if ((cVar1 == '\0') &&
     (iVar2 = std::deque<std::string,std::allocator<std::string>>::size(in_stack_00000008),
     *(int *)(in_stack_00000008 + 0x28) < iVar2)) {
    psVar3 = (string *)
             std::deque<std::string,std::allocator<std::string>>::operator[]
                       ((uint)in_stack_00000008);
    std::string::operator=(in_stack_00000004,psVar3);
    iVar2 = *(int *)(in_stack_00000008 + 0x28);
    uVar4 = std::deque<std::string,std::allocator<std::string>>::size(in_stack_00000008);
    *(uint *)(in_stack_00000008 + 0x28) = (iVar2 + 1U) % uVar4;
  }
  return in_stack_00000004;
}

```

