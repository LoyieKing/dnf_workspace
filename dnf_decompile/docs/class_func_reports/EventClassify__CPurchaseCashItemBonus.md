# EventClassify__CPurchaseCashItemBonus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## get_db_table_name

```asm
// === 0810f9c0 EventClassify::CPurchaseCashItemBonus::get_db_table_name  [0x0810f9c0-0x810f9cd] ===
 810f9c0:	55                   	push   %ebp
 810f9c1:	89 e5                	mov    %esp,%ebp
 810f9c3:	8b 45 08             	mov    0x8(%ebp),%eax
 810f9c6:	8b 40 1c             	mov    0x1c(%eax),%eax
 810f9c9:	83 c0 08             	add    $0x8,%eax
 810f9cc:	5d                   	pop    %ebp
 810f9cd:	c3                   	ret

```

```c
// EventClassify::CPurchaseCashItemBonus::get_db_table_name @ 0x810f9c0

/* EventClassify::CPurchaseCashItemBonus::get_db_table_name() */

int __thiscall
EventClassify::CPurchaseCashItemBonus::get_db_table_name(CPurchaseCashItemBonus *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## sendPurchaseBonusReward

```asm
// === 0810fb34 EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward  [0x0810fb34-0x810fcb1] ===
 810fb34:	55                   	push   %ebp
 810fb35:	89 e5                	mov    %esp,%ebp
 810fb37:	56                   	push   %esi
 810fb38:	53                   	push   %ebx
 810fb39:	83 ec 40             	sub    $0x40,%esp
 810fb3c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810fb40:	75 36                	jne    810fb78 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri+0x44>
 810fb42:	c7 44 24 10 84 c3 b4 	movl   $0x8b4c384,0x10(%esp)
 810fb49:	08 
 810fb4a:	c7 44 24 0c 55 07 00 	movl   $0x755,0xc(%esp)
 810fb51:	00 
 810fb52:	c7 44 24 08 20 d3 b4 	movl   $0x8b4d320,0x8(%esp)
 810fb59:	08 
 810fb5a:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 810fb61:	08 
 810fb62:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810fb69:	e8 9c 40 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 810fb6e:	b8 00 00 00 00       	mov    $0x0,%eax
 810fb73:	e9 2f 01 00 00       	jmp    810fca7 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri+0x173>
 810fb78:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 810fb7f:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 810fb83:	8b 45 08             	mov    0x8(%ebp),%eax
 810fb86:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fb89:	8d 50 24             	lea    0x24(%eax),%edx
 810fb8c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fb8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fb93:	89 04 24             	mov    %eax,(%esp)
 810fb96:	e8 39 22 00 00       	call   8111dd4 <_ZNSt6vectorISt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESaIS4_EE5beginEv>
 810fb9b:	83 ec 04             	sub    $0x4,%esp
 810fb9e:	e9 cb 00 00 00       	jmp    810fc6e <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri+0x13a>
 810fba3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fba6:	89 04 24             	mov    %eax,(%esp)
 810fba9:	e8 b2 22 00 00       	call   8111e60 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810fbae:	8b 55 10             	mov    0x10(%ebp),%edx
 810fbb1:	89 54 24 08          	mov    %edx,0x8(%esp)
 810fbb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 810fbb9:	8b 45 08             	mov    0x8(%ebp),%eax
 810fbbc:	89 04 24             	mov    %eax,(%esp)
 810fbbf:	e8 1c ff ff ff       	call   810fae0 <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi>
 810fbc4:	84 c0                	test   %al,%al
 810fbc6:	0f 84 97 00 00 00    	je     810fc63 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri+0x12f>
 810fbcc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fbcf:	89 04 24             	mov    %eax,(%esp)
 810fbd2:	e8 89 22 00 00       	call   8111e60 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810fbd7:	83 c0 0c             	add    $0xc,%eax
 810fbda:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810fbe1:	00 
 810fbe2:	89 44 24 08          	mov    %eax,0x8(%esp)
 810fbe6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fbe9:	89 44 24 04          	mov    %eax,0x4(%esp)
 810fbed:	8d 45 eb             	lea    -0x15(%ebp),%eax
 810fbf0:	89 04 24             	mov    %eax,(%esp)
 810fbf3:	e8 3a d3 ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810fbf8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 810fbfb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 810fbff:	74 62                	je     810fc63 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri+0x12f>
 810fc01:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fc04:	89 04 24             	mov    %eax,(%esp)
 810fc07:	e8 54 22 00 00       	call   8111e60 <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEptEv>
 810fc0c:	8b 70 2c             	mov    0x2c(%eax),%esi
 810fc0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fc12:	89 04 24             	mov    %eax,(%esp)
 810fc15:	e8 34 c0 fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810fc1a:	89 c3                	mov    %eax,%ebx
 810fc1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fc1f:	89 04 24             	mov    %eax,(%esp)
 810fc22:	e8 47 a7 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810fc27:	89 74 24 1c          	mov    %esi,0x1c(%esp)
 810fc2b:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 810fc2f:	89 44 24 14          	mov    %eax,0x14(%esp)
 810fc33:	c7 44 24 10 c4 c3 b4 	movl   $0x8b4c3c4,0x10(%esp)
 810fc3a:	08 
 810fc3b:	c7 44 24 0c 63 07 00 	movl   $0x763,0xc(%esp)
 810fc42:	00 
 810fc43:	c7 44 24 08 20 d3 b4 	movl   $0x8b4d320,0x8(%esp)
 810fc4a:	08 
 810fc4b:	c7 44 24 04 c0 c2 b4 	movl   $0x8b4c2c0,0x4(%esp)
 810fc52:	08 
 810fc53:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 810fc5a:	e8 ab 3f 9c 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 810fc5f:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 810fc63:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fc66:	89 04 24             	mov    %eax,(%esp)
 810fc69:	e8 dc 21 00 00       	call   8111e4a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEppEv>
 810fc6e:	8b 45 08             	mov    0x8(%ebp),%eax
 810fc71:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fc74:	8d 50 24             	lea    0x24(%eax),%edx
 810fc77:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810fc7a:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fc7e:	89 04 24             	mov    %eax,(%esp)
 810fc81:	e8 72 21 00 00       	call   8111df8 <_ZNSt6vectorISt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESaIS4_EE3endEv>
 810fc86:	83 ec 04             	sub    $0x4,%esp
 810fc89:	8d 45 ec             	lea    -0x14(%ebp),%eax
 810fc8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 810fc90:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fc93:	89 04 24             	mov    %eax,(%esp)
 810fc96:	e8 83 21 00 00       	call   8111e1e <_ZN9__gnu_cxxneIPSt4pairIN27PurchaseCashItemBonusScript17PurchaseBonusRuleE15Action_SendMailESt6vectorIS5_SaIS5_EEEEbRKNS_17__normal_iteratorIT_T0_EESF_>
 810fc9b:	84 c0                	test   %al,%al
 810fc9d:	0f 85 00 ff ff ff    	jne    810fba3 <_ZN13EventClassify22CPurchaseCashItemBonus23sendPurchaseBonusRewardEP5CUseri+0x6f>
 810fca3:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 810fca7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 810fcaa:	83 c4 00             	add    $0x0,%esp
 810fcad:	5b                   	pop    %ebx
 810fcae:	5e                   	pop    %esi
 810fcaf:	5d                   	pop    %ebp
 810fcb0:	c3                   	ret
 810fcb1:	90                   	nop

```

```c
// EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward @ 0x810fb34

/* EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int) */

undefined1 __thiscall
EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward
          (CPurchaseCashItemBonus *this,CUser *param_1,int param_2)

{
  undefined4 uVar1;
  char cVar2;
  bool bVar3;
  PurchaseBonusRule *pPVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
  local_20 [7];
  CEventActionMng local_19;
  __normal_iterator local_18 [4];
  int local_14;
  undefined1 local_d;
  
  if (param_1 == (CUser *)0x0) {
    LogManager::logFormat
              (1,"EventClassify.cpp",
               "bool EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)",
               0x755,"CPurchaseCashItemBonus::sendPurchaseBonusReward(pUser(NULL))");
    local_d = 0;
  }
  else {
    local_14 = 0;
    local_d = 1;
    std::
    vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>
    ::begin();
    while( true ) {
      std::
      vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>
      ::end();
      bVar3 = __gnu_cxx::operator!=(local_20,local_18);
      if (!bVar3) break;
      pPVar4 = (PurchaseBonusRule *)
               __gnu_cxx::
               __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
               ::operator->(local_20);
      cVar2 = verifyGiveBonusReward(this,pPVar4,param_2);
      if (cVar2 != '\0') {
        iVar5 = __gnu_cxx::
                __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
                ::operator->(local_20);
        local_14 = CEventActionMng::process_action_send_mail
                             (&local_19,param_1,(Action_SendMail *)(iVar5 + 0xc),true);
        if (local_14 != 0) {
          iVar5 = __gnu_cxx::
                  __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
                  ::operator->(local_20);
          uVar1 = *(undefined4 *)(iVar5 + 0x2c);
          uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar7 = CUser::get_acc_id(param_1);
          LogManager::logFormat
                    (1,"EventClassify.cpp",
                     "bool EventClassify::CPurchaseCashItemBonus::sendPurchaseBonusReward(CUser*, int)"
                     ,0x763,
                     "CPurchaseCashItemBonus::sendPurchaseBonusReward(m_id:%d, charac_no:%d, reward:%d)"
                     ,uVar7,uVar6,uVar1);
          local_d = 0;
        }
      }
      __gnu_cxx::
      __normal_iterator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>*,std::vector<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>,std::allocator<std::pair<PurchaseCashItemBonusScript::PurchaseBonusRule,Action_SendMail>>>>
      ::operator++(local_20);
    }
  }
  return local_d;
}

```

---

## set_event_data

```asm
// === 0810f996 EventClassify::CPurchaseCashItemBonus::set_event_data  [0x0810f996-0x810f9bf] ===
 810f996:	55                   	push   %ebp
 810f997:	89 e5                	mov    %esp,%ebp
 810f999:	83 ec 18             	sub    $0x18,%esp
 810f99c:	8b 45 08             	mov    0x8(%ebp),%eax
 810f99f:	8b 00                	mov    (%eax),%eax
 810f9a1:	83 c0 18             	add    $0x18,%eax
 810f9a4:	8b 08                	mov    (%eax),%ecx
 810f9a6:	8b 45 08             	mov    0x8(%ebp),%eax
 810f9a9:	8b 55 0c             	mov    0xc(%ebp),%edx
 810f9ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 810f9b0:	89 04 24             	mov    %eax,(%esp)
 810f9b3:	ff d1                	call   *%ecx
 810f9b5:	8b 55 10             	mov    0x10(%ebp),%edx
 810f9b8:	8b 45 08             	mov    0x8(%ebp),%eax
 810f9bb:	89 50 1c             	mov    %edx,0x1c(%eax)
 810f9be:	c9                   	leave
 810f9bf:	c3                   	ret

```

```c
// EventClassify::CPurchaseCashItemBonus::set_event_data @ 0x810f996

/* EventClassify::CPurchaseCashItemBonus::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CPurchaseCashItemBonus::set_event_data
          (CPurchaseCashItemBonus *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

---

## updateTargetGoodsCount

```asm
// === 0810f9ce EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount  [0x0810f9ce-0x810fadf] ===
 810f9ce:	55                   	push   %ebp
 810f9cf:	89 e5                	mov    %esp,%ebp
 810f9d1:	83 ec 48             	sub    $0x48,%esp
 810f9d4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 810f9d8:	75 42                	jne    810fa1c <_ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t+0x4e>
 810f9da:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810f9e1:	00 
 810f9e2:	c7 44 24 08 37 07 00 	movl   $0x737,0x8(%esp)
 810f9e9:	00 
 810f9ea:	c7 44 24 04 80 d3 b4 	movl   $0x8b4d380,0x4(%esp)
 810f9f1:	08 
 810f9f2:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810f9f5:	89 04 24             	mov    %eax,(%esp)
 810f9f8:	e8 1b fd 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810f9fd:	8b 45 10             	mov    0x10(%ebp),%eax
 810fa00:	89 44 24 08          	mov    %eax,0x8(%esp)
 810fa04:	c7 44 24 04 24 c3 b4 	movl   $0x8b4c324,0x4(%esp)
 810fa0b:	08 
 810fa0c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 810fa0f:	89 04 24             	mov    %eax,(%esp)
 810fa12:	e8 71 fd 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810fa17:	e9 c1 00 00 00       	jmp    810fadd <_ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t+0x10f>
 810fa1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fa1f:	89 04 24             	mov    %eax,(%esp)
 810fa22:	e8 47 a9 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810fa27:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810fa2a:	8b 45 14             	mov    0x14(%ebp),%eax
 810fa2d:	8b 40 08             	mov    0x8(%eax),%eax
 810fa30:	89 45 dc             	mov    %eax,-0x24(%ebp)
 810fa33:	8b 45 08             	mov    0x8(%ebp),%eax
 810fa36:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fa39:	8d 48 0c             	lea    0xc(%eax),%ecx
 810fa3c:	8d 45 c8             	lea    -0x38(%ebp),%eax
 810fa3f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 810fa42:	89 54 24 08          	mov    %edx,0x8(%esp)
 810fa46:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 810fa4a:	89 04 24             	mov    %eax,(%esp)
 810fa4d:	e8 e0 18 00 00       	call   8111332 <_ZNSt3setIjSt4lessIjESaIjEE4findERKj>
 810fa52:	83 ec 04             	sub    $0x4,%esp
 810fa55:	8b 45 08             	mov    0x8(%ebp),%eax
 810fa58:	8b 40 1c             	mov    0x1c(%eax),%eax
 810fa5b:	8d 50 0c             	lea    0xc(%eax),%edx
 810fa5e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810fa61:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fa65:	89 04 24             	mov    %eax,(%esp)
 810fa68:	e8 0b 18 00 00       	call   8111278 <_ZNKSt3setIjSt4lessIjESaIjEE3endEv>
 810fa6d:	83 ec 04             	sub    $0x4,%esp
 810fa70:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810fa73:	89 44 24 04          	mov    %eax,0x4(%esp)
 810fa77:	8d 45 c8             	lea    -0x38(%ebp),%eax
 810fa7a:	89 04 24             	mov    %eax,(%esp)
 810fa7d:	e8 1c 18 00 00       	call   811129e <_ZNKSt23_Rb_tree_const_iteratorIjEneERKS0_>
 810fa82:	84 c0                	test   %al,%al
 810fa84:	74 57                	je     810fadd <_ZN13EventClassify22CPurchaseCashItemBonus22updateTargetGoodsCountEP5CUserjP22stCeraShopIPGRequest_t+0x10f>
 810fa86:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fa89:	89 04 24             	mov    %eax,(%esp)
 810fa8c:	e8 05 92 fb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 810fa91:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810fa94:	89 54 24 04          	mov    %edx,0x4(%esp)
 810fa98:	89 04 24             	mov    %eax,(%esp)
 810fa9b:	e8 c0 ea 32 00       	call   843e560 <_ZN30DB_UpdatePurchaseCashItemBonus11makeRequestEij>
 810faa0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810faa7:	00 
 810faa8:	c7 44 24 08 42 07 00 	movl   $0x742,0x8(%esp)
 810faaf:	00 
 810fab0:	c7 44 24 04 80 d3 b4 	movl   $0x8b4d380,0x4(%esp)
 810fab7:	08 
 810fab8:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fabb:	89 04 24             	mov    %eax,(%esp)
 810fabe:	e8 55 fc 43 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810fac3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810fac6:	89 44 24 08          	mov    %eax,0x8(%esp)
 810faca:	c7 44 24 04 50 c3 b4 	movl   $0x8b4c350,0x4(%esp)
 810fad1:	08 
 810fad2:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 810fad5:	89 04 24             	mov    %eax,(%esp)
 810fad8:	e8 ab fc 43 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810fadd:	c9                   	leave
 810fade:	c3                   	ret
 810fadf:	90                   	nop

```

```c
// EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount @ 0x810f9ce

/* EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int,
   stCeraShopIPGRequest_t*) */

void __thiscall
EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount
          (CPurchaseCashItemBonus *this,CUser *param_1,uint param_2,stCeraShopIPGRequest_t *param_3)

{
  char cVar1;
  int iVar2;
  _Rb_tree_const_iterator<unsigned_int> local_3c [4];
  cMyTrace local_38 [16];
  undefined4 local_28;
  set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>> local_24 [4];
  cMyTrace local_20 [16];
  uint local_10;
  
  if (param_1 == (CUser *)0x0) {
    cMyTrace::cMyTrace(local_38,
                       "void EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)"
                       ,0x737,0);
    cMyTrace::operator()(local_38,"Purchase Error Not Found User(charac_no:%d)",param_2);
  }
  else {
    local_10 = CUser::get_acc_id(param_1);
    local_28 = *(undefined4 *)(param_3 + 8);
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::find
              ((uint *)local_3c);
    std::set<unsigned_int,std::less<unsigned_int>,std::allocator<unsigned_int>>::end(local_24);
    cVar1 = std::_Rb_tree_const_iterator<unsigned_int>::operator!=
                      (local_3c,(_Rb_tree_const_iterator *)local_24);
    if (cVar1 != '\0') {
      iVar2 = CUser::GetUID(param_1);
      DB_UpdatePurchaseCashItemBonus::makeRequest(iVar2,local_10);
      cMyTrace::cMyTrace(local_20,
                         "void EventClassify::CPurchaseCashItemBonus::updateTargetGoodsCount(CUser*, unsigned int, stCeraShopIPGRequest_t*)"
                         ,0x742,0);
      cMyTrace::operator()(local_20,"CPurchaseCashItemBonus::updateTargetGoodsCount(%d)",local_10);
    }
  }
  return;
}

```

---

## verifyGiveBonusReward

```asm
// === 0810fae0 EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward  [0x0810fae0-0x810fb33] ===
 810fae0:	55                   	push   %ebp
 810fae1:	89 e5                	mov    %esp,%ebp
 810fae3:	83 ec 04             	sub    $0x4,%esp
 810fae6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fae9:	8b 00                	mov    (%eax),%eax
 810faeb:	3b 45 10             	cmp    0x10(%ebp),%eax
 810faee:	7f 3d                	jg     810fb2d <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi+0x4d>
 810faf0:	8b 45 0c             	mov    0xc(%ebp),%eax
 810faf3:	8b 40 04             	mov    0x4(%eax),%eax
 810faf6:	3b 45 10             	cmp    0x10(%ebp),%eax
 810faf9:	7d 0a                	jge    810fb05 <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi+0x25>
 810fafb:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fafe:	8b 40 04             	mov    0x4(%eax),%eax
 810fb01:	85 c0                	test   %eax,%eax
 810fb03:	75 28                	jne    810fb2d <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi+0x4d>
 810fb05:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fb08:	8b 00                	mov    (%eax),%eax
 810fb0a:	8b 55 10             	mov    0x10(%ebp),%edx
 810fb0d:	29 c2                	sub    %eax,%edx
 810fb0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 810fb12:	8b 40 08             	mov    0x8(%eax),%eax
 810fb15:	89 45 fc             	mov    %eax,-0x4(%ebp)
 810fb18:	89 d0                	mov    %edx,%eax
 810fb1a:	c1 fa 1f             	sar    $0x1f,%edx
 810fb1d:	f7 7d fc             	idivl  -0x4(%ebp)
 810fb20:	89 d0                	mov    %edx,%eax
 810fb22:	85 c0                	test   %eax,%eax
 810fb24:	75 07                	jne    810fb2d <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi+0x4d>
 810fb26:	b8 01 00 00 00       	mov    $0x1,%eax
 810fb2b:	eb 05                	jmp    810fb32 <_ZN13EventClassify22CPurchaseCashItemBonus21verifyGiveBonusRewardERN27PurchaseCashItemBonusScript17PurchaseBonusRuleEi+0x52>
 810fb2d:	b8 00 00 00 00       	mov    $0x0,%eax
 810fb32:	c9                   	leave
 810fb33:	c3                   	ret

```

```c
// EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward @ 0x810fae0

/* EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward(PurchaseCashItemBonusScript::PurchaseBonusRule&,
   int) */

undefined4 __thiscall
EventClassify::CPurchaseCashItemBonus::verifyGiveBonusReward
          (CPurchaseCashItemBonus *this,PurchaseBonusRule *param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < *(int *)param_1) ||
     (((*(int *)(param_1 + 4) < param_2 && (*(int *)(param_1 + 4) != 0)) ||
      ((param_2 - *(int *)param_1) % *(int *)(param_1 + 8) != 0)))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

```

