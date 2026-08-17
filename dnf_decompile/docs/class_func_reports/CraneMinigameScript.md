# CraneMinigameScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## CraneMinigameScript

```asm
// === 088e3736 CraneMinigameScript::CraneMinigameScript  [0x088e3736-0x88e37a7] ===
 88e3736:	55                   	push   %ebp
 88e3737:	89 e5                	mov    %esp,%ebp
 88e3739:	56                   	push   %esi
 88e373a:	53                   	push   %ebx
 88e373b:	83 ec 10             	sub    $0x10,%esp
 88e373e:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3741:	83 c0 04             	add    $0x4,%eax
 88e3744:	89 04 24             	mov    %eax,(%esp)
 88e3747:	e8 c2 0a 00 00       	call   88e420e <_ZNSt6vectorIP13CraneItemInfoSaIS1_EEC1Ev>
 88e374c:	8b 45 08             	mov    0x8(%ebp),%eax
 88e374f:	83 c0 18             	add    $0x18,%eax
 88e3752:	89 04 24             	mov    %eax,(%esp)
 88e3755:	e8 74 09 00 00       	call   88e40ce <_ZN15Action_SendMailC1Ev>
 88e375a:	8b 45 08             	mov    0x8(%ebp),%eax
 88e375d:	83 c0 5c             	add    $0x5c,%eax
 88e3760:	89 04 24             	mov    %eax,(%esp)
 88e3763:	e8 6e 12 85 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 88e3768:	eb 36                	jmp    88e37a0 <_ZN19CraneMinigameScriptC1Ev+0x6a>
 88e376a:	89 d3                	mov    %edx,%ebx
 88e376c:	89 c6                	mov    %eax,%esi
 88e376e:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3771:	83 c0 18             	add    $0x18,%eax
 88e3774:	89 04 24             	mov    %eax,(%esp)
 88e3777:	e8 e4 09 00 00       	call   88e4160 <_ZN15Action_SendMailD1Ev>
 88e377c:	89 f0                	mov    %esi,%eax
 88e377e:	89 da                	mov    %ebx,%edx
 88e3780:	eb 00                	jmp    88e3782 <_ZN19CraneMinigameScriptC1Ev+0x4c>
 88e3782:	89 d3                	mov    %edx,%ebx
 88e3784:	89 c6                	mov    %eax,%esi
 88e3786:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3789:	83 c0 04             	add    $0x4,%eax
 88e378c:	89 04 24             	mov    %eax,(%esp)
 88e378f:	e8 8e 0a 00 00       	call   88e4222 <_ZNSt6vectorIP13CraneItemInfoSaIS1_EED1Ev>
 88e3794:	89 f0                	mov    %esi,%eax
 88e3796:	89 da                	mov    %ebx,%edx
 88e3798:	89 04 24             	mov    %eax,(%esp)
 88e379b:	e8 b0 ff 1f 00       	call   8ae3750 <_Unwind_Resume>
 88e37a0:	83 c4 10             	add    $0x10,%esp
 88e37a3:	5b                   	pop    %ebx
 88e37a4:	5e                   	pop    %esi
 88e37a5:	5d                   	pop    %ebp
 88e37a6:	c3                   	ret
 88e37a7:	90                   	nop

```

```c
// CraneMinigameScript::CraneMinigameScript @ 0x88e3736

/* CraneMinigameScript::CraneMinigameScript() */

void __thiscall CraneMinigameScript::CraneMinigameScript(CraneMinigameScript *this)

{
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::vector
            ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
                    /* try { // try from 088e3755 to 088e3759 has its CatchHandler @ 088e3782 */
  Action_SendMail::Action_SendMail((Action_SendMail *)(this + 0x18));
                    /* try { // try from 088e3763 to 088e3767 has its CatchHandler @ 088e376a */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x5c));
  return;
}

```

---

## getItem

```asm
// === 088e38d6 CraneMinigameScript::getItem  [0x088e38d6-0x88e3923] ===
 88e38d6:	55                   	push   %ebp
 88e38d7:	89 e5                	mov    %esp,%ebp
 88e38d9:	53                   	push   %ebx
 88e38da:	83 ec 24             	sub    $0x24,%esp
 88e38dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 88e38e0:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 88e38e4:	0f bf 5d f4          	movswl -0xc(%ebp),%ebx
 88e38e8:	8b 45 08             	mov    0x8(%ebp),%eax
 88e38eb:	83 c0 04             	add    $0x4,%eax
 88e38ee:	89 04 24             	mov    %eax,(%esp)
 88e38f1:	e8 3c 0a 00 00       	call   88e4332 <_ZNKSt6vectorIP13CraneItemInfoSaIS1_EE4sizeEv>
 88e38f6:	39 c3                	cmp    %eax,%ebx
 88e38f8:	0f 92 c0             	setb   %al
 88e38fb:	84 c0                	test   %al,%al
 88e38fd:	74 1a                	je     88e3919 <_ZN19CraneMinigameScript7getItemEs+0x43>
 88e38ff:	0f bf 45 f4          	movswl -0xc(%ebp),%eax
 88e3903:	8b 55 08             	mov    0x8(%ebp),%edx
 88e3906:	83 c2 04             	add    $0x4,%edx
 88e3909:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e390d:	89 14 24             	mov    %edx,(%esp)
 88e3910:	e8 39 0a 00 00       	call   88e434e <_ZNSt6vectorIP13CraneItemInfoSaIS1_EE2atEj>
 88e3915:	8b 00                	mov    (%eax),%eax
 88e3917:	eb 05                	jmp    88e391e <_ZN19CraneMinigameScript7getItemEs+0x48>
 88e3919:	b8 00 00 00 00       	mov    $0x0,%eax
 88e391e:	83 c4 24             	add    $0x24,%esp
 88e3921:	5b                   	pop    %ebx
 88e3922:	5d                   	pop    %ebp
 88e3923:	c3                   	ret

```

```c
// CraneMinigameScript::getItem @ 0x88e38d6

/* CraneMinigameScript::getItem(short) */

undefined4 __thiscall CraneMinigameScript::getItem(CraneMinigameScript *this,short param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  uVar1 = std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::size
                    ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
  if ((uint)(int)param_1 < uVar1) {
    puVar2 = (undefined4 *)
             std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::at
                       ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4),
                        (int)param_1);
    uVar3 = *puVar2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~CraneMinigameScript

```asm
// === 088e37a8 CraneMinigameScript::~CraneMinigameScript  [0x088e37a8-0x88e38d5] ===
 88e37a8:	55                   	push   %ebp
 88e37a9:	89 e5                	mov    %esp,%ebp
 88e37ab:	56                   	push   %esi
 88e37ac:	53                   	push   %ebx
 88e37ad:	83 ec 20             	sub    $0x20,%esp
 88e37b0:	8b 45 08             	mov    0x8(%ebp),%eax
 88e37b3:	8d 50 04             	lea    0x4(%eax),%edx
 88e37b6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e37b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e37bd:	89 04 24             	mov    %eax,(%esp)
 88e37c0:	e8 bb 0a 00 00       	call   88e4280 <_ZNSt6vectorIP13CraneItemInfoSaIS1_EE5beginEv>
 88e37c5:	83 ec 04             	sub    $0x4,%esp
 88e37c8:	8b 45 08             	mov    0x8(%ebp),%eax
 88e37cb:	8d 50 04             	lea    0x4(%eax),%edx
 88e37ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e37d1:	89 54 24 04          	mov    %edx,0x4(%esp)
 88e37d5:	89 04 24             	mov    %eax,(%esp)
 88e37d8:	e8 c7 0a 00 00       	call   88e42a4 <_ZNSt6vectorIP13CraneItemInfoSaIS1_EE3endEv>
 88e37dd:	83 ec 04             	sub    $0x4,%esp
 88e37e0:	eb 47                	jmp    88e3829 <_ZN19CraneMinigameScriptD1Ev+0x81>
 88e37e2:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e37e5:	89 04 24             	mov    %eax,(%esp)
 88e37e8:	e8 1f 0b 00 00       	call   88e430c <_ZNK9__gnu_cxx17__normal_iteratorIPP13CraneItemInfoSt6vectorIS2_SaIS2_EEEdeEv>
 88e37ed:	8b 00                	mov    (%eax),%eax
 88e37ef:	85 c0                	test   %eax,%eax
 88e37f1:	0f 95 c0             	setne  %al
 88e37f4:	84 c0                	test   %al,%al
 88e37f6:	74 15                	je     88e380d <_ZN19CraneMinigameScriptD1Ev+0x65>
 88e37f8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e37fb:	89 04 24             	mov    %eax,(%esp)
 88e37fe:	e8 09 0b 00 00       	call   88e430c <_ZNK9__gnu_cxx17__normal_iteratorIPP13CraneItemInfoSt6vectorIS2_SaIS2_EEEdeEv>
 88e3803:	8b 00                	mov    (%eax),%eax
 88e3805:	89 04 24             	mov    %eax,(%esp)
 88e3808:	e8 e3 0c e4 ff       	call   87244f0 <_ZdlPv>
 88e380d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e3810:	89 04 24             	mov    %eax,(%esp)
 88e3813:	e8 f4 0a 00 00       	call   88e430c <_ZNK9__gnu_cxx17__normal_iteratorIPP13CraneItemInfoSt6vectorIS2_SaIS2_EEEdeEv>
 88e3818:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88e381e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e3821:	89 04 24             	mov    %eax,(%esp)
 88e3824:	e8 cd 0a 00 00       	call   88e42f6 <_ZN9__gnu_cxx17__normal_iteratorIPP13CraneItemInfoSt6vectorIS2_SaIS2_EEEppEv>
 88e3829:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88e382c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88e3830:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88e3833:	89 04 24             	mov    %eax,(%esp)
 88e3836:	e8 8f 0a 00 00       	call   88e42ca <_ZN9__gnu_cxxneIPP13CraneItemInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 88e383b:	84 c0                	test   %al,%al
 88e383d:	75 a3                	jne    88e37e2 <_ZN19CraneMinigameScriptD1Ev+0x3a>
 88e383f:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3842:	83 c0 04             	add    $0x4,%eax
 88e3845:	89 04 24             	mov    %eax,(%esp)
 88e3848:	e8 c9 0a 00 00       	call   88e4316 <_ZNSt6vectorIP13CraneItemInfoSaIS1_EE5clearEv>
 88e384d:	eb 18                	jmp    88e3867 <_ZN19CraneMinigameScriptD1Ev+0xbf>
 88e384f:	89 d3                	mov    %edx,%ebx
 88e3851:	89 c6                	mov    %eax,%esi
 88e3853:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3856:	83 c0 5c             	add    $0x5c,%eax
 88e3859:	89 04 24             	mov    %eax,(%esp)
 88e385c:	e8 89 11 85 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88e3861:	89 f0                	mov    %esi,%eax
 88e3863:	89 da                	mov    %ebx,%edx
 88e3865:	eb 10                	jmp    88e3877 <_ZN19CraneMinigameScriptD1Ev+0xcf>
 88e3867:	8b 45 08             	mov    0x8(%ebp),%eax
 88e386a:	83 c0 5c             	add    $0x5c,%eax
 88e386d:	89 04 24             	mov    %eax,(%esp)
 88e3870:	e8 75 11 85 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 88e3875:	eb 18                	jmp    88e388f <_ZN19CraneMinigameScriptD1Ev+0xe7>
 88e3877:	89 d3                	mov    %edx,%ebx
 88e3879:	89 c6                	mov    %eax,%esi
 88e387b:	8b 45 08             	mov    0x8(%ebp),%eax
 88e387e:	83 c0 18             	add    $0x18,%eax
 88e3881:	89 04 24             	mov    %eax,(%esp)
 88e3884:	e8 d7 08 00 00       	call   88e4160 <_ZN15Action_SendMailD1Ev>
 88e3889:	89 f0                	mov    %esi,%eax
 88e388b:	89 da                	mov    %ebx,%edx
 88e388d:	eb 10                	jmp    88e389f <_ZN19CraneMinigameScriptD1Ev+0xf7>
 88e388f:	8b 45 08             	mov    0x8(%ebp),%eax
 88e3892:	83 c0 18             	add    $0x18,%eax
 88e3895:	89 04 24             	mov    %eax,(%esp)
 88e3898:	e8 c3 08 00 00       	call   88e4160 <_ZN15Action_SendMailD1Ev>
 88e389d:	eb 1e                	jmp    88e38bd <_ZN19CraneMinigameScriptD1Ev+0x115>
 88e389f:	89 d3                	mov    %edx,%ebx
 88e38a1:	89 c6                	mov    %eax,%esi
 88e38a3:	8b 45 08             	mov    0x8(%ebp),%eax
 88e38a6:	83 c0 04             	add    $0x4,%eax
 88e38a9:	89 04 24             	mov    %eax,(%esp)
 88e38ac:	e8 71 09 00 00       	call   88e4222 <_ZNSt6vectorIP13CraneItemInfoSaIS1_EED1Ev>
 88e38b1:	89 f0                	mov    %esi,%eax
 88e38b3:	89 da                	mov    %ebx,%edx
 88e38b5:	89 04 24             	mov    %eax,(%esp)
 88e38b8:	e8 93 fe 1f 00       	call   8ae3750 <_Unwind_Resume>
 88e38bd:	8b 45 08             	mov    0x8(%ebp),%eax
 88e38c0:	83 c0 04             	add    $0x4,%eax
 88e38c3:	89 04 24             	mov    %eax,(%esp)
 88e38c6:	e8 57 09 00 00       	call   88e4222 <_ZNSt6vectorIP13CraneItemInfoSaIS1_EED1Ev>
 88e38cb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88e38ce:	83 c4 00             	add    $0x0,%esp
 88e38d1:	5b                   	pop    %ebx
 88e38d2:	5e                   	pop    %esi
 88e38d3:	5d                   	pop    %ebp
 88e38d4:	c3                   	ret
 88e38d5:	90                   	nop

```

```c
// CraneMinigameScript::~CraneMinigameScript @ 0x88e37a8

/* CraneMinigameScript::~CraneMinigameScript() */

void __thiscall CraneMinigameScript::~CraneMinigameScript(CraneMinigameScript *this)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  __normal_iterator local_14 [4];
  __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
  local_10 [4];
  
                    /* try { // try from 088e37c0 to 088e384c has its CatchHandler @ 088e384f */
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::begin();
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_10,local_14);
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
                    ::operator*(local_10);
    if (*piVar2 != 0) {
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
               ::operator*(local_10);
      operator_delete((void *)*puVar3);
    }
    puVar3 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>
             ::operator*(local_10);
    *puVar3 = 0;
    __gnu_cxx::
    __normal_iterator<CraneItemInfo**,std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>>::
    operator++(local_10);
  }
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::clear
            ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
                    /* try { // try from 088e3870 to 088e3874 has its CatchHandler @ 088e3877 */
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x5c));
                    /* try { // try from 088e3898 to 088e389c has its CatchHandler @ 088e389f */
  Action_SendMail::~Action_SendMail((Action_SendMail *)(this + 0x18));
  std::vector<CraneItemInfo*,std::allocator<CraneItemInfo*>>::~vector
            ((vector<CraneItemInfo*,std::allocator<CraneItemInfo*>> *)(this + 4));
  return;
}

```

