# Dispatcher_UseDye

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081e727e Dispatcher_UseDye::check_error  [0x081e727e-0x81e72c3] ===
 81e727e:	55                   	push   %ebp
 81e727f:	89 e5                	mov    %esp,%ebp
 81e7281:	83 ec 28             	sub    $0x28,%esp
 81e7284:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7287:	89 04 24             	mov    %eax,(%esp)
 81e728a:	e8 fd 30 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e728f:	83 f8 03             	cmp    $0x3,%eax
 81e7292:	0f 95 c0             	setne  %al
 81e7295:	84 c0                	test   %al,%al
 81e7297:	74 07                	je     81e72a0 <_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE+0x22>
 81e7299:	b8 13 00 00 00       	mov    $0x13,%eax
 81e729e:	eb 21                	jmp    81e72c1 <_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE+0x43>
 81e72a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e72a3:	89 04 24             	mov    %eax,(%esp)
 81e72a6:	e8 53 30 ef ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 81e72ab:	84 c0                	test   %al,%al
 81e72ad:	74 07                	je     81e72b6 <_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE+0x38>
 81e72af:	b8 01 00 00 00       	mov    $0x1,%eax
 81e72b4:	eb 0b                	jmp    81e72c1 <_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE+0x43>
 81e72b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81e72b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e72bc:	b8 00 00 00 00       	mov    $0x0,%eax
 81e72c1:	c9                   	leave
 81e72c2:	c3                   	ret
 81e72c3:	90                   	nop

```

```c
// Dispatcher_UseDye::check_error @ 0x81e727e

/* Dispatcher_UseDye::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_UseDye::check_error(CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    cVar1 = CUser::CheckInTrade((CUser *)param_2);
    if (cVar1 == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0x13;
  }
  return uVar3;
}

```

---

## getItem

```asm
// === 081e71c0 Dispatcher_UseDye::getItem  [0x081e71c0-0x81e727d] ===
 81e71c0:	55                   	push   %ebp
 81e71c1:	89 e5                	mov    %esp,%ebp
 81e71c3:	56                   	push   %esi
 81e71c4:	53                   	push   %ebx
 81e71c5:	83 ec 60             	sub    $0x60,%esp
 81e71c8:	8b 45 14             	mov    0x14(%ebp),%eax
 81e71cb:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 81e71cf:	0f bf 75 f4          	movswl -0xc(%ebp),%esi
 81e71d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e71d6:	89 04 24             	mov    %eax,(%esp)
 81e71d9:	e8 a0 30 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e71de:	8b 5d 18             	mov    0x18(%ebp),%ebx
 81e71e1:	8d 55 a8             	lea    -0x58(%ebp),%edx
 81e71e4:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e71e8:	8b 4d 10             	mov    0x10(%ebp),%ecx
 81e71eb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81e71ef:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e71f3:	89 14 24             	mov    %edx,(%esp)
 81e71f6:	e8 1d 47 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e71fb:	83 ec 04             	sub    $0x4,%esp
 81e71fe:	8b 45 a8             	mov    -0x58(%ebp),%eax
 81e7201:	89 03                	mov    %eax,(%ebx)
 81e7203:	8b 45 ac             	mov    -0x54(%ebp),%eax
 81e7206:	89 43 04             	mov    %eax,0x4(%ebx)
 81e7209:	8b 45 b0             	mov    -0x50(%ebp),%eax
 81e720c:	89 43 08             	mov    %eax,0x8(%ebx)
 81e720f:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 81e7212:	89 43 0c             	mov    %eax,0xc(%ebx)
 81e7215:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e7218:	89 43 10             	mov    %eax,0x10(%ebx)
 81e721b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81e721e:	89 43 14             	mov    %eax,0x14(%ebx)
 81e7221:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81e7224:	89 43 18             	mov    %eax,0x18(%ebx)
 81e7227:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81e722a:	89 43 1c             	mov    %eax,0x1c(%ebx)
 81e722d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81e7230:	89 43 20             	mov    %eax,0x20(%ebx)
 81e7233:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e7236:	89 43 24             	mov    %eax,0x24(%ebx)
 81e7239:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e723c:	89 43 28             	mov    %eax,0x28(%ebx)
 81e723f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e7242:	89 43 2c             	mov    %eax,0x2c(%ebx)
 81e7245:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e7248:	89 43 30             	mov    %eax,0x30(%ebx)
 81e724b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81e724e:	89 43 34             	mov    %eax,0x34(%ebx)
 81e7251:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81e7254:	89 43 38             	mov    %eax,0x38(%ebx)
 81e7257:	0f b6 45 e4          	movzbl -0x1c(%ebp),%eax
 81e725b:	88 43 3c             	mov    %al,0x3c(%ebx)
 81e725e:	8b 45 18             	mov    0x18(%ebp),%eax
 81e7261:	8b 40 02             	mov    0x2(%eax),%eax
 81e7264:	85 c0                	test   %eax,%eax
 81e7266:	75 07                	jne    81e726f <_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item+0xaf>
 81e7268:	b8 01 00 00 00       	mov    $0x1,%eax
 81e726d:	eb 05                	jmp    81e7274 <_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item+0xb4>
 81e726f:	b8 00 00 00 00       	mov    $0x0,%eax
 81e7274:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81e7277:	83 c4 00             	add    $0x0,%esp
 81e727a:	5b                   	pop    %ebx
 81e727b:	5e                   	pop    %esi
 81e727c:	5d                   	pop    %ebp
 81e727d:	c3                   	ret

```

```c
// Dispatcher_UseDye::getItem @ 0x81e71c0

/* Dispatcher_UseDye::getItem(CUser const&, int, short, Inven_Item&) const */

bool __thiscall
Dispatcher_UseDye::getItem
          (Dispatcher_UseDye *this,CUser *param_1,int param_2,short param_3,Inven_Item *param_4)

{
  int iVar1;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  short local_10;
  
  local_10 = param_3;
  iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_5c,iVar1);
  *(undefined4 *)param_4 = local_5c;
  *(undefined4 *)(param_4 + 4) = local_58;
  *(undefined4 *)(param_4 + 8) = local_54;
  *(undefined4 *)(param_4 + 0xc) = local_50;
  *(undefined4 *)(param_4 + 0x10) = local_4c;
  *(undefined4 *)(param_4 + 0x14) = local_48;
  *(undefined4 *)(param_4 + 0x18) = local_44;
  *(undefined4 *)(param_4 + 0x1c) = local_40;
  *(undefined4 *)(param_4 + 0x20) = local_3c;
  *(undefined4 *)(param_4 + 0x24) = local_38;
  *(undefined4 *)(param_4 + 0x28) = local_34;
  *(undefined4 *)(param_4 + 0x2c) = local_30;
  *(undefined4 *)(param_4 + 0x30) = local_2c;
  *(undefined4 *)(param_4 + 0x34) = local_28;
  *(undefined4 *)(param_4 + 0x38) = local_24;
  param_4[0x3c] = local_20;
  return *(int *)(param_4 + 2) == 0;
}

```

---

## notifyUpdatedInventoryItemInfo

```asm
// === 081e70e6 Dispatcher_UseDye::notifyUpdatedInventoryItemInfo  [0x081e70e6-0x81e71bf] ===
 81e70e6:	55                   	push   %ebp
 81e70e7:	89 e5                	mov    %esp,%ebp
 81e70e9:	56                   	push   %esi
 81e70ea:	53                   	push   %ebx
 81e70eb:	83 ec 30             	sub    $0x30,%esp
 81e70ee:	8b 45 10             	mov    0x10(%ebp),%eax
 81e70f1:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 81e70f5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e70f8:	89 04 24             	mov    %eax,(%esp)
 81e70fb:	e8 4c 6c 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e7100:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 81e7107:	00 
 81e7108:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e710f:	00 
 81e7110:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e7113:	89 04 24             	mov    %eax,(%esp)
 81e7116:	e8 e1 47 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e711b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e7122:	00 
 81e7123:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e7126:	89 04 24             	mov    %eax,(%esp)
 81e7129:	e8 f2 47 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e712e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7135:	00 
 81e7136:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e7139:	89 04 24             	mov    %eax,(%esp)
 81e713c:	e8 63 2d ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e7141:	0f bf 5d e4          	movswl -0x1c(%ebp),%ebx
 81e7145:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7148:	89 04 24             	mov    %eax,(%esp)
 81e714b:	e8 2e 31 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e7150:	8d 55 ec             	lea    -0x14(%ebp),%edx
 81e7153:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81e7157:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e715b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7162:	00 
 81e7163:	89 04 24             	mov    %eax,(%esp)
 81e7166:	e8 51 55 31 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 81e716b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e7172:	00 
 81e7173:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e7176:	89 04 24             	mov    %eax,(%esp)
 81e7179:	e8 da 47 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e717e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e7181:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7185:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e7188:	89 04 24             	mov    %eax,(%esp)
 81e718b:	e8 2a 14 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e7190:	eb 1b                	jmp    81e71ad <_ZNK17Dispatcher_UseDye30notifyUpdatedInventoryItemInfoER5CUsers+0xc7>
 81e7192:	89 d3                	mov    %edx,%ebx
 81e7194:	89 c6                	mov    %eax,%esi
 81e7196:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e7199:	89 04 24             	mov    %eax,(%esp)
 81e719c:	e8 df 6c 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e71a1:	89 f0                	mov    %esi,%eax
 81e71a3:	89 da                	mov    %ebx,%edx
 81e71a5:	89 04 24             	mov    %eax,(%esp)
 81e71a8:	e8 a3 c5 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e71ad:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81e71b0:	89 04 24             	mov    %eax,(%esp)
 81e71b3:	e8 c8 6c 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e71b8:	83 c4 30             	add    $0x30,%esp
 81e71bb:	5b                   	pop    %ebx
 81e71bc:	5e                   	pop    %esi
 81e71bd:	5d                   	pop    %ebp
 81e71be:	c3                   	ret
 81e71bf:	90                   	nop

```

```c
// Dispatcher_UseDye::notifyUpdatedInventoryItemInfo @ 0x81e70e6

/* Dispatcher_UseDye::notifyUpdatedInventoryItemInfo(CUser&, short) const */

void __thiscall
Dispatcher_UseDye::notifyUpdatedInventoryItemInfo
          (Dispatcher_UseDye *this,CUser *param_1,short param_2)

{
  CInventory *pCVar1;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081e7116 to 081e718f has its CatchHandler @ 081e7192 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0xe);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
  pCVar1 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::MakeItemPacket(pCVar1,1,(int)param_2,local_18);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

---

## process

```asm
// === 081e69ea Dispatcher_UseDye::process  [0x081e69ea-0x81e70e5] ===
 81e69ea:	55                   	push   %ebp
 81e69eb:	89 e5                	mov    %esp,%ebp
 81e69ed:	57                   	push   %edi
 81e69ee:	56                   	push   %esi
 81e69ef:	53                   	push   %ebx
 81e69f0:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 81e69f6:	8b 45 10             	mov    0x10(%ebp),%eax
 81e69f9:	89 45 b8             	mov    %eax,-0x48(%ebp)
 81e69fc:	8b 45 14             	mov    0x14(%ebp),%eax
 81e69ff:	89 45 bc             	mov    %eax,-0x44(%ebp)
 81e6a02:	8b 45 10             	mov    0x10(%ebp),%eax
 81e6a05:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6a09:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6a0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6a10:	8b 45 08             	mov    0x8(%ebp),%eax
 81e6a13:	89 04 24             	mov    %eax,(%esp)
 81e6a16:	e8 63 08 00 00       	call   81e727e <_ZN17Dispatcher_UseDye11check_errorEP5CUserR8MSG_BASE>
 81e6a1b:	8b 55 bc             	mov    -0x44(%ebp),%edx
 81e6a1e:	89 42 04             	mov    %eax,0x4(%edx)
 81e6a21:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81e6a24:	8b 40 04             	mov    0x4(%eax),%eax
 81e6a27:	85 c0                	test   %eax,%eax
 81e6a29:	7e 0a                	jle    81e6a35 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x4b>
 81e6a2b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e6a30:	e9 a3 06 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6a35:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81e6a38:	8b 40 04             	mov    0x4(%eax),%eax
 81e6a3b:	85 c0                	test   %eax,%eax
 81e6a3d:	79 4d                	jns    81e6a8c <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0xa2>
 81e6a3f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81e6a42:	8b 40 04             	mov    0x4(%eax),%eax
 81e6a45:	0f b6 c0             	movzbl %al,%eax
 81e6a48:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6a4c:	c7 44 24 04 f3 01 00 	movl   $0x1f3,0x4(%esp)
 81e6a53:	00 
 81e6a54:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6a57:	89 04 24             	mov    %eax,(%esp)
 81e6a5a:	e8 e3 54 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e6a5f:	8b 45 bc             	mov    -0x44(%ebp),%eax
 81e6a62:	8b 40 04             	mov    0x4(%eax),%eax
 81e6a65:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e6a6c:	00 
 81e6a6d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6a71:	c7 44 24 04 80 0c bd 	movl   $0x8bd0c80,0x4(%esp)
 81e6a78:	08 
 81e6a79:	c7 04 24 5a 62 00 00 	movl   $0x625a,(%esp)
 81e6a80:	e8 52 9e 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e6a85:	89 c3                	mov    %eax,%ebx
 81e6a87:	e9 4c 06 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6a8c:	8d 85 5b ff ff ff    	lea    -0xa5(%ebp),%eax
 81e6a92:	89 04 24             	mov    %eax,(%esp)
 81e6a95:	e8 ba 4d ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81e6a9a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e6a9d:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e6aa1:	98                   	cwtl
 81e6aa2:	8d 95 5b ff ff ff    	lea    -0xa5(%ebp),%edx
 81e6aa8:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e6aac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e6ab0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e6ab7:	00 
 81e6ab8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6abb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6abf:	8b 45 08             	mov    0x8(%ebp),%eax
 81e6ac2:	89 04 24             	mov    %eax,(%esp)
 81e6ac5:	e8 f6 06 00 00       	call   81e71c0 <_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item>
 81e6aca:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81e6acd:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81e6ad1:	74 27                	je     81e6afa <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x110>
 81e6ad3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81e6ad6:	0f b6 c0             	movzbl %al,%eax
 81e6ad9:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6add:	c7 44 24 04 f3 01 00 	movl   $0x1f3,0x4(%esp)
 81e6ae4:	00 
 81e6ae5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6ae8:	89 04 24             	mov    %eax,(%esp)
 81e6aeb:	e8 52 54 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e6af0:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6af5:	e9 de 05 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6afa:	8d 85 1e ff ff ff    	lea    -0xe2(%ebp),%eax
 81e6b00:	89 04 24             	mov    %eax,(%esp)
 81e6b03:	e8 4c 4d ee ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81e6b08:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e6b0b:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e6b0f:	98                   	cwtl
 81e6b10:	8d 95 1e ff ff ff    	lea    -0xe2(%ebp),%edx
 81e6b16:	89 54 24 10          	mov    %edx,0x10(%esp)
 81e6b1a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e6b1e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81e6b25:	00 
 81e6b26:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6b29:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6b2d:	8b 45 08             	mov    0x8(%ebp),%eax
 81e6b30:	89 04 24             	mov    %eax,(%esp)
 81e6b33:	e8 88 06 00 00       	call   81e71c0 <_ZNK17Dispatcher_UseDye7getItemERK5CUserisR10Inven_Item>
 81e6b38:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81e6b3b:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 81e6b3f:	74 27                	je     81e6b68 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x17e>
 81e6b41:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81e6b44:	0f b6 c0             	movzbl %al,%eax
 81e6b47:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6b4b:	c7 44 24 04 f3 01 00 	movl   $0x1f3,0x4(%esp)
 81e6b52:	00 
 81e6b53:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6b56:	89 04 24             	mov    %eax,(%esp)
 81e6b59:	e8 e4 53 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e6b5e:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6b63:	e9 70 05 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6b68:	8b 85 5d ff ff ff    	mov    -0xa3(%ebp),%eax
 81e6b6e:	89 c3                	mov    %eax,%ebx
 81e6b70:	e8 26 56 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e6b75:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e6b79:	89 04 24             	mov    %eax,(%esp)
 81e6b7c:	e8 b1 8e 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e6b81:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81e6b84:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 81e6b88:	75 0a                	jne    81e6b94 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x1aa>
 81e6b8a:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6b8f:	e9 44 05 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6b94:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81e6b97:	89 04 24             	mov    %eax,(%esp)
 81e6b9a:	e8 5b a7 f0 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 81e6b9f:	83 f0 01             	xor    $0x1,%eax
 81e6ba2:	84 c0                	test   %al,%al
 81e6ba4:	74 0a                	je     81e6bb0 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x1c6>
 81e6ba6:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6bab:	e9 28 05 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6bb0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81e6bb3:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81e6bb6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81e6bb9:	89 04 24             	mov    %eax,(%esp)
 81e6bbc:	e8 ad 5c 04 00       	call   822c86e <_ZNK5CItem10GetDyeInfoEv>
 81e6bc1:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81e6bc4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e6bc7:	8b 00                	mov    (%eax),%eax
 81e6bc9:	85 c0                	test   %eax,%eax
 81e6bcb:	74 12                	je     81e6bdf <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x1f5>
 81e6bcd:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e6bd0:	83 c0 04             	add    $0x4,%eax
 81e6bd3:	89 04 24             	mov    %eax,(%esp)
 81e6bd6:	e8 bf a5 f2 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 81e6bdb:	84 c0                	test   %al,%al
 81e6bdd:	74 07                	je     81e6be6 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x1fc>
 81e6bdf:	b8 01 00 00 00       	mov    $0x1,%eax
 81e6be4:	eb 05                	jmp    81e6beb <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x201>
 81e6be6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e6beb:	84 c0                	test   %al,%al
 81e6bed:	74 0a                	je     81e6bf9 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x20f>
 81e6bef:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6bf4:	e9 df 04 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6bf9:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e6bfc:	83 c0 04             	add    $0x4,%eax
 81e6bff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e6c06:	00 
 81e6c07:	89 04 24             	mov    %eax,(%esp)
 81e6c0a:	e8 03 df fc ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81e6c0f:	89 c3                	mov    %eax,%ebx
 81e6c11:	e8 85 55 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e6c16:	8d 90 40 87 00 00    	lea    0x8740(%eax),%edx
 81e6c1c:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e6c1f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e6c23:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e6c27:	89 04 24             	mov    %eax,(%esp)
 81e6c2a:	e8 6f 0a 05 00       	call   823769e <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE4findERS5_>
 81e6c2f:	83 ec 04             	sub    $0x4,%esp
 81e6c32:	e8 64 55 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e6c37:	8d 90 40 87 00 00    	lea    0x8740(%eax),%edx
 81e6c3d:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81e6c40:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e6c44:	89 04 24             	mov    %eax,(%esp)
 81e6c47:	e8 2c 0a 05 00       	call   8237678 <_ZNSt3mapIiN15AvatarVariation8colorRGBESt4lessIiESaISt4pairIKiS1_EEE3endEv>
 81e6c4c:	83 ec 04             	sub    $0x4,%esp
 81e6c4f:	8d 45 a8             	lea    -0x58(%ebp),%eax
 81e6c52:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6c56:	8d 45 ac             	lea    -0x54(%ebp),%eax
 81e6c59:	89 04 24             	mov    %eax,(%esp)
 81e6c5c:	e8 69 0a 05 00       	call   82376ca <_ZNKSt17_Rb_tree_iteratorISt4pairIKiN15AvatarVariation8colorRGBEEEeqERKS5_>
 81e6c61:	84 c0                	test   %al,%al
 81e6c63:	74 0a                	je     81e6c6f <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x285>
 81e6c65:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6c6a:	e9 69 04 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6c6f:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 81e6c75:	89 c3                	mov    %eax,%ebx
 81e6c77:	e8 1f 55 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e6c7c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e6c80:	89 04 24             	mov    %eax,(%esp)
 81e6c83:	e8 aa 8d 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e6c88:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81e6c8b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e6c8e:	8b 00                	mov    (%eax),%eax
 81e6c90:	83 c0 10             	add    $0x10,%eax
 81e6c93:	8b 10                	mov    (%eax),%edx
 81e6c95:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e6c98:	89 04 24             	mov    %eax,(%esp)
 81e6c9b:	ff d2                	call   *%edx
 81e6c9d:	83 f0 01             	xor    $0x1,%eax
 81e6ca0:	84 c0                	test   %al,%al
 81e6ca2:	74 0a                	je     81e6cae <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x2c4>
 81e6ca4:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6ca9:	e9 2a 04 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6cae:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81e6cb1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81e6cb4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e6cbb:	00 
 81e6cbc:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81e6cbf:	89 04 24             	mov    %eax,(%esp)
 81e6cc2:	e8 ff c9 32 00       	call   85136c6 <_ZNK10CEquipItem22IsAvatarColorVariationEi>
 81e6cc7:	83 f0 01             	xor    $0x1,%eax
 81e6cca:	84 c0                	test   %al,%al
 81e6ccc:	74 0a                	je     81e6cd8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x2ee>
 81e6cce:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6cd3:	e9 00 04 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6cd8:	8b 9d 25 ff ff ff    	mov    -0xdb(%ebp),%ebx
 81e6cde:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6ce1:	89 04 24             	mov    %eax,(%esp)
 81e6ce4:	e8 95 35 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e6ce9:	89 04 24             	mov    %eax,(%esp)
 81e6cec:	e8 85 68 ef ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 81e6cf1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e6cf5:	89 04 24             	mov    %eax,(%esp)
 81e6cf8:	e8 31 2c 11 00       	call   82f992e <_ZNK8WongWork14CAvatarItemMgr16GetExpansionInfoEi>
 81e6cfd:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81e6d00:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 81e6d04:	75 0a                	jne    81e6d10 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x326>
 81e6d06:	bb 01 00 00 00       	mov    $0x1,%ebx
 81e6d0b:	e9 c8 03 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6d10:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e6d13:	0f b7 00             	movzwl (%eax),%eax
 81e6d16:	66 89 45 de          	mov    %ax,-0x22(%ebp)
 81e6d1a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81e6d1d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 81e6d21:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 81e6d25:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e6d28:	83 c0 04             	add    $0x4,%eax
 81e6d2b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e6d32:	00 
 81e6d33:	89 04 24             	mov    %eax,(%esp)
 81e6d36:	e8 d7 dd fc ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81e6d3b:	8b 00                	mov    (%eax),%eax
 81e6d3d:	0f bf f0             	movswl %ax,%esi
 81e6d40:	8b 9d 25 ff ff ff    	mov    -0xdb(%ebp),%ebx
 81e6d46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6d49:	89 04 24             	mov    %eax,(%esp)
 81e6d4c:	e8 3d 35 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e6d51:	89 04 24             	mov    %eax,(%esp)
 81e6d54:	e8 13 9f f2 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 81e6d59:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e6d60:	00 
 81e6d61:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e6d65:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e6d69:	89 04 24             	mov    %eax,(%esp)
 81e6d6c:	e8 f3 2b 11 00       	call   82f9964 <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss>
 81e6d71:	88 45 e3             	mov    %al,-0x1d(%ebp)
 81e6d74:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 81e6d78:	83 f0 01             	xor    $0x1,%eax
 81e6d7b:	84 c0                	test   %al,%al
 81e6d7d:	74 4d                	je     81e6dcc <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x3e2>
 81e6d7f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e6d86:	00 
 81e6d87:	c7 44 24 04 f3 01 00 	movl   $0x1f3,0x4(%esp)
 81e6d8e:	00 
 81e6d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6d92:	89 04 24             	mov    %eax,(%esp)
 81e6d95:	e8 a8 51 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e6d9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6d9d:	89 04 24             	mov    %eax,(%esp)
 81e6da0:	e8 c9 35 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e6da5:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e6da9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e6db0:	00 
 81e6db1:	c7 44 24 04 80 0c bd 	movl   $0x8bd0c80,0x4(%esp)
 81e6db8:	08 
 81e6db9:	c7 04 24 92 62 00 00 	movl   $0x6292,(%esp)
 81e6dc0:	e8 12 9b 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e6dc5:	89 c3                	mov    %eax,%ebx
 81e6dc7:	e9 0c 03 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6dcc:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e6dcf:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e6dd3:	0f bf d8             	movswl %ax,%ebx
 81e6dd6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6dd9:	89 04 24             	mov    %eax,(%esp)
 81e6ddc:	e8 ad 34 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e6de1:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e6de8:	00 
 81e6de9:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e6df0:	00 
 81e6df1:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e6df8:	00 
 81e6df9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e6dfd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e6e04:	00 
 81e6e05:	89 04 24             	mov    %eax,(%esp)
 81e6e08:	e8 ff d1 31 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e6e0d:	83 f0 01             	xor    $0x1,%eax
 81e6e10:	84 c0                	test   %al,%al
 81e6e12:	0f 84 82 00 00 00    	je     81e6e9a <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x4b0>
 81e6e18:	0f bf 7d e0          	movswl -0x20(%ebp),%edi
 81e6e1c:	0f bf 75 de          	movswl -0x22(%ebp),%esi
 81e6e20:	8b 9d 25 ff ff ff    	mov    -0xdb(%ebp),%ebx
 81e6e26:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6e29:	89 04 24             	mov    %eax,(%esp)
 81e6e2c:	e8 5d 34 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e6e31:	89 04 24             	mov    %eax,(%esp)
 81e6e34:	e8 33 9e f2 ff       	call   8110c6c <_ZN10CInventory17GetAvatarItemMgrWEv>
 81e6e39:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81e6e3d:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e6e41:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e6e45:	89 04 24             	mov    %eax,(%esp)
 81e6e48:	e8 17 2b 11 00       	call   82f9964 <_ZN8WongWork14CAvatarItemMgr14SetAvatarColorEiss>
 81e6e4d:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 81e6e54:	00 
 81e6e55:	c7 44 24 04 f3 01 00 	movl   $0x1f3,0x4(%esp)
 81e6e5c:	00 
 81e6e5d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6e60:	89 04 24             	mov    %eax,(%esp)
 81e6e63:	e8 da 50 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e6e68:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6e6b:	89 04 24             	mov    %eax,(%esp)
 81e6e6e:	e8 fb 34 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e6e73:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e6e77:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e6e7e:	00 
 81e6e7f:	c7 44 24 04 80 0c bd 	movl   $0x8bd0c80,0x4(%esp)
 81e6e86:	08 
 81e6e87:	c7 04 24 9b 62 00 00 	movl   $0x629b,(%esp)
 81e6e8e:	e8 44 9a 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e6e93:	89 c3                	mov    %eax,%ebx
 81e6e95:	e9 3e 02 00 00       	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e6e9a:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e6e9d:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e6ea1:	98                   	cwtl
 81e6ea2:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e6ea6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6ea9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6ead:	8b 45 08             	mov    0x8(%ebp),%eax
 81e6eb0:	89 04 24             	mov    %eax,(%esp)
 81e6eb3:	e8 2e 02 00 00       	call   81e70e6 <_ZNK17Dispatcher_UseDye30notifyUpdatedInventoryItemInfoER5CUsers>
 81e6eb8:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6ebb:	89 04 24             	mov    %eax,(%esp)
 81e6ebe:	e8 89 6e 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e6ec3:	c7 44 24 08 f3 01 00 	movl   $0x1f3,0x8(%esp)
 81e6eca:	00 
 81e6ecb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e6ed2:	00 
 81e6ed3:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6ed6:	89 04 24             	mov    %eax,(%esp)
 81e6ed9:	e8 1e 4a ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e6ede:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e6ee5:	00 
 81e6ee6:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6ee9:	89 04 24             	mov    %eax,(%esp)
 81e6eec:	e8 2f 4a ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e6ef1:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e6ef4:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e6ef8:	98                   	cwtl
 81e6ef9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6efd:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6f00:	89 04 24             	mov    %eax,(%esp)
 81e6f03:	e8 9c 2f ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e6f08:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e6f0b:	83 c0 04             	add    $0x4,%eax
 81e6f0e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e6f15:	00 
 81e6f16:	89 04 24             	mov    %eax,(%esp)
 81e6f19:	e8 f4 db fc ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81e6f1e:	8b 00                	mov    (%eax),%eax
 81e6f20:	66 89 45 98          	mov    %ax,-0x68(%ebp)
 81e6f24:	66 c7 45 9a 00 00    	movw   $0x0,-0x66(%ebp)
 81e6f2a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 81e6f31:	00 
 81e6f32:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6f35:	89 04 24             	mov    %eax,(%esp)
 81e6f38:	e8 ff 49 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e6f3d:	8d 45 98             	lea    -0x68(%ebp),%eax
 81e6f40:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 81e6f47:	00 
 81e6f48:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6f4c:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6f4f:	89 04 24             	mov    %eax,(%esp)
 81e6f52:	e8 13 9a f6 ff       	call   815096a <_ZN18InterfacePacketBuf10put_binaryEPKci>
 81e6f57:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e6f5e:	00 
 81e6f5f:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6f62:	89 04 24             	mov    %eax,(%esp)
 81e6f65:	e8 ee 49 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e6f6a:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e6f6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6f71:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6f74:	89 04 24             	mov    %eax,(%esp)
 81e6f77:	e8 3e 16 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e6f7c:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81e6f7f:	83 c0 04             	add    $0x4,%eax
 81e6f82:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e6f89:	00 
 81e6f8a:	89 04 24             	mov    %eax,(%esp)
 81e6f8d:	e8 80 db fc ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 81e6f92:	8b 30                	mov    (%eax),%esi
 81e6f94:	8b 9d 25 ff ff ff    	mov    -0xdb(%ebp),%ebx
 81e6f9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6f9d:	89 04 24             	mov    %eax,(%esp)
 81e6fa0:	e8 e9 32 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e6fa5:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81e6fac:	00 
 81e6fad:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 81e6fb4:	00 
 81e6fb5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e6fb9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e6fbd:	c7 44 24 04 1a 03 00 	movl   $0x31a,0x4(%esp)
 81e6fc4:	00 
 81e6fc5:	89 04 24             	mov    %eax,(%esp)
 81e6fc8:	e8 61 1c 32 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 81e6fcd:	8b 9d 25 ff ff ff    	mov    -0xdb(%ebp),%ebx
 81e6fd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e6fd6:	89 04 24             	mov    %eax,(%esp)
 81e6fd9:	e8 b0 32 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e6fde:	89 04 24             	mov    %eax,(%esp)
 81e6fe1:	e8 90 65 ef ff       	call   80dd576 <_ZNK10CInventory17GetAvatarItemMgrREv>
 81e6fe6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e6fea:	89 04 24             	mov    %eax,(%esp)
 81e6fed:	e8 ca 29 11 00       	call   82f99bc <_ZNK8WongWork14CAvatarItemMgr13GetAvatarInfoEi>
 81e6ff2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e6ff5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 81e6ff8:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e6ffc:	0f bf d8             	movswl %ax,%ebx
 81e6fff:	8d 45 b7             	lea    -0x49(%ebp),%eax
 81e7002:	89 04 24             	mov    %eax,(%esp)
 81e7005:	e8 c6 90 4f 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81e700a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e700d:	89 04 24             	mov    %eax,(%esp)
 81e7010:	e8 ed 61 04 00       	call   822d202 <_ZNK8WongWork11Avatar_Item14GetIPGAgencyNoEv>
 81e7015:	8d 55 b7             	lea    -0x49(%ebp),%edx
 81e7018:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e701c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e7020:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e7023:	89 04 24             	mov    %eax,(%esp)
 81e7026:	e8 05 06 52 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81e702b:	8b 8d 25 ff ff ff    	mov    -0xdb(%ebp),%ecx
 81e7031:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 81e7037:	89 c2                	mov    %eax,%edx
 81e7039:	8b 85 5d ff ff ff    	mov    -0xa3(%ebp),%eax
 81e703f:	8b 75 0c             	mov    0xc(%ebp),%esi
 81e7042:	81 c6 00 97 07 00    	add    $0x79700,%esi
 81e7048:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 81e704c:	8d 5d b0             	lea    -0x50(%ebp),%ebx
 81e704f:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81e7053:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81e7057:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e705b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e705f:	89 34 24             	mov    %esi,(%esp)
 81e7062:	e8 53 fc 49 00       	call   8686cba <_ZN15cUserHistoryLog6UseDyeEiiiRKSsi>
 81e7067:	eb 15                	jmp    81e707e <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x694>
 81e7069:	89 d3                	mov    %edx,%ebx
 81e706b:	89 c6                	mov    %eax,%esi
 81e706d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e7070:	89 04 24             	mov    %eax,(%esp)
 81e7073:	e8 68 0b 52 00       	call   8707be0 <_ZNSsD1Ev>
 81e7078:	89 f0                	mov    %esi,%eax
 81e707a:	89 da                	mov    %ebx,%edx
 81e707c:	eb 0d                	jmp    81e708b <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6a1>
 81e707e:	8d 45 b0             	lea    -0x50(%ebp),%eax
 81e7081:	89 04 24             	mov    %eax,(%esp)
 81e7084:	e8 57 0b 52 00       	call   8707be0 <_ZNSsD1Ev>
 81e7089:	eb 15                	jmp    81e70a0 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6b6>
 81e708b:	89 d3                	mov    %edx,%ebx
 81e708d:	89 c6                	mov    %eax,%esi
 81e708f:	8d 45 b7             	lea    -0x49(%ebp),%eax
 81e7092:	89 04 24             	mov    %eax,(%esp)
 81e7095:	e8 56 90 4f 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81e709a:	89 f0                	mov    %esi,%eax
 81e709c:	89 da                	mov    %ebx,%edx
 81e709e:	eb 1d                	jmp    81e70bd <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6d3>
 81e70a0:	8d 45 b7             	lea    -0x49(%ebp),%eax
 81e70a3:	89 04 24             	mov    %eax,(%esp)
 81e70a6:	e8 45 90 4f 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81e70ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 81e70b0:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e70b3:	89 04 24             	mov    %eax,(%esp)
 81e70b6:	e8 c5 6d 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e70bb:	eb 1b                	jmp    81e70d8 <_ZN17Dispatcher_UseDye7processEP5CUserR8MSG_BASER9ParamBase+0x6ee>
 81e70bd:	89 d3                	mov    %edx,%ebx
 81e70bf:	89 c6                	mov    %eax,%esi
 81e70c1:	8d 45 9c             	lea    -0x64(%ebp),%eax
 81e70c4:	89 04 24             	mov    %eax,(%esp)
 81e70c7:	e8 b4 6d 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e70cc:	89 f0                	mov    %esi,%eax
 81e70ce:	89 da                	mov    %ebx,%edx
 81e70d0:	89 04 24             	mov    %eax,(%esp)
 81e70d3:	e8 78 c6 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e70d8:	89 d8                	mov    %ebx,%eax
 81e70da:	8d 65 f4             	lea    -0xc(%ebp),%esp
 81e70dd:	83 c4 00             	add    $0x0,%esp
 81e70e0:	5b                   	pop    %ebx
 81e70e1:	5e                   	pop    %esi
 81e70e2:	5f                   	pop    %edi
 81e70e3:	5d                   	pop    %ebp
 81e70e4:	c3                   	ret
 81e70e5:	90                   	nop

```

```c
// Dispatcher_UseDye::process @ 0x81e69ea

/* Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseDye::process
          (Dispatcher_UseDye *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  short sVar5;
  char cVar6;
  undefined4 uVar7;
  CDataManager *pCVar8;
  CInventory *pCVar9;
  CAvatarItemMgr *pCVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  char *pcVar14;
  Inven_Item local_e6 [2];
  int local_e4;
  int local_df;
  Inven_Item local_a9 [2];
  int local_a7;
  undefined2 local_6c;
  undefined2 local_6a;
  PacketGuard local_68 [12];
  _Rb_tree_iterator local_5c [4];
  map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
  local_58 [4];
  string local_54;
  allocator<char> local_4d;
  MSG_BASE *local_4c;
  ParamBase *local_48;
  uint local_44;
  CItem *local_40;
  CItem *local_3c;
  int *local_38;
  CEquipItem *local_34;
  CEquipItem *local_30;
  short *local_2c;
  short local_26;
  short local_24;
  char local_21;
  Avatar_Item *local_20;
  
  local_4c = param_2;
  local_48 = param_3;
  uVar7 = check_error((CUser *)this,(MSG_BASE *)param_1);
  *(undefined4 *)(local_48 + 4) = uVar7;
  if (0 < *(int *)(local_48 + 4)) {
    return 0;
  }
  if (*(int *)(local_48 + 4) < 0) {
    CUser::SendCmdErrorPacket(param_1,499,*(uint *)(local_48 + 4) & 0xff);
    uVar7 = LineFunc(0x625a,"virtual int Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)",
                     *(int *)(local_48 + 4),0);
    return uVar7;
  }
  Inven_Item::Inven_Item(local_a9);
  local_44 = getItem(this,param_1,1,*(short *)(local_4c + 0xe),local_a9);
  if (local_44 != 0) {
    CUser::SendCmdErrorPacket(param_1,499,local_44 & 0xff);
    return 1;
  }
  Inven_Item::Inven_Item(local_e6);
  local_44 = getItem(this,param_1,2,*(short *)(local_4c + 0x10),local_e6);
  iVar2 = local_a7;
  if (local_44 == 0) {
    pCVar8 = (CDataManager *)G_CDataManager();
    local_40 = (CItem *)CDataManager::find_item(pCVar8,iVar2);
    if (local_40 == (CItem *)0x0) {
      return 1;
    }
    cVar6 = CItem::is_stackable(local_40);
    if (cVar6 == '\x01') {
      local_3c = local_40;
      local_38 = (int *)CItem::GetDyeInfo(local_40);
      if ((*local_38 == 0) ||
         (cVar6 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty(),
         cVar6 != '\0')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if (bVar3) {
        uVar7 = 1;
      }
      else {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                  ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(local_38 + 1),0
                  );
        G_CDataManager();
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::find((int *)local_5c);
        G_CDataManager();
        std::
        map<int,AvatarVariation::colorRGB,std::less<int>,std::allocator<std::pair<int_const,AvatarVariation::colorRGB>>>
        ::end(local_58);
        cVar6 = std::_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>>::operator==
                          ((_Rb_tree_iterator<std::pair<int_const,AvatarVariation::colorRGB>> *)
                           local_58,local_5c);
        iVar2 = local_e4;
        if (cVar6 == '\0') {
          pCVar8 = (CDataManager *)G_CDataManager();
          local_34 = (CEquipItem *)CDataManager::find_item(pCVar8,iVar2);
          cVar6 = (**(code **)(*(int *)local_34 + 0x10))(local_34);
          if (cVar6 == '\x01') {
            local_30 = local_34;
            cVar6 = CEquipItem::IsAvatarColorVariation(local_34,0);
            iVar2 = local_df;
            if (cVar6 == '\x01') {
              pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1)
              ;
              pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
              local_2c = (short *)WongWork::CAvatarItemMgr::GetExpansionInfo(pCVar10,iVar2);
              if (local_2c == (short *)0x0) {
                uVar7 = 1;
              }
              else {
                local_26 = *local_2c;
                local_24 = local_2c[1];
                puVar11 = (undefined4 *)
                          std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                          operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                      *)(local_38 + 1),0);
                iVar2 = local_df;
                uVar7 = *puVar11;
                pCVar9 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar9);
                local_21 = WongWork::CAvatarItemMgr::SetAvatarColor(pCVar10,iVar2,(short)uVar7,0);
                if (local_21 == '\x01') {
                  sVar1 = *(short *)(local_4c + 0xe);
                  pCVar9 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                  cVar6 = CInventory::delete_item(pCVar9,1,(int)sVar1,1,3,1);
                  sVar5 = local_24;
                  sVar1 = local_26;
                  if (cVar6 == '\x01') {
                    notifyUpdatedInventoryItemInfo(this,param_1,*(short *)(local_4c + 0xe));
                    PacketGuard::PacketGuard(local_68);
                    /* try { // try from 081e6ed9 to 081e6ff1 has its CatchHandler @ 081e70bd */
                    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_68,1,499);
                    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_68,1);
                    InterfacePacketBuf::put_short
                              ((InterfacePacketBuf *)local_68,(int)*(short *)(local_4c + 0x10));
                    puVar11 = (undefined4 *)
                              std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                              operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                          *)(local_38 + 1),0);
                    local_6c = (undefined2)*puVar11;
                    local_6a = 0;
                    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_68,4);
                    InterfacePacketBuf::put_binary
                              ((InterfacePacketBuf *)local_68,(char *)&local_6c,4);
                    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_68,true);
                    CUser::Send(param_1,local_68);
                    piVar13 = (int *)std::
                                     vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::
                                     operator[]((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>
                                                 *)(local_38 + 1),0);
                    iVar4 = local_df;
                    iVar2 = *piVar13;
                    pCVar9 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    CInventory::SendAvatarEvent(pCVar9,0x31a,iVar4,iVar2,0,0);
                    iVar2 = local_df;
                    pCVar9 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrR(pCVar9);
                    local_20 = (Avatar_Item *)WongWork::CAvatarItemMgr::GetAvatarInfo(pCVar10,iVar2)
                    ;
                    sVar1 = *(short *)(local_4c + 0x10);
                    std::allocator<char>::allocator();
                    pcVar14 = (char *)WongWork::Avatar_Item::GetIPGAgencyNo(local_20);
                    /* try { // try from 081e7026 to 081e702a has its CatchHandler @ 081e708b */
                    std::string::string((string *)&local_54,pcVar14,(allocator *)&local_4d);
                    /* try { // try from 081e7062 to 081e7066 has its CatchHandler @ 081e7069 */
                    cUserHistoryLog::UseDye
                              ((cUserHistoryLog *)(param_1 + 0x79700),local_a7,local_e4,local_df,
                               &local_54,(int)sVar1);
                    /* try { // try from 081e7084 to 081e7088 has its CatchHandler @ 081e708b */
                    std::string::~string((string *)&local_54);
                    std::allocator<char>::~allocator(&local_4d);
                    uVar7 = 0;
                    PacketGuard::~PacketGuard(local_68);
                  }
                  else {
                    pCVar9 = (CInventory *)
                             CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    pCVar10 = (CAvatarItemMgr *)CInventory::GetAvatarItemMgrW(pCVar9);
                    WongWork::CAvatarItemMgr::SetAvatarColor(pCVar10,local_df,sVar1,sVar5);
                    CUser::SendCmdErrorPacket(param_1,499,0x11);
                    uVar12 = CUser::get_acc_id(param_1);
                    uVar7 = LineFunc(0x629b,
                                     "virtual int Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)"
                                     ,1,uVar12);
                  }
                }
                else {
                  CUser::SendCmdErrorPacket(param_1,499,1);
                  uVar12 = CUser::get_acc_id(param_1);
                  uVar7 = LineFunc(0x6292,
                                   "virtual int Dispatcher_UseDye::process(CUser*, MSG_BASE&, ParamBase&)"
                                   ,1,uVar12);
                }
              }
            }
            else {
              uVar7 = 1;
            }
          }
          else {
            uVar7 = 1;
          }
        }
        else {
          uVar7 = 1;
        }
      }
      return uVar7;
    }
    return 1;
  }
  CUser::SendCmdErrorPacket(param_1,499,local_44 & 0xff);
  return 1;
}

```

---

## read

```asm
// === 081e6952 Dispatcher_UseDye::read  [0x081e6952-0x81e69e9] ===
 81e6952:	55                   	push   %ebp
 81e6953:	89 e5                	mov    %esp,%ebp
 81e6955:	83 ec 28             	sub    $0x28,%esp
 81e6958:	8b 45 10             	mov    0x10(%ebp),%eax
 81e695b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e695e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e6961:	83 c0 0e             	add    $0xe,%eax
 81e6964:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e6968:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e696b:	89 04 24             	mov    %eax,(%esp)
 81e696e:	e8 4d 66 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e6973:	83 f0 01             	xor    $0x1,%eax
 81e6976:	84 c0                	test   %al,%al
 81e6978:	74 26                	je     81e69a0 <_ZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASE+0x4e>
 81e697a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e6981:	00 
 81e6982:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e6989:	00 
 81e698a:	c7 44 24 04 e0 0c bd 	movl   $0x8bd0ce0,0x4(%esp)
 81e6991:	08 
 81e6992:	c7 04 24 45 62 00 00 	movl   $0x6245,(%esp)
 81e6999:	e8 39 9f 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e699e:	eb 47                	jmp    81e69e7 <_ZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASE+0x95>
 81e69a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e69a3:	83 c0 10             	add    $0x10,%eax
 81e69a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e69aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e69ad:	89 04 24             	mov    %eax,(%esp)
 81e69b0:	e8 0b 66 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e69b5:	83 f0 01             	xor    $0x1,%eax
 81e69b8:	84 c0                	test   %al,%al
 81e69ba:	74 26                	je     81e69e2 <_ZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASE+0x90>
 81e69bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e69c3:	00 
 81e69c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e69cb:	00 
 81e69cc:	c7 44 24 04 e0 0c bd 	movl   $0x8bd0ce0,0x4(%esp)
 81e69d3:	08 
 81e69d4:	c7 04 24 48 62 00 00 	movl   $0x6248,(%esp)
 81e69db:	e8 f7 9e 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e69e0:	eb 05                	jmp    81e69e7 <_ZN17Dispatcher_UseDye4readER9PacketBufR8MSG_BASE+0x95>
 81e69e2:	b8 00 00 00 00       	mov    $0x0,%eax
 81e69e7:	c9                   	leave
 81e69e8:	c3                   	ret
 81e69e9:	90                   	nop

```

```c
// Dispatcher_UseDye::read @ 0x81e6952

/* Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseDye::read(Dispatcher_UseDye *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x6248,"virtual int Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x6245,"virtual int Dispatcher_UseDye::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

