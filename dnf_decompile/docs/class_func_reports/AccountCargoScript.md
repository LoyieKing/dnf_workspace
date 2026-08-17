# AccountCargoScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GetCreateInfo

```asm
// === 088c8056 AccountCargoScript::GetCreateInfo  [0x088c8056-0x88c80b9] ===
 88c8056:	55                   	push   %ebp
 88c8057:	89 e5                	mov    %esp,%ebp
 88c8059:	83 ec 28             	sub    $0x28,%esp
 88c805c:	8b 45 08             	mov    0x8(%ebp),%eax
 88c805f:	8d 50 08             	lea    0x8(%eax),%edx
 88c8062:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c8065:	89 54 24 04          	mov    %edx,0x4(%esp)
 88c8069:	89 04 24             	mov    %eax,(%esp)
 88c806c:	e8 6d 02 00 00       	call   88c82de <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE5beginEv>
 88c8071:	83 ec 04             	sub    $0x4,%esp
 88c8074:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8077:	8d 50 08             	lea    0x8(%eax),%edx
 88c807a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88c807d:	89 54 24 04          	mov    %edx,0x4(%esp)
 88c8081:	89 04 24             	mov    %eax,(%esp)
 88c8084:	e8 7b 02 00 00       	call   88c8304 <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 88c8089:	83 ec 04             	sub    $0x4,%esp
 88c808c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88c808f:	89 44 24 04          	mov    %eax,0x4(%esp)
 88c8093:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c8096:	89 04 24             	mov    %eax,(%esp)
 88c8099:	e8 8c 02 00 00       	call   88c832a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEneERKS4_>
 88c809e:	84 c0                	test   %al,%al
 88c80a0:	74 10                	je     88c80b2 <_ZN18AccountCargoScript13GetCreateInfoEv+0x5c>
 88c80a2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c80a5:	89 04 24             	mov    %eax,(%esp)
 88c80a8:	e8 91 02 00 00       	call   88c833e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEptEv>
 88c80ad:	83 c0 04             	add    $0x4,%eax
 88c80b0:	eb 05                	jmp    88c80b7 <_ZN18AccountCargoScript13GetCreateInfoEv+0x61>
 88c80b2:	b8 00 00 00 00       	mov    $0x0,%eax
 88c80b7:	c9                   	leave
 88c80b8:	c3                   	ret
 88c80b9:	90                   	nop

```

```c
// AccountCargoScript::GetCreateInfo @ 0x88c8056

/* AccountCargoScript::GetCreateInfo() */

int AccountCargoScript::GetCreateInfo(void)

{
  char cVar1;
  int iVar2;
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_14 [4];
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_10 [12]
  ;
  
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::begin
            (local_14);
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator->
                      ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}

```

---

## GetCurrUpgradeInfo

```asm
// === 088c80ba AccountCargoScript::GetCurrUpgradeInfo  [0x088c80ba-0x88c8123] ===
 88c80ba:	55                   	push   %ebp
 88c80bb:	89 e5                	mov    %esp,%ebp
 88c80bd:	83 ec 28             	sub    $0x28,%esp
 88c80c0:	8b 45 08             	mov    0x8(%ebp),%eax
 88c80c3:	8d 48 08             	lea    0x8(%eax),%ecx
 88c80c6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c80c9:	8d 55 0c             	lea    0xc(%ebp),%edx
 88c80cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 88c80d0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88c80d4:	89 04 24             	mov    %eax,(%esp)
 88c80d7:	e8 70 02 00 00       	call   88c834c <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 88c80dc:	83 ec 04             	sub    $0x4,%esp
 88c80df:	8b 45 08             	mov    0x8(%ebp),%eax
 88c80e2:	8d 50 08             	lea    0x8(%eax),%edx
 88c80e5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88c80e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 88c80ec:	89 04 24             	mov    %eax,(%esp)
 88c80ef:	e8 10 02 00 00       	call   88c8304 <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 88c80f4:	83 ec 04             	sub    $0x4,%esp
 88c80f7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88c80fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 88c80fe:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c8101:	89 04 24             	mov    %eax,(%esp)
 88c8104:	e8 21 02 00 00       	call   88c832a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEneERKS4_>
 88c8109:	84 c0                	test   %al,%al
 88c810b:	74 10                	je     88c811d <_ZN18AccountCargoScript18GetCurrUpgradeInfoEi+0x63>
 88c810d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c8110:	89 04 24             	mov    %eax,(%esp)
 88c8113:	e8 26 02 00 00       	call   88c833e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEptEv>
 88c8118:	83 c0 04             	add    $0x4,%eax
 88c811b:	eb 05                	jmp    88c8122 <_ZN18AccountCargoScript18GetCurrUpgradeInfoEi+0x68>
 88c811d:	b8 00 00 00 00       	mov    $0x0,%eax
 88c8122:	c9                   	leave
 88c8123:	c3                   	ret

```

```c
// AccountCargoScript::GetCurrUpgradeInfo @ 0x88c80ba

/* AccountCargoScript::GetCurrUpgradeInfo(int) */

int AccountCargoScript::GetCurrUpgradeInfo(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> local_14 [4];
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_10 [12]
  ;
  
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::find
            ((int *)local_14);
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
            (local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator->(local_14);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}

```

---

## GetNextUpgradeInfo

```asm
// === 088c8124 AccountCargoScript::GetNextUpgradeInfo  [0x088c8124-0x88c81d3] ===
 88c8124:	55                   	push   %ebp
 88c8125:	89 e5                	mov    %esp,%ebp
 88c8127:	83 ec 28             	sub    $0x28,%esp
 88c812a:	8b 45 08             	mov    0x8(%ebp),%eax
 88c812d:	8d 48 08             	lea    0x8(%eax),%ecx
 88c8130:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88c8133:	8d 55 0c             	lea    0xc(%ebp),%edx
 88c8136:	89 54 24 08          	mov    %edx,0x8(%esp)
 88c813a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88c813e:	89 04 24             	mov    %eax,(%esp)
 88c8141:	e8 06 02 00 00       	call   88c834c <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE4findERS4_>
 88c8146:	83 ec 04             	sub    $0x4,%esp
 88c8149:	8b 45 ec             	mov    -0x14(%ebp),%eax
 88c814c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 88c814f:	8b 45 08             	mov    0x8(%ebp),%eax
 88c8152:	8d 50 08             	lea    0x8(%eax),%edx
 88c8155:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c8158:	89 54 24 04          	mov    %edx,0x4(%esp)
 88c815c:	89 04 24             	mov    %eax,(%esp)
 88c815f:	e8 a0 01 00 00       	call   88c8304 <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 88c8164:	83 ec 04             	sub    $0x4,%esp
 88c8167:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88c816a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88c816e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88c8171:	89 04 24             	mov    %eax,(%esp)
 88c8174:	e8 b1 01 00 00       	call   88c832a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEneERKS4_>
 88c8179:	84 c0                	test   %al,%al
 88c817b:	74 50                	je     88c81cd <_ZN18AccountCargoScript18GetNextUpgradeInfoEi+0xa9>
 88c817d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88c8180:	89 04 24             	mov    %eax,(%esp)
 88c8183:	e8 f0 01 00 00       	call   88c8378 <_ZNSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEppEv>
 88c8188:	8b 45 08             	mov    0x8(%ebp),%eax
 88c818b:	8d 50 08             	lea    0x8(%eax),%edx
 88c818e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88c8191:	89 54 24 04          	mov    %edx,0x4(%esp)
 88c8195:	89 04 24             	mov    %eax,(%esp)
 88c8198:	e8 67 01 00 00       	call   88c8304 <_ZNSt3mapIi11UpgradeInfoSt4lessIiESaISt4pairIKiS0_EEE3endEv>
 88c819d:	83 ec 04             	sub    $0x4,%esp
 88c81a0:	8d 45 f4             	lea    -0xc(%ebp),%eax
 88c81a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 88c81a7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88c81aa:	89 04 24             	mov    %eax,(%esp)
 88c81ad:	e8 78 01 00 00       	call   88c832a <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEneERKS4_>
 88c81b2:	84 c0                	test   %al,%al
 88c81b4:	74 10                	je     88c81c6 <_ZN18AccountCargoScript18GetNextUpgradeInfoEi+0xa2>
 88c81b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88c81b9:	89 04 24             	mov    %eax,(%esp)
 88c81bc:	e8 7d 01 00 00       	call   88c833e <_ZNKSt17_Rb_tree_iteratorISt4pairIKi11UpgradeInfoEEptEv>
 88c81c1:	83 c0 04             	add    $0x4,%eax
 88c81c4:	eb 0c                	jmp    88c81d2 <_ZN18AccountCargoScript18GetNextUpgradeInfoEi+0xae>
 88c81c6:	b8 00 00 00 00       	mov    $0x0,%eax
 88c81cb:	eb 05                	jmp    88c81d2 <_ZN18AccountCargoScript18GetNextUpgradeInfoEi+0xae>
 88c81cd:	b8 00 00 00 00       	mov    $0x0,%eax
 88c81d2:	c9                   	leave
 88c81d3:	c3                   	ret

```

```c
// AccountCargoScript::GetNextUpgradeInfo @ 0x88c8124

/* AccountCargoScript::GetNextUpgradeInfo(int) */

int AccountCargoScript::GetNextUpgradeInfo(int param_1)

{
  char cVar1;
  int iVar2;
  int local_1c;
  int local_18;
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_14 [4];
  map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>> local_10 [12]
  ;
  
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::find
            (&local_18);
  local_1c = local_18;
  std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
            (local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                    ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_18,
                     (_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_1c);
    std::map<int,UpgradeInfo,std::less<int>,std::allocator<std::pair<int_const,UpgradeInfo>>>::end
              (local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_1c,
                       (_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,UpgradeInfo>> *)&local_1c);
      iVar2 = iVar2 + 4;
    }
  }
  return iVar2;
}

```

