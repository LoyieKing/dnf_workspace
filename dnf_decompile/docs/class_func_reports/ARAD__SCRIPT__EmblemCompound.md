# ARAD__SCRIPT__EmblemCompound

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## EmblemCompound

```asm
// === 088b1408 ARAD::SCRIPT::EmblemCompound::EmblemCompound  [0x088b1408-0x88b14c1] ===
 88b1408:	55                   	push   %ebp
 88b1409:	89 e5                	mov    %esp,%ebp
 88b140b:	57                   	push   %edi
 88b140c:	56                   	push   %esi
 88b140d:	53                   	push   %ebx
 88b140e:	83 ec 2c             	sub    $0x2c,%esp
 88b1411:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1414:	89 04 24             	mov    %eax,(%esp)
 88b1417:	e8 48 58 81 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 88b141c:	8b 45 08             	mov    0x8(%ebp),%eax
 88b141f:	83 c0 18             	add    $0x18,%eax
 88b1422:	89 04 24             	mov    %eax,(%esp)
 88b1425:	e8 b0 0b 00 00       	call   88b1fda <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEEC1Ev>
 88b142a:	8b 45 08             	mov    0x8(%ebp),%eax
 88b142d:	8d 70 30             	lea    0x30(%eax),%esi
 88b1430:	89 f7                	mov    %esi,%edi
 88b1432:	bb 06 00 00 00       	mov    $0x6,%ebx
 88b1437:	eb 0e                	jmp    88b1447 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x3f>
 88b1439:	89 3c 24             	mov    %edi,(%esp)
 88b143c:	e8 81 3f 84 ff       	call   80f53c2 <_ZNSt6vectorImSaImEEC1Ev>
 88b1441:	83 c7 0c             	add    $0xc,%edi
 88b1444:	83 eb 01             	sub    $0x1,%ebx
 88b1447:	83 fb ff             	cmp    $0xffffffff,%ebx
 88b144a:	0f 95 c0             	setne  %al
 88b144d:	84 c0                	test   %al,%al
 88b144f:	75 e8                	jne    88b1439 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x31>
 88b1451:	eb 4c                	jmp    88b149f <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x97>
 88b1453:	89 d7                	mov    %edx,%edi
 88b1455:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 88b1458:	85 f6                	test   %esi,%esi
 88b145a:	74 26                	je     88b1482 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x7a>
 88b145c:	b8 06 00 00 00       	mov    $0x6,%eax
 88b1461:	29 d8                	sub    %ebx,%eax
 88b1463:	89 c2                	mov    %eax,%edx
 88b1465:	89 d0                	mov    %edx,%eax
 88b1467:	01 c0                	add    %eax,%eax
 88b1469:	01 d0                	add    %edx,%eax
 88b146b:	c1 e0 02             	shl    $0x2,%eax
 88b146e:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 88b1471:	39 f3                	cmp    %esi,%ebx
 88b1473:	74 0d                	je     88b1482 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x7a>
 88b1475:	83 eb 0c             	sub    $0xc,%ebx
 88b1478:	89 1c 24             	mov    %ebx,(%esp)
 88b147b:	e8 56 3f 84 ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 88b1480:	eb ef                	jmp    88b1471 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x69>
 88b1482:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88b1485:	89 fa                	mov    %edi,%edx
 88b1487:	89 d3                	mov    %edx,%ebx
 88b1489:	89 c6                	mov    %eax,%esi
 88b148b:	8b 45 08             	mov    0x8(%ebp),%eax
 88b148e:	83 c0 18             	add    $0x18,%eax
 88b1491:	89 04 24             	mov    %eax,(%esp)
 88b1494:	e8 81 0a 00 00       	call   88b1f1a <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 88b1499:	89 f0                	mov    %esi,%eax
 88b149b:	89 da                	mov    %ebx,%edx
 88b149d:	eb 08                	jmp    88b14a7 <_ZN4ARAD6SCRIPT14EmblemCompoundC1Ev+0x9f>
 88b149f:	83 c4 2c             	add    $0x2c,%esp
 88b14a2:	5b                   	pop    %ebx
 88b14a3:	5e                   	pop    %esi
 88b14a4:	5f                   	pop    %edi
 88b14a5:	5d                   	pop    %ebp
 88b14a6:	c3                   	ret
 88b14a7:	89 d3                	mov    %edx,%ebx
 88b14a9:	89 c6                	mov    %eax,%esi
 88b14ab:	8b 45 08             	mov    0x8(%ebp),%eax
 88b14ae:	89 04 24             	mov    %eax,(%esp)
 88b14b1:	e8 10 56 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b14b6:	89 f0                	mov    %esi,%eax
 88b14b8:	89 da                	mov    %ebx,%edx
 88b14ba:	89 04 24             	mov    %eax,(%esp)
 88b14bd:	e8 8e 22 23 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ARAD::SCRIPT::EmblemCompound::EmblemCompound @ 0x88b1408

/* ARAD::SCRIPT::EmblemCompound::EmblemCompound() */

void __thiscall ARAD::SCRIPT::EmblemCompound::EmblemCompound(EmblemCompound *this)

{
  int iVar1;
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
                    /* try { // try from 088b1425 to 088b1429 has its CatchHandler @ 088b14a7 */
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::map((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
         *)(this + 0x18));
  this_00 = (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x30);
  for (iVar1 = 6; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 088b143c to 088b1440 has its CatchHandler @ 088b1453 */
    std::vector<unsigned_long,std::allocator<unsigned_long>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}

```

---

## clearScript

```asm
// === 088b1926 ARAD::SCRIPT::EmblemCompound::clearScript  [0x088b1926-0x88b19af] ===
 88b1926:	55                   	push   %ebp
 88b1927:	89 e5                	mov    %esp,%ebp
 88b1929:	83 ec 28             	sub    $0x28,%esp
 88b192c:	8b 45 08             	mov    0x8(%ebp),%eax
 88b192f:	89 04 24             	mov    %eax,(%esp)
 88b1932:	e8 a7 53 81 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 88b1937:	8b 45 08             	mov    0x8(%ebp),%eax
 88b193a:	8d 50 18             	lea    0x18(%eax),%edx
 88b193d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1940:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1944:	89 04 24             	mov    %eax,(%esp)
 88b1947:	e8 8e 07 00 00       	call   88b20da <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE5beginEv>
 88b194c:	83 ec 04             	sub    $0x4,%esp
 88b194f:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1952:	8d 50 18             	lea    0x18(%eax),%edx
 88b1955:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1958:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b195c:	89 04 24             	mov    %eax,(%esp)
 88b195f:	e8 ca 20 8e ff       	call   8193a2e <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b1964:	83 ec 04             	sub    $0x4,%esp
 88b1967:	eb 21                	jmp    88b198a <_ZN4ARAD6SCRIPT14EmblemCompound11clearScriptEv+0x64>
 88b1969:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b196c:	89 04 24             	mov    %eax,(%esp)
 88b196f:	e8 a0 07 00 00       	call   88b2114 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEptEv>
 88b1974:	8b 40 04             	mov    0x4(%eax),%eax
 88b1977:	89 04 24             	mov    %eax,(%esp)
 88b197a:	e8 71 2b e7 ff       	call   87244f0 <_ZdlPv>
 88b197f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1982:	89 04 24             	mov    %eax,(%esp)
 88b1985:	e8 98 07 00 00       	call   88b2122 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEppEv>
 88b198a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b198d:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1991:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1994:	89 04 24             	mov    %eax,(%esp)
 88b1997:	e8 64 07 00 00       	call   88b2100 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEneERKS8_>
 88b199c:	84 c0                	test   %al,%al
 88b199e:	75 c9                	jne    88b1969 <_ZN4ARAD6SCRIPT14EmblemCompound11clearScriptEv+0x43>
 88b19a0:	8b 45 08             	mov    0x8(%ebp),%eax
 88b19a3:	83 c0 18             	add    $0x18,%eax
 88b19a6:	89 04 24             	mov    %eax,(%esp)
 88b19a9:	e8 92 07 00 00       	call   88b2140 <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE5clearEv>
 88b19ae:	c9                   	leave
 88b19af:	c3                   	ret

```

```c
// ARAD::SCRIPT::EmblemCompound::clearScript @ 0x88b1926

/* ARAD::SCRIPT::EmblemCompound::clearScript() */

void __thiscall ARAD::SCRIPT::EmblemCompound::clearScript(EmblemCompound *this)

{
  char cVar1;
  int iVar2;
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_14 [4];
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::begin(local_10);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::end(local_14);
  while( true ) {
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                        *)local_10,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                        *)local_10);
    operator_delete(*(void **)(iVar2 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> *)
               local_10);
  }
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::clear((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
           *)(this + 0x18));
  return;
}

```

---

## getCost

```asm
// === 088b19b0 ARAD::SCRIPT::EmblemCompound::getCost  [0x088b19b0-0x88b1a13] ===
 88b19b0:	55                   	push   %ebp
 88b19b1:	89 e5                	mov    %esp,%ebp
 88b19b3:	83 ec 28             	sub    $0x28,%esp
 88b19b6:	8b 55 08             	mov    0x8(%ebp),%edx
 88b19b9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b19bc:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 88b19bf:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88b19c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b19c7:	89 04 24             	mov    %eax,(%esp)
 88b19ca:	e8 1f b9 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b19cf:	83 ec 04             	sub    $0x4,%esp
 88b19d2:	8b 55 08             	mov    0x8(%ebp),%edx
 88b19d5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b19d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b19dc:	89 04 24             	mov    %eax,(%esp)
 88b19df:	e8 36 b9 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b19e4:	83 ec 04             	sub    $0x4,%esp
 88b19e7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b19ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b19ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b19f1:	89 04 24             	mov    %eax,(%esp)
 88b19f4:	e8 cf 89 82 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 88b19f9:	84 c0                	test   %al,%al
 88b19fb:	74 10                	je     88b1a0d <_ZN4ARAD6SCRIPT14EmblemCompound7getCostEi+0x5d>
 88b19fd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1a00:	89 04 24             	mov    %eax,(%esp)
 88b1a03:	e8 38 b9 81 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 88b1a08:	8b 40 04             	mov    0x4(%eax),%eax
 88b1a0b:	eb 05                	jmp    88b1a12 <_ZN4ARAD6SCRIPT14EmblemCompound7getCostEi+0x62>
 88b1a0d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 88b1a12:	c9                   	leave
 88b1a13:	c3                   	ret

```

```c
// ARAD::SCRIPT::EmblemCompound::getCost @ 0x88b19b0

/* ARAD::SCRIPT::EmblemCompound::getCost(int) */

undefined4 ARAD::SCRIPT::EmblemCompound::getCost(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## getList

```asm
// === 088b1a7e ARAD::SCRIPT::EmblemCompound::getList  [0x088b1a7e-0x88b1b0d] ===
 88b1a7e:	55                   	push   %ebp
 88b1a7f:	89 e5                	mov    %esp,%ebp
 88b1a81:	83 ec 38             	sub    $0x38,%esp
 88b1a84:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1a87:	89 04 24             	mov    %eax,(%esp)
 88b1a8a:	e8 c5 06 00 00       	call   88b2154 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEC1Ev>
 88b1a8f:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1a92:	8d 48 18             	lea    0x18(%eax),%ecx
 88b1a95:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88b1a98:	8d 55 0c             	lea    0xc(%ebp),%edx
 88b1a9b:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b1a9f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b1aa3:	89 04 24             	mov    %eax,(%esp)
 88b1aa6:	e8 a9 05 00 00       	call   88b2054 <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 88b1aab:	83 ec 04             	sub    $0x4,%esp
 88b1aae:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 88b1ab1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88b1ab4:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1ab7:	8d 50 18             	lea    0x18(%eax),%edx
 88b1aba:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1abd:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1ac1:	89 04 24             	mov    %eax,(%esp)
 88b1ac4:	e8 65 1f 8e ff       	call   8193a2e <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b1ac9:	83 ec 04             	sub    $0x4,%esp
 88b1acc:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1acf:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1ad3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1ad6:	89 04 24             	mov    %eax,(%esp)
 88b1ad9:	e8 22 06 00 00       	call   88b2100 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEneERKS8_>
 88b1ade:	84 c0                	test   %al,%al
 88b1ae0:	74 25                	je     88b1b07 <_ZN4ARAD6SCRIPT14EmblemCompound7getListEi+0x89>
 88b1ae2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1ae5:	89 04 24             	mov    %eax,(%esp)
 88b1ae8:	e8 27 06 00 00       	call   88b2114 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEptEv>
 88b1aed:	8b 40 04             	mov    0x4(%eax),%eax
 88b1af0:	0f b7 00             	movzwl (%eax),%eax
 88b1af3:	0f bf d0             	movswl %ax,%edx
 88b1af6:	89 d0                	mov    %edx,%eax
 88b1af8:	01 c0                	add    %eax,%eax
 88b1afa:	01 d0                	add    %edx,%eax
 88b1afc:	c1 e0 02             	shl    $0x2,%eax
 88b1aff:	83 c0 30             	add    $0x30,%eax
 88b1b02:	03 45 08             	add    0x8(%ebp),%eax
 88b1b05:	eb 05                	jmp    88b1b0c <_ZN4ARAD6SCRIPT14EmblemCompound7getListEi+0x8e>
 88b1b07:	b8 00 00 00 00       	mov    $0x0,%eax
 88b1b0c:	c9                   	leave
 88b1b0d:	c3                   	ret

```

```c
// ARAD::SCRIPT::EmblemCompound::getList @ 0x88b1a7e

/* ARAD::SCRIPT::EmblemCompound::getList(int) */

int ARAD::SCRIPT::EmblemCompound::getList(int param_1)

{
  char cVar1;
  int iVar2;
  int local_20 [3];
  int local_14;
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_10 [12];
  
  std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
  _Rb_tree_iterator((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> *
                    )&local_14);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::find(local_20);
  local_14 = local_20[0];
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
          operator!=((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                      *)&local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator->((_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>
                        *)&local_14);
    iVar2 = **(short **)(iVar2 + 4) * 0xc + 0x30 + param_1;
  }
  return iVar2;
}

```

---

## getResult

```asm
// === 088b1a14 ARAD::SCRIPT::EmblemCompound::getResult  [0x088b1a14-0x88b1a7d] ===
 88b1a14:	55                   	push   %ebp
 88b1a15:	89 e5                	mov    %esp,%ebp
 88b1a17:	83 ec 28             	sub    $0x28,%esp
 88b1a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1a1d:	8d 48 18             	lea    0x18(%eax),%ecx
 88b1a20:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1a23:	8d 55 0c             	lea    0xc(%ebp),%edx
 88b1a26:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b1a2a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b1a2e:	89 04 24             	mov    %eax,(%esp)
 88b1a31:	e8 1e 06 00 00       	call   88b2054 <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 88b1a36:	83 ec 04             	sub    $0x4,%esp
 88b1a39:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1a3c:	8d 50 18             	lea    0x18(%eax),%edx
 88b1a3f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1a42:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1a46:	89 04 24             	mov    %eax,(%esp)
 88b1a49:	e8 e0 1f 8e ff       	call   8193a2e <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b1a4e:	83 ec 04             	sub    $0x4,%esp
 88b1a51:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88b1a54:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1a58:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1a5b:	89 04 24             	mov    %eax,(%esp)
 88b1a5e:	e8 9d 06 00 00       	call   88b2100 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEneERKS8_>
 88b1a63:	84 c0                	test   %al,%al
 88b1a65:	74 10                	je     88b1a77 <_ZN4ARAD6SCRIPT14EmblemCompound9getResultEi+0x63>
 88b1a67:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88b1a6a:	89 04 24             	mov    %eax,(%esp)
 88b1a6d:	e8 a2 06 00 00       	call   88b2114 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEptEv>
 88b1a72:	8b 40 04             	mov    0x4(%eax),%eax
 88b1a75:	eb 05                	jmp    88b1a7c <_ZN4ARAD6SCRIPT14EmblemCompound9getResultEi+0x68>
 88b1a77:	b8 00 00 00 00       	mov    $0x0,%eax
 88b1a7c:	c9                   	leave
 88b1a7d:	c3                   	ret

```

```c
// ARAD::SCRIPT::EmblemCompound::getResult @ 0x88b1a14

/* ARAD::SCRIPT::EmblemCompound::getResult(int) */

undefined4 ARAD::SCRIPT::EmblemCompound::getResult(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> local_14 [4];
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_10 [12];
  
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::find((int *)local_14);
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
          operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
            operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## loadScript

```asm
// === 088b154a ARAD::SCRIPT::EmblemCompound::loadScript  [0x088b154a-0x88b1925] ===
 88b154a:	55                   	push   %ebp
 88b154b:	89 e5                	mov    %esp,%ebp
 88b154d:	56                   	push   %esi
 88b154e:	53                   	push   %ebx
 88b154f:	83 ec 70             	sub    $0x70,%esp
 88b1552:	c7 44 24 04 76 70 e0 	movl   $0x8e07076,0x4(%esp)
 88b1559:	08 
 88b155a:	c7 04 24 78 6f e0 08 	movl   $0x8e06f78,(%esp)
 88b1561:	e8 c3 a7 00 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88b1566:	83 f0 01             	xor    $0x1,%eax
 88b1569:	84 c0                	test   %al,%al
 88b156b:	74 0a                	je     88b1577 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x2d>
 88b156d:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 88b1572:	e9 a3 03 00 00       	jmp    88b191a <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x3d0>
 88b1577:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b157a:	89 04 24             	mov    %eax,(%esp)
 88b157d:	e8 4e 50 e5 ff       	call   87065d0 <_ZNSsC1Ev>
 88b1582:	c6 45 b3 00          	movb   $0x0,-0x4d(%ebp)
 88b1586:	c6 45 b2 00          	movb   $0x0,-0x4e(%ebp)
 88b158a:	eb 01                	jmp    88b158d <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x43>
 88b158c:	90                   	nop
 88b158d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88b1594:	00 
 88b1595:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b1598:	89 04 24             	mov    %eax,(%esp)
 88b159b:	e8 bf b2 00 00       	call   88bc85f <_Z8ScanTypeRSsb>
 88b15a0:	83 f0 01             	xor    $0x1,%eax
 88b15a3:	84 c0                	test   %al,%al
 88b15a5:	0f 85 3c 03 00 00    	jne    88b18e7 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x39d>
 88b15ab:	c7 44 24 04 8e 70 e0 	movl   $0x8e0708e,0x4(%esp)
 88b15b2:	08 
 88b15b3:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b15b6:	89 04 24             	mov    %eax,(%esp)
 88b15b9:	e8 e3 f3 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b15be:	84 c0                	test   %al,%al
 88b15c0:	0f 84 e7 00 00 00    	je     88b16ad <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x163>
 88b15c6:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b15cd:	00 
 88b15ce:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 88b15d1:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b15d5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b15d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b15dc:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 88b15df:	89 04 24             	mov    %eax,(%esp)
 88b15e2:	e8 c8 b8 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b15e7:	89 45 ac             	mov    %eax,-0x54(%ebp)
 88b15ea:	0f b6 45 b3          	movzbl -0x4d(%ebp),%eax
 88b15ee:	84 c0                	test   %al,%al
 88b15f0:	75 0b                	jne    88b15fd <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0xb3>
 88b15f2:	0f b6 45 b2          	movzbl -0x4e(%ebp),%eax
 88b15f6:	83 f0 01             	xor    $0x1,%eax
 88b15f9:	84 c0                	test   %al,%al
 88b15fb:	74 03                	je     88b1600 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0xb6>
 88b15fd:	90                   	nop
 88b15fe:	eb 8d                	jmp    88b158d <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x43>
 88b1600:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1607:	e8 6f ad 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b160c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 88b160f:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1612:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88b1615:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1619:	89 04 24             	mov    %eax,(%esp)
 88b161c:	e8 f9 bc 81 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 88b1621:	83 ec 04             	sub    $0x4,%esp
 88b1624:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1627:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b162a:	8d 4d ac             	lea    -0x54(%ebp),%ecx
 88b162d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88b1631:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1635:	89 04 24             	mov    %eax,(%esp)
 88b1638:	e8 b1 bc 81 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 88b163d:	83 ec 04             	sub    $0x4,%esp
 88b1640:	8d 45 b8             	lea    -0x48(%ebp),%eax
 88b1643:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1647:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88b164a:	89 04 24             	mov    %eax,(%esp)
 88b164d:	e8 9e 62 81 ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 88b1652:	84 c0                	test   %al,%al
 88b1654:	74 3a                	je     88b1690 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x146>
 88b1656:	8d 45 a8             	lea    -0x58(%ebp),%eax
 88b1659:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b165d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 88b1660:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1664:	8d 45 c8             	lea    -0x38(%ebp),%eax
 88b1667:	89 04 24             	mov    %eax,(%esp)
 88b166a:	e8 51 94 a4 ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 88b166f:	8b 55 08             	mov    0x8(%ebp),%edx
 88b1672:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88b1675:	8d 4d c8             	lea    -0x38(%ebp),%ecx
 88b1678:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88b167c:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b1680:	89 04 24             	mov    %eax,(%esp)
 88b1683:	e8 c8 56 81 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 88b1688:	83 ec 04             	sub    $0x4,%esp
 88b168b:	e9 36 ff ff ff       	jmp    88b15c6 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x7c>
 88b1690:	8b 45 ac             	mov    -0x54(%ebp),%eax
 88b1693:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1697:	c7 04 24 a8 70 e0 08 	movl   $0x8e070a8,(%esp)
 88b169e:	e8 bd c4 7c ff       	call   807db60 <printf@plt>
 88b16a3:	bb fe ff ff ff       	mov    $0xfffffffe,%ebx
 88b16a8:	e9 62 02 00 00       	jmp    88b190f <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x3c5>
 88b16ad:	c7 44 24 04 d2 70 e0 	movl   $0x8e070d2,0x4(%esp)
 88b16b4:	08 
 88b16b5:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b16b8:	89 04 24             	mov    %eax,(%esp)
 88b16bb:	e8 e1 f2 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b16c0:	84 c0                	test   %al,%al
 88b16c2:	0f 84 8f 01 00 00    	je     88b1857 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x30d>
 88b16c8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b16cf:	00 
 88b16d0:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 88b16d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b16d7:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b16da:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b16de:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 88b16e1:	89 04 24             	mov    %eax,(%esp)
 88b16e4:	e8 c6 b7 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b16e9:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 88b16ec:	0f b6 45 b3          	movzbl -0x4d(%ebp),%eax
 88b16f0:	84 c0                	test   %al,%al
 88b16f2:	75 0b                	jne    88b16ff <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x1b5>
 88b16f4:	0f b6 45 b2          	movzbl -0x4e(%ebp),%eax
 88b16f8:	83 f0 01             	xor    $0x1,%eax
 88b16fb:	84 c0                	test   %al,%al
 88b16fd:	74 06                	je     88b1705 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x1bb>
 88b16ff:	90                   	nop
 88b1700:	e9 88 fe ff ff       	jmp    88b158d <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x43>
 88b1705:	c7 04 24 0a 00 00 00 	movl   $0xa,(%esp)
 88b170c:	e8 3f 2d e7 ff       	call   8724450 <_Znwj>
 88b1711:	89 c1                	mov    %eax,%ecx
 88b1713:	89 ca                	mov    %ecx,%edx
 88b1715:	b8 00 00 00 00       	mov    $0x0,%eax
 88b171a:	89 c3                	mov    %eax,%ebx
 88b171c:	66 c7 04 9a 00 00    	movw   $0x0,(%edx,%ebx,4)
 88b1722:	89 c3                	mov    %eax,%ebx
 88b1724:	66 c7 44 9a 02 00 00 	movw   $0x0,0x2(%edx,%ebx,4)
 88b172b:	83 f8 01             	cmp    $0x1,%eax
 88b172e:	74 05                	je     88b1735 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x1eb>
 88b1730:	83 c0 01             	add    $0x1,%eax
 88b1733:	eb e5                	jmp    88b171a <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x1d0>
 88b1735:	c6 42 08 00          	movb   $0x0,0x8(%edx)
 88b1739:	89 c8                	mov    %ecx,%eax
 88b173b:	89 45 a0             	mov    %eax,-0x60(%ebp)
 88b173e:	8b 5d a0             	mov    -0x60(%ebp),%ebx
 88b1741:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1748:	e8 2e ac 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b174d:	66 89 03             	mov    %ax,(%ebx)
 88b1750:	8b 5d a0             	mov    -0x60(%ebp),%ebx
 88b1753:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b175a:	e8 1c ac 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b175f:	66 89 43 02          	mov    %ax,0x2(%ebx)
 88b1763:	8b 5d a0             	mov    -0x60(%ebp),%ebx
 88b1766:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b176d:	e8 09 ac 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1772:	66 89 43 04          	mov    %ax,0x4(%ebx)
 88b1776:	8b 5d a0             	mov    -0x60(%ebp),%ebx
 88b1779:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1780:	e8 f6 ab 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1785:	66 89 43 06          	mov    %ax,0x6(%ebx)
 88b1789:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b1790:	e8 e6 ab 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b1795:	89 45 ec             	mov    %eax,-0x14(%ebp)
 88b1798:	8b 45 a0             	mov    -0x60(%ebp),%eax
 88b179b:	83 7d ec 01          	cmpl   $0x1,-0x14(%ebp)
 88b179f:	0f 94 c2             	sete   %dl
 88b17a2:	88 50 08             	mov    %dl,0x8(%eax)
 88b17a5:	8b 45 08             	mov    0x8(%ebp),%eax
 88b17a8:	8d 50 18             	lea    0x18(%eax),%edx
 88b17ab:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b17ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b17b2:	89 04 24             	mov    %eax,(%esp)
 88b17b5:	e8 74 22 8e ff       	call   8193a2e <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE3endEv>
 88b17ba:	83 ec 04             	sub    $0x4,%esp
 88b17bd:	8b 45 08             	mov    0x8(%ebp),%eax
 88b17c0:	8d 48 18             	lea    0x18(%eax),%ecx
 88b17c3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88b17c6:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 88b17c9:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b17cd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b17d1:	89 04 24             	mov    %eax,(%esp)
 88b17d4:	e8 7b 08 00 00       	call   88b2054 <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE4findERS8_>
 88b17d9:	83 ec 04             	sub    $0x4,%esp
 88b17dc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 88b17df:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b17e3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88b17e6:	89 04 24             	mov    %eax,(%esp)
 88b17e9:	e8 66 22 8e ff       	call   8193a54 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEEeqERKS8_>
 88b17ee:	84 c0                	test   %al,%al
 88b17f0:	74 3d                	je     88b182f <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x2e5>
 88b17f2:	8d 45 a0             	lea    -0x60(%ebp),%eax
 88b17f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b17f9:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 88b17fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1800:	8d 45 e0             	lea    -0x20(%ebp),%eax
 88b1803:	89 04 24             	mov    %eax,(%esp)
 88b1806:	e8 75 08 00 00       	call   88b2080 <_ZNSt4pairIKiPN4ARAD6SCRIPT14EmblemCompound6ResultEEC1IRiRS5_EEOT_OT0_>
 88b180b:	8b 45 08             	mov    0x8(%ebp),%eax
 88b180e:	8d 48 18             	lea    0x18(%eax),%ecx
 88b1811:	8d 45 d8             	lea    -0x28(%ebp),%eax
 88b1814:	8d 55 e0             	lea    -0x20(%ebp),%edx
 88b1817:	89 54 24 08          	mov    %edx,0x8(%esp)
 88b181b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88b181f:	89 04 24             	mov    %eax,(%esp)
 88b1822:	e8 87 08 00 00       	call   88b20ae <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEE6insertERKS9_>
 88b1827:	83 ec 04             	sub    $0x4,%esp
 88b182a:	e9 99 fe ff ff       	jmp    88b16c8 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x17e>
 88b182f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 88b1832:	89 04 24             	mov    %eax,(%esp)
 88b1835:	e8 b6 2c e7 ff       	call   87244f0 <_ZdlPv>
 88b183a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 88b183d:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1841:	c7 04 24 ec 70 e0 08 	movl   $0x8e070ec,(%esp)
 88b1848:	e8 13 c3 7c ff       	call   807db60 <printf@plt>
 88b184d:	bb fe ff ff ff       	mov    $0xfffffffe,%ebx
 88b1852:	e9 b8 00 00 00       	jmp    88b190f <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x3c5>
 88b1857:	c7 44 24 04 18 71 e0 	movl   $0x8e07118,0x4(%esp)
 88b185e:	08 
 88b185f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b1862:	89 04 24             	mov    %eax,(%esp)
 88b1865:	e8 37 f1 7c ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88b186a:	84 c0                	test   %al,%al
 88b186c:	0f 84 1a fd ff ff    	je     88b158c <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x42>
 88b1872:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 88b1879:	00 
 88b187a:	8d 45 b2             	lea    -0x4e(%ebp),%eax
 88b187d:	89 44 24 08          	mov    %eax,0x8(%esp)
 88b1881:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b1884:	89 44 24 04          	mov    %eax,0x4(%esp)
 88b1888:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 88b188b:	89 04 24             	mov    %eax,(%esp)
 88b188e:	e8 1c b6 00 00       	call   88bceaf <_Z13ScanTypeOrIntRbRSsS_b>
 88b1893:	89 45 f0             	mov    %eax,-0x10(%ebp)
 88b1896:	0f b6 45 b3          	movzbl -0x4d(%ebp),%eax
 88b189a:	84 c0                	test   %al,%al
 88b189c:	75 0b                	jne    88b18a9 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x35f>
 88b189e:	0f b6 45 b2          	movzbl -0x4e(%ebp),%eax
 88b18a2:	83 f0 01             	xor    $0x1,%eax
 88b18a5:	84 c0                	test   %al,%al
 88b18a7:	74 06                	je     88b18af <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x365>
 88b18a9:	90                   	nop
 88b18aa:	e9 de fc ff ff       	jmp    88b158d <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x43>
 88b18af:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 88b18b6:	e8 c0 aa 00 00       	call   88bc37b <_Z7ScanIntPb>
 88b18bb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88b18be:	8b 45 f4             	mov    -0xc(%ebp),%eax
 88b18c1:	89 45 e8             	mov    %eax,-0x18(%ebp)
 88b18c4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 88b18c7:	89 d0                	mov    %edx,%eax
 88b18c9:	01 c0                	add    %eax,%eax
 88b18cb:	01 d0                	add    %edx,%eax
 88b18cd:	c1 e0 02             	shl    $0x2,%eax
 88b18d0:	83 c0 30             	add    $0x30,%eax
 88b18d3:	03 45 08             	add    0x8(%ebp),%eax
 88b18d6:	8d 55 e8             	lea    -0x18(%ebp),%edx
 88b18d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 88b18dd:	89 04 24             	mov    %eax,(%esp)
 88b18e0:	e8 a7 b8 8e ff       	call   819d18c <_ZNSt6vectorImSaImEE9push_backEOm>
 88b18e5:	eb 8b                	jmp    88b1872 <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x328>
 88b18e7:	90                   	nop
 88b18e8:	e8 67 a7 00 00       	call   88bc054 <_Z20unloadRDARScriptFilev>
 88b18ed:	bb 00 00 00 00       	mov    $0x0,%ebx
 88b18f2:	eb 1b                	jmp    88b190f <_ZN4ARAD6SCRIPT14EmblemCompound10loadScriptEv+0x3c5>
 88b18f4:	89 d3                	mov    %edx,%ebx
 88b18f6:	89 c6                	mov    %eax,%esi
 88b18f8:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b18fb:	89 04 24             	mov    %eax,(%esp)
 88b18fe:	e8 dd 62 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b1903:	89 f0                	mov    %esi,%eax
 88b1905:	89 da                	mov    %ebx,%edx
 88b1907:	89 04 24             	mov    %eax,(%esp)
 88b190a:	e8 41 1e 23 00       	call   8ae3750 <_Unwind_Resume>
 88b190f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88b1912:	89 04 24             	mov    %eax,(%esp)
 88b1915:	e8 c6 62 e5 ff       	call   8707be0 <_ZNSsD1Ev>
 88b191a:	89 d8                	mov    %ebx,%eax
 88b191c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88b191f:	83 c4 00             	add    $0x0,%esp
 88b1922:	5b                   	pop    %ebx
 88b1923:	5e                   	pop    %esi
 88b1924:	5d                   	pop    %ebp
 88b1925:	c3                   	ret

```

```c
// ARAD::SCRIPT::EmblemCompound::loadScript @ 0x88b154a

/* ARAD::SCRIPT::EmblemCompound::loadScript() */

undefined4 __thiscall ARAD::SCRIPT::EmblemCompound::loadScript(EmblemCompound *this)

{
  Result *pRVar1;
  char cVar2;
  bool bVar3;
  undefined2 uVar4;
  Result *pRVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  Result *local_64;
  int local_60;
  int local_5c;
  int local_58;
  bool local_52;
  bool local_51;
  string local_50;
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_4c [4];
  _Rb_tree_iterator<std::pair<int_const,int>> local_48 [4];
  pair local_44 [8];
  pair<int_const,int> local_3c [8];
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  local_34 [4];
  _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>> local_30 [4];
  pair local_2c [8];
  pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*> local_24 [8];
  ulong local_1c;
  int local_18;
  int local_14;
  ulong local_10;
  
  cVar2 = loadRDARScriptFile("Etc/EmblemRenewal/","emblem_compound_jpn.etc");
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_50);
    local_51 = false;
    local_52 = false;
                    /* try { // try from 088b159b to 088b18ec has its CatchHandler @ 088b18f4 */
    while (cVar2 = ScanType((string *)&local_50,true), cVar2 == '\x01') {
      bVar3 = std::operator==(&local_50,"[emblem compound cost]");
      if (bVar3) {
        while ((local_58 = ScanTypeOrInt(&local_51,(string *)&local_50,&local_52,true),
               local_51 == false && (local_52 == true))) {
          local_5c = ScanInt((bool *)0x0);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_4c);
          piVar8 = &local_58;
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find
                    ((int *)local_48);
          cVar2 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                            (local_48,(_Rb_tree_iterator *)local_4c);
          if (cVar2 == '\0') {
            printf("[emblem compound cost] duplicate grade:%d",local_58,piVar8);
            uVar7 = 0xfffffffe;
            goto LAB_088b190f;
          }
          std::pair<int_const,int>::pair<int&,int&>(local_3c,&local_58,&local_5c);
          std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert
                    (local_44);
        }
      }
      else {
        bVar3 = std::operator==(&local_50,"[emblem compound result]");
        if (bVar3) {
          while ((local_60 = ScanTypeOrInt(&local_51,(string *)&local_50,&local_52,true),
                 local_51 == false && (local_52 == true))) {
            pRVar5 = operator_new(10);
            iVar6 = 0;
            while( true ) {
              *(undefined2 *)(pRVar5 + iVar6 * 4) = 0;
              *(undefined2 *)(pRVar5 + iVar6 * 4 + 2) = 0;
              if (iVar6 == 1) break;
              iVar6 = iVar6 + 1;
            }
            pRVar5[8] = (Result)0x0;
            local_64 = pRVar5;
            uVar4 = ScanInt((bool *)0x0);
            pRVar1 = local_64;
            *(undefined2 *)pRVar5 = uVar4;
            uVar4 = ScanInt((bool *)0x0);
            pRVar5 = local_64;
            *(undefined2 *)(pRVar1 + 2) = uVar4;
            uVar4 = ScanInt((bool *)0x0);
            pRVar1 = local_64;
            *(undefined2 *)(pRVar5 + 4) = uVar4;
            uVar4 = ScanInt((bool *)0x0);
            *(undefined2 *)(pRVar1 + 6) = uVar4;
            local_18 = ScanInt((bool *)0x0);
            local_64[8] = (Result)(local_18 == 1);
            std::
            map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
            ::end(local_34);
            piVar8 = &local_60;
            std::
            map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
            ::find((int *)local_30);
            cVar2 = std::
                    _Rb_tree_iterator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>::
                    operator==(local_30,(_Rb_tree_iterator *)local_34);
            if (cVar2 == '\0') {
              operator_delete(local_64);
              printf("[emblem compound result] duplicate grade:%d",local_60,piVar8);
              uVar7 = 0xfffffffe;
              goto LAB_088b190f;
            }
            std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>::
            pair<int&,ARAD::SCRIPT::EmblemCompound::Result*&>(local_24,&local_60,&local_64);
            std::
            map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
            ::insert(local_2c);
          }
        }
        else {
          bVar3 = std::operator==(&local_50,"[emblem list]");
          if (bVar3) {
            while ((local_14 = ScanTypeOrInt(&local_51,(string *)&local_50,&local_52,true),
                   local_51 == false && (local_52 == true))) {
              local_1c = ScanInt((bool *)0x0);
              local_10 = local_1c;
              std::vector<unsigned_long,std::allocator<unsigned_long>>::push_back
                        ((vector<unsigned_long,std::allocator<unsigned_long>> *)
                         (this + local_14 * 0xc + 0x30),&local_1c);
            }
          }
        }
      }
    }
    unloadRDARScriptFile();
    uVar7 = 0;
LAB_088b190f:
    std::string::~string((string *)&local_50);
  }
  else {
    uVar7 = 0xffffffff;
  }
  return uVar7;
}

```

---

## ~EmblemCompound

```asm
// === 088b14c2 ARAD::SCRIPT::EmblemCompound::~EmblemCompound  [0x088b14c2-0x88b1549] ===
 88b14c2:	55                   	push   %ebp
 88b14c3:	89 e5                	mov    %esp,%ebp
 88b14c5:	56                   	push   %esi
 88b14c6:	53                   	push   %ebx
 88b14c7:	83 ec 10             	sub    $0x10,%esp
 88b14ca:	8b 45 08             	mov    0x8(%ebp),%eax
 88b14cd:	83 c0 30             	add    $0x30,%eax
 88b14d0:	85 c0                	test   %eax,%eax
 88b14d2:	74 38                	je     88b150c <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev+0x4a>
 88b14d4:	8b 45 08             	mov    0x8(%ebp),%eax
 88b14d7:	83 c0 30             	add    $0x30,%eax
 88b14da:	8d 58 54             	lea    0x54(%eax),%ebx
 88b14dd:	8b 45 08             	mov    0x8(%ebp),%eax
 88b14e0:	83 c0 30             	add    $0x30,%eax
 88b14e3:	39 c3                	cmp    %eax,%ebx
 88b14e5:	74 25                	je     88b150c <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev+0x4a>
 88b14e7:	83 eb 0c             	sub    $0xc,%ebx
 88b14ea:	89 1c 24             	mov    %ebx,(%esp)
 88b14ed:	e8 e4 3e 84 ff       	call   80f53d6 <_ZNSt6vectorImSaImEED1Ev>
 88b14f2:	eb e9                	jmp    88b14dd <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev+0x1b>
 88b14f4:	89 d3                	mov    %edx,%ebx
 88b14f6:	89 c6                	mov    %eax,%esi
 88b14f8:	8b 45 08             	mov    0x8(%ebp),%eax
 88b14fb:	83 c0 18             	add    $0x18,%eax
 88b14fe:	89 04 24             	mov    %eax,(%esp)
 88b1501:	e8 14 0a 00 00       	call   88b1f1a <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 88b1506:	89 f0                	mov    %esi,%eax
 88b1508:	89 da                	mov    %ebx,%edx
 88b150a:	eb 10                	jmp    88b151c <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev+0x5a>
 88b150c:	8b 45 08             	mov    0x8(%ebp),%eax
 88b150f:	83 c0 18             	add    $0x18,%eax
 88b1512:	89 04 24             	mov    %eax,(%esp)
 88b1515:	e8 00 0a 00 00       	call   88b1f1a <_ZNSt3mapIiPN4ARAD6SCRIPT14EmblemCompound6ResultESt4lessIiESaISt4pairIKiS4_EEED1Ev>
 88b151a:	eb 1b                	jmp    88b1537 <_ZN4ARAD6SCRIPT14EmblemCompoundD1Ev+0x75>
 88b151c:	89 d3                	mov    %edx,%ebx
 88b151e:	89 c6                	mov    %eax,%esi
 88b1520:	8b 45 08             	mov    0x8(%ebp),%eax
 88b1523:	89 04 24             	mov    %eax,(%esp)
 88b1526:	e8 9b 55 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b152b:	89 f0                	mov    %esi,%eax
 88b152d:	89 da                	mov    %ebx,%edx
 88b152f:	89 04 24             	mov    %eax,(%esp)
 88b1532:	e8 19 22 23 00       	call   8ae3750 <_Unwind_Resume>
 88b1537:	8b 45 08             	mov    0x8(%ebp),%eax
 88b153a:	89 04 24             	mov    %eax,(%esp)
 88b153d:	e8 84 55 81 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 88b1542:	83 c4 10             	add    $0x10,%esp
 88b1545:	5b                   	pop    %ebx
 88b1546:	5e                   	pop    %esi
 88b1547:	5d                   	pop    %ebp
 88b1548:	c3                   	ret
 88b1549:	90                   	nop

```

```c
// ARAD::SCRIPT::EmblemCompound::~EmblemCompound @ 0x88b14c2

/* ARAD::SCRIPT::EmblemCompound::~EmblemCompound() */

void __thiscall ARAD::SCRIPT::EmblemCompound::~EmblemCompound(EmblemCompound *this)

{
  vector<unsigned_long,std::allocator<unsigned_long>> *this_00;
  
  if (this != (EmblemCompound *)0xffffffd0) {
    this_00 = (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x84);
    while (this_00 != (vector<unsigned_long,std::allocator<unsigned_long>> *)(this + 0x30)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 088b14ed to 088b14f1 has its CatchHandler @ 088b14f4 */
      std::vector<unsigned_long,std::allocator<unsigned_long>>::~vector(this_00);
    }
  }
                    /* try { // try from 088b1515 to 088b1519 has its CatchHandler @ 088b151c */
  std::
  map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
  ::~map((map<int,ARAD::SCRIPT::EmblemCompound::Result*,std::less<int>,std::allocator<std::pair<int_const,ARAD::SCRIPT::EmblemCompound::Result*>>>
          *)(this + 0x18));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  return;
}

```

