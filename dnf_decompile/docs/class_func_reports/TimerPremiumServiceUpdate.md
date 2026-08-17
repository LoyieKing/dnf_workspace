# TimerPremiumServiceUpdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086348d4 TimerPremiumServiceUpdate::dispatch_sig  [0x086348d4-0x8634a2f] ===
 86348d4:	55                   	push   %ebp
 86348d5:	89 e5                	mov    %esp,%ebp
 86348d7:	53                   	push   %ebx
 86348d8:	83 ec 64             	sub    $0x64,%esp
 86348db:	e8 ae 78 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86348e0:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 86348e7:	00 
 86348e8:	8b 55 0c             	mov    0xc(%ebp),%edx
 86348eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 86348ef:	89 04 24             	mov    %eax,(%esp)
 86348f2:	e8 ad fe c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 86348f7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86348fa:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86348fe:	75 0a                	jne    863490a <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x36>
 8634900:	b8 00 00 00 00       	mov    $0x0,%eax
 8634905:	e9 1f 01 00 00       	jmp    8634a29 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x155>
 863490a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863490d:	89 04 24             	mov    %eax,(%esp)
 8634910:	e8 59 5a aa ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8634915:	3b 45 14             	cmp    0x14(%ebp),%eax
 8634918:	0f 95 c0             	setne  %al
 863491b:	84 c0                	test   %al,%al
 863491d:	74 0a                	je     8634929 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x55>
 863491f:	b8 00 00 00 00       	mov    $0x0,%eax
 8634924:	e9 00 01 00 00       	jmp    8634a29 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x155>
 8634929:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863492c:	89 04 24             	mov    %eax,(%esp)
 863492f:	e8 6e 75 00 00       	call   863bea2 <_ZNK5CUser13IsPremiumUserEv>
 8634934:	83 f0 01             	xor    $0x1,%eax
 8634937:	84 c0                	test   %al,%al
 8634939:	74 0a                	je     8634945 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x71>
 863493b:	b8 00 00 00 00       	mov    $0x0,%eax
 8634940:	e9 e4 00 00 00       	jmp    8634a29 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x155>
 8634945:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634948:	89 04 24             	mov    %eax,(%esp)
 863494b:	e8 44 75 00 00       	call   863be94 <_ZN5CUser15GetPremiumInfoWEv>
 8634950:	89 04 24             	mov    %eax,(%esp)
 8634953:	e8 b6 97 07 00       	call   86ae10e <_ZN8WongWork12CUserPremium15ReCalcAdvantageEv>
 8634958:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863495b:	89 04 24             	mov    %eax,(%esp)
 863495e:	e8 31 75 00 00       	call   863be94 <_ZN5CUser15GetPremiumInfoWEv>
 8634963:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8634966:	89 54 24 04          	mov    %edx,0x4(%esp)
 863496a:	89 04 24             	mov    %eax,(%esp)
 863496d:	e8 54 9f 07 00       	call   86ae8c6 <_ZN8WongWork12CUserPremium20RecalcAdditionalInfoEPK5CUser>
 8634972:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634975:	89 04 24             	mov    %eax,(%esp)
 8634978:	e8 0f 5a aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 863497d:	83 f8 03             	cmp    $0x3,%eax
 8634980:	0f 9f c0             	setg   %al
 8634983:	84 c0                	test   %al,%al
 8634985:	74 0b                	je     8634992 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0xbe>
 8634987:	8b 45 f0             	mov    -0x10(%ebp),%eax
 863498a:	89 04 24             	mov    %eax,(%esp)
 863498d:	e8 ae 1b 02 00       	call   8656540 <_ZN5CUser11SendFatigueEv>
 8634992:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8634999:	e8 00 73 a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 863499e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86349a1:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86349a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 86349a8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86349ab:	89 04 24             	mov    %eax,(%esp)
 86349ae:	e8 ad 99 a4 ff       	call   807e360 <localtime_r@plt>
 86349b3:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 86349ba:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 86349c1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 86349c8:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86349cb:	89 04 24             	mov    %eax,(%esp)
 86349ce:	e8 4d 9e a4 ff       	call   807e820 <mktime@plt>
 86349d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86349d6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 86349d9:	85 c0                	test   %eax,%eax
 86349db:	78 07                	js     86349e4 <_ZN25TimerPremiumServiceUpdate12dispatch_sigEiij+0x110>
 86349dd:	81 45 f4 80 51 01 00 	addl   $0x15180,-0xc(%ebp)
 86349e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86349e7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86349ea:	89 d3                	mov    %edx,%ebx
 86349ec:	29 c3                	sub    %eax,%ebx
 86349ee:	e8 89 1a ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86349f3:	8b 55 14             	mov    0x14(%ebp),%edx
 86349f6:	89 54 24 18          	mov    %edx,0x18(%esp)
 86349fa:	8b 55 10             	mov    0x10(%ebp),%edx
 86349fd:	89 54 24 14          	mov    %edx,0x14(%esp)
 8634a01:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8634a05:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8634a0c:	00 
 8634a0d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634a10:	89 54 24 08          	mov    %edx,0x8(%esp)
 8634a14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8634a1b:	00 
 8634a1c:	89 04 24             	mov    %eax,(%esp)
 8634a1f:	e8 f2 c3 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8634a24:	b8 01 00 00 00       	mov    $0x1,%eax
 8634a29:	83 c4 64             	add    $0x64,%esp
 8634a2c:	5b                   	pop    %ebx
 8634a2d:	5d                   	pop    %ebp
 8634a2e:	c3                   	ret
 8634a2f:	90                   	nop

```

```c
// TimerPremiumServiceUpdate::dispatch_sig @ 0x86348d4

/* TimerPremiumServiceUpdate::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerPremiumServiceUpdate::dispatch_sig
          (TimerPremiumServiceUpdate *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CUserPremium *pCVar5;
  TimerQueue *pTVar6;
  tm local_44;
  int local_18;
  CUser *local_14;
  int local_10;
  
  iVar2 = G_CGameManager();
  local_14 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (local_14 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_acc_id(local_14);
    if (uVar4 == param_3) {
      cVar1 = CUser::IsPremiumUser(local_14);
      if (cVar1 == '\x01') {
        pCVar5 = (CUserPremium *)CUser::GetPremiumInfoW(local_14);
        WongWork::CUserPremium::ReCalcAdvantage(pCVar5);
        pCVar5 = (CUserPremium *)CUser::GetPremiumInfoW(local_14);
        WongWork::CUserPremium::RecalcAdditionalInfo(pCVar5,local_14);
        iVar2 = CUser::get_state(local_14);
        if (3 < iVar2) {
          CUser::SendFatigue(local_14);
        }
        local_18 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
        localtime_r(&local_18,&local_44);
        local_44.tm_hour = 0;
        local_44.tm_min = 0;
        local_44.tm_sec = 0;
        local_10 = mktime(&local_44);
        if (-1 < local_44.tm_hour) {
          local_10 = local_10 + 0x15180;
        }
        iVar2 = local_10 - local_18;
        pTVar6 = (TimerQueue *)G_TimerQueue();
        TimerQueue::InsertTimer(pTVar6,0,param_1,5,iVar2,param_2,param_3);
        uVar3 = 1;
      }
      else {
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

