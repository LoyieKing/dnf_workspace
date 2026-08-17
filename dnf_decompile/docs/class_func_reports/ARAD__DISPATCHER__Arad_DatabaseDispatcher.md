# ARAD__DISPATCHER__Arad_DatabaseDispatcher

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## Arad_DatabaseDispatcher

```asm
// === 08184c7c ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher  [0x08184c7c-0x8184cbd] ===
 8184c7c:	55                   	push   %ebp
 8184c7d:	89 e5                	mov    %esp,%ebp
 8184c7f:	56                   	push   %esi
 8184c80:	53                   	push   %ebx
 8184c81:	83 ec 10             	sub    $0x10,%esp
 8184c84:	8b 45 08             	mov    0x8(%ebp),%eax
 8184c87:	89 04 24             	mov    %eax,(%esp)
 8184c8a:	e8 bd 1f 00 00       	call   8186c4c <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEEC1Ev>
 8184c8f:	8b 45 08             	mov    0x8(%ebp),%eax
 8184c92:	89 04 24             	mov    %eax,(%esp)
 8184c95:	e8 2c 20 00 00       	call   8186cc6 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE5clearEv>
 8184c9a:	eb 1b                	jmp    8184cb7 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcherC1Ev+0x3b>
 8184c9c:	89 d3                	mov    %edx,%ebx
 8184c9e:	89 c6                	mov    %eax,%esi
 8184ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 8184ca3:	89 04 24             	mov    %eax,(%esp)
 8184ca6:	e8 8d 1f 00 00       	call   8186c38 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8184cab:	89 f0                	mov    %esi,%eax
 8184cad:	89 da                	mov    %ebx,%edx
 8184caf:	89 04 24             	mov    %eax,(%esp)
 8184cb2:	e8 99 ea 95 00       	call   8ae3750 <_Unwind_Resume>
 8184cb7:	83 c4 10             	add    $0x10,%esp
 8184cba:	5b                   	pop    %ebx
 8184cbb:	5e                   	pop    %esi
 8184cbc:	5d                   	pop    %ebp
 8184cbd:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher @ 0x8184c7c

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::Arad_DatabaseDispatcher(Arad_DatabaseDispatcher *this)

{
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
         *)this);
                    /* try { // try from 08184c95 to 08184c99 has its CatchHandler @ 08184c9c */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::clear((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
           *)this);
  return;
}

```

---

## GetDispatcher

```asm
// === 081850e0 ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher  [0x081850e0-0x8185143] ===
 81850e0:	55                   	push   %ebp
 81850e1:	89 e5                	mov    %esp,%ebp
 81850e3:	83 ec 28             	sub    $0x28,%esp
 81850e6:	8b 55 08             	mov    0x8(%ebp),%edx
 81850e9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81850ec:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81850ef:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81850f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 81850f7:	89 04 24             	mov    %eax,(%esp)
 81850fa:	e8 77 1c 00 00       	call   8186d76 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 81850ff:	83 ec 04             	sub    $0x4,%esp
 8185102:	8b 55 08             	mov    0x8(%ebp),%edx
 8185105:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8185108:	89 54 24 04          	mov    %edx,0x4(%esp)
 818510c:	89 04 24             	mov    %eax,(%esp)
 818510f:	e8 ec 1b 00 00       	call   8186d00 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 8185114:	83 ec 04             	sub    $0x4,%esp
 8185117:	8d 45 f4             	lea    -0xc(%ebp),%eax
 818511a:	89 44 24 04          	mov    %eax,0x4(%esp)
 818511e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8185121:	89 04 24             	mov    %eax,(%esp)
 8185124:	e8 79 1c 00 00       	call   8186da2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN4ARAD23ENUM_INTERNALPACKET_JPNEPNS1_10DISPATCHER24Arad_IDatabaseDispatcherEEEneERKS8_>
 8185129:	84 c0                	test   %al,%al
 818512b:	74 10                	je     818513d <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE+0x5d>
 818512d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8185130:	89 04 24             	mov    %eax,(%esp)
 8185133:	e8 7e 1c 00 00       	call   8186db6 <_ZNKSt17_Rb_tree_iteratorISt4pairIKN4ARAD23ENUM_INTERNALPACKET_JPNEPNS1_10DISPATCHER24Arad_IDatabaseDispatcherEEEptEv>
 8185138:	8b 40 04             	mov    0x4(%eax),%eax
 818513b:	eb 05                	jmp    8185142 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE+0x62>
 818513d:	b8 00 00 00 00       	mov    $0x0,%eax
 8185142:	c9                   	leave
 8185143:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher @ 0x81850e0

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

undefined4 ARAD::DISPATCHER::Arad_DatabaseDispatcher::GetDispatcher(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>
  local_14 [4];
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  local_10 [12];
  
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::find(local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::end(local_10);
  cVar1 = std::
          _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>
          ::operator!=(local_14,(_Rb_tree_iterator *)local_10);
  if (cVar1 == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = std::
            _Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>
            ::operator->(local_14);
    uVar3 = *(undefined4 *)(iVar2 + 4);
  }
  return uVar3;
}

```

---

## Init

```asm
// === 08184d40 ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init  [0x08184d40-0x81850df] ===
 8184d40:	55                   	push   %ebp
 8184d41:	89 e5                	mov    %esp,%ebp
 8184d43:	53                   	push   %ebx
 8184d44:	83 ec 24             	sub    $0x24,%esp
 8184d47:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8184d4e:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184d55:	e8 f6 f6 59 00       	call   8724450 <_Znwj>
 8184d5a:	89 c3                	mov    %eax,%ebx
 8184d5c:	89 d8                	mov    %ebx,%eax
 8184d5e:	89 04 24             	mov    %eax,(%esp)
 8184d61:	e8 d0 1a 00 00       	call   8186836 <_ZN4ARAD10DISPATCHER25Arad_DB_kAradEventItemLogC1Ev>
 8184d66:	89 d8                	mov    %ebx,%eax
 8184d68:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184d6b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184d6f:	74 2f                	je     8184da0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x60>
 8184d71:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184d74:	89 04 24             	mov    %eax,(%esp)
 8184d77:	e8 84 1a 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184d7c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184d7f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184d83:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184d87:	8b 45 08             	mov    0x8(%ebp),%eax
 8184d8a:	89 04 24             	mov    %eax,(%esp)
 8184d8d:	e8 b2 03 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184d92:	83 f0 01             	xor    $0x1,%eax
 8184d95:	84 c0                	test   %al,%al
 8184d97:	74 07                	je     8184da0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x60>
 8184d99:	b8 01 00 00 00       	mov    $0x1,%eax
 8184d9e:	eb 05                	jmp    8184da5 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x65>
 8184da0:	b8 00 00 00 00       	mov    $0x0,%eax
 8184da5:	84 c0                	test   %al,%al
 8184da7:	74 0a                	je     8184db3 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x73>
 8184da9:	b8 00 00 00 00       	mov    $0x0,%eax
 8184dae:	e9 27 03 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8184db3:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184dba:	e8 91 f6 59 00       	call   8724450 <_Znwj>
 8184dbf:	89 c3                	mov    %eax,%ebx
 8184dc1:	89 d8                	mov    %ebx,%eax
 8184dc3:	89 04 24             	mov    %eax,(%esp)
 8184dc6:	e8 dd 1a 00 00       	call   81868a8 <_ZN4ARAD10DISPATCHER28Arad_DB_kSetCharacCreateTimeC1Ev>
 8184dcb:	89 d8                	mov    %ebx,%eax
 8184dcd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184dd0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184dd4:	74 2f                	je     8184e05 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0xc5>
 8184dd6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184dd9:	89 04 24             	mov    %eax,(%esp)
 8184ddc:	e8 1f 1a 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184de1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184de4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184de8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184dec:	8b 45 08             	mov    0x8(%ebp),%eax
 8184def:	89 04 24             	mov    %eax,(%esp)
 8184df2:	e8 4d 03 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184df7:	83 f0 01             	xor    $0x1,%eax
 8184dfa:	84 c0                	test   %al,%al
 8184dfc:	74 07                	je     8184e05 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0xc5>
 8184dfe:	b8 01 00 00 00       	mov    $0x1,%eax
 8184e03:	eb 05                	jmp    8184e0a <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0xca>
 8184e05:	b8 00 00 00 00       	mov    $0x0,%eax
 8184e0a:	84 c0                	test   %al,%al
 8184e0c:	74 0a                	je     8184e18 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0xd8>
 8184e0e:	b8 00 00 00 00       	mov    $0x0,%eax
 8184e13:	e9 c2 02 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8184e18:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184e1f:	e8 2c f6 59 00       	call   8724450 <_Znwj>
 8184e24:	89 c3                	mov    %eax,%ebx
 8184e26:	89 d8                	mov    %ebx,%eax
 8184e28:	89 04 24             	mov    %eax,(%esp)
 8184e2b:	e8 ea 1a 00 00       	call   818691a <_ZN4ARAD10DISPATCHER28Arad_DB_kLoadRewardEventItemC1Ev>
 8184e30:	89 d8                	mov    %ebx,%eax
 8184e32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184e35:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184e39:	74 2f                	je     8184e6a <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x12a>
 8184e3b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184e3e:	89 04 24             	mov    %eax,(%esp)
 8184e41:	e8 ba 19 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184e46:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184e49:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184e4d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184e51:	8b 45 08             	mov    0x8(%ebp),%eax
 8184e54:	89 04 24             	mov    %eax,(%esp)
 8184e57:	e8 e8 02 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184e5c:	83 f0 01             	xor    $0x1,%eax
 8184e5f:	84 c0                	test   %al,%al
 8184e61:	74 07                	je     8184e6a <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x12a>
 8184e63:	b8 01 00 00 00       	mov    $0x1,%eax
 8184e68:	eb 05                	jmp    8184e6f <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x12f>
 8184e6a:	b8 00 00 00 00       	mov    $0x0,%eax
 8184e6f:	84 c0                	test   %al,%al
 8184e71:	74 0a                	je     8184e7d <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x13d>
 8184e73:	b8 00 00 00 00       	mov    $0x0,%eax
 8184e78:	e9 5d 02 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8184e7d:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184e84:	e8 c7 f5 59 00       	call   8724450 <_Znwj>
 8184e89:	89 c3                	mov    %eax,%ebx
 8184e8b:	89 d8                	mov    %ebx,%eax
 8184e8d:	89 04 24             	mov    %eax,(%esp)
 8184e90:	e8 f7 1a 00 00       	call   818698c <_ZN4ARAD10DISPATCHER28Arad_DB_kSaveRewardEventItemC1Ev>
 8184e95:	89 d8                	mov    %ebx,%eax
 8184e97:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184e9a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184e9e:	74 2f                	je     8184ecf <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x18f>
 8184ea0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184ea3:	89 04 24             	mov    %eax,(%esp)
 8184ea6:	e8 55 19 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184eab:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184eae:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184eb2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184eb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8184eb9:	89 04 24             	mov    %eax,(%esp)
 8184ebc:	e8 83 02 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184ec1:	83 f0 01             	xor    $0x1,%eax
 8184ec4:	84 c0                	test   %al,%al
 8184ec6:	74 07                	je     8184ecf <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x18f>
 8184ec8:	b8 01 00 00 00       	mov    $0x1,%eax
 8184ecd:	eb 05                	jmp    8184ed4 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x194>
 8184ecf:	b8 00 00 00 00       	mov    $0x0,%eax
 8184ed4:	84 c0                	test   %al,%al
 8184ed6:	74 0a                	je     8184ee2 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x1a2>
 8184ed8:	b8 00 00 00 00       	mov    $0x0,%eax
 8184edd:	e9 f8 01 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8184ee2:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184ee9:	e8 62 f5 59 00       	call   8724450 <_Znwj>
 8184eee:	89 c3                	mov    %eax,%ebx
 8184ef0:	89 d8                	mov    %ebx,%eax
 8184ef2:	89 04 24             	mov    %eax,(%esp)
 8184ef5:	e8 04 1b 00 00       	call   81869fe <_ZN4ARAD10DISPATCHER24Arad_DB_kSaveServerStateC1Ev>
 8184efa:	89 d8                	mov    %ebx,%eax
 8184efc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184eff:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184f03:	74 2f                	je     8184f34 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x1f4>
 8184f05:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184f08:	89 04 24             	mov    %eax,(%esp)
 8184f0b:	e8 f0 18 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184f10:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184f13:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184f17:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8184f1e:	89 04 24             	mov    %eax,(%esp)
 8184f21:	e8 1e 02 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184f26:	83 f0 01             	xor    $0x1,%eax
 8184f29:	84 c0                	test   %al,%al
 8184f2b:	74 07                	je     8184f34 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x1f4>
 8184f2d:	b8 01 00 00 00       	mov    $0x1,%eax
 8184f32:	eb 05                	jmp    8184f39 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x1f9>
 8184f34:	b8 00 00 00 00       	mov    $0x0,%eax
 8184f39:	84 c0                	test   %al,%al
 8184f3b:	74 0a                	je     8184f47 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x207>
 8184f3d:	b8 00 00 00 00       	mov    $0x0,%eax
 8184f42:	e9 93 01 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8184f47:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184f4e:	e8 fd f4 59 00       	call   8724450 <_Znwj>
 8184f53:	89 c3                	mov    %eax,%ebx
 8184f55:	89 d8                	mov    %ebx,%eax
 8184f57:	89 04 24             	mov    %eax,(%esp)
 8184f5a:	e8 11 1b 00 00       	call   8186a70 <_ZN4ARAD10DISPATCHER24Arad_DB_kLoadServerStateC1Ev>
 8184f5f:	89 d8                	mov    %ebx,%eax
 8184f61:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184f64:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184f68:	74 2f                	je     8184f99 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x259>
 8184f6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184f6d:	89 04 24             	mov    %eax,(%esp)
 8184f70:	e8 8b 18 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184f75:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184f78:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184f7c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184f80:	8b 45 08             	mov    0x8(%ebp),%eax
 8184f83:	89 04 24             	mov    %eax,(%esp)
 8184f86:	e8 b9 01 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184f8b:	83 f0 01             	xor    $0x1,%eax
 8184f8e:	84 c0                	test   %al,%al
 8184f90:	74 07                	je     8184f99 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x259>
 8184f92:	b8 01 00 00 00       	mov    $0x1,%eax
 8184f97:	eb 05                	jmp    8184f9e <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x25e>
 8184f99:	b8 00 00 00 00       	mov    $0x0,%eax
 8184f9e:	84 c0                	test   %al,%al
 8184fa0:	74 0a                	je     8184fac <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x26c>
 8184fa2:	b8 00 00 00 00       	mov    $0x0,%eax
 8184fa7:	e9 2e 01 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8184fac:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8184fb3:	e8 98 f4 59 00       	call   8724450 <_Znwj>
 8184fb8:	89 c3                	mov    %eax,%ebx
 8184fba:	89 d8                	mov    %ebx,%eax
 8184fbc:	89 04 24             	mov    %eax,(%esp)
 8184fbf:	e8 1e 1b 00 00       	call   8186ae2 <_ZN4ARAD10DISPATCHER31Arad_DB_kAvatarHiddenOptionSaveC1Ev>
 8184fc4:	89 d8                	mov    %ebx,%eax
 8184fc6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8184fc9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8184fcd:	74 2f                	je     8184ffe <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x2be>
 8184fcf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8184fd2:	89 04 24             	mov    %eax,(%esp)
 8184fd5:	e8 26 18 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 8184fda:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184fdd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184fe1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8184fe5:	8b 45 08             	mov    0x8(%ebp),%eax
 8184fe8:	89 04 24             	mov    %eax,(%esp)
 8184feb:	e8 54 01 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8184ff0:	83 f0 01             	xor    $0x1,%eax
 8184ff3:	84 c0                	test   %al,%al
 8184ff5:	74 07                	je     8184ffe <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x2be>
 8184ff7:	b8 01 00 00 00       	mov    $0x1,%eax
 8184ffc:	eb 05                	jmp    8185003 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x2c3>
 8184ffe:	b8 00 00 00 00       	mov    $0x0,%eax
 8185003:	84 c0                	test   %al,%al
 8185005:	74 0a                	je     8185011 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x2d1>
 8185007:	b8 00 00 00 00       	mov    $0x0,%eax
 818500c:	e9 c9 00 00 00       	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8185011:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 8185018:	e8 33 f4 59 00       	call   8724450 <_Znwj>
 818501d:	89 c3                	mov    %eax,%ebx
 818501f:	89 d8                	mov    %ebx,%eax
 8185021:	89 04 24             	mov    %eax,(%esp)
 8185024:	e8 2b 1b 00 00       	call   8186b54 <_ZN4ARAD10DISPATCHER28Arad_DB_kAvatarEnduranceSaveC1Ev>
 8185029:	89 d8                	mov    %ebx,%eax
 818502b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 818502e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8185032:	74 2f                	je     8185063 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x323>
 8185034:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185037:	89 04 24             	mov    %eax,(%esp)
 818503a:	e8 c1 17 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 818503f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8185042:	89 54 24 08          	mov    %edx,0x8(%esp)
 8185046:	89 44 24 04          	mov    %eax,0x4(%esp)
 818504a:	8b 45 08             	mov    0x8(%ebp),%eax
 818504d:	89 04 24             	mov    %eax,(%esp)
 8185050:	e8 ef 00 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 8185055:	83 f0 01             	xor    $0x1,%eax
 8185058:	84 c0                	test   %al,%al
 818505a:	74 07                	je     8185063 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x323>
 818505c:	b8 01 00 00 00       	mov    $0x1,%eax
 8185061:	eb 05                	jmp    8185068 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x328>
 8185063:	b8 00 00 00 00       	mov    $0x0,%eax
 8185068:	84 c0                	test   %al,%al
 818506a:	74 07                	je     8185073 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x333>
 818506c:	b8 00 00 00 00       	mov    $0x0,%eax
 8185071:	eb 67                	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 8185073:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 818507a:	e8 d1 f3 59 00       	call   8724450 <_Znwj>
 818507f:	89 c3                	mov    %eax,%ebx
 8185081:	89 d8                	mov    %ebx,%eax
 8185083:	89 04 24             	mov    %eax,(%esp)
 8185086:	e8 3b 1b 00 00       	call   8186bc6 <_ZN4ARAD10DISPATCHER39Arad_DB_kResetLimitedCreateCharacPerMidC1Ev>
 818508b:	89 d8                	mov    %ebx,%eax
 818508d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8185090:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8185094:	74 2f                	je     81850c5 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x385>
 8185096:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8185099:	89 04 24             	mov    %eax,(%esp)
 818509c:	e8 5f 17 00 00       	call   8186800 <_ZNK4ARAD10DISPATCHER24Arad_IDatabaseDispatcher8get_codeEv>
 81850a1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81850a4:	89 54 24 08          	mov    %edx,0x8(%esp)
 81850a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81850ac:	8b 45 08             	mov    0x8(%ebp),%eax
 81850af:	89 04 24             	mov    %eax,(%esp)
 81850b2:	e8 8d 00 00 00       	call   8185144 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE>
 81850b7:	83 f0 01             	xor    $0x1,%eax
 81850ba:	84 c0                	test   %al,%al
 81850bc:	74 07                	je     81850c5 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x385>
 81850be:	b8 01 00 00 00       	mov    $0x1,%eax
 81850c3:	eb 05                	jmp    81850ca <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x38a>
 81850c5:	b8 00 00 00 00       	mov    $0x0,%eax
 81850ca:	84 c0                	test   %al,%al
 81850cc:	74 07                	je     81850d5 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x395>
 81850ce:	b8 00 00 00 00       	mov    $0x0,%eax
 81850d3:	eb 05                	jmp    81850da <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher4InitEv+0x39a>
 81850d5:	b8 01 00 00 00       	mov    $0x1,%eax
 81850da:	83 c4 24             	add    $0x24,%esp
 81850dd:	5b                   	pop    %ebx
 81850de:	5d                   	pop    %ebp
 81850df:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init @ 0x8184d40

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init() */

bool __thiscall ARAD::DISPATCHER::Arad_DatabaseDispatcher::Init(Arad_DatabaseDispatcher *this)

{
  bool bVar1;
  char cVar2;
  Arad_DB_kAradEventItemLog *this_00;
  undefined4 uVar3;
  Arad_DB_kSetCharacCreateTime *this_01;
  Arad_DB_kLoadRewardEventItem *this_02;
  Arad_DB_kSaveRewardEventItem *this_03;
  Arad_DB_kSaveServerState *this_04;
  Arad_DB_kLoadServerState *this_05;
  Arad_DB_kAvatarHiddenOptionSave *this_06;
  Arad_DB_kAvatarEnduranceSave *this_07;
  Arad_DB_kResetLimitedCreateCharacPerMid *this_08;
  
  this_00 = operator_new(8);
  Arad_DB_kAradEventItemLog::Arad_DB_kAradEventItemLog(this_00);
  if (this_00 == (Arad_DB_kAradEventItemLog *)0x0) {
LAB_08184da0:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_00);
    cVar2 = _registDispatcher(this,uVar3,this_00);
    if (cVar2 == '\x01') goto LAB_08184da0;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_01 = operator_new(8);
  Arad_DB_kSetCharacCreateTime::Arad_DB_kSetCharacCreateTime(this_01);
  if (this_01 == (Arad_DB_kSetCharacCreateTime *)0x0) {
LAB_08184e05:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_01);
    cVar2 = _registDispatcher(this,uVar3,this_01);
    if (cVar2 == '\x01') goto LAB_08184e05;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_02 = operator_new(8);
  Arad_DB_kLoadRewardEventItem::Arad_DB_kLoadRewardEventItem(this_02);
  if (this_02 == (Arad_DB_kLoadRewardEventItem *)0x0) {
LAB_08184e6a:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_02);
    cVar2 = _registDispatcher(this,uVar3,this_02);
    if (cVar2 == '\x01') goto LAB_08184e6a;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_03 = operator_new(8);
  Arad_DB_kSaveRewardEventItem::Arad_DB_kSaveRewardEventItem(this_03);
  if (this_03 == (Arad_DB_kSaveRewardEventItem *)0x0) {
LAB_08184ecf:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_03);
    cVar2 = _registDispatcher(this,uVar3,this_03);
    if (cVar2 == '\x01') goto LAB_08184ecf;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_04 = operator_new(8);
  Arad_DB_kSaveServerState::Arad_DB_kSaveServerState(this_04);
  if (this_04 == (Arad_DB_kSaveServerState *)0x0) {
LAB_08184f34:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_04);
    cVar2 = _registDispatcher(this,uVar3,this_04);
    if (cVar2 == '\x01') goto LAB_08184f34;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_05 = operator_new(8);
  Arad_DB_kLoadServerState::Arad_DB_kLoadServerState(this_05);
  if (this_05 == (Arad_DB_kLoadServerState *)0x0) {
LAB_08184f99:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_05);
    cVar2 = _registDispatcher(this,uVar3,this_05);
    if (cVar2 == '\x01') goto LAB_08184f99;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_06 = operator_new(8);
  Arad_DB_kAvatarHiddenOptionSave::Arad_DB_kAvatarHiddenOptionSave(this_06);
  if (this_06 == (Arad_DB_kAvatarHiddenOptionSave *)0x0) {
LAB_08184ffe:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_06);
    cVar2 = _registDispatcher(this,uVar3,this_06);
    if (cVar2 == '\x01') goto LAB_08184ffe;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_07 = operator_new(8);
  Arad_DB_kAvatarEnduranceSave::Arad_DB_kAvatarEnduranceSave(this_07);
  if (this_07 == (Arad_DB_kAvatarEnduranceSave *)0x0) {
LAB_08185063:
    bVar1 = false;
  }
  else {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_07);
    cVar2 = _registDispatcher(this,uVar3,this_07);
    if (cVar2 == '\x01') goto LAB_08185063;
    bVar1 = true;
  }
  if (bVar1) {
    return false;
  }
  this_08 = operator_new(8);
  Arad_DB_kResetLimitedCreateCharacPerMid::Arad_DB_kResetLimitedCreateCharacPerMid(this_08);
  if (this_08 != (Arad_DB_kResetLimitedCreateCharacPerMid *)0x0) {
    uVar3 = Arad_IDatabaseDispatcher::get_code((Arad_IDatabaseDispatcher *)this_08);
    cVar2 = _registDispatcher(this,uVar3,this_08);
    if (cVar2 != '\x01') {
      bVar1 = true;
      goto LAB_081850ca;
    }
  }
  bVar1 = false;
LAB_081850ca:
  return !bVar1;
}

```

---

## _registDispatcher

```asm
// === 08185144 ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher  [0x08185144-0x8185189] ===
 8185144:	55                   	push   %ebp
 8185145:	89 e5                	mov    %esp,%ebp
 8185147:	83 ec 18             	sub    $0x18,%esp
 818514a:	8b 45 0c             	mov    0xc(%ebp),%eax
 818514d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8185151:	8b 45 08             	mov    0x8(%ebp),%eax
 8185154:	89 04 24             	mov    %eax,(%esp)
 8185157:	e8 84 ff ff ff       	call   81850e0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>
 818515c:	85 c0                	test   %eax,%eax
 818515e:	0f 95 c0             	setne  %al
 8185161:	84 c0                	test   %al,%al
 8185163:	74 07                	je     818516c <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE+0x28>
 8185165:	b8 00 00 00 00       	mov    $0x0,%eax
 818516a:	eb 1c                	jmp    8185188 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher17_registDispatcherENS_23ENUM_INTERNALPACKET_JPNEPNS0_24Arad_IDatabaseDispatcherE+0x44>
 818516c:	8b 45 08             	mov    0x8(%ebp),%eax
 818516f:	8d 55 0c             	lea    0xc(%ebp),%edx
 8185172:	89 54 24 04          	mov    %edx,0x4(%esp)
 8185176:	89 04 24             	mov    %eax,(%esp)
 8185179:	e8 46 1c 00 00       	call   8186dc4 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEEixERS8_>
 818517e:	8b 55 10             	mov    0x10(%ebp),%edx
 8185181:	89 10                	mov    %edx,(%eax)
 8185183:	b8 01 00 00 00       	mov    $0x1,%eax
 8185188:	c9                   	leave
 8185189:	c3                   	ret

```

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher @ 0x8185144

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher(ARAD::ENUM_INTERNALPACKET_JPN,
   ARAD::DISPATCHER::Arad_IDatabaseDispatcher*) */

bool __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::_registDispatcher
          (Arad_DatabaseDispatcher *this,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)
             std::
             map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
             ::operator[]((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
                           *)this,(ENUM_INTERNALPACKET_JPN *)&param_2);
    *puVar2 = param_3;
  }
  return iVar1 == 0;
}

```

---

## _unregistDispatcher

```asm
// === 0818518a ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher  [0x0818518a-0x81851db] ===
 818518a:	55                   	push   %ebp
 818518b:	89 e5                	mov    %esp,%ebp
 818518d:	83 ec 28             	sub    $0x28,%esp
 8185190:	8b 45 0c             	mov    0xc(%ebp),%eax
 8185193:	89 44 24 04          	mov    %eax,0x4(%esp)
 8185197:	8b 45 08             	mov    0x8(%ebp),%eax
 818519a:	89 04 24             	mov    %eax,(%esp)
 818519d:	e8 3e ff ff ff       	call   81850e0 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher13GetDispatcherENS_23ENUM_INTERNALPACKET_JPNE>
 81851a2:	85 c0                	test   %eax,%eax
 81851a4:	0f 95 c0             	setne  %al
 81851a7:	84 c0                	test   %al,%al
 81851a9:	74 2e                	je     81851d9 <_ZN4ARAD10DISPATCHER23Arad_DatabaseDispatcher19_unregistDispatcherENS_23ENUM_INTERNALPACKET_JPNE+0x4f>
 81851ab:	8b 55 08             	mov    0x8(%ebp),%edx
 81851ae:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81851b1:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 81851b4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81851b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81851bc:	89 04 24             	mov    %eax,(%esp)
 81851bf:	e8 b2 1b 00 00       	call   8186d76 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE4findERS8_>
 81851c4:	83 ec 04             	sub    $0x4,%esp
 81851c7:	8b 45 08             	mov    0x8(%ebp),%eax
 81851ca:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81851cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81851d1:	89 04 24             	mov    %eax,(%esp)
 81851d4:	e8 e1 1c 00 00       	call   8186eba <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE5eraseESt17_Rb_tree_iteratorIS9_E>
 81851d9:	c9                   	leave
 81851da:	c3                   	ret
 81851db:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher @ 0x818518a

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher(ARAD::ENUM_INTERNALPACKET_JPN) */

void __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::_unregistDispatcher
          (Arad_DatabaseDispatcher *this,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_10 [3];
  
  iVar1 = GetDispatcher(this,param_2);
  if (iVar1 != 0) {
    puVar2 = &param_2;
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
    ::find((ENUM_INTERNALPACKET_JPN *)local_10);
    std::
    map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
    ::erase((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
             *)this,local_10[0],puVar2);
  }
  return;
}

```

---

## ~Arad_DatabaseDispatcher

```asm
// === 08184cbe ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher  [0x08184cbe-0x8184d3f] ===
 8184cbe:	55                   	push   %ebp
 8184cbf:	89 e5                	mov    %esp,%ebp
 8184cc1:	56                   	push   %esi
 8184cc2:	53                   	push   %ebx
 8184cc3:	83 ec 20             	sub    $0x20,%esp
 8184cc6:	8b 55 08             	mov    0x8(%ebp),%edx
 8184cc9:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8184ccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8184cd0:	89 04 24             	mov    %eax,(%esp)
 8184cd3:	e8 28 20 00 00       	call   8186d00 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE3endEv>
 8184cd8:	83 ec 04             	sub    $0x4,%esp
 8184cdb:	8b 55 08             	mov    0x8(%ebp),%edx
 8184cde:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8184ce1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8184ce5:	89 04 24             	mov    %eax,(%esp)
 8184ce8:	e8 ed 1f 00 00       	call   8186cda <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEE5beginEv>
 8184ced:	83 ec 04             	sub    $0x4,%esp
 8184cf0:	8d 45 ef             	lea    -0x11(%ebp),%eax
 8184cf3:	88 5c 24 0c          	mov    %bl,0xc(%esp)
 8184cf7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8184cfa:	89 54 24 08          	mov    %edx,0x8(%esp)
 8184cfe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8184d01:	89 54 24 04          	mov    %edx,0x4(%esp)
 8184d05:	89 04 24             	mov    %eax,(%esp)
 8184d08:	e8 18 20 00 00       	call   8186d25 <_ZSt8for_eachISt17_Rb_tree_iteratorISt4pairIKN4ARAD23ENUM_INTERNALPACKET_JPNEPNS2_10DISPATCHER24Arad_IDatabaseDispatcherEEENS5_23Arad_DatabaseDispatcher16DeleteDispatcherEET0_T_SD_SC_>
 8184d0d:	83 ec 04             	sub    $0x4,%esp
 8184d10:	8b 45 08             	mov    0x8(%ebp),%eax
 8184d13:	89 04 24             	mov    %eax,(%esp)
 8184d16:	e8 1d 1f 00 00       	call   8186c38 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8184d1b:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8184d1e:	83 c4 00             	add    $0x0,%esp
 8184d21:	5b                   	pop    %ebx
 8184d22:	5e                   	pop    %esi
 8184d23:	5d                   	pop    %ebp
 8184d24:	c3                   	ret
 8184d25:	89 d3                	mov    %edx,%ebx
 8184d27:	89 c6                	mov    %eax,%esi
 8184d29:	8b 45 08             	mov    0x8(%ebp),%eax
 8184d2c:	89 04 24             	mov    %eax,(%esp)
 8184d2f:	e8 04 1f 00 00       	call   8186c38 <_ZNSt3mapIN4ARAD23ENUM_INTERNALPACKET_JPNEPNS0_10DISPATCHER24Arad_IDatabaseDispatcherESt4lessIS1_ESaISt4pairIKS1_S4_EEED1Ev>
 8184d34:	89 f0                	mov    %esi,%eax
 8184d36:	89 da                	mov    %ebx,%edx
 8184d38:	89 04 24             	mov    %eax,(%esp)
 8184d3b:	e8 10 ea 95 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher @ 0x8184cbe

/* ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher() */

void __thiscall
ARAD::DISPATCHER::Arad_DatabaseDispatcher::~Arad_DatabaseDispatcher(Arad_DatabaseDispatcher *this)

{
  undefined1 local_15;
  undefined4 local_14;
  undefined4 local_10;
  
                    /* try { // try from 08184cd3 to 08184d0c has its CatchHandler @ 08184d25 */
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::end((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
         *)&local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::begin((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
           *)&local_10);
  std::
  for_each<std::_Rb_tree_iterator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>,ARAD::DISPATCHER::Arad_DatabaseDispatcher::DeleteDispatcher>
            (&local_15,local_10,local_14);
  std::
  map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
  ::~map((map<ARAD::ENUM_INTERNALPACKET_JPN,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*,std::less<ARAD::ENUM_INTERNALPACKET_JPN>,std::allocator<std::pair<ARAD::ENUM_INTERNALPACKET_JPN_const,ARAD::DISPATCHER::Arad_IDatabaseDispatcher*>>>
          *)this);
  return;
}

```

