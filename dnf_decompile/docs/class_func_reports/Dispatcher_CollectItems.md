# Dispatcher_CollectItems

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081e329e Dispatcher_CollectItems::check_error  [0x081e329e-0x81e33a3] ===
 81e329e:	55                   	push   %ebp
 81e329f:	89 e5                	mov    %esp,%ebp
 81e32a1:	53                   	push   %ebx
 81e32a2:	83 ec 64             	sub    $0x64,%esp
 81e32a5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e32a8:	89 04 24             	mov    %eax,(%esp)
 81e32ab:	e8 dc 70 ef ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81e32b0:	83 f8 03             	cmp    $0x3,%eax
 81e32b3:	0f 95 c0             	setne  %al
 81e32b6:	84 c0                	test   %al,%al
 81e32b8:	74 0a                	je     81e32c4 <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x26>
 81e32ba:	b8 07 00 00 00       	mov    $0x7,%eax
 81e32bf:	e9 db 00 00 00       	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e32c4:	8b 45 10             	mov    0x10(%ebp),%eax
 81e32c7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e32ca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e32cd:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e32d1:	66 83 f8 01          	cmp    $0x1,%ax
 81e32d5:	74 0a                	je     81e32e1 <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x43>
 81e32d7:	b8 16 00 00 00       	mov    $0x16,%eax
 81e32dc:	e9 be 00 00 00       	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e32e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e32e4:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e32e8:	0f bf d8             	movswl %ax,%ebx
 81e32eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e32ee:	89 04 24             	mov    %eax,(%esp)
 81e32f1:	e8 88 6f ef ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 81e32f6:	8d 55 b3             	lea    -0x4d(%ebp),%edx
 81e32f9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 81e32fd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81e3304:	00 
 81e3305:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3309:	89 14 24             	mov    %edx,(%esp)
 81e330c:	e8 07 86 31 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81e3311:	83 ec 04             	sub    $0x4,%esp
 81e3314:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 81e3317:	89 c3                	mov    %eax,%ebx
 81e3319:	e8 7d 8e ee ff       	call   80cc19b <_Z14G_CDataManagerv>
 81e331e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e3322:	89 04 24             	mov    %eax,(%esp)
 81e3325:	e8 08 c7 17 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81e332a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e332d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81e3331:	75 07                	jne    81e333a <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x9c>
 81e3333:	b8 11 00 00 00       	mov    $0x11,%eax
 81e3338:	eb 65                	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e333a:	8b 55 ba             	mov    -0x46(%ebp),%edx
 81e333d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3340:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e3344:	0f b7 c0             	movzwl %ax,%eax
 81e3347:	39 c2                	cmp    %eax,%edx
 81e3349:	7d 07                	jge    81e3352 <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0xb4>
 81e334b:	b8 16 00 00 00       	mov    $0x16,%eax
 81e3350:	eb 4d                	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e3352:	8b 45 b5             	mov    -0x4b(%ebp),%eax
 81e3355:	3d ca 12 00 00       	cmp    $0x12ca,%eax
 81e335a:	74 07                	je     81e3363 <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0xc5>
 81e335c:	b8 17 00 00 00       	mov    $0x17,%eax
 81e3361:	eb 3c                	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e3363:	e8 80 18 3e 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 81e3368:	8b 55 0c             	mov    0xc(%ebp),%edx
 81e336b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81e336f:	89 04 24             	mov    %eax,(%esp)
 81e3372:	e8 e7 79 3e 00       	call   85cad5e <_ZN13private_store16CPrivateStoreMgr18IsBusyPrivateStoreEP5CUser>
 81e3377:	84 c0                	test   %al,%al
 81e3379:	74 07                	je     81e3382 <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0xe4>
 81e337b:	b8 3c 00 00 00       	mov    $0x3c,%eax
 81e3380:	eb 1d                	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e3382:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 81e3387:	89 04 24             	mov    %eax,(%esp)
 81e338a:	e8 8d 1a 05 00       	call   8234e1c <_ZNK9CTimeGate6isOpenEv>
 81e338f:	84 c0                	test   %al,%al
 81e3391:	74 07                	je     81e339a <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0xfc>
 81e3393:	b8 16 00 00 00       	mov    $0x16,%eax
 81e3398:	eb 05                	jmp    81e339f <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase+0x101>
 81e339a:	b8 00 00 00 00       	mov    $0x0,%eax
 81e339f:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81e33a2:	c9                   	leave
 81e33a3:	c3                   	ret

```

```c
// Dispatcher_CollectItems::check_error @ 0x81e329e

/* Dispatcher_CollectItems::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_CollectItems::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CDataManager *this;
  CPrivateStoreMgr *this_00;
  undefined1 local_51 [2];
  int local_4f;
  int local_4a;
  ParamBase *local_14;
  int local_10;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 3) {
    local_14 = param_3;
    if (*(short *)(param_3 + 0x10) == 1) {
      iVar2 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_2);
      CInventory::GetInvenSlot((int)local_51,iVar2);
      iVar2 = local_4f;
      this = (CDataManager *)G_CDataManager();
      local_10 = CDataManager::find_item(this,iVar2);
      if (local_10 == 0) {
        uVar3 = 0x11;
      }
      else if (local_4a < (int)(uint)*(ushort *)(local_14 + 0x10)) {
        uVar3 = 0x16;
      }
      else if (local_4f == 0x12ca) {
        this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
        cVar1 = private_store::CPrivateStoreMgr::IsBusyPrivateStore(this_00,(CUser *)param_2);
        if (cVar1 == '\0') {
          cVar1 = CTimeGate::isOpen(GlobalData::s_timeGate_);
          if (cVar1 == '\0') {
            uVar3 = 0;
          }
          else {
            uVar3 = 0x16;
          }
        }
        else {
          uVar3 = 0x3c;
        }
      }
      else {
        uVar3 = 0x17;
      }
    }
    else {
      uVar3 = 0x16;
    }
  }
  else {
    uVar3 = 7;
  }
  return uVar3;
}

```

---

## process

```asm
// === 081e343c Dispatcher_CollectItems::process  [0x081e343c-0x81e360b] ===
 81e343c:	55                   	push   %ebp
 81e343d:	89 e5                	mov    %esp,%ebp
 81e343f:	56                   	push   %esi
 81e3440:	53                   	push   %ebx
 81e3441:	83 ec 70             	sub    $0x70,%esp
 81e3444:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3447:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81e344a:	8b 45 14             	mov    0x14(%ebp),%eax
 81e344d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e3450:	8b 45 14             	mov    0x14(%ebp),%eax
 81e3453:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81e3457:	8b 45 10             	mov    0x10(%ebp),%eax
 81e345a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e345e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3461:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e3465:	8b 45 08             	mov    0x8(%ebp),%eax
 81e3468:	89 04 24             	mov    %eax,(%esp)
 81e346b:	e8 2e fe ff ff       	call   81e329e <_ZN23Dispatcher_CollectItems11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81e3470:	89 c2                	mov    %eax,%edx
 81e3472:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3475:	89 50 04             	mov    %edx,0x4(%eax)
 81e3478:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e347b:	8b 40 04             	mov    0x4(%eax),%eax
 81e347e:	85 c0                	test   %eax,%eax
 81e3480:	7e 0a                	jle    81e348c <_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase+0x50>
 81e3482:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3487:	e9 78 01 00 00       	jmp    81e3604 <_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase+0x1c8>
 81e348c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e348f:	8b 40 04             	mov    0x4(%eax),%eax
 81e3492:	85 c0                	test   %eax,%eax
 81e3494:	79 2b                	jns    81e34c1 <_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase+0x85>
 81e3496:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3499:	8b 40 04             	mov    0x4(%eax),%eax
 81e349c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e34a3:	00 
 81e34a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e34a8:	c7 44 24 04 40 13 bd 	movl   $0x8bd1340,0x4(%esp)
 81e34af:	08 
 81e34b0:	c7 04 24 a2 5a 00 00 	movl   $0x5aa2,(%esp)
 81e34b7:	e8 1b d4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e34bc:	e9 43 01 00 00       	jmp    81e3604 <_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase+0x1c8>
 81e34c1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e34c4:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e34c8:	0f b7 f0             	movzwl %ax,%esi
 81e34cb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e34ce:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81e34d2:	0f bf d8             	movswl %ax,%ebx
 81e34d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e34d8:	89 04 24             	mov    %eax,(%esp)
 81e34db:	e8 ae 6d ef ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81e34e0:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 81e34e7:	00 
 81e34e8:	c7 44 24 10 03 00 00 	movl   $0x3,0x10(%esp)
 81e34ef:	00 
 81e34f0:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e34f4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e34f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e34ff:	00 
 81e3500:	89 04 24             	mov    %eax,(%esp)
 81e3503:	e8 04 0b 32 00       	call   850400c <_ZN10CInventory11delete_itemE10INVEN_TYPEii14eItemDelReasonb>
 81e3508:	83 f0 01             	xor    $0x1,%eax
 81e350b:	84 c0                	test   %al,%al
 81e350d:	74 29                	je     81e3538 <_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase+0xfc>
 81e350f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3516:	00 
 81e3517:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e351e:	00 
 81e351f:	c7 44 24 04 40 13 bd 	movl   $0x8bd1340,0x4(%esp)
 81e3526:	08 
 81e3527:	c7 04 24 a7 5a 00 00 	movl   $0x5aa7,(%esp)
 81e352e:	e8 a4 d3 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3533:	e9 cc 00 00 00       	jmp    81e3604 <_ZN23Dispatcher_CollectItems7processEP5CUserR8MSG_BASER9ParamBase+0x1c8>
 81e3538:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e353b:	0f b7 50 0e          	movzwl 0xe(%eax),%edx
 81e353f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3542:	66 89 50 08          	mov    %dx,0x8(%eax)
 81e3546:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3549:	0f b7 50 10          	movzwl 0x10(%eax),%edx
 81e354d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3550:	66 89 50 0a          	mov    %dx,0xa(%eax)
 81e3554:	8d 45 b7             	lea    -0x49(%ebp),%eax
 81e3557:	89 04 24             	mov    %eax,(%esp)
 81e355a:	e8 fb 91 04 00       	call   822c75a <_ZN19Packet_CollectItemsC1Ev>
 81e355f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81e3562:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e3566:	0f b7 c0             	movzwl %ax,%eax
 81e3569:	89 45 c9             	mov    %eax,-0x37(%ebp)
 81e356c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81e3573:	ff 
 81e3574:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3577:	89 04 24             	mov    %eax,(%esp)
 81e357a:	e8 21 aa 46 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81e357f:	89 45 cd             	mov    %eax,-0x33(%ebp)
 81e3582:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3585:	89 04 24             	mov    %eax,(%esp)
 81e3588:	e8 e1 6d ef ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81e358d:	89 45 c5             	mov    %eax,-0x3b(%ebp)
 81e3590:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e3593:	89 04 24             	mov    %eax,(%esp)
 81e3596:	e8 8d da f1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81e359b:	89 04 24             	mov    %eax,(%esp)
 81e359e:	e8 0d ae e9 ff       	call   807e3b0 <strlen@plt>
 81e35a3:	88 45 d1             	mov    %al,-0x2f(%ebp)
 81e35a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e35a9:	89 04 24             	mov    %eax,(%esp)
 81e35ac:	e8 77 da f1 ff       	call   8101028 <_ZNK15CUserCharacInfo16getCurCharacNameEv>
 81e35b1:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 81e35b8:	00 
 81e35b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e35bd:	8d 45 b7             	lea    -0x49(%ebp),%eax
 81e35c0:	83 c0 1b             	add    $0x1b,%eax
 81e35c3:	89 04 24             	mov    %eax,(%esp)
 81e35c6:	e8 05 a3 e9 ff       	call   807d8d0 <strncpy@plt>
 81e35cb:	8d 5d b7             	lea    -0x49(%ebp),%ebx
 81e35ce:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e35d1:	89 04 24             	mov    %eax,(%esp)
 81e35d4:	e8 b7 86 ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e35d9:	8b 15 28 be 40 09    	mov    0x940be28,%edx
 81e35df:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e35e3:	89 14 24             	mov    %edx,(%esp)
 81e35e6:	e8 9f ea f2 ff       	call   811208a <_ZN15CServerProxyMgrI19CMonitorServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81e35eb:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 81e35f2:	00 
 81e35f3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e35f7:	89 04 24             	mov    %eax,(%esp)
 81e35fa:	e8 45 d8 28 00       	call   8470e44 <_ZN19CMonitorServerProxy13SendTcpPacketEPci>
 81e35ff:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3604:	83 c4 70             	add    $0x70,%esp
 81e3607:	5b                   	pop    %ebx
 81e3608:	5e                   	pop    %esi
 81e3609:	5d                   	pop    %ebp
 81e360a:	c3                   	ret
 81e360b:	90                   	nop

```

```c
// Dispatcher_CollectItems::process @ 0x81e343c

/* Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CollectItems::process
          (Dispatcher_CollectItems *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined2 uVar1;
  short sVar2;
  char cVar3;
  undefined4 uVar4;
  CInventory *pCVar5;
  char *pcVar6;
  size_t sVar7;
  CMonitorServerProxy *this_00;
  Packet_CollectItems local_4d [14];
  undefined4 local_3f;
  uint local_3b;
  undefined4 local_37;
  undefined1 local_33;
  char acStack_32 [30];
  MSG_BASE *local_14;
  ParamBase *local_10;
  
  local_14 = param_2;
  local_10 = param_3;
  uVar4 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_10 + 4) = uVar4;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar4 = LineFunc(0x5aa2,
                       "virtual int Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),0);
    }
    else {
      uVar1 = *(undefined2 *)(local_14 + 0x10);
      sVar2 = *(short *)(local_14 + 0xe);
      pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
      cVar3 = CInventory::delete_item(pCVar5,1,(int)sVar2,uVar1,3,1);
      if (cVar3 == '\x01') {
        *(undefined2 *)(local_10 + 8) = *(undefined2 *)(local_14 + 0xe);
        *(undefined2 *)(local_10 + 10) = *(undefined2 *)(local_14 + 0x10);
        Packet_CollectItems::Packet_CollectItems(local_4d);
        local_3b = (uint)*(ushort *)(local_14 + 0x10);
        local_37 = CUser::get_charac_no(param_1,-1);
        local_3f = CUser::get_acc_id(param_1);
        pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        sVar7 = strlen(pcVar6);
        local_33 = (undefined1)sVar7;
        pcVar6 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_1);
        strncpy(acStack_32,pcVar6,0x1d);
        uVar4 = CUser::GetServerGroup(param_1);
        this_00 = (CMonitorServerProxy *)
                  CServerProxyMgr<CMonitorServerProxy>::GetServerProxy
                            (GlobalData::s_monitor_proxy_mgr,uVar4);
        CMonitorServerProxy::SendTcpPacket(this_00,(char *)local_4d,0x39);
        uVar4 = 0;
      }
      else {
        uVar4 = LineFunc(0x5aa7,
                         "virtual int Dispatcher_CollectItems::process(CUser*, MSG_BASE&, ParamBase&)"
                         ,0,0);
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
// === 081e33a4 Dispatcher_CollectItems::read  [0x081e33a4-0x81e343b] ===
 81e33a4:	55                   	push   %ebp
 81e33a5:	89 e5                	mov    %esp,%ebp
 81e33a7:	83 ec 28             	sub    $0x28,%esp
 81e33aa:	8b 45 10             	mov    0x10(%ebp),%eax
 81e33ad:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e33b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e33b3:	83 c0 0e             	add    $0xe,%eax
 81e33b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e33ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e33bd:	89 04 24             	mov    %eax,(%esp)
 81e33c0:	e8 fb 9b 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e33c5:	83 f0 01             	xor    $0x1,%eax
 81e33c8:	84 c0                	test   %al,%al
 81e33ca:	74 26                	je     81e33f2 <_ZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASE+0x4e>
 81e33cc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e33d3:	00 
 81e33d4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e33db:	00 
 81e33dc:	c7 44 24 04 a0 13 bd 	movl   $0x8bd13a0,0x4(%esp)
 81e33e3:	08 
 81e33e4:	c7 04 24 8f 5a 00 00 	movl   $0x5a8f,(%esp)
 81e33eb:	e8 e7 d4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e33f0:	eb 47                	jmp    81e3439 <_ZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASE+0x95>
 81e33f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e33f5:	83 c0 10             	add    $0x10,%eax
 81e33f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e33fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e33ff:	89 04 24             	mov    %eax,(%esp)
 81e3402:	e8 a9 9c 3a 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81e3407:	83 f0 01             	xor    $0x1,%eax
 81e340a:	84 c0                	test   %al,%al
 81e340c:	74 26                	je     81e3434 <_ZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASE+0x90>
 81e340e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e3415:	00 
 81e3416:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e341d:	00 
 81e341e:	c7 44 24 04 a0 13 bd 	movl   $0x8bd13a0,0x4(%esp)
 81e3425:	08 
 81e3426:	c7 04 24 90 5a 00 00 	movl   $0x5a90,(%esp)
 81e342d:	e8 a5 d4 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e3432:	eb 05                	jmp    81e3439 <_ZN23Dispatcher_CollectItems4readER9PacketBufR8MSG_BASE+0x95>
 81e3434:	b8 00 00 00 00       	mov    $0x0,%eax
 81e3439:	c9                   	leave
 81e343a:	c3                   	ret
 81e343b:	90                   	nop

```

```c
// Dispatcher_CollectItems::read @ 0x81e33a4

/* Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CollectItems::read(Dispatcher_CollectItems *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x10));
    if (cVar1 == '\x01') {
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0x5a90,"virtual int Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x5a8f,"virtual int Dispatcher_CollectItems::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081e360c Dispatcher_CollectItems::send  [0x081e360c-0x81e3719] ===
 81e360c:	55                   	push   %ebp
 81e360d:	89 e5                	mov    %esp,%ebp
 81e360f:	56                   	push   %esi
 81e3610:	53                   	push   %ebx
 81e3611:	83 ec 20             	sub    $0x20,%esp
 81e3614:	8b 45 10             	mov    0x10(%ebp),%eax
 81e3617:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e361a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e361d:	8b 40 04             	mov    0x4(%eax),%eax
 81e3620:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81e3625:	0f 84 e7 00 00 00    	je     81e3712 <_ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase+0x106>
 81e362b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e362e:	8b 40 04             	mov    0x4(%eax),%eax
 81e3631:	85 c0                	test   %eax,%eax
 81e3633:	74 25                	je     81e365a <_ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase+0x4e>
 81e3635:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3638:	8b 40 04             	mov    0x4(%eax),%eax
 81e363b:	0f b6 c0             	movzbl %al,%eax
 81e363e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81e3642:	c7 44 24 04 e3 01 00 	movl   $0x1e3,0x4(%esp)
 81e3649:	00 
 81e364a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e364d:	89 04 24             	mov    %eax,(%esp)
 81e3650:	e8 ed 88 49 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81e3655:	e9 b9 00 00 00       	jmp    81e3713 <_ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase+0x107>
 81e365a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e365d:	89 04 24             	mov    %eax,(%esp)
 81e3660:	e8 e7 a6 3a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81e3665:	c7 44 24 08 e3 01 00 	movl   $0x1e3,0x8(%esp)
 81e366c:	00 
 81e366d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e3674:	00 
 81e3675:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e3678:	89 04 24             	mov    %eax,(%esp)
 81e367b:	e8 7c 82 ee ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81e3680:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e3687:	00 
 81e3688:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e368b:	89 04 24             	mov    %eax,(%esp)
 81e368e:	e8 8d 82 ee ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81e3693:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e3696:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 81e369a:	98                   	cwtl
 81e369b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e369f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e36a2:	89 04 24             	mov    %eax,(%esp)
 81e36a5:	e8 fa 67 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e36aa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e36ad:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 81e36b1:	0f b7 c0             	movzwl %ax,%eax
 81e36b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e36b8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e36bb:	89 04 24             	mov    %eax,(%esp)
 81e36be:	e8 e1 67 ef ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 81e36c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81e36ca:	00 
 81e36cb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e36ce:	89 04 24             	mov    %eax,(%esp)
 81e36d1:	e8 82 82 ee ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81e36d6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e36d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e36dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e36e0:	89 04 24             	mov    %eax,(%esp)
 81e36e3:	e8 d2 4e 46 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81e36e8:	eb 1b                	jmp    81e3705 <_ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase+0xf9>
 81e36ea:	89 d3                	mov    %edx,%ebx
 81e36ec:	89 c6                	mov    %eax,%esi
 81e36ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e36f1:	89 04 24             	mov    %eax,(%esp)
 81e36f4:	e8 87 a7 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e36f9:	89 f0                	mov    %esi,%eax
 81e36fb:	89 da                	mov    %ebx,%edx
 81e36fd:	89 04 24             	mov    %eax,(%esp)
 81e3700:	e8 4b 00 90 00       	call   8ae3750 <_Unwind_Resume>
 81e3705:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81e3708:	89 04 24             	mov    %eax,(%esp)
 81e370b:	e8 70 a7 3a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81e3710:	eb 01                	jmp    81e3713 <_ZN23Dispatcher_CollectItems4sendEP5CUserR9ParamBase+0x107>
 81e3712:	90                   	nop
 81e3713:	83 c4 20             	add    $0x20,%esp
 81e3716:	5b                   	pop    %ebx
 81e3717:	5e                   	pop    %esi
 81e3718:	5d                   	pop    %ebp
 81e3719:	c3                   	ret

```

```c
// Dispatcher_CollectItems::send @ 0x81e360c

/* Dispatcher_CollectItems::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CollectItems::send(Dispatcher_CollectItems *this,CUser *param_1,ParamBase *param_2)

{
  PacketGuard local_1c [12];
  ParamBase *local_10;
  
  local_10 = param_2;
  if (*(int *)(param_2 + 4) != 0x7fffffff) {
    if (*(int *)(param_2 + 4) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081e367b to 081e36e7 has its CatchHandler @ 081e36ea */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x1e3);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 8));
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 10))
      ;
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0x1e3,*(uint *)(param_2 + 4) & 0xff);
    }
  }
  return;
}

```

