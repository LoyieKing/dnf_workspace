# EquipmentParameterInfo__._159

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## operator=

```asm
// === 08348024 EquipmentParameterInfo::._159::operator=  [0x08348024-0x8348072] ===
 8348024:	55                   	push   %ebp
 8348025:	89 e5                	mov    %esp,%ebp
 8348027:	83 ec 18             	sub    $0x18,%esp
 834802a:	8b 55 0c             	mov    0xc(%ebp),%edx
 834802d:	8b 45 08             	mov    0x8(%ebp),%eax
 8348030:	89 54 24 04          	mov    %edx,0x4(%esp)
 8348034:	89 04 24             	mov    %eax,(%esp)
 8348037:	e8 f4 87 03 00       	call   8380830 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EEaSERKS3_>
 834803c:	8b 45 0c             	mov    0xc(%ebp),%eax
 834803f:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 8348043:	8b 45 08             	mov    0x8(%ebp),%eax
 8348046:	88 50 0c             	mov    %dl,0xc(%eax)
 8348049:	8b 45 0c             	mov    0xc(%ebp),%eax
 834804c:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 8348050:	8b 45 08             	mov    0x8(%ebp),%eax
 8348053:	88 50 0d             	mov    %dl,0xd(%eax)
 8348056:	8b 45 0c             	mov    0xc(%ebp),%eax
 8348059:	8d 50 10             	lea    0x10(%eax),%edx
 834805c:	8b 45 08             	mov    0x8(%ebp),%eax
 834805f:	83 c0 10             	add    $0x10,%eax
 8348062:	89 54 24 04          	mov    %edx,0x4(%esp)
 8348066:	89 04 24             	mov    %eax,(%esp)
 8348069:	e8 de 82 03 00       	call   838034c <_ZNSt6vectorIS_IfSaIfEESaIS1_EEaSERKS3_>
 834806e:	8b 45 08             	mov    0x8(%ebp),%eax
 8348071:	c9                   	leave
 8348072:	c3                   	ret

```

```c
// EquipmentParameterInfo::._159::operator= @ 0x8348024

vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>> *
_ZN22EquipmentParameterInfo5__159aSERKS0_
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

## operator=_0861c9b8

```asm
// === 0861c9b8 EquipmentParameterInfo::._159::operator=  [0x0861c9b8-0x861ca06] ===
 861c9b8:	55                   	push   %ebp
 861c9b9:	89 e5                	mov    %esp,%ebp
 861c9bb:	83 ec 18             	sub    $0x18,%esp
 861c9be:	8b 55 0c             	mov    0xc(%ebp),%edx
 861c9c1:	8b 45 08             	mov    0x8(%ebp),%eax
 861c9c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 861c9c8:	89 04 24             	mov    %eax,(%esp)
 861c9cb:	e8 60 3e d6 ff       	call   8380830 <_ZNSt6vectorIN22EquipmentParameterInfo11SASPROPERTYESaIS1_EEaSERKS3_>
 861c9d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c9d3:	0f b6 50 0c          	movzbl 0xc(%eax),%edx
 861c9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 861c9da:	88 50 0c             	mov    %dl,0xc(%eax)
 861c9dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c9e0:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 861c9e4:	8b 45 08             	mov    0x8(%ebp),%eax
 861c9e7:	88 50 0d             	mov    %dl,0xd(%eax)
 861c9ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c9ed:	8d 50 10             	lea    0x10(%eax),%edx
 861c9f0:	8b 45 08             	mov    0x8(%ebp),%eax
 861c9f3:	83 c0 10             	add    $0x10,%eax
 861c9f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 861c9fa:	89 04 24             	mov    %eax,(%esp)
 861c9fd:	e8 4a 39 d6 ff       	call   838034c <_ZNSt6vectorIS_IfSaIfEESaIS1_EEaSERKS3_>
 861ca02:	8b 45 08             	mov    0x8(%ebp),%eax
 861ca05:	c9                   	leave
 861ca06:	c3                   	ret

```

```c
// EquipmentParameterInfo::._159::operator= @ 0x861c9b8

vector<EquipmentParameterInfo::SASPROPERTY,std::allocator<EquipmentParameterInfo::SASPROPERTY>> *
_ZN22EquipmentParameterInfo5__159aSERKS0_
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

