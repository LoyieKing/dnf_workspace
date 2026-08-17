# RandomOptionScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## getOptionModificationCost

```asm
// === 08a738a0 RandomOptionScript::getOptionModificationCost  [0x08a738a0-0x8a73955] ===
 8a738a0:	55                   	push   %ebp
 8a738a1:	89 e5                	mov    %esp,%ebp
 8a738a3:	83 ec 38             	sub    $0x38,%esp
 8a738a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a738a9:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 8a738ad:	8b 45 08             	mov    0x8(%ebp),%eax
 8a738b0:	8d 90 0c 01 00 00    	lea    0x10c(%eax),%edx
 8a738b6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a738b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a738bd:	89 04 24             	mov    %eax,(%esp)
 8a738c0:	e8 eb 14 00 00       	call   8a74db0 <_ZNKSt6vectorI24OPTION_MODIFICATION_COSTSaIS0_EE5beginEv>
 8a738c5:	83 ec 04             	sub    $0x4,%esp
 8a738c8:	eb 50                	jmp    8a7391a <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0x7a>
 8a738ca:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a738cd:	89 04 24             	mov    %eax,(%esp)
 8a738d0:	e8 75 15 00 00       	call   8a74e4a <_ZNK9__gnu_cxx17__normal_iteratorIPK24OPTION_MODIFICATION_COSTSt6vectorIS1_SaIS1_EEEdeEv>
 8a738d5:	0f b7 00             	movzwl (%eax),%eax
 8a738d8:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 8a738dc:	0f 9d c0             	setge  %al
 8a738df:	84 c0                	test   %al,%al
 8a738e1:	74 2c                	je     8a7390f <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0x6f>
 8a738e3:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 8a738e7:	75 10                	jne    8a738f9 <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0x59>
 8a738e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a738ec:	89 04 24             	mov    %eax,(%esp)
 8a738ef:	e8 56 15 00 00       	call   8a74e4a <_ZNK9__gnu_cxx17__normal_iteratorIPK24OPTION_MODIFICATION_COSTSt6vectorIS1_SaIS1_EEEdeEv>
 8a738f4:	8b 40 04             	mov    0x4(%eax),%eax
 8a738f7:	eb 5b                	jmp    8a73954 <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0xb4>
 8a738f9:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8a738fd:	75 10                	jne    8a7390f <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0x6f>
 8a738ff:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a73902:	89 04 24             	mov    %eax,(%esp)
 8a73905:	e8 40 15 00 00       	call   8a74e4a <_ZNK9__gnu_cxx17__normal_iteratorIPK24OPTION_MODIFICATION_COSTSt6vectorIS1_SaIS1_EEEdeEv>
 8a7390a:	8b 40 08             	mov    0x8(%eax),%eax
 8a7390d:	eb 45                	jmp    8a73954 <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0xb4>
 8a7390f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a73912:	89 04 24             	mov    %eax,(%esp)
 8a73915:	e8 1a 15 00 00       	call   8a74e34 <_ZN9__gnu_cxx17__normal_iteratorIPK24OPTION_MODIFICATION_COSTSt6vectorIS1_SaIS1_EEEppEv>
 8a7391a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a7391d:	8d 90 0c 01 00 00    	lea    0x10c(%eax),%edx
 8a73923:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a73926:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a7392a:	89 04 24             	mov    %eax,(%esp)
 8a7392d:	e8 aa 14 00 00       	call   8a74ddc <_ZNKSt6vectorI24OPTION_MODIFICATION_COSTSaIS0_EE3endEv>
 8a73932:	83 ec 04             	sub    $0x4,%esp
 8a73935:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8a73938:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a7393c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8a7393f:	89 04 24             	mov    %eax,(%esp)
 8a73942:	e8 c1 14 00 00       	call   8a74e08 <_ZN9__gnu_cxxneIPK24OPTION_MODIFICATION_COSTSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8a73947:	84 c0                	test   %al,%al
 8a73949:	0f 85 7b ff ff ff    	jne    8a738ca <_ZNK18RandomOptionScript25getOptionModificationCostEs11ENUM_RARITY+0x2a>
 8a7394f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8a73954:	c9                   	leave
 8a73955:	c3                   	ret

```

```c
// RandomOptionScript::getOptionModificationCost @ 0x8a738a0

/* RandomOptionScript::getOptionModificationCost(short, ENUM_RARITY) const */

undefined4 __thiscall
RandomOptionScript::getOptionModificationCost(undefined4 this,short param_1,int param_3)

{
  bool bVar1;
  short *psVar2;
  int iVar3;
  __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>::begin();
  do {
    std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) {
      return 0xffffffff;
    }
    psVar2 = (short *)__gnu_cxx::
                      __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
                      ::operator*(local_14);
    if (param_1 <= *psVar2) {
      if (param_3 == 2) {
        iVar3 = __gnu_cxx::
                __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
                ::operator*(local_14);
        return *(undefined4 *)(iVar3 + 4);
      }
      if (param_3 == 3) {
        iVar3 = __gnu_cxx::
                __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
                ::operator*(local_14);
        return *(undefined4 *)(iVar3 + 8);
      }
    }
    __gnu_cxx::
    __normal_iterator<OPTION_MODIFICATION_COST_const*,std::vector<OPTION_MODIFICATION_COST,std::allocator<OPTION_MODIFICATION_COST>>>
    ::operator++(local_14);
  } while( true );
}

```

---

## getPrefix

```asm
// === 08a73956 RandomOptionScript::getPrefix  [0x08a73956-0x8a73a7f] ===
 8a73956:	55                   	push   %ebp
 8a73957:	89 e5                	mov    %esp,%ebp
 8a73959:	57                   	push   %edi
 8a7395a:	56                   	push   %esi
 8a7395b:	53                   	push   %ebx
 8a7395c:	83 ec 4c             	sub    $0x4c,%esp
 8a7395f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8a73962:	8b 45 18             	mov    0x18(%ebp),%eax
 8a73965:	88 45 c4             	mov    %al,-0x3c(%ebp)
 8a73968:	89 d8                	mov    %ebx,%eax
 8a7396a:	89 04 24             	mov    %eax,(%esp)
 8a7396d:	e8 5e 2c c9 ff       	call   87065d0 <_ZNSsC1Ev>
 8a73972:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a73975:	05 a8 01 00 00       	add    $0x1a8,%eax
 8a7397a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a7397d:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 8a73981:	74 0b                	je     8a7398e <_ZN18RandomOptionScript9getPrefixEiib+0x38>
 8a73983:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a73986:	05 c0 01 00 00       	add    $0x1c0,%eax
 8a7398b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8a7398e:	8b 45 14             	mov    0x14(%ebp),%eax
 8a73991:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a73995:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a73998:	89 04 24             	mov    %eax,(%esp)
 8a7399b:	e8 e0 00 00 00       	call   8a73a80 <_ZN18RandomOptionScript14getPrefixGradeEi>
 8a739a0:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8a739a3:	80 7d c4 00          	cmpb   $0x0,-0x3c(%ebp)
 8a739a7:	74 04                	je     8a739ad <_ZN18RandomOptionScript9getPrefixEiib+0x57>
 8a739a9:	83 45 dc 03          	addl   $0x3,-0x24(%ebp)
 8a739ad:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a739b0:	8d 55 10             	lea    0x10(%ebp),%edx
 8a739b3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8a739b7:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a739ba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a739be:	89 04 24             	mov    %eax,(%esp)
 8a739c1:	e8 8e 14 00 00       	call   8a74e54 <_ZNSt3mapIiSt6vectorISsSaISsEESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 8a739c6:	83 ec 04             	sub    $0x4,%esp
 8a739c9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a739cc:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a739cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a739d3:	89 04 24             	mov    %eax,(%esp)
 8a739d6:	e8 a5 14 00 00       	call   8a74e80 <_ZNSt3mapIiSt6vectorISsSaISsEESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 8a739db:	83 ec 04             	sub    $0x4,%esp
 8a739de:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8a739e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a739e5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a739e8:	89 04 24             	mov    %eax,(%esp)
 8a739eb:	e8 b6 14 00 00       	call   8a74ea6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorISsSaISsEEEEneERKS6_>
 8a739f0:	84 c0                	test   %al,%al
 8a739f2:	74 7a                	je     8a73a6e <_ZN18RandomOptionScript9getPrefixEiib+0x118>
 8a739f4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8a739f7:	89 04 24             	mov    %eax,(%esp)
 8a739fa:	e8 bb 14 00 00       	call   8a74eba <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSt6vectorISsSaISsEEEEptEv>
 8a739ff:	83 c0 04             	add    $0x4,%eax
 8a73a02:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8a73a05:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a73a0c:	eb 2f                	jmp    8a73a3d <_ZN18RandomOptionScript9getPrefixEiib+0xe7>
 8a73a0e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8a73a11:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8a73a14:	75 23                	jne    8a73a39 <_ZN18RandomOptionScript9getPrefixEiib+0xe3>
 8a73a16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a73a19:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a73a1d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a73a20:	89 04 24             	mov    %eax,(%esp)
 8a73a23:	e8 a6 40 7c ff       	call   8237ace <_ZNSt6vectorISsSaISsEEixEj>
 8a73a28:	89 da                	mov    %ebx,%edx
 8a73a2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a73a2e:	89 14 24             	mov    %edx,(%esp)
 8a73a31:	e8 ca 42 c9 ff       	call   8707d00 <_ZNSsaSERKSs>
 8a73a36:	90                   	nop
 8a73a37:	eb 36                	jmp    8a73a6f <_ZN18RandomOptionScript9getPrefixEiib+0x119>
 8a73a39:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8a73a3d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a73a40:	89 04 24             	mov    %eax,(%esp)
 8a73a43:	e8 48 40 7c ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 8a73a48:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8a73a4b:	0f 97 c0             	seta   %al
 8a73a4e:	84 c0                	test   %al,%al
 8a73a50:	75 bc                	jne    8a73a0e <_ZN18RandomOptionScript9getPrefixEiib+0xb8>
 8a73a52:	eb 1b                	jmp    8a73a6f <_ZN18RandomOptionScript9getPrefixEiib+0x119>
 8a73a54:	89 d6                	mov    %edx,%esi
 8a73a56:	89 c7                	mov    %eax,%edi
 8a73a58:	89 d8                	mov    %ebx,%eax
 8a73a5a:	89 04 24             	mov    %eax,(%esp)
 8a73a5d:	e8 7e 41 c9 ff       	call   8707be0 <_ZNSsD1Ev>
 8a73a62:	89 f8                	mov    %edi,%eax
 8a73a64:	89 f2                	mov    %esi,%edx
 8a73a66:	89 04 24             	mov    %eax,(%esp)
 8a73a69:	e8 e2 fc 06 00       	call   8ae3750 <_Unwind_Resume>
 8a73a6e:	90                   	nop
 8a73a6f:	89 d8                	mov    %ebx,%eax
 8a73a71:	89 d8                	mov    %ebx,%eax
 8a73a73:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8a73a76:	83 c4 00             	add    $0x0,%esp
 8a73a79:	5b                   	pop    %ebx
 8a73a7a:	5e                   	pop    %esi
 8a73a7b:	5f                   	pop    %edi
 8a73a7c:	5d                   	pop    %ebp
 8a73a7d:	c2 04 00             	ret    $0x4

```

```c
// RandomOptionScript::getPrefix @ 0x8a73956

/* RandomOptionScript::getPrefix(int, int, bool) */

int RandomOptionScript::getPrefix(int param_1,int param_2,bool param_3)

{
  char cVar1;
  int iVar2;
  string *psVar3;
  uint uVar4;
  int in_stack_00000010;
  char in_stack_00000014;
  _Rb_tree_iterator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>
  local_34 [4];
  map<int,std::vector<std::string,std::allocator<std::string>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>>
  local_30 [4];
  int local_2c;
  uint local_28;
  vector<std::string,std::allocator<std::string>> *local_24;
  uint local_20;
  
  std::string::string((string *)param_1);
  local_2c = param_2 + 0x1a8;
  if (in_stack_00000014 != '\0') {
    local_2c = param_2 + 0x1c0;
  }
                    /* try { // try from 08a7399b to 08a73a35 has its CatchHandler @ 08a73a54 */
  local_28 = getPrefixGrade((RandomOptionScript *)param_2,in_stack_00000010);
  if (in_stack_00000014 != '\0') {
    local_28 = local_28 + 3;
  }
  std::
  map<int,std::vector<std::string,std::allocator<std::string>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::find((int *)local_34);
  std::
  map<int,std::vector<std::string,std::allocator<std::string>>,std::less<int>,std::allocator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>>
  ::end(local_30);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>
          ::operator!=(local_34,(_Rb_tree_iterator *)local_30);
  if (cVar1 != '\0') {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<int_const,std::vector<std::string,std::allocator<std::string>>>>
            ::operator->(local_34);
    local_24 = (vector<std::string,std::allocator<std::string>> *)(iVar2 + 4);
    local_20 = 0;
    while (uVar4 = std::vector<std::string,std::allocator<std::string>>::size(local_24),
          local_20 < uVar4) {
      if (local_28 == local_20) {
        psVar3 = (string *)
                 std::vector<std::string,std::allocator<std::string>>::operator[](local_24,local_20)
        ;
        std::string::operator=((string *)param_1,psVar3);
        return param_1;
      }
      local_20 = local_20 + 1;
    }
  }
  return param_1;
}

```

---

## getPrefixGrade

```asm
// === 08a73a80 RandomOptionScript::getPrefixGrade  [0x08a73a80-0x8a73b1e] ===
 8a73a80:	55                   	push   %ebp
 8a73a81:	89 e5                	mov    %esp,%ebp
 8a73a83:	83 ec 28             	sub    $0x28,%esp
 8a73a86:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8a73a8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a73a90:	05 d8 01 00 00       	add    $0x1d8,%eax
 8a73a95:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8a73a98:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8a73a9f:	eb 64                	jmp    8a73b05 <_ZN18RandomOptionScript14getPrefixGradeEi+0x85>
 8a73aa1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a73aa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a73aa8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a73aab:	89 04 24             	mov    %eax,(%esp)
 8a73aae:	e8 37 14 00 00       	call   8a74eea <_ZNSt6vectorI12ChoosePrefixSaIS0_EEixEj>
 8a73ab3:	8b 00                	mov    (%eax),%eax
 8a73ab5:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a73ab8:	7f 21                	jg     8a73adb <_ZN18RandomOptionScript14getPrefixGradeEi+0x5b>
 8a73aba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a73abd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a73ac1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a73ac4:	89 04 24             	mov    %eax,(%esp)
 8a73ac7:	e8 1e 14 00 00       	call   8a74eea <_ZNSt6vectorI12ChoosePrefixSaIS0_EEixEj>
 8a73acc:	8b 40 04             	mov    0x4(%eax),%eax
 8a73acf:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8a73ad2:	7e 07                	jle    8a73adb <_ZN18RandomOptionScript14getPrefixGradeEi+0x5b>
 8a73ad4:	b8 01 00 00 00       	mov    $0x1,%eax
 8a73ad9:	eb 05                	jmp    8a73ae0 <_ZN18RandomOptionScript14getPrefixGradeEi+0x60>
 8a73adb:	b8 00 00 00 00       	mov    $0x0,%eax
 8a73ae0:	84 c0                	test   %al,%al
 8a73ae2:	74 1d                	je     8a73b01 <_ZN18RandomOptionScript14getPrefixGradeEi+0x81>
 8a73ae4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8a73ae7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a73aeb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a73aee:	89 04 24             	mov    %eax,(%esp)
 8a73af1:	e8 f4 13 00 00       	call   8a74eea <_ZNSt6vectorI12ChoosePrefixSaIS0_EEixEj>
 8a73af6:	8b 40 08             	mov    0x8(%eax),%eax
 8a73af9:	83 e8 01             	sub    $0x1,%eax
 8a73afc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8a73aff:	eb 19                	jmp    8a73b1a <_ZN18RandomOptionScript14getPrefixGradeEi+0x9a>
 8a73b01:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8a73b05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8a73b08:	89 04 24             	mov    %eax,(%esp)
 8a73b0b:	e8 b8 13 00 00       	call   8a74ec8 <_ZNKSt6vectorI12ChoosePrefixSaIS0_EE4sizeEv>
 8a73b10:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8a73b13:	0f 97 c0             	seta   %al
 8a73b16:	84 c0                	test   %al,%al
 8a73b18:	75 87                	jne    8a73aa1 <_ZN18RandomOptionScript14getPrefixGradeEi+0x21>
 8a73b1a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8a73b1d:	c9                   	leave
 8a73b1e:	c3                   	ret

```

```c
// RandomOptionScript::getPrefixGrade @ 0x8a73a80

/* RandomOptionScript::getPrefixGrade(int) */

int __thiscall RandomOptionScript::getPrefixGrade(RandomOptionScript *this,int param_1)

{
  bool bVar1;
  vector<ChoosePrefix,std::allocator<ChoosePrefix>> *this_00;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint local_10;
  
  this_00 = (vector<ChoosePrefix,std::allocator<ChoosePrefix>> *)(this + 0x1d8);
  local_10 = 0;
  while( true ) {
    uVar4 = std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::size(this_00);
    if (uVar4 <= local_10) {
      return 0;
    }
    piVar2 = (int *)std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::operator[]
                              (this_00,local_10);
    if ((param_1 < *piVar2) ||
       (iVar3 = std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::operator[](this_00,local_10)
       , *(int *)(iVar3 + 4) <= param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    local_10 = local_10 + 1;
  }
  iVar3 = std::vector<ChoosePrefix,std::allocator<ChoosePrefix>>::operator[](this_00,local_10);
  return *(int *)(iVar3 + 8) + -1;
}

```

