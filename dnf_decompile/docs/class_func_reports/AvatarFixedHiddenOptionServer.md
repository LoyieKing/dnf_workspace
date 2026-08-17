# AvatarFixedHiddenOptionServer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## AvatarFixedHiddenOptionServer

```asm
// === 0817e02c AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer  [0x0817e02c-0x817e0e5] ===
 817e02c:	55                   	push   %ebp
 817e02d:	89 e5                	mov    %esp,%ebp
 817e02f:	57                   	push   %edi
 817e030:	56                   	push   %esi
 817e031:	53                   	push   %ebx
 817e032:	83 ec 2c             	sub    $0x2c,%esp
 817e035:	8b 45 08             	mov    0x8(%ebp),%eax
 817e038:	83 c0 04             	add    $0x4,%eax
 817e03b:	89 04 24             	mov    %eax,(%esp)
 817e03e:	e8 69 0c 73 00       	call   88aecac <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionC1Ev>
 817e043:	8b 45 08             	mov    0x8(%ebp),%eax
 817e046:	89 04 24             	mov    %eax,(%esp)
 817e049:	e8 1a 0f 00 00       	call   817ef68 <_ZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerEC1Ev>
 817e04e:	8b 45 08             	mov    0x8(%ebp),%eax
 817e051:	89 04 24             	mov    %eax,(%esp)
 817e054:	e8 fb 43 f6 ff       	call   80e2454 <_ZN4ARAD15ScriptInterfaceC1Ev>
 817e059:	8b 45 08             	mov    0x8(%ebp),%eax
 817e05c:	c7 00 60 ac b8 08    	movl   $0x8b8ac60,(%eax)
 817e062:	8b 45 08             	mov    0x8(%ebp),%eax
 817e065:	8d 70 50             	lea    0x50(%eax),%esi
 817e068:	89 f7                	mov    %esi,%edi
 817e06a:	bb 05 00 00 00       	mov    $0x5,%ebx
 817e06f:	eb 0e                	jmp    817e07f <_ZN29AvatarFixedHiddenOptionServerC1Ev+0x53>
 817e071:	89 3c 24             	mov    %edi,(%esp)
 817e074:	e8 33 01 f1 ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 817e079:	83 c7 0c             	add    $0xc,%edi
 817e07c:	83 eb 01             	sub    $0x1,%ebx
 817e07f:	83 fb ff             	cmp    $0xffffffff,%ebx
 817e082:	0f 95 c0             	setne  %al
 817e085:	84 c0                	test   %al,%al
 817e087:	75 e8                	jne    817e071 <_ZN29AvatarFixedHiddenOptionServerC1Ev+0x45>
 817e089:	eb 52                	jmp    817e0dd <_ZN29AvatarFixedHiddenOptionServerC1Ev+0xb1>
 817e08b:	89 d7                	mov    %edx,%edi
 817e08d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817e090:	85 f6                	test   %esi,%esi
 817e092:	74 26                	je     817e0ba <_ZN29AvatarFixedHiddenOptionServerC1Ev+0x8e>
 817e094:	b8 05 00 00 00       	mov    $0x5,%eax
 817e099:	29 d8                	sub    %ebx,%eax
 817e09b:	89 c2                	mov    %eax,%edx
 817e09d:	89 d0                	mov    %edx,%eax
 817e09f:	01 c0                	add    %eax,%eax
 817e0a1:	01 d0                	add    %edx,%eax
 817e0a3:	c1 e0 02             	shl    $0x2,%eax
 817e0a6:	8d 1c 06             	lea    (%esi,%eax,1),%ebx
 817e0a9:	39 f3                	cmp    %esi,%ebx
 817e0ab:	74 0d                	je     817e0ba <_ZN29AvatarFixedHiddenOptionServerC1Ev+0x8e>
 817e0ad:	83 eb 0c             	sub    $0xc,%ebx
 817e0b0:	89 1c 24             	mov    %ebx,(%esp)
 817e0b3:	e8 22 5d f0 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 817e0b8:	eb ef                	jmp    817e0a9 <_ZN29AvatarFixedHiddenOptionServerC1Ev+0x7d>
 817e0ba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817e0bd:	89 fa                	mov    %edi,%edx
 817e0bf:	89 d3                	mov    %edx,%ebx
 817e0c1:	89 c6                	mov    %eax,%esi
 817e0c3:	8b 45 08             	mov    0x8(%ebp),%eax
 817e0c6:	83 c0 04             	add    $0x4,%eax
 817e0c9:	89 04 24             	mov    %eax,(%esp)
 817e0cc:	e8 8d 0c 73 00       	call   88aed5e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev>
 817e0d1:	89 f0                	mov    %esi,%eax
 817e0d3:	89 da                	mov    %ebx,%edx
 817e0d5:	89 04 24             	mov    %eax,(%esp)
 817e0d8:	e8 73 56 96 00       	call   8ae3750 <_Unwind_Resume>
 817e0dd:	83 c4 2c             	add    $0x2c,%esp
 817e0e0:	5b                   	pop    %ebx
 817e0e1:	5e                   	pop    %esi
 817e0e2:	5f                   	pop    %edi
 817e0e3:	5d                   	pop    %ebp
 817e0e4:	c3                   	ret
 817e0e5:	90                   	nop

```

```c
// AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer @ 0x817e02c

/* AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer() */

void __thiscall
AvatarFixedHiddenOptionServer::AvatarFixedHiddenOptionServer(AvatarFixedHiddenOptionServer *this)

{
  int iVar1;
  vector<int,std::allocator<int>> *this_00;
  
  ARAD::SCRIPT::AvatarFixedHiddenOption::AvatarFixedHiddenOption
            ((AvatarFixedHiddenOption *)(this + 4));
  ARAD::Singleton<AvatarFixedHiddenOptionServer>::Singleton();
  ARAD::ScriptInterface::ScriptInterface((ScriptInterface *)this);
  *(undefined ***)this = &PTR_Load_08b8ac60;
  this_00 = (vector<int,std::allocator<int>> *)(this + 0x50);
  for (iVar1 = 5; iVar1 != -1; iVar1 = iVar1 + -1) {
                    /* try { // try from 0817e074 to 0817e078 has its CatchHandler @ 0817e08b */
    std::vector<int,std::allocator<int>>::vector(this_00);
    this_00 = this_00 + 0xc;
  }
  return;
}

```

---

## ChangeHiddenOption

```asm
// === 0817e8d6 AvatarFixedHiddenOptionServer::ChangeHiddenOption  [0x0817e8d6-0x817ec66] ===
 817e8d6:	55                   	push   %ebp
 817e8d7:	89 e5                	mov    %esp,%ebp
 817e8d9:	57                   	push   %edi
 817e8da:	56                   	push   %esi
 817e8db:	53                   	push   %ebx
 817e8dc:	83 ec 7c             	sub    $0x7c,%esp
 817e8df:	8b 45 10             	mov    0x10(%ebp),%eax
 817e8e2:	0f b7 00             	movzwl (%eax),%eax
 817e8e5:	0f bf d8             	movswl %ax,%ebx
 817e8e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e8eb:	89 04 24             	mov    %eax,(%esp)
 817e8ee:	e8 9b b9 f5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 817e8f3:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 817e8fa:	00 
 817e8fb:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 817e902:	00 
 817e903:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 817e90a:	00 
 817e90b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817e90f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 817e916:	00 
 817e917:	89 04 24             	mov    %eax,(%esp)
 817e91a:	e8 ed 56 38 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 817e91f:	83 f0 01             	xor    $0x1,%eax
 817e922:	84 c0                	test   %al,%al
 817e924:	74 6d                	je     817e993 <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0xbd>
 817e926:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e929:	89 04 24             	mov    %eax,(%esp)
 817e92c:	e8 1d d3 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817e931:	8b 55 10             	mov    0x10(%ebp),%edx
 817e934:	0f b7 12             	movzwl (%edx),%edx
 817e937:	0f bf d2             	movswl %dx,%edx
 817e93a:	89 44 24 18          	mov    %eax,0x18(%esp)
 817e93e:	89 54 24 14          	mov    %edx,0x14(%esp)
 817e942:	c7 44 24 10 c8 9d b8 	movl   $0x8b89dc8,0x10(%esp)
 817e949:	08 
 817e94a:	c7 44 24 0c a1 00 00 	movl   $0xa1,0xc(%esp)
 817e951:	00 
 817e952:	c7 44 24 08 40 ab b8 	movl   $0x8b8ab40,0x8(%esp)
 817e959:	08 
 817e95a:	c7 44 24 04 9c 9c b8 	movl   $0x8b89c9c,0x4(%esp)
 817e961:	08 
 817e962:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817e969:	e8 9c 52 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817e96e:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 817e975:	00 
 817e976:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 817e97d:	00 
 817e97e:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e981:	89 04 24             	mov    %eax,(%esp)
 817e984:	e8 b9 d5 4f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 817e989:	bb 00 00 00 00       	mov    $0x0,%ebx
 817e98e:	e9 ca 02 00 00       	jmp    817ec5d <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x387>
 817e993:	8b 45 10             	mov    0x10(%ebp),%eax
 817e996:	0f b7 00             	movzwl (%eax),%eax
 817e999:	98                   	cwtl
 817e99a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817e99e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 817e9a5:	00 
 817e9a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 817e9ad:	00 
 817e9ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e9b1:	89 04 24             	mov    %eax,(%esp)
 817e9b4:	e8 a1 dc 4f 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 817e9b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e9bc:	89 04 24             	mov    %eax,(%esp)
 817e9bf:	e8 8a d2 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817e9c4:	89 c3                	mov    %eax,%ebx
 817e9c6:	8b 45 10             	mov    0x10(%ebp),%eax
 817e9c9:	0f b7 00             	movzwl (%eax),%eax
 817e9cc:	0f bf f0             	movswl %ax,%esi
 817e9cf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 817e9d6:	00 
 817e9d7:	c7 44 24 08 a6 00 00 	movl   $0xa6,0x8(%esp)
 817e9de:	00 
 817e9df:	c7 44 24 04 40 ab b8 	movl   $0x8b8ab40,0x4(%esp)
 817e9e6:	08 
 817e9e7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 817e9ea:	89 04 24             	mov    %eax,(%esp)
 817e9ed:	e8 26 0d 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 817e9f2:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 817e9f6:	89 74 24 08          	mov    %esi,0x8(%esp)
 817e9fa:	c7 44 24 04 18 9e b8 	movl   $0x8b89e18,0x4(%esp)
 817ea01:	08 
 817ea02:	8d 45 c0             	lea    -0x40(%ebp),%eax
 817ea05:	89 04 24             	mov    %eax,(%esp)
 817ea08:	e8 7b 0d 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817ea0d:	8b 45 10             	mov    0x10(%ebp),%eax
 817ea10:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 817ea14:	0f bf d8             	movswl %ax,%ebx
 817ea17:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ea1a:	89 04 24             	mov    %eax,(%esp)
 817ea1d:	e8 6c b8 f5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 817ea22:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 817ea26:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 817ea2d:	00 
 817ea2e:	89 04 24             	mov    %eax,(%esp)
 817ea31:	e8 78 d8 37 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 817ea36:	89 45 e0             	mov    %eax,-0x20(%ebp)
 817ea39:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 817ea3d:	75 0a                	jne    817ea49 <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x173>
 817ea3f:	bb 00 00 00 00       	mov    $0x0,%ebx
 817ea44:	e9 14 02 00 00       	jmp    817ec5d <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x387>
 817ea49:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817ea4c:	8b 40 02             	mov    0x2(%eax),%eax
 817ea4f:	89 c3                	mov    %eax,%ebx
 817ea51:	e8 45 d7 f4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 817ea56:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 817ea5a:	89 04 24             	mov    %eax,(%esp)
 817ea5d:	e8 d0 0f 1e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 817ea62:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 817ea65:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 817ea69:	75 0a                	jne    817ea75 <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x19f>
 817ea6b:	bb 00 00 00 00       	mov    $0x0,%ebx
 817ea70:	e9 e8 01 00 00       	jmp    817ec5d <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x387>
 817ea75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817ea78:	8b 00                	mov    (%eax),%eax
 817ea7a:	83 c0 10             	add    $0x10,%eax
 817ea7d:	8b 10                	mov    (%eax),%edx
 817ea7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817ea82:	89 04 24             	mov    %eax,(%esp)
 817ea85:	ff d2                	call   *%edx
 817ea87:	83 f0 01             	xor    $0x1,%eax
 817ea8a:	84 c0                	test   %al,%al
 817ea8c:	74 0a                	je     817ea98 <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x1c2>
 817ea8e:	bb 00 00 00 00       	mov    $0x0,%ebx
 817ea93:	e9 c5 01 00 00       	jmp    817ec5d <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x387>
 817ea98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 817ea9b:	89 04 24             	mov    %eax,(%esp)
 817ea9e:	e8 b1 21 f9 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 817eaa3:	89 44 24 04          	mov    %eax,0x4(%esp)
 817eaa7:	8b 45 08             	mov    0x8(%ebp),%eax
 817eaaa:	89 04 24             	mov    %eax,(%esp)
 817eaad:	e8 3a f7 ff ff       	call   817e1ec <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITY>
 817eab2:	89 c2                	mov    %eax,%edx
 817eab4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817eab7:	66 89 50 0d          	mov    %dx,0xd(%eax)
 817eabb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817eabe:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 817eac2:	8b 45 10             	mov    0x10(%ebp),%eax
 817eac5:	66 89 50 04          	mov    %dx,0x4(%eax)
 817eac9:	8d 45 b0             	lea    -0x50(%ebp),%eax
 817eacc:	89 04 24             	mov    %eax,(%esp)
 817eacf:	e8 28 03 00 00       	call   817edfc <_ZN4arad29SigAradAvatarHiddenOptionSaveC1Ev>
 817ead4:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ead7:	89 04 24             	mov    %eax,(%esp)
 817eada:	e8 8f b8 f5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 817eadf:	89 45 b0             	mov    %eax,-0x50(%ebp)
 817eae2:	8b 45 0c             	mov    0xc(%ebp),%eax
 817eae5:	89 04 24             	mov    %eax,(%esp)
 817eae8:	e8 45 19 fa ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 817eaed:	8b 00                	mov    (%eax),%eax
 817eaef:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 817eaf2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817eaf5:	8b 40 02             	mov    0x2(%eax),%eax
 817eaf8:	89 45 b8             	mov    %eax,-0x48(%ebp)
 817eafb:	8b 45 10             	mov    0x10(%ebp),%eax
 817eafe:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 817eb02:	83 c0 0a             	add    $0xa,%eax
 817eb05:	66 89 45 bc          	mov    %ax,-0x44(%ebp)
 817eb09:	8b 45 e0             	mov    -0x20(%ebp),%eax
 817eb0c:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 817eb10:	66 89 45 be          	mov    %ax,-0x42(%ebp)
 817eb14:	8b 45 0c             	mov    0xc(%ebp),%eax
 817eb17:	89 04 24             	mov    %eax,(%esp)
 817eb1a:	e8 2f d1 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817eb1f:	89 c3                	mov    %eax,%ebx
 817eb21:	0f b7 45 be          	movzwl -0x42(%ebp),%eax
 817eb25:	98                   	cwtl
 817eb26:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 817eb29:	8b 7d b8             	mov    -0x48(%ebp),%edi
 817eb2c:	0f b7 45 bc          	movzwl -0x44(%ebp),%eax
 817eb30:	0f bf f0             	movswl %ax,%esi
 817eb33:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 817eb3a:	00 
 817eb3b:	c7 44 24 08 c2 00 00 	movl   $0xc2,0x8(%esp)
 817eb42:	00 
 817eb43:	c7 44 24 04 40 ab b8 	movl   $0x8b8ab40,0x4(%esp)
 817eb4a:	08 
 817eb4b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 817eb4e:	89 04 24             	mov    %eax,(%esp)
 817eb51:	e8 c2 0b 3d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 817eb56:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 817eb5a:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 817eb5d:	89 44 24 10          	mov    %eax,0x10(%esp)
 817eb61:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 817eb65:	89 74 24 08          	mov    %esi,0x8(%esp)
 817eb69:	c7 44 24 04 68 9e b8 	movl   $0x8b89e68,0x4(%esp)
 817eb70:	08 
 817eb71:	8d 45 d0             	lea    -0x30(%ebp),%eax
 817eb74:	89 04 24             	mov    %eax,(%esp)
 817eb77:	e8 0c 0c 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817eb7c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 817eb81:	c7 44 24 08 c6 00 00 	movl   $0xc6,0x8(%esp)
 817eb88:	00 
 817eb89:	c7 44 24 04 9c 9c b8 	movl   $0x8b89c9c,0x4(%esp)
 817eb90:	08 
 817eb91:	89 04 24             	mov    %eax,(%esp)
 817eb94:	e8 ed 0e 11 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 817eb99:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817eba0:	00 
 817eba1:	89 44 24 04          	mov    %eax,0x4(%esp)
 817eba5:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817eba8:	89 04 24             	mov    %eax,(%esp)
 817ebab:	e8 76 a0 f4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 817ebb0:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 817ebb7:	ff 
 817ebb8:	c7 44 24 04 2f 00 00 	movl   $0x2f,0x4(%esp)
 817ebbf:	00 
 817ebc0:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817ebc3:	89 04 24             	mov    %eax,(%esp)
 817ebc6:	e8 eb 8b 01 00       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 817ebcb:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817ebce:	89 04 24             	mov    %eax,(%esp)
 817ebd1:	e8 78 a0 f4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 817ebd6:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 817ebdd:	00 
 817ebde:	8d 55 b0             	lea    -0x50(%ebp),%edx
 817ebe1:	89 54 24 04          	mov    %edx,0x4(%esp)
 817ebe5:	89 04 24             	mov    %eax,(%esp)
 817ebe8:	e8 65 fa f5 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 817ebed:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 817ebf2:	8d 55 a8             	lea    -0x58(%ebp),%edx
 817ebf5:	89 54 24 08          	mov    %edx,0x8(%esp)
 817ebf9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 817ec00:	00 
 817ec01:	89 04 24             	mov    %eax,(%esp)
 817ec04:	e8 d5 23 3f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 817ec09:	8b 45 10             	mov    0x10(%ebp),%eax
 817ec0c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 817ec10:	98                   	cwtl
 817ec11:	89 44 24 0c          	mov    %eax,0xc(%esp)
 817ec15:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817ec1c:	00 
 817ec1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 817ec24:	00 
 817ec25:	8b 45 0c             	mov    0xc(%ebp),%eax
 817ec28:	89 04 24             	mov    %eax,(%esp)
 817ec2b:	e8 2a da 4f 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 817ec30:	bb 01 00 00 00       	mov    $0x1,%ebx
 817ec35:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817ec38:	89 04 24             	mov    %eax,(%esp)
 817ec3b:	e8 92 dc 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 817ec40:	eb 1b                	jmp    817ec5d <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x387>
 817ec42:	89 d3                	mov    %edx,%ebx
 817ec44:	89 c6                	mov    %eax,%esi
 817ec46:	8d 45 a8             	lea    -0x58(%ebp),%eax
 817ec49:	89 04 24             	mov    %eax,(%esp)
 817ec4c:	e8 81 dc 49 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 817ec51:	89 f0                	mov    %esi,%eax
 817ec53:	89 da                	mov    %ebx,%edx
 817ec55:	89 04 24             	mov    %eax,(%esp)
 817ec58:	e8 f3 4a 96 00       	call   8ae3750 <_Unwind_Resume>
 817ec5d:	89 d8                	mov    %ebx,%eax
 817ec5f:	83 c4 7c             	add    $0x7c,%esp
 817ec62:	5b                   	pop    %ebx
 817ec63:	5e                   	pop    %esi
 817ec64:	5f                   	pop    %edi
 817ec65:	5d                   	pop    %ebp
 817ec66:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::ChangeHiddenOption @ 0x817e8d6

/* AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::ChangeHiddenOption
          (AvatarFixedHiddenOptionServer *this,CUser *param_1,SigAvatarHiddenOptionChange *param_2)

{
  short sVar1;
  char cVar2;
  undefined2 uVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  CDataManager *this_00;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  Stream *pSVar9;
  CStreamGuard *this_01;
  int iVar10;
  CStreamGuard local_5c [8];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  short local_48;
  short local_46;
  cMyTrace local_44 [16];
  cMyTrace local_34 [16];
  int local_24;
  CItem *local_20;
  
  sVar1 = *(short *)param_2;
  pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  cVar2 = CInventory::delete_item(pCVar4,1,(int)sVar1,1,3,1);
  if (cVar2 == '\x01') {
    CUser::SendUpdateItemList(param_1,1,0,(int)*(short *)param_2);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    sVar1 = *(short *)param_2;
    cMyTrace::cMyTrace(local_44,
                       "bool AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)"
                       ,0xa6,0);
    cMyTrace::operator()
              (local_44,
               "AVATAR HIDDEN OPTION CHANGE : delete_item() success. [slot:%d] [charac_no:%d]",
               (int)sVar1,uVar5);
    sVar1 = *(short *)(param_2 + 2);
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    local_24 = CInventory::GetInvenRef(pCVar4,2,(int)sVar1);
    if (local_24 == 0) {
      uVar5 = 0;
    }
    else {
      iVar8 = *(int *)(local_24 + 2);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,iVar8);
      if (local_20 == (CItem *)0x0) {
        uVar5 = 0;
      }
      else {
        cVar2 = (**(code **)(*(int *)local_20 + 0x10))(local_20);
        if (cVar2 == '\x01') {
          uVar5 = CItem::get_grade(local_20);
          uVar3 = GetSkillIndex(this,uVar5);
          *(undefined2 *)(local_24 + 0xd) = uVar3;
          *(undefined2 *)(param_2 + 4) = *(undefined2 *)(local_24 + 0xd);
          arad::SigAradAvatarHiddenOptionSave::SigAradAvatarHiddenOptionSave
                    ((SigAradAvatarHiddenOptionSave *)&local_54);
          local_54 = CUser::get_acc_id(param_1);
          puVar6 = (undefined4 *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
          local_50 = *puVar6;
          local_4c = *(undefined4 *)(local_24 + 2);
          local_48 = *(short *)(param_2 + 2) + 10;
          local_46 = *(short *)(local_24 + 0xd);
          uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar5 = local_4c;
          iVar8 = (int)local_46;
          iVar10 = (int)local_48;
          cMyTrace::cMyTrace(local_34,
                             "bool AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)"
                             ,0xc2,0);
          cMyTrace::operator()
                    (local_34,
                     "AVATAR HIDDEN OPTION CHANGE : success [slot:%d] [item_id:%d] [hidden_option:%d] [charac_no:%d]"
                     ,iVar10,uVar5,iVar8,uVar7);
          pSVar9 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,
                                       "localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",0xc6);
          CStreamGuard::CStreamGuard(local_5c,pSVar9,true);
                    /* try { // try from 0817ebc6 to 0817ec2f has its CatchHandler @ 0817ec42 */
          ARAD::DISPATCHER::make_internal_stream_jpn(local_5c,0x2f,0xffffffff);
          this_01 = (CStreamGuard *)CStreamGuard::operator->(local_5c);
          CStreamGuard::put_binary(this_01,&local_54,0x10);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_5c);
          CUser::SendUpdateItemList(param_1,1,1,(int)*(short *)(param_2 + 2));
          uVar5 = 1;
          CStreamGuard::~CStreamGuard(local_5c);
        }
        else {
          uVar5 = 0;
        }
      }
    }
  }
  else {
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
               "bool AvatarFixedHiddenOptionServer::ChangeHiddenOption(CUser*, arad::SigAvatarHiddenOptionChange*)"
               ,0xa1,"AVATAR HIDDEN OPTION CHANGE : delete_item() failed. [slot:%d] [charac_no:%d]",
               (int)*(short *)param_2,uVar5);
    CUser::SendCmdErrorPacket(param_1,0x24c,0x13);
    uVar5 = 0;
  }
  return uVar5;
}

```

---

## CheckCondition

```asm
// === 0817e4c6 AvatarFixedHiddenOptionServer::CheckCondition  [0x0817e4c6-0x817e8d5] ===
 817e4c6:	55                   	push   %ebp
 817e4c7:	89 e5                	mov    %esp,%ebp
 817e4c9:	53                   	push   %ebx
 817e4ca:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 817e4d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e4d3:	89 04 24             	mov    %eax,(%esp)
 817e4d6:	e8 b3 bd f5 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 817e4db:	89 45 f0             	mov    %eax,-0x10(%ebp)
 817e4de:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817e4e1:	89 04 24             	mov    %eax,(%esp)
 817e4e4:	e8 6b d3 f4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 817e4e9:	8b 45 10             	mov    0x10(%ebp),%eax
 817e4ec:	0f b7 00             	movzwl (%eax),%eax
 817e4ef:	0f bf d0             	movswl %ax,%edx
 817e4f2:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 817e4f8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817e4fc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817e503:	00 
 817e504:	8b 55 f0             	mov    -0x10(%ebp),%edx
 817e507:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e50b:	89 04 24             	mov    %eax,(%esp)
 817e50e:	e8 05 d4 37 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 817e513:	83 ec 04             	sub    $0x4,%esp
 817e516:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 817e51c:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 817e51f:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 817e525:	89 45 b7             	mov    %eax,-0x49(%ebp)
 817e528:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 817e52e:	89 45 bb             	mov    %eax,-0x45(%ebp)
 817e531:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 817e537:	89 45 bf             	mov    %eax,-0x41(%ebp)
 817e53a:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 817e540:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 817e543:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 817e549:	89 45 c7             	mov    %eax,-0x39(%ebp)
 817e54c:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 817e552:	89 45 cb             	mov    %eax,-0x35(%ebp)
 817e555:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 817e55b:	89 45 cf             	mov    %eax,-0x31(%ebp)
 817e55e:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 817e564:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 817e567:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 817e56d:	89 45 d7             	mov    %eax,-0x29(%ebp)
 817e570:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 817e576:	89 45 db             	mov    %eax,-0x25(%ebp)
 817e579:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 817e57f:	89 45 df             	mov    %eax,-0x21(%ebp)
 817e582:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 817e588:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 817e58b:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 817e591:	89 45 e7             	mov    %eax,-0x19(%ebp)
 817e594:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 817e59a:	89 45 eb             	mov    %eax,-0x15(%ebp)
 817e59d:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 817e5a4:	88 45 ef             	mov    %al,-0x11(%ebp)
 817e5a7:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 817e5aa:	89 04 24             	mov    %eax,(%esp)
 817e5ad:	e8 b4 07 fa ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 817e5b2:	84 c0                	test   %al,%al
 817e5b4:	74 6d                	je     817e623 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x15d>
 817e5b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e5b9:	89 04 24             	mov    %eax,(%esp)
 817e5bc:	e8 8d d6 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817e5c1:	8b 55 10             	mov    0x10(%ebp),%edx
 817e5c4:	0f b7 12             	movzwl (%edx),%edx
 817e5c7:	0f bf d2             	movswl %dx,%edx
 817e5ca:	89 44 24 18          	mov    %eax,0x18(%esp)
 817e5ce:	89 54 24 14          	mov    %edx,0x14(%esp)
 817e5d2:	c7 44 24 10 44 9c b8 	movl   $0x8b89c44,0x10(%esp)
 817e5d9:	08 
 817e5da:	c7 44 24 0c 71 00 00 	movl   $0x71,0xc(%esp)
 817e5e1:	00 
 817e5e2:	c7 44 24 08 c0 ab b8 	movl   $0x8b8abc0,0x8(%esp)
 817e5e9:	08 
 817e5ea:	c7 44 24 04 9c 9c b8 	movl   $0x8b89c9c,0x4(%esp)
 817e5f1:	08 
 817e5f2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817e5f9:	e8 0c 56 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817e5fe:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 817e605:	00 
 817e606:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 817e60d:	00 
 817e60e:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e611:	89 04 24             	mov    %eax,(%esp)
 817e614:	e8 29 d9 4f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 817e619:	b8 00 00 00 00       	mov    $0x0,%eax
 817e61e:	e9 ad 02 00 00       	jmp    817e8d0 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x40a>
 817e623:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 817e626:	89 c3                	mov    %eax,%ebx
 817e628:	e8 77 0a 00 00       	call   817f0a4 <_ZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEv>
 817e62d:	83 c0 04             	add    $0x4,%eax
 817e630:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 817e634:	89 04 24             	mov    %eax,(%esp)
 817e637:	e8 34 1b 73 00       	call   88b0170 <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption19isMaterialItemIndexEi>
 817e63c:	83 f0 01             	xor    $0x1,%eax
 817e63f:	84 c0                	test   %al,%al
 817e641:	74 67                	je     817e6aa <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x1e4>
 817e643:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e646:	89 04 24             	mov    %eax,(%esp)
 817e649:	e8 00 d6 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817e64e:	8b 55 b5             	mov    -0x4b(%ebp),%edx
 817e651:	89 44 24 18          	mov    %eax,0x18(%esp)
 817e655:	89 54 24 14          	mov    %edx,0x14(%esp)
 817e659:	c7 44 24 10 d0 9c b8 	movl   $0x8b89cd0,0x10(%esp)
 817e660:	08 
 817e661:	c7 44 24 0c 78 00 00 	movl   $0x78,0xc(%esp)
 817e668:	00 
 817e669:	c7 44 24 08 c0 ab b8 	movl   $0x8b8abc0,0x8(%esp)
 817e670:	08 
 817e671:	c7 44 24 04 9c 9c b8 	movl   $0x8b89c9c,0x4(%esp)
 817e678:	08 
 817e679:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817e680:	e8 85 55 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817e685:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 817e68c:	00 
 817e68d:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 817e694:	00 
 817e695:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e698:	89 04 24             	mov    %eax,(%esp)
 817e69b:	e8 a2 d8 4f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 817e6a0:	b8 00 00 00 00       	mov    $0x0,%eax
 817e6a5:	e9 26 02 00 00       	jmp    817e8d0 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x40a>
 817e6aa:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 817e6b0:	89 04 24             	mov    %eax,(%esp)
 817e6b3:	e8 9c d1 f4 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 817e6b8:	8b 45 10             	mov    0x10(%ebp),%eax
 817e6bb:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 817e6bf:	0f bf d0             	movswl %ax,%edx
 817e6c2:	8d 85 28 ff ff ff    	lea    -0xd8(%ebp),%eax
 817e6c8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817e6cc:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 817e6d3:	00 
 817e6d4:	8b 55 f0             	mov    -0x10(%ebp),%edx
 817e6d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e6db:	89 04 24             	mov    %eax,(%esp)
 817e6de:	e8 35 d2 37 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 817e6e3:	83 ec 04             	sub    $0x4,%esp
 817e6e6:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 817e6ec:	89 85 76 ff ff ff    	mov    %eax,-0x8a(%ebp)
 817e6f2:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 817e6f8:	89 85 7a ff ff ff    	mov    %eax,-0x86(%ebp)
 817e6fe:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 817e704:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 817e70a:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 817e710:	89 45 82             	mov    %eax,-0x7e(%ebp)
 817e713:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 817e719:	89 45 86             	mov    %eax,-0x7a(%ebp)
 817e71c:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 817e722:	89 45 8a             	mov    %eax,-0x76(%ebp)
 817e725:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 817e72b:	89 45 8e             	mov    %eax,-0x72(%ebp)
 817e72e:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 817e734:	89 45 92             	mov    %eax,-0x6e(%ebp)
 817e737:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 817e73d:	89 45 96             	mov    %eax,-0x6a(%ebp)
 817e740:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 817e746:	89 45 9a             	mov    %eax,-0x66(%ebp)
 817e749:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 817e74f:	89 45 9e             	mov    %eax,-0x62(%ebp)
 817e752:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 817e758:	89 45 a2             	mov    %eax,-0x5e(%ebp)
 817e75b:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 817e761:	89 45 a6             	mov    %eax,-0x5a(%ebp)
 817e764:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 817e76a:	89 45 aa             	mov    %eax,-0x56(%ebp)
 817e76d:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 817e773:	89 45 ae             	mov    %eax,-0x52(%ebp)
 817e776:	0f b6 85 64 ff ff ff 	movzbl -0x9c(%ebp),%eax
 817e77d:	88 45 b2             	mov    %al,-0x4e(%ebp)
 817e780:	8d 85 76 ff ff ff    	lea    -0x8a(%ebp),%eax
 817e786:	89 04 24             	mov    %eax,(%esp)
 817e789:	e8 d8 05 fa ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 817e78e:	84 c0                	test   %al,%al
 817e790:	74 6e                	je     817e800 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x33a>
 817e792:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e795:	89 04 24             	mov    %eax,(%esp)
 817e798:	e8 b1 d4 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817e79d:	8b 55 10             	mov    0x10(%ebp),%edx
 817e7a0:	0f b7 52 02          	movzwl 0x2(%edx),%edx
 817e7a4:	0f bf d2             	movswl %dx,%edx
 817e7a7:	89 44 24 18          	mov    %eax,0x18(%esp)
 817e7ab:	89 54 24 14          	mov    %edx,0x14(%esp)
 817e7af:	c7 44 24 10 1c 9d b8 	movl   $0x8b89d1c,0x10(%esp)
 817e7b6:	08 
 817e7b7:	c7 44 24 0c 83 00 00 	movl   $0x83,0xc(%esp)
 817e7be:	00 
 817e7bf:	c7 44 24 08 c0 ab b8 	movl   $0x8b8abc0,0x8(%esp)
 817e7c6:	08 
 817e7c7:	c7 44 24 04 9c 9c b8 	movl   $0x8b89c9c,0x4(%esp)
 817e7ce:	08 
 817e7cf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817e7d6:	e8 2f 54 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817e7db:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 817e7e2:	00 
 817e7e3:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 817e7ea:	00 
 817e7eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e7ee:	89 04 24             	mov    %eax,(%esp)
 817e7f1:	e8 4c d7 4f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 817e7f6:	b8 00 00 00 00       	mov    $0x0,%eax
 817e7fb:	e9 d0 00 00 00       	jmp    817e8d0 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x40a>
 817e800:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 817e806:	89 c3                	mov    %eax,%ebx
 817e808:	e8 8e d9 f4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 817e80d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 817e811:	89 04 24             	mov    %eax,(%esp)
 817e814:	e8 19 12 1e 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 817e819:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817e81c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 817e820:	74 19                	je     817e83b <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x375>
 817e822:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817e825:	8b 00                	mov    (%eax),%eax
 817e827:	83 c0 10             	add    $0x10,%eax
 817e82a:	8b 10                	mov    (%eax),%edx
 817e82c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817e82f:	89 04 24             	mov    %eax,(%esp)
 817e832:	ff d2                	call   *%edx
 817e834:	83 f0 01             	xor    $0x1,%eax
 817e837:	84 c0                	test   %al,%al
 817e839:	74 07                	je     817e842 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x37c>
 817e83b:	b8 01 00 00 00       	mov    $0x1,%eax
 817e840:	eb 05                	jmp    817e847 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x381>
 817e842:	b8 00 00 00 00       	mov    $0x0,%eax
 817e847:	84 c0                	test   %al,%al
 817e849:	74 07                	je     817e852 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x38c>
 817e84b:	b8 00 00 00 00       	mov    $0x0,%eax
 817e850:	eb 7e                	jmp    817e8d0 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x40a>
 817e852:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817e855:	89 04 24             	mov    %eax,(%esp)
 817e858:	e8 8f 05 00 00       	call   817edec <_ZNK5CItem14IsHiddenOptionEv>
 817e85d:	83 f0 01             	xor    $0x1,%eax
 817e860:	84 c0                	test   %al,%al
 817e862:	74 67                	je     817e8cb <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x405>
 817e864:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e867:	89 04 24             	mov    %eax,(%esp)
 817e86a:	e8 df d3 f4 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 817e86f:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 817e875:	89 44 24 18          	mov    %eax,0x18(%esp)
 817e879:	89 54 24 14          	mov    %edx,0x14(%esp)
 817e87d:	c7 44 24 10 74 9d b8 	movl   $0x8b89d74,0x10(%esp)
 817e884:	08 
 817e885:	c7 44 24 0c 94 00 00 	movl   $0x94,0xc(%esp)
 817e88c:	00 
 817e88d:	c7 44 24 08 c0 ab b8 	movl   $0x8b8abc0,0x8(%esp)
 817e894:	08 
 817e895:	c7 44 24 04 9c 9c b8 	movl   $0x8b89c9c,0x4(%esp)
 817e89c:	08 
 817e89d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 817e8a4:	e8 61 53 95 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 817e8a9:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 817e8b0:	00 
 817e8b1:	c7 44 24 04 4c 02 00 	movl   $0x24c,0x4(%esp)
 817e8b8:	00 
 817e8b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e8bc:	89 04 24             	mov    %eax,(%esp)
 817e8bf:	e8 7e d6 4f 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 817e8c4:	b8 00 00 00 00       	mov    $0x0,%eax
 817e8c9:	eb 05                	jmp    817e8d0 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE+0x40a>
 817e8cb:	b8 01 00 00 00       	mov    $0x1,%eax
 817e8d0:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 817e8d3:	c9                   	leave
 817e8d4:	c3                   	ret
 817e8d5:	90                   	nop

```

```c
// AvatarFixedHiddenOptionServer::CheckCondition @ 0x817e4c6

/* AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::CheckCondition
          (AvatarFixedHiddenOptionServer *this,CUser *param_1,SigAvatarHiddenOptionChange *param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  CDataManager *this_00;
  int iVar5;
  undefined1 local_dc [8];
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined1 local_a0;
  undefined2 local_8e;
  undefined2 uStack_8c;
  undefined2 local_8a;
  undefined2 uStack_88;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  undefined4 local_76;
  undefined4 local_72;
  undefined4 local_6e;
  undefined4 local_6a;
  undefined4 local_66;
  undefined4 local_62;
  undefined4 local_5e;
  undefined4 local_5a;
  undefined4 local_56;
  undefined1 local_52;
  undefined2 local_51;
  undefined2 uStack_4f;
  undefined2 local_4d;
  undefined2 uStack_4b;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  int local_14;
  CItem *local_10;
  
  local_14 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
  Inven_Item::Inven_Item((Inven_Item *)&local_51);
  CInventory::GetInvenSlot((int)local_dc,local_14);
  local_51 = (undefined2)local_dc._0_4_;
  uStack_4f = SUB42(local_dc._0_4_,2);
  local_4d = (undefined2)local_dc._4_4_;
  uStack_4b = SUB42(local_dc._4_4_,2);
  local_49 = local_d4;
  local_45 = local_d0;
  local_41 = local_cc;
  local_3d = local_c8;
  local_39 = local_c4;
  local_35 = local_c0;
  local_31 = local_bc;
  local_2d = local_b8;
  local_29 = local_b4;
  local_25 = local_b0;
  local_21 = local_ac;
  local_1d = local_a8;
  local_19 = local_a4;
  local_15 = local_a0;
  cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_51);
  if (cVar2 != '\0') {
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
               "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
               ,0x71,
               "AVATAR HIDDEN OPTION CHANGE : Material GetInvenSlot() failed. [slot:%d] [charac_no:%d]"
               ,(int)*(short *)param_2,uVar3);
    CUser::SendCmdErrorPacket(param_1,0x24c,0x16);
    return 0;
  }
  iVar5 = CONCAT22(local_4d,uStack_4f);
  iVar4 = ARAD::Singleton<AvatarFixedHiddenOptionServer>::Get();
  cVar2 = ARAD::SCRIPT::AvatarFixedHiddenOption::isMaterialItemIndex
                    ((AvatarFixedHiddenOption *)(iVar4 + 4),iVar5);
  if (cVar2 == '\x01') {
    Inven_Item::Inven_Item((Inven_Item *)&local_8e);
    iVar5 = (int)*(short *)(param_2 + 2);
    uVar3 = 2;
    CInventory::GetInvenSlot((int)local_dc,local_14);
    local_8e = (undefined2)local_dc._0_4_;
    uStack_8c = SUB42(local_dc._0_4_,2);
    local_8a = (undefined2)local_dc._4_4_;
    uStack_88 = SUB42(local_dc._4_4_,2);
    local_86 = local_d4;
    local_82 = local_d0;
    local_7e = local_cc;
    local_7a = local_c8;
    local_76 = local_c4;
    local_72 = local_c0;
    local_6e = local_bc;
    local_6a = local_b8;
    local_66 = local_b4;
    local_62 = local_b0;
    local_5e = local_ac;
    local_5a = local_a8;
    local_56 = local_a4;
    local_52 = local_a0;
    cVar2 = Inven_Item::isEmpty((Inven_Item *)&local_8e);
    if (cVar2 == '\0') {
      iVar4 = CONCAT22(local_8a,uStack_8c);
      this_00 = (CDataManager *)G_CDataManager();
      local_10 = (CItem *)CDataManager::find_item(this_00,iVar4);
      if ((local_10 == (CItem *)0x0) ||
         (cVar2 = (**(code **)(*(int *)local_10 + 0x10))(local_10,iVar4,uVar3,iVar5),
         cVar2 != '\x01')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar3 = 0;
      }
      else {
        cVar2 = CItem::IsHiddenOption(local_10);
        if (cVar2 == '\x01') {
          uVar3 = 1;
        }
        else {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          LogManager::logFormat
                    (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
                     "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
                     ,0x94,
                     "AVATAR HIDDEN OPTION CHANGE : IsHiddenOption() failed. [index:%d] [charac_no:%d]"
                     ,CONCAT22(local_8a,uStack_8c),uVar3);
          CUser::SendCmdErrorPacket(param_1,0x24c,0x11);
          uVar3 = 0;
        }
      }
      return uVar3;
    }
    uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    LogManager::logFormat
              (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
               "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
               ,0x83,
               "AVATAR HIDDEN OPTION CHANGE : Avatar GetInvenSlot() failed. [slot:%d] [charac_no:%d]"
               ,(int)*(short *)(param_2 + 2),uVar3);
    CUser::SendCmdErrorPacket(param_1,0x24c,0x16);
    return 0;
  }
  uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  LogManager::logFormat
            (1,"localjapan/Arad_AvatarFixedHiddenOptionServer.cpp",
             "bool AvatarFixedHiddenOptionServer::CheckCondition(CUser*, arad::SigAvatarHiddenOptionChange*)"
             ,0x78,"AVATAR HIDDEN OPTION CHANGE : isMaterial() failed [index:%d] [charac_no:%d]",
             CONCAT22(local_4d,uStack_4f),uVar3);
  CUser::SendCmdErrorPacket(param_1,0x24c,0x11);
  return 0;
}

```

---

## Destroy

```asm
// === 0817e1e2 AvatarFixedHiddenOptionServer::Destroy  [0x0817e1e2-0x817e1eb] ===
 817e1e2:	55                   	push   %ebp
 817e1e3:	89 e5                	mov    %esp,%ebp
 817e1e5:	b8 01 00 00 00       	mov    $0x1,%eax
 817e1ea:	5d                   	pop    %ebp
 817e1eb:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::Destroy @ 0x817e1e2

/* AvatarFixedHiddenOptionServer::Destroy() */

undefined4 AvatarFixedHiddenOptionServer::Destroy(void)

{
  return 1;
}

```

---

## GetRandomInput

```asm
// === 0817e334 AvatarFixedHiddenOptionServer::GetRandomInput  [0x0817e334-0x817e391] ===
 817e334:	55                   	push   %ebp
 817e335:	89 e5                	mov    %esp,%ebp
 817e337:	83 ec 18             	sub    $0x18,%esp
 817e33a:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e33d:	83 f8 05             	cmp    $0x5,%eax
 817e340:	7e 07                	jle    817e349 <_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY+0x15>
 817e342:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 817e347:	eb 46                	jmp    817e38f <_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY+0x5b>
 817e349:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e34c:	89 d0                	mov    %edx,%eax
 817e34e:	01 c0                	add    %eax,%eax
 817e350:	01 d0                	add    %edx,%eax
 817e352:	c1 e0 02             	shl    $0x2,%eax
 817e355:	83 c0 50             	add    $0x50,%eax
 817e358:	03 45 08             	add    0x8(%ebp),%eax
 817e35b:	89 04 24             	mov    %eax,(%esp)
 817e35e:	e8 5d fe f0 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 817e363:	85 c0                	test   %eax,%eax
 817e365:	0f 94 c0             	sete   %al
 817e368:	84 c0                	test   %al,%al
 817e36a:	74 07                	je     817e373 <_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY+0x3f>
 817e36c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 817e371:	eb 1c                	jmp    817e38f <_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY+0x5b>
 817e373:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e376:	89 d0                	mov    %edx,%eax
 817e378:	01 c0                	add    %eax,%eax
 817e37a:	01 d0                	add    %edx,%eax
 817e37c:	c1 e0 02             	shl    $0x2,%eax
 817e37f:	83 c0 50             	add    $0x50,%eax
 817e382:	03 45 08             	add    0x8(%ebp),%eax
 817e385:	89 04 24             	mov    %eax,(%esp)
 817e388:	e8 e1 0b 00 00       	call   817ef6e <_ZNSt6vectorIiSaIiEE4backEv>
 817e38d:	8b 00                	mov    (%eax),%eax
 817e38f:	c9                   	leave
 817e390:	c3                   	ret
 817e391:	90                   	nop

```

```c
// AvatarFixedHiddenOptionServer::GetRandomInput @ 0x817e334

/* AvatarFixedHiddenOptionServer::GetRandomInput(ENUM_RARITY) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::GetRandomInput(AvatarFixedHiddenOptionServer *this,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 < 6) {
    iVar2 = std::vector<int,std::allocator<int>>::size
                      ((vector<int,std::allocator<int>> *)(this + param_2 * 0xc + 0x50));
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      puVar3 = (undefined4 *)std::vector<int,std::allocator<int>>::back();
      uVar1 = *puVar3;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

```

---

## GetSkillIndex

```asm
// === 0817e1ec AvatarFixedHiddenOptionServer::GetSkillIndex  [0x0817e1ec-0x817e23d] ===
 817e1ec:	55                   	push   %ebp
 817e1ed:	89 e5                	mov    %esp,%ebp
 817e1ef:	83 ec 28             	sub    $0x28,%esp
 817e1f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e1f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 817e1f9:	8b 45 08             	mov    0x8(%ebp),%eax
 817e1fc:	89 04 24             	mov    %eax,(%esp)
 817e1ff:	e8 30 01 00 00       	call   817e334 <_ZN29AvatarFixedHiddenOptionServer14GetRandomInputE11ENUM_RARITY>
 817e204:	89 45 f0             	mov    %eax,-0x10(%ebp)
 817e207:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 817e20b:	75 07                	jne    817e214 <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITY+0x28>
 817e20d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 817e212:	eb 27                	jmp    817e23b <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITY+0x4f>
 817e214:	8b 45 f0             	mov    -0x10(%ebp),%eax
 817e217:	89 04 24             	mov    %eax,(%esp)
 817e21a:	e8 68 39 53 00       	call   86b1b87 <_Z12get_rand_inti>
 817e21f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817e222:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817e225:	89 44 24 08          	mov    %eax,0x8(%esp)
 817e229:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e22c:	89 44 24 04          	mov    %eax,0x4(%esp)
 817e230:	8b 45 08             	mov    0x8(%ebp),%eax
 817e233:	89 04 24             	mov    %eax,(%esp)
 817e236:	e8 03 00 00 00       	call   817e23e <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi>
 817e23b:	c9                   	leave
 817e23c:	c3                   	ret
 817e23d:	90                   	nop

```

```c
// AvatarFixedHiddenOptionServer::GetSkillIndex @ 0x817e1ec

/* AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::GetSkillIndex(AvatarFixedHiddenOptionServer *this,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = GetRandomInput(this,param_2);
  if (iVar1 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = get_rand_int(iVar1);
    uVar2 = GetSkillIndex(this,param_2,uVar2);
  }
  return uVar2;
}

```

---

## GetSkillIndex_0817e23e

```asm
// === 0817e23e AvatarFixedHiddenOptionServer::GetSkillIndex  [0x0817e23e-0x817e333] ===
 817e23e:	55                   	push   %ebp
 817e23f:	89 e5                	mov    %esp,%ebp
 817e241:	83 ec 28             	sub    $0x28,%esp
 817e244:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e247:	89 d0                	mov    %edx,%eax
 817e249:	01 c0                	add    %eax,%eax
 817e24b:	01 d0                	add    %edx,%eax
 817e24d:	c1 e0 02             	shl    $0x2,%eax
 817e250:	83 c0 50             	add    $0x50,%eax
 817e253:	03 45 08             	add    0x8(%ebp),%eax
 817e256:	89 04 24             	mov    %eax,(%esp)
 817e259:	e8 10 0d 00 00       	call   817ef6e <_ZNSt6vectorIiSaIiEE4backEv>
 817e25e:	8b 10                	mov    (%eax),%edx
 817e260:	8b 45 10             	mov    0x10(%ebp),%eax
 817e263:	39 c2                	cmp    %eax,%edx
 817e265:	7e 07                	jle    817e26e <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi+0x30>
 817e267:	8b 45 10             	mov    0x10(%ebp),%eax
 817e26a:	85 c0                	test   %eax,%eax
 817e26c:	79 07                	jns    817e275 <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi+0x37>
 817e26e:	b8 01 00 00 00       	mov    $0x1,%eax
 817e273:	eb 05                	jmp    817e27a <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi+0x3c>
 817e275:	b8 00 00 00 00       	mov    $0x0,%eax
 817e27a:	84 c0                	test   %al,%al
 817e27c:	74 0a                	je     817e288 <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi+0x4a>
 817e27e:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 817e283:	e9 aa 00 00 00       	jmp    817e332 <_ZN29AvatarFixedHiddenOptionServer13GetSkillIndexE11ENUM_RARITYi+0xf4>
 817e288:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e28b:	89 d0                	mov    %edx,%eax
 817e28d:	01 c0                	add    %eax,%eax
 817e28f:	01 d0                	add    %edx,%eax
 817e291:	c1 e0 02             	shl    $0x2,%eax
 817e294:	83 c0 50             	add    $0x50,%eax
 817e297:	89 c2                	mov    %eax,%edx
 817e299:	03 55 08             	add    0x8(%ebp),%edx
 817e29c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 817e29f:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e2a3:	89 04 24             	mov    %eax,(%esp)
 817e2a6:	e8 c1 ff f0 ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 817e2ab:	83 ec 04             	sub    $0x4,%esp
 817e2ae:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e2b1:	89 d0                	mov    %edx,%eax
 817e2b3:	01 c0                	add    %eax,%eax
 817e2b5:	01 d0                	add    %edx,%eax
 817e2b7:	c1 e0 02             	shl    $0x2,%eax
 817e2ba:	83 c0 50             	add    $0x50,%eax
 817e2bd:	89 c2                	mov    %eax,%edx
 817e2bf:	03 55 08             	add    0x8(%ebp),%edx
 817e2c2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 817e2c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e2c9:	89 04 24             	mov    %eax,(%esp)
 817e2cc:	e8 77 ff f0 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 817e2d1:	83 ec 04             	sub    $0x4,%esp
 817e2d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817e2d7:	8d 55 10             	lea    0x10(%ebp),%edx
 817e2da:	89 54 24 0c          	mov    %edx,0xc(%esp)
 817e2de:	8b 55 ec             	mov    -0x14(%ebp),%edx
 817e2e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 817e2e5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 817e2e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e2ec:	89 04 24             	mov    %eax,(%esp)
 817e2ef:	e8 c5 0c 00 00       	call   817efb9 <_ZSt11upper_boundIN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEEiET_S7_S7_RKT0_>
 817e2f4:	83 ec 04             	sub    $0x4,%esp
 817e2f7:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e2fa:	89 d0                	mov    %edx,%eax
 817e2fc:	01 c0                	add    %eax,%eax
 817e2fe:	01 d0                	add    %edx,%eax
 817e300:	c1 e0 02             	shl    $0x2,%eax
 817e303:	83 c0 50             	add    $0x50,%eax
 817e306:	89 c2                	mov    %eax,%edx
 817e308:	03 55 08             	add    0x8(%ebp),%edx
 817e30b:	8d 45 f4             	lea    -0xc(%ebp),%eax
 817e30e:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e312:	89 04 24             	mov    %eax,(%esp)
 817e315:	e8 2e ff f0 ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 817e31a:	83 ec 04             	sub    $0x4,%esp
 817e31d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 817e320:	89 44 24 04          	mov    %eax,0x4(%esp)
 817e324:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817e327:	89 04 24             	mov    %eax,(%esp)
 817e32a:	e8 4c 05 f1 ff       	call   808e87b <_ZN9__gnu_cxxmiIPiSt6vectorIiSaIiEEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS8_SB_>
 817e32f:	83 c0 01             	add    $0x1,%eax
 817e332:	c9                   	leave
 817e333:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::GetSkillIndex @ 0x817e23e

/* AvatarFixedHiddenOptionServer::GetSkillIndex(ENUM_RARITY, int) */

int __thiscall
AvatarFixedHiddenOptionServer::GetSkillIndex(undefined4 this,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  __normal_iterator local_10 [12];
  
  piVar2 = (int *)std::vector<int,std::allocator<int>>::back();
  if ((param_3 < *piVar2) && (-1 < param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    iVar3 = -1;
  }
  else {
    std::vector<int,std::allocator<int>>::end();
    std::vector<int,std::allocator<int>>::begin();
    std::upper_bound<__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>,int>
              (local_1c,local_14,local_18,&param_3);
    std::vector<int,std::allocator<int>>::begin();
    iVar3 = __gnu_cxx::operator-(local_1c,local_10);
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

```

---

## Init

```asm
// === 0817e3e8 AvatarFixedHiddenOptionServer::Init  [0x0817e3e8-0x817e4c5] ===
 817e3e8:	55                   	push   %ebp
 817e3e9:	89 e5                	mov    %esp,%ebp
 817e3eb:	83 ec 28             	sub    $0x28,%esp
 817e3ee:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 817e3f5:	e9 b6 00 00 00       	jmp    817e4b0 <_ZN29AvatarFixedHiddenOptionServer4InitEv+0xc8>
 817e3fa:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 817e401:	8b 55 ec             	mov    -0x14(%ebp),%edx
 817e404:	89 d0                	mov    %edx,%eax
 817e406:	01 c0                	add    %eax,%eax
 817e408:	01 d0                	add    %edx,%eax
 817e40a:	c1 e0 02             	shl    $0x2,%eax
 817e40d:	03 45 08             	add    0x8(%ebp),%eax
 817e410:	83 c0 04             	add    $0x4,%eax
 817e413:	89 04 24             	mov    %eax,(%esp)
 817e416:	e8 4d 0c 00 00       	call   817f068 <_ZNKSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE4sizeEv>
 817e41b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 817e41e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 817e421:	83 e8 01             	sub    $0x1,%eax
 817e424:	89 c1                	mov    %eax,%ecx
 817e426:	8b 55 ec             	mov    -0x14(%ebp),%edx
 817e429:	89 d0                	mov    %edx,%eax
 817e42b:	01 c0                	add    %eax,%eax
 817e42d:	01 d0                	add    %edx,%eax
 817e42f:	c1 e0 02             	shl    $0x2,%eax
 817e432:	83 c0 50             	add    $0x50,%eax
 817e435:	03 45 08             	add    0x8(%ebp),%eax
 817e438:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 817e43c:	89 04 24             	mov    %eax,(%esp)
 817e43f:	e8 00 0a 00 00       	call   817ee44 <_ZNSt6vectorIiSaIiEE7reserveEj>
 817e444:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 817e44b:	eb 52                	jmp    817e49f <_ZN29AvatarFixedHiddenOptionServer4InitEv+0xb7>
 817e44d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 817e450:	8b 55 ec             	mov    -0x14(%ebp),%edx
 817e453:	89 d0                	mov    %edx,%eax
 817e455:	01 c0                	add    %eax,%eax
 817e457:	01 d0                	add    %edx,%eax
 817e459:	c1 e0 02             	shl    $0x2,%eax
 817e45c:	03 45 08             	add    0x8(%ebp),%eax
 817e45f:	83 c0 04             	add    $0x4,%eax
 817e462:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 817e466:	89 04 24             	mov    %eax,(%esp)
 817e469:	e8 1c 0c 00 00       	call   817f08a <_ZNSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EEixEj>
 817e46e:	8b 50 10             	mov    0x10(%eax),%edx
 817e471:	8b 45 e8             	mov    -0x18(%ebp),%eax
 817e474:	8d 04 02             	lea    (%edx,%eax,1),%eax
 817e477:	89 45 e8             	mov    %eax,-0x18(%ebp)
 817e47a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 817e47d:	89 d0                	mov    %edx,%eax
 817e47f:	01 c0                	add    %eax,%eax
 817e481:	01 d0                	add    %edx,%eax
 817e483:	c1 e0 02             	shl    $0x2,%eax
 817e486:	83 c0 50             	add    $0x50,%eax
 817e489:	03 45 08             	add    0x8(%ebp),%eax
 817e48c:	8d 55 e8             	lea    -0x18(%ebp),%edx
 817e48f:	89 54 24 04          	mov    %edx,0x4(%esp)
 817e493:	89 04 24             	mov    %eax,(%esp)
 817e496:	e8 8b 2c f9 ff       	call   8111126 <_ZNSt6vectorIiSaIiEE9push_backERKi>
 817e49b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 817e49f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 817e4a2:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 817e4a5:	0f 9c c0             	setl   %al
 817e4a8:	84 c0                	test   %al,%al
 817e4aa:	75 a1                	jne    817e44d <_ZN29AvatarFixedHiddenOptionServer4InitEv+0x65>
 817e4ac:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 817e4b0:	83 7d ec 05          	cmpl   $0x5,-0x14(%ebp)
 817e4b4:	0f 9e c0             	setle  %al
 817e4b7:	84 c0                	test   %al,%al
 817e4b9:	0f 85 3b ff ff ff    	jne    817e3fa <_ZN29AvatarFixedHiddenOptionServer4InitEv+0x12>
 817e4bf:	b8 01 00 00 00       	mov    $0x1,%eax
 817e4c4:	c9                   	leave
 817e4c5:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::Init @ 0x817e3e8

/* AvatarFixedHiddenOptionServer::Init() */

undefined4 __thiscall AvatarFixedHiddenOptionServer::Init(AvatarFixedHiddenOptionServer *this)

{
  int iVar1;
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
    local_1c = 0;
    local_14 = std::
               vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
               ::size((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                       *)(this + local_18 * 0xc + 4));
    std::vector<int,std::allocator<int>>::reserve
              ((vector<int,std::allocator<int>> *)(this + local_18 * 0xc + 0x50),local_14 - 1);
    for (local_10 = 1; (int)local_10 < local_14; local_10 = local_10 + 1) {
      iVar1 = std::
              vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
              ::operator[]((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                            *)(this + local_18 * 0xc + 4),local_10);
      local_1c = *(int *)(iVar1 + 0x10) + local_1c;
      std::vector<int,std::allocator<int>>::push_back
                ((vector<int,std::allocator<int>> *)(this + local_18 * 0xc + 0x50),&local_1c);
    }
  }
  return 1;
}

```

---

## IsVaildSkillIndex

```asm
// === 0817e392 AvatarFixedHiddenOptionServer::IsVaildSkillIndex  [0x0817e392-0x817e3e7] ===
 817e392:	55                   	push   %ebp
 817e393:	89 e5                	mov    %esp,%ebp
 817e395:	83 ec 28             	sub    $0x28,%esp
 817e398:	8b 45 0c             	mov    0xc(%ebp),%eax
 817e39b:	83 f8 05             	cmp    $0x5,%eax
 817e39e:	7e 07                	jle    817e3a7 <_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi+0x15>
 817e3a0:	b8 00 00 00 00       	mov    $0x0,%eax
 817e3a5:	eb 3e                	jmp    817e3e5 <_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi+0x53>
 817e3a7:	8b 55 0c             	mov    0xc(%ebp),%edx
 817e3aa:	89 d0                	mov    %edx,%eax
 817e3ac:	01 c0                	add    %eax,%eax
 817e3ae:	01 d0                	add    %edx,%eax
 817e3b0:	c1 e0 02             	shl    $0x2,%eax
 817e3b3:	03 45 08             	add    0x8(%ebp),%eax
 817e3b6:	83 c0 04             	add    $0x4,%eax
 817e3b9:	89 04 24             	mov    %eax,(%esp)
 817e3bc:	e8 a7 0c 00 00       	call   817f068 <_ZNKSt6vectorI30STAvatarHiddenAbilityVariationSaIS0_EE4sizeEv>
 817e3c1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 817e3c4:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 817e3c8:	75 07                	jne    817e3d1 <_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi+0x3f>
 817e3ca:	b8 00 00 00 00       	mov    $0x0,%eax
 817e3cf:	eb 14                	jmp    817e3e5 <_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi+0x53>
 817e3d1:	8b 45 10             	mov    0x10(%ebp),%eax
 817e3d4:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 817e3d7:	7d 07                	jge    817e3e0 <_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi+0x4e>
 817e3d9:	b8 01 00 00 00       	mov    $0x1,%eax
 817e3de:	eb 05                	jmp    817e3e5 <_ZN29AvatarFixedHiddenOptionServer17IsVaildSkillIndexE11ENUM_RARITYi+0x53>
 817e3e0:	b8 00 00 00 00       	mov    $0x0,%eax
 817e3e5:	c9                   	leave
 817e3e6:	c3                   	ret
 817e3e7:	90                   	nop

```

```c
// AvatarFixedHiddenOptionServer::IsVaildSkillIndex @ 0x817e392

/* AvatarFixedHiddenOptionServer::IsVaildSkillIndex(ENUM_RARITY, int) */

undefined4 __thiscall
AvatarFixedHiddenOptionServer::IsVaildSkillIndex
          (AvatarFixedHiddenOptionServer *this,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 6) {
    iVar2 = std::
            vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>::
            size((vector<STAvatarHiddenAbilityVariation,std::allocator<STAvatarHiddenAbilityVariation>>
                  *)(this + param_2 * 0xc + 4));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else if (param_3 < iVar2) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## Load

```asm
// === 0817e154 AvatarFixedHiddenOptionServer::Load  [0x0817e154-0x817e1e1] ===
 817e154:	55                   	push   %ebp
 817e155:	89 e5                	mov    %esp,%ebp
 817e157:	83 ec 38             	sub    $0x38,%esp
 817e15a:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 817e161:	00 
 817e162:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 817e169:	00 
 817e16a:	c7 44 24 0c 09 00 00 	movl   $0x9,0xc(%esp)
 817e171:	00 
 817e172:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 817e179:	00 
 817e17a:	c7 44 24 04 20 ac b8 	movl   $0x8b8ac20,0x4(%esp)
 817e181:	08 
 817e182:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817e185:	89 04 24             	mov    %eax,(%esp)
 817e188:	e8 b9 15 3d 00       	call   854f746 <_ZN8cMyTraceC1EPKciibb>
 817e18d:	c7 44 24 04 20 9c b8 	movl   $0x8b89c20,0x4(%esp)
 817e194:	08 
 817e195:	8d 45 e8             	lea    -0x18(%ebp),%eax
 817e198:	89 04 24             	mov    %eax,(%esp)
 817e19b:	e8 e8 15 3d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 817e1a0:	8b 45 08             	mov    0x8(%ebp),%eax
 817e1a3:	83 c0 04             	add    $0x4,%eax
 817e1a6:	89 04 24             	mov    %eax,(%esp)
 817e1a9:	e8 20 0c 73 00       	call   88aedce <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOption10loadScriptEv>
 817e1ae:	85 c0                	test   %eax,%eax
 817e1b0:	75 12                	jne    817e1c4 <_ZN29AvatarFixedHiddenOptionServer4LoadEv+0x70>
 817e1b2:	8b 45 08             	mov    0x8(%ebp),%eax
 817e1b5:	89 04 24             	mov    %eax,(%esp)
 817e1b8:	e8 2b 02 00 00       	call   817e3e8 <_ZN29AvatarFixedHiddenOptionServer4InitEv>
 817e1bd:	83 f0 01             	xor    $0x1,%eax
 817e1c0:	84 c0                	test   %al,%al
 817e1c2:	74 07                	je     817e1cb <_ZN29AvatarFixedHiddenOptionServer4LoadEv+0x77>
 817e1c4:	b8 01 00 00 00       	mov    $0x1,%eax
 817e1c9:	eb 05                	jmp    817e1d0 <_ZN29AvatarFixedHiddenOptionServer4LoadEv+0x7c>
 817e1cb:	b8 00 00 00 00       	mov    $0x0,%eax
 817e1d0:	84 c0                	test   %al,%al
 817e1d2:	74 07                	je     817e1db <_ZN29AvatarFixedHiddenOptionServer4LoadEv+0x87>
 817e1d4:	b8 00 00 00 00       	mov    $0x0,%eax
 817e1d9:	eb 05                	jmp    817e1e0 <_ZN29AvatarFixedHiddenOptionServer4LoadEv+0x8c>
 817e1db:	b8 01 00 00 00       	mov    $0x1,%eax
 817e1e0:	c9                   	leave
 817e1e1:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::Load @ 0x817e154

/* AvatarFixedHiddenOptionServer::Load() */

bool __thiscall AvatarFixedHiddenOptionServer::Load(AvatarFixedHiddenOptionServer *this)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_1c [24];
  
  cMyTrace::cMyTrace(local_1c,"virtual bool AvatarFixedHiddenOptionServer::Load()",0x1a,9,true,false
                    );
  cMyTrace::operator()(local_1c,"\t- Loading Avatar Hidden Option - ");
  iVar3 = ARAD::SCRIPT::AvatarFixedHiddenOption::loadScript((AvatarFixedHiddenOption *)(this + 4));
  if ((iVar3 == 0) && (cVar2 = Init(this), cVar2 == '\x01')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return !bVar1;
}

```

---

## UnitTest

```asm
// === 0817ecd8 AvatarFixedHiddenOptionServer::UnitTest  [0x0817ecd8-0x817ed8e] ===
 817ecd8:	55                   	push   %ebp
 817ecd9:	89 e5                	mov    %esp,%ebp
 817ecdb:	83 ec 18             	sub    $0x18,%esp
 817ecde:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 817ece2:	0f 84 a4 00 00 00    	je     817ed8c <_ZN29AvatarFixedHiddenOptionServer8UnitTestEPS_+0xb4>
 817ece8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817ecef:	00 
 817ecf0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 817ecf7:	00 
 817ecf8:	8b 45 08             	mov    0x8(%ebp),%eax
 817ecfb:	89 04 24             	mov    %eax,(%esp)
 817ecfe:	e8 64 ff ff ff       	call   817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>
 817ed03:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 817ed0a:	00 
 817ed0b:	c7 44 24 04 95 00 00 	movl   $0x95,0x4(%esp)
 817ed12:	00 
 817ed13:	8b 45 08             	mov    0x8(%ebp),%eax
 817ed16:	89 04 24             	mov    %eax,(%esp)
 817ed19:	e8 49 ff ff ff       	call   817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>
 817ed1e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 817ed25:	00 
 817ed26:	c7 44 24 04 96 00 00 	movl   $0x96,0x4(%esp)
 817ed2d:	00 
 817ed2e:	8b 45 08             	mov    0x8(%ebp),%eax
 817ed31:	89 04 24             	mov    %eax,(%esp)
 817ed34:	e8 2e ff ff ff       	call   817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>
 817ed39:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 817ed40:	00 
 817ed41:	c7 44 24 04 dd 26 00 	movl   $0x26dd,0x4(%esp)
 817ed48:	00 
 817ed49:	8b 45 08             	mov    0x8(%ebp),%eax
 817ed4c:	89 04 24             	mov    %eax,(%esp)
 817ed4f:	e8 13 ff ff ff       	call   817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>
 817ed54:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 817ed5b:	00 
 817ed5c:	c7 44 24 04 de 26 00 	movl   $0x26de,0x4(%esp)
 817ed63:	00 
 817ed64:	8b 45 08             	mov    0x8(%ebp),%eax
 817ed67:	89 04 24             	mov    %eax,(%esp)
 817ed6a:	e8 f8 fe ff ff       	call   817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>
 817ed6f:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 817ed76:	00 
 817ed77:	c7 44 24 04 0f 27 00 	movl   $0x270f,0x4(%esp)
 817ed7e:	00 
 817ed7f:	8b 45 08             	mov    0x8(%ebp),%eax
 817ed82:	89 04 24             	mov    %eax,(%esp)
 817ed85:	e8 dd fe ff ff       	call   817ec67 <_ZL5Test1P29AvatarFixedHiddenOptionServerii>
 817ed8a:	eb 01                	jmp    817ed8d <_ZN29AvatarFixedHiddenOptionServer8UnitTestEPS_+0xb5>
 817ed8c:	90                   	nop
 817ed8d:	c9                   	leave
 817ed8e:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::UnitTest @ 0x817ecd8

/* AvatarFixedHiddenOptionServer::UnitTest(AvatarFixedHiddenOptionServer*) */

void AvatarFixedHiddenOptionServer::UnitTest(AvatarFixedHiddenOptionServer *param_1)

{
  if (param_1 != (AvatarFixedHiddenOptionServer *)0x0) {
    Test1(param_1,0,1);
    Test1(param_1,0x95,1);
    Test1(param_1,0x96,2);
    Test1(param_1,0x26dd,0x3e);
    Test1(param_1,0x26de,0x3f);
    Test1(param_1,9999,0x3f);
  }
  return;
}

```

---

## ~AvatarFixedHiddenOptionServer

```asm
// === 0817e0e6 AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer  [0x0817e0e6-0x817e153] ===
 817e0e6:	55                   	push   %ebp
 817e0e7:	89 e5                	mov    %esp,%ebp
 817e0e9:	56                   	push   %esi
 817e0ea:	53                   	push   %ebx
 817e0eb:	83 ec 10             	sub    $0x10,%esp
 817e0ee:	8b 45 08             	mov    0x8(%ebp),%eax
 817e0f1:	c7 00 60 ac b8 08    	movl   $0x8b8ac60,(%eax)
 817e0f7:	8b 45 08             	mov    0x8(%ebp),%eax
 817e0fa:	83 c0 50             	add    $0x50,%eax
 817e0fd:	85 c0                	test   %eax,%eax
 817e0ff:	74 3e                	je     817e13f <_ZN29AvatarFixedHiddenOptionServerD1Ev+0x59>
 817e101:	8b 45 08             	mov    0x8(%ebp),%eax
 817e104:	83 c0 50             	add    $0x50,%eax
 817e107:	8d 58 48             	lea    0x48(%eax),%ebx
 817e10a:	8b 45 08             	mov    0x8(%ebp),%eax
 817e10d:	83 c0 50             	add    $0x50,%eax
 817e110:	39 c3                	cmp    %eax,%ebx
 817e112:	74 2b                	je     817e13f <_ZN29AvatarFixedHiddenOptionServerD1Ev+0x59>
 817e114:	83 eb 0c             	sub    $0xc,%ebx
 817e117:	89 1c 24             	mov    %ebx,(%esp)
 817e11a:	e8 bb 5c f0 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 817e11f:	eb e9                	jmp    817e10a <_ZN29AvatarFixedHiddenOptionServerD1Ev+0x24>
 817e121:	89 d3                	mov    %edx,%ebx
 817e123:	89 c6                	mov    %eax,%esi
 817e125:	8b 45 08             	mov    0x8(%ebp),%eax
 817e128:	83 c0 04             	add    $0x4,%eax
 817e12b:	89 04 24             	mov    %eax,(%esp)
 817e12e:	e8 2b 0c 73 00       	call   88aed5e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev>
 817e133:	89 f0                	mov    %esi,%eax
 817e135:	89 da                	mov    %ebx,%edx
 817e137:	89 04 24             	mov    %eax,(%esp)
 817e13a:	e8 11 56 96 00       	call   8ae3750 <_Unwind_Resume>
 817e13f:	8b 45 08             	mov    0x8(%ebp),%eax
 817e142:	83 c0 04             	add    $0x4,%eax
 817e145:	89 04 24             	mov    %eax,(%esp)
 817e148:	e8 11 0c 73 00       	call   88aed5e <_ZN4ARAD6SCRIPT23AvatarFixedHiddenOptionD1Ev>
 817e14d:	83 c4 10             	add    $0x10,%esp
 817e150:	5b                   	pop    %ebx
 817e151:	5e                   	pop    %esi
 817e152:	5d                   	pop    %ebp
 817e153:	c3                   	ret

```

```c
// AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer @ 0x817e0e6

/* AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer() */

void __thiscall
AvatarFixedHiddenOptionServer::~AvatarFixedHiddenOptionServer(AvatarFixedHiddenOptionServer *this)

{
  vector<int,std::allocator<int>> *this_00;
  
  *(undefined ***)this = &PTR_Load_08b8ac60;
  if (this != (AvatarFixedHiddenOptionServer *)0xffffffb0) {
    this_00 = (vector<int,std::allocator<int>> *)(this + 0x98);
    while (this_00 != (vector<int,std::allocator<int>> *)(this + 0x50)) {
      this_00 = this_00 + -0xc;
                    /* try { // try from 0817e11a to 0817e11e has its CatchHandler @ 0817e121 */
      std::vector<int,std::allocator<int>>::~vector(this_00);
    }
  }
  ARAD::SCRIPT::AvatarFixedHiddenOption::~AvatarFixedHiddenOption
            ((AvatarFixedHiddenOption *)(this + 4));
  return;
}

```

