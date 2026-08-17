# CLeagueMatchRoomList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## AddRoom

```asm
// === 08567e9e CLeagueMatchRoomList::AddRoom  [0x08567e9e-0x8567f71] ===
 8567e9e:	55                   	push   %ebp
 8567e9f:	89 e5                	mov    %esp,%ebp
 8567ea1:	83 ec 58             	sub    $0x58,%esp
 8567ea4:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 8567eab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567eae:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8567eb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567eb5:	8d 55 0c             	lea    0xc(%ebp),%edx
 8567eb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567ebc:	89 04 24             	mov    %eax,(%esp)
 8567ebf:	e8 b2 1d 00 00       	call   8569c76 <_ZSt9make_pairIRP6IMatchiESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8567ec4:	83 ec 04             	sub    $0x4,%esp
 8567ec7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567eca:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567ece:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8567ed1:	89 04 24             	mov    %eax,(%esp)
 8567ed4:	e8 df 1d 00 00       	call   8569cb8 <_ZNSt4pairIKP6IMatchiEC1IS1_iEEOS_IT_T0_E>
 8567ed9:	8b 45 08             	mov    0x8(%ebp),%eax
 8567edc:	8d 48 04             	lea    0x4(%eax),%ecx
 8567edf:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8567ee2:	8d 55 d0             	lea    -0x30(%ebp),%edx
 8567ee5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567ee9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8567eed:	89 04 24             	mov    %eax,(%esp)
 8567ef0:	e8 f3 1d 00 00       	call   8569ce8 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE6insertERKS6_>
 8567ef5:	83 ec 04             	sub    $0x4,%esp
 8567ef8:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8567eff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8567f02:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8567f05:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567f09:	8d 55 0c             	lea    0xc(%ebp),%edx
 8567f0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567f10:	89 04 24             	mov    %eax,(%esp)
 8567f13:	e8 5e 1d 00 00       	call   8569c76 <_ZSt9make_pairIRP6IMatchiESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8567f18:	83 ec 04             	sub    $0x4,%esp
 8567f1b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8567f1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567f22:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8567f25:	89 04 24             	mov    %eax,(%esp)
 8567f28:	e8 8b 1d 00 00       	call   8569cb8 <_ZNSt4pairIKP6IMatchiEC1IS1_iEEOS_IT_T0_E>
 8567f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8567f30:	8d 48 04             	lea    0x4(%eax),%ecx
 8567f33:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8567f36:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 8567f39:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567f3d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8567f41:	89 04 24             	mov    %eax,(%esp)
 8567f44:	e8 9f 1d 00 00       	call   8569ce8 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE6insertERKS6_>
 8567f49:	83 ec 04             	sub    $0x4,%esp
 8567f4c:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 8567f50:	83 f0 01             	xor    $0x1,%eax
 8567f53:	84 c0                	test   %al,%al
 8567f55:	74 14                	je     8567f6b <_ZN20CLeagueMatchRoomList7AddRoomEP6IMatch+0xcd>
 8567f57:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8567f5a:	89 04 24             	mov    %eax,(%esp)
 8567f5d:	e8 ec 1c 00 00       	call   8569c4e <_ZNKSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEptEv>
 8567f62:	8b 50 04             	mov    0x4(%eax),%edx
 8567f65:	83 c2 01             	add    $0x1,%edx
 8567f68:	89 50 04             	mov    %edx,0x4(%eax)
 8567f6b:	b8 01 00 00 00       	mov    $0x1,%eax
 8567f70:	c9                   	leave
 8567f71:	c3                   	ret

```

```c
// CLeagueMatchRoomList::AddRoom @ 0x8567e9e

/* CLeagueMatchRoomList::AddRoom(IMatch*) */

undefined4 CLeagueMatchRoomList::AddRoom(IMatch *param_1)

{
  int iVar1;
  _Rb_tree_iterator<std::pair<IMatch*const,int>> local_44 [4];
  char local_40;
  pair local_3c [8];
  pair<IMatch*const,int> local_34 [8];
  IMatch *local_2c [2];
  undefined4 local_24;
  pair<IMatch*const,int> local_20 [8];
  IMatch *local_18 [2];
  undefined4 local_10;
  
  local_24 = 1;
  std::make_pair<IMatch*&,int>(local_2c,(int *)&stack0x00000008);
  std::pair<IMatch*const,int>::pair<IMatch*,int>(local_34,(pair *)local_2c);
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::insert
            (local_3c);
  local_10 = 1;
  std::make_pair<IMatch*&,int>(local_18,(int *)&stack0x00000008);
  std::pair<IMatch*const,int>::pair<IMatch*,int>(local_20,(pair *)local_18);
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::insert
            (local_44);
  if (local_40 != '\x01') {
    iVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator->(local_44);
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  return 1;
}

```

---

## DelRoom

```asm
// === 08567f72 CLeagueMatchRoomList::DelRoom  [0x08567f72-0x8567fe7] ===
 8567f72:	55                   	push   %ebp
 8567f73:	89 e5                	mov    %esp,%ebp
 8567f75:	83 ec 28             	sub    $0x28,%esp
 8567f78:	8b 45 08             	mov    0x8(%ebp),%eax
 8567f7b:	8d 48 04             	lea    0x4(%eax),%ecx
 8567f7e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8567f81:	8d 55 0c             	lea    0xc(%ebp),%edx
 8567f84:	89 54 24 08          	mov    %edx,0x8(%esp)
 8567f88:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8567f8c:	89 04 24             	mov    %eax,(%esp)
 8567f8f:	e8 80 1d 00 00       	call   8569d14 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE4findERS5_>
 8567f94:	83 ec 04             	sub    $0x4,%esp
 8567f97:	8b 45 08             	mov    0x8(%ebp),%eax
 8567f9a:	8d 50 04             	lea    0x4(%eax),%edx
 8567f9d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8567fa0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567fa4:	89 04 24             	mov    %eax,(%esp)
 8567fa7:	e8 24 1c 00 00       	call   8569bd0 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 8567fac:	83 ec 04             	sub    $0x4,%esp
 8567faf:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8567fb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567fb6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8567fb9:	89 04 24             	mov    %eax,(%esp)
 8567fbc:	e8 5b 1c 00 00       	call   8569c1c <_ZNKSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEneERKS5_>
 8567fc1:	84 c0                	test   %al,%al
 8567fc3:	74 1c                	je     8567fe1 <_ZN20CLeagueMatchRoomList7DelRoomEP6IMatch+0x6f>
 8567fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 8567fc8:	8d 50 04             	lea    0x4(%eax),%edx
 8567fcb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8567fce:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567fd2:	89 14 24             	mov    %edx,(%esp)
 8567fd5:	e8 82 1c 00 00       	call   8569c5c <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE5eraseESt17_Rb_tree_iteratorIS6_E>
 8567fda:	b8 01 00 00 00       	mov    $0x1,%eax
 8567fdf:	eb 05                	jmp    8567fe6 <_ZN20CLeagueMatchRoomList7DelRoomEP6IMatch+0x74>
 8567fe1:	b8 00 00 00 00       	mov    $0x0,%eax
 8567fe6:	c9                   	leave
 8567fe7:	c3                   	ret

```

```c
// CLeagueMatchRoomList::DelRoom @ 0x8567f72

/* CLeagueMatchRoomList::DelRoom(IMatch*) */

bool CLeagueMatchRoomList::DelRoom(IMatch *param_1)

{
  char cVar1;
  undefined1 *puVar2;
  IMatch *local_14;
  map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> local_10 [12];
  
  puVar2 = &stack0x00000008;
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::find
            (&local_14);
  std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator!=
                    ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 != '\0') {
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::erase
              ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
               (param_1 + 4),local_14,puVar2);
  }
  return cVar1 != '\0';
}

```

---

## Match

```asm
// === 08567d00 CLeagueMatchRoomList::Match  [0x08567d00-0x8567e9d] ===
 8567d00:	55                   	push   %ebp
 8567d01:	89 e5                	mov    %esp,%ebp
 8567d03:	83 ec 38             	sub    $0x38,%esp
 8567d06:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8567d0a:	b8 00 00 00 00       	mov    $0x0,%eax
 8567d0f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8567d12:	8b 45 08             	mov    0x8(%ebp),%eax
 8567d15:	83 c0 04             	add    $0x4,%eax
 8567d18:	89 04 24             	mov    %eax,(%esp)
 8567d1b:	e8 9c 1e 00 00       	call   8569bbc <_ZNKSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE4sizeEv>
 8567d20:	85 c0                	test   %eax,%eax
 8567d22:	0f 94 c0             	sete   %al
 8567d25:	84 c0                	test   %al,%al
 8567d27:	74 0a                	je     8567d33 <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0x33>
 8567d29:	b8 00 00 00 00       	mov    $0x0,%eax
 8567d2e:	e9 68 01 00 00       	jmp    8567e9b <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0x19b>
 8567d33:	8b 45 08             	mov    0x8(%ebp),%eax
 8567d36:	8d 50 04             	lea    0x4(%eax),%edx
 8567d39:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8567d3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567d40:	89 04 24             	mov    %eax,(%esp)
 8567d43:	e8 88 1e 00 00       	call   8569bd0 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 8567d48:	83 ec 04             	sub    $0x4,%esp
 8567d4b:	8b 45 08             	mov    0x8(%ebp),%eax
 8567d4e:	8d 50 04             	lea    0x4(%eax),%edx
 8567d51:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567d54:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567d58:	89 04 24             	mov    %eax,(%esp)
 8567d5b:	e8 96 1e 00 00       	call   8569bf6 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE5beginEv>
 8567d60:	83 ec 04             	sub    $0x4,%esp
 8567d63:	e9 a0 00 00 00       	jmp    8567e08 <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0x108>
 8567d68:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567d6b:	89 04 24             	mov    %eax,(%esp)
 8567d6e:	e8 db 1e 00 00       	call   8569c4e <_ZNKSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEptEv>
 8567d73:	8b 00                	mov    (%eax),%eax
 8567d75:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8567d78:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8567d7b:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8567d7e:	74 79                	je     8567df9 <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0xf9>
 8567d80:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567d83:	8b 00                	mov    (%eax),%eax
 8567d85:	83 c0 78             	add    $0x78,%eax
 8567d88:	8b 10                	mov    (%eax),%edx
 8567d8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8567d8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567d91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567d94:	89 04 24             	mov    %eax,(%esp)
 8567d97:	ff d2                	call   *%edx
 8567d99:	83 f0 01             	xor    $0x1,%eax
 8567d9c:	84 c0                	test   %al,%al
 8567d9e:	75 5c                	jne    8567dfc <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0xfc>
 8567da0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567da3:	8b 00                	mov    (%eax),%eax
 8567da5:	83 c0 0c             	add    $0xc,%eax
 8567da8:	8b 10                	mov    (%eax),%edx
 8567daa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8567dad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567db1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8567db4:	89 04 24             	mov    %eax,(%esp)
 8567db7:	ff d2                	call   *%edx
 8567db9:	d9 5d f4             	fstps  -0xc(%ebp)
 8567dbc:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8567dc0:	83 f0 01             	xor    $0x1,%eax
 8567dc3:	84 c0                	test   %al,%al
 8567dc5:	74 10                	je     8567dd7 <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0xd7>
 8567dc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8567dca:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8567dcd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8567dd0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8567dd3:	c6 45 eb 01          	movb   $0x1,-0x15(%ebp)
 8567dd7:	d9 45 ec             	flds   -0x14(%ebp)
 8567dda:	d9 45 f4             	flds   -0xc(%ebp)
 8567ddd:	d9 c9                	fxch   %st(1)
 8567ddf:	da e9                	fucompp
 8567de1:	df e0                	fnstsw %ax
 8567de3:	9e                   	sahf
 8567de4:	0f 97 c0             	seta   %al
 8567de7:	84 c0                	test   %al,%al
 8567de9:	74 12                	je     8567dfd <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0xfd>
 8567deb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8567dee:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8567df1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8567df4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8567df7:	eb 04                	jmp    8567dfd <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0xfd>
 8567df9:	90                   	nop
 8567dfa:	eb 01                	jmp    8567dfd <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0xfd>
 8567dfc:	90                   	nop
 8567dfd:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567e00:	89 04 24             	mov    %eax,(%esp)
 8567e03:	e8 28 1e 00 00       	call   8569c30 <_ZNSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEppEv>
 8567e08:	8b 45 08             	mov    0x8(%ebp),%eax
 8567e0b:	8d 50 04             	lea    0x4(%eax),%edx
 8567e0e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567e11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567e15:	89 04 24             	mov    %eax,(%esp)
 8567e18:	e8 b3 1d 00 00       	call   8569bd0 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 8567e1d:	83 ec 04             	sub    $0x4,%esp
 8567e20:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8567e23:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567e27:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8567e2a:	89 04 24             	mov    %eax,(%esp)
 8567e2d:	e8 ea 1d 00 00       	call   8569c1c <_ZNKSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEneERKS5_>
 8567e32:	84 c0                	test   %al,%al
 8567e34:	0f 85 2e ff ff ff    	jne    8567d68 <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0x68>
 8567e3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8567e3d:	8d 50 04             	lea    0x4(%eax),%edx
 8567e40:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8567e43:	89 54 24 04          	mov    %edx,0x4(%esp)
 8567e47:	89 04 24             	mov    %eax,(%esp)
 8567e4a:	e8 81 1d 00 00       	call   8569bd0 <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE3endEv>
 8567e4f:	83 ec 04             	sub    $0x4,%esp
 8567e52:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8567e55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567e59:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8567e5c:	89 04 24             	mov    %eax,(%esp)
 8567e5f:	e8 b8 1d 00 00       	call   8569c1c <_ZNKSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEneERKS5_>
 8567e64:	84 c0                	test   %al,%al
 8567e66:	74 2e                	je     8567e96 <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0x196>
 8567e68:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8567e6b:	89 04 24             	mov    %eax,(%esp)
 8567e6e:	e8 db 1d 00 00       	call   8569c4e <_ZNKSt17_Rb_tree_iteratorISt4pairIKP6IMatchiEEptEv>
 8567e73:	8b 10                	mov    (%eax),%edx
 8567e75:	8b 45 10             	mov    0x10(%ebp),%eax
 8567e78:	89 10                	mov    %edx,(%eax)
 8567e7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8567e7d:	8d 50 04             	lea    0x4(%eax),%edx
 8567e80:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8567e83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8567e87:	89 14 24             	mov    %edx,(%esp)
 8567e8a:	e8 cd 1d 00 00       	call   8569c5c <_ZNSt3mapIP6IMatchiSt4lessIS1_ESaISt4pairIKS1_iEEE5eraseESt17_Rb_tree_iteratorIS6_E>
 8567e8f:	b8 01 00 00 00       	mov    $0x1,%eax
 8567e94:	eb 05                	jmp    8567e9b <_ZN20CLeagueMatchRoomList5MatchEP6IMatchPS1_+0x19b>
 8567e96:	b8 00 00 00 00       	mov    $0x0,%eax
 8567e9b:	c9                   	leave
 8567e9c:	c3                   	ret
 8567e9d:	90                   	nop

```

```c
// CLeagueMatchRoomList::Match @ 0x8567d00

/* CLeagueMatchRoomList::Match(IMatch*, IMatch**) */

undefined4 __thiscall
CLeagueMatchRoomList::Match(CLeagueMatchRoomList *this,IMatch *param_1,IMatch **param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  longdouble lVar6;
  undefined4 local_2c;
  undefined4 local_28;
  map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> local_24 [4];
  map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> local_20 [7];
  char local_19;
  float local_18;
  IMatch *local_14;
  float local_10;
  
  local_19 = '\0';
  local_18 = 0.0;
  iVar2 = std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::size
                    ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>
                      *)(this + 4));
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
              ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
               &local_28);
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::begin
              ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
               &local_2c);
    while( true ) {
      std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
                (local_24);
      cVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_2c,
                         (_Rb_tree_iterator *)local_24);
      if (cVar1 == '\0') break;
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_2c);
      local_14 = (IMatch *)*piVar4;
      if ((local_14 != param_1) &&
         (cVar1 = (**(code **)(*(int *)param_1 + 0x78))(param_1,local_14), cVar1 == '\x01')) {
        lVar6 = (longdouble)(**(code **)(*(int *)param_1 + 0xc))(param_1,local_14);
        local_10 = (float)lVar6;
        if (local_19 != '\x01') {
          local_28 = local_2c;
          local_19 = '\x01';
          local_18 = local_10;
        }
        if (local_10 < local_18) {
          local_28 = local_2c;
          local_18 = local_10;
        }
      }
      std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_2c);
    }
    std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::end
              (local_20);
    cVar1 = std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_28,
                       (_Rb_tree_iterator *)local_20);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      puVar5 = (undefined4 *)
               std::_Rb_tree_iterator<std::pair<IMatch*const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<IMatch*const,int>> *)&local_28);
      *param_2 = (IMatch *)*puVar5;
      std::map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>>::erase
                ((map<IMatch*,int,std::less<IMatch*>,std::allocator<std::pair<IMatch*const,int>>> *)
                 (this + 4),local_28);
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

