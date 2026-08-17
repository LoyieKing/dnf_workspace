# DisPatcher_MoveItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081c57a0 DisPatcher_MoveItem::check_error  [0x081c57a0-0x81c5903] ===
 81c57a0:	55                   	push   %ebp
 81c57a1:	89 e5                	mov    %esp,%ebp
 81c57a3:	53                   	push   %ebx
 81c57a4:	83 ec 64             	sub    $0x64,%esp
 81c57a7:	8b 45 10             	mov    0x10(%ebp),%eax
 81c57aa:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81c57ad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c57b0:	8b 40 14             	mov    0x14(%eax),%eax
 81c57b3:	85 c0                	test   %eax,%eax
 81c57b5:	79 0a                	jns    81c57c1 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x21>
 81c57b7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81c57bc:	e9 3d 01 00 00       	jmp    81c58fe <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x15e>
 81c57c1:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 81c57c5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c57c8:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81c57cc:	0f be c0             	movsbl %al,%eax
 81c57cf:	83 f8 05             	cmp    $0x5,%eax
 81c57d2:	7f 0f                	jg     81c57e3 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x43>
 81c57d4:	83 f8 04             	cmp    $0x4,%eax
 81c57d7:	7d 13                	jge    81c57ec <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x4c>
 81c57d9:	83 f8 03             	cmp    $0x3,%eax
 81c57dc:	74 61                	je     81c583f <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x9f>
 81c57de:	e9 c6 00 00 00       	jmp    81c58a9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x109>
 81c57e3:	83 f8 0e             	cmp    $0xe,%eax
 81c57e6:	0f 85 bd 00 00 00    	jne    81c58a9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x109>
 81c57ec:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 81c57f0:	c6 45 b2 01          	movb   $0x1,-0x4e(%ebp)
 81c57f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c57f7:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c57fb:	0f bf d8             	movswl %ax,%ebx
 81c57fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c5801:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c5805:	0f be c0             	movsbl %al,%eax
 81c5808:	89 04 24             	mov    %eax,(%esp)
 81c580b:	e8 35 20 f3 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81c5810:	8d 55 b2             	lea    -0x4e(%ebp),%edx
 81c5813:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81c5817:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c581b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c581f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5822:	89 04 24             	mov    %eax,(%esp)
 81c5825:	e8 04 ab f5 ff       	call   812032e <_Z36CheckItemTradeLimitCountToMoveByUserR5CUseriiRb>
 81c582a:	0f b6 45 b2          	movzbl -0x4e(%ebp),%eax
 81c582e:	83 f0 01             	xor    $0x1,%eax
 81c5831:	84 c0                	test   %al,%al
 81c5833:	74 73                	je     81c58a8 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x108>
 81c5835:	b8 72 00 00 00       	mov    $0x72,%eax
 81c583a:	e9 bf 00 00 00       	jmp    81c58fe <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x15e>
 81c583f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c5842:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c5846:	3c 07                	cmp    $0x7,%al
 81c5848:	75 4f                	jne    81c5899 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0xf9>
 81c584a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c584d:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c5851:	0f bf d8             	movswl %ax,%ebx
 81c5854:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5857:	89 04 24             	mov    %eax,(%esp)
 81c585a:	e8 1f 4a f1 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81c585f:	8d 55 b3             	lea    -0x4d(%ebp),%edx
 81c5862:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c5866:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 81c586d:	00 
 81c586e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5872:	89 14 24             	mov    %edx,(%esp)
 81c5875:	e8 9e 60 33 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81c587a:	83 ec 04             	sub    $0x4,%esp
 81c587d:	0f b6 45 b3          	movzbl -0x4d(%ebp),%eax
 81c5881:	84 c0                	test   %al,%al
 81c5883:	74 14                	je     81c5899 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0xf9>
 81c5885:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c5888:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c588c:	66 3d 8b 00          	cmp    $0x8b,%ax
 81c5890:	7e 07                	jle    81c5899 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0xf9>
 81c5892:	b8 01 00 00 00       	mov    $0x1,%eax
 81c5897:	eb 05                	jmp    81c589e <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0xfe>
 81c5899:	b8 00 00 00 00       	mov    $0x0,%eax
 81c589e:	84 c0                	test   %al,%al
 81c58a0:	74 07                	je     81c58a9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x109>
 81c58a2:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 81c58a6:	eb 01                	jmp    81c58a9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x109>
 81c58a8:	90                   	nop
 81c58a9:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 81c58ad:	74 3a                	je     81c58e9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x149>
 81c58af:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c58b2:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c58b6:	0f bf d8             	movswl %ax,%ebx
 81c58b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81c58bc:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c58c0:	0f be c0             	movsbl %al,%eax
 81c58c3:	89 04 24             	mov    %eax,(%esp)
 81c58c6:	e8 7a 1f f3 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81c58cb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c58cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c58d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c58d6:	89 04 24             	mov    %eax,(%esp)
 81c58d9:	e8 64 10 48 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81c58de:	84 c0                	test   %al,%al
 81c58e0:	74 07                	je     81c58e9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x149>
 81c58e2:	b8 01 00 00 00       	mov    $0x1,%eax
 81c58e7:	eb 05                	jmp    81c58ee <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x14e>
 81c58e9:	b8 00 00 00 00       	mov    $0x0,%eax
 81c58ee:	84 c0                	test   %al,%al
 81c58f0:	74 07                	je     81c58f9 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x159>
 81c58f2:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81c58f7:	eb 05                	jmp    81c58fe <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE+0x15e>
 81c58f9:	b8 00 00 00 00       	mov    $0x0,%eax
 81c58fe:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81c5901:	c9                   	leave
 81c5902:	c3                   	ret
 81c5903:	90                   	nop

```

```c
// DisPatcher_MoveItem::check_error @ 0x81c57a0

/* DisPatcher_MoveItem::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveItem::check_error(DisPatcher_MoveItem *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  bool local_52;
  char local_51 [61];
  MSG_BASE *local_14;
  char local_d;
  
  local_14 = param_2;
  if (*(int *)(param_2 + 0x14) < 0) {
    return 0xffffffff;
  }
  local_d = '\0';
  MVar1 = param_2[0x18];
  if ((char)MVar1 < '\x06') {
    if ((char)MVar1 < '\x04') {
      if (MVar1 != (MSG_BASE)0x3) goto LAB_081c58a9;
      if (param_2[0xd] == (MSG_BASE)0x7) {
        iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_51,iVar5);
        if ((local_51[0] == '\0') || (*(short *)(local_14 + 0xe) < 0x8c)) goto LAB_081c5899;
        bVar3 = true;
      }
      else {
LAB_081c5899:
        bVar3 = false;
      }
      if (bVar3) {
        local_d = '\x01';
      }
    }
    else {
LAB_081c57ec:
      local_d = '\x01';
      local_52 = true;
      sVar2 = *(short *)(param_2 + 0xe);
      iVar5 = GetInvenTypeFromItemSpace((int)(char)param_2[0xd]);
      CheckItemTradeLimitCountToMoveByUser(param_1,iVar5,(int)sVar2,&local_52);
      if (local_52 != true) {
        return 0x72;
      }
    }
  }
  else if (MVar1 == (MSG_BASE)0xe) goto LAB_081c57ec;
LAB_081c58a9:
  if (local_d != '\0') {
    sVar2 = *(short *)(local_14 + 0xe);
    iVar5 = GetInvenTypeFromItemSpace((int)(char)local_14[0xd]);
    cVar4 = CUser::CheckItemLock(param_1,iVar5,(int)sVar2);
    if (cVar4 != '\0') {
      bVar3 = true;
      goto LAB_081c58ee;
    }
  }
  bVar3 = false;
LAB_081c58ee:
  if (bVar3) {
    uVar6 = 0xd5;
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

```

---

## process

```asm
// === 081c5904 DisPatcher_MoveItem::process  [0x081c5904-0x81c5b75] ===
 81c5904:	55                   	push   %ebp
 81c5905:	89 e5                	mov    %esp,%ebp
 81c5907:	57                   	push   %edi
 81c5908:	56                   	push   %esi
 81c5909:	53                   	push   %ebx
 81c590a:	83 ec 6c             	sub    $0x6c,%esp
 81c590d:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5910:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81c5913:	8b 45 14             	mov    0x14(%ebp),%eax
 81c5916:	89 45 e0             	mov    %eax,-0x20(%ebp)
 81c5919:	8b 45 10             	mov    0x10(%ebp),%eax
 81c591c:	89 44 24 08          	mov    %eax,0x8(%esp)
 81c5920:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5923:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5927:	8b 45 08             	mov    0x8(%ebp),%eax
 81c592a:	89 04 24             	mov    %eax,(%esp)
 81c592d:	e8 6e fe ff ff       	call   81c57a0 <_ZN19DisPatcher_MoveItem11check_errorEP5CUserR8MSG_BASE>
 81c5932:	89 c2                	mov    %eax,%edx
 81c5934:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5937:	89 50 04             	mov    %edx,0x4(%eax)
 81c593a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c593d:	8b 40 04             	mov    0x4(%eax),%eax
 81c5940:	85 c0                	test   %eax,%eax
 81c5942:	7e 31                	jle    81c5975 <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x71>
 81c5944:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5947:	8b 40 04             	mov    0x4(%eax),%eax
 81c594a:	3d d5 00 00 00       	cmp    $0xd5,%eax
 81c594f:	75 1a                	jne    81c596b <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x67>
 81c5951:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5954:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c5958:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c595b:	88 50 08             	mov    %dl,0x8(%eax)
 81c595e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5961:	0f b6 50 18          	movzbl 0x18(%eax),%edx
 81c5965:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5968:	88 50 10             	mov    %dl,0x10(%eax)
 81c596b:	b8 00 00 00 00       	mov    $0x0,%eax
 81c5970:	e9 f9 01 00 00       	jmp    81c5b6e <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x26a>
 81c5975:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5978:	8b 40 04             	mov    0x4(%eax),%eax
 81c597b:	85 c0                	test   %eax,%eax
 81c597d:	79 32                	jns    81c59b1 <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0xad>
 81c597f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5982:	89 04 24             	mov    %eax,(%esp)
 81c5985:	e8 e4 49 f1 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81c598a:	8b 55 e0             	mov    -0x20(%ebp),%edx
 81c598d:	8b 52 04             	mov    0x4(%edx),%edx
 81c5990:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81c5994:	89 54 24 08          	mov    %edx,0x8(%esp)
 81c5998:	c7 44 24 04 00 59 bd 	movl   $0x8bd5900,0x4(%esp)
 81c599f:	08 
 81c59a0:	c7 04 24 1b 14 00 00 	movl   $0x141b,(%esp)
 81c59a7:	e8 2b af 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c59ac:	e9 bd 01 00 00       	jmp    81c5b6e <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x26a>
 81c59b1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c59b4:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81c59b8:	3c 03                	cmp    $0x3,%al
 81c59ba:	74 0f                	je     81c59cb <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0xc7>
 81c59bc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c59bf:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81c59c3:	3c 12                	cmp    $0x12,%al
 81c59c5:	0f 85 c1 00 00 00    	jne    81c5a8c <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x188>
 81c59cb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c59ce:	0f b7 40 19          	movzwl 0x19(%eax),%eax
 81c59d2:	66 83 f8 09          	cmp    $0x9,%ax
 81c59d6:	0f 8e b0 00 00 00    	jle    81c5a8c <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x188>
 81c59dc:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c59df:	0f b7 40 19          	movzwl 0x19(%eax),%eax
 81c59e3:	66 83 f8 15          	cmp    $0x15,%ax
 81c59e7:	0f 8f 9f 00 00 00    	jg     81c5a8c <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x188>
 81c59ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c59f0:	0f b6 40 24          	movzbl 0x24(%eax),%eax
 81c59f4:	0f be d8             	movsbl %al,%ebx
 81c59f7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c59fa:	0f b6 40 23          	movzbl 0x23(%eax),%eax
 81c59fe:	0f be f0             	movsbl %al,%esi
 81c5a01:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a04:	8b 40 1b             	mov    0x1b(%eax),%eax
 81c5a07:	89 45 c0             	mov    %eax,-0x40(%ebp)
 81c5a0a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a0d:	0f b7 40 19          	movzwl 0x19(%eax),%eax
 81c5a11:	98                   	cwtl
 81c5a12:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 81c5a15:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a18:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81c5a1c:	0f be c0             	movsbl %al,%eax
 81c5a1f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 81c5a22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a25:	8b 40 14             	mov    0x14(%eax),%eax
 81c5a28:	89 45 cc             	mov    %eax,-0x34(%ebp)
 81c5a2b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a2e:	8b 78 10             	mov    0x10(%eax),%edi
 81c5a31:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a34:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c5a38:	0f bf c8             	movswl %ax,%ecx
 81c5a3b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a3e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c5a42:	0f be d0             	movsbl %al,%edx
 81c5a45:	89 5c 24 28          	mov    %ebx,0x28(%esp)
 81c5a49:	89 74 24 24          	mov    %esi,0x24(%esp)
 81c5a4d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5a50:	89 44 24 20          	mov    %eax,0x20(%esp)
 81c5a54:	8b 45 c0             	mov    -0x40(%ebp),%eax
 81c5a57:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81c5a5b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 81c5a5e:	89 44 24 18          	mov    %eax,0x18(%esp)
 81c5a62:	8b 45 c8             	mov    -0x38(%ebp),%eax
 81c5a65:	89 44 24 14          	mov    %eax,0x14(%esp)
 81c5a69:	8b 45 cc             	mov    -0x34(%ebp),%eax
 81c5a6c:	89 44 24 10          	mov    %eax,0x10(%esp)
 81c5a70:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81c5a74:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81c5a78:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c5a7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5a7f:	89 04 24             	mov    %eax,(%esp)
 81c5a82:	e8 8d 9b 49 00       	call   865f614 <_ZN5CUser26exchange_interspace_expandEiimiiimPicc>
 81c5a87:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c5a8a:	eb 75                	jmp    81c5b01 <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x1fd>
 81c5a8c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a8f:	8b 40 1b             	mov    0x1b(%eax),%eax
 81c5a92:	89 45 d0             	mov    %eax,-0x30(%ebp)
 81c5a95:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5a98:	0f b7 40 19          	movzwl 0x19(%eax),%eax
 81c5a9c:	98                   	cwtl
 81c5a9d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c5aa0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5aa3:	0f b6 40 18          	movzbl 0x18(%eax),%eax
 81c5aa7:	0f be f8             	movsbl %al,%edi
 81c5aaa:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5aad:	8b 70 14             	mov    0x14(%eax),%esi
 81c5ab0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5ab3:	8b 58 10             	mov    0x10(%eax),%ebx
 81c5ab6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5ab9:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81c5abd:	0f bf c8             	movswl %ax,%ecx
 81c5ac0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5ac3:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81c5ac7:	0f be d0             	movsbl %al,%edx
 81c5aca:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5acd:	89 44 24 20          	mov    %eax,0x20(%esp)
 81c5ad1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 81c5ad4:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81c5ad8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81c5adb:	89 44 24 18          	mov    %eax,0x18(%esp)
 81c5adf:	89 7c 24 14          	mov    %edi,0x14(%esp)
 81c5ae3:	89 74 24 10          	mov    %esi,0x10(%esp)
 81c5ae7:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81c5aeb:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81c5aef:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c5af3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5af6:	89 04 24             	mov    %eax,(%esp)
 81c5af9:	e8 b2 9c 49 00       	call   865f7b0 <_ZN5CUser19exchange_interspaceEiimiiimPi>
 81c5afe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c5b01:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81c5b05:	75 3f                	jne    81c5b46 <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x242>
 81c5b07:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5b0a:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c5b0e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b11:	88 50 08             	mov    %dl,0x8(%eax)
 81c5b14:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5b17:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81c5b1b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b1e:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81c5b22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5b25:	8b 50 14             	mov    0x14(%eax),%edx
 81c5b28:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b2b:	89 50 0c             	mov    %edx,0xc(%eax)
 81c5b2e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5b31:	0f b6 50 18          	movzbl 0x18(%eax),%edx
 81c5b35:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b38:	88 50 10             	mov    %dl,0x10(%eax)
 81c5b3b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 81c5b3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b41:	89 50 14             	mov    %edx,0x14(%eax)
 81c5b44:	eb 23                	jmp    81c5b69 <_ZN19DisPatcher_MoveItem7processEP5CUserR8MSG_BASER9ParamBase+0x265>
 81c5b46:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 81c5b49:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b4c:	89 50 04             	mov    %edx,0x4(%eax)
 81c5b4f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5b52:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81c5b56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b59:	88 50 08             	mov    %dl,0x8(%eax)
 81c5b5c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81c5b5f:	0f b6 50 18          	movzbl 0x18(%eax),%edx
 81c5b63:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81c5b66:	88 50 10             	mov    %dl,0x10(%eax)
 81c5b69:	b8 00 00 00 00       	mov    $0x0,%eax
 81c5b6e:	83 c4 6c             	add    $0x6c,%esp
 81c5b71:	5b                   	pop    %ebx
 81c5b72:	5e                   	pop    %esi
 81c5b73:	5f                   	pop    %edi
 81c5b74:	5d                   	pop    %ebp
 81c5b75:	c3                   	ret

```

```c
// DisPatcher_MoveItem::process @ 0x81c5904

/* DisPatcher_MoveItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
DisPatcher_MoveItem::process
          (DisPatcher_MoveItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int local_2c;
  MSG_BASE *local_28;
  ParamBase *local_24;
  int local_20;
  
  local_28 = param_2;
  local_24 = param_3;
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_24 + 4) = uVar1;
  if (*(int *)(local_24 + 4) < 1) {
    if (*(int *)(local_24 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x141b,
                       "virtual int DisPatcher_MoveItem::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_24 + 4),uVar2);
    }
    else {
      if ((((local_28[0x18] == (MSG_BASE)0x3) || (local_28[0x18] == (MSG_BASE)0x12)) &&
          (9 < *(short *)(local_28 + 0x19))) && (*(short *)(local_28 + 0x19) < 0x16)) {
        local_20 = CUser::exchange_interspace_expand
                             (param_1,(int)(char)local_28[0xd],(int)*(short *)(local_28 + 0xe),
                              *(ulong *)(local_28 + 0x10),*(int *)(local_28 + 0x14),
                              (int)(char)local_28[0x18],(int)*(short *)(local_28 + 0x19),
                              *(ulong *)(local_28 + 0x1b),&local_2c,(char)local_28[0x23],
                              (char)local_28[0x24]);
      }
      else {
        local_20 = CUser::exchange_interspace
                             (param_1,(int)(char)local_28[0xd],(int)*(short *)(local_28 + 0xe),
                              *(ulong *)(local_28 + 0x10),*(int *)(local_28 + 0x14),
                              (int)(char)local_28[0x18],(int)*(short *)(local_28 + 0x19),
                              *(ulong *)(local_28 + 0x1b),&local_2c);
      }
      if (local_20 == 0) {
        *(MSG_BASE *)(local_24 + 8) = local_28[0xd];
        *(undefined2 *)(local_24 + 10) = *(undefined2 *)(local_28 + 0xe);
        *(undefined4 *)(local_24 + 0xc) = *(undefined4 *)(local_28 + 0x14);
        *(MSG_BASE *)(local_24 + 0x10) = local_28[0x18];
        *(int *)(local_24 + 0x14) = local_2c;
      }
      else {
        *(int *)(local_24 + 4) = local_20;
        *(MSG_BASE *)(local_24 + 8) = local_28[0xd];
        *(MSG_BASE *)(local_24 + 0x10) = local_28[0x18];
      }
      uVar1 = 0;
    }
  }
  else {
    if (*(int *)(local_24 + 4) == 0xd5) {
      *(MSG_BASE *)(local_24 + 8) = local_28[0xd];
      *(MSG_BASE *)(local_24 + 0x10) = local_28[0x18];
    }
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081c54e0 DisPatcher_MoveItem::read  [0x081c54e0-0x81c579f] ===
 81c54e0:	55                   	push   %ebp
 81c54e1:	89 e5                	mov    %esp,%ebp
 81c54e3:	83 ec 28             	sub    $0x28,%esp
 81c54e6:	8b 45 10             	mov    0x10(%ebp),%eax
 81c54e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81c54ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c54ef:	83 c0 0d             	add    $0xd,%eax
 81c54f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c54f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c54f9:	89 04 24             	mov    %eax,(%esp)
 81c54fc:	e8 21 7a 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c5501:	83 f0 01             	xor    $0x1,%eax
 81c5504:	84 c0                	test   %al,%al
 81c5506:	74 29                	je     81c5531 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x51>
 81c5508:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c550f:	00 
 81c5510:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5517:	00 
 81c5518:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c551f:	08 
 81c5520:	c7 04 24 73 13 00 00 	movl   $0x1373,(%esp)
 81c5527:	e8 ab b3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c552c:	e9 6c 02 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5531:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5534:	83 c0 0e             	add    $0xe,%eax
 81c5537:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c553b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c553e:	89 04 24             	mov    %eax,(%esp)
 81c5541:	e8 7a 7a 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c5546:	83 f0 01             	xor    $0x1,%eax
 81c5549:	84 c0                	test   %al,%al
 81c554b:	74 29                	je     81c5576 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x96>
 81c554d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5554:	00 
 81c5555:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c555c:	00 
 81c555d:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c5564:	08 
 81c5565:	c7 04 24 74 13 00 00 	movl   $0x1374,(%esp)
 81c556c:	e8 66 b3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5571:	e9 27 02 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5576:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5579:	83 c0 10             	add    $0x10,%eax
 81c557c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5580:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5583:	89 04 24             	mov    %eax,(%esp)
 81c5586:	e8 f3 7c 3c 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81c558b:	83 f0 01             	xor    $0x1,%eax
 81c558e:	84 c0                	test   %al,%al
 81c5590:	74 29                	je     81c55bb <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0xdb>
 81c5592:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5599:	00 
 81c559a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c55a1:	00 
 81c55a2:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c55a9:	08 
 81c55aa:	c7 04 24 75 13 00 00 	movl   $0x1375,(%esp)
 81c55b1:	e8 21 b3 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c55b6:	e9 e2 01 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c55bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c55be:	83 c0 14             	add    $0x14,%eax
 81c55c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c55c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c55c8:	89 04 24             	mov    %eax,(%esp)
 81c55cb:	e8 20 7b 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c55d0:	83 f0 01             	xor    $0x1,%eax
 81c55d3:	84 c0                	test   %al,%al
 81c55d5:	74 29                	je     81c5600 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x120>
 81c55d7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c55de:	00 
 81c55df:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c55e6:	00 
 81c55e7:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c55ee:	08 
 81c55ef:	c7 04 24 76 13 00 00 	movl   $0x1376,(%esp)
 81c55f6:	e8 dc b2 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c55fb:	e9 9d 01 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5600:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5603:	83 c0 18             	add    $0x18,%eax
 81c5606:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c560a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c560d:	89 04 24             	mov    %eax,(%esp)
 81c5610:	e8 0d 79 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c5615:	83 f0 01             	xor    $0x1,%eax
 81c5618:	84 c0                	test   %al,%al
 81c561a:	74 29                	je     81c5645 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x165>
 81c561c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5623:	00 
 81c5624:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c562b:	00 
 81c562c:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c5633:	08 
 81c5634:	c7 04 24 77 13 00 00 	movl   $0x1377,(%esp)
 81c563b:	e8 97 b2 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5640:	e9 58 01 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5645:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5648:	83 c0 19             	add    $0x19,%eax
 81c564b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c564f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5652:	89 04 24             	mov    %eax,(%esp)
 81c5655:	e8 66 79 3c 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81c565a:	83 f0 01             	xor    $0x1,%eax
 81c565d:	84 c0                	test   %al,%al
 81c565f:	74 29                	je     81c568a <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x1aa>
 81c5661:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5668:	00 
 81c5669:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5670:	00 
 81c5671:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c5678:	08 
 81c5679:	c7 04 24 78 13 00 00 	movl   $0x1378,(%esp)
 81c5680:	e8 52 b2 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5685:	e9 13 01 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c568a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c568d:	83 c0 1b             	add    $0x1b,%eax
 81c5690:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5694:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5697:	89 04 24             	mov    %eax,(%esp)
 81c569a:	e8 df 7b 3c 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81c569f:	83 f0 01             	xor    $0x1,%eax
 81c56a2:	84 c0                	test   %al,%al
 81c56a4:	74 29                	je     81c56cf <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x1ef>
 81c56a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c56ad:	00 
 81c56ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c56b5:	00 
 81c56b6:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c56bd:	08 
 81c56be:	c7 04 24 79 13 00 00 	movl   $0x1379,(%esp)
 81c56c5:	e8 0d b2 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c56ca:	e9 ce 00 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c56cf:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c56d2:	83 c0 1f             	add    $0x1f,%eax
 81c56d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c56d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c56dc:	89 04 24             	mov    %eax,(%esp)
 81c56df:	e8 0c 7a 3c 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81c56e4:	83 f0 01             	xor    $0x1,%eax
 81c56e7:	84 c0                	test   %al,%al
 81c56e9:	74 29                	je     81c5714 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x234>
 81c56eb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c56f2:	00 
 81c56f3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c56fa:	00 
 81c56fb:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c5702:	08 
 81c5703:	c7 04 24 7b 13 00 00 	movl   $0x137b,(%esp)
 81c570a:	e8 c8 b1 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c570f:	e9 89 00 00 00       	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5714:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5717:	83 c0 23             	add    $0x23,%eax
 81c571a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c571e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5721:	89 04 24             	mov    %eax,(%esp)
 81c5724:	e8 f9 77 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c5729:	83 f0 01             	xor    $0x1,%eax
 81c572c:	84 c0                	test   %al,%al
 81c572e:	74 26                	je     81c5756 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x276>
 81c5730:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5737:	00 
 81c5738:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c573f:	00 
 81c5740:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c5747:	08 
 81c5748:	c7 04 24 7e 13 00 00 	movl   $0x137e,(%esp)
 81c574f:	e8 83 b1 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5754:	eb 47                	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5756:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81c5759:	83 c0 24             	add    $0x24,%eax
 81c575c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5760:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5763:	89 04 24             	mov    %eax,(%esp)
 81c5766:	e8 b7 77 3c 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81c576b:	83 f0 01             	xor    $0x1,%eax
 81c576e:	84 c0                	test   %al,%al
 81c5770:	74 26                	je     81c5798 <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2b8>
 81c5772:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81c5779:	00 
 81c577a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81c5781:	00 
 81c5782:	c7 44 24 04 60 59 bd 	movl   $0x8bd5960,0x4(%esp)
 81c5789:	08 
 81c578a:	c7 04 24 7f 13 00 00 	movl   $0x137f,(%esp)
 81c5791:	e8 41 b1 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81c5796:	eb 05                	jmp    81c579d <_ZN19DisPatcher_MoveItem4readER9PacketBufR8MSG_BASE+0x2bd>
 81c5798:	b8 00 00 00 00       	mov    $0x0,%eax
 81c579d:	c9                   	leave
 81c579e:	c3                   	ret
 81c579f:	90                   	nop

```

```c
// DisPatcher_MoveItem::read @ 0x81c54e0

/* DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
DisPatcher_MoveItem::read(DisPatcher_MoveItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x18));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x19));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x1b));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1f));
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x23));
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x24));
                    if (cVar1 == '\x01') {
                      uVar2 = 0;
                    }
                    else {
                      uVar2 = LineFunc(0x137f,
                                       "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar2 = LineFunc(0x137e,
                                     "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",
                                     0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0x137b,
                                   "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,
                                   0);
                }
              }
              else {
                uVar2 = LineFunc(0x1379,
                                 "virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0)
                ;
              }
            }
            else {
              uVar2 = LineFunc(0x1378,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x1377,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0
                             ,0);
          }
        }
        else {
          uVar2 = LineFunc(0x1376,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0
                          );
        }
      }
      else {
        uVar2 = LineFunc(0x1375,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x1374,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x1373,"virtual int DisPatcher_MoveItem::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081c5b76 DisPatcher_MoveItem::send  [0x081c5b76-0x81c5d77] ===
 81c5b76:	55                   	push   %ebp
 81c5b77:	89 e5                	mov    %esp,%ebp
 81c5b79:	57                   	push   %edi
 81c5b7a:	56                   	push   %esi
 81c5b7b:	53                   	push   %ebx
 81c5b7c:	83 ec 4c             	sub    $0x4c,%esp
 81c5b7f:	8b 45 10             	mov    0x10(%ebp),%eax
 81c5b82:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81c5b85:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5b88:	89 04 24             	mov    %eax,(%esp)
 81c5b8b:	e8 bc 81 3c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81c5b90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5b93:	8b 40 04             	mov    0x4(%eax),%eax
 81c5b96:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81c5b9b:	0f 84 c3 01 00 00    	je     81c5d64 <_ZN19DisPatcher_MoveItem4sendEP5CUserR9ParamBase+0x1ee>
 81c5ba1:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 81c5ba8:	00 
 81c5ba9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c5bb0:	00 
 81c5bb1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5bb4:	89 04 24             	mov    %eax,(%esp)
 81c5bb7:	e8 40 5d f0 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81c5bbc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5bbf:	8b 40 04             	mov    0x4(%eax),%eax
 81c5bc2:	85 c0                	test   %eax,%eax
 81c5bc4:	0f 84 84 00 00 00    	je     81c5c4e <_ZN19DisPatcher_MoveItem4sendEP5CUserR9ParamBase+0xd8>
 81c5bca:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81c5bd1:	00 
 81c5bd2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5bd5:	89 04 24             	mov    %eax,(%esp)
 81c5bd8:	e8 43 5d f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5bdd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5be0:	8b 40 04             	mov    0x4(%eax),%eax
 81c5be3:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5be7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5bea:	89 04 24             	mov    %eax,(%esp)
 81c5bed:	e8 2e 5d f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5bf2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5bf5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c5bf9:	0f be c0             	movsbl %al,%eax
 81c5bfc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5c00:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c03:	89 04 24             	mov    %eax,(%esp)
 81c5c06:	e8 15 5d f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5c0b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5c0e:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c5c12:	0f be c0             	movsbl %al,%eax
 81c5c15:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5c19:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c1c:	89 04 24             	mov    %eax,(%esp)
 81c5c1f:	e8 fc 5c f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5c24:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c5c2b:	00 
 81c5c2c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c2f:	89 04 24             	mov    %eax,(%esp)
 81c5c32:	e8 21 5d f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c5c37:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c3a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5c3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5c41:	89 04 24             	mov    %eax,(%esp)
 81c5c44:	e8 71 29 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c5c49:	e9 16 01 00 00       	jmp    81c5d64 <_ZN19DisPatcher_MoveItem4sendEP5CUserR9ParamBase+0x1ee>
 81c5c4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c5c55:	00 
 81c5c56:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c59:	89 04 24             	mov    %eax,(%esp)
 81c5c5c:	e8 bf 5c f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5c61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5c64:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c5c68:	0f be c0             	movsbl %al,%eax
 81c5c6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5c6f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c72:	89 04 24             	mov    %eax,(%esp)
 81c5c75:	e8 a6 5c f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5c7a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5c7d:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81c5c81:	98                   	cwtl
 81c5c82:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5c86:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c89:	89 04 24             	mov    %eax,(%esp)
 81c5c8c:	e8 13 42 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c5c91:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5c94:	8b 40 0c             	mov    0xc(%eax),%eax
 81c5c97:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5c9b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5c9e:	89 04 24             	mov    %eax,(%esp)
 81c5ca1:	e8 96 5c f0 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81c5ca6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5ca9:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c5cad:	0f be c0             	movsbl %al,%eax
 81c5cb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5cb4:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5cb7:	89 04 24             	mov    %eax,(%esp)
 81c5cba:	e8 61 5c f0 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81c5cbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5cc2:	8b 40 14             	mov    0x14(%eax),%eax
 81c5cc5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5cc9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5ccc:	89 04 24             	mov    %eax,(%esp)
 81c5ccf:	e8 d0 41 f1 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81c5cd4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81c5cdb:	00 
 81c5cdc:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5cdf:	89 04 24             	mov    %eax,(%esp)
 81c5ce2:	e8 71 5c f0 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81c5ce7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5cea:	89 44 24 04          	mov    %eax,0x4(%esp)
 81c5cee:	8b 45 0c             	mov    0xc(%ebp),%eax
 81c5cf1:	89 04 24             	mov    %eax,(%esp)
 81c5cf4:	e8 c1 28 48 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81c5cf9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5cfc:	8b 40 14             	mov    0x14(%eax),%eax
 81c5cff:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81c5d02:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5d05:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81c5d09:	0f be f8             	movsbl %al,%edi
 81c5d0c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5d0f:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81c5d13:	0f bf f0             	movswl %ax,%esi
 81c5d16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81c5d19:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81c5d1d:	0f be d8             	movsbl %al,%ebx
 81c5d20:	e8 7d d8 fc ff       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 81c5d25:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81c5d28:	89 54 24 14          	mov    %edx,0x14(%esp)
 81c5d2c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 81c5d30:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81c5d34:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81c5d38:	8b 55 0c             	mov    0xc(%ebp),%edx
 81c5d3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81c5d3f:	89 04 24             	mov    %eax,(%esp)
 81c5d42:	e8 cf a6 fc ff       	call   8190416 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci>
 81c5d47:	eb 1b                	jmp    81c5d64 <_ZN19DisPatcher_MoveItem4sendEP5CUserR9ParamBase+0x1ee>
 81c5d49:	89 d3                	mov    %edx,%ebx
 81c5d4b:	89 c6                	mov    %eax,%esi
 81c5d4d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5d50:	89 04 24             	mov    %eax,(%esp)
 81c5d53:	e8 28 81 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c5d58:	89 f0                	mov    %esi,%eax
 81c5d5a:	89 da                	mov    %ebx,%edx
 81c5d5c:	89 04 24             	mov    %eax,(%esp)
 81c5d5f:	e8 ec d9 91 00       	call   8ae3750 <_Unwind_Resume>
 81c5d64:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81c5d67:	89 04 24             	mov    %eax,(%esp)
 81c5d6a:	e8 11 81 3c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81c5d6f:	83 c4 4c             	add    $0x4c,%esp
 81c5d72:	5b                   	pop    %ebx
 81c5d73:	5e                   	pop    %esi
 81c5d74:	5f                   	pop    %edi
 81c5d75:	5d                   	pop    %ebp
 81c5d76:	c3                   	ret
 81c5d77:	90                   	nop

```

```c
// DisPatcher_MoveItem::send @ 0x81c5b76

/* DisPatcher_MoveItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_MoveItem::send(DisPatcher_MoveItem *this,CUser *param_1,ParamBase *param_2)

{
  ParamBase PVar1;
  ParamBase PVar2;
  short sVar3;
  int iVar4;
  AvatarRechargeServer *this_00;
  PacketGuard local_2c [12];
  ParamBase *local_20;
  
  local_20 = param_2;
  PacketGuard::PacketGuard(local_2c);
  if (*(int *)(local_20 + 4) != 0x7fffffff) {
                    /* try { // try from 081c5bb7 to 081c5d46 has its CatchHandler @ 081c5d49 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x13);
    if (*(int *)(local_20 + 4) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[8]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0xc));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[0x10]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0x14));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
      iVar4 = *(int *)(local_20 + 0x14);
      PVar1 = local_20[0x10];
      sVar3 = *(short *)(local_20 + 10);
      PVar2 = local_20[8];
      this_00 = (AvatarRechargeServer *)ARAD::Singleton<AvatarRechargeServer>::Get();
      AvatarRechargeServer::SendDurability(this_00,param_1,(char)PVar2,sVar3,(char)PVar1,iVar4);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[8]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[0x10]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
    }
  }
  PacketGuard::~PacketGuard(local_2c);
  return;
}

```

