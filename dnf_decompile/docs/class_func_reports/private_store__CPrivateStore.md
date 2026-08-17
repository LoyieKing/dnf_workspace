# private_store__CPrivateStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 36

---

## AddItem

```asm
// === 085c6d48 private_store::CPrivateStore::AddItem  [0x085c6d48-0x85c7245] ===
 85c6d48:	55                   	push   %ebp
 85c6d49:	89 e5                	mov    %esp,%ebp
 85c6d4b:	53                   	push   %ebx
 85c6d4c:	81 ec 84 00 00 00    	sub    $0x84,%esp
 85c6d52:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6d55:	89 04 24             	mov    %eax,(%esp)
 85c6d58:	e8 87 d8 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c6d5d:	84 c0                	test   %al,%al
 85c6d5f:	0f 84 4c 01 00 00    	je     85c6eb1 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x169>
 85c6d65:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6d68:	89 04 24             	mov    %eax,(%esp)
 85c6d6b:	e8 88 4b 00 00       	call   85cb8f8 <_ZN13private_store13CPrivateStore13GetDollItemIDEv>
 85c6d70:	89 c3                	mov    %eax,%ebx
 85c6d72:	e8 24 54 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c6d77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c6d7b:	89 04 24             	mov    %eax,(%esp)
 85c6d7e:	e8 af 8c d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c6d83:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85c6d86:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85c6d8a:	75 45                	jne    85c6dd1 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x89>
 85c6d8c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6d8f:	89 04 24             	mov    %eax,(%esp)
 85c6d92:	e8 61 4b 00 00       	call   85cb8f8 <_ZN13private_store13CPrivateStore13GetDollItemIDEv>
 85c6d97:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c6d9b:	c7 44 24 10 8c d3 cb 	movl   $0x8cbd38c,0x10(%esp)
 85c6da2:	08 
 85c6da3:	c7 44 24 0c 50 05 00 	movl   $0x550,0xc(%esp)
 85c6daa:	00 
 85c6dab:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6db2:	08 
 85c6db3:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6dba:	08 
 85c6dbb:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6dc2:	e8 43 ce 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6dc7:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6dcc:	e9 70 04 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6dd1:	e8 c5 53 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c6dd6:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c6ddd:	00 
 85c6dde:	89 04 24             	mov    %eax,(%esp)
 85c6de1:	e8 0c 48 c6 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 85c6de6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85c6de9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c6dec:	8b 80 2c 03 00 00    	mov    0x32c(%eax),%eax
 85c6df2:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c6df6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c6df9:	89 04 24             	mov    %eax,(%esp)
 85c6dfc:	e8 05 45 00 00       	call   85cb306 <_ZN17STExpertJobScript15GetShopDollSlotEi>
 85c6e01:	98                   	cwtl
 85c6e02:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c6e05:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c6e09:	7f 43                	jg     85c6e4e <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x106>
 85c6e0b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c6e0e:	8b 80 2c 03 00 00    	mov    0x32c(%eax),%eax
 85c6e14:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c6e18:	c7 44 24 10 c4 d3 cb 	movl   $0x8cbd3c4,0x10(%esp)
 85c6e1f:	08 
 85c6e20:	c7 44 24 0c 59 05 00 	movl   $0x559,0xc(%esp)
 85c6e27:	00 
 85c6e28:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6e2f:	08 
 85c6e30:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6e37:	08 
 85c6e38:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6e3f:	e8 c6 cd 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6e44:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6e49:	e9 f3 03 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6e4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6e51:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c6e55:	98                   	cwtl
 85c6e56:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85c6e59:	7c 56                	jl     85c6eb1 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x169>
 85c6e5b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c6e5e:	8b 90 2c 03 00 00    	mov    0x32c(%eax),%edx
 85c6e64:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6e67:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c6e6b:	98                   	cwtl
 85c6e6c:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85c6e6f:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85c6e73:	89 54 24 18          	mov    %edx,0x18(%esp)
 85c6e77:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c6e7b:	c7 44 24 10 fc d3 cb 	movl   $0x8cbd3fc,0x10(%esp)
 85c6e82:	08 
 85c6e83:	c7 44 24 0c 5f 05 00 	movl   $0x55f,0xc(%esp)
 85c6e8a:	00 
 85c6e8b:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6e92:	08 
 85c6e93:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6e9a:	08 
 85c6e9b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6ea2:	e8 63 cd 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6ea7:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6eac:	e9 90 03 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6eb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6eb4:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c6eb8:	66 83 f8 06          	cmp    $0x6,%ax
 85c6ebc:	7e 42                	jle    85c6f00 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x1b8>
 85c6ebe:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6ec1:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c6ec5:	98                   	cwtl
 85c6ec6:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c6eca:	c7 44 24 10 50 d4 cb 	movl   $0x8cbd450,0x10(%esp)
 85c6ed1:	08 
 85c6ed2:	c7 44 24 0c 66 05 00 	movl   $0x566,0xc(%esp)
 85c6ed9:	00 
 85c6eda:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6ee1:	08 
 85c6ee2:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6ee9:	08 
 85c6eea:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6ef1:	e8 14 cd 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6ef6:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6efb:	e9 41 03 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6f00:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6f03:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6f06:	85 c0                	test   %eax,%eax
 85c6f08:	75 36                	jne    85c6f40 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x1f8>
 85c6f0a:	c7 44 24 10 7c d4 cb 	movl   $0x8cbd47c,0x10(%esp)
 85c6f11:	08 
 85c6f12:	c7 44 24 0c 6c 05 00 	movl   $0x56c,0xc(%esp)
 85c6f19:	00 
 85c6f1a:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6f21:	08 
 85c6f22:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6f29:	08 
 85c6f2a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6f31:	e8 d4 cc 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6f36:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6f3b:	e9 01 03 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6f40:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6f43:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6f46:	89 04 24             	mov    %eax,(%esp)
 85c6f49:	e8 e4 94 b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c6f4e:	85 c0                	test   %eax,%eax
 85c6f50:	0f 94 c0             	sete   %al
 85c6f53:	84 c0                	test   %al,%al
 85c6f55:	74 36                	je     85c6f8d <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x245>
 85c6f57:	c7 44 24 10 ac d4 cb 	movl   $0x8cbd4ac,0x10(%esp)
 85c6f5e:	08 
 85c6f5f:	c7 44 24 0c 72 05 00 	movl   $0x572,0xc(%esp)
 85c6f66:	00 
 85c6f67:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6f6e:	08 
 85c6f6f:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6f76:	08 
 85c6f77:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6f7e:	e8 87 cc 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6f83:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6f88:	e9 b4 02 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6f8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6f90:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6f93:	89 04 24             	mov    %eax,(%esp)
 85c6f96:	e8 e3 32 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c6f9b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c6f9e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85c6fa2:	75 36                	jne    85c6fda <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x292>
 85c6fa4:	c7 44 24 10 e4 d4 cb 	movl   $0x8cbd4e4,0x10(%esp)
 85c6fab:	08 
 85c6fac:	c7 44 24 0c 79 05 00 	movl   $0x579,0xc(%esp)
 85c6fb3:	00 
 85c6fb4:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c6fbb:	08 
 85c6fbc:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6fc3:	08 
 85c6fc4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6fcb:	e8 3a cc 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6fd0:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6fd5:	e9 67 02 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c6fda:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6fdd:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6fe1:	0f bf d8             	movswl %ax,%ebx
 85c6fe4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6fe7:	0f b6 40 46          	movzbl 0x46(%eax),%eax
 85c6feb:	0f be c0             	movsbl %al,%eax
 85c6fee:	89 04 24             	mov    %eax,(%esp)
 85c6ff1:	e8 4f 08 b3 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 85c6ff6:	89 c2                	mov    %eax,%edx
 85c6ff8:	8d 45 a7             	lea    -0x59(%ebp),%eax
 85c6ffb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c6fff:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c7003:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85c7006:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c700a:	89 04 24             	mov    %eax,(%esp)
 85c700d:	e8 06 49 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85c7012:	83 ec 04             	sub    $0x4,%esp
 85c7015:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85c701c:	8b 45 a9             	mov    -0x57(%ebp),%eax
 85c701f:	89 c3                	mov    %eax,%ebx
 85c7021:	e8 75 51 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c7026:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c702a:	89 04 24             	mov    %eax,(%esp)
 85c702d:	e8 00 8a d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c7032:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85c7035:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85c7039:	0f 94 c0             	sete   %al
 85c703c:	84 c0                	test   %al,%al
 85c703e:	74 3d                	je     85c707d <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x335>
 85c7040:	8b 45 a9             	mov    -0x57(%ebp),%eax
 85c7043:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c7047:	c7 44 24 10 14 d5 cb 	movl   $0x8cbd514,0x10(%esp)
 85c704e:	08 
 85c704f:	c7 44 24 0c 82 05 00 	movl   $0x582,0xc(%esp)
 85c7056:	00 
 85c7057:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c705e:	08 
 85c705f:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c7066:	08 
 85c7067:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c706e:	e8 97 cb 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c7073:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7078:	e9 c4 01 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c707d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c7080:	89 04 24             	mov    %eax,(%esp)
 85c7083:	e8 ce 57 c6 ff       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 85c7088:	85 c0                	test   %eax,%eax
 85c708a:	0f 9f c0             	setg   %al
 85c708d:	84 c0                	test   %al,%al
 85c708f:	74 4c                	je     85c70dd <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x395>
 85c7091:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c7094:	89 04 24             	mov    %eax,(%esp)
 85c7097:	e8 ba 57 c6 ff       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 85c709c:	8b 55 a9             	mov    -0x57(%ebp),%edx
 85c709f:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c70a3:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c70a7:	c7 44 24 10 4c d5 cb 	movl   $0x8cbd54c,0x10(%esp)
 85c70ae:	08 
 85c70af:	c7 44 24 0c b8 05 00 	movl   $0x5b8,0xc(%esp)
 85c70b6:	00 
 85c70b7:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c70be:	08 
 85c70bf:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c70c6:	08 
 85c70c7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c70ce:	e8 37 cb 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c70d3:	b8 00 00 00 00       	mov    $0x0,%eax
 85c70d8:	e9 64 01 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c70dd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c70e0:	8b 00                	mov    (%eax),%eax
 85c70e2:	83 c0 10             	add    $0x10,%eax
 85c70e5:	8b 10                	mov    (%eax),%edx
 85c70e7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c70ea:	89 04 24             	mov    %eax,(%esp)
 85c70ed:	ff d2                	call   *%edx
 85c70ef:	84 c0                	test   %al,%al
 85c70f1:	74 4c                	je     85c713f <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x3f7>
 85c70f3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c70f6:	89 04 24             	mov    %eax,(%esp)
 85c70f9:	e8 58 57 c6 ff       	call   822c856 <_ZNK5CItem12GetCashPriceEv>
 85c70fe:	8b 55 a9             	mov    -0x57(%ebp),%edx
 85c7101:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c7105:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c7109:	c7 44 24 10 94 d5 cb 	movl   $0x8cbd594,0x10(%esp)
 85c7110:	08 
 85c7111:	c7 44 24 0c be 05 00 	movl   $0x5be,0xc(%esp)
 85c7118:	00 
 85c7119:	c7 44 24 08 60 e7 cb 	movl   $0x8cbe760,0x8(%esp)
 85c7120:	08 
 85c7121:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c7128:	08 
 85c7129:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c7130:	e8 d5 ca 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c7135:	b8 00 00 00 00       	mov    $0x0,%eax
 85c713a:	e9 02 01 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c713f:	8d 45 a7             	lea    -0x59(%ebp),%eax
 85c7142:	83 c0 33             	add    $0x33,%eax
 85c7145:	89 04 24             	mov    %eax,(%esp)
 85c7148:	e8 bd 99 b4 ff       	call   8110b0a <_ZNK19UpgradeSeparateInfo18IsTradeRestrictionEv>
 85c714d:	84 c0                	test   %al,%al
 85c714f:	0f 95 c0             	setne  %al
 85c7152:	84 c0                	test   %al,%al
 85c7154:	74 0a                	je     85c7160 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x418>
 85c7156:	b8 00 00 00 00       	mov    $0x0,%eax
 85c715b:	e9 e1 00 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c7160:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7163:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c7167:	66 83 f8 0d          	cmp    $0xd,%ax
 85c716b:	7f 0c                	jg     85c7179 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x431>
 85c716d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7170:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c7174:	66 85 c0             	test   %ax,%ax
 85c7177:	79 0a                	jns    85c7183 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x43b>
 85c7179:	b8 00 00 00 00       	mov    $0x0,%eax
 85c717e:	e9 be 00 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c7183:	83 7d 10 0d          	cmpl   $0xd,0x10(%ebp)
 85c7187:	7f 06                	jg     85c718f <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x447>
 85c7189:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85c718d:	79 0a                	jns    85c7199 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x451>
 85c718f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7194:	e9 a8 00 00 00       	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c7199:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 85c719d:	75 0b                	jne    85c71aa <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x462>
 85c719f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c71a2:	89 04 24             	mov    %eax,(%esp)
 85c71a5:	e8 a8 dd ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c71aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c71ad:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c71b1:	98                   	cwtl
 85c71b2:	8b 55 08             	mov    0x8(%ebp),%edx
 85c71b5:	83 c2 3c             	add    $0x3c,%edx
 85c71b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c71bc:	89 14 24             	mov    %edx,(%esp)
 85c71bf:	e8 42 5d 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c71c4:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85c71c8:	84 c0                	test   %al,%al
 85c71ca:	0f 95 c0             	setne  %al
 85c71cd:	84 c0                	test   %al,%al
 85c71cf:	74 07                	je     85c71d8 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x490>
 85c71d1:	b8 00 00 00 00       	mov    $0x0,%eax
 85c71d6:	eb 69                	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c71d8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c71db:	0f b6 40 46          	movzbl 0x46(%eax),%eax
 85c71df:	3c 03                	cmp    $0x3,%al
 85c71e1:	75 07                	jne    85c71ea <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4a2>
 85c71e3:	b8 00 00 00 00       	mov    $0x0,%eax
 85c71e8:	eb 57                	jmp    85c7241 <_ZN13private_store13CPrivateStore7AddItemERNS_16PrivateStoreItemEi+0x4f9>
 85c71ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c71ed:	c6 40 3d 01          	movb   $0x1,0x3d(%eax)
 85c71f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c71f4:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c71f8:	98                   	cwtl
 85c71f9:	8b 55 08             	mov    0x8(%ebp),%edx
 85c71fc:	83 c2 3c             	add    $0x3c,%edx
 85c71ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7203:	89 14 24             	mov    %edx,(%esp)
 85c7206:	e8 fb 5c 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c720b:	89 04 24             	mov    %eax,(%esp)
 85c720e:	e8 87 d3 c6 ff       	call   823459a <_ZN13private_store16PrivateStoreItem5ResetEv>
 85c7213:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7216:	0f b7 40 44          	movzwl 0x44(%eax),%eax
 85c721a:	98                   	cwtl
 85c721b:	8b 55 08             	mov    0x8(%ebp),%edx
 85c721e:	83 c2 3c             	add    $0x3c,%edx
 85c7221:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7225:	89 14 24             	mov    %edx,(%esp)
 85c7228:	e8 d9 5c 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c722d:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c7230:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7234:	89 04 24             	mov    %eax,(%esp)
 85c7237:	e8 32 44 00 00       	call   85cb66e <_ZN13private_store16PrivateStoreItemaSERKS0_>
 85c723c:	b8 01 00 00 00       	mov    $0x1,%eax
 85c7241:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85c7244:	c9                   	leave
 85c7245:	c3                   	ret

```

```c
// private_store::CPrivateStore::AddItem @ 0x85c6d48

/* private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int) */

undefined4 __thiscall
private_store::CPrivateStore::AddItem(CPrivateStore *this,PrivateStoreItem *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CDataManager *pCVar4;
  undefined4 uVar5;
  int iVar6;
  PrivateStoreItem *pPVar7;
  int iVar8;
  undefined1 local_5d [2];
  int local_5b;
  UpgradeSeparateInfo aUStack_2a [10];
  int local_20;
  CItem *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  cVar1 = isDollCreated(this);
  if (cVar1 != '\0') {
    iVar3 = GetDollItemID(this);
    pCVar4 = (CDataManager *)G_CDataManager();
    local_18 = CDataManager::find_item(pCVar4,iVar3);
    if (local_18 == 0) {
      uVar5 = GetDollItemID(this);
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x550,"CPrivateStore::AddItem ERROR : shop_doll_item_id(%d)",uVar5);
      return 0;
    }
    iVar3 = G_CDataManager();
    local_14 = CDataManager::GetExpertJobScript(iVar3);
    sVar2 = STExpertJobScript::GetShopDollSlot(local_14);
    local_10 = (int)sVar2;
    if (local_10 < 1) {
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x559,"CPrivateStore::AddItem ERROR : shop_doll_item_index(%d)",
                 *(undefined4 *)(local_18 + 0x32c));
      return 0;
    }
    if (local_10 <= *(short *)(param_1 + 0x44)) {
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x55f,
                 "CPrivateStore::AddItem ERROR : slot_no(%d), shop_doll_item_index(%d), maxSlot(%d)"
                 ,(int)*(short *)(param_1 + 0x44),*(undefined4 *)(local_18 + 0x32c),local_10);
      return 0;
    }
  }
  if (*(short *)(param_1 + 0x44) < 7) {
    if (*(int *)(this + 0x2c) == 0) {
      LogManager::logFormat
                (1,"PrivateStore.cpp",
                 "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                 ,0x56c,"CPrivateStore::AddItem seller_ == NULL ERROR");
      uVar5 = 0;
    }
    else {
      iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c));
      if (iVar3 == 0) {
        LogManager::logFormat
                  (1,"PrivateStore.cpp",
                   "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                   ,0x572,"CPrivateStore::AddItem getCurCharacR() == NULL ERROR");
        uVar5 = 0;
      }
      else {
        local_20 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        if (local_20 == 0) {
          LogManager::logFormat
                    (1,"PrivateStore.cpp",
                     "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                     ,0x579,"CPrivateStore::AddItem inventory == NULL ERROR");
          uVar5 = 0;
        }
        else {
          iVar8 = (int)*(short *)(param_1 + 0x48);
          uVar5 = GetInvenTypeFromItemSpace((int)(char)param_1[0x46]);
          CInventory::GetInvenSlot((int)local_5d,local_20);
          iVar3 = local_5b;
          local_1c = (CItem *)0x0;
          pCVar4 = (CDataManager *)G_CDataManager();
          local_1c = (CItem *)CDataManager::find_item(pCVar4,iVar3);
          if (local_1c == (CItem *)0x0) {
            LogManager::logFormat
                      (1,"PrivateStore.cpp",
                       "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                       ,0x582,"CPrivateStore::AddItem find_item() ERROR item_id(%d)",local_5b);
            uVar5 = 0;
          }
          else {
            iVar6 = CItem::GetCashPrice(local_1c);
            if (iVar6 < 1) {
              cVar1 = (**(code **)(*(int *)local_1c + 0x10))(local_1c,iVar3,uVar5,iVar8);
              if (cVar1 == '\0') {
                cVar1 = UpgradeSeparateInfo::IsTradeRestriction(aUStack_2a);
                if (cVar1 == '\0') {
                  if ((*(short *)(param_1 + 0x44) < 0xe) && (-1 < *(short *)(param_1 + 0x44))) {
                    if ((param_2 < 0xe) && (-1 < param_2)) {
                      if (param_2 == 0) {
                        ResetItems(this);
                      }
                      iVar3 = std::
                              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                            *)(this + 0x3c),(int)*(short *)(param_1 + 0x44));
                      if (*(char *)(iVar3 + 0x3d) == '\0') {
                        if (param_1[0x46] == (PrivateStoreItem)0x3) {
                          uVar5 = 0;
                        }
                        else {
                          param_1[0x3d] = (PrivateStoreItem)0x1;
                          pPVar7 = (PrivateStoreItem *)
                                   std::
                                   vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                   ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                                 *)(this + 0x3c),(int)*(short *)(param_1 + 0x44));
                          PrivateStoreItem::Reset(pPVar7);
                          pPVar7 = (PrivateStoreItem *)
                                   std::
                                   vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                   ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                                 *)(this + 0x3c),(int)*(short *)(param_1 + 0x44));
                          PrivateStoreItem::operator=(pPVar7,param_1);
                          uVar5 = 1;
                        }
                      }
                      else {
                        uVar5 = 0;
                      }
                    }
                    else {
                      uVar5 = 0;
                    }
                  }
                  else {
                    uVar5 = 0;
                  }
                }
                else {
                  uVar5 = 0;
                }
              }
              else {
                uVar5 = CItem::GetCashPrice(local_1c);
                LogManager::logFormat
                          (1,"PrivateStore.cpp",
                           "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                           ,0x5be,
                           "CPrivateStore::AddItem IsAvatarItem() ERROR item_id(%d), cash_price(%d)"
                           ,local_5b,uVar5);
                uVar5 = 0;
              }
            }
            else {
              uVar5 = CItem::GetCashPrice(local_1c);
              LogManager::logFormat
                        (1,"PrivateStore.cpp",
                         "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
                         ,0x5b8,
                         "CPrivateStore::AddItem GetCashPrice() ERROR item_id(%d), cash_price(%d)",
                         local_5b,uVar5);
              uVar5 = 0;
            }
          }
        }
      }
    }
  }
  else {
    LogManager::logFormat
              (1,"PrivateStore.cpp",
               "virtual bool private_store::CPrivateStore::AddItem(private_store::PrivateStoreItem&, int)"
               ,0x566,"CPrivateStore::AddItem slot_no(%d) ERROR",(int)*(short *)(param_1 + 0x44));
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## BuyItem

```asm
// === 085c924c private_store::CPrivateStore::BuyItem  [0x085c924c-0x85c97e1] ===
 85c924c:	55                   	push   %ebp
 85c924d:	89 e5                	mov    %esp,%ebp
 85c924f:	57                   	push   %edi
 85c9250:	56                   	push   %esi
 85c9251:	53                   	push   %ebx
 85c9252:	81 ec ec 00 00 00    	sub    $0xec,%esp
 85c9258:	8b 45 10             	mov    0x10(%ebp),%eax
 85c925b:	89 04 24             	mov    %eax,(%esp)
 85c925e:	e8 f3 21 c6 ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 85c9263:	0f b6 c0             	movzbl %al,%eax
 85c9266:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 85c926c:	8b 45 10             	mov    0x10(%ebp),%eax
 85c926f:	89 04 24             	mov    %eax,(%esp)
 85c9272:	e8 f5 bd b2 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85c9277:	0f b6 c0             	movzbl %al,%eax
 85c927a:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 85c9280:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9283:	8b 40 07             	mov    0x7(%eax),%eax
 85c9286:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 85c928c:	8b 45 10             	mov    0x10(%ebp),%eax
 85c928f:	8b 78 02             	mov    0x2(%eax),%edi
 85c9292:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9295:	8b 40 30             	mov    0x30(%eax),%eax
 85c9298:	89 04 24             	mov    %eax,(%esp)
 85c929b:	e8 88 7d b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c92a0:	89 c6                	mov    %eax,%esi
 85c92a2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c92a5:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c92a8:	89 04 24             	mov    %eax,(%esp)
 85c92ab:	e8 78 7d b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c92b0:	89 c3                	mov    %eax,%ebx
 85c92b2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c92b9:	00 
 85c92ba:	c7 44 24 08 63 0a 00 	movl   $0xa63,0x8(%esp)
 85c92c1:	00 
 85c92c2:	c7 44 24 04 a0 e5 cb 	movl   $0x8cbe5a0,0x4(%esp)
 85c92c9:	08 
 85c92ca:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c92cd:	89 04 24             	mov    %eax,(%esp)
 85c92d0:	e8 43 64 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c92d5:	8b 45 14             	mov    0x14(%ebp),%eax
 85c92d8:	89 44 24 20          	mov    %eax,0x20(%esp)
 85c92dc:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 85c92e2:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85c92e6:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 85c92ec:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c92f0:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 85c92f6:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c92fa:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85c92fe:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c9302:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c9306:	c7 44 24 04 30 d6 cb 	movl   $0x8cbd630,0x4(%esp)
 85c930d:	08 
 85c930e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c9311:	89 04 24             	mov    %eax,(%esp)
 85c9314:	e8 6f 64 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c9319:	8b 45 10             	mov    0x10(%ebp),%eax
 85c931c:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c9320:	3c 08                	cmp    $0x8,%al
 85c9322:	0f 85 41 02 00 00    	jne    85c9569 <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x31d>
 85c9328:	8b 45 08             	mov    0x8(%ebp),%eax
 85c932b:	8b 40 30             	mov    0x30(%eax),%eax
 85c932e:	89 04 24             	mov    %eax,(%esp)
 85c9331:	e8 58 0f b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c9336:	89 c2                	mov    %eax,%edx
 85c9338:	8b 45 10             	mov    0x10(%ebp),%eax
 85c933b:	8b 08                	mov    (%eax),%ecx
 85c933d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85c9341:	8b 48 04             	mov    0x4(%eax),%ecx
 85c9344:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c9348:	8b 48 08             	mov    0x8(%eax),%ecx
 85c934b:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c934f:	8b 48 0c             	mov    0xc(%eax),%ecx
 85c9352:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85c9356:	8b 48 10             	mov    0x10(%eax),%ecx
 85c9359:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85c935d:	8b 48 14             	mov    0x14(%eax),%ecx
 85c9360:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85c9364:	8b 48 18             	mov    0x18(%eax),%ecx
 85c9367:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85c936b:	8b 48 1c             	mov    0x1c(%eax),%ecx
 85c936e:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85c9372:	8b 48 20             	mov    0x20(%eax),%ecx
 85c9375:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85c9379:	8b 48 24             	mov    0x24(%eax),%ecx
 85c937c:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85c9380:	8b 48 28             	mov    0x28(%eax),%ecx
 85c9383:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 85c9387:	8b 48 2c             	mov    0x2c(%eax),%ecx
 85c938a:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85c938e:	8b 48 30             	mov    0x30(%eax),%ecx
 85c9391:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 85c9395:	8b 48 34             	mov    0x34(%eax),%ecx
 85c9398:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 85c939c:	8b 48 38             	mov    0x38(%eax),%ecx
 85c939f:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 85c93a3:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85c93a7:	88 44 24 40          	mov    %al,0x40(%esp)
 85c93ab:	89 14 24             	mov    %edx,(%esp)
 85c93ae:	e8 41 a2 f3 ff       	call   85035f4 <_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item>
 85c93b3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85c93b6:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85c93ba:	0f 88 4f 02 00 00    	js     85c960f <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x3c3>
 85c93c0:	8b 45 10             	mov    0x10(%ebp),%eax
 85c93c3:	8b 58 07             	mov    0x7(%eax),%ebx
 85c93c6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c93c9:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c93cc:	89 04 24             	mov    %eax,(%esp)
 85c93cf:	e8 ba 0e b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c93d4:	89 04 24             	mov    %eax,(%esp)
 85c93d7:	e8 90 78 b4 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 85c93dc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c93e0:	89 04 24             	mov    %eax,(%esp)
 85c93e3:	e8 5a 06 d3 ff       	call   82f9a42 <_ZN8WongWork14CAvatarItemMgr15EraseAvatarItemEi>
 85c93e8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85c93eb:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85c93ef:	75 0a                	jne    85c93fb <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x1af>
 85c93f1:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85c93f6:	e9 db 03 00 00       	jmp    85c97d6 <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x58a>
 85c93fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c93fe:	8b 40 30             	mov    0x30(%eax),%eax
 85c9401:	89 04 24             	mov    %eax,(%esp)
 85c9404:	e8 85 0e b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c9409:	89 c2                	mov    %eax,%edx
 85c940b:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 85c9412:	00 
 85c9413:	c7 44 24 48 0b 00 00 	movl   $0xb,0x48(%esp)
 85c941a:	00 
 85c941b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c941e:	89 44 24 44          	mov    %eax,0x44(%esp)
 85c9422:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9425:	8b 08                	mov    (%eax),%ecx
 85c9427:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85c942b:	8b 48 04             	mov    0x4(%eax),%ecx
 85c942e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c9432:	8b 48 08             	mov    0x8(%eax),%ecx
 85c9435:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c9439:	8b 48 0c             	mov    0xc(%eax),%ecx
 85c943c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85c9440:	8b 48 10             	mov    0x10(%eax),%ecx
 85c9443:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85c9447:	8b 48 14             	mov    0x14(%eax),%ecx
 85c944a:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85c944e:	8b 48 18             	mov    0x18(%eax),%ecx
 85c9451:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85c9455:	8b 48 1c             	mov    0x1c(%eax),%ecx
 85c9458:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85c945c:	8b 48 20             	mov    0x20(%eax),%ecx
 85c945f:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85c9463:	8b 48 24             	mov    0x24(%eax),%ecx
 85c9466:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85c946a:	8b 48 28             	mov    0x28(%eax),%ecx
 85c946d:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 85c9471:	8b 48 2c             	mov    0x2c(%eax),%ecx
 85c9474:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85c9478:	8b 48 30             	mov    0x30(%eax),%ecx
 85c947b:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 85c947f:	8b 48 34             	mov    0x34(%eax),%ecx
 85c9482:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 85c9486:	8b 48 38             	mov    0x38(%eax),%ecx
 85c9489:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 85c948d:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85c9491:	88 44 24 40          	mov    %al,0x40(%esp)
 85c9495:	89 14 24             	mov    %edx,(%esp)
 85c9498:	e8 3b a3 f3 ff       	call   85037d8 <_ZN10CInventory28insertAvatarIntoSpecificSlotE10Inven_Itemi20eAvatarItemAddReasonb>
 85c949d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85c94a0:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 85c94a4:	0f 94 c0             	sete   %al
 85c94a7:	84 c0                	test   %al,%al
 85c94a9:	74 0a                	je     85c94b5 <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x269>
 85c94ab:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 85c94b0:	e9 21 03 00 00       	jmp    85c97d6 <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x58a>
 85c94b5:	8b 45 10             	mov    0x10(%ebp),%eax
 85c94b8:	8b 58 07             	mov    0x7(%eax),%ebx
 85c94bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c94be:	8b 40 30             	mov    0x30(%eax),%eax
 85c94c1:	89 04 24             	mov    %eax,(%esp)
 85c94c4:	e8 c5 0d b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c94c9:	89 04 24             	mov    %eax,(%esp)
 85c94cc:	e8 9b 77 b4 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 85c94d1:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85c94d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c94d8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c94dc:	89 04 24             	mov    %eax,(%esp)
 85c94df:	e8 f2 04 d3 ff       	call   82f99d6 <_ZN8WongWork14CAvatarItemMgr13AddAvatarItemEiPNS_11Avatar_ItemE>
 85c94e4:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c94e7:	0f b6 f0             	movzbl %al,%esi
 85c94ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85c94ed:	8b 40 30             	mov    0x30(%eax),%eax
 85c94f0:	89 04 24             	mov    %eax,(%esp)
 85c94f3:	e8 56 27 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c94f8:	89 c3                	mov    %eax,%ebx
 85c94fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c94fd:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9500:	89 04 24             	mov    %eax,(%esp)
 85c9503:	e8 46 27 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c9508:	8b 55 10             	mov    0x10(%ebp),%edx
 85c950b:	8b 52 07             	mov    0x7(%edx),%edx
 85c950e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c9512:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c9516:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c951a:	89 14 24             	mov    %edx,(%esp)
 85c951d:	e8 3a 70 e3 ff       	call   840055c <_ZN20DB_AvatarChangeOwner11makeRequestEjjjh>
 85c9522:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c9525:	8d 70 0a             	lea    0xa(%eax),%esi
 85c9528:	8b 45 10             	mov    0x10(%ebp),%eax
 85c952b:	8b 58 07             	mov    0x7(%eax),%ebx
 85c952e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9531:	8b 40 30             	mov    0x30(%eax),%eax
 85c9534:	89 04 24             	mov    %eax,(%esp)
 85c9537:	e8 42 0d b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c953c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c9543:	00 
 85c9544:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c9548:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c954f:	00 
 85c9550:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c9554:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 85c955b:	00 
 85c955c:	89 04 24             	mov    %eax,(%esp)
 85c955f:	e8 ca f6 f3 ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 85c9564:	e9 a6 00 00 00       	jmp    85c960f <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x3c3>
 85c9569:	8b 45 08             	mov    0x8(%ebp),%eax
 85c956c:	8b 40 30             	mov    0x30(%eax),%eax
 85c956f:	89 04 24             	mov    %eax,(%esp)
 85c9572:	e8 17 0d b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c9577:	89 c2                	mov    %eax,%edx
 85c9579:	c7 44 24 4c 00 00 00 	movl   $0x0,0x4c(%esp)
 85c9580:	00 
 85c9581:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 85c9588:	00 
 85c9589:	c7 44 24 44 11 00 00 	movl   $0x11,0x44(%esp)
 85c9590:	00 
 85c9591:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9594:	8b 08                	mov    (%eax),%ecx
 85c9596:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85c959a:	8b 48 04             	mov    0x4(%eax),%ecx
 85c959d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c95a1:	8b 48 08             	mov    0x8(%eax),%ecx
 85c95a4:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c95a8:	8b 48 0c             	mov    0xc(%eax),%ecx
 85c95ab:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85c95af:	8b 48 10             	mov    0x10(%eax),%ecx
 85c95b2:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85c95b6:	8b 48 14             	mov    0x14(%eax),%ecx
 85c95b9:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85c95bd:	8b 48 18             	mov    0x18(%eax),%ecx
 85c95c0:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 85c95c4:	8b 48 1c             	mov    0x1c(%eax),%ecx
 85c95c7:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 85c95cb:	8b 48 20             	mov    0x20(%eax),%ecx
 85c95ce:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 85c95d2:	8b 48 24             	mov    0x24(%eax),%ecx
 85c95d5:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 85c95d9:	8b 48 28             	mov    0x28(%eax),%ecx
 85c95dc:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 85c95e0:	8b 48 2c             	mov    0x2c(%eax),%ecx
 85c95e3:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 85c95e7:	8b 48 30             	mov    0x30(%eax),%ecx
 85c95ea:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 85c95ee:	8b 48 34             	mov    0x34(%eax),%ecx
 85c95f1:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 85c95f5:	8b 48 38             	mov    0x38(%eax),%ecx
 85c95f8:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 85c95fc:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85c9600:	88 44 24 40          	mov    %al,0x40(%esp)
 85c9604:	89 14 24             	mov    %edx,(%esp)
 85c9607:	e8 7a 97 f3 ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 85c960c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85c960f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85c9613:	79 08                	jns    85c961d <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x3d1>
 85c9615:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c9618:	e9 b9 01 00 00       	jmp    85c97d6 <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x58a>
 85c961d:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85c9623:	89 04 24             	mov    %eax,(%esp)
 85c9626:	e8 51 af c6 ff       	call   823457c <_ZN13private_store16PrivateStoreItemC1Ev>
 85c962b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c962e:	66 89 45 b8          	mov    %ax,-0x48(%ebp)
 85c9632:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9635:	8b 40 30             	mov    0x30(%eax),%eax
 85c9638:	8d 95 70 ff ff ff    	lea    -0x90(%ebp),%edx
 85c963e:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9642:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9646:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9649:	89 04 24             	mov    %eax,(%esp)
 85c964c:	e8 d1 08 00 00       	call   85c9f22 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE>
 85c9651:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85c9658:	8b 45 10             	mov    0x10(%ebp),%eax
 85c965b:	89 04 24             	mov    %eax,(%esp)
 85c965e:	e8 af 71 b8 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 85c9663:	84 c0                	test   %al,%al
 85c9665:	74 12                	je     85c9679 <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x42d>
 85c9667:	8b 45 20             	mov    0x20(%ebp),%eax
 85c966a:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 85c9670:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 85c9677:	eb 21                	jmp    85c969a <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi+0x44e>
 85c9679:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 85c967f:	89 04 24             	mov    %eax,(%esp)
 85c9682:	e8 b3 e1 b2 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85c9687:	8b 55 20             	mov    0x20(%ebp),%edx
 85c968a:	89 02                	mov    %eax,(%edx)
 85c968c:	8b 45 10             	mov    0x10(%ebp),%eax
 85c968f:	89 04 24             	mov    %eax,(%esp)
 85c9692:	e8 a3 e1 b2 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85c9697:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c969a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c969d:	8b 40 30             	mov    0x30(%eax),%eax
 85c96a0:	89 04 24             	mov    %eax,(%esp)
 85c96a3:	e8 80 79 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c96a8:	89 c3                	mov    %eax,%ebx
 85c96aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c96ad:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c96b0:	89 04 24             	mov    %eax,(%esp)
 85c96b3:	e8 70 79 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c96b8:	8b 55 20             	mov    0x20(%ebp),%edx
 85c96bb:	8b 12                	mov    (%edx),%edx
 85c96bd:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85c96c0:	8b 49 30             	mov    0x30(%ecx),%ecx
 85c96c3:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 85c96c9:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 85c96cd:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c96d1:	c7 44 24 14 11 00 00 	movl   $0x11,0x14(%esp)
 85c96d8:	00 
 85c96d9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c96dc:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c96e0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c96e4:	8b 45 10             	mov    0x10(%ebp),%eax
 85c96e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c96eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c96f2:	00 
 85c96f3:	89 0c 24             	mov    %ecx,(%esp)
 85c96f6:	e8 43 ac 0b 00       	call   868433e <_ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_>
 85c96fb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c96fe:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9701:	89 04 24             	mov    %eax,(%esp)
 85c9704:	e8 f7 70 c6 ff       	call   8230800 <_ZN5CUser8getHadesEv>
 85c9709:	8d 55 bc             	lea    -0x44(%ebp),%edx
 85c970c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9710:	89 04 24             	mov    %eax,(%esp)
 85c9713:	e8 5c 00 ef ff       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 85c9718:	8b 45 08             	mov    0x8(%ebp),%eax
 85c971b:	8b 40 30             	mov    0x30(%eax),%eax
 85c971e:	89 04 24             	mov    %eax,(%esp)
 85c9721:	e8 58 0b b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c9726:	89 04 24             	mov    %eax,(%esp)
 85c9729:	e8 a8 b0 b6 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 85c972e:	89 c7                	mov    %eax,%edi
 85c9730:	8b 75 14             	mov    0x14(%ebp),%esi
 85c9733:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9736:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9739:	89 04 24             	mov    %eax,(%esp)
 85c973c:	e8 2d 0c b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c9741:	89 c3                	mov    %eax,%ebx
 85c9743:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9746:	8b 40 30             	mov    0x30(%eax),%eax
 85c9749:	89 04 24             	mov    %eax,(%esp)
 85c974c:	e8 c9 33 f2 ff       	call   84ecb1a <_ZN5CUser19getAcccountHackInfoEv>
 85c9751:	8d 55 bc             	lea    -0x44(%ebp),%edx
 85c9754:	89 54 24 18          	mov    %edx,0x18(%esp)
 85c9758:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85c975f:	00 
 85c9760:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85c9764:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c9768:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c976c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c9773:	00 
 85c9774:	89 04 24             	mov    %eax,(%esp)
 85c9777:	e8 52 f5 ca ff       	call   8278cce <_ZN19Secu_AccountHacking8sendGoldEPKcjjjhPc>
 85c977c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c977f:	8b 40 30             	mov    0x30(%eax),%eax
 85c9782:	89 04 24             	mov    %eax,(%esp)
 85c9785:	e8 04 0b b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c978a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c9791:	00 
 85c9792:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 85c9799:	00 
 85c979a:	8b 55 14             	mov    0x14(%ebp),%edx
 85c979d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c97a1:	89 04 24             	mov    %eax,(%esp)
 85c97a4:	e8 a3 5d f3 ff       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 85c97a9:	8b 45 10             	mov    0x10(%ebp),%eax
 85c97ac:	8b 48 07             	mov    0x7(%eax),%ecx
 85c97af:	8b 45 10             	mov    0x10(%ebp),%eax
 85c97b2:	8b 40 02             	mov    0x2(%eax),%eax
 85c97b5:	89 c2                	mov    %eax,%edx
 85c97b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c97ba:	8b 40 30             	mov    0x30(%eax),%eax
 85c97bd:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 85c97c3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c97c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c97cb:	89 04 24             	mov    %eax,(%esp)
 85c97ce:	e8 21 0a ef ff       	call   84ba1f4 <_ZN10HistoryLog12WriteBuyItemEP8_IO_FILEii>
 85c97d3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c97d6:	81 c4 ec 00 00 00    	add    $0xec,%esp
 85c97dc:	5b                   	pop    %ebx
 85c97dd:	5e                   	pop    %esi
 85c97de:	5f                   	pop    %edi
 85c97df:	5d                   	pop    %ebp
 85c97e0:	c3                   	ret
 85c97e1:	90                   	nop

```

```c
// private_store::CPrivateStore::BuyItem @ 0x85c924c

/* private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&) */

int __thiscall
private_store::CPrivateStore::BuyItem
          (CPrivateStore *this,int param_1,Inven_Item *param_2,int param_3,int param_4,int param_5,
          int *param_6)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  CInventory *pCVar8;
  int iVar9;
  CAvatarItemMgr *this_00;
  undefined4 uVar10;
  CHades *this_01;
  Secu_AccountHacking *this_02;
  PrivateStoreItem local_94 [72];
  undefined2 local_4c;
  char local_48 [16];
  cMyTrace local_38 [16];
  int local_28;
  Avatar_Item *local_24;
  undefined4 local_20;
  
  uVar3 = Inven_Item::GetReSealCount(param_2);
  uVar4 = Inven_Item::GetUpgrade(param_2);
  uVar7 = *(undefined4 *)(param_2 + 7);
  uVar10 = *(undefined4 *)(param_2 + 2);
  uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
  uVar6 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cMyTrace::cMyTrace(local_38,
                     "int private_store::CPrivateStore::BuyItem(int, Inven_Item&, int, int, int, int&)"
                     ,0xa63,0);
  cMyTrace::operator()
            (local_38,
             "PrivateStore buy seller_charac_name(%s), buyer_charac_name(%s), item_id(%d), add_info(%d), upgrade(%d), reseal_count(%d), sell_price(%d)"
             ,uVar6,uVar5,uVar10,uVar7,uVar4 & 0xff,uVar3 & 0xff,param_3);
  if (param_2[1] == (Inven_Item)0x8) {
    uVar7 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
    local_28 = CInventory::tryInsertAvatarIntoInventory
                         (uVar7,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                          *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                          *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                          *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                          *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                          *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                          *(undefined4 *)(param_2 + 0x38),param_2[0x3c]);
    if (-1 < local_28) {
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c))
      ;
      iVar9 = CInventory::GetAvatarItemMgrW(pCVar8);
      local_24 = (Avatar_Item *)WongWork::CAvatarItemMgr::EraseAvatarItem(iVar9);
      if (local_24 == (Avatar_Item *)0x0) {
        return -1;
      }
      uVar7 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
      local_28 = CInventory::insertAvatarIntoSpecificSlot
                           (uVar7,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                            *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                            *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                            *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                            *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                            *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                            *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                            *(undefined4 *)(param_2 + 0x38),param_2[0x3c],local_28,0xb,0);
      if (local_28 == -1) {
        return -1;
      }
      iVar9 = *(int *)(param_2 + 7);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30))
      ;
      this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar8);
      WongWork::CAvatarItemMgr::AddAvatarItem(this_00,iVar9,local_24);
      iVar9 = local_28;
      uVar3 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x30));
      uVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      DB_AvatarChangeOwner::makeRequest(*(uint *)(param_2 + 7),uVar4,uVar3,(uchar)iVar9);
      iVar9 = local_28 + 10;
      iVar1 = *(int *)(param_2 + 7);
      pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x30))
      ;
      CInventory::SendAvatarEvent(pCVar8,0x36,iVar1,0,iVar9,0);
    }
  }
  else {
    uVar7 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
    local_28 = CInventory::insertItemIntoInventory
                         (uVar7,*(undefined4 *)param_2,*(undefined4 *)(param_2 + 4),
                          *(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                          *(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                          *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),
                          *(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                          *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),
                          *(undefined4 *)(param_2 + 0x30),*(undefined4 *)(param_2 + 0x34),
                          *(undefined4 *)(param_2 + 0x38),param_2[0x3c],0x11,0,0);
  }
  if (-1 < local_28) {
    PrivateStoreItem::PrivateStoreItem(local_94);
    local_4c = (undefined2)local_28;
    GetItemInfo(this,*(CUser **)(this + 0x30),local_94);
    local_20 = 0;
    cVar2 = Inven_Item::isEquipableItemType(param_2);
    if (cVar2 == '\0') {
      iVar9 = Inven_Item::get_add_info((Inven_Item *)local_94);
      *param_6 = iVar9;
      local_20 = Inven_Item::get_add_info(param_2);
    }
    else {
      *param_6 = 1;
      local_20 = 1;
    }
    uVar7 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
    uVar10 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
    cUserHistoryLog::PrivateStoreItemAdd
              ((cUserHistoryLog *)(*(int *)(this + 0x30) + 0x79700),1,param_2,*param_6,local_20,0x11
               ,uVar10,uVar7);
    this_01 = (CHades *)CUser::getHades(*(CUser **)(this + 0x2c));
    XNuclear::CHades::GetIP(this_01,local_48);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x30));
    uVar3 = CInventory::get_money(pCVar8);
    uVar4 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
    this_02 = (Secu_AccountHacking *)CUser::getAcccountHackInfo(*(CUser **)(this + 0x30));
    Secu_AccountHacking::sendGold(this_02,(char *)0x0,uVar4,param_3,uVar3,'\x01',local_48);
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x30));
    CInventory::use_money(pCVar8,param_3,0xe,1);
    HistoryLog::WriteBuyItem
              (*(_IO_FILE **)(*(int *)(this + 0x30) + 0x796f8),*(int *)(param_2 + 2),
               *(int *)(param_2 + 7));
  }
  return local_28;
}

```

---

## BuyPrivateStoreItem

```asm
// === 085c7e74 private_store::CPrivateStore::BuyPrivateStoreItem  [0x085c7e74-0x85c8744] ===
 85c7e74:	55                   	push   %ebp
 85c7e75:	89 e5                	mov    %esp,%ebp
 85c7e77:	57                   	push   %edi
 85c7e78:	56                   	push   %esi
 85c7e79:	53                   	push   %ebx
 85c7e7a:	81 ec bc 00 00 00    	sub    $0xbc,%esp
 85c7e80:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7e83:	8b 40 30             	mov    0x30(%eax),%eax
 85c7e86:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7e89:	83 c2 14             	add    $0x14,%edx
 85c7e8c:	c7 44 24 0c 55 00 00 	movl   $0x55,0xc(%esp)
 85c7e93:	00 
 85c7e94:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c7e9b:	00 
 85c7e9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7ea0:	89 14 24             	mov    %edx,(%esp)
 85c7ea3:	e8 00 39 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c7ea8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7eab:	8b 40 30             	mov    0x30(%eax),%eax
 85c7eae:	85 c0                	test   %eax,%eax
 85c7eb0:	75 0a                	jne    85c7ebc <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x48>
 85c7eb2:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7eb7:	e9 7c 08 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c7ebc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7ebf:	8b 40 20             	mov    0x20(%eax),%eax
 85c7ec2:	85 c0                	test   %eax,%eax
 85c7ec4:	75 20                	jne    85c7ee6 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x72>
 85c7ec6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7ec9:	83 c0 14             	add    $0x14,%eax
 85c7ecc:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c7ed3:	00 
 85c7ed4:	89 04 24             	mov    %eax,(%esp)
 85c7ed7:	e8 a0 cd ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7edc:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7ee1:	e9 52 08 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c7ee6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7ee9:	8b 40 30             	mov    0x30(%eax),%eax
 85c7eec:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7ef0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7ef3:	89 04 24             	mov    %eax,(%esp)
 85c7ef6:	e8 bb 12 00 00       	call   85c91b6 <_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser>
 85c7efb:	83 f0 01             	xor    $0x1,%eax
 85c7efe:	84 c0                	test   %al,%al
 85c7f00:	74 20                	je     85c7f22 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0xae>
 85c7f02:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7f05:	83 c0 14             	add    $0x14,%eax
 85c7f08:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 85c7f0f:	00 
 85c7f10:	89 04 24             	mov    %eax,(%esp)
 85c7f13:	e8 64 cd ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7f18:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7f1d:	e9 16 08 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c7f22:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7f25:	8b 40 30             	mov    0x30(%eax),%eax
 85c7f28:	89 04 24             	mov    %eax,(%esp)
 85c7f2b:	e8 02 85 b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c7f30:	85 c0                	test   %eax,%eax
 85c7f32:	0f 94 c0             	sete   %al
 85c7f35:	84 c0                	test   %al,%al
 85c7f37:	74 20                	je     85c7f59 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0xe5>
 85c7f39:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7f3c:	83 c0 14             	add    $0x14,%eax
 85c7f3f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c7f46:	00 
 85c7f47:	89 04 24             	mov    %eax,(%esp)
 85c7f4a:	e8 2d cd ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7f4f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7f54:	e9 df 07 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c7f59:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85c7f5d:	78 06                	js     85c7f65 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0xf1>
 85c7f5f:	83 7d 0c 0d          	cmpl   $0xd,0xc(%ebp)
 85c7f63:	7e 20                	jle    85c7f85 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x111>
 85c7f65:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7f68:	83 c0 14             	add    $0x14,%eax
 85c7f6b:	c7 44 24 04 39 00 00 	movl   $0x39,0x4(%esp)
 85c7f72:	00 
 85c7f73:	89 04 24             	mov    %eax,(%esp)
 85c7f76:	e8 01 cd ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7f7b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7f80:	e9 b3 07 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c7f85:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7f88:	8b 50 30             	mov    0x30(%eax),%edx
 85c7f8b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7f8e:	8b 40 20             	mov    0x20(%eax),%eax
 85c7f91:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7f95:	89 04 24             	mov    %eax,(%esp)
 85c7f98:	e8 c1 2d 00 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 85c7f9d:	84 c0                	test   %al,%al
 85c7f9f:	74 20                	je     85c7fc1 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x14d>
 85c7fa1:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7fa4:	83 c0 14             	add    $0x14,%eax
 85c7fa7:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 85c7fae:	00 
 85c7faf:	89 04 24             	mov    %eax,(%esp)
 85c7fb2:	e8 c5 cc ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7fb7:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7fbc:	e9 77 07 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c7fc1:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 85c7fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7fcb:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7fce:	83 c2 3c             	add    $0x3c,%edx
 85c7fd1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7fd5:	89 14 24             	mov    %edx,(%esp)
 85c7fd8:	e8 29 4f 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c7fdd:	89 45 cc             	mov    %eax,-0x34(%ebp)
 85c7fe0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c7fe3:	8b 40 02             	mov    0x2(%eax),%eax
 85c7fe6:	89 c3                	mov    %eax,%ebx
 85c7fe8:	e8 ae 41 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c7fed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c7ff1:	89 04 24             	mov    %eax,(%esp)
 85c7ff4:	e8 39 7a d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c7ff9:	89 45 c8             	mov    %eax,-0x38(%ebp)
 85c7ffc:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 85c8000:	0f 94 c0             	sete   %al
 85c8003:	84 c0                	test   %al,%al
 85c8005:	74 20                	je     85c8027 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x1b3>
 85c8007:	8b 45 08             	mov    0x8(%ebp),%eax
 85c800a:	83 c0 14             	add    $0x14,%eax
 85c800d:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c8014:	00 
 85c8015:	89 04 24             	mov    %eax,(%esp)
 85c8018:	e8 5f cc ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c801d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8022:	e9 11 07 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c8027:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85c802a:	89 04 24             	mov    %eax,(%esp)
 85c802d:	e8 b0 92 b2 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 85c8032:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85c8035:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 85c8039:	74 77                	je     85c80b2 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x23e>
 85c803b:	83 7d d0 03          	cmpl   $0x3,-0x30(%ebp)
 85c803f:	75 2d                	jne    85c806e <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x1fa>
 85c8041:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c8044:	0f b6 00             	movzbl (%eax),%eax
 85c8047:	83 f0 01             	xor    $0x1,%eax
 85c804a:	84 c0                	test   %al,%al
 85c804c:	74 64                	je     85c80b2 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x23e>
 85c804e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8051:	83 c0 14             	add    $0x14,%eax
 85c8054:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c805b:	00 
 85c805c:	89 04 24             	mov    %eax,(%esp)
 85c805f:	e8 18 cc ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8064:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8069:	e9 ca 06 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c806e:	83 7d d0 07          	cmpl   $0x7,-0x30(%ebp)
 85c8072:	75 1e                	jne    85c8092 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x21e>
 85c8074:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c8077:	89 04 24             	mov    %eax,(%esp)
 85c807a:	e8 a3 83 b5 ff       	call   8120422 <_ZNK10Inven_Item18GetTradeLimitCountEv>
 85c807f:	84 c0                	test   %al,%al
 85c8081:	0f 94 c0             	sete   %al
 85c8084:	84 c0                	test   %al,%al
 85c8086:	74 2a                	je     85c80b2 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x23e>
 85c8088:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c808d:	e9 a6 06 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c8092:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8095:	83 c0 14             	add    $0x14,%eax
 85c8098:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c809f:	00 
 85c80a0:	89 04 24             	mov    %eax,(%esp)
 85c80a3:	e8 d4 cb ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c80a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c80ad:	e9 86 06 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c80b2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c80b5:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c80b9:	0f b6 c0             	movzbl %al,%eax
 85c80bc:	89 04 24             	mov    %eax,(%esp)
 85c80bf:	e8 95 50 f4 ff       	call   850d159 <_Z18IsCreatureItemTypei>
 85c80c4:	84 c0                	test   %al,%al
 85c80c6:	74 20                	je     85c80e8 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x274>
 85c80c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c80cb:	83 c0 14             	add    $0x14,%eax
 85c80ce:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c80d5:	00 
 85c80d6:	89 04 24             	mov    %eax,(%esp)
 85c80d9:	e8 9e cb ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c80de:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c80e3:	e9 50 06 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c80e8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 85c80eb:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c80ef:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85c80f2:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c80f6:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85c80f9:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c80fd:	8b 45 10             	mov    0x10(%ebp),%eax
 85c8100:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c8104:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c8107:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c810b:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85c810e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8112:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8115:	89 04 24             	mov    %eax,(%esp)
 85c8118:	e8 e7 fb ff ff       	call   85c7d04 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_>
 85c811d:	83 f0 01             	xor    $0x1,%eax
 85c8120:	84 c0                	test   %al,%al
 85c8122:	74 0a                	je     85c812e <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x2ba>
 85c8124:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8129:	e9 0a 06 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c812e:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 85c8131:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 85c8134:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85c8137:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c813b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c813f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8143:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8146:	89 04 24             	mov    %eax,(%esp)
 85c8149:	e8 bc fa ff ff       	call   85c7c0a <_ZN13private_store13CPrivateStore14IsPossibleDealEijj>
 85c814e:	83 f0 01             	xor    $0x1,%eax
 85c8151:	84 c0                	test   %al,%al
 85c8153:	74 0a                	je     85c815f <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x2eb>
 85c8155:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c815a:	e9 d9 05 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c815f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8162:	8b 40 30             	mov    0x30(%eax),%eax
 85c8165:	89 04 24             	mov    %eax,(%esp)
 85c8168:	e8 13 72 c6 ff       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 85c816d:	83 f0 01             	xor    $0x1,%eax
 85c8170:	84 c0                	test   %al,%al
 85c8172:	74 3e                	je     85c81b2 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x33e>
 85c8174:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85c8177:	89 c2                	mov    %eax,%edx
 85c8179:	8b 45 08             	mov    0x8(%ebp),%eax
 85c817c:	8b 40 30             	mov    0x30(%eax),%eax
 85c817f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8183:	89 04 24             	mov    %eax,(%esp)
 85c8186:	e8 0b e3 07 00       	call   8646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>
 85c818b:	83 f0 01             	xor    $0x1,%eax
 85c818e:	84 c0                	test   %al,%al
 85c8190:	74 20                	je     85c81b2 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x33e>
 85c8192:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8195:	83 c0 14             	add    $0x14,%eax
 85c8198:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 85c819f:	00 
 85c81a0:	89 04 24             	mov    %eax,(%esp)
 85c81a3:	e8 d4 ca ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c81a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c81ad:	e9 86 05 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c81b2:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 85c81b8:	89 04 24             	mov    %eax,(%esp)
 85c81bb:	e8 94 36 b0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85c81c0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c81c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c81c7:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 85c81cd:	89 04 24             	mov    %eax,(%esp)
 85c81d0:	e8 59 24 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85c81d5:	8b 45 10             	mov    0x10(%ebp),%eax
 85c81d8:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 85c81de:	c7 45 d4 ff ff ff ff 	movl   $0xffffffff,-0x2c(%ebp)
 85c81e5:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 85c81ec:	0f b6 85 70 ff ff ff 	movzbl -0x90(%ebp),%eax
 85c81f3:	3c 08                	cmp    $0x8,%al
 85c81f5:	75 0c                	jne    85c8203 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x38f>
 85c81f7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c81fa:	8b 40 07             	mov    0x7(%eax),%eax
 85c81fd:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 85c8203:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 85c8209:	89 04 24             	mov    %eax,(%esp)
 85c820c:	e8 cb 7f b5 ff       	call   81201dc <_Z26IsTradeLimitAttachTypeItemRK10Inven_Item>
 85c8211:	84 c0                	test   %al,%al
 85c8213:	74 4c                	je     85c8261 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x3ed>
 85c8215:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 85c821b:	89 04 24             	mov    %eax,(%esp)
 85c821e:	e8 19 7f b5 ff       	call   812013c <_Z23DecreaseTradeLimitCountR10Inven_Item>
 85c8223:	8b 85 71 ff ff ff    	mov    -0x8f(%ebp),%eax
 85c8229:	8b 55 08             	mov    0x8(%ebp),%edx
 85c822c:	8b 52 2c             	mov    0x2c(%edx),%edx
 85c822f:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85c8235:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85c823c:	00 
 85c823d:	c7 44 24 10 ff ff ff 	movl   $0xffffffff,0x10(%esp)
 85c8244:	ff 
 85c8245:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c8249:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 85c8250:	ff 
 85c8251:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85c8258:	ff 
 85c8259:	89 14 24             	mov    %edx,(%esp)
 85c825c:	e8 f3 ea 0b 00       	call   8686d54 <_ZN15cUserHistoryLog20ChangeItemLimitCountEiiiii>
 85c8261:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85c8264:	89 c1                	mov    %eax,%ecx
 85c8266:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85c8269:	89 c2                	mov    %eax,%edx
 85c826b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85c826e:	8d 5d b8             	lea    -0x48(%ebp),%ebx
 85c8271:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 85c8275:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85c8279:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c827d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c8281:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 85c8287:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c828b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c828e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8292:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8295:	89 04 24             	mov    %eax,(%esp)
 85c8298:	e8 af 0f 00 00       	call   85c924c <_ZN13private_store13CPrivateStore7BuyItemEiR10Inven_ItemiiiRi>
 85c829d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85c82a0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85c82a3:	c1 e8 1f             	shr    $0x1f,%eax
 85c82a6:	84 c0                	test   %al,%al
 85c82a8:	74 20                	je     85c82ca <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x456>
 85c82aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c82ad:	83 c0 14             	add    $0x14,%eax
 85c82b0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c82b7:	00 
 85c82b8:	89 04 24             	mov    %eax,(%esp)
 85c82bb:	e8 bc c9 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c82c0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c82c5:	e9 6e 04 00 00       	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c82ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85c82cd:	89 04 24             	mov    %eax,(%esp)
 85c82d0:	e8 b7 18 00 00       	call   85c9b8c <_ZN13private_store13CPrivateStore20GetCommissionPercentEv>
 85c82d5:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85c82d8:	89 c1                	mov    %eax,%ecx
 85c82da:	0f af ca             	imul   %edx,%ecx
 85c82dd:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 85c82e2:	89 c8                	mov    %ecx,%eax
 85c82e4:	f7 ea                	imul   %edx
 85c82e6:	c1 fa 05             	sar    $0x5,%edx
 85c82e9:	89 c8                	mov    %ecx,%eax
 85c82eb:	c1 f8 1f             	sar    $0x1f,%eax
 85c82ee:	89 d1                	mov    %edx,%ecx
 85c82f0:	29 c1                	sub    %eax,%ecx
 85c82f2:	89 c8                	mov    %ecx,%eax
 85c82f4:	89 45 d8             	mov    %eax,-0x28(%ebp)
 85c82f7:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c82fa:	8b 48 07             	mov    0x7(%eax),%ecx
 85c82fd:	8b 95 76 ff ff ff    	mov    -0x8a(%ebp),%edx
 85c8303:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85c8306:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 85c830a:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c830e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85c8311:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c8315:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c8319:	8d 85 6f ff ff ff    	lea    -0x91(%ebp),%eax
 85c831f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c8323:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c8326:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c832a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c832d:	89 04 24             	mov    %eax,(%esp)
 85c8330:	e8 ad 14 00 00       	call   85c97e2 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii>
 85c8335:	8b 45 10             	mov    0x10(%ebp),%eax
 85c8338:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c833c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 85c833f:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c8343:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85c8346:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c834a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c834d:	89 04 24             	mov    %eax,(%esp)
 85c8350:	e8 67 f8 ff ff       	call   85c7bbc <_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi>
 85c8355:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8358:	89 04 24             	mov    %eax,(%esp)
 85c835b:	e8 b6 1d 00 00       	call   85ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>
 85c8360:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8363:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c8366:	89 04 24             	mov    %eax,(%esp)
 85c8369:	e8 02 af 08 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 85c836e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8371:	8b 40 30             	mov    0x30(%eax),%eax
 85c8374:	89 04 24             	mov    %eax,(%esp)
 85c8377:	e8 f4 ae 08 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 85c837c:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c837f:	89 04 24             	mov    %eax,(%esp)
 85c8382:	e8 eb 35 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c8387:	8b 45 10             	mov    0x10(%ebp),%eax
 85c838a:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c838e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c8391:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8395:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c8398:	89 04 24             	mov    %eax,(%esp)
 85c839b:	e8 5a 3d 00 00       	call   85cc0fa <_ZN13private_store17CPacketBufPrivate30MakeNotipacketPrivateStoreItemEii>
 85c83a0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c83a7:	00 
 85c83a8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85c83af:	00 
 85c83b0:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c83b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c83b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c83ba:	89 04 24             	mov    %eax,(%esp)
 85c83bd:	e8 1a f7 ff ff       	call   85c7adc <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_>
 85c83c2:	8b 75 bc             	mov    -0x44(%ebp),%esi
 85c83c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c83c8:	8b 40 30             	mov    0x30(%eax),%eax
 85c83cb:	89 04 24             	mov    %eax,(%esp)
 85c83ce:	e8 55 8c b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c83d3:	8b 9d 76 ff ff ff    	mov    -0x8a(%ebp),%ebx
 85c83d9:	8b 95 71 ff ff ff    	mov    -0x8f(%ebp),%edx
 85c83df:	89 d1                	mov    %edx,%ecx
 85c83e1:	8b 55 08             	mov    0x8(%ebp),%edx
 85c83e4:	8b 52 2c             	mov    0x2c(%edx),%edx
 85c83e7:	8b 7d d8             	mov    -0x28(%ebp),%edi
 85c83ea:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 85c83ee:	89 74 24 18          	mov    %esi,0x18(%esp)
 85c83f2:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c83f6:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85c83fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c83fd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c8401:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c8405:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8409:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c840c:	89 04 24             	mov    %eax,(%esp)
 85c840f:	e8 d6 3b 00 00       	call   85cbfea <_ZN13private_store17CPacketBufPrivate33MakeNotipacketBuyPrivateStoreItemEP5CUseriiiPKcii>
 85c8414:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8417:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c841a:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85c841d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8421:	89 04 24             	mov    %eax,(%esp)
 85c8424:	e8 91 01 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c8429:	8b 9d 76 ff ff ff    	mov    -0x8a(%ebp),%ebx
 85c842f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 85c8432:	89 c1                	mov    %eax,%ecx
 85c8434:	8b 45 c0             	mov    -0x40(%ebp),%eax
 85c8437:	89 c2                	mov    %eax,%edx
 85c8439:	8b 45 08             	mov    0x8(%ebp),%eax
 85c843c:	8b 40 30             	mov    0x30(%eax),%eax
 85c843f:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 85c8443:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 85c8446:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 85c844a:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85c844e:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c8452:	8d 95 6f ff ff ff    	lea    -0x91(%ebp),%edx
 85c8458:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c845c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8460:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c8463:	89 04 24             	mov    %eax,(%esp)
 85c8466:	e8 cd 38 00 00       	call   85cbd38 <_ZN13private_store17CPacketBufPrivate32MakeCmdpacketBuyPrivateStoreItemEP5CUserR10Inven_Itemiiii>
 85c846b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c846e:	8b 40 30             	mov    0x30(%eax),%eax
 85c8471:	8d 55 ac             	lea    -0x54(%ebp),%edx
 85c8474:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8478:	89 04 24             	mov    %eax,(%esp)
 85c847b:	e8 3a 01 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c8480:	c6 45 dd 00          	movb   $0x0,-0x23(%ebp)
 85c8484:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85c8487:	8b 00                	mov    (%eax),%eax
 85c8489:	83 c0 10             	add    $0x10,%eax
 85c848c:	8b 10                	mov    (%eax),%edx
 85c848e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85c8491:	89 04 24             	mov    %eax,(%esp)
 85c8494:	ff d2                	call   *%edx
 85c8496:	83 f0 01             	xor    $0x1,%eax
 85c8499:	84 c0                	test   %al,%al
 85c849b:	74 17                	je     85c84b4 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x640>
 85c849d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 85c84a0:	89 04 24             	mov    %eax,(%esp)
 85c84a3:	e8 2e 8e b2 ff       	call   80f12d6 <_ZNK5CItem10get_rarityEv>
 85c84a8:	83 f8 01             	cmp    $0x1,%eax
 85c84ab:	7f 07                	jg     85c84b4 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x640>
 85c84ad:	b8 01 00 00 00       	mov    $0x1,%eax
 85c84b2:	eb 05                	jmp    85c84b9 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x645>
 85c84b4:	b8 00 00 00 00       	mov    $0x0,%eax
 85c84b9:	84 c0                	test   %al,%al
 85c84bb:	74 04                	je     85c84c1 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x64d>
 85c84bd:	c6 45 dd 01          	movb   $0x1,-0x23(%ebp)
 85c84c1:	0f b6 4d dd          	movzbl -0x23(%ebp),%ecx
 85c84c5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85c84c8:	89 c2                	mov    %eax,%edx
 85c84ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85c84cd:	8b 40 30             	mov    0x30(%eax),%eax
 85c84d0:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c84d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c84d8:	89 04 24             	mov    %eax,(%esp)
 85c84db:	e8 aa e0 07 00       	call   864658a <_ZN5CUser18IncrementTradeGoldEji>
 85c84e0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c84e3:	8b 40 30             	mov    0x30(%eax),%eax
 85c84e6:	89 04 24             	mov    %eax,(%esp)
 85c84e9:	e8 cc 87 b4 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 85c84ee:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 85c84f2:	c7 04 24 19 00 00 00 	movl   $0x19,(%esp)
 85c84f9:	e8 89 96 0e 00       	call   86b1b87 <_Z12get_rand_inti>
 85c84fe:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85c8501:	c7 04 24 14 00 00 00 	movl   $0x14,(%esp)
 85c8508:	e8 7a 96 0e 00       	call   86b1b87 <_Z12get_rand_inti>
 85c850d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c8510:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8513:	8b 40 30             	mov    0x30(%eax),%eax
 85c8516:	89 04 24             	mov    %eax,(%esp)
 85c8519:	e8 60 1d b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c851e:	89 04 24             	mov    %eax,(%esp)
 85c8521:	e8 b0 c2 b6 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 85c8526:	8b 55 bc             	mov    -0x44(%ebp),%edx
 85c8529:	01 d0                	add    %edx,%eax
 85c852b:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 85c8531:	db 85 60 ff ff ff    	fildl  -0xa0(%ebp)
 85c8537:	db 45 e0             	fildl  -0x20(%ebp)
 85c853a:	dd 05 d0 ea cb 08    	fldl   0x8cbead0
 85c8540:	de c9                	fmulp  %st,%st(1)
 85c8542:	d9 9d 64 ff ff ff    	fstps  -0x9c(%ebp)
 85c8548:	d9 85 64 ff ff ff    	flds   -0x9c(%ebp)
 85c854e:	dd 05 d8 ea cb 08    	fldl   0x8cbead8
 85c8554:	de c1                	faddp  %st,%st(1)
 85c8556:	de c9                	fmulp  %st,%st(1)
 85c8558:	8b 45 bc             	mov    -0x44(%ebp),%eax
 85c855b:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 85c8561:	db 85 60 ff ff ff    	fildl  -0xa0(%ebp)
 85c8567:	da e9                	fucompp
 85c8569:	df e0                	fnstsw %ax
 85c856b:	f6 c4 45             	test   $0x45,%ah
 85c856e:	0f 94 c0             	sete   %al
 85c8571:	84 c0                	test   %al,%al
 85c8573:	0f 84 46 01 00 00    	je     85c86bf <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x84b>
 85c8579:	8b 45 08             	mov    0x8(%ebp),%eax
 85c857c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c857f:	89 04 24             	mov    %eax,(%esp)
 85c8582:	e8 e7 1d b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c8587:	89 c2                	mov    %eax,%edx
 85c8589:	8b 45 08             	mov    0x8(%ebp),%eax
 85c858c:	8b 40 30             	mov    0x30(%eax),%eax
 85c858f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8593:	c7 44 24 04 c0 02 00 	movl   $0x2c0,0x4(%esp)
 85c859a:	00 
 85c859b:	89 04 24             	mov    %eax,(%esp)
 85c859e:	e8 c5 13 b3 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 85c85a3:	89 c6                	mov    %eax,%esi
 85c85a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c85a8:	8b 58 30             	mov    0x30(%eax),%ebx
 85c85ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85c85ae:	8b 40 30             	mov    0x30(%eax),%eax
 85c85b1:	89 04 24             	mov    %eax,(%esp)
 85c85b4:	e8 a1 13 b3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85c85b9:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c85c0:	00 
 85c85c1:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c85c5:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c85cc:	00 
 85c85cd:	c7 44 24 08 c0 02 00 	movl   $0x2c0,0x8(%esp)
 85c85d4:	00 
 85c85d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c85d9:	89 04 24             	mov    %eax,(%esp)
 85c85dc:	e8 9d 06 b3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 85c85e1:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 85c85e5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85c85e8:	83 c2 78             	add    $0x78,%edx
 85c85eb:	39 d0                	cmp    %edx,%eax
 85c85ed:	7c 68                	jl     85c8657 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x7e3>
 85c85ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85c85f2:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c85f5:	89 04 24             	mov    %eax,(%esp)
 85c85f8:	e8 71 1d b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c85fd:	89 c2                	mov    %eax,%edx
 85c85ff:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8602:	8b 40 30             	mov    0x30(%eax),%eax
 85c8605:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8609:	c7 44 24 04 bd 02 00 	movl   $0x2bd,0x4(%esp)
 85c8610:	00 
 85c8611:	89 04 24             	mov    %eax,(%esp)
 85c8614:	e8 4f 13 b3 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 85c8619:	89 c6                	mov    %eax,%esi
 85c861b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c861e:	8b 58 30             	mov    0x30(%eax),%ebx
 85c8621:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8624:	8b 40 30             	mov    0x30(%eax),%eax
 85c8627:	89 04 24             	mov    %eax,(%esp)
 85c862a:	e8 2b 13 b3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85c862f:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c8636:	00 
 85c8637:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c863b:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c8642:	00 
 85c8643:	c7 44 24 08 bd 02 00 	movl   $0x2bd,0x8(%esp)
 85c864a:	00 
 85c864b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c864f:	89 04 24             	mov    %eax,(%esp)
 85c8652:	e8 27 06 b3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 85c8657:	8b 45 08             	mov    0x8(%ebp),%eax
 85c865a:	8b 40 30             	mov    0x30(%eax),%eax
 85c865d:	89 04 24             	mov    %eax,(%esp)
 85c8660:	e8 09 1d b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c8665:	89 c2                	mov    %eax,%edx
 85c8667:	8b 45 08             	mov    0x8(%ebp),%eax
 85c866a:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c866d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8671:	c7 44 24 04 c1 02 00 	movl   $0x2c1,0x4(%esp)
 85c8678:	00 
 85c8679:	89 04 24             	mov    %eax,(%esp)
 85c867c:	e8 e7 12 b3 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 85c8681:	89 c6                	mov    %eax,%esi
 85c8683:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8686:	8b 58 2c             	mov    0x2c(%eax),%ebx
 85c8689:	8b 45 08             	mov    0x8(%ebp),%eax
 85c868c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c868f:	89 04 24             	mov    %eax,(%esp)
 85c8692:	e8 c3 12 b3 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 85c8697:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c869e:	00 
 85c869f:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c86a3:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c86aa:	00 
 85c86ab:	c7 44 24 08 c1 02 00 	movl   $0x2c1,0x8(%esp)
 85c86b2:	00 
 85c86b3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c86b7:	89 04 24             	mov    %eax,(%esp)
 85c86ba:	e8 bf 05 b3 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 85c86bf:	8b 75 d8             	mov    -0x28(%ebp),%esi
 85c86c2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c86c5:	8b 58 2c             	mov    0x2c(%eax),%ebx
 85c86c8:	e8 22 4f 04 00       	call   860d5ef <_Z25GetInstanceValueStatisticv>
 85c86cd:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c86d1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c86d5:	c7 44 24 04 12 00 00 	movl   $0x12,0x4(%esp)
 85c86dc:	00 
 85c86dd:	89 04 24             	mov    %eax,(%esp)
 85c86e0:	e8 9d 4f 04 00       	call   860d682 <_ZN15CValueStatistic17AddValueStatisticE21VALUE_STATISTIC_FIELDP5CUserj>
 85c86e5:	8b 75 d8             	mov    -0x28(%ebp),%esi
 85c86e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c86eb:	8b 58 2c             	mov    0x2c(%eax),%ebx
 85c86ee:	e8 24 53 04 00       	call   860da17 <_Z31GetInstanceCirculationStatisticv>
 85c86f3:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c86f7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c86fb:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 85c8702:	00 
 85c8703:	89 04 24             	mov    %eax,(%esp)
 85c8706:	e8 9f 53 04 00       	call   860daaa <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj>
 85c870b:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c8710:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c8713:	89 04 24             	mov    %eax,(%esp)
 85c8716:	e8 91 43 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c871b:	eb 1b                	jmp    85c8738 <_ZN13private_store13CPrivateStore19BuyPrivateStoreItemEii+0x8c4>
 85c871d:	89 d3                	mov    %edx,%ebx
 85c871f:	89 c6                	mov    %eax,%esi
 85c8721:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c8724:	89 04 24             	mov    %eax,(%esp)
 85c8727:	e8 80 43 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c872c:	89 f0                	mov    %esi,%eax
 85c872e:	89 da                	mov    %ebx,%edx
 85c8730:	89 04 24             	mov    %eax,(%esp)
 85c8733:	e8 18 b0 51 00       	call   8ae3750 <_Unwind_Resume>
 85c8738:	89 d8                	mov    %ebx,%eax
 85c873a:	81 c4 bc 00 00 00    	add    $0xbc,%esp
 85c8740:	5b                   	pop    %ebx
 85c8741:	5e                   	pop    %esi
 85c8742:	5f                   	pop    %edi
 85c8743:	5d                   	pop    %ebp
 85c8744:	c3                   	ret

```

```c
// private_store::CPrivateStore::BuyPrivateStoreItem @ 0x85c7e74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* private_store::CPrivateStore::BuyPrivateStoreItem(int, int) */

undefined4 __thiscall
private_store::CPrivateStore::BuyPrivateStoreItem(CPrivateStore *this,int param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  CDataManager *this_00;
  char *pcVar6;
  CInventory *this_01;
  undefined4 uVar7;
  CHackAnalyzer *pCVar8;
  CValueStatistic *pCVar9;
  CCirculationStatistic *pCVar10;
  Inven_Item local_95;
  char local_94;
  int local_93;
  int local_8e;
  CPacketBufPrivate local_58 [12];
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  CItem *local_3c;
  Inven_Item *local_38;
  int local_34;
  int local_30;
  int local_2c;
  byte local_27;
  ushort local_26;
  int local_24;
  int local_20;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x55);
  if (*(int *)(this + 0x30) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    return 0;
  }
  cVar4 = IsExistBuyerList((CUser *)this);
  if (cVar4 != '\x01') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x15);
    return 0;
  }
  iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x30));
  if (iVar5 == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
    return 0;
  }
  if ((param_1 < 0) || (0xd < param_1)) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x39);
    return 0;
  }
  cVar4 = CPrivateStoreMgr::IsBusyPrivateStore
                    (*(CPrivateStoreMgr **)(this + 0x20),*(CUser **)(this + 0x30));
  if (cVar4 != '\0') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3c);
    return 0;
  }
  local_3c = (CItem *)0x0;
  local_38 = (Inven_Item *)
             std::
             vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
             ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                           *)(this + 0x3c),param_1);
  iVar5 = *(int *)(local_38 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  local_3c = (CItem *)CDataManager::find_item(this_00,iVar5);
  if (local_3c == (CItem *)0x0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
    return 0;
  }
  local_34 = CItem::GetAttachType(local_3c);
  if (local_34 != 0) {
    if (local_34 == 3) {
      if (*local_38 != (Inven_Item)0x1) {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
    }
    else {
      if (local_34 != 7) {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
      cVar4 = Inven_Item::GetTradeLimitCount(local_38);
      if (cVar4 == '\0') {
        return 0;
      }
    }
  }
  cVar4 = IsCreatureItemType((uint)(byte)local_38[1]);
  if (cVar4 != '\0') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
    return 0;
  }
  cVar4 = GetItemPrice(this,local_3c,(PrivateStoreItem *)local_38,param_2,(int *)&local_48,&local_40
                       ,&local_44);
  if (cVar4 == '\x01') {
    cVar4 = IsPossibleDeal((int)this,local_48,local_40);
    if (cVar4 != '\x01') {
      return 0;
    }
    cVar4 = CUserCharacInfo::GetReliablePerson(*(CUserCharacInfo **)(this + 0x30));
    if ((cVar4 != '\x01') &&
       (cVar4 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                          (*(CUserCharacInfo **)(this + 0x30),local_48), cVar4 != '\x01')) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x46);
      return 0;
    }
    Inven_Item::Inven_Item(&local_95);
    Inven_Item::setCopy(&local_95,local_38);
    local_8e = param_2;
    local_30 = 0xffffffff;
    local_4c = 0;
    if (local_94 == '\b') {
      local_8e = *(int *)(local_38 + 7);
    }
    cVar4 = IsTradeLimitAttachTypeItem(&local_95);
    if (cVar4 != '\0') {
      DecreaseTradeLimitCount(&local_95);
      cUserHistoryLog::ChangeItemLimitCount
                ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),-1,-1,local_93,-1,1);
    }
    local_30 = BuyItem(this,param_1,&local_95,local_48,local_40,local_44,&local_4c);
    if (-1 < local_30) {
      iVar5 = GetCommissionPercent();
      local_2c = (int)(iVar5 * local_48) / 100;
      SellItem(this,param_1,&local_95,local_48,local_2c,local_8e,*(int *)(local_38 + 7));
      SubtractItemCount(this,local_3c,(PrivateStoreItem *)local_38,param_2);
      SavePrivateStore(this);
      CUser::UpdateData(*(CUser **)(this + 0x2c));
      CUser::UpdateData(*(CUser **)(this + 0x30));
      CPacketBufPrivate::CPacketBufPrivate(local_58);
                    /* try { // try from 085c839b to 085c870a has its CatchHandler @ 085c871d */
      CPacketBufPrivate::MakeNotipacketPrivateStoreItem(local_58,param_1,param_2);
      SendUsers(this,(PacketGuard *)local_58,(CUser *)0x0,(CUser *)0x0);
      uVar3 = local_48;
      pcVar6 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
      CPacketBufPrivate::MakeNotipacketBuyPrivateStoreItem
                (local_58,*(CUser **)(this + 0x2c),local_93,param_1,local_8e,pcVar6,uVar3,local_2c);
      CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_58);
      CPacketBufPrivate::MakeCmdpacketBuyPrivateStoreItem
                (local_58,*(CUser **)(this + 0x30),&local_95,local_44,local_40,local_30,local_8e);
      CUser::Send(*(CUser **)(this + 0x30),(PacketGuard *)local_58);
      local_27 = 0;
      cVar4 = (**(code **)(*(int *)local_3c + 0x10))(local_3c);
      if ((cVar4 == '\x01') || (iVar5 = CItem::get_rarity(local_3c), 1 < iVar5)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_27 = 1;
      }
      CUser::IncrementTradeGold(*(CUser **)(this + 0x30),local_48,(uint)local_27);
      local_26 = CUserCharacInfo::getCurCharacUsedFatigue(*(CUserCharacInfo **)(this + 0x30));
      local_24 = get_rand_int(0x19);
      local_20 = get_rand_int(0x14);
      this_01 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x30));
      iVar5 = CInventory::get_money(this_01);
      if (((float)_DAT_08cbead8 + (float)_DAT_08cbead0 * (float)local_24) *
          (float)(int)(iVar5 + local_48) < (float)(int)local_48) {
        iVar5 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
        uVar7 = CUser::SetETC(*(CUser **)(this + 0x30),0x2c0,iVar5);
        uVar1 = *(undefined4 *)(this + 0x30);
        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x30));
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar1,0x2c0,1,uVar7,0);
        if (local_20 + 0x78 <= (int)(uint)local_26) {
          iVar5 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
          uVar7 = CUser::SetETC(*(CUser **)(this + 0x30),0x2bd,iVar5);
          uVar1 = *(undefined4 *)(this + 0x30);
          pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x30));
          WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar1,0x2bd,1,uVar7,0);
        }
        iVar5 = CUser::get_acc_id(*(CUser **)(this + 0x30));
        uVar7 = CUser::SetETC(*(CUser **)(this + 0x2c),0x2c1,iVar5);
        uVar1 = *(undefined4 *)(this + 0x2c);
        pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)(this + 0x2c));
        WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar1,0x2c1,1,uVar7,0);
      }
      iVar5 = local_2c;
      uVar1 = *(undefined4 *)(this + 0x2c);
      pCVar9 = (CValueStatistic *)GetInstanceValueStatistic();
      CValueStatistic::AddValueStatistic(pCVar9,0x12,uVar1,iVar5);
      iVar5 = local_2c;
      uVar1 = *(undefined4 *)(this + 0x2c);
      pCVar10 = (CCirculationStatistic *)GetInstanceCirculationStatistic();
      CCirculationStatistic::AddCirculationStatistic(pCVar10,0x15,uVar1,iVar5);
      CPacketBufPrivate::~CPacketBufPrivate(local_58);
      return 1;
    }
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),4);
    return 0;
  }
  return 0;
}

```

---

## CPrivateStore

```asm
// === 085c4d10 private_store::CPrivateStore::CPrivateStore  [0x085c4d10-0x85c4e6f] ===
 85c4d10:	55                   	push   %ebp
 85c4d11:	89 e5                	mov    %esp,%ebp
 85c4d13:	57                   	push   %edi
 85c4d14:	56                   	push   %esi
 85c4d15:	53                   	push   %ebx
 85c4d16:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 85c4d1c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d1f:	89 04 24             	mov    %eax,(%esp)
 85c4d22:	e8 99 7d 00 00       	call   85ccac0 <_ZN13private_store7ISellerC1Ev>
 85c4d27:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d2a:	83 c0 04             	add    $0x4,%eax
 85c4d2d:	89 04 24             	mov    %eax,(%esp)
 85c4d30:	e8 99 7d 00 00       	call   85ccace <_ZN13private_store6IBuyerC1Ev>
 85c4d35:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d38:	c7 00 68 eb cb 08    	movl   $0x8cbeb68,(%eax)
 85c4d3e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d41:	c7 40 04 98 eb cb 08 	movl   $0x8cbeb98,0x4(%eax)
 85c4d48:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d4b:	83 c0 24             	add    $0x24,%eax
 85c4d4e:	89 04 24             	mov    %eax,(%esp)
 85c4d51:	e8 a0 69 00 00       	call   85cb6f6 <_ZN13private_store15PrivateStorePosC1Ev>
 85c4d56:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d59:	83 c0 34             	add    $0x34,%eax
 85c4d5c:	89 04 24             	mov    %eax,(%esp)
 85c4d5f:	e8 b4 70 ca ff       	call   826be18 <_ZNSt4listIP5CUserSaIS1_EEC1Ev>
 85c4d64:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d67:	83 c0 3c             	add    $0x3c,%eax
 85c4d6a:	89 04 24             	mov    %eax,(%esp)
 85c4d6d:	e8 a8 81 00 00       	call   85ccf1a <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEC1Ev>
 85c4d72:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d75:	83 c0 48             	add    $0x48,%eax
 85c4d78:	89 04 24             	mov    %eax,(%esp)
 85c4d7b:	e8 50 18 14 00       	call   87065d0 <_ZNSsC1Ev>
 85c4d80:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d83:	83 c0 4c             	add    $0x4c,%eax
 85c4d86:	89 04 24             	mov    %eax,(%esp)
 85c4d89:	e8 3a 6a 00 00       	call   85cb7c8 <_ZN13private_store16CPrivateStorePosC1Ev>
 85c4d8e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d91:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 85c4d98:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4d9b:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 85c4d9f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4da2:	83 c0 3c             	add    $0x3c,%eax
 85c4da5:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 85c4dac:	00 
 85c4dad:	89 04 24             	mov    %eax,(%esp)
 85c4db0:	e8 d7 81 00 00       	call   85ccf8c <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EE7reserveEj>
 85c4db5:	8d 45 9c             	lea    -0x64(%ebp),%eax
 85c4db8:	89 04 24             	mov    %eax,(%esp)
 85c4dbb:	e8 bc f7 c6 ff       	call   823457c <_ZN13private_store16PrivateStoreItemC1Ev>
 85c4dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4dc3:	83 c0 3c             	add    $0x3c,%eax
 85c4dc6:	89 45 94             	mov    %eax,-0x6c(%ebp)
 85c4dc9:	8d 54 24 08          	lea    0x8(%esp),%edx
 85c4dcd:	8d 5d 9c             	lea    -0x64(%ebp),%ebx
 85c4dd0:	b8 13 00 00 00       	mov    $0x13,%eax
 85c4dd5:	89 d7                	mov    %edx,%edi
 85c4dd7:	89 de                	mov    %ebx,%esi
 85c4dd9:	89 c1                	mov    %eax,%ecx
 85c4ddb:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 85c4ddd:	c7 44 24 04 0e 00 00 	movl   $0xe,0x4(%esp)
 85c4de4:	00 
 85c4de5:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85c4de8:	89 04 24             	mov    %eax,(%esp)
 85c4deb:	e8 c4 82 00 00       	call   85cd0b4 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EE6resizeEjS1_>
 85c4df0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4df3:	83 c0 48             	add    $0x48,%eax
 85c4df6:	c7 44 24 04 28 00 00 	movl   $0x28,0x4(%esp)
 85c4dfd:	00 
 85c4dfe:	89 04 24             	mov    %eax,(%esp)
 85c4e01:	e8 0a 2f 14 00       	call   8707d10 <_ZNSs7reserveEj>
 85c4e06:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e09:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 85c4e0d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e10:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 85c4e17:	81 c4 cc 00 00 00    	add    $0xcc,%esp
 85c4e1d:	5b                   	pop    %ebx
 85c4e1e:	5e                   	pop    %esi
 85c4e1f:	5f                   	pop    %edi
 85c4e20:	5d                   	pop    %ebp
 85c4e21:	c3                   	ret
 85c4e22:	89 d3                	mov    %edx,%ebx
 85c4e24:	89 c6                	mov    %eax,%esi
 85c4e26:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e29:	83 c0 48             	add    $0x48,%eax
 85c4e2c:	89 04 24             	mov    %eax,(%esp)
 85c4e2f:	e8 ac 2d 14 00       	call   8707be0 <_ZNSsD1Ev>
 85c4e34:	89 f0                	mov    %esi,%eax
 85c4e36:	89 da                	mov    %ebx,%edx
 85c4e38:	eb 00                	jmp    85c4e3a <_ZN13private_store13CPrivateStoreC1Ev+0x12a>
 85c4e3a:	89 d3                	mov    %edx,%ebx
 85c4e3c:	89 c6                	mov    %eax,%esi
 85c4e3e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e41:	83 c0 3c             	add    $0x3c,%eax
 85c4e44:	89 04 24             	mov    %eax,(%esp)
 85c4e47:	e8 e2 80 00 00       	call   85ccf2e <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EED1Ev>
 85c4e4c:	89 f0                	mov    %esi,%eax
 85c4e4e:	89 da                	mov    %ebx,%edx
 85c4e50:	eb 00                	jmp    85c4e52 <_ZN13private_store13CPrivateStoreC1Ev+0x142>
 85c4e52:	89 d3                	mov    %edx,%ebx
 85c4e54:	89 c6                	mov    %eax,%esi
 85c4e56:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e59:	83 c0 34             	add    $0x34,%eax
 85c4e5c:	89 04 24             	mov    %eax,(%esp)
 85c4e5f:	e8 c8 6b ca ff       	call   826ba2c <_ZNSt4listIP5CUserSaIS1_EED1Ev>
 85c4e64:	89 f0                	mov    %esi,%eax
 85c4e66:	89 da                	mov    %ebx,%edx
 85c4e68:	89 04 24             	mov    %eax,(%esp)
 85c4e6b:	e8 e0 e8 51 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// private_store::CPrivateStore::CPrivateStore @ 0x85c4d10

/* private_store::CPrivateStore::CPrivateStore() */

void __thiscall private_store::CPrivateStore::CPrivateStore(CPrivateStore *this)

{
  int iVar1;
  PrivateStoreItem *pPVar2;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 local_d4 [25];
  CPrivateStore *local_70;
  PrivateStoreItem local_68 [88];
  
  bVar4 = 0;
  ISeller::ISeller((ISeller *)this);
  IBuyer::IBuyer((IBuyer *)(this + 4));
  *(undefined ***)this = &PTR_CreatePrivateStore_08cbeb68;
  *(undefined ***)(this + 4) = &PTR_BuyPrivateStoreItem_08cbeb98;
  PrivateStorePos::PrivateStorePos((PrivateStorePos *)(this + 0x24));
  std::list<CUser*,std::allocator<CUser*>>::list
            ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
                    /* try { // try from 085c4d6d to 085c4d71 has its CatchHandler @ 085c4e52 */
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  vector((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>> *)
         (this + 0x3c));
                    /* try { // try from 085c4d7b to 085c4d7f has its CatchHandler @ 085c4e3a */
  std::string::string((string *)(this + 0x48));
  CPrivateStorePos::CPrivateStorePos((CPrivateStorePos *)(this + 0x4c));
  *(undefined4 *)(this + 0x20) = 0;
  this[0x10] = (CPrivateStore)0x0;
                    /* try { // try from 085c4db0 to 085c4e05 has its CatchHandler @ 085c4e22 */
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  reserve((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>> *
          )(this + 0x3c),0xe);
  PrivateStoreItem::PrivateStoreItem(local_68);
  local_70 = this + 0x3c;
  pPVar2 = local_68;
  puVar3 = local_d4;
  for (iVar1 = 0x13; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *(undefined4 *)pPVar2;
    pPVar2 = pPVar2 + ((uint)bVar4 * -2 + 1) * 4;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  resize(local_70,0xe);
  std::string::reserve((string *)(this + 0x48),0x28);
  this[8] = (CPrivateStore)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## CheckPrivateStoreDoll

```asm
// === 085c532c private_store::CPrivateStore::CheckPrivateStoreDoll  [0x085c532c-0x85c53e9] ===
 85c532c:	55                   	push   %ebp
 85c532d:	89 e5                	mov    %esp,%ebp
 85c532f:	53                   	push   %ebx
 85c5330:	83 ec 74             	sub    $0x74,%esp
 85c5333:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5336:	66 89 45 a4          	mov    %ax,-0x5c(%ebp)
 85c533a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c533d:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5340:	85 c0                	test   %eax,%eax
 85c5342:	75 0a                	jne    85c534e <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0x22>
 85c5344:	b8 3a 00 00 00       	mov    $0x3a,%eax
 85c5349:	e9 97 00 00 00       	jmp    85c53e5 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xb9>
 85c534e:	0f b7 5d a4          	movzwl -0x5c(%ebp),%ebx
 85c5352:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5355:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5358:	89 04 24             	mov    %eax,(%esp)
 85c535b:	e8 1e 4f b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c5360:	8d 55 b7             	lea    -0x49(%ebp),%edx
 85c5363:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c5367:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c536e:	00 
 85c536f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5373:	89 14 24             	mov    %edx,(%esp)
 85c5376:	e8 9d 65 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85c537b:	83 ec 04             	sub    $0x4,%esp
 85c537e:	8b 45 b9             	mov    -0x47(%ebp),%eax
 85c5381:	89 c3                	mov    %eax,%ebx
 85c5383:	e8 13 6e b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c5388:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c538c:	89 04 24             	mov    %eax,(%esp)
 85c538f:	e8 9e a6 d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c5394:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c5397:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c539b:	75 07                	jne    85c53a4 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0x78>
 85c539d:	b8 16 00 00 00       	mov    $0x16,%eax
 85c53a2:	eb 41                	jmp    85c53e5 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xb9>
 85c53a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c53a7:	89 04 24             	mov    %eax,(%esp)
 85c53aa:	e8 4b bf b2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85c53af:	83 f0 01             	xor    $0x1,%eax
 85c53b2:	84 c0                	test   %al,%al
 85c53b4:	74 07                	je     85c53bd <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0x91>
 85c53b6:	b8 16 00 00 00       	mov    $0x16,%eax
 85c53bb:	eb 28                	jmp    85c53e5 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xb9>
 85c53bd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c53c0:	8b 80 2c 03 00 00    	mov    0x32c(%eax),%eax
 85c53c6:	83 f8 ff             	cmp    $0xffffffff,%eax
 85c53c9:	75 07                	jne    85c53d2 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xa6>
 85c53cb:	b8 16 00 00 00       	mov    $0x16,%eax
 85c53d0:	eb 13                	jmp    85c53e5 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xb9>
 85c53d2:	8b 45 be             	mov    -0x42(%ebp),%eax
 85c53d5:	85 c0                	test   %eax,%eax
 85c53d7:	7f 07                	jg     85c53e0 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xb4>
 85c53d9:	b8 16 00 00 00       	mov    $0x16,%eax
 85c53de:	eb 05                	jmp    85c53e5 <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt+0xb9>
 85c53e0:	b8 00 00 00 00       	mov    $0x0,%eax
 85c53e5:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85c53e8:	c9                   	leave
 85c53e9:	c3                   	ret

```

```c
// private_store::CPrivateStore::CheckPrivateStoreDoll @ 0x85c532c

/* private_store::CPrivateStore::CheckPrivateStoreDoll(unsigned short) */

undefined4 private_store::CPrivateStore::CheckPrivateStoreDoll(ushort param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this;
  undefined2 in_stack_00000006;
  undefined1 local_4d [2];
  int local_4b;
  int local_46;
  CItem *local_10;
  
  if (*(int *)(_param_1 + 0x2c) == 0) {
    uVar2 = 0x3a;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(_param_1 + 0x2c));
    CInventory::GetInvenSlot((int)local_4d,iVar3);
    this = (CDataManager *)G_CDataManager();
    local_10 = (CItem *)CDataManager::find_item(this,local_4b);
    if (local_10 == (CItem *)0x0) {
      uVar2 = 0x16;
    }
    else {
      cVar1 = CItem::is_stackable(local_10);
      if (cVar1 == '\x01') {
        if (*(int *)(local_10 + 0x32c) == -1) {
          uVar2 = 0x16;
        }
        else if (local_46 < 1) {
          uVar2 = 0x16;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0x16;
      }
    }
  }
  return uVar2;
}

```

---

## CheckTotalItemPrice

```asm
// === 085c76f0 private_store::CPrivateStore::CheckTotalItemPrice  [0x085c76f0-0x85c77ff] ===
 85c76f0:	55                   	push   %ebp
 85c76f1:	89 e5                	mov    %esp,%ebp
 85c76f3:	53                   	push   %ebx
 85c76f4:	83 ec 24             	sub    $0x24,%esp
 85c76f7:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85c76fe:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85c7705:	e9 cd 00 00 00       	jmp    85c77d7 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0xe7>
 85c770a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c770d:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7710:	83 c2 3c             	add    $0x3c,%edx
 85c7713:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7717:	89 14 24             	mov    %edx,(%esp)
 85c771a:	e8 e7 57 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c771f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85c7722:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7725:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85c7729:	3c 02                	cmp    $0x2,%al
 85c772b:	0f 85 a2 00 00 00    	jne    85c77d3 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0xe3>
 85c7731:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7734:	8b 40 40             	mov    0x40(%eax),%eax
 85c7737:	85 c0                	test   %eax,%eax
 85c7739:	75 0a                	jne    85c7745 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x55>
 85c773b:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7740:	e9 b4 00 00 00       	jmp    85c77f9 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x109>
 85c7745:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85c774c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c774f:	8b 40 02             	mov    0x2(%eax),%eax
 85c7752:	89 c3                	mov    %eax,%ebx
 85c7754:	e8 42 4a b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c7759:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c775d:	89 04 24             	mov    %eax,(%esp)
 85c7760:	e8 cd 82 d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c7765:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c7768:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c776c:	0f 94 c0             	sete   %al
 85c776f:	84 c0                	test   %al,%al
 85c7771:	74 07                	je     85c777a <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x8a>
 85c7773:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7778:	eb 7f                	jmp    85c77f9 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x109>
 85c777a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c777d:	89 04 24             	mov    %eax,(%esp)
 85c7780:	e8 75 9b b2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85c7785:	84 c0                	test   %al,%al
 85c7787:	74 2d                	je     85c77b6 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0xc6>
 85c7789:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c778c:	8b 50 07             	mov    0x7(%eax),%edx
 85c778f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7792:	8b 40 40             	mov    0x40(%eax),%eax
 85c7795:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 85c7798:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c779c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c77a0:	89 04 24             	mov    %eax,(%esp)
 85c77a3:	e8 82 5a 00 00       	call   85cd22a <_ZN13private_store9COperatorIiE7ProductEiiRi>
 85c77a8:	83 f0 01             	xor    $0x1,%eax
 85c77ab:	84 c0                	test   %al,%al
 85c77ad:	74 24                	je     85c77d3 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0xe3>
 85c77af:	b8 00 00 00 00       	mov    $0x0,%eax
 85c77b4:	eb 43                	jmp    85c77f9 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x109>
 85c77b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c77b9:	8b 50 40             	mov    0x40(%eax),%edx
 85c77bc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c77bf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 85c77c2:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85c77c5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c77c8:	85 c0                	test   %eax,%eax
 85c77ca:	7f 07                	jg     85c77d3 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0xe3>
 85c77cc:	b8 00 00 00 00       	mov    $0x0,%eax
 85c77d1:	eb 26                	jmp    85c77f9 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x109>
 85c77d3:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 85c77d7:	83 7d ec 0d          	cmpl   $0xd,-0x14(%ebp)
 85c77db:	0f 9e c0             	setle  %al
 85c77de:	84 c0                	test   %al,%al
 85c77e0:	0f 85 24 ff ff ff    	jne    85c770a <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x1a>
 85c77e6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c77e9:	85 c0                	test   %eax,%eax
 85c77eb:	7f 07                	jg     85c77f4 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x104>
 85c77ed:	b8 00 00 00 00       	mov    $0x0,%eax
 85c77f2:	eb 05                	jmp    85c77f9 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv+0x109>
 85c77f4:	b8 01 00 00 00       	mov    $0x1,%eax
 85c77f9:	83 c4 24             	add    $0x24,%esp
 85c77fc:	5b                   	pop    %ebx
 85c77fd:	5d                   	pop    %ebp
 85c77fe:	c3                   	ret
 85c77ff:	90                   	nop

```

```c
// private_store::CPrivateStore::CheckTotalItemPrice @ 0x85c76f0

/* private_store::CPrivateStore::CheckTotalItemPrice() */

bool __thiscall private_store::CPrivateStore::CheckTotalItemPrice(CPrivateStore *this)

{
  int iVar1;
  char cVar2;
  CDataManager *this_00;
  int local_1c;
  uint local_18;
  int local_14;
  CItem *local_10;
  
  local_1c = 0;
  local_18 = 0;
  do {
    if (0xd < (int)local_18) {
      return 0 < local_1c;
    }
    local_14 = std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_18);
    if (*(char *)(local_14 + 0x3d) == '\x02') {
      if (*(int *)(local_14 + 0x40) == 0) {
        return false;
      }
      local_10 = (CItem *)0x0;
      iVar1 = *(int *)(local_14 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar1);
      if (local_10 == (CItem *)0x0) {
        return false;
      }
      cVar2 = CItem::is_stackable(local_10);
      if (cVar2 == '\0') {
        local_1c = *(int *)(local_14 + 0x40) + local_1c;
        if (local_1c < 1) {
          return false;
        }
      }
      else {
        cVar2 = COperator<int>::Product(*(int *)(local_14 + 0x40),*(int *)(local_14 + 7),&local_1c);
        if (cVar2 != '\x01') {
          return false;
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## CheckValidItem

```asm
// === 085c9bb8 private_store::CPrivateStore::CheckValidItem  [0x085c9bb8-0x85c9cc1] ===
 85c9bb8:	55                   	push   %ebp
 85c9bb9:	89 e5                	mov    %esp,%ebp
 85c9bbb:	53                   	push   %ebx
 85c9bbc:	83 ec 64             	sub    $0x64,%esp
 85c9bbf:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9bc2:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9bc5:	89 04 24             	mov    %eax,(%esp)
 85c9bc8:	e8 b1 06 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c9bcd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c9bd0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9bd3:	8b 55 10             	mov    0x10(%ebp),%edx
 85c9bd6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9bda:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9bde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c9be1:	89 04 24             	mov    %eax,(%esp)
 85c9be4:	e8 35 14 f3 ff       	call   84fb01e <_ZNK10CInventory14CheckValidSlotEii>
 85c9be9:	83 f0 01             	xor    $0x1,%eax
 85c9bec:	84 c0                	test   %al,%al
 85c9bee:	74 0a                	je     85c9bfa <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x42>
 85c9bf0:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9bf5:	e9 c2 00 00 00       	jmp    85c9cbc <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x104>
 85c9bfa:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c9bfd:	8d 45 b7             	lea    -0x49(%ebp),%eax
 85c9c00:	8b 4d 10             	mov    0x10(%ebp),%ecx
 85c9c03:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c9c07:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9c0b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c9c0e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9c12:	89 04 24             	mov    %eax,(%esp)
 85c9c15:	e8 fe 1c f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85c9c1a:	83 ec 04             	sub    $0x4,%esp
 85c9c1d:	8b 45 b9             	mov    -0x47(%ebp),%eax
 85c9c20:	85 c0                	test   %eax,%eax
 85c9c22:	75 0a                	jne    85c9c2e <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x76>
 85c9c24:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9c29:	e9 8e 00 00 00       	jmp    85c9cbc <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x104>
 85c9c2e:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 85c9c32:	75 23                	jne    85c9c57 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x9f>
 85c9c34:	8d 45 b7             	lea    -0x49(%ebp),%eax
 85c9c37:	89 04 24             	mov    %eax,(%esp)
 85c9c3a:	e8 d3 6b b8 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 85c9c3f:	83 f0 01             	xor    $0x1,%eax
 85c9c42:	84 c0                	test   %al,%al
 85c9c44:	74 71                	je     85c9cb7 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0xff>
 85c9c46:	8b 45 be             	mov    -0x42(%ebp),%eax
 85c9c49:	2b 45 14             	sub    0x14(%ebp),%eax
 85c9c4c:	85 c0                	test   %eax,%eax
 85c9c4e:	79 67                	jns    85c9cb7 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0xff>
 85c9c50:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9c55:	eb 65                	jmp    85c9cbc <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x104>
 85c9c57:	83 7d 0c 02          	cmpl   $0x2,0xc(%ebp)
 85c9c5b:	75 5a                	jne    85c9cb7 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0xff>
 85c9c5d:	0f b6 45 b8          	movzbl -0x48(%ebp),%eax
 85c9c61:	3c 08                	cmp    $0x8,%al
 85c9c63:	74 07                	je     85c9c6c <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0xb4>
 85c9c65:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9c6a:	eb 50                	jmp    85c9cbc <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x104>
 85c9c6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c9c6f:	89 04 24             	mov    %eax,(%esp)
 85c9c72:	e8 ff 38 b1 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 85c9c77:	8b 45 be             	mov    -0x42(%ebp),%eax
 85c9c7a:	89 04 24             	mov    %eax,(%esp)
 85c9c7d:	e8 8b 35 c6 ff       	call   822d20d <_ZN8WongWork14CAvatarItemMgr9IsTempKeyEi>
 85c9c82:	84 c0                	test   %al,%al
 85c9c84:	74 07                	je     85c9c8d <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0xd5>
 85c9c86:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9c8b:	eb 2f                	jmp    85c9cbc <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x104>
 85c9c8d:	8b 5d be             	mov    -0x42(%ebp),%ebx
 85c9c90:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c9c93:	89 04 24             	mov    %eax,(%esp)
 85c9c96:	e8 db 38 b1 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 85c9c9b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c9c9f:	89 04 24             	mov    %eax,(%esp)
 85c9ca2:	e8 73 fb d2 ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 85c9ca7:	85 c0                	test   %eax,%eax
 85c9ca9:	0f 95 c0             	setne  %al
 85c9cac:	84 c0                	test   %al,%al
 85c9cae:	74 07                	je     85c9cb7 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0xff>
 85c9cb0:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9cb5:	eb 05                	jmp    85c9cbc <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii+0x104>
 85c9cb7:	b8 01 00 00 00       	mov    $0x1,%eax
 85c9cbc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85c9cbf:	c9                   	leave
 85c9cc0:	c3                   	ret
 85c9cc1:	90                   	nop

```

```c
// private_store::CPrivateStore::CheckValidItem @ 0x85c9bb8

/* private_store::CPrivateStore::CheckValidItem(INVEN_TYPE, int, int) */

undefined4 __thiscall
private_store::CPrivateStore::CheckValidItem
          (CPrivateStore *this,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  CAvatarItemMgr *this_00;
  int iVar3;
  Inven_Item local_4d;
  char local_4c;
  int local_4b;
  int local_46;
  CInventory *local_10;
  
  local_10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
  cVar1 = CInventory::CheckValidSlot(local_10,param_2,param_3);
  if (cVar1 == '\x01') {
    CInventory::GetInvenSlot((int)&local_4d,(int)local_10);
    if (local_4b == 0) {
      uVar2 = 0;
    }
    else {
      if (param_2 == 1) {
        cVar1 = Inven_Item::isEquipableItemType(&local_4d);
        if ((cVar1 != '\x01') && (local_46 - param_4 < 0)) {
          return 0;
        }
      }
      else if (param_2 == 2) {
        if (local_4c != '\b') {
          return 0;
        }
        CInventory::GetAvatarItemMgrR(local_10);
        cVar1 = WongWork::CAvatarItemMgr::IsTempKey(local_46);
        if (cVar1 != '\0') {
          return 0;
        }
        this_00 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(local_10);
        iVar3 = WongWork::CAvatarItemMgr::GetExpireDate(this_00,local_46);
        if (iVar3 != 0) {
          return 0;
        }
      }
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

## CheckValidItem_085c9cc2

```asm
// === 085c9cc2 private_store::CPrivateStore::CheckValidItem  [0x085c9cc2-0x85c9d4d] ===
 85c9cc2:	55                   	push   %ebp
 85c9cc3:	89 e5                	mov    %esp,%ebp
 85c9cc5:	83 ec 68             	sub    $0x68,%esp
 85c9cc8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9ccb:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9cce:	89 04 24             	mov    %eax,(%esp)
 85c9cd1:	e8 ae 7d b8 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 85c9cd6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c9cd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9cdc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9ce0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c9ce3:	89 04 24             	mov    %eax,(%esp)
 85c9ce6:	e8 b1 36 f4 ff       	call   850d39c <_ZNK6CCargo14IsOperatorableEi>
 85c9ceb:	83 f0 01             	xor    $0x1,%eax
 85c9cee:	84 c0                	test   %al,%al
 85c9cf0:	74 07                	je     85c9cf9 <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x37>
 85c9cf2:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9cf7:	eb 52                	jmp    85c9d4b <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x89>
 85c9cf9:	8d 45 b7             	lea    -0x49(%ebp),%eax
 85c9cfc:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c9cff:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9d03:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c9d06:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9d0a:	89 04 24             	mov    %eax,(%esp)
 85c9d0d:	e8 a2 15 f4 ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 85c9d12:	83 ec 04             	sub    $0x4,%esp
 85c9d15:	8b 45 b9             	mov    -0x47(%ebp),%eax
 85c9d18:	85 c0                	test   %eax,%eax
 85c9d1a:	75 07                	jne    85c9d23 <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x61>
 85c9d1c:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9d21:	eb 28                	jmp    85c9d4b <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x89>
 85c9d23:	8d 45 b7             	lea    -0x49(%ebp),%eax
 85c9d26:	89 04 24             	mov    %eax,(%esp)
 85c9d29:	e8 e4 6a b8 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 85c9d2e:	83 f0 01             	xor    $0x1,%eax
 85c9d31:	84 c0                	test   %al,%al
 85c9d33:	74 11                	je     85c9d46 <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x84>
 85c9d35:	8b 45 be             	mov    -0x42(%ebp),%eax
 85c9d38:	2b 45 10             	sub    0x10(%ebp),%eax
 85c9d3b:	85 c0                	test   %eax,%eax
 85c9d3d:	79 07                	jns    85c9d46 <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x84>
 85c9d3f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9d44:	eb 05                	jmp    85c9d4b <_ZN13private_store13CPrivateStore14CheckValidItemEii+0x89>
 85c9d46:	b8 01 00 00 00       	mov    $0x1,%eax
 85c9d4b:	c9                   	leave
 85c9d4c:	c3                   	ret
 85c9d4d:	90                   	nop

```

```c
// private_store::CPrivateStore::CheckValidItem @ 0x85c9cc2

/* private_store::CPrivateStore::CheckValidItem(int, int) */

undefined4 __thiscall
private_store::CPrivateStore::CheckValidItem(CPrivateStore *this,int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  Inven_Item local_4d [2];
  int local_4b;
  int local_46;
  CCargo *local_10;
  
  local_10 = (CCargo *)CUserCharacInfo::getCurCharacCargoR(*(CUserCharacInfo **)(this + 0x2c));
  cVar1 = CCargo::IsOperatorable(local_10,param_1);
  if (cVar1 == '\x01') {
    CCargo::get_cargo_slot((int)local_4d);
    if (local_4b == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = Inven_Item::isEquipableItemType(local_4d);
      if ((cVar1 == '\x01') || (-1 < local_46 - param_2)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## CheckValidItem_085c9d4e

```asm
// === 085c9d4e private_store::CPrivateStore::CheckValidItem  [0x085c9d4e-0x85c9f21] ===
 85c9d4e:	55                   	push   %ebp
 85c9d4f:	89 e5                	mov    %esp,%ebp
 85c9d51:	53                   	push   %ebx
 85c9d52:	83 ec 24             	sub    $0x24,%esp
 85c9d55:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9d58:	8b 40 02             	mov    0x2(%eax),%eax
 85c9d5b:	89 c3                	mov    %eax,%ebx
 85c9d5d:	e8 39 24 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c9d62:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c9d66:	89 04 24             	mov    %eax,(%esp)
 85c9d69:	e8 c4 5c d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c9d6e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85c9d71:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85c9d75:	75 0a                	jne    85c9d81 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x33>
 85c9d77:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9d7c:	e9 9a 01 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9d81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c9d84:	89 04 24             	mov    %eax,(%esp)
 85c9d87:	e8 56 75 b2 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 85c9d8c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c9d8f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c9d93:	74 4b                	je     85c9de0 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x92>
 85c9d95:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85c9d99:	75 17                	jne    85c9db2 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x64>
 85c9d9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9d9e:	0f b6 00             	movzbl (%eax),%eax
 85c9da1:	83 f0 01             	xor    $0x1,%eax
 85c9da4:	84 c0                	test   %al,%al
 85c9da6:	74 38                	je     85c9de0 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x92>
 85c9da8:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9dad:	e9 69 01 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9db2:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85c9db6:	75 1e                	jne    85c9dd6 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x88>
 85c9db8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9dbb:	89 04 24             	mov    %eax,(%esp)
 85c9dbe:	e8 5f 66 b5 ff       	call   8120422 <_ZNK10Inven_Item18GetTradeLimitCountEv>
 85c9dc3:	84 c0                	test   %al,%al
 85c9dc5:	0f 94 c0             	sete   %al
 85c9dc8:	84 c0                	test   %al,%al
 85c9dca:	74 14                	je     85c9de0 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x92>
 85c9dcc:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9dd1:	e9 45 01 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9dd6:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9ddb:	e9 3b 01 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9de0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9de3:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c9de7:	0f b6 c0             	movzbl %al,%eax
 85c9dea:	89 04 24             	mov    %eax,(%esp)
 85c9ded:	e8 67 33 f4 ff       	call   850d159 <_Z18IsCreatureItemTypei>
 85c9df2:	84 c0                	test   %al,%al
 85c9df4:	74 0a                	je     85c9e00 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0xb2>
 85c9df6:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9dfb:	e9 1b 01 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9e00:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c9e03:	8b 00                	mov    (%eax),%eax
 85c9e05:	83 c0 14             	add    $0x14,%eax
 85c9e08:	8b 10                	mov    (%eax),%edx
 85c9e0a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c9e0d:	89 04 24             	mov    %eax,(%esp)
 85c9e10:	ff d2                	call   *%edx
 85c9e12:	84 c0                	test   %al,%al
 85c9e14:	74 0a                	je     85c9e20 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0xd2>
 85c9e16:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9e1b:	e9 fb 00 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9e20:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c9e23:	89 04 24             	mov    %eax,(%esp)
 85c9e26:	e8 cf 74 b2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85c9e2b:	84 c0                	test   %al,%al
 85c9e2d:	74 15                	je     85c9e44 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0xf6>
 85c9e2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9e32:	8b 40 07             	mov    0x7(%eax),%eax
 85c9e35:	3b 45 10             	cmp    0x10(%ebp),%eax
 85c9e38:	7d 0a                	jge    85c9e44 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0xf6>
 85c9e3a:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9e3f:	e9 d7 00 00 00       	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9e44:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9e47:	0f b6 40 46          	movzbl 0x46(%eax),%eax
 85c9e4b:	0f be c0             	movsbl %al,%eax
 85c9e4e:	83 f8 01             	cmp    $0x1,%eax
 85c9e51:	0f 84 94 00 00 00    	je     85c9eeb <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x19d>
 85c9e57:	83 f8 01             	cmp    $0x1,%eax
 85c9e5a:	7f 09                	jg     85c9e65 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x117>
 85c9e5c:	85 c0                	test   %eax,%eax
 85c9e5e:	74 14                	je     85c9e74 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x126>
 85c9e60:	e9 b1 00 00 00       	jmp    85c9f16 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1c8>
 85c9e65:	83 f8 02             	cmp    $0x2,%eax
 85c9e68:	74 5e                	je     85c9ec8 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x17a>
 85c9e6a:	83 f8 03             	cmp    $0x3,%eax
 85c9e6d:	74 30                	je     85c9e9f <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x151>
 85c9e6f:	e9 a2 00 00 00       	jmp    85c9f16 <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1c8>
 85c9e74:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9e77:	8b 50 07             	mov    0x7(%eax),%edx
 85c9e7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9e7d:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9e81:	98                   	cwtl
 85c9e82:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c9e86:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c9e8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c9e91:	00 
 85c9e92:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9e95:	89 04 24             	mov    %eax,(%esp)
 85c9e98:	e8 1b fd ff ff       	call   85c9bb8 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii>
 85c9e9d:	eb 7c                	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9e9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9ea2:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9ea6:	98                   	cwtl
 85c9ea7:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c9eae:	00 
 85c9eaf:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c9eb3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c9eba:	00 
 85c9ebb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9ebe:	89 04 24             	mov    %eax,(%esp)
 85c9ec1:	e8 f2 fc ff ff       	call   85c9bb8 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii>
 85c9ec6:	eb 53                	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9ec8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9ecb:	8b 50 07             	mov    0x7(%eax),%edx
 85c9ece:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9ed1:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9ed5:	98                   	cwtl
 85c9ed6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9eda:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9ede:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9ee1:	89 04 24             	mov    %eax,(%esp)
 85c9ee4:	e8 d9 fd ff ff       	call   85c9cc2 <_ZN13private_store13CPrivateStore14CheckValidItemEii>
 85c9ee9:	eb 30                	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9eeb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9eee:	8b 50 07             	mov    0x7(%eax),%edx
 85c9ef1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9ef4:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9ef8:	98                   	cwtl
 85c9ef9:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c9efd:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c9f01:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85c9f08:	00 
 85c9f09:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9f0c:	89 04 24             	mov    %eax,(%esp)
 85c9f0f:	e8 a4 fc ff ff       	call   85c9bb8 <_ZN13private_store13CPrivateStore14CheckValidItemE10INVEN_TYPEii>
 85c9f14:	eb 05                	jmp    85c9f1b <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi+0x1cd>
 85c9f16:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9f1b:	83 c4 24             	add    $0x24,%esp
 85c9f1e:	5b                   	pop    %ebx
 85c9f1f:	5d                   	pop    %ebp
 85c9f20:	c3                   	ret
 85c9f21:	90                   	nop

```

```c
// private_store::CPrivateStore::CheckValidItem @ 0x85c9d4e

/* private_store::CPrivateStore::CheckValidItem(private_store::PrivateStoreItem&, int) */

undefined4 __thiscall
private_store::CPrivateStore::CheckValidItem
          (CPrivateStore *this,PrivateStoreItem *param_1,int param_2)

{
  PrivateStoreItem PVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = *(int *)(param_1 + 2);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if (this_01 == (CItem *)0x0) {
    return 0;
  }
  iVar3 = CItem::GetAttachType(this_01);
  if (iVar3 != 0) {
    if (iVar3 == 3) {
      if (*param_1 != (PrivateStoreItem)0x1) {
        return 0;
      }
    }
    else {
      if (iVar3 != 7) {
        return 0;
      }
      cVar2 = Inven_Item::GetTradeLimitCount((Inven_Item *)param_1);
      if (cVar2 == '\0') {
        return 0;
      }
    }
  }
  cVar2 = IsCreatureItemType((uint)(byte)param_1[1]);
  if (cVar2 == '\0') {
    cVar2 = (**(code **)(*(int *)this_01 + 0x14))(this_01);
    if (cVar2 == '\0') {
      cVar2 = CItem::is_stackable(this_01);
      if ((cVar2 == '\0') || (param_2 <= *(int *)(param_1 + 7))) {
        PVar1 = param_1[0x46];
        if (PVar1 == (PrivateStoreItem)0x1) {
          uVar4 = CheckValidItem(this,2,(int)*(short *)(param_1 + 0x48),*(undefined4 *)(param_1 + 7)
                                );
        }
        else {
          if ((char)PVar1 < '\x02') {
            if (PVar1 == (PrivateStoreItem)0x0) {
              uVar4 = CheckValidItem(this,1,(int)*(short *)(param_1 + 0x48),
                                     *(undefined4 *)(param_1 + 7));
              return uVar4;
            }
          }
          else {
            if (PVar1 == (PrivateStoreItem)0x2) {
              uVar4 = CheckValidItem(this,(int)*(short *)(param_1 + 0x48),*(int *)(param_1 + 7));
              return uVar4;
            }
            if (PVar1 == (PrivateStoreItem)0x3) {
              uVar4 = CheckValidItem(this,0,(int)*(short *)(param_1 + 0x48),1);
              return uVar4;
            }
          }
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## Clear

```asm
// === 085c4e70 private_store::CPrivateStore::Clear  [0x085c4e70-0x85c4ecb] ===
 85c4e70:	55                   	push   %ebp
 85c4e71:	89 e5                	mov    %esp,%ebp
 85c4e73:	83 ec 18             	sub    $0x18,%esp
 85c4e76:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e79:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 85c4e80:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e83:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 85c4e8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e8d:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 85c4e91:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4e94:	83 c0 24             	add    $0x24,%eax
 85c4e97:	89 04 24             	mov    %eax,(%esp)
 85c4e9a:	e8 e5 68 00 00       	call   85cb784 <_ZN13private_store15PrivateStorePos5clearEv>
 85c4e9f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ea2:	83 c0 34             	add    $0x34,%eax
 85c4ea5:	89 04 24             	mov    %eax,(%esp)
 85c4ea8:	e8 8b 82 00 00       	call   85cd138 <_ZNSt4listIP5CUserSaIS1_EE5clearEv>
 85c4ead:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4eb0:	89 04 24             	mov    %eax,(%esp)
 85c4eb3:	e8 9a 00 00 00       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c4eb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ebb:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 85c4ebf:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ec2:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 85c4ec9:	c9                   	leave
 85c4eca:	c3                   	ret
 85c4ecb:	90                   	nop

```

```c
// private_store::CPrivateStore::Clear @ 0x85c4e70

/* private_store::CPrivateStore::Clear() */

void __thiscall private_store::CPrivateStore::Clear(CPrivateStore *this)

{
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x10] = (CPrivateStore)0x0;
  PrivateStorePos::clear((PrivateStorePos *)(this + 0x24));
  std::list<CUser*,std::allocator<CUser*>>::clear
            ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
  ResetItems(this);
  this[8] = (CPrivateStore)0x0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## CompleteDisplay

```asm
// === 085c7800 private_store::CPrivateStore::CompleteDisplay  [0x085c7800-0x85c7adb] ===
 85c7800:	55                   	push   %ebp
 85c7801:	89 e5                	mov    %esp,%ebp
 85c7803:	56                   	push   %esi
 85c7804:	53                   	push   %ebx
 85c7805:	83 ec 40             	sub    $0x40,%esp
 85c7808:	8b 45 10             	mov    0x10(%ebp),%eax
 85c780b:	66 89 45 d4          	mov    %ax,-0x2c(%ebp)
 85c780f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7812:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7815:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7818:	83 c2 14             	add    $0x14,%edx
 85c781b:	c7 44 24 0c 5a 00 00 	movl   $0x5a,0xc(%esp)
 85c7822:	00 
 85c7823:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c782a:	00 
 85c782b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c782f:	89 14 24             	mov    %edx,(%esp)
 85c7832:	e8 71 3f 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c7837:	8b 45 08             	mov    0x8(%ebp),%eax
 85c783a:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c783d:	85 c0                	test   %eax,%eax
 85c783f:	75 0a                	jne    85c784b <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x4b>
 85c7841:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7846:	e9 88 02 00 00       	jmp    85c7ad3 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x2d3>
 85c784b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c784e:	8b 40 20             	mov    0x20(%eax),%eax
 85c7851:	85 c0                	test   %eax,%eax
 85c7853:	75 20                	jne    85c7875 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x75>
 85c7855:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7858:	83 c0 14             	add    $0x14,%eax
 85c785b:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c7862:	00 
 85c7863:	89 04 24             	mov    %eax,(%esp)
 85c7866:	e8 11 d4 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c786b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7870:	e9 5e 02 00 00       	jmp    85c7ad3 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x2d3>
 85c7875:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7878:	89 04 24             	mov    %eax,(%esp)
 85c787b:	e8 c6 f9 ff ff       	call   85c7246 <_ZN13private_store13CPrivateStore9MoveItemsEv>
 85c7880:	83 f0 01             	xor    $0x1,%eax
 85c7883:	84 c0                	test   %al,%al
 85c7885:	74 0a                	je     85c7891 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x91>
 85c7887:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c788c:	e9 42 02 00 00       	jmp    85c7ad3 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x2d3>
 85c7891:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7894:	89 04 24             	mov    %eax,(%esp)
 85c7897:	e8 7a 28 00 00       	call   85ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>
 85c789c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c789f:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c78a2:	89 04 24             	mov    %eax,(%esp)
 85c78a5:	e8 c6 b9 08 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 85c78aa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c78ad:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c78b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c78b7:	00 
 85c78b8:	89 04 24             	mov    %eax,(%esp)
 85c78bb:	e8 ac 62 09 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 85c78c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c78c3:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c78c6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c78cd:	00 
 85c78ce:	89 04 24             	mov    %eax,(%esp)
 85c78d1:	e8 96 62 09 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 85c78d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c78d9:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c78dc:	89 04 24             	mov    %eax,(%esp)
 85c78df:	e8 9a 29 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c78e4:	89 04 24             	mov    %eax,(%esp)
 85c78e7:	e8 a2 36 f3 ff       	call   84faf8e <_ZNK10CInventory21SendItemLockListInvenEv>
 85c78ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85c78ef:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c78f2:	89 04 24             	mov    %eax,(%esp)
 85c78f5:	e8 84 29 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c78fa:	89 04 24             	mov    %eax,(%esp)
 85c78fd:	e8 bc 36 f3 ff       	call   84fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>
 85c7902:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7905:	89 04 24             	mov    %eax,(%esp)
 85c7908:	e8 d7 cc c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c790d:	83 f0 01             	xor    $0x1,%eax
 85c7910:	84 c0                	test   %al,%al
 85c7912:	74 0e                	je     85c7922 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x122>
 85c7914:	66 83 7d d4 ff       	cmpw   $0xffff,-0x2c(%ebp)
 85c7919:	74 07                	je     85c7922 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x122>
 85c791b:	b8 01 00 00 00       	mov    $0x1,%eax
 85c7920:	eb 05                	jmp    85c7927 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x127>
 85c7922:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7927:	84 c0                	test   %al,%al
 85c7929:	74 0a                	je     85c7935 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x135>
 85c792b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7930:	e9 9e 01 00 00       	jmp    85c7ad3 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x2d3>
 85c7935:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7938:	89 04 24             	mov    %eax,(%esp)
 85c793b:	e8 a4 cc c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c7940:	84 c0                	test   %al,%al
 85c7942:	0f 84 a5 00 00 00    	je     85c79ed <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x1ed>
 85c7948:	0f b7 5d d4          	movzwl -0x2c(%ebp),%ebx
 85c794c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c794f:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7952:	89 04 24             	mov    %eax,(%esp)
 85c7955:	e8 34 29 b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c795a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c7961:	00 
 85c7962:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c7969:	00 
 85c796a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c796e:	89 04 24             	mov    %eax,(%esp)
 85c7971:	e8 68 7f f3 ff       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 85c7976:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c7979:	0f b7 55 d4          	movzwl -0x2c(%ebp),%edx
 85c797d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7980:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7983:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c7987:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85c798e:	00 
 85c798f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c7996:	00 
 85c7997:	89 04 24             	mov    %eax,(%esp)
 85c799a:	e8 39 49 0b 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 85c799f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c79a3:	74 48                	je     85c79ed <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x1ed>
 85c79a5:	0f b7 5d d4          	movzwl -0x2c(%ebp),%ebx
 85c79a9:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c79b0:	00 
 85c79b1:	c7 44 24 08 c1 06 00 	movl   $0x6c1,0x8(%esp)
 85c79b8:	00 
 85c79b9:	c7 44 24 04 00 e6 cb 	movl   $0x8cbe600,0x4(%esp)
 85c79c0:	08 
 85c79c1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c79c4:	89 04 24             	mov    %eax,(%esp)
 85c79c7:	e8 4c 7d f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c79cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c79d0:	c7 44 24 04 f4 d5 cb 	movl   $0x8cbd5f4,0x4(%esp)
 85c79d7:	08 
 85c79d8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c79db:	89 04 24             	mov    %eax,(%esp)
 85c79de:	e8 a5 7d f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c79e3:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c79e8:	e9 e6 00 00 00       	jmp    85c7ad3 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x2d3>
 85c79ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85c79f0:	8d 50 48             	lea    0x48(%eax),%edx
 85c79f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c79f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c79fa:	89 14 24             	mov    %edx,(%esp)
 85c79fd:	e8 1e 0d 14 00       	call   8708720 <_ZNSsaSEPKc>
 85c7a02:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c7a05:	89 04 24             	mov    %eax,(%esp)
 85c7a08:	e8 65 3f 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c7a0d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a10:	89 04 24             	mov    %eax,(%esp)
 85c7a13:	e8 cc cb c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c7a18:	0f b6 d8             	movzbl %al,%ebx
 85c7a1b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a1e:	8d 70 48             	lea    0x48(%eax),%esi
 85c7a21:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a24:	89 04 24             	mov    %eax,(%esp)
 85c7a27:	e8 68 3e 00 00       	call   85cb894 <_ZN13private_store13CPrivateStore14GetSellerIndexEv>
 85c7a2c:	0f b7 c0             	movzwl %ax,%eax
 85c7a2f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c7a33:	89 74 24 08          	mov    %esi,0x8(%esp)
 85c7a37:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7a3b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c7a3e:	89 04 24             	mov    %eax,(%esp)
 85c7a41:	e8 0c 42 00 00       	call   85cbc52 <_ZN13private_store17CPacketBufPrivate29MakeNotipacketCompleteDisplayEtRSsb>
 85c7a46:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a49:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c7a4d:	0f b6 d0             	movzbl %al,%edx
 85c7a50:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a53:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c7a57:	0f b6 c0             	movzbl %al,%eax
 85c7a5a:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 85c7a5d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c7a61:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7a65:	89 04 24             	mov    %eax,(%esp)
 85c7a68:	e8 06 50 00 00       	call   85cca73 <_ZN13private_store17CBroadcastPrivate4SendEiiR11PacketGuard>
 85c7a6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a70:	89 04 24             	mov    %eax,(%esp)
 85c7a73:	e8 6c cb c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c7a78:	0f b6 c0             	movzbl %al,%eax
 85c7a7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7a7f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c7a82:	89 04 24             	mov    %eax,(%esp)
 85c7a85:	e8 40 41 00 00       	call   85cbbca <_ZN13private_store17CPacketBufPrivate28MakeCmdpacketCompleteDisplayEb>
 85c7a8a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7a8d:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7a90:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85c7a93:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7a97:	89 04 24             	mov    %eax,(%esp)
 85c7a9a:	e8 1b 0b 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c7a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7aa2:	c6 40 10 02          	movb   $0x2,0x10(%eax)
 85c7aa6:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c7aab:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c7aae:	89 04 24             	mov    %eax,(%esp)
 85c7ab1:	e8 f6 4f 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c7ab6:	eb 1b                	jmp    85c7ad3 <_ZN13private_store13CPrivateStore15CompleteDisplayEPKct+0x2d3>
 85c7ab8:	89 d3                	mov    %edx,%ebx
 85c7aba:	89 c6                	mov    %eax,%esi
 85c7abc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c7abf:	89 04 24             	mov    %eax,(%esp)
 85c7ac2:	e8 e5 4f 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c7ac7:	89 f0                	mov    %esi,%eax
 85c7ac9:	89 da                	mov    %ebx,%edx
 85c7acb:	89 04 24             	mov    %eax,(%esp)
 85c7ace:	e8 7d bc 51 00       	call   8ae3750 <_Unwind_Resume>
 85c7ad3:	89 d8                	mov    %ebx,%eax
 85c7ad5:	83 c4 40             	add    $0x40,%esp
 85c7ad8:	5b                   	pop    %ebx
 85c7ad9:	5e                   	pop    %esi
 85c7ada:	5d                   	pop    %ebp
 85c7adb:	c3                   	ret

```

```c
// private_store::CPrivateStore::CompleteDisplay @ 0x85c7800

/* private_store::CPrivateStore::CompleteDisplay(char const*, unsigned short) */

undefined4 __thiscall
private_store::CPrivateStore::CompleteDisplay(CPrivateStore *this,char *param_1,ushort param_2)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  CPacketBufPrivate local_2c [12];
  cMyTrace local_20 [16];
  int local_10;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x5a);
  if (*(int *)(this + 0x2c) == 0) {
    uVar5 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar5 = 0;
  }
  else {
    cVar1 = MoveItems(this);
    if (cVar1 == '\x01') {
      SavePrivateStore(this);
      CUser::UpdateData(*(CUser **)(this + 0x2c));
      CUser::send_itemspace(*(CUser **)(this + 0x2c),0);
      CUser::send_itemspace(*(CUser **)(this + 0x2c),1);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
      ;
      CInventory::SendItemLockListInven(pCVar4);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
      ;
      CInventory::SendItemLockListAvatar(pCVar4);
      cVar1 = isDollCreated(this);
      if ((cVar1 == '\x01') || (param_2 == 0xffff)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        uVar5 = 0;
      }
      else {
        cVar1 = isDollCreated(this);
        if (cVar1 != '\0') {
          pCVar4 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
          local_10 = CInventory::use_item(pCVar4,(uint)param_2,1,1);
          CUser::SendUpdateItem(*(CUser **)(this + 0x2c),1,0,param_2);
          if (local_10 != 0) {
            cMyTrace::cMyTrace(local_20,
                               "virtual bool private_store::CPrivateStore::CompleteDisplay(const char*, short unsigned int)"
                               ,0x6c1,5);
            cMyTrace::operator()
                      (local_20,"CPrivateStore::CompleteDisplay() ERROR!!! : use_item(%d)",
                       (uint)param_2);
            return 0;
          }
        }
        std::string::operator=((string *)(this + 0x48),param_1);
        CPacketBufPrivate::CPacketBufPrivate(local_2c);
        bVar2 = (bool)isDollCreated(this);
        uVar3 = GetSellerIndex(this);
                    /* try { // try from 085c7a41 to 085c7a9e has its CatchHandler @ 085c7ab8 */
        CPacketBufPrivate::MakeNotipacketCompleteDisplay
                  (local_2c,uVar3,(string *)(this + 0x48),bVar2);
        CBroadcastPrivate::Send
                  ((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_2c);
        bVar2 = (bool)isDollCreated(this);
        CPacketBufPrivate::MakeCmdpacketCompleteDisplay(local_2c,bVar2);
        CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_2c);
        this[0x10] = (CPrivateStore)0x2;
        uVar5 = 1;
        CPacketBufPrivate::~CPacketBufPrivate(local_2c);
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

---

## CopyItems

```asm
// === 085c4f9c private_store::CPrivateStore::CopyItems  [0x085c4f9c-0x85c4ff1] ===
 85c4f9c:	55                   	push   %ebp
 85c4f9d:	89 e5                	mov    %esp,%ebp
 85c4f9f:	83 ec 28             	sub    $0x28,%esp
 85c4fa2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4fa5:	89 04 24             	mov    %eax,(%esp)
 85c4fa8:	e8 a5 ff ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c4fad:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4fb0:	8d 50 3c             	lea    0x3c(%eax),%edx
 85c4fb3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85c4fb6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c4fba:	89 04 24             	mov    %eax,(%esp)
 85c4fbd:	e8 b6 81 00 00       	call   85cd178 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EE5beginEv>
 85c4fc2:	83 ec 04             	sub    $0x4,%esp
 85c4fc5:	8b 45 10             	mov    0x10(%ebp),%eax
 85c4fc8:	6b c0 4c             	imul   $0x4c,%eax,%eax
 85c4fcb:	89 c2                	mov    %eax,%edx
 85c4fcd:	03 55 0c             	add    0xc(%ebp),%edx
 85c4fd0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85c4fd3:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 85c4fd6:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c4fda:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c4fde:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c4fe1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c4fe5:	89 04 24             	mov    %eax,(%esp)
 85c4fe8:	e8 ae 81 00 00       	call   85cd19b <_ZSt4copyIPN13private_store16PrivateStoreItemEN9__gnu_cxx17__normal_iteratorIS2_St6vectorIS1_SaIS1_EEEEET0_T_SA_S9_>
 85c4fed:	83 ec 04             	sub    $0x4,%esp
 85c4ff0:	c9                   	leave
 85c4ff1:	c3                   	ret

```

```c
// private_store::CPrivateStore::CopyItems @ 0x85c4f9c

/* private_store::CPrivateStore::CopyItems(private_store::PrivateStoreItem*, int) */

void __thiscall
private_store::CPrivateStore::CopyItems(CPrivateStore *this,PrivateStoreItem *param_1,int param_2)

{
  undefined1 local_14 [4];
  undefined4 local_10;
  
  ResetItems(this);
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  begin();
  std::
  copy<private_store::PrivateStoreItem*,__gnu_cxx::__normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>>
            (local_14,param_1,param_1 + param_2 * 0x4c,local_10);
  return;
}

```

---

## CreatePrivateStore

```asm
// === 085c53ea private_store::CPrivateStore::CreatePrivateStore  [0x085c53ea-0x85c5b5f] ===
 85c53ea:	55                   	push   %ebp
 85c53eb:	89 e5                	mov    %esp,%ebp
 85c53ed:	57                   	push   %edi
 85c53ee:	56                   	push   %esi
 85c53ef:	53                   	push   %ebx
 85c53f0:	81 ec 5c 01 00 00    	sub    $0x15c,%esp
 85c53f6:	8b 75 0c             	mov    0xc(%ebp),%esi
 85c53f9:	8b 5d 10             	mov    0x10(%ebp),%ebx
 85c53fc:	8b 4d 14             	mov    0x14(%ebp),%ecx
 85c53ff:	8b 55 18             	mov    0x18(%ebp),%edx
 85c5402:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85c5405:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 85c540b:	89 f0                	mov    %esi,%eax
 85c540d:	88 85 e4 fe ff ff    	mov    %al,-0x11c(%ebp)
 85c5413:	88 9d e0 fe ff ff    	mov    %bl,-0x120(%ebp)
 85c5419:	66 89 8d dc fe ff ff 	mov    %cx,-0x124(%ebp)
 85c5420:	66 89 95 d8 fe ff ff 	mov    %dx,-0x128(%ebp)
 85c5427:	0f b7 95 c4 fe ff ff 	movzwl -0x13c(%ebp),%edx
 85c542e:	66 89 95 d4 fe ff ff 	mov    %dx,-0x12c(%ebp)
 85c5435:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5438:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c543b:	8b 55 08             	mov    0x8(%ebp),%edx
 85c543e:	83 c2 14             	add    $0x14,%edx
 85c5441:	c7 44 24 0c 58 00 00 	movl   $0x58,0xc(%esp)
 85c5448:	00 
 85c5449:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c5450:	00 
 85c5451:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5455:	89 14 24             	mov    %edx,(%esp)
 85c5458:	e8 4b 63 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c545d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5460:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5463:	85 c0                	test   %eax,%eax
 85c5465:	75 0a                	jne    85c5471 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x87>
 85c5467:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c546c:	e9 e2 06 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5471:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5474:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5477:	89 04 24             	mov    %eax,(%esp)
 85c547a:	e8 9f 23 08 00       	call   864781e <_ZN15CUserCharacInfo19IsBusyDisjointStoreEv>
 85c547f:	84 c0                	test   %al,%al
 85c5481:	74 20                	je     85c54a3 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0xb9>
 85c5483:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5486:	83 c0 14             	add    $0x14,%eax
 85c5489:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85c5490:	00 
 85c5491:	89 04 24             	mov    %eax,(%esp)
 85c5494:	e8 e3 f7 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c5499:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c549e:	e9 b0 06 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c54a3:	8b 45 08             	mov    0x8(%ebp),%eax
 85c54a6:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c54a9:	89 04 24             	mov    %eax,(%esp)
 85c54ac:	e8 b3 00 08 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85c54b1:	3c 07                	cmp    $0x7,%al
 85c54b3:	0f 94 c0             	sete   %al
 85c54b6:	84 c0                	test   %al,%al
 85c54b8:	74 20                	je     85c54da <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0xf0>
 85c54ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85c54bd:	83 c0 14             	add    $0x14,%eax
 85c54c0:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85c54c7:	00 
 85c54c8:	89 04 24             	mov    %eax,(%esp)
 85c54cb:	e8 ac f7 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c54d0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c54d5:	e9 79 06 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c54da:	8b 45 08             	mov    0x8(%ebp),%eax
 85c54dd:	8b 40 20             	mov    0x20(%eax),%eax
 85c54e0:	85 c0                	test   %eax,%eax
 85c54e2:	75 20                	jne    85c5504 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x11a>
 85c54e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c54e7:	83 c0 14             	add    $0x14,%eax
 85c54ea:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c54f1:	00 
 85c54f2:	89 04 24             	mov    %eax,(%esp)
 85c54f5:	e8 82 f7 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c54fa:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c54ff:	e9 4f 06 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5504:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5507:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c550a:	89 04 24             	mov    %eax,(%esp)
 85c550d:	e8 4a 71 09 00       	call   865c65c <_ZN5CUser24IsPermissionPrivateStoreEv>
 85c5512:	83 f0 01             	xor    $0x1,%eax
 85c5515:	84 c0                	test   %al,%al
 85c5517:	74 2a                	je     85c5543 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x159>
 85c5519:	66 83 bd d4 fe ff ff 	cmpw   $0xffff,-0x12c(%ebp)
 85c5520:	ff 
 85c5521:	75 4a                	jne    85c556d <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x183>
 85c5523:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5526:	83 c0 14             	add    $0x14,%eax
 85c5529:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 85c5530:	00 
 85c5531:	89 04 24             	mov    %eax,(%esp)
 85c5534:	e8 43 f7 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c5539:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c553e:	e9 10 06 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5543:	66 83 bd d4 fe ff ff 	cmpw   $0xffff,-0x12c(%ebp)
 85c554a:	ff 
 85c554b:	74 20                	je     85c556d <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x183>
 85c554d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5550:	83 c0 14             	add    $0x14,%eax
 85c5553:	c7 44 24 04 3f 00 00 	movl   $0x3f,0x4(%esp)
 85c555a:	00 
 85c555b:	89 04 24             	mov    %eax,(%esp)
 85c555e:	e8 19 f7 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c5563:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c5568:	e9 e6 05 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c556d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5570:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5573:	89 04 24             	mov    %eax,(%esp)
 85c5576:	e8 11 4e b1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 85c557b:	83 f8 06             	cmp    $0x6,%eax
 85c557e:	0f 94 c0             	sete   %al
 85c5581:	84 c0                	test   %al,%al
 85c5583:	74 20                	je     85c55a5 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x1bb>
 85c5585:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5588:	83 c0 14             	add    $0x14,%eax
 85c558b:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85c5592:	00 
 85c5593:	89 04 24             	mov    %eax,(%esp)
 85c5596:	e8 e1 f6 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c559b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c55a0:	e9 ae 05 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c55a5:	e8 fd 4d b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85c55aa:	89 04 24             	mov    %eax,(%esp)
 85c55ad:	e8 6e 15 b5 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85c55b2:	83 f8 02             	cmp    $0x2,%eax
 85c55b5:	0f 94 c0             	sete   %al
 85c55b8:	84 c0                	test   %al,%al
 85c55ba:	74 20                	je     85c55dc <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x1f2>
 85c55bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c55bf:	83 c0 14             	add    $0x14,%eax
 85c55c2:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85c55c9:	00 
 85c55ca:	89 04 24             	mov    %eax,(%esp)
 85c55cd:	e8 aa f6 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c55d2:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c55d7:	e9 77 05 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c55dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c55df:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85c55e3:	84 c0                	test   %al,%al
 85c55e5:	74 20                	je     85c5607 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x21d>
 85c55e7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c55ea:	83 c0 14             	add    $0x14,%eax
 85c55ed:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 85c55f4:	00 
 85c55f5:	89 04 24             	mov    %eax,(%esp)
 85c55f8:	e8 7f f6 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c55fd:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c5602:	e9 4c 05 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5607:	0f bf 85 d8 fe ff ff 	movswl -0x128(%ebp),%eax
 85c560e:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 85c5614:	0f bf bd dc fe ff ff 	movswl -0x124(%ebp),%edi
 85c561b:	0f b6 b5 e0 fe ff ff 	movzbl -0x120(%ebp),%esi
 85c5622:	0f b6 9d e4 fe ff ff 	movzbl -0x11c(%ebp),%ebx
 85c5629:	e8 79 4d b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85c562e:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 85c5634:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c5638:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85c563c:	89 74 24 08          	mov    %esi,0x8(%esp)
 85c5640:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c5644:	89 04 24             	mov    %eax,(%esp)
 85c5647:	e8 5e ef 0f 00       	call   86c45aa <_ZN9GameWorld45check_restrictive_commercial_transaction_zoneEiiii>
 85c564c:	89 45 dc             	mov    %eax,-0x24(%ebp)
 85c564f:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 85c5653:	74 1f                	je     85c5674 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x28a>
 85c5655:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c5658:	8b 55 08             	mov    0x8(%ebp),%edx
 85c565b:	83 c2 14             	add    $0x14,%edx
 85c565e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5662:	89 14 24             	mov    %edx,(%esp)
 85c5665:	e8 12 f6 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c566a:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c566f:	e9 df 04 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5674:	e8 2e 4d b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85c5679:	89 04 24             	mov    %eax,(%esp)
 85c567c:	e8 67 ce b7 ff       	call   81424e8 <_ZNK9GameWorld12IsPVPChannelEv>
 85c5681:	84 c0                	test   %al,%al
 85c5683:	74 20                	je     85c56a5 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x2bb>
 85c5685:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5688:	83 c0 14             	add    $0x14,%eax
 85c568b:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85c5692:	00 
 85c5693:	89 04 24             	mov    %eax,(%esp)
 85c5696:	e8 e1 f5 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c569b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c56a0:	e9 ae 04 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c56a5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c56a8:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c56ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c56af:	8b 45 08             	mov    0x8(%ebp),%eax
 85c56b2:	89 04 24             	mov    %eax,(%esp)
 85c56b5:	e8 c8 f9 ff ff       	call   85c5082 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser>
 85c56ba:	83 f0 01             	xor    $0x1,%eax
 85c56bd:	84 c0                	test   %al,%al
 85c56bf:	74 20                	je     85c56e1 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x2f7>
 85c56c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85c56c4:	83 c0 14             	add    $0x14,%eax
 85c56c7:	c7 44 24 04 3e 00 00 	movl   $0x3e,0x4(%esp)
 85c56ce:	00 
 85c56cf:	89 04 24             	mov    %eax,(%esp)
 85c56d2:	e8 a5 f5 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c56d7:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c56dc:	e9 72 04 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c56e1:	66 83 bd d4 fe ff ff 	cmpw   $0xffff,-0x12c(%ebp)
 85c56e8:	ff 
 85c56e9:	0f 84 a1 00 00 00    	je     85c5790 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x3a6>
 85c56ef:	0f b7 85 d4 fe ff ff 	movzwl -0x12c(%ebp),%eax
 85c56f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c56fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c56fd:	89 04 24             	mov    %eax,(%esp)
 85c5700:	e8 27 fc ff ff       	call   85c532c <_ZN13private_store13CPrivateStore21CheckPrivateStoreDollEt>
 85c5705:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85c5708:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 85c570c:	0f 95 c0             	setne  %al
 85c570f:	84 c0                	test   %al,%al
 85c5711:	74 1f                	je     85c5732 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x348>
 85c5713:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5716:	8d 50 14             	lea    0x14(%eax),%edx
 85c5719:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c571c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5720:	89 14 24             	mov    %edx,(%esp)
 85c5723:	e8 54 f5 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c5728:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c572d:	e9 21 04 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5732:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c5739:	00 
 85c573a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c573d:	89 04 24             	mov    %eax,(%esp)
 85c5740:	e8 9b 61 00 00       	call   85cb8e0 <_ZN13private_store13CPrivateStore14SetDollCreatedEb>
 85c5745:	0f b7 9d d4 fe ff ff 	movzwl -0x12c(%ebp),%ebx
 85c574c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c574f:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5752:	89 04 24             	mov    %eax,(%esp)
 85c5755:	e8 24 4b b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c575a:	8d 95 f6 fe ff ff    	lea    -0x10a(%ebp),%edx
 85c5760:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c5764:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c576b:	00 
 85c576c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5770:	89 14 24             	mov    %edx,(%esp)
 85c5773:	e8 a0 61 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85c5778:	83 ec 04             	sub    $0x4,%esp
 85c577b:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 85c5781:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5785:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5788:	89 04 24             	mov    %eax,(%esp)
 85c578b:	e8 8c 61 00 00       	call   85cb91c <_ZN13private_store13CPrivateStore13SetDollItemIDEm>
 85c5790:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5793:	89 04 24             	mov    %eax,(%esp)
 85c5796:	e8 49 ee c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c579b:	83 f0 01             	xor    $0x1,%eax
 85c579e:	84 c0                	test   %al,%al
 85c57a0:	74 32                	je     85c57d4 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x3ea>
 85c57a2:	0f b7 85 d8 fe ff ff 	movzwl -0x128(%ebp),%eax
 85c57a9:	0f b7 c8             	movzwl %ax,%ecx
 85c57ac:	0f b7 85 dc fe ff ff 	movzwl -0x124(%ebp),%eax
 85c57b3:	0f b7 d0             	movzwl %ax,%edx
 85c57b6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c57b9:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c57bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c57c3:	00 
 85c57c4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c57c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c57cc:	89 04 24             	mov    %eax,(%esp)
 85c57cf:	e8 56 b6 d2 ff       	call   82f0e2a <_ZN5CUser12set_positionEttc>
 85c57d4:	0f bf 95 d8 fe ff ff 	movswl -0x128(%ebp),%edx
 85c57db:	0f bf 85 dc fe ff ff 	movswl -0x124(%ebp),%eax
 85c57e2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c57e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c57ea:	8b 45 08             	mov    0x8(%ebp),%eax
 85c57ed:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c57f1:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c57f4:	89 04 24             	mov    %eax,(%esp)
 85c57f7:	e8 00 60 00 00       	call   85cb7fc <_ZN13private_store16CPrivateStorePosC1EPNS_13CPrivateStoreEii>
 85c57fc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c57ff:	8d 50 4c             	lea    0x4c(%eax),%edx
 85c5802:	8d 45 ac             	lea    -0x54(%ebp),%eax
 85c5805:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5809:	89 14 24             	mov    %edx,(%esp)
 85c580c:	e8 d3 72 00 00       	call   85ccae4 <_ZN13private_store16CPrivateStorePosaSERKS0_>
 85c5811:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5814:	8d 58 4c             	lea    0x4c(%eax),%ebx
 85c5817:	0f b6 95 e0 fe ff ff 	movzbl -0x120(%ebp),%edx
 85c581e:	0f b6 85 e4 fe ff ff 	movzbl -0x11c(%ebp),%eax
 85c5825:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c5829:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c582d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85c5830:	89 04 24             	mov    %eax,(%esp)
 85c5833:	e8 02 5e 00 00       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 85c5838:	a1 74 f7 41 09       	mov    0x941f774,%eax
 85c583d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c5841:	0f b7 55 c4          	movzwl -0x3c(%ebp),%edx
 85c5845:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 85c584a:	89 04 24             	mov    %eax,(%esp)
 85c584d:	e8 06 17 0f 00       	call   86b6f58 <_ZN14village_object17CVillageObjectMgr15register_objectENS_4ZoneEPNS_7IObjectE>
 85c5852:	83 f0 01             	xor    $0x1,%eax
 85c5855:	84 c0                	test   %al,%al
 85c5857:	74 20                	je     85c5879 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x48f>
 85c5859:	8b 45 08             	mov    0x8(%ebp),%eax
 85c585c:	83 c0 14             	add    $0x14,%eax
 85c585f:	c7 44 24 04 38 00 00 	movl   $0x38,0x4(%esp)
 85c5866:	00 
 85c5867:	89 04 24             	mov    %eax,(%esp)
 85c586a:	e8 0d f4 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c586f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c5874:	e9 da 02 00 00       	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5879:	0f bf 9d d8 fe ff ff 	movswl -0x128(%ebp),%ebx
 85c5880:	0f bf 8d dc fe ff ff 	movswl -0x124(%ebp),%ecx
 85c5887:	0f b6 95 e0 fe ff ff 	movzbl -0x120(%ebp),%edx
 85c588e:	0f b6 85 e4 fe ff ff 	movzbl -0x11c(%ebp),%eax
 85c5895:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 85c5899:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c589d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c58a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c58a5:	8d 45 c6             	lea    -0x3a(%ebp),%eax
 85c58a8:	89 04 24             	mov    %eax,(%esp)
 85c58ab:	e8 7c 5e 00 00       	call   85cb72c <_ZN13private_store15PrivateStorePosC1Ehhss>
 85c58b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c58b3:	8b 55 c6             	mov    -0x3a(%ebp),%edx
 85c58b6:	89 50 24             	mov    %edx,0x24(%eax)
 85c58b9:	0f b7 55 ca          	movzwl -0x36(%ebp),%edx
 85c58bd:	66 89 50 28          	mov    %dx,0x28(%eax)
 85c58c1:	8b 45 08             	mov    0x8(%ebp),%eax
 85c58c4:	83 c0 34             	add    $0x34,%eax
 85c58c7:	89 04 24             	mov    %eax,(%esp)
 85c58ca:	e8 69 78 00 00       	call   85cd138 <_ZNSt4listIP5CUserSaIS1_EE5clearEv>
 85c58cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85c58d2:	89 04 24             	mov    %eax,(%esp)
 85c58d5:	e8 78 f6 ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c58da:	8b 45 08             	mov    0x8(%ebp),%eax
 85c58dd:	c6 40 10 01          	movb   $0x1,0x10(%eax)
 85c58e1:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85c58e4:	89 04 24             	mov    %eax,(%esp)
 85c58e7:	e8 86 60 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c58ec:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85c58ef:	89 04 24             	mov    %eax,(%esp)
 85c58f2:	e8 8f 60 00 00       	call   85cb986 <_ZN13private_store17CPacketBufPrivate31MakeCmdpacketCreatePrivateStoreEv>
 85c58f7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c58fa:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c58fd:	8d 55 a0             	lea    -0x60(%ebp),%edx
 85c5900:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5904:	89 04 24             	mov    %eax,(%esp)
 85c5907:	e8 ae 2c 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c590c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c590f:	89 04 24             	mov    %eax,(%esp)
 85c5912:	e8 cd ec c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c5917:	0f b6 d8             	movzbl %al,%ebx
 85c591a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c591d:	8d 70 24             	lea    0x24(%eax),%esi
 85c5920:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5923:	89 04 24             	mov    %eax,(%esp)
 85c5926:	e8 69 5f 00 00       	call   85cb894 <_ZN13private_store13CPrivateStore14GetSellerIndexEv>
 85c592b:	0f b7 c0             	movzwl %ax,%eax
 85c592e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c5932:	89 74 24 08          	mov    %esi,0x8(%esp)
 85c5936:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c593a:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85c593d:	89 04 24             	mov    %eax,(%esp)
 85c5940:	e8 95 60 00 00       	call   85cb9da <_ZN13private_store17CPacketBufPrivate32MakeNotipacketCreatePrivateStoreEtRNS_15PrivateStorePosEb>
 85c5945:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5948:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c594c:	0f b6 d0             	movzbl %al,%edx
 85c594f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5952:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c5956:	0f b6 c0             	movzbl %al,%eax
 85c5959:	8d 4d a0             	lea    -0x60(%ebp),%ecx
 85c595c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c5960:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5964:	89 04 24             	mov    %eax,(%esp)
 85c5967:	e8 07 71 00 00       	call   85cca73 <_ZN13private_store17CBroadcastPrivate4SendEiiR11PacketGuard>
 85c596c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c596f:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5972:	89 04 24             	mov    %eax,(%esp)
 85c5975:	e8 d2 f7 08 00       	call   865514c <_ZN5CUser8GetPartyEv>
 85c597a:	85 c0                	test   %eax,%eax
 85c597c:	0f 95 c0             	setne  %al
 85c597f:	84 c0                	test   %al,%al
 85c5981:	74 7b                	je     85c59fe <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x614>
 85c5983:	b8 28 2e 47 09       	mov    $0x9472e28,%eax
 85c5988:	0f b6 00             	movzbl (%eax),%eax
 85c598b:	84 c0                	test   %al,%al
 85c598d:	75 4a                	jne    85c59d9 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x5ef>
 85c598f:	c7 04 24 28 2e 47 09 	movl   $0x9472e28,(%esp)
 85c5996:	e8 95 f9 15 00       	call   8725330 <__cxa_guard_acquire>
 85c599b:	85 c0                	test   %eax,%eax
 85c599d:	0f 95 c0             	setne  %al
 85c59a0:	84 c0                	test   %al,%al
 85c59a2:	74 35                	je     85c59d9 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x5ef>
 85c59a4:	c7 04 24 40 2e 47 09 	movl   $0x9472e40,(%esp)
 85c59ab:	e8 68 00 fd ff       	call   8595a18 <_ZN21DisPatcher_LeavePartyC1Ev>
 85c59b0:	c7 04 24 28 2e 47 09 	movl   $0x9472e28,(%esp)
 85c59b7:	e8 94 f8 15 00       	call   8725250 <__cxa_guard_release>
 85c59bc:	b8 54 63 24 08       	mov    $0x8246354,%eax
 85c59c1:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 85c59c8:	08 
 85c59c9:	c7 44 24 04 40 2e 47 	movl   $0x9472e40,0x4(%esp)
 85c59d0:	09 
 85c59d1:	89 04 24             	mov    %eax,(%esp)
 85c59d4:	e8 f7 83 ab ff       	call   807ddd0 <__cxa_atexit@plt>
 85c59d9:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85c59dc:	89 04 24             	mov    %eax,(%esp)
 85c59df:	e8 82 5d c6 ff       	call   822b766 <_ZNK18InterfacePacketBuf3getEv>
 85c59e4:	8b 55 08             	mov    0x8(%ebp),%edx
 85c59e7:	8b 52 2c             	mov    0x2c(%edx),%edx
 85c59ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c59ee:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c59f2:	c7 04 24 40 2e 47 09 	movl   $0x9472e40,(%esp)
 85c59f9:	e8 52 3c c9 ff       	call   8259650 <_ZN17IPacketDispatcherI8MSG_BASE17stLeavePartyParamL8ch_state0EE17dispatch_templateEP5CUserR9PacketBuf>
 85c59fe:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5a01:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5a04:	89 04 24             	mov    %eax,(%esp)
 85c5a07:	e8 70 49 b1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85c5a0c:	0f b7 d8             	movzwl %ax,%ebx
 85c5a0f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c5a16:	00 
 85c5a17:	c7 44 24 08 35 03 00 	movl   $0x335,0x8(%esp)
 85c5a1e:	00 
 85c5a1f:	c7 44 24 04 20 e9 cb 	movl   $0x8cbe920,0x4(%esp)
 85c5a26:	08 
 85c5a27:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c5a2a:	89 04 24             	mov    %eax,(%esp)
 85c5a2d:	e8 e6 9c f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c5a32:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c5a36:	c7 44 24 04 6b d1 cb 	movl   $0x8cbd16b,0x4(%esp)
 85c5a3d:	08 
 85c5a3e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c5a41:	89 04 24             	mov    %eax,(%esp)
 85c5a44:	e8 3f 9d f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c5a49:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5a4c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5a4f:	89 04 24             	mov    %eax,(%esp)
 85c5a52:	e8 d1 b5 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c5a57:	0f b6 8d e0 fe ff ff 	movzbl -0x120(%ebp),%ecx
 85c5a5e:	0f b6 95 e4 fe ff ff 	movzbl -0x11c(%ebp),%edx
 85c5a65:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85c5a68:	8b 5b 2c             	mov    0x2c(%ebx),%ebx
 85c5a6b:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 85c5a71:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c5a75:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c5a79:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5a7d:	89 1c 24             	mov    %ebx,(%esp)
 85c5a80:	e8 d5 ea 0b 00       	call   868455a <_ZN15cUserHistoryLog18CreatePrivateStoreEiiPKc>
 85c5a85:	a1 48 be 40 09       	mov    0x940be48,%eax
 85c5a8a:	89 04 24             	mov    %eax,(%esp)
 85c5a8d:	e8 b2 f4 c6 ff       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 85c5a92:	84 c0                	test   %al,%al
 85c5a94:	0f 84 8c 00 00 00    	je     85c5b26 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x73c>
 85c5a9a:	8d 85 f6 fe ff ff    	lea    -0x10a(%ebp),%eax
 85c5aa0:	89 04 24             	mov    %eax,(%esp)
 85c5aa3:	e8 cc 58 00 00       	call   85cb374 <_ZN33PCK_AUCTION_OPEN_PRIVATE_STORE_GAC1Ev>
 85c5aa8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5aab:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5aae:	89 04 24             	mov    %eax,(%esp)
 85c5ab1:	e8 b8 48 b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c5ab6:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 85c5abc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5abf:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5ac2:	89 04 24             	mov    %eax,(%esp)
 85c5ac5:	e8 1e a6 c6 ff       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 85c5aca:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 85c5ad0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85c5ad7:	eb 26                	jmp    85c5aff <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x715>
 85c5ad9:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 85c5adc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5adf:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5ae2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85c5ae5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5ae9:	89 04 24             	mov    %eax,(%esp)
 85c5aec:	e8 af 84 08 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85c5af1:	8d 53 04             	lea    0x4(%ebx),%edx
 85c5af4:	89 84 95 00 ff ff ff 	mov    %eax,-0x100(%ebp,%edx,4)
 85c5afb:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 85c5aff:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 85c5b05:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 85c5b08:	0f 9f c0             	setg   %al
 85c5b0b:	84 c0                	test   %al,%al
 85c5b0d:	75 ca                	jne    85c5ad9 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x6ef>
 85c5b0f:	a1 48 be 40 09       	mov    0x940be48,%eax
 85c5b14:	8d 95 f6 fe ff ff    	lea    -0x10a(%ebp),%edx
 85c5b1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5b1e:	89 04 24             	mov    %eax,(%esp)
 85c5b21:	e8 f6 1f d3 ff       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 85c5b26:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c5b2b:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85c5b2e:	89 04 24             	mov    %eax,(%esp)
 85c5b31:	e8 76 6f 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c5b36:	eb 1b                	jmp    85c5b53 <_ZN13private_store13CPrivateStore18CreatePrivateStoreEhhsst+0x769>
 85c5b38:	89 d3                	mov    %edx,%ebx
 85c5b3a:	89 c6                	mov    %eax,%esi
 85c5b3c:	8d 45 a0             	lea    -0x60(%ebp),%eax
 85c5b3f:	89 04 24             	mov    %eax,(%esp)
 85c5b42:	e8 65 6f 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c5b47:	89 f0                	mov    %esi,%eax
 85c5b49:	89 da                	mov    %ebx,%edx
 85c5b4b:	89 04 24             	mov    %eax,(%esp)
 85c5b4e:	e8 fd db 51 00       	call   8ae3750 <_Unwind_Resume>
 85c5b53:	89 d8                	mov    %ebx,%eax
 85c5b55:	8d 65 f4             	lea    -0xc(%ebp),%esp
 85c5b58:	83 c4 00             	add    $0x0,%esp
 85c5b5b:	5b                   	pop    %ebx
 85c5b5c:	5e                   	pop    %esi
 85c5b5d:	5f                   	pop    %edi
 85c5b5e:	5d                   	pop    %ebp
 85c5b5f:	c3                   	ret

```

```c
// private_store::CPrivateStore::CreatePrivateStore @ 0x85c53ea

/* private_store::CPrivateStore::CreatePrivateStore(unsigned char, unsigned char, short, short,
   unsigned short) */

undefined4 __thiscall
private_store::CPrivateStore::CreatePrivateStore
          (CPrivateStore *this,uchar param_1,uchar param_2,short param_3,short param_4,
          ushort param_5)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  GameWorld *pGVar5;
  undefined2 uVar9;
  PacketBuf *pPVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar10;
  PCK_AUCTION_OPEN_PRIVATE_STORE_GA local_10e [2];
  ulong local_10c;
  int aiStack_104 [40];
  CPacketBufPrivate local_64 [12];
  CPrivateStorePos local_58 [24];
  undefined2 local_40;
  undefined4 local_3e;
  undefined2 local_3a;
  cMyTrace local_38 [16];
  int local_28;
  int local_24;
  int local_20;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x58);
  if (*(int *)(this + 0x2c) == 0) {
    uVar10 = 0;
  }
  else {
    cVar1 = CUserCharacInfo::IsBusyDisjointStore(*(CUserCharacInfo **)(this + 0x2c));
    if (cVar1 == '\0') {
      cVar1 = CUserCharacInfo::getCurCharacVill(*(CUserCharacInfo **)(this + 0x2c));
      if (cVar1 == '\a') {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
        uVar10 = 0;
      }
      else if (*(int *)(this + 0x20) == 0) {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
        uVar10 = 0;
      }
      else {
        cVar1 = CUser::IsPermissionPrivateStore(*(CUser **)(this + 0x2c));
        if (cVar1 == '\x01') {
          if (param_5 != 0xffff) {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3f);
            return 0;
          }
        }
        else if (param_5 == 0xffff) {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3f);
          return 0;
        }
        iVar4 = CUser::get_state(*(CUser **)(this + 0x2c));
        if (iVar4 == 6) {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
          uVar10 = 0;
        }
        else {
          pGVar5 = (GameWorld *)G_GameWorld();
          iVar4 = GameWorld::GetChannelType(pGVar5);
          if (iVar4 == 2) {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
            uVar10 = 0;
          }
          else if (this[0x10] == (CPrivateStore)0x0) {
            pGVar5 = (GameWorld *)G_GameWorld();
            local_28 = GameWorld::check_restrictive_commercial_transaction_zone
                                 (pGVar5,(uint)param_1,(uint)param_2,(int)param_3,(int)param_4);
            if (local_28 == 0) {
              pGVar5 = (GameWorld *)G_GameWorld();
              cVar1 = GameWorld::IsPVPChannel(pGVar5);
              if (cVar1 == '\0') {
                cVar1 = IsAreaNearEntranceDungeon(this,*(CUser **)(this + 0x2c));
                if (cVar1 == '\x01') {
                  if (param_5 != 0xffff) {
                    local_24 = CheckPrivateStoreDoll((ushort)this);
                    if (local_24 != 0) {
                      CErrorHandler::Do((CErrorHandler *)(this + 0x14),local_24);
                      return 0;
                    }
                    SetDollCreated(this,true);
                    iVar4 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
                    CInventory::GetInvenSlot((int)local_10e,iVar4);
                    SetDollItemID(this,local_10c);
                  }
                  cVar1 = isDollCreated(this);
                  if (cVar1 != '\x01') {
                    CUser::set_position(*(CUser **)(this + 0x2c),param_3,param_4,'\0');
                  }
                  CPrivateStorePos::CPrivateStorePos(local_58,this,(int)param_3,(int)param_4);
                  CPrivateStorePos::operator=((CPrivateStorePos *)(this + 0x4c),local_58);
                  uVar9 = 0;
                  village_object::Zone::Zone((Zone *)&local_40,param_1,param_2);
                  cVar1 = village_object::CVillageObjectMgr::register_object
                                    (GlobalData::s_villageObjectMgr,CONCAT22(uVar9,local_40),
                                     this + 0x4c);
                  if (cVar1 == '\x01') {
                    PrivateStorePos::PrivateStorePos
                              ((PrivateStorePos *)&local_3e,param_1,param_2,param_3,param_4);
                    *(undefined4 *)(this + 0x24) = local_3e;
                    *(undefined2 *)(this + 0x28) = local_3a;
                    std::list<CUser*,std::allocator<CUser*>>::clear
                              ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
                    ResetItems(this);
                    this[0x10] = (CPrivateStore)0x1;
                    CPacketBufPrivate::CPacketBufPrivate(local_64);
                    /* try { // try from 085c58f2 to 085c5b25 has its CatchHandler @ 085c5b38 */
                    CPacketBufPrivate::MakeCmdpacketCreatePrivateStore(local_64);
                    CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_64);
                    bVar2 = (bool)isDollCreated(this);
                    uVar3 = GetSellerIndex(this);
                    CPacketBufPrivate::MakeNotipacketCreatePrivateStore
                              (local_64,uVar3,(PrivateStorePos *)(this + 0x24),bVar2);
                    CBroadcastPrivate::Send
                              ((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_64
                              );
                    iVar4 = CUser::GetParty(*(CUser **)(this + 0x2c));
                    if (iVar4 != 0) {
                      if ((CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                           ::leave_party == '\0') &&
                         (iVar4 = __cxa_guard_acquire(&
                                                  CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                                  ::leave_party), iVar4 != 0)) {
                        DisPatcher_LeaveParty::DisPatcher_LeaveParty
                                  ((DisPatcher_LeaveParty *)
                                   &CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                    ::leave_party);
                        __cxa_guard_release(&CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                             ::leave_party);
                        __cxa_atexit(DisPatcher_LeaveParty::~DisPatcher_LeaveParty,
                                     &CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                      ::leave_party,&__dso_handle);
                      }
                      pPVar6 = (PacketBuf *)InterfacePacketBuf::get((InterfacePacketBuf *)local_64);
                      IPacketDispatcher<MSG_BASE,stLeavePartyParam,(ch_state)0>::dispatch_template
                                ((IPacketDispatcher<MSG_BASE,stLeavePartyParam,(ch_state)0> *)
                                 &CreatePrivateStore(unsigned_char,unsigned_char,short,short,unsigned_short)
                                  ::leave_party,*(CUser **)(this + 0x2c),pPVar6);
                    }
                    uVar7 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
                    cMyTrace::cMyTrace(local_38,
                                       "virtual bool private_store::CPrivateStore::CreatePrivateStore(unsigned char, unsigned char, short int, short int, short unsigned int)"
                                       ,0x335,0);
                    cMyTrace::operator()(local_38,"CreatePrivateStore() uid:%d\n",uVar7 & 0xffff);
                    CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
                    cUserHistoryLog::CreatePrivateStore
                              (*(int *)(this + 0x2c) + 0x79700,(uint)param_1,(char *)(uint)param_2);
                    cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
                    if (cVar1 != '\0') {
                      PCK_AUCTION_OPEN_PRIVATE_STORE_GA::PCK_AUCTION_OPEN_PRIVATE_STORE_GA
                                (local_10e);
                      aiStack_104[2] = CUser::get_acc_id(*(CUser **)(this + 0x2c));
                      aiStack_104[3] = CUser::get_charac_count(*(CUser **)(this + 0x2c));
                      for (local_20 = 0; iVar4 = local_20, local_20 < aiStack_104[3];
                          local_20 = local_20 + 1) {
                        iVar8 = CUser::get_charac_no(*(CUser **)(this + 0x2c),local_20);
                        aiStack_104[iVar4 + 4] = iVar8;
                      }
                      CAuctionServerProxy::SendPacket
                                (GlobalData::s_auction_proxy,(PACKET_HEADER *)local_10e);
                    }
                    uVar10 = 1;
                    CPacketBufPrivate::~CPacketBufPrivate(local_64);
                  }
                  else {
                    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x38);
                    uVar10 = 0;
                  }
                }
                else {
                  CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
                  uVar10 = 0;
                }
              }
              else {
                CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
                uVar10 = 0;
              }
            }
            else {
              CErrorHandler::Do((CErrorHandler *)(this + 0x14),local_28);
              uVar10 = 0;
            }
          }
          else {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x14);
            uVar10 = 0;
          }
        }
      }
    }
    else {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3e);
      uVar10 = 0;
    }
  }
  return uVar10;
}

```

---

## DeleteItem

```asm
// === 085c68b4 private_store::CPrivateStore::DeleteItem  [0x085c68b4-0x85c6d47] ===
 85c68b4:	55                   	push   %ebp
 85c68b5:	89 e5                	mov    %esp,%ebp
 85c68b7:	57                   	push   %edi
 85c68b8:	56                   	push   %esi
 85c68b9:	53                   	push   %ebx
 85c68ba:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 85c68c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c68c3:	8b 40 40             	mov    0x40(%eax),%eax
 85c68c6:	89 45 88             	mov    %eax,-0x78(%ebp)
 85c68c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c68cc:	89 04 24             	mov    %eax,(%esp)
 85c68cf:	e8 82 4b c6 ff       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 85c68d4:	0f b6 c0             	movzbl %al,%eax
 85c68d7:	89 45 8c             	mov    %eax,-0x74(%ebp)
 85c68da:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c68dd:	89 04 24             	mov    %eax,(%esp)
 85c68e0:	e8 87 e7 b2 ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 85c68e5:	0f b6 c0             	movzbl %al,%eax
 85c68e8:	89 45 90             	mov    %eax,-0x70(%ebp)
 85c68eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c68ee:	8b 40 07             	mov    0x7(%eax),%eax
 85c68f1:	89 45 94             	mov    %eax,-0x6c(%ebp)
 85c68f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c68f7:	8b 78 02             	mov    0x2(%eax),%edi
 85c68fa:	8b 45 08             	mov    0x8(%ebp),%eax
 85c68fd:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6900:	89 04 24             	mov    %eax,(%esp)
 85c6903:	e8 46 53 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c6908:	89 c6                	mov    %eax,%esi
 85c690a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c690d:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6910:	89 04 24             	mov    %eax,(%esp)
 85c6913:	e8 10 a7 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c6918:	89 c3                	mov    %eax,%ebx
 85c691a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c6921:	00 
 85c6922:	c7 44 24 08 d7 04 00 	movl   $0x4d7,0x8(%esp)
 85c6929:	00 
 85c692a:	c7 44 24 04 c0 e7 cb 	movl   $0x8cbe7c0,0x4(%esp)
 85c6931:	08 
 85c6932:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c6935:	89 04 24             	mov    %eax,(%esp)
 85c6938:	e8 db 8d f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c693d:	8b 45 88             	mov    -0x78(%ebp),%eax
 85c6940:	89 44 24 20          	mov    %eax,0x20(%esp)
 85c6944:	8b 45 8c             	mov    -0x74(%ebp),%eax
 85c6947:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 85c694b:	8b 45 90             	mov    -0x70(%ebp),%eax
 85c694e:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c6952:	8b 45 94             	mov    -0x6c(%ebp),%eax
 85c6955:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c6959:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85c695d:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c6961:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6965:	c7 44 24 04 5c d2 cb 	movl   $0x8cbd25c,0x4(%esp)
 85c696c:	08 
 85c696d:	8d 45 98             	lea    -0x68(%ebp),%eax
 85c6970:	89 04 24             	mov    %eax,(%esp)
 85c6973:	e8 10 8e f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6978:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c697b:	0f b6 40 46          	movzbl 0x46(%eax),%eax
 85c697f:	0f be c0             	movsbl %al,%eax
 85c6982:	83 f8 01             	cmp    $0x1,%eax
 85c6985:	0f 84 9f 02 00 00    	je     85c6c2a <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x376>
 85c698b:	83 f8 01             	cmp    $0x1,%eax
 85c698e:	7f 09                	jg     85c6999 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0xe5>
 85c6990:	85 c0                	test   %eax,%eax
 85c6992:	74 1c                	je     85c69b0 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0xfc>
 85c6994:	e9 9e 03 00 00       	jmp    85c6d37 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x483>
 85c6999:	83 f8 02             	cmp    $0x2,%eax
 85c699c:	0f 84 e1 00 00 00    	je     85c6a83 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x1cf>
 85c69a2:	83 f8 03             	cmp    $0x3,%eax
 85c69a5:	0f 84 9b 01 00 00    	je     85c6b46 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x292>
 85c69ab:	e9 87 03 00 00       	jmp    85c6d37 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x483>
 85c69b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c69b3:	8b 70 07             	mov    0x7(%eax),%esi
 85c69b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c69b9:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c69bd:	0f bf d8             	movswl %ax,%ebx
 85c69c0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c69c3:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c69c6:	89 04 24             	mov    %eax,(%esp)
 85c69c9:	e8 c0 38 b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c69ce:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85c69d5:	00 
 85c69d6:	c7 44 24 10 0b 00 00 	movl   $0xb,0x10(%esp)
 85c69dd:	00 
 85c69de:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c69e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c69e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c69ed:	00 
 85c69ee:	89 04 24             	mov    %eax,(%esp)
 85c69f1:	e8 16 d6 f3 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85c69f6:	83 f0 01             	xor    $0x1,%eax
 85c69f9:	84 c0                	test   %al,%al
 85c69fb:	0f 84 32 03 00 00    	je     85c6d33 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x47f>
 85c6a01:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6a04:	8b 78 07             	mov    0x7(%eax),%edi
 85c6a07:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6a0a:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6a0e:	0f bf f0             	movswl %ax,%esi
 85c6a11:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6a14:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6a17:	89 04 24             	mov    %eax,(%esp)
 85c6a1a:	e8 2f 52 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c6a1f:	89 c3                	mov    %eax,%ebx
 85c6a21:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c6a28:	00 
 85c6a29:	c7 44 24 08 e0 04 00 	movl   $0x4e0,0x8(%esp)
 85c6a30:	00 
 85c6a31:	c7 44 24 04 c0 e7 cb 	movl   $0x8cbe7c0,0x4(%esp)
 85c6a38:	08 
 85c6a39:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85c6a3c:	89 04 24             	mov    %eax,(%esp)
 85c6a3f:	e8 d4 8c f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c6a44:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85c6a48:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c6a4c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6a50:	c7 44 24 04 cc d2 cb 	movl   $0x8cbd2cc,0x4(%esp)
 85c6a57:	08 
 85c6a58:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85c6a5b:	89 04 24             	mov    %eax,(%esp)
 85c6a5e:	e8 25 8d f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6a63:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6a66:	83 c0 14             	add    $0x14,%eax
 85c6a69:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c6a70:	00 
 85c6a71:	89 04 24             	mov    %eax,(%esp)
 85c6a74:	e8 03 e2 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c6a79:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6a7e:	e9 b9 02 00 00       	jmp    85c6d3c <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x488>
 85c6a83:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6a86:	8b 70 07             	mov    0x7(%eax),%esi
 85c6a89:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6a8c:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6a90:	0f bf d8             	movswl %ax,%ebx
 85c6a93:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6a96:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6a99:	89 04 24             	mov    %eax,(%esp)
 85c6a9c:	e8 f3 af b8 ff       	call   8151a94 <_ZN15CUserCharacInfo18getCurCharacCargoWEv>
 85c6aa1:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 85c6aa8:	00 
 85c6aa9:	89 74 24 08          	mov    %esi,0x8(%esp)
 85c6aad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c6ab1:	89 04 24             	mov    %eax,(%esp)
 85c6ab4:	e8 db 4c f4 ff       	call   850b794 <_ZN6CCargo11delete_itemEii14eItemDelReason>
 85c6ab9:	83 f0 01             	xor    $0x1,%eax
 85c6abc:	84 c0                	test   %al,%al
 85c6abe:	0f 84 72 02 00 00    	je     85c6d36 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x482>
 85c6ac4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6ac7:	8b 78 07             	mov    0x7(%eax),%edi
 85c6aca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6acd:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6ad1:	0f bf f0             	movswl %ax,%esi
 85c6ad4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6ad7:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6ada:	89 04 24             	mov    %eax,(%esp)
 85c6add:	e8 6c 51 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c6ae2:	89 c3                	mov    %eax,%ebx
 85c6ae4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c6aeb:	00 
 85c6aec:	c7 44 24 08 ec 04 00 	movl   $0x4ec,0x8(%esp)
 85c6af3:	00 
 85c6af4:	c7 44 24 04 c0 e7 cb 	movl   $0x8cbe7c0,0x4(%esp)
 85c6afb:	08 
 85c6afc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85c6aff:	89 04 24             	mov    %eax,(%esp)
 85c6b02:	e8 11 8c f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c6b07:	89 7c 24 10          	mov    %edi,0x10(%esp)
 85c6b0b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c6b0f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6b13:	c7 44 24 04 0c d3 cb 	movl   $0x8cbd30c,0x4(%esp)
 85c6b1a:	08 
 85c6b1b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85c6b1e:	89 04 24             	mov    %eax,(%esp)
 85c6b21:	e8 62 8c f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6b26:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6b29:	83 c0 14             	add    $0x14,%eax
 85c6b2c:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c6b33:	00 
 85c6b34:	89 04 24             	mov    %eax,(%esp)
 85c6b37:	e8 40 e1 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c6b3c:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6b41:	e9 f6 01 00 00       	jmp    85c6d3c <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x488>
 85c6b46:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6b49:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6b4d:	0f bf d8             	movswl %ax,%ebx
 85c6b50:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6b53:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6b56:	89 04 24             	mov    %eax,(%esp)
 85c6b59:	e8 30 37 b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c6b5e:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85c6b65:	00 
 85c6b66:	c7 44 24 10 0b 00 00 	movl   $0xb,0x10(%esp)
 85c6b6d:	00 
 85c6b6e:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c6b75:	00 
 85c6b76:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6b7a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c6b81:	00 
 85c6b82:	89 04 24             	mov    %eax,(%esp)
 85c6b85:	e8 82 d4 f3 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85c6b8a:	83 f0 01             	xor    $0x1,%eax
 85c6b8d:	84 c0                	test   %al,%al
 85c6b8f:	74 78                	je     85c6c09 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x355>
 85c6b91:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6b94:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6b98:	0f bf f0             	movswl %ax,%esi
 85c6b9b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6b9e:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6ba1:	89 04 24             	mov    %eax,(%esp)
 85c6ba4:	e8 a5 50 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c6ba9:	89 c3                	mov    %eax,%ebx
 85c6bab:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c6bb2:	00 
 85c6bb3:	c7 44 24 08 f9 04 00 	movl   $0x4f9,0x8(%esp)
 85c6bba:	00 
 85c6bbb:	c7 44 24 04 c0 e7 cb 	movl   $0x8cbe7c0,0x4(%esp)
 85c6bc2:	08 
 85c6bc3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85c6bc6:	89 04 24             	mov    %eax,(%esp)
 85c6bc9:	e8 4a 8b f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c6bce:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c6bd2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6bd6:	c7 44 24 04 4c d3 cb 	movl   $0x8cbd34c,0x4(%esp)
 85c6bdd:	08 
 85c6bde:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85c6be1:	89 04 24             	mov    %eax,(%esp)
 85c6be4:	e8 9f 8b f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6be9:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6bec:	83 c0 14             	add    $0x14,%eax
 85c6bef:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c6bf6:	00 
 85c6bf7:	89 04 24             	mov    %eax,(%esp)
 85c6bfa:	e8 7d e0 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c6bff:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6c04:	e9 33 01 00 00       	jmp    85c6d3c <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x488>
 85c6c09:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6c0c:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6c10:	0f bf d0             	movswl %ax,%edx
 85c6c13:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6c16:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6c19:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c6c1d:	89 04 24             	mov    %eax,(%esp)
 85c6c20:	e8 ef 70 09 00       	call   865dd14 <_ZN5CUser10send_equipEi>
 85c6c25:	e9 0d 01 00 00       	jmp    85c6d37 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x483>
 85c6c2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6c2d:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6c31:	0f bf d8             	movswl %ax,%ebx
 85c6c34:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6c37:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6c3a:	89 04 24             	mov    %eax,(%esp)
 85c6c3d:	e8 4c 36 b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c6c42:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85c6c49:	00 
 85c6c4a:	c7 44 24 10 04 00 00 	movl   $0x4,0x10(%esp)
 85c6c51:	00 
 85c6c52:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c6c59:	00 
 85c6c5a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6c5e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85c6c65:	00 
 85c6c66:	89 04 24             	mov    %eax,(%esp)
 85c6c69:	e8 9e d3 f3 ff       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 85c6c6e:	83 f0 01             	xor    $0x1,%eax
 85c6c71:	84 c0                	test   %al,%al
 85c6c73:	74 75                	je     85c6cea <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x436>
 85c6c75:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6c78:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6c7c:	0f bf f0             	movswl %ax,%esi
 85c6c7f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6c82:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6c85:	89 04 24             	mov    %eax,(%esp)
 85c6c88:	e8 c1 4f b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c6c8d:	89 c3                	mov    %eax,%ebx
 85c6c8f:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c6c96:	00 
 85c6c97:	c7 44 24 08 15 05 00 	movl   $0x515,0x8(%esp)
 85c6c9e:	00 
 85c6c9f:	c7 44 24 04 c0 e7 cb 	movl   $0x8cbe7c0,0x4(%esp)
 85c6ca6:	08 
 85c6ca7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c6caa:	89 04 24             	mov    %eax,(%esp)
 85c6cad:	e8 66 8a f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c6cb2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c6cb6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6cba:	c7 44 24 04 4c d3 cb 	movl   $0x8cbd34c,0x4(%esp)
 85c6cc1:	08 
 85c6cc2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c6cc5:	89 04 24             	mov    %eax,(%esp)
 85c6cc8:	e8 bb 8a f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6ccd:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6cd0:	83 c0 14             	add    $0x14,%eax
 85c6cd3:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c6cda:	00 
 85c6cdb:	89 04 24             	mov    %eax,(%esp)
 85c6cde:	e8 99 df ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c6ce3:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6ce8:	eb 52                	jmp    85c6d3c <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x488>
 85c6cea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6ced:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c6cf1:	98                   	cwtl
 85c6cf2:	8d 70 0a             	lea    0xa(%eax),%esi
 85c6cf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c6cf8:	8b 58 07             	mov    0x7(%eax),%ebx
 85c6cfb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6cfe:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6d01:	89 04 24             	mov    %eax,(%esp)
 85c6d04:	e8 75 35 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c6d09:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c6d10:	00 
 85c6d11:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c6d15:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 85c6d1c:	00 
 85c6d1d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6d21:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 85c6d28:	00 
 85c6d29:	89 04 24             	mov    %eax,(%esp)
 85c6d2c:	e8 fd 1e f4 ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 85c6d31:	eb 04                	jmp    85c6d37 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x483>
 85c6d33:	90                   	nop
 85c6d34:	eb 01                	jmp    85c6d37 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE+0x483>
 85c6d36:	90                   	nop
 85c6d37:	b8 01 00 00 00       	mov    $0x1,%eax
 85c6d3c:	81 c4 9c 00 00 00    	add    $0x9c,%esp
 85c6d42:	5b                   	pop    %ebx
 85c6d43:	5e                   	pop    %esi
 85c6d44:	5f                   	pop    %edi
 85c6d45:	5d                   	pop    %ebp
 85c6d46:	c3                   	ret
 85c6d47:	90                   	nop

```

```c
// private_store::CPrivateStore::DeleteItem @ 0x85c68b4

/* private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&) */

undefined4 __thiscall
private_store::CPrivateStore::DeleteItem(CPrivateStore *this,PrivateStoreItem *param_1)

{
  PrivateStoreItem PVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CInventory *pCVar10;
  undefined4 uVar11;
  CCargo *pCVar12;
  undefined4 uVar13;
  cMyTrace local_6c [16];
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  uVar13 = *(undefined4 *)(param_1 + 0x40);
  uVar6 = Inven_Item::GetReSealCount((Inven_Item *)param_1);
  uVar7 = Inven_Item::GetUpgrade((Inven_Item *)param_1);
  uVar11 = *(undefined4 *)(param_1 + 7);
  uVar3 = *(undefined4 *)(param_1 + 2);
  uVar8 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
  uVar9 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cMyTrace::cMyTrace(local_6c,
                     "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                     ,0x4d7,0);
  cMyTrace::operator()
            (local_6c,
             "PrivateStore del charac_name(%s)(%d), item_id(%d), add_info(%d), upgrade(%d), reseal_count(%d), sell_price(%d)"
             ,uVar9,uVar8,uVar3,uVar11,uVar7 & 0xff,uVar6 & 0xff,uVar13);
  PVar1 = param_1[0x46];
  if (PVar1 == (PrivateStoreItem)0x1) {
    sVar2 = *(short *)(param_1 + 0x48);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
    cVar5 = CInventory::delete_item(pCVar10,2,(int)sVar2,1,4,1);
    if (cVar5 != '\x01') {
      sVar2 = *(short *)(param_1 + 0x48);
      uVar13 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      cMyTrace::cMyTrace(local_2c,
                         "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                         ,0x515,5);
      cMyTrace::operator()
                (local_2c,"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",uVar13,
                 (int)sVar2);
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return 0;
    }
    sVar2 = *(short *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 7);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
    CInventory::SendAvatarEvent(pCVar10,0x36,iVar4,3,sVar2 + 10,0);
  }
  else if ((char)PVar1 < '\x02') {
    if (PVar1 == (PrivateStoreItem)0x0) {
      uVar13 = *(undefined4 *)(param_1 + 7);
      sVar2 = *(short *)(param_1 + 0x48);
      pCVar10 = (CInventory *)
                CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
      cVar5 = CInventory::delete_item(pCVar10,1,(int)sVar2,uVar13,0xb,1);
      if (cVar5 != '\x01') {
        uVar13 = *(undefined4 *)(param_1 + 7);
        sVar2 = *(short *)(param_1 + 0x48);
        uVar11 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
        cMyTrace::cMyTrace(local_5c,
                           "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                           ,0x4e0,5);
        cMyTrace::operator()
                  (local_5c,"Store::user_sell_item, delete_item failed , User ch=%d , %d %d",uVar11,
                   (int)sVar2,uVar13);
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
    }
  }
  else if (PVar1 == (PrivateStoreItem)0x2) {
    uVar13 = *(undefined4 *)(param_1 + 7);
    sVar2 = *(short *)(param_1 + 0x48);
    pCVar12 = (CCargo *)CUserCharacInfo::getCurCharacCargoW(*(CUserCharacInfo **)(this + 0x2c));
    cVar5 = CCargo::delete_item(pCVar12,(int)sVar2,uVar13,0xb);
    if (cVar5 != '\x01') {
      uVar13 = *(undefined4 *)(param_1 + 7);
      sVar2 = *(short *)(param_1 + 0x48);
      uVar11 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      cMyTrace::cMyTrace(local_4c,
                         "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                         ,0x4ec,5);
      cMyTrace::operator()
                (local_4c,"Store::user_sell_item, delete_item failed 2, User ch=%d , %d %d",uVar11,
                 (int)sVar2,uVar13);
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return 0;
    }
  }
  else if (PVar1 == (PrivateStoreItem)0x3) {
    sVar2 = *(short *)(param_1 + 0x48);
    pCVar10 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
    cVar5 = CInventory::delete_item(pCVar10,0,(int)sVar2,1,0xb,1);
    if (cVar5 != '\x01') {
      sVar2 = *(short *)(param_1 + 0x48);
      uVar13 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      cMyTrace::cMyTrace(local_3c,
                         "bool private_store::CPrivateStore::DeleteItem(private_store::PrivateStoreItem&)"
                         ,0x4f9,5);
      cMyTrace::operator()
                (local_3c,"Store::user_sell_item, delete_item failed 3, User ch=%d , %d",uVar13,
                 (int)sVar2);
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return 0;
    }
    CUser::send_equip(*(CUser **)(this + 0x2c),(int)*(short *)(param_1 + 0x48));
  }
  return 1;
}

```

---

## EnterPrivateStore

```asm
// === 085c8dd6 private_store::CPrivateStore::EnterPrivateStore  [0x085c8dd6-0x85c8fcc] ===
 85c8dd6:	55                   	push   %ebp
 85c8dd7:	89 e5                	mov    %esp,%ebp
 85c8dd9:	56                   	push   %esi
 85c8dda:	53                   	push   %ebx
 85c8ddb:	83 ec 30             	sub    $0x30,%esp
 85c8dde:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8de1:	8b 40 30             	mov    0x30(%eax),%eax
 85c8de4:	8b 55 08             	mov    0x8(%ebp),%edx
 85c8de7:	83 c2 14             	add    $0x14,%edx
 85c8dea:	c7 44 24 0c 56 00 00 	movl   $0x56,0xc(%esp)
 85c8df1:	00 
 85c8df2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c8df9:	00 
 85c8dfa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8dfe:	89 14 24             	mov    %edx,(%esp)
 85c8e01:	e8 a2 29 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c8e06:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e09:	8b 40 30             	mov    0x30(%eax),%eax
 85c8e0c:	85 c0                	test   %eax,%eax
 85c8e0e:	75 0a                	jne    85c8e1a <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x44>
 85c8e10:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8e15:	e9 a7 01 00 00       	jmp    85c8fc1 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x1eb>
 85c8e1a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e1d:	8b 40 20             	mov    0x20(%eax),%eax
 85c8e20:	85 c0                	test   %eax,%eax
 85c8e22:	75 20                	jne    85c8e44 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x6e>
 85c8e24:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e27:	83 c0 14             	add    $0x14,%eax
 85c8e2a:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c8e31:	00 
 85c8e32:	89 04 24             	mov    %eax,(%esp)
 85c8e35:	e8 42 be ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8e3a:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8e3f:	e9 7d 01 00 00       	jmp    85c8fc1 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x1eb>
 85c8e44:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e47:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85c8e4b:	3c 02                	cmp    $0x2,%al
 85c8e4d:	74 38                	je     85c8e87 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0xb1>
 85c8e4f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e52:	8b 50 30             	mov    0x30(%eax),%edx
 85c8e55:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e58:	8b 40 20             	mov    0x20(%eax),%eax
 85c8e5b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8e5f:	89 04 24             	mov    %eax,(%esp)
 85c8e62:	e8 ad 1a 00 00       	call   85ca914 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser>
 85c8e67:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e6a:	83 c0 14             	add    $0x14,%eax
 85c8e6d:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 85c8e74:	00 
 85c8e75:	89 04 24             	mov    %eax,(%esp)
 85c8e78:	e8 ff bd ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8e7d:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8e82:	e9 3a 01 00 00       	jmp    85c8fc1 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x1eb>
 85c8e87:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e8a:	8d 58 30             	lea    0x30(%eax),%ebx
 85c8e8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8e90:	8d 50 34             	lea    0x34(%eax),%edx
 85c8e93:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c8e96:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8e9a:	89 04 24             	mov    %eax,(%esp)
 85c8e9d:	e8 06 30 ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c8ea2:	83 ec 04             	sub    $0x4,%esp
 85c8ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ea8:	8d 50 34             	lea    0x34(%eax),%edx
 85c8eab:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85c8eae:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8eb2:	89 04 24             	mov    %eax,(%esp)
 85c8eb5:	e8 c8 2f ca ff       	call   826be82 <_ZNSt4listIP5CUserSaIS1_EE5beginEv>
 85c8eba:	83 ec 04             	sub    $0x4,%esp
 85c8ebd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c8ec0:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c8ec4:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85c8ec7:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8ecb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85c8ece:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8ed2:	89 04 24             	mov    %eax,(%esp)
 85c8ed5:	e8 e5 43 00 00       	call   85cd2bf <_ZSt4findISt14_List_iteratorIP5CUserES2_ET_S4_S4_RKT0_>
 85c8eda:	83 ec 04             	sub    $0x4,%esp
 85c8edd:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ee0:	8d 50 34             	lea    0x34(%eax),%edx
 85c8ee3:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85c8ee6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8eea:	89 04 24             	mov    %eax,(%esp)
 85c8eed:	e8 b6 2f ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c8ef2:	83 ec 04             	sub    $0x4,%esp
 85c8ef5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85c8ef8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8efc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c8eff:	89 04 24             	mov    %eax,(%esp)
 85c8f02:	e8 c5 2f ca ff       	call   826becc <_ZNKSt14_List_iteratorIP5CUserEneERKS2_>
 85c8f07:	84 c0                	test   %al,%al
 85c8f09:	74 20                	je     85c8f2b <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x155>
 85c8f0b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f0e:	83 c0 14             	add    $0x14,%eax
 85c8f11:	c7 44 24 04 14 00 00 	movl   $0x14,0x4(%esp)
 85c8f18:	00 
 85c8f19:	89 04 24             	mov    %eax,(%esp)
 85c8f1c:	e8 5b bd ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8f21:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8f26:	e9 96 00 00 00       	jmp    85c8fc1 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x1eb>
 85c8f2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f2e:	8d 50 30             	lea    0x30(%eax),%edx
 85c8f31:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f34:	83 c0 34             	add    $0x34,%eax
 85c8f37:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8f3b:	89 04 24             	mov    %eax,(%esp)
 85c8f3e:	e8 67 73 ff ff       	call   85c02aa <_ZNSt4listIP5CUserSaIS1_EE9push_backERKS1_>
 85c8f43:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85c8f46:	89 04 24             	mov    %eax,(%esp)
 85c8f49:	e8 24 2a 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c8f4e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f51:	8d 58 3c             	lea    0x3c(%eax),%ebx
 85c8f54:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f57:	89 04 24             	mov    %eax,(%esp)
 85c8f5a:	e8 35 29 00 00       	call   85cb894 <_ZN13private_store13CPrivateStore14GetSellerIndexEv>
 85c8f5f:	0f b7 d0             	movzwl %ax,%edx
 85c8f62:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f65:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c8f68:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c8f6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8f70:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8f74:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85c8f77:	89 04 24             	mov    %eax,(%esp)
 85c8f7a:	e8 e1 31 00 00       	call   85cc160 <_ZN13private_store17CPacketBufPrivate30MakeCmdpacketEnterPrivateStoreEP5CUsertRSt6vectorINS_16PrivateStoreItemESaIS4_EE>
 85c8f7f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8f82:	8b 40 30             	mov    0x30(%eax),%eax
 85c8f85:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85c8f88:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8f8c:	89 04 24             	mov    %eax,(%esp)
 85c8f8f:	e8 26 f6 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c8f94:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c8f99:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85c8f9c:	89 04 24             	mov    %eax,(%esp)
 85c8f9f:	e8 08 3b 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c8fa4:	eb 1b                	jmp    85c8fc1 <_ZN13private_store13CPrivateStore17EnterPrivateStoreEv+0x1eb>
 85c8fa6:	89 d3                	mov    %edx,%ebx
 85c8fa8:	89 c6                	mov    %eax,%esi
 85c8faa:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85c8fad:	89 04 24             	mov    %eax,(%esp)
 85c8fb0:	e8 f7 3a 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c8fb5:	89 f0                	mov    %esi,%eax
 85c8fb7:	89 da                	mov    %ebx,%edx
 85c8fb9:	89 04 24             	mov    %eax,(%esp)
 85c8fbc:	e8 8f a7 51 00       	call   8ae3750 <_Unwind_Resume>
 85c8fc1:	89 d8                	mov    %ebx,%eax
 85c8fc3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85c8fc6:	83 c4 00             	add    $0x0,%esp
 85c8fc9:	5b                   	pop    %ebx
 85c8fca:	5e                   	pop    %esi
 85c8fcb:	5d                   	pop    %ebp
 85c8fcc:	c3                   	ret

```

```c
// private_store::CPrivateStore::EnterPrivateStore @ 0x85c8dd6

/* private_store::CPrivateStore::EnterPrivateStore() */

undefined4 __thiscall private_store::CPrivateStore::EnterPrivateStore(CPrivateStore *this)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  CPacketBufPrivate local_28 [12];
  _List_iterator<CUser*> local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator local_10 [4];
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x56);
  if (*(int *)(this + 0x30) == 0) {
    uVar3 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar3 = 0;
  }
  else if (this[0x10] == (CPrivateStore)0x2) {
    std::list<CUser*,std::allocator<CUser*>>::end();
    std::list<CUser*,std::allocator<CUser*>>::begin();
    std::find<std::_List_iterator<CUser*>,CUser*>(local_1c,local_14,local_18,this + 0x30);
    std::list<CUser*,std::allocator<CUser*>>::end();
    cVar1 = std::_List_iterator<CUser*>::operator!=(local_1c,local_10);
    if (cVar1 == '\0') {
      std::list<CUser*,std::allocator<CUser*>>::push_back
                ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34),(CUser **)(this + 0x30));
      CPacketBufPrivate::CPacketBufPrivate(local_28);
      uVar2 = GetSellerIndex(this);
                    /* try { // try from 085c8f7a to 085c8f93 has its CatchHandler @ 085c8fa6 */
      CPacketBufPrivate::MakeCmdpacketEnterPrivateStore
                (local_28,*(CUser **)(this + 0x2c),uVar2,(vector *)(this + 0x3c));
      CUser::Send(*(CUser **)(this + 0x30),(PacketGuard *)local_28);
      uVar3 = 1;
      CPacketBufPrivate::~CPacketBufPrivate(local_28);
    }
    else {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x14);
      uVar3 = 0;
    }
  }
  else {
    CPrivateStoreMgr::FreeStoreBuyer(*(CUser **)(this + 0x20));
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3b);
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## ExitPrivateStore

```asm
// === 085c8fd4 private_store::CPrivateStore::ExitPrivateStore  [0x085c8fd4-0x85c91b5] ===
 85c8fd4:	55                   	push   %ebp
 85c8fd5:	89 e5                	mov    %esp,%ebp
 85c8fd7:	56                   	push   %esi
 85c8fd8:	53                   	push   %ebx
 85c8fd9:	83 ec 30             	sub    $0x30,%esp
 85c8fdc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8fdf:	8b 40 30             	mov    0x30(%eax),%eax
 85c8fe2:	8b 55 08             	mov    0x8(%ebp),%edx
 85c8fe5:	83 c2 14             	add    $0x14,%edx
 85c8fe8:	c7 44 24 0c 57 00 00 	movl   $0x57,0xc(%esp)
 85c8fef:	00 
 85c8ff0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c8ff7:	00 
 85c8ff8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8ffc:	89 14 24             	mov    %edx,(%esp)
 85c8fff:	e8 a4 27 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c9004:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9007:	8b 40 30             	mov    0x30(%eax),%eax
 85c900a:	85 c0                	test   %eax,%eax
 85c900c:	75 0a                	jne    85c9018 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x44>
 85c900e:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c9013:	e9 91 01 00 00       	jmp    85c91a9 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x1d5>
 85c9018:	8b 45 08             	mov    0x8(%ebp),%eax
 85c901b:	8b 40 20             	mov    0x20(%eax),%eax
 85c901e:	85 c0                	test   %eax,%eax
 85c9020:	75 20                	jne    85c9042 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x6e>
 85c9022:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9025:	83 c0 14             	add    $0x14,%eax
 85c9028:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c902f:	00 
 85c9030:	89 04 24             	mov    %eax,(%esp)
 85c9033:	e8 44 bc ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c9038:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c903d:	e9 67 01 00 00       	jmp    85c91a9 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x1d5>
 85c9042:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9045:	8d 58 30             	lea    0x30(%eax),%ebx
 85c9048:	8b 45 08             	mov    0x8(%ebp),%eax
 85c904b:	8d 50 34             	lea    0x34(%eax),%edx
 85c904e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c9051:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9055:	89 04 24             	mov    %eax,(%esp)
 85c9058:	e8 4b 2e ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c905d:	83 ec 04             	sub    $0x4,%esp
 85c9060:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9063:	8d 50 34             	lea    0x34(%eax),%edx
 85c9066:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c9069:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c906d:	89 04 24             	mov    %eax,(%esp)
 85c9070:	e8 0d 2e ca ff       	call   826be82 <_ZNSt4listIP5CUserSaIS1_EE5beginEv>
 85c9075:	83 ec 04             	sub    $0x4,%esp
 85c9078:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c907b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c907f:	8b 55 e8             	mov    -0x18(%ebp),%edx
 85c9082:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9086:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85c9089:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c908d:	89 04 24             	mov    %eax,(%esp)
 85c9090:	e8 2a 42 00 00       	call   85cd2bf <_ZSt4findISt14_List_iteratorIP5CUserES2_ET_S4_S4_RKT0_>
 85c9095:	83 ec 04             	sub    $0x4,%esp
 85c9098:	8b 45 08             	mov    0x8(%ebp),%eax
 85c909b:	83 c0 34             	add    $0x34,%eax
 85c909e:	89 04 24             	mov    %eax,(%esp)
 85c90a1:	e8 6e 42 00 00       	call   85cd314 <_ZNKSt4listIP5CUserSaIS1_EE5emptyEv>
 85c90a6:	83 f0 01             	xor    $0x1,%eax
 85c90a9:	84 c0                	test   %al,%al
 85c90ab:	74 4e                	je     85c90fb <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x127>
 85c90ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85c90b0:	8d 50 34             	lea    0x34(%eax),%edx
 85c90b3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85c90b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c90ba:	89 04 24             	mov    %eax,(%esp)
 85c90bd:	e8 e6 2d ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c90c2:	83 ec 04             	sub    $0x4,%esp
 85c90c5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85c90c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c90cc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c90cf:	89 04 24             	mov    %eax,(%esp)
 85c90d2:	e8 4f 42 00 00       	call   85cd326 <_ZNKSt14_List_iteratorIP5CUserEeqERKS2_>
 85c90d7:	84 c0                	test   %al,%al
 85c90d9:	74 20                	je     85c90fb <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x127>
 85c90db:	8b 45 08             	mov    0x8(%ebp),%eax
 85c90de:	83 c0 14             	add    $0x14,%eax
 85c90e1:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 85c90e8:	00 
 85c90e9:	89 04 24             	mov    %eax,(%esp)
 85c90ec:	e8 8b bb ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c90f1:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c90f6:	e9 ae 00 00 00       	jmp    85c91a9 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x1d5>
 85c90fb:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c90fe:	89 04 24             	mov    %eax,(%esp)
 85c9101:	e8 6c 28 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c9106:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c9109:	89 04 24             	mov    %eax,(%esp)
 85c910c:	e8 57 34 00 00       	call   85cc568 <_ZN13private_store17CPacketBufPrivate29MakeCmdpacketExitPrivateStoreEv>
 85c9111:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9114:	8b 40 30             	mov    0x30(%eax),%eax
 85c9117:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85c911a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c911e:	89 04 24             	mov    %eax,(%esp)
 85c9121:	e8 94 f4 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c9126:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9129:	8b 50 30             	mov    0x30(%eax),%edx
 85c912c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c912f:	8b 40 20             	mov    0x20(%eax),%eax
 85c9132:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9136:	89 04 24             	mov    %eax,(%esp)
 85c9139:	e8 d6 17 00 00       	call   85ca914 <_ZN13private_store16CPrivateStoreMgr14FreeStoreBuyerEP5CUser>
 85c913e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9141:	83 c0 34             	add    $0x34,%eax
 85c9144:	89 04 24             	mov    %eax,(%esp)
 85c9147:	e8 c8 41 00 00       	call   85cd314 <_ZNKSt4listIP5CUserSaIS1_EE5emptyEv>
 85c914c:	83 f0 01             	xor    $0x1,%eax
 85c914f:	84 c0                	test   %al,%al
 85c9151:	74 1f                	je     85c9172 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x19e>
 85c9153:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9156:	8d 48 34             	lea    0x34(%eax),%ecx
 85c9159:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85c915c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85c915f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9163:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85c9167:	89 04 24             	mov    %eax,(%esp)
 85c916a:	e8 cb 41 00 00       	call   85cd33a <_ZNSt4listIP5CUserSaIS1_EE5eraseESt14_List_iteratorIS1_E>
 85c916f:	83 ec 04             	sub    $0x4,%esp
 85c9172:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9175:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 85c917c:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c9181:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c9184:	89 04 24             	mov    %eax,(%esp)
 85c9187:	e8 20 39 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c918c:	eb 1b                	jmp    85c91a9 <_ZN13private_store13CPrivateStore16ExitPrivateStoreEv+0x1d5>
 85c918e:	89 d3                	mov    %edx,%ebx
 85c9190:	89 c6                	mov    %eax,%esi
 85c9192:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c9195:	89 04 24             	mov    %eax,(%esp)
 85c9198:	e8 0f 39 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c919d:	89 f0                	mov    %esi,%eax
 85c919f:	89 da                	mov    %ebx,%edx
 85c91a1:	89 04 24             	mov    %eax,(%esp)
 85c91a4:	e8 a7 a5 51 00       	call   8ae3750 <_Unwind_Resume>
 85c91a9:	89 d8                	mov    %ebx,%eax
 85c91ab:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85c91ae:	83 c4 00             	add    $0x0,%esp
 85c91b1:	5b                   	pop    %ebx
 85c91b2:	5e                   	pop    %esi
 85c91b3:	5d                   	pop    %ebp
 85c91b4:	c3                   	ret
 85c91b5:	90                   	nop

```

```c
// private_store::CPrivateStore::ExitPrivateStore @ 0x85c8fd4

/* private_store::CPrivateStore::ExitPrivateStore() */

undefined4 __thiscall private_store::CPrivateStore::ExitPrivateStore(CPrivateStore *this)

{
  char cVar1;
  undefined4 uVar2;
  CPacketBufPrivate local_2c [12];
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  _List_iterator local_14 [4];
  undefined1 local_10 [4];
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x57);
  if (*(int *)(this + 0x30) == 0) {
    uVar2 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar2 = 0;
  }
  else {
    std::list<CUser*,std::allocator<CUser*>>::end();
    std::list<CUser*,std::allocator<CUser*>>::begin();
    std::find<std::_List_iterator<CUser*>,CUser*>(&local_20,local_18,local_1c,this + 0x30);
    cVar1 = std::list<CUser*,std::allocator<CUser*>>::empty
                      ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
    if (cVar1 != '\x01') {
      std::list<CUser*,std::allocator<CUser*>>::end();
      cVar1 = std::_List_iterator<CUser*>::operator==((_List_iterator<CUser*> *)&local_20,local_14);
      if (cVar1 != '\0') {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x15);
        return 0;
      }
    }
    CPacketBufPrivate::CPacketBufPrivate(local_2c);
                    /* try { // try from 085c910c to 085c916e has its CatchHandler @ 085c918e */
    CPacketBufPrivate::MakeCmdpacketExitPrivateStore(local_2c);
    CUser::Send(*(CUser **)(this + 0x30),(PacketGuard *)local_2c);
    CPrivateStoreMgr::FreeStoreBuyer(*(CUser **)(this + 0x20));
    cVar1 = std::list<CUser*,std::allocator<CUser*>>::empty
                      ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
    if (cVar1 != '\x01') {
      std::list<CUser*,std::allocator<CUser*>>::erase(local_10,this + 0x34,local_20);
    }
    *(undefined4 *)(this + 0x30) = 0;
    uVar2 = 1;
    CPacketBufPrivate::~CPacketBufPrivate(local_2c);
  }
  return uVar2;
}

```

---

## GetCommissionPercent

```asm
// === 085c9b8c private_store::CPrivateStore::GetCommissionPercent  [0x085c9b8c-0x85c9bb7] ===
 85c9b8c:	55                   	push   %ebp
 85c9b8d:	89 e5                	mov    %esp,%ebp
 85c9b8f:	83 ec 18             	sub    $0x18,%esp
 85c9b92:	e8 10 08 b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85c9b97:	89 04 24             	mov    %eax,(%esp)
 85c9b9a:	e8 81 cf b4 ff       	call   8116b20 <_ZNK9GameWorld14GetChannelTypeEv>
 85c9b9f:	83 f8 03             	cmp    $0x3,%eax
 85c9ba2:	0f 94 c0             	sete   %al
 85c9ba5:	84 c0                	test   %al,%al
 85c9ba7:	74 07                	je     85c9bb0 <_ZN13private_store13CPrivateStore20GetCommissionPercentEv+0x24>
 85c9ba9:	b8 03 00 00 00       	mov    $0x3,%eax
 85c9bae:	eb 05                	jmp    85c9bb5 <_ZN13private_store13CPrivateStore20GetCommissionPercentEv+0x29>
 85c9bb0:	b8 04 00 00 00       	mov    $0x4,%eax
 85c9bb5:	c9                   	leave
 85c9bb6:	c3                   	ret
 85c9bb7:	90                   	nop

```

```c
// private_store::CPrivateStore::GetCommissionPercent @ 0x85c9b8c

/* private_store::CPrivateStore::GetCommissionPercent() */

undefined4 private_store::CPrivateStore::GetCommissionPercent(void)

{
  GameWorld *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (GameWorld *)G_GameWorld();
  iVar1 = GameWorld::GetChannelType(this);
  if (iVar1 == 3) {
    uVar2 = 3;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

```

---

## GetItemInfo

```asm
// === 085c9f22 private_store::CPrivateStore::GetItemInfo  [0x085c9f22-0x85ca115] ===
 85c9f22:	55                   	push   %ebp
 85c9f23:	89 e5                	mov    %esp,%ebp
 85c9f25:	53                   	push   %ebx
 85c9f26:	81 ec 54 01 00 00    	sub    $0x154,%esp
 85c9f2c:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9f2f:	8b 40 07             	mov    0x7(%eax),%eax
 85c9f32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c9f35:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9f38:	0f b6 40 46          	movzbl 0x46(%eax),%eax
 85c9f3c:	0f be c0             	movsbl %al,%eax
 85c9f3f:	83 f8 07             	cmp    $0x7,%eax
 85c9f42:	0f 87 85 01 00 00    	ja     85ca0cd <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1ab>
 85c9f48:	8b 04 85 e4 d6 cb 08 	mov    0x8cbd6e4(,%eax,4),%eax
 85c9f4f:	ff e0                	jmp    *%eax
 85c9f51:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9f54:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9f58:	0f bf d8             	movswl %ax,%ebx
 85c9f5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9f5e:	89 04 24             	mov    %eax,(%esp)
 85c9f61:	e8 18 03 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c9f66:	8d 95 c3 fe ff ff    	lea    -0x13d(%ebp),%edx
 85c9f6c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c9f70:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c9f77:	00 
 85c9f78:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9f7c:	89 14 24             	mov    %edx,(%esp)
 85c9f7f:	e8 94 19 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85c9f84:	83 ec 04             	sub    $0x4,%esp
 85c9f87:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9f8a:	8d 95 c3 fe ff ff    	lea    -0x13d(%ebp),%edx
 85c9f90:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9f94:	89 04 24             	mov    %eax,(%esp)
 85c9f97:	e8 92 06 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85c9f9c:	e9 33 01 00 00       	jmp    85ca0d4 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1b2>
 85c9fa1:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9fa4:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9fa8:	0f bf d8             	movswl %ax,%ebx
 85c9fab:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9fae:	89 04 24             	mov    %eax,(%esp)
 85c9fb1:	e8 ce 7a b8 ff       	call   8151a84 <_ZNK15CUserCharacInfo18getCurCharacCargoREv>
 85c9fb6:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 85c9fbc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c9fc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9fc4:	89 14 24             	mov    %edx,(%esp)
 85c9fc7:	e8 e8 12 f4 ff       	call   850b2b4 <_ZNK6CCargo14get_cargo_slotEi>
 85c9fcc:	83 ec 04             	sub    $0x4,%esp
 85c9fcf:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9fd2:	8d 95 00 ff ff ff    	lea    -0x100(%ebp),%edx
 85c9fd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9fdc:	89 04 24             	mov    %eax,(%esp)
 85c9fdf:	e8 4a 06 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85c9fe4:	e9 eb 00 00 00       	jmp    85ca0d4 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1b2>
 85c9fe9:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9fec:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85c9ff0:	0f bf d8             	movswl %ax,%ebx
 85c9ff3:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c9ff6:	89 04 24             	mov    %eax,(%esp)
 85c9ff9:	e8 80 02 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c9ffe:	8d 95 3d ff ff ff    	lea    -0xc3(%ebp),%edx
 85ca004:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85ca008:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85ca00f:	00 
 85ca010:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca014:	89 14 24             	mov    %edx,(%esp)
 85ca017:	e8 fc 18 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85ca01c:	83 ec 04             	sub    $0x4,%esp
 85ca01f:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca022:	8d 95 3d ff ff ff    	lea    -0xc3(%ebp),%edx
 85ca028:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca02c:	89 04 24             	mov    %eax,(%esp)
 85ca02f:	e8 fa 05 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85ca034:	e9 9b 00 00 00       	jmp    85ca0d4 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1b2>
 85ca039:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca03c:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85ca040:	0f bf d8             	movswl %ax,%ebx
 85ca043:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca046:	89 04 24             	mov    %eax,(%esp)
 85ca049:	e8 30 02 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85ca04e:	8d 95 7a ff ff ff    	lea    -0x86(%ebp),%edx
 85ca054:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85ca058:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 85ca05f:	00 
 85ca060:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca064:	89 14 24             	mov    %edx,(%esp)
 85ca067:	e8 ac 18 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85ca06c:	83 ec 04             	sub    $0x4,%esp
 85ca06f:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca072:	8d 95 7a ff ff ff    	lea    -0x86(%ebp),%edx
 85ca078:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca07c:	89 04 24             	mov    %eax,(%esp)
 85ca07f:	e8 aa 05 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85ca084:	eb 4e                	jmp    85ca0d4 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1b2>
 85ca086:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca089:	0f b7 40 48          	movzwl 0x48(%eax),%eax
 85ca08d:	0f bf d8             	movswl %ax,%ebx
 85ca090:	8b 45 0c             	mov    0xc(%ebp),%eax
 85ca093:	89 04 24             	mov    %eax,(%esp)
 85ca096:	e8 e3 01 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85ca09b:	8d 55 b7             	lea    -0x49(%ebp),%edx
 85ca09e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85ca0a2:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 85ca0a9:	00 
 85ca0aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca0ae:	89 14 24             	mov    %edx,(%esp)
 85ca0b1:	e8 62 18 f3 ff       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 85ca0b6:	83 ec 04             	sub    $0x4,%esp
 85ca0b9:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca0bc:	8d 55 b7             	lea    -0x49(%ebp),%edx
 85ca0bf:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca0c3:	89 04 24             	mov    %eax,(%esp)
 85ca0c6:	e8 63 05 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85ca0cb:	eb 07                	jmp    85ca0d4 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1b2>
 85ca0cd:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca0d2:	eb 3d                	jmp    85ca111 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1ef>
 85ca0d4:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca0d7:	8b 40 02             	mov    0x2(%eax),%eax
 85ca0da:	85 c0                	test   %eax,%eax
 85ca0dc:	75 07                	jne    85ca0e5 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1c3>
 85ca0de:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca0e3:	eb 2c                	jmp    85ca111 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1ef>
 85ca0e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca0e8:	89 44 24 08          	mov    %eax,0x8(%esp)
 85ca0ec:	8b 45 10             	mov    0x10(%ebp),%eax
 85ca0ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca0f3:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca0f6:	89 04 24             	mov    %eax,(%esp)
 85ca0f9:	e8 50 fc ff ff       	call   85c9d4e <_ZN13private_store13CPrivateStore14CheckValidItemERNS_16PrivateStoreItemEi>
 85ca0fe:	83 f0 01             	xor    $0x1,%eax
 85ca101:	84 c0                	test   %al,%al
 85ca103:	74 07                	je     85ca10c <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1ea>
 85ca105:	b8 00 00 00 00       	mov    $0x0,%eax
 85ca10a:	eb 05                	jmp    85ca111 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE+0x1ef>
 85ca10c:	b8 01 00 00 00       	mov    $0x1,%eax
 85ca111:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 85ca114:	c9                   	leave
 85ca115:	c3                   	ret

```

```c
// private_store::CPrivateStore::GetItemInfo @ 0x85c9f22

/* private_store::CPrivateStore::GetItemInfo(CUser*, private_store::PrivateStoreItem&) */

undefined4 __thiscall
private_store::CPrivateStore::GetItemInfo
          (CPrivateStore *this,CUser *param_1,PrivateStoreItem *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  Inven_Item local_141 [61];
  Inven_Item local_104 [61];
  Inven_Item local_c7 [61];
  Inven_Item local_8a [61];
  Inven_Item local_4d [61];
  int local_10;
  
  local_10 = *(int *)(param_2 + 7);
  switch(param_2[0x46]) {
  case (PrivateStoreItem)0x0:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_141,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_141);
    break;
  case (PrivateStoreItem)0x1:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_8a,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_8a);
    break;
  case (PrivateStoreItem)0x2:
    CUserCharacInfo::getCurCharacCargoR((CUserCharacInfo *)param_1);
    CCargo::get_cargo_slot((int)local_104);
    Inven_Item::setCopy((Inven_Item *)param_2,local_104);
    break;
  case (PrivateStoreItem)0x3:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_c7,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_c7);
    break;
  default:
    return 0;
  case (PrivateStoreItem)0x7:
    iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
    CInventory::GetInvenSlot((int)local_4d,iVar2);
    Inven_Item::setCopy((Inven_Item *)param_2,local_4d);
  }
  if (*(int *)(param_2 + 2) == 0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CheckValidItem(this,param_2,local_10);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## GetItemPrice

```asm
// === 085c7d04 private_store::CPrivateStore::GetItemPrice  [0x085c7d04-0x85c7e6c] ===
 85c7d04:	55                   	push   %ebp
 85c7d05:	89 e5                	mov    %esp,%ebp
 85c7d07:	83 ec 18             	sub    $0x18,%esp
 85c7d0a:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7d0d:	8b 50 40             	mov    0x40(%eax),%edx
 85c7d10:	8b 45 18             	mov    0x18(%ebp),%eax
 85c7d13:	89 10                	mov    %edx,(%eax)
 85c7d15:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85c7d18:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85c7d1e:	8b 45 20             	mov    0x20(%ebp),%eax
 85c7d21:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85c7d27:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7d2a:	89 04 24             	mov    %eax,(%esp)
 85c7d2d:	e8 c8 95 b2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85c7d32:	84 c0                	test   %al,%al
 85c7d34:	0f 84 b5 00 00 00    	je     85c7def <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0xeb>
 85c7d3a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85c7d3e:	7f 20                	jg     85c7d60 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x5c>
 85c7d40:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7d43:	83 c0 14             	add    $0x14,%eax
 85c7d46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c7d4d:	00 
 85c7d4e:	89 04 24             	mov    %eax,(%esp)
 85c7d51:	e8 26 cf ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7d56:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7d5b:	e9 0b 01 00 00       	jmp    85c7e6b <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x167>
 85c7d60:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7d63:	8b 40 07             	mov    0x7(%eax),%eax
 85c7d66:	3b 45 14             	cmp    0x14(%ebp),%eax
 85c7d69:	7d 20                	jge    85c7d8b <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x87>
 85c7d6b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7d6e:	83 c0 14             	add    $0x14,%eax
 85c7d71:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c7d78:	00 
 85c7d79:	89 04 24             	mov    %eax,(%esp)
 85c7d7c:	e8 fb ce ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7d81:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7d86:	e9 e0 00 00 00       	jmp    85c7e6b <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x167>
 85c7d8b:	8b 45 18             	mov    0x18(%ebp),%eax
 85c7d8e:	8b 00                	mov    (%eax),%eax
 85c7d90:	8b 55 18             	mov    0x18(%ebp),%edx
 85c7d93:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c7d97:	8b 55 14             	mov    0x14(%ebp),%edx
 85c7d9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7d9e:	89 04 24             	mov    %eax,(%esp)
 85c7da1:	e8 84 54 00 00       	call   85cd22a <_ZN13private_store9COperatorIiE7ProductEiiRi>
 85c7da6:	83 f0 01             	xor    $0x1,%eax
 85c7da9:	84 c0                	test   %al,%al
 85c7dab:	74 20                	je     85c7dcd <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0xc9>
 85c7dad:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7db0:	83 c0 14             	add    $0x14,%eax
 85c7db3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c7dba:	00 
 85c7dbb:	89 04 24             	mov    %eax,(%esp)
 85c7dbe:	e8 b9 ce ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7dc3:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7dc8:	e9 9e 00 00 00       	jmp    85c7e6b <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x167>
 85c7dcd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85c7dd0:	8b 10                	mov    (%eax),%edx
 85c7dd2:	8b 45 14             	mov    0x14(%ebp),%eax
 85c7dd5:	0f af d0             	imul   %eax,%edx
 85c7dd8:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85c7ddb:	89 10                	mov    %edx,(%eax)
 85c7ddd:	8b 45 20             	mov    0x20(%ebp),%eax
 85c7de0:	8b 10                	mov    (%eax),%edx
 85c7de2:	8b 45 14             	mov    0x14(%ebp),%eax
 85c7de5:	0f af d0             	imul   %eax,%edx
 85c7de8:	8b 45 20             	mov    0x20(%ebp),%eax
 85c7deb:	89 10                	mov    %edx,(%eax)
 85c7ded:	eb 51                	jmp    85c7e40 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x13c>
 85c7def:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7df2:	8b 00                	mov    (%eax),%eax
 85c7df4:	83 c0 10             	add    $0x10,%eax
 85c7df7:	8b 10                	mov    (%eax),%edx
 85c7df9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7dfc:	89 04 24             	mov    %eax,(%esp)
 85c7dff:	ff d2                	call   *%edx
 85c7e01:	83 f0 01             	xor    $0x1,%eax
 85c7e04:	84 c0                	test   %al,%al
 85c7e06:	74 12                	je     85c7e1a <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x116>
 85c7e08:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7e0b:	8b 40 07             	mov    0x7(%eax),%eax
 85c7e0e:	3b 45 14             	cmp    0x14(%ebp),%eax
 85c7e11:	74 07                	je     85c7e1a <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x116>
 85c7e13:	b8 01 00 00 00       	mov    $0x1,%eax
 85c7e18:	eb 05                	jmp    85c7e1f <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x11b>
 85c7e1a:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7e1f:	84 c0                	test   %al,%al
 85c7e21:	74 1d                	je     85c7e40 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x13c>
 85c7e23:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7e26:	83 c0 14             	add    $0x14,%eax
 85c7e29:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c7e30:	00 
 85c7e31:	89 04 24             	mov    %eax,(%esp)
 85c7e34:	e8 43 ce ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7e39:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7e3e:	eb 2b                	jmp    85c7e6b <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x167>
 85c7e40:	8b 45 18             	mov    0x18(%ebp),%eax
 85c7e43:	8b 00                	mov    (%eax),%eax
 85c7e45:	85 c0                	test   %eax,%eax
 85c7e47:	7f 1d                	jg     85c7e66 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x162>
 85c7e49:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7e4c:	83 c0 14             	add    $0x14,%eax
 85c7e4f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c7e56:	00 
 85c7e57:	89 04 24             	mov    %eax,(%esp)
 85c7e5a:	e8 1d ce ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7e5f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7e64:	eb 05                	jmp    85c7e6b <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_+0x167>
 85c7e66:	b8 01 00 00 00       	mov    $0x1,%eax
 85c7e6b:	c9                   	leave
 85c7e6c:	c3                   	ret

```

```c
// private_store::CPrivateStore::GetItemPrice @ 0x85c7d04

/* private_store::CPrivateStore::GetItemPrice(CItem const*, private_store::PrivateStoreItem&, int,
   int&, unsigned int&, unsigned int&) */

bool __thiscall
private_store::CPrivateStore::GetItemPrice
          (CPrivateStore *this,CItem *param_1,PrivateStoreItem *param_2,int param_3,int *param_4,
          uint *param_5,uint *param_6)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  
  *param_4 = *(int *)(param_2 + 0x40);
  *param_5 = 0;
  *param_6 = 0;
  cVar3 = CItem::is_stackable(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*(int *)param_1 + 0x10))(param_1);
    if ((cVar3 == '\x01') || (*(int *)(param_2 + 7) == param_3)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
      return false;
    }
  }
  else {
    if (param_3 < 1) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
      return false;
    }
    if (*(int *)(param_2 + 7) < param_3) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
      return false;
    }
    cVar3 = COperator<int>::Product(*param_4,param_3,param_4);
    if (cVar3 != '\x01') {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
      return false;
    }
    *param_5 = *param_5 * param_3;
    *param_6 = *param_6 * param_3;
  }
  iVar1 = *param_4;
  if (0 >= iVar1) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
  }
  return 0 < iVar1;
}

```

---

## IsAreaNearEntranceDungeon

```asm
// === 085c5082 private_store::CPrivateStore::IsAreaNearEntranceDungeon  [0x085c5082-0x85c532b] ===
 85c5082:	55                   	push   %ebp
 85c5083:	89 e5                	mov    %esp,%ebp
 85c5085:	56                   	push   %esi
 85c5086:	53                   	push   %ebx
 85c5087:	81 ec 90 00 00 00    	sub    $0x90,%esp
 85c508d:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85c5094:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85c509b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85c50a2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c50a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85c50b0:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85c50b4:	75 40                	jne    85c50f6 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x74>
 85c50b6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c50bd:	00 
 85c50be:	c7 44 24 08 33 02 00 	movl   $0x233,0x8(%esp)
 85c50c5:	00 
 85c50c6:	c7 44 24 04 80 ea cb 	movl   $0x8cbea80,0x4(%esp)
 85c50cd:	08 
 85c50ce:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85c50d1:	89 04 24             	mov    %eax,(%esp)
 85c50d4:	e8 3f a6 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c50d9:	c7 44 24 04 c1 d0 cb 	movl   $0x8cbd0c1,0x4(%esp)
 85c50e0:	08 
 85c50e1:	8d 45 94             	lea    -0x6c(%ebp),%eax
 85c50e4:	89 04 24             	mov    %eax,(%esp)
 85c50e7:	e8 9c a6 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c50ec:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c50f1:	e9 29 02 00 00       	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c50f6:	e8 ac 52 b1 ff       	call   80da3a7 <_Z11G_GameWorldv>
 85c50fb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85c50fe:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85c5102:	0f 94 c0             	sete   %al
 85c5105:	84 c0                	test   %al,%al
 85c5107:	74 40                	je     85c5149 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0xc7>
 85c5109:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c5110:	00 
 85c5111:	c7 44 24 08 39 02 00 	movl   $0x239,0x8(%esp)
 85c5118:	00 
 85c5119:	c7 44 24 04 80 ea cb 	movl   $0x8cbea80,0x4(%esp)
 85c5120:	08 
 85c5121:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85c5124:	89 04 24             	mov    %eax,(%esp)
 85c5127:	e8 ec a5 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c512c:	c7 44 24 04 cf d0 cb 	movl   $0x8cbd0cf,0x4(%esp)
 85c5133:	08 
 85c5134:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 85c5137:	89 04 24             	mov    %eax,(%esp)
 85c513a:	e8 49 a6 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c513f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c5144:	e9 d6 01 00 00       	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c5149:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c5150:	00 
 85c5151:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5154:	89 04 24             	mov    %eax,(%esp)
 85c5157:	e8 62 c2 0b 00       	call   86813be <_ZN5CUser8get_areaEb>
 85c515c:	89 c3                	mov    %eax,%ebx
 85c515e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5161:	89 04 24             	mov    %eax,(%esp)
 85c5164:	e8 fb 03 08 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85c5169:	0f be c0             	movsbl %al,%eax
 85c516c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c5170:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5174:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c5177:	89 04 24             	mov    %eax,(%esp)
 85c517a:	e8 6f f8 0f 00       	call   86c49ee <_ZN9GameWorld16check_valid_areaEii>
 85c517f:	83 f0 01             	xor    $0x1,%eax
 85c5182:	84 c0                	test   %al,%al
 85c5184:	74 40                	je     85c51c6 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x144>
 85c5186:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c518d:	00 
 85c518e:	c7 44 24 08 3f 02 00 	movl   $0x23f,0x8(%esp)
 85c5195:	00 
 85c5196:	c7 44 24 04 80 ea cb 	movl   $0x8cbea80,0x4(%esp)
 85c519d:	08 
 85c519e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85c51a1:	89 04 24             	mov    %eax,(%esp)
 85c51a4:	e8 6f a5 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c51a9:	c7 44 24 04 cf d0 cb 	movl   $0x8cbd0cf,0x4(%esp)
 85c51b0:	08 
 85c51b1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 85c51b4:	89 04 24             	mov    %eax,(%esp)
 85c51b7:	e8 cc a5 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c51bc:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c51c1:	e9 59 01 00 00       	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c51c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c51c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c51cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c51d0:	89 04 24             	mov    %eax,(%esp)
 85c51d3:	e8 60 7e 10 00       	call   86cd038 <_ZN9GameWorld14getUserVillageEP5CUser>
 85c51d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85c51db:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 85c51df:	0f 94 c0             	sete   %al
 85c51e2:	84 c0                	test   %al,%al
 85c51e4:	74 40                	je     85c5226 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x1a4>
 85c51e6:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c51ed:	00 
 85c51ee:	c7 44 24 08 46 02 00 	movl   $0x246,0x8(%esp)
 85c51f5:	00 
 85c51f6:	c7 44 24 04 80 ea cb 	movl   $0x8cbea80,0x4(%esp)
 85c51fd:	08 
 85c51fe:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85c5201:	89 04 24             	mov    %eax,(%esp)
 85c5204:	e8 0f a5 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c5209:	c7 44 24 04 e7 d0 cb 	movl   $0x8cbd0e7,0x4(%esp)
 85c5210:	08 
 85c5211:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 85c5214:	89 04 24             	mov    %eax,(%esp)
 85c5217:	e8 6c a5 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c521c:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c5221:	e9 f9 00 00 00       	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c5226:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c522d:	00 
 85c522e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5231:	89 04 24             	mov    %eax,(%esp)
 85c5234:	e8 85 c1 0b 00       	call   86813be <_ZN5CUser8get_areaEb>
 85c5239:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c523c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c523f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5243:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c5246:	89 04 24             	mov    %eax,(%esp)
 85c5249:	e8 54 e9 0f 00       	call   86c3ba2 <_ZN7Village7getAreaEi>
 85c524e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85c5251:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85c5255:	0f 94 c0             	sete   %al
 85c5258:	84 c0                	test   %al,%al
 85c525a:	75 4f                	jne    85c52ab <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x229>
 85c525c:	8b 5d e8             	mov    -0x18(%ebp),%ebx
 85c525f:	8b 43 04             	mov    0x4(%ebx),%eax
 85c5262:	83 f8 02             	cmp    $0x2,%eax
 85c5265:	75 39                	jne    85c52a0 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x21e>
 85c5267:	8b 03                	mov    (%ebx),%eax
 85c5269:	83 f8 00             	cmp    $0x0,%eax
 85c526c:	75 32                	jne    85c52a0 <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x21e>
 85c526e:	e9 a7 00 00 00       	jmp    85c531a <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x298>
 85c5273:	08 8d 45 d4 89 04    	or     %cl,0x489d445(%ebp)
 85c5279:	24 e8                	and    $0xe8,%al
 85c527b:	99                   	cltd
 85c527c:	a4                   	movsb  %ds:(%esi),%es:(%edi)
 85c527d:	f8                   	clc
 85c527e:	ff 8b 45 f4 89 44    	decl   0x4489f445(%ebx)
 85c5284:	24 08                	and    $0x8,%al
 85c5286:	c7 44 24 04 04 d1 cb 	movl   $0x8cbd104,0x4(%esp)
 85c528d:	08 
 85c528e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85c5291:	89 04 24             	mov    %eax,(%esp)
 85c5294:	e8 ef a4 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c5299:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c529e:	eb 7f                	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c52a0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c52a3:	8b 40 68             	mov    0x68(%eax),%eax
 85c52a6:	83 f8 04             	cmp    $0x4,%eax
 85c52a9:	75 6f                	jne    85c531a <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x298>
 85c52ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c52b0:	eb 6d                	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c52b2:	89 04 24             	mov    %eax,(%esp)
 85c52b5:	e8 26 0a 16 00       	call   8725ce0 <__cxa_begin_catch>
 85c52ba:	e8 b1 8a ab ff       	call   807dd70 <__errno_location@plt>
 85c52bf:	8b 00                	mov    (%eax),%eax
 85c52c1:	89 04 24             	mov    %eax,(%esp)
 85c52c4:	e8 67 84 ab ff       	call   807d730 <strerror@plt>
 85c52c9:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c52cd:	c7 44 24 10 28 d1 cb 	movl   $0x8cbd128,0x10(%esp)
 85c52d4:	08 
 85c52d5:	c7 44 24 0c 5c 02 00 	movl   $0x25c,0xc(%esp)
 85c52dc:	00 
 85c52dd:	c7 44 24 08 80 ea cb 	movl   $0x8cbea80,0x8(%esp)
 85c52e4:	08 
 85c52e5:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c52ec:	08 
 85c52ed:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c52f4:	e8 11 e9 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c52f9:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c52fe:	e8 2d 09 16 00       	call   8725c30 <__cxa_end_catch>
 85c5303:	eb 1a                	jmp    85c531f <_ZN13private_store13CPrivateStore25IsAreaNearEntranceDungeonEP5CUser+0x29d>
 85c5305:	89 d3                	mov    %edx,%ebx
 85c5307:	89 c6                	mov    %eax,%esi
 85c5309:	e8 22 09 16 00       	call   8725c30 <__cxa_end_catch>
 85c530e:	89 f0                	mov    %esi,%eax
 85c5310:	89 da                	mov    %ebx,%edx
 85c5312:	89 04 24             	mov    %eax,(%esp)
 85c5315:	e8 36 e4 51 00       	call   8ae3750 <_Unwind_Resume>
 85c531a:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c531f:	89 d8                	mov    %ebx,%eax
 85c5321:	81 c4 90 00 00 00    	add    $0x90,%esp
 85c5327:	5b                   	pop    %ebx
 85c5328:	5e                   	pop    %esi
 85c5329:	5d                   	pop    %ebp
 85c532a:	c3                   	ret
 85c532b:	90                   	nop

```

```c
// private_store::CPrivateStore::IsAreaNearEntranceDungeon @ 0x85c5082

/* private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*) */

undefined4 __thiscall
private_store::CPrivateStore::IsAreaNearEntranceDungeon(CPrivateStore *this,CUser *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [32];
  undefined4 local_20;
  undefined4 local_1c;
  GameWorld *local_18;
  Village *local_14;
  int local_10;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = (GameWorld *)0x0;
  local_14 = (Village *)0x0;
  local_10 = 0;
  if (param_1 == (CUser *)0x0) {
                    /* try { // try from 085c50d4 to 085c5298 has its CatchHandler @ 085c52b2 */
    cMyTrace::cMyTrace(local_70,
                       "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",0x233,
                       5);
    cMyTrace::operator()(local_70,"pUser == NULL");
    uVar4 = 0;
  }
  else {
    local_18 = (GameWorld *)G_GameWorld();
    if (local_18 == (GameWorld *)0x0) {
      cMyTrace::cMyTrace(local_60,
                         "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",
                         0x239,5);
      cMyTrace::operator()(local_60,"G_GameWorld call failed");
      uVar4 = 0;
    }
    else {
      iVar2 = CUser::get_area(param_1,false);
      cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
      cVar1 = GameWorld::check_valid_area(local_18,(int)cVar1,iVar2);
      if (cVar1 == '\x01') {
        local_14 = (Village *)GameWorld::getUserVillage(local_18,param_1);
        if (local_14 == (Village *)0x0) {
          cMyTrace::cMyTrace(local_40,
                             "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",
                             0x246,5);
          cMyTrace::operator()(local_40,"getUserVillage call failed");
          uVar4 = 0;
        }
        else {
          local_10 = CUser::get_area(param_1,false);
          piVar3 = (int *)Village::getArea(local_14,local_10);
          if ((piVar3 == (int *)0x0) ||
             (((piVar3[1] != 2 || (*piVar3 != 0)) && (piVar3[0x1a] == 4)))) {
            uVar4 = 0;
          }
          else {
            uVar4 = 1;
          }
        }
      }
      else {
        cMyTrace::cMyTrace(local_50,
                           "bool private_store::CPrivateStore::IsAreaNearEntranceDungeon(CUser*)",
                           0x23f,5);
        cMyTrace::operator()(local_50,"G_GameWorld call failed");
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

```

---

## IsExistBuyerList

```asm
// === 085c91b6 private_store::CPrivateStore::IsExistBuyerList  [0x085c91b6-0x85c924b] ===
 85c91b6:	55                   	push   %ebp
 85c91b7:	89 e5                	mov    %esp,%ebp
 85c91b9:	83 ec 28             	sub    $0x28,%esp
 85c91bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c91bf:	8d 50 34             	lea    0x34(%eax),%edx
 85c91c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c91c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c91c9:	89 04 24             	mov    %eax,(%esp)
 85c91cc:	e8 d7 2c ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c91d1:	83 ec 04             	sub    $0x4,%esp
 85c91d4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c91d7:	8d 50 34             	lea    0x34(%eax),%edx
 85c91da:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85c91dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c91e1:	89 04 24             	mov    %eax,(%esp)
 85c91e4:	e8 99 2c ca ff       	call   826be82 <_ZNSt4listIP5CUserSaIS1_EE5beginEv>
 85c91e9:	83 ec 04             	sub    $0x4,%esp
 85c91ec:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c91ef:	8d 55 0c             	lea    0xc(%ebp),%edx
 85c91f2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c91f6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 85c91f9:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c91fd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85c9200:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9204:	89 04 24             	mov    %eax,(%esp)
 85c9207:	e8 b3 40 00 00       	call   85cd2bf <_ZSt4findISt14_List_iteratorIP5CUserES2_ET_S4_S4_RKT0_>
 85c920c:	83 ec 04             	sub    $0x4,%esp
 85c920f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9212:	8d 50 34             	lea    0x34(%eax),%edx
 85c9215:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85c9218:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c921c:	89 04 24             	mov    %eax,(%esp)
 85c921f:	e8 84 2c ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c9224:	83 ec 04             	sub    $0x4,%esp
 85c9227:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85c922a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c922e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c9231:	89 04 24             	mov    %eax,(%esp)
 85c9234:	e8 93 2c ca ff       	call   826becc <_ZNKSt14_List_iteratorIP5CUserEneERKS2_>
 85c9239:	84 c0                	test   %al,%al
 85c923b:	74 07                	je     85c9244 <_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser+0x8e>
 85c923d:	b8 01 00 00 00       	mov    $0x1,%eax
 85c9242:	eb 05                	jmp    85c9249 <_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser+0x93>
 85c9244:	b8 00 00 00 00       	mov    $0x0,%eax
 85c9249:	c9                   	leave
 85c924a:	c3                   	ret
 85c924b:	90                   	nop

```

```c
// private_store::CPrivateStore::IsExistBuyerList @ 0x85c91b6

/* private_store::CPrivateStore::IsExistBuyerList(CUser*) */

bool private_store::CPrivateStore::IsExistBuyerList(CUser *param_1)

{
  char cVar1;
  _List_iterator<CUser*> local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  _List_iterator local_10 [12];
  
  std::list<CUser*,std::allocator<CUser*>>::end();
  std::list<CUser*,std::allocator<CUser*>>::begin();
  std::find<std::_List_iterator<CUser*>,CUser*>(local_1c,local_14,local_18,&stack0x00000008);
  std::list<CUser*,std::allocator<CUser*>>::end();
  cVar1 = std::_List_iterator<CUser*>::operator!=(local_1c,local_10);
  return cVar1 != '\0';
}

```

---

## IsLimitedSpace

```asm
// === 085c4ff2 private_store::CPrivateStore::IsLimitedSpace  [0x085c4ff2-0x85c5081] ===
 85c4ff2:	55                   	push   %ebp
 85c4ff3:	89 e5                	mov    %esp,%ebp
 85c4ff5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ff8:	0f b6 50 24          	movzbl 0x24(%eax),%edx
 85c4ffc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c4fff:	0f b6 00             	movzbl (%eax),%eax
 85c5002:	38 c2                	cmp    %al,%dl
 85c5004:	75 75                	jne    85c507b <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x89>
 85c5006:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5009:	0f b6 50 25          	movzbl 0x25(%eax),%edx
 85c500d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5010:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c5014:	38 c2                	cmp    %al,%dl
 85c5016:	75 63                	jne    85c507b <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x89>
 85c5018:	8b 45 08             	mov    0x8(%ebp),%eax
 85c501b:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 85c501f:	98                   	cwtl
 85c5020:	8d 50 ce             	lea    -0x32(%eax),%edx
 85c5023:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5026:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85c502a:	98                   	cwtl
 85c502b:	39 c2                	cmp    %eax,%edx
 85c502d:	7d 4c                	jge    85c507b <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x89>
 85c502f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5032:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 85c5036:	98                   	cwtl
 85c5037:	8d 50 32             	lea    0x32(%eax),%edx
 85c503a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c503d:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85c5041:	98                   	cwtl
 85c5042:	39 c2                	cmp    %eax,%edx
 85c5044:	7e 35                	jle    85c507b <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x89>
 85c5046:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5049:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 85c504d:	98                   	cwtl
 85c504e:	8d 50 b0             	lea    -0x50(%eax),%edx
 85c5051:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5054:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85c5058:	98                   	cwtl
 85c5059:	39 c2                	cmp    %eax,%edx
 85c505b:	7d 1e                	jge    85c507b <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x89>
 85c505d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5060:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 85c5064:	98                   	cwtl
 85c5065:	8d 50 50             	lea    0x50(%eax),%edx
 85c5068:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c506b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85c506f:	98                   	cwtl
 85c5070:	39 c2                	cmp    %eax,%edx
 85c5072:	7e 07                	jle    85c507b <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x89>
 85c5074:	b8 01 00 00 00       	mov    $0x1,%eax
 85c5079:	eb 05                	jmp    85c5080 <_ZN13private_store13CPrivateStore14IsLimitedSpaceERKNS_15PrivateStorePosE+0x8e>
 85c507b:	b8 00 00 00 00       	mov    $0x0,%eax
 85c5080:	5d                   	pop    %ebp
 85c5081:	c3                   	ret

```

```c
// private_store::CPrivateStore::IsLimitedSpace @ 0x85c4ff2

/* private_store::CPrivateStore::IsLimitedSpace(private_store::PrivateStorePos const&) */

undefined4 __thiscall
private_store::CPrivateStore::IsLimitedSpace(CPrivateStore *this,PrivateStorePos *param_1)

{
  undefined4 uVar1;
  
  if ((((this[0x24] == *(CPrivateStore *)param_1) && (this[0x25] == *(CPrivateStore *)(param_1 + 1))
       ) && (*(short *)(this + 0x28) + -0x32 < (int)*(short *)(param_1 + 4))) &&
     ((((int)*(short *)(param_1 + 4) < *(short *)(this + 0x28) + 0x32 &&
       (*(short *)(this + 0x26) + -0x50 < (int)*(short *)(param_1 + 2))) &&
      ((int)*(short *)(param_1 + 2) < *(short *)(this + 0x26) + 0x50)))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## IsPossibleDeal

```asm
// === 085c7c0a private_store::CPrivateStore::IsPossibleDeal  [0x085c7c0a-0x85c7d03] ===
 85c7c0a:	55                   	push   %ebp
 85c7c0b:	89 e5                	mov    %esp,%ebp
 85c7c0d:	56                   	push   %esi
 85c7c0e:	53                   	push   %ebx
 85c7c0f:	83 ec 20             	sub    $0x20,%esp
 85c7c12:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7c15:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7c18:	8b 55 0c             	mov    0xc(%ebp),%edx
 85c7c1b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7c1f:	89 04 24             	mov    %eax,(%esp)
 85c7c22:	e8 f5 32 0a 00       	call   866af1c <_ZN5CUser10CheckMoneyEi>
 85c7c27:	83 f0 01             	xor    $0x1,%eax
 85c7c2a:	84 c0                	test   %al,%al
 85c7c2c:	0f 84 86 00 00 00    	je     85c7cb8 <_ZN13private_store13CPrivateStore14IsPossibleDealEijj+0xae>
 85c7c32:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7c35:	83 c0 14             	add    $0x14,%eax
 85c7c38:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 85c7c3f:	00 
 85c7c40:	89 04 24             	mov    %eax,(%esp)
 85c7c43:	e8 34 d0 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7c48:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c7c4b:	89 04 24             	mov    %eax,(%esp)
 85c7c4e:	e8 1f 3d 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c7c53:	c7 44 24 0c 16 00 00 	movl   $0x16,0xc(%esp)
 85c7c5a:	00 
 85c7c5b:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 85c7c62:	00 
 85c7c63:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c7c6a:	00 
 85c7c6b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c7c6e:	89 04 24             	mov    %eax,(%esp)
 85c7c71:	e8 ba 4b 00 00       	call   85cc830 <_ZN13private_store17CPacketBufPrivate21MakeErrorReturnPacketEiii>
 85c7c76:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7c79:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7c7c:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85c7c7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7c83:	89 04 24             	mov    %eax,(%esp)
 85c7c86:	e8 2f 09 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c7c8b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7c90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c7c93:	89 04 24             	mov    %eax,(%esp)
 85c7c96:	e8 11 4e 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c7c9b:	eb 5d                	jmp    85c7cfa <_ZN13private_store13CPrivateStore14IsPossibleDealEijj+0xf0>
 85c7c9d:	89 d3                	mov    %edx,%ebx
 85c7c9f:	89 c6                	mov    %eax,%esi
 85c7ca1:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c7ca4:	89 04 24             	mov    %eax,(%esp)
 85c7ca7:	e8 00 4e 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c7cac:	89 f0                	mov    %esi,%eax
 85c7cae:	89 da                	mov    %ebx,%edx
 85c7cb0:	89 04 24             	mov    %eax,(%esp)
 85c7cb3:	e8 98 ba 51 00       	call   8ae3750 <_Unwind_Resume>
 85c7cb8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7cbb:	8b 40 30             	mov    0x30(%eax),%eax
 85c7cbe:	89 04 24             	mov    %eax,(%esp)
 85c7cc1:	e8 b8 25 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c7cc6:	89 04 24             	mov    %eax,(%esp)
 85c7cc9:	e8 08 cb b6 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 85c7cce:	3b 45 0c             	cmp    0xc(%ebp),%eax
 85c7cd1:	0f 9c c0             	setl   %al
 85c7cd4:	84 c0                	test   %al,%al
 85c7cd6:	74 1d                	je     85c7cf5 <_ZN13private_store13CPrivateStore14IsPossibleDealEijj+0xeb>
 85c7cd8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7cdb:	83 c0 14             	add    $0x14,%eax
 85c7cde:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 85c7ce5:	00 
 85c7ce6:	89 04 24             	mov    %eax,(%esp)
 85c7ce9:	e8 8e cf ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c7cee:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7cf3:	eb 05                	jmp    85c7cfa <_ZN13private_store13CPrivateStore14IsPossibleDealEijj+0xf0>
 85c7cf5:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c7cfa:	89 d8                	mov    %ebx,%eax
 85c7cfc:	83 c4 20             	add    $0x20,%esp
 85c7cff:	5b                   	pop    %ebx
 85c7d00:	5e                   	pop    %esi
 85c7d01:	5d                   	pop    %ebp
 85c7d02:	c3                   	ret
 85c7d03:	90                   	nop

```

```c
// private_store::CPrivateStore::IsPossibleDeal @ 0x85c7c0a

/* private_store::CPrivateStore::IsPossibleDeal(int, unsigned int, unsigned int) */

undefined4 private_store::CPrivateStore::IsPossibleDeal(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  CInventory *this;
  int iVar2;
  undefined4 uVar3;
  CPacketBufPrivate local_18 [12];
  
  cVar1 = CUser::CheckMoney(*(CUser **)(param_1 + 0x2c),param_2);
  if (cVar1 == '\x01') {
    this = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(param_1 + 0x30));
    iVar2 = CInventory::get_money(this);
    if (iVar2 < (int)param_2) {
      CErrorHandler::Do((CErrorHandler *)(param_1 + 0x14),10);
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    CErrorHandler::Do((CErrorHandler *)(param_1 + 0x14),0x16);
    CPacketBufPrivate::CPacketBufPrivate(local_18);
                    /* try { // try from 085c7c71 to 085c7c8a has its CatchHandler @ 085c7c9d */
    CPacketBufPrivate::MakeErrorReturnPacket(local_18,0,0x52,0x16);
    CUser::Send(*(CUser **)(param_1 + 0x2c),(PacketGuard *)local_18);
    uVar3 = 0;
    CPacketBufPrivate::~CPacketBufPrivate(local_18);
  }
  return uVar3;
}

```

---

## MoveItems

```asm
// === 085c7246 private_store::CPrivateStore::MoveItems  [0x085c7246-0x85c7519] ===
 85c7246:	55                   	push   %ebp
 85c7247:	89 e5                	mov    %esp,%ebp
 85c7249:	53                   	push   %ebx
 85c724a:	83 ec 34             	sub    $0x34,%esp
 85c724d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c7254:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c725b:	e9 68 01 00 00       	jmp    85c73c8 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x182>
 85c7260:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7263:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7266:	83 c2 3c             	add    $0x3c,%edx
 85c7269:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c726d:	89 14 24             	mov    %edx,(%esp)
 85c7270:	e8 91 5c 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c7275:	89 04 24             	mov    %eax,(%esp)
 85c7278:	e8 e5 43 00 00       	call   85cb662 <_ZN13private_store16PrivateStoreItem8GetStateEv>
 85c727d:	3c 01                	cmp    $0x1,%al
 85c727f:	0f 94 c0             	sete   %al
 85c7282:	84 c0                	test   %al,%al
 85c7284:	0f 84 3a 01 00 00    	je     85c73c4 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x17e>
 85c728a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c728d:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7290:	83 c2 3c             	add    $0x3c,%edx
 85c7293:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7297:	89 14 24             	mov    %edx,(%esp)
 85c729a:	e8 67 5c 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c729f:	8b 40 07             	mov    0x7(%eax),%eax
 85c72a2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c72a5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c72a8:	8b 55 08             	mov    0x8(%ebp),%edx
 85c72ab:	83 c2 3c             	add    $0x3c,%edx
 85c72ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c72b2:	89 14 24             	mov    %edx,(%esp)
 85c72b5:	e8 4c 5c 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c72ba:	8b 55 08             	mov    0x8(%ebp),%edx
 85c72bd:	8b 52 2c             	mov    0x2c(%edx),%edx
 85c72c0:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c72c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c72c8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c72cb:	89 04 24             	mov    %eax,(%esp)
 85c72ce:	e8 4f 2c 00 00       	call   85c9f22 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE>
 85c72d3:	84 c0                	test   %al,%al
 85c72d5:	0f 84 be 00 00 00    	je     85c7399 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x153>
 85c72db:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c72de:	8b 55 08             	mov    0x8(%ebp),%edx
 85c72e1:	83 c2 3c             	add    $0x3c,%edx
 85c72e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c72e8:	89 14 24             	mov    %edx,(%esp)
 85c72eb:	e8 16 5c 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c72f0:	c6 40 3d 02          	movb   $0x2,0x3d(%eax)
 85c72f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c72f7:	8b 55 08             	mov    0x8(%ebp),%edx
 85c72fa:	83 c2 3c             	add    $0x3c,%edx
 85c72fd:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7301:	89 14 24             	mov    %edx,(%esp)
 85c7304:	e8 fd 5b 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c7309:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c730d:	3c 08                	cmp    $0x8,%al
 85c730f:	0f 95 c0             	setne  %al
 85c7312:	84 c0                	test   %al,%al
 85c7314:	74 20                	je     85c7336 <_ZN13private_store13CPrivateStore9MoveItemsEv+0xf0>
 85c7316:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7319:	8b 55 08             	mov    0x8(%ebp),%edx
 85c731c:	83 c2 3c             	add    $0x3c,%edx
 85c731f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7323:	89 14 24             	mov    %edx,(%esp)
 85c7326:	e8 db 5b 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c732b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c732e:	89 50 07             	mov    %edx,0x7(%eax)
 85c7331:	e9 8e 00 00 00       	jmp    85c73c4 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x17e>
 85c7336:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7339:	8b 55 08             	mov    0x8(%ebp),%edx
 85c733c:	83 c2 3c             	add    $0x3c,%edx
 85c733f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7343:	89 14 24             	mov    %edx,(%esp)
 85c7346:	e8 bb 5b 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c734b:	8b 58 07             	mov    0x7(%eax),%ebx
 85c734e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7351:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7354:	89 04 24             	mov    %eax,(%esp)
 85c7357:	e8 22 2f b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c735c:	89 04 24             	mov    %eax,(%esp)
 85c735f:	e8 12 62 b1 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 85c7364:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c7368:	89 04 24             	mov    %eax,(%esp)
 85c736b:	e8 aa 24 d3 ff       	call   82f981a <_ZNK8WongWork14CAvatarItemMgr13GetExpireDateEi>
 85c7370:	85 c0                	test   %eax,%eax
 85c7372:	0f 95 c0             	setne  %al
 85c7375:	84 c0                	test   %al,%al
 85c7377:	74 4b                	je     85c73c4 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x17e>
 85c7379:	8b 45 08             	mov    0x8(%ebp),%eax
 85c737c:	83 c0 14             	add    $0x14,%eax
 85c737f:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c7386:	00 
 85c7387:	89 04 24             	mov    %eax,(%esp)
 85c738a:	e8 ed d8 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c738f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c7394:	e9 7a 01 00 00       	jmp    85c7513 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2cd>
 85c7399:	8b 45 08             	mov    0x8(%ebp),%eax
 85c739c:	89 04 24             	mov    %eax,(%esp)
 85c739f:	e8 ae db ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c73a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c73a7:	83 c0 14             	add    $0x14,%eax
 85c73aa:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c73b1:	00 
 85c73b2:	89 04 24             	mov    %eax,(%esp)
 85c73b5:	e8 c2 d8 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c73ba:	b8 00 00 00 00       	mov    $0x0,%eax
 85c73bf:	e9 4f 01 00 00       	jmp    85c7513 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2cd>
 85c73c4:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85c73c8:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
 85c73cc:	0f 9e c0             	setle  %al
 85c73cf:	84 c0                	test   %al,%al
 85c73d1:	0f 85 89 fe ff ff    	jne    85c7260 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x1a>
 85c73d7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c73da:	89 04 24             	mov    %eax,(%esp)
 85c73dd:	e8 0e 03 00 00       	call   85c76f0 <_ZN13private_store13CPrivateStore19CheckTotalItemPriceEv>
 85c73e2:	83 f0 01             	xor    $0x1,%eax
 85c73e5:	84 c0                	test   %al,%al
 85c73e7:	74 2b                	je     85c7414 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x1ce>
 85c73e9:	8b 45 08             	mov    0x8(%ebp),%eax
 85c73ec:	89 04 24             	mov    %eax,(%esp)
 85c73ef:	e8 5e db ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c73f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c73f7:	83 c0 14             	add    $0x14,%eax
 85c73fa:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c7401:	00 
 85c7402:	89 04 24             	mov    %eax,(%esp)
 85c7405:	e8 72 d8 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c740a:	b8 00 00 00 00       	mov    $0x0,%eax
 85c740f:	e9 ff 00 00 00       	jmp    85c7513 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2cd>
 85c7414:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c741b:	e9 df 00 00 00       	jmp    85c74ff <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2b9>
 85c7420:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7423:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7426:	83 c2 3c             	add    $0x3c,%edx
 85c7429:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c742d:	89 14 24             	mov    %edx,(%esp)
 85c7430:	e8 d1 5a 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c7435:	89 04 24             	mov    %eax,(%esp)
 85c7438:	e8 25 42 00 00       	call   85cb662 <_ZN13private_store16PrivateStoreItem8GetStateEv>
 85c743d:	3c 02                	cmp    $0x2,%al
 85c743f:	0f 94 c0             	sete   %al
 85c7442:	84 c0                	test   %al,%al
 85c7444:	0f 84 b1 00 00 00    	je     85c74fb <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2b5>
 85c744a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c744d:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7450:	83 c2 3c             	add    $0x3c,%edx
 85c7453:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7457:	89 14 24             	mov    %edx,(%esp)
 85c745a:	e8 a7 5a 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c745f:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7463:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7466:	89 04 24             	mov    %eax,(%esp)
 85c7469:	e8 46 f4 ff ff       	call   85c68b4 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE>
 85c746e:	84 c0                	test   %al,%al
 85c7470:	74 1b                	je     85c748d <_ZN13private_store13CPrivateStore9MoveItemsEv+0x247>
 85c7472:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7475:	8b 55 08             	mov    0x8(%ebp),%edx
 85c7478:	83 c2 3c             	add    $0x3c,%edx
 85c747b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c747f:	89 14 24             	mov    %edx,(%esp)
 85c7482:	e8 7f 5a 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c7487:	c6 40 3d 03          	movb   $0x3,0x3d(%eax)
 85c748b:	eb 6e                	jmp    85c74fb <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2b5>
 85c748d:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c7494:	00 
 85c7495:	c7 44 24 08 37 06 00 	movl   $0x637,0x8(%esp)
 85c749c:	00 
 85c749d:	c7 44 24 04 20 e7 cb 	movl   $0x8cbe720,0x4(%esp)
 85c74a4:	08 
 85c74a5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85c74a8:	89 04 24             	mov    %eax,(%esp)
 85c74ab:	e8 68 82 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c74b0:	c7 44 24 0c 37 06 00 	movl   $0x637,0xc(%esp)
 85c74b7:	00 
 85c74b8:	c7 44 24 08 20 e7 cb 	movl   $0x8cbe720,0x8(%esp)
 85c74bf:	08 
 85c74c0:	c7 44 24 04 dc d5 cb 	movl   $0x8cbd5dc,0x4(%esp)
 85c74c7:	08 
 85c74c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85c74cb:	89 04 24             	mov    %eax,(%esp)
 85c74ce:	e8 b5 82 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c74d3:	8b 45 08             	mov    0x8(%ebp),%eax
 85c74d6:	89 04 24             	mov    %eax,(%esp)
 85c74d9:	e8 74 da ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c74de:	8b 45 08             	mov    0x8(%ebp),%eax
 85c74e1:	83 c0 14             	add    $0x14,%eax
 85c74e4:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c74eb:	00 
 85c74ec:	89 04 24             	mov    %eax,(%esp)
 85c74ef:	e8 88 d7 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c74f4:	b8 00 00 00 00       	mov    $0x0,%eax
 85c74f9:	eb 18                	jmp    85c7513 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x2cd>
 85c74fb:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85c74ff:	83 7d f0 0d          	cmpl   $0xd,-0x10(%ebp)
 85c7503:	0f 9e c0             	setle  %al
 85c7506:	84 c0                	test   %al,%al
 85c7508:	0f 85 12 ff ff ff    	jne    85c7420 <_ZN13private_store13CPrivateStore9MoveItemsEv+0x1da>
 85c750e:	b8 01 00 00 00       	mov    $0x1,%eax
 85c7513:	83 c4 34             	add    $0x34,%esp
 85c7516:	5b                   	pop    %ebx
 85c7517:	5d                   	pop    %ebp
 85c7518:	c3                   	ret
 85c7519:	90                   	nop

```

```c
// private_store::CPrivateStore::MoveItems @ 0x85c7246

/* private_store::CPrivateStore::MoveItems() */

undefined4 __thiscall private_store::CPrivateStore::MoveItems(CPrivateStore *this)

{
  char cVar1;
  CInventory *this_00;
  CAvatarItemMgr *this_01;
  undefined4 uVar2;
  PrivateStoreItem *pPVar3;
  int iVar4;
  cMyTrace local_24 [16];
  uint local_14;
  undefined4 local_10;
  
  for (local_14 = 0; (int)local_14 < 0xe; local_14 = local_14 + 1) {
    pPVar3 = (PrivateStoreItem *)
             std::
             vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
             ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                           *)(this + 0x3c),local_14);
    cVar1 = PrivateStoreItem::GetState(pPVar3);
    if (cVar1 == '\x01') {
      iVar4 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_14);
      local_10 = *(undefined4 *)(iVar4 + 7);
      pPVar3 = (PrivateStoreItem *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_14);
      cVar1 = GetItemInfo(this,*(CUser **)(this + 0x2c),pPVar3);
      if (cVar1 == '\0') {
        ResetItems(this);
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
        return 0;
      }
      iVar4 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_14);
      *(undefined1 *)(iVar4 + 0x3d) = 2;
      iVar4 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_14);
      if (*(char *)(iVar4 + 1) == '\b') {
        iVar4 = std::
                vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              *)(this + 0x3c),local_14);
        iVar4 = *(int *)(iVar4 + 7);
        this_00 = (CInventory *)
                  CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        this_01 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(this_00);
        iVar4 = WongWork::CAvatarItemMgr::GetExpireDate(this_01,iVar4);
        if (iVar4 != 0) {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
          return 0;
        }
      }
      else {
        iVar4 = std::
                vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              *)(this + 0x3c),local_14);
        *(undefined4 *)(iVar4 + 7) = local_10;
      }
    }
  }
  cVar1 = CheckTotalItemPrice(this);
  if (cVar1 == '\x01') {
    for (local_14 = 0; (int)local_14 < 0xe; local_14 = local_14 + 1) {
      pPVar3 = (PrivateStoreItem *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_14);
      cVar1 = PrivateStoreItem::GetState(pPVar3);
      if (cVar1 == '\x02') {
        pPVar3 = (PrivateStoreItem *)
                 std::
                 vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                 ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                               *)(this + 0x3c),local_14);
        cVar1 = DeleteItem(this,pPVar3);
        if (cVar1 == '\0') {
          cMyTrace::cMyTrace(local_24,"bool private_store::CPrivateStore::MoveItems()",0x637,5);
          cMyTrace::operator()
                    (local_24,"CPrivateStore [%s][%d]",
                     "bool private_store::CPrivateStore::MoveItems()",0x637);
          ResetItems(this);
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
          return 0;
        }
        iVar4 = std::
                vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                              *)(this + 0x3c),local_14);
        *(undefined1 *)(iVar4 + 0x3d) = 3;
      }
    }
    uVar2 = 1;
  }
  else {
    ResetItems(this);
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## MoveToGate

```asm
// === 085c751a private_store::CPrivateStore::MoveToGate  [0x085c751a-0x85c76ef] ===
 85c751a:	55                   	push   %ebp
 85c751b:	89 e5                	mov    %esp,%ebp
 85c751d:	56                   	push   %esi
 85c751e:	53                   	push   %ebx
 85c751f:	83 ec 30             	sub    $0x30,%esp
 85c7522:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7525:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7528:	8b 55 08             	mov    0x8(%ebp),%edx
 85c752b:	83 c2 14             	add    $0x14,%edx
 85c752e:	c7 44 24 0c 59 00 00 	movl   $0x59,0xc(%esp)
 85c7535:	00 
 85c7536:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c753d:	00 
 85c753e:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7542:	89 14 24             	mov    %edx,(%esp)
 85c7545:	e8 5e 42 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c754a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c754d:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7550:	85 c0                	test   %eax,%eax
 85c7552:	75 0a                	jne    85c755e <_ZN13private_store13CPrivateStore10MoveToGateEv+0x44>
 85c7554:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7559:	e9 88 01 00 00       	jmp    85c76e6 <_ZN13private_store13CPrivateStore10MoveToGateEv+0x1cc>
 85c755e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7561:	8b 40 20             	mov    0x20(%eax),%eax
 85c7564:	85 c0                	test   %eax,%eax
 85c7566:	75 20                	jne    85c7588 <_ZN13private_store13CPrivateStore10MoveToGateEv+0x6e>
 85c7568:	8b 45 08             	mov    0x8(%ebp),%eax
 85c756b:	83 c0 14             	add    $0x14,%eax
 85c756e:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c7575:	00 
 85c7576:	89 04 24             	mov    %eax,(%esp)
 85c7579:	e8 fe d6 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c757e:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c7583:	e9 5e 01 00 00       	jmp    85c76e6 <_ZN13private_store13CPrivateStore10MoveToGateEv+0x1cc>
 85c7588:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c758b:	89 04 24             	mov    %eax,(%esp)
 85c758e:	e8 df 43 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c7593:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7596:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c759a:	84 c0                	test   %al,%al
 85c759c:	75 27                	jne    85c75c5 <_ZN13private_store13CPrivateStore10MoveToGateEv+0xab>
 85c759e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c75a1:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c75a5:	84 c0                	test   %al,%al
 85c75a7:	75 1c                	jne    85c75c5 <_ZN13private_store13CPrivateStore10MoveToGateEv+0xab>
 85c75a9:	8b 45 08             	mov    0x8(%ebp),%eax
 85c75ac:	0f b7 40 26          	movzwl 0x26(%eax),%eax
 85c75b0:	66 85 c0             	test   %ax,%ax
 85c75b3:	75 10                	jne    85c75c5 <_ZN13private_store13CPrivateStore10MoveToGateEv+0xab>
 85c75b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c75b8:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 85c75bc:	66 85 c0             	test   %ax,%ax
 85c75bf:	0f 84 d4 00 00 00    	je     85c7699 <_ZN13private_store13CPrivateStore10MoveToGateEv+0x17f>
 85c75c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c75c8:	89 04 24             	mov    %eax,(%esp)
 85c75cb:	e8 c4 42 00 00       	call   85cb894 <_ZN13private_store13CPrivateStore14GetSellerIndexEv>
 85c75d0:	0f b7 c0             	movzwl %ax,%eax
 85c75d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c75d7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c75da:	89 04 24             	mov    %eax,(%esp)
 85c75dd:	e8 4a 45 00 00       	call   85cbb2c <_ZN13private_store17CPacketBufPrivate32MakeNotipacketRemovePrivateStoreEt>
 85c75e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c75e5:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c75e9:	0f b6 d0             	movzbl %al,%edx
 85c75ec:	8b 45 08             	mov    0x8(%ebp),%eax
 85c75ef:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c75f3:	0f b6 c0             	movzbl %al,%eax
 85c75f6:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 85c75f9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c75fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7601:	89 04 24             	mov    %eax,(%esp)
 85c7604:	e8 6a 54 00 00       	call   85cca73 <_ZN13private_store17CBroadcastPrivate4SendEiiR11PacketGuard>
 85c7609:	8b 45 08             	mov    0x8(%ebp),%eax
 85c760c:	8d 58 4c             	lea    0x4c(%eax),%ebx
 85c760f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7612:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c7616:	0f b6 d0             	movzbl %al,%edx
 85c7619:	8b 45 08             	mov    0x8(%ebp),%eax
 85c761c:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c7620:	0f b6 c0             	movzbl %al,%eax
 85c7623:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c7627:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c762b:	8d 45 f6             	lea    -0xa(%ebp),%eax
 85c762e:	89 04 24             	mov    %eax,(%esp)
 85c7631:	e8 04 40 00 00       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 85c7636:	a1 74 f7 41 09       	mov    0x941f774,%eax
 85c763b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c763f:	0f b7 55 f6          	movzwl -0xa(%ebp),%edx
 85c7643:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 85c7648:	89 04 24             	mov    %eax,(%esp)
 85c764b:	e8 80 fa 0e 00       	call   86b70d0 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE>
 85c7650:	83 f0 01             	xor    $0x1,%eax
 85c7653:	84 c0                	test   %al,%al
 85c7655:	74 2c                	je     85c7683 <_ZN13private_store13CPrivateStore10MoveToGateEv+0x169>
 85c7657:	c7 44 24 10 1b d2 cb 	movl   $0x8cbd21b,0x10(%esp)
 85c765e:	08 
 85c765f:	c7 44 24 0c 58 06 00 	movl   $0x658,0xc(%esp)
 85c7666:	00 
 85c7667:	c7 44 24 08 60 e6 cb 	movl   $0x8cbe660,0x8(%esp)
 85c766e:	08 
 85c766f:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c7676:	08 
 85c7677:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c767e:	e8 87 c5 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c7683:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7686:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c7689:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c768d:	c7 04 24 e0 2d 47 09 	movl   $0x9472de0,(%esp)
 85c7694:	e8 39 53 00 00       	call   85cc9d2 <_ZN13private_store27CCharacterControllerPrivate23MoveCharacterStartPointEP5CUser>
 85c7699:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c769c:	89 04 24             	mov    %eax,(%esp)
 85c769f:	e8 38 51 00 00       	call   85cc7dc <_ZN13private_store17CPacketBufPrivate23MakeCmdpacketMoveToGateEv>
 85c76a4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c76a7:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c76aa:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85c76ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c76b1:	89 04 24             	mov    %eax,(%esp)
 85c76b4:	e8 01 0f 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c76b9:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c76be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c76c1:	89 04 24             	mov    %eax,(%esp)
 85c76c4:	e8 e3 53 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c76c9:	eb 1b                	jmp    85c76e6 <_ZN13private_store13CPrivateStore10MoveToGateEv+0x1cc>
 85c76cb:	89 d3                	mov    %edx,%ebx
 85c76cd:	89 c6                	mov    %eax,%esi
 85c76cf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c76d2:	89 04 24             	mov    %eax,(%esp)
 85c76d5:	e8 d2 53 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c76da:	89 f0                	mov    %esi,%eax
 85c76dc:	89 da                	mov    %ebx,%edx
 85c76de:	89 04 24             	mov    %eax,(%esp)
 85c76e1:	e8 6a c0 51 00       	call   8ae3750 <_Unwind_Resume>
 85c76e6:	89 d8                	mov    %ebx,%eax
 85c76e8:	83 c4 30             	add    $0x30,%esp
 85c76eb:	5b                   	pop    %ebx
 85c76ec:	5e                   	pop    %esi
 85c76ed:	5d                   	pop    %ebp
 85c76ee:	c3                   	ret
 85c76ef:	90                   	nop

```

```c
// private_store::CPrivateStore::MoveToGate @ 0x85c751a

/* private_store::CPrivateStore::MoveToGate() */

undefined4 __thiscall private_store::CPrivateStore::MoveToGate(CPrivateStore *this)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  CPacketBufPrivate local_1c [14];
  undefined2 local_e;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x59);
  if (*(int *)(this + 0x2c) == 0) {
    uVar4 = 0;
  }
  else if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    uVar4 = 0;
  }
  else {
    CPacketBufPrivate::CPacketBufPrivate(local_1c);
    if ((((this[0x24] != (CPrivateStore)0x0) || (this[0x25] != (CPrivateStore)0x0)) ||
        (*(short *)(this + 0x26) != 0)) || (*(short *)(this + 0x28) != 0)) {
      uVar2 = GetSellerIndex(this);
                    /* try { // try from 085c75dd to 085c76b8 has its CatchHandler @ 085c76cb */
      CPacketBufPrivate::MakeNotipacketRemovePrivateStore(local_1c,uVar2);
      CBroadcastPrivate::Send((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_1c)
      ;
      uVar3 = 0;
      village_object::Zone::Zone((Zone *)&local_e,(uchar)this[0x24],(uchar)this[0x25]);
      cVar1 = village_object::CVillageObjectMgr::unregister_object
                        (GlobalData::s_villageObjectMgr,CONCAT22(uVar3,local_e),this + 0x4c);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"PrivateStore.cpp","virtual bool private_store::CPrivateStore::MoveToGate()",
                   0x658,"unregister_object error");
      }
      CCharacterControllerPrivate::MoveCharacterStartPoint
                ((CCharacterControllerPrivate *)&g_CharacterController,*(CUser **)(this + 0x2c));
    }
    CPacketBufPrivate::MakeCmdpacketMoveToGate(local_1c);
    CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_1c);
    uVar4 = 1;
    CPacketBufPrivate::~CPacketBufPrivate(local_1c);
  }
  return uVar4;
}

```

---

## RecallPrivateStoreItem

```asm
// === 085c63ca private_store::CPrivateStore::RecallPrivateStoreItem  [0x085c63ca-0x85c68b3] ===
 85c63ca:	55                   	push   %ebp
 85c63cb:	89 e5                	mov    %esp,%ebp
 85c63cd:	56                   	push   %esi
 85c63ce:	53                   	push   %ebx
 85c63cf:	81 ec 40 01 00 00    	sub    $0x140,%esp
 85c63d5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85c63dc:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85c63e3:	e9 de 03 00 00       	jmp    85c67c6 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x3fc>
 85c63e8:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c63eb:	8b 55 08             	mov    0x8(%ebp),%edx
 85c63ee:	83 c2 3c             	add    $0x3c,%edx
 85c63f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c63f5:	89 14 24             	mov    %edx,(%esp)
 85c63f8:	e8 09 6b 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c63fd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c6400:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c6403:	89 04 24             	mov    %eax,(%esp)
 85c6406:	e8 57 52 00 00       	call   85cb662 <_ZN13private_store16PrivateStoreItem8GetStateEv>
 85c640b:	3c 03                	cmp    $0x3,%al
 85c640d:	0f 94 c0             	sete   %al
 85c6410:	84 c0                	test   %al,%al
 85c6412:	0f 84 aa 03 00 00    	je     85c67c2 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x3f8>
 85c6418:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 85c641f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c6422:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c6426:	3c 08                	cmp    $0x8,%al
 85c6428:	0f 85 90 01 00 00    	jne    85c65be <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x1f4>
 85c642e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c6431:	8b 10                	mov    (%eax),%edx
 85c6433:	89 95 56 ff ff ff    	mov    %edx,-0xaa(%ebp)
 85c6439:	8b 50 04             	mov    0x4(%eax),%edx
 85c643c:	89 95 5a ff ff ff    	mov    %edx,-0xa6(%ebp)
 85c6442:	8b 50 08             	mov    0x8(%eax),%edx
 85c6445:	89 95 5e ff ff ff    	mov    %edx,-0xa2(%ebp)
 85c644b:	8b 50 0c             	mov    0xc(%eax),%edx
 85c644e:	89 95 62 ff ff ff    	mov    %edx,-0x9e(%ebp)
 85c6454:	8b 50 10             	mov    0x10(%eax),%edx
 85c6457:	89 95 66 ff ff ff    	mov    %edx,-0x9a(%ebp)
 85c645d:	8b 50 14             	mov    0x14(%eax),%edx
 85c6460:	89 95 6a ff ff ff    	mov    %edx,-0x96(%ebp)
 85c6466:	8b 50 18             	mov    0x18(%eax),%edx
 85c6469:	89 95 6e ff ff ff    	mov    %edx,-0x92(%ebp)
 85c646f:	8b 50 1c             	mov    0x1c(%eax),%edx
 85c6472:	89 95 72 ff ff ff    	mov    %edx,-0x8e(%ebp)
 85c6478:	8b 50 20             	mov    0x20(%eax),%edx
 85c647b:	89 95 76 ff ff ff    	mov    %edx,-0x8a(%ebp)
 85c6481:	8b 50 24             	mov    0x24(%eax),%edx
 85c6484:	89 95 7a ff ff ff    	mov    %edx,-0x86(%ebp)
 85c648a:	8b 50 28             	mov    0x28(%eax),%edx
 85c648d:	89 95 7e ff ff ff    	mov    %edx,-0x82(%ebp)
 85c6493:	8b 50 2c             	mov    0x2c(%eax),%edx
 85c6496:	89 55 82             	mov    %edx,-0x7e(%ebp)
 85c6499:	8b 50 30             	mov    0x30(%eax),%edx
 85c649c:	89 55 86             	mov    %edx,-0x7a(%ebp)
 85c649f:	8b 50 34             	mov    0x34(%eax),%edx
 85c64a2:	89 55 8a             	mov    %edx,-0x76(%ebp)
 85c64a5:	8b 50 38             	mov    0x38(%eax),%edx
 85c64a8:	89 55 8e             	mov    %edx,-0x72(%ebp)
 85c64ab:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85c64af:	88 45 92             	mov    %al,-0x6e(%ebp)
 85c64b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c64b5:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c64b8:	89 04 24             	mov    %eax,(%esp)
 85c64bb:	e8 ce 3d b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c64c0:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 85c64c7:	00 
 85c64c8:	c7 44 24 44 0a 00 00 	movl   $0xa,0x44(%esp)
 85c64cf:	00 
 85c64d0:	8b 95 56 ff ff ff    	mov    -0xaa(%ebp),%edx
 85c64d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c64da:	8b 95 5a ff ff ff    	mov    -0xa6(%ebp),%edx
 85c64e0:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c64e4:	8b 95 5e ff ff ff    	mov    -0xa2(%ebp),%edx
 85c64ea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c64ee:	8b 95 62 ff ff ff    	mov    -0x9e(%ebp),%edx
 85c64f4:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c64f8:	8b 95 66 ff ff ff    	mov    -0x9a(%ebp),%edx
 85c64fe:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c6502:	8b 95 6a ff ff ff    	mov    -0x96(%ebp),%edx
 85c6508:	89 54 24 18          	mov    %edx,0x18(%esp)
 85c650c:	8b 95 6e ff ff ff    	mov    -0x92(%ebp),%edx
 85c6512:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85c6516:	8b 95 72 ff ff ff    	mov    -0x8e(%ebp),%edx
 85c651c:	89 54 24 20          	mov    %edx,0x20(%esp)
 85c6520:	8b 95 76 ff ff ff    	mov    -0x8a(%ebp),%edx
 85c6526:	89 54 24 24          	mov    %edx,0x24(%esp)
 85c652a:	8b 95 7a ff ff ff    	mov    -0x86(%ebp),%edx
 85c6530:	89 54 24 28          	mov    %edx,0x28(%esp)
 85c6534:	8b 95 7e ff ff ff    	mov    -0x82(%ebp),%edx
 85c653a:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 85c653e:	8b 55 82             	mov    -0x7e(%ebp),%edx
 85c6541:	89 54 24 30          	mov    %edx,0x30(%esp)
 85c6545:	8b 55 86             	mov    -0x7a(%ebp),%edx
 85c6548:	89 54 24 34          	mov    %edx,0x34(%esp)
 85c654c:	8b 55 8a             	mov    -0x76(%ebp),%edx
 85c654f:	89 54 24 38          	mov    %edx,0x38(%esp)
 85c6553:	8b 55 8e             	mov    -0x72(%ebp),%edx
 85c6556:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 85c655a:	0f b6 55 92          	movzbl -0x6e(%ebp),%edx
 85c655e:	88 54 24 40          	mov    %dl,0x40(%esp)
 85c6562:	89 04 24             	mov    %eax,(%esp)
 85c6565:	e8 12 d1 f3 ff       	call   850367c <_ZN10CInventory25insertAvatarIntoInventoryE10Inven_Item20eAvatarItemAddReasonb>
 85c656a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85c656d:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85c6571:	0f 88 60 02 00 00    	js     85c67d7 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x40d>
 85c6577:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c657a:	8d 70 0a             	lea    0xa(%eax),%esi
 85c657d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c6580:	8b 58 07             	mov    0x7(%eax),%ebx
 85c6583:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6586:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6589:	89 04 24             	mov    %eax,(%esp)
 85c658c:	e8 ed 3c b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c6591:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 85c6598:	00 
 85c6599:	89 74 24 10          	mov    %esi,0x10(%esp)
 85c659d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c65a4:	00 
 85c65a5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c65a9:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 85c65b0:	00 
 85c65b1:	89 04 24             	mov    %eax,(%esp)
 85c65b4:	e8 75 26 f4 ff       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 85c65b9:	e9 05 01 00 00       	jmp    85c66c3 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x2f9>
 85c65be:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c65c1:	8b 10                	mov    (%eax),%edx
 85c65c3:	89 55 93             	mov    %edx,-0x6d(%ebp)
 85c65c6:	8b 50 04             	mov    0x4(%eax),%edx
 85c65c9:	89 55 97             	mov    %edx,-0x69(%ebp)
 85c65cc:	8b 50 08             	mov    0x8(%eax),%edx
 85c65cf:	89 55 9b             	mov    %edx,-0x65(%ebp)
 85c65d2:	8b 50 0c             	mov    0xc(%eax),%edx
 85c65d5:	89 55 9f             	mov    %edx,-0x61(%ebp)
 85c65d8:	8b 50 10             	mov    0x10(%eax),%edx
 85c65db:	89 55 a3             	mov    %edx,-0x5d(%ebp)
 85c65de:	8b 50 14             	mov    0x14(%eax),%edx
 85c65e1:	89 55 a7             	mov    %edx,-0x59(%ebp)
 85c65e4:	8b 50 18             	mov    0x18(%eax),%edx
 85c65e7:	89 55 ab             	mov    %edx,-0x55(%ebp)
 85c65ea:	8b 50 1c             	mov    0x1c(%eax),%edx
 85c65ed:	89 55 af             	mov    %edx,-0x51(%ebp)
 85c65f0:	8b 50 20             	mov    0x20(%eax),%edx
 85c65f3:	89 55 b3             	mov    %edx,-0x4d(%ebp)
 85c65f6:	8b 50 24             	mov    0x24(%eax),%edx
 85c65f9:	89 55 b7             	mov    %edx,-0x49(%ebp)
 85c65fc:	8b 50 28             	mov    0x28(%eax),%edx
 85c65ff:	89 55 bb             	mov    %edx,-0x45(%ebp)
 85c6602:	8b 50 2c             	mov    0x2c(%eax),%edx
 85c6605:	89 55 bf             	mov    %edx,-0x41(%ebp)
 85c6608:	8b 50 30             	mov    0x30(%eax),%edx
 85c660b:	89 55 c3             	mov    %edx,-0x3d(%ebp)
 85c660e:	8b 50 34             	mov    0x34(%eax),%edx
 85c6611:	89 55 c7             	mov    %edx,-0x39(%ebp)
 85c6614:	8b 50 38             	mov    0x38(%eax),%edx
 85c6617:	89 55 cb             	mov    %edx,-0x35(%ebp)
 85c661a:	0f b6 40 3c          	movzbl 0x3c(%eax),%eax
 85c661e:	88 45 cf             	mov    %al,-0x31(%ebp)
 85c6621:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6624:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6627:	89 04 24             	mov    %eax,(%esp)
 85c662a:	e8 5f 3c b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c662f:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 85c6636:	00 
 85c6637:	c7 44 24 48 00 00 00 	movl   $0x0,0x48(%esp)
 85c663e:	00 
 85c663f:	c7 44 24 44 12 00 00 	movl   $0x12,0x44(%esp)
 85c6646:	00 
 85c6647:	8b 55 93             	mov    -0x6d(%ebp),%edx
 85c664a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c664e:	8b 55 97             	mov    -0x69(%ebp),%edx
 85c6651:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c6655:	8b 55 9b             	mov    -0x65(%ebp),%edx
 85c6658:	89 54 24 0c          	mov    %edx,0xc(%esp)
 85c665c:	8b 55 9f             	mov    -0x61(%ebp),%edx
 85c665f:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c6663:	8b 55 a3             	mov    -0x5d(%ebp),%edx
 85c6666:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c666a:	8b 55 a7             	mov    -0x59(%ebp),%edx
 85c666d:	89 54 24 18          	mov    %edx,0x18(%esp)
 85c6671:	8b 55 ab             	mov    -0x55(%ebp),%edx
 85c6674:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85c6678:	8b 55 af             	mov    -0x51(%ebp),%edx
 85c667b:	89 54 24 20          	mov    %edx,0x20(%esp)
 85c667f:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 85c6682:	89 54 24 24          	mov    %edx,0x24(%esp)
 85c6686:	8b 55 b7             	mov    -0x49(%ebp),%edx
 85c6689:	89 54 24 28          	mov    %edx,0x28(%esp)
 85c668d:	8b 55 bb             	mov    -0x45(%ebp),%edx
 85c6690:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 85c6694:	8b 55 bf             	mov    -0x41(%ebp),%edx
 85c6697:	89 54 24 30          	mov    %edx,0x30(%esp)
 85c669b:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 85c669e:	89 54 24 34          	mov    %edx,0x34(%esp)
 85c66a2:	8b 55 c7             	mov    -0x39(%ebp),%edx
 85c66a5:	89 54 24 38          	mov    %edx,0x38(%esp)
 85c66a9:	8b 55 cb             	mov    -0x35(%ebp),%edx
 85c66ac:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 85c66b0:	0f b6 55 cf          	movzbl -0x31(%ebp),%edx
 85c66b4:	88 54 24 40          	mov    %dl,0x40(%esp)
 85c66b8:	89 04 24             	mov    %eax,(%esp)
 85c66bb:	e8 c6 c6 f3 ff       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 85c66c0:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85c66c3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 85c66c7:	0f 88 0d 01 00 00    	js     85c67da <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x410>
 85c66cd:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 85c66d3:	89 04 24             	mov    %eax,(%esp)
 85c66d6:	e8 a1 de c6 ff       	call   823457c <_ZN13private_store16PrivateStoreItemC1Ev>
 85c66db:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c66de:	66 89 85 50 ff ff ff 	mov    %ax,-0xb0(%ebp)
 85c66e5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c66e8:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c66eb:	8d 95 08 ff ff ff    	lea    -0xf8(%ebp),%edx
 85c66f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c66f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c66f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85c66fc:	89 04 24             	mov    %eax,(%esp)
 85c66ff:	e8 1e 38 00 00       	call   85c9f22 <_ZN13private_store13CPrivateStore11GetItemInfoEP5CUserRNS_16PrivateStoreItemE>
 85c6704:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 85c670b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c6712:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c6715:	89 04 24             	mov    %eax,(%esp)
 85c6718:	e8 f5 a0 b8 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 85c671d:	84 c0                	test   %al,%al
 85c671f:	74 10                	je     85c6731 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x367>
 85c6721:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 85c6728:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 85c672f:	eb 1f                	jmp    85c6750 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x386>
 85c6731:	8d 85 08 ff ff ff    	lea    -0xf8(%ebp),%eax
 85c6737:	89 04 24             	mov    %eax,(%esp)
 85c673a:	e8 fb 10 b3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85c673f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85c6742:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c6745:	89 04 24             	mov    %eax,(%esp)
 85c6748:	e8 ed 10 b3 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 85c674d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85c6750:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6753:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6756:	89 04 24             	mov    %eax,(%esp)
 85c6759:	e8 ca a8 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c675e:	89 c3                	mov    %eax,%ebx
 85c6760:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6763:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6766:	89 04 24             	mov    %eax,(%esp)
 85c6769:	e8 ba a8 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c676e:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 85c6771:	8b 4d 08             	mov    0x8(%ebp),%ecx
 85c6774:	8b 49 2c             	mov    0x2c(%ecx),%ecx
 85c6777:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 85c677d:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 85c6781:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c6785:	c7 44 24 14 12 00 00 	movl   $0x12,0x14(%esp)
 85c678c:	00 
 85c678d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c6790:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c6794:	8b 45 ec             	mov    -0x14(%ebp),%eax
 85c6797:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c679b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c679f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c67a6:	00 
 85c67a7:	89 0c 24             	mov    %ecx,(%esp)
 85c67aa:	e8 8f db 0b 00       	call   868433e <_ZN15cUserHistoryLog19PrivateStoreItemAddE10INVEN_TYPERK10Inven_Itemii14eItemAddReasonPKcS6_>
 85c67af:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c67b2:	89 c2                	mov    %eax,%edx
 85c67b4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c67b7:	66 89 50 48          	mov    %dx,0x48(%eax)
 85c67bb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c67be:	c6 40 3d 04          	movb   $0x4,0x3d(%eax)
 85c67c2:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85c67c6:	83 7d e0 0d          	cmpl   $0xd,-0x20(%ebp)
 85c67ca:	0f 9e c0             	setle  %al
 85c67cd:	84 c0                	test   %al,%al
 85c67cf:	0f 85 13 fc ff ff    	jne    85c63e8 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x1e>
 85c67d5:	eb 04                	jmp    85c67db <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x411>
 85c67d7:	90                   	nop
 85c67d8:	eb 01                	jmp    85c67db <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x411>
 85c67da:	90                   	nop
 85c67db:	83 7d e0 0e          	cmpl   $0xe,-0x20(%ebp)
 85c67df:	0f 84 b5 00 00 00    	je     85c689a <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x4d0>
 85c67e5:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 85c67ec:	e9 93 00 00 00       	jmp    85c6884 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x4ba>
 85c67f1:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c67f4:	8b 55 08             	mov    0x8(%ebp),%edx
 85c67f7:	83 c2 3c             	add    $0x3c,%edx
 85c67fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c67fe:	89 14 24             	mov    %edx,(%esp)
 85c6801:	e8 00 67 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c6806:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c6809:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c680c:	89 04 24             	mov    %eax,(%esp)
 85c680f:	e8 4e 4e 00 00       	call   85cb662 <_ZN13private_store16PrivateStoreItem8GetStateEv>
 85c6814:	3c 04                	cmp    $0x4,%al
 85c6816:	0f 94 c0             	sete   %al
 85c6819:	84 c0                	test   %al,%al
 85c681b:	74 63                	je     85c6880 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x4b6>
 85c681d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c6820:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c6824:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6827:	89 04 24             	mov    %eax,(%esp)
 85c682a:	e8 85 00 00 00       	call   85c68b4 <_ZN13private_store13CPrivateStore10DeleteItemERNS_16PrivateStoreItemE>
 85c682f:	84 c0                	test   %al,%al
 85c6831:	74 46                	je     85c6879 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x4af>
 85c6833:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c683a:	00 
 85c683b:	c7 44 24 08 c9 04 00 	movl   $0x4c9,0x8(%esp)
 85c6842:	00 
 85c6843:	c7 44 24 04 20 e8 cb 	movl   $0x8cbe820,0x4(%esp)
 85c684a:	08 
 85c684b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85c684e:	89 04 24             	mov    %eax,(%esp)
 85c6851:	e8 c2 8e f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c6856:	c7 44 24 0c c9 04 00 	movl   $0x4c9,0xc(%esp)
 85c685d:	00 
 85c685e:	c7 44 24 08 20 e8 cb 	movl   $0x8cbe820,0x8(%esp)
 85c6865:	08 
 85c6866:	c7 44 24 04 50 d2 cb 	movl   $0x8cbd250,0x4(%esp)
 85c686d:	08 
 85c686e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85c6871:	89 04 24             	mov    %eax,(%esp)
 85c6874:	e8 0f 8f f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6879:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c687c:	c6 40 3d 03          	movb   $0x3,0x3d(%eax)
 85c6880:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 85c6884:	83 7d e0 0d          	cmpl   $0xd,-0x20(%ebp)
 85c6888:	0f 9e c0             	setle  %al
 85c688b:	84 c0                	test   %al,%al
 85c688d:	0f 85 5e ff ff ff    	jne    85c67f1 <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x427>
 85c6893:	b8 00 00 00 00       	mov    $0x0,%eax
 85c6898:	eb 10                	jmp    85c68aa <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv+0x4e0>
 85c689a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c689d:	89 04 24             	mov    %eax,(%esp)
 85c68a0:	e8 ad e6 ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c68a5:	b8 01 00 00 00       	mov    $0x1,%eax
 85c68aa:	81 c4 40 01 00 00    	add    $0x140,%esp
 85c68b0:	5b                   	pop    %ebx
 85c68b1:	5e                   	pop    %esi
 85c68b2:	5d                   	pop    %ebp
 85c68b3:	c3                   	ret

```

```c
// private_store::CPrivateStore::RecallPrivateStoreItem @ 0x85c63ca

/* private_store::CPrivateStore::RecallPrivateStoreItem() */

undefined4 __thiscall private_store::CPrivateStore::RecallPrivateStoreItem(CPrivateStore *this)

{
  int iVar1;
  int iVar2;
  char cVar3;
  CInventory *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  PrivateStoreItem local_fc [72];
  undefined2 local_b4;
  undefined4 local_ae;
  undefined4 local_aa;
  undefined4 local_a6;
  undefined4 local_a2;
  undefined4 local_9e;
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
  PrivateStoreItem local_72;
  undefined4 local_71;
  undefined4 local_6d;
  undefined4 local_69;
  undefined4 local_65;
  undefined4 local_61;
  undefined4 local_5d;
  undefined4 local_59;
  undefined4 local_55;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  PrivateStoreItem local_35;
  cMyTrace local_34 [16];
  uint local_24;
  PrivateStoreItem *local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  PrivateStoreItem *local_10;
  
  for (local_24 = 0; (int)local_24 < 0xe; local_24 = local_24 + 1) {
    local_20 = (PrivateStoreItem *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_24);
    cVar3 = PrivateStoreItem::GetState(local_20);
    if (cVar3 == '\x03') {
      local_1c = 0xffffffff;
      if (local_20[1] == (PrivateStoreItem)0x8) {
        local_ae = *(undefined4 *)local_20;
        local_aa = *(undefined4 *)(local_20 + 4);
        local_a6 = *(undefined4 *)(local_20 + 8);
        local_a2 = *(undefined4 *)(local_20 + 0xc);
        local_9e = *(undefined4 *)(local_20 + 0x10);
        local_9a = *(undefined4 *)(local_20 + 0x14);
        local_96 = *(undefined4 *)(local_20 + 0x18);
        local_92 = *(undefined4 *)(local_20 + 0x1c);
        local_8e = *(undefined4 *)(local_20 + 0x20);
        local_8a = *(undefined4 *)(local_20 + 0x24);
        local_86 = *(undefined4 *)(local_20 + 0x28);
        local_82 = *(undefined4 *)(local_20 + 0x2c);
        local_7e = *(undefined4 *)(local_20 + 0x30);
        local_7a = *(undefined4 *)(local_20 + 0x34);
        local_76 = *(undefined4 *)(local_20 + 0x38);
        local_72 = local_20[0x3c];
        uVar5 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
        local_1c = CInventory::insertAvatarIntoInventory
                             (uVar5,local_ae,local_aa,local_a6,local_a2,local_9e,local_9a,local_96,
                              local_92,local_8e,local_8a,local_86,local_82,local_7e,local_7a,
                              local_76,local_72,10,0);
        if (local_1c < 0) break;
        iVar1 = local_1c + 10;
        iVar2 = *(int *)(local_20 + 7);
        this_00 = (CInventory *)
                  CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        CInventory::SendAvatarEvent(this_00,0x36,iVar2,0,iVar1,0);
      }
      else {
        local_71 = *(undefined4 *)local_20;
        local_6d = *(undefined4 *)(local_20 + 4);
        local_69 = *(undefined4 *)(local_20 + 8);
        local_65 = *(undefined4 *)(local_20 + 0xc);
        local_61 = *(undefined4 *)(local_20 + 0x10);
        local_5d = *(undefined4 *)(local_20 + 0x14);
        local_59 = *(undefined4 *)(local_20 + 0x18);
        local_55 = *(undefined4 *)(local_20 + 0x1c);
        local_51 = *(undefined4 *)(local_20 + 0x20);
        local_4d = *(undefined4 *)(local_20 + 0x24);
        local_49 = *(undefined4 *)(local_20 + 0x28);
        local_45 = *(undefined4 *)(local_20 + 0x2c);
        local_41 = *(undefined4 *)(local_20 + 0x30);
        local_3d = *(undefined4 *)(local_20 + 0x34);
        local_39 = *(undefined4 *)(local_20 + 0x38);
        local_35 = local_20[0x3c];
        uVar5 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
        local_1c = CInventory::insertItemIntoInventory
                             (uVar5,local_71,local_6d,local_69,local_65,local_61,local_5d,local_59,
                              local_55,local_51,local_4d,local_49,local_45,local_41,local_3d,
                              local_39,local_35,0x12,0,1);
      }
      if (local_1c < 0) break;
      PrivateStoreItem::PrivateStoreItem(local_fc);
      local_b4 = (undefined2)local_1c;
      GetItemInfo(this,*(CUser **)(this + 0x2c),local_fc);
      local_18 = 0;
      local_14 = 0;
      cVar3 = Inven_Item::isEquipableItemType((Inven_Item *)local_20);
      if (cVar3 == '\0') {
        local_18 = Inven_Item::get_add_info((Inven_Item *)local_fc);
        local_14 = Inven_Item::get_add_info((Inven_Item *)local_20);
      }
      else {
        local_18 = 1;
        local_14 = 1;
      }
      uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
      uVar4 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
      cUserHistoryLog::PrivateStoreItemAdd
                ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),1,local_20,local_18,local_14,
                 0x12,uVar4,uVar5);
      *(short *)(local_20 + 0x48) = (short)local_1c;
      local_20[0x3d] = (PrivateStoreItem)0x4;
    }
  }
  if (local_24 == 0xe) {
    ResetItems(this);
    uVar5 = 1;
  }
  else {
    for (local_24 = 0; (int)local_24 < 0xe; local_24 = local_24 + 1) {
      local_10 = (PrivateStoreItem *)
                 std::
                 vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                 ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                               *)(this + 0x3c),local_24);
      cVar3 = PrivateStoreItem::GetState(local_10);
      if (cVar3 == '\x04') {
        cVar3 = DeleteItem(this,local_10);
        if (cVar3 != '\0') {
          cMyTrace::cMyTrace(local_34,"bool private_store::CPrivateStore::RecallPrivateStoreItem()",
                             0x4c9,5);
          cMyTrace::operator()
                    (local_34,"[%s][%d]",
                     "bool private_store::CPrivateStore::RecallPrivateStoreItem()",0x4c9);
        }
        local_10[0x3d] = (PrivateStoreItem)0x3;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## RecallPrivateStoreItemToMail

```asm
// === 085c5cec private_store::CPrivateStore::RecallPrivateStoreItemToMail  [0x085c5cec-0x85c5fcf] ===
 85c5cec:	55                   	push   %ebp
 85c5ced:	89 e5                	mov    %esp,%ebp
 85c5cef:	57                   	push   %edi
 85c5cf0:	56                   	push   %esi
 85c5cf1:	53                   	push   %ebx
 85c5cf2:	81 ec cc 04 00 00    	sub    $0x4cc,%esp
 85c5cf8:	8d 85 5d fb ff ff    	lea    -0x4a3(%ebp),%eax
 85c5cfe:	89 c3                	mov    %eax,%ebx
 85c5d00:	be 0d 00 00 00       	mov    $0xd,%esi
 85c5d05:	eb 0e                	jmp    85c5d15 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x29>
 85c5d07:	89 1c 24             	mov    %ebx,(%esp)
 85c5d0a:	e8 45 5b b0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85c5d0f:	83 c3 3d             	add    $0x3d,%ebx
 85c5d12:	83 ee 01             	sub    $0x1,%esi
 85c5d15:	83 fe ff             	cmp    $0xffffffff,%esi
 85c5d18:	0f 95 c0             	setne  %al
 85c5d1b:	84 c0                	test   %al,%al
 85c5d1d:	75 e8                	jne    85c5d07 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x1b>
 85c5d1f:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 85c5d26:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 85c5d2d:	eb 5f                	jmp    85c5d8e <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0xa2>
 85c5d2f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5d32:	8d 50 3c             	lea    0x3c(%eax),%edx
 85c5d35:	8b 45 dc             	mov    -0x24(%ebp),%eax
 85c5d38:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5d3c:	89 14 24             	mov    %edx,(%esp)
 85c5d3f:	e8 c2 71 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c5d44:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85c5d47:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c5d4a:	89 04 24             	mov    %eax,(%esp)
 85c5d4d:	e8 10 59 00 00       	call   85cb662 <_ZN13private_store16PrivateStoreItem8GetStateEv>
 85c5d52:	3c 03                	cmp    $0x3,%al
 85c5d54:	0f 94 c0             	sete   %al
 85c5d57:	84 c0                	test   %al,%al
 85c5d59:	74 2f                	je     85c5d8a <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x9e>
 85c5d5b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c5d5e:	8b 40 02             	mov    0x2(%eax),%eax
 85c5d61:	85 c0                	test   %eax,%eax
 85c5d63:	74 24                	je     85c5d89 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x9d>
 85c5d65:	8b 45 e0             	mov    -0x20(%ebp),%eax
 85c5d68:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85c5d6b:	8d 8d 5d fb ff ff    	lea    -0x4a3(%ebp),%ecx
 85c5d71:	6b d2 3d             	imul   $0x3d,%edx,%edx
 85c5d74:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 85c5d77:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 85c5d7b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5d7f:	89 14 24             	mov    %edx,(%esp)
 85c5d82:	e8 a7 48 b8 ff       	call   814a62e <_ZN10Inven_Item7setCopyERKS_>
 85c5d87:	eb 01                	jmp    85c5d8a <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x9e>
 85c5d89:	90                   	nop
 85c5d8a:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 85c5d8e:	83 7d dc 0d          	cmpl   $0xd,-0x24(%ebp)
 85c5d92:	0f 96 c0             	setbe  %al
 85c5d95:	84 c0                	test   %al,%al
 85c5d97:	75 96                	jne    85c5d2f <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x43>
 85c5d99:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 85c5d9d:	0f 8e 12 02 00 00    	jle    85c5fb5 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x2c9>
 85c5da3:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 85c5da6:	ba 15 00 00 00       	mov    $0x15,%edx
 85c5dab:	b9 00 00 00 00       	mov    $0x0,%ecx
 85c5db0:	89 c3                	mov    %eax,%ebx
 85c5db2:	83 e3 01             	and    $0x1,%ebx
 85c5db5:	85 db                	test   %ebx,%ebx
 85c5db7:	74 08                	je     85c5dc1 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0xd5>
 85c5db9:	88 08                	mov    %cl,(%eax)
 85c5dbb:	83 c0 01             	add    $0x1,%eax
 85c5dbe:	83 ea 01             	sub    $0x1,%edx
 85c5dc1:	89 c3                	mov    %eax,%ebx
 85c5dc3:	83 e3 02             	and    $0x2,%ebx
 85c5dc6:	85 db                	test   %ebx,%ebx
 85c5dc8:	74 09                	je     85c5dd3 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0xe7>
 85c5dca:	66 89 08             	mov    %cx,(%eax)
 85c5dcd:	83 c0 02             	add    $0x2,%eax
 85c5dd0:	83 ea 02             	sub    $0x2,%edx
 85c5dd3:	89 d6                	mov    %edx,%esi
 85c5dd5:	83 e6 fc             	and    $0xfffffffc,%esi
 85c5dd8:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c5ddd:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 85c5de0:	83 c3 04             	add    $0x4,%ebx
 85c5de3:	39 f3                	cmp    %esi,%ebx
 85c5de5:	72 f6                	jb     85c5ddd <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0xf1>
 85c5de7:	01 d8                	add    %ebx,%eax
 85c5de9:	89 d3                	mov    %edx,%ebx
 85c5deb:	83 e3 02             	and    $0x2,%ebx
 85c5dee:	85 db                	test   %ebx,%ebx
 85c5df0:	74 06                	je     85c5df8 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x10c>
 85c5df2:	66 89 08             	mov    %cx,(%eax)
 85c5df5:	83 c0 02             	add    $0x2,%eax
 85c5df8:	83 e2 01             	and    $0x1,%edx
 85c5dfb:	85 d2                	test   %edx,%edx
 85c5dfd:	74 05                	je     85c5e04 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x118>
 85c5dff:	88 08                	mov    %cl,(%eax)
 85c5e01:	83 c0 01             	add    $0x1,%eax
 85c5e04:	8d 95 b3 fe ff ff    	lea    -0x14d(%ebp),%edx
 85c5e0a:	bb 00 01 00 00       	mov    $0x100,%ebx
 85c5e0f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c5e14:	89 d1                	mov    %edx,%ecx
 85c5e16:	83 e1 01             	and    $0x1,%ecx
 85c5e19:	85 c9                	test   %ecx,%ecx
 85c5e1b:	74 08                	je     85c5e25 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x139>
 85c5e1d:	88 02                	mov    %al,(%edx)
 85c5e1f:	83 c2 01             	add    $0x1,%edx
 85c5e22:	83 eb 01             	sub    $0x1,%ebx
 85c5e25:	89 d1                	mov    %edx,%ecx
 85c5e27:	83 e1 02             	and    $0x2,%ecx
 85c5e2a:	85 c9                	test   %ecx,%ecx
 85c5e2c:	74 09                	je     85c5e37 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x14b>
 85c5e2e:	66 89 02             	mov    %ax,(%edx)
 85c5e31:	83 c2 02             	add    $0x2,%edx
 85c5e34:	83 eb 02             	sub    $0x2,%ebx
 85c5e37:	89 d9                	mov    %ebx,%ecx
 85c5e39:	c1 e9 02             	shr    $0x2,%ecx
 85c5e3c:	89 d7                	mov    %edx,%edi
 85c5e3e:	f3 ab                	rep stos %eax,%es:(%edi)
 85c5e40:	89 fa                	mov    %edi,%edx
 85c5e42:	89 d9                	mov    %ebx,%ecx
 85c5e44:	83 e1 02             	and    $0x2,%ecx
 85c5e47:	85 c9                	test   %ecx,%ecx
 85c5e49:	74 06                	je     85c5e51 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x165>
 85c5e4b:	66 89 02             	mov    %ax,(%edx)
 85c5e4e:	83 c2 02             	add    $0x2,%edx
 85c5e51:	89 d9                	mov    %ebx,%ecx
 85c5e53:	83 e1 01             	and    $0x1,%ecx
 85c5e56:	85 c9                	test   %ecx,%ecx
 85c5e58:	74 05                	je     85c5e5f <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x173>
 85c5e5a:	88 02                	mov    %al,(%edx)
 85c5e5c:	83 c2 01             	add    $0x1,%edx
 85c5e5f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c5e66:	00 
 85c5e67:	c7 44 24 08 88 d1 cb 	movl   $0x8cbd188,0x8(%esp)
 85c5e6e:	08 
 85c5e6f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c5e76:	00 
 85c5e77:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85c5e7e:	e8 7b f9 4d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85c5e83:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5e87:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 85c5e8a:	89 04 24             	mov    %eax,(%esp)
 85c5e8d:	e8 5e 80 ab ff       	call   807def0 <strcpy@plt>
 85c5e92:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c5e99:	00 
 85c5e9a:	c7 44 24 08 9c d1 cb 	movl   $0x8cbd19c,0x8(%esp)
 85c5ea1:	08 
 85c5ea2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c5ea9:	00 
 85c5eaa:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85c5eb1:	e8 48 f9 4d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85c5eb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5eba:	8d 85 b3 fe ff ff    	lea    -0x14d(%ebp),%eax
 85c5ec0:	89 04 24             	mov    %eax,(%esp)
 85c5ec3:	e8 28 80 ab ff       	call   807def0 <strcpy@plt>
 85c5ec8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5ecb:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5ece:	89 04 24             	mov    %eax,(%esp)
 85c5ed1:	e8 ba 5d b0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85c5ed6:	89 c3                	mov    %eax,%ebx
 85c5ed8:	8d 85 b3 fe ff ff    	lea    -0x14d(%ebp),%eax
 85c5ede:	89 04 24             	mov    %eax,(%esp)
 85c5ee1:	e8 ca 84 ab ff       	call   807e3b0 <strlen@plt>
 85c5ee6:	89 c6                	mov    %eax,%esi
 85c5ee8:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5eeb:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5eee:	89 04 24             	mov    %eax,(%esp)
 85c5ef1:	e8 58 5d b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c5ef6:	8b 55 d8             	mov    -0x28(%ebp),%edx
 85c5ef9:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 85c5f00:	00 
 85c5f01:	89 5c 24 20          	mov    %ebx,0x20(%esp)
 85c5f05:	c7 44 24 1c 00 00 00 	movl   $0x0,0x1c(%esp)
 85c5f0c:	00 
 85c5f0d:	89 74 24 18          	mov    %esi,0x18(%esp)
 85c5f11:	8d 8d b3 fe ff ff    	lea    -0x14d(%ebp),%ecx
 85c5f17:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 85c5f1b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c5f1f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c5f26:	00 
 85c5f27:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c5f2b:	8d 85 5d fb ff ff    	lea    -0x4a3(%ebp),%eax
 85c5f31:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5f35:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 85c5f38:	89 04 24             	mov    %eax,(%esp)
 85c5f3b:	e8 28 0c f9 ff       	call   8556b68 <_ZN8WongWork14CMailBoxHelper27ReqDBSendNewSystemMultiMailEPKcPK10Inven_ItemjjjS2_ij17ENUM_SERVER_GROUPb>
 85c5f40:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c5f43:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85c5f47:	74 6c                	je     85c5fb5 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x2c9>
 85c5f49:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5f4c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5f4f:	89 04 24             	mov    %eax,(%esp)
 85c5f52:	e8 f7 5c b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c5f57:	89 c6                	mov    %eax,%esi
 85c5f59:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5f5c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5f5f:	89 04 24             	mov    %eax,(%esp)
 85c5f62:	e8 07 44 b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c5f67:	89 c3                	mov    %eax,%ebx
 85c5f69:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85c5f70:	00 
 85c5f71:	c7 44 24 08 c1 03 00 	movl   $0x3c1,0x8(%esp)
 85c5f78:	00 
 85c5f79:	c7 44 24 04 c0 e8 cb 	movl   $0x8cbe8c0,0x4(%esp)
 85c5f80:	08 
 85c5f81:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85c5f84:	89 04 24             	mov    %eax,(%esp)
 85c5f87:	e8 8c 97 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c5f8c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85c5f8f:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c5f93:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85c5f97:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c5f9b:	c7 44 24 04 b0 d1 cb 	movl   $0x8cbd1b0,0x4(%esp)
 85c5fa2:	08 
 85c5fa3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85c5fa6:	89 04 24             	mov    %eax,(%esp)
 85c5fa9:	e8 da 97 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c5fae:	b8 01 00 00 00       	mov    $0x1,%eax
 85c5fb3:	eb 10                	jmp    85c5fc5 <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv+0x2d9>
 85c5fb5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5fb8:	89 04 24             	mov    %eax,(%esp)
 85c5fbb:	e8 92 ef ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c5fc0:	b8 01 00 00 00       	mov    $0x1,%eax
 85c5fc5:	81 c4 cc 04 00 00    	add    $0x4cc,%esp
 85c5fcb:	5b                   	pop    %ebx
 85c5fcc:	5e                   	pop    %esi
 85c5fcd:	5f                   	pop    %edi
 85c5fce:	5d                   	pop    %ebp
 85c5fcf:	c3                   	ret

```

```c
// private_store::CPrivateStore::RecallPrivateStoreItemToMail @ 0x85c5cec

/* private_store::CPrivateStore::RecallPrivateStoreItemToMail() */

undefined4 __thiscall
private_store::CPrivateStore::RecallPrivateStoreItemToMail(CPrivateStore *this)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  Inven_Item *this_00;
  uint uVar8;
  int iVar9;
  bool bVar10;
  byte bVar11;
  Inven_Item local_4a7 [854];
  char local_151;
  char local_150 [255];
  char local_51;
  char local_50 [20];
  cMyTrace local_3c [16];
  int local_2c;
  uint local_28;
  Inven_Item *local_24;
  int local_20;
  
  bVar11 = 0;
  this_00 = local_4a7;
  for (iVar9 = 0xd; iVar9 != -1; iVar9 = iVar9 + -1) {
    Inven_Item::Inven_Item(this_00);
    this_00 = this_00 + 0x3d;
  }
  local_2c = 0;
  for (local_28 = 0; local_28 < 0xe; local_28 = local_28 + 1) {
    local_24 = (Inven_Item *)
               std::
               vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
               ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                             *)(this + 0x3c),local_28);
    cVar2 = PrivateStoreItem::GetState((PrivateStoreItem *)local_24);
    if ((cVar2 == '\x03') && (*(int *)(local_24 + 2) != 0)) {
      iVar9 = local_2c * 0x3d;
      local_2c = local_2c + 1;
      Inven_Item::setCopy(local_4a7 + iVar9,local_24);
    }
  }
  if (0 < local_2c) {
    pcVar3 = &local_51;
    uVar7 = 0x15;
    bVar10 = ((uint)pcVar3 & 1) != 0;
    if (bVar10) {
      local_51 = '\0';
      pcVar3 = local_50;
      uVar7 = 0x14;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar7 = uVar7 - 2;
    }
    uVar8 = 0;
    do {
      pcVar1 = pcVar3 + uVar8;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar8 = uVar8 + 4;
    } while (uVar8 < (uVar7 & 0xfffffffc));
    pcVar3 = pcVar3 + uVar8;
    if ((uVar7 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (!bVar10) {
      *pcVar3 = '\0';
    }
    pcVar3 = &local_151;
    uVar7 = 0x100;
    bVar10 = ((uint)pcVar3 & 1) != 0;
    if (bVar10) {
      local_151 = '\0';
      pcVar3 = local_150;
      uVar7 = 0xff;
    }
    if (((uint)pcVar3 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
      uVar7 = uVar7 - 2;
    }
    for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      pcVar3 = pcVar3 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar7 & 2) != 0) {
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3 = pcVar3 + 2;
    }
    if (bVar10) {
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_183",(bool *)0x0);
    strcpy(&local_51,pcVar3);
    pcVar3 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_186",(bool *)0x0);
    strcpy(&local_151,pcVar3);
    uVar4 = CUser::GetServerGroup(*(CUser **)(this + 0x2c));
    sVar5 = strlen(&local_151);
    uVar6 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
    local_20 = WongWork::CMailBoxHelper::ReqDBSendNewSystemMultiMail
                         (&local_51,local_4a7,local_2c,0,uVar6,&local_151,sVar5,0,uVar4,0);
    if (local_20 != 0) {
      uVar4 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
      uVar6 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
      cMyTrace::cMyTrace(local_3c,
                         "bool private_store::CPrivateStore::RecallPrivateStoreItemToMail()",0x3c1,5
                        );
      cMyTrace::operator()
                (local_3c,
                 "CPrivateStore::RecallPrivateStoreItemToMail Error - Mail Send Fail User(%d), Charac_no(%d), item_count(%d)"
                 ,uVar6,uVar4,local_2c);
      return 1;
    }
  }
  ResetItems(this);
  return 1;
}

```

---

## RecreatePrivateStore

```asm
// === 085c5b60 private_store::CPrivateStore::RecreatePrivateStore  [0x085c5b60-0x85c5ceb] ===
 85c5b60:	55                   	push   %ebp
 85c5b61:	89 e5                	mov    %esp,%ebp
 85c5b63:	53                   	push   %ebx
 85c5b64:	81 ec c4 00 00 00    	sub    $0xc4,%esp
 85c5b6a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5b6d:	8b 40 20             	mov    0x20(%eax),%eax
 85c5b70:	85 c0                	test   %eax,%eax
 85c5b72:	75 0a                	jne    85c5b7e <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x1e>
 85c5b74:	b8 00 00 00 00       	mov    $0x0,%eax
 85c5b79:	e9 65 01 00 00       	jmp    85c5ce3 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x183>
 85c5b7e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5b81:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85c5b85:	84 c0                	test   %al,%al
 85c5b87:	74 0a                	je     85c5b93 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x33>
 85c5b89:	b8 00 00 00 00       	mov    $0x0,%eax
 85c5b8e:	e9 50 01 00 00       	jmp    85c5ce3 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x183>
 85c5b93:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5b96:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5b99:	85 c0                	test   %eax,%eax
 85c5b9b:	75 0a                	jne    85c5ba7 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x47>
 85c5b9d:	b8 00 00 00 00       	mov    $0x0,%eax
 85c5ba2:	e9 3c 01 00 00       	jmp    85c5ce3 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x183>
 85c5ba7:	b8 30 2e 47 09       	mov    $0x9472e30,%eax
 85c5bac:	0f b6 00             	movzbl (%eax),%eax
 85c5baf:	84 c0                	test   %al,%al
 85c5bb1:	75 2d                	jne    85c5be0 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x80>
 85c5bb3:	c7 04 24 30 2e 47 09 	movl   $0x9472e30,(%esp)
 85c5bba:	e8 71 f7 15 00       	call   8725330 <__cxa_guard_acquire>
 85c5bbf:	85 c0                	test   %eax,%eax
 85c5bc1:	0f 95 c0             	setne  %al
 85c5bc4:	84 c0                	test   %al,%al
 85c5bc6:	74 18                	je     85c5be0 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x80>
 85c5bc8:	c7 04 24 38 2e 47 09 	movl   $0x9472e38,(%esp)
 85c5bcf:	e8 bc b3 00 00       	call   85d0f90 <_ZN13private_store27CCharacterControllerPrivateC1Ev>
 85c5bd4:	c7 04 24 30 2e 47 09 	movl   $0x9472e30,(%esp)
 85c5bdb:	e8 70 f6 15 00       	call   8725250 <__cxa_guard_release>
 85c5be0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5be3:	8d 50 24             	lea    0x24(%eax),%edx
 85c5be6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5be9:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5bec:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c5bf0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5bf4:	c7 04 24 38 2e 47 09 	movl   $0x9472e38,(%esp)
 85c5bfb:	e8 94 6c 00 00       	call   85cc894 <_ZN13private_store27CCharacterControllerPrivate13GetStartPointEP5CUserRNS_15PrivateStorePosE>
 85c5c00:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5c03:	83 c0 34             	add    $0x34,%eax
 85c5c06:	89 04 24             	mov    %eax,(%esp)
 85c5c09:	e8 2a 75 00 00       	call   85cd138 <_ZNSt4listIP5CUserSaIS1_EE5clearEv>
 85c5c0e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5c11:	89 04 24             	mov    %eax,(%esp)
 85c5c14:	e8 39 f3 ff ff       	call   85c4f52 <_ZN13private_store13CPrivateStore10ResetItemsEv>
 85c5c19:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5c1c:	83 c0 08             	add    $0x8,%eax
 85c5c1f:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 85c5c26:	00 
 85c5c27:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5c2b:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5c2e:	89 04 24             	mov    %eax,(%esp)
 85c5c31:	e8 66 f3 ff ff       	call   85c4f9c <_ZN13private_store13CPrivateStore9CopyItemsEPNS_16PrivateStoreItemEi>
 85c5c36:	a1 48 be 40 09       	mov    0x940be48,%eax
 85c5c3b:	89 04 24             	mov    %eax,(%esp)
 85c5c3e:	e8 01 f3 c6 ff       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 85c5c43:	84 c0                	test   %al,%al
 85c5c45:	0f 84 8c 00 00 00    	je     85c5cd7 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x177>
 85c5c4b:	8d 85 4a ff ff ff    	lea    -0xb6(%ebp),%eax
 85c5c51:	89 04 24             	mov    %eax,(%esp)
 85c5c54:	e8 1b 57 00 00       	call   85cb374 <_ZN33PCK_AUCTION_OPEN_PRIVATE_STORE_GAC1Ev>
 85c5c59:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5c5c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5c5f:	89 04 24             	mov    %eax,(%esp)
 85c5c62:	e8 07 47 b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c5c67:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 85c5c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5c70:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5c73:	89 04 24             	mov    %eax,(%esp)
 85c5c76:	e8 6d a4 c6 ff       	call   82300e8 <_ZN5CUser16get_charac_countEv>
 85c5c7b:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 85c5c81:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85c5c88:	eb 26                	jmp    85c5cb0 <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x150>
 85c5c8a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85c5c8d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5c90:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5c93:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85c5c96:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5c9a:	89 04 24             	mov    %eax,(%esp)
 85c5c9d:	e8 fe 82 08 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85c5ca2:	8d 53 04             	lea    0x4(%ebx),%edx
 85c5ca5:	89 84 95 54 ff ff ff 	mov    %eax,-0xac(%ebp,%edx,4)
 85c5cac:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85c5cb0:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 85c5cb6:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85c5cb9:	0f 9f c0             	setg   %al
 85c5cbc:	84 c0                	test   %al,%al
 85c5cbe:	75 ca                	jne    85c5c8a <_ZN13private_store13CPrivateStore20RecreatePrivateStoreEPNS_17SIG_PRIVATE_STOREE+0x12a>
 85c5cc0:	a1 48 be 40 09       	mov    0x940be48,%eax
 85c5cc5:	8d 95 4a ff ff ff    	lea    -0xb6(%ebp),%edx
 85c5ccb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c5ccf:	89 04 24             	mov    %eax,(%esp)
 85c5cd2:	e8 45 1e d3 ff       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 85c5cd7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5cda:	c6 40 10 02          	movb   $0x2,0x10(%eax)
 85c5cde:	b8 01 00 00 00       	mov    $0x1,%eax
 85c5ce3:	81 c4 c4 00 00 00    	add    $0xc4,%esp
 85c5ce9:	5b                   	pop    %ebx
 85c5cea:	5d                   	pop    %ebp
 85c5ceb:	c3                   	ret

```

```c
// private_store::CPrivateStore::RecreatePrivateStore @ 0x85c5b60

/* private_store::CPrivateStore::RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*) */

undefined4 __thiscall
private_store::CPrivateStore::RecreatePrivateStore(CPrivateStore *this,SIG_PRIVATE_STORE *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  PCK_AUCTION_OPEN_PRIVATE_STORE_GA local_ba [10];
  int aiStack_b0 [40];
  int local_10;
  
  if (*(int *)(this + 0x20) == 0) {
    uVar2 = 0;
  }
  else if (this[0x10] == (CPrivateStore)0x0) {
    if (*(int *)(this + 0x2c) == 0) {
      uVar2 = 0;
    }
    else {
      if (RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::characterControllerPrivate ==
          '\0') {
        iVar3 = __cxa_guard_acquire(&RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                                     characterControllerPrivate);
        if (iVar3 != 0) {
          CCharacterControllerPrivate::CCharacterControllerPrivate
                    ((CCharacterControllerPrivate *)
                     &RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                      characterControllerPrivate);
          __cxa_guard_release(&RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                               characterControllerPrivate);
        }
      }
      CCharacterControllerPrivate::GetStartPoint
                ((CCharacterControllerPrivate *)
                 &RecreatePrivateStore(private_store::SIG_PRIVATE_STORE*)::
                  characterControllerPrivate,*(CUser **)(this + 0x2c),
                 (PrivateStorePos *)(this + 0x24));
      std::list<CUser*,std::allocator<CUser*>>::clear
                ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
      ResetItems(this);
      CopyItems(this,(PrivateStoreItem *)(param_1 + 8),0xe);
      cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
      if (cVar1 != '\0') {
        PCK_AUCTION_OPEN_PRIVATE_STORE_GA::PCK_AUCTION_OPEN_PRIVATE_STORE_GA(local_ba);
        aiStack_b0[2] = CUser::get_acc_id(*(CUser **)(this + 0x2c));
        aiStack_b0[3] = CUser::get_charac_count(*(CUser **)(this + 0x2c));
        for (local_10 = 0; iVar3 = local_10, local_10 < aiStack_b0[3]; local_10 = local_10 + 1) {
          iVar4 = CUser::get_charac_no(*(CUser **)(this + 0x2c),local_10);
          aiStack_b0[iVar3 + 4] = iVar4;
        }
        CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_ba);
      }
      this[0x10] = (CPrivateStore)0x2;
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

## RemovePrivateStore

```asm
// === 085c5fd0 private_store::CPrivateStore::RemovePrivateStore  [0x085c5fd0-0x85c63c9] ===
 85c5fd0:	55                   	push   %ebp
 85c5fd1:	89 e5                	mov    %esp,%ebp
 85c5fd3:	56                   	push   %esi
 85c5fd4:	53                   	push   %ebx
 85c5fd5:	83 ec 70             	sub    $0x70,%esp
 85c5fd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c5fdb:	88 45 b4             	mov    %al,-0x4c(%ebp)
 85c5fde:	8b 45 08             	mov    0x8(%ebp),%eax
 85c5fe1:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c5fe4:	8b 55 08             	mov    0x8(%ebp),%edx
 85c5fe7:	83 c2 14             	add    $0x14,%edx
 85c5fea:	c7 44 24 0c 59 00 00 	movl   $0x59,0xc(%esp)
 85c5ff1:	00 
 85c5ff2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c5ff9:	00 
 85c5ffa:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c5ffe:	89 14 24             	mov    %edx,(%esp)
 85c6001:	e8 a2 57 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c6006:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6009:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c600c:	85 c0                	test   %eax,%eax
 85c600e:	75 0a                	jne    85c601a <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x4a>
 85c6010:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c6015:	e9 a7 03 00 00       	jmp    85c63c1 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x3f1>
 85c601a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c601d:	8b 40 20             	mov    0x20(%eax),%eax
 85c6020:	85 c0                	test   %eax,%eax
 85c6022:	75 20                	jne    85c6044 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x74>
 85c6024:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6027:	83 c0 14             	add    $0x14,%eax
 85c602a:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c6031:	00 
 85c6032:	89 04 24             	mov    %eax,(%esp)
 85c6035:	e8 42 ec ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c603a:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c603f:	e9 7d 03 00 00       	jmp    85c63c1 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x3f1>
 85c6044:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6047:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85c604b:	84 c0                	test   %al,%al
 85c604d:	75 20                	jne    85c606f <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x9f>
 85c604f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6052:	83 c0 14             	add    $0x14,%eax
 85c6055:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 85c605c:	00 
 85c605d:	89 04 24             	mov    %eax,(%esp)
 85c6060:	e8 17 ec ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c6065:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c606a:	e9 52 03 00 00       	jmp    85c63c1 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x3f1>
 85c606f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c6072:	89 04 24             	mov    %eax,(%esp)
 85c6075:	e8 f8 58 00 00       	call   85cb972 <_ZN13private_store17CPacketBufPrivateC1Ev>
 85c607a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c607d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 85c6081:	3c 02                	cmp    $0x2,%al
 85c6083:	0f 85 3c 01 00 00    	jne    85c61c5 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x1f5>
 85c6089:	8b 45 08             	mov    0x8(%ebp),%eax
 85c608c:	89 04 24             	mov    %eax,(%esp)
 85c608f:	e8 50 e5 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c6094:	84 c0                	test   %al,%al
 85c6096:	74 23                	je     85c60bb <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0xeb>
 85c6098:	8b 45 08             	mov    0x8(%ebp),%eax
 85c609b:	89 04 24             	mov    %eax,(%esp)
 85c609e:	e8 49 fc ff ff       	call   85c5cec <_ZN13private_store13CPrivateStore28RecallPrivateStoreItemToMailEv>
 85c60a3:	84 c0                	test   %al,%al
 85c60a5:	0f 84 d6 00 00 00    	je     85c6181 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x1b1>
 85c60ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85c60ae:	89 04 24             	mov    %eax,(%esp)
 85c60b1:	e8 60 40 00 00       	call   85ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>
 85c60b6:	e9 c6 00 00 00       	jmp    85c6181 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x1b1>
 85c60bb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c60be:	89 04 24             	mov    %eax,(%esp)
 85c60c1:	e8 04 03 00 00       	call   85c63ca <_ZN13private_store13CPrivateStore22RecallPrivateStoreItemEv>
 85c60c6:	84 c0                	test   %al,%al
 85c60c8:	74 73                	je     85c613d <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x16d>
 85c60ca:	8b 45 08             	mov    0x8(%ebp),%eax
 85c60cd:	89 04 24             	mov    %eax,(%esp)
 85c60d0:	e8 41 40 00 00       	call   85ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>
 85c60d5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c60d8:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c60db:	89 04 24             	mov    %eax,(%esp)
 85c60de:	e8 8d d1 08 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 85c60e3:	8b 45 08             	mov    0x8(%ebp),%eax
 85c60e6:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c60e9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85c60f0:	00 
 85c60f1:	89 04 24             	mov    %eax,(%esp)
 85c60f4:	e8 73 7a 09 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 85c60f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85c60fc:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c60ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c6106:	00 
 85c6107:	89 04 24             	mov    %eax,(%esp)
 85c610a:	e8 5d 7a 09 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 85c610f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6112:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6115:	89 04 24             	mov    %eax,(%esp)
 85c6118:	e8 61 41 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c611d:	89 04 24             	mov    %eax,(%esp)
 85c6120:	e8 69 4e f3 ff       	call   84faf8e <_ZNK10CInventory21SendItemLockListInvenEv>
 85c6125:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6128:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c612b:	89 04 24             	mov    %eax,(%esp)
 85c612e:	e8 4b 41 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c6133:	89 04 24             	mov    %eax,(%esp)
 85c6136:	e8 83 4e f3 ff       	call   84fafbe <_ZNK10CInventory22SendItemLockListAvatarEv>
 85c613b:	eb 44                	jmp    85c6181 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x1b1>
 85c613d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6140:	89 04 24             	mov    %eax,(%esp)
 85c6143:	e8 ce 3f 00 00       	call   85ca116 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv>
 85c6148:	8b 45 08             	mov    0x8(%ebp),%eax
 85c614b:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c614e:	89 04 24             	mov    %eax,(%esp)
 85c6151:	e8 1a d1 08 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 85c6156:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6159:	83 c0 14             	add    $0x14,%eax
 85c615c:	c7 44 24 04 16 00 00 	movl   $0x16,0x4(%esp)
 85c6163:	00 
 85c6164:	89 04 24             	mov    %eax,(%esp)
 85c6167:	e8 10 eb ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c616c:	0f b6 45 b4          	movzbl -0x4c(%ebp),%eax
 85c6170:	83 f0 01             	xor    $0x1,%eax
 85c6173:	84 c0                	test   %al,%al
 85c6175:	74 0a                	je     85c6181 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x1b1>
 85c6177:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c617c:	e9 35 02 00 00       	jmp    85c63b6 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x3e6>
 85c6181:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6184:	83 c0 34             	add    $0x34,%eax
 85c6187:	89 04 24             	mov    %eax,(%esp)
 85c618a:	e8 57 70 00 00       	call   85cd1e6 <_ZNKSt4listIP5CUserSaIS1_EE4sizeEv>
 85c618f:	85 c0                	test   %eax,%eax
 85c6191:	0f 95 c0             	setne  %al
 85c6194:	84 c0                	test   %al,%al
 85c6196:	74 2d                	je     85c61c5 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x1f5>
 85c6198:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c619b:	89 04 24             	mov    %eax,(%esp)
 85c619e:	e8 e5 59 00 00       	call   85cbb88 <_ZN13private_store17CPacketBufPrivate37MakeNotipacketForceRemovePrivateStoreEv>
 85c61a3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c61aa:	00 
 85c61ab:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85c61b2:	00 
 85c61b3:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c61b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c61ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85c61bd:	89 04 24             	mov    %eax,(%esp)
 85c61c0:	e8 17 19 00 00       	call   85c7adc <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_>
 85c61c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c61c8:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c61cb:	89 04 24             	mov    %eax,(%esp)
 85c61ce:	e8 55 ae b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c61d3:	8b 55 08             	mov    0x8(%ebp),%edx
 85c61d6:	0f b6 52 25          	movzbl 0x25(%edx),%edx
 85c61da:	0f b6 ca             	movzbl %dl,%ecx
 85c61dd:	8b 55 08             	mov    0x8(%ebp),%edx
 85c61e0:	0f b6 52 24          	movzbl 0x24(%edx),%edx
 85c61e4:	0f b6 d2             	movzbl %dl,%edx
 85c61e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 85c61ea:	8b 5b 2c             	mov    0x2c(%ebx),%ebx
 85c61ed:	81 c3 00 97 07 00    	add    $0x79700,%ebx
 85c61f3:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c61f7:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c61fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c61ff:	89 1c 24             	mov    %ebx,(%esp)
 85c6202:	e8 7f e3 0b 00       	call   8684586 <_ZN15cUserHistoryLog18RemovePrivateStoreEiiPKc>
 85c6207:	a1 48 be 40 09       	mov    0x940be48,%eax
 85c620c:	89 04 24             	mov    %eax,(%esp)
 85c620f:	e8 30 ed c6 ff       	call   8234f44 <_ZN19CAuctionServerProxy9IsRunningEv>
 85c6214:	84 c0                	test   %al,%al
 85c6216:	74 30                	je     85c6248 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x278>
 85c6218:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 85c621b:	89 04 24             	mov    %eax,(%esp)
 85c621e:	e8 b9 51 00 00       	call   85cb3dc <_ZN34PCK_AUCTION_CLOSE_PRIVATE_STORE_GAC1Ev>
 85c6223:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6226:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6229:	89 04 24             	mov    %eax,(%esp)
 85c622c:	e8 3d 41 b1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 85c6231:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 85c6234:	a1 48 be 40 09       	mov    0x940be48,%eax
 85c6239:	8d 55 c2             	lea    -0x3e(%ebp),%edx
 85c623c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c6240:	89 04 24             	mov    %eax,(%esp)
 85c6243:	e8 d4 18 d3 ff       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 85c6248:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c624b:	89 04 24             	mov    %eax,(%esp)
 85c624e:	e8 85 58 00 00       	call   85cbad8 <_ZN13private_store17CPacketBufPrivate31MakeCmdpacketRemovePrivateStoreEv>
 85c6253:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6256:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6259:	8d 55 d8             	lea    -0x28(%ebp),%edx
 85c625c:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c6260:	89 04 24             	mov    %eax,(%esp)
 85c6263:	e8 52 23 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c6268:	8b 45 08             	mov    0x8(%ebp),%eax
 85c626b:	89 04 24             	mov    %eax,(%esp)
 85c626e:	e8 21 56 00 00       	call   85cb894 <_ZN13private_store13CPrivateStore14GetSellerIndexEv>
 85c6273:	0f b7 c0             	movzwl %ax,%eax
 85c6276:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c627a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c627d:	89 04 24             	mov    %eax,(%esp)
 85c6280:	e8 a7 58 00 00       	call   85cbb2c <_ZN13private_store17CPacketBufPrivate32MakeNotipacketRemovePrivateStoreEt>
 85c6285:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6288:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c628c:	0f b6 d0             	movzbl %al,%edx
 85c628f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6292:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c6296:	0f b6 c0             	movzbl %al,%eax
 85c6299:	8d 4d d8             	lea    -0x28(%ebp),%ecx
 85c629c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c62a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c62a4:	89 04 24             	mov    %eax,(%esp)
 85c62a7:	e8 c7 67 00 00       	call   85cca73 <_ZN13private_store17CBroadcastPrivate4SendEiiR11PacketGuard>
 85c62ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85c62af:	8d 58 4c             	lea    0x4c(%eax),%ebx
 85c62b2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c62b5:	0f b6 40 25          	movzbl 0x25(%eax),%eax
 85c62b9:	0f b6 d0             	movzbl %al,%edx
 85c62bc:	8b 45 08             	mov    0x8(%ebp),%eax
 85c62bf:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 85c62c3:	0f b6 c0             	movzbl %al,%eax
 85c62c6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c62ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c62ce:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 85c62d1:	89 04 24             	mov    %eax,(%esp)
 85c62d4:	e8 61 53 00 00       	call   85cb63a <_ZN14village_object4ZoneC1Ehh>
 85c62d9:	a1 74 f7 41 09       	mov    0x941f774,%eax
 85c62de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c62e2:	0f b7 55 e6          	movzwl -0x1a(%ebp),%edx
 85c62e6:	66 89 54 24 04       	mov    %dx,0x4(%esp)
 85c62eb:	89 04 24             	mov    %eax,(%esp)
 85c62ee:	e8 dd 0d 0f 00       	call   86b70d0 <_ZN14village_object17CVillageObjectMgr17unregister_objectENS_4ZoneEPNS_7IObjectE>
 85c62f3:	83 f0 01             	xor    $0x1,%eax
 85c62f6:	84 c0                	test   %al,%al
 85c62f8:	74 2c                	je     85c6326 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x356>
 85c62fa:	c7 44 24 10 1b d2 cb 	movl   $0x8cbd21b,0x10(%esp)
 85c6301:	08 
 85c6302:	c7 44 24 0c 73 04 00 	movl   $0x473,0xc(%esp)
 85c6309:	00 
 85c630a:	c7 44 24 08 60 e8 cb 	movl   $0x8cbe860,0x8(%esp)
 85c6311:	08 
 85c6312:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85c6319:	08 
 85c631a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 85c6321:	e8 e4 d8 50 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 85c6326:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6329:	8b 50 2c             	mov    0x2c(%eax),%edx
 85c632c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c632f:	8b 40 20             	mov    0x20(%eax),%eax
 85c6332:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c6336:	89 04 24             	mov    %eax,(%esp)
 85c6339:	e8 36 45 00 00       	call   85ca874 <_ZN13private_store16CPrivateStoreMgr15FreeStoreSellerEP5CUser>
 85c633e:	8b 45 08             	mov    0x8(%ebp),%eax
 85c6341:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c6344:	89 04 24             	mov    %eax,(%esp)
 85c6347:	e8 30 40 b1 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85c634c:	0f b7 d8             	movzwl %ax,%ebx
 85c634f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c6356:	00 
 85c6357:	c7 44 24 08 78 04 00 	movl   $0x478,0x8(%esp)
 85c635e:	00 
 85c635f:	c7 44 24 04 60 e8 cb 	movl   $0x8cbe860,0x4(%esp)
 85c6366:	08 
 85c6367:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c636a:	89 04 24             	mov    %eax,(%esp)
 85c636d:	e8 a6 93 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85c6372:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85c6376:	c7 44 24 04 33 d2 cb 	movl   $0x8cbd233,0x4(%esp)
 85c637d:	08 
 85c637e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c6381:	89 04 24             	mov    %eax,(%esp)
 85c6384:	e8 ff 93 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85c6389:	8b 45 08             	mov    0x8(%ebp),%eax
 85c638c:	89 04 24             	mov    %eax,(%esp)
 85c638f:	e8 dc ea ff ff       	call   85c4e70 <_ZN13private_store13CPrivateStore5ClearEv>
 85c6394:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c6399:	eb 1b                	jmp    85c63b6 <_ZN13private_store13CPrivateStore18RemovePrivateStoreEb+0x3e6>
 85c639b:	89 d3                	mov    %edx,%ebx
 85c639d:	89 c6                	mov    %eax,%esi
 85c639f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c63a2:	89 04 24             	mov    %eax,(%esp)
 85c63a5:	e8 02 67 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c63aa:	89 f0                	mov    %esi,%eax
 85c63ac:	89 da                	mov    %ebx,%edx
 85c63ae:	89 04 24             	mov    %eax,(%esp)
 85c63b1:	e8 9a d3 51 00       	call   8ae3750 <_Unwind_Resume>
 85c63b6:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c63b9:	89 04 24             	mov    %eax,(%esp)
 85c63bc:	e8 eb 66 00 00       	call   85ccaac <_ZN13private_store17CPacketBufPrivateD1Ev>
 85c63c1:	89 d8                	mov    %ebx,%eax
 85c63c3:	83 c4 70             	add    $0x70,%esp
 85c63c6:	5b                   	pop    %ebx
 85c63c7:	5e                   	pop    %esi
 85c63c8:	5d                   	pop    %ebp
 85c63c9:	c3                   	ret

```

```c
// private_store::CPrivateStore::RemovePrivateStore @ 0x85c5fd0

/* private_store::CPrivateStore::RemovePrivateStore(bool) */

undefined4 __thiscall
private_store::CPrivateStore::RemovePrivateStore(CPrivateStore *this,bool param_1)

{
  char cVar1;
  ushort uVar2;
  CInventory *pCVar3;
  int iVar4;
  undefined2 uVar6;
  uint uVar5;
  undefined4 uVar7;
  PCK_AUCTION_CLOSE_PRIVATE_STORE_GA local_42 [18];
  undefined4 local_30;
  CPacketBufPrivate local_2c [14];
  undefined2 local_1e;
  cMyTrace local_1c [16];
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x2c),1,0x59);
  if (*(int *)(this + 0x2c) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    return 0;
  }
  if (this[0x10] == (CPrivateStore)0x0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3b);
    return 0;
  }
  CPacketBufPrivate::CPacketBufPrivate(local_2c);
  if (this[0x10] == (CPrivateStore)0x2) {
    cVar1 = isDollCreated(this);
    if (cVar1 == '\0') {
      cVar1 = RecallPrivateStoreItem(this);
      if (cVar1 == '\0') {
        SavePrivateStore(this);
        CUser::UpdateData(*(CUser **)(this + 0x2c));
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x16);
        if (!param_1) {
          uVar7 = 0;
          goto LAB_085c63b6;
        }
      }
      else {
        SavePrivateStore(this);
        CUser::UpdateData(*(CUser **)(this + 0x2c));
        CUser::send_itemspace(*(CUser **)(this + 0x2c),0);
        CUser::send_itemspace(*(CUser **)(this + 0x2c),1);
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        CInventory::SendItemLockListInven(pCVar3);
        pCVar3 = (CInventory *)
                 CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
        CInventory::SendItemLockListAvatar(pCVar3);
      }
    }
    else {
                    /* try { // try from 085c609e to 085c6393 has its CatchHandler @ 085c639b */
      cVar1 = RecallPrivateStoreItemToMail(this);
      if (cVar1 != '\0') {
        SavePrivateStore(this);
      }
    }
    iVar4 = std::list<CUser*,std::allocator<CUser*>>::size();
    if (iVar4 != 0) {
      CPacketBufPrivate::MakeNotipacketForceRemovePrivateStore(local_2c);
      SendUsers(this,(PacketGuard *)local_2c,(CUser *)0x0,(CUser *)0x0);
    }
  }
  CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cUserHistoryLog::RemovePrivateStore
            (*(int *)(this + 0x2c) + 0x79700,(uint)(byte)this[0x24],(char *)(uint)(byte)this[0x25]);
  cVar1 = CAuctionServerProxy::IsRunning(GlobalData::s_auction_proxy);
  if (cVar1 != '\0') {
    PCK_AUCTION_CLOSE_PRIVATE_STORE_GA::PCK_AUCTION_CLOSE_PRIVATE_STORE_GA(local_42);
    local_30 = CUser::get_acc_id(*(CUser **)(this + 0x2c));
    CAuctionServerProxy::SendPacket(GlobalData::s_auction_proxy,(PACKET_HEADER *)local_42);
  }
  CPacketBufPrivate::MakeCmdpacketRemovePrivateStore(local_2c);
  CUser::Send(*(CUser **)(this + 0x2c),(PacketGuard *)local_2c);
  uVar2 = GetSellerIndex(this);
  CPacketBufPrivate::MakeNotipacketRemovePrivateStore(local_2c,uVar2);
  CBroadcastPrivate::Send((uint)(byte)this[0x24],(uint)(byte)this[0x25],(PacketGuard *)local_2c);
  uVar6 = 0;
  village_object::Zone::Zone((Zone *)&local_1e,(uchar)this[0x24],(uchar)this[0x25]);
  cVar1 = village_object::CVillageObjectMgr::unregister_object
                    (GlobalData::s_villageObjectMgr,CONCAT22(uVar6,local_1e),this + 0x4c);
  if (cVar1 != '\x01') {
    LogManager::logFormat
              (1,"PrivateStore.cpp",
               "virtual bool private_store::CPrivateStore::RemovePrivateStore(bool)",0x473,
               "unregister_object error");
  }
  CPrivateStoreMgr::FreeStoreSeller(*(CUser **)(this + 0x20));
  uVar5 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
  cMyTrace::cMyTrace(local_1c,"virtual bool private_store::CPrivateStore::RemovePrivateStore(bool)",
                     0x478,0);
  cMyTrace::operator()(local_1c,"RemovePrivateStore() uid:%d\n",uVar5 & 0xffff);
  Clear(this);
  uVar7 = 1;
LAB_085c63b6:
  CPacketBufPrivate::~CPacketBufPrivate(local_2c);
  return uVar7;
}

```

---

## ResetItems

```asm
// === 085c4f52 private_store::CPrivateStore::ResetItems  [0x085c4f52-0x85c4f9b] ===
 85c4f52:	55                   	push   %ebp
 85c4f53:	89 e5                	mov    %esp,%ebp
 85c4f55:	83 ec 28             	sub    $0x28,%esp
 85c4f58:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85c4f5f:	eb 21                	jmp    85c4f82 <_ZN13private_store13CPrivateStore10ResetItemsEv+0x30>
 85c4f61:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c4f64:	8b 55 08             	mov    0x8(%ebp),%edx
 85c4f67:	83 c2 3c             	add    $0x3c,%edx
 85c4f6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c4f6e:	89 14 24             	mov    %edx,(%esp)
 85c4f71:	e8 90 7f 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c4f76:	89 04 24             	mov    %eax,(%esp)
 85c4f79:	e8 1c f6 c6 ff       	call   823459a <_ZN13private_store16PrivateStoreItem5ResetEv>
 85c4f7e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85c4f82:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4f85:	83 c0 3c             	add    $0x3c,%eax
 85c4f88:	89 04 24             	mov    %eax,(%esp)
 85c4f8b:	e8 c6 81 00 00       	call   85cd156 <_ZNKSt6vectorIN13private_store16PrivateStoreItemESaIS1_EE4sizeEv>
 85c4f90:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85c4f93:	0f 9f c0             	setg   %al
 85c4f96:	84 c0                	test   %al,%al
 85c4f98:	75 c7                	jne    85c4f61 <_ZN13private_store13CPrivateStore10ResetItemsEv+0xf>
 85c4f9a:	c9                   	leave
 85c4f9b:	c3                   	ret

```

```c
// private_store::CPrivateStore::ResetItems @ 0x85c4f52

/* private_store::CPrivateStore::ResetItems() */

void __thiscall private_store::CPrivateStore::ResetItems(CPrivateStore *this)

{
  PrivateStoreItem *this_00;
  int iVar1;
  uint local_10;
  
  local_10 = 0;
  while( true ) {
    iVar1 = std::
            vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
            ::size((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                    *)(this + 0x3c));
    if (iVar1 <= (int)local_10) break;
    this_00 = (PrivateStoreItem *)
              std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),local_10);
    PrivateStoreItem::Reset(this_00);
    local_10 = local_10 + 1;
  }
  return;
}

```

---

## SavePrivateStore

```asm
// === 085ca116 private_store::CPrivateStore::SavePrivateStore  [0x085ca116-0x85ca2d9] ===
 85ca116:	55                   	push   %ebp
 85ca117:	89 e5                	mov    %esp,%ebp
 85ca119:	56                   	push   %esi
 85ca11a:	53                   	push   %ebx
 85ca11b:	83 ec 30             	sub    $0x30,%esp
 85ca11e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 85ca123:	c7 44 24 08 c6 0b 00 	movl   $0xbc6,0x8(%esp)
 85ca12a:	00 
 85ca12b:	c7 44 24 04 5a d1 cb 	movl   $0x8cbd15a,0x4(%esp)
 85ca132:	08 
 85ca133:	89 04 24             	mov    %eax,(%esp)
 85ca136:	e8 4b 59 cc ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 85ca13b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85ca142:	00 
 85ca143:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca147:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ca14a:	89 04 24             	mov    %eax,(%esp)
 85ca14d:	e8 d4 ea af ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 85ca152:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ca155:	89 04 24             	mov    %eax,(%esp)
 85ca158:	e8 e9 ea af ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ca15d:	c7 44 24 04 77 00 00 	movl   $0x77,0x4(%esp)
 85ca164:	00 
 85ca165:	89 04 24             	mov    %eax,(%esp)
 85ca168:	e8 e9 ea af ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ca16d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca170:	8b 40 2c             	mov    0x2c(%eax),%eax
 85ca173:	89 04 24             	mov    %eax,(%esp)
 85ca176:	e8 1b eb af ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 85ca17b:	89 c3                	mov    %eax,%ebx
 85ca17d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ca180:	89 04 24             	mov    %eax,(%esp)
 85ca183:	e8 be ea af ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 85ca188:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85ca18c:	89 04 24             	mov    %eax,(%esp)
 85ca18f:	e8 c2 ea af ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 85ca194:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ca197:	89 04 24             	mov    %eax,(%esp)
 85ca19a:	e8 af ea af ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 85ca19f:	89 04 24             	mov    %eax,(%esp)
 85ca1a2:	e8 f5 71 e8 ff       	call   845139c <_ZN12CStreamGuard11GetInBufferIN13private_store17SIG_PRIVATE_STOREEEEPT_v>
 85ca1a7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85ca1aa:	c7 44 24 08 34 04 00 	movl   $0x434,0x8(%esp)
 85ca1b1:	00 
 85ca1b2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85ca1b9:	00 
 85ca1ba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca1bd:	89 04 24             	mov    %eax,(%esp)
 85ca1c0:	e8 fb 3a ab ff       	call   807dcc0 <memset@plt>
 85ca1c5:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca1c8:	8b 40 2c             	mov    0x2c(%eax),%eax
 85ca1cb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 85ca1d2:	ff 
 85ca1d3:	89 04 24             	mov    %eax,(%esp)
 85ca1d6:	e8 c5 3d 08 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 85ca1db:	8b 55 f4             	mov    -0xc(%ebp),%edx
 85ca1de:	89 02                	mov    %eax,(%edx)
 85ca1e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca1e3:	8d 58 08             	lea    0x8(%eax),%ebx
 85ca1e6:	c7 45 e8 0e 00 00 00 	movl   $0xe,-0x18(%ebp)
 85ca1ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca1f0:	8d 50 3c             	lea    0x3c(%eax),%edx
 85ca1f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85ca1f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca1fa:	89 04 24             	mov    %eax,(%esp)
 85ca1fd:	e8 76 2f 00 00       	call   85cd178 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EE5beginEv>
 85ca202:	83 ec 04             	sub    $0x4,%esp
 85ca205:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85ca208:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85ca20b:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ca20f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85ca212:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca216:	89 04 24             	mov    %eax,(%esp)
 85ca219:	e8 54 31 00 00       	call   85cd372 <_ZNK9__gnu_cxx17__normal_iteratorIPN13private_store16PrivateStoreItemESt6vectorIS2_SaIS2_EEEplERKi>
 85ca21e:	83 ec 04             	sub    $0x4,%esp
 85ca221:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca224:	8d 50 3c             	lea    0x3c(%eax),%edx
 85ca227:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85ca22a:	89 54 24 04          	mov    %edx,0x4(%esp)
 85ca22e:	89 04 24             	mov    %eax,(%esp)
 85ca231:	e8 42 2f 00 00       	call   85cd178 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EE5beginEv>
 85ca236:	83 ec 04             	sub    $0x4,%esp
 85ca239:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85ca23d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85ca240:	89 44 24 04          	mov    %eax,0x4(%esp)
 85ca244:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85ca247:	89 04 24             	mov    %eax,(%esp)
 85ca24a:	e8 59 31 00 00       	call   85cd3a8 <_ZSt4copyIN9__gnu_cxx17__normal_iteratorIPN13private_store16PrivateStoreItemESt6vectorIS3_SaIS3_EEEES4_ET0_T_SA_S9_>
 85ca24f:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca252:	89 04 24             	mov    %eax,(%esp)
 85ca255:	e8 8a a3 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85ca25a:	84 c0                	test   %al,%al
 85ca25c:	74 0f                	je     85ca26d <_ZN13private_store13CPrivateStore16SavePrivateStoreEv+0x157>
 85ca25e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca261:	c7 80 30 04 00 00 01 	movl   $0x1,0x430(%eax)
 85ca268:	00 00 00 
 85ca26b:	eb 1f                	jmp    85ca28c <_ZN13private_store13CPrivateStore16SavePrivateStoreEv+0x176>
 85ca26d:	8b 45 08             	mov    0x8(%ebp),%eax
 85ca270:	89 04 24             	mov    %eax,(%esp)
 85ca273:	e8 6c a3 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85ca278:	83 f0 01             	xor    $0x1,%eax
 85ca27b:	84 c0                	test   %al,%al
 85ca27d:	74 0d                	je     85ca28c <_ZN13private_store13CPrivateStore16SavePrivateStoreEv+0x176>
 85ca27f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85ca282:	c7 80 30 04 00 00 00 	movl   $0x0,0x430(%eax)
 85ca289:	00 00 00 
 85ca28c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 85ca291:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85ca294:	89 54 24 08          	mov    %edx,0x8(%esp)
 85ca298:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 85ca29f:	00 
 85ca2a0:	89 04 24             	mov    %eax,(%esp)
 85ca2a3:	e8 36 6d fa ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 85ca2a8:	eb 1b                	jmp    85ca2c5 <_ZN13private_store13CPrivateStore16SavePrivateStoreEv+0x1af>
 85ca2aa:	89 d3                	mov    %edx,%ebx
 85ca2ac:	89 c6                	mov    %eax,%esi
 85ca2ae:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ca2b1:	89 04 24             	mov    %eax,(%esp)
 85ca2b4:	e8 19 26 05 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85ca2b9:	89 f0                	mov    %esi,%eax
 85ca2bb:	89 da                	mov    %ebx,%edx
 85ca2bd:	89 04 24             	mov    %eax,(%esp)
 85ca2c0:	e8 8b 94 51 00       	call   8ae3750 <_Unwind_Resume>
 85ca2c5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85ca2c8:	89 04 24             	mov    %eax,(%esp)
 85ca2cb:	e8 02 26 05 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 85ca2d0:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85ca2d3:	83 c4 00             	add    $0x0,%esp
 85ca2d6:	5b                   	pop    %ebx
 85ca2d7:	5e                   	pop    %esi
 85ca2d8:	5d                   	pop    %ebp
 85ca2d9:	c3                   	ret

```

```c
// private_store::CPrivateStore::SavePrivateStore @ 0x85ca116

/* private_store::CPrivateStore::SavePrivateStore() */

void __thiscall private_store::CPrivateStore::SavePrivateStore(CPrivateStore *this)

{
  SIG_PRIVATE_STORE *pSVar1;
  char cVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CStreamGuard local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  SIG_PRIVATE_STORE *local_10;
  
  pSVar3 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PrivateStore.cpp",0xbc6);
  CStreamGuard::CStreamGuard(local_28,pSVar3,true);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
                    /* try { // try from 085ca168 to 085ca2a7 has its CatchHandler @ 085ca2aa */
  CStreamGuard::operator<<(pCVar4,0x77);
  iVar5 = CUser::GetUID(*(CUser **)(this + 0x2c));
  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_28);
  CStreamGuard::operator<<(pCVar4,iVar5);
  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_28);
  local_10 = CStreamGuard::GetInBuffer<private_store::SIG_PRIVATE_STORE>(pCVar4);
  memset(local_10,0,0x434);
  uVar6 = CUser::get_charac_no(*(CUser **)(this + 0x2c),-1);
  *(undefined4 *)local_10 = uVar6;
  pSVar1 = local_10 + 8;
  local_1c = 0xe;
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  begin();
  __gnu_cxx::
  __normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>
  ::operator+((__normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>
               *)&local_20,&local_18);
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  begin();
  std::
  copy<__gnu_cxx::__normal_iterator<private_store::PrivateStoreItem*,std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>>,private_store::PrivateStoreItem*>
            (local_14,local_20,pSVar1);
  cVar2 = isDollCreated(this);
  if (cVar2 == '\0') {
    cVar2 = isDollCreated(this);
    if (cVar2 != '\x01') {
      *(undefined4 *)(local_10 + 0x430) = 0;
    }
  }
  else {
    *(undefined4 *)(local_10 + 0x430) = 1;
  }
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_28);
  CStreamGuard::~CStreamGuard(local_28);
  return;
}

```

---

## SellItem

```asm
// === 085c97e2 private_store::CPrivateStore::SellItem  [0x085c97e2-0x85c9b8b] ===
 85c97e2:	55                   	push   %ebp
 85c97e3:	89 e5                	mov    %esp,%ebp
 85c97e5:	57                   	push   %edi
 85c97e6:	56                   	push   %esi
 85c97e7:	53                   	push   %ebx
 85c97e8:	81 ec 9c 01 00 00    	sub    $0x19c,%esp
 85c97ee:	8b 45 18             	mov    0x18(%ebp),%eax
 85c97f1:	8b 55 14             	mov    0x14(%ebp),%edx
 85c97f4:	89 d1                	mov    %edx,%ecx
 85c97f6:	29 c1                	sub    %eax,%ecx
 85c97f8:	89 c8                	mov    %ecx,%eax
 85c97fa:	89 45 e0             	mov    %eax,-0x20(%ebp)
 85c97fd:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9800:	89 04 24             	mov    %eax,(%esp)
 85c9803:	e8 0a 70 b8 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 85c9808:	84 c0                	test   %al,%al
 85c980a:	74 10                	je     85c981c <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x3a>
 85c980c:	c7 45 20 00 00 00 00 	movl   $0x0,0x20(%ebp)
 85c9813:	c7 45 1c 01 00 00 00 	movl   $0x1,0x1c(%ebp)
 85c981a:	eb 06                	jmp    85c9822 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x40>
 85c981c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85c981f:	29 45 20             	sub    %eax,0x20(%ebp)
 85c9822:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9825:	8b 40 30             	mov    0x30(%eax),%eax
 85c9828:	89 04 24             	mov    %eax,(%esp)
 85c982b:	e8 f8 77 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c9830:	89 c3                	mov    %eax,%ebx
 85c9832:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9835:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9838:	89 04 24             	mov    %eax,(%esp)
 85c983b:	e8 e8 77 b3 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 85c9840:	8b 55 08             	mov    0x8(%ebp),%edx
 85c9843:	8b 52 2c             	mov    0x2c(%edx),%edx
 85c9846:	81 c2 00 97 07 00    	add    $0x79700,%edx
 85c984c:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 85c9850:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c9854:	c7 44 24 14 16 00 00 	movl   $0x16,0x14(%esp)
 85c985b:	00 
 85c985c:	8b 45 20             	mov    0x20(%ebp),%eax
 85c985f:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c9863:	8b 45 1c             	mov    0x1c(%ebp),%eax
 85c9866:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c986a:	8b 45 10             	mov    0x10(%ebp),%eax
 85c986d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c9871:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c9878:	00 
 85c9879:	89 14 24             	mov    %edx,(%esp)
 85c987c:	e8 a9 a8 0b 00       	call   868412a <_ZN15cUserHistoryLog19PrivateStoreItemDelE10INVEN_TYPERK10Inven_Itemii14eItemDelReasonPKcS6_>
 85c9881:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9884:	89 04 24             	mov    %eax,(%esp)
 85c9887:	e8 58 ad c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85c988c:	84 c0                	test   %al,%al
 85c988e:	0f 84 89 02 00 00    	je     85c9b1d <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x33b>
 85c9894:	8d 95 8e fe ff ff    	lea    -0x172(%ebp),%edx
 85c989a:	bb 00 01 00 00       	mov    $0x100,%ebx
 85c989f:	b8 00 00 00 00       	mov    $0x0,%eax
 85c98a4:	89 d1                	mov    %edx,%ecx
 85c98a6:	83 e1 02             	and    $0x2,%ecx
 85c98a9:	85 c9                	test   %ecx,%ecx
 85c98ab:	74 09                	je     85c98b6 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0xd4>
 85c98ad:	66 89 02             	mov    %ax,(%edx)
 85c98b0:	83 c2 02             	add    $0x2,%edx
 85c98b3:	83 eb 02             	sub    $0x2,%ebx
 85c98b6:	89 d9                	mov    %ebx,%ecx
 85c98b8:	c1 e9 02             	shr    $0x2,%ecx
 85c98bb:	89 d7                	mov    %edx,%edi
 85c98bd:	f3 ab                	rep stos %eax,%es:(%edi)
 85c98bf:	89 fa                	mov    %edi,%edx
 85c98c1:	89 d9                	mov    %ebx,%ecx
 85c98c3:	83 e1 02             	and    $0x2,%ecx
 85c98c6:	85 c9                	test   %ecx,%ecx
 85c98c8:	74 06                	je     85c98d0 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0xee>
 85c98ca:	66 89 02             	mov    %ax,(%edx)
 85c98cd:	83 c2 02             	add    $0x2,%edx
 85c98d0:	89 d9                	mov    %ebx,%ecx
 85c98d2:	83 e1 01             	and    $0x1,%ecx
 85c98d5:	85 c9                	test   %ecx,%ecx
 85c98d7:	74 05                	je     85c98de <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0xfc>
 85c98d9:	88 02                	mov    %al,(%edx)
 85c98db:	83 c2 01             	add    $0x1,%edx
 85c98de:	8d 45 cb             	lea    -0x35(%ebp),%eax
 85c98e1:	ba 15 00 00 00       	mov    $0x15,%edx
 85c98e6:	b9 00 00 00 00       	mov    $0x0,%ecx
 85c98eb:	89 c3                	mov    %eax,%ebx
 85c98ed:	83 e3 01             	and    $0x1,%ebx
 85c98f0:	85 db                	test   %ebx,%ebx
 85c98f2:	74 08                	je     85c98fc <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x11a>
 85c98f4:	88 08                	mov    %cl,(%eax)
 85c98f6:	83 c0 01             	add    $0x1,%eax
 85c98f9:	83 ea 01             	sub    $0x1,%edx
 85c98fc:	89 c3                	mov    %eax,%ebx
 85c98fe:	83 e3 02             	and    $0x2,%ebx
 85c9901:	85 db                	test   %ebx,%ebx
 85c9903:	74 09                	je     85c990e <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x12c>
 85c9905:	66 89 08             	mov    %cx,(%eax)
 85c9908:	83 c0 02             	add    $0x2,%eax
 85c990b:	83 ea 02             	sub    $0x2,%edx
 85c990e:	89 d6                	mov    %edx,%esi
 85c9910:	83 e6 fc             	and    $0xfffffffc,%esi
 85c9913:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c9918:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 85c991b:	83 c3 04             	add    $0x4,%ebx
 85c991e:	39 f3                	cmp    %esi,%ebx
 85c9920:	72 f6                	jb     85c9918 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x136>
 85c9922:	01 d8                	add    %ebx,%eax
 85c9924:	89 d3                	mov    %edx,%ebx
 85c9926:	83 e3 02             	and    $0x2,%ebx
 85c9929:	85 db                	test   %ebx,%ebx
 85c992b:	74 06                	je     85c9933 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x151>
 85c992d:	66 89 08             	mov    %cx,(%eax)
 85c9930:	83 c0 02             	add    $0x2,%eax
 85c9933:	83 e2 01             	and    $0x1,%edx
 85c9936:	85 d2                	test   %edx,%edx
 85c9938:	74 05                	je     85c993f <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x15d>
 85c993a:	88 08                	mov    %cl,(%eax)
 85c993c:	83 c0 01             	add    $0x1,%eax
 85c993f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c9946:	00 
 85c9947:	c7 44 24 08 88 d1 cb 	movl   $0x8cbd188,0x8(%esp)
 85c994e:	08 
 85c994f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c9956:	00 
 85c9957:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85c995e:	e8 9b be 4d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85c9963:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 85c996a:	00 
 85c996b:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c996f:	8d 45 cb             	lea    -0x35(%ebp),%eax
 85c9972:	89 04 24             	mov    %eax,(%esp)
 85c9975:	e8 56 3f ab ff       	call   807d8d0 <strncpy@plt>
 85c997a:	8b 45 10             	mov    0x10(%ebp),%eax
 85c997d:	8b 40 02             	mov    0x2(%eax),%eax
 85c9980:	89 c3                	mov    %eax,%ebx
 85c9982:	e8 14 28 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c9987:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c998b:	89 04 24             	mov    %eax,(%esp)
 85c998e:	e8 9f 60 d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c9993:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c9996:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c9999:	89 04 24             	mov    %eax,(%esp)
 85c999c:	e8 59 79 b2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85c99a1:	83 f0 01             	xor    $0x1,%eax
 85c99a4:	84 c0                	test   %al,%al
 85c99a6:	74 77                	je     85c9a1f <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x23d>
 85c99a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c99ab:	89 04 24             	mov    %eax,(%esp)
 85c99ae:	e8 cf 53 b5 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 85c99b3:	89 c6                	mov    %eax,%esi
 85c99b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c99b8:	89 04 24             	mov    %eax,(%esp)
 85c99bb:	e8 c2 53 b5 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 85c99c0:	89 c3                	mov    %eax,%ebx
 85c99c2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c99c9:	00 
 85c99ca:	c7 44 24 08 b9 d6 cb 	movl   $0x8cbd6b9,0x8(%esp)
 85c99d1:	08 
 85c99d2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c99d9:	00 
 85c99da:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85c99e1:	e8 18 be 4d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85c99e6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85c99e9:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 85c99ed:	89 74 24 18          	mov    %esi,0x18(%esp)
 85c99f1:	8b 55 18             	mov    0x18(%ebp),%edx
 85c99f4:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c99f8:	8b 55 14             	mov    0x14(%ebp),%edx
 85c99fb:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c99ff:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c9a03:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c9a07:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 85c9a0e:	00 
 85c9a0f:	8d 85 8e fe ff ff    	lea    -0x172(%ebp),%eax
 85c9a15:	89 04 24             	mov    %eax,(%esp)
 85c9a18:	e8 ff 2d fc ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 85c9a1d:	eb 7c                	jmp    85c9a9b <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x2b9>
 85c9a1f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c9a22:	89 04 24             	mov    %eax,(%esp)
 85c9a25:	e8 58 53 b5 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 85c9a2a:	89 c6                	mov    %eax,%esi
 85c9a2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c9a2f:	89 04 24             	mov    %eax,(%esp)
 85c9a32:	e8 4b 53 b5 ff       	call   811ed82 <_ZNK5CItem11GetItemNameEv>
 85c9a37:	89 c3                	mov    %eax,%ebx
 85c9a39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85c9a40:	00 
 85c9a41:	c7 44 24 08 cd d6 cb 	movl   $0x8cbd6cd,0x8(%esp)
 85c9a48:	08 
 85c9a49:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c9a50:	00 
 85c9a51:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 85c9a58:	e8 a1 bd 4d 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 85c9a5d:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85c9a60:	89 54 24 20          	mov    %edx,0x20(%esp)
 85c9a64:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 85c9a68:	8b 55 18             	mov    0x18(%ebp),%edx
 85c9a6b:	89 54 24 18          	mov    %edx,0x18(%esp)
 85c9a6f:	8b 55 14             	mov    0x14(%ebp),%edx
 85c9a72:	89 54 24 14          	mov    %edx,0x14(%esp)
 85c9a76:	8b 55 1c             	mov    0x1c(%ebp),%edx
 85c9a79:	89 54 24 10          	mov    %edx,0x10(%esp)
 85c9a7d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85c9a81:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c9a85:	c7 44 24 04 ff 00 00 	movl   $0xff,0x4(%esp)
 85c9a8c:	00 
 85c9a8d:	8d 85 8e fe ff ff    	lea    -0x172(%ebp),%eax
 85c9a93:	89 04 24             	mov    %eax,(%esp)
 85c9a96:	e8 81 2d fc ff       	call   858c81c <_ZN6OS_API8snprintfEPcjPKcz>
 85c9a9b:	8d 45 8e             	lea    -0x72(%ebp),%eax
 85c9a9e:	89 04 24             	mov    %eax,(%esp)
 85c9aa1:	e8 ae 1d b0 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 85c9aa6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9aa9:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9aac:	89 04 24             	mov    %eax,(%esp)
 85c9aaf:	e8 dc 21 b0 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 85c9ab4:	89 c3                	mov    %eax,%ebx
 85c9ab6:	8d 85 8e fe ff ff    	lea    -0x172(%ebp),%eax
 85c9abc:	89 04 24             	mov    %eax,(%esp)
 85c9abf:	e8 ec 48 ab ff       	call   807e3b0 <strlen@plt>
 85c9ac4:	89 c6                	mov    %eax,%esi
 85c9ac6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9ac9:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9acc:	89 04 24             	mov    %eax,(%esp)
 85c9acf:	e8 7a 21 b0 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 85c9ad4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85c9ad7:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 85c9ade:	00 
 85c9adf:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 85c9ae6:	00 
 85c9ae7:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 85c9aeb:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 85c9af2:	00 
 85c9af3:	89 74 24 14          	mov    %esi,0x14(%esp)
 85c9af7:	8d 8d 8e fe ff ff    	lea    -0x172(%ebp),%ecx
 85c9afd:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 85c9b01:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c9b05:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c9b09:	8d 45 8e             	lea    -0x72(%ebp),%eax
 85c9b0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c9b10:	8d 45 cb             	lea    -0x35(%ebp),%eax
 85c9b13:	89 04 24             	mov    %eax,(%esp)
 85c9b16:	e8 cd ba f8 ff       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 85c9b1b:	eb 35                	jmp    85c9b52 <_ZN13private_store13CPrivateStore8SellItemEiR10Inven_Itemiiii+0x370>
 85c9b1d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9b20:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9b23:	89 04 24             	mov    %eax,(%esp)
 85c9b26:	e8 63 07 b1 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85c9b2b:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 85c9b32:	00 
 85c9b33:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 85c9b3a:	00 
 85c9b3b:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 85c9b42:	00 
 85c9b43:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85c9b46:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9b4a:	89 04 24             	mov    %eax,(%esp)
 85c9b4d:	e8 4a 57 f3 ff       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 85c9b52:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9b55:	8b 48 07             	mov    0x7(%eax),%ecx
 85c9b58:	8b 45 10             	mov    0x10(%ebp),%eax
 85c9b5b:	8b 40 02             	mov    0x2(%eax),%eax
 85c9b5e:	89 c2                	mov    %eax,%edx
 85c9b60:	8b 45 08             	mov    0x8(%ebp),%eax
 85c9b63:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c9b66:	8b 80 f8 96 07 00    	mov    0x796f8(%eax),%eax
 85c9b6c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 85c9b70:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c9b74:	89 04 24             	mov    %eax,(%esp)
 85c9b77:	e8 be 06 ef ff       	call   84ba23a <_ZN10HistoryLog13WriteSellItemEP8_IO_FILEii>
 85c9b7c:	b8 01 00 00 00       	mov    $0x1,%eax
 85c9b81:	81 c4 9c 01 00 00    	add    $0x19c,%esp
 85c9b87:	5b                   	pop    %ebx
 85c9b88:	5e                   	pop    %esi
 85c9b89:	5f                   	pop    %edi
 85c9b8a:	5d                   	pop    %ebp
 85c9b8b:	c3                   	ret

```

```c
// private_store::CPrivateStore::SellItem @ 0x85c97e2

/* WARNING: Removing unreachable block (ram,0x085c98d9) */
/* private_store::CPrivateStore::SellItem(int, Inven_Item&, int, int, int, int) */

undefined4 __thiscall
private_store::CPrivateStore::SellItem
          (CPrivateStore *this,int param_1,Inven_Item *param_2,int param_3,int param_4,int param_5,
          int param_6)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  CDataManager *this_00;
  size_t sVar7;
  CInventory *pCVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  byte bVar12;
  char local_176 [256];
  Inven_Item local_76 [61];
  char local_39;
  char local_38 [20];
  int local_24;
  CItem *local_20;
  
  bVar12 = 0;
  local_24 = param_3 - param_4;
  cVar3 = Inven_Item::isEquipableItemType(param_2);
  if (cVar3 == '\0') {
    param_6 = param_6 - param_5;
  }
  else {
    param_6 = 0;
    param_5 = 1;
  }
  uVar4 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x30));
  uVar5 = CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
  cUserHistoryLog::PrivateStoreItemDel
            ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),1,param_2,param_5,param_6,0x16,
             uVar5,uVar4);
  cVar3 = isDollCreated(this);
  if (cVar3 == '\0') {
    pCVar8 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
    CInventory::gain_money(pCVar8,local_24,0xb,1,0);
  }
  else {
    pcVar6 = local_176;
    uVar9 = 0x100;
    bVar11 = ((uint)pcVar6 & 2) != 0;
    if (bVar11) {
      local_176[0] = '\0';
      local_176[1] = '\0';
      pcVar6 = local_176 + 2;
      uVar9 = 0xfe;
    }
    for (uVar9 = uVar9 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar12 * -2 + 1) * 4;
    }
    if (bVar11) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
    }
    pcVar6 = &local_39;
    uVar9 = 0x15;
    bVar11 = ((uint)pcVar6 & 1) != 0;
    if (bVar11) {
      local_39 = '\0';
      pcVar6 = local_38;
      uVar9 = 0x14;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar9 = uVar9 - 2;
    }
    uVar10 = 0;
    do {
      pcVar1 = pcVar6 + uVar10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar10 = uVar10 + 4;
    } while (uVar10 < (uVar9 & 0xfffffffc));
    pcVar6 = pcVar6 + uVar10;
    if ((uVar9 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar11) {
      *pcVar6 = '\0';
    }
    pcVar6 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_183",(bool *)0x0);
    strncpy(&local_39,pcVar6,0x14);
    iVar2 = *(int *)(param_2 + 2);
    this_00 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(this_00,iVar2);
    cVar3 = CItem::is_stackable(local_20);
    if (cVar3 == '\x01') {
      uVar4 = CItem::GetItemName(local_20);
      uVar5 = CItem::GetItemName(local_20);
      pcVar6 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_185",(bool *)0x0);
      OS_API::snprintf(local_176,0xff,pcVar6,uVar5,param_5,param_3,param_4,uVar4,local_24);
    }
    else {
      uVar4 = CItem::GetItemName(local_20);
      uVar5 = CItem::GetItemName(local_20);
      pcVar6 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_184",(bool *)0x0);
      OS_API::snprintf(local_176,0xff,pcVar6,uVar5,param_3,param_4,uVar4,local_24);
    }
    Inven_Item::Inven_Item(local_76);
    uVar4 = CUser::GetServerGroup(*(CUser **)(this + 0x2c));
    sVar7 = strlen(local_176);
    uVar5 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_39,local_76,local_24,uVar5,local_176,sVar7,0,uVar4,0,0);
  }
  HistoryLog::WriteSellItem
            (*(_IO_FILE **)(*(int *)(this + 0x2c) + 0x796f8),*(int *)(param_2 + 2),
             *(int *)(param_2 + 7));
  return 1;
}

```

---

## SendUsers

```asm
// === 085c7adc private_store::CPrivateStore::SendUsers  [0x085c7adc-0x85c7bbb] ===
 85c7adc:	55                   	push   %ebp
 85c7add:	89 e5                	mov    %esp,%ebp
 85c7adf:	83 ec 48             	sub    $0x48,%esp
 85c7ae2:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 85c7ae9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c7aec:	89 04 24             	mov    %eax,(%esp)
 85c7aef:	e8 86 57 00 00       	call   85cd27a <_ZNSt14_List_iteratorIP5CUserEC1Ev>
 85c7af4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85c7afb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7afe:	8d 50 34             	lea    0x34(%eax),%edx
 85c7b01:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 85c7b04:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7b08:	89 04 24             	mov    %eax,(%esp)
 85c7b0b:	e8 72 43 ca ff       	call   826be82 <_ZNSt4listIP5CUserSaIS1_EE5beginEv>
 85c7b10:	83 ec 04             	sub    $0x4,%esp
 85c7b13:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 85c7b16:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c7b19:	eb 51                	jmp    85c7b6c <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_+0x90>
 85c7b1b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c7b1e:	89 04 24             	mov    %eax,(%esp)
 85c7b21:	e8 ce 43 ca ff       	call   826bef4 <_ZNKSt14_List_iteratorIP5CUserEdeEv>
 85c7b26:	8b 00                	mov    (%eax),%eax
 85c7b28:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c7b2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c7b2e:	3b 45 10             	cmp    0x10(%ebp),%eax
 85c7b31:	74 1c                	je     85c7b4f <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_+0x73>
 85c7b33:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c7b37:	74 16                	je     85c7b4f <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_+0x73>
 85c7b39:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7b3c:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7b40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c7b43:	89 04 24             	mov    %eax,(%esp)
 85c7b46:	e8 6f 0a 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c7b4b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85c7b4f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85c7b52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85c7b59:	00 
 85c7b5a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85c7b5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7b61:	89 04 24             	mov    %eax,(%esp)
 85c7b64:	e8 1f 57 00 00       	call   85cd288 <_ZNSt14_List_iteratorIP5CUserEppEi>
 85c7b69:	83 ec 04             	sub    $0x4,%esp
 85c7b6c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c7b6f:	8d 50 34             	lea    0x34(%eax),%edx
 85c7b72:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c7b75:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c7b79:	89 04 24             	mov    %eax,(%esp)
 85c7b7c:	e8 27 43 ca ff       	call   826bea8 <_ZNSt4listIP5CUserSaIS1_EE3endEv>
 85c7b81:	83 ec 04             	sub    $0x4,%esp
 85c7b84:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85c7b87:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7b8b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85c7b8e:	89 04 24             	mov    %eax,(%esp)
 85c7b91:	e8 36 43 ca ff       	call   826becc <_ZNKSt14_List_iteratorIP5CUserEneERKS2_>
 85c7b96:	84 c0                	test   %al,%al
 85c7b98:	75 81                	jne    85c7b1b <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_+0x3f>
 85c7b9a:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 85c7b9e:	74 16                	je     85c7bb6 <_ZN13private_store13CPrivateStore9SendUsersEP11PacketGuardP5CUserS4_+0xda>
 85c7ba0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7ba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c7ba7:	8b 45 14             	mov    0x14(%ebp),%eax
 85c7baa:	89 04 24             	mov    %eax,(%esp)
 85c7bad:	e8 08 0a 08 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c7bb2:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 85c7bb6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85c7bb9:	c9                   	leave
 85c7bba:	c3                   	ret
 85c7bbb:	90                   	nop

```

```c
// private_store::CPrivateStore::SendUsers @ 0x85c7adc

/* private_store::CPrivateStore::SendUsers(PacketGuard*, CUser*, CUser*) */

int __thiscall
private_store::CPrivateStore::SendUsers
          (CPrivateStore *this,PacketGuard *param_1,CUser *param_2,CUser *param_3)

{
  char cVar1;
  undefined4 *puVar2;
  _List_iterator<CUser*> local_20 [4];
  _List_iterator local_1c [4];
  _List_iterator<CUser*> local_18 [4];
  int local_14;
  CUser *local_10;
  
  local_14 = 0;
  std::_List_iterator<CUser*>::_List_iterator(local_20);
  local_10 = (CUser *)0x0;
  std::list<CUser*,std::allocator<CUser*>>::begin();
  while( true ) {
    std::list<CUser*,std::allocator<CUser*>>::end();
    cVar1 = std::_List_iterator<CUser*>::operator!=(local_20,local_1c);
    if (cVar1 == '\0') break;
    puVar2 = (undefined4 *)std::_List_iterator<CUser*>::operator*(local_20);
    local_10 = (CUser *)*puVar2;
    if ((local_10 != param_2) && (local_10 != (CUser *)0x0)) {
      CUser::Send(local_10,param_1);
      local_14 = local_14 + 1;
    }
    std::_List_iterator<CUser*>::operator++(local_18,(int)local_20);
  }
  if (param_3 != (CUser *)0x0) {
    CUser::Send(param_3,param_1);
    local_14 = local_14 + 1;
  }
  return local_14;
}

```

---

## SubtractItemCount

```asm
// === 085c7bbc private_store::CPrivateStore::SubtractItemCount  [0x085c7bbc-0x85c7c09] ===
 85c7bbc:	55                   	push   %ebp
 85c7bbd:	89 e5                	mov    %esp,%ebp
 85c7bbf:	83 ec 18             	sub    $0x18,%esp
 85c7bc2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c7bc5:	89 04 24             	mov    %eax,(%esp)
 85c7bc8:	e8 2d 97 b2 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 85c7bcd:	84 c0                	test   %al,%al
 85c7bcf:	74 2b                	je     85c7bfc <_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi+0x40>
 85c7bd1:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7bd4:	8b 40 07             	mov    0x7(%eax),%eax
 85c7bd7:	3b 45 14             	cmp    0x14(%ebp),%eax
 85c7bda:	75 0d                	jne    85c7be9 <_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi+0x2d>
 85c7bdc:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7bdf:	89 04 24             	mov    %eax,(%esp)
 85c7be2:	e8 b3 c9 c6 ff       	call   823459a <_ZN13private_store16PrivateStoreItem5ResetEv>
 85c7be7:	eb 1e                	jmp    85c7c07 <_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi+0x4b>
 85c7be9:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7bec:	8b 40 07             	mov    0x7(%eax),%eax
 85c7bef:	89 c2                	mov    %eax,%edx
 85c7bf1:	2b 55 14             	sub    0x14(%ebp),%edx
 85c7bf4:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7bf7:	89 50 07             	mov    %edx,0x7(%eax)
 85c7bfa:	eb 0b                	jmp    85c7c07 <_ZN13private_store13CPrivateStore17SubtractItemCountEPK5CItemRNS_16PrivateStoreItemEi+0x4b>
 85c7bfc:	8b 45 10             	mov    0x10(%ebp),%eax
 85c7bff:	89 04 24             	mov    %eax,(%esp)
 85c7c02:	e8 93 c9 c6 ff       	call   823459a <_ZN13private_store16PrivateStoreItem5ResetEv>
 85c7c07:	c9                   	leave
 85c7c08:	c3                   	ret
 85c7c09:	90                   	nop

```

```c
// private_store::CPrivateStore::SubtractItemCount @ 0x85c7bbc

/* private_store::CPrivateStore::SubtractItemCount(CItem const*, private_store::PrivateStoreItem&,
   int) */

void __thiscall
private_store::CPrivateStore::SubtractItemCount
          (CPrivateStore *this,CItem *param_1,PrivateStoreItem *param_2,int param_3)

{
  char cVar1;
  
  cVar1 = CItem::is_stackable(param_1);
  if (cVar1 == '\0') {
    PrivateStoreItem::Reset(param_2);
  }
  else if (*(int *)(param_2 + 7) == param_3) {
    PrivateStoreItem::Reset(param_2);
  }
  else {
    *(int *)(param_2 + 7) = *(int *)(param_2 + 7) - param_3;
  }
  return;
}

```

---

## VerifyPrivateStoreItem

```asm
// === 085c874c private_store::CPrivateStore::VerifyPrivateStoreItem  [0x085c874c-0x85c8dce] ===
 85c874c:	55                   	push   %ebp
 85c874d:	89 e5                	mov    %esp,%ebp
 85c874f:	56                   	push   %esi
 85c8750:	53                   	push   %ebx
 85c8751:	83 ec 50             	sub    $0x50,%esp
 85c8754:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8757:	8b 40 30             	mov    0x30(%eax),%eax
 85c875a:	8b 55 08             	mov    0x8(%ebp),%edx
 85c875d:	83 c2 14             	add    $0x14,%edx
 85c8760:	c7 44 24 0c 95 01 00 	movl   $0x195,0xc(%esp)
 85c8767:	00 
 85c8768:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 85c876f:	00 
 85c8770:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8774:	89 14 24             	mov    %edx,(%esp)
 85c8777:	e8 2c 30 00 00       	call   85cb7a8 <_ZN13private_store13CErrorHandler3SetEP5CUserii>
 85c877c:	8b 45 08             	mov    0x8(%ebp),%eax
 85c877f:	8b 40 30             	mov    0x30(%eax),%eax
 85c8782:	85 c0                	test   %eax,%eax
 85c8784:	75 0a                	jne    85c8790 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x44>
 85c8786:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c878b:	e9 36 06 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8790:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8793:	8b 40 20             	mov    0x20(%eax),%eax
 85c8796:	85 c0                	test   %eax,%eax
 85c8798:	75 20                	jne    85c87ba <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x6e>
 85c879a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c879d:	83 c0 14             	add    $0x14,%eax
 85c87a0:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c87a7:	00 
 85c87a8:	89 04 24             	mov    %eax,(%esp)
 85c87ab:	e8 cc c4 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c87b0:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c87b5:	e9 0c 06 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c87ba:	8b 45 08             	mov    0x8(%ebp),%eax
 85c87bd:	8b 40 30             	mov    0x30(%eax),%eax
 85c87c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c87c4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c87c7:	89 04 24             	mov    %eax,(%esp)
 85c87ca:	e8 e7 09 00 00       	call   85c91b6 <_ZN13private_store13CPrivateStore16IsExistBuyerListEP5CUser>
 85c87cf:	83 f0 01             	xor    $0x1,%eax
 85c87d2:	84 c0                	test   %al,%al
 85c87d4:	74 20                	je     85c87f6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0xaa>
 85c87d6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c87d9:	83 c0 14             	add    $0x14,%eax
 85c87dc:	c7 44 24 04 15 00 00 	movl   $0x15,0x4(%esp)
 85c87e3:	00 
 85c87e4:	89 04 24             	mov    %eax,(%esp)
 85c87e7:	e8 90 c4 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c87ec:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c87f1:	e9 d0 05 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c87f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85c87f9:	8b 40 30             	mov    0x30(%eax),%eax
 85c87fc:	89 04 24             	mov    %eax,(%esp)
 85c87ff:	e8 2e 7c b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c8804:	85 c0                	test   %eax,%eax
 85c8806:	0f 94 c0             	sete   %al
 85c8809:	84 c0                	test   %al,%al
 85c880b:	74 20                	je     85c882d <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0xe1>
 85c880d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8810:	83 c0 14             	add    $0x14,%eax
 85c8813:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c881a:	00 
 85c881b:	89 04 24             	mov    %eax,(%esp)
 85c881e:	e8 59 c4 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8823:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8828:	e9 99 05 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c882d:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 85c8831:	78 06                	js     85c8839 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0xed>
 85c8833:	83 7d 0c 0d          	cmpl   $0xd,0xc(%ebp)
 85c8837:	7e 20                	jle    85c8859 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x10d>
 85c8839:	8b 45 08             	mov    0x8(%ebp),%eax
 85c883c:	83 c0 14             	add    $0x14,%eax
 85c883f:	c7 44 24 04 39 00 00 	movl   $0x39,0x4(%esp)
 85c8846:	00 
 85c8847:	89 04 24             	mov    %eax,(%esp)
 85c884a:	e8 2d c4 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c884f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8854:	e9 6d 05 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8859:	8b 45 08             	mov    0x8(%ebp),%eax
 85c885c:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c885f:	85 c0                	test   %eax,%eax
 85c8861:	74 12                	je     85c8875 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x129>
 85c8863:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8866:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c8869:	89 04 24             	mov    %eax,(%esp)
 85c886c:	e8 c1 7b b5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 85c8871:	85 c0                	test   %eax,%eax
 85c8873:	75 07                	jne    85c887c <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x130>
 85c8875:	b8 01 00 00 00       	mov    $0x1,%eax
 85c887a:	eb 05                	jmp    85c8881 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x135>
 85c887c:	b8 00 00 00 00       	mov    $0x0,%eax
 85c8881:	84 c0                	test   %al,%al
 85c8883:	74 20                	je     85c88a5 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x159>
 85c8885:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8888:	83 c0 14             	add    $0x14,%eax
 85c888b:	c7 44 24 04 3a 00 00 	movl   $0x3a,0x4(%esp)
 85c8892:	00 
 85c8893:	89 04 24             	mov    %eax,(%esp)
 85c8896:	e8 e1 c3 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c889b:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c88a0:	e9 21 05 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c88a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c88a8:	8b 55 08             	mov    0x8(%ebp),%edx
 85c88ab:	83 c2 3c             	add    $0x3c,%edx
 85c88ae:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c88b2:	89 14 24             	mov    %edx,(%esp)
 85c88b5:	e8 4c 46 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c88ba:	0f b6 40 3d          	movzbl 0x3d(%eax),%eax
 85c88be:	3c 03                	cmp    $0x3,%al
 85c88c0:	0f 95 c0             	setne  %al
 85c88c3:	84 c0                	test   %al,%al
 85c88c5:	74 20                	je     85c88e7 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x19b>
 85c88c7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c88ca:	83 c0 14             	add    $0x14,%eax
 85c88cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c88d4:	00 
 85c88d5:	89 04 24             	mov    %eax,(%esp)
 85c88d8:	e8 9f c3 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c88dd:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c88e2:	e9 df 04 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c88e7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c88ea:	8b 50 30             	mov    0x30(%eax),%edx
 85c88ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85c88f0:	8b 40 20             	mov    0x20(%eax),%eax
 85c88f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c88f7:	89 04 24             	mov    %eax,(%esp)
 85c88fa:	e8 5f 24 00 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 85c88ff:	84 c0                	test   %al,%al
 85c8901:	74 20                	je     85c8923 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x1d7>
 85c8903:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8906:	83 c0 14             	add    $0x14,%eax
 85c8909:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 85c8910:	00 
 85c8911:	89 04 24             	mov    %eax,(%esp)
 85c8914:	e8 63 c3 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8919:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c891e:	e9 a3 04 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8923:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 85c892a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c892d:	8b 55 08             	mov    0x8(%ebp),%edx
 85c8930:	83 c2 3c             	add    $0x3c,%edx
 85c8933:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8937:	89 14 24             	mov    %edx,(%esp)
 85c893a:	e8 c7 45 00 00       	call   85ccf06 <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EEixEj>
 85c893f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 85c8942:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8945:	8b 40 02             	mov    0x2(%eax),%eax
 85c8948:	89 c3                	mov    %eax,%ebx
 85c894a:	e8 4c 38 b0 ff       	call   80cc19b <_Z14G_CDataManagerv>
 85c894f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c8953:	89 04 24             	mov    %eax,(%esp)
 85c8956:	e8 d7 70 d9 ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 85c895b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 85c895e:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 85c8962:	0f 94 c0             	sete   %al
 85c8965:	84 c0                	test   %al,%al
 85c8967:	74 20                	je     85c8989 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x23d>
 85c8969:	8b 45 08             	mov    0x8(%ebp),%eax
 85c896c:	83 c0 14             	add    $0x14,%eax
 85c896f:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c8976:	00 
 85c8977:	89 04 24             	mov    %eax,(%esp)
 85c897a:	e8 fd c2 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c897f:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8984:	e9 3d 04 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8989:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c898c:	89 04 24             	mov    %eax,(%esp)
 85c898f:	e8 4e 89 b2 ff       	call   80f12e2 <_ZNK5CItem13GetAttachTypeEv>
 85c8994:	89 45 ec             	mov    %eax,-0x14(%ebp)
 85c8997:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 85c899b:	74 77                	je     85c8a14 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x2c8>
 85c899d:	83 7d ec 03          	cmpl   $0x3,-0x14(%ebp)
 85c89a1:	75 2d                	jne    85c89d0 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x284>
 85c89a3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c89a6:	0f b6 00             	movzbl (%eax),%eax
 85c89a9:	83 f0 01             	xor    $0x1,%eax
 85c89ac:	84 c0                	test   %al,%al
 85c89ae:	74 64                	je     85c8a14 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x2c8>
 85c89b0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c89b3:	83 c0 14             	add    $0x14,%eax
 85c89b6:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c89bd:	00 
 85c89be:	89 04 24             	mov    %eax,(%esp)
 85c89c1:	e8 b6 c2 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c89c6:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c89cb:	e9 f6 03 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c89d0:	83 7d ec 07          	cmpl   $0x7,-0x14(%ebp)
 85c89d4:	75 1e                	jne    85c89f4 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x2a8>
 85c89d6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c89d9:	89 04 24             	mov    %eax,(%esp)
 85c89dc:	e8 41 7a b5 ff       	call   8120422 <_ZNK10Inven_Item18GetTradeLimitCountEv>
 85c89e1:	84 c0                	test   %al,%al
 85c89e3:	0f 94 c0             	sete   %al
 85c89e6:	84 c0                	test   %al,%al
 85c89e8:	74 2a                	je     85c8a14 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x2c8>
 85c89ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c89ef:	e9 d2 03 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c89f4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c89f7:	83 c0 14             	add    $0x14,%eax
 85c89fa:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c8a01:	00 
 85c8a02:	89 04 24             	mov    %eax,(%esp)
 85c8a05:	e8 72 c2 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8a0a:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8a0f:	e9 b2 03 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8a14:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8a17:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c8a1b:	0f b6 c0             	movzbl %al,%eax
 85c8a1e:	89 04 24             	mov    %eax,(%esp)
 85c8a21:	e8 33 47 f4 ff       	call   850d159 <_Z18IsCreatureItemTypei>
 85c8a26:	84 c0                	test   %al,%al
 85c8a28:	74 20                	je     85c8a4a <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x2fe>
 85c8a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8a2d:	83 c0 14             	add    $0x14,%eax
 85c8a30:	c7 44 24 04 11 00 00 	movl   $0x11,0x4(%esp)
 85c8a37:	00 
 85c8a38:	89 04 24             	mov    %eax,(%esp)
 85c8a3b:	e8 3c c2 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8a40:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8a45:	e9 7c 03 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8a4a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85c8a4d:	89 44 24 18          	mov    %eax,0x18(%esp)
 85c8a51:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85c8a54:	89 44 24 14          	mov    %eax,0x14(%esp)
 85c8a58:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85c8a5b:	89 44 24 10          	mov    %eax,0x10(%esp)
 85c8a5f:	8b 45 10             	mov    0x10(%ebp),%eax
 85c8a62:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85c8a66:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8a69:	89 44 24 08          	mov    %eax,0x8(%esp)
 85c8a6d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 85c8a70:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8a74:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8a77:	89 04 24             	mov    %eax,(%esp)
 85c8a7a:	e8 85 f2 ff ff       	call   85c7d04 <_ZN13private_store13CPrivateStore12GetItemPriceEPK5CItemRNS_16PrivateStoreItemEiRiRjS7_>
 85c8a7f:	83 f0 01             	xor    $0x1,%eax
 85c8a82:	84 c0                	test   %al,%al
 85c8a84:	74 0a                	je     85c8a90 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x344>
 85c8a86:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8a8b:	e9 36 03 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8a90:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 85c8a93:	8b 55 e0             	mov    -0x20(%ebp),%edx
 85c8a96:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85c8a99:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 85c8a9d:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8aa1:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8aa5:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8aa8:	89 04 24             	mov    %eax,(%esp)
 85c8aab:	e8 5a f1 ff ff       	call   85c7c0a <_ZN13private_store13CPrivateStore14IsPossibleDealEijj>
 85c8ab0:	83 f0 01             	xor    $0x1,%eax
 85c8ab3:	84 c0                	test   %al,%al
 85c8ab5:	74 0a                	je     85c8ac1 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x375>
 85c8ab7:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8abc:	e9 05 03 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8ac1:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ac4:	8b 40 30             	mov    0x30(%eax),%eax
 85c8ac7:	89 04 24             	mov    %eax,(%esp)
 85c8aca:	e8 b1 68 c6 ff       	call   822f380 <_ZN15CUserCharacInfo17GetReliablePersonEv>
 85c8acf:	83 f0 01             	xor    $0x1,%eax
 85c8ad2:	84 c0                	test   %al,%al
 85c8ad4:	74 3e                	je     85c8b14 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x3c8>
 85c8ad6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 85c8ad9:	89 c2                	mov    %eax,%edx
 85c8adb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ade:	8b 40 30             	mov    0x30(%eax),%eax
 85c8ae1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8ae5:	89 04 24             	mov    %eax,(%esp)
 85c8ae8:	e8 a9 d9 07 00       	call   8646496 <_ZN15CUserCharacInfo34IsAvailableCurCharacTradeGoldDailyEj>
 85c8aed:	83 f0 01             	xor    $0x1,%eax
 85c8af0:	84 c0                	test   %al,%al
 85c8af2:	74 20                	je     85c8b14 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x3c8>
 85c8af4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8af7:	83 c0 14             	add    $0x14,%eax
 85c8afa:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 85c8b01:	00 
 85c8b02:	89 04 24             	mov    %eax,(%esp)
 85c8b05:	e8 72 c1 ff ff       	call   85c4c7c <_ZN13private_store13CErrorHandler2DoEi>
 85c8b0a:	bb 00 00 00 00       	mov    $0x0,%ebx
 85c8b0f:	e9 b2 02 00 00       	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8b14:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8b17:	89 04 24             	mov    %eax,(%esp)
 85c8b1a:	e8 2d 52 fc ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 85c8b1f:	c7 44 24 08 95 01 00 	movl   $0x195,0x8(%esp)
 85c8b26:	00 
 85c8b27:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c8b2e:	00 
 85c8b2f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8b32:	89 04 24             	mov    %eax,(%esp)
 85c8b35:	e8 c2 2d b0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 85c8b3a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c8b41:	00 
 85c8b42:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8b45:	89 04 24             	mov    %eax,(%esp)
 85c8b48:	e8 d3 2d b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85c8b4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85c8b50:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8b54:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8b57:	89 04 24             	mov    %eax,(%esp)
 85c8b5a:	e8 45 13 b1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85c8b5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8b62:	8b 40 40             	mov    0x40(%eax),%eax
 85c8b65:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8b69:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8b6c:	89 04 24             	mov    %eax,(%esp)
 85c8b6f:	e8 c8 2d b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8b74:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8b77:	8b 40 02             	mov    0x2(%eax),%eax
 85c8b7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8b7e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8b81:	89 04 24             	mov    %eax,(%esp)
 85c8b84:	e8 b3 2d b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8b89:	e8 74 3c fc ff       	call   858c802 <_ZN6OS_API15GetDateTimeTickEv>
 85c8b8e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85c8b91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8b94:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c8b98:	3c 08                	cmp    $0x8,%al
 85c8b9a:	75 40                	jne    85c8bdc <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x490>
 85c8b9c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8b9f:	8b 58 07             	mov    0x7(%eax),%ebx
 85c8ba2:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ba5:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c8ba8:	89 04 24             	mov    %eax,(%esp)
 85c8bab:	e8 ce 16 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c8bb0:	89 04 24             	mov    %eax,(%esp)
 85c8bb3:	e8 be 49 b1 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 85c8bb8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85c8bbb:	89 54 24 08          	mov    %edx,0x8(%esp)
 85c8bbf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c8bc3:	89 04 24             	mov    %eax,(%esp)
 85c8bc6:	e8 85 0c d3 ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 85c8bcb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8bcf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8bd2:	89 04 24             	mov    %eax,(%esp)
 85c8bd5:	e8 62 2d b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8bda:	eb 12                	jmp    85c8bee <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x4a2>
 85c8bdc:	8b 45 10             	mov    0x10(%ebp),%eax
 85c8bdf:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8be3:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8be6:	89 04 24             	mov    %eax,(%esp)
 85c8be9:	e8 4e 2d b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8bee:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8bf1:	89 04 24             	mov    %eax,(%esp)
 85c8bf4:	e8 e3 7b b8 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 85c8bf9:	0f b6 c0             	movzbl %al,%eax
 85c8bfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8c00:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8c03:	89 04 24             	mov    %eax,(%esp)
 85c8c06:	e8 15 2d b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85c8c0b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8c0e:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 85c8c12:	0f b7 c0             	movzwl %ax,%eax
 85c8c15:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8c19:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8c1c:	89 04 24             	mov    %eax,(%esp)
 85c8c1f:	e8 80 12 b1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85c8c24:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8c27:	8b 40 0d             	mov    0xd(%eax),%eax
 85c8c2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8c2e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8c31:	89 04 24             	mov    %eax,(%esp)
 85c8c34:	e8 03 2d b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8c39:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8c3c:	83 c0 11             	add    $0x11,%eax
 85c8c3f:	89 04 24             	mov    %eax,(%esp)
 85c8c42:	e8 eb 7a b8 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 85c8c47:	0f b6 c0             	movzbl %al,%eax
 85c8c4a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8c4e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8c51:	89 04 24             	mov    %eax,(%esp)
 85c8c54:	e8 c7 2c b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85c8c59:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8c5c:	83 c0 11             	add    $0x11,%eax
 85c8c5f:	89 04 24             	mov    %eax,(%esp)
 85c8c62:	e8 0b 7b b8 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 85c8c67:	0f b7 c0             	movzwl %ax,%eax
 85c8c6a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8c6e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8c71:	89 04 24             	mov    %eax,(%esp)
 85c8c74:	e8 2b 12 b1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85c8c79:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8c7c:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85c8c80:	3c 08                	cmp    $0x8,%al
 85c8c82:	0f 85 d7 00 00 00    	jne    85c8d5f <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x613>
 85c8c88:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 85c8c8f:	00 
 85c8c90:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8c93:	89 04 24             	mov    %eax,(%esp)
 85c8c96:	e8 a1 2c b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8c9b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8c9e:	8b 58 07             	mov    0x7(%eax),%ebx
 85c8ca1:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ca4:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c8ca7:	89 04 24             	mov    %eax,(%esp)
 85c8caa:	e8 cf 15 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c8caf:	89 04 24             	mov    %eax,(%esp)
 85c8cb2:	e8 bf 48 b1 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 85c8cb7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c8cbb:	89 04 24             	mov    %eax,(%esp)
 85c8cbe:	e8 35 0c d3 ff       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 85c8cc3:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 85c8cca:	00 
 85c8ccb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8ccf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8cd2:	89 04 24             	mov    %eax,(%esp)
 85c8cd5:	e8 90 7c b8 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 85c8cda:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8cdd:	8b 58 07             	mov    0x7(%eax),%ebx
 85c8ce0:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8ce3:	8b 40 2c             	mov    0x2c(%eax),%eax
 85c8ce6:	89 04 24             	mov    %eax,(%esp)
 85c8ce9:	e8 90 15 b1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 85c8cee:	89 04 24             	mov    %eax,(%esp)
 85c8cf1:	e8 80 48 b1 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 85c8cf6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85c8cfa:	89 04 24             	mov    %eax,(%esp)
 85c8cfd:	e8 2c 0c d3 ff       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 85c8d02:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85c8d05:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 85c8d0c:	00 
 85c8d0d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8d10:	89 04 24             	mov    %eax,(%esp)
 85c8d13:	e8 24 2c b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85c8d18:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85c8d1c:	74 1c                	je     85c8d3a <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x5ee>
 85c8d1e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85c8d21:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85c8d28:	00 
 85c8d29:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8d2d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8d30:	89 04 24             	mov    %eax,(%esp)
 85c8d33:	e8 32 7c b8 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 85c8d38:	eb 25                	jmp    85c8d5f <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x613>
 85c8d3a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85c8d3d:	89 04 24             	mov    %eax,(%esp)
 85c8d40:	e8 d9 b4 d6 ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 85c8d45:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85c8d48:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 85c8d4f:	00 
 85c8d50:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8d54:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8d57:	89 04 24             	mov    %eax,(%esp)
 85c8d5a:	e8 0b 7c b8 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 85c8d5f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 85c8d62:	89 44 24 04          	mov    %eax,0x4(%esp)
 85c8d66:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8d69:	89 04 24             	mov    %eax,(%esp)
 85c8d6c:	e8 1d 7c b8 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 85c8d71:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85c8d78:	00 
 85c8d79:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8d7c:	89 04 24             	mov    %eax,(%esp)
 85c8d7f:	e8 d4 2b b0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 85c8d84:	8b 45 08             	mov    0x8(%ebp),%eax
 85c8d87:	8b 40 30             	mov    0x30(%eax),%eax
 85c8d8a:	8d 55 cc             	lea    -0x34(%ebp),%edx
 85c8d8d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85c8d91:	89 04 24             	mov    %eax,(%esp)
 85c8d94:	e8 21 f8 07 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 85c8d99:	bb 01 00 00 00       	mov    $0x1,%ebx
 85c8d9e:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8da1:	89 04 24             	mov    %eax,(%esp)
 85c8da4:	e8 d7 50 fc ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85c8da9:	eb 1b                	jmp    85c8dc6 <_ZN13private_store13CPrivateStore22VerifyPrivateStoreItemEii+0x67a>
 85c8dab:	89 d3                	mov    %edx,%ebx
 85c8dad:	89 c6                	mov    %eax,%esi
 85c8daf:	8d 45 cc             	lea    -0x34(%ebp),%eax
 85c8db2:	89 04 24             	mov    %eax,(%esp)
 85c8db5:	e8 c6 50 fc ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 85c8dba:	89 f0                	mov    %esi,%eax
 85c8dbc:	89 da                	mov    %ebx,%edx
 85c8dbe:	89 04 24             	mov    %eax,(%esp)
 85c8dc1:	e8 8a a9 51 00       	call   8ae3750 <_Unwind_Resume>
 85c8dc6:	89 d8                	mov    %ebx,%eax
 85c8dc8:	83 c4 50             	add    $0x50,%esp
 85c8dcb:	5b                   	pop    %ebx
 85c8dcc:	5e                   	pop    %esi
 85c8dcd:	5d                   	pop    %ebp
 85c8dce:	c3                   	ret

```

```c
// private_store::CPrivateStore::VerifyPrivateStoreItem @ 0x85c874c

/* private_store::CPrivateStore::VerifyPrivateStoreItem(int, int) */

undefined4 __thiscall
private_store::CPrivateStore::VerifyPrivateStoreItem(CPrivateStore *this,int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  CInventory *pCVar4;
  CAvatarItemMgr *pCVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  stAvatarExpansionInfo_t local_3c [4];
  PacketGuard local_38 [12];
  uint local_2c;
  uint local_28;
  uint local_24;
  CItem *local_20;
  Inven_Item *local_1c;
  int local_18;
  int local_14;
  char *local_10;
  
  CErrorHandler::Set((CErrorHandler *)(this + 0x14),*(CUser **)(this + 0x30),1,0x195);
  if (*(int *)(this + 0x30) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x20) == 0) {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
    return 0;
  }
  cVar2 = IsExistBuyerList((CUser *)this);
  if (cVar2 != '\x01') {
    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x15);
    return 0;
  }
  iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x30));
  if (iVar3 != 0) {
    if ((param_1 < 0) || (0xd < param_1)) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x39);
      return 0;
    }
    if ((*(int *)(this + 0x2c) == 0) ||
       (iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar3 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3a);
      uVar8 = 0;
    }
    else {
      iVar3 = std::
              vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
              ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                            *)(this + 0x3c),param_1);
      if (*(char *)(iVar3 + 0x3d) == '\x03') {
        cVar2 = CPrivateStoreMgr::IsBusyPrivateStore
                          (*(CPrivateStoreMgr **)(this + 0x20),*(CUser **)(this + 0x30));
        if (cVar2 == '\0') {
          local_20 = (CItem *)0x0;
          local_1c = (Inven_Item *)
                     std::
                     vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                     ::operator[]((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>
                                   *)(this + 0x3c),param_1);
          iVar3 = *(int *)(local_1c + 2);
          this_00 = (CDataManager *)G_CDataManager();
          local_20 = (CItem *)CDataManager::find_item(this_00,iVar3);
          if (local_20 == (CItem *)0x0) {
            CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
            uVar8 = 0;
          }
          else {
            local_18 = CItem::GetAttachType(local_20);
            if (local_18 != 0) {
              if (local_18 == 3) {
                if (*local_1c != (Inven_Item)0x1) {
                  CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
                  return 0;
                }
              }
              else {
                if (local_18 != 7) {
                  CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
                  return 0;
                }
                cVar2 = Inven_Item::GetTradeLimitCount(local_1c);
                if (cVar2 == '\0') {
                  return 0;
                }
              }
            }
            cVar2 = IsCreatureItemType((uint)(byte)local_1c[1]);
            if (cVar2 == '\0') {
              cVar2 = GetItemPrice(this,local_20,(PrivateStoreItem *)local_1c,param_2,
                                   (int *)&local_2c,&local_24,&local_28);
              if (cVar2 == '\x01') {
                cVar2 = IsPossibleDeal((int)this,local_2c,local_24);
                if (cVar2 == '\x01') {
                  cVar2 = CUserCharacInfo::GetReliablePerson(*(CUserCharacInfo **)(this + 0x30));
                  if ((cVar2 != '\x01') &&
                     (cVar2 = CUserCharacInfo::IsAvailableCurCharacTradeGoldDaily
                                        (*(CUserCharacInfo **)(this + 0x30),local_2c),
                     cVar2 != '\x01')) {
                    CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x46);
                    return 0;
                  }
                  PacketGuard::PacketGuard(local_38);
                    /* try { // try from 085c8b35 to 085c8d98 has its CatchHandler @ 085c8dab */
                  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_38,1,0x195);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,1);
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,param_1);
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_38,*(int *)(local_1c + 0x40));
                  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,*(int *)(local_1c + 2))
                  ;
                  local_14 = OS_API::GetDateTimeTick();
                  if (*(PrivateStoreItem *)(local_1c + 1) == (PrivateStoreItem)0x8) {
                    iVar3 = *(int *)(local_1c + 7);
                    pCVar4 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
                    ;
                    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
                    iVar3 = WongWork::CAvatarItemMgr::GetRemainDate(pCVar5,iVar3,local_14);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,iVar3);
                  }
                  else {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,param_2);
                  }
                  uVar6 = Inven_Item::GetItemAttr(local_1c);
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar6 & 0xff);
                  InterfacePacketBuf::put_short
                            ((InterfacePacketBuf *)local_38,(uint)*(ushort *)(local_1c + 0xb));
                  InterfacePacketBuf::put_int
                            ((InterfacePacketBuf *)local_38,*(int *)(local_1c + 0xd));
                  uVar6 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(local_1c + 0x11));
                  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_38,uVar6 & 0xff);
                  uVar6 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(local_1c + 0x11))
                  ;
                  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_38,uVar6 & 0xffff);
                  if (local_1c[1] == (Inven_Item)0x8) {
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,0x1e);
                    iVar3 = *(int *)(local_1c + 7);
                    pCVar4 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
                    ;
                    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
                    pcVar7 = (char *)WongWork::CAvatarItemMgr::getJewelSocketData(pCVar5,iVar3);
                    InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_38,pcVar7,0x1e);
                    iVar3 = *(int *)(local_1c + 7);
                    pCVar4 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c))
                    ;
                    pCVar5 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar4);
                    local_10 = (char *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar5,iVar3);
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_38,4);
                    if (local_10 == (char *)0x0) {
                      stAvatarExpansionInfo_t::init(local_3c);
                      InterfacePacketBuf::put_binary
                                ((InterfacePacketBuf *)local_38,(char *)local_3c,4);
                    }
                    else {
                      InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_38,local_10,4);
                    }
                  }
                  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_38,local_1c);
                  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_38,true);
                  CUser::Send(*(CUser **)(this + 0x30),local_38);
                  uVar8 = 1;
                  PacketGuard::~PacketGuard(local_38);
                }
                else {
                  uVar8 = 0;
                }
              }
              else {
                uVar8 = 0;
              }
            }
            else {
              CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x11);
              uVar8 = 0;
            }
          }
        }
        else {
          CErrorHandler::Do((CErrorHandler *)(this + 0x14),0x3c);
          uVar8 = 0;
        }
      }
      else {
        CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
        uVar8 = 0;
      }
    }
    return uVar8;
  }
  CErrorHandler::Do((CErrorHandler *)(this + 0x14),1);
  return 0;
}

```

---

## ~CPrivateStore

```asm
// === 085c4ecc private_store::CPrivateStore::~CPrivateStore  [0x085c4ecc-0x85c4f51] ===
 85c4ecc:	55                   	push   %ebp
 85c4ecd:	89 e5                	mov    %esp,%ebp
 85c4ecf:	56                   	push   %esi
 85c4ed0:	53                   	push   %ebx
 85c4ed1:	83 ec 10             	sub    $0x10,%esp
 85c4ed4:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ed7:	c7 00 68 eb cb 08    	movl   $0x8cbeb68,(%eax)
 85c4edd:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4ee0:	c7 40 04 98 eb cb 08 	movl   $0x8cbeb98,0x4(%eax)
 85c4ee7:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4eea:	83 c0 48             	add    $0x48,%eax
 85c4eed:	89 04 24             	mov    %eax,(%esp)
 85c4ef0:	e8 eb 2c 14 00       	call   8707be0 <_ZNSsD1Ev>
 85c4ef5:	eb 18                	jmp    85c4f0f <_ZN13private_store13CPrivateStoreD1Ev+0x43>
 85c4ef7:	89 d3                	mov    %edx,%ebx
 85c4ef9:	89 c6                	mov    %eax,%esi
 85c4efb:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4efe:	83 c0 3c             	add    $0x3c,%eax
 85c4f01:	89 04 24             	mov    %eax,(%esp)
 85c4f04:	e8 25 80 00 00       	call   85ccf2e <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EED1Ev>
 85c4f09:	89 f0                	mov    %esi,%eax
 85c4f0b:	89 da                	mov    %ebx,%edx
 85c4f0d:	eb 10                	jmp    85c4f1f <_ZN13private_store13CPrivateStoreD1Ev+0x53>
 85c4f0f:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4f12:	83 c0 3c             	add    $0x3c,%eax
 85c4f15:	89 04 24             	mov    %eax,(%esp)
 85c4f18:	e8 11 80 00 00       	call   85ccf2e <_ZNSt6vectorIN13private_store16PrivateStoreItemESaIS1_EED1Ev>
 85c4f1d:	eb 1e                	jmp    85c4f3d <_ZN13private_store13CPrivateStoreD1Ev+0x71>
 85c4f1f:	89 d3                	mov    %edx,%ebx
 85c4f21:	89 c6                	mov    %eax,%esi
 85c4f23:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4f26:	83 c0 34             	add    $0x34,%eax
 85c4f29:	89 04 24             	mov    %eax,(%esp)
 85c4f2c:	e8 fb 6a ca ff       	call   826ba2c <_ZNSt4listIP5CUserSaIS1_EED1Ev>
 85c4f31:	89 f0                	mov    %esi,%eax
 85c4f33:	89 da                	mov    %ebx,%edx
 85c4f35:	89 04 24             	mov    %eax,(%esp)
 85c4f38:	e8 13 e8 51 00       	call   8ae3750 <_Unwind_Resume>
 85c4f3d:	8b 45 08             	mov    0x8(%ebp),%eax
 85c4f40:	83 c0 34             	add    $0x34,%eax
 85c4f43:	89 04 24             	mov    %eax,(%esp)
 85c4f46:	e8 e1 6a ca ff       	call   826ba2c <_ZNSt4listIP5CUserSaIS1_EED1Ev>
 85c4f4b:	83 c4 10             	add    $0x10,%esp
 85c4f4e:	5b                   	pop    %ebx
 85c4f4f:	5e                   	pop    %esi
 85c4f50:	5d                   	pop    %ebp
 85c4f51:	c3                   	ret

```

```c
// private_store::CPrivateStore::~CPrivateStore @ 0x85c4ecc

/* private_store::CPrivateStore::~CPrivateStore() */

void __thiscall private_store::CPrivateStore::~CPrivateStore(CPrivateStore *this)

{
  *(undefined ***)this = &PTR_CreatePrivateStore_08cbeb68;
  *(undefined ***)(this + 4) = &PTR_BuyPrivateStoreItem_08cbeb98;
                    /* try { // try from 085c4ef0 to 085c4ef4 has its CatchHandler @ 085c4ef7 */
  std::string::~string((string *)(this + 0x48));
                    /* try { // try from 085c4f18 to 085c4f1c has its CatchHandler @ 085c4f1f */
  std::vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>>::
  ~vector((vector<private_store::PrivateStoreItem,std::allocator<private_store::PrivateStoreItem>> *
          )(this + 0x3c));
  std::list<CUser*,std::allocator<CUser*>>::~list
            ((list<CUser*,std::allocator<CUser*>> *)(this + 0x34));
  return;
}

```

