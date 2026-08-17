# CMultiMatchRoomList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## AddRoom

```asm
// === 08567954 CMultiMatchRoomList::AddRoom  [0x08567954-0x8567bb9] ===
 8567954:	55                   	push   %ebp
 8567955:	89 e5                	mov    %esp,%ebp
 8567957:	57                   	push   %edi
 8567958:	53                   	push   %ebx
 8567959:	81 ec 50 01 00 00    	sub    $0x150,%esp
 856795f:	8d 95 d9 fe ff ff    	lea    -0x127(%ebp),%edx
 8567965:	bb ff 00 00 00       	mov    $0xff,%ebx
 856796a:	b8 00 00 00 00       	mov    $0x0,%eax
 856796f:	89 d1                	mov    %edx,%ecx
 8567971:	83 e1 01             	and    $0x1,%ecx
 8567974:	85 c9                	test   %ecx,%ecx
 8567976:	74 08                	je     8567980 <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x2c>
 8567978:	88 02                	mov    %al,(%edx)
 856797a:	83 c2 01             	add    $0x1,%edx
 856797d:	83 eb 01             	sub    $0x1,%ebx
 8567980:	89 d1                	mov    %edx,%ecx
 8567982:	83 e1 02             	and    $0x2,%ecx
 8567985:	85 c9                	test   %ecx,%ecx
 8567987:	74 09                	je     8567992 <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x3e>
 8567989:	66 89 02             	mov    %ax,(%edx)
 856798c:	83 c2 02             	add    $0x2,%edx
 856798f:	83 eb 02             	sub    $0x2,%ebx
 8567992:	89 d9                	mov    %ebx,%ecx
 8567994:	c1 e9 02             	shr    $0x2,%ecx
 8567997:	89 d7                	mov    %edx,%edi
 8567999:	f3 ab                	rep stos %eax,%es:(%edi)
 856799b:	89 fa                	mov    %edi,%edx
 856799d:	89 d9                	mov    %ebx,%ecx
 856799f:	83 e1 02             	and    $0x2,%ecx
 85679a2:	85 c9                	test   %ecx,%ecx
 85679a4:	74 06                	je     85679ac <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x58>
 85679a6:	66 89 02             	mov    %ax,(%edx)
 85679a9:	83 c2 02             	add    $0x2,%edx
 85679ac:	89 d9                	mov    %ebx,%ecx
 85679ae:	83 e1 01             	and    $0x1,%ecx
 85679b1:	85 c9                	test   %ecx,%ecx
 85679b3:	74 05                	je     85679ba <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x66>
 85679b5:	88 02                	mov    %al,(%edx)
 85679b7:	83 c2 01             	add    $0x1,%edx
 85679ba:	8d 85 d9 fe ff ff    	lea    -0x127(%ebp),%eax
 85679c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85679c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85679c7:	89 04 24             	mov    %eax,(%esp)
 85679ca:	e8 28 c6 ff ff       	call   8563ff7 <_Z11GetUserNameP6IMatchPc>
 85679cf:	89 c3                	mov    %eax,%ebx
 85679d1:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85679d8:	00 
 85679d9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85679e0:	00 
 85679e1:	c7 44 24 08 ea 11 00 	movl   $0x11ea,0x8(%esp)
 85679e8:	00 
 85679e9:	c7 44 24 04 c0 31 ca 	movl   $0x8ca31c0,0x4(%esp)
 85679f0:	08 
 85679f1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85679f4:	89 04 24             	mov    %eax,(%esp)
 85679f7:	e8 40 83 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 85679fc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8567a00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567a03:	89 44 24 08          	mov    %eax,0x8(%esp)
 8567a07:	c7 44 24 04 ef 24 ca 	movl   $0x8ca24ef,0x4(%esp)
 8567a0e:	08 
 8567a0f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8567a12:	89 04 24             	mov    %eax,(%esp)
 8567a15:	e8 4a 83 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8567a1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8567a1d:	8d 50 04             	lea    0x4(%eax),%edx
 8567a20:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567a23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567a27:	89 04 24             	mov    %eax,(%esp)
 8567a2a:	e8 0f 21 00 00       	call   8569b3e <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8567a2f:	83 ec 04             	sub    $0x4,%esp
 8567a32:	eb 6a                	jmp    8567a9e <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x14a>
 8567a34:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567a37:	89 04 24             	mov    %eax,(%esp)
 8567a3a:	e8 55 1e 00 00       	call   8569894 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEptEv>
 8567a3f:	8d 50 04             	lea    0x4(%eax),%edx
 8567a42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567a45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567a49:	89 14 24             	mov    %edx,(%esp)
 8567a4c:	e8 21 0e 00 00       	call   8568872 <_ZN16CWaitingRoomList4findEP6IMatch>
 8567a51:	84 c0                	test   %al,%al
 8567a53:	74 3e                	je     8567a93 <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x13f>
 8567a55:	c7 44 24 14 f3 11 00 	movl   $0x11f3,0x14(%esp)
 8567a5c:	00 
 8567a5d:	c7 44 24 10 06 25 ca 	movl   $0x8ca2506,0x10(%esp)
 8567a64:	08 
 8567a65:	c7 44 24 0c f3 11 00 	movl   $0x11f3,0xc(%esp)
 8567a6c:	00 
 8567a6d:	c7 44 24 08 c0 31 ca 	movl   $0x8ca31c0,0x8(%esp)
 8567a74:	08 
 8567a75:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8567a7c:	08 
 8567a7d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8567a84:	e8 81 c1 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8567a89:	b8 00 00 00 00       	mov    $0x0,%eax
 8567a8e:	e9 1d 01 00 00       	jmp    8567bb0 <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x25c>
 8567a93:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567a96:	89 04 24             	mov    %eax,(%esp)
 8567a99:	e8 00 21 00 00       	call   8569b9e <_ZNSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEppEv>
 8567a9e:	8b 45 08             	mov    0x8(%ebp),%eax
 8567aa1:	8d 50 04             	lea    0x4(%eax),%edx
 8567aa4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8567aa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567aab:	89 04 24             	mov    %eax,(%esp)
 8567aae:	e8 b1 20 00 00       	call   8569b64 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8567ab3:	83 ec 04             	sub    $0x4,%esp
 8567ab6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8567ab9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567abd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567ac0:	89 04 24             	mov    %eax,(%esp)
 8567ac3:	e8 c2 20 00 00       	call   8569b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEneERKS4_>
 8567ac8:	84 c0                	test   %al,%al
 8567aca:	0f 85 64 ff ff ff    	jne    8567a34 <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0xe0>
 8567ad0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567ad3:	8b 00                	mov    (%eax),%eax
 8567ad5:	05 84 00 00 00       	add    $0x84,%eax
 8567ada:	8b 10                	mov    (%eax),%edx
 8567adc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567adf:	89 04 24             	mov    %eax,(%esp)
 8567ae2:	ff d2                	call   *%edx
 8567ae4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8567ae7:	8b 45 08             	mov    0x8(%ebp),%eax
 8567aea:	8d 48 04             	lea    0x4(%eax),%ecx
 8567aed:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 8567af3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8567af6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567afa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8567afe:	89 04 24             	mov    %eax,(%esp)
 8567b01:	e8 62 1d 00 00       	call   8569868 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 8567b06:	83 ec 04             	sub    $0x4,%esp
 8567b09:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 8567b0f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8567b12:	8b 45 08             	mov    0x8(%ebp),%eax
 8567b15:	8d 50 04             	lea    0x4(%eax),%edx
 8567b18:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8567b1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567b1f:	89 04 24             	mov    %eax,(%esp)
 8567b22:	e8 3d 20 00 00       	call   8569b64 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8567b27:	83 ec 04             	sub    $0x4,%esp
 8567b2a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8567b2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567b31:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567b34:	89 04 24             	mov    %eax,(%esp)
 8567b37:	e8 4e 20 00 00       	call   8569b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEneERKS4_>
 8567b3c:	84 c0                	test   %al,%al
 8567b3e:	74 1f                	je     8567b5f <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x20b>
 8567b40:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567b43:	89 04 24             	mov    %eax,(%esp)
 8567b46:	e8 49 1d 00 00       	call   8569894 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEptEv>
 8567b4b:	8d 50 04             	lea    0x4(%eax),%edx
 8567b4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567b51:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567b55:	89 14 24             	mov    %edx,(%esp)
 8567b58:	e8 7b 0d 00 00       	call   85688d8 <_ZN16CWaitingRoomList6insertEP6IMatch>
 8567b5d:	eb 4c                	jmp    8567bab <_ZN19CMultiMatchRoomList7AddRoomEP6IMatch+0x257>
 8567b5f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567b62:	8b 00                	mov    (%eax),%eax
 8567b64:	05 84 00 00 00       	add    $0x84,%eax
 8567b69:	8b 10                	mov    (%eax),%edx
 8567b6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567b6e:	89 04 24             	mov    %eax,(%esp)
 8567b71:	ff d2                	call   *%edx
 8567b73:	89 44 24 18          	mov    %eax,0x18(%esp)
 8567b77:	c7 44 24 14 ff 11 00 	movl   $0x11ff,0x14(%esp)
 8567b7e:	00 
 8567b7f:	c7 44 24 10 1c 25 ca 	movl   $0x8ca251c,0x10(%esp)
 8567b86:	08 
 8567b87:	c7 44 24 0c ff 11 00 	movl   $0x11ff,0xc(%esp)
 8567b8e:	00 
 8567b8f:	c7 44 24 08 c0 31 ca 	movl   $0x8ca31c0,0x8(%esp)
 8567b96:	08 
 8567b97:	c7 44 24 04 62 22 ca 	movl   $0x8ca2262,0x4(%esp)
 8567b9e:	08 
 8567b9f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8567ba6:	e8 5f c0 56 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8567bab:	b8 01 00 00 00       	mov    $0x1,%eax
 8567bb0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8567bb3:	83 c4 00             	add    $0x0,%esp
 8567bb6:	5b                   	pop    %ebx
 8567bb7:	5f                   	pop    %edi
 8567bb8:	5d                   	pop    %ebp
 8567bb9:	c3                   	ret

```

```c
// CMultiMatchRoomList::AddRoom @ 0x8567954

/* CMultiMatchRoomList::AddRoom(IMatch*) */

undefined4 __thiscall CMultiMatchRoomList::AddRoom(CMultiMatchRoomList *this,IMatch *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  _Rb_tree_iterator *p_Var8;
  undefined4 *puVar9;
  int local_130;
  char local_12b;
  char local_12a [254];
  int local_2c;
  CSwitchLog local_28 [16];
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_18 [4];
  undefined4 local_14;
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_10 [4];
  
  pcVar5 = &local_12b;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_12b = '\0';
    pcVar5 = local_12a;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  uVar2 = GetUserName(param_1,&local_12b);
  CSwitchLog::CSwitchLog(local_28,"virtual bool CMultiMatchRoomList::AddRoom(IMatch*)",0x11ea,0,0);
  CSwitchLog::operator()(local_28,"pvp@log match(%x), %s ",param_1,uVar2);
  std::
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
  begin((map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
         *)&local_2c);
  while( true ) {
    std::
    map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
    end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') {
      local_14 = (**(code **)(*(int *)param_1 + 0x84))(param_1);
      puVar9 = &local_14;
      std::
      map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
      ::find(&local_130);
      local_2c = local_130;
      std::
      map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
      ::end(local_10);
      p_Var8 = (_Rb_tree_iterator *)local_10;
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c,
                         p_Var8);
      if (cVar1 == '\0') {
        uVar2 = (**(code **)(*(int *)param_1 + 0x84))(param_1,p_Var8,puVar9);
        LogManager::logFormat
                  (1,"MatchingSystem.cpp","virtual bool CMultiMatchRoomList::AddRoom(IMatch*)",
                   0x11ff,"error find line(%d), playCount(%d)",0x11ff,uVar2);
      }
      else {
        iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->
                          ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c);
        CWaitingRoomList::insert((IMatch *)(iVar3 + 4));
      }
      return 1;
    }
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c);
    cVar1 = CWaitingRoomList::find((IMatch *)(iVar3 + 4));
    if (cVar1 != '\0') break;
    std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)&local_2c);
  }
  LogManager::logFormat
            (1,"MatchingSystem.cpp","virtual bool CMultiMatchRoomList::AddRoom(IMatch*)",0x11f3,
             "error find line(%d)",0x11f3);
  return 0;
}

```

---

## CMultiMatchRoomList

```asm
// === 08566efc CMultiMatchRoomList::CMultiMatchRoomList  [0x08566efc-0x856703b] ===
 8566efc:	55                   	push   %ebp
 8566efd:	89 e5                	mov    %esp,%ebp
 8566eff:	56                   	push   %esi
 8566f00:	53                   	push   %ebx
 8566f01:	83 ec 70             	sub    $0x70,%esp
 8566f04:	8b 45 08             	mov    0x8(%ebp),%eax
 8566f07:	89 04 24             	mov    %eax,(%esp)
 8566f0a:	e8 93 20 00 00       	call   8568fa2 <_ZN9IRoomListC1Ev>
 8566f0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8566f12:	c7 00 c8 3b ca 08    	movl   $0x8ca3bc8,(%eax)
 8566f18:	8b 45 08             	mov    0x8(%ebp),%eax
 8566f1b:	83 c0 04             	add    $0x4,%eax
 8566f1e:	89 04 24             	mov    %eax,(%esp)
 8566f21:	e8 82 26 00 00       	call   85695a8 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEEC1Ev>
 8566f26:	8d 45 98             	lea    -0x68(%ebp),%eax
 8566f29:	89 04 24             	mov    %eax,(%esp)
 8566f2c:	e8 1d 21 00 00       	call   856904e <_ZN16CWaitingRoomListC1Ev>
 8566f31:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8566f38:	e9 9c 00 00 00       	jmp    8566fd9 <_ZN19CMultiMatchRoomListC1Ev+0xdd>
 8566f3d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8566f40:	83 c0 01             	add    $0x1,%eax
 8566f43:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8566f46:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8566f49:	8d 55 98             	lea    -0x68(%ebp),%edx
 8566f4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8566f50:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8566f53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8566f57:	89 04 24             	mov    %eax,(%esp)
 8566f5a:	e8 3c 27 00 00       	call   856969b <_ZSt9make_pairIiR16CWaitingRoomListESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 8566f5f:	83 ec 04             	sub    $0x4,%esp
 8566f62:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8566f65:	89 44 24 04          	mov    %eax,0x4(%esp)
 8566f69:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8566f6c:	89 04 24             	mov    %eax,(%esp)
 8566f6f:	e8 8e 27 00 00       	call   8569702 <_ZNSt4pairIKi16CWaitingRoomListEC1IiS1_EEOS_IT_T0_E>
 8566f74:	8b 45 08             	mov    0x8(%ebp),%eax
 8566f77:	8d 48 04             	lea    0x4(%eax),%ecx
 8566f7a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8566f7d:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8566f80:	89 54 24 08          	mov    %edx,0x8(%esp)
 8566f84:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8566f88:	89 04 24             	mov    %eax,(%esp)
 8566f8b:	e8 ac 27 00 00       	call   856973c <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE6insertERKS5_>
 8566f90:	83 ec 04             	sub    $0x4,%esp
 8566f93:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8566f96:	89 04 24             	mov    %eax,(%esp)
 8566f99:	e8 ee 20 00 00       	call   856908c <_ZNSt4pairIKi16CWaitingRoomListED1Ev>
 8566f9e:	eb 2a                	jmp    8566fca <_ZN19CMultiMatchRoomListC1Ev+0xce>
 8566fa0:	89 d3                	mov    %edx,%ebx
 8566fa2:	89 c6                	mov    %eax,%esi
 8566fa4:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8566fa7:	89 04 24             	mov    %eax,(%esp)
 8566faa:	e8 dd 20 00 00       	call   856908c <_ZNSt4pairIKi16CWaitingRoomListED1Ev>
 8566faf:	89 f0                	mov    %esi,%eax
 8566fb1:	89 da                	mov    %ebx,%edx
 8566fb3:	eb 00                	jmp    8566fb5 <_ZN19CMultiMatchRoomListC1Ev+0xb9>
 8566fb5:	89 d3                	mov    %edx,%ebx
 8566fb7:	89 c6                	mov    %eax,%esi
 8566fb9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8566fbc:	89 04 24             	mov    %eax,(%esp)
 8566fbf:	e8 b2 20 00 00       	call   8569076 <_ZNSt4pairIi16CWaitingRoomListED1Ev>
 8566fc4:	89 f0                	mov    %esi,%eax
 8566fc6:	89 da                	mov    %ebx,%edx
 8566fc8:	eb 27                	jmp    8566ff1 <_ZN19CMultiMatchRoomListC1Ev+0xf5>
 8566fca:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8566fcd:	89 04 24             	mov    %eax,(%esp)
 8566fd0:	e8 a1 20 00 00       	call   8569076 <_ZNSt4pairIi16CWaitingRoomListED1Ev>
 8566fd5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8566fd9:	e8 56 b8 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 8566fde:	0f b6 c0             	movzbl %al,%eax
 8566fe1:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8566fe4:	0f 9f c0             	setg   %al
 8566fe7:	84 c0                	test   %al,%al
 8566fe9:	0f 85 4e ff ff ff    	jne    8566f3d <_ZN19CMultiMatchRoomListC1Ev+0x41>
 8566fef:	eb 15                	jmp    8567006 <_ZN19CMultiMatchRoomListC1Ev+0x10a>
 8566ff1:	89 d3                	mov    %edx,%ebx
 8566ff3:	89 c6                	mov    %eax,%esi
 8566ff5:	8d 45 98             	lea    -0x68(%ebp),%eax
 8566ff8:	89 04 24             	mov    %eax,(%esp)
 8566ffb:	e8 62 20 00 00       	call   8569062 <_ZN16CWaitingRoomListD1Ev>
 8567000:	89 f0                	mov    %esi,%eax
 8567002:	89 da                	mov    %ebx,%edx
 8567004:	eb 0d                	jmp    8567013 <_ZN19CMultiMatchRoomListC1Ev+0x117>
 8567006:	8d 45 98             	lea    -0x68(%ebp),%eax
 8567009:	89 04 24             	mov    %eax,(%esp)
 856700c:	e8 51 20 00 00       	call   8569062 <_ZN16CWaitingRoomListD1Ev>
 8567011:	eb 1e                	jmp    8567031 <_ZN19CMultiMatchRoomListC1Ev+0x135>
 8567013:	89 d3                	mov    %edx,%ebx
 8567015:	89 c6                	mov    %eax,%esi
 8567017:	8b 45 08             	mov    0x8(%ebp),%eax
 856701a:	83 c0 04             	add    $0x4,%eax
 856701d:	89 04 24             	mov    %eax,(%esp)
 8567020:	e8 01 20 00 00       	call   8569026 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEED1Ev>
 8567025:	89 f0                	mov    %esi,%eax
 8567027:	89 da                	mov    %ebx,%edx
 8567029:	89 04 24             	mov    %eax,(%esp)
 856702c:	e8 1f c7 57 00       	call   8ae3750 <_Unwind_Resume>
 8567031:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8567034:	83 c4 00             	add    $0x0,%esp
 8567037:	5b                   	pop    %ebx
 8567038:	5e                   	pop    %esi
 8567039:	5d                   	pop    %ebp
 856703a:	c3                   	ret
 856703b:	90                   	nop

```

```c
// CMultiMatchRoomList::CMultiMatchRoomList @ 0x8566efc

/* CMultiMatchRoomList::CMultiMatchRoomList() */

void __thiscall CMultiMatchRoomList::CMultiMatchRoomList(CMultiMatchRoomList *this)

{
  uint uVar1;
  CWaitingRoomList local_6c [24];
  pair local_54 [8];
  pair<int_const,CWaitingRoomList> local_4c [28];
  pair<int,CWaitingRoomList> local_30 [28];
  int local_14;
  int local_10;
  
  IRoomList::IRoomList((IRoomList *)this);
  *(undefined ***)this = &PTR_AddRoom_08ca3bc8;
  std::
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
  map((map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
       *)(this + 4));
                    /* try { // try from 08566f2c to 08566f30 has its CatchHandler @ 08567013 */
  CWaitingRoomList::CWaitingRoomList(local_6c);
  local_10 = 0;
  while( true ) {
    uVar1 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
    if ((int)(uVar1 & 0xff) <= local_10) break;
    local_14 = local_10 + 1;
                    /* try { // try from 08566f5a to 08566f5e has its CatchHandler @ 08566ff1 */
    std::make_pair<int,CWaitingRoomList&>((int *)local_30,(CWaitingRoomList *)&local_14);
                    /* try { // try from 08566f6f to 08566f73 has its CatchHandler @ 08566fb5 */
    std::pair<int_const,CWaitingRoomList>::pair<int,CWaitingRoomList>(local_4c,local_30);
                    /* try { // try from 08566f8b to 08566f8f has its CatchHandler @ 08566fa0 */
    std::
    map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
    insert(local_54);
                    /* try { // try from 08566f99 to 08566f9d has its CatchHandler @ 08566fb5 */
    std::pair<int_const,CWaitingRoomList>::~pair(local_4c);
                    /* try { // try from 08566fd0 to 08566fdd has its CatchHandler @ 08566ff1 */
    std::pair<int,CWaitingRoomList>::~pair(local_30);
    local_10 = local_10 + 1;
  }
                    /* try { // try from 0856700c to 08567010 has its CatchHandler @ 08567013 */
  CWaitingRoomList::~CWaitingRoomList(local_6c);
  return;
}

```

---

## DelRoom

```asm
// === 08567bba CMultiMatchRoomList::DelRoom  [0x08567bba-0x8567cff] ===
 8567bba:	55                   	push   %ebp
 8567bbb:	89 e5                	mov    %esp,%ebp
 8567bbd:	57                   	push   %edi
 8567bbe:	53                   	push   %ebx
 8567bbf:	81 ec 40 01 00 00    	sub    $0x140,%esp
 8567bc5:	8d 95 e1 fe ff ff    	lea    -0x11f(%ebp),%edx
 8567bcb:	bb ff 00 00 00       	mov    $0xff,%ebx
 8567bd0:	b8 00 00 00 00       	mov    $0x0,%eax
 8567bd5:	89 d1                	mov    %edx,%ecx
 8567bd7:	83 e1 01             	and    $0x1,%ecx
 8567bda:	85 c9                	test   %ecx,%ecx
 8567bdc:	74 08                	je     8567be6 <_ZN19CMultiMatchRoomList7DelRoomEP6IMatch+0x2c>
 8567bde:	88 02                	mov    %al,(%edx)
 8567be0:	83 c2 01             	add    $0x1,%edx
 8567be3:	83 eb 01             	sub    $0x1,%ebx
 8567be6:	89 d1                	mov    %edx,%ecx
 8567be8:	83 e1 02             	and    $0x2,%ecx
 8567beb:	85 c9                	test   %ecx,%ecx
 8567bed:	74 09                	je     8567bf8 <_ZN19CMultiMatchRoomList7DelRoomEP6IMatch+0x3e>
 8567bef:	66 89 02             	mov    %ax,(%edx)
 8567bf2:	83 c2 02             	add    $0x2,%edx
 8567bf5:	83 eb 02             	sub    $0x2,%ebx
 8567bf8:	89 d9                	mov    %ebx,%ecx
 8567bfa:	c1 e9 02             	shr    $0x2,%ecx
 8567bfd:	89 d7                	mov    %edx,%edi
 8567bff:	f3 ab                	rep stos %eax,%es:(%edi)
 8567c01:	89 fa                	mov    %edi,%edx
 8567c03:	89 d9                	mov    %ebx,%ecx
 8567c05:	83 e1 02             	and    $0x2,%ecx
 8567c08:	85 c9                	test   %ecx,%ecx
 8567c0a:	74 06                	je     8567c12 <_ZN19CMultiMatchRoomList7DelRoomEP6IMatch+0x58>
 8567c0c:	66 89 02             	mov    %ax,(%edx)
 8567c0f:	83 c2 02             	add    $0x2,%edx
 8567c12:	89 d9                	mov    %ebx,%ecx
 8567c14:	83 e1 01             	and    $0x1,%ecx
 8567c17:	85 c9                	test   %ecx,%ecx
 8567c19:	74 05                	je     8567c20 <_ZN19CMultiMatchRoomList7DelRoomEP6IMatch+0x66>
 8567c1b:	88 02                	mov    %al,(%edx)
 8567c1d:	83 c2 01             	add    $0x1,%edx
 8567c20:	8d 85 e1 fe ff ff    	lea    -0x11f(%ebp),%eax
 8567c26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567c2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567c2d:	89 04 24             	mov    %eax,(%esp)
 8567c30:	e8 c2 c3 ff ff       	call   8563ff7 <_Z11GetUserNameP6IMatchPc>
 8567c35:	89 c3                	mov    %eax,%ebx
 8567c37:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8567c3e:	00 
 8567c3f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8567c46:	00 
 8567c47:	c7 44 24 08 09 12 00 	movl   $0x1209,0x8(%esp)
 8567c4e:	00 
 8567c4f:	c7 44 24 04 80 31 ca 	movl   $0x8ca3180,0x4(%esp)
 8567c56:	08 
 8567c57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8567c5a:	89 04 24             	mov    %eax,(%esp)
 8567c5d:	e8 da 80 fe ff       	call   854fd3c <_ZN10CSwitchLogC1EPKciii>
 8567c62:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8567c66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567c69:	89 44 24 08          	mov    %eax,0x8(%esp)
 8567c6d:	c7 44 24 04 ef 24 ca 	movl   $0x8ca24ef,0x4(%esp)
 8567c74:	08 
 8567c75:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8567c78:	89 04 24             	mov    %eax,(%esp)
 8567c7b:	e8 e4 80 fe ff       	call   854fd64 <_ZN10CSwitchLogclEPKcz>
 8567c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8567c83:	8d 50 04             	lea    0x4(%eax),%edx
 8567c86:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567c89:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567c8d:	89 04 24             	mov    %eax,(%esp)
 8567c90:	e8 a9 1e 00 00       	call   8569b3e <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 8567c95:	83 ec 04             	sub    $0x4,%esp
 8567c98:	eb 28                	jmp    8567cc2 <_ZN19CMultiMatchRoomList7DelRoomEP6IMatch+0x108>
 8567c9a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567c9d:	89 04 24             	mov    %eax,(%esp)
 8567ca0:	e8 ef 1b 00 00       	call   8569894 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEptEv>
 8567ca5:	8d 50 04             	lea    0x4(%eax),%edx
 8567ca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567cab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567caf:	89 14 24             	mov    %edx,(%esp)
 8567cb2:	e8 07 0c 00 00       	call   85688be <_ZN16CWaitingRoomList5eraseEP6IMatch>
 8567cb7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567cba:	89 04 24             	mov    %eax,(%esp)
 8567cbd:	e8 dc 1e 00 00       	call   8569b9e <_ZNSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEppEv>
 8567cc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8567cc5:	8d 50 04             	lea    0x4(%eax),%edx
 8567cc8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8567ccb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567ccf:	89 04 24             	mov    %eax,(%esp)
 8567cd2:	e8 8d 1e 00 00       	call   8569b64 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 8567cd7:	83 ec 04             	sub    $0x4,%esp
 8567cda:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8567cdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567ce1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567ce4:	89 04 24             	mov    %eax,(%esp)
 8567ce7:	e8 9e 1e 00 00       	call   8569b8a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEneERKS4_>
 8567cec:	84 c0                	test   %al,%al
 8567cee:	75 aa                	jne    8567c9a <_ZN19CMultiMatchRoomList7DelRoomEP6IMatch+0xe0>
 8567cf0:	b8 01 00 00 00       	mov    $0x1,%eax
 8567cf5:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8567cf8:	83 c4 00             	add    $0x0,%esp
 8567cfb:	5b                   	pop    %ebx
 8567cfc:	5f                   	pop    %edi
 8567cfd:	5d                   	pop    %ebp
 8567cfe:	c3                   	ret
 8567cff:	90                   	nop

```

```c
// CMultiMatchRoomList::DelRoom @ 0x8567bba

/* CMultiMatchRoomList::DelRoom(IMatch*) */

undefined4 __thiscall CMultiMatchRoomList::DelRoom(CMultiMatchRoomList *this,IMatch *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  char local_123;
  char local_122 [254];
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_24 [4];
  CSwitchLog local_20 [16];
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
  local_10 [4];
  
  pcVar5 = &local_123;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_123 = '\0';
    pcVar5 = local_122;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  uVar2 = GetUserName(param_1,&local_123);
  CSwitchLog::CSwitchLog(local_20,"virtual bool CMultiMatchRoomList::DelRoom(IMatch*)",0x1209,0,0);
  CSwitchLog::operator()(local_20,"pvp@log match(%x), %s ",param_1,uVar2);
  std::
  map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
  begin(local_24);
  while( true ) {
    std::
    map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>::
    end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)local_24,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') break;
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)local_24);
    CWaitingRoomList::erase((IMatch *)(iVar3 + 4));
    std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> *)local_24);
  }
  return 1;
}

```

---

## GetWaitingRoomCombination

```asm
// === 0856703c CMultiMatchRoomList::GetWaitingRoomCombination  [0x0856703c-0x85675cf] ===
 856703c:	55                   	push   %ebp
 856703d:	89 e5                	mov    %esp,%ebp
 856703f:	57                   	push   %edi
 8567040:	56                   	push   %esi
 8567041:	53                   	push   %ebx
 8567042:	81 ec 3c 01 00 00    	sub    $0x13c,%esp
 8567048:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 856704f:	8d 9d 68 ff ff ff    	lea    -0x98(%ebp),%ebx
 8567055:	b8 00 00 00 00       	mov    $0x0,%eax
 856705a:	ba 0a 00 00 00       	mov    $0xa,%edx
 856705f:	89 df                	mov    %ebx,%edi
 8567061:	89 d1                	mov    %edx,%ecx
 8567063:	f3 ab                	rep stos %eax,%es:(%edi)
 8567065:	8d 9d f0 fe ff ff    	lea    -0x110(%ebp),%ebx
 856706b:	89 df                	mov    %ebx,%edi
 856706d:	be 09 00 00 00       	mov    $0x9,%esi
 8567072:	eb 0e                	jmp    8567082 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x46>
 8567074:	89 3c 24             	mov    %edi,(%esp)
 8567077:	e8 ec 26 00 00       	call   8569768 <_ZNSt6vectorIP6IMatchSaIS1_EEC1Ev>
 856707c:	83 c7 0c             	add    $0xc,%edi
 856707f:	83 ee 01             	sub    $0x1,%esi
 8567082:	83 fe ff             	cmp    $0xffffffff,%esi
 8567085:	0f 95 c0             	setne  %al
 8567088:	84 c0                	test   %al,%al
 856708a:	75 e8                	jne    8567074 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x38>
 856708c:	eb 42                	jmp    85670d0 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x94>
 856708e:	89 d7                	mov    %edx,%edi
 8567090:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8567096:	85 db                	test   %ebx,%ebx
 8567098:	74 26                	je     85670c0 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x84>
 856709a:	b8 09 00 00 00       	mov    $0x9,%eax
 856709f:	29 f0                	sub    %esi,%eax
 85670a1:	89 c2                	mov    %eax,%edx
 85670a3:	89 d0                	mov    %edx,%eax
 85670a5:	01 c0                	add    %eax,%eax
 85670a7:	01 d0                	add    %edx,%eax
 85670a9:	c1 e0 02             	shl    $0x2,%eax
 85670ac:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 85670af:	39 de                	cmp    %ebx,%esi
 85670b1:	74 0d                	je     85670c0 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x84>
 85670b3:	83 ee 0c             	sub    $0xc,%esi
 85670b6:	89 34 24             	mov    %esi,(%esp)
 85670b9:	e8 be 26 00 00       	call   856977c <_ZNSt6vectorIP6IMatchSaIS1_EED1Ev>
 85670be:	eb ef                	jmp    85670af <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x73>
 85670c0:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 85670c6:	89 fa                	mov    %edi,%edx
 85670c8:	89 04 24             	mov    %eax,(%esp)
 85670cb:	e8 80 c6 57 00       	call   8ae3750 <_Unwind_Resume>
 85670d0:	8d 45 98             	lea    -0x68(%ebp),%eax
 85670d3:	89 04 24             	mov    %eax,(%esp)
 85670d6:	e8 ff 26 00 00       	call   85697da <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEEC1Ev>
 85670db:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85670e2:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 85670e9:	e9 13 03 00 00       	jmp    8567401 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3c5>
 85670ee:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85670f1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85670f4:	8d 14 00             	lea    (%eax,%eax,1),%edx
 85670f7:	8d 04 d5 00 00 00 00 	lea    0x0(,%edx,8),%eax
 85670fe:	29 d0                	sub    %edx,%eax
 8567100:	69 d1 8c 00 00 00    	imul   $0x8c,%ecx,%edx
 8567106:	01 d0                	add    %edx,%eax
 8567108:	05 00 32 ca 08       	add    $0x8ca3200,%eax
 856710d:	0f b6 00             	movzbl (%eax),%eax
 8567110:	84 c0                	test   %al,%al
 8567112:	0f 84 fa 02 00 00    	je     8567412 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3d6>
 8567118:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 856711f:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8567126:	e9 6b 02 00 00       	jmp    8567396 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x35a>
 856712b:	8b 5d 10             	mov    0x10(%ebp),%ebx
 856712e:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8567131:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8567134:	89 d0                	mov    %edx,%eax
 8567136:	c1 e0 03             	shl    $0x3,%eax
 8567139:	29 d0                	sub    %edx,%eax
 856713b:	6b d3 46             	imul   $0x46,%ebx,%edx
 856713e:	01 d0                	add    %edx,%eax
 8567140:	01 c8                	add    %ecx,%eax
 8567142:	0f b6 84 00 00 32 ca 	movzbl 0x8ca3200(%eax,%eax,1),%eax
 8567149:	08 
 856714a:	84 c0                	test   %al,%al
 856714c:	0f 84 55 02 00 00    	je     85673a7 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x36b>
 8567152:	8d 45 98             	lea    -0x68(%ebp),%eax
 8567155:	89 04 24             	mov    %eax,(%esp)
 8567158:	e8 f7 26 00 00       	call   8569854 <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEE5clearEv>
 856715d:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8567160:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8567163:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8567166:	89 d0                	mov    %edx,%eax
 8567168:	c1 e0 03             	shl    $0x3,%eax
 856716b:	29 d0                	sub    %edx,%eax
 856716d:	6b d3 46             	imul   $0x46,%ebx,%edx
 8567170:	01 d0                	add    %edx,%eax
 8567172:	01 c8                	add    %ecx,%eax
 8567174:	0f b6 84 00 00 32 ca 	movzbl 0x8ca3200(%eax,%eax,1),%eax
 856717b:	08 
 856717c:	0f b6 c0             	movzbl %al,%eax
 856717f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8567182:	8b 45 08             	mov    0x8(%ebp),%eax
 8567185:	8d 48 04             	lea    0x4(%eax),%ecx
 8567188:	8d 45 94             	lea    -0x6c(%ebp),%eax
 856718b:	8d 55 b0             	lea    -0x50(%ebp),%edx
 856718e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567192:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8567196:	89 04 24             	mov    %eax,(%esp)
 8567199:	e8 ca 26 00 00       	call   8569868 <_ZNSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 856719e:	83 ec 04             	sub    $0x4,%esp
 85671a1:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85671a4:	89 04 24             	mov    %eax,(%esp)
 85671a7:	e8 e8 26 00 00       	call   8569894 <_ZNKSt17_Rb_tree_iteratorISt4pairIKi16CWaitingRoomListEEptEv>
 85671ac:	8d 50 04             	lea    0x4(%eax),%edx
 85671af:	8d 45 98             	lea    -0x68(%ebp),%eax
 85671b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 85671b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85671b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85671bd:	89 14 24             	mov    %edx,(%esp)
 85671c0:	e8 d7 fb ff ff       	call   8566d9c <_ZN16CWaitingRoomList7doMatchEP6IMatchRSt8multimapIfS1_St4lessIfESaISt4pairIKfS1_EEE>
 85671c5:	83 f0 01             	xor    $0x1,%eax
 85671c8:	84 c0                	test   %al,%al
 85671ca:	0f 85 da 01 00 00    	jne    85673aa <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x36e>
 85671d0:	8d 45 98             	lea    -0x68(%ebp),%eax
 85671d3:	89 04 24             	mov    %eax,(%esp)
 85671d6:	e8 c7 26 00 00       	call   85698a2 <_ZNKSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEE4sizeEv>
 85671db:	89 c1                	mov    %eax,%ecx
 85671dd:	8b 75 10             	mov    0x10(%ebp),%esi
 85671e0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85671e3:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 85671e6:	89 d0                	mov    %edx,%eax
 85671e8:	c1 e0 03             	shl    $0x3,%eax
 85671eb:	29 d0                	sub    %edx,%eax
 85671ed:	6b d6 46             	imul   $0x46,%esi,%edx
 85671f0:	01 d0                	add    %edx,%eax
 85671f2:	01 d8                	add    %ebx,%eax
 85671f4:	0f b6 84 00 01 32 ca 	movzbl 0x8ca3201(%eax,%eax,1),%eax
 85671fb:	08 
 85671fc:	0f b6 c0             	movzbl %al,%eax
 85671ff:	39 c1                	cmp    %eax,%ecx
 8567201:	0f 92 c0             	setb   %al
 8567204:	84 c0                	test   %al,%al
 8567206:	0f 85 a1 01 00 00    	jne    85673ad <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x371>
 856720c:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8567213:	8d 45 90             	lea    -0x70(%ebp),%eax
 8567216:	8d 55 98             	lea    -0x68(%ebp),%edx
 8567219:	89 54 24 04          	mov    %edx,0x4(%esp)
 856721d:	89 04 24             	mov    %eax,(%esp)
 8567220:	e8 91 26 00 00       	call   85698b6 <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEE5beginEv>
 8567225:	83 ec 04             	sub    $0x4,%esp
 8567228:	e9 ff 00 00 00       	jmp    856732c <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x2f0>
 856722d:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8567230:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8567233:	d9 84 85 68 ff ff ff 	flds   -0x98(%ebp,%eax,4)
 856723a:	db 45 c4             	fildl  -0x3c(%ebp)
 856723d:	de c9                	fmulp  %st,%st(1)
 856723f:	d9 9d d4 fe ff ff    	fstps  -0x12c(%ebp)
 8567245:	8d 45 90             	lea    -0x70(%ebp),%eax
 8567248:	89 04 24             	mov    %eax,(%esp)
 856724b:	e8 e4 26 00 00       	call   8569934 <_ZNKSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEptEv>
 8567250:	d9 00                	flds   (%eax)
 8567252:	d9 9d d8 fe ff ff    	fstps  -0x128(%ebp)
 8567258:	8d 45 90             	lea    -0x70(%ebp),%eax
 856725b:	89 04 24             	mov    %eax,(%esp)
 856725e:	e8 d1 26 00 00       	call   8569934 <_ZNKSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEptEv>
 8567263:	8b 40 04             	mov    0x4(%eax),%eax
 8567266:	8b 10                	mov    (%eax),%edx
 8567268:	81 c2 84 00 00 00    	add    $0x84,%edx
 856726e:	8b 12                	mov    (%edx),%edx
 8567270:	89 04 24             	mov    %eax,(%esp)
 8567273:	ff d2                	call   *%edx
 8567275:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 856727b:	db 85 e4 fe ff ff    	fildl  -0x11c(%ebp)
 8567281:	d8 8d d8 fe ff ff    	fmuls  -0x128(%ebp)
 8567287:	d9 85 d4 fe ff ff    	flds   -0x12c(%ebp)
 856728d:	de c1                	faddp  %st,%st(1)
 856728f:	d9 9d dc fe ff ff    	fstps  -0x124(%ebp)
 8567295:	8d 45 90             	lea    -0x70(%ebp),%eax
 8567298:	89 04 24             	mov    %eax,(%esp)
 856729b:	e8 94 26 00 00       	call   8569934 <_ZNKSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEptEv>
 85672a0:	8b 40 04             	mov    0x4(%eax),%eax
 85672a3:	8b 10                	mov    (%eax),%edx
 85672a5:	81 c2 84 00 00 00    	add    $0x84,%edx
 85672ab:	8b 12                	mov    (%edx),%edx
 85672ad:	89 04 24             	mov    %eax,(%esp)
 85672b0:	ff d2                	call   *%edx
 85672b2:	03 45 c4             	add    -0x3c(%ebp),%eax
 85672b5:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 85672bb:	db 85 e4 fe ff ff    	fildl  -0x11c(%ebp)
 85672c1:	d8 bd dc fe ff ff    	fdivrs -0x124(%ebp)
 85672c7:	d9 9c 9d 68 ff ff ff 	fstps  -0x98(%ebp,%ebx,4)
 85672ce:	8d 45 90             	lea    -0x70(%ebp),%eax
 85672d1:	89 04 24             	mov    %eax,(%esp)
 85672d4:	e8 5b 26 00 00       	call   8569934 <_ZNKSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEptEv>
 85672d9:	8b 40 04             	mov    0x4(%eax),%eax
 85672dc:	8b 10                	mov    (%eax),%edx
 85672de:	81 c2 84 00 00 00    	add    $0x84,%edx
 85672e4:	8b 12                	mov    (%edx),%edx
 85672e6:	89 04 24             	mov    %eax,(%esp)
 85672e9:	ff d2                	call   *%edx
 85672eb:	01 45 c4             	add    %eax,-0x3c(%ebp)
 85672ee:	8d 45 90             	lea    -0x70(%ebp),%eax
 85672f1:	89 04 24             	mov    %eax,(%esp)
 85672f4:	e8 3b 26 00 00       	call   8569934 <_ZNKSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEptEv>
 85672f9:	8d 48 04             	lea    0x4(%eax),%ecx
 85672fc:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85672ff:	8d 9d f0 fe ff ff    	lea    -0x110(%ebp),%ebx
 8567305:	89 d0                	mov    %edx,%eax
 8567307:	01 c0                	add    %eax,%eax
 8567309:	01 d0                	add    %edx,%eax
 856730b:	c1 e0 02             	shl    $0x2,%eax
 856730e:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8567311:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8567315:	89 04 24             	mov    %eax,(%esp)
 8567318:	e8 25 26 00 00       	call   8569942 <_ZNSt6vectorIP6IMatchSaIS1_EE9push_backERKS1_>
 856731d:	8d 45 90             	lea    -0x70(%ebp),%eax
 8567320:	89 04 24             	mov    %eax,(%esp)
 8567323:	e8 ee 25 00 00       	call   8569916 <_ZNSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEppEv>
 8567328:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 856732c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 856732f:	8d 55 98             	lea    -0x68(%ebp),%edx
 8567332:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567336:	89 04 24             	mov    %eax,(%esp)
 8567339:	e8 9e 25 00 00       	call   85698dc <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEE3endEv>
 856733e:	83 ec 04             	sub    $0x4,%esp
 8567341:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8567344:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567348:	8d 45 90             	lea    -0x70(%ebp),%eax
 856734b:	89 04 24             	mov    %eax,(%esp)
 856734e:	e8 af 25 00 00       	call   8569902 <_ZNKSt17_Rb_tree_iteratorISt4pairIKfP6IMatchEEneERKS5_>
 8567353:	84 c0                	test   %al,%al
 8567355:	74 2e                	je     8567385 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x349>
 8567357:	8b 5d 10             	mov    0x10(%ebp),%ebx
 856735a:	8b 55 cc             	mov    -0x34(%ebp),%edx
 856735d:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8567360:	89 d0                	mov    %edx,%eax
 8567362:	c1 e0 03             	shl    $0x3,%eax
 8567365:	29 d0                	sub    %edx,%eax
 8567367:	6b d3 46             	imul   $0x46,%ebx,%edx
 856736a:	01 d0                	add    %edx,%eax
 856736c:	01 c8                	add    %ecx,%eax
 856736e:	0f b6 84 00 01 32 ca 	movzbl 0x8ca3201(%eax,%eax,1),%eax
 8567375:	08 
 8567376:	0f b6 c0             	movzbl %al,%eax
 8567379:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 856737c:	7e 07                	jle    8567385 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x349>
 856737e:	b8 01 00 00 00       	mov    $0x1,%eax
 8567383:	eb 05                	jmp    856738a <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x34e>
 8567385:	b8 00 00 00 00       	mov    $0x0,%eax
 856738a:	84 c0                	test   %al,%al
 856738c:	0f 85 9b fe ff ff    	jne    856722d <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x1f1>
 8567392:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8567396:	83 7d d0 06          	cmpl   $0x6,-0x30(%ebp)
 856739a:	0f 9e c0             	setle  %al
 856739d:	84 c0                	test   %al,%al
 856739f:	0f 85 86 fd ff ff    	jne    856712b <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0xef>
 85673a5:	eb 07                	jmp    85673ae <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x372>
 85673a7:	90                   	nop
 85673a8:	eb 04                	jmp    85673ae <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x372>
 85673aa:	90                   	nop
 85673ab:	eb 01                	jmp    85673ae <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x372>
 85673ad:	90                   	nop
 85673ae:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85673b1:	8d 8d f0 fe ff ff    	lea    -0x110(%ebp),%ecx
 85673b7:	89 d0                	mov    %edx,%eax
 85673b9:	01 c0                	add    %eax,%eax
 85673bb:	01 d0                	add    %edx,%eax
 85673bd:	c1 e0 02             	shl    $0x2,%eax
 85673c0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85673c3:	89 04 24             	mov    %eax,(%esp)
 85673c6:	e8 eb 25 00 00       	call   85699b6 <_ZNKSt6vectorIP6IMatchSaIS1_EE5emptyEv>
 85673cb:	83 f0 01             	xor    $0x1,%eax
 85673ce:	84 c0                	test   %al,%al
 85673d0:	74 2b                	je     85673fd <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3c1>
 85673d2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85673d5:	3b 45 10             	cmp    0x10(%ebp),%eax
 85673d8:	75 06                	jne    85673e0 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3a4>
 85673da:	83 45 c8 01          	addl   $0x1,-0x38(%ebp)
 85673de:	eb 1d                	jmp    85673fd <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3c1>
 85673e0:	8b 55 cc             	mov    -0x34(%ebp),%edx
 85673e3:	8d 8d f0 fe ff ff    	lea    -0x110(%ebp),%ecx
 85673e9:	89 d0                	mov    %edx,%eax
 85673eb:	01 c0                	add    %eax,%eax
 85673ed:	01 d0                	add    %edx,%eax
 85673ef:	c1 e0 02             	shl    $0x2,%eax
 85673f2:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 85673f5:	89 04 24             	mov    %eax,(%esp)
 85673f8:	e8 fd 25 00 00       	call   85699fa <_ZNSt6vectorIP6IMatchSaIS1_EE5clearEv>
 85673fd:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 8567401:	83 7d cc 09          	cmpl   $0x9,-0x34(%ebp)
 8567405:	0f 9e c0             	setle  %al
 8567408:	84 c0                	test   %al,%al
 856740a:	0f 85 de fc ff ff    	jne    85670ee <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0xb2>
 8567410:	eb 01                	jmp    8567413 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3d7>
 8567412:	90                   	nop
 8567413:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 8567417:	0f 84 2d 01 00 00    	je     856754a <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x50e>
 856741d:	c6 45 db 00          	movb   $0x0,-0x25(%ebp)
 8567421:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8567428:	b8 00 00 00 00       	mov    $0x0,%eax
 856742d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8567430:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8567437:	eb 78                	jmp    85674b1 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x475>
 8567439:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 856743c:	8d 8d f0 fe ff ff    	lea    -0x110(%ebp),%ecx
 8567442:	89 d0                	mov    %edx,%eax
 8567444:	01 c0                	add    %eax,%eax
 8567446:	01 d0                	add    %edx,%eax
 8567448:	c1 e0 02             	shl    $0x2,%eax
 856744b:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 856744e:	89 04 24             	mov    %eax,(%esp)
 8567451:	e8 60 25 00 00       	call   85699b6 <_ZNKSt6vectorIP6IMatchSaIS1_EE5emptyEv>
 8567456:	84 c0                	test   %al,%al
 8567458:	75 52                	jne    85674ac <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x470>
 856745a:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 856745e:	83 f0 01             	xor    $0x1,%eax
 8567461:	84 c0                	test   %al,%al
 8567463:	74 17                	je     856747c <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x440>
 8567465:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8567468:	89 45 dc             	mov    %eax,-0x24(%ebp)
 856746b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 856746e:	8b 84 85 68 ff ff ff 	mov    -0x98(%ebp,%eax,4),%eax
 8567475:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8567478:	c6 45 db 01          	movb   $0x1,-0x25(%ebp)
 856747c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 856747f:	d9 84 85 68 ff ff ff 	flds   -0x98(%ebp,%eax,4)
 8567486:	d9 45 e0             	flds   -0x20(%ebp)
 8567489:	da e9                	fucompp
 856748b:	df e0                	fnstsw %ax
 856748d:	f6 c4 45             	test   $0x45,%ah
 8567490:	0f 94 c0             	sete   %al
 8567493:	84 c0                	test   %al,%al
 8567495:	74 16                	je     85674ad <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x471>
 8567497:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 856749a:	8b 84 85 68 ff ff ff 	mov    -0x98(%ebp,%eax,4),%eax
 85674a1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85674a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85674a7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85674aa:	eb 01                	jmp    85674ad <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x471>
 85674ac:	90                   	nop
 85674ad:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85674b1:	83 7d e4 09          	cmpl   $0x9,-0x1c(%ebp)
 85674b5:	0f 9e c0             	setle  %al
 85674b8:	84 c0                	test   %al,%al
 85674ba:	0f 85 79 ff ff ff    	jne    8567439 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x3fd>
 85674c0:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85674c3:	8d 8d f0 fe ff ff    	lea    -0x110(%ebp),%ecx
 85674c9:	89 d0                	mov    %edx,%eax
 85674cb:	01 c0                	add    %eax,%eax
 85674cd:	01 d0                	add    %edx,%eax
 85674cf:	c1 e0 02             	shl    $0x2,%eax
 85674d2:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 85674d5:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85674d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85674dc:	89 04 24             	mov    %eax,(%esp)
 85674df:	e8 32 25 00 00       	call   8569a16 <_ZNSt6vectorIP6IMatchSaIS1_EE3endEv>
 85674e4:	83 ec 04             	sub    $0x4,%esp
 85674e7:	8b 55 dc             	mov    -0x24(%ebp),%edx
 85674ea:	8d 8d f0 fe ff ff    	lea    -0x110(%ebp),%ecx
 85674f0:	89 d0                	mov    %edx,%eax
 85674f2:	01 c0                	add    %eax,%eax
 85674f4:	01 d0                	add    %edx,%eax
 85674f6:	c1 e0 02             	shl    $0x2,%eax
 85674f9:	8d 14 01             	lea    (%ecx,%eax,1),%edx
 85674fc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85674ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567503:	89 04 24             	mov    %eax,(%esp)
 8567506:	e8 31 25 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 856750b:	83 ec 04             	sub    $0x4,%esp
 856750e:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8567511:	8b 55 14             	mov    0x14(%ebp),%edx
 8567514:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567518:	89 04 24             	mov    %eax,(%esp)
 856751b:	e8 f6 24 00 00       	call   8569a16 <_ZNSt6vectorIP6IMatchSaIS1_EE3endEv>
 8567520:	83 ec 04             	sub    $0x4,%esp
 8567523:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8567526:	89 44 24 0c          	mov    %eax,0xc(%esp)
 856752a:	8b 45 bc             	mov    -0x44(%ebp),%eax
 856752d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8567531:	8b 45 c0             	mov    -0x40(%ebp),%eax
 8567534:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567538:	8b 45 14             	mov    0x14(%ebp),%eax
 856753b:	89 04 24             	mov    %eax,(%esp)
 856753e:	e8 1d 25 00 00       	call   8569a60 <_ZNSt6vectorIP6IMatchSaIS1_EE6insertIN9__gnu_cxx17__normal_iteratorIPS1_S3_EEEEvS8_T_S9_>
 8567543:	be 01 00 00 00       	mov    $0x1,%esi
 8567548:	eb 1c                	jmp    8567566 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x52a>
 856754a:	be 00 00 00 00       	mov    $0x0,%esi
 856754f:	eb 15                	jmp    8567566 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x52a>
 8567551:	89 d3                	mov    %edx,%ebx
 8567553:	89 c6                	mov    %eax,%esi
 8567555:	8d 45 98             	lea    -0x68(%ebp),%eax
 8567558:	89 04 24             	mov    %eax,(%esp)
 856755b:	e8 42 1b 00 00       	call   85690a2 <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEED1Ev>
 8567560:	89 f0                	mov    %esi,%eax
 8567562:	89 da                	mov    %ebx,%edx
 8567564:	eb 0d                	jmp    8567573 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x537>
 8567566:	8d 45 98             	lea    -0x68(%ebp),%eax
 8567569:	89 04 24             	mov    %eax,(%esp)
 856756c:	e8 31 1b 00 00       	call   85690a2 <_ZNSt8multimapIfP6IMatchSt4lessIfESaISt4pairIKfS1_EEED1Ev>
 8567571:	eb 30                	jmp    85675a3 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x567>
 8567573:	89 d6                	mov    %edx,%esi
 8567575:	89 c7                	mov    %eax,%edi
 8567577:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 856757d:	8d 58 78             	lea    0x78(%eax),%ebx
 8567580:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 8567586:	39 c3                	cmp    %eax,%ebx
 8567588:	74 0d                	je     8567597 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x55b>
 856758a:	83 eb 0c             	sub    $0xc,%ebx
 856758d:	89 1c 24             	mov    %ebx,(%esp)
 8567590:	e8 e7 21 00 00       	call   856977c <_ZNSt6vectorIP6IMatchSaIS1_EED1Ev>
 8567595:	eb e9                	jmp    8567580 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x544>
 8567597:	89 f8                	mov    %edi,%eax
 8567599:	89 f2                	mov    %esi,%edx
 856759b:	89 04 24             	mov    %eax,(%esp)
 856759e:	e8 ad c1 57 00       	call   8ae3750 <_Unwind_Resume>
 85675a3:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 85675a9:	8d 58 78             	lea    0x78(%eax),%ebx
 85675ac:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 85675b2:	39 c3                	cmp    %eax,%ebx
 85675b4:	74 0d                	je     85675c3 <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x587>
 85675b6:	83 eb 0c             	sub    $0xc,%ebx
 85675b9:	89 1c 24             	mov    %ebx,(%esp)
 85675bc:	e8 bb 21 00 00       	call   856977c <_ZNSt6vectorIP6IMatchSaIS1_EED1Ev>
 85675c1:	eb e9                	jmp    85675ac <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE+0x570>
 85675c3:	89 f0                	mov    %esi,%eax
 85675c5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85675c8:	83 c4 00             	add    $0x0,%esp
 85675cb:	5b                   	pop    %ebx
 85675cc:	5e                   	pop    %esi
 85675cd:	5f                   	pop    %edi
 85675ce:	5d                   	pop    %ebp
 85675cf:	c3                   	ret

```

```c
// CMultiMatchRoomList::GetWaitingRoomCombination @ 0x856703c

/* CMultiMatchRoomList::GetWaitingRoomCombination(IMatch*, int, std::vector<IMatch*,
   std::allocator<IMatch*> >&) */

undefined4 __thiscall
CMultiMatchRoomList::GetWaitingRoomCombination
          (CMultiMatchRoomList *this,IMatch *param_1,int param_2,vector *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  char cVar5;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  vector<IMatch*,std::allocator<IMatch*>> *pvVar11;
  undefined4 uVar12;
  vector<IMatch*,std::allocator<IMatch*>> local_114 [120];
  vector<IMatch*,std::allocator<IMatch*>> local_9c [40];
  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
  local_74 [4];
  _Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>> local_70 [4];
  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
  local_6c [24];
  uint local_54;
  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
  local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  char local_29;
  int local_28;
  float local_24;
  int local_20;
  
  local_40 = 0;
  pvVar11 = local_9c;
  for (iVar10 = 10; iVar10 != 0; iVar10 = iVar10 + -1) {
    *(undefined4 *)pvVar11 = 0;
    pvVar11 = pvVar11 + 4;
  }
  pvVar11 = local_114;
  for (iVar10 = 9; iVar10 != -1; iVar10 = iVar10 + -1) {
                    /* try { // try from 08567077 to 0856707b has its CatchHandler @ 0856708e */
    std::vector<IMatch*,std::allocator<IMatch*>>::vector(pvVar11);
    pvVar11 = pvVar11 + 0xc;
  }
                    /* try { // try from 085670d6 to 085670da has its CatchHandler @ 08567573 */
  std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
  multimap(local_6c);
  local_3c = 0;
  local_38 = 0;
  do {
    if ((9 < local_38) ||
       (GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)::
        CombinationTable[local_38 * 0xe + param_2 * 0x8c] == '\0')) {
      if (local_3c == 0) {
        uVar12 = 0;
      }
      else {
        local_29 = '\0';
        local_28 = 0;
        local_24 = 0.0;
        for (local_20 = 0; local_20 < 10; local_20 = local_20 + 1) {
          cVar5 = std::vector<IMatch*,std::allocator<IMatch*>>::empty();
          if (cVar5 == '\0') {
            if (local_29 != '\x01') {
              local_28 = local_20;
              local_24 = *(float *)(local_9c + local_20 * 4);
              local_29 = '\x01';
            }
            if (*(float *)(local_9c + local_20 * 4) < local_24) {
              local_24 = *(float *)(local_9c + local_20 * 4);
              local_28 = local_20;
            }
          }
        }
        std::vector<IMatch*,std::allocator<IMatch*>>::end();
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        std::vector<IMatch*,std::allocator<IMatch*>>::end();
        std::vector<IMatch*,std::allocator<IMatch*>>::
        insert<__gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>>
                  (param_3,param_3,local_44,local_48,local_4c);
        uVar12 = 1;
      }
                    /* try { // try from 0856756c to 08567570 has its CatchHandler @ 08567573 */
      std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
      ~multimap(local_6c);
      pvVar11 = local_9c;
      while (pvVar11 != local_114) {
        pvVar11 = pvVar11 + -0xc;
        std::vector<IMatch*,std::allocator<IMatch*>>::~vector(pvVar11);
      }
      return uVar12;
    }
    local_40 = 0;
    local_34 = 0;
    while ((local_34 < 7 &&
           (GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)::
            CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2] != '\0'))) {
                    /* try { // try from 08567158 to 08567542 has its CatchHandler @ 08567551 */
      std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
      clear(local_6c);
      local_54 = (uint)(byte)GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)
                             ::CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2];
      std::
      map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
      ::find((int *)local_70);
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,CWaitingRoomList>>::operator->(local_70);
      cVar5 = CWaitingRoomList::doMatch
                        ((CWaitingRoomList *)(iVar10 + 4),param_1,(multimap *)local_6c);
      if ((cVar5 != '\x01') ||
         (uVar6 = std::
                  multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
                  ::size(local_6c),
         uVar6 < (byte)GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)
                       ::CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2 + 1]))
      break;
      local_30 = 0;
      std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>::
      begin(local_74);
      while( true ) {
        std::multimap<float,IMatch*,std::less<float>,std::allocator<std::pair<float_const,IMatch*>>>
        ::end(local_50);
        cVar5 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator!=
                          ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74,
                           (_Rb_tree_iterator *)local_50);
        iVar10 = local_38;
        if ((cVar5 == '\0') ||
           ((int)(uint)(byte)GetWaitingRoomCombination(IMatch*,int,std::vector<IMatch*,std::allocator<IMatch*>>&)
                             ::CombinationTable[(local_38 * 7 + param_2 * 0x46 + local_34) * 2 + 1]
            <= local_30)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) break;
        fVar1 = *(float *)(local_9c + local_38 * 4);
        fVar3 = (float)local_40;
        pfVar7 = (float *)std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                                    ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        fVar2 = *pfVar7;
        iVar8 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                          ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        iVar8 = (**(code **)(**(int **)(iVar8 + 4) + 0x84))(*(int **)(iVar8 + 4));
        iVar9 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                          ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        iVar9 = (**(code **)(**(int **)(iVar9 + 4) + 0x84))(*(int **)(iVar9 + 4));
        *(float *)(local_9c + iVar10 * 4) =
             (fVar3 * fVar1 + (float)iVar8 * fVar2) / (float)(iVar9 + local_40);
        iVar10 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                           ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        iVar10 = (**(code **)(**(int **)(iVar10 + 4) + 0x84))(*(int **)(iVar10 + 4));
        local_40 = local_40 + iVar10;
        iVar10 = std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator->
                           ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        std::vector<IMatch*,std::allocator<IMatch*>>::push_back
                  (local_114 + local_38 * 0xc,(IMatch **)(iVar10 + 4));
        std::_Rb_tree_iterator<std::pair<float_const,IMatch*>>::operator++
                  ((_Rb_tree_iterator<std::pair<float_const,IMatch*>> *)local_74);
        local_30 = local_30 + 1;
      }
      local_34 = local_34 + 1;
    }
    cVar5 = std::vector<IMatch*,std::allocator<IMatch*>>::empty();
    if (cVar5 != '\x01') {
      if (local_40 == param_2) {
        local_3c = local_3c + 1;
      }
      else {
        std::vector<IMatch*,std::allocator<IMatch*>>::clear(local_114 + local_38 * 0xc);
      }
    }
    local_38 = local_38 + 1;
  } while( true );
}

```

---

## Match

```asm
// === 085675d0 CMultiMatchRoomList::Match  [0x085675d0-0x8567953] ===
 85675d0:	55                   	push   %ebp
 85675d1:	89 e5                	mov    %esp,%ebp
 85675d3:	56                   	push   %esi
 85675d4:	53                   	push   %ebx
 85675d5:	83 ec 50             	sub    $0x50,%esp
 85675d8:	8b 45 08             	mov    0x8(%ebp),%eax
 85675db:	83 c0 04             	add    $0x4,%eax
 85675de:	89 04 24             	mov    %eax,(%esp)
 85675e1:	e8 a6 24 00 00       	call   8569a8c <_ZNKSt3mapIi16CWaitingRoomListSt4lessIiESaISt4pairIKiS0_EEE5emptyEv>
 85675e6:	84 c0                	test   %al,%al
 85675e8:	74 0a                	je     85675f4 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x24>
 85675ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 85675ef:	e9 54 03 00 00       	jmp    8567948 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x378>
 85675f4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85675f7:	89 04 24             	mov    %eax,(%esp)
 85675fa:	e8 69 21 00 00       	call   8569768 <_ZNSt6vectorIP6IMatchSaIS1_EEC1Ev>
 85675ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567602:	8b 00                	mov    (%eax),%eax
 8567604:	05 84 00 00 00       	add    $0x84,%eax
 8567609:	8b 10                	mov    (%eax),%edx
 856760b:	8b 45 0c             	mov    0xc(%ebp),%eax
 856760e:	89 04 24             	mov    %eax,(%esp)
 8567611:	ff d2                	call   *%edx
 8567613:	89 c3                	mov    %eax,%ebx
 8567615:	e8 1a b2 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 856761a:	0f b6 c0             	movzbl %al,%eax
 856761d:	39 c3                	cmp    %eax,%ebx
 856761f:	0f 9c c0             	setl   %al
 8567622:	84 c0                	test   %al,%al
 8567624:	0f 84 be 00 00 00    	je     85676e8 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x118>
 856762a:	e8 05 b2 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 856762f:	0f b6 d8             	movzbl %al,%ebx
 8567632:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567635:	8b 00                	mov    (%eax),%eax
 8567637:	05 84 00 00 00       	add    $0x84,%eax
 856763c:	8b 10                	mov    (%eax),%edx
 856763e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567641:	89 04 24             	mov    %eax,(%esp)
 8567644:	ff d2                	call   *%edx
 8567646:	89 da                	mov    %ebx,%edx
 8567648:	29 c2                	sub    %eax,%edx
 856764a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 856764d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8567651:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567655:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567658:	89 44 24 04          	mov    %eax,0x4(%esp)
 856765c:	8b 45 08             	mov    0x8(%ebp),%eax
 856765f:	89 04 24             	mov    %eax,(%esp)
 8567662:	e8 d5 f9 ff ff       	call   856703c <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE>
 8567667:	83 f0 01             	xor    $0x1,%eax
 856766a:	84 c0                	test   %al,%al
 856766c:	74 0a                	je     8567678 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0xa8>
 856766e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8567673:	e9 c5 02 00 00       	jmp    856793d <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x36d>
 8567678:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856767b:	8d 55 c8             	lea    -0x38(%ebp),%edx
 856767e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567682:	89 04 24             	mov    %eax,(%esp)
 8567685:	e8 b2 23 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 856768a:	83 ec 04             	sub    $0x4,%esp
 856768d:	eb 2e                	jmp    85676bd <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0xed>
 856768f:	8b 45 08             	mov    0x8(%ebp),%eax
 8567692:	8b 00                	mov    (%eax),%eax
 8567694:	83 c0 04             	add    $0x4,%eax
 8567697:	8b 18                	mov    (%eax),%ebx
 8567699:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 856769c:	89 04 24             	mov    %eax,(%esp)
 856769f:	e8 3e 24 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 85676a4:	8b 00                	mov    (%eax),%eax
 85676a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85676aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85676ad:	89 04 24             	mov    %eax,(%esp)
 85676b0:	ff d3                	call   *%ebx
 85676b2:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85676b5:	89 04 24             	mov    %eax,(%esp)
 85676b8:	e8 0f 24 00 00       	call   8569acc <_ZN9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEppEv>
 85676bd:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85676c0:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85676c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85676c7:	89 04 24             	mov    %eax,(%esp)
 85676ca:	e8 47 23 00 00       	call   8569a16 <_ZNSt6vectorIP6IMatchSaIS1_EE3endEv>
 85676cf:	83 ec 04             	sub    $0x4,%esp
 85676d2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85676d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85676d9:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85676dc:	89 04 24             	mov    %eax,(%esp)
 85676df:	e8 bb 23 00 00       	call   8569a9f <_ZN9__gnu_cxxneIPP6IMatchSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 85676e4:	84 c0                	test   %al,%al
 85676e6:	75 a7                	jne    856768f <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0xbf>
 85676e8:	e8 47 b1 ff ff       	call   8562834 <_ZN8fair_pvp10CFairMatch22GetPlayCountPerOneTeamEv>
 85676ed:	0f b6 c0             	movzbl %al,%eax
 85676f0:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85676f3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85676f7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85676fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85676fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567702:	8b 45 08             	mov    0x8(%ebp),%eax
 8567705:	89 04 24             	mov    %eax,(%esp)
 8567708:	e8 2f f9 ff ff       	call   856703c <_ZN19CMultiMatchRoomList25GetWaitingRoomCombinationEP6IMatchiRSt6vectorIS1_SaIS1_EE>
 856770d:	83 f0 01             	xor    $0x1,%eax
 8567710:	84 c0                	test   %al,%al
 8567712:	74 77                	je     856778b <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x1bb>
 8567714:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8567717:	8d 55 c8             	lea    -0x38(%ebp),%edx
 856771a:	89 54 24 04          	mov    %edx,0x4(%esp)
 856771e:	89 04 24             	mov    %eax,(%esp)
 8567721:	e8 16 23 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 8567726:	83 ec 04             	sub    $0x4,%esp
 8567729:	eb 2b                	jmp    8567756 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x186>
 856772b:	8b 45 08             	mov    0x8(%ebp),%eax
 856772e:	8b 00                	mov    (%eax),%eax
 8567730:	8b 18                	mov    (%eax),%ebx
 8567732:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8567735:	89 04 24             	mov    %eax,(%esp)
 8567738:	e8 a5 23 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 856773d:	8b 00                	mov    (%eax),%eax
 856773f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567743:	8b 45 08             	mov    0x8(%ebp),%eax
 8567746:	89 04 24             	mov    %eax,(%esp)
 8567749:	ff d3                	call   *%ebx
 856774b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 856774e:	89 04 24             	mov    %eax,(%esp)
 8567751:	e8 76 23 00 00       	call   8569acc <_ZN9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEppEv>
 8567756:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567759:	8d 55 c8             	lea    -0x38(%ebp),%edx
 856775c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567760:	89 04 24             	mov    %eax,(%esp)
 8567763:	e8 ae 22 00 00       	call   8569a16 <_ZNSt6vectorIP6IMatchSaIS1_EE3endEv>
 8567768:	83 ec 04             	sub    $0x4,%esp
 856776b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 856776e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567772:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8567775:	89 04 24             	mov    %eax,(%esp)
 8567778:	e8 22 23 00 00       	call   8569a9f <_ZN9__gnu_cxxneIPP6IMatchSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 856777d:	84 c0                	test   %al,%al
 856777f:	75 aa                	jne    856772b <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x15b>
 8567781:	bb 00 00 00 00       	mov    $0x0,%ebx
 8567786:	e9 b2 01 00 00       	jmp    856793d <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x36d>
 856778b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 856778e:	89 04 24             	mov    %eax,(%esp)
 8567791:	e8 20 22 00 00       	call   85699b6 <_ZNKSt6vectorIP6IMatchSaIS1_EE5emptyEv>
 8567796:	84 c0                	test   %al,%al
 8567798:	74 0a                	je     85677a4 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x1d4>
 856779a:	bb 00 00 00 00       	mov    $0x0,%ebx
 856779f:	e9 99 01 00 00       	jmp    856793d <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x36d>
 85677a4:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85677a7:	89 04 24             	mov    %eax,(%esp)
 85677aa:	e8 3d 23 00 00       	call   8569aec <_ZNKSt6vectorIP6IMatchSaIS1_EE4sizeEv>
 85677af:	83 f8 01             	cmp    $0x1,%eax
 85677b2:	0f 94 c0             	sete   %al
 85677b5:	84 c0                	test   %al,%al
 85677b7:	74 69                	je     8567822 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x252>
 85677b9:	8b 45 08             	mov    0x8(%ebp),%eax
 85677bc:	8b 00                	mov    (%eax),%eax
 85677be:	83 c0 04             	add    $0x4,%eax
 85677c1:	8b 18                	mov    (%eax),%ebx
 85677c3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85677c6:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85677c9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85677cd:	89 04 24             	mov    %eax,(%esp)
 85677d0:	e8 67 22 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 85677d5:	83 ec 04             	sub    $0x4,%esp
 85677d8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85677db:	89 04 24             	mov    %eax,(%esp)
 85677de:	e8 ff 22 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 85677e3:	8b 00                	mov    (%eax),%eax
 85677e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85677e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85677ec:	89 04 24             	mov    %eax,(%esp)
 85677ef:	ff d3                	call   *%ebx
 85677f1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85677f4:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85677f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85677fb:	89 04 24             	mov    %eax,(%esp)
 85677fe:	e8 39 22 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 8567803:	83 ec 04             	sub    $0x4,%esp
 8567806:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567809:	89 04 24             	mov    %eax,(%esp)
 856780c:	e8 d1 22 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 8567811:	8b 10                	mov    (%eax),%edx
 8567813:	8b 45 10             	mov    0x10(%ebp),%eax
 8567816:	89 10                	mov    %edx,(%eax)
 8567818:	bb 01 00 00 00       	mov    $0x1,%ebx
 856781d:	e9 1b 01 00 00       	jmp    856793d <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x36d>
 8567822:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8567825:	8d 55 c8             	lea    -0x38(%ebp),%edx
 8567828:	89 54 24 04          	mov    %edx,0x4(%esp)
 856782c:	89 04 24             	mov    %eax,(%esp)
 856782f:	e8 08 22 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 8567834:	83 ec 04             	sub    $0x4,%esp
 8567837:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 856783a:	89 04 24             	mov    %eax,(%esp)
 856783d:	e8 a0 22 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 8567842:	8b 00                	mov    (%eax),%eax
 8567844:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8567847:	8b 45 10             	mov    0x10(%ebp),%eax
 856784a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 856784d:	89 10                	mov    %edx,(%eax)
 856784f:	c7 45 e8 01 00 00 00 	movl   $0x1,-0x18(%ebp)
 8567856:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8567859:	8d 55 c8             	lea    -0x38(%ebp),%edx
 856785c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567860:	89 04 24             	mov    %eax,(%esp)
 8567863:	e8 d4 21 00 00       	call   8569a3c <_ZNSt6vectorIP6IMatchSaIS1_EE5beginEv>
 8567868:	83 ec 04             	sub    $0x4,%esp
 856786b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 856786e:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8567871:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567875:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8567878:	89 54 24 04          	mov    %edx,0x4(%esp)
 856787c:	89 04 24             	mov    %eax,(%esp)
 856787f:	e8 84 22 00 00       	call   8569b08 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEplERKi>
 8567884:	83 ec 04             	sub    $0x4,%esp
 8567887:	eb 63                	jmp    85678ec <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x31c>
 8567889:	8b 45 08             	mov    0x8(%ebp),%eax
 856788c:	8b 00                	mov    (%eax),%eax
 856788e:	83 c0 04             	add    $0x4,%eax
 8567891:	8b 18                	mov    (%eax),%ebx
 8567893:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8567896:	89 04 24             	mov    %eax,(%esp)
 8567899:	e8 44 22 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 856789e:	8b 00                	mov    (%eax),%eax
 85678a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85678a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85678a7:	89 04 24             	mov    %eax,(%esp)
 85678aa:	ff d3                	call   *%ebx
 85678ac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85678af:	8b 00                	mov    (%eax),%eax
 85678b1:	05 8c 00 00 00       	add    $0x8c,%eax
 85678b6:	8b 18                	mov    (%eax),%ebx
 85678b8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85678bb:	89 04 24             	mov    %eax,(%esp)
 85678be:	e8 1f 22 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 85678c3:	8b 00                	mov    (%eax),%eax
 85678c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85678c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85678cc:	89 04 24             	mov    %eax,(%esp)
 85678cf:	ff d3                	call   *%ebx
 85678d1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85678d4:	89 04 24             	mov    %eax,(%esp)
 85678d7:	e8 06 22 00 00       	call   8569ae2 <_ZNK9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEdeEv>
 85678dc:	8b 00                	mov    (%eax),%eax
 85678de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85678e1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85678e4:	89 04 24             	mov    %eax,(%esp)
 85678e7:	e8 e0 21 00 00       	call   8569acc <_ZN9__gnu_cxx17__normal_iteratorIPP6IMatchSt6vectorIS2_SaIS2_EEEppEv>
 85678ec:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85678ef:	8d 55 c8             	lea    -0x38(%ebp),%edx
 85678f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 85678f6:	89 04 24             	mov    %eax,(%esp)
 85678f9:	e8 18 21 00 00       	call   8569a16 <_ZNSt6vectorIP6IMatchSaIS1_EE3endEv>
 85678fe:	83 ec 04             	sub    $0x4,%esp
 8567901:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8567904:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567908:	8d 45 bc             	lea    -0x44(%ebp),%eax
 856790b:	89 04 24             	mov    %eax,(%esp)
 856790e:	e8 8c 21 00 00       	call   8569a9f <_ZN9__gnu_cxxneIPP6IMatchSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8567913:	84 c0                	test   %al,%al
 8567915:	0f 85 6e ff ff ff    	jne    8567889 <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x2b9>
 856791b:	bb 01 00 00 00       	mov    $0x1,%ebx
 8567920:	eb 1b                	jmp    856793d <_ZN19CMultiMatchRoomList5MatchEP6IMatchPS1_+0x36d>
 8567922:	89 d3                	mov    %edx,%ebx
 8567924:	89 c6                	mov    %eax,%esi
 8567926:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8567929:	89 04 24             	mov    %eax,(%esp)
 856792c:	e8 4b 1e 00 00       	call   856977c <_ZNSt6vectorIP6IMatchSaIS1_EED1Ev>
 8567931:	89 f0                	mov    %esi,%eax
 8567933:	89 da                	mov    %ebx,%edx
 8567935:	89 04 24             	mov    %eax,(%esp)
 8567938:	e8 13 be 57 00       	call   8ae3750 <_Unwind_Resume>
 856793d:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8567940:	89 04 24             	mov    %eax,(%esp)
 8567943:	e8 34 1e 00 00       	call   856977c <_ZNSt6vectorIP6IMatchSaIS1_EED1Ev>
 8567948:	89 d8                	mov    %ebx,%eax
 856794a:	8d 65 f8             	lea    -0x8(%ebp),%esp
 856794d:	83 c4 00             	add    $0x0,%esp
 8567950:	5b                   	pop    %ebx
 8567951:	5e                   	pop    %esi
 8567952:	5d                   	pop    %ebp
 8567953:	c3                   	ret

```

```c
// CMultiMatchRoomList::Match @ 0x85675d0

/* CMultiMatchRoomList::Match(IMatch*, IMatch**) */

undefined4 __thiscall
CMultiMatchRoomList::Match(CMultiMatchRoomList *this,IMatch *param_1,IMatch **param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_48 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_44 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_40 [4];
  vector<IMatch*,std::allocator<IMatch*>> local_3c [12];
  __normal_iterator local_30 [4];
  __normal_iterator local_2c [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_28 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_24 [4];
  __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>> local_20 [4];
  undefined4 local_1c;
  int local_18;
  __normal_iterator local_14 [4];
  IMatch *local_10;
  
  cVar2 = std::
          map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
          ::empty((map<int,CWaitingRoomList,std::less<int>,std::allocator<std::pair<int_const,CWaitingRoomList>>>
                   *)(this + 4));
  if (cVar2 != '\0') {
    return 0;
  }
  std::vector<IMatch*,std::allocator<IMatch*>>::vector(local_3c);
                    /* try { // try from 08567611 to 08567912 has its CatchHandler @ 08567922 */
  iVar4 = (**(code **)(*(int *)param_1 + 0x84))(param_1);
  uVar5 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
  if (iVar4 < (int)(uVar5 & 0xff)) {
    uVar5 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
    iVar4 = (**(code **)(*(int *)param_1 + 0x84))(param_1);
    cVar2 = GetWaitingRoomCombination(this,param_1,(uVar5 & 0xff) - iVar4,(vector *)local_3c);
    if (cVar2 != '\x01') {
      uVar7 = 0;
      goto LAB_0856793d;
    }
    std::vector<IMatch*,std::allocator<IMatch*>>::begin();
    while( true ) {
      std::vector<IMatch*,std::allocator<IMatch*>>::end();
      bVar3 = __gnu_cxx::operator!=(local_40,local_30);
      if (!bVar3) break;
      pcVar1 = *(code **)(*(int *)this + 4);
      puVar6 = (undefined4 *)
               __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
               operator*(local_40);
      (*pcVar1)(this,*puVar6);
      __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
      operator++(local_40);
    }
  }
  uVar5 = fair_pvp::CFairMatch::GetPlayCountPerOneTeam();
  cVar2 = GetWaitingRoomCombination(this,param_1,uVar5 & 0xff,(vector *)local_3c);
  if (cVar2 == '\x01') {
    cVar2 = std::vector<IMatch*,std::allocator<IMatch*>>::empty();
    if (cVar2 == '\0') {
      iVar4 = std::vector<IMatch*,std::allocator<IMatch*>>::size(local_3c);
      if (iVar4 == 1) {
        pcVar1 = *(code **)(*(int *)this + 4);
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        puVar6 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>
                 ::operator*(local_28);
        (*pcVar1)(this,*puVar6);
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        puVar6 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>
                 ::operator*(local_24);
        *param_2 = (IMatch *)*puVar6;
        uVar7 = 1;
      }
      else {
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        puVar6 = (undefined4 *)
                 __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>
                 ::operator*(local_20);
        local_10 = (IMatch *)*puVar6;
        *param_2 = local_10;
        local_1c = 1;
        std::vector<IMatch*,std::allocator<IMatch*>>::begin();
        __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
        operator+(local_48,&local_18);
        while( true ) {
          std::vector<IMatch*,std::allocator<IMatch*>>::end();
          bVar3 = __gnu_cxx::operator!=(local_48,local_14);
          if (!bVar3) break;
          pcVar1 = *(code **)(*(int *)this + 4);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
                   operator*(local_48);
          (*pcVar1)(this,*puVar6);
          pcVar1 = *(code **)(*(int *)local_10 + 0x8c);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
                   operator*(local_48);
          (*pcVar1)(local_10,*puVar6);
          puVar6 = (undefined4 *)
                   __gnu_cxx::
                   __normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
                   operator*(local_48);
          local_10 = (IMatch *)*puVar6;
          __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
          operator++(local_48);
        }
        uVar7 = 1;
      }
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    std::vector<IMatch*,std::allocator<IMatch*>>::begin();
    while( true ) {
      std::vector<IMatch*,std::allocator<IMatch*>>::end();
      bVar3 = __gnu_cxx::operator!=(local_44,local_2c);
      if (!bVar3) break;
      pcVar1 = (code *)**(undefined4 **)this;
      puVar6 = (undefined4 *)
               __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
               operator*(local_44);
      (*pcVar1)(this,*puVar6);
      __gnu_cxx::__normal_iterator<IMatch**,std::vector<IMatch*,std::allocator<IMatch*>>>::
      operator++(local_44);
    }
    uVar7 = 0;
  }
LAB_0856793d:
  std::vector<IMatch*,std::allocator<IMatch*>>::~vector(local_3c);
  return uVar7;
}

```

