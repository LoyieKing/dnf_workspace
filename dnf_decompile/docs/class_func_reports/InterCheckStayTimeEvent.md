# InterCheckStayTimeEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08160a42 InterCheckStayTimeEvent::dispatch_sig  [0x08160a42-0x8160c49] ===
 8160a42:	55                   	push   %ebp
 8160a43:	89 e5                	mov    %esp,%ebp
 8160a45:	56                   	push   %esi
 8160a46:	53                   	push   %ebx
 8160a47:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 8160a4d:	8b 45 10             	mov    0x10(%ebp),%eax
 8160a50:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8160a53:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8160a57:	75 40                	jne    8160a99 <_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci+0x57>
 8160a59:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8160a60:	00 
 8160a61:	c7 44 24 08 c9 00 00 	movl   $0xc9,0x8(%esp)
 8160a68:	00 
 8160a69:	c7 44 24 04 00 ab b7 	movl   $0x8b7ab00,0x4(%esp)
 8160a70:	08 
 8160a71:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8160a74:	89 04 24             	mov    %eax,(%esp)
 8160a77:	e8 9c ec 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8160a7c:	c7 44 24 04 f8 97 b7 	movl   $0x8b797f8,0x4(%esp)
 8160a83:	08 
 8160a84:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8160a87:	89 04 24             	mov    %eax,(%esp)
 8160a8a:	e8 f9 ec 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8160a8f:	b8 ca 00 00 00       	mov    $0xca,%eax
 8160a94:	e9 a7 01 00 00       	jmp    8160c40 <_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci+0x1fe>
 8160a99:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8160a9e:	c7 44 24 04 9f 00 00 	movl   $0x9f,0x4(%esp)
 8160aa5:	00 
 8160aa6:	89 04 24             	mov    %eax,(%esp)
 8160aa9:	e8 ea 4e fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8160aae:	8b 10                	mov    (%eax),%edx
 8160ab0:	83 c2 34             	add    $0x34,%edx
 8160ab3:	8b 12                	mov    (%edx),%edx
 8160ab5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8160abc:	00 
 8160abd:	89 04 24             	mov    %eax,(%esp)
 8160ac0:	ff d2                	call   *%edx
 8160ac2:	83 f0 01             	xor    $0x1,%eax
 8160ac5:	84 c0                	test   %al,%al
 8160ac7:	74 0a                	je     8160ad3 <_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci+0x91>
 8160ac9:	b8 00 00 00 00       	mov    $0x0,%eax
 8160ace:	e9 6d 01 00 00       	jmp    8160c40 <_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci+0x1fe>
 8160ad3:	a1 a0 00 b8 08       	mov    0x8b800a0,%eax
 8160ad8:	89 c3                	mov    %eax,%ebx
 8160ada:	e8 bc b6 f6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8160adf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8160ae3:	89 04 24             	mov    %eax,(%esp)
 8160ae6:	e8 47 ef 1f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8160aeb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8160aee:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8160af2:	75 4a                	jne    8160b3e <_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci+0xfc>
 8160af4:	8b 1d a0 00 b8 08    	mov    0x8b800a0,%ebx
 8160afa:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8160b01:	00 
 8160b02:	c7 44 24 08 d3 00 00 	movl   $0xd3,0x8(%esp)
 8160b09:	00 
 8160b0a:	c7 44 24 04 00 ab b7 	movl   $0x8b7ab00,0x4(%esp)
 8160b11:	08 
 8160b12:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8160b15:	89 04 24             	mov    %eax,(%esp)
 8160b18:	e8 fb eb 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8160b1d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8160b21:	c7 44 24 04 28 98 b7 	movl   $0x8b79828,0x4(%esp)
 8160b28:	08 
 8160b29:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8160b2c:	89 04 24             	mov    %eax,(%esp)
 8160b2f:	e8 54 ec 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8160b34:	b8 00 00 00 00       	mov    $0x0,%eax
 8160b39:	e9 02 01 00 00       	jmp    8160c40 <_ZN23InterCheckStayTimeEvent12dispatch_sigEP5CUserPci+0x1fe>
 8160b3e:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8160b41:	89 04 24             	mov    %eax,(%esp)
 8160b44:	e8 0b ad f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8160b49:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8160b4c:	89 04 24             	mov    %eax,(%esp)
 8160b4f:	e8 f4 00 fb ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8160b54:	89 45 8d             	mov    %eax,-0x73(%ebp)
 8160b57:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8160b5a:	8b 00                	mov    (%eax),%eax
 8160b5c:	83 c0 08             	add    $0x8,%eax
 8160b5f:	8b 10                	mov    (%eax),%edx
 8160b61:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8160b64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160b68:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8160b6b:	89 04 24             	mov    %eax,(%esp)
 8160b6e:	ff d2                	call   *%edx
 8160b70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8160b77:	00 
 8160b78:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8160b7b:	89 04 24             	mov    %eax,(%esp)
 8160b7e:	e8 01 ad f6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8160b83:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8160b8a:	00 
 8160b8b:	c7 44 24 08 55 98 b7 	movl   $0x8b79855,0x8(%esp)
 8160b92:	08 
 8160b93:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8160b9a:	00 
 8160b9b:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8160ba2:	e8 57 4c 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8160ba7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8160baa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8160bb1:	00 
 8160bb2:	c7 44 24 08 6c 98 b7 	movl   $0x8b7986c,0x8(%esp)
 8160bb9:	08 
 8160bba:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8160bc1:	00 
 8160bc2:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8160bc9:	e8 30 4c 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8160bce:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8160bd1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160bd4:	89 04 24             	mov    %eax,(%esp)
 8160bd7:	e8 b4 b0 f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8160bdc:	89 c3                	mov    %eax,%ebx
 8160bde:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8160be1:	89 04 24             	mov    %eax,(%esp)
 8160be4:	e8 c7 d7 f1 ff       	call   807e3b0 <strlen@plt>
 8160be9:	89 c6                	mov    %eax,%esi
 8160beb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8160bee:	89 04 24             	mov    %eax,(%esp)
 8160bf1:	e8 58 b0 f6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8160bf6:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8160bfd:	00 
 8160bfe:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8160c05:	00 
 8160c06:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8160c0a:	c7 44 24 18 0e 00 00 	movl   $0xe,0x18(%esp)
 8160c11:	00 
 8160c12:	89 74 24 14          	mov    %esi,0x14(%esp)
 8160c16:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8160c19:	89 54 24 10          	mov    %edx,0x10(%esp)
 8160c1d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8160c21:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8160c28:	00 
 8160c29:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8160c2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8160c30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8160c33:	89 04 24             	mov    %eax,(%esp)
 8160c36:	e8 ad 49 3f 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8160c3b:	b8 00 00 00 00       	mov    $0x0,%eax
 8160c40:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 8160c46:	5b                   	pop    %ebx
 8160c47:	5e                   	pop    %esi
 8160c48:	5d                   	pop    %ebp
 8160c49:	c3                   	ret

```

```c
// InterCheckStayTimeEvent::dispatch_sig @ 0x8160a42

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int) */

undefined4 InterCheckStayTimeEvent::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int *piVar4;
  CDataManager *this;
  size_t sVar5;
  undefined4 uVar6;
  Inven_Item local_79 [2];
  undefined4 local_77;
  cMyTrace local_3c [16];
  cMyTrace local_2c [16];
  int local_1c;
  CItem *local_18;
  undefined4 local_14;
  char *local_10;
  
  local_1c = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_3c,
                       "virtual int InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int)",0xc9,
                       5);
    cMyTrace::operator()(local_3c,"[Taiwan, StayEvent] SigStayTimeEvent is null.");
    uVar3 = 0xca;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x9f);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    iVar1 = _kRewardItem_;
    if (cVar2 == '\x01') {
      this = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(this,iVar1);
      iVar1 = _kRewardItem_;
      if (local_18 == (CItem *)0x0) {
        cMyTrace::cMyTrace(local_2c,
                           "virtual int InterCheckStayTimeEvent::dispatch_sig(CUser*, char*, int)",
                           0xd3,5);
        cMyTrace::operator()(local_2c,"[Taiwan, StayEvent] Invalid item index. (%u)",iVar1);
        uVar3 = 0;
      }
      else {
        Inven_Item::Inven_Item(local_79);
        local_77 = CItem::get_index(local_18);
        (**(code **)(*(int *)local_18 + 8))(local_18,local_79);
        Inven_Item::set_add_info(local_79,1);
        local_14 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "tw_ccb_stress_title_01",(bool *)0x0);
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "tw_ccb_stress_mail_01",(bool *)0x0);
        uVar3 = CUser::GetServerGroup((CUser *)param_2);
        sVar5 = strlen(local_10);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (local_14,local_79,0,uVar6,local_10,sVar5,0xe,uVar3,0,0);
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

