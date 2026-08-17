# advancealtar__BuyUpgradeData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## getFieldData

```asm
// === 088a2c62 advancealtar::BuyUpgradeData::getFieldData  [0x088a2c62-0x88a2e4b] ===
 88a2c62:	55                   	push   %ebp
 88a2c63:	89 e5                	mov    %esp,%ebp
 88a2c65:	56                   	push   %esi
 88a2c66:	53                   	push   %ebx
 88a2c67:	83 ec 50             	sub    $0x50,%esp
 88a2c6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 88a2c6d:	89 44 24 14          	mov    %eax,0x14(%esp)
 88a2c71:	c7 44 24 10 24 5c e0 	movl   $0x8e05c24,0x10(%esp)
 88a2c78:	08 
 88a2c79:	c7 44 24 0c 6e 02 00 	movl   $0x26e,0xc(%esp)
 88a2c80:	00 
 88a2c81:	c7 44 24 08 7c 61 e0 	movl   $0x8e0617c,0x8(%esp)
 88a2c88:	08 
 88a2c89:	c7 44 24 04 4c 5c e0 	movl   $0x8e05c4c,0x4(%esp)
 88a2c90:	08 
 88a2c91:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88a2c98:	e8 6d 0f 23 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 88a2c9d:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2ca0:	8d 48 1c             	lea    0x1c(%eax),%ecx
 88a2ca3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88a2ca6:	8d 55 0c             	lea    0xc(%ebp),%edx
 88a2ca9:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2cad:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88a2cb1:	89 04 24             	mov    %eax,(%esp)
 88a2cb4:	e8 05 17 00 00       	call   88a43be <_ZNSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE4findERSC_>
 88a2cb9:	83 ec 04             	sub    $0x4,%esp
 88a2cbc:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2cbf:	8d 50 1c             	lea    0x1c(%eax),%edx
 88a2cc2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2cc5:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2cc9:	89 04 24             	mov    %eax,(%esp)
 88a2ccc:	e8 19 17 00 00       	call   88a43ea <_ZNSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE3endEv>
 88a2cd1:	83 ec 04             	sub    $0x4,%esp
 88a2cd4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2cd7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2cdb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88a2cde:	89 04 24             	mov    %eax,(%esp)
 88a2ce1:	e8 2a 17 00 00       	call   88a4410 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEneERKSE_>
 88a2ce6:	84 c0                	test   %al,%al
 88a2ce8:	74 70                	je     88a2d5a <_ZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TE+0xf8>
 88a2cea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88a2ced:	89 04 24             	mov    %eax,(%esp)
 88a2cf0:	e8 2f 17 00 00       	call   88a4424 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEptEv>
 88a2cf5:	8d 48 04             	lea    0x4(%eax),%ecx
 88a2cf8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88a2cfb:	8d 55 10             	lea    0x10(%ebp),%edx
 88a2cfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2d02:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88a2d06:	89 04 24             	mov    %eax,(%esp)
 88a2d09:	e8 24 17 00 00       	call   88a4432 <_ZNSt3mapIN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEE4findERS7_>
 88a2d0e:	83 ec 04             	sub    $0x4,%esp
 88a2d11:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88a2d14:	89 04 24             	mov    %eax,(%esp)
 88a2d17:	e8 08 17 00 00       	call   88a4424 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEptEv>
 88a2d1c:	8d 50 04             	lea    0x4(%eax),%edx
 88a2d1f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2d22:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2d26:	89 04 24             	mov    %eax,(%esp)
 88a2d29:	e8 30 17 00 00       	call   88a445e <_ZNSt3mapIN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEE3endEv>
 88a2d2e:	83 ec 04             	sub    $0x4,%esp
 88a2d31:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2d34:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2d38:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88a2d3b:	89 04 24             	mov    %eax,(%esp)
 88a2d3e:	e8 41 17 00 00       	call   88a4484 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN12advancealtar9FieldType1TENS1_9FieldDataEEEneERKS7_>
 88a2d43:	84 c0                	test   %al,%al
 88a2d45:	74 13                	je     88a2d5a <_ZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TE+0xf8>
 88a2d47:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88a2d4a:	89 04 24             	mov    %eax,(%esp)
 88a2d4d:	e8 46 17 00 00       	call   88a4498 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN12advancealtar9FieldType1TENS1_9FieldDataEEEptEv>
 88a2d52:	83 c0 04             	add    $0x4,%eax
 88a2d55:	e9 e7 00 00 00       	jmp    88a2e41 <_ZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TE+0x1df>
 88a2d5a:	8b 55 10             	mov    0x10(%ebp),%edx
 88a2d5d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2d60:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2d64:	8b 55 08             	mov    0x8(%ebp),%edx
 88a2d67:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2d6b:	89 04 24             	mov    %eax,(%esp)
 88a2d6e:	e8 93 03 00 00       	call   88a3106 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE>
 88a2d73:	83 ec 04             	sub    $0x4,%esp
 88a2d76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2d79:	89 04 24             	mov    %eax,(%esp)
 88a2d7c:	e8 6f 37 e6 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88a2d81:	8b 55 0c             	mov    0xc(%ebp),%edx
 88a2d84:	89 44 24 18          	mov    %eax,0x18(%esp)
 88a2d88:	89 54 24 14          	mov    %edx,0x14(%esp)
 88a2d8c:	c7 44 24 10 84 5c e0 	movl   $0x8e05c84,0x10(%esp)
 88a2d93:	08 
 88a2d94:	c7 44 24 0c 7b 02 00 	movl   $0x27b,0xc(%esp)
 88a2d9b:	00 
 88a2d9c:	c7 44 24 08 7c 61 e0 	movl   $0x8e0617c,0x8(%esp)
 88a2da3:	08 
 88a2da4:	c7 44 24 04 4c 5c e0 	movl   $0x8e05c4c,0x4(%esp)
 88a2dab:	08 
 88a2dac:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88a2db3:	e8 52 0e 23 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 88a2db8:	eb 1b                	jmp    88a2dd5 <_ZN12advancealtar14BuyUpgradeData12getFieldDataEiNS_9FieldType1TE+0x173>
 88a2dba:	89 d3                	mov    %edx,%ebx
 88a2dbc:	89 c6                	mov    %eax,%esi
 88a2dbe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2dc1:	89 04 24             	mov    %eax,(%esp)
 88a2dc4:	e8 17 4e e6 ff       	call   8707be0 <_ZNSsD1Ev>
 88a2dc9:	89 f0                	mov    %esi,%eax
 88a2dcb:	89 da                	mov    %ebx,%edx
 88a2dcd:	89 04 24             	mov    %eax,(%esp)
 88a2dd0:	e8 7b 09 24 00       	call   8ae3750 <_Unwind_Resume>
 88a2dd5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2dd8:	89 04 24             	mov    %eax,(%esp)
 88a2ddb:	e8 00 4e e6 ff       	call   8707be0 <_ZNSsD1Ev>
 88a2de0:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 88a2de7:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2dea:	8d 48 1c             	lea    0x1c(%eax),%ecx
 88a2ded:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88a2df0:	8d 55 f4             	lea    -0xc(%ebp),%edx
 88a2df3:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2df7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88a2dfb:	89 04 24             	mov    %eax,(%esp)
 88a2dfe:	e8 bb 15 00 00       	call   88a43be <_ZNSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE4findERSC_>
 88a2e03:	83 ec 04             	sub    $0x4,%esp
 88a2e06:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 88a2e09:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88a2e0c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88a2e0f:	89 04 24             	mov    %eax,(%esp)
 88a2e12:	e8 0d 16 00 00       	call   88a4424 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEptEv>
 88a2e17:	8d 48 04             	lea    0x4(%eax),%ecx
 88a2e1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88a2e1d:	8d 55 10             	lea    0x10(%ebp),%edx
 88a2e20:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2e24:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88a2e28:	89 04 24             	mov    %eax,(%esp)
 88a2e2b:	e8 02 16 00 00       	call   88a4432 <_ZNSt3mapIN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEE4findERS7_>
 88a2e30:	83 ec 04             	sub    $0x4,%esp
 88a2e33:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88a2e36:	89 04 24             	mov    %eax,(%esp)
 88a2e39:	e8 5a 16 00 00       	call   88a4498 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN12advancealtar9FieldType1TENS1_9FieldDataEEEptEv>
 88a2e3e:	83 c0 04             	add    $0x4,%eax
 88a2e41:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88a2e44:	83 c4 00             	add    $0x0,%esp
 88a2e47:	5b                   	pop    %ebx
 88a2e48:	5e                   	pop    %esi
 88a2e49:	5d                   	pop    %ebp
 88a2e4a:	c3                   	ret
 88a2e4b:	90                   	nop

```

```c
// advancealtar::BuyUpgradeData::getFieldData @ 0x88a2c62

/* advancealtar::BuyUpgradeData::getFieldData(int, advancealtar::FieldType::T) */

int __thiscall
advancealtar::BuyUpgradeData::getFieldData
          (BuyUpgradeData *this,undefined4 param_1,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_30 [2];
  _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
  local_28 [4];
  _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
  local_24 [4];
  int local_20;
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_1c [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_18 [4];
  string local_14 [4];
  undefined4 local_10;
  
  LogManager::logFormat
            (0,"../localglobal/global_RDARScriptAdvanceAltar_Shop.cpp","getFieldData",0x26e,
             "BuyUpgradeData::GetFieldData level = %d",param_1);
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::find(&local_20);
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::end(local_1c);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
          ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                        *)&local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 != '\0') {
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                  *)&local_20);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::find(local_28);
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                  *)&local_20);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>::
            operator!=(local_28,(_Rb_tree_iterator *)local_18);
    if (cVar1 != '\0') {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
              ::operator->(local_28);
      goto LAB_088a2e41;
    }
  }
  getStatStringIndex(local_14,this,param_3);
                    /* try { // try from 088a2d7c to 088a2db7 has its CatchHandler @ 088a2dba */
  uVar3 = std::string::c_str(local_14);
  LogManager::logFormat
            (0,"../localglobal/global_RDARScriptAdvanceAltar_Shop.cpp","getFieldData",0x27b,
             "AdvanceAltar BuyUpgradeData::GetFieldData Error level = %d, type = %s",param_1,uVar3);
  std::string::~string(local_14);
  local_10 = 1;
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::find(local_30);
  local_20 = local_30[0];
  std::
  _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  ::operator->((_Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                *)&local_20);
  std::
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  ::find(local_24);
  iVar2 = std::
          _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>::
          operator->(local_24);
LAB_088a2e41:
  return iVar2 + 4;
}

```

---

## getFieldDataPoint

```asm
// === 088a2e4c advancealtar::BuyUpgradeData::getFieldDataPoint  [0x088a2e4c-0x88a2f19] ===
 88a2e4c:	55                   	push   %ebp
 88a2e4d:	89 e5                	mov    %esp,%ebp
 88a2e4f:	83 ec 28             	sub    $0x28,%esp
 88a2e52:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2e55:	8d 48 1c             	lea    0x1c(%eax),%ecx
 88a2e58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2e5b:	8d 55 0c             	lea    0xc(%ebp),%edx
 88a2e5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2e62:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88a2e66:	89 04 24             	mov    %eax,(%esp)
 88a2e69:	e8 50 15 00 00       	call   88a43be <_ZNSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE4findERSC_>
 88a2e6e:	83 ec 04             	sub    $0x4,%esp
 88a2e71:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2e74:	8d 50 1c             	lea    0x1c(%eax),%edx
 88a2e77:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2e7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2e7e:	89 04 24             	mov    %eax,(%esp)
 88a2e81:	e8 64 15 00 00       	call   88a43ea <_ZNSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE3endEv>
 88a2e86:	83 ec 04             	sub    $0x4,%esp
 88a2e89:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2e8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2e90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2e93:	89 04 24             	mov    %eax,(%esp)
 88a2e96:	e8 75 15 00 00       	call   88a4410 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEneERKSE_>
 88a2e9b:	84 c0                	test   %al,%al
 88a2e9d:	74 74                	je     88a2f13 <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE+0xc7>
 88a2e9f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2ea2:	89 04 24             	mov    %eax,(%esp)
 88a2ea5:	e8 7a 15 00 00       	call   88a4424 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEptEv>
 88a2eaa:	8d 48 04             	lea    0x4(%eax),%ecx
 88a2ead:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2eb0:	8d 55 10             	lea    0x10(%ebp),%edx
 88a2eb3:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2eb7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88a2ebb:	89 04 24             	mov    %eax,(%esp)
 88a2ebe:	e8 6f 15 00 00       	call   88a4432 <_ZNSt3mapIN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEE4findERS7_>
 88a2ec3:	83 ec 04             	sub    $0x4,%esp
 88a2ec6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2ec9:	89 04 24             	mov    %eax,(%esp)
 88a2ecc:	e8 53 15 00 00       	call   88a4424 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEptEv>
 88a2ed1:	8d 50 04             	lea    0x4(%eax),%edx
 88a2ed4:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88a2ed7:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2edb:	89 04 24             	mov    %eax,(%esp)
 88a2ede:	e8 7b 15 00 00       	call   88a445e <_ZNSt3mapIN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEE3endEv>
 88a2ee3:	83 ec 04             	sub    $0x4,%esp
 88a2ee6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88a2ee9:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2eed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2ef0:	89 04 24             	mov    %eax,(%esp)
 88a2ef3:	e8 8c 15 00 00       	call   88a4484 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN12advancealtar9FieldType1TENS1_9FieldDataEEEneERKS7_>
 88a2ef8:	84 c0                	test   %al,%al
 88a2efa:	74 10                	je     88a2f0c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE+0xc0>
 88a2efc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2eff:	89 04 24             	mov    %eax,(%esp)
 88a2f02:	e8 91 15 00 00       	call   88a4498 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN12advancealtar9FieldType1TENS1_9FieldDataEEEptEv>
 88a2f07:	83 c0 04             	add    $0x4,%eax
 88a2f0a:	eb 0c                	jmp    88a2f18 <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE+0xcc>
 88a2f0c:	b8 00 00 00 00       	mov    $0x0,%eax
 88a2f11:	eb 05                	jmp    88a2f18 <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE+0xcc>
 88a2f13:	b8 00 00 00 00       	mov    $0x0,%eax
 88a2f18:	c9                   	leave
 88a2f19:	c3                   	ret

```

```c
// advancealtar::BuyUpgradeData::getFieldDataPoint @ 0x88a2e4c

/* advancealtar::BuyUpgradeData::getFieldDataPoint(int, advancealtar::FieldType::T) */

int advancealtar::BuyUpgradeData::getFieldDataPoint(void)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
  local_1c [4];
  _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  local_18 [4];
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_14 [4];
  map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
  local_10 [12];
  
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::find((int *)local_18);
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::end(local_14);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->(local_18);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::find(local_1c);
    std::
    _Rb_tree_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator->(local_18);
    std::
    map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>
    ::end(local_10);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>::
            operator!=(local_1c,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = std::
              _Rb_tree_iterator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>
              ::operator->(local_1c);
      iVar2 = iVar2 + 4;
    }
  }
  return iVar2;
}

```

---

## getFieldType

```asm
// === 088a3012 advancealtar::BuyUpgradeData::getFieldType  [0x088a3012-0x88a3055] ===
 88a3012:	55                   	push   %ebp
 88a3013:	89 e5                	mov    %esp,%ebp
 88a3015:	83 ec 28             	sub    $0x28,%esp
 88a3018:	c7 45 f4 ff ff ff ff 	movl   $0xffffffff,-0xc(%ebp)
 88a301f:	8b 45 08             	mov    0x8(%ebp),%eax
 88a3022:	83 c0 10             	add    $0x10,%eax
 88a3025:	89 04 24             	mov    %eax,(%esp)
 88a3028:	e8 4f 0d 00 00       	call   88a3d7c <_ZNKSt6vectorIN12advancealtar9FieldType1TESaIS2_EE4sizeEv>
 88a302d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88a3030:	0f 9f c0             	setg   %al
 88a3033:	84 c0                	test   %al,%al
 88a3035:	74 1a                	je     88a3051 <_ZNK12advancealtar14BuyUpgradeData12getFieldTypeEi+0x3f>
 88a3037:	8b 45 0c             	mov    0xc(%ebp),%eax
 88a303a:	8b 55 08             	mov    0x8(%ebp),%edx
 88a303d:	83 c2 10             	add    $0x10,%edx
 88a3040:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a3044:	89 14 24             	mov    %edx,(%esp)
 88a3047:	e8 1c 15 00 00       	call   88a4568 <_ZNKSt6vectorIN12advancealtar9FieldType1TESaIS2_EEixEj>
 88a304c:	8b 00                	mov    (%eax),%eax
 88a304e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88a3051:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88a3054:	c9                   	leave
 88a3055:	c3                   	ret

```

```c
// advancealtar::BuyUpgradeData::getFieldType @ 0x88a3012

/* advancealtar::BuyUpgradeData::getFieldType(int) const */

undefined4 __thiscall advancealtar::BuyUpgradeData::getFieldType(BuyUpgradeData *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10;
  
  local_10 = 0xffffffff;
  iVar1 = std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::size
                    ((vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                      *)(this + 0x10));
  if (param_1 < iVar1) {
    puVar2 = (undefined4 *)
             std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::
             operator[]((vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>
                         *)(this + 0x10),param_1);
    local_10 = *puVar2;
  }
  return local_10;
}

```

---

## getMaxLevel

```asm
// === 088a3322 advancealtar::BuyUpgradeData::getMaxLevel  [0x088a3322-0x88a33bf] ===
 88a3322:	55                   	push   %ebp
 88a3323:	89 e5                	mov    %esp,%ebp
 88a3325:	83 ec 28             	sub    $0x28,%esp
 88a3328:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88a332f:	8b 45 08             	mov    0x8(%ebp),%eax
 88a3332:	8d 50 1c             	lea    0x1c(%eax),%edx
 88a3335:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a3338:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a333c:	89 04 24             	mov    %eax,(%esp)
 88a333f:	e8 36 12 00 00       	call   88a457a <_ZNKSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE5beginEv>
 88a3344:	83 ec 04             	sub    $0x4,%esp
 88a3347:	eb 44                	jmp    88a338d <_ZNK12advancealtar14BuyUpgradeData11getMaxLevelEv+0x6b>
 88a3349:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a334c:	89 04 24             	mov    %eax,(%esp)
 88a334f:	e8 c4 12 00 00       	call   88a4618 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEdeEv>
 88a3354:	8b 00                	mov    (%eax),%eax
 88a3356:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 88a3359:	0f 9f c0             	setg   %al
 88a335c:	84 c0                	test   %al,%al
 88a335e:	74 10                	je     88a3370 <_ZNK12advancealtar14BuyUpgradeData11getMaxLevelEv+0x4e>
 88a3360:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a3363:	89 04 24             	mov    %eax,(%esp)
 88a3366:	e8 ad 12 00 00       	call   88a4618 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEdeEv>
 88a336b:	8b 00                	mov    (%eax),%eax
 88a336d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88a3370:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a3373:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88a337a:	00 
 88a337b:	8d 55 e8             	lea    -0x18(%ebp),%edx
 88a337e:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a3382:	89 04 24             	mov    %eax,(%esp)
 88a3385:	e8 50 12 00 00       	call   88a45da <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEppEi>
 88a338a:	83 ec 04             	sub    $0x4,%esp
 88a338d:	8b 45 08             	mov    0x8(%ebp),%eax
 88a3390:	8d 50 1c             	lea    0x1c(%eax),%edx
 88a3393:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a3396:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a339a:	89 04 24             	mov    %eax,(%esp)
 88a339d:	e8 fe 11 00 00       	call   88a45a0 <_ZNKSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE3endEv>
 88a33a2:	83 ec 04             	sub    $0x4,%esp
 88a33a5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a33a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a33ac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a33af:	89 04 24             	mov    %eax,(%esp)
 88a33b2:	e8 0f 12 00 00       	call   88a45c6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEneERKSE_>
 88a33b7:	84 c0                	test   %al,%al
 88a33b9:	75 8e                	jne    88a3349 <_ZNK12advancealtar14BuyUpgradeData11getMaxLevelEv+0x27>
 88a33bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88a33be:	c9                   	leave
 88a33bf:	c3                   	ret

```

```c
// advancealtar::BuyUpgradeData::getMaxLevel @ 0x88a3322

/* advancealtar::BuyUpgradeData::getMaxLevel() const */

int advancealtar::BuyUpgradeData::getMaxLevel(void)

{
  char cVar1;
  int *piVar2;
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_1c [4];
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                          *)local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::
                    _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                    ::operator*((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                                 *)local_1c);
    if (local_10 < *piVar2) {
      piVar2 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                      ::operator*((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                                   *)local_1c);
      local_10 = *piVar2;
    }
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}

```

---

## getMinLevel

```asm
// === 088a33c0 advancealtar::BuyUpgradeData::getMinLevel  [0x088a33c0-0x88a345d] ===
 88a33c0:	55                   	push   %ebp
 88a33c1:	89 e5                	mov    %esp,%ebp
 88a33c3:	83 ec 28             	sub    $0x28,%esp
 88a33c6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88a33cd:	8b 45 08             	mov    0x8(%ebp),%eax
 88a33d0:	8d 50 1c             	lea    0x1c(%eax),%edx
 88a33d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a33d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a33da:	89 04 24             	mov    %eax,(%esp)
 88a33dd:	e8 98 11 00 00       	call   88a457a <_ZNKSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE5beginEv>
 88a33e2:	83 ec 04             	sub    $0x4,%esp
 88a33e5:	eb 44                	jmp    88a342b <_ZNK12advancealtar14BuyUpgradeData11getMinLevelEv+0x6b>
 88a33e7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a33ea:	89 04 24             	mov    %eax,(%esp)
 88a33ed:	e8 26 12 00 00       	call   88a4618 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEdeEv>
 88a33f2:	8b 00                	mov    (%eax),%eax
 88a33f4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 88a33f7:	0f 9c c0             	setl   %al
 88a33fa:	84 c0                	test   %al,%al
 88a33fc:	74 10                	je     88a340e <_ZNK12advancealtar14BuyUpgradeData11getMinLevelEv+0x4e>
 88a33fe:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a3401:	89 04 24             	mov    %eax,(%esp)
 88a3404:	e8 0f 12 00 00       	call   88a4618 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEdeEv>
 88a3409:	8b 00                	mov    (%eax),%eax
 88a340b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88a340e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a3411:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88a3418:	00 
 88a3419:	8d 55 e8             	lea    -0x18(%ebp),%edx
 88a341c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a3420:	89 04 24             	mov    %eax,(%esp)
 88a3423:	e8 b2 11 00 00       	call   88a45da <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEppEi>
 88a3428:	83 ec 04             	sub    $0x4,%esp
 88a342b:	8b 45 08             	mov    0x8(%ebp),%eax
 88a342e:	8d 50 1c             	lea    0x1c(%eax),%edx
 88a3431:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a3434:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a3438:	89 04 24             	mov    %eax,(%esp)
 88a343b:	e8 60 11 00 00       	call   88a45a0 <_ZNKSt3mapIiS_IN12advancealtar9FieldType1TENS0_9FieldDataESt4lessIS2_ESaISt4pairIKS2_S3_EEES4_IiESaIS6_IKiSA_EEE3endEv>
 88a3440:	83 ec 04             	sub    $0x4,%esp
 88a3443:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a3446:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a344a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a344d:	89 04 24             	mov    %eax,(%esp)
 88a3450:	e8 71 11 00 00       	call   88a45c6 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt3mapIN12advancealtar9FieldType1TENS3_9FieldDataESt4lessIS5_ESaIS0_IKS5_S6_EEEEEneERKSE_>
 88a3455:	84 c0                	test   %al,%al
 88a3457:	75 8e                	jne    88a33e7 <_ZNK12advancealtar14BuyUpgradeData11getMinLevelEv+0x27>
 88a3459:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88a345c:	c9                   	leave
 88a345d:	c3                   	ret

```

```c
// advancealtar::BuyUpgradeData::getMinLevel @ 0x88a33c0

/* advancealtar::BuyUpgradeData::getMinLevel() const */

int advancealtar::BuyUpgradeData::getMinLevel(void)

{
  char cVar1;
  int *piVar2;
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_1c [4];
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  local_18 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::
  map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
  ::begin(local_1c);
  while( true ) {
    std::
    map<int,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>,std::less<int>,std::allocator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
            ::operator!=((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                          *)local_1c,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') break;
    piVar2 = (int *)std::
                    _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                    ::operator*((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                                 *)local_1c);
    if (*piVar2 < local_10) {
      piVar2 = (int *)std::
                      _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                      ::operator*((_Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
                                   *)local_1c);
      local_10 = *piVar2;
    }
    std::
    _Rb_tree_const_iterator<std::pair<int_const,std::map<advancealtar::FieldType::T,advancealtar::FieldData,std::less<advancealtar::FieldType::T>,std::allocator<std::pair<advancealtar::FieldType::T_const,advancealtar::FieldData>>>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}

```

---

## getMinLevelFieldDataPoint

```asm
// === 088a2f1a advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint  [0x088a2f1a-0x88a2f79] ===
 88a2f1a:	55                   	push   %ebp
 88a2f1b:	89 e5                	mov    %esp,%ebp
 88a2f1d:	83 ec 28             	sub    $0x28,%esp
 88a2f20:	8b 45 10             	mov    0x10(%ebp),%eax
 88a2f23:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 88a2f29:	8b 45 10             	mov    0x10(%ebp),%eax
 88a2f2c:	8b 00                	mov    (%eax),%eax
 88a2f2e:	8b 55 0c             	mov    0xc(%ebp),%edx
 88a2f31:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2f35:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2f39:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2f3c:	89 04 24             	mov    %eax,(%esp)
 88a2f3f:	e8 08 ff ff ff       	call   88a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>
 88a2f44:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88a2f47:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88a2f4b:	75 27                	jne    88a2f74 <_ZN12advancealtar14BuyUpgradeData25getMinLevelFieldDataPointENS_9FieldType1TERi+0x5a>
 88a2f4d:	8b 45 10             	mov    0x10(%ebp),%eax
 88a2f50:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 88a2f56:	8b 45 10             	mov    0x10(%ebp),%eax
 88a2f59:	8b 00                	mov    (%eax),%eax
 88a2f5b:	8b 55 0c             	mov    0xc(%ebp),%edx
 88a2f5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 88a2f62:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2f66:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2f69:	89 04 24             	mov    %eax,(%esp)
 88a2f6c:	e8 db fe ff ff       	call   88a2e4c <_ZN12advancealtar14BuyUpgradeData17getFieldDataPointEiNS_9FieldType1TE>
 88a2f71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88a2f74:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88a2f77:	c9                   	leave
 88a2f78:	c3                   	ret
 88a2f79:	90                   	nop

```

```c
// advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint @ 0x88a2f1a

/* advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint(advancealtar::FieldType::T, int&) */

int __thiscall
advancealtar::BuyUpgradeData::getMinLevelFieldDataPoint
          (BuyUpgradeData *this,undefined4 param_2,undefined4 *param_3)

{
  undefined4 local_10;
  
  *param_3 = 0;
  local_10 = getFieldDataPoint(this,*param_3,param_2);
  if (local_10 == 0) {
    *param_3 = 1;
    local_10 = getFieldDataPoint(this,*param_3,param_2);
  }
  return local_10;
}

```

---

## getStatFirstPos

```asm
// === 088a2f7a advancealtar::BuyUpgradeData::getStatFirstPos  [0x088a2f7a-0x88a3011] ===
 88a2f7a:	55                   	push   %ebp
 88a2f7b:	89 e5                	mov    %esp,%ebp
 88a2f7d:	83 ec 28             	sub    $0x28,%esp
 88a2f80:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88a2f87:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2f8a:	8d 50 10             	lea    0x10(%eax),%edx
 88a2f8d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2f90:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2f94:	89 04 24             	mov    %eax,(%esp)
 88a2f97:	e8 0a 15 00 00       	call   88a44a6 <_ZNKSt6vectorIN12advancealtar9FieldType1TESaIS2_EE5beginEv>
 88a2f9c:	83 ec 04             	sub    $0x4,%esp
 88a2f9f:	eb 3b                	jmp    88a2fdc <_ZNK12advancealtar14BuyUpgradeData15getStatFirstPosEv+0x62>
 88a2fa1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2fa4:	89 04 24             	mov    %eax,(%esp)
 88a2fa7:	e8 7e 15 00 00       	call   88a452a <_ZNK9__gnu_cxx17__normal_iteratorIPKN12advancealtar9FieldType1TESt6vectorIS3_SaIS3_EEEdeEv>
 88a2fac:	8b 00                	mov    (%eax),%eax
 88a2fae:	83 e8 0a             	sub    $0xa,%eax
 88a2fb1:	83 f8 0e             	cmp    $0xe,%eax
 88a2fb4:	77 05                	ja     88a2fbb <_ZNK12advancealtar14BuyUpgradeData15getStatFirstPosEv+0x41>
 88a2fb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88a2fb9:	eb 54                	jmp    88a300f <_ZNK12advancealtar14BuyUpgradeData15getStatFirstPosEv+0x95>
 88a2fbb:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 88a2fbf:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88a2fc2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 88a2fc9:	00 
 88a2fca:	8d 55 e8             	lea    -0x18(%ebp),%edx
 88a2fcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2fd1:	89 04 24             	mov    %eax,(%esp)
 88a2fd4:	e8 5b 15 00 00       	call   88a4534 <_ZN9__gnu_cxx17__normal_iteratorIPKN12advancealtar9FieldType1TESt6vectorIS3_SaIS3_EEEppEi>
 88a2fd9:	83 ec 04             	sub    $0x4,%esp
 88a2fdc:	8b 45 08             	mov    0x8(%ebp),%eax
 88a2fdf:	8d 50 10             	lea    0x10(%eax),%edx
 88a2fe2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2fe5:	89 54 24 04          	mov    %edx,0x4(%esp)
 88a2fe9:	89 04 24             	mov    %eax,(%esp)
 88a2fec:	e8 e1 14 00 00       	call   88a44d2 <_ZNKSt6vectorIN12advancealtar9FieldType1TESaIS2_EE3endEv>
 88a2ff1:	83 ec 04             	sub    $0x4,%esp
 88a2ff4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88a2ff7:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a2ffb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88a2ffe:	89 04 24             	mov    %eax,(%esp)
 88a3001:	e8 f8 14 00 00       	call   88a44fe <_ZN9__gnu_cxxneIPKN12advancealtar9FieldType1TESt6vectorIS3_SaIS3_EEEEbRKNS_17__normal_iteratorIT_T0_EESE_>
 88a3006:	84 c0                	test   %al,%al
 88a3008:	75 97                	jne    88a2fa1 <_ZNK12advancealtar14BuyUpgradeData15getStatFirstPosEv+0x27>
 88a300a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88a300f:	c9                   	leave
 88a3010:	c3                   	ret
 88a3011:	90                   	nop

```

```c
// advancealtar::BuyUpgradeData::getStatFirstPos @ 0x88a2f7a

/* advancealtar::BuyUpgradeData::getStatFirstPos() const */

int advancealtar::BuyUpgradeData::getStatFirstPos(void)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
  local_14 [4];
  int local_10;
  
  local_10 = 0;
  std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::begin();
  while( true ) {
    std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if (!bVar1) {
      return -1;
    }
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
                    ::operator*(local_1c);
    if (*piVar2 - 10U < 0xf) break;
    local_10 = local_10 + 1;
    __gnu_cxx::
    __normal_iterator<advancealtar::FieldType::T_const*,std::vector<advancealtar::FieldType::T,std::allocator<advancealtar::FieldType::T>>>
    ::operator++(local_14,(int)local_1c);
  }
  return local_10;
}

```

---

## getStatIconIndex

```asm
// === 088a3056 advancealtar::BuyUpgradeData::getStatIconIndex  [0x088a3056-0x88a3105] ===
 88a3056:	55                   	push   %ebp
 88a3057:	89 e5                	mov    %esp,%ebp
 88a3059:	83 ec 10             	sub    $0x10,%esp
 88a305c:	c7 45 fc ff ff ff ff 	movl   $0xffffffff,-0x4(%ebp)
 88a3063:	8b 45 0c             	mov    0xc(%ebp),%eax
 88a3066:	83 e8 0a             	sub    $0xa,%eax
 88a3069:	83 f8 0e             	cmp    $0xe,%eax
 88a306c:	0f 87 8e 00 00 00    	ja     88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a3072:	8b 04 85 cc 5c e0 08 	mov    0x8e05ccc(,%eax,4),%eax
 88a3079:	ff e0                	jmp    *%eax
 88a307b:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 88a3082:	eb 7c                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a3084:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 88a308b:	eb 73                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a308d:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%ebp)
 88a3094:	eb 6a                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a3096:	c7 45 fc 03 00 00 00 	movl   $0x3,-0x4(%ebp)
 88a309d:	eb 61                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a309f:	c7 45 fc 04 00 00 00 	movl   $0x4,-0x4(%ebp)
 88a30a6:	eb 58                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30a8:	c7 45 fc 05 00 00 00 	movl   $0x5,-0x4(%ebp)
 88a30af:	eb 4f                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30b1:	c7 45 fc 06 00 00 00 	movl   $0x6,-0x4(%ebp)
 88a30b8:	eb 46                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30ba:	c7 45 fc 07 00 00 00 	movl   $0x7,-0x4(%ebp)
 88a30c1:	eb 3d                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30c3:	c7 45 fc 08 00 00 00 	movl   $0x8,-0x4(%ebp)
 88a30ca:	eb 34                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30cc:	c7 45 fc 09 00 00 00 	movl   $0x9,-0x4(%ebp)
 88a30d3:	eb 2b                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30d5:	c7 45 fc 0a 00 00 00 	movl   $0xa,-0x4(%ebp)
 88a30dc:	eb 22                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30de:	c7 45 fc 0b 00 00 00 	movl   $0xb,-0x4(%ebp)
 88a30e5:	eb 19                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30e7:	c7 45 fc 0c 00 00 00 	movl   $0xc,-0x4(%ebp)
 88a30ee:	eb 10                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30f0:	c7 45 fc 0d 00 00 00 	movl   $0xd,-0x4(%ebp)
 88a30f7:	eb 07                	jmp    88a3100 <_ZNK12advancealtar14BuyUpgradeData16getStatIconIndexENS_9FieldType1TE+0xaa>
 88a30f9:	c7 45 fc 0e 00 00 00 	movl   $0xe,-0x4(%ebp)
 88a3100:	8b 45 fc             	mov    -0x4(%ebp),%eax
 88a3103:	c9                   	leave
 88a3104:	c3                   	ret
 88a3105:	90                   	nop

```

```c
// advancealtar::BuyUpgradeData::getStatIconIndex @ 0x88a3056

/* advancealtar::BuyUpgradeData::getStatIconIndex(advancealtar::FieldType::T) const */

undefined4 __thiscall
advancealtar::BuyUpgradeData::getStatIconIndex(undefined4 this,undefined4 param_2)

{
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  switch(param_2) {
  case 10:
    local_8 = 0;
    break;
  case 0xb:
    local_8 = 1;
    break;
  case 0xc:
    local_8 = 2;
    break;
  case 0xd:
    local_8 = 3;
    break;
  case 0xe:
    local_8 = 4;
    break;
  case 0xf:
    local_8 = 5;
    break;
  case 0x10:
    local_8 = 6;
    break;
  case 0x11:
    local_8 = 7;
    break;
  case 0x12:
    local_8 = 8;
    break;
  case 0x13:
    local_8 = 9;
    break;
  case 0x14:
    local_8 = 10;
    break;
  case 0x15:
    local_8 = 0xb;
    break;
  case 0x16:
    local_8 = 0xc;
    break;
  case 0x17:
    local_8 = 0xd;
    break;
  case 0x18:
    local_8 = 0xe;
  }
  return local_8;
}

```

---

## getStatStringIndex

```asm
// === 088a3106 advancealtar::BuyUpgradeData::getStatStringIndex  [0x088a3106-0x88a3321] ===
 88a3106:	55                   	push   %ebp
 88a3107:	89 e5                	mov    %esp,%ebp
 88a3109:	57                   	push   %edi
 88a310a:	56                   	push   %esi
 88a310b:	53                   	push   %ebx
 88a310c:	83 ec 1c             	sub    $0x1c,%esp
 88a310f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88a3112:	89 d8                	mov    %ebx,%eax
 88a3114:	89 04 24             	mov    %eax,(%esp)
 88a3117:	e8 b4 34 e6 ff       	call   87065d0 <_ZNSsC1Ev>
 88a311c:	8b 45 10             	mov    0x10(%ebp),%eax
 88a311f:	83 e8 0a             	sub    $0xa,%eax
 88a3122:	83 f8 0e             	cmp    $0xe,%eax
 88a3125:	0f 87 e7 01 00 00    	ja     88a3312 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x20c>
 88a312b:	8b 04 85 08 5d e0 08 	mov    0x8e05d08(,%eax,4),%eax
 88a3132:	ff e0                	jmp    *%eax
 88a3134:	c7 04 24 70 15 01 00 	movl   $0x11570,(%esp)
 88a313b:	e8 b8 04 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a3140:	89 da                	mov    %ebx,%edx
 88a3142:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a3146:	89 14 24             	mov    %edx,(%esp)
 88a3149:	e8 d2 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a314e:	e9 a3 01 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a3153:	c7 04 24 71 15 01 00 	movl   $0x11571,(%esp)
 88a315a:	e8 99 04 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a315f:	89 da                	mov    %ebx,%edx
 88a3161:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a3165:	89 14 24             	mov    %edx,(%esp)
 88a3168:	e8 b3 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a316d:	e9 84 01 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a3172:	c7 04 24 73 15 01 00 	movl   $0x11573,(%esp)
 88a3179:	e8 7a 04 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a317e:	89 da                	mov    %ebx,%edx
 88a3180:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a3184:	89 14 24             	mov    %edx,(%esp)
 88a3187:	e8 94 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a318c:	e9 65 01 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a3191:	c7 04 24 74 15 01 00 	movl   $0x11574,(%esp)
 88a3198:	e8 5b 04 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a319d:	89 da                	mov    %ebx,%edx
 88a319f:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a31a3:	89 14 24             	mov    %edx,(%esp)
 88a31a6:	e8 75 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a31ab:	e9 46 01 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a31b0:	c7 04 24 75 15 01 00 	movl   $0x11575,(%esp)
 88a31b7:	e8 3c 04 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a31bc:	89 da                	mov    %ebx,%edx
 88a31be:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a31c2:	89 14 24             	mov    %edx,(%esp)
 88a31c5:	e8 56 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a31ca:	e9 27 01 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a31cf:	c7 04 24 76 15 01 00 	movl   $0x11576,(%esp)
 88a31d6:	e8 1d 04 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a31db:	89 da                	mov    %ebx,%edx
 88a31dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a31e1:	89 14 24             	mov    %edx,(%esp)
 88a31e4:	e8 37 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a31e9:	e9 08 01 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a31ee:	c7 04 24 8f 15 01 00 	movl   $0x1158f,(%esp)
 88a31f5:	e8 fe 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a31fa:	89 da                	mov    %ebx,%edx
 88a31fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a3200:	89 14 24             	mov    %edx,(%esp)
 88a3203:	e8 18 55 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a3208:	e9 e9 00 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a320d:	c7 04 24 90 15 01 00 	movl   $0x11590,(%esp)
 88a3214:	e8 df 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a3219:	89 da                	mov    %ebx,%edx
 88a321b:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a321f:	89 14 24             	mov    %edx,(%esp)
 88a3222:	e8 f9 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a3227:	e9 ca 00 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a322c:	c7 04 24 91 15 01 00 	movl   $0x11591,(%esp)
 88a3233:	e8 c0 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a3238:	89 da                	mov    %ebx,%edx
 88a323a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a323e:	89 14 24             	mov    %edx,(%esp)
 88a3241:	e8 da 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a3246:	e9 ab 00 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a324b:	c7 04 24 92 15 01 00 	movl   $0x11592,(%esp)
 88a3252:	e8 a1 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a3257:	89 da                	mov    %ebx,%edx
 88a3259:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a325d:	89 14 24             	mov    %edx,(%esp)
 88a3260:	e8 bb 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a3265:	e9 8c 00 00 00       	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a326a:	c7 04 24 93 15 01 00 	movl   $0x11593,(%esp)
 88a3271:	e8 82 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a3276:	89 da                	mov    %ebx,%edx
 88a3278:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a327c:	89 14 24             	mov    %edx,(%esp)
 88a327f:	e8 9c 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a3284:	eb 70                	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a3286:	c7 04 24 96 15 01 00 	movl   $0x11596,(%esp)
 88a328d:	e8 66 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a3292:	89 da                	mov    %ebx,%edx
 88a3294:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a3298:	89 14 24             	mov    %edx,(%esp)
 88a329b:	e8 80 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a32a0:	eb 54                	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a32a2:	c7 04 24 72 15 01 00 	movl   $0x11572,(%esp)
 88a32a9:	e8 4a 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a32ae:	89 da                	mov    %ebx,%edx
 88a32b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a32b4:	89 14 24             	mov    %edx,(%esp)
 88a32b7:	e8 64 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a32bc:	eb 38                	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a32be:	c7 04 24 95 15 01 00 	movl   $0x11595,(%esp)
 88a32c5:	e8 2e 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a32ca:	89 da                	mov    %ebx,%edx
 88a32cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a32d0:	89 14 24             	mov    %edx,(%esp)
 88a32d3:	e8 48 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a32d8:	eb 1c                	jmp    88a32f6 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x1f0>
 88a32da:	c7 04 24 96 15 01 00 	movl   $0x11596,(%esp)
 88a32e1:	e8 12 03 22 00       	call   8ac35f8 <_ZN14CStringManager6getStrEi>
 88a32e6:	89 da                	mov    %ebx,%edx
 88a32e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88a32ec:	89 14 24             	mov    %edx,(%esp)
 88a32ef:	e8 2c 54 e6 ff       	call   8708720 <_ZNSsaSEPKc>
 88a32f4:	eb 1d                	jmp    88a3313 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x20d>
 88a32f6:	eb 1b                	jmp    88a3313 <_ZNK12advancealtar14BuyUpgradeData18getStatStringIndexENS_9FieldType1TE+0x20d>
 88a32f8:	89 d6                	mov    %edx,%esi
 88a32fa:	89 c7                	mov    %eax,%edi
 88a32fc:	89 d8                	mov    %ebx,%eax
 88a32fe:	89 04 24             	mov    %eax,(%esp)
 88a3301:	e8 da 48 e6 ff       	call   8707be0 <_ZNSsD1Ev>
 88a3306:	89 f8                	mov    %edi,%eax
 88a3308:	89 f2                	mov    %esi,%edx
 88a330a:	89 04 24             	mov    %eax,(%esp)
 88a330d:	e8 3e 04 24 00       	call   8ae3750 <_Unwind_Resume>
 88a3312:	90                   	nop
 88a3313:	89 d8                	mov    %ebx,%eax
 88a3315:	89 d8                	mov    %ebx,%eax
 88a3317:	83 c4 1c             	add    $0x1c,%esp
 88a331a:	5b                   	pop    %ebx
 88a331b:	5e                   	pop    %esi
 88a331c:	5f                   	pop    %edi
 88a331d:	5d                   	pop    %ebp
 88a331e:	c2 04 00             	ret    $0x4
 88a3321:	90                   	nop

```

```c
// advancealtar::BuyUpgradeData::getStatStringIndex @ 0x88a3106

/* advancealtar::BuyUpgradeData::getStatStringIndex(advancealtar::FieldType::T) const */

string * advancealtar::BuyUpgradeData::getStatStringIndex
                   (string *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  
  std::string::string(param_1);
  switch(param_3) {
  case 10:
                    /* try { // try from 088a313b to 088a32f3 has its CatchHandler @ 088a32f8 */
    pcVar1 = (char *)CStringManager::getStr(0x11570);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xb:
    pcVar1 = (char *)CStringManager::getStr(0x11571);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xc:
    pcVar1 = (char *)CStringManager::getStr(0x11573);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xd:
    pcVar1 = (char *)CStringManager::getStr(0x11574);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xe:
    pcVar1 = (char *)CStringManager::getStr(0x11575);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0xf:
    pcVar1 = (char *)CStringManager::getStr(0x11576);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x10:
    pcVar1 = (char *)CStringManager::getStr(0x1158f);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x11:
    pcVar1 = (char *)CStringManager::getStr(0x11590);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x12:
    pcVar1 = (char *)CStringManager::getStr(0x11591);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x13:
    pcVar1 = (char *)CStringManager::getStr(0x11592);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x14:
    pcVar1 = (char *)CStringManager::getStr(0x11593);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x15:
    pcVar1 = (char *)CStringManager::getStr(0x11596);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x16:
    pcVar1 = (char *)CStringManager::getStr(0x11572);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x17:
    pcVar1 = (char *)CStringManager::getStr(0x11595);
    std::string::operator=(param_1,pcVar1);
    break;
  case 0x18:
    pcVar1 = (char *)CStringManager::getStr(0x11596);
    std::string::operator=(param_1,pcVar1);
  }
  return param_1;
}

```

---

## isValidLevel

```asm
// === 088a345e advancealtar::BuyUpgradeData::isValidLevel  [0x088a345e-0x88a34a1] ===
 88a345e:	55                   	push   %ebp
 88a345f:	89 e5                	mov    %esp,%ebp
 88a3461:	83 ec 28             	sub    $0x28,%esp
 88a3464:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 88a3468:	8b 45 08             	mov    0x8(%ebp),%eax
 88a346b:	89 04 24             	mov    %eax,(%esp)
 88a346e:	e8 4d ff ff ff       	call   88a33c0 <_ZNK12advancealtar14BuyUpgradeData11getMinLevelEv>
 88a3473:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88a3476:	7f 10                	jg     88a3488 <_ZN12advancealtar14BuyUpgradeData12isValidLevelEi+0x2a>
 88a3478:	8b 45 08             	mov    0x8(%ebp),%eax
 88a347b:	89 04 24             	mov    %eax,(%esp)
 88a347e:	e8 9f fe ff ff       	call   88a3322 <_ZNK12advancealtar14BuyUpgradeData11getMaxLevelEv>
 88a3483:	3b 45 0c             	cmp    0xc(%ebp),%eax
 88a3486:	7d 07                	jge    88a348f <_ZN12advancealtar14BuyUpgradeData12isValidLevelEi+0x31>
 88a3488:	b8 01 00 00 00       	mov    $0x1,%eax
 88a348d:	eb 05                	jmp    88a3494 <_ZN12advancealtar14BuyUpgradeData12isValidLevelEi+0x36>
 88a348f:	b8 00 00 00 00       	mov    $0x0,%eax
 88a3494:	84 c0                	test   %al,%al
 88a3496:	74 04                	je     88a349c <_ZN12advancealtar14BuyUpgradeData12isValidLevelEi+0x3e>
 88a3498:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 88a349c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 88a34a0:	c9                   	leave
 88a34a1:	c3                   	ret

```

```c
// advancealtar::BuyUpgradeData::isValidLevel @ 0x88a345e

/* advancealtar::BuyUpgradeData::isValidLevel(int) */

bool __thiscall advancealtar::BuyUpgradeData::isValidLevel(BuyUpgradeData *this,int param_1)

{
  int iVar1;
  bool local_d;
  
  iVar1 = getMinLevel();
  if ((param_1 < iVar1) || (iVar1 = getMaxLevel(), iVar1 < param_1)) {
    local_d = true;
  }
  else {
    local_d = false;
  }
  local_d = !local_d;
  return local_d;
}

```

