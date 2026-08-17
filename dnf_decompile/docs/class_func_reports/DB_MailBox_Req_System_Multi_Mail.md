# DB_MailBox_Req_System_Multi_Mail

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## _InsertLetter

```asm
// === 084435d4 DB_MailBox_Req_System_Multi_Mail::_InsertLetter  [0x084435d4-0x844372d] ===
 84435d4:	55                   	push   %ebp
 84435d5:	89 e5                	mov    %esp,%ebp
 84435d7:	57                   	push   %edi
 84435d8:	53                   	push   %ebx
 84435d9:	81 ec 60 02 00 00    	sub    $0x260,%esp
 84435df:	8d 95 bc fd ff ff    	lea    -0x244(%ebp),%edx
 84435e5:	b8 00 00 00 00       	mov    $0x0,%eax
 84435ea:	b9 7f 00 00 00       	mov    $0x7f,%ecx
 84435ef:	89 d7                	mov    %edx,%edi
 84435f1:	f3 ab                	rep stos %eax,%es:(%edi)
 84435f3:	89 fa                	mov    %edi,%edx
 84435f5:	66 89 02             	mov    %ax,(%edx)
 84435f8:	83 c2 02             	add    $0x2,%edx
 84435fb:	88 02                	mov    %al,(%edx)
 84435fd:	83 c2 01             	add    $0x1,%edx
 8443600:	8b 45 10             	mov    0x10(%ebp),%eax
 8443603:	83 c0 1e             	add    $0x1e,%eax
 8443606:	89 44 24 08          	mov    %eax,0x8(%esp)
 844360a:	8d 85 bc fd ff ff    	lea    -0x244(%ebp),%eax
 8443610:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443614:	8b 45 0c             	mov    0xc(%ebp),%eax
 8443617:	89 04 24             	mov    %eax,(%esp)
 844361a:	e8 8b 12 fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 844361f:	8d 55 bb             	lea    -0x45(%ebp),%edx
 8443622:	bb 3d 00 00 00       	mov    $0x3d,%ebx
 8443627:	b8 00 00 00 00       	mov    $0x0,%eax
 844362c:	89 d1                	mov    %edx,%ecx
 844362e:	83 e1 01             	and    $0x1,%ecx
 8443631:	85 c9                	test   %ecx,%ecx
 8443633:	74 08                	je     844363d <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x69>
 8443635:	88 02                	mov    %al,(%edx)
 8443637:	83 c2 01             	add    $0x1,%edx
 844363a:	83 eb 01             	sub    $0x1,%ebx
 844363d:	89 d1                	mov    %edx,%ecx
 844363f:	83 e1 02             	and    $0x2,%ecx
 8443642:	85 c9                	test   %ecx,%ecx
 8443644:	74 09                	je     844364f <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x7b>
 8443646:	66 89 02             	mov    %ax,(%edx)
 8443649:	83 c2 02             	add    $0x2,%edx
 844364c:	83 eb 02             	sub    $0x2,%ebx
 844364f:	89 d9                	mov    %ebx,%ecx
 8443651:	c1 e9 02             	shr    $0x2,%ecx
 8443654:	89 d7                	mov    %edx,%edi
 8443656:	f3 ab                	rep stos %eax,%es:(%edi)
 8443658:	89 fa                	mov    %edi,%edx
 844365a:	89 d9                	mov    %ebx,%ecx
 844365c:	83 e1 02             	and    $0x2,%ecx
 844365f:	85 c9                	test   %ecx,%ecx
 8443661:	74 06                	je     8443669 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x95>
 8443663:	66 89 02             	mov    %ax,(%edx)
 8443666:	83 c2 02             	add    $0x2,%edx
 8443669:	89 d9                	mov    %ebx,%ecx
 844366b:	83 e1 01             	and    $0x1,%ecx
 844366e:	85 c9                	test   %ecx,%ecx
 8443670:	74 05                	je     8443677 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0xa3>
 8443672:	88 02                	mov    %al,(%edx)
 8443674:	83 c2 01             	add    $0x1,%edx
 8443677:	8b 45 10             	mov    0x10(%ebp),%eax
 844367a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844367e:	8d 45 bb             	lea    -0x45(%ebp),%eax
 8443681:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443685:	8b 45 0c             	mov    0xc(%ebp),%eax
 8443688:	89 04 24             	mov    %eax,(%esp)
 844368b:	e8 1a 12 fb ff       	call   83f48aa <_ZN5MySQL13escape_stringEPcPKc>
 8443690:	8b 45 10             	mov    0x10(%ebp),%eax
 8443693:	8b 80 a5 03 00 00    	mov    0x3a5(%eax),%eax
 8443699:	89 c3                	mov    %eax,%ebx
 844369b:	8b 45 10             	mov    0x10(%ebp),%eax
 844369e:	8b 88 a1 03 00 00    	mov    0x3a1(%eax),%ecx
 84436a4:	8b 45 10             	mov    0x10(%ebp),%eax
 84436a7:	8b 90 22 01 00 00    	mov    0x122(%eax),%edx
 84436ad:	8b 45 10             	mov    0x10(%ebp),%eax
 84436b0:	8b 80 1e 01 00 00    	mov    0x11e(%eax),%eax
 84436b6:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 84436ba:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 84436be:	8d 8d bc fd ff ff    	lea    -0x244(%ebp),%ecx
 84436c4:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84436c8:	8d 4d bb             	lea    -0x45(%ebp),%ecx
 84436cb:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84436cf:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84436d3:	89 44 24 08          	mov    %eax,0x8(%esp)
 84436d7:	c7 44 24 04 5c c2 c4 	movl   $0x8c4c25c,0x4(%esp)
 84436de:	08 
 84436df:	8b 45 0c             	mov    0xc(%ebp),%eax
 84436e2:	89 04 24             	mov    %eax,(%esp)
 84436e5:	e8 d6 0a fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84436ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84436f1:	00 
 84436f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84436f5:	89 04 24             	mov    %eax,(%esp)
 84436f8:	e8 29 0c fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84436fd:	83 f0 01             	xor    $0x1,%eax
 8443700:	84 c0                	test   %al,%al
 8443702:	74 07                	je     844370b <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x137>
 8443704:	b8 00 00 00 00       	mov    $0x0,%eax
 8443709:	eb 19                	jmp    8443724 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x150>
 844370b:	8b 45 0c             	mov    0xc(%ebp),%eax
 844370e:	89 04 24             	mov    %eax,(%esp)
 8443711:	e8 be 63 fb ff       	call   83f9ad4 <_ZN8WongWork8DBCommon11GetIdentityEP5MySQL>
 8443716:	8b 55 10             	mov    0x10(%ebp),%edx
 8443719:	89 82 9d 03 00 00    	mov    %eax,0x39d(%edx)
 844371f:	b8 01 00 00 00       	mov    $0x1,%eax
 8443724:	81 c4 60 02 00 00    	add    $0x260,%esp
 844372a:	5b                   	pop    %ebx
 844372b:	5f                   	pop    %edi
 844372c:	5d                   	pop    %ebp
 844372d:	c3                   	ret

```

```c
// DB_MailBox_Req_System_Multi_Mail::_InsertLetter @ 0x84435d4

/* DB_MailBox_Req_System_Multi_Mail::_InsertLetter(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*) */

bool __thiscall
DB_MailBox_Req_System_Multi_Mail::_InsertLetter
          (DB_MailBox_Req_System_Multi_Mail *this,MySQL *param_1,
          SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_248 [2];
  char acStack_246 [509];
  char local_49;
  char local_48 [60];
  
  bVar8 = 0;
  pcVar5 = local_248;
  for (iVar3 = 0x7f; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  pcVar5[0] = '\0';
  pcVar5[1] = '\0';
  pcVar5[2] = '\0';
  MySQL::escape_string(param_1,local_248,(char *)(param_2 + 0x1e));
  pcVar5 = &local_49;
  uVar6 = 0x3d;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_49 = '\0';
    pcVar5 = local_48;
    uVar6 = 0x3c;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  MySQL::escape_string(param_1,&local_49,(char *)param_2);
  MySQL::set_query(param_1,
                   "inSert into letter(charac_no,send_charac_no,send_charac_name,letter_text,reg_date,stat) values(%d,%d,\'%s\',\'%s\',from_unixtime(%d),%d)"
                   ,*(undefined4 *)(param_2 + 0x11e),*(undefined4 *)(param_2 + 0x122),&local_49,
                   local_248,*(undefined4 *)(param_2 + 0x3a1),*(undefined4 *)(param_2 + 0x3a5));
  cVar1 = MySQL::exec(param_1,true);
  if (cVar1 == '\x01') {
    uVar2 = WongWork::DBCommon::GetIdentity(param_1);
    *(undefined4 *)(param_2 + 0x39d) = uVar2;
  }
  return cVar1 == '\x01';
}

```

---

## _InsertPostal

```asm
// === 0844372e DB_MailBox_Req_System_Multi_Mail::_InsertPostal  [0x0844372e-0x8443b6d] ===
 844372e:	55                   	push   %ebp
 844372f:	89 e5                	mov    %esp,%ebp
 8443731:	57                   	push   %edi
 8443732:	56                   	push   %esi
 8443733:	53                   	push   %ebx
 8443734:	81 ec dc 04 00 00    	sub    $0x4dc,%esp
 844373a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844373d:	89 04 24             	mov    %eax,(%esp)
 8443740:	e8 8b 2e 2c 00       	call   87065d0 <_ZNSsC1Ev>
 8443745:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443748:	89 04 24             	mov    %eax,(%esp)
 844374b:	e8 80 56 2c 00       	call   8708dd0 <_ZNSs5clearEv>
 8443750:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8443757:	e9 37 03 00 00       	jmp    8443a93 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x365>
 844375c:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8443760:	74 0d                	je     844376f <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x41>
 8443762:	8b 45 10             	mov    0x10(%ebp),%eax
 8443765:	c7 80 8c 03 00 00 00 	movl   $0x0,0x38c(%eax)
 844376c:	00 00 00 
 844376f:	c6 45 cf 00          	movb   $0x0,-0x31(%ebp)
 8443773:	66 c7 45 cc 00 00    	movw   $0x0,-0x34(%ebp)
 8443779:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844377c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 844377f:	05 30 01 00 00       	add    $0x130,%eax
 8443784:	03 45 10             	add    0x10(%ebp),%eax
 8443787:	8d 50 07             	lea    0x7(%eax),%edx
 844378a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 844378d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443791:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8443794:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443798:	89 14 24             	mov    %edx,(%esp)
 844379b:	e8 f0 9c 00 00       	call   844d490 <_ZNK17stAmplifyOption_t9getValuesERhRt>
 84437a0:	8d 9d cc fb ff ff    	lea    -0x434(%ebp),%ebx
 84437a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84437ab:	ba 00 01 00 00       	mov    $0x100,%edx
 84437b0:	89 df                	mov    %ebx,%edi
 84437b2:	89 d1                	mov    %edx,%ecx
 84437b4:	f3 ab                	rep stos %eax,%es:(%edi)
 84437b6:	8b 45 10             	mov    0x10(%ebp),%eax
 84437b9:	0f b6 80 94 03 00 00 	movzbl 0x394(%eax),%eax
 84437c0:	0f b6 c0             	movzbl %al,%eax
 84437c3:	89 85 90 fb ff ff    	mov    %eax,-0x470(%ebp)
 84437c9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84437cc:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84437cf:	05 50 01 00 00       	add    $0x150,%eax
 84437d4:	03 45 10             	add    0x10(%ebp),%eax
 84437d7:	83 c0 09             	add    $0x9,%eax
 84437da:	89 04 24             	mov    %eax,(%esp)
 84437dd:	e8 76 b5 cd ff       	call   811ed58 <_ZNK19UpgradeSeparateInfo18GetUpgradeSeparateEv>
 84437e2:	0f b6 c0             	movzbl %al,%eax
 84437e5:	89 85 94 fb ff ff    	mov    %eax,-0x46c(%ebp)
 84437eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84437ee:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84437f1:	05 30 01 00 00       	add    $0x130,%eax
 84437f6:	03 45 10             	add    0x10(%ebp),%eax
 84437f9:	83 c0 1b             	add    $0x1b,%eax
 84437fc:	c7 44 24 0c 0e 00 00 	movl   $0xe,0xc(%esp)
 8443803:	00 
 8443804:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443808:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844380f:	00 
 8443810:	8b 45 0c             	mov    0xc(%ebp),%eax
 8443813:	89 04 24             	mov    %eax,(%esp)
 8443816:	e8 0f 0d fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 844381b:	89 85 98 fb ff ff    	mov    %eax,-0x468(%ebp)
 8443821:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8443824:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8443827:	05 30 01 00 00       	add    $0x130,%eax
 844382c:	03 45 10             	add    0x10(%ebp),%eax
 844382f:	83 c0 0b             	add    $0xb,%eax
 8443832:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 8443839:	00 
 844383a:	89 44 24 08          	mov    %eax,0x8(%esp)
 844383e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8443845:	00 
 8443846:	8b 45 0c             	mov    0xc(%ebp),%eax
 8443849:	89 04 24             	mov    %eax,(%esp)
 844384c:	e8 d9 0c fb ff       	call   83f452a <_ZN5MySQL11blob_to_strEiPvi>
 8443851:	89 85 9c fb ff ff    	mov    %eax,-0x464(%ebp)
 8443857:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844385a:	8b 55 10             	mov    0x10(%ebp),%edx
 844385d:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8443860:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8443863:	05 20 01 00 00       	add    $0x120,%eax
 8443868:	8b 40 13             	mov    0x13(%eax),%eax
 844386b:	89 85 a0 fb ff ff    	mov    %eax,-0x460(%ebp)
 8443871:	8b 45 10             	mov    0x10(%ebp),%eax
 8443874:	8b 80 9d 03 00 00    	mov    0x39d(%eax),%eax
 844387a:	89 85 a4 fb ff ff    	mov    %eax,-0x45c(%ebp)
 8443880:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8443883:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8443886:	05 20 01 00 00       	add    $0x120,%eax
 844388b:	03 45 10             	add    0x10(%ebp),%eax
 844388e:	83 c0 06             	add    $0x6,%eax
 8443891:	89 04 24             	mov    %eax,(%esp)
 8443894:	e8 67 cf d0 ff       	call   8150800 <_ZNK10Inven_Item16isAvatarItemTypeEv>
 8443899:	0f b6 c0             	movzbl %al,%eax
 844389c:	89 85 a8 fb ff ff    	mov    %eax,-0x458(%ebp)
 84438a2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84438a5:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84438a8:	05 20 01 00 00       	add    $0x120,%eax
 84438ad:	03 45 10             	add    0x10(%ebp),%eax
 84438b0:	83 c0 06             	add    $0x6,%eax
 84438b3:	89 04 24             	mov    %eax,(%esp)
 84438b6:	e8 bb 22 ef ff       	call   8335b76 <_ZNK10Inven_Item18IsCreatureItemTypeEv>
 84438bb:	0f b6 c0             	movzbl %al,%eax
 84438be:	89 85 ac fb ff ff    	mov    %eax,-0x454(%ebp)
 84438c4:	8b 45 10             	mov    0x10(%ebp),%eax
 84438c7:	89 85 b0 fb ff ff    	mov    %eax,-0x450(%ebp)
 84438cd:	8b 45 10             	mov    0x10(%ebp),%eax
 84438d0:	8b 80 8c 03 00 00    	mov    0x38c(%eax),%eax
 84438d6:	89 85 b4 fb ff ff    	mov    %eax,-0x44c(%ebp)
 84438dc:	0f b7 45 cc          	movzwl -0x34(%ebp),%eax
 84438e0:	0f b7 c0             	movzwl %ax,%eax
 84438e3:	89 85 b8 fb ff ff    	mov    %eax,-0x448(%ebp)
 84438e9:	0f b6 45 cf          	movzbl -0x31(%ebp),%eax
 84438ed:	0f b6 c0             	movzbl %al,%eax
 84438f0:	89 85 bc fb ff ff    	mov    %eax,-0x444(%ebp)
 84438f6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84438f9:	6b c0 3d             	imul   $0x3d,%eax,%eax
 84438fc:	05 20 01 00 00       	add    $0x120,%eax
 8443901:	03 45 10             	add    0x10(%ebp),%eax
 8443904:	83 c0 06             	add    $0x6,%eax
 8443907:	89 04 24             	mov    %eax,(%esp)
 844390a:	e8 cd ce d0 ff       	call   81507dc <_ZNK10Inven_Item11GetItemAttrEv>
 844390f:	0f b6 c0             	movzbl %al,%eax
 8443912:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 8443918:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844391b:	8b 55 10             	mov    0x10(%ebp),%edx
 844391e:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8443921:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8443924:	05 20 01 00 00       	add    $0x120,%eax
 8443929:	0f b7 40 11          	movzwl 0x11(%eax),%eax
 844392d:	0f b7 c0             	movzwl %ax,%eax
 8443930:	89 85 c4 fb ff ff    	mov    %eax,-0x43c(%ebp)
 8443936:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8443939:	8b 55 10             	mov    0x10(%ebp),%edx
 844393c:	6b c0 3d             	imul   $0x3d,%eax,%eax
 844393f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8443942:	05 20 01 00 00       	add    $0x120,%eax
 8443947:	8b 78 0d             	mov    0xd(%eax),%edi
 844394a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844394d:	8b 55 10             	mov    0x10(%ebp),%edx
 8443950:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8443953:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8443956:	05 20 01 00 00       	add    $0x120,%eax
 844395b:	8b 70 08             	mov    0x8(%eax),%esi
 844395e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8443961:	8b 55 10             	mov    0x10(%ebp),%edx
 8443964:	6b c0 3d             	imul   $0x3d,%eax,%eax
 8443967:	8d 04 02             	lea    (%edx,%eax,1),%eax
 844396a:	05 26 01 00 00       	add    $0x126,%eax
 844396f:	0f b6 00             	movzbl (%eax),%eax
 8443972:	0f b6 d8             	movzbl %al,%ebx
 8443975:	8b 45 10             	mov    0x10(%ebp),%eax
 8443978:	8b 88 1e 01 00 00    	mov    0x11e(%eax),%ecx
 844397e:	8b 45 10             	mov    0x10(%ebp),%eax
 8443981:	8b 90 22 01 00 00    	mov    0x122(%eax),%edx
 8443987:	8b 45 10             	mov    0x10(%ebp),%eax
 844398a:	8b 80 a1 03 00 00    	mov    0x3a1(%eax),%eax
 8443990:	89 85 84 fb ff ff    	mov    %eax,-0x47c(%ebp)
 8443996:	8b 85 90 fb ff ff    	mov    -0x470(%ebp),%eax
 844399c:	89 44 24 54          	mov    %eax,0x54(%esp)
 84439a0:	8b 85 94 fb ff ff    	mov    -0x46c(%ebp),%eax
 84439a6:	89 44 24 50          	mov    %eax,0x50(%esp)
 84439aa:	8b 85 98 fb ff ff    	mov    -0x468(%ebp),%eax
 84439b0:	89 44 24 4c          	mov    %eax,0x4c(%esp)
 84439b4:	8b 85 9c fb ff ff    	mov    -0x464(%ebp),%eax
 84439ba:	89 44 24 48          	mov    %eax,0x48(%esp)
 84439be:	8b 85 a0 fb ff ff    	mov    -0x460(%ebp),%eax
 84439c4:	89 44 24 44          	mov    %eax,0x44(%esp)
 84439c8:	8b 85 a4 fb ff ff    	mov    -0x45c(%ebp),%eax
 84439ce:	89 44 24 40          	mov    %eax,0x40(%esp)
 84439d2:	8b 85 a8 fb ff ff    	mov    -0x458(%ebp),%eax
 84439d8:	89 44 24 3c          	mov    %eax,0x3c(%esp)
 84439dc:	8b 85 ac fb ff ff    	mov    -0x454(%ebp),%eax
 84439e2:	89 44 24 38          	mov    %eax,0x38(%esp)
 84439e6:	8b 85 b0 fb ff ff    	mov    -0x450(%ebp),%eax
 84439ec:	89 44 24 34          	mov    %eax,0x34(%esp)
 84439f0:	8b 85 b4 fb ff ff    	mov    -0x44c(%ebp),%eax
 84439f6:	89 44 24 30          	mov    %eax,0x30(%esp)
 84439fa:	8b 85 b8 fb ff ff    	mov    -0x448(%ebp),%eax
 8443a00:	89 44 24 2c          	mov    %eax,0x2c(%esp)
 8443a04:	8b 85 bc fb ff ff    	mov    -0x444(%ebp),%eax
 8443a0a:	89 44 24 28          	mov    %eax,0x28(%esp)
 8443a0e:	8b 85 c0 fb ff ff    	mov    -0x440(%ebp),%eax
 8443a14:	89 44 24 24          	mov    %eax,0x24(%esp)
 8443a18:	8b 85 c4 fb ff ff    	mov    -0x43c(%ebp),%eax
 8443a1e:	89 44 24 20          	mov    %eax,0x20(%esp)
 8443a22:	89 7c 24 1c          	mov    %edi,0x1c(%esp)
 8443a26:	89 74 24 18          	mov    %esi,0x18(%esp)
 8443a2a:	89 5c 24 14          	mov    %ebx,0x14(%esp)
 8443a2e:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8443a32:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8443a36:	8b 8d 84 fb ff ff    	mov    -0x47c(%ebp),%ecx
 8443a3c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8443a40:	c7 44 24 04 d0 6c c5 	movl   $0x8c56cd0,0x4(%esp)
 8443a47:	08 
 8443a48:	8d 85 cc fb ff ff    	lea    -0x434(%ebp),%eax
 8443a4e:	89 04 24             	mov    %eax,(%esp)
 8443a51:	e8 ea a9 c3 ff       	call   807e440 <sprintf@plt>
 8443a56:	8d 85 cc fb ff ff    	lea    -0x434(%ebp),%eax
 8443a5c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443a60:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443a63:	89 04 24             	mov    %eax,(%esp)
 8443a66:	e8 95 45 2c 00       	call   8708000 <_ZNSs6appendEPKc>
 8443a6b:	8b 45 10             	mov    0x10(%ebp),%eax
 8443a6e:	8b 80 88 03 00 00    	mov    0x388(%eax),%eax
 8443a74:	83 e8 01             	sub    $0x1,%eax
 8443a77:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8443a7a:	76 13                	jbe    8443a8f <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x361>
 8443a7c:	c7 44 24 04 3d c6 c4 	movl   $0x8c4c63d,0x4(%esp)
 8443a83:	08 
 8443a84:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443a87:	89 04 24             	mov    %eax,(%esp)
 8443a8a:	e8 71 45 2c 00       	call   8708000 <_ZNSs6appendEPKc>
 8443a8f:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 8443a93:	8b 45 10             	mov    0x10(%ebp),%eax
 8443a96:	8b 80 88 03 00 00    	mov    0x388(%eax),%eax
 8443a9c:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8443a9f:	0f 97 c0             	seta   %al
 8443aa2:	84 c0                	test   %al,%al
 8443aa4:	0f 85 b2 fc ff ff    	jne    844375c <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x2e>
 8443aaa:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443aad:	89 04 24             	mov    %eax,(%esp)
 8443ab0:	e8 3b 2a 2c 00       	call   87064f0 <_ZNKSs5c_strEv>
 8443ab5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443ab9:	c7 44 24 04 24 6d c5 	movl   $0x8c56d24,0x4(%esp)
 8443ac0:	08 
 8443ac1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8443ac4:	89 04 24             	mov    %eax,(%esp)
 8443ac7:	e8 f4 06 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8443acc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443ad3:	00 
 8443ad4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8443ad7:	89 04 24             	mov    %eax,(%esp)
 8443ada:	e8 47 08 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8443adf:	83 f0 01             	xor    $0x1,%eax
 8443ae2:	84 c0                	test   %al,%al
 8443ae4:	74 4e                	je     8443b34 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x406>
 8443ae6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443ae9:	89 04 24             	mov    %eax,(%esp)
 8443aec:	e8 ff 29 2c 00       	call   87064f0 <_ZNKSs5c_strEv>
 8443af1:	89 c3                	mov    %eax,%ebx
 8443af3:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8443afa:	00 
 8443afb:	c7 44 24 08 b5 a5 00 	movl   $0xa5b5,0x8(%esp)
 8443b02:	00 
 8443b03:	c7 44 24 04 80 b5 c5 	movl   $0x8c5b580,0x4(%esp)
 8443b0a:	08 
 8443b0b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8443b0e:	89 04 24             	mov    %eax,(%esp)
 8443b11:	e8 02 bc 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8443b16:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8443b1a:	c7 44 24 04 34 6e c5 	movl   $0x8c56e34,0x4(%esp)
 8443b21:	08 
 8443b22:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8443b25:	89 04 24             	mov    %eax,(%esp)
 8443b28:	e8 5b bc 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8443b2d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8443b32:	eb 22                	jmp    8443b56 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x428>
 8443b34:	bb 01 00 00 00       	mov    $0x1,%ebx
 8443b39:	eb 1b                	jmp    8443b56 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL+0x428>
 8443b3b:	89 d3                	mov    %edx,%ebx
 8443b3d:	89 c6                	mov    %eax,%esi
 8443b3f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443b42:	89 04 24             	mov    %eax,(%esp)
 8443b45:	e8 96 40 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8443b4a:	89 f0                	mov    %esi,%eax
 8443b4c:	89 da                	mov    %ebx,%edx
 8443b4e:	89 04 24             	mov    %eax,(%esp)
 8443b51:	e8 fa fb 69 00       	call   8ae3750 <_Unwind_Resume>
 8443b56:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8443b59:	89 04 24             	mov    %eax,(%esp)
 8443b5c:	e8 7f 40 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8443b61:	89 d8                	mov    %ebx,%eax
 8443b63:	81 c4 dc 04 00 00    	add    $0x4dc,%esp
 8443b69:	5b                   	pop    %ebx
 8443b6a:	5e                   	pop    %esi
 8443b6b:	5f                   	pop    %edi
 8443b6c:	5d                   	pop    %ebp
 8443b6d:	c3                   	ret

```

```c
// DB_MailBox_Req_System_Multi_Mail::_InsertPostal @ 0x844372e

/* DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*) */

bool __thiscall
DB_MailBox_Req_System_Multi_Mail::_InsertPostal
          (DB_MailBox_Req_System_Multi_Mail *this,MySQL *param_1,
          SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *param_2)

{
  SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL SVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  char *pcVar15;
  byte bVar16;
  char local_438 [1024];
  ushort local_38;
  byte local_35;
  string local_34 [4];
  cMyTrace local_30 [16];
  uint local_20;
  
  bVar16 = 0;
  std::string::string(local_34);
                    /* try { // try from 0844374b to 08443b2c has its CatchHandler @ 08443b3b */
  std::string::clear(local_34);
  for (local_20 = 0; local_20 < *(uint *)(param_2 + 0x388); local_20 = local_20 + 1) {
    if (local_20 != 0) {
      *(undefined4 *)(param_2 + 0x38c) = 0;
    }
    local_35 = 0;
    local_38 = 0;
    stAmplifyOption_t::getValues
              ((stAmplifyOption_t *)(param_2 + local_20 * 0x3d + 0x137),&local_35,&local_38);
    pcVar15 = local_438;
    for (iVar14 = 0x100; iVar14 != 0; iVar14 = iVar14 + -1) {
      pcVar15[0] = '\0';
      pcVar15[1] = '\0';
      pcVar15[2] = '\0';
      pcVar15[3] = '\0';
      pcVar15 = pcVar15 + ((uint)bVar16 * -2 + 1) * 4;
    }
    SVar1 = param_2[0x394];
    uVar5 = UpgradeSeparateInfo::GetUpgradeSeparate
                      ((UpgradeSeparateInfo *)(param_2 + local_20 * 0x3d + 0x159));
    uVar6 = MySQL::blob_to_str(param_1,1,param_2 + local_20 * 0x3d + 0x14b,0xe);
    uVar7 = MySQL::blob_to_str(param_1,0,param_2 + local_20 * 0x3d + 0x13b,10);
    uVar13 = *(undefined4 *)(param_2 + local_20 * 0x3d + 0x133);
    uVar2 = *(undefined4 *)(param_2 + 0x39d);
    uVar8 = Inven_Item::isAvatarItemType((Inven_Item *)(param_2 + local_20 * 0x3d + 0x126));
    uVar9 = Inven_Item::IsCreatureItemType((Inven_Item *)(param_2 + local_20 * 0x3d + 0x126));
    uVar3 = *(undefined4 *)(param_2 + 0x38c);
    uVar10 = (uint)local_38;
    uVar11 = (uint)local_35;
    uVar12 = Inven_Item::GetItemAttr((Inven_Item *)(param_2 + local_20 * 0x3d + 0x126));
    sprintf(local_438,
            "(from_unixtime(%d),%d,%d,%d,%d,%d,%d,%d,%d,%d,%d,\'%s\',%d,%d,%d,%d,\'%s\',\'%s\',%d,%d)"
            ,*(undefined4 *)(param_2 + 0x3a1),*(undefined4 *)(param_2 + 0x122),
            *(undefined4 *)(param_2 + 0x11e),(uint)(byte)param_2[local_20 * 0x3d + 0x126],
            *(undefined4 *)(param_2 + local_20 * 0x3d + 0x128),
            *(undefined4 *)(param_2 + local_20 * 0x3d + 0x12d),
            (uint)*(ushort *)(param_2 + local_20 * 0x3d + 0x131),uVar12 & 0xff,uVar11,uVar10,uVar3,
            param_2,uVar9 & 0xff,uVar8 & 0xff,uVar2,uVar13,uVar7,uVar6,uVar5 & 0xff,
            (uint)(byte)SVar1);
    std::string::append(local_34,local_438);
    if (local_20 < *(int *)(param_2 + 0x388) - 1U) {
      std::string::append(local_34,",");
    }
  }
  uVar13 = std::string::c_str(local_34);
  MySQL::set_query(param_1,
                   "inSert into postal(occ_time,send_charac_no,receive_charac_no,seal_flag,item_id,add_info,endurance,upgrade ,amplify_option,amplify_value,gold,send_charac_name,creature_flag,avata_flag,letter_id,extend_info,item_guid,random_option,seperate_upgrade,unlimit_flag) values %s"
                   ,uVar13);
  cVar4 = MySQL::exec(param_1,true);
  if (cVar4 != '\x01') {
    uVar13 = std::string::c_str(local_34);
    cMyTrace::cMyTrace(local_30,
                       "bool DB_MailBox_Req_System_Multi_Mail::_InsertPostal(MySQL*, SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL*)"
                       ,0xa5b5,5);
    cMyTrace::operator()(local_30,"Insert Postal Fail - inQuery(%s)",uVar13);
  }
  std::string::~string(local_34);
  return cVar4 == '\x01';
}

```

---

## dispatch

```asm
// === 0844346a DB_MailBox_Req_System_Multi_Mail::dispatch  [0x0844346a-0x84435d3] ===
 844346a:	55                   	push   %ebp
 844346b:	89 e5                	mov    %esp,%ebp
 844346d:	83 ec 58             	sub    $0x58,%esp
 8443470:	8b 45 14             	mov    0x14(%ebp),%eax
 8443473:	89 04 24             	mov    %eax,(%esp)
 8443476:	e8 8d 0a 01 00       	call   8453f08 <_ZN6Stream12GetOutBufferI34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAILEEPT_v>
 844347b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 844347e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443481:	8b 90 95 03 00 00    	mov    0x395(%eax),%edx
 8443487:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844348c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8443490:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8443497:	00 
 8443498:	89 04 24             	mov    %eax,(%esp)
 844349b:	e8 9e 1d fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 84434a0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84434a3:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 84434aa:	e8 ef 87 c8 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 84434af:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84434b2:	8d 45 b8             	lea    -0x48(%ebp),%eax
 84434b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84434b9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84434bc:	89 04 24             	mov    %eax,(%esp)
 84434bf:	e8 9c ae c3 ff       	call   807e360 <localtime_r@plt>
 84434c4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84434c7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84434ca:	8b 40 08             	mov    0x8(%eax),%eax
 84434cd:	8d 50 01             	lea    0x1(%eax),%edx
 84434d0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84434d3:	89 50 08             	mov    %edx,0x8(%eax)
 84434d6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84434d9:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 84434e0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84434e3:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 84434e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84434ec:	89 04 24             	mov    %eax,(%esp)
 84434ef:	e8 2c b3 c3 ff       	call   807e820 <mktime@plt>
 84434f4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84434f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84434fa:	8b 80 90 03 00 00    	mov    0x390(%eax),%eax
 8443500:	83 f8 0e             	cmp    $0xe,%eax
 8443503:	77 1d                	ja     8443522 <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0xb8>
 8443505:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8443508:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844350b:	8b 80 90 03 00 00    	mov    0x390(%eax),%eax
 8443511:	69 c0 80 51 01 00    	imul   $0x15180,%eax,%eax
 8443517:	89 d1                	mov    %edx,%ecx
 8443519:	29 c1                	sub    %eax,%ecx
 844351b:	89 c8                	mov    %ecx,%eax
 844351d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8443520:	eb 2b                	jmp    844354d <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0xe3>
 8443522:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443525:	8b 80 90 03 00 00    	mov    0x390(%eax),%eax
 844352b:	83 f8 0f             	cmp    $0xf,%eax
 844352e:	76 1d                	jbe    844354d <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0xe3>
 8443530:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443533:	8b 80 90 03 00 00    	mov    0x390(%eax),%eax
 8443539:	69 d0 80 51 01 00    	imul   $0x15180,%eax,%edx
 844353f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443542:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8443545:	2d 80 c6 13 00       	sub    $0x13c680,%eax
 844354a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844354d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443550:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8443553:	89 90 a1 03 00 00    	mov    %edx,0x3a1(%eax)
 8443559:	8b 45 e8             	mov    -0x18(%ebp),%eax
 844355c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443560:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8443563:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443567:	8b 45 08             	mov    0x8(%ebp),%eax
 844356a:	89 04 24             	mov    %eax,(%esp)
 844356d:	e8 62 00 00 00       	call   84435d4 <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertLetterEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>
 8443572:	83 f0 01             	xor    $0x1,%eax
 8443575:	84 c0                	test   %al,%al
 8443577:	74 07                	je     8443580 <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0x116>
 8443579:	b8 00 00 00 00       	mov    $0x0,%eax
 844357e:	eb 51                	jmp    84435d1 <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0x167>
 8443580:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8443583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8443587:	8b 45 ec             	mov    -0x14(%ebp),%eax
 844358a:	89 44 24 04          	mov    %eax,0x4(%esp)
 844358e:	8b 45 08             	mov    0x8(%ebp),%eax
 8443591:	89 04 24             	mov    %eax,(%esp)
 8443594:	e8 95 01 00 00       	call   844372e <_ZN32DB_MailBox_Req_System_Multi_Mail13_InsertPostalEP5MySQLP34SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>
 8443599:	83 f0 01             	xor    $0x1,%eax
 844359c:	84 c0                	test   %al,%al
 844359e:	74 07                	je     84435a7 <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0x13d>
 84435a0:	b8 00 00 00 00       	mov    $0x0,%eax
 84435a5:	eb 2a                	jmp    84435d1 <_ZN32DB_MailBox_Req_System_Multi_Mail8dispatchEiiP6Stream+0x167>
 84435a7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84435aa:	8b 90 95 03 00 00    	mov    0x395(%eax),%edx
 84435b0:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84435b3:	8b 80 1e 01 00 00    	mov    0x11e(%eax),%eax
 84435b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84435bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84435c1:	8b 45 08             	mov    0x8(%ebp),%eax
 84435c4:	89 04 24             	mov    %eax,(%esp)
 84435c7:	e8 a2 05 00 00       	call   8443b6e <_ZN32DB_MailBox_Req_System_Multi_Mail10sendResultEi17ENUM_SERVER_GROUP>
 84435cc:	b8 01 00 00 00       	mov    $0x1,%eax
 84435d1:	c9                   	leave
 84435d2:	c3                   	ret
 84435d3:	90                   	nop

```

```c
// DB_MailBox_Req_System_Multi_Mail::dispatch @ 0x844346a

/* DB_MailBox_Req_System_Multi_Mail::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_System_Multi_Mail::dispatch
          (DB_MailBox_Req_System_Multi_Mail *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  tm local_4c;
  time_t local_20;
  SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL *local_1c;
  MySQL *local_18;
  tm *local_14;
  time_t local_10;
  
  local_1c = Stream::GetOutBuffer<SIG_MAILBOX_SEND_SYSTEM_MULTI_MAIL>(param_3);
  local_18 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,*(undefined4 *)(local_1c + 0x395));
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_14 = localtime_r(&local_20,&local_4c);
  local_14->tm_hour = local_14->tm_hour + 1;
  local_14->tm_min = 0;
  local_14->tm_sec = 0;
  local_10 = mktime(local_14);
  if (*(uint *)(local_1c + 0x390) < 0xf) {
    local_10 = local_10 + *(int *)(local_1c + 0x390) * -0x15180;
  }
  else if (0xf < *(uint *)(local_1c + 0x390)) {
    local_10 = *(int *)(local_1c + 0x390) * 0x15180 + local_10 + -0x13c680;
  }
  *(time_t *)(local_1c + 0x3a1) = local_10;
  cVar1 = _InsertLetter(this,local_18,local_1c);
  if (cVar1 == '\x01') {
    cVar1 = _InsertPostal(this,local_18,local_1c);
    if (cVar1 == '\x01') {
      sendResult(this,*(undefined4 *)(local_1c + 0x11e),*(undefined4 *)(local_1c + 0x395));
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## sendResult

```asm
// === 08443b6e DB_MailBox_Req_System_Multi_Mail::sendResult  [0x08443b6e-0x8443c61] ===
 8443b6e:	55                   	push   %ebp
 8443b6f:	89 e5                	mov    %esp,%ebp
 8443b71:	56                   	push   %esi
 8443b72:	53                   	push   %ebx
 8443b73:	83 ec 20             	sub    $0x20,%esp
 8443b76:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8443b7b:	c7 44 24 08 be a5 00 	movl   $0xa5be,0x8(%esp)
 8443b82:	00 
 8443b83:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8443b8a:	08 
 8443b8b:	89 04 24             	mov    %eax,(%esp)
 8443b8e:	e8 f3 be e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8443b93:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8443b9a:	00 
 8443b9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8443b9f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443ba2:	89 04 24             	mov    %eax,(%esp)
 8443ba5:	e8 7c 50 c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8443baa:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443bad:	89 04 24             	mov    %eax,(%esp)
 8443bb0:	e8 91 50 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8443bb5:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 8443bbc:	00 
 8443bbd:	89 04 24             	mov    %eax,(%esp)
 8443bc0:	e8 91 50 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8443bc5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443bc8:	89 04 24             	mov    %eax,(%esp)
 8443bcb:	e8 76 50 c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8443bd0:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8443bd7:	ff 
 8443bd8:	89 04 24             	mov    %eax,(%esp)
 8443bdb:	e8 76 50 c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8443be0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443be3:	89 04 24             	mov    %eax,(%esp)
 8443be6:	e8 63 50 c8 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8443beb:	89 04 24             	mov    %eax,(%esp)
 8443bee:	e8 9b 43 d5 ff       	call   8197f8e <_ZN12CStreamGuard11GetInBufferI25SIG_MAILBOX_SEND_NEW_MAILEEPT_v>
 8443bf3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8443bf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443bf9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8443bff:	8b 55 0c             	mov    0xc(%ebp),%edx
 8443c02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443c05:	89 50 04             	mov    %edx,0x4(%eax)
 8443c08:	8b 55 10             	mov    0x10(%ebp),%edx
 8443c0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8443c0e:	89 50 08             	mov    %edx,0x8(%eax)
 8443c11:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8443c16:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8443c19:	89 54 24 08          	mov    %edx,0x8(%esp)
 8443c1d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8443c24:	00 
 8443c25:	89 04 24             	mov    %eax,(%esp)
 8443c28:	e8 b1 d3 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8443c2d:	bb 01 00 00 00       	mov    $0x1,%ebx
 8443c32:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443c35:	89 04 24             	mov    %eax,(%esp)
 8443c38:	e8 95 8c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8443c3d:	89 d8                	mov    %ebx,%eax
 8443c3f:	83 c4 20             	add    $0x20,%esp
 8443c42:	5b                   	pop    %ebx
 8443c43:	5e                   	pop    %esi
 8443c44:	5d                   	pop    %ebp
 8443c45:	c3                   	ret
 8443c46:	89 d3                	mov    %edx,%ebx
 8443c48:	89 c6                	mov    %eax,%esi
 8443c4a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8443c4d:	89 04 24             	mov    %eax,(%esp)
 8443c50:	e8 7d 8c 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8443c55:	89 f0                	mov    %esi,%eax
 8443c57:	89 da                	mov    %ebx,%edx
 8443c59:	89 04 24             	mov    %eax,(%esp)
 8443c5c:	e8 ef fa 69 00       	call   8ae3750 <_Unwind_Resume>
 8443c61:	90                   	nop

```

```c
// DB_MailBox_Req_System_Multi_Mail::sendResult @ 0x8443b6e

/* DB_MailBox_Req_System_Multi_Mail::sendResult(int, ENUM_SERVER_GROUP) */

undefined4 __thiscall
DB_MailBox_Req_System_Multi_Mail::sendResult(undefined4 this,undefined4 param_1,undefined4 param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_18 [8];
  SIG_MAILBOX_SEND_NEW_MAIL *local_10;
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa5be);
  CStreamGuard::CStreamGuard(local_18,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
                    /* try { // try from 08443bc0 to 08443c2c has its CatchHandler @ 08443c46 */
  CStreamGuard::operator<<(pCVar2,0x80);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_18);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator->(local_18);
  local_10 = CStreamGuard::GetInBuffer<SIG_MAILBOX_SEND_NEW_MAIL>(pCVar2);
  *(undefined4 *)local_10 = 0;
  *(undefined4 *)(local_10 + 4) = param_1;
  *(undefined4 *)(local_10 + 8) = param_3;
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_18);
  CStreamGuard::~CStreamGuard(local_18);
  return 1;
}

```

