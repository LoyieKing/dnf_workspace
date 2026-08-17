# Dispatcher_Overflow_Info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821e4b6 Dispatcher_Overflow_Info::dispatch_sig  [0x0821e4b6-0x821e58b] ===
 821e4b6:	55                   	push   %ebp
 821e4b7:	89 e5                	mov    %esp,%ebp
 821e4b9:	53                   	push   %ebx
 821e4ba:	83 ec 24             	sub    $0x24,%esp
 821e4bd:	8d 45 eb             	lea    -0x15(%ebp),%eax
 821e4c0:	89 04 24             	mov    %eax,(%esp)
 821e4c3:	e8 28 d9 00 00       	call   822bdf0 <_ZN29Packet_Overflow_Statistic_AddC1Ev>
 821e4c8:	8d 45 eb             	lea    -0x15(%ebp),%eax
 821e4cb:	83 c0 0a             	add    $0xa,%eax
 821e4ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e4d2:	8b 45 10             	mov    0x10(%ebp),%eax
 821e4d5:	89 04 24             	mov    %eax,(%esp)
 821e4d8:	e8 93 ea 36 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 821e4dd:	83 f0 01             	xor    $0x1,%eax
 821e4e0:	84 c0                	test   %al,%al
 821e4e2:	74 26                	je     821e50a <_ZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBuf+0x54>
 821e4e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e4eb:	00 
 821e4ec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e4f3:	00 
 821e4f4:	c7 44 24 04 80 d2 bc 	movl   $0x8bcd280,0x4(%esp)
 821e4fb:	08 
 821e4fc:	c7 04 24 2f d5 00 00 	movl   $0xd52f,(%esp)
 821e503:	e8 cf 23 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e508:	eb 7b                	jmp    821e585 <_ZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBuf+0xcf>
 821e50a:	8d 45 eb             	lea    -0x15(%ebp),%eax
 821e50d:	83 c0 0b             	add    $0xb,%eax
 821e510:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e514:	8b 45 10             	mov    0x10(%ebp),%eax
 821e517:	89 04 24             	mov    %eax,(%esp)
 821e51a:	e8 91 eb 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821e51f:	83 f0 01             	xor    $0x1,%eax
 821e522:	84 c0                	test   %al,%al
 821e524:	74 26                	je     821e54c <_ZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBuf+0x96>
 821e526:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821e52d:	00 
 821e52e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821e535:	00 
 821e536:	c7 44 24 04 80 d2 bc 	movl   $0x8bcd280,0x4(%esp)
 821e53d:	08 
 821e53e:	c7 04 24 30 d5 00 00 	movl   $0xd530,(%esp)
 821e545:	e8 8d 23 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821e54a:	eb 39                	jmp    821e585 <_ZN24Dispatcher_Overflow_Info12dispatch_sigEP5CUserR9PacketBuf+0xcf>
 821e54c:	8d 5d eb             	lea    -0x15(%ebp),%ebx
 821e54f:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e552:	89 04 24             	mov    %eax,(%esp)
 821e555:	e8 36 d7 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821e55a:	8b 15 30 be 40 09    	mov    0x940be30,%edx
 821e560:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e564:	89 14 24             	mov    %edx,(%esp)
 821e567:	e8 8c 37 ef ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821e56c:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 821e573:	00 
 821e574:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821e578:	89 04 24             	mov    %eax,(%esp)
 821e57b:	e8 c4 3a 25 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 821e580:	b8 00 00 00 00       	mov    $0x0,%eax
 821e585:	83 c4 24             	add    $0x24,%esp
 821e588:	5b                   	pop    %ebx
 821e589:	5d                   	pop    %ebp
 821e58a:	c3                   	ret
 821e58b:	90                   	nop

```

```c
// Dispatcher_Overflow_Info::dispatch_sig @ 0x821e4b6

/* Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Overflow_Info::dispatch_sig
          (Dispatcher_Overflow_Info *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  undefined4 uVar2;
  CStatisticServerProxy *this_00;
  Packet_Overflow_Statistic_Add local_19 [10];
  uchar uStack_f;
  ushort auStack_e [3];
  
  Packet_Overflow_Statistic_Add::Packet_Overflow_Statistic_Add(local_19);
  cVar1 = PacketBuf::get_byte(param_2,&uStack_f);
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_2,auStack_e);
    if (cVar1 == '\x01') {
      uVar2 = CUser::GetServerGroup(param_1);
      this_00 = (CStatisticServerProxy *)
                CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                          (GlobalData::s_statistic_proxy_mgr,uVar2);
      CStatisticServerProxy::SendPacket(this_00,(char *)local_19,0xd);
      uVar2 = 0;
    }
    else {
      uVar2 = LineFunc(0xd530,
                       "virtual int Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  else {
    uVar2 = LineFunc(0xd52f,"virtual int Dispatcher_Overflow_Info::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  return uVar2;
}

```

