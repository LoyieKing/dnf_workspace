# CodeHackChecksumEx

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CodeHackChecksumEx

```asm
// === 0808a700 CodeHackChecksumEx::CodeHackChecksumEx  [0x0808a700-0x808a76b] ===
 808a700:	55                   	push   %ebp
 808a701:	89 e5                	mov    %esp,%ebp
 808a703:	83 ec 18             	sub    $0x18,%esp
 808a706:	8b 45 08             	mov    0x8(%ebp),%eax
 808a709:	89 04 24             	mov    %eax,(%esp)
 808a70c:	e8 73 05 00 00       	call   808ac84 <_ZN20CodeHackChecksumDataC1Ev>
 808a711:	8b 45 08             	mov    0x8(%ebp),%eax
 808a714:	83 c0 0c             	add    $0xc,%eax
 808a717:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 808a71e:	00 
 808a71f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 808a726:	00 
 808a727:	89 04 24             	mov    %eax,(%esp)
 808a72a:	e8 91 35 ff ff       	call   807dcc0 <memset@plt>
 808a72f:	8b 45 08             	mov    0x8(%ebp),%eax
 808a732:	05 10 01 00 00       	add    $0x110,%eax
 808a737:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 808a73e:	00 
 808a73f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 808a746:	00 
 808a747:	89 04 24             	mov    %eax,(%esp)
 808a74a:	e8 71 35 ff ff       	call   807dcc0 <memset@plt>
 808a74f:	8b 45 08             	mov    0x8(%ebp),%eax
 808a752:	c7 80 14 01 00 00 00 	movl   $0x0,0x114(%eax)
 808a759:	00 00 00 
 808a75c:	8b 45 08             	mov    0x8(%ebp),%eax
 808a75f:	c7 80 10 01 00 00 00 	movl   $0x0,0x110(%eax)
 808a766:	00 00 00 
 808a769:	c9                   	leave
 808a76a:	c3                   	ret
 808a76b:	90                   	nop

```

```c
// CodeHackChecksumEx::CodeHackChecksumEx @ 0x808a700

/* CodeHackChecksumEx::CodeHackChecksumEx() */

void __thiscall CodeHackChecksumEx::CodeHackChecksumEx(CodeHackChecksumEx *this)

{
  CodeHackChecksumData::CodeHackChecksumData((CodeHackChecksumData *)this);
  memset(this + 0xc,0,0x104);
  memset(this + 0x110,0,8);
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  return;
}

```

---

## GetCodeHackCheckRange

```asm
// === 0808a7f4 CodeHackChecksumEx::GetCodeHackCheckRange  [0x0808a7f4-0x808a801] ===
 808a7f4:	55                   	push   %ebp
 808a7f5:	89 e5                	mov    %esp,%ebp
 808a7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 808a7fa:	05 10 01 00 00       	add    $0x110,%eax
 808a7ff:	5d                   	pop    %ebp
 808a800:	c3                   	ret
 808a801:	90                   	nop

```

```c
// CodeHackChecksumEx::GetCodeHackCheckRange @ 0x808a7f4

/* CodeHackChecksumEx::GetCodeHackCheckRange() */

CodeHackChecksumEx * __thiscall CodeHackChecksumEx::GetCodeHackCheckRange(CodeHackChecksumEx *this)

{
  return this + 0x110;
}

```

---

## GetFileName

```asm
// === 0808a7cc CodeHackChecksumEx::GetFileName  [0x0808a7cc-0x808a7d7] ===
 808a7cc:	55                   	push   %ebp
 808a7cd:	89 e5                	mov    %esp,%ebp
 808a7cf:	8b 45 08             	mov    0x8(%ebp),%eax
 808a7d2:	83 c0 0c             	add    $0xc,%eax
 808a7d5:	5d                   	pop    %ebp
 808a7d6:	c3                   	ret
 808a7d7:	90                   	nop

```

```c
// CodeHackChecksumEx::GetFileName @ 0x808a7cc

/* CodeHackChecksumEx::GetFileName() */

CodeHackChecksumEx * __thiscall CodeHackChecksumEx::GetFileName(CodeHackChecksumEx *this)

{
  return this + 0xc;
}

```

---

## IsRightChecksum

```asm
// === 0808a8c8 CodeHackChecksumEx::IsRightChecksum  [0x0808a8c8-0x808a965] ===
 808a8c8:	55                   	push   %ebp
 808a8c9:	89 e5                	mov    %esp,%ebp
 808a8cb:	83 ec 38             	sub    $0x38,%esp
 808a8ce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a8d1:	89 04 24             	mov    %eax,(%esp)
 808a8d4:	e8 27 06 00 00       	call   808af00 <_ZN9__gnu_cxx17__normal_iteratorIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEC1Ev>
 808a8d9:	8b 55 08             	mov    0x8(%ebp),%edx
 808a8dc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 808a8df:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a8e3:	89 04 24             	mov    %eax,(%esp)
 808a8e6:	e8 23 06 00 00       	call   808af0e <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE5beginEv>
 808a8eb:	83 ec 04             	sub    $0x4,%esp
 808a8ee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 808a8f1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808a8f4:	eb 3e                	jmp    808a934 <_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum+0x6c>
 808a8f6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a8f9:	89 04 24             	mov    %eax,(%esp)
 808a8fc:	e8 99 06 00 00       	call   808af9a <_ZNK9__gnu_cxx17__normal_iteratorIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEdeEv>
 808a901:	89 45 f4             	mov    %eax,-0xc(%ebp)
 808a904:	8b 55 0c             	mov    0xc(%ebp),%edx
 808a907:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a90a:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 808a911:	00 
 808a912:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a916:	89 04 24             	mov    %eax,(%esp)
 808a919:	e8 72 33 ff ff       	call   807dc90 <memcmp@plt>
 808a91e:	85 c0                	test   %eax,%eax
 808a920:	75 07                	jne    808a929 <_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum+0x61>
 808a922:	b8 01 00 00 00       	mov    $0x1,%eax
 808a927:	eb 3b                	jmp    808a964 <_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum+0x9c>
 808a929:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a92c:	89 04 24             	mov    %eax,(%esp)
 808a92f:	e8 50 06 00 00       	call   808af84 <_ZN9__gnu_cxx17__normal_iteratorIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEppEv>
 808a934:	8b 55 08             	mov    0x8(%ebp),%edx
 808a937:	8d 45 f0             	lea    -0x10(%ebp),%eax
 808a93a:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a93e:	89 04 24             	mov    %eax,(%esp)
 808a941:	e8 ec 05 00 00       	call   808af32 <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE3endEv>
 808a946:	83 ec 04             	sub    $0x4,%esp
 808a949:	8d 45 f0             	lea    -0x10(%ebp),%eax
 808a94c:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a950:	8d 45 ec             	lea    -0x14(%ebp),%eax
 808a953:	89 04 24             	mov    %eax,(%esp)
 808a956:	e8 fd 05 00 00       	call   808af58 <_ZN9__gnu_cxxneIP16CodeHackChecksumSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 808a95b:	84 c0                	test   %al,%al
 808a95d:	75 97                	jne    808a8f6 <_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum+0x2e>
 808a95f:	b8 00 00 00 00       	mov    $0x0,%eax
 808a964:	c9                   	leave
 808a965:	c3                   	ret

```

```c
// CodeHackChecksumEx::IsRightChecksum @ 0x808a8c8

/* CodeHackChecksumEx::IsRightChecksum(CodeHackChecksum const*) */

undefined4 __thiscall
CodeHackChecksumEx::IsRightChecksum(CodeHackChecksumEx *this,CodeHackChecksum *param_1)

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

## SetCodeHackCheckRange

```asm
// === 0808a7d8 CodeHackChecksumEx::SetCodeHackCheckRange  [0x0808a7d8-0x808a7f3] ===
 808a7d8:	55                   	push   %ebp
 808a7d9:	89 e5                	mov    %esp,%ebp
 808a7db:	8b 4d 08             	mov    0x8(%ebp),%ecx
 808a7de:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a7e1:	8b 50 04             	mov    0x4(%eax),%edx
 808a7e4:	8b 00                	mov    (%eax),%eax
 808a7e6:	89 81 10 01 00 00    	mov    %eax,0x110(%ecx)
 808a7ec:	89 91 14 01 00 00    	mov    %edx,0x114(%ecx)
 808a7f2:	5d                   	pop    %ebp
 808a7f3:	c3                   	ret

```

```c
// CodeHackChecksumEx::SetCodeHackCheckRange @ 0x808a7d8

/* CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackCheckRange const&) */

void __thiscall
CodeHackChecksumEx::SetCodeHackCheckRange(CodeHackChecksumEx *this,CodeHackCheckRange *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x110) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x114) = uVar1;
  return;
}

```

---

## SetFileName

```asm
// === 0808a7ae CodeHackChecksumEx::SetFileName  [0x0808a7ae-0x808a7cb] ===
 808a7ae:	55                   	push   %ebp
 808a7af:	89 e5                	mov    %esp,%ebp
 808a7b1:	83 ec 18             	sub    $0x18,%esp
 808a7b4:	8b 45 08             	mov    0x8(%ebp),%eax
 808a7b7:	8d 50 0c             	lea    0xc(%eax),%edx
 808a7ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a7bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a7c1:	89 14 24             	mov    %edx,(%esp)
 808a7c4:	e8 14 fe ff ff       	call   808a5dd <_Z13StrCpyMaxPathPcPKc>
 808a7c9:	c9                   	leave
 808a7ca:	c3                   	ret
 808a7cb:	90                   	nop

```

```c
// CodeHackChecksumEx::SetFileName @ 0x808a7ae

/* CodeHackChecksumEx::SetFileName(char const*) */

void __thiscall CodeHackChecksumEx::SetFileName(CodeHackChecksumEx *this,char *param_1)

{
  StrCpyMaxPath((char *)(this + 0xc),param_1);
  return;
}

```

---

## setData

```asm
// === 0808a802 CodeHackChecksumEx::setData  [0x0808a802-0x808a8c7] ===
 808a802:	55                   	push   %ebp
 808a803:	89 e5                	mov    %esp,%ebp
 808a805:	53                   	push   %ebx
 808a806:	83 ec 44             	sub    $0x44,%esp
 808a809:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a80c:	0f b6 00             	movzbl (%eax),%eax
 808a80f:	0f be c0             	movsbl %al,%eax
 808a812:	89 45 ec             	mov    %eax,-0x14(%ebp)
 808a815:	83 45 0c 04          	addl   $0x4,0xc(%ebp)
 808a819:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 808a81c:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a81f:	89 04 24             	mov    %eax,(%esp)
 808a822:	e8 4e 43 a5 00       	call   8adeb75 <_Z9toTStringPKc>
 808a827:	8b 55 08             	mov    0x8(%ebp),%edx
 808a82a:	83 c2 0c             	add    $0xc,%edx
 808a82d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 808a831:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a835:	89 14 24             	mov    %edx,(%esp)
 808a838:	e8 93 30 ff ff       	call   807d8d0 <strncpy@plt>
 808a83d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 808a840:	01 45 0c             	add    %eax,0xc(%ebp)
 808a843:	8b 45 08             	mov    0x8(%ebp),%eax
 808a846:	8d 90 10 01 00 00    	lea    0x110(%eax),%edx
 808a84c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 808a853:	00 
 808a854:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a857:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a85b:	89 14 24             	mov    %edx,(%esp)
 808a85e:	e8 3d 30 ff ff       	call   807d8a0 <memcpy@plt>
 808a863:	83 45 0c 08          	addl   $0x8,0xc(%ebp)
 808a867:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a86a:	0f b6 00             	movzbl (%eax),%eax
 808a86d:	0f be c0             	movsbl %al,%eax
 808a870:	89 45 f0             	mov    %eax,-0x10(%ebp)
 808a873:	83 45 0c 04          	addl   $0x4,0xc(%ebp)
 808a877:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 808a87e:	eb 34                	jmp    808a8b4 <_ZN18CodeHackChecksumEx7setDataEPKc+0xb2>
 808a880:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 808a887:	00 
 808a888:	8b 45 0c             	mov    0xc(%ebp),%eax
 808a88b:	89 44 24 04          	mov    %eax,0x4(%esp)
 808a88f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 808a892:	89 04 24             	mov    %eax,(%esp)
 808a895:	e8 06 30 ff ff       	call   807d8a0 <memcpy@plt>
 808a89a:	83 45 0c 20          	addl   $0x20,0xc(%ebp)
 808a89e:	8b 45 08             	mov    0x8(%ebp),%eax
 808a8a1:	8d 55 cc             	lea    -0x34(%ebp),%edx
 808a8a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 808a8a8:	89 04 24             	mov    %eax,(%esp)
 808a8ab:	e8 98 fd ff ff       	call   808a648 <_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum>
 808a8b0:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 808a8b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 808a8b7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 808a8ba:	0f 9c c0             	setl   %al
 808a8bd:	84 c0                	test   %al,%al
 808a8bf:	75 bf                	jne    808a880 <_ZN18CodeHackChecksumEx7setDataEPKc+0x7e>
 808a8c1:	83 c4 44             	add    $0x44,%esp
 808a8c4:	5b                   	pop    %ebx
 808a8c5:	5d                   	pop    %ebp
 808a8c6:	c3                   	ret
 808a8c7:	90                   	nop

```

```c
// CodeHackChecksumEx::setData @ 0x808a802

/* CodeHackChecksumEx::setData(char const*) */

void __thiscall CodeHackChecksumEx::setData(CodeHackChecksumEx *this,char *param_1)

{
  char *__src;
  char cVar1;
  TCHAR *__src_00;
  CodeHackChecksum local_38 [32];
  size_t local_18;
  int local_14;
  int local_10;
  
  cVar1 = *param_1;
  local_18 = (int)cVar1;
  __src_00 = toTString(param_1 + 4);
  strncpy((char *)(this + 0xc),__src_00,(int)cVar1);
  __src = param_1 + 4 + local_18;
  memcpy(this + 0x110,__src,8);
  local_14 = (int)__src[8];
  param_1 = __src + 0xc;
  for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
    memcpy(local_38,param_1,0x20);
    param_1 = param_1 + 0x20;
    CodeHackChecksumData::AddCodeHackChecksum((CodeHackChecksumData *)this,local_38);
  }
  return;
}

```

---

## ~CodeHackChecksumEx

```asm
// === 0808a76c CodeHackChecksumEx::~CodeHackChecksumEx  [0x0808a76c-0x808a7ad] ===
 808a76c:	55                   	push   %ebp
 808a76d:	89 e5                	mov    %esp,%ebp
 808a76f:	56                   	push   %esi
 808a770:	53                   	push   %ebx
 808a771:	83 ec 10             	sub    $0x10,%esp
 808a774:	8b 45 08             	mov    0x8(%ebp),%eax
 808a777:	89 04 24             	mov    %eax,(%esp)
 808a77a:	e8 cd 05 00 00       	call   808ad4c <_ZNSt6vectorI16CodeHackChecksumSaIS0_EE5clearEv>
 808a77f:	eb 1b                	jmp    808a79c <_ZN18CodeHackChecksumExD1Ev+0x30>
 808a781:	89 d3                	mov    %edx,%ebx
 808a783:	89 c6                	mov    %eax,%esi
 808a785:	8b 45 08             	mov    0x8(%ebp),%eax
 808a788:	89 04 24             	mov    %eax,(%esp)
 808a78b:	e8 08 05 00 00       	call   808ac98 <_ZN20CodeHackChecksumDataD1Ev>
 808a790:	89 f0                	mov    %esi,%eax
 808a792:	89 da                	mov    %ebx,%edx
 808a794:	89 04 24             	mov    %eax,(%esp)
 808a797:	e8 b4 8f a5 00       	call   8ae3750 <_Unwind_Resume>
 808a79c:	8b 45 08             	mov    0x8(%ebp),%eax
 808a79f:	89 04 24             	mov    %eax,(%esp)
 808a7a2:	e8 f1 04 00 00       	call   808ac98 <_ZN20CodeHackChecksumDataD1Ev>
 808a7a7:	83 c4 10             	add    $0x10,%esp
 808a7aa:	5b                   	pop    %ebx
 808a7ab:	5e                   	pop    %esi
 808a7ac:	5d                   	pop    %ebp
 808a7ad:	c3                   	ret

```

```c
// CodeHackChecksumEx::~CodeHackChecksumEx @ 0x808a76c

/* CodeHackChecksumEx::~CodeHackChecksumEx() */

void __thiscall CodeHackChecksumEx::~CodeHackChecksumEx(CodeHackChecksumEx *this)

{
                    /* try { // try from 0808a77a to 0808a77e has its CatchHandler @ 0808a781 */
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::clear
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this);
  CodeHackChecksumData::~CodeHackChecksumData((CodeHackChecksumData *)this);
  return;
}

```

