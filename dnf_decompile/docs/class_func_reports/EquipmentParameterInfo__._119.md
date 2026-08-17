# EquipmentParameterInfo__._119

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## operator=

```asm
// === 088fd910 EquipmentParameterInfo::._119::operator=  [0x088fd910-0x88fd95e] ===
 88fd910:	55                   	push   %ebp
 88fd911:	89 e5                	mov    %esp,%ebp
 88fd913:	83 ec 18             	sub    $0x18,%esp
 88fd916:	8b 55 0c             	mov    0xc(%ebp),%edx
 88fd919:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd91c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88fd920:	89 04 24             	mov    %eax,(%esp)
 88fd923:	e8 08 2f a8 ff       	call   8380830 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EEaSERKS3_>
 88fd928:	8b 45 0c             	mov    0xc(%ebp),%eax
 88fd92b:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 88fd92f:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd932:	88 50 0c             	mov    %dl,0xc(%eax)
 88fd935:	8b 45 0c             	mov    0xc(%ebp),%eax
 88fd938:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 88fd93c:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd93f:	88 50 0d             	mov    %dl,0xd(%eax)
 88fd942:	8b 45 0c             	mov    0xc(%ebp),%eax
 88fd945:	8d 50 10             	lea    0x10(%eax),%edx
 88fd948:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd94b:	83 c0 10             	add    $0x10,%eax
 88fd94e:	89 54 24 04          	mov    %edx,0x4(%esp)
 88fd952:	89 04 24             	mov    %eax,(%esp)
 88fd955:	e8 f2 29 a8 ff       	call   838034c <_ZNSt6vectorIS_IfSaIfEESaIS1_EEaSERKS3_>
 88fd95a:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd95d:	c9                   	leave
 88fd95e:	c3                   	ret

```

```c
// EquipmentParameterInfo::._119::operator= @ 0x88fd910

vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>> *
_ZN22EquipmentParameterInfo5__119aSERKS0_
          (vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
           *param_1,vector *param_2)

{
  std::
  vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>::
  operator=(param_1,param_2);
  param_1[0xc] = *(vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
                   *)(param_2 + 0xc);
  param_1[0xd] = *(vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
                   *)(param_2 + 0xd);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(param_1 + 0x10),param_2 + 0x10);
  return param_1;
}

```

---

## operator=_0898c70c

```asm
// === 0898c70c EquipmentParameterInfo::._119::operator=  [0x0898c70c-0x898c75a] ===
 898c70c:	55                   	push   %ebp
 898c70d:	89 e5                	mov    %esp,%ebp
 898c70f:	83 ec 18             	sub    $0x18,%esp
 898c712:	8b 55 0c             	mov    0xc(%ebp),%edx
 898c715:	8b 45 08             	mov    0x8(%ebp),%eax
 898c718:	89 54 24 04          	mov    %edx,0x4(%esp)
 898c71c:	89 04 24             	mov    %eax,(%esp)
 898c71f:	e8 0c 41 9f ff       	call   8380830 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EEaSERKS3_>
 898c724:	8b 45 0c             	mov    0xc(%ebp),%eax
 898c727:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 898c72b:	8b 45 08             	mov    0x8(%ebp),%eax
 898c72e:	88 50 0c             	mov    %dl,0xc(%eax)
 898c731:	8b 45 0c             	mov    0xc(%ebp),%eax
 898c734:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 898c738:	8b 45 08             	mov    0x8(%ebp),%eax
 898c73b:	88 50 0d             	mov    %dl,0xd(%eax)
 898c73e:	8b 45 0c             	mov    0xc(%ebp),%eax
 898c741:	8d 50 10             	lea    0x10(%eax),%edx
 898c744:	8b 45 08             	mov    0x8(%ebp),%eax
 898c747:	83 c0 10             	add    $0x10,%eax
 898c74a:	89 54 24 04          	mov    %edx,0x4(%esp)
 898c74e:	89 04 24             	mov    %eax,(%esp)
 898c751:	e8 f6 3b 9f ff       	call   838034c <_ZNSt6vectorIS_IfSaIfEESaIS1_EEaSERKS3_>
 898c756:	8b 45 08             	mov    0x8(%ebp),%eax
 898c759:	c9                   	leave
 898c75a:	c3                   	ret

```

```c
// EquipmentParameterInfo::._119::operator= @ 0x898c70c

vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>> *
_ZN22EquipmentParameterInfo5__119aSERKS0_
          (vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
           *param_1,vector *param_2)

{
  std::
  vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>::
  operator=(param_1,param_2);
  param_1[0xc] = *(vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
                   *)(param_2 + 0xc);
  param_1[0xd] = *(vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
                   *)(param_2 + 0xd);
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::operator=((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
               *)(param_1 + 0x10),param_2 + 0x10);
  return param_1;
}

```

---

## ~._119

```asm
// === 088fd8ca EquipmentParameterInfo::._119::~._119  [0x088fd8ca-0x88fd90f] ===
 88fd8ca:	55                   	push   %ebp
 88fd8cb:	89 e5                	mov    %esp,%ebp
 88fd8cd:	56                   	push   %esi
 88fd8ce:	53                   	push   %ebx
 88fd8cf:	83 ec 10             	sub    $0x10,%esp
 88fd8d2:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd8d5:	83 c0 10             	add    $0x10,%eax
 88fd8d8:	89 04 24             	mov    %eax,(%esp)
 88fd8db:	e8 32 20 a8 ff       	call   837f912 <_ZNSt6vectorIS_IfSaIfEESaIS1_EED1Ev>
 88fd8e0:	eb 1b                	jmp    88fd8fd <_ZN22EquipmentParameterInfo5._119D1Ev+0x33>
 88fd8e2:	89 d3                	mov    %edx,%ebx
 88fd8e4:	89 c6                	mov    %eax,%esi
 88fd8e6:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd8e9:	89 04 24             	mov    %eax,(%esp)
 88fd8ec:	e8 63 f5 01 00       	call   891ce54 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EED1Ev>
 88fd8f1:	89 f0                	mov    %esi,%eax
 88fd8f3:	89 da                	mov    %ebx,%edx
 88fd8f5:	89 04 24             	mov    %eax,(%esp)
 88fd8f8:	e8 53 5e 1e 00       	call   8ae3750 <_Unwind_Resume>
 88fd8fd:	8b 45 08             	mov    0x8(%ebp),%eax
 88fd900:	89 04 24             	mov    %eax,(%esp)
 88fd903:	e8 4c f5 01 00       	call   891ce54 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EED1Ev>
 88fd908:	83 c4 10             	add    $0x10,%esp
 88fd90b:	5b                   	pop    %ebx
 88fd90c:	5e                   	pop    %esi
 88fd90d:	5d                   	pop    %ebp
 88fd90e:	c3                   	ret
 88fd90f:	90                   	nop

```

```c
// EquipmentParameterInfo::._119::~._119 @ 0x88fd8ca

/* EquipmentParameterInfo::._119::~._119() */

void __thiscall EquipmentParameterInfo::._119::~__119(__119 *this)

{
                    /* try { // try from 088fd8db to 088fd8df has its CatchHandler @ 088fd8e2 */
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x10));
  std::
  vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>::
  ~vector((vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
           *)this);
  return;
}

```

---

## ~._119_0898c6c6

```asm
// === 0898c6c6 EquipmentParameterInfo::._119::~._119  [0x0898c6c6-0x898c70b] ===
 898c6c6:	55                   	push   %ebp
 898c6c7:	89 e5                	mov    %esp,%ebp
 898c6c9:	56                   	push   %esi
 898c6ca:	53                   	push   %ebx
 898c6cb:	83 ec 10             	sub    $0x10,%esp
 898c6ce:	8b 45 08             	mov    0x8(%ebp),%eax
 898c6d1:	83 c0 10             	add    $0x10,%eax
 898c6d4:	89 04 24             	mov    %eax,(%esp)
 898c6d7:	e8 36 32 9f ff       	call   837f912 <_ZNSt6vectorIS_IfSaIfEESaIS1_EED1Ev>
 898c6dc:	eb 1b                	jmp    898c6f9 <_ZN22EquipmentParameterInfo5._119D1Ev+0x33>
 898c6de:	89 d3                	mov    %edx,%ebx
 898c6e0:	89 c6                	mov    %eax,%esi
 898c6e2:	8b 45 08             	mov    0x8(%ebp),%eax
 898c6e5:	89 04 24             	mov    %eax,(%esp)
 898c6e8:	e8 67 07 f9 ff       	call   891ce54 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EED1Ev>
 898c6ed:	89 f0                	mov    %esi,%eax
 898c6ef:	89 da                	mov    %ebx,%edx
 898c6f1:	89 04 24             	mov    %eax,(%esp)
 898c6f4:	e8 57 70 15 00       	call   8ae3750 <_Unwind_Resume>
 898c6f9:	8b 45 08             	mov    0x8(%ebp),%eax
 898c6fc:	89 04 24             	mov    %eax,(%esp)
 898c6ff:	e8 50 07 f9 ff       	call   891ce54 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EED1Ev>
 898c704:	83 c4 10             	add    $0x10,%esp
 898c707:	5b                   	pop    %ebx
 898c708:	5e                   	pop    %esi
 898c709:	5d                   	pop    %ebp
 898c70a:	c3                   	ret
 898c70b:	90                   	nop

```

```c
// EquipmentParameterInfo::._119::~._119 @ 0x898c6c6

/* EquipmentParameterInfo::._119::~._119() */

void __thiscall EquipmentParameterInfo::._119::~__119(__119 *this)

{
                    /* try { // try from 0898c6d7 to 0898c6db has its CatchHandler @ 0898c6de */
  std::
  vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
  ::~vector((vector<std::vector<float,std::allocator<float>>,std::allocator<std::vector<float,std::allocator<float>>>>
             *)(this + 0x10));
  std::
  vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>::
  ~vector((vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>>
           *)this);
  return;
}

```

