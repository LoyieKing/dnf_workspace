# CMission_combo_clear

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Update

```asm
// === 085e4562 CMission_combo_clear::Update  [0x085e4562-0x85e456b] ===
 85e4562:	55                   	push   %ebp
 85e4563:	89 e5                	mov    %esp,%ebp
 85e4565:	b8 01 00 00 00       	mov    $0x1,%eax
 85e456a:	5d                   	pop    %ebp
 85e456b:	c3                   	ret

```

```c
// CMission_combo_clear::Update @ 0x85e4562

/* CMission_combo_clear::Update(MissionInfo&, MissionClearCondition_Parameter const&) const */

undefined4
CMission_combo_clear::Update(MissionInfo *param_1,MissionClearCondition_Parameter *param_2)

{
  return 1;
}

```

---

## _Reward

```asm
// === 085e4134 CMission_combo_clear::_Reward  [0x085e4134-0x85e42ef] ===
 85e4134:	55                   	push   %ebp
 85e4135:	89 e5                	mov    %esp,%ebp
 85e4137:	56                   	push   %esi
 85e4138:	53                   	push   %ebx
 85e4139:	83 ec 50             	sub    $0x50,%esp
 85e413c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e413f:	89 04 24             	mov    %eax,(%esp)
 85e4142:	e8 97 27 00 00       	call   85e68de <_ZN16combo_script_keyC1Ev>
 85e4147:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e414a:	89 04 24             	mov    %eax,(%esp)
 85e414d:	e8 ce 9d b1 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85e4152:	88 45 ec             	mov    %al,-0x14(%ebp)
 85e4155:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4158:	89 04 24             	mov    %eax,(%esp)
 85e415b:	e8 34 cb b2 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 85e4160:	66 98                	cbtw
 85e4162:	66 89 45 ee          	mov    %ax,-0x12(%ebp)
 85e4166:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4169:	8d 48 40             	lea    0x40(%eax),%ecx
 85e416c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e416f:	8d 55 ec             	lea    -0x14(%ebp),%edx
 85e4172:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4176:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e417a:	89 04 24             	mov    %eax,(%esp)
 85e417d:	e8 60 3e 00 00       	call   85e7fe2 <_ZNKSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85e4182:	83 ec 04             	sub    $0x4,%esp
 85e4185:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4188:	8d 50 40             	lea    0x40(%eax),%edx
 85e418b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e418e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4192:	89 04 24             	mov    %eax,(%esp)
 85e4195:	e8 74 3e 00 00       	call   85e800e <_ZNKSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85e419a:	83 ec 04             	sub    $0x4,%esp
 85e419d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e41a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e41a4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e41a7:	89 04 24             	mov    %eax,(%esp)
 85e41aa:	e8 85 3e 00 00       	call   85e8034 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEneERKS5_>
 85e41af:	84 c0                	test   %al,%al
 85e41b1:	0f 84 2a 01 00 00    	je     85e42e1 <_ZNK20CMission_combo_clear7_RewardER5CUser+0x1ad>
 85e41b7:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e41ba:	89 04 24             	mov    %eax,(%esp)
 85e41bd:	e8 14 08 b5 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 85e41c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e41c5:	89 04 24             	mov    %eax,(%esp)
 85e41c8:	e8 7b 3e 00 00       	call   85e8048 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEptEv>
 85e41cd:	83 c0 10             	add    $0x10,%eax
 85e41d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e41d4:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e41d7:	89 04 24             	mov    %eax,(%esp)
 85e41da:	e8 91 b8 d2 ff       	call   830fa70 <_ZNSt6vectorISt4pairIiiESaIS1_EE9push_backERKS1_>
 85e41df:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e41e2:	89 04 24             	mov    %eax,(%esp)
 85e41e5:	e8 c2 9f aa ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 85e41ea:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e41f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e41f4:	89 04 24             	mov    %eax,(%esp)
 85e41f7:	e8 92 60 af ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 85e41fc:	c7 44 24 1c 5c 2c cc 	movl   $0x8cc2c5c,0x1c(%esp)
 85e4203:	08 
 85e4204:	c7 44 24 18 70 2c cc 	movl   $0x8cc2c70,0x18(%esp)
 85e420b:	08 
 85e420c:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 85e4213:	00 
 85e4214:	c7 44 24 10 33 00 00 	movl   $0x33,0x10(%esp)
 85e421b:	00 
 85e421c:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 85e4223:	00 
 85e4224:	8d 55 d0             	lea    -0x30(%ebp),%edx
 85e4227:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e422b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 85e422e:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4232:	89 04 24             	mov    %eax,(%esp)
 85e4235:	e8 78 29 f2 ff       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 85e423a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 85e423d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 85e4241:	7e 17                	jle    85e425a <_ZNK20CMission_combo_clear7_RewardER5CUser+0x126>
 85e4243:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e4246:	89 04 24             	mov    %eax,(%esp)
 85e4249:	e8 72 9f aa ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 85e424e:	83 f8 02             	cmp    $0x2,%eax
 85e4251:	76 07                	jbe    85e425a <_ZNK20CMission_combo_clear7_RewardER5CUser+0x126>
 85e4253:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4258:	eb 05                	jmp    85e425f <_ZNK20CMission_combo_clear7_RewardER5CUser+0x12b>
 85e425a:	b8 00 00 00 00       	mov    $0x0,%eax
 85e425f:	84 c0                	test   %al,%al
 85e4261:	74 4b                	je     85e42ae <_ZNK20CMission_combo_clear7_RewardER5CUser+0x17a>
 85e4263:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85e426a:	00 
 85e426b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e426e:	89 04 24             	mov    %eax,(%esp)
 85e4271:	e8 66 9f aa ff       	call   808e1dc <_ZNSt6vectorIiSaIiEEixEj>
 85e4276:	8b 00                	mov    (%eax),%eax
 85e4278:	89 44 24 0c          	mov    %eax,0xc(%esp)
 85e427c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 85e4283:	00 
 85e4284:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 85e428b:	00 
 85e428c:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e428f:	89 04 24             	mov    %eax,(%esp)
 85e4292:	e8 41 80 09 00       	call   867c2d8 <_ZN5CUser14SendUpdateItemENS_11eSendTargetE14ENUM_ITEMSPACEi>
 85e4297:	eb 15                	jmp    85e42ae <_ZNK20CMission_combo_clear7_RewardER5CUser+0x17a>
 85e4299:	89 d3                	mov    %edx,%ebx
 85e429b:	89 c6                	mov    %eax,%esi
 85e429d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e42a0:	89 04 24             	mov    %eax,(%esp)
 85e42a3:	e8 32 fb a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e42a8:	89 f0                	mov    %esi,%eax
 85e42aa:	89 da                	mov    %ebx,%edx
 85e42ac:	eb 0d                	jmp    85e42bb <_ZNK20CMission_combo_clear7_RewardER5CUser+0x187>
 85e42ae:	8d 45 d0             	lea    -0x30(%ebp),%eax
 85e42b1:	89 04 24             	mov    %eax,(%esp)
 85e42b4:	e8 21 fb a9 ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 85e42b9:	eb 1b                	jmp    85e42d6 <_ZNK20CMission_combo_clear7_RewardER5CUser+0x1a2>
 85e42bb:	89 d3                	mov    %edx,%ebx
 85e42bd:	89 c6                	mov    %eax,%esi
 85e42bf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e42c2:	89 04 24             	mov    %eax,(%esp)
 85e42c5:	e8 20 07 b5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85e42ca:	89 f0                	mov    %esi,%eax
 85e42cc:	89 da                	mov    %ebx,%edx
 85e42ce:	89 04 24             	mov    %eax,(%esp)
 85e42d1:	e8 7a f4 4f 00       	call   8ae3750 <_Unwind_Resume>
 85e42d6:	8d 45 dc             	lea    -0x24(%ebp),%eax
 85e42d9:	89 04 24             	mov    %eax,(%esp)
 85e42dc:	e8 09 07 b5 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 85e42e1:	b8 01 00 00 00       	mov    $0x1,%eax
 85e42e6:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e42e9:	83 c4 00             	add    $0x0,%esp
 85e42ec:	5b                   	pop    %ebx
 85e42ed:	5e                   	pop    %esi
 85e42ee:	5d                   	pop    %ebp
 85e42ef:	c3                   	ret

```

```c
// CMission_combo_clear::_Reward @ 0x85e4134

/* CMission_combo_clear::_Reward(CUser&) const */

undefined4 __thiscall CMission_combo_clear::_Reward(CMission_combo_clear *this,CUser *param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  uint uVar5;
  undefined4 *puVar6;
  vector<int,std::allocator<int>> local_34 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_28 [12];
  combo_script_key local_1c [4];
  combo_script_key local_18 [2];
  short local_16;
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  local_14 [4];
  int local_10;
  
  combo_script_key::combo_script_key(local_18);
  local_18[0] = (combo_script_key)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
  cVar2 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
  local_16 = (short)cVar2;
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::find(local_1c);
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::end(local_14);
  cVar2 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
          operator!=((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>> *
                     )local_14,(_Rb_tree_const_iterator *)local_1c);
  if (cVar2 != '\0') {
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_28);
    iVar3 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
            operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                        *)local_1c);
                    /* try { // try from 085e41da to 085e41e9 has its CatchHandler @ 085e42bb */
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::push_back
              (local_28,(pair *)(iVar3 + 0x10));
    std::vector<int,std::allocator<int>>::vector(local_34);
    local_10 = 0;
    pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
                    /* try { // try from 085e4235 to 085e4296 has its CatchHandler @ 085e4299 */
    local_10 = CInventory::insert_event_items
                         (pCVar4,local_28,local_34,0x1e,0x33,1,"game_server_msg_173",
                          "game_server_msg_174");
    if ((local_10 < 1) || (uVar5 = std::vector<int,std::allocator<int>>::size(local_34), uVar5 < 3))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      puVar6 = (undefined4 *)std::vector<int,std::allocator<int>>::operator[](local_34,0);
      CUser::SendUpdateItem(param_1,1,0,*puVar6);
    }
                    /* try { // try from 085e42b4 to 085e42b8 has its CatchHandler @ 085e42bb */
    std::vector<int,std::allocator<int>>::~vector(local_34);
    std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_28);
    return 1;
  }
  return 1;
}

```

---

## _isAcceptCondition

```asm
// === 085e42f0 CMission_combo_clear::_isAcceptCondition  [0x085e42f0-0x85e439d] ===
 85e42f0:	55                   	push   %ebp
 85e42f1:	89 e5                	mov    %esp,%ebp
 85e42f3:	83 ec 28             	sub    $0x28,%esp
 85e42f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85e42f9:	8b 55 0c             	mov    0xc(%ebp),%edx
 85e42fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e4300:	89 04 24             	mov    %eax,(%esp)
 85e4303:	e8 88 f1 ff ff       	call   85e3490 <_ZNK8CMission25_isAcceptCondition_SeriesERK5CUser>
 85e4308:	83 f0 01             	xor    $0x1,%eax
 85e430b:	84 c0                	test   %al,%al
 85e430d:	74 0a                	je     85e4319 <_ZNK20CMission_combo_clear18_isAcceptConditionERK5CUser+0x29>
 85e430f:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4314:	e9 83 00 00 00       	jmp    85e439c <_ZNK20CMission_combo_clear18_isAcceptConditionERK5CUser+0xac>
 85e4319:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85e431c:	89 04 24             	mov    %eax,(%esp)
 85e431f:	e8 ba 25 00 00       	call   85e68de <_ZN16combo_script_keyC1Ev>
 85e4324:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4327:	89 04 24             	mov    %eax,(%esp)
 85e432a:	e8 f1 9b b1 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85e432f:	88 45 f0             	mov    %al,-0x10(%ebp)
 85e4332:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4335:	89 04 24             	mov    %eax,(%esp)
 85e4338:	e8 57 c9 b2 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 85e433d:	66 98                	cbtw
 85e433f:	66 89 45 f2          	mov    %ax,-0xe(%ebp)
 85e4343:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4346:	8d 48 40             	lea    0x40(%eax),%ecx
 85e4349:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e434c:	8d 55 f0             	lea    -0x10(%ebp),%edx
 85e434f:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e4353:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e4357:	89 04 24             	mov    %eax,(%esp)
 85e435a:	e8 83 3c 00 00       	call   85e7fe2 <_ZNKSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85e435f:	83 ec 04             	sub    $0x4,%esp
 85e4362:	8b 45 08             	mov    0x8(%ebp),%eax
 85e4365:	8d 50 40             	lea    0x40(%eax),%edx
 85e4368:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e436b:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e436f:	89 04 24             	mov    %eax,(%esp)
 85e4372:	e8 97 3c 00 00       	call   85e800e <_ZNKSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85e4377:	83 ec 04             	sub    $0x4,%esp
 85e437a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e437d:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e4381:	8d 45 f4             	lea    -0xc(%ebp),%eax
 85e4384:	89 04 24             	mov    %eax,(%esp)
 85e4387:	e8 a8 3c 00 00       	call   85e8034 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEneERKS5_>
 85e438c:	84 c0                	test   %al,%al
 85e438e:	74 07                	je     85e4397 <_ZNK20CMission_combo_clear18_isAcceptConditionERK5CUser+0xa7>
 85e4390:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4395:	eb 05                	jmp    85e439c <_ZNK20CMission_combo_clear18_isAcceptConditionERK5CUser+0xac>
 85e4397:	b8 00 00 00 00       	mov    $0x0,%eax
 85e439c:	c9                   	leave
 85e439d:	c3                   	ret

```

```c
// CMission_combo_clear::_isAcceptCondition @ 0x85e42f0

/* CMission_combo_clear::_isAcceptCondition(CUser const&) const */

undefined4 __thiscall
CMission_combo_clear::_isAcceptCondition(CMission_combo_clear *this,CUser *param_1)

{
  char cVar1;
  undefined4 uVar2;
  combo_script_key local_18 [4];
  combo_script_key local_14 [2];
  short local_12;
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  local_10 [12];
  
  cVar1 = CMission::_isAcceptCondition_Series((CMission *)this,param_1);
  if (cVar1 == '\x01') {
    combo_script_key::combo_script_key(local_14);
    local_14[0] = (combo_script_key)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_1);
    cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
    local_12 = (short)cVar1;
    std::
    map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
    ::find(local_18);
    std::
    map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
    ::end(local_10);
    cVar1 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
            operator!=((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                        *)local_10,(_Rb_tree_const_iterator *)local_18);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## _makeTotalMissionInfo

```asm
// === 085e439e CMission_combo_clear::_makeTotalMissionInfo  [0x085e439e-0x85e452d] ===
 85e439e:	55                   	push   %ebp
 85e439f:	89 e5                	mov    %esp,%ebp
 85e43a1:	56                   	push   %esi
 85e43a2:	53                   	push   %ebx
 85e43a3:	83 ec 30             	sub    $0x30,%esp
 85e43a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85e43a9:	89 04 24             	mov    %eax,(%esp)
 85e43ac:	e8 2d 25 00 00       	call   85e68de <_ZN16combo_script_keyC1Ev>
 85e43b1:	8b 45 10             	mov    0x10(%ebp),%eax
 85e43b4:	89 04 24             	mov    %eax,(%esp)
 85e43b7:	e8 64 9b b1 ff       	call   80fdf20 <_ZNK15CUserCharacInfo14get_charac_jobEv>
 85e43bc:	88 45 e8             	mov    %al,-0x18(%ebp)
 85e43bf:	8b 45 10             	mov    0x10(%ebp),%eax
 85e43c2:	89 04 24             	mov    %eax,(%esp)
 85e43c5:	e8 ca c8 b2 ff       	call   8110c94 <_ZNK15CUserCharacInfo23getCurCharFirstGrowTypeEv>
 85e43ca:	66 98                	cbtw
 85e43cc:	66 89 45 ea          	mov    %ax,-0x16(%ebp)
 85e43d0:	8b 45 08             	mov    0x8(%ebp),%eax
 85e43d3:	8d 48 40             	lea    0x40(%eax),%ecx
 85e43d6:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e43d9:	8d 55 e8             	lea    -0x18(%ebp),%edx
 85e43dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 85e43e0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 85e43e4:	89 04 24             	mov    %eax,(%esp)
 85e43e7:	e8 f6 3b 00 00       	call   85e7fe2 <_ZNKSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE4findERS5_>
 85e43ec:	83 ec 04             	sub    $0x4,%esp
 85e43ef:	8b 45 08             	mov    0x8(%ebp),%eax
 85e43f2:	8d 50 40             	lea    0x40(%eax),%edx
 85e43f5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e43f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85e43fc:	89 04 24             	mov    %eax,(%esp)
 85e43ff:	e8 0a 3c 00 00       	call   85e800e <_ZNKSt3mapI16combo_script_key17combo_script_dataSt4lessIS0_ESaISt4pairIKS0_S1_EEE3endEv>
 85e4404:	83 ec 04             	sub    $0x4,%esp
 85e4407:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e440a:	89 44 24 04          	mov    %eax,0x4(%esp)
 85e440e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85e4411:	89 04 24             	mov    %eax,(%esp)
 85e4414:	e8 1b 3c 00 00       	call   85e8034 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEneERKS5_>
 85e4419:	84 c0                	test   %al,%al
 85e441b:	0f 84 02 01 00 00    	je     85e4523 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x185>
 85e4421:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4424:	89 04 24             	mov    %eax,(%esp)
 85e4427:	e8 1c 3c 00 00       	call   85e8048 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEptEv>
 85e442c:	83 c0 04             	add    $0x4,%eax
 85e442f:	89 04 24             	mov    %eax,(%esp)
 85e4432:	e8 dd 93 af ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 85e4437:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85e443a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85e4441:	eb 50                	jmp    85e4493 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0xf5>
 85e4443:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4446:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e444a:	98                   	cwtl
 85e444b:	c1 e0 04             	shl    $0x4,%eax
 85e444e:	89 c2                	mov    %eax,%edx
 85e4450:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4453:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e4457:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e445a:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e445e:	89 c6                	mov    %eax,%esi
 85e4460:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85e4463:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e4466:	89 04 24             	mov    %eax,(%esp)
 85e4469:	e8 da 3b 00 00       	call   85e8048 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEptEv>
 85e446e:	83 c0 04             	add    $0x4,%eax
 85e4471:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e4475:	89 04 24             	mov    %eax,(%esp)
 85e4478:	e8 95 06 bd ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 85e447d:	8b 40 04             	mov    0x4(%eax),%eax
 85e4480:	83 e0 0f             	and    $0xf,%eax
 85e4483:	8d 04 06             	lea    (%esi,%eax,1),%eax
 85e4486:	89 c2                	mov    %eax,%edx
 85e4488:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e448b:	66 89 50 04          	mov    %dx,0x4(%eax)
 85e448f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e4493:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 85e4497:	7f 0f                	jg     85e44a8 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x10a>
 85e4499:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e449c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85e449f:	7d 07                	jge    85e44a8 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x10a>
 85e44a1:	b8 01 00 00 00       	mov    $0x1,%eax
 85e44a6:	eb 05                	jmp    85e44ad <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x10f>
 85e44a8:	b8 00 00 00 00       	mov    $0x0,%eax
 85e44ad:	84 c0                	test   %al,%al
 85e44af:	75 92                	jne    85e4443 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0xa5>
 85e44b1:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 85e44b5:	7e 6c                	jle    85e4523 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x185>
 85e44b7:	c7 45 f4 04 00 00 00 	movl   $0x4,-0xc(%ebp)
 85e44be:	eb 58                	jmp    85e4518 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x17a>
 85e44c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e44c3:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e44c7:	98                   	cwtl
 85e44c8:	c1 e0 04             	shl    $0x4,%eax
 85e44cb:	89 c2                	mov    %eax,%edx
 85e44cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e44d0:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e44d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 85e44d7:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 85e44da:	7d 38                	jge    85e4514 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x176>
 85e44dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e44df:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e44e3:	89 c6                	mov    %eax,%esi
 85e44e5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 85e44e8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 85e44eb:	89 04 24             	mov    %eax,(%esp)
 85e44ee:	e8 55 3b 00 00       	call   85e8048 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIK16combo_script_key17combo_script_dataEEptEv>
 85e44f3:	83 c0 04             	add    $0x4,%eax
 85e44f6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 85e44fa:	89 04 24             	mov    %eax,(%esp)
 85e44fd:	e8 10 06 bd ff       	call   81b4b12 <_ZNKSt6vectorISt4pairIiiESaIS1_EEixEj>
 85e4502:	8b 40 04             	mov    0x4(%eax),%eax
 85e4505:	83 e0 0f             	and    $0xf,%eax
 85e4508:	8d 04 06             	lea    (%esi,%eax,1),%eax
 85e450b:	89 c2                	mov    %eax,%edx
 85e450d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4510:	66 89 50 06          	mov    %dx,0x6(%eax)
 85e4514:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 85e4518:	83 7d f4 07          	cmpl   $0x7,-0xc(%ebp)
 85e451c:	0f 9e c0             	setle  %al
 85e451f:	84 c0                	test   %al,%al
 85e4521:	75 9d                	jne    85e44c0 <_ZNK20CMission_combo_clear21_makeTotalMissionInfoER11MissionInfoRK5CUser+0x122>
 85e4523:	8d 65 f8             	lea    -0x8(%ebp),%esp
 85e4526:	83 c4 00             	add    $0x0,%esp
 85e4529:	5b                   	pop    %ebx
 85e452a:	5e                   	pop    %esi
 85e452b:	5d                   	pop    %ebp
 85e452c:	c3                   	ret
 85e452d:	90                   	nop

```

```c
// CMission_combo_clear::_makeTotalMissionInfo @ 0x85e439e

/* CMission_combo_clear::_makeTotalMissionInfo(MissionInfo&, CUser const&) const */

void __thiscall
CMission_combo_clear::_makeTotalMissionInfo
          (CMission_combo_clear *this,MissionInfo *param_1,CUser *param_2)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  combo_script_key local_20 [4];
  combo_script_key local_1c [2];
  short local_1a;
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  local_18 [4];
  int local_14;
  uint local_10;
  
  combo_script_key::combo_script_key(local_1c);
  local_1c[0] = (combo_script_key)CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
  cVar4 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_2);
  local_1a = (short)cVar4;
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::find(local_20);
  std::
  map<combo_script_key,combo_script_data,std::less<combo_script_key>,std::allocator<std::pair<combo_script_key_const,combo_script_data>>>
  ::end(local_18);
  cVar4 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
          operator!=((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>> *
                     )local_18,(_Rb_tree_const_iterator *)local_20);
  if (cVar4 != '\0') {
    iVar5 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
            operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                        *)local_20);
    local_14 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                         ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                          (iVar5 + 4));
    local_10 = 0;
    while( true ) {
      uVar3 = local_10;
      if (((int)local_10 < 4) && ((int)local_10 < local_14)) {
        bVar2 = true;
      }
      else {
        bVar2 = false;
      }
      if (!bVar2) break;
      *(short *)(param_1 + 4) = *(short *)(param_1 + 4) << 4;
      sVar1 = *(short *)(param_1 + 4);
      iVar5 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>::
              operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                          *)local_20);
      iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (iVar5 + 4),uVar3);
      *(ushort *)(param_1 + 4) = sVar1 + ((ushort)*(undefined4 *)(iVar5 + 4) & 0xf);
      local_10 = local_10 + 1;
    }
    if (4 < local_14) {
      for (local_10 = 4; uVar3 = local_10, (int)local_10 < 8; local_10 = local_10 + 1) {
        *(short *)(param_1 + 6) = *(short *)(param_1 + 6) << 4;
        if ((int)local_10 < local_14) {
          sVar1 = *(short *)(param_1 + 6);
          iVar5 = std::_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                  ::operator->((_Rb_tree_const_iterator<std::pair<combo_script_key_const,combo_script_data>>
                                *)local_20);
          iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                            ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                             (iVar5 + 4),uVar3);
          *(ushort *)(param_1 + 6) = sVar1 + ((ushort)*(undefined4 *)(iVar5 + 4) & 0xf);
        }
      }
    }
  }
  return;
}

```

---

## getClearCondition

```asm
// === 085e456c CMission_combo_clear::getClearCondition  [0x085e456c-0x85e4575] ===
 85e456c:	55                   	push   %ebp
 85e456d:	89 e5                	mov    %esp,%ebp
 85e456f:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4574:	5d                   	pop    %ebp
 85e4575:	c3                   	ret

```

```c
// CMission_combo_clear::getClearCondition @ 0x85e456c

/* CMission_combo_clear::getClearCondition() const */

undefined4 CMission_combo_clear::getClearCondition(void)

{
  return 0;
}

```

---

## isClearable

```asm
// === 085e452e CMission_combo_clear::isClearable  [0x085e452e-0x85e4557] ===
 85e452e:	55                   	push   %ebp
 85e452f:	89 e5                	mov    %esp,%ebp
 85e4531:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4534:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 85e4538:	66 85 c0             	test   %ax,%ax
 85e453b:	75 13                	jne    85e4550 <_ZNK20CMission_combo_clear11isClearableER11MissionInfoRb+0x22>
 85e453d:	8b 45 0c             	mov    0xc(%ebp),%eax
 85e4540:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 85e4544:	66 85 c0             	test   %ax,%ax
 85e4547:	75 07                	jne    85e4550 <_ZNK20CMission_combo_clear11isClearableER11MissionInfoRb+0x22>
 85e4549:	b8 01 00 00 00       	mov    $0x1,%eax
 85e454e:	eb 05                	jmp    85e4555 <_ZNK20CMission_combo_clear11isClearableER11MissionInfoRb+0x27>
 85e4550:	b8 00 00 00 00       	mov    $0x0,%eax
 85e4555:	5d                   	pop    %ebp
 85e4556:	c3                   	ret
 85e4557:	90                   	nop

```

```c
// CMission_combo_clear::isClearable @ 0x85e452e

/* CMission_combo_clear::isClearable(MissionInfo&, bool&) const */

undefined4 CMission_combo_clear::isClearable(MissionInfo *param_1,bool *param_2)

{
  undefined4 uVar1;
  
  if ((*(short *)(param_2 + 4) == 0) && (*(short *)(param_2 + 6) == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## isSeriesMission

```asm
// === 085e4558 CMission_combo_clear::isSeriesMission  [0x085e4558-0x85e4561] ===
 85e4558:	55                   	push   %ebp
 85e4559:	89 e5                	mov    %esp,%ebp
 85e455b:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4560:	5d                   	pop    %ebp
 85e4561:	c3                   	ret

```

```c
// CMission_combo_clear::isSeriesMission @ 0x85e4558

/* CMission_combo_clear::isSeriesMission() const */

undefined4 CMission_combo_clear::isSeriesMission(void)

{
  return 1;
}

```

---

## verifyMission

```asm
// === 085e412a CMission_combo_clear::verifyMission  [0x085e412a-0x85e4133] ===
 85e412a:	55                   	push   %ebp
 85e412b:	89 e5                	mov    %esp,%ebp
 85e412d:	b8 01 00 00 00       	mov    $0x1,%eax
 85e4132:	5d                   	pop    %ebp
 85e4133:	c3                   	ret

```

```c
// CMission_combo_clear::verifyMission @ 0x85e412a

/* CMission_combo_clear::verifyMission(MissionInfo const&) const */

undefined4 CMission_combo_clear::verifyMission(MissionInfo *param_1)

{
  return 1;
}

```

