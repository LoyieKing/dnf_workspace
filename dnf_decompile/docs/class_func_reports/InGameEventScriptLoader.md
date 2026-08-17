# InGameEventScriptLoader

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## getEventScript

```asm
// === 08982f38 InGameEventScriptLoader::getEventScript  [0x08982f38-0x8982fc5] ===
 8982f38:	55                   	push   %ebp
 8982f39:	89 e5                	mov    %esp,%ebp
 8982f3b:	83 ec 28             	sub    $0x28,%esp
 8982f3e:	8b 55 08             	mov    0x8(%ebp),%edx
 8982f41:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8982f44:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8982f47:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8982f4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8982f4f:	89 04 24             	mov    %eax,(%esp)
 8982f52:	e8 c1 3a 00 00       	call   8986a18 <_ZNSt3mapISsP17InGameEventScriptSt4lessISsESaISt4pairIKSsS1_EEE4findERS5_>
 8982f57:	83 ec 04             	sub    $0x4,%esp
 8982f5a:	8b 55 08             	mov    0x8(%ebp),%edx
 8982f5d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8982f60:	89 54 24 04          	mov    %edx,0x4(%esp)
 8982f64:	89 04 24             	mov    %eax,(%esp)
 8982f67:	e8 d4 e5 78 ff       	call   8111540 <_ZNSt3mapISsP17InGameEventScriptSt4lessISsESaISt4pairIKSsS1_EEE3endEv>
 8982f6c:	83 ec 04             	sub    $0x4,%esp
 8982f6f:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8982f72:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982f76:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8982f79:	89 04 24             	mov    %eax,(%esp)
 8982f7c:	e8 e5 e5 78 ff       	call   8111566 <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEneERKS5_>
 8982f81:	84 c0                	test   %al,%al
 8982f83:	74 10                	je     8982f95 <_ZN23InGameEventScriptLoader14getEventScriptEiRKSs+0x5d>
 8982f85:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8982f88:	89 04 24             	mov    %eax,(%esp)
 8982f8b:	e8 ea e5 78 ff       	call   811157a <_ZNKSt17_Rb_tree_iteratorISt4pairIKSsP17InGameEventScriptEEptEv>
 8982f90:	8b 40 04             	mov    0x4(%eax),%eax
 8982f93:	eb 2f                	jmp    8982fc4 <_ZN23InGameEventScriptLoader14getEventScriptEiRKSs+0x8c>
 8982f95:	8b 45 10             	mov    0x10(%ebp),%eax
 8982f98:	89 44 24 08          	mov    %eax,0x8(%esp)
 8982f9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8982f9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982fa3:	8b 45 08             	mov    0x8(%ebp),%eax
 8982fa6:	89 04 24             	mov    %eax,(%esp)
 8982fa9:	e8 9c fa ff ff       	call   8982a4a <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs>
 8982fae:	89 44 24 08          	mov    %eax,0x8(%esp)
 8982fb2:	8b 45 10             	mov    0x10(%ebp),%eax
 8982fb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982fb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8982fbc:	89 04 24             	mov    %eax,(%esp)
 8982fbf:	e8 4c ff ff ff       	call   8982f10 <_ZN23InGameEventScriptLoader17insertEventScriptERKSsP17InGameEventScript>
 8982fc4:	c9                   	leave
 8982fc5:	c3                   	ret

```

```c
// InGameEventScriptLoader::getEventScript @ 0x8982f38

/* InGameEventScriptLoader::getEventScript(int, std::string const&) */

undefined4 __thiscall
InGameEventScriptLoader::getEventScript(InGameEventScriptLoader *this,int param_1,string *param_2)

{
  char cVar1;
  int iVar2;
  InGameEventScript *pIVar3;
  undefined4 uVar4;
  string local_14 [4];
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  local_10 [12];
  
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::find(local_14);
  std::
  map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
  ::end(local_10);
  cVar1 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator!=
                    ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)local_14,
                     (_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    pIVar3 = (InGameEventScript *)importInGameEventScript(this,param_1,param_2);
    uVar4 = insertEventScript(this,param_2,pIVar3);
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>>::operator->
                      ((_Rb_tree_iterator<std::pair<std::string_const,InGameEventScript*>> *)
                       local_14);
    uVar4 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar4;
}

```

---

## importInGameEventScript

```asm
// === 08982a4a InGameEventScriptLoader::importInGameEventScript  [0x08982a4a-0x8982f0f] ===
 8982a4a:	55                   	push   %ebp
 8982a4b:	89 e5                	mov    %esp,%ebp
 8982a4d:	57                   	push   %edi
 8982a4e:	56                   	push   %esi
 8982a4f:	53                   	push   %ebx
 8982a50:	83 ec 2c             	sub    $0x2c,%esp
 8982a53:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8982a5a:	c6 45 e7 01          	movb   $0x1,-0x19(%ebp)
 8982a5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8982a61:	3d 94 01 00 00       	cmp    $0x194,%eax
 8982a66:	0f 84 4e 01 00 00    	je     8982bba <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x170>
 8982a6c:	3d 94 01 00 00       	cmp    $0x194,%eax
 8982a71:	7f 3c                	jg     8982aaf <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x65>
 8982a73:	83 f8 65             	cmp    $0x65,%eax
 8982a76:	0f 84 03 04 00 00    	je     8982e7f <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x435>
 8982a7c:	83 f8 65             	cmp    $0x65,%eax
 8982a7f:	7f 17                	jg     8982a98 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x4e>
 8982a81:	83 f8 56             	cmp    $0x56,%eax
 8982a84:	0f 84 46 03 00 00    	je     8982dd0 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x386>
 8982a8a:	83 f8 5c             	cmp    $0x5c,%eax
 8982a8d:	0f 84 96 03 00 00    	je     8982e29 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x3df>
 8982a93:	e9 3e 04 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982a98:	3d 91 01 00 00       	cmp    $0x191,%eax
 8982a9d:	0f 8c 33 04 00 00    	jl     8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982aa3:	3d 92 01 00 00       	cmp    $0x192,%eax
 8982aa8:	7e 5e                	jle    8982b08 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0xbe>
 8982aaa:	e9 b2 00 00 00       	jmp    8982b61 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x117>
 8982aaf:	3d 99 01 00 00       	cmp    $0x199,%eax
 8982ab4:	0f 84 0b 02 00 00    	je     8982cc5 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x27b>
 8982aba:	3d 99 01 00 00       	cmp    $0x199,%eax
 8982abf:	7f 26                	jg     8982ae7 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x9d>
 8982ac1:	3d 97 01 00 00       	cmp    $0x197,%eax
 8982ac6:	0f 84 a0 01 00 00    	je     8982c6c <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x222>
 8982acc:	3d 97 01 00 00       	cmp    $0x197,%eax
 8982ad1:	0f 8f fe 03 00 00    	jg     8982ed5 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48b>
 8982ad7:	3d 96 01 00 00       	cmp    $0x196,%eax
 8982adc:	0f 84 31 01 00 00    	je     8982c13 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x1c9>
 8982ae2:	e9 ef 03 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982ae7:	3d 9b 01 00 00       	cmp    $0x19b,%eax
 8982aec:	0f 84 85 02 00 00    	je     8982d77 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x32d>
 8982af2:	3d 9b 01 00 00       	cmp    $0x19b,%eax
 8982af7:	0f 8c 21 02 00 00    	jl     8982d1e <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x2d4>
 8982afd:	3d 9c 01 00 00       	cmp    $0x19c,%eax
 8982b02:	0f 85 ce 03 00 00    	jne    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982b08:	c7 04 24 50 00 00 00 	movl   $0x50,(%esp)
 8982b0f:	e8 3c 19 da ff       	call   8724450 <_Znwj>
 8982b14:	89 c3                	mov    %eax,%ebx
 8982b16:	89 d8                	mov    %ebx,%eax
 8982b18:	89 04 24             	mov    %eax,(%esp)
 8982b1b:	e8 ba 2d 00 00       	call   89858da <_ZN23AccountFirstLoginScriptC1Ev>
 8982b20:	eb 18                	jmp    8982b3a <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0xf0>
 8982b22:	89 d6                	mov    %edx,%esi
 8982b24:	89 c7                	mov    %eax,%edi
 8982b26:	89 1c 24             	mov    %ebx,(%esp)
 8982b29:	e8 c2 19 da ff       	call   87244f0 <_ZdlPv>
 8982b2e:	89 f8                	mov    %edi,%eax
 8982b30:	89 f2                	mov    %esi,%edx
 8982b32:	89 04 24             	mov    %eax,(%esp)
 8982b35:	e8 16 0c 16 00       	call   8ae3750 <_Unwind_Resume>
 8982b3a:	89 d8                	mov    %ebx,%eax
 8982b3c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982b3f:	8b 45 10             	mov    0x10(%ebp),%eax
 8982b42:	89 04 24             	mov    %eax,(%esp)
 8982b45:	e8 a6 39 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982b4a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982b4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982b51:	89 14 24             	mov    %edx,(%esp)
 8982b54:	e8 66 cc ff ff       	call   897f7bf <_Z34importAccountFirstLoginEventScriptP23AccountFirstLoginScriptPKc>
 8982b59:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982b5c:	e9 75 03 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982b61:	c7 04 24 24 00 00 00 	movl   $0x24,(%esp)
 8982b68:	e8 e3 18 da ff       	call   8724450 <_Znwj>
 8982b6d:	89 c3                	mov    %eax,%ebx
 8982b6f:	89 d8                	mov    %ebx,%eax
 8982b71:	89 04 24             	mov    %eax,(%esp)
 8982b74:	e8 bb 35 00 00       	call   8986134 <_ZN20AddItemCountDBScriptC1Ev>
 8982b79:	eb 18                	jmp    8982b93 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x149>
 8982b7b:	89 d6                	mov    %edx,%esi
 8982b7d:	89 c7                	mov    %eax,%edi
 8982b7f:	89 1c 24             	mov    %ebx,(%esp)
 8982b82:	e8 69 19 da ff       	call   87244f0 <_ZdlPv>
 8982b87:	89 f8                	mov    %edi,%eax
 8982b89:	89 f2                	mov    %esi,%edx
 8982b8b:	89 04 24             	mov    %eax,(%esp)
 8982b8e:	e8 bd 0b 16 00       	call   8ae3750 <_Unwind_Resume>
 8982b93:	89 d8                	mov    %ebx,%eax
 8982b95:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982b98:	8b 45 10             	mov    0x10(%ebp),%eax
 8982b9b:	89 04 24             	mov    %eax,(%esp)
 8982b9e:	e8 4d 39 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982ba3:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982ba6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982baa:	89 14 24             	mov    %edx,(%esp)
 8982bad:	e8 e7 d0 ff ff       	call   897fc99 <_Z31importAddItemCountDBEventScriptP20AddItemCountDBScriptPKc>
 8982bb2:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982bb5:	e9 1c 03 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982bba:	c7 04 24 6c 00 00 00 	movl   $0x6c,(%esp)
 8982bc1:	e8 8a 18 da ff       	call   8724450 <_Znwj>
 8982bc6:	89 c3                	mov    %eax,%ebx
 8982bc8:	89 d8                	mov    %ebx,%eax
 8982bca:	89 04 24             	mov    %eax,(%esp)
 8982bcd:	e8 08 36 00 00       	call   89861da <_ZN19LevelUpRewardScriptC1Ev>
 8982bd2:	eb 18                	jmp    8982bec <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x1a2>
 8982bd4:	89 d6                	mov    %edx,%esi
 8982bd6:	89 c7                	mov    %eax,%edi
 8982bd8:	89 1c 24             	mov    %ebx,(%esp)
 8982bdb:	e8 10 19 da ff       	call   87244f0 <_ZdlPv>
 8982be0:	89 f8                	mov    %edi,%eax
 8982be2:	89 f2                	mov    %esi,%edx
 8982be4:	89 04 24             	mov    %eax,(%esp)
 8982be7:	e8 64 0b 16 00       	call   8ae3750 <_Unwind_Resume>
 8982bec:	89 d8                	mov    %ebx,%eax
 8982bee:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982bf1:	8b 45 10             	mov    0x10(%ebp),%eax
 8982bf4:	89 04 24             	mov    %eax,(%esp)
 8982bf7:	e8 f4 38 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982bfc:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982bff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982c03:	89 14 24             	mov    %edx,(%esp)
 8982c06:	e8 56 d6 ff ff       	call   8980261 <_Z25importLevelUpRewardScriptP19LevelUpRewardScriptPKc>
 8982c0b:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982c0e:	e9 c3 02 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982c13:	c7 04 24 68 00 00 00 	movl   $0x68,(%esp)
 8982c1a:	e8 31 18 da ff       	call   8724450 <_Znwj>
 8982c1f:	89 c3                	mov    %eax,%ebx
 8982c21:	89 d8                	mov    %ebx,%eax
 8982c23:	89 04 24             	mov    %eax,(%esp)
 8982c26:	e8 ef 2e 00 00       	call   8985b1a <_ZN30ExchangeRandomItemRewardScriptC1Ev>
 8982c2b:	eb 18                	jmp    8982c45 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x1fb>
 8982c2d:	89 d6                	mov    %edx,%esi
 8982c2f:	89 c7                	mov    %eax,%edi
 8982c31:	89 1c 24             	mov    %ebx,(%esp)
 8982c34:	e8 b7 18 da ff       	call   87244f0 <_ZdlPv>
 8982c39:	89 f8                	mov    %edi,%eax
 8982c3b:	89 f2                	mov    %esi,%edx
 8982c3d:	89 04 24             	mov    %eax,(%esp)
 8982c40:	e8 0b 0b 16 00       	call   8ae3750 <_Unwind_Resume>
 8982c45:	89 d8                	mov    %ebx,%eax
 8982c47:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982c4a:	8b 45 10             	mov    0x10(%ebp),%eax
 8982c4d:	89 04 24             	mov    %eax,(%esp)
 8982c50:	e8 9b 38 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982c55:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982c58:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982c5c:	89 14 24             	mov    %edx,(%esp)
 8982c5f:	e8 ab f1 ff ff       	call   8981e0f <_Z36importExchangeRandomItemRewardScriptP30ExchangeRandomItemRewardScriptPKc>
 8982c64:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982c67:	e9 6a 02 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982c6c:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8982c73:	e8 d8 17 da ff       	call   8724450 <_Znwj>
 8982c78:	89 c3                	mov    %eax,%ebx
 8982c7a:	89 d8                	mov    %ebx,%eax
 8982c7c:	89 04 24             	mov    %eax,(%esp)
 8982c7f:	e8 5e 2f 00 00       	call   8985be2 <_ZN32AvatarDisjointRandomRewardScriptC1Ev>
 8982c84:	eb 18                	jmp    8982c9e <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x254>
 8982c86:	89 d6                	mov    %edx,%esi
 8982c88:	89 c7                	mov    %eax,%edi
 8982c8a:	89 1c 24             	mov    %ebx,(%esp)
 8982c8d:	e8 5e 18 da ff       	call   87244f0 <_ZdlPv>
 8982c92:	89 f8                	mov    %edi,%eax
 8982c94:	89 f2                	mov    %esi,%edx
 8982c96:	89 04 24             	mov    %eax,(%esp)
 8982c99:	e8 b2 0a 16 00       	call   8ae3750 <_Unwind_Resume>
 8982c9e:	89 d8                	mov    %ebx,%eax
 8982ca0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982ca3:	8b 45 10             	mov    0x10(%ebp),%eax
 8982ca6:	89 04 24             	mov    %eax,(%esp)
 8982ca9:	e8 42 38 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982cae:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982cb5:	89 14 24             	mov    %edx,(%esp)
 8982cb8:	e8 f7 f7 ff ff       	call   89824b4 <_Z38importAvatarDisjointRandomRewardScriptP32AvatarDisjointRandomRewardScriptPKc>
 8982cbd:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982cc0:	e9 11 02 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982cc5:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8982ccc:	e8 7f 17 da ff       	call   8724450 <_Znwj>
 8982cd1:	89 c3                	mov    %eax,%ebx
 8982cd3:	89 d8                	mov    %ebx,%eax
 8982cd5:	89 04 24             	mov    %eax,(%esp)
 8982cd8:	e8 97 2f 00 00       	call   8985c74 <_ZN21FatigueQuantityScriptC1Ev>
 8982cdd:	eb 18                	jmp    8982cf7 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x2ad>
 8982cdf:	89 d6                	mov    %edx,%esi
 8982ce1:	89 c7                	mov    %eax,%edi
 8982ce3:	89 1c 24             	mov    %ebx,(%esp)
 8982ce6:	e8 05 18 da ff       	call   87244f0 <_ZdlPv>
 8982ceb:	89 f8                	mov    %edi,%eax
 8982ced:	89 f2                	mov    %esi,%edx
 8982cef:	89 04 24             	mov    %eax,(%esp)
 8982cf2:	e8 59 0a 16 00       	call   8ae3750 <_Unwind_Resume>
 8982cf7:	89 d8                	mov    %ebx,%eax
 8982cf9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982cfc:	8b 45 10             	mov    0x10(%ebp),%eax
 8982cff:	89 04 24             	mov    %eax,(%esp)
 8982d02:	e8 e9 37 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982d07:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982d0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982d0e:	89 14 24             	mov    %edx,(%esp)
 8982d11:	e8 b0 02 00 00       	call   8982fc6 <_Z32importFatigueQuantityEventScriptP21FatigueQuantityScriptPKc>
 8982d16:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982d19:	e9 b8 01 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982d1e:	c7 04 24 30 00 00 00 	movl   $0x30,(%esp)
 8982d25:	e8 26 17 da ff       	call   8724450 <_Znwj>
 8982d2a:	89 c3                	mov    %eax,%ebx
 8982d2c:	89 d8                	mov    %ebx,%eax
 8982d2e:	89 04 24             	mov    %eax,(%esp)
 8982d31:	e8 e6 2f 00 00       	call   8985d1c <_ZN27PurchaseCashItemBonusScriptC1Ev>
 8982d36:	eb 18                	jmp    8982d50 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x306>
 8982d38:	89 d6                	mov    %edx,%esi
 8982d3a:	89 c7                	mov    %eax,%edi
 8982d3c:	89 1c 24             	mov    %ebx,(%esp)
 8982d3f:	e8 ac 17 da ff       	call   87244f0 <_ZdlPv>
 8982d44:	89 f8                	mov    %edi,%eax
 8982d46:	89 f2                	mov    %esi,%edx
 8982d48:	89 04 24             	mov    %eax,(%esp)
 8982d4b:	e8 00 0a 16 00       	call   8ae3750 <_Unwind_Resume>
 8982d50:	89 d8                	mov    %ebx,%eax
 8982d52:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982d55:	8b 45 10             	mov    0x10(%ebp),%eax
 8982d58:	89 04 24             	mov    %eax,(%esp)
 8982d5b:	e8 90 37 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982d60:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982d63:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982d67:	89 14 24             	mov    %edx,(%esp)
 8982d6a:	e8 37 07 00 00       	call   89834a6 <_Z38importPurchaseCashItemBonusEventScriptP27PurchaseCashItemBonusScriptPKc>
 8982d6f:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982d72:	e9 5f 01 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982d77:	c7 04 24 34 00 00 00 	movl   $0x34,(%esp)
 8982d7e:	e8 cd 16 da ff       	call   8724450 <_Znwj>
 8982d83:	89 c3                	mov    %eax,%ebx
 8982d85:	89 d8                	mov    %ebx,%eax
 8982d87:	89 04 24             	mov    %eax,(%esp)
 8982d8a:	e8 7b 30 00 00       	call   8985e0a <_ZN19ObjectBringUpScriptC1Ev>
 8982d8f:	eb 18                	jmp    8982da9 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x35f>
 8982d91:	89 d6                	mov    %edx,%esi
 8982d93:	89 c7                	mov    %eax,%edi
 8982d95:	89 1c 24             	mov    %ebx,(%esp)
 8982d98:	e8 53 17 da ff       	call   87244f0 <_ZdlPv>
 8982d9d:	89 f8                	mov    %edi,%eax
 8982d9f:	89 f2                	mov    %esi,%edx
 8982da1:	89 04 24             	mov    %eax,(%esp)
 8982da4:	e8 a7 09 16 00       	call   8ae3750 <_Unwind_Resume>
 8982da9:	89 d8                	mov    %ebx,%eax
 8982dab:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982dae:	8b 45 10             	mov    0x10(%ebp),%eax
 8982db1:	89 04 24             	mov    %eax,(%esp)
 8982db4:	e8 37 37 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982db9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982dbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982dc0:	89 14 24             	mov    %edx,(%esp)
 8982dc3:	e8 80 10 00 00       	call   8983e48 <_Z30importObjectBringUpEventScriptP19ObjectBringUpScriptPKc>
 8982dc8:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982dcb:	e9 06 01 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982dd0:	c7 04 24 78 00 00 00 	movl   $0x78,(%esp)
 8982dd7:	e8 74 16 da ff       	call   8724450 <_Znwj>
 8982ddc:	89 c3                	mov    %eax,%ebx
 8982dde:	89 d8                	mov    %ebx,%eax
 8982de0:	89 04 24             	mov    %eax,(%esp)
 8982de3:	e8 92 2b 00 00       	call   898597a <_ZN16AttendanceScriptC1Ev>
 8982de8:	eb 18                	jmp    8982e02 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x3b8>
 8982dea:	89 d6                	mov    %edx,%esi
 8982dec:	89 c7                	mov    %eax,%edi
 8982dee:	89 1c 24             	mov    %ebx,(%esp)
 8982df1:	e8 fa 16 da ff       	call   87244f0 <_ZdlPv>
 8982df6:	89 f8                	mov    %edi,%eax
 8982df8:	89 f2                	mov    %esi,%edx
 8982dfa:	89 04 24             	mov    %eax,(%esp)
 8982dfd:	e8 4e 09 16 00       	call   8ae3750 <_Unwind_Resume>
 8982e02:	89 d8                	mov    %ebx,%eax
 8982e04:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982e07:	8b 45 10             	mov    0x10(%ebp),%eax
 8982e0a:	89 04 24             	mov    %eax,(%esp)
 8982e0d:	e8 de 36 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982e12:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982e15:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982e19:	89 14 24             	mov    %edx,(%esp)
 8982e1c:	e8 18 e7 ff ff       	call   8981539 <_Z22importAttendanceScriptP16AttendanceScriptPKc>
 8982e21:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982e24:	e9 ad 00 00 00       	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982e29:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8982e30:	e8 1b 16 da ff       	call   8724450 <_Znwj>
 8982e35:	89 c3                	mov    %eax,%ebx
 8982e37:	89 d8                	mov    %ebx,%eax
 8982e39:	89 04 24             	mov    %eax,(%esp)
 8982e3c:	e8 77 31 00 00       	call   8985fb8 <_ZN20PcBangPlayTimeScriptC1Ev>
 8982e41:	eb 18                	jmp    8982e5b <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x411>
 8982e43:	89 d6                	mov    %edx,%esi
 8982e45:	89 c7                	mov    %eax,%edi
 8982e47:	89 1c 24             	mov    %ebx,(%esp)
 8982e4a:	e8 a1 16 da ff       	call   87244f0 <_ZdlPv>
 8982e4f:	89 f8                	mov    %edi,%eax
 8982e51:	89 f2                	mov    %esi,%edx
 8982e53:	89 04 24             	mov    %eax,(%esp)
 8982e56:	e8 f5 08 16 00       	call   8ae3750 <_Unwind_Resume>
 8982e5b:	89 d8                	mov    %ebx,%eax
 8982e5d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982e60:	8b 45 10             	mov    0x10(%ebp),%eax
 8982e63:	89 04 24             	mov    %eax,(%esp)
 8982e66:	e8 85 36 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982e6b:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982e6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982e72:	89 14 24             	mov    %edx,(%esp)
 8982e75:	e8 b2 22 00 00       	call   898512c <_Z26importPcBangPlayTimeScriptP20PcBangPlayTimeScriptPKc>
 8982e7a:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982e7d:	eb 57                	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982e7f:	c7 04 24 64 00 00 00 	movl   $0x64,(%esp)
 8982e86:	e8 c5 15 da ff       	call   8724450 <_Znwj>
 8982e8b:	89 c3                	mov    %eax,%ebx
 8982e8d:	89 d8                	mov    %ebx,%eax
 8982e8f:	89 04 24             	mov    %eax,(%esp)
 8982e92:	e8 55 30 00 00       	call   8985eec <_ZN25UsedFatigueGiveItemScriptC1Ev>
 8982e97:	eb 18                	jmp    8982eb1 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x467>
 8982e99:	89 d6                	mov    %edx,%esi
 8982e9b:	89 c7                	mov    %eax,%edi
 8982e9d:	89 1c 24             	mov    %ebx,(%esp)
 8982ea0:	e8 4b 16 da ff       	call   87244f0 <_ZdlPv>
 8982ea5:	89 f8                	mov    %edi,%eax
 8982ea7:	89 f2                	mov    %esi,%edx
 8982ea9:	89 04 24             	mov    %eax,(%esp)
 8982eac:	e8 9f 08 16 00       	call   8ae3750 <_Unwind_Resume>
 8982eb1:	89 d8                	mov    %ebx,%eax
 8982eb3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8982eb6:	8b 45 10             	mov    0x10(%ebp),%eax
 8982eb9:	89 04 24             	mov    %eax,(%esp)
 8982ebc:	e8 2f 36 d8 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8982ec1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8982ec4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8982ec8:	89 14 24             	mov    %edx,(%esp)
 8982ecb:	e8 4b 1a 00 00       	call   898491b <_Z36importUsedFatigueGiveItemEventScriptP25UsedFatigueGiveItemScriptPKc>
 8982ed0:	88 45 e7             	mov    %al,-0x19(%ebp)
 8982ed3:	eb 01                	jmp    8982ed6 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x48c>
 8982ed5:	90                   	nop
 8982ed6:	0f b6 45 e7          	movzbl -0x19(%ebp),%eax
 8982eda:	83 f0 01             	xor    $0x1,%eax
 8982edd:	84 c0                	test   %al,%al
 8982edf:	74 24                	je     8982f05 <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x4bb>
 8982ee1:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8982ee5:	74 17                	je     8982efe <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x4b4>
 8982ee7:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8982eea:	85 db                	test   %ebx,%ebx
 8982eec:	74 10                	je     8982efe <_ZN23InGameEventScriptLoader23importInGameEventScriptEiRKSs+0x4b4>
 8982eee:	89 1c 24             	mov    %ebx,(%esp)
 8982ef1:	e8 a0 df 78 ff       	call   8110e96 <_ZN17InGameEventScriptD1Ev>
 8982ef6:	89 1c 24             	mov    %ebx,(%esp)
 8982ef9:	e8 f2 15 da ff       	call   87244f0 <_ZdlPv>
 8982efe:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8982f05:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8982f08:	83 c4 2c             	add    $0x2c,%esp
 8982f0b:	5b                   	pop    %ebx
 8982f0c:	5e                   	pop    %esi
 8982f0d:	5f                   	pop    %edi
 8982f0e:	5d                   	pop    %ebp
 8982f0f:	c3                   	ret

```

```c
// InGameEventScriptLoader::importInGameEventScript @ 0x8982a4a

/* InGameEventScriptLoader::importInGameEventScript(int, std::string const&) */

InGameEventScript * __thiscall
InGameEventScriptLoader::importInGameEventScript
          (InGameEventScriptLoader *this,int param_1,string *param_2)

{
  char *pcVar1;
  InGameEventScript *local_24;
  char local_1d;
  
  local_24 = (InGameEventScript *)0x0;
  local_1d = '\x01';
  if (param_1 == 0x194) {
    local_24 = operator_new(0x6c);
                    /* try { // try from 08982bcd to 08982bd1 has its CatchHandler @ 08982bd4 */
    LevelUpRewardScript::LevelUpRewardScript((LevelUpRewardScript *)local_24);
    pcVar1 = (char *)std::string::c_str(param_2);
    local_1d = importLevelUpRewardScript((LevelUpRewardScript *)local_24,pcVar1);
    goto LAB_08982ed6;
  }
  if (param_1 < 0x195) {
    if (param_1 == 0x65) {
      local_24 = operator_new(100);
                    /* try { // try from 08982e92 to 08982e96 has its CatchHandler @ 08982e99 */
      UsedFatigueGiveItemScript::UsedFatigueGiveItemScript((UsedFatigueGiveItemScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importUsedFatigueGiveItemEventScript((UsedFatigueGiveItemScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 < 0x66) {
      if (param_1 == 0x56) {
        local_24 = operator_new(0x78);
                    /* try { // try from 08982de3 to 08982de7 has its CatchHandler @ 08982dea */
        AttendanceScript::AttendanceScript((AttendanceScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importAttendanceScript((AttendanceScript *)local_24,pcVar1);
      }
      else if (param_1 == 0x5c) {
        local_24 = operator_new(0x18);
                    /* try { // try from 08982e3c to 08982e40 has its CatchHandler @ 08982e43 */
        PcBangPlayTimeScript::PcBangPlayTimeScript((PcBangPlayTimeScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importPcBangPlayTimeScript((PcBangPlayTimeScript *)local_24,pcVar1);
      }
      goto LAB_08982ed6;
    }
    if (param_1 < 0x191) goto LAB_08982ed6;
    if (0x192 < param_1) {
      local_24 = operator_new(0x24);
                    /* try { // try from 08982b74 to 08982b78 has its CatchHandler @ 08982b7b */
      AddItemCountDBScript::AddItemCountDBScript((AddItemCountDBScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importAddItemCountDBEventScript((AddItemCountDBScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
  }
  else {
    if (param_1 == 0x199) {
      local_24 = operator_new(0x10);
                    /* try { // try from 08982cd8 to 08982cdc has its CatchHandler @ 08982cdf */
      FatigueQuantityScript::FatigueQuantityScript((FatigueQuantityScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importFatigueQuantityEventScript((FatigueQuantityScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 < 0x19a) {
      if (param_1 == 0x197) {
        local_24 = operator_new(100);
                    /* try { // try from 08982c7f to 08982c83 has its CatchHandler @ 08982c86 */
        AvatarDisjointRandomRewardScript::AvatarDisjointRandomRewardScript
                  ((AvatarDisjointRandomRewardScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importAvatarDisjointRandomRewardScript
                             ((AvatarDisjointRandomRewardScript *)local_24,pcVar1);
      }
      else if ((param_1 < 0x198) && (param_1 == 0x196)) {
        local_24 = operator_new(0x68);
                    /* try { // try from 08982c26 to 08982c2a has its CatchHandler @ 08982c2d */
        ExchangeRandomItemRewardScript::ExchangeRandomItemRewardScript
                  ((ExchangeRandomItemRewardScript *)local_24);
        pcVar1 = (char *)std::string::c_str(param_2);
        local_1d = importExchangeRandomItemRewardScript
                             ((ExchangeRandomItemRewardScript *)local_24,pcVar1);
      }
      goto LAB_08982ed6;
    }
    if (param_1 == 0x19b) {
      local_24 = operator_new(0x34);
                    /* try { // try from 08982d8a to 08982d8e has its CatchHandler @ 08982d91 */
      ObjectBringUpScript::ObjectBringUpScript((ObjectBringUpScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importObjectBringUpEventScript((ObjectBringUpScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 < 0x19b) {
      local_24 = operator_new(0x30);
                    /* try { // try from 08982d31 to 08982d35 has its CatchHandler @ 08982d38 */
      PurchaseCashItemBonusScript::PurchaseCashItemBonusScript
                ((PurchaseCashItemBonusScript *)local_24);
      pcVar1 = (char *)std::string::c_str(param_2);
      local_1d = importPurchaseCashItemBonusEventScript
                           ((PurchaseCashItemBonusScript *)local_24,pcVar1);
      goto LAB_08982ed6;
    }
    if (param_1 != 0x19c) goto LAB_08982ed6;
  }
  local_24 = operator_new(0x50);
                    /* try { // try from 08982b1b to 08982b1f has its CatchHandler @ 08982b22 */
  AccountFirstLoginScript::AccountFirstLoginScript((AccountFirstLoginScript *)local_24);
  pcVar1 = (char *)std::string::c_str(param_2);
  local_1d = importAccountFirstLoginEventScript((AccountFirstLoginScript *)local_24,pcVar1);
LAB_08982ed6:
  if (local_1d != '\x01') {
    if ((local_24 != (InGameEventScript *)0x0) && (local_24 != (InGameEventScript *)0x0)) {
      InGameEventScript::~InGameEventScript(local_24);
      operator_delete(local_24);
    }
    local_24 = (InGameEventScript *)0x0;
  }
  return local_24;
}

```

---

## insertEventScript

```asm
// === 08982f10 InGameEventScriptLoader::insertEventScript  [0x08982f10-0x8982f37] ===
 8982f10:	55                   	push   %ebp
 8982f11:	89 e5                	mov    %esp,%ebp
 8982f13:	83 ec 18             	sub    $0x18,%esp
 8982f16:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8982f1a:	74 17                	je     8982f33 <_ZN23InGameEventScriptLoader17insertEventScriptERKSsP17InGameEventScript+0x23>
 8982f1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8982f1f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8982f22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8982f26:	89 04 24             	mov    %eax,(%esp)
 8982f29:	e8 c6 39 00 00       	call   89868f4 <_ZNSt3mapISsP17InGameEventScriptSt4lessISsESaISt4pairIKSsS1_EEEixERS5_>
 8982f2e:	8b 55 10             	mov    0x10(%ebp),%edx
 8982f31:	89 10                	mov    %edx,(%eax)
 8982f33:	8b 45 10             	mov    0x10(%ebp),%eax
 8982f36:	c9                   	leave
 8982f37:	c3                   	ret

```

```c
// InGameEventScriptLoader::insertEventScript @ 0x8982f10

/* InGameEventScriptLoader::insertEventScript(std::string const&, InGameEventScript*) */

InGameEventScript * __thiscall
InGameEventScriptLoader::insertEventScript
          (InGameEventScriptLoader *this,string *param_1,InGameEventScript *param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != (InGameEventScript *)0x0) {
    puVar1 = (undefined4 *)
             std::
             map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
             ::operator[]((map<std::string,InGameEventScript*,std::less<std::string>,std::allocator<std::pair<std::string_const,InGameEventScript*>>>
                           *)this,param_1);
    *puVar1 = param_2;
  }
  return param_2;
}

```

