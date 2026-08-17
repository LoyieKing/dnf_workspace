# GenuineDamageUpgradeTable

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## getEffectInfo

```asm
// === 08912d10 GenuineDamageUpgradeTable::getEffectInfo  [0x08912d10-0x8912e46] ===
 8912d10:	55                   	push   %ebp
 8912d11:	89 e5                	mov    %esp,%ebp
 8912d13:	53                   	push   %ebx
 8912d14:	83 ec 24             	sub    $0x24,%esp
 8912d17:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8912d1a:	b8 b0 71 4f 09       	mov    $0x94f71b0,%eax
 8912d1f:	0f b6 00             	movzbl (%eax),%eax
 8912d22:	84 c0                	test   %al,%al
 8912d24:	75 2d                	jne    8912d53 <_ZN25GenuineDamageUpgradeTable13getEffectInfoEi+0x43>
 8912d26:	c7 04 24 b0 71 4f 09 	movl   $0x94f71b0,(%esp)
 8912d2d:	e8 fe 25 e1 ff       	call   8725330 <__cxa_guard_acquire>
 8912d32:	85 c0                	test   %eax,%eax
 8912d34:	0f 95 c0             	setne  %al
 8912d37:	84 c0                	test   %al,%al
 8912d39:	74 18                	je     8912d53 <_ZN25GenuineDamageUpgradeTable13getEffectInfoEi+0x43>
 8912d3b:	c7 04 24 d8 72 4f 09 	movl   $0x94f72d8,(%esp)
 8912d42:	e8 d7 8d 00 00       	call   891bb1e <_ZN21OutLineEFFECTInfoTempC1Ev>
 8912d47:	c7 04 24 b0 71 4f 09 	movl   $0x94f71b0,(%esp)
 8912d4e:	e8 fd 24 e1 ff       	call   8725250 <__cxa_guard_release>
 8912d53:	8b 45 0c             	mov    0xc(%ebp),%eax
 8912d56:	8b 50 04             	mov    0x4(%eax),%edx
 8912d59:	8b 45 10             	mov    0x10(%ebp),%eax
 8912d5c:	39 c2                	cmp    %eax,%edx
 8912d5e:	7d 24                	jge    8912d84 <_ZN25GenuineDamageUpgradeTable13getEffectInfoEi+0x74>
 8912d60:	a1 d8 72 4f 09       	mov    0x94f72d8,%eax
 8912d65:	89 03                	mov    %eax,(%ebx)
 8912d67:	a1 dc 72 4f 09       	mov    0x94f72dc,%eax
 8912d6c:	89 43 04             	mov    %eax,0x4(%ebx)
 8912d6f:	a1 e0 72 4f 09       	mov    0x94f72e0,%eax
 8912d74:	89 43 08             	mov    %eax,0x8(%ebx)
 8912d77:	a1 e4 72 4f 09       	mov    0x94f72e4,%eax
 8912d7c:	89 43 0c             	mov    %eax,0xc(%ebx)
 8912d7f:	e9 ba 00 00 00       	jmp    8912e3e <_ZN25GenuineDamageUpgradeTable13getEffectInfoEi+0x12e>
 8912d84:	8b 45 0c             	mov    0xc(%ebp),%eax
 8912d87:	8d 88 70 01 00 00    	lea    0x170(%eax),%ecx
 8912d8d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8912d90:	8d 55 10             	lea    0x10(%ebp),%edx
 8912d93:	89 54 24 08          	mov    %edx,0x8(%esp)
 8912d97:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8912d9b:	89 04 24             	mov    %eax,(%esp)
 8912d9e:	e8 13 e7 00 00       	call   89214b6 <_ZNSt3mapIi21OutLineEFFECTInfoTempSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8912da3:	83 ec 04             	sub    $0x4,%esp
 8912da6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8912da9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912dad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8912db0:	89 04 24             	mov    %eax,(%esp)
 8912db3:	e8 2a e7 00 00       	call   89214e2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi21OutLineEFFECTInfoTempEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 8912db8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8912dbb:	8d 90 70 01 00 00    	lea    0x170(%eax),%edx
 8912dc1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8912dc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8912dc8:	89 04 24             	mov    %eax,(%esp)
 8912dcb:	e8 22 e7 00 00       	call   89214f2 <_ZNSt3mapIi21OutLineEFFECTInfoTempSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8912dd0:	83 ec 04             	sub    $0x4,%esp
 8912dd3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8912dd6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912dda:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8912ddd:	89 04 24             	mov    %eax,(%esp)
 8912de0:	e8 fd e6 00 00       	call   89214e2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi21OutLineEFFECTInfoTempEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 8912de5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8912de8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912dec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8912def:	89 04 24             	mov    %eax,(%esp)
 8912df2:	e8 21 e7 00 00       	call   8921518 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi21OutLineEFFECTInfoTempEEneERKS4_>
 8912df7:	84 c0                	test   %al,%al
 8912df9:	74 24                	je     8912e1f <_ZN25GenuineDamageUpgradeTable13getEffectInfoEi+0x10f>
 8912dfb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8912dfe:	89 04 24             	mov    %eax,(%esp)
 8912e01:	e8 26 e7 00 00       	call   892152c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi21OutLineEFFECTInfoTempEEptEv>
 8912e06:	8b 50 04             	mov    0x4(%eax),%edx
 8912e09:	89 13                	mov    %edx,(%ebx)
 8912e0b:	8b 50 08             	mov    0x8(%eax),%edx
 8912e0e:	89 53 04             	mov    %edx,0x4(%ebx)
 8912e11:	8b 50 0c             	mov    0xc(%eax),%edx
 8912e14:	89 53 08             	mov    %edx,0x8(%ebx)
 8912e17:	8b 40 10             	mov    0x10(%eax),%eax
 8912e1a:	89 43 0c             	mov    %eax,0xc(%ebx)
 8912e1d:	eb 1f                	jmp    8912e3e <_ZN25GenuineDamageUpgradeTable13getEffectInfoEi+0x12e>
 8912e1f:	a1 d8 72 4f 09       	mov    0x94f72d8,%eax
 8912e24:	89 03                	mov    %eax,(%ebx)
 8912e26:	a1 dc 72 4f 09       	mov    0x94f72dc,%eax
 8912e2b:	89 43 04             	mov    %eax,0x4(%ebx)
 8912e2e:	a1 e0 72 4f 09       	mov    0x94f72e0,%eax
 8912e33:	89 43 08             	mov    %eax,0x8(%ebx)
 8912e36:	a1 e4 72 4f 09       	mov    0x94f72e4,%eax
 8912e3b:	89 43 0c             	mov    %eax,0xc(%ebx)
 8912e3e:	89 d8                	mov    %ebx,%eax
 8912e40:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8912e43:	c9                   	leave
 8912e44:	c2 04 00             	ret    $0x4

```

```c
// GenuineDamageUpgradeTable::getEffectInfo @ 0x8912d10

/* GenuineDamageUpgradeTable::getEffectInfo(int) */

int GenuineDamageUpgradeTable::getEffectInfo(int param_1)

{
  char cVar1;
  int iVar2;
  int in_stack_00000008;
  int in_stack_0000000c;
  _Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>> local_1c [4];
  _Rb_tree_iterator local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>> local_14 [4];
  map<int,OutLineEFFECTInfoTemp,std::less<int>,std::allocator<std::pair<int_const,OutLineEFFECTInfoTemp>>>
  local_10 [8];
  
  if (getEffectInfo(int)::temp == '\0') {
    iVar2 = __cxa_guard_acquire(&getEffectInfo(int)::temp);
    if (iVar2 != 0) {
      OutLineEFFECTInfoTemp::OutLineEFFECTInfoTemp
                ((OutLineEFFECTInfoTemp *)&getEffectInfo(int)::temp);
      __cxa_guard_release(&getEffectInfo(int)::temp);
    }
  }
  if (*(int *)(in_stack_00000008 + 4) < in_stack_0000000c) {
    *(undefined4 *)param_1 = getEffectInfo(int)::temp;
    *(undefined4 *)(param_1 + 4) = DAT_094f72dc;
    *(undefined4 *)(param_1 + 8) = DAT_094f72e0;
    *(undefined4 *)(param_1 + 0xc) = DAT_094f72e4;
  }
  else {
    std::
    map<int,OutLineEFFECTInfoTemp,std::less<int>,std::allocator<std::pair<int_const,OutLineEFFECTInfoTemp>>>
    ::find((int *)local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::
    _Rb_tree_const_iterator(local_1c,local_18);
    std::
    map<int,OutLineEFFECTInfoTemp,std::less<int>,std::allocator<std::pair<int_const,OutLineEFFECTInfoTemp>>>
    ::end(local_10);
    std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::
    _Rb_tree_const_iterator(local_14,(_Rb_tree_iterator *)local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::operator!=
                      (local_1c,(_Rb_tree_const_iterator *)local_14);
    if (cVar1 == '\0') {
      *(undefined4 *)param_1 = getEffectInfo(int)::temp;
      *(undefined4 *)(param_1 + 4) = DAT_094f72dc;
      *(undefined4 *)(param_1 + 8) = DAT_094f72e0;
      *(undefined4 *)(param_1 + 0xc) = DAT_094f72e4;
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OutLineEFFECTInfoTemp>>::operator->
                        (local_1c);
      *(undefined4 *)param_1 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar2 + 8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar2 + 0xc);
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    }
  }
  return param_1;
}

```

---

## getGenuineUpgradeDamage

```asm
// === 08912a54 GenuineDamageUpgradeTable::getGenuineUpgradeDamage  [0x08912a54-0x8912b87] ===
 8912a54:	55                   	push   %ebp
 8912a55:	89 e5                	mov    %esp,%ebp
 8912a57:	53                   	push   %ebx
 8912a58:	83 ec 34             	sub    $0x34,%esp
 8912a5b:	8b 45 20             	mov    0x20(%ebp),%eax
 8912a5e:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8912a61:	b8 00 00 00 00       	mov    $0x0,%eax
 8912a66:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8912a69:	d9 05 b0 4f 3f 09    	flds   0x93f4fb0
 8912a6f:	d9 05 b4 4f 3f 09    	flds   0x93f4fb4
 8912a75:	de c9                	fmulp  %st,%st(1)
 8912a77:	d9 5d f4             	fstps  -0xc(%ebp)
 8912a7a:	8b 45 18             	mov    0x18(%ebp),%eax
 8912a7d:	85 c0                	test   %eax,%eax
 8912a7f:	75 0a                	jne    8912a8b <_ZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiib+0x37>
 8912a81:	b8 00 00 00 00       	mov    $0x0,%eax
 8912a86:	e9 f7 00 00 00       	jmp    8912b82 <_ZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiib+0x12e>
 8912a8b:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8912a8f:	74 65                	je     8912af6 <_ZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiib+0xa2>
 8912a91:	8b 45 08             	mov    0x8(%ebp),%eax
 8912a94:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 8912a9a:	8d 45 18             	lea    0x18(%ebp),%eax
 8912a9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912aa1:	89 14 24             	mov    %edx,(%esp)
 8912aa4:	e8 13 e9 00 00       	call   89213bc <_ZNSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEEixERS4_>
 8912aa9:	8b 40 04             	mov    0x4(%eax),%eax
 8912aac:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8912aaf:	db 45 dc             	fildl  -0x24(%ebp)
 8912ab2:	db 45 1c             	fildl  0x1c(%ebp)
 8912ab5:	8b 45 08             	mov    0x8(%ebp),%eax
 8912ab8:	8b 00                	mov    (%eax),%eax
 8912aba:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8912abd:	db 45 dc             	fildl  -0x24(%ebp)
 8912ac0:	de f9                	fdivrp %st,%st(1)
 8912ac2:	d8 45 f4             	fadds  -0xc(%ebp)
 8912ac5:	de c9                	fmulp  %st,%st(1)
 8912ac7:	8b 55 10             	mov    0x10(%ebp),%edx
 8912aca:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8912acd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8912ad0:	89 d0                	mov    %edx,%eax
 8912ad2:	01 c0                	add    %eax,%eax
 8912ad4:	01 d0                	add    %edx,%eax
 8912ad6:	01 c0                	add    %eax,%eax
 8912ad8:	01 d8                	add    %ebx,%eax
 8912ada:	83 c0 0c             	add    $0xc,%eax
 8912add:	d9 44 81 08          	flds   0x8(%ecx,%eax,4)
 8912ae1:	de c9                	fmulp  %st,%st(1)
 8912ae3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8912ae6:	8b 45 08             	mov    0x8(%ebp),%eax
 8912ae9:	83 c2 08             	add    $0x8,%edx
 8912aec:	d9 04 90             	flds   (%eax,%edx,4)
 8912aef:	de c9                	fmulp  %st,%st(1)
 8912af1:	d9 5d f0             	fstps  -0x10(%ebp)
 8912af4:	eb 62                	jmp    8912b58 <_ZN25GenuineDamageUpgradeTable23getGenuineUpgradeDamageE11ENUM_RARITYiiiib+0x104>
 8912af6:	8b 45 08             	mov    0x8(%ebp),%eax
 8912af9:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 8912aff:	8d 45 18             	lea    0x18(%ebp),%eax
 8912b02:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912b06:	89 14 24             	mov    %edx,(%esp)
 8912b09:	e8 ae e8 00 00       	call   89213bc <_ZNSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEEixERS4_>
 8912b0e:	8b 00                	mov    (%eax),%eax
 8912b10:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8912b13:	db 45 dc             	fildl  -0x24(%ebp)
 8912b16:	db 45 1c             	fildl  0x1c(%ebp)
 8912b19:	8b 45 08             	mov    0x8(%ebp),%eax
 8912b1c:	8b 00                	mov    (%eax),%eax
 8912b1e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8912b21:	db 45 dc             	fildl  -0x24(%ebp)
 8912b24:	de f9                	fdivrp %st,%st(1)
 8912b26:	d8 45 f4             	fadds  -0xc(%ebp)
 8912b29:	de c9                	fmulp  %st,%st(1)
 8912b2b:	8b 55 10             	mov    0x10(%ebp),%edx
 8912b2e:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8912b31:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8912b34:	89 d0                	mov    %edx,%eax
 8912b36:	01 c0                	add    %eax,%eax
 8912b38:	01 d0                	add    %edx,%eax
 8912b3a:	01 c0                	add    %eax,%eax
 8912b3c:	01 d8                	add    %ebx,%eax
 8912b3e:	83 c0 0c             	add    $0xc,%eax
 8912b41:	d9 44 81 08          	flds   0x8(%ecx,%eax,4)
 8912b45:	de c9                	fmulp  %st,%st(1)
 8912b47:	8b 55 0c             	mov    0xc(%ebp),%edx
 8912b4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8912b4d:	83 c2 08             	add    $0x8,%edx
 8912b50:	d9 04 90             	flds   (%eax,%edx,4)
 8912b53:	de c9                	fmulp  %st,%st(1)
 8912b55:	d9 5d f0             	fstps  -0x10(%ebp)
 8912b58:	d9 45 f0             	flds   -0x10(%ebp)
 8912b5b:	d9 05 e8 22 e1 08    	flds   0x8e122e8
 8912b61:	de c1                	faddp  %st,%st(1)
 8912b63:	d9 5d f0             	fstps  -0x10(%ebp)
 8912b66:	d9 45 f0             	flds   -0x10(%ebp)
 8912b69:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8912b6c:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8912b70:	b4 0c                	mov    $0xc,%ah
 8912b72:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 8912b76:	d9 6d e0             	fldcw  -0x20(%ebp)
 8912b79:	db 5d dc             	fistpl -0x24(%ebp)
 8912b7c:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8912b7f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8912b82:	83 c4 34             	add    $0x34,%esp
 8912b85:	5b                   	pop    %ebx
 8912b86:	5d                   	pop    %ebp
 8912b87:	c3                   	ret

```

```c
// GenuineDamageUpgradeTable::getGenuineUpgradeDamage @ 0x8912a54

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenuineDamageUpgradeTable::getGenuineUpgradeDamage(ENUM_RARITY, int, int, int, int, bool) */

int __thiscall
GenuineDamageUpgradeTable::getGenuineUpgradeDamage
          (GenuineDamageUpgradeTable *this,int param_2,int param_3,int param_4,int param_5,
          int param_6,undefined4 param_7)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  float local_14;
  
  fVar1 = getGenuineUpgradeDamage(ENUM_RARITY,int,int,int,int,bool)::two *
          getGenuineUpgradeDamage(ENUM_RARITY,int,int,int,int,bool)::pointFive;
  if (param_5 == 0) {
    iVar2 = 0;
  }
  else {
    if ((char)param_7 == '\0') {
      piVar3 = (int *)std::
                      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
                      ::operator[]((map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
                                    *)(this + 0x158),&param_5);
      local_14 = *(float *)(this + (param_2 + 8) * 4) *
                 *(float *)(this + (param_3 * 6 + param_4) * 4 + 0x38) *
                 ((float)param_6 / (float)*(int *)this + fVar1) * (float)*piVar3;
    }
    else {
      iVar2 = std::
              map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
              ::operator[]((map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
                            *)(this + 0x158),&param_5);
      local_14 = *(float *)(this + (param_2 + 8) * 4) *
                 *(float *)(this + (param_3 * 6 + param_4) * 4 + 0x38) *
                 ((float)param_6 / (float)*(int *)this + fVar1) * (float)*(int *)(iVar2 + 4);
    }
    iVar2 = (int)ROUND(_DAT_08e122e8 + local_14);
  }
  return iVar2;
}

```

---

## getGenuineUpgradeMaterialCnt

```asm
// === 08912b88 GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt  [0x08912b88-0x8912d0f] ===
 8912b88:	55                   	push   %ebp
 8912b89:	89 e5                	mov    %esp,%ebp
 8912b8b:	83 ec 68             	sub    $0x68,%esp
 8912b8e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8912b91:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8912b94:	b8 95 bf d6 33       	mov    $0x33d6bf95,%eax
 8912b99:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8912b9c:	83 7d 14 0a          	cmpl   $0xa,0x14(%ebp)
 8912ba0:	74 0a                	je     8912bac <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x24>
 8912ba2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8912ba7:	e9 62 01 00 00       	jmp    8912d0e <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x186>
 8912bac:	80 7d c4 63          	cmpb   $0x63,-0x3c(%ebp)
 8912bb0:	76 0a                	jbe    8912bbc <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x34>
 8912bb2:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8912bb7:	e9 52 01 00 00       	jmp    8912d0e <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x186>
 8912bbc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8912bc3:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 8912bc8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8912bcb:	8b 55 18             	mov    0x18(%ebp),%edx
 8912bce:	8b 45 08             	mov    0x8(%ebp),%eax
 8912bd1:	d9 44 90 08          	flds   0x8(%eax,%edx,4)
 8912bd5:	d9 45 f4             	flds   -0xc(%ebp)
 8912bd8:	de c9                	fmulp  %st,%st(1)
 8912bda:	d9 5d f4             	fstps  -0xc(%ebp)
 8912bdd:	8b 45 10             	mov    0x10(%ebp),%eax
 8912be0:	83 c0 01             	add    $0x1,%eax
 8912be3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8912be6:	8b 45 08             	mov    0x8(%ebp),%eax
 8912be9:	8d 88 58 01 00 00    	lea    0x158(%eax),%ecx
 8912bef:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8912bf2:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8912bf5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8912bf9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8912bfd:	89 04 24             	mov    %eax,(%esp)
 8912c00:	e8 35 c5 80 ff       	call   811f13a <_ZNKSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8912c05:	83 ec 04             	sub    $0x4,%esp
 8912c08:	8b 45 08             	mov    0x8(%ebp),%eax
 8912c0b:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 8912c11:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8912c14:	89 54 24 04          	mov    %edx,0x4(%esp)
 8912c18:	89 04 24             	mov    %eax,(%esp)
 8912c1b:	e8 46 c5 80 ff       	call   811f166 <_ZNKSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8912c20:	83 ec 04             	sub    $0x4,%esp
 8912c23:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8912c26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912c2a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8912c2d:	89 04 24             	mov    %eax,(%esp)
 8912c30:	e8 57 c5 80 ff       	call   811f18c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi24GenuineDamageUpgradeInfoEEeqERKS4_>
 8912c35:	84 c0                	test   %al,%al
 8912c37:	74 0a                	je     8912c43 <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0xbb>
 8912c39:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8912c3e:	e9 cb 00 00 00       	jmp    8912d0e <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x186>
 8912c43:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8912c46:	89 04 24             	mov    %eax,(%esp)
 8912c49:	e8 52 c5 80 ff       	call   811f1a0 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi24GenuineDamageUpgradeInfoEEptEv>
 8912c4e:	d9 40 10             	flds   0x10(%eax)
 8912c51:	d9 45 f4             	flds   -0xc(%ebp)
 8912c54:	de c9                	fmulp  %st,%st(1)
 8912c56:	d9 5d f4             	fstps  -0xc(%ebp)
 8912c59:	d9 45 f4             	flds   -0xc(%ebp)
 8912c5c:	d9 05 f4 22 e1 08    	flds   0x8e122f4
 8912c62:	de c1                	faddp  %st,%st(1)
 8912c64:	d9 5d f4             	fstps  -0xc(%ebp)
 8912c67:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8912c6b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8912c6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8912c71:	8d 88 40 01 00 00    	lea    0x140(%eax),%ecx
 8912c77:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8912c7a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8912c7d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8912c81:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8912c85:	89 04 24             	mov    %eax,(%esp)
 8912c88:	e8 39 c4 80 ff       	call   811f0c6 <_ZNKSt3mapIi32GenuineDamageUpgradeMaterialInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8912c8d:	83 ec 04             	sub    $0x4,%esp
 8912c90:	8b 45 08             	mov    0x8(%ebp),%eax
 8912c93:	8d 90 58 01 00 00    	lea    0x158(%eax),%edx
 8912c99:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8912c9c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8912ca0:	89 04 24             	mov    %eax,(%esp)
 8912ca3:	e8 be c4 80 ff       	call   811f166 <_ZNKSt3mapIi24GenuineDamageUpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8912ca8:	83 ec 04             	sub    $0x4,%esp
 8912cab:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8912cae:	89 44 24 04          	mov    %eax,0x4(%esp)
 8912cb2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8912cb5:	89 04 24             	mov    %eax,(%esp)
 8912cb8:	e8 cf c4 80 ff       	call   811f18c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi24GenuineDamageUpgradeInfoEEeqERKS4_>
 8912cbd:	84 c0                	test   %al,%al
 8912cbf:	74 07                	je     8912cc8 <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x140>
 8912cc1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8912cc6:	eb 46                	jmp    8912d0e <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x186>
 8912cc8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8912ccb:	89 04 24             	mov    %eax,(%esp)
 8912cce:	e8 59 c4 80 ff       	call   811f12c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi32GenuineDamageUpgradeMaterialInfoEEptEv>
 8912cd3:	8b 40 08             	mov    0x8(%eax),%eax
 8912cd6:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8912cd9:	db 45 c0             	fildl  -0x40(%ebp)
 8912cdc:	d8 4d f4             	fmuls  -0xc(%ebp)
 8912cdf:	d9 7d be             	fnstcw -0x42(%ebp)
 8912ce2:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 8912ce6:	b4 0c                	mov    $0xc,%ah
 8912ce8:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 8912cec:	d9 6d bc             	fldcw  -0x44(%ebp)
 8912cef:	df 7d b0             	fistpll -0x50(%ebp)
 8912cf2:	d9 6d be             	fldcw  -0x42(%ebp)
 8912cf5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8912cf8:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8912cfb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8912cfe:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8912d02:	75 07                	jne    8912d0b <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x183>
 8912d04:	b8 01 00 00 00       	mov    $0x1,%eax
 8912d09:	eb 03                	jmp    8912d0e <_ZNK25GenuineDamageUpgradeTable28getGenuineUpgradeMaterialCntEhi18ENUM_EQUIPMENTTYPE11ENUM_RARITY+0x186>
 8912d0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8912d0e:	c9                   	leave
 8912d0f:	c3                   	ret

```

```c
// GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt @ 0x8912b88

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt(unsigned char, int, ENUM_EQUIPMENTTYPE,
   ENUM_RARITY) const */

int __thiscall
GenuineDamageUpgradeTable::getGenuineUpgradeMaterialCnt
          (GenuineDamageUpgradeTable *this,byte param_1,int param_2,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int local_54;
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>> local_30 [4];
  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>> local_2c [4];
  int local_28;
  map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
  local_24 [4];
  uint local_20;
  map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
  local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  float local_10;
  
  local_18 = 0x33d6bf95;
  if (param_4 == 10) {
    if (param_1 < 100) {
      local_14 = 0;
      local_10 = *(float *)(this + param_5 * 4 + 8) * 1.0;
      local_28 = param_2 + 1;
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::find((int *)local_2c);
      std::
      map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
      ::end(local_24);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
              operator==(local_2c,(_Rb_tree_const_iterator *)local_24);
      if (cVar1 == '\0') {
        iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
                operator->(local_2c);
        local_10 = _DAT_08e122f4 + local_10 * *(float *)(iVar2 + 0x10);
        local_20 = (uint)param_1;
        std::
        map<int,GenuineDamageUpgradeMaterialInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>>
        ::find((int *)local_30);
        std::
        map<int,GenuineDamageUpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,GenuineDamageUpgradeInfo>>>
        ::end(local_1c);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeInfo>>::
                operator==(local_2c,(_Rb_tree_const_iterator *)local_1c);
        if (cVar1 == '\0') {
          iVar2 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,GenuineDamageUpgradeMaterialInfo>>::
                  operator->(local_30);
          local_54 = (int)(longlong)ROUND((float)*(int *)(iVar2 + 8) * local_10);
          if (local_54 == 0) {
            local_54 = 1;
          }
        }
        else {
          local_54 = -1;
        }
      }
      else {
        local_54 = -1;
      }
    }
    else {
      local_54 = -1;
    }
  }
  else {
    local_54 = -1;
  }
  return local_54;
}

```

