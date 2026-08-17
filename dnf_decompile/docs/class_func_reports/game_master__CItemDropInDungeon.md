# game_master__CItemDropInDungeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084abce8 game_master::CItemDropInDungeon::execute  [0x084abce8-0x84abdb3] ===
 84abce8:	55                   	push   %ebp
 84abce9:	89 e5                	mov    %esp,%ebp
 84abceb:	53                   	push   %ebx
 84abcec:	83 ec 24             	sub    $0x24,%esp
 84abcef:	8b 45 08             	mov    0x8(%ebp),%eax
 84abcf2:	8b 58 08             	mov    0x8(%eax),%ebx
 84abcf5:	e8 a1 04 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84abcfa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84abcfe:	89 04 24             	mov    %eax,(%esp)
 84abd01:	e8 2c 3d eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84abd06:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84abd09:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84abd0d:	0f 84 93 00 00 00    	je     84abda6 <_ZN11game_master18CItemDropInDungeon7executeEv+0xbe>
 84abd13:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84abd16:	89 04 24             	mov    %eax,(%esp)
 84abd19:	e8 dc 55 c4 ff       	call   80f12fa <_ZNK5CItem12is_stackableEv>
 84abd1e:	84 c0                	test   %al,%al
 84abd20:	75 2e                	jne    84abd50 <_ZN11game_master18CItemDropInDungeon7executeEv+0x68>
 84abd22:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84abd25:	8b 00                	mov    (%eax),%eax
 84abd27:	83 c0 0c             	add    $0xc,%eax
 84abd2a:	8b 10                	mov    (%eax),%edx
 84abd2c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84abd2f:	89 04 24             	mov    %eax,(%esp)
 84abd32:	ff d2                	call   *%edx
 84abd34:	83 f8 16             	cmp    $0x16,%eax
 84abd37:	74 17                	je     84abd50 <_ZN11game_master18CItemDropInDungeon7executeEv+0x68>
 84abd39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84abd3c:	8b 00                	mov    (%eax),%eax
 84abd3e:	83 c0 0c             	add    $0xc,%eax
 84abd41:	8b 10                	mov    (%eax),%edx
 84abd43:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84abd46:	89 04 24             	mov    %eax,(%esp)
 84abd49:	ff d2                	call   *%edx
 84abd4b:	83 f8 17             	cmp    $0x17,%eax
 84abd4e:	75 07                	jne    84abd57 <_ZN11game_master18CItemDropInDungeon7executeEv+0x6f>
 84abd50:	b8 01 00 00 00       	mov    $0x1,%eax
 84abd55:	eb 05                	jmp    84abd5c <_ZN11game_master18CItemDropInDungeon7executeEv+0x74>
 84abd57:	b8 00 00 00 00       	mov    $0x0,%eax
 84abd5c:	84 c0                	test   %al,%al
 84abd5e:	75 49                	jne    84abda9 <_ZN11game_master18CItemDropInDungeon7executeEv+0xc1>
 84abd60:	8b 45 08             	mov    0x8(%ebp),%eax
 84abd63:	89 04 24             	mov    %eax,(%esp)
 84abd66:	e8 4f 82 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84abd6b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84abd6e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84abd72:	74 38                	je     84abdac <_ZN11game_master18CItemDropInDungeon7executeEv+0xc4>
 84abd74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84abd77:	89 04 24             	mov    %eax,(%esp)
 84abd7a:	e8 cd 93 1a 00       	call   865514c <_ZN5CUser8GetPartyEv>
 84abd7f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84abd82:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84abd86:	74 25                	je     84abdad <_ZN11game_master18CItemDropInDungeon7executeEv+0xc5>
 84abd88:	8b 45 08             	mov    0x8(%ebp),%eax
 84abd8b:	8b 40 08             	mov    0x8(%eax),%eax
 84abd8e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84abd92:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84abd95:	89 44 24 04          	mov    %eax,0x4(%esp)
 84abd99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84abd9c:	89 04 24             	mov    %eax,(%esp)
 84abd9f:	e8 02 b6 0f 00       	call   85a73a6 <_ZN6CParty12drop_item_gmEP5CUserj>
 84abda4:	eb 07                	jmp    84abdad <_ZN11game_master18CItemDropInDungeon7executeEv+0xc5>
 84abda6:	90                   	nop
 84abda7:	eb 04                	jmp    84abdad <_ZN11game_master18CItemDropInDungeon7executeEv+0xc5>
 84abda9:	90                   	nop
 84abdaa:	eb 01                	jmp    84abdad <_ZN11game_master18CItemDropInDungeon7executeEv+0xc5>
 84abdac:	90                   	nop
 84abdad:	83 c4 24             	add    $0x24,%esp
 84abdb0:	5b                   	pop    %ebx
 84abdb1:	5d                   	pop    %ebp
 84abdb2:	c3                   	ret
 84abdb3:	90                   	nop

```

```c
// game_master::CItemDropInDungeon::execute @ 0x84abce8

/* game_master::CItemDropInDungeon::execute() */

void __thiscall game_master::CItemDropInDungeon::execute(CItemDropInDungeon *this)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  CItem *this_01;
  int iVar3;
  CUser *this_02;
  CParty *this_03;
  
  iVar3 = *(int *)(this + 8);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,iVar3);
  if (this_01 != (CItem *)0x0) {
    cVar2 = CItem::is_stackable(this_01);
    if (((cVar2 == '\0') && (iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01), iVar3 != 0x16))
       && (iVar3 = (**(code **)(*(int *)this_01 + 0xc))(this_01), iVar3 != 0x17)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((!bVar1) &&
        (this_02 = (CUser *)CCommand::GetUser((CCommand *)this), this_02 != (CUser *)0x0)) &&
       (this_03 = (CParty *)CUser::GetParty(this_02), this_03 != (CParty *)0x0)) {
      CParty::drop_item_gm(this_03,this_02,*(uint *)(this + 8));
    }
  }
  return;
}

```

---

## parse

```asm
// === 084abcb0 game_master::CItemDropInDungeon::parse  [0x084abcb0-0x84abce7] ===
 84abcb0:	55                   	push   %ebp
 84abcb1:	89 e5                	mov    %esp,%ebp
 84abcb3:	83 ec 18             	sub    $0x18,%esp
 84abcb6:	8b 45 08             	mov    0x8(%ebp),%eax
 84abcb9:	8b 40 04             	mov    0x4(%eax),%eax
 84abcbc:	83 c0 0c             	add    $0xc,%eax
 84abcbf:	89 04 24             	mov    %eax,(%esp)
 84abcc2:	e8 a1 33 df ff       	call   829f068 <_Z4trimRSs>
 84abcc7:	8b 45 08             	mov    0x8(%ebp),%eax
 84abcca:	8b 40 04             	mov    0x4(%eax),%eax
 84abccd:	83 c0 0c             	add    $0xc,%eax
 84abcd0:	89 04 24             	mov    %eax,(%esp)
 84abcd3:	e8 18 a8 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84abcd8:	89 04 24             	mov    %eax,(%esp)
 84abcdb:	e8 10 2a bd ff       	call   807e6f0 <atoi@plt>
 84abce0:	8b 55 08             	mov    0x8(%ebp),%edx
 84abce3:	89 42 08             	mov    %eax,0x8(%edx)
 84abce6:	c9                   	leave
 84abce7:	c3                   	ret

```

```c
// game_master::CItemDropInDungeon::parse @ 0x84abcb0

/* game_master::CItemDropInDungeon::parse() */

void __thiscall game_master::CItemDropInDungeon::parse(CItemDropInDungeon *this)

{
  char *__nptr;
  int iVar1;
  
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  *(int *)(this + 8) = iVar1;
  return;
}

```

