# Dispatcher_UseRightOfChangeGrowType

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0825dd84 Dispatcher_UseRightOfChangeGrowType::check_error  [0x0825dd84-0x825df23] ===
 825dd84:	55                   	push   %ebp
 825dd85:	89 e5                	mov    %esp,%ebp
 825dd87:	53                   	push   %ebx
 825dd88:	83 ec 64             	sub    $0x64,%esp
 825dd8b:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825dd8f:	74 0f                	je     825dda0 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x1c>
 825dd91:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dd94:	89 04 24             	mov    %eax,(%esp)
 825dd97:	e8 96 26 ec ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 825dd9c:	85 c0                	test   %eax,%eax
 825dd9e:	75 07                	jne    825dda7 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x23>
 825dda0:	b8 01 00 00 00       	mov    $0x1,%eax
 825dda5:	eb 05                	jmp    825ddac <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x28>
 825dda7:	b8 00 00 00 00       	mov    $0x0,%eax
 825ddac:	84 c0                	test   %al,%al
 825ddae:	74 0a                	je     825ddba <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x36>
 825ddb0:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825ddb5:	e9 64 01 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825ddba:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ddbd:	89 04 24             	mov    %eax,(%esp)
 825ddc0:	e8 c7 c5 e7 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 825ddc5:	83 f8 03             	cmp    $0x3,%eax
 825ddc8:	0f 95 c0             	setne  %al
 825ddcb:	84 c0                	test   %al,%al
 825ddcd:	74 0a                	je     825ddd9 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x55>
 825ddcf:	b8 1e 00 00 00       	mov    $0x1e,%eax
 825ddd4:	e9 45 01 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825ddd9:	8b 45 10             	mov    0x10(%ebp),%eax
 825dddc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825dddf:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dde2:	89 04 24             	mov    %eax,(%esp)
 825dde5:	e8 36 01 ea ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 825ddea:	83 f8 09             	cmp    $0x9,%eax
 825dded:	0f 94 c0             	sete   %al
 825ddf0:	84 c0                	test   %al,%al
 825ddf2:	74 0a                	je     825ddfe <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x7a>
 825ddf4:	b8 ea 00 00 00       	mov    $0xea,%eax
 825ddf9:	e9 20 01 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825ddfe:	8b 45 0c             	mov    0xc(%ebp),%eax
 825de01:	89 04 24             	mov    %eax,(%esp)
 825de04:	e8 17 01 ea ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 825de09:	83 f8 0a             	cmp    $0xa,%eax
 825de0c:	0f 94 c0             	sete   %al
 825de0f:	84 c0                	test   %al,%al
 825de11:	74 0a                	je     825de1d <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x99>
 825de13:	b8 ea 00 00 00       	mov    $0xea,%eax
 825de18:	e9 01 01 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825de1d:	8b 45 0c             	mov    0xc(%ebp),%eax
 825de20:	89 04 24             	mov    %eax,(%esp)
 825de23:	e8 6c 2e eb ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 825de28:	84 c0                	test   %al,%al
 825de2a:	0f 94 c0             	sete   %al
 825de2d:	84 c0                	test   %al,%al
 825de2f:	74 0a                	je     825de3b <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0xb7>
 825de31:	b8 13 00 00 00       	mov    $0x13,%eax
 825de36:	e9 e3 00 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825de3b:	8b 45 0c             	mov    0xc(%ebp),%eax
 825de3e:	89 04 24             	mov    %eax,(%esp)
 825de41:	e8 b8 c4 e7 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 825de46:	84 c0                	test   %al,%al
 825de48:	74 0a                	je     825de54 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0xd0>
 825de4a:	b8 d8 00 00 00       	mov    $0xd8,%eax
 825de4f:	e9 ca 00 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825de54:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825de57:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 825de5b:	84 c0                	test   %al,%al
 825de5d:	78 0b                	js     825de6a <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0xe6>
 825de5f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825de62:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 825de66:	3c 05                	cmp    $0x5,%al
 825de68:	7e 0a                	jle    825de74 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0xf0>
 825de6a:	b8 01 00 00 00       	mov    $0x1,%eax
 825de6f:	e9 aa 00 00 00       	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825de74:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825de77:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 825de7b:	0f bf d8             	movswl %ax,%ebx
 825de7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 825de81:	89 04 24             	mov    %eax,(%esp)
 825de84:	e8 f5 c3 e7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 825de89:	8d 55 af             	lea    -0x51(%ebp),%edx
 825de8c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 825de90:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825de97:	00 
 825de98:	89 44 24 04          	mov    %eax,0x4(%esp)
 825de9c:	89 14 24             	mov    %edx,(%esp)
 825de9f:	e8 74 da 29 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 825dea4:	83 ec 04             	sub    $0x4,%esp
 825dea7:	8b 45 b1             	mov    -0x4f(%ebp),%eax
 825deaa:	89 c3                	mov    %eax,%ebx
 825deac:	e8 ea e2 e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 825deb1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825deb5:	89 04 24             	mov    %eax,(%esp)
 825deb8:	e8 75 1b 10 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 825debd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825dec0:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 825dec4:	75 07                	jne    825decd <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x149>
 825dec6:	b8 11 00 00 00       	mov    $0x11,%eax
 825decb:	eb 51                	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825decd:	8b 45 0c             	mov    0xc(%ebp),%eax
 825ded0:	89 04 24             	mov    %eax,(%esp)
 825ded3:	e8 14 26 00 00       	call   82604ec <_ZNK5CUser21getCurCharacQuestRefREv>
 825ded8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825dedb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825dede:	89 04 24             	mov    %eax,(%esp)
 825dee1:	e8 a4 f5 44 00       	call   86ad48a <_ZNK9UserQuest21isDoingJobChangeQuestEv>
 825dee6:	84 c0                	test   %al,%al
 825dee8:	74 07                	je     825def1 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x16d>
 825deea:	b8 16 00 00 00       	mov    $0x16,%eax
 825deef:	eb 2d                	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825def1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825def4:	89 44 24 08          	mov    %eax,0x8(%esp)
 825def8:	c7 44 24 04 2e 00 00 	movl   $0x2e,0x4(%esp)
 825deff:	00 
 825df00:	8b 45 0c             	mov    0xc(%ebp),%eax
 825df03:	89 04 24             	mov    %eax,(%esp)
 825df06:	e8 8f 17 43 00       	call   868f69a <_ZN5CUser30verifyStackableItemActionPlaceEN15StackableAction4TypeEPK5CItem>
 825df0b:	83 f0 01             	xor    $0x1,%eax
 825df0e:	84 c0                	test   %al,%al
 825df10:	74 07                	je     825df19 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x195>
 825df12:	b8 17 00 00 00       	mov    $0x17,%eax
 825df17:	eb 05                	jmp    825df1e <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE+0x19a>
 825df19:	b8 00 00 00 00       	mov    $0x0,%eax
 825df1e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 825df21:	c9                   	leave
 825df22:	c3                   	ret
 825df23:	90                   	nop

```

```c
// Dispatcher_UseRightOfChangeGrowType::check_error @ 0x825dd84

/* Dispatcher_UseRightOfChangeGrowType::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseRightOfChangeGrowType::check_error
          (Dispatcher_UseRightOfChangeGrowType *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *this_00;
  undefined1 local_55 [2];
  int local_53;
  MSG_BASE *local_18;
  int local_14;
  UserQuest *local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar3 != 0) {
      bVar1 = false;
      goto LAB_0825ddac;
    }
  }
  bVar1 = true;
LAB_0825ddac:
  if (bVar1) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar3 = CUser::get_state(param_1);
    if (iVar3 == 3) {
      local_18 = param_2;
      iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
      if (iVar3 == 9) {
        uVar4 = 0xea;
      }
      else {
        iVar3 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
        if (iVar3 == 10) {
          uVar4 = 0xea;
        }
        else {
          cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
          if (cVar2 == '\0') {
            uVar4 = 0x13;
          }
          else {
            cVar2 = CUser::CheckInTrade(param_1);
            if (cVar2 == '\0') {
              if (((char)local_18[0xf] < '\0') || ('\x05' < (char)local_18[0xf])) {
                uVar4 = 1;
              }
              else {
                iVar3 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
                CInventory::GetInvenSlot((int)local_55,iVar3);
                this_00 = (CDataManager *)G_CDataManager();
                local_14 = CDataManager::find_item(this_00,local_53);
                if (local_14 == 0) {
                  uVar4 = 0x11;
                }
                else {
                  local_10 = (UserQuest *)CUser::getCurCharacQuestRefR(param_1);
                  cVar2 = UserQuest::isDoingJobChangeQuest(local_10);
                  if (cVar2 == '\0') {
                    cVar2 = CUser::verifyStackableItemActionPlace(param_1,0x2e,local_14);
                    if (cVar2 == '\x01') {
                      uVar4 = 0;
                    }
                    else {
                      uVar4 = 0x17;
                    }
                  }
                  else {
                    uVar4 = 0x16;
                  }
                }
              }
            }
            else {
              uVar4 = 0xd8;
            }
          }
        }
      }
    }
    else {
      uVar4 = 0x1e;
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 0825dc64 Dispatcher_UseRightOfChangeGrowType::process  [0x0825dc64-0x825dd83] ===
 825dc64:	55                   	push   %ebp
 825dc65:	89 e5                	mov    %esp,%ebp
 825dc67:	83 ec 38             	sub    $0x38,%esp
 825dc6a:	8b 45 14             	mov    0x14(%ebp),%eax
 825dc6d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825dc70:	8b 45 10             	mov    0x10(%ebp),%eax
 825dc73:	89 44 24 08          	mov    %eax,0x8(%esp)
 825dc77:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dc7a:	89 44 24 04          	mov    %eax,0x4(%esp)
 825dc7e:	8b 45 08             	mov    0x8(%ebp),%eax
 825dc81:	89 04 24             	mov    %eax,(%esp)
 825dc84:	e8 fb 00 00 00       	call   825dd84 <_ZN35Dispatcher_UseRightOfChangeGrowType11check_errorEP5CUserR8MSG_BASE>
 825dc89:	8b 55 ec             	mov    -0x14(%ebp),%edx
 825dc8c:	89 42 04             	mov    %eax,0x4(%edx)
 825dc8f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825dc92:	8b 40 04             	mov    0x4(%eax),%eax
 825dc95:	85 c0                	test   %eax,%eax
 825dc97:	7e 0a                	jle    825dca3 <_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase+0x3f>
 825dc99:	b8 00 00 00 00       	mov    $0x0,%eax
 825dc9e:	e9 de 00 00 00       	jmp    825dd81 <_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase+0x11d>
 825dca3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825dca6:	8b 40 04             	mov    0x4(%eax),%eax
 825dca9:	85 c0                	test   %eax,%eax
 825dcab:	79 5c                	jns    825dd09 <_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase+0xa5>
 825dcad:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825dcb0:	8b 40 04             	mov    0x4(%eax),%eax
 825dcb3:	89 44 24 14          	mov    %eax,0x14(%esp)
 825dcb7:	c7 44 24 10 e0 85 be 	movl   $0x8be85e0,0x10(%esp)
 825dcbe:	08 
 825dcbf:	c7 44 24 0c 93 00 00 	movl   $0x93,0xc(%esp)
 825dcc6:	00 
 825dcc7:	c7 44 24 08 e0 a1 be 	movl   $0x8bea1e0,0x8(%esp)
 825dcce:	08 
 825dccf:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825dcd6:	08 
 825dcd7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825dcde:	e8 27 5f 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825dce3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825dcea:	00 
 825dceb:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825dcf2:	00 
 825dcf3:	c7 44 24 04 e0 a1 be 	movl   $0x8bea1e0,0x4(%esp)
 825dcfa:	08 
 825dcfb:	c7 04 24 94 00 00 00 	movl   $0x94,(%esp)
 825dd02:	e8 d0 2b 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825dd07:	eb 78                	jmp    825dd81 <_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase+0x11d>
 825dd09:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 825dd0e:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 825dd15:	00 
 825dd16:	8b 55 0c             	mov    0xc(%ebp),%edx
 825dd19:	89 54 24 04          	mov    %edx,0x4(%esp)
 825dd1d:	89 04 24             	mov    %eax,(%esp)
 825dd20:	e8 dd ac 02 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 825dd25:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825dd28:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 825dd2c:	74 10                	je     825dd3e <_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase+0xda>
 825dd2e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825dd31:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825dd34:	89 50 04             	mov    %edx,0x4(%eax)
 825dd37:	b8 00 00 00 00       	mov    $0x0,%eax
 825dd3c:	eb 43                	jmp    825dd81 <_ZN35Dispatcher_UseRightOfChangeGrowType7processEP5CUserR8MSG_BASER9ParamBase+0x11d>
 825dd3e:	8b 45 10             	mov    0x10(%ebp),%eax
 825dd41:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825dd44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825dd47:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 825dd4b:	0f bf d0             	movswl %ax,%edx
 825dd4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825dd51:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 825dd55:	0f be c0             	movsbl %al,%eax
 825dd58:	89 54 24 08          	mov    %edx,0x8(%esp)
 825dd5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 825dd60:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dd63:	89 04 24             	mov    %eax,(%esp)
 825dd66:	e8 2b d4 41 00       	call   867b196 <_ZN5CUser19ChangeGrowType_ItemEis>
 825dd6b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 825dd6e:	89 42 04             	mov    %eax,0x4(%edx)
 825dd71:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dd74:	89 04 24             	mov    %eax,(%esp)
 825dd77:	e8 26 2d 3f 00       	call   8650aa2 <_ZN5CUser15_SaveCharacDataEv>
 825dd7c:	b8 00 00 00 00       	mov    $0x0,%eax
 825dd81:	c9                   	leave
 825dd82:	c3                   	ret
 825dd83:	90                   	nop

```

```c
// Dispatcher_UseRightOfChangeGrowType::process @ 0x825dc64

/* Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_UseRightOfChangeGrowType::process
          (Dispatcher_UseRightOfChangeGrowType *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x93,"Dispatcher Check_Error No(%d)",*(undefined4 *)(param_3 + 4));
      uVar1 = LineFunc(0x94,
                       "virtual int Dispatcher_UseRightOfChangeGrowType::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      iVar2 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x2a);
      if (iVar2 == 0) {
        uVar1 = CUser::ChangeGrowType_Item
                          (param_1,(int)(char)param_2[0xf],*(short *)(param_2 + 0xd));
        *(undefined4 *)(param_3 + 4) = uVar1;
        CUser::_SaveCharacData(param_1);
        uVar1 = 0;
      }
      else {
        *(int *)(param_3 + 4) = iVar2;
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 0825dbcc Dispatcher_UseRightOfChangeGrowType::read  [0x0825dbcc-0x825dc63] ===
 825dbcc:	55                   	push   %ebp
 825dbcd:	89 e5                	mov    %esp,%ebp
 825dbcf:	83 ec 28             	sub    $0x28,%esp
 825dbd2:	8b 45 10             	mov    0x10(%ebp),%eax
 825dbd5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825dbd8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825dbdb:	83 c0 0d             	add    $0xd,%eax
 825dbde:	89 44 24 04          	mov    %eax,0x4(%esp)
 825dbe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dbe5:	89 04 24             	mov    %eax,(%esp)
 825dbe8:	e8 d3 f3 32 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 825dbed:	83 f0 01             	xor    $0x1,%eax
 825dbf0:	84 c0                	test   %al,%al
 825dbf2:	74 26                	je     825dc1a <_ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x4e>
 825dbf4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825dbfb:	00 
 825dbfc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825dc03:	00 
 825dc04:	c7 44 24 04 40 a2 be 	movl   $0x8bea240,0x4(%esp)
 825dc0b:	08 
 825dc0c:	c7 04 24 81 00 00 00 	movl   $0x81,(%esp)
 825dc13:	e8 bf 2c 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825dc18:	eb 47                	jmp    825dc61 <_ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x95>
 825dc1a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825dc1d:	83 c0 0f             	add    $0xf,%eax
 825dc20:	89 44 24 04          	mov    %eax,0x4(%esp)
 825dc24:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dc27:	89 04 24             	mov    %eax,(%esp)
 825dc2a:	e8 f3 f2 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825dc2f:	83 f0 01             	xor    $0x1,%eax
 825dc32:	84 c0                	test   %al,%al
 825dc34:	74 26                	je     825dc5c <_ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x90>
 825dc36:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825dc3d:	00 
 825dc3e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825dc45:	00 
 825dc46:	c7 44 24 04 40 a2 be 	movl   $0x8bea240,0x4(%esp)
 825dc4d:	08 
 825dc4e:	c7 04 24 84 00 00 00 	movl   $0x84,(%esp)
 825dc55:	e8 7d 2c 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825dc5a:	eb 05                	jmp    825dc61 <_ZN35Dispatcher_UseRightOfChangeGrowType4readER9PacketBufR8MSG_BASE+0x95>
 825dc5c:	b8 00 00 00 00       	mov    $0x0,%eax
 825dc61:	c9                   	leave
 825dc62:	c3                   	ret
 825dc63:	90                   	nop

```

```c
// Dispatcher_UseRightOfChangeGrowType::read @ 0x825dbcc

/* Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_UseRightOfChangeGrowType::read
          (Dispatcher_UseRightOfChangeGrowType *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x84,
                       "virtual int Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x81,
                     "virtual int Dispatcher_UseRightOfChangeGrowType::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 0825df24 Dispatcher_UseRightOfChangeGrowType::send  [0x0825df24-0x825df71] ===
 825df24:	55                   	push   %ebp
 825df25:	89 e5                	mov    %esp,%ebp
 825df27:	83 ec 28             	sub    $0x28,%esp
 825df2a:	8b 45 10             	mov    0x10(%ebp),%eax
 825df2d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825df30:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825df33:	8b 40 04             	mov    0x4(%eax),%eax
 825df36:	85 c0                	test   %eax,%eax
 825df38:	74 22                	je     825df5c <_ZN35Dispatcher_UseRightOfChangeGrowType4sendEP5CUserR9ParamBase+0x38>
 825df3a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825df3d:	8b 40 04             	mov    0x4(%eax),%eax
 825df40:	0f b6 c0             	movzbl %al,%eax
 825df43:	89 44 24 08          	mov    %eax,0x8(%esp)
 825df47:	c7 44 24 04 f7 01 00 	movl   $0x1f7,0x4(%esp)
 825df4e:	00 
 825df4f:	8b 45 0c             	mov    0xc(%ebp),%eax
 825df52:	89 04 24             	mov    %eax,(%esp)
 825df55:	e8 e8 df 41 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 825df5a:	eb 13                	jmp    825df6f <_ZN35Dispatcher_UseRightOfChangeGrowType4sendEP5CUserR9ParamBase+0x4b>
 825df5c:	c7 44 24 04 f7 01 00 	movl   $0x1f7,0x4(%esp)
 825df63:	00 
 825df64:	8b 45 0c             	mov    0xc(%ebp),%eax
 825df67:	89 04 24             	mov    %eax,(%esp)
 825df6a:	e8 31 df 41 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 825df6f:	c9                   	leave
 825df70:	c3                   	ret
 825df71:	90                   	nop

```

```c
// Dispatcher_UseRightOfChangeGrowType::send @ 0x825df24

/* Dispatcher_UseRightOfChangeGrowType::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_UseRightOfChangeGrowType::send
          (Dispatcher_UseRightOfChangeGrowType *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1f7);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1f7,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

