# yaSSL__Data

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## Data

```asm
// === 08746be0 yaSSL::Data::Data  [0x08746be0-0x8746c1f] ===
 8746be0:	e8 df d9 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746be5:	81 c1 b3 5f c2 00    	add    $0xc25fb3,%ecx
 8746beb:	55                   	push   %ebp
 8746bec:	89 e5                	mov    %esp,%ebp
 8746bee:	8b 45 08             	mov    0x8(%ebp),%eax
 8746bf1:	8b 91 e4 fe ff ff    	mov    -0x11c(%ecx),%edx
 8746bf7:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 8746bfd:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8746c04:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8746c0b:	83 c2 08             	add    $0x8,%edx
 8746c0e:	89 10                	mov    %edx,(%eax)
 8746c10:	5d                   	pop    %ebp
 8746c11:	c3                   	ret
 8746c12:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8746c19:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Data::Data @ 0x8746be0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Data::Data() */

void __thiscall yaSSL::Data::Data(Data *this)

{
  undefined *puVar1;
  
  puVar1 = PTR_vtable_0936ca7c;
  *(undefined2 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined **)this = puVar1 + 8;
  return;
}

```

---

## Data_08746c20

```asm
// === 08746c20 yaSSL::Data::Data  [0x08746c20-0x8746c5f] ===
 8746c20:	e8 9f d9 fd ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8746c25:	81 c1 73 5f c2 00    	add    $0xc25f73,%ecx
 8746c2b:	55                   	push   %ebp
 8746c2c:	89 e5                	mov    %esp,%ebp
 8746c2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8746c31:	8b 91 e4 fe ff ff    	mov    -0x11c(%ecx),%edx
 8746c37:	83 c2 08             	add    $0x8,%edx
 8746c3a:	89 10                	mov    %edx,(%eax)
 8746c3c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746c3f:	66 89 50 04          	mov    %dx,0x4(%eax)
 8746c43:	8b 55 10             	mov    0x10(%ebp),%edx
 8746c46:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8746c4d:	89 50 08             	mov    %edx,0x8(%eax)
 8746c50:	5d                   	pop    %ebp
 8746c51:	c3                   	ret
 8746c52:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8746c59:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Data::Data @ 0x8746c20

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::Data::Data(unsigned short, unsigned char*) */

void __thiscall yaSSL::Data::Data(Data *this,ushort param_1,uchar *param_2)

{
  *(undefined **)this = PTR_vtable_0936ca7c + 8;
  *(ushort *)(this + 4) = param_1;
  *(undefined4 *)(this + 0xc) = 0;
  *(uchar **)(this + 8) = param_2;
  return;
}

```

---

## Process

```asm
// === 08749a90 yaSSL::Data::Process  [0x08749a90-0x8749e3f] ===
 8749a90:	55                   	push   %ebp
 8749a91:	89 e5                	mov    %esp,%ebp
 8749a93:	57                   	push   %edi
 8749a94:	56                   	push   %esi
 8749a95:	53                   	push   %ebx
 8749a96:	e8 5d 93 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8749a9b:	81 c3 fd 30 c2 00    	add    $0xc230fd,%ebx
 8749aa1:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8749aa7:	8b 45 10             	mov    0x10(%ebp),%eax
 8749aaa:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8749aad:	89 04 24             	mov    %eax,(%esp)
 8749ab0:	e8 bb 45 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8749ab5:	89 04 24             	mov    %eax,(%esp)
 8749ab8:	e8 93 4f 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8749abd:	8b 55 10             	mov    0x10(%ebp),%edx
 8749ac0:	0f b7 70 2a          	movzwl 0x2a(%eax),%esi
 8749ac4:	89 14 24             	mov    %edx,(%esp)
 8749ac7:	e8 a4 45 00 00       	call   874e070 <_ZNK5yaSSL3SSL11getSecurityEv>
 8749acc:	89 04 24             	mov    %eax,(%esp)
 8749acf:	e8 7c 4f 00 00       	call   874ea50 <_ZNK5yaSSL8Security9get_parmsEv>
 8749ad4:	83 78 08 01          	cmpl   $0x1,0x8(%eax)
 8749ad8:	0f 84 ca 02 00 00    	je     8749da8 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x318>
 8749ade:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8749ae5:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8749aec:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8749af3:	8b 45 10             	mov    0x10(%ebp),%eax
 8749af6:	89 04 24             	mov    %eax,(%esp)
 8749af9:	e8 62 45 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 8749afe:	89 04 24             	mov    %eax,(%esp)
 8749b01:	e8 4a 4c 00 00       	call   874e750 <_ZNK5yaSSL6Crypto10get_digestEv>
 8749b06:	8b 10                	mov    (%eax),%edx
 8749b08:	89 04 24             	mov    %eax,(%esp)
 8749b0b:	ff 52 0c             	call   *0xc(%edx)
 8749b0e:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8749b11:	2b 75 a4             	sub    -0x5c(%ebp),%esi
 8749b14:	89 3c 24             	mov    %edi,(%esp)
 8749b17:	89 75 a0             	mov    %esi,-0x60(%ebp)
 8749b1a:	29 45 a0             	sub    %eax,-0x60(%ebp)
 8749b1d:	29 55 a0             	sub    %edx,-0x60(%ebp)
 8749b20:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8749b23:	8b 45 90             	mov    -0x70(%ebp),%eax
 8749b26:	29 45 a0             	sub    %eax,-0x60(%ebp)
 8749b29:	e8 02 d2 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8749b2e:	89 3c 24             	mov    %edi,(%esp)
 8749b31:	89 45 98             	mov    %eax,-0x68(%ebp)
 8749b34:	e8 67 d2 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8749b39:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 8749b3c:	85 c9                	test   %ecx,%ecx
 8749b3e:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8749b41:	0f 84 b4 00 00 00    	je     8749bfb <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x16b>
 8749b47:	8b 55 10             	mov    0x10(%ebp),%edx
 8749b4a:	89 14 24             	mov    %edx,(%esp)
 8749b4d:	e8 7e 4e 00 00       	call   874e9d0 <_ZNK5yaSSL3SSL13CompressionOnEv>
 8749b52:	84 c0                	test   %al,%al
 8749b54:	0f 85 26 01 00 00    	jne    8749c80 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x1f0>
 8749b5a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8749b5f:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8749b66:	e8 35 71 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8749b6b:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8749b6e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8749b72:	89 c6                	mov    %eax,%esi
 8749b74:	89 04 24             	mov    %eax,(%esp)
 8749b77:	e8 64 d7 04 00       	call   87972e0 <_ZN5yaSSL12input_bufferC1Ej>
 8749b7c:	8b 45 10             	mov    0x10(%ebp),%eax
 8749b7f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8749b83:	89 04 24             	mov    %eax,(%esp)
 8749b86:	e8 05 8b 00 00       	call   8752690 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE>
 8749b8b:	89 34 24             	mov    %esi,(%esp)
 8749b8e:	e8 9d d1 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8749b93:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8749b96:	89 3c 24             	mov    %edi,(%esp)
 8749b99:	89 54 24 08          	mov    %edx,0x8(%esp)
 8749b9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749ba1:	e8 9a d4 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8749ba6:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8749ba9:	89 34 24             	mov    %esi,(%esp)
 8749bac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749bb0:	e8 9b d1 04 00       	call   8796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>
 8749bb5:	8b 55 10             	mov    0x10(%ebp),%edx
 8749bb8:	8b 75 98             	mov    -0x68(%ebp),%esi
 8749bbb:	03 75 a4             	add    -0x5c(%ebp),%esi
 8749bbe:	89 14 24             	mov    %edx,(%esp)
 8749bc1:	e8 da 4d 00 00       	call   874e9a0 <_ZNK5yaSSL3SSL5isTLSEv>
 8749bc6:	84 c0                	test   %al,%al
 8749bc8:	0f 84 82 01 00 00    	je     8749d50 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x2c0>
 8749bce:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8749bd1:	8b 55 10             	mov    0x10(%ebp),%edx
 8749bd4:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8749bdb:	00 
 8749bdc:	c7 44 24 10 17 00 00 	movl   $0x17,0x10(%esp)
 8749be3:	00 
 8749be4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8749be8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8749beb:	89 74 24 08          	mov    %esi,0x8(%esp)
 8749bef:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749bf3:	89 14 24             	mov    %edx,(%esp)
 8749bf6:	e8 75 57 05 00       	call   879f370 <_ZN5yaSSL8TLS_hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 8749bfb:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8749bfe:	8d 55 b0             	lea    -0x50(%ebp),%edx
 8749c01:	89 55 98             	mov    %edx,-0x68(%ebp)
 8749c04:	89 54 24 04          	mov    %edx,0x4(%esp)
 8749c08:	89 3c 24             	mov    %edi,(%esp)
 8749c0b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8749c0f:	e8 2c d4 04 00       	call   8797040 <_ZN5yaSSL12input_buffer4readEPhj>
 8749c14:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8749c17:	85 d2                	test   %edx,%edx
 8749c19:	74 2a                	je     8749c45 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x1b5>
 8749c1b:	89 7d a4             	mov    %edi,-0x5c(%ebp)
 8749c1e:	8b 7d 94             	mov    -0x6c(%ebp),%edi
 8749c21:	31 f6                	xor    %esi,%esi
 8749c23:	90                   	nop
 8749c24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8749c28:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8749c2b:	83 c6 01             	add    $0x1,%esi
 8749c2e:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749c35:	fe 
 8749c36:	89 04 24             	mov    %eax,(%esp)
 8749c39:	e8 e2 d1 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749c3e:	39 f7                	cmp    %esi,%edi
 8749c40:	7f e6                	jg     8749c28 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x198>
 8749c42:	8b 7d a4             	mov    -0x5c(%ebp),%edi
 8749c45:	8b 45 90             	mov    -0x70(%ebp),%eax
 8749c48:	85 c0                	test   %eax,%eax
 8749c4a:	0f 85 e8 00 00 00    	jne    8749d38 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x2a8>
 8749c50:	8b 75 a0             	mov    -0x60(%ebp),%esi
 8749c53:	85 f6                	test   %esi,%esi
 8749c55:	0f 84 bd 00 00 00    	je     8749d18 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x288>
 8749c5b:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8749c5e:	8d 7d c4             	lea    -0x3c(%ebp),%edi
 8749c61:	8b 75 98             	mov    -0x68(%ebp),%esi
 8749c64:	39 d2                	cmp    %edx,%edx
 8749c66:	89 d1                	mov    %edx,%ecx
 8749c68:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8749c6a:	0f 85 18 01 00 00    	jne    8749d88 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x2f8>
 8749c70:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8749c76:	5b                   	pop    %ebx
 8749c77:	5e                   	pop    %esi
 8749c78:	5f                   	pop    %edi
 8749c79:	5d                   	pop    %ebp
 8749c7a:	c3                   	ret
 8749c7b:	90                   	nop
 8749c7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8749c80:	8d 75 d8             	lea    -0x28(%ebp),%esi
 8749c83:	89 34 24             	mov    %esi,(%esp)
 8749c86:	e8 75 d0 04 00       	call   8796d00 <_ZN5yaSSL12input_bufferC1Ev>
 8749c8b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8749c8e:	89 74 24 08          	mov    %esi,0x8(%esp)
 8749c92:	89 3c 24             	mov    %edi,(%esp)
 8749c95:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749c99:	e8 02 54 00 00       	call   874f0a0 <_ZN5yaSSL10DeCompressERNS_12input_bufferEiS1_>
 8749c9e:	83 f8 ff             	cmp    $0xffffffff,%eax
 8749ca1:	0f 84 4e 01 00 00    	je     8749df5 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x365>
 8749ca7:	89 34 24             	mov    %esi,(%esp)
 8749caa:	e8 01 d1 04 00       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 8749caf:	89 34 24             	mov    %esi,(%esp)
 8749cb2:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8749cb5:	e8 76 d0 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8749cba:	89 34 24             	mov    %esi,(%esp)
 8749cbd:	89 45 88             	mov    %eax,-0x78(%ebp)
 8749cc0:	e8 eb d0 04 00       	call   8796db0 <_ZNK5yaSSL12input_buffer8get_sizeEv>
 8749cc5:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8749cca:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 8749cd1:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8749cd4:	e8 c7 6f 00 00       	call   8750ca0 <_ZnwjN5yaSSL5new_tE>
 8749cd9:	8b 55 84             	mov    -0x7c(%ebp),%edx
 8749cdc:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 8749cdf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8749ce3:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8749ce6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8749cea:	89 04 24             	mov    %eax,(%esp)
 8749ced:	89 45 88             	mov    %eax,-0x78(%ebp)
 8749cf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8749cf4:	e8 77 d5 04 00       	call   8797270 <_ZN5yaSSL12input_bufferC1EjPKhj>
 8749cf9:	8b 45 88             	mov    -0x78(%ebp),%eax
 8749cfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749d00:	8b 45 10             	mov    0x10(%ebp),%eax
 8749d03:	89 04 24             	mov    %eax,(%esp)
 8749d06:	e8 85 89 00 00       	call   8752690 <_ZN5yaSSL3SSL7addDataEPNS_12input_bufferE>
 8749d0b:	89 34 24             	mov    %esi,(%esp)
 8749d0e:	e8 4d d6 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8749d13:	e9 9d fe ff ff       	jmp    8749bb5 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x125>
 8749d18:	8b 55 10             	mov    0x10(%ebp),%edx
 8749d1b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8749d22:	00 
 8749d23:	89 14 24             	mov    %edx,(%esp)
 8749d26:	e8 e5 4f 00 00       	call   874ed10 <_ZN5yaSSL3SSL16get_SEQIncrementEb>
 8749d2b:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8749d31:	5b                   	pop    %ebx
 8749d32:	5e                   	pop    %esi
 8749d33:	5f                   	pop    %edi
 8749d34:	5d                   	pop    %ebp
 8749d35:	c3                   	ret
 8749d36:	66 90                	xchg   %ax,%ax
 8749d38:	c7 44 24 04 ef be ed 	movl   $0xfeedbeef,0x4(%esp)
 8749d3f:	fe 
 8749d40:	89 3c 24             	mov    %edi,(%esp)
 8749d43:	e8 d8 d0 04 00       	call   8796e20 <_ZN5yaSSL12input_bufferixEj>
 8749d48:	e9 03 ff ff ff       	jmp    8749c50 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x1c0>
 8749d4d:	8d 76 00             	lea    0x0(%esi),%esi
 8749d50:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8749d53:	8b 55 10             	mov    0x10(%ebp),%edx
 8749d56:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8749d5d:	00 
 8749d5e:	c7 44 24 10 17 00 00 	movl   $0x17,0x10(%esp)
 8749d65:	00 
 8749d66:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8749d6a:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8749d6d:	89 74 24 08          	mov    %esi,0x8(%esp)
 8749d71:	89 44 24 04          	mov    %eax,0x4(%esp)
 8749d75:	89 14 24             	mov    %edx,(%esp)
 8749d78:	e8 53 38 05 00       	call   879d5d0 <_ZN5yaSSL4hmacERNS_3SSLEPhPKhjNS_11ContentTypeEb>
 8749d7d:	e9 79 fe ff ff       	jmp    8749bfb <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x16b>
 8749d82:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8749d88:	8b 45 10             	mov    0x10(%ebp),%eax
 8749d8b:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 8749d92:	00 
 8749d93:	89 04 24             	mov    %eax,(%esp)
 8749d96:	e8 35 42 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8749d9b:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 8749da1:	5b                   	pop    %ebx
 8749da2:	5e                   	pop    %esi
 8749da3:	5f                   	pop    %edi
 8749da4:	5d                   	pop    %ebp
 8749da5:	c3                   	ret
 8749da6:	66 90                	xchg   %ax,%ax
 8749da8:	8b 45 10             	mov    0x10(%ebp),%eax
 8749dab:	89 04 24             	mov    %eax,(%esp)
 8749dae:	e8 bd 4b 00 00       	call   874e970 <_ZNK5yaSSL3SSL9isTLSv1_1Ev>
 8749db3:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 8749dba:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8749dc1:	84 c0                	test   %al,%al
 8749dc3:	75 50                	jne    8749e15 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x385>
 8749dc5:	89 3c 24             	mov    %edi,(%esp)
 8749dc8:	e8 63 cf 04 00       	call   8796d30 <_ZNK5yaSSL12input_buffer10get_bufferEv>
 8749dcd:	89 3c 24             	mov    %edi,(%esp)
 8749dd0:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8749dd3:	e8 c8 cf 04 00       	call   8796da0 <_ZNK5yaSSL12input_buffer11get_currentEv>
 8749dd8:	8b 55 84             	mov    -0x7c(%ebp),%edx
 8749ddb:	8d 44 06 ff          	lea    -0x1(%esi,%eax,1),%eax
 8749ddf:	2b 45 a0             	sub    -0x60(%ebp),%eax
 8749de2:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 8749de6:	c7 45 90 01 00 00 00 	movl   $0x1,-0x70(%ebp)
 8749ded:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8749df0:	e9 fe fc ff ff       	jmp    8749af3 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x63>
 8749df5:	8b 55 10             	mov    0x10(%ebp),%edx
 8749df8:	c7 44 24 04 77 00 00 	movl   $0x77,0x4(%esp)
 8749dff:	00 
 8749e00:	89 14 24             	mov    %edx,(%esp)
 8749e03:	e8 c8 41 00 00       	call   874dfd0 <_ZN5yaSSL3SSL8SetErrorENS_10YasslErrorE>
 8749e08:	89 34 24             	mov    %esi,(%esp)
 8749e0b:	e8 50 d5 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8749e10:	e9 5b fe ff ff       	jmp    8749c70 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x1e0>
 8749e15:	8b 55 10             	mov    0x10(%ebp),%edx
 8749e18:	89 14 24             	mov    %edx,(%esp)
 8749e1b:	e8 40 42 00 00       	call   874e060 <_ZNK5yaSSL3SSL9getCryptoEv>
 8749e20:	89 04 24             	mov    %eax,(%esp)
 8749e23:	e8 38 49 00 00       	call   874e760 <_ZNK5yaSSL6Crypto10get_cipherEv>
 8749e28:	8b 10                	mov    (%eax),%edx
 8749e2a:	89 04 24             	mov    %eax,(%esp)
 8749e2d:	ff 52 10             	call   *0x10(%edx)
 8749e30:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8749e33:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8749e36:	eb 8d                	jmp    8749dc5 <_ZN5yaSSL4Data7ProcessERNS_12input_bufferERNS_3SSLE+0x335>
 8749e38:	90                   	nop
 8749e39:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Data::Process @ 0x8749a90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Data::Process(yaSSL::input_buffer&, yaSSL::SSL&) */

void __thiscall yaSSL::Data::Process(Data *this,input_buffer *param_1,SSL *param_2)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  Security *pSVar4;
  int iVar5;
  Crypto *pCVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  input_buffer *piVar10;
  uchar *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uchar *puVar15;
  bool bVar16;
  byte bVar17;
  uint in_stack_ffffff58;
  uint uVar18;
  int local_74;
  uint local_70;
  int local_60;
  uchar local_54 [20];
  uchar local_40 [20];
  input_buffer local_2c [24];
  undefined4 uStack_14;
  
  bVar17 = 0;
  uStack_14 = 0x8749a9b;
  pSVar4 = (Security *)SSL::getSecurity(param_2);
  iVar5 = Security::get_parms(pSVar4);
  uVar2 = *(ushort *)(iVar5 + 0x2a);
  pSVar4 = (Security *)SSL::getSecurity(param_2);
  iVar5 = Security::get_parms(pSVar4);
  if (*(int *)(iVar5 + 8) == 1) {
    cVar3 = SSL::isTLSv1_1(param_2);
    local_60 = 0;
    if (cVar3 != '\0') {
      pCVar6 = (Crypto *)SSL::getCrypto(param_2);
      piVar7 = (int *)Crypto::get_cipher(pCVar6);
      local_60 = (**(code **)(*piVar7 + 0x10))(piVar7);
    }
    iVar5 = input_buffer::get_buffer(param_1);
    iVar9 = input_buffer::get_current(param_1);
    local_70 = (uint)*(byte *)(iVar5 + (((uVar2 - 1) + iVar9) - local_60));
    local_74 = 1;
  }
  else {
    local_60 = 0;
    local_74 = 0;
    local_70 = 0;
  }
  pCVar6 = (Crypto *)SSL::getCrypto(param_2);
  piVar7 = (int *)Crypto::get_digest(pCVar6);
  uVar8 = (**(code **)(*piVar7 + 0xc))(piVar7);
  uVar1 = ((((uint)uVar2 - local_60) - uVar8) - local_70) - local_74;
  iVar5 = input_buffer::get_buffer(param_1);
  iVar9 = input_buffer::get_current(param_1);
  if (uVar1 != 0) {
    cVar3 = SSL::CompressionOn(param_2);
    if (cVar3 == '\0') {
      piVar10 = operator_new(0x10,in_stack_ffffff58 & 0xffffff00);
      input_buffer::input_buffer(piVar10,uVar1);
      SSL::addData(param_2,piVar10);
      puVar11 = (uchar *)input_buffer::get_buffer(piVar10);
      input_buffer::read(param_1,puVar11,uVar1);
      input_buffer::add_size(piVar10,uVar1);
    }
    else {
      input_buffer::input_buffer(local_2c);
      uVar18 = uVar1;
      iVar12 = DeCompress(param_1,uVar1,local_2c);
      if (iVar12 == -1) {
        SSL::SetError(param_2,0x77);
        input_buffer::~input_buffer(local_2c);
        return;
      }
      uVar13 = input_buffer::get_size(local_2c);
      puVar11 = (uchar *)input_buffer::get_buffer(local_2c);
      uVar14 = input_buffer::get_size(local_2c);
      piVar10 = operator_new(0x10,uVar18 & 0xffffff00);
      input_buffer::input_buffer(piVar10,uVar13,puVar11,uVar14);
      SSL::addData(param_2,piVar10);
      input_buffer::~input_buffer(local_2c);
    }
    cVar3 = SSL::isTLS(param_2);
    if (cVar3 == '\0') {
      hmac(param_2,local_40,iVar5 + iVar9,uVar1,0x17,1);
    }
    else {
      TLS_hmac(param_2,local_40,iVar5 + iVar9,uVar1,0x17,1);
    }
  }
  input_buffer::read(param_1,local_54,uVar8);
  if (local_70 != 0) {
    iVar5 = 0;
    do {
      iVar5 = iVar5 + 1;
      input_buffer::operator[]((uint)param_1);
    } while (iVar5 < (int)local_70);
  }
  if (local_74 != 0) {
    input_buffer::operator[]((uint)param_1);
  }
  if (uVar1 == 0) {
    SSL::get_SEQIncrement(param_2,true);
    return;
  }
  bVar16 = true;
  puVar11 = local_54;
  puVar15 = local_40;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    bVar16 = *puVar11 == *puVar15;
    puVar11 = puVar11 + (uint)bVar17 * -2 + 1;
    puVar15 = puVar15 + (uint)bVar17 * -2 + 1;
  } while (bVar16);
  if (bVar16) {
    return;
  }
  SSL::SetError(param_2,0x70);
  return;
}

```

---

## SetData

```asm
// === 08746c60 yaSSL::Data::SetData  [0x08746c60-0x8746c7f] ===
 8746c60:	55                   	push   %ebp
 8746c61:	89 e5                	mov    %esp,%ebp
 8746c63:	8b 45 08             	mov    0x8(%ebp),%eax
 8746c66:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746c69:	66 89 50 04          	mov    %dx,0x4(%eax)
 8746c6d:	8b 55 10             	mov    0x10(%ebp),%edx
 8746c70:	89 50 0c             	mov    %edx,0xc(%eax)
 8746c73:	5d                   	pop    %ebp
 8746c74:	c3                   	ret
 8746c75:	90                   	nop
 8746c76:	8d 76 00             	lea    0x0(%esi),%esi
 8746c79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Data::SetData @ 0x8746c60

/* yaSSL::Data::SetData(unsigned short, unsigned char const*) */

void __thiscall yaSSL::Data::SetData(Data *this,ushort param_1,uchar *param_2)

{
  *(ushort *)(this + 4) = param_1;
  *(uchar **)(this + 0xc) = param_2;
  return;
}

```

---

## get

```asm
// === 087485d0 yaSSL::Data::get  [0x087485d0-0x87485ff] ===
 87485d0:	55                   	push   %ebp
 87485d1:	89 e5                	mov    %esp,%ebp
 87485d3:	53                   	push   %ebx
 87485d4:	83 ec 14             	sub    $0x14,%esp
 87485d7:	8b 45 08             	mov    0x8(%ebp),%eax
 87485da:	e8 19 a8 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87485df:	81 c3 b9 45 c2 00    	add    $0xc245b9,%ebx
 87485e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 87485e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87485ec:	89 04 24             	mov    %eax,(%esp)
 87485ef:	e8 9c ff ff ff       	call   8748590 <_ZN5yaSSLlsERNS_13output_bufferERKNS_4DataE>
 87485f4:	83 c4 14             	add    $0x14,%esp
 87485f7:	5b                   	pop    %ebx
 87485f8:	5d                   	pop    %ebp
 87485f9:	c3                   	ret
 87485fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Data::get @ 0x87485d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Data::get(yaSSL::output_buffer&) const */

void __thiscall yaSSL::Data::get(Data *this,output_buffer *param_1)

{
  yaSSL::operator<<(param_1,this);
  return;
}

```

---

## get_length

```asm
// === 08746ca0 yaSSL::Data::get_length  [0x08746ca0-0x8746caf] ===
 8746ca0:	55                   	push   %ebp
 8746ca1:	89 e5                	mov    %esp,%ebp
 8746ca3:	8b 45 08             	mov    0x8(%ebp),%eax
 8746ca6:	5d                   	pop    %ebp
 8746ca7:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8746cab:	c3                   	ret
 8746cac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Data::get_length @ 0x8746ca0

/* yaSSL::Data::get_length() const */

undefined2 __thiscall yaSSL::Data::get_length(Data *this)

{
  return *(undefined2 *)(this + 4);
}

```

---

## get_type

```asm
// === 08746c90 yaSSL::Data::get_type  [0x08746c90-0x8746c9f] ===
 8746c90:	55                   	push   %ebp
 8746c91:	b8 17 00 00 00       	mov    $0x17,%eax
 8746c96:	89 e5                	mov    %esp,%ebp
 8746c98:	5d                   	pop    %ebp
 8746c99:	c3                   	ret
 8746c9a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Data::get_type @ 0x8746c90

/* yaSSL::Data::get_type() const */

undefined4 yaSSL::Data::get_type(void)

{
  return 0x17;
}

```

---

## set

```asm
// === 08746c80 yaSSL::Data::set  [0x08746c80-0x8746c8f] ===
 8746c80:	55                   	push   %ebp
 8746c81:	89 e5                	mov    %esp,%ebp
 8746c83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8746c86:	5d                   	pop    %ebp
 8746c87:	c3                   	ret
 8746c88:	90                   	nop
 8746c89:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Data::set @ 0x8746c80

/* yaSSL::Data::set(yaSSL::input_buffer&) */

input_buffer * __thiscall yaSSL::Data::set(Data *this,input_buffer *param_1)

{
  return param_1;
}

```

---

## set_buffer

```asm
// === 08746cc0 yaSSL::Data::set_buffer  [0x08746cc0-0x8746ccf] ===
 8746cc0:	55                   	push   %ebp
 8746cc1:	89 e5                	mov    %esp,%ebp
 8746cc3:	8b 45 08             	mov    0x8(%ebp),%eax
 8746cc6:	5d                   	pop    %ebp
 8746cc7:	8b 40 08             	mov    0x8(%eax),%eax
 8746cca:	c3                   	ret
 8746ccb:	90                   	nop
 8746ccc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Data::set_buffer @ 0x8746cc0

/* yaSSL::Data::set_buffer() */

undefined4 __thiscall yaSSL::Data::set_buffer(Data *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## set_length

```asm
// === 08746cb0 yaSSL::Data::set_length  [0x08746cb0-0x8746cbf] ===
 8746cb0:	55                   	push   %ebp
 8746cb1:	89 e5                	mov    %esp,%ebp
 8746cb3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8746cb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8746cb9:	66 89 50 04          	mov    %dx,0x4(%eax)
 8746cbd:	5d                   	pop    %ebp
 8746cbe:	c3                   	ret
 8746cbf:	90                   	nop

```

```c
// yaSSL::Data::set_length @ 0x8746cb0

/* yaSSL::Data::set_length(unsigned short) */

void __thiscall yaSSL::Data::set_length(Data *this,ushort param_1)

{
  *(ushort *)(this + 4) = param_1;
  return;
}

```

