# GrowthEquipEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## EndEvent

```asm
// === 080f6ffe GrowthEquipEvent::EndEvent  [0x080f6ffe-0x80f704f] ===
 80f6ffe:	55                   	push   %ebp
 80f6fff:	89 e5                	mov    %esp,%ebp
 80f7001:	83 ec 28             	sub    $0x28,%esp
 80f7004:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7007:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f700e:	00 
 80f700f:	89 04 24             	mov    %eax,(%esp)
 80f7012:	e8 cb 14 fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80f7017:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f701e:	00 
 80f701f:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 80f7026:	00 
 80f7027:	c7 44 24 04 e0 d4 b3 	movl   $0x8b3d4e0,0x4(%esp)
 80f702e:	08 
 80f702f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7032:	89 04 24             	mov    %eax,(%esp)
 80f7035:	e8 de 86 45 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80f703a:	c7 44 24 04 94 c8 b3 	movl   $0x8b3c894,0x4(%esp)
 80f7041:	08 
 80f7042:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7045:	89 04 24             	mov    %eax,(%esp)
 80f7048:	e8 3b 87 45 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80f704d:	c9                   	leave
 80f704e:	c3                   	ret
 80f704f:	90                   	nop

```

```c
// GrowthEquipEvent::EndEvent @ 0x80f6ffe

/* GrowthEquipEvent::EndEvent() */

void __thiscall GrowthEquipEvent::EndEvent(GrowthEquipEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void GrowthEquipEvent::EndEvent()",0x24,0);
  cMyTrace::operator()(local_1c,"GrowthEquipEvent Event end!");
  return;
}

```

---

## GiftGrowthWeaponBox

```asm
// === 080f7050 GrowthEquipEvent::GiftGrowthWeaponBox  [0x080f7050-0x80f7225] ===
 80f7050:	55                   	push   %ebp
 80f7051:	89 e5                	mov    %esp,%ebp
 80f7053:	56                   	push   %esi
 80f7054:	53                   	push   %ebx
 80f7055:	81 ec 80 01 00 00    	sub    $0x180,%esp
 80f705b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f705e:	89 04 24             	mov    %eax,(%esp)
 80f7061:	e8 6a ac 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f7066:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80f7069:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80f706c:	0f b6 00             	movzbl (%eax),%eax
 80f706f:	83 f0 01             	xor    $0x1,%eax
 80f7072:	84 c0                	test   %al,%al
 80f7074:	0f 84 a2 01 00 00    	je     80f721c <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser+0x1cc>
 80f707a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80f707d:	c6 00 01             	movb   $0x1,(%eax)
 80f7080:	e8 16 51 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f7085:	8b 80 c4 4b 00 00    	mov    0x4bc4(%eax),%eax
 80f708b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 80f708e:	8d 45 ab             	lea    -0x55(%ebp),%eax
 80f7091:	89 04 24             	mov    %eax,(%esp)
 80f7094:	e8 bb 47 fd ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80f7099:	e8 fd 50 fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f709e:	8b 55 ec             	mov    -0x14(%ebp),%edx
 80f70a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f70a5:	89 04 24             	mov    %eax,(%esp)
 80f70a8:	e8 85 89 26 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80f70ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f70b0:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f70b7:	e8 eb 32 fe ff       	call   80da3a7 <_Z11G_GameWorldv>
 80f70bc:	89 04 24             	mov    %eax,(%esp)
 80f70bf:	e8 5a a2 ff ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 80f70c4:	84 c0                	test   %al,%al
 80f70c6:	74 10                	je     80f70d8 <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser+0x88>
 80f70c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f70cb:	89 04 24             	mov    %eax,(%esp)
 80f70ce:	e8 bd 4b fd ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80f70d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f70d6:	eb 0e                	jmp    80f70e6 <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser+0x96>
 80f70d8:	e8 a4 50 fd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80f70dd:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 80f70e3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f70e6:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 80f70ea:	0f 84 2c 01 00 00    	je     80f721c <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser+0x1cc>
 80f70f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80f70f3:	89 45 ad             	mov    %eax,-0x53(%ebp)
 80f70f6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f70f9:	8b 00                	mov    (%eax),%eax
 80f70fb:	83 c0 08             	add    $0x8,%eax
 80f70fe:	8b 10                	mov    (%eax),%edx
 80f7100:	8d 45 ab             	lea    -0x55(%ebp),%eax
 80f7103:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7107:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80f710a:	89 04 24             	mov    %eax,(%esp)
 80f710d:	ff d2                	call   *%edx
 80f710f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f7116:	00 
 80f7117:	8d 45 ab             	lea    -0x55(%ebp),%eax
 80f711a:	89 04 24             	mov    %eax,(%esp)
 80f711d:	e8 62 47 fd ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 80f7122:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f7129:	00 
 80f712a:	c7 44 24 08 b0 c8 b3 	movl   $0x8b3c8b0,0x8(%esp)
 80f7131:	08 
 80f7132:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f7139:	00 
 80f713a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80f7141:	e8 b8 e6 9a 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80f7146:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 80f714d:	00 
 80f714e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7152:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 80f7158:	89 04 24             	mov    %eax,(%esp)
 80f715b:	e8 70 67 f8 ff       	call   807d8d0 <strncpy@plt>
 80f7160:	8b 45 ad             	mov    -0x53(%ebp),%eax
 80f7163:	85 c0                	test   %eax,%eax
 80f7165:	0f 84 89 00 00 00    	je     80f71f4 <_ZNK16GrowthEquipEvent19GiftGrowthWeaponBoxER5CUser+0x1a4>
 80f716b:	8d 85 ab fe ff ff    	lea    -0x155(%ebp),%eax
 80f7171:	89 04 24             	mov    %eax,(%esp)
 80f7174:	e8 37 72 f8 ff       	call   807e3b0 <strlen@plt>
 80f7179:	89 c6                	mov    %eax,%esi
 80f717b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f717e:	89 04 24             	mov    %eax,(%esp)
 80f7181:	e8 c8 4a fd ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 80f7186:	89 c3                	mov    %eax,%ebx
 80f7188:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f718f:	00 
 80f7190:	c7 44 24 08 c4 c8 b3 	movl   $0x8b3c8c4,0x8(%esp)
 80f7197:	08 
 80f7198:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 80f719f:	00 
 80f71a0:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 80f71a7:	e8 52 e6 9a 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 80f71ac:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 80f71b3:	00 
 80f71b4:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 80f71bb:	00 
 80f71bc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f71bf:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 80f71c3:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 80f71ca:	00 
 80f71cb:	89 74 24 14          	mov    %esi,0x14(%esp)
 80f71cf:	8d 95 ab fe ff ff    	lea    -0x155(%ebp),%edx
 80f71d5:	89 54 24 10          	mov    %edx,0x10(%esp)
 80f71d9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 80f71dd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f71e4:	00 
 80f71e5:	8d 55 ab             	lea    -0x55(%ebp),%edx
 80f71e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f71ec:	89 04 24             	mov    %eax,(%esp)
 80f71ef:	e8 f4 e3 45 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 80f71f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f71f7:	0f bf d8             	movswl %ax,%ebx
 80f71fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f71fd:	89 04 24             	mov    %eax,(%esp)
 80f7200:	e8 69 31 fe ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80f7205:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f7209:	89 04 24             	mov    %eax,(%esp)
 80f720c:	e8 d7 21 35 00       	call   84493e8 <_ZN24DB_EventSaveGrowthWeapon11makeRequestEjs>
 80f7211:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7214:	89 04 24             	mov    %eax,(%esp)
 80f7217:	e8 1a 9c 59 00       	call   8690e36 <_ZN5CUser26SendEventMailAlaramTooltipEv>
 80f721c:	81 c4 80 01 00 00    	add    $0x180,%esp
 80f7222:	5b                   	pop    %ebx
 80f7223:	5e                   	pop    %esi
 80f7224:	5d                   	pop    %ebp
 80f7225:	c3                   	ret

```

```c
// GrowthEquipEvent::GiftGrowthWeaponBox @ 0x80f7050

/* GrowthEquipEvent::GiftGrowthWeaponBox(CUser&) const */

void __thiscall GrowthEquipEvent::GiftGrowthWeaponBox(GrowthEquipEvent *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CDataManager *this_00;
  GameWorld *this_01;
  char *__src;
  size_t sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  char local_159 [256];
  Inven_Item local_59 [2];
  int local_57;
  char *local_1c;
  int local_18;
  int *local_14;
  undefined4 local_10;
  
  local_1c = (char *)CUser::getGrowthWeaponEventdata(param_1);
  if (*local_1c != '\x01') {
    *local_1c = '\x01';
    iVar3 = G_CDataManager();
    local_18 = *(int *)(iVar3 + 0x4bc4);
    Inven_Item::Inven_Item(local_59);
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = (int *)CDataManager::find_item(this_00,local_18);
    local_10 = 0;
    this_01 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_01);
    if (cVar1 == '\0') {
      iVar3 = G_CEnvironment();
      local_10 = *(undefined4 *)(iVar3 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup(param_1);
    }
    if (local_14 != (int *)0x0) {
      local_57 = local_18;
      (**(code **)(*local_14 + 8))(local_14,local_59);
      Inven_Item::set_add_info(local_59,1);
      __src = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_278",(bool *)0x0);
      strncpy(local_159,__src,0xff);
      if (local_57 != 0) {
        sVar4 = strlen(local_159);
        uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar6 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_277"
                           ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar6,local_59,0,uVar5,local_159,sVar4,0,local_10,0,0);
      }
      sVar2 = (short)local_10;
      uVar7 = CUser::get_acc_id(param_1);
      DB_EventSaveGrowthWeapon::makeRequest(uVar7,sVar2);
      CUser::SendEventMailAlaramTooltip(param_1);
    }
  }
  return;
}

```

---

## GrowthEquipEvent

```asm
// === 080f6ef0 GrowthEquipEvent::GrowthEquipEvent  [0x080f6ef0-0x80f6f0b] ===
 80f6ef0:	55                   	push   %ebp
 80f6ef1:	89 e5                	mov    %esp,%ebp
 80f6ef3:	83 ec 18             	sub    $0x18,%esp
 80f6ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6ef9:	89 04 24             	mov    %eax,(%esp)
 80f6efc:	e8 2b 3f 01 00       	call   810ae2c <_ZN10CEventBaseC1Ev>
 80f6f01:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f04:	c7 00 a8 d5 b3 08    	movl   $0x8b3d5a8,(%eax)
 80f6f0a:	c9                   	leave
 80f6f0b:	c3                   	ret

```

```c
// GrowthEquipEvent::GrowthEquipEvent @ 0x80f6ef0

/* GrowthEquipEvent::GrowthEquipEvent() */

void __thiscall GrowthEquipEvent::GrowthEquipEvent(GrowthEquipEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__GrowthEquipEvent_08b3d5a8;
  return;
}

```

---

## SelectGrowthWeapon

```asm
// === 080f73be GrowthEquipEvent::SelectGrowthWeapon  [0x080f73be-0x80f74b1] ===
 80f73be:	55                   	push   %ebp
 80f73bf:	89 e5                	mov    %esp,%ebp
 80f73c1:	56                   	push   %esi
 80f73c2:	53                   	push   %ebx
 80f73c3:	83 ec 20             	sub    $0x20,%esp
 80f73c6:	e8 d0 4d fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f73cb:	8b 80 c4 4b 00 00    	mov    0x4bc4(%eax),%eax
 80f73d1:	3b 45 10             	cmp    0x10(%ebp),%eax
 80f73d4:	0f 94 c0             	sete   %al
 80f73d7:	84 c0                	test   %al,%al
 80f73d9:	0f 84 cb 00 00 00    	je     80f74aa <_ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii+0xec>
 80f73df:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f73e2:	89 04 24             	mov    %eax,(%esp)
 80f73e5:	e8 e6 a8 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f73ea:	89 c3                	mov    %eax,%ebx
 80f73ec:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80f73f3:	ff 
 80f73f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f73f7:	89 04 24             	mov    %eax,(%esp)
 80f73fa:	e8 a1 6b 55 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80f73ff:	89 43 04             	mov    %eax,0x4(%ebx)
 80f7402:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7405:	89 04 24             	mov    %eax,(%esp)
 80f7408:	e8 c3 a8 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f740d:	8b 55 14             	mov    0x14(%ebp),%edx
 80f7410:	89 50 08             	mov    %edx,0x8(%eax)
 80f7413:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f741a:	e8 88 2f fe ff       	call   80da3a7 <_Z11G_GameWorldv>
 80f741f:	89 04 24             	mov    %eax,(%esp)
 80f7422:	e8 f7 9e ff ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 80f7427:	84 c0                	test   %al,%al
 80f7429:	74 10                	je     80f743b <_ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii+0x7d>
 80f742b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f742e:	89 04 24             	mov    %eax,(%esp)
 80f7431:	e8 5a 48 fd ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80f7436:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f7439:	eb 0e                	jmp    80f7449 <_ZN16GrowthEquipEvent18SelectGrowthWeaponER5CUserii+0x8b>
 80f743b:	e8 41 4d fd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80f7440:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 80f7446:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f7449:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f744c:	89 04 24             	mov    %eax,(%esp)
 80f744f:	e8 7c a8 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f7454:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80f7457:	66 89 50 12          	mov    %dx,0x12(%eax)
 80f745b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f745e:	0f bf f0             	movswl %ax,%esi
 80f7461:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80f7468:	ff 
 80f7469:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f746c:	89 04 24             	mov    %eax,(%esp)
 80f746f:	e8 2c 6b 55 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80f7474:	89 c3                	mov    %eax,%ebx
 80f7476:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7479:	89 04 24             	mov    %eax,(%esp)
 80f747c:	e8 ed 2e fe ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80f7481:	89 74 24 0c          	mov    %esi,0xc(%esp)
 80f7485:	8b 55 14             	mov    0x14(%ebp),%edx
 80f7488:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f748c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f7490:	89 04 24             	mov    %eax,(%esp)
 80f7493:	e8 2e 21 35 00       	call   84495c6 <_ZN32DB_EventUpdateGrowthWeaponCharac11makeRequestEjjis>
 80f7498:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f749b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f749f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f74a2:	89 04 24             	mov    %eax,(%esp)
 80f74a5:	e8 7c fd ff ff       	call   80f7226 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser>
 80f74aa:	83 c4 20             	add    $0x20,%esp
 80f74ad:	5b                   	pop    %ebx
 80f74ae:	5e                   	pop    %esi
 80f74af:	5d                   	pop    %ebp
 80f74b0:	c3                   	ret
 80f74b1:	90                   	nop

```

```c
// GrowthEquipEvent::SelectGrowthWeapon @ 0x80f73be

/* GrowthEquipEvent::SelectGrowthWeapon(CUser&, int, int) */

void __thiscall
GrowthEquipEvent::SelectGrowthWeapon(GrowthEquipEvent *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  GameWorld *this_00;
  uint uVar4;
  uint uVar5;
  undefined2 local_10;
  
  iVar2 = G_CDataManager();
  if (*(int *)(iVar2 + 0x4bc4) == param_2) {
    iVar2 = CUser::getGrowthWeaponEventdata(param_1);
    uVar3 = CUser::get_charac_no(param_1,-1);
    *(undefined4 *)(iVar2 + 4) = uVar3;
    iVar2 = CUser::getGrowthWeaponEventdata(param_1);
    *(int *)(iVar2 + 8) = param_3;
    this_00 = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
    if (cVar1 == '\0') {
      iVar2 = G_CEnvironment();
      local_10 = (short)*(undefined4 *)(iVar2 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup(param_1);
    }
    iVar2 = CUser::getGrowthWeaponEventdata(param_1);
    *(short *)(iVar2 + 0x12) = local_10;
    uVar4 = CUser::get_charac_no(param_1,-1);
    uVar5 = CUser::get_acc_id(param_1);
    DB_EventUpdateGrowthWeaponCharac::makeRequest(uVar5,uVar4,param_3,local_10);
    SendGrowthWeaponEventInfo(this,param_1);
  }
  return;
}

```

---

## SendGrowthWeaponEventInfo

```asm
// === 080f7226 GrowthEquipEvent::SendGrowthWeaponEventInfo  [0x080f7226-0x80f73bd] ===
 80f7226:	55                   	push   %ebp
 80f7227:	89 e5                	mov    %esp,%ebp
 80f7229:	56                   	push   %esi
 80f722a:	53                   	push   %ebx
 80f722b:	83 ec 20             	sub    $0x20,%esp
 80f722e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7231:	89 04 24             	mov    %eax,(%esp)
 80f7234:	e8 13 6b 49 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 80f7239:	c7 44 24 08 b9 01 00 	movl   $0x1b9,0x8(%esp)
 80f7240:	00 
 80f7241:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f7248:	00 
 80f7249:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f724c:	89 04 24             	mov    %eax,(%esp)
 80f724f:	e8 a8 46 fd ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 80f7254:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 80f725b:	e8 47 31 fe ff       	call   80da3a7 <_Z11G_GameWorldv>
 80f7260:	89 04 24             	mov    %eax,(%esp)
 80f7263:	e8 b6 a0 ff ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 80f7268:	84 c0                	test   %al,%al
 80f726a:	74 10                	je     80f727c <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0x56>
 80f726c:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f726f:	89 04 24             	mov    %eax,(%esp)
 80f7272:	e8 19 4a fd ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 80f7277:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f727a:	eb 0e                	jmp    80f728a <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0x64>
 80f727c:	e8 00 4f fd ff       	call   80cc181 <_Z14G_CEnvironmentv>
 80f7281:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 80f7287:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f728a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f728d:	89 04 24             	mov    %eax,(%esp)
 80f7290:	e8 3b aa 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f7295:	8b 40 0c             	mov    0xc(%eax),%eax
 80f7298:	85 c0                	test   %eax,%eax
 80f729a:	0f 95 c0             	setne  %al
 80f729d:	84 c0                	test   %al,%al
 80f729f:	74 15                	je     80f72b6 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0x90>
 80f72a1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 80f72a8:	00 
 80f72a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f72ac:	89 04 24             	mov    %eax,(%esp)
 80f72af:	e8 6c 46 fd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80f72b4:	eb 78                	jmp    80f732e <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0x108>
 80f72b6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 80f72bd:	ff 
 80f72be:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f72c1:	89 04 24             	mov    %eax,(%esp)
 80f72c4:	e8 d7 6c 55 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 80f72c9:	89 c3                	mov    %eax,%ebx
 80f72cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f72ce:	89 04 24             	mov    %eax,(%esp)
 80f72d1:	e8 fa a9 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f72d6:	8b 40 04             	mov    0x4(%eax),%eax
 80f72d9:	39 c3                	cmp    %eax,%ebx
 80f72db:	75 20                	jne    80f72fd <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0xd7>
 80f72dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f72e0:	89 04 24             	mov    %eax,(%esp)
 80f72e3:	e8 e8 a9 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f72e8:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 80f72ec:	0f bf d0             	movswl %ax,%edx
 80f72ef:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f72f2:	39 c2                	cmp    %eax,%edx
 80f72f4:	75 07                	jne    80f72fd <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0xd7>
 80f72f6:	b8 01 00 00 00       	mov    $0x1,%eax
 80f72fb:	eb 05                	jmp    80f7302 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0xdc>
 80f72fd:	b8 00 00 00 00       	mov    $0x0,%eax
 80f7302:	84 c0                	test   %al,%al
 80f7304:	74 15                	je     80f731b <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0xf5>
 80f7306:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f730d:	00 
 80f730e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7311:	89 04 24             	mov    %eax,(%esp)
 80f7314:	e8 07 46 fd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80f7319:	eb 13                	jmp    80f732e <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0x108>
 80f731b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80f7322:	00 
 80f7323:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7326:	89 04 24             	mov    %eax,(%esp)
 80f7329:	e8 f2 45 fd ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 80f732e:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7331:	89 04 24             	mov    %eax,(%esp)
 80f7334:	e8 97 a9 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f7339:	8b 40 08             	mov    0x8(%eax),%eax
 80f733c:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7340:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7343:	89 04 24             	mov    %eax,(%esp)
 80f7346:	e8 f1 45 fd ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 80f734b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f734e:	89 04 24             	mov    %eax,(%esp)
 80f7351:	e8 7a a9 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f7356:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 80f735a:	98                   	cwtl
 80f735b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f735f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7362:	89 04 24             	mov    %eax,(%esp)
 80f7365:	e8 3a 2b fe ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 80f736a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f7371:	00 
 80f7372:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7375:	89 04 24             	mov    %eax,(%esp)
 80f7378:	e8 db 45 fd ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 80f737d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7380:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7384:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7387:	89 04 24             	mov    %eax,(%esp)
 80f738a:	e8 2b 12 55 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 80f738f:	eb 1b                	jmp    80f73ac <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser+0x186>
 80f7391:	89 d3                	mov    %edx,%ebx
 80f7393:	89 c6                	mov    %eax,%esi
 80f7395:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7398:	89 04 24             	mov    %eax,(%esp)
 80f739b:	e8 e0 6a 49 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80f73a0:	89 f0                	mov    %esi,%eax
 80f73a2:	89 da                	mov    %ebx,%edx
 80f73a4:	89 04 24             	mov    %eax,(%esp)
 80f73a7:	e8 a4 c3 9e 00       	call   8ae3750 <_Unwind_Resume>
 80f73ac:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f73af:	89 04 24             	mov    %eax,(%esp)
 80f73b2:	e8 c9 6a 49 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 80f73b7:	83 c4 20             	add    $0x20,%esp
 80f73ba:	5b                   	pop    %ebx
 80f73bb:	5e                   	pop    %esi
 80f73bc:	5d                   	pop    %ebp
 80f73bd:	c3                   	ret

```

```c
// GrowthEquipEvent::SendGrowthWeaponEventInfo @ 0x80f7226

/* GrowthEquipEvent::SendGrowthWeaponEventInfo(CUser&) */

void __thiscall GrowthEquipEvent::SendGrowthWeaponEventInfo(GrowthEquipEvent *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  GameWorld *this_00;
  int iVar3;
  int iVar4;
  PacketGuard local_1c [12];
  int local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 080f724f to 080f738e has its CatchHandler @ 080f7391 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1b9);
  local_10 = 0;
  this_00 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_00);
  if (cVar2 == '\0') {
    iVar3 = G_CEnvironment();
    local_10 = *(int *)(iVar3 + 0x378);
  }
  else {
    local_10 = CUser::GetServerGroup(param_1);
  }
  iVar3 = CUser::getGrowthWeaponEventdata(param_1);
  if (*(int *)(iVar3 + 0xc) != 0) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,2);
    goto LAB_080f732e;
  }
  iVar3 = CUser::get_charac_no(param_1,-1);
  iVar4 = CUser::getGrowthWeaponEventdata(param_1);
  if (iVar3 == *(int *)(iVar4 + 4)) {
    iVar3 = CUser::getGrowthWeaponEventdata(param_1);
    if (*(short *)(iVar3 + 0x12) != local_10) goto LAB_080f72fd;
    bVar1 = true;
  }
  else {
LAB_080f72fd:
    bVar1 = false;
  }
  if (bVar1) {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
  }
LAB_080f732e:
  iVar3 = CUser::getGrowthWeaponEventdata(param_1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(iVar3 + 8));
  iVar3 = CUser::getGrowthWeaponEventdata(param_1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(iVar3 + 0x10));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

---

## SendInfinityGrowthWeapon

```asm
// === 080f74b2 GrowthEquipEvent::SendInfinityGrowthWeapon  [0x080f74b2-0x80f770f] ===
 80f74b2:	55                   	push   %ebp
 80f74b3:	89 e5                	mov    %esp,%ebp
 80f74b5:	56                   	push   %esi
 80f74b6:	53                   	push   %ebx
 80f74b7:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 80f74bd:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 80f74c0:	89 04 24             	mov    %eax,(%esp)
 80f74c3:	e8 8c 43 fd ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 80f74c8:	8b 45 10             	mov    0x10(%ebp),%eax
 80f74cb:	8b 40 02             	mov    0x2(%eax),%eax
 80f74ce:	89 c3                	mov    %eax,%ebx
 80f74d0:	e8 c6 4c fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f74d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f74d9:	89 04 24             	mov    %eax,(%esp)
 80f74dc:	e8 cb e0 26 00       	call   83655ac <_ZNK12CDataManager27get_GrowthWeaponEventRewardEi>
 80f74e1:	89 45 b5             	mov    %eax,-0x4b(%ebp)
 80f74e4:	8b 45 14             	mov    0x14(%ebp),%eax
 80f74e7:	89 04 24             	mov    %eax,(%esp)
 80f74ea:	e8 56 03 00 00       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 80f74ef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80f74f2:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 80f74f5:	85 c0                	test   %eax,%eax
 80f74f7:	75 0a                	jne    80f7503 <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii+0x51>
 80f74f9:	b8 17 00 00 00       	mov    $0x17,%eax
 80f74fe:	e9 02 02 00 00       	jmp    80f7705 <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii+0x253>
 80f7503:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 80f7506:	89 c3                	mov    %eax,%ebx
 80f7508:	e8 8e 4c fd ff       	call   80cc19b <_Z14G_CDataManagerv>
 80f750d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f7511:	89 04 24             	mov    %eax,(%esp)
 80f7514:	e8 19 85 26 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 80f7519:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f751c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 80f7520:	74 7d                	je     80f759f <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii+0xed>
 80f7522:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7525:	8b 00                	mov    (%eax),%eax
 80f7527:	83 c0 08             	add    $0x8,%eax
 80f752a:	8b 10                	mov    (%eax),%edx
 80f752c:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 80f752f:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7533:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7536:	89 04 24             	mov    %eax,(%esp)
 80f7539:	ff d2                	call   *%edx
 80f753b:	8b 45 10             	mov    0x10(%ebp),%eax
 80f753e:	89 04 24             	mov    %eax,(%esp)
 80f7541:	e8 26 db ff ff       	call   80f506c <_ZNK10Inven_Item10GetUpgradeEv>
 80f7546:	0f b6 c0             	movzbl %al,%eax
 80f7549:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f754d:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 80f7550:	89 04 24             	mov    %eax,(%esp)
 80f7553:	e8 a4 9a ff ff       	call   80f0ffc <_ZN10Inven_Item10SetUpgradeEh>
 80f7558:	8b 45 10             	mov    0x10(%ebp),%eax
 80f755b:	89 04 24             	mov    %eax,(%esp)
 80f755e:	e8 d7 02 00 00       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 80f7563:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7567:	8d 45 b3             	lea    -0x4d(%ebp),%eax
 80f756a:	89 04 24             	mov    %eax,(%esp)
 80f756d:	e8 12 43 fd ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 80f7572:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7575:	0f b6 40 33          	movzbl 0x33(%eax),%eax
 80f7579:	83 e0 1f             	and    $0x1f,%eax
 80f757c:	89 c2                	mov    %eax,%edx
 80f757e:	83 e2 1f             	and    $0x1f,%edx
 80f7581:	0f b6 45 e6          	movzbl -0x1a(%ebp),%eax
 80f7585:	83 e0 e0             	and    $0xffffffe0,%eax
 80f7588:	09 d0                	or     %edx,%eax
 80f758a:	88 45 e6             	mov    %al,-0x1a(%ebp)
 80f758d:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7590:	8b 40 11             	mov    0x11(%eax),%eax
 80f7593:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 80f7596:	8b 45 10             	mov    0x10(%ebp),%eax
 80f7599:	8b 40 0d             	mov    0xd(%eax),%eax
 80f759c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 80f759f:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 80f75a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f75a5:	89 04 24             	mov    %eax,(%esp)
 80f75a8:	e8 e1 2c fe ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80f75ad:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 80f75b4:	00 
 80f75b5:	c7 44 24 10 36 00 00 	movl   $0x36,0x10(%esp)
 80f75bc:	00 
 80f75bd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 80f75c4:	00 
 80f75c5:	8b 55 18             	mov    0x18(%ebp),%edx
 80f75c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f75cc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f75d0:	89 04 24             	mov    %eax,(%esp)
 80f75d3:	e8 34 ca 40 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 80f75d8:	83 f0 01             	xor    $0x1,%eax
 80f75db:	84 c0                	test   %al,%al
 80f75dd:	74 0a                	je     80f75e9 <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii+0x137>
 80f75df:	b8 11 00 00 00       	mov    $0x11,%eax
 80f75e4:	e9 1c 01 00 00       	jmp    80f7705 <_ZNK16GrowthEquipEvent24SendInfinityGrowthWeaponEP5CUserPK10Inven_Itemii+0x253>
 80f75e9:	8b 45 14             	mov    0x14(%ebp),%eax
 80f75ec:	8b 55 18             	mov    0x18(%ebp),%edx
 80f75ef:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80f75f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f75f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f75fe:	00 
 80f75ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7602:	89 04 24             	mov    %eax,(%esp)
 80f7605:	e8 ce 4c 58 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 80f760a:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 80f760d:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f7610:	89 04 24             	mov    %eax,(%esp)
 80f7613:	e8 76 2c fe ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 80f7618:	8b 55 b3             	mov    -0x4d(%ebp),%edx
 80f761b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80f761f:	8b 55 b7             	mov    -0x49(%ebp),%edx
 80f7622:	89 54 24 10          	mov    %edx,0x10(%esp)
 80f7626:	8b 55 bb             	mov    -0x45(%ebp),%edx
 80f7629:	89 54 24 14          	mov    %edx,0x14(%esp)
 80f762d:	8b 55 bf             	mov    -0x41(%ebp),%edx
 80f7630:	89 54 24 18          	mov    %edx,0x18(%esp)
 80f7634:	8b 55 c3             	mov    -0x3d(%ebp),%edx
 80f7637:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 80f763b:	8b 55 c7             	mov    -0x39(%ebp),%edx
 80f763e:	89 54 24 20          	mov    %edx,0x20(%esp)
 80f7642:	8b 55 cb             	mov    -0x35(%ebp),%edx
 80f7645:	89 54 24 24          	mov    %edx,0x24(%esp)
 80f7649:	8b 55 cf             	mov    -0x31(%ebp),%edx
 80f764c:	89 54 24 28          	mov    %edx,0x28(%esp)
 80f7650:	8b 55 d3             	mov    -0x2d(%ebp),%edx
 80f7653:	89 54 24 2c          	mov    %edx,0x2c(%esp)
 80f7657:	8b 55 d7             	mov    -0x29(%ebp),%edx
 80f765a:	89 54 24 30          	mov    %edx,0x30(%esp)
 80f765e:	8b 55 db             	mov    -0x25(%ebp),%edx
 80f7661:	89 54 24 34          	mov    %edx,0x34(%esp)
 80f7665:	8b 55 df             	mov    -0x21(%ebp),%edx
 80f7668:	89 54 24 38          	mov    %edx,0x38(%esp)
 80f766c:	8b 55 e3             	mov    -0x1d(%ebp),%edx
 80f766f:	89 54 24 3c          	mov    %edx,0x3c(%esp)
 80f7673:	8b 55 e7             	mov    -0x19(%ebp),%edx
 80f7676:	89 54 24 40          	mov    %edx,0x40(%esp)
 80f767a:	8b 55 eb             	mov    -0x15(%ebp),%edx
 80f767d:	89 54 24 44          	mov    %edx,0x44(%esp)
 80f7681:	0f b6 55 ef          	movzbl -0x11(%ebp),%edx
 80f7685:	88 54 24 48          	mov    %dl,0x48(%esp)
 80f7689:	8b 55 18             	mov    0x18(%ebp),%edx
 80f768c:	89 54 24 08          	mov    %edx,0x8(%esp)
 80f7690:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f7694:	89 04 24             	mov    %eax,(%esp)
 80f7697:	e8 12 8a 40 00       	call   85000ae <_ZN10CInventory11update_itemE10INVEN_TYPEi10Inven_Item>
 80f769c:	8b 45 14             	mov    0x14(%ebp),%eax
 80f769f:	8b 55 18             	mov    0x18(%ebp),%edx
 80f76a2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 80f76a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 80f76aa:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f76b1:	00 
 80f76b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f76b5:	89 04 24             	mov    %eax,(%esp)
 80f76b8:	e8 1b 4c 58 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 80f76bd:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 80f76c0:	89 c6                	mov    %eax,%esi
 80f76c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f76c5:	89 04 24             	mov    %eax,(%esp)
 80f76c8:	e8 03 a6 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f76cd:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 80f76d1:	0f bf d8             	movswl %ax,%ebx
 80f76d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f76d7:	89 04 24             	mov    %eax,(%esp)
 80f76da:	e8 8f 2c fe ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 80f76df:	89 74 24 08          	mov    %esi,0x8(%esp)
 80f76e3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 80f76e7:	89 04 24             	mov    %eax,(%esp)
 80f76ea:	e8 fb 20 35 00       	call   84497ea <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi>
 80f76ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 80f76f2:	89 04 24             	mov    %eax,(%esp)
 80f76f5:	e8 d6 a5 59 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 80f76fa:	8b 55 b5             	mov    -0x4b(%ebp),%edx
 80f76fd:	89 50 0c             	mov    %edx,0xc(%eax)
 80f7700:	b8 00 00 00 00       	mov    $0x0,%eax
 80f7705:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 80f770b:	5b                   	pop    %ebx
 80f770c:	5e                   	pop    %esi
 80f770d:	5d                   	pop    %ebp
 80f770e:	c3                   	ret
 80f770f:	90                   	nop

```

```c
// GrowthEquipEvent::SendInfinityGrowthWeapon @ 0x80f74b2

/* GrowthEquipEvent::SendInfinityGrowthWeapon(CUser*, Inven_Item const*, int, int) const */

undefined4 __thiscall
GrowthEquipEvent::SendInfinityGrowthWeapon
          (GrowthEquipEvent *this,CUser *param_1,Inven_Item *param_2,int param_3,int param_4)

{
  short sVar1;
  uchar uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CDataManager *this_00;
  CInventory *pCVar7;
  int iVar8;
  uint uVar9;
  undefined2 local_51;
  undefined2 uStack_4f;
  undefined2 uStack_4d;
  undefined2 uStack_4b;
  undefined4 local_49;
  undefined4 uStack_45;
  undefined4 uStack_41;
  undefined4 uStack_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_19;
  undefined1 local_15;
  undefined4 local_14;
  int *local_10;
  
  Inven_Item::Inven_Item((Inven_Item *)&local_51);
  uVar6 = *(undefined4 *)(param_2 + 2);
  iVar4 = G_CDataManager();
  uVar5 = CDataManager::get_GrowthWeaponEventReward(iVar4);
  uStack_4f = (undefined2)uVar5;
  uStack_4d = (undefined2)((uint)uVar5 >> 0x10);
  local_14 = GetInvenTypeFromItemSpace(param_3,uVar6);
  if (CONCAT22(uStack_4d,uStack_4f) == 0) {
    uVar6 = 0x17;
  }
  else {
    iVar4 = CONCAT22(uStack_4d,uStack_4f);
    this_00 = (CDataManager *)G_CDataManager();
    local_10 = (int *)CDataManager::find_item(this_00,iVar4);
    if (local_10 != (int *)0x0) {
      (**(code **)(*local_10 + 8))(local_10,&local_51);
      uVar2 = Inven_Item::GetUpgrade(param_2);
      Inven_Item::SetUpgrade((Inven_Item *)&local_51,uVar2);
      iVar4 = Inven_Item::get_add_info(param_2);
      Inven_Item::set_add_info((Inven_Item *)&local_51,iVar4);
      local_21 = CONCAT13(local_21._3_1_ & 0xe0 | (byte)param_2[0x33] & 0x1f,(undefined3)local_21);
      uStack_3d._0_1_ = (undefined1)((uint)*(undefined4 *)(param_2 + 0x11) >> 0x18);
      uStack_45._1_3_ = (undefined3)*(undefined4 *)(param_2 + 0xd);
      uStack_41._0_1_ = (undefined1)((uint)*(undefined4 *)(param_2 + 0xd) >> 0x18);
      uStack_41 = CONCAT31((int3)*(undefined4 *)(param_2 + 0x11),(undefined1)uStack_41);
    }
    uVar6 = local_14;
    pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
    cVar3 = CInventory::delete_item(pCVar7,uVar6,param_4,1,0x36,1);
    if (cVar3 == '\x01') {
      CUser::SendUpdateItem(param_1,1,param_3,param_4);
      uVar6 = local_14;
      uVar5 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      CInventory::update_item
                (uVar5,uVar6,param_4,CONCAT22(uStack_4f,local_51),CONCAT22(uStack_4b,uStack_4d),
                 local_49,uStack_45,uStack_41,uStack_3d,local_39,local_35,local_31,local_2d,local_29
                 ,local_25,local_21,local_1d,local_19,local_15);
      CUser::SendUpdateItem(param_1,1,param_3,param_4);
      iVar4 = CONCAT22(uStack_4d,uStack_4f);
      iVar8 = CUser::getGrowthWeaponEventdata(param_1);
      sVar1 = *(short *)(iVar8 + 0x10);
      uVar9 = CUser::get_acc_id(param_1);
      DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uVar9,sVar1,iVar4);
      iVar4 = CUser::getGrowthWeaponEventdata(param_1);
      *(uint *)(iVar4 + 0xc) = CONCAT22(uStack_4d,uStack_4f);
      uVar6 = 0;
    }
    else {
      uVar6 = 0x11;
    }
  }
  return uVar6;
}

```

---

## StartAction

```asm
// === 080f7710 GrowthEquipEvent::StartAction  [0x080f7710-0x80f77c2] ===
 80f7710:	55                   	push   %ebp
 80f7711:	89 e5                	mov    %esp,%ebp
 80f7713:	83 ec 28             	sub    $0x28,%esp
 80f7716:	e8 8c 2c fe ff       	call   80da3a7 <_Z11G_GameWorldv>
 80f771b:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 80f7721:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7724:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f7728:	89 04 24             	mov    %eax,(%esp)
 80f772b:	e8 76 01 00 00       	call   80f78a6 <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE5beginEv>
 80f7730:	83 ec 04             	sub    $0x4,%esp
 80f7733:	eb 55                	jmp    80f778a <_ZN16GrowthEquipEvent11StartActionEv+0x7a>
 80f7735:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f7738:	89 04 24             	mov    %eax,(%esp)
 80f773b:	e8 04 02 00 00       	call   80f7944 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEptEv>
 80f7740:	8b 40 04             	mov    0x4(%eax),%eax
 80f7743:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80f7746:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f7749:	89 04 24             	mov    %eax,(%esp)
 80f774c:	e8 3b 2c fe ff       	call   80da38c <_ZN5CUser9get_stateEv>
 80f7751:	83 f8 02             	cmp    $0x2,%eax
 80f7754:	0f 9f c0             	setg   %al
 80f7757:	84 c0                	test   %al,%al
 80f7759:	74 12                	je     80f776d <_ZN16GrowthEquipEvent11StartActionEv+0x5d>
 80f775b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80f775e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f7762:	8b 45 08             	mov    0x8(%ebp),%eax
 80f7765:	89 04 24             	mov    %eax,(%esp)
 80f7768:	e8 b9 fa ff ff       	call   80f7226 <_ZN16GrowthEquipEvent25SendGrowthWeaponEventInfoER5CUser>
 80f776d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 80f7770:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 80f7777:	00 
 80f7778:	8d 55 e8             	lea    -0x18(%ebp),%edx
 80f777b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f777f:	89 04 24             	mov    %eax,(%esp)
 80f7782:	e8 7f 01 00 00       	call   80f7906 <_ZNSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEppEi>
 80f7787:	83 ec 04             	sub    $0x4,%esp
 80f778a:	e8 18 2c fe ff       	call   80da3a7 <_Z11G_GameWorldv>
 80f778f:	8d 90 34 01 00 00    	lea    0x134(%eax),%edx
 80f7795:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f7798:	89 54 24 04          	mov    %edx,0x4(%esp)
 80f779c:	89 04 24             	mov    %eax,(%esp)
 80f779f:	e8 28 01 00 00       	call   80f78cc <_ZNSt3mapItP5CUserSt4lessItESaISt4pairIKtS1_EEE3endEv>
 80f77a4:	83 ec 04             	sub    $0x4,%esp
 80f77a7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 80f77aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 80f77ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f77b1:	89 04 24             	mov    %eax,(%esp)
 80f77b4:	e8 39 01 00 00       	call   80f78f2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKtP5CUserEEneERKS5_>
 80f77b9:	84 c0                	test   %al,%al
 80f77bb:	0f 85 74 ff ff ff    	jne    80f7735 <_ZN16GrowthEquipEvent11StartActionEv+0x25>
 80f77c1:	c9                   	leave
 80f77c2:	c3                   	ret

```

```c
// GrowthEquipEvent::StartAction @ 0x80f7710

/* GrowthEquipEvent::StartAction() */

void __thiscall GrowthEquipEvent::StartAction(GrowthEquipEvent *this)

{
  char cVar1;
  int iVar2;
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_1c [4];
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> local_14 [4];
  CUser *local_10;
  
  G_GameWorld();
  std::
  map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
  ::begin(local_1c);
  while( true ) {
    G_GameWorld();
    std::
    map<unsigned_short,CUser*,std::less<unsigned_short>,std::allocator<std::pair<unsigned_short_const,CUser*>>>
    ::end(local_18);
    cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator!=
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c,
                       (_Rb_tree_iterator *)local_18);
    if (cVar1 == '\0') break;
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator->
                      ((_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>> *)local_1c);
    local_10 = *(CUser **)(iVar2 + 4);
    iVar2 = CUser::get_state(local_10);
    if (2 < iVar2) {
      SendGrowthWeaponEventInfo(this,local_10);
    }
    std::_Rb_tree_iterator<std::pair<unsigned_short_const,CUser*>>::operator++
              (local_14,(int)local_1c);
  }
  return;
}

```

---

## StartEvent

```asm
// === 080f6f5a GrowthEquipEvent::StartEvent  [0x080f6f5a-0x80f6fab] ===
 80f6f5a:	55                   	push   %ebp
 80f6f5b:	89 e5                	mov    %esp,%ebp
 80f6f5d:	83 ec 28             	sub    $0x28,%esp
 80f6f60:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f63:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f6f6a:	00 
 80f6f6b:	89 04 24             	mov    %eax,(%esp)
 80f6f6e:	e8 6f 15 fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80f6f73:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f6f7a:	00 
 80f6f7b:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 80f6f82:	00 
 80f6f83:	c7 44 24 04 60 d5 b3 	movl   $0x8b3d560,0x4(%esp)
 80f6f8a:	08 
 80f6f8b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f6f8e:	89 04 24             	mov    %eax,(%esp)
 80f6f91:	e8 82 87 45 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80f6f96:	c7 44 24 04 43 c8 b3 	movl   $0x8b3c843,0x4(%esp)
 80f6f9d:	08 
 80f6f9e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f6fa1:	89 04 24             	mov    %eax,(%esp)
 80f6fa4:	e8 df 87 45 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80f6fa9:	c9                   	leave
 80f6faa:	c3                   	ret
 80f6fab:	90                   	nop

```

```c
// GrowthEquipEvent::StartEvent @ 0x80f6f5a

/* GrowthEquipEvent::StartEvent() */

void __thiscall GrowthEquipEvent::StartEvent(GrowthEquipEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GrowthEquipEvent::StartEvent()",0x18,0);
  cMyTrace::operator()(local_1c,"GrowthEquipEvent Event start!");
  return;
}

```

---

## StartEvent_080f6fac

```asm
// === 080f6fac GrowthEquipEvent::StartEvent  [0x080f6fac-0x80f6ffd] ===
 80f6fac:	55                   	push   %ebp
 80f6fad:	89 e5                	mov    %esp,%ebp
 80f6faf:	83 ec 28             	sub    $0x28,%esp
 80f6fb2:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6fb5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80f6fbc:	00 
 80f6fbd:	89 04 24             	mov    %eax,(%esp)
 80f6fc0:	e8 1d 15 fd ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 80f6fc5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 80f6fcc:	00 
 80f6fcd:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 80f6fd4:	00 
 80f6fd5:	c7 44 24 04 20 d5 b3 	movl   $0x8b3d520,0x4(%esp)
 80f6fdc:	08 
 80f6fdd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f6fe0:	89 04 24             	mov    %eax,(%esp)
 80f6fe3:	e8 30 87 45 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 80f6fe8:	c7 44 24 04 64 c8 b3 	movl   $0x8b3c864,0x4(%esp)
 80f6fef:	08 
 80f6ff0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 80f6ff3:	89 04 24             	mov    %eax,(%esp)
 80f6ff6:	e8 8d 87 45 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 80f6ffb:	c9                   	leave
 80f6ffc:	c3                   	ret
 80f6ffd:	90                   	nop

```

```c
// GrowthEquipEvent::StartEvent @ 0x80f6fac

/* GrowthEquipEvent::StartEvent(Word_Param) */

void GrowthEquipEvent::StartEvent(CEventBase *param_1)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag(param_1,true);
  cMyTrace::cMyTrace(local_1c,"virtual void GrowthEquipEvent::StartEvent(Word_Param)",0x1e,0);
  cMyTrace::operator()(local_1c,"GrowthEquipEvent Event start! [monitor request]");
  return;
}

```

---

## ~GrowthEquipEvent

```asm
// === 080f6f0c GrowthEquipEvent::~GrowthEquipEvent  [0x080f6f0c-0x80f6f3b] ===
 80f6f0c:	55                   	push   %ebp
 80f6f0d:	89 e5                	mov    %esp,%ebp
 80f6f0f:	83 ec 18             	sub    $0x18,%esp
 80f6f12:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f15:	c7 00 a8 d5 b3 08    	movl   $0x8b3d5a8,(%eax)
 80f6f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f1e:	89 04 24             	mov    %eax,(%esp)
 80f6f21:	e8 2c 3f 01 00       	call   810ae52 <_ZN10CEventBaseD1Ev>
 80f6f26:	b8 00 00 00 00       	mov    $0x0,%eax
 80f6f2b:	84 c0                	test   %al,%al
 80f6f2d:	74 0b                	je     80f6f3a <_ZN16GrowthEquipEventD1Ev+0x2e>
 80f6f2f:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f32:	89 04 24             	mov    %eax,(%esp)
 80f6f35:	e8 b6 d5 62 00       	call   87244f0 <_ZdlPv>
 80f6f3a:	c9                   	leave
 80f6f3b:	c3                   	ret

```

```c
// GrowthEquipEvent::~GrowthEquipEvent @ 0x80f6f0c

/* WARNING: Removing unreachable block (ram,0x080f6f2f) */
/* GrowthEquipEvent::~GrowthEquipEvent() */

void __thiscall GrowthEquipEvent::~GrowthEquipEvent(GrowthEquipEvent *this)

{
  *(undefined ***)this = &PTR__GrowthEquipEvent_08b3d5a8;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~GrowthEquipEvent_080f6f3c

```asm
// === 080f6f3c GrowthEquipEvent::~GrowthEquipEvent  [0x080f6f3c-0x80f6f59] ===
 80f6f3c:	55                   	push   %ebp
 80f6f3d:	89 e5                	mov    %esp,%ebp
 80f6f3f:	83 ec 18             	sub    $0x18,%esp
 80f6f42:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f45:	89 04 24             	mov    %eax,(%esp)
 80f6f48:	e8 bf ff ff ff       	call   80f6f0c <_ZN16GrowthEquipEventD1Ev>
 80f6f4d:	8b 45 08             	mov    0x8(%ebp),%eax
 80f6f50:	89 04 24             	mov    %eax,(%esp)
 80f6f53:	e8 98 d5 62 00       	call   87244f0 <_ZdlPv>
 80f6f58:	c9                   	leave
 80f6f59:	c3                   	ret

```

```c
// GrowthEquipEvent::~GrowthEquipEvent @ 0x80f6f3c

/* GrowthEquipEvent::~GrowthEquipEvent() */

void __thiscall GrowthEquipEvent::~GrowthEquipEvent(GrowthEquipEvent *this)

{
  ~GrowthEquipEvent(this);
  operator_delete(this);
  return;
}

```

