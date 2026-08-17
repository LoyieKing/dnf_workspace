# APSystem__Inter_LoadRewardMedal

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## SendMail

```asm
// === 08124ea0 APSystem::Inter_LoadRewardMedal::SendMail  [0x08124ea0-0x812513b] ===
 8124ea0:	55                   	push   %ebp
 8124ea1:	89 e5                	mov    %esp,%ebp
 8124ea3:	56                   	push   %esi
 8124ea4:	53                   	push   %ebx
 8124ea5:	81 ec b0 01 00 00    	sub    $0x1b0,%esp
 8124eab:	0f b6 05 7c f0 3f 09 	movzbl 0x93ff07c,%eax
 8124eb2:	0f b6 d8             	movzbl %al,%ebx
 8124eb5:	e8 e1 72 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8124eba:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8124ebe:	89 04 24             	mov    %eax,(%esp)
 8124ec1:	e8 08 dc ff ff       	call   8122ace <_ZN12CDataManager26GetActionPointEtcParameterEb>
 8124ec6:	83 c0 60             	add    $0x60,%eax
 8124ec9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8124ecc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124ecf:	89 04 24             	mov    %eax,(%esp)
 8124ed2:	e8 b5 08 00 00       	call   812578c <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EE4sizeEv>
 8124ed7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8124eda:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8124ee1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8124ee8:	e9 c5 00 00 00       	jmp    8124fb2 <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x112>
 8124eed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124ef0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124ef4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124ef7:	89 04 24             	mov    %eax,(%esp)
 8124efa:	e8 ad 08 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124eff:	0f b7 00             	movzwl (%eax),%eax
 8124f02:	0f b7 c0             	movzwl %ax,%eax
 8124f05:	3b 45 10             	cmp    0x10(%ebp),%eax
 8124f08:	77 25                	ja     8124f2f <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x8f>
 8124f0a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124f0d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124f11:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124f14:	89 04 24             	mov    %eax,(%esp)
 8124f17:	e8 90 08 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124f1c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8124f20:	0f b7 c0             	movzwl %ax,%eax
 8124f23:	3b 45 10             	cmp    0x10(%ebp),%eax
 8124f26:	72 07                	jb     8124f2f <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x8f>
 8124f28:	b8 01 00 00 00       	mov    $0x1,%eax
 8124f2d:	eb 05                	jmp    8124f34 <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x94>
 8124f2f:	b8 00 00 00 00       	mov    $0x0,%eax
 8124f34:	84 c0                	test   %al,%al
 8124f36:	74 17                	je     8124f4f <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0xaf>
 8124f38:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124f3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124f3f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124f42:	89 04 24             	mov    %eax,(%esp)
 8124f45:	e8 62 08 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124f4a:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8124f4d:	eb 74                	jmp    8124fc3 <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x123>
 8124f4f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124f52:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124f56:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124f59:	89 04 24             	mov    %eax,(%esp)
 8124f5c:	e8 4b 08 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124f61:	0f b7 00             	movzwl (%eax),%eax
 8124f64:	0f b7 c0             	movzwl %ax,%eax
 8124f67:	3b 45 10             	cmp    0x10(%ebp),%eax
 8124f6a:	77 22                	ja     8124f8e <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0xee>
 8124f6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124f6f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124f73:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124f76:	89 04 24             	mov    %eax,(%esp)
 8124f79:	e8 2e 08 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124f7e:	0f b7 00             	movzwl (%eax),%eax
 8124f81:	66 83 f8 64          	cmp    $0x64,%ax
 8124f85:	75 07                	jne    8124f8e <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0xee>
 8124f87:	b8 01 00 00 00       	mov    $0x1,%eax
 8124f8c:	eb 05                	jmp    8124f93 <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0xf3>
 8124f8e:	b8 00 00 00 00       	mov    $0x0,%eax
 8124f93:	84 c0                	test   %al,%al
 8124f95:	74 17                	je     8124fae <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x10e>
 8124f97:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124f9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124f9e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8124fa1:	89 04 24             	mov    %eax,(%esp)
 8124fa4:	e8 03 08 00 00       	call   81257ac <_ZNKSt6vectorIN8APSystem16_MedalRewardItemESaIS1_EEixEj>
 8124fa9:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8124fac:	eb 15                	jmp    8124fc3 <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x123>
 8124fae:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8124fb2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8124fb5:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8124fb8:	0f 92 c0             	setb   %al
 8124fbb:	84 c0                	test   %al,%al
 8124fbd:	0f 85 2a ff ff ff    	jne    8124eed <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x4d>
 8124fc3:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8124fc7:	0f 84 5f 01 00 00    	je     812512c <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x28c>
 8124fcd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8124fd0:	8b 40 04             	mov    0x4(%eax),%eax
 8124fd3:	89 c3                	mov    %eax,%ebx
 8124fd5:	e8 c1 71 fa ff       	call   80cc19b <_Z14G_CDataManagerv>
 8124fda:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8124fde:	89 04 24             	mov    %eax,(%esp)
 8124fe1:	e8 4c aa 23 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8124fe6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8124fe9:	8d 45 85             	lea    -0x7b(%ebp),%eax
 8124fec:	89 04 24             	mov    %eax,(%esp)
 8124fef:	e8 60 68 fa ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8124ff4:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8124ff8:	0f 84 2e 01 00 00    	je     812512c <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x28c>
 8124ffe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8125001:	8b 00                	mov    (%eax),%eax
 8125003:	83 c0 08             	add    $0x8,%eax
 8125006:	8b 10                	mov    (%eax),%edx
 8125008:	8d 45 85             	lea    -0x7b(%ebp),%eax
 812500b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812500f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8125012:	89 04 24             	mov    %eax,(%esp)
 8125015:	ff d2                	call   *%edx
 8125017:	8b 45 e8             	mov    -0x18(%ebp),%eax
 812501a:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 812501e:	0f b7 c0             	movzwl %ax,%eax
 8125021:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8125024:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8125027:	8b 40 04             	mov    0x4(%eax),%eax
 812502a:	89 45 87             	mov    %eax,-0x79(%ebp)
 812502d:	c7 45 f4 08 00 00 00 	movl   $0x8,-0xc(%ebp)
 8125034:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 812503b:	00 
 812503c:	c7 44 24 08 5b e6 b5 	movl   $0x8b5e65b,0x8(%esp)
 8125043:	08 
 8125044:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 812504b:	00 
 812504c:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8125053:	e8 a6 07 98 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8125058:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 812505f:	00 
 8125060:	89 44 24 04          	mov    %eax,0x4(%esp)
 8125064:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 8125067:	89 04 24             	mov    %eax,(%esp)
 812506a:	e8 61 88 f5 ff       	call   807d8d0 <strncpy@plt>
 812506f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8125076:	00 
 8125077:	c7 44 24 08 72 e6 b5 	movl   $0x8b5e672,0x8(%esp)
 812507e:	08 
 812507f:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8125086:	00 
 8125087:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 812508e:	e8 6b 07 98 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8125093:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 812509a:	00 
 812509b:	89 44 24 04          	mov    %eax,0x4(%esp)
 812509f:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 81250a5:	89 04 24             	mov    %eax,(%esp)
 81250a8:	e8 23 88 f5 ff       	call   807d8d0 <strncpy@plt>
 81250ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 81250b0:	89 04 24             	mov    %eax,(%esp)
 81250b3:	e8 d8 6b fa ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81250b8:	89 c3                	mov    %eax,%ebx
 81250ba:	8d 85 85 fe ff ff    	lea    -0x17b(%ebp),%eax
 81250c0:	89 04 24             	mov    %eax,(%esp)
 81250c3:	e8 e8 92 f5 ff       	call   807e3b0 <strlen@plt>
 81250c8:	89 c6                	mov    %eax,%esi
 81250ca:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 81250d1:	ff 
 81250d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81250d5:	89 04 24             	mov    %eax,(%esp)
 81250d8:	e8 c3 8e 52 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 81250dd:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 81250e4:	00 
 81250e5:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 81250ec:	00 
 81250ed:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 81250f1:	c7 44 24 18 08 00 00 	movl   $0x8,0x18(%esp)
 81250f8:	00 
 81250f9:	89 74 24 14          	mov    %esi,0x14(%esp)
 81250fd:	8d 95 85 fe ff ff    	lea    -0x17b(%ebp),%edx
 8125103:	89 54 24 10          	mov    %edx,0x10(%esp)
 8125107:	89 44 24 0c          	mov    %eax,0xc(%esp)
 812510b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8125112:	00 
 8125113:	8d 45 85             	lea    -0x7b(%ebp),%eax
 8125116:	89 44 24 04          	mov    %eax,0x4(%esp)
 812511a:	8d 45 c2             	lea    -0x3e(%ebp),%eax
 812511d:	89 04 24             	mov    %eax,(%esp)
 8125120:	e8 c3 04 43 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8125125:	b8 01 00 00 00       	mov    $0x1,%eax
 812512a:	eb 05                	jmp    8125131 <_ZN8APSystem21Inter_LoadRewardMedal8SendMailER5CUserj+0x291>
 812512c:	b8 00 00 00 00       	mov    $0x0,%eax
 8125131:	81 c4 b0 01 00 00    	add    $0x1b0,%esp
 8125137:	5b                   	pop    %ebx
 8125138:	5e                   	pop    %esi
 8125139:	5d                   	pop    %ebp
 812513a:	c3                   	ret
 812513b:	90                   	nop

```

```c
// APSystem::Inter_LoadRewardMedal::SendMail @ 0x8124ea0

/* APSystem::Inter_LoadRewardMedal::SendMail(CUser&, unsigned int) */

undefined4 __thiscall
APSystem::Inter_LoadRewardMedal::SendMail(Inter_LoadRewardMedal *this,CUser *param_1,uint param_2)

{
  bool bVar1;
  CDataManager *pCVar2;
  int iVar3;
  ushort *puVar4;
  short *psVar5;
  char *pcVar6;
  undefined4 uVar7;
  size_t sVar8;
  undefined4 uVar9;
  char local_17f [256];
  Inven_Item local_7f [2];
  undefined4 local_7d;
  uint local_78;
  char local_42 [30];
  vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *local_24;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  
  bVar1 = (bool)CActionPointManager::_IsGMOn;
  pCVar2 = (CDataManager *)G_CDataManager();
  iVar3 = CDataManager::GetActionPointEtcParameter(pCVar2,bVar1);
  local_24 = (vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>> *)
             (iVar3 + 0x60);
  local_20 = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             size(local_24);
  local_1c = 0;
  local_18 = 0;
  do {
    if (local_20 <= local_18) {
LAB_08124fc3:
      if (local_1c != 0) {
        iVar3 = *(int *)(local_1c + 4);
        pCVar2 = (CDataManager *)G_CDataManager();
        local_14 = (int *)CDataManager::find_item(pCVar2,iVar3);
        Inven_Item::Inven_Item(local_7f);
        if (local_14 != (int *)0x0) {
          (**(code **)(*local_14 + 8))(local_14,local_7f);
          local_78 = (uint)*(ushort *)(local_1c + 8);
          local_7d = *(undefined4 *)(local_1c + 4);
          local_10 = 8;
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_82",(bool *)0x0);
          strncpy(local_42,pcVar6,0x1d);
          pcVar6 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "chn_game_server_msg_83",(bool *)0x0);
          strncpy(local_17f,pcVar6,0xff);
          uVar7 = CUser::GetServerGroup(param_1);
          sVar8 = strlen(local_17f);
          uVar9 = CUser::get_charac_no(param_1,-1);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (local_42,local_7f,0,uVar9,local_17f,sVar8,8,uVar7,0,0);
          return 1;
        }
      }
      return 0;
    }
    puVar4 = (ushort *)
             std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             operator[](local_24,local_18);
    if ((param_2 < *puVar4) ||
       (iVar3 = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
                operator[](local_24,local_18), *(ushort *)(iVar3 + 2) < param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_1c = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                 ::operator[](local_24,local_18);
      goto LAB_08124fc3;
    }
    puVar4 = (ushort *)
             std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>::
             operator[](local_24,local_18);
    if ((param_2 < *puVar4) ||
       (psVar5 = (short *)std::
                          vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                          ::operator[](local_24,local_18), *psVar5 != 100)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      local_1c = std::vector<APSystem::_MedalRewardItem,std::allocator<APSystem::_MedalRewardItem>>
                 ::operator[](local_24,local_18);
      goto LAB_08124fc3;
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## dispatch_sig

```asm
// === 08124e2a APSystem::Inter_LoadRewardMedal::dispatch_sig  [0x08124e2a-0x8124e9f] ===
 8124e2a:	55                   	push   %ebp
 8124e2b:	89 e5                	mov    %esp,%ebp
 8124e2d:	83 ec 28             	sub    $0x28,%esp
 8124e30:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8124e34:	74 1e                	je     8124e54 <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x2a>
 8124e36:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124e39:	89 04 24             	mov    %eax,(%esp)
 8124e3c:	e8 4b 55 fb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8124e41:	85 c0                	test   %eax,%eax
 8124e43:	74 0f                	je     8124e54 <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x2a>
 8124e45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124e48:	89 04 24             	mov    %eax,(%esp)
 8124e4b:	e8 e2 b5 ff ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8124e50:	85 c0                	test   %eax,%eax
 8124e52:	75 07                	jne    8124e5b <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x31>
 8124e54:	b8 01 00 00 00       	mov    $0x1,%eax
 8124e59:	eb 05                	jmp    8124e60 <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x36>
 8124e5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8124e60:	84 c0                	test   %al,%al
 8124e62:	74 07                	je     8124e6b <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x41>
 8124e64:	b8 26 02 00 00       	mov    $0x226,%eax
 8124e69:	eb 32                	jmp    8124e9d <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x73>
 8124e6b:	8b 45 10             	mov    0x10(%ebp),%eax
 8124e6e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8124e71:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8124e75:	75 07                	jne    8124e7e <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x54>
 8124e77:	b8 2b 02 00 00       	mov    $0x22b,%eax
 8124e7c:	eb 1f                	jmp    8124e9d <_ZN8APSystem21Inter_LoadRewardMedal12dispatch_sigEP5CUserPci+0x73>
 8124e7e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124e81:	89 04 24             	mov    %eax,(%esp)
 8124e84:	e8 0d 3e fa ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8124e89:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8124e8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8124e90:	89 04 24             	mov    %eax,(%esp)
 8124e93:	e8 d8 fd ff ff       	call   8124c70 <_ZN8APSystem20DB_UpdateRewardMedal11makeRequestEiRKNS_22_SIG_LOAD_REWARD_MEDALE>
 8124e98:	b8 00 00 00 00       	mov    $0x0,%eax
 8124e9d:	c9                   	leave
 8124e9e:	c3                   	ret
 8124e9f:	90                   	nop

```

```c
// APSystem::Inter_LoadRewardMedal::dispatch_sig @ 0x8124e2a

/* APSystem::Inter_LoadRewardMedal::dispatch_sig(CUser*, char*, int) */

undefined4 APSystem::Inter_LoadRewardMedal::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != (char *)0x0) {
    iVar2 = CUser::get_state((CUser *)param_2);
    if (iVar2 != 0) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_08124e60;
      }
    }
  }
  bVar1 = true;
LAB_08124e60:
  if (bVar1) {
    uVar3 = 0x226;
  }
  else if (param_3 == 0) {
    uVar3 = 0x22b;
  }
  else {
    iVar2 = CUser::GetUID((CUser *)param_2);
    DB_UpdateRewardMedal::makeRequest(iVar2,(_SIG_LOAD_REWARD_MEDAL *)param_3);
    uVar3 = 0;
  }
  return uVar3;
}

```

