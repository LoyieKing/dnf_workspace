# AvatarVariation

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## getAvatarColorInfoInst

```asm
// === 088d46d3 AvatarVariation::getAvatarColorInfoInst  [0x088d46d3-0x88d4781] ===
 88d46d3:	55                   	push   %ebp
 88d46d4:	89 e5                	mov    %esp,%ebp
 88d46d6:	57                   	push   %edi
 88d46d7:	56                   	push   %esi
 88d46d8:	53                   	push   %ebx
 88d46d9:	83 ec 2c             	sub    $0x2c,%esp
 88d46dc:	b8 e0 6a 4f 09       	mov    $0x94f6ae0,%eax
 88d46e1:	0f b6 00             	movzbl (%eax),%eax
 88d46e4:	84 c0                	test   %al,%al
 88d46e6:	75 71                	jne    88d4759 <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x86>
 88d46e8:	c7 04 24 e0 6a 4f 09 	movl   $0x94f6ae0,(%esp)
 88d46ef:	e8 3c 0c e5 ff       	call   8725330 <__cxa_guard_acquire>
 88d46f4:	85 c0                	test   %eax,%eax
 88d46f6:	0f 95 c0             	setne  %al
 88d46f9:	84 c0                	test   %al,%al
 88d46fb:	74 5c                	je     88d4759 <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x86>
 88d46fd:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d4702:	c7 04 24 00 6b 4f 09 	movl   $0x94f6b00,(%esp)
 88d4709:	e8 04 8c aa ff       	call   837d312 <_ZN15AvatarVariation15AvatarColorInfoC1Ev>
 88d470e:	c7 04 24 e0 6a 4f 09 	movl   $0x94f6ae0,(%esp)
 88d4715:	e8 36 0b e5 ff       	call   8725250 <__cxa_guard_release>
 88d471a:	b8 58 d3 37 08       	mov    $0x837d358,%eax
 88d471f:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 88d4726:	08 
 88d4727:	c7 44 24 04 00 6b 4f 	movl   $0x94f6b00,0x4(%esp)
 88d472e:	09 
 88d472f:	89 04 24             	mov    %eax,(%esp)
 88d4732:	e8 99 96 7a ff       	call   807ddd0 <__cxa_atexit@plt>
 88d4737:	eb 20                	jmp    88d4759 <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x86>
 88d4739:	89 d6                	mov    %edx,%esi
 88d473b:	89 c7                	mov    %eax,%edi
 88d473d:	84 db                	test   %bl,%bl
 88d473f:	75 0c                	jne    88d474d <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0x7a>
 88d4741:	c7 04 24 e0 6a 4f 09 	movl   $0x94f6ae0,(%esp)
 88d4748:	e8 73 0b e5 ff       	call   87252c0 <__cxa_guard_abort>
 88d474d:	89 f8                	mov    %edi,%eax
 88d474f:	89 f2                	mov    %esi,%edx
 88d4751:	89 04 24             	mov    %eax,(%esp)
 88d4754:	e8 f7 ef 20 00       	call   8ae3750 <_Unwind_Resume>
 88d4759:	c7 04 24 00 6b 4f 09 	movl   $0x94f6b00,(%esp)
 88d4760:	e8 ea fc ff ff       	call   88d444f <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE>
 88d4765:	88 45 e7             	mov    %al,-0x19(%ebp)
 88d4768:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 88d476c:	74 07                	je     88d4775 <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0xa2>
 88d476e:	b8 00 6b 4f 09       	mov    $0x94f6b00,%eax
 88d4773:	eb 05                	jmp    88d477a <_ZN15AvatarVariation22getAvatarColorInfoInstEv+0xa7>
 88d4775:	b8 00 00 00 00       	mov    $0x0,%eax
 88d477a:	83 c4 2c             	add    $0x2c,%esp
 88d477d:	5b                   	pop    %ebx
 88d477e:	5e                   	pop    %esi
 88d477f:	5f                   	pop    %edi
 88d4780:	5d                   	pop    %ebp
 88d4781:	c3                   	ret

```

```c
// AvatarVariation::getAvatarColorInfoInst @ 0x88d46d3

/* AvatarVariation::getAvatarColorInfoInst() */

undefined1 * AvatarVariation::getAvatarColorInfoInst(void)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  if (getAvatarColorInfoInst()::s_avatarColorInfo == '\0') {
    iVar2 = __cxa_guard_acquire(&getAvatarColorInfoInst()::s_avatarColorInfo);
    if (iVar2 != 0) {
                    /* try { // try from 088d4709 to 088d470d has its CatchHandler @ 088d4739 */
      AvatarColorInfo::AvatarColorInfo
                ((AvatarColorInfo *)getAvatarColorInfoInst()::s_avatarColorInfo);
      __cxa_guard_release(&getAvatarColorInfoInst()::s_avatarColorInfo);
      __cxa_atexit(AvatarColorInfo::~AvatarColorInfo,getAvatarColorInfoInst()::s_avatarColorInfo,
                   &__dso_handle);
    }
  }
  cVar1 = importAvatarColorVariation((AvatarColorInfo *)getAvatarColorInfoInst()::s_avatarColorInfo)
  ;
  if (cVar1 == '\0') {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    puVar3 = getAvatarColorInfoInst()::s_avatarColorInfo;
  }
  return puVar3;
}

```

---

## getAvatarColorName

```asm
// === 088d4896 AvatarVariation::getAvatarColorName  [0x088d4896-0x88d495b] ===
 88d4896:	55                   	push   %ebp
 88d4897:	89 e5                	mov    %esp,%ebp
 88d4899:	83 ec 38             	sub    $0x38,%esp
 88d489c:	8b 45 08             	mov    0x8(%ebp),%eax
 88d489f:	85 c0                	test   %eax,%eax
 88d48a1:	78 0a                	js     88d48ad <_ZN15AvatarVariation18getAvatarColorNameEi+0x17>
 88d48a3:	8b 45 08             	mov    0x8(%ebp),%eax
 88d48a6:	3d ff 01 00 00       	cmp    $0x1ff,%eax
 88d48ab:	7e 0a                	jle    88d48b7 <_ZN15AvatarVariation18getAvatarColorNameEi+0x21>
 88d48ad:	b8 00 00 00 00       	mov    $0x0,%eax
 88d48b2:	e9 a3 00 00 00       	jmp    88d495a <_ZN15AvatarVariation18getAvatarColorNameEi+0xc4>
 88d48b7:	e8 17 fe ff ff       	call   88d46d3 <_ZN15AvatarVariation22getAvatarColorInfoInstEv>
 88d48bc:	83 c0 18             	add    $0x18,%eax
 88d48bf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88d48c2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88d48c6:	75 0a                	jne    88d48d2 <_ZN15AvatarVariation18getAvatarColorNameEi+0x3c>
 88d48c8:	b8 00 00 00 00       	mov    $0x0,%eax
 88d48cd:	e9 88 00 00 00       	jmp    88d495a <_ZN15AvatarVariation18getAvatarColorNameEi+0xc4>
 88d48d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d48d5:	8d 55 08             	lea    0x8(%ebp),%edx
 88d48d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d48dc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d48df:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d48e3:	89 04 24             	mov    %eax,(%esp)
 88d48e6:	e8 cf b9 ca ff       	call   85802ba <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE4findERS3_>
 88d48eb:	83 ec 04             	sub    $0x4,%esp
 88d48ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d48f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d48f5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d48f8:	89 04 24             	mov    %eax,(%esp)
 88d48fb:	e8 92 e5 ca ff       	call   8582e92 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 88d4900:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d4903:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d4906:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d490a:	89 04 24             	mov    %eax,(%esp)
 88d490d:	e8 06 18 81 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 88d4912:	83 ec 04             	sub    $0x4,%esp
 88d4915:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d4918:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d491c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d491f:	89 04 24             	mov    %eax,(%esp)
 88d4922:	e8 6b e5 ca ff       	call   8582e92 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 88d4927:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d492a:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d492e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d4931:	89 04 24             	mov    %eax,(%esp)
 88d4934:	e8 41 25 7f ff       	call   80c6e7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 88d4939:	84 c0                	test   %al,%al
 88d493b:	74 18                	je     88d4955 <_ZN15AvatarVariation18getAvatarColorNameEi+0xbf>
 88d493d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d4940:	89 04 24             	mov    %eax,(%esp)
 88d4943:	e8 46 25 7f ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 88d4948:	83 c0 04             	add    $0x4,%eax
 88d494b:	89 04 24             	mov    %eax,(%esp)
 88d494e:	e8 9d 1b e3 ff       	call   87064f0 <_ZNKSs5c_strEv>
 88d4953:	eb 05                	jmp    88d495a <_ZN15AvatarVariation18getAvatarColorNameEi+0xc4>
 88d4955:	b8 00 00 00 00       	mov    $0x0,%eax
 88d495a:	c9                   	leave
 88d495b:	c3                   	ret

```

```c
// AvatarVariation::getAvatarColorName @ 0x88d4896

/* AvatarVariation::getAvatarColorName(int) */

undefined4 AvatarVariation::getAvatarColorName(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_18 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_14 [4];
  int local_10;
  
  if ((param_1 < 0) || (0x1ff < param_1)) {
    uVar2 = 0;
  }
  else {
    local_10 = getAvatarColorInfoInst();
    local_10 = local_10 + 0x18;
    if (local_10 == 0) {
      uVar2 = 0;
    }
    else {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
      find((int *)local_1c);
      std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
                (local_20,local_1c);
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_14);
      std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
                (local_18,(_Rb_tree_iterator *)local_14);
      cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                        (local_20,(_Rb_tree_const_iterator *)local_18);
      if (cVar1 == '\0') {
        uVar2 = 0;
      }
      else {
        iVar3 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_20)
        ;
        uVar2 = std::string::c_str((string *)(iVar3 + 4));
      }
    }
  }
  return uVar2;
}

```

---

## getAvatarColorValue

```asm
// === 088d4782 AvatarVariation::getAvatarColorValue  [0x088d4782-0x88d4855] ===
 88d4782:	55                   	push   %ebp
 88d4783:	89 e5                	mov    %esp,%ebp
 88d4785:	53                   	push   %ebx
 88d4786:	83 ec 34             	sub    $0x34,%esp
 88d4789:	8b 5d 08             	mov    0x8(%ebp),%ebx
 88d478c:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d478f:	85 c0                	test   %eax,%eax
 88d4791:	78 0a                	js     88d479d <_ZN15AvatarVariation19getAvatarColorValueEi+0x1b>
 88d4793:	8b 45 0c             	mov    0xc(%ebp),%eax
 88d4796:	3d ff 01 00 00       	cmp    $0x1ff,%eax
 88d479b:	7e 07                	jle    88d47a4 <_ZN15AvatarVariation19getAvatarColorValueEi+0x22>
 88d479d:	c7 45 0c 00 00 00 00 	movl   $0x0,0xc(%ebp)
 88d47a4:	e8 2a ff ff ff       	call   88d46d3 <_ZN15AvatarVariation22getAvatarColorInfoInstEv>
 88d47a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 88d47ac:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 88d47b0:	75 0d                	jne    88d47bf <_ZN15AvatarVariation19getAvatarColorValueEi+0x3d>
 88d47b2:	89 1c 24             	mov    %ebx,(%esp)
 88d47b5:	e8 36 fc ff ff       	call   88d43f0 <_ZN15AvatarVariation8colorRGBC1Ev>
 88d47ba:	e9 8e 00 00 00       	jmp    88d484d <_ZN15AvatarVariation19getAvatarColorValueEi+0xcb>
 88d47bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d47c2:	8d 55 0c             	lea    0xc(%ebp),%edx
 88d47c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d47c9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d47cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d47d0:	89 04 24             	mov    %eax,(%esp)
 88d47d3:	e8 c6 2e 96 ff       	call   823769e <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 88d47d8:	83 ec 04             	sub    $0x4,%esp
 88d47db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 88d47de:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d47e2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d47e5:	89 04 24             	mov    %eax,(%esp)
 88d47e8:	e8 83 02 00 00       	call   88d4a70 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 88d47ed:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d47f0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 88d47f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d47f7:	89 04 24             	mov    %eax,(%esp)
 88d47fa:	e8 79 2e 96 ff       	call   8237678 <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 88d47ff:	83 ec 04             	sub    $0x4,%esp
 88d4802:	8d 45 f0             	lea    -0x10(%ebp),%eax
 88d4805:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d4809:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d480c:	89 04 24             	mov    %eax,(%esp)
 88d480f:	e8 5c 02 00 00       	call   88d4a70 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEC1ERKSt17_Rb_tree_iteratorIS4_E>
 88d4814:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d4817:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d481b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d481e:	89 04 24             	mov    %eax,(%esp)
 88d4821:	e8 5a 02 00 00       	call   88d4a80 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEneERKS5_>
 88d4826:	84 c0                	test   %al,%al
 88d4828:	74 1b                	je     88d4845 <_ZN15AvatarVariation19getAvatarColorValueEi+0xc3>
 88d482a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d482d:	89 04 24             	mov    %eax,(%esp)
 88d4830:	e8 5f 02 00 00       	call   88d4a94 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEptEv>
 88d4835:	0f b7 50 04          	movzwl 0x4(%eax),%edx
 88d4839:	66 89 13             	mov    %dx,(%ebx)
 88d483c:	0f b6 40 06          	movzbl 0x6(%eax),%eax
 88d4840:	88 43 02             	mov    %al,0x2(%ebx)
 88d4843:	eb 08                	jmp    88d484d <_ZN15AvatarVariation19getAvatarColorValueEi+0xcb>
 88d4845:	89 1c 24             	mov    %ebx,(%esp)
 88d4848:	e8 a3 fb ff ff       	call   88d43f0 <_ZN15AvatarVariation8colorRGBC1Ev>
 88d484d:	89 d8                	mov    %ebx,%eax
 88d484f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 88d4852:	c9                   	leave
 88d4853:	c2 04 00             	ret    $0x4

```

```c
// AvatarVariation::getAvatarColorValue @ 0x88d4782

/* AvatarVariation::getAvatarColorValue(int) */

int AvatarVariation::getAvatarColorValue(int param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>> local_20 [4];
  _Rb_tree_iterator local_1c [4];
  _Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>> local_18 [4];
  map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
  local_14 [4];
  int local_10;
  
  local_10 = getAvatarColorInfoInst();
  if (local_10 == 0) {
    colorRGB::colorRGB((colorRGB *)param_1);
  }
  else {
    std::
    map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
    ::find((int *)local_1c);
    std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::
    _Rb_tree_const_iterator(local_20,local_1c);
    std::
    map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
    ::end(local_14);
    std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::
    _Rb_tree_const_iterator(local_18,(_Rb_tree_iterator *)local_14);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::operator!=
                      (local_20,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      colorRGB::colorRGB((colorRGB *)param_1);
    }
    else {
      iVar2 = std::_Rb_tree_const_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::
              operator->(local_20);
      *(undefined2 *)param_1 = *(undefined2 *)(iVar2 + 4);
      *(undefined1 *)(param_1 + 2) = *(undefined1 *)(iVar2 + 6);
    }
  }
  return param_1;
}

```

---

## importAvatarColorVariation

```asm
// === 088d444f AvatarVariation::importAvatarColorVariation  [0x088d444f-0x88d46d2] ===
 88d444f:	55                   	push   %ebp
 88d4450:	89 e5                	mov    %esp,%ebp
 88d4452:	56                   	push   %esi
 88d4453:	53                   	push   %ebx
 88d4454:	83 ec 60             	sub    $0x60,%esp
 88d4457:	c7 44 24 04 20 ab e0 	movl   $0x8e0ab20,0x4(%esp)
 88d445e:	08 
 88d445f:	c7 04 24 3d ab e0 08 	movl   $0x8e0ab3d,(%esp)
 88d4466:	e8 be 78 fe ff       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 88d446b:	83 f0 01             	xor    $0x1,%eax
 88d446e:	84 c0                	test   %al,%al
 88d4470:	74 0a                	je     88d447c <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x2d>
 88d4472:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d4477:	e9 4b 02 00 00       	jmp    88d46c7 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x278>
 88d447c:	8b 45 08             	mov    0x8(%ebp),%eax
 88d447f:	89 04 24             	mov    %eax,(%esp)
 88d4482:	e8 31 05 00 00       	call   88d49b8 <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 88d4487:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d448a:	89 04 24             	mov    %eax,(%esp)
 88d448d:	e8 3e 21 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88d4492:	c6 45 bf 00          	movb   $0x0,-0x41(%ebp)
 88d4496:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 88d449d:	eb 04                	jmp    88d44a3 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x54>
 88d449f:	90                   	nop
 88d44a0:	eb 01                	jmp    88d44a3 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x54>
 88d44a2:	90                   	nop
 88d44a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 88d44aa:	00 
 88d44ab:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d44ae:	89 04 24             	mov    %eax,(%esp)
 88d44b1:	e8 a9 83 fe ff       	call   88bc85f <_Z8ScanTypeRSsb>
 88d44b6:	83 f0 01             	xor    $0x1,%eax
 88d44b9:	84 c0                	test   %al,%al
 88d44bb:	74 15                	je     88d44d2 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x83>
 88d44bd:	bb 01 00 00 00       	mov    $0x1,%ebx
 88d44c2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d44c5:	89 04 24             	mov    %eax,(%esp)
 88d44c8:	e8 13 37 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d44cd:	e9 f5 01 00 00       	jmp    88d46c7 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x278>
 88d44d2:	c7 44 24 04 3e ab e0 	movl   $0x8e0ab3e,0x4(%esp)
 88d44d9:	08 
 88d44da:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d44dd:	89 04 24             	mov    %eax,(%esp)
 88d44e0:	e8 bc c4 7a ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 88d44e5:	84 c0                	test   %al,%al
 88d44e7:	74 b6                	je     88d449f <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x50>
 88d44e9:	8d 45 bc             	lea    -0x44(%ebp),%eax
 88d44ec:	89 04 24             	mov    %eax,(%esp)
 88d44ef:	e8 fc fe ff ff       	call   88d43f0 <_ZN15AvatarVariation8colorRGBC1Ev>
 88d44f4:	8d 45 bf             	lea    -0x41(%ebp),%eax
 88d44f7:	89 04 24             	mov    %eax,(%esp)
 88d44fa:	e8 7c 7e fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d44ff:	89 45 b8             	mov    %eax,-0x48(%ebp)
 88d4502:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 88d4506:	83 f0 01             	xor    $0x1,%eax
 88d4509:	84 c0                	test   %al,%al
 88d450b:	74 05                	je     88d4512 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xc3>
 88d450d:	e9 95 01 00 00       	jmp    88d46a7 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x258>
 88d4512:	8d 45 bf             	lea    -0x41(%ebp),%eax
 88d4515:	89 04 24             	mov    %eax,(%esp)
 88d4518:	e8 5e 7e fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d451d:	88 45 bc             	mov    %al,-0x44(%ebp)
 88d4520:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 88d4524:	83 f0 01             	xor    $0x1,%eax
 88d4527:	84 c0                	test   %al,%al
 88d4529:	74 05                	je     88d4530 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xe1>
 88d452b:	e9 77 01 00 00       	jmp    88d46a7 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x258>
 88d4530:	8d 45 bf             	lea    -0x41(%ebp),%eax
 88d4533:	89 04 24             	mov    %eax,(%esp)
 88d4536:	e8 40 7e fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d453b:	88 45 bd             	mov    %al,-0x43(%ebp)
 88d453e:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 88d4542:	83 f0 01             	xor    $0x1,%eax
 88d4545:	84 c0                	test   %al,%al
 88d4547:	74 05                	je     88d454e <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0xff>
 88d4549:	e9 59 01 00 00       	jmp    88d46a7 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x258>
 88d454e:	8d 45 bf             	lea    -0x41(%ebp),%eax
 88d4551:	89 04 24             	mov    %eax,(%esp)
 88d4554:	e8 22 7e fe ff       	call   88bc37b <_Z7ScanIntPb>
 88d4559:	88 45 be             	mov    %al,-0x42(%ebp)
 88d455c:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 88d4560:	83 f0 01             	xor    $0x1,%eax
 88d4563:	84 c0                	test   %al,%al
 88d4565:	74 05                	je     88d456c <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x11d>
 88d4567:	e9 3b 01 00 00       	jmp    88d46a7 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x258>
 88d456c:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88d456f:	89 04 24             	mov    %eax,(%esp)
 88d4572:	e8 59 20 e3 ff       	call   87065d0 <_ZNSsC1Ev>
 88d4577:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88d457a:	89 04 24             	mov    %eax,(%esp)
 88d457d:	e8 20 82 fe ff       	call   88bc7a2 <_Z7ScanStrPSs>
 88d4582:	88 45 bf             	mov    %al,-0x41(%ebp)
 88d4585:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 88d4589:	83 f0 01             	xor    $0x1,%eax
 88d458c:	84 c0                	test   %al,%al
 88d458e:	74 0a                	je     88d459a <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x14b>
 88d4590:	bb 00 00 00 00       	mov    $0x0,%ebx
 88d4595:	e9 f5 00 00 00       	jmp    88d468f <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x240>
 88d459a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88d459d:	8d 55 bc             	lea    -0x44(%ebp),%edx
 88d45a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d45a4:	8d 55 b8             	lea    -0x48(%ebp),%edx
 88d45a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d45ab:	89 04 24             	mov    %eax,(%esp)
 88d45ae:	e8 18 04 00 00       	call   88d49cb <_ZSt9make_pairIRiRN15AvatarVariation8colorRGBEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 88d45b3:	83 ec 04             	sub    $0x4,%esp
 88d45b6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 88d45b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d45bd:	8d 45 cc             	lea    -0x34(%ebp),%eax
 88d45c0:	89 04 24             	mov    %eax,(%esp)
 88d45c3:	e8 42 04 00 00       	call   88d4a0a <_ZNSt4pairIKiN15AvatarVariation8colorRGBEEC1IiS2_EEOS_IT_T0_E>
 88d45c8:	8b 55 08             	mov    0x8(%ebp),%edx
 88d45cb:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 88d45ce:	8d 4d cc             	lea    -0x34(%ebp),%ecx
 88d45d1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 88d45d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d45d9:	89 04 24             	mov    %eax,(%esp)
 88d45dc:	e8 63 04 00 00       	call   88d4a44 <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE6insertERKS6_>
 88d45e1:	83 ec 04             	sub    $0x4,%esp
 88d45e4:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d45e7:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 88d45ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d45ee:	8d 55 b8             	lea    -0x48(%ebp),%edx
 88d45f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 88d45f5:	89 04 24             	mov    %eax,(%esp)
 88d45f8:	e8 8e 13 fc ff       	call   889598b <_ZSt9make_pairIRiRSsESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 88d45fd:	83 ec 04             	sub    $0x4,%esp
 88d4600:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d4603:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d4607:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d460a:	89 04 24             	mov    %eax,(%esp)
 88d460d:	e8 a2 27 7f ff       	call   80c6db4 <_ZNSt4pairIKiSsEC1IiSsEEOS_IT_T0_E>
 88d4612:	8b 45 08             	mov    0x8(%ebp),%eax
 88d4615:	8d 48 18             	lea    0x18(%eax),%ecx
 88d4618:	8d 45 dc             	lea    -0x24(%ebp),%eax
 88d461b:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 88d461e:	89 54 24 08          	mov    %edx,0x8(%esp)
 88d4622:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 88d4626:	89 04 24             	mov    %eax,(%esp)
 88d4629:	e8 c0 27 7f ff       	call   80c6dee <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE6insertERKS4_>
 88d462e:	83 ec 04             	sub    $0x4,%esp
 88d4631:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d4634:	89 04 24             	mov    %eax,(%esp)
 88d4637:	e8 84 25 7f ff       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 88d463c:	eb 2a                	jmp    88d4668 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x219>
 88d463e:	89 d3                	mov    %edx,%ebx
 88d4640:	89 c6                	mov    %eax,%esi
 88d4642:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 88d4645:	89 04 24             	mov    %eax,(%esp)
 88d4648:	e8 73 25 7f ff       	call   80c6bc0 <_ZNSt4pairIKiSsED1Ev>
 88d464d:	89 f0                	mov    %esi,%eax
 88d464f:	89 da                	mov    %ebx,%edx
 88d4651:	eb 00                	jmp    88d4653 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x204>
 88d4653:	89 d3                	mov    %edx,%ebx
 88d4655:	89 c6                	mov    %eax,%esi
 88d4657:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d465a:	89 04 24             	mov    %eax,(%esp)
 88d465d:	e8 48 25 7f ff       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 88d4662:	89 f0                	mov    %esi,%eax
 88d4664:	89 da                	mov    %ebx,%edx
 88d4666:	eb 12                	jmp    88d467a <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x22b>
 88d4668:	8d 45 ec             	lea    -0x14(%ebp),%eax
 88d466b:	89 04 24             	mov    %eax,(%esp)
 88d466e:	e8 37 25 7f ff       	call   80c6baa <_ZNSt4pairIiSsED1Ev>
 88d4673:	bb 01 00 00 00       	mov    $0x1,%ebx
 88d4678:	eb 15                	jmp    88d468f <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x240>
 88d467a:	89 d3                	mov    %edx,%ebx
 88d467c:	89 c6                	mov    %eax,%esi
 88d467e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88d4681:	89 04 24             	mov    %eax,(%esp)
 88d4684:	e8 57 35 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d4689:	89 f0                	mov    %esi,%eax
 88d468b:	89 da                	mov    %ebx,%edx
 88d468d:	eb 1d                	jmp    88d46ac <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x25d>
 88d468f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 88d4692:	89 04 24             	mov    %eax,(%esp)
 88d4695:	e8 46 35 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d469a:	85 db                	test   %ebx,%ebx
 88d469c:	0f 84 00 fe ff ff    	je     88d44a2 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x53>
 88d46a2:	e9 42 fe ff ff       	jmp    88d44e9 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x9a>
 88d46a7:	e9 f7 fd ff ff       	jmp    88d44a3 <_ZN15AvatarVariation26importAvatarColorVariationEPNS_15AvatarColorInfoE+0x54>
 88d46ac:	89 d3                	mov    %edx,%ebx
 88d46ae:	89 c6                	mov    %eax,%esi
 88d46b0:	8d 45 c0             	lea    -0x40(%ebp),%eax
 88d46b3:	89 04 24             	mov    %eax,(%esp)
 88d46b6:	e8 25 35 e3 ff       	call   8707be0 <_ZNSsD1Ev>
 88d46bb:	89 f0                	mov    %esi,%eax
 88d46bd:	89 da                	mov    %ebx,%edx
 88d46bf:	89 04 24             	mov    %eax,(%esp)
 88d46c2:	e8 89 f0 20 00       	call   8ae3750 <_Unwind_Resume>
 88d46c7:	89 d8                	mov    %ebx,%eax
 88d46c9:	8d 65 f8             	lea    -0x8(%ebp),%esp
 88d46cc:	83 c4 00             	add    $0x0,%esp
 88d46cf:	5b                   	pop    %ebx
 88d46d0:	5e                   	pop    %esi
 88d46d1:	5d                   	pop    %ebp
 88d46d2:	c3                   	ret

```

```c
// AvatarVariation::importAvatarColorVariation @ 0x88d444f

/* AvatarVariation::importAvatarColorVariation(AvatarVariation::AvatarColorInfo*) */

undefined4 AvatarVariation::importAvatarColorVariation(AvatarColorInfo *param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  string local_50 [4];
  undefined4 local_4c;
  colorRGB local_48;
  undefined1 local_47;
  undefined1 local_46;
  bool local_45;
  string local_44;
  pair local_40 [8];
  pair<int_const,AvatarVariation::colorRGB> local_38 [8];
  int local_30 [2];
  pair local_28 [8];
  pair<int_const,std::string> local_20 [8];
  pair<int,std::string> local_18 [8];
  undefined4 local_10;
  
  cVar1 = loadRDARScriptFile("","Etc/AvatarColorVariation.etc");
  if (cVar1 == '\x01') {
    std::
    map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
    ::clear((map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
             *)param_1);
    std::string::string((string *)&local_44);
    local_45 = false;
    local_10 = 0;
LAB_088d44a3:
                    /* try { // try from 088d44b1 to 088d44b5 has its CatchHandler @ 088d46ac */
    cVar1 = ScanType((string *)&local_44,true);
    if (cVar1 == '\x01') {
                    /* try { // try from 088d44e0 to 088d4576 has its CatchHandler @ 088d46ac */
      bVar2 = std::operator==(&local_44,"[avatar color map]");
      if (bVar2) {
        do {
          colorRGB::colorRGB(&local_48);
          local_4c = ScanInt(&local_45);
          if ((((local_45 != true) || (local_48 = (colorRGB)ScanInt(&local_45), local_45 != true))
              || (local_47 = ScanInt(&local_45), local_45 != true)) ||
             (local_46 = ScanInt(&local_45), local_45 != true)) break;
          std::string::string(local_50);
                    /* try { // try from 088d457d to 088d45fc has its CatchHandler @ 088d467a */
          local_45 = (bool)ScanStr(local_50);
          bVar2 = local_45 == true;
          if (bVar2) {
            std::make_pair<int&,AvatarVariation::colorRGB&>(local_30,(colorRGB *)&local_4c);
            std::pair<int_const,AvatarVariation::colorRGB>::pair<int,AvatarVariation::colorRGB>
                      (local_38,(pair *)local_30);
            std::
            map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
            ::insert(local_40);
            std::make_pair<int&,std::string&>((int *)local_18,(string *)&local_4c);
                    /* try { // try from 088d460d to 088d4611 has its CatchHandler @ 088d4653 */
            std::pair<int_const,std::string>::pair<int,std::string>(local_20,local_18);
                    /* try { // try from 088d4629 to 088d462d has its CatchHandler @ 088d463e */
            std::
            map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::
            insert(local_28);
                    /* try { // try from 088d4637 to 088d463b has its CatchHandler @ 088d4653 */
            std::pair<int_const,std::string>::~pair(local_20);
                    /* try { // try from 088d466e to 088d4672 has its CatchHandler @ 088d467a */
            std::pair<int,std::string>::~pair(local_18);
          }
                    /* try { // try from 088d4695 to 088d4699 has its CatchHandler @ 088d46ac */
          std::string::~string(local_50);
        } while (bVar2);
      }
      goto LAB_088d44a3;
    }
    uVar3 = 1;
    std::string::~string((string *)&local_44);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## isEnAbleColorKey

```asm
// === 088d4856 AvatarVariation::isEnAbleColorKey  [0x088d4856-0x88d4895] ===
 88d4856:	55                   	push   %ebp
 88d4857:	89 e5                	mov    %esp,%ebp
 88d4859:	83 ec 28             	sub    $0x28,%esp
 88d485c:	8d 45 f5             	lea    -0xb(%ebp),%eax
 88d485f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 88d4866:	00 
 88d4867:	89 04 24             	mov    %eax,(%esp)
 88d486a:	e8 13 ff ff ff       	call   88d4782 <_ZN15AvatarVariation19getAvatarColorValueEi>
 88d486f:	83 ec 04             	sub    $0x4,%esp
 88d4872:	8d 45 f5             	lea    -0xb(%ebp),%eax
 88d4875:	89 44 24 04          	mov    %eax,0x4(%esp)
 88d4879:	8b 45 08             	mov    0x8(%ebp),%eax
 88d487c:	89 04 24             	mov    %eax,(%esp)
 88d487f:	e8 86 fb ff ff       	call   88d440a <_ZN15AvatarVariation8colorRGBeqERKS0_>
 88d4884:	84 c0                	test   %al,%al
 88d4886:	74 07                	je     88d488f <_ZN15AvatarVariation16isEnAbleColorKeyERNS_8colorRGBE+0x39>
 88d4888:	b8 00 00 00 00       	mov    $0x0,%eax
 88d488d:	eb 05                	jmp    88d4894 <_ZN15AvatarVariation16isEnAbleColorKeyERNS_8colorRGBE+0x3e>
 88d488f:	b8 01 00 00 00       	mov    $0x1,%eax
 88d4894:	c9                   	leave
 88d4895:	c3                   	ret

```

```c
// AvatarVariation::isEnAbleColorKey @ 0x88d4856

/* AvatarVariation::isEnAbleColorKey(AvatarVariation::colorRGB&) */

bool AvatarVariation::isEnAbleColorKey(colorRGB *param_1)

{
  char cVar1;
  colorRGB local_f [11];
  
  getAvatarColorValue((int)local_f);
  cVar1 = colorRGB::operator==(param_1,local_f);
  return cVar1 == '\0';
}

```

