# InterInsertGiveBoxEventReward

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08161a8a InterInsertGiveBoxEventReward::dispatch_sig  [0x08161a8a-0x8161c91] ===
 8161a8a:	55                   	push   %ebp
 8161a8b:	89 e5                	mov    %esp,%ebp
 8161a8d:	56                   	push   %esi
 8161a8e:	53                   	push   %ebx
 8161a8f:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 8161a95:	8b 45 10             	mov    0x10(%ebp),%eax
 8161a98:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8161a9b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8161a9f:	75 40                	jne    8161ae1 <_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci+0x57>
 8161aa1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8161aa8:	00 
 8161aa9:	c7 44 24 08 dc 01 00 	movl   $0x1dc,0x8(%esp)
 8161ab0:	00 
 8161ab1:	c7 44 24 04 a0 a7 b7 	movl   $0x8b7a7a0,0x4(%esp)
 8161ab8:	08 
 8161ab9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8161abc:	89 04 24             	mov    %eax,(%esp)
 8161abf:	e8 54 dc 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8161ac4:	c7 44 24 04 78 9a b7 	movl   $0x8b79a78,0x4(%esp)
 8161acb:	08 
 8161acc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8161acf:	89 04 24             	mov    %eax,(%esp)
 8161ad2:	e8 b1 dc 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8161ad7:	b8 dd 01 00 00       	mov    $0x1dd,%eax
 8161adc:	e9 a7 01 00 00       	jmp    8161c88 <_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci+0x1fe>
 8161ae1:	a1 30 f7 41 09       	mov    0x941f730,%eax
 8161ae6:	c7 44 24 04 a5 00 00 	movl   $0xa5,0x4(%esp)
 8161aed:	00 
 8161aee:	89 04 24             	mov    %eax,(%esp)
 8161af1:	e8 a2 3e fb ff       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 8161af6:	8b 10                	mov    (%eax),%edx
 8161af8:	83 c2 34             	add    $0x34,%edx
 8161afb:	8b 12                	mov    (%edx),%edx
 8161afd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8161b04:	00 
 8161b05:	89 04 24             	mov    %eax,(%esp)
 8161b08:	ff d2                	call   *%edx
 8161b0a:	83 f0 01             	xor    $0x1,%eax
 8161b0d:	84 c0                	test   %al,%al
 8161b0f:	74 0a                	je     8161b1b <_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci+0x91>
 8161b11:	b8 00 00 00 00       	mov    $0x0,%eax
 8161b16:	e9 6d 01 00 00       	jmp    8161c88 <_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci+0x1fe>
 8161b1b:	a1 20 cd b7 08       	mov    0x8b7cd20,%eax
 8161b20:	89 c3                	mov    %eax,%ebx
 8161b22:	e8 74 a6 f6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8161b27:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8161b2b:	89 04 24             	mov    %eax,(%esp)
 8161b2e:	e8 ff de 1f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 8161b33:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8161b36:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8161b3a:	75 4a                	jne    8161b86 <_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci+0xfc>
 8161b3c:	8b 1d 20 cd b7 08    	mov    0x8b7cd20,%ebx
 8161b42:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8161b49:	00 
 8161b4a:	c7 44 24 08 e6 01 00 	movl   $0x1e6,0x8(%esp)
 8161b51:	00 
 8161b52:	c7 44 24 04 a0 a7 b7 	movl   $0x8b7a7a0,0x4(%esp)
 8161b59:	08 
 8161b5a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8161b5d:	89 04 24             	mov    %eax,(%esp)
 8161b60:	e8 b3 db 3e 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8161b65:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8161b69:	c7 44 24 04 a0 9a b7 	movl   $0x8b79aa0,0x4(%esp)
 8161b70:	08 
 8161b71:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8161b74:	89 04 24             	mov    %eax,(%esp)
 8161b77:	e8 0c dc 3e 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8161b7c:	b8 00 00 00 00       	mov    $0x0,%eax
 8161b81:	e9 02 01 00 00       	jmp    8161c88 <_ZN29InterInsertGiveBoxEventReward12dispatch_sigEP5CUserPci+0x1fe>
 8161b86:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8161b89:	89 04 24             	mov    %eax,(%esp)
 8161b8c:	e8 c3 9c f6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 8161b91:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8161b94:	89 04 24             	mov    %eax,(%esp)
 8161b97:	e8 ac f0 fa ff       	call   8110c48 <_ZNK5CItem9get_indexEv>
 8161b9c:	89 45 8d             	mov    %eax,-0x73(%ebp)
 8161b9f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8161ba2:	8b 00                	mov    (%eax),%eax
 8161ba4:	83 c0 08             	add    $0x8,%eax
 8161ba7:	8b 10                	mov    (%eax),%edx
 8161ba9:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8161bac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8161bb0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8161bb3:	89 04 24             	mov    %eax,(%esp)
 8161bb6:	ff d2                	call   *%edx
 8161bb8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8161bbf:	00 
 8161bc0:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8161bc3:	89 04 24             	mov    %eax,(%esp)
 8161bc6:	e8 b9 9c f6 ff       	call   80cb884 <_ZN10Inven_Item12set_add_infoEi>
 8161bcb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8161bd2:	00 
 8161bd3:	c7 44 24 08 d2 9a b7 	movl   $0x8b79ad2,0x8(%esp)
 8161bda:	08 
 8161bdb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8161be2:	00 
 8161be3:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8161bea:	e8 0f 3c 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8161bef:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8161bf2:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8161bf9:	00 
 8161bfa:	c7 44 24 08 e6 9a b7 	movl   $0x8b79ae6,0x8(%esp)
 8161c01:	08 
 8161c02:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8161c09:	00 
 8161c0a:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8161c11:	e8 e8 3b 94 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 8161c16:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8161c19:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161c1c:	89 04 24             	mov    %eax,(%esp)
 8161c1f:	e8 6c a0 f6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 8161c24:	89 c3                	mov    %eax,%ebx
 8161c26:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8161c29:	89 04 24             	mov    %eax,(%esp)
 8161c2c:	e8 7f c7 f1 ff       	call   807e3b0 <strlen@plt>
 8161c31:	89 c6                	mov    %eax,%esi
 8161c33:	8b 45 0c             	mov    0xc(%ebp),%eax
 8161c36:	89 04 24             	mov    %eax,(%esp)
 8161c39:	e8 10 a0 f6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8161c3e:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 8161c45:	00 
 8161c46:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 8161c4d:	00 
 8161c4e:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 8161c52:	c7 44 24 18 0e 00 00 	movl   $0xe,0x18(%esp)
 8161c59:	00 
 8161c5a:	89 74 24 14          	mov    %esi,0x14(%esp)
 8161c5e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8161c61:	89 54 24 10          	mov    %edx,0x10(%esp)
 8161c65:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8161c69:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8161c70:	00 
 8161c71:	8d 45 8b             	lea    -0x75(%ebp),%eax
 8161c74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8161c78:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8161c7b:	89 04 24             	mov    %eax,(%esp)
 8161c7e:	e8 65 39 3f 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 8161c83:	b8 00 00 00 00       	mov    $0x0,%eax
 8161c88:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 8161c8e:	5b                   	pop    %ebx
 8161c8f:	5e                   	pop    %esi
 8161c90:	5d                   	pop    %ebp
 8161c91:	c3                   	ret

```

```c
// InterInsertGiveBoxEventReward::dispatch_sig @ 0x8161a8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int) */

undefined4 InterInsertGiveBoxEventReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                       "virtual int InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int)"
                       ,0x1dc,5);
    cMyTrace::operator()(local_3c,"[Taiwan, GiveMeBoxEvent] msg is null.");
    uVar3 = 0x1dd;
  }
  else {
    piVar4 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0xa5);
    cVar2 = (**(code **)(*piVar4 + 0x34))(piVar4,0);
    iVar1 = _kRewardItem_;
    if (cVar2 == '\x01') {
      this = (CDataManager *)G_CDataManager();
      local_18 = (CItem *)CDataManager::find_item(this,iVar1);
      iVar1 = _kRewardItem_;
      if (local_18 == (CItem *)0x0) {
        cMyTrace::cMyTrace(local_2c,
                           "virtual int InterInsertGiveBoxEventReward::dispatch_sig(CUser*, char*, int)"
                           ,0x1e6,5);
        cMyTrace::operator()(local_2c,"[Taiwan, GiveMeBoxEvent] Invalid item index. (%u)",iVar1);
        uVar3 = 0;
      }
      else {
        Inven_Item::Inven_Item(local_79);
        local_77 = CItem::get_index(local_18);
        (**(code **)(*(int *)local_18 + 8))(local_18,local_79);
        Inven_Item::set_add_info(local_79,1);
        local_14 = RDARScriptStringManager::findString
                             ((RDARScriptStringManager *)g_scriptStringManager_,4,
                              "tw_givemebox2_title",(bool *)0x0);
        local_10 = (char *)RDARScriptStringManager::findString
                                     ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                      "tw_givemebox2_mail",(bool *)0x0);
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

