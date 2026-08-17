# DB_MailBox_Req_List

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## SelectLetter

```asm
// === 0841d52c DB_MailBox_Req_List::SelectLetter  [0x0841d52c-0x841dc83] ===
 841d52c:	55                   	push   %ebp
 841d52d:	89 e5                	mov    %esp,%ebp
 841d52f:	57                   	push   %edi
 841d530:	56                   	push   %esi
 841d531:	53                   	push   %ebx
 841d532:	81 ec cc 01 00 00    	sub    $0x1cc,%esp
 841d538:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d53b:	05 1c 10 00 00       	add    $0x101c,%eax
 841d540:	c7 44 24 08 0a 23 00 	movl   $0x230a,0x8(%esp)
 841d547:	00 
 841d548:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841d54f:	00 
 841d550:	89 04 24             	mov    %eax,(%esp)
 841d553:	e8 68 07 c6 ff       	call   807dcc0 <memset@plt>
 841d558:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 841d55c:	0f 85 d1 00 00 00    	jne    841d633 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x107>
 841d562:	c7 44 24 10 02 00 00 	movl   $0x2,0x10(%esp)
 841d569:	00 
 841d56a:	c7 44 24 0c 0f 00 00 	movl   $0xf,0xc(%esp)
 841d571:	00 
 841d572:	8b 45 14             	mov    0x14(%ebp),%eax
 841d575:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d579:	c7 44 24 04 0c bc c4 	movl   $0x8c4bc0c,0x4(%esp)
 841d580:	08 
 841d581:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d584:	89 04 24             	mov    %eax,(%esp)
 841d587:	e8 34 6c fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841d58c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841d593:	00 
 841d594:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d597:	89 04 24             	mov    %eax,(%esp)
 841d59a:	e8 87 6d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841d59f:	0f b6 c0             	movzbl %al,%eax
 841d5a2:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841d5a5:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 841d5a9:	75 0a                	jne    841d5b5 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x89>
 841d5ab:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d5b0:	e9 c1 06 00 00       	jmp    841dc76 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x74a>
 841d5b5:	c7 44 24 10 01 00 00 	movl   $0x1,0x10(%esp)
 841d5bc:	00 
 841d5bd:	c7 44 24 0c 0f 00 00 	movl   $0xf,0xc(%esp)
 841d5c4:	00 
 841d5c5:	8b 45 14             	mov    0x14(%ebp),%eax
 841d5c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d5cc:	c7 44 24 04 0c bc c4 	movl   $0x8c4bc0c,0x4(%esp)
 841d5d3:	08 
 841d5d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d5d7:	89 04 24             	mov    %eax,(%esp)
 841d5da:	e8 e1 6b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841d5df:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841d5e6:	00 
 841d5e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d5ea:	89 04 24             	mov    %eax,(%esp)
 841d5ed:	e8 34 6d fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841d5f2:	0f b6 c0             	movzbl %al,%eax
 841d5f5:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841d5f8:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 841d5fc:	75 0a                	jne    841d608 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0xdc>
 841d5fe:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d603:	e9 6e 06 00 00       	jmp    841dc76 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x74a>
 841d608:	c7 44 24 10 0f 00 00 	movl   $0xf,0x10(%esp)
 841d60f:	00 
 841d610:	8b 45 14             	mov    0x14(%ebp),%eax
 841d613:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841d617:	8b 45 14             	mov    0x14(%ebp),%eax
 841d61a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d61e:	c7 44 24 04 6c bc c4 	movl   $0x8c4bc6c,0x4(%esp)
 841d625:	08 
 841d626:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d629:	89 04 24             	mov    %eax,(%esp)
 841d62c:	e8 8f 6b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841d631:	eb 30                	jmp    841d663 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x137>
 841d633:	c7 44 24 14 0f 00 00 	movl   $0xf,0x14(%esp)
 841d63a:	00 
 841d63b:	8b 45 18             	mov    0x18(%ebp),%eax
 841d63e:	89 44 24 10          	mov    %eax,0x10(%esp)
 841d642:	8b 45 14             	mov    0x14(%ebp),%eax
 841d645:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841d649:	8b 45 14             	mov    0x14(%ebp),%eax
 841d64c:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d650:	c7 44 24 04 48 bd c4 	movl   $0x8c4bd48,0x4(%esp)
 841d657:	08 
 841d658:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d65b:	89 04 24             	mov    %eax,(%esp)
 841d65e:	e8 5d 6b fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841d663:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841d66a:	00 
 841d66b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d66e:	89 04 24             	mov    %eax,(%esp)
 841d671:	e8 b0 6c fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841d676:	0f b6 c0             	movzbl %al,%eax
 841d679:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841d67c:	83 7d c0 00          	cmpl   $0x0,-0x40(%ebp)
 841d680:	75 0a                	jne    841d68c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x160>
 841d682:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d687:	e9 ea 05 00 00       	jmp    841dc76 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x74a>
 841d68c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d68f:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841d695:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 841d698:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d69b:	8b 80 18 10 00 00    	mov    0x1018(%eax),%eax
 841d6a1:	89 45 c8             	mov    %eax,-0x38(%ebp)
 841d6a4:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d6a7:	c7 80 18 10 00 00 00 	movl   $0x0,0x1018(%eax)
 841d6ae:	00 00 00 
 841d6b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d6b4:	89 04 24             	mov    %eax,(%esp)
 841d6b7:	e8 b0 4c cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841d6bc:	89 c2                	mov    %eax,%edx
 841d6be:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d6c1:	89 90 18 10 00 00    	mov    %edx,0x1018(%eax)
 841d6c7:	8d 5d 88             	lea    -0x78(%ebp),%ebx
 841d6ca:	89 df                	mov    %ebx,%edi
 841d6cc:	be 02 00 00 00       	mov    $0x2,%esi
 841d6d1:	eb 0e                	jmp    841d6e1 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x1b5>
 841d6d3:	89 3c 24             	mov    %edi,(%esp)
 841d6d6:	e8 0f 41 03 00       	call   84517ea <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EEC1Ev>
 841d6db:	83 c7 0c             	add    $0xc,%edi
 841d6de:	83 ee 01             	sub    $0x1,%esi
 841d6e1:	83 fe ff             	cmp    $0xffffffff,%esi
 841d6e4:	0f 95 c0             	setne  %al
 841d6e7:	84 c0                	test   %al,%al
 841d6e9:	75 e8                	jne    841d6d3 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x1a7>
 841d6eb:	eb 42                	jmp    841d72f <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x203>
 841d6ed:	89 d7                	mov    %edx,%edi
 841d6ef:	89 85 54 fe ff ff    	mov    %eax,-0x1ac(%ebp)
 841d6f5:	85 db                	test   %ebx,%ebx
 841d6f7:	74 26                	je     841d71f <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x1f3>
 841d6f9:	b8 02 00 00 00       	mov    $0x2,%eax
 841d6fe:	29 f0                	sub    %esi,%eax
 841d700:	89 c2                	mov    %eax,%edx
 841d702:	89 d0                	mov    %edx,%eax
 841d704:	01 c0                	add    %eax,%eax
 841d706:	01 d0                	add    %edx,%eax
 841d708:	c1 e0 02             	shl    $0x2,%eax
 841d70b:	8d 34 03             	lea    (%ebx,%eax,1),%esi
 841d70e:	39 de                	cmp    %ebx,%esi
 841d710:	74 0d                	je     841d71f <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x1f3>
 841d712:	83 ee 0c             	sub    $0xc,%esi
 841d715:	89 34 24             	mov    %esi,(%esp)
 841d718:	e8 e1 40 03 00       	call   84517fe <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EED1Ev>
 841d71d:	eb ef                	jmp    841d70e <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x1e2>
 841d71f:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
 841d725:	89 fa                	mov    %edi,%edx
 841d727:	89 04 24             	mov    %eax,(%esp)
 841d72a:	e8 21 60 6c 00       	call   8ae3750 <_Unwind_Resume>
 841d72f:	c7 45 ac 00 00 00 00 	movl   $0x0,-0x54(%ebp)
 841d736:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 841d73d:	c7 45 b4 00 00 00 00 	movl   $0x0,-0x4c(%ebp)
 841d744:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 841d74b:	e9 2d 02 00 00       	jmp    841d97d <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x451>
 841d750:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 841d754:	74 2c                	je     841d782 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x256>
 841d756:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841d759:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 841d75c:	7c 24                	jl     841d782 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x256>
 841d75e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d761:	8b 80 98 07 00 00    	mov    0x798(%eax),%eax
 841d767:	85 c0                	test   %eax,%eax
 841d769:	74 17                	je     841d782 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x256>
 841d76b:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d76e:	89 04 24             	mov    %eax,(%esp)
 841d771:	e8 0a 3f 03 00       	call   8451680 <_ZNKSt6vectorI15SIG_LETTER_INFOSaIS0_EE4sizeEv>
 841d776:	3b 45 c8             	cmp    -0x38(%ebp),%eax
 841d779:	7c 07                	jl     841d782 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x256>
 841d77b:	b8 01 00 00 00       	mov    $0x1,%eax
 841d780:	eb 05                	jmp    841d787 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x25b>
 841d782:	b8 00 00 00 00       	mov    $0x0,%eax
 841d787:	84 c0                	test   %al,%al
 841d789:	0f 85 07 02 00 00    	jne    841d996 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x46a>
 841d78f:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d792:	89 04 24             	mov    %eax,(%esp)
 841d795:	e8 22 6d fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841d79a:	83 f0 01             	xor    $0x1,%eax
 841d79d:	84 c0                	test   %al,%al
 841d79f:	74 0a                	je     841d7ab <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x27f>
 841d7a1:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d7a6:	e9 b1 04 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d7ab:	c7 44 24 08 2b 01 00 	movl   $0x12b,0x8(%esp)
 841d7b2:	00 
 841d7b3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841d7ba:	00 
 841d7bb:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d7c1:	89 04 24             	mov    %eax,(%esp)
 841d7c4:	e8 f7 04 c6 ff       	call   807dcc0 <memset@plt>
 841d7c9:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d7cf:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d7d3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841d7da:	00 
 841d7db:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d7de:	89 04 24             	mov    %eax,(%esp)
 841d7e1:	e8 0c 4b cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841d7e6:	83 f0 01             	xor    $0x1,%eax
 841d7e9:	84 c0                	test   %al,%al
 841d7eb:	74 0a                	je     841d7f7 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x2cb>
 841d7ed:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d7f2:	e9 65 04 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d7f7:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d7fd:	83 c0 04             	add    $0x4,%eax
 841d800:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d804:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841d80b:	00 
 841d80c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d80f:	89 04 24             	mov    %eax,(%esp)
 841d812:	e8 15 91 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841d817:	83 f0 01             	xor    $0x1,%eax
 841d81a:	84 c0                	test   %al,%al
 841d81c:	74 0a                	je     841d828 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x2fc>
 841d81e:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d823:	e9 34 04 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d828:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 841d82f:	00 
 841d830:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d836:	83 c0 08             	add    $0x8,%eax
 841d839:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d83d:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841d844:	00 
 841d845:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d848:	89 04 24             	mov    %eax,(%esp)
 841d84b:	e8 9a f5 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 841d850:	83 f0 01             	xor    $0x1,%eax
 841d853:	84 c0                	test   %al,%al
 841d855:	74 0a                	je     841d861 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x335>
 841d857:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d85c:	e9 fb 03 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d861:	c7 44 24 0c 00 01 00 	movl   $0x100,0xc(%esp)
 841d868:	00 
 841d869:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d86f:	83 c0 25             	add    $0x25,%eax
 841d872:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d876:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841d87d:	00 
 841d87e:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d881:	89 04 24             	mov    %eax,(%esp)
 841d884:	e8 61 f5 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 841d889:	83 f0 01             	xor    $0x1,%eax
 841d88c:	84 c0                	test   %al,%al
 841d88e:	74 0a                	je     841d89a <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x36e>
 841d890:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d895:	e9 c2 03 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d89a:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d8a0:	05 25 01 00 00       	add    $0x125,%eax
 841d8a5:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d8a9:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841d8b0:	00 
 841d8b1:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d8b4:	89 04 24             	mov    %eax,(%esp)
 841d8b7:	e8 70 90 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841d8bc:	83 f0 01             	xor    $0x1,%eax
 841d8bf:	84 c0                	test   %al,%al
 841d8c1:	74 0a                	je     841d8cd <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x3a1>
 841d8c3:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d8c8:	e9 8f 03 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d8cd:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d8d3:	05 29 01 00 00       	add    $0x129,%eax
 841d8d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d8dc:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 841d8e3:	00 
 841d8e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 841d8e7:	89 04 24             	mov    %eax,(%esp)
 841d8ea:	e8 fd 04 ce ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841d8ef:	83 f0 01             	xor    $0x1,%eax
 841d8f2:	84 c0                	test   %al,%al
 841d8f4:	74 0a                	je     841d900 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x3d4>
 841d8f6:	bb 00 00 00 00       	mov    $0x0,%ebx
 841d8fb:	e9 5c 03 00 00       	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841d900:	0f b7 45 86          	movzwl -0x7a(%ebp),%eax
 841d904:	98                   	cwtl
 841d905:	83 f8 01             	cmp    $0x1,%eax
 841d908:	7c 6f                	jl     841d979 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x44d>
 841d90a:	83 f8 02             	cmp    $0x2,%eax
 841d90d:	7e 07                	jle    841d916 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x3ea>
 841d90f:	83 f8 03             	cmp    $0x3,%eax
 841d912:	74 4c                	je     841d960 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x434>
 841d914:	eb 63                	jmp    841d979 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x44d>
 841d916:	8b 85 5d fe ff ff    	mov    -0x1a3(%ebp),%eax
 841d91c:	89 44 24 04          	mov    %eax,0x4(%esp)
 841d920:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d923:	89 04 24             	mov    %eax,(%esp)
 841d926:	e8 8b f3 ff ff       	call   841ccb6 <_Z17IsContainedLetterP16SIG_MAILBOX_LISTi>
 841d92b:	84 c0                	test   %al,%al
 841d92d:	74 17                	je     841d946 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x41a>
 841d92f:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d935:	89 44 24 04          	mov    %eax,0x4(%esp)
 841d939:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d93c:	89 04 24             	mov    %eax,(%esp)
 841d93f:	e8 18 3f 03 00       	call   845185c <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EE9push_backERKS0_>
 841d944:	eb 33                	jmp    841d979 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x44d>
 841d946:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d94c:	89 44 24 04          	mov    %eax,0x4(%esp)
 841d950:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d953:	83 c0 0c             	add    $0xc,%eax
 841d956:	89 04 24             	mov    %eax,(%esp)
 841d959:	e8 fe 3e 03 00       	call   845185c <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EE9push_backERKS0_>
 841d95e:	eb 19                	jmp    841d979 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x44d>
 841d960:	8d 85 5d fe ff ff    	lea    -0x1a3(%ebp),%eax
 841d966:	89 44 24 04          	mov    %eax,0x4(%esp)
 841d96a:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d96d:	83 c0 18             	add    $0x18,%eax
 841d970:	89 04 24             	mov    %eax,(%esp)
 841d973:	e8 e4 3e 03 00       	call   845185c <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EE9push_backERKS0_>
 841d978:	90                   	nop
 841d979:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 841d97d:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d980:	8b 80 18 10 00 00    	mov    0x1018(%eax),%eax
 841d986:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 841d989:	0f 9f c0             	setg   %al
 841d98c:	84 c0                	test   %al,%al
 841d98e:	0f 85 bc fd ff ff    	jne    841d750 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x224>
 841d994:	eb 01                	jmp    841d997 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x46b>
 841d996:	90                   	nop
 841d997:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d99a:	83 c0 0c             	add    $0xc,%eax
 841d99d:	89 04 24             	mov    %eax,(%esp)
 841d9a0:	e8 db 3c 03 00       	call   8451680 <_ZNKSt6vectorI15SIG_LETTER_INFOSaIS0_EE4sizeEv>
 841d9a5:	89 c3                	mov    %eax,%ebx
 841d9a7:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d9aa:	89 04 24             	mov    %eax,(%esp)
 841d9ad:	e8 ce 3c 03 00       	call   8451680 <_ZNKSt6vectorI15SIG_LETTER_INFOSaIS0_EE4sizeEv>
 841d9b2:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 841d9b5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d9b8:	8b 80 26 33 00 00    	mov    0x3326(%eax),%eax
 841d9be:	89 d1                	mov    %edx,%ecx
 841d9c0:	29 c1                	sub    %eax,%ecx
 841d9c2:	89 c8                	mov    %ecx,%eax
 841d9c4:	89 45 cc             	mov    %eax,-0x34(%ebp)
 841d9c7:	83 7d cc 00          	cmpl   $0x0,-0x34(%ebp)
 841d9cb:	7e 4e                	jle    841da1b <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x4ef>
 841d9cd:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d9d0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841d9d4:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841d9d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 841d9db:	8d 45 88             	lea    -0x78(%ebp),%eax
 841d9de:	83 c0 0c             	add    $0xc,%eax
 841d9e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 841d9e5:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d9e8:	89 04 24             	mov    %eax,(%esp)
 841d9eb:	e8 7d f7 ff ff       	call   841d16d <_Z25ArrangeMailAndLetterIndexP16SIG_MAILBOX_LISTRSt6vectorI15SIG_LETTER_INFOSaIS2_EEiS5_>
 841d9f0:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841d9f3:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841d9f9:	85 c0                	test   %eax,%eax
 841d9fb:	74 1e                	je     841da1b <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x4ef>
 841d9fd:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da00:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841da06:	8d 50 ff             	lea    -0x1(%eax),%edx
 841da09:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da0c:	6b d2 61             	imul   $0x61,%edx,%edx
 841da0f:	8b 14 02             	mov    (%edx,%eax,1),%edx
 841da12:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da15:	89 90 9c 07 00 00    	mov    %edx,0x79c(%eax)
 841da1b:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 841da22:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da25:	8b 80 18 10 00 00    	mov    0x1018(%eax),%eax
 841da2b:	85 c0                	test   %eax,%eax
 841da2d:	0f 84 a8 00 00 00    	je     841dadb <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x5af>
 841da33:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 841da3a:	eb 25                	jmp    841da61 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x535>
 841da3c:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 841da3f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 841da42:	8d 4d 88             	lea    -0x78(%ebp),%ecx
 841da45:	89 d0                	mov    %edx,%eax
 841da47:	01 c0                	add    %eax,%eax
 841da49:	01 d0                	add    %edx,%eax
 841da4b:	c1 e0 02             	shl    $0x2,%eax
 841da4e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 841da51:	89 04 24             	mov    %eax,(%esp)
 841da54:	e8 27 3c 03 00       	call   8451680 <_ZNKSt6vectorI15SIG_LETTER_INFOSaIS0_EE4sizeEv>
 841da59:	89 44 9d ac          	mov    %eax,-0x54(%ebp,%ebx,4)
 841da5d:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841da61:	83 7d dc 02          	cmpl   $0x2,-0x24(%ebp)
 841da65:	0f 9e c0             	setle  %al
 841da68:	84 c0                	test   %al,%al
 841da6a:	75 d0                	jne    841da3c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x510>
 841da6c:	8b 55 ac             	mov    -0x54(%ebp),%edx
 841da6f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da72:	8b 80 26 33 00 00    	mov    0x3326(%eax),%eax
 841da78:	39 c2                	cmp    %eax,%edx
 841da7a:	7e 0c                	jle    841da88 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x55c>
 841da7c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da7f:	8b 80 26 33 00 00    	mov    0x3326(%eax),%eax
 841da85:	89 45 ac             	mov    %eax,-0x54(%ebp)
 841da88:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da8b:	8b 90 94 07 00 00    	mov    0x794(%eax),%edx
 841da91:	8b 45 b0             	mov    -0x50(%ebp),%eax
 841da94:	01 c2                	add    %eax,%edx
 841da96:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841da99:	8b 80 26 33 00 00    	mov    0x3326(%eax),%eax
 841da9f:	39 c2                	cmp    %eax,%edx
 841daa1:	7e 29                	jle    841dacc <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x5a0>
 841daa3:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841daa6:	8b 90 94 07 00 00    	mov    0x794(%eax),%edx
 841daac:	8b 45 b0             	mov    -0x50(%ebp),%eax
 841daaf:	01 c2                	add    %eax,%edx
 841dab1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841dab4:	8b 80 26 33 00 00    	mov    0x3326(%eax),%eax
 841daba:	89 d6                	mov    %edx,%esi
 841dabc:	29 c6                	sub    %eax,%esi
 841dabe:	89 f0                	mov    %esi,%eax
 841dac0:	89 45 d0             	mov    %eax,-0x30(%ebp)
 841dac3:	8b 45 b0             	mov    -0x50(%ebp),%eax
 841dac6:	2b 45 d0             	sub    -0x30(%ebp),%eax
 841dac9:	89 45 b0             	mov    %eax,-0x50(%ebp)
 841dacc:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 841dacf:	83 f8 0a             	cmp    $0xa,%eax
 841dad2:	7e 07                	jle    841dadb <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x5af>
 841dad4:	c7 45 b4 0a 00 00 00 	movl   $0xa,-0x4c(%ebp)
 841dadb:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 841dae2:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 841dae9:	e9 d1 00 00 00       	jmp    841dbbf <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x693>
 841daee:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 841daf5:	e9 ac 00 00 00       	jmp    841dba6 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x67a>
 841dafa:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 841dafd:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 841db00:	8b 55 e0             	mov    -0x20(%ebp),%edx
 841db03:	8d 75 88             	lea    -0x78(%ebp),%esi
 841db06:	89 d0                	mov    %edx,%eax
 841db08:	01 c0                	add    %eax,%eax
 841db0a:	01 d0                	add    %edx,%eax
 841db0c:	c1 e0 02             	shl    $0x2,%eax
 841db0f:	8d 04 06             	lea    (%esi,%eax,1),%eax
 841db12:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 841db16:	89 04 24             	mov    %eax,(%esp)
 841db19:	e8 b4 3d 03 00       	call   84518d2 <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EE2atEj>
 841db1e:	89 c2                	mov    %eax,%edx
 841db20:	8b 4d 1c             	mov    0x1c(%ebp),%ecx
 841db23:	69 c3 2b 01 00 00    	imul   $0x12b,%ebx,%eax
 841db29:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 841db2c:	05 10 10 00 00       	add    $0x1010,%eax
 841db31:	83 c0 0c             	add    $0xc,%eax
 841db34:	bb 2b 01 00 00       	mov    $0x12b,%ebx
 841db39:	89 c1                	mov    %eax,%ecx
 841db3b:	83 e1 01             	and    $0x1,%ecx
 841db3e:	85 c9                	test   %ecx,%ecx
 841db40:	74 0e                	je     841db50 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x624>
 841db42:	0f b6 0a             	movzbl (%edx),%ecx
 841db45:	88 08                	mov    %cl,(%eax)
 841db47:	83 c0 01             	add    $0x1,%eax
 841db4a:	83 c2 01             	add    $0x1,%edx
 841db4d:	83 eb 01             	sub    $0x1,%ebx
 841db50:	89 c1                	mov    %eax,%ecx
 841db52:	83 e1 02             	and    $0x2,%ecx
 841db55:	85 c9                	test   %ecx,%ecx
 841db57:	74 0f                	je     841db68 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x63c>
 841db59:	0f b7 0a             	movzwl (%edx),%ecx
 841db5c:	66 89 08             	mov    %cx,(%eax)
 841db5f:	83 c0 02             	add    $0x2,%eax
 841db62:	83 c2 02             	add    $0x2,%edx
 841db65:	83 eb 02             	sub    $0x2,%ebx
 841db68:	89 d9                	mov    %ebx,%ecx
 841db6a:	c1 e9 02             	shr    $0x2,%ecx
 841db6d:	89 c7                	mov    %eax,%edi
 841db6f:	89 d6                	mov    %edx,%esi
 841db71:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 841db73:	89 f2                	mov    %esi,%edx
 841db75:	89 f8                	mov    %edi,%eax
 841db77:	b9 00 00 00 00       	mov    $0x0,%ecx
 841db7c:	89 de                	mov    %ebx,%esi
 841db7e:	83 e6 02             	and    $0x2,%esi
 841db81:	85 f6                	test   %esi,%esi
 841db83:	74 0b                	je     841db90 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x664>
 841db85:	0f b7 34 0a          	movzwl (%edx,%ecx,1),%esi
 841db89:	66 89 34 08          	mov    %si,(%eax,%ecx,1)
 841db8d:	83 c1 02             	add    $0x2,%ecx
 841db90:	83 e3 01             	and    $0x1,%ebx
 841db93:	85 db                	test   %ebx,%ebx
 841db95:	74 07                	je     841db9e <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x672>
 841db97:	0f b6 14 0a          	movzbl (%edx,%ecx,1),%edx
 841db9b:	88 14 08             	mov    %dl,(%eax,%ecx,1)
 841db9e:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 841dba2:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 841dba6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 841dba9:	8b 44 85 ac          	mov    -0x54(%ebp,%eax,4),%eax
 841dbad:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 841dbb0:	0f 9f c0             	setg   %al
 841dbb3:	84 c0                	test   %al,%al
 841dbb5:	0f 85 3f ff ff ff    	jne    841dafa <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x5ce>
 841dbbb:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 841dbbf:	83 7d e0 02          	cmpl   $0x2,-0x20(%ebp)
 841dbc3:	0f 9e c0             	setle  %al
 841dbc6:	84 c0                	test   %al,%al
 841dbc8:	0f 85 20 ff ff ff    	jne    841daee <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x5c2>
 841dbce:	8b 55 b0             	mov    -0x50(%ebp),%edx
 841dbd1:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841dbd4:	89 90 2a 33 00 00    	mov    %edx,0x332a(%eax)
 841dbda:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841dbdd:	8b 98 98 07 00 00    	mov    0x798(%eax),%ebx
 841dbe3:	c7 45 b8 00 00 00 00 	movl   $0x0,-0x48(%ebp)
 841dbea:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841dbed:	8b 80 2e 33 00 00    	mov    0x332e(%eax),%eax
 841dbf3:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841dbf6:	89 d1                	mov    %edx,%ecx
 841dbf8:	29 c1                	sub    %eax,%ecx
 841dbfa:	89 c8                	mov    %ecx,%eax
 841dbfc:	89 45 bc             	mov    %eax,-0x44(%ebp)
 841dbff:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841dc02:	89 44 24 04          	mov    %eax,0x4(%esp)
 841dc06:	8d 45 bc             	lea    -0x44(%ebp),%eax
 841dc09:	89 04 24             	mov    %eax,(%esp)
 841dc0c:	e8 07 06 c7 ff       	call   808e218 <_ZSt3maxIiERKT_S2_S2_>
 841dc11:	8b 00                	mov    (%eax),%eax
 841dc13:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 841dc16:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841dc19:	89 90 98 07 00 00    	mov    %edx,0x798(%eax)
 841dc1f:	8b 45 1c             	mov    0x1c(%ebp),%eax
 841dc22:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 841dc25:	89 90 18 10 00 00    	mov    %edx,0x1018(%eax)
 841dc2b:	bb 01 00 00 00       	mov    $0x1,%ebx
 841dc30:	eb 2a                	jmp    841dc5c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x730>
 841dc32:	89 d6                	mov    %edx,%esi
 841dc34:	89 c7                	mov    %eax,%edi
 841dc36:	8d 45 88             	lea    -0x78(%ebp),%eax
 841dc39:	8d 58 24             	lea    0x24(%eax),%ebx
 841dc3c:	8d 45 88             	lea    -0x78(%ebp),%eax
 841dc3f:	39 c3                	cmp    %eax,%ebx
 841dc41:	74 0d                	je     841dc50 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x724>
 841dc43:	83 eb 0c             	sub    $0xc,%ebx
 841dc46:	89 1c 24             	mov    %ebx,(%esp)
 841dc49:	e8 b0 3b 03 00       	call   84517fe <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EED1Ev>
 841dc4e:	eb ec                	jmp    841dc3c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x710>
 841dc50:	89 f8                	mov    %edi,%eax
 841dc52:	89 f2                	mov    %esi,%edx
 841dc54:	89 04 24             	mov    %eax,(%esp)
 841dc57:	e8 f4 5a 6c 00       	call   8ae3750 <_Unwind_Resume>
 841dc5c:	8d 45 88             	lea    -0x78(%ebp),%eax
 841dc5f:	8d 70 24             	lea    0x24(%eax),%esi
 841dc62:	8d 45 88             	lea    -0x78(%ebp),%eax
 841dc65:	39 c6                	cmp    %eax,%esi
 841dc67:	74 0d                	je     841dc76 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x74a>
 841dc69:	83 ee 0c             	sub    $0xc,%esi
 841dc6c:	89 34 24             	mov    %esi,(%esp)
 841dc6f:	e8 8a 3b 03 00       	call   84517fe <_ZNSt6vectorI15SIG_LETTER_INFOSaIS0_EED1Ev>
 841dc74:	eb ec                	jmp    841dc62 <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST+0x736>
 841dc76:	89 d8                	mov    %ebx,%eax
 841dc78:	81 c4 cc 01 00 00    	add    $0x1cc,%esp
 841dc7e:	5b                   	pop    %ebx
 841dc7f:	5e                   	pop    %esi
 841dc80:	5f                   	pop    %edi
 841dc81:	5d                   	pop    %ebp
 841dc82:	c3                   	ret
 841dc83:	90                   	nop

```

```c
// DB_MailBox_Req_List::SelectLetter @ 0x841d52c

/* DB_MailBox_Req_List::SelectLetter(MySQL*, int, int, unsigned int, SIG_MAILBOX_LIST*) */

undefined4 __thiscall
DB_MailBox_Req_List::SelectLetter
          (DB_MailBox_Req_List *this,MySQL *param_1,int param_2,int param_3,uint param_4,
          SIG_MAILBOX_LIST *param_5)

{
  char cVar1;
  int iVar2;
  SIG_MAILBOX_LIST *pSVar3;
  SIG_MAILBOX_LIST *pSVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> *pvVar10;
  bool bVar11;
  byte bVar12;
  uint local_1a7;
  int iStack_1a3;
  char acStack_19f [29];
  char acStack_182 [256];
  int iStack_82;
  short local_7e;
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> local_7c [12];
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> avStack_70 [12];
  vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> avStack_64 [12];
  int local_58 [5];
  uint local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar12 = 0;
  memset(param_5 + 0x101c,0,0x230a);
  if (param_4 == 0) {
    MySQL::set_query(param_1,
                     "deLete from letter where charac_no=%d and reg_date<subdate(now(),interval %d day) and stat=%d"
                     ,param_3,0xf,2);
    local_44 = MySQL::exec(param_1,true);
    local_44 = local_44 & 0xff;
    if (local_44 == 0) {
      return 0;
    }
    MySQL::set_query(param_1,
                     "deLete from letter where charac_no=%d and reg_date<subdate(now(),interval %d day) and stat=%d"
                     ,param_3,0xf,1);
    local_44 = MySQL::exec(param_1,true);
    local_44 = local_44 & 0xff;
    if (local_44 == 0) {
      return 0;
    }
    MySQL::set_query(param_1,
                     "seLect letter_id,send_charac_no,send_charac_name,letter_text,unix_timestamp(reg_date),stat from letter where (charac_no=%d and stat = 3) or (charac_no=%d and reg_date>subdate(now(),interval %d day)) order by letter_id"
                     ,param_3,param_3,0xf);
  }
  else {
    MySQL::set_query(param_1,
                     "seLect letter_id,send_charac_no,send_charac_name,letter_text,unix_timestamp(reg_date),stat from letter where (charac_no=%d and stat = 3) or (charac_no=%d and letter_id > %d and reg_date>subdate(now(),interval %d day)) order by letter_id"
                     ,param_3,param_3,param_4,0xf);
  }
  local_44 = MySQL::exec(param_1,true);
  local_44 = local_44 & 0xff;
  if (local_44 == 0) {
    uVar7 = 0;
  }
  else {
    local_40 = *(int *)(param_5 + 0x794);
    local_3c = *(int *)(param_5 + 0x1018);
    *(undefined4 *)(param_5 + 0x1018) = 0;
    uVar7 = MySQL::get_n_rows(param_1);
    *(undefined4 *)(param_5 + 0x1018) = uVar7;
    pvVar10 = local_7c;
    for (iVar9 = 2; iVar9 != -1; iVar9 = iVar9 + -1) {
                    /* try { // try from 0841d6d6 to 0841d6da has its CatchHandler @ 0841d6ed */
      std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::vector(pvVar10);
      pvVar10 = pvVar10 + 0xc;
    }
    local_58[0] = 0;
    local_58[1] = 0;
    local_58[2] = 0;
    for (local_2c = 0; local_2c < *(int *)(param_5 + 0x1018); local_2c = local_2c + 1) {
      if ((((param_4 == 0) || (local_40 < local_3c)) || (*(int *)(param_5 + 0x798) == 0)) ||
         (iVar9 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size(local_7c),
         iVar9 < local_3c)) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if (bVar11) break;
                    /* try { // try from 0841d795 to 0841db1d has its CatchHandler @ 0841dc32 */
      cVar1 = MySQL::fetch(param_1);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      memset(&local_1a7,0,299);
      cVar1 = MySQL::get_uint(param_1,0,&local_1a7);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_int(param_1,1,&iStack_1a3);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_str(param_1,2,acStack_19f,0x1d);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_str(param_1,3,acStack_182,0x100);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_int(param_1,4,&iStack_82);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      cVar1 = MySQL::get_short(param_1,5,&local_7e);
      if (cVar1 != '\x01') {
        uVar7 = 0;
        goto LAB_0841dc5c;
      }
      if (0 < local_7e) {
        if (local_7e < 3) {
          cVar1 = IsContainedLetter(param_5,local_1a7);
          if (cVar1 == '\0') {
            std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::push_back
                      (avStack_70,(SIG_LETTER_INFO *)&local_1a7);
          }
          else {
            std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::push_back
                      (local_7c,(SIG_LETTER_INFO *)&local_1a7);
          }
        }
        else if (local_7e == 3) {
          std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::push_back
                    (avStack_64,(SIG_LETTER_INFO *)&local_1a7);
        }
      }
    }
    iVar9 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size(avStack_70);
    iVar2 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size(local_7c);
    local_38 = (iVar9 + iVar2) - *(int *)(param_5 + 0x3326);
    if ((0 < local_38) &&
       (ArrangeMailAndLetterIndex(param_5,(vector *)avStack_70,local_38,(vector *)local_7c),
       *(int *)(param_5 + 0x794) != 0)) {
      *(undefined4 *)(param_5 + 0x79c) =
           *(undefined4 *)(param_5 + (*(int *)(param_5 + 0x794) + -1) * 0x61);
    }
    local_34 = 0;
    if (*(int *)(param_5 + 0x1018) != 0) {
      for (local_28 = 0; iVar9 = local_28, local_28 < 3; local_28 = local_28 + 1) {
        iVar2 = std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::size
                          (local_7c + local_28 * 0xc);
        local_58[iVar9] = iVar2;
      }
      if (*(int *)(param_5 + 0x3326) < local_58[0]) {
        local_58[0] = *(int *)(param_5 + 0x3326);
      }
      if (*(int *)(param_5 + 0x3326) < *(int *)(param_5 + 0x794) + local_58[1]) {
        local_34 = (*(int *)(param_5 + 0x794) + local_58[1]) - *(int *)(param_5 + 0x3326);
        local_58[1] = local_58[1] - local_34;
      }
      if (10 < local_58[2]) {
        local_58[2] = 10;
      }
    }
    local_30 = 0;
    for (local_24 = 0; local_24 < 3; local_24 = local_24 + 1) {
      for (local_20 = 0; iVar9 = local_30, (int)local_20 < local_58[local_24];
          local_20 = local_20 + 1) {
        pSVar3 = (SIG_MAILBOX_LIST *)
                 std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::at
                           (local_7c + local_24 * 0xc,local_20);
        pSVar4 = param_5 + iVar9 * 299 + 0x101c;
        uVar8 = 299;
        bVar11 = ((uint)pSVar4 & 1) != 0;
        if (bVar11) {
          *pSVar4 = *pSVar3;
          pSVar4 = param_5 + iVar9 * 299 + 0x101d;
          pSVar3 = pSVar3 + 1;
          uVar8 = 0x12a;
        }
        if (((uint)pSVar4 & 2) != 0) {
          *(undefined2 *)pSVar4 = *(undefined2 *)pSVar3;
          pSVar4 = pSVar4 + 2;
          pSVar3 = pSVar3 + 2;
          uVar8 = uVar8 - 2;
        }
        for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined4 *)pSVar4 = *(undefined4 *)pSVar3;
          pSVar3 = pSVar3 + (uint)bVar12 * -8 + 4;
          pSVar4 = pSVar4 + (uint)bVar12 * -8 + 4;
        }
        iVar9 = 0;
        if ((uVar8 & 2) != 0) {
          *(undefined2 *)pSVar4 = *(undefined2 *)pSVar3;
          iVar9 = 2;
        }
        if (!bVar11) {
          pSVar4[iVar9] = pSVar3[iVar9];
        }
        local_30 = local_30 + 1;
      }
    }
    *(int *)(param_5 + 0x332a) = local_58[1];
    iVar9 = *(int *)(param_5 + 0x798);
    local_58[3] = 0;
    local_58[4] = local_34 - *(int *)(param_5 + 0x332e);
    piVar5 = std::max<int>(local_58 + 4,local_58 + 3);
    *(int *)(param_5 + 0x798) = iVar9 + *piVar5;
    *(int *)(param_5 + 0x1018) = local_30;
    uVar7 = 1;
LAB_0841dc5c:
    pvVar10 = (vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>> *)local_58;
    while (pvVar10 != local_7c) {
      pvVar10 = pvVar10 + -0xc;
      std::vector<SIG_LETTER_INFO,std::allocator<SIG_LETTER_INFO>>::~vector(pvVar10);
    }
  }
  return uVar7;
}

```

---

## dispatch

```asm
// === 0841de4a DB_MailBox_Req_List::dispatch  [0x0841de4a-0x841f083] ===
 841de4a:	55                   	push   %ebp
 841de4b:	89 e5                	mov    %esp,%ebp
 841de4d:	57                   	push   %edi
 841de4e:	56                   	push   %esi
 841de4f:	53                   	push   %ebx
 841de50:	81 ec 3c 46 00 00    	sub    $0x463c,%esp
 841de56:	8b 45 08             	mov    0x8(%ebp),%eax
 841de59:	8b 55 14             	mov    0x14(%ebp),%edx
 841de5c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841de60:	8b 55 10             	mov    0x10(%ebp),%edx
 841de63:	89 54 24 08          	mov    %edx,0x8(%esp)
 841de67:	8b 55 0c             	mov    0xc(%ebp),%edx
 841de6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 841de6e:	89 04 24             	mov    %eax,(%esp)
 841de71:	e8 06 e1 fd ff       	call   83fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>
 841de76:	83 f0 01             	xor    $0x1,%eax
 841de79:	84 c0                	test   %al,%al
 841de7b:	74 0a                	je     841de87 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x3d>
 841de7d:	bb 00 00 00 00       	mov    $0x0,%ebx
 841de82:	e9 ef 11 00 00       	jmp    841f076 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x122c>
 841de87:	8b 45 14             	mov    0x14(%ebp),%eax
 841de8a:	89 04 24             	mov    %eax,(%esp)
 841de8d:	e8 6c 3a 03 00       	call   84518fe <_ZN6Stream12GetOutBufferI16SIG_MAILBOX_LISTEEPT_v>
 841de92:	89 45 c0             	mov    %eax,-0x40(%ebp)
 841de95:	8d 85 e2 b9 ff ff    	lea    -0x461e(%ebp),%eax
 841de9b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 841de9e:	c7 44 24 08 8a 33 00 	movl   $0x338a,0x8(%esp)
 841dea5:	00 
 841dea6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841dead:	00 
 841deae:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841deb1:	89 04 24             	mov    %eax,(%esp)
 841deb4:	e8 07 fe c5 ff       	call   807dcc0 <memset@plt>
 841deb9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 841debe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841dec5:	00 
 841dec6:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841decd:	00 
 841dece:	89 04 24             	mov    %eax,(%esp)
 841ded1:	e8 68 73 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 841ded6:	89 45 c8             	mov    %eax,-0x38(%ebp)
 841ded9:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841dedc:	8b 40 04             	mov    0x4(%eax),%eax
 841dedf:	85 c0                	test   %eax,%eax
 841dee1:	75 50                	jne    841df33 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xe9>
 841dee3:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841dee6:	8b 00                	mov    (%eax),%eax
 841dee8:	c7 44 24 10 0f 00 00 	movl   $0xf,0x10(%esp)
 841deef:	00 
 841def0:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841def4:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 841defb:	00 
 841defc:	c7 44 24 04 ac be c4 	movl   $0x8c4beac,0x4(%esp)
 841df03:	08 
 841df04:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841df07:	89 04 24             	mov    %eax,(%esp)
 841df0a:	e8 b1 62 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841df0f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841df16:	00 
 841df17:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841df1a:	89 04 24             	mov    %eax,(%esp)
 841df1d:	e8 04 64 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841df22:	83 f0 01             	xor    $0x1,%eax
 841df25:	84 c0                	test   %al,%al
 841df27:	74 0a                	je     841df33 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xe9>
 841df29:	bb 00 00 00 00       	mov    $0x0,%ebx
 841df2e:	e9 43 11 00 00       	jmp    841f076 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x122c>
 841df33:	8d 9d 6c fd ff ff    	lea    -0x294(%ebp),%ebx
 841df39:	b8 00 00 00 00       	mov    $0x0,%eax
 841df3e:	ba 20 00 00 00       	mov    $0x20,%edx
 841df43:	89 df                	mov    %ebx,%edi
 841df45:	89 d1                	mov    %edx,%ecx
 841df47:	f3 ab                	rep stos %eax,%es:(%edi)
 841df49:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841df4c:	8b 40 04             	mov    0x4(%eax),%eax
 841df4f:	85 c0                	test   %eax,%eax
 841df51:	74 20                	je     841df73 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x129>
 841df53:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841df56:	8b 40 04             	mov    0x4(%eax),%eax
 841df59:	89 44 24 08          	mov    %eax,0x8(%esp)
 841df5d:	c7 44 24 04 39 bf c4 	movl   $0x8c4bf39,0x4(%esp)
 841df64:	08 
 841df65:	8d 85 6c fd ff ff    	lea    -0x294(%ebp),%eax
 841df6b:	89 04 24             	mov    %eax,(%esp)
 841df6e:	e8 cd 04 c6 ff       	call   807e440 <sprintf@plt>
 841df73:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841df76:	8b 00                	mov    (%eax),%eax
 841df78:	c7 44 24 10 14 00 00 	movl   $0x14,0x10(%esp)
 841df7f:	00 
 841df80:	8d 95 6c fd ff ff    	lea    -0x294(%ebp),%edx
 841df86:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841df8a:	89 44 24 08          	mov    %eax,0x8(%esp)
 841df8e:	c7 44 24 04 50 bf c4 	movl   $0x8c4bf50,0x4(%esp)
 841df95:	08 
 841df96:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841df99:	89 04 24             	mov    %eax,(%esp)
 841df9c:	e8 1f 62 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841dfa1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841dfa8:	00 
 841dfa9:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841dfac:	89 04 24             	mov    %eax,(%esp)
 841dfaf:	e8 72 63 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841dfb4:	83 f0 01             	xor    $0x1,%eax
 841dfb7:	84 c0                	test   %al,%al
 841dfb9:	74 0a                	je     841dfc5 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x17b>
 841dfbb:	bb 00 00 00 00       	mov    $0x0,%ebx
 841dfc0:	e9 b1 10 00 00       	jmp    841f076 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x122c>
 841dfc5:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 841dfcc:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841dfd2:	89 04 24             	mov    %eax,(%esp)
 841dfd5:	e8 ee 21 03 00       	call   84501c8 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEEC1Ev>
 841dfda:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 841dfe1:	eb 7e                	jmp    841e061 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x217>
 841dfe3:	8b 55 cc             	mov    -0x34(%ebp),%edx
 841dfe6:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841dfe9:	83 c2 04             	add    $0x4,%edx
 841dfec:	8b 44 90 04          	mov    0x4(%eax,%edx,4),%eax
 841dff0:	85 c0                	test   %eax,%eax
 841dff2:	74 69                	je     841e05d <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x213>
 841dff4:	c7 45 8c 00 00 00 00 	movl   $0x0,-0x74(%ebp)
 841dffb:	8b 45 cc             	mov    -0x34(%ebp),%eax
 841dffe:	83 c0 04             	add    $0x4,%eax
 841e001:	c1 e0 02             	shl    $0x2,%eax
 841e004:	03 45 c0             	add    -0x40(%ebp),%eax
 841e007:	8d 48 04             	lea    0x4(%eax),%ecx
 841e00a:	8d 45 84             	lea    -0x7c(%ebp),%eax
 841e00d:	8d 55 8c             	lea    -0x74(%ebp),%edx
 841e010:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e014:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 841e018:	89 04 24             	mov    %eax,(%esp)
 841e01b:	e8 d6 e1 e8 ff       	call   82ac1f6 <_ZSt9make_pairIRjiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 841e020:	83 ec 04             	sub    $0x4,%esp
 841e023:	8d 45 84             	lea    -0x7c(%ebp),%eax
 841e026:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e02a:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 841e030:	89 04 24             	mov    %eax,(%esp)
 841e033:	e8 62 e1 e8 ff       	call   82ac19a <_ZNSt4pairIKjiEC1IjiEEOS_IT_T0_E>
 841e038:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 841e03e:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 841e044:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e048:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 841e04e:	89 54 24 04          	mov    %edx,0x4(%esp)
 841e052:	89 04 24             	mov    %eax,(%esp)
 841e055:	e8 70 e1 e8 ff       	call   82ac1ca <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 841e05a:	83 ec 04             	sub    $0x4,%esp
 841e05d:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 841e061:	83 7d cc 13          	cmpl   $0x13,-0x34(%ebp)
 841e065:	0f 96 c0             	setbe  %al
 841e068:	84 c0                	test   %al,%al
 841e06a:	0f 85 73 ff ff ff    	jne    841dfe3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x199>
 841e070:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841e073:	8b 40 08             	mov    0x8(%eax),%eax
 841e076:	89 c2                	mov    %eax,%edx
 841e078:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e07b:	89 90 26 33 00 00    	mov    %edx,0x3326(%eax)
 841e081:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e084:	c7 80 9c 07 00 00 00 	movl   $0x0,0x79c(%eax)
 841e08b:	00 00 00 
 841e08e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e091:	89 04 24             	mov    %eax,(%esp)
 841e094:	e8 d3 42 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841e099:	89 45 90             	mov    %eax,-0x70(%ebp)
 841e09c:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841e09f:	8b 40 08             	mov    0x8(%eax),%eax
 841e0a2:	89 45 94             	mov    %eax,-0x6c(%ebp)
 841e0a5:	8d 45 90             	lea    -0x70(%ebp),%eax
 841e0a8:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e0ac:	8d 45 94             	lea    -0x6c(%ebp),%eax
 841e0af:	89 04 24             	mov    %eax,(%esp)
 841e0b2:	e8 57 18 cc ff       	call   80df90e <_ZSt3minIiERKT_S2_S2_>
 841e0b7:	8b 10                	mov    (%eax),%edx
 841e0b9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e0bc:	89 90 94 07 00 00    	mov    %edx,0x794(%eax)
 841e0c2:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e0c5:	c7 80 98 07 00 00 00 	movl   $0x0,0x798(%eax)
 841e0cc:	00 00 00 
 841e0cf:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e0d2:	8b 90 94 07 00 00    	mov    0x794(%eax),%edx
 841e0d8:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841e0db:	8b 40 08             	mov    0x8(%eax),%eax
 841e0de:	39 c2                	cmp    %eax,%edx
 841e0e0:	7c 21                	jl     841e103 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x2b9>
 841e0e2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e0e5:	89 04 24             	mov    %eax,(%esp)
 841e0e8:	e8 7f 42 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841e0ed:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e0f0:	8b 92 94 07 00 00    	mov    0x794(%edx),%edx
 841e0f6:	29 d0                	sub    %edx,%eax
 841e0f8:	89 c2                	mov    %eax,%edx
 841e0fa:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e0fd:	89 90 98 07 00 00    	mov    %edx,0x798(%eax)
 841e103:	8d 9d 40 fe ff ff    	lea    -0x1c0(%ebp),%ebx
 841e109:	b8 00 00 00 00       	mov    $0x0,%eax
 841e10e:	ba 15 00 00 00       	mov    $0x15,%edx
 841e113:	89 df                	mov    %ebx,%edi
 841e115:	89 d1                	mov    %edx,%ecx
 841e117:	f3 ab                	rep stos %eax,%es:(%edi)
 841e119:	8d 9d ec fd ff ff    	lea    -0x214(%ebp),%ebx
 841e11f:	b8 00 00 00 00       	mov    $0x0,%eax
 841e124:	ba 15 00 00 00       	mov    $0x15,%edx
 841e129:	89 df                	mov    %ebx,%edi
 841e12b:	89 d1                	mov    %edx,%ecx
 841e12d:	f3 ab                	rep stos %eax,%es:(%edi)
 841e12f:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 841e136:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 841e13d:	e9 a5 07 00 00       	jmp    841e8e7 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa9d>
 841e142:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e145:	89 04 24             	mov    %eax,(%esp)
 841e148:	e8 6f 63 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841e14d:	83 f0 01             	xor    $0x1,%eax
 841e150:	84 c0                	test   %al,%al
 841e152:	74 0a                	je     841e15e <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x314>
 841e154:	bb 00 00 00 00       	mov    $0x0,%ebx
 841e159:	e9 0a 0f 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841e15e:	c7 85 10 ff ff ff 00 	movl   $0x0,-0xf0(%ebp)
 841e165:	00 00 00 
 841e168:	c7 85 0c ff ff ff 00 	movl   $0x0,-0xf4(%ebp)
 841e16f:	00 00 00 
 841e172:	8d 85 fe fe ff ff    	lea    -0x102(%ebp),%eax
 841e178:	89 04 24             	mov    %eax,(%esp)
 841e17b:	e8 58 d1 ca ff       	call   80cb2d8 <_ZN12RandomOption5resetEv>
 841e180:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 841e186:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e18a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841e191:	00 
 841e192:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e195:	89 04 24             	mov    %eax,(%esp)
 841e198:	e8 8f 87 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841e19d:	83 f0 01             	xor    $0x1,%eax
 841e1a0:	84 c0                	test   %al,%al
 841e1a2:	0f 85 f8 06 00 00    	jne    841e8a0 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa56>
 841e1a8:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 841e1ae:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e1b2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841e1b9:	00 
 841e1ba:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e1bd:	89 04 24             	mov    %eax,(%esp)
 841e1c0:	e8 67 87 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841e1c5:	83 f0 01             	xor    $0x1,%eax
 841e1c8:	84 c0                	test   %al,%al
 841e1ca:	0f 85 d3 06 00 00    	jne    841e8a3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa59>
 841e1d0:	8d 85 48 ff ff ff    	lea    -0xb8(%ebp),%eax
 841e1d6:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e1da:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841e1e1:	00 
 841e1e2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e1e5:	89 04 24             	mov    %eax,(%esp)
 841e1e8:	e8 3f 87 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841e1ed:	83 f0 01             	xor    $0x1,%eax
 841e1f0:	84 c0                	test   %al,%al
 841e1f2:	0f 85 ae 06 00 00    	jne    841e8a6 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa5c>
 841e1f8:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 841e1fe:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e202:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841e209:	00 
 841e20a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e20d:	89 04 24             	mov    %eax,(%esp)
 841e210:	e8 d7 fb cd ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841e215:	83 f0 01             	xor    $0x1,%eax
 841e218:	84 c0                	test   %al,%al
 841e21a:	0f 85 89 06 00 00    	jne    841e8a9 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa5f>
 841e220:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 841e226:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e22a:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841e231:	00 
 841e232:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e235:	89 04 24             	mov    %eax,(%esp)
 841e238:	e8 2d f4 02 00       	call   844d66a <_ZN5MySQL9get_ulongEiRm>
 841e23d:	83 f0 01             	xor    $0x1,%eax
 841e240:	84 c0                	test   %al,%al
 841e242:	0f 85 64 06 00 00    	jne    841e8ac <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa62>
 841e248:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 841e24e:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e252:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 841e259:	00 
 841e25a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e25d:	89 04 24             	mov    %eax,(%esp)
 841e260:	e8 c7 86 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841e265:	83 f0 01             	xor    $0x1,%eax
 841e268:	84 c0                	test   %al,%al
 841e26a:	0f 85 3f 06 00 00    	jne    841e8af <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa65>
 841e270:	8d 85 3a ff ff ff    	lea    -0xc6(%ebp),%eax
 841e276:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e27a:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 841e281:	00 
 841e282:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e285:	89 04 24             	mov    %eax,(%esp)
 841e288:	e8 5f fb cd ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841e28d:	83 f0 01             	xor    $0x1,%eax
 841e290:	84 c0                	test   %al,%al
 841e292:	0f 85 1a 06 00 00    	jne    841e8b2 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa68>
 841e298:	8d 85 31 ff ff ff    	lea    -0xcf(%ebp),%eax
 841e29e:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e2a2:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 841e2a9:	00 
 841e2aa:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e2ad:	89 04 24             	mov    %eax,(%esp)
 841e2b0:	e8 9f fb cd ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 841e2b5:	83 f0 01             	xor    $0x1,%eax
 841e2b8:	84 c0                	test   %al,%al
 841e2ba:	0f 85 f5 05 00 00    	jne    841e8b5 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa6b>
 841e2c0:	8d 85 40 ff ff ff    	lea    -0xc0(%ebp),%eax
 841e2c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e2ca:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 841e2d1:	00 
 841e2d2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e2d5:	89 04 24             	mov    %eax,(%esp)
 841e2d8:	e8 4f 86 cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841e2dd:	83 f0 01             	xor    $0x1,%eax
 841e2e0:	84 c0                	test   %al,%al
 841e2e2:	0f 85 d0 05 00 00    	jne    841e8b8 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa6e>
 841e2e8:	c7 44 24 0c 1d 00 00 	movl   $0x1d,0xc(%esp)
 841e2ef:	00 
 841e2f0:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 841e2f6:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e2fa:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 841e301:	00 
 841e302:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e305:	89 04 24             	mov    %eax,(%esp)
 841e308:	e8 dd ea cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 841e30d:	83 f0 01             	xor    $0x1,%eax
 841e310:	84 c0                	test   %al,%al
 841e312:	0f 85 a3 05 00 00    	jne    841e8bb <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa71>
 841e318:	8d 85 38 ff ff ff    	lea    -0xc8(%ebp),%eax
 841e31e:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e322:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 841e329:	00 
 841e32a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e32d:	89 04 24             	mov    %eax,(%esp)
 841e330:	e8 b7 fa cd ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841e335:	83 f0 01             	xor    $0x1,%eax
 841e338:	84 c0                	test   %al,%al
 841e33a:	0f 85 7e 05 00 00    	jne    841e8be <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa74>
 841e340:	8d 85 36 ff ff ff    	lea    -0xca(%ebp),%eax
 841e346:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e34a:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 841e351:	00 
 841e352:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e355:	89 04 24             	mov    %eax,(%esp)
 841e358:	e8 8f fa cd ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841e35d:	83 f0 01             	xor    $0x1,%eax
 841e360:	84 c0                	test   %al,%al
 841e362:	0f 85 59 05 00 00    	jne    841e8c1 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa77>
 841e368:	8d 85 32 ff ff ff    	lea    -0xce(%ebp),%eax
 841e36e:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e372:	c7 44 24 04 0c 00 00 	movl   $0xc,0x4(%esp)
 841e379:	00 
 841e37a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e37d:	89 04 24             	mov    %eax,(%esp)
 841e380:	e8 67 fa cd ff       	call   80fddec <_ZN5MySQL9get_shortEiRs>
 841e385:	83 f0 01             	xor    $0x1,%eax
 841e388:	84 c0                	test   %al,%al
 841e38a:	0f 85 34 05 00 00    	jne    841e8c4 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa7a>
 841e390:	0f b7 85 36 ff ff ff 	movzwl -0xca(%ebp),%eax
 841e397:	66 83 f8 01          	cmp    $0x1,%ax
 841e39b:	75 11                	jne    841e3ae <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x564>
 841e39d:	0f b7 85 32 ff ff ff 	movzwl -0xce(%ebp),%eax
 841e3a4:	66 83 f8 01          	cmp    $0x1,%ax
 841e3a8:	0f 84 19 05 00 00    	je     841e8c7 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa7d>
 841e3ae:	c7 45 dc 0d 00 00 00 	movl   $0xd,-0x24(%ebp)
 841e3b5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e3b8:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e3bc:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 841e3c2:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e3c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e3ca:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e3cd:	89 04 24             	mov    %eax,(%esp)
 841e3d0:	e8 1d 3f cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841e3d5:	83 f0 01             	xor    $0x1,%eax
 841e3d8:	84 c0                	test   %al,%al
 841e3da:	0f 85 ea 04 00 00    	jne    841e8ca <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa80>
 841e3e0:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 841e3e6:	85 c0                	test   %eax,%eax
 841e3e8:	75 0e                	jne    841e3f8 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x5ae>
 841e3ea:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 841e3f0:	85 c0                	test   %eax,%eax
 841e3f2:	0f 84 d5 04 00 00    	je     841e8cd <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa83>
 841e3f8:	c7 85 f4 fe ff ff 00 	movl   $0x0,-0x10c(%ebp)
 841e3ff:	00 00 00 
 841e402:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e405:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e409:	8d 95 f4 fe ff ff    	lea    -0x10c(%ebp),%edx
 841e40f:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e413:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e417:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e41a:	89 04 24             	mov    %eax,(%esp)
 841e41d:	e8 48 f2 02 00       	call   844d66a <_ZN5MySQL9get_ulongEiRm>
 841e422:	83 f0 01             	xor    $0x1,%eax
 841e425:	84 c0                	test   %al,%al
 841e427:	0f 85 a3 04 00 00    	jne    841e8d0 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa86>
 841e42d:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e430:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e434:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 841e43b:	00 
 841e43c:	8d 95 ea fe ff ff    	lea    -0x116(%ebp),%edx
 841e442:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e446:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e44a:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e44d:	89 04 24             	mov    %eax,(%esp)
 841e450:	e8 c5 6e d0 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 841e455:	83 f0 01             	xor    $0x1,%eax
 841e458:	84 c0                	test   %al,%al
 841e45a:	0f 85 73 04 00 00    	jne    841e8d3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa89>
 841e460:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e463:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e467:	8d 95 10 ff ff ff    	lea    -0xf0(%ebp),%edx
 841e46d:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e471:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e475:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e478:	89 04 24             	mov    %eax,(%esp)
 841e47b:	e8 ba f2 02 00       	call   844d73a <_ZN5MySQL8get_byteEiRi>
 841e480:	83 f0 01             	xor    $0x1,%eax
 841e483:	84 c0                	test   %al,%al
 841e485:	0f 85 4b 04 00 00    	jne    841e8d6 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa8c>
 841e48b:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e48e:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e492:	8d 95 0c ff ff ff    	lea    -0xf4(%ebp),%edx
 841e498:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e49c:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e4a0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e4a3:	89 04 24             	mov    %eax,(%esp)
 841e4a6:	e8 71 3b d2 ff       	call   814201c <_ZN5MySQL9get_shortEiRi>
 841e4ab:	83 f0 01             	xor    $0x1,%eax
 841e4ae:	84 c0                	test   %al,%al
 841e4b0:	0f 85 23 04 00 00    	jne    841e8d9 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa8f>
 841e4b6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e4b9:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e4bd:	c7 44 24 0c 0e 00 00 	movl   $0xe,0xc(%esp)
 841e4c4:	00 
 841e4c5:	8d 95 fe fe ff ff    	lea    -0x102(%ebp),%edx
 841e4cb:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e4cf:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e4d3:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e4d6:	89 04 24             	mov    %eax,(%esp)
 841e4d9:	e8 3c 6e d0 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 841e4de:	83 f0 01             	xor    $0x1,%eax
 841e4e1:	84 c0                	test   %al,%al
 841e4e3:	0f 85 f3 03 00 00    	jne    841e8dc <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa92>
 841e4e9:	c6 85 e9 fe ff ff 00 	movb   $0x0,-0x117(%ebp)
 841e4f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e4f3:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e4f7:	8d 95 e9 fe ff ff    	lea    -0x117(%ebp),%edx
 841e4fd:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e501:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e505:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e508:	89 04 24             	mov    %eax,(%esp)
 841e50b:	e8 44 f9 cd ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 841e510:	83 f0 01             	xor    $0x1,%eax
 841e513:	84 c0                	test   %al,%al
 841e515:	0f 85 c4 03 00 00    	jne    841e8df <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa95>
 841e51b:	c6 85 e8 fe ff ff 00 	movb   $0x0,-0x118(%ebp)
 841e522:	8b 45 dc             	mov    -0x24(%ebp),%eax
 841e525:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 841e529:	8d 95 e8 fe ff ff    	lea    -0x118(%ebp),%edx
 841e52f:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e533:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e537:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e53a:	89 04 24             	mov    %eax,(%esp)
 841e53d:	e8 12 f9 cd ff       	call   80fde54 <_ZN5MySQL8get_byteEiRc>
 841e542:	83 f0 01             	xor    $0x1,%eax
 841e545:	84 c0                	test   %al,%al
 841e547:	0f 85 95 03 00 00    	jne    841e8e2 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa98>
 841e54d:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 841e553:	85 c0                	test   %eax,%eax
 841e555:	74 57                	je     841e5ae <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x764>
 841e557:	c7 45 b0 00 00 00 00 	movl   $0x0,-0x50(%ebp)
 841e55e:	8d 45 a8             	lea    -0x58(%ebp),%eax
 841e561:	8d 55 b0             	lea    -0x50(%ebp),%edx
 841e564:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e568:	8d 95 f8 fe ff ff    	lea    -0x108(%ebp),%edx
 841e56e:	89 54 24 04          	mov    %edx,0x4(%esp)
 841e572:	89 04 24             	mov    %eax,(%esp)
 841e575:	e8 7c dc e8 ff       	call   82ac1f6 <_ZSt9make_pairIRjiESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 841e57a:	83 ec 04             	sub    $0x4,%esp
 841e57d:	8d 45 a8             	lea    -0x58(%ebp),%eax
 841e580:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e584:	8d 45 a0             	lea    -0x60(%ebp),%eax
 841e587:	89 04 24             	mov    %eax,(%esp)
 841e58a:	e8 0b dc e8 ff       	call   82ac19a <_ZNSt4pairIKjiEC1IjiEEOS_IT_T0_E>
 841e58f:	8d 45 98             	lea    -0x68(%ebp),%eax
 841e592:	8d 55 a0             	lea    -0x60(%ebp),%edx
 841e595:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e599:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 841e59f:	89 54 24 04          	mov    %edx,0x4(%esp)
 841e5a3:	89 04 24             	mov    %eax,(%esp)
 841e5a6:	e8 1f dc e8 ff       	call   82ac1ca <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE6insertERKS4_>
 841e5ab:	83 ec 04             	sub    $0x4,%esp
 841e5ae:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e5b1:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 841e5b7:	89 c1                	mov    %eax,%ecx
 841e5b9:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e5bc:	6b d2 61             	imul   $0x61,%edx,%edx
 841e5bf:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
 841e5c2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e5c5:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 841e5cb:	81 c2 80 c6 13 00    	add    $0x13c680,%edx
 841e5d1:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e5d4:	6b c0 61             	imul   $0x61,%eax,%eax
 841e5d7:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 841e5da:	83 c0 50             	add    $0x50,%eax
 841e5dd:	89 50 05             	mov    %edx,0x5(%eax)
 841e5e0:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e5e3:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 841e5e9:	89 c1                	mov    %eax,%ecx
 841e5eb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e5ee:	6b d2 61             	imul   $0x61,%edx,%edx
 841e5f1:	89 4c 02 04          	mov    %ecx,0x4(%edx,%eax,1)
 841e5f5:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e5f8:	0f b7 95 34 ff ff ff 	movzwl -0xcc(%ebp),%edx
 841e5ff:	66 83 fa 01          	cmp    $0x1,%dx
 841e603:	0f 94 c2             	sete   %dl
 841e606:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e609:	6b c0 61             	imul   $0x61,%eax,%eax
 841e60c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 841e60f:	83 c0 29             	add    $0x29,%eax
 841e612:	88 10                	mov    %dl,(%eax)
 841e614:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e617:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 841e61d:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e620:	6b d2 61             	imul   $0x61,%edx,%edx
 841e623:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e626:	83 c2 20             	add    $0x20,%edx
 841e629:	89 42 0a             	mov    %eax,0xa(%edx)
 841e62c:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e62f:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 841e635:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e638:	6b d2 61             	imul   $0x61,%edx,%edx
 841e63b:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e63e:	83 c2 20             	add    $0x20,%edx
 841e641:	89 42 0e             	mov    %eax,0xe(%edx)
 841e644:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e647:	0f b7 85 3a ff ff ff 	movzwl -0xc6(%ebp),%eax
 841e64e:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e651:	6b d2 61             	imul   $0x61,%edx,%edx
 841e654:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e657:	83 c2 20             	add    $0x20,%edx
 841e65a:	66 89 42 13          	mov    %ax,0x13(%edx)
 841e65e:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e661:	0f b6 85 31 ff ff ff 	movzbl -0xcf(%ebp),%eax
 841e668:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e66b:	6b d2 61             	imul   $0x61,%edx,%edx
 841e66e:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e671:	83 c2 32             	add    $0x32,%edx
 841e674:	88 02                	mov    %al,(%edx)
 841e676:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e679:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 841e67f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e682:	6b d2 61             	imul   $0x61,%edx,%edx
 841e685:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e688:	83 c2 20             	add    $0x20,%edx
 841e68b:	89 42 15             	mov    %eax,0x15(%edx)
 841e68e:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e691:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e694:	6b c0 61             	imul   $0x61,%eax,%eax
 841e697:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841e69a:	83 c0 30             	add    $0x30,%eax
 841e69d:	8b 95 ea fe ff ff    	mov    -0x116(%ebp),%edx
 841e6a3:	89 50 09             	mov    %edx,0x9(%eax)
 841e6a6:	8b 95 ee fe ff ff    	mov    -0x112(%ebp),%edx
 841e6ac:	89 50 0d             	mov    %edx,0xd(%eax)
 841e6af:	0f b7 95 f2 fe ff ff 	movzwl -0x10e(%ebp),%edx
 841e6b6:	66 89 50 11          	mov    %dx,0x11(%eax)
 841e6ba:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e6bd:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 841e6c3:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e6c6:	6b d2 61             	imul   $0x61,%edx,%edx
 841e6c9:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e6cc:	83 c2 20             	add    $0x20,%edx
 841e6cf:	89 42 05             	mov    %eax,0x5(%edx)
 841e6d2:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e6d5:	0f b7 95 38 ff ff ff 	movzwl -0xc8(%ebp),%edx
 841e6dc:	66 83 fa 01          	cmp    $0x1,%dx
 841e6e0:	0f 94 c2             	sete   %dl
 841e6e3:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e6e6:	6b c0 61             	imul   $0x61,%eax,%eax
 841e6e9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 841e6ec:	83 c0 5b             	add    $0x5b,%eax
 841e6ef:	88 10                	mov    %dl,(%eax)
 841e6f1:	0f b7 85 36 ff ff ff 	movzwl -0xca(%ebp),%eax
 841e6f8:	66 83 f8 01          	cmp    $0x1,%ax
 841e6fc:	75 36                	jne    841e734 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x8ea>
 841e6fe:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e701:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e704:	6b c0 61             	imul   $0x61,%eax,%eax
 841e707:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841e70a:	83 c0 59             	add    $0x59,%eax
 841e70d:	c6 00 01             	movb   $0x1,(%eax)
 841e710:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 841e716:	83 c0 01             	add    $0x1,%eax
 841e719:	89 85 40 fe ff ff    	mov    %eax,-0x1c0(%ebp)
 841e71f:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 841e725:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 841e72b:	89 94 85 40 fe ff ff 	mov    %edx,-0x1c0(%ebp,%eax,4)
 841e732:	eb 12                	jmp    841e746 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x8fc>
 841e734:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e737:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e73a:	6b c0 61             	imul   $0x61,%eax,%eax
 841e73d:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841e740:	83 c0 59             	add    $0x59,%eax
 841e743:	c6 00 00             	movb   $0x0,(%eax)
 841e746:	0f b7 85 32 ff ff ff 	movzwl -0xce(%ebp),%eax
 841e74d:	66 83 f8 01          	cmp    $0x1,%ax
 841e751:	75 36                	jne    841e789 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x93f>
 841e753:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e756:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e759:	6b c0 61             	imul   $0x61,%eax,%eax
 841e75c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841e75f:	83 c0 5a             	add    $0x5a,%eax
 841e762:	c6 00 01             	movb   $0x1,(%eax)
 841e765:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 841e76b:	83 c0 01             	add    $0x1,%eax
 841e76e:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 841e774:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 841e77a:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 841e780:	89 94 85 ec fd ff ff 	mov    %edx,-0x214(%ebp,%eax,4)
 841e787:	eb 12                	jmp    841e79b <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x951>
 841e789:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e78c:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e78f:	6b c0 61             	imul   $0x61,%eax,%eax
 841e792:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841e795:	83 c0 5a             	add    $0x5a,%eax
 841e798:	c6 00 00             	movb   $0x0,(%eax)
 841e79b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e79e:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 841e7a4:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e7a7:	6b d2 61             	imul   $0x61,%edx,%edx
 841e7aa:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e7ad:	83 c2 50             	add    $0x50,%edx
 841e7b0:	89 42 0c             	mov    %eax,0xc(%edx)
 841e7b3:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e7b6:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 841e7bc:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e7bf:	6b d2 61             	imul   $0x61,%edx,%edx
 841e7c2:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e7c5:	83 c2 43             	add    $0x43,%edx
 841e7c8:	88 02                	mov    %al,(%edx)
 841e7ca:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e7cd:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 841e7d3:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e7d6:	6b d2 61             	imul   $0x61,%edx,%edx
 841e7d9:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e7dc:	83 c2 30             	add    $0x30,%edx
 841e7df:	66 89 42 14          	mov    %ax,0x14(%edx)
 841e7e3:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e7e6:	0f b6 85 e8 fe ff ff 	movzbl -0x118(%ebp),%eax
 841e7ed:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e7f0:	6b d2 61             	imul   $0x61,%edx,%edx
 841e7f3:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e7f6:	83 c2 60             	add    $0x60,%edx
 841e7f9:	88 02                	mov    %al,(%edx)
 841e7fb:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e7fe:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841e801:	6b c0 61             	imul   $0x61,%eax,%eax
 841e804:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841e807:	83 c0 30             	add    $0x30,%eax
 841e80a:	8b 95 fe fe ff ff    	mov    -0x102(%ebp),%edx
 841e810:	89 50 16             	mov    %edx,0x16(%eax)
 841e813:	8b 95 02 ff ff ff    	mov    -0xfe(%ebp),%edx
 841e819:	89 50 1a             	mov    %edx,0x1a(%eax)
 841e81c:	8b 95 06 ff ff ff    	mov    -0xfa(%ebp),%edx
 841e822:	89 50 1e             	mov    %edx,0x1e(%eax)
 841e825:	0f b7 95 0a ff ff ff 	movzwl -0xf6(%ebp),%edx
 841e82c:	66 89 50 22          	mov    %dx,0x22(%eax)
 841e830:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e833:	0f b6 85 e9 fe ff ff 	movzbl -0x117(%ebp),%eax
 841e83a:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841e83d:	6b d2 61             	imul   $0x61,%edx,%edx
 841e840:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841e843:	83 c2 54             	add    $0x54,%edx
 841e846:	88 02                	mov    %al,(%edx)
 841e848:	8b 45 d0             	mov    -0x30(%ebp),%eax
 841e84b:	6b c0 61             	imul   $0x61,%eax,%eax
 841e84e:	03 45 c4             	add    -0x3c(%ebp),%eax
 841e851:	8d 50 08             	lea    0x8(%eax),%edx
 841e854:	c7 44 24 08 1d 00 00 	movl   $0x1d,0x8(%esp)
 841e85b:	00 
 841e85c:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 841e862:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e866:	89 14 24             	mov    %edx,(%esp)
 841e869:	e8 62 f0 c5 ff       	call   807d8d0 <strncpy@plt>
 841e86e:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 841e874:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 841e877:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e87a:	8d 90 9c 07 00 00    	lea    0x79c(%eax),%edx
 841e880:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 841e883:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e887:	89 14 24             	mov    %edx,(%esp)
 841e88a:	e8 a2 0c c6 ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 841e88f:	8b 10                	mov    (%eax),%edx
 841e891:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e894:	89 90 9c 07 00 00    	mov    %edx,0x79c(%eax)
 841e89a:	83 45 d0 01          	addl   $0x1,-0x30(%ebp)
 841e89e:	eb 43                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8a0:	90                   	nop
 841e8a1:	eb 40                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8a3:	90                   	nop
 841e8a4:	eb 3d                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8a6:	90                   	nop
 841e8a7:	eb 3a                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8a9:	90                   	nop
 841e8aa:	eb 37                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8ac:	90                   	nop
 841e8ad:	eb 34                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8af:	90                   	nop
 841e8b0:	eb 31                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8b2:	90                   	nop
 841e8b3:	eb 2e                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8b5:	90                   	nop
 841e8b6:	eb 2b                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8b8:	90                   	nop
 841e8b9:	eb 28                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8bb:	90                   	nop
 841e8bc:	eb 25                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8be:	90                   	nop
 841e8bf:	eb 22                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8c1:	90                   	nop
 841e8c2:	eb 1f                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8c4:	90                   	nop
 841e8c5:	eb 1c                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8c7:	90                   	nop
 841e8c8:	eb 19                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8ca:	90                   	nop
 841e8cb:	eb 16                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8cd:	90                   	nop
 841e8ce:	eb 13                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8d0:	90                   	nop
 841e8d1:	eb 10                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8d3:	90                   	nop
 841e8d4:	eb 0d                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8d6:	90                   	nop
 841e8d7:	eb 0a                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8d9:	90                   	nop
 841e8da:	eb 07                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8dc:	90                   	nop
 841e8dd:	eb 04                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8df:	90                   	nop
 841e8e0:	eb 01                	jmp    841e8e3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xa99>
 841e8e2:	90                   	nop
 841e8e3:	83 45 d8 01          	addl   $0x1,-0x28(%ebp)
 841e8e7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e8ea:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841e8f0:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 841e8f3:	7e 0d                	jle    841e902 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xab8>
 841e8f5:	83 7d d8 13          	cmpl   $0x13,-0x28(%ebp)
 841e8f9:	7f 07                	jg     841e902 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xab8>
 841e8fb:	b8 01 00 00 00       	mov    $0x1,%eax
 841e900:	eb 05                	jmp    841e907 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xabd>
 841e902:	b8 00 00 00 00       	mov    $0x0,%eax
 841e907:	84 c0                	test   %al,%al
 841e909:	0f 85 33 f8 ff ff    	jne    841e142 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x2f8>
 841e90f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e912:	8b 55 d0             	mov    -0x30(%ebp),%edx
 841e915:	89 90 94 07 00 00    	mov    %edx,0x794(%eax)
 841e91b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e91e:	c7 80 2e 33 00 00 00 	movl   $0x0,0x332e(%eax)
 841e925:	00 00 00 
 841e928:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 841e92f:	e9 db 00 00 00       	jmp    841ea0f <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xbc5>
 841e934:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e937:	89 04 24             	mov    %eax,(%esp)
 841e93a:	e8 7d 5b fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841e93f:	83 f0 01             	xor    $0x1,%eax
 841e942:	84 c0                	test   %al,%al
 841e944:	74 0a                	je     841e950 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xb06>
 841e946:	bb 00 00 00 00       	mov    $0x0,%ebx
 841e94b:	e9 18 07 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841e950:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 841e956:	89 44 24 08          	mov    %eax,0x8(%esp)
 841e95a:	c7 44 24 04 0d 00 00 	movl   $0xd,0x4(%esp)
 841e961:	00 
 841e962:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841e965:	89 04 24             	mov    %eax,(%esp)
 841e968:	e8 85 39 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841e96d:	83 f0 01             	xor    $0x1,%eax
 841e970:	84 c0                	test   %al,%al
 841e972:	0f 85 92 00 00 00    	jne    841ea0a <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xbc0>
 841e978:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 841e97e:	85 c0                	test   %eax,%eax
 841e980:	0f 84 85 00 00 00    	je     841ea0b <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xbc1>
 841e986:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 841e98c:	8d 95 e4 fe ff ff    	lea    -0x11c(%ebp),%edx
 841e992:	89 54 24 08          	mov    %edx,0x8(%esp)
 841e996:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 841e99c:	89 54 24 04          	mov    %edx,0x4(%esp)
 841e9a0:	89 04 24             	mov    %eax,(%esp)
 841e9a3:	e8 c4 18 03 00       	call   845026c <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE4findERS3_>
 841e9a8:	83 ec 04             	sub    $0x4,%esp
 841e9ab:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841e9ae:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 841e9b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 841e9b8:	89 04 24             	mov    %eax,(%esp)
 841e9bb:	e8 d8 18 03 00       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 841e9c0:	83 ec 04             	sub    $0x4,%esp
 841e9c3:	8d 45 b8             	lea    -0x48(%ebp),%eax
 841e9c6:	89 44 24 04          	mov    %eax,0x4(%esp)
 841e9ca:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 841e9d0:	89 04 24             	mov    %eax,(%esp)
 841e9d3:	e8 e6 18 03 00       	call   84502be <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 841e9d8:	84 c0                	test   %al,%al
 841e9da:	74 17                	je     841e9f3 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xba9>
 841e9dc:	8d 85 e0 fe ff ff    	lea    -0x120(%ebp),%eax
 841e9e2:	89 04 24             	mov    %eax,(%esp)
 841e9e5:	e8 e8 18 03 00       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 841e9ea:	8b 50 04             	mov    0x4(%eax),%edx
 841e9ed:	83 c2 01             	add    $0x1,%edx
 841e9f0:	89 50 04             	mov    %edx,0x4(%eax)
 841e9f3:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841e9f6:	8b 80 2e 33 00 00    	mov    0x332e(%eax),%eax
 841e9fc:	8d 50 01             	lea    0x1(%eax),%edx
 841e9ff:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ea02:	89 90 2e 33 00 00    	mov    %edx,0x332e(%eax)
 841ea08:	eb 01                	jmp    841ea0b <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xbc1>
 841ea0a:	90                   	nop
 841ea0b:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 841ea0f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ea12:	8b 80 98 07 00 00    	mov    0x798(%eax),%eax
 841ea18:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 841ea1b:	0f 9f c0             	setg   %al
 841ea1e:	84 c0                	test   %al,%al
 841ea20:	0f 85 0e ff ff ff    	jne    841e934 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xaea>
 841ea26:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841ea2c:	89 04 24             	mov    %eax,(%esp)
 841ea2f:	e8 1e 2f 03 00       	call   8451952 <_ZNKSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5emptyEv>
 841ea34:	83 f0 01             	xor    $0x1,%eax
 841ea37:	84 c0                	test   %al,%al
 841ea39:	0f 84 b6 00 00 00    	je     841eaf5 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xcab>
 841ea3f:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 841ea46:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 841ea4c:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 841ea52:	89 54 24 04          	mov    %edx,0x4(%esp)
 841ea56:	89 04 24             	mov    %eax,(%esp)
 841ea59:	e8 08 2f 03 00       	call   8451966 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE5beginEv>
 841ea5e:	83 ec 04             	sub    $0x4,%esp
 841ea61:	eb 5d                	jmp    841eac0 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xc76>
 841ea63:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 841ea69:	89 04 24             	mov    %eax,(%esp)
 841ea6c:	e8 61 18 03 00       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 841ea71:	8b 40 04             	mov    0x4(%eax),%eax
 841ea74:	85 c0                	test   %eax,%eax
 841ea76:	7e 0d                	jle    841ea85 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xc3b>
 841ea78:	83 7d cc 13          	cmpl   $0x13,-0x34(%ebp)
 841ea7c:	77 07                	ja     841ea85 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xc3b>
 841ea7e:	b8 01 00 00 00       	mov    $0x1,%eax
 841ea83:	eb 05                	jmp    841ea8a <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xc40>
 841ea85:	b8 00 00 00 00       	mov    $0x0,%eax
 841ea8a:	84 c0                	test   %al,%al
 841ea8c:	74 24                	je     841eab2 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xc68>
 841ea8e:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 841ea91:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 841ea97:	89 04 24             	mov    %eax,(%esp)
 841ea9a:	e8 33 18 03 00       	call   84502d2 <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEptEv>
 841ea9f:	8b 10                	mov    (%eax),%edx
 841eaa1:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841eaa4:	8d 8b cc 0c 00 00    	lea    0xccc(%ebx),%ecx
 841eaaa:	89 54 88 0a          	mov    %edx,0xa(%eax,%ecx,4)
 841eaae:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 841eab2:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 841eab8:	89 04 24             	mov    %eax,(%esp)
 841eabb:	e8 cc 2e 03 00       	call   845198c <_ZNSt17_Rb_tree_iteratorISt4pairIKjiEEppEv>
 841eac0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 841eac3:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 841eac9:	89 54 24 04          	mov    %edx,0x4(%esp)
 841eacd:	89 04 24             	mov    %eax,(%esp)
 841ead0:	e8 c3 17 03 00       	call   8450298 <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEE3endEv>
 841ead5:	83 ec 04             	sub    $0x4,%esp
 841ead8:	8d 45 bc             	lea    -0x44(%ebp),%eax
 841eadb:	89 44 24 04          	mov    %eax,0x4(%esp)
 841eadf:	8d 85 dc fe ff ff    	lea    -0x124(%ebp),%eax
 841eae5:	89 04 24             	mov    %eax,(%esp)
 841eae8:	e8 d1 17 03 00       	call   84502be <_ZNKSt17_Rb_tree_iteratorISt4pairIKjiEEneERKS3_>
 841eaed:	84 c0                	test   %al,%al
 841eaef:	0f 85 6e ff ff ff    	jne    841ea63 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xc19>
 841eaf5:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841eaf8:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841eafe:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 841eb01:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841eb04:	8b 40 08             	mov    0x8(%eax),%eax
 841eb07:	89 c2                	mov    %eax,%edx
 841eb09:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841eb0c:	89 90 18 10 00 00    	mov    %edx,0x1018(%eax)
 841eb12:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841eb15:	8b 50 0c             	mov    0xc(%eax),%edx
 841eb18:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841eb1b:	8b 00                	mov    (%eax),%eax
 841eb1d:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841eb20:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 841eb24:	89 54 24 10          	mov    %edx,0x10(%esp)
 841eb28:	89 44 24 0c          	mov    %eax,0xc(%esp)
 841eb2c:	8b 45 10             	mov    0x10(%ebp),%eax
 841eb2f:	89 44 24 08          	mov    %eax,0x8(%esp)
 841eb33:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841eb36:	89 44 24 04          	mov    %eax,0x4(%esp)
 841eb3a:	8b 45 08             	mov    0x8(%ebp),%eax
 841eb3d:	89 04 24             	mov    %eax,(%esp)
 841eb40:	e8 e7 e9 ff ff       	call   841d52c <_ZN19DB_MailBox_Req_List12SelectLetterEP5MySQLiijP16SIG_MAILBOX_LIST>
 841eb45:	83 f0 01             	xor    $0x1,%eax
 841eb48:	84 c0                	test   %al,%al
 841eb4a:	74 39                	je     841eb85 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xd3b>
 841eb4c:	c7 44 24 10 eb c0 c4 	movl   $0x8c4c0eb,0x10(%esp)
 841eb53:	08 
 841eb54:	c7 44 24 0c 38 54 00 	movl   $0x5438,0xc(%esp)
 841eb5b:	00 
 841eb5c:	c7 44 24 08 80 c9 c5 	movl   $0x8c5c980,0x8(%esp)
 841eb63:	08 
 841eb64:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841eb6b:	08 
 841eb6c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 841eb73:	e8 92 50 6b 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 841eb78:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841eb7b:	c7 80 18 10 00 00 00 	movl   $0x0,0x1018(%eax)
 841eb82:	00 00 00 
 841eb85:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841eb88:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841eb8e:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 841eb91:	74 21                	je     841ebb4 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xd6a>
 841eb93:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841eb96:	8b 40 04             	mov    0x4(%eax),%eax
 841eb99:	89 44 24 08          	mov    %eax,0x8(%esp)
 841eb9d:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 841eba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 841eba7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ebaa:	89 04 24             	mov    %eax,(%esp)
 841ebad:	e8 be e8 ff ff       	call   841d470 <_Z16DoChangeMailListP16SIG_MAILBOX_LISTPji>
 841ebb2:	eb 1c                	jmp    841ebd0 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xd86>
 841ebb4:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ebb7:	8b 80 94 07 00 00    	mov    0x794(%eax),%eax
 841ebbd:	85 c0                	test   %eax,%eax
 841ebbf:	75 0f                	jne    841ebd0 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xd86>
 841ebc1:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841ebc4:	8b 50 04             	mov    0x4(%eax),%edx
 841ebc7:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ebca:	89 90 9c 07 00 00    	mov    %edx,0x79c(%eax)
 841ebd0:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ebd3:	c7 80 a0 07 00 00 00 	movl   $0x0,0x7a0(%eax)
 841ebda:	00 00 00 
 841ebdd:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 841ebe3:	85 c0                	test   %eax,%eax
 841ebe5:	0f 84 0b 03 00 00    	je     841eef6 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x10ac>
 841ebeb:	8d 9d 6c ed ff ff    	lea    -0x1294(%ebp),%ebx
 841ebf1:	b8 00 00 00 00       	mov    $0x0,%eax
 841ebf6:	ba 00 04 00 00       	mov    $0x400,%edx
 841ebfb:	89 df                	mov    %ebx,%edi
 841ebfd:	89 d1                	mov    %edx,%ecx
 841ebff:	f3 ab                	rep stos %eax,%es:(%edi)
 841ec01:	8d 85 bb fe ff ff    	lea    -0x145(%ebp),%eax
 841ec07:	ba 19 00 00 00       	mov    $0x19,%edx
 841ec0c:	b9 00 00 00 00       	mov    $0x0,%ecx
 841ec11:	89 c3                	mov    %eax,%ebx
 841ec13:	83 e3 01             	and    $0x1,%ebx
 841ec16:	85 db                	test   %ebx,%ebx
 841ec18:	74 08                	je     841ec22 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xdd8>
 841ec1a:	88 08                	mov    %cl,(%eax)
 841ec1c:	83 c0 01             	add    $0x1,%eax
 841ec1f:	83 ea 01             	sub    $0x1,%edx
 841ec22:	89 c3                	mov    %eax,%ebx
 841ec24:	83 e3 02             	and    $0x2,%ebx
 841ec27:	85 db                	test   %ebx,%ebx
 841ec29:	74 09                	je     841ec34 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xdea>
 841ec2b:	66 89 08             	mov    %cx,(%eax)
 841ec2e:	83 c0 02             	add    $0x2,%eax
 841ec31:	83 ea 02             	sub    $0x2,%edx
 841ec34:	89 d6                	mov    %edx,%esi
 841ec36:	83 e6 fc             	and    $0xfffffffc,%esi
 841ec39:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ec3e:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 841ec41:	83 c3 04             	add    $0x4,%ebx
 841ec44:	39 f3                	cmp    %esi,%ebx
 841ec46:	72 f6                	jb     841ec3e <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xdf4>
 841ec48:	01 d8                	add    %ebx,%eax
 841ec4a:	89 d3                	mov    %edx,%ebx
 841ec4c:	83 e3 02             	and    $0x2,%ebx
 841ec4f:	85 db                	test   %ebx,%ebx
 841ec51:	74 06                	je     841ec59 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xe0f>
 841ec53:	66 89 08             	mov    %cx,(%eax)
 841ec56:	83 c0 02             	add    $0x2,%eax
 841ec59:	83 e2 01             	and    $0x1,%edx
 841ec5c:	85 d2                	test   %edx,%edx
 841ec5e:	74 05                	je     841ec65 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xe1b>
 841ec60:	88 08                	mov    %cl,(%eax)
 841ec62:	83 c0 01             	add    $0x1,%eax
 841ec65:	c7 85 b4 fe ff ff 00 	movl   $0x0,-0x14c(%ebp)
 841ec6c:	00 00 00 
 841ec6f:	8d 85 6c ed ff ff    	lea    -0x1294(%ebp),%eax
 841ec75:	89 44 24 04          	mov    %eax,0x4(%esp)
 841ec79:	8d 85 40 fe ff ff    	lea    -0x1c0(%ebp),%eax
 841ec7f:	89 04 24             	mov    %eax,(%esp)
 841ec82:	e8 e1 0c fe ff       	call   83ff968 <_Z15getList2inQueryPjPc>
 841ec87:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841ec8a:	8b 00                	mov    (%eax),%eax
 841ec8c:	8d 95 6c ed ff ff    	lea    -0x1294(%ebp),%edx
 841ec92:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841ec96:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ec9a:	c7 44 24 04 00 c1 c4 	movl   $0x8c4c100,0x4(%esp)
 841eca1:	08 
 841eca2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841eca5:	89 04 24             	mov    %eax,(%esp)
 841eca8:	e8 13 55 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841ecad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841ecb4:	00 
 841ecb5:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ecb8:	89 04 24             	mov    %eax,(%esp)
 841ecbb:	e8 66 56 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841ecc0:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ecc3:	89 04 24             	mov    %eax,(%esp)
 841ecc6:	e8 a1 36 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841eccb:	89 c2                	mov    %eax,%edx
 841eccd:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ecd0:	89 90 a0 07 00 00    	mov    %edx,0x7a0(%eax)
 841ecd6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 841ecdd:	e9 fb 01 00 00       	jmp    841eedd <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x1093>
 841ece2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ece5:	89 04 24             	mov    %eax,(%esp)
 841ece8:	e8 cf 57 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841eced:	83 f0 01             	xor    $0x1,%eax
 841ecf0:	84 c0                	test   %al,%al
 841ecf2:	74 0a                	je     841ecfe <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xeb4>
 841ecf4:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ecf9:	e9 6a 03 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841ecfe:	8d 85 b4 fe ff ff    	lea    -0x14c(%ebp),%eax
 841ed04:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ed08:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841ed0f:	00 
 841ed10:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ed13:	89 04 24             	mov    %eax,(%esp)
 841ed16:	e8 11 7c cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841ed1b:	83 f0 01             	xor    $0x1,%eax
 841ed1e:	84 c0                	test   %al,%al
 841ed20:	74 0a                	je     841ed2c <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xee2>
 841ed22:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ed27:	e9 3c 03 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841ed2c:	8d 85 d4 fe ff ff    	lea    -0x12c(%ebp),%eax
 841ed32:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ed36:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841ed3d:	00 
 841ed3e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ed41:	89 04 24             	mov    %eax,(%esp)
 841ed44:	e8 a9 35 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841ed49:	83 f0 01             	xor    $0x1,%eax
 841ed4c:	84 c0                	test   %al,%al
 841ed4e:	74 0a                	je     841ed5a <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xf10>
 841ed50:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ed55:	e9 0e 03 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841ed5a:	8d 85 d8 fe ff ff    	lea    -0x128(%ebp),%eax
 841ed60:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ed64:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841ed6b:	00 
 841ed6c:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ed6f:	89 04 24             	mov    %eax,(%esp)
 841ed72:	e8 7b 35 cc ff       	call   80e22f2 <_ZN5MySQL8get_uintEiRj>
 841ed77:	83 f0 01             	xor    $0x1,%eax
 841ed7a:	84 c0                	test   %al,%al
 841ed7c:	74 0a                	je     841ed88 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xf3e>
 841ed7e:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ed83:	e9 e0 02 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841ed88:	c7 44 24 0c 18 00 00 	movl   $0x18,0xc(%esp)
 841ed8f:	00 
 841ed90:	8d 85 bb fe ff ff    	lea    -0x145(%ebp),%eax
 841ed96:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ed9a:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 841eda1:	00 
 841eda2:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841eda5:	89 04 24             	mov    %eax,(%esp)
 841eda8:	e8 3d e0 cc ff       	call   80ecdea <_ZN5MySQL7get_strEiPci>
 841edad:	83 f0 01             	xor    $0x1,%eax
 841edb0:	84 c0                	test   %al,%al
 841edb2:	74 0a                	je     841edbe <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xf74>
 841edb4:	bb 00 00 00 00       	mov    $0x0,%ebx
 841edb9:	e9 aa 02 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841edbe:	8d 85 96 fe ff ff    	lea    -0x16a(%ebp),%eax
 841edc4:	89 04 24             	mov    %eax,(%esp)
 841edc7:	e8 1c 19 d3 ff       	call   81506e8 <_ZN20stAvatarEmblemInfo_t4initEv>
 841edcc:	c7 44 24 0c 1e 00 00 	movl   $0x1e,0xc(%esp)
 841edd3:	00 
 841edd4:	8d 85 96 fe ff ff    	lea    -0x16a(%ebp),%eax
 841edda:	89 44 24 08          	mov    %eax,0x8(%esp)
 841edde:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 841ede5:	00 
 841ede6:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ede9:	89 04 24             	mov    %eax,(%esp)
 841edec:	e8 29 65 d0 ff       	call   812531a <_ZN5MySQL10get_binaryEiPvi>
 841edf1:	83 f0 01             	xor    $0x1,%eax
 841edf4:	84 c0                	test   %al,%al
 841edf6:	74 0a                	je     841ee02 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xfb8>
 841edf8:	bb 00 00 00 00       	mov    $0x0,%ebx
 841edfd:	e9 66 02 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841ee02:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841ee05:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 841ee0b:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841ee0e:	6b d2 47             	imul   $0x47,%edx,%edx
 841ee11:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841ee14:	81 c2 a0 07 00 00    	add    $0x7a0,%edx
 841ee1a:	89 42 08             	mov    %eax,0x8(%edx)
 841ee1d:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841ee20:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 841ee26:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841ee29:	6b d2 47             	imul   $0x47,%edx,%edx
 841ee2c:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841ee2f:	81 c2 a0 07 00 00    	add    $0x7a0,%edx
 841ee35:	89 42 04             	mov    %eax,0x4(%edx)
 841ee38:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 841ee3b:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 841ee41:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 841ee44:	6b d2 47             	imul   $0x47,%edx,%edx
 841ee47:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 841ee4a:	81 c2 a0 07 00 00    	add    $0x7a0,%edx
 841ee50:	89 42 0c             	mov    %eax,0xc(%edx)
 841ee53:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841ee56:	6b c0 47             	imul   $0x47,%eax,%eax
 841ee59:	05 a0 07 00 00       	add    $0x7a0,%eax
 841ee5e:	03 45 c4             	add    -0x3c(%ebp),%eax
 841ee61:	8d 50 10             	lea    0x10(%eax),%edx
 841ee64:	c7 44 24 08 18 00 00 	movl   $0x18,0x8(%esp)
 841ee6b:	00 
 841ee6c:	8d 85 bb fe ff ff    	lea    -0x145(%ebp),%eax
 841ee72:	89 44 24 04          	mov    %eax,0x4(%esp)
 841ee76:	89 14 24             	mov    %edx,(%esp)
 841ee79:	e8 52 ea c5 ff       	call   807d8d0 <strncpy@plt>
 841ee7e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841ee81:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841ee84:	6b c0 47             	imul   $0x47,%eax,%eax
 841ee87:	8d 04 02             	lea    (%edx,%eax,1),%eax
 841ee8a:	05 c0 07 00 00       	add    $0x7c0,%eax
 841ee8f:	8b 95 96 fe ff ff    	mov    -0x16a(%ebp),%edx
 841ee95:	89 50 09             	mov    %edx,0x9(%eax)
 841ee98:	8b 95 9a fe ff ff    	mov    -0x166(%ebp),%edx
 841ee9e:	89 50 0d             	mov    %edx,0xd(%eax)
 841eea1:	8b 95 9e fe ff ff    	mov    -0x162(%ebp),%edx
 841eea7:	89 50 11             	mov    %edx,0x11(%eax)
 841eeaa:	8b 95 a2 fe ff ff    	mov    -0x15e(%ebp),%edx
 841eeb0:	89 50 15             	mov    %edx,0x15(%eax)
 841eeb3:	8b 95 a6 fe ff ff    	mov    -0x15a(%ebp),%edx
 841eeb9:	89 50 19             	mov    %edx,0x19(%eax)
 841eebc:	8b 95 aa fe ff ff    	mov    -0x156(%ebp),%edx
 841eec2:	89 50 1d             	mov    %edx,0x1d(%eax)
 841eec5:	8b 95 ae fe ff ff    	mov    -0x152(%ebp),%edx
 841eecb:	89 50 21             	mov    %edx,0x21(%eax)
 841eece:	0f b7 95 b2 fe ff ff 	movzwl -0x14e(%ebp),%edx
 841eed5:	66 89 50 25          	mov    %dx,0x25(%eax)
 841eed9:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 841eedd:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841eee0:	89 04 24             	mov    %eax,(%esp)
 841eee3:	e8 84 34 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841eee8:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 841eeeb:	0f 97 c0             	seta   %al
 841eeee:	84 c0                	test   %al,%al
 841eef0:	0f 85 ec fd ff ff    	jne    841ece2 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0xe98>
 841eef6:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841eef9:	c7 80 30 0d 00 00 00 	movl   $0x0,0xd30(%eax)
 841ef00:	00 00 00 
 841ef03:	8b 85 ec fd ff ff    	mov    -0x214(%ebp),%eax
 841ef09:	85 c0                	test   %eax,%eax
 841ef0b:	74 3d                	je     841ef4a <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x1100>
 841ef0d:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841ef10:	8b 00                	mov    (%eax),%eax
 841ef12:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841ef15:	89 54 24 10          	mov    %edx,0x10(%esp)
 841ef19:	8d 95 ec fd ff ff    	lea    -0x214(%ebp),%edx
 841ef1f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 841ef23:	89 44 24 08          	mov    %eax,0x8(%esp)
 841ef27:	8b 45 c8             	mov    -0x38(%ebp),%eax
 841ef2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 841ef2e:	8b 45 08             	mov    0x8(%ebp),%eax
 841ef31:	89 04 24             	mov    %eax,(%esp)
 841ef34:	e8 4b ed ff ff       	call   841dc84 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST>
 841ef39:	83 f0 01             	xor    $0x1,%eax
 841ef3c:	84 c0                	test   %al,%al
 841ef3e:	74 0a                	je     841ef4a <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x1100>
 841ef40:	bb 00 00 00 00       	mov    $0x0,%ebx
 841ef45:	e9 1e 01 00 00       	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841ef4a:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841ef4d:	8b 10                	mov    (%eax),%edx
 841ef4f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ef52:	89 90 32 33 00 00    	mov    %edx,0x3332(%eax)
 841ef58:	8b 45 c0             	mov    -0x40(%ebp),%eax
 841ef5b:	8b 50 10             	mov    0x10(%eax),%edx
 841ef5e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 841ef61:	89 90 36 33 00 00    	mov    %edx,0x3336(%eax)
 841ef67:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 841ef6c:	c7 44 24 08 92 54 00 	movl   $0x5492,0x8(%esp)
 841ef73:	00 
 841ef74:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 841ef7b:	08 
 841ef7c:	89 04 24             	mov    %eax,(%esp)
 841ef7f:	e8 02 0b e7 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 841ef84:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 841ef8b:	00 
 841ef8c:	89 44 24 04          	mov    %eax,0x4(%esp)
 841ef90:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841ef96:	89 04 24             	mov    %eax,(%esp)
 841ef99:	e8 88 9c ca ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 841ef9e:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841efa4:	89 04 24             	mov    %eax,(%esp)
 841efa7:	e8 9a 9c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841efac:	c7 44 24 04 7f 00 00 	movl   $0x7f,0x4(%esp)
 841efb3:	00 
 841efb4:	89 04 24             	mov    %eax,(%esp)
 841efb7:	e8 9a 9c ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841efbc:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841efc2:	89 04 24             	mov    %eax,(%esp)
 841efc5:	e8 7c 9c ca ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 841efca:	8b 55 10             	mov    0x10(%ebp),%edx
 841efcd:	89 54 24 04          	mov    %edx,0x4(%esp)
 841efd1:	89 04 24             	mov    %eax,(%esp)
 841efd4:	e8 7d 9c ca ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 841efd9:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841efdf:	89 04 24             	mov    %eax,(%esp)
 841efe2:	e8 67 9c ca ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 841efe7:	c7 44 24 08 8a 33 00 	movl   $0x338a,0x8(%esp)
 841efee:	00 
 841efef:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 841eff2:	89 54 24 04          	mov    %edx,0x4(%esp)
 841eff6:	89 04 24             	mov    %eax,(%esp)
 841eff9:	e8 54 f6 cb ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 841effe:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 841f003:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 841f009:	89 54 24 08          	mov    %edx,0x8(%esp)
 841f00d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841f014:	00 
 841f015:	89 04 24             	mov    %eax,(%esp)
 841f018:	e8 c1 1f 15 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 841f01d:	bb 01 00 00 00       	mov    $0x1,%ebx
 841f022:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841f028:	89 04 24             	mov    %eax,(%esp)
 841f02b:	e8 a2 d8 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841f030:	eb 36                	jmp    841f068 <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x121e>
 841f032:	89 d3                	mov    %edx,%ebx
 841f034:	89 c6                	mov    %eax,%esi
 841f036:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 841f03c:	89 04 24             	mov    %eax,(%esp)
 841f03f:	e8 8e d8 1f 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 841f044:	89 f0                	mov    %esi,%eax
 841f046:	89 da                	mov    %ebx,%edx
 841f048:	eb 00                	jmp    841f04a <_ZN19DB_MailBox_Req_List8dispatchEiiP6Stream+0x1200>
 841f04a:	89 d3                	mov    %edx,%ebx
 841f04c:	89 c6                	mov    %eax,%esi
 841f04e:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841f054:	89 04 24             	mov    %eax,(%esp)
 841f057:	e8 60 e4 02 00       	call   844d4bc <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEED1Ev>
 841f05c:	89 f0                	mov    %esi,%eax
 841f05e:	89 da                	mov    %ebx,%edx
 841f060:	89 04 24             	mov    %eax,(%esp)
 841f063:	e8 e8 46 6c 00       	call   8ae3750 <_Unwind_Resume>
 841f068:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 841f06e:	89 04 24             	mov    %eax,(%esp)
 841f071:	e8 46 e4 02 00       	call   844d4bc <_ZNSt3mapIjiSt4lessIjESaISt4pairIKjiEEED1Ev>
 841f076:	89 d8                	mov    %ebx,%eax
 841f078:	8d 65 f4             	lea    -0xc(%ebp),%esp
 841f07b:	83 c4 00             	add    $0x0,%esp
 841f07e:	5b                   	pop    %ebx
 841f07f:	5e                   	pop    %esi
 841f080:	5f                   	pop    %edi
 841f081:	5d                   	pop    %ebp
 841f082:	c3                   	ret
 841f083:	90                   	nop

```

```c
// DB_MailBox_Req_List::dispatch @ 0x841de4a

/* DB_MailBox_Req_List::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_MailBox_Req_List::dispatch(DB_MailBox_Req_List *this,int param_1,int param_2,Stream *param_3)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  size_t *psVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 uVar7;
  Stream *pSVar8;
  CStreamGuard *pCVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  byte bVar15;
  SIG_MAILBOX_LIST local_4622 [13194];
  char local_1298 [4096];
  char local_298 [128];
  uint local_218 [21];
  uint local_1c4 [21];
  undefined4 local_16e;
  undefined4 local_16a;
  undefined4 local_166;
  undefined4 local_162;
  undefined4 local_15e;
  undefined4 local_15a;
  undefined4 local_156;
  undefined2 local_152;
  int local_150;
  char local_149;
  char local_148 [24];
  uint local_130;
  uint local_12c;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_128 [4];
  _Rb_tree_iterator<std::pair<unsigned_int_const,int>> local_124 [4];
  uint local_120;
  SIG_MAILBOX_LIST local_11c;
  SIG_MAILBOX_LIST local_11b;
  undefined4 local_11a;
  undefined4 local_116;
  undefined2 local_112;
  ulong local_110;
  uint local_10c;
  undefined4 local_106;
  undefined4 local_102;
  undefined4 local_fe;
  undefined2 local_fa;
  int local_f8 [2];
  char local_f0 [29];
  SIG_MAILBOX_LIST local_d3;
  short local_d2;
  short local_d0;
  short local_ce;
  short local_cc;
  short local_ca;
  ulong local_c8;
  int local_c4;
  uint local_c0;
  int local_bc;
  int local_b8;
  size_t local_b4;
  CStreamGuard local_b0 [8];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_a8 [24];
  pair local_90 [8];
  pair<unsigned_int_const,int> local_88 [8];
  uint local_80 [2];
  undefined4 local_78;
  int local_74;
  uint local_70;
  pair local_6c [8];
  pair<unsigned_int_const,int> local_64 [8];
  uint local_5c [2];
  undefined4 local_54;
  size_t local_50;
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_4c [4];
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
  local_48 [4];
  SIG_MAILBOX_LIST *local_44;
  SIG_MAILBOX_LIST *local_40;
  MySQL *local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  
  bVar15 = 0;
  pSVar8 = param_3;
  cVar2 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_44 = Stream::GetOutBuffer<SIG_MAILBOX_LIST>(param_3);
  local_40 = local_4622;
  memset(local_40,0,0x338a);
  local_3c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0,pSVar8);
  if (*(uint *)(local_44 + 4) == 0) {
    MySQL::set_query(local_3c,
                     "upDate postal set delete_flag=%d where receive_charac_no=%d and unlimit_flag=0 and occ_time<subdate(now(),interval %d day) and delete_flag=0"
                     ,2,*(uint *)local_44,0xf);
    cVar2 = MySQL::exec(local_3c,true);
    if (cVar2 != '\x01') {
      return 0;
    }
  }
  pcVar6 = local_298;
  for (iVar10 = 0x20; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    pcVar6 = pcVar6 + ((uint)bVar15 * -2 + 1) * 4;
  }
  if (*(uint *)(local_44 + 4) != 0) {
    sprintf(local_298," and postal_id > %d",*(uint *)(local_44 + 4));
  }
  MySQL::set_query(local_3c,
                   "seLect postal_id,unix_timestamp(occ_time),send_charac_no,seal_flag,item_id,add_info,endurance,upgrade,gold,send_charac_name,unlimit_flag,avata_flag,creature_flag,letter_id,extend_info,item_guid,amplify_option,amplify_value,random_option,seperate_upgrade,type from postal where receive_charac_no=%d and delete_flag=0 %s and (unlimit_flag=1 or occ_time>subdate(now(),interval 15 day)) order by postal_id limit %d"
                   ,*(uint *)local_44,local_298,0x14);
  cVar2 = MySQL::exec(local_3c,true);
  if (cVar2 != '\x01') {
    return 0;
  }
  local_38 = 0;
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  map(local_a8);
  for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1) {
    if (*(int *)(local_44 + (local_38 + 4) * 4 + 4) != 0) {
      local_78 = 0;
                    /* try { // try from 0841e01b to 0841ef83 has its CatchHandler @ 0841f04a */
      std::make_pair<unsigned_int&,int>(local_80,(int *)(local_44 + (local_38 + 4) * 4 + 4));
      std::pair<unsigned_int_const,int>::pair<unsigned_int,int>(local_88,(pair *)local_80);
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::insert(local_90);
    }
  }
  *(uint *)(local_40 + 0x3326) = *(uint *)(local_44 + 8);
  *(undefined4 *)(local_40 + 0x79c) = 0;
  local_74 = MySQL::get_n_rows(local_3c);
  local_70 = *(uint *)(local_44 + 8);
  piVar3 = std::min<int>((int *)&local_70,&local_74);
  *(int *)(local_40 + 0x794) = *piVar3;
  *(undefined4 *)(local_40 + 0x798) = 0;
  if ((int)*(uint *)(local_44 + 8) <= *(int *)(local_40 + 0x794)) {
    iVar10 = MySQL::get_n_rows(local_3c);
    *(int *)(local_40 + 0x798) = iVar10 - *(int *)(local_40 + 0x794);
  }
  puVar13 = local_1c4;
  for (iVar10 = 0x15; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
  }
  puVar13 = local_218;
  for (iVar10 = 0x15; iVar10 != 0; iVar10 = iVar10 + -1) {
    *puVar13 = 0;
    puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
  }
  local_34 = 0;
  local_2c = 0;
  while( true ) {
    if ((local_2c < *(int *)(local_40 + 0x794)) && (local_2c < 0x14)) {
      bVar14 = true;
    }
    else {
      bVar14 = false;
    }
    if (!bVar14) {
      *(int *)(local_40 + 0x794) = local_34;
      *(undefined4 *)(local_40 + 0x332e) = 0;
      local_24 = 0;
      goto LAB_0841ea0f;
    }
    cVar2 = MySQL::fetch(local_3c);
    if (cVar2 != '\x01') break;
    local_f8[1] = 0;
    local_f8[0] = 0;
    RandomOption::reset((RandomOption *)&local_106);
    cVar2 = MySQL::get_int(local_3c,0,(int *)&local_b4);
    if ((((((cVar2 == '\x01') && (cVar2 = MySQL::get_int(local_3c,1,&local_b8), cVar2 == '\x01')) &&
          (cVar2 = MySQL::get_int(local_3c,2,&local_bc), cVar2 == '\x01')) &&
         ((cVar2 = MySQL::get_short(local_3c,3,&local_d0), cVar2 == '\x01' &&
          (cVar2 = MySQL::get_ulong(local_3c,4,&local_c8), cVar2 == '\x01')))) &&
        (((cVar2 = MySQL::get_int(local_3c,5,(int *)&local_c0), cVar2 == '\x01' &&
          ((cVar2 = MySQL::get_short(local_3c,6,&local_ca), cVar2 == '\x01' &&
           (cVar2 = MySQL::get_byte(local_3c,7,(char *)&local_d3), cVar2 == '\x01')))) &&
         (cVar2 = MySQL::get_int(local_3c,8,&local_c4), cVar2 == '\x01')))) &&
       ((((cVar2 = MySQL::get_str(local_3c,9,local_f0,0x1d), cVar2 == '\x01' &&
          (cVar2 = MySQL::get_short(local_3c,10,&local_cc), cVar2 == '\x01')) &&
         (cVar2 = MySQL::get_short(local_3c,0xb,&local_ce), cVar2 == '\x01')) &&
        ((cVar2 = MySQL::get_short(local_3c,0xc,&local_d2), cVar2 == '\x01' &&
         ((local_ce != 1 || (local_d2 != 1)))))))) {
      local_28 = 0xe;
      cVar2 = MySQL::get_uint(local_3c,0xd,&local_10c);
      iVar10 = local_28;
      if ((cVar2 == '\x01') && ((local_c8 != 0 || (local_c4 != 0)))) {
        local_110 = 0;
        local_28 = local_28 + 1;
        cVar2 = MySQL::get_ulong(local_3c,iVar10,&local_110);
        iVar10 = local_28;
        if (cVar2 == '\x01') {
          local_28 = local_28 + 1;
          cVar2 = MySQL::get_binary(local_3c,iVar10,&local_11a,10);
          iVar10 = local_28;
          if (cVar2 == '\x01') {
            local_28 = local_28 + 1;
            cVar2 = MySQL::get_byte(local_3c,iVar10,local_f8 + 1);
            iVar10 = local_28;
            if (cVar2 == '\x01') {
              local_28 = local_28 + 1;
              cVar2 = MySQL::get_short(local_3c,iVar10,local_f8);
              iVar10 = local_28;
              if (cVar2 == '\x01') {
                local_28 = local_28 + 1;
                cVar2 = MySQL::get_binary(local_3c,iVar10,&local_106,0xe);
                iVar10 = local_28;
                if (cVar2 == '\x01') {
                  local_11b = (SIG_MAILBOX_LIST)0x0;
                  local_28 = local_28 + 1;
                  cVar2 = MySQL::get_byte(local_3c,iVar10,(char *)&local_11b);
                  iVar10 = local_28;
                  if (cVar2 == '\x01') {
                    local_11c = (SIG_MAILBOX_LIST)0x0;
                    local_28 = local_28 + 1;
                    cVar2 = MySQL::get_byte(local_3c,iVar10,(char *)&local_11c);
                    if (cVar2 == '\x01') {
                      if (local_10c != 0) {
                        local_54 = 0;
                        std::make_pair<unsigned_int&,int>(local_5c,(int *)&local_10c);
                        std::pair<unsigned_int_const,int>::pair<unsigned_int,int>
                                  (local_64,(pair *)local_5c);
                        std::
                        map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
                        ::insert(local_6c);
                      }
                      *(size_t *)(local_40 + local_34 * 0x61) = local_b4;
                      *(int *)(local_40 + local_34 * 0x61 + 0x55) = local_b8 + 0x13c680;
                      *(int *)(local_40 + local_34 * 0x61 + 4) = local_bc;
                      local_40[local_34 * 0x61 + 0x29] = (SIG_MAILBOX_LIST)(local_d0 == 1);
                      *(ulong *)(local_40 + local_34 * 0x61 + 0x2a) = local_c8;
                      *(uint *)(local_40 + local_34 * 0x61 + 0x2e) = local_c0;
                      *(short *)(local_40 + local_34 * 0x61 + 0x33) = local_ca;
                      local_40[local_34 * 0x61 + 0x32] = local_d3;
                      *(ulong *)(local_40 + local_34 * 0x61 + 0x35) = local_110;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x39) = local_11a;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x3d) = local_116;
                      *(undefined2 *)(local_40 + local_34 * 0x61 + 0x41) = local_112;
                      *(int *)(local_40 + local_34 * 0x61 + 0x25) = local_c4;
                      local_40[local_34 * 0x61 + 0x5b] = (SIG_MAILBOX_LIST)(local_cc == 1);
                      if (local_ce == 1) {
                        local_40[local_34 * 0x61 + 0x59] = (SIG_MAILBOX_LIST)0x1;
                        local_1c4[0] = local_1c4[0] + 1;
                        local_1c4[local_1c4[0]] = local_c0;
                      }
                      else {
                        local_40[local_34 * 0x61 + 0x59] = (SIG_MAILBOX_LIST)0x0;
                      }
                      if (local_d2 == 1) {
                        local_40[local_34 * 0x61 + 0x5a] = (SIG_MAILBOX_LIST)0x1;
                        local_218[0] = local_218[0] + 1;
                        local_218[local_218[0]] = local_c0;
                      }
                      else {
                        local_40[local_34 * 0x61 + 0x5a] = (SIG_MAILBOX_LIST)0x0;
                      }
                      *(uint *)(local_40 + local_34 * 0x61 + 0x5c) = local_10c;
                      local_40[local_34 * 0x61 + 0x43] = SUB41(local_f8[1],0);
                      *(short *)(local_40 + local_34 * 0x61 + 0x44) = (short)local_f8[0];
                      local_40[local_34 * 0x61 + 0x60] = local_11c;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x46) = local_106;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x4a) = local_102;
                      *(undefined4 *)(local_40 + local_34 * 0x61 + 0x4e) = local_fe;
                      *(undefined2 *)(local_40 + local_34 * 0x61 + 0x52) = local_fa;
                      local_40[local_34 * 0x61 + 0x54] = local_11b;
                      strncpy((char *)(local_40 + local_34 * 0x61 + 8),local_f0,0x1d);
                      local_50 = local_b4;
                      psVar4 = std::max<size_t>((size_t *)(local_40 + 0x79c),&local_50);
                      *(size_t *)(local_40 + 0x79c) = *psVar4;
                      local_34 = local_34 + 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    local_2c = local_2c + 1;
  }
  uVar7 = 0;
  goto LAB_0841f068;
LAB_0841ea0f:
  if (*(int *)(local_40 + 0x798) <= local_24) goto code_r0x0841ea26;
  cVar2 = MySQL::fetch(local_3c);
  if (cVar2 != '\x01') {
    uVar7 = 0;
    goto LAB_0841f068;
  }
  cVar2 = MySQL::get_uint(local_3c,0xd,&local_120);
  if ((cVar2 == '\x01') && (local_120 != 0)) {
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::find((uint *)local_124);
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::end(local_4c);
    cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                      (local_124,(_Rb_tree_iterator *)local_4c);
    if (cVar2 != '\0') {
      iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->(local_124);
      *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + 1;
    }
    *(int *)(local_40 + 0x332e) = *(int *)(local_40 + 0x332e) + 1;
  }
  local_24 = local_24 + 1;
  goto LAB_0841ea0f;
code_r0x0841ea26:
  cVar2 = std::
          map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
          ::empty(local_a8);
  if (cVar2 != '\x01') {
    local_38 = 0;
    std::
    map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
    ::begin(local_128);
    while( true ) {
      std::
      map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>
      ::end(local_48);
      cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128,
                         (_Rb_tree_iterator *)local_48);
      if (cVar2 == '\0') break;
      iVar10 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                         ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128);
      uVar11 = local_38;
      if ((*(int *)(iVar10 + 4) < 1) || (0x13 < local_38)) {
        bVar14 = false;
      }
      else {
        bVar14 = true;
      }
      if (bVar14) {
        puVar5 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator->
                           ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128);
        *(undefined4 *)(local_40 + (uVar11 + 0xccc) * 4 + 10) = *puVar5;
        local_38 = local_38 + 1;
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,int>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,int>> *)local_128);
    }
  }
  local_30 = *(int *)(local_40 + 0x794);
  *(uint *)(local_40 + 0x1018) = *(uint *)(local_44 + 8);
  cVar2 = SelectLetter(this,local_3c,param_2,*(uint *)local_44,*(uint *)(local_44 + 0xc),local_40);
  if (cVar2 != '\x01') {
    LogManager::logFormat
              (1,"DBThread.cpp","virtual bool DB_MailBox_Req_List::dispatch(int, int, Stream*)",
               0x5438,"SelectLetter() error");
    *(undefined4 *)(local_40 + 0x1018) = 0;
  }
  if (*(int *)(local_40 + 0x794) == local_30) {
    if (*(int *)(local_40 + 0x794) == 0) {
      *(uint *)(local_40 + 0x79c) = *(uint *)(local_44 + 4);
    }
  }
  else {
    DoChangeMailList(local_40,local_1c4,*(uint *)(local_44 + 4));
  }
  *(undefined4 *)(local_40 + 0x7a0) = 0;
  if (local_1c4[0] != 0) {
    pcVar6 = local_1298;
    for (iVar10 = 0x400; iVar10 != 0; iVar10 = iVar10 + -1) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6[2] = '\0';
      pcVar6[3] = '\0';
      pcVar6 = pcVar6 + ((uint)bVar15 * -2 + 1) * 4;
    }
    pcVar6 = &local_149;
    uVar11 = 0x19;
    bVar14 = ((uint)pcVar6 & 1) != 0;
    if (bVar14) {
      local_149 = '\0';
      pcVar6 = local_148;
      uVar11 = 0x18;
    }
    if (((uint)pcVar6 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
      uVar11 = uVar11 - 2;
    }
    uVar12 = 0;
    do {
      pcVar1 = pcVar6 + uVar12;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar12 = uVar12 + 4;
    } while (uVar12 < (uVar11 & 0xfffffffc));
    pcVar6 = pcVar6 + uVar12;
    if ((uVar11 & 2) != 0) {
      pcVar6[0] = '\0';
      pcVar6[1] = '\0';
      pcVar6 = pcVar6 + 2;
    }
    if (!bVar14) {
      *pcVar6 = '\0';
    }
    local_150 = 0;
    getList2inQuery(local_1c4,local_1298);
    MySQL::set_query(local_3c,
                     "seLect ui_id,unix_timestamp(reg_date),unix_timestamp(expire_date),ipg_agency_no,jewel_socket from user_items where charac_no=%d and ui_id %s"
                     ,*(uint *)local_44,local_1298);
    MySQL::exec(local_3c,true);
    uVar7 = MySQL::get_n_rows(local_3c);
    *(undefined4 *)(local_40 + 0x7a0) = uVar7;
    local_20 = 0;
    while (uVar11 = MySQL::get_n_rows(local_3c), local_20 < uVar11) {
      cVar2 = MySQL::fetch(local_3c);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_int(local_3c,0,&local_150);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_uint(local_3c,1,&local_130);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_uint(local_3c,2,&local_12c);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      cVar2 = MySQL::get_str(local_3c,3,&local_149,0x18);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      stAvatarEmblemInfo_t::init((stAvatarEmblemInfo_t *)&local_16e);
      cVar2 = MySQL::get_binary(local_3c,4,&local_16e,0x1e);
      if (cVar2 != '\x01') {
        uVar7 = 0;
        goto LAB_0841f068;
      }
      *(uint *)(local_40 + local_20 * 0x47 + 0x7a8) = local_12c;
      *(int *)(local_40 + local_20 * 0x47 + 0x7a4) = local_150;
      *(uint *)(local_40 + local_20 * 0x47 + 0x7ac) = local_130;
      strncpy((char *)(local_40 + local_20 * 0x47 + 0x7b0),&local_149,0x18);
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7c9) = local_16e;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7cd) = local_16a;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7d1) = local_166;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7d5) = local_162;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7d9) = local_15e;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7dd) = local_15a;
      *(undefined4 *)(local_40 + local_20 * 0x47 + 0x7e1) = local_156;
      *(undefined2 *)(local_40 + local_20 * 0x47 + 0x7e5) = local_152;
      local_20 = local_20 + 1;
    }
  }
  *(undefined4 *)(local_40 + 0xd30) = 0;
  if ((local_218[0] == 0) ||
     (cVar2 = setCreatureData(this,local_3c,*(uint *)local_44,local_218,local_40), cVar2 == '\x01'))
  {
    *(uint *)(local_40 + 0x3332) = *(uint *)local_44;
    *(uint *)(local_40 + 0x3336) = *(uint *)(local_44 + 0x10);
    pSVar8 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0x5492);
    CStreamGuard::CStreamGuard(local_b0,pSVar8,true);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
                    /* try { // try from 0841efb7 to 0841f01c has its CatchHandler @ 0841f032 */
    CStreamGuard::operator<<(pCVar9,0x7f);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
    CStreamGuard::operator<<(pCVar9,param_2);
    pCVar9 = (CStreamGuard *)CStreamGuard::operator->(local_b0);
    CStreamGuard::put_binary(pCVar9,local_40,0x338a);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b0);
    uVar7 = 1;
                    /* try { // try from 0841f02b to 0841f02f has its CatchHandler @ 0841f04a */
    CStreamGuard::~CStreamGuard(local_b0);
  }
  else {
    uVar7 = 0;
  }
LAB_0841f068:
  std::
  map<unsigned_int,int,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,int>>>::
  ~map(local_a8);
  return uVar7;
}

```

---

## setCreatureData

```asm
// === 0841dc84 DB_MailBox_Req_List::setCreatureData  [0x0841dc84-0x841de49] ===
 841dc84:	55                   	push   %ebp
 841dc85:	89 e5                	mov    %esp,%ebp
 841dc87:	57                   	push   %edi
 841dc88:	53                   	push   %ebx
 841dc89:	81 ec 20 10 00 00    	sub    $0x1020,%esp
 841dc8f:	8d 9d e8 ef ff ff    	lea    -0x1018(%ebp),%ebx
 841dc95:	b8 00 00 00 00       	mov    $0x0,%eax
 841dc9a:	ba 00 04 00 00       	mov    $0x400,%edx
 841dc9f:	89 df                	mov    %ebx,%edi
 841dca1:	89 d1                	mov    %edx,%ecx
 841dca3:	f3 ab                	rep stos %eax,%es:(%edi)
 841dca5:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 841dcac:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 841dcb3:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 841dcba:	8d 85 e8 ef ff ff    	lea    -0x1018(%ebp),%eax
 841dcc0:	89 44 24 04          	mov    %eax,0x4(%esp)
 841dcc4:	8b 45 14             	mov    0x14(%ebp),%eax
 841dcc7:	89 04 24             	mov    %eax,(%esp)
 841dcca:	e8 99 1c fe ff       	call   83ff968 <_Z15getList2inQueryPjPc>
 841dccf:	8d 85 e8 ef ff ff    	lea    -0x1018(%ebp),%eax
 841dcd5:	89 44 24 08          	mov    %eax,0x8(%esp)
 841dcd9:	c7 44 24 04 38 be c4 	movl   $0x8c4be38,0x4(%esp)
 841dce0:	08 
 841dce1:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dce4:	89 04 24             	mov    %eax,(%esp)
 841dce7:	e8 d4 64 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 841dcec:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841dcf3:	00 
 841dcf4:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dcf7:	89 04 24             	mov    %eax,(%esp)
 841dcfa:	e8 27 66 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 841dcff:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dd02:	89 04 24             	mov    %eax,(%esp)
 841dd05:	e8 62 46 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841dd0a:	89 c2                	mov    %eax,%edx
 841dd0c:	8b 45 18             	mov    0x18(%ebp),%eax
 841dd0f:	89 90 30 0d 00 00    	mov    %edx,0xd30(%eax)
 841dd15:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 841dd1c:	e9 01 01 00 00       	jmp    841de22 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x19e>
 841dd21:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dd24:	89 04 24             	mov    %eax,(%esp)
 841dd27:	e8 90 67 fd ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 841dd2c:	83 f0 01             	xor    $0x1,%eax
 841dd2f:	84 c0                	test   %al,%al
 841dd31:	74 0a                	je     841dd3d <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0xb9>
 841dd33:	b8 00 00 00 00       	mov    $0x0,%eax
 841dd38:	e9 03 01 00 00       	jmp    841de40 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x1bc>
 841dd3d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 841dd40:	89 44 24 08          	mov    %eax,0x8(%esp)
 841dd44:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841dd4b:	00 
 841dd4c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dd4f:	89 04 24             	mov    %eax,(%esp)
 841dd52:	e8 d5 8b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841dd57:	83 f0 01             	xor    $0x1,%eax
 841dd5a:	84 c0                	test   %al,%al
 841dd5c:	74 0a                	je     841dd68 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0xe4>
 841dd5e:	b8 00 00 00 00       	mov    $0x0,%eax
 841dd63:	e9 d8 00 00 00       	jmp    841de40 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x1bc>
 841dd68:	8d 45 f0             	lea    -0x10(%ebp),%eax
 841dd6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 841dd6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 841dd76:	00 
 841dd77:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dd7a:	89 04 24             	mov    %eax,(%esp)
 841dd7d:	e8 aa 8b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841dd82:	83 f0 01             	xor    $0x1,%eax
 841dd85:	84 c0                	test   %al,%al
 841dd87:	74 0a                	je     841dd93 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x10f>
 841dd89:	b8 00 00 00 00       	mov    $0x0,%eax
 841dd8e:	e9 ad 00 00 00       	jmp    841de40 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x1bc>
 841dd93:	8d 45 ec             	lea    -0x14(%ebp),%eax
 841dd96:	89 44 24 08          	mov    %eax,0x8(%esp)
 841dd9a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 841dda1:	00 
 841dda2:	8b 45 0c             	mov    0xc(%ebp),%eax
 841dda5:	89 04 24             	mov    %eax,(%esp)
 841dda8:	e8 7f 8b cf ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 841ddad:	83 f0 01             	xor    $0x1,%eax
 841ddb0:	84 c0                	test   %al,%al
 841ddb2:	74 0a                	je     841ddbe <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x13a>
 841ddb4:	b8 00 00 00 00       	mov    $0x0,%eax
 841ddb9:	e9 82 00 00 00       	jmp    841de40 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x1bc>
 841ddbe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 841ddc1:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 841ddc4:	8b 5d 18             	mov    0x18(%ebp),%ebx
 841ddc7:	89 d0                	mov    %edx,%eax
 841ddc9:	c1 e0 03             	shl    $0x3,%eax
 841ddcc:	01 d0                	add    %edx,%eax
 841ddce:	c1 e0 02             	shl    $0x2,%eax
 841ddd1:	01 d0                	add    %edx,%eax
 841ddd3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 841ddd6:	05 30 0d 00 00       	add    $0xd30,%eax
 841dddb:	89 48 04             	mov    %ecx,0x4(%eax)
 841ddde:	8b 55 f4             	mov    -0xc(%ebp),%edx
 841dde1:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 841dde4:	8b 5d 18             	mov    0x18(%ebp),%ebx
 841dde7:	89 d0                	mov    %edx,%eax
 841dde9:	c1 e0 03             	shl    $0x3,%eax
 841ddec:	01 d0                	add    %edx,%eax
 841ddee:	c1 e0 02             	shl    $0x2,%eax
 841ddf1:	01 d0                	add    %edx,%eax
 841ddf3:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 841ddf6:	05 30 0d 00 00       	add    $0xd30,%eax
 841ddfb:	89 48 08             	mov    %ecx,0x8(%eax)
 841ddfe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 841de01:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 841de04:	8b 5d 18             	mov    0x18(%ebp),%ebx
 841de07:	89 d0                	mov    %edx,%eax
 841de09:	c1 e0 03             	shl    $0x3,%eax
 841de0c:	01 d0                	add    %edx,%eax
 841de0e:	c1 e0 02             	shl    $0x2,%eax
 841de11:	01 d0                	add    %edx,%eax
 841de13:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 841de16:	05 30 0d 00 00       	add    $0xd30,%eax
 841de1b:	89 48 0c             	mov    %ecx,0xc(%eax)
 841de1e:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 841de22:	8b 45 0c             	mov    0xc(%ebp),%eax
 841de25:	89 04 24             	mov    %eax,(%esp)
 841de28:	e8 3f 45 cc ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 841de2d:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 841de30:	0f 97 c0             	seta   %al
 841de33:	84 c0                	test   %al,%al
 841de35:	0f 85 e6 fe ff ff    	jne    841dd21 <_ZN19DB_MailBox_Req_List15setCreatureDataEP5MySQLjPjP16SIG_MAILBOX_LIST+0x9d>
 841de3b:	b8 01 00 00 00       	mov    $0x1,%eax
 841de40:	81 c4 20 10 00 00    	add    $0x1020,%esp
 841de46:	5b                   	pop    %ebx
 841de47:	5f                   	pop    %edi
 841de48:	5d                   	pop    %ebp
 841de49:	c3                   	ret

```

```c
// DB_MailBox_Req_List::setCreatureData @ 0x841dc84

/* DB_MailBox_Req_List::setCreatureData(MySQL*, unsigned int, unsigned int*, SIG_MAILBOX_LIST*) */

undefined4 __thiscall
DB_MailBox_Req_List::setCreatureData
          (DB_MailBox_Req_List *this,MySQL *param_1,uint param_2,uint *param_3,
          SIG_MAILBOX_LIST *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  char local_101c [4096];
  int local_1c;
  int local_18;
  int local_14;
  uint local_10;
  
  pcVar5 = local_101c;
  for (iVar4 = 0x400; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + 4;
  }
  local_14 = 0;
  local_18 = 0;
  local_1c = 0;
  getList2inQuery(param_3,local_101c);
  MySQL::set_query(param_1,
                   "seLect ui_id,unix_timestamp(expire_date),unix_timestamp(reg_date) from creature_items where ui_id %s and stat = 1"
                   ,local_101c);
  MySQL::exec(param_1,true);
  uVar2 = MySQL::get_n_rows(param_1);
  *(undefined4 *)(param_4 + 0xd30) = uVar2;
  local_10 = 0;
  while( true ) {
    uVar3 = MySQL::get_n_rows(param_1);
    if (uVar3 <= local_10) {
      return 1;
    }
    cVar1 = MySQL::fetch(param_1);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(param_1,0,&local_1c);
    if (cVar1 != '\x01') {
      return 0;
    }
    cVar1 = MySQL::get_int(param_1,1,&local_14);
    if (cVar1 != '\x01') break;
    cVar1 = MySQL::get_int(param_1,2,&local_18);
    if (cVar1 != '\x01') {
      return 0;
    }
    *(int *)(param_4 + local_10 * 0x25 + 0xd34) = local_1c;
    *(int *)(param_4 + local_10 * 0x25 + 0xd38) = local_14;
    *(int *)(param_4 + local_10 * 0x25 + 0xd3c) = local_18;
    local_10 = local_10 + 1;
  }
  return 0;
}

```

