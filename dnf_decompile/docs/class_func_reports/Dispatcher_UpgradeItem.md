# Dispatcher_UpgradeItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 082006d0 Dispatcher_UpgradeItem::dispatch_sig  [0x082006d0-0x8200b07] ===
 82006d0:	55                   	push   %ebp
 82006d1:	89 e5                	mov    %esp,%ebp
 82006d3:	57                   	push   %edi
 82006d4:	53                   	push   %ebx
 82006d5:	81 ec 50 01 00 00    	sub    $0x150,%esp
 82006db:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 82006df:	74 0f                	je     82006f0 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x20>
 82006e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 82006e4:	89 04 24             	mov    %eax,(%esp)
 82006e7:	e8 12 9c ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 82006ec:	84 c0                	test   %al,%al
 82006ee:	74 07                	je     82006f7 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x27>
 82006f0:	b8 01 00 00 00       	mov    $0x1,%eax
 82006f5:	eb 05                	jmp    82006fc <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x2c>
 82006f7:	b8 00 00 00 00       	mov    $0x0,%eax
 82006fc:	84 c0                	test   %al,%al
 82006fe:	74 0a                	je     820070a <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x3a>
 8200700:	b8 00 00 00 00       	mov    $0x0,%eax
 8200705:	e9 f4 03 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 820070a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820070d:	89 04 24             	mov    %eax,(%esp)
 8200710:	e8 77 9c ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8200715:	83 f8 03             	cmp    $0x3,%eax
 8200718:	75 0f                	jne    8200729 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x59>
 820071a:	8b 45 0c             	mov    0xc(%ebp),%eax
 820071d:	89 04 24             	mov    %eax,(%esp)
 8200720:	e8 0d fd f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8200725:	85 c0                	test   %eax,%eax
 8200727:	75 07                	jne    8200730 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x60>
 8200729:	b8 01 00 00 00       	mov    $0x1,%eax
 820072e:	eb 05                	jmp    8200735 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x65>
 8200730:	b8 00 00 00 00       	mov    $0x0,%eax
 8200735:	84 c0                	test   %al,%al
 8200737:	74 29                	je     8200762 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x92>
 8200739:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8200740:	00 
 8200741:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200748:	00 
 8200749:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 8200750:	08 
 8200751:	c7 04 24 18 95 00 00 	movl   $0x9518,(%esp)
 8200758:	e8 7a 01 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 820075d:	e9 9c 03 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 8200762:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200765:	89 04 24             	mov    %eax,(%esp)
 8200768:	e8 91 9b ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 820076d:	84 c0                	test   %al,%al
 820076f:	74 0a                	je     820077b <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0xab>
 8200771:	b8 00 00 00 00       	mov    $0x0,%eax
 8200776:	e9 83 03 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 820077b:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 8200781:	89 04 24             	mov    %eax,(%esp)
 8200784:	e8 61 d5 02 00       	call   822dcea <_ZN16MSG_ITEM_UPGRADEC1Ev>
 8200789:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 820078f:	83 c0 1a             	add    $0x1a,%eax
 8200792:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200796:	8b 45 10             	mov    0x10(%ebp),%eax
 8200799:	89 04 24             	mov    %eax,(%esp)
 820079c:	e8 cf c7 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 82007a1:	83 f0 01             	xor    $0x1,%eax
 82007a4:	84 c0                	test   %al,%al
 82007a6:	74 29                	je     82007d1 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x101>
 82007a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82007af:	00 
 82007b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82007b7:	00 
 82007b8:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 82007bf:	08 
 82007c0:	c7 04 24 30 95 00 00 	movl   $0x9530,(%esp)
 82007c7:	e8 0b 01 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 82007cc:	e9 2d 03 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 82007d1:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 82007d7:	83 c0 1b             	add    $0x1b,%eax
 82007da:	89 44 24 04          	mov    %eax,0x4(%esp)
 82007de:	8b 45 10             	mov    0x10(%ebp),%eax
 82007e1:	89 04 24             	mov    %eax,(%esp)
 82007e4:	e8 c7 c8 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82007e9:	83 f0 01             	xor    $0x1,%eax
 82007ec:	84 c0                	test   %al,%al
 82007ee:	74 29                	je     8200819 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x149>
 82007f0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82007f7:	00 
 82007f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82007ff:	00 
 8200800:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 8200807:	08 
 8200808:	c7 04 24 32 95 00 00 	movl   $0x9532,(%esp)
 820080f:	e8 c3 00 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 8200814:	e9 e5 02 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 8200819:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 820081f:	83 c0 1d             	add    $0x1d,%eax
 8200822:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200826:	8b 45 10             	mov    0x10(%ebp),%eax
 8200829:	89 04 24             	mov    %eax,(%esp)
 820082c:	e8 4d ca 38 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 8200831:	83 f0 01             	xor    $0x1,%eax
 8200834:	84 c0                	test   %al,%al
 8200836:	74 29                	je     8200861 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x191>
 8200838:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820083f:	00 
 8200840:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200847:	00 
 8200848:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 820084f:	08 
 8200850:	c7 04 24 34 95 00 00 	movl   $0x9534,(%esp)
 8200857:	e8 7b 00 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 820085c:	e9 9d 02 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 8200861:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 8200867:	83 c0 23             	add    $0x23,%eax
 820086a:	89 44 24 04          	mov    %eax,0x4(%esp)
 820086e:	8b 45 10             	mov    0x10(%ebp),%eax
 8200871:	89 04 24             	mov    %eax,(%esp)
 8200874:	e8 37 c8 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8200879:	83 f0 01             	xor    $0x1,%eax
 820087c:	84 c0                	test   %al,%al
 820087e:	74 29                	je     82008a9 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x1d9>
 8200880:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8200887:	00 
 8200888:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820088f:	00 
 8200890:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 8200897:	08 
 8200898:	c7 04 24 36 95 00 00 	movl   $0x9536,(%esp)
 820089f:	e8 33 00 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 82008a4:	e9 55 02 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 82008a9:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 82008af:	83 c0 21             	add    $0x21,%eax
 82008b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 82008b6:	8b 45 10             	mov    0x10(%ebp),%eax
 82008b9:	89 04 24             	mov    %eax,(%esp)
 82008bc:	e8 ef c7 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 82008c1:	83 f0 01             	xor    $0x1,%eax
 82008c4:	84 c0                	test   %al,%al
 82008c6:	74 29                	je     82008f1 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x221>
 82008c8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82008cf:	00 
 82008d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82008d7:	00 
 82008d8:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 82008df:	08 
 82008e0:	c7 04 24 39 95 00 00 	movl   $0x9539,(%esp)
 82008e7:	e8 eb ff 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82008ec:	e9 0d 02 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 82008f1:	c7 45 f0 80 00 00 00 	movl   $0x80,-0x10(%ebp)
 82008f8:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82008ff:	8d 95 6b ff ff ff    	lea    -0x95(%ebp),%edx
 8200905:	bb 81 00 00 00       	mov    $0x81,%ebx
 820090a:	b8 00 00 00 00       	mov    $0x0,%eax
 820090f:	89 d1                	mov    %edx,%ecx
 8200911:	83 e1 01             	and    $0x1,%ecx
 8200914:	85 c9                	test   %ecx,%ecx
 8200916:	74 08                	je     8200920 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x250>
 8200918:	88 02                	mov    %al,(%edx)
 820091a:	83 c2 01             	add    $0x1,%edx
 820091d:	83 eb 01             	sub    $0x1,%ebx
 8200920:	89 d1                	mov    %edx,%ecx
 8200922:	83 e1 02             	and    $0x2,%ecx
 8200925:	85 c9                	test   %ecx,%ecx
 8200927:	74 09                	je     8200932 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x262>
 8200929:	66 89 02             	mov    %ax,(%edx)
 820092c:	83 c2 02             	add    $0x2,%edx
 820092f:	83 eb 02             	sub    $0x2,%ebx
 8200932:	89 d9                	mov    %ebx,%ecx
 8200934:	c1 e9 02             	shr    $0x2,%ecx
 8200937:	89 d7                	mov    %edx,%edi
 8200939:	f3 ab                	rep stos %eax,%es:(%edi)
 820093b:	89 fa                	mov    %edi,%edx
 820093d:	89 d9                	mov    %ebx,%ecx
 820093f:	83 e1 02             	and    $0x2,%ecx
 8200942:	85 c9                	test   %ecx,%ecx
 8200944:	74 06                	je     820094c <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x27c>
 8200946:	66 89 02             	mov    %ax,(%edx)
 8200949:	83 c2 02             	add    $0x2,%edx
 820094c:	89 d9                	mov    %ebx,%ecx
 820094e:	83 e1 01             	and    $0x1,%ecx
 8200951:	85 c9                	test   %ecx,%ecx
 8200953:	74 05                	je     820095a <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x28a>
 8200955:	88 02                	mov    %al,(%edx)
 8200957:	83 c2 01             	add    $0x1,%edx
 820095a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 820095d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8200961:	8b 45 10             	mov    0x10(%ebp),%eax
 8200964:	89 04 24             	mov    %eax,(%esp)
 8200967:	e8 d4 c8 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 820096c:	83 f0 01             	xor    $0x1,%eax
 820096f:	84 c0                	test   %al,%al
 8200971:	74 29                	je     820099c <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x2cc>
 8200973:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820097a:	00 
 820097b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8200982:	00 
 8200983:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 820098a:	08 
 820098b:	c7 04 24 40 95 00 00 	movl   $0x9540,(%esp)
 8200992:	e8 40 ff 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8200997:	e9 62 01 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 820099c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 820099f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 82009a3:	c7 44 24 08 81 00 00 	movl   $0x81,0x8(%esp)
 82009aa:	00 
 82009ab:	8d 85 c2 fe ff ff    	lea    -0x13e(%ebp),%eax
 82009b1:	83 c0 28             	add    $0x28,%eax
 82009b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 82009b8:	8b 45 10             	mov    0x10(%ebp),%eax
 82009bb:	89 04 24             	mov    %eax,(%esp)
 82009be:	e8 f9 c8 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 82009c3:	83 f0 01             	xor    $0x1,%eax
 82009c6:	84 c0                	test   %al,%al
 82009c8:	74 29                	je     82009f3 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x323>
 82009ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82009d1:	00 
 82009d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82009d9:	00 
 82009da:	c7 44 24 04 c0 f6 bc 	movl   $0x8bcf6c0,0x4(%esp)
 82009e1:	08 
 82009e2:	c7 04 24 42 95 00 00 	movl   $0x9542,(%esp)
 82009e9:	e8 e9 fe 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82009ee:	e9 0b 01 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 82009f3:	e8 ee 1b f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 82009f8:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 82009ff:	00 
 8200a00:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8200a07:	00 
 8200a08:	8b 55 0c             	mov    0xc(%ebp),%edx
 8200a0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200a0f:	89 04 24             	mov    %eax,(%esp)
 8200a12:	e8 a1 dc f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 8200a17:	84 c0                	test   %al,%al
 8200a19:	74 25                	je     8200a40 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x370>
 8200a1b:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 8200a22:	00 
 8200a23:	c7 44 24 04 53 00 00 	movl   $0x53,0x4(%esp)
 8200a2a:	00 
 8200a2b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200a2e:	89 04 24             	mov    %eax,(%esp)
 8200a31:	e8 da b6 47 00       	call   867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>
 8200a36:	b8 00 00 00 00       	mov    $0x0,%eax
 8200a3b:	e9 be 00 00 00       	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 8200a40:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8200a45:	c7 44 24 08 25 00 00 	movl   $0x25,0x8(%esp)
 8200a4c:	00 
 8200a4d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8200a50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200a54:	89 04 24             	mov    %eax,(%esp)
 8200a57:	e8 a6 7f 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8200a5c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8200a5f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8200a63:	74 24                	je     8200a89 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x3b9>
 8200a65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8200a68:	0f b7 c0             	movzwl %ax,%eax
 8200a6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8200a6f:	c7 44 24 04 53 00 00 	movl   $0x53,0x4(%esp)
 8200a76:	00 
 8200a77:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200a7a:	89 04 24             	mov    %eax,(%esp)
 8200a7d:	e8 8e b6 47 00       	call   867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>
 8200a82:	b8 00 00 00 00       	mov    $0x0,%eax
 8200a87:	eb 75                	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 8200a89:	0f b7 85 dd fe ff ff 	movzwl -0x123(%ebp),%eax
 8200a90:	0f b7 c0             	movzwl %ax,%eax
 8200a93:	89 44 24 08          	mov    %eax,0x8(%esp)
 8200a97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8200a9e:	00 
 8200a9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200aa2:	89 04 24             	mov    %eax,(%esp)
 8200aa5:	e8 98 5e 44 00       	call   8646942 <_ZNK5CUser13CheckItemLockEii>
 8200aaa:	84 c0                	test   %al,%al
 8200aac:	74 22                	je     8200ad0 <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x400>
 8200aae:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8200ab5:	00 
 8200ab6:	c7 44 24 04 53 00 00 	movl   $0x53,0x4(%esp)
 8200abd:	00 
 8200abe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8200ac1:	89 04 24             	mov    %eax,(%esp)
 8200ac4:	e8 47 b6 47 00       	call   867c110 <_ZN5CUser23SendCmdErrorPacket2ByteE14ENUM_CMDPACKETt>
 8200ac9:	b8 00 00 00 00       	mov    $0x0,%eax
 8200ace:	eb 2e                	jmp    8200afe <_ZN22Dispatcher_UpgradeItem12dispatch_sigEP5CUserR9PacketBuf+0x42e>
 8200ad0:	e8 c6 b6 ec ff       	call   80cc19b <_Z14G_CDataManagerv>
 8200ad5:	8b 40 20             	mov    0x20(%eax),%eax
 8200ad8:	c7 44 24 0c 53 00 00 	movl   $0x53,0xc(%esp)
 8200adf:	00 
 8200ae0:	8d 95 c2 fe ff ff    	lea    -0x13e(%ebp),%edx
 8200ae6:	89 54 24 08          	mov    %edx,0x8(%esp)
 8200aea:	8b 55 0c             	mov    0xc(%ebp),%edx
 8200aed:	89 54 24 04          	mov    %edx,0x4(%esp)
 8200af1:	89 04 24             	mov    %eax,(%esp)
 8200af4:	e8 57 bd ef ff       	call   80fc850 <_ZN8WongWork12IItemUpgrade19item_upgrade_systemEP5CUserP16MSG_ITEM_UPGRADEi>
 8200af9:	b8 00 00 00 00       	mov    $0x0,%eax
 8200afe:	81 c4 50 01 00 00    	add    $0x150,%esp
 8200b04:	5b                   	pop    %ebx
 8200b05:	5f                   	pop    %edi
 8200b06:	5d                   	pop    %ebp
 8200b07:	c3                   	ret

```

```c
// Dispatcher_UpgradeItem::dispatch_sig @ 0x82006d0

/* Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_UpgradeItem::dispatch_sig(Dispatcher_UpgradeItem *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ServiceRestrictManager *pSVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  MSG_ITEM_UPGRADE local_142 [26];
  uchar uStack_128;
  ushort local_127;
  ulong uStack_125;
  ushort uStack_121;
  ushort auStack_11f [2];
  char acStack_11a [129];
  undefined1 local_99;
  undefined4 local_98 [32];
  uint local_18 [3];
  
  bVar9 = 0;
  if ((param_1 == (CUser *)0x0) || (cVar1 = CUser::CheckInTrade(param_1), cVar1 != '\0')) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  if (!bVar8) {
    iVar2 = CUser::get_state(param_1);
    if ((iVar2 == 3) &&
       (iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar2 != 0)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      uVar3 = LineFunc(0x9518,"virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      cVar1 = CUser::CheckInTrade(param_1);
      if (cVar1 == '\0') {
        MSG_ITEM_UPGRADE::MSG_ITEM_UPGRADE(local_142);
        cVar1 = PacketBuf::get_byte(param_2,&uStack_128);
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_2,&local_127);
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_2,&uStack_125);
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_short(param_2,auStack_11f);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_2,&uStack_121);
                if (cVar1 == '\x01') {
                  local_18[1] = 0x80;
                  local_18[0] = 0;
                  puVar6 = (undefined4 *)&local_99;
                  uVar7 = 0x81;
                  bVar8 = ((uint)puVar6 & 1) != 0;
                  if (bVar8) {
                    local_99 = 0;
                    puVar6 = local_98;
                    uVar7 = 0x80;
                  }
                  if (((uint)puVar6 & 2) != 0) {
                    *(undefined2 *)puVar6 = 0;
                    puVar6 = (undefined4 *)((int)puVar6 + 2);
                    uVar7 = uVar7 - 2;
                  }
                  for (uVar5 = uVar7 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
                    *puVar6 = 0;
                    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
                  }
                  if ((uVar7 & 2) != 0) {
                    *(undefined2 *)puVar6 = 0;
                    puVar6 = (undefined4 *)((int)puVar6 + 2);
                  }
                  if (!bVar8) {
                    *(undefined1 *)puVar6 = 0;
                  }
                  cVar1 = PacketBuf::get_int(param_2,local_18);
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_str(param_2,acStack_11a,0x81,local_18[0]);
                    if (cVar1 == '\x01') {
                      pSVar4 = (ServiceRestrictManager *)
                               ARAD::Singleton<ServiceRestrictManager>::Get();
                      cVar1 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,7);
                      if (cVar1 == '\0') {
                        local_18[2] = CSecu_ProtectionField::Check
                                                (GlobalData::s_pSecuProtectionField,param_1,0x25);
                        if (local_18[2] == 0) {
                          cVar1 = CUser::CheckItemLock(param_1,1,(uint)local_127);
                          if (cVar1 == '\0') {
                            iVar2 = G_CDataManager();
                            WongWork::IItemUpgrade::item_upgrade_system
                                      (*(IItemUpgrade **)(iVar2 + 0x20),param_1,local_142,0x53);
                            uVar3 = 0;
                          }
                          else {
                            CUser::SendCmdErrorPacket2Byte(param_1,0x53,0xd5);
                            uVar3 = 0;
                          }
                        }
                        else {
                          CUser::SendCmdErrorPacket2Byte(param_1,0x53,local_18[2] & 0xffff);
                          uVar3 = 0;
                        }
                      }
                      else {
                        CUser::SendCmdErrorPacket2Byte(param_1,0x53,0xd1);
                        uVar3 = 0;
                      }
                    }
                    else {
                      uVar3 = LineFunc(0x9542,
                                       "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar3 = LineFunc(0x9540,
                                     "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar3 = LineFunc(0x9539,
                                   "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0x9536,
                                 "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              uVar3 = LineFunc(0x9534,
                               "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
          }
          else {
            uVar3 = LineFunc(0x9532,
                             "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)",
                             0,0);
          }
        }
        else {
          uVar3 = LineFunc(0x9530,
                           "virtual int Dispatcher_UpgradeItem::dispatch_sig(CUser*, PacketBuf&)",0,
                           0);
        }
      }
      else {
        uVar3 = 0;
      }
    }
    return uVar3;
  }
  return 0;
}

```

