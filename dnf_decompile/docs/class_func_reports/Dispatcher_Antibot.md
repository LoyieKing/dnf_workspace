# Dispatcher_Antibot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820b50c Dispatcher_Antibot::dispatch_sig  [0x0820b50c-0x820b801] ===
 820b50c:	55                   	push   %ebp
 820b50d:	89 e5                	mov    %esp,%ebp
 820b50f:	57                   	push   %edi
 820b510:	56                   	push   %esi
 820b511:	53                   	push   %ebx
 820b512:	83 ec 6c             	sub    $0x6c,%esp
 820b515:	8d 45 b0             	lea    -0x50(%ebp),%eax
 820b518:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b51c:	8b 45 10             	mov    0x10(%ebp),%eax
 820b51f:	89 04 24             	mov    %eax,(%esp)
 820b522:	e8 19 1d 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 820b527:	83 f0 01             	xor    $0x1,%eax
 820b52a:	84 c0                	test   %al,%al
 820b52c:	74 29                	je     820b557 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x4b>
 820b52e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b535:	00 
 820b536:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b53d:	00 
 820b53e:	c7 44 24 04 00 e1 bc 	movl   $0x8bce100,0x4(%esp)
 820b545:	08 
 820b546:	c7 04 24 c1 a7 00 00 	movl   $0xa7c1,(%esp)
 820b54d:	e8 85 53 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b552:	e9 a3 02 00 00       	jmp    820b7fa <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x2ee>
 820b557:	8b 45 10             	mov    0x10(%ebp),%eax
 820b55a:	89 04 24             	mov    %eax,(%esp)
 820b55d:	e8 ba 55 f0 ff       	call   8110b1c <_ZN9PacketBuf9get_indexEv>
 820b562:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b566:	8b 45 10             	mov    0x10(%ebp),%eax
 820b569:	89 04 24             	mov    %eax,(%esp)
 820b56c:	e8 c7 24 38 00       	call   858da38 <_ZN9PacketBuf11get_buf_ptrEi>
 820b571:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 820b574:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b577:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 820b57d:	85 c0                	test   %eax,%eax
 820b57f:	75 27                	jne    820b5a8 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x9c>
 820b581:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b584:	05 00 97 07 00       	add    $0x79700,%eax
 820b589:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820b590:	00 
 820b591:	89 04 24             	mov    %eax,(%esp)
 820b594:	e8 37 b8 47 00       	call   8686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>
 820b599:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b59c:	c7 80 00 cf 08 00 01 	movl   $0x1,0x8cf00(%eax)
 820b5a3:	00 00 00 
 820b5a6:	eb 45                	jmp    820b5ed <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0xe1>
 820b5a8:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b5ab:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 820b5b1:	83 f8 04             	cmp    $0x4,%eax
 820b5b4:	74 37                	je     820b5ed <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0xe1>
 820b5b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b5b9:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 820b5bf:	89 c2                	mov    %eax,%edx
 820b5c1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 820b5c4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 820b5c7:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 820b5cd:	89 54 24 10          	mov    %edx,0x10(%esp)
 820b5d1:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820b5d5:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 820b5dc:	00 
 820b5dd:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 820b5e4:	00 
 820b5e5:	89 0c 24             	mov    %ecx,(%esp)
 820b5e8:	e8 07 b8 47 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 820b5ed:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 820b5f1:	0f 84 22 01 00 00    	je     820b719 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x20d>
 820b5f7:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 820b5fb:	75 40                	jne    820b63d <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x131>
 820b5fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b604:	00 
 820b605:	c7 44 24 08 df a7 00 	movl   $0xa7df,0x8(%esp)
 820b60c:	00 
 820b60d:	c7 44 24 04 00 e1 bc 	movl   $0x8bce100,0x4(%esp)
 820b614:	08 
 820b615:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 820b618:	89 04 24             	mov    %eax,(%esp)
 820b61b:	e8 f8 40 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 820b620:	c7 44 24 04 88 2b bc 	movl   $0x8bc2b88,0x4(%esp)
 820b627:	08 
 820b628:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 820b62b:	89 04 24             	mov    %eax,(%esp)
 820b62e:	e8 55 41 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 820b633:	b8 00 00 00 00       	mov    $0x0,%eax
 820b638:	e9 bd 01 00 00       	jmp    820b7fa <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x2ee>
 820b63d:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 820b640:	83 c0 02             	add    $0x2,%eax
 820b643:	89 45 dc             	mov    %eax,-0x24(%ebp)
 820b646:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 820b64d:	83 7d dc 00          	cmpl   $0x0,-0x24(%ebp)
 820b651:	74 1a                	je     820b66d <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x161>
 820b653:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 820b65a:	00 
 820b65b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 820b65e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b662:	8d 45 ac             	lea    -0x54(%ebp),%eax
 820b665:	89 04 24             	mov    %eax,(%esp)
 820b668:	e8 33 22 e7 ff       	call   807d8a0 <memcpy@plt>
 820b66d:	8b 45 ac             	mov    -0x54(%ebp),%eax
 820b670:	89 04 24             	mov    %eax,(%esp)
 820b673:	e8 08 25 e7 ff       	call   807db80 <ntohl@plt>
 820b678:	89 45 e0             	mov    %eax,-0x20(%ebp)
 820b67b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b67e:	89 04 24             	mov    %eax,(%esp)
 820b681:	e8 16 52 02 00       	call   823089c <_ZNK5CUser25getCharacAntibotSerialNumEv>
 820b686:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 820b689:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 820b68d:	74 78                	je     820b707 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x1fb>
 820b68f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 820b692:	83 c0 01             	add    $0x1,%eax
 820b695:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 820b698:	74 6d                	je     820b707 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x1fb>
 820b69a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b69d:	89 04 24             	mov    %eax,(%esp)
 820b6a0:	e8 a9 05 ec ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 820b6a5:	89 c6                	mov    %eax,%esi
 820b6a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b6aa:	89 04 24             	mov    %eax,(%esp)
 820b6ad:	e8 bc ec ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820b6b2:	89 c3                	mov    %eax,%ebx
 820b6b4:	8b 7d ac             	mov    -0x54(%ebp),%edi
 820b6b7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b6be:	00 
 820b6bf:	c7 44 24 08 e9 a7 00 	movl   $0xa7e9,0x8(%esp)
 820b6c6:	00 
 820b6c7:	c7 44 24 04 00 e1 bc 	movl   $0x8bce100,0x4(%esp)
 820b6ce:	08 
 820b6cf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820b6d2:	89 04 24             	mov    %eax,(%esp)
 820b6d5:	e8 3e 40 34 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 820b6da:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 820b6dd:	89 44 24 18          	mov    %eax,0x18(%esp)
 820b6e1:	89 74 24 14          	mov    %esi,0x14(%esp)
 820b6e5:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 820b6e9:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 820b6ed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 820b6f0:	89 44 24 08          	mov    %eax,0x8(%esp)
 820b6f4:	c7 44 24 04 bc 2b bc 	movl   $0x8bc2bbc,0x4(%esp)
 820b6fb:	08 
 820b6fc:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 820b6ff:	89 04 24             	mov    %eax,(%esp)
 820b702:	e8 81 40 34 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 820b707:	8b 45 e0             	mov    -0x20(%ebp),%eax
 820b70a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b70e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b711:	89 04 24             	mov    %eax,(%esp)
 820b714:	e8 91 51 02 00       	call   82308aa <_ZN5CUser25setCharacAntibotSerialNumEi>
 820b719:	a1 e4 f7 41 09       	mov    0x941f7e4,%eax
 820b71e:	8b 00                	mov    (%eax),%eax
 820b720:	83 c0 0c             	add    $0xc,%eax
 820b723:	8b 38                	mov    (%eax),%edi
 820b725:	8b 45 b0             	mov    -0x50(%ebp),%eax
 820b728:	0f b7 f0             	movzwl %ax,%esi
 820b72b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b72e:	89 04 24             	mov    %eax,(%esp)
 820b731:	e8 38 ec ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820b736:	89 c3                	mov    %eax,%ebx
 820b738:	e8 44 0a ec ff       	call   80cc181 <_Z14G_CEnvironmentv>
 820b73d:	89 04 24             	mov    %eax,(%esp)
 820b740:	e8 d1 8d 02 00       	call   8234516 <_ZNK12CEnvironment18getProcessSequenceEv>
 820b745:	8b 15 e4 f7 41 09    	mov    0x941f7e4,%edx
 820b74b:	89 74 24 14          	mov    %esi,0x14(%esp)
 820b74f:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 820b752:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 820b756:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820b75a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b761:	00 
 820b762:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b766:	89 14 24             	mov    %edx,(%esp)
 820b769:	ff d7                	call   *%edi
 820b76b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 820b76e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b771:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 820b777:	83 f8 01             	cmp    $0x1,%eax
 820b77a:	75 27                	jne    820b7a3 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x297>
 820b77c:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b77f:	05 00 97 07 00       	add    $0x79700,%eax
 820b784:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820b78b:	00 
 820b78c:	89 04 24             	mov    %eax,(%esp)
 820b78f:	e8 3c b6 47 00       	call   8686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>
 820b794:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b797:	c7 80 00 cf 08 00 02 	movl   $0x2,0x8cf00(%eax)
 820b79e:	00 00 00 
 820b7a1:	eb 45                	jmp    820b7e8 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820b7a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b7a6:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 820b7ac:	83 f8 04             	cmp    $0x4,%eax
 820b7af:	74 37                	je     820b7e8 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x2dc>
 820b7b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b7b4:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 820b7ba:	89 c2                	mov    %eax,%edx
 820b7bc:	8b 45 b0             	mov    -0x50(%ebp),%eax
 820b7bf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 820b7c2:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 820b7c8:	89 54 24 10          	mov    %edx,0x10(%esp)
 820b7cc:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820b7d0:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 820b7d7:	00 
 820b7d8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 820b7df:	00 
 820b7e0:	89 0c 24             	mov    %ecx,(%esp)
 820b7e3:	e8 0c b6 47 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 820b7e8:	83 7d d8 ff          	cmpl   $0xffffffff,-0x28(%ebp)
 820b7ec:	75 07                	jne    820b7f5 <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x2e9>
 820b7ee:	b8 00 00 00 00       	mov    $0x0,%eax
 820b7f3:	eb 05                	jmp    820b7fa <_ZN18Dispatcher_Antibot12dispatch_sigEP5CUserR9PacketBuf+0x2ee>
 820b7f5:	b8 00 00 00 00       	mov    $0x0,%eax
 820b7fa:	83 c4 6c             	add    $0x6c,%esp
 820b7fd:	5b                   	pop    %ebx
 820b7fe:	5e                   	pop    %esi
 820b7ff:	5f                   	pop    %edi
 820b800:	5d                   	pop    %ebp
 820b801:	c3                   	ret

```

```c
// Dispatcher_Antibot::dispatch_sig @ 0x820b50c

/* Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_Antibot::dispatch_sig(Dispatcher_Antibot *this,CUser *param_1,PacketBuf *param_2)

{
  code *pcVar1;
  uint32_t uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  CEnvironment *this_00;
  uint uVar7;
  uint32_t local_58;
  uint local_54;
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  int local_30;
  int local_2c;
  void *local_28;
  uint32_t local_24;
  int local_20;
  
  cVar3 = PacketBuf::get_int(param_2,&local_54);
  if (cVar3 == '\x01') {
    iVar5 = PacketBuf::get_index(param_2);
    local_30 = PacketBuf::get_buf_ptr(param_2,iVar5);
    if (*(int *)(param_1 + 0x8cf00) == 0) {
      cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(param_1 + 0x79700),0);
      *(undefined4 *)(param_1 + 0x8cf00) = 1;
    }
    else if (*(int *)(param_1 + 0x8cf00) != 4) {
      cUserHistoryLog::AbnormalUser
                ((cUserHistoryLog *)(param_1 + 0x79700),4,0x25b,local_54,
                 *(undefined4 *)(param_1 + 0x8cf00));
    }
    if (local_30 != 0) {
      if (param_1 == (CUser *)0x0) {
        cMyTrace::cMyTrace(local_50,
                           "virtual int Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)",0xa7df
                           ,0);
        cMyTrace::operator()(local_50,"Antibot Packet log will write, but user ptr is null");
        return 0;
      }
      local_28 = (void *)(local_30 + 2);
      local_58 = 0;
      if (local_28 != (void *)0x0) {
        memcpy(&local_58,local_28,4);
      }
      local_24 = ntohl(local_58);
      local_20 = CUser::getCharacAntibotSerialNum(param_1);
      if ((local_20 != 0) && (local_20 + 1U != local_24)) {
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar6 = CUser::get_acc_id(param_1);
        uVar2 = local_58;
        cMyTrace::cMyTrace(local_40,
                           "virtual int Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)",0xa7e9
                           ,0);
        cMyTrace::operator()
                  (local_40,
                   "Antibot Packet Serial Number host_byte_order:%u, network_byte_order:%u, m_id:%u, charac_no:%d, pre_serial_number:%u"
                   ,local_24,uVar2,uVar6,uVar4,local_20);
      }
      CUser::setCharacAntibotSerialNum(param_1,local_24);
    }
    pcVar1 = *(code **)(*GlobalData::s_antibotChecker_ + 0xc);
    uVar7 = local_54 & 0xffff;
    uVar4 = CUser::get_acc_id(param_1);
    this_00 = (CEnvironment *)G_CEnvironment();
    uVar6 = CEnvironment::getProcessSequence(this_00);
    local_2c = (*pcVar1)(GlobalData::s_antibotChecker_,uVar6,0,uVar4,local_30,uVar7);
    if (*(int *)(param_1 + 0x8cf00) == 1) {
      cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(param_1 + 0x79700),1);
      *(undefined4 *)(param_1 + 0x8cf00) = 2;
    }
    else if (*(int *)(param_1 + 0x8cf00) != 4) {
      cUserHistoryLog::AbnormalUser
                ((cUserHistoryLog *)(param_1 + 0x79700),4,0x25b,local_54,
                 *(undefined4 *)(param_1 + 0x8cf00));
    }
    if (local_2c == -1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = LineFunc(0xa7c1,"virtual int Dispatcher_Antibot::dispatch_sig(CUser*, PacketBuf&)",0,0);
  }
  return uVar4;
}

```

