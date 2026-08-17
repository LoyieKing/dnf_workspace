# user_creature__CCreatureScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CCreatureScript

```asm
// === 0833c77e user_creature::CCreatureScript::CCreatureScript  [0x0833c77e-0x833c847] ===
 833c77e:	55                   	push   %ebp
 833c77f:	89 e5                	mov    %esp,%ebp
 833c781:	56                   	push   %esi
 833c782:	53                   	push   %ebx
 833c783:	83 ec 10             	sub    $0x10,%esp
 833c786:	8b 45 08             	mov    0x8(%ebp),%eax
 833c789:	83 c0 08             	add    $0x8,%eax
 833c78c:	89 04 24             	mov    %eax,(%esp)
 833c78f:	e8 18 1a d5 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 833c794:	8b 45 08             	mov    0x8(%ebp),%eax
 833c797:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 833c79e:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7a1:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 833c7a8:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7ab:	c6 40 2c 00          	movb   $0x0,0x2c(%eax)
 833c7af:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7b2:	83 c0 34             	add    $0x34,%eax
 833c7b5:	89 04 24             	mov    %eax,(%esp)
 833c7b8:	e8 1f dc d9 ff       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 833c7bd:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7c0:	83 c0 68             	add    $0x68,%eax
 833c7c3:	89 04 24             	mov    %eax,(%esp)
 833c7c6:	e8 e1 19 d5 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 833c7cb:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7ce:	83 c0 08             	add    $0x8,%eax
 833c7d1:	89 04 24             	mov    %eax,(%esp)
 833c7d4:	e8 95 a3 d5 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 833c7d9:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7dc:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 833c7e3:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7e6:	83 c0 68             	add    $0x68,%eax
 833c7e9:	89 04 24             	mov    %eax,(%esp)
 833c7ec:	e8 7d a3 d5 ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 833c7f1:	eb 4e                	jmp    833c841 <_ZN13user_creature15CCreatureScriptC1Ev+0xc3>
 833c7f3:	89 d3                	mov    %edx,%ebx
 833c7f5:	89 c6                	mov    %eax,%esi
 833c7f7:	8b 45 08             	mov    0x8(%ebp),%eax
 833c7fa:	83 c0 68             	add    $0x68,%eax
 833c7fd:	89 04 24             	mov    %eax,(%esp)
 833c800:	e8 d5 75 d4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 833c805:	89 f0                	mov    %esi,%eax
 833c807:	89 da                	mov    %ebx,%edx
 833c809:	eb 00                	jmp    833c80b <_ZN13user_creature15CCreatureScriptC1Ev+0x8d>
 833c80b:	89 d3                	mov    %edx,%ebx
 833c80d:	89 c6                	mov    %eax,%esi
 833c80f:	8b 45 08             	mov    0x8(%ebp),%eax
 833c812:	83 c0 34             	add    $0x34,%eax
 833c815:	89 04 24             	mov    %eax,(%esp)
 833c818:	e8 17 d7 d9 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 833c81d:	89 f0                	mov    %esi,%eax
 833c81f:	89 da                	mov    %ebx,%edx
 833c821:	eb 00                	jmp    833c823 <_ZN13user_creature15CCreatureScriptC1Ev+0xa5>
 833c823:	89 d3                	mov    %edx,%ebx
 833c825:	89 c6                	mov    %eax,%esi
 833c827:	8b 45 08             	mov    0x8(%ebp),%eax
 833c82a:	83 c0 08             	add    $0x8,%eax
 833c82d:	89 04 24             	mov    %eax,(%esp)
 833c830:	e8 a5 75 d4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 833c835:	89 f0                	mov    %esi,%eax
 833c837:	89 da                	mov    %ebx,%edx
 833c839:	89 04 24             	mov    %eax,(%esp)
 833c83c:	e8 0f 6f 7a 00       	call   8ae3750 <_Unwind_Resume>
 833c841:	83 c4 10             	add    $0x10,%esp
 833c844:	5b                   	pop    %ebx
 833c845:	5e                   	pop    %esi
 833c846:	5d                   	pop    %ebp
 833c847:	c3                   	ret

```

```c
// user_creature::CCreatureScript::CCreatureScript @ 0x833c77e

/* user_creature::CCreatureScript::CCreatureScript() */

void __thiscall user_creature::CCreatureScript::CCreatureScript(CCreatureScript *this)

{
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 8));
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x2c] = (CCreatureScript)0x0;
                    /* try { // try from 0833c7b8 to 0833c7bc has its CatchHandler @ 0833c823 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x34));
                    /* try { // try from 0833c7c6 to 0833c7ca has its CatchHandler @ 0833c80b */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x68));
                    /* try { // try from 0833c7d4 to 0833c7f0 has its CatchHandler @ 0833c7f3 */
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 8));
  *(undefined4 *)(this + 0x20) = 0;
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)(this + 0x68));
  return;
}

```

---

## GetItemEvolutionCreatureId

```asm
// === 0833cad8 user_creature::CCreatureScript::GetItemEvolutionCreatureId  [0x0833cad8-0x833cb37] ===
 833cad8:	55                   	push   %ebp
 833cad9:	89 e5                	mov    %esp,%ebp
 833cadb:	83 ec 28             	sub    $0x28,%esp
 833cade:	8b 45 08             	mov    0x8(%ebp),%eax
 833cae1:	8d 48 34             	lea    0x34(%eax),%ecx
 833cae4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833cae7:	8d 55 0c             	lea    0xc(%ebp),%edx
 833caea:	89 54 24 08          	mov    %edx,0x8(%esp)
 833caee:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833caf2:	89 04 24             	mov    %eax,(%esp)
 833caf5:	e8 7a da d9 ff       	call   80da574 <_ZNSt3setIiSt4lessIiESaIiEE4findERKi>
 833cafa:	83 ec 04             	sub    $0x4,%esp
 833cafd:	8b 45 08             	mov    0x8(%ebp),%eax
 833cb00:	8d 50 34             	lea    0x34(%eax),%edx
 833cb03:	8d 45 f4             	lea    -0xc(%ebp),%eax
 833cb06:	89 54 24 04          	mov    %edx,0x4(%esp)
 833cb0a:	89 04 24             	mov    %eax,(%esp)
 833cb0d:	e8 84 d9 d9 ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 833cb12:	83 ec 04             	sub    $0x4,%esp
 833cb15:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833cb18:	89 44 24 04          	mov    %eax,0x4(%esp)
 833cb1c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 833cb1f:	89 04 24             	mov    %eax,(%esp)
 833cb22:	e8 2b 96 da ff       	call   80e6152 <_ZNKSt23_Rb_tree_const_iteratorIiEneERKS0_>
 833cb27:	84 c0                	test   %al,%al
 833cb29:	74 05                	je     833cb30 <_ZN13user_creature15CCreatureScript26GetItemEvolutionCreatureIdEi+0x58>
 833cb2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 833cb2e:	eb 05                	jmp    833cb35 <_ZN13user_creature15CCreatureScript26GetItemEvolutionCreatureIdEi+0x5d>
 833cb30:	b8 00 00 00 00       	mov    $0x0,%eax
 833cb35:	c9                   	leave
 833cb36:	c3                   	ret
 833cb37:	90                   	nop

```

```c
// user_creature::CCreatureScript::GetItemEvolutionCreatureId @ 0x833cad8

/* user_creature::CCreatureScript::GetItemEvolutionCreatureId(int) */

int __thiscall
user_creature::CCreatureScript::GetItemEvolutionCreatureId(CCreatureScript *this,int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<int>::operator!=
                    ((_Rb_tree_const_iterator<int> *)local_10,local_14);
  if (cVar1 == '\0') {
    param_1 = 0;
  }
  return param_1;
}

```

---

## IsAvailableArtifactSlot

```asm
// === 0833cb38 user_creature::CCreatureScript::IsAvailableArtifactSlot  [0x0833cb38-0x833cb5f] ===
 833cb38:	55                   	push   %ebp
 833cb39:	89 e5                	mov    %esp,%ebp
 833cb3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 833cb3e:	83 e8 17             	sub    $0x17,%eax
 833cb41:	83 f8 03             	cmp    $0x3,%eax
 833cb44:	7e 07                	jle    833cb4d <_ZN13user_creature15CCreatureScript23IsAvailableArtifactSlotEi+0x15>
 833cb46:	b8 00 00 00 00       	mov    $0x0,%eax
 833cb4b:	eb 11                	jmp    833cb5e <_ZN13user_creature15CCreatureScript23IsAvailableArtifactSlotEi+0x26>
 833cb4d:	8b 45 08             	mov    0x8(%ebp),%eax
 833cb50:	8b 40 20             	mov    0x20(%eax),%eax
 833cb53:	8b 55 0c             	mov    0xc(%ebp),%edx
 833cb56:	83 ea 17             	sub    $0x17,%edx
 833cb59:	01 d0                	add    %edx,%eax
 833cb5b:	0f b6 00             	movzbl (%eax),%eax
 833cb5e:	5d                   	pop    %ebp
 833cb5f:	c3                   	ret

```

```c
// user_creature::CCreatureScript::IsAvailableArtifactSlot @ 0x833cb38

/* user_creature::CCreatureScript::IsAvailableArtifactSlot(int) */

undefined1 __thiscall
user_creature::CCreatureScript::IsAvailableArtifactSlot(CCreatureScript *this,int param_1)

{
  undefined1 uVar1;
  
  if (param_1 + -0x17 < 4) {
    uVar1 = *(undefined1 *)(*(int *)(this + 0x20) + param_1 + -0x17);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## Set

```asm
// === 0833c8e8 user_creature::CCreatureScript::Set  [0x0833c8e8-0x833cad7] ===
 833c8e8:	55                   	push   %ebp
 833c8e9:	89 e5                	mov    %esp,%ebp
 833c8eb:	83 ec 38             	sub    $0x38,%esp
 833c8ee:	c7 04 24 03 00 00 00 	movl   $0x3,(%esp)
 833c8f5:	e8 c6 64 3e 00       	call   8722dc0 <_Znaj>
 833c8fa:	89 c2                	mov    %eax,%edx
 833c8fc:	8b 45 08             	mov    0x8(%ebp),%eax
 833c8ff:	89 50 20             	mov    %edx,0x20(%eax)
 833c902:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 833c909:	eb 22                	jmp    833c92d <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript+0x45>
 833c90b:	8b 45 08             	mov    0x8(%ebp),%eax
 833c90e:	8b 50 20             	mov    0x20(%eax),%edx
 833c911:	8b 45 ec             	mov    -0x14(%ebp),%eax
 833c914:	01 c2                	add    %eax,%edx
 833c916:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 833c919:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c91c:	83 c1 14             	add    $0x14,%ecx
 833c91f:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 833c922:	85 c0                	test   %eax,%eax
 833c924:	0f 95 c0             	setne  %al
 833c927:	88 02                	mov    %al,(%edx)
 833c929:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 833c92d:	83 7d ec 02          	cmpl   $0x2,-0x14(%ebp)
 833c931:	0f 9e c0             	setle  %al
 833c934:	84 c0                	test   %al,%al
 833c936:	75 d3                	jne    833c90b <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript+0x23>
 833c938:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c93b:	8b 90 74 01 00 00    	mov    0x174(%eax),%edx
 833c941:	8b 45 08             	mov    0x8(%ebp),%eax
 833c944:	89 10                	mov    %edx,(%eax)
 833c946:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c949:	8b 90 78 01 00 00    	mov    0x178(%eax),%edx
 833c94f:	8b 45 08             	mov    0x8(%ebp),%eax
 833c952:	89 50 04             	mov    %edx,0x4(%eax)
 833c955:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c958:	05 80 01 00 00       	add    $0x180,%eax
 833c95d:	89 04 24             	mov    %eax,(%esp)
 833c960:	e8 5b 18 d5 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 833c965:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833c968:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 833c96f:	eb 2e                	jmp    833c99f <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript+0xb7>
 833c971:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833c974:	8b 55 0c             	mov    0xc(%ebp),%edx
 833c977:	81 c2 80 01 00 00    	add    $0x180,%edx
 833c97d:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c981:	89 14 24             	mov    %edx,(%esp)
 833c984:	e8 53 18 d5 ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 833c989:	8b 55 08             	mov    0x8(%ebp),%edx
 833c98c:	83 c2 08             	add    $0x8,%edx
 833c98f:	89 44 24 04          	mov    %eax,0x4(%esp)
 833c993:	89 14 24             	mov    %edx,(%esp)
 833c996:	e8 8b 47 dd ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 833c99b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 833c99f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 833c9a2:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 833c9a5:	0f 9c c0             	setl   %al
 833c9a8:	84 c0                	test   %al,%al
 833c9aa:	75 c5                	jne    833c971 <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript+0x89>
 833c9ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c9af:	8b 90 7c 01 00 00    	mov    0x17c(%eax),%edx
 833c9b5:	8b 45 08             	mov    0x8(%ebp),%eax
 833c9b8:	89 50 14             	mov    %edx,0x14(%eax)
 833c9bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c9be:	8b 50 48             	mov    0x48(%eax),%edx
 833c9c1:	8b 45 08             	mov    0x8(%ebp),%eax
 833c9c4:	89 50 18             	mov    %edx,0x18(%eax)
 833c9c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c9ca:	8b 50 1c             	mov    0x1c(%eax),%edx
 833c9cd:	8b 45 08             	mov    0x8(%ebp),%eax
 833c9d0:	89 50 24             	mov    %edx,0x24(%eax)
 833c9d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c9d6:	8b 50 20             	mov    0x20(%eax),%edx
 833c9d9:	8b 45 08             	mov    0x8(%ebp),%eax
 833c9dc:	89 50 28             	mov    %edx,0x28(%eax)
 833c9df:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c9e2:	8b 40 5c             	mov    0x5c(%eax),%eax
 833c9e5:	89 c2                	mov    %eax,%edx
 833c9e7:	8b 45 08             	mov    0x8(%ebp),%eax
 833c9ea:	88 50 2c             	mov    %dl,0x2c(%eax)
 833c9ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 833c9f0:	05 c0 01 00 00       	add    $0x1c0,%eax
 833c9f5:	89 04 24             	mov    %eax,(%esp)
 833c9f8:	e8 11 62 00 00       	call   8342c0e <_ZNKSt6vectorI21st_crature_id_item_idSaIS0_EE4sizeEv>
 833c9fd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 833ca00:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833ca07:	eb 3a                	jmp    833ca43 <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript+0x15b>
 833ca09:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833ca0c:	8b 55 0c             	mov    0xc(%ebp),%edx
 833ca0f:	81 c2 c0 01 00 00    	add    $0x1c0,%edx
 833ca15:	89 44 24 04          	mov    %eax,0x4(%esp)
 833ca19:	89 14 24             	mov    %edx,(%esp)
 833ca1c:	e8 09 62 00 00       	call   8342c2a <_ZNSt6vectorI21st_crature_id_item_idSaIS0_EEixEj>
 833ca21:	89 c2                	mov    %eax,%edx
 833ca23:	8b 45 08             	mov    0x8(%ebp),%eax
 833ca26:	8d 48 34             	lea    0x34(%eax),%ecx
 833ca29:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833ca2c:	89 54 24 08          	mov    %edx,0x8(%esp)
 833ca30:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833ca34:	89 04 24             	mov    %eax,(%esp)
 833ca37:	e8 8a db d9 ff       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 833ca3c:	83 ec 04             	sub    $0x4,%esp
 833ca3f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 833ca43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 833ca46:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 833ca49:	0f 9c c0             	setl   %al
 833ca4c:	84 c0                	test   %al,%al
 833ca4e:	75 b9                	jne    833ca09 <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript+0x121>
 833ca50:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ca53:	0f b6 90 8c 01 00 00 	movzbl 0x18c(%eax),%edx
 833ca5a:	8b 45 08             	mov    0x8(%ebp),%eax
 833ca5d:	88 50 4c             	mov    %dl,0x4c(%eax)
 833ca60:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ca63:	8b 90 90 01 00 00    	mov    0x190(%eax),%edx
 833ca69:	8b 45 08             	mov    0x8(%ebp),%eax
 833ca6c:	89 50 50             	mov    %edx,0x50(%eax)
 833ca6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ca72:	8b 90 94 01 00 00    	mov    0x194(%eax),%edx
 833ca78:	8b 45 08             	mov    0x8(%ebp),%eax
 833ca7b:	89 50 54             	mov    %edx,0x54(%eax)
 833ca7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ca81:	8b 90 98 01 00 00    	mov    0x198(%eax),%edx
 833ca87:	8b 45 08             	mov    0x8(%ebp),%eax
 833ca8a:	89 50 58             	mov    %edx,0x58(%eax)
 833ca8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ca90:	8b 90 9c 01 00 00    	mov    0x19c(%eax),%edx
 833ca96:	8b 45 08             	mov    0x8(%ebp),%eax
 833ca99:	89 50 5c             	mov    %edx,0x5c(%eax)
 833ca9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 833ca9f:	8b 90 a0 01 00 00    	mov    0x1a0(%eax),%edx
 833caa5:	8b 45 08             	mov    0x8(%ebp),%eax
 833caa8:	89 50 60             	mov    %edx,0x60(%eax)
 833caab:	8b 45 0c             	mov    0xc(%ebp),%eax
 833caae:	8b 90 a4 01 00 00    	mov    0x1a4(%eax),%edx
 833cab4:	8b 45 08             	mov    0x8(%ebp),%eax
 833cab7:	89 50 64             	mov    %edx,0x64(%eax)
 833caba:	8b 45 0c             	mov    0xc(%ebp),%eax
 833cabd:	8d 90 08 02 00 00    	lea    0x208(%eax),%edx
 833cac3:	8b 45 08             	mov    0x8(%ebp),%eax
 833cac6:	83 c0 68             	add    $0x68,%eax
 833cac9:	89 54 24 04          	mov    %edx,0x4(%esp)
 833cacd:	89 04 24             	mov    %eax,(%esp)
 833cad0:	e8 fd 04 d9 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 833cad5:	c9                   	leave
 833cad6:	c3                   	ret
 833cad7:	90                   	nop

```

```c
// user_creature::CCreatureScript::Set @ 0x833c8e8

/* user_creature::CCreatureScript::Set(CreatureScript*) */

void __thiscall user_creature::CCreatureScript::Set(CCreatureScript *this,CreatureScript *param_1)

{
  void *pvVar1;
  int *piVar2;
  int local_28 [2];
  int local_20;
  int local_1c;
  int local_18;
  uint local_14;
  uint local_10;
  
  pvVar1 = operator_new__(3);
  *(void **)(this + 0x20) = pvVar1;
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    *(bool *)(*(int *)(this + 0x20) + local_18) = *(int *)(param_1 + (local_18 + 0x14) * 4) != 0;
  }
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 0x178);
  local_20 = std::vector<int,std::allocator<int>>::size
                       ((vector<int,std::allocator<int>> *)(param_1 + 0x180));
  for (local_14 = 0; (int)local_14 < local_20; local_14 = local_14 + 1) {
    piVar2 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x180),local_14);
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(this + 8),piVar2);
  }
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  this[0x2c] = SUB41(*(undefined4 *)(param_1 + 0x5c),0);
  local_1c = std::vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>>::size
                       ((vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>> *)
                        (param_1 + 0x1c0));
  for (local_10 = 0; (int)local_10 < local_1c; local_10 = local_10 + 1) {
    std::vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>>::operator[]
              ((vector<st_crature_id_item_id,std::allocator<st_crature_id_item_id>> *)
               (param_1 + 0x1c0),local_10);
    std::set<int,std::less<int>,std::allocator<int>>::insert(local_28);
  }
  this[0x4c] = *(CCreatureScript *)(param_1 + 0x18c);
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 400);
  *(undefined4 *)(this + 0x54) = *(undefined4 *)(param_1 + 0x194);
  *(undefined4 *)(this + 0x58) = *(undefined4 *)(param_1 + 0x198);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(param_1 + 0x19c);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(param_1 + 0x1a0);
  *(undefined4 *)(this + 100) = *(undefined4 *)(param_1 + 0x1a4);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x68),(vector *)(param_1 + 0x208));
  return;
}

```

---

## ~CCreatureScript

```asm
// === 0833c848 user_creature::CCreatureScript::~CCreatureScript  [0x0833c848-0x833c8e7] ===
 833c848:	55                   	push   %ebp
 833c849:	89 e5                	mov    %esp,%ebp
 833c84b:	56                   	push   %esi
 833c84c:	53                   	push   %ebx
 833c84d:	83 ec 10             	sub    $0x10,%esp
 833c850:	8b 45 08             	mov    0x8(%ebp),%eax
 833c853:	8b 40 20             	mov    0x20(%eax),%eax
 833c856:	85 c0                	test   %eax,%eax
 833c858:	74 22                	je     833c87c <_ZN13user_creature15CCreatureScriptD1Ev+0x34>
 833c85a:	8b 45 08             	mov    0x8(%ebp),%eax
 833c85d:	8b 40 20             	mov    0x20(%eax),%eax
 833c860:	85 c0                	test   %eax,%eax
 833c862:	74 0e                	je     833c872 <_ZN13user_creature15CCreatureScriptD1Ev+0x2a>
 833c864:	8b 45 08             	mov    0x8(%ebp),%eax
 833c867:	8b 40 20             	mov    0x20(%eax),%eax
 833c86a:	89 04 24             	mov    %eax,(%esp)
 833c86d:	e8 3e 83 3e 00       	call   8724bb0 <_ZdaPv>
 833c872:	8b 45 08             	mov    0x8(%ebp),%eax
 833c875:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 833c87c:	8b 45 08             	mov    0x8(%ebp),%eax
 833c87f:	83 c0 68             	add    $0x68,%eax
 833c882:	89 04 24             	mov    %eax,(%esp)
 833c885:	e8 50 75 d4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 833c88a:	eb 18                	jmp    833c8a4 <_ZN13user_creature15CCreatureScriptD1Ev+0x5c>
 833c88c:	89 d3                	mov    %edx,%ebx
 833c88e:	89 c6                	mov    %eax,%esi
 833c890:	8b 45 08             	mov    0x8(%ebp),%eax
 833c893:	83 c0 34             	add    $0x34,%eax
 833c896:	89 04 24             	mov    %eax,(%esp)
 833c899:	e8 96 d6 d9 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 833c89e:	89 f0                	mov    %esi,%eax
 833c8a0:	89 da                	mov    %ebx,%edx
 833c8a2:	eb 10                	jmp    833c8b4 <_ZN13user_creature15CCreatureScriptD1Ev+0x6c>
 833c8a4:	8b 45 08             	mov    0x8(%ebp),%eax
 833c8a7:	83 c0 34             	add    $0x34,%eax
 833c8aa:	89 04 24             	mov    %eax,(%esp)
 833c8ad:	e8 82 d6 d9 ff       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 833c8b2:	eb 1e                	jmp    833c8d2 <_ZN13user_creature15CCreatureScriptD1Ev+0x8a>
 833c8b4:	89 d3                	mov    %edx,%ebx
 833c8b6:	89 c6                	mov    %eax,%esi
 833c8b8:	8b 45 08             	mov    0x8(%ebp),%eax
 833c8bb:	83 c0 08             	add    $0x8,%eax
 833c8be:	89 04 24             	mov    %eax,(%esp)
 833c8c1:	e8 14 75 d4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 833c8c6:	89 f0                	mov    %esi,%eax
 833c8c8:	89 da                	mov    %ebx,%edx
 833c8ca:	89 04 24             	mov    %eax,(%esp)
 833c8cd:	e8 7e 6e 7a 00       	call   8ae3750 <_Unwind_Resume>
 833c8d2:	8b 45 08             	mov    0x8(%ebp),%eax
 833c8d5:	83 c0 08             	add    $0x8,%eax
 833c8d8:	89 04 24             	mov    %eax,(%esp)
 833c8db:	e8 fa 74 d4 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 833c8e0:	83 c4 10             	add    $0x10,%esp
 833c8e3:	5b                   	pop    %ebx
 833c8e4:	5e                   	pop    %esi
 833c8e5:	5d                   	pop    %ebp
 833c8e6:	c3                   	ret
 833c8e7:	90                   	nop

```

```c
// user_creature::CCreatureScript::~CCreatureScript @ 0x833c848

/* user_creature::CCreatureScript::~CCreatureScript() */

void __thiscall user_creature::CCreatureScript::~CCreatureScript(CCreatureScript *this)

{
  if (*(int *)(this + 0x20) != 0) {
    if (*(int *)(this + 0x20) != 0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
                    /* try { // try from 0833c885 to 0833c889 has its CatchHandler @ 0833c88c */
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 0x68));
                    /* try { // try from 0833c8ad to 0833c8b1 has its CatchHandler @ 0833c8b4 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x34));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)(this + 8));
  return;
}

```

