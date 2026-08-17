# CSharedServerMessageManager__CSharedServerMessageAdapter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetMappedEventID

```asm
// === 08601640 CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID  [0x08601640-0x86016ff] ===
 8601640:	55                   	push   %ebp
 8601641:	89 e5                	mov    %esp,%ebp
 8601643:	83 ec 38             	sub    $0x38,%esp
 8601646:	8b 45 08             	mov    0x8(%ebp),%eax
 8601649:	8b 00                	mov    (%eax),%eax
 860164b:	8d 50 0c             	lea    0xc(%eax),%edx
 860164e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8601651:	89 54 24 04          	mov    %edx,0x4(%esp)
 8601655:	89 04 24             	mov    %eax,(%esp)
 8601658:	e8 55 bf ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 860165d:	83 ec 04             	sub    $0x4,%esp
 8601660:	eb 62                	jmp    86016c4 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi+0x84>
 8601662:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8601665:	89 04 24             	mov    %eax,(%esp)
 8601668:	e8 8f bf ad ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 860166d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8601670:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8601674:	75 1f                	jne    8601695 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi+0x55>
 8601676:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8601679:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8601680:	00 
 8601681:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8601684:	89 54 24 04          	mov    %edx,0x4(%esp)
 8601688:	89 04 24             	mov    %eax,(%esp)
 860168b:	e8 0c 77 d8 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8601690:	83 ec 04             	sub    $0x4,%esp
 8601693:	eb 2f                	jmp    86016c4 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi+0x84>
 8601695:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601698:	8b 00                	mov    (%eax),%eax
 860169a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 860169d:	75 08                	jne    86016a7 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi+0x67>
 860169f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86016a2:	8b 40 04             	mov    0x4(%eax),%eax
 86016a5:	eb 56                	jmp    86016fd <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi+0xbd>
 86016a7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86016aa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86016b1:	00 
 86016b2:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 86016b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86016b9:	89 04 24             	mov    %eax,(%esp)
 86016bc:	e8 db 76 d8 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 86016c1:	83 ec 04             	sub    $0x4,%esp
 86016c4:	8b 45 08             	mov    0x8(%ebp),%eax
 86016c7:	8b 00                	mov    (%eax),%eax
 86016c9:	8d 50 0c             	lea    0xc(%eax),%edx
 86016cc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86016cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 86016d3:	89 04 24             	mov    %eax,(%esp)
 86016d6:	e8 fb be ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 86016db:	83 ec 04             	sub    $0x4,%esp
 86016de:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86016e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86016e5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86016e8:	89 04 24             	mov    %eax,(%esp)
 86016eb:	e8 ee fa b0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 86016f0:	84 c0                	test   %al,%al
 86016f2:	0f 85 6a ff ff ff    	jne    8601662 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi+0x22>
 86016f8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86016fd:	c9                   	leave
 86016fe:	c3                   	ret
 86016ff:	90                   	nop

```

```c
// CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID @ 0x8601640

/* CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID(int) */

int __thiscall
CSharedServerMessageManager::CSharedServerMessageAdapter::GetMappedEventID
          (CSharedServerMessageAdapter *this,int param_1)

{
  bool bVar1;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_14 [4];
  int *local_10;
  
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
  while( true ) {
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) {
        return -1;
      }
      local_10 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_20);
      if (local_10 != (int *)0x0) break;
      __gnu_cxx::
      __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
      ::operator++(local_18,(int)local_20);
    }
    if (*local_10 == param_1) break;
    __gnu_cxx::
    __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
    ::operator++(local_14,(int)local_20);
  }
  return local_10[1];
}

```

---

## GetShareKindWithIndex

```asm
// === 08601794 CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex  [0x08601794-0x8601877] ===
 8601794:	55                   	push   %ebp
 8601795:	89 e5                	mov    %esp,%ebp
 8601797:	83 ec 38             	sub    $0x38,%esp
 860179a:	8b 45 0c             	mov    0xc(%ebp),%eax
 860179d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86017a1:	8b 45 08             	mov    0x8(%ebp),%eax
 86017a4:	89 04 24             	mov    %eax,(%esp)
 86017a7:	e8 94 fe ff ff       	call   8601640 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter16GetMappedEventIDEi>
 86017ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86017af:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 86017b3:	75 0a                	jne    86017bf <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0x2b>
 86017b5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86017ba:	e9 b7 00 00 00       	jmp    8601876 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0xe2>
 86017bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86017c2:	8b 00                	mov    (%eax),%eax
 86017c4:	8d 50 18             	lea    0x18(%eax),%edx
 86017c7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86017ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 86017ce:	89 04 24             	mov    %eax,(%esp)
 86017d1:	e8 dc bd ad ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 86017d6:	83 ec 04             	sub    $0x4,%esp
 86017d9:	eb 62                	jmp    860183d <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0xa9>
 86017db:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86017de:	89 04 24             	mov    %eax,(%esp)
 86017e1:	e8 16 be ad ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 86017e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86017e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86017ed:	75 1f                	jne    860180e <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0x7a>
 86017ef:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86017f2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86017f9:	00 
 86017fa:	8d 55 e0             	lea    -0x20(%ebp),%edx
 86017fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8601801:	89 04 24             	mov    %eax,(%esp)
 8601804:	e8 93 75 d8 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 8601809:	83 ec 04             	sub    $0x4,%esp
 860180c:	eb 2f                	jmp    860183d <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0xa9>
 860180e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601811:	8b 00                	mov    (%eax),%eax
 8601813:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8601816:	75 08                	jne    8601820 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0x8c>
 8601818:	8b 45 f4             	mov    -0xc(%ebp),%eax
 860181b:	8b 40 04             	mov    0x4(%eax),%eax
 860181e:	eb 56                	jmp    8601876 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0xe2>
 8601820:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8601823:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860182a:	00 
 860182b:	8d 55 e0             	lea    -0x20(%ebp),%edx
 860182e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8601832:	89 04 24             	mov    %eax,(%esp)
 8601835:	e8 62 75 d8 ff       	call   8388d9c <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEi>
 860183a:	83 ec 04             	sub    $0x4,%esp
 860183d:	8b 45 08             	mov    0x8(%ebp),%eax
 8601840:	8b 00                	mov    (%eax),%eax
 8601842:	8d 50 18             	lea    0x18(%eax),%edx
 8601845:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8601848:	89 54 24 04          	mov    %edx,0x4(%esp)
 860184c:	89 04 24             	mov    %eax,(%esp)
 860184f:	e8 82 bd ad ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8601854:	83 ec 04             	sub    $0x4,%esp
 8601857:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 860185a:	89 44 24 04          	mov    %eax,0x4(%esp)
 860185e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8601861:	89 04 24             	mov    %eax,(%esp)
 8601864:	e8 75 f9 b0 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8601869:	84 c0                	test   %al,%al
 860186b:	0f 85 6a ff ff ff    	jne    86017db <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter21GetShareKindWithIndexEi+0x47>
 8601871:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8601876:	c9                   	leave
 8601877:	c3                   	ret

```

```c
// CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex @ 0x8601794

/* CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex(int) */

int __thiscall
CSharedServerMessageManager::CSharedServerMessageAdapter::GetShareKindWithIndex
          (CSharedServerMessageAdapter *this,int param_1)

{
  bool bVar1;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_1c [4];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_18 [4];
  int local_14;
  int *local_10;
  
  local_14 = GetMappedEventID(this,param_1);
  if (local_14 != -1) {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
    while( true ) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
      bVar1 = __gnu_cxx::operator!=(local_24,local_20);
      if (!bVar1) break;
      local_10 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_24);
      if (local_10 == (int *)0x0) {
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_1c,(int)local_24);
      }
      else {
        if (*local_10 == local_14) {
          return local_10[1];
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_18,(int)local_24);
      }
    }
  }
  return -1;
}

```

---

## IsOnIndex

```asm
// === 08601700 CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex  [0x08601700-0x8601793] ===
 8601700:	55                   	push   %ebp
 8601701:	89 e5                	mov    %esp,%ebp
 8601703:	83 ec 28             	sub    $0x28,%esp
 8601706:	8b 45 08             	mov    0x8(%ebp),%eax
 8601709:	8b 00                	mov    (%eax),%eax
 860170b:	89 c2                	mov    %eax,%edx
 860170d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8601710:	89 54 24 04          	mov    %edx,0x4(%esp)
 8601714:	89 04 24             	mov    %eax,(%esp)
 8601717:	e8 2c cb a8 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 860171c:	83 ec 04             	sub    $0x4,%esp
 860171f:	eb 3c                	jmp    860175d <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi+0x5d>
 8601721:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8601724:	89 04 24             	mov    %eax,(%esp)
 8601727:	e8 a0 d0 a8 ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 860172c:	8b 00                	mov    (%eax),%eax
 860172e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8601731:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8601734:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8601737:	75 07                	jne    8601740 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi+0x40>
 8601739:	b8 01 00 00 00       	mov    $0x1,%eax
 860173e:	eb 51                	jmp    8601791 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi+0x91>
 8601740:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8601743:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 860174a:	00 
 860174b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 860174e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8601752:	89 04 24             	mov    %eax,(%esp)
 8601755:	e8 ac 01 d4 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 860175a:	83 ec 04             	sub    $0x4,%esp
 860175d:	8b 45 08             	mov    0x8(%ebp),%eax
 8601760:	8b 00                	mov    (%eax),%eax
 8601762:	89 c2                	mov    %eax,%edx
 8601764:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8601767:	89 54 24 04          	mov    %edx,0x4(%esp)
 860176b:	89 04 24             	mov    %eax,(%esp)
 860176e:	e8 f9 ca a8 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 8601773:	83 ec 04             	sub    $0x4,%esp
 8601776:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8601779:	89 44 24 04          	mov    %eax,0x4(%esp)
 860177d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8601780:	89 04 24             	mov    %eax,(%esp)
 8601783:	e8 da 8c ae ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 8601788:	84 c0                	test   %al,%al
 860178a:	75 95                	jne    8601721 <_ZN27CSharedServerMessageManager27CSharedServerMessageAdapter9IsOnIndexEi+0x21>
 860178c:	b8 00 00 00 00       	mov    $0x0,%eax
 8601791:	c9                   	leave
 8601792:	c3                   	ret
 8601793:	90                   	nop

```

```c
// CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex @ 0x8601700

/* CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex(int) */

undefined4 __thiscall
CSharedServerMessageManager::CSharedServerMessageAdapter::IsOnIndex
          (CSharedServerMessageAdapter *this,int param_1)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_14 [4];
  int local_10;
  
  std::vector<int,std::allocator<int>>::begin();
  while( true ) {
    std::vector<int,std::allocator<int>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                    operator*(local_1c);
    local_10 = *piVar2;
    if (local_10 == param_1) break;
    __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
              (local_14,(int)local_1c);
  }
  return 1;
}

```

