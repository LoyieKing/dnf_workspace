# Dispatcher_StackableActionUse

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 0825e332 Dispatcher_StackableActionUse::check_error  [0x0825e332-0x825e4eb] ===
 825e332:	55                   	push   %ebp
 825e333:	89 e5                	mov    %esp,%ebp
 825e335:	56                   	push   %esi
 825e336:	53                   	push   %ebx
 825e337:	83 ec 70             	sub    $0x70,%esp
 825e33a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 825e33e:	74 0f                	je     825e34f <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1d>
 825e340:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e343:	89 04 24             	mov    %eax,(%esp)
 825e346:	e8 e7 20 ec ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 825e34b:	85 c0                	test   %eax,%eax
 825e34d:	75 07                	jne    825e356 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x24>
 825e34f:	b8 01 00 00 00       	mov    $0x1,%eax
 825e354:	eb 05                	jmp    825e35b <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x29>
 825e356:	b8 00 00 00 00       	mov    $0x0,%eax
 825e35b:	84 c0                	test   %al,%al
 825e35d:	74 0a                	je     825e369 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x37>
 825e35f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 825e364:	e9 79 01 00 00       	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e369:	8b 45 10             	mov    0x10(%ebp),%eax
 825e36c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825e36f:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e372:	89 04 24             	mov    %eax,(%esp)
 825e375:	e8 3c fd 3e 00       	call   864e0b6 <_ZNK5CUser25getCurCharacInvenCheckSumEv>
 825e37a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 825e37d:	8b 52 10             	mov    0x10(%edx),%edx
 825e380:	39 d0                	cmp    %edx,%eax
 825e382:	0f 95 c0             	setne  %al
 825e385:	84 c0                	test   %al,%al
 825e387:	74 3a                	je     825e3c3 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x91>
 825e389:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e38c:	89 04 24             	mov    %eax,(%esp)
 825e38f:	e8 c6 b5 e9 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 825e394:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 825e39b:	00 
 825e39c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 825e3a3:	00 
 825e3a4:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 825e3ab:	00 
 825e3ac:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 825e3b3:	00 
 825e3b4:	8b 55 0c             	mov    0xc(%ebp),%edx
 825e3b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 825e3bb:	89 04 24             	mov    %eax,(%esp)
 825e3be:	e8 bb a8 e9 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 825e3c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e3c6:	89 04 24             	mov    %eax,(%esp)
 825e3c9:	e8 30 bf e7 ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 825e3ce:	84 c0                	test   %al,%al
 825e3d0:	74 0a                	je     825e3dc <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0xaa>
 825e3d2:	b8 d8 00 00 00       	mov    $0xd8,%eax
 825e3d7:	e9 06 01 00 00       	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e3dc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e3df:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 825e3e3:	84 c0                	test   %al,%al
 825e3e5:	75 0a                	jne    825e3f1 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0xbf>
 825e3e7:	b8 17 00 00 00       	mov    $0x17,%eax
 825e3ec:	e9 f1 00 00 00       	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e3f1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e3f4:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 825e3f8:	0f bf d8             	movswl %ax,%ebx
 825e3fb:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e3fe:	89 04 24             	mov    %eax,(%esp)
 825e401:	e8 78 be e7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 825e406:	8d 55 af             	lea    -0x51(%ebp),%edx
 825e409:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 825e40d:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825e414:	00 
 825e415:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e419:	89 14 24             	mov    %edx,(%esp)
 825e41c:	e8 f7 d4 29 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 825e421:	83 ec 04             	sub    $0x4,%esp
 825e424:	8b 45 b1             	mov    -0x4f(%ebp),%eax
 825e427:	89 c3                	mov    %eax,%ebx
 825e429:	e8 6d dd e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 825e42e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825e432:	89 04 24             	mov    %eax,(%esp)
 825e435:	e8 f8 15 10 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 825e43a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825e43d:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 825e441:	75 0a                	jne    825e44d <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x11b>
 825e443:	b8 11 00 00 00       	mov    $0x11,%eax
 825e448:	e9 95 00 00 00       	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e44d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e450:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 825e454:	0f be c0             	movsbl %al,%eax
 825e457:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e45a:	89 54 24 08          	mov    %edx,0x8(%esp)
 825e45e:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e462:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e465:	89 04 24             	mov    %eax,(%esp)
 825e468:	e8 a1 11 43 00       	call   868f60e <_ZN5CUser26verifyStackableItemProcessEN15StackableAction4TypeEPK5CItem>
 825e46d:	83 f0 01             	xor    $0x1,%eax
 825e470:	84 c0                	test   %al,%al
 825e472:	74 07                	je     825e47b <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x149>
 825e474:	b8 17 00 00 00       	mov    $0x17,%eax
 825e479:	eb 67                	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e47b:	8b 45 b1             	mov    -0x4f(%ebp),%eax
 825e47e:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e482:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e485:	89 04 24             	mov    %eax,(%esp)
 825e488:	e8 07 05 40 00       	call   865e994 <_ZNK5CUser17CheckCoolTimeItemEm>
 825e48d:	84 c0                	test   %al,%al
 825e48f:	74 07                	je     825e498 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x166>
 825e491:	b8 13 00 00 00       	mov    $0x13,%eax
 825e496:	eb 4a                	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e498:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e49b:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 825e49f:	0f be f0             	movsbl %al,%esi
 825e4a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e4a5:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 825e4a9:	0f bf d8             	movswl %ax,%ebx
 825e4ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e4af:	89 04 24             	mov    %eax,(%esp)
 825e4b2:	e8 13 1f f2 ff       	call   81803ca <_ZNK15CUserCharacInfo21getCurCharacInvenRefREv>
 825e4b7:	89 74 24 0c          	mov    %esi,0xc(%esp)
 825e4bb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825e4c2:	00 
 825e4c3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825e4c7:	89 04 24             	mov    %eax,(%esp)
 825e4ca:	e8 eb 1a 2a 00       	call   84fffba <_ZNK10CInventory12try_use_itemEiii>
 825e4cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825e4d2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825e4d6:	74 05                	je     825e4dd <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1ab>
 825e4d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e4db:	eb 05                	jmp    825e4e2 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE+0x1b0>
 825e4dd:	b8 00 00 00 00       	mov    $0x0,%eax
 825e4e2:	8d 65 f8             	lea    -0x8(%ebp),%esp
 825e4e5:	83 c4 00             	add    $0x0,%esp
 825e4e8:	5b                   	pop    %ebx
 825e4e9:	5e                   	pop    %esi
 825e4ea:	5d                   	pop    %ebp
 825e4eb:	c3                   	ret

```

```c
// Dispatcher_StackableActionUse::check_error @ 0x825e332

/* Dispatcher_StackableActionUse::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_StackableActionUse::check_error
          (Dispatcher_StackableActionUse *this,CUser *param_1,MSG_BASE *param_2)

{
  MSG_BASE MVar1;
  short sVar2;
  bool bVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  CHackAnalyzer *pCVar7;
  CDataManager *this_00;
  CInventory *this_01;
  int iVar8;
  undefined1 local_55 [2];
  ulong local_53;
  MSG_BASE *local_18;
  int local_14;
  
  if ((param_1 == (CUser *)0x0) ||
     (iVar6 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar6 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    iVar6 = -1;
  }
  else {
    local_18 = param_2;
    iVar6 = CUser::getCurCharacInvenCheckSum(param_1);
    if (iVar6 != *(int *)(local_18 + 0x10)) {
      pCVar7 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
      WongWork::CHackAnalyzer::addServerHackCnt(pCVar7,param_1,0x25b,1,0,0);
    }
    cVar5 = CUser::CheckInTrade(param_1);
    if (cVar5 == '\0') {
      if (local_18[0x14] == (MSG_BASE)0x0) {
        iVar6 = 0x17;
      }
      else {
        iVar8 = (int)*(short *)(local_18 + 0xd);
        iVar6 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
        CInventory::GetInvenSlot((int)local_55,iVar6);
        uVar4 = local_53;
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = CDataManager::find_item(this_00,uVar4);
        if (local_14 == 0) {
          iVar6 = 0x11;
        }
        else {
          cVar5 = CUser::verifyStackableItemProcess
                            (param_1,(int)(char)local_18[0x14],local_14,iVar8);
          if (cVar5 == '\x01') {
            cVar5 = CUser::CheckCoolTimeItem(param_1,local_53);
            if (cVar5 == '\0') {
              MVar1 = local_18[0xf];
              sVar2 = *(short *)(local_18 + 0xd);
              this_01 = (CInventory *)
                        CUserCharacInfo::getCurCharacInvenRefR((CUserCharacInfo *)param_1);
              iVar6 = CInventory::try_use_item(this_01,(int)sVar2,1,(int)(char)MVar1);
              if (iVar6 == 0) {
                iVar6 = 0;
              }
            }
            else {
              iVar6 = 0x13;
            }
          }
          else {
            iVar6 = 0x17;
          }
        }
      }
    }
    else {
      iVar6 = 0xd8;
    }
  }
  return iVar6;
}

```

---

## process

```asm
// === 0825e11e Dispatcher_StackableActionUse::process  [0x0825e11e-0x825e331] ===
 825e11e:	55                   	push   %ebp
 825e11f:	89 e5                	mov    %esp,%ebp
 825e121:	56                   	push   %esi
 825e122:	53                   	push   %ebx
 825e123:	83 c4 80             	add    $0xffffff80,%esp
 825e126:	8b 45 10             	mov    0x10(%ebp),%eax
 825e129:	89 45 ec             	mov    %eax,-0x14(%ebp)
 825e12c:	8b 45 14             	mov    0x14(%ebp),%eax
 825e12f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 825e132:	8b 45 10             	mov    0x10(%ebp),%eax
 825e135:	89 44 24 08          	mov    %eax,0x8(%esp)
 825e139:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e13c:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e140:	8b 45 08             	mov    0x8(%ebp),%eax
 825e143:	89 04 24             	mov    %eax,(%esp)
 825e146:	e8 e7 01 00 00       	call   825e332 <_ZN29Dispatcher_StackableActionUse11check_errorEP5CUserR8MSG_BASE>
 825e14b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e14e:	89 42 04             	mov    %eax,0x4(%edx)
 825e151:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e154:	0f b6 50 0f          	movzbl 0xf(%eax),%edx
 825e158:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e15b:	88 50 0a             	mov    %dl,0xa(%eax)
 825e15e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e161:	0f b7 50 0d          	movzwl 0xd(%eax),%edx
 825e165:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e168:	66 89 50 08          	mov    %dx,0x8(%eax)
 825e16c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e16f:	8b 40 04             	mov    0x4(%eax),%eax
 825e172:	85 c0                	test   %eax,%eax
 825e174:	7e 0a                	jle    825e180 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x62>
 825e176:	b8 00 00 00 00       	mov    $0x0,%eax
 825e17b:	e9 a8 01 00 00       	jmp    825e328 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x20a>
 825e180:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e183:	8b 40 04             	mov    0x4(%eax),%eax
 825e186:	85 c0                	test   %eax,%eax
 825e188:	79 5f                	jns    825e1e9 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0xcb>
 825e18a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e18d:	8b 40 04             	mov    0x4(%eax),%eax
 825e190:	89 44 24 14          	mov    %eax,0x14(%esp)
 825e194:	c7 44 24 10 e0 85 be 	movl   $0x8be85e0,0x10(%esp)
 825e19b:	08 
 825e19c:	c7 44 24 0c 1f 01 00 	movl   $0x11f,0xc(%esp)
 825e1a3:	00 
 825e1a4:	c7 44 24 08 20 a1 be 	movl   $0x8bea120,0x8(%esp)
 825e1ab:	08 
 825e1ac:	c7 44 24 04 fe 85 be 	movl   $0x8be85fe,0x4(%esp)
 825e1b3:	08 
 825e1b4:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 825e1bb:	e8 4a 5a 87 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 825e1c0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e1c7:	00 
 825e1c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e1cf:	00 
 825e1d0:	c7 44 24 04 20 a1 be 	movl   $0x8bea120,0x4(%esp)
 825e1d7:	08 
 825e1d8:	c7 04 24 20 01 00 00 	movl   $0x120,(%esp)
 825e1df:	e8 f3 26 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e1e4:	e9 3f 01 00 00       	jmp    825e328 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x20a>
 825e1e9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e1ec:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 825e1f0:	0f bf d8             	movswl %ax,%ebx
 825e1f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e1f6:	89 04 24             	mov    %eax,(%esp)
 825e1f9:	e8 80 c0 e7 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 825e1fe:	8d 55 9f             	lea    -0x61(%ebp),%edx
 825e201:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 825e205:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825e20c:	00 
 825e20d:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e211:	89 14 24             	mov    %edx,(%esp)
 825e214:	e8 ff d6 29 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 825e219:	83 ec 04             	sub    $0x4,%esp
 825e21c:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 825e21f:	89 c3                	mov    %eax,%ebx
 825e221:	e8 75 df e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 825e226:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825e22a:	89 04 24             	mov    %eax,(%esp)
 825e22d:	e8 00 18 10 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 825e232:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825e235:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 825e239:	75 14                	jne    825e24f <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x131>
 825e23b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e23e:	c7 40 04 11 00 00 00 	movl   $0x11,0x4(%eax)
 825e245:	b8 00 00 00 00       	mov    $0x0,%eax
 825e24a:	e9 d9 00 00 00       	jmp    825e328 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x20a>
 825e24f:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e252:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 825e255:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e258:	89 45 e8             	mov    %eax,-0x18(%ebp)
 825e25b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e25e:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 825e262:	0f be d0             	movsbl %al,%edx
 825e265:	a1 fc f7 41 09       	mov    0x941f7fc,%eax
 825e26a:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 825e26d:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 825e271:	89 54 24 04          	mov    %edx,0x4(%esp)
 825e275:	89 04 24             	mov    %eax,(%esp)
 825e278:	e8 a9 17 02 00       	call   827fa26 <_ZN15StackableAction6Action5checkEiRNS_11input_paramE>
 825e27d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e280:	89 42 04             	mov    %eax,0x4(%edx)
 825e283:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e286:	8b 40 04             	mov    0x4(%eax),%eax
 825e289:	85 c0                	test   %eax,%eax
 825e28b:	0f 85 92 00 00 00    	jne    825e323 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x205>
 825e291:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e294:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 825e298:	0f be d0             	movsbl %al,%edx
 825e29b:	a1 fc f7 41 09       	mov    0x941f7fc,%eax
 825e2a0:	8d 4d dc             	lea    -0x24(%ebp),%ecx
 825e2a3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 825e2a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 825e2ab:	89 04 24             	mov    %eax,(%esp)
 825e2ae:	e8 e7 17 02 00       	call   827fa9a <_ZN15StackableAction6Action3runEiRNS_11input_paramE>
 825e2b3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e2b6:	89 42 04             	mov    %eax,0x4(%edx)
 825e2b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e2bc:	8b 40 04             	mov    0x4(%eax),%eax
 825e2bf:	85 c0                	test   %eax,%eax
 825e2c1:	75 60                	jne    825e323 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x205>
 825e2c3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e2c6:	0f b6 40 0f          	movzbl 0xf(%eax),%eax
 825e2ca:	0f be f0             	movsbl %al,%esi
 825e2cd:	8b 45 ec             	mov    -0x14(%ebp),%eax
 825e2d0:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 825e2d4:	0f bf d8             	movswl %ax,%ebx
 825e2d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e2da:	89 04 24             	mov    %eax,(%esp)
 825e2dd:	e8 ac bf e7 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 825e2e2:	89 74 24 0c          	mov    %esi,0xc(%esp)
 825e2e6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 825e2ed:	00 
 825e2ee:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 825e2f2:	89 04 24             	mov    %eax,(%esp)
 825e2f5:	e8 e4 15 2a 00       	call   84ff8de <_ZN10CInventory8use_itemEiii>
 825e2fa:	8b 55 f0             	mov    -0x10(%ebp),%edx
 825e2fd:	89 42 04             	mov    %eax,0x4(%edx)
 825e300:	8b 45 f0             	mov    -0x10(%ebp),%eax
 825e303:	8b 40 04             	mov    0x4(%eax),%eax
 825e306:	85 c0                	test   %eax,%eax
 825e308:	75 19                	jne    825e323 <_ZN29Dispatcher_StackableActionUse7processEP5CUserR8MSG_BASER9ParamBase+0x205>
 825e30a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 825e30d:	8b 45 a1             	mov    -0x5f(%ebp),%eax
 825e310:	89 54 24 08          	mov    %edx,0x8(%esp)
 825e314:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e318:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e31b:	89 04 24             	mov    %eax,(%esp)
 825e31e:	e8 3f 07 40 00       	call   865ea62 <_ZN5CUser22_processContinuousItemEjP14CStackableItem>
 825e323:	b8 00 00 00 00       	mov    $0x0,%eax
 825e328:	8d 65 f8             	lea    -0x8(%ebp),%esp
 825e32b:	83 c4 00             	add    $0x0,%esp
 825e32e:	5b                   	pop    %ebx
 825e32f:	5e                   	pop    %esi
 825e330:	5d                   	pop    %ebp
 825e331:	c3                   	ret

```

```c
// Dispatcher_StackableActionUse::process @ 0x825e11e

/* Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_StackableActionUse::process
          (Dispatcher_StackableActionUse *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  MSG_BASE MVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  CDataManager *this_00;
  CInventory *this_01;
  undefined1 local_65 [2];
  uint local_63;
  input_param local_28 [8];
  CUser *local_20;
  CStackableItem *local_1c;
  MSG_BASE *local_18;
  ParamBase *local_14;
  CStackableItem *local_10;
  
  local_18 = param_2;
  local_14 = param_3;
  uVar4 = check_error(this,param_1,param_2);
  *(undefined4 *)(local_14 + 4) = uVar4;
  *(MSG_BASE *)(local_14 + 10) = local_18[0xf];
  *(undefined2 *)(local_14 + 8) = *(undefined2 *)(local_18 + 0xd);
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      LogManager::logFormat
                (1,"PacketDispatcher_Impl_2.cpp",
                 "virtual int Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&)"
                 ,0x11f,"Dispatcher Check_Error No(%d)",*(undefined4 *)(local_14 + 4));
      uVar4 = LineFunc(0x120,
                       "virtual int Dispatcher_StackableActionUse::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,0,0);
    }
    else {
      iVar5 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      CInventory::GetInvenSlot((int)local_65,iVar5);
      uVar3 = local_63;
      this_00 = (CDataManager *)G_CDataManager();
      local_1c = (CStackableItem *)CDataManager::find_item(this_00,uVar3);
      if (local_1c == (CStackableItem *)0x0) {
        *(undefined4 *)(local_14 + 4) = 0x11;
        uVar4 = 0;
      }
      else {
        local_20 = param_1;
        local_10 = local_1c;
        uVar4 = StackableAction::Action::check
                          (GlobalData::g_Actions,(int)(char)local_18[0x14],local_28);
        *(undefined4 *)(local_14 + 4) = uVar4;
        if (*(int *)(local_14 + 4) == 0) {
          uVar4 = StackableAction::Action::run
                            (GlobalData::g_Actions,(int)(char)local_18[0x14],local_28);
          *(undefined4 *)(local_14 + 4) = uVar4;
          if (*(int *)(local_14 + 4) == 0) {
            MVar1 = local_18[0xf];
            sVar2 = *(short *)(local_18 + 0xd);
            this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
            uVar4 = CInventory::use_item(this_01,(int)sVar2,1,(int)(char)MVar1);
            *(undefined4 *)(local_14 + 4) = uVar4;
            if (*(int *)(local_14 + 4) == 0) {
              CUser::_processContinuousItem(param_1,local_63,local_10);
            }
          }
        }
        uVar4 = 0;
      }
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## read

```asm
// === 0825df72 Dispatcher_StackableActionUse::read  [0x0825df72-0x825e11d] ===
 825df72:	55                   	push   %ebp
 825df73:	89 e5                	mov    %esp,%ebp
 825df75:	83 ec 28             	sub    $0x28,%esp
 825df78:	8b 45 10             	mov    0x10(%ebp),%eax
 825df7b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825df7e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825df81:	83 c0 0d             	add    $0xd,%eax
 825df84:	89 44 24 04          	mov    %eax,0x4(%esp)
 825df88:	8b 45 0c             	mov    0xc(%ebp),%eax
 825df8b:	89 04 24             	mov    %eax,(%esp)
 825df8e:	e8 2d f0 32 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 825df93:	83 f0 01             	xor    $0x1,%eax
 825df96:	84 c0                	test   %al,%al
 825df98:	74 29                	je     825dfc3 <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x51>
 825df9a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825dfa1:	00 
 825dfa2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825dfa9:	00 
 825dfaa:	c7 44 24 04 80 a1 be 	movl   $0x8bea180,0x4(%esp)
 825dfb1:	08 
 825dfb2:	c7 04 24 fb 00 00 00 	movl   $0xfb,(%esp)
 825dfb9:	e8 19 29 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825dfbe:	e9 58 01 00 00       	jmp    825e11b <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a9>
 825dfc3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825dfc6:	83 c0 0f             	add    $0xf,%eax
 825dfc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 825dfcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 825dfd0:	89 04 24             	mov    %eax,(%esp)
 825dfd3:	e8 4a ef 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825dfd8:	83 f0 01             	xor    $0x1,%eax
 825dfdb:	84 c0                	test   %al,%al
 825dfdd:	74 29                	je     825e008 <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x96>
 825dfdf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825dfe6:	00 
 825dfe7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825dfee:	00 
 825dfef:	c7 44 24 04 80 a1 be 	movl   $0x8bea180,0x4(%esp)
 825dff6:	08 
 825dff7:	c7 04 24 fe 00 00 00 	movl   $0xfe,(%esp)
 825dffe:	e8 d4 28 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e003:	e9 13 01 00 00       	jmp    825e11b <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a9>
 825e008:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e00b:	83 c0 10             	add    $0x10,%eax
 825e00e:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e012:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e015:	89 04 24             	mov    %eax,(%esp)
 825e018:	e8 d3 f0 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 825e01d:	83 f0 01             	xor    $0x1,%eax
 825e020:	84 c0                	test   %al,%al
 825e022:	74 29                	je     825e04d <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0xdb>
 825e024:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e02b:	00 
 825e02c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e033:	00 
 825e034:	c7 44 24 04 80 a1 be 	movl   $0x8bea180,0x4(%esp)
 825e03b:	08 
 825e03c:	c7 04 24 01 01 00 00 	movl   $0x101,(%esp)
 825e043:	e8 8f 28 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e048:	e9 ce 00 00 00       	jmp    825e11b <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a9>
 825e04d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e050:	83 c0 14             	add    $0x14,%eax
 825e053:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e057:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e05a:	89 04 24             	mov    %eax,(%esp)
 825e05d:	e8 c0 ee 32 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 825e062:	83 f0 01             	xor    $0x1,%eax
 825e065:	84 c0                	test   %al,%al
 825e067:	74 29                	je     825e092 <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x120>
 825e069:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e070:	00 
 825e071:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e078:	00 
 825e079:	c7 44 24 04 80 a1 be 	movl   $0x8bea180,0x4(%esp)
 825e080:	08 
 825e081:	c7 04 24 04 01 00 00 	movl   $0x104,(%esp)
 825e088:	e8 4a 28 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e08d:	e9 89 00 00 00       	jmp    825e11b <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a9>
 825e092:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e095:	83 c0 15             	add    $0x15,%eax
 825e098:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e09c:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e09f:	89 04 24             	mov    %eax,(%esp)
 825e0a2:	e8 49 f0 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 825e0a7:	83 f0 01             	xor    $0x1,%eax
 825e0aa:	84 c0                	test   %al,%al
 825e0ac:	74 26                	je     825e0d4 <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x162>
 825e0ae:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e0b5:	00 
 825e0b6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e0bd:	00 
 825e0be:	c7 44 24 04 80 a1 be 	movl   $0x8bea180,0x4(%esp)
 825e0c5:	08 
 825e0c6:	c7 04 24 07 01 00 00 	movl   $0x107,(%esp)
 825e0cd:	e8 05 28 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e0d2:	eb 47                	jmp    825e11b <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a9>
 825e0d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e0d7:	83 c0 19             	add    $0x19,%eax
 825e0da:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e0de:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e0e1:	89 04 24             	mov    %eax,(%esp)
 825e0e4:	e8 07 f0 32 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 825e0e9:	83 f0 01             	xor    $0x1,%eax
 825e0ec:	84 c0                	test   %al,%al
 825e0ee:	74 26                	je     825e116 <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a4>
 825e0f0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 825e0f7:	00 
 825e0f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 825e0ff:	00 
 825e100:	c7 44 24 04 80 a1 be 	movl   $0x8bea180,0x4(%esp)
 825e107:	08 
 825e108:	c7 04 24 0a 01 00 00 	movl   $0x10a,(%esp)
 825e10f:	e8 c3 27 33 00       	call   85908d7 <_Z8LineFunciPKcij>
 825e114:	eb 05                	jmp    825e11b <_ZN29Dispatcher_StackableActionUse4readER9PacketBufR8MSG_BASE+0x1a9>
 825e116:	b8 00 00 00 00       	mov    $0x0,%eax
 825e11b:	c9                   	leave
 825e11c:	c3                   	ret
 825e11d:	90                   	nop

```

```c
// Dispatcher_StackableActionUse::read @ 0x825df72

/* Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_StackableActionUse::read
          (Dispatcher_StackableActionUse *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xf));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x14));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x15));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x19));
            if (cVar1 == '\x01') {
              uVar2 = 0;
            }
            else {
              uVar2 = LineFunc(0x10a,
                               "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)"
                               ,0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x107,
                             "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x104,
                           "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)",
                           0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x101,
                         "virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)",0,
                         0);
      }
    }
    else {
      uVar2 = LineFunc(0xfe,"virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0xfb,"virtual int Dispatcher_StackableActionUse::read(PacketBuf&, MSG_BASE&)",0
                     ,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 0825e4ec Dispatcher_StackableActionUse::send  [0x0825e4ec-0x825e681] ===
 825e4ec:	55                   	push   %ebp
 825e4ed:	89 e5                	mov    %esp,%ebp
 825e4ef:	56                   	push   %esi
 825e4f0:	53                   	push   %ebx
 825e4f1:	83 ec 30             	sub    $0x30,%esp
 825e4f4:	8b 45 10             	mov    0x10(%ebp),%eax
 825e4f7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 825e4fa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e4fd:	8b 40 04             	mov    0x4(%eax),%eax
 825e500:	85 c0                	test   %eax,%eax
 825e502:	0f 84 bc 00 00 00    	je     825e5c4 <_ZN29Dispatcher_StackableActionUse4sendEP5CUserR9ParamBase+0xd8>
 825e508:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e50b:	89 04 24             	mov    %eax,(%esp)
 825e50e:	e8 39 f8 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825e513:	c7 44 24 08 04 02 00 	movl   $0x204,0x8(%esp)
 825e51a:	00 
 825e51b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e522:	00 
 825e523:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e526:	89 04 24             	mov    %eax,(%esp)
 825e529:	e8 ce d3 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825e52e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 825e535:	00 
 825e536:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e539:	89 04 24             	mov    %eax,(%esp)
 825e53c:	e8 df d3 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e541:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e544:	8b 40 04             	mov    0x4(%eax),%eax
 825e547:	0f b6 c0             	movzbl %al,%eax
 825e54a:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e54e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e551:	89 04 24             	mov    %eax,(%esp)
 825e554:	e8 c7 d3 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e559:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e55c:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 825e560:	0f be c0             	movsbl %al,%eax
 825e563:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e567:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e56a:	89 04 24             	mov    %eax,(%esp)
 825e56d:	e8 ae d3 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e572:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e579:	00 
 825e57a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e57d:	89 04 24             	mov    %eax,(%esp)
 825e580:	e8 d3 d3 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825e585:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e588:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e58c:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e58f:	89 04 24             	mov    %eax,(%esp)
 825e592:	e8 23 a0 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825e597:	eb 1b                	jmp    825e5b4 <_ZN29Dispatcher_StackableActionUse4sendEP5CUserR9ParamBase+0xc8>
 825e599:	89 d3                	mov    %edx,%ebx
 825e59b:	89 c6                	mov    %eax,%esi
 825e59d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e5a0:	89 04 24             	mov    %eax,(%esp)
 825e5a3:	e8 d8 f8 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825e5a8:	89 f0                	mov    %esi,%eax
 825e5aa:	89 da                	mov    %ebx,%edx
 825e5ac:	89 04 24             	mov    %eax,(%esp)
 825e5af:	e8 9c 51 88 00       	call   8ae3750 <_Unwind_Resume>
 825e5b4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 825e5b7:	89 04 24             	mov    %eax,(%esp)
 825e5ba:	e8 c1 f8 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825e5bf:	e9 b6 00 00 00       	jmp    825e67a <_ZN29Dispatcher_StackableActionUse4sendEP5CUserR9ParamBase+0x18e>
 825e5c4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e5c7:	89 04 24             	mov    %eax,(%esp)
 825e5ca:	e8 7d f7 32 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 825e5cf:	c7 44 24 08 04 02 00 	movl   $0x204,0x8(%esp)
 825e5d6:	00 
 825e5d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e5de:	00 
 825e5df:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e5e2:	89 04 24             	mov    %eax,(%esp)
 825e5e5:	e8 12 d3 e6 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 825e5ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e5f1:	00 
 825e5f2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e5f5:	89 04 24             	mov    %eax,(%esp)
 825e5f8:	e8 23 d3 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e5fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e600:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 825e604:	98                   	cwtl
 825e605:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e609:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e60c:	89 04 24             	mov    %eax,(%esp)
 825e60f:	e8 90 b8 e7 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 825e614:	8b 45 f4             	mov    -0xc(%ebp),%eax
 825e617:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 825e61b:	0f be c0             	movsbl %al,%eax
 825e61e:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e622:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e625:	89 04 24             	mov    %eax,(%esp)
 825e628:	e8 f3 d2 e6 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 825e62d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 825e634:	00 
 825e635:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e638:	89 04 24             	mov    %eax,(%esp)
 825e63b:	e8 18 d3 e6 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 825e640:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e643:	89 44 24 04          	mov    %eax,0x4(%esp)
 825e647:	8b 45 0c             	mov    0xc(%ebp),%eax
 825e64a:	89 04 24             	mov    %eax,(%esp)
 825e64d:	e8 68 9f 3e 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 825e652:	eb 1b                	jmp    825e66f <_ZN29Dispatcher_StackableActionUse4sendEP5CUserR9ParamBase+0x183>
 825e654:	89 d3                	mov    %edx,%ebx
 825e656:	89 c6                	mov    %eax,%esi
 825e658:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e65b:	89 04 24             	mov    %eax,(%esp)
 825e65e:	e8 1d f8 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825e663:	89 f0                	mov    %esi,%eax
 825e665:	89 da                	mov    %ebx,%edx
 825e667:	89 04 24             	mov    %eax,(%esp)
 825e66a:	e8 e1 50 88 00       	call   8ae3750 <_Unwind_Resume>
 825e66f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 825e672:	89 04 24             	mov    %eax,(%esp)
 825e675:	e8 06 f8 32 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 825e67a:	83 c4 30             	add    $0x30,%esp
 825e67d:	5b                   	pop    %ebx
 825e67e:	5e                   	pop    %esi
 825e67f:	5d                   	pop    %ebp
 825e680:	c3                   	ret
 825e681:	90                   	nop

```

```c
// Dispatcher_StackableActionUse::send @ 0x825e4ec

/* Dispatcher_StackableActionUse::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_StackableActionUse::send
          (Dispatcher_StackableActionUse *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_28 [12];
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) == 0) {
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 0825e5e5 to 0825e651 has its CatchHandler @ 0825e654 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x204);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_28,(int)*(short *)(local_10 + 8));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_28,(int)(char)local_10[10]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
    CUser::Send(param_1,local_28);
    PacketGuard::~PacketGuard(local_28);
  }
  else {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0825e529 to 0825e596 has its CatchHandler @ 0825e599 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x204);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,*(uint *)(local_10 + 4) & 0xff);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)(char)local_10[10]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send(param_1,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return;
}

```

