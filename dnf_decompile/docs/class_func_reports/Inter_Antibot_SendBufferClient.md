# Inter_Antibot_SendBufferClient

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e43bc Inter_Antibot_SendBufferClient::dispatch_sig  [0x084e43bc-0x84e4773] ===
 84e43bc:	55                   	push   %ebp
 84e43bd:	89 e5                	mov    %esp,%ebp
 84e43bf:	56                   	push   %esi
 84e43c0:	53                   	push   %ebx
 84e43c1:	81 ec 70 73 01 00    	sub    $0x17370,%esp
 84e43c7:	8b 45 10             	mov    0x10(%ebp),%eax
 84e43ca:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84e43cd:	c7 44 24 08 18 73 01 	movl   $0x17318,0x8(%esp)
 84e43d4:	00 
 84e43d5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e43dc:	00 
 84e43dd:	8d 85 c4 8c fe ff    	lea    -0x1733c(%ebp),%eax
 84e43e3:	89 04 24             	mov    %eax,(%esp)
 84e43e6:	e8 d5 98 b9 ff       	call   807dcc0 <memset@plt>
 84e43eb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e43ee:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e43f2:	98                   	cwtl
 84e43f3:	8b 55 10             	mov    0x10(%ebp),%edx
 84e43f6:	83 c2 0c             	add    $0xc,%edx
 84e43f9:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e43fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e4401:	8d 85 c4 8c fe ff    	lea    -0x1733c(%ebp),%eax
 84e4407:	89 04 24             	mov    %eax,(%esp)
 84e440a:	e8 91 94 b9 ff       	call   807d8a0 <memcpy@plt>
 84e440f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e4412:	8b 40 04             	mov    0x4(%eax),%eax
 84e4415:	89 04 24             	mov    %eax,(%esp)
 84e4418:	e8 b2 75 fd ff       	call   84bb9cf <_Z7getUserj>
 84e441d:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e4420:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84e4424:	74 0f                	je     84e4435 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x79>
 84e4426:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4429:	89 04 24             	mov    %eax,(%esp)
 84e442c:	e8 5b 5f bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e4431:	85 c0                	test   %eax,%eax
 84e4433:	75 07                	jne    84e443c <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x80>
 84e4435:	b8 01 00 00 00       	mov    $0x1,%eax
 84e443a:	eb 05                	jmp    84e4441 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x85>
 84e443c:	b8 00 00 00 00       	mov    $0x0,%eax
 84e4441:	84 c0                	test   %al,%al
 84e4443:	0f 84 e8 00 00 00    	je     84e4531 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x175>
 84e4449:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e444c:	8b 40 04             	mov    0x4(%eax),%eax
 84e444f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4456:	00 
 84e4457:	89 04 24             	mov    %eax,(%esp)
 84e445a:	e8 ec 4b c2 ff       	call   810904b <_Z14NumberToStringji>
 84e445f:	89 c1                	mov    %eax,%ecx
 84e4461:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84e4465:	75 07                	jne    84e446e <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0xb2>
 84e4467:	ba 01 a0 c8 08       	mov    $0x8c8a001,%edx
 84e446c:	eb 05                	jmp    84e4473 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0xb7>
 84e446e:	ba 0b a0 c8 08       	mov    $0x8c8a00b,%edx
 84e4473:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e4476:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e447a:	0f bf d8             	movswl %ax,%ebx
 84e447d:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e4480:	8b 00                	mov    (%eax),%eax
 84e4482:	85 c0                	test   %eax,%eax
 84e4484:	75 07                	jne    84e448d <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0xd1>
 84e4486:	b8 16 a0 c8 08       	mov    $0x8c8a016,%eax
 84e448b:	eb 05                	jmp    84e4492 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0xd6>
 84e448d:	b8 1e a0 c8 08       	mov    $0x8c8a01e,%eax
 84e4492:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 84e4496:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84e449a:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84e449e:	89 44 24 14          	mov    %eax,0x14(%esp)
 84e44a2:	c7 44 24 10 28 a0 c8 	movl   $0x8c8a028,0x10(%esp)
 84e44a9:	08 
 84e44aa:	c7 44 24 0c 56 5e 00 	movl   $0x5e56,0xc(%esp)
 84e44b1:	00 
 84e44b2:	c7 44 24 08 00 b8 c8 	movl   $0x8c8b800,0x8(%esp)
 84e44b9:	08 
 84e44ba:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84e44c1:	08 
 84e44c2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84e44c9:	e8 3c f7 5e 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84e44ce:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84e44d2:	74 53                	je     84e4527 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x16b>
 84e44d4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e44d7:	0f b6 80 51 d2 08 00 	movzbl 0x8d251(%eax),%eax
 84e44de:	3c 04                	cmp    $0x4,%al
 84e44e0:	77 45                	ja     84e4527 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x16b>
 84e44e2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e44e5:	0f b6 80 51 d2 08 00 	movzbl 0x8d251(%eax),%eax
 84e44ec:	0f b6 d0             	movzbl %al,%edx
 84e44ef:	8d 48 01             	lea    0x1(%eax),%ecx
 84e44f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e44f5:	88 88 51 d2 08 00    	mov    %cl,0x8d251(%eax)
 84e44fb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e44fe:	05 00 97 07 00       	add    $0x79700,%eax
 84e4503:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 84e450a:	00 
 84e450b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84e450f:	c7 44 24 08 52 02 00 	movl   $0x252,0x8(%esp)
 84e4516:	00 
 84e4517:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84e451e:	00 
 84e451f:	89 04 24             	mov    %eax,(%esp)
 84e4522:	e8 cd 28 1a 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 84e4527:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e452c:	e9 37 02 00 00       	jmp    84e4768 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x3ac>
 84e4531:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e4534:	8b 00                	mov    (%eax),%eax
 84e4536:	85 c0                	test   %eax,%eax
 84e4538:	75 09                	jne    84e4543 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x187>
 84e453a:	c7 45 f0 30 02 00 00 	movl   $0x230,-0x10(%ebp)
 84e4541:	eb 07                	jmp    84e454a <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x18e>
 84e4543:	c7 45 f0 31 02 00 00 	movl   $0x231,-0x10(%ebp)
 84e454a:	81 7d f0 30 02 00 00 	cmpl   $0x230,-0x10(%ebp)
 84e4551:	75 7f                	jne    84e45d2 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x216>
 84e4553:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4556:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 84e455c:	83 f8 02             	cmp    $0x2,%eax
 84e455f:	75 27                	jne    84e4588 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x1cc>
 84e4561:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4564:	05 00 97 07 00       	add    $0x79700,%eax
 84e4569:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e4570:	00 
 84e4571:	89 04 24             	mov    %eax,(%esp)
 84e4574:	e8 57 28 1a 00       	call   8686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>
 84e4579:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e457c:	c7 80 00 cf 08 00 03 	movl   $0x3,0x8cf00(%eax)
 84e4583:	00 00 00 
 84e4586:	eb 4a                	jmp    84e45d2 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x216>
 84e4588:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e458b:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 84e4591:	83 f8 04             	cmp    $0x4,%eax
 84e4594:	74 3c                	je     84e45d2 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x216>
 84e4596:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4599:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 84e459f:	89 c2                	mov    %eax,%edx
 84e45a1:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e45a4:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e45a8:	98                   	cwtl
 84e45a9:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84e45ac:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 84e45b2:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e45b6:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e45ba:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 84e45c1:	00 
 84e45c2:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e45c9:	00 
 84e45ca:	89 0c 24             	mov    %ecx,(%esp)
 84e45cd:	e8 22 28 1a 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 84e45d2:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e45d5:	89 04 24             	mov    %eax,(%esp)
 84e45d8:	e8 6f 97 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e45dd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e45e0:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e45e4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e45eb:	00 
 84e45ec:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e45ef:	89 04 24             	mov    %eax,(%esp)
 84e45f2:	e8 05 73 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e45f7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e45fa:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e45fe:	0f bf d0             	movswl %ax,%edx
 84e4601:	8d 85 c4 8c fe ff    	lea    -0x1733c(%ebp),%eax
 84e4607:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e460b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e460f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e4612:	89 04 24             	mov    %eax,(%esp)
 84e4615:	e8 ee 98 c3 ff       	call   811df08 <_ZN18InterfacePacketBuf10put_binaryEPci>
 84e461a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e4621:	00 
 84e4622:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e4625:	89 04 24             	mov    %eax,(%esp)
 84e4628:	e8 2b 73 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e462d:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e4630:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4634:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4637:	89 04 24             	mov    %eax,(%esp)
 84e463a:	e8 7b 3f 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e463f:	88 45 f7             	mov    %al,-0x9(%ebp)
 84e4642:	81 7d f0 30 02 00 00 	cmpl   $0x230,-0x10(%ebp)
 84e4649:	0f 85 88 00 00 00    	jne    84e46d7 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x31b>
 84e464f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4652:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 84e4658:	83 f8 03             	cmp    $0x3,%eax
 84e465b:	75 2a                	jne    84e4687 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x2cb>
 84e465d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4660:	05 00 97 07 00       	add    $0x79700,%eax
 84e4665:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84e466c:	00 
 84e466d:	89 04 24             	mov    %eax,(%esp)
 84e4670:	e8 5b 27 1a 00       	call   8686dd0 <_ZN15cUserHistoryLog16AntibotPacketLogEN20AntibotPacketLogType1TE>
 84e4675:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4678:	c7 80 00 cf 08 00 04 	movl   $0x4,0x8cf00(%eax)
 84e467f:	00 00 00 
 84e4682:	e9 b4 00 00 00       	jmp    84e473b <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x37f>
 84e4687:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e468a:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 84e4690:	83 f8 04             	cmp    $0x4,%eax
 84e4693:	0f 84 a2 00 00 00    	je     84e473b <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x37f>
 84e4699:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e469c:	8b 80 00 cf 08 00    	mov    0x8cf00(%eax),%eax
 84e46a2:	89 c2                	mov    %eax,%edx
 84e46a4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e46a7:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e46ab:	98                   	cwtl
 84e46ac:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84e46af:	81 c1 00 97 07 00    	add    $0x79700,%ecx
 84e46b5:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e46b9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e46bd:	c7 44 24 08 5b 02 00 	movl   $0x25b,0x8(%esp)
 84e46c4:	00 
 84e46c5:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84e46cc:	00 
 84e46cd:	89 0c 24             	mov    %ecx,(%esp)
 84e46d0:	e8 1f 27 1a 00       	call   8686df4 <_ZN15cUserHistoryLog12AbnormalUserE27ENUM_ABNORMAL_USER_LOG_TYPEtii>
 84e46d5:	eb 64                	jmp    84e473b <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x37f>
 84e46d7:	81 7d f0 31 02 00 00 	cmpl   $0x231,-0x10(%ebp)
 84e46de:	75 5b                	jne    84e473b <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x37f>
 84e46e0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e46e3:	0f b6 80 51 d2 08 00 	movzbl 0x8d251(%eax),%eax
 84e46ea:	3c 04                	cmp    $0x4,%al
 84e46ec:	77 4d                	ja     84e473b <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x37f>
 84e46ee:	0f b6 5d f7          	movzbl -0x9(%ebp),%ebx
 84e46f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e46f5:	0f b6 80 51 d2 08 00 	movzbl 0x8d251(%eax),%eax
 84e46fc:	0f b6 c8             	movzbl %al,%ecx
 84e46ff:	8d 50 01             	lea    0x1(%eax),%edx
 84e4702:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e4705:	88 90 51 d2 08 00    	mov    %dl,0x8d251(%eax)
 84e470b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e470e:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 84e4712:	0f bf d0             	movswl %ax,%edx
 84e4715:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84e4718:	8b 00                	mov    (%eax),%eax
 84e471a:	8b 75 ec             	mov    -0x14(%ebp),%esi
 84e471d:	81 c6 00 97 07 00    	add    $0x79700,%esi
 84e4723:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e4727:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e472b:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e472f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e4733:	89 34 24             	mov    %esi,(%esp)
 84e4736:	e8 ff 26 1a 00       	call   8686e3a <_ZN15cUserHistoryLog21SendBuffertoClientLogEishb>
 84e473b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e4740:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e4743:	89 04 24             	mov    %eax,(%esp)
 84e4746:	e8 35 97 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e474b:	eb 1b                	jmp    84e4768 <_ZN30Inter_Antibot_SendBufferClient12dispatch_sigEP5CUserPci+0x3ac>
 84e474d:	89 d3                	mov    %edx,%ebx
 84e474f:	89 c6                	mov    %eax,%esi
 84e4751:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84e4754:	89 04 24             	mov    %eax,(%esp)
 84e4757:	e8 24 97 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e475c:	89 f0                	mov    %esi,%eax
 84e475e:	89 da                	mov    %ebx,%edx
 84e4760:	89 04 24             	mov    %eax,(%esp)
 84e4763:	e8 e8 ef 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e4768:	89 d8                	mov    %ebx,%eax
 84e476a:	81 c4 70 73 01 00    	add    $0x17370,%esp
 84e4770:	5b                   	pop    %ebx
 84e4771:	5e                   	pop    %esi
 84e4772:	5d                   	pop    %ebp
 84e4773:	c3                   	ret

```

```c
// Inter_Antibot_SendBufferClient::dispatch_sig @ 0x84e43bc

/* Inter_Antibot_SendBufferClient::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Antibot_SendBufferClient::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CUser CVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  char acStack_17340 [95000];
  PacketGuard local_28 [12];
  int *local_1c;
  CUser *local_18;
  int local_14;
  undefined1 local_d;
  
  local_1c = (int *)param_3;
  memset(acStack_17340,0,95000);
  memcpy(acStack_17340,(void *)(param_3 + 0xc),(int)(short)local_1c[2]);
  local_18 = (CUser *)getUser(local_1c[1]);
  if ((local_18 == (CUser *)0x0) || (iVar3 = CUser::get_state(local_18), iVar3 == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar2) {
    uVar4 = NumberToString(local_1c[1],0);
    if (local_18 == (CUser *)0x0) {
      pcVar6 = "NULL User";
    }
    else {
      pcVar6 = "NONE state";
    }
    if (*local_1c == 0) {
      pcVar5 = "ANTIBOT";
    }
    else {
      pcVar5 = "DPROTO";
    }
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "virtual int Inter_Antibot_SendBufferClient::dispatch_sig(CUser*, char*, int)",0x5e56
               ,"Ignore SendBuffertoClient [%s][size:%d]; reason:%s, QQID:%s",pcVar5,
               (int)(short)local_1c[2],pcVar6,uVar4);
    if ((local_18 != (CUser *)0x0) && ((byte)local_18[0x8d251] < 5)) {
      CVar1 = local_18[0x8d251];
      local_18[0x8d251] = (CUser)((char)CVar1 + '\x01');
      cUserHistoryLog::AbnormalUser((cUserHistoryLog *)(local_18 + 0x79700),3,0x252,CVar1,0);
    }
  }
  else {
    if (*local_1c == 0) {
      local_14 = 0x230;
    }
    else {
      local_14 = 0x231;
    }
    if (local_14 == 0x230) {
      if (*(int *)(local_18 + 0x8cf00) == 2) {
        cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(local_18 + 0x79700),2);
        *(undefined4 *)(local_18 + 0x8cf00) = 3;
      }
      else if (*(int *)(local_18 + 0x8cf00) != 4) {
        cUserHistoryLog::AbnormalUser
                  ((cUserHistoryLog *)(local_18 + 0x79700),4,0x25b,(int)(short)local_1c[2],
                   *(undefined4 *)(local_18 + 0x8cf00));
      }
    }
    PacketGuard::PacketGuard(local_28);
                    /* try { // try from 084e45f2 to 084e473a has its CatchHandler @ 084e474d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_28,0,local_14);
    InterfacePacketBuf::put_binary
              ((InterfacePacketBuf *)local_28,acStack_17340,(int)(short)local_1c[2]);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_28,false);
    local_d = CUser::Send(local_18,local_28);
    if (local_14 == 0x230) {
      if (*(int *)(local_18 + 0x8cf00) == 3) {
        cUserHistoryLog::AntibotPacketLog((cUserHistoryLog *)(local_18 + 0x79700),3);
        *(undefined4 *)(local_18 + 0x8cf00) = 4;
      }
      else if (*(int *)(local_18 + 0x8cf00) != 4) {
        cUserHistoryLog::AbnormalUser
                  ((cUserHistoryLog *)(local_18 + 0x79700),4,0x25b,(int)(short)local_1c[2],
                   *(undefined4 *)(local_18 + 0x8cf00));
      }
    }
    else if ((local_14 == 0x231) && ((byte)local_18[0x8d251] < 5)) {
      CVar1 = local_18[0x8d251];
      local_18[0x8d251] = (CUser)((char)CVar1 + '\x01');
      cUserHistoryLog::SendBuffertoClientLog
                ((cUserHistoryLog *)(local_18 + 0x79700),*local_1c,(short)local_1c[2],(uchar)CVar1,
                 (bool)local_d);
    }
    PacketGuard::~PacketGuard(local_28);
  }
  return 0;
}

```

