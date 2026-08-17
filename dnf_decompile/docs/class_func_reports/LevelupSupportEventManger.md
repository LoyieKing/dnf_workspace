# LevelupSupportEventManger

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CheckNewStep

```asm
// === 08147164 LevelupSupportEventManger::CheckNewStep  [0x08147164-0x81471c5] ===
 8147164:	55                   	push   %ebp
 8147165:	89 e5                	mov    %esp,%ebp
 8147167:	83 ec 28             	sub    $0x28,%esp
 814716a:	8b 45 08             	mov    0x8(%ebp),%eax
 814716d:	8d 50 04             	lea    0x4(%eax),%edx
 8147170:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8147173:	89 54 24 04          	mov    %edx,0x4(%esp)
 8147177:	89 04 24             	mov    %eax,(%esp)
 814717a:	e8 a5 0a 00 00       	call   8147c24 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 814717f:	83 ec 04             	sub    $0x4,%esp
 8147182:	8b 45 08             	mov    0x8(%ebp),%eax
 8147185:	8d 48 04             	lea    0x4(%eax),%ecx
 8147188:	8d 45 f4             	lea    -0xc(%ebp),%eax
 814718b:	8d 55 0c             	lea    0xc(%ebp),%edx
 814718e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8147192:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8147196:	89 04 24             	mov    %eax,(%esp)
 8147199:	e8 8a 0b 00 00       	call   8147d28 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 814719e:	83 ec 04             	sub    $0x4,%esp
 81471a1:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81471a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81471a8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81471ab:	89 04 24             	mov    %eax,(%esp)
 81471ae:	e8 a1 0b 00 00       	call   8147d54 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEeqERKS9_>
 81471b3:	84 c0                	test   %al,%al
 81471b5:	74 07                	je     81471be <_ZN25LevelupSupportEventManger12CheckNewStepEi+0x5a>
 81471b7:	b8 00 00 00 00       	mov    $0x0,%eax
 81471bc:	eb 05                	jmp    81471c3 <_ZN25LevelupSupportEventManger12CheckNewStepEi+0x5f>
 81471be:	b8 01 00 00 00       	mov    $0x1,%eax
 81471c3:	c9                   	leave
 81471c4:	c3                   	ret
 81471c5:	90                   	nop

```

```c
// LevelupSupportEventManger::CheckNewStep @ 0x8147164

/* LevelupSupportEventManger::CheckNewStep(int) */

bool LevelupSupportEventManger::CheckNewStep(int param_1)

{
  char cVar1;
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_14 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_10 [12];
  
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::end(local_14);
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::find((int *)local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
          ::operator==(local_10,(_Rb_tree_iterator *)local_14);
  return cVar1 == '\0';
}

```

---

## Destroy

```asm
// === 08146fda LevelupSupportEventManger::Destroy  [0x08146fda-0x8147011] ===
 8146fda:	55                   	push   %ebp
 8146fdb:	89 e5                	mov    %esp,%ebp
 8146fdd:	83 ec 18             	sub    $0x18,%esp
 8146fe0:	8b 45 08             	mov    0x8(%ebp),%eax
 8146fe3:	83 c0 04             	add    $0x4,%eax
 8146fe6:	89 04 24             	mov    %eax,(%esp)
 8146fe9:	e8 54 e4 96 00       	call   8ab5442 <_ZN20LevelupSupportSciprt11clearScriptEv>
 8146fee:	8b 45 08             	mov    0x8(%ebp),%eax
 8146ff1:	83 c0 1c             	add    $0x1c,%eax
 8146ff4:	89 04 24             	mov    %eax,(%esp)
 8146ff7:	e8 e2 fc f7 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8146ffc:	8b 45 08             	mov    0x8(%ebp),%eax
 8146fff:	83 c0 34             	add    $0x34,%eax
 8147002:	89 04 24             	mov    %eax,(%esp)
 8147005:	e8 d8 0b 00 00       	call   8147be2 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE5clearEv>
 814700a:	b8 01 00 00 00       	mov    $0x1,%eax
 814700f:	c9                   	leave
 8147010:	c3                   	ret
 8147011:	90                   	nop

```

```c
// LevelupSupportEventManger::Destroy @ 0x8146fda

/* LevelupSupportEventManger::Destroy() */

undefined4 __thiscall LevelupSupportEventManger::Destroy(LevelupSupportEventManger *this)

{
  LevelupSupportSciprt::clearScript((LevelupSupportSciprt *)(this + 4));
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
           *)(this + 0x34));
  return 1;
}

```

---

## GetDefaultEventInfo

```asm
// === 08147012 LevelupSupportEventManger::GetDefaultEventInfo  [0x08147012-0x814701d] ===
 8147012:	55                   	push   %ebp
 8147013:	89 e5                	mov    %esp,%ebp
 8147015:	8b 45 08             	mov    0x8(%ebp),%eax
 8147018:	83 c0 34             	add    $0x34,%eax
 814701b:	5d                   	pop    %ebp
 814701c:	c3                   	ret
 814701d:	90                   	nop

```

```c
// LevelupSupportEventManger::GetDefaultEventInfo @ 0x8147012

/* LevelupSupportEventManger::GetDefaultEventInfo() const */

LevelupSupportEventManger * __thiscall
LevelupSupportEventManger::GetDefaultEventInfo(LevelupSupportEventManger *this)

{
  return this + 0x34;
}

```

---

## GetItemInfoVector

```asm
// === 08147724 LevelupSupportEventManger::GetItemInfoVector  [0x08147724-0x814778d] ===
 8147724:	55                   	push   %ebp
 8147725:	89 e5                	mov    %esp,%ebp
 8147727:	83 ec 28             	sub    $0x28,%esp
 814772a:	8b 45 08             	mov    0x8(%ebp),%eax
 814772d:	8d 48 04             	lea    0x4(%eax),%ecx
 8147730:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8147733:	8d 55 0c             	lea    0xc(%ebp),%edx
 8147736:	89 54 24 08          	mov    %edx,0x8(%esp)
 814773a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814773e:	89 04 24             	mov    %eax,(%esp)
 8147741:	e8 e2 05 00 00       	call   8147d28 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE4findERS9_>
 8147746:	83 ec 04             	sub    $0x4,%esp
 8147749:	8b 45 08             	mov    0x8(%ebp),%eax
 814774c:	8d 50 04             	lea    0x4(%eax),%edx
 814774f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8147752:	89 54 24 04          	mov    %edx,0x4(%esp)
 8147756:	89 04 24             	mov    %eax,(%esp)
 8147759:	e8 c6 04 00 00       	call   8147c24 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 814775e:	83 ec 04             	sub    $0x4,%esp
 8147761:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8147764:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147768:	8d 45 f0             	lea    -0x10(%ebp),%eax
 814776b:	89 04 24             	mov    %eax,(%esp)
 814776e:	e8 d7 04 00 00       	call   8147c4a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8147773:	84 c0                	test   %al,%al
 8147775:	74 10                	je     8147787 <_ZN25LevelupSupportEventManger17GetItemInfoVectorEi+0x63>
 8147777:	8d 45 f0             	lea    -0x10(%ebp),%eax
 814777a:	89 04 24             	mov    %eax,(%esp)
 814777d:	e8 dc 04 00 00       	call   8147c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEptEv>
 8147782:	8b 40 04             	mov    0x4(%eax),%eax
 8147785:	eb 05                	jmp    814778c <_ZN25LevelupSupportEventManger17GetItemInfoVectorEi+0x68>
 8147787:	b8 00 00 00 00       	mov    $0x0,%eax
 814778c:	c9                   	leave
 814778d:	c3                   	ret

```

```c
// LevelupSupportEventManger::GetItemInfoVector @ 0x8147724

/* LevelupSupportEventManger::GetItemInfoVector(int) */

undefined4 LevelupSupportEventManger::GetItemInfoVector(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_14 [4];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_10 [12];
  
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::find((int *)local_14);
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## GetStepIndex

```asm
// === 08147362 LevelupSupportEventManger::GetStepIndex  [0x08147362-0x81473cb] ===
 8147362:	55                   	push   %ebp
 8147363:	89 e5                	mov    %esp,%ebp
 8147365:	83 ec 28             	sub    $0x28,%esp
 8147368:	8b 45 08             	mov    0x8(%ebp),%eax
 814736b:	8d 48 1c             	lea    0x1c(%eax),%ecx
 814736e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8147371:	8d 55 0c             	lea    0xc(%ebp),%edx
 8147374:	89 54 24 08          	mov    %edx,0x8(%esp)
 8147378:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 814737c:	89 04 24             	mov    %eax,(%esp)
 814737f:	e8 6a 5f f8 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 8147384:	83 ec 04             	sub    $0x4,%esp
 8147387:	8b 45 08             	mov    0x8(%ebp),%eax
 814738a:	8d 50 1c             	lea    0x1c(%eax),%edx
 814738d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8147390:	89 54 24 04          	mov    %edx,0x4(%esp)
 8147394:	89 04 24             	mov    %eax,(%esp)
 8147397:	e8 7e 5f f8 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 814739c:	83 ec 04             	sub    $0x4,%esp
 814739f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81473a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81473a6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81473a9:	89 04 24             	mov    %eax,(%esp)
 81473ac:	e8 17 30 f9 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 81473b1:	84 c0                	test   %al,%al
 81473b3:	74 10                	je     81473c5 <_ZN25LevelupSupportEventManger12GetStepIndexEi+0x63>
 81473b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81473b8:	89 04 24             	mov    %eax,(%esp)
 81473bb:	e8 80 5f f8 ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 81473c0:	8b 40 04             	mov    0x4(%eax),%eax
 81473c3:	eb 05                	jmp    81473ca <_ZN25LevelupSupportEventManger12GetStepIndexEi+0x68>
 81473c5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81473ca:	c9                   	leave
 81473cb:	c3                   	ret

```

```c
// LevelupSupportEventManger::GetStepIndex @ 0x8147362

/* LevelupSupportEventManger::GetStepIndex(int) */

undefined4 LevelupSupportEventManger::GetStepIndex(int param_1)

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

## InsertItem

```asm
// === 081473cc LevelupSupportEventManger::InsertItem  [0x081473cc-0x8147723] ===
 81473cc:	55                   	push   %ebp
 81473cd:	89 e5                	mov    %esp,%ebp
 81473cf:	56                   	push   %esi
 81473d0:	53                   	push   %ebx
 81473d1:	81 ec b0 00 00 00    	sub    $0xb0,%esp
 81473d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81473da:	8b 55 08             	mov    0x8(%ebp),%edx
 81473dd:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 81473e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81473e7:	89 14 24             	mov    %edx,(%esp)
 81473ea:	e8 27 09 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 81473ef:	66 c7 40 02 02 00    	movw   $0x2,0x2(%eax)
 81473f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81473f8:	8b 55 08             	mov    0x8(%ebp),%edx
 81473fb:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 8147401:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147405:	89 14 24             	mov    %edx,(%esp)
 8147408:	e8 09 09 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 814740d:	0f b7 00             	movzwl (%eax),%eax
 8147410:	0f b7 d8             	movzwl %ax,%ebx
 8147413:	e8 50 09 00 00       	call   8147d68 <_ZN4ARAD9SingletonI25LevelupSupportEventMangerE3GetEv>
 8147418:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 814741c:	89 04 24             	mov    %eax,(%esp)
 814741f:	e8 00 03 00 00       	call   8147724 <_ZN25LevelupSupportEventManger17GetItemInfoVectorEi>
 8147424:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8147427:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 814742b:	75 0e                	jne    814743b <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x6f>
 814742d:	8b 45 10             	mov    0x10(%ebp),%eax
 8147430:	c7 00 15 00 00 00    	movl   $0x15,(%eax)
 8147436:	e9 df 02 00 00       	jmp    814771a <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x34e>
 814743b:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8147442:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8147445:	89 04 24             	mov    %eax,(%esp)
 8147448:	e8 af 09 00 00       	call   8147dfc <_ZNKSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EE4sizeEv>
 814744d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8147450:	e9 53 02 00 00       	jmp    81476a8 <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x2dc>
 8147455:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8147458:	89 44 24 04          	mov    %eax,0x4(%esp)
 814745c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 814745f:	89 04 24             	mov    %eax,(%esp)
 8147462:	e8 b1 09 00 00       	call   8147e18 <_ZNKSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EE2atEj>
 8147467:	8b 00                	mov    (%eax),%eax
 8147469:	89 c3                	mov    %eax,%ebx
 814746b:	e8 2b 4d f8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8147470:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8147474:	89 04 24             	mov    %eax,(%esp)
 8147477:	e8 b6 85 21 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 814747c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 814747f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8147483:	75 39                	jne    81474be <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0xf2>
 8147485:	8b 45 10             	mov    0x10(%ebp),%eax
 8147488:	c7 00 15 00 00 00    	movl   $0x15,(%eax)
 814748e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8147491:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147495:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8147498:	89 04 24             	mov    %eax,(%esp)
 814749b:	e8 78 09 00 00       	call   8147e18 <_ZNKSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EE2atEj>
 81474a0:	8b 00                	mov    (%eax),%eax
 81474a2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81474a6:	8b 45 08             	mov    0x8(%ebp),%eax
 81474a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81474ad:	c7 04 24 4c 2f b7 08 	movl   $0x8b72f4c,(%esp)
 81474b4:	e8 f6 07 05 00       	call   8197caf <_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri>
 81474b9:	e9 5c 02 00 00       	jmp    814771a <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x34e>
 81474be:	8d 45 9f             	lea    -0x61(%ebp),%eax
 81474c1:	89 04 24             	mov    %eax,(%esp)
 81474c4:	e8 8b 43 f8 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81474c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81474cc:	89 04 24             	mov    %eax,(%esp)
 81474cf:	e8 74 97 fc ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81474d4:	89 45 a1             	mov    %eax,-0x5f(%ebp)
 81474d7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81474da:	8b 00                	mov    (%eax),%eax
 81474dc:	83 c0 08             	add    $0x8,%eax
 81474df:	8b 10                	mov    (%eax),%edx
 81474e1:	8d 45 9f             	lea    -0x61(%ebp),%eax
 81474e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81474e8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81474eb:	89 04 24             	mov    %eax,(%esp)
 81474ee:	ff d2                	call   *%edx
 81474f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81474f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81474f7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81474fa:	89 04 24             	mov    %eax,(%esp)
 81474fd:	e8 16 09 00 00       	call   8147e18 <_ZNKSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS1_EE2atEj>
 8147502:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8147506:	98                   	cwtl
 8147507:	89 44 24 04          	mov    %eax,0x4(%esp)
 814750b:	8d 45 9f             	lea    -0x61(%ebp),%eax
 814750e:	89 04 24             	mov    %eax,(%esp)
 8147511:	e8 6e 43 f8 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8147516:	8b 45 08             	mov    0x8(%ebp),%eax
 8147519:	89 04 24             	mov    %eax,(%esp)
 814751c:	e8 6d 2d f9 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8147521:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8147528:	00 
 8147529:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8147530:	00 
 8147531:	c7 44 24 44 0d 00 00 	movl   $0xd,0x44(%esp)
 8147538:	00 
 8147539:	8b 55 9f             	mov    -0x61(%ebp),%edx
 814753c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8147540:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 8147543:	89 54 24 08          	mov    %edx,0x8(%esp)
 8147547:	8b 55 a7             	mov    -0x59(%ebp),%edx
 814754a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 814754e:	8b 55 ab             	mov    -0x55(%ebp),%edx
 8147551:	89 54 24 10          	mov    %edx,0x10(%esp)
 8147555:	8b 55 af             	mov    -0x51(%ebp),%edx
 8147558:	89 54 24 14          	mov    %edx,0x14(%esp)
 814755c:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 814755f:	89 54 24 18          	mov    %edx,0x18(%esp)
 8147563:	8b 55 b7             	mov    -0x49(%ebp),%edx
 8147566:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 814756a:	8b 55 bb             	mov    -0x45(%ebp),%edx
 814756d:	89 54 24 20          	mov    %edx,0x20(%esp)
 8147571:	8b 55 bf             	mov    -0x41(%ebp),%edx
 8147574:	89 54 24 24          	mov    %edx,0x24(%esp)
 8147578:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 814757b:	89 54 24 28          	mov    %edx,0x28(%esp)
 814757f:	8b 55 c7             	mov    -0x39(%ebp),%edx
 8147582:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8147586:	8b 55 cb             	mov    -0x35(%ebp),%edx
 8147589:	89 54 24 30          	mov    %edx,0x30(%esp)
 814758d:	8b 55 cf             	mov    -0x31(%ebp),%edx
 8147590:	89 54 24 34          	mov    %edx,0x34(%esp)
 8147594:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 8147597:	89 54 24 38          	mov    %edx,0x38(%esp)
 814759b:	8b 55 d7             	mov    -0x29(%ebp),%edx
 814759e:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 81475a2:	0f b6 55 db          	movzbl -0x25(%ebp),%edx
 81475a6:	88 54 24 40          	mov    %dl,0x40(%esp)
 81475aa:	89 04 24             	mov    %eax,(%esp)
 81475ad:	e8 d4 b7 3b 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 81475b2:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 81475b6:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 81475ba:	f7 d0                	not    %eax
 81475bc:	66 c1 e8 0f          	shr    $0xf,%ax
 81475c0:	84 c0                	test   %al,%al
 81475c2:	74 28                	je     81475ec <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x220>
 81475c4:	0f bf 45 ee          	movswl -0x12(%ebp),%eax
 81475c8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81475cc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81475d3:	00 
 81475d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81475db:	00 
 81475dc:	8b 45 08             	mov    0x8(%ebp),%eax
 81475df:	89 04 24             	mov    %eax,(%esp)
 81475e2:	e8 f1 4c 53 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 81475e7:	e9 b8 00 00 00       	jmp    81476a4 <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x2d8>
 81475ec:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81475f3:	00 
 81475f4:	c7 44 24 08 73 2f b7 	movl   $0x8b72f73,0x8(%esp)
 81475fb:	08 
 81475fc:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8147603:	00 
 8147604:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 814760b:	e8 ee e1 95 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8147610:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8147613:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 814761a:	00 
 814761b:	c7 44 24 08 87 2f b7 	movl   $0x8b72f87,0x8(%esp)
 8147622:	08 
 8147623:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 814762a:	00 
 814762b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8147632:	e8 c7 e1 95 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8147637:	89 45 f4             	mov    %eax,-0xc(%ebp)
 814763a:	8b 45 08             	mov    0x8(%ebp),%eax
 814763d:	89 04 24             	mov    %eax,(%esp)
 8147640:	e8 4b 46 f8 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8147645:	89 c3                	mov    %eax,%ebx
 8147647:	8b 45 f4             	mov    -0xc(%ebp),%eax
 814764a:	89 04 24             	mov    %eax,(%esp)
 814764d:	e8 5e 6d f3 ff       	call   807e3b0 <strlen@plt>
 8147652:	89 c6                	mov    %eax,%esi
 8147654:	8b 45 08             	mov    0x8(%ebp),%eax
 8147657:	89 04 24             	mov    %eax,(%esp)
 814765a:	e8 ef 45 f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 814765f:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8147666:	00 
 8147667:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 814766e:	00 
 814766f:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8147673:	c7 44 24 18 0f 00 00 	movl   $0xf,0x18(%esp)
 814767a:	00 
 814767b:	89 74 24 14          	mov    %esi,0x14(%esp)
 814767f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8147682:	89 54 24 10          	mov    %edx,0x10(%esp)
 8147686:	89 44 24 0c          	mov    %eax,0xc(%esp)
 814768a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8147691:	00 
 8147692:	8d 45 9f             	lea    -0x61(%ebp),%eax
 8147695:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147699:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814769c:	89 04 24             	mov    %eax,(%esp)
 814769f:	e8 44 df 40 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 81476a4:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 81476a8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81476ab:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 81476ae:	0f 92 c0             	setb   %al
 81476b1:	84 c0                	test   %al,%al
 81476b3:	0f 85 9c fd ff ff    	jne    8147455 <_ZN25LevelupSupportEventManger10InsertItemEP5CUseriR10ENUM_ERROR+0x89>
 81476b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81476bc:	8b 55 08             	mov    0x8(%ebp),%edx
 81476bf:	81 c2 e4 d0 08 00    	add    $0x8d0e4,%edx
 81476c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81476c9:	89 14 24             	mov    %edx,(%esp)
 81476cc:	e8 45 06 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 81476d1:	0f b7 00             	movzwl (%eax),%eax
 81476d4:	0f b7 f0             	movzwl %ax,%esi
 81476d7:	8b 45 08             	mov    0x8(%ebp),%eax
 81476da:	89 04 24             	mov    %eax,(%esp)
 81476dd:	e8 6c 45 f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 81476e2:	89 c3                	mov    %eax,%ebx
 81476e4:	8b 45 08             	mov    0x8(%ebp),%eax
 81476e7:	89 04 24             	mov    %eax,(%esp)
 81476ea:	e8 a7 15 f8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 81476ef:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 81476f6:	00 
 81476f7:	89 74 24 08          	mov    %esi,0x8(%esp)
 81476fb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81476ff:	89 04 24             	mov    %eax,(%esp)
 8147702:	e8 27 55 30 00       	call   844cc2e <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii>
 8147707:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814770e:	00 
 814770f:	8b 45 08             	mov    0x8(%ebp),%eax
 8147712:	89 04 24             	mov    %eax,(%esp)
 8147715:	e8 04 f9 ff ff       	call   814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>
 814771a:	81 c4 b0 00 00 00    	add    $0xb0,%esp
 8147720:	5b                   	pop    %ebx
 8147721:	5e                   	pop    %esi
 8147722:	5d                   	pop    %ebp
 8147723:	c3                   	ret

```

```c
// LevelupSupportEventManger::InsertItem @ 0x81473cc

/* LevelupSupportEventManger::InsertItem(CUser*, int, ENUM_ERROR&) */

void LevelupSupportEventManger::InsertItem(CUser *param_1,int param_2,ENUM_ERROR *param_3)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  CDataManager *this;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  ushort *puVar7;
  int iVar8;
  undefined2 local_65;
  undefined2 uStack_63;
  undefined2 uStack_61;
  undefined2 uStack_5f;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined1 local_29;
  vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *local_28;
  uint local_24;
  uint local_20;
  CItem *local_1c;
  short local_16;
  undefined4 local_14;
  char *local_10;
  
  iVar2 = std::
          vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
          ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                        *)(param_1 + 0x8d0e4),param_2);
  *(undefined2 *)(iVar2 + 2) = 2;
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                *)(param_1 + 0x8d0e4),param_2);
  iVar2 = ARAD::Singleton<LevelupSupportEventManger>::Get();
  local_28 = (vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
              *)GetItemInfoVector(iVar2);
  if (local_28 ==
      (vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>> *)0x0)
  {
    *(undefined4 *)param_3 = 0x15;
  }
  else {
    local_24 = 0;
    local_20 = std::
               vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
               ::size(local_28);
    for (; local_24 < local_20; local_24 = local_24 + 1) {
      piVar3 = (int *)std::
                      vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
                      ::at(local_28,local_24);
      iVar2 = *piVar3;
      this = (CDataManager *)G_CDataManager();
      local_1c = (CItem *)CDataManager::find_item(this,iVar2);
      if (local_1c == (CItem *)0x0) {
        *(undefined4 *)param_3 = 0x15;
        piVar3 = (int *)std::
                        vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
                        ::at(local_28,local_24);
        ARAD::PRINT_ERROR::find_item(" LevelupSupportEventManger::InsertItem",param_1,*piVar3);
        return;
      }
      Inven_Item::Inven_Item((Inven_Item *)&local_65);
      uVar4 = CItem::get_index(local_1c);
      uStack_63 = (undefined2)uVar4;
      uStack_61 = (undefined2)((uint)uVar4 >> 0x10);
      (**(code **)(*(int *)local_1c + 8))(local_1c,&local_65);
      iVar2 = std::
              vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>
              ::at(local_28,local_24);
      Inven_Item::set_add_info((Inven_Item *)&local_65,(int)*(short *)(iVar2 + 4));
      uVar4 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      local_16 = CInventory::insertItemIntoInventory
                           (uVar4,CONCAT22(uStack_63,local_65),CONCAT22(uStack_5f,uStack_61),
                            local_5d,local_59,local_55,local_51,local_4d,local_49,local_45,local_41,
                            local_3d,local_39,local_35,local_31,local_2d,local_29,0xd,1,1);
      if (local_16 < 0) {
        local_14 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "game_server_msg_241",(bool *)0x0);
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "game_server_msg_242",(bool *)0x0);
        uVar4 = CUser::GetServerGroup(param_1);
        sVar5 = strlen(local_10);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_14,&local_65,0,uVar6,local_10,sVar5,0xf,uVar4,0,0);
      }
      else {
        CUser::SendUpdateItem(param_1,1,0,(int)local_16);
      }
    }
    puVar7 = (ushort *)
             std::
             vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                           *)(param_1 + 0x8d0e4),param_2);
    uVar1 = *puVar7;
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    iVar8 = CUser::GetUID(param_1);
    DB_SaveEventLevelupSupport::makeRequest(iVar8,iVar2,(uint)uVar1,2);
    SendCharacState(param_1,0);
  }
  return;
}

```

---

## LevelupSupportEventManger

```asm
// === 08146d30 LevelupSupportEventManger::LevelupSupportEventManger  [0x08146d30-0x8146dbf] ===
 8146d30:	55                   	push   %ebp
 8146d31:	89 e5                	mov    %esp,%ebp
 8146d33:	56                   	push   %esi
 8146d34:	53                   	push   %ebx
 8146d35:	83 ec 10             	sub    $0x10,%esp
 8146d38:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d3b:	89 04 24             	mov    %eax,(%esp)
 8146d3e:	e8 13 0e 00 00       	call   8147b56 <_ZN4ARAD9SingletonI25LevelupSupportEventMangerEC1Ev>
 8146d43:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d46:	89 04 24             	mov    %eax,(%esp)
 8146d49:	e8 06 b7 f9 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 8146d4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d51:	c7 00 88 3c b7 08    	movl   $0x8b73c88,(%eax)
 8146d57:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d5a:	83 c0 04             	add    $0x4,%eax
 8146d5d:	89 04 24             	mov    %eax,(%esp)
 8146d60:	e8 bf e3 96 00       	call   8ab5124 <_ZN20LevelupSupportSciprtC1Ev>
 8146d65:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d68:	83 c0 1c             	add    $0x1c,%eax
 8146d6b:	89 04 24             	mov    %eax,(%esp)
 8146d6e:	e8 f1 fe f7 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 8146d73:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d76:	83 c0 34             	add    $0x34,%eax
 8146d79:	89 04 24             	mov    %eax,(%esp)
 8146d7c:	e8 db 0d 00 00       	call   8147b5c <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEC1Ev>
 8146d81:	eb 36                	jmp    8146db9 <_ZN25LevelupSupportEventMangerC1Ev+0x89>
 8146d83:	89 d3                	mov    %edx,%ebx
 8146d85:	89 c6                	mov    %eax,%esi
 8146d87:	8b 45 08             	mov    0x8(%ebp),%eax
 8146d8a:	83 c0 1c             	add    $0x1c,%eax
 8146d8d:	89 04 24             	mov    %eax,(%esp)
 8146d90:	e8 31 fd f7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8146d95:	89 f0                	mov    %esi,%eax
 8146d97:	89 da                	mov    %ebx,%edx
 8146d99:	eb 00                	jmp    8146d9b <_ZN25LevelupSupportEventMangerC1Ev+0x6b>
 8146d9b:	89 d3                	mov    %edx,%ebx
 8146d9d:	89 c6                	mov    %eax,%esi
 8146d9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8146da2:	83 c0 04             	add    $0x4,%eax
 8146da5:	89 04 24             	mov    %eax,(%esp)
 8146da8:	e8 8b e3 96 00       	call   8ab5138 <_ZN20LevelupSupportSciprtD1Ev>
 8146dad:	89 f0                	mov    %esi,%eax
 8146daf:	89 da                	mov    %ebx,%edx
 8146db1:	89 04 24             	mov    %eax,(%esp)
 8146db4:	e8 97 c9 99 00       	call   8ae3750 <_Unwind_Resume>
 8146db9:	83 c4 10             	add    $0x10,%esp
 8146dbc:	5b                   	pop    %ebx
 8146dbd:	5e                   	pop    %esi
 8146dbe:	5d                   	pop    %ebp
 8146dbf:	c3                   	ret

```

```c
// LevelupSupportEventManger::LevelupSupportEventManger @ 0x8146d30

/* LevelupSupportEventManger::LevelupSupportEventManger() */

void __thiscall
LevelupSupportEventManger::LevelupSupportEventManger(LevelupSupportEventManger *this)

{
  ARAD::Singleton<LevelupSupportEventManger>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b73c88;
  LevelupSupportSciprt::LevelupSupportSciprt((LevelupSupportSciprt *)(this + 4));
                    /* try { // try from 08146d6e to 08146d72 has its CatchHandler @ 08146d9b */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
                    /* try { // try from 08146d7c to 08146d80 has its CatchHandler @ 08146d83 */
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::vector((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            *)(this + 0x34));
  return;
}

```

---

## Load

```asm
// === 08146e3c LevelupSupportEventManger::Load  [0x08146e3c-0x8146fd9] ===
 8146e3c:	55                   	push   %ebp
 8146e3d:	89 e5                	mov    %esp,%ebp
 8146e3f:	53                   	push   %ebx
 8146e40:	83 ec 64             	sub    $0x64,%esp
 8146e43:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8146e4a:	00 
 8146e4b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8146e52:	00 
 8146e53:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8146e5a:	00 
 8146e5b:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 8146e62:	00 
 8146e63:	c7 44 24 04 40 3c b7 	movl   $0x8b73c40,0x4(%esp)
 8146e6a:	08 
 8146e6b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8146e6e:	89 04 24             	mov    %eax,(%esp)
 8146e71:	e8 d0 88 40 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8146e76:	c7 44 24 04 20 2f b7 	movl   $0x8b72f20,0x4(%esp)
 8146e7d:	08 
 8146e7e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8146e81:	89 04 24             	mov    %eax,(%esp)
 8146e84:	e8 ff 88 40 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8146e89:	8b 45 08             	mov    0x8(%ebp),%eax
 8146e8c:	83 c0 04             	add    $0x4,%eax
 8146e8f:	89 04 24             	mov    %eax,(%esp)
 8146e92:	e8 37 0d 00 00       	call   8147bce <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5clearEv>
 8146e97:	8b 45 08             	mov    0x8(%ebp),%eax
 8146e9a:	83 c0 04             	add    $0x4,%eax
 8146e9d:	89 04 24             	mov    %eax,(%esp)
 8146ea0:	e8 a7 e2 96 00       	call   8ab514c <_ZN20LevelupSupportSciprt10loadScriptEv>
 8146ea5:	85 c0                	test   %eax,%eax
 8146ea7:	0f 94 c0             	sete   %al
 8146eaa:	84 c0                	test   %al,%al
 8146eac:	0f 84 17 01 00 00    	je     8146fc9 <_ZN25LevelupSupportEventManger4LoadEv+0x18d>
 8146eb2:	8b 45 08             	mov    0x8(%ebp),%eax
 8146eb5:	83 c0 1c             	add    $0x1c,%eax
 8146eb8:	89 04 24             	mov    %eax,(%esp)
 8146ebb:	e8 1e fe f7 ff       	call   80c6cde <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE5clearEv>
 8146ec0:	8b 45 08             	mov    0x8(%ebp),%eax
 8146ec3:	83 c0 34             	add    $0x34,%eax
 8146ec6:	89 04 24             	mov    %eax,(%esp)
 8146ec9:	e8 14 0d 00 00       	call   8147be2 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE5clearEv>
 8146ece:	8b 45 08             	mov    0x8(%ebp),%eax
 8146ed1:	8d 50 04             	lea    0x4(%eax),%edx
 8146ed4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8146ed7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8146edb:	89 04 24             	mov    %eax,(%esp)
 8146ede:	e8 1b 0d 00 00       	call   8147bfe <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE5beginEv>
 8146ee3:	83 ec 04             	sub    $0x4,%esp
 8146ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 8146ee9:	8d 50 04             	lea    0x4(%eax),%edx
 8146eec:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8146eef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8146ef3:	89 04 24             	mov    %eax,(%esp)
 8146ef6:	e8 29 0d 00 00       	call   8147c24 <_ZNSt3mapIiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS2_EESt4lessIiESaISt4pairIKiS5_EEE3endEv>
 8146efb:	83 ec 04             	sub    $0x4,%esp
 8146efe:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8146f05:	e9 a3 00 00 00       	jmp    8146fad <_ZN25LevelupSupportEventManger4LoadEv+0x171>
 8146f0a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8146f0d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8146f10:	8d 5d e8             	lea    -0x18(%ebp),%ebx
 8146f13:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8146f17:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8146f1a:	89 04 24             	mov    %eax,(%esp)
 8146f1d:	e8 3c 0d 00 00       	call   8147c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEptEv>
 8146f22:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8146f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146f2a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8146f2d:	89 04 24             	mov    %eax,(%esp)
 8146f30:	e8 37 0d 00 00       	call   8147c6c <_ZNSt4pairIKiiEC1IRS0_iEEOT_OT0_>
 8146f35:	8b 45 08             	mov    0x8(%ebp),%eax
 8146f38:	8d 48 1c             	lea    0x1c(%eax),%ecx
 8146f3b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8146f3e:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8146f41:	89 54 24 08          	mov    %edx,0x8(%esp)
 8146f45:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8146f49:	89 04 24             	mov    %eax,(%esp)
 8146f4c:	e8 ff fd f7 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 8146f51:	83 ec 04             	sub    $0x4,%esp
 8146f54:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8146f57:	89 04 24             	mov    %eax,(%esp)
 8146f5a:	e8 ff 0c 00 00       	call   8147c5e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEptEv>
 8146f5f:	8b 00                	mov    (%eax),%eax
 8146f61:	0f b7 c0             	movzwl %ax,%eax
 8146f64:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8146f6b:	00 
 8146f6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146f70:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8146f73:	89 04 24             	mov    %eax,(%esp)
 8146f76:	e8 af 0b 00 00       	call   8147b2a <_ZN25LevelupSupportEventManger9EventInfoC1Ett>
 8146f7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8146f7e:	8d 50 34             	lea    0x34(%eax),%edx
 8146f81:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8146f84:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146f88:	89 14 24             	mov    %edx,(%esp)
 8146f8b:	e8 0a 0d 00 00       	call   8147c9a <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE9push_backEOS1_>
 8146f90:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8146f93:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8146f9a:	00 
 8146f9b:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 8146f9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8146fa2:	89 04 24             	mov    %eax,(%esp)
 8146fa5:	e8 12 0d 00 00       	call   8147cbc <_ZNSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEppEi>
 8146faa:	83 ec 04             	sub    $0x4,%esp
 8146fad:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8146fb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8146fb4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8146fb7:	89 04 24             	mov    %eax,(%esp)
 8146fba:	e8 8b 0c 00 00       	call   8147c4a <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPSt6vectorIN20LevelupSupportSciprt8ItemInfoESaIS4_EEEEneERKS9_>
 8146fbf:	84 c0                	test   %al,%al
 8146fc1:	0f 85 43 ff ff ff    	jne    8146f0a <_ZN25LevelupSupportEventManger4LoadEv+0xce>
 8146fc7:	eb 07                	jmp    8146fd0 <_ZN25LevelupSupportEventManger4LoadEv+0x194>
 8146fc9:	b8 00 00 00 00       	mov    $0x0,%eax
 8146fce:	eb 05                	jmp    8146fd5 <_ZN25LevelupSupportEventManger4LoadEv+0x199>
 8146fd0:	b8 01 00 00 00       	mov    $0x1,%eax
 8146fd5:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8146fd8:	c9                   	leave
 8146fd9:	c3                   	ret

```

```c
// LevelupSupportEventManger::Load @ 0x8146e3c

/* LevelupSupportEventManger::Load() */

undefined4 __thiscall LevelupSupportEventManger::Load(LevelupSupportEventManger *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_44 [4];
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  local_40 [4];
  cMyTrace local_3c [16];
  pair local_2c [8];
  pair<int_const,int> local_24 [8];
  int local_1c;
  EventInfo local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
  local_14 [4];
  int local_10;
  
  cMyTrace::cMyTrace(local_3c,"virtual bool LevelupSupportEventManger::Load()",0x18,9,true,false);
  cMyTrace::operator()(local_3c,"\t- Loading Levelup Support Event script - ");
  std::
  map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
  ::clear((map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
           *)(this + 4));
  iVar2 = LevelupSupportSciprt::loadScript();
  if (iVar2 == 0) {
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::clear
              ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c)
              );
    std::
    vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
    ::clear((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(this + 0x34));
    std::
    map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
    ::begin(local_40);
    std::
    map<int,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*,std::less<int>,std::allocator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>>
    ::end(local_44);
    local_10 = 0;
    while( true ) {
      cVar1 = std::
              _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
              ::operator!=((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                            *)local_40,(_Rb_tree_iterator *)local_44);
      if (cVar1 == '\0') break;
      local_1c = local_10;
      local_10 = local_10 + 1;
      piVar3 = (int *)std::
                      _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                      ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                                    *)local_40);
      std::pair<int_const,int>::pair<int_const&,int>(local_24,piVar3,&local_1c);
      std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_2c);
      puVar4 = (undefined4 *)
               std::
               _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
               ::operator->((_Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
                             *)local_40);
      EventInfo::EventInfo(local_18,(ushort)*puVar4,0);
      std::
      vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
      ::push_back((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                   *)(this + 0x34),local_18);
      std::
      _Rb_tree_iterator<std::pair<int_const,std::vector<LevelupSupportSciprt::ItemInfo,std::allocator<LevelupSupportSciprt::ItemInfo>>*>>
      ::operator++(local_14,(int)local_40);
    }
    uVar5 = 1;
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## SendCharacState

```asm
// === 0814701e LevelupSupportEventManger::SendCharacState  [0x0814701e-0x8147163] ===
 814701e:	55                   	push   %ebp
 814701f:	89 e5                	mov    %esp,%ebp
 8147021:	56                   	push   %esi
 8147022:	53                   	push   %ebx
 8147023:	83 ec 30             	sub    $0x30,%esp
 8147026:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8147029:	89 04 24             	mov    %eax,(%esp)
 814702c:	e8 1b 6d 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8147031:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8147034:	89 04 24             	mov    %eax,(%esp)
 8147037:	e8 aa 48 f8 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 814703c:	c7 44 24 08 2a 02 00 	movl   $0x22a,0x8(%esp)
 8147043:	00 
 8147044:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 814704b:	00 
 814704c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814704f:	89 04 24             	mov    %eax,(%esp)
 8147052:	e8 a5 48 f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8147057:	8b 45 08             	mov    0x8(%ebp),%eax
 814705a:	05 e4 d0 08 00       	add    $0x8d0e4,%eax
 814705f:	89 04 24             	mov    %eax,(%esp)
 8147062:	e8 93 0c 00 00       	call   8147cfa <_ZNKSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE4sizeEv>
 8147067:	89 44 24 04          	mov    %eax,0x4(%esp)
 814706b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814706e:	89 04 24             	mov    %eax,(%esp)
 8147071:	e8 aa 48 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8147076:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 814707d:	8b 45 08             	mov    0x8(%ebp),%eax
 8147080:	05 e4 d0 08 00       	add    $0x8d0e4,%eax
 8147085:	89 04 24             	mov    %eax,(%esp)
 8147088:	e8 6d 0c 00 00       	call   8147cfa <_ZNKSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE4sizeEv>
 814708d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8147090:	eb 5f                	jmp    81470f1 <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri+0xd3>
 8147092:	8b 45 08             	mov    0x8(%ebp),%eax
 8147095:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 814709b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814709e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81470a2:	89 14 24             	mov    %edx,(%esp)
 81470a5:	e8 6c 0c 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 81470aa:	0f b7 00             	movzwl (%eax),%eax
 81470ad:	0f b7 c0             	movzwl %ax,%eax
 81470b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81470b4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81470b7:	89 04 24             	mov    %eax,(%esp)
 81470ba:	e8 7d 48 f8 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81470bf:	8b 45 08             	mov    0x8(%ebp),%eax
 81470c2:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 81470c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81470cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81470cf:	89 14 24             	mov    %edx,(%esp)
 81470d2:	e8 3f 0c 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 81470d7:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81470db:	0f b7 c0             	movzwl %ax,%eax
 81470de:	89 44 24 04          	mov    %eax,0x4(%esp)
 81470e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81470e5:	89 04 24             	mov    %eax,(%esp)
 81470e8:	e8 33 48 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81470ed:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 81470f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81470f4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81470f7:	0f 92 c0             	setb   %al
 81470fa:	84 c0                	test   %al,%al
 81470fc:	75 94                	jne    8147092 <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri+0x74>
 81470fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147101:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147105:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8147108:	89 04 24             	mov    %eax,(%esp)
 814710b:	e8 10 48 f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8147110:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8147117:	00 
 8147118:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814711b:	89 04 24             	mov    %eax,(%esp)
 814711e:	e8 35 48 f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8147123:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8147126:	89 44 24 04          	mov    %eax,0x4(%esp)
 814712a:	8b 45 08             	mov    0x8(%ebp),%eax
 814712d:	89 04 24             	mov    %eax,(%esp)
 8147130:	e8 85 14 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8147135:	eb 1b                	jmp    8147152 <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri+0x134>
 8147137:	89 d3                	mov    %edx,%ebx
 8147139:	89 c6                	mov    %eax,%esi
 814713b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 814713e:	89 04 24             	mov    %eax,(%esp)
 8147141:	e8 3a 6d 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8147146:	89 f0                	mov    %esi,%eax
 8147148:	89 da                	mov    %ebx,%edx
 814714a:	89 04 24             	mov    %eax,(%esp)
 814714d:	e8 fe c5 99 00       	call   8ae3750 <_Unwind_Resume>
 8147152:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8147155:	89 04 24             	mov    %eax,(%esp)
 8147158:	e8 23 6d 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 814715d:	83 c4 30             	add    $0x30,%esp
 8147160:	5b                   	pop    %ebx
 8147161:	5e                   	pop    %esi
 8147162:	5d                   	pop    %ebp
 8147163:	c3                   	ret

```

```c
// LevelupSupportEventManger::SendCharacState @ 0x814701e

/* LevelupSupportEventManger::SendCharacState(CUser*, int) */

void LevelupSupportEventManger::SendCharacState(CUser *param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  PacketGuard local_20 [12];
  uint local_14;
  uint local_10;
  
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08147037 to 08147134 has its CatchHandler @ 08147137 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x22a);
  iVar1 = std::
          vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
          ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                  *)(param_1 + 0x8d0e4));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,iVar1);
  local_14 = 0;
  local_10 = std::
             vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                     *)(param_1 + 0x8d0e4));
  for (; local_14 < local_10; local_14 = local_14 + 1) {
    puVar2 = (ushort *)
             std::
             vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                           *)(param_1 + 0x8d0e4),local_14);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,(uint)*puVar2);
    iVar1 = std::
            vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                          *)(param_1 + 0x8d0e4),local_14);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(ushort *)(iVar1 + 2));
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send(param_1,local_20);
  PacketGuard::~PacketGuard(local_20);
  return;
}

```

---

## UpdateEventInfo

```asm
// === 081471c6 LevelupSupportEventManger::UpdateEventInfo  [0x081471c6-0x8147361] ===
 81471c6:	55                   	push   %ebp
 81471c7:	89 e5                	mov    %esp,%ebp
 81471c9:	83 ec 38             	sub    $0x38,%esp
 81471cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81471cf:	89 04 24             	mov    %eax,(%esp)
 81471d2:	e8 e1 30 f9 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81471d7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81471da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81471dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81471e1:	8b 45 08             	mov    0x8(%ebp),%eax
 81471e4:	89 04 24             	mov    %eax,(%esp)
 81471e7:	e8 78 ff ff ff       	call   8147164 <_ZN25LevelupSupportEventManger12CheckNewStepEi>
 81471ec:	84 c0                	test   %al,%al
 81471ee:	75 21                	jne    8147211 <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x4b>
 81471f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81471f3:	89 04 24             	mov    %eax,(%esp)
 81471f6:	e8 73 31 f9 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81471fb:	8b 15 5c f7 41 09    	mov    0x941f75c,%edx
 8147201:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147205:	89 14 24             	mov    %edx,(%esp)
 8147208:	e8 69 20 15 00       	call   8299276 <_ZN11CGM_Manager16GetCurrentGmModeEj>
 814720d:	84 c0                	test   %al,%al
 814720f:	74 07                	je     8147218 <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x52>
 8147211:	b8 01 00 00 00       	mov    $0x1,%eax
 8147216:	eb 05                	jmp    814721d <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x57>
 8147218:	b8 00 00 00 00       	mov    $0x0,%eax
 814721d:	84 c0                	test   %al,%al
 814721f:	0f 84 3a 01 00 00    	je     814735f <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x199>
 8147225:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147228:	89 04 24             	mov    %eax,(%esp)
 814722b:	e8 66 1a f8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8147230:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8147233:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147236:	89 04 24             	mov    %eax,(%esp)
 8147239:	e8 10 4a f8 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 814723e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8147241:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8147248:	8b 45 08             	mov    0x8(%ebp),%eax
 814724b:	83 c0 34             	add    $0x34,%eax
 814724e:	89 04 24             	mov    %eax,(%esp)
 8147251:	e8 a4 0a 00 00       	call   8147cfa <_ZNKSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EE4sizeEv>
 8147256:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8147259:	e9 b3 00 00 00       	jmp    8147311 <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x14b>
 814725e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147261:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 8147267:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814726a:	89 44 24 04          	mov    %eax,0x4(%esp)
 814726e:	89 14 24             	mov    %edx,(%esp)
 8147271:	e8 a0 0a 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 8147276:	0f b7 00             	movzwl (%eax),%eax
 8147279:	0f b7 c0             	movzwl %ax,%eax
 814727c:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 814727f:	7f 29                	jg     81472aa <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0xe4>
 8147281:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147284:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 814728a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 814728d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147291:	89 14 24             	mov    %edx,(%esp)
 8147294:	e8 7d 0a 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 8147299:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 814729d:	66 83 f8 02          	cmp    $0x2,%ax
 81472a1:	74 07                	je     81472aa <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0xe4>
 81472a3:	b8 01 00 00 00       	mov    $0x1,%eax
 81472a8:	eb 05                	jmp    81472af <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0xe9>
 81472aa:	b8 00 00 00 00       	mov    $0x0,%eax
 81472af:	84 c0                	test   %al,%al
 81472b1:	74 5a                	je     814730d <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x147>
 81472b3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81472b6:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 81472bc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81472bf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81472c3:	89 14 24             	mov    %edx,(%esp)
 81472c6:	e8 4b 0a 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 81472cb:	66 c7 40 02 01 00    	movw   $0x1,0x2(%eax)
 81472d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81472d4:	8d 90 e4 d0 08 00    	lea    0x8d0e4(%eax),%edx
 81472da:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81472dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81472e1:	89 14 24             	mov    %edx,(%esp)
 81472e4:	e8 2d 0a 00 00       	call   8147d16 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EEixEj>
 81472e9:	0f b7 00             	movzwl (%eax),%eax
 81472ec:	0f b7 d0             	movzwl %ax,%edx
 81472ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81472f2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81472f9:	00 
 81472fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 81472fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147302:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8147305:	89 04 24             	mov    %eax,(%esp)
 8147308:	e8 21 59 30 00       	call   844cc2e <_ZN26DB_SaveEventLevelupSupport11makeRequestEiiii>
 814730d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8147311:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8147314:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8147317:	0f 92 c0             	setb   %al
 814731a:	84 c0                	test   %al,%al
 814731c:	0f 85 3c ff ff ff    	jne    814725e <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x98>
 8147322:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8147325:	89 44 24 04          	mov    %eax,0x4(%esp)
 8147329:	8b 45 08             	mov    0x8(%ebp),%eax
 814732c:	89 04 24             	mov    %eax,(%esp)
 814732f:	e8 30 fe ff ff       	call   8147164 <_ZN25LevelupSupportEventManger12CheckNewStepEi>
 8147334:	84 c0                	test   %al,%al
 8147336:	74 14                	je     814734c <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x186>
 8147338:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 814733b:	89 44 24 04          	mov    %eax,0x4(%esp)
 814733f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147342:	89 04 24             	mov    %eax,(%esp)
 8147345:	e8 d4 fc ff ff       	call   814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>
 814734a:	eb 13                	jmp    814735f <_ZN25LevelupSupportEventManger15UpdateEventInfoEP5CUser+0x199>
 814734c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8147353:	00 
 8147354:	8b 45 0c             	mov    0xc(%ebp),%eax
 8147357:	89 04 24             	mov    %eax,(%esp)
 814735a:	e8 bf fc ff ff       	call   814701e <_ZN25LevelupSupportEventManger15SendCharacStateEP5CUseri>
 814735f:	c9                   	leave
 8147360:	c3                   	ret
 8147361:	90                   	nop

```

```c
// LevelupSupportEventManger::UpdateEventInfo @ 0x81471c6

/* LevelupSupportEventManger::UpdateEventInfo(CUser*) */

void __thiscall
LevelupSupportEventManger::UpdateEventInfo(LevelupSupportEventManger *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  uint local_14;
  
  iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
  cVar2 = CheckNewStep((int)this);
  if (cVar2 == '\0') {
    CUser::get_acc_id(param_1);
    cVar2 = CGM_Manager::GetCurrentGmMode(GlobalData::s_GM_Manager);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_0814721d;
    }
  }
  bVar1 = true;
LAB_0814721d:
  if (bVar1) {
    iVar4 = CUser::GetUID(param_1);
    iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_14 = 0;
    uVar6 = std::
            vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
            ::size((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                    *)(this + 0x34));
    for (; local_14 < uVar6; local_14 = local_14 + 1) {
      puVar7 = (ushort *)
               std::
               vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
               ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                             *)(param_1 + 0x8d0e4),local_14);
      if (iVar3 < (int)(uint)*puVar7) {
LAB_081472aa:
        bVar1 = false;
      }
      else {
        iVar8 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_1 + 0x8d0e4),local_14);
        if (*(short *)(iVar8 + 2) == 2) goto LAB_081472aa;
        bVar1 = true;
      }
      if (bVar1) {
        iVar8 = std::
                vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                              *)(param_1 + 0x8d0e4),local_14);
        *(undefined2 *)(iVar8 + 2) = 1;
        puVar7 = (ushort *)
                 std::
                 vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                 ::operator[]((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
                               *)(param_1 + 0x8d0e4),local_14);
        DB_SaveEventLevelupSupport::makeRequest(iVar4,iVar5,(uint)*puVar7,1);
      }
    }
    cVar2 = CheckNewStep((int)this);
    if (cVar2 == '\0') {
      SendCharacState(param_1,0);
    }
    else {
      SendCharacState(param_1,iVar3);
    }
  }
  return;
}

```

---

## ~LevelupSupportEventManger

```asm
// === 08146dc0 LevelupSupportEventManger::~LevelupSupportEventManger  [0x08146dc0-0x8146e3b] ===
 8146dc0:	55                   	push   %ebp
 8146dc1:	89 e5                	mov    %esp,%ebp
 8146dc3:	56                   	push   %esi
 8146dc4:	53                   	push   %ebx
 8146dc5:	83 ec 10             	sub    $0x10,%esp
 8146dc8:	8b 45 08             	mov    0x8(%ebp),%eax
 8146dcb:	c7 00 88 3c b7 08    	movl   $0x8b73c88,(%eax)
 8146dd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8146dd4:	83 c0 34             	add    $0x34,%eax
 8146dd7:	89 04 24             	mov    %eax,(%esp)
 8146dda:	e8 91 0d 00 00       	call   8147b70 <_ZNSt6vectorIN25LevelupSupportEventManger9EventInfoESaIS1_EED1Ev>
 8146ddf:	eb 18                	jmp    8146df9 <_ZN25LevelupSupportEventMangerD1Ev+0x39>
 8146de1:	89 d3                	mov    %edx,%ebx
 8146de3:	89 c6                	mov    %eax,%esi
 8146de5:	8b 45 08             	mov    0x8(%ebp),%eax
 8146de8:	83 c0 1c             	add    $0x1c,%eax
 8146deb:	89 04 24             	mov    %eax,(%esp)
 8146dee:	e8 d3 fc f7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8146df3:	89 f0                	mov    %esi,%eax
 8146df5:	89 da                	mov    %ebx,%edx
 8146df7:	eb 10                	jmp    8146e09 <_ZN25LevelupSupportEventMangerD1Ev+0x49>
 8146df9:	8b 45 08             	mov    0x8(%ebp),%eax
 8146dfc:	83 c0 1c             	add    $0x1c,%eax
 8146dff:	89 04 24             	mov    %eax,(%esp)
 8146e02:	e8 bf fc f7 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 8146e07:	eb 1e                	jmp    8146e27 <_ZN25LevelupSupportEventMangerD1Ev+0x67>
 8146e09:	89 d3                	mov    %edx,%ebx
 8146e0b:	89 c6                	mov    %eax,%esi
 8146e0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8146e10:	83 c0 04             	add    $0x4,%eax
 8146e13:	89 04 24             	mov    %eax,(%esp)
 8146e16:	e8 1d e3 96 00       	call   8ab5138 <_ZN20LevelupSupportSciprtD1Ev>
 8146e1b:	89 f0                	mov    %esi,%eax
 8146e1d:	89 da                	mov    %ebx,%edx
 8146e1f:	89 04 24             	mov    %eax,(%esp)
 8146e22:	e8 29 c9 99 00       	call   8ae3750 <_Unwind_Resume>
 8146e27:	8b 45 08             	mov    0x8(%ebp),%eax
 8146e2a:	83 c0 04             	add    $0x4,%eax
 8146e2d:	89 04 24             	mov    %eax,(%esp)
 8146e30:	e8 03 e3 96 00       	call   8ab5138 <_ZN20LevelupSupportSciprtD1Ev>
 8146e35:	83 c4 10             	add    $0x10,%esp
 8146e38:	5b                   	pop    %ebx
 8146e39:	5e                   	pop    %esi
 8146e3a:	5d                   	pop    %ebp
 8146e3b:	c3                   	ret

```

```c
// LevelupSupportEventManger::~LevelupSupportEventManger @ 0x8146dc0

/* LevelupSupportEventManger::~LevelupSupportEventManger() */

void __thiscall
LevelupSupportEventManger::~LevelupSupportEventManger(LevelupSupportEventManger *this)

{
  *(undefined ***)this = &PTR_Load_08b73c88;
                    /* try { // try from 08146dda to 08146dde has its CatchHandler @ 08146de1 */
  std::
  vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
  ::~vector((vector<LevelupSupportEventManger::EventInfo,std::allocator<LevelupSupportEventManger::EventInfo>>
             *)(this + 0x34));
                    /* try { // try from 08146e02 to 08146e06 has its CatchHandler @ 08146e09 */
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)(this + 0x1c));
  LevelupSupportSciprt::~LevelupSupportSciprt((LevelupSupportSciprt *)(this + 4));
  return;
}

```

