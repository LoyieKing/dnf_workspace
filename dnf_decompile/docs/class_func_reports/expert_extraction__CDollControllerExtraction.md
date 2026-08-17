# expert_extraction__CDollControllerExtraction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _check_error

```asm
// === 084a4286 expert_extraction::CDollControllerExtraction::_check_error  [0x084a4286-0x84a43a9] ===
 84a4286:	55                   	push   %ebp
 84a4287:	89 e5                	mov    %esp,%ebp
 84a4289:	53                   	push   %ebx
 84a428a:	81 ec b4 00 00 00    	sub    $0xb4,%esp
 84a4290:	8b 55 10             	mov    0x10(%ebp),%edx
 84a4293:	8b 45 14             	mov    0x14(%ebp),%eax
 84a4296:	66 89 95 64 ff ff ff 	mov    %dx,-0x9c(%ebp)
 84a429d:	66 89 85 60 ff ff ff 	mov    %ax,-0xa0(%ebp)
 84a42a4:	0f bf 9d 64 ff ff ff 	movswl -0x9c(%ebp),%ebx
 84a42ab:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a42ae:	89 04 24             	mov    %eax,(%esp)
 84a42b1:	e8 c8 5f c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a42b6:	8d 55 a7             	lea    -0x59(%ebp),%edx
 84a42b9:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a42bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a42c4:	00 
 84a42c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a42c9:	89 14 24             	mov    %edx,(%esp)
 84a42cc:	e8 47 76 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a42d1:	83 ec 04             	sub    $0x4,%esp
 84a42d4:	8b 45 a9             	mov    -0x57(%ebp),%eax
 84a42d7:	89 c3                	mov    %eax,%ebx
 84a42d9:	e8 bd 7e c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a42de:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a42e2:	89 04 24             	mov    %eax,(%esp)
 84a42e5:	e8 48 b7 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a42ea:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a42ed:	0f bf 9d 60 ff ff ff 	movswl -0xa0(%ebp),%ebx
 84a42f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a42f7:	89 04 24             	mov    %eax,(%esp)
 84a42fa:	e8 7f 5f c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a42ff:	8d 95 6a ff ff ff    	lea    -0x96(%ebp),%edx
 84a4305:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84a4309:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a4310:	00 
 84a4311:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4315:	89 14 24             	mov    %edx,(%esp)
 84a4318:	e8 fb 75 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a431d:	83 ec 04             	sub    $0x4,%esp
 84a4320:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84a4326:	89 c3                	mov    %eax,%ebx
 84a4328:	e8 6e 7e c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a432d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a4331:	89 04 24             	mov    %eax,(%esp)
 84a4334:	e8 f9 b6 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a4339:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a433c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a433f:	8b 80 3c 03 00 00    	mov    0x33c(%eax),%eax
 84a4345:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a4348:	e8 4e 7e c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a434d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84a4354:	00 
 84a4355:	89 04 24             	mov    %eax,(%esp)
 84a4358:	e8 95 72 d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a435d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 84a4360:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a4364:	89 04 24             	mov    %eax,(%esp)
 84a4367:	e8 32 02 00 00       	call   84a459e <_ZN17STExpertJobScript40GetDollControllerExtractionPossibleLevelEi>
 84a436c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a436f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a4372:	89 04 24             	mov    %eax,(%esp)
 84a4375:	e8 74 cf c4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 84a437a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a437d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a4381:	75 0e                	jne    84a4391 <_ZN17expert_extraction25CDollControllerExtraction12_check_errorEP5CUserss+0x10b>
 84a4383:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84a4386:	89 04 24             	mov    %eax,(%esp)
 84a4389:	e8 c6 c8 c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a438e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a4391:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a4394:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84a4397:	7e 07                	jle    84a43a0 <_ZN17expert_extraction25CDollControllerExtraction12_check_errorEP5CUserss+0x11a>
 84a4399:	b8 0d 00 00 00       	mov    $0xd,%eax
 84a439e:	eb 05                	jmp    84a43a5 <_ZN17expert_extraction25CDollControllerExtraction12_check_errorEP5CUserss+0x11f>
 84a43a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84a43a5:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a43a8:	c9                   	leave
 84a43a9:	c3                   	ret

```

```c
// expert_extraction::CDollControllerExtraction::_check_error @ 0x84a4286

/* expert_extraction::CDollControllerExtraction::_check_error(CUser*, short, short) */

undefined4
expert_extraction::CDollControllerExtraction::_check_error
          (CUser *param_1,short param_2,short param_3)

{
  int iVar1;
  CDataManager *pCVar2;
  undefined4 uVar3;
  undefined2 in_stack_0000000a;
  undefined1 local_9a [2];
  int local_98;
  undefined1 local_5d [2];
  int local_5b;
  int local_20;
  CItem *local_1c;
  undefined4 local_18;
  int local_14;
  int local_10;
  
  iVar1 = CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::GetInvenSlot((int)local_5d,iVar1);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_20 = CDataManager::find_item(pCVar2,local_5b);
  iVar1 = CUserCharacInfo::getCurCharacInvenR(_param_2);
  CInventory::GetInvenSlot((int)local_9a,iVar1);
  pCVar2 = (CDataManager *)G_CDataManager();
  local_1c = (CItem *)CDataManager::find_item(pCVar2,local_98);
  local_18 = *(undefined4 *)(local_20 + 0x33c);
  iVar1 = G_CDataManager();
  iVar1 = CDataManager::GetExpertJobScript(iVar1);
  local_14 = STExpertJobScript::GetDollControllerExtractionPossibleLevel(iVar1);
  local_10 = CItem::getUsableLevel(local_1c);
  if (local_10 == 0) {
    local_10 = CItem::get_grade(local_1c);
  }
  if (local_14 < local_10) {
    uVar3 = 0xd;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## check_error

```asm
// === 084a43aa expert_extraction::CDollControllerExtraction::check_error  [0x084a43aa-0x84a4458] ===
 84a43aa:	55                   	push   %ebp
 84a43ab:	89 e5                	mov    %esp,%ebp
 84a43ad:	53                   	push   %ebx
 84a43ae:	83 ec 44             	sub    $0x44,%esp
 84a43b1:	8b 4d 10             	mov    0x10(%ebp),%ecx
 84a43b4:	8b 55 14             	mov    0x14(%ebp),%edx
 84a43b7:	8b 45 18             	mov    0x18(%ebp),%eax
 84a43ba:	88 4d e4             	mov    %cl,-0x1c(%ebp)
 84a43bd:	66 89 55 e0          	mov    %dx,-0x20(%ebp)
 84a43c1:	66 89 45 dc          	mov    %ax,-0x24(%ebp)
 84a43c5:	0f bf 5d dc          	movswl -0x24(%ebp),%ebx
 84a43c9:	0f bf 4d e0          	movswl -0x20(%ebp),%ecx
 84a43cd:	0f be 55 e4          	movsbl -0x1c(%ebp),%edx
 84a43d1:	8b 45 08             	mov    0x8(%ebp),%eax
 84a43d4:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84a43d8:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84a43dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84a43e0:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a43e3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a43e7:	89 04 24             	mov    %eax,(%esp)
 84a43ea:	e8 6f e6 ff ff       	call   84a2a5e <_ZN17expert_extraction11CExtraction11check_errorEP5CUsercss>
 84a43ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a43f2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a43f6:	74 05                	je     84a43fd <_ZN17expert_extraction25CDollControllerExtraction11check_errorEP5CUsercss+0x53>
 84a43f8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a43fb:	eb 56                	jmp    84a4453 <_ZN17expert_extraction25CDollControllerExtraction11check_errorEP5CUsercss+0xa9>
 84a43fd:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4400:	8b 00                	mov    (%eax),%eax
 84a4402:	83 c0 14             	add    $0x14,%eax
 84a4405:	8b 08                	mov    (%eax),%ecx
 84a4407:	8b 45 08             	mov    0x8(%ebp),%eax
 84a440a:	8b 55 0c             	mov    0xc(%ebp),%edx
 84a440d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a4411:	89 04 24             	mov    %eax,(%esp)
 84a4414:	ff d1                	call   *%ecx
 84a4416:	83 f0 01             	xor    $0x1,%eax
 84a4419:	84 c0                	test   %al,%al
 84a441b:	74 07                	je     84a4424 <_ZN17expert_extraction25CDollControllerExtraction11check_errorEP5CUsercss+0x7a>
 84a441d:	b8 04 00 00 00       	mov    $0x4,%eax
 84a4422:	eb 2f                	jmp    84a4453 <_ZN17expert_extraction25CDollControllerExtraction11check_errorEP5CUsercss+0xa9>
 84a4424:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4427:	8b 00                	mov    (%eax),%eax
 84a4429:	83 c0 1c             	add    $0x1c,%eax
 84a442c:	8b 08                	mov    (%eax),%ecx
 84a442e:	0f bf 55 dc          	movswl -0x24(%ebp),%edx
 84a4432:	0f bf 45 e0          	movswl -0x20(%ebp),%eax
 84a4436:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a443a:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a443e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a4441:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4445:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4448:	89 04 24             	mov    %eax,(%esp)
 84a444b:	ff d1                	call   *%ecx
 84a444d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a4450:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a4453:	83 c4 44             	add    $0x44,%esp
 84a4456:	5b                   	pop    %ebx
 84a4457:	5d                   	pop    %ebp
 84a4458:	c3                   	ret

```

```c
// expert_extraction::CDollControllerExtraction::check_error @ 0x84a43aa

/* expert_extraction::CDollControllerExtraction::check_error(CUser*, char, short, short) */

int __thiscall
expert_extraction::CDollControllerExtraction::check_error
          (CDollControllerExtraction *this,CUser *param_1,char param_2,short param_3,short param_4)

{
  char cVar1;
  int iVar2;
  
  iVar2 = CExtraction::check_error((CExtraction *)this,param_1,param_2,param_3,param_4);
  if (iVar2 == 0) {
    cVar1 = (**(code **)(*(int *)this + 0x14))(this,param_1);
    if (cVar1 == '\x01') {
      iVar2 = (**(code **)(*(int *)this + 0x1c))(this,param_1,(int)param_3,(int)param_4);
    }
    else {
      iVar2 = 4;
    }
  }
  return iVar2;
}

```

---

## extraction

```asm
// === 084a3dce expert_extraction::CDollControllerExtraction::extraction  [0x084a3dce-0x84a41a7] ===
 84a3dce:	55                   	push   %ebp
 84a3dcf:	89 e5                	mov    %esp,%ebp
 84a3dd1:	53                   	push   %ebx
 84a3dd2:	81 ec 14 01 00 00    	sub    $0x114,%esp
 84a3dd8:	8b 45 10             	mov    0x10(%ebp),%eax
 84a3ddb:	66 89 85 44 ff ff ff 	mov    %ax,-0xbc(%ebp)
 84a3de2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3de5:	89 04 24             	mov    %eax,(%esp)
 84a3de8:	e8 91 64 c3 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 84a3ded:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84a3df0:	0f bf 95 44 ff ff ff 	movswl -0xbc(%ebp),%edx
 84a3df7:	8d 85 53 ff ff ff    	lea    -0xad(%ebp),%eax
 84a3dfd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84a3e01:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84a3e08:	00 
 84a3e09:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84a3e0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3e10:	89 04 24             	mov    %eax,(%esp)
 84a3e13:	e8 00 7b 05 00       	call   84fb918 <_ZNK10CInventory12GetInvenSlotEii>
 84a3e18:	83 ec 04             	sub    $0x4,%esp
 84a3e1b:	8b 85 55 ff ff ff    	mov    -0xab(%ebp),%eax
 84a3e21:	89 c3                	mov    %eax,%ebx
 84a3e23:	e8 73 83 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3e28:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a3e2c:	89 04 24             	mov    %eax,(%esp)
 84a3e2f:	e8 fe bb eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a3e34:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84a3e37:	e8 5f 83 c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a3e3c:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84a3e43:	00 
 84a3e44:	89 04 24             	mov    %eax,(%esp)
 84a3e47:	e8 a6 77 d8 ff       	call   822b5f2 <_ZN12CDataManager18GetExpertJobScriptEi>
 84a3e4c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 84a3e4f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 84a3e52:	89 04 24             	mov    %eax,(%esp)
 84a3e55:	e8 c6 07 00 00       	call   84a4620 <_ZN17STExpertJobScript37GetDollControllerExtractionResultInfoEv>
 84a3e5a:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84a3e5d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 84a3e60:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3e64:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3e67:	89 04 24             	mov    %eax,(%esp)
 84a3e6a:	e8 f7 fe ff ff       	call   84a3d66 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem>
 84a3e6f:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84a3e72:	83 7d e0 03          	cmpl   $0x3,-0x20(%ebp)
 84a3e76:	75 3d                	jne    84a3eb5 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0xe7>
 84a3e78:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84a3e7b:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a3e7f:	c7 44 24 10 70 ce c7 	movl   $0x8c7ce70,0x10(%esp)
 84a3e86:	08 
 84a3e87:	c7 44 24 0c d0 01 00 	movl   $0x1d0,0xc(%esp)
 84a3e8e:	00 
 84a3e8f:	c7 44 24 08 80 db c7 	movl   $0x8c7db80,0x8(%esp)
 84a3e96:	08 
 84a3e97:	c7 44 24 04 d9 cc c7 	movl   $0x8c7ccd9,0x4(%esp)
 84a3e9e:	08 
 84a3e9f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84a3ea6:	e8 5f fd 62 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84a3eab:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3eb0:	e9 ed 02 00 00       	jmp    84a41a2 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3eb5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a3eb8:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84a3ebb:	8b 04 90             	mov    (%eax,%edx,4),%eax
 84a3ebe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84a3ec1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a3ec4:	83 e8 01             	sub    $0x1,%eax
 84a3ec7:	89 45 90             	mov    %eax,-0x70(%ebp)
 84a3eca:	8b 45 08             	mov    0x8(%ebp),%eax
 84a3ecd:	8b 40 04             	mov    0x4(%eax),%eax
 84a3ed0:	8d 55 90             	lea    -0x70(%ebp),%edx
 84a3ed3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a3ed7:	89 04 24             	mov    %eax,(%esp)
 84a3eda:	e8 df 7b c2 ff       	call   80cbabe <_ZN7CMTRand7randIntERKm>
 84a3edf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84a3ee2:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 84a3ee6:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84a3ee9:	89 d0                	mov    %edx,%eax
 84a3eeb:	01 c0                	add    %eax,%eax
 84a3eed:	01 d0                	add    %edx,%eax
 84a3eef:	c1 e0 02             	shl    $0x2,%eax
 84a3ef2:	03 45 dc             	add    -0x24(%ebp),%eax
 84a3ef5:	83 c0 0c             	add    $0xc,%eax
 84a3ef8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a3efb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3efe:	89 04 24             	mov    %eax,(%esp)
 84a3f01:	e8 9c 07 00 00       	call   84a46a2 <_ZNKSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EE4sizeEv>
 84a3f06:	85 c0                	test   %eax,%eax
 84a3f08:	0f 94 c0             	sete   %al
 84a3f0b:	84 c0                	test   %al,%al
 84a3f0d:	74 51                	je     84a3f60 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x192>
 84a3f0f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3f12:	89 04 24             	mov    %eax,(%esp)
 84a3f15:	e8 88 07 00 00       	call   84a46a2 <_ZNKSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EE4sizeEv>
 84a3f1a:	89 c3                	mov    %eax,%ebx
 84a3f1c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a3f23:	00 
 84a3f24:	c7 44 24 08 dc 01 00 	movl   $0x1dc,0x8(%esp)
 84a3f2b:	00 
 84a3f2c:	c7 44 24 04 80 db c7 	movl   $0x8c7db80,0x4(%esp)
 84a3f33:	08 
 84a3f34:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84a3f37:	89 04 24             	mov    %eax,(%esp)
 84a3f3a:	e8 d9 b7 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a3f3f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a3f43:	c7 44 24 04 b0 ce c7 	movl   $0x8c7ceb0,0x4(%esp)
 84a3f4a:	08 
 84a3f4b:	8d 45 94             	lea    -0x6c(%ebp),%eax
 84a3f4e:	89 04 24             	mov    %eax,(%esp)
 84a3f51:	e8 32 b8 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a3f56:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3f5b:	e9 42 02 00 00       	jmp    84a41a2 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3f60:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3f63:	89 04 24             	mov    %eax,(%esp)
 84a3f66:	e8 37 07 00 00       	call   84a46a2 <_ZNKSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EE4sizeEv>
 84a3f6b:	85 c0                	test   %eax,%eax
 84a3f6d:	74 0d                	je     84a3f7c <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ae>
 84a3f6f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 84a3f73:	75 07                	jne    84a3f7c <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1ae>
 84a3f75:	b8 01 00 00 00       	mov    $0x1,%eax
 84a3f7a:	eb 05                	jmp    84a3f81 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x1b3>
 84a3f7c:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3f81:	84 c0                	test   %al,%al
 84a3f83:	74 58                	je     84a3fdd <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x20f>
 84a3f85:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a3f88:	89 04 24             	mov    %eax,(%esp)
 84a3f8b:	e8 12 07 00 00       	call   84a46a2 <_ZNKSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EE4sizeEv>
 84a3f90:	89 c3                	mov    %eax,%ebx
 84a3f92:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a3f99:	00 
 84a3f9a:	c7 44 24 08 e1 01 00 	movl   $0x1e1,0x8(%esp)
 84a3fa1:	00 
 84a3fa2:	c7 44 24 04 80 db c7 	movl   $0x8c7db80,0x4(%esp)
 84a3fa9:	08 
 84a3faa:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84a3fad:	89 04 24             	mov    %eax,(%esp)
 84a3fb0:	e8 63 b7 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a3fb5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84a3fb8:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a3fbc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84a3fc0:	c7 44 24 04 e8 ce c7 	movl   $0x8c7cee8,0x4(%esp)
 84a3fc7:	08 
 84a3fc8:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 84a3fcb:	89 04 24             	mov    %eax,(%esp)
 84a3fce:	e8 b5 b7 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a3fd3:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3fd8:	e9 c5 01 00 00       	jmp    84a41a2 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a3fdd:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84a3fe4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a3feb:	e9 48 01 00 00       	jmp    84a4138 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x36a>
 84a3ff0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a3ff3:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a3ff6:	7d 28                	jge    84a4020 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x252>
 84a3ff8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a3ffb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a3fff:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a4002:	89 04 24             	mov    %eax,(%esp)
 84a4005:	e8 ba 06 00 00       	call   84a46c4 <_ZNSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EEixEj>
 84a400a:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84a400e:	0f b7 c0             	movzwl %ax,%eax
 84a4011:	03 45 f0             	add    -0x10(%ebp),%eax
 84a4014:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 84a4017:	7c 07                	jl     84a4020 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x252>
 84a4019:	b8 01 00 00 00       	mov    $0x1,%eax
 84a401e:	eb 05                	jmp    84a4025 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x257>
 84a4020:	b8 00 00 00 00       	mov    $0x0,%eax
 84a4025:	84 c0                	test   %al,%al
 84a4027:	0f 84 eb 00 00 00    	je     84a4118 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x34a>
 84a402d:	8b 45 08             	mov    0x8(%ebp),%eax
 84a4030:	8b 00                	mov    (%eax),%eax
 84a4032:	83 c0 18             	add    $0x18,%eax
 84a4035:	8b 10                	mov    (%eax),%edx
 84a4037:	8b 85 53 ff ff ff    	mov    -0xad(%ebp),%eax
 84a403d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a4041:	8b 85 57 ff ff ff    	mov    -0xa9(%ebp),%eax
 84a4047:	89 44 24 08          	mov    %eax,0x8(%esp)
 84a404b:	8b 85 5b ff ff ff    	mov    -0xa5(%ebp),%eax
 84a4051:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84a4055:	8b 85 5f ff ff ff    	mov    -0xa1(%ebp),%eax
 84a405b:	89 44 24 10          	mov    %eax,0x10(%esp)
 84a405f:	8b 85 63 ff ff ff    	mov    -0x9d(%ebp),%eax
 84a4065:	89 44 24 14          	mov    %eax,0x14(%esp)
 84a4069:	8b 85 67 ff ff ff    	mov    -0x99(%ebp),%eax
 84a406f:	89 44 24 18          	mov    %eax,0x18(%esp)
 84a4073:	8b 85 6b ff ff ff    	mov    -0x95(%ebp),%eax
 84a4079:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 84a407d:	8b 85 6f ff ff ff    	mov    -0x91(%ebp),%eax
 84a4083:	89 44 24 20          	mov    %eax,0x20(%esp)
 84a4087:	8b 85 73 ff ff ff    	mov    -0x8d(%ebp),%eax
 84a408d:	89 44 24 24          	mov    %eax,0x24(%esp)
 84a4091:	8b 85 77 ff ff ff    	mov    -0x89(%ebp),%eax
 84a4097:	89 44 24 28          	mov    %eax,0x28(%esp)
 84a409b:	8b 85 7b ff ff ff    	mov    -0x85(%ebp),%eax
 84a40a1:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 84a40a5:	8b 85 7f ff ff ff    	mov    -0x81(%ebp),%eax
 84a40ab:	89 44 24 30          	mov    %eax,0x30(%esp)
 84a40af:	8b 45 83             	mov    -0x7d(%ebp),%eax
 84a40b2:	89 44 24 34          	mov    %eax,0x34(%esp)
 84a40b6:	8b 45 87             	mov    -0x79(%ebp),%eax
 84a40b9:	89 44 24 38          	mov    %eax,0x38(%esp)
 84a40bd:	8b 45 8b             	mov    -0x75(%ebp),%eax
 84a40c0:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84a40c4:	0f b6 45 8f          	movzbl -0x71(%ebp),%eax
 84a40c8:	88 44 24 40          	mov    %al,0x40(%esp)
 84a40cc:	8b 45 08             	mov    0x8(%ebp),%eax
 84a40cf:	89 04 24             	mov    %eax,(%esp)
 84a40d2:	ff d2                	call   *%edx
 84a40d4:	89 45 bc             	mov    %eax,-0x44(%ebp)
 84a40d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a40da:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a40de:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a40e1:	89 04 24             	mov    %eax,(%esp)
 84a40e4:	e8 db 05 00 00       	call   84a46c4 <_ZNSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EEixEj>
 84a40e9:	89 c2                	mov    %eax,%edx
 84a40eb:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a40ee:	8d 4d bc             	lea    -0x44(%ebp),%ecx
 84a40f1:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84a40f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84a40f9:	89 04 24             	mov    %eax,(%esp)
 84a40fc:	e8 98 96 c3 ff       	call   80dd799 <_ZSt9make_pairIRiiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 84a4101:	83 ec 04             	sub    $0x4,%esp
 84a4104:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 84a4107:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a410b:	8b 45 14             	mov    0x14(%ebp),%eax
 84a410e:	89 04 24             	mov    %eax,(%esp)
 84a4111:	e8 f0 94 c3 ff       	call   80dd606 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backEOS1_>
 84a4116:	eb 39                	jmp    84a4151 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x383>
 84a4118:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a411b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a411f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a4122:	89 04 24             	mov    %eax,(%esp)
 84a4125:	e8 9a 05 00 00       	call   84a46c4 <_ZNSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EEixEj>
 84a412a:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84a412e:	0f b7 c0             	movzwl %ax,%eax
 84a4131:	01 45 f0             	add    %eax,-0x10(%ebp)
 84a4134:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84a4138:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a413b:	89 04 24             	mov    %eax,(%esp)
 84a413e:	e8 5f 05 00 00       	call   84a46a2 <_ZNKSt6vectorIN17STExpertJobScript22stDollControllerResultESaIS1_EE4sizeEv>
 84a4143:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84a4146:	0f 97 c0             	seta   %al
 84a4149:	84 c0                	test   %al,%al
 84a414b:	0f 85 9f fe ff ff    	jne    84a3ff0 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x222>
 84a4151:	8b 45 14             	mov    0x14(%ebp),%eax
 84a4154:	89 04 24             	mov    %eax,(%esp)
 84a4157:	e8 3e d0 c6 ff       	call   811119a <_ZNKSt6vectorISt4pairIiiESaIS1_EE5emptyEv>
 84a415c:	84 c0                	test   %al,%al
 84a415e:	74 3d                	je     84a419d <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3cf>
 84a4160:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84a4167:	00 
 84a4168:	c7 44 24 08 f2 01 00 	movl   $0x1f2,0x8(%esp)
 84a416f:	00 
 84a4170:	c7 44 24 04 80 db c7 	movl   $0x8c7db80,0x4(%esp)
 84a4177:	08 
 84a4178:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84a417b:	89 04 24             	mov    %eax,(%esp)
 84a417e:	e8 95 b5 0a 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84a4183:	c7 44 24 04 28 cf c7 	movl   $0x8c7cf28,0x4(%esp)
 84a418a:	08 
 84a418b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 84a418e:	89 04 24             	mov    %eax,(%esp)
 84a4191:	e8 f2 b5 0a 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84a4196:	b8 00 00 00 00       	mov    $0x0,%eax
 84a419b:	eb 05                	jmp    84a41a2 <_ZN17expert_extraction25CDollControllerExtraction10extractionEP5CUsersRSt6vectorISt4pairIiiESaIS5_EE+0x3d4>
 84a419d:	b8 01 00 00 00       	mov    $0x1,%eax
 84a41a2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 84a41a5:	c9                   	leave
 84a41a6:	c3                   	ret
 84a41a7:	90                   	nop

```

```c
// expert_extraction::CDollControllerExtraction::extraction @ 0x84a3dce

/* expert_extraction::CDollControllerExtraction::extraction(CUser*, short,
   std::vector<std::pair<int, int>, std::allocator<std::pair<int, int> > >&) */

undefined4 __thiscall
expert_extraction::CDollControllerExtraction::extraction
          (CDollControllerExtraction *this,CUser *param_1,short param_2,vector *param_3)

{
  bool bVar1;
  char cVar2;
  CDataManager *this_00;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined2 local_b1;
  undefined2 uStack_af;
  undefined2 uStack_ad;
  undefined2 uStack_ab;
  undefined4 local_a9;
  undefined4 local_a5;
  undefined4 local_a1;
  undefined4 local_9d;
  undefined4 local_99;
  undefined4 local_95;
  undefined4 local_91;
  undefined4 local_8d;
  undefined4 local_89;
  undefined4 local_85;
  undefined4 local_81;
  undefined4 local_7d;
  undefined4 local_79;
  undefined1 local_75;
  ulong local_74;
  cMyTrace local_70 [16];
  cMyTrace local_60 [16];
  int local_50 [2];
  undefined4 local_48;
  cMyTrace local_44 [16];
  int local_34;
  CEquipItem *local_30;
  STExpertJobScript *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
  *local_18;
  int local_14;
  uint local_10;
  
  local_34 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
  CInventory::GetInvenSlot((int)&local_b1,local_34);
  iVar3 = CONCAT22(uStack_ad,uStack_af);
  this_00 = (CDataManager *)G_CDataManager();
  local_30 = (CEquipItem *)CDataManager::find_item(this_00,iVar3);
  iVar3 = G_CDataManager();
  local_2c = (STExpertJobScript *)CDataManager::GetExpertJobScript(iVar3);
  local_28 = STExpertJobScript::GetDollControllerExtractionResultInfo(local_2c);
  local_24 = get_doll_controller_extraction_type(this,local_30);
  if (local_24 == 3) {
    LogManager::logFormat
              (1,"Extraction.cpp",
               "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
               ,0x1d0,"CDollControllerExtraction::extraction ERROR : result_type(%d)",3);
    uVar4 = 0;
  }
  else {
    local_20 = *(int *)(local_28 + local_24 * 4);
    local_74 = local_20 - 1;
    local_1c = CMTRand::randInt(*(CMTRand **)(this + 4),&local_74);
    local_1c = local_1c + 1;
    local_18 = (vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                *)(local_24 * 0xc + local_28 + 0xc);
    iVar3 = std::
            vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
            ::size(local_18);
    if (iVar3 == 0) {
      uVar4 = std::
              vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
              ::size(local_18);
      cMyTrace::cMyTrace(local_70,
                         "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
                         ,0x1dc,5);
      cMyTrace::operator()(local_70,"CDollControllerExtraction::extraction ERROR : size(%d)",uVar4);
      uVar4 = 0;
    }
    else {
      iVar3 = std::
              vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
              ::size(local_18);
      if ((iVar3 == 0) || (local_20 != 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        uVar4 = std::
                vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                ::size(local_18);
        cMyTrace::cMyTrace(local_60,
                           "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
                           ,0x1e1,5);
        cMyTrace::operator()
                  (local_60,"CDollControllerExtraction::extraction ERROR : size(%d), sum(%d)",uVar4,
                   local_20);
        uVar4 = 0;
      }
      else {
        local_14 = 0;
        local_10 = 0;
        while( true ) {
          uVar6 = std::
                  vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                  ::size(local_18);
          if (uVar6 <= local_10) break;
          if (local_14 < local_1c) {
            iVar3 = std::
                    vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                    ::operator[](local_18,local_10);
            if ((int)((uint)*(ushort *)(iVar3 + 8) + local_14) < local_1c) goto LAB_084a4020;
            bVar1 = true;
          }
          else {
LAB_084a4020:
            bVar1 = false;
          }
          if (bVar1) {
            local_48 = (**(code **)(*(int *)this + 0x18))
                                 (this,CONCAT22(uStack_af,local_b1),CONCAT22(uStack_ab,uStack_ad),
                                  local_a9,local_a5,local_a1,local_9d,local_99,local_95,local_91,
                                  local_8d,local_89,local_85,local_81,local_7d,local_79,local_75);
            piVar5 = (int *)std::
                            vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                            ::operator[](local_18,local_10);
            std::make_pair<int&,int>(local_50,piVar5);
            std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)param_3,
                       (pair *)local_50);
            break;
          }
          iVar3 = std::
                  vector<STExpertJobScript::stDollControllerResult,std::allocator<STExpertJobScript::stDollControllerResult>>
                  ::operator[](local_18,local_10);
          local_14 = local_14 + (uint)*(ushort *)(iVar3 + 8);
          local_10 = local_10 + 1;
        }
        cVar2 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::empty();
        if (cVar2 == '\0') {
          uVar4 = 1;
        }
        else {
          cMyTrace::cMyTrace(local_44,
                             "virtual bool expert_extraction::CDollControllerExtraction::extraction(CUser*, short int, IntPairVector&)"
                             ,0x1f2,5);
          cMyTrace::operator()
                    (local_44,"CDollControllerExtraction::extraction ERROR : result is empty");
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}

```

---

## get_doll_controller_extraction_type

```asm
// === 084a3d66 expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type  [0x084a3d66-0x84a3dcd] ===
 84a3d66:	55                   	push   %ebp
 84a3d67:	89 e5                	mov    %esp,%ebp
 84a3d69:	83 ec 28             	sub    $0x28,%esp
 84a3d6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3d6f:	89 04 24             	mov    %eax,(%esp)
 84a3d72:	e8 77 d5 c4 ff       	call   80f12ee <_ZNK5CItem14getUsableLevelEv>
 84a3d77:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3d7a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a3d7e:	75 0e                	jne    84a3d8e <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x28>
 84a3d80:	8b 45 0c             	mov    0xc(%ebp),%eax
 84a3d83:	89 04 24             	mov    %eax,(%esp)
 84a3d86:	e8 c9 ce c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a3d8b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a3d8e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a3d92:	7e 0d                	jle    84a3da1 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x3b>
 84a3d94:	83 7d f4 1e          	cmpl   $0x1e,-0xc(%ebp)
 84a3d98:	7f 07                	jg     84a3da1 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x3b>
 84a3d9a:	b8 00 00 00 00       	mov    $0x0,%eax
 84a3d9f:	eb 2b                	jmp    84a3dcc <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x66>
 84a3da1:	83 7d f4 1e          	cmpl   $0x1e,-0xc(%ebp)
 84a3da5:	7e 0d                	jle    84a3db4 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x4e>
 84a3da7:	83 7d f4 32          	cmpl   $0x32,-0xc(%ebp)
 84a3dab:	7f 07                	jg     84a3db4 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x4e>
 84a3dad:	b8 01 00 00 00       	mov    $0x1,%eax
 84a3db2:	eb 18                	jmp    84a3dcc <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x66>
 84a3db4:	83 7d f4 32          	cmpl   $0x32,-0xc(%ebp)
 84a3db8:	7e 0d                	jle    84a3dc7 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x61>
 84a3dba:	83 7d f4 50          	cmpl   $0x50,-0xc(%ebp)
 84a3dbe:	7f 07                	jg     84a3dc7 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x61>
 84a3dc0:	b8 02 00 00 00       	mov    $0x2,%eax
 84a3dc5:	eb 05                	jmp    84a3dcc <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem+0x66>
 84a3dc7:	b8 03 00 00 00       	mov    $0x3,%eax
 84a3dcc:	c9                   	leave
 84a3dcd:	c3                   	ret

```

```c
// expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type @ 0x84a3d66

/* expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type(CEquipItem
   const*) */

undefined4 __thiscall
expert_extraction::CDollControllerExtraction::get_doll_controller_extraction_type
          (CDollControllerExtraction *this,CEquipItem *param_1)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = CItem::getUsableLevel((CItem *)param_1);
  if (local_10 == 0) {
    local_10 = CItem::get_grade((CItem *)param_1);
  }
  if ((local_10 < 1) || (0x1e < local_10)) {
    if ((local_10 < 0x1f) || (0x32 < local_10)) {
      if ((local_10 < 0x33) || (0x50 < local_10)) {
        uVar1 = 3;
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## get_extraction_count

```asm
// === 084a41a8 expert_extraction::CDollControllerExtraction::get_extraction_count  [0x084a41a8-0x84a4285] ===
 84a41a8:	55                   	push   %ebp
 84a41a9:	89 e5                	mov    %esp,%ebp
 84a41ab:	53                   	push   %ebx
 84a41ac:	83 ec 24             	sub    $0x24,%esp
 84a41af:	8b 45 0e             	mov    0xe(%ebp),%eax
 84a41b2:	89 c3                	mov    %eax,%ebx
 84a41b4:	e8 e2 7f c2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84a41b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a41bd:	89 04 24             	mov    %eax,(%esp)
 84a41c0:	e8 6d b8 eb ff       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 84a41c5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84a41c8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a41cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a41cf:	8b 45 08             	mov    0x8(%ebp),%eax
 84a41d2:	89 04 24             	mov    %eax,(%esp)
 84a41d5:	e8 8c fb ff ff       	call   84a3d66 <_ZN17expert_extraction25CDollControllerExtraction35get_doll_controller_extraction_typeEPK10CEquipItem>
 84a41da:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84a41dd:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84a41e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84a41e7:	83 f8 01             	cmp    $0x1,%eax
 84a41ea:	74 32                	je     84a421e <_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item+0x76>
 84a41ec:	83 f8 02             	cmp    $0x2,%eax
 84a41ef:	74 57                	je     84a4248 <_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item+0xa0>
 84a41f1:	85 c0                	test   %eax,%eax
 84a41f3:	75 7b                	jne    84a4270 <_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item+0xc8>
 84a41f5:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a41f8:	89 04 24             	mov    %eax,(%esp)
 84a41fb:	e8 54 ca c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a4200:	89 c1                	mov    %eax,%ecx
 84a4202:	ba 67 66 66 66       	mov    $0x66666667,%edx
 84a4207:	89 c8                	mov    %ecx,%eax
 84a4209:	f7 ea                	imul   %edx
 84a420b:	c1 fa 02             	sar    $0x2,%edx
 84a420e:	89 c8                	mov    %ecx,%eax
 84a4210:	c1 f8 1f             	sar    $0x1f,%eax
 84a4213:	89 d1                	mov    %edx,%ecx
 84a4215:	29 c1                	sub    %eax,%ecx
 84a4217:	89 c8                	mov    %ecx,%eax
 84a4219:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a421c:	eb 52                	jmp    84a4270 <_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item+0xc8>
 84a421e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a4221:	89 04 24             	mov    %eax,(%esp)
 84a4224:	e8 2b ca c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a4229:	8d 48 ec             	lea    -0x14(%eax),%ecx
 84a422c:	ba 67 66 66 66       	mov    $0x66666667,%edx
 84a4231:	89 c8                	mov    %ecx,%eax
 84a4233:	f7 ea                	imul   %edx
 84a4235:	c1 fa 02             	sar    $0x2,%edx
 84a4238:	89 c8                	mov    %ecx,%eax
 84a423a:	c1 f8 1f             	sar    $0x1f,%eax
 84a423d:	89 d1                	mov    %edx,%ecx
 84a423f:	29 c1                	sub    %eax,%ecx
 84a4241:	89 c8                	mov    %ecx,%eax
 84a4243:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a4246:	eb 28                	jmp    84a4270 <_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item+0xc8>
 84a4248:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84a424b:	89 04 24             	mov    %eax,(%esp)
 84a424e:	e8 01 ca c6 ff       	call   8110c54 <_ZNK5CItem9get_gradeEv>
 84a4253:	8d 48 d8             	lea    -0x28(%eax),%ecx
 84a4256:	ba 67 66 66 66       	mov    $0x66666667,%edx
 84a425b:	89 c8                	mov    %ecx,%eax
 84a425d:	f7 ea                	imul   %edx
 84a425f:	c1 fa 02             	sar    $0x2,%edx
 84a4262:	89 c8                	mov    %ecx,%eax
 84a4264:	c1 f8 1f             	sar    $0x1f,%eax
 84a4267:	89 d1                	mov    %edx,%ecx
 84a4269:	29 c1                	sub    %eax,%ecx
 84a426b:	89 c8                	mov    %ecx,%eax
 84a426d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a4270:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84a4274:	75 07                	jne    84a427d <_ZN17expert_extraction25CDollControllerExtraction20get_extraction_countE10Inven_Item+0xd5>
 84a4276:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 84a427d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a4280:	83 c4 24             	add    $0x24,%esp
 84a4283:	5b                   	pop    %ebx
 84a4284:	5d                   	pop    %ebp
 84a4285:	c3                   	ret

```

```c
// expert_extraction::CDollControllerExtraction::get_extraction_count @ 0x84a41a8

/* expert_extraction::CDollControllerExtraction::get_extraction_count(Inven_Item) */

int __thiscall
expert_extraction::CDollControllerExtraction::get_extraction_count
          (CDollControllerExtraction *this,undefined8 param_2)

{
  CDataManager *this_00;
  CItem *this_01;
  int iVar1;
  int local_10;
  
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CItem *)CDataManager::find_item(this_00,param_2._2_4_);
  iVar1 = get_doll_controller_extraction_type(this,(CEquipItem *)this_01);
  local_10 = 0;
  if (iVar1 == 1) {
    iVar1 = CItem::get_grade(this_01);
    local_10 = (iVar1 + -0x14) / 10;
  }
  else if (iVar1 == 2) {
    iVar1 = CItem::get_grade(this_01);
    local_10 = (iVar1 + -0x28) / 10;
  }
  else if (iVar1 == 0) {
    local_10 = CItem::get_grade(this_01);
    local_10 = local_10 / 10;
  }
  if (local_10 == 0) {
    local_10 = 1;
  }
  return local_10;
}

```

