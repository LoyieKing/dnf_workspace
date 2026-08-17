# CMission

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## CMission

```asm
// === 085e2ffc CMission::CMission  [0x085e2ffc-0x85e30ad] ===
 85e2ffc:	55                   	push   %ebp
 85e2ffd:	89 e5                	mov    %esp,%ebp
 85e2fff:	83 ec 18             	sub    $0x18,%esp
 85e3002:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3005:	c7 00 48 40 cc 08    	movl   $0x8cc4048,(%eax)
 85e300b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e300e:	8b 40 78             	mov    0x78(%eax),%eax
 85e3011:	89 c2                	mov    %eax,%edx
 85e3013:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3016:	88 50 04             	mov    %dl,0x4(%eax)
 85e3019:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e301c:	8b 50 08             	mov    0x8(%eax),%edx
 85e301f:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3022:	89 50 08             	mov    %edx,0x8(%eax)
 85e3025:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3028:	8b 50 0c             	mov    0xc(%eax),%edx
 85e302b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e302e:	89 50 0c             	mov    %edx,0xc(%eax)
 85e3031:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3034:	8b 10                	mov    (%eax),%edx
 85e3036:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3039:	89 50 10             	mov    %edx,0x10(%eax)
 85e303c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e303f:	8b 50 04             	mov    0x4(%eax),%edx
 85e3042:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3045:	89 50 14             	mov    %edx,0x14(%eax)
 85e3048:	8b 45 08             	mov    0x8(%ebp),%eax
 85e304b:	8d 48 18             	lea    0x18(%eax),%ecx
 85e304e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3051:	8b 50 14             	mov    0x14(%eax),%edx
 85e3054:	8b 40 10             	mov    0x10(%eax),%eax
 85e3057:	89 01                	mov    %eax,(%ecx)
 85e3059:	89 51 04             	mov    %edx,0x4(%ecx)
 85e305c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e305f:	8d 48 20             	lea    0x20(%eax),%ecx
 85e3062:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3065:	8b 50 1c             	mov    0x1c(%eax),%edx
 85e3068:	8b 40 18             	mov    0x18(%eax),%eax
 85e306b:	89 01                	mov    %eax,(%ecx)
 85e306d:	89 51 04             	mov    %edx,0x4(%ecx)
 85e3070:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3073:	8b 50 20             	mov    0x20(%eax),%edx
 85e3076:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3079:	89 50 28             	mov    %edx,0x28(%eax)
 85e307c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e307f:	8b 50 40             	mov    0x40(%eax),%edx
 85e3082:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3085:	89 50 2c             	mov    %edx,0x2c(%eax)
 85e3088:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e308b:	8d 50 44             	lea    0x44(%eax),%edx
 85e308e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3091:	83 c0 30             	add    $0x30,%eax
 85e3094:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e3098:	89 04 24             	mov    %eax,(%esp)
 85e309b:	e8 62 42 c5 ff       	call   8237302 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1ERKS3_>
 85e30a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e30a3:	8b 50 24             	mov    0x24(%eax),%edx
 85e30a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e30a9:	89 50 3c             	mov    %edx,0x3c(%eax)
 85e30ac:	c9                   	leave
 85e30ad:	c3                   	ret

```

```c
// CMission::CMission @ 0x85e2ffc

/* CMission::CMission(MissionScript const&) */

void __thiscall CMission::CMission(CMission *this,MissionScript *param_1)

{
  undefined4 uVar1;
  
  *(undefined ***)this = &PTR__makeTotalMissionInfo_08cc4048;
  this[4] = SUB41(*(undefined4 *)(param_1 + 0x78),0);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 4);
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x1c) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x40);
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x30),
             (vector *)(param_1 + 0x44));
  *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x24);
  return;
}

```

---

## Reward

```asm
// === 085e32da CMission::Reward  [0x085e32da-0x85e348f] ===
 85e32da:	55                   	push   %ebp
 85e32db:	89 e5                	mov    %esp,%ebp
 85e32dd:	56                   	push   %esi
 85e32de:	53                   	push   %ebx
 85e32df:	83 ec 50             	sub    $0x50,%esp
 85e32e2:	8b 45 08             	mov    0x8(%ebp),%eax
 85e32e5:	8b 40 18             	mov    0x18(%eax),%eax
 85e32e8:	0f b7 d8             	movzwl %ax,%ebx
 85e32eb:	e8 ab 8e ae ff       	call   80cc19b <_Z14G_CDataManagerv>
 85e32f0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e32f4:	89 04 24             	mov    %eax,(%esp)
 85e32f7:	e8 16 c8 d7 ff       	call   835fb12 <_ZNK12CDataManager25get_BaseMissionExp_byRankEt>
 85e32fc:	ba 00 00 00 00       	mov    $0x0,%edx
 85e3301:	89 45 d0             	mov    %eax,-0x30(%ebp)
 85e3304:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 85e3307:	df 6d d0             	fildll -0x30(%ebp)
 85e330a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e330d:	d9 40 2c             	flds   0x2c(%eax)
 85e3310:	de c9                	fmulp  %st,%st(1)
 85e3312:	d9 7d ce             	fnstcw -0x32(%ebp)
 85e3315:	0f b7 45 ce          	movzwl -0x32(%ebp),%eax
 85e3319:	b4 0c                	mov    $0xc,%ah
 85e331b:	66 89 45 cc          	mov    %ax,-0x34(%ebp)
 85e331f:	d9 6d cc             	fldcw  -0x34(%ebp)
 85e3322:	db 5d f0             	fistpl -0x10(%ebp)
 85e3325:	d9 6d ce             	fldcw  -0x32(%ebp)
 85e3328:	8b 45 08             	mov    0x8(%ebp),%eax
 85e332b:	89 04 24             	mov    %eax,(%esp)
 85e332e:	e8 d3 35 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e3333:	89 c6                	mov    %eax,%esi
 85e3335:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3338:	89 04 24             	mov    %eax,(%esp)
 85e333b:	e8 d2 35 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e3340:	89 c3                	mov    %eax,%ebx
 85e3342:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3345:	89 04 24             	mov    %eax,(%esp)
 85e3348:	e8 77 8b f0 ff       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 85e334d:	8b 40 08             	mov    0x8(%eax),%eax
 85e3350:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e3353:	8d 8a 00 97 07 00    	lea    0x79700(%edx),%ecx
 85e3359:	89 74 24 10          	mov    %esi,0x10(%esp)
 85e335d:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 85e3361:	8b 55 f0             	mov    -0x10(%ebp),%edx
 85e3364:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e3368:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e336c:	89 0c 24             	mov    %ecx,(%esp)
 85e336f:	e8 da 36 0a 00       	call   8686a4e <_ZN15cUserHistoryLog21pvpMissionClearRewardEiiii>
 85e3374:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3377:	89 04 24             	mov    %eax,(%esp)
 85e337a:	e8 45 8b f0 ff       	call   84ebec4 <_ZN15CUserCharacInfo16getPVPResultRefWEv>
 85e337f:	8b 50 08             	mov    0x8(%eax),%edx
 85e3382:	03 55 f0             	add    -0x10(%ebp),%edx
 85e3385:	89 50 08             	mov    %edx,0x8(%eax)
 85e3388:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e338b:	89 04 24             	mov    %eax,(%esp)
 85e338e:	e8 19 ae aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e3393:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e339a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e339d:	8d 58 30             	lea    0x30(%eax),%ebx
 85e33a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e33a3:	89 04 24             	mov    %eax,(%esp)
 85e33a6:	e8 e3 6e af ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85e33ab:	c7 44 24 1c 5c 2c cc 	movl   $0x8cc2c5c,0x1c(%esp)
 85e33b2:	08 
 85e33b3:	c7 44 24 18 70 2c cc 	movl   $0x8cc2c70,0x18(%esp)
 85e33ba:	08 
 85e33bb:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85e33c2:	00 
 85e33c3:	c7 44 24 10 33 00 00 	movl   $0x33,0x10(%esp)
 85e33ca:	00 
 85e33cb:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 85e33d2:	00 
 85e33d3:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 85e33d6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e33da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e33de:	89 04 24             	mov    %eax,(%esp)
 85e33e1:	e8 cc 37 f2 ff       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 85e33e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e33e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85e33ed:	7e 17                	jle    85e3406 <_ZNK8CMission6RewardER5CUser+0x12c>
 85e33ef:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e33f2:	89 04 24             	mov    %eax,(%esp)
 85e33f5:	e8 c6 ad aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85e33fa:	83 f8 02             	cmp    $0x2,%eax
 85e33fd:	76 07                	jbe    85e3406 <_ZNK8CMission6RewardER5CUser+0x12c>
 85e33ff:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3404:	eb 05                	jmp    85e340b <_ZNK8CMission6RewardER5CUser+0x131>
 85e3406:	b8 00 00 00 00       	mov    $0x0,%eax
 85e340b:	84 c0                	test   %al,%al
 85e340d:	74 34                	je     85e3443 <_ZNK8CMission6RewardER5CUser+0x169>
 85e340f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e3416:	00 
 85e3417:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e341a:	89 04 24             	mov    %eax,(%esp)
 85e341d:	e8 ba ad aa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85e3422:	8b 00                	mov    (%eax),%eax
 85e3424:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e3428:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85e342f:	00 
 85e3430:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e3437:	00 
 85e3438:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e343b:	89 04 24             	mov    %eax,(%esp)
 85e343e:	e8 95 8e 09 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 85e3443:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3446:	8b 00                	mov    (%eax),%eax
 85e3448:	83 c0 30             	add    $0x30,%eax
 85e344b:	8b 10                	mov    (%eax),%edx
 85e344d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3450:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e3454:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3457:	89 04 24             	mov    %eax,(%esp)
 85e345a:	ff d2                	call   *%edx
 85e345c:	bb 01 00 00 00       	mov    $0x1,%ebx
 85e3461:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e3464:	89 04 24             	mov    %eax,(%esp)
 85e3467:	e8 6e 09 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e346c:	89 d8                	mov    %ebx,%eax
 85e346e:	83 c4 50             	add    $0x50,%esp
 85e3471:	5b                   	pop    %ebx
 85e3472:	5e                   	pop    %esi
 85e3473:	5d                   	pop    %ebp
 85e3474:	c3                   	ret
 85e3475:	89 d3                	mov    %edx,%ebx
 85e3477:	89 c6                	mov    %eax,%esi
 85e3479:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e347c:	89 04 24             	mov    %eax,(%esp)
 85e347f:	e8 56 09 aa ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e3484:	89 f0                	mov    %esi,%eax
 85e3486:	89 da                	mov    %ebx,%edx
 85e3488:	89 04 24             	mov    %eax,(%esp)
 85e348b:	e8 c0 02 50 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CMission::Reward @ 0x85e32da

/* CMission::Reward(CUser&) const */

undefined4 __thiscall CMission::Reward(CMission *this,CUser *param_1)

{
  undefined4 uVar1;
  bool bVar2;
  CDataManager *this_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CInventory *pCVar7;
  undefined4 *puVar8;
  vector<int,std::allocator<int>> local_20 [12];
  int local_14;
  int local_10;
  
  uVar1 = *(undefined4 *)(this + 0x18);
  this_00 = (CDataManager *)G_CDataManager();
  uVar3 = CDataManager::get_BaseMissionExp_byRank(this_00,(ushort)uVar1);
  local_14 = (int)ROUND(*(float *)(this + 0x2c) * (float)uVar3);
  iVar4 = GetMissionIndex(this);
  iVar5 = GetMissionKind(this);
  iVar6 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
  cUserHistoryLog::pvpMissionClearReward
            ((cUserHistoryLog *)(param_1 + 0x79700),*(int *)(iVar6 + 8),local_14,iVar5,iVar4);
  iVar4 = CUserCharacInfo::getPVPResultRefW((CUserCharacInfo *)param_1);
  *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + local_14;
  std::vector<int,std::allocator<int>>::vector(local_20);
  local_10 = 0;
  pCVar7 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 085e33e1 to 085e345b has its CatchHandler @ 085e3475 */
  local_10 = CInventory::insert_event_items
                       (pCVar7,this + 0x30,local_20,0x1e,0x33,1,"game_server_msg_173",
                        "game_server_msg_174");
  if (0 < local_10) {
    uVar3 = std::vector<int,std::allocator<int>>::size(local_20);
    if (2 < uVar3) {
      bVar2 = true;
      goto LAB_085e340b;
    }
  }
  bVar2 = false;
LAB_085e340b:
  if (bVar2) {
    puVar8 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_20,0);
    CUser::SendUpdateItem(param_1,1,0,*puVar8);
  }
  (**(code **)(*(int *)this + 0x30))(this,param_1);
  std::vector<int,std::allocator<int>>::~vector(local_20);
  return 1;
}

```

---

## _isAcceptCondition_Series

```asm
// === 085e3490 CMission::_isAcceptCondition_Series  [0x085e3490-0x85e3547] ===
 85e3490:	55                   	push   %ebp
 85e3491:	89 e5                	mov    %esp,%ebp
 85e3493:	83 ec 28             	sub    $0x28,%esp
 85e3496:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85e349d:	00 
 85e349e:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e34a1:	89 04 24             	mov    %eax,(%esp)
 85e34a4:	e8 35 81 ca ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 85e34a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e34ac:	8b 45 08             	mov    0x8(%ebp),%eax
 85e34af:	89 04 24             	mov    %eax,(%esp)
 85e34b2:	e8 4f 34 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e34b7:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e34bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e34be:	89 04 24             	mov    %eax,(%esp)
 85e34c1:	e8 34 1c 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e34c6:	84 c0                	test   %al,%al
 85e34c8:	74 07                	je     85e34d1 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0x41>
 85e34ca:	b8 00 00 00 00       	mov    $0x0,%eax
 85e34cf:	eb 74                	jmp    85e3545 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0xb5>
 85e34d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85e34d4:	89 04 24             	mov    %eax,(%esp)
 85e34d7:	e8 42 34 00 00       	call   85e691e <_ZNK8CMission19GetPrevMissionIndexEv>
 85e34dc:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e34df:	0f 94 c0             	sete   %al
 85e34e2:	84 c0                	test   %al,%al
 85e34e4:	74 07                	je     85e34ed <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0x5d>
 85e34e6:	b8 01 00 00 00       	mov    $0x1,%eax
 85e34eb:	eb 58                	jmp    85e3545 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0xb5>
 85e34ed:	8b 45 08             	mov    0x8(%ebp),%eax
 85e34f0:	89 04 24             	mov    %eax,(%esp)
 85e34f3:	e8 26 34 00 00       	call   85e691e <_ZNK8CMission19GetPrevMissionIndexEv>
 85e34f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e34fc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e34ff:	89 04 24             	mov    %eax,(%esp)
 85e3502:	e8 f3 1b 00 00       	call   85e50fa <_ZNK19CMissionList_Charac14isClearMissionEi>
 85e3507:	83 f0 01             	xor    $0x1,%eax
 85e350a:	84 c0                	test   %al,%al
 85e350c:	74 07                	je     85e3515 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0x85>
 85e350e:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3513:	eb 30                	jmp    85e3545 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0xb5>
 85e3515:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3518:	89 04 24             	mov    %eax,(%esp)
 85e351b:	e8 f2 33 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e3520:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e3524:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e3527:	89 04 24             	mov    %eax,(%esp)
 85e352a:	e8 99 16 00 00       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e352f:	66 85 c0             	test   %ax,%ax
 85e3532:	0f 95 c0             	setne  %al
 85e3535:	84 c0                	test   %al,%al
 85e3537:	74 07                	je     85e3540 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0xb0>
 85e3539:	b8 00 00 00 00       	mov    $0x0,%eax
 85e353e:	eb 05                	jmp    85e3545 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser+0xb5>
 85e3540:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3545:	c9                   	leave
 85e3546:	c3                   	ret
 85e3547:	90                   	nop

```

```c
// CMission::_isAcceptCondition_Series @ 0x85e3490

/* CMission::_isAcceptCondition_Series(CUser const&) const */

undefined4 __thiscall CMission::_isAcceptCondition_Series(CMission *this,CUser *param_1)

{
  char cVar1;
  short sVar2;
  CMissionList_Charac *this_00;
  int iVar3;
  undefined4 uVar4;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar3 = GetMissionIndex(this);
  cVar1 = CMissionList_Charac::isClearMission(this_00,iVar3);
  if (cVar1 == '\0') {
    iVar3 = GetPrevMissionIndex(this);
    if (iVar3 == -1) {
      uVar4 = 1;
    }
    else {
      iVar3 = GetPrevMissionIndex(this);
      cVar1 = CMissionList_Charac::isClearMission(this_00,iVar3);
      if (cVar1 == '\x01') {
        iVar3 = GetMissionKind(this);
        sVar2 = CMissionList_Charac::getIndex_byKind(this_00,iVar3);
        if (sVar2 == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
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

## _makeTotalMissionInfo

```asm
// === 085e3188 CMission::_makeTotalMissionInfo  [0x085e3188-0x85e318d] ===
 85e3188:	55                   	push   %ebp
 85e3189:	89 e5                	mov    %esp,%ebp
 85e318b:	5d                   	pop    %ebp
 85e318c:	c3                   	ret
 85e318d:	90                   	nop

```

```c
// CMission::_makeTotalMissionInfo @ 0x85e3188

/* CMission::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void CMission::_makeTotalMissionInfo(MissionInfo *param_1,CUser *param_2)

{
  return;
}

```

---

## canUpdate

```asm
// === 085e327a CMission::canUpdate  [0x085e327a-0x85e32d9] ===
 85e327a:	55                   	push   %ebp
 85e327b:	89 e5                	mov    %esp,%ebp
 85e327d:	83 ec 18             	sub    $0x18,%esp
 85e3280:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3283:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 85e3287:	3c ff                	cmp    $0xff,%al
 85e3289:	75 1b                	jne    85e32a6 <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter+0x2c>
 85e328b:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e328e:	0f b6 00             	movzbl (%eax),%eax
 85e3291:	3c 01                	cmp    $0x1,%al
 85e3293:	74 29                	je     85e32be <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter+0x44>
 85e3295:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3298:	0f b6 00             	movzbl (%eax),%eax
 85e329b:	3c 02                	cmp    $0x2,%al
 85e329d:	74 1f                	je     85e32be <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter+0x44>
 85e329f:	b8 00 00 00 00       	mov    $0x0,%eax
 85e32a4:	eb 31                	jmp    85e32d7 <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter+0x5d>
 85e32a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e32a9:	0f b6 50 04          	movzbl 0x4(%eax),%edx
 85e32ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e32b0:	0f b6 00             	movzbl (%eax),%eax
 85e32b3:	38 c2                	cmp    %al,%dl
 85e32b5:	74 07                	je     85e32be <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter+0x44>
 85e32b7:	b8 00 00 00 00       	mov    $0x0,%eax
 85e32bc:	eb 19                	jmp    85e32d7 <_ZNK8CMission9canUpdateERK31MissionClearCondition_Parameter+0x5d>
 85e32be:	8b 45 08             	mov    0x8(%ebp),%eax
 85e32c1:	8b 00                	mov    (%eax),%eax
 85e32c3:	83 c0 04             	add    $0x4,%eax
 85e32c6:	8b 10                	mov    (%eax),%edx
 85e32c8:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e32cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e32cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85e32d2:	89 04 24             	mov    %eax,(%esp)
 85e32d5:	ff d2                	call   *%edx
 85e32d7:	c9                   	leave
 85e32d8:	c3                   	ret
 85e32d9:	90                   	nop

```

```c
// CMission::canUpdate @ 0x85e327a

/* CMission::canUpdate(MissionClearCondition_Parameter const&) const */

undefined4 __thiscall CMission::canUpdate(CMission *this,MissionClearCondition_Parameter *param_1)

{
  undefined4 uVar1;
  
  if (this[4] == (CMission)0xff) {
    if ((*param_1 != (MissionClearCondition_Parameter)0x1) &&
       (*param_1 != (MissionClearCondition_Parameter)0x2)) {
      return 0;
    }
  }
  else if (this[4] != *(CMission *)param_1) {
    return 0;
  }
  uVar1 = (**(code **)(*(int *)this + 4))(this,param_1);
  return uVar1;
}

```

---

## isAcceptCondition

```asm
// === 085e318e CMission::isAcceptCondition  [0x085e318e-0x85e3279] ===
 85e318e:	55                   	push   %ebp
 85e318f:	89 e5                	mov    %esp,%ebp
 85e3191:	53                   	push   %ebx
 85e3192:	83 ec 24             	sub    $0x24,%esp
 85e3195:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 85e319c:	00 
 85e319d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e31a0:	89 04 24             	mov    %eax,(%esp)
 85e31a3:	e8 36 84 ca ff       	call   828b5de <_ZNK5CUser20GetCharacExpandDataRE23ENUM_CHARAC_EXPAND_TYPE>
 85e31a8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e31ab:	8b 45 08             	mov    0x8(%ebp),%eax
 85e31ae:	89 04 24             	mov    %eax,(%esp)
 85e31b1:	e8 5c 37 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e31b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e31ba:	8b 45 f0             	mov    -0x10(%ebp),%eax
 85e31bd:	89 04 24             	mov    %eax,(%esp)
 85e31c0:	e8 03 1a 00 00       	call   85e4bc8 <_ZNK19CMissionList_Charac15getIndex_byKindEi>
 85e31c5:	66 85 c0             	test   %ax,%ax
 85e31c8:	0f 95 c0             	setne  %al
 85e31cb:	84 c0                	test   %al,%al
 85e31cd:	74 0a                	je     85e31d9 <_ZNK8CMission17isAcceptConditionERK5CUser+0x4b>
 85e31cf:	b8 00 00 00 00       	mov    $0x0,%eax
 85e31d4:	e9 9b 00 00 00       	jmp    85e3274 <_ZNK8CMission17isAcceptConditionERK5CUser+0xe6>
 85e31d9:	8b 45 08             	mov    0x8(%ebp),%eax
 85e31dc:	8b 40 18             	mov    0x18(%eax),%eax
 85e31df:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e31e2:	74 31                	je     85e3215 <_ZNK8CMission17isAcceptConditionERK5CUser+0x87>
 85e31e4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e31e7:	8b 58 18             	mov    0x18(%eax),%ebx
 85e31ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e31ed:	89 04 24             	mov    %eax,(%esp)
 85e31f0:	e8 55 bc bb ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85e31f5:	39 c3                	cmp    %eax,%ebx
 85e31f7:	7f 15                	jg     85e320e <_ZNK8CMission17isAcceptConditionERK5CUser+0x80>
 85e31f9:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e31fc:	89 04 24             	mov    %eax,(%esp)
 85e31ff:	e8 46 bc bb ff       	call   819ee4a <_ZNK15CUserCharacInfo13get_pvp_gradeEv>
 85e3204:	8b 55 08             	mov    0x8(%ebp),%edx
 85e3207:	8b 52 1c             	mov    0x1c(%edx),%edx
 85e320a:	39 d0                	cmp    %edx,%eax
 85e320c:	7c 07                	jl     85e3215 <_ZNK8CMission17isAcceptConditionERK5CUser+0x87>
 85e320e:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3213:	eb 05                	jmp    85e321a <_ZNK8CMission17isAcceptConditionERK5CUser+0x8c>
 85e3215:	b8 00 00 00 00       	mov    $0x0,%eax
 85e321a:	84 c0                	test   %al,%al
 85e321c:	74 07                	je     85e3225 <_ZNK8CMission17isAcceptConditionERK5CUser+0x97>
 85e321e:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3223:	eb 4f                	jmp    85e3274 <_ZNK8CMission17isAcceptConditionERK5CUser+0xe6>
 85e3225:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3228:	89 04 24             	mov    %eax,(%esp)
 85e322b:	e8 b0 f4 07 00       	call   86626e0 <_ZNK5CUser33get_pvp_WinningRate_relateMissionEv>
 85e3230:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e3233:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3236:	8b 40 20             	mov    0x20(%eax),%eax
 85e3239:	83 f8 ff             	cmp    $0xffffffff,%eax
 85e323c:	74 1d                	je     85e325b <_ZNK8CMission17isAcceptConditionERK5CUser+0xcd>
 85e323e:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3241:	8b 40 20             	mov    0x20(%eax),%eax
 85e3244:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85e3247:	7f 0b                	jg     85e3254 <_ZNK8CMission17isAcceptConditionERK5CUser+0xc6>
 85e3249:	8b 45 08             	mov    0x8(%ebp),%eax
 85e324c:	8b 40 24             	mov    0x24(%eax),%eax
 85e324f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 85e3252:	7f 07                	jg     85e325b <_ZNK8CMission17isAcceptConditionERK5CUser+0xcd>
 85e3254:	b8 00 00 00 00       	mov    $0x0,%eax
 85e3259:	eb 19                	jmp    85e3274 <_ZNK8CMission17isAcceptConditionERK5CUser+0xe6>
 85e325b:	8b 45 08             	mov    0x8(%ebp),%eax
 85e325e:	8b 00                	mov    (%eax),%eax
 85e3260:	83 c0 08             	add    $0x8,%eax
 85e3263:	8b 10                	mov    (%eax),%edx
 85e3265:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3268:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e326c:	8b 45 08             	mov    0x8(%ebp),%eax
 85e326f:	89 04 24             	mov    %eax,(%esp)
 85e3272:	ff d2                	call   *%edx
 85e3274:	83 c4 24             	add    $0x24,%esp
 85e3277:	5b                   	pop    %ebx
 85e3278:	5d                   	pop    %ebp
 85e3279:	c3                   	ret

```

```c
// CMission::isAcceptCondition @ 0x85e318e

/* CMission::isAcceptCondition(CUser const&) const */

undefined4 __thiscall CMission::isAcceptCondition(CMission *this,CUser *param_1)

{
  bool bVar1;
  short sVar2;
  CMissionList_Charac *this_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  this_00 = (CMissionList_Charac *)CUser::GetCharacExpandDataR(param_1,8);
  iVar3 = GetMissionKind(this);
  sVar2 = CMissionList_Charac::getIndex_byKind(this_00,iVar3);
  if (sVar2 == 0) {
    if ((*(int *)(this + 0x18) == -1) ||
       ((iVar3 = *(int *)(this + 0x18),
        iVar4 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1), iVar3 <= iVar4 &&
        (iVar3 = CUserCharacInfo::get_pvp_grade((CUserCharacInfo *)param_1),
        iVar3 < *(int *)(this + 0x1c))))) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar5 = 0;
    }
    else {
      iVar3 = CUser::get_pvp_WinningRate_relateMission(param_1);
      if ((*(int *)(this + 0x20) == -1) ||
         ((*(int *)(this + 0x20) <= iVar3 && (iVar3 < *(int *)(this + 0x24))))) {
        uVar5 = (**(code **)(*(int *)this + 8))(this,param_1);
      }
      else {
        uVar5 = 0;
      }
    }
    return uVar5;
  }
  return 0;
}

```

---

## makeMissionInfo

```asm
// === 085e3124 CMission::makeMissionInfo  [0x085e3124-0x85e3187] ===
 85e3124:	55                   	push   %ebp
 85e3125:	89 e5                	mov    %esp,%ebp
 85e3127:	83 ec 18             	sub    $0x18,%esp
 85e312a:	8b 45 08             	mov    0x8(%ebp),%eax
 85e312d:	89 04 24             	mov    %eax,(%esp)
 85e3130:	e8 dd 37 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e3135:	89 c2                	mov    %eax,%edx
 85e3137:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e313a:	66 89 10             	mov    %dx,(%eax)
 85e313d:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3140:	89 04 24             	mov    %eax,(%esp)
 85e3143:	e8 be 37 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e3148:	89 c2                	mov    %eax,%edx
 85e314a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e314d:	66 89 50 02          	mov    %dx,0x2(%eax)
 85e3151:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3154:	66 c7 40 04 00 00    	movw   $0x0,0x4(%eax)
 85e315a:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e315d:	66 c7 40 06 00 00    	movw   $0x0,0x6(%eax)
 85e3163:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3166:	8b 00                	mov    (%eax),%eax
 85e3168:	8b 10                	mov    (%eax),%edx
 85e316a:	8b 45 10             	mov    0x10(%ebp),%eax
 85e316d:	89 44 24 08          	mov    %eax,0x8(%esp)
 85e3171:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e3174:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e3178:	8b 45 08             	mov    0x8(%ebp),%eax
 85e317b:	89 04 24             	mov    %eax,(%esp)
 85e317e:	ff d2                	call   *%edx
 85e3180:	b8 01 00 00 00       	mov    $0x1,%eax
 85e3185:	c9                   	leave
 85e3186:	c3                   	ret
 85e3187:	90                   	nop

```

```c
// CMission::makeMissionInfo @ 0x85e3124

/* CMission::makeMissionInfo(MissionInfo&, CUser const&) const */

undefined4 __thiscall CMission::makeMissionInfo(CMission *this,MissionInfo *param_1,CUser *param_2)

{
  undefined2 uVar1;
  
  uVar1 = GetMissionKind(this);
  *(undefined2 *)param_1 = uVar1;
  uVar1 = GetMissionIndex(this);
  *(undefined2 *)(param_1 + 2) = uVar1;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  (*(code *)**(undefined4 **)this)(this,param_1,param_2);
  return 1;
}

```

---

## operator_lt_

```asm
// === 085e30ae CMission::operator<  [0x085e30ae-0x85e3123] ===
 85e30ae:	55                   	push   %ebp
 85e30af:	89 e5                	mov    %esp,%ebp
 85e30b1:	53                   	push   %ebx
 85e30b2:	83 ec 14             	sub    $0x14,%esp
 85e30b5:	8b 45 08             	mov    0x8(%ebp),%eax
 85e30b8:	8b 58 08             	mov    0x8(%eax),%ebx
 85e30bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e30be:	89 04 24             	mov    %eax,(%esp)
 85e30c1:	e8 4c 38 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e30c6:	39 c3                	cmp    %eax,%ebx
 85e30c8:	0f 95 c0             	setne  %al
 85e30cb:	84 c0                	test   %al,%al
 85e30cd:	74 18                	je     85e30e7 <_ZN8CMissionltERKS_+0x39>
 85e30cf:	8b 45 08             	mov    0x8(%ebp),%eax
 85e30d2:	8b 58 08             	mov    0x8(%eax),%ebx
 85e30d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e30d8:	89 04 24             	mov    %eax,(%esp)
 85e30db:	e8 32 38 00 00       	call   85e6912 <_ZNK8CMission14GetMissionKindEv>
 85e30e0:	39 c3                	cmp    %eax,%ebx
 85e30e2:	0f 9c c0             	setl   %al
 85e30e5:	eb 37                	jmp    85e311e <_ZN8CMissionltERKS_+0x70>
 85e30e7:	8b 45 08             	mov    0x8(%ebp),%eax
 85e30ea:	8b 58 0c             	mov    0xc(%eax),%ebx
 85e30ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e30f0:	89 04 24             	mov    %eax,(%esp)
 85e30f3:	e8 0e 38 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e30f8:	39 c3                	cmp    %eax,%ebx
 85e30fa:	0f 95 c0             	setne  %al
 85e30fd:	84 c0                	test   %al,%al
 85e30ff:	74 18                	je     85e3119 <_ZN8CMissionltERKS_+0x6b>
 85e3101:	8b 45 08             	mov    0x8(%ebp),%eax
 85e3104:	8b 58 0c             	mov    0xc(%eax),%ebx
 85e3107:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e310a:	89 04 24             	mov    %eax,(%esp)
 85e310d:	e8 f4 37 00 00       	call   85e6906 <_ZNK8CMission15GetMissionIndexEv>
 85e3112:	39 c3                	cmp    %eax,%ebx
 85e3114:	0f 9c c0             	setl   %al
 85e3117:	eb 05                	jmp    85e311e <_ZN8CMissionltERKS_+0x70>
 85e3119:	b8 00 00 00 00       	mov    $0x0,%eax
 85e311e:	83 c4 14             	add    $0x14,%esp
 85e3121:	5b                   	pop    %ebx
 85e3122:	5d                   	pop    %ebp
 85e3123:	c3                   	ret

```

```c
// CMission::operator< @ 0x85e30ae

/* CMission::TEMPNAMEPLACEHOLDERVALUE(CMission const&) */

bool __thiscall CMission::operator<(CMission *this,CMission *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 8);
  iVar3 = GetMissionKind(param_1);
  if (iVar1 == iVar3) {
    iVar1 = *(int *)(this + 0xc);
    iVar3 = GetMissionIndex(param_1);
    if (iVar1 == iVar3) {
      bVar2 = false;
    }
    else {
      iVar1 = *(int *)(this + 0xc);
      iVar3 = GetMissionIndex(param_1);
      bVar2 = iVar1 < iVar3;
    }
  }
  else {
    iVar1 = *(int *)(this + 8);
    iVar3 = GetMissionKind(param_1);
    bVar2 = iVar1 < iVar3;
  }
  return bVar2;
}

```

---

## ~CMission

```asm
// === 085e1a6a CMission::~CMission  [0x085e1a6a-0x85e1a9d] ===
 85e1a6a:	55                   	push   %ebp
 85e1a6b:	89 e5                	mov    %esp,%ebp
 85e1a6d:	83 ec 18             	sub    $0x18,%esp
 85e1a70:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1a73:	c7 00 48 40 cc 08    	movl   $0x8cc4048,(%eax)
 85e1a79:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1a7c:	83 c0 30             	add    $0x30,%eax
 85e1a7f:	89 04 24             	mov    %eax,(%esp)
 85e1a82:	e8 63 2f b5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85e1a87:	b8 00 00 00 00       	mov    $0x0,%eax
 85e1a8c:	84 c0                	test   %al,%al
 85e1a8e:	74 0b                	je     85e1a9b <_ZN8CMissionD1Ev+0x31>
 85e1a90:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1a93:	89 04 24             	mov    %eax,(%esp)
 85e1a96:	e8 55 2a 14 00       	call   87244f0 <_ZdlPv>
 85e1a9b:	c9                   	leave
 85e1a9c:	c3                   	ret
 85e1a9d:	90                   	nop

```

```c
// CMission::~CMission @ 0x85e1a6a

/* WARNING: Removing unreachable block (ram,0x085e1a90) */
/* CMission::~CMission() */

void __thiscall CMission::~CMission(CMission *this)

{
  *(undefined ***)this = &PTR__makeTotalMissionInfo_08cc4048;
  std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector
            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)(this + 0x30));
  return;
}

```

---

## ~CMission_085e1a9e

```asm
// === 085e1a9e CMission::~CMission  [0x085e1a9e-0x85e1abb] ===
 85e1a9e:	55                   	push   %ebp
 85e1a9f:	89 e5                	mov    %esp,%ebp
 85e1aa1:	83 ec 18             	sub    $0x18,%esp
 85e1aa4:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1aa7:	89 04 24             	mov    %eax,(%esp)
 85e1aaa:	e8 bb ff ff ff       	call   85e1a6a <_ZN8CMissionD1Ev>
 85e1aaf:	8b 45 08             	mov    0x8(%ebp),%eax
 85e1ab2:	89 04 24             	mov    %eax,(%esp)
 85e1ab5:	e8 36 2a 14 00       	call   87244f0 <_ZdlPv>
 85e1aba:	c9                   	leave
 85e1abb:	c3                   	ret

```

```c
// CMission::~CMission @ 0x85e1a9e

/* CMission::~CMission() */

void __thiscall CMission::~CMission(CMission *this)

{
  ~CMission(this);
  operator_delete(this);
  return;
}

```

