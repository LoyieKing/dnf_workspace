# PvpResultType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 7

---

## AddNewResult

```asm
// === 085d5944 PvpResultType::AddNewResult  [0x085d5944-0x85d5dbf] ===
 85d5944:	55                   	push   %ebp
 85d5945:	89 e5                	mov    %esp,%ebp
 85d5947:	57                   	push   %edi
 85d5948:	56                   	push   %esi
 85d5949:	53                   	push   %ebx
 85d594a:	83 ec 3c             	sub    $0x3c,%esp
 85d594d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5950:	8b 40 54             	mov    0x54(%eax),%eax
 85d5953:	85 c0                	test   %eax,%eax
 85d5955:	75 29                	jne    85d5980 <_ZN13PvpResultType12AddNewResultERKS_+0x3c>
 85d5957:	8b 45 08             	mov    0x8(%ebp),%eax
 85d595a:	8b 40 58             	mov    0x58(%eax),%eax
 85d595d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85d5960:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5963:	89 44 24 04          	mov    %eax,0x4(%esp)
 85d5967:	8b 45 08             	mov    0x8(%ebp),%eax
 85d596a:	89 04 24             	mov    %eax,(%esp)
 85d596d:	e8 74 ff ff ff       	call   85d58e6 <_ZN13PvpResultType3SetERKS_>
 85d5972:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85d5975:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5978:	89 50 58             	mov    %edx,0x58(%eax)
 85d597b:	e9 29 04 00 00       	jmp    85d5da9 <_ZN13PvpResultType12AddNewResultERKS_+0x465>
 85d5980:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5983:	8b 40 54             	mov    0x54(%eax),%eax
 85d5986:	89 c6                	mov    %eax,%esi
 85d5988:	89 c7                	mov    %eax,%edi
 85d598a:	c1 ff 1f             	sar    $0x1f,%edi
 85d598d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5990:	8b 40 18             	mov    0x18(%eax),%eax
 85d5993:	89 c1                	mov    %eax,%ecx
 85d5995:	89 c3                	mov    %eax,%ebx
 85d5997:	c1 fb 1f             	sar    $0x1f,%ebx
 85d599a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d599d:	8b 40 18             	mov    0x18(%eax),%eax
 85d59a0:	89 c2                	mov    %eax,%edx
 85d59a2:	c1 fa 1f             	sar    $0x1f,%edx
 85d59a5:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d59a9:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d59ad:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d59b1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d59b5:	89 04 24             	mov    %eax,(%esp)
 85d59b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d59bc:	e8 05 a5 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d59c1:	8b 55 08             	mov    0x8(%ebp),%edx
 85d59c4:	89 42 18             	mov    %eax,0x18(%edx)
 85d59c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d59ca:	8b 40 54             	mov    0x54(%eax),%eax
 85d59cd:	89 c6                	mov    %eax,%esi
 85d59cf:	89 c7                	mov    %eax,%edi
 85d59d1:	c1 ff 1f             	sar    $0x1f,%edi
 85d59d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d59d7:	8b 40 1c             	mov    0x1c(%eax),%eax
 85d59da:	89 c1                	mov    %eax,%ecx
 85d59dc:	89 c3                	mov    %eax,%ebx
 85d59de:	c1 fb 1f             	sar    $0x1f,%ebx
 85d59e1:	8b 45 08             	mov    0x8(%ebp),%eax
 85d59e4:	8b 40 1c             	mov    0x1c(%eax),%eax
 85d59e7:	89 c2                	mov    %eax,%edx
 85d59e9:	c1 fa 1f             	sar    $0x1f,%edx
 85d59ec:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d59f0:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d59f4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d59f8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d59fc:	89 04 24             	mov    %eax,(%esp)
 85d59ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5a03:	e8 be a4 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5a08:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5a0b:	89 42 1c             	mov    %eax,0x1c(%edx)
 85d5a0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5a11:	8b 40 54             	mov    0x54(%eax),%eax
 85d5a14:	89 c6                	mov    %eax,%esi
 85d5a16:	89 c7                	mov    %eax,%edi
 85d5a18:	c1 ff 1f             	sar    $0x1f,%edi
 85d5a1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5a1e:	8b 40 20             	mov    0x20(%eax),%eax
 85d5a21:	89 c1                	mov    %eax,%ecx
 85d5a23:	89 c3                	mov    %eax,%ebx
 85d5a25:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5a28:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5a2b:	8b 40 20             	mov    0x20(%eax),%eax
 85d5a2e:	89 c2                	mov    %eax,%edx
 85d5a30:	c1 fa 1f             	sar    $0x1f,%edx
 85d5a33:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5a37:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5a3b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5a3f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5a43:	89 04 24             	mov    %eax,(%esp)
 85d5a46:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5a4a:	e8 77 a4 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5a4f:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5a52:	89 42 20             	mov    %eax,0x20(%edx)
 85d5a55:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5a58:	8b 40 54             	mov    0x54(%eax),%eax
 85d5a5b:	89 c6                	mov    %eax,%esi
 85d5a5d:	89 c7                	mov    %eax,%edi
 85d5a5f:	c1 ff 1f             	sar    $0x1f,%edi
 85d5a62:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5a65:	8b 40 24             	mov    0x24(%eax),%eax
 85d5a68:	89 c1                	mov    %eax,%ecx
 85d5a6a:	89 c3                	mov    %eax,%ebx
 85d5a6c:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5a6f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5a72:	8b 40 24             	mov    0x24(%eax),%eax
 85d5a75:	89 c2                	mov    %eax,%edx
 85d5a77:	c1 fa 1f             	sar    $0x1f,%edx
 85d5a7a:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5a7e:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5a82:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5a86:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5a8a:	89 04 24             	mov    %eax,(%esp)
 85d5a8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5a91:	e8 30 a4 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5a96:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5a99:	89 42 24             	mov    %eax,0x24(%edx)
 85d5a9c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5a9f:	8b 40 54             	mov    0x54(%eax),%eax
 85d5aa2:	89 c6                	mov    %eax,%esi
 85d5aa4:	89 c7                	mov    %eax,%edi
 85d5aa6:	c1 ff 1f             	sar    $0x1f,%edi
 85d5aa9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5aac:	8b 40 28             	mov    0x28(%eax),%eax
 85d5aaf:	89 c1                	mov    %eax,%ecx
 85d5ab1:	89 c3                	mov    %eax,%ebx
 85d5ab3:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5ab6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ab9:	8b 40 28             	mov    0x28(%eax),%eax
 85d5abc:	89 c2                	mov    %eax,%edx
 85d5abe:	c1 fa 1f             	sar    $0x1f,%edx
 85d5ac1:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5ac5:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5ac9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5acd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5ad1:	89 04 24             	mov    %eax,(%esp)
 85d5ad4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5ad8:	e8 e9 a3 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5add:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5ae0:	89 42 28             	mov    %eax,0x28(%edx)
 85d5ae3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ae6:	8b 40 54             	mov    0x54(%eax),%eax
 85d5ae9:	89 c6                	mov    %eax,%esi
 85d5aeb:	89 c7                	mov    %eax,%edi
 85d5aed:	c1 ff 1f             	sar    $0x1f,%edi
 85d5af0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5af3:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d5af6:	89 c1                	mov    %eax,%ecx
 85d5af8:	89 c3                	mov    %eax,%ebx
 85d5afa:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5afd:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5b00:	8b 40 2c             	mov    0x2c(%eax),%eax
 85d5b03:	89 c2                	mov    %eax,%edx
 85d5b05:	c1 fa 1f             	sar    $0x1f,%edx
 85d5b08:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5b0c:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5b10:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5b14:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5b18:	89 04 24             	mov    %eax,(%esp)
 85d5b1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5b1f:	e8 a2 a3 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5b24:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5b27:	89 42 2c             	mov    %eax,0x2c(%edx)
 85d5b2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5b2d:	8b 40 54             	mov    0x54(%eax),%eax
 85d5b30:	89 c6                	mov    %eax,%esi
 85d5b32:	89 c7                	mov    %eax,%edi
 85d5b34:	c1 ff 1f             	sar    $0x1f,%edi
 85d5b37:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5b3a:	8b 40 30             	mov    0x30(%eax),%eax
 85d5b3d:	89 c1                	mov    %eax,%ecx
 85d5b3f:	89 c3                	mov    %eax,%ebx
 85d5b41:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5b44:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5b47:	8b 40 30             	mov    0x30(%eax),%eax
 85d5b4a:	89 c2                	mov    %eax,%edx
 85d5b4c:	c1 fa 1f             	sar    $0x1f,%edx
 85d5b4f:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5b53:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5b57:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5b5b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5b5f:	89 04 24             	mov    %eax,(%esp)
 85d5b62:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5b66:	e8 5b a3 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5b6b:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5b6e:	89 42 30             	mov    %eax,0x30(%edx)
 85d5b71:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5b74:	8b 40 54             	mov    0x54(%eax),%eax
 85d5b77:	89 c6                	mov    %eax,%esi
 85d5b79:	89 c7                	mov    %eax,%edi
 85d5b7b:	c1 ff 1f             	sar    $0x1f,%edi
 85d5b7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5b81:	8b 40 34             	mov    0x34(%eax),%eax
 85d5b84:	89 c1                	mov    %eax,%ecx
 85d5b86:	89 c3                	mov    %eax,%ebx
 85d5b88:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5b8b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5b8e:	8b 40 34             	mov    0x34(%eax),%eax
 85d5b91:	89 c2                	mov    %eax,%edx
 85d5b93:	c1 fa 1f             	sar    $0x1f,%edx
 85d5b96:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5b9a:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5b9e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5ba2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5ba6:	89 04 24             	mov    %eax,(%esp)
 85d5ba9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5bad:	e8 14 a3 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5bb2:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5bb5:	89 42 34             	mov    %eax,0x34(%edx)
 85d5bb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5bbb:	8b 40 54             	mov    0x54(%eax),%eax
 85d5bbe:	89 c6                	mov    %eax,%esi
 85d5bc0:	89 c7                	mov    %eax,%edi
 85d5bc2:	c1 ff 1f             	sar    $0x1f,%edi
 85d5bc5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5bc8:	8b 40 38             	mov    0x38(%eax),%eax
 85d5bcb:	89 c1                	mov    %eax,%ecx
 85d5bcd:	89 c3                	mov    %eax,%ebx
 85d5bcf:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5bd2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5bd5:	8b 40 38             	mov    0x38(%eax),%eax
 85d5bd8:	89 c2                	mov    %eax,%edx
 85d5bda:	c1 fa 1f             	sar    $0x1f,%edx
 85d5bdd:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5be1:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5be5:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5be9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5bed:	89 04 24             	mov    %eax,(%esp)
 85d5bf0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5bf4:	e8 cd a2 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5bf9:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5bfc:	89 42 38             	mov    %eax,0x38(%edx)
 85d5bff:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5c02:	8b 40 54             	mov    0x54(%eax),%eax
 85d5c05:	89 c6                	mov    %eax,%esi
 85d5c07:	89 c7                	mov    %eax,%edi
 85d5c09:	c1 ff 1f             	sar    $0x1f,%edi
 85d5c0c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5c0f:	8b 40 3c             	mov    0x3c(%eax),%eax
 85d5c12:	89 c1                	mov    %eax,%ecx
 85d5c14:	89 c3                	mov    %eax,%ebx
 85d5c16:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5c19:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5c1c:	8b 40 3c             	mov    0x3c(%eax),%eax
 85d5c1f:	89 c2                	mov    %eax,%edx
 85d5c21:	c1 fa 1f             	sar    $0x1f,%edx
 85d5c24:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5c28:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5c2c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5c30:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5c34:	89 04 24             	mov    %eax,(%esp)
 85d5c37:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5c3b:	e8 86 a2 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5c40:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5c43:	89 42 3c             	mov    %eax,0x3c(%edx)
 85d5c46:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5c49:	8b 40 54             	mov    0x54(%eax),%eax
 85d5c4c:	89 c6                	mov    %eax,%esi
 85d5c4e:	89 c7                	mov    %eax,%edi
 85d5c50:	c1 ff 1f             	sar    $0x1f,%edi
 85d5c53:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5c56:	8b 40 40             	mov    0x40(%eax),%eax
 85d5c59:	89 c1                	mov    %eax,%ecx
 85d5c5b:	89 c3                	mov    %eax,%ebx
 85d5c5d:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5c60:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5c63:	8b 40 40             	mov    0x40(%eax),%eax
 85d5c66:	89 c2                	mov    %eax,%edx
 85d5c68:	c1 fa 1f             	sar    $0x1f,%edx
 85d5c6b:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5c6f:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5c73:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5c77:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5c7b:	89 04 24             	mov    %eax,(%esp)
 85d5c7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5c82:	e8 3f a2 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5c87:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5c8a:	89 42 40             	mov    %eax,0x40(%edx)
 85d5c8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5c90:	8b 40 54             	mov    0x54(%eax),%eax
 85d5c93:	89 c6                	mov    %eax,%esi
 85d5c95:	89 c7                	mov    %eax,%edi
 85d5c97:	c1 ff 1f             	sar    $0x1f,%edi
 85d5c9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5c9d:	8b 40 44             	mov    0x44(%eax),%eax
 85d5ca0:	89 c1                	mov    %eax,%ecx
 85d5ca2:	89 c3                	mov    %eax,%ebx
 85d5ca4:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5caa:	8b 40 44             	mov    0x44(%eax),%eax
 85d5cad:	89 c2                	mov    %eax,%edx
 85d5caf:	c1 fa 1f             	sar    $0x1f,%edx
 85d5cb2:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5cb6:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5cba:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5cbe:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5cc2:	89 04 24             	mov    %eax,(%esp)
 85d5cc5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5cc9:	e8 f8 a1 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5cce:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5cd1:	89 42 44             	mov    %eax,0x44(%edx)
 85d5cd4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5cd7:	8b 40 54             	mov    0x54(%eax),%eax
 85d5cda:	89 c6                	mov    %eax,%esi
 85d5cdc:	89 c7                	mov    %eax,%edi
 85d5cde:	c1 ff 1f             	sar    $0x1f,%edi
 85d5ce1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5ce4:	8b 40 48             	mov    0x48(%eax),%eax
 85d5ce7:	89 c1                	mov    %eax,%ecx
 85d5ce9:	89 c3                	mov    %eax,%ebx
 85d5ceb:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5cee:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5cf1:	8b 40 48             	mov    0x48(%eax),%eax
 85d5cf4:	89 c2                	mov    %eax,%edx
 85d5cf6:	c1 fa 1f             	sar    $0x1f,%edx
 85d5cf9:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5cfd:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5d01:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5d05:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5d09:	89 04 24             	mov    %eax,(%esp)
 85d5d0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5d10:	e8 b1 a1 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5d15:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5d18:	89 42 48             	mov    %eax,0x48(%edx)
 85d5d1b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5d1e:	8b 40 54             	mov    0x54(%eax),%eax
 85d5d21:	89 c6                	mov    %eax,%esi
 85d5d23:	89 c7                	mov    %eax,%edi
 85d5d25:	c1 ff 1f             	sar    $0x1f,%edi
 85d5d28:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5d2b:	8b 40 4c             	mov    0x4c(%eax),%eax
 85d5d2e:	89 c1                	mov    %eax,%ecx
 85d5d30:	89 c3                	mov    %eax,%ebx
 85d5d32:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5d35:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5d38:	8b 40 4c             	mov    0x4c(%eax),%eax
 85d5d3b:	89 c2                	mov    %eax,%edx
 85d5d3d:	c1 fa 1f             	sar    $0x1f,%edx
 85d5d40:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5d44:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5d48:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5d4c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5d50:	89 04 24             	mov    %eax,(%esp)
 85d5d53:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5d57:	e8 6a a1 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5d5c:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5d5f:	89 42 4c             	mov    %eax,0x4c(%edx)
 85d5d62:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5d65:	8b 40 54             	mov    0x54(%eax),%eax
 85d5d68:	89 c6                	mov    %eax,%esi
 85d5d6a:	89 c7                	mov    %eax,%edi
 85d5d6c:	c1 ff 1f             	sar    $0x1f,%edi
 85d5d6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d5d72:	8b 40 50             	mov    0x50(%eax),%eax
 85d5d75:	89 c1                	mov    %eax,%ecx
 85d5d77:	89 c3                	mov    %eax,%ebx
 85d5d79:	c1 fb 1f             	sar    $0x1f,%ebx
 85d5d7c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5d7f:	8b 40 50             	mov    0x50(%eax),%eax
 85d5d82:	89 c2                	mov    %eax,%edx
 85d5d84:	c1 fa 1f             	sar    $0x1f,%edx
 85d5d87:	89 74 24 10          	mov    %esi,0x10(%esp)
 85d5d8b:	89 7c 24 14          	mov    %edi,0x14(%esp)
 85d5d8f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85d5d93:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85d5d97:	89 04 24             	mov    %eax,(%esp)
 85d5d9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85d5d9e:	e8 23 a1 00 00       	call   85dfec6 <_Z18AverageIncrementalIixET_T0_S1_S1_>
 85d5da3:	8b 55 08             	mov    0x8(%ebp),%edx
 85d5da6:	89 42 50             	mov    %eax,0x50(%edx)
 85d5da9:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5dac:	8b 40 54             	mov    0x54(%eax),%eax
 85d5daf:	8d 50 01             	lea    0x1(%eax),%edx
 85d5db2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5db5:	89 50 54             	mov    %edx,0x54(%eax)
 85d5db8:	83 c4 3c             	add    $0x3c,%esp
 85d5dbb:	5b                   	pop    %ebx
 85d5dbc:	5e                   	pop    %esi
 85d5dbd:	5f                   	pop    %edi
 85d5dbe:	5d                   	pop    %ebp
 85d5dbf:	c3                   	ret

```

```c
// PvpResultType::AddNewResult @ 0x85d5944

/* PvpResultType::AddNewResult(PvpResultType const&) */

void __thiscall PvpResultType::AddNewResult(PvpResultType *this,PvpResultType *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x54) == 0) {
    uVar1 = *(undefined4 *)(this + 0x58);
    Set(this,param_1);
    *(undefined4 *)(this + 0x58) = uVar1;
  }
  else {
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x18),(longlong)*(int *)(param_1 + 0x18),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x18) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x1c),(longlong)*(int *)(param_1 + 0x1c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x1c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x20),(longlong)*(int *)(param_1 + 0x20),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x20) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x24),(longlong)*(int *)(param_1 + 0x24),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x24) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x28),(longlong)*(int *)(param_1 + 0x28),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x28) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x2c),(longlong)*(int *)(param_1 + 0x2c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x2c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x30),(longlong)*(int *)(param_1 + 0x30),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x30) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x34),(longlong)*(int *)(param_1 + 0x34),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x34) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x38),(longlong)*(int *)(param_1 + 0x38),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x38) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x3c),(longlong)*(int *)(param_1 + 0x3c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x3c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x40),(longlong)*(int *)(param_1 + 0x40),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x40) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x44),(longlong)*(int *)(param_1 + 0x44),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x44) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x48),(longlong)*(int *)(param_1 + 0x48),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x48) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x4c),(longlong)*(int *)(param_1 + 0x4c),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x4c) = iVar2;
    iVar2 = AverageIncremental<int,long_long>
                      ((longlong)*(int *)(this + 0x50),(longlong)*(int *)(param_1 + 0x50),
                       (longlong)*(int *)(this + 0x54));
    *(int *)(this + 0x50) = iVar2;
  }
  *(int *)(this + 0x54) = *(int *)(this + 0x54) + 1;
  return;
}

```

---

## Clear

```asm
// === 085d5dc0 PvpResultType::Clear  [0x085d5dc0-0x85d5efd] ===
 85d5dc0:	55                   	push   %ebp
 85d5dc1:	89 e5                	mov    %esp,%ebp
 85d5dc3:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5dc6:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85d5dcc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5dcf:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85d5dd6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5dd9:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 85d5de0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5de3:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 85d5dea:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ded:	c7 40 10 ff ff ff ff 	movl   $0xffffffff,0x10(%eax)
 85d5df4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5df7:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 85d5dfe:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e01:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 85d5e08:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e0b:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 85d5e12:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e15:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 85d5e1c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e1f:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 85d5e26:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e29:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 85d5e30:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e33:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 85d5e3a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e3d:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 85d5e44:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e47:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 85d5e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e51:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 85d5e58:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e5b:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 85d5e62:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e65:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 85d5e6c:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e6f:	c7 40 48 00 00 00 00 	movl   $0x0,0x48(%eax)
 85d5e76:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e79:	c7 40 4c 00 00 00 00 	movl   $0x0,0x4c(%eax)
 85d5e80:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e83:	c7 40 50 00 00 00 00 	movl   $0x0,0x50(%eax)
 85d5e8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e8d:	c7 40 54 00 00 00 00 	movl   $0x0,0x54(%eax)
 85d5e94:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5e97:	c7 40 58 00 00 00 00 	movl   $0x0,0x58(%eax)
 85d5e9e:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ea1:	c7 40 5c 00 00 00 00 	movl   $0x0,0x5c(%eax)
 85d5ea8:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5eab:	c7 40 6c 00 00 00 00 	movl   $0x0,0x6c(%eax)
 85d5eb2:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5eb5:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 85d5ebc:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ebf:	c7 40 74 00 00 00 00 	movl   $0x0,0x74(%eax)
 85d5ec6:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ec9:	c7 40 78 00 00 00 00 	movl   $0x0,0x78(%eax)
 85d5ed0:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ed3:	c7 40 60 00 00 00 00 	movl   $0x0,0x60(%eax)
 85d5eda:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5edd:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 85d5ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ee7:	c7 40 7c 00 00 00 00 	movl   $0x0,0x7c(%eax)
 85d5eee:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5ef1:	c7 80 80 00 00 00 00 	movl   $0x0,0x80(%eax)
 85d5ef8:	00 00 00 
 85d5efb:	5d                   	pop    %ebp
 85d5efc:	c3                   	ret
 85d5efd:	90                   	nop

```

```c
// PvpResultType::Clear @ 0x85d5dc0

/* PvpResultType::Clear() */

void __thiscall PvpResultType::Clear(PvpResultType *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x6c) = 0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  return;
}

```

---

## Get

```asm
// === 085d5924 PvpResultType::Get  [0x085d5924-0x85d5943] ===
 85d5924:	55                   	push   %ebp
 85d5925:	89 e5                	mov    %esp,%ebp
 85d5927:	57                   	push   %edi
 85d5928:	56                   	push   %esi
 85d5929:	53                   	push   %ebx
 85d592a:	8b 55 0c             	mov    0xc(%ebp),%edx
 85d592d:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5930:	89 c3                	mov    %eax,%ebx
 85d5932:	b8 21 00 00 00       	mov    $0x21,%eax
 85d5937:	89 d7                	mov    %edx,%edi
 85d5939:	89 de                	mov    %ebx,%esi
 85d593b:	89 c1                	mov    %eax,%ecx
 85d593d:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85d593f:	5b                   	pop    %ebx
 85d5940:	5e                   	pop    %esi
 85d5941:	5f                   	pop    %edi
 85d5942:	5d                   	pop    %ebp
 85d5943:	c3                   	ret

```

```c
// PvpResultType::Get @ 0x85d5924

/* PvpResultType::Get(PvpResultType&) const */

void __thiscall PvpResultType::Get(PvpResultType *this,PvpResultType *param_1)

{
  int iVar1;
  
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)param_1 = *(undefined4 *)this;
    this = this + 4;
    param_1 = param_1 + 4;
  }
  return;
}

```

---

## GetTotalScore

```asm
// === 085d5efe PvpResultType::GetTotalScore  [0x085d5efe-0x85d5f41] ===
 85d5efe:	55                   	push   %ebp
 85d5eff:	89 e5                	mov    %esp,%ebp
 85d5f01:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f04:	8b 50 44             	mov    0x44(%eax),%edx
 85d5f07:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f0a:	8b 40 48             	mov    0x48(%eax),%eax
 85d5f0d:	01 c2                	add    %eax,%edx
 85d5f0f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f12:	8b 40 4c             	mov    0x4c(%eax),%eax
 85d5f15:	01 c2                	add    %eax,%edx
 85d5f17:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f1a:	8b 40 50             	mov    0x50(%eax),%eax
 85d5f1d:	01 c2                	add    %eax,%edx
 85d5f1f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f22:	8b 40 6c             	mov    0x6c(%eax),%eax
 85d5f25:	01 c2                	add    %eax,%edx
 85d5f27:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f2a:	8b 40 70             	mov    0x70(%eax),%eax
 85d5f2d:	01 c2                	add    %eax,%edx
 85d5f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f32:	8b 40 74             	mov    0x74(%eax),%eax
 85d5f35:	01 c2                	add    %eax,%edx
 85d5f37:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5f3a:	8b 40 78             	mov    0x78(%eax),%eax
 85d5f3d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85d5f40:	5d                   	pop    %ebp
 85d5f41:	c3                   	ret

```

```c
// PvpResultType::GetTotalScore @ 0x85d5efe

/* PvpResultType::GetTotalScore() const */

int __thiscall PvpResultType::GetTotalScore(PvpResultType *this)

{
  return *(int *)(this + 0x44) + *(int *)(this + 0x48) + *(int *)(this + 0x4c) +
         *(int *)(this + 0x50) + *(int *)(this + 0x6c) + *(int *)(this + 0x70) +
         *(int *)(this + 0x74) + *(int *)(this + 0x78);
}

```

---

## PvpResultType

```asm
// === 085d58da PvpResultType::PvpResultType  [0x085d58da-0x85d58df] ===
 85d58da:	55                   	push   %ebp
 85d58db:	89 e5                	mov    %esp,%ebp
 85d58dd:	5d                   	pop    %ebp
 85d58de:	c3                   	ret
 85d58df:	90                   	nop

```

```c
// PvpResultType::PvpResultType @ 0x85d58da

/* PvpResultType::PvpResultType() */

void __thiscall PvpResultType::PvpResultType(PvpResultType *this)

{
  return;
}

```

---

## Set

```asm
// === 085d58e6 PvpResultType::Set  [0x085d58e6-0x85d5923] ===
 85d58e6:	55                   	push   %ebp
 85d58e7:	89 e5                	mov    %esp,%ebp
 85d58e9:	57                   	push   %edi
 85d58ea:	56                   	push   %esi
 85d58eb:	53                   	push   %ebx
 85d58ec:	8b 55 08             	mov    0x8(%ebp),%edx
 85d58ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 85d58f2:	89 c3                	mov    %eax,%ebx
 85d58f4:	b8 21 00 00 00       	mov    $0x21,%eax
 85d58f9:	89 d7                	mov    %edx,%edi
 85d58fb:	89 de                	mov    %ebx,%esi
 85d58fd:	89 c1                	mov    %eax,%ecx
 85d58ff:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85d5901:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5904:	8b 40 08             	mov    0x8(%eax),%eax
 85d5907:	85 c0                	test   %eax,%eax
 85d5909:	79 14                	jns    85d591f <_ZN13PvpResultType3SetERKS_+0x39>
 85d590b:	8b 45 08             	mov    0x8(%ebp),%eax
 85d590e:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 85d5915:	8b 45 08             	mov    0x8(%ebp),%eax
 85d5918:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 85d591f:	5b                   	pop    %ebx
 85d5920:	5e                   	pop    %esi
 85d5921:	5f                   	pop    %edi
 85d5922:	5d                   	pop    %ebp
 85d5923:	c3                   	ret

```

```c
// PvpResultType::Set @ 0x85d58e6

/* PvpResultType::Set(PvpResultType const&) */

void __thiscall PvpResultType::Set(PvpResultType *this,PvpResultType *param_1)

{
  int iVar1;
  PvpResultType *pPVar2;
  
  pPVar2 = this;
  for (iVar1 = 0x21; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pPVar2 = *(undefined4 *)param_1;
    param_1 = param_1 + 4;
    pPVar2 = pPVar2 + 4;
  }
  if (*(int *)(this + 8) < 0) {
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0x14) = 0;
  }
  return;
}

```

---

## ~PvpResultType

```asm
// === 085d58e0 PvpResultType::~PvpResultType  [0x085d58e0-0x85d58e5] ===
 85d58e0:	55                   	push   %ebp
 85d58e1:	89 e5                	mov    %esp,%ebp
 85d58e3:	5d                   	pop    %ebp
 85d58e4:	c3                   	ret
 85d58e5:	90                   	nop

```

```c
// PvpResultType::~PvpResultType @ 0x85d58e0

/* PvpResultType::~PvpResultType() */

void __thiscall PvpResultType::~PvpResultType(PvpResultType *this)

{
  return;
}

```

