# stBroadCastItemScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## checkCommonItem

```asm
// === 08918cdc stBroadCastItemScript::checkCommonItem  [0x08918cdc-0x8918d9b] ===
 8918cdc:	55                   	push   %ebp
 8918cdd:	89 e5                	mov    %esp,%ebp
 8918cdf:	83 ec 38             	sub    $0x38,%esp
 8918ce2:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8918ce6:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8918cea:	0f 85 a4 00 00 00    	jne    8918d94 <_ZNK21stBroadCastItemScript15checkCommonItemEi+0xb8>
 8918cf0:	8b 55 08             	mov    0x8(%ebp),%edx
 8918cf3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8918cf6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918cfa:	89 04 24             	mov    %eax,(%esp)
 8918cfd:	e8 4c 46 7b ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8918d02:	83 ec 04             	sub    $0x4,%esp
 8918d05:	8b 55 08             	mov    0x8(%ebp),%edx
 8918d08:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8918d0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918d0f:	89 04 24             	mov    %eax,(%esp)
 8918d12:	e8 63 46 7b ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8918d17:	83 ec 04             	sub    $0x4,%esp
 8918d1a:	eb 48                	jmp    8918d64 <_ZNK21stBroadCastItemScript15checkCommonItemEi+0x88>
 8918d1c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8918d1f:	89 04 24             	mov    %eax,(%esp)
 8918d22:	e8 f5 0c 7e ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8918d27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8918d2a:	eb 15                	jmp    8918d41 <_ZNK21stBroadCastItemScript15checkCommonItemEi+0x65>
 8918d2c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8918d2f:	8b 00                	mov    (%eax),%eax
 8918d31:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8918d34:	75 07                	jne    8918d3d <_ZNK21stBroadCastItemScript15checkCommonItemEi+0x61>
 8918d36:	b8 01 00 00 00       	mov    $0x1,%eax
 8918d3b:	eb 5c                	jmp    8918d99 <_ZNK21stBroadCastItemScript15checkCommonItemEi+0xbd>
 8918d3d:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8918d41:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8918d45:	75 e5                	jne    8918d2c <_ZNK21stBroadCastItemScript15checkCommonItemEi+0x50>
 8918d47:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8918d4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8918d51:	00 
 8918d52:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8918d55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918d59:	89 04 24             	mov    %eax,(%esp)
 8918d5c:	e8 51 ab 87 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8918d61:	83 ec 04             	sub    $0x4,%esp
 8918d64:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8918d67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8918d6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8918d6e:	89 04 24             	mov    %eax,(%esp)
 8918d71:	e8 b0 0c 7e ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8918d76:	84 c0                	test   %al,%al
 8918d78:	74 11                	je     8918d8b <_ZNK21stBroadCastItemScript15checkCommonItemEi+0xaf>
 8918d7a:	80 75 f3 01          	xorb   $0x1,-0xd(%ebp)
 8918d7e:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8918d82:	74 07                	je     8918d8b <_ZNK21stBroadCastItemScript15checkCommonItemEi+0xaf>
 8918d84:	b8 01 00 00 00       	mov    $0x1,%eax
 8918d89:	eb 05                	jmp    8918d90 <_ZNK21stBroadCastItemScript15checkCommonItemEi+0xb4>
 8918d8b:	b8 00 00 00 00       	mov    $0x0,%eax
 8918d90:	84 c0                	test   %al,%al
 8918d92:	75 88                	jne    8918d1c <_ZNK21stBroadCastItemScript15checkCommonItemEi+0x40>
 8918d94:	b8 00 00 00 00       	mov    $0x0,%eax
 8918d99:	c9                   	leave
 8918d9a:	c3                   	ret
 8918d9b:	90                   	nop

```

```c
// stBroadCastItemScript::checkCommonItem @ 0x8918cdc

/* stBroadCastItemScript::checkCommonItem(int) const */

undefined4 __thiscall
stBroadCastItemScript::checkCommonItem(stBroadCastItemScript *this,int param_1)

{
  bool bVar1;
  __normal_iterator local_20 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  int *local_10;
  
  local_11 = 0;
  std::vector<int,std::allocator<int>>::begin();
  std::vector<int,std::allocator<int>>::end();
  while( true ) {
    bVar1 = __gnu_cxx::operator!=(local_1c,local_20);
    if ((bVar1) && (local_11 = local_11 ^ 1, local_11 != 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    local_10 = (int *)__gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>
                      ::operator*(local_1c);
    while (local_11 != 0) {
      if (*local_10 == param_1) {
        return 1;
      }
      local_11 = 0;
    }
    __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
              (local_18,(int)local_1c);
  }
  return 0;
}

```

---

## checkUnCommonNestedItem

```asm
// === 08918dfe stBroadCastItemScript::checkUnCommonNestedItem  [0x08918dfe-0x8918f23] ===
 8918dfe:	55                   	push   %ebp
 8918dff:	89 e5                	mov    %esp,%ebp
 8918e01:	83 ec 38             	sub    $0x38,%esp
 8918e04:	8b 45 08             	mov    0x8(%ebp),%eax
 8918e07:	8d 48 0c             	lea    0xc(%eax),%ecx
 8918e0a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8918e0d:	8d 55 0c             	lea    0xc(%ebp),%edx
 8918e10:	89 54 24 08          	mov    %edx,0x8(%esp)
 8918e14:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8918e18:	89 04 24             	mov    %eax,(%esp)
 8918e1b:	e8 e2 92 00 00       	call   8922102 <_ZNKSt3mapIiSt6vectorIiSaIiEESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8918e20:	83 ec 04             	sub    $0x4,%esp
 8918e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8918e26:	8d 50 0c             	lea    0xc(%eax),%edx
 8918e29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8918e2c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918e30:	89 04 24             	mov    %eax,(%esp)
 8918e33:	e8 f6 92 00 00       	call   892212e <_ZNKSt3mapIiSt6vectorIiSaIiEESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8918e38:	83 ec 04             	sub    $0x4,%esp
 8918e3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8918e3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8918e42:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8918e45:	89 04 24             	mov    %eax,(%esp)
 8918e48:	e8 07 93 00 00       	call   8922154 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIiSaIiEEEEneERKS6_>
 8918e4d:	84 c0                	test   %al,%al
 8918e4f:	0f 84 c8 00 00 00    	je     8918f1d <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0x11f>
 8918e55:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8918e59:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8918e5d:	0f 85 ba 00 00 00    	jne    8918f1d <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0x11f>
 8918e63:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8918e66:	89 04 24             	mov    %eax,(%esp)
 8918e69:	e8 fa 92 00 00       	call   8922168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIiSaIiEEEEptEv>
 8918e6e:	8d 50 04             	lea    0x4(%eax),%edx
 8918e71:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8918e74:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918e78:	89 04 24             	mov    %eax,(%esp)
 8918e7b:	e8 ce 44 7b ff       	call   80cd34e <_ZNKSt6vectorIiSaIiEE5beginEv>
 8918e80:	83 ec 04             	sub    $0x4,%esp
 8918e83:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8918e86:	89 04 24             	mov    %eax,(%esp)
 8918e89:	e8 da 92 00 00       	call   8922168 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIiSaIiEEEEptEv>
 8918e8e:	8d 50 04             	lea    0x4(%eax),%edx
 8918e91:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8918e94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918e98:	89 04 24             	mov    %eax,(%esp)
 8918e9b:	e8 da 44 7b ff       	call   80cd37a <_ZNKSt6vectorIiSaIiEE3endEv>
 8918ea0:	83 ec 04             	sub    $0x4,%esp
 8918ea3:	eb 48                	jmp    8918eed <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0xef>
 8918ea5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8918ea8:	89 04 24             	mov    %eax,(%esp)
 8918eab:	e8 6c 0b 7e ff       	call   80f9a1c <_ZNK9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEdeEv>
 8918eb0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8918eb3:	eb 15                	jmp    8918eca <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0xcc>
 8918eb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8918eb8:	8b 00                	mov    (%eax),%eax
 8918eba:	3b 45 10             	cmp    0x10(%ebp),%eax
 8918ebd:	75 07                	jne    8918ec6 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0xc8>
 8918ebf:	b8 01 00 00 00       	mov    $0x1,%eax
 8918ec4:	eb 5c                	jmp    8918f22 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0x124>
 8918ec6:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8918eca:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8918ece:	75 e5                	jne    8918eb5 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0xb7>
 8918ed0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8918ed3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8918eda:	00 
 8918edb:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8918ede:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918ee2:	89 04 24             	mov    %eax,(%esp)
 8918ee5:	e8 c8 a9 87 ff       	call   81938b2 <_ZN9__gnu_cxx17__normal_iteratorIPKiSt6vectorIiSaIiEEEppEi>
 8918eea:	83 ec 04             	sub    $0x4,%esp
 8918eed:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8918ef0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8918ef4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8918ef7:	89 04 24             	mov    %eax,(%esp)
 8918efa:	e8 27 0b 7e ff       	call   80f9a26 <_ZN9__gnu_cxxneIPKiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 8918eff:	84 c0                	test   %al,%al
 8918f01:	74 11                	je     8918f14 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0x116>
 8918f03:	80 75 f3 01          	xorb   $0x1,-0xd(%ebp)
 8918f07:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8918f0b:	74 07                	je     8918f14 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0x116>
 8918f0d:	b8 01 00 00 00       	mov    $0x1,%eax
 8918f12:	eb 05                	jmp    8918f19 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0x11b>
 8918f14:	b8 00 00 00 00       	mov    $0x0,%eax
 8918f19:	84 c0                	test   %al,%al
 8918f1b:	75 88                	jne    8918ea5 <_ZNK21stBroadCastItemScript23checkUnCommonNestedItemEii+0xa7>
 8918f1d:	b8 00 00 00 00       	mov    $0x0,%eax
 8918f22:	c9                   	leave
 8918f23:	c3                   	ret

```

```c
// stBroadCastItemScript::checkUnCommonNestedItem @ 0x8918dfe

/* stBroadCastItemScript::checkUnCommonNestedItem(int, int) const */

undefined4 __thiscall
stBroadCastItemScript::checkUnCommonNestedItem(stBroadCastItemScript *this,int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  __normal_iterator local_28 [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_24 [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>> local_20 [4];
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  __normal_iterator<int_const*,std::vector<int,std::allocator<int>>> local_18 [7];
  byte local_11;
  int *local_10;
  
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::find((int *)local_20);
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
          operator!=(local_20,(_Rb_tree_const_iterator *)local_1c);
  if (cVar1 != '\0') {
    local_11 = 0;
    std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
    operator->(local_20);
    std::vector<int,std::allocator<int>>::begin();
    std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
    operator->(local_20);
    std::vector<int,std::allocator<int>>::end();
    while( true ) {
      bVar2 = __gnu_cxx::operator!=(local_24,local_28);
      if ((bVar2) && (local_11 = local_11 ^ 1, local_11 != 0)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      local_10 = (int *)__gnu_cxx::
                        __normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::
                        operator*(local_24);
      while (local_11 != 0) {
        if (*local_10 == param_2) {
          return 1;
        }
        local_11 = 0;
      }
      __gnu_cxx::__normal_iterator<int_const*,std::vector<int,std::allocator<int>>>::operator++
                (local_18,(int)local_24);
    }
  }
  return 0;
}

```

---

## isUnCommonItem

```asm
// === 08918d9c stBroadCastItemScript::isUnCommonItem  [0x08918d9c-0x8918dfd] ===
 8918d9c:	55                   	push   %ebp
 8918d9d:	89 e5                	mov    %esp,%ebp
 8918d9f:	83 ec 28             	sub    $0x28,%esp
 8918da2:	8b 45 08             	mov    0x8(%ebp),%eax
 8918da5:	8d 48 0c             	lea    0xc(%eax),%ecx
 8918da8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8918dab:	8d 55 0c             	lea    0xc(%ebp),%edx
 8918dae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8918db2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8918db6:	89 04 24             	mov    %eax,(%esp)
 8918db9:	e8 44 93 00 00       	call   8922102 <_ZNKSt3mapIiSt6vectorIiSaIiEESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8918dbe:	83 ec 04             	sub    $0x4,%esp
 8918dc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8918dc4:	8d 50 0c             	lea    0xc(%eax),%edx
 8918dc7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8918dca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8918dce:	89 04 24             	mov    %eax,(%esp)
 8918dd1:	e8 58 93 00 00       	call   892212e <_ZNKSt3mapIiSt6vectorIiSaIiEESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8918dd6:	83 ec 04             	sub    $0x4,%esp
 8918dd9:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8918ddc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8918de0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8918de3:	89 04 24             	mov    %eax,(%esp)
 8918de6:	e8 69 93 00 00       	call   8922154 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSt6vectorIiSaIiEEEEneERKS6_>
 8918deb:	84 c0                	test   %al,%al
 8918ded:	74 07                	je     8918df6 <_ZNK21stBroadCastItemScript14isUnCommonItemEi+0x5a>
 8918def:	b8 01 00 00 00       	mov    $0x1,%eax
 8918df4:	eb 05                	jmp    8918dfb <_ZNK21stBroadCastItemScript14isUnCommonItemEi+0x5f>
 8918df6:	b8 00 00 00 00       	mov    $0x0,%eax
 8918dfb:	c9                   	leave
 8918dfc:	c3                   	ret
 8918dfd:	90                   	nop

```

```c
// stBroadCastItemScript::isUnCommonItem @ 0x8918d9c

/* stBroadCastItemScript::isUnCommonItem(int) const */

bool stBroadCastItemScript::isUnCommonItem(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>> local_14 [4];
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  local_10 [12];
  
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
          operator!=(local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 != '\0';
}

```

