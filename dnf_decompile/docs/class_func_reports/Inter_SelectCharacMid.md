# Inter_SelectCharacMid

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e6170 Inter_SelectCharacMid::dispatch_sig  [0x084e6170-0x84e6257] ===
 84e6170:	55                   	push   %ebp
 84e6171:	89 e5                	mov    %esp,%ebp
 84e6173:	57                   	push   %edi
 84e6174:	56                   	push   %esi
 84e6175:	53                   	push   %ebx
 84e6176:	83 ec 3c             	sub    $0x3c,%esp
 84e6179:	8b 45 10             	mov    0x10(%ebp),%eax
 84e617c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e617f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e6183:	74 16                	je     84e619b <_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci+0x2b>
 84e6185:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6188:	89 04 24             	mov    %eax,(%esp)
 84e618b:	e8 a2 a2 c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e6190:	85 c0                	test   %eax,%eax
 84e6192:	74 07                	je     84e619b <_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci+0x2b>
 84e6194:	b8 01 00 00 00       	mov    $0x1,%eax
 84e6199:	eb 05                	jmp    84e61a0 <_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci+0x30>
 84e619b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e61a0:	84 c0                	test   %al,%al
 84e61a2:	0f 84 a3 00 00 00    	je     84e624b <_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci+0xdb>
 84e61a8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e61ab:	8b 00                	mov    (%eax),%eax
 84e61ad:	85 c0                	test   %eax,%eax
 84e61af:	0f 85 96 00 00 00    	jne    84e624b <_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci+0xdb>
 84e61b5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e61b8:	8b 78 08             	mov    0x8(%eax),%edi
 84e61bb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e61be:	8b 70 10             	mov    0x10(%eax),%esi
 84e61c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e61c4:	8b 58 04             	mov    0x4(%eax),%ebx
 84e61c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e61ca:	89 04 24             	mov    %eax,(%esp)
 84e61cd:	e8 88 37 c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84e61d2:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84e61d6:	89 74 24 10          	mov    %esi,0x10(%esp)
 84e61da:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84e61e1:	00 
 84e61e2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e61e6:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e61e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e61ed:	89 04 24             	mov    %eax,(%esp)
 84e61f0:	e8 89 2a c1 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84e61f5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e61f8:	8b 40 04             	mov    0x4(%eax),%eax
 84e61fb:	3d ce 02 00 00       	cmp    $0x2ce,%eax
 84e6200:	75 49                	jne    84e624b <_ZN21Inter_SelectCharacMid12dispatch_sigEP5CUserPci+0xdb>
 84e6202:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e6205:	89 04 24             	mov    %eax,(%esp)
 84e6208:	e8 ad aa c2 ff       	call   8110cba <_ZN15CUserCharacInfo23getCurCharacUsedFatigueEv>
 84e620d:	0f b7 f8             	movzwl %ax,%edi
 84e6210:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6213:	8b 70 08             	mov    0x8(%eax),%esi
 84e6216:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6219:	8b 58 10             	mov    0x10(%eax),%ebx
 84e621c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e621f:	89 04 24             	mov    %eax,(%esp)
 84e6222:	e8 d9 a5 d4 ff       	call   8230800 <_ZN5CUser8getHadesEv>
 84e6227:	89 7c 24 14          	mov    %edi,0x14(%esp)
 84e622b:	89 74 24 10          	mov    %esi,0x10(%esp)
 84e622f:	c7 44 24 0c 40 6f c8 	movl   $0x8c86f40,0xc(%esp)
 84e6236:	08 
 84e6237:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84e623b:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e6242:	00 
 84e6243:	89 04 24             	mov    %eax,(%esp)
 84e6246:	e8 4f 32 fd ff       	call   84b949a <_ZN8XNuclear6CHades12GoldTrackingEhjPcjj>
 84e624b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6250:	83 c4 3c             	add    $0x3c,%esp
 84e6253:	5b                   	pop    %ebx
 84e6254:	5e                   	pop    %esi
 84e6255:	5f                   	pop    %edi
 84e6256:	5d                   	pop    %ebp
 84e6257:	c3                   	ret

```

```c
// Inter_SelectCharacMid::dispatch_sig @ 0x84e6170

/* Inter_SelectCharacMid::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SelectCharacMid::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  CHackAnalyzer *pCVar8;
  uint uVar9;
  CHades *this;
  
  if (param_2 != (char *)0x0) {
    iVar7 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar7 != 0) {
      bVar6 = true;
      goto LAB_084e61a0;
    }
  }
  bVar6 = false;
LAB_084e61a0:
  if ((bVar6) && (*(int *)param_3 == 0)) {
    uVar1 = *(undefined4 *)(param_3 + 8);
    uVar2 = *(undefined4 *)(param_3 + 0x10);
    uVar3 = *(undefined4 *)(param_3 + 4);
    pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,param_2,uVar3,1,uVar2,uVar1);
    if (*(int *)(param_3 + 4) == 0x2ce) {
      uVar9 = CUserCharacInfo::getCurCharacUsedFatigue((CUserCharacInfo *)param_2);
      uVar4 = *(uint *)(param_3 + 8);
      uVar5 = *(uint *)(param_3 + 0x10);
      this = (CHades *)CUser::getHades((CUser *)param_2);
      XNuclear::CHades::GoldTracking(this,'\x02',uVar5,"",uVar4,uVar9 & 0xffff);
    }
  }
  return 0;
}

```

