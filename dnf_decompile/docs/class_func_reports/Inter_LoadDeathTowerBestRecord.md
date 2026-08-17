# Inter_LoadDeathTowerBestRecord

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d316a Inter_LoadDeathTowerBestRecord::dispatch_sig  [0x084d316a-0x84d328f] ===
 84d316a:	55                   	push   %ebp
 84d316b:	89 e5                	mov    %esp,%ebp
 84d316d:	57                   	push   %edi
 84d316e:	56                   	push   %esi
 84d316f:	53                   	push   %ebx
 84d3170:	83 ec 4c             	sub    $0x4c,%esp
 84d3173:	8b 45 10             	mov    0x10(%ebp),%eax
 84d3176:	89 45 dc             	mov    %eax,-0x24(%ebp)
 84d3179:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84d3180:	e9 ea 00 00 00       	jmp    84d326f <_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci+0x105>
 84d3185:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 84d318c:	e9 cb 00 00 00       	jmp    84d325c <_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci+0xf2>
 84d3191:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84d3194:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d3197:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d319a:	6b c9 6c             	imul   $0x6c,%ecx,%ecx
 84d319d:	69 d2 b0 01 00 00    	imul   $0x1b0,%edx,%edx
 84d31a3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84d31a6:	01 d0                	add    %edx,%eax
 84d31a8:	83 c0 6c             	add    $0x6c,%eax
 84d31ab:	8b 00                	mov    (%eax),%eax
 84d31ad:	85 c0                	test   %eax,%eax
 84d31af:	0f 84 a2 00 00 00    	je     84d3257 <_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci+0xed>
 84d31b5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84d31b8:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d31bb:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d31be:	6b c9 6c             	imul   $0x6c,%ecx,%ecx
 84d31c1:	69 d2 b0 01 00 00    	imul   $0x1b0,%edx,%edx
 84d31c7:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84d31ca:	01 d0                	add    %edx,%eax
 84d31cc:	83 c0 70             	add    $0x70,%eax
 84d31cf:	8b 00                	mov    (%eax),%eax
 84d31d1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 84d31d4:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84d31d7:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 84d31da:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d31dd:	6b c9 6c             	imul   $0x6c,%ecx,%ecx
 84d31e0:	69 d2 b0 01 00 00    	imul   $0x1b0,%edx,%edx
 84d31e6:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 84d31e9:	01 d0                	add    %edx,%eax
 84d31eb:	83 c0 6c             	add    $0x6c,%eax
 84d31ee:	8b 38                	mov    (%eax),%edi
 84d31f0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84d31f3:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84d31f6:	6b d2 6c             	imul   $0x6c,%edx,%edx
 84d31f9:	69 c0 b0 01 00 00    	imul   $0x1b0,%eax,%eax
 84d31ff:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84d3202:	03 45 dc             	add    -0x24(%ebp),%eax
 84d3205:	83 c0 10             	add    $0x10,%eax
 84d3208:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 84d320b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d320e:	8b 70 04             	mov    0x4(%eax),%esi
 84d3211:	8b 55 e0             	mov    -0x20(%ebp),%edx
 84d3214:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d3217:	69 d2 b0 01 00 00    	imul   $0x1b0,%edx,%edx
 84d321d:	0f b7 44 02 0c       	movzwl 0xc(%edx,%eax,1),%eax
 84d3222:	0f b7 d8             	movzwl %ax,%ebx
 84d3225:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84d3228:	83 c0 01             	add    $0x1,%eax
 84d322b:	89 04 24             	mov    %eax,(%esp)
 84d322e:	e8 19 45 dd ff       	call   82a774c <_ZN8WongWork18CDeathTowerRanking12getRankTableEj>
 84d3233:	8b 55 d0             	mov    -0x30(%ebp),%edx
 84d3236:	89 54 24 14          	mov    %edx,0x14(%esp)
 84d323a:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84d323e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 84d3241:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84d3245:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d3249:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d324d:	89 04 24             	mov    %eax,(%esp)
 84d3250:	e8 bf 56 f9 ff       	call   8468914 <_ZN8WongWork18CDeathTowerRanking16registBestRecordEjjPK30stDeathTowerRecordMemberInfo_tjj>
 84d3255:	eb 01                	jmp    84d3258 <_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci+0xee>
 84d3257:	90                   	nop
 84d3258:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 84d325c:	83 7d e4 03          	cmpl   $0x3,-0x1c(%ebp)
 84d3260:	0f 9e c0             	setle  %al
 84d3263:	84 c0                	test   %al,%al
 84d3265:	0f 85 26 ff ff ff    	jne    84d3191 <_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci+0x27>
 84d326b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 84d326f:	8b 45 dc             	mov    -0x24(%ebp),%eax
 84d3272:	8b 00                	mov    (%eax),%eax
 84d3274:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 84d3277:	0f 97 c0             	seta   %al
 84d327a:	84 c0                	test   %al,%al
 84d327c:	0f 85 03 ff ff ff    	jne    84d3185 <_ZN30Inter_LoadDeathTowerBestRecord12dispatch_sigEP5CUserPci+0x1b>
 84d3282:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3287:	83 c4 4c             	add    $0x4c,%esp
 84d328a:	5b                   	pop    %ebx
 84d328b:	5e                   	pop    %esi
 84d328c:	5f                   	pop    %edi
 84d328d:	5d                   	pop    %ebp
 84d328e:	c3                   	ret
 84d328f:	90                   	nop

```

```c
// Inter_LoadDeathTowerBestRecord::dispatch_sig @ 0x84d316a

/* Inter_LoadDeathTowerBestRecord::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDeathTowerBestRecord::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  CDeathTowerRanking *this;
  undefined4 local_24;
  undefined4 local_20;
  
  for (local_24 = 0; local_24 < *(uint *)param_3; local_24 = local_24 + 1) {
    for (local_20 = 0; local_20 < 4; local_20 = local_20 + 1) {
      if (*(int *)(param_3 + local_20 * 0x6c + local_24 * 0x1b0 + 0x6c) != 0) {
        uVar2 = *(uint *)(param_3 + local_20 * 0x6c + local_24 * 0x1b0 + 0x70);
        uVar3 = *(uint *)(param_3 + local_20 * 0x6c + local_24 * 0x1b0 + 0x6c);
        uVar4 = *(uint *)(param_3 + 4);
        uVar1 = *(ushort *)(local_24 * 0x1b0 + 0xc + param_3);
        this = (CDeathTowerRanking *)WongWork::CDeathTowerRanking::getRankTable(local_20 + 1);
        WongWork::CDeathTowerRanking::registBestRecord
                  (this,(uint)uVar1,uVar4,
                   (stDeathTowerRecordMemberInfo_t *)
                   (local_20 * 0x6c + local_24 * 0x1b0 + param_3 + 0x10),uVar3,uVar2);
      }
    }
  }
  return 0;
}

```

