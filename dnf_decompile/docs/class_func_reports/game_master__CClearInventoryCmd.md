# game_master__CClearInventoryCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084aaef8 game_master::CClearInventoryCmd::execute  [0x084aaef8-0x84aafaf] ===
 84aaef8:	55                   	push   %ebp
 84aaef9:	89 e5                	mov    %esp,%ebp
 84aaefb:	83 ec 38             	sub    $0x38,%esp
 84aaefe:	8b 45 08             	mov    0x8(%ebp),%eax
 84aaf01:	89 04 24             	mov    %eax,(%esp)
 84aaf04:	e8 b1 90 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aaf09:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84aaf0c:	c7 45 f4 03 00 00 00 	movl   $0x3,-0xc(%ebp)
 84aaf13:	eb 26                	jmp    84aaf3b <_ZN11game_master18CClearInventoryCmd7executeEv+0x43>
 84aaf15:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aaf18:	89 04 24             	mov    %eax,(%esp)
 84aaf1b:	e8 6e f3 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84aaf20:	8b 90 50 06 00 00    	mov    0x650(%eax),%edx
 84aaf26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aaf29:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84aaf2c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84aaf2f:	89 04 24             	mov    %eax,(%esp)
 84aaf32:	e8 a1 08 c2 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 84aaf37:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84aaf3b:	81 7d f4 37 01 00 00 	cmpl   $0x137,-0xc(%ebp)
 84aaf42:	0f 9e c0             	setle  %al
 84aaf45:	84 c0                	test   %al,%al
 84aaf47:	75 cc                	jne    84aaf15 <_ZN11game_master18CClearInventoryCmd7executeEv+0x1d>
 84aaf49:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aaf50:	00 
 84aaf51:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aaf54:	89 04 24             	mov    %eax,(%esp)
 84aaf57:	e8 10 2c 1b 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 84aaf5c:	83 f0 01             	xor    $0x1,%eax
 84aaf5f:	84 c0                	test   %al,%al
 84aaf61:	74 4b                	je     84aafae <_ZN11game_master18CClearInventoryCmd7executeEv+0xb6>
 84aaf63:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84aaf66:	89 04 24             	mov    %eax,(%esp)
 84aaf69:	e8 00 f4 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84aaf6e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84aaf75:	00 
 84aaf76:	89 04 24             	mov    %eax,(%esp)
 84aaf79:	e8 cd e0 c5 ff       	call   810904b <_Z14NumberToStringji>
 84aaf7e:	89 44 24 14          	mov    %eax,0x14(%esp)
 84aaf82:	c7 44 24 10 58 fb c7 	movl   $0x8c7fb58,0x10(%esp)
 84aaf89:	08 
 84aaf8a:	c7 44 24 0c 3b 06 00 	movl   $0x63b,0xc(%esp)
 84aaf91:	00 
 84aaf92:	c7 44 24 08 80 13 c8 	movl   $0x8c81380,0x8(%esp)
 84aaf99:	08 
 84aaf9a:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84aafa1:	08 
 84aafa2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84aafa9:	e8 5c 8c 62 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84aafae:	c9                   	leave
 84aafaf:	c3                   	ret

```

```c
// game_master::CClearInventoryCmd::execute @ 0x84aaef8

/* game_master::CClearInventoryCmd::execute() */

void __thiscall game_master::CClearInventoryCmd::execute(CClearInventoryCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int local_10;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  for (local_10 = 3; local_10 < 0x138; local_10 = local_10 + 1) {
    iVar2 = CUserCharacInfo::getCurCharacInvenW(this_00);
    Inven_Item::reset((Inven_Item *)(*(int *)(iVar2 + 0x650) + local_10 * 0x3d));
  }
  cVar1 = CUser::send_itemspace((CUser *)this_00,0);
  if (cVar1 != '\x01') {
    uVar3 = CUser::get_acc_id((CUser *)this_00);
    uVar4 = NumberToString(uVar3,0);
    LogManager::logFormat
              (1,"GameMaster.cpp","virtual void game_master::CClearInventoryCmd::execute()",0x63b,
               "CClearInventoryCmd::execute, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_INVENTORY ) return FAILED"
               ,uVar4);
  }
  return;
}

```

