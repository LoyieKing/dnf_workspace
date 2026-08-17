# random_option__CRandomOptionItemHandle

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 20

---

## CRandomOptionItemHandle

```asm
// === 085f0d64 random_option::CRandomOptionItemHandle::CRandomOptionItemHandle  [0x085f0d64-0x85f0e45] ===
 85f0d64:	55                   	push   %ebp
 85f0d65:	89 e5                	mov    %esp,%ebp
 85f0d67:	57                   	push   %edi
 85f0d68:	56                   	push   %esi
 85f0d69:	53                   	push   %ebx
 85f0d6a:	83 ec 2c             	sub    $0x2c,%esp
 85f0d6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0d70:	c7 00 a0 11 cd 08    	movl   $0x8cd11a0,(%eax)
 85f0d76:	c7 04 24 28 7f 00 00 	movl   $0x7f28,(%esp)
 85f0d7d:	e8 3e 20 13 00       	call   8722dc0 <_Znaj>
 85f0d82:	89 c3                	mov    %eax,%ebx
 85f0d84:	89 d8                	mov    %ebx,%eax
 85f0d86:	89 c6                	mov    %eax,%esi
 85f0d88:	bf 0c 00 00 00       	mov    $0xc,%edi
 85f0d8d:	eb 11                	jmp    85f0da0 <_ZN13random_option23CRandomOptionItemHandleC1Ev+0x3c>
 85f0d8f:	89 34 24             	mov    %esi,(%esp)
 85f0d92:	e8 b1 91 ae ff       	call   80d9f48 <_ZN7CMTRandC1Ev>
 85f0d97:	81 c6 c8 09 00 00    	add    $0x9c8,%esi
 85f0d9d:	83 ef 01             	sub    $0x1,%edi
 85f0da0:	83 ff ff             	cmp    $0xffffffff,%edi
 85f0da3:	0f 95 c0             	setne  %al
 85f0da6:	84 c0                	test   %al,%al
 85f0da8:	75 e5                	jne    85f0d8f <_ZN13random_option23CRandomOptionItemHandleC1Ev+0x2b>
 85f0daa:	89 da                	mov    %ebx,%edx
 85f0dac:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0daf:	89 50 04             	mov    %edx,0x4(%eax)
 85f0db2:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 85f0db9:	e8 92 c9 a8 ff       	call   807d750 <time@plt>
 85f0dbe:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85f0dc1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f0dc8:	eb 3d                	jmp    85f0e07 <_ZN13random_option23CRandomOptionItemHandleC1Ev+0xa3>
 85f0dca:	89 d6                	mov    %edx,%esi
 85f0dcc:	89 c7                	mov    %eax,%edi
 85f0dce:	89 1c 24             	mov    %ebx,(%esp)
 85f0dd1:	e8 da 3d 13 00       	call   8724bb0 <_ZdaPv>
 85f0dd6:	89 f8                	mov    %edi,%eax
 85f0dd8:	89 f2                	mov    %esi,%edx
 85f0dda:	89 04 24             	mov    %eax,(%esp)
 85f0ddd:	e8 6e 29 4f 00       	call   8ae3750 <_Unwind_Resume>
 85f0de2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85f0de5:	8b 55 08             	mov    0x8(%ebp),%edx
 85f0de8:	8b 4a 04             	mov    0x4(%edx),%ecx
 85f0deb:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f0dee:	69 d2 c8 09 00 00    	imul   $0x9c8,%edx,%edx
 85f0df4:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85f0df7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f0dfb:	89 14 24             	mov    %edx,(%esp)
 85f0dfe:	e8 1b ad ad ff       	call   80cbb1e <_ZN7CMTRand4seedEm>
 85f0e03:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85f0e07:	83 7d e4 0c          	cmpl   $0xc,-0x1c(%ebp)
 85f0e0b:	0f 9e c0             	setle  %al
 85f0e0e:	84 c0                	test   %al,%al
 85f0e10:	75 d0                	jne    85f0de2 <_ZN13random_option23CRandomOptionItemHandleC1Ev+0x7e>
 85f0e12:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e15:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 85f0e1c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e1f:	c6 40 0c 00          	movb   $0x0,0xc(%eax)
 85f0e23:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e26:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 85f0e2d:	e8 7e 00 00 00       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f0e32:	8d 90 48 01 00 00    	lea    0x148(%eax),%edx
 85f0e38:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e3b:	89 50 14             	mov    %edx,0x14(%eax)
 85f0e3e:	83 c4 2c             	add    $0x2c,%esp
 85f0e41:	5b                   	pop    %ebx
 85f0e42:	5e                   	pop    %esi
 85f0e43:	5f                   	pop    %edi
 85f0e44:	5d                   	pop    %ebp
 85f0e45:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::CRandomOptionItemHandle @ 0x85f0d64

/* random_option::CRandomOptionItemHandle::CRandomOptionItemHandle() */

void __thiscall
random_option::CRandomOptionItemHandle::CRandomOptionItemHandle(CRandomOptionItemHandle *this)

{
  CMTRand *pCVar1;
  ulong uVar2;
  CMTRand *this_00;
  int iVar3;
  int local_20;
  
  *(undefined ***)this = &PTR__CRandomOptionItemHandle_08cd11a0;
  pCVar1 = operator_new__(0x7f28);
  this_00 = pCVar1;
  for (iVar3 = 0xc; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 085f0d92 to 085f0d96 has its CatchHandler @ 085f0dca */
    CMTRand::CMTRand(this_00);
    this_00 = this_00 + 0x9c8;
  }
  *(CMTRand **)(this + 4) = pCVar1;
  uVar2 = time((time_t *)0x0);
  for (local_20 = 0; local_20 < 0xd; local_20 = local_20 + 1) {
    CMTRand::seed((CMTRand *)(*(int *)(this + 4) + local_20 * 0x9c8),uVar2);
  }
  *(undefined4 *)(this + 8) = 0;
  this[0xc] = (CRandomOptionItemHandle)0x0;
  *(undefined4 *)(this + 0x10) = 0;
  iVar3 = GetRandomOption();
  *(int *)(this + 0x14) = iVar3 + 0x148;
  return;
}

```

---

## RegenVer_choose_item

```asm
// === 085f1802 random_option::CRandomOptionItemHandle::RegenVer_choose_item  [0x085f1802-0x85f1a61] ===
 85f1802:	55                   	push   %ebp
 85f1803:	89 e5                	mov    %esp,%ebp
 85f1805:	53                   	push   %ebx
 85f1806:	83 ec 64             	sub    $0x64,%esp
 85f1809:	8b 45 10             	mov    0x10(%ebp),%eax
 85f180c:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1810:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1813:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1817:	8b 45 08             	mov    0x8(%ebp),%eax
 85f181a:	89 04 24             	mov    %eax,(%esp)
 85f181d:	e8 78 f7 ff ff       	call   85f0f9a <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi>
 85f1822:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f1825:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f182c:	8b 45 14             	mov    0x14(%ebp),%eax
 85f182f:	89 04 24             	mov    %eax,(%esp)
 85f1832:	e8 29 b1 b2 ff       	call   811c960 <_ZNKSt6vectorIiSaIiEE5emptyEv>
 85f1837:	84 c0                	test   %al,%al
 85f1839:	74 17                	je     85f1852 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x50>
 85f183b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f183e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1842:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1845:	89 04 24             	mov    %eax,(%esp)
 85f1848:	e8 3b f8 ff ff       	call   85f1088 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi>
 85f184d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f1850:	eb 1c                	jmp    85f186e <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x6c>
 85f1852:	8b 45 14             	mov    0x14(%ebp),%eax
 85f1855:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1859:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f185c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1860:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1863:	89 04 24             	mov    %eax,(%esp)
 85f1866:	e8 39 f9 ff ff       	call   85f11a4 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE>
 85f186b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f186e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f1871:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1875:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1878:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f187c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f187f:	89 04 24             	mov    %eax,(%esp)
 85f1882:	e8 9f fb ff ff       	call   85f1426 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi>
 85f1887:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f188a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f188d:	0f b7 c8             	movzwl %ax,%ecx
 85f1890:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f1893:	0f b6 d0             	movzbl %al,%edx
 85f1896:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1899:	0f b6 c0             	movzbl %al,%eax
 85f189c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85f18a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f18a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f18a8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f18ab:	89 04 24             	mov    %eax,(%esp)
 85f18ae:	e8 cf 26 f2 ff       	call   8513f82 <_ZN11BaseItemKeyC1Ehht>
 85f18b3:	e8 f8 f5 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f18b8:	8d 48 60             	lea    0x60(%eax),%ecx
 85f18bb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f18be:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85f18c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f18c5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f18c9:	89 04 24             	mov    %eax,(%esp)
 85f18cc:	e8 85 2c 00 00       	call   85f4556 <_ZNKSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 85f18d1:	83 ec 04             	sub    $0x4,%esp
 85f18d4:	e8 d7 f5 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f18d9:	8d 50 60             	lea    0x60(%eax),%edx
 85f18dc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f18df:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f18e3:	89 04 24             	mov    %eax,(%esp)
 85f18e6:	e8 97 2c 00 00       	call   85f4582 <_ZNKSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 85f18eb:	83 ec 04             	sub    $0x4,%esp
 85f18ee:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f18f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f18f5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f18f8:	89 04 24             	mov    %eax,(%esp)
 85f18fb:	e8 a8 2c 00 00       	call   85f45a8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEneERKSA_>
 85f1900:	84 c0                	test   %al,%al
 85f1902:	0f 84 fb 00 00 00    	je     85f1a03 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x201>
 85f1908:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f190b:	89 04 24             	mov    %eax,(%esp)
 85f190e:	e8 a9 2c 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f1913:	83 c0 04             	add    $0x4,%eax
 85f1916:	89 04 24             	mov    %eax,(%esp)
 85f1919:	e8 ac 2c 00 00       	call   85f45ca <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
 85f191e:	84 c0                	test   %al,%al
 85f1920:	74 0a                	je     85f192c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x12a>
 85f1922:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f1927:	e9 30 01 00 00       	jmp    85f1a5c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x25a>
 85f192c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f1933:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f1936:	89 04 24             	mov    %eax,(%esp)
 85f1939:	e8 7e 2c 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f193e:	8d 50 04             	lea    0x4(%eax),%edx
 85f1941:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f1944:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1948:	89 04 24             	mov    %eax,(%esp)
 85f194b:	e8 8e 2c 00 00       	call   85f45de <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 85f1950:	83 ec 04             	sub    $0x4,%esp
 85f1953:	eb 0f                	jmp    85f1964 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x162>
 85f1955:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f1958:	89 04 24             	mov    %eax,(%esp)
 85f195b:	e8 de 2c 00 00       	call   85f463e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEppEv>
 85f1960:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f1964:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f1967:	89 04 24             	mov    %eax,(%esp)
 85f196a:	e8 4d 2c 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f196f:	8d 50 04             	lea    0x4(%eax),%edx
 85f1972:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f1975:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1979:	89 04 24             	mov    %eax,(%esp)
 85f197c:	e8 83 2c 00 00       	call   85f4604 <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f1981:	83 ec 04             	sub    $0x4,%esp
 85f1984:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f1987:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f198b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f198e:	89 04 24             	mov    %eax,(%esp)
 85f1991:	e8 94 2c 00 00       	call   85f462a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEneERKS4_>
 85f1996:	84 c0                	test   %al,%al
 85f1998:	74 0f                	je     85f19a9 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x1a7>
 85f199a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f199d:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f19a0:	7d 07                	jge    85f19a9 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x1a7>
 85f19a2:	b8 01 00 00 00       	mov    $0x1,%eax
 85f19a7:	eb 05                	jmp    85f19ae <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x1ac>
 85f19a9:	b8 00 00 00 00       	mov    $0x0,%eax
 85f19ae:	84 c0                	test   %al,%al
 85f19b0:	75 a3                	jne    85f1955 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x153>
 85f19b2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f19b5:	89 04 24             	mov    %eax,(%esp)
 85f19b8:	e8 ff 2b 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f19bd:	8d 50 04             	lea    0x4(%eax),%edx
 85f19c0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f19c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f19c7:	89 04 24             	mov    %eax,(%esp)
 85f19ca:	e8 35 2c 00 00       	call   85f4604 <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f19cf:	83 ec 04             	sub    $0x4,%esp
 85f19d2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f19d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f19d9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f19dc:	89 04 24             	mov    %eax,(%esp)
 85f19df:	e8 78 2c 00 00       	call   85f465c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEeqERKS4_>
 85f19e4:	84 c0                	test   %al,%al
 85f19e6:	74 0b                	je     85f19f3 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x1f1>
 85f19e8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f19eb:	89 04 24             	mov    %eax,(%esp)
 85f19ee:	e8 7d 2c 00 00       	call   85f4670 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEmmEv>
 85f19f3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f19f6:	89 04 24             	mov    %eax,(%esp)
 85f19f9:	e8 90 2c 00 00       	call   85f468e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEptEv>
 85f19fe:	8b 40 04             	mov    0x4(%eax),%eax
 85f1a01:	eb 59                	jmp    85f1a5c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_choose_itemE11ENUM_RARITYiRKSt6vectorIiSaIiEE+0x25a>
 85f1a03:	0f b7 45 da          	movzwl -0x26(%ebp),%eax
 85f1a07:	0f b7 c8             	movzwl %ax,%ecx
 85f1a0a:	0f b6 45 d9          	movzbl -0x27(%ebp),%eax
 85f1a0e:	0f b6 d0             	movzbl %al,%edx
 85f1a11:	0f b6 45 d8          	movzbl -0x28(%ebp),%eax
 85f1a15:	0f b6 c0             	movzbl %al,%eax
 85f1a18:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 85f1a1b:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 85f1a1f:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85f1a23:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1a27:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1a2b:	c7 44 24 10 10 00 cd 	movl   $0x8cd0010,0x10(%esp)
 85f1a32:	08 
 85f1a33:	c7 44 24 0c 9a 01 00 	movl   $0x19a,0xc(%esp)
 85f1a3a:	00 
 85f1a3b:	c7 44 24 08 a0 10 cd 	movl   $0x8cd10a0,0x8(%esp)
 85f1a42:	08 
 85f1a43:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1a4a:	08 
 85f1a4b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1a52:	e8 b3 21 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1a57:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f1a5c:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f1a5f:	c9                   	leave
 85f1a60:	c3                   	ret
 85f1a61:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::RegenVer_choose_item @ 0x85f1802

/* random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, std::vector<int,
   std::allocator<int> > const&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::RegenVer_choose_item
          (CRandomOptionItemHandle *this,undefined4 param_2,undefined4 param_3,vector *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_34 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
  local_30 [4];
  BaseItemKey local_2c;
  byte local_2b;
  ushort local_2a;
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_28 [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_24 [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_20 [4];
  int local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  local_1c = _get_level_limit(this,param_2,param_3);
  local_18 = 0;
  cVar2 = std::vector<int,std::allocator<int>>::empty();
  if (cVar2 == '\0') {
    local_18 = _get_part_type_by_ItemGroup(this,local_1c,param_4);
  }
  else {
    local_18 = _get_part_type((int)this);
  }
  local_14 = _get_base_item(this,param_2,local_1c);
  BaseItemKey::BaseItemKey(&local_2c,(uchar)param_2,(uchar)local_1c,(ushort)local_18);
  GetRandomOption();
  std::
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  ::find((int *)local_30);
  GetRandomOption();
  std::
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  ::end(local_28);
  cVar2 = std::
          _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
          ::operator!=(local_30,(_Rb_tree_const_iterator *)local_28);
  if (cVar2 == '\0') {
    LogManager::logFormat
              (1,"RandomOption.cpp",
               "itemIndex_t random_option::CRandomOptionItemHandle::RegenVer_choose_item(ENUM_RARITY, int, const std::vector<int, std::allocator<int> >&)"
               ,0x19a,"choose_item (%d,%d,%d,%d)",(uint)(byte)local_2c,(uint)local_2b,(uint)local_2a
               ,local_14);
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator->(local_30);
    cVar2 = std::
            map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
            ::empty((map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
                     *)(iVar3 + 4));
    if (cVar2 == '\0') {
      local_10 = 0;
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
      ::operator->(local_30);
      std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
      ::begin(local_34);
      while( true ) {
        std::
        _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
        ::operator->(local_30);
        std::
        map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>::
        end(local_24);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator!=
                          ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34,
                           (_Rb_tree_const_iterator *)local_24);
        if ((cVar2 == '\0') || (local_14 <= local_10)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator++
                  ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34);
        local_10 = local_10 + 1;
      }
      std::
      _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
      ::operator->(local_30);
      std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator==
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34,
                         (_Rb_tree_const_iterator *)local_20);
      if (cVar2 != '\0') {
        std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator--
                  ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34);
      }
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_34);
      uVar4 = *(undefined4 *)(iVar3 + 4);
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

```

---

## RegenVer_get_option_quantity

```asm
// === 085f1a62 random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity  [0x085f1a62-0x85f1baf] ===
 85f1a62:	55                   	push   %ebp
 85f1a63:	89 e5                	mov    %esp,%ebp
 85f1a65:	53                   	push   %ebx
 85f1a66:	83 ec 34             	sub    $0x34,%esp
 85f1a69:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1a6c:	88 45 ec             	mov    %al,-0x14(%ebp)
 85f1a6f:	c6 45 ed ff          	movb   $0xff,-0x13(%ebp)
 85f1a73:	8b 45 14             	mov    0x14(%ebp),%eax
 85f1a76:	88 45 ee             	mov    %al,-0x12(%ebp)
 85f1a79:	8b 45 18             	mov    0x18(%ebp),%eax
 85f1a7c:	88 45 ef             	mov    %al,-0x11(%ebp)
 85f1a7f:	e8 2c f4 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1a84:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 85f1a8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f1a8d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85f1a90:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f1a94:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f1a98:	89 04 24             	mov    %eax,(%esp)
 85f1a9b:	e8 fc 2b 00 00       	call   85f469c <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f1aa0:	83 ec 04             	sub    $0x4,%esp
 85f1aa3:	e8 08 f4 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1aa8:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 85f1aae:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f1ab1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1ab5:	89 04 24             	mov    %eax,(%esp)
 85f1ab8:	e8 0b 2c 00 00       	call   85f46c8 <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f1abd:	83 ec 04             	sub    $0x4,%esp
 85f1ac0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f1ac3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1ac7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f1aca:	89 04 24             	mov    %eax,(%esp)
 85f1acd:	e8 1c 2c 00 00       	call   85f46ee <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEeqERKS4_>
 85f1ad2:	84 c0                	test   %al,%al
 85f1ad4:	74 64                	je     85f1b3a <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0xd8>
 85f1ad6:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1ad9:	88 45 ed             	mov    %al,-0x13(%ebp)
 85f1adc:	e8 cf f3 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1ae1:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 85f1ae7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1aea:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85f1aed:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f1af1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f1af5:	89 04 24             	mov    %eax,(%esp)
 85f1af8:	e8 9f 2b 00 00       	call   85f469c <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f1afd:	83 ec 04             	sub    $0x4,%esp
 85f1b00:	e8 ab f3 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1b05:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 85f1b0b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f1b0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1b12:	89 04 24             	mov    %eax,(%esp)
 85f1b15:	e8 ae 2b 00 00       	call   85f46c8 <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f1b1a:	83 ec 04             	sub    $0x4,%esp
 85f1b1d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85f1b20:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1b24:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1b27:	89 04 24             	mov    %eax,(%esp)
 85f1b2a:	e8 bf 2b 00 00       	call   85f46ee <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEeqERKS4_>
 85f1b2f:	84 c0                	test   %al,%al
 85f1b31:	74 07                	je     85f1b3a <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0xd8>
 85f1b33:	b8 ad 01 00 00       	mov    $0x1ad,%eax
 85f1b38:	eb 71                	jmp    85f1bab <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0x149>
 85f1b3a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f1b3d:	89 04 24             	mov    %eax,(%esp)
 85f1b40:	e8 bd 2b 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f1b45:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85f1b49:	66 85 c0             	test   %ax,%ax
 85f1b4c:	0f 94 c0             	sete   %al
 85f1b4f:	84 c0                	test   %al,%al
 85f1b51:	74 07                	je     85f1b5a <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0xf8>
 85f1b53:	b8 b1 01 00 00       	mov    $0x1b1,%eax
 85f1b58:	eb 51                	jmp    85f1bab <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0x149>
 85f1b5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f1b5d:	89 04 24             	mov    %eax,(%esp)
 85f1b60:	e8 9d 2b 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f1b65:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85f1b69:	0f bf d8             	movswl %ax,%ebx
 85f1b6c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f1b6f:	89 04 24             	mov    %eax,(%esp)
 85f1b72:	e8 8b 2b 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f1b77:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85f1b7b:	98                   	cwtl
 85f1b7c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85f1b80:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1b84:	8b 45 20             	mov    0x20(%ebp),%eax
 85f1b87:	89 04 24             	mov    %eax,(%esp)
 85f1b8a:	e8 25 71 00 00       	call   85f8cb4 <_ZN15RegenerationROI28RegenVer_get_option_quantityEii>
 85f1b8f:	89 c2                	mov    %eax,%edx
 85f1b91:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f1b94:	89 10                	mov    %edx,(%eax)
 85f1b96:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f1b99:	8b 00                	mov    (%eax),%eax
 85f1b9b:	85 c0                	test   %eax,%eax
 85f1b9d:	75 07                	jne    85f1ba6 <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0x144>
 85f1b9f:	b8 b5 01 00 00       	mov    $0x1b5,%eax
 85f1ba4:	eb 05                	jmp    85f1bab <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI+0x149>
 85f1ba6:	b8 00 00 00 00       	mov    $0x0,%eax
 85f1bab:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f1bae:	c9                   	leave
 85f1baf:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity @ 0x85f1a62

/* random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity(ENUM_RARITY, int, int, int,
   int&, RegenerationROI*) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::RegenVer_get_option_quantity
          (undefined4 this,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,int *param_6,RegenerationROI *param_7)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_20 [4];
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_1c [4];
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_14 [4];
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_10 [8];
  
  local_18 = param_2;
  local_17 = 0xff;
  local_16 = param_4;
  local_15 = param_5;
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::find((int *)local_1c);
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_14);
  if (cVar2 != '\0') {
    local_17 = param_3;
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::find((int *)local_20);
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::end(local_10);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                      (local_20,(_Rb_tree_const_iterator *)local_10);
    if (cVar2 != '\0') {
      return 0x1ad;
    }
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                    (local_1c);
  if (*(short *)(iVar3 + 6) == 0) {
    uVar4 = 0x1b1;
  }
  else {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                      (local_1c);
    sVar1 = *(short *)(iVar3 + 6);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                      (local_1c);
    iVar3 = RegenerationROI::RegenVer_get_option_quantity
                      (param_7,(int)*(short *)(iVar3 + 4),(int)sVar1);
    *param_6 = iVar3;
    if (*param_6 == 0) {
      uVar4 = 0x1b5;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

```

---

## RegenVer_give_option

```asm
// === 085f1bb0 random_option::CRandomOptionItemHandle::RegenVer_give_option  [0x085f1bb0-0x85f2337] ===
 85f1bb0:	55                   	push   %ebp
 85f1bb1:	89 e5                	mov    %esp,%ebp
 85f1bb3:	56                   	push   %esi
 85f1bb4:	53                   	push   %ebx
 85f1bb5:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 85f1bbb:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 85f1bbf:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f1bc6:	8d 45 9f             	lea    -0x61(%ebp),%eax
 85f1bc9:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1bcd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f1bd0:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f1bd4:	8b 45 14             	mov    0x14(%ebp),%eax
 85f1bd7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f1bdb:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1bde:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1be2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1be5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1be9:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1bec:	89 04 24             	mov    %eax,(%esp)
 85f1bef:	e8 44 07 00 00       	call   85f2338 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh>
 85f1bf4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f1bf7:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f1bfb:	0f 95 c0             	setne  %al
 85f1bfe:	84 c0                	test   %al,%al
 85f1c00:	74 64                	je     85f1c66 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0xb6>
 85f1c02:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1c06:	0f b6 d0             	movzbl %al,%edx
 85f1c09:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1c0c:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 85f1c0f:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85f1c13:	89 54 24 24          	mov    %edx,0x24(%esp)
 85f1c17:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f1c1a:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f1c1e:	8b 55 14             	mov    0x14(%ebp),%edx
 85f1c21:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f1c25:	89 44 24 18          	mov    %eax,0x18(%esp)
 85f1c29:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1c2c:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1c30:	c7 44 24 10 3c 00 cd 	movl   $0x8cd003c,0x10(%esp)
 85f1c37:	08 
 85f1c38:	c7 44 24 0c d8 01 00 	movl   $0x1d8,0xc(%esp)
 85f1c3f:	00 
 85f1c40:	c7 44 24 08 00 10 cd 	movl   $0x8cd1000,0x8(%esp)
 85f1c47:	08 
 85f1c48:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1c4f:	08 
 85f1c50:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1c57:	e8 ae 1f 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1c5c:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f1c61:	e9 c6 06 00 00       	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f1c66:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 85f1c6d:	83 7d 28 65          	cmpl   $0x65,0x28(%ebp)
 85f1c71:	0f 85 af 00 00 00    	jne    85f1d26 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x176>
 85f1c77:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1c7b:	0f b6 c0             	movzbl %al,%eax
 85f1c7e:	8b 55 24             	mov    0x24(%ebp),%edx
 85f1c81:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1c85:	8d 55 98             	lea    -0x68(%ebp),%edx
 85f1c88:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f1c8c:	8b 55 14             	mov    0x14(%ebp),%edx
 85f1c8f:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f1c93:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f1c97:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f1c9a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1c9e:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1ca1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1ca5:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1ca8:	89 04 24             	mov    %eax,(%esp)
 85f1cab:	e8 b2 fd ff ff       	call   85f1a62 <_ZN13random_option23CRandomOptionItemHandle28RegenVer_get_option_quantityE11ENUM_RARITYiiiRiP15RegenerationROI>
 85f1cb0:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f1cb3:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f1cb7:	0f 95 c0             	setne  %al
 85f1cba:	84 c0                	test   %al,%al
 85f1cbc:	0f 84 08 01 00 00    	je     85f1dca <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x21a>
 85f1cc2:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 85f1cc5:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1cc9:	0f b6 d0             	movzbl %al,%edx
 85f1ccc:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1ccf:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f1cd2:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 85f1cd6:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85f1cda:	8b 4d 14             	mov    0x14(%ebp),%ecx
 85f1cdd:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85f1ce1:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f1ce5:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f1ce8:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1cec:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1cf0:	c7 44 24 10 70 00 cd 	movl   $0x8cd0070,0x10(%esp)
 85f1cf7:	08 
 85f1cf8:	c7 44 24 0c e2 01 00 	movl   $0x1e2,0xc(%esp)
 85f1cff:	00 
 85f1d00:	c7 44 24 08 00 10 cd 	movl   $0x8cd1000,0x8(%esp)
 85f1d07:	08 
 85f1d08:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1d0f:	08 
 85f1d10:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1d17:	e8 ee 1e 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1d1c:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f1d21:	e9 06 06 00 00       	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f1d26:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1d2a:	0f b6 c0             	movzbl %al,%eax
 85f1d2d:	8d 55 98             	lea    -0x68(%ebp),%edx
 85f1d30:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f1d34:	8b 55 14             	mov    0x14(%ebp),%edx
 85f1d37:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f1d3b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f1d3f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f1d42:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1d46:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1d49:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1d4d:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1d50:	89 04 24             	mov    %eax,(%esp)
 85f1d53:	e8 58 08 00 00       	call   85f25b0 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi>
 85f1d58:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f1d5b:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f1d5f:	0f 95 c0             	setne  %al
 85f1d62:	84 c0                	test   %al,%al
 85f1d64:	74 64                	je     85f1dca <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x21a>
 85f1d66:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 85f1d69:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1d6d:	0f b6 d0             	movzbl %al,%edx
 85f1d70:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1d73:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f1d76:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 85f1d7a:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85f1d7e:	8b 4d 14             	mov    0x14(%ebp),%ecx
 85f1d81:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85f1d85:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f1d89:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f1d8c:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1d90:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1d94:	c7 44 24 10 70 00 cd 	movl   $0x8cd0070,0x10(%esp)
 85f1d9b:	08 
 85f1d9c:	c7 44 24 0c ea 01 00 	movl   $0x1ea,0xc(%esp)
 85f1da3:	00 
 85f1da4:	c7 44 24 08 00 10 cd 	movl   $0x8cd1000,0x8(%esp)
 85f1dab:	08 
 85f1dac:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1db3:	08 
 85f1db4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1dbb:	e8 4a 1e 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1dc0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f1dc5:	e9 62 05 00 00       	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f1dca:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 85f1dd1:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1dd5:	0f b6 c0             	movzbl %al,%eax
 85f1dd8:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85f1ddb:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1ddf:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1de3:	8b 45 14             	mov    0x14(%ebp),%eax
 85f1de6:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f1dea:	8b 45 18             	mov    0x18(%ebp),%eax
 85f1ded:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f1df1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f1df4:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f1df8:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1dfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1dff:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1e02:	89 04 24             	mov    %eax,(%esp)
 85f1e05:	e8 78 0a 00 00       	call   85f2882 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi>
 85f1e0a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f1e0d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f1e11:	0f 95 c0             	setne  %al
 85f1e14:	84 c0                	test   %al,%al
 85f1e16:	74 6b                	je     85f1e83 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x2d3>
 85f1e18:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 85f1e1b:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1e1f:	0f b6 d0             	movzbl %al,%edx
 85f1e22:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1e25:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f1e28:	89 5c 24 2c          	mov    %ebx,0x2c(%esp)
 85f1e2c:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85f1e30:	89 54 24 24          	mov    %edx,0x24(%esp)
 85f1e34:	8b 55 14             	mov    0x14(%ebp),%edx
 85f1e37:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f1e3b:	8b 55 18             	mov    0x18(%ebp),%edx
 85f1e3e:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f1e42:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f1e45:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1e49:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1e4d:	c7 44 24 10 a8 00 cd 	movl   $0x8cd00a8,0x10(%esp)
 85f1e54:	08 
 85f1e55:	c7 44 24 0c f2 01 00 	movl   $0x1f2,0xc(%esp)
 85f1e5c:	00 
 85f1e5d:	c7 44 24 08 00 10 cd 	movl   $0x8cd1000,0x8(%esp)
 85f1e64:	08 
 85f1e65:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1e6c:	08 
 85f1e6d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1e74:	e8 91 1d 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1e79:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f1e7e:	e9 a9 04 00 00       	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f1e83:	8d 45 88             	lea    -0x78(%ebp),%eax
 85f1e86:	89 04 24             	mov    %eax,(%esp)
 85f1e89:	e8 0c 23 00 00       	call   85f419a <_ZN20DifferentWeightValueC1Ev>
 85f1e8e:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1e91:	88 45 92             	mov    %al,-0x6e(%ebp)
 85f1e94:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1e98:	88 45 93             	mov    %al,-0x6d(%ebp)
 85f1e9b:	e8 10 f0 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1ea0:	8d 88 f4 00 00 00    	lea    0xf4(%eax),%ecx
 85f1ea6:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f1ea9:	8d 55 92             	lea    -0x6e(%ebp),%edx
 85f1eac:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f1eb0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f1eb4:	89 04 24             	mov    %eax,(%esp)
 85f1eb7:	e8 54 28 00 00       	call   85f4710 <_ZNKSt3mapIs20DifferentWeightValueSt4lessIsESaISt4pairIKsS0_EEE4findERS4_>
 85f1ebc:	83 ec 04             	sub    $0x4,%esp
 85f1ebf:	e8 ec ef ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1ec4:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 85f1eca:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f1ecd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1ed1:	89 04 24             	mov    %eax,(%esp)
 85f1ed4:	e8 63 28 00 00       	call   85f473c <_ZNKSt3mapIs20DifferentWeightValueSt4lessIsESaISt4pairIKsS0_EEE3endEv>
 85f1ed9:	83 ec 04             	sub    $0x4,%esp
 85f1edc:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f1edf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1ee3:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f1ee6:	89 04 24             	mov    %eax,(%esp)
 85f1ee9:	e8 74 28 00 00       	call   85f4762 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKs20DifferentWeightValueEEeqERKS4_>
 85f1eee:	84 c0                	test   %al,%al
 85f1ef0:	74 48                	je     85f1f3a <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x38a>
 85f1ef2:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f1ef6:	0f b6 d0             	movzbl %al,%edx
 85f1ef9:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1efc:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f1f00:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1f04:	c7 44 24 10 e0 00 cd 	movl   $0x8cd00e0,0x10(%esp)
 85f1f0b:	08 
 85f1f0c:	c7 44 24 0c fe 01 00 	movl   $0x1fe,0xc(%esp)
 85f1f13:	00 
 85f1f14:	c7 44 24 08 00 10 cd 	movl   $0x8cd1000,0x8(%esp)
 85f1f1b:	08 
 85f1f1c:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1f23:	08 
 85f1f24:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1f2b:	e8 da 1c 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1f30:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f1f35:	e9 f2 03 00 00       	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f1f3a:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f1f3d:	89 04 24             	mov    %eax,(%esp)
 85f1f40:	e8 31 28 00 00       	call   85f4776 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKs20DifferentWeightValueEEptEv>
 85f1f45:	8b 50 08             	mov    0x8(%eax),%edx
 85f1f48:	8b 40 04             	mov    0x4(%eax),%eax
 85f1f4b:	89 45 88             	mov    %eax,-0x78(%ebp)
 85f1f4e:	89 55 8c             	mov    %edx,-0x74(%ebp)
 85f1f51:	e8 5a ef ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1f56:	8d 88 60 01 00 00    	lea    0x160(%eax),%ecx
 85f1f5c:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f1f5f:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85f1f62:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f1f66:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f1f6a:	89 04 24             	mov    %eax,(%esp)
 85f1f6d:	e8 12 28 00 00       	call   85f4784 <_ZNKSt3mapIi16OptionGroupValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f1f72:	83 ec 04             	sub    $0x4,%esp
 85f1f75:	e8 36 ef ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1f7a:	8d 90 60 01 00 00    	lea    0x160(%eax),%edx
 85f1f80:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f1f83:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1f87:	89 04 24             	mov    %eax,(%esp)
 85f1f8a:	e8 21 28 00 00       	call   85f47b0 <_ZNKSt3mapIi16OptionGroupValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f1f8f:	83 ec 04             	sub    $0x4,%esp
 85f1f92:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f1f95:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1f99:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f1f9c:	89 04 24             	mov    %eax,(%esp)
 85f1f9f:	e8 32 28 00 00       	call   85f47d6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEeqERKS4_>
 85f1fa4:	84 c0                	test   %al,%al
 85f1fa6:	74 3d                	je     85f1fe5 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x435>
 85f1fa8:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85f1fab:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f1faf:	c7 44 24 10 fb 00 cd 	movl   $0x8cd00fb,0x10(%esp)
 85f1fb6:	08 
 85f1fb7:	c7 44 24 0c 06 02 00 	movl   $0x206,0xc(%esp)
 85f1fbe:	00 
 85f1fbf:	c7 44 24 08 00 10 cd 	movl   $0x8cd1000,0x8(%esp)
 85f1fc6:	08 
 85f1fc7:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f1fce:	08 
 85f1fcf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f1fd6:	e8 2f 1c 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f1fdb:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f1fe0:	e9 47 03 00 00       	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f1fe5:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f1fe8:	89 04 24             	mov    %eax,(%esp)
 85f1feb:	e8 fa 27 00 00       	call   85f47ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEptEv>
 85f1ff0:	8b 40 10             	mov    0x10(%eax),%eax
 85f1ff3:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f1ff6:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f1ff9:	89 04 24             	mov    %eax,(%esp)
 85f1ffc:	e8 e9 27 00 00       	call   85f47ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEptEv>
 85f2001:	83 c0 04             	add    $0x4,%eax
 85f2004:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2008:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f200e:	89 04 24             	mov    %eax,(%esp)
 85f2011:	e8 e2 27 00 00       	call   85f47f8 <_ZNSt6vectorI11OptionGroupSaIS0_EEC1ERKS2_>
 85f2016:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f201d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85f2024:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f202a:	89 04 24             	mov    %eax,(%esp)
 85f202d:	e8 7a 28 00 00       	call   85f48ac <_ZN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEC1Ev>
 85f2032:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f2039:	e9 3f 02 00 00       	jmp    85f227d <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6cd>
 85f203e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f2041:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85f2044:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2047:	8b 40 04             	mov    0x4(%eax),%eax
 85f204a:	8d 90 08 58 00 00    	lea    0x5808(%eax),%edx
 85f2050:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f2053:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2057:	89 14 24             	mov    %edx,(%esp)
 85f205a:	e8 5f 9a ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f205f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f2062:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f2065:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2069:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f206c:	89 04 24             	mov    %eax,(%esp)
 85f206f:	e8 90 28 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f2074:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f2077:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f207d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2081:	89 04 24             	mov    %eax,(%esp)
 85f2084:	e8 55 28 00 00       	call   85f48de <_ZNSt6vectorI11OptionGroupSaIS0_EE3endEv>
 85f2089:	83 ec 04             	sub    $0x4,%esp
 85f208c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f208f:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f2095:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2099:	89 04 24             	mov    %eax,(%esp)
 85f209c:	e8 19 28 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f20a1:	83 ec 04             	sub    $0x4,%esp
 85f20a4:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f20a7:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85f20aa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f20ae:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85f20b1:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f20b5:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85f20b8:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f20bc:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85f20bf:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f20c3:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85f20c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f20ca:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85f20cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f20d1:	89 04 24             	mov    %eax,(%esp)
 85f20d4:	e8 56 28 00 00       	call   85f492f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS2_SaIS2_EEEE11CRandomListIjEET0_T_SB_SA_>
 85f20d9:	83 ec 04             	sub    $0x4,%esp
 85f20dc:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f20df:	89 04 24             	mov    %eax,(%esp)
 85f20e2:	e8 b9 28 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f20e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f20ea:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f20f0:	89 04 24             	mov    %eax,(%esp)
 85f20f3:	e8 b2 28 00 00       	call   85f49aa <_ZNKSt6vectorI11OptionGroupSaIS0_EE4sizeEv>
 85f20f8:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f20fb:	0f 96 c0             	setbe  %al
 85f20fe:	84 c0                	test   %al,%al
 85f2100:	0f 85 72 01 00 00    	jne    85f2278 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6c8>
 85f2106:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f2109:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85f210c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f210f:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f2115:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2119:	89 04 24             	mov    %eax,(%esp)
 85f211c:	e8 99 27 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f2121:	83 ec 04             	sub    $0x4,%esp
 85f2124:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 85f212a:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85f212d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2131:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85f2134:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2138:	89 04 24             	mov    %eax,(%esp)
 85f213b:	e8 86 28 00 00       	call   85f49c6 <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEplERKi>
 85f2140:	83 ec 04             	sub    $0x4,%esp
 85f2143:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 85f2149:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 85f214f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f2152:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f2158:	89 04 24             	mov    %eax,(%esp)
 85f215b:	e8 9c 28 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f2160:	8b 00                	mov    (%eax),%eax
 85f2162:	89 c1                	mov    %eax,%ecx
 85f2164:	8b 55 20             	mov    0x20(%ebp),%edx
 85f2167:	89 d8                	mov    %ebx,%eax
 85f2169:	01 c0                	add    %eax,%eax
 85f216b:	01 d8                	add    %ebx,%eax
 85f216d:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 85f2170:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85f2173:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f2179:	89 04 24             	mov    %eax,(%esp)
 85f217c:	e8 7b 28 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f2181:	8b 40 04             	mov    0x4(%eax),%eax
 85f2184:	89 da                	mov    %ebx,%edx
 85f2186:	29 c2                	sub    %eax,%edx
 85f2188:	89 d0                	mov    %edx,%eax
 85f218a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f218d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f2190:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 85f2196:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f219a:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f21a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f21a4:	89 04 24             	mov    %eax,(%esp)
 85f21a7:	e8 5a 28 00 00       	call   85f4a06 <_ZNSt6vectorI11OptionGroupSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 85f21ac:	83 ec 04             	sub    $0x4,%esp
 85f21af:	81 7d 28 c9 00 00 00 	cmpl   $0xc9,0x28(%ebp)
 85f21b6:	75 60                	jne    85f2218 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x668>
 85f21b8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f21bb:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f21be:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f21c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f21c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f21c9:	8b 45 24             	mov    0x24(%ebp),%eax
 85f21cc:	89 04 24             	mov    %eax,(%esp)
 85f21cf:	e8 d2 6b 00 00       	call   85f8da6 <_ZN15RegenerationROI25RegenVer_get_option_valueEii>
 85f21d4:	89 c2                	mov    %eax,%edx
 85f21d6:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f21d9:	89 d8                	mov    %ebx,%eax
 85f21db:	01 c0                	add    %eax,%eax
 85f21dd:	01 d8                	add    %ebx,%eax
 85f21df:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f21e2:	83 c0 01             	add    $0x1,%eax
 85f21e5:	88 10                	mov    %dl,(%eax)
 85f21e7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f21ea:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f21ed:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f21f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f21f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f21f8:	8b 45 24             	mov    0x24(%ebp),%eax
 85f21fb:	89 04 24             	mov    %eax,(%esp)
 85f21fe:	e8 a3 6b 00 00       	call   85f8da6 <_ZN15RegenerationROI25RegenVer_get_option_valueEii>
 85f2203:	89 c2                	mov    %eax,%edx
 85f2205:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f2208:	89 d8                	mov    %ebx,%eax
 85f220a:	01 c0                	add    %eax,%eax
 85f220c:	01 d8                	add    %ebx,%eax
 85f220e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f2211:	83 c0 02             	add    $0x2,%eax
 85f2214:	88 10                	mov    %dl,(%eax)
 85f2216:	eb 61                	jmp    85f2279 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6c9>
 85f2218:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f221b:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f221e:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f2221:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2225:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2229:	8b 45 08             	mov    0x8(%ebp),%eax
 85f222c:	89 04 24             	mov    %eax,(%esp)
 85f222f:	e8 ce 08 00 00       	call   85f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>
 85f2234:	89 c2                	mov    %eax,%edx
 85f2236:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f2239:	89 d8                	mov    %ebx,%eax
 85f223b:	01 c0                	add    %eax,%eax
 85f223d:	01 d8                	add    %ebx,%eax
 85f223f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f2242:	83 c0 01             	add    $0x1,%eax
 85f2245:	88 10                	mov    %dl,(%eax)
 85f2247:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f224a:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f224d:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f2250:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2254:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2258:	8b 45 08             	mov    0x8(%ebp),%eax
 85f225b:	89 04 24             	mov    %eax,(%esp)
 85f225e:	e8 9f 08 00 00       	call   85f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>
 85f2263:	89 c2                	mov    %eax,%edx
 85f2265:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f2268:	89 d8                	mov    %ebx,%eax
 85f226a:	01 c0                	add    %eax,%eax
 85f226c:	01 d8                	add    %ebx,%eax
 85f226e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f2271:	83 c0 02             	add    $0x2,%eax
 85f2274:	88 10                	mov    %dl,(%eax)
 85f2276:	eb 01                	jmp    85f2279 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6c9>
 85f2278:	90                   	nop
 85f2279:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f227d:	8b 45 98             	mov    -0x68(%ebp),%eax
 85f2280:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 85f2283:	7d 0d                	jge    85f2292 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6e2>
 85f2285:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 85f2289:	7f 07                	jg     85f2292 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6e2>
 85f228b:	b8 01 00 00 00       	mov    $0x1,%eax
 85f2290:	eb 05                	jmp    85f2297 <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x6e7>
 85f2292:	b8 00 00 00 00       	mov    $0x0,%eax
 85f2297:	84 c0                	test   %al,%al
 85f2299:	0f 85 9f fd ff ff    	jne    85f203e <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x48e>
 85f229f:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f22a3:	89 c2                	mov    %eax,%edx
 85f22a5:	83 e2 03             	and    $0x3,%edx
 85f22a8:	8b 45 20             	mov    0x20(%ebp),%eax
 85f22ab:	89 d1                	mov    %edx,%ecx
 85f22ad:	83 e1 03             	and    $0x3,%ecx
 85f22b0:	0f b6 50 09          	movzbl 0x9(%eax),%edx
 85f22b4:	83 e2 fc             	and    $0xfffffffc,%edx
 85f22b7:	09 ca                	or     %ecx,%edx
 85f22b9:	88 50 09             	mov    %dl,0x9(%eax)
 85f22bc:	c7 45 e0 40 00 00 00 	movl   $0x40,-0x20(%ebp)
 85f22c3:	8b 45 08             	mov    0x8(%ebp),%eax
 85f22c6:	8b 40 04             	mov    0x4(%eax),%eax
 85f22c9:	8d 90 d0 61 00 00    	lea    0x61d0(%eax),%edx
 85f22cf:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f22d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f22d6:	89 14 24             	mov    %edx,(%esp)
 85f22d9:	e8 e0 97 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f22de:	89 c2                	mov    %eax,%edx
 85f22e0:	83 e2 3f             	and    $0x3f,%edx
 85f22e3:	8b 45 20             	mov    0x20(%ebp),%eax
 85f22e6:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 85f22ed:	0f b6 50 09          	movzbl 0x9(%eax),%edx
 85f22f1:	83 e2 03             	and    $0x3,%edx
 85f22f4:	09 ca                	or     %ecx,%edx
 85f22f6:	88 50 09             	mov    %dl,0x9(%eax)
 85f22f9:	bb 01 00 00 00       	mov    $0x1,%ebx
 85f22fe:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f2304:	89 04 24             	mov    %eax,(%esp)
 85f2307:	e8 e8 3d d9 ff       	call   83860f4 <_ZNSt6vectorI11OptionGroupSaIS0_EED1Ev>
 85f230c:	eb 1e                	jmp    85f232c <_ZN13random_option23CRandomOptionItemHandle20RegenVer_give_optionEm11ENUM_RARITYiiiP12RandomOptionP15RegenerationROIi+0x77c>
 85f230e:	89 d3                	mov    %edx,%ebx
 85f2310:	89 c6                	mov    %eax,%esi
 85f2312:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f2318:	89 04 24             	mov    %eax,(%esp)
 85f231b:	e8 d4 3d d9 ff       	call   83860f4 <_ZNSt6vectorI11OptionGroupSaIS0_EED1Ev>
 85f2320:	89 f0                	mov    %esi,%eax
 85f2322:	89 da                	mov    %ebx,%edx
 85f2324:	89 04 24             	mov    %eax,(%esp)
 85f2327:	e8 24 14 4f 00       	call   8ae3750 <_Unwind_Resume>
 85f232c:	89 d8                	mov    %ebx,%eax
 85f232e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f2331:	83 c4 00             	add    $0x0,%esp
 85f2334:	5b                   	pop    %ebx
 85f2335:	5e                   	pop    %esi
 85f2336:	5d                   	pop    %ebp
 85f2337:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::RegenVer_give_option @ 0x85f1bb0

/* random_option::CRandomOptionItemHandle::RegenVer_give_option(unsigned long, ENUM_RARITY, int,
   int, int, RandomOption*, RegenerationROI*, int) */

undefined4
random_option::CRandomOptionItemHandle::RegenVer_give_option
          (int param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int local_e4 [2];
  int local_c8 [10];
  int local_a0 [3];
  int local_94;
  vector<OptionGroup,std::allocator<OptionGroup>> local_90 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>> local_84 [4];
  _Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>> local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined1 local_72;
  byte local_71;
  undefined4 local_70;
  int local_6c;
  byte local_65;
  map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
  local_64 [4];
  map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
  local_60 [4];
  int local_5c;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_65 = 0;
  local_20 = 0;
  local_20 = _get_option_type();
  if (local_20 == 0) {
    local_6c = 0;
    if (in_stack_00000024 == 0x65) {
      local_20 = RegenVer_get_option_quantity();
      if (local_20 != 0) {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                   ,0x1e2,"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)");
        return 0;
      }
    }
    else {
      local_20 = _get_option_quantity();
      if (local_20 != 0) {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                   ,0x1ea,"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)");
        return 0;
      }
    }
    local_70 = 0;
    local_20 = _choose_option_group();
    if (local_20 == 0) {
      DifferentWeightValue::DifferentWeightValue((DifferentWeightValue *)&local_7c);
      local_72 = param_3;
      local_71 = local_65;
      GetRandomOption();
      std::
      map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
      ::find((short *)local_80);
      GetRandomOption();
      std::
      map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
      ::end(local_64);
      cVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::operator==
                        (local_80,(_Rb_tree_const_iterator *)local_64);
      if (cVar2 == '\0') {
        iVar4 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                operator->(local_80);
        local_78 = *(int *)(iVar4 + 8);
        local_7c = *(undefined4 *)(iVar4 + 4);
        GetRandomOption();
        std::
        map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
        ::find((int *)local_84);
        GetRandomOption();
        std::
        map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
        ::end(local_60);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator==
                          (local_84,(_Rb_tree_const_iterator *)local_60);
        if (cVar2 == '\0') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                            (local_84);
          local_1c = *(int *)(iVar4 + 0x10);
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                            (local_84);
          std::vector<OptionGroup,std::allocator<OptionGroup>>::vector
                    (local_90,(vector *)(iVar4 + 4));
          local_18 = 0;
          local_14 = 0;
          __gnu_cxx::
          __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
          __normal_iterator((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                             *)&local_94);
          local_10 = 0;
          piVar9 = (int *)&stack0xffffff24;
          while( true ) {
            if ((local_10 < local_6c) && (local_10 < 3)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) break;
            local_5c = local_1c;
            iVar4 = *(int *)(param_1 + 4);
            piVar9[1] = (int)&local_5c;
            *piVar9 = iVar4 + 0x5808;
            piVar9[-1] = 0x85f205f;
            local_18 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
            piVar9[1] = local_18;
            *piVar9 = (int)&local_48;
            piVar9[-1] = 0x85f2074;
            CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)*piVar9,piVar9[1]);
            piVar9[1] = (int)local_90;
            *piVar9 = (int)&local_38;
                    /* try { // try from 085f2084 to 085f2262 has its CatchHandler @ 085f230e */
            piVar9[-1] = 0x85f2089;
            std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
            piVar9[1] = (int)local_90;
            *piVar9 = (int)&local_34;
            piVar9[-1] = 0x85f20a1;
            std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
            piVar9[3] = local_48;
            piVar9[4] = local_44;
            piVar9[5] = local_40;
            piVar9[6] = local_3c;
            piVar9[2] = local_38;
            piVar9[1] = local_34;
            *piVar9 = (int)local_58;
            piVar9[-1] = 0x85f20d9;
            std::
            for_each<__gnu_cxx::__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>,CRandomList<unsigned_int>>
                      ();
            piVar9[-1] = (int)local_58;
            piVar9[-2] = 0x85f20e7;
            local_14 = CRandomList<unsigned_int>::get_value((CRandomList<unsigned_int> *)piVar9[-1])
            ;
            piVar9[-1] = (int)local_90;
            piVar9[-2] = 0x85f20f8;
            uVar5 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size
                              ((vector<OptionGroup,std::allocator<OptionGroup>> *)piVar9[-1]);
            if (local_14 < uVar5) {
              local_30 = local_14;
              *piVar9 = (int)local_90;
              piVar9[-1] = (int)local_2c;
              piVar9[-2] = 0x85f2121;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
              piVar9[1] = (int)&local_30;
              *piVar9 = (int)local_2c;
              piVar9[-1] = (int)local_a0;
              piVar9[-2] = 0x85f2140;
              __gnu_cxx::
              __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
              operator+((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                         *)piVar9[-1],(int *)*piVar9);
              iVar7 = local_10;
              local_94 = local_a0[0];
              piVar9[-1] = (int)&local_94;
              piVar9[-2] = 0x85f2160;
              puVar6 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                       ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                    *)piVar9[-1]);
              iVar4 = local_1c;
              *(char *)(iVar7 * 3 + in_stack_0000001c) = (char)*puVar6;
              piVar9[-1] = (int)&local_94;
              piVar9[-2] = 0x85f2181;
              iVar7 = __gnu_cxx::
                      __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                      ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                   *)piVar9[-1]);
              local_1c = iVar4 - *(int *)(iVar7 + 4);
              piVar9[1] = local_94;
              *piVar9 = (int)local_90;
              piVar9[-1] = (int)local_28;
              piVar9[-2] = 0x85f21ac;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::erase();
              iVar4 = local_10;
              if (in_stack_00000024 == 0xc9) {
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = in_stack_00000020;
                piVar9[-2] = 0x85f21d4;
                uVar3 = RegenerationROI::RegenVer_get_option_value
                                  ((RegenerationROI *)piVar9[-1],*piVar9,piVar9[1]);
                iVar7 = local_10;
                *(undefined1 *)(in_stack_0000001c + iVar4 * 3 + 1) = uVar3;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = in_stack_00000020;
                piVar9[-2] = 0x85f2203;
                uVar3 = RegenerationROI::RegenVer_get_option_value
                                  ((RegenerationROI *)piVar9[-1],*piVar9,piVar9[1]);
                *(undefined1 *)(in_stack_0000001c + iVar7 * 3 + 2) = uVar3;
              }
              else {
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f2234;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                iVar7 = local_10;
                *(undefined1 *)(in_stack_0000001c + iVar4 * 3 + 1) = uVar3;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f2263;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                *(undefined1 *)(in_stack_0000001c + iVar7 * 3 + 2) = uVar3;
              }
            }
            local_10 = local_10 + 1;
            piVar9 = piVar9 + -1;
          }
          *(byte *)(in_stack_0000001c + 9) = *(byte *)(in_stack_0000001c + 9) & 0xfc | local_65 & 3;
          local_24 = 0x40;
          iVar4 = *(int *)(param_1 + 4);
          piVar9[1] = (int)&local_24;
          *piVar9 = iVar4 + 0x61d0;
          piVar9[-1] = 0x85f22de;
          cVar2 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
          *(byte *)(in_stack_0000001c + 9) = *(byte *)(in_stack_0000001c + 9) & 3 | cVar2 * '\x04';
          uVar8 = 1;
          *piVar9 = (int)local_90;
          piVar9[-1] = 0x85f230c;
          std::vector<OptionGroup,std::allocator<OptionGroup>>::~vector
                    ((vector<OptionGroup,std::allocator<OptionGroup>> *)*piVar9);
        }
        else {
          LogManager::logFormat
                    (1,"RandomOption.cpp",
                     "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                     ,0x206,"option_group_ (%d) ");
          uVar8 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                   ,0x1fe,"different_weight_ (%d,%d) ");
        uVar8 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"RandomOption.cpp",
                 "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
                 ,0x1f2,"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)");
      uVar8 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"RandomOption.cpp",
               "bool random_option::CRandomOptionItemHandle::RegenVer_give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*, RegenerationROI*, int)"
               ,0x1d8,"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)");
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## _choose_option_group

```asm
// === 085f2882 random_option::CRandomOptionItemHandle::_choose_option_group  [0x085f2882-0x85f2b01] ===
 85f2882:	55                   	push   %ebp
 85f2883:	89 e5                	mov    %esp,%ebp
 85f2885:	81 ec 88 00 00 00    	sub    $0x88,%esp
 85f288b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f288e:	88 45 a4             	mov    %al,-0x5c(%ebp)
 85f2891:	c6 45 a5 ff          	movb   $0xff,-0x5b(%ebp)
 85f2895:	8b 45 14             	mov    0x14(%ebp),%eax
 85f2898:	88 45 a6             	mov    %al,-0x5a(%ebp)
 85f289b:	8b 45 18             	mov    0x18(%ebp),%eax
 85f289e:	88 45 a7             	mov    %al,-0x59(%ebp)
 85f28a1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f28a4:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85f28a7:	8b 45 08             	mov    0x8(%ebp),%eax
 85f28aa:	8b 40 14             	mov    0x14(%eax),%eax
 85f28ad:	8b 00                	mov    (%eax),%eax
 85f28af:	83 c0 04             	add    $0x4,%eax
 85f28b2:	8b 10                	mov    (%eax),%edx
 85f28b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85f28b7:	8b 40 14             	mov    0x14(%eax),%eax
 85f28ba:	89 04 24             	mov    %eax,(%esp)
 85f28bd:	ff d2                	call   *%edx
 85f28bf:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85f28c2:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 85f28c5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85f28c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f28cd:	89 14 24             	mov    %edx,(%esp)
 85f28d0:	e8 f5 23 00 00       	call   85f4cca <_ZNSt3mapIy22OptionGroupChoiceValueSt4lessIyESaISt4pairIKyS0_EEE4findERS4_>
 85f28d5:	83 ec 04             	sub    $0x4,%esp
 85f28d8:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f28db:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f28df:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f28e2:	89 04 24             	mov    %eax,(%esp)
 85f28e5:	e8 0c 24 00 00       	call   85f4cf6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 85f28ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85f28ed:	8b 40 14             	mov    0x14(%eax),%eax
 85f28f0:	8b 00                	mov    (%eax),%eax
 85f28f2:	83 c0 04             	add    $0x4,%eax
 85f28f5:	8b 10                	mov    (%eax),%edx
 85f28f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85f28fa:	8b 40 14             	mov    0x14(%eax),%eax
 85f28fd:	89 04 24             	mov    %eax,(%esp)
 85f2900:	ff d2                	call   *%edx
 85f2902:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 85f2905:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2909:	89 14 24             	mov    %edx,(%esp)
 85f290c:	e8 f5 23 00 00       	call   85f4d06 <_ZNSt3mapIy22OptionGroupChoiceValueSt4lessIyESaISt4pairIKyS0_EEE3endEv>
 85f2911:	83 ec 04             	sub    $0x4,%esp
 85f2914:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f2917:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f291b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f291e:	89 04 24             	mov    %eax,(%esp)
 85f2921:	e8 d0 23 00 00       	call   85f4cf6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 85f2926:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f2929:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f292d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2930:	89 04 24             	mov    %eax,(%esp)
 85f2933:	e8 f4 23 00 00       	call   85f4d2c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEeqERKS4_>
 85f2938:	84 c0                	test   %al,%al
 85f293a:	0f 84 a5 00 00 00    	je     85f29e5 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi+0x163>
 85f2940:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2943:	88 45 a5             	mov    %al,-0x5b(%ebp)
 85f2946:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2949:	8b 40 14             	mov    0x14(%eax),%eax
 85f294c:	8b 00                	mov    (%eax),%eax
 85f294e:	83 c0 04             	add    $0x4,%eax
 85f2951:	8b 10                	mov    (%eax),%edx
 85f2953:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2956:	8b 40 14             	mov    0x14(%eax),%eax
 85f2959:	89 04 24             	mov    %eax,(%esp)
 85f295c:	ff d2                	call   *%edx
 85f295e:	8d 55 b8             	lea    -0x48(%ebp),%edx
 85f2961:	8d 4d a4             	lea    -0x5c(%ebp),%ecx
 85f2964:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85f2968:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f296c:	89 14 24             	mov    %edx,(%esp)
 85f296f:	e8 56 23 00 00       	call   85f4cca <_ZNSt3mapIy22OptionGroupChoiceValueSt4lessIyESaISt4pairIKyS0_EEE4findERS4_>
 85f2974:	83 ec 04             	sub    $0x4,%esp
 85f2977:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85f297a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f297e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f2981:	89 04 24             	mov    %eax,(%esp)
 85f2984:	e8 6d 23 00 00       	call   85f4cf6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 85f2989:	8b 45 08             	mov    0x8(%ebp),%eax
 85f298c:	8b 40 14             	mov    0x14(%eax),%eax
 85f298f:	8b 00                	mov    (%eax),%eax
 85f2991:	83 c0 04             	add    $0x4,%eax
 85f2994:	8b 10                	mov    (%eax),%edx
 85f2996:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2999:	8b 40 14             	mov    0x14(%eax),%eax
 85f299c:	89 04 24             	mov    %eax,(%esp)
 85f299f:	ff d2                	call   *%edx
 85f29a1:	8d 55 c0             	lea    -0x40(%ebp),%edx
 85f29a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f29a8:	89 14 24             	mov    %edx,(%esp)
 85f29ab:	e8 56 23 00 00       	call   85f4d06 <_ZNSt3mapIy22OptionGroupChoiceValueSt4lessIyESaISt4pairIKyS0_EEE3endEv>
 85f29b0:	83 ec 04             	sub    $0x4,%esp
 85f29b3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f29b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f29ba:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f29bd:	89 04 24             	mov    %eax,(%esp)
 85f29c0:	e8 31 23 00 00       	call   85f4cf6 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEC1ERKSt17_Rb_tree_iteratorIS3_E>
 85f29c5:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f29c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f29cc:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f29cf:	89 04 24             	mov    %eax,(%esp)
 85f29d2:	e8 55 23 00 00       	call   85f4d2c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEeqERKS4_>
 85f29d7:	84 c0                	test   %al,%al
 85f29d9:	74 0a                	je     85f29e5 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi+0x163>
 85f29db:	b8 9e 02 00 00       	mov    $0x29e,%eax
 85f29e0:	e9 1a 01 00 00       	jmp    85f2aff <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi+0x27d>
 85f29e5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f29e8:	89 04 24             	mov    %eax,(%esp)
 85f29eb:	e8 50 23 00 00       	call   85f4d40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEptEv>
 85f29f0:	8b 40 20             	mov    0x20(%eax),%eax
 85f29f3:	83 e8 01             	sub    $0x1,%eax
 85f29f6:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85f29f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85f29fc:	8b 40 04             	mov    0x4(%eax),%eax
 85f29ff:	8d 90 b0 3a 00 00    	lea    0x3ab0(%eax),%edx
 85f2a05:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85f2a08:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2a0c:	89 14 24             	mov    %edx,(%esp)
 85f2a0f:	e8 aa 90 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f2a14:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f2a17:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f2a1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2a1e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f2a21:	89 04 24             	mov    %eax,(%esp)
 85f2a24:	e8 db 1e 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f2a29:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2a2c:	89 04 24             	mov    %eax,(%esp)
 85f2a2f:	e8 0c 23 00 00       	call   85f4d40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEptEv>
 85f2a34:	8d 50 14             	lea    0x14(%eax),%edx
 85f2a37:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f2a3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2a3e:	89 04 24             	mov    %eax,(%esp)
 85f2a41:	e8 de 08 af ff       	call   80e3324 <_ZNKSt6vectorIjSaIjEE3endEv>
 85f2a46:	83 ec 04             	sub    $0x4,%esp
 85f2a49:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2a4c:	89 04 24             	mov    %eax,(%esp)
 85f2a4f:	e8 ec 22 00 00       	call   85f4d40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEptEv>
 85f2a54:	8d 50 14             	lea    0x14(%eax),%edx
 85f2a57:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f2a5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2a5e:	89 04 24             	mov    %eax,(%esp)
 85f2a61:	e8 ea 08 af ff       	call   80e3350 <_ZNKSt6vectorIjSaIjEE5beginEv>
 85f2a66:	83 ec 04             	sub    $0x4,%esp
 85f2a69:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f2a6c:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85f2a6f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f2a73:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f2a76:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f2a7a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f2a7d:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f2a81:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f2a84:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2a88:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85f2a8b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2a8f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85f2a92:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2a96:	89 04 24             	mov    %eax,(%esp)
 85f2a99:	e8 45 21 00 00       	call   85f4be3 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEE11CRandomListIjEET0_T_SB_SA_>
 85f2a9e:	83 ec 04             	sub    $0x4,%esp
 85f2aa1:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f2aa4:	89 04 24             	mov    %eax,(%esp)
 85f2aa7:	e8 f4 1e 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f2aac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f2aaf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2ab2:	89 04 24             	mov    %eax,(%esp)
 85f2ab5:	e8 86 22 00 00       	call   85f4d40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEptEv>
 85f2aba:	83 c0 08             	add    $0x8,%eax
 85f2abd:	89 04 24             	mov    %eax,(%esp)
 85f2ac0:	e8 fb b6 a9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85f2ac5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f2ac8:	0f 97 c0             	seta   %al
 85f2acb:	84 c0                	test   %al,%al
 85f2acd:	74 2b                	je     85f2afa <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi+0x278>
 85f2acf:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2ad2:	89 04 24             	mov    %eax,(%esp)
 85f2ad5:	e8 66 22 00 00       	call   85f4d40 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKy22OptionGroupChoiceValueEEptEv>
 85f2ada:	8d 50 08             	lea    0x8(%eax),%edx
 85f2add:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f2ae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2ae4:	89 14 24             	mov    %edx,(%esp)
 85f2ae7:	e8 0a 4e d9 ff       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 85f2aec:	8b 10                	mov    (%eax),%edx
 85f2aee:	8b 45 20             	mov    0x20(%ebp),%eax
 85f2af1:	89 10                	mov    %edx,(%eax)
 85f2af3:	b8 00 00 00 00       	mov    $0x0,%eax
 85f2af8:	eb 05                	jmp    85f2aff <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi+0x27d>
 85f2afa:	b8 be 02 00 00       	mov    $0x2be,%eax
 85f2aff:	c9                   	leave
 85f2b00:	c3                   	ret
 85f2b01:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::_choose_option_group @ 0x85f2882

/* random_option::CRandomOptionItemHandle::_choose_option_group(ENUM_RARITY, int, int, int, int,
   int&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_choose_option_group
          (CRandomOptionItemHandle *this,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,undefined4 param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  _Rb_tree_iterator *p_Var6;
  undefined1 *puVar7;
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_68 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_64 [4];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  _Rb_tree_iterator local_58 [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_54 [4];
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  local_50 [4];
  _Rb_tree_iterator local_4c [4];
  _Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>> local_48 [4];
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  local_44 [4];
  ulong local_40;
  CRandomList<unsigned_int> local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  
  local_60 = param_2;
  local_5f = 0xff;
  local_5e = param_4;
  local_5d = param_5;
  local_5c = param_6;
  (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14));
  puVar7 = &local_60;
  std::
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  ::find((ulonglong *)local_58);
  p_Var6 = local_58;
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  _Rb_tree_const_iterator(local_64,p_Var6);
  (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14),p_Var6,puVar7);
  std::
  map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
  ::end(local_50);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  _Rb_tree_const_iterator(local_54,(_Rb_tree_iterator *)local_50);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
          operator==(local_64,(_Rb_tree_const_iterator *)local_54);
  if (cVar1 != '\0') {
    local_5f = param_3;
    (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14));
    puVar7 = &local_60;
    std::
    map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
    ::find((ulonglong *)local_4c);
    p_Var6 = local_4c;
    std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
    _Rb_tree_const_iterator(local_68,p_Var6);
    (**(code **)(**(int **)(this + 0x14) + 4))(*(undefined4 *)(this + 0x14),p_Var6,puVar7);
    std::
    map<unsigned_long_long,OptionGroupChoiceValue,std::less<unsigned_long_long>,std::allocator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>>
    ::end(local_44);
    std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
    _Rb_tree_const_iterator(local_48,(_Rb_tree_iterator *)local_44);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>
            ::operator==(local_68,(_Rb_tree_const_iterator *)local_48);
    if (cVar1 != '\0') {
      return 0x29e;
    }
  }
  iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
          operator->(local_64);
  local_40 = *(int *)(iVar2 + 0x20) - 1;
  local_14 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x3ab0),&local_40);
  CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_2c,local_14);
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  operator->(local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
  std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
  operator->(local_64);
  std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,CRandomList<unsigned_int>>
            (local_3c,local_18,local_1c,local_2c,local_28,local_24,local_20);
  local_10 = CRandomList<unsigned_int>::get_value(local_3c);
  iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>::
          operator->(local_64);
  uVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)(iVar2 + 8))
  ;
  if (local_10 < uVar3) {
    iVar2 = std::_Rb_tree_const_iterator<std::pair<unsigned_long_long_const,OptionGroupChoiceValue>>
            ::operator->(local_64);
    puVar4 = (undefined4 *)
             std::vector<int,std::allocator<int>>::at
                       ((vector<int,std::allocator<int>> *)(iVar2 + 8),local_10);
    *param_7 = *puVar4;
    uVar5 = 0;
  }
  else {
    uVar5 = 0x2be;
  }
  return uVar5;
}

```

---

## _get_base_item

```asm
// === 085f1426 random_option::CRandomOptionItemHandle::_get_base_item  [0x085f1426-0x85f155f] ===
 85f1426:	55                   	push   %ebp
 85f1427:	89 e5                	mov    %esp,%ebp
 85f1429:	83 ec 38             	sub    $0x38,%esp
 85f142c:	8b 45 10             	mov    0x10(%ebp),%eax
 85f142f:	0f b6 d0             	movzbl %al,%edx
 85f1432:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1435:	0f b6 c0             	movzbl %al,%eax
 85f1438:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f143c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1440:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 85f1443:	89 04 24             	mov    %eax,(%esp)
 85f1446:	e8 03 2d 00 00       	call   85f414e <_ZN20RandomApplicationKeyC1Ehh>
 85f144b:	e8 60 fa ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1450:	8d 48 48             	lea    0x48(%eax),%ecx
 85f1453:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1456:	8d 55 e2             	lea    -0x1e(%ebp),%edx
 85f1459:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f145d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f1461:	89 04 24             	mov    %eax,(%esp)
 85f1464:	e8 2d 30 00 00       	call   85f4496 <_ZNKSt3mapI20RandomApplicationKey22BaseItemSelectionValueSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85f1469:	83 ec 04             	sub    $0x4,%esp
 85f146c:	e8 3f fa ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1471:	8d 50 48             	lea    0x48(%eax),%edx
 85f1474:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1477:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f147b:	89 04 24             	mov    %eax,(%esp)
 85f147e:	e8 3f 30 00 00       	call   85f44c2 <_ZNKSt3mapI20RandomApplicationKey22BaseItemSelectionValueSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85f1483:	83 ec 04             	sub    $0x4,%esp
 85f1486:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1489:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f148d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1490:	89 04 24             	mov    %eax,(%esp)
 85f1493:	e8 50 30 00 00       	call   85f44e8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22BaseItemSelectionValueEEneERKS5_>
 85f1498:	84 c0                	test   %al,%al
 85f149a:	0f 84 b9 00 00 00    	je     85f1559 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi+0x133>
 85f14a0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f14a3:	89 04 24             	mov    %eax,(%esp)
 85f14a6:	e8 51 30 00 00       	call   85f44fc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22BaseItemSelectionValueEEptEv>
 85f14ab:	8b 40 10             	mov    0x10(%eax),%eax
 85f14ae:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f14b1:	8b 45 08             	mov    0x8(%ebp),%eax
 85f14b4:	8b 40 04             	mov    0x4(%eax),%eax
 85f14b7:	8d 90 58 1d 00 00    	lea    0x1d58(%eax),%edx
 85f14bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f14c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f14c4:	89 14 24             	mov    %edx,(%esp)
 85f14c7:	e8 f2 a5 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f14cc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f14cf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f14d6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f14d9:	89 04 24             	mov    %eax,(%esp)
 85f14dc:	e8 1b 30 00 00       	call   85f44fc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22BaseItemSelectionValueEEptEv>
 85f14e1:	8d 50 04             	lea    0x4(%eax),%edx
 85f14e4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f14e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f14eb:	89 04 24             	mov    %eax,(%esp)
 85f14ee:	e8 5d 1e af ff       	call   80e3350 <_ZNKSt6vectorIjSaIjEE5beginEv>
 85f14f3:	83 ec 04             	sub    $0x4,%esp
 85f14f6:	eb 2b                	jmp    85f1523 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi+0xfd>
 85f14f8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f14fb:	89 04 24             	mov    %eax,(%esp)
 85f14fe:	e8 49 30 00 00       	call   85f454c <_ZNK9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEdeEv>
 85f1503:	8b 00                	mov    (%eax),%eax
 85f1505:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f1508:	0f 97 c0             	seta   %al
 85f150b:	84 c0                	test   %al,%al
 85f150d:	74 05                	je     85f1514 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi+0xee>
 85f150f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f1512:	eb 4a                	jmp    85f155e <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi+0x138>
 85f1514:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f1517:	89 04 24             	mov    %eax,(%esp)
 85f151a:	e8 17 30 00 00       	call   85f4536 <_ZN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEppEv>
 85f151f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f1523:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1526:	89 04 24             	mov    %eax,(%esp)
 85f1529:	e8 ce 2f 00 00       	call   85f44fc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22BaseItemSelectionValueEEptEv>
 85f152e:	8d 50 04             	lea    0x4(%eax),%edx
 85f1531:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f1534:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1538:	89 04 24             	mov    %eax,(%esp)
 85f153b:	e8 e4 1d af ff       	call   80e3324 <_ZNKSt6vectorIjSaIjEE3endEv>
 85f1540:	83 ec 04             	sub    $0x4,%esp
 85f1543:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f1546:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f154a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f154d:	89 04 24             	mov    %eax,(%esp)
 85f1550:	e8 b4 2f 00 00       	call   85f4509 <_ZN9__gnu_cxxneIPKjSt6vectorIjSaIjEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85f1555:	84 c0                	test   %al,%al
 85f1557:	75 9f                	jne    85f14f8 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi+0xd2>
 85f1559:	b8 00 00 00 00       	mov    $0x0,%eax
 85f155e:	c9                   	leave
 85f155f:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::_get_base_item @ 0x85f1426

/* random_option::CRandomOptionItemHandle::_get_base_item(ENUM_RARITY, int) */

int __thiscall
random_option::CRandomOptionItemHandle::_get_base_item
          (CRandomOptionItemHandle *this,uchar param_2,uchar param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
  local_2c [4];
  RandomApplicationKey local_28 [6];
  RandomApplicationKey local_22 [2];
  map<RandomApplicationKey,BaseItemSelectionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>>
  local_20 [4];
  ulong local_1c;
  __normal_iterator local_18 [4];
  uint local_14;
  int local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_22,param_2,param_3);
  GetRandomOption();
  std::
  map<RandomApplicationKey,BaseItemSelectionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>>
  ::find(local_28);
  GetRandomOption();
  std::
  map<RandomApplicationKey,BaseItemSelectionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                        *)local_28,(_Rb_tree_const_iterator *)local_20);
  if (cVar1 != '\0') {
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                        *)local_28);
    local_1c = *(ulong *)(iVar3 + 0x10);
    local_14 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x1d58),&local_1c);
    local_10 = 0;
    std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>::
    operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                *)local_28);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    while( true ) {
      std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>::
      operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,BaseItemSelectionValue>>
                  *)local_28);
      std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
      bVar2 = __gnu_cxx::operator!=(local_2c,local_18);
      if (!bVar2) break;
      puVar4 = (uint *)__gnu_cxx::
                       __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
                       ::operator*(local_2c);
      if (local_14 < *puVar4) {
        return local_10;
      }
      __gnu_cxx::
      __normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>
      ::operator++(local_2c);
      local_10 = local_10 + 1;
    }
  }
  return 0;
}

```

---

## _get_level_limit

```asm
// === 085f0f9a random_option::CRandomOptionItemHandle::_get_level_limit  [0x085f0f9a-0x85f1087] ===
 85f0f9a:	55                   	push   %ebp
 85f0f9b:	89 e5                	mov    %esp,%ebp
 85f0f9d:	53                   	push   %ebx
 85f0f9e:	83 ec 34             	sub    $0x34,%esp
 85f0fa1:	8b 45 10             	mov    0x10(%ebp),%eax
 85f0fa4:	0f b6 d0             	movzbl %al,%edx
 85f0fa7:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f0faa:	0f b6 c0             	movzbl %al,%eax
 85f0fad:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f0fb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f0fb5:	8d 45 ea             	lea    -0x16(%ebp),%eax
 85f0fb8:	89 04 24             	mov    %eax,(%esp)
 85f0fbb:	e8 8e 31 00 00       	call   85f414e <_ZN20RandomApplicationKeyC1Ehh>
 85f0fc0:	e8 eb fe ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f0fc5:	8d 48 18             	lea    0x18(%eax),%ecx
 85f0fc8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f0fcb:	8d 55 ea             	lea    -0x16(%ebp),%edx
 85f0fce:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f0fd2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f0fd6:	89 04 24             	mov    %eax,(%esp)
 85f0fd9:	e8 22 33 00 00       	call   85f4300 <_ZNKSt3mapI20RandomApplicationKey23LevelLimitDecisionValueSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85f0fde:	83 ec 04             	sub    $0x4,%esp
 85f0fe1:	e8 ca fe ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f0fe6:	8d 50 18             	lea    0x18(%eax),%edx
 85f0fe9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f0fec:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f0ff0:	89 04 24             	mov    %eax,(%esp)
 85f0ff3:	e8 34 33 00 00       	call   85f432c <_ZNKSt3mapI20RandomApplicationKey23LevelLimitDecisionValueSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85f0ff8:	83 ec 04             	sub    $0x4,%esp
 85f0ffb:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f0ffe:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1002:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1005:	89 04 24             	mov    %eax,(%esp)
 85f1008:	e8 45 33 00 00       	call   85f4352 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey23LevelLimitDecisionValueEEneERKS5_>
 85f100d:	84 c0                	test   %al,%al
 85f100f:	74 6e                	je     85f107f <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi+0xe5>
 85f1011:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1014:	89 04 24             	mov    %eax,(%esp)
 85f1017:	e8 4a 33 00 00       	call   85f4366 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey23LevelLimitDecisionValueEEptEv>
 85f101c:	8b 58 04             	mov    0x4(%eax),%ebx
 85f101f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1022:	89 04 24             	mov    %eax,(%esp)
 85f1025:	e8 3c 33 00 00       	call   85f4366 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey23LevelLimitDecisionValueEEptEv>
 85f102a:	8b 40 08             	mov    0x8(%eax),%eax
 85f102d:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85f1030:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f1033:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1036:	8b 40 04             	mov    0x4(%eax),%eax
 85f1039:	8d 90 c8 09 00 00    	lea    0x9c8(%eax),%edx
 85f103f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f1042:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1046:	89 14 24             	mov    %edx,(%esp)
 85f1049:	e8 70 aa ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f104e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f1051:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1054:	89 04 24             	mov    %eax,(%esp)
 85f1057:	e8 0a 33 00 00       	call   85f4366 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey23LevelLimitDecisionValueEEptEv>
 85f105c:	8b 40 04             	mov    0x4(%eax),%eax
 85f105f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f1062:	0f 92 c0             	setb   %al
 85f1065:	84 c0                	test   %al,%al
 85f1067:	74 16                	je     85f107f <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi+0xe5>
 85f1069:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 85f106d:	75 08                	jne    85f1077 <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi+0xdd>
 85f106f:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1072:	83 c0 04             	add    $0x4,%eax
 85f1075:	eb 0b                	jmp    85f1082 <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi+0xe8>
 85f1077:	8b 45 10             	mov    0x10(%ebp),%eax
 85f107a:	83 c0 05             	add    $0x5,%eax
 85f107d:	eb 03                	jmp    85f1082 <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi+0xe8>
 85f107f:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1082:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f1085:	c9                   	leave
 85f1086:	c3                   	ret
 85f1087:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::_get_level_limit @ 0x85f0f9a

/* random_option::CRandomOptionItemHandle::_get_level_limit(ENUM_RARITY, int) */

int __thiscall
random_option::CRandomOptionItemHandle::_get_level_limit
          (CRandomOptionItemHandle *this,uchar param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RandomApplicationKey local_20 [6];
  RandomApplicationKey local_1a [2];
  map<RandomApplicationKey,LevelLimitDecisionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_1a,param_2,(uchar)param_3);
  GetRandomOption();
  std::
  map<RandomApplicationKey,LevelLimitDecisionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>>
  ::find(local_20);
  GetRandomOption();
  std::
  map<RandomApplicationKey,LevelLimitDecisionValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>>
  ::end(local_18);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
          operator!=((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                      *)local_20,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                        *)local_20);
    iVar2 = *(int *)(iVar2 + 4);
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                        *)local_20);
    local_14 = iVar2 + *(int *)(iVar3 + 8);
    local_10 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x9c8),&local_14);
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,LevelLimitDecisionValue>>
                        *)local_20);
    if (*(uint *)(iVar2 + 4) < local_10) {
      if (param_3 == 1) {
        param_3 = 5;
      }
      else {
        param_3 = param_3 + 5;
      }
    }
  }
  return param_3;
}

```

---

## _get_option_quantity

```asm
// === 085f25b0 random_option::CRandomOptionItemHandle::_get_option_quantity  [0x085f25b0-0x85f2881] ===
 85f25b0:	55                   	push   %ebp
 85f25b1:	89 e5                	mov    %esp,%ebp
 85f25b3:	56                   	push   %esi
 85f25b4:	53                   	push   %ebx
 85f25b5:	83 c4 80             	add    $0xffffff80,%esp
 85f25b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f25bb:	88 45 ac             	mov    %al,-0x54(%ebp)
 85f25be:	c6 45 ad ff          	movb   $0xff,-0x53(%ebp)
 85f25c2:	8b 45 14             	mov    0x14(%ebp),%eax
 85f25c5:	88 45 ae             	mov    %al,-0x52(%ebp)
 85f25c8:	8b 45 18             	mov    0x18(%ebp),%eax
 85f25cb:	88 45 af             	mov    %al,-0x51(%ebp)
 85f25ce:	e8 dd e8 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f25d3:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 85f25d9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f25dc:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85f25df:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f25e3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f25e7:	89 04 24             	mov    %eax,(%esp)
 85f25ea:	e8 ad 20 00 00       	call   85f469c <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f25ef:	83 ec 04             	sub    $0x4,%esp
 85f25f2:	e8 b9 e8 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f25f7:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 85f25fd:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f2600:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2604:	89 04 24             	mov    %eax,(%esp)
 85f2607:	e8 bc 20 00 00       	call   85f46c8 <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f260c:	83 ec 04             	sub    $0x4,%esp
 85f260f:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f2612:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2616:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f2619:	89 04 24             	mov    %eax,(%esp)
 85f261c:	e8 cd 20 00 00       	call   85f46ee <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEeqERKS4_>
 85f2621:	84 c0                	test   %al,%al
 85f2623:	74 67                	je     85f268c <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0xdc>
 85f2625:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2628:	88 45 ad             	mov    %al,-0x53(%ebp)
 85f262b:	e8 80 e8 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2630:	8d 88 b4 00 00 00    	lea    0xb4(%eax),%ecx
 85f2636:	8d 45 98             	lea    -0x68(%ebp),%eax
 85f2639:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85f263c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2640:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f2644:	89 04 24             	mov    %eax,(%esp)
 85f2647:	e8 50 20 00 00       	call   85f469c <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f264c:	83 ec 04             	sub    $0x4,%esp
 85f264f:	e8 5c e8 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2654:	8d 90 b4 00 00 00    	lea    0xb4(%eax),%edx
 85f265a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f265d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2661:	89 04 24             	mov    %eax,(%esp)
 85f2664:	e8 5f 20 00 00       	call   85f46c8 <_ZNKSt3mapIi19OptionQuantityValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f2669:	83 ec 04             	sub    $0x4,%esp
 85f266c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f266f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2673:	8d 45 98             	lea    -0x68(%ebp),%eax
 85f2676:	89 04 24             	mov    %eax,(%esp)
 85f2679:	e8 70 20 00 00       	call   85f46ee <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEeqERKS4_>
 85f267e:	84 c0                	test   %al,%al
 85f2680:	74 0a                	je     85f268c <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0xdc>
 85f2682:	bb 6c 02 00 00       	mov    $0x26c,%ebx
 85f2687:	e9 ea 01 00 00       	jmp    85f2876 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x2c6>
 85f268c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f268f:	89 04 24             	mov    %eax,(%esp)
 85f2692:	e8 6b 20 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f2697:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85f269b:	66 85 c0             	test   %ax,%ax
 85f269e:	0f 94 c0             	sete   %al
 85f26a1:	84 c0                	test   %al,%al
 85f26a3:	74 0a                	je     85f26af <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0xff>
 85f26a5:	bb 70 02 00 00       	mov    $0x270,%ebx
 85f26aa:	e9 c7 01 00 00       	jmp    85f2876 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x2c6>
 85f26af:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f26b2:	89 04 24             	mov    %eax,(%esp)
 85f26b5:	e8 c4 fd ae ff       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 85f26ba:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85f26c1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f26c8:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f26cb:	89 04 24             	mov    %eax,(%esp)
 85f26ce:	e8 2f 20 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f26d3:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85f26d7:	98                   	cwtl
 85f26d8:	83 e8 01             	sub    $0x1,%eax
 85f26db:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f26de:	eb 41                	jmp    85f2721 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x171>
 85f26e0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f26e3:	e8 c8 e7 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f26e8:	05 a8 00 00 00       	add    $0xa8,%eax
 85f26ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85f26f1:	89 04 24             	mov    %eax,(%esp)
 85f26f4:	e8 55 25 00 00       	call   85f4c4e <_ZNKSt6vectorI13QuantityRatioSaIS0_EEixEj>
 85f26f9:	8b 40 04             	mov    0x4(%eax),%eax
 85f26fc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f26ff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f2702:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85f2705:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85f2708:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f270c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f270f:	89 04 24             	mov    %eax,(%esp)
 85f2712:	e8 af 00 b6 ff       	call   81527c6 <_ZNSt6vectorIjSaIjEE9push_backEOj>
 85f2717:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f271a:	01 45 e8             	add    %eax,-0x18(%ebp)
 85f271d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f2721:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f2724:	89 04 24             	mov    %eax,(%esp)
 85f2727:	e8 d6 1f 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f272c:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85f2730:	98                   	cwtl
 85f2731:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f2734:	0f 9f c0             	setg   %al
 85f2737:	84 c0                	test   %al,%al
 85f2739:	75 a5                	jne    85f26e0 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x130>
 85f273b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f273e:	89 04 24             	mov    %eax,(%esp)
 85f2741:	e8 26 01 af ff       	call   80e286c <_ZNKSt6vectorIjSaIjEE5emptyEv>
 85f2746:	84 c0                	test   %al,%al
 85f2748:	74 0a                	je     85f2754 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x1a4>
 85f274a:	bb 7d 02 00 00       	mov    $0x27d,%ebx
 85f274f:	e9 17 01 00 00       	jmp    85f286b <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x2bb>
 85f2754:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f2757:	89 04 24             	mov    %eax,(%esp)
 85f275a:	e8 03 fd ae ff       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 85f275f:	83 f8 01             	cmp    $0x1,%eax
 85f2762:	0f 94 c0             	sete   %al
 85f2765:	84 c0                	test   %al,%al
 85f2767:	74 21                	je     85f278a <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x1da>
 85f2769:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f276c:	89 04 24             	mov    %eax,(%esp)
 85f276f:	e8 8e 1f 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f2774:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85f2778:	0f bf d0             	movswl %ax,%edx
 85f277b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f277e:	89 10                	mov    %edx,(%eax)
 85f2780:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f2785:	e9 e1 00 00 00       	jmp    85f286b <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x2bb>
 85f278a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f278d:	89 45 bc             	mov    %eax,-0x44(%ebp)
 85f2790:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2793:	8b 40 04             	mov    0x4(%eax),%eax
 85f2796:	8d 90 e8 30 00 00    	lea    0x30e8(%eax),%edx
 85f279c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f279f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f27a3:	89 14 24             	mov    %edx,(%esp)
 85f27a6:	e8 13 93 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f27ab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f27ae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f27b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f27b5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f27b8:	89 04 24             	mov    %eax,(%esp)
 85f27bb:	e8 44 21 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f27c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f27c3:	8d 55 9c             	lea    -0x64(%ebp),%edx
 85f27c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f27ca:	89 04 24             	mov    %eax,(%esp)
 85f27cd:	e8 b8 02 af ff       	call   80e2a8a <_ZNSt6vectorIjSaIjEE3endEv>
 85f27d2:	83 ec 04             	sub    $0x4,%esp
 85f27d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f27d8:	8d 55 9c             	lea    -0x64(%ebp),%edx
 85f27db:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f27df:	89 04 24             	mov    %eax,(%esp)
 85f27e2:	e8 67 10 af ff       	call   80e384e <_ZNSt6vectorIjSaIjEE5beginEv>
 85f27e7:	83 ec 04             	sub    $0x4,%esp
 85f27ea:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f27ed:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85f27f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f27f4:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85f27f7:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f27fb:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85f27fe:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f2802:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f2805:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2809:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f280c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2810:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f2813:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2817:	89 04 24             	mov    %eax,(%esp)
 85f281a:	e8 41 24 00 00       	call   85f4c60 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPjSt6vectorIjSaIjEEEE11CRandomListIjEET0_T_SA_S9_>
 85f281f:	83 ec 04             	sub    $0x4,%esp
 85f2822:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f2825:	89 04 24             	mov    %eax,(%esp)
 85f2828:	e8 73 21 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f282d:	89 c3                	mov    %eax,%ebx
 85f282f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f2832:	89 04 24             	mov    %eax,(%esp)
 85f2835:	e8 c8 1e 00 00       	call   85f4702 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi19OptionQuantityValueEEptEv>
 85f283a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85f283e:	98                   	cwtl
 85f283f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85f2842:	89 c2                	mov    %eax,%edx
 85f2844:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f2847:	89 10                	mov    %edx,(%eax)
 85f2849:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f284e:	eb 1b                	jmp    85f286b <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi+0x2bb>
 85f2850:	89 d3                	mov    %edx,%ebx
 85f2852:	89 c6                	mov    %eax,%esi
 85f2854:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f2857:	89 04 24             	mov    %eax,(%esp)
 85f285a:	e8 33 fc ae ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85f285f:	89 f0                	mov    %esi,%eax
 85f2861:	89 da                	mov    %ebx,%edx
 85f2863:	89 04 24             	mov    %eax,(%esp)
 85f2866:	e8 e5 0e 4f 00       	call   8ae3750 <_Unwind_Resume>
 85f286b:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f286e:	89 04 24             	mov    %eax,(%esp)
 85f2871:	e8 1c fc ae ff       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 85f2876:	89 d8                	mov    %ebx,%eax
 85f2878:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f287b:	83 c4 00             	add    $0x0,%esp
 85f287e:	5b                   	pop    %ebx
 85f287f:	5e                   	pop    %esi
 85f2880:	5d                   	pop    %ebp
 85f2881:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::_get_option_quantity @ 0x85f25b0

/* random_option::CRandomOptionItemHandle::_get_option_quantity(ENUM_RARITY, int, int, int, int&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_get_option_quantity
          (CRandomOptionItemHandle *this,undefined1 param_2,undefined1 param_3,undefined1 param_4,
          undefined1 param_5,int *param_6)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_6c [4];
  vector<unsigned_int,std::allocator<unsigned_int>> local_68 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>> local_5c [4];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_54 [4];
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  local_50 [4];
  uint local_4c;
  ulong local_48;
  CRandomList<unsigned_int> local_44 [16];
  CRandomList<unsigned_int> local_34 [24];
  ulong local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  piVar6 = (int *)&stack0xffffff74;
  local_58 = param_2;
  local_57 = 0xff;
  local_56 = param_4;
  local_55 = param_5;
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::find((int *)local_5c);
  GetRandomOption();
  std::
  map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
  ::end(local_54);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                    (local_5c,(_Rb_tree_const_iterator *)local_54);
  if (cVar2 != '\0') {
    local_57 = param_3;
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::find((int *)local_6c);
    GetRandomOption();
    std::
    map<int,OptionQuantityValue,std::less<int>,std::allocator<std::pair<int_const,OptionQuantityValue>>>
    ::end(local_50);
    cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator==
                      (local_6c,(_Rb_tree_const_iterator *)local_50);
    if (cVar2 != '\0') {
      return 0x26c;
    }
  }
  iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                    (local_5c);
  if (*(short *)(iVar3 + 6) == 0) {
    uVar5 = 0x270;
  }
  else {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_68);
    local_1c = 0;
    local_18 = 0;
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                      (local_5c);
    local_10 = (int)*(short *)(iVar3 + 4) - 1;
    while (iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::
                   operator->(local_5c), uVar1 = local_10,
          (int)local_10 < (int)*(short *)(iVar3 + 6)) {
                    /* try { // try from 085f26e3 to 085f281e has its CatchHandler @ 085f2850 */
      iVar3 = GetRandomOption();
      iVar3 = std::vector<QuantityRatio,std::allocator<QuantityRatio>>::operator[]
                        ((vector<QuantityRatio,std::allocator<QuantityRatio>> *)(iVar3 + 0xa8),uVar1
                        );
      local_4c = *(uint *)(iVar3 + 4);
      local_18 = local_4c;
      std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back(local_68,&local_4c);
      local_1c = local_1c + local_18;
      local_10 = local_10 + 1;
    }
    cVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
    if (cVar2 == '\0') {
      iVar3 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_68);
      if (iVar3 == 1) {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                          (local_5c);
        *param_6 = (int)*(short *)(iVar3 + 4);
        uVar5 = 0;
      }
      else {
        local_48 = local_1c;
        local_14 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x30e8),&local_48);
        CRandomList<unsigned_int>::CRandomList(local_34,local_14);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
        std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
        std::
        for_each<__gnu_cxx::__normal_iterator<unsigned_int*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,CRandomList<unsigned_int>>
                  ();
        piVar6 = (int *)&stack0xffffff70;
        iVar3 = CRandomList<unsigned_int>::get_value(local_44);
        iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionQuantityValue>>::operator->
                          (local_5c);
        *param_6 = iVar3 + *(short *)(iVar4 + 4);
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0x27d;
      piVar6 = (int *)&stack0xffffff74;
    }
    *piVar6 = (int)local_68;
    piVar6[-1] = 0x85f2876;
    std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector
              ((vector<unsigned_int,std::allocator<unsigned_int>> *)*piVar6);
  }
  return uVar5;
}

```

---

## _get_option_type

```asm
// === 085f2338 random_option::CRandomOptionItemHandle::_get_option_type  [0x085f2338-0x85f25af] ===
 85f2338:	55                   	push   %ebp
 85f2339:	89 e5                	mov    %esp,%ebp
 85f233b:	81 ec 98 00 00 00    	sub    $0x98,%esp
 85f2341:	8b 45 14             	mov    0x14(%ebp),%eax
 85f2344:	0f b6 d0             	movzbl %al,%edx
 85f2347:	8b 45 10             	mov    0x10(%ebp),%eax
 85f234a:	0f b6 c0             	movzbl %al,%eax
 85f234d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2351:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2355:	8d 45 ae             	lea    -0x52(%ebp),%eax
 85f2358:	89 04 24             	mov    %eax,(%esp)
 85f235b:	e8 ee 1d 00 00       	call   85f414e <_ZN20RandomApplicationKeyC1Ehh>
 85f2360:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2363:	8b 40 14             	mov    0x14(%eax),%eax
 85f2366:	8b 00                	mov    (%eax),%eax
 85f2368:	8b 10                	mov    (%eax),%edx
 85f236a:	8b 45 08             	mov    0x8(%ebp),%eax
 85f236d:	8b 40 14             	mov    0x14(%eax),%eax
 85f2370:	89 04 24             	mov    %eax,(%esp)
 85f2373:	ff d2                	call   *%edx
 85f2375:	8d 55 a8             	lea    -0x58(%ebp),%edx
 85f2378:	8d 4d ae             	lea    -0x52(%ebp),%ecx
 85f237b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85f237f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2383:	89 14 24             	mov    %edx,(%esp)
 85f2386:	e8 61 27 00 00       	call   85f4aec <_ZNSt3mapI20RandomApplicationKeyS_Ii16RandomOptionGiveSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE4findERSA_>
 85f238b:	83 ec 04             	sub    $0x4,%esp
 85f238e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f2391:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2395:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f2398:	89 04 24             	mov    %eax,(%esp)
 85f239b:	e8 78 27 00 00       	call   85f4b18 <_ZNSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEC1ERKSt17_Rb_tree_iteratorISB_E>
 85f23a0:	8b 45 08             	mov    0x8(%ebp),%eax
 85f23a3:	8b 40 14             	mov    0x14(%eax),%eax
 85f23a6:	8b 00                	mov    (%eax),%eax
 85f23a8:	8b 10                	mov    (%eax),%edx
 85f23aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85f23ad:	8b 40 14             	mov    0x14(%eax),%eax
 85f23b0:	89 04 24             	mov    %eax,(%esp)
 85f23b3:	ff d2                	call   *%edx
 85f23b5:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 85f23b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f23bc:	89 14 24             	mov    %edx,(%esp)
 85f23bf:	e8 64 27 00 00       	call   85f4b28 <_ZNSt3mapI20RandomApplicationKeyS_Ii16RandomOptionGiveSt4lessIiESaISt4pairIKiS1_EEES2_IS0_ESaIS4_IKS0_S8_EEE3endEv>
 85f23c4:	83 ec 04             	sub    $0x4,%esp
 85f23c7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f23ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f23ce:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f23d1:	89 04 24             	mov    %eax,(%esp)
 85f23d4:	e8 3f 27 00 00       	call   85f4b18 <_ZNSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEC1ERKSt17_Rb_tree_iteratorISB_E>
 85f23d9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f23dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f23e0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f23e3:	89 04 24             	mov    %eax,(%esp)
 85f23e6:	e8 63 27 00 00       	call   85f4b4e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEeqERKSC_>
 85f23eb:	84 c0                	test   %al,%al
 85f23ed:	74 0a                	je     85f23f9 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0xc1>
 85f23ef:	b8 3f 02 00 00       	mov    $0x23f,%eax
 85f23f4:	e9 b4 01 00 00       	jmp    85f25ad <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0x275>
 85f23f9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85f2400:	c7 45 b8 ff ff ff ff 	movl   $0xffffffff,-0x48(%ebp)
 85f2407:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f240a:	89 04 24             	mov    %eax,(%esp)
 85f240d:	e8 50 27 00 00       	call   85f4b62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 85f2412:	8d 48 04             	lea    0x4(%eax),%ecx
 85f2415:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2418:	8d 55 b8             	lea    -0x48(%ebp),%edx
 85f241b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f241f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f2423:	89 04 24             	mov    %eax,(%esp)
 85f2426:	e8 45 27 00 00       	call   85f4b70 <_ZNKSt3mapIi16RandomOptionGiveSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f242b:	83 ec 04             	sub    $0x4,%esp
 85f242e:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f2431:	89 04 24             	mov    %eax,(%esp)
 85f2434:	e8 29 27 00 00       	call   85f4b62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 85f2439:	8d 50 04             	lea    0x4(%eax),%edx
 85f243c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f243f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2443:	89 04 24             	mov    %eax,(%esp)
 85f2446:	e8 51 27 00 00       	call   85f4b9c <_ZNKSt3mapIi16RandomOptionGiveSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f244b:	83 ec 04             	sub    $0x4,%esp
 85f244e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f2451:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2455:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2458:	89 04 24             	mov    %eax,(%esp)
 85f245b:	e8 62 27 00 00       	call   85f4bc2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16RandomOptionGiveEEneERKS4_>
 85f2460:	84 c0                	test   %al,%al
 85f2462:	74 16                	je     85f247a <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0x142>
 85f2464:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2467:	89 04 24             	mov    %eax,(%esp)
 85f246a:	e8 67 27 00 00       	call   85f4bd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16RandomOptionGiveEEptEv>
 85f246f:	83 c0 04             	add    $0x4,%eax
 85f2472:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f2475:	e9 80 00 00 00       	jmp    85f24fa <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0x1c2>
 85f247a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f247d:	89 04 24             	mov    %eax,(%esp)
 85f2480:	e8 dd 26 00 00       	call   85f4b62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 85f2485:	8d 48 04             	lea    0x4(%eax),%ecx
 85f2488:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85f248b:	8d 55 18             	lea    0x18(%ebp),%edx
 85f248e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2492:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f2496:	89 04 24             	mov    %eax,(%esp)
 85f2499:	e8 d2 26 00 00       	call   85f4b70 <_ZNKSt3mapIi16RandomOptionGiveSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f249e:	83 ec 04             	sub    $0x4,%esp
 85f24a1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85f24a4:	89 45 a0             	mov    %eax,-0x60(%ebp)
 85f24a7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f24aa:	89 04 24             	mov    %eax,(%esp)
 85f24ad:	e8 b0 26 00 00       	call   85f4b62 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKeySt3mapIi16RandomOptionGiveSt4lessIiESaIS0_IKiS4_EEEEEptEv>
 85f24b2:	8d 50 04             	lea    0x4(%eax),%edx
 85f24b5:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f24b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f24bc:	89 04 24             	mov    %eax,(%esp)
 85f24bf:	e8 d8 26 00 00       	call   85f4b9c <_ZNKSt3mapIi16RandomOptionGiveSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f24c4:	83 ec 04             	sub    $0x4,%esp
 85f24c7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f24ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f24ce:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f24d1:	89 04 24             	mov    %eax,(%esp)
 85f24d4:	e8 e9 26 00 00       	call   85f4bc2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16RandomOptionGiveEEneERKS4_>
 85f24d9:	84 c0                	test   %al,%al
 85f24db:	74 13                	je     85f24f0 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0x1b8>
 85f24dd:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f24e0:	89 04 24             	mov    %eax,(%esp)
 85f24e3:	e8 ee 26 00 00       	call   85f4bd6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16RandomOptionGiveEEptEv>
 85f24e8:	83 c0 04             	add    $0x4,%eax
 85f24eb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f24ee:	eb 0a                	jmp    85f24fa <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0x1c2>
 85f24f0:	b8 55 02 00 00       	mov    $0x255,%eax
 85f24f5:	e9 b3 00 00 00       	jmp    85f25ad <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh+0x275>
 85f24fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f24fd:	8b 40 0c             	mov    0xc(%eax),%eax
 85f2500:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85f2503:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2506:	8b 40 04             	mov    0x4(%eax),%eax
 85f2509:	8d 90 20 27 00 00    	lea    0x2720(%eax),%edx
 85f250f:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85f2512:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2516:	89 14 24             	mov    %edx,(%esp)
 85f2519:	e8 a0 95 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f251e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f2521:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f2524:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2528:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f252b:	89 04 24             	mov    %eax,(%esp)
 85f252e:	e8 d1 23 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f2533:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f2536:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f2539:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f253d:	89 04 24             	mov    %eax,(%esp)
 85f2540:	e8 df 0d af ff       	call   80e3324 <_ZNKSt6vectorIjSaIjEE3endEv>
 85f2545:	83 ec 04             	sub    $0x4,%esp
 85f2548:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85f254b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f254e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2552:	89 04 24             	mov    %eax,(%esp)
 85f2555:	e8 f6 0d af ff       	call   80e3350 <_ZNKSt6vectorIjSaIjEE5beginEv>
 85f255a:	83 ec 04             	sub    $0x4,%esp
 85f255d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f2560:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85f2563:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f2567:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f256a:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f256e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f2571:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f2575:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f2578:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f257c:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85f257f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2583:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85f2586:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f258a:	89 04 24             	mov    %eax,(%esp)
 85f258d:	e8 51 26 00 00       	call   85f4be3 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPKjSt6vectorIjSaIjEEEE11CRandomListIjEET0_T_SB_SA_>
 85f2592:	83 ec 04             	sub    $0x4,%esp
 85f2595:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f2598:	89 04 24             	mov    %eax,(%esp)
 85f259b:	e8 00 24 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f25a0:	8d 50 01             	lea    0x1(%eax),%edx
 85f25a3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f25a6:	88 10                	mov    %dl,(%eax)
 85f25a8:	b8 00 00 00 00       	mov    $0x0,%eax
 85f25ad:	c9                   	leave
 85f25ae:	c3                   	ret
 85f25af:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::_get_option_type @ 0x85f2338

/* random_option::CRandomOptionItemHandle::_get_option_type(unsigned long, ENUM_RARITY, int, int,
   unsigned char&) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_get_option_type
          (CRandomOptionItemHandle *this,undefined4 param_1,uchar param_3,uchar param_4,
          undefined4 param_5,char *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator *p_Var4;
  RandomApplicationKey *pRVar5;
  int local_70 [3];
  int local_64;
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  local_60 [4];
  RandomApplicationKey local_5c [6];
  RandomApplicationKey local_56 [2];
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  local_54 [4];
  map<RandomApplicationKey,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>>
  local_50 [4];
  undefined4 local_4c;
  map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
  local_48 [4];
  map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
  local_44 [4];
  ulong local_40;
  CRandomList<unsigned_int> local_3c [16];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_56,param_3,param_4);
  (**(code **)**(undefined4 **)(this + 0x14))(*(undefined4 *)(this + 0x14));
  pRVar5 = local_56;
  std::
  map<RandomApplicationKey,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>>
  ::find(local_5c);
  p_Var4 = (_Rb_tree_iterator *)local_5c;
  std::
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  ::_Rb_tree_const_iterator(local_60,p_Var4);
  (**(code **)**(undefined4 **)(this + 0x14))(*(undefined4 *)(this + 0x14),p_Var4,pRVar5);
  std::
  map<RandomApplicationKey,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>>
  ::end(local_50);
  std::
  _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
  ::_Rb_tree_const_iterator(local_54,(_Rb_tree_iterator *)local_50);
  cVar1 = std::
          _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
          ::operator==(local_60,(_Rb_tree_const_iterator *)local_54);
  if (cVar1 == '\0') {
    local_14 = 0;
    local_4c = 0xffffffff;
    std::
    _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
    ::operator->(local_60);
    std::
    map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>::
    find(&local_64);
    std::
    _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
    ::operator->(local_60);
    std::
    map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>::
    end(local_48);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator!=
                      ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64,
                       (_Rb_tree_const_iterator *)local_48);
    if (cVar1 == '\0') {
      std::
      _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
      ::operator->(local_60);
      std::
      map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
      ::find(local_70);
      local_64 = local_70[0];
      std::
      _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,std::map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>>>
      ::operator->(local_60);
      std::
      map<int,RandomOptionGive,std::less<int>,std::allocator<std::pair<int_const,RandomOptionGive>>>
      ::end(local_44);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator!=
                        ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64
                         ,(_Rb_tree_const_iterator *)local_44);
      if (cVar1 == '\0') {
        return 0x255;
      }
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64
                        );
    }
    else {
      iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>>::operator->
                        ((_Rb_tree_const_iterator<std::pair<int_const,RandomOptionGive>> *)&local_64
                        );
    }
    local_14 = iVar3 + 4;
    local_40 = *(ulong *)(iVar3 + 0x10);
    local_10 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x2720),&local_40);
    CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_2c,local_10);
    std::vector<unsigned_int,std::allocator<unsigned_int>>::end();
    std::vector<unsigned_int,std::allocator<unsigned_int>>::begin();
    std::
    for_each<__gnu_cxx::__normal_iterator<unsigned_int_const*,std::vector<unsigned_int,std::allocator<unsigned_int>>>,CRandomList<unsigned_int>>
              (local_3c,local_18,local_1c,local_2c,local_28,local_24,local_20);
    cVar1 = CRandomList<unsigned_int>::get_value(local_3c);
    *param_6 = cVar1 + '\x01';
    uVar2 = 0;
  }
  else {
    uVar2 = 0x23f;
  }
  return uVar2;
}

```

---

## _get_option_value

```asm
// === 085f2b02 random_option::CRandomOptionItemHandle::_get_option_value  [0x085f2b02-0x85f2c49] ===
 85f2b02:	55                   	push   %ebp
 85f2b03:	89 e5                	mov    %esp,%ebp
 85f2b05:	81 ec a8 00 00 00    	sub    $0xa8,%esp
 85f2b0b:	e8 a0 e3 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2b10:	8b 80 f0 00 00 00    	mov    0xf0(%eax),%eax
 85f2b16:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85f2b19:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2b1c:	8b 40 04             	mov    0x4(%eax),%eax
 85f2b1f:	8d 90 78 44 00 00    	lea    0x4478(%eax),%edx
 85f2b25:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f2b28:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2b2c:	89 14 24             	mov    %edx,(%esp)
 85f2b2f:	e8 8a 8f ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f2b34:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f2b37:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f2b3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2b3e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85f2b41:	89 04 24             	mov    %eax,(%esp)
 85f2b44:	e8 5d 22 00 00       	call   85f4da6 <_ZN13CRandomListExI16OptionValueRatioEC1Ej>
 85f2b49:	e8 62 e3 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2b4e:	8d 90 e4 00 00 00    	lea    0xe4(%eax),%edx
 85f2b54:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f2b57:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2b5b:	89 04 24             	mov    %eax,(%esp)
 85f2b5e:	e8 17 22 00 00       	call   85f4d7a <_ZNKSt6vectorI16OptionValueRatioSaIS0_EE3endEv>
 85f2b63:	83 ec 04             	sub    $0x4,%esp
 85f2b66:	e8 45 e3 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2b6b:	8d 90 e4 00 00 00    	lea    0xe4(%eax),%edx
 85f2b71:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f2b74:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2b78:	89 04 24             	mov    %eax,(%esp)
 85f2b7b:	e8 ce 21 00 00       	call   85f4d4e <_ZNKSt6vectorI16OptionValueRatioSaIS0_EE5beginEv>
 85f2b80:	83 ec 04             	sub    $0x4,%esp
 85f2b83:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f2b86:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85f2b89:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f2b8d:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85f2b90:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f2b94:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85f2b97:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f2b9b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85f2b9e:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2ba2:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85f2ba5:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f2ba9:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f2bac:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f2bb0:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f2bb3:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2bb7:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f2bba:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2bbe:	89 04 24             	mov    %eax,(%esp)
 85f2bc1:	e8 10 22 00 00       	call   85f4dd6 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPK16OptionValueRatioSt6vectorIS2_SaIS2_EEEE13CRandomListExIS2_EET0_T_SC_SB_>
 85f2bc6:	83 ec 04             	sub    $0x4,%esp
 85f2bc9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2bcc:	8d 55 b0             	lea    -0x50(%ebp),%edx
 85f2bcf:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2bd3:	89 04 24             	mov    %eax,(%esp)
 85f2bd6:	e8 7f 22 00 00       	call   85f4e5a <_ZN13CRandomListExI16OptionValueRatioE9get_valueEv>
 85f2bdb:	83 ec 04             	sub    $0x4,%esp
 85f2bde:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f2be1:	8b 55 10             	mov    0x10(%ebp),%edx
 85f2be4:	89 d1                	mov    %edx,%ecx
 85f2be6:	29 c1                	sub    %eax,%ecx
 85f2be8:	89 c8                	mov    %ecx,%eax
 85f2bea:	89 45 94             	mov    %eax,-0x6c(%ebp)
 85f2bed:	db 45 94             	fildl  -0x6c(%ebp)
 85f2bf0:	d9 45 a0             	flds   -0x60(%ebp)
 85f2bf3:	de c9                	fmulp  %st,%st(1)
 85f2bf5:	d9 7d 92             	fnstcw -0x6e(%ebp)
 85f2bf8:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 85f2bfc:	b4 0c                	mov    $0xc,%ah
 85f2bfe:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 85f2c02:	d9 6d 90             	fldcw  -0x70(%ebp)
 85f2c05:	db 5d f0             	fistpl -0x10(%ebp)
 85f2c08:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85f2c0b:	db 45 0c             	fildl  0xc(%ebp)
 85f2c0e:	d9 45 a4             	flds   -0x5c(%ebp)
 85f2c11:	de c9                	fmulp  %st,%st(1)
 85f2c13:	d9 6d 90             	fldcw  -0x70(%ebp)
 85f2c16:	db 5d f4             	fistpl -0xc(%ebp)
 85f2c19:	d9 6d 92             	fldcw  -0x6e(%ebp)
 85f2c1c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f2c1f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f2c22:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2c25:	8b 40 04             	mov    0x4(%eax),%eax
 85f2c28:	8d 90 40 4e 00 00    	lea    0x4e40(%eax),%edx
 85f2c2e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f2c31:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2c35:	89 14 24             	mov    %edx,(%esp)
 85f2c38:	e8 81 8e ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f2c3d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f2c40:	01 d0                	add    %edx,%eax
 85f2c42:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f2c45:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f2c48:	c9                   	leave
 85f2c49:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::_get_option_value @ 0x85f2b02

/* random_option::CRandomOptionItemHandle::_get_option_value(int, int) */

int __thiscall
random_option::CRandomOptionItemHandle::_get_option_value
          (CRandomOptionItemHandle *this,int param_1,int param_2)

{
  int iVar1;
  float local_64;
  float local_60;
  ulong local_58;
  undefined1 local_54 [24];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulong local_1c;
  uint local_18;
  ulong local_14;
  int local_10;
  
  iVar1 = GetRandomOption();
  local_58 = *(ulong *)(iVar1 + 0xf0);
  local_18 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x4478),&local_58);
  CRandomListEx<OptionValueRatio>::CRandomListEx
            ((CRandomListEx<OptionValueRatio> *)&local_3c,local_18);
  GetRandomOption();
  std::vector<OptionValueRatio,std::allocator<OptionValueRatio>>::end();
  GetRandomOption();
  std::vector<OptionValueRatio,std::allocator<OptionValueRatio>>::begin();
  std::
  for_each<__gnu_cxx::__normal_iterator<OptionValueRatio_const*,std::vector<OptionValueRatio,std::allocator<OptionValueRatio>>>,CRandomListEx<OptionValueRatio>>
            (local_54,local_20,local_24,local_3c,local_38,local_34,local_30,local_2c,local_28);
  CRandomListEx<OptionValueRatio>::get_value();
  local_1c = (ulong)ROUND(local_64 * (float)(param_2 - param_1));
  local_10 = (int)ROUND(local_60 * (float)param_1);
  local_14 = local_1c;
  iVar1 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x4e40),&local_1c);
  return iVar1 + local_10;
}

```

---

## _get_part_type

```asm
// === 085f1088 random_option::CRandomOptionItemHandle::_get_part_type  [0x085f1088-0x85f11a3] ===
 85f1088:	55                   	push   %ebp
 85f1089:	89 e5                	mov    %esp,%ebp
 85f108b:	83 ec 38             	sub    $0x38,%esp
 85f108e:	e8 1d fe ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f1093:	8d 48 30             	lea    0x30(%eax),%ecx
 85f1096:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1099:	8d 55 0c             	lea    0xc(%ebp),%edx
 85f109c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f10a0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f10a4:	89 04 24             	mov    %eax,(%esp)
 85f10a7:	e8 c8 32 00 00       	call   85f4374 <_ZNKSt3mapIi17PartSelectonValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f10ac:	83 ec 04             	sub    $0x4,%esp
 85f10af:	e8 fc fd ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f10b4:	8d 50 30             	lea    0x30(%eax),%edx
 85f10b7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f10ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f10be:	89 04 24             	mov    %eax,(%esp)
 85f10c1:	e8 da 32 00 00       	call   85f43a0 <_ZNKSt3mapIi17PartSelectonValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f10c6:	83 ec 04             	sub    $0x4,%esp
 85f10c9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85f10cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f10d0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f10d3:	89 04 24             	mov    %eax,(%esp)
 85f10d6:	e8 eb 32 00 00       	call   85f43c6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEneERKS4_>
 85f10db:	84 c0                	test   %al,%al
 85f10dd:	0f 84 b9 00 00 00    	je     85f119c <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi+0x114>
 85f10e3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f10e6:	89 04 24             	mov    %eax,(%esp)
 85f10e9:	e8 ec 32 00 00       	call   85f43da <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEptEv>
 85f10ee:	8b 40 10             	mov    0x10(%eax),%eax
 85f10f1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f10f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85f10f7:	8b 40 04             	mov    0x4(%eax),%eax
 85f10fa:	8d 90 90 13 00 00    	lea    0x1390(%eax),%edx
 85f1100:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f1103:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1107:	89 14 24             	mov    %edx,(%esp)
 85f110a:	e8 af a9 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f110f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f1112:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1115:	89 04 24             	mov    %eax,(%esp)
 85f1118:	e8 bd 32 00 00       	call   85f43da <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEptEv>
 85f111d:	8d 50 04             	lea    0x4(%eax),%edx
 85f1120:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f1123:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1127:	89 04 24             	mov    %eax,(%esp)
 85f112a:	e8 b9 32 00 00       	call   85f43e8 <_ZNKSt6vectorI17PartSelectonFieldSaIS0_EE5beginEv>
 85f112f:	83 ec 04             	sub    $0x4,%esp
 85f1132:	eb 32                	jmp    85f1166 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi+0xde>
 85f1134:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f1137:	89 04 24             	mov    %eax,(%esp)
 85f113a:	e8 43 33 00 00       	call   85f4482 <_ZNK9__gnu_cxx17__normal_iteratorIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEdeEv>
 85f113f:	8b 40 04             	mov    0x4(%eax),%eax
 85f1142:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f1145:	0f 97 c0             	seta   %al
 85f1148:	84 c0                	test   %al,%al
 85f114a:	74 0f                	je     85f115b <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi+0xd3>
 85f114c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f114f:	89 04 24             	mov    %eax,(%esp)
 85f1152:	e8 2b 33 00 00       	call   85f4482 <_ZNK9__gnu_cxx17__normal_iteratorIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEdeEv>
 85f1157:	8b 00                	mov    (%eax),%eax
 85f1159:	eb 46                	jmp    85f11a1 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi+0x119>
 85f115b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f115e:	89 04 24             	mov    %eax,(%esp)
 85f1161:	e8 06 33 00 00       	call   85f446c <_ZN9__gnu_cxx17__normal_iteratorIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEppEv>
 85f1166:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f1169:	89 04 24             	mov    %eax,(%esp)
 85f116c:	e8 69 32 00 00       	call   85f43da <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEptEv>
 85f1171:	8d 50 04             	lea    0x4(%eax),%edx
 85f1174:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f1177:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f117b:	89 04 24             	mov    %eax,(%esp)
 85f117e:	e8 91 32 00 00       	call   85f4414 <_ZNKSt6vectorI17PartSelectonFieldSaIS0_EE3endEv>
 85f1183:	83 ec 04             	sub    $0x4,%esp
 85f1186:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85f1189:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f118d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f1190:	89 04 24             	mov    %eax,(%esp)
 85f1193:	e8 a8 32 00 00       	call   85f4440 <_ZN9__gnu_cxxneIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85f1198:	84 c0                	test   %al,%al
 85f119a:	75 98                	jne    85f1134 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi+0xac>
 85f119c:	b8 00 00 00 00       	mov    $0x0,%eax
 85f11a1:	c9                   	leave
 85f11a2:	c3                   	ret
 85f11a3:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::_get_part_type @ 0x85f1088

/* random_option::CRandomOptionItemHandle::_get_part_type(int) */

undefined4 random_option::CRandomOptionItemHandle::_get_part_type(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
  local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>> local_20 [4];
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>
  local_1c [4];
  ulong local_18;
  __normal_iterator local_14 [4];
  uint local_10;
  
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  find((int *)local_20);
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  end(local_1c);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator!=
                    (local_20,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->
                      (local_20);
    local_18 = *(ulong *)(iVar3 + 0x10);
    local_10 = CMTRand::randInt((CMTRand *)(*(int *)(param_1 + 4) + 0x1390),&local_18);
    std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_20);
    std::vector<PartSelectonField,std::allocator<PartSelectonField>>::begin();
    while( true ) {
      std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_20);
      std::vector<PartSelectonField,std::allocator<PartSelectonField>>::end();
      bVar2 = __gnu_cxx::operator!=(local_24,local_14);
      if (!bVar2) break;
      iVar3 = __gnu_cxx::
              __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
              ::operator*(local_24);
      if (local_10 < *(uint *)(iVar3 + 4)) {
        puVar4 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
                 ::operator*(local_24);
        return *puVar4;
      }
      __gnu_cxx::
      __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
      ::operator++(local_24);
    }
  }
  return 0;
}

```

---

## _get_part_type_by_ItemGroup

```asm
// === 085f11a4 random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup  [0x085f11a4-0x85f1425] ===
 85f11a4:	55                   	push   %ebp
 85f11a5:	89 e5                	mov    %esp,%ebp
 85f11a7:	56                   	push   %esi
 85f11a8:	53                   	push   %ebx
 85f11a9:	83 ec 50             	sub    $0x50,%esp
 85f11ac:	e8 ff fc ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f11b1:	8d 48 30             	lea    0x30(%eax),%ecx
 85f11b4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f11b7:	8d 55 0c             	lea    0xc(%ebp),%edx
 85f11ba:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f11be:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f11c2:	89 04 24             	mov    %eax,(%esp)
 85f11c5:	e8 aa 31 00 00       	call   85f4374 <_ZNKSt3mapIi17PartSelectonValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f11ca:	83 ec 04             	sub    $0x4,%esp
 85f11cd:	e8 de fc ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f11d2:	8d 50 30             	lea    0x30(%eax),%edx
 85f11d5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f11d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f11dc:	89 04 24             	mov    %eax,(%esp)
 85f11df:	e8 bc 31 00 00       	call   85f43a0 <_ZNKSt3mapIi17PartSelectonValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f11e4:	83 ec 04             	sub    $0x4,%esp
 85f11e7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f11ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f11ee:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f11f1:	89 04 24             	mov    %eax,(%esp)
 85f11f4:	e8 cd 31 00 00       	call   85f43c6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEneERKS4_>
 85f11f9:	84 c0                	test   %al,%al
 85f11fb:	0f 84 14 02 00 00    	je     85f1415 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x271>
 85f1201:	8d 45 d7             	lea    -0x29(%ebp),%eax
 85f1204:	89 04 24             	mov    %eax,(%esp)
 85f1207:	e8 0a d5 a9 ff       	call   808e716 <_ZNSaIiEC1Ev>
 85f120c:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85f1213:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1216:	89 04 24             	mov    %eax,(%esp)
 85f1219:	e8 a2 cf a9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85f121e:	8d 55 d7             	lea    -0x29(%ebp),%edx
 85f1221:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f1225:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85f1228:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f122c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1230:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f1233:	89 04 24             	mov    %eax,(%esp)
 85f1236:	e8 41 ef fe ff       	call   85e017c <_ZNSt6vectorIiSaIiEEC1EjRKiRKS0_>
 85f123b:	eb 1b                	jmp    85f1258 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0xb4>
 85f123d:	89 d3                	mov    %edx,%ebx
 85f123f:	89 c6                	mov    %eax,%esi
 85f1241:	8d 45 d7             	lea    -0x29(%ebp),%eax
 85f1244:	89 04 24             	mov    %eax,(%esp)
 85f1247:	e8 86 2d a9 ff       	call   8083fd2 <_ZNSaIiED1Ev>
 85f124c:	89 f0                	mov    %esi,%eax
 85f124e:	89 da                	mov    %ebx,%edx
 85f1250:	89 04 24             	mov    %eax,(%esp)
 85f1253:	e8 f8 24 4f 00       	call   8ae3750 <_Unwind_Resume>
 85f1258:	8d 45 d7             	lea    -0x29(%ebp),%eax
 85f125b:	89 04 24             	mov    %eax,(%esp)
 85f125e:	e8 6f 2d a9 ff       	call   8083fd2 <_ZNSaIiED1Ev>
 85f1263:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f126a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f126d:	89 04 24             	mov    %eax,(%esp)
 85f1270:	e8 65 31 00 00       	call   85f43da <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEptEv>
 85f1275:	8d 50 14             	lea    0x14(%eax),%edx
 85f1278:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f127b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f127f:	89 04 24             	mov    %eax,(%esp)
 85f1282:	e8 61 31 00 00       	call   85f43e8 <_ZNKSt6vectorI17PartSelectonFieldSaIS0_EE5beginEv>
 85f1287:	83 ec 04             	sub    $0x4,%esp
 85f128a:	e9 94 00 00 00       	jmp    85f1323 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x17f>
 85f128f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85f1296:	eb 6b                	jmp    85f1303 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x15f>
 85f1298:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f129b:	89 04 24             	mov    %eax,(%esp)
 85f129e:	e8 e9 31 00 00       	call   85f448c <_ZNK9__gnu_cxx17__normal_iteratorIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEptEv>
 85f12a3:	8b 18                	mov    (%eax),%ebx
 85f12a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f12a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f12ac:	8b 45 10             	mov    0x10(%ebp),%eax
 85f12af:	89 04 24             	mov    %eax,(%esp)
 85f12b2:	e8 bd 92 af ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 85f12b7:	8b 00                	mov    (%eax),%eax
 85f12b9:	39 c3                	cmp    %eax,%ebx
 85f12bb:	0f 94 c0             	sete   %al
 85f12be:	84 c0                	test   %al,%al
 85f12c0:	74 3d                	je     85f12ff <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x15b>
 85f12c2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f12c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f12c9:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f12cc:	89 04 24             	mov    %eax,(%esp)
 85f12cf:	e8 08 cf a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f12d4:	89 c3                	mov    %eax,%ebx
 85f12d6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f12d9:	89 04 24             	mov    %eax,(%esp)
 85f12dc:	e8 ab 31 00 00       	call   85f448c <_ZNK9__gnu_cxx17__normal_iteratorIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEptEv>
 85f12e1:	8b 40 04             	mov    0x4(%eax),%eax
 85f12e4:	89 03                	mov    %eax,(%ebx)
 85f12e6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f12e9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f12ed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f12f0:	89 04 24             	mov    %eax,(%esp)
 85f12f3:	e8 e4 ce a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f12f8:	8b 00                	mov    (%eax),%eax
 85f12fa:	01 45 e4             	add    %eax,-0x1c(%ebp)
 85f12fd:	eb 19                	jmp    85f1318 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x174>
 85f12ff:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85f1303:	8b 45 10             	mov    0x10(%ebp),%eax
 85f1306:	89 04 24             	mov    %eax,(%esp)
 85f1309:	e8 b2 ce a9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85f130e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f1311:	0f 97 c0             	seta   %al
 85f1314:	84 c0                	test   %al,%al
 85f1316:	75 80                	jne    85f1298 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0xf4>
 85f1318:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f131b:	89 04 24             	mov    %eax,(%esp)
 85f131e:	e8 49 31 00 00       	call   85f446c <_ZN9__gnu_cxx17__normal_iteratorIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEppEv>
 85f1323:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f1326:	89 04 24             	mov    %eax,(%esp)
 85f1329:	e8 ac 30 00 00       	call   85f43da <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi17PartSelectonValueEEptEv>
 85f132e:	8d 50 14             	lea    0x14(%eax),%edx
 85f1331:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1334:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1338:	89 04 24             	mov    %eax,(%esp)
 85f133b:	e8 d4 30 00 00       	call   85f4414 <_ZNKSt6vectorI17PartSelectonFieldSaIS0_EE3endEv>
 85f1340:	83 ec 04             	sub    $0x4,%esp
 85f1343:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1346:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f134a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f134d:	89 04 24             	mov    %eax,(%esp)
 85f1350:	e8 eb 30 00 00       	call   85f4440 <_ZN9__gnu_cxxneIPK17PartSelectonFieldSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85f1355:	84 c0                	test   %al,%al
 85f1357:	0f 85 32 ff ff ff    	jne    85f128f <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0xeb>
 85f135d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f1360:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85f1363:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1366:	8b 40 04             	mov    0x4(%eax),%eax
 85f1369:	8d 90 90 13 00 00    	lea    0x1390(%eax),%edx
 85f136f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f1372:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1376:	89 14 24             	mov    %edx,(%esp)
 85f1379:	e8 40 a7 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f137e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f1381:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f1388:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f138f:	eb 3e                	jmp    85f13cf <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x22b>
 85f1391:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f1394:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1398:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f139b:	89 04 24             	mov    %eax,(%esp)
 85f139e:	e8 39 ce a9 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85f13a3:	8b 00                	mov    (%eax),%eax
 85f13a5:	01 45 ec             	add    %eax,-0x14(%ebp)
 85f13a8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f13ab:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85f13ae:	73 1b                	jae    85f13cb <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x227>
 85f13b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f13b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f13b7:	8b 45 10             	mov    0x10(%ebp),%eax
 85f13ba:	89 04 24             	mov    %eax,(%esp)
 85f13bd:	e8 b2 91 af ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 85f13c2:	8b 30                	mov    (%eax),%esi
 85f13c4:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f13c9:	eb 3b                	jmp    85f1406 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x262>
 85f13cb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f13cf:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f13d2:	89 04 24             	mov    %eax,(%esp)
 85f13d5:	e8 e6 cd a9 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85f13da:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f13dd:	0f 97 c0             	seta   %al
 85f13e0:	84 c0                	test   %al,%al
 85f13e2:	75 ad                	jne    85f1391 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x1ed>
 85f13e4:	bb 01 00 00 00       	mov    $0x1,%ebx
 85f13e9:	eb 1b                	jmp    85f1406 <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x262>
 85f13eb:	89 d3                	mov    %edx,%ebx
 85f13ed:	89 c6                	mov    %eax,%esi
 85f13ef:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f13f2:	89 04 24             	mov    %eax,(%esp)
 85f13f5:	e8 e0 29 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85f13fa:	89 f0                	mov    %esi,%eax
 85f13fc:	89 da                	mov    %ebx,%edx
 85f13fe:	89 04 24             	mov    %eax,(%esp)
 85f1401:	e8 4a 23 4f 00       	call   8ae3750 <_Unwind_Resume>
 85f1406:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f1409:	89 04 24             	mov    %eax,(%esp)
 85f140c:	e8 c9 29 a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85f1411:	85 db                	test   %ebx,%ebx
 85f1413:	74 05                	je     85f141a <_ZNK13random_option23CRandomOptionItemHandle27_get_part_type_by_ItemGroupEiRKSt6vectorIiSaIiEE+0x276>
 85f1415:	be 00 00 00 00       	mov    $0x0,%esi
 85f141a:	89 f0                	mov    %esi,%eax
 85f141c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f141f:	83 c4 00             	add    $0x0,%esp
 85f1422:	5b                   	pop    %ebx
 85f1423:	5e                   	pop    %esi
 85f1424:	5d                   	pop    %ebp
 85f1425:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup @ 0x85f11a4

/* random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup(int, std::vector<int,
   std::allocator<int> > const&) const */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_get_part_type_by_ItemGroup
          (CRandomOptionItemHandle *this,int param_1,vector *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 unaff_ESI;
  __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
  local_48 [4];
  vector<int,std::allocator<int>> local_44 [12];
  _Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>> local_38 [4];
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>
  local_34 [7];
  allocator<int> local_2d;
  int local_2c;
  __normal_iterator local_28 [4];
  ulong local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  find((int *)local_38);
  GetRandomOption();
  std::
  map<int,PartSelectonValue,std::less<int>,std::allocator<std::pair<int_const,PartSelectonValue>>>::
  end(local_34);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator!=
                    (local_38,(_Rb_tree_const_iterator *)local_34);
  if (cVar1 != '\0') {
    std::allocator<int>::allocator();
    local_2c = 0;
    uVar3 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)param_2);
                    /* try { // try from 085f1236 to 085f123a has its CatchHandler @ 085f123d */
    std::vector<int,std::allocator<int>>::vector(local_44,uVar3,&local_2c,(allocator *)&local_2d);
    std::allocator<int>::~allocator(&local_2d);
    local_20 = 0;
    std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_38);
                    /* try { // try from 085f1282 to 085f1354 has its CatchHandler @ 085f13eb */
    std::vector<PartSelectonField,std::allocator<PartSelectonField>>::begin();
    while( true ) {
      std::_Rb_tree_const_iterator<std::pair<int_const,PartSelectonValue>>::operator->(local_38);
      std::vector<PartSelectonField,std::allocator<PartSelectonField>>::end();
      bVar2 = __gnu_cxx::operator!=(local_48,local_28);
      if (!bVar2) break;
      local_14 = 0;
      while (uVar3 = std::vector<int,std::allocator<int>>::size
                               ((vector<int,std::allocator<int>> *)param_2), local_14 < uVar3) {
        piVar5 = (int *)__gnu_cxx::
                        __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
                        ::operator->(local_48);
        iVar4 = *piVar5;
        piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)param_2,local_14);
        if (iVar4 == *piVar5) {
          puVar6 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_44,local_14)
          ;
          iVar4 = __gnu_cxx::
                  __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
                  ::operator->(local_48);
          *puVar6 = *(undefined4 *)(iVar4 + 4);
          piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_44,local_14);
          local_20 = local_20 + *piVar5;
          break;
        }
        local_14 = local_14 + 1;
      }
      __gnu_cxx::
      __normal_iterator<PartSelectonField_const*,std::vector<PartSelectonField,std::allocator<PartSelectonField>>>
      ::operator++(local_48);
    }
    local_24 = local_20;
    local_1c = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x1390),&local_24);
    local_18 = 0;
    local_10 = 0;
    while (uVar3 = std::vector<int,std::allocator<int>>::size(local_44), local_10 < uVar3) {
      piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[](local_44,local_10);
      local_18 = local_18 + *piVar5;
      if (local_1c < local_18) {
        puVar6 = (undefined4 *)
                 std::vector<int,std::allocator<int>>::operator[]
                           ((vector<int,std::allocator<int>> *)param_2,local_10);
        unaff_ESI = *puVar6;
        bVar2 = false;
        goto LAB_085f1406;
      }
      local_10 = local_10 + 1;
    }
    bVar2 = true;
LAB_085f1406:
    std::vector<int,std::allocator<int>>::~vector(local_44);
    if (!bVar2) {
      return unaff_ESI;
    }
  }
  return 0;
}

```

---

## _random_application

```asm
// === 085f0ec2 random_option::CRandomOptionItemHandle::_random_application  [0x085f0ec2-0x85f0f99] ===
 85f0ec2:	55                   	push   %ebp
 85f0ec3:	89 e5                	mov    %esp,%ebp
 85f0ec5:	53                   	push   %ebx
 85f0ec6:	83 ec 34             	sub    $0x34,%esp
 85f0ec9:	8b 45 10             	mov    0x10(%ebp),%eax
 85f0ecc:	0f b6 d0             	movzbl %al,%edx
 85f0ecf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f0ed2:	0f b6 c0             	movzbl %al,%eax
 85f0ed5:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f0ed9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f0edd:	8d 45 ea             	lea    -0x16(%ebp),%eax
 85f0ee0:	89 04 24             	mov    %eax,(%esp)
 85f0ee3:	e8 66 32 00 00       	call   85f414e <_ZN20RandomApplicationKeyC1Ehh>
 85f0ee8:	e8 c3 ff ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f0eed:	89 c2                	mov    %eax,%edx
 85f0eef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f0ef2:	8d 4d ea             	lea    -0x16(%ebp),%ecx
 85f0ef5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85f0ef9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f0efd:	89 04 24             	mov    %eax,(%esp)
 85f0f00:	e8 87 33 00 00       	call   85f428c <_ZNKSt3mapI20RandomApplicationKey22RandomApplicationValueSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85f0f05:	83 ec 04             	sub    $0x4,%esp
 85f0f08:	e8 a3 ff ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f0f0d:	89 c2                	mov    %eax,%edx
 85f0f0f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f0f12:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f0f16:	89 04 24             	mov    %eax,(%esp)
 85f0f19:	e8 9a 33 00 00       	call   85f42b8 <_ZNKSt3mapI20RandomApplicationKey22RandomApplicationValueSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85f0f1e:	83 ec 04             	sub    $0x4,%esp
 85f0f21:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85f0f24:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f0f28:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f0f2b:	89 04 24             	mov    %eax,(%esp)
 85f0f2e:	e8 ab 33 00 00       	call   85f42de <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22RandomApplicationValueEEneERKS5_>
 85f0f33:	84 c0                	test   %al,%al
 85f0f35:	74 59                	je     85f0f90 <_ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi+0xce>
 85f0f37:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f0f3a:	89 04 24             	mov    %eax,(%esp)
 85f0f3d:	e8 b0 33 00 00       	call   85f42f2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22RandomApplicationValueEEptEv>
 85f0f42:	8b 58 08             	mov    0x8(%eax),%ebx
 85f0f45:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f0f48:	89 04 24             	mov    %eax,(%esp)
 85f0f4b:	e8 a2 33 00 00       	call   85f42f2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22RandomApplicationValueEEptEv>
 85f0f50:	8b 40 04             	mov    0x4(%eax),%eax
 85f0f53:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85f0f56:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f0f59:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0f5c:	8b 40 04             	mov    0x4(%eax),%eax
 85f0f5f:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85f0f62:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f0f66:	89 04 24             	mov    %eax,(%esp)
 85f0f69:	e8 50 ab ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f0f6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f0f71:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f0f74:	89 04 24             	mov    %eax,(%esp)
 85f0f77:	e8 76 33 00 00       	call   85f42f2 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK20RandomApplicationKey22RandomApplicationValueEEptEv>
 85f0f7c:	8b 40 08             	mov    0x8(%eax),%eax
 85f0f7f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f0f82:	0f 92 c0             	setb   %al
 85f0f85:	84 c0                	test   %al,%al
 85f0f87:	74 07                	je     85f0f90 <_ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi+0xce>
 85f0f89:	b8 01 00 00 00       	mov    $0x1,%eax
 85f0f8e:	eb 05                	jmp    85f0f95 <_ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi+0xd3>
 85f0f90:	b8 00 00 00 00       	mov    $0x0,%eax
 85f0f95:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f0f98:	c9                   	leave
 85f0f99:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::_random_application @ 0x85f0ec2

/* random_option::CRandomOptionItemHandle::_random_application(ENUM_RARITY, int) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::_random_application
          (CRandomOptionItemHandle *this,uchar param_2,uchar param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  RandomApplicationKey local_20 [6];
  RandomApplicationKey local_1a [2];
  map<RandomApplicationKey,RandomApplicationValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>>
  local_18 [4];
  ulong local_14;
  uint local_10;
  
  RandomApplicationKey::RandomApplicationKey(local_1a,param_2,param_3);
  GetRandomOption();
  std::
  map<RandomApplicationKey,RandomApplicationValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>>
  ::find(local_20);
  GetRandomOption();
  std::
  map<RandomApplicationKey,RandomApplicationValue,std::less<RandomApplicationKey>,std::allocator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
          ::operator!=((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20);
    iVar2 = *(int *)(iVar2 + 8);
    iVar3 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20);
    local_14 = iVar2 + *(int *)(iVar3 + 4);
    local_10 = CMTRand::randInt(*(CMTRand **)(this + 4),&local_14);
    iVar2 = std::
            _Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>::
            operator->((_Rb_tree_const_iterator<std::pair<RandomApplicationKey_const,RandomApplicationValue>>
                        *)local_20);
    if (*(uint *)(iVar2 + 8) < local_10) {
      return 1;
    }
  }
  return 0;
}

```

---

## change_option

```asm
// === 085f3340 random_option::CRandomOptionItemHandle::change_option  [0x085f3340-0x85f39d1] ===
 85f3340:	55                   	push   %ebp
 85f3341:	89 e5                	mov    %esp,%ebp
 85f3343:	56                   	push   %esi
 85f3344:	53                   	push   %ebx
 85f3345:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 85f334b:	83 7d 20 00          	cmpl   $0x0,0x20(%ebp)
 85f334f:	78 06                	js     85f3357 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x17>
 85f3351:	83 7d 20 02          	cmpl   $0x2,0x20(%ebp)
 85f3355:	7e 0a                	jle    85f3361 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x21>
 85f3357:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f335c:	e9 65 06 00 00       	jmp    85f39c6 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x686>
 85f3361:	c6 45 9b 00          	movb   $0x0,-0x65(%ebp)
 85f3365:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f336c:	8d 45 9b             	lea    -0x65(%ebp),%eax
 85f336f:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f3373:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f3376:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f337a:	8b 45 14             	mov    0x14(%ebp),%eax
 85f337d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f3381:	8b 45 10             	mov    0x10(%ebp),%eax
 85f3384:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f3388:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f338b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f338f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3392:	89 04 24             	mov    %eax,(%esp)
 85f3395:	e8 9e ef ff ff       	call   85f2338 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh>
 85f339a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f339d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f33a1:	0f 95 c0             	setne  %al
 85f33a4:	84 c0                	test   %al,%al
 85f33a6:	74 64                	je     85f340c <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0xcc>
 85f33a8:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 85f33ac:	0f b6 d0             	movzbl %al,%edx
 85f33af:	8b 45 10             	mov    0x10(%ebp),%eax
 85f33b2:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 85f33b5:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85f33b9:	89 54 24 24          	mov    %edx,0x24(%esp)
 85f33bd:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f33c0:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f33c4:	8b 55 14             	mov    0x14(%ebp),%edx
 85f33c7:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f33cb:	89 44 24 18          	mov    %eax,0x18(%esp)
 85f33cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f33d2:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f33d6:	c7 44 24 10 3c 00 cd 	movl   $0x8cd003c,0x10(%esp)
 85f33dd:	08 
 85f33de:	c7 44 24 0c 56 03 00 	movl   $0x356,0xc(%esp)
 85f33e5:	00 
 85f33e6:	c7 44 24 08 00 0f cd 	movl   $0x8cd0f00,0x8(%esp)
 85f33ed:	08 
 85f33ee:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f33f5:	08 
 85f33f6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f33fd:	e8 08 08 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f3402:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f3407:	e9 ba 05 00 00       	jmp    85f39c6 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x686>
 85f340c:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 85f3413:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 85f3417:	0f b6 c0             	movzbl %al,%eax
 85f341a:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85f341d:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f3421:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f3425:	8b 45 14             	mov    0x14(%ebp),%eax
 85f3428:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f342c:	8b 45 18             	mov    0x18(%ebp),%eax
 85f342f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f3433:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f3436:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f343a:	8b 45 10             	mov    0x10(%ebp),%eax
 85f343d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3441:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3444:	89 04 24             	mov    %eax,(%esp)
 85f3447:	e8 36 f4 ff ff       	call   85f2882 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi>
 85f344c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f344f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f3453:	0f 95 c0             	setne  %al
 85f3456:	84 c0                	test   %al,%al
 85f3458:	74 6b                	je     85f34c5 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x185>
 85f345a:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 85f345d:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 85f3461:	0f b6 d0             	movzbl %al,%edx
 85f3464:	8b 45 10             	mov    0x10(%ebp),%eax
 85f3467:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f346a:	89 5c 24 2c          	mov    %ebx,0x2c(%esp)
 85f346e:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85f3472:	89 54 24 24          	mov    %edx,0x24(%esp)
 85f3476:	8b 55 14             	mov    0x14(%ebp),%edx
 85f3479:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f347d:	8b 55 18             	mov    0x18(%ebp),%edx
 85f3480:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f3484:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f3487:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f348b:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f348f:	c7 44 24 10 a8 00 cd 	movl   $0x8cd00a8,0x10(%esp)
 85f3496:	08 
 85f3497:	c7 44 24 0c 5d 03 00 	movl   $0x35d,0xc(%esp)
 85f349e:	00 
 85f349f:	c7 44 24 08 00 0f cd 	movl   $0x8cd0f00,0x8(%esp)
 85f34a6:	08 
 85f34a7:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f34ae:	08 
 85f34af:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f34b6:	e8 4f 07 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f34bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f34c0:	e9 01 05 00 00       	jmp    85f39c6 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x686>
 85f34c5:	8d 45 88             	lea    -0x78(%ebp),%eax
 85f34c8:	89 04 24             	mov    %eax,(%esp)
 85f34cb:	e8 ca 0c 00 00       	call   85f419a <_ZN20DifferentWeightValueC1Ev>
 85f34d0:	8b 45 10             	mov    0x10(%ebp),%eax
 85f34d3:	88 45 92             	mov    %al,-0x6e(%ebp)
 85f34d6:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 85f34da:	88 45 93             	mov    %al,-0x6d(%ebp)
 85f34dd:	e8 ce d9 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f34e2:	8d 88 f4 00 00 00    	lea    0xf4(%eax),%ecx
 85f34e8:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f34eb:	8d 55 92             	lea    -0x6e(%ebp),%edx
 85f34ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f34f2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f34f6:	89 04 24             	mov    %eax,(%esp)
 85f34f9:	e8 12 12 00 00       	call   85f4710 <_ZNKSt3mapIs20DifferentWeightValueSt4lessIsESaISt4pairIKsS0_EEE4findERS4_>
 85f34fe:	83 ec 04             	sub    $0x4,%esp
 85f3501:	e8 aa d9 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f3506:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 85f350c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f350f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3513:	89 04 24             	mov    %eax,(%esp)
 85f3516:	e8 21 12 00 00       	call   85f473c <_ZNKSt3mapIs20DifferentWeightValueSt4lessIsESaISt4pairIKsS0_EEE3endEv>
 85f351b:	83 ec 04             	sub    $0x4,%esp
 85f351e:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85f3521:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3525:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f3528:	89 04 24             	mov    %eax,(%esp)
 85f352b:	e8 32 12 00 00       	call   85f4762 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKs20DifferentWeightValueEEeqERKS4_>
 85f3530:	84 c0                	test   %al,%al
 85f3532:	74 48                	je     85f357c <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x23c>
 85f3534:	0f b6 45 9b          	movzbl -0x65(%ebp),%eax
 85f3538:	0f b6 d0             	movzbl %al,%edx
 85f353b:	8b 45 10             	mov    0x10(%ebp),%eax
 85f353e:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f3542:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f3546:	c7 44 24 10 e0 00 cd 	movl   $0x8cd00e0,0x10(%esp)
 85f354d:	08 
 85f354e:	c7 44 24 0c 69 03 00 	movl   $0x369,0xc(%esp)
 85f3555:	00 
 85f3556:	c7 44 24 08 00 0f cd 	movl   $0x8cd0f00,0x8(%esp)
 85f355d:	08 
 85f355e:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f3565:	08 
 85f3566:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f356d:	e8 98 06 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f3572:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f3577:	e9 4a 04 00 00       	jmp    85f39c6 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x686>
 85f357c:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f357f:	89 04 24             	mov    %eax,(%esp)
 85f3582:	e8 ef 11 00 00       	call   85f4776 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKs20DifferentWeightValueEEptEv>
 85f3587:	8b 50 08             	mov    0x8(%eax),%edx
 85f358a:	8b 40 04             	mov    0x4(%eax),%eax
 85f358d:	89 45 88             	mov    %eax,-0x78(%ebp)
 85f3590:	89 55 8c             	mov    %edx,-0x74(%ebp)
 85f3593:	e8 18 d9 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f3598:	8d 88 60 01 00 00    	lea    0x160(%eax),%ecx
 85f359e:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f35a1:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85f35a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f35a8:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f35ac:	89 04 24             	mov    %eax,(%esp)
 85f35af:	e8 d0 11 00 00       	call   85f4784 <_ZNKSt3mapIi16OptionGroupValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f35b4:	83 ec 04             	sub    $0x4,%esp
 85f35b7:	e8 f4 d8 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f35bc:	8d 90 60 01 00 00    	lea    0x160(%eax),%edx
 85f35c2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f35c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f35c9:	89 04 24             	mov    %eax,(%esp)
 85f35cc:	e8 df 11 00 00       	call   85f47b0 <_ZNKSt3mapIi16OptionGroupValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f35d1:	83 ec 04             	sub    $0x4,%esp
 85f35d4:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f35d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f35db:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f35de:	89 04 24             	mov    %eax,(%esp)
 85f35e1:	e8 f0 11 00 00       	call   85f47d6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEeqERKS4_>
 85f35e6:	84 c0                	test   %al,%al
 85f35e8:	74 3d                	je     85f3627 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x2e7>
 85f35ea:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85f35ed:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f35f1:	c7 44 24 10 fb 00 cd 	movl   $0x8cd00fb,0x10(%esp)
 85f35f8:	08 
 85f35f9:	c7 44 24 0c 71 03 00 	movl   $0x371,0xc(%esp)
 85f3600:	00 
 85f3601:	c7 44 24 08 00 0f cd 	movl   $0x8cd0f00,0x8(%esp)
 85f3608:	08 
 85f3609:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f3610:	08 
 85f3611:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f3618:	e8 ed 05 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f361d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f3622:	e9 9f 03 00 00       	jmp    85f39c6 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x686>
 85f3627:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f362a:	89 04 24             	mov    %eax,(%esp)
 85f362d:	e8 b8 11 00 00       	call   85f47ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEptEv>
 85f3632:	8b 40 10             	mov    0x10(%eax),%eax
 85f3635:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f3638:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f363b:	89 04 24             	mov    %eax,(%esp)
 85f363e:	e8 a7 11 00 00       	call   85f47ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEptEv>
 85f3643:	83 c0 04             	add    $0x4,%eax
 85f3646:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f364a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f3650:	89 04 24             	mov    %eax,(%esp)
 85f3653:	e8 a0 11 00 00       	call   85f47f8 <_ZNSt6vectorI11OptionGroupSaIS0_EEC1ERKS2_>
 85f3658:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f365f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85f3666:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f366c:	89 04 24             	mov    %eax,(%esp)
 85f366f:	e8 38 12 00 00       	call   85f48ac <_ZN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEC1Ev>
 85f3674:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f367b:	e9 f5 00 00 00       	jmp    85f3775 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x435>
 85f3680:	8b 45 20             	mov    0x20(%ebp),%eax
 85f3683:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85f3686:	0f 84 e5 00 00 00    	je     85f3771 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x431>
 85f368c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f368f:	8b 4d 24             	mov    0x24(%ebp),%ecx
 85f3692:	89 d0                	mov    %edx,%eax
 85f3694:	01 c0                	add    %eax,%eax
 85f3696:	01 d0                	add    %edx,%eax
 85f3698:	0f b6 04 08          	movzbl (%eax,%ecx,1),%eax
 85f369c:	84 c0                	test   %al,%al
 85f369e:	0f 84 cd 00 00 00    	je     85f3771 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x431>
 85f36a4:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 85f36aa:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f36b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f36b4:	89 04 24             	mov    %eax,(%esp)
 85f36b7:	e8 fe 11 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f36bc:	83 ec 04             	sub    $0x4,%esp
 85f36bf:	eb 7b                	jmp    85f373c <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x3fc>
 85f36c1:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 85f36c7:	89 04 24             	mov    %eax,(%esp)
 85f36ca:	e8 2d 13 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f36cf:	8b 18                	mov    (%eax),%ebx
 85f36d1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85f36d4:	8b 4d 24             	mov    0x24(%ebp),%ecx
 85f36d7:	89 d0                	mov    %edx,%eax
 85f36d9:	01 c0                	add    %eax,%eax
 85f36db:	01 d0                	add    %edx,%eax
 85f36dd:	0f b6 04 08          	movzbl (%eax,%ecx,1),%eax
 85f36e1:	0f b6 c0             	movzbl %al,%eax
 85f36e4:	39 c3                	cmp    %eax,%ebx
 85f36e6:	0f 94 c0             	sete   %al
 85f36e9:	84 c0                	test   %al,%al
 85f36eb:	74 41                	je     85f372e <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x3ee>
 85f36ed:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85f36f0:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 85f36f6:	89 04 24             	mov    %eax,(%esp)
 85f36f9:	e8 fe 12 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f36fe:	8b 40 04             	mov    0x4(%eax),%eax
 85f3701:	89 da                	mov    %ebx,%edx
 85f3703:	29 c2                	sub    %eax,%edx
 85f3705:	89 d0                	mov    %edx,%eax
 85f3707:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f370a:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f370d:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 85f3713:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3717:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f371d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3721:	89 04 24             	mov    %eax,(%esp)
 85f3724:	e8 dd 12 00 00       	call   85f4a06 <_ZNSt6vectorI11OptionGroupSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 85f3729:	83 ec 04             	sub    $0x4,%esp
 85f372c:	eb 43                	jmp    85f3771 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x431>
 85f372e:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 85f3734:	89 04 24             	mov    %eax,(%esp)
 85f3737:	e8 68 17 00 00       	call   85f4ea4 <_ZN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEppEv>
 85f373c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f373f:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f3745:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3749:	89 04 24             	mov    %eax,(%esp)
 85f374c:	e8 8d 11 00 00       	call   85f48de <_ZNSt6vectorI11OptionGroupSaIS0_EE3endEv>
 85f3751:	83 ec 04             	sub    $0x4,%esp
 85f3754:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f3757:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f375b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 85f3761:	89 04 24             	mov    %eax,(%esp)
 85f3764:	e8 0e 17 00 00       	call   85f4e77 <_ZN9__gnu_cxxneIP11OptionGroupSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 85f3769:	84 c0                	test   %al,%al
 85f376b:	0f 85 50 ff ff ff    	jne    85f36c1 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x381>
 85f3771:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f3775:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 85f3779:	0f 9e c0             	setle  %al
 85f377c:	84 c0                	test   %al,%al
 85f377e:	0f 85 fc fe ff ff    	jne    85f3680 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x340>
 85f3784:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f3787:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85f378a:	8b 45 08             	mov    0x8(%ebp),%eax
 85f378d:	8b 40 04             	mov    0x4(%eax),%eax
 85f3790:	8d 90 08 58 00 00    	lea    0x5808(%eax),%edx
 85f3796:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f3799:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f379d:	89 14 24             	mov    %edx,(%esp)
 85f37a0:	e8 19 83 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f37a5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f37a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f37ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f37af:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85f37b2:	89 04 24             	mov    %eax,(%esp)
 85f37b5:	e8 4a 11 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f37ba:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f37bd:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f37c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f37c7:	89 04 24             	mov    %eax,(%esp)
 85f37ca:	e8 0f 11 00 00       	call   85f48de <_ZNSt6vectorI11OptionGroupSaIS0_EE3endEv>
 85f37cf:	83 ec 04             	sub    $0x4,%esp
 85f37d2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f37d5:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f37db:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f37df:	89 04 24             	mov    %eax,(%esp)
 85f37e2:	e8 d3 10 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f37e7:	83 ec 04             	sub    $0x4,%esp
 85f37ea:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f37ed:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85f37f0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f37f4:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85f37f7:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f37fb:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85f37fe:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f3802:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85f3805:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f3809:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85f380c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3810:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85f3813:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3817:	89 04 24             	mov    %eax,(%esp)
 85f381a:	e8 10 11 00 00       	call   85f492f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS2_SaIS2_EEEE11CRandomListIjEET0_T_SB_SA_>
 85f381f:	83 ec 04             	sub    $0x4,%esp
 85f3822:	8d 45 b0             	lea    -0x50(%ebp),%eax
 85f3825:	89 04 24             	mov    %eax,(%esp)
 85f3828:	e8 73 11 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f382d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f3830:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f3836:	89 04 24             	mov    %eax,(%esp)
 85f3839:	e8 6c 11 00 00       	call   85f49aa <_ZNKSt6vectorI11OptionGroupSaIS0_EE4sizeEv>
 85f383e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f3841:	0f 96 c0             	setbe  %al
 85f3844:	84 c0                	test   %al,%al
 85f3846:	74 4f                	je     85f3897 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x557>
 85f3848:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f384e:	89 04 24             	mov    %eax,(%esp)
 85f3851:	e8 54 11 00 00       	call   85f49aa <_ZNKSt6vectorI11OptionGroupSaIS0_EE4sizeEv>
 85f3856:	89 44 24 18          	mov    %eax,0x18(%esp)
 85f385a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f385d:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f3861:	c7 44 24 10 0f 01 cd 	movl   $0x8cd010f,0x10(%esp)
 85f3868:	08 
 85f3869:	c7 44 24 0c 90 03 00 	movl   $0x390,0xc(%esp)
 85f3870:	00 
 85f3871:	c7 44 24 08 00 0f cd 	movl   $0x8cd0f00,0x8(%esp)
 85f3878:	08 
 85f3879:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f3880:	08 
 85f3881:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f3888:	e8 7d 03 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f388d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f3892:	e9 21 01 00 00       	jmp    85f39b8 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x678>
 85f3897:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f389a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85f389d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f38a0:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f38a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f38aa:	89 04 24             	mov    %eax,(%esp)
 85f38ad:	e8 08 10 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f38b2:	83 ec 04             	sub    $0x4,%esp
 85f38b5:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 85f38bb:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85f38be:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f38c2:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85f38c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f38c9:	89 04 24             	mov    %eax,(%esp)
 85f38cc:	e8 f5 10 00 00       	call   85f49c6 <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEplERKi>
 85f38d1:	83 ec 04             	sub    $0x4,%esp
 85f38d4:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 85f38da:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 85f38e0:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f38e6:	89 04 24             	mov    %eax,(%esp)
 85f38e9:	e8 0e 11 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f38ee:	8b 00                	mov    (%eax),%eax
 85f38f0:	89 c2                	mov    %eax,%edx
 85f38f2:	8b 45 24             	mov    0x24(%ebp),%eax
 85f38f5:	88 50 0a             	mov    %dl,0xa(%eax)
 85f38f8:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f38fb:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f38fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3902:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3906:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3909:	89 04 24             	mov    %eax,(%esp)
 85f390c:	e8 f1 f1 ff ff       	call   85f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>
 85f3911:	89 c2                	mov    %eax,%edx
 85f3913:	8b 45 24             	mov    0x24(%ebp),%eax
 85f3916:	88 50 0b             	mov    %dl,0xb(%eax)
 85f3919:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f391c:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f391f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3923:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3927:	8b 45 08             	mov    0x8(%ebp),%eax
 85f392a:	89 04 24             	mov    %eax,(%esp)
 85f392d:	e8 d0 f1 ff ff       	call   85f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>
 85f3932:	89 c2                	mov    %eax,%edx
 85f3934:	8b 45 24             	mov    0x24(%ebp),%eax
 85f3937:	88 50 0c             	mov    %dl,0xc(%eax)
 85f393a:	8b 45 20             	mov    0x20(%ebp),%eax
 85f393d:	89 c2                	mov    %eax,%edx
 85f393f:	83 e2 03             	and    $0x3,%edx
 85f3942:	8b 45 24             	mov    0x24(%ebp),%eax
 85f3945:	89 d1                	mov    %edx,%ecx
 85f3947:	83 e1 03             	and    $0x3,%ecx
 85f394a:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 85f394e:	83 e2 fc             	and    $0xfffffffc,%edx
 85f3951:	09 ca                	or     %ecx,%edx
 85f3953:	88 50 0d             	mov    %dl,0xd(%eax)
 85f3956:	c7 45 e0 40 00 00 00 	movl   $0x40,-0x20(%ebp)
 85f395d:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3960:	8b 40 04             	mov    0x4(%eax),%eax
 85f3963:	8d 90 d0 61 00 00    	lea    0x61d0(%eax),%edx
 85f3969:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f396c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3970:	89 14 24             	mov    %edx,(%esp)
 85f3973:	e8 46 81 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f3978:	89 c2                	mov    %eax,%edx
 85f397a:	83 e2 3f             	and    $0x3f,%edx
 85f397d:	8b 45 24             	mov    0x24(%ebp),%eax
 85f3980:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 85f3987:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 85f398b:	83 e2 03             	and    $0x3,%edx
 85f398e:	09 ca                	or     %ecx,%edx
 85f3990:	88 50 0d             	mov    %dl,0xd(%eax)
 85f3993:	bb 01 00 00 00       	mov    $0x1,%ebx
 85f3998:	eb 1e                	jmp    85f39b8 <_ZN13random_option23CRandomOptionItemHandle13change_optionEm11ENUM_RARITYiiiiP12RandomOption+0x678>
 85f399a:	89 d3                	mov    %edx,%ebx
 85f399c:	89 c6                	mov    %eax,%esi
 85f399e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f39a4:	89 04 24             	mov    %eax,(%esp)
 85f39a7:	e8 48 27 d9 ff       	call   83860f4 <_ZNSt6vectorI11OptionGroupSaIS0_EED1Ev>
 85f39ac:	89 f0                	mov    %esi,%eax
 85f39ae:	89 da                	mov    %ebx,%edx
 85f39b0:	89 04 24             	mov    %eax,(%esp)
 85f39b3:	e8 98 fd 4e 00       	call   8ae3750 <_Unwind_Resume>
 85f39b8:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f39be:	89 04 24             	mov    %eax,(%esp)
 85f39c1:	e8 2e 27 d9 ff       	call   83860f4 <_ZNSt6vectorI11OptionGroupSaIS0_EED1Ev>
 85f39c6:	89 d8                	mov    %ebx,%eax
 85f39c8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f39cb:	83 c4 00             	add    $0x0,%esp
 85f39ce:	5b                   	pop    %ebx
 85f39cf:	5e                   	pop    %esi
 85f39d0:	5d                   	pop    %ebp
 85f39d1:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::change_option @ 0x85f3340

/* random_option::CRandomOptionItemHandle::change_option(unsigned long, ENUM_RARITY, int, int, int,
   int, RandomOption*) */

bool __thiscall
random_option::CRandomOptionItemHandle::change_option
          (CRandomOptionItemHandle *this,undefined4 param_1,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,int param_7,int param_8)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 local_a0 [2];
  undefined4 local_98;
  undefined4 local_94;
  vector<OptionGroup,std::allocator<OptionGroup>> local_90 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>> local_84 [4];
  _Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>> local_80 [4];
  int local_7c;
  int local_78;
  undefined1 local_72;
  byte local_71;
  undefined4 local_70;
  byte local_69;
  map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
  local_68 [4];
  map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
  local_64 [4];
  __normal_iterator local_60 [4];
  undefined1 local_5c [4];
  ulong local_58;
  CRandomList<unsigned_int> local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  int local_28 [4];
  uint local_18;
  uint local_14;
  int local_10;
  
  if ((param_7 < 0) || (2 < param_7)) {
    bVar2 = false;
  }
  else {
    local_69 = 0;
    local_28[2] = 0;
    local_28[2] = _get_option_type(this,param_1,param_3,param_4,param_6,&local_69);
    if (local_28[2] == 0) {
      local_70 = 0;
      local_28[2] = _choose_option_group(this,param_3,param_6,param_5,param_4,local_69,&local_70);
      if (local_28[2] == 0) {
        DifferentWeightValue::DifferentWeightValue((DifferentWeightValue *)&local_7c);
        local_72 = (undefined1)param_3;
        local_71 = local_69;
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::find((short *)local_80);
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::end(local_68);
        cVar1 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                operator==(local_80,(_Rb_tree_const_iterator *)local_68);
        if (cVar1 == '\0') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                  operator->(local_80);
          local_78 = *(int *)(iVar4 + 8);
          local_7c = *(int *)(iVar4 + 4);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::find((int *)local_84);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::end(local_64);
          cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator==
                            (local_84,(_Rb_tree_const_iterator *)local_64);
          if (cVar1 == '\0') {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            local_28[3] = *(ulong *)(iVar4 + 0x10);
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            std::vector<OptionGroup,std::allocator<OptionGroup>>::vector
                      (local_90,(vector *)(iVar4 + 4));
            local_18 = 0;
            local_14 = 0;
            __gnu_cxx::
            __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
            __normal_iterator((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                               *)&local_94);
            for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
              if ((param_7 != local_10) && (*(char *)(local_10 * 3 + param_8) != '\0')) {
                    /* try { // try from 085f36b7 to 085f3931 has its CatchHandler @ 085f399a */
                std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
                while( true ) {
                  std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
                  bVar2 = __gnu_cxx::operator!=((__normal_iterator *)&local_98,local_60);
                  if (!bVar2) break;
                  puVar5 = (uint *)__gnu_cxx::
                                   __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                   ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                                *)&local_98);
                  iVar4 = local_28[3];
                  if (*puVar5 == (uint)*(byte *)(local_10 * 3 + param_8)) {
                    iVar6 = __gnu_cxx::
                            __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                            ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                         *)&local_98);
                    local_28[3] = iVar4 - *(int *)(iVar6 + 4);
                    std::vector<OptionGroup,std::allocator<OptionGroup>>::erase
                              (local_5c,local_90,local_98);
                    break;
                  }
                  __gnu_cxx::
                  __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                  ::operator++((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                *)&local_98);
                }
              }
            }
            local_58 = local_28[3];
            local_18 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x5808),&local_58);
            CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_44,local_18);
            std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
            std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
            std::
            for_each<__gnu_cxx::__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>,CRandomList<unsigned_int>>
                      (local_54,local_30,local_34,local_44,local_40,local_3c,local_38);
            local_14 = CRandomList<unsigned_int>::get_value(local_54);
            uVar7 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size(local_90);
            bVar2 = local_14 < uVar7;
            if (bVar2) {
              local_2c = local_14;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
              __gnu_cxx::
              __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
              operator+((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                         *)local_a0,local_28);
              local_94 = local_a0[0];
              puVar9 = (undefined4 *)
                       __gnu_cxx::
                       __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                       ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                    *)&local_94);
              *(char *)(param_8 + 10) = (char)*puVar9;
              uVar3 = _get_option_value(this,local_7c,local_78);
              *(undefined1 *)(param_8 + 0xb) = uVar3;
              uVar3 = _get_option_value(this,local_7c,local_78);
              *(undefined1 *)(param_8 + 0xc) = uVar3;
              *(byte *)(param_8 + 0xd) = *(byte *)(param_8 + 0xd) & 0xfc | (byte)param_7 & 3;
              local_28[1] = 0x40;
              cVar1 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x61d0),
                                       (ulong *)(local_28 + 1));
              *(byte *)(param_8 + 0xd) = *(byte *)(param_8 + 0xd) & 3 | cVar1 * '\x04';
            }
            else {
              uVar8 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size(local_90);
              LogManager::logFormat
                        (1,"RandomOption.cpp",
                         "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                         ,0x390,"_option_group.size() %d, %d ",local_14,uVar8);
            }
            std::vector<OptionGroup,std::allocator<OptionGroup>>::~vector(local_90);
          }
          else {
            LogManager::logFormat
                      (1,"RandomOption.cpp",
                       "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                       ,0x371,"option_group_ (%d) ",local_70);
            bVar2 = false;
          }
        }
        else {
          LogManager::logFormat
                    (1,"RandomOption.cpp",
                     "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                     ,0x369,"different_weight_ (%d,%d) ",param_3,(uint)local_69);
          bVar2 = false;
        }
      }
      else {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                   ,0x35d,"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)",param_3,param_6,
                   param_5,param_4,(uint)local_69,local_70,local_28[2]);
        bVar2 = false;
      }
    }
    else {
      LogManager::logFormat
                (1,"RandomOption.cpp",
                 "bool random_option::CRandomOptionItemHandle::change_option(itemIndex_t, ENUM_RARITY, int, int, int, int, RandomOption*)"
                 ,0x356,"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)",param_1,param_3,param_4,
                 param_6,(uint)local_69,local_28[2]);
      bVar2 = false;
    }
  }
  return bVar2;
}

```

---

## choose_item

```asm
// === 085f1560 random_option::CRandomOptionItemHandle::choose_item  [0x085f1560-0x85f1801] ===
 85f1560:	55                   	push   %ebp
 85f1561:	89 e5                	mov    %esp,%ebp
 85f1563:	83 ec 48             	sub    $0x48,%esp
 85f1566:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1569:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 85f156d:	84 c0                	test   %al,%al
 85f156f:	74 0a                	je     85f157b <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x1b>
 85f1571:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f1576:	e9 84 02 00 00       	jmp    85f17ff <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x29f>
 85f157b:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
 85f157f:	7e 3d                	jle    85f15be <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x5e>
 85f1581:	83 7d 10 4f          	cmpl   $0x4f,0x10(%ebp)
 85f1585:	7f 30                	jg     85f15b7 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x57>
 85f1587:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85f158a:	ba 67 66 66 66       	mov    $0x66666667,%edx
 85f158f:	89 c8                	mov    %ecx,%eax
 85f1591:	f7 ea                	imul   %edx
 85f1593:	c1 fa 02             	sar    $0x2,%edx
 85f1596:	89 c8                	mov    %ecx,%eax
 85f1598:	c1 f8 1f             	sar    $0x1f,%eax
 85f159b:	29 c2                	sub    %eax,%edx
 85f159d:	89 d0                	mov    %edx,%eax
 85f159f:	c1 e0 02             	shl    $0x2,%eax
 85f15a2:	01 d0                	add    %edx,%eax
 85f15a4:	01 c0                	add    %eax,%eax
 85f15a6:	89 ca                	mov    %ecx,%edx
 85f15a8:	29 c2                	sub    %eax,%edx
 85f15aa:	89 d0                	mov    %edx,%eax
 85f15ac:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f15af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f15b2:	29 45 10             	sub    %eax,0x10(%ebp)
 85f15b5:	eb 07                	jmp    85f15be <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x5e>
 85f15b7:	c7 45 10 50 00 00 00 	movl   $0x50,0x10(%ebp)
 85f15be:	83 7d 10 09          	cmpl   $0x9,0x10(%ebp)
 85f15c2:	7f 1d                	jg     85f15e1 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x81>
 85f15c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f15c7:	8b 00                	mov    (%eax),%eax
 85f15c9:	83 f8 02             	cmp    $0x2,%eax
 85f15cc:	75 13                	jne    85f15e1 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x81>
 85f15ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f15d1:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85f15d7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f15dc:	e9 1e 02 00 00       	jmp    85f17ff <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x29f>
 85f15e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f15e4:	8b 00                	mov    (%eax),%eax
 85f15e6:	8b 55 10             	mov    0x10(%ebp),%edx
 85f15e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f15ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f15f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85f15f4:	89 04 24             	mov    %eax,(%esp)
 85f15f7:	e8 c6 f8 ff ff       	call   85f0ec2 <_ZN13random_option23CRandomOptionItemHandle19_random_applicationE11ENUM_RARITYi>
 85f15fc:	83 f0 01             	xor    $0x1,%eax
 85f15ff:	84 c0                	test   %al,%al
 85f1601:	74 0a                	je     85f160d <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0xad>
 85f1603:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f1608:	e9 f2 01 00 00       	jmp    85f17ff <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x29f>
 85f160d:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1610:	8b 40 08             	mov    0x8(%eax),%eax
 85f1613:	8d 50 01             	lea    0x1(%eax),%edx
 85f1616:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1619:	89 50 08             	mov    %edx,0x8(%eax)
 85f161c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f161f:	8b 00                	mov    (%eax),%eax
 85f1621:	8b 55 10             	mov    0x10(%ebp),%edx
 85f1624:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f1628:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f162c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f162f:	89 04 24             	mov    %eax,(%esp)
 85f1632:	e8 63 f9 ff ff       	call   85f0f9a <_ZN13random_option23CRandomOptionItemHandle16_get_level_limitE11ENUM_RARITYi>
 85f1637:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f163a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f163d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1641:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1644:	89 04 24             	mov    %eax,(%esp)
 85f1647:	e8 3c fa ff ff       	call   85f1088 <_ZN13random_option23CRandomOptionItemHandle14_get_part_typeEi>
 85f164c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f164f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f1652:	8b 00                	mov    (%eax),%eax
 85f1654:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85f1657:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f165b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f165f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f1662:	89 04 24             	mov    %eax,(%esp)
 85f1665:	e8 bc fd ff ff       	call   85f1426 <_ZN13random_option23CRandomOptionItemHandle14_get_base_itemE11ENUM_RARITYi>
 85f166a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f166d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f1670:	0f b7 c8             	movzwl %ax,%ecx
 85f1673:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85f1676:	0f b6 d0             	movzbl %al,%edx
 85f1679:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f167c:	8b 00                	mov    (%eax),%eax
 85f167e:	0f b6 c0             	movzbl %al,%eax
 85f1681:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85f1685:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f1689:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f168d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85f1690:	89 04 24             	mov    %eax,(%esp)
 85f1693:	e8 ea 28 f2 ff       	call   8513f82 <_ZN11BaseItemKeyC1Ehht>
 85f1698:	e8 13 f8 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f169d:	8d 48 60             	lea    0x60(%eax),%ecx
 85f16a0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f16a3:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85f16a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f16aa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f16ae:	89 04 24             	mov    %eax,(%esp)
 85f16b1:	e8 a0 2e 00 00       	call   85f4556 <_ZNKSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE4findERS4_>
 85f16b6:	83 ec 04             	sub    $0x4,%esp
 85f16b9:	e8 f2 f7 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f16be:	8d 50 60             	lea    0x60(%eax),%edx
 85f16c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f16c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f16c8:	89 04 24             	mov    %eax,(%esp)
 85f16cb:	e8 b2 2e 00 00       	call   85f4582 <_ZNKSt3mapIiS_Ii13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEES2_SaIS3_IS4_S7_EEE3endEv>
 85f16d0:	83 ec 04             	sub    $0x4,%esp
 85f16d3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f16d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f16da:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f16dd:	89 04 24             	mov    %eax,(%esp)
 85f16e0:	e8 c3 2e 00 00       	call   85f45a8 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEneERKSA_>
 85f16e5:	84 c0                	test   %al,%al
 85f16e7:	0f 84 04 01 00 00    	je     85f17f1 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x291>
 85f16ed:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f16f0:	89 04 24             	mov    %eax,(%esp)
 85f16f3:	e8 c4 2e 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f16f8:	83 c0 04             	add    $0x4,%eax
 85f16fb:	89 04 24             	mov    %eax,(%esp)
 85f16fe:	e8 c7 2e 00 00       	call   85f45ca <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
 85f1703:	84 c0                	test   %al,%al
 85f1705:	74 13                	je     85f171a <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x1ba>
 85f1707:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f170a:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85f1710:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f1715:	e9 e5 00 00 00       	jmp    85f17ff <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x29f>
 85f171a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f1721:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f1724:	89 04 24             	mov    %eax,(%esp)
 85f1727:	e8 90 2e 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f172c:	8d 50 04             	lea    0x4(%eax),%edx
 85f172f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f1732:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1736:	89 04 24             	mov    %eax,(%esp)
 85f1739:	e8 a0 2e 00 00       	call   85f45de <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 85f173e:	83 ec 04             	sub    $0x4,%esp
 85f1741:	eb 0f                	jmp    85f1752 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x1f2>
 85f1743:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f1746:	89 04 24             	mov    %eax,(%esp)
 85f1749:	e8 f0 2e 00 00       	call   85f463e <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEppEv>
 85f174e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f1752:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f1755:	89 04 24             	mov    %eax,(%esp)
 85f1758:	e8 5f 2e 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f175d:	8d 50 04             	lea    0x4(%eax),%edx
 85f1760:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1763:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f1767:	89 04 24             	mov    %eax,(%esp)
 85f176a:	e8 95 2e 00 00       	call   85f4604 <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f176f:	83 ec 04             	sub    $0x4,%esp
 85f1772:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f1775:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f1779:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f177c:	89 04 24             	mov    %eax,(%esp)
 85f177f:	e8 a6 2e 00 00       	call   85f462a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEneERKS4_>
 85f1784:	84 c0                	test   %al,%al
 85f1786:	74 0f                	je     85f1797 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x237>
 85f1788:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f178b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85f178e:	7d 07                	jge    85f1797 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x237>
 85f1790:	b8 01 00 00 00       	mov    $0x1,%eax
 85f1795:	eb 05                	jmp    85f179c <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x23c>
 85f1797:	b8 00 00 00 00       	mov    $0x0,%eax
 85f179c:	84 c0                	test   %al,%al
 85f179e:	75 a3                	jne    85f1743 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x1e3>
 85f17a0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f17a3:	89 04 24             	mov    %eax,(%esp)
 85f17a6:	e8 11 2e 00 00       	call   85f45bc <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIi13BaseItemValueSt4lessIiESaIS0_IS1_S3_EEEEEptEv>
 85f17ab:	8d 50 04             	lea    0x4(%eax),%edx
 85f17ae:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f17b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f17b5:	89 04 24             	mov    %eax,(%esp)
 85f17b8:	e8 47 2e 00 00       	call   85f4604 <_ZNKSt3mapIi13BaseItemValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f17bd:	83 ec 04             	sub    $0x4,%esp
 85f17c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f17c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f17c7:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f17ca:	89 04 24             	mov    %eax,(%esp)
 85f17cd:	e8 8a 2e 00 00       	call   85f465c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEeqERKS4_>
 85f17d2:	84 c0                	test   %al,%al
 85f17d4:	74 0b                	je     85f17e1 <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x281>
 85f17d6:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f17d9:	89 04 24             	mov    %eax,(%esp)
 85f17dc:	e8 8f 2e 00 00       	call   85f4670 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEmmEv>
 85f17e1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f17e4:	89 04 24             	mov    %eax,(%esp)
 85f17e7:	e8 a2 2e 00 00       	call   85f468e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi13BaseItemValueEEptEv>
 85f17ec:	8b 40 04             	mov    0x4(%eax),%eax
 85f17ef:	eb 0e                	jmp    85f17ff <_ZN13random_option23CRandomOptionItemHandle11choose_itemER11ENUM_RARITYi+0x29f>
 85f17f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f17f4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85f17fa:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85f17ff:	c9                   	leave
 85f1800:	c3                   	ret
 85f1801:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::choose_item @ 0x85f1560

/* random_option::CRandomOptionItemHandle::choose_item(ENUM_RARITY&, int) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::choose_item
          (CRandomOptionItemHandle *this,ENUM_RARITY *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_38 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
  local_34 [4];
  BaseItemKey local_30 [4];
  map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
  local_2c [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_28 [4];
  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
  local_24 [4];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (this[0xc] == (CRandomOptionItemHandle)0x0) {
    if (9 < param_2) {
      if (param_2 < 0x50) {
        local_14 = param_2 % 10;
        param_2 = param_2 - local_14;
      }
      else {
        param_2 = 0x50;
      }
    }
    if ((param_2 < 10) && (*(int *)param_1 == 2)) {
      *(undefined4 *)param_1 = 0;
      uVar3 = 0xffffffff;
    }
    else {
      cVar2 = _random_application(this,*(undefined4 *)param_1,param_2);
      if (cVar2 == '\x01') {
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        local_20 = _get_level_limit(this,*(undefined4 *)param_1,param_2);
        local_1c = _get_part_type((int)this);
        local_18 = _get_base_item(this,*(undefined4 *)param_1,local_20);
        BaseItemKey::BaseItemKey
                  (local_30,(uchar)*(undefined4 *)param_1,(uchar)local_20,(ushort)local_1c);
        GetRandomOption();
        std::
        map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
        ::find((int *)local_34);
        GetRandomOption();
        std::
        map<int,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>>
        ::end(local_2c);
        cVar2 = std::
                _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                ::operator!=(local_34,(_Rb_tree_const_iterator *)local_2c);
        if (cVar2 == '\0') {
          *(undefined4 *)param_1 = 0;
          uVar3 = 0xffffffff;
        }
        else {
          iVar4 = std::
                  _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
                  ::operator->(local_34);
          cVar2 = std::
                  map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
                  ::empty((map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
                           *)(iVar4 + 4));
          if (cVar2 == '\0') {
            local_10 = 0;
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator->(local_34);
            std::
            map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
            ::begin(local_38);
            while( true ) {
              std::
              _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
              ::operator->(local_34);
              std::
              map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
              ::end(local_28);
              cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator!=
                                ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)
                                 local_38,(_Rb_tree_const_iterator *)local_28);
              if ((cVar2 == '\0') || (local_18 <= local_10)) {
                bVar1 = false;
              }
              else {
                bVar1 = true;
              }
              if (!bVar1) break;
              std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator++
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_38);
              local_10 = local_10 + 1;
            }
            std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>>>
            ::operator->(local_34);
            std::
            map<int,BaseItemValue,std::less<int>,std::allocator<std::pair<int_const,BaseItemValue>>>
            ::end(local_24);
            cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator==
                              ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)
                               local_38,(_Rb_tree_const_iterator *)local_24);
            if (cVar2 != '\0') {
              std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator--
                        ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)local_38);
            }
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>>::operator->
                              ((_Rb_tree_const_iterator<std::pair<int_const,BaseItemValue>> *)
                               local_38);
            uVar3 = *(undefined4 *)(iVar4 + 4);
          }
          else {
            *(undefined4 *)param_1 = 0;
            uVar3 = 0xffffffff;
          }
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## give_option

```asm
// === 085f2cc6 random_option::CRandomOptionItemHandle::give_option  [0x085f2cc6-0x85f333f] ===
 85f2cc6:	55                   	push   %ebp
 85f2cc7:	89 e5                	mov    %esp,%ebp
 85f2cc9:	56                   	push   %esi
 85f2cca:	53                   	push   %ebx
 85f2ccb:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 85f2cd1:	c6 45 9f 00          	movb   $0x0,-0x61(%ebp)
 85f2cd5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85f2cdc:	8d 45 9f             	lea    -0x61(%ebp),%eax
 85f2cdf:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f2ce3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f2ce6:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f2cea:	8b 45 14             	mov    0x14(%ebp),%eax
 85f2ced:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f2cf1:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2cf4:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f2cf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f2cfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2cff:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2d02:	89 04 24             	mov    %eax,(%esp)
 85f2d05:	e8 2e f6 ff ff       	call   85f2338 <_ZN13random_option23CRandomOptionItemHandle16_get_option_typeEm11ENUM_RARITYiiRh>
 85f2d0a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f2d0d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f2d11:	0f 95 c0             	setne  %al
 85f2d14:	84 c0                	test   %al,%al
 85f2d16:	74 64                	je     85f2d7c <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0xb6>
 85f2d18:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2d1c:	0f b6 d0             	movzbl %al,%edx
 85f2d1f:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2d22:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 85f2d25:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85f2d29:	89 54 24 24          	mov    %edx,0x24(%esp)
 85f2d2d:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f2d30:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f2d34:	8b 55 14             	mov    0x14(%ebp),%edx
 85f2d37:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f2d3b:	89 44 24 18          	mov    %eax,0x18(%esp)
 85f2d3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85f2d42:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f2d46:	c7 44 24 10 3c 00 cd 	movl   $0x8cd003c,0x10(%esp)
 85f2d4d:	08 
 85f2d4e:	c7 44 24 0c f9 02 00 	movl   $0x2f9,0xc(%esp)
 85f2d55:	00 
 85f2d56:	c7 44 24 08 80 0f cd 	movl   $0x8cd0f80,0x8(%esp)
 85f2d5d:	08 
 85f2d5e:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f2d65:	08 
 85f2d66:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f2d6d:	e8 98 0e 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f2d72:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f2d77:	e9 b7 05 00 00       	jmp    85f3333 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x66d>
 85f2d7c:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 85f2d83:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2d87:	0f b6 c0             	movzbl %al,%eax
 85f2d8a:	8d 55 98             	lea    -0x68(%ebp),%edx
 85f2d8d:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f2d91:	8b 55 14             	mov    0x14(%ebp),%edx
 85f2d94:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f2d98:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f2d9c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f2d9f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f2da3:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2da6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2daa:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2dad:	89 04 24             	mov    %eax,(%esp)
 85f2db0:	e8 fb f7 ff ff       	call   85f25b0 <_ZN13random_option23CRandomOptionItemHandle20_get_option_quantityE11ENUM_RARITYiiiRi>
 85f2db5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f2db8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f2dbc:	0f 95 c0             	setne  %al
 85f2dbf:	84 c0                	test   %al,%al
 85f2dc1:	74 64                	je     85f2e27 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x161>
 85f2dc3:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 85f2dc6:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2dca:	0f b6 d0             	movzbl %al,%edx
 85f2dcd:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2dd0:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f2dd3:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 85f2dd7:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85f2ddb:	8b 4d 14             	mov    0x14(%ebp),%ecx
 85f2dde:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85f2de2:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f2de6:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f2de9:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2ded:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f2df1:	c7 44 24 10 70 00 cd 	movl   $0x8cd0070,0x10(%esp)
 85f2df8:	08 
 85f2df9:	c7 44 24 0c 00 03 00 	movl   $0x300,0xc(%esp)
 85f2e00:	00 
 85f2e01:	c7 44 24 08 80 0f cd 	movl   $0x8cd0f80,0x8(%esp)
 85f2e08:	08 
 85f2e09:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f2e10:	08 
 85f2e11:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f2e18:	e8 ed 0d 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f2e1d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f2e22:	e9 0c 05 00 00       	jmp    85f3333 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x66d>
 85f2e27:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2e2a:	8b 40 10             	mov    0x10(%eax),%eax
 85f2e2d:	85 c0                	test   %eax,%eax
 85f2e2f:	74 09                	je     85f2e3a <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x174>
 85f2e31:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2e34:	8b 40 10             	mov    0x10(%eax),%eax
 85f2e37:	89 45 98             	mov    %eax,-0x68(%ebp)
 85f2e3a:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 85f2e41:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2e45:	0f b6 c0             	movzbl %al,%eax
 85f2e48:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85f2e4b:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2e4f:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f2e53:	8b 45 14             	mov    0x14(%ebp),%eax
 85f2e56:	89 44 24 10          	mov    %eax,0x10(%esp)
 85f2e5a:	8b 45 18             	mov    0x18(%ebp),%eax
 85f2e5d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85f2e61:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85f2e64:	89 44 24 08          	mov    %eax,0x8(%esp)
 85f2e68:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2e6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2e6f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f2e72:	89 04 24             	mov    %eax,(%esp)
 85f2e75:	e8 08 fa ff ff       	call   85f2882 <_ZN13random_option23CRandomOptionItemHandle20_choose_option_groupE11ENUM_RARITYiiiiRi>
 85f2e7a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f2e7d:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85f2e81:	0f 95 c0             	setne  %al
 85f2e84:	84 c0                	test   %al,%al
 85f2e86:	74 6b                	je     85f2ef3 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x22d>
 85f2e88:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 85f2e8b:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2e8f:	0f b6 d0             	movzbl %al,%edx
 85f2e92:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2e95:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85f2e98:	89 5c 24 2c          	mov    %ebx,0x2c(%esp)
 85f2e9c:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85f2ea0:	89 54 24 24          	mov    %edx,0x24(%esp)
 85f2ea4:	8b 55 14             	mov    0x14(%ebp),%edx
 85f2ea7:	89 54 24 20          	mov    %edx,0x20(%esp)
 85f2eab:	8b 55 18             	mov    0x18(%ebp),%edx
 85f2eae:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85f2eb2:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85f2eb5:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2eb9:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f2ebd:	c7 44 24 10 a8 00 cd 	movl   $0x8cd00a8,0x10(%esp)
 85f2ec4:	08 
 85f2ec5:	c7 44 24 0c 0d 03 00 	movl   $0x30d,0xc(%esp)
 85f2ecc:	00 
 85f2ecd:	c7 44 24 08 80 0f cd 	movl   $0x8cd0f80,0x8(%esp)
 85f2ed4:	08 
 85f2ed5:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f2edc:	08 
 85f2edd:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f2ee4:	e8 21 0d 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f2ee9:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f2eee:	e9 40 04 00 00       	jmp    85f3333 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x66d>
 85f2ef3:	8d 45 88             	lea    -0x78(%ebp),%eax
 85f2ef6:	89 04 24             	mov    %eax,(%esp)
 85f2ef9:	e8 9c 12 00 00       	call   85f419a <_ZN20DifferentWeightValueC1Ev>
 85f2efe:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2f01:	88 45 92             	mov    %al,-0x6e(%ebp)
 85f2f04:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2f08:	88 45 93             	mov    %al,-0x6d(%ebp)
 85f2f0b:	e8 a0 df ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2f10:	8d 88 f4 00 00 00    	lea    0xf4(%eax),%ecx
 85f2f16:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f2f19:	8d 55 92             	lea    -0x6e(%ebp),%edx
 85f2f1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2f20:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f2f24:	89 04 24             	mov    %eax,(%esp)
 85f2f27:	e8 e4 17 00 00       	call   85f4710 <_ZNKSt3mapIs20DifferentWeightValueSt4lessIsESaISt4pairIKsS0_EEE4findERS4_>
 85f2f2c:	83 ec 04             	sub    $0x4,%esp
 85f2f2f:	e8 7c df ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2f34:	8d 90 f4 00 00 00    	lea    0xf4(%eax),%edx
 85f2f3a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2f3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2f41:	89 04 24             	mov    %eax,(%esp)
 85f2f44:	e8 f3 17 00 00       	call   85f473c <_ZNKSt3mapIs20DifferentWeightValueSt4lessIsESaISt4pairIKsS0_EEE3endEv>
 85f2f49:	83 ec 04             	sub    $0x4,%esp
 85f2f4c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f2f4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f2f53:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f2f56:	89 04 24             	mov    %eax,(%esp)
 85f2f59:	e8 04 18 00 00       	call   85f4762 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKs20DifferentWeightValueEEeqERKS4_>
 85f2f5e:	84 c0                	test   %al,%al
 85f2f60:	74 48                	je     85f2faa <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x2e4>
 85f2f62:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f2f66:	0f b6 d0             	movzbl %al,%edx
 85f2f69:	8b 45 10             	mov    0x10(%ebp),%eax
 85f2f6c:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f2f70:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f2f74:	c7 44 24 10 e0 00 cd 	movl   $0x8cd00e0,0x10(%esp)
 85f2f7b:	08 
 85f2f7c:	c7 44 24 0c 19 03 00 	movl   $0x319,0xc(%esp)
 85f2f83:	00 
 85f2f84:	c7 44 24 08 80 0f cd 	movl   $0x8cd0f80,0x8(%esp)
 85f2f8b:	08 
 85f2f8c:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f2f93:	08 
 85f2f94:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f2f9b:	e8 6a 0c 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f2fa0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f2fa5:	e9 89 03 00 00       	jmp    85f3333 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x66d>
 85f2faa:	8d 45 84             	lea    -0x7c(%ebp),%eax
 85f2fad:	89 04 24             	mov    %eax,(%esp)
 85f2fb0:	e8 c1 17 00 00       	call   85f4776 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKs20DifferentWeightValueEEptEv>
 85f2fb5:	8b 50 08             	mov    0x8(%eax),%edx
 85f2fb8:	8b 40 04             	mov    0x4(%eax),%eax
 85f2fbb:	89 45 88             	mov    %eax,-0x78(%ebp)
 85f2fbe:	89 55 8c             	mov    %edx,-0x74(%ebp)
 85f2fc1:	e8 ea de ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2fc6:	8d 88 60 01 00 00    	lea    0x160(%eax),%ecx
 85f2fcc:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f2fcf:	8d 55 94             	lea    -0x6c(%ebp),%edx
 85f2fd2:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f2fd6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f2fda:	89 04 24             	mov    %eax,(%esp)
 85f2fdd:	e8 a2 17 00 00       	call   85f4784 <_ZNKSt3mapIi16OptionGroupValueSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 85f2fe2:	83 ec 04             	sub    $0x4,%esp
 85f2fe5:	e8 c6 de ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f2fea:	8d 90 60 01 00 00    	lea    0x160(%eax),%edx
 85f2ff0:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f2ff3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f2ff7:	89 04 24             	mov    %eax,(%esp)
 85f2ffa:	e8 b1 17 00 00       	call   85f47b0 <_ZNKSt3mapIi16OptionGroupValueSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 85f2fff:	83 ec 04             	sub    $0x4,%esp
 85f3002:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f3005:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3009:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f300c:	89 04 24             	mov    %eax,(%esp)
 85f300f:	e8 c2 17 00 00       	call   85f47d6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEeqERKS4_>
 85f3014:	84 c0                	test   %al,%al
 85f3016:	74 3d                	je     85f3055 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x38f>
 85f3018:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85f301b:	89 44 24 14          	mov    %eax,0x14(%esp)
 85f301f:	c7 44 24 10 fb 00 cd 	movl   $0x8cd00fb,0x10(%esp)
 85f3026:	08 
 85f3027:	c7 44 24 0c 21 03 00 	movl   $0x321,0xc(%esp)
 85f302e:	00 
 85f302f:	c7 44 24 08 80 0f cd 	movl   $0x8cd0f80,0x8(%esp)
 85f3036:	08 
 85f3037:	c7 44 24 04 2a 00 cd 	movl   $0x8cd002a,0x4(%esp)
 85f303e:	08 
 85f303f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85f3046:	e8 bf 0b 4e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85f304b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85f3050:	e9 de 02 00 00       	jmp    85f3333 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x66d>
 85f3055:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f3058:	89 04 24             	mov    %eax,(%esp)
 85f305b:	e8 8a 17 00 00       	call   85f47ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEptEv>
 85f3060:	8b 40 10             	mov    0x10(%eax),%eax
 85f3063:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f3066:	8d 45 80             	lea    -0x80(%ebp),%eax
 85f3069:	89 04 24             	mov    %eax,(%esp)
 85f306c:	e8 79 17 00 00       	call   85f47ea <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKi16OptionGroupValueEEptEv>
 85f3071:	83 c0 04             	add    $0x4,%eax
 85f3074:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3078:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f307e:	89 04 24             	mov    %eax,(%esp)
 85f3081:	e8 72 17 00 00       	call   85f47f8 <_ZNSt6vectorI11OptionGroupSaIS0_EEC1ERKS2_>
 85f3086:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85f308d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85f3094:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f309a:	89 04 24             	mov    %eax,(%esp)
 85f309d:	e8 0a 18 00 00       	call   85f48ac <_ZN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEC1Ev>
 85f30a2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85f30a9:	e9 d6 01 00 00       	jmp    85f3284 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x5be>
 85f30ae:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f30b1:	89 45 a8             	mov    %eax,-0x58(%ebp)
 85f30b4:	8b 45 08             	mov    0x8(%ebp),%eax
 85f30b7:	8b 40 04             	mov    0x4(%eax),%eax
 85f30ba:	8d 90 08 58 00 00    	lea    0x5808(%eax),%edx
 85f30c0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f30c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f30c7:	89 14 24             	mov    %edx,(%esp)
 85f30ca:	e8 ef 89 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f30cf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f30d2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f30d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f30d9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f30dc:	89 04 24             	mov    %eax,(%esp)
 85f30df:	e8 20 18 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f30e4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f30e7:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f30ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f30f1:	89 04 24             	mov    %eax,(%esp)
 85f30f4:	e8 e5 17 00 00       	call   85f48de <_ZNSt6vectorI11OptionGroupSaIS0_EE3endEv>
 85f30f9:	83 ec 04             	sub    $0x4,%esp
 85f30fc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85f30ff:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f3105:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3109:	89 04 24             	mov    %eax,(%esp)
 85f310c:	e8 a9 17 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f3111:	83 ec 04             	sub    $0x4,%esp
 85f3114:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f3117:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85f311a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f311e:	8b 55 c0             	mov    -0x40(%ebp),%edx
 85f3121:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f3125:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85f3128:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f312c:	8b 55 c8             	mov    -0x38(%ebp),%edx
 85f312f:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f3133:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85f3136:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f313a:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85f313d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3141:	89 04 24             	mov    %eax,(%esp)
 85f3144:	e8 e6 17 00 00       	call   85f492f <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS2_SaIS2_EEEE11CRandomListIjEET0_T_SB_SA_>
 85f3149:	83 ec 04             	sub    $0x4,%esp
 85f314c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85f314f:	89 04 24             	mov    %eax,(%esp)
 85f3152:	e8 49 18 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f3157:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f315a:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f3160:	89 04 24             	mov    %eax,(%esp)
 85f3163:	e8 42 18 00 00       	call   85f49aa <_ZNKSt6vectorI11OptionGroupSaIS0_EE4sizeEv>
 85f3168:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85f316b:	0f 96 c0             	setbe  %al
 85f316e:	84 c0                	test   %al,%al
 85f3170:	0f 85 09 01 00 00    	jne    85f327f <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x5b9>
 85f3176:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f3179:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85f317c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85f317f:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f3185:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3189:	89 04 24             	mov    %eax,(%esp)
 85f318c:	e8 29 17 00 00       	call   85f48ba <_ZNSt6vectorI11OptionGroupSaIS0_EE5beginEv>
 85f3191:	83 ec 04             	sub    $0x4,%esp
 85f3194:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 85f319a:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 85f319d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f31a1:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85f31a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f31a8:	89 04 24             	mov    %eax,(%esp)
 85f31ab:	e8 16 18 00 00       	call   85f49c6 <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEplERKi>
 85f31b0:	83 ec 04             	sub    $0x4,%esp
 85f31b3:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 85f31b9:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 85f31bf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f31c2:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f31c8:	89 04 24             	mov    %eax,(%esp)
 85f31cb:	e8 2c 18 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f31d0:	8b 00                	mov    (%eax),%eax
 85f31d2:	89 c1                	mov    %eax,%ecx
 85f31d4:	8b 55 20             	mov    0x20(%ebp),%edx
 85f31d7:	89 d8                	mov    %ebx,%eax
 85f31d9:	01 c0                	add    %eax,%eax
 85f31db:	01 d8                	add    %ebx,%eax
 85f31dd:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 85f31e0:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85f31e3:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85f31e9:	89 04 24             	mov    %eax,(%esp)
 85f31ec:	e8 0b 18 00 00       	call   85f49fc <_ZNK9__gnu_cxx17__normal_iteratorIP11OptionGroupSt6vectorIS1_SaIS1_EEEdeEv>
 85f31f1:	8b 40 04             	mov    0x4(%eax),%eax
 85f31f4:	89 da                	mov    %ebx,%edx
 85f31f6:	29 c2                	sub    %eax,%edx
 85f31f8:	89 d0                	mov    %edx,%eax
 85f31fa:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f31fd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f3200:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 85f3206:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f320a:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 85f3210:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3214:	89 04 24             	mov    %eax,(%esp)
 85f3217:	e8 ea 17 00 00       	call   85f4a06 <_ZNSt6vectorI11OptionGroupSaIS0_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS0_S2_EE>
 85f321c:	83 ec 04             	sub    $0x4,%esp
 85f321f:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f3222:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f3225:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f3228:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f322c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3230:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3233:	89 04 24             	mov    %eax,(%esp)
 85f3236:	e8 c7 f8 ff ff       	call   85f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>
 85f323b:	89 c2                	mov    %eax,%edx
 85f323d:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f3240:	89 d8                	mov    %ebx,%eax
 85f3242:	01 c0                	add    %eax,%eax
 85f3244:	01 d8                	add    %ebx,%eax
 85f3246:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f3249:	83 c0 01             	add    $0x1,%eax
 85f324c:	88 10                	mov    %dl,(%eax)
 85f324e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85f3251:	8b 55 8c             	mov    -0x74(%ebp),%edx
 85f3254:	8b 45 88             	mov    -0x78(%ebp),%eax
 85f3257:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f325b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f325f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3262:	89 04 24             	mov    %eax,(%esp)
 85f3265:	e8 98 f8 ff ff       	call   85f2b02 <_ZN13random_option23CRandomOptionItemHandle17_get_option_valueEii>
 85f326a:	89 c2                	mov    %eax,%edx
 85f326c:	8b 4d 20             	mov    0x20(%ebp),%ecx
 85f326f:	89 d8                	mov    %ebx,%eax
 85f3271:	01 c0                	add    %eax,%eax
 85f3273:	01 d8                	add    %ebx,%eax
 85f3275:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85f3278:	83 c0 02             	add    $0x2,%eax
 85f327b:	88 10                	mov    %dl,(%eax)
 85f327d:	eb 01                	jmp    85f3280 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x5ba>
 85f327f:	90                   	nop
 85f3280:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85f3284:	8b 45 98             	mov    -0x68(%ebp),%eax
 85f3287:	39 45 f4             	cmp    %eax,-0xc(%ebp)
 85f328a:	7d 0d                	jge    85f3299 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x5d3>
 85f328c:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 85f3290:	7f 07                	jg     85f3299 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x5d3>
 85f3292:	b8 01 00 00 00       	mov    $0x1,%eax
 85f3297:	eb 05                	jmp    85f329e <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x5d8>
 85f3299:	b8 00 00 00 00       	mov    $0x0,%eax
 85f329e:	84 c0                	test   %al,%al
 85f32a0:	0f 85 08 fe ff ff    	jne    85f30ae <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x3e8>
 85f32a6:	0f b6 45 9f          	movzbl -0x61(%ebp),%eax
 85f32aa:	89 c2                	mov    %eax,%edx
 85f32ac:	83 e2 03             	and    $0x3,%edx
 85f32af:	8b 45 20             	mov    0x20(%ebp),%eax
 85f32b2:	89 d1                	mov    %edx,%ecx
 85f32b4:	83 e1 03             	and    $0x3,%ecx
 85f32b7:	0f b6 50 09          	movzbl 0x9(%eax),%edx
 85f32bb:	83 e2 fc             	and    $0xfffffffc,%edx
 85f32be:	09 ca                	or     %ecx,%edx
 85f32c0:	88 50 09             	mov    %dl,0x9(%eax)
 85f32c3:	c7 45 e0 40 00 00 00 	movl   $0x40,-0x20(%ebp)
 85f32ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85f32cd:	8b 40 04             	mov    0x4(%eax),%eax
 85f32d0:	8d 90 d0 61 00 00    	lea    0x61d0(%eax),%edx
 85f32d6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f32d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f32dd:	89 14 24             	mov    %edx,(%esp)
 85f32e0:	e8 d9 87 ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f32e5:	89 c2                	mov    %eax,%edx
 85f32e7:	83 e2 3f             	and    $0x3f,%edx
 85f32ea:	8b 45 20             	mov    0x20(%ebp),%eax
 85f32ed:	8d 0c 95 00 00 00 00 	lea    0x0(,%edx,4),%ecx
 85f32f4:	0f b6 50 09          	movzbl 0x9(%eax),%edx
 85f32f8:	83 e2 03             	and    $0x3,%edx
 85f32fb:	09 ca                	or     %ecx,%edx
 85f32fd:	88 50 09             	mov    %dl,0x9(%eax)
 85f3300:	bb 01 00 00 00       	mov    $0x1,%ebx
 85f3305:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f330b:	89 04 24             	mov    %eax,(%esp)
 85f330e:	e8 e1 2d d9 ff       	call   83860f4 <_ZNSt6vectorI11OptionGroupSaIS0_EED1Ev>
 85f3313:	eb 1e                	jmp    85f3333 <_ZN13random_option23CRandomOptionItemHandle11give_optionEm11ENUM_RARITYiiiP12RandomOption+0x66d>
 85f3315:	89 d3                	mov    %edx,%ebx
 85f3317:	89 c6                	mov    %eax,%esi
 85f3319:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 85f331f:	89 04 24             	mov    %eax,(%esp)
 85f3322:	e8 cd 2d d9 ff       	call   83860f4 <_ZNSt6vectorI11OptionGroupSaIS0_EED1Ev>
 85f3327:	89 f0                	mov    %esi,%eax
 85f3329:	89 da                	mov    %ebx,%edx
 85f332b:	89 04 24             	mov    %eax,(%esp)
 85f332e:	e8 1d 04 4f 00       	call   8ae3750 <_Unwind_Resume>
 85f3333:	89 d8                	mov    %ebx,%eax
 85f3335:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85f3338:	83 c4 00             	add    $0x0,%esp
 85f333b:	5b                   	pop    %ebx
 85f333c:	5e                   	pop    %esi
 85f333d:	5d                   	pop    %ebp
 85f333e:	c3                   	ret
 85f333f:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::give_option @ 0x85f2cc6

/* random_option::CRandomOptionItemHandle::give_option(unsigned long, ENUM_RARITY, int, int, int,
   RandomOption*) */

undefined4
random_option::CRandomOptionItemHandle::give_option
          (int param_1,undefined4 param_2,undefined1 param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int in_stack_0000001c;
  int local_e4 [2];
  int local_c8 [10];
  int local_a0 [3];
  int local_94;
  vector<OptionGroup,std::allocator<OptionGroup>> local_90 [12];
  _Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>> local_84 [4];
  _Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>> local_80 [4];
  undefined4 local_7c;
  int local_78;
  undefined1 local_72;
  byte local_71;
  undefined4 local_70;
  int local_6c;
  byte local_65;
  map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
  local_64 [4];
  map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
  local_60 [4];
  int local_5c;
  undefined1 local_58 [16];
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_65 = 0;
  local_20 = 0;
  local_20 = _get_option_type();
  if (local_20 == 0) {
    local_6c = 0;
    local_20 = _get_option_quantity();
    if (local_20 == 0) {
      if (*(int *)(param_1 + 0x10) != 0) {
        local_6c = *(int *)(param_1 + 0x10);
      }
      local_70 = 0;
      local_20 = _choose_option_group();
      if (local_20 == 0) {
        DifferentWeightValue::DifferentWeightValue((DifferentWeightValue *)&local_7c);
        local_72 = param_3;
        local_71 = local_65;
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::find((short *)local_80);
        GetRandomOption();
        std::
        map<short,DifferentWeightValue,std::less<short>,std::allocator<std::pair<short_const,DifferentWeightValue>>>
        ::end(local_64);
        cVar2 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                operator==(local_80,(_Rb_tree_const_iterator *)local_64);
        if (cVar2 == '\0') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<short_const,DifferentWeightValue>>::
                  operator->(local_80);
          local_78 = *(int *)(iVar4 + 8);
          local_7c = *(undefined4 *)(iVar4 + 4);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::find((int *)local_84);
          GetRandomOption();
          std::
          map<int,OptionGroupValue,std::less<int>,std::allocator<std::pair<int_const,OptionGroupValue>>>
          ::end(local_60);
          cVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator==
                            (local_84,(_Rb_tree_const_iterator *)local_60);
          if (cVar2 == '\0') {
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            local_1c = *(int *)(iVar4 + 0x10);
            iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,OptionGroupValue>>::operator->
                              (local_84);
            std::vector<OptionGroup,std::allocator<OptionGroup>>::vector
                      (local_90,(vector *)(iVar4 + 4));
            local_18 = 0;
            local_14 = 0;
            __gnu_cxx::
            __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>::
            __normal_iterator((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                               *)&local_94);
            local_10 = 0;
            piVar9 = (int *)&stack0xffffff24;
            while( true ) {
              if ((local_10 < local_6c) && (local_10 < 3)) {
                bVar1 = true;
              }
              else {
                bVar1 = false;
              }
              if (!bVar1) break;
              local_5c = local_1c;
              iVar4 = *(int *)(param_1 + 4);
              piVar9[1] = (int)&local_5c;
              *piVar9 = iVar4 + 0x5808;
              piVar9[-1] = 0x85f30cf;
              local_18 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
              piVar9[1] = local_18;
              *piVar9 = (int)&local_48;
              piVar9[-1] = 0x85f30e4;
              CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)*piVar9,piVar9[1])
              ;
              piVar9[1] = (int)local_90;
              *piVar9 = (int)&local_38;
                    /* try { // try from 085f30f4 to 085f3269 has its CatchHandler @ 085f3315 */
              piVar9[-1] = 0x85f30f9;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::end();
              piVar9[1] = (int)local_90;
              *piVar9 = (int)&local_34;
              piVar9[-1] = 0x85f3111;
              std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
              piVar9[3] = local_48;
              piVar9[4] = local_44;
              piVar9[5] = local_40;
              piVar9[6] = local_3c;
              piVar9[2] = local_38;
              piVar9[1] = local_34;
              *piVar9 = (int)local_58;
              piVar9[-1] = 0x85f3149;
              std::
              for_each<__gnu_cxx::__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>,CRandomList<unsigned_int>>
                        ();
              piVar9[-1] = (int)local_58;
              piVar9[-2] = 0x85f3157;
              local_14 = CRandomList<unsigned_int>::get_value
                                   ((CRandomList<unsigned_int> *)piVar9[-1]);
              piVar9[-1] = (int)local_90;
              piVar9[-2] = 0x85f3168;
              uVar5 = std::vector<OptionGroup,std::allocator<OptionGroup>>::size
                                ((vector<OptionGroup,std::allocator<OptionGroup>> *)piVar9[-1]);
              if (local_14 < uVar5) {
                local_30 = local_14;
                *piVar9 = (int)local_90;
                piVar9[-1] = (int)local_2c;
                piVar9[-2] = 0x85f3191;
                std::vector<OptionGroup,std::allocator<OptionGroup>>::begin();
                piVar9[1] = (int)&local_30;
                *piVar9 = (int)local_2c;
                piVar9[-1] = (int)local_a0;
                piVar9[-2] = 0x85f31b0;
                __gnu_cxx::
                __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                ::operator+((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                             *)piVar9[-1],(int *)*piVar9);
                iVar7 = local_10;
                local_94 = local_a0[0];
                piVar9[-1] = (int)&local_94;
                piVar9[-2] = 0x85f31d0;
                puVar6 = (undefined4 *)
                         __gnu_cxx::
                         __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                         ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                      *)piVar9[-1]);
                iVar4 = local_1c;
                *(char *)(iVar7 * 3 + in_stack_0000001c) = (char)*puVar6;
                piVar9[-1] = (int)&local_94;
                piVar9[-2] = 0x85f31f1;
                iVar7 = __gnu_cxx::
                        __normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                        ::operator*((__normal_iterator<OptionGroup*,std::vector<OptionGroup,std::allocator<OptionGroup>>>
                                     *)piVar9[-1]);
                local_1c = iVar4 - *(int *)(iVar7 + 4);
                piVar9[1] = local_94;
                *piVar9 = (int)local_90;
                piVar9[-1] = (int)local_28;
                piVar9[-2] = 0x85f321c;
                std::vector<OptionGroup,std::allocator<OptionGroup>>::erase();
                iVar4 = local_10;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f323b;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                iVar7 = local_10;
                *(undefined1 *)(in_stack_0000001c + iVar4 * 3 + 1) = uVar3;
                piVar9[1] = local_78;
                *piVar9 = local_7c;
                piVar9[-1] = param_1;
                piVar9[-2] = 0x85f326a;
                uVar3 = _get_option_value((CRandomOptionItemHandle *)piVar9[-1],*piVar9,piVar9[1]);
                *(undefined1 *)(in_stack_0000001c + iVar7 * 3 + 2) = uVar3;
              }
              local_10 = local_10 + 1;
              piVar9 = piVar9 + -1;
            }
            *(byte *)(in_stack_0000001c + 9) =
                 *(byte *)(in_stack_0000001c + 9) & 0xfc | local_65 & 3;
            local_24 = 0x40;
            iVar4 = *(int *)(param_1 + 4);
            piVar9[1] = (int)&local_24;
            *piVar9 = iVar4 + 0x61d0;
            piVar9[-1] = 0x85f32e5;
            cVar2 = CMTRand::randInt((CMTRand *)*piVar9,(ulong *)piVar9[1]);
            *(byte *)(in_stack_0000001c + 9) = *(byte *)(in_stack_0000001c + 9) & 3 | cVar2 * '\x04'
            ;
            uVar8 = 1;
            *piVar9 = (int)local_90;
            piVar9[-1] = 0x85f3313;
            std::vector<OptionGroup,std::allocator<OptionGroup>>::~vector
                      ((vector<OptionGroup,std::allocator<OptionGroup>> *)*piVar9);
          }
          else {
            LogManager::logFormat
                      (1,"RandomOption.cpp",
                       "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                       ,0x321,"option_group_ (%d) ");
            uVar8 = 0;
          }
        }
        else {
          LogManager::logFormat
                    (1,"RandomOption.cpp",
                     "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                     ,0x319,"different_weight_ (%d,%d) ");
          uVar8 = 0;
        }
      }
      else {
        LogManager::logFormat
                  (1,"RandomOption.cpp",
                   "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                   ,0x30d,"_choose_option_group (%d,%d,%d,%d,%d,%d) error_line(%d)");
        uVar8 = 0;
      }
    }
    else {
      LogManager::logFormat
                (1,"RandomOption.cpp",
                 "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
                 ,0x300,"_get_option_quantity (%d,%d,%d,%d,%d) error_line(%d)");
      uVar8 = 0;
    }
  }
  else {
    LogManager::logFormat
              (1,"RandomOption.cpp",
               "bool random_option::CRandomOptionItemHandle::give_option(itemIndex_t, ENUM_RARITY, int, int, int, RandomOption*)"
               ,0x2f9,"_get_option_type (%d,%d,%d,%d,%d) error_line(%d)");
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## reset_option

```asm
// === 085f39d2 random_option::CRandomOptionItemHandle::reset_option  [0x085f39d2-0x85f3cb7] ===
 85f39d2:	55                   	push   %ebp
 85f39d3:	89 e5                	mov    %esp,%ebp
 85f39d5:	53                   	push   %ebx
 85f39d6:	81 ec 84 00 00 00    	sub    $0x84,%esp
 85f39dc:	8b 45 14             	mov    0x14(%ebp),%eax
 85f39df:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f39e3:	8b 45 18             	mov    0x18(%ebp),%eax
 85f39e6:	89 04 24             	mov    %eax,(%esp)
 85f39e9:	e8 52 06 00 00       	call   85f4040 <_ZN12RandomOption16get_option_indexE25ENUM_RANDOM_OPTION_NUMBER>
 85f39ee:	84 c0                	test   %al,%al
 85f39f0:	0f 94 c0             	sete   %al
 85f39f3:	84 c0                	test   %al,%al
 85f39f5:	74 0a                	je     85f3a01 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x2f>
 85f39f7:	b8 17 00 00 00       	mov    $0x17,%eax
 85f39fc:	e9 b1 02 00 00       	jmp    85f3cb2 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x2e0>
 85f3a01:	e8 aa d4 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f3a06:	8d 90 00 02 00 00    	lea    0x200(%eax),%edx
 85f3a0c:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f3a0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3a13:	89 04 24             	mov    %eax,(%esp)
 85f3a16:	e8 d5 58 f7 ff       	call   85692f0 <_ZNKSt3setImSt4lessImESaImEE3endEv>
 85f3a1b:	83 ec 04             	sub    $0x4,%esp
 85f3a1e:	8b 45 14             	mov    0x14(%ebp),%eax
 85f3a21:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3a25:	8b 45 18             	mov    0x18(%ebp),%eax
 85f3a28:	89 04 24             	mov    %eax,(%esp)
 85f3a2b:	e8 10 06 00 00       	call   85f4040 <_ZN12RandomOption16get_option_indexE25ENUM_RANDOM_OPTION_NUMBER>
 85f3a30:	0f b6 c0             	movzbl %al,%eax
 85f3a33:	89 45 ac             	mov    %eax,-0x54(%ebp)
 85f3a36:	e8 75 d4 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f3a3b:	8d 88 00 02 00 00    	lea    0x200(%eax),%ecx
 85f3a41:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f3a44:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85f3a47:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3a4b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f3a4f:	89 04 24             	mov    %eax,(%esp)
 85f3a52:	e8 6d 58 f7 ff       	call   85692c4 <_ZNKSt3setImSt4lessImESaImEE4findERKm>
 85f3a57:	83 ec 04             	sub    $0x4,%esp
 85f3a5a:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85f3a5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3a61:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85f3a64:	89 04 24             	mov    %eax,(%esp)
 85f3a67:	e8 aa 58 f7 ff       	call   8569316 <_ZNKSt23_Rb_tree_const_iteratorImEneERKS0_>
 85f3a6c:	84 c0                	test   %al,%al
 85f3a6e:	74 0a                	je     85f3a7a <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0xa8>
 85f3a70:	b8 17 00 00 00       	mov    $0x17,%eax
 85f3a75:	e9 38 02 00 00       	jmp    85f3cb2 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x2e0>
 85f3a7a:	8b 45 10             	mov    0x10(%ebp),%eax
 85f3a7d:	88 45 b3             	mov    %al,-0x4d(%ebp)
 85f3a80:	e8 2b d4 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f3a85:	8d 88 e8 01 00 00    	lea    0x1e8(%eax),%ecx
 85f3a8b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3a8e:	8d 55 b3             	lea    -0x4d(%ebp),%edx
 85f3a91:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3a95:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85f3a99:	89 04 24             	mov    %eax,(%esp)
 85f3a9c:	e8 19 14 00 00       	call   85f4eba <_ZNKSt3mapIh11ResetValuesSt4lessIhESaISt4pairIKhS0_EEE4findERS4_>
 85f3aa1:	83 ec 04             	sub    $0x4,%esp
 85f3aa4:	e8 07 d4 ff ff       	call   85f0eb0 <_ZN13random_option15GetRandomOptionEv>
 85f3aa9:	8d 90 e8 01 00 00    	lea    0x1e8(%eax),%edx
 85f3aaf:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f3ab2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3ab6:	89 04 24             	mov    %eax,(%esp)
 85f3ab9:	e8 28 14 00 00       	call   85f4ee6 <_ZNKSt3mapIh11ResetValuesSt4lessIhESaISt4pairIKhS0_EEE3endEv>
 85f3abe:	83 ec 04             	sub    $0x4,%esp
 85f3ac1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85f3ac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3ac8:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3acb:	89 04 24             	mov    %eax,(%esp)
 85f3ace:	e8 39 14 00 00       	call   85f4f0c <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEeqERKS4_>
 85f3ad3:	84 c0                	test   %al,%al
 85f3ad5:	74 0a                	je     85f3ae1 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x10f>
 85f3ad7:	b8 13 00 00 00       	mov    $0x13,%eax
 85f3adc:	e9 d1 01 00 00       	jmp    85f3cb2 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x2e0>
 85f3ae1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3ae4:	89 04 24             	mov    %eax,(%esp)
 85f3ae7:	e8 34 14 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3aec:	8b 40 10             	mov    0x10(%eax),%eax
 85f3aef:	83 e8 01             	sub    $0x1,%eax
 85f3af2:	89 45 b8             	mov    %eax,-0x48(%ebp)
 85f3af5:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3af8:	8b 40 04             	mov    0x4(%eax),%eax
 85f3afb:	8d 90 98 6b 00 00    	lea    0x6b98(%eax),%edx
 85f3b01:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85f3b04:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3b08:	89 14 24             	mov    %edx,(%esp)
 85f3b0b:	e8 ae 7f ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f3b10:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85f3b13:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85f3b16:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3b1a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85f3b1d:	89 04 24             	mov    %eax,(%esp)
 85f3b20:	e8 df 0d 00 00       	call   85f4904 <_ZN11CRandomListIjEC1Ej>
 85f3b25:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3b28:	89 04 24             	mov    %eax,(%esp)
 85f3b2b:	e8 f0 13 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3b30:	8d 50 04             	lea    0x4(%eax),%edx
 85f3b33:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85f3b36:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3b3a:	89 04 24             	mov    %eax,(%esp)
 85f3b3d:	e8 18 14 00 00       	call   85f4f5a <_ZNKSt6vectorI10ResetValueSaIS0_EE3endEv>
 85f3b42:	83 ec 04             	sub    $0x4,%esp
 85f3b45:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3b48:	89 04 24             	mov    %eax,(%esp)
 85f3b4b:	e8 d0 13 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3b50:	8d 50 04             	lea    0x4(%eax),%edx
 85f3b53:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85f3b56:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3b5a:	89 04 24             	mov    %eax,(%esp)
 85f3b5d:	e8 cc 13 00 00       	call   85f4f2e <_ZNKSt6vectorI10ResetValueSaIS0_EE5beginEv>
 85f3b62:	83 ec 04             	sub    $0x4,%esp
 85f3b65:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f3b68:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85f3b6b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85f3b6f:	8b 55 d0             	mov    -0x30(%ebp),%edx
 85f3b72:	89 54 24 10          	mov    %edx,0x10(%esp)
 85f3b76:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 85f3b79:	89 54 24 14          	mov    %edx,0x14(%esp)
 85f3b7d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85f3b80:	89 54 24 18          	mov    %edx,0x18(%esp)
 85f3b84:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85f3b87:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3b8b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85f3b8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85f3b92:	89 04 24             	mov    %eax,(%esp)
 85f3b95:	e8 ec 13 00 00       	call   85f4f86 <_ZSt8for_eachIN9__gnu_cxx17__normal_iteratorIPK10ResetValueSt6vectorIS2_SaIS2_EEEE11CRandomListIjEET0_T_SC_SB_>
 85f3b9a:	83 ec 04             	sub    $0x4,%esp
 85f3b9d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85f3ba0:	89 04 24             	mov    %eax,(%esp)
 85f3ba3:	e8 f8 0d 00 00       	call   85f49a0 <_ZN11CRandomListIjE9get_valueEv>
 85f3ba8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85f3bab:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3bae:	89 04 24             	mov    %eax,(%esp)
 85f3bb1:	e8 6a 13 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3bb6:	83 c0 04             	add    $0x4,%eax
 85f3bb9:	89 04 24             	mov    %eax,(%esp)
 85f3bbc:	e8 3d 14 00 00       	call   85f4ffe <_ZNKSt6vectorI10ResetValueSaIS0_EE4sizeEv>
 85f3bc1:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 85f3bc4:	0f 96 c0             	setbe  %al
 85f3bc7:	84 c0                	test   %al,%al
 85f3bc9:	74 0a                	je     85f3bd5 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x203>
 85f3bcb:	b8 13 00 00 00       	mov    $0x13,%eax
 85f3bd0:	e9 dd 00 00 00       	jmp    85f3cb2 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x2e0>
 85f3bd5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3bd8:	89 04 24             	mov    %eax,(%esp)
 85f3bdb:	e8 40 13 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3be0:	8d 50 04             	lea    0x4(%eax),%edx
 85f3be3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f3be6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3bea:	89 14 24             	mov    %edx,(%esp)
 85f3bed:	e8 2e 14 00 00       	call   85f5020 <_ZNKSt6vectorI10ResetValueSaIS0_EEixEj>
 85f3bf2:	8b 58 04             	mov    0x4(%eax),%ebx
 85f3bf5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3bf8:	89 04 24             	mov    %eax,(%esp)
 85f3bfb:	e8 20 13 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3c00:	8d 50 04             	lea    0x4(%eax),%edx
 85f3c03:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f3c06:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3c0a:	89 14 24             	mov    %edx,(%esp)
 85f3c0d:	e8 0e 14 00 00       	call   85f5020 <_ZNKSt6vectorI10ResetValueSaIS0_EEixEj>
 85f3c12:	8b 00                	mov    (%eax),%eax
 85f3c14:	89 da                	mov    %ebx,%edx
 85f3c16:	29 c2                	sub    %eax,%edx
 85f3c18:	89 d0                	mov    %edx,%eax
 85f3c1a:	83 e8 01             	sub    $0x1,%eax
 85f3c1d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85f3c20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85f3c23:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85f3c26:	8b 45 08             	mov    0x8(%ebp),%eax
 85f3c29:	8b 40 04             	mov    0x4(%eax),%eax
 85f3c2c:	8d 90 60 75 00 00    	lea    0x7560(%eax),%edx
 85f3c32:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85f3c35:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3c39:	89 14 24             	mov    %edx,(%esp)
 85f3c3c:	e8 7d 7e ad ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 85f3c41:	89 c3                	mov    %eax,%ebx
 85f3c43:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85f3c46:	89 04 24             	mov    %eax,(%esp)
 85f3c49:	e8 d2 12 00 00       	call   85f4f20 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKh11ResetValuesEEptEv>
 85f3c4e:	8d 50 04             	lea    0x4(%eax),%edx
 85f3c51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85f3c54:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3c58:	89 14 24             	mov    %edx,(%esp)
 85f3c5b:	e8 c0 13 00 00       	call   85f5020 <_ZNKSt6vectorI10ResetValueSaIS0_EEixEj>
 85f3c60:	8b 00                	mov    (%eax),%eax
 85f3c62:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 85f3c65:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85f3c68:	83 7d f4 64          	cmpl   $0x64,-0xc(%ebp)
 85f3c6c:	76 07                	jbe    85f3c75 <_ZN13random_option23CRandomOptionItemHandle12reset_optionEm11ENUM_RARITYiP12RandomOption+0x2a3>
 85f3c6e:	c7 45 f4 64 00 00 00 	movl   $0x64,-0xc(%ebp)
 85f3c75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3c78:	0f b6 d0             	movzbl %al,%edx
 85f3c7b:	8b 45 14             	mov    0x14(%ebp),%eax
 85f3c7e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3c82:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3c86:	8b 45 18             	mov    0x18(%ebp),%eax
 85f3c89:	89 04 24             	mov    %eax,(%esp)
 85f3c8c:	e8 e7 03 00 00       	call   85f4078 <_ZN12RandomOption15set_first_valueE25ENUM_RANDOM_OPTION_NUMBERh>
 85f3c91:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85f3c94:	0f b6 d0             	movzbl %al,%edx
 85f3c97:	8b 45 14             	mov    0x14(%ebp),%eax
 85f3c9a:	89 54 24 08          	mov    %edx,0x8(%esp)
 85f3c9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85f3ca2:	8b 45 18             	mov    0x18(%ebp),%eax
 85f3ca5:	89 04 24             	mov    %eax,(%esp)
 85f3ca8:	e8 11 04 00 00       	call   85f40be <_ZN12RandomOption16set_second_valueE25ENUM_RANDOM_OPTION_NUMBERh>
 85f3cad:	b8 00 00 00 00       	mov    $0x0,%eax
 85f3cb2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85f3cb5:	c9                   	leave
 85f3cb6:	c3                   	ret
 85f3cb7:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::reset_option @ 0x85f39d2

/* random_option::CRandomOptionItemHandle::reset_option(unsigned long, ENUM_RARITY, int,
   RandomOption*) */

undefined4 __thiscall
random_option::CRandomOptionItemHandle::reset_option
          (CRandomOptionItemHandle *this,undefined4 param_1,undefined1 param_3,undefined4 param_4,
          RandomOption *param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  _Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>> local_64 [4];
  set<unsigned_long,std::less<unsigned_long>,std::allocator<unsigned_long>> local_60 [4];
  _Rb_tree_const_iterator<unsigned_long> local_5c [4];
  uint local_58;
  undefined1 local_51;
  map<unsigned_char,ResetValues,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,ResetValues>>>
  local_50 [4];
  ulong local_4c;
  CRandomList<unsigned_int> local_48 [16];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  uint local_1c;
  uint local_18;
  ulong local_14;
  uint local_10;
  
  cVar1 = RandomOption::get_option_index(param_5,param_4);
  if (cVar1 == '\0') {
    uVar2 = 0x17;
  }
  else {
    GetRandomOption();
    std::set<unsigned_long,std::less<unsigned_long>,std::allocator<unsigned_long>>::end(local_60);
    local_58 = RandomOption::get_option_index(param_5,param_4);
    local_58 = local_58 & 0xff;
    GetRandomOption();
    std::set<unsigned_long,std::less<unsigned_long>,std::allocator<unsigned_long>>::find
              ((ulong *)local_5c);
    cVar1 = std::_Rb_tree_const_iterator<unsigned_long>::operator!=
                      (local_5c,(_Rb_tree_const_iterator *)local_60);
    if (cVar1 == '\0') {
      local_51 = param_3;
      GetRandomOption();
      std::
      map<unsigned_char,ResetValues,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,ResetValues>>>
      ::find((uchar *)local_64);
      GetRandomOption();
      std::
      map<unsigned_char,ResetValues,std::less<unsigned_char>,std::allocator<std::pair<unsigned_char_const,ResetValues>>>
      ::end(local_50);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator==
                        (local_64,(_Rb_tree_const_iterator *)local_50);
      if (cVar1 == '\0') {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                          (local_64);
        local_4c = *(int *)(iVar3 + 0x10) - 1;
        local_1c = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x6b98),&local_4c);
        CRandomList<unsigned_int>::CRandomList((CRandomList<unsigned_int> *)&local_38,local_1c);
        std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                  (local_64);
        std::vector<ResetValue,std::allocator<ResetValue>>::end();
        std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                  (local_64);
        std::vector<ResetValue,std::allocator<ResetValue>>::begin();
        std::
        for_each<__gnu_cxx::__normal_iterator<ResetValue_const*,std::vector<ResetValue,std::allocator<ResetValue>>>,CRandomList<unsigned_int>>
                  (local_48,local_24,local_28,local_38,local_34,local_30,local_2c);
        local_18 = CRandomList<unsigned_int>::get_value(local_48);
        iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::operator->
                          (local_64);
        uVar4 = std::vector<ResetValue,std::allocator<ResetValue>>::size
                          ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar3 + 4));
        if (local_18 < uVar4) {
          iVar3 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::
                  operator->(local_64);
          iVar3 = std::vector<ResetValue,std::allocator<ResetValue>>::operator[]
                            ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar3 + 4),local_18);
          iVar3 = *(int *)(iVar3 + 4);
          iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::
                  operator->(local_64);
          piVar6 = (int *)std::vector<ResetValue,std::allocator<ResetValue>>::operator[]
                                    ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar5 + 4),
                                     local_18);
          local_20 = (iVar3 - *piVar6) - 1;
          local_14 = local_20;
          iVar3 = CMTRand::randInt((CMTRand *)(*(int *)(this + 4) + 0x7560),&local_20);
          iVar5 = std::_Rb_tree_const_iterator<std::pair<unsigned_char_const,ResetValues>>::
                  operator->(local_64);
          piVar6 = (int *)std::vector<ResetValue,std::allocator<ResetValue>>::operator[]
                                    ((vector<ResetValue,std::allocator<ResetValue>> *)(iVar5 + 4),
                                     local_18);
          local_10 = iVar3 + *piVar6;
          if (100 < local_10) {
            local_10 = 100;
          }
          RandomOption::set_first_value(param_5,param_4,local_10 & 0xff);
          RandomOption::set_second_value(param_5,param_4,local_10 & 0xff);
          uVar2 = 0;
        }
        else {
          uVar2 = 0x13;
        }
      }
      else {
        uVar2 = 0x13;
      }
    }
    else {
      uVar2 = 0x17;
    }
  }
  return uVar2;
}

```

---

## set_random_option_give

```asm
// === 085f0ea2 random_option::CRandomOptionItemHandle::set_random_option_give  [0x085f0ea2-0x85f0eaf] ===
 85f0ea2:	55                   	push   %ebp
 85f0ea3:	89 e5                	mov    %esp,%ebp
 85f0ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0ea8:	8b 55 0c             	mov    0xc(%ebp),%edx
 85f0eab:	89 50 14             	mov    %edx,0x14(%eax)
 85f0eae:	5d                   	pop    %ebp
 85f0eaf:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::set_random_option_give @ 0x85f0ea2

/* random_option::CRandomOptionItemHandle::set_random_option_give(CRandomOptionGive*) */

void __thiscall
random_option::CRandomOptionItemHandle::set_random_option_give
          (CRandomOptionItemHandle *this,CRandomOptionGive *param_1)

{
  *(CRandomOptionGive **)(this + 0x14) = param_1;
  return;
}

```

---

## ~CRandomOptionItemHandle

```asm
// === 085f0e46 random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle  [0x085f0e46-0x85f0e83] ===
 85f0e46:	55                   	push   %ebp
 85f0e47:	89 e5                	mov    %esp,%ebp
 85f0e49:	83 ec 18             	sub    $0x18,%esp
 85f0e4c:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e4f:	c7 00 a0 11 cd 08    	movl   $0x8cd11a0,(%eax)
 85f0e55:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e58:	8b 40 04             	mov    0x4(%eax),%eax
 85f0e5b:	85 c0                	test   %eax,%eax
 85f0e5d:	74 0e                	je     85f0e6d <_ZN13random_option23CRandomOptionItemHandleD1Ev+0x27>
 85f0e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e62:	8b 40 04             	mov    0x4(%eax),%eax
 85f0e65:	89 04 24             	mov    %eax,(%esp)
 85f0e68:	e8 43 3d 13 00       	call   8724bb0 <_ZdaPv>
 85f0e6d:	b8 00 00 00 00       	mov    $0x0,%eax
 85f0e72:	84 c0                	test   %al,%al
 85f0e74:	74 0b                	je     85f0e81 <_ZN13random_option23CRandomOptionItemHandleD1Ev+0x3b>
 85f0e76:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e79:	89 04 24             	mov    %eax,(%esp)
 85f0e7c:	e8 6f 36 13 00       	call   87244f0 <_ZdlPv>
 85f0e81:	c9                   	leave
 85f0e82:	c3                   	ret
 85f0e83:	90                   	nop

```

```c
// random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle @ 0x85f0e46

/* WARNING: Removing unreachable block (ram,0x085f0e76) */
/* random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle() */

void __thiscall
random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle(CRandomOptionItemHandle *this)

{
  *(undefined ***)this = &PTR__CRandomOptionItemHandle_08cd11a0;
  if (*(int *)(this + 4) != 0) {
    operator_delete__(*(void **)(this + 4));
  }
  return;
}

```

---

## ~CRandomOptionItemHandle_085f0e84

```asm
// === 085f0e84 random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle  [0x085f0e84-0x85f0ea1] ===
 85f0e84:	55                   	push   %ebp
 85f0e85:	89 e5                	mov    %esp,%ebp
 85f0e87:	83 ec 18             	sub    $0x18,%esp
 85f0e8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e8d:	89 04 24             	mov    %eax,(%esp)
 85f0e90:	e8 b1 ff ff ff       	call   85f0e46 <_ZN13random_option23CRandomOptionItemHandleD1Ev>
 85f0e95:	8b 45 08             	mov    0x8(%ebp),%eax
 85f0e98:	89 04 24             	mov    %eax,(%esp)
 85f0e9b:	e8 50 36 13 00       	call   87244f0 <_ZdlPv>
 85f0ea0:	c9                   	leave
 85f0ea1:	c3                   	ret

```

```c
// random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle @ 0x85f0e84

/* random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle() */

void __thiscall
random_option::CRandomOptionItemHandle::~CRandomOptionItemHandle(CRandomOptionItemHandle *this)

{
  ~CRandomOptionItemHandle(this);
  operator_delete(this);
  return;
}

```

