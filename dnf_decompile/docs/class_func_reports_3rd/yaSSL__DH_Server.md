# yaSSL__DH_Server

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## DH_Server

```asm
// === 08746da0 yaSSL::DH_Server::DH_Server  [0x08746da0-0x8746def] ===
 8746da0:	55                   	push   %ebp
 8746da1:	89 e5                	mov    %esp,%ebp
 8746da3:	83 ec 18             	sub    $0x18,%esp
 8746da6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8746da9:	e8 4a c0 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8746dae:	81 c3 ea 5d c2 00    	add    $0xc25dea,%ebx
 8746db4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8746db7:	8b 75 08             	mov    0x8(%ebp),%esi
 8746dba:	8b 83 60 fd ff ff    	mov    -0x2a0(%ebx),%eax
 8746dc0:	83 c0 08             	add    $0x8,%eax
 8746dc3:	89 06                	mov    %eax,(%esi)
 8746dc5:	8d 46 04             	lea    0x4(%esi),%eax
 8746dc8:	89 04 24             	mov    %eax,(%esp)
 8746dcb:	e8 90 ff ff ff       	call   8746d60 <_ZN5yaSSL14ServerDHParamsC1Ev>
 8746dd0:	c7 46 1c 00 00 00 00 	movl   $0x0,0x1c(%esi)
 8746dd7:	c7 46 20 00 00 00 00 	movl   $0x0,0x20(%esi)
 8746dde:	c7 46 24 00 00 00 00 	movl   $0x0,0x24(%esi)
 8746de5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8746de8:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8746deb:	89 ec                	mov    %ebp,%esp
 8746ded:	5d                   	pop    %ebp
 8746dee:	c3                   	ret
 8746def:	90                   	nop

```

```c
// yaSSL::DH_Server::DH_Server @ 0x8746da0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::DH_Server() */

void __thiscall yaSSL::DH_Server::DH_Server(DH_Server *this)

{
  *(undefined **)this = PTR_vtable_0936c8f8 + 8;
  ServerDHParams::ServerDHParams((ServerDHParams *)(this + 4));
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  return;
}

```

---

## build

```asm
// === 0874c920 yaSSL::DH_Server::build  [0x0874c920-0x874d11f] ===
 874c920:	55                   	push   %ebp
 874c921:	89 e5                	mov    %esp,%ebp
 874c923:	57                   	push   %edi
 874c924:	56                   	push   %esi
 874c925:	53                   	push   %ebx
 874c926:	e8 cd 64 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874c92b:	81 c3 6d 02 c2 00    	add    $0xc2026d,%ebx
 874c931:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 874c937:	8b 75 0c             	mov    0xc(%ebp),%esi
 874c93a:	89 34 24             	mov    %esi,(%esp)
 874c93d:	e8 6e 19 00 00       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 874c942:	89 04 24             	mov    %eax,(%esp)
 874c945:	e8 76 1e 00 00       	call   874e7c0 <_ZN5yaSSL6Crypto6use_dhEv>
 874c94a:	89 c2                	mov    %eax,%edx
 874c94c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 874c94f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 874c953:	8d 45 dc             	lea    -0x24(%ebp),%eax
 874c956:	89 44 24 08          	mov    %eax,0x8(%esp)
 874c95a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 874c95d:	89 14 24             	mov    %edx,(%esp)
 874c960:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874c966:	89 44 24 04          	mov    %eax,0x4(%esp)
 874c96a:	e8 41 e2 04 00       	call   879abb0 <_ZNK5yaSSL13DiffieHellman9set_sizesERiS1_S1_>
 874c96f:	8b 7d 08             	mov    0x8(%ebp),%edi
 874c972:	8b 45 d8             	mov    -0x28(%ebp),%eax
 874c975:	83 c7 04             	add    $0x4,%edi
 874c978:	89 44 24 04          	mov    %eax,0x4(%esp)
 874c97c:	89 3c 24             	mov    %edi,(%esp)
 874c97f:	e8 3c a9 ff ff       	call   87472c0 <_ZN5yaSSL14ServerDHParams9alloc_pubEi>
 874c984:	89 3c 24             	mov    %edi,(%esp)
 874c987:	89 c1                	mov    %eax,%ecx
 874c989:	8b 45 dc             	mov    -0x24(%ebp),%eax
 874c98c:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874c992:	89 44 24 04          	mov    %eax,0x4(%esp)
 874c996:	e8 65 a9 ff ff       	call   8747300 <_ZN5yaSSL14ServerDHParams7alloc_gEi>
 874c99b:	89 3c 24             	mov    %edi,(%esp)
 874c99e:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 874c9a4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874c9a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 874c9ab:	e8 90 a9 ff ff       	call   8747340 <_ZN5yaSSL14ServerDHParams7alloc_pEi>
 874c9b0:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874c9b6:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874c9bc:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 874c9c0:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874c9c6:	89 14 24             	mov    %edx,(%esp)
 874c9c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 874c9cd:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874c9d1:	e8 aa e2 04 00       	call   879ac80 <_ZNK5yaSSL13DiffieHellman9get_parmsEPhS1_S1_>
 874c9d6:	89 34 24             	mov    %esi,(%esp)
 874c9d9:	e8 82 16 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874c9de:	89 04 24             	mov    %eax,(%esp)
 874c9e1:	e8 aa 1d 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874c9e6:	89 34 24             	mov    %esi,(%esp)
 874c9e9:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 874c9ef:	e8 7c 16 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874c9f4:	89 04 24             	mov    %eax,(%esp)
 874c9f7:	e8 54 20 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874c9fc:	83 78 20 01          	cmpl   $0x1,0x20(%eax)
 874ca00:	74 46                	je     874ca48 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x128>
 874ca02:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874ca08:	89 0c 24             	mov    %ecx,(%esp)
 874ca0b:	e8 c0 aa 04 00       	call   87974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>
 874ca10:	83 f8 02             	cmp    $0x2,%eax
 874ca13:	0f 84 d7 05 00 00    	je     874cff0 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x6d0>
 874ca19:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 874ca20:	00 
 874ca21:	89 34 24             	mov    %esi,(%esp)
 874ca24:	e8 a7 15 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874ca29:	31 d2                	xor    %edx,%edx
 874ca2b:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874ca30:	89 14 24             	mov    %edx,(%esp)
 874ca33:	e8 e8 3d 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874ca38:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 874ca3e:	5b                   	pop    %ebx
 874ca3f:	5e                   	pop    %esi
 874ca40:	5f                   	pop    %edi
 874ca41:	5d                   	pop    %ebp
 874ca42:	c3                   	ret
 874ca43:	90                   	nop
 874ca44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 874ca48:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874ca4e:	89 04 24             	mov    %eax,(%esp)
 874ca51:	e8 7a aa 04 00       	call   87974d0 <_ZNK5yaSSL11CertManager11get_keyTypeEv>
 874ca56:	83 f8 01             	cmp    $0x1,%eax
 874ca59:	75 be                	jne    874ca19 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0xf9>
 874ca5b:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874ca61:	89 0c 24             	mov    %ecx,(%esp)
 874ca64:	e8 87 ad 04 00       	call   87977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>
 874ca69:	89 c2                	mov    %eax,%edx
 874ca6b:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874ca71:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874ca77:	89 04 24             	mov    %eax,(%esp)
 874ca7a:	e8 11 ad 04 00       	call   8797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>
 874ca7f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874ca84:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 874ca8b:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 874ca91:	e8 0a 42 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 874ca96:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ca9c:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874caa2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874caa9:	00 
 874caaa:	89 54 24 04          	mov    %edx,0x4(%esp)
 874caae:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874cab2:	89 04 24             	mov    %eax,(%esp)
 874cab5:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 874cabb:	e8 a0 e7 04 00       	call   879b260 <_ZN5yaSSL3RSAC1EPKhjb>
 874cac0:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 874cac6:	31 c9                	xor    %ecx,%ecx
 874cac8:	85 c0                	test   %eax,%eax
 874caca:	89 c2                	mov    %eax,%edx
 874cacc:	74 1a                	je     874cae8 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x1c8>
 874cace:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874cad3:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 874cada:	e8 41 3d 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874cadf:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874cae5:	31 c9                	xor    %ecx,%ecx
 874cae7:	90                   	nop
 874cae8:	8b 02                	mov    (%edx),%eax
 874caea:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874caf0:	89 14 24             	mov    %edx,(%esp)
 874caf3:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874caf9:	ff 50 08             	call   *0x8(%eax)
 874cafc:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874cb02:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874cb08:	66 01 c1             	add    %ax,%cx
 874cb0b:	66 89 8d 52 ff ff ff 	mov    %cx,-0xae(%ebp)
 874cb12:	0f 84 78 05 00 00    	je     874d090 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x770>
 874cb18:	8b 45 08             	mov    0x8(%ebp),%eax
 874cb1b:	0f bf 8d 52 ff ff ff 	movswl -0xae(%ebp),%ecx
 874cb22:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874cb28:	c7 40 20 08 00 00 00 	movl   $0x8,0x20(%eax)
 874cb2f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874cb32:	03 45 dc             	add    -0x24(%ebp),%eax
 874cb35:	03 45 d8             	add    -0x28(%ebp),%eax
 874cb38:	89 8d 4c ff ff ff    	mov    %ecx,-0xb4(%ebp)
 874cb3e:	8d 44 08 08          	lea    0x8(%eax,%ecx,1),%eax
 874cb42:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874cb45:	89 41 20             	mov    %eax,0x20(%ecx)
 874cb48:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cb4c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 874cb4f:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 874cb55:	89 04 24             	mov    %eax,(%esp)
 874cb58:	e8 73 a6 04 00       	call   87971d0 <_ZN5yaSSL13output_bufferC1Ej>
 874cb5d:	0f b7 45 e0          	movzwl -0x20(%ebp),%eax
 874cb61:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 874cb64:	89 8d 60 ff ff ff    	mov    %ecx,-0xa0(%ebp)
 874cb6a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cb6e:	89 04 24             	mov    %eax,(%esp)
 874cb71:	e8 5a 12 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874cb76:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874cb7c:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874cb82:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 874cb89:	00 
 874cb8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cb8e:	89 0c 24             	mov    %ecx,(%esp)
 874cb91:	e8 3a a4 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cb96:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 874cb99:	89 3c 24             	mov    %edi,(%esp)
 874cb9c:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874cba2:	e8 79 a2 ff ff       	call   8746e20 <_ZNK5yaSSL14ServerDHParams5get_pEv>
 874cba7:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874cbad:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874cbb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cbb5:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cbbb:	89 04 24             	mov    %eax,(%esp)
 874cbbe:	e8 0d a4 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cbc3:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 874cbc9:	0f b7 45 dc          	movzwl -0x24(%ebp),%eax
 874cbcd:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cbd1:	89 04 24             	mov    %eax,(%esp)
 874cbd4:	e8 f7 11 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874cbd9:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874cbdf:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874cbe5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 874cbec:	00 
 874cbed:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cbf1:	89 0c 24             	mov    %ecx,(%esp)
 874cbf4:	e8 d7 a3 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cbf9:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 874cbfc:	89 3c 24             	mov    %edi,(%esp)
 874cbff:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874cc05:	e8 26 a2 ff ff       	call   8746e30 <_ZNK5yaSSL14ServerDHParams5get_gEv>
 874cc0a:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874cc10:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874cc14:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cc18:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cc1e:	89 04 24             	mov    %eax,(%esp)
 874cc21:	e8 aa a3 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cc26:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 874cc2c:	0f b7 45 d8          	movzwl -0x28(%ebp),%eax
 874cc30:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cc34:	89 04 24             	mov    %eax,(%esp)
 874cc37:	e8 94 11 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874cc3c:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874cc42:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874cc48:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 874cc4f:	00 
 874cc50:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cc54:	89 0c 24             	mov    %ecx,(%esp)
 874cc57:	e8 74 a3 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cc5c:	8b 4d d8             	mov    -0x28(%ebp),%ecx
 874cc5f:	89 3c 24             	mov    %edi,(%esp)
 874cc62:	8d 7d c8             	lea    -0x38(%ebp),%edi
 874cc65:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874cc6b:	e8 d0 a1 ff ff       	call   8746e40 <_ZNK5yaSSL14ServerDHParams7get_pubEv>
 874cc70:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874cc76:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874cc7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cc7e:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cc84:	89 04 24             	mov    %eax,(%esp)
 874cc87:	e8 44 a3 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cc8c:	8d 4d d0             	lea    -0x30(%ebp),%ecx
 874cc8f:	89 8d 5c ff ff ff    	mov    %ecx,-0xa4(%ebp)
 874cc95:	89 0c 24             	mov    %ecx,(%esp)
 874cc98:	e8 73 d4 04 00       	call   879a110 <_ZN5yaSSL3MD5C1Ev>
 874cc9d:	89 3c 24             	mov    %edi,(%esp)
 874cca0:	e8 eb d4 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 874cca5:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 874ccab:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874ccb0:	89 04 24             	mov    %eax,(%esp)
 874ccb3:	e8 98 56 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874ccb8:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874ccbb:	89 41 1c             	mov    %eax,0x1c(%ecx)
 874ccbe:	89 34 24             	mov    %esi,(%esp)
 874ccc1:	e8 aa 13 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874ccc6:	89 04 24             	mov    %eax,(%esp)
 874ccc9:	e8 92 1c 00 00       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874ccce:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874ccd5:	00 
 874ccd6:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 874ccdc:	89 c1                	mov    %eax,%ecx
 874ccde:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874cce4:	83 c1 34             	add    $0x34,%ecx
 874cce7:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cceb:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874ccf1:	89 04 24             	mov    %eax,(%esp)
 874ccf4:	e8 57 cf 04 00       	call   8799c50 <_ZN5yaSSL3MD56updateEPKhj>
 874ccf9:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 874ccff:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874cd06:	00 
 874cd07:	83 c0 54             	add    $0x54,%eax
 874cd0a:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 874cd10:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cd14:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874cd1a:	89 04 24             	mov    %eax,(%esp)
 874cd1d:	e8 2e cf 04 00       	call   8799c50 <_ZN5yaSSL3MD56updateEPKhj>
 874cd22:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cd28:	89 04 24             	mov    %eax,(%esp)
 874cd2b:	e8 90 a1 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 874cd30:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 874cd36:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cd3c:	89 04 24             	mov    %eax,(%esp)
 874cd3f:	e8 ec a1 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 874cd44:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cd48:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 874cd4e:	89 44 24 08          	mov    %eax,0x8(%esp)
 874cd52:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874cd58:	89 04 24             	mov    %eax,(%esp)
 874cd5b:	e8 f0 ce 04 00       	call   8799c50 <_ZN5yaSSL3MD56updateEPKhj>
 874cd60:	8d 45 98             	lea    -0x68(%ebp),%eax
 874cd63:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 874cd69:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cd6d:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874cd73:	89 04 24             	mov    %eax,(%esp)
 874cd76:	e8 95 c9 04 00       	call   8799710 <_ZN5yaSSL3MD510get_digestEPh>
 874cd7b:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874cd81:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874cd88:	00 
 874cd89:	89 3c 24             	mov    %edi,(%esp)
 874cd8c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cd90:	e8 eb cb 04 00       	call   8799980 <_ZN5yaSSL3SHA6updateEPKhj>
 874cd95:	8b 8d 58 ff ff ff    	mov    -0xa8(%ebp),%ecx
 874cd9b:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874cda2:	00 
 874cda3:	89 3c 24             	mov    %edi,(%esp)
 874cda6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cdaa:	e8 d1 cb 04 00       	call   8799980 <_ZN5yaSSL3SHA6updateEPKhj>
 874cdaf:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cdb5:	89 04 24             	mov    %eax,(%esp)
 874cdb8:	e8 03 a1 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 874cdbd:	89 c1                	mov    %eax,%ecx
 874cdbf:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cdc5:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874cdcb:	89 04 24             	mov    %eax,(%esp)
 874cdce:	e8 5d a1 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 874cdd3:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874cdd9:	89 3c 24             	mov    %edi,(%esp)
 874cddc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874cde0:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cde4:	e8 97 cb 04 00       	call   8799980 <_ZN5yaSSL3SHA6updateEPKhj>
 874cde9:	8d 4d a8             	lea    -0x58(%ebp),%ecx
 874cdec:	89 8d 58 ff ff ff    	mov    %ecx,-0xa8(%ebp)
 874cdf2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cdf6:	89 3c 24             	mov    %edi,(%esp)
 874cdf9:	e8 e2 c8 04 00       	call   87996e0 <_ZN5yaSSL3SHA10get_digestEPh>
 874cdfe:	89 34 24             	mov    %esi,(%esp)
 874ce01:	e8 6a 12 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874ce06:	89 04 24             	mov    %eax,(%esp)
 874ce09:	e8 42 1c 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874ce0e:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ce14:	83 78 20 01          	cmpl   $0x1,0x20(%eax)
 874ce18:	0f 84 a2 02 00 00    	je     874d0c0 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x7a0>
 874ce1e:	8b 02                	mov    (%edx),%eax
 874ce20:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874ce26:	8b 00                	mov    (%eax),%eax
 874ce28:	89 34 24             	mov    %esi,(%esp)
 874ce2b:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 874ce31:	e8 2a 12 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874ce36:	89 04 24             	mov    %eax,(%esp)
 874ce39:	e8 42 19 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874ce3e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874ce41:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ce47:	c7 44 24 0c 14 00 00 	movl   $0x14,0xc(%esp)
 874ce4e:	00 
 874ce4f:	89 44 24 10          	mov    %eax,0x10(%esp)
 874ce53:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 874ce59:	89 44 24 08          	mov    %eax,0x8(%esp)
 874ce5d:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874ce60:	89 14 24             	mov    %edx,(%esp)
 874ce63:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ce67:	ff 95 54 ff ff ff    	call   *-0xac(%ebp)
 874ce6d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874ce70:	8d 85 6a ff ff ff    	lea    -0x96(%ebp),%eax
 874ce76:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ce7a:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874ce7d:	89 04 24             	mov    %eax,(%esp)
 874ce80:	e8 1b 86 00 00       	call   87554a0 <_ZN8TaoCrypt19EncodeDSA_SignatureEPKhPh>
 874ce85:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874ce88:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874ce8b:	8b 8d 6a ff ff ff    	mov    -0x96(%ebp),%ecx
 874ce91:	89 08                	mov    %ecx,(%eax)
 874ce93:	8b 8d 6e ff ff ff    	mov    -0x92(%ebp),%ecx
 874ce99:	89 48 04             	mov    %ecx,0x4(%eax)
 874ce9c:	8b 8d 72 ff ff ff    	mov    -0x8e(%ebp),%ecx
 874cea2:	89 48 08             	mov    %ecx,0x8(%eax)
 874cea5:	8b 8d 76 ff ff ff    	mov    -0x8a(%ebp),%ecx
 874ceab:	89 48 0c             	mov    %ecx,0xc(%eax)
 874ceae:	8b 8d 7a ff ff ff    	mov    -0x86(%ebp),%ecx
 874ceb4:	89 48 10             	mov    %ecx,0x10(%eax)
 874ceb7:	8b 8d 7e ff ff ff    	mov    -0x82(%ebp),%ecx
 874cebd:	89 48 14             	mov    %ecx,0x14(%eax)
 874cec0:	8b 4d 82             	mov    -0x7e(%ebp),%ecx
 874cec3:	89 48 18             	mov    %ecx,0x18(%eax)
 874cec6:	8b 4d 86             	mov    -0x7a(%ebp),%ecx
 874cec9:	89 48 1c             	mov    %ecx,0x1c(%eax)
 874cecc:	8b 4d 8a             	mov    -0x76(%ebp),%ecx
 874cecf:	89 48 20             	mov    %ecx,0x20(%eax)
 874ced2:	8b 4d 8e             	mov    -0x72(%ebp),%ecx
 874ced5:	89 48 24             	mov    %ecx,0x24(%eax)
 874ced8:	8b 4d 92             	mov    -0x6e(%ebp),%ecx
 874cedb:	89 48 28             	mov    %ecx,0x28(%eax)
 874cede:	0f b7 4d 96          	movzwl -0x6a(%ebp),%ecx
 874cee2:	66 89 48 2c          	mov    %cx,0x2c(%eax)
 874cee6:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ceec:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874cef2:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874cef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cefc:	0f b7 85 52 ff ff ff 	movzwl -0xae(%ebp),%eax
 874cf03:	89 04 24             	mov    %eax,(%esp)
 874cf06:	e8 c5 0e 00 00       	call   874ddd0 <_ZN5yaSSL6c16toaEtPh>
 874cf0b:	8b 8d 60 ff ff ff    	mov    -0xa0(%ebp),%ecx
 874cf11:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cf17:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 874cf1e:	00 
 874cf1f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874cf23:	89 04 24             	mov    %eax,(%esp)
 874cf26:	e8 a5 a0 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cf2b:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 874cf31:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874cf35:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874cf38:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874cf3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cf3f:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cf45:	89 04 24             	mov    %eax,(%esp)
 874cf48:	e8 83 a0 04 00       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 874cf4d:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874cf50:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874cf55:	8b 41 20             	mov    0x20(%ecx),%eax
 874cf58:	89 04 24             	mov    %eax,(%esp)
 874cf5b:	e8 f0 53 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874cf60:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874cf63:	89 41 24             	mov    %eax,0x24(%ecx)
 874cf66:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cf6c:	89 04 24             	mov    %eax,(%esp)
 874cf6f:	e8 4c 9f 04 00       	call   8796ec0 <_ZNK5yaSSL13output_buffer8get_sizeEv>
 874cf74:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874cf7a:	89 0c 24             	mov    %ecx,(%esp)
 874cf7d:	89 c6                	mov    %eax,%esi
 874cf7f:	e8 ac 9f 04 00       	call   8796f30 <_ZNK5yaSSL13output_buffer10get_bufferEv>
 874cf84:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874cf87:	8b 49 24             	mov    0x24(%ecx),%ecx
 874cf8a:	89 74 24 08          	mov    %esi,0x8(%esp)
 874cf8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 874cf92:	89 0c 24             	mov    %ecx,(%esp)
 874cf95:	e8 06 09 93 ff       	call   807d8a0 <memcpy@plt>
 874cf9a:	89 3c 24             	mov    %edi,(%esp)
 874cf9d:	e8 0e bd 04 00       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 874cfa2:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874cfa8:	89 04 24             	mov    %eax,(%esp)
 874cfab:	e8 90 bd 04 00       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 874cfb0:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874cfb6:	89 0c 24             	mov    %ecx,(%esp)
 874cfb9:	e8 72 a3 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 874cfbe:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874cfc4:	8b 02                	mov    (%edx),%eax
 874cfc6:	89 14 24             	mov    %edx,(%esp)
 874cfc9:	ff 50 0c             	call   *0xc(%eax)
 874cfcc:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874cfd2:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874cfd7:	89 14 24             	mov    %edx,(%esp)
 874cfda:	e8 41 38 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874cfdf:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 874cfe5:	5b                   	pop    %ebx
 874cfe6:	5e                   	pop    %esi
 874cfe7:	5f                   	pop    %edi
 874cfe8:	5d                   	pop    %ebp
 874cfe9:	c3                   	ret
 874cfea:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874cff0:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874cff6:	89 04 24             	mov    %eax,(%esp)
 874cff9:	e8 f2 a7 04 00       	call   87977f0 <_ZNK5yaSSL11CertManager14get_privateKeyEv>
 874cffe:	8b 8d 64 ff ff ff    	mov    -0x9c(%ebp),%ecx
 874d004:	89 0c 24             	mov    %ecx,(%esp)
 874d007:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 874d00d:	e8 7e a7 04 00       	call   8797790 <_ZNK5yaSSL11CertManager20get_privateKeyLengthEv>
 874d012:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d017:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
 874d01e:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 874d024:	e8 77 3c 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 874d029:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874d02f:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874d035:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 874d03c:	00 
 874d03d:	89 54 24 04          	mov    %edx,0x4(%esp)
 874d041:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874d045:	89 04 24             	mov    %eax,(%esp)
 874d048:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 874d04e:	e8 0d e5 04 00       	call   879b560 <_ZN5yaSSL3DSSC1EPKhjb>
 874d053:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 874d059:	b9 06 00 00 00       	mov    $0x6,%ecx
 874d05e:	85 c0                	test   %eax,%eax
 874d060:	89 c2                	mov    %eax,%edx
 874d062:	0f 84 80 fa ff ff    	je     874cae8 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x1c8>
 874d068:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874d06d:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 874d074:	e8 a7 37 00 00       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 874d079:	b9 06 00 00 00       	mov    $0x6,%ecx
 874d07e:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874d084:	e9 5f fa ff ff       	jmp    874cae8 <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x1c8>
 874d089:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874d090:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 874d097:	00 
 874d098:	89 34 24             	mov    %esi,(%esp)
 874d09b:	e8 30 0f 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874d0a0:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874d0a6:	8b 02                	mov    (%edx),%eax
 874d0a8:	89 14 24             	mov    %edx,(%esp)
 874d0ab:	ff 50 0c             	call   *0xc(%eax)
 874d0ae:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874d0b4:	e9 72 f9 ff ff       	jmp    874ca2b <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x10b>
 874d0b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874d0c0:	8b 02                	mov    (%edx),%eax
 874d0c2:	8b 00                	mov    (%eax),%eax
 874d0c4:	89 34 24             	mov    %esi,(%esp)
 874d0c7:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 874d0cd:	e8 8e 0f 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874d0d2:	89 04 24             	mov    %eax,(%esp)
 874d0d5:	e8 a6 16 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874d0da:	8b 4d 08             	mov    0x8(%ebp),%ecx
 874d0dd:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874d0e3:	c7 44 24 0c 24 00 00 	movl   $0x24,0xc(%esp)
 874d0ea:	00 
 874d0eb:	89 44 24 10          	mov    %eax,0x10(%esp)
 874d0ef:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 874d0f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 874d0f9:	8b 41 1c             	mov    0x1c(%ecx),%eax
 874d0fc:	89 14 24             	mov    %edx,(%esp)
 874d0ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 874d103:	ff 95 58 ff ff ff    	call   *-0xa8(%ebp)
 874d109:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874d10f:	e9 d8 fd ff ff       	jmp    874ceec <_ZN5yaSSL9DH_Server5buildERNS_3SSLE+0x5cc>
 874d114:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874d11a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DH_Server::build @ 0x874c920

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::build(yaSSL::SSL&) */

void __thiscall yaSSL::DH_Server::build(DH_Server *this,SSL *param_1)

{
  code *pcVar1;
  undefined4 *puVar2;
  short sVar3;
  Crypto *pCVar4;
  DiffieHellman *this_00;
  uchar *puVar5;
  uchar *puVar6;
  uchar *puVar7;
  CertManager *this_01;
  Security *pSVar8;
  int iVar9;
  void *pvVar10;
  undefined4 uVar11;
  size_t __n;
  uint uVar12;
  ushort uVar13;
  short sVar14;
  uint uVar15;
  DSS *this_02;
  ServerDHParams *this_03;
  undefined4 local_9a;
  undefined4 local_96;
  undefined4 local_92;
  undefined4 local_8e;
  undefined4 local_8a;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined2 local_6e;
  uchar local_6c [16];
  uchar local_5c [20];
  output_buffer local_48 [12];
  SHA local_3c [8];
  MD5 local_34 [8];
  uint local_2c;
  uint local_28;
  uint local_24;
  uchar local_1e [10];
  undefined4 uStack_14;
  
  uStack_14 = 0x874c92b;
  pCVar4 = (Crypto *)SSL::useCrypto(param_1);
  this_00 = (DiffieHellman *)Crypto::use_dh(pCVar4);
  DiffieHellman::set_sizes(this_00,(int *)&local_24,(int *)&local_28,(int *)&local_2c);
  this_03 = (ServerDHParams *)(this + 4);
  puVar5 = (uchar *)ServerDHParams::alloc_pub(this_03,local_2c);
  puVar6 = (uchar *)ServerDHParams::alloc_g(this_03,local_28);
  puVar7 = (uchar *)ServerDHParams::alloc_p(this_03,local_24);
  DiffieHellman::get_parms(this_00,puVar7,puVar6,puVar5);
  pCVar4 = (Crypto *)SSL::getCrypto(param_1);
  this_01 = (CertManager *)Crypto::get_certManager(pCVar4);
  pSVar8 = (Security *)SSL::getSecurity(param_1);
  iVar9 = Security::get_parms(pSVar8);
  if (*(int *)(iVar9 + 0x20) == 1) {
    iVar9 = CertManager::get_keyType(this_01);
    if (iVar9 == 1) {
      puVar5 = (uchar *)CertManager::get_privateKey(this_01);
      uVar12 = CertManager::get_privateKeyLength(this_01);
      this_02 = operator_new(8,(uint)puVar7 & 0xffffff00);
      RSA::RSA((RSA *)this_02,puVar5,uVar12,false);
      sVar14 = 0;
      if (this_02 != (DSS *)0x0) {
        operator_delete(0,(uint)puVar5 & 0xffffff00);
        sVar14 = 0;
      }
      goto LAB_0874cae8;
    }
  }
  else {
    iVar9 = CertManager::get_keyType(this_01);
    if (iVar9 == 2) {
      puVar5 = (uchar *)CertManager::get_privateKey(this_01);
      uVar12 = CertManager::get_privateKeyLength(this_01);
      this_02 = operator_new(8,(uint)puVar7 & 0xffffff00);
      DSS::DSS(this_02,puVar5,uVar12,false);
      sVar14 = 6;
      if (this_02 != (DSS *)0x0) {
        operator_delete(0,(uint)puVar5 & 0xffffff00);
        sVar14 = 6;
      }
LAB_0874cae8:
      sVar3 = (**(code **)(*(int *)this_02 + 8))(this_02);
      uVar13 = sVar14 + sVar3;
      if (uVar13 != 0) {
        uVar15 = (uint)(short)uVar13;
        *(undefined4 *)(this + 0x20) = 8;
        uVar12 = local_24 + local_28 + local_2c + 8 + uVar15;
        *(uint *)(this + 0x20) = uVar12;
        output_buffer::output_buffer(local_48,uVar12);
        c16toa((ushort)local_24,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = (uchar *)ServerDHParams::get_p(this_03);
        output_buffer::write(local_48,puVar5,local_24);
        c16toa((ushort)local_28,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = (uchar *)ServerDHParams::get_g(this_03);
        output_buffer::write(local_48,puVar5,local_28);
        c16toa((ushort)local_2c,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = (uchar *)ServerDHParams::get_pub(this_03);
        output_buffer::write(local_48,puVar5,local_2c);
        MD5::MD5(local_34);
        SHA::SHA(local_3c);
        pvVar10 = operator_new__(uVar15,(uint)puVar5 & 0xffffff00);
        *(void **)(this + 0x1c) = pvVar10;
        pSVar8 = (Security *)SSL::getSecurity(param_1);
        iVar9 = Security::get_connection(pSVar8);
        MD5::update(local_34,(uchar *)(iVar9 + 0x34),0x20);
        MD5::update(local_34,(uchar *)(iVar9 + 0x54),0x20);
        uVar12 = output_buffer::get_size(local_48);
        puVar5 = (uchar *)output_buffer::get_buffer(local_48);
        MD5::update(local_34,puVar5,uVar12);
        MD5::get_digest(local_34,local_6c);
        SHA::update(local_3c,(uchar *)(iVar9 + 0x34),0x20);
        SHA::update(local_3c,(uchar *)(iVar9 + 0x54),0x20);
        uVar12 = output_buffer::get_size(local_48);
        puVar5 = (uchar *)output_buffer::get_buffer(local_48);
        SHA::update(local_3c,puVar5,uVar12);
        SHA::get_digest(local_3c,local_5c);
        pSVar8 = (Security *)SSL::getSecurity(param_1);
        iVar9 = Security::get_parms(pSVar8);
        if (*(int *)(iVar9 + 0x20) == 1) {
          pcVar1 = (code *)**(undefined4 **)this_02;
          pCVar4 = (Crypto *)SSL::getCrypto(param_1);
          uVar11 = Crypto::get_random(pCVar4);
          (*pcVar1)(this_02,*(undefined4 *)(this + 0x1c),local_6c,0x24,uVar11);
        }
        else {
          pcVar1 = (code *)**(undefined4 **)this_02;
          pCVar4 = (Crypto *)SSL::getCrypto(param_1);
          uVar11 = Crypto::get_random(pCVar4);
          (*pcVar1)(this_02,*(undefined4 *)(this + 0x1c),local_5c,0x14,uVar11);
          TaoCrypt::EncodeDSA_Signature(*(uchar **)(this + 0x1c),(uchar *)&local_9a);
          puVar2 = *(undefined4 **)(this + 0x1c);
          *puVar2 = local_9a;
          puVar2[1] = local_96;
          puVar2[2] = local_92;
          puVar2[3] = local_8e;
          puVar2[4] = local_8a;
          puVar2[5] = local_86;
          puVar2[6] = local_82;
          puVar2[7] = local_7e;
          puVar2[8] = local_7a;
          puVar2[9] = local_76;
          puVar2[10] = local_72;
          *(undefined2 *)(puVar2 + 0xb) = local_6e;
        }
        c16toa(uVar13,local_1e);
        output_buffer::write(local_48,local_1e,2);
        puVar5 = *(uchar **)(this + 0x1c);
        output_buffer::write(local_48,puVar5,uVar15);
        pvVar10 = operator_new__(*(undefined4 *)(this + 0x20),(uint)puVar5 & 0xffffff00);
        *(void **)(this + 0x24) = pvVar10;
        __n = output_buffer::get_size(local_48);
        pvVar10 = (void *)output_buffer::get_buffer(local_48);
        memcpy(*(void **)(this + 0x24),pvVar10,__n);
        SHA::~SHA(local_3c);
        MD5::~MD5(local_34);
        output_buffer::~output_buffer(local_48);
        (**(code **)(*(int *)this_02 + 0xc))(this_02);
        operator_delete(this_02,(uint)pvVar10 & 0xffffff00);
        return;
      }
      uVar12 = 0;
      SSL::SetError(param_1,0x74);
      (**(code **)(*(int *)this_02 + 0xc))(this_02);
      goto LAB_0874ca2b;
    }
  }
  uVar12 = 0;
  SSL::SetError(param_1,0x74);
  this_02 = (DSS *)0x0;
LAB_0874ca2b:
  operator_delete(this_02,uVar12 & 0xffffff00);
  return;
}

```

---

## get_length

```asm
// === 08746a10 yaSSL::DH_Server::get_length  [0x08746a10-0x8746a1f] ===
 8746a10:	55                   	push   %ebp
 8746a11:	89 e5                	mov    %esp,%ebp
 8746a13:	8b 45 08             	mov    0x8(%ebp),%eax
 8746a16:	5d                   	pop    %ebp
 8746a17:	8b 40 20             	mov    0x20(%eax),%eax
 8746a1a:	c3                   	ret
 8746a1b:	90                   	nop
 8746a1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::DH_Server::get_length @ 0x8746a10

/* yaSSL::DH_Server::get_length() const */

undefined4 __thiscall yaSSL::DH_Server::get_length(DH_Server *this)

{
  return *(undefined4 *)(this + 0x20);
}

```

---

## get_serverKey

```asm
// === 08746a20 yaSSL::DH_Server::get_serverKey  [0x08746a20-0x8746a2f] ===
 8746a20:	55                   	push   %ebp
 8746a21:	89 e5                	mov    %esp,%ebp
 8746a23:	8b 45 08             	mov    0x8(%ebp),%eax
 8746a26:	5d                   	pop    %ebp
 8746a27:	8b 40 24             	mov    0x24(%eax),%eax
 8746a2a:	c3                   	ret
 8746a2b:	90                   	nop
 8746a2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::DH_Server::get_serverKey @ 0x8746a20

/* yaSSL::DH_Server::get_serverKey() const */

undefined4 __thiscall yaSSL::DH_Server::get_serverKey(DH_Server *this)

{
  return *(undefined4 *)(this + 0x24);
}

```

---

## read

```asm
// === 0874a8e0 yaSSL::DH_Server::read  [0x0874a8e0-0x874af9f] ===
 874a8e0:	55                   	push   %ebp
 874a8e1:	89 e5                	mov    %esp,%ebp
 874a8e3:	57                   	push   %edi
 874a8e4:	56                   	push   %esi
 874a8e5:	53                   	push   %ebx
 874a8e6:	e8 0d 85 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874a8eb:	81 c3 ad 22 c2 00    	add    $0xc222ad,%ebx
 874a8f1:	81 ec dc 00 00 00    	sub    $0xdc,%esp
 874a8f7:	8b 45 10             	mov    0x10(%ebp),%eax
 874a8fa:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874a901:	fe 
 874a902:	89 04 24             	mov    %eax,(%esp)
 874a905:	e8 16 c5 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874a90a:	8b 55 10             	mov    0x10(%ebp),%edx
 874a90d:	0f b6 00             	movzbl (%eax),%eax
 874a910:	89 14 24             	mov    %edx,(%esp)
 874a913:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874a91a:	fe 
 874a91b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 874a91e:	e8 fd c4 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874a923:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 874a926:	0f b6 00             	movzbl (%eax),%eax
 874a929:	89 95 58 ff ff ff    	mov    %edx,-0xa8(%ebp)
 874a92f:	89 14 24             	mov    %edx,(%esp)
 874a932:	88 45 e5             	mov    %al,-0x1b(%ebp)
 874a935:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 874a938:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 874a93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a942:	e8 49 34 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 874a947:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 874a94b:	8b 75 08             	mov    0x8(%ebp),%esi
 874a94e:	0f b7 fa             	movzwl %dx,%edi
 874a951:	83 c6 04             	add    $0x4,%esi
 874a954:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874a95a:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874a95e:	89 34 24             	mov    %esi,(%esp)
 874a961:	e8 da c9 ff ff       	call   8747340 <_ZN5yaSSL14ServerDHParams7alloc_pEi>
 874a966:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874a96a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a96e:	8b 45 10             	mov    0x10(%ebp),%eax
 874a971:	89 04 24             	mov    %eax,(%esp)
 874a974:	e8 c7 c6 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874a979:	8b 45 10             	mov    0x10(%ebp),%eax
 874a97c:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874a983:	fe 
 874a984:	89 04 24             	mov    %eax,(%esp)
 874a987:	e8 94 c4 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874a98c:	0f b6 00             	movzbl (%eax),%eax
 874a98f:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874a996:	fe 
 874a997:	88 45 e4             	mov    %al,-0x1c(%ebp)
 874a99a:	8b 45 10             	mov    0x10(%ebp),%eax
 874a99d:	89 04 24             	mov    %eax,(%esp)
 874a9a0:	e8 7b c4 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874a9a5:	0f b6 00             	movzbl (%eax),%eax
 874a9a8:	88 45 e5             	mov    %al,-0x1b(%ebp)
 874a9ab:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874a9b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a9b5:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 874a9bb:	89 04 24             	mov    %eax,(%esp)
 874a9be:	e8 cd 33 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 874a9c3:	0f b7 7d e6          	movzwl -0x1a(%ebp),%edi
 874a9c7:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874a9cd:	89 34 24             	mov    %esi,(%esp)
 874a9d0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874a9d4:	8d 54 3a 06          	lea    0x6(%edx,%edi,1),%edx
 874a9d8:	66 89 95 5c ff ff ff 	mov    %dx,-0xa4(%ebp)
 874a9df:	e8 1c c9 ff ff       	call   8747300 <_ZN5yaSSL14ServerDHParams7alloc_gEi>
 874a9e4:	8b 55 10             	mov    0x10(%ebp),%edx
 874a9e7:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874a9eb:	89 14 24             	mov    %edx,(%esp)
 874a9ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 874a9f2:	e8 49 c6 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874a9f7:	8b 45 10             	mov    0x10(%ebp),%eax
 874a9fa:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874aa01:	fe 
 874aa02:	89 04 24             	mov    %eax,(%esp)
 874aa05:	e8 16 c4 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874aa0a:	8b 55 10             	mov    0x10(%ebp),%edx
 874aa0d:	0f b6 00             	movzbl (%eax),%eax
 874aa10:	89 14 24             	mov    %edx,(%esp)
 874aa13:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874aa1a:	fe 
 874aa1b:	88 45 e4             	mov    %al,-0x1c(%ebp)
 874aa1e:	e8 fd c3 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874aa23:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 874aa29:	0f b6 00             	movzbl (%eax),%eax
 874aa2c:	89 14 24             	mov    %edx,(%esp)
 874aa2f:	88 45 e5             	mov    %al,-0x1b(%ebp)
 874aa32:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874aa38:	89 44 24 04          	mov    %eax,0x4(%esp)
 874aa3c:	e8 4f 33 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 874aa41:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 874aa45:	89 34 24             	mov    %esi,(%esp)
 874aa48:	0f b7 fa             	movzwl %dx,%edi
 874aa4b:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874aa51:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874aa55:	e8 66 c8 ff ff       	call   87472c0 <_ZN5yaSSL14ServerDHParams9alloc_pubEi>
 874aa5a:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874aa5e:	8d 7d bc             	lea    -0x44(%ebp),%edi
 874aa61:	89 44 24 04          	mov    %eax,0x4(%esp)
 874aa65:	8b 45 10             	mov    0x10(%ebp),%eax
 874aa68:	89 04 24             	mov    %eax,(%esp)
 874aa6b:	e8 d0 c5 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874aa70:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874aa76:	66 03 95 5c ff ff ff 	add    -0xa4(%ebp),%dx
 874aa7d:	89 3c 24             	mov    %edi,(%esp)
 874aa80:	0f b7 d2             	movzwl %dx,%edx
 874aa83:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 874aa89:	89 54 24 04          	mov    %edx,0x4(%esp)
 874aa8d:	e8 4e c8 04 00       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 874aa92:	8b 55 10             	mov    0x10(%ebp),%edx
 874aa95:	89 14 24             	mov    %edx,(%esp)
 874aa98:	e8 03 c3 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 874aa9d:	2b 85 5c ff ff ff    	sub    -0xa4(%ebp),%eax
 874aaa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 874aaa7:	8b 45 10             	mov    0x10(%ebp),%eax
 874aaaa:	89 04 24             	mov    %eax,(%esp)
 874aaad:	e8 1e c3 04 00       	call   8796dd0 <_ZN5yaSSL12input_buffer11set_currentEj>
 874aab2:	89 3c 24             	mov    %edi,(%esp)
 874aab5:	e8 76 c2 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 874aaba:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 874aac0:	89 54 24 08          	mov    %edx,0x8(%esp)
 874aac4:	89 44 24 04          	mov    %eax,0x4(%esp)
 874aac8:	8b 45 10             	mov    0x10(%ebp),%eax
 874aacb:	89 04 24             	mov    %eax,(%esp)
 874aace:	e8 6d c5 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874aad3:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 874aad9:	89 3c 24             	mov    %edi,(%esp)
 874aadc:	89 54 24 04          	mov    %edx,0x4(%esp)
 874aae0:	e8 6b c2 04 00       	call   8796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>
 874aae5:	8b 45 10             	mov    0x10(%ebp),%eax
 874aae8:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874aaef:	fe 
 874aaf0:	89 04 24             	mov    %eax,(%esp)
 874aaf3:	e8 28 c3 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874aaf8:	8b 55 10             	mov    0x10(%ebp),%edx
 874aafb:	0f b6 00             	movzbl (%eax),%eax
 874aafe:	89 14 24             	mov    %edx,(%esp)
 874ab01:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 874ab08:	fe 
 874ab09:	88 45 e4             	mov    %al,-0x1c(%ebp)
 874ab0c:	e8 0f c3 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 874ab11:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 874ab17:	0f b6 00             	movzbl (%eax),%eax
 874ab1a:	89 14 24             	mov    %edx,(%esp)
 874ab1d:	88 45 e5             	mov    %al,-0x1b(%ebp)
 874ab20:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874ab26:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ab2a:	e8 61 32 00 00       	call   874dd90 <_ZN5yaSSL5ato16EPKhRt>
 874ab2f:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874ab33:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874ab38:	89 04 24             	mov    %eax,(%esp)
 874ab3b:	e8 10 78 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874ab40:	8b 55 08             	mov    0x8(%ebp),%edx
 874ab43:	89 42 1c             	mov    %eax,0x1c(%edx)
 874ab46:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 874ab4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ab4e:	8b 45 10             	mov    0x10(%ebp),%eax
 874ab51:	89 54 24 08          	mov    %edx,0x8(%esp)
 874ab55:	89 04 24             	mov    %eax,(%esp)
 874ab58:	e8 e3 c4 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 874ab5d:	8d 55 dc             	lea    -0x24(%ebp),%edx
 874ab60:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 874ab66:	89 14 24             	mov    %edx,(%esp)
 874ab69:	e8 a2 f5 04 00       	call   879a110 <_ZN5yaSSL3MD5C1Ev>
 874ab6e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 874ab71:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 874ab77:	89 04 24             	mov    %eax,(%esp)
 874ab7a:	e8 11 f6 04 00       	call   879a190 <_ZN5yaSSL3SHAC1Ev>
 874ab7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 874ab82:	89 14 24             	mov    %edx,(%esp)
 874ab85:	e8 e6 34 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874ab8a:	89 04 24             	mov    %eax,(%esp)
 874ab8d:	e8 ce 3d 00 00       	call   874e960 <_ZNK5yaSSL8Security14get_connectionEv>
 874ab92:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 874ab98:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874ab9f:	00 
 874aba0:	89 14 24             	mov    %edx,(%esp)
 874aba3:	8d 48 34             	lea    0x34(%eax),%ecx
 874aba6:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874abaa:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874abb0:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 874abb6:	e8 95 f0 04 00       	call   8799c50 <_ZN5yaSSL3MD56updateEPKhj>
 874abbb:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 874abc1:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874abc8:	00 
 874abc9:	83 c0 54             	add    $0x54,%eax
 874abcc:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 874abd2:	89 44 24 04          	mov    %eax,0x4(%esp)
 874abd6:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874abdc:	89 04 24             	mov    %eax,(%esp)
 874abdf:	e8 6c f0 04 00       	call   8799c50 <_ZN5yaSSL3MD56updateEPKhj>
 874abe4:	89 3c 24             	mov    %edi,(%esp)
 874abe7:	e8 c4 c1 04 00       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 874abec:	89 3c 24             	mov    %edi,(%esp)
 874abef:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 874abf5:	e8 36 c1 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 874abfa:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 874ac00:	89 54 24 08          	mov    %edx,0x8(%esp)
 874ac04:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ac08:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874ac0e:	89 04 24             	mov    %eax,(%esp)
 874ac11:	e8 3a f0 04 00       	call   8799c50 <_ZN5yaSSL3MD56updateEPKhj>
 874ac16:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 874ac1c:	8d 55 98             	lea    -0x68(%ebp),%edx
 874ac1f:	89 95 50 ff ff ff    	mov    %edx,-0xb0(%ebp)
 874ac25:	89 54 24 04          	mov    %edx,0x4(%esp)
 874ac29:	89 04 24             	mov    %eax,(%esp)
 874ac2c:	e8 df ea 04 00       	call   8799710 <_ZN5yaSSL3MD510get_digestEPh>
 874ac31:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874ac37:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 874ac3d:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874ac44:	00 
 874ac45:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 874ac49:	89 14 24             	mov    %edx,(%esp)
 874ac4c:	e8 2f ed 04 00       	call   8799980 <_ZN5yaSSL3SHA6updateEPKhj>
 874ac51:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 874ac57:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 874ac5d:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 874ac64:	00 
 874ac65:	89 14 24             	mov    %edx,(%esp)
 874ac68:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ac6c:	e8 0f ed 04 00       	call   8799980 <_ZN5yaSSL3SHA6updateEPKhj>
 874ac71:	89 3c 24             	mov    %edi,(%esp)
 874ac74:	e8 37 c1 04 00       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 874ac79:	89 3c 24             	mov    %edi,(%esp)
 874ac7c:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 874ac82:	e8 a9 c0 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 874ac87:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ac8d:	89 54 24 08          	mov    %edx,0x8(%esp)
 874ac91:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ac95:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874ac9b:	89 04 24             	mov    %eax,(%esp)
 874ac9e:	e8 dd ec 04 00       	call   8799980 <_ZN5yaSSL3SHA6updateEPKhj>
 874aca3:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874aca9:	8d 55 a8             	lea    -0x58(%ebp),%edx
 874acac:	89 95 58 ff ff ff    	mov    %edx,-0xa8(%ebp)
 874acb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 874acb6:	89 04 24             	mov    %eax,(%esp)
 874acb9:	e8 22 ea 04 00       	call   87996e0 <_ZN5yaSSL3SHA10get_digestEPh>
 874acbe:	8b 55 0c             	mov    0xc(%ebp),%edx
 874acc1:	89 14 24             	mov    %edx,(%esp)
 874acc4:	e8 97 33 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874acc9:	89 04 24             	mov    %eax,(%esp)
 874accc:	e8 bf 3a 00 00       	call   874e790 <_ZNK5yaSSL6Crypto15get_certManagerEv>
 874acd1:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 874acd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 874acda:	89 04 24             	mov    %eax,(%esp)
 874acdd:	e8 8e 33 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 874ace2:	89 04 24             	mov    %eax,(%esp)
 874ace5:	e8 66 3d 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 874acea:	83 78 20 01          	cmpl   $0x1,0x20(%eax)
 874acee:	0f 84 d4 01 00 00    	je     874aec8 <_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE+0x5e8>
 874acf4:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874acf8:	8b 55 08             	mov    0x8(%ebp),%edx
 874acfb:	89 44 24 08          	mov    %eax,0x8(%esp)
 874acff:	8b 42 1c             	mov    0x1c(%edx),%eax
 874ad02:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 874ad08:	89 14 24             	mov    %edx,(%esp)
 874ad0b:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874ad11:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ad15:	e8 06 a4 00 00       	call   8755120 <_ZN8TaoCrypt19DecodeDSA_SignatureEPhPKhj>
 874ad1a:	66 89 45 e6          	mov    %ax,-0x1a(%ebp)
 874ad1e:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874ad24:	89 04 24             	mov    %eax,(%esp)
 874ad27:	e8 94 ca 04 00       	call   87977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>
 874ad2c:	89 c1                	mov    %eax,%ecx
 874ad2e:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874ad34:	89 8d 44 ff ff ff    	mov    %ecx,-0xbc(%ebp)
 874ad3a:	89 04 24             	mov    %eax,(%esp)
 874ad3d:	e8 de ca 04 00       	call   8797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>
 874ad42:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874ad48:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 874ad4f:	00 
 874ad50:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 874ad54:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ad58:	8d 45 cc             	lea    -0x34(%ebp),%eax
 874ad5b:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 874ad61:	89 04 24             	mov    %eax,(%esp)
 874ad64:	e8 f7 07 05 00       	call   879b560 <_ZN5yaSSL3DSSC1EPKhjb>
 874ad69:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874ad6d:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ad73:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 874ad7a:	00 
 874ad7b:	89 44 24 10          	mov    %eax,0x10(%esp)
 874ad7f:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874ad85:	89 54 24 0c          	mov    %edx,0xc(%esp)
 874ad89:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 874ad8f:	89 04 24             	mov    %eax,(%esp)
 874ad92:	89 54 24 04          	mov    %edx,0x4(%esp)
 874ad96:	e8 35 fb 04 00       	call   879a8d0 <_ZN5yaSSL3DSS6verifyEPKhjS2_j>
 874ad9b:	84 c0                	test   %al,%al
 874ad9d:	0f 84 bd 01 00 00    	je     874af60 <_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE+0x680>
 874ada3:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874ada9:	89 04 24             	mov    %eax,(%esp)
 874adac:	e8 8f 0c 05 00       	call   879ba40 <_ZN5yaSSL3DSSD1Ev>
 874adb1:	89 34 24             	mov    %esi,(%esp)
 874adb4:	e8 67 c0 ff ff       	call   8746e20 <_ZNK5yaSSL14ServerDHParams5get_pEv>
 874adb9:	89 34 24             	mov    %esi,(%esp)
 874adbc:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 874adc2:	e8 29 c0 ff ff       	call   8746df0 <_ZNK5yaSSL14ServerDHParams9get_pSizeEv>
 874adc7:	89 34 24             	mov    %esi,(%esp)
 874adca:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 874add0:	e8 5b c0 ff ff       	call   8746e30 <_ZNK5yaSSL14ServerDHParams5get_gEv>
 874add5:	89 34 24             	mov    %esi,(%esp)
 874add8:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 874adde:	e8 1d c0 ff ff       	call   8746e00 <_ZNK5yaSSL14ServerDHParams9get_gSizeEv>
 874ade3:	89 34 24             	mov    %esi,(%esp)
 874ade6:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 874adec:	e8 4f c0 ff ff       	call   8746e40 <_ZNK5yaSSL14ServerDHParams7get_pubEv>
 874adf1:	89 34 24             	mov    %esi,(%esp)
 874adf4:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 874adfa:	e8 11 c0 ff ff       	call   8746e10 <_ZNK5yaSSL14ServerDHParams11get_pubSizeEv>
 874adff:	8b 55 0c             	mov    0xc(%ebp),%edx
 874ae02:	89 14 24             	mov    %edx,(%esp)
 874ae05:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 874ae0b:	e8 50 32 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 874ae10:	89 04 24             	mov    %eax,(%esp)
 874ae13:	e8 68 39 00 00       	call   874e780 <_ZNK5yaSSL6Crypto10get_randomEv>
 874ae18:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874ae1d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 874ae24:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 874ae2a:	e8 71 5e 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 874ae2f:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874ae35:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 874ae3b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 874ae3f:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 874ae45:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 874ae49:	89 c6                	mov    %eax,%esi
 874ae4b:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874ae51:	89 34 24             	mov    %esi,(%esp)
 874ae54:	89 54 24 10          	mov    %edx,0x10(%esp)
 874ae58:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 874ae5e:	89 44 24 14          	mov    %eax,0x14(%esp)
 874ae62:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 874ae68:	89 54 24 08          	mov    %edx,0x8(%esp)
 874ae6c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 874ae70:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 874ae76:	89 44 24 04          	mov    %eax,0x4(%esp)
 874ae7a:	e8 01 fb 04 00       	call   879a980 <_ZN5yaSSL13DiffieHellmanC1EPKhjS2_jS2_jRKNS_10RandomPoolE>
 874ae7f:	8b 55 0c             	mov    0xc(%ebp),%edx
 874ae82:	89 14 24             	mov    %edx,(%esp)
 874ae85:	e8 26 34 00 00       	call   874e2b0 <_ZN5yaSSL3SSL9useCryptoEv>
 874ae8a:	89 74 24 04          	mov    %esi,0x4(%esp)
 874ae8e:	89 04 24             	mov    %eax,(%esp)
 874ae91:	e8 5a 39 00 00       	call   874e7f0 <_ZN5yaSSL6Crypto5SetDHEPNS_13DiffieHellmanE>
 874ae96:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 874ae9c:	89 04 24             	mov    %eax,(%esp)
 874ae9f:	e8 0c de 04 00       	call   8798cb0 <_ZN5yaSSL3SHAD1Ev>
 874aea4:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 874aeaa:	89 14 24             	mov    %edx,(%esp)
 874aead:	e8 8e de 04 00       	call   8798d40 <_ZN5yaSSL3MD5D1Ev>
 874aeb2:	89 3c 24             	mov    %edi,(%esp)
 874aeb5:	e8 a6 c4 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 874aeba:	81 c4 dc 00 00 00    	add    $0xdc,%esp
 874aec0:	5b                   	pop    %ebx
 874aec1:	5e                   	pop    %esi
 874aec2:	5f                   	pop    %edi
 874aec3:	5d                   	pop    %ebp
 874aec4:	c3                   	ret
 874aec5:	8d 76 00             	lea    0x0(%esi),%esi
 874aec8:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 874aece:	89 14 24             	mov    %edx,(%esp)
 874aed1:	e8 ea c8 04 00       	call   87977c0 <_ZNK5yaSSL11CertManager17get_peerKeyLengthEv>
 874aed6:	89 c2                	mov    %eax,%edx
 874aed8:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 874aede:	89 95 48 ff ff ff    	mov    %edx,-0xb8(%ebp)
 874aee4:	89 04 24             	mov    %eax,(%esp)
 874aee7:	e8 34 c9 04 00       	call   8797820 <_ZNK5yaSSL11CertManager11get_peerKeyEv>
 874aeec:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 874aef2:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 874aef9:	00 
 874aefa:	89 54 24 08          	mov    %edx,0x8(%esp)
 874aefe:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 874af04:	89 95 60 ff ff ff    	mov    %edx,-0xa0(%ebp)
 874af0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 874af0e:	89 14 24             	mov    %edx,(%esp)
 874af11:	e8 4a 03 05 00       	call   879b260 <_ZN5yaSSL3RSAC1EPKhjb>
 874af16:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 874af1a:	8b 55 08             	mov    0x8(%ebp),%edx
 874af1d:	89 44 24 10          	mov    %eax,0x10(%esp)
 874af21:	8b 42 1c             	mov    0x1c(%edx),%eax
 874af24:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 874af2a:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 874af31:	00 
 874af32:	89 44 24 0c          	mov    %eax,0xc(%esp)
 874af36:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 874af3c:	89 14 24             	mov    %edx,(%esp)
 874af3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 874af43:	e8 88 f8 04 00       	call   879a7d0 <_ZN5yaSSL3RSA6verifyEPKhjS2_j>
 874af48:	84 c0                	test   %al,%al
 874af4a:	74 2c                	je     874af78 <_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE+0x698>
 874af4c:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 874af52:	89 14 24             	mov    %edx,(%esp)
 874af55:	e8 26 04 05 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 874af5a:	e9 52 fe ff ff       	jmp    874adb1 <_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE+0x4d1>
 874af5f:	90                   	nop
 874af60:	8b 55 0c             	mov    0xc(%ebp),%edx
 874af63:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 874af6a:	00 
 874af6b:	89 14 24             	mov    %edx,(%esp)
 874af6e:	e8 5d 30 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874af73:	e9 2b fe ff ff       	jmp    874ada3 <_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE+0x4c3>
 874af78:	8b 45 0c             	mov    0xc(%ebp),%eax
 874af7b:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 874af82:	00 
 874af83:	89 04 24             	mov    %eax,(%esp)
 874af86:	e8 45 30 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 874af8b:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 874af91:	89 14 24             	mov    %edx,(%esp)
 874af94:	e8 e7 03 05 00       	call   879b380 <_ZN5yaSSL3RSAD1Ev>
 874af99:	e9 13 fe ff ff       	jmp    874adb1 <_ZN5yaSSL9DH_Server4readERNS_3SSLERNS_12input_bufferE+0x4d1>
 874af9e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::DH_Server::read @ 0x874a8e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::read(yaSSL::SSL&, yaSSL::input_buffer&) */

void __thiscall yaSSL::DH_Server::read(DH_Server *this,SSL *param_1,input_buffer *param_2)

{
  ushort uVar1;
  char cVar2;
  uchar *puVar3;
  undefined1 *puVar4;
  int iVar5;
  Security *pSVar6;
  uchar *puVar7;
  Crypto *pCVar8;
  CertManager *this_00;
  uchar *puVar9;
  uint uVar10;
  uchar *puVar11;
  uint uVar12;
  RandomPool *pRVar13;
  DiffieHellman *this_01;
  short sVar14;
  uint uVar15;
  ServerDHParams *this_02;
  ushort *puVar16;
  undefined4 uVar17;
  RSA *pRVar18;
  RSA local_94 [40];
  uchar local_6c [16];
  uchar local_5c [20];
  input_buffer local_48 [16];
  DSS local_38 [8];
  SHA local_30 [8];
  MD5 local_28 [8];
  uchar local_20;
  undefined1 local_1f;
  ushort local_1e [5];
  undefined4 uStack_14;
  
  uStack_14 = 0x874a8eb;
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  puVar16 = local_1e;
  ato16(&local_20,puVar16);
  uVar1 = local_1e[0];
  uVar15 = (uint)local_1e[0];
  this_02 = (ServerDHParams *)(this + 4);
  puVar3 = (uchar *)ServerDHParams::alloc_p(this_02,uVar15);
  input_buffer::read(param_2,puVar3,uVar15);
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  ato16(&local_20,puVar16);
  uVar15 = (uint)local_1e[0];
  sVar14 = uVar1 + 6 + local_1e[0];
  puVar3 = (uchar *)ServerDHParams::alloc_g(this_02,uVar15);
  input_buffer::read(param_2,puVar3,uVar15);
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  ato16(&local_20,puVar16);
  uVar1 = local_1e[0];
  uVar15 = (uint)local_1e[0];
  puVar3 = (uchar *)ServerDHParams::alloc_pub(this_02,uVar15);
  input_buffer::read(param_2,puVar3,uVar15);
  uVar15 = (uint)(ushort)(uVar1 + sVar14);
  input_buffer::input_buffer(local_48,uVar15);
  iVar5 = input_buffer::get_current(param_2);
  input_buffer::set_current(param_2,iVar5 - uVar15);
  puVar3 = (uchar *)input_buffer::get_buffer(local_48);
  input_buffer::read(param_2,puVar3,uVar15);
  input_buffer::add_size(local_48,uVar15);
  puVar3 = (uchar *)input_buffer::operator[]((uint)param_2);
  local_20 = *puVar3;
  puVar4 = (undefined1 *)input_buffer::operator[]((uint)param_2);
  local_1f = *puVar4;
  ato16(&local_20,puVar16);
  puVar3 = operator_new__(local_1e[0],(uint)puVar16 & 0xffffff00);
  *(uchar **)(this + 0x1c) = puVar3;
  input_buffer::read(param_2,puVar3,(uint)local_1e[0]);
  MD5::MD5(local_28);
  SHA::SHA(local_30);
  pSVar6 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_connection(pSVar6);
  MD5::update(local_28,(uchar *)(iVar5 + 0x34),0x20);
  MD5::update(local_28,(uchar *)(iVar5 + 0x54),0x20);
  uVar15 = input_buffer::get_size(local_48);
  puVar3 = (uchar *)input_buffer::get_buffer(local_48);
  MD5::update(local_28,puVar3,uVar15);
  puVar3 = local_6c;
  MD5::get_digest(local_28,puVar3);
  SHA::update(local_30,(uchar *)(iVar5 + 0x34),0x20);
  SHA::update(local_30,(uchar *)(iVar5 + 0x54),0x20);
  uVar15 = input_buffer::get_size(local_48);
  puVar7 = (uchar *)input_buffer::get_buffer(local_48);
  SHA::update(local_30,puVar7,uVar15);
  puVar7 = local_5c;
  SHA::get_digest(local_30,puVar7);
  pCVar8 = (Crypto *)SSL::getCrypto(param_1);
  this_00 = (CertManager *)Crypto::get_certManager(pCVar8);
  pSVar6 = (Security *)SSL::getSecurity(param_1);
  iVar5 = Security::get_parms(pSVar6);
  if (*(int *)(iVar5 + 0x20) == 1) {
    uVar15 = CertManager::get_peerKeyLength(this_00);
    puVar7 = (uchar *)CertManager::get_peerKey(this_00);
    RSA::RSA(local_94,puVar7,uVar15,true);
    uVar10 = (uint)local_1e[0];
    uVar15 = *(uint *)(this + 0x1c);
    uVar17 = 0x24;
    cVar2 = RSA::verify((uchar *)local_94,(uint)puVar3,(uchar *)0x24,uVar15);
    if (cVar2 == '\0') {
      puVar3 = (uchar *)0x0;
      SSL::SetError(param_1,0x70,uVar17,uVar15,uVar10);
      RSA::~RSA(local_94);
    }
    else {
      RSA::~RSA(local_94);
    }
  }
  else {
    pRVar18 = local_94;
    local_1e[0] = TaoCrypt::DecodeDSA_Signature
                            ((uchar *)pRVar18,*(uchar **)(this + 0x1c),(uint)local_1e[0]);
    uVar15 = CertManager::get_peerKeyLength(this_00);
    puVar3 = (uchar *)CertManager::get_peerKey(this_00);
    DSS::DSS(local_38,puVar3,uVar15,true);
    uVar15 = (uint)local_1e[0];
    uVar17 = 0x14;
    cVar2 = DSS::verify((uchar *)local_38,(uint)puVar7,(uchar *)0x14,(uint)pRVar18);
    puVar3 = puVar7;
    if (cVar2 == '\0') {
      puVar3 = (uchar *)0x0;
      SSL::SetError(param_1,0x70,uVar17,pRVar18,uVar15);
    }
    DSS::~DSS(local_38);
  }
  puVar7 = (uchar *)ServerDHParams::get_p(this_02);
  uVar15 = ServerDHParams::get_pSize(this_02);
  puVar9 = (uchar *)ServerDHParams::get_g(this_02);
  uVar10 = ServerDHParams::get_gSize(this_02);
  puVar11 = (uchar *)ServerDHParams::get_pub(this_02);
  uVar12 = ServerDHParams::get_pubSize(this_02);
  pCVar8 = (Crypto *)SSL::getCrypto(param_1);
  pRVar13 = (RandomPool *)Crypto::get_random(pCVar8);
  this_01 = operator_new(4,(uint)puVar3 & 0xffffff00);
  DiffieHellman::DiffieHellman(this_01,puVar7,uVar15,puVar9,uVar10,puVar11,uVar12,pRVar13);
  pCVar8 = (Crypto *)SSL::useCrypto(param_1);
  Crypto::SetDH(pCVar8,this_01);
  SHA::~SHA(local_30);
  MD5::~MD5(local_28);
  input_buffer::~input_buffer(local_48);
  return;
}

```

---

## ~DH_Server

```asm
// === 0874b9a0 yaSSL::DH_Server::~DH_Server  [0x0874b9a0-0x874ba0f] ===
 874b9a0:	55                   	push   %ebp
 874b9a1:	89 e5                	mov    %esp,%ebp
 874b9a3:	83 ec 18             	sub    $0x18,%esp
 874b9a6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874b9a9:	e8 4a 74 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b9ae:	81 c3 ea 11 c2 00    	add    $0xc211ea,%ebx
 874b9b4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874b9b7:	8b 75 08             	mov    0x8(%ebp),%esi
 874b9ba:	8b 83 60 fd ff ff    	mov    -0x2a0(%ebx),%eax
 874b9c0:	83 c0 08             	add    $0x8,%eax
 874b9c3:	89 06                	mov    %eax,(%esi)
 874b9c5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b9ca:	8b 46 24             	mov    0x24(%esi),%eax
 874b9cd:	89 04 24             	mov    %eax,(%esp)
 874b9d0:	e8 1b 4f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b9d5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b9da:	8b 46 1c             	mov    0x1c(%esi),%eax
 874b9dd:	89 04 24             	mov    %eax,(%esp)
 874b9e0:	e8 0b 4f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b9e5:	8d 46 04             	lea    0x4(%esi),%eax
 874b9e8:	89 04 24             	mov    %eax,(%esp)
 874b9eb:	e8 50 ff ff ff       	call   874b940 <_ZN5yaSSL14ServerDHParamsD1Ev>
 874b9f0:	8b 83 a8 fb ff ff    	mov    -0x458(%ebx),%eax
 874b9f6:	83 c0 08             	add    $0x8,%eax
 874b9f9:	89 06                	mov    %eax,(%esi)
 874b9fb:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874b9fe:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874ba01:	89 ec                	mov    %ebp,%esp
 874ba03:	5d                   	pop    %ebp
 874ba04:	c3                   	ret
 874ba05:	90                   	nop
 874ba06:	8d 76 00             	lea    0x0(%esi),%esi
 874ba09:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::DH_Server::~DH_Server @ 0x874b9a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::~DH_Server() */

void __thiscall yaSSL::DH_Server::~DH_Server(DH_Server *this)

{
  *(undefined **)this = PTR_vtable_0936c8f8 + 8;
  operator_delete__(*(undefined4 *)(this + 0x24),0);
  operator_delete__(*(undefined4 *)(this + 0x1c),0);
  ServerDHParams::~ServerDHParams((ServerDHParams *)(this + 4));
  *(undefined **)this = PTR_vtable_0936c740 + 8;
  return;
}

```

---

## ~DH_Server_0874ba10

```asm
// === 0874ba10 yaSSL::DH_Server::~DH_Server  [0x0874ba10-0x874ba3f] ===
 874ba10:	55                   	push   %ebp
 874ba11:	89 e5                	mov    %esp,%ebp
 874ba13:	53                   	push   %ebx
 874ba14:	e8 df 73 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874ba19:	81 c3 7f 11 c2 00    	add    $0xc2117f,%ebx
 874ba1f:	83 ec 14             	sub    $0x14,%esp
 874ba22:	8b 45 08             	mov    0x8(%ebp),%eax
 874ba25:	89 04 24             	mov    %eax,(%esp)
 874ba28:	e8 73 ff ff ff       	call   874b9a0 <_ZN5yaSSL9DH_ServerD1Ev>
 874ba2d:	83 c4 14             	add    $0x14,%esp
 874ba30:	5b                   	pop    %ebx
 874ba31:	5d                   	pop    %ebp
 874ba32:	c3                   	ret
 874ba33:	90                   	nop
 874ba34:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874ba3a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::DH_Server::~DH_Server @ 0x874ba10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::DH_Server::~DH_Server() */

void __thiscall yaSSL::DH_Server::~DH_Server(DH_Server *this)

{
  ~DH_Server(this);
  return;
}

```

