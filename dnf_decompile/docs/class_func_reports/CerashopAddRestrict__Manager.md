# CerashopAddRestrict__Manager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CheckBuyableProduct

```asm
// === 080e0bee CerashopAddRestrict::Manager::CheckBuyableProduct  [0x080e0bee-0x80e0ce1] ===
 80e0bee:	55                   	push   %ebp
 80e0bef:	89 e5                	mov    %esp,%ebp
 80e0bf1:	53                   	push   %ebx
 80e0bf2:	83 ec 34             	sub    $0x34,%esp
 80e0bf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e0bf8:	05 e4 d1 08 00       	add    $0x8d1e4,%eax
 80e0bfd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e0c00:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80e0c04:	75 1c                	jne    80e0c22 <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0x34>
 80e0c06:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0c09:	83 c0 30             	add    $0x30,%eax
 80e0c0c:	89 04 24             	mov    %eax,(%esp)
 80e0c0f:	e8 26 1b 00 00       	call   80e273a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5clearEv>
 80e0c14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0c17:	83 c0 48             	add    $0x48,%eax
 80e0c1a:	89 04 24             	mov    %eax,(%esp)
 80e0c1d:	e8 18 1b 00 00       	call   80e273a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5clearEv>
 80e0c22:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0c25:	8d 50 04             	lea    0x4(%eax),%edx
 80e0c28:	8b 45 10             	mov    0x10(%ebp),%eax
 80e0c2b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0c2f:	89 14 24             	mov    %edx,(%esp)
 80e0c32:	e8 2f eb 9d 00       	call   8abf766 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj>
 80e0c37:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e0c3a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80e0c3e:	75 0a                	jne    80e0c4a <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0x5c>
 80e0c40:	b8 01 00 00 00       	mov    $0x1,%eax
 80e0c45:	e9 92 00 00 00       	jmp    80e0cdc <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0xee>
 80e0c4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e0c4d:	8b 58 10             	mov    0x10(%eax),%ebx
 80e0c50:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80e0c57:	e8 f4 ca f9 ff       	call   807d750 <time@plt>
 80e0c5c:	39 c3                	cmp    %eax,%ebx
 80e0c5e:	0f 9c c0             	setl   %al
 80e0c61:	84 c0                	test   %al,%al
 80e0c63:	74 07                	je     80e0c6c <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0x7e>
 80e0c65:	b8 00 00 00 00       	mov    $0x0,%eax
 80e0c6a:	eb 70                	jmp    80e0cdc <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0xee>
 80e0c6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e0c6f:	8b 00                	mov    (%eax),%eax
 80e0c71:	85 c0                	test   %eax,%eax
 80e0c73:	74 07                	je     80e0c7c <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0x8e>
 80e0c75:	83 f8 01             	cmp    $0x1,%eax
 80e0c78:	74 2e                	je     80e0ca8 <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0xba>
 80e0c7a:	eb 5b                	jmp    80e0cd7 <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0xe9>
 80e0c7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0c7f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e0c82:	8d 4a 30             	lea    0x30(%edx),%ecx
 80e0c85:	8b 55 14             	mov    0x14(%ebp),%edx
 80e0c88:	89 54 24 10          	mov    %edx,0x10(%esp)
 80e0c8c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e0c8f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e0c93:	8b 55 10             	mov    0x10(%ebp),%edx
 80e0c96:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e0c9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0c9e:	89 0c 24             	mov    %ecx,(%esp)
 80e0ca1:	e8 9d fd ff ff       	call   80e0a43 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj>
 80e0ca6:	eb 34                	jmp    80e0cdc <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0xee>
 80e0ca8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0cab:	8d 48 18             	lea    0x18(%eax),%ecx
 80e0cae:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e0cb1:	8d 50 48             	lea    0x48(%eax),%edx
 80e0cb4:	8b 45 14             	mov    0x14(%ebp),%eax
 80e0cb7:	89 44 24 10          	mov    %eax,0x10(%esp)
 80e0cbb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e0cbe:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80e0cc2:	8b 45 10             	mov    0x10(%ebp),%eax
 80e0cc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e0cc9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e0ccd:	89 14 24             	mov    %edx,(%esp)
 80e0cd0:	e8 6e fd ff ff       	call   80e0a43 <_ZN19CerashopAddRestrictL18FindUserInfoDetailERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS0_IjPNS_10paramDailyES2_SaIS3_IS4_SA_EEEjPNS_9InfoDailyEj>
 80e0cd5:	eb 05                	jmp    80e0cdc <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji+0xee>
 80e0cd7:	b8 00 00 00 00       	mov    $0x0,%eax
 80e0cdc:	83 c4 34             	add    $0x34,%esp
 80e0cdf:	5b                   	pop    %ebx
 80e0ce0:	5d                   	pop    %ebp
 80e0ce1:	c3                   	ret

```

```c
// CerashopAddRestrict::Manager::CheckBuyableProduct @ 0x80e0bee

/* CerashopAddRestrict::Manager::CheckBuyableProduct(CUser*, unsigned int, unsigned int, int) */

undefined4 __thiscall
CerashopAddRestrict::Manager::CheckBuyableProduct
          (Manager *this,CUser *param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  InfoDaily *pIVar2;
  undefined4 uVar3;
  time_t tVar4;
  
  if (param_4 == 0) {
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
             *)(param_1 + 0x8d214));
    std::
    map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
    ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
             *)(param_1 + 0x8d22c));
  }
  pIVar2 = (InfoDaily *)ScriptLoader::GetRestrictInfo((uint)(this + 4));
  if (pIVar2 == (InfoDaily *)0x0) {
    uVar3 = 1;
  }
  else {
    iVar1 = *(int *)(pIVar2 + 0x10);
    tVar4 = time((time_t *)0x0);
    if (iVar1 < tVar4) {
      uVar3 = 0;
    }
    else if (*(int *)pIVar2 == 0) {
      uVar3 = FindUserInfoDetail((map *)(param_1 + 0x8d214),(map *)(param_1 + 0x8d1e4),param_2,
                                 pIVar2,param_3);
    }
    else if (*(int *)pIVar2 == 1) {
      uVar3 = FindUserInfoDetail((map *)(param_1 + 0x8d22c),(map *)(param_1 + 0x8d1fc),param_2,
                                 pIVar2,param_3);
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## ClearBuyRestrictItem

```asm
// === 080e0da4 CerashopAddRestrict::Manager::ClearBuyRestrictItem  [0x080e0da4-0x80e0deb] ===
 80e0da4:	55                   	push   %ebp
 80e0da5:	89 e5                	mov    %esp,%ebp
 80e0da7:	83 ec 18             	sub    $0x18,%esp
 80e0daa:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0dad:	05 e4 d1 08 00       	add    $0x8d1e4,%eax
 80e0db2:	89 04 24             	mov    %eax,(%esp)
 80e0db5:	e8 26 1a 00 00       	call   80e27e0 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE5clearEv>
 80e0dba:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0dbd:	05 fc d1 08 00       	add    $0x8d1fc,%eax
 80e0dc2:	89 04 24             	mov    %eax,(%esp)
 80e0dc5:	e8 16 1a 00 00       	call   80e27e0 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE5clearEv>
 80e0dca:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0dcd:	05 14 d2 08 00       	add    $0x8d214,%eax
 80e0dd2:	89 04 24             	mov    %eax,(%esp)
 80e0dd5:	e8 60 19 00 00       	call   80e273a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5clearEv>
 80e0dda:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0ddd:	05 2c d2 08 00       	add    $0x8d22c,%eax
 80e0de2:	89 04 24             	mov    %eax,(%esp)
 80e0de5:	e8 50 19 00 00       	call   80e273a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5clearEv>
 80e0dea:	c9                   	leave
 80e0deb:	c3                   	ret

```

```c
// CerashopAddRestrict::Manager::ClearBuyRestrictItem @ 0x80e0da4

/* CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser*) */

void CerashopAddRestrict::Manager::ClearBuyRestrictItem(CUser *param_1)

{
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::clear((map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
           *)(param_1 + 0x8d1e4));
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::clear((map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
           *)(param_1 + 0x8d1fc));
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)(param_1 + 0x8d214));
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)(param_1 + 0x8d22c));
  return;
}

```

---

## Destroy

```asm
// === 080e0e40 CerashopAddRestrict::Manager::Destroy  [0x080e0e40-0x80e0e49] ===
 80e0e40:	55                   	push   %ebp
 80e0e41:	89 e5                	mov    %esp,%ebp
 80e0e43:	b8 01 00 00 00       	mov    $0x1,%eax
 80e0e48:	5d                   	pop    %ebp
 80e0e49:	c3                   	ret

```

```c
// CerashopAddRestrict::Manager::Destroy @ 0x80e0e40

/* CerashopAddRestrict::Manager::Destroy() */

undefined4 CerashopAddRestrict::Manager::Destroy(void)

{
  return 1;
}

```

---

## FindIpgNo

```asm
// === 080e0e4a CerashopAddRestrict::Manager::FindIpgNo  [0x080e0e4a-0x80e0e67] ===
 80e0e4a:	55                   	push   %ebp
 80e0e4b:	89 e5                	mov    %esp,%ebp
 80e0e4d:	83 ec 18             	sub    $0x18,%esp
 80e0e50:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0e53:	8d 50 04             	lea    0x4(%eax),%edx
 80e0e56:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e0e59:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0e5d:	89 14 24             	mov    %edx,(%esp)
 80e0e60:	e8 a5 e8 9d 00       	call   8abf70a <_ZN19CerashopAddRestrict12ScriptLoader9FindIpgNoEj>
 80e0e65:	c9                   	leave
 80e0e66:	c3                   	ret
 80e0e67:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::FindIpgNo @ 0x80e0e4a

/* CerashopAddRestrict::Manager::FindIpgNo(unsigned int) */

void CerashopAddRestrict::Manager::FindIpgNo(uint param_1)

{
  ScriptLoader::FindIpgNo(param_1 + 4);
  return;
}

```

---

## GetItemListForPacket

```asm
// === 080e0e68 CerashopAddRestrict::Manager::GetItemListForPacket  [0x080e0e68-0x80e0f39] ===
 80e0e68:	55                   	push   %ebp
 80e0e69:	89 e5                	mov    %esp,%ebp
 80e0e6b:	53                   	push   %ebx
 80e0e6c:	83 ec 24             	sub    $0x24,%esp
 80e0e6f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0e72:	8b 55 10             	mov    0x10(%ebp),%edx
 80e0e75:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0e79:	89 04 24             	mov    %eax,(%esp)
 80e0e7c:	e8 73 19 00 00       	call   80e27f4 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE5beginEv>
 80e0e81:	83 ec 04             	sub    $0x4,%esp
 80e0e84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e0e87:	8b 55 10             	mov    0x10(%ebp),%edx
 80e0e8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0e8e:	89 04 24             	mov    %eax,(%esp)
 80e0e91:	e8 5c 18 00 00       	call   80e26f2 <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE3endEv>
 80e0e96:	83 ec 04             	sub    $0x4,%esp
 80e0e99:	eb 7f                	jmp    80e0f1a <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE+0xb2>
 80e0e9b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0e9e:	89 04 24             	mov    %eax,(%esp)
 80e0ea1:	e8 86 18 00 00       	call   80e272c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEptEv>
 80e0ea6:	8b 00                	mov    (%eax),%eax
 80e0ea8:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0eab:	83 c2 04             	add    $0x4,%edx
 80e0eae:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0eb2:	89 14 24             	mov    %edx,(%esp)
 80e0eb5:	e8 ac e8 9d 00       	call   8abf766 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj>
 80e0eba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e0ebd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80e0ec1:	74 3a                	je     80e0efd <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE+0x95>
 80e0ec3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e0ec6:	8b 58 08             	mov    0x8(%eax),%ebx
 80e0ec9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0ecc:	89 04 24             	mov    %eax,(%esp)
 80e0ecf:	e8 58 18 00 00       	call   80e272c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEptEv>
 80e0ed4:	8b 40 04             	mov    0x4(%eax),%eax
 80e0ed7:	8b 40 04             	mov    0x4(%eax),%eax
 80e0eda:	39 c3                	cmp    %eax,%ebx
 80e0edc:	0f 96 c0             	setbe  %al
 80e0edf:	84 c0                	test   %al,%al
 80e0ee1:	74 1a                	je     80e0efd <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE+0x95>
 80e0ee3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0ee6:	89 04 24             	mov    %eax,(%esp)
 80e0ee9:	e8 3e 18 00 00       	call   80e272c <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEptEv>
 80e0eee:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0ef2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e0ef5:	89 04 24             	mov    %eax,(%esp)
 80e0ef8:	e8 f3 15 00 00       	call   80e24f0 <_ZNSt6vectorIjSaIjEE9push_backERKj>
 80e0efd:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e0f00:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e0f07:	00 
 80e0f08:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80e0f0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0f0f:	89 04 24             	mov    %eax,(%esp)
 80e0f12:	e8 03 19 00 00       	call   80e281a <_ZNSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEppEi>
 80e0f17:	83 ec 04             	sub    $0x4,%esp
 80e0f1a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e0f1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0f21:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e0f24:	89 04 24             	mov    %eax,(%esp)
 80e0f27:	e8 ec 17 00 00       	call   80e2718 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjPN19CerashopAddRestrict10paramDailyEEEneERKS6_>
 80e0f2c:	84 c0                	test   %al,%al
 80e0f2e:	0f 85 67 ff ff ff    	jne    80e0e9b <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE+0x33>
 80e0f34:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80e0f37:	c9                   	leave
 80e0f38:	c3                   	ret
 80e0f39:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::GetItemListForPacket @ 0x80e0e68

/* CerashopAddRestrict::Manager::GetItemListForPacket(std::vector<unsigned int,
   std::allocator<unsigned int> >&, std::map<unsigned int, CerashopAddRestrict::paramDaily*,
   std::less<unsigned int>, std::allocator<std::pair<unsigned int const,
   CerashopAddRestrict::paramDaily*> > >&) */

void CerashopAddRestrict::Manager::GetItemListForPacket(vector *param_1,map *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint *puVar4;
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_1c [4];
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> local_14 [4];
  int local_10;
  
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::begin(local_18);
  std::
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  ::end(local_1c);
  while( true ) {
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                        *)local_18,(_Rb_tree_iterator *)local_1c);
    if (cVar2 == '\0') break;
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
    operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>> *)
               local_18);
    local_10 = ScriptLoader::GetRestrictInfo((uint)(param_1 + 4));
    if (local_10 != 0) {
      uVar1 = *(uint *)(local_10 + 8);
      iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
              ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                            *)local_18);
      if (uVar1 <= *(uint *)(*(int *)(iVar3 + 4) + 4)) {
        puVar4 = (uint *)std::
                         _Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                         ::operator->((_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>
                                       *)local_18);
        std::vector<unsigned_int,std::allocator<unsigned_int>>::push_back
                  ((vector<unsigned_int,std::allocator<unsigned_int>> *)param_2,puVar4);
      }
    }
    std::_Rb_tree_iterator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>::
    operator++(local_14,(int)local_18);
  }
  return;
}

```

---

## InputBuyInfo

```asm
// === 080e129a CerashopAddRestrict::Manager::InputBuyInfo  [0x080e129a-0x80e1429] ===
 80e129a:	55                   	push   %ebp
 80e129b:	89 e5                	mov    %esp,%ebp
 80e129d:	83 ec 38             	sub    $0x38,%esp
 80e12a0:	8b 45 10             	mov    0x10(%ebp),%eax
 80e12a3:	8b 55 08             	mov    0x8(%ebp),%edx
 80e12a6:	83 c2 04             	add    $0x4,%edx
 80e12a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e12ad:	89 14 24             	mov    %edx,(%esp)
 80e12b0:	e8 b1 e4 9d 00       	call   8abf766 <_ZN19CerashopAddRestrict12ScriptLoader15GetRestrictInfoEj>
 80e12b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e12b8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80e12bc:	75 0a                	jne    80e12c8 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x2e>
 80e12be:	b8 00 00 00 00       	mov    $0x0,%eax
 80e12c3:	e9 5f 01 00 00       	jmp    80e1427 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x18d>
 80e12c8:	8b 45 18             	mov    0x18(%ebp),%eax
 80e12cb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e12ce:	89 50 04             	mov    %edx,0x4(%eax)
 80e12d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e12d4:	05 e4 d1 08 00       	add    $0x8d1e4,%eax
 80e12d9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e12dc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e12df:	8b 00                	mov    (%eax),%eax
 80e12e1:	85 c0                	test   %eax,%eax
 80e12e3:	74 0e                	je     80e12f3 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x59>
 80e12e5:	83 f8 01             	cmp    $0x1,%eax
 80e12e8:	0f 84 91 00 00 00    	je     80e137f <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0xe5>
 80e12ee:	e9 18 01 00 00       	jmp    80e140b <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x171>
 80e12f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e12f6:	8d 48 30             	lea    0x30(%eax),%ecx
 80e12f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e12fc:	8d 55 10             	lea    0x10(%ebp),%edx
 80e12ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1303:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e1307:	89 04 24             	mov    %eax,(%esp)
 80e130a:	e8 e7 12 00 00       	call   80e25f6 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 80e130f:	83 ec 04             	sub    $0x4,%esp
 80e1312:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1315:	8d 50 30             	lea    0x30(%eax),%edx
 80e1318:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e131b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e131f:	89 04 24             	mov    %eax,(%esp)
 80e1322:	e8 fb 12 00 00       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 80e1327:	83 ec 04             	sub    $0x4,%esp
 80e132a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e132d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1331:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e1334:	89 04 24             	mov    %eax,(%esp)
 80e1337:	e8 ce 15 00 00       	call   80e290a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 80e133c:	84 c0                	test   %al,%al
 80e133e:	74 15                	je     80e1355 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0xbb>
 80e1340:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1343:	8d 50 30             	lea    0x30(%eax),%edx
 80e1346:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80e1349:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e134d:	89 14 24             	mov    %edx,(%esp)
 80e1350:	e8 c9 15 00 00       	call   80e291e <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 80e1355:	8b 55 10             	mov    0x10(%ebp),%edx
 80e1358:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e135b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 80e135e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80e1362:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e1366:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e1369:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e136d:	89 04 24             	mov    %eax,(%esp)
 80e1370:	e8 21 fe ff ff       	call   80e1196 <_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj>
 80e1375:	8b 55 18             	mov    0x18(%ebp),%edx
 80e1378:	89 02                	mov    %eax,(%edx)
 80e137a:	e9 93 00 00 00       	jmp    80e1412 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x178>
 80e137f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1382:	8d 48 48             	lea    0x48(%eax),%ecx
 80e1385:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e1388:	8d 55 10             	lea    0x10(%ebp),%edx
 80e138b:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e138f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e1393:	89 04 24             	mov    %eax,(%esp)
 80e1396:	e8 5b 12 00 00       	call   80e25f6 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE4findERS3_>
 80e139b:	83 ec 04             	sub    $0x4,%esp
 80e139e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e13a1:	8d 50 48             	lea    0x48(%eax),%edx
 80e13a4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e13a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e13ab:	89 04 24             	mov    %eax,(%esp)
 80e13ae:	e8 6f 12 00 00       	call   80e2622 <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE3endEv>
 80e13b3:	83 ec 04             	sub    $0x4,%esp
 80e13b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e13b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e13bd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e13c0:	89 04 24             	mov    %eax,(%esp)
 80e13c3:	e8 42 15 00 00       	call   80e290a <_ZNKSt17_Rb_tree_iteratorISt4pairIKjjEEneERKS3_>
 80e13c8:	84 c0                	test   %al,%al
 80e13ca:	74 15                	je     80e13e1 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x147>
 80e13cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e13cf:	8d 50 48             	lea    0x48(%eax),%edx
 80e13d2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80e13d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e13d9:	89 14 24             	mov    %edx,(%esp)
 80e13dc:	e8 3d 15 00 00       	call   80e291e <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5eraseESt17_Rb_tree_iteratorIS4_E>
 80e13e1:	8b 45 10             	mov    0x10(%ebp),%eax
 80e13e4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e13e7:	8d 4a 18             	lea    0x18(%edx),%ecx
 80e13ea:	8b 55 14             	mov    0x14(%ebp),%edx
 80e13ed:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e13f1:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e13f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e13f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e13fc:	89 0c 24             	mov    %ecx,(%esp)
 80e13ff:	e8 92 fd ff ff       	call   80e1196 <_ZN19CerashopAddRestrict18InputBuyInfoDetailERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS2_EEEPKNS_9InfoDailyEjj>
 80e1404:	8b 55 18             	mov    0x18(%ebp),%edx
 80e1407:	89 02                	mov    %eax,(%edx)
 80e1409:	eb 07                	jmp    80e1412 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x178>
 80e140b:	b8 00 00 00 00       	mov    $0x0,%eax
 80e1410:	eb 15                	jmp    80e1427 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x18d>
 80e1412:	8b 45 18             	mov    0x18(%ebp),%eax
 80e1415:	8b 00                	mov    (%eax),%eax
 80e1417:	85 c0                	test   %eax,%eax
 80e1419:	75 07                	jne    80e1422 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x188>
 80e141b:	b8 00 00 00 00       	mov    $0x0,%eax
 80e1420:	eb 05                	jmp    80e1427 <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE+0x18d>
 80e1422:	b8 01 00 00 00       	mov    $0x1,%eax
 80e1427:	c9                   	leave
 80e1428:	c3                   	ret
 80e1429:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::InputBuyInfo @ 0x80e129a

/* CerashopAddRestrict::Manager::InputBuyInfo(CUser*, unsigned int, unsigned int,
   CerashopAddRestrict::DBInputData&) */

undefined4 __thiscall
CerashopAddRestrict::Manager::InputBuyInfo
          (Manager *this,CUser *param_1,uint param_2,uint param_3,DBInputData *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint local_24;
  uint local_20;
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_1c [4];
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  local_18 [4];
  InfoDaily *local_14;
  CUser *local_10;
  
  local_14 = (InfoDaily *)ScriptLoader::GetRestrictInfo((uint)(this + 4));
  if (local_14 == (InfoDaily *)0x0) {
    uVar2 = 0;
  }
  else {
    *(InfoDaily **)(param_4 + 4) = local_14;
    local_10 = param_1 + 0x8d1e4;
    if (*(int *)local_14 == 0) {
      puVar3 = &param_2;
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::find(&local_20);
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::end(local_1c);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_20,
                         (_Rb_tree_iterator *)local_1c);
      if (cVar1 != '\0') {
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)(local_10 + 0x30),local_20,puVar3);
      }
      uVar2 = InputBuyInfoDetail((map *)local_10,local_14,param_2,param_3);
      *(undefined4 *)param_4 = uVar2;
    }
    else {
      if (*(int *)local_14 != 1) {
        return 0;
      }
      puVar3 = &param_2;
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::find(&local_24);
      std::
      map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,unsigned_int>> *)&local_24,
                         (_Rb_tree_iterator *)local_18);
      if (cVar1 != '\0') {
        std::
        map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
        ::erase((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
                 *)(local_10 + 0x48),local_24,puVar3);
      }
      uVar2 = InputBuyInfoDetail((map *)(local_10 + 0x18),local_14,param_2,param_3);
      *(undefined4 *)param_4 = uVar2;
    }
    if (*(int *)param_4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## IsBuyableRestrictItem

```asm
// === 080e0ce2 CerashopAddRestrict::Manager::IsBuyableRestrictItem  [0x080e0ce2-0x80e0d13] ===
 80e0ce2:	55                   	push   %ebp
 80e0ce3:	89 e5                	mov    %esp,%ebp
 80e0ce5:	83 ec 28             	sub    $0x28,%esp
 80e0ce8:	e8 60 1a 00 00       	call   80e274d <_ZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEv>
 80e0ced:	8b 55 14             	mov    0x14(%ebp),%edx
 80e0cf0:	89 54 24 10          	mov    %edx,0x10(%esp)
 80e0cf4:	8b 55 10             	mov    0x10(%ebp),%edx
 80e0cf7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e0cfb:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e0cfe:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e0d02:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0d05:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0d09:	89 04 24             	mov    %eax,(%esp)
 80e0d0c:	e8 dd fe ff ff       	call   80e0bee <_ZN19CerashopAddRestrict7Manager19CheckBuyableProductEP5CUserjji>
 80e0d11:	c9                   	leave
 80e0d12:	c3                   	ret
 80e0d13:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::IsBuyableRestrictItem @ 0x80e0ce2

/* CerashopAddRestrict::Manager::IsBuyableRestrictItem(CUser*, unsigned int, unsigned int, int) */

void CerashopAddRestrict::Manager::IsBuyableRestrictItem
               (CUser *param_1,uint param_2,uint param_3,int param_4)

{
  Manager *this;
  
  this = (Manager *)ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
  CheckBuyableProduct(this,param_1,param_2,param_3,param_4);
  return;
}

```

---

## Load

```asm
// === 080e0e08 CerashopAddRestrict::Manager::Load  [0x080e0e08-0x80e0e3f] ===
 80e0e08:	55                   	push   %ebp
 80e0e09:	89 e5                	mov    %esp,%ebp
 80e0e0b:	83 ec 18             	sub    $0x18,%esp
 80e0e0e:	c7 04 24 04 cb b2 08 	movl   $0x8b2cb04,(%esp)
 80e0e15:	e8 46 cd f9 ff       	call   807db60 <printf@plt>
 80e0e1a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0e1d:	83 c0 04             	add    $0x4,%eax
 80e0e20:	89 04 24             	mov    %eax,(%esp)
 80e0e23:	e8 a4 e5 9d 00       	call   8abf3cc <_ZN19CerashopAddRestrict12ScriptLoader10LoadScriptEv>
 80e0e28:	85 c0                	test   %eax,%eax
 80e0e2a:	0f 95 c0             	setne  %al
 80e0e2d:	84 c0                	test   %al,%al
 80e0e2f:	74 07                	je     80e0e38 <_ZN19CerashopAddRestrict7Manager4LoadEv+0x30>
 80e0e31:	b8 00 00 00 00       	mov    $0x0,%eax
 80e0e36:	eb 05                	jmp    80e0e3d <_ZN19CerashopAddRestrict7Manager4LoadEv+0x35>
 80e0e38:	b8 01 00 00 00       	mov    $0x1,%eax
 80e0e3d:	c9                   	leave
 80e0e3e:	c3                   	ret
 80e0e3f:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::Load @ 0x80e0e08

/* CerashopAddRestrict::Manager::Load() */

bool __thiscall CerashopAddRestrict::Manager::Load(Manager *this)

{
  int iVar1;
  
  printf("[!] Loading CeraShop Add Restrict Type script - ");
  iVar1 = ScriptLoader::LoadScript((ScriptLoader *)(this + 4));
  return iVar1 == 0;
}

```

---

## LoadProcess

```asm
// === 080e142a CerashopAddRestrict::Manager::LoadProcess  [0x080e142a-0x80e14f5] ===
 80e142a:	55                   	push   %ebp
 80e142b:	89 e5                	mov    %esp,%ebp
 80e142d:	83 ec 38             	sub    $0x38,%esp
 80e1430:	8b 45 08             	mov    0x8(%ebp),%eax
 80e1433:	89 04 24             	mov    %eax,(%esp)
 80e1436:	e8 ff 12 00 00       	call   80e273a <_ZNSt3mapIjjSt4lessIjESaISt4pairIKjjEEE5clearEv>
 80e143b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80e1442:	e9 99 00 00 00       	jmp    80e14e0 <_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE+0xb6>
 80e1447:	c7 04 24 0c 00 00 00 	movl   $0xc,(%esp)
 80e144e:	e8 fd 2f 64 00       	call   8724450 <_Znwj>
 80e1453:	89 c2                	mov    %eax,%edx
 80e1455:	89 d0                	mov    %edx,%eax
 80e1457:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80e145d:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 80e1464:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80e146b:	89 d0                	mov    %edx,%eax
 80e146d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 80e1470:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e1473:	89 d0                	mov    %edx,%eax
 80e1475:	01 c0                	add    %eax,%eax
 80e1477:	01 d0                	add    %edx,%eax
 80e1479:	c1 e0 02             	shl    $0x2,%eax
 80e147c:	03 45 10             	add    0x10(%ebp),%eax
 80e147f:	83 c0 08             	add    $0x8,%eax
 80e1482:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80e1485:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1488:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e148b:	8b 12                	mov    (%edx),%edx
 80e148d:	89 10                	mov    %edx,(%eax)
 80e148f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e1492:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e1495:	8b 52 04             	mov    0x4(%edx),%edx
 80e1498:	89 50 04             	mov    %edx,0x4(%eax)
 80e149b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e149e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e14a1:	8b 52 08             	mov    0x8(%edx),%edx
 80e14a4:	89 50 08             	mov    %edx,0x8(%eax)
 80e14a7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80e14aa:	8d 55 dc             	lea    -0x24(%ebp),%edx
 80e14ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e14b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e14b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e14b8:	89 04 24             	mov    %eax,(%esp)
 80e14bb:	e8 f0 13 00 00       	call   80e28b0 <_ZNSt4pairIKjPN19CerashopAddRestrict10paramDailyEEC1IRjRS3_EEOT_OT0_>
 80e14c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e14c3:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80e14c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e14ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e14cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e14d1:	89 04 24             	mov    %eax,(%esp)
 80e14d4:	e8 05 14 00 00       	call   80e28de <_ZNSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE6insertERKS7_>
 80e14d9:	83 ec 04             	sub    $0x4,%esp
 80e14dc:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80e14e0:	8b 45 10             	mov    0x10(%ebp),%eax
 80e14e3:	8b 00                	mov    (%eax),%eax
 80e14e5:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80e14e8:	0f 97 c0             	seta   %al
 80e14eb:	84 c0                	test   %al,%al
 80e14ed:	0f 85 54 ff ff ff    	jne    80e1447 <_ZN19CerashopAddRestrict7Manager11LoadProcessERSt3mapIjjSt4lessIjESaISt4pairIKjjEEERS1_IjPNS_10paramDailyES3_SaIS4_IS5_SB_EEEP35SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE+0x1d>
 80e14f3:	c9                   	leave
 80e14f4:	c3                   	ret
 80e14f5:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::LoadProcess @ 0x80e142a

/* CerashopAddRestrict::Manager::LoadProcess(std::map<unsigned int, unsigned int, std::less<unsigned
   int>, std::allocator<std::pair<unsigned int const, unsigned int> > >&, std::map<unsigned int,
   CerashopAddRestrict::paramDaily*, std::less<unsigned int>, std::allocator<std::pair<unsigned int
   const, CerashopAddRestrict::paramDaily*> > >&, SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE*) */

void CerashopAddRestrict::Manager::LoadProcess
               (map *param_1,map *param_2,SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *param_3)

{
  paramDaily *local_28;
  pair local_24 [8];
  pair<unsigned_int_const,CerashopAddRestrict::paramDaily*> local_1c [8];
  uint local_14;
  SIG_LOAD_CERASHOP_ADD_RESTRICT_TYPE *local_10;
  
  std::
  map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
  ::clear((map<unsigned_int,unsigned_int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_int>>>
           *)param_1);
  for (local_14 = 0; local_14 < *(uint *)param_3; local_14 = local_14 + 1) {
    local_28 = operator_new(0xc);
    *(uint *)local_28 = 0;
    *(uint *)(local_28 + 4) = 0;
    *(uint *)(local_28 + 8) = 0;
    local_10 = param_3 + local_14 * 0xc + 8;
    *(uint *)local_28 = *(uint *)local_10;
    *(uint *)(local_28 + 4) = *(uint *)(param_3 + local_14 * 0xc + 0xc);
    *(uint *)(local_28 + 8) = *(uint *)(param_3 + local_14 * 0xc + 0x10);
    std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>::
    pair<unsigned_int&,CerashopAddRestrict::paramDaily*&>(local_1c,(uint *)local_28,&local_28);
    std::
    map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
    ::insert(local_24);
  }
  return;
}

```

---

## LoadRequestBuyRestrictItem

```asm
// === 080e0d90 CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem  [0x080e0d90-0x80e0da3] ===
 80e0d90:	55                   	push   %ebp
 80e0d91:	89 e5                	mov    %esp,%ebp
 80e0d93:	83 ec 18             	sub    $0x18,%esp
 80e0d96:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0d99:	89 04 24             	mov    %eax,(%esp)
 80e0d9c:	e8 55 12 00 00       	call   80e1ff6 <_ZN30DB_LoadCerashopAddRestrictType11makeRequestEP5CUser>
 80e0da1:	c9                   	leave
 80e0da2:	c3                   	ret
 80e0da3:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem @ 0x80e0d90

/* CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser*) */

void CerashopAddRestrict::Manager::LoadRequestBuyRestrictItem(CUser *param_1)

{
  DB_LoadCerashopAddRestrictType::makeRequest(param_1);
  return;
}

```

---

## Manager

```asm
// === 080e09bc CerashopAddRestrict::Manager::Manager  [0x080e09bc-0x80e0a23] ===
 80e09bc:	55                   	push   %ebp
 80e09bd:	89 e5                	mov    %esp,%ebp
 80e09bf:	83 ec 18             	sub    $0x18,%esp
 80e09c2:	8b 45 08             	mov    0x8(%ebp),%eax
 80e09c5:	89 04 24             	mov    %eax,(%esp)
 80e09c8:	e8 87 1a 00 00       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 80e09cd:	8b 45 08             	mov    0x8(%ebp),%eax
 80e09d0:	89 04 24             	mov    %eax,(%esp)
 80e09d3:	e8 18 1c 00 00       	call   80e25f0 <_ZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEEC1Ev>
 80e09d8:	8b 45 08             	mov    0x8(%ebp),%eax
 80e09db:	c7 00 68 db b2 08    	movl   $0x8b2db68,(%eax)
 80e09e1:	8b 45 08             	mov    0x8(%ebp),%eax
 80e09e4:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80e09eb:	8b 45 08             	mov    0x8(%ebp),%eax
 80e09ee:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 80e09f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80e09f8:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 80e09ff:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0a02:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 80e0a09:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0a0c:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 80e0a13:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0a16:	83 c0 04             	add    $0x4,%eax
 80e0a19:	89 04 24             	mov    %eax,(%esp)
 80e0a1c:	e8 f3 19 00 00       	call   80e2414 <_ZN19CerashopAddRestrict12ScriptLoaderC1Ev>
 80e0a21:	c9                   	leave
 80e0a22:	c3                   	ret
 80e0a23:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::Manager @ 0x80e09bc

/* CerashopAddRestrict::Manager::Manager() */

void __thiscall CerashopAddRestrict::Manager::Manager(Manager *this)

{
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  ARAD::Singleton<CerashopAddRestrict::Manager>::Singleton();
  *(undefined ***)this = &PTR_Load_08b2db68;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  ScriptLoader::ScriptLoader((ScriptLoader *)(this + 4));
  return;
}

```

---

## SendSyncPacket

```asm
// === 080e0dec CerashopAddRestrict::Manager::SendSyncPacket  [0x080e0dec-0x80e0e07] ===
 80e0dec:	55                   	push   %ebp
 80e0ded:	89 e5                	mov    %esp,%ebp
 80e0def:	83 ec 18             	sub    $0x18,%esp
 80e0df2:	e8 56 19 00 00       	call   80e274d <_ZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEv>
 80e0df7:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0dfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0dfe:	89 04 24             	mov    %eax,(%esp)
 80e0e01:	e8 34 01 00 00       	call   80e0f3a <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser>
 80e0e06:	c9                   	leave
 80e0e07:	c3                   	ret

```

```c
// CerashopAddRestrict::Manager::SendSyncPacket @ 0x80e0dec

/* CerashopAddRestrict::Manager::SendSyncPacket(CUser*) */

void CerashopAddRestrict::Manager::SendSyncPacket(CUser *param_1)

{
  Manager *this;
  
  this = (Manager *)ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
  makeSyncPacket(this,param_1);
  return;
}

```

---

## UpdateBuyableRestrictItem

```asm
// === 080e0d14 CerashopAddRestrict::Manager::UpdateBuyableRestrictItem  [0x080e0d14-0x80e0d8f] ===
 80e0d14:	55                   	push   %ebp
 80e0d15:	89 e5                	mov    %esp,%ebp
 80e0d17:	83 ec 38             	sub    $0x38,%esp
 80e0d1a:	e8 2e 1a 00 00       	call   80e274d <_ZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEv>
 80e0d1f:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e0d22:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0d26:	89 04 24             	mov    %eax,(%esp)
 80e0d29:	e8 1c 01 00 00       	call   80e0e4a <_ZN19CerashopAddRestrict7Manager9FindIpgNoEj>
 80e0d2e:	83 f0 01             	xor    $0x1,%eax
 80e0d31:	84 c0                	test   %al,%al
 80e0d33:	75 57                	jne    80e0d8c <_ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj+0x78>
 80e0d35:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e0d38:	89 04 24             	mov    %eax,(%esp)
 80e0d3b:	e8 fc 16 00 00       	call   80e243c <_ZN19CerashopAddRestrict11DBInputDataC1Ev>
 80e0d40:	e8 08 1a 00 00       	call   80e274d <_ZN4ARAD9SingletonIN19CerashopAddRestrict7ManagerEE3GetEv>
 80e0d45:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80e0d48:	89 54 24 10          	mov    %edx,0x10(%esp)
 80e0d4c:	8b 55 10             	mov    0x10(%ebp),%edx
 80e0d4f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80e0d53:	8b 55 0c             	mov    0xc(%ebp),%edx
 80e0d56:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e0d5a:	8b 55 08             	mov    0x8(%ebp),%edx
 80e0d5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e0d61:	89 04 24             	mov    %eax,(%esp)
 80e0d64:	e8 31 05 00 00       	call   80e129a <_ZN19CerashopAddRestrict7Manager12InputBuyInfoEP5CUserjjRNS_11DBInputDataE>
 80e0d69:	84 c0                	test   %al,%al
 80e0d6b:	74 20                	je     80e0d8d <_ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj+0x79>
 80e0d6d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80e0d70:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0d74:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0d77:	89 04 24             	mov    %eax,(%esp)
 80e0d7a:	e8 3b 0a 00 00       	call   80e17ba <_ZN30DB_SaveCerashopAddRestrictType11makeRequestEP5CUserRN19CerashopAddRestrict11DBInputDataE>
 80e0d7f:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0d82:	89 04 24             	mov    %eax,(%esp)
 80e0d85:	e8 62 00 00 00       	call   80e0dec <_ZN19CerashopAddRestrict7Manager14SendSyncPacketEP5CUser>
 80e0d8a:	eb 01                	jmp    80e0d8d <_ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj+0x79>
 80e0d8c:	90                   	nop
 80e0d8d:	c9                   	leave
 80e0d8e:	c3                   	ret
 80e0d8f:	90                   	nop

```

```c
// CerashopAddRestrict::Manager::UpdateBuyableRestrictItem @ 0x80e0d14

/* CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(CUser*, unsigned int, unsigned int) */

void CerashopAddRestrict::Manager::UpdateBuyableRestrictItem
               (CUser *param_1,uint param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  Manager *this;
  DBInputData local_14 [16];
  
  uVar2 = ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
  cVar1 = FindIpgNo(uVar2);
  if (cVar1 == '\x01') {
    DBInputData::DBInputData(local_14);
    this = (Manager *)ARAD::Singleton<CerashopAddRestrict::Manager>::Get();
    cVar1 = InputBuyInfo(this,param_1,param_2,param_3,local_14);
    if (cVar1 != '\0') {
      DB_SaveCerashopAddRestrictType::makeRequest(param_1,local_14);
      SendSyncPacket(param_1);
    }
  }
  return;
}

```

---

## makeSyncPacket

```asm
// === 080e0f3a CerashopAddRestrict::Manager::makeSyncPacket  [0x080e0f3a-0x80e10d6] ===
 80e0f3a:	55                   	push   %ebp
 80e0f3b:	89 e5                	mov    %esp,%ebp
 80e0f3d:	56                   	push   %esi
 80e0f3e:	53                   	push   %ebx
 80e0f3f:	83 ec 40             	sub    $0x40,%esp
 80e0f42:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e0f45:	05 e4 d1 08 00       	add    $0x8d1e4,%eax
 80e0f4a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e0f4d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e0f50:	89 04 24             	mov    %eax,(%esp)
 80e0f53:	e8 00 19 00 00       	call   80e2858 <_ZNKSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE4sizeEv>
 80e0f58:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e0f5b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e0f5e:	83 c0 18             	add    $0x18,%eax
 80e0f61:	89 04 24             	mov    %eax,(%esp)
 80e0f64:	e8 ef 18 00 00       	call   80e2858 <_ZNKSt3mapIjPN19CerashopAddRestrict10paramDailyESt4lessIjESaISt4pairIKjS2_EEE4sizeEv>
 80e0f69:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e0f6c:	01 d0                	add    %edx,%eax
 80e0f6e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e0f71:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80e0f75:	0f 84 54 01 00 00    	je     80e10cf <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x195>
 80e0f7b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e0f7e:	89 04 24             	mov    %eax,(%esp)
 80e0f81:	e8 f8 14 00 00       	call   80e247e <_ZNSt6vectorIjSaIjEEC1Ev>
 80e0f86:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e0f89:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e0f8d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e0f90:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0f94:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0f97:	89 04 24             	mov    %eax,(%esp)
 80e0f9a:	e8 c9 fe ff ff       	call   80e0e68 <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE>
 80e0f9f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e0fa2:	83 c0 18             	add    $0x18,%eax
 80e0fa5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80e0fa9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e0fac:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e0fb0:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0fb3:	89 04 24             	mov    %eax,(%esp)
 80e0fb6:	e8 ad fe ff ff       	call   80e0e68 <_ZN19CerashopAddRestrict7Manager20GetItemListForPacketERSt6vectorIjSaIjEERSt3mapIjPNS_10paramDailyESt4lessIjESaISt4pairIKjS7_EEE>
 80e0fbb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e0fbe:	89 04 24             	mov    %eax,(%esp)
 80e0fc1:	e8 a6 18 00 00       	call   80e286c <_ZNKSt6vectorIjSaIjEE5emptyEv>
 80e0fc6:	84 c0                	test   %al,%al
 80e0fc8:	0f 85 f4 00 00 00    	jne    80e10c2 <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x188>
 80e0fce:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e0fd1:	89 04 24             	mov    %eax,(%esp)
 80e0fd4:	e8 73 cd 4a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80e0fd9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e0fdc:	89 04 24             	mov    %eax,(%esp)
 80e0fdf:	e8 02 a9 fe ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 80e0fe4:	c7 44 24 08 22 02 00 	movl   $0x222,0x8(%esp)
 80e0feb:	00 
 80e0fec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80e0ff3:	00 
 80e0ff4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e0ff7:	89 04 24             	mov    %eax,(%esp)
 80e0ffa:	e8 fd a8 fe ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80e0fff:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e1002:	89 04 24             	mov    %eax,(%esp)
 80e1005:	e8 58 14 00 00       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 80e100a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e100e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e1011:	89 04 24             	mov    %eax,(%esp)
 80e1014:	e8 23 a9 fe ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 80e1019:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e1020:	eb 27                	jmp    80e1049 <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x10f>
 80e1022:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e1025:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1029:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e102c:	89 04 24             	mov    %eax,(%esp)
 80e102f:	e8 30 15 00 00       	call   80e2564 <_ZNSt6vectorIjSaIjEEixEj>
 80e1034:	8b 00                	mov    (%eax),%eax
 80e1036:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e103a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e103d:	89 04 24             	mov    %eax,(%esp)
 80e1040:	e8 f7 a8 fe ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 80e1045:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e1049:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e104c:	89 04 24             	mov    %eax,(%esp)
 80e104f:	e8 0e 14 00 00       	call   80e2462 <_ZNKSt6vectorIjSaIjEE4sizeEv>
 80e1054:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e1057:	0f 97 c0             	seta   %al
 80e105a:	84 c0                	test   %al,%al
 80e105c:	75 c4                	jne    80e1022 <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0xe8>
 80e105e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80e1065:	00 
 80e1066:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e1069:	89 04 24             	mov    %eax,(%esp)
 80e106c:	e8 e7 a8 fe ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80e1071:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e1074:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e1078:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e107b:	89 04 24             	mov    %eax,(%esp)
 80e107e:	e8 37 75 56 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80e1083:	eb 15                	jmp    80e109a <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x160>
 80e1085:	89 d3                	mov    %edx,%ebx
 80e1087:	89 c6                	mov    %eax,%esi
 80e1089:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e108c:	89 04 24             	mov    %eax,(%esp)
 80e108f:	e8 ec cd 4a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80e1094:	89 f0                	mov    %esi,%eax
 80e1096:	89 da                	mov    %ebx,%edx
 80e1098:	eb 0d                	jmp    80e10a7 <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x16d>
 80e109a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e109d:	89 04 24             	mov    %eax,(%esp)
 80e10a0:	e8 db cd 4a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80e10a5:	eb 1b                	jmp    80e10c2 <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x188>
 80e10a7:	89 d3                	mov    %edx,%ebx
 80e10a9:	89 c6                	mov    %eax,%esi
 80e10ab:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e10ae:	89 04 24             	mov    %eax,(%esp)
 80e10b1:	e8 dc 13 00 00       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 80e10b6:	89 f0                	mov    %esi,%eax
 80e10b8:	89 da                	mov    %ebx,%edx
 80e10ba:	89 04 24             	mov    %eax,(%esp)
 80e10bd:	e8 8e 26 a0 00       	call   8ae3750 <_Unwind_Resume>
 80e10c2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e10c5:	89 04 24             	mov    %eax,(%esp)
 80e10c8:	e8 c5 13 00 00       	call   80e2492 <_ZNSt6vectorIjSaIjEED1Ev>
 80e10cd:	eb 01                	jmp    80e10d0 <_ZN19CerashopAddRestrict7Manager14makeSyncPacketEP5CUser+0x196>
 80e10cf:	90                   	nop
 80e10d0:	83 c4 40             	add    $0x40,%esp
 80e10d3:	5b                   	pop    %ebx
 80e10d4:	5e                   	pop    %esi
 80e10d5:	5d                   	pop    %ebp
 80e10d6:	c3                   	ret

```

```c
// CerashopAddRestrict::Manager::makeSyncPacket @ 0x80e0f3a

/* CerashopAddRestrict::Manager::makeSyncPacket(CUser*) */

void __thiscall CerashopAddRestrict::Manager::makeSyncPacket(Manager *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  PacketGuard local_30 [12];
  vector<unsigned_int,std::allocator<unsigned_int>> local_24 [12];
  map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_18 = (map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
              *)(param_1 + 0x8d1e4);
  local_14 = std::
             map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
             ::size(local_18);
  iVar2 = std::
          map<unsigned_int,CerashopAddRestrict::paramDaily*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CerashopAddRestrict::paramDaily*>>>
          ::size(local_18 + 0x18);
  local_14 = iVar2 + local_14;
  if (local_14 != 0) {
    std::vector<unsigned_int,std::allocator<unsigned_int>>::vector(local_24);
                    /* try { // try from 080e0f9a to 080e0fd8 has its CatchHandler @ 080e10a7 */
    GetItemListForPacket((vector *)this,(map *)local_24);
    GetItemListForPacket((vector *)this,(map *)local_24);
    cVar1 = std::vector<unsigned_int,std::allocator<unsigned_int>>::empty();
    if (cVar1 == '\0') {
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 080e0fdf to 080e1082 has its CatchHandler @ 080e1085 */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x222);
      iVar2 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_24);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,iVar2);
      local_10 = 0;
      while( true ) {
        uVar4 = std::vector<unsigned_int,std::allocator<unsigned_int>>::size(local_24);
        if (uVar4 <= local_10) break;
        piVar3 = (int *)std::vector<unsigned_int,std::allocator<unsigned_int>>::operator[]
                                  (local_24,local_10);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*piVar3);
        local_10 = local_10 + 1;
      }
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send(param_1,local_30);
                    /* try { // try from 080e10a0 to 080e10a4 has its CatchHandler @ 080e10a7 */
      PacketGuard::~PacketGuard(local_30);
    }
    std::vector<unsigned_int,std::allocator<unsigned_int>>::~vector(local_24);
  }
  return;
}

```

---

## ~Manager

```asm
// === 080e0a24 CerashopAddRestrict::Manager::~Manager  [0x080e0a24-0x80e0a42] ===
 80e0a24:	55                   	push   %ebp
 80e0a25:	89 e5                	mov    %esp,%ebp
 80e0a27:	83 ec 18             	sub    $0x18,%esp
 80e0a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0a2d:	c7 00 68 db b2 08    	movl   $0x8b2db68,(%eax)
 80e0a33:	8b 45 08             	mov    0x8(%ebp),%eax
 80e0a36:	83 c0 04             	add    $0x4,%eax
 80e0a39:	89 04 24             	mov    %eax,(%esp)
 80e0a3c:	e8 e7 19 00 00       	call   80e2428 <_ZN19CerashopAddRestrict12ScriptLoaderD1Ev>
 80e0a41:	c9                   	leave
 80e0a42:	c3                   	ret

```

```c
// CerashopAddRestrict::Manager::~Manager @ 0x80e0a24

/* CerashopAddRestrict::Manager::~Manager() */

void __thiscall CerashopAddRestrict::Manager::~Manager(Manager *this)

{
  *(undefined ***)this = &PTR_Load_08b2db68;
  ScriptLoader::~ScriptLoader((ScriptLoader *)(this + 4));
  return;
}

```

