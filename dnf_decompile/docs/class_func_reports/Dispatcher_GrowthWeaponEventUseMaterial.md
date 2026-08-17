# Dispatcher_GrowthWeaponEventUseMaterial

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e82fa Dispatcher_GrowthWeaponEventUseMaterial::check_error  [0x081e82fa-0x81e8495] ===
 81e82fa:	55                   	push   %ebp
 81e82fb:	89 e5                	mov    %esp,%ebp
 81e82fd:	53                   	push   %ebx
 81e82fe:	83 ec 24             	sub    $0x24,%esp
 81e8301:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81e8305:	75 0a                	jne    81e8311 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x17>
 81e8307:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81e830c:	e9 7f 01 00 00       	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e8311:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8314:	89 04 24             	mov    %eax,(%esp)
 81e8317:	e8 70 20 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e831c:	83 f8 03             	cmp    $0x3,%eax
 81e831f:	0f 95 c0             	setne  %al
 81e8322:	84 c0                	test   %al,%al
 81e8324:	74 0a                	je     81e8330 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x36>
 81e8326:	b8 13 00 00 00       	mov    $0x13,%eax
 81e832b:	e9 60 01 00 00       	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e8330:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8333:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e8336:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e8339:	8b 58 11             	mov    0x11(%eax),%ebx
 81e833c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e833f:	89 04 24             	mov    %eax,(%esp)
 81e8342:	e8 37 1f ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e8347:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e834b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8352:	00 
 81e8353:	89 04 24             	mov    %eax,(%esp)
 81e8356:	e8 83 3e 31 00       	call   84fc1de <_ZNK10CInventory11GetInvenRefEii>
 81e835b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e835e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e8361:	8b 40 02             	mov    0x2(%eax),%eax
 81e8364:	85 c0                	test   %eax,%eax
 81e8366:	75 0a                	jne    81e8372 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x78>
 81e8368:	b8 15 00 00 00       	mov    $0x15,%eax
 81e836d:	e9 1e 01 00 00       	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e8372:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e8375:	8b 58 02             	mov    0x2(%eax),%ebx
 81e8378:	e8 1e 3e ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e837d:	89 04 24             	mov    %eax,(%esp)
 81e8380:	e8 a5 d2 17 00       	call   836562a <_ZN12CDataManager28get_GrowthWeaponMaterialItemEv>
 81e8385:	39 c3                	cmp    %eax,%ebx
 81e8387:	0f 95 c0             	setne  %al
 81e838a:	84 c0                	test   %al,%al
 81e838c:	74 0a                	je     81e8398 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x9e>
 81e838e:	b8 11 00 00 00       	mov    $0x11,%eax
 81e8393:	e9 f8 00 00 00       	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e8398:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e839b:	89 04 24             	mov    %eax,(%esp)
 81e839e:	e8 2d 99 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e83a3:	8b 58 04             	mov    0x4(%eax),%ebx
 81e83a6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e83ad:	ff 
 81e83ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e83b1:	89 04 24             	mov    %eax,(%esp)
 81e83b4:	e8 e7 5b 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e83b9:	39 c3                	cmp    %eax,%ebx
 81e83bb:	0f 95 c0             	setne  %al
 81e83be:	84 c0                	test   %al,%al
 81e83c0:	74 0a                	je     81e83cc <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0xd2>
 81e83c2:	b8 03 00 00 00       	mov    $0x3,%eax
 81e83c7:	e9 c4 00 00 00       	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e83cc:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81e83d3:	e8 cf 1f ef ff       	call   80da3a7 <_Z11G_GameWorldv>
 81e83d8:	89 04 24             	mov    %eax,(%esp)
 81e83db:	e8 3e 8f f0 ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 81e83e0:	84 c0                	test   %al,%al
 81e83e2:	74 10                	je     81e83f4 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0xfa>
 81e83e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e83e7:	89 04 24             	mov    %eax,(%esp)
 81e83ea:	e8 a1 38 ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e83ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e83f2:	eb 0e                	jmp    81e8402 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x108>
 81e83f4:	e8 88 3d ee ff       	call   80cc181 <_Z14G_CEnvironmentv>
 81e83f9:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 81e83ff:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8402:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8405:	89 04 24             	mov    %eax,(%esp)
 81e8408:	e8 c3 98 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e840d:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81e8411:	0f bf d0             	movswl %ax,%edx
 81e8414:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8417:	39 c2                	cmp    %eax,%edx
 81e8419:	0f 95 c0             	setne  %al
 81e841c:	84 c0                	test   %al,%al
 81e841e:	74 07                	je     81e8427 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x12d>
 81e8420:	b8 03 00 00 00       	mov    $0x3,%eax
 81e8425:	eb 69                	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e8427:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e842a:	89 04 24             	mov    %eax,(%esp)
 81e842d:	e8 9e 98 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e8432:	0f b7 58 10          	movzwl 0x10(%eax),%ebx
 81e8436:	e8 60 3d ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e843b:	89 04 24             	mov    %eax,(%esp)
 81e843e:	e8 f5 d1 17 00       	call   8365638 <_ZN12CDataManager27get_GrowthWeaponMaterialMaxEv>
 81e8443:	66 39 c3             	cmp    %ax,%bx
 81e8446:	0f 9d c0             	setge  %al
 81e8449:	84 c0                	test   %al,%al
 81e844b:	74 07                	je     81e8454 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x15a>
 81e844d:	b8 11 00 00 00       	mov    $0x11,%eax
 81e8452:	eb 3c                	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e8454:	a1 30 f7 41 09       	mov    0x941f730,%eax
 81e8459:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 81e8460:	00 
 81e8461:	89 04 24             	mov    %eax,(%esp)
 81e8464:	e8 2f d5 f2 ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 81e8469:	8b 10                	mov    (%eax),%edx
 81e846b:	83 c2 34             	add    $0x34,%edx
 81e846e:	8b 12                	mov    (%edx),%edx
 81e8470:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e8477:	00 
 81e8478:	89 04 24             	mov    %eax,(%esp)
 81e847b:	ff d2                	call   *%edx
 81e847d:	83 f0 01             	xor    $0x1,%eax
 81e8480:	84 c0                	test   %al,%al
 81e8482:	74 07                	je     81e848b <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x191>
 81e8484:	b8 01 00 00 00       	mov    $0x1,%eax
 81e8489:	eb 05                	jmp    81e8490 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE+0x196>
 81e848b:	b8 00 00 00 00       	mov    $0x0,%eax
 81e8490:	83 c4 24             	add    $0x24,%esp
 81e8493:	5b                   	pop    %ebx
 81e8494:	5d                   	pop    %ebp
 81e8495:	c3                   	ret

```

```c
// Dispatcher_GrowthWeaponEventUseMaterial::check_error @ 0x81e82fa

/* Dispatcher_GrowthWeaponEventUseMaterial::check_error(CUser*, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::check_error
          (Dispatcher_GrowthWeaponEventUseMaterial *this,CUser *param_1,MSG_BASE *param_2)

{
  short sVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  CInventory *this_00;
  CDataManager *pCVar6;
  int iVar7;
  GameWorld *this_01;
  int *piVar8;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar5 = CUser::get_state(param_1);
    if (iVar5 == 3) {
      iVar5 = *(int *)(param_2 + 0x11);
      this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar5 = CInventory::GetInvenRef(this_00,1,iVar5);
      if (*(int *)(iVar5 + 2) == 0) {
        uVar4 = 0x15;
      }
      else {
        iVar5 = *(int *)(iVar5 + 2);
        pCVar6 = (CDataManager *)G_CDataManager();
        iVar7 = CDataManager::get_GrowthWeaponMaterialItem(pCVar6);
        if (iVar5 == iVar7) {
          iVar5 = CUser::getGrowthWeaponEventdata(param_1);
          iVar5 = *(int *)(iVar5 + 4);
          iVar7 = CUser::get_charac_no(param_1,-1);
          if (iVar5 == iVar7) {
            this_01 = (GameWorld *)G_GameWorld();
            cVar2 = GameWorld::IsIntegratedPvPBaseChannel(this_01);
            if (cVar2 == '\0') {
              iVar5 = G_CEnvironment();
              local_10 = *(int *)(iVar5 + 0x378);
            }
            else {
              local_10 = CUser::GetServerGroup(param_1);
            }
            iVar5 = CUser::getGrowthWeaponEventdata(param_1);
            if (*(short *)(iVar5 + 0x12) == local_10) {
              iVar5 = CUser::getGrowthWeaponEventdata(param_1);
              sVar1 = *(short *)(iVar5 + 0x10);
              pCVar6 = (CDataManager *)G_CDataManager();
              sVar3 = CDataManager::get_GrowthWeaponMaterialMax(pCVar6);
              if (sVar1 < sVar3) {
                piVar8 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,100);
                cVar2 = (**(code **)(*piVar8 + 0x34))(piVar8,0);
                if (cVar2 == '\x01') {
                  uVar4 = 0;
                }
                else {
                  uVar4 = 1;
                }
              }
              else {
                uVar4 = 0x11;
              }
            }
            else {
              uVar4 = 3;
            }
          }
          else {
            uVar4 = 3;
          }
        }
        else {
          uVar4 = 0x11;
        }
      }
    }
    else {
      uVar4 = 0x13;
    }
  }
  return uVar4;
}

```

---

## process

```asm
// === 081e81a4 Dispatcher_GrowthWeaponEventUseMaterial::process  [0x081e81a4-0x81e82f9] ===
 81e81a4:	55                   	push   %ebp
 81e81a5:	89 e5                	mov    %esp,%ebp
 81e81a7:	56                   	push   %esi
 81e81a8:	53                   	push   %ebx
 81e81a9:	83 ec 30             	sub    $0x30,%esp
 81e81ac:	8b 45 14             	mov    0x14(%ebp),%eax
 81e81af:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81e81b2:	8b 45 10             	mov    0x10(%ebp),%eax
 81e81b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e81b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e81bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e81c0:	8b 45 08             	mov    0x8(%ebp),%eax
 81e81c3:	89 04 24             	mov    %eax,(%esp)
 81e81c6:	e8 2f 01 00 00       	call   81e82fa <_ZN39Dispatcher_GrowthWeaponEventUseMaterial11check_errorEP5CUserR8MSG_BASE>
 81e81cb:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81e81ce:	89 42 04             	mov    %eax,0x4(%edx)
 81e81d1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e81d4:	8b 40 04             	mov    0x4(%eax),%eax
 81e81d7:	85 c0                	test   %eax,%eax
 81e81d9:	7e 0a                	jle    81e81e5 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase+0x41>
 81e81db:	b8 00 00 00 00       	mov    $0x0,%eax
 81e81e0:	e9 0e 01 00 00       	jmp    81e82f3 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase+0x14f>
 81e81e5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e81e8:	8b 40 04             	mov    0x4(%eax),%eax
 81e81eb:	85 c0                	test   %eax,%eax
 81e81ed:	79 2b                	jns    81e821a <_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase+0x76>
 81e81ef:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e81f2:	8b 40 04             	mov    0x4(%eax),%eax
 81e81f5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e81fc:	00 
 81e81fd:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e8201:	c7 44 24 04 e0 09 bd 	movl   $0x8bd09e0,0x4(%esp)
 81e8208:	08 
 81e8209:	c7 04 24 7c 64 00 00 	movl   $0x647c,(%esp)
 81e8210:	e8 c2 86 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8215:	e9 d9 00 00 00       	jmp    81e82f3 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase+0x14f>
 81e821a:	8b 45 10             	mov    0x10(%ebp),%eax
 81e821d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e8220:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e8223:	8b 70 11             	mov    0x11(%eax),%esi
 81e8226:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e8229:	8b 40 0d             	mov    0xd(%eax),%eax
 81e822c:	89 04 24             	mov    %eax,(%esp)
 81e822f:	e8 11 f6 f0 ff       	call   80f7845 <_Z25GetInvenTypeFromItemSpace14ENUM_ITEMSPACE>
 81e8234:	89 c3                	mov    %eax,%ebx
 81e8236:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8239:	89 04 24             	mov    %eax,(%esp)
 81e823c:	e8 4d 20 ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e8241:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e8248:	00 
 81e8249:	c7 44 24 10 36 00 00 	movl   $0x36,0x10(%esp)
 81e8250:	00 
 81e8251:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 81e8258:	00 
 81e8259:	89 74 24 08          	mov    %esi,0x8(%esp)
 81e825d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e8261:	89 04 24             	mov    %eax,(%esp)
 81e8264:	e8 a3 bd 31 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e8269:	83 f0 01             	xor    $0x1,%eax
 81e826c:	84 c0                	test   %al,%al
 81e826e:	74 11                	je     81e8281 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase+0xdd>
 81e8270:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e8273:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 81e827a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e827f:	eb 72                	jmp    81e82f3 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial7processEP5CUserR8MSG_BASER9ParamBase+0x14f>
 81e8281:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8284:	89 04 24             	mov    %eax,(%esp)
 81e8287:	e8 44 9a 4a 00       	call   8691cd0 <_ZN5CUser24getGrowthWeaponEventdataEv>
 81e828c:	83 c0 10             	add    $0x10,%eax
 81e828f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8292:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8295:	0f b7 00             	movzwl (%eax),%eax
 81e8298:	8d 50 01             	lea    0x1(%eax),%edx
 81e829b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e829e:	66 89 10             	mov    %dx,(%eax)
 81e82a1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e82a4:	0f b7 00             	movzwl (%eax),%eax
 81e82a7:	0f bf d8             	movswl %ax,%ebx
 81e82aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e82ad:	89 04 24             	mov    %eax,(%esp)
 81e82b0:	e8 b9 20 ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e82b5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e82bc:	00 
 81e82bd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e82c1:	89 04 24             	mov    %eax,(%esp)
 81e82c4:	e8 21 15 26 00       	call   84497ea <_ZN35DB_EventUpdateGrowthWeaponTimepiece11makeRequestEjsi>
 81e82c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e82cc:	0f b7 10             	movzwl (%eax),%edx
 81e82cf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e82d2:	66 89 50 10          	mov    %dx,0x10(%eax)
 81e82d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e82d9:	8b 50 0d             	mov    0xd(%eax),%edx
 81e82dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e82df:	89 50 08             	mov    %edx,0x8(%eax)
 81e82e2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e82e5:	8b 50 11             	mov    0x11(%eax),%edx
 81e82e8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81e82eb:	89 50 0c             	mov    %edx,0xc(%eax)
 81e82ee:	b8 00 00 00 00       	mov    $0x0,%eax
 81e82f3:	83 c4 30             	add    $0x30,%esp
 81e82f6:	5b                   	pop    %ebx
 81e82f7:	5e                   	pop    %esi
 81e82f8:	5d                   	pop    %ebp
 81e82f9:	c3                   	ret

```

```c
// Dispatcher_GrowthWeaponEventUseMaterial::process @ 0x81e81a4

/* Dispatcher_GrowthWeaponEventUseMaterial::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::process
          (Dispatcher_GrowthWeaponEventUseMaterial *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  
  uVar3 = check_error(this,param_1,param_2);
  *(undefined4 *)(param_3 + 4) = uVar3;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar3 = LineFunc(0x647c,
                       "virtual int Dispatcher_GrowthWeaponEventUseMaterial::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      uVar3 = *(undefined4 *)(param_2 + 0x11);
      uVar4 = GetInvenTypeFromItemSpace(*(undefined4 *)(param_2 + 0xd));
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar2 = CInventory::delete_item(pCVar5,uVar4,uVar3,1,0x36,1);
      if (cVar2 == '\x01') {
        iVar6 = CUser::getGrowthWeaponEventdata(param_1);
        psVar7 = (short *)(iVar6 + 0x10);
        *psVar7 = *psVar7 + 1;
        sVar1 = *psVar7;
        uVar8 = CUser::get_acc_id(param_1);
        DB_EventUpdateGrowthWeaponTimepiece::makeRequest(uVar8,sVar1,0);
        *(short *)(param_3 + 0x10) = *psVar7;
        *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0xd);
        *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + 0x11);
        uVar3 = 0;
      }
      else {
        *(undefined4 *)(param_3 + 4) = 0x11;
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## read

```asm
// === 081e810c Dispatcher_GrowthWeaponEventUseMaterial::read  [0x081e810c-0x81e81a3] ===
 81e810c:	55                   	push   %ebp
 81e810d:	89 e5                	mov    %esp,%ebp
 81e810f:	83 ec 28             	sub    $0x28,%esp
 81e8112:	8b 45 10             	mov    0x10(%ebp),%eax
 81e8115:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e8118:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e811b:	83 c0 0d             	add    $0xd,%eax
 81e811e:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8122:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8125:	89 04 24             	mov    %eax,(%esp)
 81e8128:	e8 c3 4f 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e812d:	83 f0 01             	xor    $0x1,%eax
 81e8130:	84 c0                	test   %al,%al
 81e8132:	74 26                	je     81e815a <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASE+0x4e>
 81e8134:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e813b:	00 
 81e813c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e8143:	00 
 81e8144:	c7 44 24 04 40 0a bd 	movl   $0x8bd0a40,0x4(%esp)
 81e814b:	08 
 81e814c:	c7 04 24 6a 64 00 00 	movl   $0x646a,(%esp)
 81e8153:	e8 7f 87 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e8158:	eb 47                	jmp    81e81a1 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASE+0x95>
 81e815a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e815d:	83 c0 11             	add    $0x11,%eax
 81e8160:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8164:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8167:	89 04 24             	mov    %eax,(%esp)
 81e816a:	e8 81 4f 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e816f:	83 f0 01             	xor    $0x1,%eax
 81e8172:	84 c0                	test   %al,%al
 81e8174:	74 26                	je     81e819c <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASE+0x90>
 81e8176:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e817d:	00 
 81e817e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e8185:	00 
 81e8186:	c7 44 24 04 40 0a bd 	movl   $0x8bd0a40,0x4(%esp)
 81e818d:	08 
 81e818e:	c7 04 24 6d 64 00 00 	movl   $0x646d,(%esp)
 81e8195:	e8 3d 87 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e819a:	eb 05                	jmp    81e81a1 <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4readER9PacketBufR8MSG_BASE+0x95>
 81e819c:	b8 00 00 00 00       	mov    $0x0,%eax
 81e81a1:	c9                   	leave
 81e81a2:	c3                   	ret
 81e81a3:	90                   	nop

```

```c
// Dispatcher_GrowthWeaponEventUseMaterial::read @ 0x81e810c

/* Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::read
          (Dispatcher_GrowthWeaponEventUseMaterial *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x11));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x646d,
                       "virtual int Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x646a,
                     "virtual int Dispatcher_GrowthWeaponEventUseMaterial::read(PacketBuf&, MSG_BASE&)"
                     ,0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e8496 Dispatcher_GrowthWeaponEventUseMaterial::send  [0x081e8496-0x81e85a1] ===
 81e8496:	55                   	push   %ebp
 81e8497:	89 e5                	mov    %esp,%ebp
 81e8499:	56                   	push   %esi
 81e849a:	53                   	push   %ebx
 81e849b:	83 ec 20             	sub    $0x20,%esp
 81e849e:	8b 45 10             	mov    0x10(%ebp),%eax
 81e84a1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e84a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e84a7:	8b 40 04             	mov    0x4(%eax),%eax
 81e84aa:	85 c0                	test   %eax,%eax
 81e84ac:	0f 85 c9 00 00 00    	jne    81e857b <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4sendEP5CUserR9ParamBase+0xe5>
 81e84b2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e84b5:	89 04 24             	mov    %eax,(%esp)
 81e84b8:	e8 8f 58 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e84bd:	c7 44 24 08 fa 01 00 	movl   $0x1fa,0x8(%esp)
 81e84c4:	00 
 81e84c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e84cc:	00 
 81e84cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e84d0:	89 04 24             	mov    %eax,(%esp)
 81e84d3:	e8 24 34 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e84d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e84df:	00 
 81e84e0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e84e3:	89 04 24             	mov    %eax,(%esp)
 81e84e6:	e8 35 34 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e84eb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e84ee:	8b 40 08             	mov    0x8(%eax),%eax
 81e84f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e84f5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e84f8:	89 04 24             	mov    %eax,(%esp)
 81e84fb:	e8 3c 34 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e8500:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8503:	8b 40 0c             	mov    0xc(%eax),%eax
 81e8506:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e850a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e850d:	89 04 24             	mov    %eax,(%esp)
 81e8510:	e8 27 34 ee ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 81e8515:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e8518:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e851c:	98                   	cwtl
 81e851d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8521:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e8524:	89 04 24             	mov    %eax,(%esp)
 81e8527:	e8 78 19 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e852c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e8533:	00 
 81e8534:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e8537:	89 04 24             	mov    %eax,(%esp)
 81e853a:	e8 19 34 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e853f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e8542:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e8546:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8549:	89 04 24             	mov    %eax,(%esp)
 81e854c:	e8 69 00 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e8551:	eb 1b                	jmp    81e856e <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4sendEP5CUserR9ParamBase+0xd8>
 81e8553:	89 d3                	mov    %edx,%ebx
 81e8555:	89 c6                	mov    %eax,%esi
 81e8557:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e855a:	89 04 24             	mov    %eax,(%esp)
 81e855d:	e8 1e 59 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8562:	89 f0                	mov    %esi,%eax
 81e8564:	89 da                	mov    %ebx,%edx
 81e8566:	89 04 24             	mov    %eax,(%esp)
 81e8569:	e8 e2 b1 8f 00       	call   8ae3750 <_Unwind_Resume>
 81e856e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e8571:	89 04 24             	mov    %eax,(%esp)
 81e8574:	e8 07 59 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e8579:	eb 20                	jmp    81e859b <_ZN39Dispatcher_GrowthWeaponEventUseMaterial4sendEP5CUserR9ParamBase+0x105>
 81e857b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e857e:	8b 40 04             	mov    0x4(%eax),%eax
 81e8581:	0f b6 c0             	movzbl %al,%eax
 81e8584:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e8588:	c7 44 24 04 fa 01 00 	movl   $0x1fa,0x4(%esp)
 81e858f:	00 
 81e8590:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e8593:	89 04 24             	mov    %eax,(%esp)
 81e8596:	e8 a7 39 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e859b:	83 c4 20             	add    $0x20,%esp
 81e859e:	5b                   	pop    %ebx
 81e859f:	5e                   	pop    %esi
 81e85a0:	5d                   	pop    %ebp
 81e85a1:	c3                   	ret

```

```c
// Dispatcher_GrowthWeaponEventUseMaterial::send @ 0x81e8496

/* Dispatcher_GrowthWeaponEventUseMaterial::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_GrowthWeaponEventUseMaterial::send
          (Dispatcher_GrowthWeaponEventUseMaterial *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e84d3 to 081e8550 has its CatchHandler @ 081e8553 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1fa);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x10));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1fa,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

