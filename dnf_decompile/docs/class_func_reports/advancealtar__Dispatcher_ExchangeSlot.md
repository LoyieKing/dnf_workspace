# advancealtar__Dispatcher_ExchangeSlot

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## check_error

```asm
// === 08140884 advancealtar::Dispatcher_ExchangeSlot::check_error  [0x08140884-0x81408a3] ===
 8140884:	55                   	push   %ebp
 8140885:	89 e5                	mov    %esp,%ebp
 8140887:	83 ec 08             	sub    $0x8,%esp
 814088a:	e8 5b c7 fe ff       	call   812cfea <_ZN12advancealtar18isOpenAdvanceAltarEv>
 814088f:	83 f0 01             	xor    $0x1,%eax
 8140892:	84 c0                	test   %al,%al
 8140894:	74 07                	je     814089d <_ZNK12advancealtar23Dispatcher_ExchangeSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x19>
 8140896:	b8 01 00 00 00       	mov    $0x1,%eax
 814089b:	eb 05                	jmp    81408a2 <_ZNK12advancealtar23Dispatcher_ExchangeSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE+0x1e>
 814089d:	b8 00 00 00 00       	mov    $0x0,%eax
 81408a2:	c9                   	leave
 81408a3:	c3                   	ret

```

```c
// advancealtar::Dispatcher_ExchangeSlot::check_error @ 0x8140884

/* advancealtar::Dispatcher_ExchangeSlot::check_error(CUser*, CMDPacketStruct::STBaseRequest&) const
    */

bool advancealtar::Dispatcher_ExchangeSlot::check_error(CUser *param_1,STBaseRequest *param_2)

{
  char cVar1;
  
  cVar1 = isOpenAdvanceAltar();
  return cVar1 != '\x01';
}

```

---

## dispatch_sig

```asm
// === 0814076e advancealtar::Dispatcher_ExchangeSlot::dispatch_sig  [0x0814076e-0x8140855] ===
 814076e:	55                   	push   %ebp
 814076f:	89 e5                	mov    %esp,%ebp
 8140771:	56                   	push   %esi
 8140772:	53                   	push   %ebx
 8140773:	83 ec 70             	sub    $0x70,%esp
 8140776:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 814077a:	74 1f                	je     814079b <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 814077c:	8b 45 0c             	mov    0xc(%ebp),%eax
 814077f:	89 04 24             	mov    %eax,(%esp)
 8140782:	e8 05 9c f9 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8140787:	83 f8 02             	cmp    $0x2,%eax
 814078a:	7e 0f                	jle    814079b <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 814078c:	8b 45 0c             	mov    0xc(%ebp),%eax
 814078f:	89 04 24             	mov    %eax,(%esp)
 8140792:	e8 9b fc fd ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8140797:	85 c0                	test   %eax,%eax
 8140799:	75 07                	jne    81407a2 <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0x34>
 814079b:	b8 01 00 00 00       	mov    $0x1,%eax
 81407a0:	eb 05                	jmp    81407a7 <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0x39>
 81407a2:	b8 00 00 00 00       	mov    $0x0,%eax
 81407a7:	84 c0                	test   %al,%al
 81407a9:	74 0a                	je     81407b5 <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0x47>
 81407ab:	bb e8 04 00 00       	mov    $0x4e8,%ebx
 81407b0:	e9 98 00 00 00       	jmp    814084d <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 81407b5:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81407b8:	89 04 24             	mov    %eax,(%esp)
 81407bb:	e8 d4 15 00 00       	call   8141d94 <_ZN15CMDPacketStruct28_ReqAdvanceAltarExchangeSlotC1Ev>
 81407c0:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81407c3:	89 04 24             	mov    %eax,(%esp)
 81407c6:	e8 f7 15 00 00       	call   8141dc2 <_ZN15CMDPacketStruct28_ResAdvanceAltarExchangeSlotC1Ev>
 81407cb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81407ce:	89 44 24 08          	mov    %eax,0x8(%esp)
 81407d2:	8b 45 10             	mov    0x10(%ebp),%eax
 81407d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81407d9:	8b 45 08             	mov    0x8(%ebp),%eax
 81407dc:	89 04 24             	mov    %eax,(%esp)
 81407df:	e8 72 00 00 00       	call   8140856 <_ZNK12advancealtar23Dispatcher_ExchangeSlot11read_packetER9PacketBufRN15CMDPacketStruct13STBaseRequestE>
 81407e4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81407e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81407eb:	8d 45 a0             	lea    -0x60(%ebp),%eax
 81407ee:	89 44 24 08          	mov    %eax,0x8(%esp)
 81407f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81407f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81407f9:	8b 45 08             	mov    0x8(%ebp),%eax
 81407fc:	89 04 24             	mov    %eax,(%esp)
 81407ff:	e8 a0 00 00 00       	call   81408a4 <_ZNK12advancealtar23Dispatcher_ExchangeSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE>
 8140804:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140807:	8d 45 d0             	lea    -0x30(%ebp),%eax
 814080a:	89 44 24 08          	mov    %eax,0x8(%esp)
 814080e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140811:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140815:	8b 45 08             	mov    0x8(%ebp),%eax
 8140818:	89 04 24             	mov    %eax,(%esp)
 814081b:	e8 46 01 00 00       	call   8140966 <_ZN12advancealtar23Dispatcher_ExchangeSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE>
 8140820:	bb 00 00 00 00       	mov    $0x0,%ebx
 8140825:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8140828:	89 04 24             	mov    %eax,(%esp)
 814082b:	e8 24 1e 00 00       	call   8142654 <_ZN15CMDPacketStruct28_ResAdvanceAltarExchangeSlotD1Ev>
 8140830:	eb 1b                	jmp    814084d <_ZN12advancealtar23Dispatcher_ExchangeSlot12dispatch_sigEP5CUserR9PacketBuf+0xdf>
 8140832:	89 d3                	mov    %edx,%ebx
 8140834:	89 c6                	mov    %eax,%esi
 8140836:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8140839:	89 04 24             	mov    %eax,(%esp)
 814083c:	e8 13 1e 00 00       	call   8142654 <_ZN15CMDPacketStruct28_ResAdvanceAltarExchangeSlotD1Ev>
 8140841:	89 f0                	mov    %esi,%eax
 8140843:	89 da                	mov    %ebx,%edx
 8140845:	89 04 24             	mov    %eax,(%esp)
 8140848:	e8 03 2f 9a 00       	call   8ae3750 <_Unwind_Resume>
 814084d:	89 d8                	mov    %ebx,%eax
 814084f:	83 c4 70             	add    $0x70,%esp
 8140852:	5b                   	pop    %ebx
 8140853:	5e                   	pop    %esi
 8140854:	5d                   	pop    %ebp
 8140855:	c3                   	ret

```

```c
// advancealtar::Dispatcher_ExchangeSlot::dispatch_sig @ 0x814076e

/* advancealtar::Dispatcher_ExchangeSlot::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
advancealtar::Dispatcher_ExchangeSlot::dispatch_sig
          (Dispatcher_ExchangeSlot *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _ReqAdvanceAltarExchangeSlot local_64 [48];
  _ResAdvanceAltarExchangeSlot local_34 [36];
  undefined4 local_10;
  
  if (param_1 != (CUser *)0x0) {
    iVar2 = CUser::get_state(param_1);
    if (2 < iVar2) {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
      if (iVar2 != 0) {
        bVar1 = false;
        goto LAB_081407a7;
      }
    }
  }
  bVar1 = true;
LAB_081407a7:
  if (bVar1) {
    uVar3 = 0x4e8;
  }
  else {
    CMDPacketStruct::_ReqAdvanceAltarExchangeSlot::_ReqAdvanceAltarExchangeSlot(local_64);
    CMDPacketStruct::_ResAdvanceAltarExchangeSlot::_ResAdvanceAltarExchangeSlot(local_34);
                    /* try { // try from 081407df to 0814081f has its CatchHandler @ 08140832 */
    read_packet(this,param_2,(STBaseRequest *)local_64);
    local_10 = process_packet(this,param_1,(STBaseRequest *)local_64,(STBaseResponse *)local_34);
    send_packet(this,param_1,(STBaseResponse *)local_34);
    uVar3 = 0;
    CMDPacketStruct::_ResAdvanceAltarExchangeSlot::~_ResAdvanceAltarExchangeSlot(local_34);
  }
  return uVar3;
}

```

---

## process_packet

```asm
// === 081408a4 advancealtar::Dispatcher_ExchangeSlot::process_packet  [0x081408a4-0x8140965] ===
 81408a4:	55                   	push   %ebp
 81408a5:	89 e5                	mov    %esp,%ebp
 81408a7:	83 ec 28             	sub    $0x28,%esp
 81408aa:	8b 45 10             	mov    0x10(%ebp),%eax
 81408ad:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81408b0:	8b 45 14             	mov    0x14(%ebp),%eax
 81408b3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81408b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81408b9:	8b 50 10             	mov    0x10(%eax),%edx
 81408bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81408bf:	89 50 08             	mov    %edx,0x8(%eax)
 81408c2:	8b 45 10             	mov    0x10(%ebp),%eax
 81408c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81408c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81408cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 81408d0:	8b 45 08             	mov    0x8(%ebp),%eax
 81408d3:	89 04 24             	mov    %eax,(%esp)
 81408d6:	e8 a9 ff ff ff       	call   8140884 <_ZNK12advancealtar23Dispatcher_ExchangeSlot11check_errorEP5CUserRN15CMDPacketStruct13STBaseRequestE>
 81408db:	89 c2                	mov    %eax,%edx
 81408dd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81408e0:	89 50 04             	mov    %edx,0x4(%eax)
 81408e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81408e6:	8b 40 04             	mov    0x4(%eax),%eax
 81408e9:	85 c0                	test   %eax,%eax
 81408eb:	74 07                	je     81408f4 <_ZNK12advancealtar23Dispatcher_ExchangeSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0x50>
 81408ed:	b8 00 00 00 00       	mov    $0x0,%eax
 81408f2:	eb 6f                	jmp    8140963 <_ZNK12advancealtar23Dispatcher_ExchangeSlot14process_packetEP5CUserRN15CMDPacketStruct13STBaseRequestERNS3_14STBaseResponseE+0xbf>
 81408f4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81408f7:	8d 48 24             	lea    0x24(%eax),%ecx
 81408fa:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81408fd:	8d 50 18             	lea    0x18(%eax),%edx
 8140900:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140903:	05 60 df 08 00       	add    $0x8df60,%eax
 8140908:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 814090c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8140910:	89 04 24             	mov    %eax,(%esp)
 8140913:	e8 f2 15 ff ff       	call   8131f0a <_ZN12advancealtar25CharacAdvanceAltarManager12exchangeSlotERN15CMDPacketStruct12_SetSlotDataES3_>
 8140918:	8b 55 f4             	mov    -0xc(%ebp),%edx
 814091b:	89 42 04             	mov    %eax,0x4(%edx)
 814091e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140921:	8d 50 18             	lea    0x18(%eax),%edx
 8140924:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140927:	83 c0 0c             	add    $0xc,%eax
 814092a:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8140931:	00 
 8140932:	89 54 24 04          	mov    %edx,0x4(%esp)
 8140936:	89 04 24             	mov    %eax,(%esp)
 8140939:	e8 62 cf f3 ff       	call   807d8a0 <memcpy@plt>
 814093e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8140941:	8d 50 24             	lea    0x24(%eax),%edx
 8140944:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140947:	83 c0 18             	add    $0x18,%eax
 814094a:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8140951:	00 
 8140952:	89 54 24 04          	mov    %edx,0x4(%esp)
 8140956:	89 04 24             	mov    %eax,(%esp)
 8140959:	e8 42 cf f3 ff       	call   807d8a0 <memcpy@plt>
 814095e:	b8 00 00 00 00       	mov    $0x0,%eax
 8140963:	c9                   	leave
 8140964:	c3                   	ret
 8140965:	90                   	nop

```

```c
// advancealtar::Dispatcher_ExchangeSlot::process_packet @ 0x81408a4

/* advancealtar::Dispatcher_ExchangeSlot::process_packet(CUser*, CMDPacketStruct::STBaseRequest&,
   CMDPacketStruct::STBaseResponse&) const */

undefined4 __thiscall
advancealtar::Dispatcher_ExchangeSlot::process_packet
          (Dispatcher_ExchangeSlot *this,CUser *param_1,STBaseRequest *param_2,
          STBaseResponse *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_2 + 0x10);
  uVar1 = check_error((CUser *)this,(STBaseRequest *)param_1);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) == 0) {
    uVar1 = CharacAdvanceAltarManager::exchangeSlot
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60),
                       (_SetSlotData *)(param_2 + 0x18),(_SetSlotData *)(param_2 + 0x24));
    *(undefined4 *)(param_3 + 4) = uVar1;
    memcpy(param_3 + 0xc,param_2 + 0x18,0xc);
    memcpy(param_3 + 0x18,param_2 + 0x24,0xc);
  }
  return 0;
}

```

---

## read_packet

```asm
// === 08140856 advancealtar::Dispatcher_ExchangeSlot::read_packet  [0x08140856-0x8140883] ===
 8140856:	55                   	push   %ebp
 8140857:	89 e5                	mov    %esp,%ebp
 8140859:	83 ec 28             	sub    $0x28,%esp
 814085c:	8b 45 10             	mov    0x10(%ebp),%eax
 814085f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140862:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8140865:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 814086c:	00 
 814086d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8140871:	8b 45 0c             	mov    0xc(%ebp),%eax
 8140874:	89 04 24             	mov    %eax,(%esp)
 8140877:	e8 36 cb 44 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 814087c:	b8 00 00 00 00       	mov    $0x0,%eax
 8140881:	c9                   	leave
 8140882:	c3                   	ret
 8140883:	90                   	nop

```

```c
// advancealtar::Dispatcher_ExchangeSlot::read_packet @ 0x8140856

/* advancealtar::Dispatcher_ExchangeSlot::read_packet(PacketBuf&, CMDPacketStruct::STBaseRequest&)
   const */

undefined4 __thiscall
advancealtar::Dispatcher_ExchangeSlot::read_packet
          (Dispatcher_ExchangeSlot *this,PacketBuf *param_1,STBaseRequest *param_2)

{
  PacketBuf::get_binary(param_1,(char *)param_2,0x30);
  return 0;
}

```

---

## send_packet

```asm
// === 08140966 advancealtar::Dispatcher_ExchangeSlot::send_packet  [0x08140966-0x8140a1b] ===
 8140966:	55                   	push   %ebp
 8140967:	89 e5                	mov    %esp,%ebp
 8140969:	56                   	push   %esi
 814096a:	53                   	push   %ebx
 814096b:	83 ec 20             	sub    $0x20,%esp
 814096e:	8b 45 10             	mov    0x10(%ebp),%eax
 8140971:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8140974:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140977:	89 04 24             	mov    %eax,(%esp)
 814097a:	e8 cd d3 44 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 814097f:	c7 44 24 08 41 02 00 	movl   $0x241,0x8(%esp)
 8140986:	00 
 8140987:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 814098e:	00 
 814098f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140992:	89 04 24             	mov    %eax,(%esp)
 8140995:	e8 62 af f8 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 814099a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81409a1:	00 
 81409a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81409a5:	89 04 24             	mov    %eax,(%esp)
 81409a8:	e8 73 af f8 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 81409ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81409b0:	c7 44 24 08 24 00 00 	movl   $0x24,0x8(%esp)
 81409b7:	00 
 81409b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 81409bc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81409bf:	89 04 24             	mov    %eax,(%esp)
 81409c2:	e8 41 d5 fd ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 81409c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81409ce:	00 
 81409cf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81409d2:	89 04 24             	mov    %eax,(%esp)
 81409d5:	e8 7e af f8 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 81409da:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81409dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 81409e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81409e4:	89 04 24             	mov    %eax,(%esp)
 81409e7:	e8 ce 7b 50 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 81409ec:	eb 1b                	jmp    8140a09 <_ZN12advancealtar23Dispatcher_ExchangeSlot11send_packetEP5CUserRN15CMDPacketStruct14STBaseResponseE+0xa3>
 81409ee:	89 d3                	mov    %edx,%ebx
 81409f0:	89 c6                	mov    %eax,%esi
 81409f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81409f5:	89 04 24             	mov    %eax,(%esp)
 81409f8:	e8 83 d4 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81409fd:	89 f0                	mov    %esi,%eax
 81409ff:	89 da                	mov    %ebx,%edx
 8140a01:	89 04 24             	mov    %eax,(%esp)
 8140a04:	e8 47 2d 9a 00       	call   8ae3750 <_Unwind_Resume>
 8140a09:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8140a0c:	89 04 24             	mov    %eax,(%esp)
 8140a0f:	e8 6c d4 44 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8140a14:	83 c4 20             	add    $0x20,%esp
 8140a17:	5b                   	pop    %ebx
 8140a18:	5e                   	pop    %esi
 8140a19:	5d                   	pop    %ebp
 8140a1a:	c3                   	ret
 8140a1b:	90                   	nop

```

```c
// advancealtar::Dispatcher_ExchangeSlot::send_packet @ 0x8140966

/* advancealtar::Dispatcher_ExchangeSlot::send_packet(CUser*, CMDPacketStruct::STBaseResponse&) */

void __thiscall
advancealtar::Dispatcher_ExchangeSlot::send_packet
          (Dispatcher_ExchangeSlot *this,CUser *param_1,STBaseResponse *param_2)

{
  PacketGuard local_1c [12];
  STBaseResponse *local_10;
  
  local_10 = param_2;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08140995 to 081409eb has its CatchHandler @ 081409ee */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x241);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_1c,(char *)local_10,0x24);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(param_1,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

