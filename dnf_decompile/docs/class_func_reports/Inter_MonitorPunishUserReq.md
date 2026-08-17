# Inter_MonitorPunishUserReq

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084db294 Inter_MonitorPunishUserReq::dispatch_sig  [0x084db294-0x84db40d] ===
 84db294:	55                   	push   %ebp
 84db295:	89 e5                	mov    %esp,%ebp
 84db297:	56                   	push   %esi
 84db298:	53                   	push   %ebx
 84db299:	83 ec 40             	sub    $0x40,%esp
 84db29c:	8b 45 10             	mov    0x10(%ebp),%eax
 84db29f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84db2a2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db2a5:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 84db2a9:	0f b7 f0             	movzwl %ax,%esi
 84db2ac:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db2af:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84db2b3:	0f be d8             	movsbl %al,%ebx
 84db2b6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db2bd:	00 
 84db2be:	c7 44 24 08 bc 43 00 	movl   $0x43bc,0x8(%esp)
 84db2c5:	00 
 84db2c6:	c7 44 24 04 a0 be c8 	movl   $0x8c8bea0,0x4(%esp)
 84db2cd:	08 
 84db2ce:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84db2d1:	89 04 24             	mov    %eax,(%esp)
 84db2d4:	e8 3f 44 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84db2d9:	89 74 24 0c          	mov    %esi,0xc(%esp)
 84db2dd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84db2e1:	c7 44 24 04 dc 97 c8 	movl   $0x8c897dc,0x4(%esp)
 84db2e8:	08 
 84db2e9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 84db2ec:	89 04 24             	mov    %eax,(%esp)
 84db2ef:	e8 94 44 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84db2f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db2f7:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 84db2fb:	84 c0                	test   %al,%al
 84db2fd:	0f 85 ff 00 00 00    	jne    84db402 <_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci+0x16e>
 84db303:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84db30a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84db311:	e9 d4 00 00 00       	jmp    84db3ea <_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci+0x156>
 84db316:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84db319:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db31c:	8b 44 90 0d          	mov    0xd(%eax,%edx,4),%eax
 84db320:	83 f8 63             	cmp    $0x63,%eax
 84db323:	0f 86 bc 00 00 00    	jbe    84db3e5 <_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci+0x151>
 84db329:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84db32c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db32f:	8b 5c 90 0d          	mov    0xd(%eax,%edx,4),%ebx
 84db333:	e8 56 0e bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84db338:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84db33c:	89 04 24             	mov    %eax,(%esp)
 84db33f:	e8 8c 97 db ff       	call   8294ad0 <_ZN12CGameManager20isConnectUserByAccIdEj>
 84db344:	84 c0                	test   %al,%al
 84db346:	0f 84 9a 00 00 00    	je     84db3e6 <_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci+0x152>
 84db34c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84db34f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db352:	8b 5c 90 0d          	mov    0xd(%eax,%edx,4),%ebx
 84db356:	e8 33 0e bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84db35b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84db35f:	89 04 24             	mov    %eax,(%esp)
 84db362:	e8 5f 95 db ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84db367:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84db36a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db371:	00 
 84db372:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84db379:	00 
 84db37a:	c7 44 24 04 2c 00 00 	movl   $0x2c,0x4(%esp)
 84db381:	00 
 84db382:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84db385:	89 04 24             	mov    %eax,(%esp)
 84db388:	e8 67 d6 16 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84db38d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84db390:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db393:	8b 44 90 0d          	mov    0xd(%eax,%edx,4),%eax
 84db397:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84db39e:	00 
 84db39f:	89 04 24             	mov    %eax,(%esp)
 84db3a2:	e8 a4 dc c2 ff       	call   810904b <_Z14NumberToStringji>
 84db3a7:	89 c3                	mov    %eax,%ebx
 84db3a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84db3b0:	00 
 84db3b1:	c7 44 24 08 d4 43 00 	movl   $0x43d4,0x8(%esp)
 84db3b8:	00 
 84db3b9:	c7 44 24 04 a0 be c8 	movl   $0x8c8bea0,0x4(%esp)
 84db3c0:	08 
 84db3c1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84db3c4:	89 04 24             	mov    %eax,(%esp)
 84db3c7:	e8 4c 43 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84db3cc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84db3d0:	c7 44 24 04 0b 98 c8 	movl   $0x8c8980b,0x4(%esp)
 84db3d7:	08 
 84db3d8:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84db3db:	89 04 24             	mov    %eax,(%esp)
 84db3de:	e8 a5 43 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84db3e3:	eb 01                	jmp    84db3e6 <_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci+0x152>
 84db3e5:	90                   	nop
 84db3e6:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84db3ea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84db3ed:	0f b7 40 0b          	movzwl 0xb(%eax),%eax
 84db3f1:	0f b7 c0             	movzwl %ax,%eax
 84db3f4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84db3f7:	0f 9f c0             	setg   %al
 84db3fa:	84 c0                	test   %al,%al
 84db3fc:	0f 85 14 ff ff ff    	jne    84db316 <_ZN26Inter_MonitorPunishUserReq12dispatch_sigEP5CUserPci+0x82>
 84db402:	b8 00 00 00 00       	mov    $0x0,%eax
 84db407:	83 c4 40             	add    $0x40,%esp
 84db40a:	5b                   	pop    %ebx
 84db40b:	5e                   	pop    %esi
 84db40c:	5d                   	pop    %ebp
 84db40d:	c3                   	ret

```

```c
// Inter_MonitorPunishUserReq::dispatch_sig @ 0x84db294

/* Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorPunishUserReq::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  CGameManager *pCVar4;
  undefined4 uVar5;
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  int local_18;
  int local_14;
  CUser *local_10;
  
  local_18 = param_3;
  uVar1 = *(ushort *)(param_3 + 0xb);
  cVar3 = *(char *)(param_3 + 10);
  cMyTrace::cMyTrace(local_38,
                     "virtual int Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int)",
                     0x43bc,0);
  cMyTrace::operator()
            (local_38,"Monitor Punish User / m_flag = %d / user_count",(int)cVar3,(uint)uVar1);
  if (*(char *)(local_18 + 10) == '\0') {
    for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(local_18 + 0xb); local_14 = local_14 + 1) {
      if (99 < *(uint *)(local_18 + 0xd + local_14 * 4)) {
        uVar2 = *(uint *)(local_18 + 0xd + local_14 * 4);
        pCVar4 = (CGameManager *)G_CGameManager();
        cVar3 = CGameManager::isConnectUserByAccId(pCVar4,uVar2);
        if (cVar3 != '\0') {
          uVar2 = *(uint *)(local_18 + 0xd + local_14 * 4);
          pCVar4 = (CGameManager *)G_CGameManager();
          local_10 = (CUser *)CGameManager::GetUserByAccId(pCVar4,uVar2);
          CUser::DisConnSig(local_10,0x2c,1,0);
          uVar5 = NumberToString(*(uint *)(local_18 + 0xd + local_14 * 4),0);
          cMyTrace::cMyTrace(local_28,
                             "virtual int Inter_MonitorPunishUserReq::dispatch_sig(CUser*, char*, int)"
                             ,0x43d4,0);
          cMyTrace::operator()(local_28,"System Kick User : %s",uVar5);
        }
      }
    }
  }
  return 0;
}

```

