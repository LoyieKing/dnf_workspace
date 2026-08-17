# expert_job__CEnchanter

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 16

---

## IsEqualMonsterCad

```asm
// === 0849ca6a expert_job::CEnchanter::IsEqualMonsterCad  [0x0849ca6a-0x849cac5] ===
 849ca6a:	55                   	push   %ebp
 849ca6b:	89 e5                	mov    %esp,%ebp
 849ca6d:	53                   	push   %ebx
 849ca6e:	83 ec 24             	sub    $0x24,%esp
 849ca71:	8b 45 08             	mov    0x8(%ebp),%eax
 849ca74:	8b 40 40             	mov    0x40(%eax),%eax
 849ca77:	89 04 24             	mov    %eax,(%esp)
 849ca7a:	e8 b3 f3 ff ff       	call   849be32 <_ZN10expert_job15FindMonsterCardEP5CItem>
 849ca7f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849ca82:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849ca86:	75 07                	jne    849ca8f <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv+0x25>
 849ca88:	b8 00 00 00 00       	mov    $0x0,%eax
 849ca8d:	eb 30                	jmp    849cabf <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv+0x55>
 849ca8f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849ca92:	89 04 24             	mov    %eax,(%esp)
 849ca95:	e8 ae 41 c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849ca9a:	89 c3                	mov    %eax,%ebx
 849ca9c:	8b 45 08             	mov    0x8(%ebp),%eax
 849ca9f:	8b 40 3c             	mov    0x3c(%eax),%eax
 849caa2:	89 04 24             	mov    %eax,(%esp)
 849caa5:	e8 9e 41 c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849caaa:	39 c3                	cmp    %eax,%ebx
 849caac:	0f 95 c0             	setne  %al
 849caaf:	84 c0                	test   %al,%al
 849cab1:	74 07                	je     849caba <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv+0x50>
 849cab3:	b8 00 00 00 00       	mov    $0x0,%eax
 849cab8:	eb 05                	jmp    849cabf <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv+0x55>
 849caba:	b8 01 00 00 00       	mov    $0x1,%eax
 849cabf:	83 c4 24             	add    $0x24,%esp
 849cac2:	5b                   	pop    %ebx
 849cac3:	5d                   	pop    %ebp
 849cac4:	c3                   	ret
 849cac5:	90                   	nop

```

```c
// expert_job::CEnchanter::IsEqualMonsterCad @ 0x849ca6a

/* expert_job::CEnchanter::IsEqualMonsterCad() */

undefined4 __thiscall expert_job::CEnchanter::IsEqualMonsterCad(CEnchanter *this)

{
  CItem *this_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  this_00 = (CItem *)FindMonsterCard(*(CItem **)(this + 0x40));
  if (this_00 == (CItem *)0x0) {
    uVar1 = 0;
  }
  else {
    iVar2 = CItem::get_index(this_00);
    iVar3 = CItem::get_index(*(CItem **)(this + 0x3c));
    if (iVar2 == iVar3) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

---

## IsRecipeRight

```asm
// === 0849ca06 expert_job::CEnchanter::IsRecipeRight  [0x0849ca06-0x849ca69] ===
 849ca06:	55                   	push   %ebp
 849ca07:	89 e5                	mov    %esp,%ebp
 849ca09:	83 ec 18             	sub    $0x18,%esp
 849ca0c:	8b 45 08             	mov    0x8(%ebp),%eax
 849ca0f:	8b 40 40             	mov    0x40(%eax),%eax
 849ca12:	85 c0                	test   %eax,%eax
 849ca14:	75 07                	jne    849ca1d <_ZN10expert_job10CEnchanter13IsRecipeRightEv+0x17>
 849ca16:	b8 00 00 00 00       	mov    $0x0,%eax
 849ca1b:	eb 4a                	jmp    849ca67 <_ZN10expert_job10CEnchanter13IsRecipeRightEv+0x61>
 849ca1d:	8b 45 08             	mov    0x8(%ebp),%eax
 849ca20:	8b 40 40             	mov    0x40(%eax),%eax
 849ca23:	89 04 24             	mov    %eax,(%esp)
 849ca26:	e8 cf 48 c5 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 849ca2b:	83 f0 01             	xor    $0x1,%eax
 849ca2e:	84 c0                	test   %al,%al
 849ca30:	74 07                	je     849ca39 <_ZN10expert_job10CEnchanter13IsRecipeRightEv+0x33>
 849ca32:	b8 00 00 00 00       	mov    $0x0,%eax
 849ca37:	eb 2e                	jmp    849ca67 <_ZN10expert_job10CEnchanter13IsRecipeRightEv+0x61>
 849ca39:	8b 45 08             	mov    0x8(%ebp),%eax
 849ca3c:	8b 40 40             	mov    0x40(%eax),%eax
 849ca3f:	8b 00                	mov    (%eax),%eax
 849ca41:	83 c0 0c             	add    $0xc,%eax
 849ca44:	8b 10                	mov    (%eax),%edx
 849ca46:	8b 45 08             	mov    0x8(%ebp),%eax
 849ca49:	8b 40 40             	mov    0x40(%eax),%eax
 849ca4c:	89 04 24             	mov    %eax,(%esp)
 849ca4f:	ff d2                	call   *%edx
 849ca51:	83 f8 03             	cmp    $0x3,%eax
 849ca54:	0f 95 c0             	setne  %al
 849ca57:	84 c0                	test   %al,%al
 849ca59:	74 07                	je     849ca62 <_ZN10expert_job10CEnchanter13IsRecipeRightEv+0x5c>
 849ca5b:	b8 00 00 00 00       	mov    $0x0,%eax
 849ca60:	eb 05                	jmp    849ca67 <_ZN10expert_job10CEnchanter13IsRecipeRightEv+0x61>
 849ca62:	b8 01 00 00 00       	mov    $0x1,%eax
 849ca67:	c9                   	leave
 849ca68:	c3                   	ret
 849ca69:	90                   	nop

```

```c
// expert_job::CEnchanter::IsRecipeRight @ 0x849ca06

/* expert_job::CEnchanter::IsRecipeRight() */

undefined4 __thiscall expert_job::CEnchanter::IsRecipeRight(CEnchanter *this)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 0x40) == 0) {
    uVar2 = 0;
  }
  else {
    cVar1 = CItem::is_stackable(*(CItem **)(this + 0x40));
    if (cVar1 == '\x01') {
      iVar3 = (**(code **)(**(int **)(this + 0x40) + 0xc))(*(undefined4 *)(this + 0x40));
      if (iVar3 == 3) {
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

## IsRightMaterial

```asm
// === 0849c9b2 expert_job::CEnchanter::IsRightMaterial  [0x0849c9b2-0x849ca05] ===
 849c9b2:	55                   	push   %ebp
 849c9b3:	89 e5                	mov    %esp,%ebp
 849c9b5:	83 ec 28             	sub    $0x28,%esp
 849c9b8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849c9bf:	eb 32                	jmp    849c9f3 <_ZN10expert_job10CEnchanter15IsRightMaterialEv+0x41>
 849c9c1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849c9c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849c9cb:	c1 e0 04             	shl    $0x4,%eax
 849c9ce:	03 45 08             	add    0x8(%ebp),%eax
 849c9d1:	83 c0 08             	add    $0x8,%eax
 849c9d4:	89 04 24             	mov    %eax,(%esp)
 849c9d7:	e8 92 f6 ff ff       	call   849c06e <_ZN10expert_job17ExpertJobMaterial7IsRightEv>
 849c9dc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c9df:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849c9e3:	0f 95 c0             	setne  %al
 849c9e6:	84 c0                	test   %al,%al
 849c9e8:	74 05                	je     849c9ef <_ZN10expert_job10CEnchanter15IsRightMaterialEv+0x3d>
 849c9ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c9ed:	eb 14                	jmp    849ca03 <_ZN10expert_job10CEnchanter15IsRightMaterialEv+0x51>
 849c9ef:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 849c9f3:	83 7d f0 01          	cmpl   $0x1,-0x10(%ebp)
 849c9f7:	0f 9e c0             	setle  %al
 849c9fa:	84 c0                	test   %al,%al
 849c9fc:	75 c3                	jne    849c9c1 <_ZN10expert_job10CEnchanter15IsRightMaterialEv+0xf>
 849c9fe:	b8 00 00 00 00       	mov    $0x0,%eax
 849ca03:	c9                   	leave
 849ca04:	c3                   	ret
 849ca05:	90                   	nop

```

```c
// expert_job::CEnchanter::IsRightMaterial @ 0x849c9b2

/* expert_job::CEnchanter::IsRightMaterial() */

int __thiscall expert_job::CEnchanter::IsRightMaterial(CEnchanter *this)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (1 < local_14) {
      return 0;
    }
    iVar1 = ExpertJobMaterial::IsRight((ExpertJobMaterial *)(this + local_14 * 0x10 + 8));
    if (iVar1 != 0) break;
    local_14 = local_14 + 1;
  }
  return iVar1;
}

```

---

## OnAgreeEnchant

```asm
// === 0849e07e expert_job::CEnchanter::OnAgreeEnchant  [0x0849e07e-0x849e101] ===
 849e07e:	55                   	push   %ebp
 849e07f:	89 e5                	mov    %esp,%ebp
 849e081:	83 ec 28             	sub    $0x28,%esp
 849e084:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849e08b:	8b 45 10             	mov    0x10(%ebp),%eax
 849e08e:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 849e092:	0f b6 c0             	movzbl %al,%eax
 849e095:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e099:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e09c:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e0a0:	8b 45 08             	mov    0x8(%ebp),%eax
 849e0a3:	89 04 24             	mov    %eax,(%esp)
 849e0a6:	e8 e9 fc ff ff       	call   849dd94 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE>
 849e0ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849e0ae:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849e0b2:	0f 95 c0             	setne  %al
 849e0b5:	84 c0                	test   %al,%al
 849e0b7:	74 47                	je     849e100 <_ZN10expert_job10CEnchanter14OnAgreeEnchantEP5CUserP18MSG_STATIC_COMMAND+0x82>
 849e0b9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e0bc:	0f b6 c0             	movzbl %al,%eax
 849e0bf:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e0c3:	c7 44 24 04 ab 00 00 	movl   $0xab,0x4(%esp)
 849e0ca:	00 
 849e0cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e0ce:	89 04 24             	mov    %eax,(%esp)
 849e0d1:	e8 6c de 1d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 849e0d6:	8b 45 08             	mov    0x8(%ebp),%eax
 849e0d9:	8b 40 28             	mov    0x28(%eax),%eax
 849e0dc:	85 c0                	test   %eax,%eax
 849e0de:	74 20                	je     849e100 <_ZN10expert_job10CEnchanter14OnAgreeEnchantEP5CUserP18MSG_STATIC_COMMAND+0x82>
 849e0e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e0e3:	0f b6 d0             	movzbl %al,%edx
 849e0e6:	8b 45 08             	mov    0x8(%ebp),%eax
 849e0e9:	8b 40 28             	mov    0x28(%eax),%eax
 849e0ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 849e0f0:	c7 44 24 04 ab 00 00 	movl   $0xab,0x4(%esp)
 849e0f7:	00 
 849e0f8:	89 04 24             	mov    %eax,(%esp)
 849e0fb:	e8 42 de 1d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 849e100:	c9                   	leave
 849e101:	c3                   	ret

```

```c
// expert_job::CEnchanter::OnAgreeEnchant @ 0x849e07e

/* expert_job::CEnchanter::OnAgreeEnchant(CUser*, MSG_STATIC_COMMAND*) */

void __thiscall
expert_job::CEnchanter::OnAgreeEnchant(CEnchanter *this,CUser *param_1,MSG_STATIC_COMMAND *param_2)

{
  uint uVar1;
  
  uVar1 = _AgreeEnchant(this,param_1,param_2[0xd]);
  if (uVar1 != 0) {
    CUser::SendCmdErrorPacket(param_1,0xab,uVar1 & 0xff);
    if (*(int *)(this + 0x28) != 0) {
      CUser::SendCmdErrorPacket(*(CUser **)(this + 0x28),0xab,uVar1 & 0xff);
    }
  }
  return;
}

```

---

## OnCloseMission

```asm
// === 0849c822 expert_job::CEnchanter::OnCloseMission  [0x0849c822-0x849c9b1] ===
 849c822:	55                   	push   %ebp
 849c823:	89 e5                	mov    %esp,%ebp
 849c825:	56                   	push   %esi
 849c826:	53                   	push   %ebx
 849c827:	83 ec 20             	sub    $0x20,%esp
 849c82a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849c831:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c834:	89 04 24             	mov    %eax,(%esp)
 849c837:	e8 40 db c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849c83c:	0f b7 d0             	movzwl %ax,%edx
 849c83f:	8b 45 08             	mov    0x8(%ebp),%eax
 849c842:	8b 40 30             	mov    0x30(%eax),%eax
 849c845:	39 c2                	cmp    %eax,%edx
 849c847:	0f 94 c0             	sete   %al
 849c84a:	84 c0                	test   %al,%al
 849c84c:	74 37                	je     849c885 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x63>
 849c84e:	8b 45 08             	mov    0x8(%ebp),%eax
 849c851:	8b 40 28             	mov    0x28(%eax),%eax
 849c854:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849c85b:	00 
 849c85c:	89 04 24             	mov    %eax,(%esp)
 849c85f:	e8 52 30 d9 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 849c864:	8b 45 08             	mov    0x8(%ebp),%eax
 849c867:	8b 40 2c             	mov    0x2c(%eax),%eax
 849c86a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849c871:	00 
 849c872:	89 04 24             	mov    %eax,(%esp)
 849c875:	e8 3c 30 d9 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 849c87a:	8b 45 08             	mov    0x8(%ebp),%eax
 849c87d:	8b 40 2c             	mov    0x2c(%eax),%eax
 849c880:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c883:	eb 56                	jmp    849c8db <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0xb9>
 849c885:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c888:	89 04 24             	mov    %eax,(%esp)
 849c88b:	e8 ec da c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849c890:	0f b7 d0             	movzwl %ax,%edx
 849c893:	8b 45 08             	mov    0x8(%ebp),%eax
 849c896:	8b 40 34             	mov    0x34(%eax),%eax
 849c899:	39 c2                	cmp    %eax,%edx
 849c89b:	0f 94 c0             	sete   %al
 849c89e:	84 c0                	test   %al,%al
 849c8a0:	0f 84 03 01 00 00    	je     849c9a9 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x187>
 849c8a6:	8b 45 08             	mov    0x8(%ebp),%eax
 849c8a9:	8b 40 28             	mov    0x28(%eax),%eax
 849c8ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849c8b3:	00 
 849c8b4:	89 04 24             	mov    %eax,(%esp)
 849c8b7:	e8 fa 2f d9 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 849c8bc:	8b 45 08             	mov    0x8(%ebp),%eax
 849c8bf:	8b 40 2c             	mov    0x2c(%eax),%eax
 849c8c2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849c8c9:	00 
 849c8ca:	89 04 24             	mov    %eax,(%esp)
 849c8cd:	e8 e4 2f d9 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 849c8d2:	8b 45 08             	mov    0x8(%ebp),%eax
 849c8d5:	8b 40 28             	mov    0x28(%eax),%eax
 849c8d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849c8db:	83 7d 10 01          	cmpl   $0x1,0x10(%ebp)
 849c8df:	74 0a                	je     849c8eb <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0xc9>
 849c8e1:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 849c8e5:	0f 85 a8 00 00 00    	jne    849c993 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x171>
 849c8eb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849c8ef:	74 26                	je     849c917 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0xf5>
 849c8f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c8f4:	89 04 24             	mov    %eax,(%esp)
 849c8f7:	e8 36 3b c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849c8fc:	85 c0                	test   %eax,%eax
 849c8fe:	74 17                	je     849c917 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0xf5>
 849c900:	8b 45 08             	mov    0x8(%ebp),%eax
 849c903:	8b 50 28             	mov    0x28(%eax),%edx
 849c906:	8b 45 08             	mov    0x8(%ebp),%eax
 849c909:	8b 40 2c             	mov    0x2c(%eax),%eax
 849c90c:	39 c2                	cmp    %eax,%edx
 849c90e:	74 07                	je     849c917 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0xf5>
 849c910:	b8 01 00 00 00       	mov    $0x1,%eax
 849c915:	eb 05                	jmp    849c91c <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0xfa>
 849c917:	b8 00 00 00 00       	mov    $0x0,%eax
 849c91c:	84 c0                	test   %al,%al
 849c91e:	74 73                	je     849c993 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x171>
 849c920:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c923:	89 04 24             	mov    %eax,(%esp)
 849c926:	e8 21 14 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849c92b:	c7 44 24 08 9e 00 00 	movl   $0x9e,0x8(%esp)
 849c932:	00 
 849c933:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849c93a:	00 
 849c93b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c93e:	89 04 24             	mov    %eax,(%esp)
 849c941:	e8 b6 ef c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849c946:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849c94d:	00 
 849c94e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c951:	89 04 24             	mov    %eax,(%esp)
 849c954:	e8 ff ef c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849c959:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c95c:	89 44 24 04          	mov    %eax,0x4(%esp)
 849c960:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c963:	89 04 24             	mov    %eax,(%esp)
 849c966:	e8 4f bc 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849c96b:	eb 1b                	jmp    849c988 <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x166>
 849c96d:	89 d3                	mov    %edx,%ebx
 849c96f:	89 c6                	mov    %eax,%esi
 849c971:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c974:	89 04 24             	mov    %eax,(%esp)
 849c977:	e8 04 15 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849c97c:	89 f0                	mov    %esi,%eax
 849c97e:	89 da                	mov    %ebx,%edx
 849c980:	89 04 24             	mov    %eax,(%esp)
 849c983:	e8 c8 6d 64 00       	call   8ae3750 <_Unwind_Resume>
 849c988:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849c98b:	89 04 24             	mov    %eax,(%esp)
 849c98e:	e8 ed 14 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849c993:	8b 55 08             	mov    0x8(%ebp),%edx
 849c996:	a1 68 f7 41 09       	mov    0x941f768,%eax
 849c99b:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c99f:	89 04 24             	mov    %eax,(%esp)
 849c9a2:	e8 51 18 00 00       	call   849e1f8 <_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE>
 849c9a7:	eb 01                	jmp    849c9aa <_ZN10expert_job10CEnchanter14OnCloseMissionEP5CUserNS_23ENUM_CLOSE_MISSION_TYPEE+0x188>
 849c9a9:	90                   	nop
 849c9aa:	83 c4 20             	add    $0x20,%esp
 849c9ad:	5b                   	pop    %ebx
 849c9ae:	5e                   	pop    %esi
 849c9af:	5d                   	pop    %ebp
 849c9b0:	c3                   	ret
 849c9b1:	90                   	nop

```

```c
// expert_job::CEnchanter::OnCloseMission @ 0x849c822

/* expert_job::CEnchanter::OnCloseMission(CUser*, expert_job::ENUM_CLOSE_MISSION_TYPE) */

void __thiscall expert_job::CEnchanter::OnCloseMission(CEnchanter *this,CUser *param_1,int param_3)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  local_10 = (CUserCharacInfo *)0x0;
  uVar2 = CUser::get_unique_id(param_1);
  if ((uVar2 & 0xffff) == *(uint *)(this + 0x30)) {
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x28),(CExpertJob *)0x0);
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x2c),(CExpertJob *)0x0);
    local_10 = *(CUserCharacInfo **)(this + 0x2c);
  }
  else {
    uVar2 = CUser::get_unique_id(param_1);
    if ((uVar2 & 0xffff) != *(uint *)(this + 0x34)) {
      return;
    }
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x28),(CExpertJob *)0x0);
    CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x2c),(CExpertJob *)0x0);
    local_10 = *(CUserCharacInfo **)(this + 0x28);
  }
  if ((param_3 == 1) || (param_3 == 2)) {
    if ((local_10 == (CUserCharacInfo *)0x0) ||
       ((iVar3 = CUserCharacInfo::getCurCharacR(local_10), iVar3 == 0 ||
        (*(int *)(this + 0x28) == *(int *)(this + 0x2c))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0849c941 to 0849c96a has its CatchHandler @ 0849c96d */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x9e);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)local_10,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  CExpertJobMgr::FreeExpertJob(GlobalData::s_ExpertJobMgr,(CExpertJob *)this);
  return;
}

```

---

## OnPutItemForEnchant

```asm
// === 0849df5e expert_job::CEnchanter::OnPutItemForEnchant  [0x0849df5e-0x849dfcb] ===
 849df5e:	55                   	push   %ebp
 849df5f:	89 e5                	mov    %esp,%ebp
 849df61:	83 ec 38             	sub    $0x38,%esp
 849df64:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849df6b:	8b 45 10             	mov    0x10(%ebp),%eax
 849df6e:	8b 50 0e             	mov    0xe(%eax),%edx
 849df71:	8b 45 10             	mov    0x10(%ebp),%eax
 849df74:	8d 48 0e             	lea    0xe(%eax),%ecx
 849df77:	8b 45 10             	mov    0x10(%ebp),%eax
 849df7a:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 849df7e:	0f b6 c0             	movzbl %al,%eax
 849df81:	89 54 24 10          	mov    %edx,0x10(%esp)
 849df85:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 849df89:	89 44 24 08          	mov    %eax,0x8(%esp)
 849df8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 849df90:	89 44 24 04          	mov    %eax,0x4(%esp)
 849df94:	8b 45 08             	mov    0x8(%ebp),%eax
 849df97:	89 04 24             	mov    %eax,(%esp)
 849df9a:	e8 a5 f3 ff ff       	call   849d344 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti>
 849df9f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849dfa2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849dfa6:	0f 95 c0             	setne  %al
 849dfa9:	84 c0                	test   %al,%al
 849dfab:	74 1d                	je     849dfca <_ZN10expert_job10CEnchanter19OnPutItemForEnchantEP5CUserP18MSG_STATIC_COMMAND+0x6c>
 849dfad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849dfb0:	0f b6 c0             	movzbl %al,%eax
 849dfb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 849dfb7:	c7 44 24 04 ad 00 00 	movl   $0xad,0x4(%esp)
 849dfbe:	00 
 849dfbf:	8b 45 0c             	mov    0xc(%ebp),%eax
 849dfc2:	89 04 24             	mov    %eax,(%esp)
 849dfc5:	e8 78 df 1d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 849dfca:	c9                   	leave
 849dfcb:	c3                   	ret

```

```c
// expert_job::CEnchanter::OnPutItemForEnchant @ 0x849df5e

/* expert_job::CEnchanter::OnPutItemForEnchant(CUser*, MSG_STATIC_COMMAND*) */

void __thiscall
expert_job::CEnchanter::OnPutItemForEnchant
          (CEnchanter *this,CUser *param_1,MSG_STATIC_COMMAND *param_2)

{
  uint uVar1;
  
  uVar1 = _PutItemForEnchant(this,param_1,(uint)(byte)param_2[0xd],(stItemPos_t *)(param_2 + 0xe),
                             *(int *)(param_2 + 0xe));
  if (uVar1 != 0) {
    CUser::SendCmdErrorPacket(param_1,0xad,uVar1 & 0xff);
  }
  return;
}

```

---

## OnStartMission

```asm
// === 0849c7b6 expert_job::CEnchanter::OnStartMission  [0x0849c7b6-0x849c821] ===
 849c7b6:	55                   	push   %ebp
 849c7b7:	89 e5                	mov    %esp,%ebp
 849c7b9:	83 ec 18             	sub    $0x18,%esp
 849c7bc:	8b 45 08             	mov    0x8(%ebp),%eax
 849c7bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 849c7c2:	89 50 28             	mov    %edx,0x28(%eax)
 849c7c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 849c7c8:	89 04 24             	mov    %eax,(%esp)
 849c7cb:	e8 ac db c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849c7d0:	0f b7 d0             	movzwl %ax,%edx
 849c7d3:	8b 45 08             	mov    0x8(%ebp),%eax
 849c7d6:	89 50 30             	mov    %edx,0x30(%eax)
 849c7d9:	8b 55 08             	mov    0x8(%ebp),%edx
 849c7dc:	8b 45 08             	mov    0x8(%ebp),%eax
 849c7df:	8b 40 28             	mov    0x28(%eax),%eax
 849c7e2:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c7e6:	89 04 24             	mov    %eax,(%esp)
 849c7e9:	e8 c8 30 d9 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 849c7ee:	8b 45 08             	mov    0x8(%ebp),%eax
 849c7f1:	8b 55 10             	mov    0x10(%ebp),%edx
 849c7f4:	89 50 2c             	mov    %edx,0x2c(%eax)
 849c7f7:	8b 45 10             	mov    0x10(%ebp),%eax
 849c7fa:	89 04 24             	mov    %eax,(%esp)
 849c7fd:	e8 7a db c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849c802:	0f b7 d0             	movzwl %ax,%edx
 849c805:	8b 45 08             	mov    0x8(%ebp),%eax
 849c808:	89 50 34             	mov    %edx,0x34(%eax)
 849c80b:	8b 55 08             	mov    0x8(%ebp),%edx
 849c80e:	8b 45 08             	mov    0x8(%ebp),%eax
 849c811:	8b 40 2c             	mov    0x2c(%eax),%eax
 849c814:	89 54 24 04          	mov    %edx,0x4(%esp)
 849c818:	89 04 24             	mov    %eax,(%esp)
 849c81b:	e8 96 30 d9 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 849c820:	c9                   	leave
 849c821:	c3                   	ret

```

```c
// expert_job::CEnchanter::OnStartMission @ 0x849c7b6

/* expert_job::CEnchanter::OnStartMission(CUser*, CUser*) */

void __thiscall
expert_job::CEnchanter::OnStartMission(CEnchanter *this,CUser *param_1,CUser *param_2)

{
  uint uVar1;
  
  *(CUser **)(this + 0x28) = param_1;
  uVar1 = CUser::get_unique_id(param_1);
  *(uint *)(this + 0x30) = uVar1 & 0xffff;
  CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x28),(CExpertJob *)this);
  *(CUser **)(this + 0x2c) = param_2;
  uVar1 = CUser::get_unique_id(param_2);
  *(uint *)(this + 0x34) = uVar1 & 0xffff;
  CUserCharacInfo::SetCurCharacExpertJob(*(CUserCharacInfo **)(this + 0x2c),(CExpertJob *)this);
  return;
}

```

---

## OnTryEnchant

```asm
// === 0849dfcc expert_job::CEnchanter::OnTryEnchant  [0x0849dfcc-0x849e07d] ===
 849dfcc:	55                   	push   %ebp
 849dfcd:	89 e5                	mov    %esp,%ebp
 849dfcf:	53                   	push   %ebx
 849dfd0:	83 ec 24             	sub    $0x24,%esp
 849dfd3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849dfda:	8b 45 10             	mov    0x10(%ebp),%eax
 849dfdd:	8b 40 0e             	mov    0xe(%eax),%eax
 849dfe0:	89 c3                	mov    %eax,%ebx
 849dfe2:	e8 b4 e1 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 849dfe7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849dfeb:	89 04 24             	mov    %eax,(%esp)
 849dfee:	e8 3f 1a ec ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 849dff3:	8b 55 08             	mov    0x8(%ebp),%edx
 849dff6:	89 42 40             	mov    %eax,0x40(%edx)
 849dff9:	8b 45 10             	mov    0x10(%ebp),%eax
 849dffc:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 849e000:	0f b6 c0             	movzbl %al,%eax
 849e003:	8b 55 10             	mov    0x10(%ebp),%edx
 849e006:	83 c2 13             	add    $0x13,%edx
 849e009:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849e00d:	89 54 24 08          	mov    %edx,0x8(%esp)
 849e011:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e014:	89 44 24 04          	mov    %eax,0x4(%esp)
 849e018:	8b 45 08             	mov    0x8(%ebp),%eax
 849e01b:	89 04 24             	mov    %eax,(%esp)
 849e01e:	e8 a1 fc ff ff       	call   849dcc4 <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE>
 849e023:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849e026:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849e02a:	0f 95 c0             	setne  %al
 849e02d:	84 c0                	test   %al,%al
 849e02f:	74 1d                	je     849e04e <_ZN10expert_job10CEnchanter12OnTryEnchantEP5CUserP18MSG_STATIC_COMMAND+0x82>
 849e031:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849e034:	0f b6 c0             	movzbl %al,%eax
 849e037:	89 44 24 08          	mov    %eax,0x8(%esp)
 849e03b:	c7 44 24 04 ac 00 00 	movl   $0xac,0x4(%esp)
 849e042:	00 
 849e043:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e046:	89 04 24             	mov    %eax,(%esp)
 849e049:	e8 f4 de 1d 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 849e04e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849e052:	75 23                	jne    849e077 <_ZN10expert_job10CEnchanter12OnTryEnchantEP5CUserP18MSG_STATIC_COMMAND+0xab>
 849e054:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849e05b:	00 
 849e05c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849e063:	00 
 849e064:	c7 44 24 04 1f 00 00 	movl   $0x1f,0x4(%esp)
 849e06b:	00 
 849e06c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849e06f:	89 04 24             	mov    %eax,(%esp)
 849e072:	e8 19 43 c8 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 849e077:	83 c4 24             	add    $0x24,%esp
 849e07a:	5b                   	pop    %ebx
 849e07b:	5d                   	pop    %ebp
 849e07c:	c3                   	ret
 849e07d:	90                   	nop

```

```c
// expert_job::CEnchanter::OnTryEnchant @ 0x849dfcc

/* expert_job::CEnchanter::OnTryEnchant(CUser*, MSG_STATIC_COMMAND*) */

void __thiscall
expert_job::CEnchanter::OnTryEnchant(CEnchanter *this,CUser *param_1,MSG_STATIC_COMMAND *param_2)

{
  int iVar1;
  CDataManager *this_00;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_2 + 0xe);
  this_00 = (CDataManager *)G_CDataManager();
  uVar2 = CDataManager::find_item(this_00,iVar1);
  *(undefined4 *)(this + 0x40) = uVar2;
  uVar3 = _TryEnchant(this,param_1,param_2 + 0x13,param_2[0xd]);
  if (uVar3 == 0) {
    APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x1f,0,0);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0xac,uVar3 & 0xff);
  }
  return;
}

```

---

## Reset

```asm
// === 0849c71e expert_job::CEnchanter::Reset  [0x0849c71e-0x849c7b5] ===
 849c71e:	55                   	push   %ebp
 849c71f:	89 e5                	mov    %esp,%ebp
 849c721:	83 ec 28             	sub    $0x28,%esp
 849c724:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849c72b:	eb 18                	jmp    849c745 <_ZN10expert_job10CEnchanter5ResetEv+0x27>
 849c72d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849c730:	c1 e0 04             	shl    $0x4,%eax
 849c733:	03 45 08             	add    0x8(%ebp),%eax
 849c736:	83 c0 08             	add    $0x8,%eax
 849c739:	89 04 24             	mov    %eax,(%esp)
 849c73c:	e8 11 2b 00 00       	call   849f252 <_ZN10expert_job17ExpertJobMaterial5ResetEv>
 849c741:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 849c745:	83 7d f4 01          	cmpl   $0x1,-0xc(%ebp)
 849c749:	0f 9e c0             	setle  %al
 849c74c:	84 c0                	test   %al,%al
 849c74e:	75 dd                	jne    849c72d <_ZN10expert_job10CEnchanter5ResetEv+0xf>
 849c750:	8b 45 08             	mov    0x8(%ebp),%eax
 849c753:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 849c75a:	8b 45 08             	mov    0x8(%ebp),%eax
 849c75d:	c7 40 2c 00 00 00 00 	movl   $0x0,0x2c(%eax)
 849c764:	8b 45 08             	mov    0x8(%ebp),%eax
 849c767:	c7 40 30 00 00 00 00 	movl   $0x0,0x30(%eax)
 849c76e:	8b 45 08             	mov    0x8(%ebp),%eax
 849c771:	c7 40 34 00 00 00 00 	movl   $0x0,0x34(%eax)
 849c778:	8b 45 08             	mov    0x8(%ebp),%eax
 849c77b:	c7 40 38 00 00 00 00 	movl   $0x0,0x38(%eax)
 849c782:	8b 45 08             	mov    0x8(%ebp),%eax
 849c785:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849c78c:	00 
 849c78d:	89 04 24             	mov    %eax,(%esp)
 849c790:	e8 57 2a 00 00       	call   849f1ec <_ZN10expert_job10CExpertJob7SetTypeE20ENUM_EXPERT_JOB_TYPE>
 849c795:	8b 45 08             	mov    0x8(%ebp),%eax
 849c798:	c7 40 3c 00 00 00 00 	movl   $0x0,0x3c(%eax)
 849c79f:	8b 45 08             	mov    0x8(%ebp),%eax
 849c7a2:	c7 40 44 00 00 00 00 	movl   $0x0,0x44(%eax)
 849c7a9:	8b 45 08             	mov    0x8(%ebp),%eax
 849c7ac:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 849c7b3:	c9                   	leave
 849c7b4:	c3                   	ret
 849c7b5:	90                   	nop

```

```c
// expert_job::CEnchanter::Reset @ 0x849c71e

/* expert_job::CEnchanter::Reset() */

void __thiscall expert_job::CEnchanter::Reset(CEnchanter *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 2; local_10 = local_10 + 1) {
    ExpertJobMaterial::Reset((ExpertJobMaterial *)(this + local_10 * 0x10 + 8));
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  CExpertJob::SetType((CExpertJob *)this,1);
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  return;
}

```

---

## _AgreeEnchant

```asm
// === 0849dd94 expert_job::CEnchanter::_AgreeEnchant  [0x0849dd94-0x849df5d] ===
 849dd94:	55                   	push   %ebp
 849dd95:	89 e5                	mov    %esp,%ebp
 849dd97:	56                   	push   %esi
 849dd98:	53                   	push   %ebx
 849dd99:	83 ec 20             	sub    $0x20,%esp
 849dd9c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849dda3:	8b 45 0c             	mov    0xc(%ebp),%eax
 849dda6:	89 04 24             	mov    %eax,(%esp)
 849dda9:	e8 ce c5 c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849ddae:	89 c3                	mov    %eax,%ebx
 849ddb0:	8b 45 08             	mov    0x8(%ebp),%eax
 849ddb3:	8b 40 2c             	mov    0x2c(%eax),%eax
 849ddb6:	89 04 24             	mov    %eax,(%esp)
 849ddb9:	e8 be c5 c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849ddbe:	66 39 c3             	cmp    %ax,%bx
 849ddc1:	0f 95 c0             	setne  %al
 849ddc4:	84 c0                	test   %al,%al
 849ddc6:	74 0a                	je     849ddd2 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x3e>
 849ddc8:	b8 03 00 00 00       	mov    $0x3,%eax
 849ddcd:	e9 84 01 00 00       	jmp    849df56 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1c2>
 849ddd2:	8b 45 10             	mov    0x10(%ebp),%eax
 849ddd5:	83 f8 01             	cmp    $0x1,%eax
 849ddd8:	0f 84 13 01 00 00    	je     849def1 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x15d>
 849ddde:	83 f8 02             	cmp    $0x2,%eax
 849dde1:	0f 84 46 01 00 00    	je     849df2d <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x199>
 849dde7:	85 c0                	test   %eax,%eax
 849dde9:	0f 85 62 01 00 00    	jne    849df51 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1bd>
 849ddef:	8b 45 08             	mov    0x8(%ebp),%eax
 849ddf2:	83 c0 18             	add    $0x18,%eax
 849ddf5:	89 04 24             	mov    %eax,(%esp)
 849ddf8:	e8 89 14 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849ddfd:	84 c0                	test   %al,%al
 849ddff:	74 0a                	je     849de0b <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x77>
 849de01:	b8 15 00 00 00       	mov    $0x15,%eax
 849de06:	e9 4b 01 00 00       	jmp    849df56 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1c2>
 849de0b:	8b 45 08             	mov    0x8(%ebp),%eax
 849de0e:	83 c0 18             	add    $0x18,%eax
 849de11:	89 04 24             	mov    %eax,(%esp)
 849de14:	e8 39 14 00 00       	call   849f252 <_ZN10expert_job17ExpertJobMaterial5ResetEv>
 849de19:	8b 45 08             	mov    0x8(%ebp),%eax
 849de1c:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 849de23:	8b 45 08             	mov    0x8(%ebp),%eax
 849de26:	8b 40 28             	mov    0x28(%eax),%eax
 849de29:	85 c0                	test   %eax,%eax
 849de2b:	74 19                	je     849de46 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0xb2>
 849de2d:	8b 45 08             	mov    0x8(%ebp),%eax
 849de30:	8b 40 28             	mov    0x28(%eax),%eax
 849de33:	89 04 24             	mov    %eax,(%esp)
 849de36:	e8 f7 25 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849de3b:	85 c0                	test   %eax,%eax
 849de3d:	74 07                	je     849de46 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0xb2>
 849de3f:	b8 01 00 00 00       	mov    $0x1,%eax
 849de44:	eb 05                	jmp    849de4b <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0xb7>
 849de46:	b8 00 00 00 00       	mov    $0x0,%eax
 849de4b:	84 c0                	test   %al,%al
 849de4d:	0f 84 fd 00 00 00    	je     849df50 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1bc>
 849de53:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849de56:	89 04 24             	mov    %eax,(%esp)
 849de59:	e8 ee fe 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849de5e:	c7 44 24 08 ac 00 00 	movl   $0xac,0x8(%esp)
 849de65:	00 
 849de66:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849de6d:	00 
 849de6e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849de71:	89 04 24             	mov    %eax,(%esp)
 849de74:	e8 83 da c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849de79:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849de80:	00 
 849de81:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849de84:	89 04 24             	mov    %eax,(%esp)
 849de87:	e8 94 da c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849de8c:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 849de93:	00 
 849de94:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849de97:	89 04 24             	mov    %eax,(%esp)
 849de9a:	e8 81 da c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849de9f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849dea6:	00 
 849dea7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849deaa:	89 04 24             	mov    %eax,(%esp)
 849dead:	e8 a6 da c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849deb2:	8b 45 08             	mov    0x8(%ebp),%eax
 849deb5:	8b 40 28             	mov    0x28(%eax),%eax
 849deb8:	8d 55 e8             	lea    -0x18(%ebp),%edx
 849debb:	89 54 24 04          	mov    %edx,0x4(%esp)
 849debf:	89 04 24             	mov    %eax,(%esp)
 849dec2:	e8 f3 a6 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849dec7:	eb 1b                	jmp    849dee4 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x150>
 849dec9:	89 d3                	mov    %edx,%ebx
 849decb:	89 c6                	mov    %eax,%esi
 849decd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849ded0:	89 04 24             	mov    %eax,(%esp)
 849ded3:	e8 a8 ff 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849ded8:	89 f0                	mov    %esi,%eax
 849deda:	89 da                	mov    %ebx,%edx
 849dedc:	89 04 24             	mov    %eax,(%esp)
 849dedf:	e8 6c 58 64 00       	call   8ae3750 <_Unwind_Resume>
 849dee4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 849dee7:	89 04 24             	mov    %eax,(%esp)
 849deea:	e8 91 ff 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849deef:	eb 60                	jmp    849df51 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1bd>
 849def1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849def8:	00 
 849def9:	8b 45 08             	mov    0x8(%ebp),%eax
 849defc:	89 04 24             	mov    %eax,(%esp)
 849deff:	e8 28 ec ff ff       	call   849cb2c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE>
 849df04:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849df07:	8b 45 08             	mov    0x8(%ebp),%eax
 849df0a:	8b 00                	mov    (%eax),%eax
 849df0c:	83 c0 04             	add    $0x4,%eax
 849df0f:	8b 10                	mov    (%eax),%edx
 849df11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849df18:	00 
 849df19:	8b 45 0c             	mov    0xc(%ebp),%eax
 849df1c:	89 44 24 04          	mov    %eax,0x4(%esp)
 849df20:	8b 45 08             	mov    0x8(%ebp),%eax
 849df23:	89 04 24             	mov    %eax,(%esp)
 849df26:	ff d2                	call   *%edx
 849df28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849df2b:	eb 29                	jmp    849df56 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1c2>
 849df2d:	8b 45 08             	mov    0x8(%ebp),%eax
 849df30:	8b 00                	mov    (%eax),%eax
 849df32:	83 c0 04             	add    $0x4,%eax
 849df35:	8b 10                	mov    (%eax),%edx
 849df37:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 849df3e:	00 
 849df3f:	8b 45 0c             	mov    0xc(%ebp),%eax
 849df42:	89 44 24 04          	mov    %eax,0x4(%esp)
 849df46:	8b 45 08             	mov    0x8(%ebp),%eax
 849df49:	89 04 24             	mov    %eax,(%esp)
 849df4c:	ff d2                	call   *%edx
 849df4e:	eb 01                	jmp    849df51 <_ZN10expert_job10CEnchanter13_AgreeEnchantEP5CUser23ENUM_AGREE_ENCHANT_TYPE+0x1bd>
 849df50:	90                   	nop
 849df51:	b8 00 00 00 00       	mov    $0x0,%eax
 849df56:	83 c4 20             	add    $0x20,%esp
 849df59:	5b                   	pop    %ebx
 849df5a:	5e                   	pop    %esi
 849df5b:	5d                   	pop    %ebp
 849df5c:	c3                   	ret
 849df5d:	90                   	nop

```

```c
// expert_job::CEnchanter::_AgreeEnchant @ 0x849dd94

/* expert_job::CEnchanter::_AgreeEnchant(CUser*, ENUM_AGREE_ENCHANT_TYPE) */

undefined4 __thiscall
expert_job::CEnchanter::_AgreeEnchant(CEnchanter *this,CUser *param_1,int param_3)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  PacketGuard local_1c [12];
  undefined4 local_10;
  
  local_10 = 0;
  sVar3 = CUser::get_unique_id(param_1);
  sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
  if (sVar3 != sVar4) {
    return 3;
  }
  if (param_3 != 1) {
    if (param_3 == 2) {
      (**(code **)(*(int *)this + 4))(this,param_1,2);
    }
    else if (param_3 == 0) {
      cVar2 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(this + 0x18));
      if (cVar2 != '\0') {
        return 0x15;
      }
      ExpertJobMaterial::Reset((ExpertJobMaterial *)(this + 0x18));
      *(undefined4 *)(this + 0x40) = 0;
      if ((*(int *)(this + 0x28) == 0) ||
         (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x28)), iVar5 == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0849de74 to 0849dec6 has its CatchHandler @ 0849dec9 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xac);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,3);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        CUser::Send(*(CUser **)(this + 0x28),local_1c);
        PacketGuard::~PacketGuard(local_1c);
      }
    }
    return 0;
  }
  local_10 = _DoEnchant(this,1);
  (**(code **)(*(int *)this + 4))(this,param_1,0);
  return local_10;
}

```

---

## _DoEnchant

```asm
// === 0849cb2c expert_job::CEnchanter::_DoEnchant  [0x0849cb2c-0x849d343] ===
 849cb2c:	55                   	push   %ebp
 849cb2d:	89 e5                	mov    %esp,%ebp
 849cb2f:	56                   	push   %esi
 849cb30:	53                   	push   %ebx
 849cb31:	83 ec 60             	sub    $0x60,%esp
 849cb34:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb37:	8b 40 2c             	mov    0x2c(%eax),%eax
 849cb3a:	85 c0                	test   %eax,%eax
 849cb3c:	74 29                	je     849cb67 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x3b>
 849cb3e:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb41:	8b 40 2c             	mov    0x2c(%eax),%eax
 849cb44:	89 04 24             	mov    %eax,(%esp)
 849cb47:	e8 e6 38 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849cb4c:	85 c0                	test   %eax,%eax
 849cb4e:	74 17                	je     849cb67 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x3b>
 849cb50:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb53:	8b 50 28             	mov    0x28(%eax),%edx
 849cb56:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb59:	8b 40 2c             	mov    0x2c(%eax),%eax
 849cb5c:	39 c2                	cmp    %eax,%edx
 849cb5e:	74 07                	je     849cb67 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x3b>
 849cb60:	b8 01 00 00 00       	mov    $0x1,%eax
 849cb65:	eb 05                	jmp    849cb6c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x40>
 849cb67:	b8 00 00 00 00       	mov    $0x0,%eax
 849cb6c:	84 c0                	test   %al,%al
 849cb6e:	0f 84 92 00 00 00    	je     849cc06 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0xda>
 849cb74:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb77:	8b 40 38             	mov    0x38(%eax),%eax
 849cb7a:	85 c0                	test   %eax,%eax
 849cb7c:	0f 8e 84 00 00 00    	jle    849cc06 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0xda>
 849cb82:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb85:	8b 40 28             	mov    0x28(%eax),%eax
 849cb88:	85 c0                	test   %eax,%eax
 849cb8a:	74 19                	je     849cba5 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x79>
 849cb8c:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb8f:	8b 40 2c             	mov    0x2c(%eax),%eax
 849cb92:	89 04 24             	mov    %eax,(%esp)
 849cb95:	e8 98 38 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849cb9a:	85 c0                	test   %eax,%eax
 849cb9c:	74 07                	je     849cba5 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x79>
 849cb9e:	b8 01 00 00 00       	mov    $0x1,%eax
 849cba3:	eb 05                	jmp    849cbaa <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x7e>
 849cba5:	b8 00 00 00 00       	mov    $0x0,%eax
 849cbaa:	84 c0                	test   %al,%al
 849cbac:	74 29                	je     849cbd7 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0xab>
 849cbae:	8b 45 08             	mov    0x8(%ebp),%eax
 849cbb1:	8b 50 38             	mov    0x38(%eax),%edx
 849cbb4:	8b 45 08             	mov    0x8(%ebp),%eax
 849cbb7:	8b 40 28             	mov    0x28(%eax),%eax
 849cbba:	89 54 24 04          	mov    %edx,0x4(%esp)
 849cbbe:	89 04 24             	mov    %eax,(%esp)
 849cbc1:	e8 56 e3 1c 00       	call   866af1c <_ZN5CUser10CheckMoneyEi>
 849cbc6:	83 f0 01             	xor    $0x1,%eax
 849cbc9:	84 c0                	test   %al,%al
 849cbcb:	74 0a                	je     849cbd7 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0xab>
 849cbcd:	bb 11 00 00 00       	mov    $0x11,%ebx
 849cbd2:	e9 64 07 00 00       	jmp    849d33b <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x80f>
 849cbd7:	8b 45 08             	mov    0x8(%ebp),%eax
 849cbda:	8b 40 2c             	mov    0x2c(%eax),%eax
 849cbdd:	89 04 24             	mov    %eax,(%esp)
 849cbe0:	e8 99 d6 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849cbe5:	89 04 24             	mov    %eax,(%esp)
 849cbe8:	e8 e9 7b c9 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 849cbed:	8b 55 08             	mov    0x8(%ebp),%edx
 849cbf0:	8b 52 38             	mov    0x38(%edx),%edx
 849cbf3:	39 d0                	cmp    %edx,%eax
 849cbf5:	0f 9c c0             	setl   %al
 849cbf8:	84 c0                	test   %al,%al
 849cbfa:	74 0a                	je     849cc06 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0xda>
 849cbfc:	bb 11 00 00 00       	mov    $0x11,%ebx
 849cc01:	e9 35 07 00 00       	jmp    849d33b <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x80f>
 849cc06:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 849cc0d:	8b 45 08             	mov    0x8(%ebp),%eax
 849cc10:	89 04 24             	mov    %eax,(%esp)
 849cc13:	e8 9a fd ff ff       	call   849c9b2 <_ZN10expert_job10CEnchanter15IsRightMaterialEv>
 849cc18:	89 45 d8             	mov    %eax,-0x28(%ebp)
 849cc1b:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 849cc1f:	0f 95 c0             	setne  %al
 849cc22:	84 c0                	test   %al,%al
 849cc24:	74 08                	je     849cc2e <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x102>
 849cc26:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 849cc29:	e9 0d 07 00 00       	jmp    849d33b <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x80f>
 849cc2e:	8b 45 08             	mov    0x8(%ebp),%eax
 849cc31:	89 04 24             	mov    %eax,(%esp)
 849cc34:	e8 eb 26 00 00       	call   849f324 <_ZN10expert_job10CEnchanter25IsUseOtherUserMonsterCardEv>
 849cc39:	0f b6 c8             	movzbl %al,%ecx
 849cc3c:	8b 45 08             	mov    0x8(%ebp),%eax
 849cc3f:	8b 50 40             	mov    0x40(%eax),%edx
 849cc42:	8b 45 08             	mov    0x8(%ebp),%eax
 849cc45:	8b 40 28             	mov    0x28(%eax),%eax
 849cc48:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 849cc4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 849cc50:	89 04 24             	mov    %eax,(%esp)
 849cc53:	e8 c8 eb ff ff       	call   849b820 <_ZN10expert_job17IsExistRecipeItemEP5CUserP5CItemb>
 849cc58:	83 f0 01             	xor    $0x1,%eax
 849cc5b:	84 c0                	test   %al,%al
 849cc5d:	74 0a                	je     849cc69 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x13d>
 849cc5f:	bb 15 00 00 00       	mov    $0x15,%ebx
 849cc64:	e9 d2 06 00 00       	jmp    849d33b <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x80f>
 849cc69:	c6 45 df 00          	movb   $0x0,-0x21(%ebp)
 849cc6d:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 849cc74:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cc77:	89 04 24             	mov    %eax,(%esp)
 849cc7a:	e8 cd 10 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849cc7f:	8b 45 08             	mov    0x8(%ebp),%eax
 849cc82:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 849cc86:	0f b7 c0             	movzwl %ax,%eax
 849cc89:	89 04 24             	mov    %eax,(%esp)
 849cc8c:	e8 b4 ab c5 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 849cc91:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 849cc94:	8b 45 08             	mov    0x8(%ebp),%eax
 849cc97:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 849cc9b:	0f b7 d8             	movzwl %ax,%ebx
 849cc9e:	8b 45 08             	mov    0x8(%ebp),%eax
 849cca1:	8b 40 08             	mov    0x8(%eax),%eax
 849cca4:	89 04 24             	mov    %eax,(%esp)
 849cca7:	e8 e2 d5 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849ccac:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849ccb0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 849ccb3:	89 54 24 04          	mov    %edx,0x4(%esp)
 849ccb7:	89 04 24             	mov    %eax,(%esp)
 849ccba:	e8 ef f5 05 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 849ccbf:	89 45 e0             	mov    %eax,-0x20(%ebp)
 849ccc2:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 849ccc6:	75 0a                	jne    849ccd2 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x1a6>
 849ccc8:	bb 11 00 00 00       	mov    $0x11,%ebx
 849cccd:	e9 5e 06 00 00       	jmp    849d330 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x804>
 849ccd2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 849ccd5:	8b 50 02             	mov    0x2(%eax),%edx
 849ccd8:	a1 38 f7 41 09       	mov    0x941f738,%eax
 849ccdd:	89 54 24 08          	mov    %edx,0x8(%esp)
 849cce1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849cce8:	00 
 849cce9:	89 04 24             	mov    %eax,(%esp)
 849ccec:	e8 eb 35 dd ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 849ccf1:	84 c0                	test   %al,%al
 849ccf3:	74 0a                	je     849ccff <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x1d3>
 849ccf5:	bb 11 00 00 00       	mov    $0x11,%ebx
 849ccfa:	e9 31 06 00 00       	jmp    849d330 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x804>
 849ccff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 849cd02:	8b 50 02             	mov    0x2(%eax),%edx
 849cd05:	a1 38 f7 41 09       	mov    0x941f738,%eax
 849cd0a:	89 54 24 08          	mov    %edx,0x8(%esp)
 849cd0e:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 849cd15:	00 
 849cd16:	89 04 24             	mov    %eax,(%esp)
 849cd19:	e8 be 35 dd ff       	call   82702dc <_ZN20InstanceRentalSystem17CheckRentableItemEij>
 849cd1e:	84 c0                	test   %al,%al
 849cd20:	74 0a                	je     849cd2c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x200>
 849cd22:	bb 11 00 00 00       	mov    $0x11,%ebx
 849cd27:	e9 04 06 00 00       	jmp    849d330 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x804>
 849cd2c:	8b 45 08             	mov    0x8(%ebp),%eax
 849cd2f:	8b 40 10             	mov    0x10(%eax),%eax
 849cd32:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849cd35:	8b 45 e0             	mov    -0x20(%ebp),%eax
 849cd38:	8b 40 0d             	mov    0xd(%eax),%eax
 849cd3b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 849cd3e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849cd45:	8b 45 08             	mov    0x8(%ebp),%eax
 849cd48:	89 04 24             	mov    %eax,(%esp)
 849cd4b:	e8 76 fd ff ff       	call   849cac6 <_ZN10expert_job10CEnchanter12_DrawEnchantEv>
 849cd50:	84 c0                	test   %al,%al
 849cd52:	0f 84 e3 00 00 00    	je     849ce3b <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x30f>
 849cd58:	8b 45 08             	mov    0x8(%ebp),%eax
 849cd5b:	8b 40 3c             	mov    0x3c(%eax),%eax
 849cd5e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849cd61:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849cd65:	74 13                	je     849cd7a <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x24e>
 849cd67:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849cd6a:	89 04 24             	mov    %eax,(%esp)
 849cd6d:	e8 d6 3e c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849cd72:	89 c2                	mov    %eax,%edx
 849cd74:	8b 45 e0             	mov    -0x20(%ebp),%eax
 849cd77:	89 50 0d             	mov    %edx,0xd(%eax)
 849cd7a:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cd7d:	89 04 24             	mov    %eax,(%esp)
 849cd80:	e8 61 eb c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849cd85:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 849cd8c:	00 
 849cd8d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849cd94:	00 
 849cd95:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cd98:	89 04 24             	mov    %eax,(%esp)
 849cd9b:	e8 5c eb c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849cda0:	8b 45 08             	mov    0x8(%ebp),%eax
 849cda3:	0f b7 40 16          	movzwl 0x16(%eax),%eax
 849cda7:	0f b7 c0             	movzwl %ax,%eax
 849cdaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 849cdae:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cdb1:	89 04 24             	mov    %eax,(%esp)
 849cdb4:	e8 67 eb c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849cdb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849cdc0:	00 
 849cdc1:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cdc4:	89 04 24             	mov    %eax,(%esp)
 849cdc7:	e8 d8 d0 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849cdcc:	8b 45 08             	mov    0x8(%ebp),%eax
 849cdcf:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 849cdd3:	0f b7 f0             	movzwl %ax,%esi
 849cdd6:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 849cdd9:	8b 45 08             	mov    0x8(%ebp),%eax
 849cddc:	8b 40 2c             	mov    0x2c(%eax),%eax
 849cddf:	89 04 24             	mov    %eax,(%esp)
 849cde2:	e8 97 d4 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849cde7:	8d 55 bc             	lea    -0x44(%ebp),%edx
 849cdea:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849cdee:	89 74 24 08          	mov    %esi,0x8(%esp)
 849cdf2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849cdf6:	89 04 24             	mov    %eax,(%esp)
 849cdf9:	e8 be f8 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 849cdfe:	83 f0 01             	xor    $0x1,%eax
 849ce01:	84 c0                	test   %al,%al
 849ce03:	74 0a                	je     849ce0f <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x2e3>
 849ce05:	bb 00 00 00 00       	mov    $0x0,%ebx
 849ce0a:	e9 21 05 00 00       	jmp    849d330 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x804>
 849ce0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849ce16:	00 
 849ce17:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849ce1a:	89 04 24             	mov    %eax,(%esp)
 849ce1d:	e8 36 eb c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849ce22:	8b 45 08             	mov    0x8(%ebp),%eax
 849ce25:	8b 40 2c             	mov    0x2c(%eax),%eax
 849ce28:	8d 55 bc             	lea    -0x44(%ebp),%edx
 849ce2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 849ce2f:	89 04 24             	mov    %eax,(%esp)
 849ce32:	e8 83 b7 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849ce37:	c6 45 df 01          	movb   $0x1,-0x21(%ebp)
 849ce3b:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849ce3f:	74 44                	je     849ce85 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x359>
 849ce41:	8b 45 08             	mov    0x8(%ebp),%eax
 849ce44:	8b 40 28             	mov    0x28(%eax),%eax
 849ce47:	85 c0                	test   %eax,%eax
 849ce49:	74 3a                	je     849ce85 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x359>
 849ce4b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849ce4e:	89 04 24             	mov    %eax,(%esp)
 849ce51:	e8 f2 3d c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849ce56:	89 c6                	mov    %eax,%esi
 849ce58:	8b 45 08             	mov    0x8(%ebp),%eax
 849ce5b:	8b 40 28             	mov    0x28(%eax),%eax
 849ce5e:	89 04 24             	mov    %eax,(%esp)
 849ce61:	e8 2e 2a d9 ff       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 849ce66:	89 c3                	mov    %eax,%ebx
 849ce68:	e8 d3 2a 17 00       	call   860f940 <_Z29GetInstanceExpertJobStatisticv>
 849ce6d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849ce74:	00 
 849ce75:	89 74 24 08          	mov    %esi,0x8(%esp)
 849ce79:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ce7d:	89 04 24             	mov    %eax,(%esp)
 849ce80:	e8 4f 2b 17 00       	call   860f9d4 <_ZN19CExpertJobStatistic17increaseItemCountE20ENUM_EXPERT_JOB_TYPEmi>
 849ce85:	8b 45 08             	mov    0x8(%ebp),%eax
 849ce88:	8b 40 28             	mov    0x28(%eax),%eax
 849ce8b:	85 c0                	test   %eax,%eax
 849ce8d:	74 19                	je     849cea8 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x37c>
 849ce8f:	8b 45 08             	mov    0x8(%ebp),%eax
 849ce92:	8b 40 28             	mov    0x28(%eax),%eax
 849ce95:	89 04 24             	mov    %eax,(%esp)
 849ce98:	e8 95 35 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849ce9d:	85 c0                	test   %eax,%eax
 849ce9f:	74 07                	je     849cea8 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x37c>
 849cea1:	b8 01 00 00 00       	mov    $0x1,%eax
 849cea6:	eb 05                	jmp    849cead <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x381>
 849cea8:	b8 00 00 00 00       	mov    $0x0,%eax
 849cead:	84 c0                	test   %al,%al
 849ceaf:	0f 84 87 01 00 00    	je     849d03c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x510>
 849ceb5:	8b 45 08             	mov    0x8(%ebp),%eax
 849ceb8:	8b 40 38             	mov    0x38(%eax),%eax
 849cebb:	85 c0                	test   %eax,%eax
 849cebd:	7e 5e                	jle    849cf1d <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x3f1>
 849cebf:	8b 45 08             	mov    0x8(%ebp),%eax
 849cec2:	8b 58 38             	mov    0x38(%eax),%ebx
 849cec5:	8b 45 08             	mov    0x8(%ebp),%eax
 849cec8:	8b 40 28             	mov    0x28(%eax),%eax
 849cecb:	89 04 24             	mov    %eax,(%esp)
 849cece:	e8 bb d3 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849ced3:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 849ceda:	00 
 849cedb:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849cee2:	00 
 849cee3:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 849ceea:	00 
 849ceeb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849ceef:	89 04 24             	mov    %eax,(%esp)
 849cef2:	e8 a5 23 06 00       	call   84ff29c <_ZN10CInventory10gain_moneyEi15eMoneyAddReasonbi>
 849cef7:	8b 45 08             	mov    0x8(%ebp),%eax
 849cefa:	8b 40 28             	mov    0x28(%eax),%eax
 849cefd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849cf04:	00 
 849cf05:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849cf0c:	00 
 849cf0d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849cf14:	00 
 849cf15:	89 04 24             	mov    %eax,(%esp)
 849cf18:	e8 3d f7 1d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 849cf1d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cf20:	89 04 24             	mov    %eax,(%esp)
 849cf23:	e8 be e9 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849cf28:	c7 44 24 08 ac 00 00 	movl   $0xac,0x8(%esp)
 849cf2f:	00 
 849cf30:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849cf37:	00 
 849cf38:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cf3b:	89 04 24             	mov    %eax,(%esp)
 849cf3e:	e8 b9 e9 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849cf43:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849cf4a:	00 
 849cf4b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cf4e:	89 04 24             	mov    %eax,(%esp)
 849cf51:	e8 ca e9 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849cf56:	8b 45 0c             	mov    0xc(%ebp),%eax
 849cf59:	89 44 24 04          	mov    %eax,0x4(%esp)
 849cf5d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cf60:	89 04 24             	mov    %eax,(%esp)
 849cf63:	e8 b8 e9 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849cf68:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 849cf6c:	89 44 24 04          	mov    %eax,0x4(%esp)
 849cf70:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cf73:	89 04 24             	mov    %eax,(%esp)
 849cf76:	e8 a5 e9 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849cf7b:	8b 45 08             	mov    0x8(%ebp),%eax
 849cf7e:	8b 40 28             	mov    0x28(%eax),%eax
 849cf81:	89 04 24             	mov    %eax,(%esp)
 849cf84:	e8 9d 80 ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849cf89:	89 44 24 04          	mov    %eax,0x4(%esp)
 849cf8d:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cf90:	89 04 24             	mov    %eax,(%esp)
 849cf93:	e8 a4 e9 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849cf98:	8b 45 08             	mov    0x8(%ebp),%eax
 849cf9b:	8b 40 28             	mov    0x28(%eax),%eax
 849cf9e:	89 04 24             	mov    %eax,(%esp)
 849cfa1:	e8 d8 d2 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849cfa6:	89 04 24             	mov    %eax,(%esp)
 849cfa9:	e8 28 78 c9 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 849cfae:	89 44 24 04          	mov    %eax,0x4(%esp)
 849cfb2:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849cfb5:	89 04 24             	mov    %eax,(%esp)
 849cfb8:	e8 7f e9 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849cfbd:	8b 45 08             	mov    0x8(%ebp),%eax
 849cfc0:	89 04 24             	mov    %eax,(%esp)
 849cfc3:	e8 5c 23 00 00       	call   849f324 <_ZN10expert_job10CEnchanter25IsUseOtherUserMonsterCardEv>
 849cfc8:	0f b6 c8             	movzbl %al,%ecx
 849cfcb:	8b 45 08             	mov    0x8(%ebp),%eax
 849cfce:	8b 50 40             	mov    0x40(%eax),%edx
 849cfd1:	8b 45 08             	mov    0x8(%ebp),%eax
 849cfd4:	8b 40 28             	mov    0x28(%eax),%eax
 849cfd7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 849cfdb:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 849cfde:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 849cfe2:	89 54 24 04          	mov    %edx,0x4(%esp)
 849cfe6:	89 04 24             	mov    %eax,(%esp)
 849cfe9:	e8 0d ed ff ff       	call   849bcfb <_ZN10expert_job19UseMaterialOfRecipeEP5CUserP5CItemP11PacketGuardb>
 849cfee:	89 45 d8             	mov    %eax,-0x28(%ebp)
 849cff1:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 849cff5:	0f 95 c0             	setne  %al
 849cff8:	84 c0                	test   %al,%al
 849cffa:	74 18                	je     849d014 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x4e8>
 849cffc:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 849d000:	74 0a                	je     849d00c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x4e0>
 849d002:	8b 45 e0             	mov    -0x20(%ebp),%eax
 849d005:	c7 40 0d 00 00 00 00 	movl   $0x0,0xd(%eax)
 849d00c:	8b 5d d8             	mov    -0x28(%ebp),%ebx
 849d00f:	e9 1c 03 00 00       	jmp    849d330 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x804>
 849d014:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d01b:	00 
 849d01c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d01f:	89 04 24             	mov    %eax,(%esp)
 849d022:	e8 31 e9 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849d027:	8b 45 08             	mov    0x8(%ebp),%eax
 849d02a:	8b 40 28             	mov    0x28(%eax),%eax
 849d02d:	8d 55 bc             	lea    -0x44(%ebp),%edx
 849d030:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d034:	89 04 24             	mov    %eax,(%esp)
 849d037:	e8 7e b5 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849d03c:	8b 45 08             	mov    0x8(%ebp),%eax
 849d03f:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d042:	85 c0                	test   %eax,%eax
 849d044:	74 29                	je     849d06f <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x543>
 849d046:	8b 45 08             	mov    0x8(%ebp),%eax
 849d049:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d04c:	89 04 24             	mov    %eax,(%esp)
 849d04f:	e8 de 33 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849d054:	85 c0                	test   %eax,%eax
 849d056:	74 17                	je     849d06f <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x543>
 849d058:	8b 45 08             	mov    0x8(%ebp),%eax
 849d05b:	8b 50 28             	mov    0x28(%eax),%edx
 849d05e:	8b 45 08             	mov    0x8(%ebp),%eax
 849d061:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d064:	39 c2                	cmp    %eax,%edx
 849d066:	74 07                	je     849d06f <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x543>
 849d068:	b8 01 00 00 00       	mov    $0x1,%eax
 849d06d:	eb 05                	jmp    849d074 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x548>
 849d06f:	b8 00 00 00 00       	mov    $0x0,%eax
 849d074:	84 c0                	test   %al,%al
 849d076:	0f 84 38 02 00 00    	je     849d2b4 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x788>
 849d07c:	8b 45 08             	mov    0x8(%ebp),%eax
 849d07f:	8b 40 38             	mov    0x38(%eax),%eax
 849d082:	85 c0                	test   %eax,%eax
 849d084:	7e 56                	jle    849d0dc <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x5b0>
 849d086:	8b 45 08             	mov    0x8(%ebp),%eax
 849d089:	8b 58 38             	mov    0x38(%eax),%ebx
 849d08c:	8b 45 08             	mov    0x8(%ebp),%eax
 849d08f:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d092:	89 04 24             	mov    %eax,(%esp)
 849d095:	e8 f4 d1 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849d09a:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849d0a1:	00 
 849d0a2:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 849d0a9:	00 
 849d0aa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849d0ae:	89 04 24             	mov    %eax,(%esp)
 849d0b1:	e8 96 24 06 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 849d0b6:	8b 45 08             	mov    0x8(%ebp),%eax
 849d0b9:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d0bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 849d0c3:	00 
 849d0c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849d0cb:	00 
 849d0cc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d0d3:	00 
 849d0d4:	89 04 24             	mov    %eax,(%esp)
 849d0d7:	e8 7e f5 1d 00       	call   867c65a <_ZN5CUser18SendUpdateItemListENS_11eSendTargetE14ENUM_ITEMSPACEi>
 849d0dc:	8b 45 08             	mov    0x8(%ebp),%eax
 849d0df:	89 04 24             	mov    %eax,(%esp)
 849d0e2:	e8 3d 22 00 00       	call   849f324 <_ZN10expert_job10CEnchanter25IsUseOtherUserMonsterCardEv>
 849d0e7:	84 c0                	test   %al,%al
 849d0e9:	0f 84 51 01 00 00    	je     849d240 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x714>
 849d0ef:	8b 45 08             	mov    0x8(%ebp),%eax
 849d0f2:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 849d0f6:	0f b7 d8             	movzwl %ax,%ebx
 849d0f9:	8b 45 08             	mov    0x8(%ebp),%eax
 849d0fc:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d0ff:	89 04 24             	mov    %eax,(%esp)
 849d102:	e8 87 d1 c3 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 849d107:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 849d10e:	00 
 849d10f:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 849d116:	00 
 849d117:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 849d11e:	00 
 849d11f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849d123:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d12a:	00 
 849d12b:	89 04 24             	mov    %eax,(%esp)
 849d12e:	e8 d9 6e 06 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 849d133:	88 45 f7             	mov    %al,-0x9(%ebp)
 849d136:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 849d13a:	83 f0 01             	xor    $0x1,%eax
 849d13d:	84 c0                	test   %al,%al
 849d13f:	74 58                	je     849d199 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x66d>
 849d141:	8b 45 08             	mov    0x8(%ebp),%eax
 849d144:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 849d148:	0f b7 f0             	movzwl %ax,%esi
 849d14b:	8b 45 08             	mov    0x8(%ebp),%eax
 849d14e:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d151:	89 04 24             	mov    %eax,(%esp)
 849d154:	e8 f5 ea c2 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 849d159:	89 c3                	mov    %eax,%ebx
 849d15b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 849d162:	00 
 849d163:	c7 44 24 08 d9 03 00 	movl   $0x3d9,0x8(%esp)
 849d16a:	00 
 849d16b:	c7 44 24 04 a0 c9 c7 	movl   $0x8c7c9a0,0x4(%esp)
 849d172:	08 
 849d173:	8d 45 c8             	lea    -0x38(%ebp),%eax
 849d176:	89 04 24             	mov    %eax,(%esp)
 849d179:	e8 9a 25 0b 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 849d17e:	89 74 24 0c          	mov    %esi,0xc(%esp)
 849d182:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849d186:	c7 44 24 04 cc ba c7 	movl   $0x8c7bacc,0x4(%esp)
 849d18d:	08 
 849d18e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 849d191:	89 04 24             	mov    %eax,(%esp)
 849d194:	e8 ef 25 0b 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 849d199:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d19c:	89 04 24             	mov    %eax,(%esp)
 849d19f:	e8 42 e7 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849d1a4:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 849d1ab:	00 
 849d1ac:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849d1b3:	00 
 849d1b4:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d1b7:	89 04 24             	mov    %eax,(%esp)
 849d1ba:	e8 3d e7 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849d1bf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849d1c6:	00 
 849d1c7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d1ca:	89 04 24             	mov    %eax,(%esp)
 849d1cd:	e8 4e e7 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849d1d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d1d9:	00 
 849d1da:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d1dd:	89 04 24             	mov    %eax,(%esp)
 849d1e0:	e8 bf cc c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849d1e5:	8b 45 08             	mov    0x8(%ebp),%eax
 849d1e8:	0f b7 40 24          	movzwl 0x24(%eax),%eax
 849d1ec:	0f b7 d8             	movzwl %ax,%ebx
 849d1ef:	8b 45 08             	mov    0x8(%ebp),%eax
 849d1f2:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d1f5:	89 04 24             	mov    %eax,(%esp)
 849d1f8:	e8 81 d0 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849d1fd:	8d 55 bc             	lea    -0x44(%ebp),%edx
 849d200:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849d204:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 849d208:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d20f:	00 
 849d210:	89 04 24             	mov    %eax,(%esp)
 849d213:	e8 a4 f4 05 00       	call   84fc6bc <_ZNK10CInventory14MakeItemPacketE10INVEN_TYPEiR11PacketGuard>
 849d218:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d21f:	00 
 849d220:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d223:	89 04 24             	mov    %eax,(%esp)
 849d226:	e8 2d e7 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849d22b:	8b 45 08             	mov    0x8(%ebp),%eax
 849d22e:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d231:	8d 55 bc             	lea    -0x44(%ebp),%edx
 849d234:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d238:	89 04 24             	mov    %eax,(%esp)
 849d23b:	e8 7a b3 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849d240:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d243:	89 04 24             	mov    %eax,(%esp)
 849d246:	e8 9b e6 c2 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 849d24b:	c7 44 24 08 ab 00 00 	movl   $0xab,0x8(%esp)
 849d252:	00 
 849d253:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d25a:	00 
 849d25b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d25e:	89 04 24             	mov    %eax,(%esp)
 849d261:	e8 96 e6 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849d266:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d26d:	00 
 849d26e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d271:	89 04 24             	mov    %eax,(%esp)
 849d274:	e8 a7 e6 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849d279:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 849d27d:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d281:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d284:	89 04 24             	mov    %eax,(%esp)
 849d287:	e8 94 e6 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849d28c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d293:	00 
 849d294:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d297:	89 04 24             	mov    %eax,(%esp)
 849d29a:	e8 b9 e6 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849d29f:	8b 45 08             	mov    0x8(%ebp),%eax
 849d2a2:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d2a5:	8d 55 bc             	lea    -0x44(%ebp),%edx
 849d2a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d2ac:	89 04 24             	mov    %eax,(%esp)
 849d2af:	e8 06 b3 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849d2b4:	8b 45 08             	mov    0x8(%ebp),%eax
 849d2b7:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d2ba:	89 04 24             	mov    %eax,(%esp)
 849d2bd:	e8 66 3d c6 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 849d2c2:	89 c3                	mov    %eax,%ebx
 849d2c4:	8b 45 08             	mov    0x8(%ebp),%eax
 849d2c7:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d2ca:	89 04 24             	mov    %eax,(%esp)
 849d2cd:	e8 a0 3d c6 ff       	call   8101072 <_ZNK5CUser12get_acc_nameEv>
 849d2d2:	0f b6 4d df          	movzbl -0x21(%ebp),%ecx
 849d2d6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 849d2d9:	8b 52 0d             	mov    0xd(%edx),%edx
 849d2dc:	8b 75 08             	mov    0x8(%ebp),%esi
 849d2df:	8b 76 2c             	mov    0x2c(%esi),%esi
 849d2e2:	81 c6 00 97 07 00    	add    $0x79700,%esi
 849d2e8:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 849d2ec:	89 44 24 14          	mov    %eax,0x14(%esp)
 849d2f0:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 849d2f4:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849d2f8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849d2fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 849d2ff:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849d302:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d306:	89 34 24             	mov    %esi,(%esp)
 849d309:	e8 66 7a 1e 00       	call   8684d74 <_ZN15cUserHistoryLog11EnchantItemEiiibPKcS1_>
 849d30e:	bb 00 00 00 00       	mov    $0x0,%ebx
 849d313:	eb 1b                	jmp    849d330 <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE+0x804>
 849d315:	89 d3                	mov    %edx,%ebx
 849d317:	89 c6                	mov    %eax,%esi
 849d319:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d31c:	89 04 24             	mov    %eax,(%esp)
 849d31f:	e8 5c 0b 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849d324:	89 f0                	mov    %esi,%eax
 849d326:	89 da                	mov    %ebx,%edx
 849d328:	89 04 24             	mov    %eax,(%esp)
 849d32b:	e8 20 64 64 00       	call   8ae3750 <_Unwind_Resume>
 849d330:	8d 45 bc             	lea    -0x44(%ebp),%eax
 849d333:	89 04 24             	mov    %eax,(%esp)
 849d336:	e8 45 0b 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849d33b:	89 d8                	mov    %ebx,%eax
 849d33d:	83 c4 60             	add    $0x60,%esp
 849d340:	5b                   	pop    %ebx
 849d341:	5e                   	pop    %esi
 849d342:	5d                   	pop    %ebp
 849d343:	c3                   	ret

```

```c
// expert_job::CEnchanter::_DoEnchant @ 0x849cb2c

/* expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE) */

int __thiscall expert_job::CEnchanter::_DoEnchant(CEnchanter *this,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  CInventory *pCVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  CExpertJobStatistic *pCVar9;
  char *pcVar10;
  char *pcVar11;
  PacketGuard local_48 [12];
  cMyTrace local_3c [16];
  int local_2c;
  bool local_25;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  CItem *local_14;
  char local_d;
  
  if (((*(int *)(this + 0x2c) == 0) ||
      (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)) ||
     (*(int *)(this + 0x28) == *(int *)(this + 0x2c))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((bVar4) && (0 < *(int *)(this + 0x38))) {
    if ((*(int *)(this + 0x28) == 0) ||
       (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if ((bVar4) &&
       (cVar3 = CUser::CheckMoney(*(CUser **)(this + 0x28),*(int *)(this + 0x38)), cVar3 != '\x01'))
    {
      return 0x11;
    }
    pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
    iVar5 = CInventory::get_money(pCVar6);
    if (iVar5 < *(int *)(this + 0x38)) {
      return 0x11;
    }
  }
  local_2c = 0;
  local_2c = IsRightMaterial(this);
  if (local_2c != 0) {
    return local_2c;
  }
  bVar4 = (bool)IsUseOtherUserMonsterCard(this);
  cVar3 = IsExistRecipeItem(*(CUser **)(this + 0x28),*(CItem **)(this + 0x40),bVar4);
  if (cVar3 != '\x01') {
    return 0x15;
  }
  local_25 = false;
  local_24 = 0;
  PacketGuard::PacketGuard(local_48);
  local_20 = GetInvenTypeFromItemSpace(*(undefined2 *)(this + 0x16));
  uVar1 = *(ushort *)(this + 0x14);
  pCVar6 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 8));
                    /* try { // try from 0849ccba to 0849d30d has its CatchHandler @ 0849d315 */
  local_24 = CInventory::GetInvenRef(pCVar6,local_20,(uint)uVar1);
  if (local_24 == 0) {
    iVar5 = 0x11;
  }
  else {
    cVar3 = InstanceRentalSystem::CheckRentableItem
                      (GlobalData::s_rentalSystem,1,*(uint *)(local_24 + 2));
    if (cVar3 == '\0') {
      cVar3 = InstanceRentalSystem::CheckRentableItem
                        (GlobalData::s_rentalSystem,2,*(uint *)(local_24 + 2));
      if (cVar3 == '\0') {
        local_1c = *(int *)(this + 0x10);
        local_18 = *(int *)(local_24 + 0xd);
        local_14 = (CItem *)0x0;
        cVar3 = _DrawEnchant(this);
        if (cVar3 != '\0') {
          local_14 = *(CItem **)(this + 0x3c);
          if (local_14 != (CItem *)0x0) {
            uVar7 = CItem::get_index(local_14);
            *(undefined4 *)(local_24 + 0xd) = uVar7;
          }
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_48,(uint)*(ushort *)(this + 0x16));
          InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,1);
          iVar5 = local_20;
          uVar2 = *(undefined2 *)(this + 0x14);
          pCVar6 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
          cVar3 = CInventory::MakeItemPacket(pCVar6,iVar5,uVar2,local_48);
          if (cVar3 != '\x01') {
            iVar5 = 0;
            goto LAB_0849d330;
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(*(CUser **)(this + 0x2c),local_48);
          local_25 = true;
        }
        if ((local_14 != (CItem *)0x0) && (*(int *)(this + 0x28) != 0)) {
          uVar7 = CItem::get_index(local_14);
          uVar8 = CUserCharacInfo::GetCurCharacExpertJobType(*(CUserCharacInfo **)(this + 0x28));
          pCVar9 = (CExpertJobStatistic *)GetInstanceExpertJobStatistic();
          CExpertJobStatistic::increaseItemCount(pCVar9,uVar8,uVar7,1);
        }
        if ((*(int *)(this + 0x28) == 0) ||
           (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x28)), iVar5 == 0))
        {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (0 < *(int *)(this + 0x38)) {
            uVar7 = *(undefined4 *)(this + 0x38);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x28));
            CInventory::gain_money(pCVar6,uVar7,0x10,1,0);
            CUser::SendUpdateItemList(*(CUser **)(this + 0x28),1,0,0);
          }
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0xac);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,param_2);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)local_25);
          iVar5 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)(this + 0x28));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar5);
          pCVar6 = (CInventory *)
                   CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x28));
          iVar5 = CInventory::get_money(pCVar6);
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_48,iVar5);
          bVar4 = (bool)IsUseOtherUserMonsterCard(this);
          iVar5 = UseMaterialOfRecipe(*(CUser **)(this + 0x28),*(CItem **)(this + 0x40),local_48,
                                      bVar4);
          local_2c = iVar5;
          if (iVar5 != 0) {
            if (local_24 != 0) {
              *(undefined4 *)(local_24 + 0xd) = 0;
            }
            goto LAB_0849d330;
          }
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(*(CUser **)(this + 0x28),local_48);
        }
        if (((*(int *)(this + 0x2c) == 0) ||
            (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)
            ) || (*(int *)(this + 0x28) == *(int *)(this + 0x2c))) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          if (0 < *(int *)(this + 0x38)) {
            uVar7 = *(undefined4 *)(this + 0x38);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
            CInventory::use_money(pCVar6,uVar7,0x17,1);
            CUser::SendUpdateItemList(*(CUser **)(this + 0x2c),1,0,0);
          }
          cVar3 = IsUseOtherUserMonsterCard(this);
          if (cVar3 != '\0') {
            uVar2 = *(undefined2 *)(this + 0x24);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)(this + 0x2c));
            local_d = CInventory::delete_item(pCVar6,1,uVar2,1,8,1);
            if (local_d != '\x01') {
              uVar1 = *(ushort *)(this + 0x24);
              uVar7 = CUserCharacInfo::getCurCharacNo(*(CUserCharacInfo **)(this + 0x2c));
              cMyTrace::cMyTrace(local_3c,
                                 "int expert_job::CEnchanter::_DoEnchant(ENUM_TRY_ENCHANT_TYPE)",
                                 0x3d9,5);
              cMyTrace::operator()
                        (local_3c,
                         "CUser::compound_item, getCurCharacInvenW()->delete_item failed , %d %d",
                         uVar7,(uint)uVar1);
            }
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,0,0xe);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,0);
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_48,1);
            uVar2 = *(undefined2 *)(this + 0x24);
            pCVar6 = (CInventory *)
                     CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0x2c));
            CInventory::MakeItemPacket(pCVar6,1,uVar2,local_48);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
            CUser::Send(*(CUser **)(this + 0x2c),local_48);
          }
          InterfacePacketBuf::clear((InterfacePacketBuf *)local_48);
          InterfacePacketBuf::put_header((InterfacePacketBuf *)local_48,1,0xab);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,1);
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_48,(uint)local_25);
          InterfacePacketBuf::finalize((InterfacePacketBuf *)local_48,true);
          CUser::Send(*(CUser **)(this + 0x2c),local_48);
        }
        pcVar10 = (char *)CUserCharacInfo::getCurCharacName(*(CUserCharacInfo **)(this + 0x2c));
        pcVar11 = (char *)CUser::get_acc_name(*(CUser **)(this + 0x2c));
        cUserHistoryLog::EnchantItem
                  ((cUserHistoryLog *)(*(int *)(this + 0x2c) + 0x79700),local_1c,local_18,
                   *(int *)(local_24 + 0xd),local_25,pcVar11,pcVar10);
        iVar5 = 0;
      }
      else {
        iVar5 = 0x11;
      }
    }
    else {
      iVar5 = 0x11;
    }
  }
LAB_0849d330:
  PacketGuard::~PacketGuard(local_48);
  return iVar5;
}

```

---

## _DrawEnchant

```asm
// === 0849cac6 expert_job::CEnchanter::_DrawEnchant  [0x0849cac6-0x849cb2b] ===
 849cac6:	55                   	push   %ebp
 849cac7:	89 e5                	mov    %esp,%ebp
 849cac9:	83 ec 28             	sub    $0x28,%esp
 849cacc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849cad3:	8b 45 08             	mov    0x8(%ebp),%eax
 849cad6:	8b 40 40             	mov    0x40(%eax),%eax
 849cad9:	89 c2                	mov    %eax,%edx
 849cadb:	8b 45 08             	mov    0x8(%ebp),%eax
 849cade:	8b 40 28             	mov    0x28(%eax),%eax
 849cae1:	8d 4d f4             	lea    -0xc(%ebp),%ecx
 849cae4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 849cae8:	89 54 24 04          	mov    %edx,0x4(%esp)
 849caec:	89 04 24             	mov    %eax,(%esp)
 849caef:	e8 6e e9 ff ff       	call   849b462 <_ZN10expert_job10CExpertJob9IsSuccessEP5CUserPK14CStackableItemRi>
 849caf4:	84 c0                	test   %al,%al
 849caf6:	74 2d                	je     849cb25 <_ZN10expert_job10CEnchanter12_DrawEnchantEv+0x5f>
 849caf8:	8b 45 08             	mov    0x8(%ebp),%eax
 849cafb:	8b 40 28             	mov    0x28(%eax),%eax
 849cafe:	89 04 24             	mov    %eax,(%esp)
 849cb01:	e8 20 85 ed ff       	call   8375026 <_ZNK15CUserCharacInfo24GetCurCharacExpertJobExpEv>
 849cb06:	8b 55 f4             	mov    -0xc(%ebp),%edx
 849cb09:	8d 14 10             	lea    (%eax,%edx,1),%edx
 849cb0c:	8b 45 08             	mov    0x8(%ebp),%eax
 849cb0f:	8b 40 28             	mov    0x28(%eax),%eax
 849cb12:	89 54 24 04          	mov    %edx,0x4(%esp)
 849cb16:	89 04 24             	mov    %eax,(%esp)
 849cb19:	e8 22 e3 ff ff       	call   849ae40 <_ZN10expert_job10CExpertJob20IncreaseExpertJobExpEP5CUseri>
 849cb1e:	b8 01 00 00 00       	mov    $0x1,%eax
 849cb23:	eb 05                	jmp    849cb2a <_ZN10expert_job10CEnchanter12_DrawEnchantEv+0x64>
 849cb25:	b8 00 00 00 00       	mov    $0x0,%eax
 849cb2a:	c9                   	leave
 849cb2b:	c3                   	ret

```

```c
// expert_job::CEnchanter::_DrawEnchant @ 0x849cac6

/* expert_job::CEnchanter::_DrawEnchant() */

bool __thiscall expert_job::CEnchanter::_DrawEnchant(CEnchanter *this)

{
  char cVar1;
  int iVar2;
  int local_10 [3];
  
  local_10[0] = 0;
  cVar1 = CExpertJob::IsSuccess(*(CUser **)(this + 0x28),*(CStackableItem **)(this + 0x40),local_10)
  ;
  if (cVar1 != '\0') {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobExp(*(CUserCharacInfo **)(this + 0x28));
    CExpertJob::IncreaseExpertJobExp(*(CUser **)(this + 0x28),iVar2 + local_10[0]);
  }
  return cVar1 != '\0';
}

```

---

## _PutItemForEnchant

```asm
// === 0849d344 expert_job::CEnchanter::_PutItemForEnchant  [0x0849d344-0x849d767] ===
 849d344:	55                   	push   %ebp
 849d345:	89 e5                	mov    %esp,%ebp
 849d347:	56                   	push   %esi
 849d348:	53                   	push   %ebx
 849d349:	83 ec 30             	sub    $0x30,%esp
 849d34c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d34f:	89 04 24             	mov    %eax,(%esp)
 849d352:	e8 db 30 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849d357:	85 c0                	test   %eax,%eax
 849d359:	0f 94 c0             	sete   %al
 849d35c:	84 c0                	test   %al,%al
 849d35e:	74 0a                	je     849d36a <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x26>
 849d360:	bb 03 00 00 00       	mov    $0x3,%ebx
 849d365:	e9 f5 03 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d36a:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d36d:	89 04 24             	mov    %eax,(%esp)
 849d370:	e8 07 d0 c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849d375:	89 c6                	mov    %eax,%esi
 849d377:	8b 45 08             	mov    0x8(%ebp),%eax
 849d37a:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d37d:	89 04 24             	mov    %eax,(%esp)
 849d380:	e8 f7 cf c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849d385:	66 39 c6             	cmp    %ax,%si
 849d388:	0f 95 c0             	setne  %al
 849d38b:	84 c0                	test   %al,%al
 849d38d:	74 61                	je     849d3f0 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0xac>
 849d38f:	83 7d 10 02          	cmpl   $0x2,0x10(%ebp)
 849d393:	75 19                	jne    849d3ae <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x6a>
 849d395:	8b 45 08             	mov    0x8(%ebp),%eax
 849d398:	89 04 24             	mov    %eax,(%esp)
 849d39b:	e8 84 1f 00 00       	call   849f324 <_ZN10expert_job10CEnchanter25IsUseOtherUserMonsterCardEv>
 849d3a0:	83 f0 01             	xor    $0x1,%eax
 849d3a3:	84 c0                	test   %al,%al
 849d3a5:	74 07                	je     849d3ae <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x6a>
 849d3a7:	b8 01 00 00 00       	mov    $0x1,%eax
 849d3ac:	eb 05                	jmp    849d3b3 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x6f>
 849d3ae:	b8 00 00 00 00       	mov    $0x0,%eax
 849d3b3:	84 c0                	test   %al,%al
 849d3b5:	74 2f                	je     849d3e6 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0xa2>
 849d3b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d3ba:	89 04 24             	mov    %eax,(%esp)
 849d3bd:	e8 ba cf c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849d3c2:	89 c6                	mov    %eax,%esi
 849d3c4:	8b 45 08             	mov    0x8(%ebp),%eax
 849d3c7:	8b 40 28             	mov    0x28(%eax),%eax
 849d3ca:	89 04 24             	mov    %eax,(%esp)
 849d3cd:	e8 aa cf c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849d3d2:	66 39 c6             	cmp    %ax,%si
 849d3d5:	0f 95 c0             	setne  %al
 849d3d8:	84 c0                	test   %al,%al
 849d3da:	74 14                	je     849d3f0 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0xac>
 849d3dc:	bb 03 00 00 00       	mov    $0x3,%ebx
 849d3e1:	e9 79 03 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d3e6:	bb 03 00 00 00       	mov    $0x3,%ebx
 849d3eb:	e9 6f 03 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d3f0:	8b 45 10             	mov    0x10(%ebp),%eax
 849d3f3:	83 f8 01             	cmp    $0x1,%eax
 849d3f6:	0f 84 90 00 00 00    	je     849d48c <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x148>
 849d3fc:	83 f8 02             	cmp    $0x2,%eax
 849d3ff:	0f 84 2b 01 00 00    	je     849d530 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x1ec>
 849d405:	85 c0                	test   %eax,%eax
 849d407:	0f 85 c4 01 00 00    	jne    849d5d1 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x28d>
 849d40d:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 849d411:	79 0a                	jns    849d41d <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0xd9>
 849d413:	bb 5f 00 00 00       	mov    $0x5f,%ebx
 849d418:	e9 42 03 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d41d:	8b 45 08             	mov    0x8(%ebp),%eax
 849d420:	8b 40 38             	mov    0x38(%eax),%eax
 849d423:	85 c0                	test   %eax,%eax
 849d425:	7e 0a                	jle    849d431 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0xed>
 849d427:	bb 14 00 00 00       	mov    $0x14,%ebx
 849d42c:	e9 2e 03 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d431:	8b 45 08             	mov    0x8(%ebp),%eax
 849d434:	8b 40 28             	mov    0x28(%eax),%eax
 849d437:	8b 55 18             	mov    0x18(%ebp),%edx
 849d43a:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d43e:	89 04 24             	mov    %eax,(%esp)
 849d441:	e8 d6 da 1c 00       	call   866af1c <_ZN5CUser10CheckMoneyEi>
 849d446:	83 f0 01             	xor    $0x1,%eax
 849d449:	84 c0                	test   %al,%al
 849d44b:	74 0a                	je     849d457 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x113>
 849d44d:	bb 5f 00 00 00       	mov    $0x5f,%ebx
 849d452:	e9 08 03 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d457:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d45a:	89 04 24             	mov    %eax,(%esp)
 849d45d:	e8 1c ce c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849d462:	89 04 24             	mov    %eax,(%esp)
 849d465:	e8 6c 73 c9 ff       	call   81347d6 <_ZNK10CInventory9get_moneyEv>
 849d46a:	3b 45 18             	cmp    0x18(%ebp),%eax
 849d46d:	0f 9c c0             	setl   %al
 849d470:	84 c0                	test   %al,%al
 849d472:	74 0a                	je     849d47e <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x13a>
 849d474:	bb 16 00 00 00       	mov    $0x16,%ebx
 849d479:	e9 e1 02 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d47e:	8b 45 08             	mov    0x8(%ebp),%eax
 849d481:	8b 55 18             	mov    0x18(%ebp),%edx
 849d484:	89 50 38             	mov    %edx,0x38(%eax)
 849d487:	e9 45 01 00 00       	jmp    849d5d1 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x28d>
 849d48c:	8b 45 08             	mov    0x8(%ebp),%eax
 849d48f:	83 c0 08             	add    $0x8,%eax
 849d492:	89 04 24             	mov    %eax,(%esp)
 849d495:	e8 ec 1d 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849d49a:	83 f0 01             	xor    $0x1,%eax
 849d49d:	84 c0                	test   %al,%al
 849d49f:	74 0a                	je     849d4ab <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x167>
 849d4a1:	bb 14 00 00 00       	mov    $0x14,%ebx
 849d4a6:	e9 b4 02 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d4ab:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 849d4b2:	8b 45 14             	mov    0x14(%ebp),%eax
 849d4b5:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 849d4b9:	0f b7 d0             	movzwl %ax,%edx
 849d4bc:	8b 45 14             	mov    0x14(%ebp),%eax
 849d4bf:	0f b6 00             	movzbl (%eax),%eax
 849d4c2:	0f b6 c0             	movzbl %al,%eax
 849d4c5:	8b 4d 08             	mov    0x8(%ebp),%ecx
 849d4c8:	83 c1 08             	add    $0x8,%ecx
 849d4cb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849d4cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 849d4d3:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d4d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d4da:	89 0c 24             	mov    %ecx,(%esp)
 849d4dd:	e8 26 ea ff ff       	call   849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>
 849d4e2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849d4e5:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849d4e9:	0f 95 c0             	setne  %al
 849d4ec:	84 c0                	test   %al,%al
 849d4ee:	74 08                	je     849d4f8 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x1b4>
 849d4f0:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 849d4f3:	e9 67 02 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d4f8:	8b 45 08             	mov    0x8(%ebp),%eax
 849d4fb:	83 c0 08             	add    $0x8,%eax
 849d4fe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849d505:	00 
 849d506:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849d50d:	00 
 849d50e:	89 04 24             	mov    %eax,(%esp)
 849d511:	e8 ba ea ff ff       	call   849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>
 849d516:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849d519:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849d51d:	0f 95 c0             	setne  %al
 849d520:	84 c0                	test   %al,%al
 849d522:	0f 84 a8 00 00 00    	je     849d5d0 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x28c>
 849d528:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 849d52b:	e9 2f 02 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d530:	8b 45 08             	mov    0x8(%ebp),%eax
 849d533:	83 c0 18             	add    $0x18,%eax
 849d536:	89 04 24             	mov    %eax,(%esp)
 849d539:	e8 48 1d 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849d53e:	83 f0 01             	xor    $0x1,%eax
 849d541:	84 c0                	test   %al,%al
 849d543:	74 0a                	je     849d54f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x20b>
 849d545:	bb 14 00 00 00       	mov    $0x14,%ebx
 849d54a:	e9 10 02 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d54f:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849d556:	8b 45 14             	mov    0x14(%ebp),%eax
 849d559:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 849d55d:	0f b7 d0             	movzwl %ax,%edx
 849d560:	8b 45 14             	mov    0x14(%ebp),%eax
 849d563:	0f b6 00             	movzbl (%eax),%eax
 849d566:	0f b6 c0             	movzbl %al,%eax
 849d569:	8b 4d 08             	mov    0x8(%ebp),%ecx
 849d56c:	83 c1 18             	add    $0x18,%ecx
 849d56f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849d573:	89 44 24 08          	mov    %eax,0x8(%esp)
 849d577:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d57a:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d57e:	89 0c 24             	mov    %ecx,(%esp)
 849d581:	e8 82 e9 ff ff       	call   849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>
 849d586:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849d589:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849d58d:	0f 95 c0             	setne  %al
 849d590:	84 c0                	test   %al,%al
 849d592:	74 08                	je     849d59c <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x258>
 849d594:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 849d597:	e9 c3 01 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d59c:	8b 45 08             	mov    0x8(%ebp),%eax
 849d59f:	83 c0 18             	add    $0x18,%eax
 849d5a2:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 849d5a9:	00 
 849d5aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d5b1:	00 
 849d5b2:	89 04 24             	mov    %eax,(%esp)
 849d5b5:	e8 16 ea ff ff       	call   849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>
 849d5ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849d5bd:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849d5c1:	0f 95 c0             	setne  %al
 849d5c4:	84 c0                	test   %al,%al
 849d5c6:	74 09                	je     849d5d1 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x28d>
 849d5c8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 849d5cb:	e9 8f 01 00 00       	jmp    849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d5d0:	90                   	nop
 849d5d1:	8b 45 08             	mov    0x8(%ebp),%eax
 849d5d4:	8b 40 28             	mov    0x28(%eax),%eax
 849d5d7:	85 c0                	test   %eax,%eax
 849d5d9:	74 19                	je     849d5f4 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x2b0>
 849d5db:	8b 45 08             	mov    0x8(%ebp),%eax
 849d5de:	8b 40 28             	mov    0x28(%eax),%eax
 849d5e1:	89 04 24             	mov    %eax,(%esp)
 849d5e4:	e8 49 2e c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849d5e9:	85 c0                	test   %eax,%eax
 849d5eb:	74 07                	je     849d5f4 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x2b0>
 849d5ed:	b8 01 00 00 00       	mov    $0x1,%eax
 849d5f2:	eb 05                	jmp    849d5f9 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x2b5>
 849d5f4:	b8 00 00 00 00       	mov    $0x0,%eax
 849d5f9:	84 c0                	test   %al,%al
 849d5fb:	0f 84 59 01 00 00    	je     849d75a <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x416>
 849d601:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d604:	89 04 24             	mov    %eax,(%esp)
 849d607:	e8 40 07 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849d60c:	c7 44 24 08 9d 00 00 	movl   $0x9d,0x8(%esp)
 849d613:	00 
 849d614:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849d61b:	00 
 849d61c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d61f:	89 04 24             	mov    %eax,(%esp)
 849d622:	e8 d5 e2 c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849d627:	8b 45 10             	mov    0x10(%ebp),%eax
 849d62a:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d62e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d631:	89 04 24             	mov    %eax,(%esp)
 849d634:	e8 e7 e2 c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849d639:	8b 45 10             	mov    0x10(%ebp),%eax
 849d63c:	83 f8 01             	cmp    $0x1,%eax
 849d63f:	74 20                	je     849d661 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x31d>
 849d641:	83 f8 02             	cmp    $0x2,%eax
 849d644:	74 32                	je     849d678 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x334>
 849d646:	85 c0                	test   %eax,%eax
 849d648:	75 43                	jne    849d68d <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x349>
 849d64a:	8b 45 08             	mov    0x8(%ebp),%eax
 849d64d:	8b 40 38             	mov    0x38(%eax),%eax
 849d650:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d654:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d657:	89 04 24             	mov    %eax,(%esp)
 849d65a:	e8 dd e2 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849d65f:	eb 2c                	jmp    849d68d <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x349>
 849d661:	8b 45 08             	mov    0x8(%ebp),%eax
 849d664:	8b 40 10             	mov    0x10(%eax),%eax
 849d667:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d66b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d66e:	89 04 24             	mov    %eax,(%esp)
 849d671:	e8 c6 e2 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849d676:	eb 15                	jmp    849d68d <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x349>
 849d678:	8b 45 08             	mov    0x8(%ebp),%eax
 849d67b:	8b 40 20             	mov    0x20(%eax),%eax
 849d67e:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d682:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d685:	89 04 24             	mov    %eax,(%esp)
 849d688:	e8 af e2 c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849d68d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d694:	00 
 849d695:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d698:	89 04 24             	mov    %eax,(%esp)
 849d69b:	e8 b8 e2 c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849d6a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d6a3:	89 04 24             	mov    %eax,(%esp)
 849d6a6:	e8 d1 cc c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849d6ab:	89 c6                	mov    %eax,%esi
 849d6ad:	8b 45 08             	mov    0x8(%ebp),%eax
 849d6b0:	8b 40 28             	mov    0x28(%eax),%eax
 849d6b3:	89 04 24             	mov    %eax,(%esp)
 849d6b6:	e8 c1 cc c3 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 849d6bb:	66 39 c6             	cmp    %ax,%si
 849d6be:	0f 94 c0             	sete   %al
 849d6c1:	84 c0                	test   %al,%al
 849d6c3:	74 4f                	je     849d714 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x3d0>
 849d6c5:	8b 45 08             	mov    0x8(%ebp),%eax
 849d6c8:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d6cb:	85 c0                	test   %eax,%eax
 849d6cd:	74 19                	je     849d6e8 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x3a4>
 849d6cf:	8b 45 08             	mov    0x8(%ebp),%eax
 849d6d2:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d6d5:	89 04 24             	mov    %eax,(%esp)
 849d6d8:	e8 55 2d c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849d6dd:	85 c0                	test   %eax,%eax
 849d6df:	74 07                	je     849d6e8 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x3a4>
 849d6e1:	b8 01 00 00 00       	mov    $0x1,%eax
 849d6e6:	eb 05                	jmp    849d6ed <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x3a9>
 849d6e8:	b8 00 00 00 00       	mov    $0x0,%eax
 849d6ed:	84 c0                	test   %al,%al
 849d6ef:	74 17                	je     849d708 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x3c4>
 849d6f1:	8b 45 08             	mov    0x8(%ebp),%eax
 849d6f4:	8b 40 2c             	mov    0x2c(%eax),%eax
 849d6f7:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 849d6fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d6fe:	89 04 24             	mov    %eax,(%esp)
 849d701:	e8 b4 ae 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849d706:	eb 21                	jmp    849d729 <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x3e5>
 849d708:	bb 03 00 00 00       	mov    $0x3,%ebx
 849d70d:	be 00 00 00 00       	mov    $0x0,%esi
 849d712:	eb 37                	jmp    849d74b <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x407>
 849d714:	8b 45 08             	mov    0x8(%ebp),%eax
 849d717:	8b 40 28             	mov    0x28(%eax),%eax
 849d71a:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 849d71d:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d721:	89 04 24             	mov    %eax,(%esp)
 849d724:	e8 91 ae 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849d729:	be 01 00 00 00       	mov    $0x1,%esi
 849d72e:	eb 1b                	jmp    849d74b <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x407>
 849d730:	89 d3                	mov    %edx,%ebx
 849d732:	89 c6                	mov    %eax,%esi
 849d734:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d737:	89 04 24             	mov    %eax,(%esp)
 849d73a:	e8 41 07 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849d73f:	89 f0                	mov    %esi,%eax
 849d741:	89 da                	mov    %ebx,%edx
 849d743:	89 04 24             	mov    %eax,(%esp)
 849d746:	e8 05 60 64 00       	call   8ae3750 <_Unwind_Resume>
 849d74b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 849d74e:	89 04 24             	mov    %eax,(%esp)
 849d751:	e8 2a 07 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849d756:	85 f6                	test   %esi,%esi
 849d758:	74 05                	je     849d75f <_ZN10expert_job10CEnchanter18_PutItemForEnchantEP5CUseriP11stItemPos_ti+0x41b>
 849d75a:	bb 00 00 00 00       	mov    $0x0,%ebx
 849d75f:	89 d8                	mov    %ebx,%eax
 849d761:	83 c4 30             	add    $0x30,%esp
 849d764:	5b                   	pop    %ebx
 849d765:	5e                   	pop    %esi
 849d766:	5d                   	pop    %ebp
 849d767:	c3                   	ret

```

```c
// expert_job::CEnchanter::_PutItemForEnchant @ 0x849d344

/* expert_job::CEnchanter::_PutItemForEnchant(CUser*, int, stItemPos_t*, int) */

int __thiscall
expert_job::CEnchanter::_PutItemForEnchant
          (CEnchanter *this,CUser *param_1,int param_2,stItemPos_t *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  CInventory *this_00;
  int unaff_EBX;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  iVar5 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar5 == 0) {
    return 3;
  }
  sVar3 = CUser::get_unique_id(param_1);
  sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x2c));
  if (sVar3 != sVar4) {
    if ((param_2 == 2) && (cVar2 = IsUseOtherUserMonsterCard(this), cVar2 != '\x01')) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      return 3;
    }
    sVar3 = CUser::get_unique_id(param_1);
    sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x28));
    if (sVar3 != sVar4) {
      return 3;
    }
  }
  if (param_2 == 1) {
    cVar2 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(this + 8));
    if (cVar2 != '\x01') {
      return 0x14;
    }
    local_14 = 0;
    local_14 = ExpertJobMaterial::SetData
                         ((ExpertJobMaterial *)(this + 8),param_1,(ushort)(byte)*param_3,
                          *(ushort *)(param_3 + 1));
    if (local_14 != 0) {
      return local_14;
    }
    iVar5 = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 8),false,0);
    local_14 = iVar5;
joined_r0x0849d522:
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  else {
    if (param_2 == 2) {
      cVar2 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(this + 0x18));
      if (cVar2 != '\x01') {
        return 0x14;
      }
      local_10 = 0;
      local_10 = ExpertJobMaterial::SetData
                           ((ExpertJobMaterial *)(this + 0x18),param_1,(ushort)(byte)*param_3,
                            *(ushort *)(param_3 + 1));
      if (local_10 != 0) {
        return local_10;
      }
      iVar5 = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 0x18),true,2);
      local_10 = iVar5;
      goto joined_r0x0849d522;
    }
    if (param_2 == 0) {
      if (param_4 < 0) {
        return 0x5f;
      }
      if (0 < *(int *)(this + 0x38)) {
        return 0x14;
      }
      cVar2 = CUser::CheckMoney(*(CUser **)(this + 0x28),param_4);
      if (cVar2 != '\x01') {
        return 0x5f;
      }
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar5 = CInventory::get_money(this_00);
      if (iVar5 < param_4) {
        return 0x16;
      }
      *(int *)(this + 0x38) = param_4;
    }
  }
  if ((*(int *)(this + 0x28) == 0) ||
     (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x28)), iVar5 == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 0849d622 to 0849d728 has its CatchHandler @ 0849d730 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x9d);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,param_2);
  if (param_2 == 1) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(this + 0x10));
  }
  else if (param_2 == 2) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(this + 0x20));
  }
  else if (param_2 == 0) {
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(this + 0x38));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  sVar3 = CUser::get_unique_id(param_1);
  sVar4 = CUser::get_unique_id(*(CUser **)(this + 0x28));
  if (sVar3 == sVar4) {
    if ((*(int *)(this + 0x2c) == 0) ||
       (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(this + 0x2c)), iVar5 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      unaff_EBX = 3;
      bVar1 = false;
      goto LAB_0849d74b;
    }
    CUser::Send(*(CUser **)(this + 0x2c),local_20);
  }
  else {
    CUser::Send(*(CUser **)(this + 0x28),local_20);
  }
  bVar1 = true;
LAB_0849d74b:
  PacketGuard::~PacketGuard(local_20);
  if (bVar1) {
    return 0;
  }
  return unaff_EBX;
}

```

---

## _TryEnchant

```asm
// === 0849dcc4 expert_job::CEnchanter::_TryEnchant  [0x0849dcc4-0x849dd93] ===
 849dcc4:	55                   	push   %ebp
 849dcc5:	89 e5                	mov    %esp,%ebp
 849dcc7:	83 ec 28             	sub    $0x28,%esp
 849dcca:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849dcd1:	8b 45 14             	mov    0x14(%ebp),%eax
 849dcd4:	83 f8 01             	cmp    $0x1,%eax
 849dcd7:	74 50                	je     849dd29 <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0x65>
 849dcd9:	83 f8 02             	cmp    $0x2,%eax
 849dcdc:	0f 84 88 00 00 00    	je     849dd6a <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0xa6>
 849dce2:	85 c0                	test   %eax,%eax
 849dce4:	0f 85 a4 00 00 00    	jne    849dd8e <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0xca>
 849dcea:	8b 45 10             	mov    0x10(%ebp),%eax
 849dced:	89 44 24 08          	mov    %eax,0x8(%esp)
 849dcf1:	8b 45 0c             	mov    0xc(%ebp),%eax
 849dcf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 849dcf8:	8b 45 08             	mov    0x8(%ebp),%eax
 849dcfb:	89 04 24             	mov    %eax,(%esp)
 849dcfe:	e8 b3 fa ff ff       	call   849d7b6 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t>
 849dd03:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849dd06:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd09:	8b 00                	mov    (%eax),%eax
 849dd0b:	83 c0 04             	add    $0x4,%eax
 849dd0e:	8b 10                	mov    (%eax),%edx
 849dd10:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849dd17:	00 
 849dd18:	8b 45 0c             	mov    0xc(%ebp),%eax
 849dd1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 849dd1f:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd22:	89 04 24             	mov    %eax,(%esp)
 849dd25:	ff d2                	call   *%edx
 849dd27:	eb 65                	jmp    849dd8e <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0xca>
 849dd29:	8b 45 10             	mov    0x10(%ebp),%eax
 849dd2c:	89 44 24 08          	mov    %eax,0x8(%esp)
 849dd30:	8b 45 0c             	mov    0xc(%ebp),%eax
 849dd33:	89 44 24 04          	mov    %eax,0x4(%esp)
 849dd37:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd3a:	89 04 24             	mov    %eax,(%esp)
 849dd3d:	e8 fc fc ff ff       	call   849da3e <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t>
 849dd42:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849dd45:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 849dd49:	0f 95 c0             	setne  %al
 849dd4c:	84 c0                	test   %al,%al
 849dd4e:	74 3d                	je     849dd8d <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0xc9>
 849dd50:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd53:	83 c0 18             	add    $0x18,%eax
 849dd56:	89 04 24             	mov    %eax,(%esp)
 849dd59:	e8 f4 14 00 00       	call   849f252 <_ZN10expert_job17ExpertJobMaterial5ResetEv>
 849dd5e:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd61:	c7 40 40 00 00 00 00 	movl   $0x0,0x40(%eax)
 849dd68:	eb 24                	jmp    849dd8e <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0xca>
 849dd6a:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd6d:	8b 00                	mov    (%eax),%eax
 849dd6f:	83 c0 04             	add    $0x4,%eax
 849dd72:	8b 10                	mov    (%eax),%edx
 849dd74:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 849dd7b:	00 
 849dd7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 849dd7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 849dd83:	8b 45 08             	mov    0x8(%ebp),%eax
 849dd86:	89 04 24             	mov    %eax,(%esp)
 849dd89:	ff d2                	call   *%edx
 849dd8b:	eb 01                	jmp    849dd8e <_ZN10expert_job10CEnchanter11_TryEnchantEP5CUserP11stItemPos_t21ENUM_TRY_ENCHANT_TYPE+0xca>
 849dd8d:	90                   	nop
 849dd8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849dd91:	c9                   	leave
 849dd92:	c3                   	ret
 849dd93:	90                   	nop

```

```c
// expert_job::CEnchanter::_TryEnchant @ 0x849dcc4

/* expert_job::CEnchanter::_TryEnchant(CUser*, stItemPos_t*, ENUM_TRY_ENCHANT_TYPE) */

int __thiscall
expert_job::CEnchanter::_TryEnchant
          (CEnchanter *this,CUser *param_1,stItemPos_t *param_2,int param_4)

{
  int local_10;
  
  local_10 = 0;
  if (param_4 == 1) {
    local_10 = _TryEnchantOther((CUser *)this,(stItemPos_t *)param_1);
    if (local_10 != 0) {
      ExpertJobMaterial::Reset((ExpertJobMaterial *)(this + 0x18));
      *(undefined4 *)(this + 0x40) = 0;
    }
  }
  else if (param_4 == 2) {
    (**(code **)(*(int *)this + 4))(this,param_1,2);
  }
  else if (param_4 == 0) {
    local_10 = _TryEnchantMine(this,param_1,param_2);
    (**(code **)(*(int *)this + 4))(this,param_1,0);
  }
  return local_10;
}

```

---

## _TryEnchantMine

```asm
// === 0849d7b6 expert_job::CEnchanter::_TryEnchantMine  [0x0849d7b6-0x849da3d] ===
 849d7b6:	55                   	push   %ebp
 849d7b7:	89 e5                	mov    %esp,%ebp
 849d7b9:	53                   	push   %ebx
 849d7ba:	83 ec 64             	sub    $0x64,%esp
 849d7bd:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 849d7c4:	8b 45 10             	mov    0x10(%ebp),%eax
 849d7c7:	0f b7 40 01          	movzwl 0x1(%eax),%eax
 849d7cb:	0f b7 d0             	movzwl %ax,%edx
 849d7ce:	8b 45 10             	mov    0x10(%ebp),%eax
 849d7d1:	0f b6 00             	movzbl (%eax),%eax
 849d7d4:	0f b6 c0             	movzbl %al,%eax
 849d7d7:	8b 4d 08             	mov    0x8(%ebp),%ecx
 849d7da:	83 c1 08             	add    $0x8,%ecx
 849d7dd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 849d7e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 849d7e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d7e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d7ec:	89 0c 24             	mov    %ecx,(%esp)
 849d7ef:	e8 14 e7 ff ff       	call   849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>
 849d7f4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849d7f7:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 849d7fb:	0f 95 c0             	setne  %al
 849d7fe:	84 c0                	test   %al,%al
 849d800:	74 08                	je     849d80a <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x54>
 849d802:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849d805:	e9 2e 02 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d80a:	8b 45 08             	mov    0x8(%ebp),%eax
 849d80d:	8b 40 40             	mov    0x40(%eax),%eax
 849d810:	89 04 24             	mov    %eax,(%esp)
 849d813:	e8 1a e6 ff ff       	call   849be32 <_ZN10expert_job15FindMonsterCardEP5CItem>
 849d818:	89 45 ec             	mov    %eax,-0x14(%ebp)
 849d81b:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 849d81f:	75 0a                	jne    849d82b <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x75>
 849d821:	b8 11 00 00 00       	mov    $0x11,%eax
 849d826:	e9 0d 02 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d82b:	8d 45 ab             	lea    -0x55(%ebp),%eax
 849d82e:	89 04 24             	mov    %eax,(%esp)
 849d831:	e8 1e e0 c2 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 849d836:	c7 45 f0 ff ff ff ff 	movl   $0xffffffff,-0x10(%ebp)
 849d83d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 849d844:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849d847:	89 04 24             	mov    %eax,(%esp)
 849d84a:	e8 f9 33 c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849d84f:	89 c3                	mov    %eax,%ebx
 849d851:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d854:	89 04 24             	mov    %eax,(%esp)
 849d857:	e8 22 ca c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 849d85c:	8d 55 ab             	lea    -0x55(%ebp),%edx
 849d85f:	89 54 24 08          	mov    %edx,0x8(%esp)
 849d863:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 849d867:	89 04 24             	mov    %eax,(%esp)
 849d86a:	e8 bd e6 05 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 849d86f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849d872:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 849d876:	75 0a                	jne    849d882 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0xcc>
 849d878:	b8 11 00 00 00       	mov    $0x11,%eax
 849d87d:	e9 b6 01 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d882:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849d885:	0f b7 c0             	movzwl %ax,%eax
 849d888:	8b 55 08             	mov    0x8(%ebp),%edx
 849d88b:	83 c2 18             	add    $0x18,%edx
 849d88e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 849d892:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849d899:	00 
 849d89a:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d89d:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d8a1:	89 14 24             	mov    %edx,(%esp)
 849d8a4:	e8 5f e6 ff ff       	call   849bf08 <_ZN10expert_job17ExpertJobMaterial7SetDataEP5CUsertt>
 849d8a9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849d8ac:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 849d8b0:	0f 95 c0             	setne  %al
 849d8b3:	84 c0                	test   %al,%al
 849d8b5:	74 08                	je     849d8bf <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x109>
 849d8b7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849d8ba:	e9 79 01 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d8bf:	8b 45 08             	mov    0x8(%ebp),%eax
 849d8c2:	89 04 24             	mov    %eax,(%esp)
 849d8c5:	e8 3c f1 ff ff       	call   849ca06 <_ZN10expert_job10CEnchanter13IsRecipeRightEv>
 849d8ca:	83 f0 01             	xor    $0x1,%eax
 849d8cd:	84 c0                	test   %al,%al
 849d8cf:	74 0a                	je     849d8db <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x125>
 849d8d1:	b8 11 00 00 00       	mov    $0x11,%eax
 849d8d6:	e9 5d 01 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d8db:	8b 45 08             	mov    0x8(%ebp),%eax
 849d8de:	8b 40 40             	mov    0x40(%eax),%eax
 849d8e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d8e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 849d8e8:	89 04 24             	mov    %eax,(%esp)
 849d8eb:	e8 a0 dc ff ff       	call   849b590 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem>
 849d8f0:	83 f0 01             	xor    $0x1,%eax
 849d8f3:	84 c0                	test   %al,%al
 849d8f5:	74 0a                	je     849d901 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x14b>
 849d8f7:	b8 11 00 00 00       	mov    $0x11,%eax
 849d8fc:	e9 37 01 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d901:	8b 45 08             	mov    0x8(%ebp),%eax
 849d904:	83 c0 08             	add    $0x8,%eax
 849d907:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 849d90e:	00 
 849d90f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849d916:	00 
 849d917:	89 04 24             	mov    %eax,(%esp)
 849d91a:	e8 b1 e6 ff ff       	call   849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>
 849d91f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849d922:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 849d926:	0f 95 c0             	setne  %al
 849d929:	84 c0                	test   %al,%al
 849d92b:	74 08                	je     849d935 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x17f>
 849d92d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849d930:	e9 03 01 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d935:	8b 45 08             	mov    0x8(%ebp),%eax
 849d938:	83 c0 18             	add    $0x18,%eax
 849d93b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 849d942:	00 
 849d943:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849d94a:	00 
 849d94b:	89 04 24             	mov    %eax,(%esp)
 849d94e:	e8 7d e6 ff ff       	call   849bfd0 <_ZN10expert_job17ExpertJobMaterial9CheckTypeEbi>
 849d953:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849d956:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 849d95a:	0f 95 c0             	setne  %al
 849d95d:	84 c0                	test   %al,%al
 849d95f:	74 08                	je     849d969 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x1b3>
 849d961:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849d964:	e9 cf 00 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d969:	8b 45 08             	mov    0x8(%ebp),%eax
 849d96c:	8b 50 1c             	mov    0x1c(%eax),%edx
 849d96f:	8b 45 08             	mov    0x8(%ebp),%eax
 849d972:	89 50 3c             	mov    %edx,0x3c(%eax)
 849d975:	8b 45 08             	mov    0x8(%ebp),%eax
 849d978:	8b 40 3c             	mov    0x3c(%eax),%eax
 849d97b:	85 c0                	test   %eax,%eax
 849d97d:	75 0a                	jne    849d989 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x1d3>
 849d97f:	b8 11 00 00 00       	mov    $0x11,%eax
 849d984:	e9 af 00 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d989:	8b 45 08             	mov    0x8(%ebp),%eax
 849d98c:	89 04 24             	mov    %eax,(%esp)
 849d98f:	e8 d6 f0 ff ff       	call   849ca6a <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv>
 849d994:	83 f0 01             	xor    $0x1,%eax
 849d997:	84 c0                	test   %al,%al
 849d999:	74 0a                	je     849d9a5 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x1ef>
 849d99b:	b8 11 00 00 00       	mov    $0x11,%eax
 849d9a0:	e9 93 00 00 00       	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d9a5:	8b 45 08             	mov    0x8(%ebp),%eax
 849d9a8:	8b 50 40             	mov    0x40(%eax),%edx
 849d9ab:	8b 45 08             	mov    0x8(%ebp),%eax
 849d9ae:	8b 40 0c             	mov    0xc(%eax),%eax
 849d9b1:	89 54 24 04          	mov    %edx,0x4(%esp)
 849d9b5:	89 04 24             	mov    %eax,(%esp)
 849d9b8:	e8 ab fd ff ff       	call   849d768 <_Z11EnableWorldPK5CItemS1_>
 849d9bd:	83 f0 01             	xor    $0x1,%eax
 849d9c0:	84 c0                	test   %al,%al
 849d9c2:	74 07                	je     849d9cb <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x215>
 849d9c4:	b8 11 00 00 00       	mov    $0x11,%eax
 849d9c9:	eb 6d                	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849d9cb:	8b 45 08             	mov    0x8(%ebp),%eax
 849d9ce:	8b 40 3c             	mov    0x3c(%eax),%eax
 849d9d1:	8b 00                	mov    (%eax),%eax
 849d9d3:	83 c0 20             	add    $0x20,%eax
 849d9d6:	8b 18                	mov    (%eax),%ebx
 849d9d8:	8b 45 08             	mov    0x8(%ebp),%eax
 849d9db:	8b 40 0c             	mov    0xc(%eax),%eax
 849d9de:	8b 00                	mov    (%eax),%eax
 849d9e0:	83 c0 0c             	add    $0xc,%eax
 849d9e3:	8b 10                	mov    (%eax),%edx
 849d9e5:	8b 45 08             	mov    0x8(%ebp),%eax
 849d9e8:	8b 40 0c             	mov    0xc(%eax),%eax
 849d9eb:	89 04 24             	mov    %eax,(%esp)
 849d9ee:	ff d2                	call   *%edx
 849d9f0:	8b 55 08             	mov    0x8(%ebp),%edx
 849d9f3:	8b 52 3c             	mov    0x3c(%edx),%edx
 849d9f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 849d9fa:	89 14 24             	mov    %edx,(%esp)
 849d9fd:	ff d3                	call   *%ebx
 849d9ff:	83 f0 01             	xor    $0x1,%eax
 849da02:	84 c0                	test   %al,%al
 849da04:	74 07                	je     849da0d <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x257>
 849da06:	b8 17 00 00 00       	mov    $0x17,%eax
 849da0b:	eb 2b                	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849da0d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849da14:	00 
 849da15:	8b 45 08             	mov    0x8(%ebp),%eax
 849da18:	89 04 24             	mov    %eax,(%esp)
 849da1b:	e8 0c f1 ff ff       	call   849cb2c <_ZN10expert_job10CEnchanter10_DoEnchantE21ENUM_TRY_ENCHANT_TYPE>
 849da20:	89 45 e8             	mov    %eax,-0x18(%ebp)
 849da23:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 849da27:	0f 95 c0             	setne  %al
 849da2a:	84 c0                	test   %al,%al
 849da2c:	74 05                	je     849da33 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x27d>
 849da2e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 849da31:	eb 05                	jmp    849da38 <_ZN10expert_job10CEnchanter15_TryEnchantMineEP5CUserP11stItemPos_t+0x282>
 849da33:	b8 00 00 00 00       	mov    $0x0,%eax
 849da38:	83 c4 64             	add    $0x64,%esp
 849da3b:	5b                   	pop    %ebx
 849da3c:	5d                   	pop    %ebp
 849da3d:	c3                   	ret

```

```c
// expert_job::CEnchanter::_TryEnchantMine @ 0x849d7b6

/* expert_job::CEnchanter::_TryEnchantMine(CUser*, stItemPos_t*) */

int __thiscall
expert_job::CEnchanter::_TryEnchantMine(CEnchanter *this,CUser *param_1,stItemPos_t *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  undefined4 uVar4;
  Inven_Item local_59 [61];
  int local_1c;
  CItem *local_18;
  int local_14;
  undefined4 local_10;
  
  local_1c = 0;
  local_1c = ExpertJobMaterial::SetData
                       ((ExpertJobMaterial *)(this + 8),param_1,(ushort)(byte)*param_2,
                        *(ushort *)(param_2 + 1));
  if (local_1c == 0) {
    local_18 = (CItem *)FindMonsterCard(*(CItem **)(this + 0x40));
    if (local_18 == (CItem *)0x0) {
      local_1c = 0x11;
    }
    else {
      Inven_Item::Inven_Item(local_59);
      local_14 = 0xffffffff;
      local_10 = 0;
      iVar3 = CItem::get_index(local_18);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_14 = CInventory::GetInvenData(this_00,iVar3,local_59);
      if (local_14 == -1) {
        local_1c = 0x11;
      }
      else {
        local_1c = ExpertJobMaterial::SetData
                             ((ExpertJobMaterial *)(this + 0x18),param_1,0,(ushort)local_14);
        if (local_1c == 0) {
          cVar2 = IsRecipeRight(this);
          if (cVar2 == '\x01') {
            cVar2 = CExpertJob::IsLearnRecipe(param_1,*(CStackableItem **)(this + 0x40));
            if (cVar2 == '\x01') {
              local_1c = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 8),false,0);
              if ((local_1c == 0) &&
                 (local_1c = ExpertJobMaterial::CheckType((ExpertJobMaterial *)(this + 0x18),true,2)
                 , local_1c == 0)) {
                *(undefined4 *)(this + 0x3c) = *(undefined4 *)(this + 0x1c);
                if (*(int *)(this + 0x3c) == 0) {
                  local_1c = 0x11;
                }
                else {
                  cVar2 = IsEqualMonsterCad(this);
                  if (cVar2 == '\x01') {
                    cVar2 = EnableWorld(*(CItem **)(this + 0xc),*(CItem **)(this + 0x40));
                    if (cVar2 == '\x01') {
                      pcVar1 = *(code **)(**(int **)(this + 0x3c) + 0x20);
                      uVar4 = (**(code **)(**(int **)(this + 0xc) + 0xc))
                                        (*(undefined4 *)(this + 0xc));
                      cVar2 = (*pcVar1)(*(undefined4 *)(this + 0x3c),uVar4);
                      if (cVar2 == '\x01') {
                        local_1c = _DoEnchant(this,0);
                        if (local_1c == 0) {
                          local_1c = 0;
                        }
                      }
                      else {
                        local_1c = 0x17;
                      }
                    }
                    else {
                      local_1c = 0x11;
                    }
                  }
                  else {
                    local_1c = 0x11;
                  }
                }
              }
            }
            else {
              local_1c = 0x11;
            }
          }
          else {
            local_1c = 0x11;
          }
        }
      }
    }
  }
  return local_1c;
}

```

---

## _TryEnchantOther

```asm
// === 0849da3e expert_job::CEnchanter::_TryEnchantOther  [0x0849da3e-0x849dcc3] ===
 849da3e:	55                   	push   %ebp
 849da3f:	89 e5                	mov    %esp,%ebp
 849da41:	56                   	push   %esi
 849da42:	53                   	push   %ebx
 849da43:	83 ec 30             	sub    $0x30,%esp
 849da46:	8b 45 08             	mov    0x8(%ebp),%eax
 849da49:	83 c0 08             	add    $0x8,%eax
 849da4c:	89 04 24             	mov    %eax,(%esp)
 849da4f:	e8 32 18 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849da54:	84 c0                	test   %al,%al
 849da56:	74 0a                	je     849da62 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x24>
 849da58:	b8 15 00 00 00       	mov    $0x15,%eax
 849da5d:	e9 5a 02 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849da62:	8b 45 08             	mov    0x8(%ebp),%eax
 849da65:	89 04 24             	mov    %eax,(%esp)
 849da68:	e8 99 ef ff ff       	call   849ca06 <_ZN10expert_job10CEnchanter13IsRecipeRightEv>
 849da6d:	83 f0 01             	xor    $0x1,%eax
 849da70:	84 c0                	test   %al,%al
 849da72:	74 0a                	je     849da7e <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x40>
 849da74:	b8 11 00 00 00       	mov    $0x11,%eax
 849da79:	e9 3e 02 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849da7e:	8b 45 08             	mov    0x8(%ebp),%eax
 849da81:	8b 40 40             	mov    0x40(%eax),%eax
 849da84:	89 44 24 04          	mov    %eax,0x4(%esp)
 849da88:	8b 45 0c             	mov    0xc(%ebp),%eax
 849da8b:	89 04 24             	mov    %eax,(%esp)
 849da8e:	e8 fd da ff ff       	call   849b590 <_ZN10expert_job10CExpertJob13IsLearnRecipeEP5CUserPK14CStackableItem>
 849da93:	83 f0 01             	xor    $0x1,%eax
 849da96:	84 c0                	test   %al,%al
 849da98:	74 0a                	je     849daa4 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x66>
 849da9a:	b8 11 00 00 00       	mov    $0x11,%eax
 849da9f:	e9 18 02 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849daa4:	8b 45 08             	mov    0x8(%ebp),%eax
 849daa7:	83 c0 18             	add    $0x18,%eax
 849daaa:	89 04 24             	mov    %eax,(%esp)
 849daad:	e8 d4 17 00 00       	call   849f286 <_ZN10expert_job17ExpertJobMaterial5EmptyEv>
 849dab2:	84 c0                	test   %al,%al
 849dab4:	74 0a                	je     849dac0 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x82>
 849dab6:	b8 14 00 00 00       	mov    $0x14,%eax
 849dabb:	e9 fc 01 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849dac0:	8b 45 08             	mov    0x8(%ebp),%eax
 849dac3:	8b 50 1c             	mov    0x1c(%eax),%edx
 849dac6:	8b 45 08             	mov    0x8(%ebp),%eax
 849dac9:	89 50 3c             	mov    %edx,0x3c(%eax)
 849dacc:	8b 45 08             	mov    0x8(%ebp),%eax
 849dacf:	8b 40 3c             	mov    0x3c(%eax),%eax
 849dad2:	85 c0                	test   %eax,%eax
 849dad4:	75 0a                	jne    849dae0 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0xa2>
 849dad6:	b8 11 00 00 00       	mov    $0x11,%eax
 849dadb:	e9 dc 01 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849dae0:	8b 45 08             	mov    0x8(%ebp),%eax
 849dae3:	89 04 24             	mov    %eax,(%esp)
 849dae6:	e8 7f ef ff ff       	call   849ca6a <_ZN10expert_job10CEnchanter17IsEqualMonsterCadEv>
 849daeb:	83 f0 01             	xor    $0x1,%eax
 849daee:	84 c0                	test   %al,%al
 849daf0:	74 0a                	je     849dafc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0xbe>
 849daf2:	b8 11 00 00 00       	mov    $0x11,%eax
 849daf7:	e9 c0 01 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849dafc:	8b 45 08             	mov    0x8(%ebp),%eax
 849daff:	8b 50 40             	mov    0x40(%eax),%edx
 849db02:	8b 45 08             	mov    0x8(%ebp),%eax
 849db05:	8b 40 0c             	mov    0xc(%eax),%eax
 849db08:	89 54 24 04          	mov    %edx,0x4(%esp)
 849db0c:	89 04 24             	mov    %eax,(%esp)
 849db0f:	e8 54 fc ff ff       	call   849d768 <_Z11EnableWorldPK5CItemS1_>
 849db14:	83 f0 01             	xor    $0x1,%eax
 849db17:	84 c0                	test   %al,%al
 849db19:	74 0a                	je     849db25 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0xe7>
 849db1b:	b8 11 00 00 00       	mov    $0x11,%eax
 849db20:	e9 97 01 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849db25:	8b 45 08             	mov    0x8(%ebp),%eax
 849db28:	8b 40 3c             	mov    0x3c(%eax),%eax
 849db2b:	8b 00                	mov    (%eax),%eax
 849db2d:	83 c0 20             	add    $0x20,%eax
 849db30:	8b 18                	mov    (%eax),%ebx
 849db32:	8b 45 08             	mov    0x8(%ebp),%eax
 849db35:	8b 40 0c             	mov    0xc(%eax),%eax
 849db38:	8b 00                	mov    (%eax),%eax
 849db3a:	83 c0 0c             	add    $0xc,%eax
 849db3d:	8b 10                	mov    (%eax),%edx
 849db3f:	8b 45 08             	mov    0x8(%ebp),%eax
 849db42:	8b 40 0c             	mov    0xc(%eax),%eax
 849db45:	89 04 24             	mov    %eax,(%esp)
 849db48:	ff d2                	call   *%edx
 849db4a:	8b 55 08             	mov    0x8(%ebp),%edx
 849db4d:	8b 52 3c             	mov    0x3c(%edx),%edx
 849db50:	89 44 24 04          	mov    %eax,0x4(%esp)
 849db54:	89 14 24             	mov    %edx,(%esp)
 849db57:	ff d3                	call   *%ebx
 849db59:	83 f0 01             	xor    $0x1,%eax
 849db5c:	84 c0                	test   %al,%al
 849db5e:	74 0a                	je     849db6a <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x12c>
 849db60:	b8 17 00 00 00       	mov    $0x17,%eax
 849db65:	e9 52 01 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849db6a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 849db71:	8b 45 08             	mov    0x8(%ebp),%eax
 849db74:	8b 40 40             	mov    0x40(%eax),%eax
 849db77:	8d 55 ec             	lea    -0x14(%ebp),%edx
 849db7a:	89 54 24 08          	mov    %edx,0x8(%esp)
 849db7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 849db82:	8b 45 0c             	mov    0xc(%ebp),%eax
 849db85:	89 04 24             	mov    %eax,(%esp)
 849db88:	e8 5b d7 ff ff       	call   849b2e8 <_ZN10expert_job10CExpertJob14GetSuccessRateEP5CUserPK14CStackableItemRi>
 849db8d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 849db90:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 849db94:	75 0a                	jne    849dba0 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x162>
 849db96:	b8 17 00 00 00       	mov    $0x17,%eax
 849db9b:	e9 1c 01 00 00       	jmp    849dcbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x27e>
 849dba0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 849dba3:	8b 50 04             	mov    0x4(%eax),%edx
 849dba6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 849dba9:	8d 04 02             	lea    (%edx,%eax,1),%eax
 849dbac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 849dbaf:	83 7d f4 64          	cmpl   $0x64,-0xc(%ebp)
 849dbb3:	7e 07                	jle    849dbbc <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x17e>
 849dbb5:	c7 45 f4 64 00 00 00 	movl   $0x64,-0xc(%ebp)
 849dbbc:	8b 45 08             	mov    0x8(%ebp),%eax
 849dbbf:	8b 40 2c             	mov    0x2c(%eax),%eax
 849dbc2:	85 c0                	test   %eax,%eax
 849dbc4:	74 19                	je     849dbdf <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x1a1>
 849dbc6:	8b 45 08             	mov    0x8(%ebp),%eax
 849dbc9:	8b 40 2c             	mov    0x2c(%eax),%eax
 849dbcc:	89 04 24             	mov    %eax,(%esp)
 849dbcf:	e8 5e 28 c8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 849dbd4:	85 c0                	test   %eax,%eax
 849dbd6:	74 07                	je     849dbdf <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x1a1>
 849dbd8:	b8 01 00 00 00       	mov    $0x1,%eax
 849dbdd:	eb 05                	jmp    849dbe4 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x1a6>
 849dbdf:	b8 00 00 00 00       	mov    $0x0,%eax
 849dbe4:	84 c0                	test   %al,%al
 849dbe6:	0f 84 cb 00 00 00    	je     849dcb7 <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x279>
 849dbec:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dbef:	89 04 24             	mov    %eax,(%esp)
 849dbf2:	e8 55 01 0f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 849dbf7:	c7 44 24 08 9c 00 00 	movl   $0x9c,0x8(%esp)
 849dbfe:	00 
 849dbff:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 849dc06:	00 
 849dc07:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc0a:	89 04 24             	mov    %eax,(%esp)
 849dc0d:	e8 ea dc c2 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 849dc12:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849dc19:	00 
 849dc1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc1d:	89 04 24             	mov    %eax,(%esp)
 849dc20:	e8 fb dc c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849dc25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 849dc28:	89 44 24 04          	mov    %eax,0x4(%esp)
 849dc2c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc2f:	89 04 24             	mov    %eax,(%esp)
 849dc32:	e8 6d c2 c3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 849dc37:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849dc3e:	00 
 849dc3f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc42:	89 04 24             	mov    %eax,(%esp)
 849dc45:	e8 d6 dc c2 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 849dc4a:	8b 45 08             	mov    0x8(%ebp),%eax
 849dc4d:	8b 40 40             	mov    0x40(%eax),%eax
 849dc50:	89 04 24             	mov    %eax,(%esp)
 849dc53:	e8 f0 2f c7 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 849dc58:	89 44 24 04          	mov    %eax,0x4(%esp)
 849dc5c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc5f:	89 04 24             	mov    %eax,(%esp)
 849dc62:	e8 d5 dc c2 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 849dc67:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 849dc6e:	00 
 849dc6f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc72:	89 04 24             	mov    %eax,(%esp)
 849dc75:	e8 de dc c2 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 849dc7a:	8b 45 08             	mov    0x8(%ebp),%eax
 849dc7d:	8b 40 2c             	mov    0x2c(%eax),%eax
 849dc80:	8d 55 e0             	lea    -0x20(%ebp),%edx
 849dc83:	89 54 24 04          	mov    %edx,0x4(%esp)
 849dc87:	89 04 24             	mov    %eax,(%esp)
 849dc8a:	e8 2b a9 1a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 849dc8f:	eb 1b                	jmp    849dcac <_ZN10expert_job10CEnchanter16_TryEnchantOtherEP5CUserP11stItemPos_t+0x26e>
 849dc91:	89 d3                	mov    %edx,%ebx
 849dc93:	89 c6                	mov    %eax,%esi
 849dc95:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dc98:	89 04 24             	mov    %eax,(%esp)
 849dc9b:	e8 e0 01 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849dca0:	89 f0                	mov    %esi,%eax
 849dca2:	89 da                	mov    %ebx,%edx
 849dca4:	89 04 24             	mov    %eax,(%esp)
 849dca7:	e8 a4 5a 64 00       	call   8ae3750 <_Unwind_Resume>
 849dcac:	8d 45 e0             	lea    -0x20(%ebp),%eax
 849dcaf:	89 04 24             	mov    %eax,(%esp)
 849dcb2:	e8 c9 01 0f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 849dcb7:	b8 00 00 00 00       	mov    $0x0,%eax
 849dcbc:	83 c4 30             	add    $0x30,%esp
 849dcbf:	5b                   	pop    %ebx
 849dcc0:	5e                   	pop    %esi
 849dcc1:	5d                   	pop    %ebp
 849dcc2:	c3                   	ret
 849dcc3:	90                   	nop

```

```c
// expert_job::CEnchanter::_TryEnchantOther @ 0x849da3e

/* expert_job::CEnchanter::_TryEnchantOther(CUser*, stItemPos_t*) */

undefined4 expert_job::CEnchanter::_TryEnchantOther(CUser *param_1,stItemPos_t *param_2)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  PacketGuard local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  
  cVar3 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(param_1 + 8));
  if (cVar3 != '\0') {
    return 0x15;
  }
  cVar3 = IsRecipeRight((CEnchanter *)param_1);
  if (cVar3 != '\x01') {
    return 0x11;
  }
  cVar3 = CExpertJob::IsLearnRecipe((CUser *)param_2,*(CStackableItem **)(param_1 + 0x40));
  if (cVar3 != '\x01') {
    return 0x11;
  }
  cVar3 = ExpertJobMaterial::Empty((ExpertJobMaterial *)(param_1 + 0x18));
  if (cVar3 != '\0') {
    return 0x14;
  }
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x1c);
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0x11;
  }
  cVar3 = IsEqualMonsterCad((CEnchanter *)param_1);
  if (cVar3 != '\x01') {
    return 0x11;
  }
  cVar3 = EnableWorld(*(CItem **)(param_1 + 0xc),*(CItem **)(param_1 + 0x40));
  if (cVar3 != '\x01') {
    return 0x11;
  }
  pcVar1 = *(code **)(**(int **)(param_1 + 0x3c) + 0x20);
  uVar4 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(undefined4 *)(param_1 + 0xc));
  cVar3 = (*pcVar1)(*(undefined4 *)(param_1 + 0x3c),uVar4);
  if (cVar3 == '\x01') {
    local_18 = 0;
    local_14 = CExpertJob::GetSuccessRate
                         ((CUser *)param_2,*(CStackableItem **)(param_1 + 0x40),&local_18);
    if (local_14 != 0) {
      local_10 = *(int *)(local_14 + 4) + local_18;
      if (100 < local_10) {
        local_10 = 100;
      }
      if ((*(int *)(param_1 + 0x2c) == 0) ||
         (iVar5 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)(param_1 + 0x2c)), iVar5 == 0)
         ) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0849dc0d to 0849dc8e has its CatchHandler @ 0849dc91 */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x9c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,local_10);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
        iVar5 = CItem::get_index(*(CItem **)(param_1 + 0x40));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_24,iVar5);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
        CUser::Send(*(CUser **)(param_1 + 0x2c),local_24);
        PacketGuard::~PacketGuard(local_24);
      }
      return 0;
    }
    return 0x17;
  }
  return 0x17;
}

```

