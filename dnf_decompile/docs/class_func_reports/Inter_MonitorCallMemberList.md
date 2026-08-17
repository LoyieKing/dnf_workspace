# Inter_MonitorCallMemberList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cddac Inter_MonitorCallMemberList::dispatch_sig  [0x084cddac-0x84ce163] ===
 84cddac:	55                   	push   %ebp
 84cddad:	89 e5                	mov    %esp,%ebp
 84cddaf:	56                   	push   %esi
 84cddb0:	53                   	push   %ebx
 84cddb1:	83 ec 50             	sub    $0x50,%esp
 84cddb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cddb7:	89 04 24             	mov    %eax,(%esp)
 84cddba:	e8 cd c5 c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cddbf:	85 c0                	test   %eax,%eax
 84cddc1:	0f 94 c0             	sete   %al
 84cddc4:	84 c0                	test   %al,%al
 84cddc6:	74 0a                	je     84cddd2 <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x26>
 84cddc8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cddcd:	e9 88 03 00 00       	jmp    84ce15a <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x3ae>
 84cddd2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cddd5:	89 04 24             	mov    %eax,(%esp)
 84cddd8:	e8 e7 17 d6 ff       	call   822f5c4 <_ZN15CUserCharacInfo20get_charac_memberkeyEv>
 84cdddd:	85 c0                	test   %eax,%eax
 84cdddf:	0f 94 c0             	sete   %al
 84cdde2:	84 c0                	test   %al,%al
 84cdde4:	74 4d                	je     84cde33 <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x87>
 84cdde6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cdded:	ff 
 84cddee:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cddf1:	89 04 24             	mov    %eax,(%esp)
 84cddf4:	e8 a7 01 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cddf9:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cddfd:	c7 44 24 10 e0 87 c8 	movl   $0x8c887e0,0x10(%esp)
 84cde04:	08 
 84cde05:	c7 44 24 0c 8c 29 00 	movl   $0x298c,0xc(%esp)
 84cde0c:	00 
 84cde0d:	c7 44 24 08 00 d1 c8 	movl   $0x8c8d100,0x8(%esp)
 84cde14:	08 
 84cde15:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cde1c:	08 
 84cde1d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cde24:	e8 e1 5d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cde29:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cde2e:	e9 27 03 00 00       	jmp    84ce15a <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x3ae>
 84cde33:	8b 45 10             	mov    0x10(%ebp),%eax
 84cde36:	89 45 e0             	mov    %eax,-0x20(%ebp)
 84cde39:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cde40:	ff 
 84cde41:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cde44:	89 04 24             	mov    %eax,(%esp)
 84cde47:	e8 54 01 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cde4c:	89 c2                	mov    %eax,%edx
 84cde4e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cde51:	8b 40 0e             	mov    0xe(%eax),%eax
 84cde54:	39 c2                	cmp    %eax,%edx
 84cde56:	0f 95 c0             	setne  %al
 84cde59:	84 c0                	test   %al,%al
 84cde5b:	74 57                	je     84cdeb4 <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x108>
 84cde5d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cde60:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cde63:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cde6a:	ff 
 84cde6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cde6e:	89 04 24             	mov    %eax,(%esp)
 84cde71:	e8 2a 01 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cde76:	89 5c 24 18          	mov    %ebx,0x18(%esp)
 84cde7a:	89 44 24 14          	mov    %eax,0x14(%esp)
 84cde7e:	c7 44 24 10 4c 88 c8 	movl   $0x8c8884c,0x10(%esp)
 84cde85:	08 
 84cde86:	c7 44 24 0c 93 29 00 	movl   $0x2993,0xc(%esp)
 84cde8d:	00 
 84cde8e:	c7 44 24 08 00 d1 c8 	movl   $0x8c8d100,0x8(%esp)
 84cde95:	08 
 84cde96:	c7 44 24 04 9b 6f c8 	movl   $0x8c86f9b,0x4(%esp)
 84cde9d:	08 
 84cde9e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 84cdea5:	e8 60 5d 60 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 84cdeaa:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cdeaf:	e9 a6 02 00 00       	jmp    84ce15a <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x3ae>
 84cdeb4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdeb7:	89 04 24             	mov    %eax,(%esp)
 84cdeba:	e8 8d fe 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cdebf:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 84cdec6:	00 
 84cdec7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cdece:	00 
 84cdecf:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cded2:	89 04 24             	mov    %eax,(%esp)
 84cded5:	e8 22 da bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cdeda:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cdee1:	00 
 84cdee2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdee5:	89 04 24             	mov    %eax,(%esp)
 84cdee8:	e8 33 da bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cdeed:	8b 45 e0             	mov    -0x20(%ebp),%eax
 84cdef0:	83 c0 12             	add    $0x12,%eax
 84cdef3:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84cdef6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdef9:	0f b6 00             	movzbl (%eax),%eax
 84cdefc:	0f b6 c0             	movzbl %al,%eax
 84cdeff:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdf03:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdf06:	89 04 24             	mov    %eax,(%esp)
 84cdf09:	e8 12 da bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cdf0e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdf11:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84cdf15:	0f b6 c0             	movzbl %al,%eax
 84cdf18:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdf1c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdf1f:	89 04 24             	mov    %eax,(%esp)
 84cdf22:	e8 f9 d9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cdf27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdf2a:	83 c0 02             	add    $0x2,%eax
 84cdf2d:	89 04 24             	mov    %eax,(%esp)
 84cdf30:	e8 7b 04 bb ff       	call   807e3b0 <strlen@plt>
 84cdf35:	89 45 e8             	mov    %eax,-0x18(%ebp)
 84cdf38:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cdf3b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdf3f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdf42:	89 04 24             	mov    %eax,(%esp)
 84cdf45:	e8 f2 d9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cdf4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdf4d:	8d 50 02             	lea    0x2(%eax),%edx
 84cdf50:	8b 45 e8             	mov    -0x18(%ebp),%eax
 84cdf53:	89 44 24 08          	mov    %eax,0x8(%esp)
 84cdf57:	89 54 24 04          	mov    %edx,0x4(%esp)
 84cdf5b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdf5e:	89 04 24             	mov    %eax,(%esp)
 84cdf61:	e8 7e 94 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84cdf66:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdf69:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 84cdf6d:	0f be c0             	movsbl %al,%eax
 84cdf70:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdf74:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdf77:	89 04 24             	mov    %eax,(%esp)
 84cdf7a:	e8 a1 d9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cdf7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdf82:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 84cdf86:	0f b6 c0             	movzbl %al,%eax
 84cdf89:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdf8d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdf90:	89 04 24             	mov    %eax,(%esp)
 84cdf93:	e8 88 d9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cdf98:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdf9b:	8b 40 22             	mov    0x22(%eax),%eax
 84cdf9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdfa2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdfa5:	89 04 24             	mov    %eax,(%esp)
 84cdfa8:	e8 8f d9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cdfad:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdfb0:	8b 40 26             	mov    0x26(%eax),%eax
 84cdfb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdfb7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdfba:	89 04 24             	mov    %eax,(%esp)
 84cdfbd:	e8 7a d9 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84cdfc2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdfc5:	83 c0 2b             	add    $0x2b,%eax
 84cdfc8:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84cdfcb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84cdfce:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 84cdfd2:	0f b6 c0             	movzbl %al,%eax
 84cdfd5:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cdfd9:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84cdfdc:	89 04 24             	mov    %eax,(%esp)
 84cdfdf:	e8 3c d9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cdfe4:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84cdfeb:	e9 00 01 00 00       	jmp    84ce0f0 <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x344>
 84cdff0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84cdff3:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84cdff6:	03 45 ec             	add    -0x14(%ebp),%eax
 84cdff9:	0f b6 00             	movzbl (%eax),%eax
 84cdffc:	0f b6 c0             	movzbl %al,%eax
 84cdfff:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce003:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce006:	89 04 24             	mov    %eax,(%esp)
 84ce009:	e8 12 d9 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ce00e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce011:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce014:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce017:	0f b6 40 01          	movzbl 0x1(%eax),%eax
 84ce01b:	0f b6 c0             	movzbl %al,%eax
 84ce01e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce022:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce025:	89 04 24             	mov    %eax,(%esp)
 84ce028:	e8 f3 d8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ce02d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce030:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce033:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce036:	83 c0 02             	add    $0x2,%eax
 84ce039:	89 04 24             	mov    %eax,(%esp)
 84ce03c:	e8 6f 03 bb ff       	call   807e3b0 <strlen@plt>
 84ce041:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ce044:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce047:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce04b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce04e:	89 04 24             	mov    %eax,(%esp)
 84ce051:	e8 e6 d8 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce056:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce059:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce05c:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce05f:	8d 50 02             	lea    0x2(%eax),%edx
 84ce062:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ce065:	89 44 24 08          	mov    %eax,0x8(%esp)
 84ce069:	89 54 24 04          	mov    %edx,0x4(%esp)
 84ce06d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce070:	89 04 24             	mov    %eax,(%esp)
 84ce073:	e8 6c 93 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84ce078:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce07b:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce07e:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce081:	0f b6 40 20          	movzbl 0x20(%eax),%eax
 84ce085:	0f be c0             	movsbl %al,%eax
 84ce088:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce08c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce08f:	89 04 24             	mov    %eax,(%esp)
 84ce092:	e8 89 d8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ce097:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce09a:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce09d:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce0a0:	0f b6 40 21          	movzbl 0x21(%eax),%eax
 84ce0a4:	0f b6 c0             	movzbl %al,%eax
 84ce0a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce0ab:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce0ae:	89 04 24             	mov    %eax,(%esp)
 84ce0b1:	e8 6a d8 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ce0b6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce0b9:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce0bc:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce0bf:	8b 40 22             	mov    0x22(%eax),%eax
 84ce0c2:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce0c6:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce0c9:	89 04 24             	mov    %eax,(%esp)
 84ce0cc:	e8 6b d8 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce0d1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84ce0d4:	6b c0 2a             	imul   $0x2a,%eax,%eax
 84ce0d7:	03 45 ec             	add    -0x14(%ebp),%eax
 84ce0da:	8b 40 26             	mov    0x26(%eax),%eax
 84ce0dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce0e1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce0e4:	89 04 24             	mov    %eax,(%esp)
 84ce0e7:	e8 50 d8 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84ce0ec:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 84ce0f0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84ce0f3:	0f b6 40 2a          	movzbl 0x2a(%eax),%eax
 84ce0f7:	0f b6 c0             	movzbl %al,%eax
 84ce0fa:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 84ce0fd:	0f 9f c0             	setg   %al
 84ce100:	84 c0                	test   %al,%al
 84ce102:	0f 85 e8 fe ff ff    	jne    84cdff0 <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x244>
 84ce108:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ce10f:	00 
 84ce110:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce113:	89 04 24             	mov    %eax,(%esp)
 84ce116:	e8 3d d8 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ce11b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce11e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ce122:	8b 45 0c             	mov    0xc(%ebp),%eax
 84ce125:	89 04 24             	mov    %eax,(%esp)
 84ce128:	e8 8d a4 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ce12d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84ce132:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce135:	89 04 24             	mov    %eax,(%esp)
 84ce138:	e8 43 fd 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ce13d:	eb 1b                	jmp    84ce15a <_ZN27Inter_MonitorCallMemberList12dispatch_sigEP5CUserPci+0x3ae>
 84ce13f:	89 d3                	mov    %edx,%ebx
 84ce141:	89 c6                	mov    %eax,%esi
 84ce143:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84ce146:	89 04 24             	mov    %eax,(%esp)
 84ce149:	e8 32 fd 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ce14e:	89 f0                	mov    %esi,%eax
 84ce150:	89 da                	mov    %ebx,%edx
 84ce152:	89 04 24             	mov    %eax,(%esp)
 84ce155:	e8 f6 55 61 00       	call   8ae3750 <_Unwind_Resume>
 84ce15a:	89 d8                	mov    %ebx,%eax
 84ce15c:	83 c4 50             	add    $0x50,%esp
 84ce15f:	5b                   	pop    %ebx
 84ce160:	5e                   	pop    %esi
 84ce161:	5d                   	pop    %ebp
 84ce162:	c3                   	ret
 84ce163:	90                   	nop

```

```c
// Inter_MonitorCallMemberList::dispatch_sig @ 0x84cddac

/* Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorCallMemberList::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  int local_24;
  byte *local_20;
  size_t local_1c;
  byte *local_18;
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    iVar1 = CUserCharacInfo::get_charac_memberkey((CUserCharacInfo *)param_2);
    if (iVar1 == 0) {
      uVar2 = CUser::get_charac_no((CUser *)param_2,-1);
      LogManager::logFormat
                (1,"InterDispatcher.cpp",
                 "virtual int Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int)",0x298c,
                 "MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : 0 == pUser->get_charac_memberkey() (Char id : %d)"
                 ,uVar2);
    }
    else {
      local_24 = param_3;
      iVar1 = CUser::get_charac_no((CUser *)param_2,-1);
      if (iVar1 == *(int *)(local_24 + 0xe)) {
        PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084cded5 to 084ce12c has its CatchHandler @ 084ce13f */
        InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0x52);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
        local_20 = (byte *)(local_24 + 0x12);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*local_20);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_20[1]);
        local_1c = strlen((char *)(local_20 + 2));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_1c);
        InterfacePacketBuf::put_str((InterfacePacketBuf *)local_30,(char *)(local_20 + 2),local_1c);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(int)(char)local_20[0x20]);
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_20[0x21]);
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_20 + 0x22));
        InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*(int *)(local_20 + 0x26));
        local_18 = local_20 + 0x2b;
        InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)local_20[0x2a]);
        for (local_14 = 0; local_14 < (int)(uint)local_20[0x2a]; local_14 = local_14 + 1) {
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(uint)local_18[local_14 * 0x2a]);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(uint)local_18[local_14 * 0x2a + 1]);
          local_10 = strlen((char *)(local_18 + local_14 * 0x2a + 2));
          InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,local_10);
          InterfacePacketBuf::put_str
                    ((InterfacePacketBuf *)local_30,(char *)(local_18 + local_14 * 0x2a + 2),
                     local_10);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(int)(char)local_18[local_14 * 0x2a + 0x20]);
          InterfacePacketBuf::put_byte
                    ((InterfacePacketBuf *)local_30,(uint)local_18[local_14 * 0x2a + 0x21]);
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_30,*(int *)(local_18 + local_14 * 0x2a + 0x22));
          InterfacePacketBuf::put_int
                    ((InterfacePacketBuf *)local_30,*(int *)(local_18 + local_14 * 0x2a + 0x26));
        }
        InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
        CUser::Send((CUser *)param_2,local_30);
        PacketGuard::~PacketGuard(local_30);
      }
      else {
        uVar2 = *(undefined4 *)(local_24 + 0xe);
        uVar3 = CUser::get_charac_no((CUser *)param_2,-1);
        LogManager::logFormat
                  (1,"InterDispatcher.cpp",
                   "virtual int Inter_MonitorCallMemberList::dispatch_sig(CUser*, char*, int)",
                   0x2993,
                   "MEMBER : Inter_MonitorCallMemberList::dispatch_sig() : pUser->get_charac_no(%d) != recv->m_uCharID(%d)"
                   ,uVar3,uVar2);
      }
    }
  }
  return 0;
}

```

