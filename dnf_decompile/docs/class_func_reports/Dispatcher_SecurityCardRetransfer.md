# Dispatcher_SecurityCardRetransfer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0820a9a0 Dispatcher_SecurityCardRetransfer::dispatch_sig  [0x0820a9a0-0x820adc5] ===
 820a9a0:	55                   	push   %ebp
 820a9a1:	89 e5                	mov    %esp,%ebp
 820a9a3:	57                   	push   %edi
 820a9a4:	56                   	push   %esi
 820a9a5:	53                   	push   %ebx
 820a9a6:	81 ec 8c 01 00 00    	sub    $0x18c,%esp
 820a9ac:	8b 45 0c             	mov    0xc(%ebp),%eax
 820a9af:	89 04 24             	mov    %eax,(%esp)
 820a9b2:	e8 d5 f9 ec ff       	call   80da38c <_ZN5CUser9get_stateEv>
 820a9b7:	83 f8 03             	cmp    $0x3,%eax
 820a9ba:	0f 95 c0             	setne  %al
 820a9bd:	84 c0                	test   %al,%al
 820a9bf:	74 2b                	je     820a9ec <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x4c>
 820a9c1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820a9c8:	00 
 820a9c9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820a9d0:	00 
 820a9d1:	c7 44 24 04 40 e3 bc 	movl   $0x8bce340,0x4(%esp)
 820a9d8:	08 
 820a9d9:	c7 04 24 ac a6 00 00 	movl   $0xa6ac,(%esp)
 820a9e0:	e8 f2 5e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820a9e5:	89 c3                	mov    %eax,%ebx
 820a9e7:	e9 cc 03 00 00       	jmp    820adb8 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x418>
 820a9ec:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 820a9f3:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 820a9fa:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 820aa01:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 820aa08:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 820aa0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820aa0f:	8b 45 10             	mov    0x10(%ebp),%eax
 820aa12:	89 04 24             	mov    %eax,(%esp)
 820aa15:	e8 26 28 38 00       	call   858d240 <_ZN9PacketBuf7get_intERj>
 820aa1a:	83 f0 01             	xor    $0x1,%eax
 820aa1d:	84 c0                	test   %al,%al
 820aa1f:	74 2b                	je     820aa4c <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0xac>
 820aa21:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820aa28:	00 
 820aa29:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820aa30:	00 
 820aa31:	c7 44 24 04 40 e3 bc 	movl   $0x8bce340,0x4(%esp)
 820aa38:	08 
 820aa39:	c7 04 24 b1 a6 00 00 	movl   $0xa6b1,(%esp)
 820aa40:	e8 92 5e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820aa45:	89 c3                	mov    %eax,%ebx
 820aa47:	e9 6c 03 00 00       	jmp    820adb8 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x418>
 820aa4c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 820aa4f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 820aa53:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 820aa5a:	00 
 820aa5b:	8d 45 d8             	lea    -0x28(%ebp),%eax
 820aa5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 820aa62:	8b 45 10             	mov    0x10(%ebp),%eax
 820aa65:	89 04 24             	mov    %eax,(%esp)
 820aa68:	e8 4f 28 38 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 820aa6d:	83 f0 01             	xor    $0x1,%eax
 820aa70:	84 c0                	test   %al,%al
 820aa72:	74 2b                	je     820aa9f <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0xff>
 820aa74:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820aa7b:	00 
 820aa7c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820aa83:	00 
 820aa84:	c7 44 24 04 40 e3 bc 	movl   $0x8bce340,0x4(%esp)
 820aa8b:	08 
 820aa8c:	c7 04 24 b2 a6 00 00 	movl   $0xa6b2,(%esp)
 820aa93:	e8 3f 5e 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820aa98:	89 c3                	mov    %eax,%ebx
 820aa9a:	e9 19 03 00 00       	jmp    820adb8 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x418>
 820aa9f:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820aaa4:	8d 55 d8             	lea    -0x28(%ebp),%edx
 820aaa7:	89 54 24 04          	mov    %edx,0x4(%esp)
 820aaab:	89 04 24             	mov    %eax,(%esp)
 820aaae:	e8 91 39 3f 00       	call   85fe444 <_ZNK8WongWork19CSecurityCardCenter16checkPhoneNumberEPKc>
 820aab3:	83 f0 01             	xor    $0x1,%eax
 820aab6:	84 c0                	test   %al,%al
 820aab8:	74 2b                	je     820aae5 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x145>
 820aaba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820aac1:	00 
 820aac2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820aac9:	00 
 820aaca:	c7 44 24 04 40 e3 bc 	movl   $0x8bce340,0x4(%esp)
 820aad1:	08 
 820aad2:	c7 04 24 b5 a6 00 00 	movl   $0xa6b5,(%esp)
 820aad9:	e8 f9 5d 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820aade:	89 c3                	mov    %eax,%ebx
 820aae0:	e9 d3 02 00 00       	jmp    820adb8 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x418>
 820aae5:	c7 44 24 08 29 00 00 	movl   $0x29,0x8(%esp)
 820aaec:	00 
 820aaed:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 820aaf4:	00 
 820aaf5:	8d 85 61 ff ff ff    	lea    -0x9f(%ebp),%eax
 820aafb:	89 04 24             	mov    %eax,(%esp)
 820aafe:	e8 bd 31 e7 ff       	call   807dcc0 <memset@plt>
 820ab03:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820ab09:	89 04 24             	mov    %eax,(%esp)
 820ab0c:	e8 17 d2 e7 ff       	call   8087d28 <_ZN5CSHA1C1Ev>
 820ab11:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 820ab14:	8d 45 d8             	lea    -0x28(%ebp),%eax
 820ab17:	89 54 24 08          	mov    %edx,0x8(%esp)
 820ab1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 820ab1f:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820ab25:	89 04 24             	mov    %eax,(%esp)
 820ab28:	e8 71 f6 e7 ff       	call   808a19e <_ZN5CSHA16UpdateEPKhj>
 820ab2d:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820ab33:	89 04 24             	mov    %eax,(%esp)
 820ab36:	e8 97 f7 e7 ff       	call   808a2d2 <_ZN5CSHA15FinalEv>
 820ab3b:	8d 85 61 ff ff ff    	lea    -0x9f(%ebp),%eax
 820ab41:	89 44 24 04          	mov    %eax,0x4(%esp)
 820ab45:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820ab4b:	89 04 24             	mov    %eax,(%esp)
 820ab4e:	e8 bd f8 e7 ff       	call   808a410 <_ZN5CSHA110GetHexHashEPc>
 820ab53:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ab56:	89 04 24             	mov    %eax,(%esp)
 820ab59:	e8 c2 51 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820ab5e:	89 04 24             	mov    %eax,(%esp)
 820ab61:	e8 a8 43 02 00       	call   822ef0e <_ZNK8WongWork13CSecurityCard10isActivateEv>
 820ab66:	84 c0                	test   %al,%al
 820ab68:	0f 84 17 02 00 00    	je     820ad85 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x3e5>
 820ab6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ab71:	89 04 24             	mov    %eax,(%esp)
 820ab74:	e8 a7 51 02 00       	call   822fd20 <_ZN5CUser15getSecurityCardEv>
 820ab79:	89 04 24             	mov    %eax,(%esp)
 820ab7c:	e8 a5 43 02 00       	call   822ef26 <_ZN8WongWork13CSecurityCard10getFailCntEv>
 820ab81:	83 f8 02             	cmp    $0x2,%eax
 820ab84:	0f 97 c0             	seta   %al
 820ab87:	84 c0                	test   %al,%al
 820ab89:	74 25                	je     820abb0 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x210>
 820ab8b:	c7 44 24 08 7a 00 00 	movl   $0x7a,0x8(%esp)
 820ab92:	00 
 820ab93:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 820ab9a:	00 
 820ab9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ab9e:	89 04 24             	mov    %eax,(%esp)
 820aba1:	e8 9c 13 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820aba6:	bb 00 00 00 00       	mov    $0x0,%ebx
 820abab:	e9 fa 01 00 00       	jmp    820adaa <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x40a>
 820abb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 820abb3:	89 04 24             	mov    %eax,(%esp)
 820abb6:	e8 73 51 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820abbb:	89 04 24             	mov    %eax,(%esp)
 820abbe:	e8 17 44 02 00       	call   822efda <_ZNK8Sanicova4CPad10isActivateEv>
 820abc3:	84 c0                	test   %al,%al
 820abc5:	0f 84 81 00 00 00    	je     820ac4c <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x2ac>
 820abcb:	8b 45 0c             	mov    0xc(%ebp),%eax
 820abce:	89 04 24             	mov    %eax,(%esp)
 820abd1:	e8 58 51 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820abd6:	89 04 24             	mov    %eax,(%esp)
 820abd9:	e8 b0 43 02 00       	call   822ef8e <_ZN8Sanicova4CPad10getFailCntEv>
 820abde:	83 f8 02             	cmp    $0x2,%eax
 820abe1:	0f 9f c0             	setg   %al
 820abe4:	84 c0                	test   %al,%al
 820abe6:	74 25                	je     820ac0d <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x26d>
 820abe8:	c7 44 24 08 88 00 00 	movl   $0x88,0x8(%esp)
 820abef:	00 
 820abf0:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 820abf7:	00 
 820abf8:	8b 45 0c             	mov    0xc(%ebp),%eax
 820abfb:	89 04 24             	mov    %eax,(%esp)
 820abfe:	e8 3f 13 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820ac03:	bb 00 00 00 00       	mov    $0x0,%ebx
 820ac08:	e9 9d 01 00 00       	jmp    820adaa <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x40a>
 820ac0d:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ac10:	89 04 24             	mov    %eax,(%esp)
 820ac13:	e8 16 51 02 00       	call   822fd2e <_ZN5CUser6getPadEv>
 820ac18:	89 04 24             	mov    %eax,(%esp)
 820ac1b:	e8 c6 43 02 00       	call   822efe6 <_ZNK8Sanicova4CPad11isCertifiedEv>
 820ac20:	83 f0 01             	xor    $0x1,%eax
 820ac23:	84 c0                	test   %al,%al
 820ac25:	74 25                	je     820ac4c <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x2ac>
 820ac27:	c7 44 24 08 86 00 00 	movl   $0x86,0x8(%esp)
 820ac2e:	00 
 820ac2f:	c7 44 24 04 a4 00 00 	movl   $0xa4,0x4(%esp)
 820ac36:	00 
 820ac37:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ac3a:	89 04 24             	mov    %eax,(%esp)
 820ac3d:	e8 00 13 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820ac42:	bb 00 00 00 00       	mov    $0x0,%ebx
 820ac47:	e9 5e 01 00 00       	jmp    820adaa <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x40a>
 820ac4c:	c7 45 d2 00 00 00 00 	movl   $0x0,-0x2e(%ebp)
 820ac53:	66 c7 45 d6 00 00    	movw   $0x0,-0x2a(%ebp)
 820ac59:	8d 55 b1             	lea    -0x4f(%ebp),%edx
 820ac5c:	bb 21 00 00 00       	mov    $0x21,%ebx
 820ac61:	b8 00 00 00 00       	mov    $0x0,%eax
 820ac66:	89 d1                	mov    %edx,%ecx
 820ac68:	83 e1 01             	and    $0x1,%ecx
 820ac6b:	85 c9                	test   %ecx,%ecx
 820ac6d:	74 08                	je     820ac77 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x2d7>
 820ac6f:	88 02                	mov    %al,(%edx)
 820ac71:	83 c2 01             	add    $0x1,%edx
 820ac74:	83 eb 01             	sub    $0x1,%ebx
 820ac77:	89 d1                	mov    %edx,%ecx
 820ac79:	83 e1 02             	and    $0x2,%ecx
 820ac7c:	85 c9                	test   %ecx,%ecx
 820ac7e:	74 09                	je     820ac89 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x2e9>
 820ac80:	66 89 02             	mov    %ax,(%edx)
 820ac83:	83 c2 02             	add    $0x2,%edx
 820ac86:	83 eb 02             	sub    $0x2,%ebx
 820ac89:	89 d9                	mov    %ebx,%ecx
 820ac8b:	c1 e9 02             	shr    $0x2,%ecx
 820ac8e:	89 d7                	mov    %edx,%edi
 820ac90:	f3 ab                	rep stos %eax,%es:(%edi)
 820ac92:	89 fa                	mov    %edi,%edx
 820ac94:	89 d9                	mov    %ebx,%ecx
 820ac96:	83 e1 02             	and    $0x2,%ecx
 820ac99:	85 c9                	test   %ecx,%ecx
 820ac9b:	74 06                	je     820aca3 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x303>
 820ac9d:	66 89 02             	mov    %ax,(%edx)
 820aca0:	83 c2 02             	add    $0x2,%edx
 820aca3:	89 d9                	mov    %ebx,%ecx
 820aca5:	83 e1 01             	and    $0x1,%ecx
 820aca8:	85 c9                	test   %ecx,%ecx
 820acaa:	74 05                	je     820acb1 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x311>
 820acac:	88 02                	mov    %al,(%edx)
 820acae:	83 c2 01             	add    $0x1,%edx
 820acb1:	8d 55 8a             	lea    -0x76(%ebp),%edx
 820acb4:	bb 27 00 00 00       	mov    $0x27,%ebx
 820acb9:	b8 00 00 00 00       	mov    $0x0,%eax
 820acbe:	89 d1                	mov    %edx,%ecx
 820acc0:	83 e1 02             	and    $0x2,%ecx
 820acc3:	85 c9                	test   %ecx,%ecx
 820acc5:	74 09                	je     820acd0 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x330>
 820acc7:	66 89 02             	mov    %ax,(%edx)
 820acca:	83 c2 02             	add    $0x2,%edx
 820accd:	83 eb 02             	sub    $0x2,%ebx
 820acd0:	89 d9                	mov    %ebx,%ecx
 820acd2:	c1 e9 02             	shr    $0x2,%ecx
 820acd5:	89 d7                	mov    %edx,%edi
 820acd7:	f3 ab                	rep stos %eax,%es:(%edi)
 820acd9:	89 fa                	mov    %edi,%edx
 820acdb:	89 d9                	mov    %ebx,%ecx
 820acdd:	83 e1 02             	and    $0x2,%ecx
 820ace0:	85 c9                	test   %ecx,%ecx
 820ace2:	74 06                	je     820acea <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x34a>
 820ace4:	66 89 02             	mov    %ax,(%edx)
 820ace7:	83 c2 02             	add    $0x2,%edx
 820acea:	89 d9                	mov    %ebx,%ecx
 820acec:	83 e1 01             	and    $0x1,%ecx
 820acef:	85 c9                	test   %ecx,%ecx
 820acf1:	74 05                	je     820acf8 <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x358>
 820acf3:	88 02                	mov    %al,(%edx)
 820acf5:	83 c2 01             	add    $0x1,%edx
 820acf8:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820acfd:	8d 55 8a             	lea    -0x76(%ebp),%edx
 820ad00:	89 54 24 04          	mov    %edx,0x4(%esp)
 820ad04:	89 04 24             	mov    %eax,(%esp)
 820ad07:	e8 ae 34 3f 00       	call   85fe1ba <_ZNK8WongWork19CSecurityCardCenter16generateCardDataEPc>
 820ad0c:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 820ad12:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820ad17:	8d 55 b1             	lea    -0x4f(%ebp),%edx
 820ad1a:	89 54 24 04          	mov    %edx,0x4(%esp)
 820ad1e:	89 04 24             	mov    %eax,(%esp)
 820ad21:	e8 c6 33 3f 00       	call   85fe0ec <_ZN8WongWork19CSecurityCardCenter17generateServerKeyEPc>
 820ad26:	89 c7                	mov    %eax,%edi
 820ad28:	a1 0c f7 41 09       	mov    0x941f70c,%eax
 820ad2d:	8d 55 d2             	lea    -0x2e(%ebp),%edx
 820ad30:	89 54 24 04          	mov    %edx,0x4(%esp)
 820ad34:	89 04 24             	mov    %eax,(%esp)
 820ad37:	e8 42 34 3f 00       	call   85fe17e <_ZN8WongWork19CSecurityCardCenter15generateCertKeyEPc>
 820ad3c:	89 c6                	mov    %eax,%esi
 820ad3e:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ad41:	89 04 24             	mov    %eax,(%esp)
 820ad44:	e8 25 f6 ec ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 820ad49:	89 c3                	mov    %eax,%ebx
 820ad4b:	8b 45 0c             	mov    0xc(%ebp),%eax
 820ad4e:	89 04 24             	mov    %eax,(%esp)
 820ad51:	e8 40 df eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 820ad56:	8b 95 94 fe ff ff    	mov    -0x16c(%ebp),%edx
 820ad5c:	89 54 24 18          	mov    %edx,0x18(%esp)
 820ad60:	89 7c 24 14          	mov    %edi,0x14(%esp)
 820ad64:	89 74 24 10          	mov    %esi,0x10(%esp)
 820ad68:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 820ad6c:	8d 95 61 ff ff ff    	lea    -0x9f(%ebp),%edx
 820ad72:	89 54 24 08          	mov    %edx,0x8(%esp)
 820ad76:	8d 55 d8             	lea    -0x28(%ebp),%edx
 820ad79:	89 54 24 04          	mov    %edx,0x4(%esp)
 820ad7d:	89 04 24             	mov    %eax,(%esp)
 820ad80:	e8 71 14 22 00       	call   842c1f6 <_ZN25DB_SecurityCardRetransfer11makeRequestEiPcS0_jPKcS2_S2_>
 820ad85:	bb 00 00 00 00       	mov    $0x0,%ebx
 820ad8a:	eb 1e                	jmp    820adaa <_ZN33Dispatcher_SecurityCardRetransfer12dispatch_sigEP5CUserR9PacketBuf+0x40a>
 820ad8c:	89 d3                	mov    %edx,%ebx
 820ad8e:	89 c6                	mov    %eax,%esi
 820ad90:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820ad96:	89 04 24             	mov    %eax,(%esp)
 820ad99:	e8 ae cf e7 ff       	call   8087d4c <_ZN5CSHA1D1Ev>
 820ad9e:	89 f0                	mov    %esi,%eax
 820ada0:	89 da                	mov    %ebx,%edx
 820ada2:	89 04 24             	mov    %eax,(%esp)
 820ada5:	e8 a6 89 8d 00       	call   8ae3750 <_Unwind_Resume>
 820adaa:	8d 85 9c fe ff ff    	lea    -0x164(%ebp),%eax
 820adb0:	89 04 24             	mov    %eax,(%esp)
 820adb3:	e8 94 cf e7 ff       	call   8087d4c <_ZN5CSHA1D1Ev>
 820adb8:	89 d8                	mov    %ebx,%eax
 820adba:	81 c4 8c 01 00 00    	add    $0x18c,%esp
 820adc0:	5b                   	pop    %ebx
 820adc1:	5e                   	pop    %esi
 820adc2:	5f                   	pop    %edi
 820adc3:	5d                   	pop    %ebp
 820adc4:	c3                   	ret
 820adc5:	90                   	nop

```

```c
// Dispatcher_SecurityCardRetransfer::dispatch_sig @ 0x820a9a0

/* Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_SecurityCardRetransfer::dispatch_sig
          (Dispatcher_SecurityCardRetransfer *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CSecurityCard *pCVar4;
  uint uVar5;
  CPad *pCVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  byte bVar12;
  char acStackY_1062 [3782];
  CSHA1 local_168 [197];
  char local_a3 [41];
  char local_7a [39];
  char local_53;
  char local_52 [32];
  char local_32 [18];
  uint local_20 [4];
  
  bVar12 = 0;
  iVar2 = CUser::get_state(param_1);
  if (iVar2 != 3) {
    uVar3 = LineFunc(0xa6ac,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  local_20[0] = 0;
  local_32[6] = '\0';
  local_32[7] = '\0';
  local_32[8] = '\0';
  local_32[9] = '\0';
  local_32[10] = '\0';
  local_32[0xb] = '\0';
  local_32[0xc] = '\0';
  local_32[0xd] = '\0';
  local_32[0xe] = '\0';
  local_32[0xf] = '\0';
  local_32[0x10] = '\0';
  local_32[0x11] = '\0';
  cVar1 = PacketBuf::get_int(param_2,local_20);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa6b1,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  cVar1 = PacketBuf::get_str(param_2,local_32 + 6,0xc,local_20[0]);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa6b2,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  cVar1 = WongWork::CSecurityCardCenter::checkPhoneNumber
                    (GlobalData::s_securityCardCenter,local_32 + 6);
  if (cVar1 != '\x01') {
    uVar3 = LineFunc(0xa6b5,
                     "virtual int Dispatcher_SecurityCardRetransfer::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
    return uVar3;
  }
  memset(local_a3,0,0x29);
  CSHA1::CSHA1(local_168);
                    /* try { // try from 0820ab28 to 0820ad84 has its CatchHandler @ 0820ad8c */
  CSHA1::Update(local_168,(uchar *)(local_32 + 6),local_20[0]);
  CSHA1::Final(local_168);
  CSHA1::GetHexHash(local_168,local_a3);
  pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
  cVar1 = WongWork::CSecurityCard::isActivate(pCVar4);
  if (cVar1 != '\0') {
    pCVar4 = (CSecurityCard *)CUser::getSecurityCard(param_1);
    uVar5 = WongWork::CSecurityCard::getFailCnt(pCVar4);
    if (uVar5 < 3) {
      pCVar6 = (CPad *)CUser::getPad(param_1);
      cVar1 = Sanicova::CPad::isActivate(pCVar6);
      if (cVar1 != '\0') {
        pCVar6 = (CPad *)CUser::getPad(param_1);
        iVar2 = Sanicova::CPad::getFailCnt(pCVar6);
        if (2 < iVar2) {
          CUser::SendCmdErrorPacket(param_1,0xa4,0x88);
          goto LAB_0820adaa;
        }
        pCVar6 = (CPad *)CUser::getPad(param_1);
        cVar1 = Sanicova::CPad::isCertified(pCVar6);
        if (cVar1 != '\x01') {
          CUser::SendCmdErrorPacket(param_1,0xa4,0x86);
          goto LAB_0820adaa;
        }
      }
      local_32[0] = '\0';
      local_32[1] = '\0';
      local_32[2] = '\0';
      local_32[3] = '\0';
      local_32[4] = '\0';
      local_32[5] = '\0';
      pcVar10 = &local_53;
      uVar5 = 0x21;
      bVar11 = ((uint)pcVar10 & 1) != 0;
      if (bVar11) {
        local_53 = '\0';
        pcVar10 = local_52;
        uVar5 = 0x20;
      }
      if (((uint)pcVar10 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
        uVar5 = uVar5 - 2;
      }
      for (uVar9 = uVar5 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if ((uVar5 & 2) != 0) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
      }
      if (!bVar11) {
        *pcVar10 = '\0';
      }
      pcVar10 = local_7a;
      uVar5 = 0x27;
      bVar11 = ((uint)pcVar10 & 2) != 0;
      if (bVar11) {
        local_7a[0] = '\0';
        local_7a[1] = '\0';
        pcVar10 = local_7a + 2;
        uVar5 = 0x25;
      }
      for (uVar5 = uVar5 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10[2] = '\0';
        pcVar10[3] = '\0';
        pcVar10 = pcVar10 + ((uint)bVar12 * -2 + 1) * 4;
      }
      if (!bVar11) {
        pcVar10[0] = '\0';
        pcVar10[1] = '\0';
        pcVar10 = pcVar10 + 2;
      }
      *pcVar10 = '\0';
      pcVar10 = (char *)WongWork::CSecurityCardCenter::generateCardData
                                  (GlobalData::s_securityCardCenter,local_7a);
      pcVar7 = (char *)WongWork::CSecurityCardCenter::generateServerKey
                                 (GlobalData::s_securityCardCenter,&local_53);
      pcVar8 = (char *)WongWork::CSecurityCardCenter::generateCertKey
                                 (GlobalData::s_securityCardCenter,local_32);
      uVar5 = CUser::get_acc_id(param_1);
      iVar2 = CUser::GetUID(param_1);
      DB_SecurityCardRetransfer::makeRequest
                (iVar2,local_32 + 6,local_a3,uVar5,pcVar8,pcVar7,pcVar10);
    }
    else {
      CUser::SendCmdErrorPacket(param_1,0xa4,0x7a);
    }
  }
LAB_0820adaa:
  CSHA1::~CSHA1(local_168);
  return 0;
}

```

