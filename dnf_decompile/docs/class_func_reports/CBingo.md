# CBingo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 15

---

## CBingo

```asm
// === 080ca82c CBingo::CBingo  [0x080ca82c-0x80ca8ef] ===
 80ca82c:	55                   	push   %ebp
 80ca82d:	89 e5                	mov    %esp,%ebp
 80ca82f:	57                   	push   %edi
 80ca830:	56                   	push   %esi
 80ca831:	53                   	push   %ebx
 80ca832:	83 ec 2c             	sub    $0x2c,%esp
 80ca835:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca838:	89 04 24             	mov    %eax,(%esp)
 80ca83b:	e8 6c 39 fc ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 80ca840:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80ca847:	e8 04 2f fb ff       	call   807d750 <time@plt>
 80ca84c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ca84f:	8d 75 e4             	lea    -0x1c(%ebp),%esi
 80ca852:	c7 04 24 c8 09 00 00 	movl   $0x9c8,(%esp)
 80ca859:	e8 f2 9b 65 00       	call   8724450 <_Znwj>
 80ca85e:	89 c3                	mov    %eax,%ebx
 80ca860:	89 d8                	mov    %ebx,%eax
 80ca862:	89 74 24 04          	mov    %esi,0x4(%esp)
 80ca866:	89 04 24             	mov    %eax,(%esp)
 80ca869:	e8 bc 11 00 00       	call   80cba2a <_ZN7CMTRandC1ERKm>
 80ca86e:	eb 12                	jmp    80ca882 <_ZN6CBingoC1Ev+0x56>
 80ca870:	89 d6                	mov    %edx,%esi
 80ca872:	89 c7                	mov    %eax,%edi
 80ca874:	89 1c 24             	mov    %ebx,(%esp)
 80ca877:	e8 74 9c 65 00       	call   87244f0 <_ZdlPv>
 80ca87c:	89 f8                	mov    %edi,%eax
 80ca87e:	89 f2                	mov    %esi,%edx
 80ca880:	eb 53                	jmp    80ca8d5 <_ZN6CBingoC1Ev+0xa9>
 80ca882:	89 d8                	mov    %ebx,%eax
 80ca884:	8b 55 08             	mov    0x8(%ebp),%edx
 80ca887:	83 c2 10             	add    $0x10,%edx
 80ca88a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca88e:	89 14 24             	mov    %edx,(%esp)
 80ca891:	e8 52 40 00 00       	call   80ce8e8 <_ZN5boost10shared_ptrI7CMTRandEC1IS1_EEPT_>
 80ca896:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca899:	89 04 24             	mov    %eax,(%esp)
 80ca89c:	e8 cd c2 fc ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 80ca8a1:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca8a4:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 80ca8ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca8ae:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 80ca8b5:	83 c4 2c             	add    $0x2c,%esp
 80ca8b8:	5b                   	pop    %ebx
 80ca8b9:	5e                   	pop    %esi
 80ca8ba:	5f                   	pop    %edi
 80ca8bb:	5d                   	pop    %ebp
 80ca8bc:	c3                   	ret
 80ca8bd:	89 d3                	mov    %edx,%ebx
 80ca8bf:	89 c6                	mov    %eax,%esi
 80ca8c1:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca8c4:	83 c0 10             	add    $0x10,%eax
 80ca8c7:	89 04 24             	mov    %eax,(%esp)
 80ca8ca:	e8 7b 26 00 00       	call   80ccf4a <_ZN5boost10shared_ptrI7CMTRandED1Ev>
 80ca8cf:	89 f0                	mov    %esi,%eax
 80ca8d1:	89 da                	mov    %ebx,%edx
 80ca8d3:	eb 00                	jmp    80ca8d5 <_ZN6CBingoC1Ev+0xa9>
 80ca8d5:	89 d3                	mov    %edx,%ebx
 80ca8d7:	89 c6                	mov    %eax,%esi
 80ca8d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca8dc:	89 04 24             	mov    %eax,(%esp)
 80ca8df:	e8 f6 94 fb ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80ca8e4:	89 f0                	mov    %esi,%eax
 80ca8e6:	89 da                	mov    %ebx,%edx
 80ca8e8:	89 04 24             	mov    %eax,(%esp)
 80ca8eb:	e8 60 8e a1 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CBingo::CBingo @ 0x80ca82c

/* CBingo::CBingo() */

void __thiscall CBingo::CBingo(CBingo *this)

{
  CMTRand *this_00;
  ulong local_20 [4];
  
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)this);
  local_20[0] = time((time_t *)0x0);
                    /* try { // try from 080ca859 to 080ca85d has its CatchHandler @ 080ca8d5 */
  this_00 = operator_new(0x9c8);
                    /* try { // try from 080ca869 to 080ca86d has its CatchHandler @ 080ca870 */
  CMTRand::CMTRand(this_00,local_20);
                    /* try { // try from 080ca891 to 080ca895 has its CatchHandler @ 080ca8d5 */
  boost::shared_ptr<CMTRand>::shared_ptr<CMTRand>((shared_ptr<CMTRand> *)(this + 0x10),this_00);
                    /* try { // try from 080ca89c to 080ca8a0 has its CatchHandler @ 080ca8bd */
  std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## calBoradMatchLine

```asm
// === 080cab5a CBingo::calBoradMatchLine  [0x080cab5a-0x80cad4b] ===
 80cab5a:	55                   	push   %ebp
 80cab5b:	89 e5                	mov    %esp,%ebp
 80cab5d:	53                   	push   %ebx
 80cab5e:	83 ec 64             	sub    $0x64,%esp
 80cab61:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 80cab68:	c7 45 dc 05 00 00 00 	movl   $0x5,-0x24(%ebp)
 80cab6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80cab72:	89 44 24 04          	mov    %eax,0x4(%esp)
 80cab76:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80cab79:	89 04 24             	mov    %eax,(%esp)
 80cab7c:	e8 19 3e 00 00       	call   80ce99a <_ZNSt6bitsetILj25EEC1Em>
 80cab81:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80cab88:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80cab8f:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 80cab96:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80cab9d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80caba4:	e9 78 01 00 00       	jmp    80cad21 <_ZN6CBingo17calBoradMatchLineEi+0x1c7>
 80caba9:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 80cabb0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80cabb7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80cabbe:	e9 aa 00 00 00       	jmp    80cac6d <_ZN6CBingo17calBoradMatchLineEi+0x113>
 80cabc3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80cabc6:	89 d0                	mov    %edx,%eax
 80cabc8:	c1 e0 02             	shl    $0x2,%eax
 80cabcb:	01 d0                	add    %edx,%eax
 80cabcd:	03 45 f4             	add    -0xc(%ebp),%eax
 80cabd0:	89 c2                	mov    %eax,%edx
 80cabd2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80cabd5:	89 54 24 08          	mov    %edx,0x8(%esp)
 80cabd9:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 80cabdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cabe0:	89 04 24             	mov    %eax,(%esp)
 80cabe3:	e8 d8 3d 00 00       	call   80ce9c0 <_ZNSt6bitsetILj25EEixEj>
 80cabe8:	83 ec 04             	sub    $0x4,%esp
 80cabeb:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80cabee:	89 04 24             	mov    %eax,(%esp)
 80cabf1:	e8 fe 3d 00 00       	call   80ce9f4 <_ZNKSt6bitsetILj25EE9referencecvbEv>
 80cabf6:	89 c3                	mov    %eax,%ebx
 80cabf8:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80cabfb:	89 04 24             	mov    %eax,(%esp)
 80cabfe:	e8 eb 3d 00 00       	call   80ce9ee <_ZNSt6bitsetILj25EE9referenceD1Ev>
 80cac03:	84 db                	test   %bl,%bl
 80cac05:	74 04                	je     80cac0b <_ZN6CBingo17calBoradMatchLineEi+0xb1>
 80cac07:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 80cac0b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80cac0e:	89 d0                	mov    %edx,%eax
 80cac10:	c1 e0 02             	shl    $0x2,%eax
 80cac13:	01 d0                	add    %edx,%eax
 80cac15:	03 45 f0             	add    -0x10(%ebp),%eax
 80cac18:	89 c2                	mov    %eax,%edx
 80cac1a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80cac1d:	89 54 24 08          	mov    %edx,0x8(%esp)
 80cac21:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 80cac24:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cac28:	89 04 24             	mov    %eax,(%esp)
 80cac2b:	e8 90 3d 00 00       	call   80ce9c0 <_ZNSt6bitsetILj25EEixEj>
 80cac30:	83 ec 04             	sub    $0x4,%esp
 80cac33:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80cac36:	89 04 24             	mov    %eax,(%esp)
 80cac39:	e8 b6 3d 00 00       	call   80ce9f4 <_ZNKSt6bitsetILj25EE9referencecvbEv>
 80cac3e:	89 c3                	mov    %eax,%ebx
 80cac40:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80cac43:	89 04 24             	mov    %eax,(%esp)
 80cac46:	e8 a3 3d 00 00       	call   80ce9ee <_ZNSt6bitsetILj25EE9referenceD1Ev>
 80cac4b:	84 db                	test   %bl,%bl
 80cac4d:	74 04                	je     80cac53 <_ZN6CBingo17calBoradMatchLineEi+0xf9>
 80cac4f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80cac53:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80cac56:	83 c0 01             	add    $0x1,%eax
 80cac59:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 80cac5c:	7e 0b                	jle    80cac69 <_ZN6CBingo17calBoradMatchLineEi+0x10f>
 80cac5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80cac61:	83 c0 01             	add    $0x1,%eax
 80cac64:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 80cac67:	7f 15                	jg     80cac7e <_ZN6CBingo17calBoradMatchLineEi+0x124>
 80cac69:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80cac6d:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 80cac71:	0f 9e c0             	setle  %al
 80cac74:	84 c0                	test   %al,%al
 80cac76:	0f 85 47 ff ff ff    	jne    80cabc3 <_ZN6CBingo17calBoradMatchLineEi+0x69>
 80cac7c:	eb 01                	jmp    80cac7f <_ZN6CBingo17calBoradMatchLineEi+0x125>
 80cac7e:	90                   	nop
 80cac7f:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 80cac83:	75 04                	jne    80cac89 <_ZN6CBingo17calBoradMatchLineEi+0x12f>
 80cac85:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 80cac89:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 80cac8d:	75 04                	jne    80cac93 <_ZN6CBingo17calBoradMatchLineEi+0x139>
 80cac8f:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 80cac93:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80cac96:	89 d0                	mov    %edx,%eax
 80cac98:	01 c0                	add    %eax,%eax
 80cac9a:	01 d0                	add    %edx,%eax
 80cac9c:	01 c0                	add    %eax,%eax
 80cac9e:	89 c2                	mov    %eax,%edx
 80caca0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80caca3:	89 54 24 08          	mov    %edx,0x8(%esp)
 80caca7:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 80cacaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cacae:	89 04 24             	mov    %eax,(%esp)
 80cacb1:	e8 0a 3d 00 00       	call   80ce9c0 <_ZNSt6bitsetILj25EEixEj>
 80cacb6:	83 ec 04             	sub    $0x4,%esp
 80cacb9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80cacbc:	89 04 24             	mov    %eax,(%esp)
 80cacbf:	e8 30 3d 00 00       	call   80ce9f4 <_ZNKSt6bitsetILj25EE9referencecvbEv>
 80cacc4:	89 c3                	mov    %eax,%ebx
 80cacc6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80cacc9:	89 04 24             	mov    %eax,(%esp)
 80caccc:	e8 1d 3d 00 00       	call   80ce9ee <_ZNSt6bitsetILj25EE9referenceD1Ev>
 80cacd1:	84 db                	test   %bl,%bl
 80cacd3:	74 04                	je     80cacd9 <_ZN6CBingo17calBoradMatchLineEi+0x17f>
 80cacd5:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 80cacd9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80cacdc:	83 c0 01             	add    $0x1,%eax
 80cacdf:	c1 e0 02             	shl    $0x2,%eax
 80cace2:	89 c2                	mov    %eax,%edx
 80cace4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80cace7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80caceb:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 80cacee:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cacf2:	89 04 24             	mov    %eax,(%esp)
 80cacf5:	e8 c6 3c 00 00       	call   80ce9c0 <_ZNSt6bitsetILj25EEixEj>
 80cacfa:	83 ec 04             	sub    $0x4,%esp
 80cacfd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80cad00:	89 04 24             	mov    %eax,(%esp)
 80cad03:	e8 ec 3c 00 00       	call   80ce9f4 <_ZNKSt6bitsetILj25EE9referencecvbEv>
 80cad08:	89 c3                	mov    %eax,%ebx
 80cad0a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80cad0d:	89 04 24             	mov    %eax,(%esp)
 80cad10:	e8 d9 3c 00 00       	call   80ce9ee <_ZNSt6bitsetILj25EE9referenceD1Ev>
 80cad15:	84 db                	test   %bl,%bl
 80cad17:	74 04                	je     80cad1d <_ZN6CBingo17calBoradMatchLineEi+0x1c3>
 80cad19:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80cad1d:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80cad21:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 80cad25:	0f 9e c0             	setle  %al
 80cad28:	84 c0                	test   %al,%al
 80cad2a:	0f 85 79 fe ff ff    	jne    80caba9 <_ZN6CBingo17calBoradMatchLineEi+0x4f>
 80cad30:	83 7d e8 05          	cmpl   $0x5,-0x18(%ebp)
 80cad34:	75 04                	jne    80cad3a <_ZN6CBingo17calBoradMatchLineEi+0x1e0>
 80cad36:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 80cad3a:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 80cad3e:	75 04                	jne    80cad44 <_ZN6CBingo17calBoradMatchLineEi+0x1ea>
 80cad40:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 80cad44:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80cad47:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80cad4a:	c9                   	leave
 80cad4b:	c3                   	ret

```

```c
// CBingo::calBoradMatchLine @ 0x80cab5a

/* CBingo::calBoradMatchLine(int) */

int __thiscall CBingo::calBoradMatchLine(CBingo *this,int param_1)

{
  bool bVar1;
  bitset<25u> local_50 [4];
  reference local_4c [8];
  reference local_44 [8];
  reference local_3c [8];
  reference local_34 [8];
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_2c = 0;
  local_28 = 5;
  std::bitset<25u>::bitset(local_50,param_1);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  do {
    if (4 < local_14) {
      if (local_1c == 5) {
        local_2c = local_2c + 1;
      }
      if (local_18 == 5) {
        local_2c = local_2c + 1;
      }
      return local_2c;
    }
    local_24 = 0;
    local_20 = 0;
    for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
      std::bitset<25u>::operator[]((uint)local_4c);
      bVar1 = std::bitset::reference::operator_cast_to_bool(local_4c);
      std::bitset<25u>::reference::~reference((reference *)local_4c);
      if (bVar1) {
        local_24 = local_24 + 1;
      }
      std::bitset<25u>::operator[]((uint)local_44);
      bVar1 = std::bitset::reference::operator_cast_to_bool(local_44);
      std::bitset<25u>::reference::~reference((reference *)local_44);
      if (bVar1) {
        local_20 = local_20 + 1;
      }
      if ((local_24 < local_10 + 1) && (local_20 < local_10 + 1)) break;
    }
    if (local_24 == 5) {
      local_2c = local_2c + 1;
    }
    if (local_20 == 5) {
      local_2c = local_2c + 1;
    }
    std::bitset<25u>::operator[]((uint)local_3c);
    bVar1 = std::bitset::reference::operator_cast_to_bool(local_3c);
    std::bitset<25u>::reference::~reference((reference *)local_3c);
    if (bVar1) {
      local_1c = local_1c + 1;
    }
    std::bitset<25u>::operator[]((uint)local_34);
    bVar1 = std::bitset::reference::operator_cast_to_bool(local_34);
    std::bitset<25u>::reference::~reference((reference *)local_34);
    if (bVar1) {
      local_18 = local_18 + 1;
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## calNewValue

```asm
// === 080cad4c CBingo::calNewValue  [0x080cad4c-0x80cadd3] ===
 80cad4c:	55                   	push   %ebp
 80cad4d:	89 e5                	mov    %esp,%ebp
 80cad4f:	83 ec 28             	sub    $0x28,%esp
 80cad52:	8b 45 10             	mov    0x10(%ebp),%eax
 80cad55:	89 44 24 04          	mov    %eax,0x4(%esp)
 80cad59:	8b 45 08             	mov    0x8(%ebp),%eax
 80cad5c:	89 04 24             	mov    %eax,(%esp)
 80cad5f:	e8 96 fd ff ff       	call   80caafa <_ZN6CBingo18getIndexTodayBoardEi>
 80cad64:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80cad67:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80cad6b:	75 07                	jne    80cad74 <_ZN6CBingo11calNewValueERji+0x28>
 80cad6d:	b8 00 00 00 00       	mov    $0x0,%eax
 80cad72:	eb 5d                	jmp    80cadd1 <_ZN6CBingo11calNewValueERji+0x85>
 80cad74:	83 7d f4 18          	cmpl   $0x18,-0xc(%ebp)
 80cad78:	7e 07                	jle    80cad81 <_ZN6CBingo11calNewValueERji+0x35>
 80cad7a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80cad7f:	eb 50                	jmp    80cadd1 <_ZN6CBingo11calNewValueERji+0x85>
 80cad81:	8b 45 0c             	mov    0xc(%ebp),%eax
 80cad84:	8b 00                	mov    (%eax),%eax
 80cad86:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80cad89:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cad8d:	89 04 24             	mov    %eax,(%esp)
 80cad90:	e8 99 75 7c 00       	call   889232e <_Z13isSetBit_Uintji>
 80cad95:	83 f0 01             	xor    $0x1,%eax
 80cad98:	84 c0                	test   %al,%al
 80cad9a:	74 30                	je     80cadcc <_ZN6CBingo11calNewValueERji+0x80>
 80cad9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80cad9f:	89 44 24 08          	mov    %eax,0x8(%esp)
 80cada3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80cadaa:	00 
 80cadab:	8b 45 0c             	mov    0xc(%ebp),%eax
 80cadae:	89 04 24             	mov    %eax,(%esp)
 80cadb1:	e8 21 75 7c 00       	call   88922d7 <_Z11setBit_UintRjbi>
 80cadb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80cadb9:	8b 00                	mov    (%eax),%eax
 80cadbb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80cadbf:	8b 45 08             	mov    0x8(%ebp),%eax
 80cadc2:	89 04 24             	mov    %eax,(%esp)
 80cadc5:	e8 90 fd ff ff       	call   80cab5a <_ZN6CBingo17calBoradMatchLineEi>
 80cadca:	eb 05                	jmp    80cadd1 <_ZN6CBingo11calNewValueERji+0x85>
 80cadcc:	b8 00 00 00 00       	mov    $0x0,%eax
 80cadd1:	c9                   	leave
 80cadd2:	c3                   	ret
 80cadd3:	90                   	nop

```

```c
// CBingo::calNewValue @ 0x80cad4c

/* CBingo::calNewValue(unsigned int&, int) */

undefined4 __thiscall CBingo::calNewValue(CBingo *this,uint *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = getIndexTodayBoard(this,param_2);
  if (iVar2 == -1) {
    uVar3 = 0;
  }
  else if (iVar2 < 0x19) {
    cVar1 = isSetBit_Uint(*param_1,iVar2);
    if (cVar1 == '\x01') {
      uVar3 = 0;
    }
    else {
      setBit_Uint(param_1,true,iVar2);
      uVar3 = calBoradMatchLine(this,*param_1);
    }
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

```

---

## getBingoRandomVaule

```asm
// === 080cae70 CBingo::getBingoRandomVaule  [0x080cae70-0x80caec3] ===
 80cae70:	55                   	push   %ebp
 80cae71:	89 e5                	mov    %esp,%ebp
 80cae73:	83 ec 28             	sub    $0x28,%esp
 80cae76:	c7 45 f0 09 00 00 00 	movl   $0x9,-0x10(%ebp)
 80cae7d:	8b 45 08             	mov    0x8(%ebp),%eax
 80cae80:	83 c0 10             	add    $0x10,%eax
 80cae83:	89 04 24             	mov    %eax,(%esp)
 80cae86:	e8 93 3b 00 00       	call   80cea1e <_ZNK5boost10shared_ptrI7CMTRandEptEv>
 80cae8b:	8d 55 f0             	lea    -0x10(%ebp),%edx
 80cae8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cae92:	89 04 24             	mov    %eax,(%esp)
 80cae95:	e8 24 0c 00 00       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 80cae9a:	83 c0 01             	add    $0x1,%eax
 80cae9d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80caea0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80caea3:	83 e8 0a             	sub    $0xa,%eax
 80caea6:	03 45 0c             	add    0xc(%ebp),%eax
 80caea9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80caeac:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80caeb0:	7e 0b                	jle    80caebd <_ZN6CBingo19getBingoRandomVauleEi+0x4d>
 80caeb2:	83 7d f4 32          	cmpl   $0x32,-0xc(%ebp)
 80caeb6:	7f 05                	jg     80caebd <_ZN6CBingo19getBingoRandomVauleEi+0x4d>
 80caeb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80caebb:	eb 05                	jmp    80caec2 <_ZN6CBingo19getBingoRandomVauleEi+0x52>
 80caebd:	b8 00 00 00 00       	mov    $0x0,%eax
 80caec2:	c9                   	leave
 80caec3:	c3                   	ret

```

```c
// CBingo::getBingoRandomVaule @ 0x80cae70

/* CBingo::getBingoRandomVaule(int) */

int __thiscall CBingo::getBingoRandomVaule(CBingo *this,int param_1)

{
  CMTRand *this_00;
  int iVar1;
  ulong local_14 [4];
  
  local_14[0] = 9;
  this_00 = (CMTRand *)boost::shared_ptr<CMTRand>::operator->((shared_ptr<CMTRand> *)(this + 0x10));
  iVar1 = CMTRand::randInt(this_00,local_14);
  iVar1 = iVar1 + -9 + param_1;
  if ((iVar1 < 1) || (0x32 < iVar1)) {
    iVar1 = 0;
  }
  return iVar1;
}

```

---

## getIndexTodayBoard

```asm
// === 080caafa CBingo::getIndexTodayBoard  [0x080caafa-0x80cab59] ===
 80caafa:	55                   	push   %ebp
 80caafb:	89 e5                	mov    %esp,%ebp
 80caafd:	83 ec 28             	sub    $0x28,%esp
 80cab00:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80cab04:	79 07                	jns    80cab0d <_ZN6CBingo18getIndexTodayBoardEi+0x13>
 80cab06:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80cab0b:	eb 4a                	jmp    80cab57 <_ZN6CBingo18getIndexTodayBoardEi+0x5d>
 80cab0d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80cab14:	eb 27                	jmp    80cab3d <_ZN6CBingo18getIndexTodayBoardEi+0x43>
 80cab16:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80cab19:	8b 45 08             	mov    0x8(%ebp),%eax
 80cab1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cab20:	89 04 24             	mov    %eax,(%esp)
 80cab23:	e8 b4 36 fc ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80cab28:	8b 00                	mov    (%eax),%eax
 80cab2a:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80cab2d:	0f 94 c0             	sete   %al
 80cab30:	84 c0                	test   %al,%al
 80cab32:	74 05                	je     80cab39 <_ZN6CBingo18getIndexTodayBoardEi+0x3f>
 80cab34:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80cab37:	eb 1e                	jmp    80cab57 <_ZN6CBingo18getIndexTodayBoardEi+0x5d>
 80cab39:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80cab3d:	8b 45 08             	mov    0x8(%ebp),%eax
 80cab40:	89 04 24             	mov    %eax,(%esp)
 80cab43:	e8 78 36 fc ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80cab48:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80cab4b:	0f 9f c0             	setg   %al
 80cab4e:	84 c0                	test   %al,%al
 80cab50:	75 c4                	jne    80cab16 <_ZN6CBingo18getIndexTodayBoardEi+0x1c>
 80cab52:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80cab57:	c9                   	leave
 80cab58:	c3                   	ret
 80cab59:	90                   	nop

```

```c
// CBingo::getIndexTodayBoard @ 0x80caafa

/* CBingo::getIndexTodayBoard(int) */

uint __thiscall CBingo::getIndexTodayBoard(CBingo *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  
  if (-1 < param_1) {
    for (local_10 = 0;
        iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)this),
        (int)local_10 < iVar2; local_10 = local_10 + 1) {
      piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                ((vector<int,std::allocator<int>> *)this,local_10);
      if (*piVar1 == param_1) {
        return local_10;
      }
    }
  }
  return 0xffffffff;
}

```

---

## getQuizIndex

```asm
// === 080cae1e CBingo::getQuizIndex  [0x080cae1e-0x80cae6f] ===
 80cae1e:	55                   	push   %ebp
 80cae1f:	89 e5                	mov    %esp,%ebp
 80cae21:	83 ec 28             	sub    $0x28,%esp
 80cae24:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80cae2b:	eb 26                	jmp    80cae53 <_ZN6CBingo12getQuizIndexEv+0x35>
 80cae2d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80cae30:	8b 45 08             	mov    0x8(%ebp),%eax
 80cae33:	89 54 24 04          	mov    %edx,0x4(%esp)
 80cae37:	89 04 24             	mov    %eax,(%esp)
 80cae3a:	e8 9d 33 fc ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80cae3f:	8b 00                	mov    (%eax),%eax
 80cae41:	85 c0                	test   %eax,%eax
 80cae43:	0f 94 c0             	sete   %al
 80cae46:	84 c0                	test   %al,%al
 80cae48:	74 05                	je     80cae4f <_ZN6CBingo12getQuizIndexEv+0x31>
 80cae4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80cae4d:	eb 1e                	jmp    80cae6d <_ZN6CBingo12getQuizIndexEv+0x4f>
 80cae4f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80cae53:	8b 45 08             	mov    0x8(%ebp),%eax
 80cae56:	89 04 24             	mov    %eax,(%esp)
 80cae59:	e8 62 33 fc ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80cae5e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80cae61:	0f 9f c0             	setg   %al
 80cae64:	84 c0                	test   %al,%al
 80cae66:	75 c5                	jne    80cae2d <_ZN6CBingo12getQuizIndexEv+0xf>
 80cae68:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80cae6d:	c9                   	leave
 80cae6e:	c3                   	ret
 80cae6f:	90                   	nop

```

```c
// CBingo::getQuizIndex @ 0x80cae1e

/* CBingo::getQuizIndex() */

uint __thiscall CBingo::getQuizIndex(CBingo *this)

{
  int *piVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar2 = std::vector<int,std::allocator<int>>::size((vector<int,std::allocator<int>> *)this);
    if (iVar2 <= (int)local_10) {
      return 0xffffffff;
    }
    piVar1 = (int *)std::vector<int,std::allocator<int>>::operator[]
                              ((vector<int,std::allocator<int>> *)this,local_10);
    if (*piVar1 == 0) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}

```

---

## getQuizValue

```asm
// === 080cae12 CBingo::getQuizValue  [0x080cae12-0x80cae1d] ===
 80cae12:	55                   	push   %ebp
 80cae13:	89 e5                	mov    %esp,%ebp
 80cae15:	8b 45 08             	mov    0x8(%ebp),%eax
 80cae18:	8b 40 0c             	mov    0xc(%eax),%eax
 80cae1b:	5d                   	pop    %ebp
 80cae1c:	c3                   	ret
 80cae1d:	90                   	nop

```

```c
// CBingo::getQuizValue @ 0x80cae12

/* CBingo::getQuizValue() */

undefined4 __thiscall CBingo::getQuizValue(CBingo *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## getToday

```asm
// === 080ca936 CBingo::getToday  [0x080ca936-0x80ca941] ===
 80ca936:	55                   	push   %ebp
 80ca937:	89 e5                	mov    %esp,%ebp
 80ca939:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca93c:	8b 40 18             	mov    0x18(%eax),%eax
 80ca93f:	5d                   	pop    %ebp
 80ca940:	c3                   	ret
 80ca941:	90                   	nop

```

```c
// CBingo::getToday @ 0x80ca936

/* CBingo::getToday() */

undefined4 __thiscall CBingo::getToday(CBingo *this)

{
  return *(undefined4 *)(this + 0x18);
}

```

---

## getTodayBoard

```asm
// === 080caec4 CBingo::getTodayBoard  [0x080caec4-0x80caecb] ===
 80caec4:	55                   	push   %ebp
 80caec5:	89 e5                	mov    %esp,%ebp
 80caec7:	8b 45 08             	mov    0x8(%ebp),%eax
 80caeca:	5d                   	pop    %ebp
 80caecb:	c3                   	ret

```

```c
// CBingo::getTodayBoard @ 0x80caec4

/* CBingo::getTodayBoard() */

CBingo * __thiscall CBingo::getTodayBoard(CBingo *this)

{
  return this;
}

```

---

## getToday_080ca942

```asm
// === 080ca942 CBingo::getToday  [0x080ca942-0x80ca9b7] ===
 80ca942:	55                   	push   %ebp
 80ca943:	89 e5                	mov    %esp,%ebp
 80ca945:	81 ec 88 00 00 00    	sub    $0x88,%esp
 80ca94b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca94e:	2d 80 51 01 00       	sub    $0x15180,%eax
 80ca953:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80ca956:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80ca959:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca95d:	8d 45 0c             	lea    0xc(%ebp),%eax
 80ca960:	89 04 24             	mov    %eax,(%esp)
 80ca963:	e8 f8 39 fb ff       	call   807e360 <localtime_r@plt>
 80ca968:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ca96b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 80ca96e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ca972:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ca975:	89 04 24             	mov    %eax,(%esp)
 80ca978:	e8 e3 39 fb ff       	call   807e360 <localtime_r@plt>
 80ca97d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ca980:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ca983:	8b 40 08             	mov    0x8(%eax),%eax
 80ca986:	85 c0                	test   %eax,%eax
 80ca988:	78 19                	js     80ca9a3 <_ZN6CBingo8getTodayEli+0x61>
 80ca98a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ca98d:	8b 40 08             	mov    0x8(%eax),%eax
 80ca990:	3b 45 10             	cmp    0x10(%ebp),%eax
 80ca993:	7d 0e                	jge    80ca9a3 <_ZN6CBingo8getTodayEli+0x61>
 80ca995:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ca998:	8b 50 0c             	mov    0xc(%eax),%edx
 80ca99b:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca99e:	89 50 18             	mov    %edx,0x18(%eax)
 80ca9a1:	eb 0c                	jmp    80ca9af <_ZN6CBingo8getTodayEli+0x6d>
 80ca9a3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80ca9a6:	8b 50 0c             	mov    0xc(%eax),%edx
 80ca9a9:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca9ac:	89 50 18             	mov    %edx,0x18(%eax)
 80ca9af:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca9b2:	8b 40 18             	mov    0x18(%eax),%eax
 80ca9b5:	c9                   	leave
 80ca9b6:	c3                   	ret
 80ca9b7:	90                   	nop

```

```c
// CBingo::getToday @ 0x80ca942

/* CBingo::getToday(long, int) */

undefined4 __thiscall CBingo::getToday(CBingo *this,long param_1,int param_2)

{
  tm *ptVar1;
  tm local_70;
  tm local_44;
  int local_18;
  tm *local_14;
  
  local_18 = param_1 + -0x15180;
  local_14 = localtime_r(&param_1,&local_44);
  ptVar1 = localtime_r(&local_18,&local_70);
  if ((local_14->tm_hour < 0) || (param_2 <= local_14->tm_hour)) {
    *(int *)(this + 0x18) = local_14->tm_mday;
  }
  else {
    *(int *)(this + 0x18) = ptVar1->tm_mday;
  }
  return *(undefined4 *)(this + 0x18);
}

```

---

## initUserData

```asm
// === 080cadd4 CBingo::initUserData  [0x080cadd4-0x80cadfd] ===
 80cadd4:	55                   	push   %ebp
 80cadd5:	89 e5                	mov    %esp,%ebp
 80cadd7:	83 ec 18             	sub    $0x18,%esp
 80cadda:	8b 45 0c             	mov    0xc(%ebp),%eax
 80caddd:	8b 00                	mov    (%eax),%eax
 80caddf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80cade3:	8b 45 08             	mov    0x8(%ebp),%eax
 80cade6:	89 04 24             	mov    %eax,(%esp)
 80cade9:	e8 6c fd ff ff       	call   80cab5a <_ZN6CBingo17calBoradMatchLineEi>
 80cadee:	89 c2                	mov    %eax,%edx
 80cadf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80cadf3:	88 50 04             	mov    %dl,0x4(%eax)
 80cadf6:	b8 01 00 00 00       	mov    $0x1,%eax
 80cadfb:	c9                   	leave
 80cadfc:	c3                   	ret
 80cadfd:	90                   	nop

```

```c
// CBingo::initUserData @ 0x80cadd4

/* CBingo::initUserData(BingoData&) */

undefined4 __thiscall CBingo::initUserData(CBingo *this,BingoData *param_1)

{
  BingoData BVar1;
  
  BVar1 = (BingoData)calBoradMatchLine(this,*(int *)param_1);
  param_1[4] = BVar1;
  return 1;
}

```

---

## resetBoard

```asm
// === 080ca9b8 CBingo::resetBoard  [0x080ca9b8-0x80caa63] ===
 80ca9b8:	55                   	push   %ebp
 80ca9b9:	89 e5                	mov    %esp,%ebp
 80ca9bb:	83 ec 28             	sub    $0x28,%esp
 80ca9be:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca9c1:	85 c0                	test   %eax,%eax
 80ca9c3:	7f 12                	jg     80ca9d7 <_ZN6CBingo10resetBoardEi+0x1f>
 80ca9c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ca9c8:	83 f8 1f             	cmp    $0x1f,%eax
 80ca9cb:	7e 0a                	jle    80ca9d7 <_ZN6CBingo10resetBoardEi+0x1f>
 80ca9cd:	b8 00 00 00 00       	mov    $0x0,%eax
 80ca9d2:	e9 8b 00 00 00       	jmp    80caa62 <_ZN6CBingo10resetBoardEi+0xaa>
 80ca9d7:	e8 bf 17 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80ca9dc:	8d 88 80 b5 00 00    	lea    0xb580(%eax),%ecx
 80ca9e2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ca9e5:	8d 55 0c             	lea    0xc(%ebp),%edx
 80ca9e8:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ca9ec:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80ca9f0:	89 04 24             	mov    %eax,(%esp)
 80ca9f3:	e8 2e 3f 00 00       	call   80ce926 <_ZNSt3mapIiSt6vectorIiSaIiEESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 80ca9f8:	83 ec 04             	sub    $0x4,%esp
 80ca9fb:	e8 9b 17 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80caa00:	8d 90 80 b5 00 00    	lea    0xb580(%eax),%edx
 80caa06:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caa09:	89 54 24 04          	mov    %edx,0x4(%esp)
 80caa0d:	89 04 24             	mov    %eax,(%esp)
 80caa10:	e8 3d 3f 00 00       	call   80ce952 <_ZNSt3mapIiSt6vectorIiSaIiEESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 80caa15:	83 ec 04             	sub    $0x4,%esp
 80caa18:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caa1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80caa1f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80caa22:	89 04 24             	mov    %eax,(%esp)
 80caa25:	e8 4e 3f 00 00       	call   80ce978 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIiSaIiEEEEeqERKS6_>
 80caa2a:	84 c0                	test   %al,%al
 80caa2c:	74 07                	je     80caa35 <_ZN6CBingo10resetBoardEi+0x7d>
 80caa2e:	b8 00 00 00 00       	mov    $0x0,%eax
 80caa33:	eb 2d                	jmp    80caa62 <_ZN6CBingo10resetBoardEi+0xaa>
 80caa35:	8b 45 08             	mov    0x8(%ebp),%eax
 80caa38:	89 04 24             	mov    %eax,(%esp)
 80caa3b:	e8 2e c1 fc ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 80caa40:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80caa43:	89 04 24             	mov    %eax,(%esp)
 80caa46:	e8 41 3f 00 00       	call   80ce98c <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorIiSaIiEEEEptEv>
 80caa4b:	8d 50 04             	lea    0x4(%eax),%edx
 80caa4e:	8b 45 08             	mov    0x8(%ebp),%eax
 80caa51:	89 54 24 04          	mov    %edx,0x4(%esp)
 80caa55:	89 04 24             	mov    %eax,(%esp)
 80caa58:	e8 75 25 00 00       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 80caa5d:	b8 01 00 00 00       	mov    $0x1,%eax
 80caa62:	c9                   	leave
 80caa63:	c3                   	ret

```

```c
// CBingo::resetBoard @ 0x80ca9b8

/* CBingo::resetBoard(int) */

undefined4 __thiscall CBingo::resetBoard(CBingo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>> local_14 [4];
  map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
  local_10 [12];
  
  if ((param_1 < 1) && (0x1f < param_1)) {
    uVar2 = 0;
  }
  else {
    G_CDataManager();
    std::
    map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
    ::find((int *)local_14);
    G_CDataManager();
    std::
    map<int,std::vector<int,std::allocator<int>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<int,std::allocator<int>>>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
            operator==(local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      std::vector<int,std::allocator<int>>::clear((vector<int,std::allocator<int>> *)this);
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,std::vector<int,std::allocator<int>>>>::
              operator->(local_14);
      std::vector<int,std::allocator<int>>::operator=
                ((vector<int,std::allocator<int>> *)this,(vector *)(iVar3 + 4));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## resetQuiz

```asm
// === 080caa64 CBingo::resetQuiz  [0x080caa64-0x80caaf9] ===
 80caa64:	55                   	push   %ebp
 80caa65:	89 e5                	mov    %esp,%ebp
 80caa67:	83 ec 28             	sub    $0x28,%esp
 80caa6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80caa6d:	85 c0                	test   %eax,%eax
 80caa6f:	7f 0f                	jg     80caa80 <_ZN6CBingo9resetQuizEi+0x1c>
 80caa71:	8b 45 0c             	mov    0xc(%ebp),%eax
 80caa74:	83 f8 1f             	cmp    $0x1f,%eax
 80caa77:	7e 07                	jle    80caa80 <_ZN6CBingo9resetQuizEi+0x1c>
 80caa79:	b8 00 00 00 00       	mov    $0x0,%eax
 80caa7e:	eb 77                	jmp    80caaf7 <_ZN6CBingo9resetQuizEi+0x93>
 80caa80:	e8 16 17 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80caa85:	8d 88 68 b5 00 00    	lea    0xb568(%eax),%ecx
 80caa8b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80caa8e:	8d 55 0c             	lea    0xc(%ebp),%edx
 80caa91:	89 54 24 08          	mov    %edx,0x8(%esp)
 80caa95:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80caa99:	89 04 24             	mov    %eax,(%esp)
 80caa9c:	e8 4d 28 00 00       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 80caaa1:	83 ec 04             	sub    $0x4,%esp
 80caaa4:	e8 f2 16 00 00       	call   80cc19b <_Z14G_CDataManagerv>
 80caaa9:	8d 90 68 b5 00 00    	lea    0xb568(%eax),%edx
 80caaaf:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caab2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80caab6:	89 04 24             	mov    %eax,(%esp)
 80caab9:	e8 5c 28 00 00       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 80caabe:	83 ec 04             	sub    $0x4,%esp
 80caac1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80caac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80caac8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80caacb:	89 04 24             	mov    %eax,(%esp)
 80caace:	e8 1d ce ff ff       	call   80c78f0 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEeqERKS3_>
 80caad3:	84 c0                	test   %al,%al
 80caad5:	74 07                	je     80caade <_ZN6CBingo9resetQuizEi+0x7a>
 80caad7:	b8 00 00 00 00       	mov    $0x0,%eax
 80caadc:	eb 19                	jmp    80caaf7 <_ZN6CBingo9resetQuizEi+0x93>
 80caade:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80caae1:	89 04 24             	mov    %eax,(%esp)
 80caae4:	e8 57 28 00 00       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80caae9:	8b 50 04             	mov    0x4(%eax),%edx
 80caaec:	8b 45 08             	mov    0x8(%ebp),%eax
 80caaef:	89 50 0c             	mov    %edx,0xc(%eax)
 80caaf2:	b8 01 00 00 00       	mov    $0x1,%eax
 80caaf7:	c9                   	leave
 80caaf8:	c3                   	ret
 80caaf9:	90                   	nop

```

```c
// CBingo::resetQuiz @ 0x80caa64

/* CBingo::resetQuiz(int) */

undefined4 __thiscall CBingo::resetQuiz(CBingo *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,int>> local_14 [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_10 [12];
  
  if ((param_1 < 1) && (0x1f < param_1)) {
    uVar2 = 0;
  }
  else {
    G_CDataManager();
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_14)
    ;
    G_CDataManager();
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_10);
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator==
                      (local_14,(_Rb_tree_iterator *)local_10);
    if (cVar1 == '\0') {
      iVar3 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->(local_14);
      *(undefined4 *)(this + 0xc) = *(undefined4 *)(iVar3 + 4);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## resetUserData

```asm
// === 080cadfe CBingo::resetUserData  [0x080cadfe-0x80cae11] ===
 80cadfe:	55                   	push   %ebp
 80cadff:	89 e5                	mov    %esp,%ebp
 80cae01:	83 ec 18             	sub    $0x18,%esp
 80cae04:	8b 45 0c             	mov    0xc(%ebp),%eax
 80cae07:	89 04 24             	mov    %eax,(%esp)
 80cae0a:	e8 5d 0e 00 00       	call   80cbc6c <_ZN9BingoData5clearEv>
 80cae0f:	c9                   	leave
 80cae10:	c3                   	ret
 80cae11:	90                   	nop

```

```c
// CBingo::resetUserData @ 0x80cadfe

/* CBingo::resetUserData(BingoData&) */

void __thiscall CBingo::resetUserData(CBingo *this,BingoData *param_1)

{
  BingoData::clear(param_1);
  return;
}

```

---

## ~CBingo

```asm
// === 080ca8f0 CBingo::~CBingo  [0x080ca8f0-0x80ca935] ===
 80ca8f0:	55                   	push   %ebp
 80ca8f1:	89 e5                	mov    %esp,%ebp
 80ca8f3:	56                   	push   %esi
 80ca8f4:	53                   	push   %ebx
 80ca8f5:	83 ec 10             	sub    $0x10,%esp
 80ca8f8:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca8fb:	83 c0 10             	add    $0x10,%eax
 80ca8fe:	89 04 24             	mov    %eax,(%esp)
 80ca901:	e8 44 26 00 00       	call   80ccf4a <_ZN5boost10shared_ptrI7CMTRandED1Ev>
 80ca906:	eb 1b                	jmp    80ca923 <_ZN6CBingoD1Ev+0x33>
 80ca908:	89 d3                	mov    %edx,%ebx
 80ca90a:	89 c6                	mov    %eax,%esi
 80ca90c:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca90f:	89 04 24             	mov    %eax,(%esp)
 80ca912:	e8 c3 94 fb ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80ca917:	89 f0                	mov    %esi,%eax
 80ca919:	89 da                	mov    %ebx,%edx
 80ca91b:	89 04 24             	mov    %eax,(%esp)
 80ca91e:	e8 2d 8e a1 00       	call   8ae3750 <_Unwind_Resume>
 80ca923:	8b 45 08             	mov    0x8(%ebp),%eax
 80ca926:	89 04 24             	mov    %eax,(%esp)
 80ca929:	e8 ac 94 fb ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80ca92e:	83 c4 10             	add    $0x10,%esp
 80ca931:	5b                   	pop    %ebx
 80ca932:	5e                   	pop    %esi
 80ca933:	5d                   	pop    %ebp
 80ca934:	c3                   	ret
 80ca935:	90                   	nop

```

```c
// CBingo::~CBingo @ 0x80ca8f0

/* CBingo::~CBingo() */

void __thiscall CBingo::~CBingo(CBingo *this)

{
                    /* try { // try from 080ca901 to 080ca905 has its CatchHandler @ 080ca908 */
  boost::shared_ptr<CMTRand>::~shared_ptr((shared_ptr<CMTRand> *)(this + 0x10));
  std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)this);
  return;
}

```

