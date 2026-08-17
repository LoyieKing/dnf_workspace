# Inter_UpdatePurchaseCashItemBonus

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e42e0 Inter_UpdatePurchaseCashItemBonus::dispatch_sig  [0x084e42e0-0x84e4341] ===
 84e42e0:	55                   	push   %ebp
 84e42e1:	89 e5                	mov    %esp,%ebp
 84e42e3:	53                   	push   %ebx
 84e42e4:	83 ec 24             	sub    $0x24,%esp
 84e42e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e42ea:	89 04 24             	mov    %eax,(%esp)
 84e42ed:	e8 9a 60 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e42f2:	83 f8 02             	cmp    $0x2,%eax
 84e42f5:	0f 9e c0             	setle  %al
 84e42f8:	84 c0                	test   %al,%al
 84e42fa:	74 07                	je     84e4303 <_ZN33Inter_UpdatePurchaseCashItemBonus12dispatch_sigEP5CUserPci+0x23>
 84e42fc:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4301:	eb 39                	jmp    84e433c <_ZN33Inter_UpdatePurchaseCashItemBonus12dispatch_sigEP5CUserPci+0x5c>
 84e4303:	8b 45 10             	mov    0x10(%ebp),%eax
 84e4306:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e4309:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e430c:	8b 00                	mov    (%eax),%eax
 84e430e:	85 c0                	test   %eax,%eax
 84e4310:	74 25                	je     84e4337 <_ZN33Inter_UpdatePurchaseCashItemBonus12dispatch_sigEP5CUserPci+0x57>
 84e4312:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e4315:	8b 18                	mov    (%eax),%ebx
 84e4317:	e8 7f 7e be ff       	call   80cc19b <_Z14G_CDataManagerv>
 84e431c:	89 04 24             	mov    %eax,(%esp)
 84e431f:	e8 3e c8 c2 ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 84e4324:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e4328:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e432b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e432f:	89 04 24             	mov    %eax,(%esp)
 84e4332:	e8 9d 7f c2 ff       	call   810c2d4 <_ZN13EventClassify15CEventScriptMng24send_purchase_bonus_mailEP5CUserj>
 84e4337:	b8 00 00 00 00       	mov    $0x0,%eax
 84e433c:	83 c4 24             	add    $0x24,%esp
 84e433f:	5b                   	pop    %ebx
 84e4340:	5d                   	pop    %ebp
 84e4341:	c3                   	ret

```

```c
// Inter_UpdatePurchaseCashItemBonus::dispatch_sig @ 0x84e42e0

/* Inter_UpdatePurchaseCashItemBonus::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpdatePurchaseCashItemBonus::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  CDataManager *this;
  CEventScriptMng *this_00;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar2) && (*(int *)param_3 != 0)) {
    uVar1 = *(uint *)param_3;
    this = (CDataManager *)G_CDataManager();
    this_00 = (CEventScriptMng *)CDataManager::get_event_script_mng(this);
    EventClassify::CEventScriptMng::send_purchase_bonus_mail(this_00,(CUser *)param_2,uVar1);
  }
  return 0;
}

```

