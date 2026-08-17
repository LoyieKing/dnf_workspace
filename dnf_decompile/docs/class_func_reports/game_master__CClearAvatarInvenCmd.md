# game_master__CClearAvatarInvenCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084aafb0 game_master::CClearAvatarInvenCmd::execute  [0x084aafb0-0x84ab16d] ===
 84aafb0:	55                   	push   %ebp
 84aafb1:	89 e5                	mov    %esp,%ebp
 84aafb3:	53                   	push   %ebx
 84aafb4:	83 ec 34             	sub    $0x34,%esp
 84aafb7:	8b 45 08             	mov    0x8(%ebp),%eax
 84aafba:	89 04 24             	mov    %eax,(%esp)
 84aafbd:	e8 f8 8f 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84aafc2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84aafc5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84aafcc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84aafd3:	e9 1b 01 00 00       	jmp    84ab0f3 <_ZN11game_master20CClearAvatarInvenCmd7executeEv+0x143>
 84aafd8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84aafdb:	89 04 24             	mov    %eax,(%esp)
 84aafde:	e8 9b f2 c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84aafe3:	8b 90 54 06 00 00    	mov    0x654(%eax),%edx
 84aafe9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84aafec:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84aafef:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84aaff2:	8b 40 02             	mov    0x2(%eax),%eax
 84aaff5:	85 c0                	test   %eax,%eax
 84aaff7:	0f 95 c0             	setne  %al
 84aaffa:	84 c0                	test   %al,%al
 84aaffc:	0f 84 ed 00 00 00    	je     84ab0ef <_ZN11game_master20CClearAvatarInvenCmd7executeEv+0x13f>
 84ab002:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ab005:	89 04 24             	mov    %eax,(%esp)
 84ab008:	e8 71 f2 c2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84ab00d:	8b 90 54 06 00 00    	mov    0x654(%eax),%edx
 84ab013:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab016:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84ab019:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84ab01c:	8b 40 07             	mov    0x7(%eax),%eax
 84ab01f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84ab022:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ab025:	89 04 24             	mov    %eax,(%esp)
 84ab028:	e8 61 f2 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ab02d:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 84ab034:	00 
 84ab035:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 84ab03c:	00 
 84ab03d:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84ab044:	00 
 84ab045:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84ab048:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ab04c:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84ab053:	00 
 84ab054:	89 04 24             	mov    %eax,(%esp)
 84ab057:	e8 b0 8f 05 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 84ab05c:	83 f0 01             	xor    $0x1,%eax
 84ab05f:	84 c0                	test   %al,%al
 84ab061:	74 50                	je     84ab0b3 <_ZN11game_master20CClearAvatarInvenCmd7executeEv+0x103>
 84ab063:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ab066:	89 04 24             	mov    %eax,(%esp)
 84ab069:	e8 00 f3 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84ab06e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ab075:	00 
 84ab076:	89 04 24             	mov    %eax,(%esp)
 84ab079:	e8 cd df c5 ff       	call   810904b <_Z14NumberToStringji>
 84ab07e:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ab082:	c7 44 24 10 bc fb c7 	movl   $0x8c7fbbc,0x10(%esp)
 84ab089:	08 
 84ab08a:	c7 44 24 0c 4d 06 00 	movl   $0x64d,0xc(%esp)
 84ab091:	00 
 84ab092:	c7 44 24 08 40 13 c8 	movl   $0x8c81340,0x8(%esp)
 84ab099:	08 
 84ab09a:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84ab0a1:	08 
 84ab0a2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ab0a9:	e8 5c 8b 62 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ab0ae:	e9 b4 00 00 00       	jmp    84ab167 <_ZN11game_master20CClearAvatarInvenCmd7executeEv+0x1b7>
 84ab0b3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ab0b6:	8d 58 0a             	lea    0xa(%eax),%ebx
 84ab0b9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ab0bc:	89 04 24             	mov    %eax,(%esp)
 84ab0bf:	e8 ca f1 c2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 84ab0c4:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84ab0cb:	00 
 84ab0cc:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84ab0d0:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84ab0d7:	00 
 84ab0d8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84ab0db:	89 54 24 08          	mov    %edx,0x8(%esp)
 84ab0df:	c7 44 24 04 36 00 00 	movl   $0x36,0x4(%esp)
 84ab0e6:	00 
 84ab0e7:	89 04 24             	mov    %eax,(%esp)
 84ab0ea:	e8 3f db 05 00       	call   8508c2e <_ZNK10CInventory15SendAvatarEventEiiiii>
 84ab0ef:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84ab0f3:	83 7d f4 68          	cmpl   $0x68,-0xc(%ebp)
 84ab0f7:	0f 9e c0             	setle  %al
 84ab0fa:	84 c0                	test   %al,%al
 84ab0fc:	0f 85 d6 fe ff ff    	jne    84aafd8 <_ZN11game_master20CClearAvatarInvenCmd7executeEv+0x28>
 84ab102:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ab109:	00 
 84ab10a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ab10d:	89 04 24             	mov    %eax,(%esp)
 84ab110:	e8 57 2a 1b 00       	call   865db6c <_ZN5CUser14send_itemspaceEi>
 84ab115:	83 f0 01             	xor    $0x1,%eax
 84ab118:	84 c0                	test   %al,%al
 84ab11a:	74 4b                	je     84ab167 <_ZN11game_master20CClearAvatarInvenCmd7executeEv+0x1b7>
 84ab11c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84ab11f:	89 04 24             	mov    %eax,(%esp)
 84ab122:	e8 47 f2 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84ab127:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ab12e:	00 
 84ab12f:	89 04 24             	mov    %eax,(%esp)
 84ab132:	e8 14 df c5 ff       	call   810904b <_Z14NumberToStringji>
 84ab137:	89 44 24 14          	mov    %eax,0x14(%esp)
 84ab13b:	c7 44 24 10 18 fc c7 	movl   $0x8c7fc18,0x10(%esp)
 84ab142:	08 
 84ab143:	c7 44 24 0c 56 06 00 	movl   $0x656,0xc(%esp)
 84ab14a:	00 
 84ab14b:	c7 44 24 08 40 13 c8 	movl   $0x8c81340,0x8(%esp)
 84ab152:	08 
 84ab153:	c7 44 24 04 63 fa c7 	movl   $0x8c7fa63,0x4(%esp)
 84ab15a:	08 
 84ab15b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84ab162:	e8 a3 8a 62 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84ab167:	83 c4 34             	add    $0x34,%esp
 84ab16a:	5b                   	pop    %ebx
 84ab16b:	5d                   	pop    %ebp
 84ab16c:	c3                   	ret
 84ab16d:	90                   	nop

```

```c
// game_master::CClearAvatarInvenCmd::execute @ 0x84aafb0

/* game_master::CClearAvatarInvenCmd::execute() */

void __thiscall game_master::CClearAvatarInvenCmd::execute(CClearAvatarInvenCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  CInventory *pCVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_10;
  
  this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  local_10 = 0;
  do {
    if (0x68 < local_10) {
      cVar1 = CUser::send_itemspace((CUser *)this_00,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)this_00);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"GameMaster.cpp","virtual void game_master::CClearAvatarInvenCmd::execute()",
                   0x656,
                   "CClearAvatarInvenCmd::execute, pUser(%s)->send_itemspace( ENUM_ITEMSPACE_AVATAR ) return FAILED"
                   ,uVar5);
      }
      return;
    }
    iVar2 = CUserCharacInfo::getCurCharacInvenR(this_00);
    if (*(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 2) != 0) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR(this_00);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x654) + local_10 * 0x3d + 7);
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(this_00);
      cVar1 = CInventory::delete_item(pCVar3,2,local_10,1,3,1);
      if (cVar1 != '\x01') {
        uVar4 = CUser::get_acc_id((CUser *)this_00);
        uVar5 = NumberToString(uVar4,0);
        LogManager::logFormat
                  (1,"GameMaster.cpp","virtual void game_master::CClearAvatarInvenCmd::execute()",
                   0x64d,
                   "CClearAvatarInvenCmd::execute, pUser(%s)->getCurCharacInvenW()->delete_item return FAILED"
                   ,uVar5);
        return;
      }
      pCVar3 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(this_00);
      CInventory::SendAvatarEvent(pCVar3,0x36,iVar2,1,local_10 + 10,0);
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

