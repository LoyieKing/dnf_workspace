# OneADayItemShopEvent

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## EndEvent

```asm
// === 081ba0ae OneADayItemShopEvent::EndEvent  [0x081ba0ae-0x81ba0ff] ===
 81ba0ae:	55                   	push   %ebp
 81ba0af:	89 e5                	mov    %esp,%ebp
 81ba0b1:	83 ec 28             	sub    $0x28,%esp
 81ba0b4:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba0b7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ba0be:	00 
 81ba0bf:	89 04 24             	mov    %eax,(%esp)
 81ba0c2:	e8 1b e4 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81ba0c7:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ba0ce:	00 
 81ba0cf:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 81ba0d6:	00 
 81ba0d7:	c7 44 24 04 c0 eb bb 	movl   $0x8bbebc0,0x4(%esp)
 81ba0de:	08 
 81ba0df:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ba0e2:	89 04 24             	mov    %eax,(%esp)
 81ba0e5:	e8 2e 56 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ba0ea:	c7 44 24 04 9c df bb 	movl   $0x8bbdf9c,0x4(%esp)
 81ba0f1:	08 
 81ba0f2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ba0f5:	89 04 24             	mov    %eax,(%esp)
 81ba0f8:	e8 8b 56 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ba0fd:	c9                   	leave
 81ba0fe:	c3                   	ret
 81ba0ff:	90                   	nop

```

```c
// OneADayItemShopEvent::EndEvent @ 0x81ba0ae

/* OneADayItemShopEvent::EndEvent() */

void __thiscall OneADayItemShopEvent::EndEvent(OneADayItemShopEvent *this)

{
  cMyTrace local_1c [24];
  
  CEventBase::SetEventFlag((CEventBase *)this,false);
  cMyTrace::cMyTrace(local_1c,"virtual void OneADayItemShopEvent::EndEvent()",0x2d,0);
  cMyTrace::operator()(local_1c,"OneADayItemShopEvent Event End!");
  return;
}

```

---

## OneADayItemShopEvent

```asm
// === 081b9fb4 OneADayItemShopEvent::OneADayItemShopEvent  [0x081b9fb4-0x81b9fcf] ===
 81b9fb4:	55                   	push   %ebp
 81b9fb5:	89 e5                	mov    %esp,%ebp
 81b9fb7:	83 ec 18             	sub    $0x18,%esp
 81b9fba:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9fbd:	89 04 24             	mov    %eax,(%esp)
 81b9fc0:	e8 67 0e f5 ff       	call   810ae2c <_ZN10CEventBaseC1Ev>
 81b9fc5:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9fc8:	c7 00 48 ec bb 08    	movl   $0x8bbec48,(%eax)
 81b9fce:	c9                   	leave
 81b9fcf:	c3                   	ret

```

```c
// OneADayItemShopEvent::OneADayItemShopEvent @ 0x81b9fb4

/* OneADayItemShopEvent::OneADayItemShopEvent() */

void __thiscall OneADayItemShopEvent::OneADayItemShopEvent(OneADayItemShopEvent *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__OneADayItemShopEvent_08bbec48;
  return;
}

```

---

## StartAction

```asm
// === 081ba100 OneADayItemShopEvent::StartAction  [0x081ba100-0x81ba115] ===
 81ba100:	55                   	push   %ebp
 81ba101:	89 e5                	mov    %esp,%ebp
 81ba103:	83 ec 18             	sub    $0x18,%esp
 81ba106:	e8 9c 02 f2 ff       	call   80da3a7 <_Z11G_GameWorldv>
 81ba10b:	89 04 24             	mov    %eax,(%esp)
 81ba10e:	e8 e5 56 51 00       	call   86cf7f8 <_ZN9GameWorld20ResetOneADayItemShopEv>
 81ba113:	c9                   	leave
 81ba114:	c3                   	ret
 81ba115:	90                   	nop

```

```c
// OneADayItemShopEvent::StartAction @ 0x81ba100

/* OneADayItemShopEvent::StartAction() */

void OneADayItemShopEvent::StartAction(void)

{
  G_GameWorld();
  GameWorld::ResetOneADayItemShop();
  return;
}

```

---

## StartEvent

```asm
// === 081ba01e OneADayItemShopEvent::StartEvent  [0x081ba01e-0x81ba039] ===
 81ba01e:	55                   	push   %ebp
 81ba01f:	89 e5                	mov    %esp,%ebp
 81ba021:	83 ec 18             	sub    $0x18,%esp
 81ba024:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba027:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ba02e:	00 
 81ba02f:	89 04 24             	mov    %eax,(%esp)
 81ba032:	e8 ab e4 f0 ff       	call   80c84e2 <_ZN10CEventBase12SetEventFlagEb>
 81ba037:	c9                   	leave
 81ba038:	c3                   	ret
 81ba039:	90                   	nop

```

```c
// OneADayItemShopEvent::StartEvent @ 0x81ba01e

/* OneADayItemShopEvent::StartEvent() */

void __thiscall OneADayItemShopEvent::StartEvent(OneADayItemShopEvent *this)

{
  CEventBase::SetEventFlag((CEventBase *)this,true);
  return;
}

```

---

## StartEvent_081ba03a

```asm
// === 081ba03a OneADayItemShopEvent::StartEvent  [0x081ba03a-0x81ba0ad] ===
 81ba03a:	55                   	push   %ebp
 81ba03b:	89 e5                	mov    %esp,%ebp
 81ba03d:	56                   	push   %esi
 81ba03e:	53                   	push   %ebx
 81ba03f:	83 ec 20             	sub    $0x20,%esp
 81ba042:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba045:	8b 00                	mov    (%eax),%eax
 81ba047:	83 c0 08             	add    $0x8,%eax
 81ba04a:	8b 10                	mov    (%eax),%edx
 81ba04c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba04f:	89 04 24             	mov    %eax,(%esp)
 81ba052:	ff d2                	call   *%edx
 81ba054:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba057:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 81ba05b:	0f bf f0             	movswl %ax,%esi
 81ba05e:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba061:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 81ba065:	0f bf d8             	movswl %ax,%ebx
 81ba068:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81ba06f:	00 
 81ba070:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 81ba077:	00 
 81ba078:	c7 44 24 04 00 ec bb 	movl   $0x8bbec00,0x4(%esp)
 81ba07f:	08 
 81ba080:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ba083:	89 04 24             	mov    %eax,(%esp)
 81ba086:	e8 8d 56 39 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81ba08b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81ba08f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ba093:	c7 44 24 04 68 df bb 	movl   $0x8bbdf68,0x4(%esp)
 81ba09a:	08 
 81ba09b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81ba09e:	89 04 24             	mov    %eax,(%esp)
 81ba0a1:	e8 e2 56 39 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81ba0a6:	83 c4 20             	add    $0x20,%esp
 81ba0a9:	5b                   	pop    %ebx
 81ba0aa:	5e                   	pop    %esi
 81ba0ab:	5d                   	pop    %ebp
 81ba0ac:	c3                   	ret
 81ba0ad:	90                   	nop

```

```c
// OneADayItemShopEvent::StartEvent @ 0x81ba03a

/* OneADayItemShopEvent::StartEvent(Word_Param) */

void OneADayItemShopEvent::StartEvent(int *param_1)

{
  short sVar1;
  int iVar2;
  cMyTrace local_1c [16];
  
  (**(code **)(*param_1 + 8))(param_1);
  sVar1 = *(short *)((int)param_1 + 6);
  iVar2 = param_1[1];
  cMyTrace::cMyTrace(local_1c,"virtual void OneADayItemShopEvent::StartEvent(Word_Param)",0x20,0);
  cMyTrace::operator()
            (local_1c,"OneADayItemShopEvent(AddInfo:%d,%d) Event Start!",(int)(short)iVar2,
             (int)sVar1);
  return;
}

```

---

## buyItemLog

```asm
// === 081ba5e8 OneADayItemShopEvent::buyItemLog  [0x081ba5e8-0x81ba801] ===
 81ba5e8:	55                   	push   %ebp
 81ba5e9:	89 e5                	mov    %esp,%ebp
 81ba5eb:	56                   	push   %esi
 81ba5ec:	53                   	push   %ebx
 81ba5ed:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 81ba5f3:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba5f6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ba5f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ba5fc:	8b 58 10             	mov    0x10(%eax),%ebx
 81ba5ff:	e8 97 1b f1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 81ba604:	8b 80 bc 8c 00 00    	mov    0x8cbc(%eax),%eax
 81ba60a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81ba60e:	89 04 24             	mov    %eax,(%esp)
 81ba611:	e8 6c 8a 35 00       	call   8513082 <_ZNK9CItemShop13IsOneADayShopEi>
 81ba616:	83 f0 01             	xor    $0x1,%eax
 81ba619:	84 c0                	test   %al,%al
 81ba61b:	0f 85 d6 01 00 00    	jne    81ba7f7 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x20f>
 81ba621:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81ba627:	89 04 24             	mov    %eax,(%esp)
 81ba62a:	e8 57 02 00 00       	call   81ba886 <_ZN19SIG_EVENT_STAGE_LOGC1Ev>
 81ba62f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ba632:	8b 40 04             	mov    0x4(%eax),%eax
 81ba635:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 81ba63b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ba63e:	8b 40 08             	mov    0x8(%eax),%eax
 81ba641:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 81ba647:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ba64a:	8b 40 0c             	mov    0xc(%eax),%eax
 81ba64d:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 81ba653:	c7 85 68 ff ff ff 6d 	movl   $0x6d,-0x98(%ebp)
 81ba65a:	00 00 00 
 81ba65d:	c7 85 78 ff ff ff 09 	movl   $0x9,-0x88(%ebp)
 81ba664:	00 00 00 
 81ba667:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba66a:	89 04 24             	mov    %eax,(%esp)
 81ba66d:	e8 5e bf 54 00       	call   87065d0 <_ZNSsC1Ev>
 81ba672:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81ba675:	89 04 24             	mov    %eax,(%esp)
 81ba678:	e8 53 5a 52 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81ba67d:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81ba680:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ba684:	c7 44 24 04 bc df bb 	movl   $0x8bbdfbc,0x4(%esp)
 81ba68b:	08 
 81ba68c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ba68f:	89 04 24             	mov    %eax,(%esp)
 81ba692:	e8 99 cf 54 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81ba697:	eb 18                	jmp    81ba6b1 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0xc9>
 81ba699:	89 d3                	mov    %edx,%ebx
 81ba69b:	89 c6                	mov    %eax,%esi
 81ba69d:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81ba6a0:	89 04 24             	mov    %eax,(%esp)
 81ba6a3:	e8 48 5a 52 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ba6a8:	89 f0                	mov    %esi,%eax
 81ba6aa:	89 da                	mov    %ebx,%edx
 81ba6ac:	e9 1e 01 00 00       	jmp    81ba7cf <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x1e7>
 81ba6b1:	8d 45 eb             	lea    -0x15(%ebp),%eax
 81ba6b4:	89 04 24             	mov    %eax,(%esp)
 81ba6b7:	e8 34 5a 52 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ba6bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ba6bf:	8b 40 14             	mov    0x14(%eax),%eax
 81ba6c2:	85 c0                	test   %eax,%eax
 81ba6c4:	0f 84 d3 00 00 00    	je     81ba79d <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x1b5>
 81ba6ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81ba6cd:	8b 40 14             	mov    0x14(%eax),%eax
 81ba6d0:	8d 50 02             	lea    0x2(%eax),%edx
 81ba6d3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ba6d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba6da:	89 04 24             	mov    %eax,(%esp)
 81ba6dd:	e8 b0 03 00 00       	call   81baa92 <_ZN5boost12lexical_castISsmEET_RKT0_>
 81ba6e2:	83 ec 04             	sub    $0x4,%esp
 81ba6e5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ba6e8:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81ba6eb:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ba6ef:	8d 55 f0             	lea    -0x10(%ebp),%edx
 81ba6f2:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba6f6:	89 04 24             	mov    %eax,(%esp)
 81ba6f9:	e8 3c 03 00 00       	call   81baa3a <_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_>
 81ba6fe:	83 ec 04             	sub    $0x4,%esp
 81ba701:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ba704:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba708:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba70b:	89 04 24             	mov    %eax,(%esp)
 81ba70e:	e8 ed d5 54 00       	call   8707d00 <_ZNSsaSERKSs>
 81ba713:	eb 15                	jmp    81ba72a <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x142>
 81ba715:	89 d3                	mov    %edx,%ebx
 81ba717:	89 c6                	mov    %eax,%esi
 81ba719:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ba71c:	89 04 24             	mov    %eax,(%esp)
 81ba71f:	e8 bc d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba724:	89 f0                	mov    %esi,%eax
 81ba726:	89 da                	mov    %ebx,%edx
 81ba728:	eb 0d                	jmp    81ba737 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x14f>
 81ba72a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81ba72d:	89 04 24             	mov    %eax,(%esp)
 81ba730:	e8 ab d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba735:	eb 15                	jmp    81ba74c <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x164>
 81ba737:	89 d3                	mov    %edx,%ebx
 81ba739:	89 c6                	mov    %eax,%esi
 81ba73b:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ba73e:	89 04 24             	mov    %eax,(%esp)
 81ba741:	e8 9a d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba746:	89 f0                	mov    %esi,%eax
 81ba748:	89 da                	mov    %ebx,%edx
 81ba74a:	eb 61                	jmp    81ba7ad <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x1c5>
 81ba74c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 81ba74f:	89 04 24             	mov    %eax,(%esp)
 81ba752:	e8 89 d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba757:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba75a:	89 04 24             	mov    %eax,(%esp)
 81ba75d:	e8 fe be 54 00       	call   8706660 <_ZNKSs4sizeEv>
 81ba762:	83 f8 63             	cmp    $0x63,%eax
 81ba765:	0f 96 c0             	setbe  %al
 81ba768:	84 c0                	test   %al,%al
 81ba76a:	74 31                	je     81ba79d <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x1b5>
 81ba76c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba76f:	89 04 24             	mov    %eax,(%esp)
 81ba772:	e8 e9 be 54 00       	call   8706660 <_ZNKSs4sizeEv>
 81ba777:	89 c3                	mov    %eax,%ebx
 81ba779:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba77c:	89 04 24             	mov    %eax,(%esp)
 81ba77f:	e8 6c bd 54 00       	call   87064f0 <_ZNKSs5c_strEv>
 81ba784:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ba788:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba78c:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81ba792:	83 c0 14             	add    $0x14,%eax
 81ba795:	89 04 24             	mov    %eax,(%esp)
 81ba798:	e8 03 31 ec ff       	call   807d8a0 <memcpy@plt>
 81ba79d:	8d 85 68 ff ff ff    	lea    -0x98(%ebp),%eax
 81ba7a3:	89 04 24             	mov    %eax,(%esp)
 81ba7a6:	e8 63 ea 28 00       	call   844920e <_ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG>
 81ba7ab:	eb 15                	jmp    81ba7c2 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x1da>
 81ba7ad:	89 d3                	mov    %edx,%ebx
 81ba7af:	89 c6                	mov    %eax,%esi
 81ba7b1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ba7b4:	89 04 24             	mov    %eax,(%esp)
 81ba7b7:	e8 24 d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba7bc:	89 f0                	mov    %esi,%eax
 81ba7be:	89 da                	mov    %ebx,%edx
 81ba7c0:	eb 0d                	jmp    81ba7cf <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x1e7>
 81ba7c2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ba7c5:	89 04 24             	mov    %eax,(%esp)
 81ba7c8:	e8 13 d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba7cd:	eb 1b                	jmp    81ba7ea <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x202>
 81ba7cf:	89 d3                	mov    %edx,%ebx
 81ba7d1:	89 c6                	mov    %eax,%esi
 81ba7d3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba7d6:	89 04 24             	mov    %eax,(%esp)
 81ba7d9:	e8 02 d4 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba7de:	89 f0                	mov    %esi,%eax
 81ba7e0:	89 da                	mov    %ebx,%edx
 81ba7e2:	89 04 24             	mov    %eax,(%esp)
 81ba7e5:	e8 66 8f 92 00       	call   8ae3750 <_Unwind_Resume>
 81ba7ea:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 81ba7ed:	89 04 24             	mov    %eax,(%esp)
 81ba7f0:	e8 eb d3 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba7f5:	eb 01                	jmp    81ba7f8 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg+0x210>
 81ba7f7:	90                   	nop
 81ba7f8:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81ba7fb:	83 c4 00             	add    $0x0,%esp
 81ba7fe:	5b                   	pop    %ebx
 81ba7ff:	5e                   	pop    %esi
 81ba800:	5d                   	pop    %ebp
 81ba801:	c3                   	ret

```

```c
// OneADayItemShopEvent::buyItemLog @ 0x81ba5e8

/* OneADayItemShopEvent::buyItemLog(DeliveryMsg&) */

void __thiscall OneADayItemShopEvent::buyItemLog(OneADayItemShopEvent *this,DeliveryMsg *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  void *__src;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [100];
  string local_24;
  string local_20 [7];
  allocator<char> local_19;
  string local_18;
  string local_14;
  DeliveryMsg *local_10;
  
  local_10 = param_1;
  iVar2 = G_CDataManager();
  cVar1 = CItemShop::IsOneADayShop(*(int *)(iVar2 + 0x8cbc));
  if (cVar1 == '\x01') {
    SIG_EVENT_STAGE_LOG::SIG_EVENT_STAGE_LOG((SIG_EVENT_STAGE_LOG *)&local_9c);
    local_98 = *(undefined4 *)(local_10 + 4);
    local_94 = *(undefined4 *)(local_10 + 8);
    local_90 = *(undefined4 *)(local_10 + 0xc);
    local_9c = 0x6d;
    local_8c = 9;
    std::string::string(local_20);
    std::allocator<char>::allocator();
                    /* try { // try from 081ba692 to 081ba696 has its CatchHandler @ 081ba699 */
    std::string::string((string *)&local_24,"/",(allocator *)&local_19);
    std::allocator<char>::~allocator(&local_19);
    if (*(int *)(local_10 + 0x14) != 0) {
                    /* try { // try from 081ba6dd to 081ba6e1 has its CatchHandler @ 081ba7ad */
      boost::lexical_cast<std::string,unsigned_long>
                (&local_14,(ulong *)(*(int *)(local_10 + 0x14) + 2));
                    /* try { // try from 081ba6f9 to 081ba6fd has its CatchHandler @ 081ba737 */
      std::operator+(&local_18,&local_14,&local_24);
                    /* try { // try from 081ba70e to 081ba712 has its CatchHandler @ 081ba715 */
      std::string::operator=(local_20,(string *)&local_18);
                    /* try { // try from 081ba730 to 081ba734 has its CatchHandler @ 081ba737 */
      std::string::~string((string *)&local_18);
                    /* try { // try from 081ba752 to 081ba7aa has its CatchHandler @ 081ba7ad */
      std::string::~string((string *)&local_14);
      uVar3 = std::string::size(local_20);
      if (uVar3 < 100) {
        __n = std::string::size(local_20);
        __src = (void *)std::string::c_str(local_20);
        memcpy(auStack_88,__src,__n);
      }
    }
    DB_InsertEventStageLog::makeRequest((SIG_EVENT_STAGE_LOG *)&local_9c);
                    /* try { // try from 081ba7c8 to 081ba7cc has its CatchHandler @ 081ba7cf */
    std::string::~string((string *)&local_24);
    std::string::~string(local_20);
  }
  return;
}

```

---

## delivery

```asm
// === 081ba116 OneADayItemShopEvent::delivery  [0x081ba116-0x81ba155] ===
 81ba116:	55                   	push   %ebp
 81ba117:	89 e5                	mov    %esp,%ebp
 81ba119:	83 ec 18             	sub    $0x18,%esp
 81ba11c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba11f:	8b 00                	mov    (%eax),%eax
 81ba121:	83 f8 01             	cmp    $0x1,%eax
 81ba124:	74 07                	je     81ba12d <_ZN20OneADayItemShopEvent8deliveryER11DeliveryMsg+0x17>
 81ba126:	83 f8 02             	cmp    $0x2,%eax
 81ba129:	74 16                	je     81ba141 <_ZN20OneADayItemShopEvent8deliveryER11DeliveryMsg+0x2b>
 81ba12b:	eb 26                	jmp    81ba153 <_ZN20OneADayItemShopEvent8deliveryER11DeliveryMsg+0x3d>
 81ba12d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba130:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba134:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba137:	89 04 24             	mov    %eax,(%esp)
 81ba13a:	e8 df 00 00 00       	call   81ba21e <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg>
 81ba13f:	eb 12                	jmp    81ba153 <_ZN20OneADayItemShopEvent8deliveryER11DeliveryMsg+0x3d>
 81ba141:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba144:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba148:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba14b:	89 04 24             	mov    %eax,(%esp)
 81ba14e:	e8 95 04 00 00       	call   81ba5e8 <_ZN20OneADayItemShopEvent10buyItemLogER11DeliveryMsg>
 81ba153:	c9                   	leave
 81ba154:	c3                   	ret
 81ba155:	90                   	nop

```

```c
// OneADayItemShopEvent::delivery @ 0x81ba116

/* OneADayItemShopEvent::delivery(DeliveryMsg&) */

void __thiscall OneADayItemShopEvent::delivery(OneADayItemShopEvent *this,DeliveryMsg *param_1)

{
  if (*(int *)param_1 == 1) {
    questClearLog(this,param_1);
  }
  else if (*(int *)param_1 == 2) {
    buyItemLog(this,param_1);
  }
  return;
}

```

---

## deliveryEnd

```asm
// === 081ba19c OneADayItemShopEvent::deliveryEnd  [0x081ba19c-0x81ba1e1] ===
 81ba19c:	55                   	push   %ebp
 81ba19d:	89 e5                	mov    %esp,%ebp
 81ba19f:	83 ec 18             	sub    $0x18,%esp
 81ba1a2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ba1a6:	74 36                	je     81ba1de <_ZN20OneADayItemShopEvent11deliveryEndEP9CDelivery+0x42>
 81ba1a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba1ab:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ba1af:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ba1b6:	00 
 81ba1b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba1ba:	89 04 24             	mov    %eax,(%esp)
 81ba1bd:	e8 38 c4 f5 ff       	call   81165fa <_ZN9CDelivery6detachEiP10CEventBase>
 81ba1c2:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba1c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ba1c9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ba1d0:	00 
 81ba1d1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba1d4:	89 04 24             	mov    %eax,(%esp)
 81ba1d7:	e8 1e c4 f5 ff       	call   81165fa <_ZN9CDelivery6detachEiP10CEventBase>
 81ba1dc:	eb 01                	jmp    81ba1df <_ZN20OneADayItemShopEvent11deliveryEndEP9CDelivery+0x43>
 81ba1de:	90                   	nop
 81ba1df:	c9                   	leave
 81ba1e0:	c3                   	ret
 81ba1e1:	90                   	nop

```

```c
// OneADayItemShopEvent::deliveryEnd @ 0x81ba19c

/* OneADayItemShopEvent::deliveryEnd(CDelivery*) */

void __thiscall OneADayItemShopEvent::deliveryEnd(OneADayItemShopEvent *this,CDelivery *param_1)

{
  if (param_1 != (CDelivery *)0x0) {
    CDelivery::detach((int)param_1,(CEventBase *)0x1);
    CDelivery::detach((int)param_1,(CEventBase *)0x2);
  }
  return;
}

```

---

## deliveryStart

```asm
// === 081ba156 OneADayItemShopEvent::deliveryStart  [0x081ba156-0x81ba19b] ===
 81ba156:	55                   	push   %ebp
 81ba157:	89 e5                	mov    %esp,%ebp
 81ba159:	83 ec 18             	sub    $0x18,%esp
 81ba15c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 81ba160:	74 36                	je     81ba198 <_ZN20OneADayItemShopEvent13deliveryStartEP9CDelivery+0x42>
 81ba162:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba165:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ba169:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81ba170:	00 
 81ba171:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba174:	89 04 24             	mov    %eax,(%esp)
 81ba177:	e8 7e c2 f5 ff       	call   81163fa <_ZN9CDelivery6attachEiP10CEventBase>
 81ba17c:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba17f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ba183:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 81ba18a:	00 
 81ba18b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba18e:	89 04 24             	mov    %eax,(%esp)
 81ba191:	e8 64 c2 f5 ff       	call   81163fa <_ZN9CDelivery6attachEiP10CEventBase>
 81ba196:	eb 01                	jmp    81ba199 <_ZN20OneADayItemShopEvent13deliveryStartEP9CDelivery+0x43>
 81ba198:	90                   	nop
 81ba199:	c9                   	leave
 81ba19a:	c3                   	ret
 81ba19b:	90                   	nop

```

```c
// OneADayItemShopEvent::deliveryStart @ 0x81ba156

/* OneADayItemShopEvent::deliveryStart(CDelivery*) */

void __thiscall OneADayItemShopEvent::deliveryStart(OneADayItemShopEvent *this,CDelivery *param_1)

{
  if (param_1 != (CDelivery *)0x0) {
    CDelivery::attach(param_1,1,(CEventBase *)this);
    CDelivery::attach(param_1,2,(CEventBase *)this);
  }
  return;
}

```

---

## isQuestId

```asm
// === 081ba1e2 OneADayItemShopEvent::isQuestId  [0x081ba1e2-0x81ba21d] ===
 81ba1e2:	55                   	push   %ebp
 81ba1e3:	89 e5                	mov    %esp,%ebp
 81ba1e5:	83 ec 10             	sub    $0x10,%esp
 81ba1e8:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 81ba1ef:	eb 1a                	jmp    81ba20b <_ZN20OneADayItemShopEvent9isQuestIdEi+0x29>
 81ba1f1:	8b 45 fc             	mov    -0x4(%ebp),%eax
 81ba1f4:	8b 04 85 68 01 37 09 	mov    0x9370168(,%eax,4),%eax
 81ba1fb:	3b 45 0c             	cmp    0xc(%ebp),%eax
 81ba1fe:	75 07                	jne    81ba207 <_ZN20OneADayItemShopEvent9isQuestIdEi+0x25>
 81ba200:	b8 01 00 00 00       	mov    $0x1,%eax
 81ba205:	eb 14                	jmp    81ba21b <_ZN20OneADayItemShopEvent9isQuestIdEi+0x39>
 81ba207:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 81ba20b:	83 7d fc 02          	cmpl   $0x2,-0x4(%ebp)
 81ba20f:	0f 9e c0             	setle  %al
 81ba212:	84 c0                	test   %al,%al
 81ba214:	75 db                	jne    81ba1f1 <_ZN20OneADayItemShopEvent9isQuestIdEi+0xf>
 81ba216:	b8 00 00 00 00       	mov    $0x0,%eax
 81ba21b:	c9                   	leave
 81ba21c:	c3                   	ret
 81ba21d:	90                   	nop

```

```c
// OneADayItemShopEvent::isQuestId @ 0x81ba1e2

/* OneADayItemShopEvent::isQuestId(int) */

undefined4 __thiscall OneADayItemShopEvent::isQuestId(OneADayItemShopEvent *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (2 < local_8) {
      return 0;
    }
    if (*(int *)(correctQuestIds + local_8 * 4) == param_1) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

---

## questClearLog

```asm
// === 081ba21e OneADayItemShopEvent::questClearLog  [0x081ba21e-0x81ba5e7] ===
 81ba21e:	55                   	push   %ebp
 81ba21f:	89 e5                	mov    %esp,%ebp
 81ba221:	56                   	push   %esi
 81ba222:	53                   	push   %ebx
 81ba223:	81 ec d0 00 00 00    	sub    $0xd0,%esp
 81ba229:	8b 45 0c             	mov    0xc(%ebp),%eax
 81ba22c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81ba22f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba232:	8b 40 10             	mov    0x10(%eax),%eax
 81ba235:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba239:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba23c:	89 04 24             	mov    %eax,(%esp)
 81ba23f:	e8 9e ff ff ff       	call   81ba1e2 <_ZN20OneADayItemShopEvent9isQuestIdEi>
 81ba244:	83 f0 01             	xor    $0x1,%eax
 81ba247:	84 c0                	test   %al,%al
 81ba249:	0f 85 8d 03 00 00    	jne    81ba5dc <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x3be>
 81ba24f:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81ba255:	89 04 24             	mov    %eax,(%esp)
 81ba258:	e8 29 06 00 00       	call   81ba886 <_ZN19SIG_EVENT_STAGE_LOGC1Ev>
 81ba25d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba260:	8b 40 04             	mov    0x4(%eax),%eax
 81ba263:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 81ba269:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba26c:	8b 40 08             	mov    0x8(%eax),%eax
 81ba26f:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 81ba275:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba278:	8b 40 0c             	mov    0xc(%eax),%eax
 81ba27b:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 81ba281:	c7 85 44 ff ff ff 6d 	movl   $0x6d,-0xbc(%ebp)
 81ba288:	00 00 00 
 81ba28b:	c7 85 54 ff ff ff 01 	movl   $0x1,-0xac(%ebp)
 81ba292:	00 00 00 
 81ba295:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba298:	89 04 24             	mov    %eax,(%esp)
 81ba29b:	e8 30 c3 54 00       	call   87065d0 <_ZNSsC1Ev>
 81ba2a0:	8d 45 cb             	lea    -0x35(%ebp),%eax
 81ba2a3:	89 04 24             	mov    %eax,(%esp)
 81ba2a6:	e8 25 5e 52 00       	call   86e00d0 <_ZNSaIcEC1Ev>
 81ba2ab:	8d 45 cb             	lea    -0x35(%ebp),%eax
 81ba2ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 81ba2b2:	c7 44 24 04 bc df bb 	movl   $0x8bbdfbc,0x4(%esp)
 81ba2b9:	08 
 81ba2ba:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81ba2bd:	89 04 24             	mov    %eax,(%esp)
 81ba2c0:	e8 6b d3 54 00       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 81ba2c5:	eb 18                	jmp    81ba2df <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0xc1>
 81ba2c7:	89 d3                	mov    %edx,%ebx
 81ba2c9:	89 c6                	mov    %eax,%esi
 81ba2cb:	8d 45 cb             	lea    -0x35(%ebp),%eax
 81ba2ce:	89 04 24             	mov    %eax,(%esp)
 81ba2d1:	e8 1a 5e 52 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ba2d6:	89 f0                	mov    %esi,%eax
 81ba2d8:	89 da                	mov    %ebx,%edx
 81ba2da:	e9 d5 02 00 00       	jmp    81ba5b4 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x396>
 81ba2df:	8d 45 cb             	lea    -0x35(%ebp),%eax
 81ba2e2:	89 04 24             	mov    %eax,(%esp)
 81ba2e5:	e8 06 5e 52 00       	call   86e00f0 <_ZNSaIcED1Ev>
 81ba2ea:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba2ed:	8b 40 20             	mov    0x20(%eax),%eax
 81ba2f0:	85 c0                	test   %eax,%eax
 81ba2f2:	74 19                	je     81ba30d <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0xef>
 81ba2f4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba2f7:	8b 40 20             	mov    0x20(%eax),%eax
 81ba2fa:	89 04 24             	mov    %eax,(%esp)
 81ba2fd:	e8 12 35 f2 ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 81ba302:	85 c0                	test   %eax,%eax
 81ba304:	74 07                	je     81ba30d <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0xef>
 81ba306:	b8 01 00 00 00       	mov    $0x1,%eax
 81ba30b:	eb 05                	jmp    81ba312 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0xf4>
 81ba30d:	b8 00 00 00 00       	mov    $0x0,%eax
 81ba312:	84 c0                	test   %al,%al
 81ba314:	0f 84 68 02 00 00    	je     81ba582 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x364>
 81ba31a:	b9 00 00 00 00       	mov    $0x0,%ecx
 81ba31f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81ba322:	8b 50 20             	mov    0x20(%eax),%edx
 81ba325:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ba328:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 81ba32c:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba330:	89 04 24             	mov    %eax,(%esp)
 81ba333:	e8 af 05 00 00       	call   81ba8e7 <_ZN5boost15foreach_detail_7containISt6vectorISt4pairIiiESaIS4_EEEENS0_8auto_anyIPT_EERS8_PN4mpl_5bool_ILb0EEE>
 81ba338:	83 ec 04             	sub    $0x4,%esp
 81ba33b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 81ba33e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81ba341:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81ba344:	89 04 24             	mov    %eax,(%esp)
 81ba347:	e8 ce 2b f1 ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 81ba34c:	84 c0                	test   %al,%al
 81ba34e:	0f 85 e8 01 00 00    	jne    81ba53c <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x31e>
 81ba354:	ba 00 00 00 00       	mov    $0x0,%edx
 81ba359:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81ba35c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ba360:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ba367:	00 
 81ba368:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81ba36b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba36f:	89 04 24             	mov    %eax,(%esp)
 81ba372:	e8 a1 05 00 00       	call   81ba918 <_ZN5boost15foreach_detail_5beginISt6vectorISt4pairIiiESaIS4_EEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISC_SD_EEPS9_>
 81ba377:	83 ec 04             	sub    $0x4,%esp
 81ba37a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 81ba37d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81ba380:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ba383:	89 04 24             	mov    %eax,(%esp)
 81ba386:	e8 8f 2b f1 ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 81ba38b:	84 c0                	test   %al,%al
 81ba38d:	0f 85 a9 01 00 00    	jne    81ba53c <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x31e>
 81ba393:	ba 00 00 00 00       	mov    $0x0,%edx
 81ba398:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ba39b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 81ba39f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ba3a6:	00 
 81ba3a7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81ba3aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba3ae:	89 04 24             	mov    %eax,(%esp)
 81ba3b1:	e8 ab 05 00 00       	call   81ba961 <_ZN5boost15foreach_detail_3endISt6vectorISt4pairIiiESaIS4_EEN4mpl_5bool_ILb0EEEEENS0_8auto_anyINS0_16foreach_iteratorIT_T0_E4typeEEERKNS0_13auto_any_baseEPNS0_9type2typeISC_SD_EEPS9_>
 81ba3b6:	83 ec 04             	sub    $0x4,%esp
 81ba3b9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81ba3bc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81ba3bf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ba3c2:	89 04 24             	mov    %eax,(%esp)
 81ba3c5:	e8 50 2b f1 ff       	call   80ccf1a <_ZNK5boost15foreach_detail_13auto_any_basecvbEv>
 81ba3ca:	84 c0                	test   %al,%al
 81ba3cc:	0f 85 6a 01 00 00    	jne    81ba53c <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x31e>
 81ba3d2:	c6 45 bf 01          	movb   $0x1,-0x41(%ebp)
 81ba3d6:	e9 24 01 00 00       	jmp    81ba4ff <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x2e1>
 81ba3db:	8d 45 bf             	lea    -0x41(%ebp),%eax
 81ba3de:	89 04 24             	mov    %eax,(%esp)
 81ba3e1:	e8 3e 2b f1 ff       	call   80ccf24 <_ZN5boost15foreach_detail_9set_falseERb>
 81ba3e6:	84 c0                	test   %al,%al
 81ba3e8:	0f 85 f6 00 00 00    	jne    81ba4e4 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x2c6>
 81ba3ee:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ba3f5:	00 
 81ba3f6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ba3f9:	89 04 24             	mov    %eax,(%esp)
 81ba3fc:	e8 f5 05 00 00       	call   81ba9f6 <_ZN5boost15foreach_detail_5derefISt6vectorISt4pairIiiESaIS4_EEN4mpl_5bool_ILb0EEEEENS0_17foreach_referenceIT_T0_E4typeERKNS0_13auto_any_baseEPNS0_9type2typeISB_SC_EE>
 81ba401:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81ba404:	e9 cc 00 00 00       	jmp    81ba4d5 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x2b7>
 81ba409:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81ba40c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ba40f:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba413:	89 04 24             	mov    %eax,(%esp)
 81ba416:	e8 f6 05 00 00       	call   81baa11 <_ZN5boost12lexical_castISsiEET_RKT0_>
 81ba41b:	83 ec 04             	sub    $0x4,%esp
 81ba41e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81ba421:	8d 55 e0             	lea    -0x20(%ebp),%edx
 81ba424:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ba428:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 81ba42b:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba42f:	89 04 24             	mov    %eax,(%esp)
 81ba432:	e8 03 06 00 00       	call   81baa3a <_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_>
 81ba437:	83 ec 04             	sub    $0x4,%esp
 81ba43a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81ba43d:	8d 55 c0             	lea    -0x40(%ebp),%edx
 81ba440:	89 54 24 08          	mov    %edx,0x8(%esp)
 81ba444:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81ba447:	89 54 24 04          	mov    %edx,0x4(%esp)
 81ba44b:	89 04 24             	mov    %eax,(%esp)
 81ba44e:	e8 e7 05 00 00       	call   81baa3a <_ZStplIcSt11char_traitsIcESaIcEESbIT_T0_T1_ERKS6_S8_>
 81ba453:	83 ec 04             	sub    $0x4,%esp
 81ba456:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81ba459:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba45d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba460:	89 04 24             	mov    %eax,(%esp)
 81ba463:	e8 98 d8 54 00       	call   8707d00 <_ZNSsaSERKSs>
 81ba468:	eb 15                	jmp    81ba47f <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x261>
 81ba46a:	89 d3                	mov    %edx,%ebx
 81ba46c:	89 c6                	mov    %eax,%esi
 81ba46e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81ba471:	89 04 24             	mov    %eax,(%esp)
 81ba474:	e8 67 d7 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba479:	89 f0                	mov    %esi,%eax
 81ba47b:	89 da                	mov    %ebx,%edx
 81ba47d:	eb 0d                	jmp    81ba48c <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x26e>
 81ba47f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81ba482:	89 04 24             	mov    %eax,(%esp)
 81ba485:	e8 56 d7 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba48a:	eb 15                	jmp    81ba4a1 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x283>
 81ba48c:	89 d3                	mov    %edx,%ebx
 81ba48e:	89 c6                	mov    %eax,%esi
 81ba490:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81ba493:	89 04 24             	mov    %eax,(%esp)
 81ba496:	e8 45 d7 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba49b:	89 f0                	mov    %esi,%eax
 81ba49d:	89 da                	mov    %ebx,%edx
 81ba49f:	eb 0d                	jmp    81ba4ae <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x290>
 81ba4a1:	8d 45 dc             	lea    -0x24(%ebp),%eax
 81ba4a4:	89 04 24             	mov    %eax,(%esp)
 81ba4a7:	e8 34 d7 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba4ac:	eb 18                	jmp    81ba4c6 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x2a8>
 81ba4ae:	89 d3                	mov    %edx,%ebx
 81ba4b0:	89 c6                	mov    %eax,%esi
 81ba4b2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ba4b5:	89 04 24             	mov    %eax,(%esp)
 81ba4b8:	e8 23 d7 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba4bd:	89 f0                	mov    %esi,%eax
 81ba4bf:	89 da                	mov    %ebx,%edx
 81ba4c1:	e9 cc 00 00 00       	jmp    81ba592 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x374>
 81ba4c6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81ba4c9:	89 04 24             	mov    %eax,(%esp)
 81ba4cc:	e8 0f d7 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba4d1:	c6 45 bf 01          	movb   $0x1,-0x41(%ebp)
 81ba4d5:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ba4d9:	83 f0 01             	xor    $0x1,%eax
 81ba4dc:	84 c0                	test   %al,%al
 81ba4de:	0f 85 25 ff ff ff    	jne    81ba409 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x1eb>
 81ba4e4:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ba4e8:	84 c0                	test   %al,%al
 81ba4ea:	74 13                	je     81ba4ff <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x2e1>
 81ba4ec:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81ba4f3:	00 
 81ba4f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ba4f7:	89 04 24             	mov    %eax,(%esp)
 81ba4fa:	e8 dc 04 00 00       	call   81ba9db <_ZN5boost15foreach_detail_4nextISt6vectorISt4pairIiiESaIS4_EEN4mpl_5bool_ILb0EEEEEvRKNS0_13auto_any_baseEPNS0_9type2typeIT_T0_EE>
 81ba4ff:	0f b6 45 bf          	movzbl -0x41(%ebp),%eax
 81ba503:	84 c0                	test   %al,%al
 81ba505:	74 28                	je     81ba52f <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x311>
 81ba507:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81ba50e:	00 
 81ba50f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81ba512:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba516:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81ba519:	89 04 24             	mov    %eax,(%esp)
 81ba51c:	e8 89 04 00 00       	call   81ba9aa <_ZN5boost15foreach_detail_4doneISt6vectorISt4pairIiiESaIS4_EEN4mpl_5bool_ILb0EEEEEbRKNS0_13auto_any_baseESC_PNS0_9type2typeIT_T0_EE>
 81ba521:	83 f0 01             	xor    $0x1,%eax
 81ba524:	84 c0                	test   %al,%al
 81ba526:	74 07                	je     81ba52f <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x311>
 81ba528:	b8 01 00 00 00       	mov    $0x1,%eax
 81ba52d:	eb 05                	jmp    81ba534 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x316>
 81ba52f:	b8 00 00 00 00       	mov    $0x0,%eax
 81ba534:	84 c0                	test   %al,%al
 81ba536:	0f 85 9f fe ff ff    	jne    81ba3db <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x1bd>
 81ba53c:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba53f:	89 04 24             	mov    %eax,(%esp)
 81ba542:	e8 19 c1 54 00       	call   8706660 <_ZNKSs4sizeEv>
 81ba547:	83 f8 63             	cmp    $0x63,%eax
 81ba54a:	0f 96 c0             	setbe  %al
 81ba54d:	84 c0                	test   %al,%al
 81ba54f:	74 31                	je     81ba582 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x364>
 81ba551:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba554:	89 04 24             	mov    %eax,(%esp)
 81ba557:	e8 04 c1 54 00       	call   8706660 <_ZNKSs4sizeEv>
 81ba55c:	89 c3                	mov    %eax,%ebx
 81ba55e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba561:	89 04 24             	mov    %eax,(%esp)
 81ba564:	e8 87 bf 54 00       	call   87064f0 <_ZNKSs5c_strEv>
 81ba569:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81ba56d:	89 44 24 04          	mov    %eax,0x4(%esp)
 81ba571:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81ba577:	83 c0 14             	add    $0x14,%eax
 81ba57a:	89 04 24             	mov    %eax,(%esp)
 81ba57d:	e8 1e 33 ec ff       	call   807d8a0 <memcpy@plt>
 81ba582:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 81ba588:	89 04 24             	mov    %eax,(%esp)
 81ba58b:	e8 7e ec 28 00       	call   844920e <_ZN22DB_InsertEventStageLog11makeRequestER19SIG_EVENT_STAGE_LOG>
 81ba590:	eb 15                	jmp    81ba5a7 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x389>
 81ba592:	89 d3                	mov    %edx,%ebx
 81ba594:	89 c6                	mov    %eax,%esi
 81ba596:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81ba599:	89 04 24             	mov    %eax,(%esp)
 81ba59c:	e8 3f d6 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba5a1:	89 f0                	mov    %esi,%eax
 81ba5a3:	89 da                	mov    %ebx,%edx
 81ba5a5:	eb 0d                	jmp    81ba5b4 <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x396>
 81ba5a7:	8d 45 c0             	lea    -0x40(%ebp),%eax
 81ba5aa:	89 04 24             	mov    %eax,(%esp)
 81ba5ad:	e8 2e d6 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba5b2:	eb 1b                	jmp    81ba5cf <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x3b1>
 81ba5b4:	89 d3                	mov    %edx,%ebx
 81ba5b6:	89 c6                	mov    %eax,%esi
 81ba5b8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba5bb:	89 04 24             	mov    %eax,(%esp)
 81ba5be:	e8 1d d6 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba5c3:	89 f0                	mov    %esi,%eax
 81ba5c5:	89 da                	mov    %ebx,%edx
 81ba5c7:	89 04 24             	mov    %eax,(%esp)
 81ba5ca:	e8 81 91 92 00       	call   8ae3750 <_Unwind_Resume>
 81ba5cf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81ba5d2:	89 04 24             	mov    %eax,(%esp)
 81ba5d5:	e8 06 d6 54 00       	call   8707be0 <_ZNSsD1Ev>
 81ba5da:	eb 01                	jmp    81ba5dd <_ZN20OneADayItemShopEvent13questClearLogER11DeliveryMsg+0x3bf>
 81ba5dc:	90                   	nop
 81ba5dd:	8d 65 f8             	lea    -0x8(%ebp),%esp
 81ba5e0:	83 c4 00             	add    $0x0,%esp
 81ba5e3:	5b                   	pop    %ebx
 81ba5e4:	5e                   	pop    %esi
 81ba5e5:	5d                   	pop    %ebp
 81ba5e6:	c3                   	ret
 81ba5e7:	90                   	nop

```

```c
// OneADayItemShopEvent::questClearLog @ 0x81ba21e

/* OneADayItemShopEvent::questClearLog(DeliveryMsg&) */

void __thiscall OneADayItemShopEvent::questClearLog(OneADayItemShopEvent *this,DeliveryMsg *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  size_t __n;
  void *__src;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 auStack_ac [103];
  bool local_45;
  string local_44;
  string local_40;
  allocator<char> local_39;
  vector local_38 [4];
  auto_any_base local_34 [4];
  auto_any_base local_30 [4];
  string local_2c;
  string local_28;
  string local_24;
  DeliveryMsg *local_20;
  type2type *local_1c;
  auto_any_base *local_18;
  auto_any_base *local_14;
  int *local_10;
  
  local_20 = param_1;
  cVar1 = isQuestId(this,*(int *)(param_1 + 0x10));
  if (cVar1 == '\x01') {
    SIG_EVENT_STAGE_LOG::SIG_EVENT_STAGE_LOG((SIG_EVENT_STAGE_LOG *)&local_c0);
    local_bc = *(undefined4 *)(local_20 + 4);
    local_b8 = *(undefined4 *)(local_20 + 8);
    local_b4 = *(undefined4 *)(local_20 + 0xc);
    local_c0 = 0x6d;
    local_b0 = 1;
    std::string::string((string *)&local_40);
    std::allocator<char>::allocator();
                    /* try { // try from 081ba2c0 to 081ba2c4 has its CatchHandler @ 081ba2c7 */
    std::string::string((string *)&local_44,"/",(allocator *)&local_39);
    std::allocator<char>::~allocator(&local_39);
    if ((*(int *)(local_20 + 0x20) == 0) ||
       (iVar3 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                          (*(vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> **)
                            (local_20 + 0x20)), iVar3 == 0)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* try { // try from 081ba333 to 081ba41a has its CatchHandler @ 081ba592 */
      boost::foreach_detail_::
      contain<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                (local_38,*(bool_ **)(local_20 + 0x20));
      local_1c = (type2type *)local_38;
      bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool
                        ((auto_any_base *)local_1c);
      if (!bVar2) {
        boost::foreach_detail_::
        begin<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                  (local_34,local_1c,(bool_ *)0x0);
        local_18 = local_34;
        bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_18);
        if (!bVar2) {
          boost::foreach_detail_::
          end<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                    (local_30,local_1c,(bool_ *)0x0);
          local_14 = local_30;
          bVar2 = boost::foreach_detail_::auto_any_base::operator_cast_to_bool(local_14);
          if (!bVar2) {
            local_45 = true;
            while( true ) {
              if ((local_45 == false) ||
                 (bVar2 = boost::foreach_detail_::
                          done<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                                    (local_18,local_14,(type2type *)0x0), bVar2)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) break;
              cVar1 = boost::foreach_detail_::set_false(&local_45);
              if (cVar1 == '\0') {
                local_10 = (int *)boost::foreach_detail_::
                                  deref<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                                            (local_18,(type2type *)0x0);
                while (local_45 != true) {
                  boost::lexical_cast<std::string,int>(&local_24,local_10);
                    /* try { // try from 081ba432 to 081ba436 has its CatchHandler @ 081ba4ae */
                  std::operator+(&local_28,&local_40,&local_24);
                    /* try { // try from 081ba44e to 081ba452 has its CatchHandler @ 081ba48c */
                  std::operator+(&local_2c,&local_28,&local_44);
                    /* try { // try from 081ba463 to 081ba467 has its CatchHandler @ 081ba46a */
                  std::string::operator=((string *)&local_40,(string *)&local_2c);
                    /* try { // try from 081ba485 to 081ba489 has its CatchHandler @ 081ba48c */
                  std::string::~string((string *)&local_2c);
                    /* try { // try from 081ba4a7 to 081ba4ab has its CatchHandler @ 081ba4ae */
                  std::string::~string((string *)&local_28);
                    /* try { // try from 081ba4cc to 081ba58f has its CatchHandler @ 081ba592 */
                  std::string::~string((string *)&local_24);
                  local_45 = true;
                }
              }
              if (local_45 != false) {
                boost::foreach_detail_::
                next<std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>,mpl_::bool_<false>>
                          (local_18,(type2type *)0x0);
              }
            }
          }
        }
      }
      uVar4 = std::string::size((string *)&local_40);
      if (uVar4 < 100) {
        __n = std::string::size((string *)&local_40);
        __src = (void *)std::string::c_str((string *)&local_40);
        memcpy(auStack_ac,__src,__n);
      }
    }
    DB_InsertEventStageLog::makeRequest((SIG_EVENT_STAGE_LOG *)&local_c0);
                    /* try { // try from 081ba5ad to 081ba5b1 has its CatchHandler @ 081ba5b4 */
    std::string::~string((string *)&local_44);
    std::string::~string((string *)&local_40);
    return;
  }
  return;
}

```

---

## ~OneADayItemShopEvent

```asm
// === 081b9fd0 OneADayItemShopEvent::~OneADayItemShopEvent  [0x081b9fd0-0x81b9fff] ===
 81b9fd0:	55                   	push   %ebp
 81b9fd1:	89 e5                	mov    %esp,%ebp
 81b9fd3:	83 ec 18             	sub    $0x18,%esp
 81b9fd6:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9fd9:	c7 00 48 ec bb 08    	movl   $0x8bbec48,(%eax)
 81b9fdf:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9fe2:	89 04 24             	mov    %eax,(%esp)
 81b9fe5:	e8 68 0e f5 ff       	call   810ae52 <_ZN10CEventBaseD1Ev>
 81b9fea:	b8 00 00 00 00       	mov    $0x0,%eax
 81b9fef:	84 c0                	test   %al,%al
 81b9ff1:	74 0b                	je     81b9ffe <_ZN20OneADayItemShopEventD1Ev+0x2e>
 81b9ff3:	8b 45 08             	mov    0x8(%ebp),%eax
 81b9ff6:	89 04 24             	mov    %eax,(%esp)
 81b9ff9:	e8 f2 a4 56 00       	call   87244f0 <_ZdlPv>
 81b9ffe:	c9                   	leave
 81b9fff:	c3                   	ret

```

```c
// OneADayItemShopEvent::~OneADayItemShopEvent @ 0x81b9fd0

/* WARNING: Removing unreachable block (ram,0x081b9ff3) */
/* OneADayItemShopEvent::~OneADayItemShopEvent() */

void __thiscall OneADayItemShopEvent::~OneADayItemShopEvent(OneADayItemShopEvent *this)

{
  *(undefined ***)this = &PTR__OneADayItemShopEvent_08bbec48;
  CEventBase::~CEventBase((CEventBase *)this);
  return;
}

```

---

## ~OneADayItemShopEvent_081ba000

```asm
// === 081ba000 OneADayItemShopEvent::~OneADayItemShopEvent  [0x081ba000-0x81ba01d] ===
 81ba000:	55                   	push   %ebp
 81ba001:	89 e5                	mov    %esp,%ebp
 81ba003:	83 ec 18             	sub    $0x18,%esp
 81ba006:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba009:	89 04 24             	mov    %eax,(%esp)
 81ba00c:	e8 bf ff ff ff       	call   81b9fd0 <_ZN20OneADayItemShopEventD1Ev>
 81ba011:	8b 45 08             	mov    0x8(%ebp),%eax
 81ba014:	89 04 24             	mov    %eax,(%esp)
 81ba017:	e8 d4 a4 56 00       	call   87244f0 <_ZdlPv>
 81ba01c:	c9                   	leave
 81ba01d:	c3                   	ret

```

```c
// OneADayItemShopEvent::~OneADayItemShopEvent @ 0x81ba000

/* OneADayItemShopEvent::~OneADayItemShopEvent() */

void __thiscall OneADayItemShopEvent::~OneADayItemShopEvent(OneADayItemShopEvent *this)

{
  ~OneADayItemShopEvent(this);
  operator_delete(this);
  return;
}

```

