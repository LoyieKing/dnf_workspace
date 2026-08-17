# stQuestShopStatus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getMaxCount

```asm
// === 0890f8ec stQuestShopStatus::getMaxCount  [0x0890f8ec-0x890f993] ===
 890f8ec:	55                   	push   %ebp
 890f8ed:	89 e5                	mov    %esp,%ebp
 890f8ef:	83 ec 28             	sub    $0x28,%esp
 890f8f2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 890f8f9:	8b 45 08             	mov    0x8(%ebp),%eax
 890f8fc:	8d 50 24             	lea    0x24(%eax),%edx
 890f8ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f902:	89 54 24 04          	mov    %edx,0x4(%esp)
 890f906:	89 04 24             	mov    %eax,(%esp)
 890f909:	e8 7c 0d 01 00       	call   892068a <_ZNSt6vectorI17stStatusLevelInfoSaIS0_EE5beginEv>
 890f90e:	83 ec 04             	sub    $0x4,%esp
 890f911:	eb 4d                	jmp    890f960 <_ZN17stQuestShopStatus11getMaxCountEi+0x74>
 890f913:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f916:	89 04 24             	mov    %eax,(%esp)
 890f919:	e8 16 0e 01 00       	call   8920734 <_ZNK9__gnu_cxx17__normal_iteratorIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEptEv>
 890f91e:	0f b6 00             	movzbl (%eax),%eax
 890f921:	0f b6 c0             	movzbl %al,%eax
 890f924:	3b 45 0c             	cmp    0xc(%ebp),%eax
 890f927:	0f 9e c0             	setle  %al
 890f92a:	84 c0                	test   %al,%al
 890f92c:	74 15                	je     890f943 <_ZN17stQuestShopStatus11getMaxCountEi+0x57>
 890f92e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f931:	89 04 24             	mov    %eax,(%esp)
 890f934:	e8 fb 0d 01 00       	call   8920734 <_ZNK9__gnu_cxx17__normal_iteratorIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEptEv>
 890f939:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 890f93d:	0f b6 c0             	movzbl %al,%eax
 890f940:	01 45 f4             	add    %eax,-0xc(%ebp)
 890f943:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890f946:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 890f94d:	00 
 890f94e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 890f951:	89 54 24 04          	mov    %edx,0x4(%esp)
 890f955:	89 04 24             	mov    %eax,(%esp)
 890f958:	e8 a3 0d 01 00       	call   8920700 <_ZN9__gnu_cxx17__normal_iteratorIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEppEi>
 890f95d:	83 ec 04             	sub    $0x4,%esp
 890f960:	8b 45 08             	mov    0x8(%ebp),%eax
 890f963:	8d 50 24             	lea    0x24(%eax),%edx
 890f966:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890f969:	89 54 24 04          	mov    %edx,0x4(%esp)
 890f96d:	89 04 24             	mov    %eax,(%esp)
 890f970:	e8 39 0d 01 00       	call   89206ae <_ZNSt6vectorI17stStatusLevelInfoSaIS0_EE3endEv>
 890f975:	83 ec 04             	sub    $0x4,%esp
 890f978:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890f97b:	89 44 24 04          	mov    %eax,0x4(%esp)
 890f97f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f982:	89 04 24             	mov    %eax,(%esp)
 890f985:	e8 4a 0d 01 00       	call   89206d4 <_ZN9__gnu_cxxneIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 890f98a:	84 c0                	test   %al,%al
 890f98c:	75 85                	jne    890f913 <_ZN17stQuestShopStatus11getMaxCountEi+0x27>
 890f98e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 890f991:	c9                   	leave
 890f992:	c3                   	ret
 890f993:	90                   	nop

```

```c
// stQuestShopStatus::getMaxCount @ 0x890f8ec

/* stQuestShopStatus::getMaxCount(int) */

int __thiscall stQuestShopStatus::getMaxCount(stQuestShopStatus *this,int param_1)

{
  bool bVar1;
  byte *pbVar2;
  int iVar3;
  __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>::begin();
  while( true ) {
    std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) break;
    pbVar2 = (byte *)__gnu_cxx::
                     __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
                     ::operator->(local_1c);
    if ((int)(uint)*pbVar2 <= param_1) {
      iVar3 = __gnu_cxx::
              __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
              ::operator->(local_1c);
      local_10 = local_10 + (uint)*(byte *)(iVar3 + 1);
    }
    __gnu_cxx::
    __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}

```

---

## getNextLevel

```asm
// === 0890f994 stQuestShopStatus::getNextLevel  [0x0890f994-0x890fa3c] ===
 890f994:	55                   	push   %ebp
 890f995:	89 e5                	mov    %esp,%ebp
 890f997:	83 ec 28             	sub    $0x28,%esp
 890f99a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 890f9a1:	8b 45 08             	mov    0x8(%ebp),%eax
 890f9a4:	8d 50 24             	lea    0x24(%eax),%edx
 890f9a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f9aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 890f9ae:	89 04 24             	mov    %eax,(%esp)
 890f9b1:	e8 d4 0c 01 00       	call   892068a <_ZNSt6vectorI17stStatusLevelInfoSaIS0_EE5beginEv>
 890f9b6:	83 ec 04             	sub    $0x4,%esp
 890f9b9:	eb 4d                	jmp    890fa08 <_ZN17stQuestShopStatus12getNextLevelEi+0x74>
 890f9bb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f9be:	89 04 24             	mov    %eax,(%esp)
 890f9c1:	e8 6e 0d 01 00       	call   8920734 <_ZNK9__gnu_cxx17__normal_iteratorIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEptEv>
 890f9c6:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 890f9ca:	0f b6 c0             	movzbl %al,%eax
 890f9cd:	01 45 f4             	add    %eax,-0xc(%ebp)
 890f9d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 890f9d3:	3b 45 0c             	cmp    0xc(%ebp),%eax
 890f9d6:	7e 13                	jle    890f9eb <_ZN17stQuestShopStatus12getNextLevelEi+0x57>
 890f9d8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890f9db:	89 04 24             	mov    %eax,(%esp)
 890f9de:	e8 51 0d 01 00       	call   8920734 <_ZNK9__gnu_cxx17__normal_iteratorIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEptEv>
 890f9e3:	0f b6 00             	movzbl (%eax),%eax
 890f9e6:	0f b6 c0             	movzbl %al,%eax
 890f9e9:	eb 50                	jmp    890fa3b <_ZN17stQuestShopStatus12getNextLevelEi+0xa7>
 890f9eb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890f9ee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 890f9f5:	00 
 890f9f6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 890f9f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 890f9fd:	89 04 24             	mov    %eax,(%esp)
 890fa00:	e8 fb 0c 01 00       	call   8920700 <_ZN9__gnu_cxx17__normal_iteratorIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEppEi>
 890fa05:	83 ec 04             	sub    $0x4,%esp
 890fa08:	8b 45 08             	mov    0x8(%ebp),%eax
 890fa0b:	8d 50 24             	lea    0x24(%eax),%edx
 890fa0e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890fa11:	89 54 24 04          	mov    %edx,0x4(%esp)
 890fa15:	89 04 24             	mov    %eax,(%esp)
 890fa18:	e8 91 0c 01 00       	call   89206ae <_ZNSt6vectorI17stStatusLevelInfoSaIS0_EE3endEv>
 890fa1d:	83 ec 04             	sub    $0x4,%esp
 890fa20:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890fa23:	89 44 24 04          	mov    %eax,0x4(%esp)
 890fa27:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890fa2a:	89 04 24             	mov    %eax,(%esp)
 890fa2d:	e8 a2 0c 01 00       	call   89206d4 <_ZN9__gnu_cxxneIP17stStatusLevelInfoSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 890fa32:	84 c0                	test   %al,%al
 890fa34:	75 85                	jne    890f9bb <_ZN17stQuestShopStatus12getNextLevelEi+0x27>
 890fa36:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 890fa3b:	c9                   	leave
 890fa3c:	c3                   	ret

```

```c
// stQuestShopStatus::getNextLevel @ 0x890f994

/* stQuestShopStatus::getNextLevel(int) */

uint __thiscall stQuestShopStatus::getNextLevel(stQuestShopStatus *this,int param_1)

{
  bool bVar1;
  int iVar2;
  byte *pbVar3;
  __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>::begin();
  while( true ) {
    std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return 0xffffffff;
    }
    iVar2 = __gnu_cxx::
            __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
            ::operator->(local_1c);
    local_10 = local_10 + (uint)*(byte *)(iVar2 + 1);
    if (param_1 < local_10) break;
    __gnu_cxx::
    __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
    ::operator++(local_14,(int)local_1c);
  }
  pbVar3 = (byte *)__gnu_cxx::
                   __normal_iterator<stStatusLevelInfo*,std::vector<stStatusLevelInfo,std::allocator<stStatusLevelInfo>>>
                   ::operator->(local_1c);
  return (uint)*pbVar3;
}

```

