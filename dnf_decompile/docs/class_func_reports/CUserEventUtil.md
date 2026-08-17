# CUserEventUtil

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## updateCharacterDayEvent

```asm
// === 08688230 CUserEventUtil::updateCharacterDayEvent  [0x08688230-0x8688327] ===
 8688230:	55                   	push   %ebp
 8688231:	89 e5                	mov    %esp,%ebp
 8688233:	56                   	push   %esi
 8688234:	53                   	push   %ebx
 8688235:	83 ec 20             	sub    $0x20,%esp
 8688238:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 868823d:	c7 44 24 08 f5 9a 00 	movl   $0x9af5,0x8(%esp)
 8688244:	00 
 8688245:	c7 44 24 04 dd e1 ce 	movl   $0x8cee1dd,0x4(%esp)
 868824c:	08 
 868824d:	89 04 24             	mov    %eax,(%esp)
 8688250:	e8 31 78 c0 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8688255:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 868825c:	00 
 868825d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8688261:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8688264:	89 04 24             	mov    %eax,(%esp)
 8688267:	e8 ba 09 a4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 868826c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 868826f:	89 04 24             	mov    %eax,(%esp)
 8688272:	e8 cf 09 a4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8688277:	c7 44 24 04 6e 01 00 	movl   $0x16e,0x4(%esp)
 868827e:	00 
 868827f:	89 04 24             	mov    %eax,(%esp)
 8688282:	e8 cf 09 a4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8688287:	8b 45 08             	mov    0x8(%ebp),%eax
 868828a:	89 04 24             	mov    %eax,(%esp)
 868828d:	e8 04 0a a4 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8688292:	89 c3                	mov    %eax,%ebx
 8688294:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8688297:	89 04 24             	mov    %eax,(%esp)
 868829a:	e8 a7 09 a4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 868829f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86882a3:	89 04 24             	mov    %eax,(%esp)
 86882a6:	e8 ab 09 a4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 86882ab:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86882ae:	89 04 24             	mov    %eax,(%esp)
 86882b1:	e8 98 09 a4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 86882b6:	89 04 24             	mov    %eax,(%esp)
 86882b9:	e8 de 41 01 00       	call   869c49c <_ZN12CStreamGuard11GetInBufferI30SIG_UPDATE_CHARACTER_DAY_EVENTEEPT_v>
 86882be:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86882c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86882c4:	89 04 24             	mov    %eax,(%esp)
 86882c7:	e8 a2 20 a5 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 86882cc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86882cf:	89 02                	mov    %eax,(%edx)
 86882d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 86882d4:	89 c2                	mov    %eax,%edx
 86882d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86882d9:	66 89 50 04          	mov    %dx,0x4(%eax)
 86882dd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 86882e2:	8d 55 ec             	lea    -0x14(%ebp),%edx
 86882e5:	89 54 24 08          	mov    %edx,0x8(%esp)
 86882e9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86882f0:	00 
 86882f1:	89 04 24             	mov    %eax,(%esp)
 86882f4:	e8 e5 8c ee ff       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 86882f9:	eb 1b                	jmp    8688316 <_ZN14CUserEventUtil23updateCharacterDayEventEP5CUseri+0xe6>
 86882fb:	89 d3                	mov    %edx,%ebx
 86882fd:	89 c6                	mov    %eax,%esi
 86882ff:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8688302:	89 04 24             	mov    %eax,(%esp)
 8688305:	e8 c8 45 f9 ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 868830a:	89 f0                	mov    %esi,%eax
 868830c:	89 da                	mov    %ebx,%edx
 868830e:	89 04 24             	mov    %eax,(%esp)
 8688311:	e8 3a b4 45 00       	call   8ae3750 <_Unwind_Resume>
 8688316:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8688319:	89 04 24             	mov    %eax,(%esp)
 868831c:	e8 b1 45 f9 ff       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8688321:	83 c4 20             	add    $0x20,%esp
 8688324:	5b                   	pop    %ebx
 8688325:	5e                   	pop    %esi
 8688326:	5d                   	pop    %ebp
 8688327:	c3                   	ret

```

```c
// CUserEventUtil::updateCharacterDayEvent @ 0x8688230

/* CUserEventUtil::updateCharacterDayEvent(CUser*, int) */

void CUserEventUtil::updateCharacterDayEvent(CUser *param_1,int param_2)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  int iVar3;
  undefined4 uVar4;
  CStreamGuard local_18 [8];
  SIG_UPDATE_CHARACTER_DAY_EVENT *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"user.cpp",0x9af5);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08688282 to 086882f8 has its CatchHandler @ 086882fb */
  CStreamGuard::operator<<(pCVar2,0x16e);
  iVar3 = CUser::GetUID(param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,iVar3);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_UPDATE_CHARACTER_DAY_EVENT>(pCVar2);
  uVar4 = CUser::get_acc_id(param_1);
  *(undefined4 *)local_10 = uVar4;
  *(short *)(local_10 + 4) = (short)param_2;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return;
}

```

