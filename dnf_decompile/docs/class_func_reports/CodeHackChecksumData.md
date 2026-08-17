# CodeHackChecksumData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddCodeHackChecksum

```asm
// === 0808a648 CodeHackChecksumData::AddCodeHackChecksum  [0x0808a648-0x808a661] ===
 808a648:	55                   	push   %ebp
 808a649:	89 e5                	mov    %esp,%ebp
 808a64b:	83 ec 18             	sub    $0x18,%esp
 808a64e:	8b 45 08             	mov    0x8(%ebp),%eax
 808a651:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a654:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a658:	89 04 24             	mov    %eax,(%esp)
 808a65b:	e8 2c 08 00 00       	call   808ae8c <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE9push_backERKS0_>
 808a660:	c9                   	leave
 808a661:	c3                   	ret

```

```c
// CodeHackChecksumData::AddCodeHackChecksum @ 0x808a648

/* CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&) */

void __thiscall
CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksumData *this,CodeHackChecksum *param_1)

{
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::push_back
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this,param_1);
  return;
}

```

---

## Clear

```asm
// === 0808a61a CodeHackChecksumData::Clear  [0x0808a61a-0x808a62d] ===
 808a61a:	55                   	push   %ebp
 808a61b:	89 e5                	mov    %esp,%ebp
 808a61d:	83 ec 18             	sub    $0x18,%esp
 808a620:	8b 45 08             	mov    0x8(%ebp),%eax
 808a623:	89 04 24             	mov    %eax,(%esp)
 808a626:	e8 21 07 00 00       	call   808ad4c <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE5clearEv>
 808a62b:	c9                   	leave
 808a62c:	c3                   	ret
 808a62d:	90                   	nop

```

```c
// CodeHackChecksumData::Clear @ 0x808a61a

/* CodeHackChecksumData::Clear() */

void __thiscall CodeHackChecksumData::Clear(CodeHackChecksumData *this)

{
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::clear
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this);
  return;
}

```

---

## IsRightChecksum

```asm
// === 0808a662 CodeHackChecksumData::IsRightChecksum  [0x0808a662-0x808a6ff] ===
 808a662:	55                   	push   %ebp
 808a663:	89 e5                	mov    %esp,%ebp
 808a665:	83 ec 38             	sub    $0x38,%esp
 808a668:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a66b:	89 04 24             	mov    %eax,(%esp)
 808a66e:	e8 8d 08 00 00       	call   808af00 <_ZN9__gnu_cxx17__normal_iteratorIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEC1Ev>
 808a673:	8b 55 08             	mov    0x8(%ebp),%edx
 808a676:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 808a679:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a67d:	89 04 24             	mov    %eax,(%esp)
 808a680:	e8 89 08 00 00       	call   808af0e <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE5beginEv>
 808a685:	83 ec 04             	sub    $0x4,%esp
 808a688:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808a68b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808a68e:	eb 3e                	jmp    808a6ce <_ZN20CodeHackChecksumData15IsRightChecksumEPK16CodeHackChecksum+0x6c>
 808a690:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a693:	89 04 24             	mov    %eax,(%esp)
 808a696:	e8 ff 08 00 00       	call   808af9a <_ZNK9__gnu_cxx17__normal_iteratorIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEdeEv>
 808a69b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808a69e:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a6a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a6a4:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 808a6ab:	00 
 808a6ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a6b0:	89 04 24             	mov    %eax,(%esp)
 808a6b3:	e8 d8 35 ff ff       	call   807dc90 <memcmp@plt>
 808a6b8:	85 c0                	test   %eax,%eax
 808a6ba:	75 07                	jne    808a6c3 <_ZN20CodeHackChecksumData15IsRightChecksumEPK16CodeHackChecksum+0x61>
 808a6bc:	b8 01 00 00 00       	mov    $0x1,%eax
 808a6c1:	eb 3b                	jmp    808a6fe <_ZN20CodeHackChecksumData15IsRightChecksumEPK16CodeHackChecksum+0x9c>
 808a6c3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a6c6:	89 04 24             	mov    %eax,(%esp)
 808a6c9:	e8 b6 08 00 00       	call   808af84 <_ZN9__gnu_cxx17__normal_iteratorIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEppEv>
 808a6ce:	8b 55 08             	mov    0x8(%ebp),%edx
 808a6d1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 808a6d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a6d8:	89 04 24             	mov    %eax,(%esp)
 808a6db:	e8 52 08 00 00       	call   808af32 <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE3endEv>
 808a6e0:	83 ec 04             	sub    $0x4,%esp
 808a6e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 808a6e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a6ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a6ed:	89 04 24             	mov    %eax,(%esp)
 808a6f0:	e8 63 08 00 00       	call   808af58 <_ZN9__gnu_cxxneIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 808a6f5:	84 c0                	test   %al,%al
 808a6f7:	75 97                	jne    808a690 <_ZN20CodeHackChecksumData15IsRightChecksumEPK16CodeHackChecksum+0x2e>
 808a6f9:	b8 00 00 00 00       	mov    $0x0,%eax
 808a6fe:	c9                   	leave
 808a6ff:	c3                   	ret

```

```c
// CodeHackChecksumData::IsRightChecksum @ 0x808a662

/* CodeHackChecksumData::IsRightChecksum(CodeHackChecksum const*) */

undefined4 __thiscall
CodeHackChecksumData::IsRightChecksum(CodeHackChecksumData *this,CodeHackChecksum *param_1)

{
  bool bVar1;
  int iVar2;
  __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  void *local_10;
  
  __gnu_cxx::
  __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
  ::__normal_iterator(local_18);
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::begin();
  while( true ) {
    std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    local_10 = (void *)__gnu_cxx::
                       __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
                       ::operator*(local_18);
    iVar2 = memcmp(local_10,param_1,0x20);
    if (iVar2 == 0) break;
    __gnu_cxx::
    __normal_iterator<CodeHackChecksum*,std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>>
    ::operator++(local_18);
  }
  return 1;
}

```

---

## Reserve

```asm
// === 0808a62e CodeHackChecksumData::Reserve  [0x0808a62e-0x808a647] ===
 808a62e:	55                   	push   %ebp
 808a62f:	89 e5                	mov    %esp,%ebp
 808a631:	83 ec 18             	sub    $0x18,%esp
 808a634:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a637:	8b 45 08             	mov    0x8(%ebp),%eax
 808a63a:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a63e:	89 04 24             	mov    %eax,(%esp)
 808a641:	e8 22 07 00 00       	call   808ad68 <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE7reserveEj>
 808a646:	c9                   	leave
 808a647:	c3                   	ret

```

```c
// CodeHackChecksumData::Reserve @ 0x808a62e

/* CodeHackChecksumData::Reserve(long) */

void __thiscall CodeHackChecksumData::Reserve(CodeHackChecksumData *this,long param_1)

{
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::reserve
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this,param_1);
  return;
}

```

