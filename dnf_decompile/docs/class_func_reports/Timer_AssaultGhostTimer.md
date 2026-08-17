# Timer_AssaultGhostTimer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## RegisterNextTimer

```asm
// === 0863b242 Timer_AssaultGhostTimer::RegisterNextTimer  [0x0863b242-0x863b29b] ===
 863b242:	55                   	push   %ebp
 863b243:	89 e5                	mov    %esp,%ebp
 863b245:	53                   	push   %ebx
 863b246:	83 ec 24             	sub    $0x24,%esp
 863b249:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 863b24d:	74 46                	je     863b295 <_ZN23Timer_AssaultGhostTimer17RegisterNextTimerEP5CUserij+0x53>
 863b24f:	8b 45 08             	mov    0x8(%ebp),%eax
 863b252:	89 04 24             	mov    %eax,(%esp)
 863b255:	e8 3c da a8 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 863b25a:	89 c3                	mov    %eax,%ebx
 863b25c:	e8 1b b2 ab ff       	call   80f647c <_Z12G_TimerQueuev>
 863b261:	8b 55 10             	mov    0x10(%ebp),%edx
 863b264:	89 54 24 18          	mov    %edx,0x18(%esp)
 863b268:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 863b26f:	00 
 863b270:	8b 55 0c             	mov    0xc(%ebp),%edx
 863b273:	89 54 24 10          	mov    %edx,0x10(%esp)
 863b277:	c7 44 24 0c a0 00 00 	movl   $0xa0,0xc(%esp)
 863b27e:	00 
 863b27f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 863b283:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b28a:	00 
 863b28b:	89 04 24             	mov    %eax,(%esp)
 863b28e:	e8 83 5b ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 863b293:	eb 01                	jmp    863b296 <_ZN23Timer_AssaultGhostTimer17RegisterNextTimerEP5CUserij+0x54>
 863b295:	90                   	nop
 863b296:	83 c4 24             	add    $0x24,%esp
 863b299:	5b                   	pop    %ebx
 863b29a:	5d                   	pop    %ebp
 863b29b:	c3                   	ret

```

```c
// Timer_AssaultGhostTimer::RegisterNextTimer @ 0x863b242

/* Timer_AssaultGhostTimer::RegisterNextTimer(CUser*, int, unsigned int) */

void Timer_AssaultGhostTimer::RegisterNextTimer(CUser *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  TimerQueue *pTVar2;
  
  if (param_1 != (CUser *)0x0) {
    uVar1 = CUser::GetUID(param_1);
    pTVar2 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar2,0,uVar1,0xa0,param_2,0,param_3);
  }
  return;
}

```

---

## dispatch_sig

```asm
// === 0863b0ba Timer_AssaultGhostTimer::dispatch_sig  [0x0863b0ba-0x863b241] ===
 863b0ba:	55                   	push   %ebp
 863b0bb:	89 e5                	mov    %esp,%ebp
 863b0bd:	56                   	push   %esi
 863b0be:	53                   	push   %ebx
 863b0bf:	83 ec 20             	sub    $0x20,%esp
 863b0c2:	e8 c7 10 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 863b0c7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 863b0ce:	00 
 863b0cf:	8b 55 0c             	mov    0xc(%ebp),%edx
 863b0d2:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b0d6:	89 04 24             	mov    %eax,(%esp)
 863b0d9:	e8 c6 96 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 863b0de:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863b0e1:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863b0e5:	75 0a                	jne    863b0f1 <_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij+0x37>
 863b0e7:	b8 00 00 00 00       	mov    $0x0,%eax
 863b0ec:	e9 4a 01 00 00       	jmp    863b23b <_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij+0x181>
 863b0f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b0f4:	89 04 24             	mov    %eax,(%esp)
 863b0f7:	e8 52 0b a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 863b0fc:	3b 45 14             	cmp    0x14(%ebp),%eax
 863b0ff:	0f 95 c0             	setne  %al
 863b102:	84 c0                	test   %al,%al
 863b104:	74 0a                	je     863b110 <_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij+0x56>
 863b106:	b8 00 00 00 00       	mov    $0x0,%eax
 863b10b:	e9 2b 01 00 00       	jmp    863b23b <_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij+0x181>
 863b110:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b113:	89 04 24             	mov    %eax,(%esp)
 863b116:	e8 bf f1 a9 ff       	call   80da2da <_ZN15CUserCharacInfo16IsCurCharacGhostEv>
 863b11b:	84 c0                	test   %al,%al
 863b11d:	0f 84 13 01 00 00    	je     863b236 <_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij+0x17c>
 863b123:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b126:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b12d:	00 
 863b12e:	89 04 24             	mov    %eax,(%esp)
 863b131:	e8 fa 5a cb ff       	call   82f0c30 <_ZN15CUserCharacInfo17SetCurCharacGhostEb>
 863b136:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b139:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b140:	00 
 863b141:	89 04 24             	mov    %eax,(%esp)
 863b144:	e8 bb 5a cb ff       	call   82f0c04 <_ZN15CUserCharacInfo24SetCurCharacChaosDieTimeEi>
 863b149:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b14c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b153:	00 
 863b154:	89 04 24             	mov    %eax,(%esp)
 863b157:	e8 98 3d 05 00       	call   868eef4 <_ZN15CUserCharacInfo27SetCurCharacChaosResponTimeEi>
 863b15c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b15f:	05 f4 96 07 00       	add    $0x796f4,%eax
 863b164:	89 04 24             	mov    %eax,(%esp)
 863b167:	e8 6e 4a bf ff       	call   822fbda <_ZN14CCharacterView20enableSaveCharacViewEv>
 863b16c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b16f:	89 04 24             	mov    %eax,(%esp)
 863b172:	e8 d5 2b f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 863b177:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b17a:	89 04 24             	mov    %eax,(%esp)
 863b17d:	e8 64 07 a9 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 863b182:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 863b189:	00 
 863b18a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b191:	00 
 863b192:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b195:	89 04 24             	mov    %eax,(%esp)
 863b198:	e8 5f 07 a9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 863b19d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b1a4:	00 
 863b1a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b1a8:	89 04 24             	mov    %eax,(%esp)
 863b1ab:	e8 70 07 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b1b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863b1b3:	89 04 24             	mov    %eax,(%esp)
 863b1b6:	e8 c1 f1 a9 ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 863b1bb:	0f b7 c0             	movzwl %ax,%eax
 863b1be:	89 44 24 04          	mov    %eax,0x4(%esp)
 863b1c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b1c5:	89 04 24             	mov    %eax,(%esp)
 863b1c8:	e8 d7 ec a9 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 863b1cd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 863b1d4:	00 
 863b1d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b1d8:	89 04 24             	mov    %eax,(%esp)
 863b1db:	e8 40 07 a9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 863b1e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 863b1e7:	00 
 863b1e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b1eb:	89 04 24             	mov    %eax,(%esp)
 863b1ee:	e8 65 07 a9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 863b1f3:	e8 af f1 a9 ff       	call   80da3a7 <_Z11G_GameWorldv>
 863b1f8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 863b1fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 863b1ff:	8d 55 e8             	lea    -0x18(%ebp),%edx
 863b202:	89 54 24 04          	mov    %edx,0x4(%esp)
 863b206:	89 04 24             	mov    %eax,(%esp)
 863b209:	e8 4e 97 af ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 863b20e:	eb 1b                	jmp    863b22b <_ZN23Timer_AssaultGhostTimer12dispatch_sigEiij+0x171>
 863b210:	89 d3                	mov    %edx,%ebx
 863b212:	89 c6                	mov    %eax,%esi
 863b214:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b217:	89 04 24             	mov    %eax,(%esp)
 863b21a:	e8 61 2c f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b21f:	89 f0                	mov    %esi,%eax
 863b221:	89 da                	mov    %ebx,%edx
 863b223:	89 04 24             	mov    %eax,(%esp)
 863b226:	e8 25 85 4a 00       	call   8ae3750 <_Unwind_Resume>
 863b22b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863b22e:	89 04 24             	mov    %eax,(%esp)
 863b231:	e8 4a 2c f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863b236:	b8 01 00 00 00       	mov    $0x1,%eax
 863b23b:	83 c4 20             	add    $0x20,%esp
 863b23e:	5b                   	pop    %ebx
 863b23f:	5e                   	pop    %esi
 863b240:	5d                   	pop    %ebp
 863b241:	c3                   	ret

```

```c
// Timer_AssaultGhostTimer::dispatch_sig @ 0x863b0ba

/* Timer_AssaultGhostTimer::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
Timer_AssaultGhostTimer::dispatch_sig
          (Timer_AssaultGhostTimer *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  GameWorld *this_00;
  PacketGuard local_1c [12];
  CUserCharacInfo *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (local_10 == (CUserCharacInfo *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUserCharacInfo::getCurCharacNo(local_10);
    if (uVar4 == param_3) {
      cVar1 = CUserCharacInfo::IsCurCharacGhost(local_10);
      if (cVar1 != '\0') {
        CUserCharacInfo::SetCurCharacGhost(local_10,false);
        CUserCharacInfo::SetCurCharacChaosDieTime(local_10,0);
        CUserCharacInfo::SetCurCharacChaosResponTime(local_10,0);
        CCharacterView::enableSaveCharacView((CCharacterView *)(local_10 + 0x796f4));
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 0863b17d to 0863b20d has its CatchHandler @ 0863b210 */
        InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,3);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
        uVar4 = CUser::get_unique_id((CUser *)local_10);
        InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,uVar4 & 0xffff);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_1c,(CUser *)local_10);
        PacketGuard::~PacketGuard(local_1c);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

