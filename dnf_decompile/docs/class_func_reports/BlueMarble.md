# BlueMarble

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 77

---

## BlueMarble

```asm
// === 080d8a5c BlueMarble::BlueMarble  [0x080d8a5c-0x80d8bad] ===
 80d8a5c:	55                   	push   %ebp
 80d8a5d:	89 e5                	mov    %esp,%ebp
 80d8a5f:	57                   	push   %edi
 80d8a60:	56                   	push   %esi
 80d8a61:	53                   	push   %ebx
 80d8a62:	83 ec 2c             	sub    $0x2c,%esp
 80d8a65:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8a68:	c7 00 ff ff ff ff    	movl   $0xffffffff,(%eax)
 80d8a6e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8a71:	83 c0 04             	add    $0x4,%eax
 80d8a74:	89 04 24             	mov    %eax,(%esp)
 80d8a77:	e8 fa 1c 00 00       	call   80da776 <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEC1Ev>
 80d8a7c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8a7f:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 80d8a86:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8a89:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 80d8a90:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8a93:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 80d8a9a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8a9d:	83 c0 20             	add    $0x20,%eax
 80d8aa0:	89 04 24             	mov    %eax,(%esp)
 80d8aa3:	e8 34 19 00 00       	call   80da3dc <_ZNSt3setIiSt4lessIiESaIiEEC1Ev>
 80d8aa8:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8aab:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 80d8ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8ab5:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 80d8abc:	c7 04 24 20 27 00 00 	movl   $0x2720,(%esp)
 80d8ac3:	e8 f8 a2 64 00       	call   8722dc0 <_Znaj>
 80d8ac8:	89 c3                	mov    %eax,%ebx
 80d8aca:	89 d8                	mov    %ebx,%eax
 80d8acc:	89 c6                	mov    %eax,%esi
 80d8ace:	bf 03 00 00 00       	mov    $0x3,%edi
 80d8ad3:	eb 11                	jmp    80d8ae6 <_ZN10BlueMarbleC1Ev+0x8a>
 80d8ad5:	89 34 24             	mov    %esi,(%esp)
 80d8ad8:	e8 6b 14 00 00       	call   80d9f48 <_ZN7CMTRandC1Ev>
 80d8add:	81 c6 c8 09 00 00    	add    $0x9c8,%esi
 80d8ae3:	83 ef 01             	sub    $0x1,%edi
 80d8ae6:	83 ff ff             	cmp    $0xffffffff,%edi
 80d8ae9:	0f 95 c0             	setne  %al
 80d8aec:	84 c0                	test   %al,%al
 80d8aee:	75 e5                	jne    80d8ad5 <_ZN10BlueMarbleC1Ev+0x79>
 80d8af0:	89 da                	mov    %ebx,%edx
 80d8af2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8af5:	89 50 14             	mov    %edx,0x14(%eax)
 80d8af8:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 80d8aff:	e8 4c 4c fa ff       	call   807d750 <time@plt>
 80d8b04:	89 45 e0             	mov    %eax,-0x20(%ebp)
 80d8b07:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80d8b0e:	eb 37                	jmp    80d8b47 <_ZN10BlueMarbleC1Ev+0xeb>
 80d8b10:	89 d6                	mov    %edx,%esi
 80d8b12:	89 c7                	mov    %eax,%edi
 80d8b14:	89 1c 24             	mov    %ebx,(%esp)
 80d8b17:	e8 94 c0 64 00       	call   8724bb0 <_ZdaPv>
 80d8b1c:	89 f8                	mov    %edi,%eax
 80d8b1e:	89 f2                	mov    %esi,%edx
 80d8b20:	eb 4e                	jmp    80d8b70 <_ZN10BlueMarbleC1Ev+0x114>
 80d8b22:	8b 45 e0             	mov    -0x20(%ebp),%eax
 80d8b25:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8b28:	8b 4a 14             	mov    0x14(%edx),%ecx
 80d8b2b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80d8b2e:	69 d2 c8 09 00 00    	imul   $0x9c8,%edx,%edx
 80d8b34:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 80d8b37:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8b3b:	89 14 24             	mov    %edx,(%esp)
 80d8b3e:	e8 db 2f ff ff       	call   80cbb1e <_ZN7CMTRand4seedEm>
 80d8b43:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80d8b47:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 80d8b4b:	0f 9e c0             	setle  %al
 80d8b4e:	84 c0                	test   %al,%al
 80d8b50:	75 d0                	jne    80d8b22 <_ZN10BlueMarbleC1Ev+0xc6>
 80d8b52:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8b55:	83 c0 04             	add    $0x4,%eax
 80d8b58:	89 04 24             	mov    %eax,(%esp)
 80d8b5b:	e8 88 1c 00 00       	call   80da7e8 <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EE5clearEv>
 80d8b60:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8b63:	83 c0 20             	add    $0x20,%eax
 80d8b66:	89 04 24             	mov    %eax,(%esp)
 80d8b69:	e8 e8 18 00 00       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 80d8b6e:	eb 36                	jmp    80d8ba6 <_ZN10BlueMarbleC1Ev+0x14a>
 80d8b70:	89 d3                	mov    %edx,%ebx
 80d8b72:	89 c6                	mov    %eax,%esi
 80d8b74:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8b77:	83 c0 20             	add    $0x20,%eax
 80d8b7a:	89 04 24             	mov    %eax,(%esp)
 80d8b7d:	e8 b2 13 00 00       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 80d8b82:	89 f0                	mov    %esi,%eax
 80d8b84:	89 da                	mov    %ebx,%edx
 80d8b86:	eb 00                	jmp    80d8b88 <_ZN10BlueMarbleC1Ev+0x12c>
 80d8b88:	89 d3                	mov    %edx,%ebx
 80d8b8a:	89 c6                	mov    %eax,%esi
 80d8b8c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8b8f:	83 c0 04             	add    $0x4,%eax
 80d8b92:	89 04 24             	mov    %eax,(%esp)
 80d8b95:	e8 f0 1b 00 00       	call   80da78a <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EED1Ev>
 80d8b9a:	89 f0                	mov    %esi,%eax
 80d8b9c:	89 da                	mov    %ebx,%edx
 80d8b9e:	89 04 24             	mov    %eax,(%esp)
 80d8ba1:	e8 aa ab a0 00       	call   8ae3750 <_Unwind_Resume>
 80d8ba6:	83 c4 2c             	add    $0x2c,%esp
 80d8ba9:	5b                   	pop    %ebx
 80d8baa:	5e                   	pop    %esi
 80d8bab:	5f                   	pop    %edi
 80d8bac:	5d                   	pop    %ebp
 80d8bad:	c3                   	ret

```

```c
// BlueMarble::BlueMarble @ 0x80d8a5c

/* BlueMarble::BlueMarble() */

void __thiscall BlueMarble::BlueMarble(BlueMarble *this)

{
  CMTRand *pCVar1;
  ulong uVar2;
  CMTRand *this_00;
  int iVar3;
  int local_20;
  
  *(undefined4 *)this = 0xffffffff;
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::vector
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4));
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
                    /* try { // try from 080d8aa3 to 080d8aa7 has its CatchHandler @ 080d8b88 */
  std::set<int,std::less<int>,std::allocator<int>>::set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
                    /* try { // try from 080d8ac3 to 080d8ac7 has its CatchHandler @ 080d8b70 */
  pCVar1 = operator_new__(0x2720);
  this_00 = pCVar1;
  for (iVar3 = 3; iVar3 != -1; iVar3 = iVar3 + -1) {
                    /* try { // try from 080d8ad8 to 080d8adc has its CatchHandler @ 080d8b10 */
    CMTRand::CMTRand(this_00);
    this_00 = this_00 + 0x9c8;
  }
  *(CMTRand **)(this + 0x14) = pCVar1;
  uVar2 = time((time_t *)0x0);
  for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
    CMTRand::seed((CMTRand *)(*(int *)(this + 0x14) + local_20 * 0x9c8),uVar2);
  }
                    /* try { // try from 080d8b5b to 080d8b6d has its CatchHandler @ 080d8b70 */
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::clear
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4));
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  return;
}

```

---

## changeState

```asm
// === 080d9202 BlueMarble::changeState  [0x080d9202-0x80d920f] ===
 80d9202:	55                   	push   %ebp
 80d9203:	89 e5                	mov    %esp,%ebp
 80d9205:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9208:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d920b:	89 50 10             	mov    %edx,0x10(%eax)
 80d920e:	5d                   	pop    %ebp
 80d920f:	c3                   	ret

```

```c
// BlueMarble::changeState @ 0x80d9202

/* BlueMarble::changeState(BlueMarbleState::T) */

void __thiscall BlueMarble::changeState(BlueMarble *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x10) = param_2;
  return;
}

```

---

## checkBlueMarbleUserConfirm

```asm
// === 080d9c12 BlueMarble::checkBlueMarbleUserConfirm  [0x080d9c12-0x80d9e22] ===
 80d9c12:	55                   	push   %ebp
 80d9c13:	89 e5                	mov    %esp,%ebp
 80d9c15:	57                   	push   %edi
 80d9c16:	56                   	push   %esi
 80d9c17:	53                   	push   %ebx
 80d9c18:	81 ec 5c 04 00 00    	sub    $0x45c,%esp
 80d9c1e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9c22:	0f 84 ef 01 00 00    	je     80d9e17 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser+0x205>
 80d9c28:	8d 9d dc fb ff ff    	lea    -0x424(%ebp),%ebx
 80d9c2e:	b8 00 00 00 00       	mov    $0x0,%eax
 80d9c33:	ba 00 01 00 00       	mov    $0x100,%edx
 80d9c38:	89 df                	mov    %ebx,%edi
 80d9c3a:	89 d1                	mov    %edx,%ecx
 80d9c3c:	f3 ab                	rep stos %eax,%es:(%edi)
 80d9c3e:	e8 3e 25 ff ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80d9c43:	89 04 24             	mov    %eax,(%esp)
 80d9c46:	e8 4f 07 00 00       	call   80da39a <_ZN12CEnvironment13get_file_nameEv>
 80d9c4b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d9c4f:	c7 44 24 04 c8 8b b2 	movl   $0x8b28bc8,0x4(%esp)
 80d9c56:	08 
 80d9c57:	8d 85 dc fb ff ff    	lea    -0x424(%ebp),%eax
 80d9c5d:	89 04 24             	mov    %eax,(%esp)
 80d9c60:	e8 db 47 fa ff       	call   807e440 <sprintf@plt>
 80d9c65:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 80d9c6c:	e9 8d 01 00 00       	jmp    80d9dfe <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser+0x1ec>
 80d9c71:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80d9c74:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9c77:	83 c2 04             	add    $0x4,%edx
 80d9c7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9c7e:	89 14 24             	mov    %edx,(%esp)
 80d9c81:	e8 48 08 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9c86:	89 04 24             	mov    %eax,(%esp)
 80d9c89:	e8 fa ce ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9c8e:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80d9c91:	0f 94 c0             	sete   %al
 80d9c94:	84 c0                	test   %al,%al
 80d9c96:	0f 84 5e 01 00 00    	je     80d9dfa <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser+0x1e8>
 80d9c9c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80d9c9f:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9ca2:	83 c2 04             	add    $0x4,%edx
 80d9ca5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9ca9:	89 14 24             	mov    %edx,(%esp)
 80d9cac:	e8 1d 08 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9cb1:	89 04 24             	mov    %eax,(%esp)
 80d9cb4:	e8 cf ce ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9cb9:	89 04 24             	mov    %eax,(%esp)
 80d9cbc:	e8 9d 06 00 00       	call   80da35e <_ZN5CUser18getBlueMarbleIndexEv>
 80d9cc1:	98                   	cwtl
 80d9cc2:	89 85 cc fb ff ff    	mov    %eax,-0x434(%ebp)
 80d9cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9ccb:	89 04 24             	mov    %eax,(%esp)
 80d9cce:	e8 61 ef ff ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 80d9cd3:	89 c7                	mov    %eax,%edi
 80d9cd5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80d9cd8:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9cdb:	83 c2 04             	add    $0x4,%edx
 80d9cde:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9ce2:	89 14 24             	mov    %edx,(%esp)
 80d9ce5:	e8 e4 07 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9cea:	89 04 24             	mov    %eax,(%esp)
 80d9ced:	e8 96 ce ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9cf2:	89 04 24             	mov    %eax,(%esp)
 80d9cf5:	e8 d0 71 5b 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 80d9cfa:	89 85 d0 fb ff ff    	mov    %eax,-0x430(%ebp)
 80d9d00:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80d9d03:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9d06:	83 c2 04             	add    $0x4,%edx
 80d9d09:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9d0d:	89 14 24             	mov    %edx,(%esp)
 80d9d10:	e8 b9 07 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9d15:	89 04 24             	mov    %eax,(%esp)
 80d9d18:	e8 6b ce ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9d1d:	89 04 24             	mov    %eax,(%esp)
 80d9d20:	e8 67 06 00 00       	call   80da38c <_ZN5CUser9get_stateEv>
 80d9d25:	89 85 d4 fb ff ff    	mov    %eax,-0x42c(%ebp)
 80d9d2b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80d9d2e:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9d31:	83 c2 04             	add    $0x4,%edx
 80d9d34:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9d38:	89 14 24             	mov    %edx,(%esp)
 80d9d3b:	e8 8e 07 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9d40:	89 04 24             	mov    %eax,(%esp)
 80d9d43:	e8 40 ce ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9d48:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80d9d4f:	ff 
 80d9d50:	89 04 24             	mov    %eax,(%esp)
 80d9d53:	e8 48 42 57 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80d9d58:	89 c6                	mov    %eax,%esi
 80d9d5a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 80d9d5d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9d60:	83 c0 04             	add    $0x4,%eax
 80d9d63:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d9d67:	89 04 24             	mov    %eax,(%esp)
 80d9d6a:	e8 5f 07 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9d6f:	89 04 24             	mov    %eax,(%esp)
 80d9d72:	e8 11 ce ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9d77:	89 04 24             	mov    %eax,(%esp)
 80d9d7a:	e8 ef 05 00 00       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80d9d7f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d9d86:	00 
 80d9d87:	89 04 24             	mov    %eax,(%esp)
 80d9d8a:	e8 bc f2 02 00       	call   810904b <_Z14NumberToStringji>
 80d9d8f:	89 c3                	mov    %eax,%ebx
 80d9d91:	c7 44 24 08 14 05 00 	movl   $0x514,0x8(%esp)
 80d9d98:	00 
 80d9d99:	c7 44 24 04 a0 98 b2 	movl   $0x8b298a0,0x4(%esp)
 80d9da0:	08 
 80d9da1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80d9da4:	89 04 24             	mov    %eax,(%esp)
 80d9da7:	e8 c0 da 02 00       	call   810786c <_ZN10CMyFileLogC1EPKci>
 80d9dac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 80d9daf:	89 44 24 24          	mov    %eax,0x24(%esp)
 80d9db3:	8b 85 cc fb ff ff    	mov    -0x434(%ebp),%eax
 80d9db9:	89 44 24 20          	mov    %eax,0x20(%esp)
 80d9dbd:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 80d9dc1:	8b 8d d0 fb ff ff    	mov    -0x430(%ebp),%ecx
 80d9dc7:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 80d9dcb:	8b bd d4 fb ff ff    	mov    -0x42c(%ebp),%edi
 80d9dd1:	89 7c 24 14          	mov    %edi,0x14(%esp)
 80d9dd5:	89 74 24 10          	mov    %esi,0x10(%esp)
 80d9dd9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80d9ddd:	c7 44 24 08 e8 8b b2 	movl   $0x8b28be8,0x8(%esp)
 80d9de4:	08 
 80d9de5:	8d 85 dc fb ff ff    	lea    -0x424(%ebp),%eax
 80d9deb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9def:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80d9df2:	89 04 24             	mov    %eax,(%esp)
 80d9df5:	e8 9e da 02 00       	call   8107898 <_ZN10CMyFileLogclEPKcS1_z>
 80d9dfa:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 80d9dfe:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9e01:	8b 40 38             	mov    0x38(%eax),%eax
 80d9e04:	8b 40 30             	mov    0x30(%eax),%eax
 80d9e07:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 80d9e0a:	0f 9f c0             	setg   %al
 80d9e0d:	84 c0                	test   %al,%al
 80d9e0f:	0f 85 5c fe ff ff    	jne    80d9c71 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser+0x5f>
 80d9e15:	eb 01                	jmp    80d9e18 <_ZN10BlueMarble26checkBlueMarbleUserConfirmEP5CUser+0x206>
 80d9e17:	90                   	nop
 80d9e18:	81 c4 5c 04 00 00    	add    $0x45c,%esp
 80d9e1e:	5b                   	pop    %ebx
 80d9e1f:	5e                   	pop    %esi
 80d9e20:	5f                   	pop    %edi
 80d9e21:	5d                   	pop    %ebp
 80d9e22:	c3                   	ret

```

```c
// BlueMarble::checkBlueMarbleUserConfirm @ 0x80d9c12

/* BlueMarble::checkBlueMarbleUserConfirm(CUser*) */

void __thiscall BlueMarble::checkBlueMarbleUserConfirm(BlueMarble *this,CUser *param_1)

{
  short sVar1;
  CEnvironment *this_00;
  undefined4 uVar2;
  BlueMarbleUserInfo *pBVar3;
  CUser *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  char local_428 [1024];
  CMyFileLog local_28 [8];
  uint local_20;
  
  if (param_1 != (CUser *)0x0) {
    pcVar11 = local_428;
    for (iVar10 = 0x100; iVar10 != 0; iVar10 = iVar10 + -1) {
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11 = pcVar11 + 4;
    }
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar2 = CEnvironment::get_file_name(this_00);
    sprintf(local_428,"./log/%s/BlueMarbleConfirmInfo",uVar2);
    for (local_20 = 0; (int)local_20 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_20 = local_20 + 1) {
      pBVar3 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_20);
      pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
      if (pCVar4 == param_1) {
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        sVar1 = CUser::getBlueMarbleIndex(pCVar4);
        uVar2 = getMemoryPoolIndex(this);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar5 = CUser::getMoveSpace(pCVar4);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar6 = CUser::get_state(pCVar4);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar7 = CUser::get_charac_no(pCVar4,-1);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_20);
        pCVar4 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        uVar8 = CUser::get_acc_id(pCVar4);
        uVar9 = NumberToString(uVar8,0);
        CMyFileLog::CMyFileLog(local_28,"void BlueMarble::checkBlueMarbleUserConfirm(CUser*)",0x514)
        ;
        CMyFileLog::operator()
                  (local_28,local_428,
                   "checkBlueMarbleUserConfirm() m_id(%s) charac_no(%u)userState(%d) userSpace(%d) blueMarble_Index(%d) user_bluemarble_index(%d) slot_index(%d)"
                   ,uVar9,uVar7,uVar6,uVar5,uVar2,(int)sVar1,local_20);
      }
    }
  }
  return;
}

```

---

## checkJoin

```asm
// === 080d8cb6 BlueMarble::checkJoin  [0x080d8cb6-0x80d8d01] ===
 80d8cb6:	55                   	push   %ebp
 80d8cb7:	89 e5                	mov    %esp,%ebp
 80d8cb9:	83 ec 18             	sub    $0x18,%esp
 80d8cbc:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8cbf:	89 04 24             	mov    %eax,(%esp)
 80d8cc2:	e8 01 e1 ff ff       	call   80d6dc8 <_ZNK10BlueMarble8getStateEv>
 80d8cc7:	85 c0                	test   %eax,%eax
 80d8cc9:	0f 95 c0             	setne  %al
 80d8ccc:	84 c0                	test   %al,%al
 80d8cce:	74 07                	je     80d8cd7 <_ZN10BlueMarble9checkJoinEv+0x21>
 80d8cd0:	b8 00 00 00 00       	mov    $0x0,%eax
 80d8cd5:	eb 29                	jmp    80d8d00 <_ZN10BlueMarble9checkJoinEv+0x4a>
 80d8cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8cda:	89 04 24             	mov    %eax,(%esp)
 80d8cdd:	e8 f8 03 00 00       	call   80d90da <_ZNK10BlueMarble16getWaitUserCountEv>
 80d8ce2:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8ce5:	8b 52 38             	mov    0x38(%edx),%edx
 80d8ce8:	8b 52 30             	mov    0x30(%edx),%edx
 80d8ceb:	39 d0                	cmp    %edx,%eax
 80d8ced:	0f 9d c0             	setge  %al
 80d8cf0:	84 c0                	test   %al,%al
 80d8cf2:	74 07                	je     80d8cfb <_ZN10BlueMarble9checkJoinEv+0x45>
 80d8cf4:	b8 00 00 00 00       	mov    $0x0,%eax
 80d8cf9:	eb 05                	jmp    80d8d00 <_ZN10BlueMarble9checkJoinEv+0x4a>
 80d8cfb:	b8 01 00 00 00       	mov    $0x1,%eax
 80d8d00:	c9                   	leave
 80d8d01:	c3                   	ret

```

```c
// BlueMarble::checkJoin @ 0x80d8cb6

/* BlueMarble::checkJoin() */

undefined4 __thiscall BlueMarble::checkJoin(BlueMarble *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getState(this);
  if (iVar1 == 0) {
    iVar1 = getWaitUserCount(this);
    if (iVar1 < *(int *)(*(int *)(this + 0x38) + 0x30)) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## checkLastZoneDungeonClear

```asm
// === 080d798c BlueMarble::checkLastZoneDungeonClear  [0x080d798c-0x80d79ed] ===
 80d798c:	55                   	push   %ebp
 80d798d:	89 e5                	mov    %esp,%ebp
 80d798f:	53                   	push   %ebx
 80d7990:	83 ec 14             	sub    $0x14,%esp
 80d7993:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7996:	89 04 24             	mov    %eax,(%esp)
 80d7999:	e8 2a f4 ff ff       	call   80d6dc8 <_ZNK10BlueMarble8getStateEv>
 80d799e:	83 f8 02             	cmp    $0x2,%eax
 80d79a1:	0f 94 c0             	sete   %al
 80d79a4:	84 c0                	test   %al,%al
 80d79a6:	74 3a                	je     80d79e2 <_ZN10BlueMarble25checkLastZoneDungeonClearEi+0x56>
 80d79a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d79ab:	8b 55 08             	mov    0x8(%ebp),%edx
 80d79ae:	83 c2 04             	add    $0x4,%edx
 80d79b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d79b5:	89 14 24             	mov    %edx,(%esp)
 80d79b8:	e8 11 2b 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d79bd:	89 04 24             	mov    %eax,(%esp)
 80d79c0:	e8 3f f2 ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d79c5:	89 c3                	mov    %eax,%ebx
 80d79c7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d79ca:	89 04 24             	mov    %eax,(%esp)
 80d79cd:	e8 fa f4 ff ff       	call   80d6ecc <_ZNK10BlueMarble15getMaxBoardSizeEv>
 80d79d2:	39 c3                	cmp    %eax,%ebx
 80d79d4:	0f 94 c0             	sete   %al
 80d79d7:	84 c0                	test   %al,%al
 80d79d9:	74 07                	je     80d79e2 <_ZN10BlueMarble25checkLastZoneDungeonClearEi+0x56>
 80d79db:	b8 01 00 00 00       	mov    $0x1,%eax
 80d79e0:	eb 05                	jmp    80d79e7 <_ZN10BlueMarble25checkLastZoneDungeonClearEi+0x5b>
 80d79e2:	b8 00 00 00 00       	mov    $0x0,%eax
 80d79e7:	83 c4 14             	add    $0x14,%esp
 80d79ea:	5b                   	pop    %ebx
 80d79eb:	5d                   	pop    %ebp
 80d79ec:	c3                   	ret
 80d79ed:	90                   	nop

```

```c
// BlueMarble::checkLastZoneDungeonClear @ 0x80d798c

/* BlueMarble::checkLastZoneDungeonClear(int) */

undefined4 __thiscall BlueMarble::checkLastZoneDungeonClear(BlueMarble *this,int param_1)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  int iVar2;
  
  iVar1 = getState(this);
  if (iVar1 == 2) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,param_1);
    iVar1 = BlueMarbleUserInfo::getBoardZone(this_00);
    iVar2 = getMaxBoardSize(this);
    if (iVar1 == iVar2) {
      return 1;
    }
  }
  return 0;
}

```

---

## checkMoveFirstZone

```asm
// === 080d78f0 BlueMarble::checkMoveFirstZone  [0x080d78f0-0x80d7939] ===
 80d78f0:	55                   	push   %ebp
 80d78f1:	89 e5                	mov    %esp,%ebp
 80d78f3:	83 ec 18             	sub    $0x18,%esp
 80d78f6:	8b 45 10             	mov    0x10(%ebp),%eax
 80d78f9:	83 f8 09             	cmp    $0x9,%eax
 80d78fc:	7c 34                	jl     80d7932 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE+0x42>
 80d78fe:	83 f8 0a             	cmp    $0xa,%eax
 80d7901:	7e 0c                	jle    80d790f <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE+0x1f>
 80d7903:	83 f8 0d             	cmp    $0xd,%eax
 80d7906:	7f 2a                	jg     80d7932 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE+0x42>
 80d7908:	b8 00 00 00 00       	mov    $0x0,%eax
 80d790d:	eb 28                	jmp    80d7937 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE+0x47>
 80d790f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7912:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7916:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7919:	89 04 24             	mov    %eax,(%esp)
 80d791c:	e8 f1 f6 ff ff       	call   80d7012 <_ZNK10BlueMarble15getMovePositionEi>
 80d7921:	83 f8 01             	cmp    $0x1,%eax
 80d7924:	0f 95 c0             	setne  %al
 80d7927:	84 c0                	test   %al,%al
 80d7929:	74 07                	je     80d7932 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE+0x42>
 80d792b:	b8 00 00 00 00       	mov    $0x0,%eax
 80d7930:	eb 05                	jmp    80d7937 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE+0x47>
 80d7932:	b8 01 00 00 00       	mov    $0x1,%eax
 80d7937:	c9                   	leave
 80d7938:	c3                   	ret
 80d7939:	90                   	nop

```

```c
// BlueMarble::checkMoveFirstZone @ 0x80d78f0

/* BlueMarble::checkMoveFirstZone(int, BlueMarbleTileScript::Type) */

undefined4 __thiscall BlueMarble::checkMoveFirstZone(BlueMarble *this,int param_1,int param_3)

{
  int iVar1;
  
  if (8 < param_3) {
    if (param_3 < 0xb) {
      iVar1 = getMovePosition(this,param_1);
      if (iVar1 != 1) {
        return 0;
      }
    }
    else if (param_3 < 0xe) {
      return 0;
    }
  }
  return 1;
}

```

---

## checkStartBlueMarble

```asm
// === 080d6dd4 BlueMarble::checkStartBlueMarble  [0x080d6dd4-0x80d6e33] ===
 80d6dd4:	55                   	push   %ebp
 80d6dd5:	89 e5                	mov    %esp,%ebp
 80d6dd7:	83 ec 18             	sub    $0x18,%esp
 80d6dda:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ddd:	89 04 24             	mov    %eax,(%esp)
 80d6de0:	e8 e3 ff ff ff       	call   80d6dc8 <_ZNK10BlueMarble8getStateEv>
 80d6de5:	83 f8 01             	cmp    $0x1,%eax
 80d6de8:	0f 95 c0             	setne  %al
 80d6deb:	84 c0                	test   %al,%al
 80d6ded:	74 07                	je     80d6df6 <_ZN10BlueMarble20checkStartBlueMarbleEv+0x22>
 80d6def:	b8 00 00 00 00       	mov    $0x0,%eax
 80d6df4:	eb 3c                	jmp    80d6e32 <_ZN10BlueMarble20checkStartBlueMarbleEv+0x5e>
 80d6df6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6df9:	89 04 24             	mov    %eax,(%esp)
 80d6dfc:	e8 d9 22 00 00       	call   80d90da <_ZNK10BlueMarble16getWaitUserCountEv>
 80d6e01:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6e04:	8b 52 38             	mov    0x38(%edx),%edx
 80d6e07:	8b 52 30             	mov    0x30(%edx),%edx
 80d6e0a:	39 d0                	cmp    %edx,%eax
 80d6e0c:	0f 9c c0             	setl   %al
 80d6e0f:	84 c0                	test   %al,%al
 80d6e11:	74 1a                	je     80d6e2d <_ZN10BlueMarble20checkStartBlueMarbleEv+0x59>
 80d6e13:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d6e1a:	00 
 80d6e1b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6e1e:	89 04 24             	mov    %eax,(%esp)
 80d6e21:	e8 dc 23 00 00       	call   80d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>
 80d6e26:	b8 00 00 00 00       	mov    $0x0,%eax
 80d6e2b:	eb 05                	jmp    80d6e32 <_ZN10BlueMarble20checkStartBlueMarbleEv+0x5e>
 80d6e2d:	b8 01 00 00 00       	mov    $0x1,%eax
 80d6e32:	c9                   	leave
 80d6e33:	c3                   	ret

```

```c
// BlueMarble::checkStartBlueMarble @ 0x80d6dd4

/* BlueMarble::checkStartBlueMarble() */

undefined4 __thiscall BlueMarble::checkStartBlueMarble(BlueMarble *this)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = getState(this);
  if (iVar1 == 1) {
    iVar1 = getWaitUserCount(this);
    if (iVar1 < *(int *)(*(int *)(this + 0x38) + 0x30)) {
      changeState(this,0);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## checkThrowDice

```asm
// === 080d6ed8 BlueMarble::checkThrowDice  [0x080d6ed8-0x80d6f61] ===
 80d6ed8:	55                   	push   %ebp
 80d6ed9:	89 e5                	mov    %esp,%ebp
 80d6edb:	53                   	push   %ebx
 80d6edc:	83 ec 14             	sub    $0x14,%esp
 80d6edf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d6ee2:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6ee5:	83 c2 04             	add    $0x4,%edx
 80d6ee8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6eec:	89 14 24             	mov    %edx,(%esp)
 80d6eef:	e8 da 35 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d6ef4:	89 04 24             	mov    %eax,(%esp)
 80d6ef7:	e8 08 fd ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d6efc:	89 c3                	mov    %eax,%ebx
 80d6efe:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6f01:	89 04 24             	mov    %eax,(%esp)
 80d6f04:	e8 c3 ff ff ff       	call   80d6ecc <_ZNK10BlueMarble15getMaxBoardSizeEv>
 80d6f09:	39 c3                	cmp    %eax,%ebx
 80d6f0b:	7d 32                	jge    80d6f3f <_ZN10BlueMarble14checkThrowDiceEi+0x67>
 80d6f0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d6f10:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6f13:	83 c2 04             	add    $0x4,%edx
 80d6f16:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6f1a:	89 14 24             	mov    %edx,(%esp)
 80d6f1d:	e8 ac 35 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d6f22:	89 04 24             	mov    %eax,(%esp)
 80d6f25:	e8 84 fc ff ff       	call   80d6bae <_ZNK18BlueMarbleUserInfo12getUserStateEv>
 80d6f2a:	83 f8 01             	cmp    $0x1,%eax
 80d6f2d:	75 10                	jne    80d6f3f <_ZN10BlueMarble14checkThrowDiceEi+0x67>
 80d6f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6f32:	89 04 24             	mov    %eax,(%esp)
 80d6f35:	e8 8e fe ff ff       	call   80d6dc8 <_ZNK10BlueMarble8getStateEv>
 80d6f3a:	83 f8 02             	cmp    $0x2,%eax
 80d6f3d:	74 07                	je     80d6f46 <_ZN10BlueMarble14checkThrowDiceEi+0x6e>
 80d6f3f:	b8 01 00 00 00       	mov    $0x1,%eax
 80d6f44:	eb 05                	jmp    80d6f4b <_ZN10BlueMarble14checkThrowDiceEi+0x73>
 80d6f46:	b8 00 00 00 00       	mov    $0x0,%eax
 80d6f4b:	84 c0                	test   %al,%al
 80d6f4d:	74 07                	je     80d6f56 <_ZN10BlueMarble14checkThrowDiceEi+0x7e>
 80d6f4f:	b8 00 00 00 00       	mov    $0x0,%eax
 80d6f54:	eb 05                	jmp    80d6f5b <_ZN10BlueMarble14checkThrowDiceEi+0x83>
 80d6f56:	b8 01 00 00 00       	mov    $0x1,%eax
 80d6f5b:	83 c4 14             	add    $0x14,%esp
 80d6f5e:	5b                   	pop    %ebx
 80d6f5f:	5d                   	pop    %ebp
 80d6f60:	c3                   	ret
 80d6f61:	90                   	nop

```

```c
// BlueMarble::checkThrowDice @ 0x80d6ed8

/* BlueMarble::checkThrowDice(int) */

bool __thiscall BlueMarble::checkThrowDice(BlueMarble *this,int param_1)

{
  bool bVar1;
  BlueMarbleUserInfo *pBVar2;
  int iVar3;
  int iVar4;
  
  pBVar2 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  iVar3 = BlueMarbleUserInfo::getBoardZone(pBVar2);
  iVar4 = getMaxBoardSize(this);
  if (iVar3 < iVar4) {
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    iVar3 = BlueMarbleUserInfo::getUserState(pBVar2);
    if ((iVar3 == 1) && (iVar3 = getState(this), iVar3 == 2)) {
      bVar1 = false;
      goto LAB_080d6f4b;
    }
  }
  bVar1 = true;
LAB_080d6f4b:
  return !bVar1;
}

```

---

## checkUserConditionEnterBlueMarble

```asm
// === 080d8d02 BlueMarble::checkUserConditionEnterBlueMarble  [0x080d8d02-0x80d8f57] ===
 80d8d02:	55                   	push   %ebp
 80d8d03:	89 e5                	mov    %esp,%ebp
 80d8d05:	83 ec 28             	sub    $0x28,%esp
 80d8d08:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d8d0c:	75 0a                	jne    80d8d18 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x16>
 80d8d0e:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8d13:	e9 3e 02 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8d18:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80d8d1f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80d8d26:	eb 2f                	jmp    80d8d57 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x55>
 80d8d28:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d8d2b:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8d2e:	83 c2 04             	add    $0x4,%edx
 80d8d31:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8d35:	89 14 24             	mov    %edx,(%esp)
 80d8d38:	e8 91 17 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8d3d:	89 04 24             	mov    %eax,(%esp)
 80d8d40:	e8 43 de ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8d45:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80d8d48:	0f 94 c0             	sete   %al
 80d8d4b:	84 c0                	test   %al,%al
 80d8d4d:	74 04                	je     80d8d53 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x51>
 80d8d4f:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80d8d53:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80d8d57:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8d5a:	8b 40 38             	mov    0x38(%eax),%eax
 80d8d5d:	8b 40 30             	mov    0x30(%eax),%eax
 80d8d60:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80d8d63:	0f 9f c0             	setg   %al
 80d8d66:	84 c0                	test   %al,%al
 80d8d68:	75 be                	jne    80d8d28 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x26>
 80d8d6a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 80d8d6e:	7e 1c                	jle    80d8d8c <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x8a>
 80d8d70:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8d73:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8d77:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8d7a:	89 04 24             	mov    %eax,(%esp)
 80d8d7d:	e8 b4 03 00 00       	call   80d9136 <_ZN10BlueMarble9leaveUserEP5CUser>
 80d8d82:	b8 12 00 00 00       	mov    $0x12,%eax
 80d8d87:	e9 ca 01 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8d8c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8d8f:	89 04 24             	mov    %eax,(%esp)
 80d8d92:	e8 f5 15 00 00       	call   80da38c <_ZN5CUser9get_stateEv>
 80d8d97:	83 f8 03             	cmp    $0x3,%eax
 80d8d9a:	0f 95 c0             	setne  %al
 80d8d9d:	84 c0                	test   %al,%al
 80d8d9f:	74 0a                	je     80d8dab <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0xa9>
 80d8da1:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8da6:	e9 ab 01 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8dab:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8dae:	89 04 24             	mov    %eax,(%esp)
 80d8db1:	e8 74 15 00 00       	call   80da32a <_ZN5CUser17checkInBlueMarbleEv>
 80d8db6:	84 c0                	test   %al,%al
 80d8db8:	74 0a                	je     80d8dc4 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0xc2>
 80d8dba:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8dbf:	e9 92 01 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8dc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8dc7:	89 04 24             	mov    %eax,(%esp)
 80d8dca:	e8 fb 80 5b 00       	call   8690eca <_ZNK5CUser12getMoveSpaceEv>
 80d8dcf:	83 f8 01             	cmp    $0x1,%eax
 80d8dd2:	0f 94 c0             	sete   %al
 80d8dd5:	84 c0                	test   %al,%al
 80d8dd7:	74 0a                	je     80d8de3 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0xe1>
 80d8dd9:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8dde:	e9 73 01 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8de3:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8de6:	89 04 24             	mov    %eax,(%esp)
 80d8de9:	e8 ca 14 00 00       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80d8dee:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8df1:	8b 52 38             	mov    0x38(%edx),%edx
 80d8df4:	8b 52 34             	mov    0x34(%edx),%edx
 80d8df7:	39 d0                	cmp    %edx,%eax
 80d8df9:	7c 18                	jl     80d8e13 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x111>
 80d8dfb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8dfe:	89 04 24             	mov    %eax,(%esp)
 80d8e01:	e8 b2 14 00 00       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80d8e06:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8e09:	8b 52 38             	mov    0x38(%edx),%edx
 80d8e0c:	8b 52 38             	mov    0x38(%edx),%edx
 80d8e0f:	39 d0                	cmp    %edx,%eax
 80d8e11:	7e 07                	jle    80d8e1a <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x118>
 80d8e13:	b8 01 00 00 00       	mov    $0x1,%eax
 80d8e18:	eb 05                	jmp    80d8e1f <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x11d>
 80d8e1a:	b8 00 00 00 00       	mov    $0x0,%eax
 80d8e1f:	84 c0                	test   %al,%al
 80d8e21:	74 0a                	je     80d8e2d <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x12b>
 80d8e23:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8e28:	e9 29 01 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8e2d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8e30:	89 04 24             	mov    %eax,(%esp)
 80d8e33:	e8 0a 81 5b 00       	call   8690f42 <_ZNK15CUserCharacInfo23getBlueMarbleEnterCountEv>
 80d8e38:	0f b6 d0             	movzbl %al,%edx
 80d8e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8e3e:	8b 40 38             	mov    0x38(%eax),%eax
 80d8e41:	8b 40 3c             	mov    0x3c(%eax),%eax
 80d8e44:	39 c2                	cmp    %eax,%edx
 80d8e46:	0f 9d c0             	setge  %al
 80d8e49:	84 c0                	test   %al,%al
 80d8e4b:	74 0a                	je     80d8e57 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x155>
 80d8e4d:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8e52:	e9 ff 00 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8e57:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8e5a:	89 04 24             	mov    %eax,(%esp)
 80d8e5d:	e8 02 c7 56 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 80d8e62:	3c 07                	cmp    $0x7,%al
 80d8e64:	0f 94 c0             	sete   %al
 80d8e67:	84 c0                	test   %al,%al
 80d8e69:	74 0a                	je     80d8e75 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x173>
 80d8e6b:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8e70:	e9 e1 00 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8e75:	e8 6e bd 4e 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 80d8e7a:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d8e7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d8e81:	89 04 24             	mov    %eax,(%esp)
 80d8e84:	e8 d5 1e 4f 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 80d8e89:	84 c0                	test   %al,%al
 80d8e8b:	74 0a                	je     80d8e97 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x195>
 80d8e8d:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8e92:	e9 bf 00 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8e97:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8e9a:	89 04 24             	mov    %eax,(%esp)
 80d8e9d:	e8 7c e9 56 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 80d8ea2:	84 c0                	test   %al,%al
 80d8ea4:	74 0a                	je     80d8eb0 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x1ae>
 80d8ea6:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8eab:	e9 a6 00 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8eb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8eb3:	89 04 24             	mov    %eax,(%esp)
 80d8eb6:	e8 1f 14 00 00       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 80d8ebb:	84 c0                	test   %al,%al
 80d8ebd:	74 0a                	je     80d8ec9 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x1c7>
 80d8ebf:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8ec4:	e9 8d 00 00 00       	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8ec9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8ecc:	89 04 24             	mov    %eax,(%esp)
 80d8ecf:	e8 2a 14 00 00       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 80d8ed4:	84 c0                	test   %al,%al
 80d8ed6:	74 07                	je     80d8edf <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x1dd>
 80d8ed8:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8edd:	eb 77                	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8edf:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8ee2:	89 04 24             	mov    %eax,(%esp)
 80d8ee5:	e8 d6 5a 5b 00       	call   868e9c0 <_ZNK5CUser22isCompetitionMercenaryEv>
 80d8eea:	84 c0                	test   %al,%al
 80d8eec:	74 07                	je     80d8ef5 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x1f3>
 80d8eee:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8ef3:	eb 61                	jmp    80d8f56 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x254>
 80d8ef5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8ef8:	89 04 24             	mov    %eax,(%esp)
 80d8efb:	e8 14 14 00 00       	call   80da314 <_ZN5CUser12CheckInPartyEv>
 80d8f00:	84 c0                	test   %al,%al
 80d8f02:	74 4d                	je     80d8f51 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x24f>
 80d8f04:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8f07:	89 04 24             	mov    %eax,(%esp)
 80d8f0a:	e8 3d c2 57 00       	call   865514c <_ZN5CUser8GetPartyEv>
 80d8f0f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d8f12:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d8f16:	74 39                	je     80d8f51 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser+0x24f>
 80d8f18:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8f1b:	89 04 24             	mov    %eax,(%esp)
 80d8f1e:	e8 59 14 00 00       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 80d8f23:	0f b7 c0             	movzwl %ax,%eax
 80d8f26:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8f2a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8f2d:	89 04 24             	mov    %eax,(%esp)
 80d8f30:	e8 83 45 4c 00       	call   859d4b8 <_ZN6CParty22send_invite_bluemarbleEi>
 80d8f35:	e8 54 32 ff ff       	call   80cc18e <_Z14G_CGameManagerv>
 80d8f3a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80d8f41:	00 
 80d8f42:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d8f45:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d8f49:	89 04 24             	mov    %eax,(%esp)
 80d8f4c:	e8 25 ed 1b 00       	call   8297c76 <_ZN12CGameManager13CheckOutPartyEP5CUserb>
 80d8f51:	b8 00 00 00 00       	mov    $0x0,%eax
 80d8f56:	c9                   	leave
 80d8f57:	c3                   	ret

```

```c
// BlueMarble::checkUserConditionEnterBlueMarble @ 0x80d8d02

/* BlueMarble::checkUserConditionEnterBlueMarble(CUser*) */

undefined4 __thiscall BlueMarble::checkUserConditionEnterBlueMarble(BlueMarble *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  BlueMarbleUserInfo *this_00;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  CPrivateStoreMgr *this_01;
  CParty *this_02;
  CUser *pCVar6;
  int local_18;
  uint local_14;
  
  if (param_1 == (CUser *)0x0) {
    return 0x17;
  }
  local_18 = 0;
  for (local_14 = 0; (int)local_14 < *(int *)(*(int *)(this + 0x38) + 0x30); local_14 = local_14 + 1
      ) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,local_14);
    pCVar6 = (CUser *)BlueMarbleUserInfo::getUser(this_00);
    if (pCVar6 == param_1) {
      local_18 = local_18 + 1;
    }
  }
  if (0 < local_18) {
    leaveUser(this,param_1);
    return 0x12;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 3) {
    return 0x17;
  }
  cVar2 = CUser::checkInBlueMarble(param_1);
  if (cVar2 == '\0') {
    iVar3 = CUser::getMoveSpace(param_1);
    if (iVar3 != 1) {
      iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
      if ((iVar3 < *(int *)(*(int *)(this + 0x38) + 0x34)) ||
         (iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1),
         *(int *)(*(int *)(this + 0x38) + 0x38) < iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar4 = 0x17;
      }
      else {
        uVar5 = CUserCharacInfo::getBlueMarbleEnterCount((CUserCharacInfo *)param_1);
        if ((int)(uVar5 & 0xff) < *(int *)(*(int *)(this + 0x38) + 0x3c)) {
          cVar2 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
          if (cVar2 == '\a') {
            uVar4 = 0x17;
          }
          else {
            this_01 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
            cVar2 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_01,param_1);
            if (cVar2 == '\0') {
              cVar2 = CUserCharacInfo::IsBusyDisjointStore((CUserCharacInfo *)param_1);
              if (cVar2 == '\0') {
                cVar2 = CUserCharacInfo::IsCurCharacGhost((CUserCharacInfo *)param_1);
                if (cVar2 == '\0') {
                  cVar2 = CUser::CheckInTrade(param_1);
                  if (cVar2 == '\0') {
                    cVar2 = CUser::isCompetitionMercenary(param_1);
                    if (cVar2 == '\0') {
                      cVar2 = CUser::CheckInParty(param_1);
                      if ((cVar2 != '\0') &&
                         (this_02 = (CParty *)CUser::GetParty(param_1), this_02 != (CParty *)0x0)) {
                        uVar5 = CUser::get_unique_id(param_1);
                        CParty::send_invite_bluemarble(this_02,uVar5 & 0xffff);
                        pCVar6 = (CUser *)G_CGameManager();
                        CGameManager::CheckOutParty(pCVar6,SUB41(param_1,0));
                      }
                      uVar4 = 0;
                    }
                    else {
                      uVar4 = 0x17;
                    }
                  }
                  else {
                    uVar4 = 0x17;
                  }
                }
                else {
                  uVar4 = 0x17;
                }
              }
              else {
                uVar4 = 0x17;
              }
            }
            else {
              uVar4 = 0x17;
            }
          }
        }
        else {
          uVar4 = 0x17;
        }
      }
      return uVar4;
    }
    return 0x17;
  }
  return 0x17;
}

```

---

## clearDungeon

```asm
// === 080d96f4 BlueMarble::clearDungeon  [0x080d96f4-0x80d978b] ===
 80d96f4:	55                   	push   %ebp
 80d96f5:	89 e5                	mov    %esp,%ebp
 80d96f7:	83 ec 38             	sub    $0x38,%esp
 80d96fa:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d96fe:	0f 84 85 00 00 00    	je     80d9789 <_ZN10BlueMarble12clearDungeonEP5CUser+0x95>
 80d9704:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9707:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d970b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d970e:	89 04 24             	mov    %eax,(%esp)
 80d9711:	e8 5e f9 ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d9716:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d9719:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d971d:	75 35                	jne    80d9754 <_ZN10BlueMarble12clearDungeonEP5CUser+0x60>
 80d971f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9722:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d9726:	c7 44 24 10 1c 8b b2 	movl   $0x8b28b1c,0x10(%esp)
 80d972d:	08 
 80d972e:	c7 44 24 0c 8a 04 00 	movl   $0x48a,0xc(%esp)
 80d9735:	00 
 80d9736:	c7 44 24 08 e0 99 b2 	movl   $0x8b299e0,0x8(%esp)
 80d973d:	08 
 80d973e:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d9745:	08 
 80d9746:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d974d:	e8 b8 a4 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d9752:	eb 36                	jmp    80d978a <_ZN10BlueMarble12clearDungeonEP5CUser+0x96>
 80d9754:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9757:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d975b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d975e:	89 04 24             	mov    %eax,(%esp)
 80d9761:	e8 26 e2 ff ff       	call   80d798c <_ZN10BlueMarble25checkLastZoneDungeonClearEi>
 80d9766:	84 c0                	test   %al,%al
 80d9768:	74 20                	je     80d978a <_ZN10BlueMarble12clearDungeonEP5CUser+0x96>
 80d976a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d976d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9771:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9774:	89 04 24             	mov    %eax,(%esp)
 80d9777:	e8 72 e2 ff ff       	call   80d79ee <_ZN10BlueMarble16finishBlueMarbleEi>
 80d977c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d977f:	89 04 24             	mov    %eax,(%esp)
 80d9782:	e8 57 e6 ff ff       	call   80d7dde <_ZN10BlueMarble12resultRewardEv>
 80d9787:	eb 01                	jmp    80d978a <_ZN10BlueMarble12clearDungeonEP5CUser+0x96>
 80d9789:	90                   	nop
 80d978a:	c9                   	leave
 80d978b:	c3                   	ret

```

```c
// BlueMarble::clearDungeon @ 0x80d96f4

/* BlueMarble::clearDungeon(CUser*) */

void __thiscall BlueMarble::clearDungeon(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = getUserSlot(this,param_1);
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::clearDungeon(CUser*)",0x48a,
                 "BlueMarble::clearDungeon slot(%d)",0xffffffff);
    }
    else {
      cVar1 = checkLastZoneDungeonClear(this,iVar2);
      if (cVar1 != '\0') {
        finishBlueMarble(this,iVar2);
        resultReward(this);
      }
    }
  }
  return;
}

```

---

## enterBlueMarble

```asm
// === 080d9210 BlueMarble::enterBlueMarble  [0x080d9210-0x80d92bd] ===
 80d9210:	55                   	push   %ebp
 80d9211:	89 e5                	mov    %esp,%ebp
 80d9213:	83 ec 28             	sub    $0x28,%esp
 80d9216:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d921d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9221:	75 0a                	jne    80d922d <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0x1d>
 80d9223:	b8 17 00 00 00       	mov    $0x17,%eax
 80d9228:	e9 8e 00 00 00       	jmp    80d92bb <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0xab>
 80d922d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9230:	89 04 24             	mov    %eax,(%esp)
 80d9233:	e8 7e fa ff ff       	call   80d8cb6 <_ZN10BlueMarble9checkJoinEv>
 80d9238:	83 f0 01             	xor    $0x1,%eax
 80d923b:	84 c0                	test   %al,%al
 80d923d:	74 07                	je     80d9246 <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0x36>
 80d923f:	b8 17 00 00 00       	mov    $0x17,%eax
 80d9244:	eb 75                	jmp    80d92bb <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0xab>
 80d9246:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9249:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d924d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9250:	89 04 24             	mov    %eax,(%esp)
 80d9253:	e8 aa fa ff ff       	call   80d8d02 <_ZN10BlueMarble33checkUserConditionEnterBlueMarbleEP5CUser>
 80d9258:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d925b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d925f:	7e 05                	jle    80d9266 <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0x56>
 80d9261:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9264:	eb 55                	jmp    80d92bb <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0xab>
 80d9266:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9269:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d926d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9270:	89 04 24             	mov    %eax,(%esp)
 80d9273:	e8 e0 fc ff ff       	call   80d8f58 <_ZN10BlueMarble4joinEP5CUser>
 80d9278:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d927b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d927f:	7e 05                	jle    80d9286 <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0x76>
 80d9281:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9284:	eb 35                	jmp    80d92bb <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0xab>
 80d9286:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9289:	89 04 24             	mov    %eax,(%esp)
 80d928c:	e8 49 fe ff ff       	call   80d90da <_ZNK10BlueMarble16getWaitUserCountEv>
 80d9291:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9294:	8b 52 38             	mov    0x38(%edx),%edx
 80d9297:	8b 52 30             	mov    0x30(%edx),%edx
 80d929a:	39 d0                	cmp    %edx,%eax
 80d929c:	0f 94 c0             	sete   %al
 80d929f:	84 c0                	test   %al,%al
 80d92a1:	74 13                	je     80d92b6 <_ZN10BlueMarble15enterBlueMarbleEP5CUser+0xa6>
 80d92a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d92aa:	00 
 80d92ab:	8b 45 08             	mov    0x8(%ebp),%eax
 80d92ae:	89 04 24             	mov    %eax,(%esp)
 80d92b1:	e8 4c ff ff ff       	call   80d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>
 80d92b6:	b8 00 00 00 00       	mov    $0x0,%eax
 80d92bb:	c9                   	leave
 80d92bc:	c3                   	ret
 80d92bd:	90                   	nop

```

```c
// BlueMarble::enterBlueMarble @ 0x80d9210

/* BlueMarble::enterBlueMarble(CUser*) */

int __thiscall BlueMarble::enterBlueMarble(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    iVar2 = 0x17;
  }
  else {
    cVar1 = checkJoin(this);
    if (cVar1 == '\x01') {
      iVar2 = checkUserConditionEnterBlueMarble(this,param_1);
      if ((iVar2 < 1) && (iVar2 = join(this,param_1), iVar2 < 1)) {
        iVar2 = getWaitUserCount(this);
        if (iVar2 == *(int *)(*(int *)(this + 0x38) + 0x30)) {
          changeState(this,1);
        }
        iVar2 = 0;
      }
    }
    else {
      iVar2 = 0x17;
    }
  }
  return iVar2;
}

```

---

## enterDungeon

```asm
// === 080d94f6 BlueMarble::enterDungeon  [0x080d94f6-0x80d9571] ===
 80d94f6:	55                   	push   %ebp
 80d94f7:	89 e5                	mov    %esp,%ebp
 80d94f9:	83 ec 38             	sub    $0x38,%esp
 80d94fc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9500:	74 6c                	je     80d956e <_ZN10BlueMarble12enterDungeonEP5CUser+0x78>
 80d9502:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9505:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9509:	8b 45 08             	mov    0x8(%ebp),%eax
 80d950c:	89 04 24             	mov    %eax,(%esp)
 80d950f:	e8 60 fb ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d9514:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d9517:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d951b:	75 35                	jne    80d9552 <_ZN10BlueMarble12enterDungeonEP5CUser+0x5c>
 80d951d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9520:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d9524:	c7 44 24 10 d4 8a b2 	movl   $0x8b28ad4,0x10(%esp)
 80d952b:	08 
 80d952c:	c7 44 24 0c 5c 04 00 	movl   $0x45c,0xc(%esp)
 80d9533:	00 
 80d9534:	c7 44 24 08 60 9a b2 	movl   $0x8b29a60,0x8(%esp)
 80d953b:	08 
 80d953c:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d9543:	08 
 80d9544:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d954b:	e8 ba a6 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d9550:	eb 1d                	jmp    80d956f <_ZN10BlueMarble12enterDungeonEP5CUser+0x79>
 80d9552:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 80d9559:	00 
 80d955a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d955d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9561:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9564:	89 04 24             	mov    %eax,(%esp)
 80d9567:	e8 ce e3 ff ff       	call   80d793a <_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE>
 80d956c:	eb 01                	jmp    80d956f <_ZN10BlueMarble12enterDungeonEP5CUser+0x79>
 80d956e:	90                   	nop
 80d956f:	c9                   	leave
 80d9570:	c3                   	ret
 80d9571:	90                   	nop

```

```c
// BlueMarble::enterDungeon @ 0x80d94f6

/* BlueMarble::enterDungeon(CUser*) */

void __thiscall BlueMarble::enterDungeon(BlueMarble *this,CUser *param_1)

{
  int iVar1;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = getUserSlot(this,param_1);
    if (iVar1 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::enterDungeon(CUser*)",0x45c,
                 "BlueMarble::enterDungeon slot(%d)",0xffffffff);
    }
    else {
      setUserState(this,iVar1,2);
    }
  }
  return;
}

```

---

## exitDungeon

```asm
// === 080d978c BlueMarble::exitDungeon  [0x080d978c-0x80d9807] ===
 80d978c:	55                   	push   %ebp
 80d978d:	89 e5                	mov    %esp,%ebp
 80d978f:	83 ec 38             	sub    $0x38,%esp
 80d9792:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9796:	74 6c                	je     80d9804 <_ZN10BlueMarble11exitDungeonEP5CUser+0x78>
 80d9798:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d979b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d979f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d97a2:	89 04 24             	mov    %eax,(%esp)
 80d97a5:	e8 ca f8 ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d97aa:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d97ad:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d97b1:	75 35                	jne    80d97e8 <_ZN10BlueMarble11exitDungeonEP5CUser+0x5c>
 80d97b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d97b6:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d97ba:	c7 44 24 10 40 8b b2 	movl   $0x8b28b40,0x10(%esp)
 80d97c1:	08 
 80d97c2:	c7 44 24 0c 9d 04 00 	movl   $0x49d,0xc(%esp)
 80d97c9:	00 
 80d97ca:	c7 44 24 08 a0 99 b2 	movl   $0x8b299a0,0x8(%esp)
 80d97d1:	08 
 80d97d2:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d97d9:	08 
 80d97da:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d97e1:	e8 24 a4 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d97e6:	eb 1d                	jmp    80d9805 <_ZN10BlueMarble11exitDungeonEP5CUser+0x79>
 80d97e8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80d97ef:	00 
 80d97f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d97f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d97f7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d97fa:	89 04 24             	mov    %eax,(%esp)
 80d97fd:	e8 38 e1 ff ff       	call   80d793a <_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE>
 80d9802:	eb 01                	jmp    80d9805 <_ZN10BlueMarble11exitDungeonEP5CUser+0x79>
 80d9804:	90                   	nop
 80d9805:	c9                   	leave
 80d9806:	c3                   	ret
 80d9807:	90                   	nop

```

```c
// BlueMarble::exitDungeon @ 0x80d978c

/* BlueMarble::exitDungeon(CUser*) */

void __thiscall BlueMarble::exitDungeon(BlueMarble *this,CUser *param_1)

{
  int iVar1;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = getUserSlot(this,param_1);
    if (iVar1 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::exitDungeon(CUser*)",0x49d,
                 "BlueMarble::exitDungeon slot(%d)",0xffffffff);
    }
    else {
      setUserState(this,iVar1,1);
    }
  }
  return;
}

```

---

## finishBlueMarble

```asm
// === 080d79ee BlueMarble::finishBlueMarble  [0x080d79ee-0x80d7a25] ===
 80d79ee:	55                   	push   %ebp
 80d79ef:	89 e5                	mov    %esp,%ebp
 80d79f1:	83 ec 18             	sub    $0x18,%esp
 80d79f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d79f7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d79fb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d79fe:	89 04 24             	mov    %eax,(%esp)
 80d7a01:	e8 f6 00 00 00       	call   80d7afc <_ZN10BlueMarble12setUserGradeEi>
 80d7a06:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 80d7a0d:	00 
 80d7a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7a11:	89 04 24             	mov    %eax,(%esp)
 80d7a14:	e8 e9 17 00 00       	call   80d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>
 80d7a19:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7a1c:	89 04 24             	mov    %eax,(%esp)
 80d7a1f:	e8 2e 0d 00 00       	call   80d8752 <_ZNK10BlueMarble20sendFinishBlueMarbleEv>
 80d7a24:	c9                   	leave
 80d7a25:	c3                   	ret

```

```c
// BlueMarble::finishBlueMarble @ 0x80d79ee

/* BlueMarble::finishBlueMarble(int) */

void __thiscall BlueMarble::finishBlueMarble(BlueMarble *this,int param_1)

{
  setUserGrade(this,param_1);
  changeState(this,3);
  sendFinishBlueMarble(this);
  return;
}

```

---

## getBlueMarbleMap

```asm
// === 080d6e7c BlueMarble::getBlueMarbleMap  [0x080d6e7c-0x80d6e87] ===
 80d6e7c:	55                   	push   %ebp
 80d6e7d:	89 e5                	mov    %esp,%ebp
 80d6e7f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6e82:	8b 40 1c             	mov    0x1c(%eax),%eax
 80d6e85:	5d                   	pop    %ebp
 80d6e86:	c3                   	ret
 80d6e87:	90                   	nop

```

```c
// BlueMarble::getBlueMarbleMap @ 0x80d6e7c

/* BlueMarble::getBlueMarbleMap() const */

undefined4 __thiscall BlueMarble::getBlueMarbleMap(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x1c);
}

```

---

## getBuff

```asm
// === 080d990e BlueMarble::getBuff  [0x080d990e-0x80d99cd] ===
 80d990e:	55                   	push   %ebp
 80d990f:	89 e5                	mov    %esp,%ebp
 80d9911:	83 ec 38             	sub    $0x38,%esp
 80d9914:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9918:	75 0a                	jne    80d9924 <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0x16>
 80d991a:	b8 00 00 00 00       	mov    $0x0,%eax
 80d991f:	e9 a7 00 00 00       	jmp    80d99cb <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xbd>
 80d9924:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9927:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d992b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d992e:	89 04 24             	mov    %eax,(%esp)
 80d9931:	e8 3e f7 ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d9936:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d9939:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d993d:	75 3a                	jne    80d9979 <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0x6b>
 80d993f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9942:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d9946:	c7 44 24 10 87 8b b2 	movl   $0x8b28b87,0x10(%esp)
 80d994d:	08 
 80d994e:	c7 44 24 0c c7 04 00 	movl   $0x4c7,0xc(%esp)
 80d9955:	00 
 80d9956:	c7 44 24 08 20 99 b2 	movl   $0x8b29920,0x8(%esp)
 80d995d:	08 
 80d995e:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d9965:	08 
 80d9966:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d996d:	e8 98 a2 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d9972:	b8 00 00 00 00       	mov    $0x0,%eax
 80d9977:	eb 52                	jmp    80d99cb <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xbd>
 80d9979:	8b 45 10             	mov    0x10(%ebp),%eax
 80d997c:	83 f8 01             	cmp    $0x1,%eax
 80d997f:	74 1d                	je     80d999e <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0x90>
 80d9981:	83 f8 02             	cmp    $0x2,%eax
 80d9984:	74 2c                	je     80d99b2 <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xa4>
 80d9986:	85 c0                	test   %eax,%eax
 80d9988:	75 3c                	jne    80d99c6 <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xb8>
 80d998a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d998d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9991:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9994:	89 04 24             	mov    %eax,(%esp)
 80d9997:	e8 2e de ff ff       	call   80d77ca <_ZNK10BlueMarble10getExpBuffEi>
 80d999c:	eb 2d                	jmp    80d99cb <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xbd>
 80d999e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d99a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d99a5:	8b 45 08             	mov    0x8(%ebp),%eax
 80d99a8:	89 04 24             	mov    %eax,(%esp)
 80d99ab:	e8 6c de ff ff       	call   80d781c <_ZNK10BlueMarble11getGoldBuffEi>
 80d99b0:	eb 19                	jmp    80d99cb <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xbd>
 80d99b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d99b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d99b9:	8b 45 08             	mov    0x8(%ebp),%eax
 80d99bc:	89 04 24             	mov    %eax,(%esp)
 80d99bf:	e8 aa de ff ff       	call   80d786e <_ZNK10BlueMarble11getDropBuffEi>
 80d99c4:	eb 05                	jmp    80d99cb <_ZN10BlueMarble7getBuffEP5CUserN18BlueMarbleBuffType1TE+0xbd>
 80d99c6:	b8 00 00 00 00       	mov    $0x0,%eax
 80d99cb:	c9                   	leave
 80d99cc:	c3                   	ret
 80d99cd:	90                   	nop

```

```c
// BlueMarble::getBuff @ 0x80d990e

/* BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T) */

undefined4 __thiscall BlueMarble::getBuff(BlueMarble *this,CUser *param_1,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = getUserSlot(this,param_1);
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","int BlueMarble::getBuff(CUser*, BlueMarbleBuffType::T)",0x4c7,
                 "BlueMarble::getBuff slot(%d)",0xffffffff);
      uVar1 = 0;
    }
    else if (param_3 == 1) {
      uVar1 = getGoldBuff(this,iVar2);
    }
    else if (param_3 == 2) {
      uVar1 = getDropBuff(this,iVar2);
    }
    else if (param_3 == 0) {
      uVar1 = getExpBuff(this,iVar2);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## getDiceNumber

```asm
// === 080d6fc4 BlueMarble::getDiceNumber  [0x080d6fc4-0x80d6fcf] ===
 80d6fc4:	55                   	push   %ebp
 80d6fc5:	89 e5                	mov    %esp,%ebp
 80d6fc7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6fca:	8b 40 18             	mov    0x18(%eax),%eax
 80d6fcd:	5d                   	pop    %ebp
 80d6fce:	c3                   	ret
 80d6fcf:	90                   	nop

```

```c
// BlueMarble::getDiceNumber @ 0x80d6fc4

/* BlueMarble::getDiceNumber() const */

undefined4 __thiscall BlueMarble::getDiceNumber(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x18);
}

```

---

## getDropBuff

```asm
// === 080d786e BlueMarble::getDropBuff  [0x080d786e-0x80d7893] ===
 80d786e:	55                   	push   %ebp
 80d786f:	89 e5                	mov    %esp,%ebp
 80d7871:	83 ec 18             	sub    $0x18,%esp
 80d7874:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7877:	8b 55 08             	mov    0x8(%ebp),%edx
 80d787a:	83 c2 04             	add    $0x4,%edx
 80d787d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7881:	89 14 24             	mov    %edx,(%esp)
 80d7884:	e8 7b 2c 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7889:	89 04 24             	mov    %eax,(%esp)
 80d788c:	e8 ab f4 ff ff       	call   80d6d3c <_ZNK18BlueMarbleUserInfo7getDropEv>
 80d7891:	c9                   	leave
 80d7892:	c3                   	ret
 80d7893:	90                   	nop

```

```c
// BlueMarble::getDropBuff @ 0x80d786e

/* BlueMarble::getDropBuff(int) const */

void __thiscall BlueMarble::getDropBuff(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getDrop(this_00);
  return;
}

```

---

## getDungeonIndex

```asm
// === 080d73b6 BlueMarble::getDungeonIndex  [0x080d73b6-0x80d73db] ===
 80d73b6:	55                   	push   %ebp
 80d73b7:	89 e5                	mov    %esp,%ebp
 80d73b9:	83 ec 18             	sub    $0x18,%esp
 80d73bc:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d73bf:	8b 55 08             	mov    0x8(%ebp),%edx
 80d73c2:	83 c2 04             	add    $0x4,%edx
 80d73c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d73c9:	89 14 24             	mov    %edx,(%esp)
 80d73cc:	e8 33 31 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d73d1:	89 04 24             	mov    %eax,(%esp)
 80d73d4:	e8 5f f8 ff ff       	call   80d6c38 <_ZNK18BlueMarbleUserInfo10getDungeonEv>
 80d73d9:	c9                   	leave
 80d73da:	c3                   	ret
 80d73db:	90                   	nop

```

```c
// BlueMarble::getDungeonIndex @ 0x80d73b6

/* BlueMarble::getDungeonIndex(int) const */

void __thiscall BlueMarble::getDungeonIndex(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getDungeon(this_00);
  return;
}

```

---

## getExpBuff

```asm
// === 080d77ca BlueMarble::getExpBuff  [0x080d77ca-0x80d77ef] ===
 80d77ca:	55                   	push   %ebp
 80d77cb:	89 e5                	mov    %esp,%ebp
 80d77cd:	83 ec 18             	sub    $0x18,%esp
 80d77d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d77d3:	8b 55 08             	mov    0x8(%ebp),%edx
 80d77d6:	83 c2 04             	add    $0x4,%edx
 80d77d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d77dd:	89 14 24             	mov    %edx,(%esp)
 80d77e0:	e8 1f 2d 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d77e5:	89 04 24             	mov    %eax,(%esp)
 80d77e8:	e8 b3 f4 ff ff       	call   80d6ca0 <_ZNK18BlueMarbleUserInfo6getExpEv>
 80d77ed:	c9                   	leave
 80d77ee:	c3                   	ret
 80d77ef:	90                   	nop

```

```c
// BlueMarble::getExpBuff @ 0x80d77ca

/* BlueMarble::getExpBuff(int) const */

void __thiscall BlueMarble::getExpBuff(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getExp(this_00);
  return;
}

```

---

## getGoldBuff

```asm
// === 080d781c BlueMarble::getGoldBuff  [0x080d781c-0x80d7841] ===
 80d781c:	55                   	push   %ebp
 80d781d:	89 e5                	mov    %esp,%ebp
 80d781f:	83 ec 18             	sub    $0x18,%esp
 80d7822:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7825:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7828:	83 c2 04             	add    $0x4,%edx
 80d782b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d782f:	89 14 24             	mov    %edx,(%esp)
 80d7832:	e8 cd 2c 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7837:	89 04 24             	mov    %eax,(%esp)
 80d783a:	e8 af f4 ff ff       	call   80d6cee <_ZNK18BlueMarbleUserInfo7getGoldEv>
 80d783f:	c9                   	leave
 80d7840:	c3                   	ret
 80d7841:	90                   	nop

```

```c
// BlueMarble::getGoldBuff @ 0x80d781c

/* BlueMarble::getGoldBuff(int) const */

void __thiscall BlueMarble::getGoldBuff(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getGold(this_00);
  return;
}

```

---

## getItemIndex

```asm
// === 080d7778 BlueMarble::getItemIndex  [0x080d7778-0x80d779d] ===
 80d7778:	55                   	push   %ebp
 80d7779:	89 e5                	mov    %esp,%ebp
 80d777b:	83 ec 18             	sub    $0x18,%esp
 80d777e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7781:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7784:	83 c2 04             	add    $0x4,%edx
 80d7787:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d778b:	89 14 24             	mov    %edx,(%esp)
 80d778e:	e8 71 2d 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7793:	89 04 24             	mov    %eax,(%esp)
 80d7796:	e8 b7 f4 ff ff       	call   80d6c52 <_ZNK18BlueMarbleUserInfo7getItemEv>
 80d779b:	c9                   	leave
 80d779c:	c3                   	ret
 80d779d:	90                   	nop

```

```c
// BlueMarble::getItemIndex @ 0x80d7778

/* BlueMarble::getItemIndex(int) const */

void __thiscall BlueMarble::getItemIndex(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getItem(this_00);
  return;
}

```

---

## getMaxBoardSize

```asm
// === 080d6ecc BlueMarble::getMaxBoardSize  [0x080d6ecc-0x80d6ed7] ===
 80d6ecc:	55                   	push   %ebp
 80d6ecd:	89 e5                	mov    %esp,%ebp
 80d6ecf:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ed2:	8b 40 3c             	mov    0x3c(%eax),%eax
 80d6ed5:	5d                   	pop    %ebp
 80d6ed6:	c3                   	ret
 80d6ed7:	90                   	nop

```

```c
// BlueMarble::getMaxBoardSize @ 0x80d6ecc

/* BlueMarble::getMaxBoardSize() const */

undefined4 __thiscall BlueMarble::getMaxBoardSize(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x3c);
}

```

---

## getMemoryPoolIndex

```asm
// === 080d8c34 BlueMarble::getMemoryPoolIndex  [0x080d8c34-0x80d8c3d] ===
 80d8c34:	55                   	push   %ebp
 80d8c35:	89 e5                	mov    %esp,%ebp
 80d8c37:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8c3a:	8b 00                	mov    (%eax),%eax
 80d8c3c:	5d                   	pop    %ebp
 80d8c3d:	c3                   	ret

```

```c
// BlueMarble::getMemoryPoolIndex @ 0x80d8c34

/* BlueMarble::getMemoryPoolIndex() const */

undefined4 __thiscall BlueMarble::getMemoryPoolIndex(BlueMarble *this)

{
  return *(undefined4 *)this;
}

```

---

## getMovePosition

```asm
// === 080d7012 BlueMarble::getMovePosition  [0x080d7012-0x80d7037] ===
 80d7012:	55                   	push   %ebp
 80d7013:	89 e5                	mov    %esp,%ebp
 80d7015:	83 ec 18             	sub    $0x18,%esp
 80d7018:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d701b:	8b 55 08             	mov    0x8(%ebp),%edx
 80d701e:	83 c2 04             	add    $0x4,%edx
 80d7021:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7025:	89 14 24             	mov    %edx,(%esp)
 80d7028:	e8 d7 34 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d702d:	89 04 24             	mov    %eax,(%esp)
 80d7030:	e8 cf fb ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d7035:	c9                   	leave
 80d7036:	c3                   	ret
 80d7037:	90                   	nop

```

```c
// BlueMarble::getMovePosition @ 0x80d7012

/* BlueMarble::getMovePosition(int) const */

void __thiscall BlueMarble::getMovePosition(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getBoardZone(this_00);
  return;
}

```

---

## getRandomDungeon

```asm
// === 080d73dc BlueMarble::getRandomDungeon  [0x080d73dc-0x80d768f] ===
 80d73dc:	55                   	push   %ebp
 80d73dd:	89 e5                	mov    %esp,%ebp
 80d73df:	56                   	push   %esi
 80d73e0:	53                   	push   %ebx
 80d73e1:	83 ec 50             	sub    $0x50,%esp
 80d73e4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d73e7:	89 04 24             	mov    %eax,(%esp)
 80d73ea:	e8 bd 6d fb ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 80d73ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d73f2:	8b 55 08             	mov    0x8(%ebp),%edx
 80d73f5:	83 c2 04             	add    $0x4,%edx
 80d73f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d73fc:	89 14 24             	mov    %edx,(%esp)
 80d73ff:	e8 00 31 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7404:	89 04 24             	mov    %eax,(%esp)
 80d7407:	e8 7c f7 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d740c:	89 04 24             	mov    %eax,(%esp)
 80d740f:	e8 a4 2e 00 00       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 80d7414:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80d7417:	8b 45 08             	mov    0x8(%ebp),%eax
 80d741a:	89 04 24             	mov    %eax,(%esp)
 80d741d:	e8 5a fa ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d7422:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7425:	8b 52 38             	mov    0x38(%edx),%edx
 80d7428:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d742c:	89 14 24             	mov    %edx,(%esp)
 80d742f:	e8 82 f2 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d7434:	85 c0                	test   %eax,%eax
 80d7436:	0f 94 c0             	sete   %al
 80d7439:	84 c0                	test   %al,%al
 80d743b:	74 0a                	je     80d7447 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x6b>
 80d743d:	bb 00 00 00 00       	mov    $0x0,%ebx
 80d7442:	e9 32 02 00 00       	jmp    80d7679 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x29d>
 80d7447:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d744a:	8b 55 08             	mov    0x8(%ebp),%edx
 80d744d:	83 c2 04             	add    $0x4,%edx
 80d7450:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7454:	89 14 24             	mov    %edx,(%esp)
 80d7457:	e8 a8 30 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d745c:	89 04 24             	mov    %eax,(%esp)
 80d745f:	e8 a0 f7 ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d7464:	89 c3                	mov    %eax,%ebx
 80d7466:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7469:	89 04 24             	mov    %eax,(%esp)
 80d746c:	e8 0b fa ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d7471:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7474:	8b 52 38             	mov    0x38(%edx),%edx
 80d7477:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d747b:	89 14 24             	mov    %edx,(%esp)
 80d747e:	e8 33 f2 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d7483:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d7487:	89 04 24             	mov    %eax,(%esp)
 80d748a:	e8 b5 e1 7f 00       	call   88d5644 <_ZN19BlueMarbleMapScript7getTileEj>
 80d748f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80d7492:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80d7496:	75 0a                	jne    80d74a2 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0xc6>
 80d7498:	bb 00 00 00 00       	mov    $0x0,%ebx
 80d749d:	e9 d7 01 00 00       	jmp    80d7679 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x29d>
 80d74a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d74a5:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80d74a9:	83 f0 01             	xor    $0x1,%eax
 80d74ac:	84 c0                	test   %al,%al
 80d74ae:	74 0a                	je     80d74ba <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0xde>
 80d74b0:	bb 00 00 00 00       	mov    $0x0,%ebx
 80d74b5:	e9 bf 01 00 00       	jmp    80d7679 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x29d>
 80d74ba:	8b 45 10             	mov    0x10(%ebp),%eax
 80d74bd:	83 f8 07             	cmp    $0x7,%eax
 80d74c0:	74 0f                	je     80d74d1 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0xf5>
 80d74c2:	83 f8 08             	cmp    $0x8,%eax
 80d74c5:	74 68                	je     80d752f <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x153>
 80d74c7:	83 f8 02             	cmp    $0x2,%eax
 80d74ca:	74 63                	je     80d752f <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x153>
 80d74cc:	e9 b9 00 00 00       	jmp    80d758a <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x1ae>
 80d74d1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d74d4:	8b 40 38             	mov    0x38(%eax),%eax
 80d74d7:	8d 48 30             	lea    0x30(%eax),%ecx
 80d74da:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80d74dd:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80d74e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d74e4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d74e8:	89 04 24             	mov    %eax,(%esp)
 80d74eb:	e8 ee ea 7f 00       	call   88d5fde <_ZN20BlueMarbleInfoScript21getUniqueDungeonIndexEi>
 80d74f0:	83 ec 04             	sub    $0x4,%esp
 80d74f3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80d74f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d74fa:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d74fd:	89 04 24             	mov    %eax,(%esp)
 80d7500:	e8 19 30 00 00       	call   80da51e <_ZNSt6vectorIiSaIiEEaSEOS1_>
 80d7505:	eb 18                	jmp    80d751f <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x143>
 80d7507:	89 d3                	mov    %edx,%ebx
 80d7509:	89 c6                	mov    %eax,%esi
 80d750b:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80d750e:	89 04 24             	mov    %eax,(%esp)
 80d7511:	e8 c4 c8 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d7516:	89 f0                	mov    %esi,%eax
 80d7518:	89 da                	mov    %ebx,%edx
 80d751a:	e9 3f 01 00 00       	jmp    80d765e <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x282>
 80d751f:	8d 45 c8             	lea    -0x38(%ebp),%eax
 80d7522:	89 04 24             	mov    %eax,(%esp)
 80d7525:	e8 b0 c8 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d752a:	e9 b4 00 00 00       	jmp    80d75e3 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x207>
 80d752f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7532:	8b 40 38             	mov    0x38(%eax),%eax
 80d7535:	8d 48 30             	lea    0x30(%eax),%ecx
 80d7538:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80d753b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80d753e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d7542:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d7546:	89 04 24             	mov    %eax,(%esp)
 80d7549:	e8 ea e9 7f 00       	call   88d5f38 <_ZN20BlueMarbleInfoScript19getBossDungeonIndexEi>
 80d754e:	83 ec 04             	sub    $0x4,%esp
 80d7551:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80d7554:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7558:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d755b:	89 04 24             	mov    %eax,(%esp)
 80d755e:	e8 bb 2f 00 00       	call   80da51e <_ZNSt6vectorIiSaIiEEaSEOS1_>
 80d7563:	eb 18                	jmp    80d757d <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x1a1>
 80d7565:	89 d3                	mov    %edx,%ebx
 80d7567:	89 c6                	mov    %eax,%esi
 80d7569:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80d756c:	89 04 24             	mov    %eax,(%esp)
 80d756f:	e8 66 c8 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d7574:	89 f0                	mov    %esi,%eax
 80d7576:	89 da                	mov    %ebx,%edx
 80d7578:	e9 e1 00 00 00       	jmp    80d765e <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x282>
 80d757d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80d7580:	89 04 24             	mov    %eax,(%esp)
 80d7583:	e8 52 c8 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d7588:	eb 59                	jmp    80d75e3 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x207>
 80d758a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d758d:	8b 40 38             	mov    0x38(%eax),%eax
 80d7590:	8d 48 30             	lea    0x30(%eax),%ecx
 80d7593:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80d7596:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80d7599:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d759d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d75a1:	89 04 24             	mov    %eax,(%esp)
 80d75a4:	e8 e9 e8 7f 00       	call   88d5e92 <_ZN20BlueMarbleInfoScript21getRandomDungeonIndexEi>
 80d75a9:	83 ec 04             	sub    $0x4,%esp
 80d75ac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80d75af:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d75b3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d75b6:	89 04 24             	mov    %eax,(%esp)
 80d75b9:	e8 60 2f 00 00       	call   80da51e <_ZNSt6vectorIiSaIiEEaSEOS1_>
 80d75be:	eb 18                	jmp    80d75d8 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x1fc>
 80d75c0:	89 d3                	mov    %edx,%ebx
 80d75c2:	89 c6                	mov    %eax,%esi
 80d75c4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80d75c7:	89 04 24             	mov    %eax,(%esp)
 80d75ca:	e8 0b c8 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d75cf:	89 f0                	mov    %esi,%eax
 80d75d1:	89 da                	mov    %ebx,%edx
 80d75d3:	e9 86 00 00 00       	jmp    80d765e <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x282>
 80d75d8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80d75db:	89 04 24             	mov    %eax,(%esp)
 80d75de:	e8 f7 c7 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d75e3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d75e6:	89 04 24             	mov    %eax,(%esp)
 80d75e9:	e8 d2 6b fb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80d75ee:	85 c0                	test   %eax,%eax
 80d75f0:	0f 94 c0             	sete   %al
 80d75f3:	84 c0                	test   %al,%al
 80d75f5:	74 07                	je     80d75fe <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x222>
 80d75f7:	bb 00 00 00 00       	mov    $0x0,%ebx
 80d75fc:	eb 7b                	jmp    80d7679 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x29d>
 80d75fe:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7601:	8b 40 14             	mov    0x14(%eax),%eax
 80d7604:	05 90 13 00 00       	add    $0x1390,%eax
 80d7609:	89 04 24             	mov    %eax,(%esp)
 80d760c:	e8 35 44 ff ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 80d7611:	89 c3                	mov    %eax,%ebx
 80d7613:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d7616:	89 04 24             	mov    %eax,(%esp)
 80d7619:	e8 a2 6b fb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80d761e:	89 c1                	mov    %eax,%ecx
 80d7620:	89 d8                	mov    %ebx,%eax
 80d7622:	ba 00 00 00 00       	mov    $0x0,%edx
 80d7627:	f7 f1                	div    %ecx
 80d7629:	89 55 f4             	mov    %edx,-0xc(%ebp)
 80d762c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d762f:	89 04 24             	mov    %eax,(%esp)
 80d7632:	e8 89 6b fb ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 80d7637:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d763a:	0f 96 c0             	setbe  %al
 80d763d:	84 c0                	test   %al,%al
 80d763f:	74 07                	je     80d7648 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x26c>
 80d7641:	bb 00 00 00 00       	mov    $0x0,%ebx
 80d7646:	eb 31                	jmp    80d7679 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x29d>
 80d7648:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d764b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d764f:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d7652:	89 04 24             	mov    %eax,(%esp)
 80d7655:	e8 82 6b fb ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 80d765a:	8b 18                	mov    (%eax),%ebx
 80d765c:	eb 1b                	jmp    80d7679 <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE+0x29d>
 80d765e:	89 d3                	mov    %edx,%ebx
 80d7660:	89 c6                	mov    %eax,%esi
 80d7662:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d7665:	89 04 24             	mov    %eax,(%esp)
 80d7668:	e8 6d c7 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d766d:	89 f0                	mov    %esi,%eax
 80d766f:	89 da                	mov    %ebx,%edx
 80d7671:	89 04 24             	mov    %eax,(%esp)
 80d7674:	e8 d7 c0 a0 00       	call   8ae3750 <_Unwind_Resume>
 80d7679:	8d 45 bc             	lea    -0x44(%ebp),%eax
 80d767c:	89 04 24             	mov    %eax,(%esp)
 80d767f:	e8 56 c7 fa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 80d7684:	89 d8                	mov    %ebx,%eax
 80d7686:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80d7689:	83 c4 00             	add    $0x0,%esp
 80d768c:	5b                   	pop    %ebx
 80d768d:	5e                   	pop    %esi
 80d768e:	5d                   	pop    %ebp
 80d768f:	c3                   	ret

```

```c
// BlueMarble::getRandomDungeon @ 0x80d73dc

/* BlueMarble::getRandomDungeon(int, BlueMarbleTileScript::Type) const */

undefined4 __thiscall BlueMarble::getRandomDungeon(BlueMarble *this,uint param_1,int param_3)

{
  BlueMarbleUserInfo *pBVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  uint uVar3;
  BlueMarbleMapScript *this_01;
  undefined4 *puVar4;
  undefined4 uVar5;
  vector<int,std::allocator<int>> local_48 [12];
  vector local_3c [12];
  vector local_30 [12];
  vector local_24 [12];
  undefined4 local_18;
  int local_14;
  uint local_10;
  
  std::vector<int,std::allocator<int>>::vector(local_48);
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar1);
  local_18 = CUserCharacInfo::get_charac_level(this_00);
  getBlueMarbleMap(this);
                    /* try { // try from 080d742f to 080d74ef has its CatchHandler @ 080d765e */
  iVar2 = BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    uVar3 = BlueMarbleUserInfo::getBoardZone(pBVar1);
    getBlueMarbleMap(this);
    this_01 = (BlueMarbleMapScript *)BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
    local_14 = BlueMarbleMapScript::getTile(this_01,uVar3);
    if (local_14 == 0) {
      uVar5 = 0;
    }
    else if (*(char *)(local_14 + 4) == '\x01') {
      if (param_3 == 7) {
        BlueMarbleInfoScript::getUniqueDungeonIndex((int)local_3c);
                    /* try { // try from 080d7500 to 080d7504 has its CatchHandler @ 080d7507 */
        std::vector<int,std::allocator<int>>::operator=(local_48,local_3c);
                    /* try { // try from 080d7525 to 080d754d has its CatchHandler @ 080d765e */
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_3c);
      }
      else if ((param_3 == 8) || (param_3 == 2)) {
        BlueMarbleInfoScript::getBossDungeonIndex((int)local_30);
                    /* try { // try from 080d755e to 080d7562 has its CatchHandler @ 080d7565 */
        std::vector<int,std::allocator<int>>::operator=(local_48,local_30);
                    /* try { // try from 080d7583 to 080d75a8 has its CatchHandler @ 080d765e */
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_30);
      }
      else {
        BlueMarbleInfoScript::getRandomDungeonIndex((int)local_24);
                    /* try { // try from 080d75b9 to 080d75bd has its CatchHandler @ 080d75c0 */
        std::vector<int,std::allocator<int>>::operator=(local_48,local_24);
                    /* try { // try from 080d75de to 080d75e2 has its CatchHandler @ 080d765e */
        std::vector<int,std::allocator<int>>::~vector((vector<int,std::allocator<int>> *)local_24);
      }
      iVar2 = std::vector<int,std::allocator<int>>::size(local_48);
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar3 = CMTRand::randInt((CMTRand *)(*(int *)(this + 0x14) + 0x1390));
        local_10 = std::vector<int,std::allocator<int>>::size(local_48);
        local_10 = uVar3 % local_10;
        uVar3 = std::vector<int,std::allocator<int>>::size(local_48);
        if (local_10 < uVar3) {
          puVar4 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_48,local_10)
          ;
          uVar5 = *puVar4;
        }
        else {
          uVar5 = 0;
        }
      }
    }
    else {
      uVar5 = 0;
    }
  }
  std::vector<int,std::allocator<int>>::~vector(local_48);
  return uVar5;
}

```

---

## getRandomItem

```asm
// === 080d7690 BlueMarble::getRandomItem  [0x080d7690-0x80d7745] ===
 80d7690:	55                   	push   %ebp
 80d7691:	89 e5                	mov    %esp,%ebp
 80d7693:	83 ec 38             	sub    $0x38,%esp
 80d7696:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7699:	8b 40 38             	mov    0x38(%eax),%eax
 80d769c:	8b 40 4c             	mov    0x4c(%eax),%eax
 80d769f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80d76a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d76a5:	8b 40 14             	mov    0x14(%eax),%eax
 80d76a8:	8d 90 58 1d 00 00    	lea    0x1d58(%eax),%edx
 80d76ae:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 80d76b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d76b5:	89 14 24             	mov    %edx,(%esp)
 80d76b8:	e8 01 44 ff ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 80d76bd:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80d76c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d76c3:	8b 40 38             	mov    0x38(%eax),%eax
 80d76c6:	05 98 00 00 00       	add    $0x98,%eax
 80d76cb:	89 04 24             	mov    %eax,(%esp)
 80d76ce:	e8 73 2e 00 00       	call   80da546 <_ZNKSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EE4sizeEv>
 80d76d3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80d76d6:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80d76dd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d76e4:	eb 4c                	jmp    80d7732 <_ZNK10BlueMarble13getRandomItemEv+0xa2>
 80d76e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d76e9:	8b 55 08             	mov    0x8(%ebp),%edx
 80d76ec:	8b 52 38             	mov    0x38(%edx),%edx
 80d76ef:	81 c2 98 00 00 00    	add    $0x98,%edx
 80d76f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d76f9:	89 14 24             	mov    %edx,(%esp)
 80d76fc:	e8 61 2e 00 00       	call   80da562 <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EEixEj>
 80d7701:	8b 40 04             	mov    0x4(%eax),%eax
 80d7704:	01 45 f0             	add    %eax,-0x10(%ebp)
 80d7707:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d770a:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 80d770d:	7c 1f                	jl     80d772e <_ZNK10BlueMarble13getRandomItemEv+0x9e>
 80d770f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7712:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7715:	8b 52 38             	mov    0x38(%edx),%edx
 80d7718:	81 c2 98 00 00 00    	add    $0x98,%edx
 80d771e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7722:	89 14 24             	mov    %edx,(%esp)
 80d7725:	e8 38 2e 00 00       	call   80da562 <_ZNSt6vectorI24BlueMarbleRandomItemInfoSaIS0_EEixEj>
 80d772a:	8b 00                	mov    (%eax),%eax
 80d772c:	eb 16                	jmp    80d7744 <_ZNK10BlueMarble13getRandomItemEv+0xb4>
 80d772e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d7732:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7735:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80d7738:	0f 9c c0             	setl   %al
 80d773b:	84 c0                	test   %al,%al
 80d773d:	75 a7                	jne    80d76e6 <_ZNK10BlueMarble13getRandomItemEv+0x56>
 80d773f:	b8 00 00 00 00       	mov    $0x0,%eax
 80d7744:	c9                   	leave
 80d7745:	c3                   	ret

```

```c
// BlueMarble::getRandomItem @ 0x80d7690

/* BlueMarble::getRandomItem() const */

undefined4 __thiscall BlueMarble::getRandomItem(BlueMarble *this)

{
  int iVar1;
  undefined4 *puVar2;
  ulong local_20;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  local_20 = *(ulong *)(*(int *)(this + 0x38) + 0x4c);
  local_1c = CMTRand::randInt((CMTRand *)(*(int *)(this + 0x14) + 0x1d58),&local_20);
  local_18 = std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::size
                       ((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *
                        )(*(int *)(this + 0x38) + 0x98));
  local_14 = 0;
  local_10 = 0;
  while( true ) {
    if (local_18 <= (int)local_10) {
      return 0;
    }
    iVar1 = std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::
            operator[]((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
                       (*(int *)(this + 0x38) + 0x98),local_10);
    local_14 = local_14 + *(int *)(iVar1 + 4);
    if (local_1c <= local_14) break;
    local_10 = local_10 + 1;
  }
  puVar2 = (undefined4 *)
           std::vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>>::
           operator[]((vector<BlueMarbleRandomItemInfo,std::allocator<BlueMarbleRandomItemInfo>> *)
                      (*(int *)(this + 0x38) + 0x98),local_10);
  return *puVar2;
}

```

---

## getState

```asm
// === 080d6dc8 BlueMarble::getState  [0x080d6dc8-0x80d6dd3] ===
 80d6dc8:	55                   	push   %ebp
 80d6dc9:	89 e5                	mov    %esp,%ebp
 80d6dcb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6dce:	8b 40 10             	mov    0x10(%eax),%eax
 80d6dd1:	5d                   	pop    %ebp
 80d6dd2:	c3                   	ret
 80d6dd3:	90                   	nop

```

```c
// BlueMarble::getState @ 0x80d6dc8

/* BlueMarble::getState() const */

undefined4 __thiscall BlueMarble::getState(BlueMarble *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## getUserDeadCount

```asm
// === 080d78c2 BlueMarble::getUserDeadCount  [0x080d78c2-0x80d78ef] ===
 80d78c2:	55                   	push   %ebp
 80d78c3:	89 e5                	mov    %esp,%ebp
 80d78c5:	83 ec 18             	sub    $0x18,%esp
 80d78c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d78cb:	8b 55 08             	mov    0x8(%ebp),%edx
 80d78ce:	83 c2 04             	add    $0x4,%edx
 80d78d1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d78d5:	89 14 24             	mov    %edx,(%esp)
 80d78d8:	e8 27 2c 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d78dd:	89 04 24             	mov    %eax,(%esp)
 80d78e0:	e8 a3 f2 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d78e5:	89 04 24             	mov    %eax,(%esp)
 80d78e8:	e8 bd 96 5b 00       	call   8690faa <_ZNK15CUserCharacInfo26getBlueMarbleUserDeadCountEv>
 80d78ed:	c9                   	leave
 80d78ee:	c3                   	ret
 80d78ef:	90                   	nop

```

```c
// BlueMarble::getUserDeadCount @ 0x80d78c2

/* BlueMarble::getUserDeadCount(int) const */

void __thiscall BlueMarble::getUserDeadCount(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  CUserCharacInfo *this_01;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  this_01 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(this_00);
  CUserCharacInfo::getBlueMarbleUserDeadCount(this_01);
  return;
}

```

---

## getUserSlot

```asm
// === 080d9074 BlueMarble::getUserSlot  [0x080d9074-0x80d90d9] ===
 80d9074:	55                   	push   %ebp
 80d9075:	89 e5                	mov    %esp,%ebp
 80d9077:	83 ec 28             	sub    $0x28,%esp
 80d907a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d907e:	75 07                	jne    80d9087 <_ZNK10BlueMarble11getUserSlotEP5CUser+0x13>
 80d9080:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80d9085:	eb 51                	jmp    80d90d8 <_ZNK10BlueMarble11getUserSlotEP5CUser+0x64>
 80d9087:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d908e:	eb 30                	jmp    80d90c0 <_ZNK10BlueMarble11getUserSlotEP5CUser+0x4c>
 80d9090:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9093:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9096:	83 c2 04             	add    $0x4,%edx
 80d9099:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d909d:	89 14 24             	mov    %edx,(%esp)
 80d90a0:	e8 5f 14 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d90a5:	89 04 24             	mov    %eax,(%esp)
 80d90a8:	e8 db da ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d90ad:	3b 45 0c             	cmp    0xc(%ebp),%eax
 80d90b0:	0f 94 c0             	sete   %al
 80d90b3:	84 c0                	test   %al,%al
 80d90b5:	74 05                	je     80d90bc <_ZNK10BlueMarble11getUserSlotEP5CUser+0x48>
 80d90b7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d90ba:	eb 1c                	jmp    80d90d8 <_ZNK10BlueMarble11getUserSlotEP5CUser+0x64>
 80d90bc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d90c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d90c3:	8b 40 38             	mov    0x38(%eax),%eax
 80d90c6:	8b 40 30             	mov    0x30(%eax),%eax
 80d90c9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d90cc:	0f 9f c0             	setg   %al
 80d90cf:	84 c0                	test   %al,%al
 80d90d1:	75 bd                	jne    80d9090 <_ZNK10BlueMarble11getUserSlotEP5CUser+0x1c>
 80d90d3:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80d90d8:	c9                   	leave
 80d90d9:	c3                   	ret

```

```c
// BlueMarble::getUserSlot @ 0x80d9074

/* BlueMarble::getUserSlot(CUser*) const */

uint __thiscall BlueMarble::getUserSlot(BlueMarble *this,CUser *param_1)

{
  BlueMarbleUserInfo *this_00;
  CUser *pCVar1;
  uint local_10;
  
  if (param_1 != (CUser *)0x0) {
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      this_00 = (BlueMarbleUserInfo *)
                std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                          ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                           (this + 4),local_10);
      pCVar1 = (CUser *)BlueMarbleUserInfo::getUser(this_00);
      if (pCVar1 == param_1) {
        return local_10;
      }
    }
  }
  return 0xffffffff;
}

```

---

## getUserState

```asm
// === 080d7966 BlueMarble::getUserState  [0x080d7966-0x80d798b] ===
 80d7966:	55                   	push   %ebp
 80d7967:	89 e5                	mov    %esp,%ebp
 80d7969:	83 ec 18             	sub    $0x18,%esp
 80d796c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d796f:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7972:	83 c2 04             	add    $0x4,%edx
 80d7975:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7979:	89 14 24             	mov    %edx,(%esp)
 80d797c:	e8 83 2b 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7981:	89 04 24             	mov    %eax,(%esp)
 80d7984:	e8 25 f2 ff ff       	call   80d6bae <_ZNK18BlueMarbleUserInfo12getUserStateEv>
 80d7989:	c9                   	leave
 80d798a:	c3                   	ret
 80d798b:	90                   	nop

```

```c
// BlueMarble::getUserState @ 0x80d7966

/* BlueMarble::getUserState(int) const */

void __thiscall BlueMarble::getUserState(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getUserState(this_00);
  return;
}

```

---

## getVisitZone

```asm
// === 080d7a9a BlueMarble::getVisitZone  [0x080d7a9a-0x80d7afb] ===
 80d7a9a:	55                   	push   %ebp
 80d7a9b:	89 e5                	mov    %esp,%ebp
 80d7a9d:	83 ec 28             	sub    $0x28,%esp
 80d7aa0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7aa3:	8d 48 20             	lea    0x20(%eax),%ecx
 80d7aa6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80d7aa9:	8d 55 0c             	lea    0xc(%ebp),%edx
 80d7aac:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d7ab0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d7ab4:	89 04 24             	mov    %eax,(%esp)
 80d7ab7:	e8 ae 29 00 00       	call   80da46a <_ZNKSt3setIiSt4lessIiESaIiEE4findERKi>
 80d7abc:	83 ec 04             	sub    $0x4,%esp
 80d7abf:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7ac2:	8d 50 20             	lea    0x20(%eax),%edx
 80d7ac5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80d7ac8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7acc:	89 04 24             	mov    %eax,(%esp)
 80d7acf:	e8 c2 29 00 00       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 80d7ad4:	83 ec 04             	sub    $0x4,%esp
 80d7ad7:	8d 45 f4             	lea    -0xc(%ebp),%eax
 80d7ada:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7ade:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80d7ae1:	89 04 24             	mov    %eax,(%esp)
 80d7ae4:	e8 c9 2a 00 00       	call   80da5b2 <_ZNKSt23_Rb_tree_const_iteratorIiEeqERKS0_>
 80d7ae9:	84 c0                	test   %al,%al
 80d7aeb:	74 07                	je     80d7af4 <_ZNK10BlueMarble12getVisitZoneEi+0x5a>
 80d7aed:	b8 00 00 00 00       	mov    $0x0,%eax
 80d7af2:	eb 05                	jmp    80d7af9 <_ZNK10BlueMarble12getVisitZoneEi+0x5f>
 80d7af4:	b8 01 00 00 00       	mov    $0x1,%eax
 80d7af9:	c9                   	leave
 80d7afa:	c3                   	ret
 80d7afb:	90                   	nop

```

```c
// BlueMarble::getVisitZone @ 0x80d7a9a

/* BlueMarble::getVisitZone(int) const */

bool BlueMarble::getVisitZone(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<int> local_14 [4];
  set<int,std::less<int>,std::allocator<int>> local_10 [12];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_14);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_10);
  cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                    (local_14,(_Rb_tree_const_iterator *)local_10);
  return cVar1 == '\0';
}

```

---

## getWaitUserCount

```asm
// === 080d90da BlueMarble::getWaitUserCount  [0x080d90da-0x80d9135] ===
 80d90da:	55                   	push   %ebp
 80d90db:	89 e5                	mov    %esp,%ebp
 80d90dd:	83 ec 28             	sub    $0x28,%esp
 80d90e0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80d90e7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d90ee:	eb 2e                	jmp    80d911e <_ZNK10BlueMarble16getWaitUserCountEv+0x44>
 80d90f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d90f3:	8b 55 08             	mov    0x8(%ebp),%edx
 80d90f6:	83 c2 04             	add    $0x4,%edx
 80d90f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d90fd:	89 14 24             	mov    %edx,(%esp)
 80d9100:	e8 ff 13 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9105:	89 04 24             	mov    %eax,(%esp)
 80d9108:	e8 7b da ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d910d:	85 c0                	test   %eax,%eax
 80d910f:	0f 95 c0             	setne  %al
 80d9112:	84 c0                	test   %al,%al
 80d9114:	74 04                	je     80d911a <_ZNK10BlueMarble16getWaitUserCountEv+0x40>
 80d9116:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80d911a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d911e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9121:	8b 40 38             	mov    0x38(%eax),%eax
 80d9124:	8b 40 30             	mov    0x30(%eax),%eax
 80d9127:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d912a:	0f 9f c0             	setg   %al
 80d912d:	84 c0                	test   %al,%al
 80d912f:	75 bf                	jne    80d90f0 <_ZNK10BlueMarble16getWaitUserCountEv+0x16>
 80d9131:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d9134:	c9                   	leave
 80d9135:	c3                   	ret

```

```c
// BlueMarble::getWaitUserCount @ 0x80d90da

/* BlueMarble::getWaitUserCount() const */

int __thiscall BlueMarble::getWaitUserCount(BlueMarble *this)

{
  BlueMarbleUserInfo *this_00;
  int iVar1;
  int local_14;
  uint local_10;
  
  local_14 = 0;
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,local_10);
    iVar1 = BlueMarbleUserInfo::getUser(this_00);
    if (iVar1 != 0) {
      local_14 = local_14 + 1;
    }
  }
  return local_14;
}

```

---

## getWinner

```asm
// === 080d7d5e BlueMarble::getWinner  [0x080d7d5e-0x80d7ddd] ===
 80d7d5e:	55                   	push   %ebp
 80d7d5f:	89 e5                	mov    %esp,%ebp
 80d7d61:	83 ec 28             	sub    $0x28,%esp
 80d7d64:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d7d6b:	eb 56                	jmp    80d7dc3 <_ZNK10BlueMarble9getWinnerEv+0x65>
 80d7d6d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7d70:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7d73:	83 c2 04             	add    $0x4,%edx
 80d7d76:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7d7a:	89 14 24             	mov    %edx,(%esp)
 80d7d7d:	e8 82 27 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7d82:	89 04 24             	mov    %eax,(%esp)
 80d7d85:	e8 fe ed ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d7d8a:	85 c0                	test   %eax,%eax
 80d7d8c:	0f 94 c0             	sete   %al
 80d7d8f:	84 c0                	test   %al,%al
 80d7d91:	75 2b                	jne    80d7dbe <_ZNK10BlueMarble9getWinnerEv+0x60>
 80d7d93:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7d96:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7d99:	83 c2 04             	add    $0x4,%edx
 80d7d9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7da0:	89 14 24             	mov    %edx,(%esp)
 80d7da3:	e8 5c 27 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7da8:	89 04 24             	mov    %eax,(%esp)
 80d7dab:	e8 6e ee ff ff       	call   80d6c1e <_ZNK18BlueMarbleUserInfo8getGradeEv>
 80d7db0:	85 c0                	test   %eax,%eax
 80d7db2:	0f 94 c0             	sete   %al
 80d7db5:	84 c0                	test   %al,%al
 80d7db7:	74 06                	je     80d7dbf <_ZNK10BlueMarble9getWinnerEv+0x61>
 80d7db9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7dbc:	eb 1d                	jmp    80d7ddb <_ZNK10BlueMarble9getWinnerEv+0x7d>
 80d7dbe:	90                   	nop
 80d7dbf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d7dc3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7dc6:	8b 40 38             	mov    0x38(%eax),%eax
 80d7dc9:	8b 40 30             	mov    0x30(%eax),%eax
 80d7dcc:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d7dcf:	0f 9f c0             	setg   %al
 80d7dd2:	84 c0                	test   %al,%al
 80d7dd4:	75 97                	jne    80d7d6d <_ZNK10BlueMarble9getWinnerEv+0xf>
 80d7dd6:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 80d7ddb:	c9                   	leave
 80d7ddc:	c3                   	ret
 80d7ddd:	90                   	nop

```

```c
// BlueMarble::getWinner @ 0x80d7d5e

/* BlueMarble::getWinner() const */

uint __thiscall BlueMarble::getWinner(BlueMarble *this)

{
  BlueMarbleUserInfo *pBVar1;
  int iVar2;
  uint local_10;
  
  local_10 = 0;
  do {
    if (*(int *)(*(int *)(this + 0x38) + 0x30) <= (int)local_10) {
      return 0xffffffff;
    }
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_10);
    iVar2 = BlueMarbleUserInfo::getUser(pBVar1);
    if (iVar2 != 0) {
      pBVar1 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      iVar2 = BlueMarbleUserInfo::getGrade(pBVar1);
      if (iVar2 == 0) {
        return local_10;
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## giveBonusItem

```asm
// === 080d9808 BlueMarble::giveBonusItem  [0x080d9808-0x80d990d] ===
 80d9808:	55                   	push   %ebp
 80d9809:	89 e5                	mov    %esp,%ebp
 80d980b:	83 ec 78             	sub    $0x78,%esp
 80d980e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9812:	0f 84 ed 00 00 00    	je     80d9905 <_ZN10BlueMarble13giveBonusItemEP5CUser+0xfd>
 80d9818:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d981b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d981f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9822:	89 04 24             	mov    %eax,(%esp)
 80d9825:	e8 4a f8 ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d982a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d982d:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d9831:	75 38                	jne    80d986b <_ZN10BlueMarble13giveBonusItemEP5CUser+0x63>
 80d9833:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9836:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d983a:	c7 44 24 10 64 8b b2 	movl   $0x8b28b64,0x10(%esp)
 80d9841:	08 
 80d9842:	c7 44 24 0c ac 04 00 	movl   $0x4ac,0xc(%esp)
 80d9849:	00 
 80d984a:	c7 44 24 08 60 99 b2 	movl   $0x8b29960,0x8(%esp)
 80d9851:	08 
 80d9852:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d9859:	08 
 80d985a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d9861:	e8 a4 a3 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d9866:	e9 a1 00 00 00       	jmp    80d990c <_ZN10BlueMarble13giveBonusItemEP5CUser+0x104>
 80d986b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d986e:	89 04 24             	mov    %eax,(%esp)
 80d9871:	e8 52 d5 ff ff       	call   80d6dc8 <_ZNK10BlueMarble8getStateEv>
 80d9876:	83 f8 02             	cmp    $0x2,%eax
 80d9879:	75 17                	jne    80d9892 <_ZN10BlueMarble13giveBonusItemEP5CUser+0x8a>
 80d987b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d987e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9882:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9885:	89 04 24             	mov    %eax,(%esp)
 80d9888:	e8 d9 e0 ff ff       	call   80d7966 <_ZNK10BlueMarble12getUserStateEi>
 80d988d:	83 f8 01             	cmp    $0x1,%eax
 80d9890:	74 07                	je     80d9899 <_ZN10BlueMarble13giveBonusItemEP5CUser+0x91>
 80d9892:	b8 01 00 00 00       	mov    $0x1,%eax
 80d9897:	eb 05                	jmp    80d989e <_ZN10BlueMarble13giveBonusItemEP5CUser+0x96>
 80d9899:	b8 00 00 00 00       	mov    $0x0,%eax
 80d989e:	84 c0                	test   %al,%al
 80d98a0:	75 66                	jne    80d9908 <_ZN10BlueMarble13giveBonusItemEP5CUser+0x100>
 80d98a2:	8d 45 b7             	lea    -0x49(%ebp),%eax
 80d98a5:	89 04 24             	mov    %eax,(%esp)
 80d98a8:	e8 a7 1f ff ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80d98ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d98b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d98b4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d98b7:	89 04 24             	mov    %eax,(%esp)
 80d98ba:	e8 b9 de ff ff       	call   80d7778 <_ZNK10BlueMarble12getItemIndexEi>
 80d98bf:	89 45 b9             	mov    %eax,-0x47(%ebp)
 80d98c2:	c7 45 be 01 00 00 00 	movl   $0x1,-0x42(%ebp)
 80d98c9:	8b 45 b9             	mov    -0x47(%ebp),%eax
 80d98cc:	85 c0                	test   %eax,%eax
 80d98ce:	74 3b                	je     80d990b <_ZN10BlueMarble13giveBonusItemEP5CUser+0x103>
 80d98d0:	c7 44 24 0c 41 00 00 	movl   $0x41,0xc(%esp)
 80d98d7:	00 
 80d98d8:	8d 45 b7             	lea    -0x49(%ebp),%eax
 80d98db:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d98df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d98e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d98e6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d98e9:	89 04 24             	mov    %eax,(%esp)
 80d98ec:	e8 1d e7 ff ff       	call   80d800e <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason>
 80d98f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d98f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d98f8:	8b 45 08             	mov    0x8(%ebp),%eax
 80d98fb:	89 04 24             	mov    %eax,(%esp)
 80d98fe:	e8 9f d4 ff ff       	call   80d6da2 <_ZN10BlueMarble14resetIndexInfoEi>
 80d9903:	eb 07                	jmp    80d990c <_ZN10BlueMarble13giveBonusItemEP5CUser+0x104>
 80d9905:	90                   	nop
 80d9906:	eb 04                	jmp    80d990c <_ZN10BlueMarble13giveBonusItemEP5CUser+0x104>
 80d9908:	90                   	nop
 80d9909:	eb 01                	jmp    80d990c <_ZN10BlueMarble13giveBonusItemEP5CUser+0x104>
 80d990b:	90                   	nop
 80d990c:	c9                   	leave
 80d990d:	c3                   	ret

```

```c
// BlueMarble::giveBonusItem @ 0x80d9808

/* BlueMarble::giveBonusItem(CUser*) */

void __thiscall BlueMarble::giveBonusItem(BlueMarble *this,CUser *param_1)

{
  bool bVar1;
  int iVar2;
  Inven_Item local_4d [2];
  int local_4b;
  undefined4 local_46;
  int local_10;
  
  if (param_1 != (CUser *)0x0) {
    local_10 = getUserSlot(this,param_1);
    if (local_10 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::giveBonusItem(CUser*)",0x4ac,
                 "BlueMarble::giveBonusItem slot(%d)",0xffffffff);
    }
    else {
      iVar2 = getState(this);
      if ((iVar2 == 2) && (iVar2 = getUserState(this,local_10), iVar2 == 1)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        Inven_Item::Inven_Item(local_4d);
        local_4b = getItemIndex(this,local_10);
        local_46 = 1;
        if (local_4b != 0) {
          insertItem(this,local_10,local_4d,0x41);
          resetIndexInfo(this,local_10);
        }
      }
    }
  }
  return;
}

```

---

## giveupDungeon

```asm
// === 080d9572 BlueMarble::giveupDungeon  [0x080d9572-0x80d96f3] ===
 80d9572:	55                   	push   %ebp
 80d9573:	89 e5                	mov    %esp,%ebp
 80d9575:	53                   	push   %ebx
 80d9576:	83 ec 34             	sub    $0x34,%esp
 80d9579:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d957d:	0f 84 64 01 00 00    	je     80d96e7 <_ZN10BlueMarble13giveupDungeonEP5CUser+0x175>
 80d9583:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9586:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d958a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d958d:	89 04 24             	mov    %eax,(%esp)
 80d9590:	e8 df fa ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d9595:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80d9598:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 80d959c:	75 38                	jne    80d95d6 <_ZN10BlueMarble13giveupDungeonEP5CUser+0x64>
 80d959e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d95a1:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d95a5:	c7 44 24 10 f8 8a b2 	movl   $0x8b28af8,0x10(%esp)
 80d95ac:	08 
 80d95ad:	c7 44 24 0c 6b 04 00 	movl   $0x46b,0xc(%esp)
 80d95b4:	00 
 80d95b5:	c7 44 24 08 20 9a b2 	movl   $0x8b29a20,0x8(%esp)
 80d95bc:	08 
 80d95bd:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d95c4:	08 
 80d95c5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d95cc:	e8 39 a6 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d95d1:	e9 18 01 00 00       	jmp    80d96ee <_ZN10BlueMarble13giveupDungeonEP5CUser+0x17c>
 80d95d6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d95d9:	89 04 24             	mov    %eax,(%esp)
 80d95dc:	e8 9b d8 ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d95e1:	8b 55 08             	mov    0x8(%ebp),%edx
 80d95e4:	8b 52 38             	mov    0x38(%edx),%edx
 80d95e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d95eb:	89 14 24             	mov    %edx,(%esp)
 80d95ee:	e8 c3 d0 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d95f3:	85 c0                	test   %eax,%eax
 80d95f5:	0f 94 c0             	sete   %al
 80d95f8:	84 c0                	test   %al,%al
 80d95fa:	0f 85 ea 00 00 00    	jne    80d96ea <_ZN10BlueMarble13giveupDungeonEP5CUser+0x178>
 80d9600:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d9603:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9606:	83 c2 04             	add    $0x4,%edx
 80d9609:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d960d:	89 14 24             	mov    %edx,(%esp)
 80d9610:	e8 b9 0e 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9615:	89 04 24             	mov    %eax,(%esp)
 80d9618:	e8 e7 d5 ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d961d:	89 c3                	mov    %eax,%ebx
 80d961f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9622:	89 04 24             	mov    %eax,(%esp)
 80d9625:	e8 52 d8 ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d962a:	8b 55 08             	mov    0x8(%ebp),%edx
 80d962d:	8b 52 38             	mov    0x38(%edx),%edx
 80d9630:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9634:	89 14 24             	mov    %edx,(%esp)
 80d9637:	e8 7a d0 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d963c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d9640:	89 04 24             	mov    %eax,(%esp)
 80d9643:	e8 fc bf 7f 00       	call   88d5644 <_ZN19BlueMarbleMapScript7getTileEj>
 80d9648:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d964b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d964f:	0f 84 98 00 00 00    	je     80d96ed <_ZN10BlueMarble13giveupDungeonEP5CUser+0x17b>
 80d9655:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9658:	8b 00                	mov    (%eax),%eax
 80d965a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d965e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d9661:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9665:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9668:	89 04 24             	mov    %eax,(%esp)
 80d966b:	e8 80 e2 ff ff       	call   80d78f0 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE>
 80d9670:	84 c0                	test   %al,%al
 80d9672:	74 57                	je     80d96cb <_ZN10BlueMarble13giveupDungeonEP5CUser+0x159>
 80d9674:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d9677:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d967b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d967e:	89 04 24             	mov    %eax,(%esp)
 80d9681:	e8 8c d9 ff ff       	call   80d7012 <_ZNK10BlueMarble15getMovePositionEi>
 80d9686:	ba 01 00 00 00       	mov    $0x1,%edx
 80d968b:	89 d1                	mov    %edx,%ecx
 80d968d:	29 c1                	sub    %eax,%ecx
 80d968f:	89 c8                	mov    %ecx,%eax
 80d9691:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d9695:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d9698:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d969c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d969f:	89 04 24             	mov    %eax,(%esp)
 80d96a2:	e8 29 d9 ff ff       	call   80d6fd0 <_ZN10BlueMarble15setMovePositionEii>
 80d96a7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d96aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d96ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80d96b1:	89 04 24             	mov    %eax,(%esp)
 80d96b4:	e8 c3 d6 ff ff       	call   80d6d7c <_ZN10BlueMarble13resetBuffInfoEi>
 80d96b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d96bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d96c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d96c3:	89 04 24             	mov    %eax,(%esp)
 80d96c6:	e8 f7 f1 ff ff       	call   80d88c2 <_ZNK10BlueMarble18sendTileGiveUpInfoEi>
 80d96cb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 80d96d2:	00 
 80d96d3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d96d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d96da:	8b 45 08             	mov    0x8(%ebp),%eax
 80d96dd:	89 04 24             	mov    %eax,(%esp)
 80d96e0:	e8 55 e2 ff ff       	call   80d793a <_ZN10BlueMarble12setUserStateEiN19BlueMarbleUserState1TE>
 80d96e5:	eb 07                	jmp    80d96ee <_ZN10BlueMarble13giveupDungeonEP5CUser+0x17c>
 80d96e7:	90                   	nop
 80d96e8:	eb 04                	jmp    80d96ee <_ZN10BlueMarble13giveupDungeonEP5CUser+0x17c>
 80d96ea:	90                   	nop
 80d96eb:	eb 01                	jmp    80d96ee <_ZN10BlueMarble13giveupDungeonEP5CUser+0x17c>
 80d96ed:	90                   	nop
 80d96ee:	83 c4 34             	add    $0x34,%esp
 80d96f1:	5b                   	pop    %ebx
 80d96f2:	5d                   	pop    %ebp
 80d96f3:	c3                   	ret

```

```c
// BlueMarble::giveupDungeon @ 0x80d9572

/* BlueMarble::giveupDungeon(CUser*) */

void __thiscall BlueMarble::giveupDungeon(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  BlueMarbleUserInfo *this_00;
  uint uVar4;
  BlueMarbleMapScript *this_01;
  undefined4 *puVar5;
  
  if (param_1 != (CUser *)0x0) {
    uVar2 = getUserSlot(this,param_1);
    if (uVar2 == 0xffffffff) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::giveupDungeon(CUser*)",0x46b,
                 "BlueMarble::giveupDungeon slot(%d)",0xffffffff);
    }
    else {
      getBlueMarbleMap(this);
      iVar3 = BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
      if (iVar3 != 0) {
        this_00 = (BlueMarbleUserInfo *)
                  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                             (this + 4),uVar2);
        uVar4 = BlueMarbleUserInfo::getBoardZone(this_00);
        getBlueMarbleMap(this);
        this_01 = (BlueMarbleMapScript *)BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
        puVar5 = (undefined4 *)BlueMarbleMapScript::getTile(this_01,uVar4);
        if (puVar5 != (undefined4 *)0x0) {
          cVar1 = checkMoveFirstZone(this,uVar2,*puVar5);
          if (cVar1 != '\0') {
            iVar3 = getMovePosition(this,uVar2);
            setMovePosition(this,uVar2,1 - iVar3);
            resetBuffInfo(this,uVar2);
            sendTileGiveUpInfo(this,uVar2);
          }
          setUserState(this,uVar2,1);
        }
      }
    }
  }
  return;
}

```

---

## insertItem

```asm
// === 080d800e BlueMarble::insertItem  [0x080d800e-0x80d82f1] ===
 80d800e:	55                   	push   %ebp
 80d800f:	89 e5                	mov    %esp,%ebp
 80d8011:	56                   	push   %esi
 80d8012:	53                   	push   %ebx
 80d8013:	81 ec c0 02 00 00    	sub    $0x2c0,%esp
 80d8019:	8b 45 10             	mov    0x10(%ebp),%eax
 80d801c:	8b 58 07             	mov    0x7(%eax),%ebx
 80d801f:	e8 77 41 ff ff       	call   80cc19b <_Z14G_CDataManagerv>
 80d8024:	8b 40 0c             	mov    0xc(%eax),%eax
 80d8027:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80d802b:	8b 55 10             	mov    0x10(%ebp),%edx
 80d802e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d8032:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d8039:	00 
 80d803a:	89 04 24             	mov    %eax,(%esp)
 80d803d:	e8 76 9f 43 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 80d8042:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8045:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8048:	83 c2 04             	add    $0x4,%edx
 80d804b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d804f:	89 14 24             	mov    %edx,(%esp)
 80d8052:	e8 77 24 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8057:	89 04 24             	mov    %eax,(%esp)
 80d805a:	e8 29 eb ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d805f:	89 04 24             	mov    %eax,(%esp)
 80d8062:	e8 27 22 00 00       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80d8067:	89 c2                	mov    %eax,%edx
 80d8069:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 80d8070:	00 
 80d8071:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 80d8078:	00 
 80d8079:	8b 45 14             	mov    0x14(%ebp),%eax
 80d807c:	89 44 24 44          	mov    %eax,0x44(%esp)
 80d8080:	8b 45 10             	mov    0x10(%ebp),%eax
 80d8083:	8b 08                	mov    (%eax),%ecx
 80d8085:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d8089:	8b 48 04             	mov    0x4(%eax),%ecx
 80d808c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 80d8090:	8b 48 08             	mov    0x8(%eax),%ecx
 80d8093:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80d8097:	8b 48 0c             	mov    0xc(%eax),%ecx
 80d809a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 80d809e:	8b 48 10             	mov    0x10(%eax),%ecx
 80d80a1:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 80d80a5:	8b 48 14             	mov    0x14(%eax),%ecx
 80d80a8:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 80d80ac:	8b 48 18             	mov    0x18(%eax),%ecx
 80d80af:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 80d80b3:	8b 48 1c             	mov    0x1c(%eax),%ecx
 80d80b6:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 80d80ba:	8b 48 20             	mov    0x20(%eax),%ecx
 80d80bd:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 80d80c1:	8b 48 24             	mov    0x24(%eax),%ecx
 80d80c4:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 80d80c8:	8b 48 28             	mov    0x28(%eax),%ecx
 80d80cb:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 80d80cf:	8b 48 2c             	mov    0x2c(%eax),%ecx
 80d80d2:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 80d80d6:	8b 48 30             	mov    0x30(%eax),%ecx
 80d80d9:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 80d80dd:	8b 48 34             	mov    0x34(%eax),%ecx
 80d80e0:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 80d80e4:	8b 48 38             	mov    0x38(%eax),%ecx
 80d80e7:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 80d80eb:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 80d80ef:	88 44 24 40          	mov    %al,0x40(%esp)
 80d80f3:	89 14 24             	mov    %edx,(%esp)
 80d80f6:	e8 8b ac 42 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 80d80fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d80fe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d8102:	0f 89 c7 01 00 00    	jns    80d82cf <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason+0x2c1>
 80d8108:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80d810f:	00 
 80d8110:	c7 44 24 08 0c 8a b2 	movl   $0x8b28a0c,0x8(%esp)
 80d8117:	08 
 80d8118:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80d811f:	00 
 80d8120:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80d8127:	e8 d2 d6 9c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80d812c:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 80d8133:	00 
 80d8134:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8138:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 80d813b:	89 04 24             	mov    %eax,(%esp)
 80d813e:	e8 8d 57 fa ff       	call   807d8d0 <strncpy@plt>
 80d8143:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80d814a:	00 
 80d814b:	c7 44 24 08 20 8a b2 	movl   $0x8b28a20,0x8(%esp)
 80d8152:	08 
 80d8153:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80d815a:	00 
 80d815b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80d8162:	e8 97 d6 9c 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80d8167:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 80d816e:	00 
 80d816f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8173:	8d 85 d6 fe ff ff    	lea    -0x12a(%ebp),%eax
 80d8179:	89 04 24             	mov    %eax,(%esp)
 80d817c:	e8 4f 57 fa ff       	call   807d8d0 <strncpy@plt>
 80d8181:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8184:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8187:	83 c2 04             	add    $0x4,%edx
 80d818a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d818e:	89 14 24             	mov    %edx,(%esp)
 80d8191:	e8 38 23 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8196:	89 04 24             	mov    %eax,(%esp)
 80d8199:	e8 ea e9 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d819e:	89 04 24             	mov    %eax,(%esp)
 80d81a1:	e8 ea 3a ff ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80d81a6:	89 c3                	mov    %eax,%ebx
 80d81a8:	8d 85 d6 fe ff ff    	lea    -0x12a(%ebp),%eax
 80d81ae:	89 04 24             	mov    %eax,(%esp)
 80d81b1:	e8 fa 61 fa ff       	call   807e3b0 <strlen@plt>
 80d81b6:	89 c6                	mov    %eax,%esi
 80d81b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d81bb:	8b 55 08             	mov    0x8(%ebp),%edx
 80d81be:	83 c2 04             	add    $0x4,%edx
 80d81c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d81c5:	89 14 24             	mov    %edx,(%esp)
 80d81c8:	e8 01 23 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d81cd:	89 04 24             	mov    %eax,(%esp)
 80d81d0:	e8 b3 e9 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d81d5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80d81dc:	ff 
 80d81dd:	89 04 24             	mov    %eax,(%esp)
 80d81e0:	e8 bb 5d 57 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80d81e5:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 80d81ec:	00 
 80d81ed:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80d81f4:	00 
 80d81f5:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 80d81f9:	c7 44 24 18 0f 00 00 	movl   $0xf,0x18(%esp)
 80d8200:	00 
 80d8201:	89 74 24 14          	mov    %esi,0x14(%esp)
 80d8205:	8d 95 d6 fe ff ff    	lea    -0x12a(%ebp),%edx
 80d820b:	89 54 24 10          	mov    %edx,0x10(%esp)
 80d820f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 80d8213:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80d821a:	00 
 80d821b:	8b 45 10             	mov    0x10(%ebp),%eax
 80d821e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8222:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 80d8225:	89 04 24             	mov    %eax,(%esp)
 80d8228:	e8 bb d3 47 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 80d822d:	85 c0                	test   %eax,%eax
 80d822f:	0f 94 c0             	sete   %al
 80d8232:	84 c0                	test   %al,%al
 80d8234:	0f 84 ae 00 00 00    	je     80d82e8 <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason+0x2da>
 80d823a:	c7 44 24 08 45 01 00 	movl   $0x145,0x8(%esp)
 80d8241:	00 
 80d8242:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d8249:	00 
 80d824a:	8d 85 91 fd ff ff    	lea    -0x26f(%ebp),%eax
 80d8250:	89 04 24             	mov    %eax,(%esp)
 80d8253:	e8 68 5a fa ff       	call   807dcc0 <memset@plt>
 80d8258:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 80d825f:	00 
 80d8260:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 80d8263:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8267:	8d 85 91 fd ff ff    	lea    -0x26f(%ebp),%eax
 80d826d:	83 c0 11             	add    $0x11,%eax
 80d8270:	89 04 24             	mov    %eax,(%esp)
 80d8273:	e8 58 56 fa ff       	call   807d8d0 <strncpy@plt>
 80d8278:	8b 45 10             	mov    0x10(%ebp),%eax
 80d827b:	8b 40 02             	mov    0x2(%eax),%eax
 80d827e:	89 85 ca fd ff ff    	mov    %eax,-0x236(%ebp)
 80d8284:	8b 45 10             	mov    0x10(%ebp),%eax
 80d8287:	8b 40 07             	mov    0x7(%eax),%eax
 80d828a:	89 85 ce fd ff ff    	mov    %eax,-0x232(%ebp)
 80d8290:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8293:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8296:	83 c2 04             	add    $0x4,%edx
 80d8299:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d829d:	89 14 24             	mov    %edx,(%esp)
 80d82a0:	e8 29 22 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d82a5:	89 04 24             	mov    %eax,(%esp)
 80d82a8:	e8 db e8 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d82ad:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 80d82b3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80d82ba:	00 
 80d82bb:	8d 85 91 fd ff ff    	lea    -0x26f(%ebp),%eax
 80d82c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d82c5:	89 14 24             	mov    %edx,(%esp)
 80d82c8:	e8 1d c5 5a 00       	call   86847ea <_ZN15cUserHistoryLog8SendMailEP16MSG_MAILBOX_SENDj>
 80d82cd:	eb 19                	jmp    80d82e8 <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason+0x2da>
 80d82cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d82d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d82d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d82d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d82dd:	8b 45 08             	mov    0x8(%ebp),%eax
 80d82e0:	89 04 24             	mov    %eax,(%esp)
 80d82e3:	e8 6e 06 00 00       	call   80d8956 <_ZNK10BlueMarble18sendUpdateItemInfoEii>
 80d82e8:	81 c4 c0 02 00 00    	add    $0x2c0,%esp
 80d82ee:	5b                   	pop    %ebx
 80d82ef:	5e                   	pop    %esi
 80d82f0:	5d                   	pop    %ebp
 80d82f1:	c3                   	ret

```

```c
// BlueMarble::insertItem @ 0x80d800e

/* BlueMarble::insertItem(int, Inven_Item&, eItemAddReason) */

void __thiscall
BlueMarble::insertItem(BlueMarble *this,uint param_1,undefined4 *param_2,undefined4 param_4)

{
  int iVar1;
  BlueMarbleUserInfo *pBVar2;
  CUserCharacInfo *this_00;
  undefined4 uVar3;
  char *pcVar4;
  CUser *pCVar5;
  size_t sVar6;
  undefined4 uVar7;
  MSG_MAILBOX_SEND local_273 [17];
  char acStack_262 [40];
  undefined4 local_23a;
  undefined4 local_236;
  char local_12e [256];
  char local_2e [30];
  int local_10;
  
  uVar3 = *(undefined4 *)((int)param_2 + 7);
  iVar1 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar1 + 0xc),0,param_2,uVar3);
  pBVar2 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar2);
  uVar3 = CUserCharacInfo::getCurCharacInvenW(this_00);
  local_10 = CInventory::insertItemIntoInventory
                       (uVar3,*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],
                        param_2[6],param_2[7],param_2[8],param_2[9],param_2[10],param_2[0xb],
                        param_2[0xc],param_2[0xd],param_2[0xe],*(undefined1 *)(param_2 + 0xf),
                        param_4,1,0);
  if (local_10 < 0) {
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_268",(bool *)0x0);
    strncpy(local_2e,pcVar4,0x1d);
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_269",(bool *)0x0);
    strncpy(local_12e,pcVar4,0xff);
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
    uVar3 = CUser::GetServerGroup(pCVar5);
    sVar6 = strlen(local_12e);
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
    uVar7 = CUser::get_charac_no(pCVar5,-1);
    iVar1 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_2e,param_2,0,uVar7,local_12e,sVar6,0xf,uVar3,0,0);
    if (iVar1 == 0) {
      memset(local_273,0,0x145);
      strncpy(acStack_262,local_2e,0x1d);
      local_23a = *(undefined4 *)((int)param_2 + 2);
      local_236 = *(undefined4 *)((int)param_2 + 7);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),param_1);
      iVar1 = BlueMarbleUserInfo::getUser(pBVar2);
      cUserHistoryLog::SendMail((cUserHistoryLog *)(iVar1 + 0x79700),local_273,0);
    }
  }
  else {
    sendUpdateItemInfo(this,param_1,local_10);
  }
  return;
}

```

---

## intoBoardZone

```asm
// === 080d7038 BlueMarble::intoBoardZone  [0x080d7038-0x80d70ad] ===
 80d7038:	55                   	push   %ebp
 80d7039:	89 e5                	mov    %esp,%ebp
 80d703b:	83 ec 18             	sub    $0x18,%esp
 80d703e:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 80d7045:	00 
 80d7046:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7049:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d704d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7050:	89 04 24             	mov    %eax,(%esp)
 80d7053:	e8 84 03 00 00       	call   80d73dc <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE>
 80d7058:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d705c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d705f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7063:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7066:	89 04 24             	mov    %eax,(%esp)
 80d7069:	e8 1c 03 00 00       	call   80d738a <_ZN10BlueMarble15setDungeonIndexEii>
 80d706e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7071:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7075:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7078:	89 04 24             	mov    %eax,(%esp)
 80d707b:	e8 2e 00 00 00       	call   80d70ae <_ZN10BlueMarble8tileTypeEi>
 80d7080:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7083:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7086:	83 c2 04             	add    $0x4,%edx
 80d7089:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d708d:	89 14 24             	mov    %edx,(%esp)
 80d7090:	e8 39 34 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7095:	89 04 24             	mov    %eax,(%esp)
 80d7098:	e8 67 fb ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d709d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d70a1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d70a4:	89 04 24             	mov    %eax,(%esp)
 80d70a7:	e8 7a 09 00 00       	call   80d7a26 <_ZN10BlueMarble12setVisitZoneEi>
 80d70ac:	c9                   	leave
 80d70ad:	c3                   	ret

```

```c
// BlueMarble::intoBoardZone @ 0x80d7038

/* BlueMarble::intoBoardZone(int) */

void __thiscall BlueMarble::intoBoardZone(BlueMarble *this,int param_1)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  
  iVar1 = getRandomDungeon(this,param_1,0xe);
  setDungeonIndex(this,param_1,iVar1);
  tileType(this,param_1);
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::getBoardZone(this_00);
  setVisitZone((int)this);
  return;
}

```

---

## join

```asm
// === 080d8f58 BlueMarble::join  [0x080d8f58-0x80d9073] ===
 80d8f58:	55                   	push   %ebp
 80d8f59:	89 e5                	mov    %esp,%ebp
 80d8f5b:	53                   	push   %ebx
 80d8f5c:	83 ec 24             	sub    $0x24,%esp
 80d8f5f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d8f63:	75 0a                	jne    80d8f6f <_ZN10BlueMarble4joinEP5CUser+0x17>
 80d8f65:	b8 17 00 00 00       	mov    $0x17,%eax
 80d8f6a:	e9 ff 00 00 00       	jmp    80d906e <_ZN10BlueMarble4joinEP5CUser+0x116>
 80d8f6f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d8f76:	e9 b8 00 00 00       	jmp    80d9033 <_ZN10BlueMarble4joinEP5CUser+0xdb>
 80d8f7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8f7e:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8f81:	83 c2 04             	add    $0x4,%edx
 80d8f84:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8f88:	89 14 24             	mov    %edx,(%esp)
 80d8f8b:	e8 3e 15 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8f90:	89 04 24             	mov    %eax,(%esp)
 80d8f93:	e8 f0 db ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8f98:	85 c0                	test   %eax,%eax
 80d8f9a:	0f 94 c0             	sete   %al
 80d8f9d:	84 c0                	test   %al,%al
 80d8f9f:	0f 84 8a 00 00 00    	je     80d902f <_ZN10BlueMarble4joinEP5CUser+0xd7>
 80d8fa5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8fa8:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8fab:	83 c2 04             	add    $0x4,%edx
 80d8fae:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8fb2:	89 14 24             	mov    %edx,(%esp)
 80d8fb5:	e8 14 15 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8fba:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d8fbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d8fc1:	89 04 24             	mov    %eax,(%esp)
 80d8fc4:	e8 b1 db ff ff       	call   80d6b7a <_ZN18BlueMarbleUserInfo7setUserEP5CUser>
 80d8fc9:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8fcc:	89 04 24             	mov    %eax,(%esp)
 80d8fcf:	e8 60 fc ff ff       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 80d8fd4:	0f bf d8             	movswl %ax,%ebx
 80d8fd7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8fda:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8fdd:	83 c2 04             	add    $0x4,%edx
 80d8fe0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8fe4:	89 14 24             	mov    %edx,(%esp)
 80d8fe7:	e8 e2 14 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8fec:	89 04 24             	mov    %eax,(%esp)
 80d8fef:	e8 94 db ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8ff4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d8ff8:	89 04 24             	mov    %eax,(%esp)
 80d8ffb:	e8 40 13 00 00       	call   80da340 <_ZN5CUser18setBlueMarbleIndexEs>
 80d9000:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9003:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9006:	83 c2 04             	add    $0x4,%edx
 80d9009:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d900d:	89 14 24             	mov    %edx,(%esp)
 80d9010:	e8 b9 14 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9015:	89 04 24             	mov    %eax,(%esp)
 80d9018:	e8 6b db ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d901d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d9024:	00 
 80d9025:	89 04 24             	mov    %eax,(%esp)
 80d9028:	e8 8b 7e 5b 00       	call   8690eb8 <_ZN5CUser12setMoveSpaceEN9UserSpace1TE>
 80d902d:	eb 1b                	jmp    80d904a <_ZN10BlueMarble4joinEP5CUser+0xf2>
 80d902f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d9033:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9036:	8b 40 38             	mov    0x38(%eax),%eax
 80d9039:	8b 40 30             	mov    0x30(%eax),%eax
 80d903c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d903f:	0f 9f c0             	setg   %al
 80d9042:	84 c0                	test   %al,%al
 80d9044:	0f 85 31 ff ff ff    	jne    80d8f7b <_ZN10BlueMarble4joinEP5CUser+0x23>
 80d904a:	e8 58 13 00 00       	call   80da3a7 <_Z11G_GameWorldv>
 80d904f:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d9052:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d9056:	89 04 24             	mov    %eax,(%esp)
 80d9059:	e8 f6 e5 5e 00       	call   86c7654 <_ZN9GameWorld14gotoBlueMarbleEP5CUser>
 80d905e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9061:	89 04 24             	mov    %eax,(%esp)
 80d9064:	e8 4b f4 ff ff       	call   80d84b4 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv>
 80d9069:	b8 00 00 00 00       	mov    $0x0,%eax
 80d906e:	83 c4 24             	add    $0x24,%esp
 80d9071:	5b                   	pop    %ebx
 80d9072:	5d                   	pop    %ebp
 80d9073:	c3                   	ret

```

```c
// BlueMarble::join @ 0x80d8f58

/* BlueMarble::join(CUser*) */

undefined4 __thiscall BlueMarble::join(BlueMarble *this,CUser *param_1)

{
  short sVar1;
  undefined4 uVar2;
  BlueMarbleUserInfo *pBVar3;
  int iVar4;
  CUser *pCVar5;
  GameWorld *this_00;
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0x17;
  }
  else {
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      pBVar3 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      iVar4 = BlueMarbleUserInfo::getUser(pBVar3);
      if (iVar4 == 0) {
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        BlueMarbleUserInfo::setUser(pBVar3,param_1);
        sVar1 = getMemoryPoolIndex(this);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        CUser::setBlueMarbleIndex(pCVar5,sVar1);
        pBVar3 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        pCVar5 = (CUser *)BlueMarbleUserInfo::getUser(pBVar3);
        CUser::setMoveSpace(pCVar5,1);
        break;
      }
    }
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::gotoBlueMarble(this_00,param_1);
    sendBlueMarbleRoomInfo(this);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## leaveUser

```asm
// === 080d9136 BlueMarble::leaveUser  [0x080d9136-0x80d9201] ===
 80d9136:	55                   	push   %ebp
 80d9137:	89 e5                	mov    %esp,%ebp
 80d9139:	83 ec 38             	sub    $0x38,%esp
 80d913c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d9140:	75 31                	jne    80d9173 <_ZN10BlueMarble9leaveUserEP5CUser+0x3d>
 80d9142:	c7 44 24 10 6c 8a b2 	movl   $0x8b28a6c,0x10(%esp)
 80d9149:	08 
 80d914a:	c7 44 24 0c f9 03 00 	movl   $0x3f9,0xc(%esp)
 80d9151:	00 
 80d9152:	c7 44 24 08 e0 9a b2 	movl   $0x8b29ae0,0x8(%esp)
 80d9159:	08 
 80d915a:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d9161:	08 
 80d9162:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d9169:	e8 9c aa 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d916e:	e9 8c 00 00 00       	jmp    80d91ff <_ZN10BlueMarble9leaveUserEP5CUser+0xc9>
 80d9173:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9176:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d917a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d917d:	89 04 24             	mov    %eax,(%esp)
 80d9180:	e8 ef fe ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d9185:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d9188:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d918c:	75 35                	jne    80d91c3 <_ZN10BlueMarble9leaveUserEP5CUser+0x8d>
 80d918e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9191:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d9195:	c7 44 24 10 90 8a b2 	movl   $0x8b28a90,0x10(%esp)
 80d919c:	08 
 80d919d:	c7 44 24 0c 00 04 00 	movl   $0x400,0xc(%esp)
 80d91a4:	00 
 80d91a5:	c7 44 24 08 e0 9a b2 	movl   $0x8b29ae0,0x8(%esp)
 80d91ac:	08 
 80d91ad:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d91b4:	08 
 80d91b5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d91bc:	e8 49 aa 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d91c1:	eb 3c                	jmp    80d91ff <_ZN10BlueMarble9leaveUserEP5CUser+0xc9>
 80d91c3:	e8 df 11 00 00       	call   80da3a7 <_Z11G_GameWorldv>
 80d91c8:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d91cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d91cf:	89 04 24             	mov    %eax,(%esp)
 80d91d2:	e8 3d e7 5e 00       	call   86c7914 <_ZN9GameWorld17outFromBlueMarbleEP5CUser>
 80d91d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d91da:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d91de:	8b 45 08             	mov    0x8(%ebp),%eax
 80d91e1:	89 04 24             	mov    %eax,(%esp)
 80d91e4:	e8 09 f1 ff ff       	call   80d82f2 <_ZN10BlueMarble16setLeaveUserSlotEi>
 80d91e9:	8b 45 08             	mov    0x8(%ebp),%eax
 80d91ec:	89 04 24             	mov    %eax,(%esp)
 80d91ef:	e8 1e f2 ff ff       	call   80d8412 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv>
 80d91f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d91f7:	89 04 24             	mov    %eax,(%esp)
 80d91fa:	e8 b5 f2 ff ff       	call   80d84b4 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv>
 80d91ff:	c9                   	leave
 80d9200:	c3                   	ret
 80d9201:	90                   	nop

```

```c
// BlueMarble::leaveUser @ 0x80d9136

/* BlueMarble::leaveUser(CUser*) */

void __thiscall BlueMarble::leaveUser(BlueMarble *this,CUser *param_1)

{
  int iVar1;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"BlueMarble.cpp","void BlueMarble::leaveUser(CUser*)",0x3f9,
               "BlueMarble::leaveUser user is NULL");
  }
  else {
    iVar1 = getUserSlot(this,param_1);
    if (iVar1 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::leaveUser(CUser*)",0x400,
                 "BlueMarble::leaveUser slot(%d)",0xffffffff);
    }
    else {
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::outFromBlueMarble(this_00,param_1);
      setLeaveUserSlot(this,iVar1);
      setLeaveUserBlueMarbleState(this);
      sendBlueMarbleRoomInfo(this);
    }
  }
  return;
}

```

---

## movePosition

```asm
// === 080d9a4c BlueMarble::movePosition  [0x080d9a4c-0x80d9c11] ===
 80d9a4c:	55                   	push   %ebp
 80d9a4d:	89 e5                	mov    %esp,%ebp
 80d9a4f:	56                   	push   %esi
 80d9a50:	53                   	push   %ebx
 80d9a51:	83 ec 30             	sub    $0x30,%esp
 80d9a54:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d9a57:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9a5b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9a5e:	89 04 24             	mov    %eax,(%esp)
 80d9a61:	e8 0e f6 ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d9a66:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d9a69:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d9a6d:	75 38                	jne    80d9aa7 <_ZN10BlueMarble12movePositionEP5CUseri+0x5b>
 80d9a6f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9a72:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d9a76:	c7 44 24 10 a4 8b b2 	movl   $0x8b28ba4,0x10(%esp)
 80d9a7d:	08 
 80d9a7e:	c7 44 24 0c f4 04 00 	movl   $0x4f4,0xc(%esp)
 80d9a85:	00 
 80d9a86:	c7 44 24 08 e0 98 b2 	movl   $0x8b298e0,0x8(%esp)
 80d9a8d:	08 
 80d9a8e:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d9a95:	08 
 80d9a96:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d9a9d:	e8 68 a1 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d9aa2:	e9 64 01 00 00       	jmp    80d9c0b <_ZN10BlueMarble12movePositionEP5CUseri+0x1bf>
 80d9aa7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9aaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9aae:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9ab1:	89 04 24             	mov    %eax,(%esp)
 80d9ab4:	e8 1f d4 ff ff       	call   80d6ed8 <_ZN10BlueMarble14checkThrowDiceEi>
 80d9ab9:	83 f0 01             	xor    $0x1,%eax
 80d9abc:	84 c0                	test   %al,%al
 80d9abe:	0f 85 46 01 00 00    	jne    80d9c0a <_ZN10BlueMarble12movePositionEP5CUseri+0x1be>
 80d9ac4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9ac7:	89 04 24             	mov    %eax,(%esp)
 80d9aca:	e8 7d 42 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d9acf:	c7 44 24 08 af 01 00 	movl   $0x1af,0x8(%esp)
 80d9ad6:	00 
 80d9ad7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d9ade:	00 
 80d9adf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9ae2:	89 04 24             	mov    %eax,(%esp)
 80d9ae5:	e8 12 1e ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d9aea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9aed:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9af1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9af4:	89 04 24             	mov    %eax,(%esp)
 80d9af7:	e8 24 1e ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d9afc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9aff:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b03:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9b06:	89 04 24             	mov    %eax,(%esp)
 80d9b09:	e8 04 d5 ff ff       	call   80d7012 <_ZNK10BlueMarble15getMovePositionEi>
 80d9b0e:	8b 55 10             	mov    0x10(%ebp),%edx
 80d9b11:	89 d1                	mov    %edx,%ecx
 80d9b13:	29 c1                	sub    %eax,%ecx
 80d9b15:	89 c8                	mov    %ecx,%eax
 80d9b17:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b1b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9b1e:	89 04 24             	mov    %eax,(%esp)
 80d9b21:	e8 fa 1d ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d9b26:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d9b2d:	00 
 80d9b2e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9b31:	89 04 24             	mov    %eax,(%esp)
 80d9b34:	e8 1f 1e ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d9b39:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9b3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b40:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9b43:	89 04 24             	mov    %eax,(%esp)
 80d9b46:	e8 83 fe ff ff       	call   80d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>
 80d9b4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9b4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b52:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9b55:	89 04 24             	mov    %eax,(%esp)
 80d9b58:	e8 45 d2 ff ff       	call   80d6da2 <_ZN10BlueMarble14resetIndexInfoEi>
 80d9b5d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9b60:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b64:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9b67:	89 04 24             	mov    %eax,(%esp)
 80d9b6a:	e8 a3 d4 ff ff       	call   80d7012 <_ZNK10BlueMarble15getMovePositionEi>
 80d9b6f:	8b 55 10             	mov    0x10(%ebp),%edx
 80d9b72:	89 d1                	mov    %edx,%ecx
 80d9b74:	29 c1                	sub    %eax,%ecx
 80d9b76:	89 c8                	mov    %ecx,%eax
 80d9b78:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d9b7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9b7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b83:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9b86:	89 04 24             	mov    %eax,(%esp)
 80d9b89:	e8 42 d4 ff ff       	call   80d6fd0 <_ZN10BlueMarble15setMovePositionEii>
 80d9b8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9b91:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9b95:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9b98:	89 04 24             	mov    %eax,(%esp)
 80d9b9b:	e8 98 d4 ff ff       	call   80d7038 <_ZN10BlueMarble13intoBoardZoneEi>
 80d9ba0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9ba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9ba7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9baa:	89 04 24             	mov    %eax,(%esp)
 80d9bad:	e8 c6 db ff ff       	call   80d7778 <_ZNK10BlueMarble12getItemIndexEi>
 80d9bb2:	89 c3                	mov    %eax,%ebx
 80d9bb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9bb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9bbb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9bbe:	89 04 24             	mov    %eax,(%esp)
 80d9bc1:	e8 f0 d7 ff ff       	call   80d73b6 <_ZNK10BlueMarble15getDungeonIndexEi>
 80d9bc6:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80d9bca:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d9bce:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9bd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9bd5:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9bd8:	89 04 24             	mov    %eax,(%esp)
 80d9bdb:	e8 22 ec ff ff       	call   80d8802 <_ZNK10BlueMarble23sendBoardZoneActionInfoEiij>
 80d9be0:	eb 1b                	jmp    80d9bfd <_ZN10BlueMarble12movePositionEP5CUseri+0x1b1>
 80d9be2:	89 d3                	mov    %edx,%ebx
 80d9be4:	89 c6                	mov    %eax,%esi
 80d9be6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9be9:	89 04 24             	mov    %eax,(%esp)
 80d9bec:	e8 8f 42 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d9bf1:	89 f0                	mov    %esi,%eax
 80d9bf3:	89 da                	mov    %ebx,%edx
 80d9bf5:	89 04 24             	mov    %eax,(%esp)
 80d9bf8:	e8 53 9b a0 00       	call   8ae3750 <_Unwind_Resume>
 80d9bfd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d9c00:	89 04 24             	mov    %eax,(%esp)
 80d9c03:	e8 78 42 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d9c08:	eb 01                	jmp    80d9c0b <_ZN10BlueMarble12movePositionEP5CUseri+0x1bf>
 80d9c0a:	90                   	nop
 80d9c0b:	83 c4 30             	add    $0x30,%esp
 80d9c0e:	5b                   	pop    %ebx
 80d9c0f:	5e                   	pop    %esi
 80d9c10:	5d                   	pop    %ebp
 80d9c11:	c3                   	ret

```

```c
// BlueMarble::movePosition @ 0x80d9a4c

/* BlueMarble::movePosition(CUser*, int) */

void __thiscall BlueMarble::movePosition(BlueMarble *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = getUserSlot(this,param_1);
  if (local_10 == -1) {
    LogManager::logFormat
              (1,"BlueMarble.cpp","void BlueMarble::movePosition(CUser*, int)",0x4f4,
               "BlueMarble::movePosition slot(%d)",0xffffffff);
  }
  else {
    cVar1 = checkThrowDice(this,local_10);
    if (cVar1 == '\x01') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080d9ae5 to 080d9bdf has its CatchHandler @ 080d9be2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1af);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
      iVar2 = getMovePosition(this,local_10);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,param_2 - iVar2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      sendToBlueMarble(this,local_1c);
      resetIndexInfo(this,local_10);
      iVar2 = getMovePosition(this,local_10);
      setMovePosition(this,local_10,param_2 - iVar2);
      intoBoardZone(this,local_10);
      uVar3 = getItemIndex(this,local_10);
      iVar2 = getDungeonIndex(this,local_10);
      sendBoardZoneActionInfo(this,local_10,iVar2,uVar3);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return;
}

```

---

## resetBlueMarble

```asm
// === 080d6d48 BlueMarble::resetBlueMarble  [0x080d6d48-0x80d6d7b] ===
 80d6d48:	55                   	push   %ebp
 80d6d49:	89 e5                	mov    %esp,%ebp
 80d6d4b:	83 ec 18             	sub    $0x18,%esp
 80d6d4e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d51:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 80d6d58:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d5b:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 80d6d62:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d65:	83 c0 20             	add    $0x20,%eax
 80d6d68:	89 04 24             	mov    %eax,(%esp)
 80d6d6b:	e8 e6 36 00 00       	call   80da456 <_ZNSt3setIiSt4lessIiESaIiEE5clearEv>
 80d6d70:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6d73:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 80d6d7a:	c9                   	leave
 80d6d7b:	c3                   	ret

```

```c
// BlueMarble::resetBlueMarble @ 0x80d6d48

/* BlueMarble::resetBlueMarble() */

void __thiscall BlueMarble::resetBlueMarble(BlueMarble *this)

{
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  std::set<int,std::less<int>,std::allocator<int>>::clear
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  *(undefined4 *)(this + 0x3c) = 0;
  return;
}

```

---

## resetBuffInfo

```asm
// === 080d6d7c BlueMarble::resetBuffInfo  [0x080d6d7c-0x80d6da1] ===
 80d6d7c:	55                   	push   %ebp
 80d6d7d:	89 e5                	mov    %esp,%ebp
 80d6d7f:	83 ec 18             	sub    $0x18,%esp
 80d6d82:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d6d85:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6d88:	83 c2 04             	add    $0x4,%edx
 80d6d8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6d8f:	89 14 24             	mov    %edx,(%esp)
 80d6d92:	e8 37 37 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d6d97:	89 04 24             	mov    %eax,(%esp)
 80d6d9a:	e8 af fd ff ff       	call   80d6b4e <_ZN18BlueMarbleUserInfo9resetBuffEv>
 80d6d9f:	c9                   	leave
 80d6da0:	c3                   	ret
 80d6da1:	90                   	nop

```

```c
// BlueMarble::resetBuffInfo @ 0x80d6d7c

/* BlueMarble::resetBuffInfo(int) */

void __thiscall BlueMarble::resetBuffInfo(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::resetBuff(this_00);
  return;
}

```

---

## resetIndexInfo

```asm
// === 080d6da2 BlueMarble::resetIndexInfo  [0x080d6da2-0x80d6dc7] ===
 80d6da2:	55                   	push   %ebp
 80d6da3:	89 e5                	mov    %esp,%ebp
 80d6da5:	83 ec 18             	sub    $0x18,%esp
 80d6da8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d6dab:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6dae:	83 c2 04             	add    $0x4,%edx
 80d6db1:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6db5:	89 14 24             	mov    %edx,(%esp)
 80d6db8:	e8 11 37 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d6dbd:	89 04 24             	mov    %eax,(%esp)
 80d6dc0:	e8 9f fd ff ff       	call   80d6b64 <_ZN18BlueMarbleUserInfo10resetIndexEv>
 80d6dc5:	c9                   	leave
 80d6dc6:	c3                   	ret
 80d6dc7:	90                   	nop

```

```c
// BlueMarble::resetIndexInfo @ 0x80d6da2

/* BlueMarble::resetIndexInfo(int) */

void __thiscall BlueMarble::resetIndexInfo(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::resetIndex(this_00);
  return;
}

```

---

## resultReward

```asm
// === 080d7dde BlueMarble::resultReward  [0x080d7dde-0x80d7e8d] ===
 80d7dde:	55                   	push   %ebp
 80d7ddf:	89 e5                	mov    %esp,%ebp
 80d7de1:	83 ec 68             	sub    $0x68,%esp
 80d7de4:	8d 45 b7             	lea    -0x49(%ebp),%eax
 80d7de7:	89 04 24             	mov    %eax,(%esp)
 80d7dea:	e8 65 3a ff ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80d7def:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d7df6:	eb 7c                	jmp    80d7e74 <_ZN10BlueMarble12resultRewardEv+0x96>
 80d7df8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7dfb:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7dfe:	83 c2 04             	add    $0x4,%edx
 80d7e01:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7e05:	89 14 24             	mov    %edx,(%esp)
 80d7e08:	e8 c1 26 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7e0d:	89 04 24             	mov    %eax,(%esp)
 80d7e10:	e8 73 ed ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d7e15:	85 c0                	test   %eax,%eax
 80d7e17:	0f 94 c0             	sete   %al
 80d7e1a:	84 c0                	test   %al,%al
 80d7e1c:	75 4e                	jne    80d7e6c <_ZN10BlueMarble12resultRewardEv+0x8e>
 80d7e1e:	8d 45 b7             	lea    -0x49(%ebp),%eax
 80d7e21:	89 04 24             	mov    %eax,(%esp)
 80d7e24:	e8 af 39 ff ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 80d7e29:	8d 45 b7             	lea    -0x49(%ebp),%eax
 80d7e2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d7e30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7e33:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7e37:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7e3a:	89 04 24             	mov    %eax,(%esp)
 80d7e3d:	e8 4c 00 00 00       	call   80d7e8e <_ZN10BlueMarble13setResultItemEiR10Inven_Item>
 80d7e42:	8b 45 b9             	mov    -0x47(%ebp),%eax
 80d7e45:	85 c0                	test   %eax,%eax
 80d7e47:	74 26                	je     80d7e6f <_ZN10BlueMarble12resultRewardEv+0x91>
 80d7e49:	c7 44 24 0c 42 00 00 	movl   $0x42,0xc(%esp)
 80d7e50:	00 
 80d7e51:	8d 45 b7             	lea    -0x49(%ebp),%eax
 80d7e54:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d7e58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7e5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7e5f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7e62:	89 04 24             	mov    %eax,(%esp)
 80d7e65:	e8 a4 01 00 00       	call   80d800e <_ZN10BlueMarble10insertItemEiR10Inven_Item14eItemAddReason>
 80d7e6a:	eb 04                	jmp    80d7e70 <_ZN10BlueMarble12resultRewardEv+0x92>
 80d7e6c:	90                   	nop
 80d7e6d:	eb 01                	jmp    80d7e70 <_ZN10BlueMarble12resultRewardEv+0x92>
 80d7e6f:	90                   	nop
 80d7e70:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d7e74:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7e77:	8b 40 38             	mov    0x38(%eax),%eax
 80d7e7a:	8b 40 30             	mov    0x30(%eax),%eax
 80d7e7d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d7e80:	0f 9f c0             	setg   %al
 80d7e83:	84 c0                	test   %al,%al
 80d7e85:	0f 85 6d ff ff ff    	jne    80d7df8 <_ZN10BlueMarble12resultRewardEv+0x1a>
 80d7e8b:	c9                   	leave
 80d7e8c:	c3                   	ret
 80d7e8d:	90                   	nop

```

```c
// BlueMarble::resultReward @ 0x80d7dde

/* BlueMarble::resultReward() */

void __thiscall BlueMarble::resultReward(BlueMarble *this)

{
  BlueMarbleUserInfo *this_00;
  int iVar1;
  Inven_Item local_4d [2];
  int local_4b;
  uint local_10;
  
  Inven_Item::Inven_Item(local_4d);
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    this_00 = (BlueMarbleUserInfo *)
              std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                        ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4)
                         ,local_10);
    iVar1 = BlueMarbleUserInfo::getUser(this_00);
    if (iVar1 != 0) {
      Inven_Item::reset(local_4d);
      setResultItem(this,local_10,local_4d);
      if (local_4b != 0) {
        insertItem(this,local_10,local_4d,0x42);
      }
    }
  }
  return;
}

```

---

## sendBlueMarbleDiceInfo

```asm
// === 080d8600 BlueMarble::sendBlueMarbleDiceInfo  [0x080d8600-0x80d86b1] ===
 80d8600:	55                   	push   %ebp
 80d8601:	89 e5                	mov    %esp,%ebp
 80d8603:	56                   	push   %esi
 80d8604:	53                   	push   %ebx
 80d8605:	83 ec 20             	sub    $0x20,%esp
 80d8608:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d860b:	89 04 24             	mov    %eax,(%esp)
 80d860e:	e8 39 57 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d8613:	c7 44 24 08 af 01 00 	movl   $0x1af,0x8(%esp)
 80d861a:	00 
 80d861b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d8622:	00 
 80d8623:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8626:	89 04 24             	mov    %eax,(%esp)
 80d8629:	e8 ce 32 ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d862e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8631:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8635:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8638:	89 04 24             	mov    %eax,(%esp)
 80d863b:	e8 e0 32 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d8640:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8643:	89 04 24             	mov    %eax,(%esp)
 80d8646:	e8 79 e9 ff ff       	call   80d6fc4 <_ZNK10BlueMarble13getDiceNumberEv>
 80d864b:	0f be c0             	movsbl %al,%eax
 80d864e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8652:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8655:	89 04 24             	mov    %eax,(%esp)
 80d8658:	e8 c3 32 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d865d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d8664:	00 
 80d8665:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8668:	89 04 24             	mov    %eax,(%esp)
 80d866b:	e8 e8 32 ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d8670:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8673:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8677:	8b 45 08             	mov    0x8(%ebp),%eax
 80d867a:	89 04 24             	mov    %eax,(%esp)
 80d867d:	e8 4c 13 00 00       	call   80d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>
 80d8682:	eb 1b                	jmp    80d869f <_ZNK10BlueMarble22sendBlueMarbleDiceInfoEi+0x9f>
 80d8684:	89 d3                	mov    %edx,%ebx
 80d8686:	89 c6                	mov    %eax,%esi
 80d8688:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d868b:	89 04 24             	mov    %eax,(%esp)
 80d868e:	e8 ed 57 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d8693:	89 f0                	mov    %esi,%eax
 80d8695:	89 da                	mov    %ebx,%edx
 80d8697:	89 04 24             	mov    %eax,(%esp)
 80d869a:	e8 b1 b0 a0 00       	call   8ae3750 <_Unwind_Resume>
 80d869f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d86a2:	89 04 24             	mov    %eax,(%esp)
 80d86a5:	e8 d6 57 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d86aa:	83 c4 20             	add    $0x20,%esp
 80d86ad:	5b                   	pop    %ebx
 80d86ae:	5e                   	pop    %esi
 80d86af:	5d                   	pop    %ebp
 80d86b0:	c3                   	ret
 80d86b1:	90                   	nop

```

```c
// BlueMarble::sendBlueMarbleDiceInfo @ 0x80d8600

/* BlueMarble::sendBlueMarbleDiceInfo(int) const */

void __thiscall BlueMarble::sendBlueMarbleDiceInfo(BlueMarble *this,int param_1)

{
  char cVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d8629 to 080d8681 has its CatchHandler @ 080d8684 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1af);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  cVar1 = getDiceNumber(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  sendToBlueMarble(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## sendBlueMarbleRoomInfo

```asm
// === 080d84b4 BlueMarble::sendBlueMarbleRoomInfo  [0x080d84b4-0x80d85ff] ===
 80d84b4:	55                   	push   %ebp
 80d84b5:	89 e5                	mov    %esp,%ebp
 80d84b7:	56                   	push   %esi
 80d84b8:	53                   	push   %ebx
 80d84b9:	83 ec 20             	sub    $0x20,%esp
 80d84bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d84bf:	89 04 24             	mov    %eax,(%esp)
 80d84c2:	e8 85 58 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d84c7:	c7 44 24 08 ae 01 00 	movl   $0x1ae,0x8(%esp)
 80d84ce:	00 
 80d84cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d84d6:	00 
 80d84d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d84da:	89 04 24             	mov    %eax,(%esp)
 80d84dd:	e8 1a 34 ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d84e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d84e5:	89 04 24             	mov    %eax,(%esp)
 80d84e8:	e8 47 07 00 00       	call   80d8c34 <_ZNK10BlueMarble18getMemoryPoolIndexEv>
 80d84ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d84f1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d84f4:	89 04 24             	mov    %eax,(%esp)
 80d84f7:	e8 a8 19 00 00       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80d84fc:	8b 45 08             	mov    0x8(%ebp),%eax
 80d84ff:	89 04 24             	mov    %eax,(%esp)
 80d8502:	e8 d3 0b 00 00       	call   80d90da <_ZNK10BlueMarble16getWaitUserCountEv>
 80d8507:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d850b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d850e:	89 04 24             	mov    %eax,(%esp)
 80d8511:	e8 0a 34 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d8516:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d851d:	eb 76                	jmp    80d8595 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv+0xe1>
 80d851f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8522:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8525:	83 c2 04             	add    $0x4,%edx
 80d8528:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d852c:	89 14 24             	mov    %edx,(%esp)
 80d852f:	e8 d0 1f 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8534:	89 04 24             	mov    %eax,(%esp)
 80d8537:	e8 4c e6 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d853c:	85 c0                	test   %eax,%eax
 80d853e:	0f 94 c0             	sete   %al
 80d8541:	84 c0                	test   %al,%al
 80d8543:	75 4b                	jne    80d8590 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv+0xdc>
 80d8545:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8548:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d854c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d854f:	89 04 24             	mov    %eax,(%esp)
 80d8552:	e8 c9 33 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d8557:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d855a:	8b 55 08             	mov    0x8(%ebp),%edx
 80d855d:	83 c2 04             	add    $0x4,%edx
 80d8560:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8564:	89 14 24             	mov    %edx,(%esp)
 80d8567:	e8 98 1f 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d856c:	89 04 24             	mov    %eax,(%esp)
 80d856f:	e8 14 e6 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8574:	89 04 24             	mov    %eax,(%esp)
 80d8577:	e8 00 1e 00 00       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 80d857c:	0f b7 c0             	movzwl %ax,%eax
 80d857f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8583:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d8586:	89 04 24             	mov    %eax,(%esp)
 80d8589:	e8 16 19 00 00       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80d858e:	eb 01                	jmp    80d8591 <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv+0xdd>
 80d8590:	90                   	nop
 80d8591:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d8595:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8598:	8b 40 38             	mov    0x38(%eax),%eax
 80d859b:	8b 40 30             	mov    0x30(%eax),%eax
 80d859e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d85a1:	0f 9f c0             	setg   %al
 80d85a4:	84 c0                	test   %al,%al
 80d85a6:	0f 85 73 ff ff ff    	jne    80d851f <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv+0x6b>
 80d85ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d85b3:	00 
 80d85b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d85b7:	89 04 24             	mov    %eax,(%esp)
 80d85ba:	e8 99 33 ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d85bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d85c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d85c6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d85c9:	89 04 24             	mov    %eax,(%esp)
 80d85cc:	e8 fd 13 00 00       	call   80d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>
 80d85d1:	eb 1b                	jmp    80d85ee <_ZNK10BlueMarble22sendBlueMarbleRoomInfoEv+0x13a>
 80d85d3:	89 d3                	mov    %edx,%ebx
 80d85d5:	89 c6                	mov    %eax,%esi
 80d85d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d85da:	89 04 24             	mov    %eax,(%esp)
 80d85dd:	e8 9e 58 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d85e2:	89 f0                	mov    %esi,%eax
 80d85e4:	89 da                	mov    %ebx,%edx
 80d85e6:	89 04 24             	mov    %eax,(%esp)
 80d85e9:	e8 62 b1 a0 00       	call   8ae3750 <_Unwind_Resume>
 80d85ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d85f1:	89 04 24             	mov    %eax,(%esp)
 80d85f4:	e8 87 58 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d85f9:	83 c4 20             	add    $0x20,%esp
 80d85fc:	5b                   	pop    %ebx
 80d85fd:	5e                   	pop    %esi
 80d85fe:	5d                   	pop    %ebp
 80d85ff:	c3                   	ret

```

```c
// BlueMarble::sendBlueMarbleRoomInfo @ 0x80d84b4

/* BlueMarble::sendBlueMarbleRoomInfo() const */

void __thiscall BlueMarble::sendBlueMarbleRoomInfo(BlueMarble *this)

{
  int iVar1;
  BlueMarbleUserInfo *pBVar2;
  CUser *this_00;
  uint uVar3;
  PacketGuard local_1c [12];
  uint local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080d84dd to 080d85d0 has its CatchHandler @ 080d85d3 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1ae);
  iVar1 = getMemoryPoolIndex(this);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,iVar1);
  iVar1 = getWaitUserCount(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,iVar1);
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_10);
    iVar1 = BlueMarbleUserInfo::getUser(pBVar2);
    if (iVar1 != 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      this_00 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
      uVar3 = CUser::get_unique_id(this_00);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar3 & 0xffff);
    }
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  sendToBlueMarble(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## sendBoardZoneActionInfo

```asm
// === 080d8802 BlueMarble::sendBoardZoneActionInfo  [0x080d8802-0x80d88c1] ===
 80d8802:	55                   	push   %ebp
 80d8803:	89 e5                	mov    %esp,%ebp
 80d8805:	56                   	push   %esi
 80d8806:	53                   	push   %ebx
 80d8807:	83 ec 20             	sub    $0x20,%esp
 80d880a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d880d:	89 04 24             	mov    %eax,(%esp)
 80d8810:	e8 37 55 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d8815:	c7 44 24 08 b2 01 00 	movl   $0x1b2,0x8(%esp)
 80d881c:	00 
 80d881d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d8824:	00 
 80d8825:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8828:	89 04 24             	mov    %eax,(%esp)
 80d882b:	e8 cc 30 ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d8830:	8b 45 10             	mov    0x10(%ebp),%eax
 80d8833:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8837:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d883a:	89 04 24             	mov    %eax,(%esp)
 80d883d:	e8 62 16 00 00       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80d8842:	8b 45 14             	mov    0x14(%ebp),%eax
 80d8845:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8849:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d884c:	89 04 24             	mov    %eax,(%esp)
 80d884f:	e8 e8 30 ff ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 80d8854:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d885b:	00 
 80d885c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d885f:	89 04 24             	mov    %eax,(%esp)
 80d8862:	e8 f1 30 ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d8867:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d886a:	8b 55 08             	mov    0x8(%ebp),%edx
 80d886d:	83 c2 04             	add    $0x4,%edx
 80d8870:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8874:	89 14 24             	mov    %edx,(%esp)
 80d8877:	e8 88 1c 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d887c:	89 04 24             	mov    %eax,(%esp)
 80d887f:	e8 04 e3 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8884:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80d8887:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d888b:	89 04 24             	mov    %eax,(%esp)
 80d888e:	e8 27 fd 56 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80d8893:	eb 1b                	jmp    80d88b0 <_ZNK10BlueMarble23sendBoardZoneActionInfoEiij+0xae>
 80d8895:	89 d3                	mov    %edx,%ebx
 80d8897:	89 c6                	mov    %eax,%esi
 80d8899:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d889c:	89 04 24             	mov    %eax,(%esp)
 80d889f:	e8 dc 55 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d88a4:	89 f0                	mov    %esi,%eax
 80d88a6:	89 da                	mov    %ebx,%edx
 80d88a8:	89 04 24             	mov    %eax,(%esp)
 80d88ab:	e8 a0 ae a0 00       	call   8ae3750 <_Unwind_Resume>
 80d88b0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d88b3:	89 04 24             	mov    %eax,(%esp)
 80d88b6:	e8 c5 55 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d88bb:	83 c4 20             	add    $0x20,%esp
 80d88be:	5b                   	pop    %ebx
 80d88bf:	5e                   	pop    %esi
 80d88c0:	5d                   	pop    %ebp
 80d88c1:	c3                   	ret

```

```c
// BlueMarble::sendBoardZoneActionInfo @ 0x80d8802

/* BlueMarble::sendBoardZoneActionInfo(int, int, unsigned int) const */

void __thiscall
BlueMarble::sendBoardZoneActionInfo(BlueMarble *this,int param_1,int param_2,uint param_3)

{
  BlueMarbleUserInfo *this_00;
  CUser *this_01;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d882b to 080d8892 has its CatchHandler @ 080d8895 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b2);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  this_01 = (CUser *)BlueMarbleUserInfo::getUser(this_00);
  CUser::Send(this_01,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## sendFinishBlueMarble

```asm
// === 080d8752 BlueMarble::sendFinishBlueMarble  [0x080d8752-0x80d8801] ===
 80d8752:	55                   	push   %ebp
 80d8753:	89 e5                	mov    %esp,%ebp
 80d8755:	56                   	push   %esi
 80d8756:	53                   	push   %ebx
 80d8757:	83 ec 20             	sub    $0x20,%esp
 80d875a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d875d:	89 04 24             	mov    %eax,(%esp)
 80d8760:	e8 f9 f5 ff ff       	call   80d7d5e <_ZNK10BlueMarble9getWinnerEv>
 80d8765:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d8768:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d876c:	0f 84 87 00 00 00    	je     80d87f9 <_ZNK10BlueMarble20sendFinishBlueMarbleEv+0xa7>
 80d8772:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d8775:	89 04 24             	mov    %eax,(%esp)
 80d8778:	e8 cf 55 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d877d:	c7 44 24 08 b1 01 00 	movl   $0x1b1,0x8(%esp)
 80d8784:	00 
 80d8785:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d878c:	00 
 80d878d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d8790:	89 04 24             	mov    %eax,(%esp)
 80d8793:	e8 64 31 ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d8798:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d879b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d879f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d87a2:	89 04 24             	mov    %eax,(%esp)
 80d87a5:	e8 76 31 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d87aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d87b1:	00 
 80d87b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d87b5:	89 04 24             	mov    %eax,(%esp)
 80d87b8:	e8 9b 31 ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d87bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d87c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d87c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d87c7:	89 04 24             	mov    %eax,(%esp)
 80d87ca:	e8 ff 11 00 00       	call   80d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>
 80d87cf:	eb 1b                	jmp    80d87ec <_ZNK10BlueMarble20sendFinishBlueMarbleEv+0x9a>
 80d87d1:	89 d3                	mov    %edx,%ebx
 80d87d3:	89 c6                	mov    %eax,%esi
 80d87d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d87d8:	89 04 24             	mov    %eax,(%esp)
 80d87db:	e8 a0 56 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d87e0:	89 f0                	mov    %esi,%eax
 80d87e2:	89 da                	mov    %ebx,%edx
 80d87e4:	89 04 24             	mov    %eax,(%esp)
 80d87e7:	e8 64 af a0 00       	call   8ae3750 <_Unwind_Resume>
 80d87ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d87ef:	89 04 24             	mov    %eax,(%esp)
 80d87f2:	e8 89 56 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d87f7:	eb 01                	jmp    80d87fa <_ZNK10BlueMarble20sendFinishBlueMarbleEv+0xa8>
 80d87f9:	90                   	nop
 80d87fa:	83 c4 20             	add    $0x20,%esp
 80d87fd:	5b                   	pop    %ebx
 80d87fe:	5e                   	pop    %esi
 80d87ff:	5d                   	pop    %ebp
 80d8800:	c3                   	ret
 80d8801:	90                   	nop

```

```c
// BlueMarble::sendFinishBlueMarble @ 0x80d8752

/* BlueMarble::sendFinishBlueMarble() const */

void __thiscall BlueMarble::sendFinishBlueMarble(BlueMarble *this)

{
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = getWinner(this);
  if (local_10 != -1) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080d8793 to 080d87ce has its CatchHandler @ 080d87d1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1b1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    sendToBlueMarble(this,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

---

## sendStartBlueMarble

```asm
// === 080d86b2 BlueMarble::sendStartBlueMarble  [0x080d86b2-0x80d8751] ===
 80d86b2:	55                   	push   %ebp
 80d86b3:	89 e5                	mov    %esp,%ebp
 80d86b5:	56                   	push   %esi
 80d86b6:	53                   	push   %ebx
 80d86b7:	83 ec 20             	sub    $0x20,%esp
 80d86ba:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d86bd:	89 04 24             	mov    %eax,(%esp)
 80d86c0:	e8 87 56 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d86c5:	c7 44 24 08 b0 01 00 	movl   $0x1b0,0x8(%esp)
 80d86cc:	00 
 80d86cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d86d4:	00 
 80d86d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d86d8:	89 04 24             	mov    %eax,(%esp)
 80d86db:	e8 1c 32 ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d86e0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d86e3:	89 04 24             	mov    %eax,(%esp)
 80d86e6:	e8 91 e7 ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d86eb:	0f be c0             	movsbl %al,%eax
 80d86ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d86f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d86f5:	89 04 24             	mov    %eax,(%esp)
 80d86f8:	e8 23 32 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d86fd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d8704:	00 
 80d8705:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8708:	89 04 24             	mov    %eax,(%esp)
 80d870b:	e8 48 32 ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d8710:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8713:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8717:	8b 45 08             	mov    0x8(%ebp),%eax
 80d871a:	89 04 24             	mov    %eax,(%esp)
 80d871d:	e8 ac 12 00 00       	call   80d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>
 80d8722:	eb 1b                	jmp    80d873f <_ZNK10BlueMarble19sendStartBlueMarbleEv+0x8d>
 80d8724:	89 d3                	mov    %edx,%ebx
 80d8726:	89 c6                	mov    %eax,%esi
 80d8728:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d872b:	89 04 24             	mov    %eax,(%esp)
 80d872e:	e8 4d 57 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d8733:	89 f0                	mov    %esi,%eax
 80d8735:	89 da                	mov    %ebx,%edx
 80d8737:	89 04 24             	mov    %eax,(%esp)
 80d873a:	e8 11 b0 a0 00       	call   8ae3750 <_Unwind_Resume>
 80d873f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8742:	89 04 24             	mov    %eax,(%esp)
 80d8745:	e8 36 57 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d874a:	83 c4 20             	add    $0x20,%esp
 80d874d:	5b                   	pop    %ebx
 80d874e:	5e                   	pop    %esi
 80d874f:	5d                   	pop    %ebp
 80d8750:	c3                   	ret
 80d8751:	90                   	nop

```

```c
// BlueMarble::sendStartBlueMarble @ 0x80d86b2

/* BlueMarble::sendStartBlueMarble() const */

void __thiscall BlueMarble::sendStartBlueMarble(BlueMarble *this)

{
  char cVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d86db to 080d8721 has its CatchHandler @ 080d8724 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b0);
  cVar1 = getBlueMarbleMap(this);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)cVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  sendToBlueMarble(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## sendTileGiveUpInfo

```asm
// === 080d88c2 BlueMarble::sendTileGiveUpInfo  [0x080d88c2-0x80d8955] ===
 80d88c2:	55                   	push   %ebp
 80d88c3:	89 e5                	mov    %esp,%ebp
 80d88c5:	56                   	push   %esi
 80d88c6:	53                   	push   %ebx
 80d88c7:	83 ec 20             	sub    $0x20,%esp
 80d88ca:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d88cd:	89 04 24             	mov    %eax,(%esp)
 80d88d0:	e8 77 54 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d88d5:	c7 44 24 08 b3 01 00 	movl   $0x1b3,0x8(%esp)
 80d88dc:	00 
 80d88dd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d88e4:	00 
 80d88e5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d88e8:	89 04 24             	mov    %eax,(%esp)
 80d88eb:	e8 0c 30 ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d88f0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d88f3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d88f7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d88fa:	89 04 24             	mov    %eax,(%esp)
 80d88fd:	e8 1e 30 ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d8902:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d8909:	00 
 80d890a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d890d:	89 04 24             	mov    %eax,(%esp)
 80d8910:	e8 43 30 ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d8915:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8918:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d891c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d891f:	89 04 24             	mov    %eax,(%esp)
 80d8922:	e8 a7 10 00 00       	call   80d99ce <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard>
 80d8927:	eb 1b                	jmp    80d8944 <_ZNK10BlueMarble18sendTileGiveUpInfoEi+0x82>
 80d8929:	89 d3                	mov    %edx,%ebx
 80d892b:	89 c6                	mov    %eax,%esi
 80d892d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8930:	89 04 24             	mov    %eax,(%esp)
 80d8933:	e8 48 55 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d8938:	89 f0                	mov    %esi,%eax
 80d893a:	89 da                	mov    %ebx,%edx
 80d893c:	89 04 24             	mov    %eax,(%esp)
 80d893f:	e8 0c ae a0 00       	call   8ae3750 <_Unwind_Resume>
 80d8944:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8947:	89 04 24             	mov    %eax,(%esp)
 80d894a:	e8 31 55 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d894f:	83 c4 20             	add    $0x20,%esp
 80d8952:	5b                   	pop    %ebx
 80d8953:	5e                   	pop    %esi
 80d8954:	5d                   	pop    %ebp
 80d8955:	c3                   	ret

```

```c
// BlueMarble::sendTileGiveUpInfo @ 0x80d88c2

/* BlueMarble::sendTileGiveUpInfo(int) const */

void __thiscall BlueMarble::sendTileGiveUpInfo(BlueMarble *this,int param_1)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d88eb to 080d8926 has its CatchHandler @ 080d8929 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1b3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,param_1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  sendToBlueMarble(this,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## sendToBlueMarble

```asm
// === 080d99ce BlueMarble::sendToBlueMarble  [0x080d99ce-0x80d9a4b] ===
 80d99ce:	55                   	push   %ebp
 80d99cf:	89 e5                	mov    %esp,%ebp
 80d99d1:	83 ec 28             	sub    $0x28,%esp
 80d99d4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d99db:	eb 59                	jmp    80d9a36 <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard+0x68>
 80d99dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d99e0:	8b 55 08             	mov    0x8(%ebp),%edx
 80d99e3:	83 c2 04             	add    $0x4,%edx
 80d99e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d99ea:	89 14 24             	mov    %edx,(%esp)
 80d99ed:	e8 12 0b 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d99f2:	89 04 24             	mov    %eax,(%esp)
 80d99f5:	e8 8e d1 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d99fa:	85 c0                	test   %eax,%eax
 80d99fc:	0f 94 c0             	sete   %al
 80d99ff:	84 c0                	test   %al,%al
 80d9a01:	75 2e                	jne    80d9a31 <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard+0x63>
 80d9a03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9a06:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9a09:	83 c2 04             	add    $0x4,%edx
 80d9a0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9a10:	89 14 24             	mov    %edx,(%esp)
 80d9a13:	e8 ec 0a 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9a18:	89 04 24             	mov    %eax,(%esp)
 80d9a1b:	e8 68 d1 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9a20:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d9a23:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d9a27:	89 04 24             	mov    %eax,(%esp)
 80d9a2a:	e8 8b eb 56 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80d9a2f:	eb 01                	jmp    80d9a32 <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard+0x64>
 80d9a31:	90                   	nop
 80d9a32:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d9a36:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9a39:	8b 40 38             	mov    0x38(%eax),%eax
 80d9a3c:	8b 40 30             	mov    0x30(%eax),%eax
 80d9a3f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d9a42:	0f 9f c0             	setg   %al
 80d9a45:	84 c0                	test   %al,%al
 80d9a47:	75 94                	jne    80d99dd <_ZNK10BlueMarble16sendToBlueMarbleER11PacketGuard+0xf>
 80d9a49:	c9                   	leave
 80d9a4a:	c3                   	ret
 80d9a4b:	90                   	nop

```

```c
// BlueMarble::sendToBlueMarble @ 0x80d99ce

/* BlueMarble::sendToBlueMarble(PacketGuard&) const */

void __thiscall BlueMarble::sendToBlueMarble(BlueMarble *this,PacketGuard *param_1)

{
  BlueMarbleUserInfo *pBVar1;
  int iVar2;
  CUser *this_00;
  uint local_10;
  
  for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30); local_10 = local_10 + 1
      ) {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_10);
    iVar2 = BlueMarbleUserInfo::getUser(pBVar1);
    if (iVar2 != 0) {
      pBVar1 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      this_00 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
      CUser::Send(this_00,param_1);
    }
  }
  return;
}

```

---

## sendUpdateItemInfo

```asm
// === 080d8956 BlueMarble::sendUpdateItemInfo  [0x080d8956-0x80d8a5b] ===
 80d8956:	55                   	push   %ebp
 80d8957:	89 e5                	mov    %esp,%ebp
 80d8959:	56                   	push   %esi
 80d895a:	53                   	push   %ebx
 80d895b:	83 ec 20             	sub    $0x20,%esp
 80d895e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8961:	89 04 24             	mov    %eax,(%esp)
 80d8964:	e8 e3 53 4b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80d8969:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 80d8970:	00 
 80d8971:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d8978:	00 
 80d8979:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d897c:	89 04 24             	mov    %eax,(%esp)
 80d897f:	e8 78 2f ff ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80d8984:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d898b:	00 
 80d898c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d898f:	89 04 24             	mov    %eax,(%esp)
 80d8992:	e8 89 2f ff ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80d8997:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d899e:	00 
 80d899f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d89a2:	89 04 24             	mov    %eax,(%esp)
 80d89a5:	e8 fa 14 00 00       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80d89aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d89ad:	8b 55 08             	mov    0x8(%ebp),%edx
 80d89b0:	83 c2 04             	add    $0x4,%edx
 80d89b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d89b7:	89 14 24             	mov    %edx,(%esp)
 80d89ba:	e8 45 1b 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d89bf:	89 04 24             	mov    %eax,(%esp)
 80d89c2:	e8 c1 e1 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d89c7:	89 04 24             	mov    %eax,(%esp)
 80d89ca:	e8 af 18 00 00       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 80d89cf:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80d89d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80d89d6:	8b 55 10             	mov    0x10(%ebp),%edx
 80d89d9:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d89dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d89e4:	00 
 80d89e5:	89 04 24             	mov    %eax,(%esp)
 80d89e8:	e8 cf 3c 42 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 80d89ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d89f4:	00 
 80d89f5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d89f8:	89 04 24             	mov    %eax,(%esp)
 80d89fb:	e8 58 2f ff ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80d8a00:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8a03:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8a06:	83 c2 04             	add    $0x4,%edx
 80d8a09:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8a0d:	89 14 24             	mov    %edx,(%esp)
 80d8a10:	e8 ef 1a 00 00       	call   80da504 <_ZNKSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8a15:	89 04 24             	mov    %eax,(%esp)
 80d8a18:	e8 6b e1 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8a1d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 80d8a20:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d8a24:	89 04 24             	mov    %eax,(%esp)
 80d8a27:	e8 8e fb 56 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80d8a2c:	eb 1b                	jmp    80d8a49 <_ZNK10BlueMarble18sendUpdateItemInfoEii+0xf3>
 80d8a2e:	89 d3                	mov    %edx,%ebx
 80d8a30:	89 c6                	mov    %eax,%esi
 80d8a32:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8a35:	89 04 24             	mov    %eax,(%esp)
 80d8a38:	e8 43 54 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d8a3d:	89 f0                	mov    %esi,%eax
 80d8a3f:	89 da                	mov    %ebx,%edx
 80d8a41:	89 04 24             	mov    %eax,(%esp)
 80d8a44:	e8 07 ad a0 00       	call   8ae3750 <_Unwind_Resume>
 80d8a49:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d8a4c:	89 04 24             	mov    %eax,(%esp)
 80d8a4f:	e8 2c 54 4b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80d8a54:	83 c4 20             	add    $0x20,%esp
 80d8a57:	5b                   	pop    %ebx
 80d8a58:	5e                   	pop    %esi
 80d8a59:	5d                   	pop    %ebp
 80d8a5a:	c3                   	ret
 80d8a5b:	90                   	nop

```

```c
// BlueMarble::sendUpdateItemInfo @ 0x80d8956

/* BlueMarble::sendUpdateItemInfo(int, int) const */

void __thiscall BlueMarble::sendUpdateItemInfo(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *pBVar1;
  CUserCharacInfo *this_00;
  CInventory *pCVar2;
  CUser *this_01;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 080d897f to 080d8a2b has its CatchHandler @ 080d8a2e */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar1);
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(this_00);
  CInventory::MakeItemPacket(pCVar2,1,param_2,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  this_01 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
  CUser::Send(this_01,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## setBlueMarbleMap

```asm
// === 080d6e34 BlueMarble::setBlueMarbleMap  [0x080d6e34-0x80d6e7b] ===
 80d6e34:	55                   	push   %ebp
 80d6e35:	89 e5                	mov    %esp,%ebp
 80d6e37:	53                   	push   %ebx
 80d6e38:	83 ec 14             	sub    $0x14,%esp
 80d6e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6e3e:	8b 40 14             	mov    0x14(%eax),%eax
 80d6e41:	05 c8 09 00 00       	add    $0x9c8,%eax
 80d6e46:	89 04 24             	mov    %eax,(%esp)
 80d6e49:	e8 f8 4b ff ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 80d6e4e:	89 c3                	mov    %eax,%ebx
 80d6e50:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6e53:	8b 40 38             	mov    0x38(%eax),%eax
 80d6e56:	89 04 24             	mov    %eax,(%esp)
 80d6e59:	e8 c8 f8 7f 00       	call   88d6726 <_ZN23BlueMarbleScriptManager16getMapTotalCountEv>
 80d6e5e:	89 c1                	mov    %eax,%ecx
 80d6e60:	89 d8                	mov    %ebx,%eax
 80d6e62:	ba 00 00 00 00       	mov    $0x0,%edx
 80d6e67:	f7 f1                	div    %ecx
 80d6e69:	89 d0                	mov    %edx,%eax
 80d6e6b:	83 c0 01             	add    $0x1,%eax
 80d6e6e:	89 c2                	mov    %eax,%edx
 80d6e70:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6e73:	89 50 1c             	mov    %edx,0x1c(%eax)
 80d6e76:	83 c4 14             	add    $0x14,%esp
 80d6e79:	5b                   	pop    %ebx
 80d6e7a:	5d                   	pop    %ebp
 80d6e7b:	c3                   	ret

```

```c
// BlueMarble::setBlueMarbleMap @ 0x80d6e34

/* BlueMarble::setBlueMarbleMap() */

void __thiscall BlueMarble::setBlueMarbleMap(BlueMarble *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = CMTRand::randInt((CMTRand *)(*(int *)(this + 0x14) + 0x9c8));
  uVar2 = BlueMarbleScriptManager::getMapTotalCount(*(BlueMarbleScriptManager **)(this + 0x38));
  *(uint *)(this + 0x1c) = uVar1 % uVar2 + 1;
  return;
}

```

---

## setDiceNumber

```asm
// === 080d6f88 BlueMarble::setDiceNumber  [0x080d6f88-0x80d6fc3] ===
 80d6f88:	55                   	push   %ebp
 80d6f89:	89 e5                	mov    %esp,%ebp
 80d6f8b:	83 ec 18             	sub    $0x18,%esp
 80d6f8e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6f91:	8b 40 14             	mov    0x14(%eax),%eax
 80d6f94:	89 04 24             	mov    %eax,(%esp)
 80d6f97:	e8 aa 4a ff ff       	call   80cba46 <_ZN7CMTRand7randIntEv>
 80d6f9c:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6f9f:	8b 52 38             	mov    0x38(%edx),%edx
 80d6fa2:	8b 52 48             	mov    0x48(%edx),%edx
 80d6fa5:	89 d1                	mov    %edx,%ecx
 80d6fa7:	ba 00 00 00 00       	mov    $0x0,%edx
 80d6fac:	f7 f1                	div    %ecx
 80d6fae:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6fb1:	8b 40 38             	mov    0x38(%eax),%eax
 80d6fb4:	8b 40 44             	mov    0x44(%eax),%eax
 80d6fb7:	8d 04 02             	lea    (%edx,%eax,1),%eax
 80d6fba:	89 c2                	mov    %eax,%edx
 80d6fbc:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6fbf:	89 50 18             	mov    %edx,0x18(%eax)
 80d6fc2:	c9                   	leave
 80d6fc3:	c3                   	ret

```

```c
// BlueMarble::setDiceNumber @ 0x80d6f88

/* BlueMarble::setDiceNumber() */

void __thiscall BlueMarble::setDiceNumber(BlueMarble *this)

{
  uint uVar1;
  
  uVar1 = CMTRand::randInt(*(CMTRand **)(this + 0x14));
  *(uint *)(this + 0x18) =
       uVar1 % *(uint *)(*(int *)(this + 0x38) + 0x48) + *(int *)(*(int *)(this + 0x38) + 0x44);
  return;
}

```

---

## setDropBuff

```asm
// === 080d7842 BlueMarble::setDropBuff  [0x080d7842-0x80d786d] ===
 80d7842:	55                   	push   %ebp
 80d7843:	89 e5                	mov    %esp,%ebp
 80d7845:	83 ec 18             	sub    $0x18,%esp
 80d7848:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d784b:	8b 55 08             	mov    0x8(%ebp),%edx
 80d784e:	83 c2 04             	add    $0x4,%edx
 80d7851:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7855:	89 14 24             	mov    %edx,(%esp)
 80d7858:	e8 71 2c 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d785d:	8b 55 10             	mov    0x10(%ebp),%edx
 80d7860:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7864:	89 04 24             	mov    %eax,(%esp)
 80d7867:	e8 8e f4 ff ff       	call   80d6cfa <_ZN18BlueMarbleUserInfo7setDropEi>
 80d786c:	c9                   	leave
 80d786d:	c3                   	ret

```

```c
// BlueMarble::setDropBuff @ 0x80d7842

/* BlueMarble::setDropBuff(int, int) */

void __thiscall BlueMarble::setDropBuff(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setDrop(this_00,param_2);
  return;
}

```

---

## setDungeonIndex

```asm
// === 080d738a BlueMarble::setDungeonIndex  [0x080d738a-0x80d73b5] ===
 80d738a:	55                   	push   %ebp
 80d738b:	89 e5                	mov    %esp,%ebp
 80d738d:	83 ec 18             	sub    $0x18,%esp
 80d7390:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7393:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7396:	83 c2 04             	add    $0x4,%edx
 80d7399:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d739d:	89 14 24             	mov    %edx,(%esp)
 80d73a0:	e8 29 31 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d73a5:	8b 55 10             	mov    0x10(%ebp),%edx
 80d73a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d73ac:	89 04 24             	mov    %eax,(%esp)
 80d73af:	e8 76 f8 ff ff       	call   80d6c2a <_ZN18BlueMarbleUserInfo10setDungeonEi>
 80d73b4:	c9                   	leave
 80d73b5:	c3                   	ret

```

```c
// BlueMarble::setDungeonIndex @ 0x80d738a

/* BlueMarble::setDungeonIndex(int, int) */

void __thiscall BlueMarble::setDungeonIndex(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setDungeon(this_00,param_2);
  return;
}

```

---

## setExpBuff

```asm
// === 080d779e BlueMarble::setExpBuff  [0x080d779e-0x80d77c9] ===
 80d779e:	55                   	push   %ebp
 80d779f:	89 e5                	mov    %esp,%ebp
 80d77a1:	83 ec 18             	sub    $0x18,%esp
 80d77a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d77a7:	8b 55 08             	mov    0x8(%ebp),%edx
 80d77aa:	83 c2 04             	add    $0x4,%edx
 80d77ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d77b1:	89 14 24             	mov    %edx,(%esp)
 80d77b4:	e8 15 2d 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d77b9:	8b 55 10             	mov    0x10(%ebp),%edx
 80d77bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d77c0:	89 04 24             	mov    %eax,(%esp)
 80d77c3:	e8 96 f4 ff ff       	call   80d6c5e <_ZN18BlueMarbleUserInfo6setExpEi>
 80d77c8:	c9                   	leave
 80d77c9:	c3                   	ret

```

```c
// BlueMarble::setExpBuff @ 0x80d779e

/* BlueMarble::setExpBuff(int, int) */

void __thiscall BlueMarble::setExpBuff(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setExp(this_00,param_2);
  return;
}

```

---

## setGoldBuff

```asm
// === 080d77f0 BlueMarble::setGoldBuff  [0x080d77f0-0x80d781b] ===
 80d77f0:	55                   	push   %ebp
 80d77f1:	89 e5                	mov    %esp,%ebp
 80d77f3:	83 ec 18             	sub    $0x18,%esp
 80d77f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d77f9:	8b 55 08             	mov    0x8(%ebp),%edx
 80d77fc:	83 c2 04             	add    $0x4,%edx
 80d77ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7803:	89 14 24             	mov    %edx,(%esp)
 80d7806:	e8 c3 2c 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d780b:	8b 55 10             	mov    0x10(%ebp),%edx
 80d780e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7812:	89 04 24             	mov    %eax,(%esp)
 80d7815:	e8 92 f4 ff ff       	call   80d6cac <_ZN18BlueMarbleUserInfo7setGoldEi>
 80d781a:	c9                   	leave
 80d781b:	c3                   	ret

```

```c
// BlueMarble::setGoldBuff @ 0x80d77f0

/* BlueMarble::setGoldBuff(int, int) */

void __thiscall BlueMarble::setGoldBuff(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setGold(this_00,param_2);
  return;
}

```

---

## setItemIndex

```asm
// === 080d7746 BlueMarble::setItemIndex  [0x080d7746-0x80d7777] ===
 80d7746:	55                   	push   %ebp
 80d7747:	89 e5                	mov    %esp,%ebp
 80d7749:	53                   	push   %ebx
 80d774a:	83 ec 14             	sub    $0x14,%esp
 80d774d:	8b 5d 10             	mov    0x10(%ebp),%ebx
 80d7750:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7753:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7756:	83 c2 04             	add    $0x4,%edx
 80d7759:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d775d:	89 14 24             	mov    %edx,(%esp)
 80d7760:	e8 69 2d 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7765:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d7769:	89 04 24             	mov    %eax,(%esp)
 80d776c:	e8 d3 f4 ff ff       	call   80d6c44 <_ZN18BlueMarbleUserInfo7setItemEj>
 80d7771:	83 c4 14             	add    $0x14,%esp
 80d7774:	5b                   	pop    %ebx
 80d7775:	5d                   	pop    %ebp
 80d7776:	c3                   	ret
 80d7777:	90                   	nop

```

```c
// BlueMarble::setItemIndex @ 0x80d7746

/* BlueMarble::setItemIndex(int, int) */

void __thiscall BlueMarble::setItemIndex(BlueMarble *this,int param_1,int param_2)

{
  BlueMarbleUserInfo *this_00;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setItem(this_00,param_2);
  return;
}

```

---

## setLeaveUserBlueMarbleState

```asm
// === 080d8412 BlueMarble::setLeaveUserBlueMarbleState  [0x080d8412-0x80d84b3] ===
 80d8412:	55                   	push   %ebp
 80d8413:	89 e5                	mov    %esp,%ebp
 80d8415:	83 ec 28             	sub    $0x28,%esp
 80d8418:	8b 45 08             	mov    0x8(%ebp),%eax
 80d841b:	89 04 24             	mov    %eax,(%esp)
 80d841e:	e8 b7 0c 00 00       	call   80d90da <_ZNK10BlueMarble16getWaitUserCountEv>
 80d8423:	85 c0                	test   %eax,%eax
 80d8425:	0f 94 c0             	sete   %al
 80d8428:	84 c0                	test   %al,%al
 80d842a:	74 5d                	je     80d8489 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv+0x77>
 80d842c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d8433:	eb 21                	jmp    80d8456 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv+0x44>
 80d8435:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d8438:	8b 55 08             	mov    0x8(%ebp),%edx
 80d843b:	83 c2 04             	add    $0x4,%edx
 80d843e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8442:	89 14 24             	mov    %edx,(%esp)
 80d8445:	e8 84 20 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d844a:	89 04 24             	mov    %eax,(%esp)
 80d844d:	e8 b6 e6 ff ff       	call   80d6b08 <_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv>
 80d8452:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d8456:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8459:	8b 40 38             	mov    0x38(%eax),%eax
 80d845c:	8b 40 30             	mov    0x30(%eax),%eax
 80d845f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d8462:	0f 9f c0             	setg   %al
 80d8465:	84 c0                	test   %al,%al
 80d8467:	75 cc                	jne    80d8435 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv+0x23>
 80d8469:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d8470:	00 
 80d8471:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8474:	89 04 24             	mov    %eax,(%esp)
 80d8477:	e8 86 0d 00 00       	call   80d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>
 80d847c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d847f:	89 04 24             	mov    %eax,(%esp)
 80d8482:	e8 c1 e8 ff ff       	call   80d6d48 <_ZN10BlueMarble15resetBlueMarbleEv>
 80d8487:	eb 28                	jmp    80d84b1 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv+0x9f>
 80d8489:	8b 45 08             	mov    0x8(%ebp),%eax
 80d848c:	89 04 24             	mov    %eax,(%esp)
 80d848f:	e8 34 e9 ff ff       	call   80d6dc8 <_ZNK10BlueMarble8getStateEv>
 80d8494:	83 f8 01             	cmp    $0x1,%eax
 80d8497:	0f 94 c0             	sete   %al
 80d849a:	84 c0                	test   %al,%al
 80d849c:	74 13                	je     80d84b1 <_ZN10BlueMarble27setLeaveUserBlueMarbleStateEv+0x9f>
 80d849e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d84a5:	00 
 80d84a6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d84a9:	89 04 24             	mov    %eax,(%esp)
 80d84ac:	e8 51 0d 00 00       	call   80d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>
 80d84b1:	c9                   	leave
 80d84b2:	c3                   	ret
 80d84b3:	90                   	nop

```

```c
// BlueMarble::setLeaveUserBlueMarbleState @ 0x80d8412

/* BlueMarble::setLeaveUserBlueMarbleState() */

void __thiscall BlueMarble::setLeaveUserBlueMarbleState(BlueMarble *this)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  uint local_10;
  
  iVar1 = getWaitUserCount(this);
  if (iVar1 == 0) {
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      this_00 = (BlueMarbleUserInfo *)
                std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                          ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                           (this + 4),local_10);
      BlueMarbleUserInfo::resetBlueMarbleUserInfo(this_00);
    }
    changeState(this,0);
    resetBlueMarble(this);
  }
  else {
    iVar1 = getState(this);
    if (iVar1 == 1) {
      changeState(this,0);
    }
  }
  return;
}

```

---

## setLeaveUserSlot

```asm
// === 080d82f2 BlueMarble::setLeaveUserSlot  [0x080d82f2-0x80d8411] ===
 80d82f2:	55                   	push   %ebp
 80d82f3:	89 e5                	mov    %esp,%ebp
 80d82f5:	83 ec 28             	sub    $0x28,%esp
 80d82f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d82fb:	8b 55 08             	mov    0x8(%ebp),%edx
 80d82fe:	83 c2 04             	add    $0x4,%edx
 80d8301:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8305:	89 14 24             	mov    %edx,(%esp)
 80d8308:	e8 c1 21 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d830d:	89 04 24             	mov    %eax,(%esp)
 80d8310:	e8 73 e8 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8315:	85 c0                	test   %eax,%eax
 80d8317:	0f 94 c0             	sete   %al
 80d831a:	84 c0                	test   %al,%al
 80d831c:	74 55                	je     80d8373 <_ZN10BlueMarble16setLeaveUserSlotEi+0x81>
 80d831e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8321:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8324:	83 c2 04             	add    $0x4,%edx
 80d8327:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d832b:	89 14 24             	mov    %edx,(%esp)
 80d832e:	e8 9b 21 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8333:	89 04 24             	mov    %eax,(%esp)
 80d8336:	e8 cd e7 ff ff       	call   80d6b08 <_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv>
 80d833b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d833e:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d8342:	c7 44 24 10 34 8a b2 	movl   $0x8b28a34,0x10(%esp)
 80d8349:	08 
 80d834a:	c7 44 24 0c c4 02 00 	movl   $0x2c4,0xc(%esp)
 80d8351:	00 
 80d8352:	c7 44 24 08 20 9b b2 	movl   $0x8b29b20,0x8(%esp)
 80d8359:	08 
 80d835a:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d8361:	08 
 80d8362:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d8369:	e8 9c b8 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d836e:	e9 9c 00 00 00       	jmp    80d840f <_ZN10BlueMarble16setLeaveUserSlotEi+0x11d>
 80d8373:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8376:	8b 55 08             	mov    0x8(%ebp),%edx
 80d8379:	83 c2 04             	add    $0x4,%edx
 80d837c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8380:	89 14 24             	mov    %edx,(%esp)
 80d8383:	e8 46 21 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8388:	89 04 24             	mov    %eax,(%esp)
 80d838b:	e8 f8 e7 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d8390:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80d8397:	ff 
 80d8398:	89 04 24             	mov    %eax,(%esp)
 80d839b:	e8 a0 1f 00 00       	call   80da340 <_ZN5CUser18setBlueMarbleIndexEs>
 80d83a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d83a3:	8b 55 08             	mov    0x8(%ebp),%edx
 80d83a6:	83 c2 04             	add    $0x4,%edx
 80d83a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d83ad:	89 14 24             	mov    %edx,(%esp)
 80d83b0:	e8 19 21 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d83b5:	89 04 24             	mov    %eax,(%esp)
 80d83b8:	e8 cb e7 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d83bd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d83c4:	00 
 80d83c5:	89 04 24             	mov    %eax,(%esp)
 80d83c8:	e8 eb 8a 5b 00       	call   8690eb8 <_ZN5CUser12setMoveSpaceEN9UserSpace1TE>
 80d83cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d83d0:	8b 55 08             	mov    0x8(%ebp),%edx
 80d83d3:	83 c2 04             	add    $0x4,%edx
 80d83d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d83da:	89 14 24             	mov    %edx,(%esp)
 80d83dd:	e8 ec 20 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d83e2:	89 04 24             	mov    %eax,(%esp)
 80d83e5:	e8 9e e7 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d83ea:	89 04 24             	mov    %eax,(%esp)
 80d83ed:	e8 74 8b 5b 00       	call   8690f66 <_ZN15CUserCharacInfo28resetBlueMarbleUserDeadCountEv>
 80d83f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d83f5:	8b 55 08             	mov    0x8(%ebp),%edx
 80d83f8:	83 c2 04             	add    $0x4,%edx
 80d83fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d83ff:	89 14 24             	mov    %edx,(%esp)
 80d8402:	e8 c7 20 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d8407:	89 04 24             	mov    %eax,(%esp)
 80d840a:	e8 f9 e6 ff ff       	call   80d6b08 <_ZN18BlueMarbleUserInfo23resetBlueMarbleUserInfoEv>
 80d840f:	c9                   	leave
 80d8410:	c3                   	ret
 80d8411:	90                   	nop

```

```c
// BlueMarble::setLeaveUserSlot @ 0x80d82f2

/* BlueMarble::setLeaveUserSlot(int) */

void __thiscall BlueMarble::setLeaveUserSlot(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *pBVar1;
  int iVar2;
  CUser *pCVar3;
  CUserCharacInfo *this_00;
  
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  iVar2 = BlueMarbleUserInfo::getUser(pBVar1);
  if (iVar2 == 0) {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    BlueMarbleUserInfo::resetBlueMarbleUserInfo(pBVar1);
    LogManager::logFormat
              (1,"BlueMarble.cpp","void BlueMarble::setLeaveUserSlot(int)",0x2c4,
               "BlueMarble::setLeaveUserSlot slot(%d)",param_1);
  }
  else {
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar3 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
    CUser::setBlueMarbleIndex(pCVar3,-1);
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    pCVar3 = (CUser *)BlueMarbleUserInfo::getUser(pBVar1);
    CUser::setMoveSpace(pCVar3,0);
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar1);
    CUserCharacInfo::resetBlueMarbleUserDeadCount(this_00);
    pBVar1 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        param_1);
    BlueMarbleUserInfo::resetBlueMarbleUserInfo(pBVar1);
  }
  return;
}

```

---

## setMaxBoardSize

```asm
// === 080d6e88 BlueMarble::setMaxBoardSize  [0x080d6e88-0x80d6ecb] ===
 80d6e88:	55                   	push   %ebp
 80d6e89:	89 e5                	mov    %esp,%ebp
 80d6e8b:	83 ec 28             	sub    $0x28,%esp
 80d6e8e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6e91:	89 04 24             	mov    %eax,(%esp)
 80d6e94:	e8 e3 ff ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d6e99:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6e9c:	8b 52 38             	mov    0x38(%edx),%edx
 80d6e9f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6ea3:	89 14 24             	mov    %edx,(%esp)
 80d6ea6:	e8 0b f8 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d6eab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d6eae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d6eb2:	74 15                	je     80d6ec9 <_ZN10BlueMarble15setMaxBoardSizeEv+0x41>
 80d6eb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d6eb7:	89 04 24             	mov    %eax,(%esp)
 80d6eba:	e8 29 36 00 00       	call   80da4e8 <_ZNKSt6vectorIP20BlueMarbleTileScriptSaIS1_EE4sizeEv>
 80d6ebf:	89 c2                	mov    %eax,%edx
 80d6ec1:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6ec4:	89 50 3c             	mov    %edx,0x3c(%eax)
 80d6ec7:	eb 01                	jmp    80d6eca <_ZN10BlueMarble15setMaxBoardSizeEv+0x42>
 80d6ec9:	90                   	nop
 80d6eca:	c9                   	leave
 80d6ecb:	c3                   	ret

```

```c
// BlueMarble::setMaxBoardSize @ 0x80d6e88

/* BlueMarble::setMaxBoardSize() */

void __thiscall BlueMarble::setMaxBoardSize(BlueMarble *this)

{
  vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *this_00;
  undefined4 uVar1;
  
  getBlueMarbleMap(this);
  this_00 = (vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)
            BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
  if (this_00 != (vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>> *)0x0) {
    uVar1 = std::vector<BlueMarbleTileScript*,std::allocator<BlueMarbleTileScript*>>::size(this_00);
    *(undefined4 *)(this + 0x3c) = uVar1;
  }
  return;
}

```

---

## setMemoryPoolIndex

```asm
// === 080d8c26 BlueMarble::setMemoryPoolIndex  [0x080d8c26-0x80d8c33] ===
 80d8c26:	55                   	push   %ebp
 80d8c27:	89 e5                	mov    %esp,%ebp
 80d8c29:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8c2c:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d8c2f:	89 10                	mov    %edx,(%eax)
 80d8c31:	5d                   	pop    %ebp
 80d8c32:	c3                   	ret
 80d8c33:	90                   	nop

```

```c
// BlueMarble::setMemoryPoolIndex @ 0x80d8c26

/* BlueMarble::setMemoryPoolIndex(int) */

void __thiscall BlueMarble::setMemoryPoolIndex(BlueMarble *this,int param_1)

{
  *(int *)this = param_1;
  return;
}

```

---

## setMovePosition

```asm
// === 080d6fd0 BlueMarble::setMovePosition  [0x080d6fd0-0x80d7011] ===
 80d6fd0:	55                   	push   %ebp
 80d6fd1:	89 e5                	mov    %esp,%ebp
 80d6fd3:	53                   	push   %ebx
 80d6fd4:	83 ec 14             	sub    $0x14,%esp
 80d6fd7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6fda:	89 04 24             	mov    %eax,(%esp)
 80d6fdd:	e8 ea fe ff ff       	call   80d6ecc <_ZNK10BlueMarble15getMaxBoardSizeEv>
 80d6fe2:	89 c3                	mov    %eax,%ebx
 80d6fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d6fe7:	8b 55 08             	mov    0x8(%ebp),%edx
 80d6fea:	83 c2 04             	add    $0x4,%edx
 80d6fed:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6ff1:	89 14 24             	mov    %edx,(%esp)
 80d6ff4:	e8 d5 34 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d6ff9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 80d6ffd:	8b 55 10             	mov    0x10(%ebp),%edx
 80d7000:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7004:	89 04 24             	mov    %eax,(%esp)
 80d7007:	e8 ae fb ff ff       	call   80d6bba <_ZN18BlueMarbleUserInfo12setBoardZoneEii>
 80d700c:	83 c4 14             	add    $0x14,%esp
 80d700f:	5b                   	pop    %ebx
 80d7010:	5d                   	pop    %ebp
 80d7011:	c3                   	ret

```

```c
// BlueMarble::setMovePosition @ 0x80d6fd0

/* BlueMarble::setMovePosition(int, int) */

void __thiscall BlueMarble::setMovePosition(BlueMarble *this,int param_1,int param_2)

{
  int iVar1;
  BlueMarbleUserInfo *this_00;
  
  iVar1 = getMaxBoardSize(this);
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  BlueMarbleUserInfo::setBoardZone(this_00,param_2,iVar1);
  return;
}

```

---

## setResultItem

```asm
// === 080d7e8e BlueMarble::setResultItem  [0x080d7e8e-0x80d800d] ===
 80d7e8e:	55                   	push   %ebp
 80d7e8f:	89 e5                	mov    %esp,%ebp
 80d7e91:	83 ec 18             	sub    $0x18,%esp
 80d7e94:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7e97:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7e9a:	83 c2 04             	add    $0x4,%edx
 80d7e9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7ea1:	89 14 24             	mov    %edx,(%esp)
 80d7ea4:	e8 25 26 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7ea9:	89 04 24             	mov    %eax,(%esp)
 80d7eac:	e8 6d ed ff ff       	call   80d6c1e <_ZNK18BlueMarbleUserInfo8getGradeEv>
 80d7eb1:	83 f8 01             	cmp    $0x1,%eax
 80d7eb4:	74 73                	je     80d7f29 <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x9b>
 80d7eb6:	83 f8 01             	cmp    $0x1,%eax
 80d7eb9:	7f 09                	jg     80d7ec4 <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x36>
 80d7ebb:	85 c0                	test   %eax,%eax
 80d7ebd:	74 1c                	je     80d7edb <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x4d>
 80d7ebf:	e9 47 01 00 00       	jmp    80d800b <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x17d>
 80d7ec4:	83 f8 02             	cmp    $0x2,%eax
 80d7ec7:	0f 84 aa 00 00 00    	je     80d7f77 <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0xe9>
 80d7ecd:	83 f8 03             	cmp    $0x3,%eax
 80d7ed0:	0f 84 ec 00 00 00    	je     80d7fc2 <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x134>
 80d7ed6:	e9 30 01 00 00       	jmp    80d800b <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x17d>
 80d7edb:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7ede:	8b 40 38             	mov    0x38(%eax),%eax
 80d7ee1:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7ee6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d7eed:	00 
 80d7eee:	89 04 24             	mov    %eax,(%esp)
 80d7ef1:	e8 6e 28 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7ef6:	8b 00                	mov    (%eax),%eax
 80d7ef8:	89 c2                	mov    %eax,%edx
 80d7efa:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7efd:	89 50 02             	mov    %edx,0x2(%eax)
 80d7f00:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7f03:	8b 40 38             	mov    0x38(%eax),%eax
 80d7f06:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7f0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d7f12:	00 
 80d7f13:	89 04 24             	mov    %eax,(%esp)
 80d7f16:	e8 49 28 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7f1b:	8b 50 04             	mov    0x4(%eax),%edx
 80d7f1e:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7f21:	89 50 07             	mov    %edx,0x7(%eax)
 80d7f24:	e9 e2 00 00 00       	jmp    80d800b <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x17d>
 80d7f29:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7f2c:	8b 40 38             	mov    0x38(%eax),%eax
 80d7f2f:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7f34:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d7f3b:	00 
 80d7f3c:	89 04 24             	mov    %eax,(%esp)
 80d7f3f:	e8 20 28 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7f44:	8b 00                	mov    (%eax),%eax
 80d7f46:	89 c2                	mov    %eax,%edx
 80d7f48:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7f4b:	89 50 02             	mov    %edx,0x2(%eax)
 80d7f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7f51:	8b 40 38             	mov    0x38(%eax),%eax
 80d7f54:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7f59:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d7f60:	00 
 80d7f61:	89 04 24             	mov    %eax,(%esp)
 80d7f64:	e8 fb 27 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7f69:	8b 50 04             	mov    0x4(%eax),%edx
 80d7f6c:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7f6f:	89 50 07             	mov    %edx,0x7(%eax)
 80d7f72:	e9 94 00 00 00       	jmp    80d800b <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x17d>
 80d7f77:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7f7a:	8b 40 38             	mov    0x38(%eax),%eax
 80d7f7d:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7f82:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80d7f89:	00 
 80d7f8a:	89 04 24             	mov    %eax,(%esp)
 80d7f8d:	e8 d2 27 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7f92:	8b 00                	mov    (%eax),%eax
 80d7f94:	89 c2                	mov    %eax,%edx
 80d7f96:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7f99:	89 50 02             	mov    %edx,0x2(%eax)
 80d7f9c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7f9f:	8b 40 38             	mov    0x38(%eax),%eax
 80d7fa2:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7fa7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80d7fae:	00 
 80d7faf:	89 04 24             	mov    %eax,(%esp)
 80d7fb2:	e8 ad 27 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7fb7:	8b 50 04             	mov    0x4(%eax),%edx
 80d7fba:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7fbd:	89 50 07             	mov    %edx,0x7(%eax)
 80d7fc0:	eb 49                	jmp    80d800b <_ZN10BlueMarble13setResultItemEiR10Inven_Item+0x17d>
 80d7fc2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7fc5:	8b 40 38             	mov    0x38(%eax),%eax
 80d7fc8:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7fcd:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 80d7fd4:	00 
 80d7fd5:	89 04 24             	mov    %eax,(%esp)
 80d7fd8:	e8 87 27 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d7fdd:	8b 00                	mov    (%eax),%eax
 80d7fdf:	89 c2                	mov    %eax,%edx
 80d7fe1:	8b 45 10             	mov    0x10(%ebp),%eax
 80d7fe4:	89 50 02             	mov    %edx,0x2(%eax)
 80d7fe7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7fea:	8b 40 38             	mov    0x38(%eax),%eax
 80d7fed:	05 a4 00 00 00       	add    $0xa4,%eax
 80d7ff2:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 80d7ff9:	00 
 80d7ffa:	89 04 24             	mov    %eax,(%esp)
 80d7ffd:	e8 62 27 00 00       	call   80da764 <_ZNSt6vectorI20BlueMarbleRewardInfoSaIS0_EEixEj>
 80d8002:	8b 50 04             	mov    0x4(%eax),%edx
 80d8005:	8b 45 10             	mov    0x10(%ebp),%eax
 80d8008:	89 50 07             	mov    %edx,0x7(%eax)
 80d800b:	c9                   	leave
 80d800c:	c3                   	ret
 80d800d:	90                   	nop

```

```c
// BlueMarble::setResultItem @ 0x80d7e8e

/* BlueMarble::setResultItem(int, Inven_Item&) */

void __thiscall BlueMarble::setResultItem(BlueMarble *this,int param_1,Inven_Item *param_2)

{
  BlueMarbleUserInfo *this_00;
  int iVar1;
  undefined4 *puVar2;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  iVar1 = BlueMarbleUserInfo::getGrade(this_00);
  if (iVar1 == 1) {
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                       ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                        (*(int *)(this + 0x38) + 0xa4),1);
    *(undefined4 *)(param_2 + 2) = *puVar2;
    iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                      ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                       (*(int *)(this + 0x38) + 0xa4),1);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
  }
  else if (iVar1 < 2) {
    if (iVar1 == 0) {
      puVar2 = (undefined4 *)
               std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                         ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                          (*(int *)(this + 0x38) + 0xa4),0);
      *(undefined4 *)(param_2 + 2) = *puVar2;
      iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                        ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                         (*(int *)(this + 0x38) + 0xa4),0);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
    }
  }
  else if (iVar1 == 2) {
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                       ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                        (*(int *)(this + 0x38) + 0xa4),2);
    *(undefined4 *)(param_2 + 2) = *puVar2;
    iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                      ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                       (*(int *)(this + 0x38) + 0xa4),2);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
  }
  else if (iVar1 == 3) {
    puVar2 = (undefined4 *)
             std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                       ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                        (*(int *)(this + 0x38) + 0xa4),3);
    *(undefined4 *)(param_2 + 2) = *puVar2;
    iVar1 = std::vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>>::operator[]
                      ((vector<BlueMarbleRewardInfo,std::allocator<BlueMarbleRewardInfo>> *)
                       (*(int *)(this + 0x38) + 0xa4),3);
    *(undefined4 *)(param_2 + 7) = *(undefined4 *)(iVar1 + 4);
  }
  return;
}

```

---

## setScript

```asm
// === 080d8ca8 BlueMarble::setScript  [0x080d8ca8-0x80d8cb5] ===
 80d8ca8:	55                   	push   %ebp
 80d8ca9:	89 e5                	mov    %esp,%ebp
 80d8cab:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8cae:	8b 55 0c             	mov    0xc(%ebp),%edx
 80d8cb1:	89 50 38             	mov    %edx,0x38(%eax)
 80d8cb4:	5d                   	pop    %ebp
 80d8cb5:	c3                   	ret

```

```c
// BlueMarble::setScript @ 0x80d8ca8

/* BlueMarble::setScript(BlueMarbleScriptManager*) */

void __thiscall BlueMarble::setScript(BlueMarble *this,BlueMarbleScriptManager *param_1)

{
  *(BlueMarbleScriptManager **)(this + 0x38) = param_1;
  return;
}

```

---

## setUserDeadCount

```asm
// === 080d7894 BlueMarble::setUserDeadCount  [0x080d7894-0x80d78c1] ===
 80d7894:	55                   	push   %ebp
 80d7895:	89 e5                	mov    %esp,%ebp
 80d7897:	83 ec 18             	sub    $0x18,%esp
 80d789a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d789d:	8b 55 08             	mov    0x8(%ebp),%edx
 80d78a0:	83 c2 04             	add    $0x4,%edx
 80d78a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d78a7:	89 14 24             	mov    %edx,(%esp)
 80d78aa:	e8 1f 2c 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d78af:	89 04 24             	mov    %eax,(%esp)
 80d78b2:	e8 d1 f2 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d78b7:	89 04 24             	mov    %eax,(%esp)
 80d78ba:	e8 c7 96 5b 00       	call   8690f86 <_ZN15CUserCharacInfo31increaseBlueMarbleUserDeadCountEv>
 80d78bf:	c9                   	leave
 80d78c0:	c3                   	ret
 80d78c1:	90                   	nop

```

```c
// BlueMarble::setUserDeadCount @ 0x80d7894

/* BlueMarble::setUserDeadCount(int) */

void __thiscall BlueMarble::setUserDeadCount(BlueMarble *this,int param_1)

{
  BlueMarbleUserInfo *this_00;
  CUserCharacInfo *this_01;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  this_01 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(this_00);
  CUserCharacInfo::increaseBlueMarbleUserDeadCount(this_01);
  return;
}

```

---

## setUserGrade

```asm
// === 080d7afc BlueMarble::setUserGrade  [0x080d7afc-0x80d7d5d] ===
 80d7afc:	55                   	push   %ebp
 80d7afd:	89 e5                	mov    %esp,%ebp
 80d7aff:	56                   	push   %esi
 80d7b00:	53                   	push   %ebx
 80d7b01:	83 ec 60             	sub    $0x60,%esp
 80d7b04:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80d7b07:	89 04 24             	mov    %eax,(%esp)
 80d7b0a:	e8 ff 2a 00 00       	call   80da60e <_ZNSt8multimapIiiSt7greaterIiESaISt4pairIKiiEEEC1Ev>
 80d7b0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7b12:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7b15:	83 c2 04             	add    $0x4,%edx
 80d7b18:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7b1c:	89 14 24             	mov    %edx,(%esp)
 80d7b1f:	e8 aa 29 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7b24:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80d7b2b:	00 
 80d7b2c:	89 04 24             	mov    %eax,(%esp)
 80d7b2f:	e8 dc f0 ff ff       	call   80d6c10 <_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE>
 80d7b34:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 80d7b3b:	e9 c9 00 00 00       	jmp    80d7c09 <_ZN10BlueMarble12setUserGradeEi+0x10d>
 80d7b40:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80d7b43:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7b46:	83 c2 04             	add    $0x4,%edx
 80d7b49:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7b4d:	89 14 24             	mov    %edx,(%esp)
 80d7b50:	e8 79 29 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7b55:	89 04 24             	mov    %eax,(%esp)
 80d7b58:	e8 2b f0 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d7b5d:	85 c0                	test   %eax,%eax
 80d7b5f:	0f 94 c0             	sete   %al
 80d7b62:	84 c0                	test   %al,%al
 80d7b64:	0f 85 92 00 00 00    	jne    80d7bfc <_ZN10BlueMarble12setUserGradeEi+0x100>
 80d7b6a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80d7b6d:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7b70:	83 c2 04             	add    $0x4,%edx
 80d7b73:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7b77:	89 14 24             	mov    %edx,(%esp)
 80d7b7a:	e8 4f 29 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7b7f:	89 04 24             	mov    %eax,(%esp)
 80d7b82:	e8 97 f0 ff ff       	call   80d6c1e <_ZNK18BlueMarbleUserInfo8getGradeEv>
 80d7b87:	85 c0                	test   %eax,%eax
 80d7b89:	0f 94 c0             	sete   %al
 80d7b8c:	84 c0                	test   %al,%al
 80d7b8e:	75 6f                	jne    80d7bff <_ZN10BlueMarble12setUserGradeEi+0x103>
 80d7b90:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80d7b93:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7b96:	83 c2 04             	add    $0x4,%edx
 80d7b99:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7b9d:	89 14 24             	mov    %edx,(%esp)
 80d7ba0:	e8 29 29 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7ba5:	89 04 24             	mov    %eax,(%esp)
 80d7ba8:	e8 57 f0 ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d7bad:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80d7bb0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80d7bb3:	8d 55 b0             	lea    -0x50(%ebp),%edx
 80d7bb6:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d7bba:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 80d7bbd:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7bc1:	89 04 24             	mov    %eax,(%esp)
 80d7bc4:	e8 be 2a 00 00       	call   80da687 <_ZSt9make_pairIiRiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 80d7bc9:	83 ec 04             	sub    $0x4,%esp
 80d7bcc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80d7bcf:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7bd3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 80d7bd6:	89 04 24             	mov    %eax,(%esp)
 80d7bd9:	e8 42 f1 fe ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 80d7bde:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80d7be1:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 80d7be4:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d7be8:	8d 55 b8             	lea    -0x48(%ebp),%edx
 80d7beb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7bef:	89 04 24             	mov    %eax,(%esp)
 80d7bf2:	e8 d7 2a 00 00       	call   80da6ce <_ZNSt8multimapIiiSt7greaterIiESaISt4pairIKiiEEE6insertERKS4_>
 80d7bf7:	83 ec 04             	sub    $0x4,%esp
 80d7bfa:	eb 04                	jmp    80d7c00 <_ZN10BlueMarble12setUserGradeEi+0x104>
 80d7bfc:	90                   	nop
 80d7bfd:	eb 01                	jmp    80d7c00 <_ZN10BlueMarble12setUserGradeEi+0x104>
 80d7bff:	90                   	nop
 80d7c00:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80d7c03:	83 c0 01             	add    $0x1,%eax
 80d7c06:	89 45 b0             	mov    %eax,-0x50(%ebp)
 80d7c09:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7c0c:	8b 40 38             	mov    0x38(%eax),%eax
 80d7c0f:	8b 50 30             	mov    0x30(%eax),%edx
 80d7c12:	8b 45 b0             	mov    -0x50(%ebp),%eax
 80d7c15:	39 c2                	cmp    %eax,%edx
 80d7c17:	0f 9f c0             	setg   %al
 80d7c1a:	84 c0                	test   %al,%al
 80d7c1c:	0f 85 1e ff ff ff    	jne    80d7b40 <_ZN10BlueMarble12setUserGradeEi+0x44>
 80d7c22:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7c25:	8d 55 b8             	lea    -0x48(%ebp),%edx
 80d7c28:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7c2c:	89 04 24             	mov    %eax,(%esp)
 80d7c2f:	e8 c6 2a 00 00       	call   80da6fa <_ZNSt8multimapIiiSt7greaterIiESaISt4pairIKiiEEE5beginEv>
 80d7c34:	83 ec 04             	sub    $0x4,%esp
 80d7c37:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80d7c3e:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 80d7c45:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d7c4c:	e9 ac 00 00 00       	jmp    80d7cfd <_ZN10BlueMarble12setUserGradeEi+0x201>
 80d7c51:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7c54:	89 04 24             	mov    %eax,(%esp)
 80d7c57:	e8 e4 56 ff ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80d7c5c:	8b 00                	mov    (%eax),%eax
 80d7c5e:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d7c61:	0f 94 c0             	sete   %al
 80d7c64:	84 c0                	test   %al,%al
 80d7c66:	74 41                	je     80d7ca9 <_ZN10BlueMarble12setUserGradeEi+0x1ad>
 80d7c68:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7c6b:	89 04 24             	mov    %eax,(%esp)
 80d7c6e:	e8 cd 56 ff ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80d7c73:	8b 00                	mov    (%eax),%eax
 80d7c75:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d7c78:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 80d7c7b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7c7e:	89 04 24             	mov    %eax,(%esp)
 80d7c81:	e8 ba 56 ff ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80d7c86:	8b 40 04             	mov    0x4(%eax),%eax
 80d7c89:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7c8c:	83 c2 04             	add    $0x4,%edx
 80d7c8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7c93:	89 14 24             	mov    %edx,(%esp)
 80d7c96:	e8 33 28 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7c9b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d7c9f:	89 04 24             	mov    %eax,(%esp)
 80d7ca2:	e8 69 ef ff ff       	call   80d6c10 <_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE>
 80d7ca7:	eb 49                	jmp    80d7cf2 <_ZN10BlueMarble12setUserGradeEi+0x1f6>
 80d7ca9:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7cac:	89 04 24             	mov    %eax,(%esp)
 80d7caf:	e8 8c 56 ff ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80d7cb4:	8b 00                	mov    (%eax),%eax
 80d7cb6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d7cb9:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 80d7cbc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7cbf:	89 04 24             	mov    %eax,(%esp)
 80d7cc2:	e8 79 56 ff ff       	call   80cd340 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEptEv>
 80d7cc7:	8b 40 04             	mov    0x4(%eax),%eax
 80d7cca:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7ccd:	83 c2 04             	add    $0x4,%edx
 80d7cd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7cd4:	89 14 24             	mov    %edx,(%esp)
 80d7cd7:	e8 f2 27 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7cdc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d7ce0:	89 04 24             	mov    %eax,(%esp)
 80d7ce3:	e8 28 ef ff ff       	call   80d6c10 <_ZN18BlueMarbleUserInfo8setGradeEN19BlueMarbleUserGrade1TE>
 80d7ce8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d7ceb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80d7cee:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 80d7cf2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7cf5:	89 04 24             	mov    %eax,(%esp)
 80d7cf8:	e8 49 2a 00 00       	call   80da746 <_ZNSt17_Rb_tree_iteratorISt4pairIKiiEEppEv>
 80d7cfd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d7d00:	8d 55 b8             	lea    -0x48(%ebp),%edx
 80d7d03:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7d07:	89 04 24             	mov    %eax,(%esp)
 80d7d0a:	e8 11 2a 00 00       	call   80da720 <_ZNSt8multimapIiiSt7greaterIiESaISt4pairIKiiEEE3endEv>
 80d7d0f:	83 ec 04             	sub    $0x4,%esp
 80d7d12:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d7d15:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7d19:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 80d7d1c:	89 04 24             	mov    %eax,(%esp)
 80d7d1f:	e8 a4 26 00 00       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 80d7d24:	84 c0                	test   %al,%al
 80d7d26:	0f 85 25 ff ff ff    	jne    80d7c51 <_ZN10BlueMarble12setUserGradeEi+0x155>
 80d7d2c:	eb 1b                	jmp    80d7d49 <_ZN10BlueMarble12setUserGradeEi+0x24d>
 80d7d2e:	89 d3                	mov    %edx,%ebx
 80d7d30:	89 c6                	mov    %eax,%esi
 80d7d32:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80d7d35:	89 04 24             	mov    %eax,(%esp)
 80d7d38:	e8 77 26 00 00       	call   80da3b4 <_ZNSt8multimapIiiSt7greaterIiESaISt4pairIKiiEEED1Ev>
 80d7d3d:	89 f0                	mov    %esi,%eax
 80d7d3f:	89 da                	mov    %ebx,%edx
 80d7d41:	89 04 24             	mov    %eax,(%esp)
 80d7d44:	e8 07 ba a0 00       	call   8ae3750 <_Unwind_Resume>
 80d7d49:	8d 45 b8             	lea    -0x48(%ebp),%eax
 80d7d4c:	89 04 24             	mov    %eax,(%esp)
 80d7d4f:	e8 60 26 00 00       	call   80da3b4 <_ZNSt8multimapIiiSt7greaterIiESaISt4pairIKiiEEED1Ev>
 80d7d54:	8d 65 f8             	lea    -0x8(%ebp),%esp
 80d7d57:	83 c4 00             	add    $0x0,%esp
 80d7d5a:	5b                   	pop    %ebx
 80d7d5b:	5e                   	pop    %esi
 80d7d5c:	5d                   	pop    %ebp
 80d7d5d:	c3                   	ret

```

```c
// BlueMarble::setUserGrade @ 0x80d7afc

/* BlueMarble::setUserGrade(int) */

void __thiscall BlueMarble::setUserGrade(BlueMarble *this,int param_1)

{
  char cVar1;
  BlueMarbleUserInfo *pBVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint local_54;
  multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>> local_50 [4];
  multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>> local_4c [24];
  pair local_34 [4];
  pair<int_const,int> local_30 [8];
  int local_28 [2];
  int local_20;
  multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>> local_1c [4];
  int local_18;
  int local_14;
  int local_10;
  
  std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::multimap
            (local_4c);
  pBVar2 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  BlueMarbleUserInfo::setGrade(pBVar2,0);
  for (local_54 = 0; (int)local_54 < *(int *)(*(int *)(this + 0x38) + 0x30); local_54 = local_54 + 1
      ) {
    pBVar2 = (BlueMarbleUserInfo *)
             std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                       ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                        local_54);
    iVar3 = BlueMarbleUserInfo::getUser(pBVar2);
    if (iVar3 != 0) {
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_54);
      iVar3 = BlueMarbleUserInfo::getGrade(pBVar2);
      if (iVar3 != 0) {
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_54);
        local_20 = BlueMarbleUserInfo::getBoardZone(pBVar2);
                    /* try { // try from 080d7bc4 to 080d7d0e has its CatchHandler @ 080d7d2e */
        std::make_pair<int,int&>(local_28,&local_20);
        std::pair<int_const,int>::pair<int,int>(local_30,(pair *)local_28);
        std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::insert
                  (local_34);
      }
    }
  }
  std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::begin(local_50)
  ;
  local_18 = 0;
  local_14 = 1;
  local_10 = 0;
  while( true ) {
    std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::end(local_1c)
    ;
    cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                      ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50,
                       (_Rb_tree_iterator *)local_1c);
    if (cVar1 == '\0') break;
    piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
    if (*piVar4 == local_10) {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      iVar3 = local_18;
      local_10 = *piVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),*(uint *)(iVar5 + 4));
      BlueMarbleUserInfo::setGrade(pBVar2,iVar3);
    }
    else {
      piVar4 = (int *)std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                                ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      iVar3 = local_14;
      local_10 = *piVar4;
      iVar5 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),*(uint *)(iVar5 + 4));
      BlueMarbleUserInfo::setGrade(pBVar2,iVar3);
      local_18 = local_14;
      local_14 = local_14 + 1;
    }
    std::_Rb_tree_iterator<std::pair<int_const,int>>::operator++
              ((_Rb_tree_iterator<std::pair<int_const,int>> *)local_50);
  }
  std::multimap<int,int,std::greater<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            (local_4c);
  return;
}

```

---

## setUserInfo

```asm
// === 080d8c3e BlueMarble::setUserInfo  [0x080d8c3e-0x80d8ca7] ===
 80d8c3e:	55                   	push   %ebp
 80d8c3f:	89 e5                	mov    %esp,%ebp
 80d8c41:	56                   	push   %esi
 80d8c42:	53                   	push   %ebx
 80d8c43:	83 ec 40             	sub    $0x40,%esp
 80d8c46:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80d8c49:	89 04 24             	mov    %eax,(%esp)
 80d8c4c:	e8 3f de ff ff       	call   80d6a90 <_ZN18BlueMarbleUserInfoC1Ev>
 80d8c51:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d8c54:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8c58:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80d8c5b:	89 04 24             	mov    %eax,(%esp)
 80d8c5e:	e8 2f df ff ff       	call   80d6b92 <_ZN18BlueMarbleUserInfo9setScriptEP23BlueMarbleScriptManager>
 80d8c63:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8c66:	8d 50 04             	lea    0x4(%eax),%edx
 80d8c69:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80d8c6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d8c70:	89 14 24             	mov    %edx,(%esp)
 80d8c73:	e8 8c 1b 00 00       	call   80da804 <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EE9push_backERKS0_>
 80d8c78:	eb 1b                	jmp    80d8c95 <_ZN10BlueMarble11setUserInfoEP23BlueMarbleScriptManager+0x57>
 80d8c7a:	89 d3                	mov    %edx,%ebx
 80d8c7c:	89 c6                	mov    %eax,%esi
 80d8c7e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80d8c81:	89 04 24             	mov    %eax,(%esp)
 80d8c84:	e8 79 de ff ff       	call   80d6b02 <_ZN18BlueMarbleUserInfoD1Ev>
 80d8c89:	89 f0                	mov    %esi,%eax
 80d8c8b:	89 da                	mov    %ebx,%edx
 80d8c8d:	89 04 24             	mov    %eax,(%esp)
 80d8c90:	e8 bb aa a0 00       	call   8ae3750 <_Unwind_Resume>
 80d8c95:	8d 45 d0             	lea    -0x30(%ebp),%eax
 80d8c98:	89 04 24             	mov    %eax,(%esp)
 80d8c9b:	e8 62 de ff ff       	call   80d6b02 <_ZN18BlueMarbleUserInfoD1Ev>
 80d8ca0:	83 c4 40             	add    $0x40,%esp
 80d8ca3:	5b                   	pop    %ebx
 80d8ca4:	5e                   	pop    %esi
 80d8ca5:	5d                   	pop    %ebp
 80d8ca6:	c3                   	ret
 80d8ca7:	90                   	nop

```

```c
// BlueMarble::setUserInfo @ 0x80d8c3e

/* BlueMarble::setUserInfo(BlueMarbleScriptManager*) */

void __thiscall BlueMarble::setUserInfo(BlueMarble *this,BlueMarbleScriptManager *param_1)

{
  BlueMarbleUserInfo local_34 [40];
  
  BlueMarbleUserInfo::BlueMarbleUserInfo(local_34);
  BlueMarbleUserInfo::setScript(local_34,param_1);
                    /* try { // try from 080d8c73 to 080d8c77 has its CatchHandler @ 080d8c7a */
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::push_back
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),local_34);
  BlueMarbleUserInfo::~BlueMarbleUserInfo(local_34);
  return;
}

```

---

## setUserState

```asm
// === 080d793a BlueMarble::setUserState  [0x080d793a-0x80d7965] ===
 80d793a:	55                   	push   %ebp
 80d793b:	89 e5                	mov    %esp,%ebp
 80d793d:	83 ec 18             	sub    $0x18,%esp
 80d7940:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7943:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7946:	83 c2 04             	add    $0x4,%edx
 80d7949:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d794d:	89 14 24             	mov    %edx,(%esp)
 80d7950:	e8 79 2b 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d7955:	8b 55 10             	mov    0x10(%ebp),%edx
 80d7958:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d795c:	89 04 24             	mov    %eax,(%esp)
 80d795f:	e8 3c f2 ff ff       	call   80d6ba0 <_ZN18BlueMarbleUserInfo12setUserStateEN19BlueMarbleUserState1TE>
 80d7964:	c9                   	leave
 80d7965:	c3                   	ret

```

```c
// BlueMarble::setUserState @ 0x80d793a

/* BlueMarble::setUserState(int, BlueMarbleUserState::T) */

void __thiscall BlueMarble::setUserState(BlueMarble *this,uint param_1,undefined4 param_3)

{
  BlueMarbleUserInfo *pBVar1;
  
  pBVar1 = (BlueMarbleUserInfo *)
           std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                     ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                      param_1);
  BlueMarbleUserInfo::setUserState(pBVar1,param_3);
  return;
}

```

---

## setVisitZone

```asm
// === 080d7a26 BlueMarble::setVisitZone  [0x080d7a26-0x80d7a99] ===
 80d7a26:	55                   	push   %ebp
 80d7a27:	89 e5                	mov    %esp,%ebp
 80d7a29:	83 ec 28             	sub    $0x28,%esp
 80d7a2c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7a2f:	8d 48 20             	lea    0x20(%eax),%ecx
 80d7a32:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d7a35:	8d 55 0c             	lea    0xc(%ebp),%edx
 80d7a38:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d7a3c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d7a40:	89 04 24             	mov    %eax,(%esp)
 80d7a43:	e8 2c 2b 00 00       	call   80da574 <_ZNSt3setIiSt4lessIiESaIiEE4findERKi>
 80d7a48:	83 ec 04             	sub    $0x4,%esp
 80d7a4b:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7a4e:	8d 50 20             	lea    0x20(%eax),%edx
 80d7a51:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d7a54:	89 54 24 04          	mov    %edx,0x4(%esp)
 80d7a58:	89 04 24             	mov    %eax,(%esp)
 80d7a5b:	e8 36 2a 00 00       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 80d7a60:	83 ec 04             	sub    $0x4,%esp
 80d7a63:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80d7a66:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7a6a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80d7a6d:	89 04 24             	mov    %eax,(%esp)
 80d7a70:	e8 3d 2b 00 00       	call   80da5b2 <_ZNKSt23_Rb_tree_const_iteratorIiEeqERKS0_>
 80d7a75:	84 c0                	test   %al,%al
 80d7a77:	74 1f                	je     80d7a98 <_ZN10BlueMarble12setVisitZoneEi+0x72>
 80d7a79:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7a7c:	8d 48 20             	lea    0x20(%eax),%ecx
 80d7a7f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80d7a82:	8d 55 0c             	lea    0xc(%ebp),%edx
 80d7a85:	89 54 24 08          	mov    %edx,0x8(%esp)
 80d7a89:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80d7a8d:	89 04 24             	mov    %eax,(%esp)
 80d7a90:	e8 31 2b 00 00       	call   80da5c6 <_ZNSt3setIiSt4lessIiESaIiEE6insertERKi>
 80d7a95:	83 ec 04             	sub    $0x4,%esp
 80d7a98:	c9                   	leave
 80d7a99:	c3                   	ret

```

```c
// BlueMarble::setVisitZone @ 0x80d7a26

/* BlueMarble::setVisitZone(int) */

void BlueMarble::setVisitZone(int param_1)

{
  char cVar1;
  _Rb_tree_const_iterator<int> local_1c [4];
  set<int,std::less<int>,std::allocator<int>> local_18 [4];
  int local_14 [4];
  
  std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_1c);
  std::set<int,std::less<int>,std::allocator<int>>::end(local_18);
  cVar1 = std::_Rb_tree_const_iterator<int>::operator==
                    (local_1c,(_Rb_tree_const_iterator *)local_18);
  if (cVar1 != '\0') {
    std::set<int,std::less<int>,std::allocator<int>>::insert(local_14);
  }
  return;
}

```

---

## startBlueMarble

```asm
// === 080d92be BlueMarble::startBlueMarble  [0x080d92be-0x80d93d7] ===
 80d92be:	55                   	push   %ebp
 80d92bf:	89 e5                	mov    %esp,%ebp
 80d92c1:	83 ec 28             	sub    $0x28,%esp
 80d92c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d92c7:	89 04 24             	mov    %eax,(%esp)
 80d92ca:	e8 05 db ff ff       	call   80d6dd4 <_ZN10BlueMarble20checkStartBlueMarbleEv>
 80d92cf:	84 c0                	test   %al,%al
 80d92d1:	0f 84 fe 00 00 00    	je     80d93d5 <_ZN10BlueMarble15startBlueMarbleEv+0x117>
 80d92d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d92da:	89 04 24             	mov    %eax,(%esp)
 80d92dd:	e8 66 da ff ff       	call   80d6d48 <_ZN10BlueMarble15resetBlueMarbleEv>
 80d92e2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80d92e9:	00 
 80d92ea:	8b 45 08             	mov    0x8(%ebp),%eax
 80d92ed:	89 04 24             	mov    %eax,(%esp)
 80d92f0:	e8 0d ff ff ff       	call   80d9202 <_ZN10BlueMarble11changeStateEN15BlueMarbleState1TE>
 80d92f5:	8b 45 08             	mov    0x8(%ebp),%eax
 80d92f8:	89 04 24             	mov    %eax,(%esp)
 80d92fb:	e8 34 db ff ff       	call   80d6e34 <_ZN10BlueMarble16setBlueMarbleMapEv>
 80d9300:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9303:	89 04 24             	mov    %eax,(%esp)
 80d9306:	e8 7d db ff ff       	call   80d6e88 <_ZN10BlueMarble15setMaxBoardSizeEv>
 80d930b:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80d9312:	e9 9c 00 00 00       	jmp    80d93b3 <_ZN10BlueMarble15startBlueMarbleEv+0xf5>
 80d9317:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d931a:	8b 55 08             	mov    0x8(%ebp),%edx
 80d931d:	83 c2 04             	add    $0x4,%edx
 80d9320:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9324:	89 14 24             	mov    %edx,(%esp)
 80d9327:	e8 a2 11 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d932c:	89 04 24             	mov    %eax,(%esp)
 80d932f:	e8 54 d8 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d9334:	85 c0                	test   %eax,%eax
 80d9336:	0f 94 c0             	sete   %al
 80d9339:	84 c0                	test   %al,%al
 80d933b:	75 71                	jne    80d93ae <_ZN10BlueMarble15startBlueMarbleEv+0xf0>
 80d933d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9340:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9343:	83 c2 04             	add    $0x4,%edx
 80d9346:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d934a:	89 14 24             	mov    %edx,(%esp)
 80d934d:	e8 7c 11 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9352:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80d9359:	00 
 80d935a:	89 04 24             	mov    %eax,(%esp)
 80d935d:	e8 3e d8 ff ff       	call   80d6ba0 <_ZN18BlueMarbleUserInfo12setUserStateEN19BlueMarbleUserState1TE>
 80d9362:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9365:	8b 55 08             	mov    0x8(%ebp),%edx
 80d9368:	83 c2 04             	add    $0x4,%edx
 80d936b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d936f:	89 14 24             	mov    %edx,(%esp)
 80d9372:	e8 57 11 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d9377:	89 04 24             	mov    %eax,(%esp)
 80d937a:	e8 09 d8 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d937f:	89 04 24             	mov    %eax,(%esp)
 80d9382:	e8 95 7b 5b 00       	call   8690f1c <_ZN15CUserCharacInfo28increaseBlueMarbleEnterCountEv>
 80d9387:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d938a:	8b 55 08             	mov    0x8(%ebp),%edx
 80d938d:	83 c2 04             	add    $0x4,%edx
 80d9390:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9394:	89 14 24             	mov    %edx,(%esp)
 80d9397:	e8 32 11 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d939c:	89 04 24             	mov    %eax,(%esp)
 80d939f:	e8 e4 d7 ff ff       	call   80d6b88 <_ZNK18BlueMarbleUserInfo7getUserEv>
 80d93a4:	89 04 24             	mov    %eax,(%esp)
 80d93a7:	e8 20 7c 5b 00       	call   8690fcc <_ZN5CUser24sendBlueMarbleEnterCountEv>
 80d93ac:	eb 01                	jmp    80d93af <_ZN10BlueMarble15startBlueMarbleEv+0xf1>
 80d93ae:	90                   	nop
 80d93af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 80d93b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d93b6:	8b 40 38             	mov    0x38(%eax),%eax
 80d93b9:	8b 40 30             	mov    0x30(%eax),%eax
 80d93bc:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 80d93bf:	0f 9f c0             	setg   %al
 80d93c2:	84 c0                	test   %al,%al
 80d93c4:	0f 85 4d ff ff ff    	jne    80d9317 <_ZN10BlueMarble15startBlueMarbleEv+0x59>
 80d93ca:	8b 45 08             	mov    0x8(%ebp),%eax
 80d93cd:	89 04 24             	mov    %eax,(%esp)
 80d93d0:	e8 dd f2 ff ff       	call   80d86b2 <_ZNK10BlueMarble19sendStartBlueMarbleEv>
 80d93d5:	c9                   	leave
 80d93d6:	c3                   	ret
 80d93d7:	90                   	nop

```

```c
// BlueMarble::startBlueMarble @ 0x80d92be

/* BlueMarble::startBlueMarble() */

void __thiscall BlueMarble::startBlueMarble(BlueMarble *this)

{
  char cVar1;
  BlueMarbleUserInfo *pBVar2;
  int iVar3;
  CUserCharacInfo *this_00;
  CUser *this_01;
  uint local_10;
  
  cVar1 = checkStartBlueMarble(this);
  if (cVar1 != '\0') {
    resetBlueMarble(this);
    changeState(this,2);
    setBlueMarbleMap(this);
    setMaxBoardSize(this);
    for (local_10 = 0; (int)local_10 < *(int *)(*(int *)(this + 0x38) + 0x30);
        local_10 = local_10 + 1) {
      pBVar2 = (BlueMarbleUserInfo *)
               std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                         ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                          (this + 4),local_10);
      iVar3 = BlueMarbleUserInfo::getUser(pBVar2);
      if (iVar3 != 0) {
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        BlueMarbleUserInfo::setUserState(pBVar2,1);
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        this_00 = (CUserCharacInfo *)BlueMarbleUserInfo::getUser(pBVar2);
        CUserCharacInfo::increaseBlueMarbleEnterCount(this_00);
        pBVar2 = (BlueMarbleUserInfo *)
                 std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                           ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)
                            (this + 4),local_10);
        this_01 = (CUser *)BlueMarbleUserInfo::getUser(pBVar2);
        CUser::sendBlueMarbleEnterCount(this_01);
      }
    }
    sendStartBlueMarble(this);
  }
  return;
}

```

---

## throwDice

```asm
// === 080d6f62 BlueMarble::throwDice  [0x080d6f62-0x80d6f87] ===
 80d6f62:	55                   	push   %ebp
 80d6f63:	89 e5                	mov    %esp,%ebp
 80d6f65:	83 ec 18             	sub    $0x18,%esp
 80d6f68:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6f6b:	89 04 24             	mov    %eax,(%esp)
 80d6f6e:	e8 15 00 00 00       	call   80d6f88 <_ZN10BlueMarble13setDiceNumberEv>
 80d6f73:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d6f76:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d6f7a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d6f7d:	89 04 24             	mov    %eax,(%esp)
 80d6f80:	e8 7b 16 00 00       	call   80d8600 <_ZNK10BlueMarble22sendBlueMarbleDiceInfoEi>
 80d6f85:	c9                   	leave
 80d6f86:	c3                   	ret
 80d6f87:	90                   	nop

```

```c
// BlueMarble::throwDice @ 0x80d6f62

/* BlueMarble::throwDice(int) */

void __thiscall BlueMarble::throwDice(BlueMarble *this,int param_1)

{
  setDiceNumber(this);
  sendBlueMarbleDiceInfo(this,param_1);
  return;
}

```

---

## tileType

```asm
// === 080d70ae BlueMarble::tileType  [0x080d70ae-0x80d7389] ===
 80d70ae:	55                   	push   %ebp
 80d70af:	89 e5                	mov    %esp,%ebp
 80d70b1:	53                   	push   %ebx
 80d70b2:	83 ec 24             	sub    $0x24,%esp
 80d70b5:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d70b8:	8b 55 08             	mov    0x8(%ebp),%edx
 80d70bb:	83 c2 04             	add    $0x4,%edx
 80d70be:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d70c2:	89 14 24             	mov    %edx,(%esp)
 80d70c5:	e8 04 34 00 00       	call   80da4ce <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EEixEj>
 80d70ca:	89 04 24             	mov    %eax,(%esp)
 80d70cd:	e8 32 fb ff ff       	call   80d6c04 <_ZNK18BlueMarbleUserInfo12getBoardZoneEv>
 80d70d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80d70d5:	8b 45 08             	mov    0x8(%ebp),%eax
 80d70d8:	89 04 24             	mov    %eax,(%esp)
 80d70db:	e8 9c fd ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d70e0:	8b 55 08             	mov    0x8(%ebp),%edx
 80d70e3:	8b 52 38             	mov    0x38(%edx),%edx
 80d70e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d70ea:	89 14 24             	mov    %edx,(%esp)
 80d70ed:	e8 c4 f5 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d70f2:	85 c0                	test   %eax,%eax
 80d70f4:	0f 94 c0             	sete   %al
 80d70f7:	84 c0                	test   %al,%al
 80d70f9:	0f 85 7d 02 00 00    	jne    80d737c <_ZN10BlueMarble8tileTypeEi+0x2ce>
 80d70ff:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 80d7102:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7105:	89 04 24             	mov    %eax,(%esp)
 80d7108:	e8 6f fd ff ff       	call   80d6e7c <_ZNK10BlueMarble16getBlueMarbleMapEv>
 80d710d:	8b 55 08             	mov    0x8(%ebp),%edx
 80d7110:	8b 52 38             	mov    0x38(%edx),%edx
 80d7113:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7117:	89 14 24             	mov    %edx,(%esp)
 80d711a:	e8 97 f5 7f 00       	call   88d66b6 <_ZN23BlueMarbleScriptManager6getMapEi>
 80d711f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80d7123:	89 04 24             	mov    %eax,(%esp)
 80d7126:	e8 19 e5 7f 00       	call   88d5644 <_ZN19BlueMarbleMapScript7getTileEj>
 80d712b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d712e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80d7132:	0f 84 47 02 00 00    	je     80d737f <_ZN10BlueMarble8tileTypeEi+0x2d1>
 80d7138:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d713b:	8b 00                	mov    (%eax),%eax
 80d713d:	83 f8 0d             	cmp    $0xd,%eax
 80d7140:	0f 87 3d 02 00 00    	ja     80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d7146:	8b 04 85 d4 89 b2 08 	mov    0x8b289d4(,%eax,4),%eax
 80d714d:	ff e0                	jmp    *%eax
 80d714f:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 80d7156:	00 
 80d7157:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d715a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d715e:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7161:	89 04 24             	mov    %eax,(%esp)
 80d7164:	e8 73 02 00 00       	call   80d73dc <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE>
 80d7169:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d716d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7170:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7174:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7177:	89 04 24             	mov    %eax,(%esp)
 80d717a:	e8 0b 02 00 00       	call   80d738a <_ZN10BlueMarble15setDungeonIndexEii>
 80d717f:	e9 ff 01 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d7184:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7187:	8b 40 08             	mov    0x8(%eax),%eax
 80d718a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d718e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7191:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7195:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7198:	89 04 24             	mov    %eax,(%esp)
 80d719b:	e8 50 06 00 00       	call   80d77f0 <_ZN10BlueMarble11setGoldBuffEii>
 80d71a0:	e9 de 01 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d71a5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d71a8:	8b 40 08             	mov    0x8(%eax),%eax
 80d71ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d71af:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d71b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d71b6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d71b9:	89 04 24             	mov    %eax,(%esp)
 80d71bc:	e8 dd 05 00 00       	call   80d779e <_ZN10BlueMarble10setExpBuffEii>
 80d71c1:	e9 bd 01 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d71c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d71c9:	8b 40 08             	mov    0x8(%eax),%eax
 80d71cc:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d71d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d71d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d71d7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d71da:	89 04 24             	mov    %eax,(%esp)
 80d71dd:	e8 60 06 00 00       	call   80d7842 <_ZN10BlueMarble11setDropBuffEii>
 80d71e2:	e9 9c 01 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d71e7:	8b 45 08             	mov    0x8(%ebp),%eax
 80d71ea:	89 04 24             	mov    %eax,(%esp)
 80d71ed:	e8 9e 04 00 00       	call   80d7690 <_ZNK10BlueMarble13getRandomItemEv>
 80d71f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d71f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d71f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d71fd:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7200:	89 04 24             	mov    %eax,(%esp)
 80d7203:	e8 3e 05 00 00       	call   80d7746 <_ZN10BlueMarble12setItemIndexEii>
 80d7208:	e9 76 01 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d720d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d7210:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7214:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7217:	89 04 24             	mov    %eax,(%esp)
 80d721a:	e8 7b 08 00 00       	call   80d7a9a <_ZNK10BlueMarble12getVisitZoneEi>
 80d721f:	83 f0 01             	xor    $0x1,%eax
 80d7222:	84 c0                	test   %al,%al
 80d7224:	0f 84 58 01 00 00    	je     80d7382 <_ZN10BlueMarble8tileTypeEi+0x2d4>
 80d722a:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 80d7231:	00 
 80d7232:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7235:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7239:	8b 45 08             	mov    0x8(%ebp),%eax
 80d723c:	89 04 24             	mov    %eax,(%esp)
 80d723f:	e8 98 01 00 00       	call   80d73dc <_ZNK10BlueMarble16getRandomDungeonEiN20BlueMarbleTileScript4TypeE>
 80d7244:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d7248:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d724b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d724f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7252:	89 04 24             	mov    %eax,(%esp)
 80d7255:	e8 30 01 00 00       	call   80d738a <_ZN10BlueMarble15setDungeonIndexEii>
 80d725a:	e9 24 01 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d725f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d7262:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7266:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7269:	89 04 24             	mov    %eax,(%esp)
 80d726c:	e8 b5 07 00 00       	call   80d7a26 <_ZN10BlueMarble12setVisitZoneEi>
 80d7271:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7274:	8b 40 08             	mov    0x8(%eax),%eax
 80d7277:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d727b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d727e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7282:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7285:	89 04 24             	mov    %eax,(%esp)
 80d7288:	e8 43 fd ff ff       	call   80d6fd0 <_ZN10BlueMarble15setMovePositionEii>
 80d728d:	c7 44 24 08 09 00 00 	movl   $0x9,0x8(%esp)
 80d7294:	00 
 80d7295:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7298:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d729c:	8b 45 08             	mov    0x8(%ebp),%eax
 80d729f:	89 04 24             	mov    %eax,(%esp)
 80d72a2:	e8 49 06 00 00       	call   80d78f0 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE>
 80d72a7:	84 c0                	test   %al,%al
 80d72a9:	74 12                	je     80d72bd <_ZN10BlueMarble8tileTypeEi+0x20f>
 80d72ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d72ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d72b2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d72b5:	89 04 24             	mov    %eax,(%esp)
 80d72b8:	e8 bf fa ff ff       	call   80d6d7c <_ZN10BlueMarble13resetBuffInfoEi>
 80d72bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d72c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d72c4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d72c7:	89 04 24             	mov    %eax,(%esp)
 80d72ca:	e8 69 fd ff ff       	call   80d7038 <_ZN10BlueMarble13intoBoardZoneEi>
 80d72cf:	e9 af 00 00 00       	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d72d4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80d72d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d72db:	8b 45 08             	mov    0x8(%ebp),%eax
 80d72de:	89 04 24             	mov    %eax,(%esp)
 80d72e1:	e8 40 07 00 00       	call   80d7a26 <_ZN10BlueMarble12setVisitZoneEi>
 80d72e6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d72e9:	8b 58 08             	mov    0x8(%eax),%ebx
 80d72ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d72ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d72f3:	8b 45 08             	mov    0x8(%ebp),%eax
 80d72f6:	89 04 24             	mov    %eax,(%esp)
 80d72f9:	e8 14 fd ff ff       	call   80d7012 <_ZNK10BlueMarble15getMovePositionEi>
 80d72fe:	89 da                	mov    %ebx,%edx
 80d7300:	29 c2                	sub    %eax,%edx
 80d7302:	89 d0                	mov    %edx,%eax
 80d7304:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d7308:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d730b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d730f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7312:	89 04 24             	mov    %eax,(%esp)
 80d7315:	e8 b6 fc ff ff       	call   80d6fd0 <_ZN10BlueMarble15setMovePositionEii>
 80d731a:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 80d7321:	00 
 80d7322:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d7325:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7329:	8b 45 08             	mov    0x8(%ebp),%eax
 80d732c:	89 04 24             	mov    %eax,(%esp)
 80d732f:	e8 bc 05 00 00       	call   80d78f0 <_ZN10BlueMarble18checkMoveFirstZoneEiN20BlueMarbleTileScript4TypeE>
 80d7334:	84 c0                	test   %al,%al
 80d7336:	74 12                	je     80d734a <_ZN10BlueMarble8tileTypeEi+0x29c>
 80d7338:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d733b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d733f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7342:	89 04 24             	mov    %eax,(%esp)
 80d7345:	e8 32 fa ff ff       	call   80d6d7c <_ZN10BlueMarble13resetBuffInfoEi>
 80d734a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d734d:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d7351:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7354:	89 04 24             	mov    %eax,(%esp)
 80d7357:	e8 dc fc ff ff       	call   80d7038 <_ZN10BlueMarble13intoBoardZoneEi>
 80d735c:	eb 25                	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d735e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d7361:	8b 40 08             	mov    0x8(%eax),%eax
 80d7364:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d7368:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d736b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d736f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d7372:	89 04 24             	mov    %eax,(%esp)
 80d7375:	e8 10 00 00 00       	call   80d738a <_ZN10BlueMarble15setDungeonIndexEii>
 80d737a:	eb 07                	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d737c:	90                   	nop
 80d737d:	eb 04                	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d737f:	90                   	nop
 80d7380:	eb 01                	jmp    80d7383 <_ZN10BlueMarble8tileTypeEi+0x2d5>
 80d7382:	90                   	nop
 80d7383:	83 c4 24             	add    $0x24,%esp
 80d7386:	5b                   	pop    %ebx
 80d7387:	5d                   	pop    %ebp
 80d7388:	c3                   	ret
 80d7389:	90                   	nop

```

```c
// BlueMarble::tileType @ 0x80d70ae

/* BlueMarble::tileType(int) */

void __thiscall BlueMarble::tileType(BlueMarble *this,int param_1)

{
  char cVar1;
  BlueMarbleUserInfo *this_00;
  uint uVar2;
  int iVar3;
  BlueMarbleMapScript *this_01;
  undefined4 *puVar4;
  int iVar5;
  
  this_00 = (BlueMarbleUserInfo *)
            std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::operator[]
                      ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4),
                       param_1);
  uVar2 = BlueMarbleUserInfo::getBoardZone(this_00);
  getBlueMarbleMap(this);
  iVar3 = BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
  if (iVar3 != 0) {
    getBlueMarbleMap(this);
    this_01 = (BlueMarbleMapScript *)BlueMarbleScriptManager::getMap(*(int *)(this + 0x38));
    puVar4 = (undefined4 *)BlueMarbleMapScript::getTile(this_01,uVar2);
    if (puVar4 != (undefined4 *)0x0) {
      switch(*puVar4) {
      case 2:
      case 8:
        iVar3 = getRandomDungeon(this,param_1,2);
        setDungeonIndex(this,param_1,iVar3);
        break;
      case 3:
        setGoldBuff(this,param_1,puVar4[2]);
        break;
      case 4:
        setExpBuff(this,param_1,puVar4[2]);
        break;
      case 5:
        setDropBuff(this,param_1,puVar4[2]);
        break;
      case 6:
        iVar3 = getRandomItem(this);
        setItemIndex(this,param_1,iVar3);
        break;
      case 7:
        cVar1 = getVisitZone((int)this);
        if (cVar1 != '\x01') {
          iVar3 = getRandomDungeon(this,param_1,7);
          setDungeonIndex(this,param_1,iVar3);
        }
        break;
      case 9:
        setVisitZone((int)this);
        setMovePosition(this,param_1,puVar4[2]);
        cVar1 = checkMoveFirstZone(this,param_1,9);
        if (cVar1 != '\0') {
          resetBuffInfo(this,param_1);
        }
        intoBoardZone(this,param_1);
        break;
      case 10:
        setVisitZone((int)this);
        iVar3 = puVar4[2];
        iVar5 = getMovePosition(this,param_1);
        setMovePosition(this,param_1,iVar3 - iVar5);
        cVar1 = checkMoveFirstZone(this,param_1,10);
        if (cVar1 != '\0') {
          resetBuffInfo(this,param_1);
        }
        intoBoardZone(this,param_1);
        break;
      case 0xb:
      case 0xc:
      case 0xd:
        setDungeonIndex(this,param_1,puVar4[2]);
      }
    }
  }
  return;
}

```

---

## userThrowDice

```asm
// === 080d93d8 BlueMarble::userThrowDice  [0x080d93d8-0x80d94f5] ===
 80d93d8:	55                   	push   %ebp
 80d93d9:	89 e5                	mov    %esp,%ebp
 80d93db:	53                   	push   %ebx
 80d93dc:	83 ec 34             	sub    $0x34,%esp
 80d93df:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80d93e3:	0f 84 06 01 00 00    	je     80d94ef <_ZN10BlueMarble13userThrowDiceEP5CUser+0x117>
 80d93e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80d93ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d93f0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d93f3:	89 04 24             	mov    %eax,(%esp)
 80d93f6:	e8 79 fc ff ff       	call   80d9074 <_ZNK10BlueMarble11getUserSlotEP5CUser>
 80d93fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80d93fe:	83 7d f4 ff          	cmpl   $0xffffffff,-0xc(%ebp)
 80d9402:	75 38                	jne    80d943c <_ZN10BlueMarble13userThrowDiceEP5CUser+0x64>
 80d9404:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9407:	89 44 24 14          	mov    %eax,0x14(%esp)
 80d940b:	c7 44 24 10 b0 8a b2 	movl   $0x8b28ab0,0x10(%esp)
 80d9412:	08 
 80d9413:	c7 44 24 0c 46 04 00 	movl   $0x446,0xc(%esp)
 80d941a:	00 
 80d941b:	c7 44 24 08 a0 9a b2 	movl   $0x8b29aa0,0x8(%esp)
 80d9422:	08 
 80d9423:	c7 44 24 04 5a 8a b2 	movl   $0x8b28a5a,0x4(%esp)
 80d942a:	08 
 80d942b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 80d9432:	e8 d3 a7 9f 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 80d9437:	e9 b4 00 00 00       	jmp    80d94f0 <_ZN10BlueMarble13userThrowDiceEP5CUser+0x118>
 80d943c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d943f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9443:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9446:	89 04 24             	mov    %eax,(%esp)
 80d9449:	e8 8a da ff ff       	call   80d6ed8 <_ZN10BlueMarble14checkThrowDiceEi>
 80d944e:	84 c0                	test   %al,%al
 80d9450:	0f 84 9a 00 00 00    	je     80d94f0 <_ZN10BlueMarble13userThrowDiceEP5CUser+0x118>
 80d9456:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d9459:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d945d:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9460:	89 04 24             	mov    %eax,(%esp)
 80d9463:	e8 3a d9 ff ff       	call   80d6da2 <_ZN10BlueMarble14resetIndexInfoEi>
 80d9468:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d946b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d946f:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9472:	89 04 24             	mov    %eax,(%esp)
 80d9475:	e8 e8 da ff ff       	call   80d6f62 <_ZN10BlueMarble9throwDiceEi>
 80d947a:	8b 45 08             	mov    0x8(%ebp),%eax
 80d947d:	89 04 24             	mov    %eax,(%esp)
 80d9480:	e8 3f db ff ff       	call   80d6fc4 <_ZNK10BlueMarble13getDiceNumberEv>
 80d9485:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d9489:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d948c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d9490:	8b 45 08             	mov    0x8(%ebp),%eax
 80d9493:	89 04 24             	mov    %eax,(%esp)
 80d9496:	e8 35 db ff ff       	call   80d6fd0 <_ZN10BlueMarble15setMovePositionEii>
 80d949b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d949e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d94a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d94a5:	89 04 24             	mov    %eax,(%esp)
 80d94a8:	e8 8b db ff ff       	call   80d7038 <_ZN10BlueMarble13intoBoardZoneEi>
 80d94ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d94b0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d94b4:	8b 45 08             	mov    0x8(%ebp),%eax
 80d94b7:	89 04 24             	mov    %eax,(%esp)
 80d94ba:	e8 b9 e2 ff ff       	call   80d7778 <_ZNK10BlueMarble12getItemIndexEi>
 80d94bf:	89 c3                	mov    %eax,%ebx
 80d94c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d94c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d94c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80d94cb:	89 04 24             	mov    %eax,(%esp)
 80d94ce:	e8 e3 de ff ff       	call   80d73b6 <_ZNK10BlueMarble15getDungeonIndexEi>
 80d94d3:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80d94d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 80d94db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80d94de:	89 44 24 04          	mov    %eax,0x4(%esp)
 80d94e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d94e5:	89 04 24             	mov    %eax,(%esp)
 80d94e8:	e8 15 f3 ff ff       	call   80d8802 <_ZNK10BlueMarble23sendBoardZoneActionInfoEiij>
 80d94ed:	eb 01                	jmp    80d94f0 <_ZN10BlueMarble13userThrowDiceEP5CUser+0x118>
 80d94ef:	90                   	nop
 80d94f0:	83 c4 34             	add    $0x34,%esp
 80d94f3:	5b                   	pop    %ebx
 80d94f4:	5d                   	pop    %ebp
 80d94f5:	c3                   	ret

```

```c
// BlueMarble::userThrowDice @ 0x80d93d8

/* BlueMarble::userThrowDice(CUser*) */

void __thiscall BlueMarble::userThrowDice(BlueMarble *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = getUserSlot(this,param_1);
    if (iVar2 == -1) {
      LogManager::logFormat
                (1,"BlueMarble.cpp","void BlueMarble::userThrowDice(CUser*)",0x446,
                 "BlueMarble::userThrowDice slot(%d)",0xffffffff);
    }
    else {
      cVar1 = checkThrowDice(this,iVar2);
      if (cVar1 != '\0') {
        resetIndexInfo(this,iVar2);
        throwDice(this,iVar2);
        iVar3 = getDiceNumber(this);
        setMovePosition(this,iVar2,iVar3);
        intoBoardZone(this,iVar2);
        uVar4 = getItemIndex(this,iVar2);
        iVar3 = getDungeonIndex(this,iVar2);
        sendBoardZoneActionInfo(this,iVar2,iVar3,uVar4);
      }
    }
  }
  return;
}

```

---

## ~BlueMarble

```asm
// === 080d8bae BlueMarble::~BlueMarble  [0x080d8bae-0x80d8c25] ===
 80d8bae:	55                   	push   %ebp
 80d8baf:	89 e5                	mov    %esp,%ebp
 80d8bb1:	56                   	push   %esi
 80d8bb2:	53                   	push   %ebx
 80d8bb3:	83 ec 10             	sub    $0x10,%esp
 80d8bb6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8bb9:	8b 40 14             	mov    0x14(%eax),%eax
 80d8bbc:	85 c0                	test   %eax,%eax
 80d8bbe:	74 18                	je     80d8bd8 <_ZN10BlueMarbleD1Ev+0x2a>
 80d8bc0:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8bc3:	8b 40 14             	mov    0x14(%eax),%eax
 80d8bc6:	85 c0                	test   %eax,%eax
 80d8bc8:	74 0e                	je     80d8bd8 <_ZN10BlueMarbleD1Ev+0x2a>
 80d8bca:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8bcd:	8b 40 14             	mov    0x14(%eax),%eax
 80d8bd0:	89 04 24             	mov    %eax,(%esp)
 80d8bd3:	e8 d8 bf 64 00       	call   8724bb0 <_ZdaPv>
 80d8bd8:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8bdb:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 80d8be2:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8be5:	83 c0 20             	add    $0x20,%eax
 80d8be8:	89 04 24             	mov    %eax,(%esp)
 80d8beb:	e8 44 13 00 00       	call   80d9f34 <_ZNSt3setIiSt4lessIiESaIiEED1Ev>
 80d8bf0:	eb 1e                	jmp    80d8c10 <_ZN10BlueMarbleD1Ev+0x62>
 80d8bf2:	89 d3                	mov    %edx,%ebx
 80d8bf4:	89 c6                	mov    %eax,%esi
 80d8bf6:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8bf9:	83 c0 04             	add    $0x4,%eax
 80d8bfc:	89 04 24             	mov    %eax,(%esp)
 80d8bff:	e8 86 1b 00 00       	call   80da78a <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EED1Ev>
 80d8c04:	89 f0                	mov    %esi,%eax
 80d8c06:	89 da                	mov    %ebx,%edx
 80d8c08:	89 04 24             	mov    %eax,(%esp)
 80d8c0b:	e8 40 ab a0 00       	call   8ae3750 <_Unwind_Resume>
 80d8c10:	8b 45 08             	mov    0x8(%ebp),%eax
 80d8c13:	83 c0 04             	add    $0x4,%eax
 80d8c16:	89 04 24             	mov    %eax,(%esp)
 80d8c19:	e8 6c 1b 00 00       	call   80da78a <_ZNSt6vectorI18BlueMarbleUserInfoSaIS0_EED1Ev>
 80d8c1e:	83 c4 10             	add    $0x10,%esp
 80d8c21:	5b                   	pop    %ebx
 80d8c22:	5e                   	pop    %esi
 80d8c23:	5d                   	pop    %ebp
 80d8c24:	c3                   	ret
 80d8c25:	90                   	nop

```

```c
// BlueMarble::~BlueMarble @ 0x80d8bae

/* BlueMarble::~BlueMarble() */

void __thiscall BlueMarble::~BlueMarble(BlueMarble *this)

{
  if ((*(int *)(this + 0x14) != 0) && (*(int *)(this + 0x14) != 0)) {
    operator_delete__(*(void **)(this + 0x14));
  }
  *(undefined4 *)(this + 0x14) = 0;
                    /* try { // try from 080d8beb to 080d8bef has its CatchHandler @ 080d8bf2 */
  std::set<int,std::less<int>,std::allocator<int>>::~set
            ((set<int,std::less<int>,std::allocator<int>> *)(this + 0x20));
  std::vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>>::~vector
            ((vector<BlueMarbleUserInfo,std::allocator<BlueMarbleUserInfo>> *)(this + 4));
  return;
}

```

