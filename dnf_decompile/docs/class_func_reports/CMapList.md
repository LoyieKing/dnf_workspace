# CMapList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## CMapList

```asm
// === 0834ed24 CMapList::CMapList  [0x0834ed24-0x834ef03] ===
 834ed24:	55                   	push   %ebp
 834ed25:	89 e5                	mov    %esp,%ebp
 834ed27:	57                   	push   %edi
 834ed28:	56                   	push   %esi
 834ed29:	53                   	push   %ebx
 834ed2a:	83 ec 2c             	sub    $0x2c,%esp
 834ed2d:	8b 45 08             	mov    0x8(%ebp),%eax
 834ed30:	89 04 24             	mov    %eax,(%esp)
 834ed33:	e8 50 88 03 00       	call   8387588 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 834ed38:	8b 45 08             	mov    0x8(%ebp),%eax
 834ed3b:	8d 70 14             	lea    0x14(%eax),%esi
 834ed3e:	89 f7                	mov    %esi,%edi
 834ed40:	bb 0f 00 00 00       	mov    $0xf,%ebx
 834ed45:	eb 0e                	jmp    834ed55 <_ZN8CMapListC1Ev+0x31>
 834ed47:	89 3c 24             	mov    %edi,(%esp)
 834ed4a:	e8 39 88 03 00       	call   8387588 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 834ed4f:	83 c7 14             	add    $0x14,%edi
 834ed52:	83 eb 01             	sub    $0x1,%ebx
 834ed55:	83 fb ff             	cmp    $0xffffffff,%ebx
 834ed58:	0f 95 c0             	setne  %al
 834ed5b:	84 c0                	test   %al,%al
 834ed5d:	75 e8                	jne    834ed47 <_ZN8CMapListC1Ev+0x23>
 834ed5f:	eb 3a                	jmp    834ed9b <_ZN8CMapListC1Ev+0x77>
 834ed61:	89 d7                	mov    %edx,%edi
 834ed63:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834ed66:	85 f6                	test   %esi,%esi
 834ed68:	74 27                	je     834ed91 <_ZN8CMapListC1Ev+0x6d>
 834ed6a:	b8 0f 00 00 00       	mov    $0xf,%eax
 834ed6f:	29 d8                	sub    %ebx,%eax
 834ed71:	89 c2                	mov    %eax,%edx
 834ed73:	89 d0                	mov    %edx,%eax
 834ed75:	c1 e0 02             	shl    $0x2,%eax
 834ed78:	01 d0                	add    %edx,%eax
 834ed7a:	c1 e0 02             	shl    $0x2,%eax
 834ed7d:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 834ed80:	39 f3                	cmp    %esi,%ebx
 834ed82:	74 0d                	je     834ed91 <_ZN8CMapListC1Ev+0x6d>
 834ed84:	83 eb 14             	sub    $0x14,%ebx
 834ed87:	89 1c 24             	mov    %ebx,(%esp)
 834ed8a:	e8 85 51 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834ed8f:	eb ef                	jmp    834ed80 <_ZN8CMapListC1Ev+0x5c>
 834ed91:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834ed94:	89 fa                	mov    %edi,%edx
 834ed96:	e9 4e 01 00 00       	jmp    834eee9 <_ZN8CMapListC1Ev+0x1c5>
 834ed9b:	8b 45 08             	mov    0x8(%ebp),%eax
 834ed9e:	8d b0 54 01 00 00    	lea    0x154(%eax),%esi
 834eda4:	89 f7                	mov    %esi,%edi
 834eda6:	bb 0f 00 00 00       	mov    $0xf,%ebx
 834edab:	eb 0e                	jmp    834edbb <_ZN8CMapListC1Ev+0x97>
 834edad:	89 3c 24             	mov    %edi,(%esp)
 834edb0:	e8 d3 87 03 00       	call   8387588 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 834edb5:	83 c7 14             	add    $0x14,%edi
 834edb8:	83 eb 01             	sub    $0x1,%ebx
 834edbb:	83 fb ff             	cmp    $0xffffffff,%ebx
 834edbe:	0f 95 c0             	setne  %al
 834edc1:	84 c0                	test   %al,%al
 834edc3:	75 e8                	jne    834edad <_ZN8CMapListC1Ev+0x89>
 834edc5:	eb 3a                	jmp    834ee01 <_ZN8CMapListC1Ev+0xdd>
 834edc7:	89 d7                	mov    %edx,%edi
 834edc9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 834edcc:	85 f6                	test   %esi,%esi
 834edce:	74 27                	je     834edf7 <_ZN8CMapListC1Ev+0xd3>
 834edd0:	b8 0f 00 00 00       	mov    $0xf,%eax
 834edd5:	29 d8                	sub    %ebx,%eax
 834edd7:	89 c2                	mov    %eax,%edx
 834edd9:	89 d0                	mov    %edx,%eax
 834eddb:	c1 e0 02             	shl    $0x2,%eax
 834edde:	01 d0                	add    %edx,%eax
 834ede0:	c1 e0 02             	shl    $0x2,%eax
 834ede3:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 834ede6:	39 f3                	cmp    %esi,%ebx
 834ede8:	74 0d                	je     834edf7 <_ZN8CMapListC1Ev+0xd3>
 834edea:	83 eb 14             	sub    $0x14,%ebx
 834eded:	89 1c 24             	mov    %ebx,(%esp)
 834edf0:	e8 1f 51 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834edf5:	eb ef                	jmp    834ede6 <_ZN8CMapListC1Ev+0xc2>
 834edf7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834edfa:	89 fa                	mov    %edi,%edx
 834edfc:	e9 b3 00 00 00       	jmp    834eeb4 <_ZN8CMapListC1Ev+0x190>
 834ee01:	8b 45 08             	mov    0x8(%ebp),%eax
 834ee04:	8d b0 94 02 00 00    	lea    0x294(%eax),%esi
 834ee0a:	89 f7                	mov    %esi,%edi
 834ee0c:	bb 0f 00 00 00       	mov    $0xf,%ebx
 834ee11:	eb 0e                	jmp    834ee21 <_ZN8CMapListC1Ev+0xfd>
 834ee13:	89 3c 24             	mov    %edi,(%esp)
 834ee16:	e8 6d 87 03 00       	call   8387588 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 834ee1b:	83 c7 14             	add    $0x14,%edi
 834ee1e:	83 eb 01             	sub    $0x1,%ebx
 834ee21:	83 fb ff             	cmp    $0xffffffff,%ebx
 834ee24:	0f 95 c0             	setne  %al
 834ee27:	84 c0                	test   %al,%al
 834ee29:	75 e8                	jne    834ee13 <_ZN8CMapListC1Ev+0xef>
 834ee2b:	eb 47                	jmp    834ee74 <_ZN8CMapListC1Ev+0x150>
 834ee2d:	89 d7                	mov    %edx,%edi
 834ee2f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834ee32:	85 f6                	test   %esi,%esi
 834ee34:	74 27                	je     834ee5d <_ZN8CMapListC1Ev+0x139>
 834ee36:	b8 0f 00 00 00       	mov    $0xf,%eax
 834ee3b:	29 d8                	sub    %ebx,%eax
 834ee3d:	89 c2                	mov    %eax,%edx
 834ee3f:	89 d0                	mov    %edx,%eax
 834ee41:	c1 e0 02             	shl    $0x2,%eax
 834ee44:	01 d0                	add    %edx,%eax
 834ee46:	c1 e0 02             	shl    $0x2,%eax
 834ee49:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 834ee4c:	39 f3                	cmp    %esi,%ebx
 834ee4e:	74 0d                	je     834ee5d <_ZN8CMapListC1Ev+0x139>
 834ee50:	83 eb 14             	sub    $0x14,%ebx
 834ee53:	89 1c 24             	mov    %ebx,(%esp)
 834ee56:	e8 b9 50 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834ee5b:	eb ef                	jmp    834ee4c <_ZN8CMapListC1Ev+0x128>
 834ee5d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834ee60:	89 fa                	mov    %edi,%edx
 834ee62:	89 d6                	mov    %edx,%esi
 834ee64:	89 c7                	mov    %eax,%edi
 834ee66:	8b 45 08             	mov    0x8(%ebp),%eax
 834ee69:	05 54 01 00 00       	add    $0x154,%eax
 834ee6e:	85 c0                	test   %eax,%eax
 834ee70:	74 3e                	je     834eeb0 <_ZN8CMapListC1Ev+0x18c>
 834ee72:	eb 15                	jmp    834ee89 <_ZN8CMapListC1Ev+0x165>
 834ee74:	8b 45 08             	mov    0x8(%ebp),%eax
 834ee77:	c7 80 d4 03 00 00 00 	movl   $0x0,0x3d4(%eax)
 834ee7e:	00 00 00 
 834ee81:	83 c4 2c             	add    $0x2c,%esp
 834ee84:	5b                   	pop    %ebx
 834ee85:	5e                   	pop    %esi
 834ee86:	5f                   	pop    %edi
 834ee87:	5d                   	pop    %ebp
 834ee88:	c3                   	ret
 834ee89:	8b 45 08             	mov    0x8(%ebp),%eax
 834ee8c:	05 54 01 00 00       	add    $0x154,%eax
 834ee91:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834ee97:	8b 45 08             	mov    0x8(%ebp),%eax
 834ee9a:	05 54 01 00 00       	add    $0x154,%eax
 834ee9f:	39 c3                	cmp    %eax,%ebx
 834eea1:	74 0d                	je     834eeb0 <_ZN8CMapListC1Ev+0x18c>
 834eea3:	83 eb 14             	sub    $0x14,%ebx
 834eea6:	89 1c 24             	mov    %ebx,(%esp)
 834eea9:	e8 66 50 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834eeae:	eb e7                	jmp    834ee97 <_ZN8CMapListC1Ev+0x173>
 834eeb0:	89 f8                	mov    %edi,%eax
 834eeb2:	89 f2                	mov    %esi,%edx
 834eeb4:	89 d6                	mov    %edx,%esi
 834eeb6:	89 c7                	mov    %eax,%edi
 834eeb8:	8b 45 08             	mov    0x8(%ebp),%eax
 834eebb:	83 c0 14             	add    $0x14,%eax
 834eebe:	85 c0                	test   %eax,%eax
 834eec0:	74 23                	je     834eee5 <_ZN8CMapListC1Ev+0x1c1>
 834eec2:	8b 45 08             	mov    0x8(%ebp),%eax
 834eec5:	83 c0 14             	add    $0x14,%eax
 834eec8:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834eece:	8b 45 08             	mov    0x8(%ebp),%eax
 834eed1:	83 c0 14             	add    $0x14,%eax
 834eed4:	39 c3                	cmp    %eax,%ebx
 834eed6:	74 0d                	je     834eee5 <_ZN8CMapListC1Ev+0x1c1>
 834eed8:	83 eb 14             	sub    $0x14,%ebx
 834eedb:	89 1c 24             	mov    %ebx,(%esp)
 834eede:	e8 31 50 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834eee3:	eb e9                	jmp    834eece <_ZN8CMapListC1Ev+0x1aa>
 834eee5:	89 f8                	mov    %edi,%eax
 834eee7:	89 f2                	mov    %esi,%edx
 834eee9:	89 d3                	mov    %edx,%ebx
 834eeeb:	89 c6                	mov    %eax,%esi
 834eeed:	8b 45 08             	mov    0x8(%ebp),%eax
 834eef0:	89 04 24             	mov    %eax,(%esp)
 834eef3:	e8 1c 50 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834eef8:	89 f0                	mov    %esi,%eax
 834eefa:	89 da                	mov    %ebx,%edx
 834eefc:	89 04 24             	mov    %eax,(%esp)
 834eeff:	e8 4c 48 79 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CMapList::CMapList @ 0x834ed24

/* CMapList::CMapList() */

void __thiscall CMapList::CMapList(CMapList *this)

{
  int iVar1;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *phVar2;
  
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  hash_map((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)this
          );
  phVar2 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)this
  ;
  for (iVar1 = 0xf; phVar2 = phVar2 + 0x14, iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0834ed4a to 0834ed4e has its CatchHandler @ 0834ed61 */
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    hash_map(phVar2);
  }
  phVar2 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
           (this + 0x154);
  for (iVar1 = 0xf; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0834edb0 to 0834edb4 has its CatchHandler @ 0834edc7 */
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    hash_map(phVar2);
    phVar2 = phVar2 + 0x14;
  }
  phVar2 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
           (this + 0x294);
  for (iVar1 = 0xf; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0834ee16 to 0834ee1a has its CatchHandler @ 0834ee2d */
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    hash_map(phVar2);
    phVar2 = phVar2 + 0x14;
  }
  *(undefined4 *)(this + 0x3d4) = 0;
  return;
}

```

---

## GetPvpMapInfo

```asm
// === 0834f5c8 CMapList::GetPvpMapInfo  [0x0834f5c8-0x834f64f] ===
 834f5c8:	55                   	push   %ebp
 834f5c9:	89 e5                	mov    %esp,%ebp
 834f5cb:	83 ec 28             	sub    $0x28,%esp
 834f5ce:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f5d1:	8d 55 08             	lea    0x8(%ebp),%edx
 834f5d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 834f5d8:	c7 44 24 04 4c c1 43 	movl   $0x943c14c,0x4(%esp)
 834f5df:	09 
 834f5e0:	89 04 24             	mov    %eax,(%esp)
 834f5e3:	e8 d6 c8 03 00       	call   838bebe <_ZNSt3mapIi10PvPMapInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 834f5e8:	83 ec 04             	sub    $0x4,%esp
 834f5eb:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834f5ee:	c7 44 24 04 4c c1 43 	movl   $0x943c14c,0x4(%esp)
 834f5f5:	09 
 834f5f6:	89 04 24             	mov    %eax,(%esp)
 834f5f9:	e8 5a c8 03 00       	call   838be58 <_ZNSt3mapIi10PvPMapInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 834f5fe:	83 ec 04             	sub    $0x4,%esp
 834f601:	8d 45 f4             	lea    -0xc(%ebp),%eax
 834f604:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f608:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f60b:	89 04 24             	mov    %eax,(%esp)
 834f60e:	e8 6b c8 03 00       	call   838be7e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10PvPMapInfoEEneERKS4_>
 834f613:	84 c0                	test   %al,%al
 834f615:	74 31                	je     834f648 <_ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo+0x80>
 834f617:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f61a:	89 04 24             	mov    %eax,(%esp)
 834f61d:	e8 8e c8 03 00       	call   838beb0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10PvPMapInfoEEptEv>
 834f622:	83 c0 04             	add    $0x4,%eax
 834f625:	39 45 0c             	cmp    %eax,0xc(%ebp)
 834f628:	74 17                	je     834f641 <_ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo+0x79>
 834f62a:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 834f631:	00 
 834f632:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f636:	8b 45 0c             	mov    0xc(%ebp),%eax
 834f639:	89 04 24             	mov    %eax,(%esp)
 834f63c:	e8 5f e2 d2 ff       	call   807d8a0 <memcpy@plt>
 834f641:	b8 01 00 00 00       	mov    $0x1,%eax
 834f646:	eb 05                	jmp    834f64d <_ZN8CMapList13GetPvpMapInfoEiR10PvPMapInfo+0x85>
 834f648:	b8 00 00 00 00       	mov    $0x0,%eax
 834f64d:	c9                   	leave
 834f64e:	c3                   	ret
 834f64f:	90                   	nop

```

```c
// CMapList::GetPvpMapInfo @ 0x834f5c8

/* CMapList::GetPvpMapInfo(int, PvPMapInfo&) */

undefined4 CMapList::GetPvpMapInfo(int param_1,PvPMapInfo *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> local_14 [4];
  map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>> local_10 [12];
  
  std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::find
            ((int *)local_14);
  std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator->(local_14);
    if (param_2 != (PvPMapInfo *)(iVar2 + 4)) {
      memcpy(param_2,(PvPMapInfo *)(iVar2 + 4),5);
    }
    uVar3 = 1;
  }
  return uVar3;
}

```

---

## LoadPvPSinglePlayableMap

```asm
// === 0834f4ba CMapList::LoadPvPSinglePlayableMap  [0x0834f4ba-0x834f5c7] ===
 834f4ba:	55                   	push   %ebp
 834f4bb:	89 e5                	mov    %esp,%ebp
 834f4bd:	56                   	push   %esi
 834f4be:	53                   	push   %ebx
 834f4bf:	81 ec c0 02 00 00    	sub    $0x2c0,%esp
 834f4c5:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 834f4cb:	89 04 24             	mov    %eax,(%esp)
 834f4ce:	e8 85 03 d3 ff       	call   807f858 <_ZN14CNRDScriptDataC1Ev>
 834f4d3:	8b 45 08             	mov    0x8(%ebp),%eax
 834f4d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f4da:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 834f4e0:	89 04 24             	mov    %eax,(%esp)
 834f4e3:	e8 44 06 d3 ff       	call   807fb2c <_ZN14CNRDScriptData6importEPKc>
 834f4e8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834f4eb:	c7 44 24 04 4c c1 43 	movl   $0x943c14c,0x4(%esp)
 834f4f2:	09 
 834f4f3:	89 04 24             	mov    %eax,(%esp)
 834f4f6:	e8 37 c9 03 00       	call   838be32 <_ZNSt3mapIi10PvPMapInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 834f4fb:	83 ec 04             	sub    $0x4,%esp
 834f4fe:	eb 5f                	jmp    834f55f <_ZN8CMapList24LoadPvPSinglePlayableMapEPc+0xa5>
 834f500:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834f503:	89 04 24             	mov    %eax,(%esp)
 834f506:	e8 a5 c9 03 00       	call   838beb0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10PvPMapInfoEEptEv>
 834f50b:	83 c0 04             	add    $0x4,%eax
 834f50e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834f511:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834f514:	8b 00                	mov    (%eax),%eax
 834f516:	89 44 24 08          	mov    %eax,0x8(%esp)
 834f51a:	c7 44 24 04 af ff c2 	movl   $0x8c2ffaf,0x4(%esp)
 834f521:	08 
 834f522:	8d 85 48 fd ff ff    	lea    -0x2b8(%ebp),%eax
 834f528:	89 04 24             	mov    %eax,(%esp)
 834f52b:	e8 10 ef d2 ff       	call   807e440 <sprintf@plt>
 834f530:	8d 85 48 fd ff ff    	lea    -0x2b8(%ebp),%eax
 834f536:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f53a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 834f540:	89 04 24             	mov    %eax,(%esp)
 834f543:	e8 42 09 d3 ff       	call   807fe8a <_ZNK14CNRDScriptData6getIntEPKc>
 834f548:	83 f8 01             	cmp    $0x1,%eax
 834f54b:	0f 94 c2             	sete   %dl
 834f54e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834f551:	88 50 04             	mov    %dl,0x4(%eax)
 834f554:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834f557:	89 04 24             	mov    %eax,(%esp)
 834f55a:	e8 33 c9 03 00       	call   838be92 <_ZNSt17_Rb_tree_iteratorISt4pairIKi10PvPMapInfoEEppEv>
 834f55f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f562:	c7 44 24 04 4c c1 43 	movl   $0x943c14c,0x4(%esp)
 834f569:	09 
 834f56a:	89 04 24             	mov    %eax,(%esp)
 834f56d:	e8 e6 c8 03 00       	call   838be58 <_ZNSt3mapIi10PvPMapInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 834f572:	83 ec 04             	sub    $0x4,%esp
 834f575:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f578:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f57c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834f57f:	89 04 24             	mov    %eax,(%esp)
 834f582:	e8 f7 c8 03 00       	call   838be7e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi10PvPMapInfoEEneERKS4_>
 834f587:	84 c0                	test   %al,%al
 834f589:	0f 85 71 ff ff ff    	jne    834f500 <_ZN8CMapList24LoadPvPSinglePlayableMapEPc+0x46>
 834f58f:	eb 1e                	jmp    834f5af <_ZN8CMapList24LoadPvPSinglePlayableMapEPc+0xf5>
 834f591:	89 d3                	mov    %edx,%ebx
 834f593:	89 c6                	mov    %eax,%esi
 834f595:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 834f59b:	89 04 24             	mov    %eax,(%esp)
 834f59e:	e8 c3 03 d3 ff       	call   807f966 <_ZN14CNRDScriptDataD1Ev>
 834f5a3:	89 f0                	mov    %esi,%eax
 834f5a5:	89 da                	mov    %ebx,%edx
 834f5a7:	89 04 24             	mov    %eax,(%esp)
 834f5aa:	e8 a1 41 79 00       	call   8ae3750 <_Unwind_Resume>
 834f5af:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 834f5b5:	89 04 24             	mov    %eax,(%esp)
 834f5b8:	e8 a9 03 d3 ff       	call   807f966 <_ZN14CNRDScriptDataD1Ev>
 834f5bd:	8d 65 f8             	lea    -0x8(%ebp),%esp
 834f5c0:	83 c4 00             	add    $0x0,%esp
 834f5c3:	5b                   	pop    %ebx
 834f5c4:	5e                   	pop    %esi
 834f5c5:	5d                   	pop    %ebp
 834f5c6:	c3                   	ret
 834f5c7:	90                   	nop

```

```c
// CMapList::LoadPvPSinglePlayableMap @ 0x834f4ba

/* CMapList::LoadPvPSinglePlayableMap(char*) */

void CMapList::LoadPvPSinglePlayableMap(char *param_1)

{
  char cVar1;
  int iVar2;
  char local_2bc [512];
  CNRDScriptData local_bc [164];
  map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>> local_18 [4];
  map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>> local_14 [4];
  undefined4 *local_10;
  
  CNRDScriptData::CNRDScriptData(local_bc);
                    /* try { // try from 0834f4e3 to 0834f571 has its CatchHandler @ 0834f591 */
  CNRDScriptData::import(local_bc,param_1);
  std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::begin
            (local_18);
  while( true ) {
    std::map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>::end
              (local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> *)local_18,
                       (_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> *)local_18);
    local_10 = (undefined4 *)(iVar2 + 4);
    sprintf(local_2bc,"pvp deathmatch single play %d",*local_10);
    iVar2 = CNRDScriptData::getInt((char *)local_bc);
    *(bool *)(local_10 + 1) = iVar2 == 1;
    std::_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,PvPMapInfo>> *)local_18);
  }
  CNRDScriptData::~CNRDScriptData(local_bc);
  return;
}

```

---

## destroy

```asm
// === 0834f08c CMapList::destroy  [0x0834f08c-0x834f18d] ===
 834f08c:	55                   	push   %ebp
 834f08d:	89 e5                	mov    %esp,%ebp
 834f08f:	53                   	push   %ebx
 834f090:	83 ec 34             	sub    $0x34,%esp
 834f093:	8b 55 08             	mov    0x8(%ebp),%edx
 834f096:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f099:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f09d:	89 04 24             	mov    %eax,(%esp)
 834f0a0:	e8 55 ca 03 00       	call   838bafa <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 834f0a5:	83 ec 04             	sub    $0x4,%esp
 834f0a8:	8b 55 08             	mov    0x8(%ebp),%edx
 834f0ab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834f0ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f0b2:	89 04 24             	mov    %eax,(%esp)
 834f0b5:	e8 66 ca 03 00       	call   838bb20 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834f0ba:	83 ec 04             	sub    $0x4,%esp
 834f0bd:	eb 33                	jmp    834f0f2 <_ZN8CMapList7destroyEv+0x66>
 834f0bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f0c2:	89 04 24             	mov    %eax,(%esp)
 834f0c5:	e8 28 cb 03 00       	call   838bbf2 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEdeEv>
 834f0ca:	8b 40 04             	mov    0x4(%eax),%eax
 834f0cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834f0d0:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 834f0d3:	85 db                	test   %ebx,%ebx
 834f0d5:	74 10                	je     834f0e7 <_ZN8CMapList7destroyEv+0x5b>
 834f0d7:	89 1c 24             	mov    %ebx,(%esp)
 834f0da:	e8 17 ee ff ff       	call   834def6 <_ZN4CMapD1Ev>
 834f0df:	89 1c 24             	mov    %ebx,(%esp)
 834f0e2:	e8 09 54 3d 00       	call   87244f0 <_ZdlPv>
 834f0e7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f0ea:	89 04 24             	mov    %eax,(%esp)
 834f0ed:	e8 68 ca 03 00       	call   838bb5a <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEv>
 834f0f2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834f0f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f0f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f0fc:	89 04 24             	mov    %eax,(%esp)
 834f0ff:	e8 42 ca 03 00       	call   838bb46 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 834f104:	84 c0                	test   %al,%al
 834f106:	75 b7                	jne    834f0bf <_ZN8CMapList7destroyEv+0x33>
 834f108:	8b 45 08             	mov    0x8(%ebp),%eax
 834f10b:	89 04 24             	mov    %eax,(%esp)
 834f10e:	e8 ed ca 03 00       	call   838bc00 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 834f113:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834f11a:	eb 62                	jmp    834f17e <_ZN8CMapList7destroyEv+0xf2>
 834f11c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834f11f:	89 d0                	mov    %edx,%eax
 834f121:	c1 e0 02             	shl    $0x2,%eax
 834f124:	01 d0                	add    %edx,%eax
 834f126:	c1 e0 02             	shl    $0x2,%eax
 834f129:	83 c0 10             	add    $0x10,%eax
 834f12c:	03 45 08             	add    0x8(%ebp),%eax
 834f12f:	83 c0 04             	add    $0x4,%eax
 834f132:	89 04 24             	mov    %eax,(%esp)
 834f135:	e8 c6 ca 03 00       	call   838bc00 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 834f13a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834f13d:	89 d0                	mov    %edx,%eax
 834f13f:	c1 e0 02             	shl    $0x2,%eax
 834f142:	01 d0                	add    %edx,%eax
 834f144:	c1 e0 02             	shl    $0x2,%eax
 834f147:	05 50 01 00 00       	add    $0x150,%eax
 834f14c:	03 45 08             	add    0x8(%ebp),%eax
 834f14f:	83 c0 04             	add    $0x4,%eax
 834f152:	89 04 24             	mov    %eax,(%esp)
 834f155:	e8 a6 ca 03 00       	call   838bc00 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 834f15a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 834f15d:	89 d0                	mov    %edx,%eax
 834f15f:	c1 e0 02             	shl    $0x2,%eax
 834f162:	01 d0                	add    %edx,%eax
 834f164:	c1 e0 02             	shl    $0x2,%eax
 834f167:	05 90 02 00 00       	add    $0x290,%eax
 834f16c:	03 45 08             	add    0x8(%ebp),%eax
 834f16f:	83 c0 04             	add    $0x4,%eax
 834f172:	89 04 24             	mov    %eax,(%esp)
 834f175:	e8 86 ca 03 00       	call   838bc00 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 834f17a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834f17e:	83 7d f4 0e          	cmpl   $0xe,-0xc(%ebp)
 834f182:	0f 9e c0             	setle  %al
 834f185:	84 c0                	test   %al,%al
 834f187:	75 93                	jne    834f11c <_ZN8CMapList7destroyEv+0x90>
 834f189:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834f18c:	c9                   	leave
 834f18d:	c3                   	ret

```

```c
// CMapList::destroy @ 0x834f08c

/* CMapList::destroy() */

void __thiscall CMapList::destroy(CMapList *this)

{
  CMap *this_00;
  char cVar1;
  int iVar2;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_24 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_1c [8];
  CMap *local_14;
  int local_10;
  
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  begin(local_1c);
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::end
            (local_24);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                          *)local_1c,(_Hashtable_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
            ::operator*((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                         *)local_1c);
    this_00 = *(CMap **)(iVar2 + 4);
    local_14 = this_00;
    if (this_00 != (CMap *)0x0) {
      CMap::~CMap(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
    ::operator++((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                  *)local_1c);
  }
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)this);
  for (local_10 = 0; local_10 < 0xf; local_10 = local_10 + 1) {
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
          (this + local_10 * 0x14 + 0x14));
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
          (this + local_10 * 0x14 + 0x154));
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    clear((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
          (this + local_10 * 0x14 + 0x294));
  }
  return;
}

```

---

## find_map

```asm
// === 0834f43e CMapList::find_map  [0x0834f43e-0x834f4b9] ===
 834f43e:	55                   	push   %ebp
 834f43f:	89 e5                	mov    %esp,%ebp
 834f441:	83 ec 38             	sub    $0x38,%esp
 834f444:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f447:	89 04 24             	mov    %eax,(%esp)
 834f44a:	e8 9d c9 03 00       	call   838bdec <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834f44f:	8b 55 08             	mov    0x8(%ebp),%edx
 834f452:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834f455:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 834f458:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834f45c:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f460:	89 04 24             	mov    %eax,(%esp)
 834f463:	e8 8a c9 03 00       	call   838bdf2 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 834f468:	83 ec 04             	sub    $0x4,%esp
 834f46b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834f46e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 834f471:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834f474:	89 55 ec             	mov    %edx,-0x14(%ebp)
 834f477:	8b 55 08             	mov    0x8(%ebp),%edx
 834f47a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f47d:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f481:	89 04 24             	mov    %eax,(%esp)
 834f484:	e8 97 c6 03 00       	call   838bb20 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834f489:	83 ec 04             	sub    $0x4,%esp
 834f48c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f48f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f493:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f496:	89 04 24             	mov    %eax,(%esp)
 834f499:	e8 a8 c6 03 00       	call   838bb46 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 834f49e:	84 c0                	test   %al,%al
 834f4a0:	74 10                	je     834f4b2 <_ZN8CMapList8find_mapEi+0x74>
 834f4a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834f4a5:	89 04 24             	mov    %eax,(%esp)
 834f4a8:	e8 71 c9 03 00       	call   838be1e <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP4CMapEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834f4ad:	8b 40 04             	mov    0x4(%eax),%eax
 834f4b0:	eb 05                	jmp    834f4b7 <_ZN8CMapList8find_mapEi+0x79>
 834f4b2:	b8 00 00 00 00       	mov    $0x0,%eax
 834f4b7:	c9                   	leave
 834f4b8:	c3                   	ret
 834f4b9:	90                   	nop

```

```c
// CMapList::find_map @ 0x834f43e

/* CMapList::find_map(int) */

undefined4 CMapList::find_map(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
  ::_Hashtable_iterator();
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::find
            (&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
          ::operator!=((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CMap*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMap*>>,std::equal_to<int>,std::allocator<CMap*>>
                          *)&local_1c);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## insert_map

```asm
// === 0834f18e CMapList::insert_map  [0x0834f18e-0x834f43d] ===
 834f18e:	55                   	push   %ebp
 834f18f:	89 e5                	mov    %esp,%ebp
 834f191:	81 ec 88 00 00 00    	sub    $0x88,%esp
 834f197:	8b 45 14             	mov    0x14(%ebp),%eax
 834f19a:	89 04 24             	mov    %eax,(%esp)
 834f19d:	e8 d4 55 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834f1a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f1a6:	8b 45 08             	mov    0x8(%ebp),%eax
 834f1a9:	89 04 24             	mov    %eax,(%esp)
 834f1ac:	e8 8d 02 00 00       	call   834f43e <_ZN8CMapList8find_mapEi>
 834f1b1:	85 c0                	test   %eax,%eax
 834f1b3:	0f 95 c0             	setne  %al
 834f1b6:	84 c0                	test   %al,%al
 834f1b8:	74 0a                	je     834f1c4 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x36>
 834f1ba:	b8 00 00 00 00       	mov    $0x0,%eax
 834f1bf:	e9 77 02 00 00       	jmp    834f43b <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x2ad>
 834f1c4:	8b 45 14             	mov    0x14(%ebp),%eax
 834f1c7:	89 04 24             	mov    %eax,(%esp)
 834f1ca:	e8 a7 55 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834f1cf:	3d 50 c3 00 00       	cmp    $0xc350,%eax
 834f1d4:	7e 19                	jle    834f1ef <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x61>
 834f1d6:	8b 45 14             	mov    0x14(%ebp),%eax
 834f1d9:	89 04 24             	mov    %eax,(%esp)
 834f1dc:	e8 95 55 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834f1e1:	3d 38 c7 00 00       	cmp    $0xc738,%eax
 834f1e6:	7f 07                	jg     834f1ef <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x61>
 834f1e8:	b8 01 00 00 00       	mov    $0x1,%eax
 834f1ed:	eb 05                	jmp    834f1f4 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x66>
 834f1ef:	b8 00 00 00 00       	mov    $0x0,%eax
 834f1f4:	84 c0                	test   %al,%al
 834f1f6:	0f 84 eb 00 00 00    	je     834f2e7 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x159>
 834f1fc:	8b 45 08             	mov    0x8(%ebp),%eax
 834f1ff:	8b 80 d4 03 00 00    	mov    0x3d4(%eax),%eax
 834f205:	8d 50 01             	lea    0x1(%eax),%edx
 834f208:	8b 45 08             	mov    0x8(%ebp),%eax
 834f20b:	89 90 d4 03 00 00    	mov    %edx,0x3d4(%eax)
 834f211:	8d 45 94             	lea    -0x6c(%ebp),%eax
 834f214:	89 04 24             	mov    %eax,(%esp)
 834f217:	e8 82 c2 ed ff       	call   822b49e <_ZN10PvPMapInfoC1Ev>
 834f21c:	8b 45 14             	mov    0x14(%ebp),%eax
 834f21f:	89 04 24             	mov    %eax,(%esp)
 834f222:	e8 4f 55 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834f227:	89 45 94             	mov    %eax,-0x6c(%ebp)
 834f22a:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 834f231:	8d 45 9c             	lea    -0x64(%ebp),%eax
 834f234:	8b 55 18             	mov    0x18(%ebp),%edx
 834f237:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f23b:	89 04 24             	mov    %eax,(%esp)
 834f23e:	e8 d1 c9 03 00       	call   838bc14 <_ZNSt6vectorI11PVPMAP_DATASaIS0_EE5beginEv>
 834f243:	83 ec 04             	sub    $0x4,%esp
 834f246:	8d 45 9c             	lea    -0x64(%ebp),%eax
 834f249:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f24d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834f250:	89 04 24             	mov    %eax,(%esp)
 834f253:	e8 e0 c9 03 00       	call   838bc38 <_ZN9__gnu_cxx17__normal_iteratorIPK11PVPMAP_DATASt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 834f258:	eb 2e                	jmp    834f288 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0xfa>
 834f25a:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834f25d:	89 04 24             	mov    %eax,(%esp)
 834f260:	e8 55 ca 03 00       	call   838bcba <_ZNK9__gnu_cxx17__normal_iteratorIPK11PVPMAP_DATASt6vectorIS1_SaIS1_EEEdeEv>
 834f265:	8b 50 04             	mov    0x4(%eax),%edx
 834f268:	8b 45 94             	mov    -0x6c(%ebp),%eax
 834f26b:	39 c2                	cmp    %eax,%edx
 834f26d:	0f 94 c0             	sete   %al
 834f270:	84 c0                	test   %al,%al
 834f272:	75 41                	jne    834f2b5 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x127>
 834f274:	8b 45 90             	mov    -0x70(%ebp),%eax
 834f277:	83 c0 01             	add    $0x1,%eax
 834f27a:	89 45 90             	mov    %eax,-0x70(%ebp)
 834f27d:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834f280:	89 04 24             	mov    %eax,(%esp)
 834f283:	e8 1c ca 03 00       	call   838bca4 <_ZN9__gnu_cxx17__normal_iteratorIPK11PVPMAP_DATASt6vectorIS1_SaIS1_EEEppEv>
 834f288:	8d 45 a0             	lea    -0x60(%ebp),%eax
 834f28b:	8b 55 18             	mov    0x18(%ebp),%edx
 834f28e:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f292:	89 04 24             	mov    %eax,(%esp)
 834f295:	e8 b8 c9 03 00       	call   838bc52 <_ZNSt6vectorI11PVPMAP_DATASaIS0_EE3endEv>
 834f29a:	83 ec 04             	sub    $0x4,%esp
 834f29d:	8d 45 a0             	lea    -0x60(%ebp),%eax
 834f2a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f2a4:	8d 45 8c             	lea    -0x74(%ebp),%eax
 834f2a7:	89 04 24             	mov    %eax,(%esp)
 834f2aa:	e8 c9 c9 03 00       	call   838bc78 <_ZN9__gnu_cxxneIPK11PVPMAP_DATAPS1_St6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T1_EERKNS8_IT0_SA_EE>
 834f2af:	84 c0                	test   %al,%al
 834f2b1:	75 a7                	jne    834f25a <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0xcc>
 834f2b3:	eb 01                	jmp    834f2b6 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x128>
 834f2b5:	90                   	nop
 834f2b6:	8d 45 90             	lea    -0x70(%ebp),%eax
 834f2b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f2bd:	c7 04 24 4c c1 43 09 	movl   $0x943c14c,(%esp)
 834f2c4:	e8 fb c9 03 00       	call   838bcc4 <_ZNSt3mapIi10PvPMapInfoSt4lessIiESaISt4pairIKiS0_EEEixERS4_>
 834f2c9:	8d 55 94             	lea    -0x6c(%ebp),%edx
 834f2cc:	39 d0                	cmp    %edx,%eax
 834f2ce:	74 17                	je     834f2e7 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x159>
 834f2d0:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 834f2d7:	00 
 834f2d8:	8d 55 94             	lea    -0x6c(%ebp),%edx
 834f2db:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f2df:	89 04 24             	mov    %eax,(%esp)
 834f2e2:	e8 b9 e5 d2 ff       	call   807d8a0 <memcpy@plt>
 834f2e7:	8b 45 14             	mov    0x14(%ebp),%eax
 834f2ea:	89 04 24             	mov    %eax,(%esp)
 834f2ed:	e8 84 54 de ff       	call   8134776 <_ZNK4CMap9get_indexEv>
 834f2f2:	89 45 b8             	mov    %eax,-0x48(%ebp)
 834f2f5:	8d 45 14             	lea    0x14(%ebp),%eax
 834f2f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 834f2fc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 834f2ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f303:	8d 45 b0             	lea    -0x50(%ebp),%eax
 834f306:	89 04 24             	mov    %eax,(%esp)
 834f309:	e8 2a ae 03 00       	call   838a138 <_ZNSt4pairIKiP4CMapEC1IiRS2_EEOT_OT0_>
 834f30e:	8b 55 08             	mov    0x8(%ebp),%edx
 834f311:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 834f314:	8d 4d b0             	lea    -0x50(%ebp),%ecx
 834f317:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834f31b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f31f:	89 04 24             	mov    %eax,(%esp)
 834f322:	e8 3f ae 03 00       	call   838a166 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834f327:	83 ec 04             	sub    $0x4,%esp
 834f32a:	8b 45 14             	mov    0x14(%ebp),%eax
 834f32d:	89 04 24             	mov    %eax,(%esp)
 834f330:	e8 8b f2 fb ff       	call   830e5c0 <_ZNK4CMap12get_map_typeEv>
 834f335:	85 c0                	test   %eax,%eax
 834f337:	0f 94 c0             	sete   %al
 834f33a:	84 c0                	test   %al,%al
 834f33c:	74 4d                	je     834f38b <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x1fd>
 834f33e:	8d 45 14             	lea    0x14(%ebp),%eax
 834f341:	89 44 24 08          	mov    %eax,0x8(%esp)
 834f345:	8d 45 10             	lea    0x10(%ebp),%eax
 834f348:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f34c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834f34f:	89 04 24             	mov    %eax,(%esp)
 834f352:	e8 67 ca 03 00       	call   838bdbe <_ZNSt4pairIKiP4CMapEC1IRiRS2_EEOT_OT0_>
 834f357:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f35a:	89 d0                	mov    %edx,%eax
 834f35c:	c1 e0 02             	shl    $0x2,%eax
 834f35f:	01 d0                	add    %edx,%eax
 834f361:	c1 e0 02             	shl    $0x2,%eax
 834f364:	83 c0 10             	add    $0x10,%eax
 834f367:	03 45 08             	add    0x8(%ebp),%eax
 834f36a:	8d 48 04             	lea    0x4(%eax),%ecx
 834f36d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 834f370:	8d 55 c8             	lea    -0x38(%ebp),%edx
 834f373:	89 54 24 08          	mov    %edx,0x8(%esp)
 834f377:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834f37b:	89 04 24             	mov    %eax,(%esp)
 834f37e:	e8 e3 ad 03 00       	call   838a166 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834f383:	83 ec 04             	sub    $0x4,%esp
 834f386:	e9 ab 00 00 00       	jmp    834f436 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x2a8>
 834f38b:	8b 45 14             	mov    0x14(%ebp),%eax
 834f38e:	89 04 24             	mov    %eax,(%esp)
 834f391:	e8 2a f2 fb ff       	call   830e5c0 <_ZNK4CMap12get_map_typeEv>
 834f396:	83 f8 02             	cmp    $0x2,%eax
 834f399:	0f 94 c0             	sete   %al
 834f39c:	84 c0                	test   %al,%al
 834f39e:	74 4c                	je     834f3ec <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x25e>
 834f3a0:	8d 45 14             	lea    0x14(%ebp),%eax
 834f3a3:	89 44 24 08          	mov    %eax,0x8(%esp)
 834f3a7:	8d 45 10             	lea    0x10(%ebp),%eax
 834f3aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f3ae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834f3b1:	89 04 24             	mov    %eax,(%esp)
 834f3b4:	e8 05 ca 03 00       	call   838bdbe <_ZNSt4pairIKiP4CMapEC1IRiRS2_EEOT_OT0_>
 834f3b9:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f3bc:	89 d0                	mov    %edx,%eax
 834f3be:	c1 e0 02             	shl    $0x2,%eax
 834f3c1:	01 d0                	add    %edx,%eax
 834f3c3:	c1 e0 02             	shl    $0x2,%eax
 834f3c6:	05 90 02 00 00       	add    $0x290,%eax
 834f3cb:	03 45 08             	add    0x8(%ebp),%eax
 834f3ce:	8d 48 04             	lea    0x4(%eax),%ecx
 834f3d1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834f3d4:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834f3d7:	89 54 24 08          	mov    %edx,0x8(%esp)
 834f3db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834f3df:	89 04 24             	mov    %eax,(%esp)
 834f3e2:	e8 7f ad 03 00       	call   838a166 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834f3e7:	83 ec 04             	sub    $0x4,%esp
 834f3ea:	eb 4a                	jmp    834f436 <_ZN8CMapList10insert_mapEiiP4CMapRSt6vectorI11PVPMAP_DATASaIS3_EE+0x2a8>
 834f3ec:	8d 45 14             	lea    0x14(%ebp),%eax
 834f3ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 834f3f3:	8d 45 10             	lea    0x10(%ebp),%eax
 834f3f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 834f3fa:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834f3fd:	89 04 24             	mov    %eax,(%esp)
 834f400:	e8 b9 c9 03 00       	call   838bdbe <_ZNSt4pairIKiP4CMapEC1IRiRS2_EEOT_OT0_>
 834f405:	8b 55 0c             	mov    0xc(%ebp),%edx
 834f408:	89 d0                	mov    %edx,%eax
 834f40a:	c1 e0 02             	shl    $0x2,%eax
 834f40d:	01 d0                	add    %edx,%eax
 834f40f:	c1 e0 02             	shl    $0x2,%eax
 834f412:	05 50 01 00 00       	add    $0x150,%eax
 834f417:	03 45 08             	add    0x8(%ebp),%eax
 834f41a:	8d 48 04             	lea    0x4(%eax),%ecx
 834f41d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834f420:	8d 55 f0             	lea    -0x10(%ebp),%edx
 834f423:	89 54 24 08          	mov    %edx,0x8(%esp)
 834f427:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834f42b:	89 04 24             	mov    %eax,(%esp)
 834f42e:	e8 33 ad 03 00       	call   838a166 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834f433:	83 ec 04             	sub    $0x4,%esp
 834f436:	b8 01 00 00 00       	mov    $0x1,%eax
 834f43b:	c9                   	leave
 834f43c:	c3                   	ret
 834f43d:	90                   	nop

```

```c
// CMapList::insert_map @ 0x834f18e

/* CMapList::insert_map(int, int, CMap*, std::vector<PVPMAP_DATA, std::allocator<PVPMAP_DATA> >&) */

undefined4 __thiscall
CMapList::insert_map(CMapList *this,int param_1,int param_2,CMap *param_3,vector *param_4)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *__dest;
  __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>
  local_78 [4];
  int local_74;
  int local_70 [2];
  __normal_iterator local_68 [4];
  __normal_iterator local_64 [4];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_60 [12];
  pair<int_const,CMap*> local_54 [8];
  int local_4c;
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_48 [12];
  pair<int_const,CMap*> local_3c [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_34 [12];
  pair<int_const,CMap*> local_28 [8];
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> local_20 [12];
  pair<int_const,CMap*> local_14 [16];
  
  CMap::get_index(param_3);
  iVar2 = find_map((int)this);
  if (iVar2 == 0) {
    iVar2 = CMap::get_index(param_3);
    if ((iVar2 < 0xc351) || (iVar2 = CMap::get_index(param_3), 51000 < iVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *(int *)(this + 0x3d4) = *(int *)(this + 0x3d4) + 1;
      PvPMapInfo::PvPMapInfo((PvPMapInfo *)local_70);
      local_70[0] = CMap::get_index(param_3);
      local_74 = 0;
      std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>::begin();
      __gnu_cxx::
      __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>::
      __normal_iterator<PVPMAP_DATA*>(local_78,local_68);
      while( true ) {
        std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>::end();
        bVar1 = __gnu_cxx::operator!=(local_78,local_64);
        if ((!bVar1) ||
           (iVar2 = __gnu_cxx::
                    __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>
                    ::operator*(local_78), *(int *)(iVar2 + 4) == local_70[0])) break;
        local_74 = local_74 + 1;
        __gnu_cxx::
        __normal_iterator<PVPMAP_DATA_const*,std::vector<PVPMAP_DATA,std::allocator<PVPMAP_DATA>>>::
        operator++(local_78);
      }
      __dest = (int *)std::
                      map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>
                      ::operator[]((map<int,PvPMapInfo,std::less<int>,std::allocator<std::pair<int_const,PvPMapInfo>>>
                                    *)mapPvpMapInfo_,&local_74);
      if (__dest != local_70) {
        memcpy(__dest,local_70,5);
      }
    }
    local_4c = CMap::get_index(param_3);
    std::pair<int_const,CMap*>::pair<int,CMap*&>(local_54,&local_4c,&param_3);
    __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
    insert(local_60,this);
    iVar2 = CMap::get_map_type(param_3);
    if (iVar2 == 0) {
      std::pair<int_const,CMap*>::pair<int&,CMap*&>(local_3c,&param_2,&param_3);
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      insert(local_48,this + param_1 * 0x14 + 0x14);
    }
    else {
      iVar2 = CMap::get_map_type(param_3);
      if (iVar2 == 2) {
        std::pair<int_const,CMap*>::pair<int&,CMap*&>(local_28,&param_2,&param_3);
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::insert(local_34,this + param_1 * 0x14 + 0x294);
      }
      else {
        std::pair<int_const,CMap*>::pair<int&,CMap*&>(local_14,&param_2,&param_3);
        __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
        ::insert(local_20,this + param_1 * 0x14 + 0x154);
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ~CMapList

```asm
// === 0834ef04 CMapList::~CMapList  [0x0834ef04-0x834f08b] ===
 834ef04:	55                   	push   %ebp
 834ef05:	89 e5                	mov    %esp,%ebp
 834ef07:	57                   	push   %edi
 834ef08:	56                   	push   %esi
 834ef09:	53                   	push   %ebx
 834ef0a:	83 ec 1c             	sub    $0x1c,%esp
 834ef0d:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef10:	89 04 24             	mov    %eax,(%esp)
 834ef13:	e8 74 01 00 00       	call   834f08c <_ZN8CMapList7destroyEv>
 834ef18:	eb 3d                	jmp    834ef57 <_ZN8CMapListD1Ev+0x53>
 834ef1a:	89 d6                	mov    %edx,%esi
 834ef1c:	89 c7                	mov    %eax,%edi
 834ef1e:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef21:	05 94 02 00 00       	add    $0x294,%eax
 834ef26:	85 c0                	test   %eax,%eax
 834ef28:	74 27                	je     834ef51 <_ZN8CMapListD1Ev+0x4d>
 834ef2a:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef2d:	05 94 02 00 00       	add    $0x294,%eax
 834ef32:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834ef38:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef3b:	05 94 02 00 00       	add    $0x294,%eax
 834ef40:	39 c3                	cmp    %eax,%ebx
 834ef42:	74 0d                	je     834ef51 <_ZN8CMapListD1Ev+0x4d>
 834ef44:	83 eb 14             	sub    $0x14,%ebx
 834ef47:	89 1c 24             	mov    %ebx,(%esp)
 834ef4a:	e8 c5 4f 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834ef4f:	eb e7                	jmp    834ef38 <_ZN8CMapListD1Ev+0x34>
 834ef51:	89 f8                	mov    %edi,%eax
 834ef53:	89 f2                	mov    %esi,%edx
 834ef55:	eb 33                	jmp    834ef8a <_ZN8CMapListD1Ev+0x86>
 834ef57:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef5a:	05 94 02 00 00       	add    $0x294,%eax
 834ef5f:	85 c0                	test   %eax,%eax
 834ef61:	74 64                	je     834efc7 <_ZN8CMapListD1Ev+0xc3>
 834ef63:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef66:	05 94 02 00 00       	add    $0x294,%eax
 834ef6b:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834ef71:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef74:	05 94 02 00 00       	add    $0x294,%eax
 834ef79:	39 c3                	cmp    %eax,%ebx
 834ef7b:	74 4a                	je     834efc7 <_ZN8CMapListD1Ev+0xc3>
 834ef7d:	83 eb 14             	sub    $0x14,%ebx
 834ef80:	89 1c 24             	mov    %ebx,(%esp)
 834ef83:	e8 8c 4f 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834ef88:	eb e7                	jmp    834ef71 <_ZN8CMapListD1Ev+0x6d>
 834ef8a:	89 d6                	mov    %edx,%esi
 834ef8c:	89 c7                	mov    %eax,%edi
 834ef8e:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef91:	05 54 01 00 00       	add    $0x154,%eax
 834ef96:	85 c0                	test   %eax,%eax
 834ef98:	74 27                	je     834efc1 <_ZN8CMapListD1Ev+0xbd>
 834ef9a:	8b 45 08             	mov    0x8(%ebp),%eax
 834ef9d:	05 54 01 00 00       	add    $0x154,%eax
 834efa2:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834efa8:	8b 45 08             	mov    0x8(%ebp),%eax
 834efab:	05 54 01 00 00       	add    $0x154,%eax
 834efb0:	39 c3                	cmp    %eax,%ebx
 834efb2:	74 0d                	je     834efc1 <_ZN8CMapListD1Ev+0xbd>
 834efb4:	83 eb 14             	sub    $0x14,%ebx
 834efb7:	89 1c 24             	mov    %ebx,(%esp)
 834efba:	e8 55 4f 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834efbf:	eb e7                	jmp    834efa8 <_ZN8CMapListD1Ev+0xa4>
 834efc1:	89 f8                	mov    %edi,%eax
 834efc3:	89 f2                	mov    %esi,%edx
 834efc5:	eb 33                	jmp    834effa <_ZN8CMapListD1Ev+0xf6>
 834efc7:	8b 45 08             	mov    0x8(%ebp),%eax
 834efca:	05 54 01 00 00       	add    $0x154,%eax
 834efcf:	85 c0                	test   %eax,%eax
 834efd1:	74 5e                	je     834f031 <_ZN8CMapListD1Ev+0x12d>
 834efd3:	8b 45 08             	mov    0x8(%ebp),%eax
 834efd6:	05 54 01 00 00       	add    $0x154,%eax
 834efdb:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834efe1:	8b 45 08             	mov    0x8(%ebp),%eax
 834efe4:	05 54 01 00 00       	add    $0x154,%eax
 834efe9:	39 c3                	cmp    %eax,%ebx
 834efeb:	74 44                	je     834f031 <_ZN8CMapListD1Ev+0x12d>
 834efed:	83 eb 14             	sub    $0x14,%ebx
 834eff0:	89 1c 24             	mov    %ebx,(%esp)
 834eff3:	e8 1c 4f 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834eff8:	eb e7                	jmp    834efe1 <_ZN8CMapListD1Ev+0xdd>
 834effa:	89 d6                	mov    %edx,%esi
 834effc:	89 c7                	mov    %eax,%edi
 834effe:	8b 45 08             	mov    0x8(%ebp),%eax
 834f001:	83 c0 14             	add    $0x14,%eax
 834f004:	85 c0                	test   %eax,%eax
 834f006:	74 23                	je     834f02b <_ZN8CMapListD1Ev+0x127>
 834f008:	8b 45 08             	mov    0x8(%ebp),%eax
 834f00b:	83 c0 14             	add    $0x14,%eax
 834f00e:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834f014:	8b 45 08             	mov    0x8(%ebp),%eax
 834f017:	83 c0 14             	add    $0x14,%eax
 834f01a:	39 c3                	cmp    %eax,%ebx
 834f01c:	74 0d                	je     834f02b <_ZN8CMapListD1Ev+0x127>
 834f01e:	83 eb 14             	sub    $0x14,%ebx
 834f021:	89 1c 24             	mov    %ebx,(%esp)
 834f024:	e8 eb 4e 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834f029:	eb e9                	jmp    834f014 <_ZN8CMapListD1Ev+0x110>
 834f02b:	89 f8                	mov    %edi,%eax
 834f02d:	89 f2                	mov    %esi,%edx
 834f02f:	eb 2d                	jmp    834f05e <_ZN8CMapListD1Ev+0x15a>
 834f031:	8b 45 08             	mov    0x8(%ebp),%eax
 834f034:	83 c0 14             	add    $0x14,%eax
 834f037:	85 c0                	test   %eax,%eax
 834f039:	74 3e                	je     834f079 <_ZN8CMapListD1Ev+0x175>
 834f03b:	8b 45 08             	mov    0x8(%ebp),%eax
 834f03e:	83 c0 14             	add    $0x14,%eax
 834f041:	8d 98 40 01 00 00    	lea    0x140(%eax),%ebx
 834f047:	8b 45 08             	mov    0x8(%ebp),%eax
 834f04a:	83 c0 14             	add    $0x14,%eax
 834f04d:	39 c3                	cmp    %eax,%ebx
 834f04f:	74 28                	je     834f079 <_ZN8CMapListD1Ev+0x175>
 834f051:	83 eb 14             	sub    $0x14,%ebx
 834f054:	89 1c 24             	mov    %ebx,(%esp)
 834f057:	e8 b8 4e 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834f05c:	eb e9                	jmp    834f047 <_ZN8CMapListD1Ev+0x143>
 834f05e:	89 d3                	mov    %edx,%ebx
 834f060:	89 c6                	mov    %eax,%esi
 834f062:	8b 45 08             	mov    0x8(%ebp),%eax
 834f065:	89 04 24             	mov    %eax,(%esp)
 834f068:	e8 a7 4e 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834f06d:	89 f0                	mov    %esi,%eax
 834f06f:	89 da                	mov    %ebx,%edx
 834f071:	89 04 24             	mov    %eax,(%esp)
 834f074:	e8 d7 46 79 00       	call   8ae3750 <_Unwind_Resume>
 834f079:	8b 45 08             	mov    0x8(%ebp),%eax
 834f07c:	89 04 24             	mov    %eax,(%esp)
 834f07f:	e8 90 4e 02 00       	call   8373f14 <_ZN9__gnu_cxx8hash_mapIiP4CMapNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834f084:	83 c4 1c             	add    $0x1c,%esp
 834f087:	5b                   	pop    %ebx
 834f088:	5e                   	pop    %esi
 834f089:	5f                   	pop    %edi
 834f08a:	5d                   	pop    %ebp
 834f08b:	c3                   	ret

```

```c
// CMapList::~CMapList @ 0x834ef04

/* CMapList::~CMapList() */

void __thiscall CMapList::~CMapList(CMapList *this)

{
  hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *phVar1;
  
                    /* try { // try from 0834ef13 to 0834ef17 has its CatchHandler @ 0834ef1a */
  destroy(this);
  if (this != (CMapList *)0xfffffd6c) {
    phVar1 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
             (this + 0x3d4);
    while (phVar1 != (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + 0x294)) {
      phVar1 = phVar1 + -0x14;
                    /* try { // try from 0834ef83 to 0834ef87 has its CatchHandler @ 0834ef8a */
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      ~hash_map(phVar1);
    }
  }
  if (this != (CMapList *)0xfffffeac) {
    phVar1 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
             (this + 0x294);
    while (phVar1 != (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + 0x154)) {
      phVar1 = phVar1 + -0x14;
                    /* try { // try from 0834eff3 to 0834eff7 has its CatchHandler @ 0834effa */
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      ~hash_map(phVar1);
    }
  }
  if (this != (CMapList *)0xffffffec) {
    phVar1 = (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
             (this + 0x154);
    while (phVar1 != (hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>
                      *)(this + 0x14)) {
      phVar1 = phVar1 + -0x14;
                    /* try { // try from 0834f057 to 0834f05b has its CatchHandler @ 0834f05e */
      __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
      ~hash_map(phVar1);
    }
  }
  __gnu_cxx::hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>>::
  ~hash_map((hash_map<int,CMap*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMap*>> *)
            this);
  return;
}

```

