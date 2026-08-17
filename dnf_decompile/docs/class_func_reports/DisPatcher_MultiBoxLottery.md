# DisPatcher_MultiBoxLottery

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820b802 DisPatcher_MultiBoxLottery::dispatch_sig  [0x0820b802-0x820ba37] ===
 820b802:	55                   	push   %ebp
 820b803:	89 e5                	mov    %esp,%ebp
 820b805:	56                   	push   %esi
 820b806:	53                   	push   %ebx
 820b807:	83 ec 40             	sub    $0x40,%esp
 820b80a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b80d:	89 04 24             	mov    %eax,(%esp)
 820b810:	e8 77 eb ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820b815:	83 f8 02             	cmp    $0x2,%eax
 820b818:	0f 9e c0             	setle  %al
 820b81b:	84 c0                	test   %al,%al
 820b81d:	74 0a                	je     820b829 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x27>
 820b81f:	b8 00 00 00 00       	mov    $0x0,%eax
 820b824:	e9 07 02 00 00       	jmp    820ba30 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820b829:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b82c:	89 04 24             	mov    %eax,(%esp)
 820b82f:	e8 ca ea ec ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 820b834:	84 c0                	test   %al,%al
 820b836:	74 0a                	je     820b842 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x40>
 820b838:	b8 00 00 00 00       	mov    $0x0,%eax
 820b83d:	e9 ee 01 00 00       	jmp    820ba30 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820b842:	e8 9f 6d f5 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 820b847:	c7 44 24 0c 12 00 00 	movl   $0x12,0xc(%esp)
 820b84e:	00 
 820b84f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 820b856:	00 
 820b857:	8b 55 0c             	mov    0xc(%ebp),%edx
 820b85a:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b85e:	89 04 24             	mov    %eax,(%esp)
 820b861:	e8 52 2e f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 820b866:	84 c0                	test   %al,%al
 820b868:	74 25                	je     820b88f <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x8d>
 820b86a:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 820b871:	00 
 820b872:	c7 44 24 04 d3 00 00 	movl   $0xd3,0x4(%esp)
 820b879:	00 
 820b87a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b87d:	89 04 24             	mov    %eax,(%esp)
 820b880:	e8 bd 06 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820b885:	b8 00 00 00 00       	mov    $0x0,%eax
 820b88a:	e9 a1 01 00 00       	jmp    820ba30 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820b88f:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 820b894:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 820b89b:	00 
 820b89c:	8b 55 0c             	mov    0xc(%ebp),%edx
 820b89f:	89 54 24 04          	mov    %edx,0x4(%esp)
 820b8a3:	89 04 24             	mov    %eax,(%esp)
 820b8a6:	e8 57 d1 07 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 820b8ab:	89 45 f0             	mov    %eax,-0x10(%ebp)
 820b8ae:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 820b8b2:	74 27                	je     820b8db <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0xd9>
 820b8b4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 820b8b7:	0f b6 c0             	movzbl %al,%eax
 820b8ba:	89 44 24 08          	mov    %eax,0x8(%esp)
 820b8be:	c7 44 24 04 d3 00 00 	movl   $0xd3,0x4(%esp)
 820b8c5:	00 
 820b8c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b8c9:	89 04 24             	mov    %eax,(%esp)
 820b8cc:	e8 71 06 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820b8d1:	b8 00 00 00 00       	mov    $0x0,%eax
 820b8d6:	e9 55 01 00 00       	jmp    820ba30 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820b8db:	8d 45 df             	lea    -0x21(%ebp),%eax
 820b8de:	83 c0 0d             	add    $0xd,%eax
 820b8e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b8e5:	8b 45 10             	mov    0x10(%ebp),%eax
 820b8e8:	89 04 24             	mov    %eax,(%esp)
 820b8eb:	e8 c0 17 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 820b8f0:	83 f0 01             	xor    $0x1,%eax
 820b8f3:	84 c0                	test   %al,%al
 820b8f5:	74 29                	je     820b920 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x11e>
 820b8f7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b8fe:	00 
 820b8ff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b906:	00 
 820b907:	c7 44 24 04 a0 e0 bc 	movl   $0x8bce0a0,0x4(%esp)
 820b90e:	08 
 820b90f:	c7 04 24 38 a8 00 00 	movl   $0xa838,(%esp)
 820b916:	e8 bc 4f 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b91b:	e9 10 01 00 00       	jmp    820ba30 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820b920:	8d 45 df             	lea    -0x21(%ebp),%eax
 820b923:	83 c0 0f             	add    $0xf,%eax
 820b926:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b92a:	8b 45 10             	mov    0x10(%ebp),%eax
 820b92d:	89 04 24             	mov    %eax,(%esp)
 820b930:	e8 7b 17 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 820b935:	83 f0 01             	xor    $0x1,%eax
 820b938:	84 c0                	test   %al,%al
 820b93a:	74 29                	je     820b965 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x163>
 820b93c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820b943:	00 
 820b944:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820b94b:	00 
 820b94c:	c7 44 24 04 a0 e0 bc 	movl   $0x8bce0a0,0x4(%esp)
 820b953:	08 
 820b954:	c7 04 24 39 a8 00 00 	movl   $0xa839,(%esp)
 820b95b:	e8 77 4f 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820b960:	e9 cb 00 00 00       	jmp    820ba30 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x22e>
 820b965:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 820b969:	0f b7 d0             	movzwl %ax,%edx
 820b96c:	0f b7 45 ec          	movzwl -0x14(%ebp),%eax
 820b970:	0f b7 c0             	movzwl %ax,%eax
 820b973:	89 54 24 08          	mov    %edx,0x8(%esp)
 820b977:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b97b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b97e:	89 04 24             	mov    %eax,(%esp)
 820b981:	e8 e2 8f 46 00       	call   8674968 <_ZN5CUser21multibox_lottery_itemEii>
 820b986:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820b989:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 820b98d:	0f 8e 98 00 00 00    	jle    820ba2b <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x229>
 820b993:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820b996:	89 04 24             	mov    %eax,(%esp)
 820b999:	e8 ae 23 38 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 820b99e:	c7 44 24 08 d3 00 00 	movl   $0xd3,0x8(%esp)
 820b9a5:	00 
 820b9a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820b9ad:	00 
 820b9ae:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820b9b1:	89 04 24             	mov    %eax,(%esp)
 820b9b4:	e8 43 ff eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 820b9b9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820b9c0:	00 
 820b9c1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820b9c4:	89 04 24             	mov    %eax,(%esp)
 820b9c7:	e8 54 ff eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820b9cc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 820b9cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b9d3:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820b9d6:	89 04 24             	mov    %eax,(%esp)
 820b9d9:	e8 42 ff eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 820b9de:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 820b9e5:	00 
 820b9e6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820b9e9:	89 04 24             	mov    %eax,(%esp)
 820b9ec:	e8 67 ff eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 820b9f1:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820b9f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 820b9f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 820b9fb:	89 04 24             	mov    %eax,(%esp)
 820b9fe:	e8 b7 cb 43 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 820ba03:	eb 1b                	jmp    820ba20 <_ZN26DisPatcher_MultiBoxLottery12dispatch_sigEP5CUserR9PacketBuf+0x21e>
 820ba05:	89 d3                	mov    %edx,%ebx
 820ba07:	89 c6                	mov    %eax,%esi
 820ba09:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820ba0c:	89 04 24             	mov    %eax,(%esp)
 820ba0f:	e8 6c 24 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820ba14:	89 f0                	mov    %esi,%eax
 820ba16:	89 da                	mov    %ebx,%edx
 820ba18:	89 04 24             	mov    %eax,(%esp)
 820ba1b:	e8 30 7d 8d 00       	call   8ae3750 <_Unwind_Resume>
 820ba20:	8d 45 d0             	lea    -0x30(%ebp),%eax
 820ba23:	89 04 24             	mov    %eax,(%esp)
 820ba26:	e8 55 24 38 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 820ba2b:	b8 00 00 00 00       	mov    $0x0,%eax
 820ba30:	83 c4 40             	add    $0x40,%esp
 820ba33:	5b                   	pop    %ebx
 820ba34:	5e                   	pop    %esi
 820ba35:	5d                   	pop    %ebp
 820ba36:	c3                   	ret
 820ba37:	90                   	nop

```

```c
// DisPatcher_MultiBoxLottery::dispatch_sig @ 0x820b802

/* DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
DisPatcher_MultiBoxLottery::dispatch_sig
          (DisPatcher_MultiBoxLottery *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ServiceRestrictManager *pSVar4;
  PacketGuard local_34 [28];
  ushort local_18;
  ushort local_16;
  uint local_14;
  int local_10;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    cVar1 = CUser::CheckInTrade(param_1);
    if (cVar1 == '\0') {
      pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
      cVar1 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,0x12);
      if (cVar1 == '\0') {
        local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x18);
        if (local_14 == 0) {
          cVar1 = PacketBuf::get_short(param_2,&local_18);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_short(param_2,&local_16);
            if (cVar1 == '\x01') {
              local_10 = CUser::multibox_lottery_item(param_1,(uint)local_18,(uint)local_16);
              if (0 < local_10) {
                PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0820b9b4 to 0820ba02 has its CatchHandler @ 0820ba05 */
                InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xd3);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
                InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_10);
                InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
                CUser::Send(param_1,local_34);
                PacketGuard::~PacketGuard(local_34);
              }
              uVar3 = 0;
            }
            else {
              uVar3 = LineFunc(0xa839,
                               "virtual int DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0xa838,
                             "virtual int DisPatcher_MultiBoxLottery::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          CUser::SendCmdErrorPacket(param_1,0xd3,local_14 & 0xff);
          uVar3 = 0;
        }
      }
      else {
        CUser::SendCmdErrorPacket(param_1,0xd3,0xd1);
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

