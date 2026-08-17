# private_store__CPrivateStorePos

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## put_object_info

```asm
// === 085cadf6 private_store::CPrivateStorePos::put_object_info  [0x085cadf6-0x85cb274] ===
 85cadf6:	55                   	push   %ebp
 85cadf7:	89 e5                	mov    %esp,%ebp
 85cadf9:	57                   	push   %edi
 85cadfa:	56                   	push   %esi
 85cadfb:	53                   	push   %ebx
 85cadfc:	83 ec 7c             	sub    $0x7c,%esp
 85cadff:	8b 45 08             	mov    0x8(%ebp),%eax
 85cae02:	8b 40 14             	mov    0x14(%eax),%eax
 85cae05:	85 c0                	test   %eax,%eax
 85cae07:	75 40                	jne    85cae49 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x53>
 85cae09:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85cae10:	00 
 85cae11:	c7 44 24 08 0b 0d 00 	movl   $0xd0b,0x8(%esp)
 85cae18:	00 
 85cae19:	c7 44 24 04 20 e5 cb 	movl   $0x8cbe520,0x4(%esp)
 85cae20:	08 
 85cae21:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85cae24:	89 04 24             	mov    %eax,(%esp)
 85cae27:	e8 ec 48 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85cae2c:	c7 44 24 04 04 d7 cb 	movl   $0x8cbd704,0x4(%esp)
 85cae33:	08 
 85cae34:	8d 45 a8             	lea    -0x58(%ebp),%eax
 85cae37:	89 04 24             	mov    %eax,(%esp)
 85cae3a:	e8 49 49 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85cae3f:	b8 00 00 00 00       	mov    $0x0,%eax
 85cae44:	e9 24 04 00 00       	jmp    85cb26d <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x477>
 85cae49:	8b 45 08             	mov    0x8(%ebp),%eax
 85cae4c:	8b 40 14             	mov    0x14(%eax),%eax
 85cae4f:	89 04 24             	mov    %eax,(%esp)
 85cae52:	e8 81 97 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cae57:	3c 01                	cmp    $0x1,%al
 85cae59:	74 19                	je     85cae74 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x7e>
 85cae5b:	8b 45 08             	mov    0x8(%ebp),%eax
 85cae5e:	8b 40 14             	mov    0x14(%eax),%eax
 85cae61:	89 04 24             	mov    %eax,(%esp)
 85cae64:	e8 6f 97 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cae69:	3c 02                	cmp    $0x2,%al
 85cae6b:	74 07                	je     85cae74 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x7e>
 85cae6d:	b8 01 00 00 00       	mov    $0x1,%eax
 85cae72:	eb 05                	jmp    85cae79 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x83>
 85cae74:	b8 00 00 00 00       	mov    $0x0,%eax
 85cae79:	84 c0                	test   %al,%al
 85cae7b:	74 55                	je     85caed2 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0xdc>
 85cae7d:	8b 45 08             	mov    0x8(%ebp),%eax
 85cae80:	8b 40 14             	mov    0x14(%eax),%eax
 85cae83:	89 04 24             	mov    %eax,(%esp)
 85cae86:	e8 4d 97 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cae8b:	0f b6 d8             	movzbl %al,%ebx
 85cae8e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85cae95:	00 
 85cae96:	c7 44 24 08 11 0d 00 	movl   $0xd11,0x8(%esp)
 85cae9d:	00 
 85cae9e:	c7 44 24 04 20 e5 cb 	movl   $0x8cbe520,0x4(%esp)
 85caea5:	08 
 85caea6:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85caea9:	89 04 24             	mov    %eax,(%esp)
 85caeac:	e8 67 48 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85caeb1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85caeb5:	c7 44 24 04 2c d7 cb 	movl   $0x8cbd72c,0x4(%esp)
 85caebc:	08 
 85caebd:	8d 45 b8             	lea    -0x48(%ebp),%eax
 85caec0:	89 04 24             	mov    %eax,(%esp)
 85caec3:	e8 c0 48 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85caec8:	b8 00 00 00 00       	mov    $0x0,%eax
 85caecd:	e9 9b 03 00 00       	jmp    85cb26d <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x477>
 85caed2:	8b 45 08             	mov    0x8(%ebp),%eax
 85caed5:	8b 40 14             	mov    0x14(%eax),%eax
 85caed8:	89 04 24             	mov    %eax,(%esp)
 85caedb:	e8 9c 09 00 00       	call   85cb87c <_ZN13private_store13CPrivateStore9GetSellerEv>
 85caee0:	85 c0                	test   %eax,%eax
 85caee2:	0f 94 c0             	sete   %al
 85caee5:	84 c0                	test   %al,%al
 85caee7:	74 71                	je     85caf5a <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x164>
 85caee9:	8b 45 08             	mov    0x8(%ebp),%eax
 85caeec:	8b 40 14             	mov    0x14(%eax),%eax
 85caeef:	89 04 24             	mov    %eax,(%esp)
 85caef2:	e8 dd 09 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85caef7:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85caefb:	0f b6 f0             	movzbl %al,%esi
 85caefe:	8b 45 08             	mov    0x8(%ebp),%eax
 85caf01:	8b 40 14             	mov    0x14(%eax),%eax
 85caf04:	89 04 24             	mov    %eax,(%esp)
 85caf07:	e8 c8 09 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85caf0c:	0f b6 00             	movzbl (%eax),%eax
 85caf0f:	0f b6 d8             	movzbl %al,%ebx
 85caf12:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85caf19:	00 
 85caf1a:	c7 44 24 08 17 0d 00 	movl   $0xd17,0x8(%esp)
 85caf21:	00 
 85caf22:	c7 44 24 04 20 e5 cb 	movl   $0x8cbe520,0x4(%esp)
 85caf29:	08 
 85caf2a:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85caf2d:	89 04 24             	mov    %eax,(%esp)
 85caf30:	e8 e3 47 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85caf35:	89 74 24 0c          	mov    %esi,0xc(%esp)
 85caf39:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85caf3d:	c7 44 24 04 54 d7 cb 	movl   $0x8cbd754,0x4(%esp)
 85caf44:	08 
 85caf45:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85caf48:	89 04 24             	mov    %eax,(%esp)
 85caf4b:	e8 38 48 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85caf50:	b8 00 00 00 00       	mov    $0x0,%eax
 85caf55:	e9 13 03 00 00       	jmp    85cb26d <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x477>
 85caf5a:	8b 45 08             	mov    0x8(%ebp),%eax
 85caf5d:	8b 40 14             	mov    0x14(%eax),%eax
 85caf60:	89 04 24             	mov    %eax,(%esp)
 85caf63:	e8 7c 96 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85caf68:	83 f0 01             	xor    $0x1,%eax
 85caf6b:	84 c0                	test   %al,%al
 85caf6d:	0f 84 57 01 00 00    	je     85cb0ca <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x2d4>
 85caf73:	8b 45 08             	mov    0x8(%ebp),%eax
 85caf76:	8b 40 14             	mov    0x14(%eax),%eax
 85caf79:	89 04 24             	mov    %eax,(%esp)
 85caf7c:	e8 53 09 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85caf81:	0f b6 00             	movzbl (%eax),%eax
 85caf84:	0f b6 d8             	movzbl %al,%ebx
 85caf87:	8b 45 08             	mov    0x8(%ebp),%eax
 85caf8a:	8b 40 14             	mov    0x14(%eax),%eax
 85caf8d:	89 04 24             	mov    %eax,(%esp)
 85caf90:	e8 e7 08 00 00       	call   85cb87c <_ZN13private_store13CPrivateStore9GetSellerEv>
 85caf95:	89 04 24             	mov    %eax,(%esp)
 85caf98:	e8 c7 a5 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85caf9d:	0f be c0             	movsbl %al,%eax
 85cafa0:	39 c3                	cmp    %eax,%ebx
 85cafa2:	75 37                	jne    85cafdb <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x1e5>
 85cafa4:	8b 45 08             	mov    0x8(%ebp),%eax
 85cafa7:	8b 40 14             	mov    0x14(%eax),%eax
 85cafaa:	89 04 24             	mov    %eax,(%esp)
 85cafad:	e8 22 09 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cafb2:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85cafb6:	0f b6 d8             	movzbl %al,%ebx
 85cafb9:	8b 45 08             	mov    0x8(%ebp),%eax
 85cafbc:	8b 40 14             	mov    0x14(%eax),%eax
 85cafbf:	89 04 24             	mov    %eax,(%esp)
 85cafc2:	e8 b5 08 00 00       	call   85cb87c <_ZN13private_store13CPrivateStore9GetSellerEv>
 85cafc7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85cafce:	00 
 85cafcf:	89 04 24             	mov    %eax,(%esp)
 85cafd2:	e8 e7 63 0b 00       	call   86813be <_ZN5CUser8get_areaEb>
 85cafd7:	39 c3                	cmp    %eax,%ebx
 85cafd9:	74 07                	je     85cafe2 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x1ec>
 85cafdb:	b8 01 00 00 00       	mov    $0x1,%eax
 85cafe0:	eb 05                	jmp    85cafe7 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x1f1>
 85cafe2:	b8 00 00 00 00       	mov    $0x0,%eax
 85cafe7:	84 c0                	test   %al,%al
 85cafe9:	0f 84 db 00 00 00    	je     85cb0ca <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x2d4>
 85cafef:	8b 45 08             	mov    0x8(%ebp),%eax
 85caff2:	8b 40 14             	mov    0x14(%eax),%eax
 85caff5:	89 04 24             	mov    %eax,(%esp)
 85caff8:	e8 7f 08 00 00       	call   85cb87c <_ZN13private_store13CPrivateStore9GetSellerEv>
 85caffd:	89 04 24             	mov    %eax,(%esp)
 85cb000:	e8 77 f3 b0 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 85cb005:	0f b7 c0             	movzwl %ax,%eax
 85cb008:	89 45 a0             	mov    %eax,-0x60(%ebp)
 85cb00b:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb00e:	8b 40 14             	mov    0x14(%eax),%eax
 85cb011:	89 04 24             	mov    %eax,(%esp)
 85cb014:	e8 63 08 00 00       	call   85cb87c <_ZN13private_store13CPrivateStore9GetSellerEv>
 85cb019:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85cb020:	00 
 85cb021:	89 04 24             	mov    %eax,(%esp)
 85cb024:	e8 95 63 0b 00       	call   86813be <_ZN5CUser8get_areaEb>
 85cb029:	89 c3                	mov    %eax,%ebx
 85cb02b:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb02e:	8b 40 14             	mov    0x14(%eax),%eax
 85cb031:	89 04 24             	mov    %eax,(%esp)
 85cb034:	e8 43 08 00 00       	call   85cb87c <_ZN13private_store13CPrivateStore9GetSellerEv>
 85cb039:	89 04 24             	mov    %eax,(%esp)
 85cb03c:	e8 23 a5 07 00       	call   8645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>
 85cb041:	0f be c0             	movsbl %al,%eax
 85cb044:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 85cb047:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb04a:	8b 40 14             	mov    0x14(%eax),%eax
 85cb04d:	89 04 24             	mov    %eax,(%esp)
 85cb050:	e8 7f 08 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cb055:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85cb059:	0f b6 f8             	movzbl %al,%edi
 85cb05c:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb05f:	8b 40 14             	mov    0x14(%eax),%eax
 85cb062:	89 04 24             	mov    %eax,(%esp)
 85cb065:	e8 6a 08 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cb06a:	0f b6 00             	movzbl (%eax),%eax
 85cb06d:	0f b6 f0             	movzbl %al,%esi
 85cb070:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 85cb077:	00 
 85cb078:	c7 44 24 08 23 0d 00 	movl   $0xd23,0x8(%esp)
 85cb07f:	00 
 85cb080:	c7 44 24 04 20 e5 cb 	movl   $0x8cbe520,0x4(%esp)
 85cb087:	08 
 85cb088:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85cb08b:	89 04 24             	mov    %eax,(%esp)
 85cb08e:	e8 85 46 f8 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85cb093:	8b 45 a0             	mov    -0x60(%ebp),%eax
 85cb096:	89 44 24 18          	mov    %eax,0x18(%esp)
 85cb09a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 85cb09e:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 85cb0a1:	89 44 24 10          	mov    %eax,0x10(%esp)
 85cb0a5:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 85cb0a9:	89 74 24 08          	mov    %esi,0x8(%esp)
 85cb0ad:	c7 44 24 04 88 d7 cb 	movl   $0x8cbd788,0x4(%esp)
 85cb0b4:	08 
 85cb0b5:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85cb0b8:	89 04 24             	mov    %eax,(%esp)
 85cb0bb:	e8 c8 46 f8 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85cb0c0:	b8 00 00 00 00       	mov    $0x0,%eax
 85cb0c5:	e9 a3 01 00 00       	jmp    85cb26d <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x477>
 85cb0ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb0cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85cb0d4:	00 
 85cb0d5:	89 04 24             	mov    %eax,(%esp)
 85cb0d8:	e8 43 08 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85cb0dd:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb0e0:	8b 40 14             	mov    0x14(%eax),%eax
 85cb0e3:	89 04 24             	mov    %eax,(%esp)
 85cb0e6:	e8 a9 07 00 00       	call   85cb894 <_ZN13private_store13CPrivateStore14GetSellerIndexEv>
 85cb0eb:	0f b7 d0             	movzwl %ax,%edx
 85cb0ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb0f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb0f5:	89 04 24             	mov    %eax,(%esp)
 85cb0f8:	e8 a7 ed b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85cb0fd:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb100:	8b 40 14             	mov    0x14(%eax),%eax
 85cb103:	89 04 24             	mov    %eax,(%esp)
 85cb106:	e8 7d 07 00 00       	call   85cb888 <_ZN13private_store13CPrivateStore10GetSubjectEv>
 85cb10b:	89 04 24             	mov    %eax,(%esp)
 85cb10e:	e8 5d b5 13 00       	call   8706670 <_ZNKSs6lengthEv>
 85cb113:	89 c2                	mov    %eax,%edx
 85cb115:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb118:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb11c:	89 04 24             	mov    %eax,(%esp)
 85cb11f:	e8 18 08 b0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 85cb124:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb127:	8b 40 14             	mov    0x14(%eax),%eax
 85cb12a:	89 04 24             	mov    %eax,(%esp)
 85cb12d:	e8 56 07 00 00       	call   85cb888 <_ZN13private_store13CPrivateStore10GetSubjectEv>
 85cb132:	89 04 24             	mov    %eax,(%esp)
 85cb135:	e8 36 b5 13 00       	call   8706670 <_ZNKSs6lengthEv>
 85cb13a:	89 c3                	mov    %eax,%ebx
 85cb13c:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb13f:	8b 40 14             	mov    0x14(%eax),%eax
 85cb142:	89 04 24             	mov    %eax,(%esp)
 85cb145:	e8 3e 07 00 00       	call   85cb888 <_ZN13private_store13CPrivateStore10GetSubjectEv>
 85cb14a:	89 04 24             	mov    %eax,(%esp)
 85cb14d:	e8 9e b3 13 00       	call   87064f0 <_ZNKSs5c_strEv>
 85cb152:	8b 55 0c             	mov    0xc(%ebp),%edx
 85cb155:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85cb159:	89 44 24 04          	mov    %eax,0x4(%esp)
 85cb15d:	89 14 24             	mov    %edx,(%esp)
 85cb160:	e8 0b 06 c6 ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 85cb165:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb168:	8b 40 14             	mov    0x14(%eax),%eax
 85cb16b:	89 04 24             	mov    %eax,(%esp)
 85cb16e:	e8 65 94 c6 ff       	call   82345d8 <_ZN13private_store13CPrivateStore8GetStateEv>
 85cb173:	3c 01                	cmp    $0x1,%al
 85cb175:	0f 95 c0             	setne  %al
 85cb178:	0f b6 d0             	movzbl %al,%edx
 85cb17b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb17e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb182:	89 04 24             	mov    %eax,(%esp)
 85cb185:	e8 96 07 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85cb18a:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb18d:	8b 40 14             	mov    0x14(%eax),%eax
 85cb190:	89 04 24             	mov    %eax,(%esp)
 85cb193:	e8 3c 07 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cb198:	0f b6 00             	movzbl (%eax),%eax
 85cb19b:	0f b6 d0             	movzbl %al,%edx
 85cb19e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb1a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb1a5:	89 04 24             	mov    %eax,(%esp)
 85cb1a8:	e8 73 07 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85cb1ad:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb1b0:	8b 40 14             	mov    0x14(%eax),%eax
 85cb1b3:	89 04 24             	mov    %eax,(%esp)
 85cb1b6:	e8 19 07 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cb1bb:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 85cb1bf:	0f b6 d0             	movzbl %al,%edx
 85cb1c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb1c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb1c9:	89 04 24             	mov    %eax,(%esp)
 85cb1cc:	e8 4f 07 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85cb1d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb1d4:	8b 40 14             	mov    0x14(%eax),%eax
 85cb1d7:	89 04 24             	mov    %eax,(%esp)
 85cb1da:	e8 f5 06 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cb1df:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 85cb1e3:	0f bf d0             	movswl %ax,%edx
 85cb1e6:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb1e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb1ed:	89 04 24             	mov    %eax,(%esp)
 85cb1f0:	e8 af ec b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85cb1f5:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb1f8:	8b 40 14             	mov    0x14(%eax),%eax
 85cb1fb:	89 04 24             	mov    %eax,(%esp)
 85cb1fe:	e8 d1 06 00 00       	call   85cb8d4 <_ZN13private_store13CPrivateStore6GetPosEv>
 85cb203:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85cb207:	0f bf d0             	movswl %ax,%edx
 85cb20a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb20d:	89 54 24 04          	mov    %edx,0x4(%esp)
 85cb211:	89 04 24             	mov    %eax,(%esp)
 85cb214:	e8 8b ec b0 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 85cb219:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb21c:	8b 40 14             	mov    0x14(%eax),%eax
 85cb21f:	89 04 24             	mov    %eax,(%esp)
 85cb222:	e8 bd 93 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85cb227:	84 c0                	test   %al,%al
 85cb229:	74 15                	je     85cb240 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x44a>
 85cb22b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb22e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85cb235:	00 
 85cb236:	89 04 24             	mov    %eax,(%esp)
 85cb239:	e8 e2 06 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85cb23e:	eb 28                	jmp    85cb268 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x472>
 85cb240:	8b 45 08             	mov    0x8(%ebp),%eax
 85cb243:	8b 40 14             	mov    0x14(%eax),%eax
 85cb246:	89 04 24             	mov    %eax,(%esp)
 85cb249:	e8 96 93 c6 ff       	call   82345e4 <_ZN13private_store13CPrivateStore13isDollCreatedEv>
 85cb24e:	83 f0 01             	xor    $0x1,%eax
 85cb251:	84 c0                	test   %al,%al
 85cb253:	74 13                	je     85cb268 <_ZN13private_store16CPrivateStorePos15put_object_infoER11PacketGuard+0x472>
 85cb255:	8b 45 0c             	mov    0xc(%ebp),%eax
 85cb258:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85cb25f:	00 
 85cb260:	89 04 24             	mov    %eax,(%esp)
 85cb263:	e8 b8 06 b0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85cb268:	b8 01 00 00 00       	mov    $0x1,%eax
 85cb26d:	83 c4 7c             	add    $0x7c,%esp
 85cb270:	5b                   	pop    %ebx
 85cb271:	5e                   	pop    %esi
 85cb272:	5f                   	pop    %edi
 85cb273:	5d                   	pop    %ebp
 85cb274:	c3                   	ret

```

```c
// private_store::CPrivateStorePos::put_object_info @ 0x85cadf6

/* private_store::CPrivateStorePos::put_object_info(PacketGuard&) */

undefined4 __thiscall
private_store::CPrivateStorePos::put_object_info(CPrivateStorePos *this,PacketGuard *param_1)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  CUserCharacInfo *pCVar8;
  CUser *pCVar9;
  undefined4 uVar10;
  string *psVar11;
  char *pcVar12;
  cMyTrace local_5c [16];
  cMyTrace local_4c [16];
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  if (*(int *)(this + 0x14) == 0) {
    cMyTrace::cMyTrace(local_5c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd0b,0);
    cMyTrace::operator()(local_5c,"NOTEXIST_ERROR : private_store(null)");
    return 0;
  }
  cVar4 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14));
  if ((cVar4 == '\x01') ||
     (cVar4 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14)), cVar4 == '\x02')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14));
    cMyTrace::cMyTrace(local_4c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd11,0);
    cMyTrace::operator()(local_4c,"STATE_ERROR : private_store_state(%d)",uVar5 & 0xff);
    return 0;
  }
  iVar6 = CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
  if (iVar6 == 0) {
    iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar1 = *(byte *)(iVar6 + 1);
    pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar2 = *pbVar7;
    cMyTrace::cMyTrace(local_3c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd17,0);
    cMyTrace::operator()
              (local_3c,"NOTEXIST_ERROR : private_store(%d, %d) user(null)",(uint)bVar2,(uint)bVar1)
    ;
    return 0;
  }
  cVar4 = CPrivateStore::isDollCreated(*(CPrivateStore **)(this + 0x14));
  if (cVar4 == '\x01') goto LAB_085cb0ca;
  pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  bVar1 = *pbVar7;
  pCVar8 = (CUserCharacInfo *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
  cVar4 = CUserCharacInfo::getCurCharacVill(pCVar8);
  if ((uint)bVar1 == (int)cVar4) {
    iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar1 = *(byte *)(iVar6 + 1);
    pCVar9 = (CUser *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    uVar5 = CUser::get_area(pCVar9,false);
    if (bVar1 != uVar5) goto LAB_085cafdb;
    bVar3 = false;
  }
  else {
LAB_085cafdb:
    bVar3 = true;
  }
  if (bVar3) {
    pCVar9 = (CUser *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    uVar5 = CUser::get_unique_id(pCVar9);
    pCVar9 = (CUser *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    uVar10 = CUser::get_area(pCVar9,false);
    pCVar8 = (CUserCharacInfo *)CPrivateStore::GetSeller(*(CPrivateStore **)(this + 0x14));
    cVar4 = CUserCharacInfo::getCurCharacVill(pCVar8);
    iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar1 = *(byte *)(iVar6 + 1);
    pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
    bVar2 = *pbVar7;
    cMyTrace::cMyTrace(local_2c,
                       "virtual bool private_store::CPrivateStorePos::put_object_info(PacketGuard&)"
                       ,0xd23,0);
    cMyTrace::operator()
              (local_2c,"DIFFERENT_ERROR : private_store(%d,%d), user(%d,%d), uid(%d)",(uint)bVar2,
               (uint)bVar1,(int)cVar4,uVar10,uVar5 & 0xffff);
    return 0;
  }
LAB_085cb0ca:
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  uVar5 = CPrivateStore::GetSellerIndex(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar5 & 0xffff);
  psVar11 = (string *)CPrivateStore::GetSubject(*(CPrivateStore **)(this + 0x14));
  iVar6 = std::string::length(psVar11);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar6);
  psVar11 = (string *)CPrivateStore::GetSubject(*(CPrivateStore **)(this + 0x14));
  iVar6 = std::string::length(psVar11);
  psVar11 = (string *)CPrivateStore::GetSubject(*(CPrivateStore **)(this + 0x14));
  pcVar12 = (char *)std::string::c_str(psVar11);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,pcVar12,iVar6);
  cVar4 = CPrivateStore::GetState(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(cVar4 != '\x01'));
  pbVar7 = (byte *)CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*pbVar7);
  iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)*(byte *)(iVar6 + 1));
  iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(iVar6 + 2));
  iVar6 = CPrivateStore::GetPos(*(CPrivateStore **)(this + 0x14));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(int)*(short *)(iVar6 + 4));
  cVar4 = CPrivateStore::isDollCreated(*(CPrivateStore **)(this + 0x14));
  if (cVar4 == '\0') {
    cVar4 = CPrivateStore::isDollCreated(*(CPrivateStore **)(this + 0x14));
    if (cVar4 != '\x01') {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,1);
  }
  return 1;
}

```

