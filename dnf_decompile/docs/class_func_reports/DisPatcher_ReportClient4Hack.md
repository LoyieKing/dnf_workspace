# DisPatcher_ReportClient4Hack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082041a0 DisPatcher_ReportClient4Hack::dispatch_sig  [0x082041a0-0x8204399] ===
 82041a0:	55                   	push   %ebp
 82041a1:	89 e5                	mov    %esp,%ebp
 82041a3:	53                   	push   %ebx
 82041a4:	83 ec 14             	sub    $0x14,%esp
 82041a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82041aa:	89 04 24             	mov    %eax,(%esp)
 82041ad:	e8 da 61 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82041b2:	83 f8 01             	cmp    $0x1,%eax
 82041b5:	7e 0f                	jle    82041c6 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x26>
 82041b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 82041ba:	89 04 24             	mov    %eax,(%esp)
 82041bd:	e8 70 c2 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 82041c2:	85 c0                	test   %eax,%eax
 82041c4:	75 07                	jne    82041cd <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 82041c6:	b8 01 00 00 00       	mov    $0x1,%eax
 82041cb:	eb 05                	jmp    82041d2 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x32>
 82041cd:	b8 00 00 00 00       	mov    $0x0,%eax
 82041d2:	84 c0                	test   %al,%al
 82041d4:	74 0a                	je     82041e0 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x40>
 82041d6:	b8 00 00 00 00       	mov    $0x0,%eax
 82041db:	e9 b4 01 00 00       	jmp    8204394 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1f4>
 82041e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 82041e3:	89 04 24             	mov    %eax,(%esp)
 82041e6:	e8 a1 61 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 82041eb:	83 f8 06             	cmp    $0x6,%eax
 82041ee:	0f 84 70 01 00 00    	je     8204364 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1c4>
 82041f4:	83 f8 06             	cmp    $0x6,%eax
 82041f7:	7f 0a                	jg     8204203 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x63>
 82041f9:	83 f8 05             	cmp    $0x5,%eax
 82041fc:	74 18                	je     8204216 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x76>
 82041fe:	e9 f9 00 00 00       	jmp    82042fc <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8204203:	83 f8 07             	cmp    $0x7,%eax
 8204206:	74 4f                	je     8204257 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0xb7>
 8204208:	83 f8 08             	cmp    $0x8,%eax
 820420b:	0f 84 aa 00 00 00    	je     82042bb <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x11b>
 8204211:	e9 e6 00 00 00       	jmp    82042fc <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x15c>
 8204216:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204219:	89 04 24             	mov    %eax,(%esp)
 820421c:	e8 2b 0f 45 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8204221:	85 c0                	test   %eax,%eax
 8204223:	0f 94 c0             	sete   %al
 8204226:	84 c0                	test   %al,%al
 8204228:	0f 84 39 01 00 00    	je     8204367 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1c7>
 820422e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204235:	00 
 8204236:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820423d:	00 
 820423e:	c7 44 24 04 c0 f0 bc 	movl   $0x8bcf0c0,0x4(%esp)
 8204245:	08 
 8204246:	c7 04 24 b7 9b 00 00 	movl   $0x9bb7,(%esp)
 820424d:	e8 85 c6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8204252:	e9 3d 01 00 00       	jmp    8204394 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1f4>
 8204257:	8b 45 0c             	mov    0xc(%ebp),%eax
 820425a:	89 04 24             	mov    %eax,(%esp)
 820425d:	e8 12 bc 02 00       	call   822fe74 <_ZN5CUser11GetPvpIndexEv>
 8204262:	0f bf d8             	movswl %ax,%ebx
 8204265:	e8 24 7f ec ff       	call   80cc18e <_Z14G_CGameManagerv>
 820426a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204271:	00 
 8204272:	8b 55 0c             	mov    0xc(%ebp),%edx
 8204275:	89 54 24 08          	mov    %edx,0x8(%esp)
 8204279:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 820427d:	89 04 24             	mov    %eax,(%esp)
 8204280:	e8 81 0f 09 00       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8204285:	85 c0                	test   %eax,%eax
 8204287:	0f 94 c0             	sete   %al
 820428a:	84 c0                	test   %al,%al
 820428c:	0f 84 d8 00 00 00    	je     820436a <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1ca>
 8204292:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8204299:	00 
 820429a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82042a1:	00 
 82042a2:	c7 44 24 04 c0 f0 bc 	movl   $0x8bcf0c0,0x4(%esp)
 82042a9:	08 
 82042aa:	c7 04 24 c1 9b 00 00 	movl   $0x9bc1,(%esp)
 82042b1:	e8 21 c6 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82042b6:	e9 d9 00 00 00       	jmp    8204394 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1f4>
 82042bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 82042be:	89 04 24             	mov    %eax,(%esp)
 82042c1:	e8 18 0f 45 00       	call   86551de <_ZN5CUser10GetWarRoomEv>
 82042c6:	85 c0                	test   %eax,%eax
 82042c8:	0f 94 c0             	sete   %al
 82042cb:	84 c0                	test   %al,%al
 82042cd:	0f 84 9a 00 00 00    	je     820436d <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1cd>
 82042d3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82042da:	00 
 82042db:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82042e2:	00 
 82042e3:	c7 44 24 04 c0 f0 bc 	movl   $0x8bcf0c0,0x4(%esp)
 82042ea:	08 
 82042eb:	c7 04 24 c5 9b 00 00 	movl   $0x9bc5,(%esp)
 82042f2:	e8 e0 c5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82042f7:	e9 98 00 00 00       	jmp    8204394 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1f4>
 82042fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82042ff:	89 04 24             	mov    %eax,(%esp)
 8204302:	e8 53 56 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8204307:	8b 55 0c             	mov    0xc(%ebp),%edx
 820430a:	89 54 24 04          	mov    %edx,0x4(%esp)
 820430e:	89 04 24             	mov    %eax,(%esp)
 8204311:	e8 d2 36 ef ff       	call   80f79e8 <_ZN8WongWork13CHackAnalyzer20beginCollectHackInfoEP5CUser>
 8204316:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204319:	89 04 24             	mov    %eax,(%esp)
 820431c:	e8 39 56 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8204321:	8b 55 10             	mov    0x10(%ebp),%edx
 8204324:	89 54 24 08          	mov    %edx,0x8(%esp)
 8204328:	8b 55 0c             	mov    0xc(%ebp),%edx
 820432b:	89 54 24 04          	mov    %edx,0x4(%esp)
 820432f:	89 04 24             	mov    %eax,(%esp)
 8204332:	e8 eb 36 ef ff       	call   80f7a22 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf>
 8204337:	8b 45 0c             	mov    0xc(%ebp),%eax
 820433a:	89 04 24             	mov    %eax,(%esp)
 820433d:	e8 18 56 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8204342:	89 04 24             	mov    %eax,(%esp)
 8204345:	e8 36 3d ef ff       	call   80f8080 <_ZN8WongWork13CHackAnalyzer14reportHackInfoEv>
 820434a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820434d:	89 04 24             	mov    %eax,(%esp)
 8204350:	e8 05 56 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8204355:	89 04 24             	mov    %eax,(%esp)
 8204358:	e8 49 3e ef ff       	call   80f81a6 <_ZN8WongWork13CHackAnalyzer13resetHackInfoEv>
 820435d:	b8 00 00 00 00       	mov    $0x0,%eax
 8204362:	eb 30                	jmp    8204394 <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1f4>
 8204364:	90                   	nop
 8204365:	eb 07                	jmp    820436e <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1ce>
 8204367:	90                   	nop
 8204368:	eb 04                	jmp    820436e <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1ce>
 820436a:	90                   	nop
 820436b:	eb 01                	jmp    820436e <_ZN28DisPatcher_ReportClient4Hack12dispatch_sigEP5CUserR9PacketBuf+0x1ce>
 820436d:	90                   	nop
 820436e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8204371:	89 04 24             	mov    %eax,(%esp)
 8204374:	e8 e1 55 ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8204379:	8b 55 10             	mov    0x10(%ebp),%edx
 820437c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8204380:	8b 55 0c             	mov    0xc(%ebp),%edx
 8204383:	89 54 24 04          	mov    %edx,0x4(%esp)
 8204387:	89 04 24             	mov    %eax,(%esp)
 820438a:	e8 93 36 ef ff       	call   80f7a22 <_ZN8WongWork13CHackAnalyzer17analyzeHackReportEP5CUserP9PacketBuf>
 820438f:	b8 00 00 00 00       	mov    $0x0,%eax
 8204394:	83 c4 14             	add    $0x14,%esp
 8204397:	5b                   	pop    %ebx
 8204398:	5d                   	pop    %ebp
 8204399:	c3                   	ret

```

```c
// DisPatcher_ReportClient4Hack::dispatch_sig @ 0x82041a0

/* DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_ReportClient4Hack::dispatch_sig
          (DisPatcher_ReportClient4Hack *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  CGameManager *this_00;
  CHackAnalyzer *pCVar5;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 2) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  iVar3 = CUser::get_state(param_1);
  if (iVar3 != 6) {
    if (iVar3 < 7) {
      if (iVar3 != 5) {
LAB_082042fc:
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::beginCollectHackInfo(pCVar5,param_1);
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::analyzeHackReport(pCVar5,param_1,param_2);
        CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::reportHackInfo();
        pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
        WongWork::CHackAnalyzer::resetHackInfo(pCVar5);
        return 0;
      }
      iVar3 = CUser::GetParty(param_1);
      if (iVar3 == 0) {
        uVar4 = LineFunc(0x9bb7,
                         "virtual int DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
    }
    else if (iVar3 == 7) {
      sVar2 = CUser::GetPvpIndex(param_1);
      this_00 = (CGameManager *)G_CGameManager();
      iVar3 = CGameManager::GetPvp(this_00,(int)sVar2,param_1,0);
      if (iVar3 == 0) {
        uVar4 = LineFunc(0x9bc1,
                         "virtual int DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
    }
    else {
      if (iVar3 != 8) goto LAB_082042fc;
      iVar3 = CUser::GetWarRoom(param_1);
      if (iVar3 == 0) {
        uVar4 = LineFunc(0x9bc5,
                         "virtual int DisPatcher_ReportClient4Hack::dispatch_sig(CUser*, PacketBuf&)"
                         ,0,0);
        return uVar4;
      }
    }
  }
  pCVar5 = (CHackAnalyzer *)CUser::getHackAnalyzer(param_1);
  WongWork::CHackAnalyzer::analyzeHackReport(pCVar5,param_1,param_2);
  return 0;
}

```

