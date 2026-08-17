# Dispatcher_Compound_ExtreamItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## _push_newitem

```asm
// === 08225b54 Dispatcher_Compound_ExtreamItem::_push_newitem  [0x08225b54-0x8225c53] ===
 8225b54:	55                   	push   %ebp
 8225b55:	89 e5                	mov    %esp,%ebp
 8225b57:	83 ec 58             	sub    $0x58,%esp
 8225b5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8225b5d:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225b63:	89 04 24             	mov    %eax,(%esp)
 8225b66:	e8 23 47 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8225b6b:	89 c2                	mov    %eax,%edx
 8225b6d:	c7 44 24 4c 01 00 00 	movl   $0x1,0x4c(%esp)
 8225b74:	00 
 8225b75:	c7 44 24 48 01 00 00 	movl   $0x1,0x48(%esp)
 8225b7c:	00 
 8225b7d:	c7 44 24 44 30 00 00 	movl   $0x30,0x44(%esp)
 8225b84:	00 
 8225b85:	8b 45 08             	mov    0x8(%ebp),%eax
 8225b88:	8b 88 90 00 00 00    	mov    0x90(%eax),%ecx
 8225b8e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8225b92:	8b 88 94 00 00 00    	mov    0x94(%eax),%ecx
 8225b98:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8225b9c:	8b 88 98 00 00 00    	mov    0x98(%eax),%ecx
 8225ba2:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8225ba6:	8b 88 9c 00 00 00    	mov    0x9c(%eax),%ecx
 8225bac:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8225bb0:	8b 88 a0 00 00 00    	mov    0xa0(%eax),%ecx
 8225bb6:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8225bba:	8b 88 a4 00 00 00    	mov    0xa4(%eax),%ecx
 8225bc0:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 8225bc4:	8b 88 a8 00 00 00    	mov    0xa8(%eax),%ecx
 8225bca:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 8225bce:	8b 88 ac 00 00 00    	mov    0xac(%eax),%ecx
 8225bd4:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 8225bd8:	8b 88 b0 00 00 00    	mov    0xb0(%eax),%ecx
 8225bde:	89 4c 24 24          	mov    %ecx,0x24(%esp)
 8225be2:	8b 88 b4 00 00 00    	mov    0xb4(%eax),%ecx
 8225be8:	89 4c 24 28          	mov    %ecx,0x28(%esp)
 8225bec:	8b 88 b8 00 00 00    	mov    0xb8(%eax),%ecx
 8225bf2:	89 4c 24 2c          	mov    %ecx,0x2c(%esp)
 8225bf6:	8b 88 bc 00 00 00    	mov    0xbc(%eax),%ecx
 8225bfc:	89 4c 24 30          	mov    %ecx,0x30(%esp)
 8225c00:	8b 88 c0 00 00 00    	mov    0xc0(%eax),%ecx
 8225c06:	89 4c 24 34          	mov    %ecx,0x34(%esp)
 8225c0a:	8b 88 c4 00 00 00    	mov    0xc4(%eax),%ecx
 8225c10:	89 4c 24 38          	mov    %ecx,0x38(%esp)
 8225c14:	8b 88 c8 00 00 00    	mov    0xc8(%eax),%ecx
 8225c1a:	89 4c 24 3c          	mov    %ecx,0x3c(%esp)
 8225c1e:	0f b6 80 cc 00 00 00 	movzbl 0xcc(%eax),%eax
 8225c25:	88 44 24 40          	mov    %al,0x40(%esp)
 8225c29:	89 14 24             	mov    %edx,(%esp)
 8225c2c:	e8 55 d1 2d 00       	call   8502d86 <_ZN10CInventory23insertItemIntoInventoryE10Inven_Item14eItemAddReasonbb>
 8225c31:	89 c2                	mov    %eax,%edx
 8225c33:	8b 45 08             	mov    0x8(%ebp),%eax
 8225c36:	66 89 50 06          	mov    %dx,0x6(%eax)
 8225c3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8225c3d:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8225c41:	66 85 c0             	test   %ax,%ax
 8225c44:	79 07                	jns    8225c4d <_ZN31Dispatcher_Compound_ExtreamItem13_push_newitemEv+0xf9>
 8225c46:	b8 00 00 00 00       	mov    $0x0,%eax
 8225c4b:	eb 05                	jmp    8225c52 <_ZN31Dispatcher_Compound_ExtreamItem13_push_newitemEv+0xfe>
 8225c4d:	b8 01 00 00 00       	mov    $0x1,%eax
 8225c52:	c9                   	leave
 8225c53:	c3                   	ret

```

```c
// Dispatcher_Compound_ExtreamItem::_push_newitem @ 0x8225b54

/* Dispatcher_Compound_ExtreamItem::_push_newitem() */

bool __thiscall
Dispatcher_Compound_ExtreamItem::_push_newitem(Dispatcher_Compound_ExtreamItem *this)

{
  undefined2 uVar1;
  undefined4 uVar2;
  
  uVar2 = CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0xd0));
  uVar1 = CInventory::insertItemIntoInventory
                    (uVar2,*(undefined4 *)(this + 0x90),*(undefined4 *)(this + 0x94),
                     *(undefined4 *)(this + 0x98),*(undefined4 *)(this + 0x9c),
                     *(undefined4 *)(this + 0xa0),*(undefined4 *)(this + 0xa4),
                     *(undefined4 *)(this + 0xa8),*(undefined4 *)(this + 0xac),
                     *(undefined4 *)(this + 0xb0),*(undefined4 *)(this + 0xb4),
                     *(undefined4 *)(this + 0xb8),*(undefined4 *)(this + 0xbc),
                     *(undefined4 *)(this + 0xc0),*(undefined4 *)(this + 0xc4),
                     *(undefined4 *)(this + 200),this[0xcc],0x30,1,1);
  *(undefined2 *)(this + 6) = uVar1;
  return -1 < *(short *)(this + 6);
}

```

---

## _read_packet

```asm
// === 08225806 Dispatcher_Compound_ExtreamItem::_read_packet  [0x08225806-0x8225a87] ===
 8225806:	55                   	push   %ebp
 8225807:	89 e5                	mov    %esp,%ebp
 8225809:	57                   	push   %edi
 822580a:	56                   	push   %esi
 822580b:	53                   	push   %ebx
 822580c:	81 ec ac 00 00 00    	sub    $0xac,%esp
 8225812:	8b 45 08             	mov    0x8(%ebp),%eax
 8225815:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 822581b:	85 c0                	test   %eax,%eax
 822581d:	75 0a                	jne    8225829 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x23>
 822581f:	b8 00 00 00 00       	mov    $0x0,%eax
 8225824:	e9 54 02 00 00       	jmp    8225a7d <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x277>
 8225829:	8b 45 08             	mov    0x8(%ebp),%eax
 822582c:	89 04 24             	mov    %eax,(%esp)
 822582f:	e8 4a ff ff ff       	call   822577e <_ZN31Dispatcher_Compound_ExtreamItem6_resetEv>
 8225834:	8b 45 08             	mov    0x8(%ebp),%eax
 8225837:	83 c0 04             	add    $0x4,%eax
 822583a:	89 44 24 04          	mov    %eax,0x4(%esp)
 822583e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225841:	89 04 24             	mov    %eax,(%esp)
 8225844:	e8 67 78 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8225849:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8225850:	e9 4a 01 00 00       	jmp    822599f <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x199>
 8225855:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8225858:	01 c0                	add    %eax,%eax
 822585a:	03 45 08             	add    0x8(%ebp),%eax
 822585d:	83 c0 08             	add    $0x8,%eax
 8225860:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225864:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225867:	89 04 24             	mov    %eax,(%esp)
 822586a:	e8 41 78 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 822586f:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 8225872:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8225875:	8b 45 08             	mov    0x8(%ebp),%eax
 8225878:	0f b7 44 50 08       	movzwl 0x8(%eax,%edx,2),%eax
 822587d:	0f b7 f8             	movzwl %ax,%edi
 8225880:	8b 45 08             	mov    0x8(%ebp),%eax
 8225883:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225889:	89 04 24             	mov    %eax,(%esp)
 822588c:	e8 ed 49 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 8225891:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8225894:	6b f6 3d             	imul   $0x3d,%esi,%esi
 8225897:	8d 95 58 ff ff ff    	lea    -0xa8(%ebp),%edx
 822589d:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82258a1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82258a8:	00 
 82258a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 82258ad:	89 14 24             	mov    %edx,(%esp)
 82258b0:	e8 63 60 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 82258b5:	83 ec 04             	sub    $0x4,%esp
 82258b8:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 82258be:	89 44 1e 0c          	mov    %eax,0xc(%esi,%ebx,1)
 82258c2:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 82258c8:	89 44 1e 10          	mov    %eax,0x10(%esi,%ebx,1)
 82258cc:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 82258d2:	89 44 1e 14          	mov    %eax,0x14(%esi,%ebx,1)
 82258d6:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 82258dc:	89 44 1e 18          	mov    %eax,0x18(%esi,%ebx,1)
 82258e0:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 82258e6:	89 44 1e 1c          	mov    %eax,0x1c(%esi,%ebx,1)
 82258ea:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 82258f0:	89 44 1e 20          	mov    %eax,0x20(%esi,%ebx,1)
 82258f4:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 82258fa:	89 44 1e 24          	mov    %eax,0x24(%esi,%ebx,1)
 82258fe:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8225904:	89 44 1e 28          	mov    %eax,0x28(%esi,%ebx,1)
 8225908:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 822590e:	89 44 1e 2c          	mov    %eax,0x2c(%esi,%ebx,1)
 8225912:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8225918:	89 44 1e 30          	mov    %eax,0x30(%esi,%ebx,1)
 822591c:	8b 45 80             	mov    -0x80(%ebp),%eax
 822591f:	89 44 1e 34          	mov    %eax,0x34(%esi,%ebx,1)
 8225923:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8225926:	89 44 1e 38          	mov    %eax,0x38(%esi,%ebx,1)
 822592a:	8b 45 88             	mov    -0x78(%ebp),%eax
 822592d:	89 44 1e 3c          	mov    %eax,0x3c(%esi,%ebx,1)
 8225931:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8225934:	89 44 1e 40          	mov    %eax,0x40(%esi,%ebx,1)
 8225938:	8b 45 90             	mov    -0x70(%ebp),%eax
 822593b:	89 44 1e 44          	mov    %eax,0x44(%esi,%ebx,1)
 822593f:	0f b6 45 94          	movzbl -0x6c(%ebp),%eax
 8225943:	88 44 1e 48          	mov    %al,0x48(%esi,%ebx,1)
 8225947:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 822594a:	6b c0 3d             	imul   $0x3d,%eax,%eax
 822594d:	03 45 08             	add    0x8(%ebp),%eax
 8225950:	83 c0 0c             	add    $0xc,%eax
 8225953:	89 04 24             	mov    %eax,(%esp)
 8225956:	e8 b7 ae f2 ff       	call   8150812 <_ZNK10Inven_Item19isEquipableItemTypeEv>
 822595b:	83 f0 01             	xor    $0x1,%eax
 822595e:	84 c0                	test   %al,%al
 8225960:	74 0a                	je     822596c <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x166>
 8225962:	b8 00 00 00 00       	mov    $0x0,%eax
 8225967:	e9 11 01 00 00       	jmp    8225a7d <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x277>
 822596c:	8b 75 e4             	mov    -0x1c(%ebp),%esi
 822596f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8225972:	8b 45 08             	mov    0x8(%ebp),%eax
 8225975:	6b d2 3d             	imul   $0x3d,%edx,%edx
 8225978:	8b 44 02 0e          	mov    0xe(%edx,%eax,1),%eax
 822597c:	89 c3                	mov    %eax,%ebx
 822597e:	e8 18 68 ea ff       	call   80cc19b <_Z14G_CDataManagerv>
 8225983:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8225987:	89 04 24             	mov    %eax,(%esp)
 822598a:	e8 a3 a0 13 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 822598f:	89 c2                	mov    %eax,%edx
 8225991:	8b 45 08             	mov    0x8(%ebp),%eax
 8225994:	8d 4e 20             	lea    0x20(%esi),%ecx
 8225997:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 822599b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 822599f:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 82259a3:	0f 9e c0             	setle  %al
 82259a6:	84 c0                	test   %al,%al
 82259a8:	0f 85 a7 fe ff ff    	jne    8225855 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x4f>
 82259ae:	8b 45 08             	mov    0x8(%ebp),%eax
 82259b1:	05 cd 00 00 00       	add    $0xcd,%eax
 82259b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 82259ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 82259bd:	89 04 24             	mov    %eax,(%esp)
 82259c0:	e8 5d 75 36 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 82259c5:	8b 45 08             	mov    0x8(%ebp),%eax
 82259c8:	0f b6 80 cd 00 00 00 	movzbl 0xcd(%eax),%eax
 82259cf:	3c 02                	cmp    $0x2,%al
 82259d1:	7e 0a                	jle    82259dd <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x1d7>
 82259d3:	b8 00 00 00 00       	mov    $0x0,%eax
 82259d8:	e9 a0 00 00 00       	jmp    8225a7d <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x277>
 82259dd:	8b 45 08             	mov    0x8(%ebp),%eax
 82259e0:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 82259e4:	0f b7 d8             	movzwl %ax,%ebx
 82259e7:	8b 45 08             	mov    0x8(%ebp),%eax
 82259ea:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 82259f0:	89 04 24             	mov    %eax,(%esp)
 82259f3:	e8 86 48 eb ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 82259f8:	8d 55 a7             	lea    -0x59(%ebp),%edx
 82259fb:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 82259ff:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8225a06:	00 
 8225a07:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225a0b:	89 14 24             	mov    %edx,(%esp)
 8225a0e:	e8 05 5f 2d 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 8225a13:	83 ec 04             	sub    $0x4,%esp
 8225a16:	8d 45 a7             	lea    -0x59(%ebp),%eax
 8225a19:	89 04 24             	mov    %eax,(%esp)
 8225a1c:	e8 45 93 ef ff       	call   811ed66 <_ZNK10Inven_Item7isEmptyEv>
 8225a21:	84 c0                	test   %al,%al
 8225a23:	74 07                	je     8225a2c <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x226>
 8225a25:	b8 00 00 00 00       	mov    $0x0,%eax
 8225a2a:	eb 51                	jmp    8225a7d <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x277>
 8225a2c:	8b 45 a9             	mov    -0x57(%ebp),%eax
 8225a2f:	3d e3 04 00 00       	cmp    $0x4e3,%eax
 8225a34:	75 0c                	jne    8225a42 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x23c>
 8225a36:	8b 45 08             	mov    0x8(%ebp),%eax
 8225a39:	c6 80 d4 00 00 00 00 	movb   $0x0,0xd4(%eax)
 8225a40:	eb 36                	jmp    8225a78 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x272>
 8225a42:	8b 45 a9             	mov    -0x57(%ebp),%eax
 8225a45:	3d e4 04 00 00       	cmp    $0x4e4,%eax
 8225a4a:	75 0c                	jne    8225a58 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x252>
 8225a4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8225a4f:	c6 80 d4 00 00 00 01 	movb   $0x1,0xd4(%eax)
 8225a56:	eb 20                	jmp    8225a78 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x272>
 8225a58:	8b 45 a9             	mov    -0x57(%ebp),%eax
 8225a5b:	3d cf be 28 00       	cmp    $0x28becf,%eax
 8225a60:	75 0c                	jne    8225a6e <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x268>
 8225a62:	8b 45 08             	mov    0x8(%ebp),%eax
 8225a65:	c6 80 d4 00 00 00 03 	movb   $0x3,0xd4(%eax)
 8225a6c:	eb 0a                	jmp    8225a78 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf+0x272>
 8225a6e:	8b 45 08             	mov    0x8(%ebp),%eax
 8225a71:	c6 80 d4 00 00 00 02 	movb   $0x2,0xd4(%eax)
 8225a78:	b8 01 00 00 00       	mov    $0x1,%eax
 8225a7d:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8225a80:	83 c4 00             	add    $0x0,%esp
 8225a83:	5b                   	pop    %ebx
 8225a84:	5e                   	pop    %esi
 8225a85:	5f                   	pop    %edi
 8225a86:	5d                   	pop    %ebp
 8225a87:	c3                   	ret

```

```c
// Dispatcher_Compound_ExtreamItem::_read_packet @ 0x8225806

/* Dispatcher_Compound_ExtreamItem::_read_packet(PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_ExtreamItem::_read_packet
          (Dispatcher_Compound_ExtreamItem *this,PacketBuf *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  Dispatcher_Compound_ExtreamItem local_70;
  Inven_Item local_5d [2];
  int local_5b;
  int local_20;
  
  if (*(int *)(this + 0xd0) == 0) {
    uVar2 = 0;
  }
  else {
    _reset(this);
    PacketBuf::get_short(param_1,(ushort *)(this + 4));
    for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
      PacketBuf::get_short(param_1,(ushort *)(this + local_20 * 2 + 8));
      iVar4 = local_20;
      iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0xd0));
      iVar4 = iVar4 * 0x3d;
      CInventory::GetInvenSlot((int)&local_ac,iVar3);
      *(undefined4 *)(this + iVar4 + 0xc) = local_ac;
      *(undefined4 *)(this + iVar4 + 0x10) = local_a8;
      *(undefined4 *)(this + iVar4 + 0x14) = local_a4;
      *(undefined4 *)(this + iVar4 + 0x18) = local_a0;
      *(undefined4 *)(this + iVar4 + 0x1c) = local_9c;
      *(undefined4 *)(this + iVar4 + 0x20) = local_98;
      *(undefined4 *)(this + iVar4 + 0x24) = local_94;
      *(undefined4 *)(this + iVar4 + 0x28) = local_90;
      *(undefined4 *)(this + iVar4 + 0x2c) = local_8c;
      *(undefined4 *)(this + iVar4 + 0x30) = local_88;
      *(undefined4 *)(this + iVar4 + 0x34) = local_84;
      *(undefined4 *)(this + iVar4 + 0x38) = local_80;
      *(undefined4 *)(this + iVar4 + 0x3c) = local_7c;
      *(undefined4 *)(this + iVar4 + 0x40) = local_78;
      *(undefined4 *)(this + iVar4 + 0x44) = local_74;
      this[iVar4 + 0x48] = local_70;
      cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)(this + local_20 * 0x3d + 0xc));
      iVar4 = local_20;
      if (cVar1 != '\x01') {
        return 0;
      }
      iVar3 = *(int *)(this + local_20 * 0x3d + 0xe);
      this_00 = (CDataManager *)G_CDataManager();
      uVar2 = CDataManager::find_item(this_00,iVar3);
      *(undefined4 *)(this + (iVar4 + 0x20) * 4 + 8) = uVar2;
    }
    PacketBuf::get_byte(param_1,(char *)(this + 0xcd));
    if ((char)this[0xcd] < '\x03') {
      iVar4 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0xd0));
      CInventory::GetInvenSlot((int)local_5d,iVar4);
      cVar1 = Inven_Item::isEmpty(local_5d);
      if (cVar1 == '\0') {
        if (local_5b == 0x4e3) {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x0;
        }
        else if (local_5b == 0x4e4) {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x1;
        }
        else if (local_5b == 0x28becf) {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x3;
        }
        else {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x2;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

```

---

## _remove_victim

```asm
// === 08225a88 Dispatcher_Compound_ExtreamItem::_remove_victim  [0x08225a88-0x8225b53] ===
 8225a88:	55                   	push   %ebp
 8225a89:	89 e5                	mov    %esp,%ebp
 8225a8b:	83 ec 38             	sub    $0x38,%esp
 8225a8e:	8b 45 08             	mov    0x8(%ebp),%eax
 8225a91:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225a97:	89 04 24             	mov    %eax,(%esp)
 8225a9a:	e8 ef 47 eb ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8225a9f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8225aa2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8225aa9:	eb 4f                	jmp    8225afa <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv+0x72>
 8225aab:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8225aae:	8b 45 08             	mov    0x8(%ebp),%eax
 8225ab1:	0f b7 44 50 08       	movzwl 0x8(%eax,%edx,2),%eax
 8225ab6:	0f b7 c0             	movzwl %ax,%eax
 8225ab9:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8225ac0:	00 
 8225ac1:	c7 44 24 10 2a 00 00 	movl   $0x2a,0x10(%esp)
 8225ac8:	00 
 8225ac9:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8225ad0:	00 
 8225ad1:	89 44 24 08          	mov    %eax,0x8(%esp)
 8225ad5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225adc:	00 
 8225add:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8225ae0:	89 04 24             	mov    %eax,(%esp)
 8225ae3:	e8 24 e5 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8225ae8:	83 f0 01             	xor    $0x1,%eax
 8225aeb:	84 c0                	test   %al,%al
 8225aed:	74 07                	je     8225af6 <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv+0x6e>
 8225aef:	b8 00 00 00 00       	mov    $0x0,%eax
 8225af4:	eb 5b                	jmp    8225b51 <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv+0xc9>
 8225af6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8225afa:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8225afe:	0f 96 c0             	setbe  %al
 8225b01:	84 c0                	test   %al,%al
 8225b03:	75 a6                	jne    8225aab <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv+0x23>
 8225b05:	8b 45 08             	mov    0x8(%ebp),%eax
 8225b08:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8225b0c:	0f b7 c0             	movzwl %ax,%eax
 8225b0f:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 8225b16:	00 
 8225b17:	c7 44 24 10 2a 00 00 	movl   $0x2a,0x10(%esp)
 8225b1e:	00 
 8225b1f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8225b26:	00 
 8225b27:	89 44 24 08          	mov    %eax,0x8(%esp)
 8225b2b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225b32:	00 
 8225b33:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8225b36:	89 04 24             	mov    %eax,(%esp)
 8225b39:	e8 ce e4 2d 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 8225b3e:	83 f0 01             	xor    $0x1,%eax
 8225b41:	84 c0                	test   %al,%al
 8225b43:	74 07                	je     8225b4c <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv+0xc4>
 8225b45:	b8 00 00 00 00       	mov    $0x0,%eax
 8225b4a:	eb 05                	jmp    8225b51 <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv+0xc9>
 8225b4c:	b8 01 00 00 00       	mov    $0x1,%eax
 8225b51:	c9                   	leave
 8225b52:	c3                   	ret
 8225b53:	90                   	nop

```

```c
// Dispatcher_Compound_ExtreamItem::_remove_victim @ 0x8225a88

/* Dispatcher_Compound_ExtreamItem::_remove_victim() */

bool __thiscall
Dispatcher_Compound_ExtreamItem::_remove_victim(Dispatcher_Compound_ExtreamItem *this)

{
  char cVar1;
  CInventory *pCVar2;
  uint local_10;
  
  pCVar2 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0xd0));
  local_10 = 0;
  while( true ) {
    if (1 < local_10) {
      cVar1 = CInventory::delete_item(pCVar2,1,*(undefined2 *)(this + 4),1,0x2a,1);
      return cVar1 == '\x01';
    }
    cVar1 = CInventory::delete_item(pCVar2,1,*(undefined2 *)(this + local_10 * 2 + 8),1,0x2a,1);
    if (cVar1 != '\x01') break;
    local_10 = local_10 + 1;
  }
  return false;
}

```

---

## _reset

```asm
// === 0822577e Dispatcher_Compound_ExtreamItem::_reset  [0x0822577e-0x8225805] ===
 822577e:	55                   	push   %ebp
 822577f:	89 e5                	mov    %esp,%ebp
 8225781:	83 ec 28             	sub    $0x28,%esp
 8225784:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 822578b:	eb 36                	jmp    82257c3 <_ZN31Dispatcher_Compound_ExtreamItem6_resetEv+0x45>
 822578d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8225790:	8b 45 08             	mov    0x8(%ebp),%eax
 8225793:	66 c7 44 50 08 00 00 	movw   $0x0,0x8(%eax,%edx,2)
 822579a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 822579d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 82257a0:	03 45 08             	add    0x8(%ebp),%eax
 82257a3:	83 c0 0c             	add    $0xc,%eax
 82257a6:	89 04 24             	mov    %eax,(%esp)
 82257a9:	e8 2a 60 ea ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 82257ae:	8b 55 f4             	mov    -0xc(%ebp),%edx
 82257b1:	8b 45 08             	mov    0x8(%ebp),%eax
 82257b4:	83 c2 20             	add    $0x20,%edx
 82257b7:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 82257be:	00 
 82257bf:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 82257c3:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 82257c7:	0f 9e c0             	setle  %al
 82257ca:	84 c0                	test   %al,%al
 82257cc:	75 bf                	jne    822578d <_ZN31Dispatcher_Compound_ExtreamItem6_resetEv+0xf>
 82257ce:	8b 45 08             	mov    0x8(%ebp),%eax
 82257d1:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 82257d7:	8b 45 08             	mov    0x8(%ebp),%eax
 82257da:	05 90 00 00 00       	add    $0x90,%eax
 82257df:	89 04 24             	mov    %eax,(%esp)
 82257e2:	e8 f1 5f ea ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 82257e7:	8b 45 08             	mov    0x8(%ebp),%eax
 82257ea:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 82257f0:	8b 45 08             	mov    0x8(%ebp),%eax
 82257f3:	c6 80 cd 00 00 00 02 	movb   $0x2,0xcd(%eax)
 82257fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82257fd:	c6 80 d4 00 00 00 02 	movb   $0x2,0xd4(%eax)
 8225804:	c9                   	leave
 8225805:	c3                   	ret

```

```c
// Dispatcher_Compound_ExtreamItem::_reset @ 0x822577e

/* Dispatcher_Compound_ExtreamItem::_reset() */

void __thiscall Dispatcher_Compound_ExtreamItem::_reset(Dispatcher_Compound_ExtreamItem *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    *(undefined2 *)(this + local_10 * 2 + 8) = 0;
    Inven_Item::reset((Inven_Item *)(this + local_10 * 0x3d + 0xc));
    *(undefined4 *)(this + (local_10 + 0x20) * 4 + 8) = 0;
  }
  *(undefined2 *)(this + 6) = 0;
  Inven_Item::reset((Inven_Item *)(this + 0x90));
  *(undefined2 *)(this + 4) = 0;
  this[0xcd] = (Dispatcher_Compound_ExtreamItem)0x2;
  this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x2;
  return;
}

```

---

## _send_result

```asm
// === 08225c54 Dispatcher_Compound_ExtreamItem::_send_result  [0x08225c54-0x8225ec3] ===
 8225c54:	55                   	push   %ebp
 8225c55:	89 e5                	mov    %esp,%ebp
 8225c57:	56                   	push   %esi
 8225c58:	53                   	push   %ebx
 8225c59:	83 ec 20             	sub    $0x20,%esp
 8225c5c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225c5f:	89 04 24             	mov    %eax,(%esp)
 8225c62:	e8 e5 80 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8225c67:	c7 44 24 08 46 01 00 	movl   $0x146,0x8(%esp)
 8225c6e:	00 
 8225c6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225c76:	00 
 8225c77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225c7a:	89 04 24             	mov    %eax,(%esp)
 8225c7d:	e8 7a 5c ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8225c82:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225c89:	00 
 8225c8a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225c8d:	89 04 24             	mov    %eax,(%esp)
 8225c90:	e8 8b 5c ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225c95:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8225c9c:	eb 47                	jmp    8225ce5 <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv+0x91>
 8225c9e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8225ca5:	00 
 8225ca6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225ca9:	89 04 24             	mov    %eax,(%esp)
 8225cac:	e8 6f 5c ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225cb1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8225cb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8225cb7:	0f b7 44 50 08       	movzwl 0x8(%eax,%edx,2),%eax
 8225cbc:	0f b7 c0             	movzwl %ax,%eax
 8225cbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225cc3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225cc6:	89 04 24             	mov    %eax,(%esp)
 8225cc9:	e8 d6 41 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8225cce:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225cd5:	00 
 8225cd6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225cd9:	89 04 24             	mov    %eax,(%esp)
 8225cdc:	e8 5b 5c ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8225ce1:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8225ce5:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 8225ce9:	0f 9e c0             	setle  %al
 8225cec:	84 c0                	test   %al,%al
 8225cee:	75 ae                	jne    8225c9e <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv+0x4a>
 8225cf0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8225cf7:	00 
 8225cf8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225cfb:	89 04 24             	mov    %eax,(%esp)
 8225cfe:	e8 1d 5c ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225d03:	8b 45 08             	mov    0x8(%ebp),%eax
 8225d06:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8225d0a:	0f b7 c0             	movzwl %ax,%eax
 8225d0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225d11:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225d14:	89 04 24             	mov    %eax,(%esp)
 8225d17:	e8 88 41 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8225d1c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225d23:	00 
 8225d24:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225d27:	89 04 24             	mov    %eax,(%esp)
 8225d2a:	e8 0d 5c ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8225d2f:	8b 45 08             	mov    0x8(%ebp),%eax
 8225d32:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8225d36:	98                   	cwtl
 8225d37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225d3b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225d3e:	89 04 24             	mov    %eax,(%esp)
 8225d41:	e8 5e 41 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8225d46:	8b 45 08             	mov    0x8(%ebp),%eax
 8225d49:	8b 80 92 00 00 00    	mov    0x92(%eax),%eax
 8225d4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225d53:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225d56:	89 04 24             	mov    %eax,(%esp)
 8225d59:	e8 de 5b ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8225d5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8225d61:	8b 80 97 00 00 00    	mov    0x97(%eax),%eax
 8225d67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225d6b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225d6e:	89 04 24             	mov    %eax,(%esp)
 8225d71:	e8 c6 5b ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8225d76:	8b 45 08             	mov    0x8(%ebp),%eax
 8225d79:	05 90 00 00 00       	add    $0x90,%eax
 8225d7e:	89 04 24             	mov    %eax,(%esp)
 8225d81:	e8 56 aa f2 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 8225d86:	0f b6 c0             	movzbl %al,%eax
 8225d89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225d8d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225d90:	89 04 24             	mov    %eax,(%esp)
 8225d93:	e8 88 5b ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225d98:	8b 45 08             	mov    0x8(%ebp),%eax
 8225d9b:	0f b7 80 9b 00 00 00 	movzwl 0x9b(%eax),%eax
 8225da2:	0f b7 c0             	movzwl %ax,%eax
 8225da5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225da9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225dac:	89 04 24             	mov    %eax,(%esp)
 8225daf:	e8 f0 40 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8225db4:	8b 45 08             	mov    0x8(%ebp),%eax
 8225db7:	0f b6 80 90 00 00 00 	movzbl 0x90(%eax),%eax
 8225dbe:	0f b6 c0             	movzbl %al,%eax
 8225dc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225dc5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225dc8:	89 04 24             	mov    %eax,(%esp)
 8225dcb:	e8 50 5b ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225dd0:	e8 d2 45 eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 8225dd5:	89 04 24             	mov    %eax,(%esp)
 8225dd8:	e8 1f e6 00 00       	call   82343fc <_ZN9GameWorld24IsEnchantRevisionChannelEv>
 8225ddd:	84 c0                	test   %al,%al
 8225ddf:	74 15                	je     8225df6 <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv+0x1a2>
 8225de1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8225de8:	00 
 8225de9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225dec:	89 04 24             	mov    %eax,(%esp)
 8225def:	e8 48 5b ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8225df4:	eb 18                	jmp    8225e0e <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv+0x1ba>
 8225df6:	8b 45 08             	mov    0x8(%ebp),%eax
 8225df9:	8b 80 9d 00 00 00    	mov    0x9d(%eax),%eax
 8225dff:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225e03:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225e06:	89 04 24             	mov    %eax,(%esp)
 8225e09:	e8 2e 5b ea ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8225e0e:	8b 45 08             	mov    0x8(%ebp),%eax
 8225e11:	05 a1 00 00 00       	add    $0xa1,%eax
 8225e16:	89 04 24             	mov    %eax,(%esp)
 8225e19:	e8 14 a9 f2 ff       	call   8150732 <_ZNK17stAmplifyOption_t14getAbilityTypeEv>
 8225e1e:	0f b6 c0             	movzbl %al,%eax
 8225e21:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225e25:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225e28:	89 04 24             	mov    %eax,(%esp)
 8225e2b:	e8 f0 5a ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8225e30:	8b 45 08             	mov    0x8(%ebp),%eax
 8225e33:	05 a1 00 00 00       	add    $0xa1,%eax
 8225e38:	89 04 24             	mov    %eax,(%esp)
 8225e3b:	e8 32 a9 f2 ff       	call   8150772 <_ZNK17stAmplifyOption_t15getAbilityValueEv>
 8225e40:	0f b7 c0             	movzwl %ax,%eax
 8225e43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225e47:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225e4a:	89 04 24             	mov    %eax,(%esp)
 8225e4d:	e8 52 40 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8225e52:	8b 45 08             	mov    0x8(%ebp),%eax
 8225e55:	05 90 00 00 00       	add    $0x90,%eax
 8225e5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225e5e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225e61:	89 04 24             	mov    %eax,(%esp)
 8225e64:	e8 25 ab f2 ff       	call   815098e <_ZN18InterfacePacketBuf10put_packetERK10Inven_Item>
 8225e69:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225e70:	00 
 8225e71:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225e74:	89 04 24             	mov    %eax,(%esp)
 8225e77:	e8 dc 5a ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8225e7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8225e7f:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225e85:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8225e88:	89 54 24 04          	mov    %edx,0x4(%esp)
 8225e8c:	89 04 24             	mov    %eax,(%esp)
 8225e8f:	e8 26 27 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8225e94:	eb 1b                	jmp    8225eb1 <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv+0x25d>
 8225e96:	89 d3                	mov    %edx,%ebx
 8225e98:	89 c6                	mov    %eax,%esi
 8225e9a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225e9d:	89 04 24             	mov    %eax,(%esp)
 8225ea0:	e8 db 7f 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8225ea5:	89 f0                	mov    %esi,%eax
 8225ea7:	89 da                	mov    %ebx,%edx
 8225ea9:	89 04 24             	mov    %eax,(%esp)
 8225eac:	e8 9f d8 8b 00       	call   8ae3750 <_Unwind_Resume>
 8225eb1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8225eb4:	89 04 24             	mov    %eax,(%esp)
 8225eb7:	e8 c4 7f 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8225ebc:	83 c4 20             	add    $0x20,%esp
 8225ebf:	5b                   	pop    %ebx
 8225ec0:	5e                   	pop    %esi
 8225ec1:	5d                   	pop    %ebp
 8225ec2:	c3                   	ret
 8225ec3:	90                   	nop

```

```c
// Dispatcher_Compound_ExtreamItem::_send_result @ 0x8225c54

/* Dispatcher_Compound_ExtreamItem::_send_result() */

void __thiscall Dispatcher_Compound_ExtreamItem::_send_result(Dispatcher_Compound_ExtreamItem *this)

{
  char cVar1;
  uint uVar2;
  GameWorld *this_00;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08225c7d to 08225e93 has its CatchHandler @ 08225e96 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x146);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short
              ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + local_10 * 2 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,1);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + 4));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(this + 6));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x92));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x97));
  uVar2 = Inven_Item::GetItemAttr((Inven_Item *)(this + 0x90));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar2 & 0xff);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(this + 0x9b));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)this[0x90]);
  this_00 = (GameWorld *)G_GameWorld();
  cVar1 = GameWorld::IsEnchantRevisionChannel(this_00);
  if (cVar1 == '\0') {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(this + 0x9d));
  }
  else {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
  }
  uVar2 = stAmplifyOption_t::getAbilityType((stAmplifyOption_t *)(this + 0xa1));
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,uVar2 & 0xff);
  uVar2 = stAmplifyOption_t::getAbilityValue((stAmplifyOption_t *)(this + 0xa1));
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar2 & 0xffff);
  InterfacePacketBuf::put_packet((InterfacePacketBuf *)local_1c,(Inven_Item *)(this + 0x90));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(*(CUser **)(this + 0xd0),local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## dispatch_sig

```asm
// === 08225ec4 Dispatcher_Compound_ExtreamItem::dispatch_sig  [0x08225ec4-0x822621b] ===
 8225ec4:	55                   	push   %ebp
 8225ec5:	89 e5                	mov    %esp,%ebp
 8225ec7:	56                   	push   %esi
 8225ec8:	53                   	push   %ebx
 8225ec9:	83 ec 40             	sub    $0x40,%esp
 8225ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8225ecf:	89 04 24             	mov    %eax,(%esp)
 8225ed2:	e8 b5 44 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8225ed7:	83 f8 02             	cmp    $0x2,%eax
 8225eda:	0f 9e c0             	setle  %al
 8225edd:	84 c0                	test   %al,%al
 8225edf:	74 0a                	je     8225eeb <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8225ee1:	b8 00 00 00 00       	mov    $0x0,%eax
 8225ee6:	e9 29 03 00 00       	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 8225eeb:	8b 45 08             	mov    0x8(%ebp),%eax
 8225eee:	8b 55 0c             	mov    0xc(%ebp),%edx
 8225ef1:	89 90 d0 00 00 00    	mov    %edx,0xd0(%eax)
 8225ef7:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 8225efb:	8b 45 10             	mov    0x10(%ebp),%eax
 8225efe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8225f02:	8b 45 08             	mov    0x8(%ebp),%eax
 8225f05:	89 04 24             	mov    %eax,(%esp)
 8225f08:	e8 f9 f8 ff ff       	call   8225806 <_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf>
 8225f0d:	83 f0 01             	xor    $0x1,%eax
 8225f10:	84 c0                	test   %al,%al
 8225f12:	74 2b                	je     8225f3f <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x7b>
 8225f14:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 8225f18:	8b 45 08             	mov    0x8(%ebp),%eax
 8225f1b:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225f21:	89 54 24 08          	mov    %edx,0x8(%esp)
 8225f25:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 8225f2c:	00 
 8225f2d:	89 04 24             	mov    %eax,(%esp)
 8225f30:	e8 0d 60 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8225f35:	b8 00 00 00 00       	mov    $0x0,%eax
 8225f3a:	e9 d5 02 00 00       	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 8225f3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8225f42:	0f b6 80 d4 00 00 00 	movzbl 0xd4(%eax),%eax
 8225f49:	0f be d0             	movsbl %al,%edx
 8225f4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8225f4f:	8d 98 88 00 00 00    	lea    0x88(%eax),%ebx
 8225f55:	8b 45 08             	mov    0x8(%ebp),%eax
 8225f58:	8d 48 0c             	lea    0xc(%eax),%ecx
 8225f5b:	a1 50 f7 41 09       	mov    0x941f750,%eax
 8225f60:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8225f64:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8225f68:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8225f6c:	89 04 24             	mov    %eax,(%esp)
 8225f6f:	e8 62 78 10 00       	call   832d7d6 <_ZNK14ExtreamDungeon25CCompound_ExtreamDun_Item17checkCompoundableEP10Inven_ItemPPK10CEquipItemc>
 8225f74:	88 45 f3             	mov    %al,-0xd(%ebp)
 8225f77:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 8225f7b:	0f 95 c0             	setne  %al
 8225f7e:	84 c0                	test   %al,%al
 8225f80:	74 2b                	je     8225fad <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0xe9>
 8225f82:	0f b6 55 f3          	movzbl -0xd(%ebp),%edx
 8225f86:	8b 45 08             	mov    0x8(%ebp),%eax
 8225f89:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225f8f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8225f93:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 8225f9a:	00 
 8225f9b:	89 04 24             	mov    %eax,(%esp)
 8225f9e:	e8 9f 5f 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8225fa3:	b8 00 00 00 00       	mov    $0x0,%eax
 8225fa8:	e9 67 02 00 00       	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 8225fad:	8b 45 08             	mov    0x8(%ebp),%eax
 8225fb0:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 8225fb4:	0f b7 d0             	movzwl %ax,%edx
 8225fb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8225fba:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225fc0:	89 54 24 08          	mov    %edx,0x8(%esp)
 8225fc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225fcb:	00 
 8225fcc:	89 04 24             	mov    %eax,(%esp)
 8225fcf:	e8 6e 09 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8225fd4:	84 c0                	test   %al,%al
 8225fd6:	75 2b                	jne    8226003 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x13f>
 8225fd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8225fdb:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 8225fdf:	0f b7 d0             	movzwl %ax,%edx
 8225fe2:	8b 45 08             	mov    0x8(%ebp),%eax
 8225fe5:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8225feb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8225fef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8225ff6:	00 
 8225ff7:	89 04 24             	mov    %eax,(%esp)
 8225ffa:	e8 43 09 42 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8225fff:	84 c0                	test   %al,%al
 8226001:	74 07                	je     822600a <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x146>
 8226003:	b8 01 00 00 00       	mov    $0x1,%eax
 8226008:	eb 05                	jmp    822600f <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x14b>
 822600a:	b8 00 00 00 00       	mov    $0x0,%eax
 822600f:	84 c0                	test   %al,%al
 8226011:	74 2b                	je     822603e <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x17a>
 8226013:	8b 45 08             	mov    0x8(%ebp),%eax
 8226016:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 822601c:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8226023:	00 
 8226024:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 822602b:	00 
 822602c:	89 04 24             	mov    %eax,(%esp)
 822602f:	e8 0e 5f 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8226034:	b8 00 00 00 00       	mov    $0x0,%eax
 8226039:	e9 d6 01 00 00       	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 822603e:	8b 45 08             	mov    0x8(%ebp),%eax
 8226041:	8b 98 d0 00 00 00    	mov    0xd0(%eax),%ebx
 8226047:	e8 9a c5 f3 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 822604c:	c7 44 24 0c 0d 00 00 	movl   $0xd,0xc(%esp)
 8226053:	00 
 8226054:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 822605b:	00 
 822605c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8226060:	89 04 24             	mov    %eax,(%esp)
 8226063:	e8 50 86 f4 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8226068:	84 c0                	test   %al,%al
 822606a:	74 2b                	je     8226097 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x1d3>
 822606c:	8b 45 08             	mov    0x8(%ebp),%eax
 822606f:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8226075:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 822607c:	00 
 822607d:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 8226084:	00 
 8226085:	89 04 24             	mov    %eax,(%esp)
 8226088:	e8 b5 5e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822608d:	b8 00 00 00 00       	mov    $0x0,%eax
 8226092:	e9 7d 01 00 00       	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 8226097:	8b 45 08             	mov    0x8(%ebp),%eax
 822609a:	0f b6 80 d4 00 00 00 	movzbl 0xd4(%eax),%eax
 82260a1:	3c 03                	cmp    $0x3,%al
 82260a3:	75 07                	jne    82260ac <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x1e8>
 82260a5:	b8 01 00 00 00       	mov    $0x1,%eax
 82260aa:	eb 05                	jmp    82260b1 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x1ed>
 82260ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82260b1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82260b4:	8b 45 08             	mov    0x8(%ebp),%eax
 82260b7:	8d b0 90 00 00 00    	lea    0x90(%eax),%esi
 82260bd:	8b 45 08             	mov    0x8(%ebp),%eax
 82260c0:	0f b6 80 cd 00 00 00 	movzbl 0xcd(%eax),%eax
 82260c7:	0f be d0             	movsbl %al,%edx
 82260ca:	8b 45 08             	mov    0x8(%ebp),%eax
 82260cd:	8d 98 88 00 00 00    	lea    0x88(%eax),%ebx
 82260d3:	a1 50 f7 41 09       	mov    0x941f750,%eax
 82260d8:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 82260db:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 82260df:	89 74 24 0c          	mov    %esi,0xc(%esp)
 82260e3:	89 54 24 08          	mov    %edx,0x8(%esp)
 82260e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82260eb:	89 04 24             	mov    %eax,(%esp)
 82260ee:	e8 cd 6b 10 00       	call   832ccc0 <_ZN14ExtreamDungeon25CCompound_ExtreamDun_Item16makeCompoundItemEPPK10CEquipItemcR10Inven_ItemNS_15eBindSphereTypeE>
 82260f3:	83 f0 01             	xor    $0x1,%eax
 82260f6:	84 c0                	test   %al,%al
 82260f8:	74 2b                	je     8226125 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x261>
 82260fa:	8b 45 08             	mov    0x8(%ebp),%eax
 82260fd:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 8226103:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 822610a:	00 
 822610b:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 8226112:	00 
 8226113:	89 04 24             	mov    %eax,(%esp)
 8226116:	e8 27 5e 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822611b:	b8 00 00 00 00       	mov    $0x0,%eax
 8226120:	e9 ef 00 00 00       	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 8226125:	8b 45 08             	mov    0x8(%ebp),%eax
 8226128:	83 c0 0c             	add    $0xc,%eax
 822612b:	89 04 24             	mov    %eax,(%esp)
 822612e:	e8 23 53 00 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8226133:	0f b6 d8             	movzbl %al,%ebx
 8226136:	8b 45 08             	mov    0x8(%ebp),%eax
 8226139:	83 c0 49             	add    $0x49,%eax
 822613c:	89 04 24             	mov    %eax,(%esp)
 822613f:	e8 12 53 00 00       	call   822b456 <_ZNK10Inven_Item14GetReSealCountEv>
 8226144:	0f b6 c0             	movzbl %al,%eax
 8226147:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 822614a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 822614d:	db 45 e4             	fildl  -0x1c(%ebp)
 8226150:	d9 05 48 63 bd 08    	flds   0x8bd6348
 8226156:	de f9                	fdivrp %st,%st(1)
 8226158:	d9 05 4c 63 bd 08    	flds   0x8bd634c
 822615e:	de c1                	faddp  %st,%st(1)
 8226160:	d9 7d e2             	fnstcw -0x1e(%ebp)
 8226163:	0f b7 45 e2          	movzwl -0x1e(%ebp),%eax
 8226167:	b4 0c                	mov    $0xc,%ah
 8226169:	66 89 45 e0          	mov    %ax,-0x20(%ebp)
 822616d:	d9 6d e0             	fldcw  -0x20(%ebp)
 8226170:	df 5d de             	fistps -0x22(%ebp)
 8226173:	d9 6d e2             	fldcw  -0x1e(%ebp)
 8226176:	0f b7 45 de          	movzwl -0x22(%ebp),%eax
 822617a:	0f b6 c0             	movzbl %al,%eax
 822617d:	8b 55 08             	mov    0x8(%ebp),%edx
 8226180:	81 c2 90 00 00 00    	add    $0x90,%edx
 8226186:	89 44 24 04          	mov    %eax,0x4(%esp)
 822618a:	89 14 24             	mov    %edx,(%esp)
 822618d:	e8 d4 52 00 00       	call   822b466 <_ZN10Inven_Item14SetReSealCountEh>
 8226192:	8b 45 08             	mov    0x8(%ebp),%eax
 8226195:	8b 80 92 00 00 00    	mov    0x92(%eax),%eax
 822619b:	85 c0                	test   %eax,%eax
 822619d:	75 28                	jne    82261c7 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x303>
 822619f:	8b 45 08             	mov    0x8(%ebp),%eax
 82261a2:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 82261a8:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 82261af:	00 
 82261b0:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 82261b7:	00 
 82261b8:	89 04 24             	mov    %eax,(%esp)
 82261bb:	e8 82 5d 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82261c0:	b8 00 00 00 00       	mov    $0x0,%eax
 82261c5:	eb 4d                	jmp    8226214 <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x350>
 82261c7:	8b 45 08             	mov    0x8(%ebp),%eax
 82261ca:	89 04 24             	mov    %eax,(%esp)
 82261cd:	e8 b6 f8 ff ff       	call   8225a88 <_ZN31Dispatcher_Compound_ExtreamItem14_remove_victimEv>
 82261d2:	84 c0                	test   %al,%al
 82261d4:	74 18                	je     82261ee <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x32a>
 82261d6:	8b 45 08             	mov    0x8(%ebp),%eax
 82261d9:	89 04 24             	mov    %eax,(%esp)
 82261dc:	e8 73 f9 ff ff       	call   8225b54 <_ZN31Dispatcher_Compound_ExtreamItem13_push_newitemEv>
 82261e1:	8b 45 08             	mov    0x8(%ebp),%eax
 82261e4:	89 04 24             	mov    %eax,(%esp)
 82261e7:	e8 68 fa ff ff       	call   8225c54 <_ZN31Dispatcher_Compound_ExtreamItem12_send_resultEv>
 82261ec:	eb 21                	jmp    822620f <_ZN31Dispatcher_Compound_ExtreamItem12dispatch_sigEP5CUserR9PacketBuf+0x34b>
 82261ee:	8b 45 08             	mov    0x8(%ebp),%eax
 82261f1:	8b 80 d0 00 00 00    	mov    0xd0(%eax),%eax
 82261f7:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 82261fe:	00 
 82261ff:	c7 44 24 04 46 01 00 	movl   $0x146,0x4(%esp)
 8226206:	00 
 8226207:	89 04 24             	mov    %eax,(%esp)
 822620a:	e8 33 5d 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 822620f:	b8 00 00 00 00       	mov    $0x0,%eax
 8226214:	83 c4 40             	add    $0x40,%esp
 8226217:	5b                   	pop    %ebx
 8226218:	5e                   	pop    %esi
 8226219:	5d                   	pop    %ebp
 822621a:	c3                   	ret
 822621b:	90                   	nop

```

```c
// Dispatcher_Compound_ExtreamItem::dispatch_sig @ 0x8225ec4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Dispatcher_Compound_ExtreamItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_ExtreamItem::dispatch_sig
          (Dispatcher_Compound_ExtreamItem *this,CUser *param_1,PacketBuf *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  ServiceRestrictManager *pSVar5;
  uint uVar6;
  uint uVar7;
  
  iVar4 = CUser::get_state(param_1);
  if (2 < iVar4) {
    *(CUser **)(this + 0xd0) = param_1;
    cVar3 = _read_packet(this,param_2);
    if (cVar3 == '\x01') {
      cVar3 = ExtreamDungeon::CCompound_ExtreamDun_Item::checkCompoundable
                        (GlobalData::s_pCompoundBindCube,(Inven_Item *)(this + 0xc),
                         (CEquipItem **)(this + 0x88),(char)this[0xd4]);
      if (cVar3 == '\0') {
        cVar3 = CUser::CheckItemLock(*(CUser **)(this + 0xd0),1,(uint)*(ushort *)(this + 8));
        if ((cVar3 == '\0') &&
           (cVar3 = CUser::CheckItemLock(*(CUser **)(this + 0xd0),1,(uint)*(ushort *)(this + 10)),
           cVar3 == '\0')) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0xd5);
        }
        else {
          uVar1 = *(undefined4 *)(this + 0xd0);
          pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar3 = ServiceRestrictManager::isRestricted(pSVar5,uVar1,1,0xd);
          if (cVar3 == '\0') {
            cVar3 = ExtreamDungeon::CCompound_ExtreamDun_Item::makeCompoundItem
                              (GlobalData::s_pCompoundBindCube,this + 0x88,(int)(char)this[0xcd],
                               this + 0x90,this[0xd4] == (Dispatcher_Compound_ExtreamItem)0x3);
            if (cVar3 == '\x01') {
              uVar6 = Inven_Item::GetReSealCount((Inven_Item *)(this + 0xc));
              uVar7 = Inven_Item::GetReSealCount((Inven_Item *)(this + 0x49));
              Inven_Item::SetReSealCount
                        ((Inven_Item *)(this + 0x90),
                         (uchar)(short)ROUND(_DAT_08bd634c +
                                             (float)((uVar6 & 0xff) + (uVar7 & 0xff)) /
                                             _DAT_08bd6348));
              if (*(int *)(this + 0x92) == 0) {
                CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0x11);
              }
              else {
                cVar3 = _remove_victim(this);
                if (cVar3 == '\0') {
                  CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0x11);
                }
                else {
                  _push_newitem(this);
                  _send_result(this);
                }
              }
            }
            else {
              CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0x11);
            }
          }
          else {
            CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0xd1);
          }
        }
      }
      else {
        CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,cVar3);
      }
    }
    else {
      CUser::SendCmdErrorPacket(*(CUser **)(this + 0xd0),0x146,0);
    }
  }
  return 0;
}

```

