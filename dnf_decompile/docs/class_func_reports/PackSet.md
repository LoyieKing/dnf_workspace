# PackSet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 30

---

## PackSet

```asm
// === 08ac47f4 PackSet::PackSet  [0x08ac47f4-0x8ac4861] ===
 8ac47f4:	55                   	push   %ebp
 8ac47f5:	89 e5                	mov    %esp,%ebp
 8ac47f7:	56                   	push   %esi
 8ac47f8:	53                   	push   %ebx
 8ac47f9:	83 ec 10             	sub    $0x10,%esp
 8ac47fc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac47ff:	83 c0 10             	add    $0x10,%eax
 8ac4802:	89 04 24             	mov    %eax,(%esp)
 8ac4805:	e8 d6 30 00 00       	call   8ac78e0 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EEC1Ev>
 8ac480a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac480d:	83 c0 1c             	add    $0x1c,%eax
 8ac4810:	89 04 24             	mov    %eax,(%esp)
 8ac4813:	e8 c8 30 00 00       	call   8ac78e0 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EEC1Ev>
 8ac4818:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac481b:	89 04 24             	mov    %eax,(%esp)
 8ac481e:	e8 af 00 00 00       	call   8ac48d2 <_ZN7PackSet5clearEv>
 8ac4823:	eb 36                	jmp    8ac485b <_ZN7PackSetC1Ev+0x67>
 8ac4825:	89 d3                	mov    %edx,%ebx
 8ac4827:	89 c6                	mov    %eax,%esi
 8ac4829:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac482c:	83 c0 1c             	add    $0x1c,%eax
 8ac482f:	89 04 24             	mov    %eax,(%esp)
 8ac4832:	e8 bd 30 00 00       	call   8ac78f4 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EED1Ev>
 8ac4837:	89 f0                	mov    %esi,%eax
 8ac4839:	89 da                	mov    %ebx,%edx
 8ac483b:	eb 00                	jmp    8ac483d <_ZN7PackSetC1Ev+0x49>
 8ac483d:	89 d3                	mov    %edx,%ebx
 8ac483f:	89 c6                	mov    %eax,%esi
 8ac4841:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4844:	83 c0 10             	add    $0x10,%eax
 8ac4847:	89 04 24             	mov    %eax,(%esp)
 8ac484a:	e8 a5 30 00 00       	call   8ac78f4 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EED1Ev>
 8ac484f:	89 f0                	mov    %esi,%eax
 8ac4851:	89 da                	mov    %ebx,%edx
 8ac4853:	89 04 24             	mov    %eax,(%esp)
 8ac4856:	e8 f5 ee 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac485b:	83 c4 10             	add    $0x10,%esp
 8ac485e:	5b                   	pop    %ebx
 8ac485f:	5e                   	pop    %esi
 8ac4860:	5d                   	pop    %ebp
 8ac4861:	c3                   	ret

```

```c
// PackSet::PackSet @ 0x8ac47f4

/* DWARF original prototype: void PackSet(PackSet * this) */

void __thiscall PackSet::PackSet(PackSet *this)

{
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::vector(&this->indexes_);
                    /* try { // try from 08ac4813 to 08ac4817 has its CatchHandler @ 08ac483d */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::vector(&this->addeds_);
                    /* try { // try from 08ac481e to 08ac4822 has its CatchHandler @ 08ac4825 */
  clear(this);
  return;
}

```

---

## UseEncryptedFile

```asm
// === 08ac7680 PackSet::UseEncryptedFile  [0x08ac7680-0x8ac768b] ===
 8ac7680:	55                   	push   %ebp
 8ac7681:	89 e5                	mov    %esp,%ebp
 8ac7683:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac7686:	c6 40 28 01          	movb   $0x1,0x28(%eax)
 8ac768a:	5d                   	pop    %ebp
 8ac768b:	c3                   	ret

```

```c
// PackSet::UseEncryptedFile @ 0x8ac7680

/* DWARF original prototype: void UseEncryptedFile(PackSet * this) */

void __thiscall PackSet::UseEncryptedFile(PackSet *this)

{
  this->m_bUseEncryptedFile = true;
  return;
}

```

---

## UsingEncryptedFile

```asm
// === 08ac7674 PackSet::UsingEncryptedFile  [0x08ac7674-0x8ac767f] ===
 8ac7674:	55                   	push   %ebp
 8ac7675:	89 e5                	mov    %esp,%ebp
 8ac7677:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac767a:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 8ac767e:	5d                   	pop    %ebp
 8ac767f:	c3                   	ret

```

```c
// PackSet::UsingEncryptedFile @ 0x8ac7674

/* DWARF original prototype: bool UsingEncryptedFile(PackSet * this) */

bool __thiscall PackSet::UsingEncryptedFile(PackSet *this)

{
  return this->m_bUseEncryptedFile;
}

```

---

## added

```asm
// === 08ac56a2 PackSet::added  [0x08ac56a2-0x8ac587f] ===
 8ac56a2:	55                   	push   %ebp
 8ac56a3:	89 e5                	mov    %esp,%ebp
 8ac56a5:	56                   	push   %esi
 8ac56a6:	53                   	push   %ebx
 8ac56a7:	83 ec 50             	sub    $0x50,%esp
 8ac56aa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac56ad:	89 04 24             	mov    %eax,(%esp)
 8ac56b0:	e8 2f 27 00 00       	call   8ac7de4 <_ZNSt4pairIm10IndexEntryEC1Ev>
 8ac56b5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac56b8:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac56bb:	85 c0                	test   %eax,%eax
 8ac56bd:	74 54                	je     8ac5713 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x71>
 8ac56bf:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac56c4:	c7 44 24 08 6e e8 e2 	movl   $0x8e2e86e,0x8(%esp)
 8ac56cb:	08 
 8ac56cc:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac56d3:	08 
 8ac56d4:	89 04 24             	mov    %eax,(%esp)
 8ac56d7:	e8 b4 83 5b ff       	call   807da90 <fprintf@plt>
 8ac56dc:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac56e1:	c7 44 24 10 79 ea e2 	movl   $0x8e2ea79,0x10(%esp)
 8ac56e8:	08 
 8ac56e9:	c7 44 24 0c 8a 03 00 	movl   $0x38a,0xc(%esp)
 8ac56f0:	00 
 8ac56f1:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac56f8:	08 
 8ac56f9:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5700:	08 
 8ac5701:	89 04 24             	mov    %eax,(%esp)
 8ac5704:	e8 87 83 5b ff       	call   807da90 <fprintf@plt>
 8ac5709:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac570e:	e9 56 01 00 00       	jmp    8ac5869 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x1c7>
 8ac5713:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac5716:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac5719:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac571d:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac5720:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5724:	89 04 24             	mov    %eax,(%esp)
 8ac5727:	e8 d4 f6 ff ff       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac572c:	83 ec 04             	sub    $0x4,%esp
 8ac572f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5732:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5735:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5738:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac573c:	89 04 24             	mov    %eax,(%esp)
 8ac573f:	e8 46 22 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5744:	83 ec 04             	sub    $0x4,%esp
 8ac5747:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac574a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac574e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5751:	89 04 24             	mov    %eax,(%esp)
 8ac5754:	e8 57 22 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac5759:	84 c0                	test   %al,%al
 8ac575b:	74 53                	je     8ac57b0 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x10e>
 8ac575d:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5762:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac5765:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5769:	c7 44 24 04 94 e8 e2 	movl   $0x8e2e894,0x4(%esp)
 8ac5770:	08 
 8ac5771:	89 04 24             	mov    %eax,(%esp)
 8ac5774:	e8 17 83 5b ff       	call   807da90 <fprintf@plt>
 8ac5779:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac577e:	c7 44 24 10 79 ea e2 	movl   $0x8e2ea79,0x10(%esp)
 8ac5785:	08 
 8ac5786:	c7 44 24 0c 90 03 00 	movl   $0x390,0xc(%esp)
 8ac578d:	00 
 8ac578e:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5795:	08 
 8ac5796:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac579d:	08 
 8ac579e:	89 04 24             	mov    %eax,(%esp)
 8ac57a1:	e8 ea 82 5b ff       	call   807da90 <fprintf@plt>
 8ac57a6:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac57ab:	e9 b9 00 00 00       	jmp    8ac5869 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x1c7>
 8ac57b0:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac57b3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac57b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac57ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac57be:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac57c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac57c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac57c8:	83 c0 04             	add    $0x4,%eax
 8ac57cb:	89 04 24             	mov    %eax,(%esp)
 8ac57ce:	e8 a3 ec ff ff       	call   8ac4476 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess>
 8ac57d3:	83 f8 01             	cmp    $0x1,%eax
 8ac57d6:	0f 94 c0             	sete   %al
 8ac57d9:	84 c0                	test   %al,%al
 8ac57db:	74 34                	je     8ac5811 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x16f>
 8ac57dd:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac57e2:	c7 44 24 10 79 ea e2 	movl   $0x8e2ea79,0x10(%esp)
 8ac57e9:	08 
 8ac57ea:	c7 44 24 0c 96 03 00 	movl   $0x396,0xc(%esp)
 8ac57f1:	00 
 8ac57f2:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac57f9:	08 
 8ac57fa:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5801:	08 
 8ac5802:	89 04 24             	mov    %eax,(%esp)
 8ac5805:	e8 86 82 5b ff       	call   807da90 <fprintf@plt>
 8ac580a:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac580f:	eb 58                	jmp    8ac5869 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x1c7>
 8ac5811:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac5814:	83 c0 08             	add    $0x8,%eax
 8ac5817:	89 04 24             	mov    %eax,(%esp)
 8ac581a:	e8 d1 0c c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac581f:	89 04 24             	mov    %eax,(%esp)
 8ac5822:	e8 71 96 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8ac5827:	89 04 24             	mov    %eax,(%esp)
 8ac582a:	e8 d5 e2 ff ff       	call   8ac3b04 <_ZL5_hashPKc>
 8ac582f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8ac5832:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5835:	8d 50 1c             	lea    0x1c(%eax),%edx
 8ac5838:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac583b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac583f:	89 14 24             	mov    %edx,(%esp)
 8ac5842:	e8 bd 25 00 00       	call   8ac7e04 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE9push_backERKS2_>
 8ac5847:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ac584c:	eb 1b                	jmp    8ac5869 <_ZN7PackSet5addedEPKcP16IPackFileProcess+0x1c7>
 8ac584e:	89 d3                	mov    %edx,%ebx
 8ac5850:	89 c6                	mov    %eax,%esi
 8ac5852:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac5855:	89 04 24             	mov    %eax,(%esp)
 8ac5858:	e8 53 1f 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac585d:	89 f0                	mov    %esi,%eax
 8ac585f:	89 da                	mov    %ebx,%edx
 8ac5861:	89 04 24             	mov    %eax,(%esp)
 8ac5864:	e8 e7 de 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac5869:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac586c:	89 04 24             	mov    %eax,(%esp)
 8ac586f:	e8 3c 1f 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac5874:	89 d8                	mov    %ebx,%eax
 8ac5876:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ac5879:	83 c4 00             	add    $0x0,%esp
 8ac587c:	5b                   	pop    %ebx
 8ac587d:	5e                   	pop    %esi
 8ac587e:	5d                   	pop    %ebp
 8ac587f:	c3                   	ret

```

```c
// PackSet::added @ 0x8ac56a2

/* DWARF original prototype: pack_ret_t added(PackSet * this, NCHAR * name, IPackFileProcess *
   process) */

pack_ret_t __thiscall PackSet::added(PackSet *this,NCHAR *name,IPackFileProcess *process)

{
  bool bVar1;
  pack_ret_t pVar2;
  char *pcVar3;
  undefined1 local_34 [32];
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_10;
  
                    /* Unresolved local var: index_pair_t entry@[???] */
  std::pair<long_unsigned_int,_IndexEntry>::pair((pair<long_unsigned_int,_IndexEntry> *)local_34);
  if (this->type_ == PACK_LOAD_FULL) {
    find((PackSet *)&local_14,(NCHAR *)this);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)&local_10);
    bVar1 = __gnu_cxx::
            operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_10,&local_14);
    if (bVar1) {
      fprintf(stdout,"find %s",name);
      pcVar3 = "%s(%d) - %s\n";
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x390,"added");
      pVar2 = PACK_ERROR;
    }
    else {
      pVar2 = IndexEntry::update_content_from_file((IndexEntry *)(local_34 + 4),name,this,process);
      if (pVar2 == PACK_ERROR) {
        pcVar3 = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x396,"added");
        pVar2 = PACK_ERROR;
      }
      else {
        pcVar3 = (char *)std::string::c_str((string *)(local_34 + 8));
        pcVar3 = toMbcs(pcVar3);
        local_34._0_4_ = _hash(pcVar3);
        pcVar3 = local_34;
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::push_back(&this->addeds_,(pair<long_unsigned_int,_IndexEntry> *)pcVar3);
        pVar2 = PACK_OK;
      }
    }
  }
  else {
                    /* try { // try from 08ac56d7 to 08ac5846 has its CatchHandler @ 08ac584e */
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    pcVar3 = "%s(%d) - %s\n";
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x38a,"added");
    pVar2 = PACK_ERROR;
  }
  std::pair<long_unsigned_int,_IndexEntry>::~pair
            ((pair<long_unsigned_int,_IndexEntry> *)local_34,(int)pcVar3);
  return pVar2;
}

```

---

## clear

```asm
// === 08ac48d2 PackSet::clear  [0x08ac48d2-0x8ac4923] ===
 8ac48d2:	55                   	push   %ebp
 8ac48d3:	89 e5                	mov    %esp,%ebp
 8ac48d5:	83 ec 18             	sub    $0x18,%esp
 8ac48d8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac48db:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ac48e1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac48e4:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8ac48eb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac48ee:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8ac48f5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac48f8:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8ac48ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4902:	83 c0 10             	add    $0x10,%eax
 8ac4905:	89 04 24             	mov    %eax,(%esp)
 8ac4908:	e8 45 30 00 00       	call   8ac7952 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5clearEv>
 8ac490d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4910:	83 c0 1c             	add    $0x1c,%eax
 8ac4913:	89 04 24             	mov    %eax,(%esp)
 8ac4916:	e8 37 30 00 00       	call   8ac7952 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5clearEv>
 8ac491b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac491e:	c6 40 28 00          	movb   $0x0,0x28(%eax)
 8ac4922:	c9                   	leave
 8ac4923:	c3                   	ret

```

```c
// PackSet::clear @ 0x8ac48d2

/* DWARF original prototype: void clear(PackSet * this) */

void __thiscall PackSet::clear(PackSet *this)

{
  this->pack_file_ = (FILE *)0x0;
  this->revision_ = 0;
  this->header_size_ = 0;
  this->type_ = PACK_LOAD_FULL;
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::clear(&this->indexes_);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::clear(&this->addeds_);
  this->m_bUseEncryptedFile = false;
  return;
}

```

---

## close

```asm
// === 08ac49da PackSet::close  [0x08ac49da-0x8ac4b65] ===
 8ac49da:	55                   	push   %ebp
 8ac49db:	89 e5                	mov    %esp,%ebp
 8ac49dd:	83 ec 38             	sub    $0x38,%esp
 8ac49e0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac49e3:	89 04 24             	mov    %eax,(%esp)
 8ac49e6:	e8 89 2c 00 00       	call   8ac7674 <_ZN7PackSet18UsingEncryptedFileEv>
 8ac49eb:	84 c0                	test   %al,%al
 8ac49ed:	74 10                	je     8ac49ff <_ZN7PackSet5closeEv+0x25>
 8ac49ef:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac49f2:	89 04 24             	mov    %eax,(%esp)
 8ac49f5:	e8 6c 01 00 00       	call   8ac4b66 <_ZN7PackSet18closeEncryptedFileEv>
 8ac49fa:	e9 64 01 00 00       	jmp    8ac4b63 <_ZN7PackSet5closeEv+0x189>
 8ac49ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4a02:	89 04 24             	mov    %eax,(%esp)
 8ac4a05:	e8 d2 2f 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac4a0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4a0d:	8b 00                	mov    (%eax),%eax
 8ac4a0f:	85 c0                	test   %eax,%eax
 8ac4a11:	74 0d                	je     8ac4a20 <_ZN7PackSet5closeEv+0x46>
 8ac4a13:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4a16:	8b 00                	mov    (%eax),%eax
 8ac4a18:	89 04 24             	mov    %eax,(%esp)
 8ac4a1b:	e8 80 94 5b ff       	call   807dea0 <fclose@plt>
 8ac4a20:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4a23:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4a26:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac4a29:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4a2d:	89 04 24             	mov    %eax,(%esp)
 8ac4a30:	e8 b5 2f 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac4a35:	83 ec 04             	sub    $0x4,%esp
 8ac4a38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac4a3b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac4a3e:	eb 4e                	jmp    8ac4a8e <_ZN7PackSet5closeEv+0xb4>
 8ac4a40:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4a43:	89 04 24             	mov    %eax,(%esp)
 8ac4a46:	e8 d9 2f 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4a4b:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac4a4e:	85 c0                	test   %eax,%eax
 8ac4a50:	0f 95 c0             	setne  %al
 8ac4a53:	84 c0                	test   %al,%al
 8ac4a55:	74 2c                	je     8ac4a83 <_ZN7PackSet5closeEv+0xa9>
 8ac4a57:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4a5a:	89 04 24             	mov    %eax,(%esp)
 8ac4a5d:	e8 c2 2f 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4a62:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac4a65:	85 c0                	test   %eax,%eax
 8ac4a67:	74 08                	je     8ac4a71 <_ZN7PackSet5closeEv+0x97>
 8ac4a69:	89 04 24             	mov    %eax,(%esp)
 8ac4a6c:	e8 3f 01 c6 ff       	call   8724bb0 <_ZdaPv>
 8ac4a71:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4a74:	89 04 24             	mov    %eax,(%esp)
 8ac4a77:	e8 a8 2f 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4a7c:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8ac4a83:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4a86:	89 04 24             	mov    %eax,(%esp)
 8ac4a89:	e8 80 2f 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac4a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4a91:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4a94:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac4a97:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4a9b:	89 04 24             	mov    %eax,(%esp)
 8ac4a9e:	e8 e7 2e 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4aa3:	83 ec 04             	sub    $0x4,%esp
 8ac4aa6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac4aa9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4aad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4ab0:	89 04 24             	mov    %eax,(%esp)
 8ac4ab3:	e8 f8 2e 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac4ab8:	84 c0                	test   %al,%al
 8ac4aba:	75 84                	jne    8ac4a40 <_ZN7PackSet5closeEv+0x66>
 8ac4abc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4abf:	8d 50 1c             	lea    0x1c(%eax),%edx
 8ac4ac2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac4ac5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4ac9:	89 04 24             	mov    %eax,(%esp)
 8ac4acc:	e8 19 2f 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac4ad1:	83 ec 04             	sub    $0x4,%esp
 8ac4ad4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac4ad7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac4ada:	eb 4e                	jmp    8ac4b2a <_ZN7PackSet5closeEv+0x150>
 8ac4adc:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4adf:	89 04 24             	mov    %eax,(%esp)
 8ac4ae2:	e8 3d 2f 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4ae7:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac4aea:	85 c0                	test   %eax,%eax
 8ac4aec:	0f 95 c0             	setne  %al
 8ac4aef:	84 c0                	test   %al,%al
 8ac4af1:	74 2c                	je     8ac4b1f <_ZN7PackSet5closeEv+0x145>
 8ac4af3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4af6:	89 04 24             	mov    %eax,(%esp)
 8ac4af9:	e8 26 2f 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4afe:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac4b01:	85 c0                	test   %eax,%eax
 8ac4b03:	74 08                	je     8ac4b0d <_ZN7PackSet5closeEv+0x133>
 8ac4b05:	89 04 24             	mov    %eax,(%esp)
 8ac4b08:	e8 a3 00 c6 ff       	call   8724bb0 <_ZdaPv>
 8ac4b0d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4b10:	89 04 24             	mov    %eax,(%esp)
 8ac4b13:	e8 0c 2f 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4b18:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8ac4b1f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4b22:	89 04 24             	mov    %eax,(%esp)
 8ac4b25:	e8 e4 2e 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac4b2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4b2d:	8d 50 1c             	lea    0x1c(%eax),%edx
 8ac4b30:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac4b33:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4b37:	89 04 24             	mov    %eax,(%esp)
 8ac4b3a:	e8 4b 2e 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4b3f:	83 ec 04             	sub    $0x4,%esp
 8ac4b42:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac4b45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4b49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4b4c:	89 04 24             	mov    %eax,(%esp)
 8ac4b4f:	e8 5c 2e 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac4b54:	84 c0                	test   %al,%al
 8ac4b56:	75 84                	jne    8ac4adc <_ZN7PackSet5closeEv+0x102>
 8ac4b58:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4b5b:	89 04 24             	mov    %eax,(%esp)
 8ac4b5e:	e8 6f fd ff ff       	call   8ac48d2 <_ZN7PackSet5clearEv>
 8ac4b63:	c9                   	leave
 8ac4b64:	c3                   	ret
 8ac4b65:	90                   	nop

```

```c
// PackSet::close @ 0x8ac49da

/* DWARF original prototype: void close(PackSet * this) */

void __thiscall PackSet::close(PackSet *this)

{
  uchar *puVar1;
  bool bVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_20;
  undefined1 local_14 [16];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  bVar2 = UsingEncryptedFile(this);
  if (bVar2) {
    closeEncryptedFile(this);
  }
  else {
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                         *)&local_20.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
    if (this->pack_file_ != (FILE *)0x0) {
      fclose((FILE *)this->pack_file_);
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin(&local_20);
    local_20.
    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ._M_impl._M_end_of_storage =
         local_20.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)local_14);
      bVar2 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)&local_20.
                             super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                             ._M_impl._M_end_of_storage,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)local_14);
      if (!bVar2) break;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                             *)&local_20.
                                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                ._M_impl._M_end_of_storage);
      if ((ppVar3->second).content_ != (uchar *)0x0) {
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        puVar1 = (ppVar3->second).content_;
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        (ppVar3->second).content_ = (uchar *)0x0;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)&local_20.
                       super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                       ._M_impl._M_end_of_storage);
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin(&local_20);
    local_20.
    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ._M_impl._M_end_of_storage =
         local_20.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)(local_14 + 4));
      bVar2 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)&local_20.
                             super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                             ._M_impl._M_end_of_storage,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)(local_14 + 4));
      if (!bVar2) break;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                             *)&local_20.
                                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                ._M_impl._M_end_of_storage);
      if ((ppVar3->second).content_ != (uchar *)0x0) {
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        puVar1 = (ppVar3->second).content_;
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)&local_20.
                                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                  ._M_impl._M_end_of_storage);
        (ppVar3->second).content_ = (uchar *)0x0;
      }
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)&local_20.
                       super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                       ._M_impl._M_end_of_storage);
    }
    clear(this);
  }
  return;
}

```

---

## closeEncryptedFile

```asm
// === 08ac4b66 PackSet::closeEncryptedFile  [0x08ac4b66-0x8ac4b6b] ===
 8ac4b66:	55                   	push   %ebp
 8ac4b67:	89 e5                	mov    %esp,%ebp
 8ac4b69:	5d                   	pop    %ebp
 8ac4b6a:	c3                   	ret
 8ac4b6b:	90                   	nop

```

```c
// PackSet::closeEncryptedFile @ 0x8ac4b66

/* DWARF original prototype: void closeEncryptedFile(PackSet * this) */

void __thiscall PackSet::closeEncryptedFile(PackSet *this)

{
  return;
}

```

---

## deleted

```asm
// === 08ac5332 PackSet::deleted  [0x08ac5332-0x8ac5447] ===
 8ac5332:	55                   	push   %ebp
 8ac5333:	89 e5                	mov    %esp,%ebp
 8ac5335:	83 ec 48             	sub    $0x48,%esp
 8ac5338:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac533b:	89 04 24             	mov    %eax,(%esp)
 8ac533e:	e8 99 26 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac5343:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5346:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac5349:	85 c0                	test   %eax,%eax
 8ac534b:	74 54                	je     8ac53a1 <_ZN7PackSet7deletedEPKc+0x6f>
 8ac534d:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5352:	c7 44 24 08 6e e8 e2 	movl   $0x8e2e86e,0x8(%esp)
 8ac5359:	08 
 8ac535a:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac5361:	08 
 8ac5362:	89 04 24             	mov    %eax,(%esp)
 8ac5365:	e8 26 87 5b ff       	call   807da90 <fprintf@plt>
 8ac536a:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac536f:	c7 44 24 10 88 ea e2 	movl   $0x8e2ea88,0x10(%esp)
 8ac5376:	08 
 8ac5377:	c7 44 24 0c 46 03 00 	movl   $0x346,0xc(%esp)
 8ac537e:	00 
 8ac537f:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5386:	08 
 8ac5387:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac538e:	08 
 8ac538f:	89 04 24             	mov    %eax,(%esp)
 8ac5392:	e8 f9 86 5b ff       	call   807da90 <fprintf@plt>
 8ac5397:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac539c:	e9 a5 00 00 00       	jmp    8ac5446 <_ZN7PackSet7deletedEPKc+0x114>
 8ac53a1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac53a4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac53a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac53ab:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac53ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac53b2:	89 04 24             	mov    %eax,(%esp)
 8ac53b5:	e8 46 fa ff ff       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac53ba:	83 ec 04             	sub    $0x4,%esp
 8ac53bd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac53c0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac53c3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac53c6:	8d 50 10             	lea    0x10(%eax),%edx
 8ac53c9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac53cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac53d0:	89 04 24             	mov    %eax,(%esp)
 8ac53d3:	e8 b2 25 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac53d8:	83 ec 04             	sub    $0x4,%esp
 8ac53db:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac53de:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac53e2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac53e5:	89 04 24             	mov    %eax,(%esp)
 8ac53e8:	e8 c3 25 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac53ed:	84 c0                	test   %al,%al
 8ac53ef:	74 50                	je     8ac5441 <_ZN7PackSet7deletedEPKc+0x10f>
 8ac53f1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac53f4:	89 04 24             	mov    %eax,(%esp)
 8ac53f7:	e8 28 26 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac53fc:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac53ff:	85 c0                	test   %eax,%eax
 8ac5401:	0f 95 c0             	setne  %al
 8ac5404:	84 c0                	test   %al,%al
 8ac5406:	74 1a                	je     8ac5422 <_ZN7PackSet7deletedEPKc+0xf0>
 8ac5408:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac540b:	89 04 24             	mov    %eax,(%esp)
 8ac540e:	e8 11 26 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac5413:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac5416:	85 c0                	test   %eax,%eax
 8ac5418:	74 08                	je     8ac5422 <_ZN7PackSet7deletedEPKc+0xf0>
 8ac541a:	89 04 24             	mov    %eax,(%esp)
 8ac541d:	e8 8e f7 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac5422:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5425:	8d 48 10             	lea    0x10(%eax),%ecx
 8ac5428:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac542b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ac542e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5432:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ac5436:	89 04 24             	mov    %eax,(%esp)
 8ac5439:	e8 c0 28 00 00       	call   8ac7cfe <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS2_S4_EE>
 8ac543e:	83 ec 04             	sub    $0x4,%esp
 8ac5441:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac5446:	c9                   	leave
 8ac5447:	c3                   	ret

```

```c
// PackSet::deleted @ 0x8ac5332

/* DWARF original prototype: pack_ret_t deleted(PackSet * this, NCHAR * name) */

pack_ret_t __thiscall PackSet::deleted(PackSet *this,NCHAR *name)

{
  uchar *puVar1;
  bool bVar2;
  pack_ret_t pVar3;
  pair<long_unsigned_int,_IndexEntry> *ppVar4;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_18;
  undefined1 local_14 [16];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_18);
  if (this->type_ == PACK_LOAD_FULL) {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_18._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_14);
    bVar2 = __gnu_cxx::
            operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_18,
                       (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        *)local_14);
    if (bVar2) {
      ppVar4 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_18);
      if ((ppVar4->second).content_ != (uchar *)0x0) {
        ppVar4 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_18);
        puVar1 = (ppVar4->second).content_;
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
      }
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::erase((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)(local_14 + 4),
              (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               )&this->indexes_);
    }
    pVar3 = PACK_OK;
  }
  else {
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x346,"deleted");
    pVar3 = PACK_ERROR;
  }
  return pVar3;
}

```

---

## find

```asm
// === 08ac4e00 PackSet::find  [0x08ac4e00-0x8ac505f] ===
 8ac4e00:	55                   	push   %ebp
 8ac4e01:	89 e5                	mov    %esp,%ebp
 8ac4e03:	56                   	push   %esi
 8ac4e04:	53                   	push   %ebx
 8ac4e05:	81 ec 90 01 00 00    	sub    $0x190,%esp
 8ac4e0b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ac4e0e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac4e11:	89 04 24             	mov    %eax,(%esp)
 8ac4e14:	e8 c9 ef ff ff       	call   8ac3de2 <_ZN10IndexEntryC1Ev>
 8ac4e19:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4e1c:	89 04 24             	mov    %eax,(%esp)
 8ac4e1f:	e8 0a 2c 00 00       	call   8ac7a2e <_ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPS_Im10IndexEntryESt6vectorIS3_SaIS3_EEEES8_EC1Ev>
 8ac4e24:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8ac4e2b:	00 
 8ac4e2c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8ac4e33:	00 
 8ac4e34:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8ac4e3b:	00 
 8ac4e3c:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 8ac4e42:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4e46:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac4e49:	89 04 24             	mov    %eax,(%esp)
 8ac4e4c:	e8 49 ed ff ff       	call   8ac3b9a <_Z17_correct_filenamePKcPcjS1_j>
 8ac4e51:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 8ac4e57:	89 04 24             	mov    %eax,(%esp)
 8ac4e5a:	e8 39 a0 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8ac4e5f:	89 04 24             	mov    %eax,(%esp)
 8ac4e62:	e8 9d ec ff ff       	call   8ac3b04 <_ZL5_hashPKc>
 8ac4e67:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8ac4e6a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac4e6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac4e71:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ac4e74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4e78:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac4e7b:	89 04 24             	mov    %eax,(%esp)
 8ac4e7e:	e8 33 2c 00 00       	call   8ac7ab6 <_ZNSt4pairIm10IndexEntryEC1IRmRS0_EEOT_OT0_>
 8ac4e83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4e86:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4e89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4e8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4e90:	89 04 24             	mov    %eax,(%esp)
 8ac4e93:	e8 f2 2a 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4e98:	83 ec 04             	sub    $0x4,%esp
 8ac4e9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4e9e:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4ea1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac4ea4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4ea8:	89 04 24             	mov    %eax,(%esp)
 8ac4eab:	e8 3a 2b 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac4eb0:	83 ec 04             	sub    $0x4,%esp
 8ac4eb3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac4eb6:	c7 44 24 10 dc 3a ac 	movl   $0x8ac3adc,0x10(%esp)
 8ac4ebd:	08 
 8ac4ebe:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8ac4ec1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac4ec5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ac4ec8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac4ecc:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ac4ecf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4ed3:	89 04 24             	mov    %eax,(%esp)
 8ac4ed6:	e8 12 2c 00 00       	call   8ac7aed <_ZSt11equal_rangeIN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS4_SaIS4_EEEES4_PFbRKS4_SB_EES2_IT_SE_ESE_SE_RKT0_T1_>
 8ac4edb:	83 ec 04             	sub    $0x4,%esp
 8ac4ede:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac4ee1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4ee5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4ee8:	89 04 24             	mov    %eax,(%esp)
 8ac4eeb:	e8 94 2d 00 00       	call   8ac7c84 <_ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPS_Im10IndexEntryESt6vectorIS3_SaIS3_EEEES8_EaSEOS9_>
 8ac4ef0:	eb 18                	jmp    8ac4f0a <_ZN7PackSet4findEPKc+0x10a>
 8ac4ef2:	89 d3                	mov    %edx,%ebx
 8ac4ef4:	89 c6                	mov    %eax,%esi
 8ac4ef6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac4ef9:	89 04 24             	mov    %eax,(%esp)
 8ac4efc:	e8 af 28 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac4f01:	89 f0                	mov    %esi,%eax
 8ac4f03:	89 da                	mov    %ebx,%edx
 8ac4f05:	e9 21 01 00 00       	jmp    8ac502b <_ZN7PackSet4findEPKc+0x22b>
 8ac4f0a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac4f0d:	89 04 24             	mov    %eax,(%esp)
 8ac4f10:	e8 9b 28 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac4f15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4f18:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4f1b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac4f1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4f22:	89 04 24             	mov    %eax,(%esp)
 8ac4f25:	e8 60 2a 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4f2a:	83 ec 04             	sub    $0x4,%esp
 8ac4f2d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac4f30:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4f34:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4f37:	89 04 24             	mov    %eax,(%esp)
 8ac4f3a:	e8 78 2d 00 00       	call   8ac7cb7 <_ZN9__gnu_cxxeqIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac4f3f:	84 c0                	test   %al,%al
 8ac4f41:	75 14                	jne    8ac4f57 <_ZN7PackSet4findEPKc+0x157>
 8ac4f43:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4f46:	89 04 24             	mov    %eax,(%esp)
 8ac4f49:	e8 d6 2a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4f4e:	8b 10                	mov    (%eax),%edx
 8ac4f50:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac4f53:	39 c2                	cmp    %eax,%edx
 8ac4f55:	74 07                	je     8ac4f5e <_ZN7PackSet4findEPKc+0x15e>
 8ac4f57:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4f5c:	eb 05                	jmp    8ac4f63 <_ZN7PackSet4findEPKc+0x163>
 8ac4f5e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac4f63:	84 c0                	test   %al,%al
 8ac4f65:	74 1a                	je     8ac4f81 <_ZN7PackSet4findEPKc+0x181>
 8ac4f67:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4f6a:	83 c0 10             	add    $0x10,%eax
 8ac4f6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4f71:	89 1c 24             	mov    %ebx,(%esp)
 8ac4f74:	e8 11 2a 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4f79:	83 ec 04             	sub    $0x4,%esp
 8ac4f7c:	e9 c5 00 00 00       	jmp    8ac5046 <_ZN7PackSet4findEPKc+0x246>
 8ac4f81:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac4f84:	89 04 24             	mov    %eax,(%esp)
 8ac4f87:	e8 50 2a 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac4f8c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8ac4f8f:	89 45 98             	mov    %eax,-0x68(%ebp)
 8ac4f92:	eb 43                	jmp    8ac4fd7 <_ZN7PackSet4findEPKc+0x1d7>
 8ac4f94:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac4f97:	89 04 24             	mov    %eax,(%esp)
 8ac4f9a:	e8 85 2a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4f9f:	83 c0 08             	add    $0x8,%eax
 8ac4fa2:	89 04 24             	mov    %eax,(%esp)
 8ac4fa5:	e8 46 15 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac4faa:	8d 95 94 fe ff ff    	lea    -0x16c(%ebp),%edx
 8ac4fb0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4fb4:	89 04 24             	mov    %eax,(%esp)
 8ac4fb7:	e8 24 95 5b ff       	call   807e4e0 <strcmp@plt>
 8ac4fbc:	85 c0                	test   %eax,%eax
 8ac4fbe:	0f 94 c0             	sete   %al
 8ac4fc1:	84 c0                	test   %al,%al
 8ac4fc3:	74 07                	je     8ac4fcc <_ZN7PackSet4findEPKc+0x1cc>
 8ac4fc5:	8b 45 98             	mov    -0x68(%ebp),%eax
 8ac4fc8:	89 03                	mov    %eax,(%ebx)
 8ac4fca:	eb 7a                	jmp    8ac5046 <_ZN7PackSet4findEPKc+0x246>
 8ac4fcc:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac4fcf:	89 04 24             	mov    %eax,(%esp)
 8ac4fd2:	e8 37 2a 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac4fd7:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac4fda:	89 04 24             	mov    %eax,(%esp)
 8ac4fdd:	e8 42 2a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4fe2:	8b 10                	mov    (%eax),%edx
 8ac4fe4:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac4fe7:	39 c2                	cmp    %eax,%edx
 8ac4fe9:	75 20                	jne    8ac500b <_ZN7PackSet4findEPKc+0x20b>
 8ac4feb:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4fee:	83 c0 04             	add    $0x4,%eax
 8ac4ff1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4ff5:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac4ff8:	89 04 24             	mov    %eax,(%esp)
 8ac4ffb:	e8 b0 29 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac5000:	84 c0                	test   %al,%al
 8ac5002:	74 07                	je     8ac500b <_ZN7PackSet4findEPKc+0x20b>
 8ac5004:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5009:	eb 05                	jmp    8ac5010 <_ZN7PackSet4findEPKc+0x210>
 8ac500b:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac5010:	84 c0                	test   %al,%al
 8ac5012:	75 80                	jne    8ac4f94 <_ZN7PackSet4findEPKc+0x194>
 8ac5014:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac5017:	83 c0 10             	add    $0x10,%eax
 8ac501a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac501e:	89 1c 24             	mov    %ebx,(%esp)
 8ac5021:	e8 64 29 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5026:	83 ec 04             	sub    $0x4,%esp
 8ac5029:	eb 1b                	jmp    8ac5046 <_ZN7PackSet4findEPKc+0x246>
 8ac502b:	89 d3                	mov    %edx,%ebx
 8ac502d:	89 c6                	mov    %eax,%esi
 8ac502f:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac5032:	89 04 24             	mov    %eax,(%esp)
 8ac5035:	e8 ca ed ff ff       	call   8ac3e04 <_ZN10IndexEntryD1Ev>
 8ac503a:	89 f0                	mov    %esi,%eax
 8ac503c:	89 da                	mov    %ebx,%edx
 8ac503e:	89 04 24             	mov    %eax,(%esp)
 8ac5041:	e8 0a e7 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac5046:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac5049:	89 04 24             	mov    %eax,(%esp)
 8ac504c:	e8 b3 ed ff ff       	call   8ac3e04 <_ZN10IndexEntryD1Ev>
 8ac5051:	89 d8                	mov    %ebx,%eax
 8ac5053:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ac5056:	83 c4 00             	add    $0x0,%esp
 8ac5059:	5b                   	pop    %ebx
 8ac505a:	5e                   	pop    %esi
 8ac505b:	5d                   	pop    %ebp
 8ac505c:	c2 04 00             	ret    $0x4
 8ac505f:	90                   	nop

```

```c
// PackSet::find @ 0x8ac4e00

/* DWARF original prototype: index_vector_it find(PackSet * this, NCHAR * name) */

index_vector_it __thiscall PackSet::find(PackSet *this,NCHAR *name)

{
  bool bVar1;
  char *pcVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  char *__s1;
  int iVar4;
  NCHAR *in_stack_0000000c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  *__p;
  NCHAR local_170 [260];
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_6c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_68;
  IndexEntry local_60;
  hash_t local_44;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_40;
  pair<long_unsigned_int,_IndexEntry> local_38;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_18;
  
                    /* Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: ulong code@[???]
                       Unresolved local var: IndexEntry dummy@[???]
                       Unresolved local var:
                       pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
                       it@[???] */
  IndexEntry::IndexEntry(&local_60);
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::pair(&local_68);
                    /* try { // try from 08ac4e4c to 08ac4e82 has its CatchHandler @ 08ac502b */
  _correct_filename(in_stack_0000000c,local_170,0x104,(NCHAR *)0x0,0);
  pcVar2 = toMbcs(local_170);
  local_44 = _hash(pcVar2);
  std::pair<long_unsigned_int,_IndexEntry>::pair<long_unsigned_int&,_IndexEntry&>
            (&local_38,&local_44,&local_60);
                    /* try { // try from 08ac4e93 to 08ac4eef has its CatchHandler @ 08ac4ef2 */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_18);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)&local_18.
              super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
              ._M_impl._M_finish);
  std::
  equal_range<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,_PackSet::index_pair_t,_bool_(*)(const_PackSet::index_pair_t&,_const_PackSet::index_pair_t&)>
            (&local_40,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_18.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_finish,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_18.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_start,&local_38,_index_less);
  __p = &local_40;
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::operator=(&local_68,__p);
                    /* try { // try from 08ac4f10 to 08ac5025 has its CatchHandler @ 08ac502b */
  std::pair<long_unsigned_int,_IndexEntry>::~pair(&local_38,(int)__p);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)&local_18.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage);
  bVar1 = __gnu_cxx::
          operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_68.first,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_18.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_end_of_storage);
  if (bVar1) {
LAB_08ac4f57:
    bVar1 = true;
  }
  else {
    ppVar3 = __gnu_cxx::
             __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
             ::operator->(&local_68.first);
    if (ppVar3->first != local_44) goto LAB_08ac4f57;
    bVar1 = false;
  }
  if (!bVar1) {
                    /* Unresolved local var: index_vector_it it2@[???] */
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator(&local_6c);
    local_6c._M_current = local_68.first._M_current;
    do {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_6c);
      if (ppVar3->first == local_44) {
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_6c,&local_68.second);
        if (!bVar1) goto LAB_08ac500b;
        bVar1 = true;
      }
      else {
LAB_08ac500b:
        bVar1 = false;
      }
      if (!bVar1) {
        pcVar2 = name + 0x10;
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)this);
        goto LAB_08ac5046;
      }
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_6c);
      __s1 = (char *)std::string::c_str((string *)&(ppVar3->second).name_);
      pcVar2 = local_170;
      iVar4 = strcmp(__s1,pcVar2);
      if (iVar4 == 0) goto code_r0x08ac4fc5;
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++(&local_6c);
    } while( true );
  }
  pcVar2 = name + 0x10;
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)this);
LAB_08ac5046:
  IndexEntry::~IndexEntry(&local_60,(int)pcVar2);
  return (index_vector_it)(pair<long_unsigned_int,_IndexEntry> *)this;
code_r0x08ac4fc5:
  this->pack_file_ = (FILE *)local_6c._M_current;
  goto LAB_08ac5046;
}

```

---

## find_const

```asm
// === 08ac4b6c PackSet::find_const  [0x08ac4b6c-0x8ac4dff] ===
 8ac4b6c:	55                   	push   %ebp
 8ac4b6d:	89 e5                	mov    %esp,%ebp
 8ac4b6f:	56                   	push   %esi
 8ac4b70:	53                   	push   %ebx
 8ac4b71:	81 ec 90 01 00 00    	sub    $0x190,%esp
 8ac4b77:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ac4b7a:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4b7d:	89 04 24             	mov    %eax,(%esp)
 8ac4b80:	e8 5d f2 ff ff       	call   8ac3de2 <_ZN10IndexEntryC1Ev>
 8ac4b85:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac4b88:	89 04 24             	mov    %eax,(%esp)
 8ac4b8b:	e8 9e 2e 00 00       	call   8ac7a2e <_ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPS_Im10IndexEntryESt6vectorIS3_SaIS3_EEEES8_EC1Ev>
 8ac4b90:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8ac4b97:	00 
 8ac4b98:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8ac4b9f:	00 
 8ac4ba0:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8ac4ba7:	00 
 8ac4ba8:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 8ac4bae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4bb2:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac4bb5:	89 04 24             	mov    %eax,(%esp)
 8ac4bb8:	e8 dd ef ff ff       	call   8ac3b9a <_Z17_correct_filenamePKcPcjS1_j>
 8ac4bbd:	8d 85 8c fe ff ff    	lea    -0x174(%ebp),%eax
 8ac4bc3:	89 04 24             	mov    %eax,(%esp)
 8ac4bc6:	e8 cd a2 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8ac4bcb:	89 04 24             	mov    %eax,(%esp)
 8ac4bce:	e8 31 ef ff ff       	call   8ac3b04 <_ZL5_hashPKc>
 8ac4bd3:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8ac4bd6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4bd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac4bdd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ac4be0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4be4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac4be7:	89 04 24             	mov    %eax,(%esp)
 8ac4bea:	e8 c7 2e 00 00       	call   8ac7ab6 <_ZNSt4pairIm10IndexEntryEC1IRmRS0_EEOT_OT0_>
 8ac4bef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4bf2:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4bf5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac4bf8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4bfc:	89 04 24             	mov    %eax,(%esp)
 8ac4bff:	e8 86 2d 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4c04:	83 ec 04             	sub    $0x4,%esp
 8ac4c07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4c0a:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4c0d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ac4c10:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4c14:	89 04 24             	mov    %eax,(%esp)
 8ac4c17:	e8 ce 2d 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac4c1c:	83 ec 04             	sub    $0x4,%esp
 8ac4c1f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac4c22:	c7 44 24 10 dc 3a ac 	movl   $0x8ac3adc,0x10(%esp)
 8ac4c29:	08 
 8ac4c2a:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8ac4c2d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac4c31:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ac4c34:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac4c38:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8ac4c3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4c3f:	89 04 24             	mov    %eax,(%esp)
 8ac4c42:	e8 a6 2e 00 00       	call   8ac7aed <_ZSt11equal_rangeIN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS4_SaIS4_EEEES4_PFbRKS4_SB_EES2_IT_SE_ESE_SE_RKT0_T1_>
 8ac4c47:	83 ec 04             	sub    $0x4,%esp
 8ac4c4a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac4c4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4c51:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac4c54:	89 04 24             	mov    %eax,(%esp)
 8ac4c57:	e8 28 30 00 00       	call   8ac7c84 <_ZNSt4pairIN9__gnu_cxx17__normal_iteratorIPS_Im10IndexEntryESt6vectorIS3_SaIS3_EEEES8_EaSEOS9_>
 8ac4c5c:	eb 18                	jmp    8ac4c76 <_ZN7PackSet10find_constEPKc+0x10a>
 8ac4c5e:	89 d3                	mov    %edx,%ebx
 8ac4c60:	89 c6                	mov    %eax,%esi
 8ac4c62:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac4c65:	89 04 24             	mov    %eax,(%esp)
 8ac4c68:	e8 43 2b 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac4c6d:	89 f0                	mov    %esi,%eax
 8ac4c6f:	89 da                	mov    %ebx,%edx
 8ac4c71:	e9 56 01 00 00       	jmp    8ac4dcc <_ZN7PackSet10find_constEPKc+0x260>
 8ac4c76:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ac4c79:	89 04 24             	mov    %eax,(%esp)
 8ac4c7c:	e8 2f 2b 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac4c81:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4c84:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4c87:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4c8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4c8e:	89 04 24             	mov    %eax,(%esp)
 8ac4c91:	e8 f4 2c 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4c96:	83 ec 04             	sub    $0x4,%esp
 8ac4c99:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac4c9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4ca0:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac4ca3:	89 04 24             	mov    %eax,(%esp)
 8ac4ca6:	e8 0c 30 00 00       	call   8ac7cb7 <_ZN9__gnu_cxxeqIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac4cab:	84 c0                	test   %al,%al
 8ac4cad:	75 14                	jne    8ac4cc3 <_ZN7PackSet10find_constEPKc+0x157>
 8ac4caf:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac4cb2:	89 04 24             	mov    %eax,(%esp)
 8ac4cb5:	e8 6a 2d 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4cba:	8b 10                	mov    (%eax),%edx
 8ac4cbc:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac4cbf:	39 c2                	cmp    %eax,%edx
 8ac4cc1:	74 07                	je     8ac4cca <_ZN7PackSet10find_constEPKc+0x15e>
 8ac4cc3:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4cc8:	eb 05                	jmp    8ac4ccf <_ZN7PackSet10find_constEPKc+0x163>
 8ac4cca:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac4ccf:	84 c0                	test   %al,%al
 8ac4cd1:	74 2c                	je     8ac4cff <_ZN7PackSet10find_constEPKc+0x193>
 8ac4cd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4cd6:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4cd9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac4cdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4ce0:	89 04 24             	mov    %eax,(%esp)
 8ac4ce3:	e8 a2 2c 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4ce8:	83 ec 04             	sub    $0x4,%esp
 8ac4ceb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac4cee:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4cf2:	89 1c 24             	mov    %ebx,(%esp)
 8ac4cf5:	e8 ea 2f 00 00       	call   8ac7ce4 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 8ac4cfa:	e9 e8 00 00 00       	jmp    8ac4de7 <_ZN7PackSet10find_constEPKc+0x27b>
 8ac4cff:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac4d02:	89 04 24             	mov    %eax,(%esp)
 8ac4d05:	e8 d2 2c 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac4d0a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8ac4d0d:	89 45 90             	mov    %eax,-0x70(%ebp)
 8ac4d10:	eb 50                	jmp    8ac4d62 <_ZN7PackSet10find_constEPKc+0x1f6>
 8ac4d12:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac4d15:	89 04 24             	mov    %eax,(%esp)
 8ac4d18:	e8 07 2d 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4d1d:	83 c0 08             	add    $0x8,%eax
 8ac4d20:	89 04 24             	mov    %eax,(%esp)
 8ac4d23:	e8 c8 17 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac4d28:	8d 95 8c fe ff ff    	lea    -0x174(%ebp),%edx
 8ac4d2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4d32:	89 04 24             	mov    %eax,(%esp)
 8ac4d35:	e8 a6 97 5b ff       	call   807e4e0 <strcmp@plt>
 8ac4d3a:	85 c0                	test   %eax,%eax
 8ac4d3c:	0f 94 c0             	sete   %al
 8ac4d3f:	84 c0                	test   %al,%al
 8ac4d41:	74 14                	je     8ac4d57 <_ZN7PackSet10find_constEPKc+0x1eb>
 8ac4d43:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac4d46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4d4a:	89 1c 24             	mov    %ebx,(%esp)
 8ac4d4d:	e8 92 2f 00 00       	call   8ac7ce4 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 8ac4d52:	e9 90 00 00 00       	jmp    8ac4de7 <_ZN7PackSet10find_constEPKc+0x27b>
 8ac4d57:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac4d5a:	89 04 24             	mov    %eax,(%esp)
 8ac4d5d:	e8 ac 2c 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac4d62:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac4d65:	89 04 24             	mov    %eax,(%esp)
 8ac4d68:	e8 b7 2c 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac4d6d:	8b 10                	mov    (%eax),%edx
 8ac4d6f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac4d72:	39 c2                	cmp    %eax,%edx
 8ac4d74:	75 20                	jne    8ac4d96 <_ZN7PackSet10find_constEPKc+0x22a>
 8ac4d76:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac4d79:	83 c0 04             	add    $0x4,%eax
 8ac4d7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4d80:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac4d83:	89 04 24             	mov    %eax,(%esp)
 8ac4d86:	e8 25 2c 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac4d8b:	84 c0                	test   %al,%al
 8ac4d8d:	74 07                	je     8ac4d96 <_ZN7PackSet10find_constEPKc+0x22a>
 8ac4d8f:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4d94:	eb 05                	jmp    8ac4d9b <_ZN7PackSet10find_constEPKc+0x22f>
 8ac4d96:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac4d9b:	84 c0                	test   %al,%al
 8ac4d9d:	0f 85 6f ff ff ff    	jne    8ac4d12 <_ZN7PackSet10find_constEPKc+0x1a6>
 8ac4da3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4da6:	8d 50 10             	lea    0x10(%eax),%edx
 8ac4da9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac4dac:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4db0:	89 04 24             	mov    %eax,(%esp)
 8ac4db3:	e8 d2 2b 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac4db8:	83 ec 04             	sub    $0x4,%esp
 8ac4dbb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac4dbe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4dc2:	89 1c 24             	mov    %ebx,(%esp)
 8ac4dc5:	e8 1a 2f 00 00       	call   8ac7ce4 <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1IPS3_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISC_SB_E7__valueES8_E6__typeEEE>
 8ac4dca:	eb 1b                	jmp    8ac4de7 <_ZN7PackSet10find_constEPKc+0x27b>
 8ac4dcc:	89 d3                	mov    %edx,%ebx
 8ac4dce:	89 c6                	mov    %eax,%esi
 8ac4dd0:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4dd3:	89 04 24             	mov    %eax,(%esp)
 8ac4dd6:	e8 29 f0 ff ff       	call   8ac3e04 <_ZN10IndexEntryD1Ev>
 8ac4ddb:	89 f0                	mov    %esi,%eax
 8ac4ddd:	89 da                	mov    %ebx,%edx
 8ac4ddf:	89 04 24             	mov    %eax,(%esp)
 8ac4de2:	e8 69 e9 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac4de7:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac4dea:	89 04 24             	mov    %eax,(%esp)
 8ac4ded:	e8 12 f0 ff ff       	call   8ac3e04 <_ZN10IndexEntryD1Ev>
 8ac4df2:	89 d8                	mov    %ebx,%eax
 8ac4df4:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ac4df7:	83 c4 00             	add    $0x0,%esp
 8ac4dfa:	5b                   	pop    %ebx
 8ac4dfb:	5e                   	pop    %esi
 8ac4dfc:	5d                   	pop    %ebp
 8ac4dfd:	c2 04 00             	ret    $0x4

```

```c
// PackSet::find_const @ 0x8ac4b6c

/* DWARF original prototype: index_vector_const_it find_const(PackSet * this, NCHAR * name) */

index_vector_const_it __thiscall PackSet::find_const(PackSet *this,NCHAR *name)

{
  bool bVar1;
  char *pcVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  int iVar4;
  NCHAR *in_stack_0000000c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  *__p;
  pair<long_unsigned_int,_IndexEntry> **__i;
  NCHAR local_178 [260];
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_74;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_70;
  IndexEntry local_68;
  hash_t local_4c;
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  local_48;
  pair<long_unsigned_int,_IndexEntry> local_40;
  undefined1 local_20 [8];
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_18;
  
                    /* Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: ulong code@[???]
                       Unresolved local var: IndexEntry dummy@[???]
                       Unresolved local var:
                       pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
                       it@[???] */
  IndexEntry::IndexEntry(&local_68);
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::pair(&local_70);
                    /* try { // try from 08ac4bb8 to 08ac4bee has its CatchHandler @ 08ac4dcc */
  _correct_filename(in_stack_0000000c,local_178,0x104,(NCHAR *)0x0,0);
  pcVar2 = toMbcs(local_178);
  local_4c = _hash(pcVar2);
  std::pair<long_unsigned_int,_IndexEntry>::pair<long_unsigned_int&,_IndexEntry&>
            (&local_40,&local_4c,&local_68);
                    /* try { // try from 08ac4bff to 08ac4c5b has its CatchHandler @ 08ac4c5e */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)local_20);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)(local_20 + 4));
  std::
  equal_range<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,_PackSet::index_pair_t,_bool_(*)(const_PackSet::index_pair_t&,_const_PackSet::index_pair_t&)>
            (&local_48,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_20._4_4_,
             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              )local_20._0_4_,&local_40,_index_less);
  __p = &local_48;
  std::
  pair<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,___gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>_>
  ::operator=(&local_70,__p);
                    /* try { // try from 08ac4c7c to 08ac4dc9 has its CatchHandler @ 08ac4dcc */
  std::pair<long_unsigned_int,_IndexEntry>::~pair(&local_40,(int)__p);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_18);
  bVar1 = __gnu_cxx::
          operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_70.first,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_18);
  if (bVar1) {
LAB_08ac4cc3:
    bVar1 = true;
  }
  else {
    ppVar3 = __gnu_cxx::
             __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
             ::operator->(&local_70.first);
    if (ppVar3->first != local_4c) goto LAB_08ac4cc3;
    bVar1 = false;
  }
  if (!bVar1) {
                    /* Unresolved local var: index_vector_it it2@[???] */
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator(&local_74);
    local_74._M_current = local_70.first._M_current;
    do {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_74);
      if (ppVar3->first == local_4c) {
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_74,&local_70.second);
        if (!bVar1) goto LAB_08ac4d96;
        bVar1 = true;
      }
      else {
LAB_08ac4d96:
        bVar1 = false;
      }
      if (!bVar1) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)&local_18.
                  super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                  ._M_impl._M_end_of_storage);
        __i = &local_18.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_end_of_storage;
        __gnu_cxx::
        __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*>
                  ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)this,(__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)__i);
        goto LAB_08ac4de7;
      }
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_74);
      pcVar2 = (char *)std::string::c_str((string *)&(ppVar3->second).name_);
      iVar4 = strcmp(pcVar2,local_178);
      if (iVar4 == 0) goto code_r0x08ac4d43;
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++(&local_74);
    } while( true );
  }
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         *)&local_18.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_finish);
  __i = &local_18.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
         ._M_impl._M_finish;
  __gnu_cxx::
  __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*>
            ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              *)this,(__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)__i);
LAB_08ac4de7:
  IndexEntry::~IndexEntry(&local_68,(int)__i);
  return (index_vector_const_it)(pair<long_unsigned_int,_IndexEntry> *)this;
code_r0x08ac4d43:
  __i = &local_74._M_current;
  __gnu_cxx::
  __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*>
            ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              *)this,(__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)__i);
  goto LAB_08ac4de7;
}

```

---

## freeContent

```asm
// === 08ac5448 PackSet::freeContent  [0x08ac5448-0x8ac54ed] ===
 8ac5448:	55                   	push   %ebp
 8ac5449:	89 e5                	mov    %esp,%ebp
 8ac544b:	83 ec 38             	sub    $0x38,%esp
 8ac544e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac5451:	89 04 24             	mov    %eax,(%esp)
 8ac5454:	e8 83 25 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac5459:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac545c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac545f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5463:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac5466:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac546a:	89 04 24             	mov    %eax,(%esp)
 8ac546d:	e8 8e f9 ff ff       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac5472:	83 ec 04             	sub    $0x4,%esp
 8ac5475:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5478:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac547b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac547e:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5481:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5484:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5488:	89 04 24             	mov    %eax,(%esp)
 8ac548b:	e8 fa 24 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5490:	83 ec 04             	sub    $0x4,%esp
 8ac5493:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5496:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac549a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac549d:	89 04 24             	mov    %eax,(%esp)
 8ac54a0:	e8 0b 25 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac54a5:	84 c0                	test   %al,%al
 8ac54a7:	74 43                	je     8ac54ec <_ZN7PackSet11freeContentEPKc+0xa4>
 8ac54a9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac54ac:	89 04 24             	mov    %eax,(%esp)
 8ac54af:	e8 70 25 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac54b4:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac54b7:	85 c0                	test   %eax,%eax
 8ac54b9:	0f 95 c0             	setne  %al
 8ac54bc:	84 c0                	test   %al,%al
 8ac54be:	74 2c                	je     8ac54ec <_ZN7PackSet11freeContentEPKc+0xa4>
 8ac54c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac54c3:	89 04 24             	mov    %eax,(%esp)
 8ac54c6:	e8 59 25 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac54cb:	8b 40 1c             	mov    0x1c(%eax),%eax
 8ac54ce:	85 c0                	test   %eax,%eax
 8ac54d0:	74 08                	je     8ac54da <_ZN7PackSet11freeContentEPKc+0x92>
 8ac54d2:	89 04 24             	mov    %eax,(%esp)
 8ac54d5:	e8 d6 f6 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac54da:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac54dd:	89 04 24             	mov    %eax,(%esp)
 8ac54e0:	e8 3f 25 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac54e5:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 8ac54ec:	c9                   	leave
 8ac54ed:	c3                   	ret

```

```c
// PackSet::freeContent @ 0x8ac5448

/* DWARF original prototype: void freeContent(PackSet * this, NCHAR * name) */

void __thiscall PackSet::freeContent(PackSet *this,NCHAR *name)

{
  uchar *puVar1;
  bool bVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_10;
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_14);
  find((PackSet *)&local_20,(NCHAR *)this);
  local_14._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_10);
  bVar2 = __gnu_cxx::
          operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_14,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_10);
  if (bVar2) {
    ppVar3 = __gnu_cxx::
             __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
             ::operator->(&local_14);
    if ((ppVar3->second).content_ != (uchar *)0x0) {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      puVar1 = (ppVar3->second).content_;
      if (puVar1 != (uchar *)0x0) {
        operator_delete__(puVar1);
      }
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      (ppVar3->second).content_ = (uchar *)0x0;
    }
  }
  return;
}

```

---

## get

```asm
// === 08ac5060 PackSet::get  [0x08ac5060-0x8ac51cd] ===
 8ac5060:	55                   	push   %ebp
 8ac5061:	89 e5                	mov    %esp,%ebp
 8ac5063:	53                   	push   %ebx
 8ac5064:	83 ec 44             	sub    $0x44,%esp
 8ac5067:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac506a:	89 04 24             	mov    %eax,(%esp)
 8ac506d:	e8 6a 29 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac5072:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ac5076:	74 0c                	je     8ac5084 <_ZN7PackSet3getEPKcPhjPj+0x24>
 8ac5078:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ac507c:	74 06                	je     8ac5084 <_ZN7PackSet3getEPKcPhjPj+0x24>
 8ac507e:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 8ac5082:	75 37                	jne    8ac50bb <_ZN7PackSet3getEPKcPhjPj+0x5b>
 8ac5084:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5089:	c7 44 24 10 94 ea e2 	movl   $0x8e2ea94,0x10(%esp)
 8ac5090:	08 
 8ac5091:	c7 44 24 0c 12 03 00 	movl   $0x312,0xc(%esp)
 8ac5098:	00 
 8ac5099:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac50a0:	08 
 8ac50a1:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac50a8:	08 
 8ac50a9:	89 04 24             	mov    %eax,(%esp)
 8ac50ac:	e8 df 89 5b ff       	call   807da90 <fprintf@plt>
 8ac50b1:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac50b6:	e9 0d 01 00 00       	jmp    8ac51c8 <_ZN7PackSet3getEPKcPhjPj+0x168>
 8ac50bb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac50be:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac50c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac50c5:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac50c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac50cc:	89 04 24             	mov    %eax,(%esp)
 8ac50cf:	e8 2c fd ff ff       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac50d4:	83 ec 04             	sub    $0x4,%esp
 8ac50d7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac50da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac50dd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac50e0:	8d 50 10             	lea    0x10(%eax),%edx
 8ac50e3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac50e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac50ea:	89 04 24             	mov    %eax,(%esp)
 8ac50ed:	e8 98 28 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac50f2:	83 ec 04             	sub    $0x4,%esp
 8ac50f5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac50f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac50fc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac50ff:	89 04 24             	mov    %eax,(%esp)
 8ac5102:	e8 b0 2b 00 00       	call   8ac7cb7 <_ZN9__gnu_cxxeqIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac5107:	84 c0                	test   %al,%al
 8ac5109:	74 37                	je     8ac5142 <_ZN7PackSet3getEPKcPhjPj+0xe2>
 8ac510b:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5110:	c7 44 24 10 94 ea e2 	movl   $0x8e2ea94,0x10(%esp)
 8ac5117:	08 
 8ac5118:	c7 44 24 0c 19 03 00 	movl   $0x319,0xc(%esp)
 8ac511f:	00 
 8ac5120:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5127:	08 
 8ac5128:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac512f:	08 
 8ac5130:	89 04 24             	mov    %eax,(%esp)
 8ac5133:	e8 58 89 5b ff       	call   807da90 <fprintf@plt>
 8ac5138:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac513d:	e9 86 00 00 00       	jmp    8ac51c8 <_ZN7PackSet3getEPKcPhjPj+0x168>
 8ac5142:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac5145:	89 04 24             	mov    %eax,(%esp)
 8ac5148:	e8 d7 28 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac514d:	8b 18                	mov    (%eax),%ebx
 8ac514f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac5152:	89 04 24             	mov    %eax,(%esp)
 8ac5155:	e8 ca 28 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac515a:	8d 50 04             	lea    0x4(%eax),%edx
 8ac515d:	8b 45 18             	mov    0x18(%ebp),%eax
 8ac5160:	89 44 24 14          	mov    %eax,0x14(%esp)
 8ac5164:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac5167:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ac516b:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac516e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5172:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ac5176:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5179:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac517d:	89 14 24             	mov    %edx,(%esp)
 8ac5180:	e8 27 ed ff ff       	call   8ac3eac <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj>
 8ac5185:	83 f8 01             	cmp    $0x1,%eax
 8ac5188:	0f 94 c0             	sete   %al
 8ac518b:	84 c0                	test   %al,%al
 8ac518d:	74 34                	je     8ac51c3 <_ZN7PackSet3getEPKcPhjPj+0x163>
 8ac518f:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5194:	c7 44 24 10 94 ea e2 	movl   $0x8e2ea94,0x10(%esp)
 8ac519b:	08 
 8ac519c:	c7 44 24 0c 1f 03 00 	movl   $0x31f,0xc(%esp)
 8ac51a3:	00 
 8ac51a4:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac51ab:	08 
 8ac51ac:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac51b3:	08 
 8ac51b4:	89 04 24             	mov    %eax,(%esp)
 8ac51b7:	e8 d4 88 5b ff       	call   807da90 <fprintf@plt>
 8ac51bc:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac51c1:	eb 05                	jmp    8ac51c8 <_ZN7PackSet3getEPKcPhjPj+0x168>
 8ac51c3:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac51c8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ac51cb:	c9                   	leave
 8ac51cc:	c3                   	ret
 8ac51cd:	90                   	nop

```

```c
// PackSet::get @ 0x8ac5060

/* DWARF original prototype: pack_ret_t get(PackSet * this, NCHAR * name, uchar * buffer, uint
   buffer_size, uint * content_size) */

pack_ret_t __thiscall
PackSet::get(PackSet *this,NCHAR *name,uchar *buffer,uint buffer_size,uint *content_size)

{
  hash_t code;
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_10 [2];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_14);
  if (((name == (NCHAR *)0x0) || (buffer == (uchar *)0x0)) || (content_size == (uint *)0x0)) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x312,"get");
    pVar2 = PACK_ERROR;
  }
  else {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_14._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_10);
    bVar1 = __gnu_cxx::
            operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_14,local_10);
    if (bVar1) {
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x319,"get");
      pVar2 = PACK_ERROR;
    }
    else {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      code = ppVar3->first;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      pVar2 = IndexEntry::get_content(&ppVar3->second,this,code,buffer,buffer_size,content_size);
      if (pVar2 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",799,"get");
        pVar2 = PACK_ERROR;
      }
      else {
        pVar2 = PACK_OK;
      }
    }
  }
  return pVar2;
}

```

---

## get_08ac51ce

```asm
// === 08ac51ce PackSet::get  [0x08ac51ce-0x8ac5331] ===
 8ac51ce:	55                   	push   %ebp
 8ac51cf:	89 e5                	mov    %esp,%ebp
 8ac51d1:	53                   	push   %ebx
 8ac51d2:	83 ec 44             	sub    $0x44,%esp
 8ac51d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac51d8:	89 04 24             	mov    %eax,(%esp)
 8ac51db:	e8 fc 27 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac51e0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ac51e4:	74 0c                	je     8ac51f2 <_ZN7PackSet3getEPKcPPhPj+0x24>
 8ac51e6:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ac51ea:	74 06                	je     8ac51f2 <_ZN7PackSet3getEPKcPPhPj+0x24>
 8ac51ec:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ac51f0:	75 37                	jne    8ac5229 <_ZN7PackSet3getEPKcPPhPj+0x5b>
 8ac51f2:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac51f7:	c7 44 24 10 90 ea e2 	movl   $0x8e2ea90,0x10(%esp)
 8ac51fe:	08 
 8ac51ff:	c7 44 24 0c 2c 03 00 	movl   $0x32c,0xc(%esp)
 8ac5206:	00 
 8ac5207:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac520e:	08 
 8ac520f:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5216:	08 
 8ac5217:	89 04 24             	mov    %eax,(%esp)
 8ac521a:	e8 71 88 5b ff       	call   807da90 <fprintf@plt>
 8ac521f:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5224:	e9 03 01 00 00       	jmp    8ac532c <_ZN7PackSet3getEPKcPPhPj+0x15e>
 8ac5229:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac522c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac522f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5233:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac5236:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac523a:	89 04 24             	mov    %eax,(%esp)
 8ac523d:	e8 be fb ff ff       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac5242:	83 ec 04             	sub    $0x4,%esp
 8ac5245:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5248:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac524b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac524e:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5251:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5254:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5258:	89 04 24             	mov    %eax,(%esp)
 8ac525b:	e8 2a 27 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5260:	83 ec 04             	sub    $0x4,%esp
 8ac5263:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5266:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac526a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac526d:	89 04 24             	mov    %eax,(%esp)
 8ac5270:	e8 42 2a 00 00       	call   8ac7cb7 <_ZN9__gnu_cxxeqIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac5275:	84 c0                	test   %al,%al
 8ac5277:	74 34                	je     8ac52ad <_ZN7PackSet3getEPKcPPhPj+0xdf>
 8ac5279:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac527e:	c7 44 24 10 90 ea e2 	movl   $0x8e2ea90,0x10(%esp)
 8ac5285:	08 
 8ac5286:	c7 44 24 0c 33 03 00 	movl   $0x333,0xc(%esp)
 8ac528d:	00 
 8ac528e:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5295:	08 
 8ac5296:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac529d:	08 
 8ac529e:	89 04 24             	mov    %eax,(%esp)
 8ac52a1:	e8 ea 87 5b ff       	call   807da90 <fprintf@plt>
 8ac52a6:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac52ab:	eb 7f                	jmp    8ac532c <_ZN7PackSet3getEPKcPPhPj+0x15e>
 8ac52ad:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac52b0:	89 04 24             	mov    %eax,(%esp)
 8ac52b3:	e8 6c 27 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac52b8:	8b 18                	mov    (%eax),%ebx
 8ac52ba:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac52bd:	89 04 24             	mov    %eax,(%esp)
 8ac52c0:	e8 5f 27 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac52c5:	8d 50 04             	lea    0x4(%eax),%edx
 8ac52c8:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac52cb:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ac52cf:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac52d2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac52d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ac52da:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac52dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac52e1:	89 14 24             	mov    %edx,(%esp)
 8ac52e4:	e8 97 05 00 00       	call   8ac5880 <_ZN10IndexEntry11get_contentEP7PackSetmPPhPj>
 8ac52e9:	83 f8 01             	cmp    $0x1,%eax
 8ac52ec:	0f 94 c0             	sete   %al
 8ac52ef:	84 c0                	test   %al,%al
 8ac52f1:	74 34                	je     8ac5327 <_ZN7PackSet3getEPKcPPhPj+0x159>
 8ac52f3:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac52f8:	c7 44 24 10 90 ea e2 	movl   $0x8e2ea90,0x10(%esp)
 8ac52ff:	08 
 8ac5300:	c7 44 24 0c 39 03 00 	movl   $0x339,0xc(%esp)
 8ac5307:	00 
 8ac5308:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac530f:	08 
 8ac5310:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5317:	08 
 8ac5318:	89 04 24             	mov    %eax,(%esp)
 8ac531b:	e8 70 87 5b ff       	call   807da90 <fprintf@plt>
 8ac5320:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5325:	eb 05                	jmp    8ac532c <_ZN7PackSet3getEPKcPPhPj+0x15e>
 8ac5327:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac532c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8ac532f:	c9                   	leave
 8ac5330:	c3                   	ret
 8ac5331:	90                   	nop

```

```c
// PackSet::get @ 0x8ac51ce

/* DWARF original prototype: pack_ret_t get(PackSet * this, NCHAR * name, uchar * * content, uint *
   content_size) */

pack_ret_t __thiscall PackSet::get(PackSet *this,NCHAR *name,uchar **content,uint *content_size)

{
  hash_t code;
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_10 [2];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_14);
  if (((name == (NCHAR *)0x0) || (content == (uchar **)0x0)) || (content_size == (uint *)0x0)) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x32c,"get");
    pVar2 = PACK_ERROR;
  }
  else {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_14._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_10);
    bVar1 = __gnu_cxx::
            operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_14,local_10);
    if (bVar1) {
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x333,"get");
      pVar2 = PACK_ERROR;
    }
    else {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      code = ppVar3->first;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_14);
      pVar2 = IndexEntry::get_content(&ppVar3->second,this,code,content,content_size);
      if (pVar2 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x339,"get");
        pVar2 = PACK_ERROR;
      }
      else {
        pVar2 = PACK_OK;
      }
    }
  }
  return pVar2;
}

```

---

## header_size

```asm
// === 08ac4930 PackSet::header_size  [0x08ac4930-0x8ac493b] ===
 8ac4930:	55                   	push   %ebp
 8ac4931:	89 e5                	mov    %esp,%ebp
 8ac4933:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4936:	8b 40 08             	mov    0x8(%eax),%eax
 8ac4939:	5d                   	pop    %ebp
 8ac493a:	c3                   	ret
 8ac493b:	90                   	nop

```

```c
// PackSet::header_size @ 0x8ac4930

/* DWARF original prototype: uint header_size(PackSet * this) */

uint __thiscall PackSet::header_size(PackSet *this)

{
  return this->header_size_;
}

```

---

## indexes

```asm
// === 08ac493c PackSet::indexes  [0x08ac493c-0x8ac4947] ===
 8ac493c:	55                   	push   %ebp
 8ac493d:	89 e5                	mov    %esp,%ebp
 8ac493f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4942:	83 c0 10             	add    $0x10,%eax
 8ac4945:	5d                   	pop    %ebp
 8ac4946:	c3                   	ret
 8ac4947:	90                   	nop

```

```c
// PackSet::indexes @ 0x8ac493c

/* DWARF original prototype: index_vector_t * indexes(PackSet * this) */

index_vector_t * __thiscall PackSet::indexes(PackSet *this)

{
  return &this->indexes_;
}

```

---

## indexes_08ac4948

```asm
// === 08ac4948 PackSet::indexes  [0x08ac4948-0x8ac4953] ===
 8ac4948:	55                   	push   %ebp
 8ac4949:	89 e5                	mov    %esp,%ebp
 8ac494b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac494e:	83 c0 10             	add    $0x10,%eax
 8ac4951:	5d                   	pop    %ebp
 8ac4952:	c3                   	ret
 8ac4953:	90                   	nop

```

```c
// PackSet::indexes @ 0x8ac4948

/* DWARF original prototype: index_vector_t * indexes(PackSet * this) */

index_vector_t * __thiscall PackSet::indexes(PackSet *this)

{
  return &this->indexes_;
}

```

---

## is_dirty

```asm
// === 08ac4970 PackSet::is_dirty  [0x08ac4970-0x8ac498b] ===
 8ac4970:	55                   	push   %ebp
 8ac4971:	89 e5                	mov    %esp,%ebp
 8ac4973:	83 ec 18             	sub    $0x18,%esp
 8ac4976:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4979:	83 c0 1c             	add    $0x1c,%eax
 8ac497c:	89 04 24             	mov    %eax,(%esp)
 8ac497f:	e8 ea 2f 00 00       	call   8ac796e <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE4sizeEv>
 8ac4984:	85 c0                	test   %eax,%eax
 8ac4986:	0f 95 c0             	setne  %al
 8ac4989:	c9                   	leave
 8ac498a:	c3                   	ret
 8ac498b:	90                   	nop

```

```c
// PackSet::is_dirty @ 0x8ac4970

/* DWARF original prototype: bool is_dirty(PackSet * this) */

bool __thiscall PackSet::is_dirty(PackSet *this)

{
  size_t sVar1;
  
  sVar1 = std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::size(&this->addeds_);
  return sVar1 != 0;
}

```

---

## is_exist

```asm
// === 08ac498c PackSet::is_exist  [0x08ac498c-0x8ac49d9] ===
 8ac498c:	55                   	push   %ebp
 8ac498d:	89 e5                	mov    %esp,%ebp
 8ac498f:	83 ec 28             	sub    $0x28,%esp
 8ac4992:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac4995:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac4998:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac499c:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac499f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac49a3:	89 04 24             	mov    %eax,(%esp)
 8ac49a6:	e8 55 04 00 00       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac49ab:	83 ec 04             	sub    $0x4,%esp
 8ac49ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac49b1:	8d 50 10             	lea    0x10(%eax),%edx
 8ac49b4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac49b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac49bb:	89 04 24             	mov    %eax,(%esp)
 8ac49be:	e8 c7 2f 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac49c3:	83 ec 04             	sub    $0x4,%esp
 8ac49c6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac49c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac49cd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac49d0:	89 04 24             	mov    %eax,(%esp)
 8ac49d3:	e8 d8 2f 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac49d8:	c9                   	leave
 8ac49d9:	c3                   	ret

```

```c
// PackSet::is_exist @ 0x8ac498c

/* DWARF original prototype: bool is_exist(PackSet * this, NCHAR * name) */

bool __thiscall PackSet::is_exist(PackSet *this,NCHAR *name)

{
  bool bVar1;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_14;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_10;
  
                    /* Unresolved local var: index_vector_it rval@[???] */
  find((PackSet *)&local_14,(NCHAR *)this);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::end(&local_10);
  bVar1 = __gnu_cxx::
          operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    (&local_14,
                     (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)&local_10);
  return bVar1;
}

```

---

## is_ready

```asm
// === 08ac4954 PackSet::is_ready  [0x08ac4954-0x8ac496f] ===
 8ac4954:	55                   	push   %ebp
 8ac4955:	89 e5                	mov    %esp,%ebp
 8ac4957:	83 ec 18             	sub    $0x18,%esp
 8ac495a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac495d:	83 c0 10             	add    $0x10,%eax
 8ac4960:	89 04 24             	mov    %eax,(%esp)
 8ac4963:	e8 06 30 00 00       	call   8ac796e <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE4sizeEv>
 8ac4968:	85 c0                	test   %eax,%eax
 8ac496a:	0f 95 c0             	setne  %al
 8ac496d:	c9                   	leave
 8ac496e:	c3                   	ret
 8ac496f:	90                   	nop

```

```c
// PackSet::is_ready @ 0x8ac4954

/* DWARF original prototype: bool is_ready(PackSet * this) */

bool __thiscall PackSet::is_ready(PackSet *this)

{
  size_t sVar1;
  
  sVar1 = std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::size(&this->indexes_);
  return sVar1 != 0;
}

```

---

## modified

```asm
// === 08ac54ee PackSet::modified  [0x08ac54ee-0x8ac56a1] ===
 8ac54ee:	55                   	push   %ebp
 8ac54ef:	89 e5                	mov    %esp,%ebp
 8ac54f1:	83 ec 48             	sub    $0x48,%esp
 8ac54f4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac54f7:	89 04 24             	mov    %eax,(%esp)
 8ac54fa:	e8 dd 24 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac54ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5502:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac5505:	85 c0                	test   %eax,%eax
 8ac5507:	74 54                	je     8ac555d <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x6f>
 8ac5509:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac550e:	c7 44 24 08 6e e8 e2 	movl   $0x8e2e86e,0x8(%esp)
 8ac5515:	08 
 8ac5516:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac551d:	08 
 8ac551e:	89 04 24             	mov    %eax,(%esp)
 8ac5521:	e8 6a 85 5b ff       	call   807da90 <fprintf@plt>
 8ac5526:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac552b:	c7 44 24 10 7f ea e2 	movl   $0x8e2ea7f,0x10(%esp)
 8ac5532:	08 
 8ac5533:	c7 44 24 0c 69 03 00 	movl   $0x369,0xc(%esp)
 8ac553a:	00 
 8ac553b:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5542:	08 
 8ac5543:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac554a:	08 
 8ac554b:	89 04 24             	mov    %eax,(%esp)
 8ac554e:	e8 3d 85 5b ff       	call   807da90 <fprintf@plt>
 8ac5553:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5558:	e9 43 01 00 00       	jmp    8ac56a0 <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x1b2>
 8ac555d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac5560:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac5563:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5567:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac556a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac556e:	89 04 24             	mov    %eax,(%esp)
 8ac5571:	e8 8a f8 ff ff       	call   8ac4e00 <_ZN7PackSet4findEPKc>
 8ac5576:	83 ec 04             	sub    $0x4,%esp
 8ac5579:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac557c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac557f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5582:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5585:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac5588:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac558c:	89 04 24             	mov    %eax,(%esp)
 8ac558f:	e8 f6 23 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5594:	83 ec 04             	sub    $0x4,%esp
 8ac5597:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac559a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac559e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac55a1:	89 04 24             	mov    %eax,(%esp)
 8ac55a4:	e8 0e 27 00 00       	call   8ac7cb7 <_ZN9__gnu_cxxeqIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac55a9:	84 c0                	test   %al,%al
 8ac55ab:	74 53                	je     8ac5600 <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x112>
 8ac55ad:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac55b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac55b5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac55b9:	c7 44 24 04 84 e8 e2 	movl   $0x8e2e884,0x4(%esp)
 8ac55c0:	08 
 8ac55c1:	89 04 24             	mov    %eax,(%esp)
 8ac55c4:	e8 c7 84 5b ff       	call   807da90 <fprintf@plt>
 8ac55c9:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac55ce:	c7 44 24 10 7f ea e2 	movl   $0x8e2ea7f,0x10(%esp)
 8ac55d5:	08 
 8ac55d6:	c7 44 24 0c 70 03 00 	movl   $0x370,0xc(%esp)
 8ac55dd:	00 
 8ac55de:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac55e5:	08 
 8ac55e6:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac55ed:	08 
 8ac55ee:	89 04 24             	mov    %eax,(%esp)
 8ac55f1:	e8 9a 84 5b ff       	call   807da90 <fprintf@plt>
 8ac55f6:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac55fb:	e9 a0 00 00 00       	jmp    8ac56a0 <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x1b2>
 8ac5600:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac5603:	89 04 24             	mov    %eax,(%esp)
 8ac5606:	e8 19 24 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac560b:	83 c0 04             	add    $0x4,%eax
 8ac560e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac5611:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac5614:	8b 40 18             	mov    0x18(%eax),%eax
 8ac5617:	85 c0                	test   %eax,%eax
 8ac5619:	74 22                	je     8ac563d <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x14f>
 8ac561b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac561e:	8b 40 18             	mov    0x18(%eax),%eax
 8ac5621:	85 c0                	test   %eax,%eax
 8ac5623:	74 0e                	je     8ac5633 <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x145>
 8ac5625:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac5628:	8b 40 18             	mov    0x18(%eax),%eax
 8ac562b:	89 04 24             	mov    %eax,(%esp)
 8ac562e:	e8 7d f5 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac5633:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac5636:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8ac563d:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac5640:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5644:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5647:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac564b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac564e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5652:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac5655:	89 04 24             	mov    %eax,(%esp)
 8ac5658:	e8 19 ee ff ff       	call   8ac4476 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess>
 8ac565d:	83 f8 01             	cmp    $0x1,%eax
 8ac5660:	0f 94 c0             	sete   %al
 8ac5663:	84 c0                	test   %al,%al
 8ac5665:	74 34                	je     8ac569b <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x1ad>
 8ac5667:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac566c:	c7 44 24 10 7f ea e2 	movl   $0x8e2ea7f,0x10(%esp)
 8ac5673:	08 
 8ac5674:	c7 44 24 0c 7d 03 00 	movl   $0x37d,0xc(%esp)
 8ac567b:	00 
 8ac567c:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5683:	08 
 8ac5684:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac568b:	08 
 8ac568c:	89 04 24             	mov    %eax,(%esp)
 8ac568f:	e8 fc 83 5b ff       	call   807da90 <fprintf@plt>
 8ac5694:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5699:	eb 05                	jmp    8ac56a0 <_ZN7PackSet8modifiedEPKcP16IPackFileProcess+0x1b2>
 8ac569b:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac56a0:	c9                   	leave
 8ac56a1:	c3                   	ret

```

```c
// PackSet::modified @ 0x8ac54ee

/* DWARF original prototype: pack_ret_t modified(PackSet * this, NCHAR * name, IPackFileProcess *
   process) */

pack_ret_t __thiscall PackSet::modified(PackSet *this,NCHAR *name,IPackFileProcess *process)

{
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  FILE *local_20;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_18;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_14;
  
                    /* Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: IndexEntry * r_entry@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_18);
  if (this->type_ == PACK_LOAD_FULL) {
    find((PackSet *)&local_20,(NCHAR *)this);
    local_18._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_20;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end(&local_14);
    bVar1 = __gnu_cxx::
            operator==<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      (&local_18,
                       (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        *)&local_14);
    if (bVar1) {
      fprintf(stdout,"find failed. %s",name);
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x370,"modified");
      pVar2 = PACK_ERROR;
    }
    else {
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_18);
      local_14.
      super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ._M_impl._M_finish = (pair<long_unsigned_int,_IndexEntry> *)&ppVar3->second;
      if ((ppVar3->second).content_ != (uchar *)0x0) {
        if ((ppVar3->second).content_ != (uchar *)0x0) {
          operator_delete__((ppVar3->second).content_);
        }
        ((local_14.
          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ._M_impl._M_finish)->second).offset_ = 0;
      }
      pVar2 = IndexEntry::update_content_from_file
                        ((IndexEntry *)
                         local_14.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish,name,this,process);
      if (pVar2 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x37d,"modified");
        pVar2 = PACK_ERROR;
      }
      else {
        pVar2 = PACK_OK;
      }
    }
  }
  else {
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x369,"modified");
    pVar2 = PACK_ERROR;
  }
  return pVar2;
}

```

---

## open

```asm
// === 08ac5a52 PackSet::open  [0x08ac5a52-0x8ac60ef] ===
 8ac5a52:	55                   	push   %ebp
 8ac5a53:	89 e5                	mov    %esp,%ebp
 8ac5a55:	56                   	push   %esi
 8ac5a56:	53                   	push   %ebx
 8ac5a57:	81 ec 90 00 00 00    	sub    $0x90,%esp
 8ac5a5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5a60:	89 04 24             	mov    %eax,(%esp)
 8ac5a63:	e8 0c 1c 00 00       	call   8ac7674 <_ZN7PackSet18UsingEncryptedFileEv>
 8ac5a68:	84 c0                	test   %al,%al
 8ac5a6a:	74 27                	je     8ac5a93 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x41>
 8ac5a6c:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac5a6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5a73:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac5a76:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac5a7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac5a7d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5a81:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5a84:	89 04 24             	mov    %eax,(%esp)
 8ac5a87:	e8 64 06 00 00       	call   8ac60f0 <_ZN7PackSet17openEncryptedFileEPKcS1_16pack_load_type_t>
 8ac5a8c:	89 c3                	mov    %eax,%ebx
 8ac5a8e:	e9 51 06 00 00       	jmp    8ac60e4 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x692>
 8ac5a93:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5a96:	89 04 24             	mov    %eax,(%esp)
 8ac5a99:	e8 3e 1f 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac5a9e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac5aa1:	89 04 24             	mov    %eax,(%esp)
 8ac5aa4:	e8 27 0b c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ac5aa9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5aac:	89 04 24             	mov    %eax,(%esp)
 8ac5aaf:	e8 a0 ee ff ff       	call   8ac4954 <_ZNK7PackSet8is_readyEv>
 8ac5ab4:	84 c0                	test   %al,%al
 8ac5ab6:	74 54                	je     8ac5b0c <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0xba>
 8ac5ab8:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5abd:	c7 44 24 08 9c e8 e2 	movl   $0x8e2e89c,0x8(%esp)
 8ac5ac4:	08 
 8ac5ac5:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac5acc:	08 
 8ac5acd:	89 04 24             	mov    %eax,(%esp)
 8ac5ad0:	e8 bb 7f 5b ff       	call   807da90 <fprintf@plt>
 8ac5ad5:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5ada:	c7 44 24 10 68 ea e2 	movl   $0x8e2ea68,0x10(%esp)
 8ac5ae1:	08 
 8ac5ae2:	c7 44 24 0c d8 03 00 	movl   $0x3d8,0xc(%esp)
 8ac5ae9:	00 
 8ac5aea:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5af1:	08 
 8ac5af2:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5af9:	08 
 8ac5afa:	89 04 24             	mov    %eax,(%esp)
 8ac5afd:	e8 8e 7f 5b ff       	call   807da90 <fprintf@plt>
 8ac5b02:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac5b07:	e9 cd 05 00 00       	jmp    8ac60d9 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x687>
 8ac5b0c:	c7 44 24 04 49 e8 e2 	movl   $0x8e2e849,0x4(%esp)
 8ac5b13:	08 
 8ac5b14:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac5b17:	89 04 24             	mov    %eax,(%esp)
 8ac5b1a:	e8 51 8c 5b ff       	call   807e770 <fopen@plt>
 8ac5b1f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ac5b22:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8ac5b26:	75 53                	jne    8ac5b7b <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x129>
 8ac5b28:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5b2d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac5b30:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5b34:	c7 44 24 04 ab e8 e2 	movl   $0x8e2e8ab,0x4(%esp)
 8ac5b3b:	08 
 8ac5b3c:	89 04 24             	mov    %eax,(%esp)
 8ac5b3f:	e8 4c 7f 5b ff       	call   807da90 <fprintf@plt>
 8ac5b44:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5b49:	c7 44 24 10 68 ea e2 	movl   $0x8e2ea68,0x10(%esp)
 8ac5b50:	08 
 8ac5b51:	c7 44 24 0c e1 03 00 	movl   $0x3e1,0xc(%esp)
 8ac5b58:	00 
 8ac5b59:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5b60:	08 
 8ac5b61:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5b68:	08 
 8ac5b69:	89 04 24             	mov    %eax,(%esp)
 8ac5b6c:	e8 1f 7f 5b ff       	call   807da90 <fprintf@plt>
 8ac5b71:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac5b76:	e9 5e 05 00 00       	jmp    8ac60d9 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x687>
 8ac5b7b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5b7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5b82:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac5b85:	89 04 24             	mov    %eax,(%esp)
 8ac5b88:	e8 06 dc ff ff       	call   8ac3793 <_ZL10_fread_strRSsP8_IO_FILE>
 8ac5b8d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ac5b91:	0f 84 8a 00 00 00    	je     8ac5c21 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x1cf>
 8ac5b97:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac5b9a:	89 04 24             	mov    %eax,(%esp)
 8ac5b9d:	e8 4e 09 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac5ba2:	8b 55 10             	mov    0x10(%ebp),%edx
 8ac5ba5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5ba9:	89 04 24             	mov    %eax,(%esp)
 8ac5bac:	e8 2f 89 5b ff       	call   807e4e0 <strcmp@plt>
 8ac5bb1:	85 c0                	test   %eax,%eax
 8ac5bb3:	0f 95 c0             	setne  %al
 8ac5bb6:	84 c0                	test   %al,%al
 8ac5bb8:	74 67                	je     8ac5c21 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x1cf>
 8ac5bba:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5bbd:	89 04 24             	mov    %eax,(%esp)
 8ac5bc0:	e8 db 82 5b ff       	call   807dea0 <fclose@plt>
 8ac5bc5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac5bc8:	89 04 24             	mov    %eax,(%esp)
 8ac5bcb:	e8 20 09 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac5bd0:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8ac5bd6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac5bda:	c7 44 24 04 be e8 e2 	movl   $0x8e2e8be,0x4(%esp)
 8ac5be1:	08 
 8ac5be2:	89 14 24             	mov    %edx,(%esp)
 8ac5be5:	e8 a6 7e 5b ff       	call   807da90 <fprintf@plt>
 8ac5bea:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac5bef:	c7 44 24 10 68 ea e2 	movl   $0x8e2ea68,0x10(%esp)
 8ac5bf6:	08 
 8ac5bf7:	c7 44 24 0c ec 03 00 	movl   $0x3ec,0xc(%esp)
 8ac5bfe:	00 
 8ac5bff:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5c06:	08 
 8ac5c07:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac5c0e:	08 
 8ac5c0f:	89 04 24             	mov    %eax,(%esp)
 8ac5c12:	e8 79 7e 5b ff       	call   807da90 <fprintf@plt>
 8ac5c17:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac5c1c:	e9 b8 04 00 00       	jmp    8ac60d9 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x687>
 8ac5c21:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5c24:	8d 50 04             	lea    0x4(%eax),%edx
 8ac5c27:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5c2a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5c2e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5c35:	00 
 8ac5c36:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac5c3d:	00 
 8ac5c3e:	89 14 24             	mov    %edx,(%esp)
 8ac5c41:	e8 0a 81 5b ff       	call   807dd50 <fread@plt>
 8ac5c46:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5c49:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5c4d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5c54:	00 
 8ac5c55:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac5c5c:	00 
 8ac5c5d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8ac5c60:	89 04 24             	mov    %eax,(%esp)
 8ac5c63:	e8 e8 80 5b ff       	call   807dd50 <fread@plt>
 8ac5c68:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5c6b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5c6f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5c76:	00 
 8ac5c77:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac5c7e:	00 
 8ac5c7f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac5c82:	89 04 24             	mov    %eax,(%esp)
 8ac5c85:	e8 c6 80 5b ff       	call   807dd50 <fread@plt>
 8ac5c8a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5c8d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5c91:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5c98:	00 
 8ac5c99:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac5ca0:	00 
 8ac5ca1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac5ca4:	89 04 24             	mov    %eax,(%esp)
 8ac5ca7:	e8 a4 80 5b ff       	call   807dd50 <fread@plt>
 8ac5cac:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ac5caf:	89 04 24             	mov    %eax,(%esp)
 8ac5cb2:	e8 09 d1 c5 ff       	call   8722dc0 <_Znaj>
 8ac5cb7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ac5cba:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ac5cbd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ac5cc0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac5cc4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5ccb:	00 
 8ac5ccc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5cd0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5cd3:	89 04 24             	mov    %eax,(%esp)
 8ac5cd6:	e8 75 80 5b ff       	call   807dd50 <fread@plt>
 8ac5cdb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5cde:	89 04 24             	mov    %eax,(%esp)
 8ac5ce1:	e8 ea 7c 5b ff       	call   807d9d0 <ftell@plt>
 8ac5ce6:	89 c2                	mov    %eax,%edx
 8ac5ce8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5ceb:	89 50 08             	mov    %edx,0x8(%eax)
 8ac5cee:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5cf1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ac5cf4:	89 10                	mov    %edx,(%eax)
 8ac5cf6:	8b 5d ac             	mov    -0x54(%ebp),%ebx
 8ac5cf9:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 8ac5cfc:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8ac5cff:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ac5d02:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8ac5d06:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8ac5d09:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ac5d0d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac5d11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5d15:	89 04 24             	mov    %eax,(%esp)
 8ac5d18:	e8 6e dc ff ff       	call   8ac398b <_ZL16_decrypt_N_crc32mmmPhj>
 8ac5d1d:	85 c0                	test   %eax,%eax
 8ac5d1f:	0f 94 c0             	sete   %al
 8ac5d22:	84 c0                	test   %al,%al
 8ac5d24:	74 1b                	je     8ac5d41 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x2ef>
 8ac5d26:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8ac5d2a:	74 0b                	je     8ac5d37 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x2e5>
 8ac5d2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5d2f:	89 04 24             	mov    %eax,(%esp)
 8ac5d32:	e8 79 ee c5 ff       	call   8724bb0 <_ZdaPv>
 8ac5d37:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac5d3c:	e9 98 03 00 00       	jmp    8ac60d9 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x687>
 8ac5d41:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5d44:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8ac5d47:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac5d4a:	89 04 24             	mov    %eax,(%esp)
 8ac5d4d:	e8 92 20 00 00       	call   8ac7de4 <_ZNSt4pairIm10IndexEntryEC1Ev>
 8ac5d52:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ac5d55:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac5d58:	8d 4a 10             	lea    0x10(%edx),%ecx
 8ac5d5b:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8ac5d5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac5d62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5d66:	89 0c 24             	mov    %ecx,(%esp)
 8ac5d69:	e8 e4 22 00 00       	call   8ac8052 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE6resizeEjS2_>
 8ac5d6e:	eb 18                	jmp    8ac5d88 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x336>
 8ac5d70:	89 d3                	mov    %edx,%ebx
 8ac5d72:	89 c6                	mov    %eax,%esi
 8ac5d74:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac5d77:	89 04 24             	mov    %eax,(%esp)
 8ac5d7a:	e8 31 1a 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac5d7f:	89 f0                	mov    %esi,%eax
 8ac5d81:	89 da                	mov    %ebx,%edx
 8ac5d83:	e9 36 03 00 00       	jmp    8ac60be <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x66c>
 8ac5d88:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac5d8b:	89 04 24             	mov    %eax,(%esp)
 8ac5d8e:	e8 1d 1a 00 00       	call   8ac77b0 <_ZNSt4pairIm10IndexEntryED1Ev>
 8ac5d93:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5d96:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5d99:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac5d9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5da0:	89 04 24             	mov    %eax,(%esp)
 8ac5da3:	e8 42 1c 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac5da8:	83 ec 04             	sub    $0x4,%esp
 8ac5dab:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8ac5dae:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8ac5db1:	eb 43                	jmp    8ac5df6 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x3a4>
 8ac5db3:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5db6:	89 04 24             	mov    %eax,(%esp)
 8ac5db9:	e8 66 1c 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac5dbe:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8ac5dc1:	8b 12                	mov    (%edx),%edx
 8ac5dc3:	89 10                	mov    %edx,(%eax)
 8ac5dc5:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8ac5dc8:	83 c0 04             	add    $0x4,%eax
 8ac5dcb:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8ac5dce:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5dd1:	89 04 24             	mov    %eax,(%esp)
 8ac5dd4:	e8 4b 1c 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac5dd9:	8d 50 04             	lea    0x4(%eax),%edx
 8ac5ddc:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8ac5ddf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5de3:	89 14 24             	mov    %edx,(%esp)
 8ac5de6:	e8 15 e4 ff ff       	call   8ac4200 <_ZN10IndexEntry9read_infoERPh>
 8ac5deb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5dee:	89 04 24             	mov    %eax,(%esp)
 8ac5df1:	e8 18 1c 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac5df6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5df9:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5dfc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac5dff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5e03:	89 04 24             	mov    %eax,(%esp)
 8ac5e06:	e8 7f 1b 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5e0b:	83 ec 04             	sub    $0x4,%esp
 8ac5e0e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac5e11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5e15:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5e18:	89 04 24             	mov    %eax,(%esp)
 8ac5e1b:	e8 90 1b 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac5e20:	84 c0                	test   %al,%al
 8ac5e22:	75 8f                	jne    8ac5db3 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x361>
 8ac5e24:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8ac5e28:	74 0b                	je     8ac5e35 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x3e3>
 8ac5e2a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5e2d:	89 04 24             	mov    %eax,(%esp)
 8ac5e30:	e8 7b ed c5 ff       	call   8724bb0 <_ZdaPv>
 8ac5e35:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ac5e39:	0f 85 0a 01 00 00    	jne    8ac5f49 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x4f7>
 8ac5e3f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8ac5e46:	00 
 8ac5e47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac5e4e:	00 
 8ac5e4f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5e52:	89 04 24             	mov    %eax,(%esp)
 8ac5e55:	e8 56 82 5b ff       	call   807e0b0 <fseek@plt>
 8ac5e5a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5e5d:	89 04 24             	mov    %eax,(%esp)
 8ac5e60:	e8 6b 7b 5b ff       	call   807d9d0 <ftell@plt>
 8ac5e65:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ac5e68:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac5e6f:	00 
 8ac5e70:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac5e77:	00 
 8ac5e78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5e7b:	89 04 24             	mov    %eax,(%esp)
 8ac5e7e:	e8 2d 82 5b ff       	call   807e0b0 <fseek@plt>
 8ac5e83:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac5e86:	89 04 24             	mov    %eax,(%esp)
 8ac5e89:	e8 32 cf c5 ff       	call   8722dc0 <_Znaj>
 8ac5e8e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac5e91:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5e94:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac5e98:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5e9f:	00 
 8ac5ea0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac5ea3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5ea7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac5eaa:	89 04 24             	mov    %eax,(%esp)
 8ac5ead:	e8 9e 7e 5b ff       	call   807dd50 <fread@plt>
 8ac5eb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5eb5:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5eb8:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac5ebb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5ebf:	89 04 24             	mov    %eax,(%esp)
 8ac5ec2:	e8 23 1b 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac5ec7:	83 ec 04             	sub    $0x4,%esp
 8ac5eca:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8ac5ecd:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8ac5ed0:	eb 2f                	jmp    8ac5f01 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x4af>
 8ac5ed2:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5ed5:	89 04 24             	mov    %eax,(%esp)
 8ac5ed8:	e8 47 1b 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac5edd:	8d 50 04             	lea    0x4(%eax),%edx
 8ac5ee0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5ee3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac5ee7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac5eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5eee:	89 14 24             	mov    %edx,(%esp)
 8ac5ef1:	e8 82 e4 ff ff       	call   8ac4378 <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet>
 8ac5ef6:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5ef9:	89 04 24             	mov    %eax,(%esp)
 8ac5efc:	e8 0d 1b 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac5f01:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5f04:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5f07:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac5f0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5f0e:	89 04 24             	mov    %eax,(%esp)
 8ac5f11:	e8 74 1a 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5f16:	83 ec 04             	sub    $0x4,%esp
 8ac5f19:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac5f1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5f20:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5f23:	89 04 24             	mov    %eax,(%esp)
 8ac5f26:	e8 85 1a 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac5f2b:	84 c0                	test   %al,%al
 8ac5f2d:	75 a3                	jne    8ac5ed2 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x480>
 8ac5f2f:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8ac5f33:	0f 84 75 01 00 00    	je     8ac60ae <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x65c>
 8ac5f39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac5f3c:	89 04 24             	mov    %eax,(%esp)
 8ac5f3f:	e8 6c ec c5 ff       	call   8724bb0 <_ZdaPv>
 8ac5f44:	e9 65 01 00 00       	jmp    8ac60ae <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x65c>
 8ac5f49:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8ac5f50:	00 
 8ac5f51:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac5f58:	00 
 8ac5f59:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5f5c:	89 04 24             	mov    %eax,(%esp)
 8ac5f5f:	e8 4c 81 5b ff       	call   807e0b0 <fseek@plt>
 8ac5f64:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5f67:	89 04 24             	mov    %eax,(%esp)
 8ac5f6a:	e8 61 7a 5b ff       	call   807d9d0 <ftell@plt>
 8ac5f6f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac5f72:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ac5f76:	0f 8e 32 01 00 00    	jle    8ac60ae <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x65c>
 8ac5f7c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac5f83:	00 
 8ac5f84:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac5f8b:	00 
 8ac5f8c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ac5f8f:	89 04 24             	mov    %eax,(%esp)
 8ac5f92:	e8 19 81 5b ff       	call   807e0b0 <fseek@plt>
 8ac5f97:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac5f9a:	89 04 24             	mov    %eax,(%esp)
 8ac5f9d:	e8 1e ce c5 ff       	call   8722dc0 <_Znaj>
 8ac5fa2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac5fa5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac5fa8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ac5fab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac5faf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac5fb6:	00 
 8ac5fb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5fbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac5fbe:	89 04 24             	mov    %eax,(%esp)
 8ac5fc1:	e8 8a 7d 5b ff       	call   807dd50 <fread@plt>
 8ac5fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5fc9:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5fcc:	8d 45 94             	lea    -0x6c(%ebp),%eax
 8ac5fcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5fd3:	89 04 24             	mov    %eax,(%esp)
 8ac5fd6:	e8 0f 1a 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac5fdb:	83 ec 04             	sub    $0x4,%esp
 8ac5fde:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8ac5fe1:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8ac5fe4:	e9 82 00 00 00       	jmp    8ac606b <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x619>
 8ac5fe9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac5fec:	89 04 24             	mov    %eax,(%esp)
 8ac5fef:	e8 30 1a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac5ff4:	83 c0 04             	add    $0x4,%eax
 8ac5ff7:	89 04 24             	mov    %eax,(%esp)
 8ac5ffa:	e8 65 de ff ff       	call   8ac3e64 <_ZNK10IndexEntry4nameEv>
 8ac5fff:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac6002:	89 04 24             	mov    %eax,(%esp)
 8ac6005:	e8 1a 1a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac600a:	83 c0 04             	add    $0x4,%eax
 8ac600d:	89 04 24             	mov    %eax,(%esp)
 8ac6010:	e8 4f de ff ff       	call   8ac3e64 <_ZNK10IndexEntry4nameEv>
 8ac6015:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac601c:	00 
 8ac601d:	c7 44 24 04 cf e8 e2 	movl   $0x8e2e8cf,0x4(%esp)
 8ac6024:	08 
 8ac6025:	89 04 24             	mov    %eax,(%esp)
 8ac6028:	e8 13 0c c4 ff       	call   8706c40 <_ZNKSs4findEPKcj>
 8ac602d:	8b 15 4c 05 d0 08    	mov    0x8d0054c,%edx
 8ac6033:	39 d0                	cmp    %edx,%eax
 8ac6035:	0f 95 c0             	setne  %al
 8ac6038:	84 c0                	test   %al,%al
 8ac603a:	74 24                	je     8ac6060 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x60e>
 8ac603c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac603f:	89 04 24             	mov    %eax,(%esp)
 8ac6042:	e8 dd 19 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6047:	8d 50 04             	lea    0x4(%eax),%edx
 8ac604a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac604d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6051:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6054:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6058:	89 14 24             	mov    %edx,(%esp)
 8ac605b:	e8 18 e3 ff ff       	call   8ac4378 <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet>
 8ac6060:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac6063:	89 04 24             	mov    %eax,(%esp)
 8ac6066:	e8 a3 19 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac606b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac606e:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6071:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ac6074:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6078:	89 04 24             	mov    %eax,(%esp)
 8ac607b:	e8 0a 19 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac6080:	83 ec 04             	sub    $0x4,%esp
 8ac6083:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ac6086:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac608a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac608d:	89 04 24             	mov    %eax,(%esp)
 8ac6090:	e8 1b 19 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac6095:	84 c0                	test   %al,%al
 8ac6097:	0f 85 4c ff ff ff    	jne    8ac5fe9 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x597>
 8ac609d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ac60a1:	74 0b                	je     8ac60ae <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x65c>
 8ac60a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac60a6:	89 04 24             	mov    %eax,(%esp)
 8ac60a9:	e8 02 eb c5 ff       	call   8724bb0 <_ZdaPv>
 8ac60ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac60b1:	8b 55 14             	mov    0x14(%ebp),%edx
 8ac60b4:	89 50 0c             	mov    %edx,0xc(%eax)
 8ac60b7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ac60bc:	eb 1b                	jmp    8ac60d9 <_ZN7PackSet4openEPKcS1_16pack_load_type_t+0x687>
 8ac60be:	89 d3                	mov    %edx,%ebx
 8ac60c0:	89 c6                	mov    %eax,%esi
 8ac60c2:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac60c5:	89 04 24             	mov    %eax,(%esp)
 8ac60c8:	e8 13 1b c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac60cd:	89 f0                	mov    %esi,%eax
 8ac60cf:	89 da                	mov    %ebx,%edx
 8ac60d1:	89 04 24             	mov    %eax,(%esp)
 8ac60d4:	e8 77 d6 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac60d9:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac60dc:	89 04 24             	mov    %eax,(%esp)
 8ac60df:	e8 fc 1a c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac60e4:	89 d8                	mov    %ebx,%eax
 8ac60e6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ac60e9:	83 c4 00             	add    $0x0,%esp
 8ac60ec:	5b                   	pop    %ebx
 8ac60ed:	5e                   	pop    %esi
 8ac60ee:	5d                   	pop    %ebp
 8ac60ef:	c3                   	ret

```

```c
// PackSet::open @ 0x8ac5a52

/* DWARF original prototype: pack_ret_t open(PackSet * this, NCHAR * name, NCHAR * tag,
   pack_load_type_t type) */

pack_ret_t __thiscall PackSet::open(PackSet *this,NCHAR *name,NCHAR *tag,pack_load_type_t type)

{
  pair<long_unsigned_int,_IndexEntry> __x;
  bool bVar1;
  pack_ret_t pVar2;
  char *__s1;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  pair<long_unsigned_int,_IndexEntry> *ppVar6;
  string *this_00;
  undefined1 in_stack_ffffff78 [20];
  undefined1 local_70 [8];
  tstring local_68;
  pair<long_unsigned_int,_IndexEntry> *local_64;
  ulong local_60;
  ulong local_5c;
  uint local_58;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_54;
  pair<long_unsigned_int,_IndexEntry> local_50;
  undefined1 local_30 [8];
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_28;
  uint local_1c;
  uchar *local_18;
  uint local_14;
  uchar *local_10;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: uint aligned_index_header_size@[???]
                       Unresolved local var: uint index_header_crc@[???]
                       Unresolved local var: uint index_size@[???]
                       Unresolved local var: uchar * index_header_data@[???]
                       Unresolved local var: uchar * tmp@[???]
                       Unresolved local var: tstring index_tag@[???] */
  bVar1 = UsingEncryptedFile(this);
  if (bVar1) {
    pVar2 = openEncryptedFile(this,name,tag,type);
    return pVar2;
  }
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_54);
  std::string::string((string *)&local_68);
  bVar1 = is_ready(this);
  if (bVar1) {
                    /* try { // try from 08ac5ad0 to 08ac5d51 has its CatchHandler @ 08ac60be */
    fprintf(stdout,"%s\n","Already opened");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3d8,"open");
    pVar2 = PACK_ERROR;
  }
  else {
    local_28.
    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ._M_impl._M_finish = (pair<long_unsigned_int,_IndexEntry> *)fopen(name,"rb");
    if ((FILE *)local_28.
                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                ._M_impl._M_finish == (FILE *)0x0) {
      fprintf(stdout,"_tfopen failed. %s",name);
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3e1,"open");
      pVar2 = PACK_ERROR;
    }
    else {
      _fread_str(&local_68,
                 (FILE *)local_28.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish);
      if (tag != (NCHAR *)0x0) {
        __s1 = (char *)std::string::c_str((string *)&local_68);
        iVar3 = strcmp(__s1,tag);
        if (iVar3 != 0) {
          fclose((FILE *)local_28.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish);
          uVar4 = std::string::c_str((string *)&local_68);
          fprintf(stdout,"tag mismatch. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3ec,"open");
          pVar2 = PACK_ERROR;
          goto LAB_08ac60d9;
        }
      }
      fread(&this->revision_,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      fread(&local_58,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      fread(&local_5c,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      fread(&local_60,4,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      local_28.
      super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ._M_impl._M_end_of_storage = operator_new__(local_58);
      fread(local_28.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage,local_58,1,
            (FILE *)local_28.
                    super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                    ._M_impl._M_finish);
      uVar5 = ftell((FILE *)local_28.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_finish);
      this->header_size_ = uVar5;
      this->pack_file_ =
           (FILE *)local_28.
                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   ._M_impl._M_finish;
      ppVar6 = local_28.
               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               ._M_impl._M_end_of_storage;
      iVar3 = _decrypt_N_crc32(local_60,local_5c,local_5c,
                               (uchar *)local_28.
                                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                        ._M_impl._M_end_of_storage,local_58);
      if (iVar3 == 0) {
        if (local_28.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage != (pair<long_unsigned_int,_IndexEntry> *)0x0) {
          operator_delete__(local_28.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
        }
        pVar2 = PACK_ERROR;
      }
      else {
        local_64 = local_28.
                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   ._M_impl._M_end_of_storage;
        std::pair<long_unsigned_int,_IndexEntry>::pair(&local_50);
        __x.second.type_ = (entry_type_t)ppVar6;
        __x.first = (ulong)&local_50;
        __x.second.name_._M_dataplus._M_p = (_Alloc_hider)(_Alloc_hider)local_58;
        __x.second.size_ = in_stack_ffffff78._0_4_;
        __x.second.aligned_size_ = in_stack_ffffff78._4_4_;
        __x.second.crc_ = in_stack_ffffff78._8_4_;
        __x.second.offset_ = in_stack_ffffff78._12_4_;
        __x.second.content_ = (uchar *)in_stack_ffffff78._16_4_;
                    /* try { // try from 08ac5d69 to 08ac5d6d has its CatchHandler @ 08ac5d70 */
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::resize(&this->indexes_,local_60,__x);
                    /* try { // try from 08ac5d8e to 08ac6094 has its CatchHandler @ 08ac60be */
        std::pair<long_unsigned_int,_IndexEntry>::~pair(&local_50,local_60);
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                 *)local_70);
        local_54._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_70._0_4_;
        while( true ) {
          std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                 *)local_30);
          bVar1 = __gnu_cxx::
                  operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            (&local_54,
                             (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                              *)local_30);
          if (!bVar1) break;
          ppVar6 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_54);
          ppVar6->first = local_64->first;
          local_64 = (pair<long_unsigned_int,_IndexEntry> *)&local_64->second;
          ppVar6 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_54);
          IndexEntry::read_info(&ppVar6->second,(uchar **)&local_64);
          __gnu_cxx::
          __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
          ::operator++(&local_54);
        }
        if (local_28.
            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ._M_impl._M_end_of_storage != (pair<long_unsigned_int,_IndexEntry> *)0x0) {
          operator_delete__(local_28.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
        }
        if (type == PACK_LOAD_FULL) {
                    /* Unresolved local var: uint size@[???]
                       Unresolved local var: uchar * content@[???] */
          fseek((FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish,0,2);
          local_1c = ftell((FILE *)local_28.
                                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                   ._M_impl._M_finish);
          fseek((FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish,0,0);
          local_18 = operator_new__(local_1c);
          fread(local_18,local_1c,1,
                (FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish);
          std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   *)local_70);
          local_54._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_70._0_4_;
          while( true ) {
            std::
            vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                   *)(local_30 + 4));
            bVar1 = __gnu_cxx::
                    operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                              (&local_54,
                               (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                                *)(local_30 + 4));
            if (!bVar1) break;
            ppVar6 = __gnu_cxx::
                     __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                     ::operator->(&local_54);
            IndexEntry::update_content_from_memory(&ppVar6->second,local_18,this);
            __gnu_cxx::
            __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
            ::operator++(&local_54);
          }
          if (local_18 != (uchar *)0x0) {
            operator_delete__(local_18);
          }
        }
        else {
                    /* Unresolved local var: int size@[???]
                       Unresolved local var: uchar * content@[???] */
          fseek((FILE *)local_28.
                        super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                        ._M_impl._M_finish,0,2);
          local_14 = ftell((FILE *)local_28.
                                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                   ._M_impl._M_finish);
          if (0 < (int)local_14) {
            fseek((FILE *)local_28.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_finish,0,0);
            local_10 = operator_new__(local_14);
            fread(local_10,local_14,1,
                  (FILE *)local_28.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_finish);
            std::
            vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
            ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                     *)local_70);
            local_54._M_current = (pair<long_unsigned_int,_IndexEntry> *)local_70._0_4_;
            while( true ) {
              std::
              vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
              ::end(&local_28);
              bVar1 = __gnu_cxx::
                      operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                                (&local_54,
                                 (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                                  *)&local_28);
              if (!bVar1) break;
              ppVar6 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       ::operator->(&local_54);
              IndexEntry::name(&ppVar6->second);
              ppVar6 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       ::operator->(&local_54);
              this_00 = (string *)IndexEntry::name(&ppVar6->second);
              iVar3 = std::string::find(this_00,".ani",0);
              if (iVar3 != std::string::npos) {
                ppVar6 = __gnu_cxx::
                         __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                         ::operator->(&local_54);
                IndexEntry::update_content_from_memory(&ppVar6->second,local_10,this);
              }
              __gnu_cxx::
              __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
              ::operator++(&local_54);
            }
            if (local_10 != (uchar *)0x0) {
              operator_delete__(local_10);
            }
          }
        }
        this->type_ = type;
        pVar2 = PACK_OK;
      }
    }
  }
LAB_08ac60d9:
  std::string::~string((string *)&local_68);
  return pVar2;
}

```

---

## openEncryptedFile

```asm
// === 08ac60f0 PackSet::openEncryptedFile  [0x08ac60f0-0x8ac60f9] ===
 8ac60f0:	55                   	push   %ebp
 8ac60f1:	89 e5                	mov    %esp,%ebp
 8ac60f3:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac60f8:	5d                   	pop    %ebp
 8ac60f9:	c3                   	ret

```

```c
// PackSet::openEncryptedFile @ 0x8ac60f0

/* DWARF original prototype: pack_ret_t openEncryptedFile(PackSet * this, NCHAR * name, NCHAR * tag,
   pack_load_type_t type) */

pack_ret_t __thiscall
PackSet::openEncryptedFile(PackSet *this,NCHAR *name,NCHAR *tag,pack_load_type_t type)

{
  return PACK_ERROR;
}

```

---

## output_file_list

```asm
// === 08ac6988 PackSet::output_file_list  [0x08ac6988-0x8ac6c89] ===
 8ac6988:	55                   	push   %ebp
 8ac6989:	89 e5                	mov    %esp,%ebp
 8ac698b:	83 ec 38             	sub    $0x38,%esp
 8ac698e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6991:	89 04 24             	mov    %eax,(%esp)
 8ac6994:	e8 bb df ff ff       	call   8ac4954 <_ZNK7PackSet8is_readyEv>
 8ac6999:	83 f0 01             	xor    $0x1,%eax
 8ac699c:	84 c0                	test   %al,%al
 8ac699e:	74 54                	je     8ac69f4 <_ZNK7PackSet16output_file_listEPKc+0x6c>
 8ac69a0:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac69a5:	c7 44 24 08 eb e8 e2 	movl   $0x8e2e8eb,0x8(%esp)
 8ac69ac:	08 
 8ac69ad:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac69b4:	08 
 8ac69b5:	89 04 24             	mov    %eax,(%esp)
 8ac69b8:	e8 d3 70 5b ff       	call   807da90 <fprintf@plt>
 8ac69bd:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac69c2:	c7 44 24 10 51 ea e2 	movl   $0x8e2ea51,0x10(%esp)
 8ac69c9:	08 
 8ac69ca:	c7 44 24 0c 73 05 00 	movl   $0x573,0xc(%esp)
 8ac69d1:	00 
 8ac69d2:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac69d9:	08 
 8ac69da:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac69e1:	08 
 8ac69e2:	89 04 24             	mov    %eax,(%esp)
 8ac69e5:	e8 a6 70 5b ff       	call   807da90 <fprintf@plt>
 8ac69ea:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac69ef:	e9 94 02 00 00       	jmp    8ac6c88 <_ZNK7PackSet16output_file_listEPKc+0x300>
 8ac69f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac69f7:	89 04 24             	mov    %eax,(%esp)
 8ac69fa:	e8 99 84 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8ac69ff:	c7 44 24 04 fa e8 e2 	movl   $0x8e2e8fa,0x4(%esp)
 8ac6a06:	08 
 8ac6a07:	89 04 24             	mov    %eax,(%esp)
 8ac6a0a:	e8 61 7d 5b ff       	call   807e770 <fopen@plt>
 8ac6a0f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac6a12:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ac6a16:	75 54                	jne    8ac6a6c <_ZNK7PackSet16output_file_listEPKc+0xe4>
 8ac6a18:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6a1d:	c7 44 24 08 fd e8 e2 	movl   $0x8e2e8fd,0x8(%esp)
 8ac6a24:	08 
 8ac6a25:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac6a2c:	08 
 8ac6a2d:	89 04 24             	mov    %eax,(%esp)
 8ac6a30:	e8 5b 70 5b ff       	call   807da90 <fprintf@plt>
 8ac6a35:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6a3a:	c7 44 24 10 51 ea e2 	movl   $0x8e2ea51,0x10(%esp)
 8ac6a41:	08 
 8ac6a42:	c7 44 24 0c 7a 05 00 	movl   $0x57a,0xc(%esp)
 8ac6a49:	00 
 8ac6a4a:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6a51:	08 
 8ac6a52:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac6a59:	08 
 8ac6a5a:	89 04 24             	mov    %eax,(%esp)
 8ac6a5d:	e8 2e 70 5b ff       	call   807da90 <fprintf@plt>
 8ac6a62:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac6a67:	e9 1c 02 00 00       	jmp    8ac6c88 <_ZNK7PackSet16output_file_listEPKc+0x300>
 8ac6a6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6a6f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac6a73:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 8ac6a7a:	00 
 8ac6a7b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ac6a82:	00 
 8ac6a83:	c7 04 24 1c e9 e2 08 	movl   $0x8e2e91c,(%esp)
 8ac6a8a:	e8 91 78 5b ff       	call   807e320 <fwrite@plt>
 8ac6a8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6a92:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6a95:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6a98:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6a9c:	89 04 24             	mov    %eax,(%esp)
 8ac6a9f:	e8 46 18 00 00       	call   8ac82ea <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac6aa4:	83 ec 04             	sub    $0x4,%esp
 8ac6aa7:	e9 9a 01 00 00       	jmp    8ac6c46 <_ZNK7PackSet16output_file_listEPKc+0x2be>
 8ac6aac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6aaf:	89 04 24             	mov    %eax,(%esp)
 8ac6ab2:	e8 cd 18 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6ab7:	8b 00                	mov    (%eax),%eax
 8ac6ab9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6abd:	c7 44 24 04 49 e9 e2 	movl   $0x8e2e949,0x4(%esp)
 8ac6ac4:	08 
 8ac6ac5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6ac8:	89 04 24             	mov    %eax,(%esp)
 8ac6acb:	e8 c0 6f 5b ff       	call   807da90 <fprintf@plt>
 8ac6ad0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6ad3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6ad7:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 8ac6ade:	e8 dd 79 5b ff       	call   807e4c0 <fputc@plt>
 8ac6ae3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6ae6:	89 04 24             	mov    %eax,(%esp)
 8ac6ae9:	e8 96 18 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6aee:	8b 40 04             	mov    0x4(%eax),%eax
 8ac6af1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6af5:	c7 44 24 04 49 e9 e2 	movl   $0x8e2e949,0x4(%esp)
 8ac6afc:	08 
 8ac6afd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6b00:	89 04 24             	mov    %eax,(%esp)
 8ac6b03:	e8 88 6f 5b ff       	call   807da90 <fprintf@plt>
 8ac6b08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6b0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6b0f:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 8ac6b16:	e8 a5 79 5b ff       	call   807e4c0 <fputc@plt>
 8ac6b1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6b1e:	89 04 24             	mov    %eax,(%esp)
 8ac6b21:	e8 5e 18 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6b26:	83 c0 08             	add    $0x8,%eax
 8ac6b29:	89 04 24             	mov    %eax,(%esp)
 8ac6b2c:	e8 a2 82 01 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ac6b31:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6b35:	c7 44 24 04 4e e9 e2 	movl   $0x8e2e94e,0x4(%esp)
 8ac6b3c:	08 
 8ac6b3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6b40:	89 04 24             	mov    %eax,(%esp)
 8ac6b43:	e8 48 6f 5b ff       	call   807da90 <fprintf@plt>
 8ac6b48:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6b4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6b4f:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 8ac6b56:	e8 65 79 5b ff       	call   807e4c0 <fputc@plt>
 8ac6b5b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6b5e:	89 04 24             	mov    %eax,(%esp)
 8ac6b61:	e8 1e 18 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6b66:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac6b69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6b6d:	c7 44 24 04 49 e9 e2 	movl   $0x8e2e949,0x4(%esp)
 8ac6b74:	08 
 8ac6b75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6b78:	89 04 24             	mov    %eax,(%esp)
 8ac6b7b:	e8 10 6f 5b ff       	call   807da90 <fprintf@plt>
 8ac6b80:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6b83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6b87:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 8ac6b8e:	e8 2d 79 5b ff       	call   807e4c0 <fputc@plt>
 8ac6b93:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6b96:	89 04 24             	mov    %eax,(%esp)
 8ac6b99:	e8 e6 17 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6b9e:	8b 40 10             	mov    0x10(%eax),%eax
 8ac6ba1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6ba5:	c7 44 24 04 49 e9 e2 	movl   $0x8e2e949,0x4(%esp)
 8ac6bac:	08 
 8ac6bad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6bb0:	89 04 24             	mov    %eax,(%esp)
 8ac6bb3:	e8 d8 6e 5b ff       	call   807da90 <fprintf@plt>
 8ac6bb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6bbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6bbf:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 8ac6bc6:	e8 f5 78 5b ff       	call   807e4c0 <fputc@plt>
 8ac6bcb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6bce:	89 04 24             	mov    %eax,(%esp)
 8ac6bd1:	e8 ae 17 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6bd6:	8b 40 14             	mov    0x14(%eax),%eax
 8ac6bd9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6bdd:	c7 44 24 04 49 e9 e2 	movl   $0x8e2e949,0x4(%esp)
 8ac6be4:	08 
 8ac6be5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6be8:	89 04 24             	mov    %eax,(%esp)
 8ac6beb:	e8 a0 6e 5b ff       	call   807da90 <fprintf@plt>
 8ac6bf0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6bf3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6bf7:	c7 04 24 2c 00 00 00 	movl   $0x2c,(%esp)
 8ac6bfe:	e8 bd 78 5b ff       	call   807e4c0 <fputc@plt>
 8ac6c03:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6c06:	89 04 24             	mov    %eax,(%esp)
 8ac6c09:	e8 76 17 00 00       	call   8ac8384 <_ZNK9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6c0e:	8b 40 18             	mov    0x18(%eax),%eax
 8ac6c11:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6c15:	c7 44 24 04 49 e9 e2 	movl   $0x8e2e949,0x4(%esp)
 8ac6c1c:	08 
 8ac6c1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6c20:	89 04 24             	mov    %eax,(%esp)
 8ac6c23:	e8 68 6e 5b ff       	call   807da90 <fprintf@plt>
 8ac6c28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6c2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6c2f:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 8ac6c36:	e8 85 78 5b ff       	call   807e4c0 <fputc@plt>
 8ac6c3b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6c3e:	89 04 24             	mov    %eax,(%esp)
 8ac6c41:	e8 28 17 00 00       	call   8ac836e <_ZN9__gnu_cxx17__normal_iteratorIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac6c46:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6c49:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6c4c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac6c4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6c53:	89 04 24             	mov    %eax,(%esp)
 8ac6c56:	e8 bb 16 00 00       	call   8ac8316 <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac6c5b:	83 ec 04             	sub    $0x4,%esp
 8ac6c5e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac6c61:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6c65:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac6c68:	89 04 24             	mov    %eax,(%esp)
 8ac6c6b:	e8 d2 16 00 00       	call   8ac8342 <_ZN9__gnu_cxxneIPKSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8ac6c70:	84 c0                	test   %al,%al
 8ac6c72:	0f 85 34 fe ff ff    	jne    8ac6aac <_ZNK7PackSet16output_file_listEPKc+0x124>
 8ac6c78:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6c7b:	89 04 24             	mov    %eax,(%esp)
 8ac6c7e:	e8 1d 72 5b ff       	call   807dea0 <fclose@plt>
 8ac6c83:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac6c88:	c9                   	leave
 8ac6c89:	c3                   	ret

```

```c
// PackSet::output_file_list @ 0x8ac6988

/* DWARF original prototype: pack_ret_t output_file_list(PackSet * this, TCHAR * pszOutputPath) */

pack_ret_t __thiscall PackSet::output_file_list(PackSet *this,TCHAR *pszOutputPath)

{
  bool bVar1;
  pack_ret_t pVar2;
  char *pcVar3;
  pair<long_unsigned_int,_IndexEntry> *ppVar4;
  undefined1 local_18 [8];
  FILE *local_10;
  
                    /* Unresolved local var: FILE * pFile@[???] */
  bVar1 = is_ready(this);
  if (bVar1) {
    pcVar3 = toMbcs(pszOutputPath);
    local_10 = fopen(pcVar3,"wt");
    if (local_10 == (FILE *)0x0) {
      fprintf(stdout,"%s\n","Failed to output file open.");
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x57a,"output_file_list");
      pVar2 = PACK_ERROR;
    }
    else {
      fwrite("hash,type,name,size,aligned size,crc,offset\n",1,0x2c,local_10);
                    /* Unresolved local var:
                       __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       it@[???] */
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)local_18);
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)(local_18 + 4));
        bVar1 = __gnu_cxx::
                operator!=<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          ((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)local_18,
                           (__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)(local_18 + 4));
        if (!bVar1) break;
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",ppVar4->first);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).type_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        pcVar3 = toMbcs(&(ppVar4->second).name_);
        fprintf(local_10,"\"%s\"",pcVar3);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).size_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).aligned_size_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).crc_);
        fputc(0x2c,local_10);
        ppVar4 = __gnu_cxx::
                 __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                               *)local_18);
        fprintf(local_10,"\"%d\"",(ppVar4->second).offset_);
        fputc(10,local_10);
        __gnu_cxx::
        __normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++((__normal_iterator<const_std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                      *)local_18);
      }
      fclose(local_10);
      pVar2 = PACK_OK;
    }
  }
  else {
    fprintf(stdout,"%s\n","Not yet opened");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x573,"output_file_list");
    pVar2 = PACK_ERROR;
  }
  return pVar2;
}

```

---

## pack_file

```asm
// === 08ac7608 PackSet::pack_file  [0x08ac7608-0x8ac7673] ===
 8ac7608:	55                   	push   %ebp
 8ac7609:	89 e5                	mov    %esp,%ebp
 8ac760b:	83 ec 28             	sub    $0x28,%esp
 8ac760e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac7611:	0f b6 40 28          	movzbl 0x28(%eax),%eax
 8ac7615:	83 f0 01             	xor    $0x1,%eax
 8ac7618:	84 c0                	test   %al,%al
 8ac761a:	74 07                	je     8ac7623 <_ZN7PackSet9pack_fileEv+0x1b>
 8ac761c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac761f:	8b 00                	mov    (%eax),%eax
 8ac7621:	eb 4f                	jmp    8ac7672 <_ZN7PackSet9pack_fileEv+0x6a>
 8ac7623:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac7628:	c7 44 24 08 d8 e9 e2 	movl   $0x8e2e9d8,0x8(%esp)
 8ac762f:	08 
 8ac7630:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac7637:	08 
 8ac7638:	89 04 24             	mov    %eax,(%esp)
 8ac763b:	e8 50 64 5b ff       	call   807da90 <fprintf@plt>
 8ac7640:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac7645:	c7 44 24 10 40 ea e2 	movl   $0x8e2ea40,0x10(%esp)
 8ac764c:	08 
 8ac764d:	c7 44 24 0c 77 06 00 	movl   $0x677,0xc(%esp)
 8ac7654:	00 
 8ac7655:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac765c:	08 
 8ac765d:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac7664:	08 
 8ac7665:	89 04 24             	mov    %eax,(%esp)
 8ac7668:	e8 23 64 5b ff       	call   807da90 <fprintf@plt>
 8ac766d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac7670:	8b 00                	mov    (%eax),%eax
 8ac7672:	c9                   	leave
 8ac7673:	c3                   	ret

```

```c
// PackSet::pack_file @ 0x8ac7608

/* DWARF original prototype: FILE * pack_file(PackSet * this) */

FILE * __thiscall PackSet::pack_file(PackSet *this)

{
  FILE *pFVar1;
  
  if (this->m_bUseEncryptedFile == true) {
    fprintf(stdout,"%s\n","_C_DNF_SCRIPT_CRYPTER_ is turned on!!");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x677,"pack_file");
    pFVar1 = this->pack_file_;
  }
  else {
    pFVar1 = this->pack_file_;
  }
  return pFVar1;
}

```

---

## revision

```asm
// === 08ac4924 PackSet::revision  [0x08ac4924-0x8ac492f] ===
 8ac4924:	55                   	push   %ebp
 8ac4925:	89 e5                	mov    %esp,%ebp
 8ac4927:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac492a:	8b 40 04             	mov    0x4(%eax),%eax
 8ac492d:	5d                   	pop    %ebp
 8ac492e:	c3                   	ret
 8ac492f:	90                   	nop

```

```c
// PackSet::revision @ 0x8ac4924

/* DWARF original prototype: uint revision(PackSet * this) */

uint __thiscall PackSet::revision(PackSet *this)

{
  return this->revision_;
}

```

---

## sort

```asm
// === 08ac58ee PackSet::sort  [0x08ac58ee-0x8ac5a51] ===
 8ac58ee:	55                   	push   %ebp
 8ac58ef:	89 e5                	mov    %esp,%ebp
 8ac58f1:	83 ec 48             	sub    $0x48,%esp
 8ac58f4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ac58f7:	89 04 24             	mov    %eax,(%esp)
 8ac58fa:	e8 dd 20 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac58ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5902:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac5905:	85 c0                	test   %eax,%eax
 8ac5907:	74 54                	je     8ac595d <_ZN7PackSet4sortEv+0x6f>
 8ac5909:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac590e:	c7 44 24 08 6e e8 e2 	movl   $0x8e2e86e,0x8(%esp)
 8ac5915:	08 
 8ac5916:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac591d:	08 
 8ac591e:	89 04 24             	mov    %eax,(%esp)
 8ac5921:	e8 6a 81 5b ff       	call   807da90 <fprintf@plt>
 8ac5926:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac592b:	c7 44 24 10 74 ea e2 	movl   $0x8e2ea74,0x10(%esp)
 8ac5932:	08 
 8ac5933:	c7 44 24 0c b7 03 00 	movl   $0x3b7,0xc(%esp)
 8ac593a:	00 
 8ac593b:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac5942:	08 
 8ac5943:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac594a:	08 
 8ac594b:	89 04 24             	mov    %eax,(%esp)
 8ac594e:	e8 3d 81 5b ff       	call   807da90 <fprintf@plt>
 8ac5953:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5958:	e9 f3 00 00 00       	jmp    8ac5a50 <_ZN7PackSet4sortEv+0x162>
 8ac595d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5960:	83 c0 1c             	add    $0x1c,%eax
 8ac5963:	89 04 24             	mov    %eax,(%esp)
 8ac5966:	e8 03 20 00 00       	call   8ac796e <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE4sizeEv>
 8ac596b:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac596e:	83 c2 10             	add    $0x10,%edx
 8ac5971:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5975:	89 14 24             	mov    %edx,(%esp)
 8ac5978:	e8 fb 24 00 00       	call   8ac7e78 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE7reserveEj>
 8ac597d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5980:	8d 50 1c             	lea    0x1c(%eax),%edx
 8ac5983:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac5986:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac598a:	89 04 24             	mov    %eax,(%esp)
 8ac598d:	e8 58 20 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac5992:	83 ec 04             	sub    $0x4,%esp
 8ac5995:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac5998:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ac599b:	eb 28                	jmp    8ac59c5 <_ZN7PackSet4sortEv+0xd7>
 8ac599d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ac59a0:	89 04 24             	mov    %eax,(%esp)
 8ac59a3:	e8 f4 25 00 00       	call   8ac7f9c <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEdeEv>
 8ac59a8:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac59ab:	83 c2 10             	add    $0x10,%edx
 8ac59ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac59b2:	89 14 24             	mov    %edx,(%esp)
 8ac59b5:	e8 4a 24 00 00       	call   8ac7e04 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE9push_backERKS2_>
 8ac59ba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ac59bd:	89 04 24             	mov    %eax,(%esp)
 8ac59c0:	e8 49 20 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac59c5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac59c8:	8d 50 1c             	lea    0x1c(%eax),%edx
 8ac59cb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac59ce:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac59d2:	89 04 24             	mov    %eax,(%esp)
 8ac59d5:	e8 b0 1f 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac59da:	83 ec 04             	sub    $0x4,%esp
 8ac59dd:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8ac59e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac59e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8ac59e7:	89 04 24             	mov    %eax,(%esp)
 8ac59ea:	e8 c1 1f 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac59ef:	84 c0                	test   %al,%al
 8ac59f1:	75 aa                	jne    8ac599d <_ZN7PackSet4sortEv+0xaf>
 8ac59f3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac59f6:	8d 50 10             	lea    0x10(%eax),%edx
 8ac59f9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ac59fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5a00:	89 04 24             	mov    %eax,(%esp)
 8ac5a03:	e8 82 1f 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac5a08:	83 ec 04             	sub    $0x4,%esp
 8ac5a0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5a0e:	8d 50 10             	lea    0x10(%eax),%edx
 8ac5a11:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ac5a14:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac5a18:	89 04 24             	mov    %eax,(%esp)
 8ac5a1b:	e8 ca 1f 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac5a20:	83 ec 04             	sub    $0x4,%esp
 8ac5a23:	c7 44 24 08 dc 3a ac 	movl   $0x8ac3adc,0x8(%esp)
 8ac5a2a:	08 
 8ac5a2b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac5a2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac5a32:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac5a35:	89 04 24             	mov    %eax,(%esp)
 8ac5a38:	e8 69 25 00 00       	call   8ac7fa6 <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS4_SaIS4_EEEEPFbRKS4_SB_EEvT_SE_T0_>
 8ac5a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5a40:	83 c0 1c             	add    $0x1c,%eax
 8ac5a43:	89 04 24             	mov    %eax,(%esp)
 8ac5a46:	e8 07 1f 00 00       	call   8ac7952 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5clearEv>
 8ac5a4b:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac5a50:	c9                   	leave
 8ac5a51:	c3                   	ret

```

```c
// PackSet::sort @ 0x8ac58ee

/* DWARF original prototype: pack_ret_t sort(PackSet * this) */

pack_ret_t __thiscall PackSet::sort(PackSet *this)

{
  bool bVar1;
  pack_ret_t pVar2;
  size_t __n;
  pair<long_unsigned_int,_IndexEntry> *__x;
  undefined1 local_20 [12];
  undefined1 local_14 [16];
  
                    /* Unresolved local var: index_vector_it it@[???] */
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                       *)(local_20 + 4));
  if (this->type_ == PACK_LOAD_FULL) {
    __n = std::
          vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
          ::size(&this->addeds_);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::reserve(&this->indexes_,__n);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)local_20);
    local_20._4_4_ = local_20._0_4_;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)(local_20 + 8));
      bVar1 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)(local_20 + 4),
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)(local_20 + 8));
      if (!bVar1) break;
      __x = __gnu_cxx::
            __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
            ::operator*((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                         *)(local_20 + 4));
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::push_back(&this->indexes_,__x);
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                    *)(local_20 + 4));
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           *)local_14);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)(local_14 + 4));
    std::
    sort<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>,_bool_(*)(const_PackSet::index_pair_t&,_const_PackSet::index_pair_t&)>
              ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                )local_14._4_4_,
               (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                )local_14._0_4_,_index_less);
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::clear(&this->addeds_);
    pVar2 = PACK_OK;
  }
  else {
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x3b7,"sort");
    pVar2 = PACK_ERROR;
  }
  return pVar2;
}

```

---

## verify

```asm
// === 08ac6c8a PackSet::verify  [0x08ac6c8a-0x8ac75fd] ===
 8ac6c8a:	55                   	push   %ebp
 8ac6c8b:	89 e5                	mov    %esp,%ebp
 8ac6c8d:	57                   	push   %edi
 8ac6c8e:	56                   	push   %esi
 8ac6c8f:	53                   	push   %ebx
 8ac6c90:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8ac6c96:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6c99:	89 04 24             	mov    %eax,(%esp)
 8ac6c9c:	e8 d3 09 00 00       	call   8ac7674 <_ZN7PackSet18UsingEncryptedFileEv>
 8ac6ca1:	84 c0                	test   %al,%al
 8ac6ca3:	74 10                	je     8ac6cb5 <_ZN7PackSet6verifyEv+0x2b>
 8ac6ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6ca8:	89 04 24             	mov    %eax,(%esp)
 8ac6cab:	e8 4e 09 00 00       	call   8ac75fe <_ZN7PackSet19verifyEncryptedFileEv>
 8ac6cb0:	e9 3d 09 00 00       	jmp    8ac75f2 <_ZN7PackSet6verifyEv+0x968>
 8ac6cb5:	c7 45 b8 00 00 50 00 	movl   $0x500000,-0x48(%ebp)
 8ac6cbc:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8ac6cc3:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8ac6cca:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8ac6cd1:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8ac6cd8:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6cdb:	89 04 24             	mov    %eax,(%esp)
 8ac6cde:	e8 f9 0c 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac6ce3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6ce6:	89 04 24             	mov    %eax,(%esp)
 8ac6ce9:	e8 66 dc ff ff       	call   8ac4954 <_ZNK7PackSet8is_readyEv>
 8ac6cee:	83 f0 01             	xor    $0x1,%eax
 8ac6cf1:	84 c0                	test   %al,%al
 8ac6cf3:	74 54                	je     8ac6d49 <_ZN7PackSet6verifyEv+0xbf>
 8ac6cf5:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6cfa:	c7 44 24 08 eb e8 e2 	movl   $0x8e2e8eb,0x8(%esp)
 8ac6d01:	08 
 8ac6d02:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac6d09:	08 
 8ac6d0a:	89 04 24             	mov    %eax,(%esp)
 8ac6d0d:	e8 7e 6d 5b ff       	call   807da90 <fprintf@plt>
 8ac6d12:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6d17:	c7 44 24 10 4a ea e2 	movl   $0x8e2ea4a,0x10(%esp)
 8ac6d1e:	08 
 8ac6d1f:	c7 44 24 0c a5 05 00 	movl   $0x5a5,0xc(%esp)
 8ac6d26:	00 
 8ac6d27:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6d2e:	08 
 8ac6d2f:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac6d36:	08 
 8ac6d37:	89 04 24             	mov    %eax,(%esp)
 8ac6d3a:	e8 51 6d 5b ff       	call   807da90 <fprintf@plt>
 8ac6d3f:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac6d44:	e9 a9 08 00 00       	jmp    8ac75f2 <_ZN7PackSet6verifyEv+0x968>
 8ac6d49:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6d4c:	89 04 24             	mov    %eax,(%esp)
 8ac6d4f:	e8 6c c0 c5 ff       	call   8722dc0 <_Znaj>
 8ac6d54:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8ac6d57:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6d5a:	89 04 24             	mov    %eax,(%esp)
 8ac6d5d:	e8 5e c0 c5 ff       	call   8722dc0 <_Znaj>
 8ac6d62:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8ac6d65:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8ac6d6c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8ac6d73:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8ac6d7a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8ac6d81:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8ac6d84:	89 04 24             	mov    %eax,(%esp)
 8ac6d87:	e8 9c 7a 01 00       	call   8ade828 <_ZN4TickC1Ev>
 8ac6d8c:	8d 45 88             	lea    -0x78(%ebp),%eax
 8ac6d8f:	89 04 24             	mov    %eax,(%esp)
 8ac6d92:	e8 91 7a 01 00       	call   8ade828 <_ZN4TickC1Ev>
 8ac6d97:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8ac6d9e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac6da3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8ac6da6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8ac6dad:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6db0:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6db3:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8ac6db6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6dba:	89 04 24             	mov    %eax,(%esp)
 8ac6dbd:	e8 28 0c 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac6dc2:	83 ec 04             	sub    $0x4,%esp
 8ac6dc5:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8ac6dc8:	89 45 90             	mov    %eax,-0x70(%ebp)
 8ac6dcb:	eb 1c                	jmp    8ac6de9 <_ZN7PackSet6verifyEv+0x15f>
 8ac6dcd:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6dd0:	89 04 24             	mov    %eax,(%esp)
 8ac6dd3:	e8 4c 0c 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6dd8:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac6ddb:	01 45 d4             	add    %eax,-0x2c(%ebp)
 8ac6dde:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6de1:	89 04 24             	mov    %eax,(%esp)
 8ac6de4:	e8 25 0c 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac6de9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6dec:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6def:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac6df2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6df6:	89 04 24             	mov    %eax,(%esp)
 8ac6df9:	e8 8c 0b 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac6dfe:	83 ec 04             	sub    $0x4,%esp
 8ac6e01:	8d 45 98             	lea    -0x68(%ebp),%eax
 8ac6e04:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6e08:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6e0b:	89 04 24             	mov    %eax,(%esp)
 8ac6e0e:	e8 9d 0b 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac6e13:	84 c0                	test   %al,%al
 8ac6e15:	75 b6                	jne    8ac6dcd <_ZN7PackSet6verifyEv+0x143>
 8ac6e17:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6e1a:	83 c0 10             	add    $0x10,%eax
 8ac6e1d:	89 04 24             	mov    %eax,(%esp)
 8ac6e20:	e8 49 0b 00 00       	call   8ac796e <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE4sizeEv>
 8ac6e25:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8ac6e28:	8d 45 9c             	lea    -0x64(%ebp),%eax
 8ac6e2b:	89 04 24             	mov    %eax,(%esp)
 8ac6e2e:	e8 11 7a 01 00       	call   8ade844 <_ZN4Tick3nowEv>
 8ac6e33:	83 ec 04             	sub    $0x4,%esp
 8ac6e36:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8ac6e39:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6e3d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 8ac6e40:	89 04 24             	mov    %eax,(%esp)
 8ac6e43:	e8 98 7a 01 00       	call   8ade8e0 <_ZN4TickaSES_>
 8ac6e48:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8ac6e4b:	89 04 24             	mov    %eax,(%esp)
 8ac6e4e:	e8 f1 79 01 00       	call   8ade844 <_ZN4Tick3nowEv>
 8ac6e53:	83 ec 04             	sub    $0x4,%esp
 8ac6e56:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8ac6e59:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6e5d:	8d 45 88             	lea    -0x78(%ebp),%eax
 8ac6e60:	89 04 24             	mov    %eax,(%esp)
 8ac6e63:	e8 78 7a 01 00       	call   8ade8e0 <_ZN4TickaSES_>
 8ac6e68:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6e6b:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6e6e:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8ac6e71:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6e75:	89 04 24             	mov    %eax,(%esp)
 8ac6e78:	e8 6d 0b 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac6e7d:	83 ec 04             	sub    $0x4,%esp
 8ac6e80:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8ac6e83:	89 45 90             	mov    %eax,-0x70(%ebp)
 8ac6e86:	e9 5c 05 00 00       	jmp    8ac73e7 <_ZN7PackSet6verifyEv+0x75d>
 8ac6e8b:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6e8e:	89 04 24             	mov    %eax,(%esp)
 8ac6e91:	e8 8e 0b 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6e96:	8b 40 10             	mov    0x10(%eax),%eax
 8ac6e99:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 8ac6e9c:	0f 97 c0             	seta   %al
 8ac6e9f:	84 c0                	test   %al,%al
 8ac6ea1:	74 69                	je     8ac6f0c <_ZN7PackSet6verifyEv+0x282>
 8ac6ea3:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8ac6ea7:	74 18                	je     8ac6ec1 <_ZN7PackSet6verifyEv+0x237>
 8ac6ea9:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8ac6ead:	74 0b                	je     8ac6eba <_ZN7PackSet6verifyEv+0x230>
 8ac6eaf:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8ac6eb2:	89 04 24             	mov    %eax,(%esp)
 8ac6eb5:	e8 f6 dc c5 ff       	call   8724bb0 <_ZdaPv>
 8ac6eba:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 8ac6ec1:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8ac6ec5:	74 18                	je     8ac6edf <_ZN7PackSet6verifyEv+0x255>
 8ac6ec7:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8ac6ecb:	74 0b                	je     8ac6ed8 <_ZN7PackSet6verifyEv+0x24e>
 8ac6ecd:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac6ed0:	89 04 24             	mov    %eax,(%esp)
 8ac6ed3:	e8 d8 dc c5 ff       	call   8724bb0 <_ZdaPv>
 8ac6ed8:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8ac6edf:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6ee2:	89 04 24             	mov    %eax,(%esp)
 8ac6ee5:	e8 3a 0b 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6eea:	8b 40 10             	mov    0x10(%eax),%eax
 8ac6eed:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8ac6ef0:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6ef3:	89 04 24             	mov    %eax,(%esp)
 8ac6ef6:	e8 c5 be c5 ff       	call   8722dc0 <_Znaj>
 8ac6efb:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8ac6efe:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6f01:	89 04 24             	mov    %eax,(%esp)
 8ac6f04:	e8 b7 be c5 ff       	call   8722dc0 <_Znaj>
 8ac6f09:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8ac6f0c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8ac6f0f:	c6 00 00             	movb   $0x0,(%eax)
 8ac6f12:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac6f15:	c6 00 00             	movb   $0x0,(%eax)
 8ac6f18:	8d 75 94             	lea    -0x6c(%ebp),%esi
 8ac6f1b:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6f1e:	89 04 24             	mov    %eax,(%esp)
 8ac6f21:	e8 fe 0a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6f26:	8b 18                	mov    (%eax),%ebx
 8ac6f28:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6f2b:	89 04 24             	mov    %eax,(%esp)
 8ac6f2e:	e8 f1 0a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6f33:	8d 50 04             	lea    0x4(%eax),%edx
 8ac6f36:	89 74 24 14          	mov    %esi,0x14(%esp)
 8ac6f3a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6f3d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ac6f41:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac6f44:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac6f48:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ac6f4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6f4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6f53:	89 14 24             	mov    %edx,(%esp)
 8ac6f56:	e8 51 cf ff ff       	call   8ac3eac <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj>
 8ac6f5b:	83 f8 01             	cmp    $0x1,%eax
 8ac6f5e:	0f 94 c0             	sete   %al
 8ac6f61:	84 c0                	test   %al,%al
 8ac6f63:	74 67                	je     8ac6fcc <_ZN7PackSet6verifyEv+0x342>
 8ac6f65:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6f68:	89 04 24             	mov    %eax,(%esp)
 8ac6f6b:	e8 b4 0a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6f70:	83 c0 08             	add    $0x8,%eax
 8ac6f73:	89 04 24             	mov    %eax,(%esp)
 8ac6f76:	e8 75 f5 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac6f7b:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8ac6f81:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6f85:	c7 44 24 04 53 e9 e2 	movl   $0x8e2e953,0x4(%esp)
 8ac6f8c:	08 
 8ac6f8d:	89 14 24             	mov    %edx,(%esp)
 8ac6f90:	e8 fb 6a 5b ff       	call   807da90 <fprintf@plt>
 8ac6f95:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6f9a:	c7 44 24 10 4a ea e2 	movl   $0x8e2ea4a,0x10(%esp)
 8ac6fa1:	08 
 8ac6fa2:	c7 44 24 0c e0 05 00 	movl   $0x5e0,0xc(%esp)
 8ac6fa9:	00 
 8ac6faa:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6fb1:	08 
 8ac6fb2:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac6fb9:	08 
 8ac6fba:	89 04 24             	mov    %eax,(%esp)
 8ac6fbd:	e8 ce 6a 5b ff       	call   807da90 <fprintf@plt>
 8ac6fc2:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac6fc7:	e9 26 06 00 00       	jmp    8ac75f2 <_ZN7PackSet6verifyEv+0x968>
 8ac6fcc:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6fcf:	89 04 24             	mov    %eax,(%esp)
 8ac6fd2:	e8 4d 0a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac6fd7:	83 c0 08             	add    $0x8,%eax
 8ac6fda:	89 04 24             	mov    %eax,(%esp)
 8ac6fdd:	e8 0e f5 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac6fe2:	c7 44 24 04 49 e8 e2 	movl   $0x8e2e849,0x4(%esp)
 8ac6fe9:	08 
 8ac6fea:	89 04 24             	mov    %eax,(%esp)
 8ac6fed:	e8 7e 77 5b ff       	call   807e770 <fopen@plt>
 8ac6ff2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ac6ff5:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8ac6ff9:	75 67                	jne    8ac7062 <_ZN7PackSet6verifyEv+0x3d8>
 8ac6ffb:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac6ffe:	89 04 24             	mov    %eax,(%esp)
 8ac7001:	e8 1e 0a 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac7006:	83 c0 08             	add    $0x8,%eax
 8ac7009:	89 04 24             	mov    %eax,(%esp)
 8ac700c:	e8 df f4 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac7011:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8ac7017:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac701b:	c7 44 24 04 63 e9 e2 	movl   $0x8e2e963,0x4(%esp)
 8ac7022:	08 
 8ac7023:	89 14 24             	mov    %edx,(%esp)
 8ac7026:	e8 65 6a 5b ff       	call   807da90 <fprintf@plt>
 8ac702b:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac7030:	c7 44 24 10 4a ea e2 	movl   $0x8e2ea4a,0x10(%esp)
 8ac7037:	08 
 8ac7038:	c7 44 24 0c e7 05 00 	movl   $0x5e7,0xc(%esp)
 8ac703f:	00 
 8ac7040:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac7047:	08 
 8ac7048:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac704f:	08 
 8ac7050:	89 04 24             	mov    %eax,(%esp)
 8ac7053:	e8 38 6a 5b ff       	call   807da90 <fprintf@plt>
 8ac7058:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac705d:	e9 90 05 00 00       	jmp    8ac75f2 <_ZN7PackSet6verifyEv+0x968>
 8ac7062:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8ac7069:	00 
 8ac706a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac7071:	00 
 8ac7072:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac7075:	89 04 24             	mov    %eax,(%esp)
 8ac7078:	e8 33 70 5b ff       	call   807e0b0 <fseek@plt>
 8ac707d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac7080:	89 04 24             	mov    %eax,(%esp)
 8ac7083:	e8 48 69 5b ff       	call   807d9d0 <ftell@plt>
 8ac7088:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8ac708b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac7092:	00 
 8ac7093:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac709a:	00 
 8ac709b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac709e:	89 04 24             	mov    %eax,(%esp)
 8ac70a1:	e8 0a 70 5b ff       	call   807e0b0 <fseek@plt>
 8ac70a6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8ac70a9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ac70ac:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac70b0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac70b7:	00 
 8ac70b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac70bc:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8ac70bf:	89 04 24             	mov    %eax,(%esp)
 8ac70c2:	e8 89 6c 5b ff       	call   807dd50 <fread@plt>
 8ac70c7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ac70ca:	89 04 24             	mov    %eax,(%esp)
 8ac70cd:	e8 ce 6d 5b ff       	call   807dea0 <fclose@plt>
 8ac70d2:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8ac70d5:	39 45 c4             	cmp    %eax,-0x3c(%ebp)
 8ac70d8:	74 67                	je     8ac7141 <_ZN7PackSet6verifyEv+0x4b7>
 8ac70da:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac70dd:	89 04 24             	mov    %eax,(%esp)
 8ac70e0:	e8 3f 09 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac70e5:	83 c0 08             	add    $0x8,%eax
 8ac70e8:	89 04 24             	mov    %eax,(%esp)
 8ac70eb:	e8 00 f4 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac70f0:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8ac70f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac70fa:	c7 44 24 04 74 e9 e2 	movl   $0x8e2e974,0x4(%esp)
 8ac7101:	08 
 8ac7102:	89 14 24             	mov    %edx,(%esp)
 8ac7105:	e8 86 69 5b ff       	call   807da90 <fprintf@plt>
 8ac710a:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac710f:	c7 44 24 10 4a ea e2 	movl   $0x8e2ea4a,0x10(%esp)
 8ac7116:	08 
 8ac7117:	c7 44 24 0c f4 05 00 	movl   $0x5f4,0xc(%esp)
 8ac711e:	00 
 8ac711f:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac7126:	08 
 8ac7127:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac712e:	08 
 8ac712f:	89 04 24             	mov    %eax,(%esp)
 8ac7132:	e8 59 69 5b ff       	call   807da90 <fprintf@plt>
 8ac7137:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac713c:	e9 b1 04 00 00       	jmp    8ac75f2 <_ZN7PackSet6verifyEv+0x968>
 8ac7141:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8ac7144:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac7148:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac714b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac714f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8ac7152:	89 04 24             	mov    %eax,(%esp)
 8ac7155:	e8 36 6b 5b ff       	call   807dc90 <memcmp@plt>
 8ac715a:	85 c0                	test   %eax,%eax
 8ac715c:	74 67                	je     8ac71c5 <_ZN7PackSet6verifyEv+0x53b>
 8ac715e:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac7161:	89 04 24             	mov    %eax,(%esp)
 8ac7164:	e8 bb 08 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac7169:	83 c0 08             	add    $0x8,%eax
 8ac716c:	89 04 24             	mov    %eax,(%esp)
 8ac716f:	e8 7c f3 c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac7174:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8ac717a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac717e:	c7 44 24 04 8a e9 e2 	movl   $0x8e2e98a,0x4(%esp)
 8ac7185:	08 
 8ac7186:	89 14 24             	mov    %edx,(%esp)
 8ac7189:	e8 02 69 5b ff       	call   807da90 <fprintf@plt>
 8ac718e:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac7193:	c7 44 24 10 4a ea e2 	movl   $0x8e2ea4a,0x10(%esp)
 8ac719a:	08 
 8ac719b:	c7 44 24 0c fa 05 00 	movl   $0x5fa,0xc(%esp)
 8ac71a2:	00 
 8ac71a3:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac71aa:	08 
 8ac71ab:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac71b2:	08 
 8ac71b3:	89 04 24             	mov    %eax,(%esp)
 8ac71b6:	e8 d5 68 5b ff       	call   807da90 <fprintf@plt>
 8ac71bb:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac71c0:	e9 2d 04 00 00       	jmp    8ac75f2 <_ZN7PackSet6verifyEv+0x968>
 8ac71c5:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac71c8:	89 04 24             	mov    %eax,(%esp)
 8ac71cb:	e8 54 08 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac71d0:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac71d3:	01 45 d0             	add    %eax,-0x30(%ebp)
 8ac71d6:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 8ac71da:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac71dd:	89 04 24             	mov    %eax,(%esp)
 8ac71e0:	e8 5f 76 01 00       	call   8ade844 <_ZN4Tick3nowEv>
 8ac71e5:	83 ec 04             	sub    $0x4,%esp
 8ac71e8:	8b 45 88             	mov    -0x78(%ebp),%eax
 8ac71eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac71ef:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac71f2:	89 04 24             	mov    %eax,(%esp)
 8ac71f5:	e8 80 77 01 00       	call   8ade97a <_ZNK4TickmiES_>
 8ac71fa:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 8ac71ff:	0f 9f c0             	setg   %al
 8ac7202:	84 c0                	test   %al,%al
 8ac7204:	0f 84 d2 01 00 00    	je     8ac73dc <_ZN7PackSet6verifyEv+0x752>
 8ac720a:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8ac720d:	89 04 24             	mov    %eax,(%esp)
 8ac7210:	e8 2f 76 01 00       	call   8ade844 <_ZN4Tick3nowEv>
 8ac7215:	83 ec 04             	sub    $0x4,%esp
 8ac7218:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8ac721b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac721f:	8d 45 88             	lea    -0x78(%ebp),%eax
 8ac7222:	89 04 24             	mov    %eax,(%esp)
 8ac7225:	e8 b6 76 01 00       	call   8ade8e0 <_ZN4TickaSES_>
 8ac722a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac722d:	89 04 24             	mov    %eax,(%esp)
 8ac7230:	e8 0f 76 01 00       	call   8ade844 <_ZN4Tick3nowEv>
 8ac7235:	83 ec 04             	sub    $0x4,%esp
 8ac7238:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8ac723b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac723f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac7242:	89 04 24             	mov    %eax,(%esp)
 8ac7245:	e8 30 77 01 00       	call   8ade97a <_ZNK4TickmiES_>
 8ac724a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ac724d:	db 45 d8             	fildl  -0x28(%ebp)
 8ac7250:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ac7253:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac7258:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac725e:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac7264:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac726a:	de f9                	fdivrp %st,%st(1)
 8ac726c:	d9 5d dc             	fstps  -0x24(%ebp)
 8ac726f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ac7272:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ac7275:	89 d1                	mov    %edx,%ecx
 8ac7277:	29 c1                	sub    %eax,%ecx
 8ac7279:	89 c8                	mov    %ecx,%eax
 8ac727b:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac7280:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac7286:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac728c:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac7292:	d8 4d dc             	fmuls  -0x24(%ebp)
 8ac7295:	d9 bd 76 ff ff ff    	fnstcw -0x8a(%ebp)
 8ac729b:	0f b7 85 76 ff ff ff 	movzwl -0x8a(%ebp),%eax
 8ac72a2:	b4 0c                	mov    $0xc,%ah
 8ac72a4:	66 89 85 74 ff ff ff 	mov    %ax,-0x8c(%ebp)
 8ac72ab:	d9 ad 74 ff ff ff    	fldcw  -0x8c(%ebp)
 8ac72b1:	db 5d e0             	fistpl -0x20(%ebp)
 8ac72b4:	d9 ad 76 ff ff ff    	fldcw  -0x8a(%ebp)
 8ac72ba:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8ac72bd:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac72c2:	89 d8                	mov    %ebx,%eax
 8ac72c4:	f7 ea                	imul   %edx
 8ac72c6:	c1 fa 0e             	sar    $0xe,%edx
 8ac72c9:	89 d8                	mov    %ebx,%eax
 8ac72cb:	c1 f8 1f             	sar    $0x1f,%eax
 8ac72ce:	89 d1                	mov    %edx,%ecx
 8ac72d0:	29 c1                	sub    %eax,%ecx
 8ac72d2:	69 c1 60 ea 00 00    	imul   $0xea60,%ecx,%eax
 8ac72d8:	89 d9                	mov    %ebx,%ecx
 8ac72da:	29 c1                	sub    %eax,%ecx
 8ac72dc:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8ac72e1:	89 c8                	mov    %ecx,%eax
 8ac72e3:	f7 ea                	imul   %edx
 8ac72e5:	c1 fa 06             	sar    $0x6,%edx
 8ac72e8:	89 c8                	mov    %ecx,%eax
 8ac72ea:	c1 f8 1f             	sar    $0x1f,%eax
 8ac72ed:	89 d7                	mov    %edx,%edi
 8ac72ef:	29 c7                	sub    %eax,%edi
 8ac72f1:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8ac72f4:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac72f9:	89 c8                	mov    %ecx,%eax
 8ac72fb:	f7 ea                	imul   %edx
 8ac72fd:	c1 fa 0e             	sar    $0xe,%edx
 8ac7300:	89 c8                	mov    %ecx,%eax
 8ac7302:	c1 f8 1f             	sar    $0x1f,%eax
 8ac7305:	89 d6                	mov    %edx,%esi
 8ac7307:	29 c6                	sub    %eax,%esi
 8ac7309:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8ac730c:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac7311:	89 d8                	mov    %ebx,%eax
 8ac7313:	f7 ea                	imul   %edx
 8ac7315:	c1 fa 0e             	sar    $0xe,%edx
 8ac7318:	89 d8                	mov    %ebx,%eax
 8ac731a:	c1 f8 1f             	sar    $0x1f,%eax
 8ac731d:	89 d1                	mov    %edx,%ecx
 8ac731f:	29 c1                	sub    %eax,%ecx
 8ac7321:	69 c1 60 ea 00 00    	imul   $0xea60,%ecx,%eax
 8ac7327:	89 d9                	mov    %ebx,%ecx
 8ac7329:	29 c1                	sub    %eax,%ecx
 8ac732b:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8ac7330:	89 c8                	mov    %ecx,%eax
 8ac7332:	f7 ea                	imul   %edx
 8ac7334:	c1 fa 06             	sar    $0x6,%edx
 8ac7337:	89 c8                	mov    %ecx,%eax
 8ac7339:	c1 f8 1f             	sar    $0x1f,%eax
 8ac733c:	89 d3                	mov    %edx,%ebx
 8ac733e:	29 c3                	sub    %eax,%ebx
 8ac7340:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8ac7343:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac7348:	89 c8                	mov    %ecx,%eax
 8ac734a:	f7 ea                	imul   %edx
 8ac734c:	c1 fa 0e             	sar    $0xe,%edx
 8ac734f:	89 c8                	mov    %ecx,%eax
 8ac7351:	c1 f8 1f             	sar    $0x1f,%eax
 8ac7354:	89 d1                	mov    %edx,%ecx
 8ac7356:	29 c1                	sub    %eax,%ecx
 8ac7358:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ac735b:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac7360:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac7366:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac736c:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac7372:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ac7375:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac737a:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac7380:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac7386:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac738c:	de f9                	fdivrp %st,%st(1)
 8ac738e:	d9 05 ec ea e2 08    	flds   0x8e2eaec
 8ac7394:	de c9                	fmulp  %st,%st(1)
 8ac7396:	d9 ad 74 ff ff ff    	fldcw  -0x8c(%ebp)
 8ac739c:	db 9d 70 ff ff ff    	fistpl -0x90(%ebp)
 8ac73a2:	d9 ad 76 ff ff ff    	fldcw  -0x8a(%ebp)
 8ac73a8:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8ac73ae:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8ac73b1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8ac73b5:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8ac73b8:	89 54 24 18          	mov    %edx,0x18(%esp)
 8ac73bc:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8ac73c0:	89 74 24 10          	mov    %esi,0x10(%esp)
 8ac73c4:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ac73c8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac73cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac73d0:	c7 04 24 a4 e9 e2 08 	movl   $0x8e2e9a4,(%esp)
 8ac73d7:	e8 84 67 5b ff       	call   807db60 <printf@plt>
 8ac73dc:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac73df:	89 04 24             	mov    %eax,(%esp)
 8ac73e2:	e8 27 06 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac73e7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac73ea:	8d 50 10             	lea    0x10(%eax),%edx
 8ac73ed:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac73f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac73f4:	89 04 24             	mov    %eax,(%esp)
 8ac73f7:	e8 8e 05 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac73fc:	83 ec 04             	sub    $0x4,%esp
 8ac73ff:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 8ac7402:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac7406:	8d 45 90             	lea    -0x70(%ebp),%eax
 8ac7409:	89 04 24             	mov    %eax,(%esp)
 8ac740c:	e8 9f 05 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac7411:	84 c0                	test   %al,%al
 8ac7413:	0f 85 72 fa ff ff    	jne    8ac6e8b <_ZN7PackSet6verifyEv+0x201>
 8ac7419:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac741c:	89 04 24             	mov    %eax,(%esp)
 8ac741f:	e8 20 74 01 00       	call   8ade844 <_ZN4Tick3nowEv>
 8ac7424:	83 ec 04             	sub    $0x4,%esp
 8ac7427:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8ac742a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac742e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac7431:	89 04 24             	mov    %eax,(%esp)
 8ac7434:	e8 41 75 01 00       	call   8ade97a <_ZNK4TickmiES_>
 8ac7439:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ac743c:	db 45 d8             	fildl  -0x28(%ebp)
 8ac743f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ac7442:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac7447:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac744d:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac7453:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac7459:	de f9                	fdivrp %st,%st(1)
 8ac745b:	d9 5d dc             	fstps  -0x24(%ebp)
 8ac745e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ac7461:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ac7464:	89 d1                	mov    %edx,%ecx
 8ac7466:	29 c1                	sub    %eax,%ecx
 8ac7468:	89 c8                	mov    %ecx,%eax
 8ac746a:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac746f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac7475:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac747b:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac7481:	d8 4d dc             	fmuls  -0x24(%ebp)
 8ac7484:	d9 bd 76 ff ff ff    	fnstcw -0x8a(%ebp)
 8ac748a:	0f b7 85 76 ff ff ff 	movzwl -0x8a(%ebp),%eax
 8ac7491:	b4 0c                	mov    $0xc,%ah
 8ac7493:	66 89 85 74 ff ff ff 	mov    %ax,-0x8c(%ebp)
 8ac749a:	d9 ad 74 ff ff ff    	fldcw  -0x8c(%ebp)
 8ac74a0:	db 5d e0             	fistpl -0x20(%ebp)
 8ac74a3:	d9 ad 76 ff ff ff    	fldcw  -0x8a(%ebp)
 8ac74a9:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8ac74ac:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac74b1:	89 d8                	mov    %ebx,%eax
 8ac74b3:	f7 ea                	imul   %edx
 8ac74b5:	c1 fa 0e             	sar    $0xe,%edx
 8ac74b8:	89 d8                	mov    %ebx,%eax
 8ac74ba:	c1 f8 1f             	sar    $0x1f,%eax
 8ac74bd:	89 d1                	mov    %edx,%ecx
 8ac74bf:	29 c1                	sub    %eax,%ecx
 8ac74c1:	69 c1 60 ea 00 00    	imul   $0xea60,%ecx,%eax
 8ac74c7:	89 d9                	mov    %ebx,%ecx
 8ac74c9:	29 c1                	sub    %eax,%ecx
 8ac74cb:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8ac74d0:	89 c8                	mov    %ecx,%eax
 8ac74d2:	f7 ea                	imul   %edx
 8ac74d4:	c1 fa 06             	sar    $0x6,%edx
 8ac74d7:	89 c8                	mov    %ecx,%eax
 8ac74d9:	c1 f8 1f             	sar    $0x1f,%eax
 8ac74dc:	89 d7                	mov    %edx,%edi
 8ac74de:	29 c7                	sub    %eax,%edi
 8ac74e0:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8ac74e3:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac74e8:	89 c8                	mov    %ecx,%eax
 8ac74ea:	f7 ea                	imul   %edx
 8ac74ec:	c1 fa 0e             	sar    $0xe,%edx
 8ac74ef:	89 c8                	mov    %ecx,%eax
 8ac74f1:	c1 f8 1f             	sar    $0x1f,%eax
 8ac74f4:	89 d6                	mov    %edx,%esi
 8ac74f6:	29 c6                	sub    %eax,%esi
 8ac74f8:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 8ac74fb:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac7500:	89 d8                	mov    %ebx,%eax
 8ac7502:	f7 ea                	imul   %edx
 8ac7504:	c1 fa 0e             	sar    $0xe,%edx
 8ac7507:	89 d8                	mov    %ebx,%eax
 8ac7509:	c1 f8 1f             	sar    $0x1f,%eax
 8ac750c:	89 d1                	mov    %edx,%ecx
 8ac750e:	29 c1                	sub    %eax,%ecx
 8ac7510:	69 c1 60 ea 00 00    	imul   $0xea60,%ecx,%eax
 8ac7516:	89 d9                	mov    %ebx,%ecx
 8ac7518:	29 c1                	sub    %eax,%ecx
 8ac751a:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8ac751f:	89 c8                	mov    %ecx,%eax
 8ac7521:	f7 ea                	imul   %edx
 8ac7523:	c1 fa 06             	sar    $0x6,%edx
 8ac7526:	89 c8                	mov    %ecx,%eax
 8ac7528:	c1 f8 1f             	sar    $0x1f,%eax
 8ac752b:	89 d3                	mov    %edx,%ebx
 8ac752d:	29 c3                	sub    %eax,%ebx
 8ac752f:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 8ac7532:	ba 73 b2 e7 45       	mov    $0x45e7b273,%edx
 8ac7537:	89 c8                	mov    %ecx,%eax
 8ac7539:	f7 ea                	imul   %edx
 8ac753b:	c1 fa 0e             	sar    $0xe,%edx
 8ac753e:	89 c8                	mov    %ecx,%eax
 8ac7540:	c1 f8 1f             	sar    $0x1f,%eax
 8ac7543:	89 d1                	mov    %edx,%ecx
 8ac7545:	29 c1                	sub    %eax,%ecx
 8ac7547:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ac754a:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac754f:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac7555:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac755b:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac7561:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ac7564:	ba 00 00 00 00       	mov    $0x0,%edx
 8ac7569:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8ac756f:	89 95 7c ff ff ff    	mov    %edx,-0x84(%ebp)
 8ac7575:	df ad 78 ff ff ff    	fildll -0x88(%ebp)
 8ac757b:	de f9                	fdivrp %st,%st(1)
 8ac757d:	d9 05 ec ea e2 08    	flds   0x8e2eaec
 8ac7583:	de c9                	fmulp  %st,%st(1)
 8ac7585:	d9 ad 74 ff ff ff    	fldcw  -0x8c(%ebp)
 8ac758b:	db 9d 70 ff ff ff    	fistpl -0x90(%ebp)
 8ac7591:	d9 ad 76 ff ff ff    	fldcw  -0x8a(%ebp)
 8ac7597:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8ac759d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8ac75a0:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8ac75a4:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8ac75a7:	89 54 24 18          	mov    %edx,0x18(%esp)
 8ac75ab:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8ac75af:	89 74 24 10          	mov    %esi,0x10(%esp)
 8ac75b3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ac75b7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac75bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac75bf:	c7 04 24 a4 e9 e2 08 	movl   $0x8e2e9a4,(%esp)
 8ac75c6:	e8 95 65 5b ff       	call   807db60 <printf@plt>
 8ac75cb:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8ac75cf:	74 0b                	je     8ac75dc <_ZN7PackSet6verifyEv+0x952>
 8ac75d1:	8b 45 bc             	mov    -0x44(%ebp),%eax
 8ac75d4:	89 04 24             	mov    %eax,(%esp)
 8ac75d7:	e8 d4 d5 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac75dc:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 8ac75e0:	74 0b                	je     8ac75ed <_ZN7PackSet6verifyEv+0x963>
 8ac75e2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8ac75e5:	89 04 24             	mov    %eax,(%esp)
 8ac75e8:	e8 c3 d5 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac75ed:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac75f2:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ac75f5:	83 c4 00             	add    $0x0,%esp
 8ac75f8:	5b                   	pop    %ebx
 8ac75f9:	5e                   	pop    %esi
 8ac75fa:	5f                   	pop    %edi
 8ac75fb:	5d                   	pop    %ebp
 8ac75fc:	c3                   	ret
 8ac75fd:	90                   	nop

```

```c
// PackSet::verify @ 0x8ac6c8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DWARF original prototype: pack_ret_t verify(PackSet * this) */

pack_ret_t __thiscall PackSet::verify(PackSet *this)

{
  hash_t code;
  bool bVar1;
  pack_ret_t pVar2;
  pair<long_unsigned_int,_IndexEntry> *ppVar3;
  undefined4 uVar4;
  char *__filename;
  int iVar5;
  int32 iVar6;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_80;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_74;
  uint local_70;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_6c;
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  local_60;
  Tick local_54;
  Tick local_50;
  uint local_4c;
  undefined1 *local_48;
  uchar *local_44;
  size_t local_40;
  int local_3c;
  size_t local_38;
  uint local_34;
  uint local_30;
  int32 local_2c;
  float local_28;
  int local_24;
  FILE *local_20;
  
                    /* Unresolved local var: uint buffer_size@[???]
                       Unresolved local var: uchar * buffer_file@[???]
                       Unresolved local var: uchar * buffer_pack@[???]
                       Unresolved local var: int size_file@[???]
                       Unresolved local var: int size_pack@[???]
                       Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: size_t proc_count@[???]
                       Unresolved local var: size_t total_count@[???]
                       Unresolved local var: size_t proc_size@[???]
                       Unresolved local var: size_t total_size@[???]
                       Unresolved local var: Tick start_time@[???]
                       Unresolved local var: Tick update_time@[???]
                       Unresolved local var: int32 run_time@[???]
                       Unresolved local var: float avg_time@[???]
                       Unresolved local var: int32 remain_time@[???] */
  bVar1 = UsingEncryptedFile(this);
  if (bVar1) {
    pVar2 = verifyEncryptedFile(this);
  }
  else {
    local_4c = 0x500000;
    local_48 = (undefined1 *)0x0;
    local_44 = (uchar *)0x0;
    local_40 = 0;
    local_70 = 0;
    __gnu_cxx::
    __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
    ::__normal_iterator(&local_74);
    bVar1 = is_ready(this);
    if (bVar1) {
      local_48 = operator_new__(local_4c);
      local_44 = operator_new__(local_4c);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      Tick::Tick((Tick *)&local_80.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_end_of_storage);
      Tick::Tick((Tick *)&local_80.
                          super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                          ._M_impl._M_finish);
      local_2c = 0;
      local_28 = 0.0;
      local_24 = 0;
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin(&local_80);
      local_74._M_current =
           local_80.
           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           ._M_impl._M_start;
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end(&local_6c);
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_74,
                           (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)&local_6c);
        if (!bVar1) break;
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        local_30 = local_30 + (ppVar3->second).size_;
        __gnu_cxx::
        __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++(&local_74);
      }
      local_38 = std::
                 vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                 ::size(&this->indexes_);
      Tick::now((Tick *)&local_6c.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_finish);
      Tick::operator=((Tick *)&local_80.
                               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                               ._M_impl._M_end_of_storage,
                      (Tick)local_6c.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_finish);
      Tick::now((Tick *)&local_6c.
                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                         ._M_impl._M_end_of_storage);
      Tick::operator=((Tick *)&local_80.
                               super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                               ._M_impl._M_finish,
                      (Tick)local_6c.
                            super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                            ._M_impl._M_end_of_storage);
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin(&local_80);
      local_74._M_current =
           local_80.
           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
           ._M_impl._M_start;
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end(&local_60);
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_74,
                           (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)&local_60);
        if (!bVar1) break;
                    /* Unresolved local var: FILE * fp@[???] */
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        if (local_4c < (ppVar3->second).aligned_size_) {
          if (local_48 != (undefined1 *)0x0) {
            if (local_48 != (undefined1 *)0x0) {
              operator_delete__(local_48);
            }
            local_48 = (undefined1 *)0x0;
          }
          if (local_44 != (uchar *)0x0) {
            if (local_44 != (uchar *)0x0) {
              operator_delete__(local_44);
            }
            local_44 = (uchar *)0x0;
          }
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          local_4c = (ppVar3->second).aligned_size_;
          local_48 = operator_new__(local_4c);
          local_44 = operator_new__(local_4c);
        }
        *local_48 = 0;
        *local_44 = '\0';
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        code = ppVar3->first;
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        pVar2 = IndexEntry::get_content(&ppVar3->second,this,code,local_44,local_4c,&local_70);
        if (pVar2 == PACK_ERROR) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"get content. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5e0,"verify");
          return PACK_ERROR;
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        __filename = (char *)std::string::c_str((string *)&(ppVar3->second).name_);
        local_20 = fopen(__filename,"rb");
        if (local_20 == (FILE *)0x0) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"fopen failed. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5e7,"verify");
          return PACK_ERROR;
        }
        fseek(local_20,0,2);
        local_40 = ftell(local_20);
        fseek(local_20,0,0);
        fread(local_48,local_40,1,local_20);
        fclose(local_20);
        if (local_40 != local_70) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"size is different. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5f4,"verify");
          return PACK_ERROR;
        }
        iVar5 = memcmp(local_48,local_44,local_70);
        if (iVar5 != 0) {
          ppVar3 = __gnu_cxx::
                   __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                   ::operator->(&local_74);
          uVar4 = std::string::c_str((string *)&(ppVar3->second).name_);
          fprintf(stdout,"contents is different. %s",uVar4);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5fa,"verify");
          return PACK_ERROR;
        }
        ppVar3 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_74);
        local_34 = local_34 + (ppVar3->second).size_;
        local_3c = local_3c + 1;
        Tick::now((Tick *)&local_60.
                           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                           ._M_impl._M_finish);
        iVar6 = Tick::operator-((Tick *)&local_60.
                                         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                         ._M_impl._M_finish,
                                (Tick)local_80.
                                      super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                      ._M_impl._M_finish);
        if (1000 < iVar6) {
          Tick::now((Tick *)&local_60.
                             super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                             ._M_impl._M_end_of_storage);
          Tick::operator=((Tick *)&local_80.
                                   super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                   ._M_impl._M_finish,
                          (Tick)local_60.
                                super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                ._M_impl._M_end_of_storage);
          Tick::now(&local_54);
          local_2c = Tick::operator-(&local_54,
                                     (Tick)local_80.
                                           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                           ._M_impl._M_end_of_storage);
          local_28 = (float)local_2c / (float)local_34;
          local_24 = (int)ROUND((float)(local_30 - local_34) * local_28);
          printf("%3d%% (%2dmin %2dsec)/(%2dmin %2dsec) (%d/%d)    \n",
                 (int)ROUND((longdouble)_DAT_08e2eaec *
                            ((longdouble)local_34 / (longdouble)local_30)),local_2c / 60000,
                 (local_2c % 60000) / 1000,local_24 / 60000,(local_24 % 60000) / 1000,local_3c,
                 local_38);
        }
        __gnu_cxx::
        __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++(&local_74);
      }
      Tick::now(&local_50);
      local_2c = Tick::operator-(&local_50,
                                 (Tick)local_80.
                                       super__Vector_base<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                                       ._M_impl._M_end_of_storage);
      local_28 = (float)local_2c / (float)local_34;
      local_24 = (int)ROUND((float)(local_30 - local_34) * local_28);
      printf("%3d%% (%2dmin %2dsec)/(%2dmin %2dsec) (%d/%d)    \n",
             (int)ROUND((longdouble)_DAT_08e2eaec * ((longdouble)local_34 / (longdouble)local_30)),
             local_2c / 60000,(local_2c % 60000) / 1000,local_24 / 60000,(local_24 % 60000) / 1000,
             local_3c,local_38);
      if (local_48 != (undefined1 *)0x0) {
        operator_delete__(local_48);
      }
      if (local_44 != (uchar *)0x0) {
        operator_delete__(local_44);
      }
      pVar2 = PACK_OK;
    }
    else {
      fprintf(stdout,"%s\n","Not yet opened");
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x5a5,"verify");
      pVar2 = PACK_ERROR;
    }
  }
  return pVar2;
}

```

---

## verifyEncryptedFile

```asm
// === 08ac75fe PackSet::verifyEncryptedFile  [0x08ac75fe-0x8ac7607] ===
 8ac75fe:	55                   	push   %ebp
 8ac75ff:	89 e5                	mov    %esp,%ebp
 8ac7601:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac7606:	5d                   	pop    %ebp
 8ac7607:	c3                   	ret

```

```c
// PackSet::verifyEncryptedFile @ 0x8ac75fe

/* DWARF original prototype: pack_ret_t verifyEncryptedFile(PackSet * this) */

pack_ret_t __thiscall PackSet::verifyEncryptedFile(PackSet *this)

{
  return PACK_ERROR;
}

```

---

## write

```asm
// === 08ac60fa PackSet::write  [0x08ac60fa-0x8ac6987] ===
 8ac60fa:	55                   	push   %ebp
 8ac60fb:	89 e5                	mov    %esp,%ebp
 8ac60fd:	56                   	push   %esi
 8ac60fe:	53                   	push   %ebx
 8ac60ff:	81 ec 90 02 00 00    	sub    $0x290,%esp
 8ac6105:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8ac610c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac610f:	89 04 24             	mov    %eax,(%esp)
 8ac6112:	e8 c5 18 00 00       	call   8ac79dc <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEC1Ev>
 8ac6117:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac611a:	89 04 24             	mov    %eax,(%esp)
 8ac611d:	e8 b4 1f 00 00       	call   8ac80d6 <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEC1Ev>
 8ac6122:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac6125:	89 04 24             	mov    %eax,(%esp)
 8ac6128:	e8 b7 1f 00 00       	call   8ac80e4 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EEC1Ev>
 8ac612d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ac6134:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6137:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac613a:	85 c0                	test   %eax,%eax
 8ac613c:	74 54                	je     8ac6192 <_ZN7PackSet5writeEPKcS1_j+0x98>
 8ac613e:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6143:	c7 44 24 08 6e e8 e2 	movl   $0x8e2e86e,0x8(%esp)
 8ac614a:	08 
 8ac614b:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac6152:	08 
 8ac6153:	89 04 24             	mov    %eax,(%esp)
 8ac6156:	e8 35 79 5b ff       	call   807da90 <fprintf@plt>
 8ac615b:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6160:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac6167:	08 
 8ac6168:	c7 44 24 0c e8 04 00 	movl   $0x4e8,0xc(%esp)
 8ac616f:	00 
 8ac6170:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6177:	08 
 8ac6178:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac617f:	08 
 8ac6180:	89 04 24             	mov    %eax,(%esp)
 8ac6183:	e8 08 79 5b ff       	call   807da90 <fprintf@plt>
 8ac6188:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac618d:	e9 df 07 00 00       	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac6192:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6195:	89 04 24             	mov    %eax,(%esp)
 8ac6198:	e8 d3 e7 ff ff       	call   8ac4970 <_ZNK7PackSet8is_dirtyEv>
 8ac619d:	84 c0                	test   %al,%al
 8ac619f:	74 4c                	je     8ac61ed <_ZN7PackSet5writeEPKcS1_j+0xf3>
 8ac61a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac61a4:	89 04 24             	mov    %eax,(%esp)
 8ac61a7:	e8 42 f7 ff ff       	call   8ac58ee <_ZN7PackSet4sortEv>
 8ac61ac:	83 f8 01             	cmp    $0x1,%eax
 8ac61af:	0f 94 c0             	sete   %al
 8ac61b2:	84 c0                	test   %al,%al
 8ac61b4:	74 37                	je     8ac61ed <_ZN7PackSet5writeEPKcS1_j+0xf3>
 8ac61b6:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac61bb:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac61c2:	08 
 8ac61c3:	c7 44 24 0c f0 04 00 	movl   $0x4f0,0xc(%esp)
 8ac61ca:	00 
 8ac61cb:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac61d2:	08 
 8ac61d3:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac61da:	08 
 8ac61db:	89 04 24             	mov    %eax,(%esp)
 8ac61de:	e8 ad 78 5b ff       	call   807da90 <fprintf@plt>
 8ac61e3:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac61e8:	e9 84 07 00 00       	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac61ed:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac61f0:	8d 50 10             	lea    0x10(%eax),%edx
 8ac61f3:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8ac61f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac61fd:	89 04 24             	mov    %eax,(%esp)
 8ac6200:	e8 e5 17 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac6205:	83 ec 04             	sub    $0x4,%esp
 8ac6208:	8b 85 94 fd ff ff    	mov    -0x26c(%ebp),%eax
 8ac620e:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8ac6211:	e9 d2 00 00 00       	jmp    8ac62e8 <_ZN7PackSet5writeEPKcS1_j+0x1ee>
 8ac6216:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac6219:	89 04 24             	mov    %eax,(%esp)
 8ac621c:	e8 35 1f 00 00       	call   8ac8156 <_ZNSt4pairImP10IndexEntryEC1Ev>
 8ac6221:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac6224:	89 04 24             	mov    %eax,(%esp)
 8ac6227:	e8 f8 17 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac622c:	83 c0 08             	add    $0x8,%eax
 8ac622f:	89 04 24             	mov    %eax,(%esp)
 8ac6232:	e8 b9 02 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac6237:	c7 44 24 10 04 01 00 	movl   $0x104,0x10(%esp)
 8ac623e:	00 
 8ac623f:	8d 95 a0 fd ff ff    	lea    -0x260(%ebp),%edx
 8ac6245:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac6249:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8ac6250:	00 
 8ac6251:	8d 95 a4 fe ff ff    	lea    -0x15c(%ebp),%edx
 8ac6257:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac625b:	89 04 24             	mov    %eax,(%esp)
 8ac625e:	e8 37 d9 ff ff       	call   8ac3b9a <_Z17_correct_filenamePKcPcjS1_j>
 8ac6263:	83 f8 01             	cmp    $0x1,%eax
 8ac6266:	0f 94 c0             	sete   %al
 8ac6269:	84 c0                	test   %al,%al
 8ac626b:	74 32                	je     8ac629f <_ZN7PackSet5writeEPKcS1_j+0x1a5>
 8ac626d:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6272:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac6279:	08 
 8ac627a:	c7 44 24 0c ff 04 00 	movl   $0x4ff,0xc(%esp)
 8ac6281:	00 
 8ac6282:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6289:	08 
 8ac628a:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac6291:	08 
 8ac6292:	89 04 24             	mov    %eax,(%esp)
 8ac6295:	e8 f6 77 5b ff       	call   807da90 <fprintf@plt>
 8ac629a:	e9 88 06 00 00       	jmp    8ac6927 <_ZN7PackSet5writeEPKcS1_j+0x82d>
 8ac629f:	8d 85 a0 fd ff ff    	lea    -0x260(%ebp),%eax
 8ac62a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac62a9:	8d 85 a4 fe ff ff    	lea    -0x15c(%ebp),%eax
 8ac62af:	89 04 24             	mov    %eax,(%esp)
 8ac62b2:	e8 9e d8 ff ff       	call   8ac3b55 <_ZL11_write_hashPKcS0_>
 8ac62b7:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8ac62ba:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac62bd:	89 04 24             	mov    %eax,(%esp)
 8ac62c0:	e8 5f 17 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac62c5:	83 c0 04             	add    $0x4,%eax
 8ac62c8:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8ac62cb:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8ac62ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac62d2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac62d5:	89 04 24             	mov    %eax,(%esp)
 8ac62d8:	e8 91 1e 00 00       	call   8ac816e <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE9push_backERKS3_>
 8ac62dd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac62e0:	89 04 24             	mov    %eax,(%esp)
 8ac62e3:	e8 26 17 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac62e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac62eb:	8d 50 10             	lea    0x10(%eax),%edx
 8ac62ee:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac62f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac62f5:	89 04 24             	mov    %eax,(%esp)
 8ac62f8:	e8 8d 16 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac62fd:	83 ec 04             	sub    $0x4,%esp
 8ac6300:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ac6303:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6307:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac630a:	89 04 24             	mov    %eax,(%esp)
 8ac630d:	e8 9e 16 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac6312:	84 c0                	test   %al,%al
 8ac6314:	0f 85 fc fe ff ff    	jne    8ac6216 <_ZN7PackSet5writeEPKcS1_j+0x11c>
 8ac631a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ac631d:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac6320:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6324:	89 04 24             	mov    %eax,(%esp)
 8ac6327:	e8 da 1e 00 00       	call   8ac8206 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE3endEv>
 8ac632c:	83 ec 04             	sub    $0x4,%esp
 8ac632f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ac6332:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac6335:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6339:	89 04 24             	mov    %eax,(%esp)
 8ac633c:	e8 a1 1e 00 00       	call   8ac81e2 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE5beginEv>
 8ac6341:	83 ec 04             	sub    $0x4,%esp
 8ac6344:	c7 44 24 08 f0 3a ac 	movl   $0x8ac3af0,0x8(%esp)
 8ac634b:	08 
 8ac634c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ac634f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6353:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ac6356:	89 04 24             	mov    %eax,(%esp)
 8ac6359:	e8 ce 1e 00 00       	call   8ac822c <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS5_SaIS5_EEEEPFbRKS5_SC_EEvT_SF_T0_>
 8ac635e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8ac6365:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8ac636b:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac636e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6372:	89 04 24             	mov    %eax,(%esp)
 8ac6375:	e8 68 1e 00 00       	call   8ac81e2 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE5beginEv>
 8ac637a:	83 ec 04             	sub    $0x4,%esp
 8ac637d:	8b 85 94 fd ff ff    	mov    -0x26c(%ebp),%eax
 8ac6383:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8ac6386:	eb 39                	jmp    8ac63c1 <_ZN7PackSet5writeEPKcS1_j+0x2c7>
 8ac6388:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac638b:	89 04 24             	mov    %eax,(%esp)
 8ac638e:	e8 4d 1f 00 00       	call   8ac82e0 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEptEv>
 8ac6393:	8b 40 04             	mov    0x4(%eax),%eax
 8ac6396:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ac6399:	89 50 14             	mov    %edx,0x14(%eax)
 8ac639c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac639f:	89 04 24             	mov    %eax,(%esp)
 8ac63a2:	e8 39 1f 00 00       	call   8ac82e0 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEptEv>
 8ac63a7:	8b 40 04             	mov    0x4(%eax),%eax
 8ac63aa:	8b 50 0c             	mov    0xc(%eax),%edx
 8ac63ad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ac63b0:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ac63b3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ac63b6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac63b9:	89 04 24             	mov    %eax,(%esp)
 8ac63bc:	e8 09 1f 00 00       	call   8ac82ca <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEppEv>
 8ac63c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ac63c4:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac63c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac63cb:	89 04 24             	mov    %eax,(%esp)
 8ac63ce:	e8 33 1e 00 00       	call   8ac8206 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE3endEv>
 8ac63d3:	83 ec 04             	sub    $0x4,%esp
 8ac63d6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8ac63d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac63dd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac63e0:	89 04 24             	mov    %eax,(%esp)
 8ac63e3:	e8 b5 1e 00 00       	call   8ac829d <_ZN9__gnu_cxxneIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8ac63e8:	84 c0                	test   %al,%al
 8ac63ea:	75 9c                	jne    8ac6388 <_ZN7PackSet5writeEPKcS1_j+0x28e>
 8ac63ec:	a1 84 56 3f 09       	mov    0x93f5684,%eax
 8ac63f1:	c7 44 24 04 d4 e8 e2 	movl   $0x8e2e8d4,0x4(%esp)
 8ac63f8:	08 
 8ac63f9:	89 04 24             	mov    %eax,(%esp)
 8ac63fc:	e8 6f 83 5b ff       	call   807e770 <fopen@plt>
 8ac6401:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ac6404:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8ac6408:	75 51                	jne    8ac645b <_ZN7PackSet5writeEPKcS1_j+0x361>
 8ac640a:	8b 15 84 56 3f 09    	mov    0x93f5684,%edx
 8ac6410:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6415:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac6419:	c7 44 24 04 ab e8 e2 	movl   $0x8e2e8ab,0x4(%esp)
 8ac6420:	08 
 8ac6421:	89 04 24             	mov    %eax,(%esp)
 8ac6424:	e8 67 76 5b ff       	call   807da90 <fprintf@plt>
 8ac6429:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac642e:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac6435:	08 
 8ac6436:	c7 44 24 0c 14 05 00 	movl   $0x514,0xc(%esp)
 8ac643d:	00 
 8ac643e:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6445:	08 
 8ac6446:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac644d:	08 
 8ac644e:	89 04 24             	mov    %eax,(%esp)
 8ac6451:	e8 3a 76 5b ff       	call   807da90 <fprintf@plt>
 8ac6456:	e9 cc 04 00 00       	jmp    8ac6927 <_ZN7PackSet5writeEPKcS1_j+0x82d>
 8ac645b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac645e:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6461:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8ac6467:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac646b:	89 04 24             	mov    %eax,(%esp)
 8ac646e:	e8 77 15 00 00       	call   8ac79ea <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE5beginEv>
 8ac6473:	83 ec 04             	sub    $0x4,%esp
 8ac6476:	8b 85 94 fd ff ff    	mov    -0x26c(%ebp),%eax
 8ac647c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8ac647f:	e9 8e 00 00 00       	jmp    8ac6512 <_ZN7PackSet5writeEPKcS1_j+0x418>
 8ac6484:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac6487:	89 04 24             	mov    %eax,(%esp)
 8ac648a:	e8 95 15 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac648f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8ac6492:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac6496:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac649d:	00 
 8ac649e:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac64a5:	00 
 8ac64a6:	89 04 24             	mov    %eax,(%esp)
 8ac64a9:	e8 72 7e 5b ff       	call   807e320 <fwrite@plt>
 8ac64ae:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac64b1:	89 04 24             	mov    %eax,(%esp)
 8ac64b4:	e8 6b 15 00 00       	call   8ac7a24 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEptEv>
 8ac64b9:	8d 50 04             	lea    0x4(%eax),%edx
 8ac64bc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac64bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac64c3:	89 14 24             	mov    %edx,(%esp)
 8ac64c6:	e8 b9 dd ff ff       	call   8ac4284 <_ZN10IndexEntry10write_infoEP8_IO_FILE>
 8ac64cb:	83 f8 01             	cmp    $0x1,%eax
 8ac64ce:	0f 94 c0             	sete   %al
 8ac64d1:	84 c0                	test   %al,%al
 8ac64d3:	74 32                	je     8ac6507 <_ZN7PackSet5writeEPKcS1_j+0x40d>
 8ac64d5:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac64da:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac64e1:	08 
 8ac64e2:	c7 44 24 0c 1c 05 00 	movl   $0x51c,0xc(%esp)
 8ac64e9:	00 
 8ac64ea:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac64f1:	08 
 8ac64f2:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac64f9:	08 
 8ac64fa:	89 04 24             	mov    %eax,(%esp)
 8ac64fd:	e8 8e 75 5b ff       	call   807da90 <fprintf@plt>
 8ac6502:	e9 20 04 00 00       	jmp    8ac6927 <_ZN7PackSet5writeEPKcS1_j+0x82d>
 8ac6507:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac650a:	89 04 24             	mov    %eax,(%esp)
 8ac650d:	e8 fc 14 00 00       	call   8ac7a0e <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEppEv>
 8ac6512:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6515:	8d 50 10             	lea    0x10(%eax),%edx
 8ac6518:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ac651b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac651f:	89 04 24             	mov    %eax,(%esp)
 8ac6522:	e8 63 14 00 00       	call   8ac798a <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EE3endEv>
 8ac6527:	83 ec 04             	sub    $0x4,%esp
 8ac652a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8ac652d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6531:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ac6534:	89 04 24             	mov    %eax,(%esp)
 8ac6537:	e8 74 14 00 00       	call   8ac79b0 <_ZN9__gnu_cxxneIPSt4pairIm10IndexEntryESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESD_>
 8ac653c:	84 c0                	test   %al,%al
 8ac653e:	0f 85 40 ff ff ff    	jne    8ac6484 <_ZN7PackSet5writeEPKcS1_j+0x38a>
 8ac6544:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6547:	89 04 24             	mov    %eax,(%esp)
 8ac654a:	e8 51 79 5b ff       	call   807dea0 <fclose@plt>
 8ac654f:	a1 84 56 3f 09       	mov    0x93f5684,%eax
 8ac6554:	c7 44 24 04 49 e8 e2 	movl   $0x8e2e849,0x4(%esp)
 8ac655b:	08 
 8ac655c:	89 04 24             	mov    %eax,(%esp)
 8ac655f:	e8 0c 82 5b ff       	call   807e770 <fopen@plt>
 8ac6564:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ac6567:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8ac656b:	75 53                	jne    8ac65c0 <_ZN7PackSet5writeEPKcS1_j+0x4c6>
 8ac656d:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6572:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac6575:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac6579:	c7 44 24 04 ab e8 e2 	movl   $0x8e2e8ab,0x4(%esp)
 8ac6580:	08 
 8ac6581:	89 04 24             	mov    %eax,(%esp)
 8ac6584:	e8 07 75 5b ff       	call   807da90 <fprintf@plt>
 8ac6589:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac658e:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac6595:	08 
 8ac6596:	c7 44 24 0c 26 05 00 	movl   $0x526,0xc(%esp)
 8ac659d:	00 
 8ac659e:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac65a5:	08 
 8ac65a6:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac65ad:	08 
 8ac65ae:	89 04 24             	mov    %eax,(%esp)
 8ac65b1:	e8 da 74 5b ff       	call   807da90 <fprintf@plt>
 8ac65b6:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac65bb:	e9 b1 03 00 00       	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac65c0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8ac65c7:	00 
 8ac65c8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac65cf:	00 
 8ac65d0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac65d3:	89 04 24             	mov    %eax,(%esp)
 8ac65d6:	e8 d5 7a 5b ff       	call   807e0b0 <fseek@plt>
 8ac65db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac65de:	89 04 24             	mov    %eax,(%esp)
 8ac65e1:	e8 ea 73 5b ff       	call   807d9d0 <ftell@plt>
 8ac65e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac65e9:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ac65ed:	79 0a                	jns    8ac65f9 <_ZN7PackSet5writeEPKcS1_j+0x4ff>
 8ac65ef:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac65f4:	e9 78 03 00 00       	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac65f9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac6600:	00 
 8ac6601:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac6608:	00 
 8ac6609:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac660c:	89 04 24             	mov    %eax,(%esp)
 8ac660f:	e8 9c 7a 5b ff       	call   807e0b0 <fseek@plt>
 8ac6614:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac6617:	83 c0 03             	add    $0x3,%eax
 8ac661a:	83 e0 fc             	and    $0xfffffffc,%eax
 8ac661d:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8ac6620:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6623:	89 04 24             	mov    %eax,(%esp)
 8ac6626:	e8 95 c7 c5 ff       	call   8722dc0 <_Znaj>
 8ac662b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac662e:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6631:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac6635:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac663c:	00 
 8ac663d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6640:	89 04 24             	mov    %eax,(%esp)
 8ac6643:	e8 78 76 5b ff       	call   807dcc0 <memset@plt>
 8ac6648:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac664b:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8ac664e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac6652:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac6659:	00 
 8ac665a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac665e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6661:	89 04 24             	mov    %eax,(%esp)
 8ac6664:	e8 e7 76 5b ff       	call   807dd50 <fread@plt>
 8ac6669:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac666c:	89 04 24             	mov    %eax,(%esp)
 8ac666f:	e8 2c 78 5b ff       	call   807dea0 <fclose@plt>
 8ac6674:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac6677:	83 c0 10             	add    $0x10,%eax
 8ac667a:	89 04 24             	mov    %eax,(%esp)
 8ac667d:	e8 ec 12 00 00       	call   8ac796e <_ZNKSt6vectorISt4pairIm10IndexEntryESaIS2_EE4sizeEv>
 8ac6682:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ac6685:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac6688:	89 c1                	mov    %eax,%ecx
 8ac668a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ac668d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ac6690:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac6694:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6698:	89 04 24             	mov    %eax,(%esp)
 8ac669b:	e8 0e ce 00 00       	call   8ad34ae <_ZN5Crc325crc32EjPKcj>
 8ac66a0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8ac66a3:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac66a6:	89 c2                	mov    %eax,%edx
 8ac66a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8ac66ab:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac66af:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ac66b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac66b6:	89 04 24             	mov    %eax,(%esp)
 8ac66b9:	e8 00 d2 ff ff       	call   8ac38be <_ZL8_encryptjPhj>
 8ac66be:	c7 44 24 04 d4 e8 e2 	movl   $0x8e2e8d4,0x4(%esp)
 8ac66c5:	08 
 8ac66c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac66c9:	89 04 24             	mov    %eax,(%esp)
 8ac66cc:	e8 9f 80 5b ff       	call   807e770 <fopen@plt>
 8ac66d1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ac66d4:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8ac66d8:	75 64                	jne    8ac673e <_ZN7PackSet5writeEPKcS1_j+0x644>
 8ac66da:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ac66de:	74 0b                	je     8ac66eb <_ZN7PackSet5writeEPKcS1_j+0x5f1>
 8ac66e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac66e3:	89 04 24             	mov    %eax,(%esp)
 8ac66e6:	e8 c5 e4 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac66eb:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac66f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac66f3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac66f7:	c7 44 24 04 ab e8 e2 	movl   $0x8e2e8ab,0x4(%esp)
 8ac66fe:	08 
 8ac66ff:	89 04 24             	mov    %eax,(%esp)
 8ac6702:	e8 89 73 5b ff       	call   807da90 <fprintf@plt>
 8ac6707:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac670c:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac6713:	08 
 8ac6714:	c7 44 24 0c 51 05 00 	movl   $0x551,0xc(%esp)
 8ac671b:	00 
 8ac671c:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6723:	08 
 8ac6724:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac672b:	08 
 8ac672c:	89 04 24             	mov    %eax,(%esp)
 8ac672f:	e8 5c 73 5b ff       	call   807da90 <fprintf@plt>
 8ac6734:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac6739:	e9 33 02 00 00       	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac673e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6741:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6745:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac6748:	89 04 24             	mov    %eax,(%esp)
 8ac674b:	e8 c4 cf ff ff       	call   8ac3714 <_ZL11_fwrite_strPKcP8_IO_FILE>
 8ac6750:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6753:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac6757:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac675e:	00 
 8ac675f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac6766:	00 
 8ac6767:	8d 45 14             	lea    0x14(%ebp),%eax
 8ac676a:	89 04 24             	mov    %eax,(%esp)
 8ac676d:	e8 ae 7b 5b ff       	call   807e320 <fwrite@plt>
 8ac6772:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6775:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac6779:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac6780:	00 
 8ac6781:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac6788:	00 
 8ac6789:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ac678c:	89 04 24             	mov    %eax,(%esp)
 8ac678f:	e8 8c 7b 5b ff       	call   807e320 <fwrite@plt>
 8ac6794:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6797:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac679b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac67a2:	00 
 8ac67a3:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac67aa:	00 
 8ac67ab:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8ac67ae:	89 04 24             	mov    %eax,(%esp)
 8ac67b1:	e8 6a 7b 5b ff       	call   807e320 <fwrite@plt>
 8ac67b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac67b9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac67bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac67c4:	00 
 8ac67c5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac67cc:	00 
 8ac67cd:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ac67d0:	89 04 24             	mov    %eax,(%esp)
 8ac67d3:	e8 48 7b 5b ff       	call   807e320 <fwrite@plt>
 8ac67d8:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8ac67db:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8ac67de:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac67e2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac67e9:	00 
 8ac67ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac67ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac67f1:	89 04 24             	mov    %eax,(%esp)
 8ac67f4:	e8 27 7b 5b ff       	call   807e320 <fwrite@plt>
 8ac67f9:	8d 85 94 fd ff ff    	lea    -0x26c(%ebp),%eax
 8ac67ff:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac6802:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac6806:	89 04 24             	mov    %eax,(%esp)
 8ac6809:	e8 d4 19 00 00       	call   8ac81e2 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE5beginEv>
 8ac680e:	83 ec 04             	sub    $0x4,%esp
 8ac6811:	8b 85 94 fd ff ff    	mov    -0x26c(%ebp),%eax
 8ac6817:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8ac681a:	e9 c7 00 00 00       	jmp    8ac68e6 <_ZN7PackSet5writeEPKcS1_j+0x7ec>
 8ac681f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac6822:	89 04 24             	mov    %eax,(%esp)
 8ac6825:	e8 b6 1a 00 00       	call   8ac82e0 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEptEv>
 8ac682a:	8b 40 04             	mov    0x4(%eax),%eax
 8ac682d:	8b 40 18             	mov    0x18(%eax),%eax
 8ac6830:	85 c0                	test   %eax,%eax
 8ac6832:	0f 94 c0             	sete   %al
 8ac6835:	84 c0                	test   %al,%al
 8ac6837:	74 65                	je     8ac689e <_ZN7PackSet5writeEPKcS1_j+0x7a4>
 8ac6839:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac683c:	89 04 24             	mov    %eax,(%esp)
 8ac683f:	e8 9c 1a 00 00       	call   8ac82e0 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEptEv>
 8ac6844:	8b 40 04             	mov    0x4(%eax),%eax
 8ac6847:	83 c0 04             	add    $0x4,%eax
 8ac684a:	89 04 24             	mov    %eax,(%esp)
 8ac684d:	e8 9e fc c3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac6852:	8b 15 c8 56 3f 09    	mov    0x93f56c8,%edx
 8ac6858:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac685c:	c7 44 24 04 d7 e8 e2 	movl   $0x8e2e8d7,0x4(%esp)
 8ac6863:	08 
 8ac6864:	89 14 24             	mov    %edx,(%esp)
 8ac6867:	e8 24 72 5b ff       	call   807da90 <fprintf@plt>
 8ac686c:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac6871:	c7 44 24 10 62 ea e2 	movl   $0x8e2ea62,0x10(%esp)
 8ac6878:	08 
 8ac6879:	c7 44 24 0c 60 05 00 	movl   $0x560,0xc(%esp)
 8ac6880:	00 
 8ac6881:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac6888:	08 
 8ac6889:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac6890:	08 
 8ac6891:	89 04 24             	mov    %eax,(%esp)
 8ac6894:	e8 f7 71 5b ff       	call   807da90 <fprintf@plt>
 8ac6899:	e9 89 00 00 00       	jmp    8ac6927 <_ZN7PackSet5writeEPKcS1_j+0x82d>
 8ac689e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac68a1:	89 04 24             	mov    %eax,(%esp)
 8ac68a4:	e8 37 1a 00 00       	call   8ac82e0 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEptEv>
 8ac68a9:	8b 40 04             	mov    0x4(%eax),%eax
 8ac68ac:	8b 58 0c             	mov    0xc(%eax),%ebx
 8ac68af:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac68b2:	89 04 24             	mov    %eax,(%esp)
 8ac68b5:	e8 26 1a 00 00       	call   8ac82e0 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEptEv>
 8ac68ba:	8b 40 04             	mov    0x4(%eax),%eax
 8ac68bd:	8b 40 18             	mov    0x18(%eax),%eax
 8ac68c0:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8ac68c3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ac68c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac68ce:	00 
 8ac68cf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ac68d3:	89 04 24             	mov    %eax,(%esp)
 8ac68d6:	e8 45 7a 5b ff       	call   807e320 <fwrite@plt>
 8ac68db:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac68de:	89 04 24             	mov    %eax,(%esp)
 8ac68e1:	e8 e4 19 00 00       	call   8ac82ca <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEppEv>
 8ac68e6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac68e9:	8d 55 bc             	lea    -0x44(%ebp),%edx
 8ac68ec:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac68f0:	89 04 24             	mov    %eax,(%esp)
 8ac68f3:	e8 0e 19 00 00       	call   8ac8206 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EE3endEv>
 8ac68f8:	83 ec 04             	sub    $0x4,%esp
 8ac68fb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8ac68fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac6902:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ac6905:	89 04 24             	mov    %eax,(%esp)
 8ac6908:	e8 90 19 00 00       	call   8ac829d <_ZN9__gnu_cxxneIPSt4pairImP10IndexEntryESt6vectorIS4_SaIS4_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 8ac690d:	84 c0                	test   %al,%al
 8ac690f:	0f 85 0a ff ff ff    	jne    8ac681f <_ZN7PackSet5writeEPKcS1_j+0x725>
 8ac6915:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6918:	89 04 24             	mov    %eax,(%esp)
 8ac691b:	e8 80 75 5b ff       	call   807dea0 <fclose@plt>
 8ac6920:	bb 00 00 00 00       	mov    $0x0,%ebx
 8ac6925:	eb 4a                	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac6927:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8ac692b:	74 0b                	je     8ac6938 <_ZN7PackSet5writeEPKcS1_j+0x83e>
 8ac692d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ac6930:	89 04 24             	mov    %eax,(%esp)
 8ac6933:	e8 68 75 5b ff       	call   807dea0 <fclose@plt>
 8ac6938:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ac693c:	74 11                	je     8ac694f <_ZN7PackSet5writeEPKcS1_j+0x855>
 8ac693e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ac6942:	74 0b                	je     8ac694f <_ZN7PackSet5writeEPKcS1_j+0x855>
 8ac6944:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ac6947:	89 04 24             	mov    %eax,(%esp)
 8ac694a:	e8 61 e2 c5 ff       	call   8724bb0 <_ZdaPv>
 8ac694f:	bb 01 00 00 00       	mov    $0x1,%ebx
 8ac6954:	eb 1b                	jmp    8ac6971 <_ZN7PackSet5writeEPKcS1_j+0x877>
 8ac6956:	89 d3                	mov    %edx,%ebx
 8ac6958:	89 c6                	mov    %eax,%esi
 8ac695a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac695d:	89 04 24             	mov    %eax,(%esp)
 8ac6960:	e8 93 17 00 00       	call   8ac80f8 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EED1Ev>
 8ac6965:	89 f0                	mov    %esi,%eax
 8ac6967:	89 da                	mov    %ebx,%edx
 8ac6969:	89 04 24             	mov    %eax,(%esp)
 8ac696c:	e8 df cd 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac6971:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ac6974:	89 04 24             	mov    %eax,(%esp)
 8ac6977:	e8 7c 17 00 00       	call   8ac80f8 <_ZNSt6vectorISt4pairImP10IndexEntryESaIS3_EED1Ev>
 8ac697c:	89 d8                	mov    %ebx,%eax
 8ac697e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ac6981:	83 c4 00             	add    $0x0,%esp
 8ac6984:	5b                   	pop    %ebx
 8ac6985:	5e                   	pop    %esi
 8ac6986:	5d                   	pop    %ebp
 8ac6987:	c3                   	ret

```

```c
// PackSet::write @ 0x8ac60fa

/* DWARF original prototype: pack_ret_t write(PackSet * this, NCHAR * name, NCHAR * tag, uint rev)
    */

pack_ret_t __thiscall PackSet::write(PackSet *this,NCHAR *name,NCHAR *tag,uint rev)

{
  size_t __size;
  bool bVar1;
  NCHAR *filename;
  pair<long_unsigned_int,_IndexEntry> *ppVar2;
  pair<long_unsigned_int,_IndexEntry*> *ppVar3;
  undefined4 uVar4;
  pack_ret_t pVar5;
  char *__rhs;
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  local_270;
  NCHAR local_264 [260];
  NCHAR local_160 [260];
  pair<long_unsigned_int,_IndexEntry*> local_5c;
  uint32 local_54;
  size_t local_50;
  size_t local_4c;
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  local_48;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
  local_3c;
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  local_38;
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  FILE *local_1c;
  uint local_18;
  size_t local_14;
  uchar *local_10;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: index_vector_it it@[???]
                       Unresolved local var: index_vector2_it it2@[???]
                       Unresolved local var: index_vector2_t write_indexes@[???]
                       Unresolved local var: int accum_offset@[???]
                       Unresolved local var: int aligned_index_header_size@[???]
                       Unresolved local var: int index_header_size@[???]
                       Unresolved local var: int index_size@[???]
                       Unresolved local var: int index_header_crc@[???]
                       Unresolved local var: uchar * index_header_data@[???] */
  local_1c = (FILE *)0x0;
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
  ::__normal_iterator(&local_38);
  __gnu_cxx::
  __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
  ::__normal_iterator(&local_3c);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  ::vector(&local_48);
  local_10 = (uchar *)0x0;
  if (this->type_ == PACK_LOAD_FULL) {
    bVar1 = is_dirty(this);
    if (bVar1) {
      pVar5 = sort(this);
      if (pVar5 == PACK_ERROR) {
        __rhs = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x4f0,"write");
        pVar5 = PACK_ERROR;
        goto LAB_08ac6971;
      }
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)&local_270);
    local_38._M_current =
         (pair<long_unsigned_int,_IndexEntry> *)
         local_270.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
             *)local_34);
      bVar1 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                        (&local_38,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          *)local_34);
      if (!bVar1) break;
                    /* Unresolved local var: index_pair2_t tmp@[???]
                       Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: NCHAR[260] file@[???] */
      std::pair<long_unsigned_int,_IndexEntry*>::pair(&local_5c);
      ppVar2 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_38);
      filename = (NCHAR *)std::string::c_str((string *)&(ppVar2->second).name_);
      pVar5 = _correct_filename(filename,local_160,0x104,local_264,0x104);
      if (pVar5 == PACK_ERROR) {
        __rhs = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x4ff,"write");
        goto LAB_08ac6927;
      }
      local_5c.first = _write_hash(local_160,local_264);
      ppVar2 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
               ::operator->(&local_38);
      local_5c.second = &ppVar2->second;
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
      ::push_back(&local_48,&local_5c);
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
      ::operator++(&local_38);
    }
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
    ::end((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
           *)(local_34 + 4));
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
    ::begin((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
             *)local_2c);
    std::
    sort<__gnu_cxx::__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>,_bool_(*)(const_PackSet::index_pair2_t&,_const_PackSet::index_pair2_t&)>
              ((__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                )local_2c._0_4_,
               (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                )local_34._4_4_,_index_less2);
    local_18 = 0;
    std::
    vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
    ::begin(&local_270);
    local_3c._M_current =
         local_270.
         super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
         ._M_impl._M_start;
    while( true ) {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
      ::end((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
             *)(local_2c + 4));
      bVar1 = __gnu_cxx::
              operator!=<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                        (&local_3c,
                         (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                          *)(local_2c + 4));
      if (!bVar1) break;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
               ::operator->(&local_3c);
      ppVar3->second->offset_ = local_18;
      ppVar3 = __gnu_cxx::
               __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
               ::operator->(&local_3c);
      local_18 = local_18 + ppVar3->second->aligned_size_;
      __gnu_cxx::
      __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
      ::operator++(&local_3c);
    }
    local_1c = fopen(TEMP_HEADER_FILENAME,"wb");
    if (local_1c == (FILE *)0x0) {
      fprintf(stdout,"_tfopen failed. %s",TEMP_HEADER_FILENAME);
      __rhs = "%s(%d) - %s\n";
      fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x514,"write");
LAB_08ac6927:
      if (local_1c != (FILE *)0x0) {
        fclose(local_1c);
      }
      if ((local_10 != (uchar *)0x0) && (local_10 != (uchar *)0x0)) {
        operator_delete__(local_10);
      }
      pVar5 = PACK_ERROR;
    }
    else {
      std::
      vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
      ::begin((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)&local_270);
      local_38._M_current =
           (pair<long_unsigned_int,_IndexEntry> *)
           local_270.
           super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
           ._M_impl._M_start;
      while( true ) {
        std::
        vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
        ::end((vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
               *)local_24);
        bVar1 = __gnu_cxx::
                operator!=<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                          (&local_38,
                           (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                            *)local_24);
        if (!bVar1) break;
        ppVar2 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_38);
        fwrite(ppVar2,4,1,local_1c);
        ppVar2 = __gnu_cxx::
                 __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
                 ::operator->(&local_38);
        pVar5 = IndexEntry::write_info(&ppVar2->second,(FILE *)local_1c);
        if (pVar5 == PACK_ERROR) {
          __rhs = "%s(%d) - %s\n";
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x51c,"write");
          goto LAB_08ac6927;
        }
        __gnu_cxx::
        __normal_iterator<std::pair<long_unsigned_int,_IndexEntry>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>_>
        ::operator++(&local_38);
      }
      fclose(local_1c);
      local_1c = fopen(TEMP_HEADER_FILENAME,"rb");
      if (local_1c == (FILE *)0x0) {
        fprintf(stdout,"_tfopen failed. %s",name);
        __rhs = "%s(%d) - %s\n";
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x526,"write");
        pVar5 = PACK_ERROR;
      }
      else {
        __rhs = (char *)0x0;
        fseek(local_1c,0,2);
        local_14 = ftell(local_1c);
        if ((int)local_14 < 0) {
          pVar5 = PACK_ERROR;
        }
        else {
          fseek(local_1c,0,0);
          local_4c = local_14 + 3 & 0xfffffffc;
          local_10 = operator_new__(local_4c);
          memset(local_10,0,local_4c);
          fread(local_10,local_14,1,local_1c);
          fclose(local_1c);
          local_50 = std::
                     vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
                     ::size(&this->indexes_);
          local_54 = Crc32::crc32(local_50,(char *)local_10,local_4c);
          _encrypt(local_54,local_10,local_4c);
          local_1c = fopen(name,"wb");
          if (local_1c == (FILE *)0x0) {
            if (local_10 != (uchar *)0x0) {
              operator_delete__(local_10);
            }
            fprintf(stdout,"_tfopen failed. %s",name);
            __rhs = "%s(%d) - %s\n";
            fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x551,"write");
            pVar5 = PACK_ERROR;
          }
          else {
            _fwrite_str(tag,(FILE *)local_1c);
            fwrite(&rev,4,1,local_1c);
            fwrite(&local_4c,4,1,local_1c);
            fwrite(&local_54,4,1,local_1c);
            fwrite(&local_50,4,1,local_1c);
            fwrite(local_10,local_4c,1,local_1c);
            std::
            vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
            ::begin(&local_270);
            local_3c._M_current =
                 local_270.
                 super__Vector_base<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
                 ._M_impl._M_start;
            while( true ) {
              std::
              vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
              ::end((vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
                     *)(local_24 + 4));
              __rhs = local_24 + 4;
              bVar1 = __gnu_cxx::
                      operator!=<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                                (&local_3c,
                                 (__normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                                  *)__rhs);
              if (!bVar1) break;
              ppVar3 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                       ::operator->(&local_3c);
              if (ppVar3->second->content_ == (uchar *)0x0) {
                ppVar3 = __gnu_cxx::
                         __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                         ::operator->(&local_3c);
                uVar4 = std::string::c_str((string *)&ppVar3->second->name_);
                fprintf(stdout,"content is NULL. %s",uVar4);
                __rhs = "%s(%d) - %s\n";
                fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x560,"write");
                goto LAB_08ac6927;
              }
              ppVar3 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                       ::operator->(&local_3c);
              __size = ppVar3->second->aligned_size_;
              ppVar3 = __gnu_cxx::
                       __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
                       ::operator->(&local_3c);
              fwrite(ppVar3->second->content_,__size,1,local_1c);
              __gnu_cxx::
              __normal_iterator<std::pair<long_unsigned_int,_IndexEntry*>*,_std::vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>_>
              ::operator++(&local_3c);
            }
            fclose(local_1c);
            pVar5 = PACK_OK;
          }
        }
      }
    }
  }
  else {
                    /* try { // try from 08ac6156 to 08ac6937 has its CatchHandler @ 08ac6956 */
    fprintf(stdout,"%s\n","PACK_LOAD_FULL needed");
    __rhs = "%s(%d) - %s\n";
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x4e8,"write");
    pVar5 = PACK_ERROR;
  }
LAB_08ac6971:
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry*>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry*>_>_>
  ::~vector(&local_48,(int)__rhs);
  return pVar5;
}

```

---

## ~PackSet

```asm
// === 08ac4862 PackSet::~PackSet  [0x08ac4862-0x8ac48d1] ===
 8ac4862:	55                   	push   %ebp
 8ac4863:	89 e5                	mov    %esp,%ebp
 8ac4865:	56                   	push   %esi
 8ac4866:	53                   	push   %ebx
 8ac4867:	83 ec 10             	sub    $0x10,%esp
 8ac486a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac486d:	89 04 24             	mov    %eax,(%esp)
 8ac4870:	e8 65 01 00 00       	call   8ac49da <_ZN7PackSet5closeEv>
 8ac4875:	eb 18                	jmp    8ac488f <_ZN7PackSetD1Ev+0x2d>
 8ac4877:	89 d3                	mov    %edx,%ebx
 8ac4879:	89 c6                	mov    %eax,%esi
 8ac487b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac487e:	83 c0 1c             	add    $0x1c,%eax
 8ac4881:	89 04 24             	mov    %eax,(%esp)
 8ac4884:	e8 6b 30 00 00       	call   8ac78f4 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EED1Ev>
 8ac4889:	89 f0                	mov    %esi,%eax
 8ac488b:	89 da                	mov    %ebx,%edx
 8ac488d:	eb 10                	jmp    8ac489f <_ZN7PackSetD1Ev+0x3d>
 8ac488f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4892:	83 c0 1c             	add    $0x1c,%eax
 8ac4895:	89 04 24             	mov    %eax,(%esp)
 8ac4898:	e8 57 30 00 00       	call   8ac78f4 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EED1Ev>
 8ac489d:	eb 1e                	jmp    8ac48bd <_ZN7PackSetD1Ev+0x5b>
 8ac489f:	89 d3                	mov    %edx,%ebx
 8ac48a1:	89 c6                	mov    %eax,%esi
 8ac48a3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac48a6:	83 c0 10             	add    $0x10,%eax
 8ac48a9:	89 04 24             	mov    %eax,(%esp)
 8ac48ac:	e8 43 30 00 00       	call   8ac78f4 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EED1Ev>
 8ac48b1:	89 f0                	mov    %esi,%eax
 8ac48b3:	89 da                	mov    %ebx,%edx
 8ac48b5:	89 04 24             	mov    %eax,(%esp)
 8ac48b8:	e8 93 ee 01 00       	call   8ae3750 <_Unwind_Resume>
 8ac48bd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac48c0:	83 c0 10             	add    $0x10,%eax
 8ac48c3:	89 04 24             	mov    %eax,(%esp)
 8ac48c6:	e8 29 30 00 00       	call   8ac78f4 <_ZNSt6vectorISt4pairIm10IndexEntryESaIS2_EED1Ev>
 8ac48cb:	83 c4 10             	add    $0x10,%esp
 8ac48ce:	5b                   	pop    %ebx
 8ac48cf:	5e                   	pop    %esi
 8ac48d0:	5d                   	pop    %ebp
 8ac48d1:	c3                   	ret

```

```c
// PackSet::~PackSet @ 0x8ac4862

/* DWARF original prototype: void ~PackSet(PackSet * this, int __in_chrg) */

void __thiscall PackSet::~PackSet(PackSet *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
                    /* try { // try from 08ac4870 to 08ac4874 has its CatchHandler @ 08ac4877 */
  close(this);
                    /* try { // try from 08ac4898 to 08ac489c has its CatchHandler @ 08ac489f */
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::~vector(&this->addeds_,in_stack_ffffffe8);
  std::
  vector<std::pair<long_unsigned_int,_IndexEntry>,_std::allocator<std::pair<long_unsigned_int,_IndexEntry>_>_>
  ::~vector(&this->indexes_,in_stack_ffffffe8);
  return;
}

```

