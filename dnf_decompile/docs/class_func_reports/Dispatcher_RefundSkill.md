# Dispatcher_RefundSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081dad1c Dispatcher_RefundSkill::check_error  [0x081dad1c-0x81dae09] ===
 81dad1c:	55                   	push   %ebp
 81dad1d:	89 e5                	mov    %esp,%ebp
 81dad1f:	83 ec 28             	sub    $0x28,%esp
 81dad22:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81dad26:	75 0a                	jne    81dad32 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0x16>
 81dad28:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dad2d:	e9 d5 00 00 00       	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dad32:	8b 45 10             	mov    0x10(%ebp),%eax
 81dad35:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dad38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dad3b:	89 04 24             	mov    %eax,(%esp)
 81dad3e:	e8 ef 56 f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81dad43:	85 c0                	test   %eax,%eax
 81dad45:	0f 94 c0             	sete   %al
 81dad48:	84 c0                	test   %al,%al
 81dad4a:	74 0a                	je     81dad56 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0x3a>
 81dad4c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81dad51:	e9 b1 00 00 00       	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dad56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dad59:	89 04 24             	mov    %eax,(%esp)
 81dad5c:	e8 2b f6 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dad61:	83 f8 03             	cmp    $0x3,%eax
 81dad64:	0f 95 c0             	setne  %al
 81dad67:	84 c0                	test   %al,%al
 81dad69:	74 0a                	je     81dad75 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0x59>
 81dad6b:	b8 07 00 00 00       	mov    $0x7,%eax
 81dad70:	e9 92 00 00 00       	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dad75:	e8 2d f6 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81dad7a:	89 04 24             	mov    %eax,(%esp)
 81dad7d:	e8 9c 96 05 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 81dad82:	84 c0                	test   %al,%al
 81dad84:	74 14                	je     81dad9a <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0x7e>
 81dad86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dad89:	8b 40 0d             	mov    0xd(%eax),%eax
 81dad8c:	3d c7 97 28 00       	cmp    $0x2897c7,%eax
 81dad91:	74 1b                	je     81dadae <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0x92>
 81dad93:	b8 16 00 00 00       	mov    $0x16,%eax
 81dad98:	eb 6d                	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dad9a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dad9d:	8b 40 0d             	mov    0xd(%eax),%eax
 81dada0:	3d c6 97 28 00       	cmp    $0x2897c6,%eax
 81dada5:	74 07                	je     81dadae <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0x92>
 81dada7:	b8 16 00 00 00       	mov    $0x16,%eax
 81dadac:	eb 59                	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dadae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dadb1:	89 04 24             	mov    %eax,(%esp)
 81dadb4:	e8 83 45 05 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81dadb9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dadbc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dadbf:	83 f8 ff             	cmp    $0xffffffff,%eax
 81dadc2:	74 07                	je     81dadcb <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xaf>
 81dadc4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dadc7:	85 c0                	test   %eax,%eax
 81dadc9:	75 12                	jne    81daddd <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xc1>
 81dadcb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dadce:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81dadd2:	3c 01                	cmp    $0x1,%al
 81dadd4:	75 19                	jne    81dadef <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xd3>
 81dadd6:	b8 13 00 00 00       	mov    $0x13,%eax
 81daddb:	eb 2a                	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81daddd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dade0:	0f b6 40 11          	movzbl 0x11(%eax),%eax
 81dade4:	3c 01                	cmp    $0x1,%al
 81dade6:	74 08                	je     81dadf0 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xd4>
 81dade8:	b8 13 00 00 00       	mov    $0x13,%eax
 81daded:	eb 18                	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dadef:	90                   	nop
 81dadf0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dadf3:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81dadf7:	84 c0                	test   %al,%al
 81dadf9:	75 07                	jne    81dae02 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xe6>
 81dadfb:	b8 13 00 00 00       	mov    $0x13,%eax
 81dae00:	eb 05                	jmp    81dae07 <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE+0xeb>
 81dae02:	b8 00 00 00 00       	mov    $0x0,%eax
 81dae07:	c9                   	leave
 81dae08:	c3                   	ret
 81dae09:	90                   	nop

```

```c
// Dispatcher_RefundSkill::check_error @ 0x81dad1c

/* Dispatcher_RefundSkill::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RefundSkill::check_error(Dispatcher_RefundSkill *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 == 0) {
      uVar2 = 0xffffffff;
    }
    else {
      iVar3 = CUser::get_state(param_1);
      if (iVar3 == 3) {
        this_00 = (GameWorld *)G_GameWorld();
        cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
        if (cVar1 == '\0') {
          if (*(int *)(param_2 + 0xd) != 0x2897c6) {
            return 0x16;
          }
        }
        else if (*(int *)(param_2 + 0xd) != 0x2897c7) {
          return 0x16;
        }
        iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
        if ((iVar3 == -1) || (iVar3 == 0)) {
          if (param_2[0x11] == (MSG_BASE)0x1) {
            return 0x13;
          }
        }
        else if (param_2[0x11] != (MSG_BASE)0x1) {
          return 0x13;
        }
        if (param_2[0x13] == (MSG_BASE)0x0) {
          uVar2 = 0x13;
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 7;
      }
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081da820 Dispatcher_RefundSkill::process  [0x081da820-0x81dad1b] ===
 81da820:	55                   	push   %ebp
 81da821:	89 e5                	mov    %esp,%ebp
 81da823:	57                   	push   %edi
 81da824:	56                   	push   %esi
 81da825:	53                   	push   %ebx
 81da826:	81 ec ac c9 00 00    	sub    $0xc9ac,%esp
 81da82c:	8b 45 14             	mov    0x14(%ebp),%eax
 81da82f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 81da832:	8b 45 10             	mov    0x10(%ebp),%eax
 81da835:	89 44 24 08          	mov    %eax,0x8(%esp)
 81da839:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da83c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da840:	8b 45 08             	mov    0x8(%ebp),%eax
 81da843:	89 04 24             	mov    %eax,(%esp)
 81da846:	e8 d1 04 00 00       	call   81dad1c <_ZN22Dispatcher_RefundSkill11check_errorEP5CUserR8MSG_BASE>
 81da84b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81da84e:	89 42 18             	mov    %eax,0x18(%edx)
 81da851:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da854:	8b 40 18             	mov    0x18(%eax),%eax
 81da857:	85 c0                	test   %eax,%eax
 81da859:	7e 0a                	jle    81da865 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x45>
 81da85b:	bb 00 00 00 00       	mov    $0x0,%ebx
 81da860:	e9 a9 04 00 00       	jmp    81dad0e <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4ee>
 81da865:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da868:	8b 40 18             	mov    0x18(%eax),%eax
 81da86b:	85 c0                	test   %eax,%eax
 81da86d:	79 2d                	jns    81da89c <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x7c>
 81da86f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da872:	8b 40 18             	mov    0x18(%eax),%eax
 81da875:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da87c:	00 
 81da87d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81da881:	c7 44 24 04 00 23 bd 	movl   $0x8bd2300,0x4(%esp)
 81da888:	08 
 81da889:	c7 04 24 fa 48 00 00 	movl   $0x48fa,(%esp)
 81da890:	e8 42 60 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da895:	89 c3                	mov    %eax,%ebx
 81da897:	e9 72 04 00 00       	jmp    81dad0e <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4ee>
 81da89c:	8b 45 10             	mov    0x10(%ebp),%eax
 81da89f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 81da8a2:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 81da8a8:	89 04 24             	mov    %eax,(%esp)
 81da8ab:	e8 a4 0f ef ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81da8b0:	8d 85 7b ff ff ff    	lea    -0x85(%ebp),%eax
 81da8b6:	89 04 24             	mov    %eax,(%esp)
 81da8b9:	e8 1a 0f ef ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 81da8be:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81da8c1:	8b 58 0d             	mov    0xd(%eax),%ebx
 81da8c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da8c7:	89 04 24             	mov    %eax,(%esp)
 81da8ca:	e8 fb 5a fa ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81da8cf:	8d 95 7b ff ff ff    	lea    -0x85(%ebp),%edx
 81da8d5:	89 54 24 08          	mov    %edx,0x8(%esp)
 81da8d9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81da8dd:	89 04 24             	mov    %eax,(%esp)
 81da8e0:	e8 47 16 32 00       	call   84fbf2c <_ZNK10CInventory12GetInvenDataEiR10Inven_Item>
 81da8e5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81da8e8:	8b 95 7d ff ff ff    	mov    -0x83(%ebp),%edx
 81da8ee:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81da8f1:	8b 40 0d             	mov    0xd(%eax),%eax
 81da8f4:	39 c2                	cmp    %eax,%edx
 81da8f6:	75 17                	jne    81da90f <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0xef>
 81da8f8:	8b 55 82             	mov    -0x7e(%ebp),%edx
 81da8fb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81da8fe:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81da902:	0f b6 c0             	movzbl %al,%eax
 81da905:	39 c2                	cmp    %eax,%edx
 81da907:	7c 06                	jl     81da90f <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0xef>
 81da909:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 81da90d:	79 14                	jns    81da923 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x103>
 81da90f:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da912:	c7 40 18 16 00 00 00 	movl   $0x16,0x18(%eax)
 81da919:	bb 00 00 00 00       	mov    $0x0,%ebx
 81da91e:	e9 eb 03 00 00       	jmp    81dad0e <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4ee>
 81da923:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81da926:	89 04 24             	mov    %eax,(%esp)
 81da929:	e8 7e 38 eb ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 81da92e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81da931:	89 04 24             	mov    %eax,(%esp)
 81da934:	e8 35 c2 eb ff       	call   8096b6e <_ZNSt6vectorIiSaIiEE5clearEv>
 81da939:	8d 85 c0 f7 ff ff    	lea    -0x840(%ebp),%eax
 81da93f:	89 04 24             	mov    %eax,(%esp)
 81da942:	e8 e5 2b 05 00       	call   822d52c <_ZN10CInventoryC1Ev>
 81da947:	8d 85 81 36 ff ff    	lea    -0xc97f(%ebp),%eax
 81da94d:	89 04 24             	mov    %eax,(%esp)
 81da950:	e8 63 2a 05 00       	call   822d3b8 <_ZN15InventoryMemoryC1Ev>
 81da955:	8d 85 81 36 ff ff    	lea    -0xc97f(%ebp),%eax
 81da95b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da95f:	8d 85 c0 f7 ff ff    	lea    -0x840(%ebp),%eax
 81da965:	89 04 24             	mov    %eax,(%esp)
 81da968:	e8 89 2b 05 00       	call   822d4f6 <_ZN10CInventory18SetInventoryMemoryEP15InventoryMemory>
 81da96d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da970:	89 04 24             	mov    %eax,(%esp)
 81da973:	e8 52 5a fa ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 81da978:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da97c:	8d 85 c0 f7 ff ff    	lea    -0x840(%ebp),%eax
 81da982:	89 04 24             	mov    %eax,(%esp)
 81da985:	e8 8a f9 31 00       	call   84fa314 <_ZN10CInventory7setCopyERKS_>
 81da98a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81da98d:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81da991:	0f b6 c0             	movzbl %al,%eax
 81da994:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 81da99b:	00 
 81da99c:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81da9a3:	00 
 81da9a4:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81da9a8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81da9ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 81da9af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81da9b6:	00 
 81da9b7:	8d 85 c0 f7 ff ff    	lea    -0x840(%ebp),%eax
 81da9bd:	89 04 24             	mov    %eax,(%esp)
 81da9c0:	e8 47 96 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81da9c5:	88 45 e3             	mov    %al,-0x1d(%ebp)
 81da9c8:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 81da9cc:	83 f0 01             	xor    $0x1,%eax
 81da9cf:	84 c0                	test   %al,%al
 81da9d1:	74 14                	je     81da9e7 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x1c7>
 81da9d3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da9d6:	c7 40 18 16 00 00 00 	movl   $0x16,0x18(%eax)
 81da9dd:	bb 00 00 00 00       	mov    $0x0,%ebx
 81da9e2:	e9 f1 02 00 00       	jmp    81dacd8 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4b8>
 81da9e7:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81da9ea:	83 c0 18             	add    $0x18,%eax
 81da9ed:	89 85 68 36 ff ff    	mov    %eax,-0xc998(%ebp)
 81da9f3:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81da9f6:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81da9fa:	0f b6 c0             	movzbl %al,%eax
 81da9fd:	89 85 6c 36 ff ff    	mov    %eax,-0xc994(%ebp)
 81daa03:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daa06:	89 04 24             	mov    %eax,(%esp)
 81daa09:	e8 2e 48 05 00       	call   822f23c <_ZNK15CUserCharacInfo24getCurCharSecondGrowTypeEv>
 81daa0e:	0f be c0             	movsbl %al,%eax
 81daa11:	89 85 70 36 ff ff    	mov    %eax,-0xc990(%ebp)
 81daa17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daa1a:	89 04 24             	mov    %eax,(%esp)
 81daa1d:	e8 72 62 f3 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 81daa22:	0f be c0             	movsbl %al,%eax
 81daa25:	89 85 74 36 ff ff    	mov    %eax,-0xc98c(%ebp)
 81daa2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daa2e:	89 04 24             	mov    %eax,(%esp)
 81daa31:	e8 ea 34 f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81daa36:	89 c7                	mov    %eax,%edi
 81daa38:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daa3b:	89 04 24             	mov    %eax,(%esp)
 81daa3e:	e8 75 f8 ef ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 81daa43:	89 c6                	mov    %eax,%esi
 81daa45:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81daa48:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 81daa4c:	0f b6 d8             	movzbl %al,%ebx
 81daa4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daa52:	89 04 24             	mov    %eax,(%esp)
 81daa55:	e8 e6 46 05 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81daa5a:	8b 95 68 36 ff ff    	mov    -0xc998(%ebp),%edx
 81daa60:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 81daa64:	8b 95 6c 36 ff ff    	mov    -0xc994(%ebp),%edx
 81daa6a:	89 54 24 18          	mov    %edx,0x18(%esp)
 81daa6e:	8b 95 70 36 ff ff    	mov    -0xc990(%ebp),%edx
 81daa74:	89 54 24 14          	mov    %edx,0x14(%esp)
 81daa78:	8b 95 74 36 ff ff    	mov    -0xc98c(%ebp),%edx
 81daa7e:	89 54 24 10          	mov    %edx,0x10(%esp)
 81daa82:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 81daa86:	89 74 24 08          	mov    %esi,0x8(%esp)
 81daa8a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81daa8e:	89 04 24             	mov    %eax,(%esp)
 81daa91:	e8 24 bf 42 00       	call   86069ba <_ZN9SkillSlot12refund_skillEiiiiiiRi>
 81daa96:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 81daa99:	89 42 08             	mov    %eax,0x8(%edx)
 81daa9c:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81daa9f:	8b 40 08             	mov    0x8(%eax),%eax
 81daaa2:	3d cc 00 00 00       	cmp    $0xcc,%eax
 81daaa7:	7e 0a                	jle    81daab3 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x293>
 81daaa9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81daaae:	e9 25 02 00 00       	jmp    81dacd8 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4b8>
 81daab3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81daab6:	8b 40 08             	mov    0x8(%eax),%eax
 81daab9:	85 c0                	test   %eax,%eax
 81daabb:	0f 88 f8 01 00 00    	js     81dacb9 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x499>
 81daac1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81daac4:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81daac8:	0f b6 d0             	movzbl %al,%edx
 81daacb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81daace:	8b 40 0d             	mov    0xd(%eax),%eax
 81daad1:	c7 44 24 14 03 00 00 	movl   $0x3,0x14(%esp)
 81daad8:	00 
 81daad9:	89 54 24 10          	mov    %edx,0x10(%esp)
 81daadd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81daae1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 81daae4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81daae8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81daaef:	00 
 81daaf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daaf3:	89 04 24             	mov    %eax,(%esp)
 81daaf6:	e8 61 7d 48 00       	call   866285c <_ZN5CUser11delete_itemEcimi14eItemDelReason>
 81daafb:	85 c0                	test   %eax,%eax
 81daafd:	0f 95 c0             	setne  %al
 81dab00:	84 c0                	test   %al,%al
 81dab02:	74 4e                	je     81dab52 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x332>
 81dab04:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dab07:	0f b6 40 13          	movzbl 0x13(%eax),%eax
 81dab0b:	0f b6 f0             	movzbl %al,%esi
 81dab0e:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dab11:	8b 58 0d             	mov    0xd(%eax),%ebx
 81dab14:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 81dab1b:	00 
 81dab1c:	c7 44 24 08 32 49 00 	movl   $0x4932,0x8(%esp)
 81dab23:	00 
 81dab24:	c7 44 24 04 00 23 bd 	movl   $0x8bd2300,0x4(%esp)
 81dab2b:	08 
 81dab2c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81dab2f:	89 04 24             	mov    %eax,(%esp)
 81dab32:	e8 e1 4b 37 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81dab37:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81dab3b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81dab3f:	c7 44 24 04 e4 19 bc 	movl   $0x8bc19e4,0x4(%esp)
 81dab46:	08 
 81dab47:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81dab4a:	89 04 24             	mov    %eax,(%esp)
 81dab4d:	e8 36 4c 37 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81dab52:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dab55:	c6 40 05 00          	movb   $0x0,0x5(%eax)
 81dab59:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 81dab60:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dab63:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 81dab67:	0f b6 f0             	movzbl %al,%esi
 81dab6a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dab6d:	89 04 24             	mov    %eax,(%esp)
 81dab70:	e8 ab 33 f2 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 81dab75:	89 c3                	mov    %eax,%ebx
 81dab77:	e8 1f 16 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dab7c:	89 74 24 08          	mov    %esi,0x8(%esp)
 81dab80:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dab84:	89 04 24             	mov    %eax,(%esp)
 81dab87:	e8 16 52 18 00       	call   835fda2 <_ZNK12CDataManager10find_skillEii>
 81dab8c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81dab8f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81dab93:	74 16                	je     81dabab <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x38b>
 81dab95:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81dab98:	89 04 24             	mov    %eax,(%esp)
 81dab9b:	e8 12 0a 05 00       	call   822b5b2 <_ZNK6CSkill14IsSpecialSkillEv>
 81daba0:	84 c0                	test   %al,%al
 81daba2:	74 07                	je     81dabab <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x38b>
 81daba4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81daba7:	c6 40 05 01          	movb   $0x1,0x5(%eax)
 81dabab:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dabae:	89 04 24             	mov    %eax,(%esp)
 81dabb1:	e8 86 47 05 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81dabb6:	89 c2                	mov    %eax,%edx
 81dabb8:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dabbb:	88 50 04             	mov    %dl,0x4(%eax)
 81dabbe:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dabc1:	0f b6 50 12          	movzbl 0x12(%eax),%edx
 81dabc5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dabc8:	88 50 0c             	mov    %dl,0xc(%eax)
 81dabcb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dabce:	8b 58 08             	mov    0x8(%eax),%ebx
 81dabd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dabd4:	89 04 24             	mov    %eax,(%esp)
 81dabd7:	e8 54 45 05 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81dabdc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dabe0:	89 04 24             	mov    %eax,(%esp)
 81dabe3:	e8 fe bc 42 00       	call   86068e6 <_ZNK9SkillSlot15get_skill_levelEi>
 81dabe8:	89 c2                	mov    %eax,%edx
 81dabea:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dabed:	88 50 0d             	mov    %dl,0xd(%eax)
 81dabf0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dabf3:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 81dabf7:	84 c0                	test   %al,%al
 81dabf9:	75 2c                	jne    81dac27 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x407>
 81dabfb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dabfe:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81dac02:	0f be d8             	movsbl %al,%ebx
 81dac05:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dac08:	89 04 24             	mov    %eax,(%esp)
 81dac0b:	e8 20 45 05 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81dac10:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81dac14:	89 04 24             	mov    %eax,(%esp)
 81dac17:	e8 0c 89 42 00       	call   8603528 <_ZNK9SkillSlot22get_remain_sp_at_indexE20ENUM_SKILL_TREE_KIND>
 81dac1c:	89 c2                	mov    %eax,%edx
 81dac1e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dac21:	66 89 50 06          	mov    %dx,0x6(%eax)
 81dac25:	eb 79                	jmp    81daca0 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x480>
 81dac27:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dac2a:	89 04 24             	mov    %eax,(%esp)
 81dac2d:	e8 0a 47 05 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81dac32:	83 f8 ff             	cmp    $0xffffffff,%eax
 81dac35:	74 0f                	je     81dac46 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x426>
 81dac37:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dac3a:	89 04 24             	mov    %eax,(%esp)
 81dac3d:	e8 fa 46 05 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81dac42:	85 c0                	test   %eax,%eax
 81dac44:	75 07                	jne    81dac4d <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x42d>
 81dac46:	b8 01 00 00 00       	mov    $0x1,%eax
 81dac4b:	eb 05                	jmp    81dac52 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x432>
 81dac4d:	b8 00 00 00 00       	mov    $0x0,%eax
 81dac52:	84 c0                	test   %al,%al
 81dac54:	74 26                	je     81dac7c <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x45c>
 81dac56:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dac59:	89 04 24             	mov    %eax,(%esp)
 81dac5c:	e8 cf 44 05 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81dac61:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81dac68:	00 
 81dac69:	89 04 24             	mov    %eax,(%esp)
 81dac6c:	e8 81 89 42 00       	call   86035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>
 81dac71:	89 c2                	mov    %eax,%edx
 81dac73:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dac76:	66 89 50 06          	mov    %dx,0x6(%eax)
 81dac7a:	eb 24                	jmp    81daca0 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x480>
 81dac7c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dac7f:	89 04 24             	mov    %eax,(%esp)
 81dac82:	e8 a9 44 05 00       	call   822f130 <_ZNK15CUserCharacInfo18getCurCharacSkillREv>
 81dac87:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81dac8e:	00 
 81dac8f:	89 04 24             	mov    %eax,(%esp)
 81dac92:	e8 5b 89 42 00       	call   86035f2 <_ZNK9SkillSlot23get_remain_sfp_at_indexE20ENUM_SKILL_TREE_KIND>
 81dac97:	89 c2                	mov    %eax,%edx
 81dac99:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dac9c:	66 89 50 06          	mov    %dx,0x6(%eax)
 81daca0:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81daca3:	8b 50 0d             	mov    0xd(%eax),%edx
 81daca6:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81daca9:	89 50 10             	mov    %edx,0x10(%eax)
 81dacac:	8b 45 d8             	mov    -0x28(%ebp),%eax
 81dacaf:	0f b6 50 13          	movzbl 0x13(%eax),%edx
 81dacb3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 81dacb6:	88 50 14             	mov    %dl,0x14(%eax)
 81dacb9:	bb 00 00 00 00       	mov    $0x0,%ebx
 81dacbe:	eb 18                	jmp    81dacd8 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4b8>
 81dacc0:	89 d3                	mov    %edx,%ebx
 81dacc2:	89 c6                	mov    %eax,%esi
 81dacc4:	8d 85 c0 f7 ff ff    	lea    -0x840(%ebp),%eax
 81dacca:	89 04 24             	mov    %eax,(%esp)
 81daccd:	e8 2e 29 05 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81dacd2:	89 f0                	mov    %esi,%eax
 81dacd4:	89 da                	mov    %ebx,%edx
 81dacd6:	eb 10                	jmp    81dace8 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4c8>
 81dacd8:	8d 85 c0 f7 ff ff    	lea    -0x840(%ebp),%eax
 81dacde:	89 04 24             	mov    %eax,(%esp)
 81dace1:	e8 1a 29 05 00       	call   822d600 <_ZN10CInventoryD1Ev>
 81dace6:	eb 1b                	jmp    81dad03 <_ZN22Dispatcher_RefundSkill7processEP5CUserR8MSG_BASER9ParamBase+0x4e3>
 81dace8:	89 d3                	mov    %edx,%ebx
 81dacea:	89 c6                	mov    %eax,%esi
 81dacec:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81dacef:	89 04 24             	mov    %eax,(%esp)
 81dacf2:	e8 e3 90 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81dacf7:	89 f0                	mov    %esi,%eax
 81dacf9:	89 da                	mov    %ebx,%edx
 81dacfb:	89 04 24             	mov    %eax,(%esp)
 81dacfe:	e8 4d 8a 90 00       	call   8ae3750 <_Unwind_Resume>
 81dad03:	8d 45 b8             	lea    -0x48(%ebp),%eax
 81dad06:	89 04 24             	mov    %eax,(%esp)
 81dad09:	e8 cc 90 ea ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 81dad0e:	89 d8                	mov    %ebx,%eax
 81dad10:	81 c4 ac c9 00 00    	add    $0xc9ac,%esp
 81dad16:	5b                   	pop    %ebx
 81dad17:	5e                   	pop    %esi
 81dad18:	5f                   	pop    %edi
 81dad19:	5d                   	pop    %ebp
 81dad1a:	c3                   	ret
 81dad1b:	90                   	nop

```

```c
// Dispatcher_RefundSkill::process @ 0x81da820

/* Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_RefundSkill::process
          (Dispatcher_RefundSkill *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  MSG_BASE MVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  ParamBase PVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  CInventory *pCVar9;
  ParamBase *pPVar10;
  int iVar11;
  int iVar12;
  SkillSlot *pSVar13;
  InventoryMemory local_c983 [49471];
  CInventory local_844 [1979];
  Inven_Item local_89 [2];
  int local_87;
  int local_82;
  vector<int,std::allocator<int>> local_4c [12];
  cMyTrace local_40 [16];
  ParamBase *local_30;
  MSG_BASE *local_2c;
  int local_28;
  char local_21;
  CSkill *local_20;
  
  local_30 = param_3;
  uVar8 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_30 + 0x18) = uVar8;
  if (*(int *)(local_30 + 0x18) < 1) {
    if (*(int *)(local_30 + 0x18) < 0) {
      uVar8 = LineFunc(0x48fa,
                       "virtual int Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_30 + 0x18),0);
    }
    else {
      local_2c = param_2;
      Inven_Item::Inven_Item(local_89);
      Inven_Item::reset(local_89);
      iVar11 = *(int *)(local_2c + 0xd);
      pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
      local_28 = CInventory::GetInvenData(pCVar9,iVar11,local_89);
      if (((local_87 == *(int *)(local_2c + 0xd)) && ((int)(uint)(byte)local_2c[0x13] <= local_82))
         && (-1 < local_28)) {
        std::vector<int,std::allocator<int>>::vector(local_4c);
                    /* try { // try from 081da934 to 081da946 has its CatchHandler @ 081dace8 */
        std::vector<int,std::allocator<int>>::clear(local_4c);
        CInventory::CInventory(local_844);
        InventoryMemory::InventoryMemory(local_c983);
        CInventory::SetInventoryMemory(local_844,local_c983);
        pCVar9 = (CInventory *)CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
                    /* try { // try from 081da985 to 081dac96 has its CatchHandler @ 081dacc0 */
        CInventory::setCopy(local_844,pCVar9);
        local_21 = CInventory::delete_item(local_844,1,local_28,local_2c[0x13],3,0);
        if (local_21 == '\x01') {
          pPVar10 = local_30 + 0x18;
          MVar1 = local_2c[0x13];
          cVar4 = CUserCharacInfo::getCurCharSecondGrowType((CUserCharacInfo *)param_1);
          cVar5 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
          iVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
          iVar12 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
          MVar2 = local_2c[0x12];
          pSVar13 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
          uVar8 = SkillSlot::refund_skill
                            (pSVar13,(uint)(byte)MVar2,iVar12,iVar11,(int)cVar5,(int)cVar4,
                             (uint)(byte)MVar1,(int *)pPVar10);
          *(undefined4 *)(local_30 + 8) = uVar8;
          if ((*(int *)(local_30 + 8) < 0xcd) && (-1 < *(int *)(local_30 + 8))) {
            iVar11 = CUser::delete_item(param_1,0,local_28,*(undefined4 *)(local_2c + 0xd),
                                        local_2c[0x13],3);
            if (iVar11 != 0) {
              MVar1 = local_2c[0x13];
              uVar8 = *(undefined4 *)(local_2c + 0xd);
              cMyTrace::cMyTrace(local_40,
                                 "virtual int Dispatcher_RefundSkill::process(CUser*, MSG_BASE&, ParamBase&)"
                                 ,0x4932,5);
              cMyTrace::operator()
                        (local_40,"delete_item failed - refund skill %d/%d",uVar8,(uint)(byte)MVar1)
              ;
            }
            local_30[5] = (ParamBase)0x0;
            local_20 = (CSkill *)0x0;
            iVar11 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
            iVar12 = G_CDataManager();
            local_20 = (CSkill *)CDataManager::find_skill(iVar12,iVar11);
            if ((local_20 != (CSkill *)0x0) &&
               (cVar4 = CSkill::IsSpecialSkill(local_20), cVar4 != '\0')) {
              local_30[5] = (ParamBase)0x1;
            }
            PVar6 = (ParamBase)
                    CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
            local_30[4] = PVar6;
            *(MSG_BASE *)(local_30 + 0xc) = local_2c[0x12];
            iVar11 = *(int *)(local_30 + 8);
            pSVar13 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
            PVar6 = (ParamBase)SkillSlot::get_skill_level(pSVar13,iVar11);
            local_30[0xd] = PVar6;
            if (local_30[5] == (ParamBase)0x0) {
              PVar6 = local_30[4];
              pSVar13 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1)
              ;
              uVar7 = SkillSlot::get_remain_sp_at_index(pSVar13,(int)(char)PVar6);
              *(undefined2 *)(local_30 + 6) = uVar7;
            }
            else {
              iVar11 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
              if ((iVar11 == -1) ||
                 (iVar11 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1),
                 iVar11 == 0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) {
                pSVar13 = (SkillSlot *)
                          CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
                uVar7 = SkillSlot::get_remain_sfp_at_index(pSVar13,2);
                *(undefined2 *)(local_30 + 6) = uVar7;
              }
              else {
                pSVar13 = (SkillSlot *)
                          CUserCharacInfo::getCurCharacSkillR((CUserCharacInfo *)param_1);
                uVar7 = SkillSlot::get_remain_sfp_at_index(pSVar13,3);
                *(undefined2 *)(local_30 + 6) = uVar7;
              }
            }
            *(undefined4 *)(local_30 + 0x10) = *(undefined4 *)(local_2c + 0xd);
            *(MSG_BASE *)(local_30 + 0x14) = local_2c[0x13];
          }
        }
        else {
          *(undefined4 *)(local_30 + 0x18) = 0x16;
        }
        uVar8 = 0;
                    /* try { // try from 081dace1 to 081dace5 has its CatchHandler @ 081dace8 */
        CInventory::~CInventory(local_844);
        std::vector<int,std::allocator<int>>::~vector(local_4c);
      }
      else {
        *(undefined4 *)(local_30 + 0x18) = 0x16;
        uVar8 = 0;
      }
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}

```

---

## read

```asm
// === 081da6fe Dispatcher_RefundSkill::read  [0x081da6fe-0x81da81f] ===
 81da6fe:	55                   	push   %ebp
 81da6ff:	89 e5                	mov    %esp,%ebp
 81da701:	83 ec 28             	sub    $0x28,%esp
 81da704:	8b 45 10             	mov    0x10(%ebp),%eax
 81da707:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81da70a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da70d:	83 c0 0d             	add    $0xd,%eax
 81da710:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da714:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da717:	89 04 24             	mov    %eax,(%esp)
 81da71a:	e8 d1 29 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81da71f:	83 f0 01             	xor    $0x1,%eax
 81da722:	84 c0                	test   %al,%al
 81da724:	74 29                	je     81da74f <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x51>
 81da726:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da72d:	00 
 81da72e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da735:	00 
 81da736:	c7 44 24 04 60 23 bd 	movl   $0x8bd2360,0x4(%esp)
 81da73d:	08 
 81da73e:	c7 04 24 e5 48 00 00 	movl   $0x48e5,(%esp)
 81da745:	e8 8d 61 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da74a:	e9 ce 00 00 00       	jmp    81da81d <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81da74f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da752:	83 c0 11             	add    $0x11,%eax
 81da755:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da759:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da75c:	89 04 24             	mov    %eax,(%esp)
 81da75f:	e8 be 27 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81da764:	83 f0 01             	xor    $0x1,%eax
 81da767:	84 c0                	test   %al,%al
 81da769:	74 29                	je     81da794 <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x96>
 81da76b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da772:	00 
 81da773:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da77a:	00 
 81da77b:	c7 44 24 04 60 23 bd 	movl   $0x8bd2360,0x4(%esp)
 81da782:	08 
 81da783:	c7 04 24 e7 48 00 00 	movl   $0x48e7,(%esp)
 81da78a:	e8 48 61 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da78f:	e9 89 00 00 00       	jmp    81da81d <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81da794:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da797:	83 c0 12             	add    $0x12,%eax
 81da79a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da79e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da7a1:	89 04 24             	mov    %eax,(%esp)
 81da7a4:	e8 c7 27 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81da7a9:	83 f0 01             	xor    $0x1,%eax
 81da7ac:	84 c0                	test   %al,%al
 81da7ae:	74 26                	je     81da7d6 <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0xd8>
 81da7b0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da7b7:	00 
 81da7b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da7bf:	00 
 81da7c0:	c7 44 24 04 60 23 bd 	movl   $0x8bd2360,0x4(%esp)
 81da7c7:	08 
 81da7c8:	c7 04 24 e9 48 00 00 	movl   $0x48e9,(%esp)
 81da7cf:	e8 03 61 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da7d4:	eb 47                	jmp    81da81d <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81da7d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81da7d9:	83 c0 13             	add    $0x13,%eax
 81da7dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81da7e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 81da7e3:	89 04 24             	mov    %eax,(%esp)
 81da7e6:	e8 85 27 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81da7eb:	83 f0 01             	xor    $0x1,%eax
 81da7ee:	84 c0                	test   %al,%al
 81da7f0:	74 26                	je     81da818 <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x11a>
 81da7f2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81da7f9:	00 
 81da7fa:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81da801:	00 
 81da802:	c7 44 24 04 60 23 bd 	movl   $0x8bd2360,0x4(%esp)
 81da809:	08 
 81da80a:	c7 04 24 eb 48 00 00 	movl   $0x48eb,(%esp)
 81da811:	e8 c1 60 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81da816:	eb 05                	jmp    81da81d <_ZN22Dispatcher_RefundSkill4readER9PacketBufR8MSG_BASE+0x11f>
 81da818:	b8 00 00 00 00       	mov    $0x0,%eax
 81da81d:	c9                   	leave
 81da81e:	c3                   	ret
 81da81f:	90                   	nop

```

```c
// Dispatcher_RefundSkill::read @ 0x81da6fe

/* Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_RefundSkill::read(Dispatcher_RefundSkill *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x12));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x13));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x48eb,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x48e9,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0x48e7,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0x48e5,"virtual int Dispatcher_RefundSkill::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081dae0a Dispatcher_RefundSkill::send  [0x081dae0a-0x81dafa3] ===
 81dae0a:	55                   	push   %ebp
 81dae0b:	89 e5                	mov    %esp,%ebp
 81dae0d:	56                   	push   %esi
 81dae0e:	53                   	push   %ebx
 81dae0f:	83 ec 20             	sub    $0x20,%esp
 81dae12:	8b 45 10             	mov    0x10(%ebp),%eax
 81dae15:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81dae18:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dae1b:	8b 40 18             	mov    0x18(%eax),%eax
 81dae1e:	85 c0                	test   %eax,%eax
 81dae20:	0f 85 56 01 00 00    	jne    81daf7c <_ZN22Dispatcher_RefundSkill4sendEP5CUserR9ParamBase+0x172>
 81dae26:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dae29:	89 04 24             	mov    %eax,(%esp)
 81dae2c:	e8 1b 2f 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dae31:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dae34:	89 04 24             	mov    %eax,(%esp)
 81dae37:	e8 aa 0a ef ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 81dae3c:	c7 44 24 08 ab 01 00 	movl   $0x1ab,0x8(%esp)
 81dae43:	00 
 81dae44:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dae4b:	00 
 81dae4c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dae4f:	89 04 24             	mov    %eax,(%esp)
 81dae52:	e8 a5 0a ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dae57:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dae5e:	00 
 81dae5f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dae62:	89 04 24             	mov    %eax,(%esp)
 81dae65:	e8 b6 0a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dae6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dae6d:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 81dae71:	0f be c0             	movsbl %al,%eax
 81dae74:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dae78:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dae7b:	89 04 24             	mov    %eax,(%esp)
 81dae7e:	e8 9d 0a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dae83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dae86:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 81dae8a:	0f be c0             	movsbl %al,%eax
 81dae8d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dae91:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81dae94:	89 04 24             	mov    %eax,(%esp)
 81dae97:	e8 84 0a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dae9c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81dae9f:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 81daea3:	0f b7 c0             	movzwl %ax,%eax
 81daea6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daeaa:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daead:	89 04 24             	mov    %eax,(%esp)
 81daeb0:	e8 ef ef ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81daeb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81daeb8:	8b 40 08             	mov    0x8(%eax),%eax
 81daebb:	0f b6 c0             	movzbl %al,%eax
 81daebe:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daec2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daec5:	89 04 24             	mov    %eax,(%esp)
 81daec8:	e8 53 0a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81daecd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81daed0:	0f b6 40 0c          	movzbl 0xc(%eax),%eax
 81daed4:	0f b6 c0             	movzbl %al,%eax
 81daed7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daedb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daede:	89 04 24             	mov    %eax,(%esp)
 81daee1:	e8 3a 0a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81daee6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81daee9:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81daeed:	0f b6 c0             	movzbl %al,%eax
 81daef0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daef4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daef7:	89 04 24             	mov    %eax,(%esp)
 81daefa:	e8 21 0a ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81daeff:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81daf02:	8b 40 10             	mov    0x10(%eax),%eax
 81daf05:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daf09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daf0c:	89 04 24             	mov    %eax,(%esp)
 81daf0f:	e8 28 0a ef ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81daf14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81daf17:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 81daf1b:	0f b6 c0             	movzbl %al,%eax
 81daf1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daf22:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daf25:	89 04 24             	mov    %eax,(%esp)
 81daf28:	e8 f3 09 ef ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81daf2d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81daf34:	00 
 81daf35:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daf38:	89 04 24             	mov    %eax,(%esp)
 81daf3b:	e8 18 0a ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81daf40:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daf43:	89 44 24 04          	mov    %eax,0x4(%esp)
 81daf47:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daf4a:	89 04 24             	mov    %eax,(%esp)
 81daf4d:	e8 68 d6 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81daf52:	eb 1b                	jmp    81daf6f <_ZN22Dispatcher_RefundSkill4sendEP5CUserR9ParamBase+0x165>
 81daf54:	89 d3                	mov    %edx,%ebx
 81daf56:	89 c6                	mov    %eax,%esi
 81daf58:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daf5b:	89 04 24             	mov    %eax,(%esp)
 81daf5e:	e8 1d 2f 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81daf63:	89 f0                	mov    %esi,%eax
 81daf65:	89 da                	mov    %ebx,%edx
 81daf67:	89 04 24             	mov    %eax,(%esp)
 81daf6a:	e8 e1 87 90 00       	call   8ae3750 <_Unwind_Resume>
 81daf6f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81daf72:	89 04 24             	mov    %eax,(%esp)
 81daf75:	e8 06 2f 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81daf7a:	eb 20                	jmp    81daf9c <_ZN22Dispatcher_RefundSkill4sendEP5CUserR9ParamBase+0x192>
 81daf7c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81daf7f:	8b 40 18             	mov    0x18(%eax),%eax
 81daf82:	0f b6 c0             	movzbl %al,%eax
 81daf85:	89 44 24 08          	mov    %eax,0x8(%esp)
 81daf89:	c7 44 24 04 ab 01 00 	movl   $0x1ab,0x4(%esp)
 81daf90:	00 
 81daf91:	8b 45 0c             	mov    0xc(%ebp),%eax
 81daf94:	89 04 24             	mov    %eax,(%esp)
 81daf97:	e8 a6 0f 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81daf9c:	83 c4 20             	add    $0x20,%esp
 81daf9f:	5b                   	pop    %ebx
 81dafa0:	5e                   	pop    %esi
 81dafa1:	5d                   	pop    %ebp
 81dafa2:	c3                   	ret
 81dafa3:	90                   	nop

```

```c
// Dispatcher_RefundSkill::send @ 0x81dae0a

/* Dispatcher_RefundSkill::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_RefundSkill::send(Dispatcher_RefundSkill *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 0x18) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081dae37 to 081daf51 has its CatchHandler @ 081daf54 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ab);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[5]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[4]);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 6));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(uint *)(local_10 + 8) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[0xc]);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[0xd]);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0x10));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)(byte)local_10[0x14]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ab,*(uint *)(param_2 + 0x18) & 0xff);
  }
  return;
}

```

