# WarField

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CheckPickupItem

```asm
// === 086ba0a0 WarField::CheckPickupItem  [0x086ba0a0-0x86ba18f] ===
 86ba0a0:	55                   	push   %ebp
 86ba0a1:	89 e5                	mov    %esp,%ebp
 86ba0a3:	83 ec 38             	sub    $0x38,%esp
 86ba0a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba0a9:	89 04 24             	mov    %eax,(%esp)
 86ba0ac:	e8 73 84 a9 ff       	call   8152524 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEC1Ev>
 86ba0b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba0b4:	8d 48 2c             	lea    0x2c(%eax),%ecx
 86ba0b7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba0ba:	8d 55 0c             	lea    0xc(%ebp),%edx
 86ba0bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ba0c1:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ba0c5:	89 04 24             	mov    %eax,(%esp)
 86ba0c8:	e8 65 84 a9 ff       	call   8152532 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 86ba0cd:	83 ec 04             	sub    $0x4,%esp
 86ba0d0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86ba0d3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86ba0d6:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba0d9:	8d 50 2c             	lea    0x2c(%eax),%edx
 86ba0dc:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86ba0df:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba0e3:	89 04 24             	mov    %eax,(%esp)
 86ba0e6:	e8 73 84 a9 ff       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86ba0eb:	83 ec 04             	sub    $0x4,%esp
 86ba0ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86ba0f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba0f5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba0f8:	89 04 24             	mov    %eax,(%esp)
 86ba0fb:	e8 4c a8 a9 ff       	call   815494c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEeqERKS4_>
 86ba100:	84 c0                	test   %al,%al
 86ba102:	74 0a                	je     86ba10e <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0x6e>
 86ba104:	b8 15 00 00 00       	mov    $0x15,%eax
 86ba109:	e9 80 00 00 00       	jmp    86ba18e <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xee>
 86ba10e:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86ba115:	e8 84 1b a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86ba11a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ba11d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba120:	89 04 24             	mov    %eax,(%esp)
 86ba123:	e8 8c 88 a9 ff       	call   81529b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEptEv>
 86ba128:	8b 40 10             	mov    0x10(%eax),%eax
 86ba12b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ba12e:	89 d1                	mov    %edx,%ecx
 86ba130:	29 c1                	sub    %eax,%ecx
 86ba132:	89 c8                	mov    %ecx,%eax
 86ba134:	83 f8 09             	cmp    $0x9,%eax
 86ba137:	0f 9e c0             	setle  %al
 86ba13a:	84 c0                	test   %al,%al
 86ba13c:	74 43                	je     86ba181 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xe1>
 86ba13e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba141:	89 04 24             	mov    %eax,(%esp)
 86ba144:	e8 6b 88 a9 ff       	call   81529b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEptEv>
 86ba149:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 86ba14d:	66 83 f8 ff          	cmp    $0xffff,%ax
 86ba151:	74 1e                	je     86ba171 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xd1>
 86ba153:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ba156:	89 04 24             	mov    %eax,(%esp)
 86ba159:	e8 56 88 a9 ff       	call   81529b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEptEv>
 86ba15e:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 86ba162:	0f b7 c0             	movzwl %ax,%eax
 86ba165:	3b 45 10             	cmp    0x10(%ebp),%eax
 86ba168:	74 07                	je     86ba171 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xd1>
 86ba16a:	b8 01 00 00 00       	mov    $0x1,%eax
 86ba16f:	eb 05                	jmp    86ba176 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xd6>
 86ba171:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba176:	84 c0                	test   %al,%al
 86ba178:	74 07                	je     86ba181 <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xe1>
 86ba17a:	b8 1c 00 00 00       	mov    $0x1c,%eax
 86ba17f:	eb 0d                	jmp    86ba18e <_ZN8WarField15CheckPickupItemEiiRSt17_Rb_tree_iteratorISt4pairIKi8map_itemEE+0xee>
 86ba181:	8b 45 14             	mov    0x14(%ebp),%eax
 86ba184:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ba187:	89 10                	mov    %edx,(%eax)
 86ba189:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba18e:	c9                   	leave
 86ba18f:	c3                   	ret

```

```c
// WarField::CheckPickupItem @ 0x86ba0a0

/* WarField::CheckPickupItem(int, int, std::_Rb_tree_iterator<std::pair<int const, map_item> >&) */

undefined4 __thiscall
WarField::CheckPickupItem(WarField *this,int param_1,int param_2,_Rb_tree_iterator *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_20 [2];
  int local_18;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_14 [4];
  int local_10;
  
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_20);
  local_18 = local_20[0];
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_14)
  ;
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar2 != '\0') {
    return 0x15;
  }
  local_10 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
  if (local_10 - *(int *)(iVar3 + 0x10) < 10) {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18);
    if ((*(short *)(iVar3 + 0xc) == -1) ||
       (iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_18),
       (uint)*(ushort *)(iVar3 + 0xc) == param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 0x1c;
    }
  }
  *(int *)param_3 = local_18;
  return 0;
}

```

---

## ConsistMap

```asm
// === 086b8a38 WarField::ConsistMap  [0x086b8a38-0x86b92e1] ===
 86b8a38:	55                   	push   %ebp
 86b8a39:	89 e5                	mov    %esp,%ebp
 86b8a3b:	56                   	push   %esi
 86b8a3c:	53                   	push   %ebx
 86b8a3d:	81 ec 40 0b 00 00    	sub    $0xb40,%esp
 86b8a43:	8b 45 18             	mov    0x18(%ebp),%eax
 86b8a46:	88 85 e4 f4 ff ff    	mov    %al,-0xb1c(%ebp)
 86b8a4c:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 86b8a50:	75 41                	jne    86b8a93 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x5b>
 86b8a52:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86b8a59:	00 
 86b8a5a:	c7 44 24 08 3b 00 00 	movl   $0x3b,0x8(%esp)
 86b8a61:	00 
 86b8a62:	c7 44 24 04 00 94 cf 	movl   $0x8cf9400,0x4(%esp)
 86b8a69:	08 
 86b8a6a:	8d 85 48 fc ff ff    	lea    -0x3b8(%ebp),%eax
 86b8a70:	89 04 24             	mov    %eax,(%esp)
 86b8a73:	e8 a0 6c e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86b8a78:	c7 44 24 04 78 85 cf 	movl   $0x8cf8578,0x4(%esp)
 86b8a7f:	08 
 86b8a80:	8d 85 48 fc ff ff    	lea    -0x3b8(%ebp),%eax
 86b8a86:	89 04 24             	mov    %eax,(%esp)
 86b8a89:	e8 fa 6c e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86b8a8e:	e9 44 08 00 00       	jmp    86b92d7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x89f>
 86b8a93:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b8a96:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86b8a99:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b8a9c:	c7 44 24 08 5b 00 00 	movl   $0x5b,0x8(%esp)
 86b8aa3:	00 
 86b8aa4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b8aab:	00 
 86b8aac:	89 04 24             	mov    %eax,(%esp)
 86b8aaf:	e8 48 2e a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b8ab4:	8b 45 10             	mov    0x10(%ebp),%eax
 86b8ab7:	8b 90 cc 07 00 00    	mov    0x7cc(%eax),%edx
 86b8abd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b8ac0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b8ac4:	89 04 24             	mov    %eax,(%esp)
 86b8ac7:	e8 54 2e a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b8acc:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b8acf:	89 04 24             	mov    %eax,(%esp)
 86b8ad2:	e8 75 80 a5 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86b8ad7:	89 85 44 fc ff ff    	mov    %eax,-0x3bc(%ebp)
 86b8add:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b8ae0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b8ae7:	00 
 86b8ae8:	89 04 24             	mov    %eax,(%esp)
 86b8aeb:	e8 b4 13 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b8af0:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8af3:	8b 40 44             	mov    0x44(%eax),%eax
 86b8af6:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86b8af9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8afc:	8b 90 f4 00 00 00    	mov    0xf4(%eax),%edx
 86b8b02:	8b 45 10             	mov    0x10(%ebp),%eax
 86b8b05:	8b 80 44 07 00 00    	mov    0x744(%eax),%eax
 86b8b0b:	39 c2                	cmp    %eax,%edx
 86b8b0d:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8b10:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
 86b8b16:	8b 55 10             	mov    0x10(%ebp),%edx
 86b8b19:	81 c2 38 07 00 00    	add    $0x738,%edx
 86b8b1f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b8b23:	89 14 24             	mov    %edx,(%esp)
 86b8b26:	e8 49 1a a3 ff       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 86b8b2b:	8b 00                	mov    (%eax),%eax
 86b8b2d:	89 c1                	mov    %eax,%ecx
 86b8b2f:	0f af 4d 1c          	imul   0x1c(%ebp),%ecx
 86b8b33:	ba ab aa aa 2a       	mov    $0x2aaaaaab,%edx
 86b8b38:	89 c8                	mov    %ecx,%eax
 86b8b3a:	f7 ea                	imul   %edx
 86b8b3c:	89 c8                	mov    %ecx,%eax
 86b8b3e:	c1 f8 1f             	sar    $0x1f,%eax
 86b8b41:	89 d1                	mov    %edx,%ecx
 86b8b43:	29 c1                	sub    %eax,%ecx
 86b8b45:	89 c8                	mov    %ecx,%eax
 86b8b47:	89 85 40 fc ff ff    	mov    %eax,-0x3c0(%ebp)
 86b8b4d:	c7 85 58 fc ff ff 0a 	movl   $0xa,-0x3a8(%ebp)
 86b8b54:	00 00 00 
 86b8b57:	8d 85 58 fc ff ff    	lea    -0x3a8(%ebp),%eax
 86b8b5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b8b61:	8d 85 40 fc ff ff    	lea    -0x3c0(%ebp),%eax
 86b8b67:	89 04 24             	mov    %eax,(%esp)
 86b8b6a:	e8 a9 56 9d ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 86b8b6f:	8b 00                	mov    (%eax),%eax
 86b8b71:	89 85 40 fc ff ff    	mov    %eax,-0x3c0(%ebp)
 86b8b77:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8b7a:	83 c0 14             	add    $0x14,%eax
 86b8b7d:	89 04 24             	mov    %eax,(%esp)
 86b8b80:	e8 e1 9d a9 ff       	call   8152966 <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 86b8b85:	85 c0                	test   %eax,%eax
 86b8b87:	0f 95 c0             	setne  %al
 86b8b8a:	84 c0                	test   %al,%al
 86b8b8c:	0f 84 d7 06 00 00    	je     86b9269 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x831>
 86b8b92:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86b8b99:	00 
 86b8b9a:	c7 44 24 08 53 00 00 	movl   $0x53,0x8(%esp)
 86b8ba1:	00 
 86b8ba2:	c7 44 24 04 00 94 cf 	movl   $0x8cf9400,0x4(%esp)
 86b8ba9:	08 
 86b8baa:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 86b8bb0:	89 04 24             	mov    %eax,(%esp)
 86b8bb3:	e8 60 6b e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86b8bb8:	c7 44 24 04 a0 85 cf 	movl   $0x8cf85a0,0x4(%esp)
 86b8bbf:	08 
 86b8bc0:	8d 85 5c fc ff ff    	lea    -0x3a4(%ebp),%eax
 86b8bc6:	89 04 24             	mov    %eax,(%esp)
 86b8bc9:	e8 ba 6b e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86b8bce:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8bd1:	83 c0 08             	add    $0x8,%eax
 86b8bd4:	89 04 24             	mov    %eax,(%esp)
 86b8bd7:	e8 d2 88 a9 ff       	call   81514ae <_ZN7MapInfo5ClearEv>
 86b8bdc:	e9 88 06 00 00       	jmp    86b9269 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x831>
 86b8be1:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86b8be8:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86b8bef:	eb 2b                	jmp    86b8c1c <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x1e4>
 86b8bf1:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8bf4:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
 86b8bfa:	8b 55 10             	mov    0x10(%ebp),%edx
 86b8bfd:	81 c2 a4 07 00 00    	add    $0x7a4,%edx
 86b8c03:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b8c07:	89 14 24             	mov    %edx,(%esp)
 86b8c0a:	e8 97 18 00 00       	call   86ba4a6 <_ZNKSt6vectorI22STMonsterTypeSpawnProbSaIS0_EEixEj>
 86b8c0f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86b8c12:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86b8c15:	01 45 d0             	add    %eax,-0x30(%ebp)
 86b8c18:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86b8c1c:	83 7d d4 03          	cmpl   $0x3,-0x2c(%ebp)
 86b8c20:	0f 9e c0             	setle  %al
 86b8c23:	84 c0                	test   %al,%al
 86b8c25:	75 ca                	jne    86b8bf1 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x1b9>
 86b8c27:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86b8c2b:	75 31                	jne    86b8c5e <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x226>
 86b8c2d:	c7 44 24 10 d0 85 cf 	movl   $0x8cf85d0,0x10(%esp)
 86b8c34:	08 
 86b8c35:	c7 44 24 0c 65 00 00 	movl   $0x65,0xc(%esp)
 86b8c3c:	00 
 86b8c3d:	c7 44 24 08 00 94 cf 	movl   $0x8cf9400,0x8(%esp)
 86b8c44:	08 
 86b8c45:	c7 44 24 04 08 86 cf 	movl   $0x8cf8608,0x4(%esp)
 86b8c4c:	08 
 86b8c4d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86b8c54:	e8 b1 af 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86b8c59:	e9 79 06 00 00       	jmp    86b92d7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x89f>
 86b8c5e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86b8c61:	89 04 24             	mov    %eax,(%esp)
 86b8c64:	e8 1e 8f ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b8c69:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86b8c6c:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86b8c73:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86b8c7a:	eb 33                	jmp    86b8caf <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x277>
 86b8c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8c7f:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
 86b8c85:	8b 55 10             	mov    0x10(%ebp),%edx
 86b8c88:	81 c2 a4 07 00 00    	add    $0x7a4,%edx
 86b8c8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b8c92:	89 14 24             	mov    %edx,(%esp)
 86b8c95:	e8 0c 18 00 00       	call   86ba4a6 <_ZNKSt6vectorI22STMonsterTypeSpawnProbSaIS0_EEixEj>
 86b8c9a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86b8c9d:	8b 04 90             	mov    (%eax,%edx,4),%eax
 86b8ca0:	01 45 d0             	add    %eax,-0x30(%ebp)
 86b8ca3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86b8ca6:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86b8ca9:	7c 11                	jl     86b8cbc <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x284>
 86b8cab:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86b8caf:	83 7d d4 03          	cmpl   $0x3,-0x2c(%ebp)
 86b8cb3:	0f 9e c0             	setle  %al
 86b8cb6:	84 c0                	test   %al,%al
 86b8cb8:	75 c2                	jne    86b8c7c <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x244>
 86b8cba:	eb 01                	jmp    86b8cbd <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x285>
 86b8cbc:	90                   	nop
 86b8cbd:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8cc0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86b8cc3:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86b8cca:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b8ccd:	89 d0                	mov    %edx,%eax
 86b8ccf:	01 c0                	add    %eax,%eax
 86b8cd1:	01 d0                	add    %edx,%eax
 86b8cd3:	c1 e0 02             	shl    $0x2,%eax
 86b8cd6:	05 00 07 00 00       	add    $0x700,%eax
 86b8cdb:	03 45 10             	add    0x10(%ebp),%eax
 86b8cde:	83 c0 08             	add    $0x8,%eax
 86b8ce1:	89 04 24             	mov    %eax,(%esp)
 86b8ce4:	e8 d7 54 9d ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 86b8ce9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86b8cec:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86b8cf3:	e9 c3 00 00 00       	jmp    86b8dbb <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x383>
 86b8cf8:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 86b8cfb:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b8cfe:	89 d0                	mov    %edx,%eax
 86b8d00:	01 c0                	add    %eax,%eax
 86b8d02:	01 d0                	add    %edx,%eax
 86b8d04:	c1 e0 02             	shl    $0x2,%eax
 86b8d07:	05 00 07 00 00       	add    $0x700,%eax
 86b8d0c:	03 45 10             	add    0x10(%ebp),%eax
 86b8d0f:	83 c0 08             	add    $0x8,%eax
 86b8d12:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b8d16:	89 04 24             	mov    %eax,(%esp)
 86b8d19:	e8 d8 eb cc ff       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 86b8d1e:	8b 18                	mov    (%eax),%ebx
 86b8d20:	e8 76 34 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b8d25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b8d29:	89 04 24             	mov    %eax,(%esp)
 86b8d2c:	e8 53 70 ca ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 86b8d31:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b8d34:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86b8d38:	75 5d                	jne    86b8d97 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x35f>
 86b8d3a:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 86b8d3d:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b8d40:	89 d0                	mov    %edx,%eax
 86b8d42:	01 c0                	add    %eax,%eax
 86b8d44:	01 d0                	add    %edx,%eax
 86b8d46:	c1 e0 02             	shl    $0x2,%eax
 86b8d49:	05 00 07 00 00       	add    $0x700,%eax
 86b8d4e:	03 45 10             	add    0x10(%ebp),%eax
 86b8d51:	83 c0 08             	add    $0x8,%eax
 86b8d54:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b8d58:	89 04 24             	mov    %eax,(%esp)
 86b8d5b:	e8 96 eb cc ff       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 86b8d60:	8b 00                	mov    (%eax),%eax
 86b8d62:	89 44 24 14          	mov    %eax,0x14(%esp)
 86b8d66:	c7 44 24 10 18 86 cf 	movl   $0x8cf8618,0x10(%esp)
 86b8d6d:	08 
 86b8d6e:	c7 44 24 0c 96 00 00 	movl   $0x96,0xc(%esp)
 86b8d75:	00 
 86b8d76:	c7 44 24 08 00 94 cf 	movl   $0x8cf9400,0x8(%esp)
 86b8d7d:	08 
 86b8d7e:	c7 44 24 04 08 86 cf 	movl   $0x8cf8608,0x4(%esp)
 86b8d85:	08 
 86b8d86:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86b8d8d:	e8 78 ae 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86b8d92:	e9 40 05 00 00       	jmp    86b92d7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x89f>
 86b8d97:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8d9a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86b8d9d:	8b 92 24 1d 00 00    	mov    0x1d24(%edx),%edx
 86b8da3:	89 94 85 f4 f4 ff ff 	mov    %edx,-0xb0c(%ebp,%eax,4)
 86b8daa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8dad:	8b 84 85 f4 f4 ff ff 	mov    -0xb0c(%ebp,%eax,4),%eax
 86b8db4:	01 45 d0             	add    %eax,-0x30(%ebp)
 86b8db7:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86b8dbb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86b8dbe:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 86b8dc1:	0f 9f c0             	setg   %al
 86b8dc4:	84 c0                	test   %al,%al
 86b8dc6:	0f 85 2c ff ff ff    	jne    86b8cf8 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x2c0>
 86b8dcc:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86b8dd0:	75 38                	jne    86b8e0a <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x3d2>
 86b8dd2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b8dd5:	89 44 24 14          	mov    %eax,0x14(%esp)
 86b8dd9:	c7 44 24 10 38 86 cf 	movl   $0x8cf8638,0x10(%esp)
 86b8de0:	08 
 86b8de1:	c7 44 24 0c 9f 00 00 	movl   $0x9f,0xc(%esp)
 86b8de8:	00 
 86b8de9:	c7 44 24 08 00 94 cf 	movl   $0x8cf9400,0x8(%esp)
 86b8df0:	08 
 86b8df1:	c7 44 24 04 08 86 cf 	movl   $0x8cf8608,0x4(%esp)
 86b8df8:	08 
 86b8df9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86b8e00:	e8 05 ae 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86b8e05:	e9 cd 04 00 00       	jmp    86b92d7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x89f>
 86b8e0a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86b8e0d:	89 04 24             	mov    %eax,(%esp)
 86b8e10:	e8 72 8d ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b8e15:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86b8e18:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86b8e1f:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86b8e26:	eb 19                	jmp    86b8e41 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x409>
 86b8e28:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8e2b:	8b 84 85 f4 f4 ff ff 	mov    -0xb0c(%ebp,%eax,4),%eax
 86b8e32:	01 45 d0             	add    %eax,-0x30(%ebp)
 86b8e35:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86b8e38:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86b8e3b:	7c 13                	jl     86b8e50 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x418>
 86b8e3d:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86b8e41:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86b8e44:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 86b8e47:	0f 9f c0             	setg   %al
 86b8e4a:	84 c0                	test   %al,%al
 86b8e4c:	75 da                	jne    86b8e28 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x3f0>
 86b8e4e:	eb 01                	jmp    86b8e51 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x419>
 86b8e50:	90                   	nop
 86b8e51:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8e54:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86b8e57:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 86b8e5a:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b8e5d:	89 d0                	mov    %edx,%eax
 86b8e5f:	01 c0                	add    %eax,%eax
 86b8e61:	01 d0                	add    %edx,%eax
 86b8e63:	c1 e0 02             	shl    $0x2,%eax
 86b8e66:	05 00 07 00 00       	add    $0x700,%eax
 86b8e6b:	03 45 10             	add    0x10(%ebp),%eax
 86b8e6e:	83 c0 08             	add    $0x8,%eax
 86b8e71:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b8e75:	89 04 24             	mov    %eax,(%esp)
 86b8e78:	e8 79 ea cc ff       	call   83878f6 <_ZNKSt6vectorIiSaIiEE2atEj>
 86b8e7d:	8b 18                	mov    (%eax),%ebx
 86b8e7f:	e8 17 33 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b8e84:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b8e88:	89 04 24             	mov    %eax,(%esp)
 86b8e8b:	e8 f4 6e ca ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 86b8e90:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86b8e93:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 86b8e97:	75 31                	jne    86b8eca <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x492>
 86b8e99:	c7 44 24 10 80 86 cf 	movl   $0x8cf8680,0x10(%esp)
 86b8ea0:	08 
 86b8ea1:	c7 44 24 0c bc 00 00 	movl   $0xbc,0xc(%esp)
 86b8ea8:	00 
 86b8ea9:	c7 44 24 08 00 94 cf 	movl   $0x8cf9400,0x8(%esp)
 86b8eb0:	08 
 86b8eb1:	c7 44 24 04 08 86 cf 	movl   $0x8cf8608,0x4(%esp)
 86b8eb8:	08 
 86b8eb9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86b8ec0:	e8 45 ad 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86b8ec5:	e9 0d 04 00 00       	jmp    86b92d7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x89f>
 86b8eca:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86b8ed1:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86b8ed8:	eb 22                	jmp    86b8efc <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x4c4>
 86b8eda:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8edd:	8b 55 14             	mov    0x14(%ebp),%edx
 86b8ee0:	81 c2 90 00 00 00    	add    $0x90,%edx
 86b8ee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b8eea:	89 14 24             	mov    %edx,(%esp)
 86b8eed:	e8 c6 15 00 00       	call   86ba4b8 <_ZNKSt6vectorI14STRivalMapDataSaIS0_EEixEj>
 86b8ef2:	8b 40 08             	mov    0x8(%eax),%eax
 86b8ef5:	01 45 d0             	add    %eax,-0x30(%ebp)
 86b8ef8:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86b8efc:	8b 45 14             	mov    0x14(%ebp),%eax
 86b8eff:	05 90 00 00 00       	add    $0x90,%eax
 86b8f04:	89 04 24             	mov    %eax,(%esp)
 86b8f07:	e8 2e 7a c5 ff       	call   831093a <_ZNKSt6vectorI14STRivalMapDataSaIS0_EE4sizeEv>
 86b8f0c:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 86b8f0f:	0f 9f c0             	setg   %al
 86b8f12:	84 c0                	test   %al,%al
 86b8f14:	75 c4                	jne    86b8eda <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x4a2>
 86b8f16:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86b8f1a:	75 31                	jne    86b8f4d <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x515>
 86b8f1c:	c7 44 24 10 a4 86 cf 	movl   $0x8cf86a4,0x10(%esp)
 86b8f23:	08 
 86b8f24:	c7 44 24 0c d0 00 00 	movl   $0xd0,0xc(%esp)
 86b8f2b:	00 
 86b8f2c:	c7 44 24 08 00 94 cf 	movl   $0x8cf9400,0x8(%esp)
 86b8f33:	08 
 86b8f34:	c7 44 24 04 08 86 cf 	movl   $0x8cf8608,0x4(%esp)
 86b8f3b:	08 
 86b8f3c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86b8f43:	e8 c2 ac 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86b8f48:	e9 8a 03 00 00       	jmp    86b92d7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x89f>
 86b8f4d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86b8f50:	89 04 24             	mov    %eax,(%esp)
 86b8f53:	e8 2f 8c ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b8f58:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86b8f5b:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86b8f62:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86b8f69:	eb 2a                	jmp    86b8f95 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x55d>
 86b8f6b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8f6e:	8b 55 14             	mov    0x14(%ebp),%edx
 86b8f71:	81 c2 90 00 00 00    	add    $0x90,%edx
 86b8f77:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b8f7b:	89 14 24             	mov    %edx,(%esp)
 86b8f7e:	e8 35 15 00 00       	call   86ba4b8 <_ZNKSt6vectorI14STRivalMapDataSaIS0_EEixEj>
 86b8f83:	8b 40 08             	mov    0x8(%eax),%eax
 86b8f86:	01 45 d0             	add    %eax,-0x30(%ebp)
 86b8f89:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86b8f8c:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86b8f8f:	7c 20                	jl     86b8fb1 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x579>
 86b8f91:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86b8f95:	8b 45 14             	mov    0x14(%ebp),%eax
 86b8f98:	05 90 00 00 00       	add    $0x90,%eax
 86b8f9d:	89 04 24             	mov    %eax,(%esp)
 86b8fa0:	e8 95 79 c5 ff       	call   831093a <_ZNKSt6vectorI14STRivalMapDataSaIS0_EE4sizeEv>
 86b8fa5:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 86b8fa8:	0f 9f c0             	setg   %al
 86b8fab:	84 c0                	test   %al,%al
 86b8fad:	75 bc                	jne    86b8f6b <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x533>
 86b8faf:	eb 01                	jmp    86b8fb2 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x57a>
 86b8fb1:	90                   	nop
 86b8fb2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b8fb5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86b8fb8:	8d 85 f4 f8 ff ff    	lea    -0x70c(%ebp),%eax
 86b8fbe:	89 04 24             	mov    %eax,(%esp)
 86b8fc1:	e8 02 82 a9 ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 86b8fc6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b8fc9:	89 85 f8 f8 ff ff    	mov    %eax,-0x708(%ebp)
 86b8fcf:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 86b8fd3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b8fd6:	88 85 fc f8 ff ff    	mov    %al,-0x704(%ebp)
 86b8fdc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86b8fdf:	89 04 24             	mov    %eax,(%esp)
 86b8fe2:	e8 e7 b8 cb ff       	call   83748ce <_ZN8CMonster9get_indexEv>
 86b8fe7:	89 85 00 f9 ff ff    	mov    %eax,-0x700(%ebp)
 86b8fed:	0f b6 85 e4 f4 ff ff 	movzbl -0xb1c(%ebp),%eax
 86b8ff4:	88 85 04 f9 ff ff    	mov    %al,-0x6fc(%ebp)
 86b8ffa:	c6 85 05 f9 ff ff 01 	movb   $0x1,-0x6fb(%ebp)
 86b9001:	c6 85 06 f9 ff ff 01 	movb   $0x1,-0x6fa(%ebp)
 86b9008:	8b 45 10             	mov    0x10(%ebp),%eax
 86b900b:	d9 80 b0 07 00 00    	flds   0x7b0(%eax)
 86b9011:	b8 06 00 00 00       	mov    $0x6,%eax
 86b9016:	2b 45 1c             	sub    0x1c(%ebp),%eax
 86b9019:	89 85 e0 f4 ff ff    	mov    %eax,-0xb20(%ebp)
 86b901f:	db 85 e0 f4 ff ff    	fildl  -0xb20(%ebp)
 86b9025:	de c9                	fmulp  %st,%st(1)
 86b9027:	d9 e8                	fld1
 86b9029:	de c1                	faddp  %st,%st(1)
 86b902b:	d9 9d 0c f9 ff ff    	fstps  -0x6f4(%ebp)
 86b9031:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9034:	d9 80 b4 07 00 00    	flds   0x7b4(%eax)
 86b903a:	b8 06 00 00 00       	mov    $0x6,%eax
 86b903f:	2b 45 1c             	sub    0x1c(%ebp),%eax
 86b9042:	89 85 e0 f4 ff ff    	mov    %eax,-0xb20(%ebp)
 86b9048:	db 85 e0 f4 ff ff    	fildl  -0xb20(%ebp)
 86b904e:	de c9                	fmulp  %st,%st(1)
 86b9050:	d9 e8                	fld1
 86b9052:	de c1                	faddp  %st,%st(1)
 86b9054:	d9 9d 1c f9 ff ff    	fstps  -0x6e4(%ebp)
 86b905a:	8d 85 f4 f8 ff ff    	lea    -0x70c(%ebp),%eax
 86b9060:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9064:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 86b906a:	89 04 24             	mov    %eax,(%esp)
 86b906d:	e8 78 8a a9 ff       	call   8151aea <_ZN11map_monsterC1ERKS_>
 86b9072:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9075:	8d 50 08             	lea    0x8(%eax),%edx
 86b9078:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 86b907e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9082:	89 14 24             	mov    %edx,(%esp)
 86b9085:	e8 88 85 a9 ff       	call   8151612 <_ZN7MapInfo7Add_MobE11map_monster>
 86b908a:	eb 1b                	jmp    86b90a7 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x66f>
 86b908c:	89 d3                	mov    %edx,%ebx
 86b908e:	89 c6                	mov    %eax,%esi
 86b9090:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 86b9096:	89 04 24             	mov    %eax,(%esp)
 86b9099:	e8 10 85 a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b909e:	89 f0                	mov    %esi,%eax
 86b90a0:	89 da                	mov    %ebx,%edx
 86b90a2:	e9 96 01 00 00       	jmp    86b923d <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x805>
 86b90a7:	8d 85 6c fc ff ff    	lea    -0x394(%ebp),%eax
 86b90ad:	89 04 24             	mov    %eax,(%esp)
 86b90b0:	e8 f9 84 a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b90b5:	8b 95 40 fc ff ff    	mov    -0x3c0(%ebp),%edx
 86b90bb:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 86b90be:	8b 45 10             	mov    0x10(%ebp),%eax
 86b90c1:	81 c1 ec 01 00 00    	add    $0x1ec,%ecx
 86b90c7:	8b 44 88 08          	mov    0x8(%eax,%ecx,4),%eax
 86b90cb:	89 d1                	mov    %edx,%ecx
 86b90cd:	29 c1                	sub    %eax,%ecx
 86b90cf:	89 c8                	mov    %ecx,%eax
 86b90d1:	89 85 40 fc ff ff    	mov    %eax,-0x3c0(%ebp)
 86b90d7:	8b 95 f8 f8 ff ff    	mov    -0x708(%ebp),%edx
 86b90dd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b90e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b90e4:	89 04 24             	mov    %eax,(%esp)
 86b90e7:	e8 b8 0d a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b90ec:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b90ef:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b90f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b90f6:	89 04 24             	mov    %eax,(%esp)
 86b90f9:	e8 22 28 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b90fe:	0f b6 95 e4 f4 ff ff 	movzbl -0xb1c(%ebp),%edx
 86b9105:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9108:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b910c:	89 04 24             	mov    %eax,(%esp)
 86b910f:	e8 0c 28 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9114:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9117:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86b911a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b911e:	89 04 24             	mov    %eax,(%esp)
 86b9121:	e8 fa 27 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9126:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9129:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86b912c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9130:	89 04 24             	mov    %eax,(%esp)
 86b9133:	e8 e8 27 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9138:	8b 45 10             	mov    0x10(%ebp),%eax
 86b913b:	8b 98 e0 07 00 00    	mov    0x7e0(%eax),%ebx
 86b9141:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9144:	8b 80 e4 07 00 00    	mov    0x7e4(%eax),%eax
 86b914a:	89 04 24             	mov    %eax,(%esp)
 86b914d:	e8 35 8a ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b9152:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 86b9155:	89 85 e0 f4 ff ff    	mov    %eax,-0xb20(%ebp)
 86b915b:	db 85 e0 f4 ff ff    	fildl  -0xb20(%ebp)
 86b9161:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86b9164:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9167:	81 c2 f0 01 00 00    	add    $0x1f0,%edx
 86b916d:	d9 44 90 10          	flds   0x10(%eax,%edx,4)
 86b9171:	de c9                	fmulp  %st,%st(1)
 86b9173:	d9 bd de f4 ff ff    	fnstcw -0xb22(%ebp)
 86b9179:	0f b7 85 de f4 ff ff 	movzwl -0xb22(%ebp),%eax
 86b9180:	b4 0c                	mov    $0xc,%ah
 86b9182:	66 89 85 dc f4 ff ff 	mov    %ax,-0xb24(%ebp)
 86b9189:	d9 ad dc f4 ff ff    	fldcw  -0xb24(%ebp)
 86b918f:	db 5d f0             	fistpl -0x10(%ebp)
 86b9192:	d9 ad de f4 ff ff    	fldcw  -0xb22(%ebp)
 86b9198:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 86b919c:	75 53                	jne    86b91f1 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x7b9>
 86b919e:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86b91a5:	00 
 86b91a6:	c7 44 24 08 07 01 00 	movl   $0x107,0x8(%esp)
 86b91ad:	00 
 86b91ae:	c7 44 24 04 00 94 cf 	movl   $0x8cf9400,0x4(%esp)
 86b91b5:	08 
 86b91b6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b91b9:	89 04 24             	mov    %eax,(%esp)
 86b91bc:	e8 57 65 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86b91c1:	c7 44 24 04 78 85 cf 	movl   $0x8cf8578,0x4(%esp)
 86b91c8:	08 
 86b91c9:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b91cc:	89 04 24             	mov    %eax,(%esp)
 86b91cf:	e8 b4 65 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86b91d4:	c7 45 1c 01 00 00 00 	movl   $0x1,0x1c(%ebp)
 86b91db:	d9 bd de f4 ff ff    	fnstcw -0xb22(%ebp)
 86b91e1:	0f b7 85 de f4 ff ff 	movzwl -0xb22(%ebp),%eax
 86b91e8:	b4 0c                	mov    $0xc,%ah
 86b91ea:	66 89 85 dc f4 ff ff 	mov    %ax,-0xb24(%ebp)
 86b91f1:	db 45 f0             	fildl  -0x10(%ebp)
 86b91f4:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86b91f7:	83 e8 01             	sub    $0x1,%eax
 86b91fa:	89 85 e0 f4 ff ff    	mov    %eax,-0xb20(%ebp)
 86b9200:	db 85 e0 f4 ff ff    	fildl  -0xb20(%ebp)
 86b9206:	dd 05 58 94 cf 08    	fldl   0x8cf9458
 86b920c:	de c9                	fmulp  %st,%st(1)
 86b920e:	d9 e8                	fld1
 86b9210:	de c1                	faddp  %st,%st(1)
 86b9212:	de f9                	fdivrp %st,%st(1)
 86b9214:	d9 ad dc f4 ff ff    	fldcw  -0xb24(%ebp)
 86b921a:	db 9d e0 f4 ff ff    	fistpl -0xb20(%ebp)
 86b9220:	d9 ad de f4 ff ff    	fldcw  -0xb22(%ebp)
 86b9226:	8b 95 e0 f4 ff ff    	mov    -0xb20(%ebp),%edx
 86b922c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b922f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9233:	89 04 24             	mov    %eax,(%esp)
 86b9236:	e8 69 0c a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b923b:	eb 1e                	jmp    86b925b <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x823>
 86b923d:	89 d3                	mov    %edx,%ebx
 86b923f:	89 c6                	mov    %eax,%esi
 86b9241:	8d 85 f4 f8 ff ff    	lea    -0x70c(%ebp),%eax
 86b9247:	89 04 24             	mov    %eax,(%esp)
 86b924a:	e8 5f 83 a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b924f:	89 f0                	mov    %esi,%eax
 86b9251:	89 da                	mov    %ebx,%edx
 86b9253:	89 04 24             	mov    %eax,(%esp)
 86b9256:	e8 f5 a4 42 00       	call   8ae3750 <_Unwind_Resume>
 86b925b:	8d 85 f4 f8 ff ff    	lea    -0x70c(%ebp),%eax
 86b9261:	89 04 24             	mov    %eax,(%esp)
 86b9264:	e8 45 83 a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b9269:	8b 85 40 fc ff ff    	mov    -0x3c0(%ebp),%eax
 86b926f:	83 f8 09             	cmp    $0x9,%eax
 86b9272:	0f 9f c0             	setg   %al
 86b9275:	84 c0                	test   %al,%al
 86b9277:	0f 85 64 f9 ff ff    	jne    86b8be1 <_ZN8WarField10ConsistMapEPvPK8CDungeonPK4CMaphi+0x1a9>
 86b927d:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9280:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86b9283:	89 50 44             	mov    %edx,0x44(%eax)
 86b9286:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9289:	8b 80 f4 00 00 00    	mov    0xf4(%eax),%eax
 86b928f:	8d 50 01             	lea    0x1(%eax),%edx
 86b9292:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9295:	89 90 f4 00 00 00    	mov    %edx,0xf4(%eax)
 86b929b:	8b 45 08             	mov    0x8(%ebp),%eax
 86b929e:	83 c0 14             	add    $0x14,%eax
 86b92a1:	89 04 24             	mov    %eax,(%esp)
 86b92a4:	e8 bd 96 a9 ff       	call   8152966 <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 86b92a9:	89 c2                	mov    %eax,%edx
 86b92ab:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b92ae:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b92b2:	8d 95 44 fc ff ff    	lea    -0x3bc(%ebp),%edx
 86b92b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b92bc:	89 04 24             	mov    %eax,(%esp)
 86b92bf:	e8 44 d6 a5 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 86b92c4:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b92c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b92ce:	00 
 86b92cf:	89 04 24             	mov    %eax,(%esp)
 86b92d2:	e8 81 26 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b92d7:	81 c4 40 0b 00 00    	add    $0xb40,%esp
 86b92dd:	5b                   	pop    %ebx
 86b92de:	5e                   	pop    %esi
 86b92df:	5d                   	pop    %ebp
 86b92e0:	c3                   	ret
 86b92e1:	90                   	nop

```

```c
// WarField::ConsistMap @ 0x86b8a38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarField::ConsistMap(void*, CDungeon const*, CMap const*, unsigned char, int) */

void __thiscall
WarField::ConsistMap
          (WarField *this,void *param_1,CDungeon *param_2,CMap *param_3,uchar param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int aiStack_b10 [256];
  map_monster local_710 [4];
  int local_70c;
  undefined1 local_708;
  undefined4 local_704;
  uchar local_700;
  undefined1 local_6ff;
  undefined1 local_6fe;
  float local_6f8;
  float local_6e8;
  int local_3c4;
  int local_3c0;
  cMyTrace local_3bc [16];
  int local_3ac;
  cMyTrace local_3a8 [16];
  map_monster local_398 [844];
  cMyTrace local_4c [16];
  InterfacePacketBuf *local_3c;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  CMonster *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (param_5 == 0) {
    cMyTrace::cMyTrace(local_3bc,
                       "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",
                       0x3b,5);
    cMyTrace::operator()(local_3bc,"WarField::ConsistMap playerCount is 0");
  }
  else {
    local_3c = param_1;
    InterfacePacketBuf::put_header(param_1,0,0x5b);
    InterfacePacketBuf::put_byte(local_3c,*(int *)(param_2 + 0x7cc));
    local_3c0 = InterfacePacketBuf::get_index(local_3c);
    InterfacePacketBuf::put_short(local_3c,0);
    local_38 = *(int *)(this + 0x44);
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(param_2 + 0x738),
                               *(uint *)(this + 0xf4));
    local_3c4 = (*piVar1 * param_5) / 6;
    local_3ac = 10;
    piVar1 = std::max<int>(&local_3c4,&local_3ac);
    local_3c4 = *piVar1;
    iVar2 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
    if (iVar2 != 0) {
      cMyTrace::cMyTrace(local_3a8,
                         "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)"
                         ,0x53,5);
      cMyTrace::operator()(local_3a8,&DAT_08cf85a0);
      MapInfo::Clear((MapInfo *)(this + 8));
    }
    while (9 < local_3c4) {
      local_34 = 0;
      for (local_30 = 0; (int)local_30 < 4; local_30 = local_30 + 1) {
        iVar2 = std::vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>>::
                operator[]((vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>> *)
                           (param_2 + 0x7a4),*(uint *)(this + 0xf4));
        local_34 = local_34 + *(int *)(iVar2 + local_30 * 4);
      }
      if (local_34 == 0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0x65,
                   &DAT_08cf85d0);
        return;
      }
      local_2c = get_rand_int(local_34);
      local_34 = 0;
      for (local_30 = 0; (int)local_30 < 4; local_30 = local_30 + 1) {
        iVar2 = std::vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>>::
                operator[]((vector<STMonsterTypeSpawnProb,std::allocator<STMonsterTypeSpawnProb>> *)
                           (param_2 + 0x7a4),*(uint *)(this + 0xf4));
        local_34 = local_34 + *(int *)(iVar2 + local_30 * 4);
        if (local_2c < local_34) break;
      }
      local_28 = local_30;
      local_34 = 0;
      local_24 = std::vector<int,std::allocator<int>>::size
                           ((vector<int,std::allocator<int>> *)(param_2 + local_30 * 0xc + 0x708));
      for (local_30 = 0; (int)local_30 < local_24; local_30 = local_30 + 1) {
        std::vector<int,std::allocator<int>>::at
                  ((vector<int,std::allocator<int>> *)(param_2 + local_28 * 0xc + 0x708),local_30);
        iVar2 = G_CDataManager();
        local_10 = CDataManager::find_monster(iVar2);
        if (local_10 == 0) {
          puVar3 = (undefined4 *)
                   std::vector<int,std::allocator<int>>::at
                             ((vector<int,std::allocator<int>> *)(param_2 + local_28 * 0xc + 0x708),
                              local_30);
          LogManager::logFormat
                    (1,"WarField.cpp",
                     "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",
                     0x96,"WARROOM Find Monster[%d] Error",*puVar3);
          return;
        }
        aiStack_b10[local_30] = *(int *)(local_10 + 0x1d24);
        local_34 = local_34 + aiStack_b10[local_30];
      }
      if (local_34 == 0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0x9f,
                   &DAT_08cf8638,local_28);
        return;
      }
      local_2c = get_rand_int(local_34);
      local_34 = 0;
      for (local_30 = 0;
          ((int)local_30 < local_24 &&
          (local_34 = local_34 + aiStack_b10[local_30], local_34 <= local_2c));
          local_30 = local_30 + 1) {
      }
      local_20 = local_30;
      std::vector<int,std::allocator<int>>::at
                ((vector<int,std::allocator<int>> *)(param_2 + local_28 * 0xc + 0x708),local_30);
      iVar2 = G_CDataManager();
      local_1c = (CMonster *)CDataManager::find_monster(iVar2);
      if (local_1c == (CMonster *)0x0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0xbc,
                   "WARROOM::ConsistMap pMob is Null");
        return;
      }
      local_34 = 0;
      local_30 = 0;
      while (iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::size
                               ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)
                                (param_3 + 0x90)), (int)local_30 < iVar2) {
        iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator[]
                          ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(param_3 + 0x90)
                           ,local_30);
        local_34 = local_34 + *(int *)(iVar2 + 8);
        local_30 = local_30 + 1;
      }
      if (local_34 == 0) {
        LogManager::logFormat
                  (1,"WarField.cpp",
                   "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)",0xd0,
                   &DAT_08cf86a4);
        return;
      }
      local_2c = get_rand_int(local_34);
      local_34 = 0;
      local_30 = 0;
      while (iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::size
                               ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)
                                (param_3 + 0x90)), (int)local_30 < iVar2) {
        iVar2 = std::vector<STRivalMapData,std::allocator<STRivalMapData>>::operator[]
                          ((vector<STRivalMapData,std::allocator<STRivalMapData>> *)(param_3 + 0x90)
                           ,local_30);
        local_34 = local_34 + *(int *)(iVar2 + 8);
        if (local_2c < local_34) break;
        local_30 = local_30 + 1;
      }
      local_18 = local_30;
      map_monster::map_monster(local_710);
      local_70c = local_38;
      local_38 = local_38 + 1;
      local_708 = (undefined1)local_28;
      local_704 = CMonster::get_index(local_1c);
      local_700 = param_4;
      local_6ff = 1;
      local_6fe = 1;
      local_6f8 = (float)(6 - param_5) * *(float *)(param_2 + 0x7b0) + 1.0;
      local_6e8 = (float)(6 - param_5) * *(float *)(param_2 + 0x7b4) + 1.0;
                    /* try { // try from 086b906d to 086b9071 has its CatchHandler @ 086b923d */
      map_monster::map_monster(local_398,local_710);
                    /* try { // try from 086b9085 to 086b9089 has its CatchHandler @ 086b908c */
      MapInfo::Add_Mob((MapInfo *)(this + 8),local_398);
                    /* try { // try from 086b90b0 to 086b923a has its CatchHandler @ 086b923d */
      map_monster::~map_monster(local_398);
      local_3c4 = local_3c4 - *(int *)(param_2 + (local_28 + 0x1ec) * 4 + 8);
      InterfacePacketBuf::put_short(local_3c,local_70c);
      InterfacePacketBuf::put_byte(local_3c,local_28);
      InterfacePacketBuf::put_byte(local_3c,(uint)param_4);
      InterfacePacketBuf::put_byte(local_3c,local_20);
      InterfacePacketBuf::put_byte(local_3c,local_18);
      iVar2 = *(int *)(param_2 + 0x7e0);
      iVar4 = get_rand_int(*(int *)(param_2 + 0x7e4));
      local_14 = (int)ROUND(*(float *)(param_2 + (local_28 + 0x1f0) * 4 + 0x10) *
                            (float)(iVar2 + iVar4));
      if (param_5 == 0) {
        cMyTrace::cMyTrace(local_4c,
                           "void WarField::ConsistMap(void*, const CDungeon*, const CMap*, byte, int)"
                           ,0x107,5);
        cMyTrace::operator()(local_4c,"WarField::ConsistMap playerCount is 0");
        param_5 = 1;
      }
      InterfacePacketBuf::put_short
                (local_3c,(int)ROUND((double)local_14 /
                                     (_DAT_08cf9458 * (double)(param_5 + -1) + 1.0)));
      map_monster::~map_monster(local_710);
    }
    *(int *)(this + 0x44) = local_38;
    *(int *)(this + 0xf4) = *(int *)(this + 0xf4) + 1;
    iVar2 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
    InterfacePacketBuf::put_short(local_3c,&local_3c0,iVar2);
    InterfacePacketBuf::finalize(local_3c,true);
  }
  return;
}

```

---

## DropItem

```asm
// === 086ba190 WarField::DropItem  [0x086ba190-0x86ba1e9] ===
 86ba190:	55                   	push   %ebp
 86ba191:	89 e5                	mov    %esp,%ebp
 86ba193:	57                   	push   %edi
 86ba194:	56                   	push   %esi
 86ba195:	53                   	push   %ebx
 86ba196:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 86ba19c:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba19f:	8b 40 48             	mov    0x48(%eax),%eax
 86ba1a2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86ba1a5:	8d 50 01             	lea    0x1(%eax),%edx
 86ba1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba1ab:	89 50 48             	mov    %edx,0x48(%eax)
 86ba1ae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86ba1b1:	89 45 10             	mov    %eax,0x10(%ebp)
 86ba1b4:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba1b7:	83 c0 08             	add    $0x8,%eax
 86ba1ba:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86ba1bd:	8d 54 24 04          	lea    0x4(%esp),%edx
 86ba1c1:	8d 5d 0c             	lea    0xc(%ebp),%ebx
 86ba1c4:	b8 15 00 00 00       	mov    $0x15,%eax
 86ba1c9:	89 d7                	mov    %edx,%edi
 86ba1cb:	89 de                	mov    %ebx,%esi
 86ba1cd:	89 c1                	mov    %eax,%ecx
 86ba1cf:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 86ba1d1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86ba1d4:	89 04 24             	mov    %eax,(%esp)
 86ba1d7:	e8 04 76 a9 ff       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 86ba1dc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86ba1df:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 86ba1e5:	5b                   	pop    %ebx
 86ba1e6:	5e                   	pop    %esi
 86ba1e7:	5f                   	pop    %edi
 86ba1e8:	5d                   	pop    %ebp
 86ba1e9:	c3                   	ret

```

```c
// WarField::DropItem @ 0x86ba190

/* WarField::DropItem(map_item) */

int WarField::DropItem(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack0000000c;
  undefined4 local_98 [26];
  int local_30;
  int local_20;
  
  local_20 = *(int *)(param_1 + 0x48);
  *(int *)(param_1 + 0x48) = local_20 + 1;
  iStack0000000c = local_20;
  local_30 = param_1 + 8;
  puVar2 = (undefined4 *)&stack0x00000008;
  puVar3 = local_98;
  for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  MapInfo::Add_Item(local_30);
  return local_20;
}

```

---

## GetFieldItem

```asm
// === 086b9fe6 WarField::GetFieldItem  [0x086b9fe6-0x86ba081] ===
 86b9fe6:	55                   	push   %ebp
 86b9fe7:	89 e5                	mov    %esp,%ebp
 86b9fe9:	57                   	push   %edi
 86b9fea:	56                   	push   %esi
 86b9feb:	53                   	push   %ebx
 86b9fec:	83 ec 3c             	sub    $0x3c,%esp
 86b9fef:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b9ff2:	89 04 24             	mov    %eax,(%esp)
 86b9ff5:	e8 2a 85 a9 ff       	call   8152524 <_ZNSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEC1Ev>
 86b9ffa:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9ffd:	8d 48 2c             	lea    0x2c(%eax),%ecx
 86ba000:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86ba003:	8d 55 0c             	lea    0xc(%ebp),%edx
 86ba006:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ba00a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ba00e:	89 04 24             	mov    %eax,(%esp)
 86ba011:	e8 1c 85 a9 ff       	call   8152532 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 86ba016:	83 ec 04             	sub    $0x4,%esp
 86ba019:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86ba01c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86ba01f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba022:	8d 50 2c             	lea    0x2c(%eax),%edx
 86ba025:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba028:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba02c:	89 04 24             	mov    %eax,(%esp)
 86ba02f:	e8 2a 85 a9 ff       	call   815255e <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86ba034:	83 ec 04             	sub    $0x4,%esp
 86ba037:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba03a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba03e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86ba041:	89 04 24             	mov    %eax,(%esp)
 86ba044:	e8 03 a9 a9 ff       	call   815494c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEeqERKS4_>
 86ba049:	84 c0                	test   %al,%al
 86ba04b:	74 07                	je     86ba054 <_ZN8WarField12GetFieldItemEiR8map_item+0x6e>
 86ba04d:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba052:	eb 23                	jmp    86ba077 <_ZN8WarField12GetFieldItemEiR8map_item+0x91>
 86ba054:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86ba057:	89 04 24             	mov    %eax,(%esp)
 86ba05a:	e8 55 89 a9 ff       	call   81529b4 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi8map_itemEEptEv>
 86ba05f:	8b 55 10             	mov    0x10(%ebp),%edx
 86ba062:	8d 58 04             	lea    0x4(%eax),%ebx
 86ba065:	b8 15 00 00 00       	mov    $0x15,%eax
 86ba06a:	89 d7                	mov    %edx,%edi
 86ba06c:	89 de                	mov    %ebx,%esi
 86ba06e:	89 c1                	mov    %eax,%ecx
 86ba070:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 86ba072:	b8 01 00 00 00       	mov    $0x1,%eax
 86ba077:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86ba07a:	83 c4 00             	add    $0x0,%esp
 86ba07d:	5b                   	pop    %ebx
 86ba07e:	5e                   	pop    %esi
 86ba07f:	5f                   	pop    %edi
 86ba080:	5d                   	pop    %ebp
 86ba081:	c3                   	ret

```

```c
// WarField::GetFieldItem @ 0x86b9fe6

/* WarField::GetFieldItem(int, map_item&) */

undefined4 __thiscall WarField::GetFieldItem(WarField *this,int param_1,map_item *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  byte bVar6;
  int local_30 [3];
  int local_24;
  map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> local_20 [16];
  
  bVar6 = 0;
  std::_Rb_tree_iterator<std::pair<int_const,map_item>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24);
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::find
            (local_30);
  local_24 = local_30[0];
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::end(local_20)
  ;
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24,
                     (_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_item>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_item>> *)&local_24);
    puVar5 = (undefined4 *)(iVar3 + 4);
    for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
      *(undefined4 *)param_2 = *puVar5;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      param_2 = param_2 + (uint)bVar6 * -8 + 4;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## GetFieldMob

```asm
// === 086b9578 WarField::GetFieldMob  [0x086b9578-0x86b9671] ===
 86b9578:	55                   	push   %ebp
 86b9579:	89 e5                	mov    %esp,%ebp
 86b957b:	56                   	push   %esi
 86b957c:	53                   	push   %ebx
 86b957d:	81 ec 80 03 00 00    	sub    $0x380,%esp
 86b9583:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 86b9589:	89 04 24             	mov    %eax,(%esp)
 86b958c:	e8 bb 8e a9 ff       	call   815244c <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEC1Ev>
 86b9591:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9594:	8d 48 14             	lea    0x14(%eax),%ecx
 86b9597:	8d 85 94 fc ff ff    	lea    -0x36c(%ebp),%eax
 86b959d:	8d 55 0c             	lea    0xc(%ebp),%edx
 86b95a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b95a4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b95a8:	89 04 24             	mov    %eax,(%esp)
 86b95ab:	e8 aa 8e a9 ff       	call   815245a <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 86b95b0:	83 ec 04             	sub    $0x4,%esp
 86b95b3:	8b 85 94 fc ff ff    	mov    -0x36c(%ebp),%eax
 86b95b9:	89 85 a4 fc ff ff    	mov    %eax,-0x35c(%ebp)
 86b95bf:	8b 45 08             	mov    0x8(%ebp),%eax
 86b95c2:	8d 50 14             	lea    0x14(%eax),%edx
 86b95c5:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 86b95cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b95cf:	89 04 24             	mov    %eax,(%esp)
 86b95d2:	e8 af 8e a9 ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86b95d7:	83 ec 04             	sub    $0x4,%esp
 86b95da:	8d 85 a8 fc ff ff    	lea    -0x358(%ebp),%eax
 86b95e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b95e4:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 86b95ea:	89 04 24             	mov    %eax,(%esp)
 86b95ed:	e8 2e b1 a9 ff       	call   8154720 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEeqERKS4_>
 86b95f2:	84 c0                	test   %al,%al
 86b95f4:	74 07                	je     86b95fd <_ZN8WarField11GetFieldMobEiR11map_monster+0x85>
 86b95f6:	b8 00 00 00 00       	mov    $0x0,%eax
 86b95fb:	eb 6b                	jmp    86b9668 <_ZN8WarField11GetFieldMobEiR11map_monster+0xf0>
 86b95fd:	8d 85 a4 fc ff ff    	lea    -0x35c(%ebp),%eax
 86b9603:	89 04 24             	mov    %eax,(%esp)
 86b9606:	e8 41 90 a9 ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 86b960b:	83 c0 04             	add    $0x4,%eax
 86b960e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9612:	8d 85 ac fc ff ff    	lea    -0x354(%ebp),%eax
 86b9618:	89 04 24             	mov    %eax,(%esp)
 86b961b:	e8 ca 84 a9 ff       	call   8151aea <_ZN11map_monsterC1ERKS_>
 86b9620:	8d 85 ac fc ff ff    	lea    -0x354(%ebp),%eax
 86b9626:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b962a:	8b 45 10             	mov    0x10(%ebp),%eax
 86b962d:	89 04 24             	mov    %eax,(%esp)
 86b9630:	e8 05 87 a9 ff       	call   8151d3a <_ZN11map_monsteraSERKS_>
 86b9635:	eb 1e                	jmp    86b9655 <_ZN8WarField11GetFieldMobEiR11map_monster+0xdd>
 86b9637:	89 d3                	mov    %edx,%ebx
 86b9639:	89 c6                	mov    %eax,%esi
 86b963b:	8d 85 ac fc ff ff    	lea    -0x354(%ebp),%eax
 86b9641:	89 04 24             	mov    %eax,(%esp)
 86b9644:	e8 65 7f a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b9649:	89 f0                	mov    %esi,%eax
 86b964b:	89 da                	mov    %ebx,%edx
 86b964d:	89 04 24             	mov    %eax,(%esp)
 86b9650:	e8 fb a0 42 00       	call   8ae3750 <_Unwind_Resume>
 86b9655:	8d 85 ac fc ff ff    	lea    -0x354(%ebp),%eax
 86b965b:	89 04 24             	mov    %eax,(%esp)
 86b965e:	e8 4b 7f a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b9663:	b8 01 00 00 00       	mov    $0x1,%eax
 86b9668:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b966b:	83 c4 00             	add    $0x0,%esp
 86b966e:	5b                   	pop    %ebx
 86b966f:	5e                   	pop    %esi
 86b9670:	5d                   	pop    %ebp
 86b9671:	c3                   	ret

```

```c
// WarField::GetFieldMob @ 0x86b9578

/* WarField::GetFieldMob(int, map_monster&) */

bool __thiscall WarField::GetFieldMob(WarField *this,int param_1,map_monster *param_2)

{
  char cVar1;
  int iVar2;
  int local_370 [4];
  int local_360;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_35c [4]
  ;
  map_monster local_358 [844];
  
  std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::_Rb_tree_iterator
            ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            (local_370);
  local_360 = local_370[0];
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_35c);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360,
                     (_Rb_tree_iterator *)local_35c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)&local_360);
    map_monster::map_monster(local_358,(map_monster *)(iVar2 + 4));
                    /* try { // try from 086b9630 to 086b9634 has its CatchHandler @ 086b9637 */
    map_monster::operator=(param_2,local_358);
    map_monster::~map_monster(local_358);
  }
  return cVar1 == '\0';
}

```

---

## HandleMonsterKill

```asm
// === 086b9672 WarField::HandleMonsterKill  [0x086b9672-0x86b9fe5] ===
 86b9672:	55                   	push   %ebp
 86b9673:	89 e5                	mov    %esp,%ebp
 86b9675:	57                   	push   %edi
 86b9676:	56                   	push   %esi
 86b9677:	53                   	push   %ebx
 86b9678:	81 ec bc 01 00 00    	sub    $0x1bc,%esp
 86b967e:	c7 45 c0 ff ff 00 00 	movl   $0xffff,-0x40(%ebp)
 86b9685:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 86b968c:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86b9690:	0f 84 a1 00 00 00    	je     86b9737 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0xc5>
 86b9696:	8b 45 18             	mov    0x18(%ebp),%eax
 86b9699:	89 04 24             	mov    %eax,(%esp)
 86b969c:	e8 db 0c a2 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 86b96a1:	0f b7 c0             	movzwl %ax,%eax
 86b96a4:	89 45 c0             	mov    %eax,-0x40(%ebp)
 86b96a7:	8b 45 18             	mov    0x18(%ebp),%eax
 86b96aa:	89 04 24             	mov    %eax,(%esp)
 86b96ad:	e8 c0 79 a4 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 86b96b2:	89 c6                	mov    %eax,%esi
 86b96b4:	8b 45 18             	mov    0x18(%ebp),%eax
 86b96b7:	89 04 24             	mov    %eax,(%esp)
 86b96ba:	e8 f9 0b a2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86b96bf:	89 c3                	mov    %eax,%ebx
 86b96c1:	e8 d5 2a a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b96c6:	89 74 24 08          	mov    %esi,0x8(%esp)
 86b96ca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b96ce:	89 04 24             	mov    %eax,(%esp)
 86b96d1:	e8 0a 76 ca ff       	call   8360ce0 <_ZNK12CDataManager21GetMoneyLimitPerLevelEiPKc>
 86b96d6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86b96d9:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 86b96dd:	7f 3f                	jg     86b971e <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0xac>
 86b96df:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86b96e6:	00 
 86b96e7:	c7 44 24 08 78 01 00 	movl   $0x178,0x8(%esp)
 86b96ee:	00 
 86b96ef:	c7 44 24 04 a0 93 cf 	movl   $0x8cf93a0,0x4(%esp)
 86b96f6:	08 
 86b96f7:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86b96fa:	89 04 24             	mov    %eax,(%esp)
 86b96fd:	e8 16 60 e9 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86b9702:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86b9705:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b9709:	c7 44 24 04 dc 86 cf 	movl   $0x8cf86dc,0x4(%esp)
 86b9710:	08 
 86b9711:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86b9714:	89 04 24             	mov    %eax,(%esp)
 86b9717:	e8 6c 60 e9 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86b971c:	eb 19                	jmp    86b9737 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0xc5>
 86b971e:	8b 45 18             	mov    0x18(%ebp),%eax
 86b9721:	89 04 24             	mov    %eax,(%esp)
 86b9724:	e8 5f 0a ac ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 86b9729:	6b c0 64             	imul   $0x64,%eax,%eax
 86b972c:	89 c2                	mov    %eax,%edx
 86b972e:	c1 fa 1f             	sar    $0x1f,%edx
 86b9731:	f7 7d d8             	idivl  -0x28(%ebp)
 86b9734:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86b9737:	8b 45 08             	mov    0x8(%ebp),%eax
 86b973a:	83 c0 08             	add    $0x8,%eax
 86b973d:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86b9740:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9743:	8d 48 0c             	lea    0xc(%eax),%ecx
 86b9746:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86b9749:	8d 55 0c             	lea    0xc(%ebp),%edx
 86b974c:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b9750:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86b9754:	89 04 24             	mov    %eax,(%esp)
 86b9757:	e8 fe 8c a9 ff       	call   815245a <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 86b975c:	83 ec 04             	sub    $0x4,%esp
 86b975f:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9762:	8d 50 0c             	lea    0xc(%eax),%edx
 86b9765:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86b9768:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b976c:	89 04 24             	mov    %eax,(%esp)
 86b976f:	e8 12 8d a9 ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86b9774:	83 ec 04             	sub    $0x4,%esp
 86b9777:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86b977a:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b977e:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86b9781:	89 04 24             	mov    %eax,(%esp)
 86b9784:	e8 97 af a9 ff       	call   8154720 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEeqERKS4_>
 86b9789:	84 c0                	test   %al,%al
 86b978b:	74 0a                	je     86b9797 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x125>
 86b978d:	bb 00 00 00 00       	mov    $0x0,%ebx
 86b9792:	e9 41 08 00 00       	jmp    86b9fd8 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x966>
 86b9797:	8d 45 a0             	lea    -0x60(%ebp),%eax
 86b979a:	89 04 24             	mov    %eax,(%esp)
 86b979d:	e8 aa 8e a9 ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 86b97a2:	83 c0 04             	add    $0x4,%eax
 86b97a5:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86b97a8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b97ab:	8b 58 0c             	mov    0xc(%eax),%ebx
 86b97ae:	e8 e8 29 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b97b3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b97b7:	89 04 24             	mov    %eax,(%esp)
 86b97ba:	e8 c5 65 ca ff       	call   835fd84 <_ZNK12CDataManager12find_monsterEi>
 86b97bf:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86b97c2:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86b97c6:	75 40                	jne    86b9808 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x196>
 86b97c8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b97cb:	8b 40 0c             	mov    0xc(%eax),%eax
 86b97ce:	89 44 24 14          	mov    %eax,0x14(%esp)
 86b97d2:	c7 44 24 10 14 87 cf 	movl   $0x8cf8714,0x10(%esp)
 86b97d9:	08 
 86b97da:	c7 44 24 0c 8c 01 00 	movl   $0x18c,0xc(%esp)
 86b97e1:	00 
 86b97e2:	c7 44 24 08 a0 93 cf 	movl   $0x8cf93a0,0x8(%esp)
 86b97e9:	08 
 86b97ea:	c7 44 24 04 08 86 cf 	movl   $0x8cf8608,0x4(%esp)
 86b97f1:	08 
 86b97f2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86b97f9:	e8 0c a4 41 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86b97fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 86b9803:	e9 d0 07 00 00       	jmp    86b9fd8 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x966>
 86b9808:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b980b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b980f:	8b 45 14             	mov    0x14(%ebp),%eax
 86b9812:	89 04 24             	mov    %eax,(%esp)
 86b9815:	e8 20 85 a9 ff       	call   8151d3a <_ZN11map_monsteraSERKS_>
 86b981a:	8b 45 10             	mov    0x10(%ebp),%eax
 86b981d:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 86b9824:	00 
 86b9825:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b982c:	00 
 86b982d:	89 04 24             	mov    %eax,(%esp)
 86b9830:	e8 c7 20 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b9835:	8b 55 0c             	mov    0xc(%ebp),%edx
 86b9838:	8b 45 10             	mov    0x10(%ebp),%eax
 86b983b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b983f:	89 04 24             	mov    %eax,(%esp)
 86b9842:	e8 5d 06 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b9847:	8d 45 98             	lea    -0x68(%ebp),%eax
 86b984a:	89 04 24             	mov    %eax,(%esp)
 86b984d:	e8 da 91 a9 ff       	call   8152a2c <_ZNSt4listI8map_itemSaIS0_EEC1Ev>
 86b9852:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 86b9859:	e8 40 24 a1 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 86b985e:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86b9861:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 86b9867:	89 04 24             	mov    %eax,(%esp)
 86b986a:	e8 97 0e a9 ff       	call   814a706 <_ZN8WongWork19stGenerateRefData_tC1Ev>
 86b986f:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86b9873:	74 3c                	je     86b98b1 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x23f>
 86b9875:	c7 85 f0 fe ff ff 64 	movl   $0x64,-0x110(%ebp)
 86b987c:	00 00 00 
 86b987f:	e8 62 8d aa ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 86b9884:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86b988b:	00 
 86b988c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86b9893:	00 
 86b9894:	89 04 24             	mov    %eax,(%esp)
 86b9897:	e8 c2 4e ab ff       	call   816e75e <_ZN22ServiceRestrictManager12isRestrictedEN16RestrictCategory4EnumEi>
 86b989c:	84 c0                	test   %al,%al
 86b989e:	74 11                	je     86b98b1 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x23f>
 86b98a0:	8b 45 18             	mov    0x18(%ebp),%eax
 86b98a3:	89 04 24             	mov    %eax,(%esp)
 86b98a6:	e8 7d 32 e3 ff       	call   84ecb28 <_ZN5CUser14getStdDropRateEv>
 86b98ab:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 86b98b1:	c6 85 27 ff ff ff 00 	movb   $0x0,-0xd9(%ebp)
 86b98b8:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b98bb:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86b98bf:	88 85 26 ff ff ff    	mov    %al,-0xda(%ebp)
 86b98c5:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b98c8:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 86b98cc:	88 85 25 ff ff ff    	mov    %al,-0xdb(%ebp)
 86b98d2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b98d5:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86b98d9:	88 85 24 ff ff ff    	mov    %al,-0xdc(%ebp)
 86b98df:	c6 85 28 ff ff ff 01 	movb   $0x1,-0xd8(%ebp)
 86b98e6:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b98e9:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 86b98ed:	88 85 29 ff ff ff    	mov    %al,-0xd7(%ebp)
 86b98f3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86b98f6:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 86b98fc:	c6 85 30 ff ff ff 01 	movb   $0x1,-0xd0(%ebp)
 86b9903:	c6 85 31 ff ff ff 00 	movb   $0x0,-0xcf(%ebp)
 86b990a:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86b9910:	89 04 24             	mov    %eax,(%esp)
 86b9913:	e8 ee 11 a9 ff       	call   814ab06 <_ZN8WongWork18stGenerateResult_tC1Ev>
 86b9918:	e8 7e 28 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b991d:	89 04 24             	mov    %eax,(%esp)
 86b9920:	e8 c5 0d a9 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 86b9925:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b992c:	00 
 86b992d:	89 04 24             	mov    %eax,(%esp)
 86b9930:	e8 9b 0e a9 ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 86b9935:	8b 10                	mov    (%eax),%edx
 86b9937:	83 c2 08             	add    $0x8,%edx
 86b993a:	8b 0a                	mov    (%edx),%ecx
 86b993c:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b9942:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b9946:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 86b994c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9950:	89 04 24             	mov    %eax,(%esp)
 86b9953:	ff d1                	call   *%ecx
 86b9955:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b9958:	8b 40 0c             	mov    0xc(%eax),%eax
 86b995b:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 86b9961:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b9964:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 86b9968:	88 85 2c ff ff ff    	mov    %al,-0xd4(%ebp)
 86b996e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b9971:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 86b9975:	88 85 2d ff ff ff    	mov    %al,-0xd3(%ebp)
 86b997b:	c6 85 26 ff ff ff 00 	movb   $0x0,-0xda(%ebp)
 86b9982:	c6 85 2e ff ff ff 01 	movb   $0x1,-0xd2(%ebp)
 86b9989:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b998c:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86b9990:	88 85 25 ff ff ff    	mov    %al,-0xdb(%ebp)
 86b9996:	c6 85 30 ff ff ff 00 	movb   $0x0,-0xd0(%ebp)
 86b999d:	c6 85 31 ff ff ff 00 	movb   $0x0,-0xcf(%ebp)
 86b99a4:	c6 85 33 ff ff ff 00 	movb   $0x0,-0xcd(%ebp)
 86b99ab:	c6 85 34 ff ff ff 00 	movb   $0x0,-0xcc(%ebp)
 86b99b2:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 86b99b6:	74 16                	je     86b99ce <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x35c>
 86b99b8:	8b 45 18             	mov    0x18(%ebp),%eax
 86b99bb:	89 04 24             	mov    %eax,(%esp)
 86b99be:	e8 d9 be a8 ff       	call   814589c <_ZN5CUser8isGMUserEv>
 86b99c3:	84 c0                	test   %al,%al
 86b99c5:	74 07                	je     86b99ce <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x35c>
 86b99c7:	b8 01 00 00 00       	mov    $0x1,%eax
 86b99cc:	eb 05                	jmp    86b99d3 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x361>
 86b99ce:	b8 00 00 00 00       	mov    $0x0,%eax
 86b99d3:	84 c0                	test   %al,%al
 86b99d5:	74 11                	je     86b99e8 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x376>
 86b99d7:	8b 45 18             	mov    0x18(%ebp),%eax
 86b99da:	89 04 24             	mov    %eax,(%esp)
 86b99dd:	e8 34 5d fd ff       	call   868f716 <_ZN5CUser16getForceDropFlagEv>
 86b99e2:	88 85 14 ff ff ff    	mov    %al,-0xec(%ebp)
 86b99e8:	e8 ae 27 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b99ed:	89 04 24             	mov    %eax,(%esp)
 86b99f0:	e8 f5 0c a9 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 86b99f5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b99fc:	00 
 86b99fd:	89 04 24             	mov    %eax,(%esp)
 86b9a00:	e8 cb 0d a9 ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 86b9a05:	8b 10                	mov    (%eax),%edx
 86b9a07:	83 c2 0c             	add    $0xc,%edx
 86b9a0a:	8b 0a                	mov    (%edx),%ecx
 86b9a0c:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b9a12:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b9a16:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 86b9a1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9a20:	89 04 24             	mov    %eax,(%esp)
 86b9a23:	ff d1                	call   *%ecx
 86b9a25:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86b9a28:	89 04 24             	mov    %eax,(%esp)
 86b9a2b:	e8 d4 4b c5 ff       	call   830e604 <_ZNK8CDungeon12getDropItemsEv>
 86b9a30:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 86b9a36:	e8 60 27 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b9a3b:	89 04 24             	mov    %eax,(%esp)
 86b9a3e:	e8 a7 0c a9 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 86b9a43:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86b9a4a:	00 
 86b9a4b:	89 04 24             	mov    %eax,(%esp)
 86b9a4e:	e8 7d 0d a9 ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 86b9a53:	8b 10                	mov    (%eax),%edx
 86b9a55:	83 c2 0c             	add    $0xc,%edx
 86b9a58:	8b 0a                	mov    (%edx),%ecx
 86b9a5a:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b9a60:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b9a64:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 86b9a6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9a6e:	89 04 24             	mov    %eax,(%esp)
 86b9a71:	ff d1                	call   *%ecx
 86b9a73:	c6 85 24 ff ff ff 01 	movb   $0x1,-0xdc(%ebp)
 86b9a7a:	8b 45 cc             	mov    -0x34(%ebp),%eax
 86b9a7d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 86b9a81:	88 85 25 ff ff ff    	mov    %al,-0xdb(%ebp)
 86b9a87:	e8 0f 27 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b9a8c:	89 04 24             	mov    %eax,(%esp)
 86b9a8f:	e8 56 0c a9 ff       	call   814a6ea <_ZN12CDataManager16getItemGeneratorEv>
 86b9a94:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 86b9a9b:	00 
 86b9a9c:	89 04 24             	mov    %eax,(%esp)
 86b9a9f:	e8 2c 0d a9 ff       	call   814a7d0 <_ZN8WongWork17CItemGeneratorMgr12getGeneratorENS0_15eGenerateType_tE>
 86b9aa4:	8b 10                	mov    (%eax),%edx
 86b9aa6:	83 c2 08             	add    $0x8,%edx
 86b9aa9:	8b 0a                	mov    (%edx),%ecx
 86b9aab:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b9ab1:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b9ab5:	8d 95 f0 fe ff ff    	lea    -0x110(%ebp),%edx
 86b9abb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9abf:	89 04 24             	mov    %eax,(%esp)
 86b9ac2:	ff d1                	call   *%ecx
 86b9ac4:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86b9aca:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b9ad0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9ad4:	89 04 24             	mov    %eax,(%esp)
 86b9ad7:	e8 28 12 a9 ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 86b9adc:	83 ec 04             	sub    $0x4,%esp
 86b9adf:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b9ae5:	8d 95 38 ff ff ff    	lea    -0xc8(%ebp),%edx
 86b9aeb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9aef:	89 04 24             	mov    %eax,(%esp)
 86b9af2:	e8 f3 8d a9 ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 86b9af7:	83 ec 04             	sub    $0x4,%esp
 86b9afa:	e9 20 01 00 00       	jmp    86b9c1f <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x5ad>
 86b9aff:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 86b9b05:	89 04 24             	mov    %eax,(%esp)
 86b9b08:	e8 bf 77 a9 ff       	call   81512cc <_ZN8map_itemC1Ev>
 86b9b0d:	c6 85 9c fe ff ff 01 	movb   $0x1,-0x164(%ebp)
 86b9b14:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9b17:	8b 40 40             	mov    0x40(%eax),%eax
 86b9b1a:	89 85 a0 fe ff ff    	mov    %eax,-0x160(%ebp)
 86b9b20:	8d 50 01             	lea    0x1(%eax),%edx
 86b9b23:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9b26:	89 50 40             	mov    %edx,0x40(%eax)
 86b9b29:	8b 45 c0             	mov    -0x40(%ebp),%eax
 86b9b2c:	66 89 85 a4 fe ff ff 	mov    %ax,-0x15c(%ebp)
 86b9b33:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86b9b36:	89 85 a8 fe ff ff    	mov    %eax,-0x158(%ebp)
 86b9b3c:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86b9b42:	89 04 24             	mov    %eax,(%esp)
 86b9b45:	e8 de 11 a9 ff       	call   814ad28 <_ZNK9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEdeEv>
 86b9b4a:	8b 10                	mov    (%eax),%edx
 86b9b4c:	89 95 ac fe ff ff    	mov    %edx,-0x154(%ebp)
 86b9b52:	8b 50 04             	mov    0x4(%eax),%edx
 86b9b55:	89 95 b0 fe ff ff    	mov    %edx,-0x150(%ebp)
 86b9b5b:	8b 50 08             	mov    0x8(%eax),%edx
 86b9b5e:	89 95 b4 fe ff ff    	mov    %edx,-0x14c(%ebp)
 86b9b64:	8b 50 0c             	mov    0xc(%eax),%edx
 86b9b67:	89 95 b8 fe ff ff    	mov    %edx,-0x148(%ebp)
 86b9b6d:	8b 50 10             	mov    0x10(%eax),%edx
 86b9b70:	89 95 bc fe ff ff    	mov    %edx,-0x144(%ebp)
 86b9b76:	8b 50 14             	mov    0x14(%eax),%edx
 86b9b79:	89 95 c0 fe ff ff    	mov    %edx,-0x140(%ebp)
 86b9b7f:	8b 50 18             	mov    0x18(%eax),%edx
 86b9b82:	89 95 c4 fe ff ff    	mov    %edx,-0x13c(%ebp)
 86b9b88:	8b 50 1c             	mov    0x1c(%eax),%edx
 86b9b8b:	89 95 c8 fe ff ff    	mov    %edx,-0x138(%ebp)
 86b9b91:	8b 50 20             	mov    0x20(%eax),%edx
 86b9b94:	89 95 cc fe ff ff    	mov    %edx,-0x134(%ebp)
 86b9b9a:	8b 50 24             	mov    0x24(%eax),%edx
 86b9b9d:	89 95 d0 fe ff ff    	mov    %edx,-0x130(%ebp)
 86b9ba3:	8b 50 28             	mov    0x28(%eax),%edx
 86b9ba6:	89 95 d4 fe ff ff    	mov    %edx,-0x12c(%ebp)
 86b9bac:	8b 50 2c             	mov    0x2c(%eax),%edx
 86b9baf:	89 95 d8 fe ff ff    	mov    %edx,-0x128(%ebp)
 86b9bb5:	8b 50 30             	mov    0x30(%eax),%edx
 86b9bb8:	89 95 dc fe ff ff    	mov    %edx,-0x124(%ebp)
 86b9bbe:	8b 50 34             	mov    0x34(%eax),%edx
 86b9bc1:	89 95 e0 fe ff ff    	mov    %edx,-0x120(%ebp)
 86b9bc7:	8b 50 38             	mov    0x38(%eax),%edx
 86b9bca:	89 95 e4 fe ff ff    	mov    %edx,-0x11c(%ebp)
 86b9bd0:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 86b9bd4:	88 85 e8 fe ff ff    	mov    %al,-0x118(%ebp)
 86b9bda:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 86b9be0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9be4:	8d 45 98             	lea    -0x68(%ebp),%eax
 86b9be7:	89 04 24             	mov    %eax,(%esp)
 86b9bea:	e8 63 8f a9 ff       	call   8152b52 <_ZNSt4listI8map_itemSaIS0_EE9push_backERKS0_>
 86b9bef:	8d 54 24 04          	lea    0x4(%esp),%edx
 86b9bf3:	8d 9d 9c fe ff ff    	lea    -0x164(%ebp),%ebx
 86b9bf9:	b8 15 00 00 00       	mov    $0x15,%eax
 86b9bfe:	89 d7                	mov    %edx,%edi
 86b9c00:	89 de                	mov    %ebx,%esi
 86b9c02:	89 c1                	mov    %eax,%ecx
 86b9c04:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 86b9c06:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9c09:	89 04 24             	mov    %eax,(%esp)
 86b9c0c:	e8 cf 7b a9 ff       	call   81517e0 <_ZN7MapInfo8Add_ItemE8map_item>
 86b9c11:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86b9c17:	89 04 24             	mov    %eax,(%esp)
 86b9c1a:	e8 1d 8d a9 ff       	call   815293c <_ZN9__gnu_cxx17__normal_iteratorIP10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 86b9c1f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b9c25:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9c29:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 86b9c2f:	89 04 24             	mov    %eax,(%esp)
 86b9c32:	e8 d9 8c a9 ff       	call   8152910 <_ZN9__gnu_cxxneIP10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 86b9c37:	84 c0                	test   %al,%al
 86b9c39:	0f 85 c0 fe ff ff    	jne    86b9aff <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x48d>
 86b9c3f:	8d 45 98             	lea    -0x68(%ebp),%eax
 86b9c42:	89 04 24             	mov    %eax,(%esp)
 86b9c45:	e8 e2 81 c5 ff       	call   8311e2c <_ZNKSt4listI8map_itemSaIS0_EE4sizeEv>
 86b9c4a:	89 c2                	mov    %eax,%edx
 86b9c4c:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9c4f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9c53:	89 04 24             	mov    %eax,(%esp)
 86b9c56:	e8 c5 1c a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9c5b:	8d 85 7a ff ff ff    	lea    -0x86(%ebp),%eax
 86b9c61:	89 04 24             	mov    %eax,(%esp)
 86b9c64:	e8 7f 6a a9 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 86b9c69:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86b9c6f:	8d 55 98             	lea    -0x68(%ebp),%edx
 86b9c72:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9c76:	89 04 24             	mov    %eax,(%esp)
 86b9c79:	e8 0a 8f a9 ff       	call   8152b88 <_ZNSt4listI8map_itemSaIS0_EE5beginEv>
 86b9c7e:	83 ec 04             	sub    $0x4,%esp
 86b9c81:	e9 90 02 00 00       	jmp    86b9f16 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x8a4>
 86b9c86:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86b9c8c:	89 04 24             	mov    %eax,(%esp)
 86b9c8f:	e8 28 82 c5 ff       	call   8311ebc <_ZNKSt14_List_iteratorI8map_itemEdeEv>
 86b9c94:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86b9c97:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9c9a:	8b 50 04             	mov    0x4(%eax),%edx
 86b9c9d:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9ca0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9ca4:	89 04 24             	mov    %eax,(%esp)
 86b9ca7:	e8 f8 01 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b9cac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9caf:	8b 40 12             	mov    0x12(%eax),%eax
 86b9cb2:	89 c2                	mov    %eax,%edx
 86b9cb4:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9cb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9cbb:	89 04 24             	mov    %eax,(%esp)
 86b9cbe:	e8 79 1c a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b9cc3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9cc6:	83 c0 10             	add    $0x10,%eax
 86b9cc9:	89 04 24             	mov    %eax,(%esp)
 86b9ccc:	e8 0b 6b a9 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 86b9cd1:	0f b6 d0             	movzbl %al,%edx
 86b9cd4:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9cd7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9cdb:	89 04 24             	mov    %eax,(%esp)
 86b9cde:	e8 3d 1c a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9ce3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9ce6:	83 c0 10             	add    $0x10,%eax
 86b9ce9:	89 04 24             	mov    %eax,(%esp)
 86b9cec:	e8 0f 6b a9 ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 86b9cf1:	84 c0                	test   %al,%al
 86b9cf3:	0f 84 ad 00 00 00    	je     86b9da6 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x734>
 86b9cf9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9cfc:	8b 40 12             	mov    0x12(%eax),%eax
 86b9cff:	89 c3                	mov    %eax,%ebx
 86b9d01:	e8 95 24 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86b9d06:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b9d0a:	89 04 24             	mov    %eax,(%esp)
 86b9d0d:	e8 20 5d ca ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 86b9d12:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86b9d15:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 86b9d19:	75 22                	jne    86b9d3d <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x6cb>
 86b9d1b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9d1e:	83 c0 10             	add    $0x10,%eax
 86b9d21:	89 04 24             	mov    %eax,(%esp)
 86b9d24:	e8 11 db a3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 86b9d29:	8b 55 10             	mov    0x10(%ebp),%edx
 86b9d2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9d30:	89 14 24             	mov    %edx,(%esp)
 86b9d33:	e8 04 1c a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b9d38:	e9 86 00 00 00       	jmp    86b9dc3 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x751>
 86b9d3d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86b9d40:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86b9d43:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9d46:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 86b9d4a:	0f b6 d0             	movzbl %al,%edx
 86b9d4d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86b9d50:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9d54:	89 04 24             	mov    %eax,(%esp)
 86b9d57:	e8 c4 73 a9 ff       	call   8151120 <_ZNK10CEquipItem15getAvatarPeriodEh>
 86b9d5c:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 86b9d62:	89 c2                	mov    %eax,%edx
 86b9d64:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9d67:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9d6b:	89 04 24             	mov    %eax,(%esp)
 86b9d6e:	e8 c9 1b a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b9d73:	8d 85 7a ff ff ff    	lea    -0x86(%ebp),%eax
 86b9d79:	89 04 24             	mov    %eax,(%esp)
 86b9d7c:	e8 67 69 a9 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 86b9d81:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9d84:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 86b9d88:	0f b7 c0             	movzwl %ax,%eax
 86b9d8b:	8d 95 7a ff ff ff    	lea    -0x86(%ebp),%edx
 86b9d91:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b9d95:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9d99:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b9d9c:	89 04 24             	mov    %eax,(%esp)
 86b9d9f:	e8 92 71 a9 ff       	call   8150f36 <_ZNK10CEquipItem15getAvatarSocketEiR20stAvatarEmblemInfo_t>
 86b9da4:	eb 1d                	jmp    86b9dc3 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x751>
 86b9da6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9da9:	83 c0 10             	add    $0x10,%eax
 86b9dac:	89 04 24             	mov    %eax,(%esp)
 86b9daf:	e8 86 da a3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 86b9db4:	8b 55 10             	mov    0x10(%ebp),%edx
 86b9db7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9dbb:	89 14 24             	mov    %edx,(%esp)
 86b9dbe:	e8 79 1b a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b9dc3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9dc6:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 86b9dca:	0f b7 d0             	movzwl %ax,%edx
 86b9dcd:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9dd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9dd4:	89 04 24             	mov    %eax,(%esp)
 86b9dd7:	e8 c8 00 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b9ddc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9ddf:	83 c0 21             	add    $0x21,%eax
 86b9de2:	89 04 24             	mov    %eax,(%esp)
 86b9de5:	e8 48 69 a9 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 86b9dea:	0f b6 d0             	movzbl %al,%edx
 86b9ded:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9df0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9df4:	89 04 24             	mov    %eax,(%esp)
 86b9df7:	e8 24 1b a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9dfc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9dff:	83 c0 21             	add    $0x21,%eax
 86b9e02:	89 04 24             	mov    %eax,(%esp)
 86b9e05:	e8 68 69 a9 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 86b9e0a:	0f b7 d0             	movzwl %ax,%edx
 86b9e0d:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9e10:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9e14:	89 04 24             	mov    %eax,(%esp)
 86b9e17:	e8 88 00 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b9e1c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9e1f:	8d 50 10             	lea    0x10(%eax),%edx
 86b9e22:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9e25:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9e29:	89 04 24             	mov    %eax,(%esp)
 86b9e2c:	e8 5d 6b a9 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 86b9e31:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9e34:	83 c0 10             	add    $0x10,%eax
 86b9e37:	89 04 24             	mov    %eax,(%esp)
 86b9e3a:	e8 c1 69 a9 ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 86b9e3f:	84 c0                	test   %al,%al
 86b9e41:	0f 84 83 00 00 00    	je     86b9eca <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x858>
 86b9e47:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9e4a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b9e51:	00 
 86b9e52:	89 04 24             	mov    %eax,(%esp)
 86b9e55:	e8 c6 1a a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9e5a:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9e5d:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 86b9e64:	00 
 86b9e65:	89 04 24             	mov    %eax,(%esp)
 86b9e68:	e8 cf 1a a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b9e6d:	8d 95 7a ff ff ff    	lea    -0x86(%ebp),%edx
 86b9e73:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9e76:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 86b9e7d:	00 
 86b9e7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9e82:	89 04 24             	mov    %eax,(%esp)
 86b9e85:	e8 e0 6a a9 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 86b9e8a:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 86b9e90:	89 04 24             	mov    %eax,(%esp)
 86b9e93:	e8 86 a3 c7 ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 86b9e98:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9e9b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 86b9ea2:	00 
 86b9ea3:	89 04 24             	mov    %eax,(%esp)
 86b9ea6:	e8 91 1a a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b9eab:	8d 95 68 ff ff ff    	lea    -0x98(%ebp),%edx
 86b9eb1:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9eb4:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 86b9ebb:	00 
 86b9ebc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9ec0:	89 04 24             	mov    %eax,(%esp)
 86b9ec3:	e8 a2 6a a9 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 86b9ec8:	eb 13                	jmp    86b9edd <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x86b>
 86b9eca:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9ecd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b9ed4:	00 
 86b9ed5:	89 04 24             	mov    %eax,(%esp)
 86b9ed8:	e8 43 1a a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9edd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 86b9ee0:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 86b9ee4:	0f b7 d0             	movzwl %ax,%edx
 86b9ee7:	8b 45 10             	mov    0x10(%ebp),%eax
 86b9eea:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9eee:	89 04 24             	mov    %eax,(%esp)
 86b9ef1:	e8 ae ff a1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b9ef6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86b9ef9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b9f00:	00 
 86b9f01:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 86b9f07:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9f0b:	89 04 24             	mov    %eax,(%esp)
 86b9f0e:	e8 71 7f c5 ff       	call   8311e84 <_ZNSt14_List_iteratorI8map_itemEppEi>
 86b9f13:	83 ec 04             	sub    $0x4,%esp
 86b9f16:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b9f19:	8d 55 98             	lea    -0x68(%ebp),%edx
 86b9f1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9f20:	89 04 24             	mov    %eax,(%esp)
 86b9f23:	e8 96 8c a9 ff       	call   8152bbe <_ZNSt4listI8map_itemSaIS0_EE3endEv>
 86b9f28:	83 ec 04             	sub    $0x4,%esp
 86b9f2b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86b9f2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9f32:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 86b9f38:	89 04 24             	mov    %eax,(%esp)
 86b9f3b:	e8 30 7f c5 ff       	call   8311e70 <_ZNKSt14_List_iteratorI8map_itemEneERKS1_>
 86b9f40:	84 c0                	test   %al,%al
 86b9f42:	0f 85 3e fd ff ff    	jne    86b9c86 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x614>
 86b9f48:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86b9f4b:	8d 50 0c             	lea    0xc(%eax),%edx
 86b9f4e:	8b 45 a0             	mov    -0x60(%ebp),%eax
 86b9f51:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9f55:	89 14 24             	mov    %edx,(%esp)
 86b9f58:	e8 e9 79 c5 ff       	call   8311946 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5eraseESt17_Rb_tree_iteratorIS5_E>
 86b9f5d:	bb 01 00 00 00       	mov    $0x1,%ebx
 86b9f62:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86b9f68:	89 04 24             	mov    %eax,(%esp)
 86b9f6b:	e8 dc 0b a9 ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 86b9f70:	eb 30                	jmp    86b9fa2 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x930>
 86b9f72:	89 d3                	mov    %edx,%ebx
 86b9f74:	89 c6                	mov    %eax,%esi
 86b9f76:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 86b9f7c:	89 04 24             	mov    %eax,(%esp)
 86b9f7f:	e8 c8 0b a9 ff       	call   814ab4c <_ZN8WongWork18stGenerateResult_tD1Ev>
 86b9f84:	89 f0                	mov    %esi,%eax
 86b9f86:	89 da                	mov    %ebx,%edx
 86b9f88:	eb 00                	jmp    86b9f8a <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x918>
 86b9f8a:	89 d3                	mov    %edx,%ebx
 86b9f8c:	89 c6                	mov    %eax,%esi
 86b9f8e:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 86b9f94:	89 04 24             	mov    %eax,(%esp)
 86b9f97:	e8 54 0b a9 ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 86b9f9c:	89 f0                	mov    %esi,%eax
 86b9f9e:	89 da                	mov    %ebx,%edx
 86b9fa0:	eb 10                	jmp    86b9fb2 <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x940>
 86b9fa2:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 86b9fa8:	89 04 24             	mov    %eax,(%esp)
 86b9fab:	e8 40 0b a9 ff       	call   814aaf0 <_ZN8WongWork19stGenerateRefData_tD1Ev>
 86b9fb0:	eb 1b                	jmp    86b9fcd <_ZN8WarField17HandleMonsterKillEiR11PacketGuardR11map_monsterP5CUserPK8CDungeon+0x95b>
 86b9fb2:	89 d3                	mov    %edx,%ebx
 86b9fb4:	89 c6                	mov    %eax,%esi
 86b9fb6:	8d 45 98             	lea    -0x68(%ebp),%eax
 86b9fb9:	89 04 24             	mov    %eax,(%esp)
 86b9fbc:	e8 ad 7f a9 ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 86b9fc1:	89 f0                	mov    %esi,%eax
 86b9fc3:	89 da                	mov    %ebx,%edx
 86b9fc5:	89 04 24             	mov    %eax,(%esp)
 86b9fc8:	e8 83 97 42 00       	call   8ae3750 <_Unwind_Resume>
 86b9fcd:	8d 45 98             	lea    -0x68(%ebp),%eax
 86b9fd0:	89 04 24             	mov    %eax,(%esp)
 86b9fd3:	e8 96 7f a9 ff       	call   8151f6e <_ZNSt4listI8map_itemSaIS0_EED1Ev>
 86b9fd8:	89 d8                	mov    %ebx,%eax
 86b9fda:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86b9fdd:	83 c4 00             	add    $0x0,%esp
 86b9fe0:	5b                   	pop    %ebx
 86b9fe1:	5e                   	pop    %esi
 86b9fe2:	5f                   	pop    %edi
 86b9fe3:	5d                   	pop    %ebp
 86b9fe4:	c3                   	ret
 86b9fe5:	90                   	nop

```

```c
// WarField::HandleMonsterKill @ 0x86b9672

/* WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, CDungeon const*) */

undefined4 __thiscall
WarField::HandleMonsterKill
          (WarField *this,int param_1,PacketGuard *param_2,map_monster *param_3,CUser *param_4,
          CDungeon *param_5)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int iVar4;
  CDataManager *pCVar5;
  ServiceRestrictManager *pSVar6;
  CItemGeneratorMgr *pCVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  map_item *pmVar11;
  byte bVar12;
  map_item local_168 [4];
  int local_164;
  undefined2 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_114 [9];
  undefined1 local_f0;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined1 local_d3;
  undefined1 local_d1;
  undefined1 local_d0;
  stGenerateResult_t local_cc [48];
  stAvatarExpansionInfo_t local_9c [4];
  _List_iterator<map_item> local_98 [4];
  __normal_iterator local_94 [4];
  __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>> local_90 [6];
  stAvatarEmblemInfo_t local_8a [30];
  list<map_item,std::allocator<map_item>> local_6c [8];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_64 [4];
  cMyTrace local_60 [16];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_50 [4];
  _List_iterator local_4c [4];
  _List_iterator<map_item> local_48 [4];
  uint local_44;
  int local_40;
  WarField *local_3c;
  map_monster *local_38;
  int local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  CEquipItem *local_24;
  CEquipItem *local_20;
  
  bVar12 = 0;
  local_44 = 0xffff;
  local_40 = 0;
  if (param_4 != (CUser *)0x0) {
    local_44 = CUser::get_unique_id(param_4);
    local_44 = local_44 & 0xffff;
    pcVar3 = (char *)CUser::get_acc_name(param_4);
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_4);
    pCVar5 = (CDataManager *)G_CDataManager();
    local_2c = CDataManager::GetMoneyLimitPerLevel(pCVar5,iVar4,pcVar3);
    if (local_2c < 1) {
      cMyTrace::cMyTrace(local_60,
                         "bool WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, const CDungeon*)"
                         ,0x178,5);
      cMyTrace::operator()(local_60,"WarField::HandleMonsterKill limitMoney(%d) is under 0");
    }
    else {
      iVar4 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_4);
      local_40 = (iVar4 * 100) / local_2c;
    }
  }
  local_3c = this + 8;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_64);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_50);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    (local_64,(_Rb_tree_iterator *)local_50);
  if (cVar1 == '\0') {
    iVar4 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->(local_64);
    local_38 = (map_monster *)(iVar4 + 4);
    iVar4 = G_CDataManager();
    local_34 = CDataManager::find_monster(iVar4);
    if (local_34 != 0) {
      map_monster::operator=(param_3,local_38);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)param_2,0,0x26);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,param_1);
      std::list<map_item,std::allocator<map_item>>::list(local_6c);
      local_30 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
                    /* try { // try from 086b986a to 086b986e has its CatchHandler @ 086b9fb2 */
      WongWork::stGenerateRefData_t::stGenerateRefData_t((stGenerateRefData_t *)local_114);
      if (param_4 != (CUser *)0x0) {
        local_114[0] = 100;
                    /* try { // try from 086b987f to 086b9917 has its CatchHandler @ 086b9f8a */
        pSVar6 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
        cVar1 = ServiceRestrictManager::isRestricted(pSVar6);
        if (cVar1 != '\0') {
          local_114[0] = CUser::getStdDropRate(param_4);
        }
      }
      local_e0 = (uint)CONCAT21(CONCAT11(local_38[0x10],local_38[8]),local_38[0x10]);
      local_dc._0_2_ = CONCAT11(local_38[0x12],1);
      local_d8 = local_40;
      local_d4 = 1;
      local_d3 = 0;
      WongWork::stGenerateResult_t::stGenerateResult_t(local_cc);
                    /* try { // try from 086b9918 to 086b9f5c has its CatchHandler @ 086b9f72 */
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 8))(piVar8);
      iVar4 = local_d8;
      local_dc = *(undefined4 *)(local_38 + 0xc);
      uVar10 = local_e0 >> 0x10;
      local_d8._3_1_ = SUB41(iVar4,3);
      local_d8._0_3_ = CONCAT12(1,CONCAT11(local_38[0x11],local_38[8]));
      local_e0._0_2_ = CONCAT11(local_38[0x10],(undefined1)local_e0);
      local_e0 = CONCAT22((short)uVar10,(undefined2)local_e0) & 0xff00ffff;
      local_d4 = 0;
      local_d3 = 0;
      local_d1 = 0;
      local_d0 = 0;
      if ((param_4 == (CUser *)0x0) || (cVar1 = CUser::isGMUser(param_4), cVar1 == '\0')) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_f0 = CUser::getForceDropFlag(param_4);
      }
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 0xc))(piVar8);
      local_e0 = CDungeon::getDropItems(param_5);
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 0xc))(piVar8);
      local_e0._0_2_ = CONCAT11(local_38[0x10],1);
      pCVar5 = (CDataManager *)G_CDataManager();
      pCVar7 = (CItemGeneratorMgr *)CDataManager::getItemGenerator(pCVar5);
      piVar8 = (int *)WongWork::CItemGeneratorMgr::getGenerator(pCVar7);
      (**(code **)(*piVar8 + 8))(piVar8);
      std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
      std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
      while (bVar2 = __gnu_cxx::operator!=(local_90,local_94), bVar2) {
        map_item::map_item(local_168);
        local_168[0] = (map_item)0x1;
        local_164 = *(int *)(local_3c + 0x40);
        *(int *)(local_3c + 0x40) = local_164 + 1;
        local_160 = (undefined2)local_44;
        local_15c = local_30;
        puVar9 = (undefined4 *)
                 __gnu_cxx::
                 __normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
                 operator*(local_90);
        local_158 = *puVar9;
        local_154 = puVar9[1];
        local_150 = puVar9[2];
        local_14c = puVar9[3];
        local_148 = puVar9[4];
        local_144 = puVar9[5];
        local_140 = puVar9[6];
        local_13c = puVar9[7];
        local_138 = puVar9[8];
        local_134 = puVar9[9];
        local_130 = puVar9[10];
        local_12c = puVar9[0xb];
        local_128 = puVar9[0xc];
        local_124 = puVar9[0xd];
        local_120 = puVar9[0xe];
        local_11c = *(undefined1 *)(puVar9 + 0xf);
        std::list<map_item,std::allocator<map_item>>::push_back(local_6c,local_168);
        pmVar11 = local_168;
        puVar9 = (undefined4 *)&stack0xfffffe38;
        for (iVar4 = 0x15; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar9 = *(undefined4 *)pmVar11;
          pmVar11 = pmVar11 + ((uint)bVar12 * -2 + 1) * 4;
          puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
        }
        MapInfo::Add_Item(local_3c);
        __gnu_cxx::__normal_iterator<Inven_Item*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
        ::operator++(local_90);
      }
      iVar4 = std::list<map_item,std::allocator<map_item>>::size();
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,iVar4);
      stAvatarEmblemInfo_t::init(local_8a);
      std::list<map_item,std::allocator<map_item>>::begin();
      while( true ) {
        std::list<map_item,std::allocator<map_item>>::end();
        cVar1 = std::_List_iterator<map_item>::operator!=(local_98,local_4c);
        if (cVar1 == '\0') break;
        local_28 = std::_List_iterator<map_item>::operator*(local_98);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,*(int *)(local_28 + 4));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,*(int *)(local_28 + 0x12));
        uVar10 = Inven_Item::GetItemAttr((Inven_Item *)(local_28 + 0x10));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,uVar10 & 0xff);
        cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
        if (cVar1 == '\0') {
          iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar4);
        }
        else {
          iVar4 = *(int *)(local_28 + 0x12);
          pCVar5 = (CDataManager *)G_CDataManager();
          local_24 = (CEquipItem *)CDataManager::find_item(pCVar5,iVar4);
          if (local_24 == (CEquipItem *)0x0) {
            iVar4 = Inven_Item::get_add_info((Inven_Item *)(local_28 + 0x10));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar4);
          }
          else {
            local_20 = local_24;
            iVar4 = CEquipItem::getAvatarPeriod(local_24,(uchar)*(undefined2 *)(local_28 + 0x1b));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,iVar4 * 0x15180);
            stAvatarEmblemInfo_t::init(local_8a);
            CEquipItem::getAvatarSocket(local_20,(uint)*(ushort *)(local_28 + 0x1b),local_8a);
          }
        }
        InterfacePacketBuf::put_short
                  ((InterfacePacketBuf *)param_2,(uint)*(ushort *)(local_28 + 0x1b));
        uVar10 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_28 + 0x21));
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,uVar10 & 0xff);
        uVar10 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_28 + 0x21));
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,uVar10 & 0xffff);
        InterfacePacketBuf::put_packet
                  ((InterfacePacketBuf *)param_2,(Inven_Item *)(local_28 + 0x10));
        cVar1 = Inven_Item::isAvatarItemType((Inven_Item *)(local_28 + 0x10));
        if (cVar1 == '\0') {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,0);
        }
        else {
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,1);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,0x1e);
          InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_2,(char *)local_8a,0x1e);
          stAvatarExpansionInfo_t::init(local_9c);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)param_2,4);
          InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_2,(char *)local_9c,4);
        }
        InterfacePacketBuf::put_short((InterfacePacketBuf *)param_2,(uint)*(ushort *)(local_28 + 8))
        ;
        std::_List_iterator<map_item>::operator++(local_48,(int)local_98);
      }
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
      erase((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> *)
            (local_3c + 0xc));
                    /* try { // try from 086b9f6b to 086b9f6f has its CatchHandler @ 086b9f8a */
      WongWork::stGenerateResult_t::~stGenerateResult_t(local_cc);
                    /* try { // try from 086b9fab to 086b9faf has its CatchHandler @ 086b9fb2 */
      WongWork::stGenerateRefData_t::~stGenerateRefData_t((stGenerateRefData_t *)local_114);
      std::list<map_item,std::allocator<map_item>>::~list(local_6c);
      return 1;
    }
    LogManager::logFormat
              (1,"WarField.cpp",
               "bool WarField::HandleMonsterKill(int, PacketGuard&, map_monster&, CUser*, const CDungeon*)"
               ,0x18c,"G_CDataManager()->find_monster(%u) fail");
    return 0;
  }
  return 0;
}

```

---

## HandleWpPerMonster

```asm
// === 086ba1ea WarField::HandleWpPerMonster  [0x086ba1ea-0x86ba448] ===
 86ba1ea:	55                   	push   %ebp
 86ba1eb:	89 e5                	mov    %esp,%ebp
 86ba1ed:	83 ec 68             	sub    $0x68,%esp
 86ba1f0:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba1f3:	83 c0 08             	add    $0x8,%eax
 86ba1f6:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86ba1f9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86ba1fc:	8d 48 0c             	lea    0xc(%eax),%ecx
 86ba1ff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86ba202:	8d 55 10             	lea    0x10(%ebp),%edx
 86ba205:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ba209:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ba20d:	89 04 24             	mov    %eax,(%esp)
 86ba210:	e8 45 82 a9 ff       	call   815245a <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 86ba215:	83 ec 04             	sub    $0x4,%esp
 86ba218:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86ba21b:	8d 50 0c             	lea    0xc(%eax),%edx
 86ba21e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ba221:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba225:	89 04 24             	mov    %eax,(%esp)
 86ba228:	e8 59 82 a9 ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86ba22d:	83 ec 04             	sub    $0x4,%esp
 86ba230:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ba233:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba237:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86ba23a:	89 04 24             	mov    %eax,(%esp)
 86ba23d:	e8 de a4 a9 ff       	call   8154720 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEeqERKS4_>
 86ba242:	84 c0                	test   %al,%al
 86ba244:	74 0a                	je     86ba250 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x66>
 86ba246:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba24b:	e9 f7 01 00 00       	jmp    86ba447 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x25d>
 86ba250:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86ba253:	89 04 24             	mov    %eax,(%esp)
 86ba256:	e8 f1 83 a9 ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 86ba25b:	83 c0 04             	add    $0x4,%eax
 86ba25e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86ba261:	e8 35 1f a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ba266:	05 d4 88 00 00       	add    $0x88d4,%eax
 86ba26b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ba26e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86ba271:	8d 55 14             	lea    0x14(%ebp),%edx
 86ba274:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ba278:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ba27b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba27f:	89 04 24             	mov    %eax,(%esp)
 86ba282:	e8 4b 02 00 00       	call   86ba4d2 <_ZNSt3mapIi10stWarPointSt7greaterIiESaISt4pairIKiS0_EEE4findERS4_>
 86ba287:	83 ec 04             	sub    $0x4,%esp
 86ba28a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ba28d:	8d 50 30             	lea    0x30(%eax),%edx
 86ba290:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba293:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ba297:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ba29a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba29e:	89 04 24             	mov    %eax,(%esp)
 86ba2a1:	e8 2c 02 00 00       	call   86ba4d2 <_ZNSt3mapIi10stWarPointSt7greaterIiESaISt4pairIKiS0_EEE4findERS4_>
 86ba2a6:	83 ec 04             	sub    $0x4,%esp
 86ba2a9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ba2ac:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ba2af:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba2b3:	89 04 24             	mov    %eax,(%esp)
 86ba2b6:	e8 43 02 00 00       	call   86ba4fe <_ZNSt3mapIi10stWarPointSt7greaterIiESaISt4pairIKiS0_EEE3endEv>
 86ba2bb:	83 ec 04             	sub    $0x4,%esp
 86ba2be:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ba2c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba2c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86ba2c8:	89 04 24             	mov    %eax,(%esp)
 86ba2cb:	e8 54 02 00 00       	call   86ba524 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEeqERKS4_>
 86ba2d0:	84 c0                	test   %al,%al
 86ba2d2:	74 0a                	je     86ba2de <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0xf4>
 86ba2d4:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba2d9:	e9 69 01 00 00       	jmp    86ba447 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x25d>
 86ba2de:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86ba2e1:	89 04 24             	mov    %eax,(%esp)
 86ba2e4:	e8 4f 02 00 00       	call   86ba538 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEppEv>
 86ba2e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86ba2ec:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ba2ef:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba2f3:	89 04 24             	mov    %eax,(%esp)
 86ba2f6:	e8 03 02 00 00       	call   86ba4fe <_ZNSt3mapIi10stWarPointSt7greaterIiESaISt4pairIKiS0_EEE3endEv>
 86ba2fb:	83 ec 04             	sub    $0x4,%esp
 86ba2fe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86ba301:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba305:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba308:	89 04 24             	mov    %eax,(%esp)
 86ba30b:	e8 14 02 00 00       	call   86ba524 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEeqERKS4_>
 86ba310:	84 c0                	test   %al,%al
 86ba312:	74 0a                	je     86ba31e <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x134>
 86ba314:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba319:	e9 29 01 00 00       	jmp    86ba447 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x25d>
 86ba31e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba321:	89 04 24             	mov    %eax,(%esp)
 86ba324:	e8 0f 02 00 00       	call   86ba538 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEppEv>
 86ba329:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ba32c:	8b 50 30             	mov    0x30(%eax),%edx
 86ba32f:	8b 45 14             	mov    0x14(%ebp),%eax
 86ba332:	39 c2                	cmp    %eax,%edx
 86ba334:	7f 0a                	jg     86ba340 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x156>
 86ba336:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba33b:	e9 07 01 00 00       	jmp    86ba447 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x25d>
 86ba340:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ba347:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 86ba34a:	89 04 24             	mov    %eax,(%esp)
 86ba34d:	e8 26 b9 fd ff       	call   8695c78 <_ZN18WpBonusPointResultC1Ev>
 86ba352:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ba355:	89 04 24             	mov    %eax,(%esp)
 86ba358:	e8 ff 48 fd ff       	call   868ec5c <_ZN15CUserCharacInfo15checkBonusPointEv>
 86ba35d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ba360:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 86ba363:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba367:	89 04 24             	mov    %eax,(%esp)
 86ba36a:	e8 b7 4a fd ff       	call   868ee26 <_ZN15CUserCharacInfo15getWpBonusPointER18WpBonusPointResult>
 86ba36f:	eb 27                	jmp    86ba398 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x1ae>
 86ba371:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba374:	89 04 24             	mov    %eax,(%esp)
 86ba377:	e8 ee 01 00 00       	call   86ba56a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEptEv>
 86ba37c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ba37f:	0f b6 52 08          	movzbl 0x8(%edx),%edx
 86ba383:	0f be d2             	movsbl %dl,%edx
 86ba386:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 86ba38a:	01 45 f4             	add    %eax,-0xc(%ebp)
 86ba38d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba390:	89 04 24             	mov    %eax,(%esp)
 86ba393:	e8 a0 01 00 00       	call   86ba538 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEppEv>
 86ba398:	8d 45 d0             	lea    -0x30(%ebp),%eax
 86ba39b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba39f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba3a2:	89 04 24             	mov    %eax,(%esp)
 86ba3a5:	e8 ac 01 00 00       	call   86ba556 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEneERKS4_>
 86ba3aa:	84 c0                	test   %al,%al
 86ba3ac:	74 32                	je     86ba3e0 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x1f6>
 86ba3ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba3b1:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ba3b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ba3b8:	89 04 24             	mov    %eax,(%esp)
 86ba3bb:	e8 3e 01 00 00       	call   86ba4fe <_ZNSt3mapIi10stWarPointSt7greaterIiESaISt4pairIKiS0_EEE3endEv>
 86ba3c0:	83 ec 04             	sub    $0x4,%esp
 86ba3c3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ba3c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba3ca:	8d 45 cc             	lea    -0x34(%ebp),%eax
 86ba3cd:	89 04 24             	mov    %eax,(%esp)
 86ba3d0:	e8 81 01 00 00       	call   86ba556 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10stWarPointEEneERKS4_>
 86ba3d5:	84 c0                	test   %al,%al
 86ba3d7:	74 07                	je     86ba3e0 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x1f6>
 86ba3d9:	b8 01 00 00 00       	mov    $0x1,%eax
 86ba3de:	eb 05                	jmp    86ba3e5 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x1fb>
 86ba3e0:	b8 00 00 00 00       	mov    $0x0,%eax
 86ba3e5:	84 c0                	test   %al,%al
 86ba3e7:	75 88                	jne    86ba371 <_ZN8WarField18HandleWpPerMonsterEP5CUseriiR11map_monster+0x187>
 86ba3e9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86ba3ec:	01 45 f4             	add    %eax,-0xc(%ebp)
 86ba3ef:	db 45 f4             	fildl  -0xc(%ebp)
 86ba3f2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86ba3f5:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 86ba3f8:	db 45 b4             	fildl  -0x4c(%ebp)
 86ba3fb:	d9 05 60 94 cf 08    	flds   0x8cf9460
 86ba401:	de f9                	fdivrp %st,%st(1)
 86ba403:	de c9                	fmulp  %st,%st(1)
 86ba405:	d9 05 64 94 cf 08    	flds   0x8cf9464
 86ba40b:	de c1                	faddp  %st,%st(1)
 86ba40d:	d9 7d b2             	fnstcw -0x4e(%ebp)
 86ba410:	0f b7 45 b2          	movzwl -0x4e(%ebp),%eax
 86ba414:	b4 0c                	mov    $0xc,%ah
 86ba416:	66 89 45 b0          	mov    %ax,-0x50(%ebp)
 86ba41a:	d9 6d b0             	fldcw  -0x50(%ebp)
 86ba41d:	db 5d b4             	fistpl -0x4c(%ebp)
 86ba420:	d9 6d b2             	fldcw  -0x4e(%ebp)
 86ba423:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 86ba426:	01 45 f4             	add    %eax,-0xc(%ebp)
 86ba429:	8b 55 14             	mov    0x14(%ebp),%edx
 86ba42c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ba42f:	89 50 30             	mov    %edx,0x30(%eax)
 86ba432:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ba435:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba439:	8b 45 18             	mov    0x18(%ebp),%eax
 86ba43c:	89 04 24             	mov    %eax,(%esp)
 86ba43f:	e8 f6 78 a9 ff       	call   8151d3a <_ZN11map_monsteraSERKS_>
 86ba444:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ba447:	c9                   	leave
 86ba448:	c3                   	ret

```

```c
// WarField::HandleWpPerMonster @ 0x86ba1ea

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WarField::HandleWpPerMonster(CUser*, int, int, map_monster&) */

int __thiscall
WarField::HandleWpPerMonster
          (WarField *this,CUser *param_1,int param_2,int param_3,map_monster *param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int local_40;
  int local_3c;
  _Rb_tree_iterator<std::pair<int_const,stWarPoint>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,stWarPoint>> local_34 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_30 [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_2c [4];
  map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>> local_28 [4]
  ;
  map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>> local_24 [4]
  ;
  map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>> local_20 [4]
  ;
  WarField *local_1c;
  map_monster *local_18;
  int local_14;
  int local_10;
  
  local_1c = this + 8;
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::find
            ((int *)local_30);
  std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
            (local_2c);
  cVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator==
                    (local_30,(_Rb_tree_iterator *)local_2c);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->(local_30);
    local_18 = (map_monster *)(iVar3 + 4);
    local_14 = G_CDataManager();
    local_14 = local_14 + 0x88d4;
    std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::find
              ((int *)local_34);
    std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::find
              ((int *)local_38);
    std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::end
              (local_28);
    cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator==
                      (local_34,(_Rb_tree_iterator *)local_28);
    if (cVar2 == '\0') {
      std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator++(local_34);
      std::map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::
      end(local_24);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator==
                        (local_38,(_Rb_tree_iterator *)local_24);
      if ((cVar2 == '\0') &&
         (std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator++(local_38),
         param_3 < *(int *)(local_18 + 0x30))) {
        local_10 = 0;
        WpBonusPointResult::WpBonusPointResult((WpBonusPointResult *)&local_40);
        CUserCharacInfo::checkBonusPoint((CUserCharacInfo *)param_1);
        CUserCharacInfo::getWpBonusPoint((CUserCharacInfo *)param_1,(WpBonusPointResult *)&local_40)
        ;
        do {
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator!=
                            (local_38,(_Rb_tree_iterator *)local_34);
          if (cVar2 == '\0') {
LAB_086ba3e0:
            bVar1 = false;
          }
          else {
            std::
            map<int,stWarPoint,std::greater<int>,std::allocator<std::pair<int_const,stWarPoint>>>::
            end(local_20);
            cVar2 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator!=
                              (local_38,(_Rb_tree_iterator *)local_20);
            if (cVar2 == '\0') goto LAB_086ba3e0;
            bVar1 = true;
          }
          if (!bVar1) {
            local_10 = local_10 + local_40 +
                       (int)ROUND(_DAT_08cf9464 +
                                  ((float)local_3c / _DAT_08cf9460) * (float)(local_10 + local_40));
            *(int *)(local_18 + 0x30) = param_3;
            map_monster::operator=(param_4,local_18);
            return local_10;
          }
          iVar3 = std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator->(local_38);
          local_10 = local_10 + *(int *)(iVar3 + 4 + (char)local_18[8] * 4);
          std::_Rb_tree_iterator<std::pair<int_const,stWarPoint>>::operator++(local_38);
        } while( true );
      }
    }
  }
  return 0;
}

```

---

## IsGridClear

```asm
// === 086b954c WarField::IsGridClear  [0x086b954c-0x86b9577] ===
 86b954c:	55                   	push   %ebp
 86b954d:	89 e5                	mov    %esp,%ebp
 86b954f:	83 ec 18             	sub    $0x18,%esp
 86b9552:	8b 45 08             	mov    0x8(%ebp),%eax
 86b9555:	83 c0 14             	add    $0x14,%eax
 86b9558:	89 04 24             	mov    %eax,(%esp)
 86b955b:	e8 06 94 a9 ff       	call   8152966 <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 86b9560:	85 c0                	test   %eax,%eax
 86b9562:	0f 95 c0             	setne  %al
 86b9565:	84 c0                	test   %al,%al
 86b9567:	74 07                	je     86b9570 <_ZN8WarField11IsGridClearEv+0x24>
 86b9569:	b8 00 00 00 00       	mov    $0x0,%eax
 86b956e:	eb 05                	jmp    86b9575 <_ZN8WarField11IsGridClearEv+0x29>
 86b9570:	b8 01 00 00 00       	mov    $0x1,%eax
 86b9575:	c9                   	leave
 86b9576:	c3                   	ret
 86b9577:	90                   	nop

```

```c
// WarField::IsGridClear @ 0x86b954c

/* WarField::IsGridClear() */

bool __thiscall WarField::IsGridClear(WarField *this)

{
  int iVar1;
  
  iVar1 = std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
          ::size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
  return iVar1 == 0;
}

```

---

## MakePacket

```asm
// === 086b92e2 WarField::MakePacket  [0x086b92e2-0x86b954b] ===
 86b92e2:	55                   	push   %ebp
 86b92e3:	89 e5                	mov    %esp,%ebp
 86b92e5:	56                   	push   %esi
 86b92e6:	53                   	push   %ebx
 86b92e7:	81 ec 70 03 00 00    	sub    $0x370,%esp
 86b92ed:	8b 45 10             	mov    0x10(%ebp),%eax
 86b92f0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b92f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b92f6:	83 f8 1d             	cmp    $0x1d,%eax
 86b92f9:	0f 85 43 02 00 00    	jne    86b9542 <_ZN8WarField10MakePacketEiPv+0x260>
 86b92ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9302:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 86b9309:	00 
 86b930a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b9311:	00 
 86b9312:	89 04 24             	mov    %eax,(%esp)
 86b9315:	e8 e2 25 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b931a:	e8 81 49 9c ff       	call   807dca0 <rand@plt>
 86b931f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86b9322:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b9326:	89 14 24             	mov    %edx,(%esp)
 86b9329:	e8 0e 26 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b932e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9331:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b9338:	00 
 86b9339:	89 04 24             	mov    %eax,(%esp)
 86b933c:	e8 df 25 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9341:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9344:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b934b:	00 
 86b934c:	89 04 24             	mov    %eax,(%esp)
 86b934f:	e8 cc 25 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9354:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9357:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b935e:	00 
 86b935f:	89 04 24             	mov    %eax,(%esp)
 86b9362:	e8 b9 25 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9367:	8b 45 08             	mov    0x8(%ebp),%eax
 86b936a:	8b 50 0c             	mov    0xc(%eax),%edx
 86b936d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9370:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9374:	89 04 24             	mov    %eax,(%esp)
 86b9377:	e8 28 0b a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b937c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b937f:	83 c0 14             	add    $0x14,%eax
 86b9382:	89 04 24             	mov    %eax,(%esp)
 86b9385:	e8 dc 95 a9 ff       	call   8152966 <_ZNKSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE4sizeEv>
 86b938a:	89 c2                	mov    %eax,%edx
 86b938c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b938f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9393:	89 04 24             	mov    %eax,(%esp)
 86b9396:	e8 85 25 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b939b:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 86b93a1:	89 04 24             	mov    %eax,(%esp)
 86b93a4:	e8 1f 7e a9 ff       	call   81511c8 <_ZN11map_monsterC1Ev>
 86b93a9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b93ac:	8d 50 14             	lea    0x14(%eax),%edx
 86b93af:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b93b2:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b93b6:	89 04 24             	mov    %eax,(%esp)
 86b93b9:	e8 4a 92 a9 ff       	call   8152608 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 86b93be:	83 ec 04             	sub    $0x4,%esp
 86b93c1:	e9 f6 00 00 00       	jmp    86b94bc <_ZN8WarField10MakePacketEiPv+0x1da>
 86b93c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b93c9:	89 04 24             	mov    %eax,(%esp)
 86b93cc:	e8 7b 92 a9 ff       	call   815264c <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEptEv>
 86b93d1:	83 c0 04             	add    $0x4,%eax
 86b93d4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b93d8:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 86b93de:	89 04 24             	mov    %eax,(%esp)
 86b93e1:	e8 54 89 a9 ff       	call   8151d3a <_ZN11map_monsteraSERKS_>
 86b93e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b93e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b93f0:	00 
 86b93f1:	89 04 24             	mov    %eax,(%esp)
 86b93f4:	e8 ab 0a a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b93f9:	8b 95 9c fc ff ff    	mov    -0x364(%ebp),%edx
 86b93ff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9402:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9406:	89 04 24             	mov    %eax,(%esp)
 86b9409:	e8 2e 25 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b940e:	8b 85 a0 fc ff ff    	mov    -0x360(%ebp),%eax
 86b9414:	0f bf d0             	movswl %ax,%edx
 86b9417:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b941a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b941e:	89 04 24             	mov    %eax,(%esp)
 86b9421:	e8 7e 0a a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b9426:	8b 95 a8 fc ff ff    	mov    -0x358(%ebp),%edx
 86b942c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b942f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9433:	89 04 24             	mov    %eax,(%esp)
 86b9436:	e8 01 25 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86b943b:	0f b6 85 ac fc ff ff 	movzbl -0x354(%ebp),%eax
 86b9442:	0f b6 d0             	movzbl %al,%edx
 86b9445:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9448:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b944c:	89 04 24             	mov    %eax,(%esp)
 86b944f:	e8 cc 24 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9454:	0f b6 85 a4 fc ff ff 	movzbl -0x35c(%ebp),%eax
 86b945b:	0f be d0             	movsbl %al,%edx
 86b945e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9461:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9465:	89 04 24             	mov    %eax,(%esp)
 86b9468:	e8 b3 24 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b946d:	0f b6 85 af fc ff ff 	movzbl -0x351(%ebp),%eax
 86b9474:	0f b6 d0             	movzbl %al,%edx
 86b9477:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b947a:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b947e:	89 04 24             	mov    %eax,(%esp)
 86b9481:	e8 9a 24 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9486:	0f b6 85 b0 fc ff ff 	movzbl -0x350(%ebp),%eax
 86b948d:	0f b6 d0             	movzbl %al,%edx
 86b9490:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9493:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b9497:	89 04 24             	mov    %eax,(%esp)
 86b949a:	e8 81 24 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b949f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b94a2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b94a9:	00 
 86b94aa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86b94ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b94b1:	89 04 24             	mov    %eax,(%esp)
 86b94b4:	e8 d3 c6 a9 ff       	call   8155b8c <_ZNSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEppEi>
 86b94b9:	83 ec 04             	sub    $0x4,%esp
 86b94bc:	8b 45 08             	mov    0x8(%ebp),%eax
 86b94bf:	8d 50 14             	lea    0x14(%eax),%edx
 86b94c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b94c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b94c9:	89 04 24             	mov    %eax,(%esp)
 86b94cc:	e8 b5 8f a9 ff       	call   8152486 <_ZNSt3mapIi11map_monsterSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 86b94d1:	83 ec 04             	sub    $0x4,%esp
 86b94d4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b94d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b94db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b94de:	89 04 24             	mov    %eax,(%esp)
 86b94e1:	e8 c6 8f a9 ff       	call   81524ac <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11map_monsterEEneERKS4_>
 86b94e6:	84 c0                	test   %al,%al
 86b94e8:	0f 85 d8 fe ff ff    	jne    86b93c6 <_ZN8WarField10MakePacketEiPv+0xe4>
 86b94ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b94f1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b94f8:	00 
 86b94f9:	89 04 24             	mov    %eax,(%esp)
 86b94fc:	e8 1f 24 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b9501:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b9504:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b950b:	00 
 86b950c:	89 04 24             	mov    %eax,(%esp)
 86b950f:	e8 44 24 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b9514:	eb 1e                	jmp    86b9534 <_ZN8WarField10MakePacketEiPv+0x252>
 86b9516:	89 d3                	mov    %edx,%ebx
 86b9518:	89 c6                	mov    %eax,%esi
 86b951a:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 86b9520:	89 04 24             	mov    %eax,(%esp)
 86b9523:	e8 86 80 a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b9528:	89 f0                	mov    %esi,%eax
 86b952a:	89 da                	mov    %ebx,%edx
 86b952c:	89 04 24             	mov    %eax,(%esp)
 86b952f:	e8 1c a2 42 00       	call   8ae3750 <_Unwind_Resume>
 86b9534:	8d 85 9c fc ff ff    	lea    -0x364(%ebp),%eax
 86b953a:	89 04 24             	mov    %eax,(%esp)
 86b953d:	e8 6c 80 a9 ff       	call   81515ae <_ZN11map_monsterD1Ev>
 86b9542:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b9545:	83 c4 00             	add    $0x0,%esp
 86b9548:	5b                   	pop    %ebx
 86b9549:	5e                   	pop    %esi
 86b954a:	5d                   	pop    %ebp
 86b954b:	c3                   	ret

```

```c
// WarField::MakePacket @ 0x86b92e2

/* WarField::MakePacket(int, void*) */

void __thiscall WarField::MakePacket(WarField *this,int param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int local_368 [2];
  char local_360;
  int local_35c;
  byte local_358;
  byte local_355;
  byte local_354;
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_1c [4];
  map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>> local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,map_monster>> local_14 [4];
  InterfacePacketBuf *local_10;
  
  local_10 = param_2;
  if (param_1 == 0x1d) {
    InterfacePacketBuf::put_header(param_2,0,0x1d);
    iVar2 = rand();
    InterfacePacketBuf::put_int(local_10,iVar2);
    InterfacePacketBuf::put_byte(local_10,0);
    InterfacePacketBuf::put_byte(local_10,0);
    InterfacePacketBuf::put_byte(local_10,1);
    InterfacePacketBuf::put_short(local_10,*(int *)(this + 0xc));
    iVar2 = std::
            map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::
            size((map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>
                  *)(this + 0x14));
    InterfacePacketBuf::put_byte(local_10,iVar2);
    map_monster::map_monster((map_monster *)local_368);
                    /* try { // try from 086b93b9 to 086b9513 has its CatchHandler @ 086b9516 */
    std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::begin
              (local_1c);
    while( true ) {
      std::map<int,map_monster,std::less<int>,std::allocator<std::pair<int_const,map_monster>>>::end
                (local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,map_monster>> *)local_1c);
      map_monster::operator=((map_monster *)local_368,(map_monster *)(iVar2 + 4));
      InterfacePacketBuf::put_short(local_10,0);
      InterfacePacketBuf::put_int(local_10,local_368[0]);
      InterfacePacketBuf::put_short(local_10,(int)(short)local_368[1]);
      InterfacePacketBuf::put_int(local_10,local_35c);
      InterfacePacketBuf::put_byte(local_10,(uint)local_358);
      InterfacePacketBuf::put_byte(local_10,(int)local_360);
      InterfacePacketBuf::put_byte(local_10,(uint)local_355);
      InterfacePacketBuf::put_byte(local_10,(uint)local_354);
      std::_Rb_tree_iterator<std::pair<int_const,map_monster>>::operator++(local_14,(int)local_1c);
    }
    InterfacePacketBuf::put_byte(local_10,0);
    InterfacePacketBuf::finalize(local_10,true);
    map_monster::~map_monster((map_monster *)local_368);
  }
  return;
}

```

---

## PickupItem

```asm
// === 086ba082 WarField::PickupItem  [0x086ba082-0x86ba09f] ===
 86ba082:	55                   	push   %ebp
 86ba083:	89 e5                	mov    %esp,%ebp
 86ba085:	83 ec 18             	sub    $0x18,%esp
 86ba088:	8b 45 08             	mov    0x8(%ebp),%eax
 86ba08b:	8d 50 2c             	lea    0x2c(%eax),%edx
 86ba08e:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ba091:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ba095:	89 14 24             	mov    %edx,(%esp)
 86ba098:	e8 57 7f c5 ff       	call   8311ff4 <_ZNSt3mapIi8map_itemSt4lessIiESaISt4pairIKiS0_EEE5eraseESt17_Rb_tree_iteratorIS5_E>
 86ba09d:	c9                   	leave
 86ba09e:	c3                   	ret
 86ba09f:	90                   	nop

```

```c
// WarField::PickupItem @ 0x86ba082

/* WarField::PickupItem(std::_Rb_tree_iterator<std::pair<int const, map_item> >) */

void __thiscall WarField::PickupItem(WarField *this,undefined4 param_2)

{
  std::map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>>::erase
            ((map<int,map_item,std::less<int>,std::allocator<std::pair<int_const,map_item>>> *)
             (this + 0x2c),param_2);
  return;
}

```

---

## Reset

```asm
// === 086b8a14 WarField::Reset  [0x086b8a14-0x86b8a37] ===
 86b8a14:	55                   	push   %ebp
 86b8a15:	89 e5                	mov    %esp,%ebp
 86b8a17:	83 ec 18             	sub    $0x18,%esp
 86b8a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8a1d:	83 c0 08             	add    $0x8,%eax
 86b8a20:	89 04 24             	mov    %eax,(%esp)
 86b8a23:	e8 86 8a a9 ff       	call   81514ae <_ZN7MapInfo5ClearEv>
 86b8a28:	8b 45 08             	mov    0x8(%ebp),%eax
 86b8a2b:	c7 80 f4 00 00 00 00 	movl   $0x0,0xf4(%eax)
 86b8a32:	00 00 00 
 86b8a35:	c9                   	leave
 86b8a36:	c3                   	ret
 86b8a37:	90                   	nop

```

```c
// WarField::Reset @ 0x86b8a14

/* WarField::Reset() */

void __thiscall WarField::Reset(WarField *this)

{
  MapInfo::Clear((MapInfo *)(this + 8));
  *(undefined4 *)(this + 0xf4) = 0;
  return;
}

```

