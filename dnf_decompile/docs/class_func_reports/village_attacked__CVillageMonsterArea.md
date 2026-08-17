# village_attacked__CVillageMonsterArea

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## CVillageMonsterArea

```asm
// === 086b3752 village_attacked::CVillageMonsterArea::CVillageMonsterArea  [0x086b3752-0x86b37f9] ===
 86b3752:	55                   	push   %ebp
 86b3753:	89 e5                	mov    %esp,%ebp
 86b3755:	56                   	push   %esi
 86b3756:	53                   	push   %ebx
 86b3757:	83 ec 10             	sub    $0x10,%esp
 86b375a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b375d:	89 04 24             	mov    %eax,(%esp)
 86b3760:	e8 65 15 00 00       	call   86b4cca <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEEC1Ev>
 86b3765:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3768:	83 c0 1c             	add    $0x1c,%eax
 86b376b:	89 04 24             	mov    %eax,(%esp)
 86b376e:	e8 09 fd cc ff       	call   838347c <_ZNSt6vectorI17STAttackedMonsterSaIS0_EEC1Ev>
 86b3773:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3776:	8b 55 0c             	mov    0xc(%ebp),%edx
 86b3779:	89 50 28             	mov    %edx,0x28(%eax)
 86b377c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b377f:	8b 55 10             	mov    0x10(%ebp),%edx
 86b3782:	89 50 2c             	mov    %edx,0x2c(%eax)
 86b3785:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3788:	8d 50 1c             	lea    0x1c(%eax),%edx
 86b378b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 86b378e:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3792:	89 14 24             	mov    %edx,(%esp)
 86b3795:	e8 aa 15 00 00       	call   86b4d44 <_ZNSt6vectorI17STAttackedMonsterSaIS0_EEaSERKS2_>
 86b379a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b379d:	8b 55 20             	mov    0x20(%ebp),%edx
 86b37a0:	89 50 18             	mov    %edx,0x18(%eax)
 86b37a3:	8b 55 14             	mov    0x14(%ebp),%edx
 86b37a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b37a9:	89 50 34             	mov    %edx,0x34(%eax)
 86b37ac:	8b 45 08             	mov    0x8(%ebp),%eax
 86b37af:	8b 55 18             	mov    0x18(%ebp),%edx
 86b37b2:	89 50 38             	mov    %edx,0x38(%eax)
 86b37b5:	8b 45 08             	mov    0x8(%ebp),%eax
 86b37b8:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 86b37bf:	83 c4 10             	add    $0x10,%esp
 86b37c2:	5b                   	pop    %ebx
 86b37c3:	5e                   	pop    %esi
 86b37c4:	5d                   	pop    %ebp
 86b37c5:	c3                   	ret
 86b37c6:	89 d3                	mov    %edx,%ebx
 86b37c8:	89 c6                	mov    %eax,%esi
 86b37ca:	8b 45 08             	mov    0x8(%ebp),%eax
 86b37cd:	83 c0 1c             	add    $0x1c,%eax
 86b37d0:	89 04 24             	mov    %eax,(%esp)
 86b37d3:	e8 b8 fc cc ff       	call   8383490 <_ZNSt6vectorI17STAttackedMonsterSaIS0_EED1Ev>
 86b37d8:	89 f0                	mov    %esi,%eax
 86b37da:	89 da                	mov    %ebx,%edx
 86b37dc:	eb 00                	jmp    86b37de <_ZN16village_attacked19CVillageMonsterAreaC1EiiiiPSt6vectorI17STAttackedMonsterSaIS2_EEPS1_I7MapAreaSaIS6_EE+0x8c>
 86b37de:	89 d3                	mov    %edx,%ebx
 86b37e0:	89 c6                	mov    %eax,%esi
 86b37e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86b37e5:	89 04 24             	mov    %eax,(%esp)
 86b37e8:	e8 83 13 00 00       	call   86b4b70 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEED1Ev>
 86b37ed:	89 f0                	mov    %esi,%eax
 86b37ef:	89 da                	mov    %ebx,%edx
 86b37f1:	89 04 24             	mov    %eax,(%esp)
 86b37f4:	e8 57 ff 42 00       	call   8ae3750 <_Unwind_Resume>
 86b37f9:	90                   	nop

```

```c
// village_attacked::CVillageMonsterArea::CVillageMonsterArea @ 0x86b3752

/* village_attacked::CVillageMonsterArea::CVillageMonsterArea(int, int, int, int,
   std::vector<STAttackedMonster, std::allocator<STAttackedMonster> >*, std::vector<MapArea,
   std::allocator<MapArea> >*) */

void __thiscall
village_attacked::CVillageMonsterArea::CVillageMonsterArea
          (CVillageMonsterArea *this,int param_1,int param_2,int param_3,int param_4,vector *param_5
          ,vector *param_6)

{
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::map((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
         *)this);
                    /* try { // try from 086b376e to 086b3772 has its CatchHandler @ 086b37de */
  std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::vector
            ((vector<STAttackedMonster,std::allocator<STAttackedMonster>> *)(this + 0x1c));
  *(int *)(this + 0x28) = param_1;
  *(int *)(this + 0x2c) = param_2;
                    /* try { // try from 086b3795 to 086b3799 has its CatchHandler @ 086b37c6 */
  std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::operator=
            ((vector<STAttackedMonster,std::allocator<STAttackedMonster>> *)(this + 0x1c),param_5);
  *(vector **)(this + 0x18) = param_6;
  *(int *)(this + 0x34) = param_3;
  *(int *)(this + 0x38) = param_4;
  *(undefined4 *)(this + 0x30) = 0;
  return;
}

```

---

## GetAttackedMonster

```asm
// === 086b3aea village_attacked::CVillageMonsterArea::GetAttackedMonster  [0x086b3aea-0x86b3b9b] ===
 86b3aea:	55                   	push   %ebp
 86b3aeb:	89 e5                	mov    %esp,%ebp
 86b3aed:	83 ec 28             	sub    $0x28,%esp
 86b3af0:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3af3:	83 c0 1c             	add    $0x1c,%eax
 86b3af6:	89 04 24             	mov    %eax,(%esp)
 86b3af9:	e8 6e 15 00 00       	call   86b506c <_ZNKSt6vectorI17STAttackedMonsterSaIS0_EE5emptyEv>
 86b3afe:	84 c0                	test   %al,%al
 86b3b00:	74 0a                	je     86b3b0c <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi+0x22>
 86b3b02:	b8 00 00 00 00       	mov    $0x0,%eax
 86b3b07:	e9 8e 00 00 00       	jmp    86b3b9a <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi+0xb0>
 86b3b0c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3b0f:	8d 50 1c             	lea    0x1c(%eax),%edx
 86b3b12:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b15:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3b19:	89 04 24             	mov    %eax,(%esp)
 86b3b1c:	e8 8f 15 00 00       	call   86b50b0 <_ZNSt6vectorI17STAttackedMonsterSaIS0_EE5beginEv>
 86b3b21:	83 ec 04             	sub    $0x4,%esp
 86b3b24:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3b27:	8d 50 1c             	lea    0x1c(%eax),%edx
 86b3b2a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b3b2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3b31:	89 04 24             	mov    %eax,(%esp)
 86b3b34:	e8 9b 15 00 00       	call   86b50d4 <_ZNSt6vectorI17STAttackedMonsterSaIS0_EE3endEv>
 86b3b39:	83 ec 04             	sub    $0x4,%esp
 86b3b3c:	eb 30                	jmp    86b3b6e <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi+0x84>
 86b3b3e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b41:	89 04 24             	mov    %eax,(%esp)
 86b3b44:	e8 f3 15 00 00       	call   86b513c <_ZNK9__gnu_cxx17__normal_iteratorIP17STAttackedMonsterSt6vectorIS1_SaIS1_EEEdeEv>
 86b3b49:	8b 40 10             	mov    0x10(%eax),%eax
 86b3b4c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86b3b4f:	0f 9d c0             	setge  %al
 86b3b52:	84 c0                	test   %al,%al
 86b3b54:	74 0d                	je     86b3b63 <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi+0x79>
 86b3b56:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b59:	89 04 24             	mov    %eax,(%esp)
 86b3b5c:	e8 db 15 00 00       	call   86b513c <_ZNK9__gnu_cxx17__normal_iteratorIP17STAttackedMonsterSt6vectorIS1_SaIS1_EEEdeEv>
 86b3b61:	eb 37                	jmp    86b3b9a <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi+0xb0>
 86b3b63:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b66:	89 04 24             	mov    %eax,(%esp)
 86b3b69:	e8 b8 15 00 00       	call   86b5126 <_ZN9__gnu_cxx17__normal_iteratorIP17STAttackedMonsterSt6vectorIS1_SaIS1_EEEppEv>
 86b3b6e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b3b71:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3b75:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b78:	89 04 24             	mov    %eax,(%esp)
 86b3b7b:	e8 7a 15 00 00       	call   86b50fa <_ZN9__gnu_cxxneIP17STAttackedMonsterSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 86b3b80:	84 c0                	test   %al,%al
 86b3b82:	75 ba                	jne    86b3b3e <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi+0x54>
 86b3b84:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b87:	89 04 24             	mov    %eax,(%esp)
 86b3b8a:	e8 b7 15 00 00       	call   86b5146 <_ZN9__gnu_cxx17__normal_iteratorIP17STAttackedMonsterSt6vectorIS1_SaIS1_EEEmmEv>
 86b3b8f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 86b3b92:	89 04 24             	mov    %eax,(%esp)
 86b3b95:	e8 a2 15 00 00       	call   86b513c <_ZNK9__gnu_cxx17__normal_iteratorIP17STAttackedMonsterSt6vectorIS1_SaIS1_EEEdeEv>
 86b3b9a:	c9                   	leave
 86b3b9b:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::GetAttackedMonster @ 0x86b3aea

/* village_attacked::CVillageMonsterArea::GetAttackedMonster(int) */

undefined4 __thiscall
village_attacked::CVillageMonsterArea::GetAttackedMonster(CVillageMonsterArea *this,int param_1)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  __normal_iterator local_14 [4];
  __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
  local_10 [12];
  
  cVar1 = std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::empty();
  if (cVar1 == '\0') {
    std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::begin();
    std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>::end();
    while (bVar2 = __gnu_cxx::operator!=(local_10,local_14), bVar2) {
      iVar4 = __gnu_cxx::
              __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
              ::operator*(local_10);
      if (param_1 <= *(int *)(iVar4 + 0x10)) {
        uVar3 = __gnu_cxx::
                __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
                ::operator*(local_10);
        return uVar3;
      }
      __gnu_cxx::
      __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
      ::operator++(local_10);
    }
    __gnu_cxx::
    __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
    ::operator--(local_10);
    uVar3 = __gnu_cxx::
            __normal_iterator<STAttackedMonster*,std::vector<STAttackedMonster,std::allocator<STAttackedMonster>>>
            ::operator*(local_10);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## OnCreateVillageMonster

```asm
// === 086b3bd4 village_attacked::CVillageMonsterArea::OnCreateVillageMonster  [0x086b3bd4-0x86b3edf] ===
 86b3bd4:	55                   	push   %ebp
 86b3bd5:	89 e5                	mov    %esp,%ebp
 86b3bd7:	57                   	push   %edi
 86b3bd8:	56                   	push   %esi
 86b3bd9:	53                   	push   %ebx
 86b3bda:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 86b3be0:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3be3:	8b 58 34             	mov    0x34(%eax),%ebx
 86b3be6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3be9:	89 04 24             	mov    %eax,(%esp)
 86b3bec:	e8 6b 15 00 00       	call   86b515c <_ZNKSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE4sizeEv>
 86b3bf1:	39 c3                	cmp    %eax,%ebx
 86b3bf3:	0f 96 c0             	setbe  %al
 86b3bf6:	84 c0                	test   %al,%al
 86b3bf8:	74 0a                	je     86b3c04 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x30>
 86b3bfa:	bb 00 00 00 00       	mov    $0x0,%ebx
 86b3bff:	e9 cf 02 00 00       	jmp    86b3ed3 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x2ff>
 86b3c04:	c7 04 24 10 27 00 00 	movl   $0x2710,(%esp)
 86b3c0b:	e8 77 df ff ff       	call   86b1b87 <_Z12get_rand_inti>
 86b3c10:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86b3c13:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86b3c16:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3c1a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3c1d:	89 04 24             	mov    %eax,(%esp)
 86b3c20:	e8 c5 fe ff ff       	call   86b3aea <_ZN16village_attacked19CVillageMonsterArea18GetAttackedMonsterEi>
 86b3c25:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86b3c28:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 86b3c2c:	75 0a                	jne    86b3c38 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x64>
 86b3c2e:	bb 00 00 00 00       	mov    $0x0,%ebx
 86b3c33:	e9 9b 02 00 00       	jmp    86b3ed3 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x2ff>
 86b3c38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3c3b:	8b 78 18             	mov    0x18(%eax),%edi
 86b3c3e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3c41:	8b 70 14             	mov    0x14(%eax),%esi
 86b3c44:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3c47:	89 04 24             	mov    %eax,(%esp)
 86b3c4a:	e8 0d 15 00 00       	call   86b515c <_ZNKSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE4sizeEv>
 86b3c4f:	89 c1                	mov    %eax,%ecx
 86b3c51:	ba ab aa aa aa       	mov    $0xaaaaaaab,%edx
 86b3c56:	89 c8                	mov    %ecx,%eax
 86b3c58:	f7 e2                	mul    %edx
 86b3c5a:	d1 ea                	shr    $1,%edx
 86b3c5c:	89 d0                	mov    %edx,%eax
 86b3c5e:	01 c0                	add    %eax,%eax
 86b3c60:	01 d0                	add    %edx,%eax
 86b3c62:	89 ca                	mov    %ecx,%edx
 86b3c64:	29 c2                	sub    %eax,%edx
 86b3c66:	89 d3                	mov    %edx,%ebx
 86b3c68:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3c6b:	8b 48 08             	mov    0x8(%eax),%ecx
 86b3c6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3c71:	8b 50 04             	mov    0x4(%eax),%edx
 86b3c74:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3c77:	8b 00                	mov    (%eax),%eax
 86b3c79:	0f b7 c0             	movzwl %ax,%eax
 86b3c7c:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 86b3c80:	89 74 24 18          	mov    %esi,0x18(%esp)
 86b3c84:	8b 75 08             	mov    0x8(%ebp),%esi
 86b3c87:	89 74 24 14          	mov    %esi,0x14(%esp)
 86b3c8b:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86b3c8f:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 86b3c93:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b3c97:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3c9b:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 86b3ca1:	89 04 24             	mov    %eax,(%esp)
 86b3ca4:	e8 5b f3 ff ff       	call   86b3004 <_ZN16village_attacked15CVillageMonsterC1EtiiiPNS_19CVillageMonsterAreaEii>
 86b3ca9:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 86b3caf:	89 04 24             	mov    %eax,(%esp)
 86b3cb2:	e8 ad 0e 00 00       	call   86b4b64 <_ZNK16village_attacked15CVillageMonster6GetUIDEv>
 86b3cb7:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 86b3cbb:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86b3cbe:	8d 95 48 ff ff ff    	lea    -0xb8(%ebp),%edx
 86b3cc4:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b3cc8:	8d 55 de             	lea    -0x22(%ebp),%edx
 86b3ccb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3ccf:	89 04 24             	mov    %eax,(%esp)
 86b3cd2:	e8 98 14 00 00       	call   86b516f <_ZSt9make_pairItRN16village_attacked15CVillageMonsterEESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 86b3cd7:	83 ec 04             	sub    $0x4,%esp
 86b3cda:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86b3cdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3ce1:	8d 45 84             	lea    -0x7c(%ebp),%eax
 86b3ce4:	89 04 24             	mov    %eax,(%esp)
 86b3ce7:	e8 d2 14 00 00       	call   86b51be <_ZNSt4pairIKtN16village_attacked15CVillageMonsterEEC1ItS2_EEOS_IT_T0_E>
 86b3cec:	8b 55 08             	mov    0x8(%ebp),%edx
 86b3cef:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86b3cf5:	8d 4d 84             	lea    -0x7c(%ebp),%ecx
 86b3cf8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b3cfc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3d00:	89 04 24             	mov    %eax,(%esp)
 86b3d03:	e8 1e 15 00 00       	call   86b5226 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE6insertERKS6_>
 86b3d08:	83 ec 04             	sub    $0x4,%esp
 86b3d0b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 86b3d0e:	89 04 24             	mov    %eax,(%esp)
 86b3d11:	e8 18 0f 00 00       	call   86b4c2e <_ZNSt4pairIKtN16village_attacked15CVillageMonsterEED1Ev>
 86b3d16:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86b3d19:	89 04 24             	mov    %eax,(%esp)
 86b3d1c:	e8 f7 0e 00 00       	call   86b4c18 <_ZNSt4pairItN16village_attacked15CVillageMonsterEED1Ev>
 86b3d21:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3d27:	89 04 24             	mov    %eax,(%esp)
 86b3d2a:	e8 1d a0 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b3d2f:	eb 2d                	jmp    86b3d5e <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x18a>
 86b3d31:	89 d3                	mov    %edx,%ebx
 86b3d33:	89 c6                	mov    %eax,%esi
 86b3d35:	8d 45 84             	lea    -0x7c(%ebp),%eax
 86b3d38:	89 04 24             	mov    %eax,(%esp)
 86b3d3b:	e8 ee 0e 00 00       	call   86b4c2e <_ZNSt4pairIKtN16village_attacked15CVillageMonsterEED1Ev>
 86b3d40:	89 f0                	mov    %esi,%eax
 86b3d42:	89 da                	mov    %ebx,%edx
 86b3d44:	eb 00                	jmp    86b3d46 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x172>
 86b3d46:	89 d3                	mov    %edx,%ebx
 86b3d48:	89 c6                	mov    %eax,%esi
 86b3d4a:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86b3d4d:	89 04 24             	mov    %eax,(%esp)
 86b3d50:	e8 c3 0e 00 00       	call   86b4c18 <_ZNSt4pairItN16village_attacked15CVillageMonsterEED1Ev>
 86b3d55:	89 f0                	mov    %esi,%eax
 86b3d57:	89 da                	mov    %ebx,%edx
 86b3d59:	e9 49 01 00 00       	jmp    86b3ea7 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x2d3>
 86b3d5e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3d64:	89 04 24             	mov    %eax,(%esp)
 86b3d67:	e8 7a 7b a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b3d6c:	c7 44 24 08 f6 00 00 	movl   $0xf6,0x8(%esp)
 86b3d73:	00 
 86b3d74:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b3d7b:	00 
 86b3d7c:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3d82:	89 04 24             	mov    %eax,(%esp)
 86b3d85:	e8 72 7b a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b3d8a:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 86b3d90:	89 04 24             	mov    %eax,(%esp)
 86b3d93:	e8 cc 0d 00 00       	call   86b4b64 <_ZNK16village_attacked15CVillageMonster6GetUIDEv>
 86b3d98:	0f b7 c0             	movzwl %ax,%eax
 86b3d9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3d9f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3da5:	89 04 24             	mov    %eax,(%esp)
 86b3da8:	e8 f7 60 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3dad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3db0:	8b 00                	mov    (%eax),%eax
 86b3db2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3db6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3dbc:	89 04 24             	mov    %eax,(%esp)
 86b3dbf:	e8 e0 60 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3dc4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b3dcb:	00 
 86b3dcc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3dd2:	89 04 24             	mov    %eax,(%esp)
 86b3dd5:	e8 46 7b a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b3dda:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3ddd:	8b 40 04             	mov    0x4(%eax),%eax
 86b3de0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3de4:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3dea:	89 04 24             	mov    %eax,(%esp)
 86b3ded:	e8 b2 60 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3df2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86b3df5:	8b 40 08             	mov    0x8(%eax),%eax
 86b3df8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3dfc:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3e02:	89 04 24             	mov    %eax,(%esp)
 86b3e05:	e8 9a 60 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86b3e0a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b3e11:	00 
 86b3e12:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3e18:	89 04 24             	mov    %eax,(%esp)
 86b3e1b:	e8 38 7b a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b3e20:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3e26:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3e2a:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3e2d:	89 04 24             	mov    %eax,(%esp)
 86b3e30:	e8 67 fd ff ff       	call   86b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>
 86b3e35:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3e38:	8b 40 2c             	mov    0x2c(%eax),%eax
 86b3e3b:	89 c7                	mov    %eax,%edi
 86b3e3d:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3e40:	8b 70 28             	mov    0x28(%eax),%esi
 86b3e43:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3e46:	8b 58 38             	mov    0x38(%eax),%ebx
 86b3e49:	e8 2e 26 a4 ff       	call   80f647c <_Z12G_TimerQueuev>
 86b3e4e:	89 7c 24 18          	mov    %edi,0x18(%esp)
 86b3e52:	89 74 24 14          	mov    %esi,0x14(%esp)
 86b3e56:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 86b3e5a:	c7 44 24 0c 86 00 00 	movl   $0x86,0xc(%esp)
 86b3e61:	00 
 86b3e62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86b3e69:	00 
 86b3e6a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86b3e71:	00 
 86b3e72:	89 04 24             	mov    %eax,(%esp)
 86b3e75:	e8 9c cf f7 ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86b3e7a:	bb 01 00 00 00       	mov    $0x1,%ebx
 86b3e7f:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3e85:	89 04 24             	mov    %eax,(%esp)
 86b3e88:	e8 f3 9f ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3e8d:	eb 36                	jmp    86b3ec5 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x2f1>
 86b3e8f:	89 d3                	mov    %edx,%ebx
 86b3e91:	89 c6                	mov    %eax,%esi
 86b3e93:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 86b3e99:	89 04 24             	mov    %eax,(%esp)
 86b3e9c:	e8 df 9f ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3ea1:	89 f0                	mov    %esi,%eax
 86b3ea3:	89 da                	mov    %ebx,%edx
 86b3ea5:	eb 00                	jmp    86b3ea7 <_ZN16village_attacked19CVillageMonsterArea22OnCreateVillageMonsterEv+0x2d3>
 86b3ea7:	89 d3                	mov    %edx,%ebx
 86b3ea9:	89 c6                	mov    %eax,%esi
 86b3eab:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 86b3eb1:	89 04 24             	mov    %eax,(%esp)
 86b3eb4:	e8 4d f2 ff ff       	call   86b3106 <_ZN16village_attacked15CVillageMonsterD1Ev>
 86b3eb9:	89 f0                	mov    %esi,%eax
 86b3ebb:	89 da                	mov    %ebx,%edx
 86b3ebd:	89 04 24             	mov    %eax,(%esp)
 86b3ec0:	e8 8b f8 42 00       	call   8ae3750 <_Unwind_Resume>
 86b3ec5:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 86b3ecb:	89 04 24             	mov    %eax,(%esp)
 86b3ece:	e8 33 f2 ff ff       	call   86b3106 <_ZN16village_attacked15CVillageMonsterD1Ev>
 86b3ed3:	89 d8                	mov    %ebx,%eax
 86b3ed5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86b3ed8:	83 c4 00             	add    $0x0,%esp
 86b3edb:	5b                   	pop    %ebx
 86b3edc:	5e                   	pop    %esi
 86b3edd:	5f                   	pop    %edi
 86b3ede:	5d                   	pop    %ebp
 86b3edf:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::OnCreateVillageMonster @ 0x86b3bd4

/* village_attacked::CVillageMonsterArea::OnCreateVillageMonster() */

undefined4 __thiscall
village_attacked::CVillageMonsterArea::OnCreateVillageMonster(CVillageMonsterArea *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  TimerQueue *pTVar7;
  undefined4 uVar8;
  CVillageMonster local_bc [40];
  PacketGuard local_94 [12];
  pair local_88 [8];
  pair<unsigned_short_const,village_attacked::CVillageMonster> local_80 [44];
  pair<unsigned_short,village_attacked::CVillageMonster> local_54 [46];
  undefined2 local_26;
  int local_24;
  int *local_20;
  
  uVar6 = *(uint *)(this + 0x34);
  uVar5 = std::
          map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
          ::size((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
                  *)this);
  if (uVar5 < uVar6) {
    local_24 = get_rand_int(10000);
    local_20 = (int *)GetAttackedMonster(this,local_24);
    if (local_20 == (int *)0x0) {
      uVar8 = 0;
    }
    else {
      iVar1 = local_20[6];
      iVar2 = local_20[5];
      uVar6 = std::
              map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
              ::size((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
                      *)this);
      CVillageMonster::CVillageMonster
                (local_bc,(ushort)*local_20,local_20[1],local_20[2],uVar6 % 3,this,iVar2,iVar1);
      local_26 = CVillageMonster::GetUID(local_bc);
                    /* try { // try from 086b3cd2 to 086b3cd6 has its CatchHandler @ 086b3ea7 */
      std::make_pair<unsigned_short,village_attacked::CVillageMonster&>
                ((ushort *)local_54,(CVillageMonster *)&local_26);
                    /* try { // try from 086b3ce7 to 086b3ceb has its CatchHandler @ 086b3d46 */
      std::pair<unsigned_short_const,village_attacked::CVillageMonster>::
      pair<unsigned_short,village_attacked::CVillageMonster>(local_80,local_54);
                    /* try { // try from 086b3d03 to 086b3d07 has its CatchHandler @ 086b3d31 */
      std::
      map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
      ::insert(local_88);
      std::pair<unsigned_short_const,village_attacked::CVillageMonster>::~pair(local_80);
      std::pair<unsigned_short,village_attacked::CVillageMonster>::~pair(local_54);
                    /* try { // try from 086b3d2a to 086b3d2e has its CatchHandler @ 086b3ea7 */
      PacketGuard::PacketGuard(local_94);
                    /* try { // try from 086b3d67 to 086b3e79 has its CatchHandler @ 086b3e8f */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_94);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_94,0,0xf6);
      uVar6 = CVillageMonster::GetUID(local_bc);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,uVar6 & 0xffff);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,*local_20);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_94,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_20[1]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_94,local_20[2]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_94,true);
      SendPacket(this,local_94);
      uVar8 = *(undefined4 *)(this + 0x2c);
      uVar3 = *(undefined4 *)(this + 0x28);
      uVar4 = *(undefined4 *)(this + 0x38);
      pTVar7 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar7,2,0,0x86,uVar4,uVar3,uVar8);
      uVar8 = 1;
                    /* try { // try from 086b3e88 to 086b3e8c has its CatchHandler @ 086b3ea7 */
      PacketGuard::~PacketGuard(local_94);
      CVillageMonster::~CVillageMonster(local_bc);
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## OnDestroyVillageMonster

```asm
// === 086b3ee0 village_attacked::CVillageMonsterArea::OnDestroyVillageMonster  [0x086b3ee0-0x86b3f05] ===
 86b3ee0:	55                   	push   %ebp
 86b3ee1:	89 e5                	mov    %esp,%ebp
 86b3ee3:	83 ec 18             	sub    $0x18,%esp
 86b3ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3ee9:	89 04 24             	mov    %eax,(%esp)
 86b3eec:	e8 61 13 00 00       	call   86b5252 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE5clearEv>
 86b3ef1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b3ef8:	00 
 86b3ef9:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3efc:	89 04 24             	mov    %eax,(%esp)
 86b3eff:	e8 f6 f8 ff ff       	call   86b37fa <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser>
 86b3f04:	c9                   	leave
 86b3f05:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::OnDestroyVillageMonster @ 0x86b3ee0

/* village_attacked::CVillageMonsterArea::OnDestroyVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterArea::OnDestroyVillageMonster(CVillageMonsterArea *this)

{
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::clear((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
           *)this);
  SendVillageMonsterList(this,(CUser *)0x0);
  return;
}

```

---

## OnFightVillageMonster

```asm
// === 086b3fe2 village_attacked::CVillageMonsterArea::OnFightVillageMonster  [0x086b3fe2-0x86b406f] ===
 86b3fe2:	55                   	push   %ebp
 86b3fe3:	89 e5                	mov    %esp,%ebp
 86b3fe5:	83 ec 38             	sub    $0x38,%esp
 86b3fe8:	8b 45 10             	mov    0x10(%ebp),%eax
 86b3feb:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 86b3fef:	8b 55 08             	mov    0x8(%ebp),%edx
 86b3ff2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3ff5:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 86b3ff8:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b3ffc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4000:	89 04 24             	mov    %eax,(%esp)
 86b4003:	e8 5e 12 00 00       	call   86b5266 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 86b4008:	83 ec 04             	sub    $0x4,%esp
 86b400b:	8b 55 08             	mov    0x8(%ebp),%edx
 86b400e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b4011:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4015:	89 04 24             	mov    %eax,(%esp)
 86b4018:	e8 d5 0f 00 00       	call   86b4ff2 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE3endEv>
 86b401d:	83 ec 04             	sub    $0x4,%esp
 86b4020:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b4023:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4027:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b402a:	89 04 24             	mov    %eax,(%esp)
 86b402d:	e8 e6 0f 00 00       	call   86b5018 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEneERKS5_>
 86b4032:	84 c0                	test   %al,%al
 86b4034:	74 33                	je     86b4069 <_ZN16village_attacked19CVillageMonsterArea21OnFightVillageMonsterEP5CUsertRiS3_+0x87>
 86b4036:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b4039:	89 04 24             	mov    %eax,(%esp)
 86b403c:	e8 09 10 00 00       	call   86b504a <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEptEv>
 86b4041:	83 c0 04             	add    $0x4,%eax
 86b4044:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b4047:	8b 45 18             	mov    0x18(%ebp),%eax
 86b404a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 86b404e:	8b 45 14             	mov    0x14(%ebp),%eax
 86b4051:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b4055:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4058:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b405c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b405f:	89 04 24             	mov    %eax,(%esp)
 86b4062:	e8 d9 f1 ff ff       	call   86b3240 <_ZN16village_attacked15CVillageMonster21OnFightVillageMonsterEP5CUserRiS3_>
 86b4067:	eb 05                	jmp    86b406e <_ZN16village_attacked19CVillageMonsterArea21OnFightVillageMonsterEP5CUsertRiS3_+0x8c>
 86b4069:	b8 15 00 00 00       	mov    $0x15,%eax
 86b406e:	c9                   	leave
 86b406f:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::OnFightVillageMonster @ 0x86b3fe2

/* village_attacked::CVillageMonsterArea::OnFightVillageMonster(CUser*, unsigned short, int&, int&)
    */

undefined4 __thiscall
village_attacked::CVillageMonsterArea::OnFightVillageMonster
          (CVillageMonsterArea *this,CUser *param_1,ushort param_2,int *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>> local_18 [4];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_14 [4];
  CVillageMonster *local_10;
  
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::find((ushort *)local_18);
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
          ::operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    uVar3 = 0x15;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->(local_18);
    local_10 = (CVillageMonster *)(iVar2 + 4);
    uVar3 = CVillageMonster::OnFightVillageMonster(local_10,param_1,param_3,param_4);
  }
  return uVar3;
}

```

---

## OnKillVillageMonster

```asm
// === 086b4070 village_attacked::CVillageMonsterArea::OnKillVillageMonster  [0x086b4070-0x86b4143] ===
 86b4070:	55                   	push   %ebp
 86b4071:	89 e5                	mov    %esp,%ebp
 86b4073:	53                   	push   %ebx
 86b4074:	83 ec 44             	sub    $0x44,%esp
 86b4077:	8b 55 10             	mov    0x10(%ebp),%edx
 86b407a:	8b 45 14             	mov    0x14(%ebp),%eax
 86b407d:	66 89 55 e4          	mov    %dx,-0x1c(%ebp)
 86b4081:	88 45 e0             	mov    %al,-0x20(%ebp)
 86b4084:	8b 55 08             	mov    0x8(%ebp),%edx
 86b4087:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b408a:	8d 4d e4             	lea    -0x1c(%ebp),%ecx
 86b408d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 86b4091:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b4095:	89 04 24             	mov    %eax,(%esp)
 86b4098:	e8 c9 11 00 00       	call   86b5266 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE4findERS5_>
 86b409d:	83 ec 04             	sub    $0x4,%esp
 86b40a0:	8b 55 08             	mov    0x8(%ebp),%edx
 86b40a3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b40a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b40aa:	89 04 24             	mov    %eax,(%esp)
 86b40ad:	e8 40 0f 00 00       	call   86b4ff2 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE3endEv>
 86b40b2:	83 ec 04             	sub    $0x4,%esp
 86b40b5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b40b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b40bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b40bf:	89 04 24             	mov    %eax,(%esp)
 86b40c2:	e8 51 0f 00 00       	call   86b5018 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEneERKS5_>
 86b40c7:	84 c0                	test   %al,%al
 86b40c9:	74 6f                	je     86b413a <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb+0xca>
 86b40cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b40ce:	89 04 24             	mov    %eax,(%esp)
 86b40d1:	e8 74 0f 00 00       	call   86b504a <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEptEv>
 86b40d6:	83 c0 04             	add    $0x4,%eax
 86b40d9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86b40dc:	0f b6 5d e0          	movzbl -0x20(%ebp),%ebx
 86b40e0:	8b 45 08             	mov    0x8(%ebp),%eax
 86b40e3:	8b 48 38             	mov    0x38(%eax),%ecx
 86b40e6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b40e9:	8b 50 2c             	mov    0x2c(%eax),%edx
 86b40ec:	8b 45 08             	mov    0x8(%ebp),%eax
 86b40ef:	8b 40 28             	mov    0x28(%eax),%eax
 86b40f2:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 86b40f6:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 86b40fa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86b40fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b4102:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b4105:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b4109:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b410c:	89 04 24             	mov    %eax,(%esp)
 86b410f:	e8 8c f3 ff ff       	call   86b34a0 <_ZN16village_attacked15CVillageMonster20OnKillVillageMonsterEP5CUseriiib>
 86b4114:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b4117:	80 7d e0 00          	cmpb   $0x0,-0x20(%ebp)
 86b411b:	74 18                	je     86b4135 <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb+0xc5>
 86b411d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86b4121:	75 12                	jne    86b4135 <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb+0xc5>
 86b4123:	8b 45 08             	mov    0x8(%ebp),%eax
 86b4126:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86b4129:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b412d:	89 04 24             	mov    %eax,(%esp)
 86b4130:	e8 5d 11 00 00       	call   86b5292 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE5eraseESt17_Rb_tree_iteratorIS6_E>
 86b4135:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b4138:	eb 05                	jmp    86b413f <_ZN16village_attacked19CVillageMonsterArea20OnKillVillageMonsterEP5CUsertb+0xcf>
 86b413a:	b8 00 00 00 00       	mov    $0x0,%eax
 86b413f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86b4142:	c9                   	leave
 86b4143:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::OnKillVillageMonster @ 0x86b4070

/* village_attacked::CVillageMonsterArea::OnKillVillageMonster(CUser*, unsigned short, bool) */

int __thiscall
village_attacked::CVillageMonsterArea::OnKillVillageMonster
          (CVillageMonsterArea *this,CUser *param_1,ushort param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  undefined4 local_1c;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_18 [4];
  CVillageMonster *local_14;
  int local_10;
  
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::find((ushort *)&local_1c);
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::end(local_18);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
          ::operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)&local_1c,(_Rb_tree_iterator *)local_18);
  if (cVar1 == '\0') {
    local_10 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)&local_1c);
    local_14 = (CVillageMonster *)(iVar2 + 4);
    local_10 = CVillageMonster::OnKillVillageMonster
                         (local_14,param_1,*(int *)(this + 0x28),*(int *)(this + 0x2c),
                          *(int *)(this + 0x38),param_3);
    if ((param_3) && (local_10 == 0)) {
      std::
      map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
      ::erase((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
               *)this,local_1c);
    }
  }
  return local_10;
}

```

---

## OnMoveArea

```asm
// === 086b3abe village_attacked::CVillageMonsterArea::OnMoveArea  [0x086b3abe-0x86b3ae9] ===
 86b3abe:	55                   	push   %ebp
 86b3abf:	89 e5                	mov    %esp,%ebp
 86b3ac1:	83 ec 18             	sub    $0x18,%esp
 86b3ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3ac7:	89 04 24             	mov    %eax,(%esp)
 86b3aca:	e8 89 15 00 00       	call   86b5058 <_ZNKSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE5emptyEv>
 86b3acf:	84 c0                	test   %al,%al
 86b3ad1:	75 14                	jne    86b3ae7 <_ZN16village_attacked19CVillageMonsterArea10OnMoveAreaEP5CUser+0x29>
 86b3ad3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3ad6:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3ada:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3add:	89 04 24             	mov    %eax,(%esp)
 86b3ae0:	e8 15 fd ff ff       	call   86b37fa <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser>
 86b3ae5:	eb 01                	jmp    86b3ae8 <_ZN16village_attacked19CVillageMonsterArea10OnMoveAreaEP5CUser+0x2a>
 86b3ae7:	90                   	nop
 86b3ae8:	c9                   	leave
 86b3ae9:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::OnMoveArea @ 0x86b3abe

/* village_attacked::CVillageMonsterArea::OnMoveArea(CUser*) */

void __thiscall
village_attacked::CVillageMonsterArea::OnMoveArea(CVillageMonsterArea *this,CUser *param_1)

{
  char cVar1;
  
  cVar1 = std::
          map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
          ::empty((map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
                   *)this);
  if (cVar1 == '\0') {
    SendVillageMonsterList(this,param_1);
  }
  return;
}

```

---

## OnRunVillageMonster

```asm
// === 086b3f06 village_attacked::CVillageMonsterArea::OnRunVillageMonster  [0x086b3f06-0x86b3fe1] ===
 86b3f06:	55                   	push   %ebp
 86b3f07:	89 e5                	mov    %esp,%ebp
 86b3f09:	56                   	push   %esi
 86b3f0a:	53                   	push   %ebx
 86b3f0b:	83 ec 20             	sub    $0x20,%esp
 86b3f0e:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3f11:	8b 70 2c             	mov    0x2c(%eax),%esi
 86b3f14:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3f17:	8b 58 28             	mov    0x28(%eax),%ebx
 86b3f1a:	e8 88 64 a2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86b3f1f:	89 74 24 08          	mov    %esi,0x8(%esp)
 86b3f23:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b3f27:	89 04 24             	mov    %eax,(%esp)
 86b3f2a:	e8 83 0a 01 00       	call   86c49b2 <_ZNK9GameWorld12GetUserCountEii>
 86b3f2f:	85 c0                	test   %eax,%eax
 86b3f31:	0f 94 c0             	sete   %al
 86b3f34:	84 c0                	test   %al,%al
 86b3f36:	0f 85 9b 00 00 00    	jne    86b3fd7 <_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv+0xd1>
 86b3f3c:	8b 55 08             	mov    0x8(%ebp),%edx
 86b3f3f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3f42:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3f46:	89 04 24             	mov    %eax,(%esp)
 86b3f49:	e8 7e 10 00 00       	call   86b4fcc <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86b3f4e:	83 ec 04             	sub    $0x4,%esp
 86b3f51:	eb 3d                	jmp    86b3f90 <_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv+0x8a>
 86b3f53:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3f56:	89 04 24             	mov    %eax,(%esp)
 86b3f59:	e8 ec 10 00 00       	call   86b504a <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEptEv>
 86b3f5e:	83 c0 04             	add    $0x4,%eax
 86b3f61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b3f64:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3f67:	8b 40 30             	mov    0x30(%eax),%eax
 86b3f6a:	89 c2                	mov    %eax,%edx
 86b3f6c:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3f6f:	8b 40 18             	mov    0x18(%eax),%eax
 86b3f72:	89 54 24 08          	mov    %edx,0x8(%esp)
 86b3f76:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3f7a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b3f7d:	89 04 24             	mov    %eax,(%esp)
 86b3f80:	e8 87 f1 ff ff       	call   86b310c <_ZN16village_attacked15CVillageMonster19OnRunVillageMonsterEPSt6vectorI7MapAreaSaIS2_EEi>
 86b3f85:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3f88:	89 04 24             	mov    %eax,(%esp)
 86b3f8b:	e8 9c 10 00 00       	call   86b502c <_ZNSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEppEv>
 86b3f90:	8b 55 08             	mov    0x8(%ebp),%edx
 86b3f93:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b3f96:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3f9a:	89 04 24             	mov    %eax,(%esp)
 86b3f9d:	e8 50 10 00 00       	call   86b4ff2 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE3endEv>
 86b3fa2:	83 ec 04             	sub    $0x4,%esp
 86b3fa5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 86b3fa8:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3fac:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b3faf:	89 04 24             	mov    %eax,(%esp)
 86b3fb2:	e8 61 10 00 00       	call   86b5018 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEneERKS5_>
 86b3fb7:	84 c0                	test   %al,%al
 86b3fb9:	75 98                	jne    86b3f53 <_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv+0x4d>
 86b3fbb:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3fbe:	89 04 24             	mov    %eax,(%esp)
 86b3fc1:	e8 9c f9 ff ff       	call   86b3962 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv>
 86b3fc6:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3fc9:	8b 40 30             	mov    0x30(%eax),%eax
 86b3fcc:	8d 50 01             	lea    0x1(%eax),%edx
 86b3fcf:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3fd2:	89 50 30             	mov    %edx,0x30(%eax)
 86b3fd5:	eb 01                	jmp    86b3fd8 <_ZN16village_attacked19CVillageMonsterArea19OnRunVillageMonsterEv+0xd2>
 86b3fd7:	90                   	nop
 86b3fd8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b3fdb:	83 c4 00             	add    $0x0,%esp
 86b3fde:	5b                   	pop    %ebx
 86b3fdf:	5e                   	pop    %esi
 86b3fe0:	5d                   	pop    %ebp
 86b3fe1:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::OnRunVillageMonster @ 0x86b3f06

/* village_attacked::CVillageMonsterArea::OnRunVillageMonster() */

void __thiscall
village_attacked::CVillageMonsterArea::OnRunVillageMonster(CVillageMonsterArea *this)

{
  int iVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_18 [4];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_14 [4];
  CVillageMonster *local_10;
  
  iVar3 = *(int *)(this + 0x2c);
  iVar1 = *(int *)(this + 0x28);
  this_00 = (GameWorld *)G_GameWorld();
  iVar3 = GameWorld::GetUserCount(this_00,iVar1,iVar3);
  if (iVar3 != 0) {
    std::
    map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
    ::begin(local_18);
    while( true ) {
      std::
      map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
      ::end(local_14);
      cVar2 = std::
              _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
              operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                          *)local_18,(_Rb_tree_iterator *)local_14);
      if (cVar2 == '\0') break;
      iVar3 = std::
              _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
              operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                          *)local_18);
      local_10 = (CVillageMonster *)(iVar3 + 4);
      CVillageMonster::OnRunVillageMonster(local_10,*(vector **)(this + 0x18),*(int *)(this + 0x30))
      ;
      std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
      operator++((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                  *)local_18);
    }
    SendVillageMonsterPosition(this);
    *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
  }
  return;
}

```

---

## SendPacket

```asm
// === 086b3b9c village_attacked::CVillageMonsterArea::SendPacket  [0x086b3b9c-0x86b3bd3] ===
 86b3b9c:	55                   	push   %ebp
 86b3b9d:	89 e5                	mov    %esp,%ebp
 86b3b9f:	56                   	push   %esi
 86b3ba0:	53                   	push   %ebx
 86b3ba1:	83 ec 10             	sub    $0x10,%esp
 86b3ba4:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3ba7:	8b 70 2c             	mov    0x2c(%eax),%esi
 86b3baa:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3bad:	8b 58 28             	mov    0x28(%eax),%ebx
 86b3bb0:	e8 f2 67 a2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 86b3bb5:	8b 55 0c             	mov    0xc(%ebp),%edx
 86b3bb8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86b3bbc:	89 74 24 08          	mov    %esi,0x8(%esp)
 86b3bc0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86b3bc4:	89 04 24             	mov    %eax,(%esp)
 86b3bc7:	e8 9c 45 01 00       	call   86c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>
 86b3bcc:	83 c4 10             	add    $0x10,%esp
 86b3bcf:	5b                   	pop    %ebx
 86b3bd0:	5e                   	pop    %esi
 86b3bd1:	5d                   	pop    %ebp
 86b3bd2:	c3                   	ret
 86b3bd3:	90                   	nop

```

```c
// village_attacked::CVillageMonsterArea::SendPacket @ 0x86b3b9c

/* village_attacked::CVillageMonsterArea::SendPacket(PacketGuard&) */

void __thiscall
village_attacked::CVillageMonsterArea::SendPacket(CVillageMonsterArea *this,PacketGuard *param_1)

{
  int iVar1;
  int iVar2;
  GameWorld *this_00;
  
  iVar1 = *(int *)(this + 0x2c);
  iVar2 = *(int *)(this + 0x28);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_to_area(this_00,iVar2,iVar1,param_1);
  return;
}

```

---

## SendVillageMonsterList

```asm
// === 086b37fa village_attacked::CVillageMonsterArea::SendVillageMonsterList  [0x086b37fa-0x86b3961] ===
 86b37fa:	55                   	push   %ebp
 86b37fb:	89 e5                	mov    %esp,%ebp
 86b37fd:	56                   	push   %esi
 86b37fe:	53                   	push   %ebx
 86b37ff:	83 ec 30             	sub    $0x30,%esp
 86b3802:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3805:	89 04 24             	mov    %eax,(%esp)
 86b3808:	e8 3f a5 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b380d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3810:	89 04 24             	mov    %eax,(%esp)
 86b3813:	e8 ce 80 a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b3818:	c7 44 24 08 ee 00 00 	movl   $0xee,0x8(%esp)
 86b381f:	00 
 86b3820:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b3827:	00 
 86b3828:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b382b:	89 04 24             	mov    %eax,(%esp)
 86b382e:	e8 c9 80 a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b3833:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3836:	89 04 24             	mov    %eax,(%esp)
 86b3839:	e8 0e d3 a5 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86b383e:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86b3841:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86b3848:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b384b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b384f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3852:	89 04 24             	mov    %eax,(%esp)
 86b3855:	e8 c6 80 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b385a:	8b 55 08             	mov    0x8(%ebp),%edx
 86b385d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b3860:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3864:	89 04 24             	mov    %eax,(%esp)
 86b3867:	e8 60 17 00 00       	call   86b4fcc <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86b386c:	83 ec 04             	sub    $0x4,%esp
 86b386f:	eb 3c                	jmp    86b38ad <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0xb3>
 86b3871:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b3874:	89 04 24             	mov    %eax,(%esp)
 86b3877:	e8 ce 17 00 00       	call   86b504a <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEptEv>
 86b387c:	83 c0 04             	add    $0x4,%eax
 86b387f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b3882:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3885:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3889:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b388c:	89 04 24             	mov    %eax,(%esp)
 86b388f:	e8 d2 fd ff ff       	call   86b3666 <_ZN16village_attacked15CVillageMonster28MakeVillageMonsterListPacketER11PacketGuard>
 86b3894:	83 f0 01             	xor    $0x1,%eax
 86b3897:	84 c0                	test   %al,%al
 86b3899:	75 06                	jne    86b38a1 <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0xa7>
 86b389b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86b389f:	eb 01                	jmp    86b38a2 <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0xa8>
 86b38a1:	90                   	nop
 86b38a2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b38a5:	89 04 24             	mov    %eax,(%esp)
 86b38a8:	e8 7f 17 00 00       	call   86b502c <_ZNSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEppEv>
 86b38ad:	8b 55 08             	mov    0x8(%ebp),%edx
 86b38b0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b38b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b38b7:	89 04 24             	mov    %eax,(%esp)
 86b38ba:	e8 33 17 00 00       	call   86b4ff2 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE3endEv>
 86b38bf:	83 ec 04             	sub    $0x4,%esp
 86b38c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86b38c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b38c9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b38cc:	89 04 24             	mov    %eax,(%esp)
 86b38cf:	e8 44 17 00 00       	call   86b5018 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEneERKS5_>
 86b38d4:	84 c0                	test   %al,%al
 86b38d6:	75 99                	jne    86b3871 <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0x77>
 86b38d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86b38db:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b38df:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b38e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b38e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b38e9:	89 04 24             	mov    %eax,(%esp)
 86b38ec:	e8 37 d2 a5 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 86b38f1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b38f8:	00 
 86b38f9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b38fc:	89 04 24             	mov    %eax,(%esp)
 86b38ff:	e8 54 80 a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b3904:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 86b3908:	74 14                	je     86b391e <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0x124>
 86b390a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b390d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3911:	8b 45 0c             	mov    0xc(%ebp),%eax
 86b3914:	89 04 24             	mov    %eax,(%esp)
 86b3917:	e8 9e 4c f9 ff       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 86b391c:	eb 2f                	jmp    86b394d <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0x153>
 86b391e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3921:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3925:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3928:	89 04 24             	mov    %eax,(%esp)
 86b392b:	e8 6c 02 00 00       	call   86b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>
 86b3930:	eb 1b                	jmp    86b394d <_ZN16village_attacked19CVillageMonsterArea22SendVillageMonsterListEP5CUser+0x153>
 86b3932:	89 d3                	mov    %edx,%ebx
 86b3934:	89 c6                	mov    %eax,%esi
 86b3936:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3939:	89 04 24             	mov    %eax,(%esp)
 86b393c:	e8 3f a5 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3941:	89 f0                	mov    %esi,%eax
 86b3943:	89 da                	mov    %ebx,%edx
 86b3945:	89 04 24             	mov    %eax,(%esp)
 86b3948:	e8 03 fe 42 00       	call   8ae3750 <_Unwind_Resume>
 86b394d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86b3950:	89 04 24             	mov    %eax,(%esp)
 86b3953:	e8 28 a5 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3958:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b395b:	83 c4 00             	add    $0x0,%esp
 86b395e:	5b                   	pop    %ebx
 86b395f:	5e                   	pop    %esi
 86b3960:	5d                   	pop    %ebp
 86b3961:	c3                   	ret

```

```c
// village_attacked::CVillageMonsterArea::SendVillageMonsterList @ 0x86b37fa

/* village_attacked::CVillageMonsterArea::SendVillageMonsterList(CUser*) */

void __thiscall
village_attacked::CVillageMonsterArea::SendVillageMonsterList
          (CVillageMonsterArea *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_2c [4];
  int local_28;
  PacketGuard local_24 [12];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_18 [4];
  int local_14;
  CVillageMonster *local_10;
  
  PacketGuard::PacketGuard(local_24);
                    /* try { // try from 086b3813 to 086b392f has its CatchHandler @ 086b3932 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0xee);
  local_28 = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_24);
  local_14 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::begin(local_2c);
  while( true ) {
    std::
    map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
    ::end(local_18);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_2c,(_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_2c);
    local_10 = (CVillageMonster *)(iVar2 + 4);
    cVar1 = CVillageMonster::MakeVillageMonsterListPacket(local_10,local_24);
    if (cVar1 == '\x01') {
      local_14 = local_14 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
    operator++((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                *)local_2c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,&local_28,local_14);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
  if (param_1 == (CUser *)0x0) {
    SendPacket(this,local_24);
  }
  else {
    CUser::Send(param_1,local_24);
  }
  PacketGuard::~PacketGuard(local_24);
  return;
}

```

---

## SendVillageMonsterPosition

```asm
// === 086b3962 village_attacked::CVillageMonsterArea::SendVillageMonsterPosition  [0x086b3962-0x86b3abd] ===
 86b3962:	55                   	push   %ebp
 86b3963:	89 e5                	mov    %esp,%ebp
 86b3965:	56                   	push   %esi
 86b3966:	53                   	push   %ebx
 86b3967:	83 ec 40             	sub    $0x40,%esp
 86b396a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b396d:	89 04 24             	mov    %eax,(%esp)
 86b3970:	e8 d7 a3 ed ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86b3975:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3978:	89 04 24             	mov    %eax,(%esp)
 86b397b:	e8 66 7f a1 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 86b3980:	c7 44 24 08 ef 00 00 	movl   $0xef,0x8(%esp)
 86b3987:	00 
 86b3988:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86b398f:	00 
 86b3990:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3993:	89 04 24             	mov    %eax,(%esp)
 86b3996:	e8 61 7f a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86b399b:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b399e:	89 04 24             	mov    %eax,(%esp)
 86b39a1:	e8 a6 d1 a5 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86b39a6:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86b39a9:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86b39b0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b39b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b39b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b39ba:	89 04 24             	mov    %eax,(%esp)
 86b39bd:	e8 5e 7f a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86b39c2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86b39c9:	8b 55 08             	mov    0x8(%ebp),%edx
 86b39cc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b39cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b39d3:	89 04 24             	mov    %eax,(%esp)
 86b39d6:	e8 f1 15 00 00       	call   86b4fcc <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE5beginEv>
 86b39db:	83 ec 04             	sub    $0x4,%esp
 86b39de:	eb 3c                	jmp    86b3a1c <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv+0xba>
 86b39e0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b39e3:	89 04 24             	mov    %eax,(%esp)
 86b39e6:	e8 5f 16 00 00       	call   86b504a <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEptEv>
 86b39eb:	83 c0 04             	add    $0x4,%eax
 86b39ee:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86b39f1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b39f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b39f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86b39fb:	89 04 24             	mov    %eax,(%esp)
 86b39fe:	e8 e3 fc ff ff       	call   86b36e6 <_ZN16village_attacked15CVillageMonster32MakeVillageMonsterPositionPacketER11PacketGuard>
 86b3a03:	83 f0 01             	xor    $0x1,%eax
 86b3a06:	84 c0                	test   %al,%al
 86b3a08:	75 06                	jne    86b3a10 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv+0xae>
 86b3a0a:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86b3a0e:	eb 01                	jmp    86b3a11 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv+0xaf>
 86b3a10:	90                   	nop
 86b3a11:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b3a14:	89 04 24             	mov    %eax,(%esp)
 86b3a17:	e8 10 16 00 00       	call   86b502c <_ZNSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEppEv>
 86b3a1c:	8b 55 08             	mov    0x8(%ebp),%edx
 86b3a1f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b3a22:	89 54 24 04          	mov    %edx,0x4(%esp)
 86b3a26:	89 04 24             	mov    %eax,(%esp)
 86b3a29:	e8 c4 15 00 00       	call   86b4ff2 <_ZNSt3mapItN16village_attacked15CVillageMonsterESt4lessItESaISt4pairIKtS1_EEE3endEv>
 86b3a2e:	83 ec 04             	sub    $0x4,%esp
 86b3a31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86b3a34:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3a38:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86b3a3b:	89 04 24             	mov    %eax,(%esp)
 86b3a3e:	e8 d5 15 00 00       	call   86b5018 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtN16village_attacked15CVillageMonsterEEEneERKS5_>
 86b3a43:	84 c0                	test   %al,%al
 86b3a45:	75 99                	jne    86b39e0 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv+0x7e>
 86b3a47:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86b3a4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 86b3a4e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86b3a51:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3a55:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3a58:	89 04 24             	mov    %eax,(%esp)
 86b3a5b:	e8 c8 d0 a5 ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 86b3a60:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86b3a67:	00 
 86b3a68:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3a6b:	89 04 24             	mov    %eax,(%esp)
 86b3a6e:	e8 e5 7e a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86b3a73:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86b3a77:	74 2f                	je     86b3aa8 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv+0x146>
 86b3a79:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3a7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 86b3a80:	8b 45 08             	mov    0x8(%ebp),%eax
 86b3a83:	89 04 24             	mov    %eax,(%esp)
 86b3a86:	e8 11 01 00 00       	call   86b3b9c <_ZN16village_attacked19CVillageMonsterArea10SendPacketER11PacketGuard>
 86b3a8b:	eb 1b                	jmp    86b3aa8 <_ZN16village_attacked19CVillageMonsterArea26SendVillageMonsterPositionEv+0x146>
 86b3a8d:	89 d3                	mov    %edx,%ebx
 86b3a8f:	89 c6                	mov    %eax,%esi
 86b3a91:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3a94:	89 04 24             	mov    %eax,(%esp)
 86b3a97:	e8 e4 a3 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3a9c:	89 f0                	mov    %esi,%eax
 86b3a9e:	89 da                	mov    %ebx,%edx
 86b3aa0:	89 04 24             	mov    %eax,(%esp)
 86b3aa3:	e8 a8 fc 42 00       	call   8ae3750 <_Unwind_Resume>
 86b3aa8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86b3aab:	89 04 24             	mov    %eax,(%esp)
 86b3aae:	e8 cd a3 ed ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 86b3ab3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86b3ab6:	83 c4 00             	add    $0x0,%esp
 86b3ab9:	5b                   	pop    %ebx
 86b3aba:	5e                   	pop    %esi
 86b3abb:	5d                   	pop    %ebp
 86b3abc:	c3                   	ret
 86b3abd:	90                   	nop

```

```c
// village_attacked::CVillageMonsterArea::SendVillageMonsterPosition @ 0x86b3962

/* village_attacked::CVillageMonsterArea::SendVillageMonsterPosition() */

void __thiscall
village_attacked::CVillageMonsterArea::SendVillageMonsterPosition(CVillageMonsterArea *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_30 [4];
  int local_2c;
  PacketGuard local_28 [12];
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  local_1c [4];
  int local_18;
  undefined4 local_14;
  CVillageMonster *local_10;
  
  PacketGuard::PacketGuard(local_28);
                    /* try { // try from 086b397b to 086b3a8a has its CatchHandler @ 086b3a8d */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_28);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,0xef);
  local_2c = InterfacePacketBuf::get_index((InterfacePacketBuf *)local_28);
  local_18 = 0;
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,0);
  local_14 = 0;
  std::
  map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
  ::begin(local_30);
  while( true ) {
    std::
    map<unsigned_short,village_attacked::CVillageMonster,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>>
    ::end(local_1c);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator!=((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_30,(_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    iVar2 = std::
            _Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
            operator->((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                        *)local_30);
    local_10 = (CVillageMonster *)(iVar2 + 4);
    cVar1 = CVillageMonster::MakeVillageMonsterPositionPacket(local_10,local_28);
    if (cVar1 == '\x01') {
      local_18 = local_18 + 1;
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>::
    operator++((_Rb_tree_iterator<std::pair<unsigned_short_const,village_attacked::CVillageMonster>>
                *)local_30);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,&local_2c,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
  if (local_18 != 0) {
    SendPacket(this,local_28);
  }
  PacketGuard::~PacketGuard(local_28);
  return;
}

```

