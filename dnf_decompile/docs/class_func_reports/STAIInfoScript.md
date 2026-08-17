# STAIInfoScript

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## STAIInfoScript

```asm
// === 08a38bc6 STAIInfoScript::STAIInfoScript  [0x08a38bc6-0x8a38e33] ===
 8a38bc6:	55                   	push   %ebp
 8a38bc7:	89 e5                	mov    %esp,%ebp
 8a38bc9:	57                   	push   %edi
 8a38bca:	56                   	push   %esi
 8a38bcb:	53                   	push   %ebx
 8a38bcc:	83 ec 2c             	sub    $0x2c,%esp
 8a38bcf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38bd2:	c7 00 48 4a c3 08    	movl   $0x8c34a48,(%eax)
 8a38bd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38bdb:	83 c0 0c             	add    $0xc,%eax
 8a38bde:	89 04 24             	mov    %eax,(%esp)
 8a38be1:	e8 ea d9 cc ff       	call   87065d0 <_ZNSsC1Ev>
 8a38be6:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38be9:	8d 70 10             	lea    0x10(%eax),%esi
 8a38bec:	89 f7                	mov    %esi,%edi
 8a38bee:	bb 04 00 00 00       	mov    $0x4,%ebx
 8a38bf3:	eb 0e                	jmp    8a38c03 <_ZN14STAIInfoScriptC1ERKS_+0x3d>
 8a38bf5:	89 3c 24             	mov    %edi,(%esp)
 8a38bf8:	e8 65 83 94 ff       	call   8380f62 <_ZNSt6vectorIPSsSaIS0_EEC1Ev>
 8a38bfd:	83 c7 0c             	add    $0xc,%edi
 8a38c00:	83 eb 01             	sub    $0x1,%ebx
 8a38c03:	83 fb ff             	cmp    $0xffffffff,%ebx
 8a38c06:	0f 95 c0             	setne  %al
 8a38c09:	84 c0                	test   %al,%al
 8a38c0b:	75 e8                	jne    8a38bf5 <_ZN14STAIInfoScriptC1ERKS_+0x2f>
 8a38c0d:	eb 39                	jmp    8a38c48 <_ZN14STAIInfoScriptC1ERKS_+0x82>
 8a38c0f:	89 d7                	mov    %edx,%edi
 8a38c11:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8a38c14:	85 f6                	test   %esi,%esi
 8a38c16:	74 26                	je     8a38c3e <_ZN14STAIInfoScriptC1ERKS_+0x78>
 8a38c18:	b8 04 00 00 00       	mov    $0x4,%eax
 8a38c1d:	29 d8                	sub    %ebx,%eax
 8a38c1f:	89 c2                	mov    %eax,%edx
 8a38c21:	89 d0                	mov    %edx,%eax
 8a38c23:	01 c0                	add    %eax,%eax
 8a38c25:	01 d0                	add    %edx,%eax
 8a38c27:	c1 e0 02             	shl    $0x2,%eax
 8a38c2a:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8a38c2d:	39 f3                	cmp    %esi,%ebx
 8a38c2f:	74 0d                	je     8a38c3e <_ZN14STAIInfoScriptC1ERKS_+0x78>
 8a38c31:	83 eb 0c             	sub    $0xc,%ebx
 8a38c34:	89 1c 24             	mov    %ebx,(%esp)
 8a38c37:	e8 3a 83 94 ff       	call   8380f76 <_ZNSt6vectorIPSsSaIS0_EED1Ev>
 8a38c3c:	eb ef                	jmp    8a38c2d <_ZN14STAIInfoScriptC1ERKS_+0x67>
 8a38c3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8a38c41:	89 fa                	mov    %edi,%edx
 8a38c43:	e9 c6 01 00 00       	jmp    8a38e0e <_ZN14STAIInfoScriptC1ERKS_+0x248>
 8a38c48:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38c4b:	8d b0 a4 00 00 00    	lea    0xa4(%eax),%esi
 8a38c51:	89 f7                	mov    %esi,%edi
 8a38c53:	bb 15 00 00 00       	mov    $0x15,%ebx
 8a38c58:	eb 0e                	jmp    8a38c68 <_ZN14STAIInfoScriptC1ERKS_+0xa2>
 8a38c5a:	89 3c 24             	mov    %edi,(%esp)
 8a38c5d:	e8 4a 55 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a38c62:	83 c7 0c             	add    $0xc,%edi
 8a38c65:	83 eb 01             	sub    $0x1,%ebx
 8a38c68:	83 fb ff             	cmp    $0xffffffff,%ebx
 8a38c6b:	0f 95 c0             	setne  %al
 8a38c6e:	84 c0                	test   %al,%al
 8a38c70:	75 e8                	jne    8a38c5a <_ZN14STAIInfoScriptC1ERKS_+0x94>
 8a38c72:	eb 39                	jmp    8a38cad <_ZN14STAIInfoScriptC1ERKS_+0xe7>
 8a38c74:	89 d7                	mov    %edx,%edi
 8a38c76:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8a38c79:	85 f6                	test   %esi,%esi
 8a38c7b:	74 26                	je     8a38ca3 <_ZN14STAIInfoScriptC1ERKS_+0xdd>
 8a38c7d:	b8 15 00 00 00       	mov    $0x15,%eax
 8a38c82:	29 d8                	sub    %ebx,%eax
 8a38c84:	89 c2                	mov    %eax,%edx
 8a38c86:	89 d0                	mov    %edx,%eax
 8a38c88:	01 c0                	add    %eax,%eax
 8a38c8a:	01 d0                	add    %edx,%eax
 8a38c8c:	c1 e0 02             	shl    $0x2,%eax
 8a38c8f:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 8a38c92:	39 f3                	cmp    %esi,%ebx
 8a38c94:	74 0d                	je     8a38ca3 <_ZN14STAIInfoScriptC1ERKS_+0xdd>
 8a38c96:	83 eb 0c             	sub    $0xc,%ebx
 8a38c99:	89 1c 24             	mov    %ebx,(%esp)
 8a38c9c:	e8 39 b1 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38ca1:	eb ef                	jmp    8a38c92 <_ZN14STAIInfoScriptC1ERKS_+0xcc>
 8a38ca3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8a38ca6:	89 fa                	mov    %edi,%edx
 8a38ca8:	e9 2f 01 00 00       	jmp    8a38ddc <_ZN14STAIInfoScriptC1ERKS_+0x216>
 8a38cad:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38cb0:	05 b0 01 00 00       	add    $0x1b0,%eax
 8a38cb5:	89 04 24             	mov    %eax,(%esp)
 8a38cb8:	e8 ef 54 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a38cbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38cc0:	05 bc 01 00 00       	add    $0x1bc,%eax
 8a38cc5:	89 04 24             	mov    %eax,(%esp)
 8a38cc8:	e8 df 54 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a38ccd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38cd0:	05 c8 01 00 00       	add    $0x1c8,%eax
 8a38cd5:	89 04 24             	mov    %eax,(%esp)
 8a38cd8:	e8 cf 54 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a38cdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38ce0:	05 d4 01 00 00       	add    $0x1d4,%eax
 8a38ce5:	89 04 24             	mov    %eax,(%esp)
 8a38ce8:	e8 bf 54 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a38ced:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38cf0:	05 e0 01 00 00       	add    $0x1e0,%eax
 8a38cf5:	89 04 24             	mov    %eax,(%esp)
 8a38cf8:	e8 af 54 65 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 8a38cfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d00:	89 04 24             	mov    %eax,(%esp)
 8a38d03:	e8 cc e6 92 ff       	call   83673d4 <_ZN14STAIInfoScript5clearEv>
 8a38d08:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38d0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8a38d0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d12:	89 04 24             	mov    %eax,(%esp)
 8a38d15:	e8 1a 01 00 00       	call   8a38e34 <_ZN14STAIInfoScriptaSERKS_>
 8a38d1a:	e9 0d 01 00 00       	jmp    8a38e2c <_ZN14STAIInfoScriptC1ERKS_+0x266>
 8a38d1f:	89 d3                	mov    %edx,%ebx
 8a38d21:	89 c6                	mov    %eax,%esi
 8a38d23:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d26:	05 e0 01 00 00       	add    $0x1e0,%eax
 8a38d2b:	89 04 24             	mov    %eax,(%esp)
 8a38d2e:	e8 a7 b0 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38d33:	89 f0                	mov    %esi,%eax
 8a38d35:	89 da                	mov    %ebx,%edx
 8a38d37:	eb 00                	jmp    8a38d39 <_ZN14STAIInfoScriptC1ERKS_+0x173>
 8a38d39:	89 d3                	mov    %edx,%ebx
 8a38d3b:	89 c6                	mov    %eax,%esi
 8a38d3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d40:	05 d4 01 00 00       	add    $0x1d4,%eax
 8a38d45:	89 04 24             	mov    %eax,(%esp)
 8a38d48:	e8 8d b0 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38d4d:	89 f0                	mov    %esi,%eax
 8a38d4f:	89 da                	mov    %ebx,%edx
 8a38d51:	eb 00                	jmp    8a38d53 <_ZN14STAIInfoScriptC1ERKS_+0x18d>
 8a38d53:	89 d3                	mov    %edx,%ebx
 8a38d55:	89 c6                	mov    %eax,%esi
 8a38d57:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d5a:	05 c8 01 00 00       	add    $0x1c8,%eax
 8a38d5f:	89 04 24             	mov    %eax,(%esp)
 8a38d62:	e8 73 b0 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38d67:	89 f0                	mov    %esi,%eax
 8a38d69:	89 da                	mov    %ebx,%edx
 8a38d6b:	eb 00                	jmp    8a38d6d <_ZN14STAIInfoScriptC1ERKS_+0x1a7>
 8a38d6d:	89 d3                	mov    %edx,%ebx
 8a38d6f:	89 c6                	mov    %eax,%esi
 8a38d71:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d74:	05 bc 01 00 00       	add    $0x1bc,%eax
 8a38d79:	89 04 24             	mov    %eax,(%esp)
 8a38d7c:	e8 59 b0 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38d81:	89 f0                	mov    %esi,%eax
 8a38d83:	89 da                	mov    %ebx,%edx
 8a38d85:	eb 00                	jmp    8a38d87 <_ZN14STAIInfoScriptC1ERKS_+0x1c1>
 8a38d87:	89 d3                	mov    %edx,%ebx
 8a38d89:	89 c6                	mov    %eax,%esi
 8a38d8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38d8e:	05 b0 01 00 00       	add    $0x1b0,%eax
 8a38d93:	89 04 24             	mov    %eax,(%esp)
 8a38d96:	e8 3f b0 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38d9b:	89 f0                	mov    %esi,%eax
 8a38d9d:	89 da                	mov    %ebx,%edx
 8a38d9f:	eb 00                	jmp    8a38da1 <_ZN14STAIInfoScriptC1ERKS_+0x1db>
 8a38da1:	89 d6                	mov    %edx,%esi
 8a38da3:	89 c7                	mov    %eax,%edi
 8a38da5:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38da8:	05 a4 00 00 00       	add    $0xa4,%eax
 8a38dad:	85 c0                	test   %eax,%eax
 8a38daf:	74 27                	je     8a38dd8 <_ZN14STAIInfoScriptC1ERKS_+0x212>
 8a38db1:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38db4:	05 a4 00 00 00       	add    $0xa4,%eax
 8a38db9:	8d 98 08 01 00 00    	lea    0x108(%eax),%ebx
 8a38dbf:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38dc2:	05 a4 00 00 00       	add    $0xa4,%eax
 8a38dc7:	39 c3                	cmp    %eax,%ebx
 8a38dc9:	74 0d                	je     8a38dd8 <_ZN14STAIInfoScriptC1ERKS_+0x212>
 8a38dcb:	83 eb 0c             	sub    $0xc,%ebx
 8a38dce:	89 1c 24             	mov    %ebx,(%esp)
 8a38dd1:	e8 04 b0 64 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 8a38dd6:	eb e7                	jmp    8a38dbf <_ZN14STAIInfoScriptC1ERKS_+0x1f9>
 8a38dd8:	89 f8                	mov    %edi,%eax
 8a38dda:	89 f2                	mov    %esi,%edx
 8a38ddc:	89 d6                	mov    %edx,%esi
 8a38dde:	89 c7                	mov    %eax,%edi
 8a38de0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38de3:	83 c0 10             	add    $0x10,%eax
 8a38de6:	85 c0                	test   %eax,%eax
 8a38de8:	74 20                	je     8a38e0a <_ZN14STAIInfoScriptC1ERKS_+0x244>
 8a38dea:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38ded:	83 c0 10             	add    $0x10,%eax
 8a38df0:	8d 58 3c             	lea    0x3c(%eax),%ebx
 8a38df3:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38df6:	83 c0 10             	add    $0x10,%eax
 8a38df9:	39 c3                	cmp    %eax,%ebx
 8a38dfb:	74 0d                	je     8a38e0a <_ZN14STAIInfoScriptC1ERKS_+0x244>
 8a38dfd:	83 eb 0c             	sub    $0xc,%ebx
 8a38e00:	89 1c 24             	mov    %ebx,(%esp)
 8a38e03:	e8 6e 81 94 ff       	call   8380f76 <_ZNSt6vectorIPSsSaIS0_EED1Ev>
 8a38e08:	eb e9                	jmp    8a38df3 <_ZN14STAIInfoScriptC1ERKS_+0x22d>
 8a38e0a:	89 f8                	mov    %edi,%eax
 8a38e0c:	89 f2                	mov    %esi,%edx
 8a38e0e:	89 d3                	mov    %edx,%ebx
 8a38e10:	89 c6                	mov    %eax,%esi
 8a38e12:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38e15:	83 c0 0c             	add    $0xc,%eax
 8a38e18:	89 04 24             	mov    %eax,(%esp)
 8a38e1b:	e8 c0 ed cc ff       	call   8707be0 <_ZNSsD1Ev>
 8a38e20:	89 f0                	mov    %esi,%eax
 8a38e22:	89 da                	mov    %ebx,%edx
 8a38e24:	89 04 24             	mov    %eax,(%esp)
 8a38e27:	e8 24 a9 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a38e2c:	83 c4 2c             	add    $0x2c,%esp
 8a38e2f:	5b                   	pop    %ebx
 8a38e30:	5e                   	pop    %esi
 8a38e31:	5f                   	pop    %edi
 8a38e32:	5d                   	pop    %ebp
 8a38e33:	c3                   	ret

```

```c
// STAIInfoScript::STAIInfoScript @ 0x8a38bc6

/* STAIInfoScript::STAIInfoScript(STAIInfoScript const&) */

void __thiscall STAIInfoScript::STAIInfoScript(STAIInfoScript *this,STAIInfoScript *param_1)

{
  int iVar1;
  vector<std::string*,std::allocator<std::string*>> *this_00;
  vector<int,std::allocator<int>> *this_01;
  
  *(undefined ***)this = &PTR__STAIInfoScript_08c34a48;
  std::string::string((string *)(this + 0xc));
  this_00 = (vector<std::string*,std::allocator<std::string*>> *)(this + 0x10);
  for (iVar1 = 4; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08a38bf8 to 08a38bfc has its CatchHandler @ 08a38c0f */
    std::vector<std::string*,std::allocator<std::string*>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  this_01 = (vector<int,std::allocator<int>> *)(this + 0xa4);
  for (iVar1 = 0x15; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 08a38c5d to 08a38c61 has its CatchHandler @ 08a38c74 */
    std::vector<int,std::allocator<int>>::vector(this_01);
    this_01 = this_01 + 0xc;
  }
                    /* try { // try from 08a38cb8 to 08a38cbc has its CatchHandler @ 08a38da1 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1b0));
                    /* try { // try from 08a38cc8 to 08a38ccc has its CatchHandler @ 08a38d87 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1bc));
                    /* try { // try from 08a38cd8 to 08a38cdc has its CatchHandler @ 08a38d6d */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1c8));
                    /* try { // try from 08a38ce8 to 08a38cec has its CatchHandler @ 08a38d53 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1d4));
                    /* try { // try from 08a38cf8 to 08a38cfc has its CatchHandler @ 08a38d39 */
  std::vector<int,std::allocator<int>>::vector((vector<int,std::allocator<int>> *)(this + 0x1e0));
                    /* try { // try from 08a38d03 to 08a38d19 has its CatchHandler @ 08a38d1f */
  clear(this);
  operator=(this,param_1);
  return;
}

```

---

## operator=

```asm
// === 08a38e34 STAIInfoScript::operator=  [0x08a38e34-0x8a390da] ===
 8a38e34:	55                   	push   %ebp
 8a38e35:	89 e5                	mov    %esp,%ebp
 8a38e37:	57                   	push   %edi
 8a38e38:	56                   	push   %esi
 8a38e39:	53                   	push   %ebx
 8a38e3a:	83 ec 3c             	sub    $0x3c,%esp
 8a38e3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38e40:	89 04 24             	mov    %eax,(%esp)
 8a38e43:	e8 f2 e6 92 ff       	call   836753a <_ZN14STAIInfoScript7destroyEv>
 8a38e48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38e4b:	8b 50 04             	mov    0x4(%eax),%edx
 8a38e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38e51:	89 50 04             	mov    %edx,0x4(%eax)
 8a38e54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38e57:	8b 50 08             	mov    0x8(%eax),%edx
 8a38e5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38e5d:	89 50 08             	mov    %edx,0x8(%eax)
 8a38e60:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38e63:	8d 50 0c             	lea    0xc(%eax),%edx
 8a38e66:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38e69:	83 c0 0c             	add    $0xc,%eax
 8a38e6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a38e70:	89 04 24             	mov    %eax,(%esp)
 8a38e73:	e8 88 ee cc ff       	call   8707d00 <_ZNSsaSERKSs>
 8a38e78:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8a38e7f:	e9 c1 00 00 00       	jmp    8a38f45 <_ZN14STAIInfoScriptaSERKS_+0x111>
 8a38e84:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8a38e8b:	e9 89 00 00 00       	jmp    8a38f19 <_ZN14STAIInfoScriptaSERKS_+0xe5>
 8a38e90:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a38e93:	89 d0                	mov    %edx,%eax
 8a38e95:	01 c0                	add    %eax,%eax
 8a38e97:	01 d0                	add    %edx,%eax
 8a38e99:	c1 e0 02             	shl    $0x2,%eax
 8a38e9c:	83 c0 10             	add    $0x10,%eax
 8a38e9f:	03 45 0c             	add    0xc(%ebp),%eax
 8a38ea2:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8a38ea5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a38ea9:	89 04 24             	mov    %eax,(%esp)
 8a38eac:	e8 e5 80 00 00       	call   8a40f96 <_ZNKSt6vectorIPSsSaIS0_EEixEj>
 8a38eb1:	8b 00                	mov    (%eax),%eax
 8a38eb3:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8a38eb6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8a38ebd:	e8 8e b5 ce ff       	call   8724450 <_Znwj>
 8a38ec2:	89 c3                	mov    %eax,%ebx
 8a38ec4:	89 d8                	mov    %ebx,%eax
 8a38ec6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8a38ec9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a38ecd:	89 04 24             	mov    %eax,(%esp)
 8a38ed0:	e8 db ea cc ff       	call   87079b0 <_ZNSsC1ERKSs>
 8a38ed5:	eb 18                	jmp    8a38eef <_ZN14STAIInfoScriptaSERKS_+0xbb>
 8a38ed7:	89 d6                	mov    %edx,%esi
 8a38ed9:	89 c7                	mov    %eax,%edi
 8a38edb:	89 1c 24             	mov    %ebx,(%esp)
 8a38ede:	e8 0d b6 ce ff       	call   87244f0 <_ZdlPv>
 8a38ee3:	89 f8                	mov    %edi,%eax
 8a38ee5:	89 f2                	mov    %esi,%edx
 8a38ee7:	89 04 24             	mov    %eax,(%esp)
 8a38eea:	e8 61 a8 0a 00       	call   8ae3750 <_Unwind_Resume>
 8a38eef:	89 d8                	mov    %ebx,%eax
 8a38ef1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8a38ef4:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a38ef7:	89 d0                	mov    %edx,%eax
 8a38ef9:	01 c0                	add    %eax,%eax
 8a38efb:	01 d0                	add    %edx,%eax
 8a38efd:	c1 e0 02             	shl    $0x2,%eax
 8a38f00:	83 c0 10             	add    $0x10,%eax
 8a38f03:	03 45 08             	add    0x8(%ebp),%eax
 8a38f06:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8a38f09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a38f0d:	89 04 24             	mov    %eax,(%esp)
 8a38f10:	e8 93 80 00 00       	call   8a40fa8 <_ZNSt6vectorIPSsSaIS0_EE9push_backERKS0_>
 8a38f15:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8a38f19:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8a38f1c:	89 d0                	mov    %edx,%eax
 8a38f1e:	01 c0                	add    %eax,%eax
 8a38f20:	01 d0                	add    %edx,%eax
 8a38f22:	c1 e0 02             	shl    $0x2,%eax
 8a38f25:	83 c0 10             	add    $0x10,%eax
 8a38f28:	03 45 0c             	add    0xc(%ebp),%eax
 8a38f2b:	89 04 24             	mov    %eax,(%esp)
 8a38f2e:	e8 bd 80 94 ff       	call   8380ff0 <_ZNKSt6vectorIPSsSaIS0_EE4sizeEv>
 8a38f33:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 8a38f36:	0f 97 c0             	seta   %al
 8a38f39:	84 c0                	test   %al,%al
 8a38f3b:	0f 85 4f ff ff ff    	jne    8a38e90 <_ZN14STAIInfoScriptaSERKS_+0x5c>
 8a38f41:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 8a38f45:	83 7d d8 04          	cmpl   $0x4,-0x28(%ebp)
 8a38f49:	0f 9e c0             	setle  %al
 8a38f4c:	84 c0                	test   %al,%al
 8a38f4e:	0f 85 30 ff ff ff    	jne    8a38e84 <_ZN14STAIInfoScriptaSERKS_+0x50>
 8a38f54:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8a38f5b:	eb 58                	jmp    8a38fb5 <_ZN14STAIInfoScriptaSERKS_+0x181>
 8a38f5d:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8a38f60:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a38f63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38f66:	83 c2 10             	add    $0x10,%edx
 8a38f69:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 8a38f6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38f70:	83 c1 10             	add    $0x10,%ecx
 8a38f73:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 8a38f77:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a38f7a:	89 d0                	mov    %edx,%eax
 8a38f7c:	01 c0                	add    %eax,%eax
 8a38f7e:	01 d0                	add    %edx,%eax
 8a38f80:	c1 e0 02             	shl    $0x2,%eax
 8a38f83:	05 a0 00 00 00       	add    $0xa0,%eax
 8a38f88:	03 45 0c             	add    0xc(%ebp),%eax
 8a38f8b:	8d 48 04             	lea    0x4(%eax),%ecx
 8a38f8e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8a38f91:	89 d0                	mov    %edx,%eax
 8a38f93:	01 c0                	add    %eax,%eax
 8a38f95:	01 d0                	add    %edx,%eax
 8a38f97:	c1 e0 02             	shl    $0x2,%eax
 8a38f9a:	05 a0 00 00 00       	add    $0xa0,%eax
 8a38f9f:	03 45 08             	add    0x8(%ebp),%eax
 8a38fa2:	83 c0 04             	add    $0x4,%eax
 8a38fa5:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8a38fa9:	89 04 24             	mov    %eax,(%esp)
 8a38fac:	e8 21 40 69 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8a38fb1:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8a38fb5:	83 7d e4 15          	cmpl   $0x15,-0x1c(%ebp)
 8a38fb9:	0f 9e c0             	setle  %al
 8a38fbc:	84 c0                	test   %al,%al
 8a38fbe:	75 9d                	jne    8a38f5d <_ZN14STAIInfoScriptaSERKS_+0x129>
 8a38fc0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38fc3:	8b 90 ac 01 00 00    	mov    0x1ac(%eax),%edx
 8a38fc9:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38fcc:	89 90 ac 01 00 00    	mov    %edx,0x1ac(%eax)
 8a38fd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38fd5:	8d 90 b0 01 00 00    	lea    0x1b0(%eax),%edx
 8a38fdb:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38fde:	05 b0 01 00 00       	add    $0x1b0,%eax
 8a38fe3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a38fe7:	89 04 24             	mov    %eax,(%esp)
 8a38fea:	e8 e3 3f 69 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8a38fef:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a38ff2:	8d 90 bc 01 00 00    	lea    0x1bc(%eax),%edx
 8a38ff8:	8b 45 08             	mov    0x8(%ebp),%eax
 8a38ffb:	05 bc 01 00 00       	add    $0x1bc,%eax
 8a39000:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a39004:	89 04 24             	mov    %eax,(%esp)
 8a39007:	e8 c6 3f 69 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8a3900c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a3900f:	8d 90 c8 01 00 00    	lea    0x1c8(%eax),%edx
 8a39015:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39018:	05 c8 01 00 00       	add    $0x1c8,%eax
 8a3901d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a39021:	89 04 24             	mov    %eax,(%esp)
 8a39024:	e8 a9 3f 69 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8a39029:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a3902c:	8d 90 d4 01 00 00    	lea    0x1d4(%eax),%edx
 8a39032:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39035:	05 d4 01 00 00       	add    $0x1d4,%eax
 8a3903a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a3903e:	89 04 24             	mov    %eax,(%esp)
 8a39041:	e8 8c 3f 69 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8a39046:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a39049:	8d 90 e0 01 00 00    	lea    0x1e0(%eax),%edx
 8a3904f:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39052:	05 e0 01 00 00       	add    $0x1e0,%eax
 8a39057:	89 54 24 04          	mov    %edx,0x4(%esp)
 8a3905b:	89 04 24             	mov    %eax,(%esp)
 8a3905e:	e8 6f 3f 69 ff       	call   80ccfd2 <_ZNSt6vectorIiSaIiEEaSERKS1_>
 8a39063:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a39066:	8b 90 f8 01 00 00    	mov    0x1f8(%eax),%edx
 8a3906c:	8b 45 08             	mov    0x8(%ebp),%eax
 8a3906f:	89 90 f8 01 00 00    	mov    %edx,0x1f8(%eax)
 8a39075:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a39078:	8b 90 fc 01 00 00    	mov    0x1fc(%eax),%edx
 8a3907e:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39081:	89 90 fc 01 00 00    	mov    %edx,0x1fc(%eax)
 8a39087:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a3908a:	8b 90 ec 01 00 00    	mov    0x1ec(%eax),%edx
 8a39090:	8b 45 08             	mov    0x8(%ebp),%eax
 8a39093:	89 90 ec 01 00 00    	mov    %edx,0x1ec(%eax)
 8a39099:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a3909c:	8b 90 f0 01 00 00    	mov    0x1f0(%eax),%edx
 8a390a2:	8b 45 08             	mov    0x8(%ebp),%eax
 8a390a5:	89 90 f0 01 00 00    	mov    %edx,0x1f0(%eax)
 8a390ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a390ae:	8b 90 f4 01 00 00    	mov    0x1f4(%eax),%edx
 8a390b4:	8b 45 08             	mov    0x8(%ebp),%eax
 8a390b7:	89 90 f4 01 00 00    	mov    %edx,0x1f4(%eax)
 8a390bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8a390c0:	0f b6 90 00 02 00 00 	movzbl 0x200(%eax),%edx
 8a390c7:	8b 45 08             	mov    0x8(%ebp),%eax
 8a390ca:	88 90 00 02 00 00    	mov    %dl,0x200(%eax)
 8a390d0:	8b 45 08             	mov    0x8(%ebp),%eax
 8a390d3:	83 c4 3c             	add    $0x3c,%esp
 8a390d6:	5b                   	pop    %ebx
 8a390d7:	5e                   	pop    %esi
 8a390d8:	5f                   	pop    %edi
 8a390d9:	5d                   	pop    %ebp
 8a390da:	c3                   	ret

```

```c
// STAIInfoScript::operator= @ 0x8a38e34

/* STAIInfoScript::TEMPNAMEPLACEHOLDERVALUE(STAIInfoScript const&) */

STAIInfoScript * __thiscall STAIInfoScript::operator=(STAIInfoScript *this,STAIInfoScript *param_1)

{
  undefined4 *puVar1;
  string *this_00;
  uint uVar2;
  string *local_30;
  int local_2c;
  uint local_28;
  string *local_24;
  int local_20;
  
  destroy(this);
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  std::string::operator=((string *)(this + 0xc),(string *)(param_1 + 0xc));
  for (local_2c = 0; local_2c < 5; local_2c = local_2c + 1) {
    local_28 = 0;
    while( true ) {
      uVar2 = std::vector<std::string*,std::allocator<std::string*>>::size
                        ((vector<std::string*,std::allocator<std::string*>> *)
                         (param_1 + local_2c * 0xc + 0x10));
      if (uVar2 <= local_28) break;
      puVar1 = (undefined4 *)
               std::vector<std::string*,std::allocator<std::string*>>::operator[]
                         ((vector<std::string*,std::allocator<std::string*>> *)
                          (param_1 + local_2c * 0xc + 0x10),local_28);
      local_24 = (string *)*puVar1;
      this_00 = operator_new(4);
                    /* try { // try from 08a38ed0 to 08a38ed4 has its CatchHandler @ 08a38ed7 */
      std::string::string(this_00,local_24);
      local_30 = this_00;
      std::vector<std::string*,std::allocator<std::string*>>::push_back
                ((vector<std::string*,std::allocator<std::string*>> *)(this + local_2c * 0xc + 0x10)
                 ,&local_30);
      local_28 = local_28 + 1;
    }
  }
  for (local_20 = 0; local_20 < 0x16; local_20 = local_20 + 1) {
    *(undefined4 *)(this + (local_20 + 0x10) * 4 + 0xc) =
         *(undefined4 *)(param_1 + (local_20 + 0x10) * 4 + 0xc);
    std::vector<int,std::allocator<int>>::operator=
              ((vector<int,std::allocator<int>> *)(this + local_20 * 0xc + 0xa4),
               (vector *)(param_1 + local_20 * 0xc + 0xa4));
  }
  *(undefined4 *)(this + 0x1ac) = *(undefined4 *)(param_1 + 0x1ac);
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1b0),(vector *)(param_1 + 0x1b0));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1bc),(vector *)(param_1 + 0x1bc));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1c8),(vector *)(param_1 + 0x1c8));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1d4),(vector *)(param_1 + 0x1d4));
  std::vector<int,std::allocator<int>>::operator=
            ((vector<int,std::allocator<int>> *)(this + 0x1e0),(vector *)(param_1 + 0x1e0));
  *(undefined4 *)(this + 0x1f8) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(this + 0x1ec) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(this + 500) = *(undefined4 *)(param_1 + 500);
  this[0x200] = param_1[0x200];
  return this;
}

```

