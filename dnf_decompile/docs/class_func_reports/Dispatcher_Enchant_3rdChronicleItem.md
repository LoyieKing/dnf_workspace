# Dispatcher_Enchant_3rdChronicleItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d343a Dispatcher_Enchant_3rdChronicleItem::check_error  [0x081d343a-0x81d35fd] ===
 81d343a:	55                   	push   %ebp
 81d343b:	89 e5                	mov    %esp,%ebp
 81d343d:	53                   	push   %ebx
 81d343e:	81 ec a4 00 00 00    	sub    $0xa4,%esp
 81d3444:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3447:	89 04 24             	mov    %eax,(%esp)
 81d344a:	e8 3d 6f f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d344f:	83 f8 03             	cmp    $0x3,%eax
 81d3452:	75 0f                	jne    81d3463 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x29>
 81d3454:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3457:	89 04 24             	mov    %eax,(%esp)
 81d345a:	e8 d3 cf f4 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81d345f:	85 c0                	test   %eax,%eax
 81d3461:	75 07                	jne    81d346a <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x30>
 81d3463:	b8 01 00 00 00       	mov    $0x1,%eax
 81d3468:	eb 05                	jmp    81d346f <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x35>
 81d346a:	b8 00 00 00 00       	mov    $0x0,%eax
 81d346f:	84 c0                	test   %al,%al
 81d3471:	74 0a                	je     81d347d <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x43>
 81d3473:	b8 07 00 00 00       	mov    $0x7,%eax
 81d3478:	e9 7b 01 00 00       	jmp    81d35f8 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1be>
 81d347d:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3480:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d3483:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d3488:	c7 44 24 08 27 00 00 	movl   $0x27,0x8(%esp)
 81d348f:	00 
 81d3490:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d3493:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3497:	89 04 24             	mov    %eax,(%esp)
 81d349a:	e8 63 55 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d349f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d34a2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81d34a6:	74 08                	je     81d34b0 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x76>
 81d34a8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d34ab:	e9 48 01 00 00       	jmp    81d35f8 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1be>
 81d34b0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d34b3:	0f b7 40 0d          	movzwl 0xd(%eax),%eax
 81d34b7:	0f b7 c0             	movzwl %ax,%eax
 81d34ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d34be:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d34c5:	00 
 81d34c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d34c9:	89 04 24             	mov    %eax,(%esp)
 81d34cc:	e8 71 34 47 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 81d34d1:	84 c0                	test   %al,%al
 81d34d3:	74 0a                	je     81d34df <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0xa5>
 81d34d5:	b8 d5 00 00 00       	mov    $0xd5,%eax
 81d34da:	e9 19 01 00 00       	jmp    81d35f8 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1be>
 81d34df:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d34e2:	8b 40 15             	mov    0x15(%eax),%eax
 81d34e5:	89 c3                	mov    %eax,%ebx
 81d34e7:	e8 af 8c ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d34ec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d34f0:	89 04 24             	mov    %eax,(%esp)
 81d34f3:	e8 3a c5 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d34f8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d34fb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d34ff:	75 0a                	jne    81d350b <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0xd1>
 81d3501:	b8 04 00 00 00       	mov    $0x4,%eax
 81d3506:	e9 ed 00 00 00       	jmp    81d35f8 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1be>
 81d350b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d350e:	89 04 24             	mov    %eax,(%esp)
 81d3511:	e8 78 6d f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d3516:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d3519:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d351d:	75 0a                	jne    81d3529 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0xef>
 81d351f:	b8 04 00 00 00       	mov    $0x4,%eax
 81d3524:	e9 cf 00 00 00       	jmp    81d35f8 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1be>
 81d3529:	8d 45 ab             	lea    -0x55(%ebp),%eax
 81d352c:	89 04 24             	mov    %eax,(%esp)
 81d352f:	e8 20 83 ef ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 81d3534:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d3537:	0f b7 40 13          	movzwl 0x13(%eax),%eax
 81d353b:	0f b7 d0             	movzwl %ax,%edx
 81d353e:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81d3544:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d3548:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 81d354f:	00 
 81d3550:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d3553:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3557:	89 04 24             	mov    %eax,(%esp)
 81d355a:	e8 b9 83 32 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 81d355f:	83 ec 04             	sub    $0x4,%esp
 81d3562:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 81d3568:	89 45 ab             	mov    %eax,-0x55(%ebp)
 81d356b:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 81d3571:	89 45 af             	mov    %eax,-0x51(%ebp)
 81d3574:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 81d357a:	89 45 b3             	mov    %eax,-0x4d(%ebp)
 81d357d:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 81d3583:	89 45 b7             	mov    %eax,-0x49(%ebp)
 81d3586:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 81d358c:	89 45 bb             	mov    %eax,-0x45(%ebp)
 81d358f:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 81d3595:	89 45 bf             	mov    %eax,-0x41(%ebp)
 81d3598:	8b 45 80             	mov    -0x80(%ebp),%eax
 81d359b:	89 45 c3             	mov    %eax,-0x3d(%ebp)
 81d359e:	8b 45 84             	mov    -0x7c(%ebp),%eax
 81d35a1:	89 45 c7             	mov    %eax,-0x39(%ebp)
 81d35a4:	8b 45 88             	mov    -0x78(%ebp),%eax
 81d35a7:	89 45 cb             	mov    %eax,-0x35(%ebp)
 81d35aa:	8b 45 8c             	mov    -0x74(%ebp),%eax
 81d35ad:	89 45 cf             	mov    %eax,-0x31(%ebp)
 81d35b0:	8b 45 90             	mov    -0x70(%ebp),%eax
 81d35b3:	89 45 d3             	mov    %eax,-0x2d(%ebp)
 81d35b6:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81d35b9:	89 45 d7             	mov    %eax,-0x29(%ebp)
 81d35bc:	8b 45 98             	mov    -0x68(%ebp),%eax
 81d35bf:	89 45 db             	mov    %eax,-0x25(%ebp)
 81d35c2:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81d35c5:	89 45 df             	mov    %eax,-0x21(%ebp)
 81d35c8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 81d35cb:	89 45 e3             	mov    %eax,-0x1d(%ebp)
 81d35ce:	0f b6 45 a4          	movzbl -0x5c(%ebp),%eax
 81d35d2:	88 45 e7             	mov    %al,-0x19(%ebp)
 81d35d5:	8b 5d ad             	mov    -0x53(%ebp),%ebx
 81d35d8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d35db:	89 04 24             	mov    %eax,(%esp)
 81d35de:	e8 65 d6 f3 ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 81d35e3:	39 c3                	cmp    %eax,%ebx
 81d35e5:	0f 95 c0             	setne  %al
 81d35e8:	84 c0                	test   %al,%al
 81d35ea:	74 07                	je     81d35f3 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1b9>
 81d35ec:	b8 17 00 00 00       	mov    $0x17,%eax
 81d35f1:	eb 05                	jmp    81d35f8 <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE+0x1be>
 81d35f3:	b8 00 00 00 00       	mov    $0x0,%eax
 81d35f8:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81d35fb:	c9                   	leave
 81d35fc:	c3                   	ret
 81d35fd:	90                   	nop

```

```c
// Dispatcher_Enchant_3rdChronicleItem::check_error @ 0x81d343a

/* Dispatcher_Enchant_3rdChronicleItem::check_error(CUser*, MSG_BASE&) */

int __thiscall
Dispatcher_Enchant_3rdChronicleItem::check_error
          (Dispatcher_Enchant_3rdChronicleItem *this,CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined1 local_9c [8];
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 local_60;
  undefined2 local_59;
  undefined2 uStack_57;
  undefined2 local_55;
  undefined2 uStack_53;
  undefined4 local_51;
  undefined4 local_4d;
  undefined4 local_49;
  undefined4 local_45;
  undefined4 local_41;
  undefined4 local_3d;
  undefined4 local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined4 local_2d;
  undefined4 local_29;
  undefined4 local_25;
  undefined4 local_21;
  undefined1 local_1d;
  MSG_BASE *local_1c;
  int local_18;
  CItem *local_14;
  int local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    local_18 = 7;
  }
  else {
    local_1c = param_2;
    local_18 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x27);
    if (local_18 == 0) {
      cVar2 = CUser::CheckItemLock(param_1,1,(uint)*(ushort *)(local_1c + 0xd));
      if (cVar2 == '\0') {
        iVar3 = *(int *)(local_1c + 0x15);
        this_00 = (CDataManager *)G_CDataManager();
        local_14 = (CItem *)CDataManager::find_item(this_00,iVar3);
        if (local_14 == (CItem *)0x0) {
          local_18 = 4;
        }
        else {
          local_10 = CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          if (local_10 == 0) {
            local_18 = 4;
          }
          else {
            Inven_Item::Inven_Item((Inven_Item *)&local_59);
            CInventory::GetInvenSlot((int)local_9c,local_10);
            local_59 = (undefined2)local_9c._0_4_;
            uStack_57 = SUB42(local_9c._0_4_,2);
            local_55 = (undefined2)local_9c._4_4_;
            uStack_53 = SUB42(local_9c._4_4_,2);
            local_51 = local_94;
            local_4d = local_90;
            local_49 = local_8c;
            local_45 = local_88;
            local_41 = local_84;
            local_3d = local_80;
            local_39 = local_7c;
            local_35 = local_78;
            local_31 = local_74;
            local_2d = local_70;
            local_29 = local_6c;
            local_25 = local_68;
            local_21 = local_64;
            local_1d = local_60;
            iVar3 = CONCAT22(local_55,uStack_57);
            iVar4 = CItem::get_index(local_14);
            if (iVar3 == iVar4) {
              local_18 = 0;
            }
            else {
              local_18 = 0x17;
            }
          }
        }
      }
      else {
        local_18 = 0xd5;
      }
    }
  }
  return local_18;
}

```

---

## process

```asm
// === 081d375e Dispatcher_Enchant_3rdChronicleItem::process  [0x081d375e-0x81d387d] ===
 81d375e:	55                   	push   %ebp
 81d375f:	89 e5                	mov    %esp,%ebp
 81d3761:	56                   	push   %esi
 81d3762:	53                   	push   %ebx
 81d3763:	83 ec 30             	sub    $0x30,%esp
 81d3766:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3769:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d376d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3770:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3774:	8b 45 08             	mov    0x8(%ebp),%eax
 81d3777:	89 04 24             	mov    %eax,(%esp)
 81d377a:	e8 bb fc ff ff       	call   81d343a <_ZN35Dispatcher_Enchant_3rdChronicleItem11check_errorEP5CUserR8MSG_BASE>
 81d377f:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d3782:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 81d3786:	7e 27                	jle    81d37af <_ZN35Dispatcher_Enchant_3rdChronicleItem7processEP5CUserR8MSG_BASER9ParamBase+0x51>
 81d3788:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d378b:	0f b6 c0             	movzbl %al,%eax
 81d378e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d3792:	c7 44 24 04 73 01 00 	movl   $0x173,0x4(%esp)
 81d3799:	00 
 81d379a:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d379d:	89 04 24             	mov    %eax,(%esp)
 81d37a0:	e8 9d 87 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d37a5:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
 81d37aa:	e9 c5 00 00 00       	jmp    81d3874 <_ZN35Dispatcher_Enchant_3rdChronicleItem7processEP5CUserR8MSG_BASER9ParamBase+0x116>
 81d37af:	8b 45 14             	mov    0x14(%ebp),%eax
 81d37b2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d37b5:	8b 45 10             	mov    0x10(%ebp),%eax
 81d37b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d37bb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d37c2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d37c5:	89 04 24             	mov    %eax,(%esp)
 81d37c8:	e8 7f a5 3b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81d37cd:	c7 44 24 08 73 01 00 	movl   $0x173,0x8(%esp)
 81d37d4:	00 
 81d37d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d37dc:	00 
 81d37dd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d37e0:	89 04 24             	mov    %eax,(%esp)
 81d37e3:	e8 14 81 ef ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81d37e8:	e8 ae 89 ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d37ed:	8b 40 20             	mov    0x20(%eax),%eax
 81d37f0:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81d37f3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81d37f7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 81d37fa:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d37fe:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d3801:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d3805:	89 04 24             	mov    %eax,(%esp)
 81d3808:	e8 ad 69 37 00       	call   854a1ba <_ZN8WongWork12CItemUpgrade11ProcUpgradeEP5CUserP11MSG_ENCHANTP11PacketGuard>
 81d380d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81d3810:	89 42 04             	mov    %eax,0x4(%edx)
 81d3813:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d3816:	8b 40 04             	mov    0x4(%eax),%eax
 81d3819:	85 c0                	test   %eax,%eax
 81d381b:	0f 94 c0             	sete   %al
 81d381e:	84 c0                	test   %al,%al
 81d3820:	74 25                	je     81d3847 <_ZN35Dispatcher_Enchant_3rdChronicleItem7processEP5CUserR8MSG_BASER9ParamBase+0xe9>
 81d3822:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d3829:	00 
 81d382a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d382d:	89 04 24             	mov    %eax,(%esp)
 81d3830:	e8 23 81 ef ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81d3835:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3838:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d383c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d383f:	89 04 24             	mov    %eax,(%esp)
 81d3842:	e8 73 4d 47 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81d3847:	bb 00 00 00 00       	mov    $0x0,%ebx
 81d384c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d384f:	89 04 24             	mov    %eax,(%esp)
 81d3852:	e8 29 a6 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3857:	eb 1b                	jmp    81d3874 <_ZN35Dispatcher_Enchant_3rdChronicleItem7processEP5CUserR8MSG_BASER9ParamBase+0x116>
 81d3859:	89 d3                	mov    %edx,%ebx
 81d385b:	89 c6                	mov    %eax,%esi
 81d385d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81d3860:	89 04 24             	mov    %eax,(%esp)
 81d3863:	e8 18 a6 3b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81d3868:	89 f0                	mov    %esi,%eax
 81d386a:	89 da                	mov    %ebx,%edx
 81d386c:	89 04 24             	mov    %eax,(%esp)
 81d386f:	e8 dc fe 90 00       	call   8ae3750 <_Unwind_Resume>
 81d3874:	89 d8                	mov    %ebx,%eax
 81d3876:	83 c4 30             	add    $0x30,%esp
 81d3879:	5b                   	pop    %ebx
 81d387a:	5e                   	pop    %esi
 81d387b:	5d                   	pop    %ebp
 81d387c:	c3                   	ret
 81d387d:	90                   	nop

```

```c
// Dispatcher_Enchant_3rdChronicleItem::process @ 0x81d375e

/* Dispatcher_Enchant_3rdChronicleItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_Enchant_3rdChronicleItem::process
          (Dispatcher_Enchant_3rdChronicleItem *this,CUser *param_1,MSG_BASE *param_2,
          ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  PacketGuard local_28 [12];
  uint local_1c;
  ParamBase *local_18;
  MSG_BASE *local_14;
  undefined4 local_10;
  
  local_1c = check_error(this,param_1,param_2);
  if ((int)local_1c < 1) {
    local_18 = param_3;
    local_14 = param_2;
    local_10 = 0;
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 081d37e3 to 081d3846 has its CatchHandler @ 081d3859 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,1,0x173);
    iVar1 = G_CDataManager();
    uVar2 = WongWork::CItemUpgrade::ProcUpgrade
                      (*(CItemUpgrade **)(iVar1 + 0x20),param_1,(MSG_ENCHANT *)local_14,local_28);
    *(undefined4 *)(local_18 + 4) = uVar2;
    if (*(int *)(local_18 + 4) == 0) {
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,true);
      CUser::Send(param_1,local_28);
    }
    uVar2 = 0;
    PacketGuard::~PacketGuard(local_28);
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x173,local_1c & 0xff);
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

```

---

## read

```asm
// === 081d35fe Dispatcher_Enchant_3rdChronicleItem::read  [0x081d35fe-0x81d375d] ===
 81d35fe:	55                   	push   %ebp
 81d35ff:	89 e5                	mov    %esp,%ebp
 81d3601:	83 ec 18             	sub    $0x18,%esp
 81d3604:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3607:	83 c0 13             	add    $0x13,%eax
 81d360a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d360e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3611:	89 04 24             	mov    %eax,(%esp)
 81d3614:	e8 97 9a 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d3619:	83 f0 01             	xor    $0x1,%eax
 81d361c:	84 c0                	test   %al,%al
 81d361e:	74 29                	je     81d3649 <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x4b>
 81d3620:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3627:	00 
 81d3628:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d362f:	00 
 81d3630:	c7 44 24 04 40 34 bd 	movl   $0x8bd3440,0x4(%esp)
 81d3637:	08 
 81d3638:	c7 04 24 58 31 00 00 	movl   $0x3158,(%esp)
 81d363f:	e8 93 d2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3644:	e9 13 01 00 00       	jmp    81d375c <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x15e>
 81d3649:	8b 45 10             	mov    0x10(%ebp),%eax
 81d364c:	83 c0 15             	add    $0x15,%eax
 81d364f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3653:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3656:	89 04 24             	mov    %eax,(%esp)
 81d3659:	e8 20 9c 3b 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81d365e:	83 f0 01             	xor    $0x1,%eax
 81d3661:	84 c0                	test   %al,%al
 81d3663:	74 29                	je     81d368e <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x90>
 81d3665:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d366c:	00 
 81d366d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d3674:	00 
 81d3675:	c7 44 24 04 40 34 bd 	movl   $0x8bd3440,0x4(%esp)
 81d367c:	08 
 81d367d:	c7 04 24 5a 31 00 00 	movl   $0x315a,(%esp)
 81d3684:	e8 4e d2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3689:	e9 ce 00 00 00       	jmp    81d375c <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x15e>
 81d368e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3691:	83 c0 0d             	add    $0xd,%eax
 81d3694:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d3698:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d369b:	89 04 24             	mov    %eax,(%esp)
 81d369e:	e8 0d 9a 3b 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 81d36a3:	83 f0 01             	xor    $0x1,%eax
 81d36a6:	84 c0                	test   %al,%al
 81d36a8:	74 29                	je     81d36d3 <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0xd5>
 81d36aa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d36b1:	00 
 81d36b2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d36b9:	00 
 81d36ba:	c7 44 24 04 40 34 bd 	movl   $0x8bd3440,0x4(%esp)
 81d36c1:	08 
 81d36c2:	c7 04 24 5d 31 00 00 	movl   $0x315d,(%esp)
 81d36c9:	e8 09 d2 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d36ce:	e9 89 00 00 00       	jmp    81d375c <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x15e>
 81d36d3:	8b 45 10             	mov    0x10(%ebp),%eax
 81d36d6:	83 c0 0f             	add    $0xf,%eax
 81d36d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d36dd:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d36e0:	89 04 24             	mov    %eax,(%esp)
 81d36e3:	e8 96 9b 3b 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 81d36e8:	83 f0 01             	xor    $0x1,%eax
 81d36eb:	84 c0                	test   %al,%al
 81d36ed:	74 26                	je     81d3715 <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x117>
 81d36ef:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d36f6:	00 
 81d36f7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d36fe:	00 
 81d36ff:	c7 44 24 04 40 34 bd 	movl   $0x8bd3440,0x4(%esp)
 81d3706:	08 
 81d3707:	c7 04 24 5f 31 00 00 	movl   $0x315f,(%esp)
 81d370e:	e8 c4 d1 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3713:	eb 47                	jmp    81d375c <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x15e>
 81d3715:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3718:	83 c0 19             	add    $0x19,%eax
 81d371b:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d371f:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d3722:	89 04 24             	mov    %eax,(%esp)
 81d3725:	e8 46 98 3b 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 81d372a:	83 f0 01             	xor    $0x1,%eax
 81d372d:	84 c0                	test   %al,%al
 81d372f:	74 26                	je     81d3757 <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x159>
 81d3731:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d3738:	00 
 81d3739:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d3740:	00 
 81d3741:	c7 44 24 04 40 34 bd 	movl   $0x8bd3440,0x4(%esp)
 81d3748:	08 
 81d3749:	c7 04 24 62 31 00 00 	movl   $0x3162,(%esp)
 81d3750:	e8 82 d1 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d3755:	eb 05                	jmp    81d375c <_ZN35Dispatcher_Enchant_3rdChronicleItem4readER9PacketBufR8MSG_BASE+0x15e>
 81d3757:	b8 00 00 00 00       	mov    $0x0,%eax
 81d375c:	c9                   	leave
 81d375d:	c3                   	ret

```

```c
// Dispatcher_Enchant_3rdChronicleItem::read @ 0x81d35fe

/* Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_Enchant_3rdChronicleItem::read
          (Dispatcher_Enchant_3rdChronicleItem *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0x13));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0x15));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(ushort *)(param_2 + 0xd));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_int(param_1,(ulong *)(param_2 + 0xf));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_byte(param_1,(uchar *)(param_2 + 0x19));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x3162,
                             "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x315f,
                           "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x315d,
                         "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x315a,
                       "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)"
                       ,0,0);
    }
  }
  else {
    uVar2 = LineFunc(0x3158,
                     "virtual int Dispatcher_Enchant_3rdChronicleItem::read(PacketBuf&, MSG_BASE&)",
                     0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d387e Dispatcher_Enchant_3rdChronicleItem::send  [0x081d387e-0x81d38b9] ===
 81d387e:	55                   	push   %ebp
 81d387f:	89 e5                	mov    %esp,%ebp
 81d3881:	83 ec 28             	sub    $0x28,%esp
 81d3884:	8b 45 10             	mov    0x10(%ebp),%eax
 81d3887:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d388a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d388d:	8b 40 04             	mov    0x4(%eax),%eax
 81d3890:	85 c0                	test   %eax,%eax
 81d3892:	74 22                	je     81d38b6 <_ZN35Dispatcher_Enchant_3rdChronicleItem4sendEP5CUserR9ParamBase+0x38>
 81d3894:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d3897:	8b 40 04             	mov    0x4(%eax),%eax
 81d389a:	0f b6 c0             	movzbl %al,%eax
 81d389d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d38a1:	c7 44 24 04 73 01 00 	movl   $0x173,0x4(%esp)
 81d38a8:	00 
 81d38a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d38ac:	89 04 24             	mov    %eax,(%esp)
 81d38af:	e8 8e 86 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d38b4:	eb 01                	jmp    81d38b7 <_ZN35Dispatcher_Enchant_3rdChronicleItem4sendEP5CUserR9ParamBase+0x39>
 81d38b6:	90                   	nop
 81d38b7:	c9                   	leave
 81d38b8:	c3                   	ret
 81d38b9:	90                   	nop

```

```c
// Dispatcher_Enchant_3rdChronicleItem::send @ 0x81d387e

/* Dispatcher_Enchant_3rdChronicleItem::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_Enchant_3rdChronicleItem::send
          (Dispatcher_Enchant_3rdChronicleItem *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0x173,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

