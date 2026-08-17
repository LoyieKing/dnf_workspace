# Inter_CeraShopPurchaseCount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e7bfe Inter_CeraShopPurchaseCount::dispatch_sig  [0x084e7bfe-0x84e7c8f] ===
 84e7bfe:	55                   	push   %ebp
 84e7bff:	89 e5                	mov    %esp,%ebp
 84e7c01:	53                   	push   %ebx
 84e7c02:	83 ec 44             	sub    $0x44,%esp
 84e7c05:	8b 45 10             	mov    0x10(%ebp),%eax
 84e7c08:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e7c0b:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84e7c0f:	75 3d                	jne    84e7c4e <_ZN27Inter_CeraShopPurchaseCount12dispatch_sigEP5CUserPci+0x50>
 84e7c11:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e7c18:	00 
 84e7c19:	c7 44 24 08 96 6a 00 	movl   $0x6a96,0x8(%esp)
 84e7c20:	00 
 84e7c21:	c7 44 24 04 00 b5 c8 	movl   $0x8c8b500,0x4(%esp)
 84e7c28:	08 
 84e7c29:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e7c2c:	89 04 24             	mov    %eax,(%esp)
 84e7c2f:	e8 e4 7a 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e7c34:	c7 44 24 04 58 a3 c8 	movl   $0x8c8a358,0x4(%esp)
 84e7c3b:	08 
 84e7c3c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e7c3f:	89 04 24             	mov    %eax,(%esp)
 84e7c42:	e8 41 7b 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e7c47:	b8 97 6a 00 00       	mov    $0x6a97,%eax
 84e7c4c:	eb 3b                	jmp    84e7c89 <_ZN27Inter_CeraShopPurchaseCount12dispatch_sigEP5CUserPci+0x8b>
 84e7c4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7c51:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e7c55:	0f b7 d8             	movzwl %ax,%ebx
 84e7c58:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7c5b:	8b 48 0c             	mov    0xc(%eax),%ecx
 84e7c5e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e7c61:	8b 50 04             	mov    0x4(%eax),%edx
 84e7c64:	a1 60 f7 41 09       	mov    0x941f760,%eax
 84e7c69:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e7c6d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e7c71:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e7c75:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e7c78:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e7c7c:	89 04 24             	mov    %eax,(%esp)
 84e7c7f:	e8 84 22 c9 ff       	call   8179f08 <_ZN18ItemVendingMachine24ProcessPurcahseBonusItemEP5CUsermit>
 84e7c84:	b8 00 00 00 00       	mov    $0x0,%eax
 84e7c89:	83 c4 44             	add    $0x44,%esp
 84e7c8c:	5b                   	pop    %ebx
 84e7c8d:	5d                   	pop    %ebp
 84e7c8e:	c3                   	ret
 84e7c8f:	90                   	nop

```

```c
// Inter_CeraShopPurchaseCount::dispatch_sig @ 0x84e7bfe

/* Inter_CeraShopPurchaseCount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CeraShopPurchaseCount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_20 [16];
  int local_10;
  
  local_10 = param_3;
  if (param_3 == 0) {
    cMyTrace::cMyTrace(local_20,
                       "virtual int Inter_CeraShopPurchaseCount::dispatch_sig(CUser*, char*, int)",
                       0x6a96,5);
    cMyTrace::operator()(local_20,"[PURCAHSE BONUS] internal data is null.");
    uVar1 = 0x6a97;
  }
  else {
    ItemVendingMachine::ProcessPurcahseBonusItem
              (GlobalData::s_pItemVendingMachine,(CUser *)param_2,*(ulong *)(param_3 + 4),
               *(int *)(param_3 + 0xc),*(ushort *)(param_3 + 8));
    uVar1 = 0;
  }
  return uVar1;
}

```

