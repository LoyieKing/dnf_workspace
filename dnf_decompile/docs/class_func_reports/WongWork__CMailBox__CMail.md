# WongWork__CMailBox__CMail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Init

```asm
// === 085519e2 WongWork::CMailBox::CMail::Init  [0x085519e2-0x85519fd] ===
 85519e2:	55                   	push   %ebp
 85519e3:	89 e5                	mov    %esp,%ebp
 85519e5:	83 ec 18             	sub    $0x18,%esp
 85519e8:	8b 45 08             	mov    0x8(%ebp),%eax
 85519eb:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85519f1:	8b 45 08             	mov    0x8(%ebp),%eax
 85519f4:	89 04 24             	mov    %eax,(%esp)
 85519f7:	e8 02 00 00 00       	call   85519fe <_ZN8WongWork8CMailBox5CMail12ResetPackageEv>
 85519fc:	c9                   	leave
 85519fd:	c3                   	ret

```

```c
// WongWork::CMailBox::CMail::Init @ 0x85519e2

/* WongWork::CMailBox::CMail::Init() */

void __thiscall WongWork::CMailBox::CMail::Init(CMail *this)

{
  *(undefined4 *)this = 0;
  ResetPackage(this);
  return;
}

```

---

## MakePacket

```asm
// === 08551a36 WongWork::CMailBox::CMail::MakePacket  [0x08551a36-0x8551d97] ===
 8551a36:	55                   	push   %ebp
 8551a37:	89 e5                	mov    %esp,%ebp
 8551a39:	53                   	push   %ebx
 8551a3a:	83 ec 24             	sub    $0x24,%esp
 8551a3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a40:	8b 00                	mov    (%eax),%eax
 8551a42:	89 c2                	mov    %eax,%edx
 8551a44:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551a47:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551a4b:	89 04 24             	mov    %eax,(%esp)
 8551a4e:	e8 e9 9e b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551a53:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a56:	83 c0 08             	add    $0x8,%eax
 8551a59:	89 04 24             	mov    %eax,(%esp)
 8551a5c:	e8 4f c9 b2 ff       	call   807e3b0 <strlen@plt>
 8551a61:	89 c2                	mov    %eax,%edx
 8551a63:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551a66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551a6a:	89 04 24             	mov    %eax,(%esp)
 8551a6d:	e8 ca 9e b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551a72:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a75:	83 c0 08             	add    $0x8,%eax
 8551a78:	89 04 24             	mov    %eax,(%esp)
 8551a7b:	e8 30 c9 b2 ff       	call   807e3b0 <strlen@plt>
 8551a80:	89 c2                	mov    %eax,%edx
 8551a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a85:	8d 48 08             	lea    0x8(%eax),%ecx
 8551a88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551a8b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8551a8f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8551a93:	89 04 24             	mov    %eax,(%esp)
 8551a96:	e8 d5 9c cd ff       	call   822b770 <_ZN18InterfacePacketBuf7put_strEPKci>
 8551a9b:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a9e:	8b 40 28             	mov    0x28(%eax),%eax
 8551aa1:	89 c2                	mov    %eax,%edx
 8551aa3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551aa6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551aaa:	89 04 24             	mov    %eax,(%esp)
 8551aad:	e8 8a 9e b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551ab2:	8b 45 08             	mov    0x8(%ebp),%eax
 8551ab5:	8b 40 2e             	mov    0x2e(%eax),%eax
 8551ab8:	89 c2                	mov    %eax,%edx
 8551aba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551abd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551ac1:	89 04 24             	mov    %eax,(%esp)
 8551ac4:	e8 73 9e b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551ac9:	8b 45 08             	mov    0x8(%ebp),%eax
 8551acc:	0f b6 40 2c          	movzbl 0x2c(%eax),%eax
 8551ad0:	84 c0                	test   %al,%al
 8551ad2:	74 07                	je     8551adb <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0xa5>
 8551ad4:	b8 01 00 00 00       	mov    $0x1,%eax
 8551ad9:	eb 05                	jmp    8551ae0 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0xaa>
 8551adb:	b8 00 00 00 00       	mov    $0x0,%eax
 8551ae0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8551ae3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551ae7:	89 14 24             	mov    %edx,(%esp)
 8551aea:	e8 31 9e b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8551aef:	8b 45 08             	mov    0x8(%ebp),%eax
 8551af2:	89 04 24             	mov    %eax,(%esp)
 8551af5:	e8 a2 5a 00 00       	call   855759c <_ZNK8WongWork8CMailBox5CMail15isAvatarPackageEv>
 8551afa:	84 c0                	test   %al,%al
 8551afc:	74 3d                	je     8551b3b <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x105>
 8551afe:	8b 45 08             	mov    0x8(%ebp),%eax
 8551b01:	8b 58 33             	mov    0x33(%eax),%ebx
 8551b04:	8b 45 14             	mov    0x14(%ebp),%eax
 8551b07:	89 04 24             	mov    %eax,(%esp)
 8551b0a:	e8 6f 87 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8551b0f:	89 04 24             	mov    %eax,(%esp)
 8551b12:	e8 5f ba b8 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8551b17:	8b 55 10             	mov    0x10(%ebp),%edx
 8551b1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8551b1e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8551b22:	89 04 24             	mov    %eax,(%esp)
 8551b25:	e8 26 7d da ff       	call   82f9850 <_ZNK8WongWork14CAvatarItemMgr13GetRemainDateEii>
 8551b2a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8551b2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551b31:	89 14 24             	mov    %edx,(%esp)
 8551b34:	e8 03 9e b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551b39:	eb 15                	jmp    8551b50 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x11a>
 8551b3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8551b3e:	8b 50 33             	mov    0x33(%eax),%edx
 8551b41:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551b44:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551b48:	89 04 24             	mov    %eax,(%esp)
 8551b4b:	e8 ec 9d b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551b50:	8b 45 08             	mov    0x8(%ebp),%eax
 8551b53:	0f b7 40 37          	movzwl 0x37(%eax),%eax
 8551b57:	0f b7 d0             	movzwl %ax,%edx
 8551b5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551b5d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551b61:	89 04 24             	mov    %eax,(%esp)
 8551b64:	e8 3b 83 b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8551b69:	8b 45 08             	mov    0x8(%ebp),%eax
 8551b6c:	83 c0 2c             	add    $0x2c,%eax
 8551b6f:	89 04 24             	mov    %eax,(%esp)
 8551b72:	e8 65 ec bf ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 8551b77:	0f b6 d0             	movzbl %al,%edx
 8551b7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551b7d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551b81:	89 04 24             	mov    %eax,(%esp)
 8551b84:	e8 97 9d b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8551b89:	8b 45 08             	mov    0x8(%ebp),%eax
 8551b8c:	8b 40 39             	mov    0x39(%eax),%eax
 8551b8f:	89 c2                	mov    %eax,%edx
 8551b91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551b94:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551b98:	89 04 24             	mov    %eax,(%esp)
 8551b9b:	e8 9c 9d b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551ba0:	8b 45 08             	mov    0x8(%ebp),%eax
 8551ba3:	83 c0 3d             	add    $0x3d,%eax
 8551ba6:	89 04 24             	mov    %eax,(%esp)
 8551ba9:	e8 84 eb bf ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8551bae:	0f b6 d0             	movzbl %al,%edx
 8551bb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551bb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551bb8:	89 04 24             	mov    %eax,(%esp)
 8551bbb:	e8 60 9d b7 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8551bc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8551bc3:	83 c0 3d             	add    $0x3d,%eax
 8551bc6:	89 04 24             	mov    %eax,(%esp)
 8551bc9:	e8 a4 eb bf ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8551bce:	0f b7 d0             	movzwl %ax,%edx
 8551bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551bd4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551bd8:	89 04 24             	mov    %eax,(%esp)
 8551bdb:	e8 c4 82 b8 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8551be0:	8b 45 08             	mov    0x8(%ebp),%eax
 8551be3:	0f b6 40 2d          	movzbl 0x2d(%eax),%eax
 8551be7:	3c 05                	cmp    $0x5,%al
 8551be9:	75 3b                	jne    8551c26 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x1f0>
 8551beb:	8b 45 08             	mov    0x8(%ebp),%eax
 8551bee:	8b 58 33             	mov    0x33(%eax),%ebx
 8551bf1:	8b 45 14             	mov    0x14(%ebp),%eax
 8551bf4:	89 04 24             	mov    %eax,(%esp)
 8551bf7:	e8 82 86 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8551bfc:	89 04 24             	mov    %eax,(%esp)
 8551bff:	e8 04 58 c6 ff       	call   81b7408 <_ZNK10CInventory15GetCreatureMgrREv>
 8551c04:	8b 55 10             	mov    0x10(%ebp),%edx
 8551c07:	89 54 24 08          	mov    %edx,0x8(%esp)
 8551c0b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8551c0f:	89 04 24             	mov    %eax,(%esp)
 8551c12:	e8 75 bc de ff       	call   833d88c <_ZNK13user_creature12CCreatureMgr19getRemainTempPeriodEii>
 8551c17:	8b 55 0c             	mov    0xc(%ebp),%edx
 8551c1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551c1e:	89 14 24             	mov    %edx,(%esp)
 8551c21:	e8 16 9d b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551c26:	8b 45 08             	mov    0x8(%ebp),%eax
 8551c29:	8d 50 2c             	lea    0x2c(%eax),%edx
 8551c2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551c2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551c33:	89 04 24             	mov    %eax,(%esp)
 8551c36:	e8 53 ed bf ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 8551c3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8551c3e:	89 04 24             	mov    %eax,(%esp)
 8551c41:	e8 56 59 00 00       	call   855759c <_ZNK8WongWork8CMailBox5CMail15isAvatarPackageEv>
 8551c46:	84 c0                	test   %al,%al
 8551c48:	0f 84 d3 00 00 00    	je     8551d21 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x2eb>
 8551c4e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551c51:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 8551c58:	00 
 8551c59:	89 04 24             	mov    %eax,(%esp)
 8551c5c:	e8 db 9c b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551c61:	8b 45 08             	mov    0x8(%ebp),%eax
 8551c64:	8b 58 33             	mov    0x33(%eax),%ebx
 8551c67:	8b 45 14             	mov    0x14(%ebp),%eax
 8551c6a:	89 04 24             	mov    %eax,(%esp)
 8551c6d:	e8 0c 86 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8551c72:	89 04 24             	mov    %eax,(%esp)
 8551c75:	e8 fc b8 b8 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8551c7a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8551c7e:	89 04 24             	mov    %eax,(%esp)
 8551c81:	e8 72 7c da ff       	call   82f98f8 <_ZNK8WongWork14CAvatarItemMgr18getJewelSocketDataEi>
 8551c86:	89 c2                	mov    %eax,%edx
 8551c88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551c8b:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8551c92:	00 
 8551c93:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551c97:	89 04 24             	mov    %eax,(%esp)
 8551c9a:	e8 cb ec bf ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8551c9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8551ca2:	8b 58 33             	mov    0x33(%eax),%ebx
 8551ca5:	8b 45 14             	mov    0x14(%ebp),%eax
 8551ca8:	89 04 24             	mov    %eax,(%esp)
 8551cab:	e8 ce 85 b8 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8551cb0:	89 04 24             	mov    %eax,(%esp)
 8551cb3:	e8 be b8 b8 ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 8551cb8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8551cbc:	89 04 24             	mov    %eax,(%esp)
 8551cbf:	e8 6a 7c da ff       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 8551cc4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8551cc7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551cca:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8551cd1:	00 
 8551cd2:	89 04 24             	mov    %eax,(%esp)
 8551cd5:	e8 62 9c b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551cda:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8551cde:	74 1c                	je     8551cfc <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x2c6>
 8551ce0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8551ce3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551ce6:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8551ced:	00 
 8551cee:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551cf2:	89 04 24             	mov    %eax,(%esp)
 8551cf5:	e8 70 ec bf ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8551cfa:	eb 25                	jmp    8551d21 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x2eb>
 8551cfc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8551cff:	89 04 24             	mov    %eax,(%esp)
 8551d02:	e8 17 25 de ff       	call   833421e <_ZN23stAvatarExpansionInfo_t4initEv>
 8551d07:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8551d0a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551d0d:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8551d14:	00 
 8551d15:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551d19:	89 04 24             	mov    %eax,(%esp)
 8551d1c:	e8 49 ec bf ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 8551d21:	8b 45 08             	mov    0x8(%ebp),%eax
 8551d24:	89 04 24             	mov    %eax,(%esp)
 8551d27:	e8 64 58 00 00       	call   8557590 <_ZNK8WongWork8CMailBox5CMail9isUnlimitEv>
 8551d2c:	84 c0                	test   %al,%al
 8551d2e:	74 15                	je     8551d45 <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x30f>
 8551d30:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551d33:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8551d3a:	00 
 8551d3b:	89 04 24             	mov    %eax,(%esp)
 8551d3e:	e8 f9 9b b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551d43:	eb 36                	jmp    8551d7b <_ZNK8WongWork8CMailBox5CMail10MakePacketEP11PacketGuardlPK5CUser+0x345>
 8551d45:	8b 45 08             	mov    0x8(%ebp),%eax
 8551d48:	8b 40 6c             	mov    0x6c(%eax),%eax
 8551d4b:	2b 45 10             	sub    0x10(%ebp),%eax
 8551d4e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8551d51:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
 8551d58:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8551d5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8551d5f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8551d62:	89 04 24             	mov    %eax,(%esp)
 8551d65:	e8 ae c4 b3 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 8551d6a:	8b 10                	mov    (%eax),%edx
 8551d6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551d6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551d73:	89 04 24             	mov    %eax,(%esp)
 8551d76:	e8 c1 9b b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551d7b:	8b 45 08             	mov    0x8(%ebp),%eax
 8551d7e:	8b 40 78             	mov    0x78(%eax),%eax
 8551d81:	89 c2                	mov    %eax,%edx
 8551d83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8551d86:	89 54 24 04          	mov    %edx,0x4(%esp)
 8551d8a:	89 04 24             	mov    %eax,(%esp)
 8551d8d:	e8 aa 9b b7 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8551d92:	83 c4 24             	add    $0x24,%esp
 8551d95:	5b                   	pop    %ebx
 8551d96:	5d                   	pop    %ebp
 8551d97:	c3                   	ret

```

```c
// WongWork::CMailBox::CMail::MakePacket @ 0x8551a36

/* WongWork::CMailBox::CMail::MakePacket(PacketGuard*, long, CUser const*) const */

void __thiscall
WongWork::CMailBox::CMail::MakePacket(CMail *this,PacketGuard *param_1,long param_2,CUser *param_3)

{
  char cVar1;
  size_t sVar2;
  CInventory *pCVar3;
  CAvatarItemMgr *pCVar4;
  int iVar5;
  uint uVar6;
  CCreatureMgr *this_00;
  char *pcVar7;
  int *piVar8;
  stAvatarExpansionInfo_t local_1c [4];
  int local_18 [2];
  char *local_10;
  
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)this);
  sVar2 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,sVar2);
  sVar2 = strlen((char *)(this + 8));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)param_1,(char *)(this + 8),sVar2);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x28));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x2e));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,(uint)(this[0x2c] != (CMail)0x0));
  cVar1 = isAvatarPackage(this);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x33));
  }
  else {
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    pCVar4 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
    iVar5 = CAvatarItemMgr::GetRemainDate(pCVar4,iVar5,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar5);
  }
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,(uint)*(ushort *)(this + 0x37));
  uVar6 = Inven_Item::GetItemAttr((Inven_Item *)(this + 0x2c));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar6 & 0xff);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x39));
  uVar6 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + 0x3d));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,uVar6 & 0xff);
  uVar6 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + 0x3d));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)param_1,uVar6 & 0xffff);
  if (this[0x2d] == (CMail)0x5) {
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    this_00 = (CCreatureMgr *)CInventory::GetCreatureMgrR(pCVar3);
    iVar5 = user_creature::CCreatureMgr::getRemainTempPeriod(this_00,iVar5,param_2);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar5);
  }
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)param_1,(Inven_Item *)(this + 0x2c));
  cVar1 = isAvatarPackage(this);
  if (cVar1 != '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0x1e);
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    pCVar4 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
    pcVar7 = (char *)CAvatarItemMgr::getJewelSocketData(pCVar4,iVar5);
    InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,pcVar7,0x1e);
    iVar5 = *(int *)(this + 0x33);
    pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_3);
    pCVar4 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar3);
    local_10 = (char *)CAvatarItemMgr::GetExpansionInfo(pCVar4,iVar5);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,4);
    if (local_10 == (char *)0x0) {
      stAvatarExpansionInfo_t::init(local_1c);
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,(char *)local_1c,4);
    }
    else {
      InterfacePacketBuf::put_binary((InterfacePacketBuf *)param_1,local_10,4);
    }
  }
  cVar1 = isUnlimit(this);
  if (cVar1 == '\0') {
    local_18[0] = *(int *)(this + 0x6c) - param_2;
    local_18[1] = 1;
    piVar8 = std::max<int>(local_18 + 1,local_18);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*piVar8);
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,0);
  }
  InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,*(int *)(this + 0x78));
  return;
}

```

---

## ResetPackage

```asm
// === 085519fe WongWork::CMailBox::CMail::ResetPackage  [0x085519fe-0x8551a35] ===
 85519fe:	55                   	push   %ebp
 85519ff:	89 e5                	mov    %esp,%ebp
 8551a01:	83 ec 18             	sub    $0x18,%esp
 8551a04:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a07:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 8551a0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a0e:	83 c0 2c             	add    $0x2c,%eax
 8551a11:	89 04 24             	mov    %eax,(%esp)
 8551a14:	e8 bf 9d b7 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 8551a19:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a1c:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 8551a23:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a26:	c6 40 74 00          	movb   $0x0,0x74(%eax)
 8551a2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8551a2d:	c7 40 70 00 00 00 00 	movl   $0x0,0x70(%eax)
 8551a34:	c9                   	leave
 8551a35:	c3                   	ret

```

```c
// WongWork::CMailBox::CMail::ResetPackage @ 0x85519fe

/* WongWork::CMailBox::CMail::ResetPackage() */

void __thiscall WongWork::CMailBox::CMail::ResetPackage(CMail *this)

{
  this[8] = (CMail)0x0;
  Inven_Item::reset((Inven_Item *)(this + 0x2c));
  *(undefined4 *)(this + 0x28) = 0;
  this[0x74] = (CMail)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  return;
}

```

