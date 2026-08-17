# Dispatcher_CeraPackageOpen

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081e7cc2 Dispatcher_CeraPackageOpen::check_error  [0x081e7cc2-0x81e7d1b] ===
 81e7cc2:	55                   	push   %ebp
 81e7cc3:	89 e5                	mov    %esp,%ebp
 81e7cc5:	83 ec 28             	sub    $0x28,%esp
 81e7cc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7ccb:	89 04 24             	mov    %eax,(%esp)
 81e7cce:	e8 b9 26 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e7cd3:	83 f8 03             	cmp    $0x3,%eax
 81e7cd6:	0f 95 c0             	setne  %al
 81e7cd9:	84 c0                	test   %al,%al
 81e7cdb:	74 07                	je     81e7ce4 <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE+0x22>
 81e7cdd:	b8 13 00 00 00       	mov    $0x13,%eax
 81e7ce2:	eb 36                	jmp    81e7d1a <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE+0x58>
 81e7ce4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7ce7:	89 04 24             	mov    %eax,(%esp)
 81e7cea:	e8 0f 26 ef ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81e7cef:	84 c0                	test   %al,%al
 81e7cf1:	74 07                	je     81e7cfa <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE+0x38>
 81e7cf3:	b8 13 00 00 00       	mov    $0x13,%eax
 81e7cf8:	eb 20                	jmp    81e7d1a <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE+0x58>
 81e7cfa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7cfd:	89 04 24             	mov    %eax,(%esp)
 81e7d00:	e8 2d 87 f3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81e7d05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e7d08:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e7d0c:	75 07                	jne    81e7d15 <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE+0x53>
 81e7d0e:	b8 13 00 00 00       	mov    $0x13,%eax
 81e7d13:	eb 05                	jmp    81e7d1a <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE+0x58>
 81e7d15:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7d1a:	c9                   	leave
 81e7d1b:	c3                   	ret

```

```c
// Dispatcher_CeraPackageOpen::check_error @ 0x81e7cc2

/* Dispatcher_CeraPackageOpen::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_CeraPackageOpen::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    cVar1 = CUser::CheckInTrade((CUser *)param_2);
    if (cVar1 == '\0') {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar3 = 0x13;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0x13;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081e788a Dispatcher_CeraPackageOpen::process  [0x081e788a-0x81e7cc1] ===
 81e788a:	55                   	push   %ebp
 81e788b:	89 e5                	mov    %esp,%ebp
 81e788d:	56                   	push   %esi
 81e788e:	53                   	push   %ebx
 81e788f:	81 ec f0 00 00 00    	sub    $0xf0,%esp
 81e7895:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7898:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e789b:	8b 45 14             	mov    0x14(%ebp),%eax
 81e789e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e78a1:	8b 45 10             	mov    0x10(%ebp),%eax
 81e78a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e78a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e78ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e78af:	8b 45 08             	mov    0x8(%ebp),%eax
 81e78b2:	89 04 24             	mov    %eax,(%esp)
 81e78b5:	e8 08 04 00 00       	call   81e7cc2 <_ZN26Dispatcher_CeraPackageOpen11check_errorEP5CUserR8MSG_BASE>
 81e78ba:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81e78bd:	89 42 04             	mov    %eax,0x4(%edx)
 81e78c0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e78c3:	8b 40 04             	mov    0x4(%eax),%eax
 81e78c6:	85 c0                	test   %eax,%eax
 81e78c8:	74 2a                	je     81e78f4 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x6a>
 81e78ca:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e78cd:	8b 40 04             	mov    0x4(%eax),%eax
 81e78d0:	0f b6 c0             	movzbl %al,%eax
 81e78d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e78d7:	c7 44 24 04 07 02 00 	movl   $0x207,0x4(%esp)
 81e78de:	00 
 81e78df:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e78e2:	89 04 24             	mov    %eax,(%esp)
 81e78e5:	e8 58 46 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e78ea:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e78ef:	e9 c1 03 00 00       	jmp    81e7cb5 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x42b>
 81e78f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e78f7:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81e78fa:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e78fd:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e7901:	98                   	cwtl
 81e7902:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7906:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e790d:	00 
 81e790e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e7911:	89 04 24             	mov    %eax,(%esp)
 81e7914:	e8 29 f0 45 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81e7919:	84 c0                	test   %al,%al
 81e791b:	74 25                	je     81e7942 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0xb8>
 81e791d:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81e7924:	00 
 81e7925:	c7 44 24 04 07 02 00 	movl   $0x207,0x4(%esp)
 81e792c:	00 
 81e792d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7930:	89 04 24             	mov    %eax,(%esp)
 81e7933:	e8 0a 46 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e7938:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e793d:	e9 73 03 00 00       	jmp    81e7cb5 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x42b>
 81e7942:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e7945:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e7949:	0f bf d8             	movswl %ax,%ebx
 81e794c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e794f:	89 04 24             	mov    %eax,(%esp)
 81e7952:	e8 27 29 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e7957:	8d 95 37 ff ff ff    	lea    -0xc9(%ebp),%edx
 81e795d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e7961:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e7968:	00 
 81e7969:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e796d:	89 14 24             	mov    %edx,(%esp)
 81e7970:	e8 a3 3f 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e7975:	83 ec 04             	sub    $0x4,%esp
 81e7978:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 81e797e:	85 c0                	test   %eax,%eax
 81e7980:	75 25                	jne    81e79a7 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x11d>
 81e7982:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e7989:	00 
 81e798a:	c7 44 24 04 07 02 00 	movl   $0x207,0x4(%esp)
 81e7991:	00 
 81e7992:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7995:	89 04 24             	mov    %eax,(%esp)
 81e7998:	e8 a5 45 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e799d:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e79a2:	e9 0e 03 00 00       	jmp    81e7cb5 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x42b>
 81e79a7:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 81e79ad:	89 c3                	mov    %eax,%ebx
 81e79af:	e8 e7 47 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e79b4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e79b8:	89 04 24             	mov    %eax,(%esp)
 81e79bb:	e8 72 80 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e79c0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81e79c3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81e79c7:	75 0a                	jne    81e79d3 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x149>
 81e79c9:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e79ce:	e9 e2 02 00 00       	jmp    81e7cb5 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x42b>
 81e79d3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 81e79d7:	74 29                	je     81e7a02 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x178>
 81e79d9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e79dc:	89 04 24             	mov    %eax,(%esp)
 81e79df:	e8 16 99 f0 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81e79e4:	83 f0 01             	xor    $0x1,%eax
 81e79e7:	84 c0                	test   %al,%al
 81e79e9:	75 17                	jne    81e7a02 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x178>
 81e79eb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e79ee:	8b 00                	mov    (%eax),%eax
 81e79f0:	83 c0 0c             	add    $0xc,%eax
 81e79f3:	8b 10                	mov    (%eax),%edx
 81e79f5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e79f8:	89 04 24             	mov    %eax,(%esp)
 81e79fb:	ff d2                	call   *%edx
 81e79fd:	83 f8 26             	cmp    $0x26,%eax
 81e7a00:	74 07                	je     81e7a09 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x17f>
 81e7a02:	b8 01 00 00 00       	mov    $0x1,%eax
 81e7a07:	eb 05                	jmp    81e7a0e <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x184>
 81e7a09:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7a0e:	84 c0                	test   %al,%al
 81e7a10:	74 0a                	je     81e7a1c <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x192>
 81e7a12:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e7a17:	e9 99 02 00 00       	jmp    81e7cb5 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x42b>
 81e7a1c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81e7a23:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 81e7a2a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 81e7a31:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e7a34:	89 04 24             	mov    %eax,(%esp)
 81e7a37:	e8 08 28 f9 ff       	call   817a244 <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tC1Ev>
 81e7a3c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e7a43:	eb 47                	jmp    81e7a8c <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x202>
 81e7a45:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e7a48:	83 c0 02             	add    $0x2,%eax
 81e7a4b:	c1 e0 03             	shl    $0x3,%eax
 81e7a4e:	03 45 d4             	add    -0x2c(%ebp),%eax
 81e7a51:	8d 50 08             	lea    0x8(%eax),%edx
 81e7a54:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e7a57:	83 c0 02             	add    $0x2,%eax
 81e7a5a:	c1 e0 03             	shl    $0x3,%eax
 81e7a5d:	03 45 d4             	add    -0x2c(%ebp),%eax
 81e7a60:	83 c0 04             	add    $0x4,%eax
 81e7a63:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e7a67:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7a6b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e7a6e:	89 04 24             	mov    %eax,(%esp)
 81e7a71:	e8 68 fc 04 00       	call   82376de <_ZNSt4pairIiiEC1IRmRhEEOT_OT0_>
 81e7a76:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81e7a79:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7a7d:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e7a80:	89 04 24             	mov    %eax,(%esp)
 81e7a83:	e8 7e 5b ef ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 81e7a88:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81e7a8c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e7a8f:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81e7a93:	0f b6 c0             	movzbl %al,%eax
 81e7a96:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81e7a99:	0f 9f c0             	setg   %al
 81e7a9c:	84 c0                	test   %al,%al
 81e7a9e:	75 a5                	jne    81e7a45 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x1bb>
 81e7aa0:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 81e7aa7:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e7aaa:	89 04 24             	mov    %eax,(%esp)
 81e7aad:	e8 e0 31 f6 ff       	call   814ac92 <_ZNSt6vectorI10Inven_ItemSaIS0_EEC1Ev>
 81e7ab2:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e7ab5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7ab9:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e7abc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7ac0:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 81e7ac6:	89 04 24             	mov    %eax,(%esp)
 81e7ac9:	e8 f4 d3 04 00       	call   8234ec2 <_ZN19STSpecailItem_ParamC1ERSt6vectorI10Inven_ItemSaIS1_EERN8WongWork9CCeraShop21stCeraShopItemParam_tE>
 81e7ace:	c7 85 7c ff ff ff 00 	movl   $0x0,-0x84(%ebp)
 81e7ad5:	00 00 00 
 81e7ad8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7adb:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 81e7ae1:	8b 85 39 ff ff ff    	mov    -0xc7(%ebp),%eax
 81e7ae7:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 81e7aed:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81e7af0:	89 45 88             	mov    %eax,-0x78(%ebp)
 81e7af3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e7af6:	89 45 8c             	mov    %eax,-0x74(%ebp)
 81e7af9:	c6 45 90 00          	movb   $0x0,-0x70(%ebp)
 81e7afd:	c6 45 91 00          	movb   $0x0,-0x6f(%ebp)
 81e7b01:	c6 45 92 00          	movb   $0x0,-0x6e(%ebp)
 81e7b05:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81e7b08:	89 04 24             	mov    %eax,(%esp)
 81e7b0b:	e8 26 d4 04 00       	call   8234f36 <_ZN20STSpecailItem_ResultC1Ev>
 81e7b10:	a1 44 f7 41 09       	mov    0x941f744,%eax
 81e7b15:	8d 55 a4             	lea    -0x5c(%ebp),%edx
 81e7b18:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e7b1c:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 81e7b22:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e7b26:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 81e7b2d:	00 
 81e7b2e:	89 04 24             	mov    %eax,(%esp)
 81e7b31:	e8 1e dd 13 00       	call   8325854 <_ZN8WongWork9CCeraShop22CallSpecialItemHandlerEiRK19STSpecailItem_ParamR20STSpecailItem_Result>
 81e7b36:	83 f0 01             	xor    $0x1,%eax
 81e7b39:	84 c0                	test   %al,%al
 81e7b3b:	74 27                	je     81e7b64 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x2da>
 81e7b3d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 81e7b40:	0f b6 c0             	movzbl %al,%eax
 81e7b43:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7b47:	c7 44 24 04 07 02 00 	movl   $0x207,0x4(%esp)
 81e7b4e:	00 
 81e7b4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7b52:	89 04 24             	mov    %eax,(%esp)
 81e7b55:	e8 e8 43 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e7b5a:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e7b5f:	e9 1e 01 00 00       	jmp    81e7c82 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x3f8>
 81e7b64:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 81e7b67:	85 c0                	test   %eax,%eax
 81e7b69:	0f 85 da 00 00 00    	jne    81e7c49 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x3bf>
 81e7b6f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e7b72:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e7b76:	0f bf d8             	movswl %ax,%ebx
 81e7b79:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7b7c:	89 04 24             	mov    %eax,(%esp)
 81e7b7f:	e8 0a 27 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e7b84:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e7b8b:	00 
 81e7b8c:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e7b93:	00 
 81e7b94:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e7b9b:	00 
 81e7b9c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e7ba0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7ba7:	00 
 81e7ba8:	89 04 24             	mov    %eax,(%esp)
 81e7bab:	e8 5c c4 31 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e7bb0:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7bb3:	89 04 24             	mov    %eax,(%esp)
 81e7bb6:	e8 91 61 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e7bbb:	c7 44 24 08 07 02 00 	movl   $0x207,0x8(%esp)
 81e7bc2:	00 
 81e7bc3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7bca:	00 
 81e7bcb:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7bce:	89 04 24             	mov    %eax,(%esp)
 81e7bd1:	e8 26 3d ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e7bd6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7bdd:	00 
 81e7bde:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7be1:	89 04 24             	mov    %eax,(%esp)
 81e7be4:	e8 37 3d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e7be9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e7bec:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e7bf0:	98                   	cwtl
 81e7bf1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7bf5:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7bf8:	89 04 24             	mov    %eax,(%esp)
 81e7bfb:	e8 a4 22 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e7c00:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7c07:	00 
 81e7c08:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7c0b:	89 04 24             	mov    %eax,(%esp)
 81e7c0e:	e8 45 3d ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e7c13:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7c16:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7c1a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7c1d:	89 04 24             	mov    %eax,(%esp)
 81e7c20:	e8 95 09 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e7c25:	eb 15                	jmp    81e7c3c <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x3b2>
 81e7c27:	89 d3                	mov    %edx,%ebx
 81e7c29:	89 c6                	mov    %eax,%esi
 81e7c2b:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7c2e:	89 04 24             	mov    %eax,(%esp)
 81e7c31:	e8 4a 62 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e7c36:	89 f0                	mov    %esi,%eax
 81e7c38:	89 da                	mov    %ebx,%edx
 81e7c3a:	eb 31                	jmp    81e7c6d <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x3e3>
 81e7c3c:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e7c3f:	89 04 24             	mov    %eax,(%esp)
 81e7c42:	e8 39 62 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e7c47:	eb 1d                	jmp    81e7c66 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x3dc>
 81e7c49:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 81e7c4c:	0f b6 c0             	movzbl %al,%eax
 81e7c4f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e7c53:	c7 44 24 04 07 02 00 	movl   $0x207,0x4(%esp)
 81e7c5a:	00 
 81e7c5b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7c5e:	89 04 24             	mov    %eax,(%esp)
 81e7c61:	e8 dc 42 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e7c66:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e7c6b:	eb 15                	jmp    81e7c82 <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x3f8>
 81e7c6d:	89 d3                	mov    %edx,%ebx
 81e7c6f:	89 c6                	mov    %eax,%esi
 81e7c71:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e7c74:	89 04 24             	mov    %eax,(%esp)
 81e7c77:	e8 2a 30 f6 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 81e7c7c:	89 f0                	mov    %esi,%eax
 81e7c7e:	89 da                	mov    %ebx,%edx
 81e7c80:	eb 0d                	jmp    81e7c8f <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x405>
 81e7c82:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e7c85:	89 04 24             	mov    %eax,(%esp)
 81e7c88:	e8 19 30 f6 ff       	call   814aca6 <_ZNSt6vectorI10Inven_ItemSaIS0_EED1Ev>
 81e7c8d:	eb 1b                	jmp    81e7caa <_ZN26Dispatcher_CeraPackageOpen7processEP5CUserR8MSG_BASER9ParamBase+0x420>
 81e7c8f:	89 d3                	mov    %edx,%ebx
 81e7c91:	89 c6                	mov    %eax,%esi
 81e7c93:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e7c96:	89 04 24             	mov    %eax,(%esp)
 81e7c99:	e8 5e 26 f9 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 81e7c9e:	89 f0                	mov    %esi,%eax
 81e7ca0:	89 da                	mov    %ebx,%edx
 81e7ca2:	89 04 24             	mov    %eax,(%esp)
 81e7ca5:	e8 a6 ba 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e7caa:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e7cad:	89 04 24             	mov    %eax,(%esp)
 81e7cb0:	e8 47 26 f9 ff       	call   817a2fc <_ZN8WongWork9CCeraShop21stCeraShopItemParam_tD1Ev>
 81e7cb5:	89 d8                	mov    %ebx,%eax
 81e7cb7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81e7cba:	83 c4 00             	add    $0x0,%esp
 81e7cbd:	5b                   	pop    %ebx
 81e7cbe:	5e                   	pop    %esi
 81e7cbf:	5d                   	pop    %ebp
 81e7cc0:	c3                   	ret
 81e7cc1:	90                   	nop

```

```c
// Dispatcher_CeraPackageOpen::process @ 0x81e788a

/* Dispatcher_CeraPackageOpen::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CeraPackageOpen::process
          (Dispatcher_CeraPackageOpen *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  CDataManager *this_00;
  CInventory *pCVar6;
  int iVar7;
  undefined1 local_cd [2];
  int local_cb;
  CUser *local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  PacketGuard local_6c [12];
  uint local_60;
  vector<Inven_Item,std::allocator<Inven_Item>> local_5c [12];
  stCeraShopItemParam_t local_50 [24];
  pair<int,int> local_38 [8];
  MSG_BASE *local_30;
  ParamBase *local_2c;
  CUser *local_28;
  CItem *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  
  local_30 = param_2;
  local_2c = param_3;
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_2c + 4) = uVar4;
  if (*(int *)(local_2c + 4) == 0) {
    local_28 = param_1;
    cVar3 = CUser::CheckItemLock(param_1,1,(int)*(short *)(local_30 + 0xe));
    if (cVar3 == '\0') {
      iVar7 = (int)*(short *)(local_30 + 0xe);
      iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)local_28);
      uVar4 = 1;
      CInventory::GetInvenSlot((int)local_cd,iVar5);
      iVar5 = local_cb;
      if (local_cb == 0) {
        CUser::SendCmdErrorPacket(param_1,0x207,1);
        uVar4 = 0;
      }
      else {
        this_00 = (CDataManager *)G_CDataManager();
        local_24 = (CItem *)CDataManager::find_item(this_00,iVar5);
        if (local_24 == (CItem *)0x0) {
          uVar4 = 1;
        }
        else {
          if (((local_24 == (CItem *)0x0) ||
              (cVar3 = CItem::is_stackable(local_24), cVar3 != '\x01')) ||
             (iVar5 = (**(code **)(*(int *)local_24 + 0xc))(local_24,iVar5,uVar4,iVar7),
             iVar5 != 0x26)) {
            bVar2 = true;
          }
          else {
            bVar2 = false;
          }
          if (bVar2) {
            uVar4 = 1;
          }
          else {
            local_20 = 0;
            local_1c = 0;
            local_18 = 0;
            WongWork::CCeraShop::stCeraShopItemParam_t::stCeraShopItemParam_t(local_50);
            for (local_10 = 0; local_10 < (int)(uint)(byte)local_30[0x10]; local_10 = local_10 + 1)
            {
                    /* try { // try from 081e7a71 to 081e7ab1 has its CatchHandler @ 081e7c8f */
              std::pair<int,int>::pair<unsigned_long&,unsigned_char&>
                        (local_38,(ulong *)(local_30 + (local_10 + 2) * 8 + 4),
                         (uchar *)(local_30 + (local_10 + 2) * 8 + 8));
              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)local_50,
                         local_38);
            }
            local_14 = 0;
            std::vector<Inven_Item,std::allocator<Inven_Item>>::vector(local_5c);
            STSpecailItem_Param::STSpecailItem_Param
                      ((STSpecailItem_Param *)&local_90,(vector *)local_5c,local_50);
            local_88 = 0;
            local_90 = param_1;
            local_8c = local_cb;
            local_7c = local_1c;
            local_78 = local_18;
            local_74 = 0;
            local_73 = 0;
            local_72 = 0;
            STSpecailItem_Result::STSpecailItem_Result((STSpecailItem_Result *)&local_60);
                    /* try { // try from 081e7b31 to 081e7bba has its CatchHandler @ 081e7c6d */
            cVar3 = WongWork::CCeraShop::CallSpecialItemHandler
                              (GlobalData::s_pCeraShop,5,(STSpecailItem_Param *)&local_90,
                               (STSpecailItem_Result *)&local_60);
            if (cVar3 == '\x01') {
              if (local_60 == 0) {
                sVar1 = *(short *)(local_30 + 0xe);
                pCVar6 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                CInventory::delete_item(pCVar6,1,(int)sVar1,1,3,1);
                PacketGuard::PacketGuard(local_6c);
                    /* try { // try from 081e7bd1 to 081e7c24 has its CatchHandler @ 081e7c27 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_6c,1,0x207);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_6c,1);
                InterfacePacketBuf::put_short
                          ((InterfacePacketBuf *)local_6c,(int)*(short *)(local_30 + 0xe));
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_6c,true);
                CUser::Send(param_1,local_6c);
                    /* try { // try from 081e7c42 to 081e7c65 has its CatchHandler @ 081e7c6d */
                PacketGuard::~PacketGuard(local_6c);
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0x207,local_60 & 0xff);
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0x207,local_60 & 0xff);
            }
            uVar4 = 0;
                    /* try { // try from 081e7c88 to 081e7c8c has its CatchHandler @ 081e7c8f */
            std::vector<Inven_Item,std::allocator<Inven_Item>>::~vector(local_5c);
            WongWork::CCeraShop::stCeraShopItemParam_t::~stCeraShopItemParam_t(local_50);
          }
        }
      }
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x207,4);
      uVar4 = 0;
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x207,*(uint *)(local_2c + 4) & 0xff);
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## read

```asm
// === 081e76fa Dispatcher_CeraPackageOpen::read  [0x081e76fa-0x81e7889] ===
 81e76fa:	55                   	push   %ebp
 81e76fb:	89 e5                	mov    %esp,%ebp
 81e76fd:	83 ec 28             	sub    $0x28,%esp
 81e7700:	8b 45 10             	mov    0x10(%ebp),%eax
 81e7703:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e7706:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7709:	83 c0 0e             	add    $0xe,%eax
 81e770c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7710:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7713:	89 04 24             	mov    %eax,(%esp)
 81e7716:	e8 a5 58 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e771b:	83 f0 01             	xor    $0x1,%eax
 81e771e:	84 c0                	test   %al,%al
 81e7720:	74 29                	je     81e774b <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x51>
 81e7722:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e7729:	00 
 81e772a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e7731:	00 
 81e7732:	c7 44 24 04 60 0b bd 	movl   $0x8bd0b60,0x4(%esp)
 81e7739:	08 
 81e773a:	c7 04 24 6b 63 00 00 	movl   $0x636b,(%esp)
 81e7741:	e8 91 91 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7746:	e9 3c 01 00 00       	jmp    81e7887 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x18d>
 81e774b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e774e:	83 c0 10             	add    $0x10,%eax
 81e7751:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7755:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7758:	89 04 24             	mov    %eax,(%esp)
 81e775b:	e8 10 58 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e7760:	83 f0 01             	xor    $0x1,%eax
 81e7763:	84 c0                	test   %al,%al
 81e7765:	74 29                	je     81e7790 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x96>
 81e7767:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e776e:	00 
 81e776f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e7776:	00 
 81e7777:	c7 44 24 04 60 0b bd 	movl   $0x8bd0b60,0x4(%esp)
 81e777e:	08 
 81e777f:	c7 04 24 6e 63 00 00 	movl   $0x636e,(%esp)
 81e7786:	e8 4c 91 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e778b:	e9 f7 00 00 00       	jmp    81e7887 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x18d>
 81e7790:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e7793:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81e7797:	3c 23                	cmp    $0x23,%al
 81e7799:	76 29                	jbe    81e77c4 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0xca>
 81e779b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e77a2:	00 
 81e77a3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e77aa:	00 
 81e77ab:	c7 44 24 04 60 0b bd 	movl   $0x8bd0b60,0x4(%esp)
 81e77b2:	08 
 81e77b3:	c7 04 24 71 63 00 00 	movl   $0x6371,(%esp)
 81e77ba:	e8 18 91 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e77bf:	e9 c3 00 00 00       	jmp    81e7887 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x18d>
 81e77c4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e77cb:	e9 9a 00 00 00       	jmp    81e786a <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x170>
 81e77d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e77d3:	83 c0 02             	add    $0x2,%eax
 81e77d6:	c1 e0 03             	shl    $0x3,%eax
 81e77d9:	03 45 f0             	add    -0x10(%ebp),%eax
 81e77dc:	83 c0 04             	add    $0x4,%eax
 81e77df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e77e3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e77e6:	89 04 24             	mov    %eax,(%esp)
 81e77e9:	e8 90 5a 3a 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81e77ee:	83 f0 01             	xor    $0x1,%eax
 81e77f1:	84 c0                	test   %al,%al
 81e77f3:	74 26                	je     81e781b <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x121>
 81e77f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e77fc:	00 
 81e77fd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e7804:	00 
 81e7805:	c7 44 24 04 60 0b bd 	movl   $0x8bd0b60,0x4(%esp)
 81e780c:	08 
 81e780d:	c7 04 24 76 63 00 00 	movl   $0x6376,(%esp)
 81e7814:	e8 be 90 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7819:	eb 6c                	jmp    81e7887 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x18d>
 81e781b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e781e:	83 c0 02             	add    $0x2,%eax
 81e7821:	c1 e0 03             	shl    $0x3,%eax
 81e7824:	03 45 f0             	add    -0x10(%ebp),%eax
 81e7827:	83 c0 08             	add    $0x8,%eax
 81e782a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e782e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7831:	89 04 24             	mov    %eax,(%esp)
 81e7834:	e8 37 57 3a 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81e7839:	83 f0 01             	xor    $0x1,%eax
 81e783c:	84 c0                	test   %al,%al
 81e783e:	74 26                	je     81e7866 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x16c>
 81e7840:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e7847:	00 
 81e7848:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e784f:	00 
 81e7850:	c7 44 24 04 60 0b bd 	movl   $0x8bd0b60,0x4(%esp)
 81e7857:	08 
 81e7858:	c7 04 24 79 63 00 00 	movl   $0x6379,(%esp)
 81e785f:	e8 73 90 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e7864:	eb 21                	jmp    81e7887 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0x18d>
 81e7866:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 81e786a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e786d:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81e7871:	0f b6 c0             	movzbl %al,%eax
 81e7874:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 81e7877:	0f 97 c0             	seta   %al
 81e787a:	84 c0                	test   %al,%al
 81e787c:	0f 85 4e ff ff ff    	jne    81e77d0 <_ZN26Dispatcher_CeraPackageOpen4readER9PacketBufR8MSG_BASE+0xd6>
 81e7882:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7887:	c9                   	leave
 81e7888:	c3                   	ret
 81e7889:	90                   	nop

```

```c
// Dispatcher_CeraPackageOpen::read @ 0x81e76fa

/* Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CeraPackageOpen::read
          (Dispatcher_CeraPackageOpen *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint local_10;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      if ((byte)param_2[0x10] < 0x24) {
        for (local_10 = 0; local_10 < (byte)param_2[0x10]; local_10 = local_10 + 1) {
          cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + (local_10 + 2) * 8 + 4));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x6376,
                             "virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0
                             ,0);
            return uVar2;
          }
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + (local_10 + 2) * 8 + 8));
          if (cVar1 != '\x01') {
            uVar2 = LineFunc(0x6379,
                             "virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0
                             ,0);
            return uVar2;
          }
        }
        uVar2 = 0;
      }
      else {
        uVar2 = LineFunc(0x6371,
                         "virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x636e,"virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",
                       0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x636b,"virtual int Dispatcher_CeraPackageOpen::read(PacketBuf&, MSG_BASE&)",0,
                     0);
  }
  return uVar2;
}

```

