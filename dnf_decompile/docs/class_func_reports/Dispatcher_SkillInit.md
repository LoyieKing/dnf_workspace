# Dispatcher_SkillInit

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 081e5a2c Dispatcher_SkillInit::check_error  [0x081e5a2c-0x81e5aeb] ===
 81e5a2c:	55                   	push   %ebp
 81e5a2d:	89 e5                	mov    %esp,%ebp
 81e5a2f:	83 ec 28             	sub    $0x28,%esp
 81e5a32:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e5a36:	75 0a                	jne    81e5a42 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x16>
 81e5a38:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e5a3d:	e9 a8 00 00 00       	jmp    81e5aea <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xbe>
 81e5a42:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5a45:	89 04 24             	mov    %eax,(%esp)
 81e5a48:	e8 3f 49 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e5a4d:	83 f8 03             	cmp    $0x3,%eax
 81e5a50:	0f 95 c0             	setne  %al
 81e5a53:	84 c0                	test   %al,%al
 81e5a55:	74 0a                	je     81e5a61 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x35>
 81e5a57:	b8 07 00 00 00       	mov    $0x7,%eax
 81e5a5c:	e9 89 00 00 00       	jmp    81e5aea <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xbe>
 81e5a61:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5a64:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e5a67:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5a6a:	89 04 24             	mov    %eax,(%esp)
 81e5a6d:	e8 ca 98 04 00       	call   822f33c <_ZNK15CUserCharacInfo26GetCurCharacSkillTreeIndexEv>
 81e5a72:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5a75:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5a78:	83 f8 ff             	cmp    $0xffffffff,%eax
 81e5a7b:	74 07                	je     81e5a84 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x58>
 81e5a7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5a80:	85 c0                	test   %eax,%eax
 81e5a82:	75 1b                	jne    81e5a9f <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x73>
 81e5a84:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5a87:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e5a8b:	3c 01                	cmp    $0x1,%al
 81e5a8d:	75 07                	jne    81e5a96 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x6a>
 81e5a8f:	b8 13 00 00 00       	mov    $0x13,%eax
 81e5a94:	eb 54                	jmp    81e5aea <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xbe>
 81e5a96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5a99:	c6 40 0d 00          	movb   $0x0,0xd(%eax)
 81e5a9d:	eb 19                	jmp    81e5ab8 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x8c>
 81e5a9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5aa2:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e5aa6:	3c 01                	cmp    $0x1,%al
 81e5aa8:	74 07                	je     81e5ab1 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0x85>
 81e5aaa:	b8 13 00 00 00       	mov    $0x13,%eax
 81e5aaf:	eb 39                	jmp    81e5aea <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xbe>
 81e5ab1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5ab4:	c6 40 0d 01          	movb   $0x1,0xd(%eax)
 81e5ab8:	e8 ea 48 ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e5abd:	89 04 24             	mov    %eax,(%esp)
 81e5ac0:	e8 59 e9 04 00       	call   823441e <_ZNK9GameWorld20IsPvPSkilTreeChannelEv>
 81e5ac5:	84 c0                	test   %al,%al
 81e5ac7:	74 1c                	je     81e5ae5 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xb9>
 81e5ac9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5acc:	89 04 24             	mov    %eax,(%esp)
 81e5acf:	e8 76 93 fb ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 81e5ad4:	83 f8 00             	cmp    $0x0,%eax
 81e5ad7:	0f 9d c0             	setge  %al
 81e5ada:	84 c0                	test   %al,%al
 81e5adc:	75 07                	jne    81e5ae5 <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xb9>
 81e5ade:	b8 0c 00 00 00       	mov    $0xc,%eax
 81e5ae3:	eb 05                	jmp    81e5aea <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE+0xbe>
 81e5ae5:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5aea:	c9                   	leave
 81e5aeb:	c3                   	ret

```

```c
// Dispatcher_SkillInit::check_error @ 0x81e5a2c

/* Dispatcher_SkillInit::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SkillInit::check_error(Dispatcher_SkillInit *this,CUser *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  GameWorld *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      iVar3 = CUserCharacInfo::GetCurCharacSkillTreeIndex((CUserCharacInfo *)param_1);
      if ((iVar3 == -1) || (iVar3 == 0)) {
        if (param_2[0xd] == (MSG_BASE)0x1) {
          return 0x13;
        }
        param_2[0xd] = (MSG_BASE)0x0;
      }
      else {
        if (param_2[0xd] != (MSG_BASE)0x1) {
          return 0x13;
        }
        param_2[0xd] = (MSG_BASE)0x1;
      }
      this_00 = (GameWorld *)G_GameWorld();
      cVar1 = GameWorld::IsPvPSkilTreeChannel(this_00);
      if ((cVar1 != '\0') &&
         (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), iVar3 < 0)) {
        return 0xc;
      }
      uVar2 = 0;
    }
    else {
      uVar2 = 7;
    }
  }
  return uVar2;
}

```

---

## process

```asm
// === 081e598a Dispatcher_SkillInit::process  [0x081e598a-0x81e5a2b] ===
 81e598a:	55                   	push   %ebp
 81e598b:	89 e5                	mov    %esp,%ebp
 81e598d:	83 ec 28             	sub    $0x28,%esp
 81e5990:	8b 45 14             	mov    0x14(%ebp),%eax
 81e5993:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e5996:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5999:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e599d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e59a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e59a4:	8b 45 08             	mov    0x8(%ebp),%eax
 81e59a7:	89 04 24             	mov    %eax,(%esp)
 81e59aa:	e8 7d 00 00 00       	call   81e5a2c <_ZN20Dispatcher_SkillInit11check_errorEP5CUserR8MSG_BASE>
 81e59af:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81e59b2:	89 42 04             	mov    %eax,0x4(%edx)
 81e59b5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e59b8:	8b 40 04             	mov    0x4(%eax),%eax
 81e59bb:	85 c0                	test   %eax,%eax
 81e59bd:	7e 07                	jle    81e59c6 <_ZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81e59bf:	b8 00 00 00 00       	mov    $0x0,%eax
 81e59c4:	eb 63                	jmp    81e5a29 <_ZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBase+0x9f>
 81e59c6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e59c9:	8b 40 04             	mov    0x4(%eax),%eax
 81e59cc:	85 c0                	test   %eax,%eax
 81e59ce:	79 28                	jns    81e59f8 <_ZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBase+0x6e>
 81e59d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e59d3:	8b 40 04             	mov    0x4(%eax),%eax
 81e59d6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e59dd:	00 
 81e59de:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e59e2:	c7 44 24 04 40 0f bd 	movl   $0x8bd0f40,0x4(%esp)
 81e59e9:	08 
 81e59ea:	c7 04 24 3d 5f 00 00 	movl   $0x5f3d,(%esp)
 81e59f1:	e8 e1 ae 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e59f6:	eb 31                	jmp    81e5a29 <_ZN20Dispatcher_SkillInit7processEP5CUserR8MSG_BASER9ParamBase+0x9f>
 81e59f8:	8b 45 10             	mov    0x10(%ebp),%eax
 81e59fb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e59fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5a01:	0f b6 50 0d          	movzbl 0xd(%eax),%edx
 81e5a05:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5a08:	88 50 08             	mov    %dl,0x8(%eax)
 81e5a0b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5a0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e5a12:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5a15:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5a19:	8b 45 08             	mov    0x8(%ebp),%eax
 81e5a1c:	89 04 24             	mov    %eax,(%esp)
 81e5a1f:	e8 b8 01 00 00       	call   81e5bdc <_ZN20Dispatcher_SkillInit18process_skill_initEP5CUserR9ParamBase>
 81e5a24:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5a29:	c9                   	leave
 81e5a2a:	c3                   	ret
 81e5a2b:	90                   	nop

```

```c
// Dispatcher_SkillInit::process @ 0x81e598a

/* Dispatcher_SkillInit::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_SkillInit::process
          (Dispatcher_SkillInit *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x5f3d,
                       "virtual int Dispatcher_SkillInit::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(param_3 + 4),0);
    }
    else {
      *(MSG_BASE *)(param_3 + 8) = param_2[0xd];
      process_skill_init(this,param_1,param_3);
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

## process_skill_init

```asm
// === 081e5bdc Dispatcher_SkillInit::process_skill_init  [0x081e5bdc-0x81e5c87] ===
 81e5bdc:	55                   	push   %ebp
 81e5bdd:	89 e5                	mov    %esp,%ebp
 81e5bdf:	83 ec 28             	sub    $0x28,%esp
 81e5be2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e5be6:	0f 84 98 00 00 00    	je     81e5c84 <_ZN20Dispatcher_SkillInit18process_skill_initEP5CUserR9ParamBase+0xa8>
 81e5bec:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5bef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e5bf2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e5bf5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81e5bf9:	0f be c0             	movsbl %al,%eax
 81e5bfc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5bff:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5c02:	89 04 24             	mov    %eax,(%esp)
 81e5c05:	e8 36 95 04 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81e5c0a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e5c0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e5c11:	89 04 24             	mov    %eax,(%esp)
 81e5c14:	e8 77 f1 41 00       	call   8604d90 <_ZN9SkillSlot16clear_all_skillsE20ENUM_SKILL_TREE_KIND>
 81e5c19:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5c1c:	89 04 24             	mov    %eax,(%esp)
 81e5c1f:	e8 1c 95 04 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81e5c24:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e5c27:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e5c2b:	89 04 24             	mov    %eax,(%esp)
 81e5c2e:	e8 fb 91 04 00       	call   822ee2e <_ZN9SkillSlot10set_parentEP5CUser>
 81e5c33:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5c36:	89 04 24             	mov    %eax,(%esp)
 81e5c39:	e8 02 95 04 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81e5c3e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e5c41:	89 54 24 08          	mov    %edx,0x8(%esp)
 81e5c45:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e5c4c:	00 
 81e5c4d:	89 04 24             	mov    %eax,(%esp)
 81e5c50:	e8 cb 24 42 00       	call   8608120 <_ZN9SkillSlot9InitSkillEb20ENUM_SKILL_TREE_KIND>
 81e5c55:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5c58:	89 04 24             	mov    %eax,(%esp)
 81e5c5b:	e8 e0 94 04 00       	call   822f140 <_ZN15CUserCharacInfo18getCurCharacSkillWEv>
 81e5c60:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81e5c63:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e5c67:	89 04 24             	mov    %eax,(%esp)
 81e5c6a:	e8 87 30 42 00       	call   8608cf6 <_ZN9SkillSlot15resetComboSkillE20ENUM_SKILL_TREE_KIND>
 81e5c6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5c76:	00 
 81e5c77:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5c7a:	89 04 24             	mov    %eax,(%esp)
 81e5c7d:	e8 88 d2 4a 00       	call   8692f0a <_ZN5CUser16setComboSkillSetEb>
 81e5c82:	eb 01                	jmp    81e5c85 <_ZN20Dispatcher_SkillInit18process_skill_initEP5CUserR9ParamBase+0xa9>
 81e5c84:	90                   	nop
 81e5c85:	c9                   	leave
 81e5c86:	c3                   	ret
 81e5c87:	90                   	nop

```

```c
// Dispatcher_SkillInit::process_skill_init @ 0x81e5bdc

/* Dispatcher_SkillInit::process_skill_init(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SkillInit::process_skill_init
          (Dispatcher_SkillInit *this,CUser *param_1,ParamBase *param_2)

{
  int iVar1;
  SkillSlot *pSVar2;
  
  if (param_1 != (CUser *)0x0) {
    iVar1 = (int)(char)param_2[8];
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::clear_all_skills(pSVar2,iVar1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::set_parent(pSVar2,param_1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::InitSkill(pSVar2,0,iVar1);
    pSVar2 = (SkillSlot *)CUserCharacInfo::getCurCharacSkillW((CUserCharacInfo *)param_1);
    SkillSlot::resetComboSkill(pSVar2,iVar1);
    CUser::setComboSkillSet(param_1,true);
  }
  return;
}

```

---

## read

```asm
// === 081e5934 Dispatcher_SkillInit::read  [0x081e5934-0x81e5989] ===
 81e5934:	55                   	push   %ebp
 81e5935:	89 e5                	mov    %esp,%ebp
 81e5937:	83 ec 28             	sub    $0x28,%esp
 81e593a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e593d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5940:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5943:	83 c0 0d             	add    $0xd,%eax
 81e5946:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e594a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e594d:	89 04 24             	mov    %eax,(%esp)
 81e5950:	e8 cd 75 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e5955:	83 f0 01             	xor    $0x1,%eax
 81e5958:	84 c0                	test   %al,%al
 81e595a:	74 26                	je     81e5982 <_ZN20Dispatcher_SkillInit4readER9PacketBufR8MSG_BASE+0x4e>
 81e595c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e5963:	00 
 81e5964:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e596b:	00 
 81e596c:	c7 44 24 04 a0 0f bd 	movl   $0x8bd0fa0,0x4(%esp)
 81e5973:	08 
 81e5974:	c7 04 24 26 5f 00 00 	movl   $0x5f26,(%esp)
 81e597b:	e8 57 af 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e5980:	eb 05                	jmp    81e5987 <_ZN20Dispatcher_SkillInit4readER9PacketBufR8MSG_BASE+0x53>
 81e5982:	b8 00 00 00 00       	mov    $0x0,%eax
 81e5987:	c9                   	leave
 81e5988:	c3                   	ret
 81e5989:	90                   	nop

```

```c
// Dispatcher_SkillInit::read @ 0x81e5934

/* Dispatcher_SkillInit::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_SkillInit::read(Dispatcher_SkillInit *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    uVar2 = 0;
  }
  else {
    uVar2 = LineFunc(0x5f26,"virtual int Dispatcher_SkillInit::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e5aec Dispatcher_SkillInit::send  [0x081e5aec-0x81e5bdb] ===
 81e5aec:	55                   	push   %ebp
 81e5aed:	89 e5                	mov    %esp,%ebp
 81e5aef:	56                   	push   %esi
 81e5af0:	53                   	push   %ebx
 81e5af1:	83 ec 20             	sub    $0x20,%esp
 81e5af4:	8b 45 10             	mov    0x10(%ebp),%eax
 81e5af7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e5afa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5afd:	8b 40 04             	mov    0x4(%eax),%eax
 81e5b00:	85 c0                	test   %eax,%eax
 81e5b02:	0f 85 ac 00 00 00    	jne    81e5bb4 <_ZN20Dispatcher_SkillInit4sendEP5CUserR9ParamBase+0xc8>
 81e5b08:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b0b:	89 04 24             	mov    %eax,(%esp)
 81e5b0e:	e8 39 82 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e5b13:	c7 44 24 08 ec 01 00 	movl   $0x1ec,0x8(%esp)
 81e5b1a:	00 
 81e5b1b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5b22:	00 
 81e5b23:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b26:	89 04 24             	mov    %eax,(%esp)
 81e5b29:	e8 ce 5d ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e5b2e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5b35:	00 
 81e5b36:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b39:	89 04 24             	mov    %eax,(%esp)
 81e5b3c:	e8 df 5d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5b41:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5b44:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 81e5b48:	0f be c0             	movsbl %al,%eax
 81e5b4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5b4f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b52:	89 04 24             	mov    %eax,(%esp)
 81e5b55:	e8 c6 5d ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e5b5a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e5b61:	00 
 81e5b62:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b65:	89 04 24             	mov    %eax,(%esp)
 81e5b68:	e8 eb 5d ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e5b6d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b70:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e5b74:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5b77:	89 04 24             	mov    %eax,(%esp)
 81e5b7a:	e8 3b 2a 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e5b7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5b82:	89 04 24             	mov    %eax,(%esp)
 81e5b85:	e8 e0 68 48 00       	call   866c46a <_ZN5CUser15send_skill_infoEv>
 81e5b8a:	eb 1b                	jmp    81e5ba7 <_ZN20Dispatcher_SkillInit4sendEP5CUserR9ParamBase+0xbb>
 81e5b8c:	89 d3                	mov    %edx,%ebx
 81e5b8e:	89 c6                	mov    %eax,%esi
 81e5b90:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5b93:	89 04 24             	mov    %eax,(%esp)
 81e5b96:	e8 e5 82 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5b9b:	89 f0                	mov    %esi,%eax
 81e5b9d:	89 da                	mov    %ebx,%edx
 81e5b9f:	89 04 24             	mov    %eax,(%esp)
 81e5ba2:	e8 a9 db 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e5ba7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e5baa:	89 04 24             	mov    %eax,(%esp)
 81e5bad:	e8 ce 82 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e5bb2:	eb 20                	jmp    81e5bd4 <_ZN20Dispatcher_SkillInit4sendEP5CUserR9ParamBase+0xe8>
 81e5bb4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e5bb7:	8b 40 04             	mov    0x4(%eax),%eax
 81e5bba:	0f b6 c0             	movzbl %al,%eax
 81e5bbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e5bc1:	c7 44 24 04 ec 01 00 	movl   $0x1ec,0x4(%esp)
 81e5bc8:	00 
 81e5bc9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e5bcc:	89 04 24             	mov    %eax,(%esp)
 81e5bcf:	e8 6e 63 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e5bd4:	83 c4 20             	add    $0x20,%esp
 81e5bd7:	5b                   	pop    %ebx
 81e5bd8:	5e                   	pop    %esi
 81e5bd9:	5d                   	pop    %ebp
 81e5bda:	c3                   	ret
 81e5bdb:	90                   	nop

```

```c
// Dispatcher_SkillInit::send @ 0x81e5aec

/* Dispatcher_SkillInit::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_SkillInit::send(Dispatcher_SkillInit *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e5b29 to 081e5b89 has its CatchHandler @ 081e5b8c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1ec);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[8]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    CUser::send_skill_info(param_1);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1ec,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

