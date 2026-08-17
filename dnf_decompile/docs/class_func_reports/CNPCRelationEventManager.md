# CNPCRelationEventManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## AddDislikeItemInfo

```asm
// === 0890d07a CNPCRelationEventManager::AddDislikeItemInfo  [0x0890d07a-0x890d0ff] ===
 890d07a:	55                   	push   %ebp
 890d07b:	89 e5                	mov    %esp,%ebp
 890d07d:	83 ec 38             	sub    $0x38,%esp
 890d080:	8b 45 0c             	mov    0xc(%ebp),%eax
 890d083:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 890d087:	8b 55 08             	mov    0x8(%ebp),%edx
 890d08a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d08d:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 890d090:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890d094:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d098:	89 04 24             	mov    %eax,(%esp)
 890d09b:	e8 16 2e 01 00       	call   891feb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 890d0a0:	83 ec 04             	sub    $0x4,%esp
 890d0a3:	8b 55 08             	mov    0x8(%ebp),%edx
 890d0a6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890d0a9:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d0ad:	89 04 24             	mov    %eax,(%esp)
 890d0b0:	e8 a1 2c 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890d0b5:	83 ec 04             	sub    $0x4,%esp
 890d0b8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890d0bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d0bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d0c2:	89 04 24             	mov    %eax,(%esp)
 890d0c5:	e8 18 2e 01 00       	call   891fee2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEeqERKS5_>
 890d0ca:	84 c0                	test   %al,%al
 890d0cc:	75 2e                	jne    890d0fc <_ZN24CNPCRelationEventManager18AddDislikeItemInfoEtj+0x82>
 890d0ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d0d1:	89 04 24             	mov    %eax,(%esp)
 890d0d4:	e8 b7 2c 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890d0d9:	8b 40 04             	mov    0x4(%eax),%eax
 890d0dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 890d0df:	8b 45 10             	mov    0x10(%ebp),%eax
 890d0e2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 890d0e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 890d0e8:	8d 50 3c             	lea    0x3c(%eax),%edx
 890d0eb:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890d0ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d0f2:	89 14 24             	mov    %edx,(%esp)
 890d0f5:	e8 f4 10 78 ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 890d0fa:	eb 01                	jmp    890d0fd <_ZN24CNPCRelationEventManager18AddDislikeItemInfoEtj+0x83>
 890d0fc:	90                   	nop
 890d0fd:	c9                   	leave
 890d0fe:	c3                   	ret
 890d0ff:	90                   	nop

```

```c
// CNPCRelationEventManager::AddDislikeItemInfo @ 0x890d07a

/* CNPCRelationEventManager::AddDislikeItemInfo(unsigned short, unsigned int) */

void __thiscall
CNPCRelationEventManager::AddDislikeItemInfo
          (CNPCRelationEventManager *this,ushort param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_1c [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_18 [4];
  uint local_14;
  int local_10;
  
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_1c);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_1c,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_1c);
    local_10 = *(int *)(iVar2 + 4);
    local_14 = param_2;
    std::vector<int,std::allocator<int>>::push_back
              ((vector<int,std::allocator<int>> *)(local_10 + 0x3c),(int *)&local_14);
  }
  return;
}

```

---

## AddFavorItemInfo

```asm
// === 0890cf44 CNPCRelationEventManager::AddFavorItemInfo  [0x0890cf44-0x890cfd9] ===
 890cf44:	55                   	push   %ebp
 890cf45:	89 e5                	mov    %esp,%ebp
 890cf47:	83 ec 48             	sub    $0x48,%esp
 890cf4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 890cf4d:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 890cf51:	8b 55 08             	mov    0x8(%ebp),%edx
 890cf54:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890cf57:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 890cf5a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890cf5e:	89 54 24 04          	mov    %edx,0x4(%esp)
 890cf62:	89 04 24             	mov    %eax,(%esp)
 890cf65:	e8 4c 2f 01 00       	call   891feb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 890cf6a:	83 ec 04             	sub    $0x4,%esp
 890cf6d:	8b 55 08             	mov    0x8(%ebp),%edx
 890cf70:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890cf73:	89 54 24 04          	mov    %edx,0x4(%esp)
 890cf77:	89 04 24             	mov    %eax,(%esp)
 890cf7a:	e8 d7 2d 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890cf7f:	83 ec 04             	sub    $0x4,%esp
 890cf82:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890cf85:	89 44 24 04          	mov    %eax,0x4(%esp)
 890cf89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890cf8c:	89 04 24             	mov    %eax,(%esp)
 890cf8f:	e8 4e 2f 01 00       	call   891fee2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEeqERKS5_>
 890cf94:	84 c0                	test   %al,%al
 890cf96:	75 3e                	jne    890cfd6 <_ZN24CNPCRelationEventManager16AddFavorItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj+0x92>
 890cf98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890cf9b:	89 04 24             	mov    %eax,(%esp)
 890cf9e:	e8 ed 2d 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890cfa3:	8b 40 04             	mov    0x4(%eax),%eax
 890cfa6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 890cfa9:	8b 45 14             	mov    0x14(%ebp),%eax
 890cfac:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 890cfaf:	8b 45 18             	mov    0x18(%ebp),%eax
 890cfb2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 890cfb5:	8b 55 10             	mov    0x10(%ebp),%edx
 890cfb8:	89 d0                	mov    %edx,%eax
 890cfba:	c1 e0 02             	shl    $0x2,%eax
 890cfbd:	01 d0                	add    %edx,%eax
 890cfbf:	c1 e0 02             	shl    $0x2,%eax
 890cfc2:	03 45 f4             	add    -0xc(%ebp),%eax
 890cfc5:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 890cfc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 890cfcc:	89 04 24             	mov    %eax,(%esp)
 890cfcf:	e8 22 2f 01 00       	call   891fef6 <_ZNSt6vectorI18stNPCEventItemInfoSaIS0_EE9push_backERKS0_>
 890cfd4:	eb 01                	jmp    890cfd7 <_ZN24CNPCRelationEventManager16AddFavorItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj+0x93>
 890cfd6:	90                   	nop
 890cfd7:	c9                   	leave
 890cfd8:	c3                   	ret
 890cfd9:	90                   	nop

```

```c
// CNPCRelationEventManager::AddFavorItemInfo @ 0x890cf44

/* CNPCRelationEventManager::AddFavorItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND,
   unsigned int, unsigned int) */

void __thiscall
CNPCRelationEventManager::AddFavorItemInfo
          (undefined4 this,undefined4 param_1,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 local_1c;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_18 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [4];
  int local_10;
  
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_18);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_18);
    local_10 = *(int *)(iVar2 + 4);
    local_20 = param_4;
    local_1c = param_5;
    std::vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>>::push_back
              ((vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>> *)
               (param_3 * 0x14 + local_10),(stNPCEventItemInfo *)&local_20);
  }
  return;
}

```

---

## AddNPCInfo

```asm
// === 0890ceea CNPCRelationEventManager::AddNPCInfo  [0x0890ceea-0x890cf43] ===
 890ceea:	55                   	push   %ebp
 890ceeb:	89 e5                	mov    %esp,%ebp
 890ceed:	83 ec 48             	sub    $0x48,%esp
 890cef0:	8b 45 0c             	mov    0xc(%ebp),%eax
 890cef3:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 890cef7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890cefa:	8d 55 10             	lea    0x10(%ebp),%edx
 890cefd:	89 54 24 08          	mov    %edx,0x8(%esp)
 890cf01:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 890cf04:	89 54 24 04          	mov    %edx,0x4(%esp)
 890cf08:	89 04 24             	mov    %eax,(%esp)
 890cf0b:	e8 09 2f 01 00       	call   891fe19 <_ZSt9make_pairIRKtRP22stNPCRelationEventInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 890cf10:	83 ec 04             	sub    $0x4,%esp
 890cf13:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890cf16:	89 44 24 04          	mov    %eax,0x4(%esp)
 890cf1a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890cf1d:	89 04 24             	mov    %eax,(%esp)
 890cf20:	e8 33 2f 01 00       	call   891fe58 <_ZNSt4pairIKtP22stNPCRelationEventInfoEC1ItS2_EEOS_IT_T0_E>
 890cf25:	8b 55 08             	mov    0x8(%ebp),%edx
 890cf28:	8d 45 e0             	lea    -0x20(%ebp),%eax
 890cf2b:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 890cf2e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890cf32:	89 54 24 04          	mov    %edx,0x4(%esp)
 890cf36:	89 04 24             	mov    %eax,(%esp)
 890cf39:	e8 4c 2f 01 00       	call   891fe8a <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 890cf3e:	83 ec 04             	sub    $0x4,%esp
 890cf41:	c9                   	leave
 890cf42:	c3                   	ret
 890cf43:	90                   	nop

```

```c
// CNPCRelationEventManager::AddNPCInfo @ 0x890ceea

/* CNPCRelationEventManager::AddNPCInfo(unsigned short, stNPCRelationEventInfo*) */

void CNPCRelationEventManager::AddNPCInfo(ushort param_1,stNPCRelationEventInfo *param_2)

{
  undefined2 local_30 [6];
  pair local_24 [8];
  pair<unsigned_short_const,stNPCRelationEventInfo*> local_1c [8];
  ushort local_14 [8];
  
  local_30[0] = SUB42(param_2,0);
  std::make_pair<unsigned_short_const&,stNPCRelationEventInfo*&>
            (local_14,(stNPCRelationEventInfo **)local_30);
  std::pair<unsigned_short_const,stNPCRelationEventInfo*>::
  pair<unsigned_short,stNPCRelationEventInfo*>(local_1c,(pair *)local_14);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::insert(local_24);
  return;
}

```

---

## AddRewardItemInfo

```asm
// === 0890cfda CNPCRelationEventManager::AddRewardItemInfo  [0x0890cfda-0x890d079] ===
 890cfda:	55                   	push   %ebp
 890cfdb:	89 e5                	mov    %esp,%ebp
 890cfdd:	83 ec 38             	sub    $0x38,%esp
 890cfe0:	8b 45 0c             	mov    0xc(%ebp),%eax
 890cfe3:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 890cfe7:	8b 55 08             	mov    0x8(%ebp),%edx
 890cfea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890cfed:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 890cff0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890cff4:	89 54 24 04          	mov    %edx,0x4(%esp)
 890cff8:	89 04 24             	mov    %eax,(%esp)
 890cffb:	e8 b6 2e 01 00       	call   891feb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 890d000:	83 ec 04             	sub    $0x4,%esp
 890d003:	8b 55 08             	mov    0x8(%ebp),%edx
 890d006:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890d009:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d00d:	89 04 24             	mov    %eax,(%esp)
 890d010:	e8 41 2d 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890d015:	83 ec 04             	sub    $0x4,%esp
 890d018:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890d01b:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d01f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890d022:	89 04 24             	mov    %eax,(%esp)
 890d025:	e8 b8 2e 01 00       	call   891fee2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEeqERKS5_>
 890d02a:	84 c0                	test   %al,%al
 890d02c:	75 49                	jne    890d077 <_ZN24CNPCRelationEventManager17AddRewardItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj+0x9d>
 890d02e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890d031:	89 04 24             	mov    %eax,(%esp)
 890d034:	e8 57 2d 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890d039:	8b 40 04             	mov    0x4(%eax),%eax
 890d03c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 890d03f:	8b 55 10             	mov    0x10(%ebp),%edx
 890d042:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 890d045:	89 d0                	mov    %edx,%eax
 890d047:	c1 e0 02             	shl    $0x2,%eax
 890d04a:	01 d0                	add    %edx,%eax
 890d04c:	c1 e0 02             	shl    $0x2,%eax
 890d04f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 890d052:	8d 50 0c             	lea    0xc(%eax),%edx
 890d055:	8b 45 14             	mov    0x14(%ebp),%eax
 890d058:	89 02                	mov    %eax,(%edx)
 890d05a:	8b 55 10             	mov    0x10(%ebp),%edx
 890d05d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 890d060:	89 d0                	mov    %edx,%eax
 890d062:	c1 e0 02             	shl    $0x2,%eax
 890d065:	01 d0                	add    %edx,%eax
 890d067:	c1 e0 02             	shl    $0x2,%eax
 890d06a:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 890d06d:	8d 50 10             	lea    0x10(%eax),%edx
 890d070:	8b 45 18             	mov    0x18(%ebp),%eax
 890d073:	89 02                	mov    %eax,(%edx)
 890d075:	eb 01                	jmp    890d078 <_ZN24CNPCRelationEventManager17AddRewardItemInfoEt34ENUM_NPC_RELATION_EVENT_FAVOR_KINDjj+0x9e>
 890d077:	90                   	nop
 890d078:	c9                   	leave
 890d079:	c3                   	ret

```

```c
// CNPCRelationEventManager::AddRewardItemInfo @ 0x890cfda

/* CNPCRelationEventManager::AddRewardItemInfo(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND,
   unsigned int, unsigned int) */

void __thiscall
CNPCRelationEventManager::AddRewardItemInfo
          (undefined4 this,undefined4 param_1,int param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_18 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [16];
  
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_18);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_18);
    iVar2 = *(int *)(iVar2 + 4);
    *(undefined4 *)(iVar2 + param_3 * 0x14 + 0xc) = param_4;
    *(undefined4 *)(iVar2 + param_3 * 0x14 + 0x10) = param_5;
  }
  return;
}

```

---

## CNPCRelationEventManager

```asm
// === 0890ce20 CNPCRelationEventManager::CNPCRelationEventManager  [0x0890ce20-0x890ce33] ===
 890ce20:	55                   	push   %ebp
 890ce21:	89 e5                	mov    %esp,%ebp
 890ce23:	83 ec 18             	sub    $0x18,%esp
 890ce26:	8b 45 08             	mov    0x8(%ebp),%eax
 890ce29:	89 04 24             	mov    %eax,(%esp)
 890ce2c:	e8 85 2e 01 00       	call   891fcb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEEC1Ev>
 890ce31:	c9                   	leave
 890ce32:	c3                   	ret
 890ce33:	90                   	nop

```

```c
// CNPCRelationEventManager::CNPCRelationEventManager @ 0x890ce20

/* CNPCRelationEventManager::CNPCRelationEventManager() */

void __thiscall CNPCRelationEventManager::CNPCRelationEventManager(CNPCRelationEventManager *this)

{
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::map((map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
         *)this);
  return;
}

```

---

## GetFavorIndex

```asm
// === 0890d3d0 CNPCRelationEventManager::GetFavorIndex  [0x0890d3d0-0x890d44e] ===
 890d3d0:	55                   	push   %ebp
 890d3d1:	89 e5                	mov    %esp,%ebp
 890d3d3:	83 ec 18             	sub    $0x18,%esp
 890d3d6:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 890d3dd:	00 
 890d3de:	8b 45 0c             	mov    0xc(%ebp),%eax
 890d3e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d3e5:	c7 04 24 3a 0e e1 08 	movl   $0x8e10e3a,(%esp)
 890d3ec:	e8 cf 14 77 ff       	call   807e8c0 <strncmp@plt>
 890d3f1:	85 c0                	test   %eax,%eax
 890d3f3:	75 07                	jne    890d3fc <_ZN24CNPCRelationEventManager13GetFavorIndexEPKc+0x2c>
 890d3f5:	b8 00 00 00 00       	mov    $0x0,%eax
 890d3fa:	eb 51                	jmp    890d44d <_ZN24CNPCRelationEventManager13GetFavorIndexEPKc+0x7d>
 890d3fc:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 890d403:	00 
 890d404:	8b 45 0c             	mov    0xc(%ebp),%eax
 890d407:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d40b:	c7 04 24 41 0e e1 08 	movl   $0x8e10e41,(%esp)
 890d412:	e8 a9 14 77 ff       	call   807e8c0 <strncmp@plt>
 890d417:	85 c0                	test   %eax,%eax
 890d419:	75 07                	jne    890d422 <_ZN24CNPCRelationEventManager13GetFavorIndexEPKc+0x52>
 890d41b:	b8 01 00 00 00       	mov    $0x1,%eax
 890d420:	eb 2b                	jmp    890d44d <_ZN24CNPCRelationEventManager13GetFavorIndexEPKc+0x7d>
 890d422:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 890d429:	00 
 890d42a:	8b 45 0c             	mov    0xc(%ebp),%eax
 890d42d:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d431:	c7 04 24 48 0e e1 08 	movl   $0x8e10e48,(%esp)
 890d438:	e8 83 14 77 ff       	call   807e8c0 <strncmp@plt>
 890d43d:	85 c0                	test   %eax,%eax
 890d43f:	75 07                	jne    890d448 <_ZN24CNPCRelationEventManager13GetFavorIndexEPKc+0x78>
 890d441:	b8 02 00 00 00       	mov    $0x2,%eax
 890d446:	eb 05                	jmp    890d44d <_ZN24CNPCRelationEventManager13GetFavorIndexEPKc+0x7d>
 890d448:	b8 03 00 00 00       	mov    $0x3,%eax
 890d44d:	c9                   	leave
 890d44e:	c3                   	ret

```

```c
// CNPCRelationEventManager::GetFavorIndex @ 0x890d3d0

/* CNPCRelationEventManager::GetFavorIndex(char const*) */

undefined4 __thiscall
CNPCRelationEventManager::GetFavorIndex(CNPCRelationEventManager *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = strncmp("[good]",param_1,10);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = strncmp("[soso]",param_1,10);
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      iVar1 = strncmp("[bad]",param_1,10);
      if (iVar1 == 0) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
  }
  return uVar2;
}

```

---

## GetItemKind

```asm
// === 0890d1c0 CNPCRelationEventManager::GetItemKind  [0x0890d1c0-0x890d325] ===
 890d1c0:	55                   	push   %ebp
 890d1c1:	89 e5                	mov    %esp,%ebp
 890d1c3:	53                   	push   %ebx
 890d1c4:	83 ec 54             	sub    $0x54,%esp
 890d1c7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 890d1ca:	8b 45 10             	mov    0x10(%ebp),%eax
 890d1cd:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 890d1d1:	89 1c 24             	mov    %ebx,(%esp)
 890d1d4:	e8 6f e3 00 00       	call   891b548 <_ZN16stTempRewardInfoC1Ev>
 890d1d9:	8b 55 0c             	mov    0xc(%ebp),%edx
 890d1dc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 890d1df:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 890d1e2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890d1e6:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d1ea:	89 04 24             	mov    %eax,(%esp)
 890d1ed:	e8 c4 2c 01 00       	call   891feb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 890d1f2:	83 ec 04             	sub    $0x4,%esp
 890d1f5:	8b 55 0c             	mov    0xc(%ebp),%edx
 890d1f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d1fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d1ff:	89 04 24             	mov    %eax,(%esp)
 890d202:	e8 4f 2b 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890d207:	83 ec 04             	sub    $0x4,%esp
 890d20a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d20d:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d211:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 890d214:	89 04 24             	mov    %eax,(%esp)
 890d217:	e8 c6 2c 01 00       	call   891fee2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEeqERKS5_>
 890d21c:	84 c0                	test   %al,%al
 890d21e:	0f 85 f4 00 00 00    	jne    890d318 <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x158>
 890d224:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 890d227:	89 04 24             	mov    %eax,(%esp)
 890d22a:	e8 61 2b 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890d22f:	8b 40 04             	mov    0x4(%eax),%eax
 890d232:	89 45 ec             	mov    %eax,-0x14(%ebp)
 890d235:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 890d23c:	e9 c6 00 00 00       	jmp    890d307 <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x147>
 890d241:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 890d248:	e9 90 00 00 00       	jmp    890d2dd <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x11d>
 890d24d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 890d250:	89 d0                	mov    %edx,%eax
 890d252:	c1 e0 02             	shl    $0x2,%eax
 890d255:	01 d0                	add    %edx,%eax
 890d257:	c1 e0 02             	shl    $0x2,%eax
 890d25a:	03 45 ec             	add    -0x14(%ebp),%eax
 890d25d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 890d260:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d264:	89 04 24             	mov    %eax,(%esp)
 890d267:	e8 1a 2d 01 00       	call   891ff86 <_ZNSt6vectorI18stNPCEventItemInfoSaIS0_EE2atEj>
 890d26c:	8b 50 04             	mov    0x4(%eax),%edx
 890d26f:	8b 00                	mov    (%eax),%eax
 890d271:	89 45 dc             	mov    %eax,-0x24(%ebp)
 890d274:	89 55 e0             	mov    %edx,-0x20(%ebp)
 890d277:	8b 45 dc             	mov    -0x24(%ebp),%eax
 890d27a:	3b 45 14             	cmp    0x14(%ebp),%eax
 890d27d:	75 5a                	jne    890d2d9 <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x119>
 890d27f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 890d282:	3b 45 18             	cmp    0x18(%ebp),%eax
 890d285:	77 52                	ja     890d2d9 <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x119>
 890d287:	8b 45 e0             	mov    -0x20(%ebp),%eax
 890d28a:	85 c0                	test   %eax,%eax
 890d28c:	0f 84 89 00 00 00    	je     890d31b <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x15b>
 890d292:	8b 45 f0             	mov    -0x10(%ebp),%eax
 890d295:	89 03                	mov    %eax,(%ebx)
 890d297:	8b 45 18             	mov    0x18(%ebp),%eax
 890d29a:	ba 00 00 00 00       	mov    $0x0,%edx
 890d29f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 890d2a2:	89 55 cc             	mov    %edx,-0x34(%ebp)
 890d2a5:	df 6d c8             	fildll -0x38(%ebp)
 890d2a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 890d2ab:	ba 00 00 00 00       	mov    $0x0,%edx
 890d2b0:	89 45 c8             	mov    %eax,-0x38(%ebp)
 890d2b3:	89 55 cc             	mov    %edx,-0x34(%ebp)
 890d2b6:	df 6d c8             	fildll -0x38(%ebp)
 890d2b9:	de f9                	fdivrp %st,%st(1)
 890d2bb:	d9 7d c6             	fnstcw -0x3a(%ebp)
 890d2be:	0f b7 45 c6          	movzwl -0x3a(%ebp),%eax
 890d2c2:	b4 0c                	mov    $0xc,%ah
 890d2c4:	66 89 45 c4          	mov    %ax,-0x3c(%ebp)
 890d2c8:	d9 6d c4             	fldcw  -0x3c(%ebp)
 890d2cb:	db 5d c0             	fistpl -0x40(%ebp)
 890d2ce:	d9 6d c6             	fldcw  -0x3a(%ebp)
 890d2d1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 890d2d4:	89 43 04             	mov    %eax,0x4(%ebx)
 890d2d7:	eb 43                	jmp    890d31c <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x15c>
 890d2d9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 890d2dd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 890d2e0:	89 d0                	mov    %edx,%eax
 890d2e2:	c1 e0 02             	shl    $0x2,%eax
 890d2e5:	01 d0                	add    %edx,%eax
 890d2e7:	c1 e0 02             	shl    $0x2,%eax
 890d2ea:	03 45 ec             	add    -0x14(%ebp),%eax
 890d2ed:	89 04 24             	mov    %eax,(%esp)
 890d2f0:	e8 75 2c 01 00       	call   891ff6a <_ZNKSt6vectorI18stNPCEventItemInfoSaIS0_EE4sizeEv>
 890d2f5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 890d2f8:	0f 97 c0             	seta   %al
 890d2fb:	84 c0                	test   %al,%al
 890d2fd:	0f 85 4a ff ff ff    	jne    890d24d <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x8d>
 890d303:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 890d307:	83 7d f0 02          	cmpl   $0x2,-0x10(%ebp)
 890d30b:	0f 9e c0             	setle  %al
 890d30e:	84 c0                	test   %al,%al
 890d310:	0f 85 2b ff ff ff    	jne    890d241 <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x81>
 890d316:	eb 04                	jmp    890d31c <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x15c>
 890d318:	90                   	nop
 890d319:	eb 01                	jmp    890d31c <_ZN24CNPCRelationEventManager11GetItemKindEtjj+0x15c>
 890d31b:	90                   	nop
 890d31c:	89 d8                	mov    %ebx,%eax
 890d31e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 890d321:	c9                   	leave
 890d322:	c2 04 00             	ret    $0x4
 890d325:	90                   	nop

```

```c
// CNPCRelationEventManager::GetItemKind @ 0x890d1c0

/* CNPCRelationEventManager::GetItemKind(unsigned short, unsigned int, unsigned int) */

stTempRewardInfo * CNPCRelationEventManager::GetItemKind(ushort param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined2 in_stack_00000006;
  int in_stack_00000010;
  uint in_stack_00000014;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_20 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_1c [4];
  int local_18;
  int local_14;
  uint local_10;
  
  stTempRewardInfo::stTempRewardInfo(_param_1);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_20);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_1c);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_20,(_Rb_tree_iterator *)local_1c);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_20);
    local_18 = *(int *)(iVar2 + 4);
    for (local_14 = 0; local_14 < 3; local_14 = local_14 + 1) {
      local_10 = 0;
      while (uVar4 = std::vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>>::size
                               ((vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>> *)
                                (local_14 * 0x14 + local_18)), local_10 < uVar4) {
        piVar3 = (int *)std::vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>>::at
                                  ((vector<stNPCEventItemInfo,std::allocator<stNPCEventItemInfo>> *)
                                   (local_14 * 0x14 + local_18),local_10);
        uVar4 = piVar3[1];
        if ((*piVar3 == in_stack_00000010) && (uVar4 <= in_stack_00000014)) {
          if (uVar4 == 0) {
            return _param_1;
          }
          *(int *)_param_1 = local_14;
          *(int *)(_param_1 + 4) = (int)ROUND((longdouble)in_stack_00000014 / (longdouble)uVar4);
          return _param_1;
        }
        local_10 = local_10 + 1;
      }
    }
  }
  return _param_1;
}

```

---

## GetRewardItem

```asm
// === 0890d326 CNPCRelationEventManager::GetRewardItem  [0x0890d326-0x890d3cf] ===
 890d326:	55                   	push   %ebp
 890d327:	89 e5                	mov    %esp,%ebp
 890d329:	53                   	push   %ebx
 890d32a:	83 ec 44             	sub    $0x44,%esp
 890d32d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 890d330:	8b 45 10             	mov    0x10(%ebp),%eax
 890d333:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 890d337:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 890d33e:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 890d345:	8b 55 0c             	mov    0xc(%ebp),%edx
 890d348:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 890d34b:	8d 4d d4             	lea    -0x2c(%ebp),%ecx
 890d34e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890d352:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d356:	89 04 24             	mov    %eax,(%esp)
 890d359:	e8 58 2b 01 00       	call   891feb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 890d35e:	83 ec 04             	sub    $0x4,%esp
 890d361:	8b 55 0c             	mov    0xc(%ebp),%edx
 890d364:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890d367:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d36b:	89 04 24             	mov    %eax,(%esp)
 890d36e:	e8 e3 29 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890d373:	83 ec 04             	sub    $0x4,%esp
 890d376:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890d379:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d37d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 890d380:	89 04 24             	mov    %eax,(%esp)
 890d383:	e8 5a 2b 01 00       	call   891fee2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEeqERKS5_>
 890d388:	84 c0                	test   %al,%al
 890d38a:	74 0d                	je     890d399 <_ZN24CNPCRelationEventManager13GetRewardItemEt34ENUM_NPC_RELATION_EVENT_FAVOR_KIND+0x73>
 890d38c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 890d38f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 890d392:	89 03                	mov    %eax,(%ebx)
 890d394:	89 53 04             	mov    %edx,0x4(%ebx)
 890d397:	eb 2e                	jmp    890d3c7 <_ZN24CNPCRelationEventManager13GetRewardItemEt34ENUM_NPC_RELATION_EVENT_FAVOR_KIND+0xa1>
 890d399:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 890d39c:	89 04 24             	mov    %eax,(%esp)
 890d39f:	e8 ec 29 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890d3a4:	8b 40 04             	mov    0x4(%eax),%eax
 890d3a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 890d3aa:	8b 55 14             	mov    0x14(%ebp),%edx
 890d3ad:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 890d3b0:	89 d0                	mov    %edx,%eax
 890d3b2:	c1 e0 02             	shl    $0x2,%eax
 890d3b5:	01 d0                	add    %edx,%eax
 890d3b7:	c1 e0 02             	shl    $0x2,%eax
 890d3ba:	8b 54 08 10          	mov    0x10(%eax,%ecx,1),%edx
 890d3be:	8b 44 08 0c          	mov    0xc(%eax,%ecx,1),%eax
 890d3c2:	89 03                	mov    %eax,(%ebx)
 890d3c4:	89 53 04             	mov    %edx,0x4(%ebx)
 890d3c7:	89 d8                	mov    %ebx,%eax
 890d3c9:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 890d3cc:	c9                   	leave
 890d3cd:	c2 04 00             	ret    $0x4

```

```c
// CNPCRelationEventManager::GetRewardItem @ 0x890d326

/* CNPCRelationEventManager::GetRewardItem(unsigned short, ENUM_NPC_RELATION_EVENT_FAVOR_KIND) */

undefined4 *
CNPCRelationEventManager::GetRewardItem
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_20 [4];
  undefined4 local_1c;
  undefined4 local_18;
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [12];
  
  local_1c = 0;
  local_18 = 0;
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_20);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_20,(_Rb_tree_iterator *)local_14);
  if (cVar2 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_20);
    uVar1 = *(undefined4 *)(param_4 * 0x14 + 0x10 + *(int *)(iVar3 + 4));
    *param_1 = *(undefined4 *)(param_4 * 0x14 + 0xc + *(int *)(iVar3 + 4));
    param_1[1] = uVar1;
  }
  else {
    *param_1 = local_1c;
    param_1[1] = local_18;
  }
  return param_1;
}

```

---

## IsDislikeItem

```asm
// === 0890d100 CNPCRelationEventManager::IsDislikeItem  [0x0890d100-0x890d1bf] ===
 890d100:	55                   	push   %ebp
 890d101:	89 e5                	mov    %esp,%ebp
 890d103:	83 ec 38             	sub    $0x38,%esp
 890d106:	8b 45 0c             	mov    0xc(%ebp),%eax
 890d109:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 890d10d:	8b 55 08             	mov    0x8(%ebp),%edx
 890d110:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d113:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 890d116:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 890d11a:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d11e:	89 04 24             	mov    %eax,(%esp)
 890d121:	e8 90 2d 01 00       	call   891feb6 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 890d126:	83 ec 04             	sub    $0x4,%esp
 890d129:	8b 55 08             	mov    0x8(%ebp),%edx
 890d12c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890d12f:	89 54 24 04          	mov    %edx,0x4(%esp)
 890d133:	89 04 24             	mov    %eax,(%esp)
 890d136:	e8 1b 2c 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890d13b:	83 ec 04             	sub    $0x4,%esp
 890d13e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890d141:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d145:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d148:	89 04 24             	mov    %eax,(%esp)
 890d14b:	e8 92 2d 01 00       	call   891fee2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEeqERKS5_>
 890d150:	84 c0                	test   %al,%al
 890d152:	74 07                	je     890d15b <_ZN24CNPCRelationEventManager13IsDislikeItemEtj+0x5b>
 890d154:	b8 00 00 00 00       	mov    $0x0,%eax
 890d159:	eb 63                	jmp    890d1be <_ZN24CNPCRelationEventManager13IsDislikeItemEtj+0xbe>
 890d15b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 890d15e:	89 04 24             	mov    %eax,(%esp)
 890d161:	e8 2a 2c 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890d166:	8b 40 04             	mov    0x4(%eax),%eax
 890d169:	89 45 f0             	mov    %eax,-0x10(%ebp)
 890d16c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 890d173:	eb 2c                	jmp    890d1a1 <_ZN24CNPCRelationEventManager13IsDislikeItemEtj+0xa1>
 890d175:	8b 45 f0             	mov    -0x10(%ebp),%eax
 890d178:	8d 50 3c             	lea    0x3c(%eax),%edx
 890d17b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 890d17e:	89 44 24 04          	mov    %eax,0x4(%esp)
 890d182:	89 14 24             	mov    %edx,(%esp)
 890d185:	e8 e8 9a 78 ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 890d18a:	8b 00                	mov    (%eax),%eax
 890d18c:	3b 45 10             	cmp    0x10(%ebp),%eax
 890d18f:	0f 94 c0             	sete   %al
 890d192:	84 c0                	test   %al,%al
 890d194:	74 07                	je     890d19d <_ZN24CNPCRelationEventManager13IsDislikeItemEtj+0x9d>
 890d196:	b8 01 00 00 00       	mov    $0x1,%eax
 890d19b:	eb 21                	jmp    890d1be <_ZN24CNPCRelationEventManager13IsDislikeItemEtj+0xbe>
 890d19d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 890d1a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 890d1a4:	83 c0 3c             	add    $0x3c,%eax
 890d1a7:	89 04 24             	mov    %eax,(%esp)
 890d1aa:	e8 11 10 78 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 890d1af:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 890d1b2:	0f 97 c0             	seta   %al
 890d1b5:	84 c0                	test   %al,%al
 890d1b7:	75 bc                	jne    890d175 <_ZN24CNPCRelationEventManager13IsDislikeItemEtj+0x75>
 890d1b9:	b8 00 00 00 00       	mov    $0x0,%eax
 890d1be:	c9                   	leave
 890d1bf:	c3                   	ret

```

```c
// CNPCRelationEventManager::IsDislikeItem @ 0x890d100

/* CNPCRelationEventManager::IsDislikeItem(unsigned short, unsigned int) */

undefined4 __thiscall
CNPCRelationEventManager::IsDislikeItem(CNPCRelationEventManager *this,ushort param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  _Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> local_1c [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::find((ushort *)local_1c);
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
          operator==(local_1c,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->(local_1c);
    local_14 = *(int *)(iVar2 + 4);
    local_10 = 0;
    while (uVar4 = std::vector<int,std::allocator<int>>::size
                             ((vector<int,std::allocator<int>> *)(local_14 + 0x3c)),
          local_10 < uVar4) {
      puVar3 = (uint *)std::vector<int,std::allocator<int>>::at
                                 ((vector<int,std::allocator<int>> *)(local_14 + 0x3c),local_10);
      if (*puVar3 == param_2) {
        return 1;
      }
      local_10 = local_10 + 1;
    }
  }
  return 0;
}

```

---

## ~CNPCRelationEventManager

```asm
// === 0890ce34 CNPCRelationEventManager::~CNPCRelationEventManager  [0x0890ce34-0x890cee9] ===
 890ce34:	55                   	push   %ebp
 890ce35:	89 e5                	mov    %esp,%ebp
 890ce37:	56                   	push   %esi
 890ce38:	53                   	push   %ebx
 890ce39:	83 ec 20             	sub    $0x20,%esp
 890ce3c:	8b 55 08             	mov    0x8(%ebp),%edx
 890ce3f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890ce42:	89 54 24 04          	mov    %edx,0x4(%esp)
 890ce46:	89 04 24             	mov    %eax,(%esp)
 890ce49:	e8 e2 2e 01 00       	call   891fd30 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 890ce4e:	83 ec 04             	sub    $0x4,%esp
 890ce51:	eb 39                	jmp    890ce8c <_ZN24CNPCRelationEventManagerD1Ev+0x58>
 890ce53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890ce56:	89 04 24             	mov    %eax,(%esp)
 890ce59:	e8 32 2f 01 00       	call   891fd90 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEptEv>
 890ce5e:	8b 40 04             	mov    0x4(%eax),%eax
 890ce61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 890ce64:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 890ce68:	74 17                	je     890ce81 <_ZN24CNPCRelationEventManagerD1Ev+0x4d>
 890ce6a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 890ce6d:	85 db                	test   %ebx,%ebx
 890ce6f:	74 10                	je     890ce81 <_ZN24CNPCRelationEventManagerD1Ev+0x4d>
 890ce71:	89 1c 24             	mov    %ebx,(%esp)
 890ce74:	e8 45 fa 00 00       	call   891c8be <_ZN22stNPCRelationEventInfoD1Ev>
 890ce79:	89 1c 24             	mov    %ebx,(%esp)
 890ce7c:	e8 6f 76 e1 ff       	call   87244f0 <_ZdlPv>
 890ce81:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890ce84:	89 04 24             	mov    %eax,(%esp)
 890ce87:	e8 70 2f 01 00       	call   891fdfc <_ZNSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEppEv>
 890ce8c:	8b 55 08             	mov    0x8(%ebp),%edx
 890ce8f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890ce92:	89 54 24 04          	mov    %edx,0x4(%esp)
 890ce96:	89 04 24             	mov    %eax,(%esp)
 890ce99:	e8 b8 2e 01 00       	call   891fd56 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEE3endEv>
 890ce9e:	83 ec 04             	sub    $0x4,%esp
 890cea1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 890cea4:	89 44 24 04          	mov    %eax,0x4(%esp)
 890cea8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 890ceab:	89 04 24             	mov    %eax,(%esp)
 890ceae:	e8 c9 2e 01 00       	call   891fd7c <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP22stNPCRelationEventInfoEEneERKS5_>
 890ceb3:	84 c0                	test   %al,%al
 890ceb5:	75 9c                	jne    890ce53 <_ZN24CNPCRelationEventManagerD1Ev+0x1f>
 890ceb7:	eb 1b                	jmp    890ced4 <_ZN24CNPCRelationEventManagerD1Ev+0xa0>
 890ceb9:	89 d3                	mov    %edx,%ebx
 890cebb:	89 c6                	mov    %eax,%esi
 890cebd:	8b 45 08             	mov    0x8(%ebp),%eax
 890cec0:	89 04 24             	mov    %eax,(%esp)
 890cec3:	e8 ce f9 00 00       	call   891c896 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEED1Ev>
 890cec8:	89 f0                	mov    %esi,%eax
 890ceca:	89 da                	mov    %ebx,%edx
 890cecc:	89 04 24             	mov    %eax,(%esp)
 890cecf:	e8 7c 68 1d 00       	call   8ae3750 <_Unwind_Resume>
 890ced4:	8b 45 08             	mov    0x8(%ebp),%eax
 890ced7:	89 04 24             	mov    %eax,(%esp)
 890ceda:	e8 b7 f9 00 00       	call   891c896 <_ZNSt3mapItP22stNPCRelationEventInfoSt4lessItESaISt4pairIKtS1_EEED1Ev>
 890cedf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 890cee2:	83 c4 00             	add    $0x0,%esp
 890cee5:	5b                   	pop    %ebx
 890cee6:	5e                   	pop    %esi
 890cee7:	5d                   	pop    %ebp
 890cee8:	c3                   	ret
 890cee9:	90                   	nop

```

```c
// CNPCRelationEventManager::~CNPCRelationEventManager @ 0x890ce34

/* CNPCRelationEventManager::~CNPCRelationEventManager() */

void __thiscall CNPCRelationEventManager::~CNPCRelationEventManager(CNPCRelationEventManager *this)

{
  stNPCRelationEventInfo *this_00;
  char cVar1;
  int iVar2;
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_18 [4];
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  local_14 [4];
  stNPCRelationEventInfo *local_10;
  
                    /* try { // try from 0890ce49 to 0890ce9d has its CatchHandler @ 0890ceb9 */
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::begin(local_18);
  while( true ) {
    std::
    map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
    ::end(local_14);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> *
                       )local_18,(_Rb_tree_iterator *)local_14);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> *
                       )local_18);
    this_00 = *(stNPCRelationEventInfo **)(iVar2 + 4);
    local_10 = this_00;
    if ((this_00 != (stNPCRelationEventInfo *)0x0) && (this_00 != (stNPCRelationEventInfo *)0x0)) {
      stNPCRelationEventInfo::~stNPCRelationEventInfo(this_00);
      operator_delete(this_00);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>::operator++
              ((_Rb_tree_iterator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>> *)
               local_18);
  }
  std::
  map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
  ::~map((map<unsigned_short,stNPCRelationEventInfo*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,stNPCRelationEventInfo*>>>
          *)this);
  return;
}

```

