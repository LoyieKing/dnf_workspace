# TimerEventChristmas

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863570a TimerEventChristmas::dispatch_sig  [0x0863570a-0x863575b] ===
 863570a:	55                   	push   %ebp
 863570b:	89 e5                	mov    %esp,%ebp
 863570d:	83 ec 18             	sub    $0x18,%esp
 8635710:	8b 45 10             	mov    0x10(%ebp),%eax
 8635713:	89 04 24             	mov    %eax,(%esp)
 8635716:	e8 55 65 00 00       	call   863bc70 <_ZN12CServerEvent10SubExpRateEi>
 863571b:	8b 45 14             	mov    0x14(%ebp),%eax
 863571e:	89 04 24             	mov    %eax,(%esp)
 8635721:	e8 61 65 00 00       	call   863bc87 <_ZN12CServerEvent12TurnOffEventEi>
 8635726:	8b 45 14             	mov    0x14(%ebp),%eax
 8635729:	89 04 24             	mov    %eax,(%esp)
 863572c:	e8 63 3b eb ff       	call   84e9294 <_ZN12CServerEvent16GetEventIntervalEi>
 8635731:	0f bf d0             	movswl %ax,%edx
 8635734:	8b 45 14             	mov    0x14(%ebp),%eax
 8635737:	98                   	cwtl
 8635738:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863573f:	00 
 8635740:	89 54 24 08          	mov    %edx,0x8(%esp)
 8635744:	89 44 24 04          	mov    %eax,0x4(%esp)
 8635748:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 863574f:	e8 8a 9b e9 ff       	call   84cf2de <_ZN29Inter_MonitorServerEventStart19SendEventNotiPacketEbssP5CUser>
 8635754:	b8 01 00 00 00       	mov    $0x1,%eax
 8635759:	c9                   	leave
 863575a:	c3                   	ret
 863575b:	90                   	nop

```

```c
// TimerEventChristmas::dispatch_sig @ 0x863570a

/* TimerEventChristmas::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerEventChristmas::dispatch_sig(TimerEventChristmas *this,int param_1,int param_2,uint param_3)

{
  short sVar1;
  
  CServerEvent::SubExpRate(param_2);
  CServerEvent::TurnOffEvent(param_3);
  sVar1 = CServerEvent::GetEventInterval(param_3);
  Inter_MonitorServerEventStart::SendEventNotiPacket(false,(short)param_3,sVar1,(CUser *)0x0);
  return 1;
}

```

