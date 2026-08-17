# Dispatcher_CallGuildInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08200448 Dispatcher_CallGuildInfo::dispatch_sig  [0x08200448-0x82006cf] ===
 8200448:	55                   	push   %ebp
 8200449:	89 e5                	mov    %esp,%ebp
 820044b:	57                   	push   %edi
 820044c:	56                   	push   %esi
 820044d:	53                   	push   %ebx
 820044e:	81 ec bc 01 00 00    	sub    $0x1bc,%esp
 8200454:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200457:	89 04 24             	mov    %eax,(%esp)
 820045a:	e8 2d 9f ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820045f:	83 f8 02             	cmp    $0x2,%eax
 8200462:	7e 0f                	jle    8200473 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x2b>
 8200464:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200467:	89 04 24             	mov    %eax,(%esp)
 820046a:	e8 c3 ff f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 820046f:	85 c0                	test   %eax,%eax
 8200471:	75 07                	jne    820047a <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x32>
 8200473:	b8 01 00 00 00       	mov    $0x1,%eax
 8200478:	eb 05                	jmp    820047f <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x37>
 820047a:	b8 00 00 00 00       	mov    $0x0,%eax
 820047f:	84 c0                	test   %al,%al
 8200481:	74 2b                	je     82004ae <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x66>
 8200483:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820048a:	00 
 820048b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200492:	00 
 8200493:	c7 44 24 04 20 f7 bc 	movl   $0x8bcf720,0x4(%esp)
 820049a:	08 
 820049b:	c7 04 24 e7 94 00 00 	movl   $0x94e7,(%esp)
 82004a2:	e8 30 04 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 82004a7:	89 c3                	mov    %eax,%ebx
 82004a9:	e9 15 02 00 00       	jmp    82006c3 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 82004ae:	8d 45 e3             	lea    -0x1d(%ebp),%eax
 82004b1:	89 44 24 04          	mov    %eax,0x4(%esp)
 82004b5:	8b 45 10             	mov    0x10(%ebp),%eax
 82004b8:	89 04 24             	mov    %eax,(%esp)
 82004bb:	e8 b0 ca 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82004c0:	83 f0 01             	xor    $0x1,%eax
 82004c3:	84 c0                	test   %al,%al
 82004c5:	74 2b                	je     82004f2 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0xaa>
 82004c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82004ce:	00 
 82004cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82004d6:	00 
 82004d7:	c7 44 24 04 20 f7 bc 	movl   $0x8bcf720,0x4(%esp)
 82004de:	08 
 82004df:	c7 04 24 ec 94 00 00 	movl   $0x94ec,(%esp)
 82004e6:	e8 ec 03 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 82004eb:	89 c3                	mov    %eax,%ebx
 82004ed:	e9 d1 01 00 00       	jmp    82006c3 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 82004f2:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 82004f6:	3c 5f                	cmp    $0x5f,%al
 82004f8:	76 2b                	jbe    8200525 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0xdd>
 82004fa:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8200501:	00 
 8200502:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200509:	00 
 820050a:	c7 44 24 04 20 f7 bc 	movl   $0x8bcf720,0x4(%esp)
 8200511:	08 
 8200512:	c7 04 24 f0 94 00 00 	movl   $0x94f0,(%esp)
 8200519:	e8 b9 03 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 820051e:	89 c3                	mov    %eax,%ebx
 8200520:	e9 9e 01 00 00       	jmp    82006c3 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 8200525:	8d 9d 58 fe ff ff    	lea    -0x1a8(%ebp),%ebx
 820052b:	b8 00 00 00 00       	mov    $0x0,%eax
 8200530:	ba 5f 00 00 00       	mov    $0x5f,%edx
 8200535:	89 df                	mov    %ebx,%edi
 8200537:	89 d1                	mov    %edx,%ecx
 8200539:	f3 ab                	rep stos %eax,%es:(%edi)
 820053b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8200542:	e9 06 01 00 00       	jmp    820064d <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x205>
 8200547:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 820054a:	8d 85 58 fe ff ff    	lea    -0x1a8(%ebp),%eax
 8200550:	c1 e2 02             	shl    $0x2,%edx
 8200553:	01 d0                	add    %edx,%eax
 8200555:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200559:	8b 45 10             	mov    0x10(%ebp),%eax
 820055c:	89 04 24             	mov    %eax,(%esp)
 820055f:	e8 dc cc 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 8200564:	83 f0 01             	xor    $0x1,%eax
 8200567:	84 c0                	test   %al,%al
 8200569:	74 2b                	je     8200596 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x14e>
 820056b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8200572:	00 
 8200573:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820057a:	00 
 820057b:	c7 44 24 04 20 f7 bc 	movl   $0x8bcf720,0x4(%esp)
 8200582:	08 
 8200583:	c7 04 24 f7 94 00 00 	movl   $0x94f7,(%esp)
 820058a:	e8 48 03 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 820058f:	89 c3                	mov    %eax,%ebx
 8200591:	e9 2d 01 00 00       	jmp    82006c3 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 8200596:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8200599:	8b 84 85 58 fe ff ff 	mov    -0x1a8(%ebp,%eax,4),%eax
 82005a0:	85 c0                	test   %eax,%eax
 82005a2:	0f 85 a1 00 00 00    	jne    8200649 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x201>
 82005a8:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82005ab:	89 04 24             	mov    %eax,(%esp)
 82005ae:	e8 99 d7 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 82005b3:	c7 44 24 08 4d 00 00 	movl   $0x4d,0x8(%esp)
 82005ba:	00 
 82005bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82005c2:	00 
 82005c3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82005c6:	89 04 24             	mov    %eax,(%esp)
 82005c9:	e8 2e b3 ec ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 82005ce:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 82005d5:	00 
 82005d6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82005d9:	89 04 24             	mov    %eax,(%esp)
 82005dc:	e8 3f b3 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82005e1:	c7 44 24 04 22 00 00 	movl   $0x22,0x4(%esp)
 82005e8:	00 
 82005e9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82005ec:	89 04 24             	mov    %eax,(%esp)
 82005ef:	e8 2c b3 ec ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 82005f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 82005fb:	00 
 82005fc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82005ff:	89 04 24             	mov    %eax,(%esp)
 8200602:	e8 51 b3 ec ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8200607:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 820060a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820060e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200611:	89 04 24             	mov    %eax,(%esp)
 8200614:	e8 a1 7f 44 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8200619:	bb 00 00 00 00       	mov    $0x0,%ebx
 820061e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8200621:	89 04 24             	mov    %eax,(%esp)
 8200624:	e8 57 d8 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8200629:	e9 95 00 00 00       	jmp    82006c3 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0x27b>
 820062e:	89 d3                	mov    %edx,%ebx
 8200630:	89 c6                	mov    %eax,%esi
 8200632:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8200635:	89 04 24             	mov    %eax,(%esp)
 8200638:	e8 43 d8 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820063d:	89 f0                	mov    %esi,%eax
 820063f:	89 da                	mov    %ebx,%edx
 8200641:	89 04 24             	mov    %eax,(%esp)
 8200644:	e8 07 31 8e 00       	call   8ae3750 <_Unwind_Resume>
 8200649:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 820064d:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8200651:	0f b6 c0             	movzbl %al,%eax
 8200654:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8200657:	0f 9f c0             	setg   %al
 820065a:	84 c0                	test   %al,%al
 820065c:	0f 85 e5 fe ff ff    	jne    8200547 <_ZN24Dispatcher_CallGuildInfo12dispatch_sigEP5CUserR9PacketBuf+0xff>
 8200662:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 8200666:	0f b6 f8             	movzbl %al,%edi
 8200669:	8b 45 0c             	mov    0xc(%ebp),%eax
 820066c:	89 04 24             	mov    %eax,(%esp)
 820066f:	e8 22 86 ec ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8200674:	89 c6                	mov    %eax,%esi
 8200676:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200679:	89 04 24             	mov    %eax,(%esp)
 820067c:	e8 cd b5 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8200681:	89 c3                	mov    %eax,%ebx
 8200683:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200686:	89 04 24             	mov    %eax,(%esp)
 8200689:	e8 02 b6 ec ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 820068e:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 8200694:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200698:	89 14 24             	mov    %edx,(%esp)
 820069b:	e8 18 cd f1 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 82006a0:	8d 95 58 fe ff ff    	lea    -0x1a8(%ebp),%edx
 82006a6:	89 54 24 10          	mov    %edx,0x10(%esp)
 82006aa:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 82006ae:	89 74 24 08          	mov    %esi,0x8(%esp)
 82006b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82006b6:	89 04 24             	mov    %eax,(%esp)
 82006b9:	e8 14 d7 26 00       	call   846ddd2 <_ZN17CGuildServerProxy17SendCallGuildInfoEjjhPj>
 82006be:	bb 00 00 00 00       	mov    $0x0,%ebx
 82006c3:	89 d8                	mov    %ebx,%eax
 82006c5:	81 c4 bc 01 00 00    	add    $0x1bc,%esp
 82006cb:	5b                   	pop    %ebx
 82006cc:	5e                   	pop    %esi
 82006cd:	5f                   	pop    %edi
 82006ce:	5d                   	pop    %ebp
 82006cf:	c3                   	ret

```

```c
// Dispatcher_CallGuildInfo::dispatch_sig @ 0x8200448

/* Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CallGuildInfo::dispatch_sig
          (Dispatcher_CallGuildInfo *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  CGuildServerProxy *this_00;
  uint *puVar7;
  byte bVar8;
  uint local_1ac [95];
  PacketGuard local_30 [15];
  byte local_21;
  int local_20;
  
  bVar8 = 0;
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 < 3) ||
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x94e7,"virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    cVar2 = PacketBuf::get_byte(param_2,&local_21);
    if (cVar2 == '\x01') {
      if (local_21 < 0x60) {
        puVar7 = local_1ac;
        for (iVar3 = 0x5f; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (local_20 = 0; local_20 < (int)(uint)local_21; local_20 = local_20 + 1) {
          cVar2 = PacketBuf::get_int(param_2,local_1ac + local_20);
          if (cVar2 != '\x01') {
            uVar4 = LineFunc(0x94f7,
                             "virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
            return uVar4;
          }
          if (local_1ac[local_20] == 0) {
            PacketGuard::PacketGuard(local_30);
                    /* try { // try from 082005c9 to 08200618 has its CatchHandler @ 0820062e */
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x4d);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,0x22);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
            CUser::Send(param_1,local_30);
            PacketGuard::~PacketGuard(local_30);
            return 0;
          }
        }
        uVar5 = CUser::GetUID(param_1);
        uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar4 = CUser::GetServerGroup(param_1);
        this_00 = (CGuildServerProxy *)
                  CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                            (GlobalData::s_guild_proxy_mgr,uVar4);
        CGuildServerProxy::SendCallGuildInfo(this_00,uVar6,uVar5,local_21,local_1ac);
        uVar4 = 0;
      }
      else {
        uVar4 = LineFunc(0x94f0,
                         "virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)",0,
                         0);
      }
    }
    else {
      uVar4 = LineFunc(0x94ec,
                       "virtual int Dispatcher_CallGuildInfo::dispatch_sig(CUser*, PacketBuf&)",0,0)
      ;
    }
  }
  return uVar4;
}

```

