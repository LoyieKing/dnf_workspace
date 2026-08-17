# Gm_List

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## Gm_List

```asm
// === 08299912 Gm_List::Gm_List  [0x08299912-0x8299947] ===
 8299912:	55                   	push   %ebp
 8299913:	89 e5                	mov    %esp,%ebp
 8299915:	83 ec 18             	sub    $0x18,%esp
 8299918:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 829991d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8299924:	00 
 8299925:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 829992c:	00 
 829992d:	89 04 24             	mov    %eax,(%esp)
 8299930:	e8 09 b9 15 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8299935:	8b 55 08             	mov    0x8(%ebp),%edx
 8299938:	89 02                	mov    %eax,(%edx)
 829993a:	8b 45 08             	mov    0x8(%ebp),%eax
 829993d:	89 04 24             	mov    %eax,(%esp)
 8299940:	e8 27 00 00 00       	call   829996c <_ZN7Gm_List16LoadGmListFromDbEv>
 8299945:	c9                   	leave
 8299946:	c3                   	ret
 8299947:	90                   	nop

```

```c
// Gm_List::Gm_List @ 0x8299912

/* Gm_List::Gm_List() */

void __thiscall Gm_List::Gm_List(Gm_List *this)

{
  undefined4 uVar1;
  
  uVar1 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,6,0);
  *(undefined4 *)this = uVar1;
  LoadGmListFromDb(this);
  return;
}

```

---

## LoadGmListFromDb

```asm
// === 0829996c Gm_List::LoadGmListFromDb  [0x0829996c-0x8299d53] ===
 829996c:	55                   	push   %ebp
 829996d:	89 e5                	mov    %esp,%ebp
 829996f:	56                   	push   %esi
 8299970:	53                   	push   %ebx
 8299971:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 8299977:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 829997b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8299982:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8299989:	c7 45 88 00 00 00 00 	movl   $0x0,-0x78(%ebp)
 8299990:	8b 45 08             	mov    0x8(%ebp),%eax
 8299993:	8b 00                	mov    (%eax),%eax
 8299995:	c7 44 24 04 08 71 c1 	movl   $0x8c17108,0x4(%esp)
 829999c:	08 
 829999d:	89 04 24             	mov    %eax,(%esp)
 82999a0:	e8 1b a8 15 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 82999a5:	8b 45 08             	mov    0x8(%ebp),%eax
 82999a8:	8b 00                	mov    (%eax),%eax
 82999aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82999b1:	00 
 82999b2:	89 04 24             	mov    %eax,(%esp)
 82999b5:	e8 6c a9 15 00       	call   83f4326 <_ZN5MySQL4execEb>
 82999ba:	88 45 ef             	mov    %al,-0x11(%ebp)
 82999bd:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 82999c1:	83 f0 01             	xor    $0x1,%eax
 82999c4:	84 c0                	test   %al,%al
 82999c6:	74 50                	je     8299a18 <_ZN7Gm_List16LoadGmListFromDbEv+0xac>
 82999c8:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 82999cf:	00 
 82999d0:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 82999d7:	00 
 82999d8:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 82999df:	00 
 82999e0:	c7 44 24 08 d4 15 00 	movl   $0x15d4,0x8(%esp)
 82999e7:	00 
 82999e8:	c7 44 24 04 e0 b1 c1 	movl   $0x8c1b1e0,0x4(%esp)
 82999ef:	08 
 82999f0:	8d 45 90             	lea    -0x70(%ebp),%eax
 82999f3:	89 04 24             	mov    %eax,(%esp)
 82999f6:	e8 4b 5d 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 82999fb:	c7 44 24 04 2c 71 c1 	movl   $0x8c1712c,0x4(%esp)
 8299a02:	08 
 8299a03:	8d 45 90             	lea    -0x70(%ebp),%eax
 8299a06:	89 04 24             	mov    %eax,(%esp)
 8299a09:	e8 7a 5d 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8299a0e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8299a13:	e9 2f 03 00 00       	jmp    8299d47 <_ZN7Gm_List16LoadGmListFromDbEv+0x3db>
 8299a18:	a1 10 f7 41 09       	mov    0x941f710,%eax
 8299a1d:	89 04 24             	mov    %eax,(%esp)
 8299a20:	e8 eb fa e6 ff       	call   8109510 <_ZN8WongWork11CGMAccounts11clearGmListEv>
 8299a25:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8299a28:	89 04 24             	mov    %eax,(%esp)
 8299a2b:	e8 a0 cb 46 00       	call   87065d0 <_ZNSsC1Ev>
 8299a30:	8b 45 08             	mov    0x8(%ebp),%eax
 8299a33:	8b 00                	mov    (%eax),%eax
 8299a35:	89 04 24             	mov    %eax,(%esp)
 8299a38:	e8 2f 89 e4 ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 8299a3d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8299a40:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8299a47:	e9 3b 02 00 00       	jmp    8299c87 <_ZN7Gm_List16LoadGmListFromDbEv+0x31b>
 8299a4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8299a4f:	8b 00                	mov    (%eax),%eax
 8299a51:	89 04 24             	mov    %eax,(%esp)
 8299a54:	e8 63 aa 15 00       	call   83f44bc <_ZN5MySQL5fetchEv>
 8299a59:	8b 45 08             	mov    0x8(%ebp),%eax
 8299a5c:	8b 00                	mov    (%eax),%eax
 8299a5e:	8d 55 8c             	lea    -0x74(%ebp),%edx
 8299a61:	89 54 24 08          	mov    %edx,0x8(%esp)
 8299a65:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8299a6c:	00 
 8299a6d:	89 04 24             	mov    %eax,(%esp)
 8299a70:	e8 39 88 e4 ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 8299a75:	88 45 ef             	mov    %al,-0x11(%ebp)
 8299a78:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8299a7c:	83 f0 01             	xor    $0x1,%eax
 8299a7f:	84 c0                	test   %al,%al
 8299a81:	74 50                	je     8299ad3 <_ZN7Gm_List16LoadGmListFromDbEv+0x167>
 8299a83:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8299a8a:	00 
 8299a8b:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8299a92:	00 
 8299a93:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8299a9a:	00 
 8299a9b:	c7 44 24 08 e5 15 00 	movl   $0x15e5,0x8(%esp)
 8299aa2:	00 
 8299aa3:	c7 44 24 04 e0 b1 c1 	movl   $0x8c1b1e0,0x4(%esp)
 8299aaa:	08 
 8299aab:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8299aae:	89 04 24             	mov    %eax,(%esp)
 8299ab1:	e8 90 5c 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8299ab6:	c7 44 24 04 4c 71 c1 	movl   $0x8c1714c,0x4(%esp)
 8299abd:	08 
 8299abe:	8d 45 a0             	lea    -0x60(%ebp),%eax
 8299ac1:	89 04 24             	mov    %eax,(%esp)
 8299ac4:	e8 bf 5c 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8299ac9:	bb 00 00 00 00       	mov    $0x0,%ebx
 8299ace:	e9 69 02 00 00       	jmp    8299d3c <_ZN7Gm_List16LoadGmListFromDbEv+0x3d0>
 8299ad3:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8299ad6:	89 04 24             	mov    %eax,(%esp)
 8299ad9:	e8 f2 65 44 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 8299ade:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8299ae1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8299ae8:	00 
 8299ae9:	89 04 24             	mov    %eax,(%esp)
 8299aec:	e8 5a f5 e6 ff       	call   810904b <_Z14NumberToStringji>
 8299af1:	8d 55 bb             	lea    -0x45(%ebp),%edx
 8299af4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8299af8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8299afc:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8299aff:	89 04 24             	mov    %eax,(%esp)
 8299b02:	e8 29 db 46 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8299b07:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8299b0a:	c7 44 24 08 04 72 c1 	movl   $0x8c17204,0x8(%esp)
 8299b11:	08 
 8299b12:	8d 55 b4             	lea    -0x4c(%ebp),%edx
 8299b15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299b19:	89 04 24             	mov    %eax,(%esp)
 8299b1c:	e8 58 2c ed ff       	call   816c779 <_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_PKS3_>
 8299b21:	83 ec 04             	sub    $0x4,%esp
 8299b24:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8299b27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8299b2b:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8299b2e:	89 04 24             	mov    %eax,(%esp)
 8299b31:	e8 0a e6 46 00       	call   8708140 <_ZNSs6appendERKSs>
 8299b36:	eb 15                	jmp    8299b4d <_ZN7Gm_List16LoadGmListFromDbEv+0x1e1>
 8299b38:	89 d3                	mov    %edx,%ebx
 8299b3a:	89 c6                	mov    %eax,%esi
 8299b3c:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8299b3f:	89 04 24             	mov    %eax,(%esp)
 8299b42:	e8 99 e0 46 00       	call   8707be0 <_ZNSsD1Ev>
 8299b47:	89 f0                	mov    %esi,%eax
 8299b49:	89 da                	mov    %ebx,%edx
 8299b4b:	eb 0d                	jmp    8299b5a <_ZN7Gm_List16LoadGmListFromDbEv+0x1ee>
 8299b4d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 8299b50:	89 04 24             	mov    %eax,(%esp)
 8299b53:	e8 88 e0 46 00       	call   8707be0 <_ZNSsD1Ev>
 8299b58:	eb 15                	jmp    8299b6f <_ZN7Gm_List16LoadGmListFromDbEv+0x203>
 8299b5a:	89 d3                	mov    %edx,%ebx
 8299b5c:	89 c6                	mov    %eax,%esi
 8299b5e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8299b61:	89 04 24             	mov    %eax,(%esp)
 8299b64:	e8 77 e0 46 00       	call   8707be0 <_ZNSsD1Ev>
 8299b69:	89 f0                	mov    %esi,%eax
 8299b6b:	89 da                	mov    %ebx,%edx
 8299b6d:	eb 0d                	jmp    8299b7c <_ZN7Gm_List16LoadGmListFromDbEv+0x210>
 8299b6f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8299b72:	89 04 24             	mov    %eax,(%esp)
 8299b75:	e8 66 e0 46 00       	call   8707be0 <_ZNSsD1Ev>
 8299b7a:	eb 18                	jmp    8299b94 <_ZN7Gm_List16LoadGmListFromDbEv+0x228>
 8299b7c:	89 d3                	mov    %edx,%ebx
 8299b7e:	89 c6                	mov    %eax,%esi
 8299b80:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8299b83:	89 04 24             	mov    %eax,(%esp)
 8299b86:	e8 65 65 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8299b8b:	89 f0                	mov    %esi,%eax
 8299b8d:	89 da                	mov    %ebx,%edx
 8299b8f:	e9 8d 01 00 00       	jmp    8299d21 <_ZN7Gm_List16LoadGmListFromDbEv+0x3b5>
 8299b94:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8299b97:	89 04 24             	mov    %eax,(%esp)
 8299b9a:	e8 51 65 44 00       	call   86e00f0 <_ZNSaIcED1Ev>
 8299b9f:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8299ba2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8299ba9:	00 
 8299baa:	89 04 24             	mov    %eax,(%esp)
 8299bad:	e8 99 f4 e6 ff       	call   810904b <_Z14NumberToStringji>
 8299bb2:	89 c3                	mov    %eax,%ebx
 8299bb4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8299bbb:	00 
 8299bbc:	c7 44 24 08 ec 15 00 	movl   $0x15ec,0x8(%esp)
 8299bc3:	00 
 8299bc4:	c7 44 24 04 e0 b1 c1 	movl   $0x8c1b1e0,0x4(%esp)
 8299bcb:	08 
 8299bcc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8299bcf:	89 04 24             	mov    %eax,(%esp)
 8299bd2:	e8 41 5b 2b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8299bd7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8299bdb:	c7 44 24 04 07 72 c1 	movl   $0x8c17207,0x4(%esp)
 8299be2:	08 
 8299be3:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8299be6:	89 04 24             	mov    %eax,(%esp)
 8299be9:	e8 9a 5b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8299bee:	8b 45 08             	mov    0x8(%ebp),%eax
 8299bf1:	8b 00                	mov    (%eax),%eax
 8299bf3:	8d 55 88             	lea    -0x78(%ebp),%edx
 8299bf6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8299bfa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8299c01:	00 
 8299c02:	89 04 24             	mov    %eax,(%esp)
 8299c05:	e8 22 cd e7 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 8299c0a:	88 45 ef             	mov    %al,-0x11(%ebp)
 8299c0d:	0f b6 45 ef          	movzbl -0x11(%ebp),%eax
 8299c11:	83 f0 01             	xor    $0x1,%eax
 8299c14:	84 c0                	test   %al,%al
 8299c16:	74 50                	je     8299c68 <_ZN7Gm_List16LoadGmListFromDbEv+0x2fc>
 8299c18:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8299c1f:	00 
 8299c20:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8299c27:	00 
 8299c28:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8299c2f:	00 
 8299c30:	c7 44 24 08 f2 15 00 	movl   $0x15f2,0x8(%esp)
 8299c37:	00 
 8299c38:	c7 44 24 04 e0 b1 c1 	movl   $0x8c1b1e0,0x4(%esp)
 8299c3f:	08 
 8299c40:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8299c43:	89 04 24             	mov    %eax,(%esp)
 8299c46:	e8 fb 5a 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8299c4b:	c7 44 24 04 70 71 c1 	movl   $0x8c17170,0x4(%esp)
 8299c52:	08 
 8299c53:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8299c56:	89 04 24             	mov    %eax,(%esp)
 8299c59:	e8 2a 5b 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8299c5e:	bb 00 00 00 00       	mov    $0x0,%ebx
 8299c63:	e9 d4 00 00 00       	jmp    8299d3c <_ZN7Gm_List16LoadGmListFromDbEv+0x3d0>
 8299c68:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 8299c6b:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8299c6e:	a1 10 f7 41 09       	mov    0x941f710,%eax
 8299c73:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8299c77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299c7b:	89 04 24             	mov    %eax,(%esp)
 8299c7e:	e8 67 f8 e6 ff       	call   81094ea <_ZN8WongWork11CGMAccounts10LoadGmListEji>
 8299c83:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8299c87:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8299c8a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8299c8d:	0f 9c c0             	setl   %al
 8299c90:	84 c0                	test   %al,%al
 8299c92:	0f 85 b4 fd ff ff    	jne    8299a4c <_ZN7Gm_List16LoadGmListFromDbEv+0xe0>
 8299c98:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8299c9b:	89 04 24             	mov    %eax,(%esp)
 8299c9e:	e8 4d c8 46 00       	call   87064f0 <_ZNKSs5c_strEv>
 8299ca3:	89 c3                	mov    %eax,%ebx
 8299ca5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8299cac:	00 
 8299cad:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 8299cb4:	00 
 8299cb5:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 8299cbc:	00 
 8299cbd:	c7 44 24 08 f9 15 00 	movl   $0x15f9,0x8(%esp)
 8299cc4:	00 
 8299cc5:	c7 44 24 04 e0 b1 c1 	movl   $0x8c1b1e0,0x4(%esp)
 8299ccc:	08 
 8299ccd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8299cd0:	89 04 24             	mov    %eax,(%esp)
 8299cd3:	e8 6e 5a 2b 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 8299cd8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8299cdc:	c7 44 24 04 14 72 c1 	movl   $0x8c17214,0x4(%esp)
 8299ce3:	08 
 8299ce4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8299ce7:	89 04 24             	mov    %eax,(%esp)
 8299cea:	e8 99 5a 2b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8299cef:	e8 8d 24 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8299cf4:	89 04 24             	mov    %eax,(%esp)
 8299cf7:	e8 ce 0d eb ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 8299cfc:	83 f8 01             	cmp    $0x1,%eax
 8299cff:	0f 94 c0             	sete   %al
 8299d02:	84 c0                	test   %al,%al
 8299d04:	74 15                	je     8299d1b <_ZN7Gm_List16LoadGmListFromDbEv+0x3af>
 8299d06:	a1 70 f7 41 09       	mov    0x941f770,%eax
 8299d0b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8299d12:	00 
 8299d13:	89 04 24             	mov    %eax,(%esp)
 8299d16:	e8 39 00 00 00       	call   8299d54 <_ZN7Gm_List25SendGMList_To_UpperServerEi>
 8299d1b:	0f b6 5d ef          	movzbl -0x11(%ebp),%ebx
 8299d1f:	eb 1b                	jmp    8299d3c <_ZN7Gm_List16LoadGmListFromDbEv+0x3d0>
 8299d21:	89 d3                	mov    %edx,%ebx
 8299d23:	89 c6                	mov    %eax,%esi
 8299d25:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8299d28:	89 04 24             	mov    %eax,(%esp)
 8299d2b:	e8 b0 de 46 00       	call   8707be0 <_ZNSsD1Ev>
 8299d30:	89 f0                	mov    %esi,%eax
 8299d32:	89 da                	mov    %ebx,%edx
 8299d34:	89 04 24             	mov    %eax,(%esp)
 8299d37:	e8 14 9a 84 00       	call   8ae3750 <_Unwind_Resume>
 8299d3c:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8299d3f:	89 04 24             	mov    %eax,(%esp)
 8299d42:	e8 99 de 46 00       	call   8707be0 <_ZNSsD1Ev>
 8299d47:	89 d8                	mov    %ebx,%eax
 8299d49:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8299d4c:	83 c4 00             	add    $0x0,%esp
 8299d4f:	5b                   	pop    %ebx
 8299d50:	5e                   	pop    %esi
 8299d51:	5d                   	pop    %ebp
 8299d52:	c3                   	ret
 8299d53:	90                   	nop

```

```c
// Gm_List::LoadGmListFromDb @ 0x829996c

/* Gm_List::LoadGmListFromDb() */

char __thiscall Gm_List::LoadGmListFromDb(Gm_List *this)

{
  char *pcVar1;
  undefined4 uVar2;
  CEnvironment *this_00;
  int iVar3;
  char cVar4;
  string local_80 [4];
  int local_7c;
  uint local_78;
  cMyTrace local_74 [16];
  cMyTrace local_64 [16];
  string local_54;
  string local_50;
  allocator<char> local_49;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [19];
  char local_15;
  int local_14;
  int local_10;
  
  local_15 = 0;
  local_14 = 0;
  local_78 = 0;
  local_7c = 0;
  MySQL::set_query(*(MySQL **)this,"seLect m_id, level from gm_manifest");
  local_15 = MySQL::exec(*(MySQL **)this,true);
  if (local_15 == '\x01') {
    WongWork::CGMAccounts::clearGmList(GlobalData::s_pGMAccounts_);
    std::string::string(local_80);
    local_14 = MySQL::get_n_rows(*(MySQL **)this);
    for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
                    /* try { // try from 08299a54 to 08299ac8 has its CatchHandler @ 08299d21 */
      MySQL::fetch(*(MySQL **)this);
      local_15 = MySQL::get_int(*(MySQL **)this,0,&local_78);
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_64,"bool Gm_List::LoadGmListFromDb()",0x15e5,9,true,true);
        cMyTrace::operator()(local_64,"Failed to get GM\'s m_id from DB.");
        cVar4 = '\0';
        goto LAB_08299d3c;
      }
      std::allocator<char>::allocator();
                    /* try { // try from 08299aec to 08299b06 has its CatchHandler @ 08299b7c */
      pcVar1 = (char *)NumberToString(local_78,0);
      std::string::string((string *)&local_50,pcVar1,(allocator *)&local_49);
                    /* try { // try from 08299b1c to 08299b20 has its CatchHandler @ 08299b5a */
      std::operator+(&local_54,&local_50,", ");
                    /* try { // try from 08299b31 to 08299b35 has its CatchHandler @ 08299b38 */
      std::string::append(local_80,(string *)&local_54);
                    /* try { // try from 08299b53 to 08299b57 has its CatchHandler @ 08299b5a */
      std::string::~string((string *)&local_54);
                    /* try { // try from 08299b75 to 08299b79 has its CatchHandler @ 08299b7c */
      std::string::~string((string *)&local_50);
      std::allocator<char>::~allocator(&local_49);
                    /* try { // try from 08299bad to 08299d1a has its CatchHandler @ 08299d21 */
      uVar2 = NumberToString(local_78,0);
      cMyTrace::cMyTrace(local_48,"bool Gm_List::LoadGmListFromDb()",0x15ec,0);
      cMyTrace::operator()(local_48,"GM M_ID : %s",uVar2);
      local_15 = MySQL::get_int(*(MySQL **)this,1,&local_7c);
      if (local_15 != '\x01') {
        cMyTrace::cMyTrace(local_38,"bool Gm_List::LoadGmListFromDb()",0x15f2,9,true,true);
        cMyTrace::operator()(local_38,"Failed to get GM\'s lv from DB.");
        cVar4 = '\0';
        goto LAB_08299d3c;
      }
      WongWork::CGMAccounts::LoadGmList(GlobalData::s_pGMAccounts_,local_78,local_7c);
    }
    uVar2 = std::string::c_str(local_80);
    cMyTrace::cMyTrace(local_28,"bool Gm_List::LoadGmListFromDb()",0x15f9,9,true,true);
    cMyTrace::operator()(local_28,"\t- GM m_id: %s",uVar2);
    this_00 = (CEnvironment *)G_CEnvironment();
    iVar3 = CEnvironment::get_channel_no(this_00);
    cVar4 = local_15;
    if (iVar3 == 1) {
      SendGMList_To_UpperServer(GlobalData::gmList,0);
      cVar4 = local_15;
    }
LAB_08299d3c:
    std::string::~string(local_80);
  }
  else {
    cMyTrace::cMyTrace(local_74,"bool Gm_List::LoadGmListFromDb()",0x15d4,9,true,true);
    cMyTrace::operator()(local_74,"Failed to get GM list from DB.");
    cVar4 = '\0';
  }
  return cVar4;
}

```

---

## SendGMList_To_UpperServer

```asm
// === 08299d54 Gm_List::SendGMList_To_UpperServer  [0x08299d54-0x8299f39] ===
 8299d54:	55                   	push   %ebp
 8299d55:	89 e5                	mov    %esp,%ebp
 8299d57:	53                   	push   %ebx
 8299d58:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 8299d5e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8299d62:	74 0a                	je     8299d6e <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1a>
 8299d64:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8299d68:	0f 85 c5 01 00 00    	jne    8299f33 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1df>
 8299d6e:	e8 0e 24 e3 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8299d73:	89 04 24             	mov    %eax,(%esp)
 8299d76:	e8 65 cf e6 ff       	call   8106ce0 <_ZN12CEnvironment16get_server_groupEv>
 8299d7b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8299d7e:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 8299d84:	89 04 24             	mov    %eax,(%esp)
 8299d87:	e8 20 a3 00 00       	call   82a40ac <_ZN19Packet_Sync_GM_ListC1Ev>
 8299d8c:	a1 10 f7 41 09       	mov    0x941f710,%eax
 8299d91:	89 04 24             	mov    %eax,(%esp)
 8299d94:	e8 ef d5 00 00       	call   82a7388 <_ZNK8WongWork11CGMAccounts9GetGMListEv>
 8299d99:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8299d9c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8299d9f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8299da2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299da6:	89 04 24             	mov    %eax,(%esp)
 8299da9:	e8 5e f9 e6 ff       	call   810970c <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE5beginEv>
 8299dae:	83 ec 04             	sub    $0x4,%esp
 8299db1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8299db8:	e9 cc 00 00 00       	jmp    8299e89 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x135>
 8299dbd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8299dc0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8299dc3:	89 04 24             	mov    %eax,(%esp)
 8299dc6:	e8 b1 91 01 00       	call   82b2f7c <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEptEv>
 8299dcb:	8b 00                	mov    (%eax),%eax
 8299dcd:	89 44 9d 80          	mov    %eax,-0x80(%ebp,%ebx,4)
 8299dd1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8299dd4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8299dd7:	89 04 24             	mov    %eax,(%esp)
 8299dda:	e8 9d 91 01 00       	call   82b2f7c <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEptEv>
 8299ddf:	8b 40 04             	mov    0x4(%eax),%eax
 8299de2:	88 44 1d d0          	mov    %al,-0x30(%ebp,%ebx,1)
 8299de6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8299dea:	83 7d f4 14          	cmpl   $0x14,-0xc(%ebp)
 8299dee:	0f 85 8a 00 00 00    	jne    8299e7e <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x12a>
 8299df4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8299df7:	88 85 7f ff ff ff    	mov    %al,-0x81(%ebp)
 8299dfd:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8299e01:	75 30                	jne    8299e33 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0xdf>
 8299e03:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 8299e09:	a1 2c be 40 09       	mov    0x940be2c,%eax
 8299e0e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8299e11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299e15:	89 04 24             	mov    %eax,(%esp)
 8299e18:	e8 9b 35 e8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8299e1d:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 8299e24:	00 
 8299e25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8299e29:	89 04 24             	mov    %eax,(%esp)
 8299e2c:	e8 9d 3e 1d 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 8299e31:	eb 34                	jmp    8299e67 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x113>
 8299e33:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8299e37:	75 2e                	jne    8299e67 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x113>
 8299e39:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 8299e3f:	a1 28 be 40 09       	mov    0x940be28,%eax
 8299e44:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8299e47:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299e4b:	89 04 24             	mov    %eax,(%esp)
 8299e4e:	e8 37 82 e7 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8299e53:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 8299e5a:	00 
 8299e5b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8299e5f:	89 04 24             	mov    %eax,(%esp)
 8299e62:	e8 dd 6f 1d 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8299e67:	0f b6 85 7e ff ff ff 	movzbl -0x82(%ebp),%eax
 8299e6e:	83 c0 01             	add    $0x1,%eax
 8299e71:	88 85 7e ff ff ff    	mov    %al,-0x82(%ebp)
 8299e77:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8299e7e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8299e81:	89 04 24             	mov    %eax,(%esp)
 8299e84:	e8 03 fc e6 ff       	call   8109a8c <_ZNSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEppEv>
 8299e89:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8299e8c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8299e8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299e93:	89 04 24             	mov    %eax,(%esp)
 8299e96:	e8 97 f8 e6 ff       	call   8109732 <_ZNKSt4listIN8WongWork11CGMAccounts10stGMInfo_tESaIS2_EE3endEv>
 8299e9b:	83 ec 04             	sub    $0x4,%esp
 8299e9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8299ea1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8299ea5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8299ea8:	89 04 24             	mov    %eax,(%esp)
 8299eab:	e8 fa f8 e6 ff       	call   81097aa <_ZNKSt20_List_const_iteratorIN8WongWork11CGMAccounts10stGMInfo_tEEneERKS3_>
 8299eb0:	84 c0                	test   %al,%al
 8299eb2:	0f 85 05 ff ff ff    	jne    8299dbd <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x69>
 8299eb8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8299ebc:	74 76                	je     8299f34 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1e0>
 8299ebe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8299ec1:	88 85 7f ff ff ff    	mov    %al,-0x81(%ebp)
 8299ec7:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 8299ecb:	75 30                	jne    8299efd <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1a9>
 8299ecd:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 8299ed3:	a1 2c be 40 09       	mov    0x940be2c,%eax
 8299ed8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8299edb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299edf:	89 04 24             	mov    %eax,(%esp)
 8299ee2:	e8 d1 34 e8 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8299ee7:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 8299eee:	00 
 8299eef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8299ef3:	89 04 24             	mov    %eax,(%esp)
 8299ef6:	e8 d3 3d 1d 00       	call   846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>
 8299efb:	eb 37                	jmp    8299f34 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1e0>
 8299efd:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8299f01:	75 31                	jne    8299f34 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1e0>
 8299f03:	8d 9d 74 ff ff ff    	lea    -0x8c(%ebp),%ebx
 8299f09:	a1 28 be 40 09       	mov    0x940be28,%eax
 8299f0e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8299f11:	89 54 24 04          	mov    %edx,0x4(%esp)
 8299f15:	89 04 24             	mov    %eax,(%esp)
 8299f18:	e8 6d 81 e7 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 8299f1d:	c7 44 24 08 70 00 00 	movl   $0x70,0x8(%esp)
 8299f24:	00 
 8299f25:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8299f29:	89 04 24             	mov    %eax,(%esp)
 8299f2c:	e8 13 6f 1d 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 8299f31:	eb 01                	jmp    8299f34 <_ZN7Gm_List25SendGMList_To_UpperServerEi+0x1e0>
 8299f33:	90                   	nop
 8299f34:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8299f37:	c9                   	leave
 8299f38:	c3                   	ret
 8299f39:	90                   	nop

```

```c
// Gm_List::SendGMList_To_UpperServer @ 0x8299d54

/* Gm_List::SendGMList_To_UpperServer(int) */

void __thiscall Gm_List::SendGMList_To_UpperServer(Gm_List *this,int param_1)

{
  int iVar1;
  char cVar2;
  CEnvironment *this_00;
  undefined4 *puVar3;
  int iVar4;
  CGuildServerProxy *pCVar5;
  CMonitorServerProxy *pCVar6;
  Packet_Sync_GM_List local_90 [10];
  char local_86;
  undefined1 local_85;
  undefined4 auStack_84 [20];
  undefined1 auStack_34 [20];
  _List_const_iterator<WongWork::CGMAccounts::stGMInfo_t> local_20 [4];
  _List_const_iterator local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  if ((param_1 == 0) || (param_1 == 1)) {
    this_00 = (CEnvironment *)G_CEnvironment();
    local_18 = CEnvironment::get_server_group(this_00);
    Packet_Sync_GM_List::Packet_Sync_GM_List(local_90);
    local_14 = WongWork::CGMAccounts::GetGMList(GlobalData::s_pGMAccounts_);
    std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>::
    begin();
    local_10 = 0;
    while( true ) {
      std::list<WongWork::CGMAccounts::stGMInfo_t,std::allocator<WongWork::CGMAccounts::stGMInfo_t>>
      ::end();
      cVar2 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator!=
                        (local_20,local_1c);
      iVar1 = local_10;
      if (cVar2 == '\0') break;
      puVar3 = (undefined4 *)
               std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator->(local_20);
      auStack_84[iVar1] = *puVar3;
      iVar1 = local_10;
      iVar4 = std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator->(local_20);
      auStack_34[iVar1] = (char)*(undefined4 *)(iVar4 + 4);
      local_10 = local_10 + 1;
      if (local_10 == 0x14) {
        local_85 = 0x14;
        if (param_1 == 1) {
          pCVar5 = (CGuildServerProxy *)
                   CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                             (GlobalData::s_guild_proxy_mgr,local_18);
          CGuildServerProxy::SendTcpPacket(pCVar5,(char *)local_90,0x70);
        }
        else if (param_1 == 0) {
          pCVar6 = (CMonitorServerProxy *)
                   CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                             (GlobalData::s_monitor_proxy_mgr,local_18);
          CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_90,0x70);
        }
        local_86 = local_86 + '\x01';
        local_10 = 0;
      }
      std::_List_const_iterator<WongWork::CGMAccounts::stGMInfo_t>::operator++(local_20);
    }
    if (local_10 != 0) {
      local_85 = (undefined1)local_10;
      if (param_1 == 1) {
        pCVar5 = (CGuildServerProxy *)
                 CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                           (GlobalData::s_guild_proxy_mgr,local_18);
        CGuildServerProxy::SendTcpPacket(pCVar5,(char *)local_90,0x70);
      }
      else if (param_1 == 0) {
        pCVar6 = (CMonitorServerProxy *)
                 CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                           (GlobalData::s_monitor_proxy_mgr,local_18);
        CMonitorServerProxy::SendTcpPacket(pCVar6,(char *)local_90,0x70);
      }
    }
  }
  return;
}

```

---

## ~Gm_List

```asm
// === 08299948 Gm_List::~Gm_List  [0x08299948-0x829996b] ===
 8299948:	55                   	push   %ebp
 8299949:	89 e5                	mov    %esp,%ebp
 829994b:	83 ec 18             	sub    $0x18,%esp
 829994e:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8299952:	74 16                	je     829996a <_ZN7Gm_ListD1Ev+0x22>
 8299954:	8b 45 08             	mov    0x8(%ebp),%eax
 8299957:	89 04 24             	mov    %eax,(%esp)
 829995a:	e8 e9 ff ff ff       	call   8299948 <_ZN7Gm_ListD1Ev>
 829995f:	8b 45 08             	mov    0x8(%ebp),%eax
 8299962:	89 04 24             	mov    %eax,(%esp)
 8299965:	e8 86 ab 48 00       	call   87244f0 <_ZdlPv>
 829996a:	c9                   	leave
 829996b:	c3                   	ret

```

```c
// Gm_List::~Gm_List @ 0x8299948

/* Gm_List::~Gm_List() */

void __thiscall Gm_List::~Gm_List(Gm_List *this)

{
  if (this != (Gm_List *)0x0) {
    ~Gm_List(this);
    operator_delete(this);
  }
  return;
}

```

