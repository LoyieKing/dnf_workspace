# ComboSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## ComboSkill

```asm
// === 080e9b0e ComboSkill::ComboSkill  [0x080e9b0e-0x80e9d25] ===
 80e9b0e:	55                   	push   %ebp
 80e9b0f:	89 e5                	mov    %esp,%ebp
 80e9b11:	56                   	push   %esi
 80e9b12:	53                   	push   %ebx
 80e9b13:	83 c4 80             	add    $0xffffff80,%esp
 80e9b16:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9b19:	89 04 24             	mov    %eax,(%esp)
 80e9b1c:	e8 65 0a 00 00       	call   80ea586 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEEC1Ev>
 80e9b21:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9b24:	83 c0 15             	add    $0x15,%eax
 80e9b27:	89 04 24             	mov    %eax,(%esp)
 80e9b2a:	e8 57 0a 00 00       	call   80ea586 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEEC1Ev>
 80e9b2f:	e8 67 26 fe ff       	call   80cc19b <_Z14G_CDataManagerv>
 80e9b34:	8b 40 14             	mov    0x14(%eax),%eax
 80e9b37:	05 fc 48 00 00       	add    $0x48fc,%eax
 80e9b3c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e9b3f:	8d 45 94             	lea    -0x6c(%ebp),%eax
 80e9b42:	89 04 24             	mov    %eax,(%esp)
 80e9b45:	e8 62 46 fa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 80e9b4a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e9b51:	00 
 80e9b52:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 80e9b59:	00 
 80e9b5a:	8d 45 94             	lea    -0x6c(%ebp),%eax
 80e9b5d:	89 04 24             	mov    %eax,(%esp)
 80e9b60:	e8 c5 5d ff ff       	call   80df92a <_ZNSt6vectorIiSaIiEE6resizeEji>
 80e9b65:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e9b6c:	e9 44 01 00 00       	jmp    80e9cb5 <_ZN10ComboSkillC1Ev+0x1a7>
 80e9b71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e9b74:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9b78:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e9b7b:	89 04 24             	mov    %eax,(%esp)
 80e9b7e:	e8 21 0d 00 00       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 80e9b83:	89 c2                	mov    %eax,%edx
 80e9b85:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e9b88:	8d 4d 94             	lea    -0x6c(%ebp),%ecx
 80e9b8b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e9b8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9b93:	89 04 24             	mov    %eax,(%esp)
 80e9b96:	e8 1b 0d 00 00       	call   80ea8b6 <_ZSt9make_pairIRiRSt6vectorIiSaIiEEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 80e9b9b:	83 ec 04             	sub    $0x4,%esp
 80e9b9e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e9ba1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9ba5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80e9ba8:	89 04 24             	mov    %eax,(%esp)
 80e9bab:	e8 4a 0d 00 00       	call   80ea8fa <_ZNSt4pairIKsSt6vectorIiSaIiEEEC1IiS3_EEOS_IT_T0_E>
 80e9bb0:	8b 55 08             	mov    0x8(%ebp),%edx
 80e9bb3:	8d 45 a0             	lea    -0x60(%ebp),%eax
 80e9bb6:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 80e9bb9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e9bbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9bc1:	89 04 24             	mov    %eax,(%esp)
 80e9bc4:	e8 6f 0d 00 00       	call   80ea938 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE6insertERKS7_>
 80e9bc9:	83 ec 04             	sub    $0x4,%esp
 80e9bcc:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80e9bcf:	89 04 24             	mov    %eax,(%esp)
 80e9bd2:	e8 75 08 00 00       	call   80ea44c <_ZNSt4pairIKsSt6vectorIiSaIiEEED1Ev>
 80e9bd7:	eb 2d                	jmp    80e9c06 <_ZN10ComboSkillC1Ev+0xf8>
 80e9bd9:	89 d3                	mov    %edx,%ebx
 80e9bdb:	89 c6                	mov    %eax,%esi
 80e9bdd:	8d 45 a8             	lea    -0x58(%ebp),%eax
 80e9be0:	89 04 24             	mov    %eax,(%esp)
 80e9be3:	e8 64 08 00 00       	call   80ea44c <_ZNSt4pairIKsSt6vectorIiSaIiEEED1Ev>
 80e9be8:	89 f0                	mov    %esi,%eax
 80e9bea:	89 da                	mov    %ebx,%edx
 80e9bec:	eb 00                	jmp    80e9bee <_ZN10ComboSkillC1Ev+0xe0>
 80e9bee:	89 d3                	mov    %edx,%ebx
 80e9bf0:	89 c6                	mov    %eax,%esi
 80e9bf2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e9bf5:	89 04 24             	mov    %eax,(%esp)
 80e9bf8:	e8 39 08 00 00       	call   80ea436 <_ZNSt4pairIiSt6vectorIiSaIiEEED1Ev>
 80e9bfd:	89 f0                	mov    %esi,%eax
 80e9bff:	89 da                	mov    %ebx,%edx
 80e9c01:	e9 c0 00 00 00       	jmp    80e9cc6 <_ZN10ComboSkillC1Ev+0x1b8>
 80e9c06:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80e9c09:	89 04 24             	mov    %eax,(%esp)
 80e9c0c:	e8 25 08 00 00       	call   80ea436 <_ZNSt4pairIiSt6vectorIiSaIiEEED1Ev>
 80e9c11:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e9c14:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9c18:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e9c1b:	89 04 24             	mov    %eax,(%esp)
 80e9c1e:	e8 81 0c 00 00       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 80e9c23:	89 c2                	mov    %eax,%edx
 80e9c25:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e9c28:	8d 4d 94             	lea    -0x6c(%ebp),%ecx
 80e9c2b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80e9c2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9c33:	89 04 24             	mov    %eax,(%esp)
 80e9c36:	e8 7b 0c 00 00       	call   80ea8b6 <_ZSt9make_pairIRiRSt6vectorIiSaIiEEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 80e9c3b:	83 ec 04             	sub    $0x4,%esp
 80e9c3e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e9c41:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9c45:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e9c48:	89 04 24             	mov    %eax,(%esp)
 80e9c4b:	e8 aa 0c 00 00       	call   80ea8fa <_ZNSt4pairIKsSt6vectorIiSaIiEEEC1IiS3_EEOS_IT_T0_E>
 80e9c50:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9c53:	8d 48 15             	lea    0x15(%eax),%ecx
 80e9c56:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80e9c59:	8d 55 d0             	lea    -0x30(%ebp),%edx
 80e9c5c:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e9c60:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80e9c64:	89 04 24             	mov    %eax,(%esp)
 80e9c67:	e8 cc 0c 00 00       	call   80ea938 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE6insertERKS7_>
 80e9c6c:	83 ec 04             	sub    $0x4,%esp
 80e9c6f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e9c72:	89 04 24             	mov    %eax,(%esp)
 80e9c75:	e8 d2 07 00 00       	call   80ea44c <_ZNSt4pairIKsSt6vectorIiSaIiEEED1Ev>
 80e9c7a:	eb 2a                	jmp    80e9ca6 <_ZN10ComboSkillC1Ev+0x198>
 80e9c7c:	89 d3                	mov    %edx,%ebx
 80e9c7e:	89 c6                	mov    %eax,%esi
 80e9c80:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80e9c83:	89 04 24             	mov    %eax,(%esp)
 80e9c86:	e8 c1 07 00 00       	call   80ea44c <_ZNSt4pairIKsSt6vectorIiSaIiEEED1Ev>
 80e9c8b:	89 f0                	mov    %esi,%eax
 80e9c8d:	89 da                	mov    %ebx,%edx
 80e9c8f:	eb 00                	jmp    80e9c91 <_ZN10ComboSkillC1Ev+0x183>
 80e9c91:	89 d3                	mov    %edx,%ebx
 80e9c93:	89 c6                	mov    %eax,%esi
 80e9c95:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e9c98:	89 04 24             	mov    %eax,(%esp)
 80e9c9b:	e8 96 07 00 00       	call   80ea436 <_ZNSt4pairIiSt6vectorIiSaIiEEED1Ev>
 80e9ca0:	89 f0                	mov    %esi,%eax
 80e9ca2:	89 da                	mov    %ebx,%edx
 80e9ca4:	eb 20                	jmp    80e9cc6 <_ZN10ComboSkillC1Ev+0x1b8>
 80e9ca6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e9ca9:	89 04 24             	mov    %eax,(%esp)
 80e9cac:	e8 85 07 00 00       	call   80ea436 <_ZNSt4pairIiSt6vectorIiSaIiEEED1Ev>
 80e9cb1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e9cb5:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80e9cb9:	0f 9e c0             	setle  %al
 80e9cbc:	84 c0                	test   %al,%al
 80e9cbe:	0f 85 ad fe ff ff    	jne    80e9b71 <_ZN10ComboSkillC1Ev+0x63>
 80e9cc4:	eb 15                	jmp    80e9cdb <_ZN10ComboSkillC1Ev+0x1cd>
 80e9cc6:	89 d3                	mov    %edx,%ebx
 80e9cc8:	89 c6                	mov    %eax,%esi
 80e9cca:	8d 45 94             	lea    -0x6c(%ebp),%eax
 80e9ccd:	89 04 24             	mov    %eax,(%esp)
 80e9cd0:	e8 05 a1 f9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80e9cd5:	89 f0                	mov    %esi,%eax
 80e9cd7:	89 da                	mov    %ebx,%edx
 80e9cd9:	eb 0d                	jmp    80e9ce8 <_ZN10ComboSkillC1Ev+0x1da>
 80e9cdb:	8d 45 94             	lea    -0x6c(%ebp),%eax
 80e9cde:	89 04 24             	mov    %eax,(%esp)
 80e9ce1:	e8 f4 a0 f9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80e9ce6:	eb 33                	jmp    80e9d1b <_ZN10ComboSkillC1Ev+0x20d>
 80e9ce8:	89 d3                	mov    %edx,%ebx
 80e9cea:	89 c6                	mov    %eax,%esi
 80e9cec:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9cef:	83 c0 15             	add    $0x15,%eax
 80e9cf2:	89 04 24             	mov    %eax,(%esp)
 80e9cf5:	e8 ea 06 00 00       	call   80ea3e4 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEED1Ev>
 80e9cfa:	89 f0                	mov    %esi,%eax
 80e9cfc:	89 da                	mov    %ebx,%edx
 80e9cfe:	eb 00                	jmp    80e9d00 <_ZN10ComboSkillC1Ev+0x1f2>
 80e9d00:	89 d3                	mov    %edx,%ebx
 80e9d02:	89 c6                	mov    %eax,%esi
 80e9d04:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9d07:	89 04 24             	mov    %eax,(%esp)
 80e9d0a:	e8 d5 06 00 00       	call   80ea3e4 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEED1Ev>
 80e9d0f:	89 f0                	mov    %esi,%eax
 80e9d11:	89 da                	mov    %ebx,%edx
 80e9d13:	89 04 24             	mov    %eax,(%esp)
 80e9d16:	e8 35 9a 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e9d1b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80e9d1e:	83 c4 00             	add    $0x0,%esp
 80e9d21:	5b                   	pop    %ebx
 80e9d22:	5e                   	pop    %esi
 80e9d23:	5d                   	pop    %ebp
 80e9d24:	c3                   	ret
 80e9d25:	90                   	nop

```

```c
// ComboSkill::ComboSkill @ 0x80e9b0e

/* ComboSkill::ComboSkill() */

void __thiscall ComboSkill::ComboSkill(ComboSkill *this)

{
  int iVar1;
  vector *pvVar2;
  vector<int,std::allocator<int>> local_70 [12];
  pair local_64 [8];
  pair<short_const,std::vector<int,std::allocator<int>>> local_5c [16];
  pair<int,std::vector<int,std::allocator<int>>> local_4c [16];
  pair local_3c [8];
  pair<short_const,std::vector<int,std::allocator<int>>> local_34 [16];
  pair<int,std::vector<int,std::allocator<int>>> local_24 [16];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *local_14;
  uint local_10;
  
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
         *)this);
                    /* try { // try from 080e9b2a to 080e9b2e has its CatchHandler @ 080e9d00 */
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
         *)(this + 0x15));
                    /* try { // try from 080e9b2f to 080e9b49 has its CatchHandler @ 080e9ce8 */
  iVar1 = G_CDataManager();
  local_14 = (vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
             (*(int *)(iVar1 + 0x14) + 0x48fc);
  std::vector<int,std::allocator<int>>::vector(local_70);
                    /* try { // try from 080e9b60 to 080e9b9a has its CatchHandler @ 080e9cc6 */
  std::vector<int,std::allocator<int>>::resize((uint)local_70,6);
  for (local_10 = 0; (int)local_10 < 6; local_10 = local_10 + 1) {
    pvVar2 = (vector *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       (local_14,local_10);
    std::make_pair<int&,std::vector<int,std::allocator<int>>&>((int *)local_4c,pvVar2);
                    /* try { // try from 080e9bab to 080e9baf has its CatchHandler @ 080e9bee */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::
    pair<int,std::vector<int,std::allocator<int>>>(local_5c,local_4c);
                    /* try { // try from 080e9bc4 to 080e9bc8 has its CatchHandler @ 080e9bd9 */
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::insert(local_64);
                    /* try { // try from 080e9bd2 to 080e9bd6 has its CatchHandler @ 080e9bee */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::~pair(local_5c);
                    /* try { // try from 080e9c0c to 080e9c3a has its CatchHandler @ 080e9cc6 */
    std::pair<int,std::vector<int,std::allocator<int>>>::~pair(local_4c);
    pvVar2 = (vector *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       (local_14,local_10);
    std::make_pair<int&,std::vector<int,std::allocator<int>>&>((int *)local_24,pvVar2);
                    /* try { // try from 080e9c4b to 080e9c4f has its CatchHandler @ 080e9c91 */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::
    pair<int,std::vector<int,std::allocator<int>>>(local_34,local_24);
                    /* try { // try from 080e9c67 to 080e9c6b has its CatchHandler @ 080e9c7c */
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::insert(local_3c);
                    /* try { // try from 080e9c75 to 080e9c79 has its CatchHandler @ 080e9c91 */
    std::pair<short_const,std::vector<int,std::allocator<int>>>::~pair(local_34);
                    /* try { // try from 080e9cac to 080e9cb0 has its CatchHandler @ 080e9cc6 */
    std::pair<int,std::vector<int,std::allocator<int>>>::~pair(local_24);
  }
                    /* try { // try from 080e9ce1 to 080e9ce5 has its CatchHandler @ 080e9ce8 */
  std::vector<int,std::allocator<int>>::~vector(local_70);
  return;
}

```

---

## convertComboSkillArray

```asm
// === 080e9986 ComboSkill::convertComboSkillArray  [0x080e9986-0x80e9b0d] ===
 80e9986:	55                   	push   %ebp
 80e9987:	89 e5                	mov    %esp,%ebp
 80e9989:	56                   	push   %esi
 80e998a:	53                   	push   %ebx
 80e998b:	83 ec 40             	sub    $0x40,%esp
 80e998e:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80e9992:	0f 84 6b 01 00 00    	je     80e9b03 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x17d>
 80e9998:	8b 45 14             	mov    0x14(%ebp),%eax
 80e999b:	85 c0                	test   %eax,%eax
 80e999d:	74 40                	je     80e99df <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x59>
 80e999f:	8b 45 14             	mov    0x14(%ebp),%eax
 80e99a2:	83 f8 01             	cmp    $0x1,%eax
 80e99a5:	74 38                	je     80e99df <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x59>
 80e99a7:	8b 45 14             	mov    0x14(%ebp),%eax
 80e99aa:	89 44 24 14          	mov    %eax,0x14(%esp)
 80e99ae:	c7 44 24 10 f0 15 b3 	movl   $0x8b315f0,0x10(%esp)
 80e99b5:	08 
 80e99b6:	c7 44 24 0c 4b 00 00 	movl   $0x4b,0xc(%esp)
 80e99bd:	00 
 80e99be:	c7 44 24 08 e0 23 b3 	movl   $0x8b323e0,0x8(%esp)
 80e99c5:	08 
 80e99c6:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80e99cd:	08 
 80e99ce:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80e99d5:	e8 30 a2 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80e99da:	e9 25 01 00 00       	jmp    80e9b04 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x17e>
 80e99df:	8b 45 14             	mov    0x14(%ebp),%eax
 80e99e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e99e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80e99e9:	89 04 24             	mov    %eax,(%esp)
 80e99ec:	e8 07 0a 00 00       	call   80ea3f8 <_ZNK10ComboSkill16getComboSkillMapE20ENUM_SKILL_TREE_KIND>
 80e99f1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e99f4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e99f7:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80e99fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e99fe:	89 04 24             	mov    %eax,(%esp)
 80e9a01:	e8 12 0e 00 00       	call   80ea818 <_ZNKSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5beginEv>
 80e9a06:	83 ec 04             	sub    $0x4,%esp
 80e9a09:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80e9a10:	e9 b3 00 00 00       	jmp    80e9ac8 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x142>
 80e9a15:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e9a18:	01 c0                	add    %eax,%eax
 80e9a1a:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 80e9a21:	89 d1                	mov    %edx,%ecx
 80e9a23:	29 c1                	sub    %eax,%ecx
 80e9a25:	89 c8                	mov    %ecx,%eax
 80e9a27:	89 c3                	mov    %eax,%ebx
 80e9a29:	03 5d 10             	add    0x10(%ebp),%ebx
 80e9a2c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9a2f:	89 04 24             	mov    %eax,(%esp)
 80e9a32:	e8 41 0e 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9a37:	0f b7 00             	movzwl (%eax),%eax
 80e9a3a:	66 89 03             	mov    %ax,(%ebx)
 80e9a3d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e9a44:	eb 42                	jmp    80e9a88 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x102>
 80e9a46:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e9a49:	01 c0                	add    %eax,%eax
 80e9a4b:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 80e9a52:	89 d1                	mov    %edx,%ecx
 80e9a54:	29 c1                	sub    %eax,%ecx
 80e9a56:	89 c8                	mov    %ecx,%eax
 80e9a58:	89 c3                	mov    %eax,%ebx
 80e9a5a:	03 5d 10             	add    0x10(%ebp),%ebx
 80e9a5d:	8b 75 f4             	mov    -0xc(%ebp),%esi
 80e9a60:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9a63:	89 04 24             	mov    %eax,(%esp)
 80e9a66:	e8 0d 0e 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9a6b:	8d 50 04             	lea    0x4(%eax),%edx
 80e9a6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e9a71:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9a75:	89 14 24             	mov    %edx,(%esp)
 80e9a78:	e8 f7 0a 00 00       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 80e9a7d:	8b 00                	mov    (%eax),%eax
 80e9a7f:	66 89 44 73 02       	mov    %ax,0x2(%ebx,%esi,2)
 80e9a84:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e9a88:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9a8b:	89 04 24             	mov    %eax,(%esp)
 80e9a8e:	e8 e5 0d 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9a93:	83 c0 04             	add    $0x4,%eax
 80e9a96:	89 04 24             	mov    %eax,(%esp)
 80e9a99:	e8 22 47 fa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80e9a9e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e9aa1:	76 0d                	jbe    80e9ab0 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x12a>
 80e9aa3:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80e9aa7:	77 07                	ja     80e9ab0 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x12a>
 80e9aa9:	b8 01 00 00 00       	mov    $0x1,%eax
 80e9aae:	eb 05                	jmp    80e9ab5 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x12f>
 80e9ab0:	b8 00 00 00 00       	mov    $0x0,%eax
 80e9ab5:	84 c0                	test   %al,%al
 80e9ab7:	75 8d                	jne    80e9a46 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0xc0>
 80e9ab9:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80e9abd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9ac0:	89 04 24             	mov    %eax,(%esp)
 80e9ac3:	e8 be 0d 00 00       	call   80ea886 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEppEv>
 80e9ac8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9acb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80e9ace:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9ad2:	89 04 24             	mov    %eax,(%esp)
 80e9ad5:	e8 64 0d 00 00       	call   80ea83e <_ZNKSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80e9ada:	83 ec 04             	sub    $0x4,%esp
 80e9add:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9ae0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9ae4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9ae7:	89 04 24             	mov    %eax,(%esp)
 80e9aea:	e8 75 0d 00 00       	call   80ea864 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEneERKS6_>
 80e9aef:	84 c0                	test   %al,%al
 80e9af1:	0f 85 1e ff ff ff    	jne    80e9a15 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x8f>
 80e9af7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e9afa:	89 c2                	mov    %eax,%edx
 80e9afc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9aff:	88 10                	mov    %dl,(%eax)
 80e9b01:	eb 01                	jmp    80e9b04 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x17e>
 80e9b03:	90                   	nop
 80e9b04:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80e9b07:	83 c4 00             	add    $0x0,%esp
 80e9b0a:	5b                   	pop    %ebx
 80e9b0b:	5e                   	pop    %esi
 80e9b0c:	5d                   	pop    %ebp
 80e9b0d:	c3                   	ret

```

```c
// ComboSkill::convertComboSkillArray @ 0x80e9986

/* ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const
    */

void __thiscall
ComboSkill::convertComboSkillArray(ComboSkill *this,undefined1 *param_1,int param_2,int param_4)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_20 [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  if (param_2 != 0) {
    if ((param_4 == 0) || (param_4 == 1)) {
      local_18 = getComboSkillMap(this,param_4);
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::begin(local_20);
      local_14 = 0;
      while( true ) {
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end(local_1c);
        cVar3 = std::
                _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator!=((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_20,(_Rb_tree_const_iterator *)local_1c);
        if (cVar3 == '\0') break;
        iVar7 = local_14 * 0xe;
        puVar4 = (undefined2 *)
                 std::
                 _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                 ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                               *)local_20);
        *(undefined2 *)(iVar7 + param_2) = *puVar4;
        local_10 = 0;
        while( true ) {
          iVar7 = std::
                  _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_20);
          uVar8 = std::vector<int,std::allocator<int>>::size
                            ((vector<int,std::allocator<int>> *)(iVar7 + 4));
          uVar2 = local_10;
          if ((local_10 < uVar8) && (local_10 < 6)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
          iVar7 = local_14 * 0xe;
          iVar5 = std::
                  _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_20);
          puVar6 = (undefined4 *)
                   std::vector<int,std::allocator<int>>::operator[]
                             ((vector<int,std::allocator<int>> *)(iVar5 + 4),local_10);
          *(short *)(iVar7 + param_2 + 2 + uVar2 * 2) = (short)*puVar6;
          local_10 = local_10 + 1;
        }
        local_14 = local_14 + 1;
        std::_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
        operator++((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                    *)local_20);
      }
      *param_1 = (char)local_14;
    }
    else {
      LogManager::logFormat
                (1,"ComboSkill.cpp",
                 "void ComboSkill::convertComboSkillArray(unsigned char&, comoboSkillData*, ENUM_SKILL_TREE_KIND) const"
                 ,0x4b,"ComboSkill::convertComboSkillArray kind(%d) error",param_4);
    }
  }
  return;
}

```

---

## convertComboSkillMap

```asm
// === 080e975a ComboSkill::convertComboSkillMap  [0x080e975a-0x80e9985] ===
 80e975a:	55                   	push   %ebp
 80e975b:	89 e5                	mov    %esp,%ebp
 80e975d:	56                   	push   %esi
 80e975e:	53                   	push   %ebx
 80e975f:	83 ec 60             	sub    $0x60,%esp
 80e9762:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9765:	88 45 c4             	mov    %al,-0x3c(%ebp)
 80e9768:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80e976c:	0f 84 09 02 00 00    	je     80e997b <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x221>
 80e9772:	80 7d c4 06          	cmpb   $0x6,-0x3c(%ebp)
 80e9776:	76 39                	jbe    80e97b1 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x57>
 80e9778:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 80e977c:	89 44 24 14          	mov    %eax,0x14(%esp)
 80e9780:	c7 44 24 10 94 15 b3 	movl   $0x8b31594,0x10(%esp)
 80e9787:	08 
 80e9788:	c7 44 24 0c 25 00 00 	movl   $0x25,0xc(%esp)
 80e978f:	00 
 80e9790:	c7 44 24 08 60 24 b3 	movl   $0x8b32460,0x8(%esp)
 80e9797:	08 
 80e9798:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80e979f:	08 
 80e97a0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80e97a7:	e8 5e a4 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80e97ac:	e9 cb 01 00 00       	jmp    80e997c <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x222>
 80e97b1:	8b 45 14             	mov    0x14(%ebp),%eax
 80e97b4:	85 c0                	test   %eax,%eax
 80e97b6:	74 40                	je     80e97f8 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x9e>
 80e97b8:	8b 45 14             	mov    0x14(%ebp),%eax
 80e97bb:	83 f8 01             	cmp    $0x1,%eax
 80e97be:	74 38                	je     80e97f8 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x9e>
 80e97c0:	8b 45 14             	mov    0x14(%ebp),%eax
 80e97c3:	89 44 24 14          	mov    %eax,0x14(%esp)
 80e97c7:	c7 44 24 10 c4 15 b3 	movl   $0x8b315c4,0x10(%esp)
 80e97ce:	08 
 80e97cf:	c7 44 24 0c 2b 00 00 	movl   $0x2b,0xc(%esp)
 80e97d6:	00 
 80e97d7:	c7 44 24 08 60 24 b3 	movl   $0x8b32460,0x8(%esp)
 80e97de:	08 
 80e97df:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80e97e6:	08 
 80e97e7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80e97ee:	e8 17 a4 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80e97f3:	e9 84 01 00 00       	jmp    80e997c <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x222>
 80e97f8:	8b 45 14             	mov    0x14(%ebp),%eax
 80e97fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e97ff:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9802:	89 04 24             	mov    %eax,(%esp)
 80e9805:	e8 12 0c 00 00       	call   80ea41c <_ZN10ComboSkill16getComboSkillMapE20ENUM_SKILL_TREE_KIND>
 80e980a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80e980d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e9810:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80e9813:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9817:	89 04 24             	mov    %eax,(%esp)
 80e981a:	e8 07 0e 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80e981f:	83 ec 04             	sub    $0x4,%esp
 80e9822:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e9825:	89 04 24             	mov    %eax,(%esp)
 80e9828:	e8 7f 49 fa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 80e982d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80e9834:	e9 f5 00 00 00       	jmp    80e992e <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1d4>
 80e9839:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e983c:	01 c0                	add    %eax,%eax
 80e983e:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 80e9845:	89 d1                	mov    %edx,%ecx
 80e9847:	29 c1                	sub    %eax,%ecx
 80e9849:	89 c8                	mov    %ecx,%eax
 80e984b:	03 45 10             	add    0x10(%ebp),%eax
 80e984e:	89 c2                	mov    %eax,%edx
 80e9850:	8d 45 c0             	lea    -0x40(%ebp),%eax
 80e9853:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e9857:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80e985a:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e985e:	89 04 24             	mov    %eax,(%esp)
 80e9861:	e8 26 0e 00 00       	call   80ea68c <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE4findERS6_>
 80e9866:	83 ec 04             	sub    $0x4,%esp
 80e9869:	8b 45 c0             	mov    -0x40(%ebp),%eax
 80e986c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80e986f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9872:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80e9875:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9879:	89 04 24             	mov    %eax,(%esp)
 80e987c:	e8 a5 0d 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80e9881:	83 ec 04             	sub    $0x4,%esp
 80e9884:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80e9887:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e988b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80e988e:	89 04 24             	mov    %eax,(%esp)
 80e9891:	e8 22 0e 00 00       	call   80ea6b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEeqERKS6_>
 80e9896:	84 c0                	test   %al,%al
 80e9898:	0f 85 8b 00 00 00    	jne    80e9929 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1cf>
 80e989e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e98a1:	89 04 24             	mov    %eax,(%esp)
 80e98a4:	e8 c5 d2 fa ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 80e98a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e98b0:	eb 37                	jmp    80e98e9 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x18f>
 80e98b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e98b5:	01 c0                	add    %eax,%eax
 80e98b7:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 80e98be:	89 d1                	mov    %edx,%ecx
 80e98c0:	29 c1                	sub    %eax,%ecx
 80e98c2:	89 c8                	mov    %ecx,%eax
 80e98c4:	03 45 10             	add    0x10(%ebp),%eax
 80e98c7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80e98ca:	0f b7 44 50 02       	movzwl 0x2(%eax,%edx,2),%eax
 80e98cf:	98                   	cwtl
 80e98d0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80e98d3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e98d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e98da:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e98dd:	89 04 24             	mov    %eax,(%esp)
 80e98e0:	e8 09 49 fa ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80e98e5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e98e9:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80e98ed:	0f 9e c0             	setle  %al
 80e98f0:	84 c0                	test   %al,%al
 80e98f2:	75 be                	jne    80e98b2 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x158>
 80e98f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e98f7:	01 c0                	add    %eax,%eax
 80e98f9:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 80e9900:	89 d1                	mov    %edx,%ecx
 80e9902:	29 c1                	sub    %eax,%ecx
 80e9904:	89 c8                	mov    %ecx,%eax
 80e9906:	03 45 10             	add    0x10(%ebp),%eax
 80e9909:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e990d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80e9910:	89 04 24             	mov    %eax,(%esp)
 80e9913:	e8 b4 0d 00 00       	call   80ea6cc <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEEixERS6_>
 80e9918:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80e991b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e991f:	89 04 24             	mov    %eax,(%esp)
 80e9922:	e8 ab 36 fe ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 80e9927:	eb 01                	jmp    80e992a <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1d0>
 80e9929:	90                   	nop
 80e992a:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80e992e:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 80e9932:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80e9935:	7e 0d                	jle    80e9944 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1ea>
 80e9937:	83 7d f0 05          	cmpl   $0x5,-0x10(%ebp)
 80e993b:	7f 07                	jg     80e9944 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1ea>
 80e993d:	b8 01 00 00 00       	mov    $0x1,%eax
 80e9942:	eb 05                	jmp    80e9949 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1ef>
 80e9944:	b8 00 00 00 00       	mov    $0x0,%eax
 80e9949:	84 c0                	test   %al,%al
 80e994b:	0f 85 e8 fe ff ff    	jne    80e9839 <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0xdf>
 80e9951:	eb 1b                	jmp    80e996e <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x214>
 80e9953:	89 d3                	mov    %edx,%ebx
 80e9955:	89 c6                	mov    %eax,%esi
 80e9957:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e995a:	89 04 24             	mov    %eax,(%esp)
 80e995d:	e8 78 a4 f9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80e9962:	89 f0                	mov    %esi,%eax
 80e9964:	89 da                	mov    %ebx,%edx
 80e9966:	89 04 24             	mov    %eax,(%esp)
 80e9969:	e8 e2 9d 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e996e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80e9971:	89 04 24             	mov    %eax,(%esp)
 80e9974:	e8 61 a4 f9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80e9979:	eb 01                	jmp    80e997c <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND+0x222>
 80e997b:	90                   	nop
 80e997c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80e997f:	83 c4 00             	add    $0x0,%esp
 80e9982:	5b                   	pop    %ebx
 80e9983:	5e                   	pop    %esi
 80e9984:	5d                   	pop    %ebp
 80e9985:	c3                   	ret

```

```c
// ComboSkill::convertComboSkillMap @ 0x80e975a

/* ComboSkill::convertComboSkillMap(unsigned char, comoboSkillData const*, ENUM_SKILL_TREE_KIND) */

void __thiscall
ComboSkill::convertComboSkillMap(ComboSkill *this,byte param_1,int param_2,int param_4)

{
  bool bVar1;
  char cVar2;
  vector<int,std::allocator<int>> *this_00;
  undefined4 local_44;
  byte local_40;
  vector<int,std::allocator<int>> local_30 [12];
  undefined4 local_24;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_20 [4];
  int local_1c;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  *local_18;
  int local_14;
  int local_10;
  
  local_40 = param_1;
  if (param_2 != 0) {
    if (param_1 < 7) {
      if ((param_4 == 0) || (param_4 == 1)) {
        local_18 = (map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
                    *)getComboSkillMap(this,param_4);
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
               *)&local_24);
        std::vector<int,std::allocator<int>>::vector(local_30);
        local_14 = 0;
        while( true ) {
          if ((local_14 < (int)(uint)local_40) && (local_14 < 6)) {
            bVar1 = true;
          }
          else {
            bVar1 = false;
          }
          if (!bVar1) break;
                    /* try { // try from 080e9861 to 080e9926 has its CatchHandler @ 080e9953 */
          std::
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          ::find((short *)&local_44);
          local_24 = local_44;
          std::
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          ::end(local_20);
          cVar2 = std::
                  _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                  operator==((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)&local_24,(_Rb_tree_iterator *)local_20);
          if (cVar2 == '\0') {
            std::vector<int,std::allocator<int>>::clear(local_30);
            for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
              local_1c = (int)*(short *)(local_14 * 0xe + param_2 + 2 + local_10 * 2);
              std::vector<int,std::allocator<int>>::push_back(local_30,&local_1c);
            }
            this_00 = (vector<int,std::allocator<int>> *)
                      std::
                      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
                      ::operator[](local_18,(short *)(local_14 * 0xe + param_2));
            std::vector<int,std::allocator<int>>::operator=(this_00,(vector *)local_30);
          }
          local_14 = local_14 + 1;
        }
        std::vector<int,std::allocator<int>>::~vector(local_30);
      }
      else {
        LogManager::logFormat
                  (1,"ComboSkill.cpp",
                   "void ComboSkill::convertComboSkillMap(unsigned char, const comoboSkillData*, ENUM_SKILL_TREE_KIND)"
                   ,0x2b,"ComboSkill::setComboSkill kind(%d) error",param_4);
      }
    }
    else {
      LogManager::logFormat
                (1,"ComboSkill.cpp",
                 "void ComboSkill::convertComboSkillMap(unsigned char, const comoboSkillData*, ENUM_SKILL_TREE_KIND)"
                 ,0x25,"ComboSkill::setComboSkill count value(%d) error",(uint)param_1);
    }
  }
  return;
}

```

---

## eraseDuplicationComboSKill

```asm
// === 080ea206 ComboSkill::eraseDuplicationComboSKill  [0x080ea206-0x80ea386] ===
 80ea206:	55                   	push   %ebp
 80ea207:	89 e5                	mov    %esp,%ebp
 80ea209:	83 ec 48             	sub    $0x48,%esp
 80ea20c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea20f:	85 c0                	test   %eax,%eax
 80ea211:	74 40                	je     80ea253 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x4d>
 80ea213:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea216:	83 f8 01             	cmp    $0x1,%eax
 80ea219:	74 38                	je     80ea253 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x4d>
 80ea21b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea21e:	89 44 24 14          	mov    %eax,0x14(%esp)
 80ea222:	c7 44 24 10 58 16 b3 	movl   $0x8b31658,0x10(%esp)
 80ea229:	08 
 80ea22a:	c7 44 24 0c d4 00 00 	movl   $0xd4,0xc(%esp)
 80ea231:	00 
 80ea232:	c7 44 24 08 c0 22 b3 	movl   $0x8b322c0,0x8(%esp)
 80ea239:	08 
 80ea23a:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80ea241:	08 
 80ea242:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80ea249:	e8 bc 99 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80ea24e:	e9 32 01 00 00       	jmp    80ea385 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x17f>
 80ea253:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea256:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea25a:	8b 45 08             	mov    0x8(%ebp),%eax
 80ea25d:	89 04 24             	mov    %eax,(%esp)
 80ea260:	e8 b7 01 00 00       	call   80ea41c <_ZN10ComboSkill16getComboSkillMapE20ENUM_SKILL_TREE_KIND>
 80ea265:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80ea268:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea26b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ea26e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea272:	89 04 24             	mov    %eax,(%esp)
 80ea275:	e8 86 03 00 00       	call   80ea600 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5beginEv>
 80ea27a:	83 ec 04             	sub    $0x4,%esp
 80ea27d:	e9 d4 00 00 00       	jmp    80ea356 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x150>
 80ea282:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea285:	89 04 24             	mov    %eax,(%esp)
 80ea288:	e8 d3 03 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea28d:	8d 50 04             	lea    0x4(%eax),%edx
 80ea290:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ea293:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea297:	89 04 24             	mov    %eax,(%esp)
 80ea29a:	e8 a9 3f fa ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 80ea29f:	83 ec 04             	sub    $0x4,%esp
 80ea2a2:	eb 6d                	jmp    80ea311 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x10b>
 80ea2a4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ea2a7:	89 04 24             	mov    %eax,(%esp)
 80ea2aa:	e8 1d 45 fa ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 80ea2af:	8b 00                	mov    (%eax),%eax
 80ea2b1:	3b 45 10             	cmp    0x10(%ebp),%eax
 80ea2b4:	0f 94 c0             	sete   %al
 80ea2b7:	84 c0                	test   %al,%al
 80ea2b9:	74 4b                	je     80ea306 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x100>
 80ea2bb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea2be:	89 04 24             	mov    %eax,(%esp)
 80ea2c1:	e8 9a 03 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea2c6:	8d 48 04             	lea    0x4(%eax),%ecx
 80ea2c9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ea2cc:	8b 55 dc             	mov    -0x24(%ebp),%edx
 80ea2cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ea2d3:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80ea2d7:	89 04 24             	mov    %eax,(%esp)
 80ea2da:	e8 af 01 00 00       	call   80ea48e <_ZNSt6vectorIiSaIiEE5eraseEN9__gnu_cxx17__normal_iteratorIPiS1_EE>
 80ea2df:	83 ec 04             	sub    $0x4,%esp
 80ea2e2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80ea2e9:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea2ec:	89 04 24             	mov    %eax,(%esp)
 80ea2ef:	e8 6c 03 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea2f4:	8d 50 04             	lea    0x4(%eax),%edx
 80ea2f7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80ea2fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea2fe:	89 14 24             	mov    %edx,(%esp)
 80ea301:	e8 e8 3e fa ff       	call   808e1ee <_ZNSt6vectorIiSaIiEE9push_backEOi>
 80ea306:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ea309:	89 04 24             	mov    %eax,(%esp)
 80ea30c:	e8 7b 06 00 00       	call   80ea98c <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEv>
 80ea311:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea314:	89 04 24             	mov    %eax,(%esp)
 80ea317:	e8 44 03 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea31c:	8d 50 04             	lea    0x4(%eax),%edx
 80ea31f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ea322:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea326:	89 04 24             	mov    %eax,(%esp)
 80ea329:	e8 3e 3f fa ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 80ea32e:	83 ec 04             	sub    $0x4,%esp
 80ea331:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ea334:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea338:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80ea33b:	89 04 24             	mov    %eax,(%esp)
 80ea33e:	e8 1f 01 00 00       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 80ea343:	84 c0                	test   %al,%al
 80ea345:	0f 85 59 ff ff ff    	jne    80ea2a4 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x9e>
 80ea34b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea34e:	89 04 24             	mov    %eax,(%esp)
 80ea351:	e8 18 03 00 00       	call   80ea66e <_ZNSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEppEv>
 80ea356:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ea359:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80ea35c:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea360:	89 04 24             	mov    %eax,(%esp)
 80ea363:	e8 be 02 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80ea368:	83 ec 04             	sub    $0x4,%esp
 80ea36b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ea36e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea372:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea375:	89 04 24             	mov    %eax,(%esp)
 80ea378:	e8 cf 02 00 00       	call   80ea64c <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEneERKS6_>
 80ea37d:	84 c0                	test   %al,%al
 80ea37f:	0f 85 fd fe ff ff    	jne    80ea282 <_ZN10ComboSkill26eraseDuplicationComboSKillE20ENUM_SKILL_TREE_KINDi+0x7c>
 80ea385:	c9                   	leave
 80ea386:	c3                   	ret

```

```c
// ComboSkill::eraseDuplicationComboSKill @ 0x80ea206

/* ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int) */

void __thiscall ComboSkill::eraseDuplicationComboSKill(ComboSkill *this,int param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_28;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_24 [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  undefined4 local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    local_10 = getComboSkillMap(this,param_2);
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::begin(local_24);
    while( true ) {
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end(local_20);
      cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator!=((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_24,(_Rb_tree_iterator *)local_20);
      if (cVar2 == '\0') break;
      std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *)
                 local_24);
      std::vector<int,std::allocator<int>>::begin();
      while( true ) {
        std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
        operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *
                   )local_24);
        std::vector<int,std::allocator<int>>::end();
        bVar1 = __gnu_cxx::operator!=((__normal_iterator *)&local_28,local_1c);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::
                        operator*((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)
                                  &local_28);
        if (*piVar3 == param_3) {
          iVar4 = std::
                  _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                  operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_24);
          std::vector<int,std::allocator<int>>::erase(local_18,iVar4 + 4,local_28);
          local_14 = 0;
          iVar4 = std::
                  _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                  operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_24);
          std::vector<int,std::allocator<int>>::push_back
                    ((vector<int,std::allocator<int>> *)(iVar4 + 4),&local_14);
        }
        __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                  ((__normal_iterator<int*,std::vector<int,std::allocator<int>>> *)&local_28);
      }
      std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator++((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *)
                 local_24);
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp",
               "void ComboSkill::eraseDuplicationComboSKill(ENUM_SKILL_TREE_KIND, int)",0xd4,
               "ComboSkill::eraseDuplicationComboSKill kind(%d) error",param_2);
  }
  return;
}

```

---

## getComboSkillSendForm

```asm
// === 080e9e96 ComboSkill::getComboSkillSendForm  [0x080e9e96-0x80ea02f] ===
 80e9e96:	55                   	push   %ebp
 80e9e97:	89 e5                	mov    %esp,%ebp
 80e9e99:	83 ec 38             	sub    $0x38,%esp
 80e9e9c:	8b 45 10             	mov    0x10(%ebp),%eax
 80e9e9f:	85 c0                	test   %eax,%eax
 80e9ea1:	74 40                	je     80e9ee3 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x4d>
 80e9ea3:	8b 45 10             	mov    0x10(%ebp),%eax
 80e9ea6:	83 f8 01             	cmp    $0x1,%eax
 80e9ea9:	74 38                	je     80e9ee3 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x4d>
 80e9eab:	8b 45 10             	mov    0x10(%ebp),%eax
 80e9eae:	89 44 24 14          	mov    %eax,0x14(%esp)
 80e9eb2:	c7 44 24 10 24 16 b3 	movl   $0x8b31624,0x10(%esp)
 80e9eb9:	08 
 80e9eba:	c7 44 24 0c 99 00 00 	movl   $0x99,0xc(%esp)
 80e9ec1:	00 
 80e9ec2:	c7 44 24 08 80 23 b3 	movl   $0x8b32380,0x8(%esp)
 80e9ec9:	08 
 80e9eca:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80e9ed1:	08 
 80e9ed2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80e9ed9:	e8 2c 9d 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80e9ede:	e9 4a 01 00 00       	jmp    80ea02d <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x197>
 80e9ee3:	8b 45 10             	mov    0x10(%ebp),%eax
 80e9ee6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9eea:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9eed:	89 04 24             	mov    %eax,(%esp)
 80e9ef0:	e8 03 05 00 00       	call   80ea3f8 <_ZNK10ComboSkill16getComboSkillMapE20ENUM_SKILL_TREE_KIND>
 80e9ef5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e9ef8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9efb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e9efe:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9f02:	89 04 24             	mov    %eax,(%esp)
 80e9f05:	e8 0e 09 00 00       	call   80ea818 <_ZNKSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5beginEv>
 80e9f0a:	83 ec 04             	sub    $0x4,%esp
 80e9f0d:	8b 55 10             	mov    0x10(%ebp),%edx
 80e9f10:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9f13:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9f17:	89 04 24             	mov    %eax,(%esp)
 80e9f1a:	e8 01 1a fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80e9f1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80e9f22:	89 04 24             	mov    %eax,(%esp)
 80e9f25:	e8 3a 0a 00 00       	call   80ea964 <_ZNKSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE4sizeEv>
 80e9f2a:	89 c2                	mov    %eax,%edx
 80e9f2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9f2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9f33:	89 04 24             	mov    %eax,(%esp)
 80e9f36:	e8 e5 19 fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80e9f3b:	e9 be 00 00 00       	jmp    80e9ffe <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x168>
 80e9f40:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9f43:	89 04 24             	mov    %eax,(%esp)
 80e9f46:	e8 2d 09 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9f4b:	0f b7 00             	movzwl (%eax),%eax
 80e9f4e:	0f bf d0             	movswl %ax,%edx
 80e9f51:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9f54:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9f58:	89 04 24             	mov    %eax,(%esp)
 80e9f5b:	e8 44 ff fe ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80e9f60:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9f63:	89 04 24             	mov    %eax,(%esp)
 80e9f66:	e8 0d 09 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9f6b:	83 c0 04             	add    $0x4,%eax
 80e9f6e:	89 04 24             	mov    %eax,(%esp)
 80e9f71:	e8 4a 42 fa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80e9f76:	89 c2                	mov    %eax,%edx
 80e9f78:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9f7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9f7f:	89 04 24             	mov    %eax,(%esp)
 80e9f82:	e8 99 19 fe ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80e9f87:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e9f8e:	eb 32                	jmp    80e9fc2 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x12c>
 80e9f90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9f93:	89 04 24             	mov    %eax,(%esp)
 80e9f96:	e8 dd 08 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9f9b:	8d 50 04             	lea    0x4(%eax),%edx
 80e9f9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e9fa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9fa5:	89 14 24             	mov    %edx,(%esp)
 80e9fa8:	e8 c7 05 00 00       	call   80ea574 <_ZNKSt6vectorIiSaIiEEixEj>
 80e9fad:	8b 10                	mov    (%eax),%edx
 80e9faf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9fb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9fb6:	89 04 24             	mov    %eax,(%esp)
 80e9fb9:	e8 e6 fe fe ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80e9fbe:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e9fc2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9fc5:	89 04 24             	mov    %eax,(%esp)
 80e9fc8:	e8 ab 08 00 00       	call   80ea878 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e9fcd:	83 c0 04             	add    $0x4,%eax
 80e9fd0:	89 04 24             	mov    %eax,(%esp)
 80e9fd3:	e8 e8 41 fa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80e9fd8:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e9fdb:	76 0d                	jbe    80e9fea <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x154>
 80e9fdd:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80e9fe1:	77 07                	ja     80e9fea <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x154>
 80e9fe3:	b8 01 00 00 00       	mov    $0x1,%eax
 80e9fe8:	eb 05                	jmp    80e9fef <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0x159>
 80e9fea:	b8 00 00 00 00       	mov    $0x0,%eax
 80e9fef:	84 c0                	test   %al,%al
 80e9ff1:	75 9d                	jne    80e9f90 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0xfa>
 80e9ff3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9ff6:	89 04 24             	mov    %eax,(%esp)
 80e9ff9:	e8 88 08 00 00       	call   80ea886 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEppEv>
 80e9ffe:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ea001:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80ea004:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea008:	89 04 24             	mov    %eax,(%esp)
 80ea00b:	e8 2e 08 00 00       	call   80ea83e <_ZNKSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80ea010:	83 ec 04             	sub    $0x4,%esp
 80ea013:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ea016:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea01a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ea01d:	89 04 24             	mov    %eax,(%esp)
 80ea020:	e8 3f 08 00 00       	call   80ea864 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKsSt6vectorIiSaIiEEEEneERKS6_>
 80ea025:	84 c0                	test   %al,%al
 80ea027:	0f 85 13 ff ff ff    	jne    80e9f40 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND+0xaa>
 80ea02d:	c9                   	leave
 80ea02e:	c3                   	ret
 80ea02f:	90                   	nop

```

```c
// ComboSkill::getComboSkillSendForm @ 0x80e9e96

/* ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const */

void __thiscall
ComboSkill::getComboSkillSendForm(ComboSkill *this,InterfacePacketBuf *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  int *piVar5;
  uint uVar6;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_18 [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  *local_14;
  uint local_10;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    local_14 = (map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
                *)getComboSkillMap(this,param_3);
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::begin(local_1c);
    InterfacePacketBuf::put_byte(param_1,param_3);
    iVar3 = std::
            map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
            ::size(local_14);
    InterfacePacketBuf::put_byte(param_1,iVar3);
    while( true ) {
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end(local_18);
      cVar2 = std::
              _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator!=((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_1c,(_Rb_tree_const_iterator *)local_18);
      if (cVar2 == '\0') break;
      psVar4 = (short *)std::
                        _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                        ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                      *)local_1c);
      InterfacePacketBuf::put_short(param_1,(int)*psVar4);
      iVar3 = std::
              _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_1c);
      iVar3 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(iVar3 + 4));
      InterfacePacketBuf::put_byte(param_1,iVar3);
      local_10 = 0;
      while( true ) {
        iVar3 = std::
                _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        uVar6 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(iVar3 + 4));
        if ((local_10 < uVar6) && (local_10 < 6)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        iVar3 = std::
                _Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        piVar5 = (int *)std::vector<int,std::allocator<int>>::operator[]
                                  ((vector<int,std::allocator<int>> *)(iVar3 + 4),local_10);
        InterfacePacketBuf::put_short(param_1,*piVar5);
        local_10 = local_10 + 1;
      }
      std::_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator++((_Rb_tree_const_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                  *)local_1c);
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp",
               "void ComboSkill::getComboSkillSendForm(PacketGuard&, ENUM_SKILL_TREE_KIND) const",
               0x99,"ComboSkill::getComboSkillSendForm kind(%d) error",param_3);
  }
  return;
}

```

---

## getComboSkillSendList

```asm
// === 080e9e5a ComboSkill::getComboSkillSendList  [0x080e9e5a-0x80e9e95] ===
 80e9e5a:	55                   	push   %ebp
 80e9e5b:	89 e5                	mov    %esp,%ebp
 80e9e5d:	83 ec 18             	sub    $0x18,%esp
 80e9e60:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80e9e67:	00 
 80e9e68:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9e6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9e6f:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9e72:	89 04 24             	mov    %eax,(%esp)
 80e9e75:	e8 1c 00 00 00       	call   80e9e96 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND>
 80e9e7a:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80e9e81:	00 
 80e9e82:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9e85:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9e89:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9e8c:	89 04 24             	mov    %eax,(%esp)
 80e9e8f:	e8 02 00 00 00       	call   80e9e96 <_ZNK10ComboSkill21getComboSkillSendFormER11PacketGuard20ENUM_SKILL_TREE_KIND>
 80e9e94:	c9                   	leave
 80e9e95:	c3                   	ret

```

```c
// ComboSkill::getComboSkillSendList @ 0x80e9e5a

/* ComboSkill::getComboSkillSendList(PacketGuard&) const */

void __thiscall ComboSkill::getComboSkillSendList(ComboSkill *this,PacketGuard *param_1)

{
  getComboSkillSendForm(this,param_1,0);
  getComboSkillSendForm(this,param_1,1);
  return;
}

```

---

## loadData

```asm
// === 080e9d6c ComboSkill::loadData  [0x080e9d6c-0x80e9df1] ===
 80e9d6c:	55                   	push   %ebp
 80e9d6d:	89 e5                	mov    %esp,%ebp
 80e9d6f:	83 ec 18             	sub    $0x18,%esp
 80e9d72:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80e9d76:	75 07                	jne    80e9d7f <_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL+0x13>
 80e9d78:	b8 00 00 00 00       	mov    $0x0,%eax
 80e9d7d:	eb 71                	jmp    80e9df0 <_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL+0x84>
 80e9d7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9d82:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80e9d86:	84 c0                	test   %al,%al
 80e9d88:	74 2b                	je     80e9db5 <_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL+0x49>
 80e9d8a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9d8d:	8d 50 0a             	lea    0xa(%eax),%edx
 80e9d90:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9d93:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80e9d97:	0f b6 c0             	movzbl %al,%eax
 80e9d9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80e9da1:	00 
 80e9da2:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e9da6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9daa:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9dad:	89 04 24             	mov    %eax,(%esp)
 80e9db0:	e8 a5 f9 ff ff       	call   80e975a <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND>
 80e9db5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9db8:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 80e9dbc:	84 c0                	test   %al,%al
 80e9dbe:	74 2b                	je     80e9deb <_ZN10ComboSkill8loadDataEP15SIG_COMBO_SKILL+0x7f>
 80e9dc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9dc3:	8d 50 5e             	lea    0x5e(%eax),%edx
 80e9dc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9dc9:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 80e9dcd:	0f b6 c0             	movzbl %al,%eax
 80e9dd0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80e9dd7:	00 
 80e9dd8:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e9ddc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9de0:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9de3:	89 04 24             	mov    %eax,(%esp)
 80e9de6:	e8 6f f9 ff ff       	call   80e975a <_ZN10ComboSkill20convertComboSkillMapEhPK15comoboSkillData20ENUM_SKILL_TREE_KIND>
 80e9deb:	b8 01 00 00 00       	mov    $0x1,%eax
 80e9df0:	c9                   	leave
 80e9df1:	c3                   	ret

```

```c
// ComboSkill::loadData @ 0x80e9d6c

/* ComboSkill::loadData(SIG_COMBO_SKILL*) */

undefined4 __thiscall ComboSkill::loadData(ComboSkill *this,SIG_COMBO_SKILL *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (SIG_COMBO_SKILL *)0x0) {
    uVar1 = 0;
  }
  else {
    if (param_1[4] != (SIG_COMBO_SKILL)0x0) {
      convertComboSkillMap(this,param_1[4],param_1 + 10,0);
    }
    if (param_1[5] != (SIG_COMBO_SKILL)0x0) {
      convertComboSkillMap(this,param_1[5],param_1 + 0x5e,1);
    }
    uVar1 = 1;
  }
  return uVar1;
}

```

---

## resetTree

```asm
// === 080e9644 ComboSkill::resetTree  [0x080e9644-0x80e9759] ===
 80e9644:	55                   	push   %ebp
 80e9645:	89 e5                	mov    %esp,%ebp
 80e9647:	83 ec 38             	sub    $0x38,%esp
 80e964a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e964d:	85 c0                	test   %eax,%eax
 80e964f:	74 40                	je     80e9691 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4d>
 80e9651:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9654:	83 f8 01             	cmp    $0x1,%eax
 80e9657:	74 38                	je     80e9691 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x4d>
 80e9659:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e965c:	89 44 24 14          	mov    %eax,0x14(%esp)
 80e9660:	c7 44 24 10 60 15 b3 	movl   $0x8b31560,0x10(%esp)
 80e9667:	08 
 80e9668:	c7 44 24 0c 0d 00 00 	movl   $0xd,0xc(%esp)
 80e966f:	00 
 80e9670:	c7 44 24 08 e0 24 b3 	movl   $0x8b324e0,0x8(%esp)
 80e9677:	08 
 80e9678:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80e967f:	08 
 80e9680:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80e9687:	e8 7e a5 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80e968c:	e9 c7 00 00 00       	jmp    80e9758 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x114>
 80e9691:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9694:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9698:	8b 45 08             	mov    0x8(%ebp),%eax
 80e969b:	89 04 24             	mov    %eax,(%esp)
 80e969e:	e8 79 0d 00 00       	call   80ea41c <_ZN10ComboSkill16getComboSkillMapE20ENUM_SKILL_TREE_KIND>
 80e96a3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80e96a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e96a9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e96ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e96b0:	89 04 24             	mov    %eax,(%esp)
 80e96b3:	e8 48 0f 00 00       	call   80ea600 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5beginEv>
 80e96b8:	83 ec 04             	sub    $0x4,%esp
 80e96bb:	eb 6c                	jmp    80e9729 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xe5>
 80e96bd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80e96c4:	eb 27                	jmp    80e96ed <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xa9>
 80e96c6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e96c9:	89 04 24             	mov    %eax,(%esp)
 80e96cc:	e8 8f 0f 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e96d1:	8d 50 04             	lea    0x4(%eax),%edx
 80e96d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80e96d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e96db:	89 14 24             	mov    %edx,(%esp)
 80e96de:	e8 f9 4a fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80e96e3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 80e96e9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80e96ed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e96f0:	89 04 24             	mov    %eax,(%esp)
 80e96f3:	e8 68 0f 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80e96f8:	83 c0 04             	add    $0x4,%eax
 80e96fb:	89 04 24             	mov    %eax,(%esp)
 80e96fe:	e8 bd 4a fa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80e9703:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80e9706:	76 0d                	jbe    80e9715 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xd1>
 80e9708:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80e970c:	77 07                	ja     80e9715 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xd1>
 80e970e:	b8 01 00 00 00       	mov    $0x1,%eax
 80e9713:	eb 05                	jmp    80e971a <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0xd6>
 80e9715:	b8 00 00 00 00       	mov    $0x0,%eax
 80e971a:	84 c0                	test   %al,%al
 80e971c:	75 a8                	jne    80e96c6 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x82>
 80e971e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9721:	89 04 24             	mov    %eax,(%esp)
 80e9724:	e8 45 0f 00 00       	call   80ea66e <_ZNSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEppEv>
 80e9729:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e972c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80e972f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80e9733:	89 04 24             	mov    %eax,(%esp)
 80e9736:	e8 eb 0e 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80e973b:	83 ec 04             	sub    $0x4,%esp
 80e973e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80e9741:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9745:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80e9748:	89 04 24             	mov    %eax,(%esp)
 80e974b:	e8 fc 0e 00 00       	call   80ea64c <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEneERKS6_>
 80e9750:	84 c0                	test   %al,%al
 80e9752:	0f 85 65 ff ff ff    	jne    80e96bd <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND+0x79>
 80e9758:	c9                   	leave
 80e9759:	c3                   	ret

```

```c
// ComboSkill::resetTree @ 0x80e9644

/* ComboSkill::resetTree(ENUM_SKILL_TREE_KIND) */

void __thiscall ComboSkill::resetTree(ComboSkill *this,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_18 [4];
  undefined4 local_14;
  uint local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    local_14 = getComboSkillMap(this,param_2);
    std::
    map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end(local_18);
      cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
              operator!=((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                          *)local_1c,(_Rb_tree_iterator *)local_18);
      if (cVar2 == '\0') break;
      local_10 = 0;
      while( true ) {
        iVar4 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        uVar5 = std::vector<int,std::allocator<int>>::size
                          ((vector<int,std::allocator<int>> *)(iVar4 + 4));
        if ((local_10 < uVar5) && (local_10 < 6)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
        iVar4 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_1c);
        puVar3 = (undefined4 *)
                 std::vector<int,std::allocator<int>>::operator[]
                           ((vector<int,std::allocator<int>> *)(iVar4 + 4),local_10);
        *puVar3 = 0;
        local_10 = local_10 + 1;
      }
      std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
      operator++((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *)
                 local_1c);
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp","void ComboSkill::resetTree(ENUM_SKILL_TREE_KIND)",0xd,
               "ComboSkill::resetTree kind(%d) error",param_2);
  }
  return;
}

```

---

## saveData

```asm
// === 080e9df2 ComboSkill::saveData  [0x080e9df2-0x80e9e59] ===
 80e9df2:	55                   	push   %ebp
 80e9df3:	89 e5                	mov    %esp,%ebp
 80e9df5:	83 ec 18             	sub    $0x18,%esp
 80e9df8:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80e9dfc:	75 07                	jne    80e9e05 <_ZNK10ComboSkill8saveDataEP15SIG_COMBO_SKILL+0x13>
 80e9dfe:	b8 00 00 00 00       	mov    $0x0,%eax
 80e9e03:	eb 53                	jmp    80e9e58 <_ZNK10ComboSkill8saveDataEP15SIG_COMBO_SKILL+0x66>
 80e9e05:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9e08:	8d 50 0a             	lea    0xa(%eax),%edx
 80e9e0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9e0e:	83 c0 04             	add    $0x4,%eax
 80e9e11:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80e9e18:	00 
 80e9e19:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e9e1d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9e21:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9e24:	89 04 24             	mov    %eax,(%esp)
 80e9e27:	e8 5a fb ff ff       	call   80e9986 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND>
 80e9e2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9e2f:	8d 50 5e             	lea    0x5e(%eax),%edx
 80e9e32:	8b 45 0c             	mov    0xc(%ebp),%eax
 80e9e35:	83 c0 05             	add    $0x5,%eax
 80e9e38:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80e9e3f:	00 
 80e9e40:	89 54 24 08          	mov    %edx,0x8(%esp)
 80e9e44:	89 44 24 04          	mov    %eax,0x4(%esp)
 80e9e48:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9e4b:	89 04 24             	mov    %eax,(%esp)
 80e9e4e:	e8 33 fb ff ff       	call   80e9986 <_ZNK10ComboSkill22convertComboSkillArrayERhP15comoboSkillData20ENUM_SKILL_TREE_KIND>
 80e9e53:	b8 01 00 00 00       	mov    $0x1,%eax
 80e9e58:	c9                   	leave
 80e9e59:	c3                   	ret

```

```c
// ComboSkill::saveData @ 0x80e9df2

/* ComboSkill::saveData(SIG_COMBO_SKILL*) const */

bool __thiscall ComboSkill::saveData(ComboSkill *this,SIG_COMBO_SKILL *param_1)

{
  if (param_1 != (SIG_COMBO_SKILL *)0x0) {
    convertComboSkillArray(this,param_1 + 4,param_1 + 10,0);
    convertComboSkillArray(this,param_1 + 5,param_1 + 0x5e,1);
  }
  return param_1 != (SIG_COMBO_SKILL *)0x0;
}

```

---

## setComboSkill

```asm
// === 080ea030 ComboSkill::setComboSkill  [0x080ea030-0x80ea205] ===
 80ea030:	55                   	push   %ebp
 80ea031:	89 e5                	mov    %esp,%ebp
 80ea033:	53                   	push   %ebx
 80ea034:	83 ec 54             	sub    $0x54,%esp
 80ea037:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea03a:	85 c0                	test   %eax,%eax
 80ea03c:	74 40                	je     80ea07e <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x4e>
 80ea03e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea041:	83 f8 01             	cmp    $0x1,%eax
 80ea044:	74 38                	je     80ea07e <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x4e>
 80ea046:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea049:	89 44 24 14          	mov    %eax,0x14(%esp)
 80ea04d:	c7 44 24 10 c4 15 b3 	movl   $0x8b315c4,0x10(%esp)
 80ea054:	08 
 80ea055:	c7 44 24 0c b5 00 00 	movl   $0xb5,0xc(%esp)
 80ea05c:	00 
 80ea05d:	c7 44 24 08 20 23 b3 	movl   $0x8b32320,0x8(%esp)
 80ea064:	08 
 80ea065:	c7 44 24 04 85 15 b3 	movl   $0x8b31585,0x4(%esp)
 80ea06c:	08 
 80ea06d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80ea074:	e8 91 9b 9e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80ea079:	e9 82 01 00 00       	jmp    80ea200 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x1d0>
 80ea07e:	8b 45 10             	mov    0x10(%ebp),%eax
 80ea081:	89 04 24             	mov    %eax,(%esp)
 80ea084:	e8 ef 08 00 00       	call   80ea978 <_ZNKSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5emptyEv>
 80ea089:	84 c0                	test   %al,%al
 80ea08b:	0f 85 6e 01 00 00    	jne    80ea1ff <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x1cf>
 80ea091:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea094:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea098:	8b 45 08             	mov    0x8(%ebp),%eax
 80ea09b:	89 04 24             	mov    %eax,(%esp)
 80ea09e:	e8 79 03 00 00       	call   80ea41c <_ZN10ComboSkill16getComboSkillMapE20ENUM_SKILL_TREE_KIND>
 80ea0a3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80ea0a6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ea0a9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80ea0ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea0b0:	89 04 24             	mov    %eax,(%esp)
 80ea0b3:	e8 6e 05 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80ea0b8:	83 ec 04             	sub    $0x4,%esp
 80ea0bb:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea0be:	8b 55 10             	mov    0x10(%ebp),%edx
 80ea0c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea0c5:	89 04 24             	mov    %eax,(%esp)
 80ea0c8:	e8 33 05 00 00       	call   80ea600 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE5beginEv>
 80ea0cd:	83 ec 04             	sub    $0x4,%esp
 80ea0d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80ea0d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea0d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80ea0da:	89 04 24             	mov    %eax,(%esp)
 80ea0dd:	e8 62 f5 ff ff       	call   80e9644 <_ZN10ComboSkill9resetTreeE20ENUM_SKILL_TREE_KIND>
 80ea0e2:	e9 e7 00 00 00       	jmp    80ea1ce <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x19e>
 80ea0e7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea0ea:	89 04 24             	mov    %eax,(%esp)
 80ea0ed:	e8 6e 05 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea0f2:	89 c2                	mov    %eax,%edx
 80ea0f4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80ea0f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 80ea0fb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80ea0fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea102:	89 04 24             	mov    %eax,(%esp)
 80ea105:	e8 82 05 00 00       	call   80ea68c <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE4findERS6_>
 80ea10a:	83 ec 04             	sub    $0x4,%esp
 80ea10d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 80ea110:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80ea113:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ea116:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80ea119:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea11d:	89 04 24             	mov    %eax,(%esp)
 80ea120:	e8 01 05 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80ea125:	83 ec 04             	sub    $0x4,%esp
 80ea128:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80ea12b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea12f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ea132:	89 04 24             	mov    %eax,(%esp)
 80ea135:	e8 7e 05 00 00       	call   80ea6b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEeqERKS6_>
 80ea13a:	84 c0                	test   %al,%al
 80ea13c:	0f 85 8b 00 00 00    	jne    80ea1cd <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x19d>
 80ea142:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80ea149:	eb 44                	jmp    80ea18f <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x15f>
 80ea14b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80ea14e:	89 04 24             	mov    %eax,(%esp)
 80ea151:	e8 0a 05 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea156:	8d 50 04             	lea    0x4(%eax),%edx
 80ea159:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ea15c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea160:	89 14 24             	mov    %edx,(%esp)
 80ea163:	e8 74 40 fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80ea168:	89 c3                	mov    %eax,%ebx
 80ea16a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea16d:	89 04 24             	mov    %eax,(%esp)
 80ea170:	e8 eb 04 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea175:	8d 50 04             	lea    0x4(%eax),%edx
 80ea178:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80ea17b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea17f:	89 14 24             	mov    %edx,(%esp)
 80ea182:	e8 55 40 fa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80ea187:	8b 00                	mov    (%eax),%eax
 80ea189:	89 03                	mov    %eax,(%ebx)
 80ea18b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80ea18f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea192:	89 04 24             	mov    %eax,(%esp)
 80ea195:	e8 c6 04 00 00       	call   80ea660 <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEptEv>
 80ea19a:	83 c0 04             	add    $0x4,%eax
 80ea19d:	89 04 24             	mov    %eax,(%esp)
 80ea1a0:	e8 1b 40 fa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80ea1a5:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80ea1a8:	76 0d                	jbe    80ea1b7 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x187>
 80ea1aa:	83 7d f4 05          	cmpl   $0x5,-0xc(%ebp)
 80ea1ae:	77 07                	ja     80ea1b7 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x187>
 80ea1b0:	b8 01 00 00 00       	mov    $0x1,%eax
 80ea1b5:	eb 05                	jmp    80ea1bc <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x18c>
 80ea1b7:	b8 00 00 00 00       	mov    $0x0,%eax
 80ea1bc:	84 c0                	test   %al,%al
 80ea1be:	75 8b                	jne    80ea14b <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x11b>
 80ea1c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea1c3:	89 04 24             	mov    %eax,(%esp)
 80ea1c6:	e8 a3 04 00 00       	call   80ea66e <_ZNSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEppEv>
 80ea1cb:	eb 01                	jmp    80ea1ce <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x19e>
 80ea1cd:	90                   	nop
 80ea1ce:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ea1d1:	8b 55 10             	mov    0x10(%ebp),%edx
 80ea1d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 80ea1d8:	89 04 24             	mov    %eax,(%esp)
 80ea1db:	e8 46 04 00 00       	call   80ea626 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEE3endEv>
 80ea1e0:	83 ec 04             	sub    $0x4,%esp
 80ea1e3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80ea1e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80ea1ea:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80ea1ed:	89 04 24             	mov    %eax,(%esp)
 80ea1f0:	e8 57 04 00 00       	call   80ea64c <_ZNKSt17_Rb_tree_iteratorISt4pairIKsSt6vectorIiSaIiEEEEneERKS6_>
 80ea1f5:	84 c0                	test   %al,%al
 80ea1f7:	0f 85 ea fe ff ff    	jne    80ea0e7 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0xb7>
 80ea1fd:	eb 01                	jmp    80ea200 <_ZN10ComboSkill13setComboSkillE20ENUM_SKILL_TREE_KINDRSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS4_EEE+0x1d0>
 80ea1ff:	90                   	nop
 80ea200:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 80ea203:	c9                   	leave
 80ea204:	c3                   	ret
 80ea205:	90                   	nop

```

```c
// ComboSkill::setComboSkill @ 0x80ea030

/* ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, std::map<short, std::vector<int,
   std::allocator<int> >, std::less<short>, std::allocator<std::pair<short const, std::vector<int,
   std::allocator<int> > > > >&) */

void __thiscall
ComboSkill::setComboSkill
          (ComboSkill *this,int param_2,
          map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          *param_3)

{
  bool bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_30 [3];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_24 [4];
  undefined4 local_20;
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_1c [4];
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  local_18 [4];
  undefined4 local_14;
  uint local_10;
  
  if ((param_2 == 0) || (param_2 == 1)) {
    cVar2 = std::
            map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
            ::empty(param_3);
    if (cVar2 == '\0') {
      local_14 = getComboSkillMap(this,param_2);
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::end((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
             *)&local_20);
      std::
      map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
      ::begin(local_24);
      resetTree(this,param_2);
      while( true ) {
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end(local_1c);
        cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator!=((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)local_24,(_Rb_tree_iterator *)local_1c);
        if (cVar2 == '\0') break;
        std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
        operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>> *
                   )local_24);
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::find((short *)local_30);
        local_20 = local_30[0];
        std::
        map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
        ::end(local_18);
        cVar2 = std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                ::operator==((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                              *)&local_20,(_Rb_tree_iterator *)local_18);
        if (cVar2 == '\0') {
          local_10 = 0;
          while( true ) {
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                    operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_24);
            uVar6 = std::vector<int,std::allocator<int>>::size
                              ((vector<int,std::allocator<int>> *)(iVar5 + 4));
            if ((local_10 < uVar6) && (local_10 < 6)) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (!bVar1) break;
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                    operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)&local_20);
            puVar3 = (undefined4 *)
                     std::vector<int,std::allocator<int>>::operator[]
                               ((vector<int,std::allocator<int>> *)(iVar5 + 4),local_10);
            iVar5 = std::
                    _Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
                    operator->((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                                *)local_24);
            puVar4 = (undefined4 *)
                     std::vector<int,std::allocator<int>>::operator[]
                               ((vector<int,std::allocator<int>> *)(iVar5 + 4),local_10);
            *puVar3 = *puVar4;
            local_10 = local_10 + 1;
          }
          std::_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>::
          operator++((_Rb_tree_iterator<std::pair<short_const,std::vector<int,std::allocator<int>>>>
                      *)local_24);
        }
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"ComboSkill.cpp",
               "void ComboSkill::setComboSkill(ENUM_SKILL_TREE_KIND, ComboSkillMap&)",0xb5,
               "ComboSkill::setComboSkill kind(%d) error",param_2);
  }
  return;
}

```

---

## ~ComboSkill

```asm
// === 080e9d26 ComboSkill::~ComboSkill  [0x080e9d26-0x80e9d6b] ===
 80e9d26:	55                   	push   %ebp
 80e9d27:	89 e5                	mov    %esp,%ebp
 80e9d29:	56                   	push   %esi
 80e9d2a:	53                   	push   %ebx
 80e9d2b:	83 ec 10             	sub    $0x10,%esp
 80e9d2e:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9d31:	83 c0 15             	add    $0x15,%eax
 80e9d34:	89 04 24             	mov    %eax,(%esp)
 80e9d37:	e8 a8 06 00 00       	call   80ea3e4 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEED1Ev>
 80e9d3c:	eb 1b                	jmp    80e9d59 <_ZN10ComboSkillD1Ev+0x33>
 80e9d3e:	89 d3                	mov    %edx,%ebx
 80e9d40:	89 c6                	mov    %eax,%esi
 80e9d42:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9d45:	89 04 24             	mov    %eax,(%esp)
 80e9d48:	e8 97 06 00 00       	call   80ea3e4 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEED1Ev>
 80e9d4d:	89 f0                	mov    %esi,%eax
 80e9d4f:	89 da                	mov    %ebx,%edx
 80e9d51:	89 04 24             	mov    %eax,(%esp)
 80e9d54:	e8 f7 99 9f 00       	call   8ae3750 <_Unwind_Resume>
 80e9d59:	8b 45 08             	mov    0x8(%ebp),%eax
 80e9d5c:	89 04 24             	mov    %eax,(%esp)
 80e9d5f:	e8 80 06 00 00       	call   80ea3e4 <_ZNSt3mapIsSt6vectorIiSaIiEESt4lessIsESaISt4pairIKsS2_EEED1Ev>
 80e9d64:	83 c4 10             	add    $0x10,%esp
 80e9d67:	5b                   	pop    %ebx
 80e9d68:	5e                   	pop    %esi
 80e9d69:	5d                   	pop    %ebp
 80e9d6a:	c3                   	ret
 80e9d6b:	90                   	nop

```

```c
// ComboSkill::~ComboSkill @ 0x80e9d26

/* ComboSkill::~ComboSkill() */

void __thiscall ComboSkill::~ComboSkill(ComboSkill *this)

{
                    /* try { // try from 080e9d37 to 080e9d3b has its CatchHandler @ 080e9d3e */
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::~map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          *)(this + 0x15));
  std::
  map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
  ::~map((map<short,std::vector<int,std::allocator<int>>,std::less<short>,std::allocator<std::pair<short_const,std::vector<int,std::allocator<int>>>>>
          *)this);
  return;
}

```

