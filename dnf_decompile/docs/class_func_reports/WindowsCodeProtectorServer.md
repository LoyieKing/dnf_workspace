# WindowsCodeProtectorServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## BeginLoading

```asm
// === 08575700 WindowsCodeProtectorServer::BeginLoading  [0x08575700-0x8575711] ===
 8575700:	55                   	push   %ebp
 8575701:	89 e5                	mov    %esp,%ebp
 8575703:	8b 45 08             	mov    0x8(%ebp),%eax
 8575706:	c6 40 1c 00          	movb   $0x0,0x1c(%eax)
 857570a:	b8 01 00 00 00       	mov    $0x1,%eax
 857570f:	5d                   	pop    %ebp
 8575710:	c3                   	ret
 8575711:	90                   	nop

```

```c
// WindowsCodeProtectorServer::BeginLoading @ 0x8575700

/* WindowsCodeProtectorServer::BeginLoading() */

undefined4 __thiscall WindowsCodeProtectorServer::BeginLoading(WindowsCodeProtectorServer *this)

{
  this[0x1c] = (WindowsCodeProtectorServer)0x0;
  return 1;
}

```

---

## CompleteLoading

```asm
// === 0857592c WindowsCodeProtectorServer::CompleteLoading  [0x0857592c-0x857596f] ===
 857592c:	55                   	push   %ebp
 857592d:	89 e5                	mov    %esp,%ebp
 857592f:	83 ec 18             	sub    $0x18,%esp
 8575932:	8b 45 08             	mov    0x8(%ebp),%eax
 8575935:	8b 00                	mov    (%eax),%eax
 8575937:	85 c0                	test   %eax,%eax
 8575939:	74 26                	je     8575961 <_ZN26WindowsCodeProtectorServer15CompleteLoadingEv+0x35>
 857593b:	8b 45 08             	mov    0x8(%ebp),%eax
 857593e:	8b 00                	mov    (%eax),%eax
 8575940:	89 04 24             	mov    %eax,(%esp)
 8575943:	e8 ee ed ff ff       	call   8574736 <_ZN20WindowsExeFileFamily30CompleteLoadingWindowsExeFilesEv>
 8575948:	84 c0                	test   %al,%al
 857594a:	74 0e                	je     857595a <_ZN26WindowsCodeProtectorServer15CompleteLoadingEv+0x2e>
 857594c:	8b 45 08             	mov    0x8(%ebp),%eax
 857594f:	c6 40 1c 01          	movb   $0x1,0x1c(%eax)
 8575953:	b8 01 00 00 00       	mov    $0x1,%eax
 8575958:	eb 13                	jmp    857596d <_ZN26WindowsCodeProtectorServer15CompleteLoadingEv+0x41>
 857595a:	b8 00 00 00 00       	mov    $0x0,%eax
 857595f:	eb 0c                	jmp    857596d <_ZN26WindowsCodeProtectorServer15CompleteLoadingEv+0x41>
 8575961:	8b 45 08             	mov    0x8(%ebp),%eax
 8575964:	c6 40 1c 01          	movb   $0x1,0x1c(%eax)
 8575968:	b8 01 00 00 00       	mov    $0x1,%eax
 857596d:	c9                   	leave
 857596e:	c3                   	ret
 857596f:	90                   	nop

```

```c
// WindowsCodeProtectorServer::CompleteLoading @ 0x857592c

/* WindowsCodeProtectorServer::CompleteLoading() */

undefined4 __thiscall WindowsCodeProtectorServer::CompleteLoading(WindowsCodeProtectorServer *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)this == 0) {
    this[0x1c] = (WindowsCodeProtectorServer)0x1;
    uVar2 = 1;
  }
  else {
    cVar1 = WindowsExeFileFamily::CompleteLoadingWindowsExeFiles(*(WindowsExeFileFamily **)this);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      this[0x1c] = (WindowsCodeProtectorServer)0x1;
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## Destroy

```asm
// === 08575500 WindowsCodeProtectorServer::Destroy  [0x08575500-0x85755f5] ===
 8575500:	55                   	push   %ebp
 8575501:	89 e5                	mov    %esp,%ebp
 8575503:	53                   	push   %ebx
 8575504:	83 ec 34             	sub    $0x34,%esp
 8575507:	8b 45 08             	mov    0x8(%ebp),%eax
 857550a:	8b 00                	mov    (%eax),%eax
 857550c:	85 c0                	test   %eax,%eax
 857550e:	74 22                	je     8575532 <_ZN26WindowsCodeProtectorServer7DestroyEv+0x32>
 8575510:	8b 45 08             	mov    0x8(%ebp),%eax
 8575513:	8b 18                	mov    (%eax),%ebx
 8575515:	85 db                	test   %ebx,%ebx
 8575517:	74 10                	je     8575529 <_ZN26WindowsCodeProtectorServer7DestroyEv+0x29>
 8575519:	89 1c 24             	mov    %ebx,(%esp)
 857551c:	e8 df ef ff ff       	call   8574500 <_ZN20WindowsExeFileFamilyD1Ev>
 8575521:	89 1c 24             	mov    %ebx,(%esp)
 8575524:	e8 c7 ef 1a 00       	call   87244f0 <_ZdlPv>
 8575529:	8b 45 08             	mov    0x8(%ebp),%eax
 857552c:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8575532:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8575535:	89 04 24             	mov    %eax,(%esp)
 8575538:	e8 63 18 00 00       	call   8576da0 <_ZN9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEC1Ev>
 857553d:	8b 45 08             	mov    0x8(%ebp),%eax
 8575540:	8d 50 04             	lea    0x4(%eax),%edx
 8575543:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8575546:	89 54 24 04          	mov    %edx,0x4(%esp)
 857554a:	89 04 24             	mov    %eax,(%esp)
 857554d:	e8 5c 18 00 00       	call   8576dae <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EE5beginEv>
 8575552:	83 ec 04             	sub    $0x4,%esp
 8575555:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8575558:	89 45 f0             	mov    %eax,-0x10(%ebp)
 857555b:	eb 53                	jmp    85755b0 <_ZN26WindowsCodeProtectorServer7DestroyEv+0xb0>
 857555d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8575560:	89 04 24             	mov    %eax,(%esp)
 8575563:	e8 d2 18 00 00       	call   8576e3a <_ZNK9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEdeEv>
 8575568:	8b 00                	mov    (%eax),%eax
 857556a:	85 c0                	test   %eax,%eax
 857556c:	0f 95 c0             	setne  %al
 857556f:	84 c0                	test   %al,%al
 8575571:	74 32                	je     85755a5 <_ZN26WindowsCodeProtectorServer7DestroyEv+0xa5>
 8575573:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8575576:	89 04 24             	mov    %eax,(%esp)
 8575579:	e8 bc 18 00 00       	call   8576e3a <_ZNK9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEdeEv>
 857557e:	8b 18                	mov    (%eax),%ebx
 8575580:	85 db                	test   %ebx,%ebx
 8575582:	74 10                	je     8575594 <_ZN26WindowsCodeProtectorServer7DestroyEv+0x94>
 8575584:	89 1c 24             	mov    %ebx,(%esp)
 8575587:	e8 f0 f9 ff ff       	call   8574f7c <_ZN21WindowsDataFileFamilyD1Ev>
 857558c:	89 1c 24             	mov    %ebx,(%esp)
 857558f:	e8 5c ef 1a 00       	call   87244f0 <_ZdlPv>
 8575594:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8575597:	89 04 24             	mov    %eax,(%esp)
 857559a:	e8 9b 18 00 00       	call   8576e3a <_ZNK9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEdeEv>
 857559f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85755a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85755a8:	89 04 24             	mov    %eax,(%esp)
 85755ab:	e8 74 18 00 00       	call   8576e24 <_ZN9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEppEv>
 85755b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85755b3:	8d 50 04             	lea    0x4(%eax),%edx
 85755b6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85755b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85755bd:	89 04 24             	mov    %eax,(%esp)
 85755c0:	e8 0d 18 00 00       	call   8576dd2 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EE3endEv>
 85755c5:	83 ec 04             	sub    $0x4,%esp
 85755c8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85755cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85755cf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85755d2:	89 04 24             	mov    %eax,(%esp)
 85755d5:	e8 1e 18 00 00       	call   8576df8 <_ZN9__gnu_cxxneIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85755da:	84 c0                	test   %al,%al
 85755dc:	0f 85 7b ff ff ff    	jne    857555d <_ZN26WindowsCodeProtectorServer7DestroyEv+0x5d>
 85755e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85755e5:	83 c0 04             	add    $0x4,%eax
 85755e8:	89 04 24             	mov    %eax,(%esp)
 85755eb:	e8 54 18 00 00       	call   8576e44 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EE5clearEv>
 85755f0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85755f3:	c9                   	leave
 85755f4:	c3                   	ret
 85755f5:	90                   	nop

```

```c
// WindowsCodeProtectorServer::Destroy @ 0x8575500

/* WindowsCodeProtectorServer::Destroy() */

void __thiscall WindowsCodeProtectorServer::Destroy(WindowsCodeProtectorServer *this)

{
  WindowsExeFileFamily *this_00;
  WindowsDataFileFamily *this_01;
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  local_14 [4];
  __normal_iterator local_10 [8];
  
  if (*(int *)this != 0) {
    this_00 = *(WindowsExeFileFamily **)this;
    if (this_00 != (WindowsExeFileFamily *)0x0) {
      WindowsExeFileFamily::~WindowsExeFileFamily(this_00);
      operator_delete(this_00);
    }
    *(undefined4 *)this = 0;
  }
  __gnu_cxx::
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  ::__normal_iterator(local_14);
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::begin();
  while( true ) {
    std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
                    ::operator*(local_14);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
               ::operator*(local_14);
      this_01 = (WindowsDataFileFamily *)*puVar3;
      if (this_01 != (WindowsDataFileFamily *)0x0) {
        WindowsDataFileFamily::~WindowsDataFileFamily(this_01);
        operator_delete(this_01);
      }
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
               ::operator*(local_14);
      *puVar3 = 0;
    }
    __gnu_cxx::
    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
    ::operator++(local_14);
  }
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::clear
            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)(this + 4));
  return;
}

```

---

## FindDataFamilyFile

```asm
// === 0857562e WindowsCodeProtectorServer::FindDataFamilyFile  [0x0857562e-0x85756cd] ===
 857562e:	55                   	push   %ebp
 857562f:	89 e5                	mov    %esp,%ebp
 8575631:	83 ec 38             	sub    $0x38,%esp
 8575634:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8575637:	89 04 24             	mov    %eax,(%esp)
 857563a:	e8 61 17 00 00       	call   8576da0 <_ZN9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEC1Ev>
 857563f:	8b 45 08             	mov    0x8(%ebp),%eax
 8575642:	8d 50 04             	lea    0x4(%eax),%edx
 8575645:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8575648:	89 54 24 04          	mov    %edx,0x4(%esp)
 857564c:	89 04 24             	mov    %eax,(%esp)
 857564f:	e8 5a 17 00 00       	call   8576dae <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EE5beginEv>
 8575654:	83 ec 04             	sub    $0x4,%esp
 8575657:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857565a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 857565d:	eb 39                	jmp    8575698 <_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc+0x6a>
 857565f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8575662:	89 04 24             	mov    %eax,(%esp)
 8575665:	e8 d0 17 00 00       	call   8576e3a <_ZNK9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEdeEv>
 857566a:	8b 00                	mov    (%eax),%eax
 857566c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 857566f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8575672:	8d 50 0c             	lea    0xc(%eax),%edx
 8575675:	8b 45 0c             	mov    0xc(%ebp),%eax
 8575678:	89 44 24 04          	mov    %eax,0x4(%esp)
 857567c:	89 14 24             	mov    %edx,(%esp)
 857567f:	e8 5c 8e b0 ff       	call   807e4e0 <strcmp@plt>
 8575684:	85 c0                	test   %eax,%eax
 8575686:	75 05                	jne    857568d <_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc+0x5f>
 8575688:	8b 45 f4             	mov    -0xc(%ebp),%eax
 857568b:	eb 3e                	jmp    85756cb <_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc+0x9d>
 857568d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8575690:	89 04 24             	mov    %eax,(%esp)
 8575693:	e8 8c 17 00 00       	call   8576e24 <_ZN9__gnu_cxx17__normal_iteratorIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEppEv>
 8575698:	8b 45 08             	mov    0x8(%ebp),%eax
 857569b:	8d 50 04             	lea    0x4(%eax),%edx
 857569e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85756a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85756a5:	89 04 24             	mov    %eax,(%esp)
 85756a8:	e8 25 17 00 00       	call   8576dd2 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EE3endEv>
 85756ad:	83 ec 04             	sub    $0x4,%esp
 85756b0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85756b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85756b7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85756ba:	89 04 24             	mov    %eax,(%esp)
 85756bd:	e8 36 17 00 00       	call   8576df8 <_ZN9__gnu_cxxneIPP21WindowsDataFileFamilySt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85756c2:	84 c0                	test   %al,%al
 85756c4:	75 99                	jne    857565f <_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc+0x31>
 85756c6:	b8 00 00 00 00       	mov    $0x0,%eax
 85756cb:	c9                   	leave
 85756cc:	c3                   	ret
 85756cd:	90                   	nop

```

```c
// WindowsCodeProtectorServer::FindDataFamilyFile @ 0x857562e

/* WindowsCodeProtectorServer::FindDataFamilyFile(char const*) */

int __thiscall
WindowsCodeProtectorServer::FindDataFamilyFile(WindowsCodeProtectorServer *this,char *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  int local_10;
  
  __gnu_cxx::
  __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
  ::__normal_iterator(local_18);
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::begin();
  while( true ) {
    std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_18,local_14);
    if (!bVar1) {
      return 0;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
                    ::operator*(local_18);
    local_10 = *piVar2;
    iVar3 = strcmp((char *)(local_10 + 0xc),param_1);
    if (iVar3 == 0) break;
    __gnu_cxx::
    __normal_iterator<WindowsDataFileFamily**,std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>>
    ::operator++(local_18);
  }
  return local_10;
}

```

---

## FindExeFamilyFile

```asm
// === 085755f6 WindowsCodeProtectorServer::FindExeFamilyFile  [0x085755f6-0x857562d] ===
 85755f6:	55                   	push   %ebp
 85755f7:	89 e5                	mov    %esp,%ebp
 85755f9:	83 ec 18             	sub    $0x18,%esp
 85755fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85755ff:	8b 00                	mov    (%eax),%eax
 8575601:	85 c0                	test   %eax,%eax
 8575603:	74 22                	je     8575627 <_ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc+0x31>
 8575605:	8b 45 08             	mov    0x8(%ebp),%eax
 8575608:	8b 00                	mov    (%eax),%eax
 857560a:	8d 50 18             	lea    0x18(%eax),%edx
 857560d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8575610:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575614:	89 14 24             	mov    %edx,(%esp)
 8575617:	e8 c4 8e b0 ff       	call   807e4e0 <strcmp@plt>
 857561c:	85 c0                	test   %eax,%eax
 857561e:	75 07                	jne    8575627 <_ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc+0x31>
 8575620:	b8 01 00 00 00       	mov    $0x1,%eax
 8575625:	eb 05                	jmp    857562c <_ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc+0x36>
 8575627:	b8 00 00 00 00       	mov    $0x0,%eax
 857562c:	c9                   	leave
 857562d:	c3                   	ret

```

```c
// WindowsCodeProtectorServer::FindExeFamilyFile @ 0x85755f6

/* WindowsCodeProtectorServer::FindExeFamilyFile(char const*) */

undefined4 __thiscall
WindowsCodeProtectorServer::FindExeFamilyFile(WindowsCodeProtectorServer *this,char *param_1)

{
  int iVar1;
  
  if ((*(int *)this != 0) && (iVar1 = strcmp((char *)(*(int *)this + 0x18),param_1), iVar1 == 0)) {
    return 1;
  }
  return 0;
}

```

---

## GenerateChecksum

```asm
// === 08575a3c WindowsCodeProtectorServer::GenerateChecksum  [0x08575a3c-0x8575c21] ===
 8575a3c:	55                   	push   %ebp
 8575a3d:	89 e5                	mov    %esp,%ebp
 8575a3f:	83 ec 28             	sub    $0x28,%esp
 8575a42:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8575a46:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8575a4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8575a4d:	0f b6 40 1c          	movzbl 0x1c(%eax),%eax
 8575a51:	84 c0                	test   %al,%al
 8575a53:	0f 84 c2 01 00 00    	je     8575c1b <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1df>
 8575a59:	8b 45 08             	mov    0x8(%ebp),%eax
 8575a5c:	8b 00                	mov    (%eax),%eax
 8575a5e:	85 c0                	test   %eax,%eax
 8575a60:	75 19                	jne    8575a7b <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x3f>
 8575a62:	8b 45 08             	mov    0x8(%ebp),%eax
 8575a65:	83 c0 04             	add    $0x4,%eax
 8575a68:	89 04 24             	mov    %eax,(%esp)
 8575a6b:	e8 64 14 00 00       	call   8576ed4 <_ZNKSt6vectorIP21WindowsDataFileFamilySaIS1_EE5emptyEv>
 8575a70:	84 c0                	test   %al,%al
 8575a72:	74 07                	je     8575a7b <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x3f>
 8575a74:	b8 01 00 00 00       	mov    $0x1,%eax
 8575a79:	eb 05                	jmp    8575a80 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x44>
 8575a7b:	b8 00 00 00 00       	mov    $0x0,%eax
 8575a80:	84 c0                	test   %al,%al
 8575a82:	74 0a                	je     8575a8e <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x52>
 8575a84:	b8 00 00 00 00       	mov    $0x0,%eax
 8575a89:	e9 92 01 00 00       	jmp    8575c20 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1e4>
 8575a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8575a91:	8b 00                	mov    (%eax),%eax
 8575a93:	85 c0                	test   %eax,%eax
 8575a95:	74 19                	je     8575ab0 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x74>
 8575a97:	8b 45 08             	mov    0x8(%ebp),%eax
 8575a9a:	83 c0 04             	add    $0x4,%eax
 8575a9d:	89 04 24             	mov    %eax,(%esp)
 8575aa0:	e8 2f 14 00 00       	call   8576ed4 <_ZNKSt6vectorIP21WindowsDataFileFamilySaIS1_EE5emptyEv>
 8575aa5:	84 c0                	test   %al,%al
 8575aa7:	74 07                	je     8575ab0 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x74>
 8575aa9:	b8 01 00 00 00       	mov    $0x1,%eax
 8575aae:	eb 05                	jmp    8575ab5 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x79>
 8575ab0:	b8 00 00 00 00       	mov    $0x0,%eax
 8575ab5:	84 c0                	test   %al,%al
 8575ab7:	74 0a                	je     8575ac3 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x87>
 8575ab9:	c6 45 f6 01          	movb   $0x1,-0xa(%ebp)
 8575abd:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8575ac1:	eb 73                	jmp    8575b36 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xfa>
 8575ac3:	8b 45 08             	mov    0x8(%ebp),%eax
 8575ac6:	8b 00                	mov    (%eax),%eax
 8575ac8:	85 c0                	test   %eax,%eax
 8575aca:	75 1c                	jne    8575ae8 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xac>
 8575acc:	8b 45 08             	mov    0x8(%ebp),%eax
 8575acf:	83 c0 04             	add    $0x4,%eax
 8575ad2:	89 04 24             	mov    %eax,(%esp)
 8575ad5:	e8 fa 13 00 00       	call   8576ed4 <_ZNKSt6vectorIP21WindowsDataFileFamilySaIS1_EE5emptyEv>
 8575ada:	83 f0 01             	xor    $0x1,%eax
 8575add:	84 c0                	test   %al,%al
 8575adf:	74 07                	je     8575ae8 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xac>
 8575ae1:	b8 01 00 00 00       	mov    $0x1,%eax
 8575ae6:	eb 05                	jmp    8575aed <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xb1>
 8575ae8:	b8 00 00 00 00       	mov    $0x0,%eax
 8575aed:	84 c0                	test   %al,%al
 8575aef:	74 0a                	je     8575afb <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xbf>
 8575af1:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8575af5:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8575af9:	eb 3b                	jmp    8575b36 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xfa>
 8575afb:	8b 45 08             	mov    0x8(%ebp),%eax
 8575afe:	8b 50 14             	mov    0x14(%eax),%edx
 8575b01:	8b 45 08             	mov    0x8(%ebp),%eax
 8575b04:	8b 40 10             	mov    0x10(%eax),%eax
 8575b07:	39 c2                	cmp    %eax,%edx
 8575b09:	7d 19                	jge    8575b24 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xe8>
 8575b0b:	c6 45 f6 01          	movb   $0x1,-0xa(%ebp)
 8575b0f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8575b13:	8b 45 08             	mov    0x8(%ebp),%eax
 8575b16:	8b 40 14             	mov    0x14(%eax),%eax
 8575b19:	8d 50 01             	lea    0x1(%eax),%edx
 8575b1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8575b1f:	89 50 14             	mov    %edx,0x14(%eax)
 8575b22:	eb 12                	jmp    8575b36 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0xfa>
 8575b24:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 8575b28:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 8575b2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8575b2f:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8575b36:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 8575b3a:	74 3c                	je     8575b78 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x13c>
 8575b3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8575b3f:	8b 00                	mov    (%eax),%eax
 8575b41:	8b 55 10             	mov    0x10(%ebp),%edx
 8575b44:	89 54 24 08          	mov    %edx,0x8(%esp)
 8575b48:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575b4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575b4f:	89 04 24             	mov    %eax,(%esp)
 8575b52:	e8 99 f1 ff ff       	call   8574cf0 <_ZN20WindowsExeFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx>
 8575b57:	84 c0                	test   %al,%al
 8575b59:	74 1d                	je     8575b78 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x13c>
 8575b5b:	c7 44 24 04 4c 6a ca 	movl   $0x8ca6a4c,0x4(%esp)
 8575b62:	08 
 8575b63:	8b 45 10             	mov    0x10(%ebp),%eax
 8575b66:	89 04 24             	mov    %eax,(%esp)
 8575b69:	e8 3c 4e b1 ff       	call   808a9aa <_ZN20CodeHackCheckRangeEx11SetFileNameEPKc>
 8575b6e:	b8 01 00 00 00       	mov    $0x1,%eax
 8575b73:	e9 a8 00 00 00       	jmp    8575c20 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1e4>
 8575b78:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8575b7c:	0f 84 99 00 00 00    	je     8575c1b <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1df>
 8575b82:	8b 45 08             	mov    0x8(%ebp),%eax
 8575b85:	8b 40 18             	mov    0x18(%eax),%eax
 8575b88:	8b 55 08             	mov    0x8(%ebp),%edx
 8575b8b:	83 c2 04             	add    $0x4,%edx
 8575b8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575b92:	89 14 24             	mov    %edx,(%esp)
 8575b95:	e8 7e 13 00 00       	call   8576f18 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EEixEj>
 8575b9a:	8b 00                	mov    (%eax),%eax
 8575b9c:	8b 55 10             	mov    0x10(%ebp),%edx
 8575b9f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8575ba3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575ba6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575baa:	89 04 24             	mov    %eax,(%esp)
 8575bad:	e8 50 f7 ff ff       	call   8575302 <_ZN21WindowsDataFileFamily16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx>
 8575bb2:	84 c0                	test   %al,%al
 8575bb4:	74 65                	je     8575c1b <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1df>
 8575bb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8575bb9:	8b 40 18             	mov    0x18(%eax),%eax
 8575bbc:	8b 55 08             	mov    0x8(%ebp),%edx
 8575bbf:	83 c2 04             	add    $0x4,%edx
 8575bc2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575bc6:	89 14 24             	mov    %edx,(%esp)
 8575bc9:	e8 4a 13 00 00       	call   8576f18 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EEixEj>
 8575bce:	8b 00                	mov    (%eax),%eax
 8575bd0:	89 04 24             	mov    %eax,(%esp)
 8575bd3:	e8 6c f8 ff ff       	call   8575444 <_ZN21WindowsDataFileFamily22IsScanningAddressResetEv>
 8575bd8:	84 c0                	test   %al,%al
 8575bda:	74 38                	je     8575c14 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1d8>
 8575bdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8575bdf:	8b 40 18             	mov    0x18(%eax),%eax
 8575be2:	8d 50 01             	lea    0x1(%eax),%edx
 8575be5:	8b 45 08             	mov    0x8(%ebp),%eax
 8575be8:	89 50 18             	mov    %edx,0x18(%eax)
 8575beb:	8b 45 08             	mov    0x8(%ebp),%eax
 8575bee:	83 c0 04             	add    $0x4,%eax
 8575bf1:	89 04 24             	mov    %eax,(%esp)
 8575bf4:	e8 31 13 00 00       	call   8576f2a <_ZNKSt6vectorIP21WindowsDataFileFamilySaIS1_EE4sizeEv>
 8575bf9:	89 c2                	mov    %eax,%edx
 8575bfb:	8b 45 08             	mov    0x8(%ebp),%eax
 8575bfe:	8b 40 18             	mov    0x18(%eax),%eax
 8575c01:	39 c2                	cmp    %eax,%edx
 8575c03:	0f 9e c0             	setle  %al
 8575c06:	84 c0                	test   %al,%al
 8575c08:	74 0a                	je     8575c14 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1d8>
 8575c0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8575c0d:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8575c14:	b8 01 00 00 00       	mov    $0x1,%eax
 8575c19:	eb 05                	jmp    8575c20 <_ZN26WindowsCodeProtectorServer16GenerateChecksumEP18CodeHackChecksumExP20CodeHackCheckRangeEx+0x1e4>
 8575c1b:	b8 00 00 00 00       	mov    $0x0,%eax
 8575c20:	c9                   	leave
 8575c21:	c3                   	ret

```

```c
// WindowsCodeProtectorServer::GenerateChecksum @ 0x8575a3c

/* WindowsCodeProtectorServer::GenerateChecksum(CodeHackChecksumEx*, CodeHackCheckRangeEx*) */

undefined4 __thiscall
WindowsCodeProtectorServer::GenerateChecksum
          (WindowsCodeProtectorServer *this,CodeHackChecksumEx *param_1,
          CodeHackCheckRangeEx *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  
  if (this[0x1c] != (WindowsCodeProtectorServer)0x0) {
    if ((*(int *)this == 0) &&
       (cVar3 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::empty(),
       cVar3 != '\0')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 0;
    }
    if ((*(int *)this == 0) ||
       (cVar3 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::empty(),
       cVar3 == '\0')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      bVar1 = true;
      bVar2 = false;
    }
    else {
      if ((*(int *)this == 0) &&
         (cVar3 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::empty
                            (), cVar3 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        bVar1 = false;
        bVar2 = true;
      }
      else if (*(int *)(this + 0x14) < *(int *)(this + 0x10)) {
        bVar1 = true;
        bVar2 = false;
        *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
      }
      else {
        bVar1 = false;
        bVar2 = true;
        *(undefined4 *)(this + 0x14) = 0;
      }
    }
    if ((bVar1) &&
       (cVar3 = WindowsExeFileFamily::GenerateChecksum
                          (*(WindowsExeFileFamily **)this,param_1,param_2), cVar3 != '\0')) {
      CodeHackCheckRangeEx::SetFileName(param_2,"");
      return 1;
    }
    if (bVar2) {
      puVar4 = (undefined4 *)
               std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::
               operator[]((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)
                          (this + 4),*(uint *)(this + 0x18));
      cVar3 = WindowsDataFileFamily::GenerateChecksum
                        ((WindowsDataFileFamily *)*puVar4,param_1,param_2);
      if (cVar3 != '\0') {
        puVar4 = (undefined4 *)
                 std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::
                 operator[]((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *
                            )(this + 4),*(uint *)(this + 0x18));
        cVar3 = WindowsDataFileFamily::IsScanningAddressReset((WindowsDataFileFamily *)*puVar4);
        if (cVar3 != '\0') {
          *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
          iVar5 = std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::size
                            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>
                              *)(this + 4));
          if (iVar5 <= *(int *)(this + 0x18)) {
            *(undefined4 *)(this + 0x18) = 0;
          }
        }
        return 1;
      }
    }
  }
  return 0;
}

```

---

## Initialize

```asm
// === 085754cc WindowsCodeProtectorServer::Initialize  [0x085754cc-0x85754ff] ===
 85754cc:	55                   	push   %ebp
 85754cd:	89 e5                	mov    %esp,%ebp
 85754cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85754d2:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85754d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85754db:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 85754e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85754e5:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 85754ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85754ef:	c6 40 1c 00          	movb   $0x0,0x1c(%eax)
 85754f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85754f6:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 85754fd:	5d                   	pop    %ebp
 85754fe:	c3                   	ret
 85754ff:	90                   	nop

```

```c
// WindowsCodeProtectorServer::Initialize @ 0x85754cc

/* WindowsCodeProtectorServer::Initialize() */

void __thiscall WindowsCodeProtectorServer::Initialize(WindowsCodeProtectorServer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x1c] = (WindowsCodeProtectorServer)0x0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## IsDifferentExeVersionRoughly

```asm
// === 08575970 WindowsCodeProtectorServer::IsDifferentExeVersionRoughly  [0x08575970-0x8575a3b] ===
 8575970:	55                   	push   %ebp
 8575971:	89 e5                	mov    %esp,%ebp
 8575973:	83 ec 48             	sub    $0x48,%esp
 8575976:	8b 45 08             	mov    0x8(%ebp),%eax
 8575979:	8b 00                	mov    (%eax),%eax
 857597b:	85 c0                	test   %eax,%eax
 857597d:	0f 84 b2 00 00 00    	je     8575a35 <_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv+0xc5>
 8575983:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8575986:	89 04 24             	mov    %eax,(%esp)
 8575989:	e8 18 0d 00 00       	call   85766a6 <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEC1Ev>
 857598e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8575995:	8b 45 08             	mov    0x8(%ebp),%eax
 8575998:	8b 00                	mov    (%eax),%eax
 857599a:	8d 50 0c             	lea    0xc(%eax),%edx
 857599d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85759a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85759a4:	89 04 24             	mov    %eax,(%esp)
 85759a7:	e8 08 0d 00 00       	call   85766b4 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE5beginEv>
 85759ac:	83 ec 04             	sub    $0x4,%esp
 85759af:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85759b2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85759b5:	eb 2d                	jmp    85759e4 <_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv+0x74>
 85759b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85759ba:	89 04 24             	mov    %eax,(%esp)
 85759bd:	e8 7e 0d 00 00       	call   8576740 <_ZNK9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEdeEv>
 85759c2:	8b 00                	mov    (%eax),%eax
 85759c4:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85759c7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85759ca:	8b 00                	mov    (%eax),%eax
 85759cc:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85759cf:	76 08                	jbe    85759d9 <_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv+0x69>
 85759d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85759d4:	8b 00                	mov    (%eax),%eax
 85759d6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85759d9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85759dc:	89 04 24             	mov    %eax,(%esp)
 85759df:	e8 46 0d 00 00       	call   857672a <_ZN9__gnu_cxx17__normal_iteratorIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEppEv>
 85759e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85759e7:	8b 00                	mov    (%eax),%eax
 85759e9:	8d 50 0c             	lea    0xc(%eax),%edx
 85759ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85759ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 85759f3:	89 04 24             	mov    %eax,(%esp)
 85759f6:	e8 dd 0c 00 00       	call   85766d8 <_ZNSt6vectorIP14WindowsExeFileSaIS1_EE3endEv>
 85759fb:	83 ec 04             	sub    $0x4,%esp
 85759fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8575a01:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575a05:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8575a08:	89 04 24             	mov    %eax,(%esp)
 8575a0b:	e8 ee 0c 00 00       	call   85766fe <_ZN9__gnu_cxxneIPP14WindowsExeFileSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8575a10:	84 c0                	test   %al,%al
 8575a12:	75 a3                	jne    85759b7 <_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv+0x47>
 8575a14:	8b 45 08             	mov    0x8(%ebp),%eax
 8575a17:	8b 00                	mov    (%eax),%eax
 8575a19:	89 04 24             	mov    %eax,(%esp)
 8575a1c:	e8 1b dc ff ff       	call   857363c <_ZN11IntervalSet20GetTotalIntervalSizeEv>
 8575a21:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8575a24:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8575a27:	01 c0                	add    %eax,%eax
 8575a29:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8575a2c:	77 07                	ja     8575a35 <_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv+0xc5>
 8575a2e:	b8 01 00 00 00       	mov    $0x1,%eax
 8575a33:	eb 05                	jmp    8575a3a <_ZN26WindowsCodeProtectorServer28IsDifferentExeVersionRoughlyEv+0xca>
 8575a35:	b8 00 00 00 00       	mov    $0x0,%eax
 8575a3a:	c9                   	leave
 8575a3b:	c3                   	ret

```

```c
// WindowsCodeProtectorServer::IsDifferentExeVersionRoughly @ 0x8575970

/* WindowsCodeProtectorServer::IsDifferentExeVersionRoughly() */

undefined4 __thiscall
WindowsCodeProtectorServer::IsDifferentExeVersionRoughly(WindowsCodeProtectorServer *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  uint *local_18;
  uint local_14;
  
  if (*(int *)this != 0) {
    __gnu_cxx::
    __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
    ::__normal_iterator(local_20);
    local_14 = 0;
    std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::begin();
    while( true ) {
      std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>::end();
      bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
      if (!bVar1) break;
      puVar2 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
               ::operator*(local_20);
      local_18 = (uint *)*puVar2;
      if (local_14 < *local_18) {
        local_14 = *local_18;
      }
      __gnu_cxx::
      __normal_iterator<WindowsExeFile**,std::vector<WindowsExeFile*,std::allocator<WindowsExeFile*>>>
      ::operator++(local_20);
    }
    iVar3 = IntervalSet::GetTotalIntervalSize();
    if ((uint)(iVar3 * 2) <= local_14) {
      return 1;
    }
  }
  return 0;
}

```

---

## LoadWindowsFile

```asm
// === 08575712 WindowsCodeProtectorServer::LoadWindowsFile  [0x08575712-0x857592b] ===
 8575712:	55                   	push   %ebp
 8575713:	89 e5                	mov    %esp,%ebp
 8575715:	57                   	push   %edi
 8575716:	56                   	push   %esi
 8575717:	53                   	push   %ebx
 8575718:	83 ec 2c             	sub    $0x2c,%esp
 857571b:	c7 44 24 04 43 6a ca 	movl   $0x8ca6a43,0x4(%esp)
 8575722:	08 
 8575723:	8b 45 0c             	mov    0xc(%ebp),%eax
 8575726:	89 04 24             	mov    %eax,(%esp)
 8575729:	e8 92 83 b0 ff       	call   807dac0 <strstr@plt>
 857572e:	85 c0                	test   %eax,%eax
 8575730:	0f 84 fc 00 00 00    	je     8575832 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x120>
 8575736:	8b 45 08             	mov    0x8(%ebp),%eax
 8575739:	8b 00                	mov    (%eax),%eax
 857573b:	85 c0                	test   %eax,%eax
 857573d:	0f 85 87 00 00 00    	jne    85757ca <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0xb8>
 8575743:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 857574a:	e8 01 ed 1a 00       	call   8724450 <_Znwj>
 857574f:	89 c3                	mov    %eax,%ebx
 8575751:	89 d8                	mov    %ebx,%eax
 8575753:	89 04 24             	mov    %eax,(%esp)
 8575756:	e8 0f ed ff ff       	call   857446a <_ZN20WindowsExeFileFamilyC1Ev>
 857575b:	eb 18                	jmp    8575775 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x63>
 857575d:	89 d6                	mov    %edx,%esi
 857575f:	89 c7                	mov    %eax,%edi
 8575761:	89 1c 24             	mov    %ebx,(%esp)
 8575764:	e8 87 ed 1a 00       	call   87244f0 <_ZdlPv>
 8575769:	89 f8                	mov    %edi,%eax
 857576b:	89 f2                	mov    %esi,%edx
 857576d:	89 04 24             	mov    %eax,(%esp)
 8575770:	e8 db df 56 00       	call   8ae3750 <_Unwind_Resume>
 8575775:	89 da                	mov    %ebx,%edx
 8575777:	8b 45 08             	mov    0x8(%ebp),%eax
 857577a:	89 10                	mov    %edx,(%eax)
 857577c:	8b 45 08             	mov    0x8(%ebp),%eax
 857577f:	8b 00                	mov    (%eax),%eax
 8575781:	8b 55 10             	mov    0x10(%ebp),%edx
 8575784:	89 54 24 08          	mov    %edx,0x8(%esp)
 8575788:	8b 55 0c             	mov    0xc(%ebp),%edx
 857578b:	89 54 24 04          	mov    %edx,0x4(%esp)
 857578f:	89 04 24             	mov    %eax,(%esp)
 8575792:	e8 a7 ee ff ff       	call   857463e <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_>
 8575797:	84 c0                	test   %al,%al
 8575799:	0f 84 7f 01 00 00    	je     857591e <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x20c>
 857579f:	8b 45 08             	mov    0x8(%ebp),%eax
 85757a2:	8b 48 24             	mov    0x24(%eax),%ecx
 85757a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85757a8:	8b 50 20             	mov    0x20(%eax),%edx
 85757ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85757ae:	8b 00                	mov    (%eax),%eax
 85757b0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85757b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85757b8:	89 04 24             	mov    %eax,(%esp)
 85757bb:	e8 60 ee ff ff       	call   8574620 <_ZN20WindowsExeFileFamily17SetCheckingOptionEmm>
 85757c0:	b8 01 00 00 00       	mov    $0x1,%eax
 85757c5:	e9 59 01 00 00       	jmp    8575923 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x211>
 85757ca:	8b 45 10             	mov    0x10(%ebp),%eax
 85757cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85757d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85757d4:	89 04 24             	mov    %eax,(%esp)
 85757d7:	e8 1a fe ff ff       	call   85755f6 <_ZN26WindowsCodeProtectorServer17FindExeFamilyFileEPKc>
 85757dc:	84 c0                	test   %al,%al
 85757de:	0f 84 3a 01 00 00    	je     857591e <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x20c>
 85757e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85757e7:	8b 00                	mov    (%eax),%eax
 85757e9:	8b 55 10             	mov    0x10(%ebp),%edx
 85757ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 85757f0:	8b 55 0c             	mov    0xc(%ebp),%edx
 85757f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85757f7:	89 04 24             	mov    %eax,(%esp)
 85757fa:	e8 3f ee ff ff       	call   857463e <_ZN20WindowsExeFileFamily18LoadWindowsExeFileEPKcS1_>
 85757ff:	84 c0                	test   %al,%al
 8575801:	0f 84 17 01 00 00    	je     857591e <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x20c>
 8575807:	8b 45 08             	mov    0x8(%ebp),%eax
 857580a:	8b 48 24             	mov    0x24(%eax),%ecx
 857580d:	8b 45 08             	mov    0x8(%ebp),%eax
 8575810:	8b 50 20             	mov    0x20(%eax),%edx
 8575813:	8b 45 08             	mov    0x8(%ebp),%eax
 8575816:	8b 00                	mov    (%eax),%eax
 8575818:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 857581c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8575820:	89 04 24             	mov    %eax,(%esp)
 8575823:	e8 f8 ed ff ff       	call   8574620 <_ZN20WindowsExeFileFamily17SetCheckingOptionEmm>
 8575828:	b8 01 00 00 00       	mov    $0x1,%eax
 857582d:	e9 f1 00 00 00       	jmp    8575923 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x211>
 8575832:	8b 45 10             	mov    0x10(%ebp),%eax
 8575835:	89 44 24 04          	mov    %eax,0x4(%esp)
 8575839:	8b 45 08             	mov    0x8(%ebp),%eax
 857583c:	89 04 24             	mov    %eax,(%esp)
 857583f:	e8 ea fd ff ff       	call   857562e <_ZN26WindowsCodeProtectorServer18FindDataFamilyFileEPKc>
 8575844:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8575847:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857584a:	85 c0                	test   %eax,%eax
 857584c:	0f 85 a8 00 00 00    	jne    85758fa <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x1e8>
 8575852:	c7 04 24 20 01 00 00 	movl   $0x120,(%esp)
 8575859:	e8 f2 eb 1a 00       	call   8724450 <_Znwj>
 857585e:	89 c3                	mov    %eax,%ebx
 8575860:	89 d8                	mov    %ebx,%eax
 8575862:	89 04 24             	mov    %eax,(%esp)
 8575865:	e8 ac f6 ff ff       	call   8574f16 <_ZN21WindowsDataFileFamilyC1Ev>
 857586a:	eb 18                	jmp    8575884 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x172>
 857586c:	89 d6                	mov    %edx,%esi
 857586e:	89 c7                	mov    %eax,%edi
 8575870:	89 1c 24             	mov    %ebx,(%esp)
 8575873:	e8 78 ec 1a 00       	call   87244f0 <_ZdlPv>
 8575878:	89 f8                	mov    %edi,%eax
 857587a:	89 f2                	mov    %esi,%edx
 857587c:	89 04 24             	mov    %eax,(%esp)
 857587f:	e8 cc de 56 00       	call   8ae3750 <_Unwind_Resume>
 8575884:	89 d8                	mov    %ebx,%eax
 8575886:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8575889:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 857588c:	8b 55 10             	mov    0x10(%ebp),%edx
 857588f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8575893:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575896:	89 54 24 04          	mov    %edx,0x4(%esp)
 857589a:	89 04 24             	mov    %eax,(%esp)
 857589d:	e8 9a f8 ff ff       	call   857513c <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_>
 85758a2:	84 c0                	test   %al,%al
 85758a4:	74 3b                	je     85758e1 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x1cf>
 85758a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85758a9:	8b 48 2c             	mov    0x2c(%eax),%ecx
 85758ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85758af:	8b 50 28             	mov    0x28(%eax),%edx
 85758b2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85758b5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85758b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85758bd:	89 04 24             	mov    %eax,(%esp)
 85758c0:	e8 59 f8 ff ff       	call   857511e <_ZN21WindowsDataFileFamily17SetCheckingOptionEmm>
 85758c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85758c8:	8d 50 04             	lea    0x4(%eax),%edx
 85758cb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85758ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 85758d2:	89 14 24             	mov    %edx,(%esp)
 85758d5:	e8 86 15 00 00       	call   8576e60 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EE9push_backERKS1_>
 85758da:	b8 01 00 00 00       	mov    $0x1,%eax
 85758df:	eb 42                	jmp    8575923 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x211>
 85758e1:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85758e4:	85 db                	test   %ebx,%ebx
 85758e6:	74 36                	je     857591e <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x20c>
 85758e8:	89 1c 24             	mov    %ebx,(%esp)
 85758eb:	e8 8c f6 ff ff       	call   8574f7c <_ZN21WindowsDataFileFamilyD1Ev>
 85758f0:	89 1c 24             	mov    %ebx,(%esp)
 85758f3:	e8 f8 eb 1a 00       	call   87244f0 <_ZdlPv>
 85758f8:	eb 24                	jmp    857591e <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x20c>
 85758fa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85758fd:	8b 55 10             	mov    0x10(%ebp),%edx
 8575900:	89 54 24 08          	mov    %edx,0x8(%esp)
 8575904:	8b 55 0c             	mov    0xc(%ebp),%edx
 8575907:	89 54 24 04          	mov    %edx,0x4(%esp)
 857590b:	89 04 24             	mov    %eax,(%esp)
 857590e:	e8 29 f8 ff ff       	call   857513c <_ZN21WindowsDataFileFamily19LoadWindowsDataFileEPKcS1_>
 8575913:	84 c0                	test   %al,%al
 8575915:	74 07                	je     857591e <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x20c>
 8575917:	b8 01 00 00 00       	mov    $0x1,%eax
 857591c:	eb 05                	jmp    8575923 <_ZN26WindowsCodeProtectorServer15LoadWindowsFileEPKcS1_+0x211>
 857591e:	b8 00 00 00 00       	mov    $0x0,%eax
 8575923:	83 c4 2c             	add    $0x2c,%esp
 8575926:	5b                   	pop    %ebx
 8575927:	5e                   	pop    %esi
 8575928:	5f                   	pop    %edi
 8575929:	5d                   	pop    %ebp
 857592a:	c3                   	ret
 857592b:	90                   	nop

```

```c
// WindowsCodeProtectorServer::LoadWindowsFile @ 0x8575712

/* WindowsCodeProtectorServer::LoadWindowsFile(char const*, char const*) */

undefined4 __thiscall
WindowsCodeProtectorServer::LoadWindowsFile
          (WindowsCodeProtectorServer *this,char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  WindowsExeFileFamily *this_00;
  WindowsDataFileFamily *pWVar3;
  WindowsDataFileFamily *local_20 [4];
  
  pcVar2 = strstr(param_1,".exe.bak");
  if (pcVar2 == (char *)0x0) {
    local_20[0] = (WindowsDataFileFamily *)FindDataFamilyFile(this,param_2);
    if (local_20[0] == (WindowsDataFileFamily *)0x0) {
      pWVar3 = operator_new(0x120);
                    /* try { // try from 08575865 to 08575869 has its CatchHandler @ 0857586c */
      WindowsDataFileFamily::WindowsDataFileFamily(pWVar3);
      local_20[0] = pWVar3;
      cVar1 = WindowsDataFileFamily::LoadWindowsDataFile(pWVar3,param_1,param_2);
      pWVar3 = local_20[0];
      if (cVar1 != '\0') {
        WindowsDataFileFamily::SetCheckingOption
                  (local_20[0],*(ulong *)(this + 0x28),*(ulong *)(this + 0x2c));
        std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::push_back
                  ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)
                   (this + 4),local_20);
        return 1;
      }
      if (local_20[0] != (WindowsDataFileFamily *)0x0) {
        WindowsDataFileFamily::~WindowsDataFileFamily(local_20[0]);
        operator_delete(pWVar3);
      }
    }
    else {
      cVar1 = WindowsDataFileFamily::LoadWindowsDataFile(local_20[0],param_1,param_2);
      if (cVar1 != '\0') {
        return 1;
      }
    }
  }
  else if (*(int *)this == 0) {
    this_00 = operator_new(300);
                    /* try { // try from 08575756 to 0857575a has its CatchHandler @ 0857575d */
    WindowsExeFileFamily::WindowsExeFileFamily(this_00);
    *(WindowsExeFileFamily **)this = this_00;
    cVar1 = WindowsExeFileFamily::LoadWindowsExeFile(*(WindowsExeFileFamily **)this,param_1,param_2)
    ;
    if (cVar1 != '\0') {
      WindowsExeFileFamily::SetCheckingOption
                (*(WindowsExeFileFamily **)this,*(ulong *)(this + 0x20),*(ulong *)(this + 0x24));
      return 1;
    }
  }
  else {
    cVar1 = FindExeFamilyFile(this,param_2);
    if ((cVar1 != '\0') &&
       (cVar1 = WindowsExeFileFamily::LoadWindowsExeFile
                          (*(WindowsExeFileFamily **)this,param_1,param_2), cVar1 != '\0')) {
      WindowsExeFileFamily::SetCheckingOption
                (*(WindowsExeFileFamily **)this,*(ulong *)(this + 0x20),*(ulong *)(this + 0x24));
      return 1;
    }
  }
  return 0;
}

```

---

## SetExeCheckingOption

```asm
// === 085756ce WindowsCodeProtectorServer::SetExeCheckingOption  [0x085756ce-0x85756ff] ===
 85756ce:	55                   	push   %ebp
 85756cf:	89 e5                	mov    %esp,%ebp
 85756d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85756d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 85756d7:	89 50 10             	mov    %edx,0x10(%eax)
 85756da:	8b 55 10             	mov    0x10(%ebp),%edx
 85756dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85756e0:	89 50 20             	mov    %edx,0x20(%eax)
 85756e3:	8b 55 14             	mov    0x14(%ebp),%edx
 85756e6:	8b 45 08             	mov    0x8(%ebp),%eax
 85756e9:	89 50 24             	mov    %edx,0x24(%eax)
 85756ec:	8b 55 18             	mov    0x18(%ebp),%edx
 85756ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85756f2:	89 50 28             	mov    %edx,0x28(%eax)
 85756f5:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85756f8:	8b 45 08             	mov    0x8(%ebp),%eax
 85756fb:	89 50 2c             	mov    %edx,0x2c(%eax)
 85756fe:	5d                   	pop    %ebp
 85756ff:	c3                   	ret

```

```c
// WindowsCodeProtectorServer::SetExeCheckingOption @ 0x85756ce

/* WindowsCodeProtectorServer::SetExeCheckingOption(long, long, long, long, long) */

void __thiscall
WindowsCodeProtectorServer::SetExeCheckingOption
          (WindowsCodeProtectorServer *this,long param_1,long param_2,long param_3,long param_4,
          long param_5)

{
  *(long *)(this + 0x10) = param_1;
  *(long *)(this + 0x20) = param_2;
  *(long *)(this + 0x24) = param_3;
  *(long *)(this + 0x28) = param_4;
  *(long *)(this + 0x2c) = param_5;
  return;
}

```

---

## WindowsCodeProtectorServer

```asm
// === 08575462 WindowsCodeProtectorServer::WindowsCodeProtectorServer  [0x08575462-0x8575483] ===
 8575462:	55                   	push   %ebp
 8575463:	89 e5                	mov    %esp,%ebp
 8575465:	83 ec 18             	sub    $0x18,%esp
 8575468:	8b 45 08             	mov    0x8(%ebp),%eax
 857546b:	83 c0 04             	add    $0x4,%eax
 857546e:	89 04 24             	mov    %eax,(%esp)
 8575471:	e8 b8 18 00 00       	call   8576d2e <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EEC1Ev>
 8575476:	8b 45 08             	mov    0x8(%ebp),%eax
 8575479:	89 04 24             	mov    %eax,(%esp)
 857547c:	e8 4b 00 00 00       	call   85754cc <_ZN26WindowsCodeProtectorServer10InitializeEv>
 8575481:	c9                   	leave
 8575482:	c3                   	ret
 8575483:	90                   	nop

```

```c
// WindowsCodeProtectorServer::WindowsCodeProtectorServer @ 0x8575462

/* WindowsCodeProtectorServer::WindowsCodeProtectorServer() */

void __thiscall
WindowsCodeProtectorServer::WindowsCodeProtectorServer(WindowsCodeProtectorServer *this)

{
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::vector
            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)(this + 4));
  Initialize(this);
  return;
}

```

---

## ~WindowsCodeProtectorServer

```asm
// === 08575484 WindowsCodeProtectorServer::~WindowsCodeProtectorServer  [0x08575484-0x85754cb] ===
 8575484:	55                   	push   %ebp
 8575485:	89 e5                	mov    %esp,%ebp
 8575487:	56                   	push   %esi
 8575488:	53                   	push   %ebx
 8575489:	83 ec 10             	sub    $0x10,%esp
 857548c:	8b 45 08             	mov    0x8(%ebp),%eax
 857548f:	89 04 24             	mov    %eax,(%esp)
 8575492:	e8 69 00 00 00       	call   8575500 <_ZN26WindowsCodeProtectorServer7DestroyEv>
 8575497:	eb 1e                	jmp    85754b7 <_ZN26WindowsCodeProtectorServerD1Ev+0x33>
 8575499:	89 d3                	mov    %edx,%ebx
 857549b:	89 c6                	mov    %eax,%esi
 857549d:	8b 45 08             	mov    0x8(%ebp),%eax
 85754a0:	83 c0 04             	add    $0x4,%eax
 85754a3:	89 04 24             	mov    %eax,(%esp)
 85754a6:	e8 97 18 00 00       	call   8576d42 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EED1Ev>
 85754ab:	89 f0                	mov    %esi,%eax
 85754ad:	89 da                	mov    %ebx,%edx
 85754af:	89 04 24             	mov    %eax,(%esp)
 85754b2:	e8 99 e2 56 00       	call   8ae3750 <_Unwind_Resume>
 85754b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85754ba:	83 c0 04             	add    $0x4,%eax
 85754bd:	89 04 24             	mov    %eax,(%esp)
 85754c0:	e8 7d 18 00 00       	call   8576d42 <_ZNSt6vectorIP21WindowsDataFileFamilySaIS1_EED1Ev>
 85754c5:	83 c4 10             	add    $0x10,%esp
 85754c8:	5b                   	pop    %ebx
 85754c9:	5e                   	pop    %esi
 85754ca:	5d                   	pop    %ebp
 85754cb:	c3                   	ret

```

```c
// WindowsCodeProtectorServer::~WindowsCodeProtectorServer @ 0x8575484

/* WindowsCodeProtectorServer::~WindowsCodeProtectorServer() */

void __thiscall
WindowsCodeProtectorServer::~WindowsCodeProtectorServer(WindowsCodeProtectorServer *this)

{
                    /* try { // try from 08575492 to 08575496 has its CatchHandler @ 08575499 */
  Destroy(this);
  std::vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>>::~vector
            ((vector<WindowsDataFileFamily*,std::allocator<WindowsDataFileFamily*>> *)(this + 4));
  return;
}

```

