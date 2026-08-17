# WongWork__CItemGeneratorMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## initialize

```asm
// === 08533bc8 WongWork::CItemGeneratorMgr::initialize  [0x08533bc8-0x8534277] ===
 8533bc8:	55                   	push   %ebp
 8533bc9:	89 e5                	mov    %esp,%ebp
 8533bcb:	57                   	push   %edi
 8533bcc:	56                   	push   %esi
 8533bcd:	53                   	push   %ebx
 8533bce:	83 ec 3c             	sub    $0x3c,%esp
 8533bd1:	c7 04 24 a4 93 25 00 	movl   $0x2593a4,(%esp)
 8533bd8:	e8 73 08 1f 00       	call   8724450 <_Znwj>
 8533bdd:	89 c3                	mov    %eax,%ebx
 8533bdf:	89 d8                	mov    %ebx,%eax
 8533be1:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8533be8:	00 
 8533be9:	89 04 24             	mov    %eax,(%esp)
 8533bec:	e8 d7 6a 00 00       	call   853a6c8 <_ZN8WongWork12CMonsterDropC1Ei>
 8533bf1:	eb 18                	jmp    8533c0b <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x43>
 8533bf3:	89 d6                	mov    %edx,%esi
 8533bf5:	89 c7                	mov    %eax,%edi
 8533bf7:	89 1c 24             	mov    %ebx,(%esp)
 8533bfa:	e8 f1 08 1f 00       	call   87244f0 <_ZdlPv>
 8533bff:	89 f8                	mov    %edi,%eax
 8533c01:	89 f2                	mov    %esi,%edx
 8533c03:	89 04 24             	mov    %eax,(%esp)
 8533c06:	e8 45 fb 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533c0b:	89 d8                	mov    %ebx,%eax
 8533c0d:	89 c2                	mov    %eax,%edx
 8533c0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8533c12:	89 90 c0 03 00 00    	mov    %edx,0x3c0(%eax)
 8533c18:	c7 04 24 a4 93 25 00 	movl   $0x2593a4,(%esp)
 8533c1f:	e8 2c 08 1f 00       	call   8724450 <_Znwj>
 8533c24:	89 c3                	mov    %eax,%ebx
 8533c26:	89 d8                	mov    %ebx,%eax
 8533c28:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8533c2f:	00 
 8533c30:	89 04 24             	mov    %eax,(%esp)
 8533c33:	e8 c0 6b 00 00       	call   853a7f8 <_ZN8WongWork11CObjectDropC1Ei>
 8533c38:	eb 18                	jmp    8533c52 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x8a>
 8533c3a:	89 d6                	mov    %edx,%esi
 8533c3c:	89 c7                	mov    %eax,%edi
 8533c3e:	89 1c 24             	mov    %ebx,(%esp)
 8533c41:	e8 aa 08 1f 00       	call   87244f0 <_ZdlPv>
 8533c46:	89 f8                	mov    %edi,%eax
 8533c48:	89 f2                	mov    %esi,%edx
 8533c4a:	89 04 24             	mov    %eax,(%esp)
 8533c4d:	e8 fe fa 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533c52:	89 d8                	mov    %ebx,%eax
 8533c54:	89 c2                	mov    %eax,%edx
 8533c56:	8b 45 08             	mov    0x8(%ebp),%eax
 8533c59:	89 90 c4 03 00 00    	mov    %edx,0x3c4(%eax)
 8533c5f:	c7 04 24 84 3b 02 00 	movl   $0x23b84,(%esp)
 8533c66:	e8 e5 07 1f 00       	call   8724450 <_Znwj>
 8533c6b:	89 c3                	mov    %eax,%ebx
 8533c6d:	89 d8                	mov    %ebx,%eax
 8533c6f:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8533c76:	00 
 8533c77:	89 04 24             	mov    %eax,(%esp)
 8533c7a:	e8 e9 6c 00 00       	call   853a968 <_ZN8WongWork12CClearRewardC1Ei>
 8533c7f:	eb 18                	jmp    8533c99 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0xd1>
 8533c81:	89 d6                	mov    %edx,%esi
 8533c83:	89 c7                	mov    %eax,%edi
 8533c85:	89 1c 24             	mov    %ebx,(%esp)
 8533c88:	e8 63 08 1f 00       	call   87244f0 <_ZdlPv>
 8533c8d:	89 f8                	mov    %edi,%eax
 8533c8f:	89 f2                	mov    %esi,%edx
 8533c91:	89 04 24             	mov    %eax,(%esp)
 8533c94:	e8 b7 fa 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533c99:	89 d8                	mov    %ebx,%eax
 8533c9b:	89 c2                	mov    %eax,%edx
 8533c9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8533ca0:	89 90 c8 03 00 00    	mov    %edx,0x3c8(%eax)
 8533ca6:	c7 04 24 80 1f 00 00 	movl   $0x1f80,(%esp)
 8533cad:	e8 9e 07 1f 00       	call   8724450 <_Znwj>
 8533cb2:	89 c3                	mov    %eax,%ebx
 8533cb4:	89 d8                	mov    %ebx,%eax
 8533cb6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8533cbd:	00 
 8533cbe:	89 04 24             	mov    %eax,(%esp)
 8533cc1:	e8 60 6b 00 00       	call   853a826 <_ZN8WongWork10CWorldDropC1Ei>
 8533cc6:	eb 18                	jmp    8533ce0 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x118>
 8533cc8:	89 d6                	mov    %edx,%esi
 8533cca:	89 c7                	mov    %eax,%edi
 8533ccc:	89 1c 24             	mov    %ebx,(%esp)
 8533ccf:	e8 1c 08 1f 00       	call   87244f0 <_ZdlPv>
 8533cd4:	89 f8                	mov    %edi,%eax
 8533cd6:	89 f2                	mov    %esi,%edx
 8533cd8:	89 04 24             	mov    %eax,(%esp)
 8533cdb:	e8 70 fa 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533ce0:	89 d8                	mov    %ebx,%eax
 8533ce2:	89 c2                	mov    %eax,%edx
 8533ce4:	8b 45 08             	mov    0x8(%ebp),%eax
 8533ce7:	89 90 cc 03 00 00    	mov    %edx,0x3cc(%eax)
 8533ced:	c7 04 24 18 00 00 00 	movl   $0x18,(%esp)
 8533cf4:	e8 57 07 1f 00       	call   8724450 <_Znwj>
 8533cf9:	89 c3                	mov    %eax,%ebx
 8533cfb:	89 d8                	mov    %ebx,%eax
 8533cfd:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8533d04:	00 
 8533d05:	89 04 24             	mov    %eax,(%esp)
 8533d08:	e8 b5 6e 00 00       	call   853abc2 <_ZN8WongWork12CDungeonDropC1Ei>
 8533d0d:	eb 18                	jmp    8533d27 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x15f>
 8533d0f:	89 d6                	mov    %edx,%esi
 8533d11:	89 c7                	mov    %eax,%edi
 8533d13:	89 1c 24             	mov    %ebx,(%esp)
 8533d16:	e8 d5 07 1f 00       	call   87244f0 <_ZdlPv>
 8533d1b:	89 f8                	mov    %edi,%eax
 8533d1d:	89 f2                	mov    %esi,%edx
 8533d1f:	89 04 24             	mov    %eax,(%esp)
 8533d22:	e8 29 fa 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533d27:	89 d8                	mov    %ebx,%eax
 8533d29:	89 c2                	mov    %eax,%edx
 8533d2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8533d2e:	89 90 d0 03 00 00    	mov    %edx,0x3d0(%eax)
 8533d34:	c7 04 24 80 1f 00 00 	movl   $0x1f80,(%esp)
 8533d3b:	e8 10 07 1f 00       	call   8724450 <_Znwj>
 8533d40:	89 c3                	mov    %eax,%ebx
 8533d42:	89 d8                	mov    %ebx,%eax
 8533d44:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8533d4b:	00 
 8533d4c:	89 04 24             	mov    %eax,(%esp)
 8533d4f:	e8 d2 6a 00 00       	call   853a826 <_ZN8WongWork10CWorldDropC1Ei>
 8533d54:	eb 18                	jmp    8533d6e <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x1a6>
 8533d56:	89 d6                	mov    %edx,%esi
 8533d58:	89 c7                	mov    %eax,%edi
 8533d5a:	89 1c 24             	mov    %ebx,(%esp)
 8533d5d:	e8 8e 07 1f 00       	call   87244f0 <_ZdlPv>
 8533d62:	89 f8                	mov    %edi,%eax
 8533d64:	89 f2                	mov    %esi,%edx
 8533d66:	89 04 24             	mov    %eax,(%esp)
 8533d69:	e8 e2 f9 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533d6e:	89 d8                	mov    %ebx,%eax
 8533d70:	89 c2                	mov    %eax,%edx
 8533d72:	8b 45 08             	mov    0x8(%ebp),%eax
 8533d75:	89 90 d4 03 00 00    	mov    %edx,0x3d4(%eax)
 8533d7b:	c7 04 24 80 1f 00 00 	movl   $0x1f80,(%esp)
 8533d82:	e8 c9 06 1f 00       	call   8724450 <_Znwj>
 8533d87:	89 c3                	mov    %eax,%ebx
 8533d89:	89 d8                	mov    %ebx,%eax
 8533d8b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8533d92:	00 
 8533d93:	89 04 24             	mov    %eax,(%esp)
 8533d96:	e8 8b 6a 00 00       	call   853a826 <_ZN8WongWork10CWorldDropC1Ei>
 8533d9b:	eb 18                	jmp    8533db5 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x1ed>
 8533d9d:	89 d6                	mov    %edx,%esi
 8533d9f:	89 c7                	mov    %eax,%edi
 8533da1:	89 1c 24             	mov    %ebx,(%esp)
 8533da4:	e8 47 07 1f 00       	call   87244f0 <_ZdlPv>
 8533da9:	89 f8                	mov    %edi,%eax
 8533dab:	89 f2                	mov    %esi,%edx
 8533dad:	89 04 24             	mov    %eax,(%esp)
 8533db0:	e8 9b f9 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533db5:	89 d8                	mov    %ebx,%eax
 8533db7:	89 c2                	mov    %eax,%edx
 8533db9:	8b 45 08             	mov    0x8(%ebp),%eax
 8533dbc:	89 90 d8 03 00 00    	mov    %edx,0x3d8(%eax)
 8533dc2:	c7 04 24 80 1f 00 00 	movl   $0x1f80,(%esp)
 8533dc9:	e8 82 06 1f 00       	call   8724450 <_Znwj>
 8533dce:	89 c3                	mov    %eax,%ebx
 8533dd0:	89 d8                	mov    %ebx,%eax
 8533dd2:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8533dd9:	00 
 8533dda:	89 04 24             	mov    %eax,(%esp)
 8533ddd:	e8 44 6a 00 00       	call   853a826 <_ZN8WongWork10CWorldDropC1Ei>
 8533de2:	eb 18                	jmp    8533dfc <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x234>
 8533de4:	89 d6                	mov    %edx,%esi
 8533de6:	89 c7                	mov    %eax,%edi
 8533de8:	89 1c 24             	mov    %ebx,(%esp)
 8533deb:	e8 00 07 1f 00       	call   87244f0 <_ZdlPv>
 8533df0:	89 f8                	mov    %edi,%eax
 8533df2:	89 f2                	mov    %esi,%edx
 8533df4:	89 04 24             	mov    %eax,(%esp)
 8533df7:	e8 54 f9 5a 00       	call   8ae3750 <_Unwind_Resume>
 8533dfc:	89 d8                	mov    %ebx,%eax
 8533dfe:	89 c2                	mov    %eax,%edx
 8533e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e03:	89 90 dc 03 00 00    	mov    %edx,0x3dc(%eax)
 8533e09:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e0c:	8b 80 c0 03 00 00    	mov    0x3c0(%eax),%eax
 8533e12:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8533e19:	00 
 8533e1a:	89 04 24             	mov    %eax,(%esp)
 8533e1d:	e8 ea 65 00 00       	call   853a40c <_ZN8WongWork14CItemGenerator16setGeneratorTypeEi>
 8533e22:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e25:	8b 80 c4 03 00 00    	mov    0x3c4(%eax),%eax
 8533e2b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8533e32:	00 
 8533e33:	89 04 24             	mov    %eax,(%esp)
 8533e36:	e8 d1 65 00 00       	call   853a40c <_ZN8WongWork14CItemGenerator16setGeneratorTypeEi>
 8533e3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e3e:	8b 80 c8 03 00 00    	mov    0x3c8(%eax),%eax
 8533e44:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8533e4b:	00 
 8533e4c:	89 04 24             	mov    %eax,(%esp)
 8533e4f:	e8 b8 65 00 00       	call   853a40c <_ZN8WongWork14CItemGenerator16setGeneratorTypeEi>
 8533e54:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e57:	8b 80 cc 03 00 00    	mov    0x3cc(%eax),%eax
 8533e5d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8533e64:	00 
 8533e65:	89 04 24             	mov    %eax,(%esp)
 8533e68:	e8 9f 65 00 00       	call   853a40c <_ZN8WongWork14CItemGenerator16setGeneratorTypeEi>
 8533e6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e70:	8b 80 d0 03 00 00    	mov    0x3d0(%eax),%eax
 8533e76:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8533e7d:	00 
 8533e7e:	89 04 24             	mov    %eax,(%esp)
 8533e81:	e8 86 65 00 00       	call   853a40c <_ZN8WongWork14CItemGenerator16setGeneratorTypeEi>
 8533e86:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8533e8d:	8b 45 08             	mov    0x8(%ebp),%eax
 8533e90:	8b 80 c0 03 00 00    	mov    0x3c0(%eax),%eax
 8533e96:	c7 44 24 0c 34 94 c9 	movl   $0x8c99434,0xc(%esp)
 8533e9d:	08 
 8533e9e:	c7 44 24 08 58 94 c9 	movl   $0x8c99458,0x8(%esp)
 8533ea5:	08 
 8533ea6:	c7 44 24 04 7a 94 c9 	movl   $0x8c9947a,0x4(%esp)
 8533ead:	08 
 8533eae:	89 04 24             	mov    %eax,(%esp)
 8533eb1:	e8 44 42 00 00       	call   85380fa <_ZN8WongWork12CMonsterDrop10loadScriptEPKcS2_S2_>
 8533eb6:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533eb9:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8533ebd:	0f 95 c0             	setne  %al
 8533ec0:	84 c0                	test   %al,%al
 8533ec2:	74 2b                	je     8533eef <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x327>
 8533ec4:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8533ecb:	e8 30 19 1f 00       	call   8725800 <__cxa_allocate_exception>
 8533ed0:	89 c2                	mov    %eax,%edx
 8533ed2:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8533ed5:	89 0a                	mov    %ecx,(%edx)
 8533ed7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8533ede:	00 
 8533edf:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8533ee6:	09 
 8533ee7:	89 04 24             	mov    %eax,(%esp)
 8533eea:	e8 61 0d 1f 00       	call   8724c50 <__cxa_throw>
 8533eef:	8b 45 08             	mov    0x8(%ebp),%eax
 8533ef2:	8b 80 c4 03 00 00    	mov    0x3c4(%eax),%eax
 8533ef8:	8b 00                	mov    (%eax),%eax
 8533efa:	83 c0 04             	add    $0x4,%eax
 8533efd:	8b 10                	mov    (%eax),%edx
 8533eff:	8b 45 08             	mov    0x8(%ebp),%eax
 8533f02:	8b 80 c4 03 00 00    	mov    0x3c4(%eax),%eax
 8533f08:	c7 44 24 04 98 94 c9 	movl   $0x8c99498,0x4(%esp)
 8533f0f:	08 
 8533f10:	89 04 24             	mov    %eax,(%esp)
 8533f13:	ff d2                	call   *%edx
 8533f15:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533f18:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8533f1c:	0f 95 c0             	setne  %al
 8533f1f:	84 c0                	test   %al,%al
 8533f21:	74 2b                	je     8533f4e <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x386>
 8533f23:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8533f2a:	e8 d1 18 1f 00       	call   8725800 <__cxa_allocate_exception>
 8533f2f:	89 c2                	mov    %eax,%edx
 8533f31:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8533f34:	89 0a                	mov    %ecx,(%edx)
 8533f36:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8533f3d:	00 
 8533f3e:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8533f45:	09 
 8533f46:	89 04 24             	mov    %eax,(%esp)
 8533f49:	e8 02 0d 1f 00       	call   8724c50 <__cxa_throw>
 8533f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8533f51:	8b 80 c8 03 00 00    	mov    0x3c8(%eax),%eax
 8533f57:	8b 00                	mov    (%eax),%eax
 8533f59:	83 c0 04             	add    $0x4,%eax
 8533f5c:	8b 10                	mov    (%eax),%edx
 8533f5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8533f61:	8b 80 c8 03 00 00    	mov    0x3c8(%eax),%eax
 8533f67:	c7 44 24 04 b4 94 c9 	movl   $0x8c994b4,0x4(%esp)
 8533f6e:	08 
 8533f6f:	89 04 24             	mov    %eax,(%esp)
 8533f72:	ff d2                	call   *%edx
 8533f74:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533f77:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8533f7b:	0f 95 c0             	setne  %al
 8533f7e:	84 c0                	test   %al,%al
 8533f80:	74 2b                	je     8533fad <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x3e5>
 8533f82:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8533f89:	e8 72 18 1f 00       	call   8725800 <__cxa_allocate_exception>
 8533f8e:	89 c2                	mov    %eax,%edx
 8533f90:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8533f93:	89 0a                	mov    %ecx,(%edx)
 8533f95:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8533f9c:	00 
 8533f9d:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8533fa4:	09 
 8533fa5:	89 04 24             	mov    %eax,(%esp)
 8533fa8:	e8 a3 0c 1f 00       	call   8724c50 <__cxa_throw>
 8533fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8533fb0:	8b 80 cc 03 00 00    	mov    0x3cc(%eax),%eax
 8533fb6:	c7 44 24 08 d5 94 c9 	movl   $0x8c994d5,0x8(%esp)
 8533fbd:	08 
 8533fbe:	c7 44 24 04 ee 94 c9 	movl   $0x8c994ee,0x4(%esp)
 8533fc5:	08 
 8533fc6:	89 04 24             	mov    %eax,(%esp)
 8533fc9:	e8 8e 45 00 00       	call   853855c <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_>
 8533fce:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8533fd1:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8533fd5:	0f 95 c0             	setne  %al
 8533fd8:	84 c0                	test   %al,%al
 8533fda:	74 2b                	je     8534007 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x43f>
 8533fdc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8533fe3:	e8 18 18 1f 00       	call   8725800 <__cxa_allocate_exception>
 8533fe8:	89 c2                	mov    %eax,%edx
 8533fea:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8533fed:	89 0a                	mov    %ecx,(%edx)
 8533fef:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8533ff6:	00 
 8533ff7:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8533ffe:	09 
 8533fff:	89 04 24             	mov    %eax,(%esp)
 8534002:	e8 49 0c 1f 00       	call   8724c50 <__cxa_throw>
 8534007:	8b 45 08             	mov    0x8(%ebp),%eax
 853400a:	8b 80 d0 03 00 00    	mov    0x3d0(%eax),%eax
 8534010:	8b 00                	mov    (%eax),%eax
 8534012:	83 c0 04             	add    $0x4,%eax
 8534015:	8b 10                	mov    (%eax),%edx
 8534017:	8b 45 08             	mov    0x8(%ebp),%eax
 853401a:	8b 80 d0 03 00 00    	mov    0x3d0(%eax),%eax
 8534020:	c7 44 24 04 00 95 c9 	movl   $0x8c99500,0x4(%esp)
 8534027:	08 
 8534028:	89 04 24             	mov    %eax,(%esp)
 853402b:	ff d2                	call   *%edx
 853402d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8534030:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8534034:	0f 95 c0             	setne  %al
 8534037:	84 c0                	test   %al,%al
 8534039:	74 2b                	je     8534066 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x49e>
 853403b:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8534042:	e8 b9 17 1f 00       	call   8725800 <__cxa_allocate_exception>
 8534047:	89 c2                	mov    %eax,%edx
 8534049:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 853404c:	89 0a                	mov    %ecx,(%edx)
 853404e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8534055:	00 
 8534056:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 853405d:	09 
 853405e:	89 04 24             	mov    %eax,(%esp)
 8534061:	e8 ea 0b 1f 00       	call   8724c50 <__cxa_throw>
 8534066:	8b 45 08             	mov    0x8(%ebp),%eax
 8534069:	8b 80 d4 03 00 00    	mov    0x3d4(%eax),%eax
 853406f:	c7 44 24 08 04 95 c9 	movl   $0x8c99504,0x8(%esp)
 8534076:	08 
 8534077:	c7 44 24 04 23 95 c9 	movl   $0x8c99523,0x4(%esp)
 853407e:	08 
 853407f:	89 04 24             	mov    %eax,(%esp)
 8534082:	e8 d5 44 00 00       	call   853855c <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_>
 8534087:	89 45 dc             	mov    %eax,-0x24(%ebp)
 853408a:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 853408e:	0f 95 c0             	setne  %al
 8534091:	84 c0                	test   %al,%al
 8534093:	74 2b                	je     85340c0 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x4f8>
 8534095:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 853409c:	e8 5f 17 1f 00       	call   8725800 <__cxa_allocate_exception>
 85340a1:	89 c2                	mov    %eax,%edx
 85340a3:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 85340a6:	89 0a                	mov    %ecx,(%edx)
 85340a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85340af:	00 
 85340b0:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 85340b7:	09 
 85340b8:	89 04 24             	mov    %eax,(%esp)
 85340bb:	e8 90 0b 1f 00       	call   8724c50 <__cxa_throw>
 85340c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85340c3:	8b 80 d8 03 00 00    	mov    0x3d8(%eax),%eax
 85340c9:	c7 44 24 08 04 95 c9 	movl   $0x8c99504,0x8(%esp)
 85340d0:	08 
 85340d1:	c7 44 24 04 3b 95 c9 	movl   $0x8c9953b,0x4(%esp)
 85340d8:	08 
 85340d9:	89 04 24             	mov    %eax,(%esp)
 85340dc:	e8 7b 44 00 00       	call   853855c <_ZN8WongWork10CWorldDrop10loadScriptEPKcS2_>
 85340e1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85340e4:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85340e8:	0f 95 c0             	setne  %al
 85340eb:	84 c0                	test   %al,%al
 85340ed:	74 2b                	je     853411a <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x552>
 85340ef:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 85340f6:	e8 05 17 1f 00       	call   8725800 <__cxa_allocate_exception>
 85340fb:	89 c2                	mov    %eax,%edx
 85340fd:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8534100:	89 0a                	mov    %ecx,(%edx)
 8534102:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8534109:	00 
 853410a:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8534111:	09 
 8534112:	89 04 24             	mov    %eax,(%esp)
 8534115:	e8 36 0b 1f 00       	call   8724c50 <__cxa_throw>
 853411a:	8b 45 08             	mov    0x8(%ebp),%eax
 853411d:	05 e0 03 00 00       	add    $0x3e0,%eax
 8534122:	c7 44 24 04 54 95 c9 	movl   $0x8c99554,0x4(%esp)
 8534129:	08 
 853412a:	89 04 24             	mov    %eax,(%esp)
 853412d:	e8 24 03 00 00       	call   8534456 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc>
 8534132:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8534135:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8534139:	0f 95 c0             	setne  %al
 853413c:	84 c0                	test   %al,%al
 853413e:	0f 84 a6 00 00 00    	je     85341ea <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x622>
 8534144:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 853414b:	e8 b0 16 1f 00       	call   8725800 <__cxa_allocate_exception>
 8534150:	89 c2                	mov    %eax,%edx
 8534152:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8534155:	89 0a                	mov    %ecx,(%edx)
 8534157:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 853415e:	00 
 853415f:	c7 44 24 04 e0 b1 36 	movl   $0x936b1e0,0x4(%esp)
 8534166:	09 
 8534167:	89 04 24             	mov    %eax,(%esp)
 853416a:	e8 e1 0a 1f 00       	call   8724c50 <__cxa_throw>
 853416f:	83 fa 01             	cmp    $0x1,%edx
 8534172:	74 08                	je     853417c <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x5b4>
 8534174:	89 04 24             	mov    %eax,(%esp)
 8534177:	e8 d4 f5 5a 00       	call   8ae3750 <_Unwind_Resume>
 853417c:	89 04 24             	mov    %eax,(%esp)
 853417f:	e8 5c 1b 1f 00       	call   8725ce0 <__cxa_begin_catch>
 8534184:	8b 00                	mov    (%eax),%eax
 8534186:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8534189:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8534190:	00 
 8534191:	c7 44 24 08 9a 01 00 	movl   $0x19a,0x8(%esp)
 8534198:	00 
 8534199:	c7 44 24 04 a0 a6 c9 	movl   $0x8c9a6a0,0x4(%esp)
 85341a0:	08 
 85341a1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85341a4:	89 04 24             	mov    %eax,(%esp)
 85341a7:	e8 6c b5 01 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85341ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85341af:	89 44 24 08          	mov    %eax,0x8(%esp)
 85341b3:	c7 44 24 04 70 95 c9 	movl   $0x8c99570,0x4(%esp)
 85341ba:	08 
 85341bb:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85341be:	89 04 24             	mov    %eax,(%esp)
 85341c1:	e8 c2 b5 01 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85341c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 85341cb:	e8 60 1a 1f 00       	call   8725c30 <__cxa_end_catch>
 85341d0:	e9 99 00 00 00       	jmp    853426e <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x6a6>
 85341d5:	89 d3                	mov    %edx,%ebx
 85341d7:	89 c6                	mov    %eax,%esi
 85341d9:	e8 52 1a 1f 00       	call   8725c30 <__cxa_end_catch>
 85341de:	89 f0                	mov    %esi,%eax
 85341e0:	89 da                	mov    %ebx,%edx
 85341e2:	89 04 24             	mov    %eax,(%esp)
 85341e5:	e8 66 f5 5a 00       	call   8ae3750 <_Unwind_Resume>
 85341ea:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85341f1:	eb 28                	jmp    853421b <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x653>
 85341f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85341f6:	8d 90 e0 03 00 00    	lea    0x3e0(%eax),%edx
 85341fc:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 85341ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8534202:	81 c1 f0 00 00 00    	add    $0xf0,%ecx
 8534208:	8b 04 88             	mov    (%eax,%ecx,4),%eax
 853420b:	89 54 24 04          	mov    %edx,0x4(%esp)
 853420f:	89 04 24             	mov    %eax,(%esp)
 8534212:	e8 cb 61 00 00       	call   853a3e2 <_ZN8WongWork14CItemGenerator13setCommonDataEPNS_20CGeneratorCommonDataE>
 8534217:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 853421b:	83 7d e4 07          	cmpl   $0x7,-0x1c(%ebp)
 853421f:	0f 9e c0             	setle  %al
 8534222:	84 c0                	test   %al,%al
 8534224:	75 cd                	jne    85341f3 <_ZN8WongWork17CItemGeneratorMgr10initializeEv+0x62b>
 8534226:	8b 45 08             	mov    0x8(%ebp),%eax
 8534229:	c7 44 24 08 c0 03 00 	movl   $0x3c0,0x8(%esp)
 8534230:	00 
 8534231:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8534238:	00 
 8534239:	89 04 24             	mov    %eax,(%esp)
 853423c:	e8 7f 9a b4 ff       	call   807dcc0 <memset@plt>
 8534241:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8534248:	e8 51 7a b9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 853424d:	89 04 24             	mov    %eax,(%esp)
 8534250:	e8 c3 30 10 00       	call   8637318 <_ZN33TimerUpdateItemGenerateStatistics15registNextTimerEl>
 8534255:	b8 00 00 80 3f       	mov    $0x3f800000,%eax
 853425a:	89 44 24 04          	mov    %eax,0x4(%esp)
 853425e:	8b 45 08             	mov    0x8(%ebp),%eax
 8534261:	89 04 24             	mov    %eax,(%esp)
 8534264:	e8 0f 00 00 00       	call   8534278 <_ZN8WongWork17CItemGeneratorMgr12setDropRatioEf>
 8534269:	bb 01 00 00 00       	mov    $0x1,%ebx
 853426e:	89 d8                	mov    %ebx,%eax
 8534270:	83 c4 3c             	add    $0x3c,%esp
 8534273:	5b                   	pop    %ebx
 8534274:	5e                   	pop    %esi
 8534275:	5f                   	pop    %edi
 8534276:	5d                   	pop    %ebp
 8534277:	c3                   	ret

```

```c
// WongWork::CItemGeneratorMgr::initialize @ 0x8533bc8

/* WongWork::CItemGeneratorMgr::initialize() */

undefined4 __thiscall WongWork::CItemGeneratorMgr::initialize(CItemGeneratorMgr *this)

{
  CMonsterDrop *this_00;
  CObjectDrop *this_01;
  CClearReward *this_02;
  CWorldDrop *pCVar1;
  CDungeonDrop *this_03;
  int iVar2;
  int *piVar3;
  long lVar4;
  int local_20;
  
  this_00 = operator_new(0x2593a4);
                    /* try { // try from 08533bec to 08533bf0 has its CatchHandler @ 08533bf3 */
  CMonsterDrop::CMonsterDrop(this_00,3);
  *(CMonsterDrop **)(this + 0x3c0) = this_00;
  this_01 = operator_new(0x2593a4);
                    /* try { // try from 08533c33 to 08533c37 has its CatchHandler @ 08533c3a */
  CObjectDrop::CObjectDrop(this_01,3);
  *(CObjectDrop **)(this + 0x3c4) = this_01;
  this_02 = operator_new(0x23b84);
                    /* try { // try from 08533c7a to 08533c7e has its CatchHandler @ 08533c81 */
  CClearReward::CClearReward(this_02,5);
  *(CClearReward **)(this + 0x3c8) = this_02;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533cc1 to 08533cc5 has its CatchHandler @ 08533cc8 */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3cc) = pCVar1;
  this_03 = operator_new(0x18);
                    /* try { // try from 08533d08 to 08533d0c has its CatchHandler @ 08533d0f */
  CDungeonDrop::CDungeonDrop(this_03,2);
  *(CDungeonDrop **)(this + 0x3d0) = this_03;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533d4f to 08533d53 has its CatchHandler @ 08533d56 */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3d4) = pCVar1;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533d96 to 08533d9a has its CatchHandler @ 08533d9d */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3d8) = pCVar1;
  pCVar1 = operator_new(0x1f80);
                    /* try { // try from 08533ddd to 08533de1 has its CatchHandler @ 08533de4 */
  CWorldDrop::CWorldDrop(pCVar1,2);
  *(CWorldDrop **)(this + 0x3dc) = pCVar1;
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3c0),0);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3c4),1);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3c8),2);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3cc),3);
  CItemGenerator::setGeneratorType(*(CItemGenerator **)(this + 0x3d0),4);
                    /* try { // try from 08533eb1 to 0853416e has its CatchHandler @ 0853416f */
  iVar2 = CMonsterDrop::loadScript
                    (*(CMonsterDrop **)(this + 0x3c0),"Etc/ItemDropInfo_Monseter.etc",
                     "Etc/ItemDropInfo_Monster_Hell.etc","Etc/ItemDropInfo_Monseter_Extra.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = (**(code **)(**(int **)(this + 0x3c4) + 4))
                    (*(undefined4 *)(this + 0x3c4),"Etc/ItemDropInfo_Object.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = (**(code **)(**(int **)(this + 0x3c8) + 4))
                    (*(undefined4 *)(this + 0x3c8),"Etc/ItemDropInfo_ClearReward.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CWorldDrop::loadScript
                    (*(CWorldDrop **)(this + 0x3cc),"Etc/WorldDrop.etc","Etc/WorldDropWarArea.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = (**(code **)(**(int **)(this + 0x3d0) + 4))(*(undefined4 *)(this + 0x3d0),&DAT_08c99500);
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CWorldDrop::loadScript
                    (*(CWorldDrop **)(this + 0x3d4),"Etc/WorldDropPCRoom.etc",
                     "Etc/WorldDropWarAreaPCRoom.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CWorldDrop::loadScript
                    (*(CWorldDrop **)(this + 0x3d8),"Etc/WorldDropPCRoom2.etc",
                     "Etc/WorldDropWarAreaPCRoom.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  iVar2 = CGeneratorCommonData::loadScript
                    ((CGeneratorCommonData *)(this + 0x3e0),"Etc/ItemDropInfo_Common.etc");
  if (iVar2 != 0) {
    piVar3 = (int *)__cxa_allocate_exception(4);
    *piVar3 = iVar2;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(piVar3,&int::typeinfo,0);
  }
  for (local_20 = 0; local_20 < 8; local_20 = local_20 + 1) {
    CItemGenerator::setCommonData
              (*(CItemGenerator **)(this + (local_20 + 0xf0) * 4),
               (CGeneratorCommonData *)(this + 0x3e0));
  }
  memset(this,0,0x3c0);
  lVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  TimerUpdateItemGenerateStatistics::registNextTimer(lVar4);
  setDropRatio(this,1.0);
  return 1;
}

```

---

## onTimerEvent

```asm
// === 08534322 WongWork::CItemGeneratorMgr::onTimerEvent  [0x08534322-0x8534455] ===
 8534322:	55                   	push   %ebp
 8534323:	89 e5                	mov    %esp,%ebp
 8534325:	57                   	push   %edi
 8534326:	56                   	push   %esi
 8534327:	53                   	push   %ebx
 8534328:	83 ec 3c             	sub    $0x3c,%esp
 853432b:	83 7d 0c 6b          	cmpl   $0x6b,0xc(%ebp)
 853432f:	0f 85 18 01 00 00    	jne    853444d <_ZN8WongWork17CItemGeneratorMgr12onTimerEventEi+0x12b>
 8534335:	8b 45 08             	mov    0x8(%ebp),%eax
 8534338:	83 c0 60             	add    $0x60,%eax
 853433b:	89 45 dc             	mov    %eax,-0x24(%ebp)
 853433e:	8b 45 08             	mov    0x8(%ebp),%eax
 8534341:	83 c0 48             	add    $0x48,%eax
 8534344:	89 c7                	mov    %eax,%edi
 8534346:	8b 45 08             	mov    0x8(%ebp),%eax
 8534349:	83 c0 30             	add    $0x30,%eax
 853434c:	89 c6                	mov    %eax,%esi
 853434e:	8b 45 08             	mov    0x8(%ebp),%eax
 8534351:	83 c0 18             	add    $0x18,%eax
 8534354:	89 c3                	mov    %eax,%ebx
 8534356:	e8 26 7e b9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 853435b:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 8534361:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8534364:	89 54 24 14          	mov    %edx,0x14(%esp)
 8534368:	89 7c 24 10          	mov    %edi,0x10(%esp)
 853436c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8534370:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8534374:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 853437b:	00 
 853437c:	89 04 24             	mov    %eax,(%esp)
 853437f:	e8 c8 45 ef ff       	call   842894c <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_>
 8534384:	8b 45 08             	mov    0x8(%ebp),%eax
 8534387:	05 d8 00 00 00       	add    $0xd8,%eax
 853438c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 853438f:	8b 45 08             	mov    0x8(%ebp),%eax
 8534392:	05 c0 00 00 00       	add    $0xc0,%eax
 8534397:	89 c7                	mov    %eax,%edi
 8534399:	8b 45 08             	mov    0x8(%ebp),%eax
 853439c:	05 a8 00 00 00       	add    $0xa8,%eax
 85343a1:	89 c6                	mov    %eax,%esi
 85343a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85343a6:	05 90 00 00 00       	add    $0x90,%eax
 85343ab:	89 c3                	mov    %eax,%ebx
 85343ad:	e8 cf 7d b9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 85343b2:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 85343b8:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85343bb:	89 54 24 14          	mov    %edx,0x14(%esp)
 85343bf:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85343c3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85343c7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85343cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85343d2:	00 
 85343d3:	89 04 24             	mov    %eax,(%esp)
 85343d6:	e8 71 45 ef ff       	call   842894c <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_>
 85343db:	8b 45 08             	mov    0x8(%ebp),%eax
 85343de:	05 50 01 00 00       	add    $0x150,%eax
 85343e3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85343e6:	8b 45 08             	mov    0x8(%ebp),%eax
 85343e9:	05 38 01 00 00       	add    $0x138,%eax
 85343ee:	89 c7                	mov    %eax,%edi
 85343f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85343f3:	05 20 01 00 00       	add    $0x120,%eax
 85343f8:	89 c6                	mov    %eax,%esi
 85343fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85343fd:	05 08 01 00 00       	add    $0x108,%eax
 8534402:	89 c3                	mov    %eax,%ebx
 8534404:	e8 78 7d b9 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8534409:	8b 80 b0 01 00 00    	mov    0x1b0(%eax),%eax
 853440f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8534412:	89 54 24 14          	mov    %edx,0x14(%esp)
 8534416:	89 7c 24 10          	mov    %edi,0x10(%esp)
 853441a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 853441e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8534422:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8534429:	00 
 853442a:	89 04 24             	mov    %eax,(%esp)
 853442d:	e8 1a 45 ef ff       	call   842894c <_ZN27DB_UpdateItemDropStatistics11makeRequestEiiPjS0_S0_S0_>
 8534432:	8b 45 08             	mov    0x8(%ebp),%eax
 8534435:	c7 44 24 08 c0 03 00 	movl   $0x3c0,0x8(%esp)
 853443c:	00 
 853443d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8534444:	00 
 8534445:	89 04 24             	mov    %eax,(%esp)
 8534448:	e8 73 98 b4 ff       	call   807dcc0 <memset@plt>
 853444d:	83 c4 3c             	add    $0x3c,%esp
 8534450:	5b                   	pop    %ebx
 8534451:	5e                   	pop    %esi
 8534452:	5f                   	pop    %edi
 8534453:	5d                   	pop    %ebp
 8534454:	c3                   	ret
 8534455:	90                   	nop

```

```c
// WongWork::CItemGeneratorMgr::onTimerEvent @ 0x8534322

/* WongWork::CItemGeneratorMgr::onTimerEvent(int) */

void __thiscall WongWork::CItemGeneratorMgr::onTimerEvent(CItemGeneratorMgr *this,int param_1)

{
  int iVar1;
  
  if (param_1 == 0x6b) {
    iVar1 = G_CEnvironment();
    DB_UpdateItemDropStatistics::makeRequest
              (*(int *)(iVar1 + 0x1b0),0,(uint *)(this + 0x18),(uint *)(this + 0x30),
               (uint *)(this + 0x48),(uint *)(this + 0x60));
    iVar1 = G_CEnvironment();
    DB_UpdateItemDropStatistics::makeRequest
              (*(int *)(iVar1 + 0x1b0),1,(uint *)(this + 0x90),(uint *)(this + 0xa8),
               (uint *)(this + 0xc0),(uint *)(this + 0xd8));
    iVar1 = G_CEnvironment();
    DB_UpdateItemDropStatistics::makeRequest
              (*(int *)(iVar1 + 0x1b0),2,(uint *)(this + 0x108),(uint *)(this + 0x120),
               (uint *)(this + 0x138),(uint *)(this + 0x150));
    memset(this,0,0x3c0);
  }
  return;
}

```

---

## onTryGenerateRandomItem

```asm
// === 085342c6 WongWork::CItemGeneratorMgr::onTryGenerateRandomItem  [0x085342c6-0x8534321] ===
 85342c6:	55                   	push   %ebp
 85342c7:	89 e5                	mov    %esp,%ebp
 85342c9:	57                   	push   %edi
 85342ca:	56                   	push   %esi
 85342cb:	53                   	push   %ebx
 85342cc:	83 ec 04             	sub    $0x4,%esp
 85342cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 85342d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85342d5:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85342d8:	8b 7d 14             	mov    0x14(%ebp),%edi
 85342db:	8b 75 08             	mov    0x8(%ebp),%esi
 85342de:	89 c8                	mov    %ecx,%eax
 85342e0:	01 c0                	add    %eax,%eax
 85342e2:	01 c8                	add    %ecx,%eax
 85342e4:	01 c0                	add    %eax,%eax
 85342e6:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85342e9:	01 d2                	add    %edx,%edx
 85342eb:	89 d3                	mov    %edx,%ebx
 85342ed:	c1 e3 04             	shl    $0x4,%ebx
 85342f0:	29 d3                	sub    %edx,%ebx
 85342f2:	01 d8                	add    %ebx,%eax
 85342f4:	01 f8                	add    %edi,%eax
 85342f6:	8b 04 86             	mov    (%esi,%eax,4),%eax
 85342f9:	8d 70 01             	lea    0x1(%eax),%esi
 85342fc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85342ff:	89 c8                	mov    %ecx,%eax
 8534301:	01 c0                	add    %eax,%eax
 8534303:	01 c8                	add    %ecx,%eax
 8534305:	01 c0                	add    %eax,%eax
 8534307:	8b 55 f0             	mov    -0x10(%ebp),%edx
 853430a:	01 d2                	add    %edx,%edx
 853430c:	89 d1                	mov    %edx,%ecx
 853430e:	c1 e1 04             	shl    $0x4,%ecx
 8534311:	29 d1                	sub    %edx,%ecx
 8534313:	01 c8                	add    %ecx,%eax
 8534315:	01 f8                	add    %edi,%eax
 8534317:	89 34 83             	mov    %esi,(%ebx,%eax,4)
 853431a:	83 c4 04             	add    $0x4,%esp
 853431d:	5b                   	pop    %ebx
 853431e:	5e                   	pop    %esi
 853431f:	5f                   	pop    %edi
 8534320:	5d                   	pop    %ebp
 8534321:	c3                   	ret

```

```c
// WongWork::CItemGeneratorMgr::onTryGenerateRandomItem @ 0x85342c6

/* WongWork::CItemGeneratorMgr::onTryGenerateRandomItem(WongWork::CItemGeneratorMgr::eGenerateType_t,
   WongWork::eItemDropType_t, ENUM_RARITY) */

void __thiscall
WongWork::CItemGeneratorMgr::onTryGenerateRandomItem
          (CItemGeneratorMgr *this,int param_2,int param_3,int param_4)

{
  *(int *)(this + (param_3 * 6 + param_2 * 0x1e) * 4 + param_4 * 4) =
       *(int *)(this + (param_3 * 6 + param_2 * 0x1e) * 4 + param_4 * 4) + 1;
  return;
}

```

---

## setDropRatio

```asm
// === 08534278 WongWork::CItemGeneratorMgr::setDropRatio  [0x08534278-0x85342c5] ===
 8534278:	55                   	push   %ebp
 8534279:	89 e5                	mov    %esp,%ebp
 853427b:	83 ec 28             	sub    $0x28,%esp
 853427e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8534285:	eb 32                	jmp    85342b9 <_ZN8WongWork17CItemGeneratorMgr12setDropRatioEf+0x41>
 8534287:	8b 55 f4             	mov    -0xc(%ebp),%edx
 853428a:	8b 45 08             	mov    0x8(%ebp),%eax
 853428d:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 8534293:	8b 04 90             	mov    (%eax,%edx,4),%eax
 8534296:	8b 00                	mov    (%eax),%eax
 8534298:	8b 08                	mov    (%eax),%ecx
 853429a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 853429d:	8b 45 08             	mov    0x8(%ebp),%eax
 85342a0:	81 c2 f0 00 00 00    	add    $0xf0,%edx
 85342a6:	8b 04 90             	mov    (%eax,%edx,4),%eax
 85342a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85342ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 85342b0:	89 04 24             	mov    %eax,(%esp)
 85342b3:	ff d1                	call   *%ecx
 85342b5:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85342b9:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85342bd:	0f 9e c0             	setle  %al
 85342c0:	84 c0                	test   %al,%al
 85342c2:	75 c3                	jne    8534287 <_ZN8WongWork17CItemGeneratorMgr12setDropRatioEf+0xf>
 85342c4:	c9                   	leave
 85342c5:	c3                   	ret

```

```c
// WongWork::CItemGeneratorMgr::setDropRatio @ 0x8534278

/* WongWork::CItemGeneratorMgr::setDropRatio(float) */

void __thiscall WongWork::CItemGeneratorMgr::setDropRatio(CItemGeneratorMgr *this,float param_1)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 8; local_10 = local_10 + 1) {
    (**(code **)**(undefined4 **)(this + (local_10 + 0xf0) * 4))
              (*(undefined4 *)(this + (local_10 + 0xf0) * 4),param_1);
  }
  return;
}

```

