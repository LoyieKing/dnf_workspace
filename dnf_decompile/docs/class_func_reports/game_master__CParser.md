# game_master__CParser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## parse

```asm
// === 084a8ab6 game_master::CParser::parse  [0x084a8ab6-0x84a8c05] ===
 84a8ab6:	55                   	push   %ebp
 84a8ab7:	89 e5                	mov    %esp,%ebp
 84a8ab9:	56                   	push   %esi
 84a8aba:	53                   	push   %ebx
 84a8abb:	83 ec 20             	sub    $0x20,%esp
 84a8abe:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8ac1:	8d 50 1c             	lea    0x1c(%eax),%edx
 84a8ac4:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8ac7:	83 c0 10             	add    $0x10,%eax
 84a8aca:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a8ace:	89 04 24             	mov    %eax,(%esp)
 84a8ad1:	e8 4a fc 25 00       	call   8708720 <_ZNSsaSEPKc>
 84a8ad6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8ad9:	83 c0 10             	add    $0x10,%eax
 84a8adc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a8ae3:	00 
 84a8ae4:	c7 44 24 04 72 fa c7 	movl   $0x8c7fa72,0x4(%esp)
 84a8aeb:	08 
 84a8aec:	89 04 24             	mov    %eax,(%esp)
 84a8aef:	e8 4c e1 25 00       	call   8706c40 <_ZNKSs4findEPKcj>
 84a8af4:	89 c2                	mov    %eax,%edx
 84a8af6:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8af9:	89 50 14             	mov    %edx,0x14(%eax)
 84a8afc:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8aff:	8b 40 14             	mov    0x14(%eax),%eax
 84a8b02:	89 c2                	mov    %eax,%edx
 84a8b04:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8b07:	8d 48 10             	lea    0x10(%eax),%ecx
 84a8b0a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84a8b0d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a8b11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84a8b18:	00 
 84a8b19:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84a8b1d:	89 04 24             	mov    %eax,(%esp)
 84a8b20:	e8 5b ed 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84a8b25:	83 ec 04             	sub    $0x4,%esp
 84a8b28:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8b2b:	8d 50 08             	lea    0x8(%eax),%edx
 84a8b2e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84a8b31:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8b35:	89 14 24             	mov    %edx,(%esp)
 84a8b38:	e8 c3 f1 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84a8b3d:	eb 1b                	jmp    84a8b5a <_ZN11game_master7CParser5parseEv+0xa4>
 84a8b3f:	89 d3                	mov    %edx,%ebx
 84a8b41:	89 c6                	mov    %eax,%esi
 84a8b43:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84a8b46:	89 04 24             	mov    %eax,(%esp)
 84a8b49:	e8 92 f0 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a8b4e:	89 f0                	mov    %esi,%eax
 84a8b50:	89 da                	mov    %ebx,%edx
 84a8b52:	89 04 24             	mov    %eax,(%esp)
 84a8b55:	e8 f6 ab 63 00       	call   8ae3750 <_Unwind_Resume>
 84a8b5a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84a8b5d:	89 04 24             	mov    %eax,(%esp)
 84a8b60:	e8 7b f0 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a8b65:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8b68:	8b 40 14             	mov    0x14(%eax),%eax
 84a8b6b:	83 c0 01             	add    $0x1,%eax
 84a8b6e:	89 c2                	mov    %eax,%edx
 84a8b70:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8b73:	8d 48 10             	lea    0x10(%eax),%ecx
 84a8b76:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84a8b79:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 84a8b80:	ff 
 84a8b81:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a8b85:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 84a8b89:	89 04 24             	mov    %eax,(%esp)
 84a8b8c:	e8 ef ec 25 00       	call   8707880 <_ZNKSs6substrEjj>
 84a8b91:	83 ec 04             	sub    $0x4,%esp
 84a8b94:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8b97:	8d 50 0c             	lea    0xc(%eax),%edx
 84a8b9a:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84a8b9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a8ba1:	89 14 24             	mov    %edx,(%esp)
 84a8ba4:	e8 57 f1 25 00       	call   8707d00 <_ZNSsaSERKSs>
 84a8ba9:	eb 1b                	jmp    84a8bc6 <_ZN11game_master7CParser5parseEv+0x110>
 84a8bab:	89 d3                	mov    %edx,%ebx
 84a8bad:	89 c6                	mov    %eax,%esi
 84a8baf:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84a8bb2:	89 04 24             	mov    %eax,(%esp)
 84a8bb5:	e8 26 f0 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a8bba:	89 f0                	mov    %esi,%eax
 84a8bbc:	89 da                	mov    %ebx,%edx
 84a8bbe:	89 04 24             	mov    %eax,(%esp)
 84a8bc1:	e8 8a ab 63 00       	call   8ae3750 <_Unwind_Resume>
 84a8bc6:	8d 45 f4             	lea    -0xc(%ebp),%eax
 84a8bc9:	89 04 24             	mov    %eax,(%esp)
 84a8bcc:	e8 0f f0 25 00       	call   8707be0 <_ZNSsD1Ev>
 84a8bd1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8bd4:	83 c0 08             	add    $0x8,%eax
 84a8bd7:	89 04 24             	mov    %eax,(%esp)
 84a8bda:	e8 89 64 df ff       	call   829f068 <_Z4trimRSs>
 84a8bdf:	8b 45 08             	mov    0x8(%ebp),%eax
 84a8be2:	83 c0 08             	add    $0x8,%eax
 84a8be5:	89 04 24             	mov    %eax,(%esp)
 84a8be8:	e8 03 d9 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84a8bed:	89 04 24             	mov    %eax,(%esp)
 84a8bf0:	e8 fb 5a bd ff       	call   807e6f0 <atoi@plt>
 84a8bf5:	8b 55 08             	mov    0x8(%ebp),%edx
 84a8bf8:	89 42 18             	mov    %eax,0x18(%edx)
 84a8bfb:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84a8bfe:	83 c4 00             	add    $0x0,%esp
 84a8c01:	5b                   	pop    %ebx
 84a8c02:	5e                   	pop    %esi
 84a8c03:	5d                   	pop    %ebp
 84a8c04:	c3                   	ret
 84a8c05:	90                   	nop

```

```c
// game_master::CParser::parse @ 0x84a8ab6

/* game_master::CParser::parse() */

void __thiscall game_master::CParser::parse(CParser *this)

{
  undefined4 uVar1;
  char *__nptr;
  int iVar2;
  string local_14 [4];
  string local_10 [4];
  
  std::string::operator=((string *)(this + 0x10),(char *)(this + 0x1c));
  uVar1 = std::string::find((string *)(this + 0x10)," ",0);
  *(undefined4 *)(this + 0x14) = uVar1;
  std::string::substr((uint)local_14,(uint)(this + 0x10));
                    /* try { // try from 084a8b38 to 084a8b3c has its CatchHandler @ 084a8b3f */
  std::string::operator=((string *)(this + 8),local_14);
  std::string::~string(local_14);
  std::string::substr((uint)local_10,(uint)(this + 0x10));
                    /* try { // try from 084a8ba4 to 084a8ba8 has its CatchHandler @ 084a8bab */
  std::string::operator=((string *)(this + 0xc),local_10);
  std::string::~string(local_10);
  trim((string *)(this + 8));
  __nptr = (char *)std::string::c_str((string *)(this + 8));
  iVar2 = atoi(__nptr);
  *(int *)(this + 0x18) = iVar2;
  return;
}

```

