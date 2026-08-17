# ItemVendingMachine

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 23

---

## BillingRecord

```asm
// === 0817991e ItemVendingMachine::BillingRecord  [0x0817991e-0x8179ead] ===
 817991e:	55                   	push   %ebp
 817991f:	89 e5                	mov    %esp,%ebp
 8179921:	56                   	push   %esi
 8179922:	53                   	push   %ebx
 8179923:	81 ec 70 01 00 00    	sub    $0x170,%esp
 8179929:	8b 45 30             	mov    0x30(%ebp),%eax
 817992c:	8b 55 28             	mov    0x28(%ebp),%edx
 817992f:	89 95 b0 fe ff ff    	mov    %edx,-0x150(%ebp)
 8179935:	8b 55 2c             	mov    0x2c(%ebp),%edx
 8179938:	89 95 b4 fe ff ff    	mov    %edx,-0x14c(%ebp)
 817993e:	88 85 ac fe ff ff    	mov    %al,-0x154(%ebp)
 8179944:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8179949:	c7 44 24 08 30 07 00 	movl   $0x730,0x8(%esp)
 8179950:	00 
 8179951:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8179958:	08 
 8179959:	89 04 24             	mov    %eax,(%esp)
 817995c:	e8 25 61 11 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8179961:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8179968:	00 
 8179969:	89 44 24 04          	mov    %eax,0x4(%esp)
 817996d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8179970:	89 04 24             	mov    %eax,(%esp)
 8179973:	e8 ae f2 f4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8179978:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817997b:	89 04 24             	mov    %eax,(%esp)
 817997e:	e8 c3 f2 f4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8179983:	c7 44 24 04 b0 00 00 	movl   $0xb0,0x4(%esp)
 817998a:	00 
 817998b:	89 04 24             	mov    %eax,(%esp)
 817998e:	e8 c3 f2 f4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8179993:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179996:	89 04 24             	mov    %eax,(%esp)
 8179999:	e8 f8 f2 f4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 817999e:	89 c3                	mov    %eax,%ebx
 81799a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81799a3:	89 04 24             	mov    %eax,(%esp)
 81799a6:	e8 9b f2 f4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 81799ab:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81799af:	89 04 24             	mov    %eax,(%esp)
 81799b2:	e8 9f f2 f4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 81799b7:	c7 44 24 08 0e 01 00 	movl   $0x10e,0x8(%esp)
 81799be:	00 
 81799bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81799c6:	00 
 81799c7:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 81799cd:	89 04 24             	mov    %eax,(%esp)
 81799d0:	e8 eb 42 f0 ff       	call   807dcc0 <memset@plt>
 81799d5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 81799d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81799dc:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 81799e2:	89 04 24             	mov    %eax,(%esp)
 81799e5:	e8 06 45 f0 ff       	call   807def0 <strcpy@plt>
 81799ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81799ed:	89 04 24             	mov    %eax,(%esp)
 81799f0:	e8 7d 76 f8 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 81799f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81799f9:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 81799ff:	83 c0 35             	add    $0x35,%eax
 8179a02:	89 04 24             	mov    %eax,(%esp)
 8179a05:	e8 e6 44 f0 ff       	call   807def0 <strcpy@plt>
 8179a0a:	c7 85 da fe ff ff 01 	movl   $0x1,-0x126(%ebp)
 8179a11:	00 00 00 
 8179a14:	8b 45 18             	mov    0x18(%ebp),%eax
 8179a17:	89 85 de fe ff ff    	mov    %eax,-0x122(%ebp)
 8179a1d:	c7 85 e2 fe ff ff 00 	movl   $0x0,-0x11e(%ebp)
 8179a24:	00 00 00 
 8179a27:	c7 85 e6 fe ff ff 01 	movl   $0x1,-0x11a(%ebp)
 8179a2e:	00 00 00 
 8179a31:	8b 45 10             	mov    0x10(%ebp),%eax
 8179a34:	89 85 ea fe ff ff    	mov    %eax,-0x116(%ebp)
 8179a3a:	8b 45 14             	mov    0x14(%ebp),%eax
 8179a3d:	89 85 ee fe ff ff    	mov    %eax,-0x112(%ebp)
 8179a43:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179a46:	89 04 24             	mov    %eax,(%esp)
 8179a49:	e8 20 09 f6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8179a4e:	89 85 f2 fe ff ff    	mov    %eax,-0x10e(%ebp)
 8179a54:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179a57:	89 04 24             	mov    %eax,(%esp)
 8179a5a:	e8 ef 21 f5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8179a5f:	89 85 f6 fe ff ff    	mov    %eax,-0x10a(%ebp)
 8179a65:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179a68:	89 04 24             	mov    %eax,(%esp)
 8179a6b:	e8 b0 44 f8 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 8179a70:	89 85 13 ff ff ff    	mov    %eax,-0xed(%ebp)
 8179a76:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8179a7d:	00 
 8179a7e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8179a85:	00 
 8179a86:	8d 45 de             	lea    -0x22(%ebp),%eax
 8179a89:	89 04 24             	mov    %eax,(%esp)
 8179a8c:	e8 2f 42 f0 ff       	call   807dcc0 <memset@plt>
 8179a91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179a94:	89 04 24             	mov    %eax,(%esp)
 8179a97:	e8 ba 75 f8 ff       	call   8101056 <_ZN5CUser12GetSsnStringEv>
 8179a9c:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8179aa3:	00 
 8179aa4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179aa8:	8d 45 de             	lea    -0x22(%ebp),%eax
 8179aab:	89 04 24             	mov    %eax,(%esp)
 8179aae:	e8 1d 3e f0 ff       	call   807d8d0 <strncpy@plt>
 8179ab3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8179aba:	00 
 8179abb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8179ac2:	00 
 8179ac3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8179ac6:	89 04 24             	mov    %eax,(%esp)
 8179ac9:	e8 f2 41 f0 ff       	call   807dcc0 <memset@plt>
 8179ace:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8179ad5:	00 
 8179ad6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8179add:	00 
 8179ade:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8179ae1:	89 04 24             	mov    %eax,(%esp)
 8179ae4:	e8 d7 41 f0 ff       	call   807dcc0 <memset@plt>
 8179ae9:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8179af0:	00 
 8179af1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8179af8:	00 
 8179af9:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8179afc:	89 04 24             	mov    %eax,(%esp)
 8179aff:	e8 bc 41 f0 ff       	call   807dcc0 <memset@plt>
 8179b04:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8179b0b:	00 
 8179b0c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8179b13:	00 
 8179b14:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8179b17:	89 04 24             	mov    %eax,(%esp)
 8179b1a:	e8 a1 41 f0 ff       	call   807dcc0 <memset@plt>
 8179b1f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8179b26:	00 
 8179b27:	8d 45 de             	lea    -0x22(%ebp),%eax
 8179b2a:	83 c0 06             	add    $0x6,%eax
 8179b2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179b31:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8179b34:	89 04 24             	mov    %eax,(%esp)
 8179b37:	e8 94 3d f0 ff       	call   807d8d0 <strncpy@plt>
 8179b3c:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8179b43:	00 
 8179b44:	8d 45 de             	lea    -0x22(%ebp),%eax
 8179b47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179b4b:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8179b4e:	89 04 24             	mov    %eax,(%esp)
 8179b51:	e8 7a 3d f0 ff       	call   807d8d0 <strncpy@plt>
 8179b56:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8179b5d:	00 
 8179b5e:	8d 45 de             	lea    -0x22(%ebp),%eax
 8179b61:	83 c0 02             	add    $0x2,%eax
 8179b64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179b68:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8179b6b:	89 04 24             	mov    %eax,(%esp)
 8179b6e:	e8 5d 3d f0 ff       	call   807d8d0 <strncpy@plt>
 8179b73:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8179b7a:	00 
 8179b7b:	8d 45 de             	lea    -0x22(%ebp),%eax
 8179b7e:	83 c0 04             	add    $0x4,%eax
 8179b81:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179b85:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8179b88:	89 04 24             	mov    %eax,(%esp)
 8179b8b:	e8 40 3d f0 ff       	call   807d8d0 <strncpy@plt>
 8179b90:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8179b93:	89 04 24             	mov    %eax,(%esp)
 8179b96:	e8 55 4b f0 ff       	call   807e6f0 <atoi@plt>
 8179b9b:	88 45 f7             	mov    %al,-0x9(%ebp)
 8179b9e:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 8179ba2:	83 f8 02             	cmp    $0x2,%eax
 8179ba5:	74 63                	je     8179c0a <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x2ec>
 8179ba7:	83 f8 02             	cmp    $0x2,%eax
 8179baa:	7f 0a                	jg     8179bb6 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x298>
 8179bac:	83 f8 01             	cmp    $0x1,%eax
 8179baf:	74 1c                	je     8179bcd <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x2af>
 8179bb1:	e9 00 01 00 00       	jmp    8179cb6 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x398>
 8179bb6:	83 f8 03             	cmp    $0x3,%eax
 8179bb9:	0f 84 85 00 00 00    	je     8179c44 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x326>
 8179bbf:	83 f8 04             	cmp    $0x4,%eax
 8179bc2:	0f 84 b6 00 00 00    	je     8179c7e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x360>
 8179bc8:	e9 e9 00 00 00       	jmp    8179cb6 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x398>
 8179bcd:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8179bd0:	89 44 24 10          	mov    %eax,0x10(%esp)
 8179bd4:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8179bd7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8179bdb:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8179bde:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179be2:	c7 44 24 04 9c 62 b8 	movl   $0x8b8629c,0x4(%esp)
 8179be9:	08 
 8179bea:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179bf0:	83 c0 56             	add    $0x56,%eax
 8179bf3:	89 04 24             	mov    %eax,(%esp)
 8179bf6:	e8 45 48 f0 ff       	call   807e440 <sprintf@plt>
 8179bfb:	c7 85 17 ff ff ff 01 	movl   $0x1,-0xe9(%ebp)
 8179c02:	00 00 00 
 8179c05:	e9 ac 00 00 00       	jmp    8179cb6 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x398>
 8179c0a:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8179c0d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8179c11:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8179c14:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8179c18:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8179c1b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179c1f:	c7 44 24 04 9c 62 b8 	movl   $0x8b8629c,0x4(%esp)
 8179c26:	08 
 8179c27:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179c2d:	83 c0 56             	add    $0x56,%eax
 8179c30:	89 04 24             	mov    %eax,(%esp)
 8179c33:	e8 08 48 f0 ff       	call   807e440 <sprintf@plt>
 8179c38:	c7 85 17 ff ff ff 02 	movl   $0x2,-0xe9(%ebp)
 8179c3f:	00 00 00 
 8179c42:	eb 72                	jmp    8179cb6 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x398>
 8179c44:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8179c47:	89 44 24 10          	mov    %eax,0x10(%esp)
 8179c4b:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8179c4e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8179c52:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8179c55:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179c59:	c7 44 24 04 a7 62 b8 	movl   $0x8b862a7,0x4(%esp)
 8179c60:	08 
 8179c61:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179c67:	83 c0 56             	add    $0x56,%eax
 8179c6a:	89 04 24             	mov    %eax,(%esp)
 8179c6d:	e8 ce 47 f0 ff       	call   807e440 <sprintf@plt>
 8179c72:	c7 85 17 ff ff ff 01 	movl   $0x1,-0xe9(%ebp)
 8179c79:	00 00 00 
 8179c7c:	eb 38                	jmp    8179cb6 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x398>
 8179c7e:	8d 45 d3             	lea    -0x2d(%ebp),%eax
 8179c81:	89 44 24 10          	mov    %eax,0x10(%esp)
 8179c85:	8d 45 d6             	lea    -0x2a(%ebp),%eax
 8179c88:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8179c8c:	8d 45 d9             	lea    -0x27(%ebp),%eax
 8179c8f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179c93:	c7 44 24 04 a7 62 b8 	movl   $0x8b862a7,0x4(%esp)
 8179c9a:	08 
 8179c9b:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179ca1:	83 c0 56             	add    $0x56,%eax
 8179ca4:	89 04 24             	mov    %eax,(%esp)
 8179ca7:	e8 94 47 f0 ff       	call   807e440 <sprintf@plt>
 8179cac:	c7 85 17 ff ff ff 02 	movl   $0x2,-0xe9(%ebp)
 8179cb3:	00 00 00 
 8179cb6:	c7 85 26 ff ff ff 01 	movl   $0x1,-0xda(%ebp)
 8179cbd:	00 00 00 
 8179cc0:	c7 85 2a ff ff ff 00 	movl   $0x0,-0xd6(%ebp)
 8179cc7:	00 00 00 
 8179cca:	8b 45 20             	mov    0x20(%ebp),%eax
 8179ccd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179cd1:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179cd7:	83 c0 69             	add    $0x69,%eax
 8179cda:	89 04 24             	mov    %eax,(%esp)
 8179cdd:	e8 0e 42 f0 ff       	call   807def0 <strcpy@plt>
 8179ce2:	e8 9a 24 f5 ff       	call   80cc181 <_Z14G_CEnvironmentv>
 8179ce7:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 8179ced:	89 45 92             	mov    %eax,-0x6e(%ebp)
 8179cf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179cf3:	89 04 24             	mov    %eax,(%esp)
 8179cf6:	e8 21 d7 fd ff       	call   815741c <_ZNK15CUserCharacInfo20getCurCharacGrowTypeEv>
 8179cfb:	0f be c0             	movsbl %al,%eax
 8179cfe:	89 45 96             	mov    %eax,-0x6a(%ebp)
 8179d01:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179d04:	89 04 24             	mov    %eax,(%esp)
 8179d07:	e8 ac 05 f6 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 8179d0c:	89 45 9a             	mov    %eax,-0x66(%ebp)
 8179d0f:	8b 45 92             	mov    -0x6e(%ebp),%eax
 8179d12:	89 45 9e             	mov    %eax,-0x62(%ebp)
 8179d15:	c7 45 a2 00 00 00 00 	movl   $0x0,-0x5e(%ebp)
 8179d1c:	8b 85 de fe ff ff    	mov    -0x122(%ebp),%eax
 8179d22:	89 45 a6             	mov    %eax,-0x5a(%ebp)
 8179d25:	c7 45 aa 00 00 00 00 	movl   $0x0,-0x56(%ebp)
 8179d2c:	8b 45 24             	mov    0x24(%ebp),%eax
 8179d2f:	89 45 ae             	mov    %eax,-0x52(%ebp)
 8179d32:	8b 85 de fe ff ff    	mov    -0x122(%ebp),%eax
 8179d38:	89 45 b2             	mov    %eax,-0x4e(%ebp)
 8179d3b:	c7 44 24 04 b2 62 b8 	movl   $0x8b862b2,0x4(%esp)
 8179d42:	08 
 8179d43:	8b 45 20             	mov    0x20(%ebp),%eax
 8179d46:	89 04 24             	mov    %eax,(%esp)
 8179d49:	e8 92 47 f0 ff       	call   807e4e0 <strcmp@plt>
 8179d4e:	85 c0                	test   %eax,%eax
 8179d50:	75 09                	jne    8179d5b <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x43d>
 8179d52:	c7 45 b6 02 00 00 00 	movl   $0x2,-0x4a(%ebp)
 8179d59:	eb 27                	jmp    8179d82 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x464>
 8179d5b:	c7 44 24 04 bf 62 b8 	movl   $0x8b862bf,0x4(%esp)
 8179d62:	08 
 8179d63:	8b 45 20             	mov    0x20(%ebp),%eax
 8179d66:	89 04 24             	mov    %eax,(%esp)
 8179d69:	e8 72 47 f0 ff       	call   807e4e0 <strcmp@plt>
 8179d6e:	85 c0                	test   %eax,%eax
 8179d70:	75 09                	jne    8179d7b <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x45d>
 8179d72:	c7 45 b6 03 00 00 00 	movl   $0x3,-0x4a(%ebp)
 8179d79:	eb 07                	jmp    8179d82 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x464>
 8179d7b:	c7 45 b6 01 00 00 00 	movl   $0x1,-0x4a(%ebp)
 8179d82:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8179d89:	00 
 8179d8a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8179d91:	00 
 8179d92:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179d98:	05 f5 00 00 00       	add    $0xf5,%eax
 8179d9d:	89 04 24             	mov    %eax,(%esp)
 8179da0:	e8 1b 3f f0 ff       	call   807dcc0 <memset@plt>
 8179da5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179da8:	05 e0 00 00 00       	add    $0xe0,%eax
 8179dad:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8179db4:	00 
 8179db5:	8d 95 c5 fe ff ff    	lea    -0x13b(%ebp),%edx
 8179dbb:	81 c2 f5 00 00 00    	add    $0xf5,%edx
 8179dc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8179dc5:	89 04 24             	mov    %eax,(%esp)
 8179dc8:	e8 61 8a fe ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8179dcd:	85 c0                	test   %eax,%eax
 8179dcf:	0f 94 c0             	sete   %al
 8179dd2:	84 c0                	test   %al,%al
 8179dd4:	74 23                	je     8179df9 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x4db>
 8179dd6:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 8179ddd:	00 
 8179dde:	c7 44 24 04 ca 62 b8 	movl   $0x8b862ca,0x4(%esp)
 8179de5:	08 
 8179de6:	8d 85 c5 fe ff ff    	lea    -0x13b(%ebp),%eax
 8179dec:	05 f5 00 00 00       	add    $0xf5,%eax
 8179df1:	89 04 24             	mov    %eax,(%esp)
 8179df4:	e8 a7 3a f0 ff       	call   807d8a0 <memcpy@plt>
 8179df9:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8179dff:	8b 95 b4 fe ff ff    	mov    -0x14c(%ebp),%edx
 8179e05:	89 45 ca             	mov    %eax,-0x36(%ebp)
 8179e08:	89 55 ce             	mov    %edx,-0x32(%ebp)
 8179e0b:	0f b6 85 ac fe ff ff 	movzbl -0x154(%ebp),%eax
 8179e12:	88 45 d2             	mov    %al,-0x2e(%ebp)
 8179e15:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8179e18:	89 04 24             	mov    %eax,(%esp)
 8179e1b:	e8 2e ee f4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8179e20:	c7 44 24 08 0e 01 00 	movl   $0x10e,0x8(%esp)
 8179e27:	00 
 8179e28:	8d 95 c5 fe ff ff    	lea    -0x13b(%ebp),%edx
 8179e2e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8179e32:	89 04 24             	mov    %eax,(%esp)
 8179e35:	e8 18 48 f6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8179e3a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8179e3f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8179e42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8179e46:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8179e4d:	00 
 8179e4e:	89 04 24             	mov    %eax,(%esp)
 8179e51:	e8 88 71 3f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8179e56:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179e59:	89 04 24             	mov    %eax,(%esp)
 8179e5c:	e8 13 8d 51 00       	call   8692b74 <_ZN5CUser9GetPuUserEv>
 8179e61:	83 f0 01             	xor    $0x1,%eax
 8179e64:	84 c0                	test   %al,%al
 8179e66:	74 30                	je     8179e98 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x57a>
 8179e68:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179e6b:	89 04 24             	mov    %eax,(%esp)
 8179e6e:	e8 fb 04 f6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8179e73:	89 04 24             	mov    %eax,(%esp)
 8179e76:	e8 1d 22 2d 00       	call   844c098 <_ZN18DB_SavePuUserCheck11makeRequestEj>
 8179e7b:	eb 1b                	jmp    8179e98 <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc+0x57a>
 8179e7d:	89 d3                	mov    %edx,%ebx
 8179e7f:	89 c6                	mov    %eax,%esi
 8179e81:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8179e84:	89 04 24             	mov    %eax,(%esp)
 8179e87:	e8 46 2a 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8179e8c:	89 f0                	mov    %esi,%eax
 8179e8e:	89 da                	mov    %ebx,%edx
 8179e90:	89 04 24             	mov    %eax,(%esp)
 8179e93:	e8 b8 98 96 00       	call   8ae3750 <_Unwind_Resume>
 8179e98:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8179e9b:	89 04 24             	mov    %eax,(%esp)
 8179e9e:	e8 2f 2a 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8179ea3:	81 c4 70 01 00 00    	add    $0x170,%esp
 8179ea9:	5b                   	pop    %ebx
 8179eaa:	5e                   	pop    %esi
 8179eab:	5d                   	pop    %ebp
 8179eac:	c3                   	ret
 8179ead:	90                   	nop

```

```c
// ItemVendingMachine::BillingRecord @ 0x817991e

/* ItemVendingMachine::BillingRecord(CUser*, int, int, int, char const*, char const*, int, unsigned
   long long, char) */

void ItemVendingMachine::BillingRecord
               (CUser *param_1,int param_2,int param_3,int param_4,char *param_5,char *param_6,
               int param_7,ulonglong param_8,char param_9)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined3 in_stack_00000029;
  char local_13f [21];
  undefined4 local_12a;
  char *local_126;
  undefined4 local_122;
  undefined4 local_11e;
  int local_11a;
  int local_116;
  undefined4 local_112;
  undefined4 local_10e;
  char acStack_10a [25];
  undefined4 local_f1;
  undefined4 local_ed;
  char acStack_e9 [11];
  undefined4 local_de;
  undefined4 local_da;
  char acStack_d6 [100];
  undefined4 local_72;
  int local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  char *local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  char *local_52;
  undefined4 local_4e;
  char acStack_4a [16];
  undefined4 local_3a;
  undefined4 local_36;
  char local_31 [3];
  char local_2e [3];
  char local_2b [3];
  char local_28 [2];
  char local_26 [2];
  char acStack_24 [2];
  char acStack_22 [2];
  char acStack_20 [8];
  CStreamGuard local_18 [11];
  char local_d;
  
  pSVar2 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/AppendVendingMachine.cpp",0x730
                              );
  CStreamGuard::CStreamGuard(local_18,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 0817998e to 08179e7a has its CatchHandler @ 08179e7d */
  CStreamGuard::operator<<(pCVar3,0xb0);
  iVar4 = CUser::GetUID((CUser *)param_2);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar3,iVar4);
  memset(local_13f,0,0x10e);
  strcpy(local_13f,param_6);
  pcVar5 = (char *)CUser::get_acc_name((CUser *)param_2);
  strcpy(acStack_10a,pcVar5);
  local_12a = 1;
  local_126 = param_5;
  local_122 = 0;
  local_11e = 1;
  local_11a = param_3;
  local_116 = param_4;
  local_112 = CUser::get_acc_id((CUser *)param_2);
  local_10e = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  local_f1 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
  memset(local_26,0,0xe);
  pcVar5 = (char *)CUser::GetSsnString((CUser *)param_2);
  strncpy(local_26,pcVar5,0xe);
  memset(local_28,0,2);
  memset(local_2b,0,3);
  memset(local_2e,0,3);
  memset(local_31,0,3);
  strncpy(local_28,acStack_20,1);
  strncpy(local_2b,local_26,2);
  strncpy(local_2e,acStack_24,2);
  strncpy(local_31,acStack_22,2);
  iVar4 = atoi(local_28);
  local_d = (char)iVar4;
  if (local_d == '\x02') {
    sprintf(acStack_e9,"19%s-%s-%s",local_2b,local_2e,local_31);
    local_ed = 2;
  }
  else if (local_d < '\x03') {
    if (local_d == '\x01') {
      sprintf(acStack_e9,"19%s-%s-%s",local_2b,local_2e,local_31);
      local_ed = 1;
    }
  }
  else if (local_d == '\x03') {
    sprintf(acStack_e9,"20%s-%s-%s",local_2b,local_2e,local_31);
    local_ed = 1;
  }
  else if (local_d == '\x04') {
    sprintf(acStack_e9,"20%s-%s-%s",local_2b,local_2e,local_31);
    local_ed = 2;
  }
  local_de = 1;
  local_da = 0;
  strcpy(acStack_d6,(char *)param_7);
  iVar4 = G_CEnvironment();
  local_72 = *(undefined4 *)(iVar4 + 0x378);
  cVar1 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_2);
  local_6e = (int)cVar1;
  local_6a = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_2);
  local_66 = local_72;
  local_62 = 0;
  local_5e = local_126;
  local_5a = 0;
  local_56 = (undefined4)param_8;
  local_52 = local_126;
  iVar4 = strcmp((char *)param_7,"mileage item");
  if (iVar4 == 0) {
    local_4e = 2;
  }
  else {
    iVar4 = strcmp((char *)param_7,"cera point");
    if (iVar4 == 0) {
      local_4e = 3;
    }
    else {
      local_4e = 1;
    }
  }
  memset(acStack_4a,0,0x10);
  iVar4 = CNetwork<4096,450000>::GetPeerIP2
                    ((CNetwork<4096,450000> *)(param_2 + 0xe0),acStack_4a,0x10);
  if (iVar4 == 0) {
    memcpy(acStack_4a,&DAT_08b862ca,5);
  }
  local_3a = param_8._4_4_;
  local_36 = _param_9;
  pCVar3 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  CStreamGuard::put_binary(pCVar3,local_13f,0x10e);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  cVar1 = CUser::GetPuUser((CUser *)param_2);
  if (cVar1 != '\x01') {
    uVar6 = CUser::get_acc_id((CUser *)param_2);
    DB_SavePuUserCheck::makeRequest(uVar6);
  }
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

---

## BuyAuctionItem

```asm
// === 08175c5c ItemVendingMachine::BuyAuctionItem  [0x08175c5c-0x8176347] ===
 8175c5c:	55                   	push   %ebp
 8175c5d:	89 e5                	mov    %esp,%ebp
 8175c5f:	57                   	push   %edi
 8175c60:	56                   	push   %esi
 8175c61:	53                   	push   %ebx
 8175c62:	81 ec ec 00 00 00    	sub    $0xec,%esp
 8175c68:	8b 45 18             	mov    0x18(%ebp),%eax
 8175c6b:	88 85 64 ff ff ff    	mov    %al,-0x9c(%ebp)
 8175c71:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8175c74:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8175c77:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 8175c7e:	88 45 c3             	mov    %al,-0x3d(%ebp)
 8175c81:	c7 45 c4 05 00 00 00 	movl   $0x5,-0x3c(%ebp)
 8175c88:	c7 45 c8 02 00 00 00 	movl   $0x2,-0x38(%ebp)
 8175c8f:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8175c96:	8b 45 10             	mov    0x10(%ebp),%eax
 8175c99:	8b 00                	mov    (%eax),%eax
 8175c9b:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8175c9e:	83 7d bc 00          	cmpl   $0x0,-0x44(%ebp)
 8175ca2:	75 1c                	jne    8175cc0 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x64>
 8175ca4:	80 7d c3 00          	cmpb   $0x0,-0x3d(%ebp)
 8175ca8:	74 0b                	je     8175cb5 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x59>
 8175caa:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8175cad:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8175cb0:	e9 16 01 00 00       	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175cb5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8175cb8:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8175cbb:	e9 0b 01 00 00       	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175cc0:	db 45 d0             	fildl  -0x30(%ebp)
 8175cc3:	db 45 bc             	fildl  -0x44(%ebp)
 8175cc6:	de f9                	fdivrp %st,%st(1)
 8175cc8:	dd 5d e0             	fstpl  -0x20(%ebp)
 8175ccb:	dd 45 e0             	fldl   -0x20(%ebp)
 8175cce:	dd 05 a8 71 b8 08    	fldl   0x8b871a8
 8175cd4:	da e9                	fucompp
 8175cd6:	df e0                	fnstsw %ax
 8175cd8:	f6 c4 45             	test   $0x45,%ah
 8175cdb:	0f 94 c0             	sete   %al
 8175cde:	84 c0                	test   %al,%al
 8175ce0:	74 0a                	je     8175cec <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x90>
 8175ce2:	bb 00 00 00 00       	mov    $0x0,%ebx
 8175ce7:	e9 4f 06 00 00       	jmp    817633b <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6df>
 8175cec:	dd 45 e0             	fldl   -0x20(%ebp)
 8175cef:	dd 05 b0 71 b8 08    	fldl   0x8b871b0
 8175cf5:	da e9                	fucompp
 8175cf7:	df e0                	fnstsw %ax
 8175cf9:	f6 c4 45             	test   $0x45,%ah
 8175cfc:	0f 94 c0             	sete   %al
 8175cff:	84 c0                	test   %al,%al
 8175d01:	74 1c                	je     8175d1f <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xc3>
 8175d03:	80 7d c3 00          	cmpb   $0x0,-0x3d(%ebp)
 8175d07:	74 0b                	je     8175d14 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xb8>
 8175d09:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8175d0c:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8175d0f:	e9 b7 00 00 00       	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175d14:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8175d17:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8175d1a:	e9 ac 00 00 00       	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175d1f:	dd 45 e0             	fldl   -0x20(%ebp)
 8175d22:	dd 05 b0 71 b8 08    	fldl   0x8b871b0
 8175d28:	d9 c9                	fxch   %st(1)
 8175d2a:	da e9                	fucompp
 8175d2c:	df e0                	fnstsw %ax
 8175d2e:	9e                   	sahf
 8175d2f:	0f 93 c0             	setae  %al
 8175d32:	84 c0                	test   %al,%al
 8175d34:	74 20                	je     8175d56 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xfa>
 8175d36:	dd 45 e0             	fldl   -0x20(%ebp)
 8175d39:	dd 05 b8 71 b8 08    	fldl   0x8b871b8
 8175d3f:	da e9                	fucompp
 8175d41:	df e0                	fnstsw %ax
 8175d43:	f6 c4 45             	test   $0x45,%ah
 8175d46:	0f 94 c0             	sete   %al
 8175d49:	84 c0                	test   %al,%al
 8175d4b:	74 09                	je     8175d56 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0xfa>
 8175d4d:	c7 45 cc 32 00 00 00 	movl   $0x32,-0x34(%ebp)
 8175d54:	eb 75                	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175d56:	dd 45 e0             	fldl   -0x20(%ebp)
 8175d59:	dd 05 b8 71 b8 08    	fldl   0x8b871b8
 8175d5f:	d9 c9                	fxch   %st(1)
 8175d61:	da e9                	fucompp
 8175d63:	df e0                	fnstsw %ax
 8175d65:	9e                   	sahf
 8175d66:	0f 93 c0             	setae  %al
 8175d69:	84 c0                	test   %al,%al
 8175d6b:	74 20                	je     8175d8d <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x131>
 8175d6d:	dd 45 e0             	fldl   -0x20(%ebp)
 8175d70:	dd 05 c0 71 b8 08    	fldl   0x8b871c0
 8175d76:	da e9                	fucompp
 8175d78:	df e0                	fnstsw %ax
 8175d7a:	f6 c4 45             	test   $0x45,%ah
 8175d7d:	0f 94 c0             	sete   %al
 8175d80:	84 c0                	test   %al,%al
 8175d82:	74 09                	je     8175d8d <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x131>
 8175d84:	c7 45 cc 32 00 00 00 	movl   $0x32,-0x34(%ebp)
 8175d8b:	eb 3e                	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175d8d:	dd 45 e0             	fldl   -0x20(%ebp)
 8175d90:	dd 05 c0 71 b8 08    	fldl   0x8b871c0
 8175d96:	d9 c9                	fxch   %st(1)
 8175d98:	da e9                	fucompp
 8175d9a:	df e0                	fnstsw %ax
 8175d9c:	9e                   	sahf
 8175d9d:	0f 93 c0             	setae  %al
 8175da0:	84 c0                	test   %al,%al
 8175da2:	74 20                	je     8175dc4 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x168>
 8175da4:	dd 45 e0             	fldl   -0x20(%ebp)
 8175da7:	dd 05 c8 71 b8 08    	fldl   0x8b871c8
 8175dad:	da e9                	fucompp
 8175daf:	df e0                	fnstsw %ax
 8175db1:	f6 c4 45             	test   $0x45,%ah
 8175db4:	0f 94 c0             	sete   %al
 8175db7:	84 c0                	test   %al,%al
 8175db9:	74 09                	je     8175dc4 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x168>
 8175dbb:	c7 45 cc 32 00 00 00 	movl   $0x32,-0x34(%ebp)
 8175dc2:	eb 07                	jmp    8175dcb <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x16f>
 8175dc4:	c7 45 cc 50 00 00 00 	movl   $0x50,-0x34(%ebp)
 8175dcb:	db 45 d0             	fildl  -0x30(%ebp)
 8175dce:	dd 05 d0 71 b8 08    	fldl   0x8b871d0
 8175dd4:	de f9                	fdivrp %st,%st(1)
 8175dd6:	db 45 cc             	fildl  -0x34(%ebp)
 8175dd9:	de c9                	fmulp  %st,%st(1)
 8175ddb:	d9 bd 62 ff ff ff    	fnstcw -0x9e(%ebp)
 8175de1:	0f b7 85 62 ff ff ff 	movzwl -0x9e(%ebp),%eax
 8175de8:	b4 0c                	mov    $0xc,%ah
 8175dea:	66 89 85 60 ff ff ff 	mov    %ax,-0xa0(%ebp)
 8175df1:	d9 ad 60 ff ff ff    	fldcw  -0xa0(%ebp)
 8175df7:	db 5d cc             	fistpl -0x34(%ebp)
 8175dfa:	d9 ad 62 ff ff ff    	fldcw  -0x9e(%ebp)
 8175e00:	8b 45 10             	mov    0x10(%ebp),%eax
 8175e03:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8175e06:	89 50 0c             	mov    %edx,0xc(%eax)
 8175e09:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8175e0e:	c7 44 24 08 7b 00 00 	movl   $0x7b,0x8(%esp)
 8175e15:	00 
 8175e16:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8175e1d:	08 
 8175e1e:	89 04 24             	mov    %eax,(%esp)
 8175e21:	e8 60 9c 11 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8175e26:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8175e2d:	00 
 8175e2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8175e32:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8175e35:	89 04 24             	mov    %eax,(%esp)
 8175e38:	e8 e9 2d f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8175e3d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8175e40:	89 04 24             	mov    %eax,(%esp)
 8175e43:	e8 06 2e f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8175e48:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 8175e4f:	00 
 8175e50:	8b 55 10             	mov    0x10(%ebp),%edx
 8175e53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8175e57:	89 04 24             	mov    %eax,(%esp)
 8175e5a:	e8 f3 87 f6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8175e5f:	8d 45 97             	lea    -0x69(%ebp),%eax
 8175e62:	ba 15 00 00 00       	mov    $0x15,%edx
 8175e67:	b9 00 00 00 00       	mov    $0x0,%ecx
 8175e6c:	89 c3                	mov    %eax,%ebx
 8175e6e:	83 e3 01             	and    $0x1,%ebx
 8175e71:	85 db                	test   %ebx,%ebx
 8175e73:	74 08                	je     8175e7d <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x221>
 8175e75:	88 08                	mov    %cl,(%eax)
 8175e77:	83 c0 01             	add    $0x1,%eax
 8175e7a:	83 ea 01             	sub    $0x1,%edx
 8175e7d:	89 c3                	mov    %eax,%ebx
 8175e7f:	83 e3 02             	and    $0x2,%ebx
 8175e82:	85 db                	test   %ebx,%ebx
 8175e84:	74 09                	je     8175e8f <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x233>
 8175e86:	66 89 08             	mov    %cx,(%eax)
 8175e89:	83 c0 02             	add    $0x2,%eax
 8175e8c:	83 ea 02             	sub    $0x2,%edx
 8175e8f:	89 d6                	mov    %edx,%esi
 8175e91:	83 e6 fc             	and    $0xfffffffc,%esi
 8175e94:	bb 00 00 00 00       	mov    $0x0,%ebx
 8175e99:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 8175e9c:	83 c3 04             	add    $0x4,%ebx
 8175e9f:	39 f3                	cmp    %esi,%ebx
 8175ea1:	72 f6                	jb     8175e99 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x23d>
 8175ea3:	01 d8                	add    %ebx,%eax
 8175ea5:	89 d3                	mov    %edx,%ebx
 8175ea7:	83 e3 02             	and    $0x2,%ebx
 8175eaa:	85 db                	test   %ebx,%ebx
 8175eac:	74 06                	je     8175eb4 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x258>
 8175eae:	66 89 08             	mov    %cx,(%eax)
 8175eb1:	83 c0 02             	add    $0x2,%eax
 8175eb4:	83 e2 01             	and    $0x1,%edx
 8175eb7:	85 d2                	test   %edx,%edx
 8175eb9:	74 05                	je     8175ec0 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x264>
 8175ebb:	88 08                	mov    %cl,(%eax)
 8175ebd:	83 c0 01             	add    $0x1,%eax
 8175ec0:	c7 45 d4 9f 86 01 00 	movl   $0x1869f,-0x2c(%ebp)
 8175ec7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8175eca:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8175ece:	c7 44 24 08 68 5f b8 	movl   $0x8b85f68,0x8(%esp)
 8175ed5:	08 
 8175ed6:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8175edd:	00 
 8175ede:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8175ee1:	89 04 24             	mov    %eax,(%esp)
 8175ee4:	e8 33 69 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8175ee9:	8b 45 10             	mov    0x10(%ebp),%eax
 8175eec:	8b 00                	mov    (%eax),%eax
 8175eee:	2b 45 cc             	sub    -0x34(%ebp),%eax
 8175ef1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8175ef5:	c7 44 24 08 6c 5f b8 	movl   $0x8b85f6c,0x8(%esp)
 8175efc:	08 
 8175efd:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 8175f04:	00 
 8175f05:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8175f0b:	89 04 24             	mov    %eax,(%esp)
 8175f0e:	e8 09 69 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8175f13:	8b 45 10             	mov    0x10(%ebp),%eax
 8175f16:	8b 50 08             	mov    0x8(%eax),%edx
 8175f19:	8b 40 04             	mov    0x4(%eax),%eax
 8175f1c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8175f20:	89 54 24 10          	mov    %edx,0x10(%esp)
 8175f24:	c7 44 24 08 68 5f b8 	movl   $0x8b85f68,0x8(%esp)
 8175f2b:	08 
 8175f2c:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8175f33:	00 
 8175f34:	8d 45 97             	lea    -0x69(%ebp),%eax
 8175f37:	89 04 24             	mov    %eax,(%esp)
 8175f3a:	e8 dd 68 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8175f3f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8175f46:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8175f4b:	8b 00                	mov    (%eax),%eax
 8175f4d:	83 c0 3c             	add    $0x3c,%eax
 8175f50:	8b 10                	mov    (%eax),%edx
 8175f52:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8175f57:	89 04 24             	mov    %eax,(%esp)
 8175f5a:	ff d2                	call   *%edx
 8175f5c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8175f5f:	8b 45 10             	mov    0x10(%ebp),%eax
 8175f62:	83 c0 10             	add    $0x10,%eax
 8175f65:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8175f6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8175f6e:	89 04 24             	mov    %eax,(%esp)
 8175f71:	e8 b2 b0 f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8175f76:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 8175f7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8175f7f:	89 04 24             	mov    %eax,(%esp)
 8175f82:	e8 eb b0 f8 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 8175f87:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 8175f8d:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8175f93:	89 04 24             	mov    %eax,(%esp)
 8175f96:	e8 55 87 f0 ff       	call   807e6f0 <atoi@plt>
 8175f9b:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 8175fa1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 8175fa4:	89 04 24             	mov    %eax,(%esp)
 8175fa7:	e8 44 87 f0 ff       	call   807e6f0 <atoi@plt>
 8175fac:	89 c7                	mov    %eax,%edi
 8175fae:	8b 45 10             	mov    0x10(%ebp),%eax
 8175fb1:	8b 58 04             	mov    0x4(%eax),%ebx
 8175fb4:	8b 70 08             	mov    0x8(%eax),%esi
 8175fb7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8175fba:	89 04 24             	mov    %eax,(%esp)
 8175fbd:	e8 2c 43 00 00       	call   817a2ee <_ZN8WongWork3IPG7CIPGMgr14getBillingCashEv>
 8175fc2:	c7 44 24 20 3c 00 00 	movl   $0x3c,0x20(%esp)
 8175fc9:	00 
 8175fca:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 8175fd0:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8175fd4:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 8175fda:	89 54 24 18          	mov    %edx,0x18(%esp)
 8175fde:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 8175fe4:	89 54 24 14          	mov    %edx,0x14(%esp)
 8175fe8:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8175fee:	89 54 24 10          	mov    %edx,0x10(%esp)
 8175ff2:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8175ff6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8175ffa:	89 74 24 08          	mov    %esi,0x8(%esp)
 8175ffe:	89 04 24             	mov    %eax,(%esp)
 8176001:	e8 fa d9 ff ff       	call   8173a00 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs>
 8176006:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8176009:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817600c:	89 04 24             	mov    %eax,(%esp)
 817600f:	e8 55 06 fd ff       	call   8146669 <_Z21CheckBillingErrorCodei>
 8176014:	83 f0 01             	xor    $0x1,%eax
 8176017:	84 c0                	test   %al,%al
 8176019:	0f 84 9f 00 00 00    	je     81760be <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x462>
 817601f:	8b 45 10             	mov    0x10(%ebp),%eax
 8176022:	8b 08                	mov    (%eax),%ecx
 8176024:	8b 45 10             	mov    0x10(%ebp),%eax
 8176027:	8b 50 18             	mov    0x18(%eax),%edx
 817602a:	8b 40 14             	mov    0x14(%eax),%eax
 817602d:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8176030:	8d b3 00 97 07 00    	lea    0x79700(%ebx),%esi
 8176036:	c7 44 24 18 6f 5f b8 	movl   $0x8b85f6f,0x18(%esp)
 817603d:	08 
 817603e:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8176041:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8176045:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8176049:	89 44 24 08          	mov    %eax,0x8(%esp)
 817604d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176051:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8176058:	00 
 8176059:	89 34 24             	mov    %esi,(%esp)
 817605c:	e8 d7 f7 50 00       	call   8685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>
 8176061:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176064:	89 04 24             	mov    %eax,(%esp)
 8176067:	e8 bc af f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 817606c:	89 c3                	mov    %eax,%ebx
 817606e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176071:	89 04 24             	mov    %eax,(%esp)
 8176074:	e8 d5 5b f5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8176079:	8b 55 dc             	mov    -0x24(%ebp),%edx
 817607c:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8176080:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8176084:	89 44 24 14          	mov    %eax,0x14(%esp)
 8176088:	c7 44 24 10 78 5f b8 	movl   $0x8b85f78,0x10(%esp)
 817608f:	08 
 8176090:	c7 44 24 0c a5 00 00 	movl   $0xa5,0xc(%esp)
 8176097:	00 
 8176098:	c7 44 24 08 40 71 b8 	movl   $0x8b87140,0x8(%esp)
 817609f:	08 
 81760a0:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 81760a7:	08 
 81760a8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81760af:	e8 56 db 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81760b4:	bb 00 00 00 00       	mov    $0x0,%ebx
 81760b9:	e9 72 02 00 00       	jmp    8176330 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6d4>
 81760be:	8b 45 10             	mov    0x10(%ebp),%eax
 81760c1:	8b 08                	mov    (%eax),%ecx
 81760c3:	8b 45 10             	mov    0x10(%ebp),%eax
 81760c6:	8b 50 18             	mov    0x18(%eax),%edx
 81760c9:	8b 40 14             	mov    0x14(%eax),%eax
 81760cc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81760cf:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 81760d5:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81760d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81760dd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81760e1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81760e8:	00 
 81760e9:	89 1c 24             	mov    %ebx,(%esp)
 81760ec:	e8 af f7 50 00       	call   86858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>
 81760f1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81760f4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81760f8:	c7 44 24 08 68 5f b8 	movl   $0x8b85f68,0x8(%esp)
 81760ff:	08 
 8176100:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8176107:	00 
 8176108:	8d 45 ac             	lea    -0x54(%ebp),%eax
 817610b:	89 04 24             	mov    %eax,(%esp)
 817610e:	e8 09 67 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8176113:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8176116:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817611a:	c7 44 24 08 6c 5f b8 	movl   $0x8b85f6c,0x8(%esp)
 8176121:	08 
 8176122:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 8176129:	00 
 817612a:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 8176130:	89 04 24             	mov    %eax,(%esp)
 8176133:	e8 e4 66 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8176138:	8b 45 10             	mov    0x10(%ebp),%eax
 817613b:	8b 50 08             	mov    0x8(%eax),%edx
 817613e:	8b 40 04             	mov    0x4(%eax),%eax
 8176141:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8176145:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176149:	c7 44 24 08 68 5f b8 	movl   $0x8b85f68,0x8(%esp)
 8176150:	08 
 8176151:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 8176158:	00 
 8176159:	8d 45 97             	lea    -0x69(%ebp),%eax
 817615c:	89 04 24             	mov    %eax,(%esp)
 817615f:	e8 b8 66 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8176164:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8176169:	8b 00                	mov    (%eax),%eax
 817616b:	83 c0 3c             	add    $0x3c,%eax
 817616e:	8b 10                	mov    (%eax),%edx
 8176170:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8176175:	89 04 24             	mov    %eax,(%esp)
 8176178:	ff d2                	call   *%edx
 817617a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 817617d:	8b 45 10             	mov    0x10(%ebp),%eax
 8176180:	83 c0 1c             	add    $0x1c,%eax
 8176183:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 8176189:	8b 45 0c             	mov    0xc(%ebp),%eax
 817618c:	89 04 24             	mov    %eax,(%esp)
 817618f:	e8 94 ae f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8176194:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 817619a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817619d:	89 04 24             	mov    %eax,(%esp)
 81761a0:	e8 cd ae f8 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 81761a5:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 81761ab:	8d 85 73 ff ff ff    	lea    -0x8d(%ebp),%eax
 81761b1:	89 04 24             	mov    %eax,(%esp)
 81761b4:	e8 37 85 f0 ff       	call   807e6f0 <atoi@plt>
 81761b9:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 81761bf:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81761c2:	89 04 24             	mov    %eax,(%esp)
 81761c5:	e8 26 85 f0 ff       	call   807e6f0 <atoi@plt>
 81761ca:	89 c7                	mov    %eax,%edi
 81761cc:	8b 45 10             	mov    0x10(%ebp),%eax
 81761cf:	8b 58 04             	mov    0x4(%eax),%ebx
 81761d2:	8b 70 08             	mov    0x8(%eax),%esi
 81761d5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81761d8:	89 04 24             	mov    %eax,(%esp)
 81761db:	e8 0e 41 00 00       	call   817a2ee <_ZN8WongWork3IPG7CIPGMgr14getBillingCashEv>
 81761e0:	c7 44 24 20 3e 00 00 	movl   $0x3e,0x20(%esp)
 81761e7:	00 
 81761e8:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 81761ee:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81761f2:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 81761f8:	89 54 24 18          	mov    %edx,0x18(%esp)
 81761fc:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 8176202:	89 54 24 14          	mov    %edx,0x14(%esp)
 8176206:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 817620c:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176210:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8176214:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8176218:	89 74 24 08          	mov    %esi,0x8(%esp)
 817621c:	89 04 24             	mov    %eax,(%esp)
 817621f:	e8 dc d7 ff ff       	call   8173a00 <_ZN6Taiwan10TaiwanCash8purchaseEyiiPKcS2_RNS_15BillTransactionEs>
 8176224:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8176227:	8b 45 dc             	mov    -0x24(%ebp),%eax
 817622a:	89 04 24             	mov    %eax,(%esp)
 817622d:	e8 37 04 fd ff       	call   8146669 <_Z21CheckBillingErrorCodei>
 8176232:	83 f0 01             	xor    $0x1,%eax
 8176235:	84 c0                	test   %al,%al
 8176237:	0f 84 9d 00 00 00    	je     81762da <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x67e>
 817623d:	8b 45 10             	mov    0x10(%ebp),%eax
 8176240:	8b 48 0c             	mov    0xc(%eax),%ecx
 8176243:	8b 45 10             	mov    0x10(%ebp),%eax
 8176246:	8b 50 24             	mov    0x24(%eax),%edx
 8176249:	8b 40 20             	mov    0x20(%eax),%eax
 817624c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 817624f:	8d b3 00 97 07 00    	lea    0x79700(%ebx),%esi
 8176255:	c7 44 24 18 6f 5f b8 	movl   $0x8b85f6f,0x18(%esp)
 817625c:	08 
 817625d:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8176260:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8176264:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8176268:	89 44 24 08          	mov    %eax,0x8(%esp)
 817626c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176270:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8176277:	00 
 8176278:	89 34 24             	mov    %esi,(%esp)
 817627b:	e8 b8 f5 50 00       	call   8685838 <_ZN15cUserHistoryLog11BillingFailE17ENUM_BILLING_TYPEyiiPc>
 8176280:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176283:	89 04 24             	mov    %eax,(%esp)
 8176286:	e8 9d ad f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 817628b:	89 c3                	mov    %eax,%ebx
 817628d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176290:	89 04 24             	mov    %eax,(%esp)
 8176293:	e8 b6 59 f5 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8176298:	8b 55 dc             	mov    -0x24(%ebp),%edx
 817629b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 817629f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81762a3:	89 44 24 14          	mov    %eax,0x14(%esp)
 81762a7:	c7 44 24 10 78 5f b8 	movl   $0x8b85f78,0x10(%esp)
 81762ae:	08 
 81762af:	c7 44 24 0c e8 00 00 	movl   $0xe8,0xc(%esp)
 81762b6:	00 
 81762b7:	c7 44 24 08 40 71 b8 	movl   $0x8b87140,0x8(%esp)
 81762be:	08 
 81762bf:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 81762c6:	08 
 81762c7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81762ce:	e8 37 d9 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81762d3:	bb 00 00 00 00       	mov    $0x0,%ebx
 81762d8:	eb 56                	jmp    8176330 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6d4>
 81762da:	8b 45 10             	mov    0x10(%ebp),%eax
 81762dd:	8b 48 0c             	mov    0xc(%eax),%ecx
 81762e0:	8b 45 10             	mov    0x10(%ebp),%eax
 81762e3:	8b 50 24             	mov    0x24(%eax),%edx
 81762e6:	8b 40 20             	mov    0x20(%eax),%eax
 81762e9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 81762ec:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 81762f2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81762f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81762fa:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81762fe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8176305:	00 
 8176306:	89 1c 24             	mov    %ebx,(%esp)
 8176309:	e8 92 f5 50 00       	call   86858a0 <_ZN15cUserHistoryLog14BillingSuccessE17ENUM_BILLING_TYPEyi>
 817630e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8176313:	eb 1b                	jmp    8176330 <_ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x6d4>
 8176315:	89 d3                	mov    %edx,%ebx
 8176317:	89 c6                	mov    %eax,%esi
 8176319:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 817631c:	89 04 24             	mov    %eax,(%esp)
 817631f:	e8 ae 65 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8176324:	89 f0                	mov    %esi,%eax
 8176326:	89 da                	mov    %ebx,%edx
 8176328:	89 04 24             	mov    %eax,(%esp)
 817632b:	e8 20 d4 96 00       	call   8ae3750 <_Unwind_Resume>
 8176330:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8176333:	89 04 24             	mov    %eax,(%esp)
 8176336:	e8 97 65 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 817633b:	89 d8                	mov    %ebx,%eax
 817633d:	81 c4 ec 00 00 00    	add    $0xec,%esp
 8176343:	5b                   	pop    %ebx
 8176344:	5e                   	pop    %esi
 8176345:	5f                   	pop    %edi
 8176346:	5d                   	pop    %ebp
 8176347:	c3                   	ret

```

```c
// ItemVendingMachine::BuyAuctionItem @ 0x8175c5c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)
    */

undefined4 __thiscall
ItemVendingMachine::BuyAuctionItem
          (ItemVendingMachine *this,CUser *param_1,AuctionNeedInfo *param_2,int param_3,bool param_4
          ,int param_5)

{
  ulonglong uVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *this_00;
  char *pcVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  TaiwanCash *pTVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  char local_91 [36];
  char local_6d;
  char local_6c [20];
  char local_58 [8];
  CStreamGuard local_50 [8];
  int local_48;
  undefined1 local_41;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  CIPGMgr *local_2c;
  int local_28;
  double local_24;
  
  local_41 = param_4;
  local_48 = param_5;
  local_40 = 5;
  local_3c = 2;
  local_34 = *(int *)param_2;
  if (param_5 == 0) {
    if (param_4) {
      local_38 = 2;
    }
    else {
      local_38 = 5;
    }
  }
  else {
    local_24 = (double)local_34 / (double)param_5;
    if (local_24 < _DAT_08b871a8) {
      return 0;
    }
    if (_DAT_08b871b0 <= local_24) {
      if ((local_24 < _DAT_08b871b0) || (_DAT_08b871b8 <= local_24)) {
        if ((local_24 < _DAT_08b871b8) || (_DAT_08b871c0 <= local_24)) {
          if ((local_24 < _DAT_08b871c0) || (_DAT_08b871c8 <= local_24)) {
            local_38 = 0x50;
          }
          else {
            local_38 = 0x32;
          }
        }
        else {
          local_38 = 0x32;
        }
      }
      else {
        local_38 = 0x32;
      }
    }
    else if (param_4) {
      local_38 = 2;
    }
    else {
      local_38 = 5;
    }
  }
  local_38 = (int)ROUND((double)local_38 * ((double)local_34 / _DAT_08b871d0));
  *(int *)(param_2 + 0xc) = local_38;
  pSVar3 = (Stream *)
           StreamPool::Acquire(GlobalData::s_stream_pool,"localjapan/AppendVendingMachine.cpp",0x7b)
  ;
  CStreamGuard::CStreamGuard(local_50,pSVar3,true);
  this_00 = (CStreamGuard *)CStreamGuard::operator->(local_50);
                    /* try { // try from 08175e5a to 0817630d has its CatchHandler @ 08176315 */
  CStreamGuard::put_binary(this_00,param_2,0x28);
  pcVar4 = &local_6d;
  uVar11 = 0x15;
  bVar13 = ((uint)pcVar4 & 1) != 0;
  if (bVar13) {
    local_6d = '\0';
    pcVar4 = local_6c;
    uVar11 = 0x14;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar11 = uVar11 - 2;
  }
  uVar12 = 0;
  do {
    pcVar5 = pcVar4 + uVar12;
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    uVar12 = uVar12 + 4;
  } while (uVar12 < (uVar11 & 0xfffffffc));
  pcVar4 = pcVar4 + uVar12;
  if ((uVar11 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar13) {
    *pcVar4 = '\0';
  }
  local_30 = 99999;
  OS_API::snprintf(local_58,8,"%ld",99999);
  OS_API::snprintf(local_91,0x24,"%d",*(int *)param_2 - local_38);
  OS_API::snprintf(&local_6d,0x15,"%ld",*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  local_2c = (CIPGMgr *)0x0;
  local_2c = (CIPGMgr *)(**(code **)(*GlobalData::s_pIPGHelper + 0x3c))(GlobalData::s_pIPGHelper);
  pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
  pcVar5 = (char *)CUser::get_acc_name(param_1);
  iVar6 = atoi(local_91);
  iVar7 = atoi(local_58);
  uVar1 = *(ulonglong *)(param_2 + 4);
  pTVar8 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_2c);
  local_28 = Taiwan::TaiwanCash::purchase
                       (pTVar8,uVar1,iVar7,iVar6,pcVar5,pcVar4,(BillTransaction *)(param_2 + 0x10),
                        0x3c);
  cVar2 = CheckBillingErrorCode(local_28);
  if (cVar2 == '\x01') {
    cUserHistoryLog::BillingSuccess
              (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)param_2);
    OS_API::snprintf(local_58,8,"%ld",local_30);
    OS_API::snprintf(local_91,0x24,"%d",local_38);
    OS_API::snprintf(&local_6d,0x15,"%ld",*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8))
    ;
    local_2c = (CIPGMgr *)(**(code **)(*GlobalData::s_pIPGHelper + 0x3c))(GlobalData::s_pIPGHelper);
    pcVar4 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    pcVar5 = (char *)CUser::get_acc_name(param_1);
    iVar6 = atoi(local_91);
    iVar7 = atoi(local_58);
    uVar1 = *(ulonglong *)(param_2 + 4);
    pTVar8 = (TaiwanCash *)WongWork::IPG::CIPGMgr::getBillingCash(local_2c);
    local_28 = Taiwan::TaiwanCash::purchase
                         (pTVar8,uVar1,iVar7,iVar6,pcVar5,pcVar4,(BillTransaction *)(param_2 + 0x1c)
                          ,0x3e);
    cVar2 = CheckBillingErrorCode(local_28);
    if (cVar2 == '\x01') {
      cUserHistoryLog::BillingSuccess
                (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                 ,*(undefined4 *)(param_2 + 0xc));
      uVar9 = 1;
    }
    else {
      cUserHistoryLog::BillingFail
                (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24)
                 ,*(undefined4 *)(param_2 + 0xc),local_28,"purchase");
      uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
      uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      LogManager::logFormat
                (1,"localjapan/AppendVendingMachine.cpp",
                 "bool ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)"
                 ,0xe8,"IPG_OUTPUT user: %u, charac: %s reason: %d",uVar10,uVar9,local_28);
      uVar9 = 0;
    }
  }
  else {
    cUserHistoryLog::BillingFail
              (param_1 + 0x79700,1,*(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18),
               *(undefined4 *)param_2,local_28,"purchase");
    uVar9 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
    uVar10 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/AppendVendingMachine.cpp",
               "bool ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)"
               ,0xa5,"IPG_OUTPUT user: %u, charac: %s reason: %d",uVar10,uVar9,local_28);
    uVar9 = 0;
  }
  CStreamGuard::~CStreamGuard(local_50);
  return uVar9;
}

```

---

## BuyItem

```asm
// === 0854c4d0 ItemVendingMachine::BuyItem  [0x0854c4d0-0x854c4f5] ===
 854c4d0:	55                   	push   %ebp
 854c4d1:	89 e5                	mov    %esp,%ebp
 854c4d3:	83 ec 18             	sub    $0x18,%esp
 854c4d6:	8b 45 10             	mov    0x10(%ebp),%eax
 854c4d9:	89 44 24 08          	mov    %eax,0x8(%esp)
 854c4dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 854c4e0:	89 44 24 04          	mov    %eax,0x4(%esp)
 854c4e4:	8b 45 08             	mov    0x8(%ebp),%eax
 854c4e7:	89 04 24             	mov    %eax,(%esp)
 854c4ea:	e8 07 a5 c2 ff       	call   81769f6 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM>
 854c4ef:	b8 01 00 00 00       	mov    $0x1,%eax
 854c4f4:	c9                   	leave
 854c4f5:	c3                   	ret

```

```c
// ItemVendingMachine::BuyItem @ 0x854c4d0

/* ItemVendingMachine::BuyItem(CUser*, MSG_BUY_CERASHOP_ITEM const&) */

undefined4 __thiscall
ItemVendingMachine::BuyItem(ItemVendingMachine *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  ProcessBuyRequestEx(this,param_1,param_2);
  return 1;
}

```

---

## CheckPurcahseBonusItem

```asm
// === 08179ed8 ItemVendingMachine::CheckPurcahseBonusItem  [0x08179ed8-0x8179f07] ===
 8179ed8:	55                   	push   %ebp
 8179ed9:	89 e5                	mov    %esp,%ebp
 8179edb:	83 ec 18             	sub    $0x18,%esp
 8179ede:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179ee1:	8b 55 08             	mov    0x8(%ebp),%edx
 8179ee4:	83 c2 08             	add    $0x8,%edx
 8179ee7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179eeb:	89 14 24             	mov    %edx,(%esp)
 8179eee:	e8 fd 20 03 00       	call   81abff0 <_ZN4ARAD26CeraShopPurcahseCountBonus14CheckBonusItemEi>
 8179ef3:	83 f0 01             	xor    $0x1,%eax
 8179ef6:	84 c0                	test   %al,%al
 8179ef8:	74 07                	je     8179f01 <_ZN18ItemVendingMachine22CheckPurcahseBonusItemEm+0x29>
 8179efa:	b8 00 00 00 00       	mov    $0x0,%eax
 8179eff:	eb 05                	jmp    8179f06 <_ZN18ItemVendingMachine22CheckPurcahseBonusItemEm+0x2e>
 8179f01:	b8 01 00 00 00       	mov    $0x1,%eax
 8179f06:	c9                   	leave
 8179f07:	c3                   	ret

```

```c
// ItemVendingMachine::CheckPurcahseBonusItem @ 0x8179ed8

/* ItemVendingMachine::CheckPurcahseBonusItem(unsigned long) */

bool ItemVendingMachine::CheckPurcahseBonusItem(ulong param_1)

{
  char cVar1;
  
  cVar1 = ARAD::CeraShopPurcahseCountBonus::CheckBonusItem(param_1 + 8);
  return cVar1 == '\x01';
}

```

---

## GetFinalProbability

```asm
// === 0854c470 ItemVendingMachine::GetFinalProbability  [0x0854c470-0x854c4cf] ===
 854c470:	55                   	push   %ebp
 854c471:	89 e5                	mov    %esp,%ebp
 854c473:	83 ec 38             	sub    $0x38,%esp
 854c476:	e8 20 fd b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854c47b:	8b 55 0c             	mov    0xc(%ebp),%edx
 854c47e:	89 54 24 04          	mov    %edx,0x4(%esp)
 854c482:	89 04 24             	mov    %eax,(%esp)
 854c485:	e8 5a 39 e1 ff       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 854c48a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 854c48d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 854c490:	89 04 24             	mov    %eax,(%esp)
 854c493:	e8 ea 00 00 00       	call   854c582 <_ZNK14CCeraShopGoods14GetBonusWeightEv>
 854c498:	d9 5d dc             	fstps  -0x24(%ebp)
 854c49b:	e8 fb fc b7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 854c4a0:	8b 40 0c             	mov    0xc(%eax),%eax
 854c4a3:	89 04 24             	mov    %eax,(%esp)
 854c4a6:	e8 eb 00 00 00       	call   854c596 <_ZNK9CItemList19GetVendingBonusRateEv>
 854c4ab:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 854c4ae:	db 45 e4             	fildl  -0x1c(%ebp)
 854c4b1:	d8 4d dc             	fmuls  -0x24(%ebp)
 854c4b4:	d9 7d e2             	fnstcw -0x1e(%ebp)
 854c4b7:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 854c4bb:	b4 0c                	mov    $0xc,%ah
 854c4bd:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 854c4c1:	d9 6d e0             	fldcw  -0x20(%ebp)
 854c4c4:	db 5d e4             	fistpl -0x1c(%ebp)
 854c4c7:	d9 6d e2             	fldcw  -0x1e(%ebp)
 854c4ca:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 854c4cd:	c9                   	leave
 854c4ce:	c3                   	ret
 854c4cf:	90                   	nop

```

```c
// ItemVendingMachine::GetFinalProbability @ 0x854c470

/* ItemVendingMachine::GetFinalProbability(int) */

int ItemVendingMachine::GetFinalProbability(int param_1)

{
  int iVar1;
  CCeraShopGoods *this;
  longdouble lVar2;
  
  iVar1 = G_CDataManager();
  this = (CCeraShopGoods *)CDataManager::FindGoods(iVar1);
  lVar2 = (longdouble)CCeraShopGoods::GetBonusWeight(this);
  iVar1 = G_CDataManager();
  iVar1 = CItemList::GetVendingBonusRate(*(CItemList **)(iVar1 + 0xc));
  return (int)ROUND((float)iVar1 * (float)lVar2);
}

```

---

## ItemVendingMachine

```asm
// === 0854c3e4 ItemVendingMachine::ItemVendingMachine  [0x0854c3e4-0x854c429] ===
 854c3e4:	55                   	push   %ebp
 854c3e5:	89 e5                	mov    %esp,%ebp
 854c3e7:	56                   	push   %esi
 854c3e8:	53                   	push   %ebx
 854c3e9:	83 ec 10             	sub    $0x10,%esp
 854c3ec:	8b 45 08             	mov    0x8(%ebp),%eax
 854c3ef:	89 04 24             	mov    %eax,(%esp)
 854c3f2:	e8 c1 3e dd ff       	call   83202b8 <_ZN8WongWork9CCeraShopC1Ev>
 854c3f7:	8b 45 08             	mov    0x8(%ebp),%eax
 854c3fa:	83 c0 08             	add    $0x8,%eax
 854c3fd:	89 04 24             	mov    %eax,(%esp)
 854c400:	e8 b1 01 00 00       	call   854c5b6 <_ZN4ARAD26CeraShopPurcahseCountBonusC1Ev>
 854c405:	eb 1b                	jmp    854c422 <_ZN18ItemVendingMachineC1Ev+0x3e>
 854c407:	89 d3                	mov    %edx,%ebx
 854c409:	89 c6                	mov    %eax,%esi
 854c40b:	8b 45 08             	mov    0x8(%ebp),%eax
 854c40e:	89 04 24             	mov    %eax,(%esp)
 854c411:	e8 fe 3e dd ff       	call   8320314 <_ZN8WongWork9CCeraShopD1Ev>
 854c416:	89 f0                	mov    %esi,%eax
 854c418:	89 da                	mov    %ebx,%edx
 854c41a:	89 04 24             	mov    %eax,(%esp)
 854c41d:	e8 2e 73 59 00       	call   8ae3750 <_Unwind_Resume>
 854c422:	83 c4 10             	add    $0x10,%esp
 854c425:	5b                   	pop    %ebx
 854c426:	5e                   	pop    %esi
 854c427:	5d                   	pop    %ebp
 854c428:	c3                   	ret
 854c429:	90                   	nop

```

```c
// ItemVendingMachine::ItemVendingMachine @ 0x854c3e4

/* ItemVendingMachine::ItemVendingMachine() */

void __thiscall ItemVendingMachine::ItemVendingMachine(ItemVendingMachine *this)

{
  WongWork::CCeraShop::CCeraShop((CCeraShop *)this);
                    /* try { // try from 0854c400 to 0854c404 has its CatchHandler @ 0854c407 */
  ARAD::CeraShopPurcahseCountBonus::CeraShopPurcahseCountBonus
            ((CeraShopPurcahseCountBonus *)(this + 8));
  return;
}

```

---

## LoadPurcahseBonusScript

```asm
// === 08179eae ItemVendingMachine::LoadPurcahseBonusScript  [0x08179eae-0x8179ed7] ===
 8179eae:	55                   	push   %ebp
 8179eaf:	89 e5                	mov    %esp,%ebp
 8179eb1:	83 ec 18             	sub    $0x18,%esp
 8179eb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8179eb7:	83 c0 08             	add    $0x8,%eax
 8179eba:	89 04 24             	mov    %eax,(%esp)
 8179ebd:	e8 52 20 03 00       	call   81abf14 <_ZN4ARAD26CeraShopPurcahseCountBonus10LoadScriptEv>
 8179ec2:	83 f0 01             	xor    $0x1,%eax
 8179ec5:	84 c0                	test   %al,%al
 8179ec7:	74 07                	je     8179ed0 <_ZN18ItemVendingMachine23LoadPurcahseBonusScriptEv+0x22>
 8179ec9:	b8 00 00 00 00       	mov    $0x0,%eax
 8179ece:	eb 05                	jmp    8179ed5 <_ZN18ItemVendingMachine23LoadPurcahseBonusScriptEv+0x27>
 8179ed0:	b8 01 00 00 00       	mov    $0x1,%eax
 8179ed5:	c9                   	leave
 8179ed6:	c3                   	ret
 8179ed7:	90                   	nop

```

```c
// ItemVendingMachine::LoadPurcahseBonusScript @ 0x8179eae

/* ItemVendingMachine::LoadPurcahseBonusScript() */

bool __thiscall ItemVendingMachine::LoadPurcahseBonusScript(ItemVendingMachine *this)

{
  char cVar1;
  
  cVar1 = ARAD::CeraShopPurcahseCountBonus::LoadScript((CeraShopPurcahseCountBonus *)(this + 8));
  return cVar1 == '\x01';
}

```

---

## ProcessBuyRequestEx

```asm
// === 081769f6 ItemVendingMachine::ProcessBuyRequestEx  [0x081769f6-0x81783e9] ===
 81769f6:	55                   	push   %ebp
 81769f7:	89 e5                	mov    %esp,%ebp
 81769f9:	57                   	push   %edi
 81769fa:	56                   	push   %esi
 81769fb:	53                   	push   %ebx
 81769fc:	81 ec 5c 07 00 00    	sub    $0x75c,%esp
 8176a02:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8176a06:	75 46                	jne    8176a4e <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x58>
 8176a08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8176a0f:	00 
 8176a10:	c7 44 24 08 90 02 00 	movl   $0x290,0x8(%esp)
 8176a17:	00 
 8176a18:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8176a1f:	08 
 8176a20:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 8176a26:	89 04 24             	mov    %eax,(%esp)
 8176a29:	e8 ea 8c 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8176a2e:	c7 44 24 04 4c 60 b8 	movl   $0x8b8604c,0x4(%esp)
 8176a35:	08 
 8176a36:	8d 85 a0 fe ff ff    	lea    -0x160(%ebp),%eax
 8176a3c:	89 04 24             	mov    %eax,(%esp)
 8176a3f:	e8 44 8d 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8176a44:	bb 00 00 00 00       	mov    $0x0,%ebx
 8176a49:	e9 8e 19 00 00       	jmp    81783dc <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x19e6>
 8176a4e:	c7 45 88 ff ff ff ff 	movl   $0xffffffff,-0x78(%ebp)
 8176a55:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 8176a5c:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 8176a63:	c7 45 94 00 00 00 00 	movl   $0x0,-0x6c(%ebp)
 8176a6a:	c7 45 98 00 00 00 00 	movl   $0x0,-0x68(%ebp)
 8176a71:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 8176a77:	89 04 24             	mov    %eax,(%esp)
 8176a7a:	e8 57 df fb ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 8176a7f:	8d 9d 80 fd ff ff    	lea    -0x280(%ebp),%ebx
 8176a85:	b8 00 00 00 00       	mov    $0x0,%eax
 8176a8a:	ba 24 00 00 00       	mov    $0x24,%edx
 8176a8f:	89 df                	mov    %ebx,%edi
 8176a91:	89 d1                	mov    %edx,%ecx
 8176a93:	f3 ab                	rep stos %eax,%es:(%edi)
 8176a95:	8d 9d f0 fc ff ff    	lea    -0x310(%ebp),%ebx
 8176a9b:	b8 00 00 00 00       	mov    $0x0,%eax
 8176aa0:	ba 24 00 00 00       	mov    $0x24,%edx
 8176aa5:	89 df                	mov    %ebx,%edi
 8176aa7:	89 d1                	mov    %edx,%ecx
 8176aa9:	f3 ab                	rep stos %eax,%es:(%edi)
 8176aab:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176aae:	89 04 24             	mov    %eax,(%esp)
 8176ab1:	e8 52 37 00 00       	call   817a208 <_ZN5CUser13resetUsedCeraEv>
 8176ab6:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8176abd:	e9 06 09 00 00       	jmp    81773c8 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9d2>
 8176ac2:	8b 5d d0             	mov    -0x30(%ebp),%ebx
 8176ac5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176ac8:	8b 55 10             	mov    0x10(%ebp),%edx
 8176acb:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176ad1:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176ad4:	83 c0 30             	add    $0x30,%eax
 8176ad7:	8b 40 09             	mov    0x9(%eax),%eax
 8176ada:	89 c6                	mov    %eax,%esi
 8176adc:	e8 ba 56 f5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8176ae1:	89 74 24 04          	mov    %esi,0x4(%esp)
 8176ae5:	89 04 24             	mov    %eax,(%esp)
 8176ae8:	e8 f7 92 1e 00       	call   835fde4 <_ZNK12CDataManager9FindGoodsEi>
 8176aed:	89 84 9d f0 fc ff ff 	mov    %eax,-0x310(%ebp,%ebx,4)
 8176af4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176af7:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8176afe:	85 c0                	test   %eax,%eax
 8176b00:	0f 85 bf 00 00 00    	jne    8176bc5 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1cf>
 8176b06:	8b 45 10             	mov    0x10(%ebp),%eax
 8176b09:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176b0d:	0f be d8             	movsbl %al,%ebx
 8176b10:	8b 45 10             	mov    0x10(%ebp),%eax
 8176b13:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8176b17:	0f b6 c8             	movzbl %al,%ecx
 8176b1a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176b1d:	8d 70 01             	lea    0x1(%eax),%esi
 8176b20:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176b23:	8b 55 10             	mov    0x10(%ebp),%edx
 8176b26:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176b2c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176b2f:	83 c0 30             	add    $0x30,%eax
 8176b32:	8b 50 09             	mov    0x9(%eax),%edx
 8176b35:	8b 45 08             	mov    0x8(%ebp),%eax
 8176b38:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8176b3c:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8176b40:	89 74 24 14          	mov    %esi,0x14(%esp)
 8176b44:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176b48:	8b 55 88             	mov    -0x78(%ebp),%edx
 8176b4b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176b4f:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 8176b56:	00 
 8176b57:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176b5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8176b5e:	89 04 24             	mov    %eax,(%esp)
 8176b61:	e8 12 ce 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8176b66:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176b69:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8176b70:	00 00 00 00 
 8176b74:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8176b7b:	00 
 8176b7c:	c7 44 24 08 ad 02 00 	movl   $0x2ad,0x8(%esp)
 8176b83:	00 
 8176b84:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8176b8b:	08 
 8176b8c:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 8176b92:	89 04 24             	mov    %eax,(%esp)
 8176b95:	e8 7e 8b 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8176b9a:	c7 44 24 0c ad 02 00 	movl   $0x2ad,0xc(%esp)
 8176ba1:	00 
 8176ba2:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8176ba9:	08 
 8176baa:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8176bb1:	08 
 8176bb2:	8d 85 b0 fe ff ff    	lea    -0x150(%ebp),%eax
 8176bb8:	89 04 24             	mov    %eax,(%esp)
 8176bbb:	e8 c8 8b 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8176bc0:	e9 ff 07 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8176bc5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176bc8:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8176bcf:	89 04 24             	mov    %eax,(%esp)
 8176bd2:	e8 71 34 00 00       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 8176bd7:	89 45 88             	mov    %eax,-0x78(%ebp)
 8176bda:	8b 45 10             	mov    0x10(%ebp),%eax
 8176bdd:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176be1:	0f be d0             	movsbl %al,%edx
 8176be4:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176be7:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8176bee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176bf2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176bf5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8176bf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176bfd:	8b 45 08             	mov    0x8(%ebp),%eax
 8176c00:	89 04 24             	mov    %eax,(%esp)
 8176c03:	e8 1a fb ff ff       	call   8176722 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc>
 8176c08:	83 f0 01             	xor    $0x1,%eax
 8176c0b:	84 c0                	test   %al,%al
 8176c0d:	0f 84 bf 00 00 00    	je     8176cd2 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x2dc>
 8176c13:	8b 45 10             	mov    0x10(%ebp),%eax
 8176c16:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176c1a:	0f be d8             	movsbl %al,%ebx
 8176c1d:	8b 45 10             	mov    0x10(%ebp),%eax
 8176c20:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8176c24:	0f b6 c8             	movzbl %al,%ecx
 8176c27:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176c2a:	8d 70 01             	lea    0x1(%eax),%esi
 8176c2d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176c30:	8b 55 10             	mov    0x10(%ebp),%edx
 8176c33:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176c39:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176c3c:	83 c0 30             	add    $0x30,%eax
 8176c3f:	8b 50 09             	mov    0x9(%eax),%edx
 8176c42:	8b 45 08             	mov    0x8(%ebp),%eax
 8176c45:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8176c49:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8176c4d:	89 74 24 14          	mov    %esi,0x14(%esp)
 8176c51:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176c55:	8b 55 88             	mov    -0x78(%ebp),%edx
 8176c58:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176c5c:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8176c63:	00 
 8176c64:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176c67:	89 54 24 04          	mov    %edx,0x4(%esp)
 8176c6b:	89 04 24             	mov    %eax,(%esp)
 8176c6e:	e8 05 cd 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8176c73:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176c76:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8176c7d:	00 00 00 00 
 8176c81:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8176c88:	00 
 8176c89:	c7 44 24 08 b4 02 00 	movl   $0x2b4,0x8(%esp)
 8176c90:	00 
 8176c91:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8176c98:	08 
 8176c99:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 8176c9f:	89 04 24             	mov    %eax,(%esp)
 8176ca2:	e8 71 8a 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8176ca7:	c7 44 24 0c b4 02 00 	movl   $0x2b4,0xc(%esp)
 8176cae:	00 
 8176caf:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8176cb6:	08 
 8176cb7:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8176cbe:	08 
 8176cbf:	8d 85 c0 fe ff ff    	lea    -0x140(%ebp),%eax
 8176cc5:	89 04 24             	mov    %eax,(%esp)
 8176cc8:	e8 bb 8a 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8176ccd:	e9 f2 06 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8176cd2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176cd5:	8b 55 10             	mov    0x10(%ebp),%edx
 8176cd8:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176cde:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176ce1:	83 c0 30             	add    $0x30,%eax
 8176ce4:	8b 40 09             	mov    0x9(%eax),%eax
 8176ce7:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8176cea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176cee:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8176cf5:	00 
 8176cf6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176cfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176cfd:	89 04 24             	mov    %eax,(%esp)
 8176d00:	e8 dd 9f f6 ff       	call   80e0ce2 <_ZN19CerashopAddRestrict7Manager21IsBuyableRestrictItemEP5CUserjji>
 8176d05:	83 f0 01             	xor    $0x1,%eax
 8176d08:	84 c0                	test   %al,%al
 8176d0a:	0f 84 bf 00 00 00    	je     8176dcf <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x3d9>
 8176d10:	8b 45 10             	mov    0x10(%ebp),%eax
 8176d13:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176d17:	0f be d8             	movsbl %al,%ebx
 8176d1a:	8b 45 10             	mov    0x10(%ebp),%eax
 8176d1d:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8176d21:	0f b6 c8             	movzbl %al,%ecx
 8176d24:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176d27:	8d 70 01             	lea    0x1(%eax),%esi
 8176d2a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176d2d:	8b 55 10             	mov    0x10(%ebp),%edx
 8176d30:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176d36:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176d39:	83 c0 30             	add    $0x30,%eax
 8176d3c:	8b 50 09             	mov    0x9(%eax),%edx
 8176d3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8176d42:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8176d46:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8176d4a:	89 74 24 14          	mov    %esi,0x14(%esp)
 8176d4e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176d52:	8b 55 88             	mov    -0x78(%ebp),%edx
 8176d55:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176d59:	c7 44 24 08 71 00 00 	movl   $0x71,0x8(%esp)
 8176d60:	00 
 8176d61:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176d64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8176d68:	89 04 24             	mov    %eax,(%esp)
 8176d6b:	e8 08 cc 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8176d70:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176d73:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8176d7a:	00 00 00 00 
 8176d7e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8176d85:	00 
 8176d86:	c7 44 24 08 bb 02 00 	movl   $0x2bb,0x8(%esp)
 8176d8d:	00 
 8176d8e:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8176d95:	08 
 8176d96:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8176d9c:	89 04 24             	mov    %eax,(%esp)
 8176d9f:	e8 74 89 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8176da4:	c7 44 24 0c bb 02 00 	movl   $0x2bb,0xc(%esp)
 8176dab:	00 
 8176dac:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8176db3:	08 
 8176db4:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8176dbb:	08 
 8176dbc:	8d 85 d0 fe ff ff    	lea    -0x130(%ebp),%eax
 8176dc2:	89 04 24             	mov    %eax,(%esp)
 8176dc5:	e8 be 89 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8176dca:	e9 f5 05 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8176dcf:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8176dd2:	8d 85 80 fd ff ff    	lea    -0x280(%ebp),%eax
 8176dd8:	c1 e2 02             	shl    $0x2,%edx
 8176ddb:	8d 0c 10             	lea    (%eax,%edx,1),%ecx
 8176dde:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176de1:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8176de8:	8d 95 94 fe ff ff    	lea    -0x16c(%ebp),%edx
 8176dee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176df2:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8176df6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176dfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8176dfd:	89 04 24             	mov    %eax,(%esp)
 8176e00:	e8 77 fb ff ff       	call   817697c <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE>
 8176e05:	83 f0 01             	xor    $0x1,%eax
 8176e08:	84 c0                	test   %al,%al
 8176e0a:	0f 84 bf 00 00 00    	je     8176ecf <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x4d9>
 8176e10:	8b 45 10             	mov    0x10(%ebp),%eax
 8176e13:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176e17:	0f be d8             	movsbl %al,%ebx
 8176e1a:	8b 45 10             	mov    0x10(%ebp),%eax
 8176e1d:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8176e21:	0f b6 c8             	movzbl %al,%ecx
 8176e24:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176e27:	8d 70 01             	lea    0x1(%eax),%esi
 8176e2a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176e2d:	8b 55 10             	mov    0x10(%ebp),%edx
 8176e30:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176e36:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176e39:	83 c0 30             	add    $0x30,%eax
 8176e3c:	8b 50 09             	mov    0x9(%eax),%edx
 8176e3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8176e42:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8176e46:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8176e4a:	89 74 24 14          	mov    %esi,0x14(%esp)
 8176e4e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176e52:	8b 55 88             	mov    -0x78(%ebp),%edx
 8176e55:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176e59:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 8176e60:	00 
 8176e61:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176e64:	89 54 24 04          	mov    %edx,0x4(%esp)
 8176e68:	89 04 24             	mov    %eax,(%esp)
 8176e6b:	e8 08 cb 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8176e70:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176e73:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8176e7a:	00 00 00 00 
 8176e7e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8176e85:	00 
 8176e86:	c7 44 24 08 c2 02 00 	movl   $0x2c2,0x8(%esp)
 8176e8d:	00 
 8176e8e:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8176e95:	08 
 8176e96:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8176e9c:	89 04 24             	mov    %eax,(%esp)
 8176e9f:	e8 74 88 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8176ea4:	c7 44 24 0c c2 02 00 	movl   $0x2c2,0xc(%esp)
 8176eab:	00 
 8176eac:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8176eb3:	08 
 8176eb4:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8176ebb:	08 
 8176ebc:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8176ec2:	89 04 24             	mov    %eax,(%esp)
 8176ec5:	e8 be 88 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8176eca:	e9 f5 04 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8176ecf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176ed2:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8176ed9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176edc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8176ee0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 8176ee7:	89 04 24             	mov    %eax,(%esp)
 8176eea:	e8 c1 f9 ff ff       	call   81768b0 <_ZN18ItemVendingMachine26_CheckEnableStateConditionEPK14CCeraShopGoodsP5CUser>
 8176eef:	83 f0 01             	xor    $0x1,%eax
 8176ef2:	84 c0                	test   %al,%al
 8176ef4:	0f 84 bf 00 00 00    	je     8176fb9 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x5c3>
 8176efa:	8b 45 10             	mov    0x10(%ebp),%eax
 8176efd:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176f01:	0f be d8             	movsbl %al,%ebx
 8176f04:	8b 45 10             	mov    0x10(%ebp),%eax
 8176f07:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8176f0b:	0f b6 c8             	movzbl %al,%ecx
 8176f0e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176f11:	8d 70 01             	lea    0x1(%eax),%esi
 8176f14:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176f17:	8b 55 10             	mov    0x10(%ebp),%edx
 8176f1a:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176f20:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176f23:	83 c0 30             	add    $0x30,%eax
 8176f26:	8b 50 09             	mov    0x9(%eax),%edx
 8176f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8176f2c:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8176f30:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8176f34:	89 74 24 14          	mov    %esi,0x14(%esp)
 8176f38:	89 54 24 10          	mov    %edx,0x10(%esp)
 8176f3c:	8b 55 88             	mov    -0x78(%ebp),%edx
 8176f3f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8176f43:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 8176f4a:	00 
 8176f4b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8176f4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8176f52:	89 04 24             	mov    %eax,(%esp)
 8176f55:	e8 1e ca 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8176f5a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176f5d:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8176f64:	00 00 00 00 
 8176f68:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8176f6f:	00 
 8176f70:	c7 44 24 08 c8 02 00 	movl   $0x2c8,0x8(%esp)
 8176f77:	00 
 8176f78:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8176f7f:	08 
 8176f80:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 8176f86:	89 04 24             	mov    %eax,(%esp)
 8176f89:	e8 8a 87 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8176f8e:	c7 44 24 0c c8 02 00 	movl   $0x2c8,0xc(%esp)
 8176f95:	00 
 8176f96:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8176f9d:	08 
 8176f9e:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8176fa5:	08 
 8176fa6:	8d 85 f0 fe ff ff    	lea    -0x110(%ebp),%eax
 8176fac:	89 04 24             	mov    %eax,(%esp)
 8176faf:	e8 d4 87 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8176fb4:	e9 0b 04 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8176fb9:	c7 85 90 fe ff ff 00 	movl   $0x0,-0x170(%ebp)
 8176fc0:	00 00 00 
 8176fc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8176fc6:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8176fca:	0f be f8             	movsbl %al,%edi
 8176fcd:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176fd0:	8b 55 10             	mov    0x10(%ebp),%edx
 8176fd3:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176fd9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176fdc:	83 c0 38             	add    $0x38,%eax
 8176fdf:	0f b6 00             	movzbl (%eax),%eax
 8176fe2:	66 98                	cbtw
 8176fe4:	0f b7 f0             	movzwl %ax,%esi
 8176fe7:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8176fea:	8b 55 10             	mov    0x10(%ebp),%edx
 8176fed:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8176ff3:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8176ff6:	83 c0 37             	add    $0x37,%eax
 8176ff9:	0f b6 00             	movzbl (%eax),%eax
 8176ffc:	0f b6 d8             	movzbl %al,%ebx
 8176fff:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177002:	8b 55 10             	mov    0x10(%ebp),%edx
 8177005:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 817700b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817700e:	83 c0 30             	add    $0x30,%eax
 8177011:	8b 48 09             	mov    0x9(%eax),%ecx
 8177014:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177017:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 817701e:	89 85 d4 f8 ff ff    	mov    %eax,-0x72c(%ebp)
 8177024:	8b 55 08             	mov    0x8(%ebp),%edx
 8177027:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 817702d:	89 85 e4 f8 ff ff    	mov    %eax,-0x71c(%ebp)
 8177033:	8b 85 e4 f8 ff ff    	mov    -0x71c(%ebp),%eax
 8177039:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 817703d:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8177041:	89 74 24 14          	mov    %esi,0x14(%esp)
 8177045:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8177049:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 817704d:	8b 8d d4 f8 ff ff    	mov    -0x72c(%ebp),%ecx
 8177053:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8177057:	8b 45 0c             	mov    0xc(%ebp),%eax
 817705a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817705e:	89 14 24             	mov    %edx,(%esp)
 8177061:	e8 aa d7 1a 00       	call   8324810 <_ZN8WongWork9CCeraShop21_CheckBuyingConditionEP5CUserPK14CCeraShopGoodsjhtcRi>
 8177066:	83 f0 01             	xor    $0x1,%eax
 8177069:	84 c0                	test   %al,%al
 817706b:	0f 84 c4 00 00 00    	je     8177135 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x73f>
 8177071:	8b 45 10             	mov    0x10(%ebp),%eax
 8177074:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8177078:	0f be f0             	movsbl %al,%esi
 817707b:	8b 45 10             	mov    0x10(%ebp),%eax
 817707e:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8177082:	0f b6 d8             	movzbl %al,%ebx
 8177085:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177088:	8d 78 01             	lea    0x1(%eax),%edi
 817708b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817708e:	8b 55 10             	mov    0x10(%ebp),%edx
 8177091:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177097:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817709a:	83 c0 30             	add    $0x30,%eax
 817709d:	8b 48 09             	mov    0x9(%eax),%ecx
 81770a0:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 81770a6:	0f b7 d0             	movzwl %ax,%edx
 81770a9:	8b 45 08             	mov    0x8(%ebp),%eax
 81770ac:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81770b0:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81770b4:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81770b8:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81770bc:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 81770bf:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81770c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 81770c7:	8b 55 0c             	mov    0xc(%ebp),%edx
 81770ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 81770ce:	89 04 24             	mov    %eax,(%esp)
 81770d1:	e8 a2 c8 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81770d6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81770d9:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 81770e0:	00 00 00 00 
 81770e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81770eb:	00 
 81770ec:	c7 44 24 08 d6 02 00 	movl   $0x2d6,0x8(%esp)
 81770f3:	00 
 81770f4:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 81770fb:	08 
 81770fc:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8177102:	89 04 24             	mov    %eax,(%esp)
 8177105:	e8 0e 86 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 817710a:	c7 44 24 0c d6 02 00 	movl   $0x2d6,0xc(%esp)
 8177111:	00 
 8177112:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177119:	08 
 817711a:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8177121:	08 
 8177122:	8d 85 00 ff ff ff    	lea    -0x100(%ebp),%eax
 8177128:	89 04 24             	mov    %eax,(%esp)
 817712b:	e8 58 86 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8177130:	e9 8f 02 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8177135:	83 7d 88 00          	cmpl   $0x0,-0x78(%ebp)
 8177139:	0f 85 42 01 00 00    	jne    8177281 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x88b>
 817713f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177142:	8b 55 10             	mov    0x10(%ebp),%edx
 8177145:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 817714b:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817714e:	83 c0 37             	add    $0x37,%eax
 8177151:	0f b6 00             	movzbl (%eax),%eax
 8177154:	0f b6 c8             	movzbl %al,%ecx
 8177157:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817715a:	8b 55 10             	mov    0x10(%ebp),%edx
 817715d:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177163:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177166:	83 c0 38             	add    $0x38,%eax
 8177169:	0f b6 00             	movzbl (%eax),%eax
 817716c:	0f be d0             	movsbl %al,%edx
 817716f:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177172:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177179:	8d 9d 34 fe ff ff    	lea    -0x1cc(%ebp),%ebx
 817717f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8177183:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8177187:	89 54 24 08          	mov    %edx,0x8(%esp)
 817718b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817718f:	8b 45 08             	mov    0x8(%ebp),%eax
 8177192:	89 04 24             	mov    %eax,(%esp)
 8177195:	e8 fa f5 ff ff       	call   8176794 <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t>
 817719a:	83 f0 01             	xor    $0x1,%eax
 817719d:	84 c0                	test   %al,%al
 817719f:	0f 84 bf 00 00 00    	je     8177264 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x86e>
 81771a5:	8b 45 10             	mov    0x10(%ebp),%eax
 81771a8:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81771ac:	0f be d8             	movsbl %al,%ebx
 81771af:	8b 45 10             	mov    0x10(%ebp),%eax
 81771b2:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 81771b6:	0f b6 c8             	movzbl %al,%ecx
 81771b9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81771bc:	8d 70 01             	lea    0x1(%eax),%esi
 81771bf:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81771c2:	8b 55 10             	mov    0x10(%ebp),%edx
 81771c5:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81771cb:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81771ce:	83 c0 30             	add    $0x30,%eax
 81771d1:	8b 50 09             	mov    0x9(%eax),%edx
 81771d4:	8b 45 08             	mov    0x8(%ebp),%eax
 81771d7:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81771db:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81771df:	89 74 24 14          	mov    %esi,0x14(%esp)
 81771e3:	89 54 24 10          	mov    %edx,0x10(%esp)
 81771e7:	8b 55 88             	mov    -0x78(%ebp),%edx
 81771ea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81771ee:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 81771f5:	00 
 81771f6:	8b 55 0c             	mov    0xc(%ebp),%edx
 81771f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81771fd:	89 04 24             	mov    %eax,(%esp)
 8177200:	e8 73 c7 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8177205:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177208:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 817720f:	00 00 00 00 
 8177213:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 817721a:	00 
 817721b:	c7 44 24 08 ec 02 00 	movl   $0x2ec,0x8(%esp)
 8177222:	00 
 8177223:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 817722a:	08 
 817722b:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8177231:	89 04 24             	mov    %eax,(%esp)
 8177234:	e8 df 84 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8177239:	c7 44 24 0c ec 02 00 	movl   $0x2ec,0xc(%esp)
 8177240:	00 
 8177241:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177248:	08 
 8177249:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8177250:	08 
 8177251:	8d 85 10 ff ff ff    	lea    -0xf0(%ebp),%eax
 8177257:	89 04 24             	mov    %eax,(%esp)
 817725a:	e8 29 85 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817725f:	e9 60 01 00 00       	jmp    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8177264:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 817726a:	01 45 94             	add    %eax,-0x6c(%ebp)
 817726d:	8b 85 38 fe ff ff    	mov    -0x1c8(%ebp),%eax
 8177273:	01 45 8c             	add    %eax,-0x74(%ebp)
 8177276:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
 817727c:	01 45 90             	add    %eax,-0x70(%ebp)
 817727f:	eb 3f                	jmp    81772c0 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x8ca>
 8177281:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177284:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 817728b:	89 04 24             	mov    %eax,(%esp)
 817728e:	e8 91 2d 00 00       	call   817a024 <_ZNK14CCeraShopGoods12GetCeraPriceEv>
 8177293:	01 45 94             	add    %eax,-0x6c(%ebp)
 8177296:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177299:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81772a0:	89 04 24             	mov    %eax,(%esp)
 81772a3:	e8 64 2d 00 00       	call   817a00c <_ZNK14CCeraShopGoods12GetGoldPriceEv>
 81772a8:	01 45 8c             	add    %eax,-0x74(%ebp)
 81772ab:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81772ae:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81772b5:	89 04 24             	mov    %eax,(%esp)
 81772b8:	e8 5b 2d 00 00       	call   817a018 <_ZNK14CCeraShopGoods11GetWinPointEv>
 81772bd:	01 45 90             	add    %eax,-0x70(%ebp)
 81772c0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81772c3:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81772ca:	89 04 24             	mov    %eax,(%esp)
 81772cd:	e8 5e 2d 00 00       	call   817a030 <_ZNK14CCeraShopGoods15GetMileagePriceEv>
 81772d2:	01 45 98             	add    %eax,-0x68(%ebp)
 81772d5:	8b 45 10             	mov    0x10(%ebp),%eax
 81772d8:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81772dc:	66 83 f8 01          	cmp    $0x1,%ax
 81772e0:	0f 85 de 00 00 00    	jne    81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 81772e6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81772e9:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81772f0:	89 04 24             	mov    %eax,(%esp)
 81772f3:	e8 8c 2d 00 00       	call   817a084 <_ZNK14CCeraShopGoods24isCeraPointDisallowance_Ev>
 81772f8:	84 c0                	test   %al,%al
 81772fa:	0f 84 c4 00 00 00    	je     81773c4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x9ce>
 8177300:	8b 45 10             	mov    0x10(%ebp),%eax
 8177303:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8177307:	0f be d8             	movsbl %al,%ebx
 817730a:	8b 45 10             	mov    0x10(%ebp),%eax
 817730d:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8177311:	0f b6 c8             	movzbl %al,%ecx
 8177314:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177317:	8d 70 01             	lea    0x1(%eax),%esi
 817731a:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817731d:	8b 55 10             	mov    0x10(%ebp),%edx
 8177320:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177326:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177329:	83 c0 30             	add    $0x30,%eax
 817732c:	8b 50 09             	mov    0x9(%eax),%edx
 817732f:	8b 45 08             	mov    0x8(%ebp),%eax
 8177332:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8177336:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 817733a:	89 74 24 14          	mov    %esi,0x14(%esp)
 817733e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8177342:	8b 55 88             	mov    -0x78(%ebp),%edx
 8177345:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8177349:	c7 44 24 08 8b 13 00 	movl   $0x138b,0x8(%esp)
 8177350:	00 
 8177351:	8b 55 0c             	mov    0xc(%ebp),%edx
 8177354:	89 54 24 04          	mov    %edx,0x4(%esp)
 8177358:	89 04 24             	mov    %eax,(%esp)
 817735b:	e8 18 c6 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8177360:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8177363:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 817736a:	00 00 00 00 
 817736e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8177375:	00 
 8177376:	c7 44 24 08 05 03 00 	movl   $0x305,0x8(%esp)
 817737d:	00 
 817737e:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8177385:	08 
 8177386:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 817738c:	89 04 24             	mov    %eax,(%esp)
 817738f:	e8 84 83 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8177394:	c7 44 24 0c 05 03 00 	movl   $0x305,0xc(%esp)
 817739b:	00 
 817739c:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 81773a3:	08 
 81773a4:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 81773ab:	08 
 81773ac:	8d 85 20 ff ff ff    	lea    -0xe0(%ebp),%eax
 81773b2:	89 04 24             	mov    %eax,(%esp)
 81773b5:	e8 ce 83 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81773ba:	bb 01 00 00 00       	mov    $0x1,%ebx
 81773bf:	e9 0a 10 00 00       	jmp    81783ce <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x19d8>
 81773c4:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 81773c8:	8b 45 10             	mov    0x10(%ebp),%eax
 81773cb:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 81773cf:	0f b6 c0             	movzbl %al,%eax
 81773d2:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 81773d5:	0f 9f c0             	setg   %al
 81773d8:	84 c0                	test   %al,%al
 81773da:	0f 85 e2 f6 ff ff    	jne    8176ac2 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xcc>
 81773e0:	8b 45 08             	mov    0x8(%ebp),%eax
 81773e3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 81773e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 81773ed:	89 04 24             	mov    %eax,(%esp)
 81773f0:	e8 ff c6 1a 00       	call   8323af4 <_ZN8WongWork9CCeraShop16_CheckValidCountEPPK14CCeraShopGoods>
 81773f5:	83 f0 01             	xor    $0x1,%eax
 81773f8:	84 c0                	test   %al,%al
 81773fa:	74 5a                	je     8177456 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xa60>
 81773fc:	c7 45 88 ff ff ff ff 	movl   $0xffffffff,-0x78(%ebp)
 8177403:	8b 45 10             	mov    0x10(%ebp),%eax
 8177406:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 817740a:	0f be c8             	movsbl %al,%ecx
 817740d:	8b 45 10             	mov    0x10(%ebp),%eax
 8177410:	8b 50 39             	mov    0x39(%eax),%edx
 8177413:	8b 45 08             	mov    0x8(%ebp),%eax
 8177416:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 817741a:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8177421:	00 
 8177422:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8177429:	00 
 817742a:	89 54 24 10          	mov    %edx,0x10(%esp)
 817742e:	8b 55 88             	mov    -0x78(%ebp),%edx
 8177431:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8177435:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817743c:	00 
 817743d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8177440:	89 54 24 04          	mov    %edx,0x4(%esp)
 8177444:	89 04 24             	mov    %eax,(%esp)
 8177447:	e8 2c c5 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 817744c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8177451:	e9 78 0f 00 00       	jmp    81783ce <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x19d8>
 8177456:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 817745d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177460:	89 04 24             	mov    %eax,(%esp)
 8177463:	e8 12 6b f8 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 8177468:	3b 45 94             	cmp    -0x6c(%ebp),%eax
 817746b:	0f 9c c0             	setl   %al
 817746e:	84 c0                	test   %al,%al
 8177470:	74 09                	je     817747b <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xa85>
 8177472:	c7 45 9c 0b 00 00 00 	movl   $0xb,-0x64(%ebp)
 8177479:	eb 58                	jmp    81774d3 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xadd>
 817747b:	8b 45 0c             	mov    0xc(%ebp),%eax
 817747e:	89 04 24             	mov    %eax,(%esp)
 8177481:	e8 02 2d 00 00       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8177486:	3b 45 8c             	cmp    -0x74(%ebp),%eax
 8177489:	0f 9c c0             	setl   %al
 817748c:	84 c0                	test   %al,%al
 817748e:	74 09                	je     8177499 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xaa3>
 8177490:	c7 45 9c 0a 00 00 00 	movl   $0xa,-0x64(%ebp)
 8177497:	eb 3a                	jmp    81774d3 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xadd>
 8177499:	8b 45 0c             	mov    0xc(%ebp),%eax
 817749c:	89 04 24             	mov    %eax,(%esp)
 817749f:	e8 d8 2c 00 00       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 81774a4:	3b 45 90             	cmp    -0x70(%ebp),%eax
 81774a7:	0f 9c c0             	setl   %al
 81774aa:	84 c0                	test   %al,%al
 81774ac:	74 09                	je     81774b7 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xac1>
 81774ae:	c7 45 9c 0c 00 00 00 	movl   $0xc,-0x64(%ebp)
 81774b5:	eb 1c                	jmp    81774d3 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xadd>
 81774b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81774ba:	89 04 24             	mov    %eax,(%esp)
 81774bd:	e8 d2 95 4d 00       	call   8650a94 <_ZN5CUser10GetMileageEv>
 81774c2:	3b 45 98             	cmp    -0x68(%ebp),%eax
 81774c5:	0f 9c c0             	setl   %al
 81774c8:	84 c0                	test   %al,%al
 81774ca:	74 07                	je     81774d3 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xadd>
 81774cc:	c7 45 9c ed 03 00 00 	movl   $0x3ed,-0x64(%ebp)
 81774d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81774d6:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81774da:	66 83 f8 01          	cmp    $0x1,%ax
 81774de:	75 25                	jne    8177505 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb0f>
 81774e0:	c7 45 9c 00 00 00 00 	movl   $0x0,-0x64(%ebp)
 81774e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81774ea:	89 04 24             	mov    %eax,(%esp)
 81774ed:	e8 04 b6 51 00       	call   8692af6 <_ZN5CUser12GetCeraPointEv>
 81774f2:	8b 55 94             	mov    -0x6c(%ebp),%edx
 81774f5:	39 d0                	cmp    %edx,%eax
 81774f7:	0f 92 c0             	setb   %al
 81774fa:	84 c0                	test   %al,%al
 81774fc:	74 07                	je     8177505 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xb0f>
 81774fe:	c7 45 9c 8a 13 00 00 	movl   $0x138a,-0x64(%ebp)
 8177505:	83 7d 9c 00          	cmpl   $0x0,-0x64(%ebp)
 8177509:	0f 84 29 01 00 00    	je     8177638 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xc42>
 817750f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177512:	89 04 24             	mov    %eax,(%esp)
 8177515:	e8 0e 9b f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 817751a:	8b 55 98             	mov    -0x68(%ebp),%edx
 817751d:	89 54 24 24          	mov    %edx,0x24(%esp)
 8177521:	8b 55 90             	mov    -0x70(%ebp),%edx
 8177524:	89 54 24 20          	mov    %edx,0x20(%esp)
 8177528:	8b 55 8c             	mov    -0x74(%ebp),%edx
 817752b:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 817752f:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8177532:	89 54 24 18          	mov    %edx,0x18(%esp)
 8177536:	89 44 24 14          	mov    %eax,0x14(%esp)
 817753a:	c7 44 24 10 7c 60 b8 	movl   $0x8b8607c,0x10(%esp)
 8177541:	08 
 8177542:	c7 44 24 0c 4b 03 00 	movl   $0x34b,0xc(%esp)
 8177549:	00 
 817754a:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177551:	08 
 8177552:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8177559:	08 
 817755a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8177561:	e8 a4 c6 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8177566:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177569:	89 04 24             	mov    %eax,(%esp)
 817756c:	e8 23 95 4d 00       	call   8650a94 <_ZN5CUser10GetMileageEv>
 8177571:	89 c7                	mov    %eax,%edi
 8177573:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177576:	89 04 24             	mov    %eax,(%esp)
 8177579:	e8 fe 2b 00 00       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 817757e:	89 c6                	mov    %eax,%esi
 8177580:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177583:	89 04 24             	mov    %eax,(%esp)
 8177586:	e8 f3 2c f6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 817758b:	89 04 24             	mov    %eax,(%esp)
 817758e:	e8 43 d2 fb ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8177593:	89 c3                	mov    %eax,%ebx
 8177595:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177598:	89 04 24             	mov    %eax,(%esp)
 817759b:	e8 da 69 f8 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 81775a0:	89 7c 24 20          	mov    %edi,0x20(%esp)
 81775a4:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81775a8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81775ac:	89 44 24 14          	mov    %eax,0x14(%esp)
 81775b0:	c7 44 24 10 c0 60 b8 	movl   $0x8b860c0,0x10(%esp)
 81775b7:	08 
 81775b8:	c7 44 24 0c 4c 03 00 	movl   $0x34c,0xc(%esp)
 81775bf:	00 
 81775c0:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 81775c7:	08 
 81775c8:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 81775cf:	08 
 81775d0:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81775d7:	e8 2e c6 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81775dc:	c7 45 88 ff ff ff ff 	movl   $0xffffffff,-0x78(%ebp)
 81775e3:	8b 45 10             	mov    0x10(%ebp),%eax
 81775e6:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 81775ea:	0f be d8             	movsbl %al,%ebx
 81775ed:	8b 45 10             	mov    0x10(%ebp),%eax
 81775f0:	8b 48 39             	mov    0x39(%eax),%ecx
 81775f3:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81775f6:	0f b7 d0             	movzwl %ax,%edx
 81775f9:	8b 45 08             	mov    0x8(%ebp),%eax
 81775fc:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8177600:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 8177607:	00 
 8177608:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 817760f:	00 
 8177610:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8177614:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 8177617:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 817761b:	89 54 24 08          	mov    %edx,0x8(%esp)
 817761f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8177622:	89 54 24 04          	mov    %edx,0x4(%esp)
 8177626:	89 04 24             	mov    %eax,(%esp)
 8177629:	e8 4a c3 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 817762e:	bb 01 00 00 00       	mov    $0x1,%ebx
 8177633:	e9 96 0d 00 00       	jmp    81783ce <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x19d8>
 8177638:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 817763f:	c7 45 a4 00 00 00 00 	movl   $0x0,-0x5c(%ebp)
 8177646:	c7 45 a8 00 00 00 00 	movl   $0x0,-0x58(%ebp)
 817764d:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 8177654:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177657:	89 04 24             	mov    %eax,(%esp)
 817765a:	e8 29 2b 00 00       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 817765f:	89 c2                	mov    %eax,%edx
 8177661:	c1 fa 1f             	sar    $0x1f,%edx
 8177664:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8177667:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 817766a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817766d:	89 04 24             	mov    %eax,(%esp)
 8177670:	e8 07 2b 00 00       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 8177675:	ba 00 00 00 00       	mov    $0x0,%edx
 817767a:	89 45 b8             	mov    %eax,-0x48(%ebp)
 817767d:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8177680:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8177687:	8b 45 0c             	mov    0xc(%ebp),%eax
 817768a:	89 04 24             	mov    %eax,(%esp)
 817768d:	e8 02 94 4d 00       	call   8650a94 <_ZN5CUser10GetMileageEv>
 8177692:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8177695:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 817769c:	e8 fd 45 f5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 81776a1:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81776a4:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 81776ab:	e9 e1 0c 00 00       	jmp    8178391 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x199b>
 81776b0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81776b3:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81776ba:	85 c0                	test   %eax,%eax
 81776bc:	0f 84 ca 0c 00 00    	je     817838c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1996>
 81776c2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81776c5:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81776cc:	89 04 24             	mov    %eax,(%esp)
 81776cf:	e8 74 29 00 00       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 81776d4:	89 45 88             	mov    %eax,-0x78(%ebp)
 81776d7:	83 7d 88 00          	cmpl   $0x0,-0x78(%ebp)
 81776db:	0f 85 4b 01 00 00    	jne    817782c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xe36>
 81776e1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81776e4:	8b 55 10             	mov    0x10(%ebp),%edx
 81776e7:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 81776ed:	8d 04 02             	lea    (%edx,%eax,1),%eax
 81776f0:	83 c0 37             	add    $0x37,%eax
 81776f3:	0f b6 00             	movzbl (%eax),%eax
 81776f6:	0f b6 c8             	movzbl %al,%ecx
 81776f9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81776fc:	8b 55 10             	mov    0x10(%ebp),%edx
 81776ff:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177705:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177708:	83 c0 38             	add    $0x38,%eax
 817770b:	0f b6 00             	movzbl (%eax),%eax
 817770e:	0f be d0             	movsbl %al,%edx
 8177711:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177714:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 817771b:	8d 9d 34 fe ff ff    	lea    -0x1cc(%ebp),%ebx
 8177721:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8177725:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8177729:	89 54 24 08          	mov    %edx,0x8(%esp)
 817772d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8177731:	8b 45 08             	mov    0x8(%ebp),%eax
 8177734:	89 04 24             	mov    %eax,(%esp)
 8177737:	e8 58 f0 ff ff       	call   8176794 <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t>
 817773c:	83 f0 01             	xor    $0x1,%eax
 817773f:	84 c0                	test   %al,%al
 8177741:	0f 84 bf 00 00 00    	je     8177806 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xe10>
 8177747:	8b 45 10             	mov    0x10(%ebp),%eax
 817774a:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 817774e:	0f be d8             	movsbl %al,%ebx
 8177751:	8b 45 10             	mov    0x10(%ebp),%eax
 8177754:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8177758:	0f b6 c8             	movzbl %al,%ecx
 817775b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817775e:	8d 70 01             	lea    0x1(%eax),%esi
 8177761:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177764:	8b 55 10             	mov    0x10(%ebp),%edx
 8177767:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 817776d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177770:	83 c0 30             	add    $0x30,%eax
 8177773:	8b 50 09             	mov    0x9(%eax),%edx
 8177776:	8b 45 08             	mov    0x8(%ebp),%eax
 8177779:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 817777d:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8177781:	89 74 24 14          	mov    %esi,0x14(%esp)
 8177785:	89 54 24 10          	mov    %edx,0x10(%esp)
 8177789:	8b 55 88             	mov    -0x78(%ebp),%edx
 817778c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8177790:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 8177797:	00 
 8177798:	8b 55 0c             	mov    0xc(%ebp),%edx
 817779b:	89 54 24 04          	mov    %edx,0x4(%esp)
 817779f:	89 04 24             	mov    %eax,(%esp)
 81777a2:	e8 d1 c1 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 81777a7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81777aa:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 81777b1:	00 00 00 00 
 81777b5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81777bc:	00 
 81777bd:	c7 44 24 08 7b 03 00 	movl   $0x37b,0x8(%esp)
 81777c4:	00 
 81777c5:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 81777cc:	08 
 81777cd:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81777d3:	89 04 24             	mov    %eax,(%esp)
 81777d6:	e8 3d 7f 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81777db:	c7 44 24 0c 7b 03 00 	movl   $0x37b,0xc(%esp)
 81777e2:	00 
 81777e3:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 81777ea:	08 
 81777eb:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 81777f2:	08 
 81777f3:	8d 85 30 ff ff ff    	lea    -0xd0(%ebp),%eax
 81777f9:	89 04 24             	mov    %eax,(%esp)
 81777fc:	e8 87 7f 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8177801:	e9 87 0b 00 00       	jmp    817838d <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1997>
 8177806:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 817780c:	89 45 a8             	mov    %eax,-0x58(%ebp)
 817780f:	8b 85 38 fe ff ff    	mov    -0x1c8(%ebp),%eax
 8177815:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8177818:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
 817781e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8177821:	8b 85 34 fe ff ff    	mov    -0x1cc(%ebp),%eax
 8177827:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 817782a:	eb 3f                	jmp    817786b <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xe75>
 817782c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817782f:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177836:	89 04 24             	mov    %eax,(%esp)
 8177839:	e8 e6 27 00 00       	call   817a024 <_ZNK14CCeraShopGoods12GetCeraPriceEv>
 817783e:	89 45 a8             	mov    %eax,-0x58(%ebp)
 8177841:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177844:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 817784b:	89 04 24             	mov    %eax,(%esp)
 817784e:	e8 b9 27 00 00       	call   817a00c <_ZNK14CCeraShopGoods12GetGoldPriceEv>
 8177853:	89 45 a0             	mov    %eax,-0x60(%ebp)
 8177856:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177859:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177860:	89 04 24             	mov    %eax,(%esp)
 8177863:	e8 b0 27 00 00       	call   817a018 <_ZNK14CCeraShopGoods11GetWinPointEv>
 8177868:	89 45 ac             	mov    %eax,-0x54(%ebp)
 817786b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817786e:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177875:	89 04 24             	mov    %eax,(%esp)
 8177878:	e8 b3 27 00 00       	call   817a030 <_ZNK14CCeraShopGoods15GetMileagePriceEv>
 817787d:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8177880:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8177887:	8b 45 0c             	mov    0xc(%ebp),%eax
 817788a:	89 04 24             	mov    %eax,(%esp)
 817788d:	e8 e8 66 f8 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 8177892:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 8177895:	0f 92 c0             	setb   %al
 8177898:	84 c0                	test   %al,%al
 817789a:	74 09                	je     81778a5 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xeaf>
 817789c:	c7 45 d8 0b 00 00 00 	movl   $0xb,-0x28(%ebp)
 81778a3:	eb 42                	jmp    81778e7 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xef1>
 81778a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81778a8:	89 04 24             	mov    %eax,(%esp)
 81778ab:	e8 ce 29 f6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81778b0:	89 04 24             	mov    %eax,(%esp)
 81778b3:	e8 1e cf fb ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 81778b8:	3b 45 a0             	cmp    -0x60(%ebp),%eax
 81778bb:	0f 9c c0             	setl   %al
 81778be:	84 c0                	test   %al,%al
 81778c0:	74 09                	je     81778cb <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xed5>
 81778c2:	c7 45 d8 0a 00 00 00 	movl   $0xa,-0x28(%ebp)
 81778c9:	eb 1c                	jmp    81778e7 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xef1>
 81778cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81778ce:	89 04 24             	mov    %eax,(%esp)
 81778d1:	e8 a6 28 00 00       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 81778d6:	3b 45 ac             	cmp    -0x54(%ebp),%eax
 81778d9:	0f 92 c0             	setb   %al
 81778dc:	84 c0                	test   %al,%al
 81778de:	74 07                	je     81778e7 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xef1>
 81778e0:	c7 45 d8 0c 00 00 00 	movl   $0xc,-0x28(%ebp)
 81778e7:	8b 45 10             	mov    0x10(%ebp),%eax
 81778ea:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81778ee:	66 83 f8 01          	cmp    $0x1,%ax
 81778f2:	75 23                	jne    8177917 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf21>
 81778f4:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 81778fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81778fe:	89 04 24             	mov    %eax,(%esp)
 8177901:	e8 f0 b1 51 00       	call   8692af6 <_ZN5CUser12GetCeraPointEv>
 8177906:	3b 45 a8             	cmp    -0x58(%ebp),%eax
 8177909:	0f 92 c0             	setb   %al
 817790c:	84 c0                	test   %al,%al
 817790e:	74 07                	je     8177917 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf21>
 8177910:	c7 45 d8 8a 13 00 00 	movl   $0x138a,-0x28(%ebp)
 8177917:	8b 45 a0             	mov    -0x60(%ebp),%eax
 817791a:	89 c2                	mov    %eax,%edx
 817791c:	c1 fa 1f             	sar    $0x1f,%edx
 817791f:	3b 55 b4             	cmp    -0x4c(%ebp),%edx
 8177922:	7c 11                	jl     8177935 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf3f>
 8177924:	3b 55 b4             	cmp    -0x4c(%ebp),%edx
 8177927:	7f 05                	jg     817792e <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf38>
 8177929:	3b 45 b0             	cmp    -0x50(%ebp),%eax
 817792c:	76 07                	jbe    8177935 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf3f>
 817792e:	c7 45 d8 0a 00 00 00 	movl   $0xa,-0x28(%ebp)
 8177935:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8177938:	ba 00 00 00 00       	mov    $0x0,%edx
 817793d:	3b 55 bc             	cmp    -0x44(%ebp),%edx
 8177940:	7c 11                	jl     8177953 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf5d>
 8177942:	3b 55 bc             	cmp    -0x44(%ebp),%edx
 8177945:	7f 05                	jg     817794c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf56>
 8177947:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 817794a:	76 07                	jbe    8177953 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf5d>
 817794c:	c7 45 d8 0c 00 00 00 	movl   $0xc,-0x28(%ebp)
 8177953:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8177956:	3b 45 c4             	cmp    -0x3c(%ebp),%eax
 8177959:	7d 07                	jge    8177962 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xf6c>
 817795b:	c7 45 d8 ed 03 00 00 	movl   $0x3ed,-0x28(%ebp)
 8177962:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8177965:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8177968:	89 d7                	mov    %edx,%edi
 817796a:	29 c7                	sub    %eax,%edi
 817796c:	89 f8                	mov    %edi,%eax
 817796e:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 8177974:	c7 85 44 ff ff ff 00 	movl   $0x0,-0xbc(%ebp)
 817797b:	00 00 00 
 817797e:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 8177984:	89 44 24 04          	mov    %eax,0x4(%esp)
 8177988:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 817798e:	89 04 24             	mov    %eax,(%esp)
 8177991:	e8 82 68 f1 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8177996:	8b 00                	mov    (%eax),%eax
 8177998:	89 45 c8             	mov    %eax,-0x38(%ebp)
 817799b:	8b 45 a0             	mov    -0x60(%ebp),%eax
 817799e:	89 c1                	mov    %eax,%ecx
 81779a0:	89 c3                	mov    %eax,%ebx
 81779a2:	c1 fb 1f             	sar    $0x1f,%ebx
 81779a5:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81779a8:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 81779ab:	29 c8                	sub    %ecx,%eax
 81779ad:	19 da                	sbb    %ebx,%edx
 81779af:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 81779b5:	89 95 4c ff ff ff    	mov    %edx,-0xb4(%ebp)
 81779bb:	c7 85 50 ff ff ff 00 	movl   $0x0,-0xb0(%ebp)
 81779c2:	00 00 00 
 81779c5:	c7 85 54 ff ff ff 00 	movl   $0x0,-0xac(%ebp)
 81779cc:	00 00 00 
 81779cf:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 81779d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81779d9:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 81779df:	89 04 24             	mov    %eax,(%esp)
 81779e2:	e8 f9 2a 00 00       	call   817a4e0 <_ZSt3maxIxERKT_S2_S2_>
 81779e7:	8b 50 04             	mov    0x4(%eax),%edx
 81779ea:	8b 00                	mov    (%eax),%eax
 81779ec:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81779ef:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 81779f2:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 81779f5:	bb 00 00 00 00       	mov    $0x0,%ebx
 81779fa:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81779fd:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8177a00:	29 c8                	sub    %ecx,%eax
 8177a02:	19 da                	sbb    %ebx,%edx
 8177a04:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 8177a0a:	89 95 5c ff ff ff    	mov    %edx,-0xa4(%ebp)
 8177a10:	c7 85 60 ff ff ff 00 	movl   $0x0,-0xa0(%ebp)
 8177a17:	00 00 00 
 8177a1a:	c7 85 64 ff ff ff 00 	movl   $0x0,-0x9c(%ebp)
 8177a21:	00 00 00 
 8177a24:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8177a2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8177a2e:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8177a34:	89 04 24             	mov    %eax,(%esp)
 8177a37:	e8 a4 2a 00 00       	call   817a4e0 <_ZSt3maxIxERKT_S2_S2_>
 8177a3c:	8b 50 04             	mov    0x4(%eax),%edx
 8177a3f:	8b 00                	mov    (%eax),%eax
 8177a41:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8177a44:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8177a47:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8177a4b:	0f 84 d3 01 00 00    	je     8177c24 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x122e>
 8177a51:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177a54:	89 04 24             	mov    %eax,(%esp)
 8177a57:	e8 cc 95 f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8177a5c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8177a5f:	89 54 24 24          	mov    %edx,0x24(%esp)
 8177a63:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8177a66:	89 54 24 20          	mov    %edx,0x20(%esp)
 8177a6a:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8177a6d:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8177a71:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8177a74:	89 54 24 18          	mov    %edx,0x18(%esp)
 8177a78:	89 44 24 14          	mov    %eax,0x14(%esp)
 8177a7c:	c7 44 24 10 ec 60 b8 	movl   $0x8b860ec,0x10(%esp)
 8177a83:	08 
 8177a84:	c7 44 24 0c b3 03 00 	movl   $0x3b3,0xc(%esp)
 8177a8b:	00 
 8177a8c:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177a93:	08 
 8177a94:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8177a9b:	08 
 8177a9c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8177aa3:	e8 62 c1 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8177aa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177aab:	89 04 24             	mov    %eax,(%esp)
 8177aae:	e8 e1 8f 4d 00       	call   8650a94 <_ZN5CUser10GetMileageEv>
 8177ab3:	89 c7                	mov    %eax,%edi
 8177ab5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177ab8:	89 04 24             	mov    %eax,(%esp)
 8177abb:	e8 bc 26 00 00       	call   817a17c <_ZN15CUserCharacInfo11GetWinPointEv>
 8177ac0:	89 c6                	mov    %eax,%esi
 8177ac2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177ac5:	89 04 24             	mov    %eax,(%esp)
 8177ac8:	e8 b1 27 f6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8177acd:	89 04 24             	mov    %eax,(%esp)
 8177ad0:	e8 01 cd fb ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 8177ad5:	89 c3                	mov    %eax,%ebx
 8177ad7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177ada:	89 04 24             	mov    %eax,(%esp)
 8177add:	e8 98 64 f8 ff       	call   80fdf7a <_ZN5CUser7GetCeraEv>
 8177ae2:	89 7c 24 20          	mov    %edi,0x20(%esp)
 8177ae6:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8177aea:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8177aee:	89 44 24 14          	mov    %eax,0x14(%esp)
 8177af2:	c7 44 24 10 54 61 b8 	movl   $0x8b86154,0x10(%esp)
 8177af9:	08 
 8177afa:	c7 44 24 0c b4 03 00 	movl   $0x3b4,0xc(%esp)
 8177b01:	00 
 8177b02:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177b09:	08 
 8177b0a:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8177b11:	08 
 8177b12:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8177b19:	e8 ec c0 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8177b1e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177b21:	8b 55 10             	mov    0x10(%ebp),%edx
 8177b24:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177b2a:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177b2d:	83 c0 30             	add    $0x30,%eax
 8177b30:	8b 40 09             	mov    0x9(%eax),%eax
 8177b33:	89 44 24 14          	mov    %eax,0x14(%esp)
 8177b37:	c7 44 24 10 7e 61 b8 	movl   $0x8b8617e,0x10(%esp)
 8177b3e:	08 
 8177b3f:	c7 44 24 0c b9 03 00 	movl   $0x3b9,0xc(%esp)
 8177b46:	00 
 8177b47:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177b4e:	08 
 8177b4f:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8177b56:	08 
 8177b57:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8177b5e:	e8 a7 c0 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8177b63:	8b 45 10             	mov    0x10(%ebp),%eax
 8177b66:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8177b6a:	0f be f0             	movsbl %al,%esi
 8177b6d:	8b 45 10             	mov    0x10(%ebp),%eax
 8177b70:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8177b74:	0f b6 d8             	movzbl %al,%ebx
 8177b77:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177b7a:	8d 78 01             	lea    0x1(%eax),%edi
 8177b7d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177b80:	8b 55 10             	mov    0x10(%ebp),%edx
 8177b83:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177b89:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177b8c:	83 c0 30             	add    $0x30,%eax
 8177b8f:	8b 48 09             	mov    0x9(%eax),%ecx
 8177b92:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8177b95:	0f b7 d0             	movzwl %ax,%edx
 8177b98:	8b 45 08             	mov    0x8(%ebp),%eax
 8177b9b:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8177b9f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8177ba3:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8177ba7:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8177bab:	8b 4d 88             	mov    -0x78(%ebp),%ecx
 8177bae:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8177bb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8177bb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8177bb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8177bbd:	89 04 24             	mov    %eax,(%esp)
 8177bc0:	e8 b3 bd 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8177bc5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177bc8:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8177bcf:	00 00 00 00 
 8177bd3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8177bda:	00 
 8177bdb:	c7 44 24 08 bb 03 00 	movl   $0x3bb,0x8(%esp)
 8177be2:	00 
 8177be3:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8177bea:	08 
 8177beb:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8177bf1:	89 04 24             	mov    %eax,(%esp)
 8177bf4:	e8 1f 7b 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8177bf9:	c7 44 24 0c bb 03 00 	movl   $0x3bb,0xc(%esp)
 8177c00:	00 
 8177c01:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177c08:	08 
 8177c09:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8177c10:	08 
 8177c11:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 8177c17:	89 04 24             	mov    %eax,(%esp)
 8177c1a:	e8 69 7b 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8177c1f:	e9 69 07 00 00       	jmp    817838d <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1997>
 8177c24:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177c27:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177c2e:	89 04 24             	mov    %eax,(%esp)
 8177c31:	e8 1e 24 00 00       	call   817a054 <_ZNK14CCeraShopGoods14GetFeaturedIdxEv>
 8177c36:	89 44 24 04          	mov    %eax,0x4(%esp)
 8177c3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8177c3d:	89 04 24             	mov    %eax,(%esp)
 8177c40:	e8 33 5c 4d 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 8177c45:	84 c0                	test   %al,%al
 8177c47:	0f 84 bf 00 00 00    	je     8177d0c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1316>
 8177c4d:	8b 45 10             	mov    0x10(%ebp),%eax
 8177c50:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8177c54:	0f be d8             	movsbl %al,%ebx
 8177c57:	8b 45 10             	mov    0x10(%ebp),%eax
 8177c5a:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8177c5e:	0f b6 c8             	movzbl %al,%ecx
 8177c61:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177c64:	8d 70 01             	lea    0x1(%eax),%esi
 8177c67:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177c6a:	8b 55 10             	mov    0x10(%ebp),%edx
 8177c6d:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177c73:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177c76:	83 c0 30             	add    $0x30,%eax
 8177c79:	8b 50 09             	mov    0x9(%eax),%edx
 8177c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8177c7f:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8177c83:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8177c87:	89 74 24 14          	mov    %esi,0x14(%esp)
 8177c8b:	89 54 24 10          	mov    %edx,0x10(%esp)
 8177c8f:	8b 55 88             	mov    -0x78(%ebp),%edx
 8177c92:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8177c96:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8177c9d:	00 
 8177c9e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8177ca1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8177ca5:	89 04 24             	mov    %eax,(%esp)
 8177ca8:	e8 cb bc 1a 00       	call   8323978 <_ZN8WongWork9CCeraShop12ProcessErrorEP5CUsertijiic>
 8177cad:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177cb0:	c7 84 85 f0 fc ff ff 	movl   $0x0,-0x310(%ebp,%eax,4)
 8177cb7:	00 00 00 00 
 8177cbb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8177cc2:	00 
 8177cc3:	c7 44 24 08 c1 03 00 	movl   $0x3c1,0x8(%esp)
 8177cca:	00 
 8177ccb:	c7 44 24 04 80 70 b8 	movl   $0x8b87080,0x4(%esp)
 8177cd2:	08 
 8177cd3:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8177cd9:	89 04 24             	mov    %eax,(%esp)
 8177cdc:	e8 37 7a 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8177ce1:	c7 44 24 0c c1 03 00 	movl   $0x3c1,0xc(%esp)
 8177ce8:	00 
 8177ce9:	c7 44 24 08 80 70 b8 	movl   $0x8b87080,0x8(%esp)
 8177cf0:	08 
 8177cf1:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8177cf8:	08 
 8177cf9:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8177cff:	89 04 24             	mov    %eax,(%esp)
 8177d02:	e8 81 7a 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8177d07:	e9 81 06 00 00       	jmp    817838d <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1997>
 8177d0c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8177d11:	c7 44 24 08 cb 03 00 	movl   $0x3cb,0x8(%esp)
 8177d18:	00 
 8177d19:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8177d20:	08 
 8177d21:	89 04 24             	mov    %eax,(%esp)
 8177d24:	e8 5d 7d 11 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8177d29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8177d30:	00 
 8177d31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8177d35:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8177d3b:	89 04 24             	mov    %eax,(%esp)
 8177d3e:	e8 e3 0e f5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8177d43:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8177d49:	89 04 24             	mov    %eax,(%esp)
 8177d4c:	e8 fd 0e f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8177d51:	89 04 24             	mov    %eax,(%esp)
 8177d54:	e8 b3 27 00 00       	call   817a50c <_ZN12CStreamGuard11GetInBufferI22stCeraShopIPGRequest_tEEPT_v>
 8177d59:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8177d5c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177d5f:	8b 55 10             	mov    0x10(%ebp),%edx
 8177d62:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177d68:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177d6b:	83 c0 30             	add    $0x30,%eax
 8177d6e:	8b 50 09             	mov    0x9(%eax),%edx
 8177d71:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177d74:	89 10                	mov    %edx,(%eax)
 8177d76:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177d79:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177d80:	89 04 24             	mov    %eax,(%esp)
 8177d83:	e8 c0 22 00 00       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 8177d88:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8177d8b:	89 42 04             	mov    %eax,0x4(%edx)
 8177d8e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177d91:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177d98:	89 04 24             	mov    %eax,(%esp)
 8177d9b:	e8 60 22 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8177da0:	89 c2                	mov    %eax,%edx
 8177da2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177da5:	66 89 50 0c          	mov    %dx,0xc(%eax)
 8177da9:	8b 55 a8             	mov    -0x58(%ebp),%edx
 8177dac:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177daf:	89 50 10             	mov    %edx,0x10(%eax)
 8177db2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177db5:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8177db8:	89 50 18             	mov    %edx,0x18(%eax)
 8177dbb:	8b 55 ac             	mov    -0x54(%ebp),%edx
 8177dbe:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177dc1:	89 50 14             	mov    %edx,0x14(%eax)
 8177dc4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177dc7:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177dce:	89 04 24             	mov    %eax,(%esp)
 8177dd1:	e8 20 22 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8177dd6:	89 c2                	mov    %eax,%edx
 8177dd8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177ddb:	89 50 08             	mov    %edx,0x8(%eax)
 8177dde:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177de1:	8b 55 10             	mov    0x10(%ebp),%edx
 8177de4:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177dea:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177ded:	83 c0 37             	add    $0x37,%eax
 8177df0:	0f b6 00             	movzbl (%eax),%eax
 8177df3:	89 c2                	mov    %eax,%edx
 8177df5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177df8:	88 50 2c             	mov    %dl,0x2c(%eax)
 8177dfb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177dfe:	8b 55 10             	mov    0x10(%ebp),%edx
 8177e01:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177e07:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177e0a:	83 c0 38             	add    $0x38,%eax
 8177e0d:	0f b6 10             	movzbl (%eax),%edx
 8177e10:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e13:	88 50 2d             	mov    %dl,0x2d(%eax)
 8177e16:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e19:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8177e1c:	89 50 1c             	mov    %edx,0x1c(%eax)
 8177e1f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177e22:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 8177e29:	89 04 24             	mov    %eax,(%esp)
 8177e2c:	e8 23 22 00 00       	call   817a054 <_ZNK14CCeraShopGoods14GetFeaturedIdxEv>
 8177e31:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8177e34:	89 42 28             	mov    %eax,0x28(%edx)
 8177e37:	8b 45 10             	mov    0x10(%ebp),%eax
 8177e3a:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8177e3e:	0f b6 d0             	movzbl %al,%edx
 8177e41:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e44:	89 50 20             	mov    %edx,0x20(%eax)
 8177e47:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177e4a:	8d 50 01             	lea    0x1(%eax),%edx
 8177e4d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e50:	89 50 24             	mov    %edx,0x24(%eax)
 8177e53:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e56:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8177e59:	89 50 30             	mov    %edx,0x30(%eax)
 8177e5c:	8b 45 10             	mov    0x10(%ebp),%eax
 8177e5f:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 8177e63:	89 c2                	mov    %eax,%edx
 8177e65:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e68:	88 50 34             	mov    %dl,0x34(%eax)
 8177e6b:	8b 45 10             	mov    0x10(%ebp),%eax
 8177e6e:	8b 50 2e             	mov    0x2e(%eax),%edx
 8177e71:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e74:	89 50 40             	mov    %edx,0x40(%eax)
 8177e77:	8b 45 10             	mov    0x10(%ebp),%eax
 8177e7a:	8b 50 32             	mov    0x32(%eax),%edx
 8177e7d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e80:	89 50 38             	mov    %edx,0x38(%eax)
 8177e83:	8b 45 10             	mov    0x10(%ebp),%eax
 8177e86:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 8177e8a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177e8d:	66 89 50 3c          	mov    %dx,0x3c(%eax)
 8177e91:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177e94:	8b 55 10             	mov    0x10(%ebp),%edx
 8177e97:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177e9d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177ea0:	83 c0 3d             	add    $0x3d,%eax
 8177ea3:	0f b6 10             	movzbl (%eax),%edx
 8177ea6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177ea9:	88 50 44             	mov    %dl,0x44(%eax)
 8177eac:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8177eb3:	eb 60                	jmp    8177f15 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x151f>
 8177eb5:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8177eb8:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8177ebb:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8177ebe:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8177ec1:	89 d0                	mov    %edx,%eax
 8177ec3:	c1 e0 02             	shl    $0x2,%eax
 8177ec6:	01 d0                	add    %edx,%eax
 8177ec8:	69 d6 cf 01 00 00    	imul   $0x1cf,%esi,%edx
 8177ece:	01 d0                	add    %edx,%eax
 8177ed0:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8177ed3:	83 c0 30             	add    $0x30,%eax
 8177ed6:	8b 50 0e             	mov    0xe(%eax),%edx
 8177ed9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177edc:	83 c1 08             	add    $0x8,%ecx
 8177edf:	89 54 c8 08          	mov    %edx,0x8(%eax,%ecx,8)
 8177ee3:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8177ee6:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8177ee9:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8177eec:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8177eef:	89 d0                	mov    %edx,%eax
 8177ef1:	c1 e0 02             	shl    $0x2,%eax
 8177ef4:	01 d0                	add    %edx,%eax
 8177ef6:	69 d6 cf 01 00 00    	imul   $0x1cf,%esi,%edx
 8177efc:	01 d0                	add    %edx,%eax
 8177efe:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8177f01:	83 c0 42             	add    $0x42,%eax
 8177f04:	0f b6 10             	movzbl (%eax),%edx
 8177f07:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177f0a:	83 c1 08             	add    $0x8,%ecx
 8177f0d:	88 54 c8 0c          	mov    %dl,0xc(%eax,%ecx,8)
 8177f11:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8177f15:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177f18:	8b 55 10             	mov    0x10(%ebp),%edx
 8177f1b:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177f21:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177f24:	83 c0 3d             	add    $0x3d,%eax
 8177f27:	0f b6 00             	movzbl (%eax),%eax
 8177f2a:	0f b6 c0             	movzbl %al,%eax
 8177f2d:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8177f30:	0f 9f c0             	setg   %al
 8177f33:	84 c0                	test   %al,%al
 8177f35:	0f 85 7a ff ff ff    	jne    8177eb5 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x14bf>
 8177f3b:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177f3e:	8b 55 10             	mov    0x10(%ebp),%edx
 8177f41:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8177f47:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8177f4a:	05 ed 00 00 00       	add    $0xed,%eax
 8177f4f:	0f b6 10             	movzbl (%eax),%edx
 8177f52:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177f55:	88 90 60 01 00 00    	mov    %dl,0x160(%eax)
 8177f5b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8177f62:	e9 8f 00 00 00       	jmp    8177ff6 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1600>
 8177f67:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8177f6a:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8177f6d:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8177f70:	8b 45 10             	mov    0x10(%ebp),%eax
 8177f73:	83 c3 16             	add    $0x16,%ebx
 8177f76:	c1 e3 03             	shl    $0x3,%ebx
 8177f79:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 8177f7f:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8177f82:	01 d0                	add    %edx,%eax
 8177f84:	83 c0 30             	add    $0x30,%eax
 8177f87:	8b 50 0e             	mov    0xe(%eax),%edx
 8177f8a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177f8d:	83 c1 2c             	add    $0x2c,%ecx
 8177f90:	89 54 c8 04          	mov    %edx,0x4(%eax,%ecx,8)
 8177f94:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8177f97:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8177f9a:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8177f9d:	8b 45 10             	mov    0x10(%ebp),%eax
 8177fa0:	83 c3 16             	add    $0x16,%ebx
 8177fa3:	c1 e3 03             	shl    $0x3,%ebx
 8177fa6:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 8177fac:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8177faf:	01 d0                	add    %edx,%eax
 8177fb1:	83 c0 30             	add    $0x30,%eax
 8177fb4:	0f b7 50 12          	movzwl 0x12(%eax),%edx
 8177fb8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177fbb:	83 c1 2c             	add    $0x2c,%ecx
 8177fbe:	66 89 54 c8 08       	mov    %dx,0x8(%eax,%ecx,8)
 8177fc3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8177fc6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8177fc9:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 8177fcc:	8b 45 10             	mov    0x10(%ebp),%eax
 8177fcf:	83 c3 16             	add    $0x16,%ebx
 8177fd2:	c1 e3 03             	shl    $0x3,%ebx
 8177fd5:	69 d2 cf 01 00 00    	imul   $0x1cf,%edx,%edx
 8177fdb:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 8177fde:	01 d0                	add    %edx,%eax
 8177fe0:	83 c0 30             	add    $0x30,%eax
 8177fe3:	0f b7 50 14          	movzwl 0x14(%eax),%edx
 8177fe7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8177fea:	83 c1 2c             	add    $0x2c,%ecx
 8177fed:	66 89 54 c8 0a       	mov    %dx,0xa(%eax,%ecx,8)
 8177ff2:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8177ff6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8177ff9:	8b 55 10             	mov    0x10(%ebp),%edx
 8177ffc:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8178002:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8178005:	05 ed 00 00 00       	add    $0xed,%eax
 817800a:	0f b6 00             	movzbl (%eax),%eax
 817800d:	0f b6 c0             	movzbl %al,%eax
 8178010:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8178013:	0f 9f c0             	setg   %al
 8178016:	84 c0                	test   %al,%al
 8178018:	0f 85 49 ff ff ff    	jne    8177f67 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1571>
 817801e:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8178024:	89 04 24             	mov    %eax,(%esp)
 8178027:	e8 1a 0c f5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 817802c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 817802f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178033:	89 04 24             	mov    %eax,(%esp)
 8178036:	e8 1b 0c f5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 817803b:	8d 9d 10 fe ff ff    	lea    -0x1f0(%ebp),%ebx
 8178041:	b8 00 00 00 00       	mov    $0x0,%eax
 8178046:	ba 09 00 00 00       	mov    $0x9,%edx
 817804b:	89 df                	mov    %ebx,%edi
 817804d:	89 d1                	mov    %edx,%ecx
 817804f:	f3 ab                	rep stos %eax,%es:(%edi)
 8178051:	c7 85 74 fe ff ff 00 	movl   $0x0,-0x18c(%ebp)
 8178058:	00 00 00 
 817805b:	c7 85 78 fe ff ff 00 	movl   $0x0,-0x188(%ebp)
 8178062:	00 00 00 
 8178065:	c7 85 7c fe ff ff 00 	movl   $0x0,-0x184(%ebp)
 817806c:	00 00 00 
 817806f:	c7 85 80 fe ff ff 00 	movl   $0x0,-0x180(%ebp)
 8178076:	00 00 00 
 8178079:	c7 85 84 fe ff ff 00 	movl   $0x0,-0x17c(%ebp)
 8178080:	00 00 00 
 8178083:	8d 85 5f fe ff ff    	lea    -0x1a1(%ebp),%eax
 8178089:	ba 15 00 00 00       	mov    $0x15,%edx
 817808e:	b9 00 00 00 00       	mov    $0x0,%ecx
 8178093:	89 c3                	mov    %eax,%ebx
 8178095:	83 e3 01             	and    $0x1,%ebx
 8178098:	85 db                	test   %ebx,%ebx
 817809a:	74 08                	je     81780a4 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16ae>
 817809c:	88 08                	mov    %cl,(%eax)
 817809e:	83 c0 01             	add    $0x1,%eax
 81780a1:	83 ea 01             	sub    $0x1,%edx
 81780a4:	89 c3                	mov    %eax,%ebx
 81780a6:	83 e3 02             	and    $0x2,%ebx
 81780a9:	85 db                	test   %ebx,%ebx
 81780ab:	74 09                	je     81780b6 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16c0>
 81780ad:	66 89 08             	mov    %cx,(%eax)
 81780b0:	83 c0 02             	add    $0x2,%eax
 81780b3:	83 ea 02             	sub    $0x2,%edx
 81780b6:	89 d6                	mov    %edx,%esi
 81780b8:	83 e6 fc             	and    $0xfffffffc,%esi
 81780bb:	bb 00 00 00 00       	mov    $0x0,%ebx
 81780c0:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 81780c3:	83 c3 04             	add    $0x4,%ebx
 81780c6:	39 f3                	cmp    %esi,%ebx
 81780c8:	72 f6                	jb     81780c0 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16ca>
 81780ca:	01 d8                	add    %ebx,%eax
 81780cc:	89 d3                	mov    %edx,%ebx
 81780ce:	83 e3 02             	and    $0x2,%ebx
 81780d1:	85 db                	test   %ebx,%ebx
 81780d3:	74 06                	je     81780db <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16e5>
 81780d5:	66 89 08             	mov    %cx,(%eax)
 81780d8:	83 c0 02             	add    $0x2,%eax
 81780db:	83 e2 01             	and    $0x1,%edx
 81780de:	85 d2                	test   %edx,%edx
 81780e0:	74 05                	je     81780e7 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x16f1>
 81780e2:	88 08                	mov    %cl,(%eax)
 81780e4:	83 c0 01             	add    $0x1,%eax
 81780e7:	8d 9d f0 f8 ff ff    	lea    -0x710(%ebp),%ebx
 81780ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81780f2:	ba 00 01 00 00       	mov    $0x100,%edx
 81780f7:	89 df                	mov    %ebx,%edi
 81780f9:	89 d1                	mov    %edx,%ecx
 81780fb:	f3 ab                	rep stos %eax,%es:(%edi)
 81780fd:	c7 85 57 fe ff ff 00 	movl   $0x0,-0x1a9(%ebp)
 8178104:	00 00 00 
 8178107:	c7 85 5b fe ff ff 00 	movl   $0x0,-0x1a5(%ebp)
 817810e:	00 00 00 
 8178111:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8178114:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 817811b:	89 04 24             	mov    %eax,(%esp)
 817811e:	e8 d3 1e 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8178123:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178127:	c7 44 24 08 6c 5f b8 	movl   $0x8b85f6c,0x8(%esp)
 817812e:	08 
 817812f:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 8178136:	00 
 8178137:	8d 85 74 fe ff ff    	lea    -0x18c(%ebp),%eax
 817813d:	89 04 24             	mov    %eax,(%esp)
 8178140:	e8 d7 46 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8178145:	8b 45 a8             	mov    -0x58(%ebp),%eax
 8178148:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817814c:	c7 44 24 08 6c 5f b8 	movl   $0x8b85f6c,0x8(%esp)
 8178153:	08 
 8178154:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 817815b:	00 
 817815c:	8d 85 10 fe ff ff    	lea    -0x1f0(%ebp),%eax
 8178162:	89 04 24             	mov    %eax,(%esp)
 8178165:	e8 b2 46 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 817816a:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 817816d:	8b 55 10             	mov    0x10(%ebp),%edx
 8178170:	69 c0 cf 01 00 00    	imul   $0x1cf,%eax,%eax
 8178176:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8178179:	83 c0 30             	add    $0x30,%eax
 817817c:	8b 40 09             	mov    0x9(%eax),%eax
 817817f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178183:	c7 44 24 08 6c 5f b8 	movl   $0x8b85f6c,0x8(%esp)
 817818a:	08 
 817818b:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 8178192:	00 
 8178193:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 8178199:	89 04 24             	mov    %eax,(%esp)
 817819c:	e8 7b 46 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81781a1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81781a4:	8b 84 85 f0 fc ff ff 	mov    -0x310(%ebp,%eax,4),%eax
 81781ab:	c7 44 24 0c 00 04 00 	movl   $0x400,0xc(%esp)
 81781b2:	00 
 81781b3:	8d 95 f0 f8 ff ff    	lea    -0x710(%ebp),%edx
 81781b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 81781bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81781c1:	8b 45 08             	mov    0x8(%ebp),%eax
 81781c4:	89 04 24             	mov    %eax,(%esp)
 81781c7:	e8 8e e2 ff ff       	call   817645a <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj>
 81781cc:	83 7d a8 00          	cmpl   $0x0,-0x58(%ebp)
 81781d0:	0f 85 80 00 00 00    	jne    8178256 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1860>
 81781d6:	a1 34 f7 41 09       	mov    0x941f734,%eax
 81781db:	8b 00                	mov    (%eax),%eax
 81781dd:	83 c0 18             	add    $0x18,%eax
 81781e0:	8b 38                	mov    (%eax),%edi
 81781e2:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 81781e8:	89 04 24             	mov    %eax,(%esp)
 81781eb:	e8 5e 0a f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 81781f0:	89 04 24             	mov    %eax,(%esp)
 81781f3:	e8 02 8e f8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 81781f8:	89 c6                	mov    %eax,%esi
 81781fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81781fd:	89 04 24             	mov    %eax,(%esp)
 8178200:	e8 23 8e f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8178205:	89 c3                	mov    %eax,%ebx
 8178207:	8d 85 5f fe ff ff    	lea    -0x1a1(%ebp),%eax
 817820d:	89 04 24             	mov    %eax,(%esp)
 8178210:	e8 c3 f4 33 00       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 8178215:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 817821b:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 817821f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8178223:	8d 8d f0 f8 ff ff    	lea    -0x710(%ebp),%ecx
 8178229:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 817822d:	89 44 24 10          	mov    %eax,0x10(%esp)
 8178231:	8d 85 10 fe ff ff    	lea    -0x1f0(%ebp),%eax
 8178237:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817823b:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 8178241:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178245:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178248:	89 44 24 04          	mov    %eax,0x4(%esp)
 817824c:	89 14 24             	mov    %edx,(%esp)
 817824f:	ff d7                	call   *%edi
 8178251:	e9 26 01 00 00       	jmp    817837c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1986>
 8178256:	8b 45 10             	mov    0x10(%ebp),%eax
 8178259:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 817825d:	66 83 f8 01          	cmp    $0x1,%ax
 8178261:	0f 85 80 00 00 00    	jne    81782e7 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x18f1>
 8178267:	a1 34 f7 41 09       	mov    0x941f734,%eax
 817826c:	8b 00                	mov    (%eax),%eax
 817826e:	83 c0 10             	add    $0x10,%eax
 8178271:	8b 38                	mov    (%eax),%edi
 8178273:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8178279:	89 04 24             	mov    %eax,(%esp)
 817827c:	e8 cd 09 f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8178281:	89 04 24             	mov    %eax,(%esp)
 8178284:	e8 71 8d f8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 8178289:	89 c6                	mov    %eax,%esi
 817828b:	8b 45 0c             	mov    0xc(%ebp),%eax
 817828e:	89 04 24             	mov    %eax,(%esp)
 8178291:	e8 92 8d f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8178296:	89 c3                	mov    %eax,%ebx
 8178298:	8d 85 5f fe ff ff    	lea    -0x1a1(%ebp),%eax
 817829e:	89 04 24             	mov    %eax,(%esp)
 81782a1:	e8 32 f4 33 00       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 81782a6:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 81782ac:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 81782b0:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81782b4:	8d 8d f0 f8 ff ff    	lea    -0x710(%ebp),%ecx
 81782ba:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81782be:	89 44 24 10          	mov    %eax,0x10(%esp)
 81782c2:	8d 85 10 fe ff ff    	lea    -0x1f0(%ebp),%eax
 81782c8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81782cc:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 81782d2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81782d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81782d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81782dd:	89 14 24             	mov    %edx,(%esp)
 81782e0:	ff d7                	call   *%edi
 81782e2:	e9 95 00 00 00       	jmp    817837c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1986>
 81782e7:	a1 34 f7 41 09       	mov    0x941f734,%eax
 81782ec:	8b 00                	mov    (%eax),%eax
 81782ee:	83 c0 14             	add    $0x14,%eax
 81782f1:	8b 38                	mov    (%eax),%edi
 81782f3:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 81782f9:	89 04 24             	mov    %eax,(%esp)
 81782fc:	e8 4d 09 f5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8178301:	89 04 24             	mov    %eax,(%esp)
 8178304:	e8 f1 8c f8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 8178309:	89 c6                	mov    %eax,%esi
 817830b:	8b 45 0c             	mov    0xc(%ebp),%eax
 817830e:	89 04 24             	mov    %eax,(%esp)
 8178311:	e8 12 8d f8 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 8178316:	89 c3                	mov    %eax,%ebx
 8178318:	8d 85 5f fe ff ff    	lea    -0x1a1(%ebp),%eax
 817831e:	89 04 24             	mov    %eax,(%esp)
 8178321:	e8 b2 f3 33 00       	call   84b76d8 <_ZN8WongWork12CGenUniqueNo11GenUniqueNoEPc>
 8178326:	8b 15 34 f7 41 09    	mov    0x941f734,%edx
 817832c:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8178330:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 8178334:	8d 8d f0 f8 ff ff    	lea    -0x710(%ebp),%ecx
 817833a:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 817833e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8178342:	8d 85 10 fe ff ff    	lea    -0x1f0(%ebp),%eax
 8178348:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817834c:	8d 85 57 fe ff ff    	lea    -0x1a9(%ebp),%eax
 8178352:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178356:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178359:	89 44 24 04          	mov    %eax,0x4(%esp)
 817835d:	89 14 24             	mov    %edx,(%esp)
 8178360:	ff d7                	call   *%edi
 8178362:	eb 18                	jmp    817837c <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1986>
 8178364:	89 d3                	mov    %edx,%ebx
 8178366:	89 c6                	mov    %eax,%esi
 8178368:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 817836e:	89 04 24             	mov    %eax,(%esp)
 8178371:	e8 5c 45 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8178376:	89 f0                	mov    %esi,%eax
 8178378:	89 da                	mov    %ebx,%edx
 817837a:	eb 34                	jmp    81783b0 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x19ba>
 817837c:	8d 85 88 fe ff ff    	lea    -0x178(%ebp),%eax
 8178382:	89 04 24             	mov    %eax,(%esp)
 8178385:	e8 48 45 4a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 817838a:	eb 01                	jmp    817838d <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x1997>
 817838c:	90                   	nop
 817838d:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 8178391:	8b 45 10             	mov    0x10(%ebp),%eax
 8178394:	0f b6 40 36          	movzbl 0x36(%eax),%eax
 8178398:	0f b6 c0             	movzbl %al,%eax
 817839b:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 817839e:	0f 9f c0             	setg   %al
 81783a1:	84 c0                	test   %al,%al
 81783a3:	0f 85 07 f3 ff ff    	jne    81776b0 <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0xcba>
 81783a9:	bb 01 00 00 00       	mov    $0x1,%ebx
 81783ae:	eb 1e                	jmp    81783ce <_ZN18ItemVendingMachine19ProcessBuyRequestExEP5CUserRK21MSG_BUY_CERASHOP_ITEM+0x19d8>
 81783b0:	89 d3                	mov    %edx,%ebx
 81783b2:	89 c6                	mov    %eax,%esi
 81783b4:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 81783ba:	89 04 24             	mov    %eax,(%esp)
 81783bd:	e8 28 c6 fb ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81783c2:	89 f0                	mov    %esi,%eax
 81783c4:	89 da                	mov    %ebx,%edx
 81783c6:	89 04 24             	mov    %eax,(%esp)
 81783c9:	e8 82 b3 96 00       	call   8ae3750 <_Unwind_Resume>
 81783ce:	8d 85 94 fe ff ff    	lea    -0x16c(%ebp),%eax
 81783d4:	89 04 24             	mov    %eax,(%esp)
 81783d7:	e8 0e c6 fb ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81783dc:	89 d8                	mov    %ebx,%eax
 81783de:	81 c4 5c 07 00 00    	add    $0x75c,%esp
 81783e4:	5b                   	pop    %ebx
 81783e5:	5e                   	pop    %esi
 81783e6:	5f                   	pop    %edi
 81783e7:	5d                   	pop    %ebp
 81783e8:	c3                   	ret
 81783e9:	90                   	nop

```

```c
// ItemVendingMachine::ProcessBuyRequestEx @ 0x81769f6

/* ItemVendingMachine::ProcessBuyRequestEx(CUser*, MSG_BUY_CERASHOP_ITEM const&) */

undefined4 __thiscall
ItemVendingMachine::ProcessBuyRequestEx
          (ItemVendingMachine *this,CUser *param_1,MSG_BUY_CERASHOP_ITEM *param_2)

{
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  CCeraShopGoods *pCVar5;
  uint uVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint *puVar12;
  Stream *pSVar13;
  CStreamGuard *pCVar14;
  undefined2 *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  vector *pvVar19;
  CCeraShopGoods **ppCVar20;
  char *pcVar21;
  bool bVar22;
  byte bVar23;
  char local_714 [1024];
  CCeraShopGoods *local_314 [36];
  vector local_284 [144];
  char local_1f4 [36];
  undefined4 local_1d0;
  uint local_1cc;
  uint local_1c8;
  uint local_1c4;
  char local_1ad [8];
  undefined1 local_1a5 [21];
  char local_190 [20];
  CStreamGuard local_17c [8];
  int local_174;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_170 [12];
  cMyTrace local_164 [16];
  cMyTrace local_154 [16];
  cMyTrace local_144 [16];
  cMyTrace local_134 [16];
  cMyTrace local_124 [16];
  cMyTrace local_114 [16];
  cMyTrace local_104 [16];
  cMyTrace local_f4 [16];
  cMyTrace local_e4 [16];
  cMyTrace local_d4 [16];
  int local_c4 [2];
  undefined8 local_bc;
  undefined4 local_b4;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  cMyTrace local_9c [16];
  cMyTrace local_8c [16];
  int local_7c;
  int local_78;
  int local_74;
  uint local_70;
  int local_6c;
  int local_68;
  uint local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  stCeraShopIPGRequest_t *local_28;
  int local_24;
  int local_20;
  
  bVar23 = 0;
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_164,
                       "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,0x290,0);
    cMyTrace::operator()(local_164,"There is no User in ItemVendingMachine");
    uVar17 = 0;
  }
  else {
    local_7c = -1;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_6c = 0;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_170);
    pvVar19 = local_284;
    for (iVar16 = 0x24; iVar16 != 0; iVar16 = iVar16 + -1) {
      *(undefined4 *)pvVar19 = 0;
      pvVar19 = pvVar19 + ((uint)bVar23 * -2 + 1) * 4;
    }
    ppCVar20 = local_314;
    for (iVar16 = 0x24; iVar16 != 0; iVar16 = iVar16 + -1) {
      *ppCVar20 = (CCeraShopGoods *)0x0;
      ppCVar20 = ppCVar20 + (uint)bVar23 * -2 + 1;
    }
    CUser::resetUsedCera(param_1);
    for (local_34 = 0; iVar16 = local_34, local_34 < (int)(uint)(byte)param_2[0x36];
        local_34 = local_34 + 1) {
                    /* try { // try from 08176adc to 08177d28 has its CatchHandler @ 081783b0 */
      iVar4 = G_CDataManager();
      pCVar5 = (CCeraShopGoods *)CDataManager::FindGoods(iVar4);
      local_314[iVar16] = pCVar5;
      if (local_314[local_34] == (CCeraShopGoods *)0x0) {
        WongWork::CCeraShop::ProcessError
                  ((CCeraShop *)this,param_1,0x15,local_7c,
                   *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                   (uint)(byte)param_2[0x36],(char)param_2[0xf]);
        local_314[local_34] = (CCeraShopGoods *)0x0;
        cMyTrace::cMyTrace(local_154,
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x2ad,0);
        cMyTrace::operator()
                  (local_154,"[%s][%d]",
                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0x2ad);
      }
      else {
        local_7c = CCeraShopGoods::GetGroupIdx(local_314[local_34]);
        cVar2 = _CheckEnableGiftCondition(this,local_314[local_34],param_1,(char)param_2[0xf]);
        if (cVar2 == '\x01') {
          cVar2 = CerashopAddRestrict::Manager::IsBuyableRestrictItem
                            (param_1,*(uint *)(param_2 + local_34 * 0x1cf + 0x39),1,local_34);
          if (cVar2 == '\x01') {
            cVar2 = _CheckEnableItemCondition
                              ((CCeraShopGoods *)this,(CItem **)local_314[local_34],
                               local_284 + local_34 * 4);
            if (cVar2 == '\x01') {
              cVar2 = _CheckEnableStateCondition
                                ((CCeraShopGoods *)this,(CUser *)local_314[local_34]);
              if (cVar2 == '\x01') {
                local_174 = 0;
                cVar2 = WongWork::CCeraShop::_CheckBuyingCondition
                                  ((CCeraShop *)this,param_1,local_314[local_34],
                                   *(uint *)(param_2 + local_34 * 0x1cf + 0x39),
                                   (uchar)param_2[local_34 * 0x1cf + 0x37],
                                   (short)(char)param_2[local_34 * 0x1cf + 0x38],(char)param_2[0xf],
                                   &local_174);
                if (cVar2 == '\x01') {
                  if (local_7c == 0) {
                    cVar2 = _CheckEnableAvatarCondition
                                      (this,local_314[local_34],
                                       (char)param_2[local_34 * 0x1cf + 0x38],
                                       (uchar)param_2[local_34 * 0x1cf + 0x37],
                                       (stAvatarTypeSelect_t *)&local_1d0);
                    if (cVar2 != '\x01') {
                      WongWork::CCeraShop::ProcessError
                                ((CCeraShop *)this,param_1,0x17,local_7c,
                                 *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                                 (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                      local_314[local_34] = (CCeraShopGoods *)0x0;
                      cMyTrace::cMyTrace(local_f4,
                                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                         ,0x2ec,0);
                      cMyTrace::operator()
                                (local_f4,"[%s][%d]",
                                 "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x2ec);
                      goto LAB_081773c4;
                    }
                    local_70 = local_70 + local_1c4;
                    local_78 = local_78 + local_1cc;
                    local_74 = local_74 + local_1c8;
                  }
                  else {
                    iVar16 = CCeraShopGoods::GetCeraPrice(local_314[local_34]);
                    local_70 = local_70 + iVar16;
                    iVar16 = CCeraShopGoods::GetGoldPrice(local_314[local_34]);
                    local_78 = local_78 + iVar16;
                    iVar16 = CCeraShopGoods::GetWinPoint(local_314[local_34]);
                    local_74 = local_74 + iVar16;
                  }
                  iVar16 = CCeraShopGoods::GetMileagePrice(local_314[local_34]);
                  local_6c = local_6c + iVar16;
                  if ((*(short *)(param_2 + 0xd) == 1) &&
                     (cVar2 = CCeraShopGoods::isCeraPointDisallowance_(local_314[local_34]),
                     cVar2 != '\0')) {
                    WongWork::CCeraShop::ProcessError
                              ((CCeraShop *)this,param_1,0x138b,local_7c,
                               *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                               (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                    local_314[local_34] = (CCeraShopGoods *)0x0;
                    cMyTrace::cMyTrace(local_e4,
                                       "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                       ,0x305,0);
                    cMyTrace::operator()
                              (local_e4,"[%s][%d]",
                               "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,0x305);
                    goto LAB_081783ce;
                  }
                }
                else {
                  WongWork::CCeraShop::ProcessError
                            ((CCeraShop *)this,param_1,(ushort)local_174,local_7c,
                             *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                             (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                  local_314[local_34] = (CCeraShopGoods *)0x0;
                  cMyTrace::cMyTrace(local_104,
                                     "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                     ,0x2d6,0);
                  cMyTrace::operator()
                            (local_104,"[%s][%d]",
                             "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                             ,0x2d6);
                }
              }
              else {
                WongWork::CCeraShop::ProcessError
                          ((CCeraShop *)this,param_1,7,local_7c,
                           *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_314[local_34] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_114,
                                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x2c8,0);
                cMyTrace::operator()
                          (local_114,"[%s][%d]",
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x2c8);
              }
            }
            else {
              WongWork::CCeraShop::ProcessError
                        ((CCeraShop *)this,param_1,0x11,local_7c,
                         *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                         (uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_314[local_34] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_124,
                                 "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x2c2,0);
              cMyTrace::operator()
                        (local_124,"[%s][%d]",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x2c2);
            }
          }
          else {
            WongWork::CCeraShop::ProcessError
                      ((CCeraShop *)this,param_1,0x71,local_7c,
                       *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                       (uint)(byte)param_2[0x36],(char)param_2[0xf]);
            local_314[local_34] = (CCeraShopGoods *)0x0;
            cMyTrace::cMyTrace(local_134,
                               "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                               ,699,0);
            cMyTrace::operator()
                      (local_134,"[%s][%d]",
                       "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                       ,699);
          }
        }
        else {
          WongWork::CCeraShop::ProcessError
                    ((CCeraShop *)this,param_1,8,local_7c,
                     *(uint *)(param_2 + local_34 * 0x1cf + 0x39),local_34 + 1,
                     (uint)(byte)param_2[0x36],(char)param_2[0xf]);
          local_314[local_34] = (CCeraShopGoods *)0x0;
          cMyTrace::cMyTrace(local_144,
                             "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                             ,0x2b4,0);
          cMyTrace::operator()
                    (local_144,"[%s][%d]",
                     "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                     ,0x2b4);
        }
      }
LAB_081773c4:
    }
    cVar2 = WongWork::CCeraShop::_CheckValidCount((CCeraShop *)this,local_314);
    if (cVar2 == '\x01') {
      local_68 = 0;
      iVar16 = CUser::GetCera(param_1);
      if (iVar16 < (int)local_70) {
        local_68 = 0xb;
      }
      else {
        iVar16 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        if (iVar16 < local_78) {
          local_68 = 10;
        }
        else {
          iVar16 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
          if (iVar16 < local_74) {
            local_68 = 0xc;
          }
          else {
            iVar16 = CUser::GetMileage(param_1);
            if (iVar16 < local_6c) {
              local_68 = 0x3ed;
            }
          }
        }
      }
      if (*(short *)(param_2 + 0xd) == 1) {
        local_68 = 0;
        uVar6 = CUser::GetCeraPoint(param_1);
        if (uVar6 < local_70) {
          local_68 = 0x138a;
        }
      }
      if (local_68 == 0) {
        local_64 = 0;
        local_60 = 0;
        local_5c = 0;
        local_58 = 0;
        local_54 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
        local_50 = (int)local_54 >> 0x1f;
        local_4c = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
        local_48 = 0;
        local_40 = 0;
        local_3c = CUser::GetMileage(param_1);
        local_38 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        for (local_30 = 0; local_30 < (int)(uint)(byte)param_2[0x36]; local_30 = local_30 + 1) {
          if (local_314[local_30] != (CCeraShopGoods *)0x0) {
            local_7c = CCeraShopGoods::GetGroupIdx(local_314[local_30]);
            if (local_7c == 0) {
              cVar2 = _CheckEnableAvatarCondition
                                (this,local_314[local_30],(char)param_2[local_30 * 0x1cf + 0x38],
                                 (uchar)param_2[local_30 * 0x1cf + 0x37],
                                 (stAvatarTypeSelect_t *)&local_1d0);
              if (cVar2 != '\x01') {
                WongWork::CCeraShop::ProcessError
                          ((CCeraShop *)this,param_1,0x17,local_7c,
                           *(uint *)(param_2 + local_30 * 0x1cf + 0x39),local_30 + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_314[local_30] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_d4,
                                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x37b,0);
                cMyTrace::operator()
                          (local_d4,"[%s][%d]",
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x37b);
                goto LAB_0817838d;
              }
              local_5c = local_1c4;
              local_64 = local_1cc;
              local_58 = local_1c8;
              local_60 = local_1d0;
            }
            else {
              local_5c = CCeraShopGoods::GetCeraPrice(local_314[local_30]);
              local_64 = CCeraShopGoods::GetGoldPrice(local_314[local_30]);
              local_58 = CCeraShopGoods::GetWinPoint(local_314[local_30]);
            }
            local_40 = CCeraShopGoods::GetMileagePrice(local_314[local_30]);
            local_2c = 0;
            uVar6 = CUser::GetCera(param_1);
            if (uVar6 < local_5c) {
              local_2c = 0xb;
            }
            else {
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              iVar16 = CInventory::get_money(pCVar8);
              if (iVar16 < (int)local_64) {
                local_2c = 10;
              }
              else {
                uVar6 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
                if (uVar6 < local_58) {
                  local_2c = 0xc;
                }
              }
            }
            if (*(short *)(param_2 + 0xd) == 1) {
              local_2c = 0;
              uVar6 = CUser::GetCeraPoint(param_1);
              if (uVar6 < local_5c) {
                local_2c = 0x138a;
              }
            }
            if (((int)local_50 <= (int)local_64 >> 0x1f) &&
               (((int)local_50 < (int)local_64 >> 0x1f || (local_54 < local_64)))) {
              local_2c = 10;
            }
            if (((int)local_48 < 1) && ((0x7fffffff < local_48 || (local_4c < local_58)))) {
              local_2c = 0xc;
            }
            if (local_3c < local_40) {
              local_2c = 0x3ed;
            }
            local_c4[0] = local_3c - local_40;
            local_c4[1] = 0;
            piVar11 = std::max<int>(local_c4 + 1,local_c4);
            local_3c = *piVar11;
            local_bc._0_4_ = local_54 - local_64;
            local_bc._4_4_ = (local_50 - ((int)local_64 >> 0x1f)) - (uint)(local_54 < local_64);
            local_b4 = 0;
            local_b0 = 0;
            puVar12 = (uint *)std::max<long_long>((longlong *)&local_b4,&local_bc);
            local_50 = puVar12[1];
            local_54 = *puVar12;
            local_ac = local_4c - local_58;
            local_a8 = local_48 - (local_4c < local_58);
            local_a4 = 0;
            local_a0 = 0;
            puVar12 = (uint *)std::max<long_long>((longlong *)&local_a4,(longlong *)&local_ac);
            local_4c = *puVar12;
            local_48 = puVar12[1];
            if (local_2c == 0) {
              iVar16 = CCeraShopGoods::GetFeaturedIdx(local_314[local_30]);
              cVar2 = CUser::IsRestrictedGoods(param_1,iVar16);
              if (cVar2 == '\0') {
                pSVar13 = (Stream *)
                          StreamPool::Acquire(GlobalData::s_stream_pool,
                                              "localjapan/AppendVendingMachine.cpp",0x3cb);
                CStreamGuard::CStreamGuard(local_17c,pSVar13,false);
                pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                    /* try { // try from 08177d54 to 08178361 has its CatchHandler @ 08178364 */
                local_28 = CStreamGuard::GetInBuffer<stCeraShopIPGRequest_t>(pCVar14);
                *(undefined4 *)local_28 = *(undefined4 *)(param_2 + local_30 * 0x1cf + 0x39);
                uVar17 = CCeraShopGoods::GetGroupIdx(local_314[local_30]);
                *(undefined4 *)(local_28 + 4) = uVar17;
                uVar3 = CCeraShopGoods::GetStackCount(local_314[local_30]);
                *(undefined2 *)(local_28 + 0xc) = uVar3;
                *(uint *)(local_28 + 0x10) = local_5c;
                *(uint *)(local_28 + 0x18) = local_64;
                *(uint *)(local_28 + 0x14) = local_58;
                uVar17 = CCeraShopGoods::GetItemIdx(local_314[local_30]);
                *(undefined4 *)(local_28 + 8) = uVar17;
                local_28[0x2c] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0x37);
                local_28[0x2d] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0x38);
                *(undefined4 *)(local_28 + 0x1c) = local_60;
                uVar17 = CCeraShopGoods::GetFeaturedIdx(local_314[local_30]);
                *(undefined4 *)(local_28 + 0x28) = uVar17;
                *(uint *)(local_28 + 0x20) = (uint)(byte)param_2[0x36];
                *(int *)(local_28 + 0x24) = local_30 + 1;
                *(undefined4 *)(local_28 + 0x30) = local_38;
                local_28[0x34] = *(stCeraShopIPGRequest_t *)(param_2 + 0xf);
                *(undefined4 *)(local_28 + 0x40) = *(undefined4 *)(param_2 + 0x2e);
                *(undefined4 *)(local_28 + 0x38) = *(undefined4 *)(param_2 + 0x32);
                *(undefined2 *)(local_28 + 0x3c) = *(undefined2 *)(param_2 + 0xd);
                local_28[0x44] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0x3d);
                for (local_24 = 0; local_24 < (int)(uint)(byte)param_2[local_30 * 0x1cf + 0x3d];
                    local_24 = local_24 + 1) {
                  *(undefined4 *)(local_28 + (local_24 + 8) * 8 + 8) =
                       *(undefined4 *)(param_2 + local_24 * 5 + local_30 * 0x1cf + 0x3e);
                  local_28[(local_24 + 8) * 8 + 0xc] =
                       *(stCeraShopIPGRequest_t *)(param_2 + local_24 * 5 + local_30 * 0x1cf + 0x42)
                  ;
                }
                local_28[0x160] = *(stCeraShopIPGRequest_t *)(param_2 + local_30 * 0x1cf + 0xed);
                for (local_20 = 0; local_20 < (int)(uint)(byte)param_2[local_30 * 0x1cf + 0xed];
                    local_20 = local_20 + 1) {
                  *(undefined4 *)(local_28 + (local_20 + 0x2c) * 8 + 4) =
                       *(undefined4 *)(param_2 + (local_20 + 0x16) * 8 + local_30 * 0x1cf + 0x3e);
                  *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 8) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_30 * 0x1cf + 0x42);
                  *(undefined2 *)(local_28 + (local_20 + 0x2c) * 8 + 10) =
                       *(undefined2 *)(param_2 + (local_20 + 0x16) * 8 + local_30 * 0x1cf + 0x44);
                }
                pCVar14 = (CStreamGuard *)CStreamGuard::operator*(local_17c);
                CStreamGuard::operator<<(pCVar14,local_40);
                pcVar21 = local_1f4;
                for (iVar16 = 9; iVar16 != 0; iVar16 = iVar16 + -1) {
                  pcVar21[0] = '\0';
                  pcVar21[1] = '\0';
                  pcVar21[2] = '\0';
                  pcVar21[3] = '\0';
                  pcVar21 = pcVar21 + ((uint)bVar23 * -2 + 1) * 4;
                }
                local_190[0] = '\0';
                local_190[1] = '\0';
                local_190[2] = '\0';
                local_190[3] = '\0';
                local_190[4] = '\0';
                local_190[5] = '\0';
                local_190[6] = '\0';
                local_190[7] = '\0';
                local_190[8] = '\0';
                local_190[9] = '\0';
                local_190[10] = '\0';
                local_190[0xb] = '\0';
                local_190[0xc] = '\0';
                local_190[0xd] = '\0';
                local_190[0xe] = '\0';
                local_190[0xf] = '\0';
                local_190[0x10] = '\0';
                local_190[0x11] = '\0';
                local_190[0x12] = '\0';
                local_190[0x13] = '\0';
                puVar15 = (undefined2 *)local_1a5;
                uVar6 = 0x15;
                bVar22 = ((uint)puVar15 & 1) != 0;
                if (bVar22) {
                  local_1a5[0] = '\0';
                  puVar15 = (undefined2 *)(local_1a5 + 1);
                  uVar6 = 0x14;
                }
                if (((uint)puVar15 & 2) != 0) {
                  *puVar15 = 0;
                  puVar15 = puVar15 + 1;
                  uVar6 = uVar6 - 2;
                }
                uVar18 = 0;
                do {
                  *(undefined4 *)((int)puVar15 + uVar18) = 0;
                  uVar18 = uVar18 + 4;
                } while (uVar18 < (uVar6 & 0xfffffffc));
                puVar15 = (undefined2 *)((int)puVar15 + uVar18);
                if ((uVar6 & 2) != 0) {
                  *puVar15 = 0;
                  puVar15 = puVar15 + 1;
                }
                if (!bVar22) {
                  *(undefined1 *)puVar15 = 0;
                }
                pcVar21 = local_714;
                for (iVar16 = 0x100; iVar16 != 0; iVar16 = iVar16 + -1) {
                  pcVar21[0] = '\0';
                  pcVar21[1] = '\0';
                  pcVar21[2] = '\0';
                  pcVar21[3] = '\0';
                  pcVar21 = pcVar21 + ((uint)bVar23 * -2 + 1) * 4;
                }
                local_1ad[0] = '\0';
                local_1ad[1] = '\0';
                local_1ad[2] = '\0';
                local_1ad[3] = '\0';
                local_1ad[4] = '\0';
                local_1ad[5] = '\0';
                local_1ad[6] = '\0';
                local_1ad[7] = '\0';
                uVar17 = CCeraShopGoods::GetItemIdx(local_314[local_30]);
                OS_API::snprintf(local_190,0x14,"%d",uVar17);
                OS_API::snprintf(local_1f4,0x24,"%d",local_5c);
                OS_API::snprintf(local_1ad,8,"%d",*(undefined4 *)(param_2 + local_30 * 0x1cf + 0x39)
                                );
                _GetItemString(this,local_314[local_30],local_714,0x400);
                if (local_5c == 0) {
                  pcVar1 = *(code **)(*GlobalData::s_pIPGHelper + 0x18);
                  pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                  uVar17 = CStreamGuard::Get(pCVar14);
                  uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar9 = WongWork::CGenUniqueNo::GenUniqueNo(local_1a5);
                  (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_1ad,local_1f4,uVar9,local_714,
                            uVar7,uVar17);
                }
                else if (*(short *)(param_2 + 0xd) == 1) {
                  pcVar1 = *(code **)(*GlobalData::s_pIPGHelper + 0x10);
                  pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                  uVar17 = CStreamGuard::Get(pCVar14);
                  uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar9 = WongWork::CGenUniqueNo::GenUniqueNo(local_1a5);
                  (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_1ad,local_1f4,uVar9,local_714,
                            uVar7,uVar17);
                }
                else {
                  pcVar1 = *(code **)(*GlobalData::s_pIPGHelper + 0x14);
                  pCVar14 = (CStreamGuard *)CStreamGuard::operator->(local_17c);
                  uVar17 = CStreamGuard::Get(pCVar14);
                  uVar7 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
                  uVar9 = WongWork::CGenUniqueNo::GenUniqueNo(local_1a5);
                  (*pcVar1)(GlobalData::s_pIPGHelper,param_1,local_1ad,local_1f4,uVar9,local_714,
                            uVar7,uVar17);
                }
                    /* try { // try from 08178385 to 08178389 has its CatchHandler @ 081783b0 */
                CStreamGuard::~CStreamGuard(local_17c);
              }
              else {
                WongWork::CCeraShop::ProcessError
                          ((CCeraShop *)this,param_1,0x14,local_7c,
                           *(uint *)(param_2 + local_30 * 0x1cf + 0x39),local_30 + 1,
                           (uint)(byte)param_2[0x36],(char)param_2[0xf]);
                local_314[local_30] = (CCeraShopGoods *)0x0;
                cMyTrace::cMyTrace(local_8c,
                                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                   ,0x3c1,0);
                cMyTrace::operator()
                          (local_8c,"[%s][%d]",
                           "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                           ,0x3c1);
              }
            }
            else {
              uVar17 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
              LogManager::logFormat
                        (1,"localjapan/AppendVendingMachine.cpp",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3b3,
                         "IPG ERROR [Dispatcher_BuyCeraShopItem::dispatch_sig] UserID[%s] ACera[%d] AGold[%d] AWP[%d] AMile[%d]"
                         ,uVar17,local_5c,local_64,local_58,local_40);
              uVar17 = CUser::GetMileage(param_1);
              uVar7 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
              pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              uVar9 = CInventory::get_money(pCVar8);
              uVar10 = CUser::GetCera(param_1);
              LogManager::logFormat
                        (1,"localjapan/AppendVendingMachine.cpp",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3b4," / UCera[%d] UGold[%d] UWP[%d] UMile[%d]\n",uVar10,uVar9,uVar7,
                         uVar17);
              LogManager::logFormat
                        (1,"localjapan/AppendVendingMachine.cpp",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3b9,"Error Goods No : %d",
                         *(undefined4 *)(param_2 + local_30 * 0x1cf + 0x39));
              WongWork::CCeraShop::ProcessError
                        ((CCeraShop *)this,param_1,(ushort)local_2c,local_7c,
                         *(uint *)(param_2 + local_30 * 0x1cf + 0x39),local_30 + 1,
                         (uint)(byte)param_2[0x36],(char)param_2[0xf]);
              local_314[local_30] = (CCeraShopGoods *)0x0;
              cMyTrace::cMyTrace(local_9c,
                                 "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                                 ,0x3bb,0);
              cMyTrace::operator()
                        (local_9c,"[%s][%d]",
                         "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                         ,0x3bb);
            }
          }
LAB_0817838d:
        }
      }
      else {
        uVar17 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        LogManager::logFormat
                  (1,"localjapan/AppendVendingMachine.cpp",
                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0x34b,"[ERROR] Not enough UserID[%s] ACera[%d] AGold[%d] AWP[%d] AMile[%d]",
                   uVar17,local_70,local_78,local_74,local_6c);
        uVar17 = CUser::GetMileage(param_1);
        uVar7 = CUserCharacInfo::GetWinPoint((CUserCharacInfo *)param_1);
        pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        uVar9 = CInventory::get_money(pCVar8);
        uVar10 = CUser::GetCera(param_1);
        LogManager::logFormat
                  (1,"localjapan/AppendVendingMachine.cpp",
                   "bool ItemVendingMachine::ProcessBuyRequestEx(CUser*, const MSG_BUY_CERASHOP_ITEM&)"
                   ,0x34c," / UCera[%d] UGold[%d] UWP[%d] AMile[%d]\n",uVar10,uVar9,uVar7,uVar17);
        local_7c = -1;
        WongWork::CCeraShop::ProcessError
                  ((CCeraShop *)this,param_1,(ushort)local_68,-1,*(uint *)(param_2 + 0x39),1,1,
                   (char)param_2[0xf]);
      }
    }
    else {
      local_7c = -1;
      WongWork::CCeraShop::ProcessError
                ((CCeraShop *)this,param_1,1,-1,*(uint *)(param_2 + 0x39),1,1,(char)param_2[0xf]);
    }
LAB_081783ce:
    uVar17 = 1;
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_170);
  }
  return uVar17;
}

```

---

## ProcessIPGUserData

```asm
// === 0854c4f6 ItemVendingMachine::ProcessIPGUserData  [0x0854c4f6-0x854c524] ===
 854c4f6:	55                   	push   %ebp
 854c4f7:	89 e5                	mov    %esp,%ebp
 854c4f9:	83 ec 28             	sub    $0x28,%esp
 854c4fc:	8b 45 18             	mov    0x18(%ebp),%eax
 854c4ff:	89 44 24 10          	mov    %eax,0x10(%esp)
 854c503:	8b 45 14             	mov    0x14(%ebp),%eax
 854c506:	89 44 24 0c          	mov    %eax,0xc(%esp)
 854c50a:	8b 45 10             	mov    0x10(%ebp),%eax
 854c50d:	89 44 24 08          	mov    %eax,0x8(%esp)
 854c511:	8b 45 0c             	mov    0xc(%ebp),%eax
 854c514:	89 44 24 04          	mov    %eax,0x4(%esp)
 854c518:	8b 45 08             	mov    0x8(%ebp),%eax
 854c51b:	89 04 24             	mov    %eax,(%esp)
 854c51e:	e8 c7 be c2 ff       	call   81783ea <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>
 854c523:	c9                   	leave
 854c524:	c3                   	ret

```

```c
// ItemVendingMachine::ProcessIPGUserData @ 0x854c4f6

/* ItemVendingMachine::ProcessIPGUserData(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
ItemVendingMachine::ProcessIPGUserData
          (ItemVendingMachine *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,
          Stream *param_4)

{
  ProcessIPGUserDataJpnEx(this,param_1,param_2,param_3,param_4);
  return;
}

```

---

## ProcessIPGUserDataJpnEx

```asm
// === 081783ea ItemVendingMachine::ProcessIPGUserDataJpnEx  [0x081783ea-0x81784d3] ===
 81783ea:	55                   	push   %ebp
 81783eb:	89 e5                	mov    %esp,%ebp
 81783ed:	83 ec 28             	sub    $0x28,%esp
 81783f0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81783f4:	0f 84 d6 00 00 00    	je     81784d0 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xe6>
 81783fa:	8b 45 14             	mov    0x14(%ebp),%eax
 81783fd:	8b 40 1c             	mov    0x1c(%eax),%eax
 8178400:	83 f8 04             	cmp    $0x4,%eax
 8178403:	75 2c                	jne    8178431 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x47>
 8178405:	8b 45 18             	mov    0x18(%ebp),%eax
 8178408:	89 44 24 10          	mov    %eax,0x10(%esp)
 817840c:	8b 45 14             	mov    0x14(%ebp),%eax
 817840f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178413:	8b 45 10             	mov    0x10(%ebp),%eax
 8178416:	89 44 24 08          	mov    %eax,0x8(%esp)
 817841a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817841d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178421:	8b 45 08             	mov    0x8(%ebp),%eax
 8178424:	89 04 24             	mov    %eax,(%esp)
 8178427:	e8 a8 00 00 00       	call   81784d4 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>
 817842c:	e9 a0 00 00 00       	jmp    81784d1 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xe7>
 8178431:	8b 45 14             	mov    0x14(%ebp),%eax
 8178434:	8b 40 1c             	mov    0x1c(%eax),%eax
 8178437:	85 c0                	test   %eax,%eax
 8178439:	75 29                	jne    8178464 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x7a>
 817843b:	8b 45 18             	mov    0x18(%ebp),%eax
 817843e:	89 44 24 10          	mov    %eax,0x10(%esp)
 8178442:	8b 45 14             	mov    0x14(%ebp),%eax
 8178445:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178449:	8b 45 10             	mov    0x10(%ebp),%eax
 817844c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178450:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178453:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178457:	8b 45 08             	mov    0x8(%ebp),%eax
 817845a:	89 04 24             	mov    %eax,(%esp)
 817845d:	e8 0a 02 00 00       	call   817866c <_ZN18ItemVendingMachine22ProcessIPG_ResultInputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>
 8178462:	eb 6d                	jmp    81784d1 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xe7>
 8178464:	8b 45 14             	mov    0x14(%ebp),%eax
 8178467:	8b 40 1c             	mov    0x1c(%eax),%eax
 817846a:	83 f8 02             	cmp    $0x2,%eax
 817846d:	75 29                	jne    8178498 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xae>
 817846f:	8b 45 18             	mov    0x18(%ebp),%eax
 8178472:	89 44 24 10          	mov    %eax,0x10(%esp)
 8178476:	8b 45 14             	mov    0x14(%ebp),%eax
 8178479:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817847d:	8b 45 10             	mov    0x10(%ebp),%eax
 8178480:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178484:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178487:	89 44 24 04          	mov    %eax,0x4(%esp)
 817848b:	8b 45 08             	mov    0x8(%ebp),%eax
 817848e:	89 04 24             	mov    %eax,(%esp)
 8178491:	e8 e0 01 00 00       	call   8178676 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream>
 8178496:	eb 39                	jmp    81784d1 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xe7>
 8178498:	8b 45 14             	mov    0x14(%ebp),%eax
 817849b:	8b 40 1c             	mov    0x1c(%eax),%eax
 817849e:	89 44 24 14          	mov    %eax,0x14(%esp)
 81784a2:	c7 44 24 10 94 61 b8 	movl   $0x8b86194,0x10(%esp)
 81784a9:	08 
 81784aa:	c7 44 24 0c 82 04 00 	movl   $0x482,0xc(%esp)
 81784b1:	00 
 81784b2:	c7 44 24 08 00 70 b8 	movl   $0x8b87000,0x8(%esp)
 81784b9:	08 
 81784ba:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 81784c1:	08 
 81784c2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81784c9:	e8 3c b7 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81784ce:	eb 01                	jmp    81784d1 <_ZN18ItemVendingMachine23ProcessIPGUserDataJpnExEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xe7>
 81784d0:	90                   	nop
 81784d1:	c9                   	leave
 81784d2:	c3                   	ret
 81784d3:	90                   	nop

```

```c
// ItemVendingMachine::ProcessIPGUserDataJpnEx @ 0x81783ea

/* ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
ItemVendingMachine::ProcessIPGUserDataJpnEx
          (ItemVendingMachine *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,
          Stream *param_4)

{
  if (param_1 != (CUser *)0x0) {
    if (*(int *)(param_3 + 0x1c) == 4) {
      ProcessIPG_ResultQuery((CUser *)this,(SIPGData *)param_1,param_2,(Stream *)param_3);
    }
    else if (*(int *)(param_3 + 0x1c) == 0) {
      ProcessIPG_ResultInput((CUser *)this,(SIPGData *)param_1,param_2,(Stream *)param_3);
    }
    else if (*(int *)(param_3 + 0x1c) == 2) {
      ProcessIPG_ResultOutput(this,param_1,param_2,param_3,param_4);
    }
    else {
      LogManager::logFormat
                (1,"localjapan/AppendVendingMachine.cpp",
                 "void ItemVendingMachine::ProcessIPGUserDataJpnEx(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                 ,0x482,"Unhandled reply from BModule is %d",*(undefined4 *)(param_3 + 0x1c));
    }
  }
  return;
}

```

---

## ProcessIPG_ResultInput

```asm
// === 0817866c ItemVendingMachine::ProcessIPG_ResultInput  [0x0817866c-0x8178675] ===
 817866c:	55                   	push   %ebp
 817866d:	89 e5                	mov    %esp,%ebp
 817866f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8178673:	5d                   	pop    %ebp
 8178674:	c3                   	ret
 8178675:	90                   	nop

```

```c
// ItemVendingMachine::ProcessIPG_ResultInput @ 0x817866c

/* ItemVendingMachine::ProcessIPG_ResultInput(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void ItemVendingMachine::ProcessIPG_ResultInput
               (CUser *param_1,SIPGData *param_2,SIPGData *param_3,Stream *param_4)

{
  return;
}

```

---

## ProcessIPG_ResultOutput

```asm
// === 08178676 ItemVendingMachine::ProcessIPG_ResultOutput  [0x08178676-0x817991d] ===
 8178676:	55                   	push   %ebp
 8178677:	89 e5                	mov    %esp,%ebp
 8178679:	57                   	push   %edi
 817867a:	56                   	push   %esi
 817867b:	53                   	push   %ebx
 817867c:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 8178682:	b8 e8 47 40 09       	mov    $0x94047e8,%eax
 8178687:	0f b6 00             	movzbl (%eax),%eax
 817868a:	84 c0                	test   %al,%al
 817868c:	75 51                	jne    81786df <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x69>
 817868e:	c7 04 24 e8 47 40 09 	movl   $0x94047e8,(%esp)
 8178695:	e8 96 cc 5a 00       	call   8725330 <__cxa_guard_acquire>
 817869a:	85 c0                	test   %eax,%eax
 817869c:	0f 95 c0             	setne  %al
 817869f:	84 c0                	test   %al,%al
 81786a1:	74 3c                	je     81786df <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x69>
 81786a3:	8b 45 08             	mov    0x8(%ebp),%eax
 81786a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81786aa:	c7 04 24 f8 47 40 09 	movl   $0x94047f8,(%esp)
 81786b1:	e8 04 1c 00 00       	call   817a2ba <_ZN15Arad_IPGProcessC1EP18ItemVendingMachine>
 81786b6:	c7 04 24 e8 47 40 09 	movl   $0x94047e8,(%esp)
 81786bd:	e8 8e cb 5a 00       	call   8725250 <__cxa_guard_release>
 81786c2:	b8 c8 a2 17 08       	mov    $0x817a2c8,%eax
 81786c7:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 81786ce:	08 
 81786cf:	c7 44 24 04 f8 47 40 	movl   $0x94047f8,0x4(%esp)
 81786d6:	09 
 81786d7:	89 04 24             	mov    %eax,(%esp)
 81786da:	e8 f1 56 f0 ff       	call   807ddd0 <__cxa_atexit@plt>
 81786df:	b8 f0 47 40 09       	mov    $0x94047f0,%eax
 81786e4:	0f b6 00             	movzbl (%eax),%eax
 81786e7:	84 c0                	test   %al,%al
 81786e9:	75 51                	jne    817873c <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xc6>
 81786eb:	c7 04 24 f0 47 40 09 	movl   $0x94047f0,(%esp)
 81786f2:	e8 39 cc 5a 00       	call   8725330 <__cxa_guard_acquire>
 81786f7:	85 c0                	test   %eax,%eax
 81786f9:	0f 95 c0             	setne  %al
 81786fc:	84 c0                	test   %al,%al
 81786fe:	74 3c                	je     817873c <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xc6>
 8178700:	8b 45 08             	mov    0x8(%ebp),%eax
 8178703:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178707:	c7 04 24 fc 47 40 09 	movl   $0x94047fc,(%esp)
 817870e:	e8 bb 1b 00 00       	call   817a2ce <_ZN19Arad_MileageProcessC1EP18ItemVendingMachine>
 8178713:	c7 04 24 f0 47 40 09 	movl   $0x94047f0,(%esp)
 817871a:	e8 31 cb 5a 00       	call   8725250 <__cxa_guard_release>
 817871f:	b8 dc a2 17 08       	mov    $0x817a2dc,%eax
 8178724:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 817872b:	08 
 817872c:	c7 44 24 04 fc 47 40 	movl   $0x94047fc,0x4(%esp)
 8178733:	09 
 8178734:	89 04 24             	mov    %eax,(%esp)
 8178737:	e8 94 56 f0 ff       	call   807ddd0 <__cxa_atexit@plt>
 817873c:	8b 45 18             	mov    0x18(%ebp),%eax
 817873f:	89 04 24             	mov    %eax,(%esp)
 8178742:	e8 db 1d 00 00       	call   817a522 <_ZN6Stream12GetOutBufferI22stCeraShopIPGRequest_tEEPT_v>
 8178747:	89 45 88             	mov    %eax,-0x78(%ebp)
 817874a:	8b 45 88             	mov    -0x78(%ebp),%eax
 817874d:	8b 40 04             	mov    0x4(%eax),%eax
 8178750:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8178753:	8b 45 88             	mov    -0x78(%ebp),%eax
 8178756:	8b 40 24             	mov    0x24(%eax),%eax
 8178759:	89 45 90             	mov    %eax,-0x70(%ebp)
 817875c:	8b 45 88             	mov    -0x78(%ebp),%eax
 817875f:	8b 40 20             	mov    0x20(%eax),%eax
 8178762:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8178765:	8b 45 88             	mov    -0x78(%ebp),%eax
 8178768:	8b 40 28             	mov    0x28(%eax),%eax
 817876b:	89 45 98             	mov    %eax,-0x68(%ebp)
 817876e:	8b 45 88             	mov    -0x78(%ebp),%eax
 8178771:	8b 40 1c             	mov    0x1c(%eax),%eax
 8178774:	89 45 9c             	mov    %eax,-0x64(%ebp)
 8178777:	8b 45 88             	mov    -0x78(%ebp),%eax
 817877a:	8b 00                	mov    (%eax),%eax
 817877c:	89 45 a0             	mov    %eax,-0x60(%ebp)
 817877f:	8b 45 88             	mov    -0x78(%ebp),%eax
 8178782:	8b 40 08             	mov    0x8(%eax),%eax
 8178785:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8178788:	8b 45 88             	mov    -0x78(%ebp),%eax
 817878b:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 817878f:	66 89 45 a8          	mov    %ax,-0x58(%ebp)
 8178793:	8b 45 88             	mov    -0x78(%ebp),%eax
 8178796:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 817879a:	88 45 aa             	mov    %al,-0x56(%ebp)
 817879d:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787a0:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 81787a4:	88 45 ab             	mov    %al,-0x55(%ebp)
 81787a7:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787aa:	8b 40 10             	mov    0x10(%eax),%eax
 81787ad:	89 45 ac             	mov    %eax,-0x54(%ebp)
 81787b0:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787b3:	8b 40 14             	mov    0x14(%eax),%eax
 81787b6:	89 45 b0             	mov    %eax,-0x50(%ebp)
 81787b9:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787bc:	8b 40 18             	mov    0x18(%eax),%eax
 81787bf:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 81787c2:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787c5:	8b 40 30             	mov    0x30(%eax),%eax
 81787c8:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81787cb:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81787d1:	89 04 24             	mov    %eax,(%esp)
 81787d4:	e8 b9 24 fd ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 81787d9:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787dc:	0f b6 40 34          	movzbl 0x34(%eax),%eax
 81787e0:	88 45 bf             	mov    %al,-0x41(%ebp)
 81787e3:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787e6:	8b 40 38             	mov    0x38(%eax),%eax
 81787e9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81787ec:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787ef:	0f b7 40 3c          	movzwl 0x3c(%eax),%eax
 81787f3:	66 89 45 c6          	mov    %ax,-0x3a(%ebp)
 81787f7:	8b 45 88             	mov    -0x78(%ebp),%eax
 81787fa:	8b 40 40             	mov    0x40(%eax),%eax
 81787fd:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8178800:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8178806:	89 04 24             	mov    %eax,(%esp)
 8178809:	e8 36 1a 00 00       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 817880e:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8178815:	eb 6b                	jmp    8178882 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x20c>
 8178817:	8b 45 d0             	mov    -0x30(%ebp),%eax
 817881a:	83 c0 08             	add    $0x8,%eax
 817881d:	c1 e0 03             	shl    $0x3,%eax
 8178820:	03 45 88             	add    -0x78(%ebp),%eax
 8178823:	8d 48 0c             	lea    0xc(%eax),%ecx
 8178826:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8178829:	83 c0 08             	add    $0x8,%eax
 817882c:	c1 e0 03             	shl    $0x3,%eax
 817882f:	03 45 88             	add    -0x78(%ebp),%eax
 8178832:	8d 50 08             	lea    0x8(%eax),%edx
 8178835:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 817883b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 817883f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178843:	89 04 24             	mov    %eax,(%esp)
 8178846:	e8 2a 1d 00 00       	call   817a575 <_ZSt9make_pairIRmRhESt4pairINSt17__decay_and_stripIT_E6__typeENS3_IT0_E6__typeEEOS4_OS7_>
 817884b:	83 ec 04             	sub    $0x4,%esp
 817884e:	8d 85 58 ff ff ff    	lea    -0xa8(%ebp),%eax
 8178854:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178858:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 817885e:	89 04 24             	mov    %eax,(%esp)
 8178861:	e8 4e 1d 00 00       	call   817a5b4 <_ZNSt4pairIiiEC1ImhEEOS_IT_T0_E>
 8178866:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 817886c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178870:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8178876:	89 04 24             	mov    %eax,(%esp)
 8178879:	e8 88 4d f6 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 817887e:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 8178882:	8b 45 88             	mov    -0x78(%ebp),%eax
 8178885:	0f b6 40 44          	movzbl 0x44(%eax),%eax
 8178889:	0f b6 c0             	movzbl %al,%eax
 817888c:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 817888f:	0f 9f c0             	setg   %al
 8178892:	84 c0                	test   %al,%al
 8178894:	75 81                	jne    8178817 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1a1>
 8178896:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 817889d:	eb 28                	jmp    81788c7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x251>
 817889f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81788a2:	83 c0 2c             	add    $0x2c,%eax
 81788a5:	c1 e0 03             	shl    $0x3,%eax
 81788a8:	03 45 88             	add    -0x78(%ebp),%eax
 81788ab:	83 c0 04             	add    $0x4,%eax
 81788ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 81788b2:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 81788b8:	83 c0 0c             	add    $0xc,%eax
 81788bb:	89 04 24             	mov    %eax,(%esp)
 81788be:	e8 27 1d 00 00       	call   817a5ea <_ZNSt6vectorI23tagPackageItemSelectionSaIS0_EE9push_backERKS0_>
 81788c3:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 81788c7:	8b 45 88             	mov    -0x78(%ebp),%eax
 81788ca:	0f b6 80 60 01 00 00 	movzbl 0x160(%eax),%eax
 81788d1:	0f b6 c0             	movzbl %al,%eax
 81788d4:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 81788d7:	0f 9f c0             	setg   %al
 81788da:	84 c0                	test   %al,%al
 81788dc:	75 c1                	jne    817889f <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x229>
 81788de:	c7 85 28 ff ff ff 00 	movl   $0x0,-0xd8(%ebp)
 81788e5:	00 00 00 
 81788e8:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 81788ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 81788f2:	8b 45 18             	mov    0x18(%ebp),%eax
 81788f5:	89 04 24             	mov    %eax,(%esp)
 81788f8:	e8 c7 3c 4a 00       	call   861c5c4 <_ZN6StreamrsERi>
 81788fd:	8b 45 14             	mov    0x14(%ebp),%eax
 8178900:	05 73 01 00 00       	add    $0x173,%eax
 8178905:	89 04 24             	mov    %eax,(%esp)
 8178908:	e8 e3 5d f0 ff       	call   807e6f0 <atoi@plt>
 817890d:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8178913:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8178919:	85 c0                	test   %eax,%eax
 817891b:	75 15                	jne    8178932 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2bc>
 817891d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8178921:	74 0f                	je     8178932 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2bc>
 8178923:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178926:	89 04 24             	mov    %eax,(%esp)
 8178929:	e8 04 7b fa ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 817892e:	85 c0                	test   %eax,%eax
 8178930:	75 07                	jne    8178939 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2c3>
 8178932:	b8 01 00 00 00       	mov    $0x1,%eax
 8178937:	eb 05                	jmp    817893e <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2c8>
 8178939:	b8 00 00 00 00       	mov    $0x0,%eax
 817893e:	84 c0                	test   %al,%al
 8178940:	0f 84 1d 01 00 00    	je     8178a63 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x3ed>
 8178946:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 817894a:	74 0f                	je     817895b <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2e5>
 817894c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817894f:	89 04 24             	mov    %eax,(%esp)
 8178952:	e8 db 7a fa ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8178957:	85 c0                	test   %eax,%eax
 8178959:	75 07                	jne    8178962 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2ec>
 817895b:	b8 01 00 00 00       	mov    $0x1,%eax
 8178960:	eb 05                	jmp    8178967 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x2f1>
 8178962:	b8 00 00 00 00       	mov    $0x0,%eax
 8178967:	84 c0                	test   %al,%al
 8178969:	0f 84 9e 00 00 00    	je     8178a0d <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x397>
 817896f:	8b 45 14             	mov    0x14(%ebp),%eax
 8178972:	05 77 01 00 00       	add    $0x177,%eax
 8178977:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 817897d:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8178983:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 8178989:	8b 45 14             	mov    0x14(%ebp),%eax
 817898c:	83 c0 69             	add    $0x69,%eax
 817898f:	89 04 24             	mov    %eax,(%esp)
 8178992:	e8 59 5d f0 ff       	call   807e6f0 <atoi@plt>
 8178997:	89 c6                	mov    %eax,%esi
 8178999:	8b 45 14             	mov    0x14(%ebp),%eax
 817899c:	83 c0 28             	add    $0x28,%eax
 817899f:	89 04 24             	mov    %eax,(%esp)
 81789a2:	e8 49 5d f0 ff       	call   807e6f0 <atoi@plt>
 81789a7:	89 c3                	mov    %eax,%ebx
 81789a9:	8b 45 14             	mov    0x14(%ebp),%eax
 81789ac:	83 c0 3c             	add    $0x3c,%eax
 81789af:	89 c7                	mov    %eax,%edi
 81789b1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81789b8:	00 
 81789b9:	c7 44 24 08 9d 05 00 	movl   $0x59d,0x8(%esp)
 81789c0:	00 
 81789c1:	c7 44 24 04 00 6f b8 	movl   $0x8b86f00,0x4(%esp)
 81789c8:	08 
 81789c9:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 81789cf:	89 04 24             	mov    %eax,(%esp)
 81789d2:	e8 41 6d 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81789d7:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 81789dd:	89 54 24 18          	mov    %edx,0x18(%esp)
 81789e1:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 81789e7:	89 44 24 14          	mov    %eax,0x14(%esp)
 81789eb:	89 74 24 10          	mov    %esi,0x10(%esp)
 81789ef:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81789f3:	89 7c 24 08          	mov    %edi,0x8(%esp)
 81789f7:	c7 44 24 04 c8 61 b8 	movl   $0x8b861c8,0x4(%esp)
 81789fe:	08 
 81789ff:	8d 85 60 ff ff ff    	lea    -0xa0(%ebp),%eax
 8178a05:	89 04 24             	mov    %eax,(%esp)
 8178a08:	e8 7b 6d 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8178a0d:	0f be 55 bf          	movsbl -0x41(%ebp),%edx
 8178a11:	8b 45 08             	mov    0x8(%ebp),%eax
 8178a14:	89 54 24 24          	mov    %edx,0x24(%esp)
 8178a18:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8178a1b:	89 54 24 20          	mov    %edx,0x20(%esp)
 8178a1f:	8b 55 90             	mov    -0x70(%ebp),%edx
 8178a22:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8178a26:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8178a29:	89 54 24 18          	mov    %edx,0x18(%esp)
 8178a2d:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8178a30:	89 54 24 14          	mov    %edx,0x14(%esp)
 8178a34:	c7 44 24 10 19 00 00 	movl   $0x19,0x10(%esp)
 8178a3b:	00 
 8178a3c:	8b 55 14             	mov    0x14(%ebp),%edx
 8178a3f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8178a43:	8b 55 10             	mov    0x10(%ebp),%edx
 8178a46:	89 54 24 08          	mov    %edx,0x8(%esp)
 8178a4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8178a4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178a51:	89 04 24             	mov    %eax,(%esp)
 8178a54:	e8 9d ad 1a 00       	call   83237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>
 8178a59:	bb 00 00 00 00       	mov    $0x0,%ebx
 8178a5e:	e9 74 0e 00 00       	jmp    81798d7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1261>
 8178a63:	c7 85 24 ff ff ff 00 	movl   $0x0,-0xdc(%ebp)
 8178a6a:	00 00 00 
 8178a6d:	c7 45 cc ff ff ff ff 	movl   $0xffffffff,-0x34(%ebp)
 8178a74:	c7 85 20 ff ff ff ff 	movl   $0xffffffff,-0xe0(%ebp)
 8178a7b:	ff ff ff 
 8178a7e:	83 7d 8c 0b          	cmpl   $0xb,-0x74(%ebp)
 8178a82:	0f 87 2c 04 00 00    	ja     8178eb4 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x83e>
 8178a88:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8178a8b:	c1 e0 02             	shl    $0x2,%eax
 8178a8e:	8b 80 6c 62 b8 08    	mov    0x8b8626c(%eax),%eax
 8178a94:	ff e0                	jmp    *%eax
 8178a96:	0f be 75 bf          	movsbl -0x41(%ebp),%esi
 8178a9a:	8b 45 10             	mov    0x10(%ebp),%eax
 8178a9d:	83 c0 7d             	add    $0x7d,%eax
 8178aa0:	89 c3                	mov    %eax,%ebx
 8178aa2:	0f be 4d ab          	movsbl -0x55(%ebp),%ecx
 8178aa6:	0f be 55 aa          	movsbl -0x56(%ebp),%edx
 8178aaa:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8178aad:	89 74 24 2c          	mov    %esi,0x2c(%esp)
 8178ab1:	8b 75 c0             	mov    -0x40(%ebp),%esi
 8178ab4:	89 74 24 28          	mov    %esi,0x28(%esp)
 8178ab8:	8b 75 c8             	mov    -0x38(%ebp),%esi
 8178abb:	89 74 24 24          	mov    %esi,0x24(%esp)
 8178abf:	8d b5 24 ff ff ff    	lea    -0xdc(%ebp),%esi
 8178ac5:	89 74 24 20          	mov    %esi,0x20(%esp)
 8178ac9:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8178acd:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8178ad1:	89 54 24 14          	mov    %edx,0x14(%esp)
 8178ad5:	8b 55 9c             	mov    -0x64(%ebp),%edx
 8178ad8:	89 54 24 10          	mov    %edx,0x10(%esp)
 8178adc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178ae0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8178ae3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178ae7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178aea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178aee:	c7 04 24 f8 47 40 09 	movl   $0x94047f8,(%esp)
 8178af5:	e8 ba 37 02 00       	call   819c2b4 <_ZN15Arad_IPGProcess18CashShopModeAvatarEP5CUsermiiccPKcRijic>
 8178afa:	e9 e8 03 00 00       	jmp    8178ee7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x871>
 8178aff:	0f be 55 bf          	movsbl -0x41(%ebp),%edx
 8178b03:	0f b7 45 a8          	movzwl -0x58(%ebp),%eax
 8178b07:	89 54 24 14          	mov    %edx,0x14(%esp)
 8178b0b:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8178b0e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8178b12:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8178b15:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8178b19:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178b1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178b20:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178b24:	c7 04 24 f8 47 40 09 	movl   $0x94047f8,(%esp)
 8178b2b:	e8 04 39 02 00       	call   819c434 <_ZN15Arad_IPGProcess16CashShopModeCoinEP5CUsertjic>
 8178b30:	e9 b2 03 00 00       	jmp    8178ee7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x871>
 8178b35:	0f be 55 bf          	movsbl -0x41(%ebp),%edx
 8178b39:	0f b7 45 a8          	movzwl -0x58(%ebp),%eax
 8178b3d:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 8178b41:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8178b44:	89 54 24 28          	mov    %edx,0x28(%esp)
 8178b48:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8178b4b:	89 54 24 24          	mov    %edx,0x24(%esp)
 8178b4f:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 8178b55:	89 54 24 20          	mov    %edx,0x20(%esp)
 8178b59:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 8178b5f:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8178b63:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 8178b69:	89 54 24 18          	mov    %edx,0x18(%esp)
 8178b6d:	8b 55 b8             	mov    -0x48(%ebp),%edx
 8178b70:	89 54 24 14          	mov    %edx,0x14(%esp)
 8178b74:	8b 55 98             	mov    -0x68(%ebp),%edx
 8178b77:	89 54 24 10          	mov    %edx,0x10(%esp)
 8178b7b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178b7f:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8178b82:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178b86:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178b89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178b8d:	c7 04 24 f8 47 40 09 	movl   $0x94047f8,(%esp)
 8178b94:	e8 07 39 02 00       	call   819c4a0 <_ZN15Arad_IPGProcess16CashShopModeItemEP5CUsermtilRSt6vectorI10Inven_ItemSaIS3_EERN8WongWork9CCeraShop21stCeraShopItemParam_tERijic>
 8178b99:	e9 49 03 00 00       	jmp    8178ee7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x871>
 8178b9e:	0f be 55 bf          	movsbl -0x41(%ebp),%edx
 8178ba2:	0f b7 45 a8          	movzwl -0x58(%ebp),%eax
 8178ba6:	89 54 24 20          	mov    %edx,0x20(%esp)
 8178baa:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8178bad:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8178bb1:	8b 55 c8             	mov    -0x38(%ebp),%edx
 8178bb4:	89 54 24 18          	mov    %edx,0x18(%esp)
 8178bb8:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 8178bbe:	89 54 24 14          	mov    %edx,0x14(%esp)
 8178bc2:	8d 95 20 ff ff ff    	lea    -0xe0(%ebp),%edx
 8178bc8:	89 54 24 10          	mov    %edx,0x10(%esp)
 8178bcc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178bd0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8178bd3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178bd7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178bda:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178bde:	c7 04 24 f8 47 40 09 	movl   $0x94047f8,(%esp)
 8178be5:	e8 86 3a 02 00       	call   819c670 <_ZN15Arad_IPGProcess20CashShopModeCreatureEP5CUsermtRiS2_jic>
 8178bea:	e9 f8 02 00 00       	jmp    8178ee7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x871>
 8178bef:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8178bf6:	8b 45 10             	mov    0x10(%ebp),%eax
 8178bf9:	83 c0 7d             	add    $0x7d,%eax
 8178bfc:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 8178c02:	8b bd 28 ff ff ff    	mov    -0xd8(%ebp),%edi
 8178c08:	0f be 75 ab          	movsbl -0x55(%ebp),%esi
 8178c0c:	0f be 5d aa          	movsbl -0x56(%ebp),%ebx
 8178c10:	0f b7 4d a8          	movzwl -0x58(%ebp),%ecx
 8178c14:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8178c17:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 8178c1d:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 8178c23:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8178c29:	89 44 24 38          	mov    %eax,0x38(%esp)
 8178c2d:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8178c33:	89 44 24 34          	mov    %eax,0x34(%esp)
 8178c37:	8b 45 90             	mov    -0x70(%ebp),%eax
 8178c3a:	89 44 24 30          	mov    %eax,0x30(%esp)
 8178c3e:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8178c41:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8178c45:	89 7c 24 28          	mov    %edi,0x28(%esp)
 8178c49:	89 74 24 24          	mov    %esi,0x24(%esp)
 8178c4d:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 8178c51:	8b 45 9c             	mov    -0x64(%ebp),%eax
 8178c54:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8178c58:	8b 45 b8             	mov    -0x48(%ebp),%eax
 8178c5b:	89 44 24 18          	mov    %eax,0x18(%esp)
 8178c5f:	8b 45 98             	mov    -0x68(%ebp),%eax
 8178c62:	89 44 24 14          	mov    %eax,0x14(%esp)
 8178c66:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8178c6a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8178c6d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8178c71:	89 54 24 08          	mov    %edx,0x8(%esp)
 8178c75:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178c78:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178c7c:	c7 04 24 fc 47 40 09 	movl   $0x94047fc,(%esp)
 8178c83:	e8 c6 50 02 00       	call   819dd4e <_ZN19Arad_MileageProcess14BuyMileageItemEP5CUserimtilicciiiPKcRN8WongWork9CCeraShop21stCeraShopItemParam_tE>
 8178c88:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8178c8b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8178c8f:	74 30                	je     8178cc1 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x64b>
 8178c91:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8178c94:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8178c97:	98                   	cwtl
 8178c98:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 8178c9b:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8178c9f:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 8178ca2:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8178ca6:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8178caa:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178cae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178cb1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178cb5:	c7 04 24 fc 47 40 09 	movl   $0x94047fc,(%esp)
 8178cbc:	e8 4d 58 02 00       	call   819e50e <_ZN19Arad_MileageProcess7BuyFailEP5CUsersiii>
 8178cc1:	bb 00 00 00 00       	mov    $0x0,%ebx
 8178cc6:	e9 0c 0c 00 00       	jmp    81798d7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1261>
 8178ccb:	0f b6 45 ab          	movzbl -0x55(%ebp),%eax
 8178ccf:	0f b6 d8             	movzbl %al,%ebx
 8178cd2:	0f b6 45 aa          	movzbl -0x56(%ebp),%eax
 8178cd6:	0f b6 c8             	movzbl %al,%ecx
 8178cd9:	0f b7 55 a8          	movzwl -0x58(%ebp),%edx
 8178cdd:	8b 45 08             	mov    0x8(%ebp),%eax
 8178ce0:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8178ce7:	00 
 8178ce8:	8d b5 2c ff ff ff    	lea    -0xd4(%ebp),%esi
 8178cee:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 8178cf2:	8d b5 44 ff ff ff    	lea    -0xbc(%ebp),%esi
 8178cf8:	89 74 24 18          	mov    %esi,0x18(%esp)
 8178cfc:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8178d00:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8178d04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8178d08:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 8178d0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8178d0f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8178d12:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178d16:	89 04 24             	mov    %eax,(%esp)
 8178d19:	e8 84 da 1a 00       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 8178d1e:	c7 45 8c ff ff ff ff 	movl   $0xffffffff,-0x74(%ebp)
 8178d25:	8b 5d a4             	mov    -0x5c(%ebp),%ebx
 8178d28:	e8 6e 34 f5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8178d2d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8178d31:	89 04 24             	mov    %eax,(%esp)
 8178d34:	e8 f9 6c 1e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8178d39:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8178d3c:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 8178d40:	74 16                	je     8178d58 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x6e2>
 8178d42:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8178d45:	89 04 24             	mov    %eax,(%esp)
 8178d48:	e8 67 12 00 00       	call   8179fb4 <_ZNK5CItem21isCerashopPackageItemEv>
 8178d4d:	84 c0                	test   %al,%al
 8178d4f:	74 07                	je     8178d58 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x6e2>
 8178d51:	b8 01 00 00 00       	mov    $0x1,%eax
 8178d56:	eb 05                	jmp    8178d5d <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x6e7>
 8178d58:	b8 00 00 00 00       	mov    $0x0,%eax
 8178d5d:	84 c0                	test   %al,%al
 8178d5f:	74 07                	je     8178d68 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x6f2>
 8178d61:	c7 45 8c 07 00 00 00 	movl   $0x7,-0x74(%ebp)
 8178d68:	83 7d 8c 07          	cmpl   $0x7,-0x74(%ebp)
 8178d6c:	74 0e                	je     8178d7c <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x706>
 8178d6e:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 8178d74:	89 04 24             	mov    %eax,(%esp)
 8178d77:	e8 54 9d fd ff       	call   8152ad0 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5clearEv>
 8178d7c:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8178d83:	e8 13 34 f5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8178d88:	89 04 24             	mov    %eax,(%esp)
 8178d8b:	e8 16 12 00 00       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 8178d90:	8b 55 a0             	mov    -0x60(%ebp),%edx
 8178d93:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178d97:	89 04 24             	mov    %eax,(%esp)
 8178d9a:	e8 09 13 00 00       	call   817a0a8 <_ZNK20CItemLimitEditionMgr11getItemInfoEj>
 8178d9f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8178da2:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8178da6:	0f 94 c0             	sete   %al
 8178da9:	84 c0                	test   %al,%al
 8178dab:	74 2c                	je     8178dd9 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x763>
 8178dad:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8178db4:	e8 47 ca 5a 00       	call   8725800 <__cxa_allocate_exception>
 8178db9:	89 c2                	mov    %eax,%edx
 8178dbb:	c7 02 11 00 00 00    	movl   $0x11,(%edx)
 8178dc1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8178dc8:	00 
 8178dc9:	c7 44 24 04 40 5f b7 	movl   $0x8b75f40,0x4(%esp)
 8178dd0:	08 
 8178dd1:	89 04 24             	mov    %eax,(%esp)
 8178dd4:	e8 77 be 5a 00       	call   8724c50 <__cxa_throw>
 8178dd9:	c6 85 13 ff ff ff 00 	movb   $0x0,-0xed(%ebp)
 8178de0:	c7 85 0c ff ff ff 00 	movl   $0x0,-0xf4(%ebp)
 8178de7:	00 00 00 
 8178dea:	c7 85 08 ff ff ff 00 	movl   $0x0,-0xf8(%ebp)
 8178df1:	00 00 00 
 8178df4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8178df7:	89 04 24             	mov    %eax,(%esp)
 8178dfa:	e8 9d 12 00 00       	call   817a09c <_ZNK17CItemLimitEdition14getFeaturedIdxEv>
 8178dff:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8178e02:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8178e06:	75 45                	jne    8178e4d <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x7d7>
 8178e08:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8178e0b:	89 04 24             	mov    %eax,(%esp)
 8178e0e:	e8 7d 12 00 00       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 8178e13:	89 c2                	mov    %eax,%edx
 8178e15:	8b 45 08             	mov    0x8(%ebp),%eax
 8178e18:	8d 8d 13 ff ff ff    	lea    -0xed(%ebp),%ecx
 8178e1e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8178e22:	8d 8d 08 ff ff ff    	lea    -0xf8(%ebp),%ecx
 8178e28:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8178e2c:	8d 8d 0c ff ff ff    	lea    -0xf4(%ebp),%ecx
 8178e32:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8178e36:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178e3a:	89 04 24             	mov    %eax,(%esp)
 8178e3d:	e8 dc bb 1a 00       	call   8324a1e <_ZN8WongWork9CCeraShop13IsSpecialItemEiRiS1_Rb>
 8178e42:	84 c0                	test   %al,%al
 8178e44:	74 07                	je     8178e4d <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x7d7>
 8178e46:	b8 01 00 00 00       	mov    $0x1,%eax
 8178e4b:	eb 05                	jmp    8178e52 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x7dc>
 8178e4d:	b8 00 00 00 00       	mov    $0x0,%eax
 8178e52:	84 c0                	test   %al,%al
 8178e54:	74 24                	je     8178e7a <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x804>
 8178e56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8178e59:	89 04 24             	mov    %eax,(%esp)
 8178e5c:	e8 2f 12 00 00       	call   817a090 <_ZNK17CItemLimitEdition14getRelateditemEv>
 8178e61:	89 c3                	mov    %eax,%ebx
 8178e63:	e8 33 33 f5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8178e68:	8b 40 0c             	mov    0xc(%eax),%eax
 8178e6b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8178e6f:	89 04 24             	mov    %eax,(%esp)
 8178e72:	e8 95 12 00 00       	call   817a10c <_ZN9CItemList15GetRestrictCodeEi>
 8178e77:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8178e7a:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8178e7e:	74 34                	je     8178eb4 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x83e>
 8178e80:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8178e87:	e8 12 2e f5 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8178e8c:	89 c3                	mov    %eax,%ebx
 8178e8e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8178e91:	89 04 24             	mov    %eax,(%esp)
 8178e94:	e8 03 12 00 00       	call   817a09c <_ZNK17CItemLimitEdition14getFeaturedIdxEv>
 8178e99:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8178ea0:	00 
 8178ea1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8178ea5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8178ea9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178eac:	89 04 24             	mov    %eax,(%esp)
 8178eaf:	e8 7c cb 1a 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 8178eb4:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8178eb7:	89 44 24 14          	mov    %eax,0x14(%esp)
 8178ebb:	c7 44 24 10 52 62 b8 	movl   $0x8b86252,0x10(%esp)
 8178ec2:	08 
 8178ec3:	c7 44 24 0c 53 06 00 	movl   $0x653,0xc(%esp)
 8178eca:	00 
 8178ecb:	c7 44 24 08 00 6f b8 	movl   $0x8b86f00,0x8(%esp)
 8178ed2:	08 
 8178ed3:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8178eda:	08 
 8178edb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8178ee2:	e8 23 ad 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8178ee7:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8178eed:	85 c0                	test   %eax,%eax
 8178eef:	0f 84 a7 00 00 00    	je     8178f9c <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x926>
 8178ef5:	0f be 4d bf          	movsbl -0x41(%ebp),%ecx
 8178ef9:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8178eff:	0f b6 d0             	movzbl %al,%edx
 8178f02:	8b 45 08             	mov    0x8(%ebp),%eax
 8178f05:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8178f09:	8b 4d 94             	mov    -0x6c(%ebp),%ecx
 8178f0c:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8178f10:	8b 4d 90             	mov    -0x70(%ebp),%ecx
 8178f13:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8178f17:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 8178f1a:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8178f1e:	8b 4d 8c             	mov    -0x74(%ebp),%ecx
 8178f21:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8178f25:	89 54 24 10          	mov    %edx,0x10(%esp)
 8178f29:	8b 55 14             	mov    0x14(%ebp),%edx
 8178f2c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8178f30:	8b 55 10             	mov    0x10(%ebp),%edx
 8178f33:	89 54 24 08          	mov    %edx,0x8(%esp)
 8178f37:	8b 55 0c             	mov    0xc(%ebp),%edx
 8178f3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178f3e:	89 04 24             	mov    %eax,(%esp)
 8178f41:	e8 b0 a8 1a 00       	call   83237f6 <_ZN8WongWork9CCeraShop16_ProcessIPGErrorEP5CUserPNS_3IPG8SIPGDataES5_hijiic>
 8178f46:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8178f4d:	00 
 8178f4e:	c7 44 24 08 5b 06 00 	movl   $0x65b,0x8(%esp)
 8178f55:	00 
 8178f56:	c7 44 24 04 00 6f b8 	movl   $0x8b86f00,0x4(%esp)
 8178f5d:	08 
 8178f5e:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8178f64:	89 04 24             	mov    %eax,(%esp)
 8178f67:	e8 ac 67 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8178f6c:	c7 44 24 0c 5b 06 00 	movl   $0x65b,0xc(%esp)
 8178f73:	00 
 8178f74:	c7 44 24 08 00 6f b8 	movl   $0x8b86f00,0x8(%esp)
 8178f7b:	08 
 8178f7c:	c7 44 24 04 73 60 b8 	movl   $0x8b86073,0x4(%esp)
 8178f83:	08 
 8178f84:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 8178f8a:	89 04 24             	mov    %eax,(%esp)
 8178f8d:	e8 f6 67 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8178f92:	bb 00 00 00 00       	mov    $0x0,%ebx
 8178f97:	e9 3b 09 00 00       	jmp    81798d7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1261>
 8178f9c:	83 7d 8c 07          	cmpl   $0x7,-0x74(%ebp)
 8178fa0:	75 23                	jne    8178fc5 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x94f>
 8178fa2:	8b 5d 8c             	mov    -0x74(%ebp),%ebx
 8178fa5:	e8 24 3a fa ff       	call   811c9ce <_ZN4ARAD9SingletonI16HeroMissionEventE3GetEv>
 8178faa:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8178fae:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8178fb5:	00 
 8178fb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8178fb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178fbd:	89 04 24             	mov    %eax,(%esp)
 8178fc0:	e8 51 e2 fe ff       	call   8167216 <_ZN16HeroMissionEvent15setMissionValueEP5CUserN20HeroMissionCondition9MissionNo1TEj>
 8178fc5:	66 83 7d c6 01       	cmpw   $0x1,-0x3a(%ebp)
 8178fca:	75 7b                	jne    8179047 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x9d1>
 8178fcc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178fcf:	89 04 24             	mov    %eax,(%esp)
 8178fd2:	e8 b7 12 f6 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8178fd7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8178fde:	00 
 8178fdf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8178fe6:	00 
 8178fe7:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8178fea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8178fee:	89 04 24             	mov    %eax,(%esp)
 8178ff1:	e8 56 65 38 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8178ff6:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8178ffd:	00 
 8178ffe:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8179001:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179005:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179008:	89 04 24             	mov    %eax,(%esp)
 817900b:	e8 b6 6c 4d 00       	call   864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>
 8179010:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8179013:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179017:	8b 45 0c             	mov    0xc(%ebp),%eax
 817901a:	89 04 24             	mov    %eax,(%esp)
 817901d:	e8 f4 9a 51 00       	call   8692b16 <_ZN5CUser12UseCeraPointEj>
 8179022:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179025:	8d 90 00 97 07 00    	lea    0x79700(%eax),%edx
 817902b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 817902e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179032:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8179039:	00 
 817903a:	89 14 24             	mov    %edx,(%esp)
 817903d:	e8 fa c8 50 00       	call   868593c <_ZN15cUserHistoryLog9CeraPointE23ENUM_CERAPOINT_LOG_TYPEj>
 8179042:	e9 97 00 00 00       	jmp    81790de <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xa68>
 8179047:	66 83 7d c6 00       	cmpw   $0x0,-0x3a(%ebp)
 817904c:	0f 85 8c 00 00 00    	jne    81790de <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xa68>
 8179052:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8179057:	8b 00                	mov    (%eax),%eax
 8179059:	83 c0 28             	add    $0x28,%eax
 817905c:	8b 08                	mov    (%eax),%ecx
 817905e:	a1 34 f7 41 09       	mov    0x941f734,%eax
 8179063:	8b 55 14             	mov    0x14(%ebp),%edx
 8179066:	89 54 24 08          	mov    %edx,0x8(%esp)
 817906a:	8b 55 10             	mov    0x10(%ebp),%edx
 817906d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8179071:	89 04 24             	mov    %eax,(%esp)
 8179074:	ff d1                	call   *%ecx
 8179076:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179079:	89 04 24             	mov    %eax,(%esp)
 817907c:	e8 0d 12 f6 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8179081:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8179088:	00 
 8179089:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8179090:	00 
 8179091:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8179094:	89 54 24 04          	mov    %edx,0x4(%esp)
 8179098:	89 04 24             	mov    %eax,(%esp)
 817909b:	e8 ac 64 38 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 81790a0:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81790a7:	00 
 81790a8:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81790ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81790af:	8b 45 0c             	mov    0xc(%ebp),%eax
 81790b2:	89 04 24             	mov    %eax,(%esp)
 81790b5:	e8 0c 6c 4d 00       	call   864fcc6 <_ZN5CUser11UseWinPointEi12eWPSubReason>
 81790ba:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81790bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81790c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81790c4:	89 04 24             	mov    %eax,(%esp)
 81790c7:	e8 fa 10 00 00       	call   817a1c6 <_ZN5CUser7UseCeraEj>
 81790cc:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81790cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81790d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81790d6:	89 04 24             	mov    %eax,(%esp)
 81790d9:	e8 3c 11 00 00       	call   817a21a <_ZN5CUser11addUsedCeraEj>
 81790de:	8b 55 ac             	mov    -0x54(%ebp),%edx
 81790e1:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81790e4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81790e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 81790ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 81790ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81790f3:	c7 04 24 fc 47 40 09 	movl   $0x94047fc,(%esp)
 81790fa:	e8 9d 4b 02 00       	call   819dc9c <_ZN19Arad_MileageProcess11GiveMileageEP5CUserii>
 81790ff:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8179102:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179106:	8b 45 08             	mov    0x8(%ebp),%eax
 8179109:	89 04 24             	mov    %eax,(%esp)
 817910c:	e8 c7 0d 00 00       	call   8179ed8 <_ZN18ItemVendingMachine22CheckPurcahseBonusItemEm>
 8179111:	84 c0                	test   %al,%al
 8179113:	74 32                	je     8179147 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xad1>
 8179115:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179118:	89 04 24             	mov    %eax,(%esp)
 817911b:	e8 76 fb f4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8179120:	89 c3                	mov    %eax,%ebx
 8179122:	8b 75 a0             	mov    -0x60(%ebp),%esi
 8179125:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179128:	89 04 24             	mov    %eax,(%esp)
 817912b:	e8 3e 12 f6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8179130:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8179134:	89 74 24 08          	mov    %esi,0x8(%esp)
 8179138:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 817913b:	89 54 24 04          	mov    %edx,0x4(%esp)
 817913f:	89 04 24             	mov    %eax,(%esp)
 8179142:	e8 d5 21 2d 00       	call   844b31c <_ZN30DB_UpdateCeraShopPurchaseCount11makeRequestEjmii>
 8179147:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817914e:	00 
 817914f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8179152:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179156:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179159:	89 04 24             	mov    %eax,(%esp)
 817915c:	e8 b3 7b f6 ff       	call   80e0d14 <_ZN19CerashopAddRestrict7Manager25UpdateBuyableRestrictItemEP5CUserjj>
 8179161:	83 7d 98 00          	cmpl   $0x0,-0x68(%ebp)
 8179165:	74 4c                	je     81791b3 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xb3d>
 8179167:	8b 45 98             	mov    -0x68(%ebp),%eax
 817916a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817916e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179171:	89 04 24             	mov    %eax,(%esp)
 8179174:	e8 ff 46 4d 00       	call   864d878 <_ZN5CUser17IsRestrictedGoodsEi>
 8179179:	83 f0 01             	xor    $0x1,%eax
 817917c:	84 c0                	test   %al,%al
 817917e:	74 33                	je     81791b3 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xb3d>
 8179180:	8b 45 98             	mov    -0x68(%ebp),%eax
 8179183:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179187:	8b 45 0c             	mov    0xc(%ebp),%eax
 817918a:	89 04 24             	mov    %eax,(%esp)
 817918d:	e8 bc 46 4d 00       	call   864d84e <_ZN5CUser18SetRestrictedGoodsEi>
 8179192:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8179199:	00 
 817919a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 817919d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81791a1:	8b 45 98             	mov    -0x68(%ebp),%eax
 81791a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81791a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81791ab:	89 04 24             	mov    %eax,(%esp)
 81791ae:	e8 7d c8 1a 00       	call   8325a30 <_ZN8WongWork9CCeraShop15SaveFeaturedIdxEP5CUseriii>
 81791b3:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 81791b9:	89 04 24             	mov    %eax,(%esp)
 81791bc:	e8 8b 4b 41 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81791c1:	c7 44 24 08 43 00 00 	movl   $0x43,0x8(%esp)
 81791c8:	00 
 81791c9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81791d0:	00 
 81791d1:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 81791d7:	89 04 24             	mov    %eax,(%esp)
 81791da:	e8 1d 27 f5 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81791df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81791e6:	00 
 81791e7:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 81791ed:	89 04 24             	mov    %eax,(%esp)
 81791f0:	e8 2b 27 f5 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81791f5:	0f be 45 bf          	movsbl -0x41(%ebp),%eax
 81791f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81791fd:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179203:	89 04 24             	mov    %eax,(%esp)
 8179206:	e8 15 27 f5 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 817920b:	8b 45 8c             	mov    -0x74(%ebp),%eax
 817920e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179212:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179218:	89 04 24             	mov    %eax,(%esp)
 817921b:	e8 1c 27 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8179220:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8179223:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179227:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817922d:	89 04 24             	mov    %eax,(%esp)
 8179230:	e8 07 27 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8179235:	8b 45 90             	mov    -0x70(%ebp),%eax
 8179238:	89 44 24 04          	mov    %eax,0x4(%esp)
 817923c:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179242:	89 04 24             	mov    %eax,(%esp)
 8179245:	e8 f2 26 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 817924a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 817924d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179251:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179257:	89 04 24             	mov    %eax,(%esp)
 817925a:	e8 dd 26 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 817925f:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8179265:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179269:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817926f:	89 04 24             	mov    %eax,(%esp)
 8179272:	e8 c5 26 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8179277:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 817927d:	89 04 24             	mov    %eax,(%esp)
 8179280:	e8 d9 13 00 00       	call   817a65e <_ZNKSt6vectorI10Inven_ItemSaIS0_EE4sizeEv>
 8179285:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179289:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817928f:	89 04 24             	mov    %eax,(%esp)
 8179292:	e8 0d 0c f6 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8179297:	8d 45 80             	lea    -0x80(%ebp),%eax
 817929a:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 81792a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81792a4:	89 04 24             	mov    %eax,(%esp)
 81792a7:	e8 58 1a fd ff       	call   814ad04 <_ZNSt6vectorI10Inven_ItemSaIS0_EE5beginEv>
 81792ac:	83 ec 04             	sub    $0x4,%esp
 81792af:	8d 45 80             	lea    -0x80(%ebp),%eax
 81792b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81792b6:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 81792bc:	89 04 24             	mov    %eax,(%esp)
 81792bf:	e8 28 98 fd ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 81792c4:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81792c7:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 81792cd:	89 54 24 04          	mov    %edx,0x4(%esp)
 81792d1:	89 04 24             	mov    %eax,(%esp)
 81792d4:	e8 11 96 fd ff       	call   81528ea <_ZNSt6vectorI10Inven_ItemSaIS0_EE3endEv>
 81792d9:	83 ec 04             	sub    $0x4,%esp
 81792dc:	8d 45 84             	lea    -0x7c(%ebp),%eax
 81792df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81792e3:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 81792e9:	89 04 24             	mov    %eax,(%esp)
 81792ec:	e8 fb 97 fd ff       	call   8152aec <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEC1IPS1_EERKNS0_IT_NS_11__enable_ifIXsrSt10__are_sameISA_S9_E7__valueES6_E6__typeEEE>
 81792f1:	eb 54                	jmp    8179347 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xcd1>
 81792f3:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 81792f9:	89 04 24             	mov    %eax,(%esp)
 81792fc:	e8 7b 13 00 00       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 8179301:	8b 40 02             	mov    0x2(%eax),%eax
 8179304:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179308:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817930e:	89 04 24             	mov    %eax,(%esp)
 8179311:	e8 26 26 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8179316:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 817931c:	89 04 24             	mov    %eax,(%esp)
 817931f:	e8 58 13 00 00       	call   817a67c <_ZNK9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEptEv>
 8179324:	8b 40 07             	mov    0x7(%eax),%eax
 8179327:	89 44 24 04          	mov    %eax,0x4(%esp)
 817932b:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179331:	89 04 24             	mov    %eax,(%esp)
 8179334:	e8 03 26 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8179339:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 817933f:	89 04 24             	mov    %eax,(%esp)
 8179342:	e8 eb 97 fd ff       	call   8152b32 <_ZN9__gnu_cxx17__normal_iteratorIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEppEv>
 8179347:	8d 85 f8 fe ff ff    	lea    -0x108(%ebp),%eax
 817934d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179351:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 8179357:	89 04 24             	mov    %eax,(%esp)
 817935a:	e8 a7 97 fd ff       	call   8152b06 <_ZN9__gnu_cxxneIPK10Inven_ItemSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 817935f:	84 c0                	test   %al,%al
 8179361:	75 90                	jne    81792f3 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xc7d>
 8179363:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817936a:	00 
 817936b:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179371:	89 04 24             	mov    %eax,(%esp)
 8179374:	e8 2b 0b f6 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8179379:	80 7d bf 01          	cmpb   $0x1,-0x41(%ebp)
 817937d:	75 19                	jne    8179398 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xd22>
 817937f:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 8179383:	74 13                	je     8179398 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xd22>
 8179385:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 817938c:	00 
 817938d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8179390:	89 04 24             	mov    %eax,(%esp)
 8179393:	e8 54 de 2a 00       	call   84271ec <_ZN18DB_UpdateGiftCount11makeRequestEji>
 8179398:	c7 85 04 ff ff ff ff 	movl   $0xffffffff,-0xfc(%ebp)
 817939f:	ff ff ff 
 81793a2:	c7 85 00 ff ff ff 00 	movl   $0x0,-0x100(%ebp)
 81793a9:	00 00 00 
 81793ac:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81793af:	3b 45 90             	cmp    -0x70(%ebp),%eax
 81793b2:	0f 85 97 02 00 00    	jne    817964f <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfd9>
 81793b8:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 81793be:	89 04 24             	mov    %eax,(%esp)
 81793c1:	e8 86 49 41 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81793c6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81793cd:	00 
 81793ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81793d1:	89 04 24             	mov    %eax,(%esp)
 81793d4:	e8 51 74 4d 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 81793d9:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 81793df:	89 04 24             	mov    %eax,(%esp)
 81793e2:	e8 ff 24 f5 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81793e7:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81793ee:	00 
 81793ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81793f6:	00 
 81793f7:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 81793fd:	89 04 24             	mov    %eax,(%esp)
 8179400:	e8 f7 24 f5 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8179405:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817940c:	00 
 817940d:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8179413:	89 04 24             	mov    %eax,(%esp)
 8179416:	e8 05 25 f5 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 817941b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8179422:	00 
 8179423:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8179429:	89 04 24             	mov    %eax,(%esp)
 817942c:	e8 73 0a f6 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8179431:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179434:	89 04 24             	mov    %eax,(%esp)
 8179437:	e8 42 0e f6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 817943c:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 8179442:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8179446:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817944d:	00 
 817944e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8179455:	00 
 8179456:	89 04 24             	mov    %eax,(%esp)
 8179459:	e8 5e 32 38 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 817945e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179461:	89 04 24             	mov    %eax,(%esp)
 8179464:	e8 15 0e f6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8179469:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 817946f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8179473:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 817947a:	00 
 817947b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8179482:	00 
 8179483:	89 04 24             	mov    %eax,(%esp)
 8179486:	e8 31 32 38 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 817948b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8179492:	00 
 8179493:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8179499:	89 04 24             	mov    %eax,(%esp)
 817949c:	e8 b7 24 f5 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81794a1:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 81794a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81794ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81794ae:	89 04 24             	mov    %eax,(%esp)
 81794b1:	e8 04 f1 4c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81794b6:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81794bb:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81794c2:	00 
 81794c3:	89 04 24             	mov    %eax,(%esp)
 81794c6:	e8 cd c4 f9 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81794cb:	8b 10                	mov    (%eax),%edx
 81794cd:	83 c2 34             	add    $0x34,%edx
 81794d0:	8b 12                	mov    (%edx),%edx
 81794d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81794d9:	00 
 81794da:	89 04 24             	mov    %eax,(%esp)
 81794dd:	ff d2                	call   *%edx
 81794df:	84 c0                	test   %al,%al
 81794e1:	0f 84 5a 01 00 00    	je     8179641 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfcb>
 81794e7:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81794ec:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 81794f3:	00 
 81794f4:	89 04 24             	mov    %eax,(%esp)
 81794f7:	e8 9c c4 f9 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81794fc:	89 04 24             	mov    %eax,(%esp)
 81794ff:	e8 de 0d 00 00       	call   817a2e2 <_ZNK23CCeraShopBonusItemEvent12getBonusRateEv>
 8179504:	89 c3                	mov    %eax,%ebx
 8179506:	c7 04 24 e8 03 00 00 	movl   $0x3e8,(%esp)
 817950d:	e8 75 86 53 00       	call   86b1b87 <_Z12get_rand_inti>
 8179512:	39 c3                	cmp    %eax,%ebx
 8179514:	0f 9d c0             	setge  %al
 8179517:	84 c0                	test   %al,%al
 8179519:	0f 84 22 01 00 00    	je     8179641 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfcb>
 817951f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179522:	89 04 24             	mov    %eax,(%esp)
 8179525:	e8 0c 0d 00 00       	call   817a236 <_ZN5CUser11getUsedCeraEv>
 817952a:	89 c3                	mov    %eax,%ebx
 817952c:	e8 6a 2c f5 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8179531:	8b 40 0c             	mov    0xc(%eax),%eax
 8179534:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 817953a:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817953e:	8d 95 04 ff ff ff    	lea    -0xfc(%ebp),%edx
 8179544:	89 54 24 08          	mov    %edx,0x8(%esp)
 8179548:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 817954c:	89 04 24             	mov    %eax,(%esp)
 817954f:	e8 dc 93 39 00       	call   8512930 <_ZNK9CItemList20getCeraShopBonusItemEiRmRj>
 8179554:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 817955a:	83 f8 ff             	cmp    $0xffffffff,%eax
 817955d:	0f 84 de 00 00 00    	je     8179641 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfcb>
 8179563:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8179569:	89 04 24             	mov    %eax,(%esp)
 817956c:	e8 21 17 fd ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 8179571:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 8179577:	89 04 24             	mov    %eax,(%esp)
 817957a:	e8 57 b4 fb ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 817957f:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 8179585:	0f b7 c8             	movzwl %ax,%ecx
 8179588:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 817958e:	8b 45 08             	mov    0x8(%ebp),%eax
 8179591:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8179598:	00 
 8179599:	8d 9d 2c ff ff ff    	lea    -0xd4(%ebp),%ebx
 817959f:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81795a3:	8d 9d e0 fe ff ff    	lea    -0x120(%ebp),%ebx
 81795a9:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 81795ad:	c7 44 24 14 ff 00 00 	movl   $0xff,0x14(%esp)
 81795b4:	00 
 81795b5:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81795bc:	00 
 81795bd:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81795c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 81795c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 81795c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 81795cc:	89 04 24             	mov    %eax,(%esp)
 81795cf:	e8 ce d1 1a 00       	call   83267a2 <_ZN8WongWork9CCeraShop22_processAdditionalItemEP5CUsermthhRSt6vectorI10Inven_ItemSaIS4_EERNS0_21stCeraShopItemParam_tEh>
 81795d4:	eb 18                	jmp    81795ee <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xf78>
 81795d6:	89 d3                	mov    %edx,%ebx
 81795d8:	89 c6                	mov    %eax,%esi
 81795da:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 81795e0:	89 04 24             	mov    %eax,(%esp)
 81795e3:	e8 02 b4 fb ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81795e8:	89 f0                	mov    %esi,%eax
 81795ea:	89 da                	mov    %ebx,%edx
 81795ec:	eb 10                	jmp    81795fe <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xf88>
 81795ee:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 81795f4:	89 04 24             	mov    %eax,(%esp)
 81795f7:	e8 ee b3 fb ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 81795fc:	eb 18                	jmp    8179616 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfa0>
 81795fe:	89 d3                	mov    %edx,%ebx
 8179600:	89 c6                	mov    %eax,%esi
 8179602:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 8179608:	89 04 24             	mov    %eax,(%esp)
 817960b:	e8 96 16 fd ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8179610:	89 f0                	mov    %esi,%eax
 8179612:	89 da                	mov    %ebx,%edx
 8179614:	eb 10                	jmp    8179626 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfb0>
 8179616:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 817961c:	89 04 24             	mov    %eax,(%esp)
 817961f:	e8 82 16 fd ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8179624:	eb 1b                	jmp    8179641 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0xfcb>
 8179626:	89 d3                	mov    %edx,%ebx
 8179628:	89 c6                	mov    %eax,%esi
 817962a:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8179630:	89 04 24             	mov    %eax,(%esp)
 8179633:	e8 48 48 41 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8179638:	89 f0                	mov    %esi,%eax
 817963a:	89 da                	mov    %ebx,%edx
 817963c:	e9 51 02 00 00       	jmp    8179892 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x121c>
 8179641:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8179647:	89 04 24             	mov    %eax,(%esp)
 817964a:	e8 31 48 41 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 817964f:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 8179655:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179659:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817965f:	89 04 24             	mov    %eax,(%esp)
 8179662:	e8 d5 22 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8179667:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 817966d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179671:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 8179677:	89 04 24             	mov    %eax,(%esp)
 817967a:	e8 bd 22 f5 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 817967f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8179686:	00 
 8179687:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817968d:	89 04 24             	mov    %eax,(%esp)
 8179690:	e8 c3 22 f5 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8179695:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817969b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817969f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81796a2:	89 04 24             	mov    %eax,(%esp)
 81796a5:	e8 10 ef 4c 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81796aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81796ad:	89 04 24             	mov    %eax,(%esp)
 81796b0:	e8 b9 0c f6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81796b5:	8b 15 6c f7 41 09    	mov    0x941f76c,%edx
 81796bb:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 81796be:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81796c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81796c6:	89 14 24             	mov    %edx,(%esp)
 81796c9:	e8 90 37 1a 00       	call   831ce5e <_ZN18break_away_prevent23CBreakAwayPreventSystem14updateUsedCeraEjj>
 81796ce:	66 83 7d c6 01       	cmpw   $0x1,-0x3a(%ebp)
 81796d3:	0f 85 de 00 00 00    	jne    81797b7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1141>
 81796d9:	0f be 5d bf          	movsbl -0x41(%ebp),%ebx
 81796dd:	8b 45 14             	mov    0x14(%ebp),%eax
 81796e0:	8b 90 e0 01 00 00    	mov    0x1e0(%eax),%edx
 81796e6:	8b 88 e4 01 00 00    	mov    0x1e4(%eax),%ecx
 81796ec:	0f b7 45 a8          	movzwl -0x58(%ebp),%eax
 81796f0:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 81796f6:	8b 45 14             	mov    0x14(%ebp),%eax
 81796f9:	05 77 01 00 00       	add    $0x177,%eax
 81796fe:	89 85 bc fe ff ff    	mov    %eax,-0x144(%ebp)
 8179704:	8b 45 14             	mov    0x14(%ebp),%eax
 8179707:	83 c0 7d             	add    $0x7d,%eax
 817970a:	89 c7                	mov    %eax,%edi
 817970c:	8b 75 ac             	mov    -0x54(%ebp),%esi
 817970f:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8179712:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 8179716:	89 54 24 20          	mov    %edx,0x20(%esp)
 817971a:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 817971e:	8b 95 b8 fe ff ff    	mov    -0x148(%ebp),%edx
 8179724:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8179728:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 817972e:	89 54 24 18          	mov    %edx,0x18(%esp)
 8179732:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8179736:	89 74 24 10          	mov    %esi,0x10(%esp)
 817973a:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 8179741:	ff 
 8179742:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179746:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179749:	89 44 24 04          	mov    %eax,0x4(%esp)
 817974d:	8b 45 08             	mov    0x8(%ebp),%eax
 8179750:	89 04 24             	mov    %eax,(%esp)
 8179753:	e8 c6 01 00 00       	call   817991e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc>
 8179758:	8b 45 14             	mov    0x14(%ebp),%eax
 817975b:	8b 90 e4 01 00 00    	mov    0x1e4(%eax),%edx
 8179761:	8b 80 e0 01 00 00    	mov    0x1e0(%eax),%eax
 8179767:	0f be 75 bf          	movsbl -0x41(%ebp),%esi
 817976b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 817976e:	83 c1 7d             	add    $0x7d,%ecx
 8179771:	89 cb                	mov    %ecx,%ebx
 8179773:	0f b7 4d a8          	movzwl -0x58(%ebp),%ecx
 8179777:	8b 7d 0c             	mov    0xc(%ebp),%edi
 817977a:	81 c7 00 97 07 00    	add    $0x79700,%edi
 8179780:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8179784:	89 54 24 20          	mov    %edx,0x20(%esp)
 8179788:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
 817978f:	00 
 8179790:	89 74 24 14          	mov    %esi,0x14(%esp)
 8179794:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8179798:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 817979c:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 817979f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81797a3:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81797a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81797aa:	89 3c 24             	mov    %edi,(%esp)
 81797ad:	e8 ee d6 50 00       	call   8686ea0 <_ZN15cUserHistoryLog15BuyCashShopItemEjmjPKccN19CeraShopPaymentType1TEy>
 81797b2:	e9 f3 00 00 00       	jmp    81798aa <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1234>
 81797b7:	0f be 5d bf          	movsbl -0x41(%ebp),%ebx
 81797bb:	8b 45 14             	mov    0x14(%ebp),%eax
 81797be:	8b 90 e0 01 00 00    	mov    0x1e0(%eax),%edx
 81797c4:	8b 88 e4 01 00 00    	mov    0x1e4(%eax),%ecx
 81797ca:	0f b7 45 a8          	movzwl -0x58(%ebp),%eax
 81797ce:	89 85 c0 fe ff ff    	mov    %eax,-0x140(%ebp)
 81797d4:	8b 45 10             	mov    0x10(%ebp),%eax
 81797d7:	05 77 01 00 00       	add    $0x177,%eax
 81797dc:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 81797e2:	8b 45 10             	mov    0x10(%ebp),%eax
 81797e5:	83 c0 7d             	add    $0x7d,%eax
 81797e8:	89 c7                	mov    %eax,%edi
 81797ea:	8b 75 ac             	mov    -0x54(%ebp),%esi
 81797ed:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81797f0:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 81797f4:	89 54 24 20          	mov    %edx,0x20(%esp)
 81797f8:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 81797fc:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 8179802:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 8179806:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 817980c:	89 54 24 18          	mov    %edx,0x18(%esp)
 8179810:	89 7c 24 14          	mov    %edi,0x14(%esp)
 8179814:	89 74 24 10          	mov    %esi,0x10(%esp)
 8179818:	c7 44 24 0c ff ff ff 	movl   $0xffffffff,0xc(%esp)
 817981f:	ff 
 8179820:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179824:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179827:	89 44 24 04          	mov    %eax,0x4(%esp)
 817982b:	8b 45 08             	mov    0x8(%ebp),%eax
 817982e:	89 04 24             	mov    %eax,(%esp)
 8179831:	e8 e8 00 00 00       	call   817991e <_ZN18ItemVendingMachine13BillingRecordEP5CUseriiiPKcS3_iyc>
 8179836:	8b 45 14             	mov    0x14(%ebp),%eax
 8179839:	8b 90 e4 01 00 00    	mov    0x1e4(%eax),%edx
 817983f:	8b 80 e0 01 00 00    	mov    0x1e0(%eax),%eax
 8179845:	0f be 75 bf          	movsbl -0x41(%ebp),%esi
 8179849:	8b 4d 10             	mov    0x10(%ebp),%ecx
 817984c:	83 c1 7d             	add    $0x7d,%ecx
 817984f:	89 cb                	mov    %ecx,%ebx
 8179851:	0f b7 4d a8          	movzwl -0x58(%ebp),%ecx
 8179855:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8179858:	81 c7 00 97 07 00    	add    $0x79700,%edi
 817985e:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 8179862:	89 54 24 20          	mov    %edx,0x20(%esp)
 8179866:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 817986d:	00 
 817986e:	89 74 24 14          	mov    %esi,0x14(%esp)
 8179872:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8179876:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 817987a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 817987d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179881:	8b 45 a0             	mov    -0x60(%ebp),%eax
 8179884:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179888:	89 3c 24             	mov    %edi,(%esp)
 817988b:	e8 10 d6 50 00       	call   8686ea0 <_ZN15cUserHistoryLog15BuyCashShopItemEjmjPKccN19CeraShopPaymentType1TEy>
 8179890:	eb 18                	jmp    81798aa <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1234>
 8179892:	89 d3                	mov    %edx,%ebx
 8179894:	89 c6                	mov    %eax,%esi
 8179896:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 817989c:	89 04 24             	mov    %eax,(%esp)
 817989f:	e8 dc 45 41 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81798a4:	89 f0                	mov    %esi,%eax
 81798a6:	89 da                	mov    %ebx,%edx
 81798a8:	eb 15                	jmp    81798bf <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1249>
 81798aa:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 81798b0:	89 04 24             	mov    %eax,(%esp)
 81798b3:	e8 c8 45 41 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81798b8:	bb 01 00 00 00       	mov    $0x1,%ebx
 81798bd:	eb 18                	jmp    81798d7 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x1261>
 81798bf:	89 d3                	mov    %edx,%ebx
 81798c1:	89 c6                	mov    %eax,%esi
 81798c3:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 81798c9:	89 04 24             	mov    %eax,(%esp)
 81798cc:	e8 2b 0a 00 00       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 81798d1:	89 f0                	mov    %esi,%eax
 81798d3:	89 da                	mov    %ebx,%edx
 81798d5:	eb 29                	jmp    8179900 <_ZN18ItemVendingMachine23ProcessIPG_ResultOutputEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x128a>
 81798d7:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 81798dd:	89 04 24             	mov    %eax,(%esp)
 81798e0:	e8 17 0a 00 00       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 81798e5:	85 db                	test   %ebx,%ebx
 81798e7:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81798ed:	89 04 24             	mov    %eax,(%esp)
 81798f0:	e8 b1 13 fd ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 81798f5:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81798f8:	83 c4 00             	add    $0x0,%esp
 81798fb:	5b                   	pop    %ebx
 81798fc:	5e                   	pop    %esi
 81798fd:	5f                   	pop    %edi
 81798fe:	5d                   	pop    %ebp
 81798ff:	c3                   	ret
 8179900:	89 d3                	mov    %edx,%ebx
 8179902:	89 c6                	mov    %eax,%esi
 8179904:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 817990a:	89 04 24             	mov    %eax,(%esp)
 817990d:	e8 94 13 fd ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 8179912:	89 f0                	mov    %esi,%eax
 8179914:	89 da                	mov    %ebx,%edx
 8179916:	89 04 24             	mov    %eax,(%esp)
 8179919:	e8 32 9e 96 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// ItemVendingMachine::ProcessIPG_ResultOutput @ 0x8178676

/* ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void __thiscall
ItemVendingMachine::ProcessIPG_ResultOutput
          (ItemVendingMachine *this,CUser *param_1,SIPGData *param_2,SIPGData *param_3,
          Stream *param_4)

{
  ulong uVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CDataManager *pCVar7;
  undefined4 *puVar8;
  HeroMissionEvent *pHVar9;
  CInventory *pCVar10;
  uint uVar11;
  int *piVar12;
  CCeraShopBonusItemEvent *this_00;
  uint uVar13;
  undefined4 uVar14;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_130 [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_124 [12];
  PacketGuard local_118 [12];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_10c [4];
  __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
  local_108 [4];
  uint local_104;
  ulong local_100 [3];
  bool local_f1;
  PacketGuard local_f0 [12];
  int local_e4;
  int local_e0;
  int local_dc;
  stCeraShopItemParam_t local_d8 [12];
  vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>> avStack_cc [12];
  vector<Inven_Item,std::allocator<Inven_Item>> local_c0 [12];
  pair<int,int> local_b4 [8];
  ulong local_ac [2];
  cMyTrace local_a4 [16];
  cMyTrace local_94 [16];
  __normal_iterator local_84 [4];
  __normal_iterator local_80 [4];
  stCeraShopIPGRequest_t *local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint local_64;
  ulong local_60;
  ushort local_5c;
  stCeraShopIPGRequest_t local_5a;
  stCeraShopIPGRequest_t local_59;
  char *local_58;
  undefined4 local_54;
  undefined4 local_50;
  long local_4c;
  stCeraShopIPGRequest_t local_45;
  int local_44;
  short local_3e;
  uint local_3c;
  undefined4 local_38;
  int local_34;
  int local_30;
  int local_2c;
  CItem *local_28;
  CItemLimitEdition *local_24;
  int local_20;
  
  if ((ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)::
       IPGProcess == '\0') &&
     (iVar4 = __cxa_guard_acquire(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                                   ::IPGProcess), iVar4 != 0)) {
    Arad_IPGProcess::Arad_IPGProcess
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,this);
    __cxa_guard_release(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                         ::IPGProcess);
    __cxa_atexit(Arad_IPGProcess::~Arad_IPGProcess,
                 &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                  ::IPGProcess,&__dso_handle);
  }
  if ((ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)::
       mMileageProcess == '\0') &&
     (iVar4 = __cxa_guard_acquire(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                                   ::mMileageProcess), iVar4 != 0)) {
    Arad_MileageProcess::Arad_MileageProcess
              ((Arad_MileageProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::mMileageProcess,this);
    __cxa_guard_release(&ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                         ::mMileageProcess);
    __cxa_atexit(Arad_MileageProcess::~Arad_MileageProcess,
                 &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                  ::mMileageProcess,&__dso_handle);
  }
  local_7c = Stream::GetOutBuffer<stCeraShopIPGRequest_t>(param_4);
  local_78 = *(int *)(local_7c + 4);
  local_74 = *(int *)(local_7c + 0x24);
  local_70 = *(int *)(local_7c + 0x20);
  local_6c = *(int *)(local_7c + 0x28);
  local_68 = *(int *)(local_7c + 0x1c);
  local_64 = *(uint *)local_7c;
  local_60 = *(ulong *)(local_7c + 8);
  local_5c = *(ushort *)(local_7c + 0xc);
  local_5a = local_7c[0x2c];
  local_59 = local_7c[0x2d];
  local_58 = *(char **)(local_7c + 0x10);
  local_54 = *(undefined4 *)(local_7c + 0x14);
  local_50 = *(undefined4 *)(local_7c + 0x18);
  local_4c = *(long *)(local_7c + 0x30);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_c0);
  local_45 = local_7c[0x34];
  local_44 = *(int *)(local_7c + 0x38);
  local_3e = *(short *)(local_7c + 0x3c);
  local_3c = *(uint *)(local_7c + 0x40);
                    /* try { // try from 08178809 to 0817880d has its CatchHandler @ 08179900 */
  WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_d8);
  for (local_34 = 0; local_34 < (int)(uint)(byte)local_7c[0x44]; local_34 = local_34 + 1) {
                    /* try { // try from 08178846 to 081791c0 has its CatchHandler @ 081798bf */
    std::make_pair<unsigned_long&,unsigned_char&>
              (local_ac,(uchar *)(local_7c + (local_34 + 8) * 8 + 8));
    std::pair<int,int>::pair<unsigned_long,unsigned_char>(local_b4,(pair *)local_ac);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_d8,local_b4);
  }
  for (local_30 = 0; local_30 < (int)(uint)(byte)local_7c[0x160]; local_30 = local_30 + 1) {
    std::vector<tagPackageItemSelection,std::allocator<tagPackageItemSelection>>::push_back
              (avStack_cc,(tagPackageItemSelection *)(local_7c + (local_30 + 0x2c) * 8 + 4));
  }
  local_dc = 0;
  Stream::operator>>(param_4,&local_dc);
  local_e0 = atoi((char *)(param_3 + 0x173));
  if (((local_e0 == 0) && (param_1 != (CUser *)0x0)) &&
     (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    if ((param_1 == (CUser *)0x0) ||
       (iVar4 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar4 == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    iVar4 = local_e0;
    if (bVar3) {
      iVar5 = atoi((char *)(param_3 + 0x69));
      iVar6 = atoi((char *)(param_3 + 0x28));
      cMyTrace::cMyTrace(local_a4,
                         "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                         ,0x59d,5);
      cMyTrace::operator()
                (local_a4,
                 "There\'s abnormal transaction that the client doesn\'t exist, client would be %s(m_id: %d) and the Goodis is %d, ret_code = %d ret_msg = %s"
                 ,param_3 + 0x3c,iVar6,iVar5,iVar4,param_3 + 0x177);
    }
    WongWork::CCeraShop::_ProcessIPGError
              ((CCeraShop *)this,param_1,param_2,param_3,'\x19',local_78,local_64,local_74,local_70,
               (char)local_45);
    goto LAB_081798d7;
  }
  local_e0 = 0;
  local_38 = 0xffffffff;
  local_e4 = -1;
  switch(local_78) {
  case 0:
    Arad_IPGProcess::CashShopModeAvatar
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_60,local_64,local_68,(char)local_5a,(char)local_59,
               (char *)(param_2 + 0x7d),&local_e0,local_3c,local_44,(char)local_45);
    break;
  case 1:
    Arad_IPGProcess::CashShopModeCoin
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_5c,local_3c,local_44,(char)local_45);
    break;
  case 2:
  case 7:
  case 9:
    Arad_IPGProcess::CashShopModeItem
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_60,local_5c,local_6c,local_4c,(vector *)local_c0,local_d8
               ,&local_e0,local_3c,local_44,(char)local_45);
    break;
  case 3:
    Arad_IPGProcess::CashShopModeCreature
              ((Arad_IPGProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::IPGProcess,param_1,local_60,local_5c,&local_e4,&local_e0,local_3c,local_44,
               (char)local_45);
    break;
  case 10:
    WongWork::CCeraShop::_processAdditionalItem
              ((CCeraShop *)this,param_1,local_60,local_5c,(uchar)local_5a,(uchar)local_59,
               (vector *)local_c0,local_d8,'\0');
    uVar1 = local_60;
    local_78 = -1;
    pCVar7 = (CDataManager *)G_CDataManager();
    local_28 = (CItem *)CDataManager::find_item(pCVar7,uVar1);
    if ((local_28 == (CItem *)0x0) ||
       (cVar2 = CItem::isCerashopPackageItem(local_28), cVar2 == '\0')) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_78 = 7;
    }
    if (local_78 != 7) {
      std::vector<Inven_Item,std::allocator<Inven_Item>>::clear(local_c0);
    }
    local_24 = (CItemLimitEdition *)0x0;
    pCVar7 = (CDataManager *)G_CDataManager();
    uVar11 = CDataManager::getItemLimitEditionMgr(pCVar7);
    uVar13 = local_64;
    local_24 = (CItemLimitEdition *)CItemLimitEditionMgr::getItemInfo(uVar11);
    if (local_24 == (CItemLimitEdition *)0x0) {
      puVar8 = (undefined4 *)__cxa_allocate_exception(4,uVar13);
      *puVar8 = 0x11;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(puVar8,&ENUM_ERROR::typeinfo,0);
    }
    local_f1 = false;
    local_100[2] = 0;
    local_100[1] = 0;
    local_20 = CItemLimitEdition::getFeaturedIdx(local_24);
    if (local_20 == 0) {
      iVar4 = CItemLimitEdition::getRelateditem(local_24);
      cVar2 = WongWork::CCeraShop::IsSpecialItem
                        ((CCeraShop *)this,iVar4,(int *)(local_100 + 2),(int *)(local_100 + 1),
                         &local_f1);
      if (cVar2 == '\0') goto LAB_08178e4d;
      bVar3 = true;
    }
    else {
LAB_08178e4d:
      bVar3 = false;
    }
    if (bVar3) {
      iVar4 = CItemLimitEdition::getRelateditem(local_24);
      iVar5 = G_CDataManager();
      local_20 = CItemList::GetRestrictCode(*(CItemList **)(iVar5 + 0xc),iVar4);
    }
    if (local_20 != 0) {
      iVar4 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
      iVar5 = CItemLimitEdition::getFeaturedIdx(local_24);
      WongWork::CCeraShop::SaveFeaturedIdx(param_1,iVar5,iVar4,0);
    }
  default:
    LogManager::logFormat
              (1,"localjapan/AppendVendingMachine.cpp",
               "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
               ,0x653,"Invalid Group Index [%d]",local_78);
    break;
  case 0xb:
    local_2c = 0;
    local_2c = Arad_MileageProcess::BuyMileageItem
                         ((Arad_MileageProcess *)
                          &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                           ::mMileageProcess,param_1,local_64,local_60,local_5c,local_6c,local_4c,
                          local_68,(char)local_5a,(char)local_59,local_dc,local_70,local_74,
                          (char *)(param_2 + 0x7d),local_d8);
    if (local_2c != 0) {
      Arad_MileageProcess::BuyFail
                ((Arad_MileageProcess *)
                 &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                  ::mMileageProcess,param_1,(short)local_2c,local_64,local_74,local_70);
    }
    goto LAB_081798d7;
  }
  if (local_e0 == 0) {
    if (local_78 == 7) {
      pHVar9 = (HeroMissionEvent *)ARAD::Singleton<HeroMissionEvent>::Get();
      HeroMissionEvent::setMissionValue(pHVar9,param_1,1,7);
    }
    if (local_3e == 1) {
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::use_money(pCVar10,local_50,0,1);
      CUser::UseWinPoint(param_1,local_54,2);
      CUser::UseCeraPoint(param_1,(uint)local_58);
      cUserHistoryLog::CeraPoint((cUserHistoryLog *)(param_1 + 0x79700),3,local_58);
    }
    else if (local_3e == 0) {
      (**(code **)(*GlobalData::s_pIPGHelper + 0x28))(GlobalData::s_pIPGHelper,param_2,param_3);
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::use_money(pCVar10,local_50,0,1);
      CUser::UseWinPoint(param_1,local_54,2);
      CUser::UseCera(param_1,(uint)local_58);
      CUser::addUsedCera(param_1,(uint)local_58);
    }
    Arad_MileageProcess::GiveMileage
              ((Arad_MileageProcess *)
               &ProcessIPG_ResultOutput(CUser*,WongWork::IPG::SIPGData*,WongWork::IPG::SIPGData*,Stream*)
                ::mMileageProcess,param_1,local_64,(int)local_58);
    cVar2 = CheckPurcahseBonusItem((ulong)this);
    if (cVar2 != '\0') {
      iVar4 = CUser::GetUID(param_1);
      uVar13 = local_64;
      uVar11 = CUser::get_acc_id(param_1);
      DB_UpdateCeraShopPurchaseCount::makeRequest(uVar11,local_60,uVar13,iVar4);
    }
    CerashopAddRestrict::Manager::UpdateBuyableRestrictItem(param_1,local_64,1);
    if ((local_6c != 0) && (cVar2 = CUser::IsRestrictedGoods(param_1,local_6c), cVar2 != '\x01')) {
      CUser::SetRestrictedGoods(param_1,local_6c);
      WongWork::CCeraShop::SaveFeaturedIdx(param_1,local_6c,local_4c,0);
    }
    PacketGuard::PacketGuard(local_f0);
                    /* try { // try from 081791da to 081793c5 has its CatchHandler @ 08179892 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_f0,1,0x43);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f0,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_f0,(int)(char)local_45);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_78);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_64);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_74);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_70);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_e4);
    iVar4 = std::vector<Inven_Item,std::allocator<Inven_Item>>::size(local_c0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f0,iVar4);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::begin();
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    __normal_iterator<Inven_Item*>(local_108,local_84);
    std::vector<Inven_Item,std::allocator<Inven_Item>>::end();
    __gnu_cxx::
    __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
    __normal_iterator<Inven_Item*>(local_10c,local_80);
    while (bVar3 = __gnu_cxx::operator!=(local_108,local_10c), bVar3) {
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
              ::operator->(local_108);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,*(int *)(iVar4 + 2));
      iVar4 = __gnu_cxx::
              __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>
              ::operator->(local_108);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,*(int *)(iVar4 + 7));
      __gnu_cxx::
      __normal_iterator<Inven_Item_const*,std::vector<Inven_Item,std::allocator<Inven_Item>>>::
      operator++(local_108);
    }
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_f0,0);
    if ((local_45 == (stCeraShopIPGRequest_t)0x1) && (local_3c != 0)) {
      DB_UpdateGiftCount::makeRequest(local_3c,1);
    }
    local_100[0] = 0xffffffff;
    local_104 = 0;
    if (local_70 == local_74) {
      PacketGuard::PacketGuard(local_118);
                    /* try { // try from 081793d4 to 08179570 has its CatchHandler @ 08179626 */
      CUser::SendCashData(param_1,false);
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_118);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_118,0,0xe);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_118,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_118,2);
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar10,1,0,local_118);
      pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::MakeItemPacket(pCVar10,1,2,local_118);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_118,true);
      CUser::Send(param_1,local_118);
      piVar12 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
      cVar2 = (**(code **)(*piVar12 + 0x34))(piVar12,0);
      if (cVar2 != '\0') {
        this_00 = (CCeraShopBonusItemEvent *)
                  CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x11);
        iVar4 = CCeraShopBonusItemEvent::getBonusRate(this_00);
        iVar5 = get_rand_int(1000);
        if (iVar5 <= iVar4) {
          iVar4 = CUser::getUsedCera(param_1);
          iVar5 = G_CDataManager();
          CItemList::getCeraShopBonusItem(*(CItemList **)(iVar5 + 0xc),iVar4,local_100,&local_104);
          if (local_100[0] != 0xffffffff) {
            std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_124);
                    /* try { // try from 0817957a to 0817957e has its CatchHandler @ 081795fe */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_130);
                    /* try { // try from 081795cf to 081795d3 has its CatchHandler @ 081795d6 */
            WongWork::CCeraShop::_processAdditionalItem
                      ((CCeraShop *)this,param_1,local_100[0],(ushort)local_104,'\0',0xff,
                       (vector *)local_124,local_d8,'\0');
                    /* try { // try from 081795f7 to 081795fb has its CatchHandler @ 081795fe */
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_130);
                    /* try { // try from 0817961f to 08179623 has its CatchHandler @ 08179626 */
            std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_124);
          }
        }
      }
                    /* try { // try from 0817964a to 0817988f has its CatchHandler @ 08179892 */
      PacketGuard::~PacketGuard(local_118);
    }
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_100[0]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_f0,local_104);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_f0,true);
    CUser::Send(param_1,local_f0);
    uVar13 = CUser::get_acc_id(param_1);
    break_away_prevent::CBreakAwayPreventSystem::updateUsedCera
              (GlobalData::s_BreakAwaySys,uVar13,(uint)local_58);
    if (local_3e == 1) {
      iVar4 = (int)(char)local_45;
      uVar14 = *(undefined4 *)(param_3 + 0x1e4);
      BillingRecord((CUser *)this,(int)param_1,local_64,-1,local_58,(char *)(param_3 + 0x7d),
                    (int)(param_3 + 0x177),CONCAT44(*(undefined4 *)(param_3 + 0x1e0),(uint)local_5c)
                    ,(char)uVar14);
      cUserHistoryLog::BuyCashShopItem
                (param_1 + 0x79700,local_64,local_60,local_5c,param_3 + 0x7d,(int)(char)local_45,1,
                 *(undefined4 *)(param_3 + 0x1e0),*(undefined4 *)(param_3 + 0x1e4),uVar14,iVar4);
    }
    else {
      iVar4 = (int)(char)local_45;
      uVar14 = *(undefined4 *)(param_3 + 0x1e4);
      BillingRecord((CUser *)this,(int)param_1,local_64,-1,local_58,(char *)(param_2 + 0x7d),
                    (int)(param_2 + 0x177),CONCAT44(*(undefined4 *)(param_3 + 0x1e0),(uint)local_5c)
                    ,(char)uVar14);
      cUserHistoryLog::BuyCashShopItem
                (param_1 + 0x79700,local_64,local_60,local_5c,param_2 + 0x7d,(int)(char)local_45,0,
                 *(undefined4 *)(param_3 + 0x1e0),*(undefined4 *)(param_3 + 0x1e4),uVar14,iVar4);
    }
                    /* try { // try from 081798b3 to 081798b7 has its CatchHandler @ 081798bf */
    PacketGuard::~PacketGuard(local_f0);
  }
  else {
    WongWork::CCeraShop::_ProcessIPGError
              ((CCeraShop *)this,param_1,param_2,param_3,(uchar)local_e0,local_78,local_64,local_74,
               local_70,(char)local_45);
    cMyTrace::cMyTrace(local_94,
                       "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                       ,0x65b,0);
    cMyTrace::operator()
              (local_94,"[%s][%d]",
               "void ItemVendingMachine::ProcessIPG_ResultOutput(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
               ,0x65b);
  }
LAB_081798d7:
                    /* try { // try from 081798e0 to 081798e4 has its CatchHandler @ 08179900 */
  WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_d8);
  std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_c0);
  return;
}

```

---

## ProcessIPG_ResultQuery

```asm
// === 081784d4 ItemVendingMachine::ProcessIPG_ResultQuery  [0x081784d4-0x817866b] ===
 81784d4:	55                   	push   %ebp
 81784d5:	89 e5                	mov    %esp,%ebp
 81784d7:	56                   	push   %esi
 81784d8:	53                   	push   %ebx
 81784d9:	83 ec 40             	sub    $0x40,%esp
 81784dc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81784e0:	0f 84 7e 01 00 00    	je     8178664 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x190>
 81784e6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81784e9:	89 04 24             	mov    %eax,(%esp)
 81784ec:	e8 5b 58 41 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81784f1:	8b 45 14             	mov    0x14(%ebp),%eax
 81784f4:	05 b1 00 00 00       	add    $0xb1,%eax
 81784f9:	89 04 24             	mov    %eax,(%esp)
 81784fc:	e8 ef 61 f0 ff       	call   807e6f0 <atoi@plt>
 8178501:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8178504:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8178508:	74 5a                	je     8178564 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x90>
 817850a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8178511:	00 
 8178512:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178515:	89 04 24             	mov    %eax,(%esp)
 8178518:	e8 0d 83 4d 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 817851d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178520:	89 04 24             	mov    %eax,(%esp)
 8178523:	e8 46 1e f6 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8178528:	8b 55 ec             	mov    -0x14(%ebp),%edx
 817852b:	89 54 24 18          	mov    %edx,0x18(%esp)
 817852f:	89 44 24 14          	mov    %eax,0x14(%esp)
 8178533:	c7 44 24 10 b7 61 b8 	movl   $0x8b861b7,0x10(%esp)
 817853a:	08 
 817853b:	c7 44 24 0c dd 04 00 	movl   $0x4dd,0xc(%esp)
 8178542:	00 
 8178543:	c7 44 24 08 80 6f b8 	movl   $0x8b86f80,0x8(%esp)
 817854a:	08 
 817854b:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 8178552:	08 
 8178553:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817855a:	e8 ab b6 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817855f:	e9 f3 00 00 00       	jmp    8178657 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x183>
 8178564:	8b 45 14             	mov    0x14(%ebp),%eax
 8178567:	05 99 00 00 00       	add    $0x99,%eax
 817856c:	89 04 24             	mov    %eax,(%esp)
 817856f:	e8 7c 61 f0 ff       	call   807e6f0 <atoi@plt>
 8178574:	89 c3                	mov    %eax,%ebx
 8178576:	8b 45 14             	mov    0x14(%ebp),%eax
 8178579:	05 a5 00 00 00       	add    $0xa5,%eax
 817857e:	89 04 24             	mov    %eax,(%esp)
 8178581:	e8 6a 61 f0 ff       	call   807e6f0 <atoi@plt>
 8178586:	01 c3                	add    %eax,%ebx
 8178588:	8b 45 14             	mov    0x14(%ebp),%eax
 817858b:	05 81 00 00 00       	add    $0x81,%eax
 8178590:	89 04 24             	mov    %eax,(%esp)
 8178593:	e8 58 61 f0 ff       	call   807e6f0 <atoi@plt>
 8178598:	01 c3                	add    %eax,%ebx
 817859a:	8b 45 14             	mov    0x14(%ebp),%eax
 817859d:	83 c0 75             	add    $0x75,%eax
 81785a0:	89 04 24             	mov    %eax,(%esp)
 81785a3:	e8 48 61 f0 ff       	call   807e6f0 <atoi@plt>
 81785a8:	01 c3                	add    %eax,%ebx
 81785aa:	8b 45 14             	mov    0x14(%ebp),%eax
 81785ad:	05 8d 00 00 00       	add    $0x8d,%eax
 81785b2:	89 04 24             	mov    %eax,(%esp)
 81785b5:	e8 36 61 f0 ff       	call   807e6f0 <atoi@plt>
 81785ba:	01 c3                	add    %eax,%ebx
 81785bc:	8b 45 14             	mov    0x14(%ebp),%eax
 81785bf:	83 c0 69             	add    $0x69,%eax
 81785c2:	89 04 24             	mov    %eax,(%esp)
 81785c5:	e8 26 61 f0 ff       	call   807e6f0 <atoi@plt>
 81785ca:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 81785cd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81785d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81785d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81785d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81785da:	89 04 24             	mov    %eax,(%esp)
 81785dd:	e8 d2 1b 00 00       	call   817a1b4 <_ZN5CUser7SetCeraEj>
 81785e2:	8b 45 14             	mov    0x14(%ebp),%eax
 81785e5:	05 b5 00 00 00       	add    $0xb5,%eax
 81785ea:	89 04 24             	mov    %eax,(%esp)
 81785ed:	e8 fe 60 f0 ff       	call   807e6f0 <atoi@plt>
 81785f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81785f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81785f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81785fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81785ff:	89 04 24             	mov    %eax,(%esp)
 8178602:	e8 fd a4 51 00       	call   8692b04 <_ZN5CUser12SetCeraPointEj>
 8178607:	8b 45 f0             	mov    -0x10(%ebp),%eax
 817860a:	8b 55 0c             	mov    0xc(%ebp),%edx
 817860d:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8178613:	89 44 24 08          	mov    %eax,0x8(%esp)
 8178617:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817861e:	00 
 817861f:	89 14 24             	mov    %edx,(%esp)
 8178622:	e8 15 d3 50 00       	call   868593c <_ZN15cUserHistoryLog9CeraPointE23ENUM_CERAPOINT_LOG_TYPEj>
 8178627:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817862e:	00 
 817862f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8178632:	89 04 24             	mov    %eax,(%esp)
 8178635:	e8 f0 81 4d 00       	call   865082a <_ZN5CUser12SendCashDataEb>
 817863a:	eb 1b                	jmp    8178657 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x183>
 817863c:	89 d3                	mov    %edx,%ebx
 817863e:	89 c6                	mov    %eax,%esi
 8178640:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8178643:	89 04 24             	mov    %eax,(%esp)
 8178646:	e8 35 58 41 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 817864b:	89 f0                	mov    %esi,%eax
 817864d:	89 da                	mov    %ebx,%edx
 817864f:	89 04 24             	mov    %eax,(%esp)
 8178652:	e8 f9 b0 96 00       	call   8ae3750 <_Unwind_Resume>
 8178657:	8d 45 e0             	lea    -0x20(%ebp),%eax
 817865a:	89 04 24             	mov    %eax,(%esp)
 817865d:	e8 1e 58 41 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8178662:	eb 01                	jmp    8178665 <_ZN18ItemVendingMachine22ProcessIPG_ResultQueryEP5CUserPN8WongWork3IPG8SIPGDataES5_P6Stream+0x191>
 8178664:	90                   	nop
 8178665:	83 c4 40             	add    $0x40,%esp
 8178668:	5b                   	pop    %ebx
 8178669:	5e                   	pop    %esi
 817866a:	5d                   	pop    %ebp
 817866b:	c3                   	ret

```

```c
// ItemVendingMachine::ProcessIPG_ResultQuery @ 0x81784d4

/* ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*,
   WongWork::IPG::SIPGData*, Stream*) */

void ItemVendingMachine::ProcessIPG_ResultQuery
               (CUser *param_1,SIPGData *param_2,SIPGData *param_3,Stream *param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  PacketGuard local_24 [12];
  int local_18;
  uint local_14;
  uint local_10;
  
  if (param_2 != (SIPGData *)0x0) {
    PacketGuard::PacketGuard(local_24);
    local_18 = atoi((char *)(param_4 + 0xb1));
    if (local_18 == 0) {
      iVar2 = atoi((char *)(param_4 + 0x99));
      iVar3 = atoi((char *)(param_4 + 0xa5));
      iVar4 = atoi((char *)(param_4 + 0x81));
      iVar5 = atoi((char *)(param_4 + 0x75));
      iVar6 = atoi((char *)(param_4 + 0x8d));
      iVar7 = atoi((char *)(param_4 + 0x69));
      local_14 = iVar2 + iVar3 + iVar4 + iVar5 + iVar6 + iVar7;
      CUser::SetCera((CUser *)param_2,local_14);
      local_10 = atoi((char *)(param_4 + 0xb5));
      CUser::SetCeraPoint((CUser *)param_2,local_10);
      cUserHistoryLog::CeraPoint((cUserHistoryLog *)(param_2 + 0x79700),0,local_14);
      CUser::SendCashData((CUser *)param_2,false);
    }
    else {
                    /* try { // try from 08178518 to 08178639 has its CatchHandler @ 0817863c */
      CUser::SendCashData((CUser *)param_2,true);
      uVar1 = CUser::get_acc_id((CUser *)param_2);
      LogManager::logFormat
                (1,"localjapan/AppendVendingMachine.cpp",
                 "void ItemVendingMachine::ProcessIPG_ResultQuery(CUser*, WongWork::IPG::SIPGData*, WongWork::IPG::SIPGData*, Stream*)"
                 ,0x4dd,"IPG_QUERY %d %d",uVar1,local_18);
    }
    PacketGuard::~PacketGuard(local_24);
  }
  return;
}

```

---

## ProcessPurcahseBonusItem

```asm
// === 08179f08 ItemVendingMachine::ProcessPurcahseBonusItem  [0x08179f08-0x8179f41] ===
 8179f08:	55                   	push   %ebp
 8179f09:	89 e5                	mov    %esp,%ebp
 8179f0b:	83 ec 38             	sub    $0x38,%esp
 8179f0e:	8b 45 18             	mov    0x18(%ebp),%eax
 8179f11:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 8179f15:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 8179f19:	8b 55 08             	mov    0x8(%ebp),%edx
 8179f1c:	83 c2 08             	add    $0x8,%edx
 8179f1f:	89 44 24 10          	mov    %eax,0x10(%esp)
 8179f23:	8b 45 14             	mov    0x14(%ebp),%eax
 8179f26:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8179f2a:	8b 45 10             	mov    0x10(%ebp),%eax
 8179f2d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8179f31:	8b 45 0c             	mov    0xc(%ebp),%eax
 8179f34:	89 44 24 04          	mov    %eax,0x4(%esp)
 8179f38:	89 14 24             	mov    %edx,(%esp)
 8179f3b:	e8 04 20 03 00       	call   81abf44 <_ZN4ARAD26CeraShopPurcahseCountBonus13GiveBonusItemEP5CUsermit>
 8179f40:	c9                   	leave
 8179f41:	c3                   	ret

```

```c
// ItemVendingMachine::ProcessPurcahseBonusItem @ 0x8179f08

/* ItemVendingMachine::ProcessPurcahseBonusItem(CUser*, unsigned long, int, unsigned short) */

void __thiscall
ItemVendingMachine::ProcessPurcahseBonusItem
          (ItemVendingMachine *this,CUser *param_1,ulong param_2,int param_3,ushort param_4)

{
  ARAD::CeraShopPurcahseCountBonus::GiveBonusItem
            ((CeraShopPurcahseCountBonus *)(this + 8),param_1,param_2,param_3,param_4);
  return;
}

```

---

## _CheckEnableAvatarCondition

```asm
// === 08176794 ItemVendingMachine::_CheckEnableAvatarCondition  [0x08176794-0x81768af] ===
 8176794:	55                   	push   %ebp
 8176795:	89 e5                	mov    %esp,%ebp
 8176797:	83 ec 38             	sub    $0x38,%esp
 817679a:	8b 55 10             	mov    0x10(%ebp),%edx
 817679d:	8b 45 14             	mov    0x14(%ebp),%eax
 81767a0:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 81767a3:	88 45 e0             	mov    %al,-0x20(%ebp)
 81767a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81767a9:	89 04 24             	mov    %eax,(%esp)
 81767ac:	e8 bb 38 00 00       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 81767b1:	8b 10                	mov    (%eax),%edx
 81767b3:	83 c2 10             	add    $0x10,%edx
 81767b6:	8b 12                	mov    (%edx),%edx
 81767b8:	89 04 24             	mov    %eax,(%esp)
 81767bb:	ff d2                	call   *%edx
 81767bd:	83 f0 01             	xor    $0x1,%eax
 81767c0:	84 c0                	test   %al,%al
 81767c2:	74 0a                	je     81767ce <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x3a>
 81767c4:	b8 00 00 00 00       	mov    $0x0,%eax
 81767c9:	e9 e0 00 00 00       	jmp    81768ae <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x11a>
 81767ce:	8b 45 18             	mov    0x18(%ebp),%eax
 81767d1:	89 04 24             	mov    %eax,(%esp)
 81767d4:	e8 23 6a 81 00       	call   898d1fc <_ZN20stAvatarTypeSelect_t4initEv>
 81767d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81767dc:	89 04 24             	mov    %eax,(%esp)
 81767df:	e8 88 38 00 00       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 81767e4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81767e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81767ea:	89 04 24             	mov    %eax,(%esp)
 81767ed:	e8 36 a7 fd ff       	call   8150f28 <_ZNK10CEquipItem19getAvatarTypeSelectEv>
 81767f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81767f5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81767f8:	89 04 24             	mov    %eax,(%esp)
 81767fb:	e8 b6 b9 fd ff       	call   81521b6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE5emptyEv>
 8176800:	84 c0                	test   %al,%al
 8176802:	75 10                	jne    8176814 <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x80>
 8176804:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8176807:	89 04 24             	mov    %eax,(%esp)
 817680a:	e8 8b b9 fd ff       	call   815219a <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EE4sizeEv>
 817680f:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8176812:	7f 07                	jg     817681b <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x87>
 8176814:	b8 01 00 00 00       	mov    $0x1,%eax
 8176819:	eb 05                	jmp    8176820 <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x8c>
 817681b:	b8 00 00 00 00       	mov    $0x0,%eax
 8176820:	84 c0                	test   %al,%al
 8176822:	74 0a                	je     817682e <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x9a>
 8176824:	b8 00 00 00 00       	mov    $0x0,%eax
 8176829:	e9 80 00 00 00       	jmp    81768ae <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x11a>
 817682e:	80 7d e0 63          	cmpb   $0x63,-0x20(%ebp)
 8176832:	76 07                	jbe    817683b <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0xa7>
 8176834:	b8 00 00 00 00       	mov    $0x0,%eax
 8176839:	eb 73                	jmp    81768ae <_ZN18ItemVendingMachine27_CheckEnableAvatarConditionEPK14CCeraShopGoodschR20stAvatarTypeSelect_t+0x11a>
 817683b:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 817683f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176843:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8176846:	89 04 24             	mov    %eax,(%esp)
 8176849:	e8 a8 ba fd ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 817684e:	8b 50 0c             	mov    0xc(%eax),%edx
 8176851:	8b 45 18             	mov    0x18(%ebp),%eax
 8176854:	89 50 0c             	mov    %edx,0xc(%eax)
 8176857:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 817685b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817685f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8176862:	89 04 24             	mov    %eax,(%esp)
 8176865:	e8 8c ba fd ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 817686a:	8b 50 04             	mov    0x4(%eax),%edx
 817686d:	8b 45 18             	mov    0x18(%ebp),%eax
 8176870:	89 50 04             	mov    %edx,0x4(%eax)
 8176873:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 8176877:	89 44 24 04          	mov    %eax,0x4(%esp)
 817687b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817687e:	89 04 24             	mov    %eax,(%esp)
 8176881:	e8 70 ba fd ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 8176886:	8b 50 08             	mov    0x8(%eax),%edx
 8176889:	8b 45 18             	mov    0x18(%ebp),%eax
 817688c:	89 50 08             	mov    %edx,0x8(%eax)
 817688f:	0f be 45 e4          	movsbl -0x1c(%ebp),%eax
 8176893:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176897:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817689a:	89 04 24             	mov    %eax,(%esp)
 817689d:	e8 54 ba fd ff       	call   81522f6 <_ZNKSt6vectorI20stAvatarTypeSelect_tSaIS0_EEixEj>
 81768a2:	8b 10                	mov    (%eax),%edx
 81768a4:	8b 45 18             	mov    0x18(%ebp),%eax
 81768a7:	89 10                	mov    %edx,(%eax)
 81768a9:	b8 01 00 00 00       	mov    $0x1,%eax
 81768ae:	c9                   	leave
 81768af:	c3                   	ret

```

```c
// ItemVendingMachine::_CheckEnableAvatarCondition @ 0x8176794

/* ItemVendingMachine::_CheckEnableAvatarCondition(CCeraShopGoods const*, char, unsigned char,
   stAvatarTypeSelect_t&) */

undefined4 __thiscall
ItemVendingMachine::_CheckEnableAvatarCondition
          (ItemVendingMachine *this,CCeraShopGoods *param_1,char param_2,uchar param_3,
          stAvatarTypeSelect_t *param_4)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  CEquipItem *this_00;
  vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *this_01;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  piVar3 = (int *)CCeraShopGoods::GetRelatedItem(param_1);
  cVar2 = (**(code **)(*piVar3 + 0x10))(piVar3);
  if (cVar2 == '\x01') {
    stAvatarTypeSelect_t::init(param_4);
    this_00 = (CEquipItem *)CCeraShopGoods::GetRelatedItem(param_1);
    this_01 = (vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>> *)
              CEquipItem::getAvatarTypeSelect(this_00);
    cVar2 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::empty();
    if ((cVar2 == '\0') &&
       (cVar2 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::size
                          (this_01), param_2 < cVar2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else if (param_3 < 100) {
      iVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                        (this_01,(int)param_2);
      *(undefined4 *)(param_4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      iVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                        (this_01,(int)param_2);
      *(undefined4 *)(param_4 + 4) = *(undefined4 *)(iVar5 + 4);
      iVar5 = std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                        (this_01,(int)param_2);
      *(undefined4 *)(param_4 + 8) = *(undefined4 *)(iVar5 + 8);
      puVar6 = (undefined4 *)
               std::vector<stAvatarTypeSelect_t,std::allocator<stAvatarTypeSelect_t>>::operator[]
                         (this_01,(int)param_2);
      *(undefined4 *)param_4 = *puVar6;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
  return 0;
}

```

---

## _CheckEnableGiftCondition

```asm
// === 08176722 ItemVendingMachine::_CheckEnableGiftCondition  [0x08176722-0x8176793] ===
 8176722:	55                   	push   %ebp
 8176723:	89 e5                	mov    %esp,%ebp
 8176725:	83 ec 28             	sub    $0x28,%esp
 8176728:	8b 45 14             	mov    0x14(%ebp),%eax
 817672b:	88 45 f4             	mov    %al,-0xc(%ebp)
 817672e:	8b 45 10             	mov    0x10(%ebp),%eax
 8176731:	89 04 24             	mov    %eax,(%esp)
 8176734:	e8 b5 86 fa ff       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 8176739:	84 c0                	test   %al,%al
 817673b:	74 07                	je     8176744 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x22>
 817673d:	b8 01 00 00 00       	mov    $0x1,%eax
 8176742:	eb 4d                	jmp    8176791 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x6f>
 8176744:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176747:	89 04 24             	mov    %eax,(%esp)
 817674a:	e8 11 39 00 00       	call   817a060 <_ZNK14CCeraShopGoods10GetStickerEv>
 817674f:	83 f8 63             	cmp    $0x63,%eax
 8176752:	0f 94 c0             	sete   %al
 8176755:	84 c0                	test   %al,%al
 8176757:	74 07                	je     8176760 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x3e>
 8176759:	b8 00 00 00 00       	mov    $0x0,%eax
 817675e:	eb 31                	jmp    8176791 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x6f>
 8176760:	80 7d f4 01          	cmpb   $0x1,-0xc(%ebp)
 8176764:	75 16                	jne    817677c <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x5a>
 8176766:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176769:	89 04 24             	mov    %eax,(%esp)
 817676c:	e8 07 39 00 00       	call   817a078 <_ZNK14CCeraShopGoods19isGiftDisallowance_Ev>
 8176771:	84 c0                	test   %al,%al
 8176773:	74 07                	je     817677c <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x5a>
 8176775:	b8 01 00 00 00       	mov    $0x1,%eax
 817677a:	eb 05                	jmp    8176781 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x5f>
 817677c:	b8 00 00 00 00       	mov    $0x0,%eax
 8176781:	84 c0                	test   %al,%al
 8176783:	74 07                	je     817678c <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x6a>
 8176785:	b8 00 00 00 00       	mov    $0x0,%eax
 817678a:	eb 05                	jmp    8176791 <_ZN18ItemVendingMachine25_CheckEnableGiftConditionEPK14CCeraShopGoodsP5CUserc+0x6f>
 817678c:	b8 01 00 00 00       	mov    $0x1,%eax
 8176791:	c9                   	leave
 8176792:	c3                   	ret
 8176793:	90                   	nop

```

```c
// ItemVendingMachine::_CheckEnableGiftCondition @ 0x8176722

/* ItemVendingMachine::_CheckEnableGiftCondition(CCeraShopGoods const*, CUser*, char) */

bool __thiscall
ItemVendingMachine::_CheckEnableGiftCondition
          (ItemVendingMachine *this,CCeraShopGoods *param_1,CUser *param_2,char param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = CUser::IsGameMasterMode(param_2);
  if (cVar2 != '\0') {
    return true;
  }
  iVar3 = CCeraShopGoods::GetSticker(param_1);
  if (iVar3 != 99) {
    if ((param_3 == '\x01') && (cVar2 = CCeraShopGoods::isGiftDisallowance_(param_1), cVar2 != '\0')
       ) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    return !bVar1;
  }
  return false;
}

```

---

## _CheckEnableInventoryCondition

```asm
// === 081768ba ItemVendingMachine::_CheckEnableInventoryCondition  [0x081768ba-0x817697b] ===
 81768ba:	55                   	push   %ebp
 81768bb:	89 e5                	mov    %esp,%ebp
 81768bd:	83 ec 18             	sub    $0x18,%esp
 81768c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81768c3:	89 04 24             	mov    %eax,(%esp)
 81768c6:	e8 b3 39 f6 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81768cb:	8b 55 18             	mov    0x18(%ebp),%edx
 81768ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 81768d2:	8b 55 14             	mov    0x14(%ebp),%edx
 81768d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 81768d9:	89 04 24             	mov    %eax,(%esp)
 81768dc:	e8 99 4d 38 00       	call   84fb67a <_ZNK10CInventory17GetRemainCapacityE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE>
 81768e1:	85 c0                	test   %eax,%eax
 81768e3:	7f 7f                	jg     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 81768e5:	8b 45 10             	mov    0x10(%ebp),%eax
 81768e8:	89 04 24             	mov    %eax,(%esp)
 81768eb:	e8 58 a3 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81768f0:	3d c8 00 00 00       	cmp    $0xc8,%eax
 81768f5:	74 6d                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 81768f7:	8b 45 10             	mov    0x10(%ebp),%eax
 81768fa:	89 04 24             	mov    %eax,(%esp)
 81768fd:	e8 46 a3 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8176902:	3d cb 00 00 00       	cmp    $0xcb,%eax
 8176907:	74 5b                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 8176909:	8b 45 10             	mov    0x10(%ebp),%eax
 817690c:	89 04 24             	mov    %eax,(%esp)
 817690f:	e8 34 a3 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8176914:	3d cc 00 00 00       	cmp    $0xcc,%eax
 8176919:	74 49                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 817691b:	8b 45 10             	mov    0x10(%ebp),%eax
 817691e:	89 04 24             	mov    %eax,(%esp)
 8176921:	e8 22 a3 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8176926:	3d cd 00 00 00       	cmp    $0xcd,%eax
 817692b:	74 37                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 817692d:	8b 45 10             	mov    0x10(%ebp),%eax
 8176930:	89 04 24             	mov    %eax,(%esp)
 8176933:	e8 10 a3 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8176938:	83 f8 05             	cmp    $0x5,%eax
 817693b:	74 27                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 817693d:	8b 45 10             	mov    0x10(%ebp),%eax
 8176940:	89 04 24             	mov    %eax,(%esp)
 8176943:	e8 00 a3 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8176948:	83 f8 06             	cmp    $0x6,%eax
 817694b:	74 17                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 817694d:	8b 45 10             	mov    0x10(%ebp),%eax
 8176950:	89 04 24             	mov    %eax,(%esp)
 8176953:	e8 f0 a2 f9 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8176958:	83 f8 07             	cmp    $0x7,%eax
 817695b:	74 07                	je     8176964 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaa>
 817695d:	b8 01 00 00 00       	mov    $0x1,%eax
 8176962:	eb 05                	jmp    8176969 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xaf>
 8176964:	b8 00 00 00 00       	mov    $0x0,%eax
 8176969:	84 c0                	test   %al,%al
 817696b:	74 07                	je     8176974 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xba>
 817696d:	b8 00 00 00 00       	mov    $0x0,%eax
 8176972:	eb 05                	jmp    8176979 <_ZN18ItemVendingMachine30_CheckEnableInventoryConditionEP5CUserPK5CItem10INVEN_TYPEN10Inven_Item9ITEM_TYPEE+0xbf>
 8176974:	b8 01 00 00 00       	mov    $0x1,%eax
 8176979:	c9                   	leave
 817697a:	c3                   	ret
 817697b:	90                   	nop

```

```c
// ItemVendingMachine::_CheckEnableInventoryCondition @ 0x81768ba

/* ItemVendingMachine::_CheckEnableInventoryCondition(CUser*, CItem const*, INVEN_TYPE,
   Inven_Item::ITEM_TYPE) */

bool __thiscall
ItemVendingMachine::_CheckEnableInventoryCondition
          (undefined4 this,CUserCharacInfo *param_1,CItem *param_2,undefined4 param_4,
          undefined4 param_5)

{
  bool bVar1;
  CInventory *pCVar2;
  int iVar3;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_1);
  iVar3 = CInventory::GetRemainCapacity(pCVar2,param_4,param_5);
  if (((((iVar3 < 1) && (iVar3 = CItem::get_index(param_2), iVar3 != 200)) &&
       (iVar3 = CItem::get_index(param_2), iVar3 != 0xcb)) &&
      ((iVar3 = CItem::get_index(param_2), iVar3 != 0xcc &&
       (iVar3 = CItem::get_index(param_2), iVar3 != 0xcd)))) &&
     ((iVar3 = CItem::get_index(param_2), iVar3 != 5 &&
      ((iVar3 = CItem::get_index(param_2), iVar3 != 6 &&
       (iVar3 = CItem::get_index(param_2), iVar3 != 7)))))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return !bVar1;
}

```

---

## _CheckEnableItemCondition

```asm
// === 0817697c ItemVendingMachine::_CheckEnableItemCondition  [0x0817697c-0x81769f5] ===
 817697c:	55                   	push   %ebp
 817697d:	89 e5                	mov    %esp,%ebp
 817697f:	83 ec 18             	sub    $0x18,%esp
 8176982:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176985:	89 04 24             	mov    %eax,(%esp)
 8176988:	e8 bb 36 00 00       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 817698d:	83 f8 01             	cmp    $0x1,%eax
 8176990:	0f 95 c0             	setne  %al
 8176993:	84 c0                	test   %al,%al
 8176995:	74 57                	je     81769ee <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x72>
 8176997:	8b 45 0c             	mov    0xc(%ebp),%eax
 817699a:	89 04 24             	mov    %eax,(%esp)
 817699d:	e8 a6 36 00 00       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 81769a2:	83 f8 0b             	cmp    $0xb,%eax
 81769a5:	75 17                	jne    81769be <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x42>
 81769a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81769aa:	89 04 24             	mov    %eax,(%esp)
 81769ad:	e8 8a 36 00 00       	call   817a03c <_ZNK14CCeraShopGoods16GetSubGroupIndexEv>
 81769b2:	83 f8 01             	cmp    $0x1,%eax
 81769b5:	75 07                	jne    81769be <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x42>
 81769b7:	b8 01 00 00 00       	mov    $0x1,%eax
 81769bc:	eb 05                	jmp    81769c3 <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x47>
 81769be:	b8 00 00 00 00       	mov    $0x0,%eax
 81769c3:	84 c0                	test   %al,%al
 81769c5:	74 07                	je     81769ce <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x52>
 81769c7:	b8 01 00 00 00       	mov    $0x1,%eax
 81769cc:	eb 25                	jmp    81769f3 <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x77>
 81769ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81769d1:	89 04 24             	mov    %eax,(%esp)
 81769d4:	e8 93 36 00 00       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 81769d9:	8b 55 10             	mov    0x10(%ebp),%edx
 81769dc:	89 02                	mov    %eax,(%edx)
 81769de:	8b 45 10             	mov    0x10(%ebp),%eax
 81769e1:	8b 00                	mov    (%eax),%eax
 81769e3:	85 c0                	test   %eax,%eax
 81769e5:	75 07                	jne    81769ee <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x72>
 81769e7:	b8 00 00 00 00       	mov    $0x0,%eax
 81769ec:	eb 05                	jmp    81769f3 <_ZN18ItemVendingMachine25_CheckEnableItemConditionEPK14CCeraShopGoodsRPK5CItemRSt6vectorISt4pairIiiESaIS9_EE+0x77>
 81769ee:	b8 01 00 00 00       	mov    $0x1,%eax
 81769f3:	c9                   	leave
 81769f4:	c3                   	ret
 81769f5:	90                   	nop

```

```c
// ItemVendingMachine::_CheckEnableItemCondition @ 0x817697c

/* ItemVendingMachine::_CheckEnableItemCondition(CCeraShopGoods const*, CItem const*&,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4
ItemVendingMachine::_CheckEnableItemCondition
          (CCeraShopGoods *param_1,CItem **param_2,vector *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CCeraShopGoods::GetGroupIdx((CCeraShopGoods *)param_2);
  if (iVar2 != 1) {
    iVar2 = CCeraShopGoods::GetGroupIdx((CCeraShopGoods *)param_2);
    if ((iVar2 == 0xb) &&
       (iVar2 = CCeraShopGoods::GetSubGroupIndex((CCeraShopGoods *)param_2), iVar2 == 1)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      return 1;
    }
    uVar3 = CCeraShopGoods::GetRelatedItem((CCeraShopGoods *)param_2);
    *(undefined4 *)param_3 = uVar3;
    if (*(int *)param_3 == 0) {
      return 0;
    }
  }
  return 1;
}

```

---

## _CheckEnableStateCondition

```asm
// === 081768b0 ItemVendingMachine::_CheckEnableStateCondition  [0x081768b0-0x81768b9] ===
 81768b0:	55                   	push   %ebp
 81768b1:	89 e5                	mov    %esp,%ebp
 81768b3:	b8 01 00 00 00       	mov    $0x1,%eax
 81768b8:	5d                   	pop    %ebp
 81768b9:	c3                   	ret

```

```c
// ItemVendingMachine::_CheckEnableStateCondition @ 0x81768b0

/* ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods const*, CUser*) */

undefined4 ItemVendingMachine::_CheckEnableStateCondition(CCeraShopGoods *param_1,CUser *param_2)

{
  return 1;
}

```

---

## _GetInvenSlotInfo

```asm
// === 081763be ItemVendingMachine::_GetInvenSlotInfo  [0x081763be-0x8176459] ===
 81763be:	55                   	push   %ebp
 81763bf:	89 e5                	mov    %esp,%ebp
 81763c1:	83 ec 28             	sub    $0x28,%esp
 81763c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81763c7:	89 04 24             	mov    %eax,(%esp)
 81763ca:	e8 79 3c 00 00       	call   817a048 <_ZNK14CCeraShopGoods11GetGroupIdxEv>
 81763cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81763d2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81763d5:	83 f8 02             	cmp    $0x2,%eax
 81763d8:	74 22                	je     81763fc <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x3e>
 81763da:	83 f8 02             	cmp    $0x2,%eax
 81763dd:	7f 06                	jg     81763e5 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x27>
 81763df:	85 c0                	test   %eax,%eax
 81763e1:	74 0e                	je     81763f1 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x33>
 81763e3:	eb 6d                	jmp    8176452 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x94>
 81763e5:	83 f8 03             	cmp    $0x3,%eax
 81763e8:	74 34                	je     817641e <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x60>
 81763ea:	83 f8 07             	cmp    $0x7,%eax
 81763ed:	74 51                	je     8176440 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x82>
 81763ef:	eb 61                	jmp    8176452 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x94>
 81763f1:	8b 45 10             	mov    0x10(%ebp),%eax
 81763f4:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 81763fa:	eb 56                	jmp    8176452 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x94>
 81763fc:	8b 45 10             	mov    0x10(%ebp),%eax
 81763ff:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8176405:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176408:	89 44 24 04          	mov    %eax,0x4(%esp)
 817640c:	8b 45 08             	mov    0x8(%ebp),%eax
 817640f:	89 04 24             	mov    %eax,(%esp)
 8176412:	e8 31 ff ff ff       	call   8176348 <_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods>
 8176417:	8b 55 14             	mov    0x14(%ebp),%edx
 817641a:	89 02                	mov    %eax,(%edx)
 817641c:	eb 34                	jmp    8176452 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x94>
 817641e:	8b 45 10             	mov    0x10(%ebp),%eax
 8176421:	c7 00 03 00 00 00    	movl   $0x3,(%eax)
 8176427:	8b 45 0c             	mov    0xc(%ebp),%eax
 817642a:	89 44 24 04          	mov    %eax,0x4(%esp)
 817642e:	8b 45 08             	mov    0x8(%ebp),%eax
 8176431:	89 04 24             	mov    %eax,(%esp)
 8176434:	e8 0f ff ff ff       	call   8176348 <_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods>
 8176439:	8b 55 14             	mov    0x14(%ebp),%edx
 817643c:	89 02                	mov    %eax,(%edx)
 817643e:	eb 12                	jmp    8176452 <_ZN18ItemVendingMachine17_GetInvenSlotInfoEPK14CCeraShopGoodsR10INVEN_TYPERN10Inven_Item9ITEM_TYPEE+0x94>
 8176440:	8b 45 10             	mov    0x10(%ebp),%eax
 8176443:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8176449:	8b 45 14             	mov    0x14(%ebp),%eax
 817644c:	c7 00 02 00 00 00    	movl   $0x2,(%eax)
 8176452:	b8 01 00 00 00       	mov    $0x1,%eax
 8176457:	c9                   	leave
 8176458:	c3                   	ret
 8176459:	90                   	nop

```

```c
// ItemVendingMachine::_GetInvenSlotInfo @ 0x81763be

/* ItemVendingMachine::_GetInvenSlotInfo(CCeraShopGoods const*, INVEN_TYPE&, Inven_Item::ITEM_TYPE&)
    */

undefined4 __thiscall
ItemVendingMachine::_GetInvenSlotInfo
          (ItemVendingMachine *this,CCeraShopGoods *param_1,INVEN_TYPE *param_2,ITEM_TYPE *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = CCeraShopGoods::GetGroupIdx(param_1);
  if (iVar1 == 2) {
    *(undefined4 *)param_2 = 1;
    uVar2 = _GetItemType(this,param_1);
    *(undefined4 *)param_3 = uVar2;
  }
  else if (iVar1 < 3) {
    if (iVar1 == 0) {
      *(undefined4 *)param_2 = 2;
    }
  }
  else if (iVar1 == 3) {
    *(undefined4 *)param_2 = 3;
    uVar2 = _GetItemType(this,param_1);
    *(undefined4 *)param_3 = uVar2;
  }
  else if (iVar1 == 7) {
    *(undefined4 *)param_2 = 1;
    *(undefined4 *)param_3 = 2;
  }
  return 1;
}

```

---

## _GetItemString

```asm
// === 0817645a ItemVendingMachine::_GetItemString  [0x0817645a-0x8176721] ===
 817645a:	55                   	push   %ebp
 817645b:	89 e5                	mov    %esp,%ebp
 817645d:	53                   	push   %ebx
 817645e:	83 ec 34             	sub    $0x34,%esp
 8176461:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176464:	89 04 24             	mov    %eax,(%esp)
 8176467:	e8 8a 3b 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 817646c:	83 f8 01             	cmp    $0x1,%eax
 817646f:	0f 94 c0             	sete   %al
 8176472:	84 c0                	test   %al,%al
 8176474:	74 2e                	je     81764a4 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x4a>
 8176476:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176479:	89 04 24             	mov    %eax,(%esp)
 817647c:	e8 7f 3b 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8176481:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8176485:	c7 44 24 08 a3 5f b8 	movl   $0x8b85fa3,0x8(%esp)
 817648c:	08 
 817648d:	8b 45 14             	mov    0x14(%ebp),%eax
 8176490:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176494:	8b 45 10             	mov    0x10(%ebp),%eax
 8176497:	89 04 24             	mov    %eax,(%esp)
 817649a:	e8 7d 63 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 817649f:	e9 78 02 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 81764a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81764a7:	89 04 24             	mov    %eax,(%esp)
 81764aa:	e8 47 3b 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 81764af:	3d ca 00 00 00       	cmp    $0xca,%eax
 81764b4:	0f 94 c0             	sete   %al
 81764b7:	84 c0                	test   %al,%al
 81764b9:	74 2e                	je     81764e9 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x8f>
 81764bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81764be:	89 04 24             	mov    %eax,(%esp)
 81764c1:	e8 3a 3b 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 81764c6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81764ca:	c7 44 24 08 b4 5f b8 	movl   $0x8b85fb4,0x8(%esp)
 81764d1:	08 
 81764d2:	8b 45 14             	mov    0x14(%ebp),%eax
 81764d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81764d9:	8b 45 10             	mov    0x10(%ebp),%eax
 81764dc:	89 04 24             	mov    %eax,(%esp)
 81764df:	e8 38 63 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81764e4:	e9 33 02 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 81764e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81764ec:	89 04 24             	mov    %eax,(%esp)
 81764ef:	e8 02 3b 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 81764f4:	83 f8 08             	cmp    $0x8,%eax
 81764f7:	0f 94 c0             	sete   %al
 81764fa:	84 c0                	test   %al,%al
 81764fc:	74 2e                	je     817652c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0xd2>
 81764fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176501:	89 04 24             	mov    %eax,(%esp)
 8176504:	e8 f7 3a 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8176509:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817650d:	c7 44 24 08 c3 5f b8 	movl   $0x8b85fc3,0x8(%esp)
 8176514:	08 
 8176515:	8b 45 14             	mov    0x14(%ebp),%eax
 8176518:	89 44 24 04          	mov    %eax,0x4(%esp)
 817651c:	8b 45 10             	mov    0x10(%ebp),%eax
 817651f:	89 04 24             	mov    %eax,(%esp)
 8176522:	e8 f5 62 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8176527:	e9 f0 01 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 817652c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817652f:	89 04 24             	mov    %eax,(%esp)
 8176532:	e8 bf 3a 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8176537:	83 f8 0f             	cmp    $0xf,%eax
 817653a:	0f 94 c0             	sete   %al
 817653d:	84 c0                	test   %al,%al
 817653f:	74 2e                	je     817656f <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x115>
 8176541:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176544:	89 04 24             	mov    %eax,(%esp)
 8176547:	e8 b4 3a 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 817654c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8176550:	c7 44 24 08 d4 5f b8 	movl   $0x8b85fd4,0x8(%esp)
 8176557:	08 
 8176558:	8b 45 14             	mov    0x14(%ebp),%eax
 817655b:	89 44 24 04          	mov    %eax,0x4(%esp)
 817655f:	8b 45 10             	mov    0x10(%ebp),%eax
 8176562:	89 04 24             	mov    %eax,(%esp)
 8176565:	e8 b2 62 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 817656a:	e9 ad 01 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 817656f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176572:	89 04 24             	mov    %eax,(%esp)
 8176575:	e8 7c 3a 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 817657a:	3d 3d 04 00 00       	cmp    $0x43d,%eax
 817657f:	0f 94 c0             	sete   %al
 8176582:	84 c0                	test   %al,%al
 8176584:	74 2e                	je     81765b4 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x15a>
 8176586:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176589:	89 04 24             	mov    %eax,(%esp)
 817658c:	e8 6f 3a 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8176591:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8176595:	c7 44 24 08 e3 5f b8 	movl   $0x8b85fe3,0x8(%esp)
 817659c:	08 
 817659d:	8b 45 14             	mov    0x14(%ebp),%eax
 81765a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81765a4:	8b 45 10             	mov    0x10(%ebp),%eax
 81765a7:	89 04 24             	mov    %eax,(%esp)
 81765aa:	e8 6d 62 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81765af:	e9 68 01 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 81765b4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81765b7:	89 04 24             	mov    %eax,(%esp)
 81765ba:	e8 37 3a 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 81765bf:	83 f8 0e             	cmp    $0xe,%eax
 81765c2:	0f 94 c0             	sete   %al
 81765c5:	84 c0                	test   %al,%al
 81765c7:	74 2e                	je     81765f7 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x19d>
 81765c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81765cc:	89 04 24             	mov    %eax,(%esp)
 81765cf:	e8 2c 3a 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 81765d4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81765d8:	c7 44 24 08 ee 5f b8 	movl   $0x8b85fee,0x8(%esp)
 81765df:	08 
 81765e0:	8b 45 14             	mov    0x14(%ebp),%eax
 81765e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81765e7:	8b 45 10             	mov    0x10(%ebp),%eax
 81765ea:	89 04 24             	mov    %eax,(%esp)
 81765ed:	e8 2a 62 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81765f2:	e9 25 01 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 81765f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81765fa:	89 04 24             	mov    %eax,(%esp)
 81765fd:	e8 f4 39 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 8176602:	3d d8 00 00 00       	cmp    $0xd8,%eax
 8176607:	0f 94 c0             	sete   %al
 817660a:	84 c0                	test   %al,%al
 817660c:	74 2e                	je     817663c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x1e2>
 817660e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176611:	89 04 24             	mov    %eax,(%esp)
 8176614:	e8 e7 39 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 8176619:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817661d:	c7 44 24 08 03 60 b8 	movl   $0x8b86003,0x8(%esp)
 8176624:	08 
 8176625:	8b 45 14             	mov    0x14(%ebp),%eax
 8176628:	89 44 24 04          	mov    %eax,0x4(%esp)
 817662c:	8b 45 10             	mov    0x10(%ebp),%eax
 817662f:	89 04 24             	mov    %eax,(%esp)
 8176632:	e8 e5 61 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 8176637:	e9 e0 00 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 817663c:	8b 45 0c             	mov    0xc(%ebp),%eax
 817663f:	89 04 24             	mov    %eax,(%esp)
 8176642:	e8 25 3a 00 00       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 8176647:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817664a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 817664e:	75 40                	jne    8176690 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x236>
 8176650:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176653:	89 04 24             	mov    %eax,(%esp)
 8176656:	e8 9b 39 00 00       	call   8179ff6 <_ZNK14CCeraShopGoods10GetItemIdxEv>
 817665b:	89 44 24 14          	mov    %eax,0x14(%esp)
 817665f:	c7 44 24 10 14 60 b8 	movl   $0x8b86014,0x10(%esp)
 8176666:	08 
 8176667:	c7 44 24 0c 8d 01 00 	movl   $0x18d,0xc(%esp)
 817666e:	00 
 817666f:	c7 44 24 08 e0 70 b8 	movl   $0x8b870e0,0x8(%esp)
 8176676:	08 
 8176677:	c7 44 24 04 44 5f b8 	movl   $0x8b85f44,0x4(%esp)
 817667e:	08 
 817667f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8176686:	e8 7f d5 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817668b:	e9 8c 00 00 00       	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 8176690:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8176693:	89 04 24             	mov    %eax,(%esp)
 8176696:	e8 5f ac f7 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 817669b:	84 c0                	test   %al,%al
 817669d:	74 17                	je     81766b6 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x25c>
 817669f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81766a2:	89 04 24             	mov    %eax,(%esp)
 81766a5:	e8 56 39 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 81766aa:	83 f8 01             	cmp    $0x1,%eax
 81766ad:	7e 07                	jle    81766b6 <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x25c>
 81766af:	b8 01 00 00 00       	mov    $0x1,%eax
 81766b4:	eb 05                	jmp    81766bb <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x261>
 81766b6:	b8 00 00 00 00       	mov    $0x0,%eax
 81766bb:	84 c0                	test   %al,%al
 81766bd:	74 3c                	je     81766fb <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2a1>
 81766bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 81766c2:	89 04 24             	mov    %eax,(%esp)
 81766c5:	e8 36 39 00 00       	call   817a000 <_ZNK14CCeraShopGoods13GetStackCountEv>
 81766ca:	89 c3                	mov    %eax,%ebx
 81766cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81766cf:	89 04 24             	mov    %eax,(%esp)
 81766d2:	e8 ab 86 fa ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 81766d7:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81766db:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81766df:	c7 44 24 08 3d 60 b8 	movl   $0x8b8603d,0x8(%esp)
 81766e6:	08 
 81766e7:	8b 45 14             	mov    0x14(%ebp),%eax
 81766ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81766ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81766f1:	89 04 24             	mov    %eax,(%esp)
 81766f4:	e8 23 61 41 00       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 81766f9:	eb 21                	jmp    817671c <_ZN18ItemVendingMachine14_GetItemStringEPK14CCeraShopGoodsPcj+0x2c2>
 81766fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81766fe:	89 04 24             	mov    %eax,(%esp)
 8176701:	e8 7c 86 fa ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 8176706:	8b 55 14             	mov    0x14(%ebp),%edx
 8176709:	89 54 24 08          	mov    %edx,0x8(%esp)
 817670d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8176711:	8b 45 10             	mov    0x10(%ebp),%eax
 8176714:	89 04 24             	mov    %eax,(%esp)
 8176717:	e8 b4 71 f0 ff       	call   807d8d0 <strncpy@plt>
 817671c:	83 c4 34             	add    $0x34,%esp
 817671f:	5b                   	pop    %ebx
 8176720:	5d                   	pop    %ebp
 8176721:	c3                   	ret

```

```c
// ItemVendingMachine::_GetItemString @ 0x817645a

/* ItemVendingMachine::_GetItemString(CCeraShopGoods const*, char*, unsigned int) */

void __thiscall
ItemVendingMachine::_GetItemString
          (ItemVendingMachine *this,CCeraShopGoods *param_1,char *param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CItem *this_00;
  undefined4 uVar5;
  char *__src;
  
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 1) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Continue Coin %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xca) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Mystic Coin %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 8) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Hands of Remy %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xf) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Kaleido Box %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0x43d) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Manaade %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xe) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Golden Wax Candle %d",uVar4);
    return;
  }
  iVar3 = CCeraShopGoods::GetItemIdx(param_1);
  if (iVar3 == 0xd8) {
    uVar4 = CCeraShopGoods::GetStackCount(param_1);
    OS_API::snprintf(param_2,param_3,"Mystic Cube %d",uVar4);
    return;
  }
  this_00 = (CItem *)CCeraShopGoods::GetRelatedItem(param_1);
  if (this_00 != (CItem *)0x0) {
    cVar2 = CItem::is_stackable(this_00);
    if ((cVar2 == '\0') || (iVar3 = CCeraShopGoods::GetStackCount(param_1), iVar3 < 2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = CCeraShopGoods::GetStackCount(param_1);
      uVar5 = CItem::GetItemName(this_00);
      OS_API::snprintf(param_2,param_3,"%s Count %d",uVar5,uVar4);
    }
    else {
      __src = (char *)CItem::GetItemName(this_00);
      strncpy(param_2,__src,param_3);
    }
    return;
  }
  uVar4 = CCeraShopGoods::GetItemIdx(param_1);
  LogManager::logFormat
            (1,"localjapan/AppendVendingMachine.cpp",
             "void ItemVendingMachine::_GetItemString(const CCeraShopGoods*, char*, size_t)",0x18d,
             "CashShop Relation Item is NULL [ITEM:%d]",uVar4);
  return;
}

```

---

## _GetItemType

```asm
// === 08176348 ItemVendingMachine::_GetItemType  [0x08176348-0x81763bd] ===
 8176348:	55                   	push   %ebp
 8176349:	89 e5                	mov    %esp,%ebp
 817634b:	83 ec 18             	sub    $0x18,%esp
 817634e:	b8 e0 47 40 09       	mov    $0x94047e0,%eax
 8176353:	0f b6 00             	movzbl (%eax),%eax
 8176356:	84 c0                	test   %al,%al
 8176358:	75 2d                	jne    8176387 <_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods+0x3f>
 817635a:	c7 04 24 e0 47 40 09 	movl   $0x94047e0,(%esp)
 8176361:	e8 ca ef 5a 00       	call   8725330 <__cxa_guard_acquire>
 8176366:	85 c0                	test   %eax,%eax
 8176368:	0f 95 c0             	setne  %al
 817636b:	84 c0                	test   %al,%al
 817636d:	74 18                	je     8176387 <_ZN18ItemVendingMachine12_GetItemTypeEPK14CCeraShopGoods+0x3f>
 817636f:	c7 04 24 00 48 40 09 	movl   $0x9404800,(%esp)
 8176376:	e8 d9 54 f5 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 817637b:	c7 04 24 e0 47 40 09 	movl   $0x94047e0,(%esp)
 8176382:	e8 c9 ee 5a 00       	call   8725250 <__cxa_guard_release>
 8176387:	c7 04 24 00 48 40 09 	movl   $0x9404800,(%esp)
 817638e:	e8 45 54 f5 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8176393:	8b 45 0c             	mov    0xc(%ebp),%eax
 8176396:	89 04 24             	mov    %eax,(%esp)
 8176399:	e8 ce 3c 00 00       	call   817a06c <_ZNK14CCeraShopGoods14GetRelatedItemEv>
 817639e:	8b 10                	mov    (%eax),%edx
 81763a0:	83 c2 08             	add    $0x8,%edx
 81763a3:	8b 12                	mov    (%edx),%edx
 81763a5:	c7 44 24 04 00 48 40 	movl   $0x9404800,0x4(%esp)
 81763ac:	09 
 81763ad:	89 04 24             	mov    %eax,(%esp)
 81763b0:	ff d2                	call   *%edx
 81763b2:	0f b6 05 01 48 40 09 	movzbl 0x9404801,%eax
 81763b9:	0f b6 c0             	movzbl %al,%eax
 81763bc:	c9                   	leave
 81763bd:	c3                   	ret

```

```c
// ItemVendingMachine::_GetItemType @ 0x8176348

/* ItemVendingMachine::_GetItemType(CCeraShopGoods const*) */

undefined1 __thiscall
ItemVendingMachine::_GetItemType(ItemVendingMachine *this,CCeraShopGoods *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (_GetItemType(CCeraShopGoods_const*)::temp == '\0') {
    iVar1 = __cxa_guard_acquire(&_GetItemType(CCeraShopGoods_const*)::temp);
    if (iVar1 != 0) {
      Inven_Item::Inven_Item((Inven_Item *)_GetItemType(CCeraShopGoods_const*)::temp);
      __cxa_guard_release(&_GetItemType(CCeraShopGoods_const*)::temp);
    }
  }
  Inven_Item::reset((Inven_Item *)_GetItemType(CCeraShopGoods_const*)::temp);
  piVar2 = (int *)CCeraShopGoods::GetRelatedItem(param_1);
  (**(code **)(*piVar2 + 8))(piVar2,_GetItemType(CCeraShopGoods_const*)::temp);
  return _GetItemType(CCeraShopGoods_const*)::temp[1];
}

```

---

## ~ItemVendingMachine

```asm
// === 0854c42a ItemVendingMachine::~ItemVendingMachine  [0x0854c42a-0x854c46f] ===
 854c42a:	55                   	push   %ebp
 854c42b:	89 e5                	mov    %esp,%ebp
 854c42d:	56                   	push   %esi
 854c42e:	53                   	push   %ebx
 854c42f:	83 ec 10             	sub    $0x10,%esp
 854c432:	8b 45 08             	mov    0x8(%ebp),%eax
 854c435:	83 c0 08             	add    $0x8,%eax
 854c438:	89 04 24             	mov    %eax,(%esp)
 854c43b:	e8 8a 01 00 00       	call   854c5ca <_ZN4ARAD26CeraShopPurcahseCountBonusD1Ev>
 854c440:	eb 1b                	jmp    854c45d <_ZN18ItemVendingMachineD1Ev+0x33>
 854c442:	89 d3                	mov    %edx,%ebx
 854c444:	89 c6                	mov    %eax,%esi
 854c446:	8b 45 08             	mov    0x8(%ebp),%eax
 854c449:	89 04 24             	mov    %eax,(%esp)
 854c44c:	e8 c3 3e dd ff       	call   8320314 <_ZN8WongWork9CCeraShopD1Ev>
 854c451:	89 f0                	mov    %esi,%eax
 854c453:	89 da                	mov    %ebx,%edx
 854c455:	89 04 24             	mov    %eax,(%esp)
 854c458:	e8 f3 72 59 00       	call   8ae3750 <_Unwind_Resume>
 854c45d:	8b 45 08             	mov    0x8(%ebp),%eax
 854c460:	89 04 24             	mov    %eax,(%esp)
 854c463:	e8 ac 3e dd ff       	call   8320314 <_ZN8WongWork9CCeraShopD1Ev>
 854c468:	83 c4 10             	add    $0x10,%esp
 854c46b:	5b                   	pop    %ebx
 854c46c:	5e                   	pop    %esi
 854c46d:	5d                   	pop    %ebp
 854c46e:	c3                   	ret
 854c46f:	90                   	nop

```

```c
// ItemVendingMachine::~ItemVendingMachine @ 0x854c42a

/* ItemVendingMachine::~ItemVendingMachine() */

void __thiscall ItemVendingMachine::~ItemVendingMachine(ItemVendingMachine *this)

{
                    /* try { // try from 0854c43b to 0854c43f has its CatchHandler @ 0854c442 */
  ARAD::CeraShopPurcahseCountBonus::~CeraShopPurcahseCountBonus
            ((CeraShopPurcahseCountBonus *)(this + 8));
  WongWork::CCeraShop::~CCeraShop((CCeraShop *)this);
  return;
}

```

