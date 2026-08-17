# TimerCheckHumanCertifyTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863713a TimerCheckHumanCertifyTimeout::dispatch_sig  [0x0863713a-0x86372d3] ===
 863713a:	55                   	push   %ebp
 863713b:	89 e5                	mov    %esp,%ebp
 863713d:	83 ec 38             	sub    $0x38,%esp
 8637140:	e8 49 50 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637145:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 863714c:	00 
 863714d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8637150:	89 54 24 04          	mov    %edx,0x4(%esp)
 8637154:	89 04 24             	mov    %eax,(%esp)
 8637157:	e8 48 d6 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 863715c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863715f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8637163:	74 10                	je     8637175 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x3b>
 8637165:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637168:	89 04 24             	mov    %eax,(%esp)
 863716b:	e8 1c 32 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8637170:	83 f8 01             	cmp    $0x1,%eax
 8637173:	7f 07                	jg     863717c <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x42>
 8637175:	b8 01 00 00 00       	mov    $0x1,%eax
 863717a:	eb 05                	jmp    8637181 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x47>
 863717c:	b8 00 00 00 00       	mov    $0x0,%eax
 8637181:	84 c0                	test   %al,%al
 8637183:	74 0a                	je     863718f <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x55>
 8637185:	b8 00 00 00 00       	mov    $0x0,%eax
 863718a:	e9 42 01 00 00       	jmp    86372d1 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x197>
 863718f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637192:	89 04 24             	mov    %eax,(%esp)
 8637195:	e8 80 90 bf ff       	call   823021a <_ZN5CUser16isHumanCertifiedEv>
 863719a:	84 c0                	test   %al,%al
 863719c:	74 16                	je     86371b4 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x7a>
 863719e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86371a1:	89 04 24             	mov    %eax,(%esp)
 86371a4:	e8 c9 4d 00 00       	call   863bf72 <_ZN5CUser19isSendMailCertifiedEv>
 86371a9:	84 c0                	test   %al,%al
 86371ab:	74 07                	je     86371b4 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x7a>
 86371ad:	b8 01 00 00 00       	mov    $0x1,%eax
 86371b2:	eb 05                	jmp    86371b9 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x7f>
 86371b4:	b8 00 00 00 00       	mov    $0x0,%eax
 86371b9:	84 c0                	test   %al,%al
 86371bb:	74 0a                	je     86371c7 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x8d>
 86371bd:	b8 01 00 00 00       	mov    $0x1,%eax
 86371c2:	e9 0a 01 00 00       	jmp    86372d1 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x197>
 86371c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86371ca:	89 04 24             	mov    %eax,(%esp)
 86371cd:	e8 b0 4d 00 00       	call   863bf82 <_ZN5CUser23getHumanCertifyTimerKeyEv>
 86371d2:	8b 55 10             	mov    0x10(%ebp),%edx
 86371d5:	39 d0                	cmp    %edx,%eax
 86371d7:	0f 97 c0             	seta   %al
 86371da:	84 c0                	test   %al,%al
 86371dc:	74 0a                	je     86371e8 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0xae>
 86371de:	b8 01 00 00 00       	mov    $0x1,%eax
 86371e3:	e9 e9 00 00 00       	jmp    86372d1 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x197>
 86371e8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86371eb:	05 f0 e3 08 00       	add    $0x8e3f0,%eax
 86371f0:	89 04 24             	mov    %eax,(%esp)
 86371f3:	e8 ac 7c bf ff       	call   822eea4 <_ZN8WongWork12CMCAPManager8getPointEv>
 86371f8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86371fb:	81 c2 00 97 07 00    	add    $0x79700,%edx
 8637201:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8637208:	00 
 8637209:	89 44 24 04          	mov    %eax,0x4(%esp)
 863720d:	89 14 24             	mov    %edx,(%esp)
 8637210:	e8 d1 e1 04 00       	call   86853e6 <_ZN15cUserHistoryLog15RequestCleanPadEjc>
 8637215:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 863721c:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8637223:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 863722a:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8637231:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8637238:	8d 45 e0             	lea    -0x20(%ebp),%eax
 863723b:	89 44 24 08          	mov    %eax,0x8(%esp)
 863723f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8637246:	00 
 8637247:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863724a:	89 04 24             	mov    %eax,(%esp)
 863724d:	e8 76 82 04 00       	call   867f4c8 <_ZN5CUser17checkHumanCertifyEiPt>
 8637252:	83 f0 01             	xor    $0x1,%eax
 8637255:	84 c0                	test   %al,%al
 8637257:	74 73                	je     86372cc <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x192>
 8637259:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863725c:	89 04 24             	mov    %eax,(%esp)
 863725f:	e8 0e 4d 00 00       	call   863bf72 <_ZN5CUser19isSendMailCertifiedEv>
 8637264:	83 f0 01             	xor    $0x1,%eax
 8637267:	84 c0                	test   %al,%al
 8637269:	74 3e                	je     86372a9 <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x16f>
 863726b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8637272:	00 
 8637273:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637276:	89 04 24             	mov    %eax,(%esp)
 8637279:	e8 ac 8f bf ff       	call   823022a <_ZN5CUser17setHumanCertifiedEb>
 863727e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8637285:	00 
 8637286:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637289:	89 04 24             	mov    %eax,(%esp)
 863728c:	e8 81 2c 05 00       	call   8689f12 <_ZN5CUser8SendMailEb>
 8637291:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637294:	89 04 24             	mov    %eax,(%esp)
 8637297:	e8 3e 95 bf ff       	call   82307da <_ZN5CUser20resetCleanpadFailCntEv>
 863729c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863729f:	89 04 24             	mov    %eax,(%esp)
 86372a2:	e8 79 84 04 00       	call   867f720 <_ZN5CUser21resetHumanCertifyDataEv>
 86372a7:	eb 23                	jmp    86372cc <_ZN29TimerCheckHumanCertifyTimeout12dispatch_sigEiij+0x192>
 86372a9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86372b0:	00 
 86372b1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86372b8:	00 
 86372b9:	c7 44 24 04 34 00 00 	movl   $0x34,0x4(%esp)
 86372c0:	00 
 86372c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86372c4:	89 04 24             	mov    %eax,(%esp)
 86372c7:	e8 28 17 01 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 86372cc:	b8 01 00 00 00       	mov    $0x1,%eax
 86372d1:	c9                   	leave
 86372d2:	c3                   	ret
 86372d3:	90                   	nop

```

```c
// TimerCheckHumanCertifyTimeout::dispatch_sig @ 0x863713a

/* TimerCheckHumanCertifyTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckHumanCertifyTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  ushort local_24 [10];
  CUser *local_10;
  
  iVar3 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar3,param_2);
  if ((local_10 == (CUser *)0x0) || (iVar3 = CUser::get_state(local_10), iVar3 < 2)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  cVar2 = CUser::isHumanCertified(local_10);
  if ((cVar2 == '\0') || (cVar2 = CUser::isSendMailCertified(local_10), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((!bVar1) && (uVar4 = CUser::getHumanCertifyTimerKey(local_10), uVar4 <= param_3)) {
    uVar4 = WongWork::CMCAPManager::getPoint((CMCAPManager *)(local_10 + 0x8e3f0));
    cUserHistoryLog::RequestCleanPad((cUserHistoryLog *)(local_10 + 0x79700),uVar4,'\x03');
    local_24[0] = 0;
    local_24[1] = 0;
    local_24[2] = 0;
    local_24[3] = 0;
    local_24[4] = 0;
    local_24[5] = 0;
    local_24[6] = 0;
    local_24[7] = 0;
    local_24[8] = 0;
    local_24[9] = 0;
    cVar2 = CUser::checkHumanCertify(local_10,1,local_24);
    if (cVar2 != '\x01') {
      cVar2 = CUser::isSendMailCertified(local_10);
      if (cVar2 == '\x01') {
        CUser::DisConnSig(local_10,0x34,1,0);
      }
      else {
        CUser::setHumanCertified(local_10,true);
        CUser::SendMail(local_10,false);
        CUser::resetCleanpadFailCnt(local_10);
        CUser::resetHumanCertifyData(local_10);
      }
    }
  }
  return 1;
}

```

