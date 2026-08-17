# Dispatcher_Avatar_Disjoint_Random_Reward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## process

```asm
// === 081dea06 Dispatcher_Avatar_Disjoint_Random_Reward::process  [0x081dea06-0x81dec55] ===
 81dea06:	55                   	push   %ebp
 81dea07:	89 e5                	mov    %esp,%ebp
 81dea09:	53                   	push   %ebx
 81dea0a:	83 ec 74             	sub    $0x74,%esp
 81dea0d:	8b 45 10             	mov    0x10(%ebp),%eax
 81dea10:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81dea13:	8b 45 14             	mov    0x14(%ebp),%eax
 81dea16:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81dea19:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dea1c:	89 04 24             	mov    %eax,(%esp)
 81dea1f:	e8 68 b9 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81dea24:	83 f8 03             	cmp    $0x3,%eax
 81dea27:	0f 95 c0             	setne  %al
 81dea2a:	84 c0                	test   %al,%al
 81dea2c:	74 14                	je     81dea42 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81dea2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dea31:	c7 40 04 07 00 00 00 	movl   $0x7,0x4(%eax)
 81dea38:	b8 00 00 00 00       	mov    $0x0,%eax
 81dea3d:	e9 0e 02 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81dea42:	e8 54 d7 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81dea47:	89 04 24             	mov    %eax,(%esp)
 81dea4a:	e8 13 21 f3 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 81dea4f:	c7 44 24 04 97 01 00 	movl   $0x197,0x4(%esp)
 81dea56:	00 
 81dea57:	89 04 24             	mov    %eax,(%esp)
 81dea5a:	e8 0b cf f2 ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 81dea5f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81dea62:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81dea66:	75 14                	jne    81dea7c <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x76>
 81dea68:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dea6b:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81dea72:	b8 00 00 00 00       	mov    $0x0,%eax
 81dea77:	e9 d4 01 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81dea7c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dea7f:	8b 00                	mov    (%eax),%eax
 81dea81:	83 c0 08             	add    $0x8,%eax
 81dea84:	8b 10                	mov    (%eax),%edx
 81dea86:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dea89:	89 04 24             	mov    %eax,(%esp)
 81dea8c:	ff d2                	call   *%edx
 81dea8e:	83 f0 01             	xor    $0x1,%eax
 81dea91:	84 c0                	test   %al,%al
 81dea93:	74 14                	je     81deaa9 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0xa3>
 81dea95:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dea98:	c7 40 04 b2 00 00 00 	movl   $0xb2,0x4(%eax)
 81dea9f:	b8 00 00 00 00       	mov    $0x0,%eax
 81deaa4:	e9 a7 01 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81deaa9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81deaac:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81deab0:	0f b7 d8             	movzwl %ax,%ebx
 81deab3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81deab6:	89 04 24             	mov    %eax,(%esp)
 81deab9:	e8 c0 b7 ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81deabe:	8d 55 ab             	lea    -0x55(%ebp),%edx
 81deac1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81deac5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81deacc:	00 
 81deacd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dead1:	89 14 24             	mov    %edx,(%esp)
 81dead4:	e8 3f ce 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81dead9:	83 ec 04             	sub    $0x4,%esp
 81deadc:	8b 55 ad             	mov    -0x53(%ebp),%edx
 81deadf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81deae2:	8b 40 10             	mov    0x10(%eax),%eax
 81deae5:	39 c2                	cmp    %eax,%edx
 81deae7:	74 14                	je     81deafd <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0xf7>
 81deae9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81deaec:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81deaf3:	b8 00 00 00 00       	mov    $0x0,%eax
 81deaf8:	e9 53 01 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81deafd:	8b 45 ad             	mov    -0x53(%ebp),%eax
 81deb00:	89 c3                	mov    %eax,%ebx
 81deb02:	e8 94 d6 ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81deb07:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81deb0b:	89 04 24             	mov    %eax,(%esp)
 81deb0e:	e8 1f 0f 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81deb13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81deb16:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81deb1a:	75 14                	jne    81deb30 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x12a>
 81deb1c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81deb1f:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81deb26:	b8 00 00 00 00       	mov    $0x0,%eax
 81deb2b:	e9 20 01 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81deb30:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81deb33:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81deb37:	0f b7 c0             	movzwl %ax,%eax
 81deb3a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81deb3d:	89 54 24 10          	mov    %edx,0x10(%esp)
 81deb41:	8d 55 ab             	lea    -0x55(%ebp),%edx
 81deb44:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81deb48:	89 44 24 08          	mov    %eax,0x8(%esp)
 81deb4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81deb4f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81deb53:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81deb56:	89 04 24             	mov    %eax,(%esp)
 81deb59:	e8 46 08 f3 ff       	call   810f3a4 <_ZN13EventClassify27CAvatarDisjointRandomReward24checkAvatarDisjointErrorEP5CUsertR10Inven_ItemPK5CItem>
 81deb5e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81deb61:	89 42 04             	mov    %eax,0x4(%edx)
 81deb64:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81deb67:	8b 40 04             	mov    0x4(%eax),%eax
 81deb6a:	85 c0                	test   %eax,%eax
 81deb6c:	74 0a                	je     81deb78 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x172>
 81deb6e:	b8 00 00 00 00       	mov    $0x0,%eax
 81deb73:	e9 d8 00 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81deb78:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81deb7b:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81deb7f:	0f b7 c0             	movzwl %ax,%eax
 81deb82:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81deb85:	89 54 24 10          	mov    %edx,0x10(%esp)
 81deb89:	8d 55 ab             	lea    -0x55(%ebp),%edx
 81deb8c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81deb90:	89 44 24 08          	mov    %eax,0x8(%esp)
 81deb94:	8b 45 0c             	mov    0xc(%ebp),%eax
 81deb97:	89 44 24 04          	mov    %eax,0x4(%esp)
 81deb9b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81deb9e:	89 04 24             	mov    %eax,(%esp)
 81deba1:	e8 3c 09 f3 ff       	call   810f4e2 <_ZN13EventClassify27CAvatarDisjointRandomReward16deleteAvatarItemEP5CUsertR10Inven_ItemPK5CItem>
 81deba6:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81deba9:	89 42 04             	mov    %eax,0x4(%edx)
 81debac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81debaf:	8b 40 04             	mov    0x4(%eax),%eax
 81debb2:	85 c0                	test   %eax,%eax
 81debb4:	74 0a                	je     81debc0 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1ba>
 81debb6:	b8 00 00 00 00       	mov    $0x0,%eax
 81debbb:	e9 90 00 00 00       	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81debc0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81debc3:	83 c0 0c             	add    $0xc,%eax
 81debc6:	89 44 24 08          	mov    %eax,0x8(%esp)
 81debca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81debcd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81debd1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81debd4:	89 04 24             	mov    %eax,(%esp)
 81debd7:	e8 b8 0a f3 ff       	call   810f694 <_ZN13EventClassify27CAvatarDisjointRandomReward13getRewardItemEPK5CItemRSt6vectorISt4pairIiiESaIS6_EE>
 81debdc:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81debdf:	89 42 04             	mov    %eax,0x4(%edx)
 81debe2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81debe5:	8b 40 04             	mov    0x4(%eax),%eax
 81debe8:	85 c0                	test   %eax,%eax
 81debea:	74 07                	je     81debf3 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x1ed>
 81debec:	b8 00 00 00 00       	mov    $0x0,%eax
 81debf1:	eb 5d                	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81debf3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81debf6:	83 c0 0c             	add    $0xc,%eax
 81debf9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81debfd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dec00:	89 04 24             	mov    %eax,(%esp)
 81dec03:	e8 3a 0b f3 ff       	call   810f742 <_ZN13EventClassify27CAvatarDisjointRandomReward25SendCreateEmblemStatisticERSt6vectorISt4pairIiiESaIS3_EE>
 81dec08:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dec0b:	83 c0 0c             	add    $0xc,%eax
 81dec0e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81dec12:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dec15:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dec19:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81dec1c:	89 04 24             	mov    %eax,(%esp)
 81dec1f:	e8 68 0c f3 ff       	call   810f88c <_ZN13EventClassify27CAvatarDisjointRandomReward20sendRandomItemRewardEP5CUserRSt6vectorISt4pairIiiESaIS5_EE>
 81dec24:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81dec27:	89 42 04             	mov    %eax,0x4(%edx)
 81dec2a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dec2d:	8b 40 04             	mov    0x4(%eax),%eax
 81dec30:	85 c0                	test   %eax,%eax
 81dec32:	74 07                	je     81dec3b <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x235>
 81dec34:	b8 00 00 00 00       	mov    $0x0,%eax
 81dec39:	eb 15                	jmp    81dec50 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward7processEP5CUserR8MSG_BASER9ParamBase+0x24a>
 81dec3b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81dec3e:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81dec42:	0f b7 d0             	movzwl %ax,%edx
 81dec45:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81dec48:	89 50 08             	mov    %edx,0x8(%eax)
 81dec4b:	b8 00 00 00 00       	mov    $0x0,%eax
 81dec50:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81dec53:	c9                   	leave
 81dec54:	c3                   	ret
 81dec55:	90                   	nop

```

```c
// Dispatcher_Avatar_Disjoint_Random_Reward::process @ 0x81dea06

/* Dispatcher_Avatar_Disjoint_Random_Reward::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Avatar_Disjoint_Random_Reward::process
          (Dispatcher_Avatar_Disjoint_Random_Reward *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  CDataManager *pCVar3;
  undefined4 uVar4;
  Inven_Item local_59 [2];
  int local_57;
  MSG_BASE *local_1c;
  ParamBase *local_18;
  CAvatarDisjointRandomReward *local_14;
  CItem *local_10;
  
  local_1c = param_2;
  local_18 = param_3;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 == 3) {
    pCVar3 = (CDataManager *)G_CDataManager();
    iVar2 = CDataManager::get_event_script_mng(pCVar3);
    uVar4 = 0x197;
    local_14 = (CAvatarDisjointRandomReward *)
               EventClassify::CEventScriptMng::get_event_entity(iVar2);
    if (local_14 == (CAvatarDisjointRandomReward *)0x0) {
      *(undefined4 *)(local_18 + 4) = 0xb2;
    }
    else {
      cVar1 = (**(code **)(*(int *)local_14 + 8))(local_14,uVar4);
      if (cVar1 == '\x01') {
        iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_59,iVar2);
        if (local_57 == *(int *)(local_1c + 0x10)) {
          pCVar3 = (CDataManager *)G_CDataManager();
          local_10 = (CItem *)CDataManager::find_item(pCVar3,local_57);
          if (local_10 == (CItem *)0x0) {
            *(undefined4 *)(local_18 + 4) = 0x11;
          }
          else {
            uVar4 = EventClassify::CAvatarDisjointRandomReward::checkAvatarDisjointError
                              (local_14,param_1,*(ushort *)(local_1c + 0xe),local_59,local_10);
            *(undefined4 *)(local_18 + 4) = uVar4;
            if (*(int *)(local_18 + 4) == 0) {
              uVar4 = EventClassify::CAvatarDisjointRandomReward::deleteAvatarItem
                                (local_14,param_1,*(ushort *)(local_1c + 0xe),local_59,local_10);
              *(undefined4 *)(local_18 + 4) = uVar4;
              if (*(int *)(local_18 + 4) == 0) {
                uVar4 = EventClassify::CAvatarDisjointRandomReward::getRewardItem
                                  (local_14,local_10,(vector *)(local_18 + 0xc));
                *(undefined4 *)(local_18 + 4) = uVar4;
                if (*(int *)(local_18 + 4) == 0) {
                  EventClassify::CAvatarDisjointRandomReward::SendCreateEmblemStatistic
                            (local_14,(vector *)(local_18 + 0xc));
                  uVar4 = EventClassify::CAvatarDisjointRandomReward::sendRandomItemReward
                                    ((CUser *)local_14,(vector *)param_1);
                  *(undefined4 *)(local_18 + 4) = uVar4;
                  if (*(int *)(local_18 + 4) == 0) {
                    *(uint *)(local_18 + 8) = (uint)*(ushort *)(local_1c + 0xe);
                  }
                }
              }
            }
          }
        }
        else {
          *(undefined4 *)(local_18 + 4) = 0x11;
        }
      }
      else {
        *(undefined4 *)(local_18 + 4) = 0xb2;
      }
    }
  }
  else {
    *(undefined4 *)(local_18 + 4) = 7;
  }
  return 0;
}

```

---

## read

```asm
// === 081de9da Dispatcher_Avatar_Disjoint_Random_Reward::read  [0x081de9da-0x81dea05] ===
 81de9da:	55                   	push   %ebp
 81de9db:	89 e5                	mov    %esp,%ebp
 81de9dd:	83 ec 28             	sub    $0x28,%esp
 81de9e0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81de9e7:	00 
 81de9e8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81de9ef:	00 
 81de9f0:	c7 44 24 04 00 1d bd 	movl   $0x8bd1d00,0x4(%esp)
 81de9f7:	08 
 81de9f8:	c7 04 24 41 50 00 00 	movl   $0x5041,(%esp)
 81de9ff:	e8 d3 1e 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81dea04:	c9                   	leave
 81dea05:	c3                   	ret

```

```c
// Dispatcher_Avatar_Disjoint_Random_Reward::read @ 0x81de9da

/* Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf&, MSG_BASE&) */

void Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf *param_1,MSG_BASE *param_2)

{
  LineFunc(0x5041,
           "virtual int Dispatcher_Avatar_Disjoint_Random_Reward::read(PacketBuf&, MSG_BASE&)",0,0);
  return;
}

```

---

## send

```asm
// === 081dec56 Dispatcher_Avatar_Disjoint_Random_Reward::send  [0x081dec56-0x81dee29] ===
 81dec56:	55                   	push   %ebp
 81dec57:	89 e5                	mov    %esp,%ebp
 81dec59:	56                   	push   %esi
 81dec5a:	53                   	push   %ebx
 81dec5b:	83 ec 40             	sub    $0x40,%esp
 81dec5e:	8b 45 10             	mov    0x10(%ebp),%eax
 81dec61:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dec65:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81dec68:	89 04 24             	mov    %eax,(%esp)
 81dec6b:	e8 fe 64 05 00       	call   823516e <_ZN28stAvatarDisjointRandomRewardC1ERKS_>
 81dec70:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81dec73:	89 04 24             	mov    %eax,(%esp)
 81dec76:	e8 d1 f0 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81dec7b:	c7 44 24 08 c2 01 00 	movl   $0x1c2,0x8(%esp)
 81dec82:	00 
 81dec83:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dec8a:	00 
 81dec8b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81dec8e:	89 04 24             	mov    %eax,(%esp)
 81dec91:	e8 66 cc ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81dec96:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81dec99:	85 c0                	test   %eax,%eax
 81dec9b:	0f 85 eb 00 00 00    	jne    81ded8c <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x136>
 81deca1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81deca8:	00 
 81deca9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81decac:	89 04 24             	mov    %eax,(%esp)
 81decaf:	e8 6c cc ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81decb4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81decb7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81decbb:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81decbe:	89 04 24             	mov    %eax,(%esp)
 81decc1:	e8 de b1 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81decc6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81decc9:	83 c0 0c             	add    $0xc,%eax
 81deccc:	89 04 24             	mov    %eax,(%esp)
 81deccf:	e8 40 eb ef ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81decd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81decd8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81decdb:	89 04 24             	mov    %eax,(%esp)
 81decde:	e8 3d cc ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dece3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81dece6:	83 c0 0c             	add    $0xc,%eax
 81dece9:	89 04 24             	mov    %eax,(%esp)
 81decec:	e8 23 eb ef ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81decf1:	85 c0                	test   %eax,%eax
 81decf3:	0f 95 c0             	setne  %al
 81decf6:	84 c0                	test   %al,%al
 81decf8:	0f 84 b3 00 00 00    	je     81dedb1 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x15b>
 81decfe:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ded01:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81ded04:	83 c2 0c             	add    $0xc,%edx
 81ded07:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ded0b:	89 04 24             	mov    %eax,(%esp)
 81ded0e:	e8 9f e8 ef ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 81ded13:	83 ec 04             	sub    $0x4,%esp
 81ded16:	eb 44                	jmp    81ded5c <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x106>
 81ded18:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ded1b:	89 04 24             	mov    %eax,(%esp)
 81ded1e:	e8 cb 2f f3 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 81ded23:	8b 00                	mov    (%eax),%eax
 81ded25:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ded29:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81ded2c:	89 04 24             	mov    %eax,(%esp)
 81ded2f:	e8 08 cc ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81ded34:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ded37:	89 04 24             	mov    %eax,(%esp)
 81ded3a:	e8 af 2f f3 ff       	call   8111cee <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEptEv>
 81ded3f:	8b 40 04             	mov    0x4(%eax),%eax
 81ded42:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ded46:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81ded49:	89 04 24             	mov    %eax,(%esp)
 81ded4c:	e8 eb cb ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81ded51:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ded54:	89 04 24             	mov    %eax,(%esp)
 81ded57:	e8 ae 24 f3 ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 81ded5c:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ded5f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81ded62:	83 c2 0c             	add    $0xc,%edx
 81ded65:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ded69:	89 04 24             	mov    %eax,(%esp)
 81ded6c:	e8 65 e8 ef ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 81ded71:	83 ec 04             	sub    $0x4,%esp
 81ded74:	8d 45 f4             	lea    -0xc(%ebp),%eax
 81ded77:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ded7b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ded7e:	89 04 24             	mov    %eax,(%esp)
 81ded81:	e8 58 24 f3 ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 81ded86:	84 c0                	test   %al,%al
 81ded88:	75 8e                	jne    81ded18 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0xc2>
 81ded8a:	eb 25                	jmp    81dedb1 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x15b>
 81ded8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ded93:	00 
 81ded94:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81ded97:	89 04 24             	mov    %eax,(%esp)
 81ded9a:	e8 81 cb ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81ded9f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 81deda2:	89 44 24 04          	mov    %eax,0x4(%esp)
 81deda6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81deda9:	89 04 24             	mov    %eax,(%esp)
 81dedac:	e8 6f cb ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81dedb1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81dedb8:	00 
 81dedb9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81dedbc:	89 04 24             	mov    %eax,(%esp)
 81dedbf:	e8 94 cb ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81dedc4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81dedc7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81dedcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81dedce:	89 04 24             	mov    %eax,(%esp)
 81dedd1:	e8 e4 97 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81dedd6:	eb 15                	jmp    81deded <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x197>
 81dedd8:	89 d3                	mov    %edx,%ebx
 81dedda:	89 c6                	mov    %eax,%esi
 81deddc:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81deddf:	89 04 24             	mov    %eax,(%esp)
 81dede2:	e8 99 f0 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dede7:	89 f0                	mov    %esi,%eax
 81dede9:	89 da                	mov    %ebx,%edx
 81dedeb:	eb 0d                	jmp    81dedfa <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x1a4>
 81deded:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81dedf0:	89 04 24             	mov    %eax,(%esp)
 81dedf3:	e8 88 f0 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81dedf8:	eb 1b                	jmp    81dee15 <_ZN40Dispatcher_Avatar_Disjoint_Random_Reward4sendEP5CUserR9ParamBase+0x1bf>
 81dedfa:	89 d3                	mov    %edx,%ebx
 81dedfc:	89 c6                	mov    %eax,%esi
 81dedfe:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81dee01:	89 04 24             	mov    %eax,(%esp)
 81dee04:	e8 dd 63 05 00       	call   82351e6 <_ZN28stAvatarDisjointRandomRewardD1Ev>
 81dee09:	89 f0                	mov    %esi,%eax
 81dee0b:	89 da                	mov    %ebx,%edx
 81dee0d:	89 04 24             	mov    %eax,(%esp)
 81dee10:	e8 3b 49 90 00       	call   8ae3750 <_Unwind_Resume>
 81dee15:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81dee18:	89 04 24             	mov    %eax,(%esp)
 81dee1b:	e8 c6 63 05 00       	call   82351e6 <_ZN28stAvatarDisjointRandomRewardD1Ev>
 81dee20:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81dee23:	83 c4 00             	add    $0x0,%esp
 81dee26:	5b                   	pop    %ebx
 81dee27:	5e                   	pop    %esi
 81dee28:	5d                   	pop    %ebp
 81dee29:	c3                   	ret

```

```c
// Dispatcher_Avatar_Disjoint_Random_Reward::send @ 0x81dec56

/* Dispatcher_Avatar_Disjoint_Random_Reward::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Avatar_Disjoint_Random_Reward::send
          (Dispatcher_Avatar_Disjoint_Random_Reward *this,CUser *param_1,ParamBase *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_38 [4];
  PacketGuard local_34 [12];
  stAvatarDisjointRandomReward local_28 [4];
  int local_24;
  int local_20;
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> avStack_1c [12];
  __normal_iterator local_10 [4];
  
  stAvatarDisjointRandomReward::stAvatarDisjointRandomReward
            (local_28,(stAvatarDisjointRandomReward *)param_2);
                    /* try { // try from 081dec76 to 081dec7a has its CatchHandler @ 081dedfa */
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 081dec91 to 081dedd5 has its CatchHandler @ 081dedd8 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0x1c2);
  if (local_24 == 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,local_20);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(avStack_1c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,iVar2);
    iVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size(avStack_1c);
    if (iVar2 != 0) {
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar1 = __gnu_cxx::operator!=(local_38,local_10);
        if (!bVar1) break;
        piVar3 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator->(local_38);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*piVar3);
        iVar2 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator->(local_38);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,*(int *)(iVar2 + 4));
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_38);
      }
    }
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_24);
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  CUser::Send(param_1,local_34);
                    /* try { // try from 081dedf3 to 081dedf7 has its CatchHandler @ 081dedfa */
  PacketGuard::~PacketGuard(local_34);
  stAvatarDisjointRandomReward::~stAvatarDisjointRandomReward(local_28);
  return;
}

```

