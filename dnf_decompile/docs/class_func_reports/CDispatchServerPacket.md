# CDispatchServerPacket

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## dispatchAuctionPacket

```asm
// === 0847ac3c CDispatchServerPacket::dispatchAuctionPacket  [0x0847ac3c-0x847c1fd] ===
 847ac3c:	55                   	push   %ebp
 847ac3d:	89 e5                	mov    %esp,%ebp
 847ac3f:	56                   	push   %esi
 847ac40:	53                   	push   %ebx
 847ac41:	81 ec 10 01 00 00    	sub    $0x110,%esp
 847ac47:	8b 45 08             	mov    0x8(%ebp),%eax
 847ac4a:	89 04 24             	mov    %eax,(%esp)
 847ac4d:	e8 ba d0 e7 ff       	call   82f7d0c <_ZN3nsl13PACKET_HEADER11getPacketIDEv>
 847ac52:	89 45 84             	mov    %eax,-0x7c(%ebp)
 847ac55:	8b 45 08             	mov    0x8(%ebp),%eax
 847ac58:	89 04 24             	mov    %eax,(%esp)
 847ac5b:	e8 c8 d0 e7 ff       	call   82f7d28 <_ZN3nsl13PACKET_HEADER11getCategoryEv>
 847ac60:	89 45 88             	mov    %eax,-0x78(%ebp)
 847ac63:	83 7d 88 13          	cmpl   $0x13,-0x78(%ebp)
 847ac67:	75 15                	jne    847ac7e <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x42>
 847ac69:	8b 45 08             	mov    0x8(%ebp),%eax
 847ac6c:	89 04 24             	mov    %eax,(%esp)
 847ac6f:	e8 8a 15 00 00       	call   847c1fe <_ZN21CDispatchServerPacket19dispatchPointPacketEPc>
 847ac74:	b8 01 00 00 00       	mov    $0x1,%eax
 847ac79:	e9 76 15 00 00       	jmp    847c1f4 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b8>
 847ac7e:	83 7d 84 0e          	cmpl   $0xe,-0x7c(%ebp)
 847ac82:	0f 87 34 15 00 00    	ja     847c1bc <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x1580>
 847ac88:	8b 45 84             	mov    -0x7c(%ebp),%eax
 847ac8b:	c1 e0 02             	shl    $0x2,%eax
 847ac8e:	8b 80 64 01 c7 08    	mov    0x8c70164(%eax),%eax
 847ac94:	ff e0                	jmp    *%eax
 847ac96:	8b 45 08             	mov    0x8(%ebp),%eax
 847ac99:	89 45 8c             	mov    %eax,-0x74(%ebp)
 847ac9c:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847ac9f:	8b 40 0e             	mov    0xe(%eax),%eax
 847aca2:	85 c0                	test   %eax,%eax
 847aca4:	0f 85 ee 00 00 00    	jne    847ad98 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15c>
 847acaa:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847acaf:	c7 44 24 08 8f 12 00 	movl   $0x128f,0x8(%esp)
 847acb6:	00 
 847acb7:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847acbe:	08 
 847acbf:	89 04 24             	mov    %eax,(%esp)
 847acc2:	e8 bf 4d e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847acc7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847acce:	00 
 847accf:	89 44 24 04          	mov    %eax,0x4(%esp)
 847acd3:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 847acd9:	89 04 24             	mov    %eax,(%esp)
 847acdc:	e8 45 df c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847ace1:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 847ace7:	89 04 24             	mov    %eax,(%esp)
 847acea:	e8 57 df c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847acef:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847acf6:	00 
 847acf7:	89 04 24             	mov    %eax,(%esp)
 847acfa:	e8 57 df c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847acff:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 847ad05:	89 04 24             	mov    %eax,(%esp)
 847ad08:	e8 39 df c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ad0d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847ad14:	ff 
 847ad15:	89 04 24             	mov    %eax,(%esp)
 847ad18:	e8 39 df c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847ad1d:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 847ad23:	89 04 24             	mov    %eax,(%esp)
 847ad26:	e8 23 df c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847ad2b:	89 04 24             	mov    %eax,(%esp)
 847ad2e:	e8 1f 30 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847ad33:	89 45 90             	mov    %eax,-0x70(%ebp)
 847ad36:	8b 45 90             	mov    -0x70(%ebp),%eax
 847ad39:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847ad3f:	8b 45 90             	mov    -0x70(%ebp),%eax
 847ad42:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 847ad46:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847ad4b:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 847ad51:	89 54 24 08          	mov    %edx,0x8(%esp)
 847ad55:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ad5c:	00 
 847ad5d:	89 04 24             	mov    %eax,(%esp)
 847ad60:	e8 79 62 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847ad65:	eb 1e                	jmp    847ad85 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x149>
 847ad67:	89 d3                	mov    %edx,%ebx
 847ad69:	89 c6                	mov    %eax,%esi
 847ad6b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 847ad71:	89 04 24             	mov    %eax,(%esp)
 847ad74:	e8 59 1b 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ad79:	89 f0                	mov    %esi,%eax
 847ad7b:	89 da                	mov    %ebx,%edx
 847ad7d:	89 04 24             	mov    %eax,(%esp)
 847ad80:	e8 cb 89 66 00       	call   8ae3750 <_Unwind_Resume>
 847ad85:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 847ad8b:	89 04 24             	mov    %eax,(%esp)
 847ad8e:	e8 3f 1b 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ad93:	e9 57 14 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847ad98:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847ad9b:	8b 40 0e             	mov    0xe(%eax),%eax
 847ad9e:	83 f8 02             	cmp    $0x2,%eax
 847ada1:	75 0a                	jne    847adad <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x171>
 847ada3:	e8 b0 fa 1b 00       	call   863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>
 847ada8:	e9 42 14 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847adad:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847adb0:	8b 40 0e             	mov    0xe(%eax),%eax
 847adb3:	83 f8 01             	cmp    $0x1,%eax
 847adb6:	75 31                	jne    847ade9 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x1ad>
 847adb8:	c7 44 24 10 64 00 c7 	movl   $0x8c70064,0x10(%esp)
 847adbf:	08 
 847adc0:	c7 44 24 0c a3 12 00 	movl   $0x12a3,0xc(%esp)
 847adc7:	00 
 847adc8:	c7 44 24 08 c0 0e c7 	movl   $0x8c70ec0,0x8(%esp)
 847adcf:	08 
 847add0:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847add7:	08 
 847add8:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847addf:	e8 26 8e 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847ade4:	e9 06 14 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847ade9:	c7 44 24 10 88 00 c7 	movl   $0x8c70088,0x10(%esp)
 847adf0:	08 
 847adf1:	c7 44 24 0c a7 12 00 	movl   $0x12a7,0xc(%esp)
 847adf8:	00 
 847adf9:	c7 44 24 08 c0 0e c7 	movl   $0x8c70ec0,0x8(%esp)
 847ae00:	08 
 847ae01:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847ae08:	08 
 847ae09:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847ae10:	e8 f5 8d 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847ae15:	e9 d5 13 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847ae1a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847ae1f:	c7 44 24 08 b2 12 00 	movl   $0x12b2,0x8(%esp)
 847ae26:	00 
 847ae27:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847ae2e:	08 
 847ae2f:	89 04 24             	mov    %eax,(%esp)
 847ae32:	e8 4f 4c e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847ae37:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847ae3e:	00 
 847ae3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 847ae43:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 847ae49:	89 04 24             	mov    %eax,(%esp)
 847ae4c:	e8 d5 dd c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847ae51:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 847ae57:	89 04 24             	mov    %eax,(%esp)
 847ae5a:	e8 e7 dd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ae5f:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847ae66:	00 
 847ae67:	89 04 24             	mov    %eax,(%esp)
 847ae6a:	e8 e7 dd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847ae6f:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 847ae75:	89 04 24             	mov    %eax,(%esp)
 847ae78:	e8 c9 dd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ae7d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847ae84:	ff 
 847ae85:	89 04 24             	mov    %eax,(%esp)
 847ae88:	e8 c9 dd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847ae8d:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 847ae93:	89 04 24             	mov    %eax,(%esp)
 847ae96:	e8 b3 dd c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847ae9b:	89 04 24             	mov    %eax,(%esp)
 847ae9e:	e8 af 2e 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847aea3:	89 45 94             	mov    %eax,-0x6c(%ebp)
 847aea6:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847aea9:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847aeaf:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847aeb2:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 847aeb6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847aebb:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 847aec1:	89 54 24 08          	mov    %edx,0x8(%esp)
 847aec5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847aecc:	00 
 847aecd:	89 04 24             	mov    %eax,(%esp)
 847aed0:	e8 09 61 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847aed5:	eb 1e                	jmp    847aef5 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x2b9>
 847aed7:	89 d3                	mov    %edx,%ebx
 847aed9:	89 c6                	mov    %eax,%esi
 847aedb:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 847aee1:	89 04 24             	mov    %eax,(%esp)
 847aee4:	e8 e9 19 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847aee9:	89 f0                	mov    %esi,%eax
 847aeeb:	89 da                	mov    %ebx,%edx
 847aeed:	89 04 24             	mov    %eax,(%esp)
 847aef0:	e8 5b 88 66 00       	call   8ae3750 <_Unwind_Resume>
 847aef5:	8d 85 74 ff ff ff    	lea    -0x8c(%ebp),%eax
 847aefb:	89 04 24             	mov    %eax,(%esp)
 847aefe:	e8 cf 19 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847af03:	e9 e7 12 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847af08:	8b 45 08             	mov    0x8(%ebp),%eax
 847af0b:	89 45 98             	mov    %eax,-0x68(%ebp)
 847af0e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847af13:	c7 44 24 08 cd 12 00 	movl   $0x12cd,0x8(%esp)
 847af1a:	00 
 847af1b:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847af22:	08 
 847af23:	89 04 24             	mov    %eax,(%esp)
 847af26:	e8 5b 4b e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847af2b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847af32:	00 
 847af33:	89 44 24 04          	mov    %eax,0x4(%esp)
 847af37:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847af3d:	89 04 24             	mov    %eax,(%esp)
 847af40:	e8 e1 dc c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847af45:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847af4b:	89 04 24             	mov    %eax,(%esp)
 847af4e:	e8 f3 dc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847af53:	c7 44 24 04 f0 00 00 	movl   $0xf0,0x4(%esp)
 847af5a:	00 
 847af5b:	89 04 24             	mov    %eax,(%esp)
 847af5e:	e8 f3 dc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847af63:	8b 45 98             	mov    -0x68(%ebp),%eax
 847af66:	8b 58 12             	mov    0x12(%eax),%ebx
 847af69:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847af6f:	89 04 24             	mov    %eax,(%esp)
 847af72:	e8 cf dc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847af77:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847af7b:	89 04 24             	mov    %eax,(%esp)
 847af7e:	e8 d3 dc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847af83:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847af89:	89 04 24             	mov    %eax,(%esp)
 847af8c:	e8 bd dc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847af91:	89 04 24             	mov    %eax,(%esp)
 847af94:	e8 cf 2d 00 00       	call   847dd68 <_ZN12CStreamGuard11GetInBufferI28SIG_AUCTION_RESULT_ASK_PRICEEEPT_v>
 847af99:	89 45 9c             	mov    %eax,-0x64(%ebp)
 847af9c:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847af9f:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847afa5:	8b 45 98             	mov    -0x68(%ebp),%eax
 847afa8:	8b 50 16             	mov    0x16(%eax),%edx
 847afab:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847afae:	89 50 04             	mov    %edx,0x4(%eax)
 847afb1:	8b 45 98             	mov    -0x68(%ebp),%eax
 847afb4:	8b 50 1a             	mov    0x1a(%eax),%edx
 847afb7:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847afba:	89 50 08             	mov    %edx,0x8(%eax)
 847afbd:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 847afc4:	eb 35                	jmp    847affb <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x3bf>
 847afc6:	8b 55 a0             	mov    -0x60(%ebp),%edx
 847afc9:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 847afcc:	8b 45 98             	mov    -0x68(%ebp),%eax
 847afcf:	83 c1 04             	add    $0x4,%ecx
 847afd2:	8b 4c 88 0e          	mov    0xe(%eax,%ecx,4),%ecx
 847afd6:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847afd9:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 847afdd:	8b 4d a0             	mov    -0x60(%ebp),%ecx
 847afe0:	8b 55 a0             	mov    -0x60(%ebp),%edx
 847afe3:	8b 45 98             	mov    -0x68(%ebp),%eax
 847afe6:	83 c2 08             	add    $0x8,%edx
 847afe9:	8b 54 90 0a          	mov    0xa(%eax,%edx,4),%edx
 847afed:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847aff0:	83 c1 04             	add    $0x4,%ecx
 847aff3:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 847aff7:	83 45 a0 01          	addl   $0x1,-0x60(%ebp)
 847affb:	83 7d a0 02          	cmpl   $0x2,-0x60(%ebp)
 847afff:	0f 9e c0             	setle  %al
 847b002:	84 c0                	test   %al,%al
 847b004:	75 c0                	jne    847afc6 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x38a>
 847b006:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847b00b:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 847b011:	89 54 24 08          	mov    %edx,0x8(%esp)
 847b015:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847b01c:	00 
 847b01d:	89 04 24             	mov    %eax,(%esp)
 847b020:	e8 b9 5f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847b025:	eb 1e                	jmp    847b045 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x409>
 847b027:	89 d3                	mov    %edx,%ebx
 847b029:	89 c6                	mov    %eax,%esi
 847b02b:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847b031:	89 04 24             	mov    %eax,(%esp)
 847b034:	e8 99 18 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b039:	89 f0                	mov    %esi,%eax
 847b03b:	89 da                	mov    %ebx,%edx
 847b03d:	89 04 24             	mov    %eax,(%esp)
 847b040:	e8 0b 87 66 00       	call   8ae3750 <_Unwind_Resume>
 847b045:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847b04b:	89 04 24             	mov    %eax,(%esp)
 847b04e:	e8 7f 18 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b053:	e9 97 11 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847b058:	8b 45 08             	mov    0x8(%ebp),%eax
 847b05b:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 847b05e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847b063:	c7 44 24 08 f0 12 00 	movl   $0x12f0,0x8(%esp)
 847b06a:	00 
 847b06b:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b072:	08 
 847b073:	89 04 24             	mov    %eax,(%esp)
 847b076:	e8 0b 4a e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847b07b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847b082:	00 
 847b083:	89 44 24 04          	mov    %eax,0x4(%esp)
 847b087:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847b08d:	89 04 24             	mov    %eax,(%esp)
 847b090:	e8 91 db c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847b095:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847b09b:	89 04 24             	mov    %eax,(%esp)
 847b09e:	e8 a3 db c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b0a3:	c7 44 24 04 f1 00 00 	movl   $0xf1,0x4(%esp)
 847b0aa:	00 
 847b0ab:	89 04 24             	mov    %eax,(%esp)
 847b0ae:	e8 a3 db c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b0b3:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b0b6:	8b 58 12             	mov    0x12(%eax),%ebx
 847b0b9:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847b0bf:	89 04 24             	mov    %eax,(%esp)
 847b0c2:	e8 7f db c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b0c7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b0cb:	89 04 24             	mov    %eax,(%esp)
 847b0ce:	e8 83 db c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b0d3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847b0d9:	89 04 24             	mov    %eax,(%esp)
 847b0dc:	e8 6d db c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b0e1:	89 04 24             	mov    %eax,(%esp)
 847b0e4:	e8 95 2c 00 00       	call   847dd7e <_ZN12CStreamGuard11GetInBufferI40SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUMEEPT_v>
 847b0e9:	89 45 a8             	mov    %eax,-0x58(%ebp)
 847b0ec:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b0ef:	8b 50 16             	mov    0x16(%eax),%edx
 847b0f2:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b0f5:	89 50 04             	mov    %edx,0x4(%eax)
 847b0f8:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b0fb:	0f b7 50 1a          	movzwl 0x1a(%eax),%edx
 847b0ff:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b102:	66 89 50 08          	mov    %dx,0x8(%eax)
 847b106:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b109:	0f b6 50 1c          	movzbl 0x1c(%eax),%edx
 847b10d:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b110:	88 50 0a             	mov    %dl,0xa(%eax)
 847b113:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b116:	0f b7 50 1d          	movzwl 0x1d(%eax),%edx
 847b11a:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b11d:	66 89 50 0b          	mov    %dx,0xb(%eax)
 847b121:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b124:	8b 50 1f             	mov    0x1f(%eax),%edx
 847b127:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b12a:	89 50 0d             	mov    %edx,0xd(%eax)
 847b12d:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b130:	8b 50 23             	mov    0x23(%eax),%edx
 847b133:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b136:	89 50 11             	mov    %edx,0x11(%eax)
 847b139:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b13c:	8b 50 27             	mov    0x27(%eax),%edx
 847b13f:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b142:	89 50 15             	mov    %edx,0x15(%eax)
 847b145:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b148:	8b 50 2b             	mov    0x2b(%eax),%edx
 847b14b:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b14e:	89 50 19             	mov    %edx,0x19(%eax)
 847b151:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847b154:	8b 50 2f             	mov    0x2f(%eax),%edx
 847b157:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b15a:	89 50 1d             	mov    %edx,0x1d(%eax)
 847b15d:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b160:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 847b163:	8b 4a 33             	mov    0x33(%edx),%ecx
 847b166:	89 48 21             	mov    %ecx,0x21(%eax)
 847b169:	8b 4a 37             	mov    0x37(%edx),%ecx
 847b16c:	89 48 25             	mov    %ecx,0x25(%eax)
 847b16f:	8b 52 3b             	mov    0x3b(%edx),%edx
 847b172:	89 50 29             	mov    %edx,0x29(%eax)
 847b175:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847b178:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847b17e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847b183:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 847b189:	89 54 24 08          	mov    %edx,0x8(%esp)
 847b18d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847b194:	00 
 847b195:	89 04 24             	mov    %eax,(%esp)
 847b198:	e8 41 5e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847b19d:	eb 1e                	jmp    847b1bd <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x581>
 847b19f:	89 d3                	mov    %edx,%ebx
 847b1a1:	89 c6                	mov    %eax,%esi
 847b1a3:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847b1a9:	89 04 24             	mov    %eax,(%esp)
 847b1ac:	e8 21 17 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b1b1:	89 f0                	mov    %esi,%eax
 847b1b3:	89 da                	mov    %ebx,%edx
 847b1b5:	89 04 24             	mov    %eax,(%esp)
 847b1b8:	e8 93 85 66 00       	call   8ae3750 <_Unwind_Resume>
 847b1bd:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847b1c3:	89 04 24             	mov    %eax,(%esp)
 847b1c6:	e8 07 17 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b1cb:	e9 1f 10 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847b1d0:	8b 45 08             	mov    0x8(%ebp),%eax
 847b1d3:	89 45 ac             	mov    %eax,-0x54(%ebp)
 847b1d6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847b1db:	c7 44 24 08 19 13 00 	movl   $0x1319,0x8(%esp)
 847b1e2:	00 
 847b1e3:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b1ea:	08 
 847b1eb:	89 04 24             	mov    %eax,(%esp)
 847b1ee:	e8 93 48 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847b1f3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847b1fa:	00 
 847b1fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 847b1ff:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847b205:	89 04 24             	mov    %eax,(%esp)
 847b208:	e8 19 da c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847b20d:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847b213:	89 04 24             	mov    %eax,(%esp)
 847b216:	e8 2b da c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b21b:	c7 44 24 04 f2 00 00 	movl   $0xf2,0x4(%esp)
 847b222:	00 
 847b223:	89 04 24             	mov    %eax,(%esp)
 847b226:	e8 2b da c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b22b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847b22e:	8b 58 12             	mov    0x12(%eax),%ebx
 847b231:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847b237:	89 04 24             	mov    %eax,(%esp)
 847b23a:	e8 07 da c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b23f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b243:	89 04 24             	mov    %eax,(%esp)
 847b246:	e8 0b da c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b24b:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847b251:	89 04 24             	mov    %eax,(%esp)
 847b254:	e8 f5 d9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b259:	89 04 24             	mov    %eax,(%esp)
 847b25c:	e8 33 2b 00 00       	call   847dd94 <_ZN12CStreamGuard11GetInBufferI25SIG_AUCTION_RESULT_REGISTEEPT_v>
 847b261:	89 45 b0             	mov    %eax,-0x50(%ebp)
 847b264:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847b267:	8b 50 16             	mov    0x16(%eax),%edx
 847b26a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847b26d:	89 50 04             	mov    %edx,0x4(%eax)
 847b270:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847b273:	0f b6 50 1a          	movzbl 0x1a(%eax),%edx
 847b277:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847b27a:	88 50 08             	mov    %dl,0x8(%eax)
 847b27d:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847b280:	0f b6 50 1b          	movzbl 0x1b(%eax),%edx
 847b284:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847b287:	88 50 09             	mov    %dl,0x9(%eax)
 847b28a:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847b28d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847b293:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847b298:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 847b29e:	89 54 24 08          	mov    %edx,0x8(%esp)
 847b2a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847b2a9:	00 
 847b2aa:	89 04 24             	mov    %eax,(%esp)
 847b2ad:	e8 2c 5d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847b2b2:	eb 1e                	jmp    847b2d2 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x696>
 847b2b4:	89 d3                	mov    %edx,%ebx
 847b2b6:	89 c6                	mov    %eax,%esi
 847b2b8:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847b2be:	89 04 24             	mov    %eax,(%esp)
 847b2c1:	e8 0c 16 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b2c6:	89 f0                	mov    %esi,%eax
 847b2c8:	89 da                	mov    %ebx,%edx
 847b2ca:	89 04 24             	mov    %eax,(%esp)
 847b2cd:	e8 7e 84 66 00       	call   8ae3750 <_Unwind_Resume>
 847b2d2:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847b2d8:	89 04 24             	mov    %eax,(%esp)
 847b2db:	e8 f2 15 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b2e0:	e9 0a 0f 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847b2e5:	8b 45 08             	mov    0x8(%ebp),%eax
 847b2e8:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 847b2eb:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847b2f0:	c7 44 24 08 36 13 00 	movl   $0x1336,0x8(%esp)
 847b2f7:	00 
 847b2f8:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b2ff:	08 
 847b300:	89 04 24             	mov    %eax,(%esp)
 847b303:	e8 7e 47 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847b308:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847b30f:	00 
 847b310:	89 44 24 04          	mov    %eax,0x4(%esp)
 847b314:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847b31a:	89 04 24             	mov    %eax,(%esp)
 847b31d:	e8 04 d9 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847b322:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847b328:	89 04 24             	mov    %eax,(%esp)
 847b32b:	e8 16 d9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b330:	c7 44 24 04 f3 00 00 	movl   $0xf3,0x4(%esp)
 847b337:	00 
 847b338:	89 04 24             	mov    %eax,(%esp)
 847b33b:	e8 16 d9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b340:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847b343:	8b 58 12             	mov    0x12(%eax),%ebx
 847b346:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847b34c:	89 04 24             	mov    %eax,(%esp)
 847b34f:	e8 f2 d8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b354:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b358:	89 04 24             	mov    %eax,(%esp)
 847b35b:	e8 f6 d8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b360:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847b366:	89 04 24             	mov    %eax,(%esp)
 847b369:	e8 e0 d8 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b36e:	89 04 24             	mov    %eax,(%esp)
 847b371:	e8 34 2a 00 00       	call   847ddaa <_ZN12CStreamGuard11GetInBufferI26SIG_AUCTION_RESULT_BIDDINGEEPT_v>
 847b376:	89 45 b8             	mov    %eax,-0x48(%ebp)
 847b379:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847b37c:	8b 50 16             	mov    0x16(%eax),%edx
 847b37f:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847b382:	89 50 04             	mov    %edx,0x4(%eax)
 847b385:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847b388:	8b 50 1a             	mov    0x1a(%eax),%edx
 847b38b:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847b38e:	89 50 08             	mov    %edx,0x8(%eax)
 847b391:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847b394:	0f b6 50 1e          	movzbl 0x1e(%eax),%edx
 847b398:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847b39b:	88 50 0c             	mov    %dl,0xc(%eax)
 847b39e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847b3a1:	0f b6 50 1f          	movzbl 0x1f(%eax),%edx
 847b3a5:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847b3a8:	88 50 0d             	mov    %dl,0xd(%eax)
 847b3ab:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847b3ae:	8b 50 24             	mov    0x24(%eax),%edx
 847b3b1:	8b 40 20             	mov    0x20(%eax),%eax
 847b3b4:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 847b3b7:	89 41 0e             	mov    %eax,0xe(%ecx)
 847b3ba:	89 51 12             	mov    %edx,0x12(%ecx)
 847b3bd:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847b3c0:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847b3c6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847b3cb:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 847b3d1:	89 54 24 08          	mov    %edx,0x8(%esp)
 847b3d5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847b3dc:	00 
 847b3dd:	89 04 24             	mov    %eax,(%esp)
 847b3e0:	e8 f9 5b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847b3e5:	eb 1e                	jmp    847b405 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x7c9>
 847b3e7:	89 d3                	mov    %edx,%ebx
 847b3e9:	89 c6                	mov    %eax,%esi
 847b3eb:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847b3f1:	89 04 24             	mov    %eax,(%esp)
 847b3f4:	e8 d9 14 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b3f9:	89 f0                	mov    %esi,%eax
 847b3fb:	89 da                	mov    %ebx,%edx
 847b3fd:	89 04 24             	mov    %eax,(%esp)
 847b400:	e8 4b 83 66 00       	call   8ae3750 <_Unwind_Resume>
 847b405:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847b40b:	89 04 24             	mov    %eax,(%esp)
 847b40e:	e8 bf 14 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b413:	e9 d7 0d 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847b418:	8b 45 08             	mov    0x8(%ebp),%eax
 847b41b:	89 45 bc             	mov    %eax,-0x44(%ebp)
 847b41e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847b423:	c7 44 24 08 5a 13 00 	movl   $0x135a,0x8(%esp)
 847b42a:	00 
 847b42b:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b432:	08 
 847b433:	89 04 24             	mov    %eax,(%esp)
 847b436:	e8 4b 46 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847b43b:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847b442:	00 
 847b443:	89 44 24 04          	mov    %eax,0x4(%esp)
 847b447:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847b44d:	89 04 24             	mov    %eax,(%esp)
 847b450:	e8 d1 d7 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847b455:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847b45b:	89 04 24             	mov    %eax,(%esp)
 847b45e:	e8 e3 d7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b463:	c7 44 24 04 f4 00 00 	movl   $0xf4,0x4(%esp)
 847b46a:	00 
 847b46b:	89 04 24             	mov    %eax,(%esp)
 847b46e:	e8 e3 d7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b473:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847b476:	8b 58 12             	mov    0x12(%eax),%ebx
 847b479:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847b47f:	89 04 24             	mov    %eax,(%esp)
 847b482:	e8 bf d7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b487:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b48b:	89 04 24             	mov    %eax,(%esp)
 847b48e:	e8 c3 d7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b493:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847b499:	89 04 24             	mov    %eax,(%esp)
 847b49c:	e8 ad d7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b4a1:	89 04 24             	mov    %eax,(%esp)
 847b4a4:	e8 17 29 00 00       	call   847ddc0 <_ZN12CStreamGuard11GetInBufferI32SIG_AUCTION_RESULT_REGIST_CANCELEEPT_v>
 847b4a9:	89 45 c0             	mov    %eax,-0x40(%ebp)
 847b4ac:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847b4af:	8b 50 16             	mov    0x16(%eax),%edx
 847b4b2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 847b4b5:	89 50 04             	mov    %edx,0x4(%eax)
 847b4b8:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847b4bb:	0f b6 50 1a          	movzbl 0x1a(%eax),%edx
 847b4bf:	8b 45 c0             	mov    -0x40(%ebp),%eax
 847b4c2:	88 50 08             	mov    %dl,0x8(%eax)
 847b4c5:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847b4c8:	0f b6 50 1b          	movzbl 0x1b(%eax),%edx
 847b4cc:	8b 45 c0             	mov    -0x40(%ebp),%eax
 847b4cf:	88 50 09             	mov    %dl,0x9(%eax)
 847b4d2:	8b 45 c0             	mov    -0x40(%ebp),%eax
 847b4d5:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847b4db:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847b4e0:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 847b4e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 847b4ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847b4f1:	00 
 847b4f2:	89 04 24             	mov    %eax,(%esp)
 847b4f5:	e8 e4 5a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847b4fa:	eb 1e                	jmp    847b51a <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x8de>
 847b4fc:	89 d3                	mov    %edx,%ebx
 847b4fe:	89 c6                	mov    %eax,%esi
 847b500:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847b506:	89 04 24             	mov    %eax,(%esp)
 847b509:	e8 c4 13 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b50e:	89 f0                	mov    %esi,%eax
 847b510:	89 da                	mov    %ebx,%edx
 847b512:	89 04 24             	mov    %eax,(%esp)
 847b515:	e8 36 82 66 00       	call   8ae3750 <_Unwind_Resume>
 847b51a:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847b520:	89 04 24             	mov    %eax,(%esp)
 847b523:	e8 aa 13 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b528:	e9 c2 0c 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847b52d:	8b 45 08             	mov    0x8(%ebp),%eax
 847b530:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 847b533:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847b538:	c7 44 24 08 77 13 00 	movl   $0x1377,0x8(%esp)
 847b53f:	00 
 847b540:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b547:	08 
 847b548:	89 04 24             	mov    %eax,(%esp)
 847b54b:	e8 36 45 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847b550:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847b557:	00 
 847b558:	89 44 24 04          	mov    %eax,0x4(%esp)
 847b55c:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b562:	89 04 24             	mov    %eax,(%esp)
 847b565:	e8 bc d6 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847b56a:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b570:	89 04 24             	mov    %eax,(%esp)
 847b573:	e8 ce d6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b578:	c7 44 24 04 f5 00 00 	movl   $0xf5,0x4(%esp)
 847b57f:	00 
 847b580:	89 04 24             	mov    %eax,(%esp)
 847b583:	e8 ce d6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b588:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b58b:	8b 58 12             	mov    0x12(%eax),%ebx
 847b58e:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b594:	89 04 24             	mov    %eax,(%esp)
 847b597:	e8 aa d6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b59c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b5a0:	89 04 24             	mov    %eax,(%esp)
 847b5a3:	e8 ae d6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b5a8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b5ab:	8b 58 16             	mov    0x16(%eax),%ebx
 847b5ae:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b5b4:	89 04 24             	mov    %eax,(%esp)
 847b5b7:	e8 8a d6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b5bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b5c0:	89 04 24             	mov    %eax,(%esp)
 847b5c3:	e8 8e d6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b5c8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b5cb:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 847b5cf:	0f b6 d8             	movzbl %al,%ebx
 847b5d2:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b5d8:	89 04 24             	mov    %eax,(%esp)
 847b5db:	e8 66 d6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b5e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b5e4:	89 04 24             	mov    %eax,(%esp)
 847b5e7:	e8 68 1e fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847b5ec:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b5ef:	8b 58 1b             	mov    0x1b(%eax),%ebx
 847b5f2:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b5f8:	89 04 24             	mov    %eax,(%esp)
 847b5fb:	e8 46 d6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b600:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b604:	89 04 24             	mov    %eax,(%esp)
 847b607:	e8 86 6c c6 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 847b60c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b60f:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 847b613:	0f b7 c0             	movzwl %ax,%eax
 847b616:	69 c0 89 00 00 00    	imul   $0x89,%eax,%eax
 847b61c:	83 c0 02             	add    $0x2,%eax
 847b61f:	89 45 c8             	mov    %eax,-0x38(%ebp)
 847b622:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b628:	89 04 24             	mov    %eax,(%esp)
 847b62b:	e8 1e d6 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b630:	89 04 24             	mov    %eax,(%esp)
 847b633:	e8 c2 59 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b638:	89 04 24             	mov    %eax,(%esp)
 847b63b:	e8 c0 07 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847b640:	89 c3                	mov    %eax,%ebx
 847b642:	03 5d c8             	add    -0x38(%ebp),%ebx
 847b645:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b64b:	89 04 24             	mov    %eax,(%esp)
 847b64e:	e8 fb d5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b653:	89 04 24             	mov    %eax,(%esp)
 847b656:	e8 9f 59 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b65b:	89 04 24             	mov    %eax,(%esp)
 847b65e:	e8 65 07 1a 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847b663:	39 c3                	cmp    %eax,%ebx
 847b665:	0f 9f c0             	setg   %al
 847b668:	84 c0                	test   %al,%al
 847b66a:	74 45                	je     847b6b1 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xa75>
 847b66c:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b672:	89 04 24             	mov    %eax,(%esp)
 847b675:	e8 d4 d5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b67a:	89 04 24             	mov    %eax,(%esp)
 847b67d:	e8 78 59 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b682:	89 04 24             	mov    %eax,(%esp)
 847b685:	e8 76 07 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847b68a:	89 c3                	mov    %eax,%ebx
 847b68c:	03 5d c8             	add    -0x38(%ebp),%ebx
 847b68f:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b695:	89 04 24             	mov    %eax,(%esp)
 847b698:	e8 b1 d5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b69d:	89 04 24             	mov    %eax,(%esp)
 847b6a0:	e8 55 59 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b6a5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b6a9:	89 04 24             	mov    %eax,(%esp)
 847b6ac:	e8 37 08 1a 00       	call   861bee8 <_ZN6Stream6resizeEi>
 847b6b1:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b6b7:	89 04 24             	mov    %eax,(%esp)
 847b6ba:	e8 8f d5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b6bf:	89 04 24             	mov    %eax,(%esp)
 847b6c2:	e8 33 59 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b6c7:	89 04 24             	mov    %eax,(%esp)
 847b6ca:	e8 31 07 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847b6cf:	89 c3                	mov    %eax,%ebx
 847b6d1:	03 5d c8             	add    -0x38(%ebp),%ebx
 847b6d4:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b6da:	89 04 24             	mov    %eax,(%esp)
 847b6dd:	e8 6c d5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b6e2:	89 04 24             	mov    %eax,(%esp)
 847b6e5:	e8 10 59 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b6ea:	89 04 24             	mov    %eax,(%esp)
 847b6ed:	e8 d6 06 1a 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847b6f2:	39 c3                	cmp    %eax,%ebx
 847b6f4:	0f 9e c0             	setle  %al
 847b6f7:	84 c0                	test   %al,%al
 847b6f9:	74 5c                	je     847b757 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xb1b>
 847b6fb:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b6fe:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 847b702:	0f b7 d8             	movzwl %ax,%ebx
 847b705:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b70b:	89 04 24             	mov    %eax,(%esp)
 847b70e:	e8 33 d5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b713:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b717:	89 04 24             	mov    %eax,(%esp)
 847b71a:	e8 db 25 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847b71f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b722:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 847b726:	0f b7 c0             	movzwl %ax,%eax
 847b729:	69 c0 89 00 00 00    	imul   $0x89,%eax,%eax
 847b72f:	89 c3                	mov    %eax,%ebx
 847b731:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847b734:	8d 70 21             	lea    0x21(%eax),%esi
 847b737:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b73d:	89 04 24             	mov    %eax,(%esp)
 847b740:	e8 09 d5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b745:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847b749:	89 74 24 04          	mov    %esi,0x4(%esp)
 847b74d:	89 04 24             	mov    %eax,(%esp)
 847b750:	e8 fd 2e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847b755:	eb 4a                	jmp    847b7a1 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xb65>
 847b757:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b75d:	89 04 24             	mov    %eax,(%esp)
 847b760:	e8 e1 d4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b765:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847b76c:	00 
 847b76d:	89 04 24             	mov    %eax,(%esp)
 847b770:	e8 85 25 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847b775:	c7 44 24 10 a8 00 c7 	movl   $0x8c700a8,0x10(%esp)
 847b77c:	08 
 847b77d:	c7 44 24 0c 90 13 00 	movl   $0x1390,0xc(%esp)
 847b784:	00 
 847b785:	c7 44 24 08 c0 0e c7 	movl   $0x8c70ec0,0x8(%esp)
 847b78c:	08 
 847b78d:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b794:	08 
 847b795:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847b79c:	e8 69 84 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847b7a1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847b7a6:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 847b7ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 847b7b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847b7b7:	00 
 847b7b8:	89 04 24             	mov    %eax,(%esp)
 847b7bb:	e8 1e 58 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847b7c0:	eb 1e                	jmp    847b7e0 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xba4>
 847b7c2:	89 d3                	mov    %edx,%ebx
 847b7c4:	89 c6                	mov    %eax,%esi
 847b7c6:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b7cc:	89 04 24             	mov    %eax,(%esp)
 847b7cf:	e8 fe 10 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b7d4:	89 f0                	mov    %esi,%eax
 847b7d6:	89 da                	mov    %ebx,%edx
 847b7d8:	89 04 24             	mov    %eax,(%esp)
 847b7db:	e8 70 7f 66 00       	call   8ae3750 <_Unwind_Resume>
 847b7e0:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847b7e6:	89 04 24             	mov    %eax,(%esp)
 847b7e9:	e8 e4 10 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847b7ee:	e9 fc 09 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847b7f3:	8b 45 08             	mov    0x8(%ebp),%eax
 847b7f6:	89 45 cc             	mov    %eax,-0x34(%ebp)
 847b7f9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847b7fe:	c7 44 24 08 a3 13 00 	movl   $0x13a3,0x8(%esp)
 847b805:	00 
 847b806:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847b80d:	08 
 847b80e:	89 04 24             	mov    %eax,(%esp)
 847b811:	e8 70 42 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847b816:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847b81d:	00 
 847b81e:	89 44 24 04          	mov    %eax,0x4(%esp)
 847b822:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b828:	89 04 24             	mov    %eax,(%esp)
 847b82b:	e8 f6 d3 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847b830:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b836:	89 04 24             	mov    %eax,(%esp)
 847b839:	e8 08 d4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b83e:	c7 44 24 04 f6 00 00 	movl   $0xf6,0x4(%esp)
 847b845:	00 
 847b846:	89 04 24             	mov    %eax,(%esp)
 847b849:	e8 08 d4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b84e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b851:	8b 58 12             	mov    0x12(%eax),%ebx
 847b854:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b85a:	89 04 24             	mov    %eax,(%esp)
 847b85d:	e8 e4 d3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b862:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b866:	89 04 24             	mov    %eax,(%esp)
 847b869:	e8 e8 d3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b86e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b871:	8b 58 16             	mov    0x16(%eax),%ebx
 847b874:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b87a:	89 04 24             	mov    %eax,(%esp)
 847b87d:	e8 c4 d3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b882:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b886:	89 04 24             	mov    %eax,(%esp)
 847b889:	e8 c8 d3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847b88e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b891:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 847b895:	0f b6 d8             	movzbl %al,%ebx
 847b898:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b89e:	89 04 24             	mov    %eax,(%esp)
 847b8a1:	e8 a0 d3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b8a6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b8aa:	89 04 24             	mov    %eax,(%esp)
 847b8ad:	e8 a2 1b fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847b8b2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b8b5:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 847b8b9:	0f b6 c0             	movzbl %al,%eax
 847b8bc:	6b c0 75             	imul   $0x75,%eax,%eax
 847b8bf:	83 c0 01             	add    $0x1,%eax
 847b8c2:	89 45 d0             	mov    %eax,-0x30(%ebp)
 847b8c5:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b8cb:	89 04 24             	mov    %eax,(%esp)
 847b8ce:	e8 7b d3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b8d3:	89 04 24             	mov    %eax,(%esp)
 847b8d6:	e8 1f 57 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b8db:	89 04 24             	mov    %eax,(%esp)
 847b8de:	e8 1d 05 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847b8e3:	89 c3                	mov    %eax,%ebx
 847b8e5:	03 5d d0             	add    -0x30(%ebp),%ebx
 847b8e8:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b8ee:	89 04 24             	mov    %eax,(%esp)
 847b8f1:	e8 58 d3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b8f6:	89 04 24             	mov    %eax,(%esp)
 847b8f9:	e8 fc 56 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b8fe:	89 04 24             	mov    %eax,(%esp)
 847b901:	e8 c2 04 1a 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847b906:	39 c3                	cmp    %eax,%ebx
 847b908:	0f 9f c0             	setg   %al
 847b90b:	84 c0                	test   %al,%al
 847b90d:	74 45                	je     847b954 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xd18>
 847b90f:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b915:	89 04 24             	mov    %eax,(%esp)
 847b918:	e8 31 d3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b91d:	89 04 24             	mov    %eax,(%esp)
 847b920:	e8 d5 56 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b925:	89 04 24             	mov    %eax,(%esp)
 847b928:	e8 d3 04 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847b92d:	89 c3                	mov    %eax,%ebx
 847b92f:	03 5d d0             	add    -0x30(%ebp),%ebx
 847b932:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b938:	89 04 24             	mov    %eax,(%esp)
 847b93b:	e8 0e d3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b940:	89 04 24             	mov    %eax,(%esp)
 847b943:	e8 b2 56 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b948:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b94c:	89 04 24             	mov    %eax,(%esp)
 847b94f:	e8 94 05 1a 00       	call   861bee8 <_ZN6Stream6resizeEi>
 847b954:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b95a:	89 04 24             	mov    %eax,(%esp)
 847b95d:	e8 ec d2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b962:	89 04 24             	mov    %eax,(%esp)
 847b965:	e8 90 56 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b96a:	89 04 24             	mov    %eax,(%esp)
 847b96d:	e8 8e 04 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847b972:	89 c3                	mov    %eax,%ebx
 847b974:	03 5d d0             	add    -0x30(%ebp),%ebx
 847b977:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b97d:	89 04 24             	mov    %eax,(%esp)
 847b980:	e8 c9 d2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b985:	89 04 24             	mov    %eax,(%esp)
 847b988:	e8 6d 56 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847b98d:	89 04 24             	mov    %eax,(%esp)
 847b990:	e8 33 04 1a 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847b995:	39 c3                	cmp    %eax,%ebx
 847b997:	0f 9e c0             	setle  %al
 847b99a:	84 c0                	test   %al,%al
 847b99c:	74 59                	je     847b9f7 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xdbb>
 847b99e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b9a1:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 847b9a5:	0f b6 d8             	movzbl %al,%ebx
 847b9a8:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b9ae:	89 04 24             	mov    %eax,(%esp)
 847b9b1:	e8 90 d2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847b9b6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847b9ba:	89 04 24             	mov    %eax,(%esp)
 847b9bd:	e8 92 1a fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847b9c2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b9c5:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 847b9c9:	0f b6 c0             	movzbl %al,%eax
 847b9cc:	6b c0 75             	imul   $0x75,%eax,%eax
 847b9cf:	89 c3                	mov    %eax,%ebx
 847b9d1:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847b9d4:	8d 70 1c             	lea    0x1c(%eax),%esi
 847b9d7:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b9dd:	89 04 24             	mov    %eax,(%esp)
 847b9e0:	e8 69 d2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847b9e5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847b9e9:	89 74 24 04          	mov    %esi,0x4(%esp)
 847b9ed:	89 04 24             	mov    %eax,(%esp)
 847b9f0:	e8 5d 2c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847b9f5:	eb 4a                	jmp    847ba41 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xe05>
 847b9f7:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847b9fd:	89 04 24             	mov    %eax,(%esp)
 847ba00:	e8 41 d2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ba05:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847ba0c:	00 
 847ba0d:	89 04 24             	mov    %eax,(%esp)
 847ba10:	e8 e5 22 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847ba15:	c7 44 24 10 d0 00 c7 	movl   $0x8c700d0,0x10(%esp)
 847ba1c:	08 
 847ba1d:	c7 44 24 0c bb 13 00 	movl   $0x13bb,0xc(%esp)
 847ba24:	00 
 847ba25:	c7 44 24 08 c0 0e c7 	movl   $0x8c70ec0,0x8(%esp)
 847ba2c:	08 
 847ba2d:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847ba34:	08 
 847ba35:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847ba3c:	e8 c9 81 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847ba41:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847ba46:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 847ba4c:	89 54 24 08          	mov    %edx,0x8(%esp)
 847ba50:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ba57:	00 
 847ba58:	89 04 24             	mov    %eax,(%esp)
 847ba5b:	e8 7e 55 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847ba60:	eb 1e                	jmp    847ba80 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xe44>
 847ba62:	89 d3                	mov    %edx,%ebx
 847ba64:	89 c6                	mov    %eax,%esi
 847ba66:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847ba6c:	89 04 24             	mov    %eax,(%esp)
 847ba6f:	e8 5e 0e 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ba74:	89 f0                	mov    %esi,%eax
 847ba76:	89 da                	mov    %ebx,%edx
 847ba78:	89 04 24             	mov    %eax,(%esp)
 847ba7b:	e8 d0 7c 66 00       	call   8ae3750 <_Unwind_Resume>
 847ba80:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847ba86:	89 04 24             	mov    %eax,(%esp)
 847ba89:	e8 44 0e 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ba8e:	e9 5c 07 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847ba93:	8b 45 08             	mov    0x8(%ebp),%eax
 847ba96:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 847ba99:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847ba9e:	c7 44 24 08 ce 13 00 	movl   $0x13ce,0x8(%esp)
 847baa5:	00 
 847baa6:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847baad:	08 
 847baae:	89 04 24             	mov    %eax,(%esp)
 847bab1:	e8 d0 3f e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847bab6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847babd:	00 
 847babe:	89 44 24 04          	mov    %eax,0x4(%esp)
 847bac2:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bac8:	89 04 24             	mov    %eax,(%esp)
 847bacb:	e8 56 d1 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847bad0:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bad6:	89 04 24             	mov    %eax,(%esp)
 847bad9:	e8 68 d1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bade:	c7 44 24 04 f7 00 00 	movl   $0xf7,0x4(%esp)
 847bae5:	00 
 847bae6:	89 04 24             	mov    %eax,(%esp)
 847bae9:	e8 68 d1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847baee:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847baf1:	8b 58 12             	mov    0x12(%eax),%ebx
 847baf4:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bafa:	89 04 24             	mov    %eax,(%esp)
 847bafd:	e8 44 d1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bb02:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847bb06:	89 04 24             	mov    %eax,(%esp)
 847bb09:	e8 48 d1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bb0e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847bb11:	8b 58 16             	mov    0x16(%eax),%ebx
 847bb14:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bb1a:	89 04 24             	mov    %eax,(%esp)
 847bb1d:	e8 24 d1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bb22:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847bb26:	89 04 24             	mov    %eax,(%esp)
 847bb29:	e8 28 d1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bb2e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847bb31:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 847bb35:	0f b6 d8             	movzbl %al,%ebx
 847bb38:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bb3e:	89 04 24             	mov    %eax,(%esp)
 847bb41:	e8 00 d1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bb46:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847bb4a:	89 04 24             	mov    %eax,(%esp)
 847bb4d:	e8 02 19 fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847bb52:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847bb55:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 847bb59:	0f b7 c0             	movzwl %ax,%eax
 847bb5c:	6b c0 7d             	imul   $0x7d,%eax,%eax
 847bb5f:	83 c0 02             	add    $0x2,%eax
 847bb62:	89 45 d8             	mov    %eax,-0x28(%ebp)
 847bb65:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bb6b:	89 04 24             	mov    %eax,(%esp)
 847bb6e:	e8 db d0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bb73:	89 04 24             	mov    %eax,(%esp)
 847bb76:	e8 7f 54 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847bb7b:	89 04 24             	mov    %eax,(%esp)
 847bb7e:	e8 7d 02 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847bb83:	89 c3                	mov    %eax,%ebx
 847bb85:	03 5d d8             	add    -0x28(%ebp),%ebx
 847bb88:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bb8e:	89 04 24             	mov    %eax,(%esp)
 847bb91:	e8 b8 d0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bb96:	89 04 24             	mov    %eax,(%esp)
 847bb99:	e8 5c 54 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847bb9e:	89 04 24             	mov    %eax,(%esp)
 847bba1:	e8 22 02 1a 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847bba6:	39 c3                	cmp    %eax,%ebx
 847bba8:	0f 9f c0             	setg   %al
 847bbab:	84 c0                	test   %al,%al
 847bbad:	74 45                	je     847bbf4 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0xfb8>
 847bbaf:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bbb5:	89 04 24             	mov    %eax,(%esp)
 847bbb8:	e8 91 d0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bbbd:	89 04 24             	mov    %eax,(%esp)
 847bbc0:	e8 35 54 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847bbc5:	89 04 24             	mov    %eax,(%esp)
 847bbc8:	e8 33 02 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847bbcd:	89 c3                	mov    %eax,%ebx
 847bbcf:	03 5d d8             	add    -0x28(%ebp),%ebx
 847bbd2:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bbd8:	89 04 24             	mov    %eax,(%esp)
 847bbdb:	e8 6e d0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bbe0:	89 04 24             	mov    %eax,(%esp)
 847bbe3:	e8 12 54 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847bbe8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847bbec:	89 04 24             	mov    %eax,(%esp)
 847bbef:	e8 f4 02 1a 00       	call   861bee8 <_ZN6Stream6resizeEi>
 847bbf4:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bbfa:	89 04 24             	mov    %eax,(%esp)
 847bbfd:	e8 4c d0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bc02:	89 04 24             	mov    %eax,(%esp)
 847bc05:	e8 f0 53 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847bc0a:	89 04 24             	mov    %eax,(%esp)
 847bc0d:	e8 ee 01 1a 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847bc12:	89 c3                	mov    %eax,%ebx
 847bc14:	03 5d d8             	add    -0x28(%ebp),%ebx
 847bc17:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bc1d:	89 04 24             	mov    %eax,(%esp)
 847bc20:	e8 29 d0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bc25:	89 04 24             	mov    %eax,(%esp)
 847bc28:	e8 cd 53 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847bc2d:	89 04 24             	mov    %eax,(%esp)
 847bc30:	e8 93 01 1a 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847bc35:	39 c3                	cmp    %eax,%ebx
 847bc37:	0f 9e c0             	setle  %al
 847bc3a:	84 c0                	test   %al,%al
 847bc3c:	74 59                	je     847bc97 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x105b>
 847bc3e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847bc41:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 847bc45:	0f b7 d8             	movzwl %ax,%ebx
 847bc48:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bc4e:	89 04 24             	mov    %eax,(%esp)
 847bc51:	e8 f0 cf c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bc56:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847bc5a:	89 04 24             	mov    %eax,(%esp)
 847bc5d:	e8 98 20 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847bc62:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847bc65:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 847bc69:	0f b7 c0             	movzwl %ax,%eax
 847bc6c:	6b c0 7d             	imul   $0x7d,%eax,%eax
 847bc6f:	89 c3                	mov    %eax,%ebx
 847bc71:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847bc74:	8d 70 1d             	lea    0x1d(%eax),%esi
 847bc77:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bc7d:	89 04 24             	mov    %eax,(%esp)
 847bc80:	e8 c9 cf c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bc85:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847bc89:	89 74 24 04          	mov    %esi,0x4(%esp)
 847bc8d:	89 04 24             	mov    %eax,(%esp)
 847bc90:	e8 bd 29 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847bc95:	eb 4a                	jmp    847bce1 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x10a5>
 847bc97:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bc9d:	89 04 24             	mov    %eax,(%esp)
 847bca0:	e8 a1 cf c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bca5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847bcac:	00 
 847bcad:	89 04 24             	mov    %eax,(%esp)
 847bcb0:	e8 45 20 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847bcb5:	c7 44 24 10 04 01 c7 	movl   $0x8c70104,0x10(%esp)
 847bcbc:	08 
 847bcbd:	c7 44 24 0c e6 13 00 	movl   $0x13e6,0xc(%esp)
 847bcc4:	00 
 847bcc5:	c7 44 24 08 c0 0e c7 	movl   $0x8c70ec0,0x8(%esp)
 847bccc:	08 
 847bccd:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847bcd4:	08 
 847bcd5:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847bcdc:	e8 29 7f 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847bce1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847bce6:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 847bcec:	89 54 24 08          	mov    %edx,0x8(%esp)
 847bcf0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847bcf7:	00 
 847bcf8:	89 04 24             	mov    %eax,(%esp)
 847bcfb:	e8 de 52 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847bd00:	eb 1e                	jmp    847bd20 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x10e4>
 847bd02:	89 d3                	mov    %edx,%ebx
 847bd04:	89 c6                	mov    %eax,%esi
 847bd06:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bd0c:	89 04 24             	mov    %eax,(%esp)
 847bd0f:	e8 be 0b 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847bd14:	89 f0                	mov    %esi,%eax
 847bd16:	89 da                	mov    %ebx,%edx
 847bd18:	89 04 24             	mov    %eax,(%esp)
 847bd1b:	e8 30 7a 66 00       	call   8ae3750 <_Unwind_Resume>
 847bd20:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847bd26:	89 04 24             	mov    %eax,(%esp)
 847bd29:	e8 a4 0b 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847bd2e:	e9 bc 04 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847bd33:	8b 45 08             	mov    0x8(%ebp),%eax
 847bd36:	89 45 dc             	mov    %eax,-0x24(%ebp)
 847bd39:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847bd3e:	c7 44 24 08 2a 14 00 	movl   $0x142a,0x8(%esp)
 847bd45:	00 
 847bd46:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847bd4d:	08 
 847bd4e:	89 04 24             	mov    %eax,(%esp)
 847bd51:	e8 30 3d e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847bd56:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847bd5d:	00 
 847bd5e:	89 44 24 04          	mov    %eax,0x4(%esp)
 847bd62:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847bd68:	89 04 24             	mov    %eax,(%esp)
 847bd6b:	e8 b6 ce c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847bd70:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847bd76:	89 04 24             	mov    %eax,(%esp)
 847bd79:	e8 c8 ce c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bd7e:	c7 44 24 04 f8 00 00 	movl   $0xf8,0x4(%esp)
 847bd85:	00 
 847bd86:	89 04 24             	mov    %eax,(%esp)
 847bd89:	e8 c8 ce c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bd8e:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847bd91:	8b 58 12             	mov    0x12(%eax),%ebx
 847bd94:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847bd9a:	89 04 24             	mov    %eax,(%esp)
 847bd9d:	e8 a4 ce c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bda2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847bda6:	89 04 24             	mov    %eax,(%esp)
 847bda9:	e8 a8 ce c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bdae:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847bdb4:	89 04 24             	mov    %eax,(%esp)
 847bdb7:	e8 92 ce c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bdbc:	89 04 24             	mov    %eax,(%esp)
 847bdbf:	e8 12 20 00 00       	call   847ddd6 <_ZN12CStreamGuard11GetInBufferI26SIG_AUCTION_LOG_MESSAGE_AGEEPT_v>
 847bdc4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 847bdc7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847bdca:	0f b6 50 16          	movzbl 0x16(%eax),%edx
 847bdce:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847bdd1:	88 10                	mov    %dl,(%eax)
 847bdd3:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847bdd6:	8b 50 1b             	mov    0x1b(%eax),%edx
 847bdd9:	8b 40 17             	mov    0x17(%eax),%eax
 847bddc:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 847bddf:	89 41 01             	mov    %eax,0x1(%ecx)
 847bde2:	89 51 05             	mov    %edx,0x5(%ecx)
 847bde5:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847bde8:	8b 50 1f             	mov    0x1f(%eax),%edx
 847bdeb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847bdee:	89 50 09             	mov    %edx,0x9(%eax)
 847bdf1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847bdf4:	8b 50 23             	mov    0x23(%eax),%edx
 847bdf7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847bdfa:	89 50 0d             	mov    %edx,0xd(%eax)
 847bdfd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847be00:	8b 50 27             	mov    0x27(%eax),%edx
 847be03:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847be06:	89 50 11             	mov    %edx,0x11(%eax)
 847be09:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847be0c:	0f b6 50 2b          	movzbl 0x2b(%eax),%edx
 847be10:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847be13:	88 50 15             	mov    %dl,0x15(%eax)
 847be16:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847be19:	8b 50 2c             	mov    0x2c(%eax),%edx
 847be1c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847be1f:	89 50 16             	mov    %edx,0x16(%eax)
 847be22:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847be25:	0f b7 50 30          	movzwl 0x30(%eax),%edx
 847be29:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847be2c:	66 89 50 1a          	mov    %dx,0x1a(%eax)
 847be30:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847be33:	8b 50 32             	mov    0x32(%eax),%edx
 847be36:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847be39:	89 50 1c             	mov    %edx,0x1c(%eax)
 847be3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847be3f:	0f b6 50 36          	movzbl 0x36(%eax),%edx
 847be43:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847be46:	88 50 20             	mov    %dl,0x20(%eax)
 847be49:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847be4e:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 847be54:	89 54 24 08          	mov    %edx,0x8(%esp)
 847be58:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847be5f:	00 
 847be60:	89 04 24             	mov    %eax,(%esp)
 847be63:	e8 76 51 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847be68:	eb 1e                	jmp    847be88 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x124c>
 847be6a:	89 d3                	mov    %edx,%ebx
 847be6c:	89 c6                	mov    %eax,%esi
 847be6e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847be74:	89 04 24             	mov    %eax,(%esp)
 847be77:	e8 56 0a 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847be7c:	89 f0                	mov    %esi,%eax
 847be7e:	89 da                	mov    %ebx,%edx
 847be80:	89 04 24             	mov    %eax,(%esp)
 847be83:	e8 c8 78 66 00       	call   8ae3750 <_Unwind_Resume>
 847be88:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847be8e:	89 04 24             	mov    %eax,(%esp)
 847be91:	e8 3c 0a 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847be96:	e9 54 03 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847be9b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847bea0:	c7 44 24 08 47 14 00 	movl   $0x1447,0x8(%esp)
 847bea7:	00 
 847bea8:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847beaf:	08 
 847beb0:	89 04 24             	mov    %eax,(%esp)
 847beb3:	e8 ce 3b e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847beb8:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847bebf:	00 
 847bec0:	89 44 24 04          	mov    %eax,0x4(%esp)
 847bec4:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847beca:	89 04 24             	mov    %eax,(%esp)
 847becd:	e8 54 cd c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847bed2:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847bed8:	89 04 24             	mov    %eax,(%esp)
 847bedb:	e8 66 cd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bee0:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847bee7:	00 
 847bee8:	89 04 24             	mov    %eax,(%esp)
 847beeb:	e8 66 cd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bef0:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847bef6:	89 04 24             	mov    %eax,(%esp)
 847bef9:	e8 48 cd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847befe:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847bf05:	ff 
 847bf06:	89 04 24             	mov    %eax,(%esp)
 847bf09:	e8 48 cd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bf0e:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847bf14:	89 04 24             	mov    %eax,(%esp)
 847bf17:	e8 32 cd c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847bf1c:	89 04 24             	mov    %eax,(%esp)
 847bf1f:	e8 2e 1e 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847bf24:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847bf27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847bf2a:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 847bf2e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847bf31:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847bf37:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847bf3c:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 847bf42:	89 54 24 08          	mov    %edx,0x8(%esp)
 847bf46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847bf4d:	00 
 847bf4e:	89 04 24             	mov    %eax,(%esp)
 847bf51:	e8 88 50 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847bf56:	eb 1e                	jmp    847bf76 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x133a>
 847bf58:	89 d3                	mov    %edx,%ebx
 847bf5a:	89 c6                	mov    %eax,%esi
 847bf5c:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847bf62:	89 04 24             	mov    %eax,(%esp)
 847bf65:	e8 68 09 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847bf6a:	89 f0                	mov    %esi,%eax
 847bf6c:	89 da                	mov    %ebx,%edx
 847bf6e:	89 04 24             	mov    %eax,(%esp)
 847bf71:	e8 da 77 66 00       	call   8ae3750 <_Unwind_Resume>
 847bf76:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847bf7c:	89 04 24             	mov    %eax,(%esp)
 847bf7f:	e8 4e 09 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847bf84:	e9 66 02 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847bf89:	8b 45 08             	mov    0x8(%ebp),%eax
 847bf8c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 847bf8f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847bf92:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 847bf96:	84 c0                	test   %al,%al
 847bf98:	0f 84 ee 00 00 00    	je     847c08c <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x1450>
 847bf9e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847bfa3:	c7 44 24 08 64 14 00 	movl   $0x1464,0x8(%esp)
 847bfaa:	00 
 847bfab:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847bfb2:	08 
 847bfb3:	89 04 24             	mov    %eax,(%esp)
 847bfb6:	e8 cb 3a e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847bfbb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847bfc2:	00 
 847bfc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 847bfc7:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847bfcd:	89 04 24             	mov    %eax,(%esp)
 847bfd0:	e8 51 cc c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847bfd5:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847bfdb:	89 04 24             	mov    %eax,(%esp)
 847bfde:	e8 63 cc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847bfe3:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847bfea:	00 
 847bfeb:	89 04 24             	mov    %eax,(%esp)
 847bfee:	e8 63 cc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847bff3:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847bff9:	89 04 24             	mov    %eax,(%esp)
 847bffc:	e8 45 cc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c001:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847c008:	ff 
 847c009:	89 04 24             	mov    %eax,(%esp)
 847c00c:	e8 45 cc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c011:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847c017:	89 04 24             	mov    %eax,(%esp)
 847c01a:	e8 2f cc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c01f:	89 04 24             	mov    %eax,(%esp)
 847c022:	e8 2b 1d 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847c027:	89 45 ec             	mov    %eax,-0x14(%ebp)
 847c02a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847c02d:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 847c031:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847c034:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 847c03a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c03f:	8d 95 1c ff ff ff    	lea    -0xe4(%ebp),%edx
 847c045:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c049:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c050:	00 
 847c051:	89 04 24             	mov    %eax,(%esp)
 847c054:	e8 85 4f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c059:	eb 1e                	jmp    847c079 <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x143d>
 847c05b:	89 d3                	mov    %edx,%ebx
 847c05d:	89 c6                	mov    %eax,%esi
 847c05f:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847c065:	89 04 24             	mov    %eax,(%esp)
 847c068:	e8 65 08 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c06d:	89 f0                	mov    %esi,%eax
 847c06f:	89 da                	mov    %ebx,%edx
 847c071:	89 04 24             	mov    %eax,(%esp)
 847c074:	e8 d7 76 66 00       	call   8ae3750 <_Unwind_Resume>
 847c079:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847c07f:	89 04 24             	mov    %eax,(%esp)
 847c082:	e8 4b 08 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c087:	e9 63 01 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847c08c:	e8 c7 e7 1b 00       	call   863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>
 847c091:	e9 59 01 00 00       	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847c096:	8b 45 08             	mov    0x8(%ebp),%eax
 847c099:	89 45 f0             	mov    %eax,-0x10(%ebp)
 847c09c:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c0a1:	c7 44 24 08 85 14 00 	movl   $0x1485,0x8(%esp)
 847c0a8:	00 
 847c0a9:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c0b0:	08 
 847c0b1:	89 04 24             	mov    %eax,(%esp)
 847c0b4:	e8 cd 39 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c0b9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c0c0:	00 
 847c0c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c0c5:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847c0cb:	89 04 24             	mov    %eax,(%esp)
 847c0ce:	e8 53 cb c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c0d3:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847c0d9:	89 04 24             	mov    %eax,(%esp)
 847c0dc:	e8 65 cb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c0e1:	c7 44 24 04 0d 02 00 	movl   $0x20d,0x4(%esp)
 847c0e8:	00 
 847c0e9:	89 04 24             	mov    %eax,(%esp)
 847c0ec:	e8 65 cb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c0f1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847c0f4:	8b 58 12             	mov    0x12(%eax),%ebx
 847c0f7:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847c0fd:	89 04 24             	mov    %eax,(%esp)
 847c100:	e8 41 cb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c105:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847c109:	89 04 24             	mov    %eax,(%esp)
 847c10c:	e8 45 cb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c111:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847c117:	89 04 24             	mov    %eax,(%esp)
 847c11a:	e8 2f cb c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c11f:	89 04 24             	mov    %eax,(%esp)
 847c122:	e8 c5 1c 00 00       	call   847ddec <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_RESULT_BUY_ITEM_APIECEEEPT_v>
 847c127:	89 45 f4             	mov    %eax,-0xc(%ebp)
 847c12a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847c12d:	8b 50 16             	mov    0x16(%eax),%edx
 847c130:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847c133:	89 10                	mov    %edx,(%eax)
 847c135:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847c138:	8b 50 1a             	mov    0x1a(%eax),%edx
 847c13b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847c13e:	89 50 04             	mov    %edx,0x4(%eax)
 847c141:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847c144:	0f b6 50 1e          	movzbl 0x1e(%eax),%edx
 847c148:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847c14b:	88 50 08             	mov    %dl,0x8(%eax)
 847c14e:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847c151:	0f b6 50 1f          	movzbl 0x1f(%eax),%edx
 847c155:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847c158:	88 50 09             	mov    %dl,0x9(%eax)
 847c15b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847c15e:	8b 50 24             	mov    0x24(%eax),%edx
 847c161:	8b 40 20             	mov    0x20(%eax),%eax
 847c164:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 847c167:	89 41 0a             	mov    %eax,0xa(%ecx)
 847c16a:	89 51 0e             	mov    %edx,0xe(%ecx)
 847c16d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c172:	8d 95 14 ff ff ff    	lea    -0xec(%ebp),%edx
 847c178:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c17c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c183:	00 
 847c184:	89 04 24             	mov    %eax,(%esp)
 847c187:	e8 52 4e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c18c:	eb 1e                	jmp    847c1ac <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x1570>
 847c18e:	89 d3                	mov    %edx,%ebx
 847c190:	89 c6                	mov    %eax,%esi
 847c192:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847c198:	89 04 24             	mov    %eax,(%esp)
 847c19b:	e8 32 07 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c1a0:	89 f0                	mov    %esi,%eax
 847c1a2:	89 da                	mov    %ebx,%edx
 847c1a4:	89 04 24             	mov    %eax,(%esp)
 847c1a7:	e8 a4 75 66 00       	call   8ae3750 <_Unwind_Resume>
 847c1ac:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847c1b2:	89 04 24             	mov    %eax,(%esp)
 847c1b5:	e8 18 07 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c1ba:	eb 33                	jmp    847c1ef <_ZN21CDispatchServerPacket21dispatchAuctionPacketEPc+0x15b3>
 847c1bc:	8b 45 84             	mov    -0x7c(%ebp),%eax
 847c1bf:	89 44 24 14          	mov    %eax,0x14(%esp)
 847c1c3:	c7 44 24 10 34 01 c7 	movl   $0x8c70134,0x10(%esp)
 847c1ca:	08 
 847c1cb:	c7 44 24 0c 9c 14 00 	movl   $0x149c,0xc(%esp)
 847c1d2:	00 
 847c1d3:	c7 44 24 08 c0 0e c7 	movl   $0x8c70ec0,0x8(%esp)
 847c1da:	08 
 847c1db:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c1e2:	08 
 847c1e3:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847c1ea:	e8 1b 7a 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847c1ef:	b8 01 00 00 00       	mov    $0x1,%eax
 847c1f4:	81 c4 10 01 00 00    	add    $0x110,%esp
 847c1fa:	5b                   	pop    %ebx
 847c1fb:	5e                   	pop    %esi
 847c1fc:	5d                   	pop    %ebp
 847c1fd:	c3                   	ret

```

```c
// CDispatchServerPacket::dispatchAuctionPacket @ 0x847ac3c

/* CDispatchServerPacket::dispatchAuctionPacket(char*) */

undefined4 CDispatchServerPacket::dispatchAuctionPacket(char *param_1)

{
  char *pcVar1;
  byte bVar2;
  uchar uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  Stream *pSVar9;
  CStreamGuard *pCVar10;
  CStreamGuard local_f0 [8];
  CStreamGuard local_e8 [8];
  CStreamGuard local_e0 [8];
  CStreamGuard local_d8 [8];
  CStreamGuard local_d0 [8];
  CStreamGuard local_c8 [8];
  CStreamGuard local_c0 [8];
  CStreamGuard local_b8 [8];
  CStreamGuard local_b0 [8];
  CStreamGuard local_a8 [8];
  CStreamGuard local_a0 [8];
  CStreamGuard local_98 [8];
  CStreamGuard local_90 [8];
  CStreamGuard local_88 [8];
  undefined4 local_80;
  int local_7c;
  char *local_78;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_74;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_70;
  char *local_6c;
  SIG_AUCTION_RESULT_ASK_PRICE *local_68;
  int local_64;
  char *local_60;
  SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *local_5c;
  char *local_58;
  SIG_AUCTION_RESULT_REGIST *local_54;
  char *local_50;
  SIG_AUCTION_RESULT_BIDDING *local_4c;
  char *local_48;
  SIG_AUCTION_RESULT_REGIST_CANCEL *local_44;
  char *local_40;
  int local_3c;
  char *local_38;
  int local_34;
  char *local_30;
  int local_2c;
  char *local_28;
  SIG_AUCTION_LOG_MESSAGE_AG *local_24;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_20;
  char *local_1c;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_18;
  char *local_14;
  SIG_AUCTION_RESULT_BUY_ITEM_APIECE *local_10;
  
  local_80 = nsl::PACKET_HEADER::getPacketID((PACKET_HEADER *)param_1);
  local_7c = nsl::PACKET_HEADER::getCategory((PACKET_HEADER *)param_1);
  if (local_7c == 0x13) {
    dispatchPointPacket(param_1);
  }
  else {
    switch(local_80) {
    case 0:
      local_78 = param_1;
      if (*(int *)(param_1 + 0xe) == 0) {
        pSVar9 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x128f);
        CStreamGuard::CStreamGuard(local_88,pSVar9,true);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_88);
                    /* try { // try from 0847acfa to 0847ad64 has its CatchHandler @ 0847ad67 */
        CStreamGuard::operator<<(pCVar10,0xf9);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_88);
        CStreamGuard::operator<<(pCVar10,-1);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_88);
        local_74 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
        *(undefined4 *)local_74 = 0;
        local_74[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_88);
        CStreamGuard::~CStreamGuard(local_88);
      }
      else if (*(int *)(param_1 + 0xe) == 2) {
        Timer_CheckAuctionReady::RegistNextTimer();
      }
      else if (*(int *)(param_1 + 0xe) == 1) {
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x12a3,
                   "AUCTION REGIST SERVER ID DUPLICATE");
      }
      else {
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x12a7,
                   "AUCTION REGIST UNHANDLED ERROR");
      }
      break;
    case 1:
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x12b2);
      CStreamGuard::CStreamGuard(local_90,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_90);
                    /* try { // try from 0847ae6a to 0847aed4 has its CatchHandler @ 0847aed7 */
      CStreamGuard::operator<<(pCVar10,0xf9);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_90);
      CStreamGuard::operator<<(pCVar10,-1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_90);
      local_70 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
      *(undefined4 *)local_70 = 0;
      local_70[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_90);
      CStreamGuard::~CStreamGuard(local_90);
      break;
    case 2:
      local_6c = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x12cd);
      CStreamGuard::CStreamGuard(local_98,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_98);
                    /* try { // try from 0847af5e to 0847b024 has its CatchHandler @ 0847b027 */
      CStreamGuard::operator<<(pCVar10,0xf0);
      iVar7 = *(int *)(local_6c + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_98);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_98);
      local_68 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_PRICE>(pCVar10);
      *(undefined4 *)local_68 = 0;
      *(undefined4 *)(local_68 + 4) = *(undefined4 *)(local_6c + 0x16);
      *(undefined4 *)(local_68 + 8) = *(undefined4 *)(local_6c + 0x1a);
      for (local_64 = 0; local_64 < 3; local_64 = local_64 + 1) {
        *(undefined4 *)(local_68 + local_64 * 4 + 0xc) =
             *(undefined4 *)(local_6c + (local_64 + 4) * 4 + 0xe);
        *(undefined4 *)(local_68 + (local_64 + 4) * 4 + 8) =
             *(undefined4 *)(local_6c + (local_64 + 8) * 4 + 10);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_98);
      CStreamGuard::~CStreamGuard(local_98);
      break;
    case 3:
      local_60 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x12f0);
      CStreamGuard::CStreamGuard(local_a0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
                    /* try { // try from 0847b0ae to 0847b19c has its CatchHandler @ 0847b19f */
      CStreamGuard::operator<<(pCVar10,0xf1);
      iVar7 = *(int *)(local_60 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_a0);
      local_5c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM>(pCVar10);
      *(undefined4 *)(local_5c + 4) = *(undefined4 *)(local_60 + 0x16);
      *(undefined2 *)(local_5c + 8) = *(undefined2 *)(local_60 + 0x1a);
      local_5c[10] = *(SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *)(local_60 + 0x1c);
      *(undefined2 *)(local_5c + 0xb) = *(undefined2 *)(local_60 + 0x1d);
      *(undefined4 *)(local_5c + 0xd) = *(undefined4 *)(local_60 + 0x1f);
      *(undefined4 *)(local_5c + 0x11) = *(undefined4 *)(local_60 + 0x23);
      *(undefined4 *)(local_5c + 0x15) = *(undefined4 *)(local_60 + 0x27);
      *(undefined4 *)(local_5c + 0x19) = *(undefined4 *)(local_60 + 0x2b);
      *(undefined4 *)(local_5c + 0x1d) = *(undefined4 *)(local_60 + 0x2f);
      *(undefined4 *)(local_5c + 0x21) = *(undefined4 *)(local_60 + 0x33);
      *(undefined4 *)(local_5c + 0x25) = *(undefined4 *)(local_60 + 0x37);
      *(undefined4 *)(local_5c + 0x29) = *(undefined4 *)(local_60 + 0x3b);
      *(undefined4 *)local_5c = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a0);
      CStreamGuard::~CStreamGuard(local_a0);
      break;
    case 4:
      local_58 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1319);
      CStreamGuard::CStreamGuard(local_a8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
                    /* try { // try from 0847b226 to 0847b2b1 has its CatchHandler @ 0847b2b4 */
      CStreamGuard::operator<<(pCVar10,0xf2);
      iVar7 = *(int *)(local_58 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_a8);
      local_54 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST>(pCVar10);
      *(undefined4 *)(local_54 + 4) = *(undefined4 *)(local_58 + 0x16);
      local_54[8] = *(SIG_AUCTION_RESULT_REGIST *)(local_58 + 0x1a);
      local_54[9] = *(SIG_AUCTION_RESULT_REGIST *)(local_58 + 0x1b);
      *(undefined4 *)local_54 = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a8);
      CStreamGuard::~CStreamGuard(local_a8);
      break;
    case 5:
      local_50 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1336);
      CStreamGuard::CStreamGuard(local_b0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
                    /* try { // try from 0847b33b to 0847b3e4 has its CatchHandler @ 0847b3e7 */
      CStreamGuard::operator<<(pCVar10,0xf3);
      iVar7 = *(int *)(local_50 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_b0);
      local_4c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_BIDDING>(pCVar10);
      *(undefined4 *)(local_4c + 4) = *(undefined4 *)(local_50 + 0x16);
      *(undefined4 *)(local_4c + 8) = *(undefined4 *)(local_50 + 0x1a);
      local_4c[0xc] = *(SIG_AUCTION_RESULT_BIDDING *)(local_50 + 0x1e);
      local_4c[0xd] = *(SIG_AUCTION_RESULT_BIDDING *)(local_50 + 0x1f);
      uVar6 = *(undefined4 *)(local_50 + 0x24);
      *(undefined4 *)(local_4c + 0xe) = *(undefined4 *)(local_50 + 0x20);
      *(undefined4 *)(local_4c + 0x12) = uVar6;
      *(undefined4 *)local_4c = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b0);
      CStreamGuard::~CStreamGuard(local_b0);
      break;
    case 6:
      local_48 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x135a);
      CStreamGuard::CStreamGuard(local_b8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
                    /* try { // try from 0847b46e to 0847b4f9 has its CatchHandler @ 0847b4fc */
      CStreamGuard::operator<<(pCVar10,0xf4);
      iVar7 = *(int *)(local_48 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_b8);
      local_44 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST_CANCEL>(pCVar10);
      *(undefined4 *)(local_44 + 4) = *(undefined4 *)(local_48 + 0x16);
      local_44[8] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_48 + 0x1a);
      local_44[9] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_48 + 0x1b);
      *(undefined4 *)local_44 = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b8);
      CStreamGuard::~CStreamGuard(local_b8);
      break;
    case 7:
      local_40 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1377);
      CStreamGuard::CStreamGuard(local_c0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
                    /* try { // try from 0847b583 to 0847b7bf has its CatchHandler @ 0847b7c2 */
      CStreamGuard::operator<<(pCVar10,0xf5);
      iVar7 = *(int *)(local_40 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      iVar7 = *(int *)(local_40 + 0x16);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      uVar3 = local_40[0x1a];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,uVar3);
      uVar5 = *(uint *)(local_40 + 0x1b);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
      CStreamGuard::operator<<(pCVar10,uVar5);
      local_3c = (uint)*(ushort *)(local_40 + 0x1f) * 0x89 + 2;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_3c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        iVar7 = Stream::in_ptr(pSVar9);
        iVar7 = iVar7 + local_3c;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        Stream::resize(pSVar9,iVar7);
      }
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_3c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
        CStreamGuard::operator<<(pCVar10,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x1390,
                   "onAUCTION_ITEM_LIST_AG, resize failed.");
      }
      else {
        uVar4 = *(ushort *)(local_40 + 0x1f);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
        CStreamGuard::operator<<(pCVar10,uVar4);
        uVar4 = *(ushort *)(local_40 + 0x1f);
        pcVar1 = local_40 + 0x21;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
        CStreamGuard::put_binary(pCVar10,pcVar1,(uint)uVar4 * 0x89);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c0);
      CStreamGuard::~CStreamGuard(local_c0);
      break;
    case 8:
      local_38 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x13a3);
      CStreamGuard::CStreamGuard(local_c8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
                    /* try { // try from 0847b849 to 0847ba5f has its CatchHandler @ 0847ba62 */
      CStreamGuard::operator<<(pCVar10,0xf6);
      iVar7 = *(int *)(local_38 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      iVar7 = *(int *)(local_38 + 0x16);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      uVar3 = local_38[0x1a];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
      CStreamGuard::operator<<(pCVar10,uVar3);
      local_34 = (uint)(byte)local_38[0x1b] * 0x75 + 1;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_34;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        iVar7 = Stream::in_ptr(pSVar9);
        iVar7 = iVar7 + local_34;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        Stream::resize(pSVar9,iVar7);
      }
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_34;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
        CStreamGuard::operator<<(pCVar10,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x13bb,
                   "onAUCTION_MY_REGISTED_ITEM_INFO_AG, resize failed.");
      }
      else {
        uVar3 = local_38[0x1b];
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
        CStreamGuard::operator<<(pCVar10,uVar3);
        bVar2 = local_38[0x1b];
        pcVar1 = local_38 + 0x1c;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
        CStreamGuard::put_binary(pCVar10,pcVar1,(uint)bVar2 * 0x75);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c8);
      CStreamGuard::~CStreamGuard(local_c8);
      break;
    case 9:
      local_30 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x13ce);
      CStreamGuard::CStreamGuard(local_d0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
                    /* try { // try from 0847bae9 to 0847bcff has its CatchHandler @ 0847bd02 */
      CStreamGuard::operator<<(pCVar10,0xf7);
      iVar7 = *(int *)(local_30 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      iVar7 = *(int *)(local_30 + 0x16);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      uVar3 = local_30[0x1a];
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
      CStreamGuard::operator<<(pCVar10,uVar3);
      local_2c = (uint)*(ushort *)(local_30 + 0x1b) * 0x7d + 2;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_2c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        iVar7 = Stream::in_ptr(pSVar9);
        iVar7 = iVar7 + local_2c;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
        pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
        Stream::resize(pSVar9,iVar7);
      }
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar7 = Stream::in_ptr(pSVar9);
      iVar7 = iVar7 + local_2c;
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
      pSVar9 = (Stream *)CStreamGuard::Get(pCVar10);
      iVar8 = Stream::size(pSVar9);
      if (iVar8 < iVar7) {
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
        CStreamGuard::operator<<(pCVar10,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x13e6,
                   "onAUCTION_MY_BIDDING_INFO_AG, resize failed.");
      }
      else {
        uVar4 = *(ushort *)(local_30 + 0x1b);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
        CStreamGuard::operator<<(pCVar10,uVar4);
        uVar4 = *(ushort *)(local_30 + 0x1b);
        pcVar1 = local_30 + 0x1d;
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
        CStreamGuard::put_binary(pCVar10,pcVar1,(uint)uVar4 * 0x7d);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d0);
      CStreamGuard::~CStreamGuard(local_d0);
      break;
    default:
      LogManager::logFormat
                (1,"DispatchServerPacket.cpp",
                 "static bool CDispatchServerPacket::dispatchAuctionPacket(char*)",0x149c,
                 "[AUCTION PACKET ERROR] not exist packet id (%d)",local_80);
      break;
    case 0xb:
      local_28 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x142a);
      CStreamGuard::CStreamGuard(local_d8,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
                    /* try { // try from 0847bd89 to 0847be67 has its CatchHandler @ 0847be6a */
      CStreamGuard::operator<<(pCVar10,0xf8);
      iVar7 = *(int *)(local_28 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
      local_24 = CStreamGuard::GetInBuffer<SIG_AUCTION_LOG_MESSAGE_AG>(pCVar10);
      *local_24 = *(SIG_AUCTION_LOG_MESSAGE_AG *)(local_28 + 0x16);
      uVar6 = *(undefined4 *)(local_28 + 0x1b);
      *(undefined4 *)(local_24 + 1) = *(undefined4 *)(local_28 + 0x17);
      *(undefined4 *)(local_24 + 5) = uVar6;
      *(undefined4 *)(local_24 + 9) = *(undefined4 *)(local_28 + 0x1f);
      *(undefined4 *)(local_24 + 0xd) = *(undefined4 *)(local_28 + 0x23);
      *(undefined4 *)(local_24 + 0x11) = *(undefined4 *)(local_28 + 0x27);
      local_24[0x15] = *(SIG_AUCTION_LOG_MESSAGE_AG *)(local_28 + 0x2b);
      *(undefined4 *)(local_24 + 0x16) = *(undefined4 *)(local_28 + 0x2c);
      *(undefined2 *)(local_24 + 0x1a) = *(undefined2 *)(local_28 + 0x30);
      *(undefined4 *)(local_24 + 0x1c) = *(undefined4 *)(local_28 + 0x32);
      local_24[0x20] = *(SIG_AUCTION_LOG_MESSAGE_AG *)(local_28 + 0x36);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d8);
      CStreamGuard::~CStreamGuard(local_d8);
      break;
    case 0xc:
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1447);
      CStreamGuard::CStreamGuard(local_e0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
                    /* try { // try from 0847beeb to 0847bf55 has its CatchHandler @ 0847bf58 */
      CStreamGuard::operator<<(pCVar10,0xf9);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar10,-1);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      local_20 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
      local_20[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
      *(undefined4 *)local_20 = 0;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e0);
      CStreamGuard::~CStreamGuard(local_e0);
      break;
    case 0xd:
      local_1c = param_1;
      if (param_1[0x12] == '\0') {
        Timer_CheckAuctionReady::RegistNextTimer();
      }
      else {
        pSVar9 = (Stream *)
                 StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1464);
        CStreamGuard::CStreamGuard(local_e8,pSVar9,true);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
                    /* try { // try from 0847bfee to 0847c058 has its CatchHandler @ 0847c05b */
        CStreamGuard::operator<<(pCVar10,0xf9);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
        CStreamGuard::operator<<(pCVar10,-1);
        pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_e8);
        local_18 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar10);
        local_18[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
        *(undefined4 *)local_18 = 0;
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e8);
        CStreamGuard::~CStreamGuard(local_e8);
      }
      break;
    case 0xe:
      local_14 = param_1;
      pSVar9 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1485);
      CStreamGuard::CStreamGuard(local_f0,pSVar9,true);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
                    /* try { // try from 0847c0ec to 0847c18b has its CatchHandler @ 0847c18e */
      CStreamGuard::operator<<(pCVar10,0x20d);
      iVar7 = *(int *)(local_14 + 0x12);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
      CStreamGuard::operator<<(pCVar10,iVar7);
      pCVar10 = (CStreamGuard *)CStreamGuard::operator->(local_f0);
      local_10 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_BUY_ITEM_APIECE>(pCVar10);
      *(undefined4 *)local_10 = *(undefined4 *)(local_14 + 0x16);
      *(undefined4 *)(local_10 + 4) = *(undefined4 *)(local_14 + 0x1a);
      local_10[8] = *(SIG_AUCTION_RESULT_BUY_ITEM_APIECE *)(local_14 + 0x1e);
      local_10[9] = *(SIG_AUCTION_RESULT_BUY_ITEM_APIECE *)(local_14 + 0x1f);
      uVar6 = *(undefined4 *)(local_14 + 0x24);
      *(undefined4 *)(local_10 + 10) = *(undefined4 *)(local_14 + 0x20);
      *(undefined4 *)(local_10 + 0xe) = uVar6;
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f0);
      CStreamGuard::~CStreamGuard(local_f0);
    }
  }
  return 1;
}

```

---

## dispatchPacket

```asm
// === 08473660 CDispatchServerPacket::dispatchPacket  [0x08473660-0x847ac3b] ===
 8473660:	55                   	push   %ebp
 8473661:	89 e5                	mov    %esp,%ebp
 8473663:	57                   	push   %edi
 8473664:	56                   	push   %esi
 8473665:	53                   	push   %ebx
 8473666:	81 ec 2c 03 00 00    	sub    $0x32c,%esp
 847366c:	8b 45 08             	mov    0x8(%ebp),%eax
 847366f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8473673:	66 89 85 2a fd ff ff 	mov    %ax,-0x2d6(%ebp)
 847367a:	66 83 85 2a fd ff ff 	addw   $0x8,-0x2d6(%ebp)
 8473681:	08 
 8473682:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8473689:	00 
 847368a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8473690:	89 04 24             	mov    %eax,(%esp)
 8473693:	e8 94 af c6 ff       	call   80de62c <_ZN12CStreamGuardC1Eb>
 8473698:	66 81 bd 2a fd ff ff 	cmpw   $0xfff,-0x2d6(%ebp)
 847369f:	ff 0f 
 84736a1:	77 31                	ja     84736d4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x74>
 84736a3:	a1 a8 bd 40 09       	mov    0x940bda8,%eax
 84736a8:	c7 44 24 08 36 00 00 	movl   $0x36,0x8(%esp)
 84736af:	00 
 84736b0:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 84736b7:	08 
 84736b8:	89 04 24             	mov    %eax,(%esp)
 84736bb:	e8 b4 c8 e1 ff       	call   828ff74 <_ZN15SmallStreamPool7AcquireEPKci>
 84736c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 84736c4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84736ca:	89 04 24             	mov    %eax,(%esp)
 84736cd:	e8 72 af c6 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 84736d2:	eb 76                	jmp    847374a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xea>
 84736d4:	66 81 bd 2a fd ff ff 	cmpw   $0xfff,-0x2d6(%ebp)
 84736db:	ff 0f 
 84736dd:	76 3c                	jbe    847371b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xbb>
 84736df:	66 81 bd 2a fd ff ff 	cmpw   $0x3fff,-0x2d6(%ebp)
 84736e6:	ff 3f 
 84736e8:	77 31                	ja     847371b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xbb>
 84736ea:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 84736ef:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 84736f6:	00 
 84736f7:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 84736fe:	08 
 84736ff:	89 04 24             	mov    %eax,(%esp)
 8473702:	e8 7f c3 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8473707:	89 44 24 04          	mov    %eax,0x4(%esp)
 847370b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8473711:	89 04 24             	mov    %eax,(%esp)
 8473714:	e8 2b af c6 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 8473719:	eb 2f                	jmp    847374a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xea>
 847371b:	a1 a4 bd 40 09       	mov    0x940bda4,%eax
 8473720:	c7 44 24 08 3e 00 00 	movl   $0x3e,0x8(%esp)
 8473727:	00 
 8473728:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847372f:	08 
 8473730:	89 04 24             	mov    %eax,(%esp)
 8473733:	e8 2a cb e1 ff       	call   8290262 <_ZN13BigStreamPool7AcquireEPKci>
 8473738:	89 44 24 04          	mov    %eax,0x4(%esp)
 847373c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8473742:	89 04 24             	mov    %eax,(%esp)
 8473745:	e8 fa ae c6 ff       	call   80de644 <_ZN12CStreamGuard3SetEP6Stream>
 847374a:	8b 45 08             	mov    0x8(%ebp),%eax
 847374d:	0f b7 00             	movzwl (%eax),%eax
 8473750:	0f b7 c0             	movzwl %ax,%eax
 8473753:	3d 0f 07 00 00       	cmp    $0x70f,%eax
 8473758:	0f 84 0b 50 00 00    	je     8478769 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5109>
 847375e:	3d 0f 07 00 00       	cmp    $0x70f,%eax
 8473763:	0f 8f 8c 05 00 00    	jg     8473cf5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x695>
 8473769:	3d 4e 04 00 00       	cmp    $0x44e,%eax
 847376e:	0f 84 70 28 00 00    	je     8475fe4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2984>
 8473774:	3d 4e 04 00 00       	cmp    $0x44e,%eax
 8473779:	0f 8f bf 02 00 00    	jg     8473a3e <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3de>
 847377f:	3d 23 04 00 00       	cmp    $0x423,%eax
 8473784:	0f 84 ef 18 00 00    	je     8475079 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1a19>
 847378a:	3d 23 04 00 00       	cmp    $0x423,%eax
 847378f:	0f 8f 4f 01 00 00    	jg     84738e4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x284>
 8473795:	3d fd 03 00 00       	cmp    $0x3fd,%eax
 847379a:	0f 84 e0 14 00 00    	je     8474c80 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1620>
 84737a0:	3d fd 03 00 00       	cmp    $0x3fd,%eax
 84737a5:	0f 8f 97 00 00 00    	jg     8473842 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1e2>
 84737ab:	3d f2 03 00 00       	cmp    $0x3f2,%eax
 84737b0:	0f 84 4a 11 00 00    	je     8474900 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x12a0>
 84737b6:	3d f2 03 00 00       	cmp    $0x3f2,%eax
 84737bb:	7f 3d                	jg     84737fa <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x19a>
 84737bd:	3d ea 03 00 00       	cmp    $0x3ea,%eax
 84737c2:	0f 84 6d 0b 00 00    	je     8474335 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xcd5>
 84737c8:	3d ea 03 00 00       	cmp    $0x3ea,%eax
 84737cd:	7f 10                	jg     84737df <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x17f>
 84737cf:	3d e8 03 00 00       	cmp    $0x3e8,%eax
 84737d4:	0f 84 c5 0a 00 00    	je     847429f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xc3f>
 84737da:	e9 08 74 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84737df:	3d ee 03 00 00       	cmp    $0x3ee,%eax
 84737e4:	0f 84 6d 0c 00 00    	je     8474457 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xdf7>
 84737ea:	3d ef 03 00 00       	cmp    $0x3ef,%eax
 84737ef:	0f 84 db 0f 00 00    	je     84747d0 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1170>
 84737f5:	e9 ed 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84737fa:	3d f8 03 00 00       	cmp    $0x3f8,%eax
 84737ff:	0f 84 74 0d 00 00    	je     8474579 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xf19>
 8473805:	3d f8 03 00 00       	cmp    $0x3f8,%eax
 847380a:	7f 1b                	jg     8473827 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c7>
 847380c:	3d f3 03 00 00       	cmp    $0x3f3,%eax
 8473811:	0f 84 6b 1b 00 00    	je     8475382 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1d22>
 8473817:	3d f7 03 00 00       	cmp    $0x3f7,%eax
 847381c:	0f 84 27 2e 00 00    	je     8476649 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2fe9>
 8473822:	e9 c0 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473827:	3d f9 03 00 00       	cmp    $0x3f9,%eax
 847382c:	0f 84 94 0b 00 00    	je     84743c6 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xd66>
 8473832:	3d fc 03 00 00       	cmp    $0x3fc,%eax
 8473837:	0f 84 68 16 00 00    	je     8474ea5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1845>
 847383d:	e9 a5 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473842:	3d 07 04 00 00       	cmp    $0x407,%eax
 8473847:	0f 84 9f 1a 00 00    	je     84752ec <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1c8c>
 847384d:	3d 07 04 00 00       	cmp    $0x407,%eax
 8473852:	7f 48                	jg     847389c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x23c>
 8473854:	3d 00 04 00 00       	cmp    $0x400,%eax
 8473859:	0f 84 dc 16 00 00    	je     8474f3b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x18db>
 847385f:	3d 00 04 00 00       	cmp    $0x400,%eax
 8473864:	7f 1b                	jg     8473881 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x221>
 8473866:	3d fe 03 00 00       	cmp    $0x3fe,%eax
 847386b:	0f 84 a5 14 00 00    	je     8474d16 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x16b6>
 8473871:	3d ff 03 00 00       	cmp    $0x3ff,%eax
 8473876:	0f 84 30 15 00 00    	je     8474dac <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x174c>
 847387c:	e9 66 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473881:	3d 01 04 00 00       	cmp    $0x401,%eax
 8473886:	0f 84 4e 17 00 00    	je     8474fda <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x197a>
 847388c:	3d 06 04 00 00       	cmp    $0x406,%eax
 8473891:	0f 84 bf 19 00 00    	je     8475256 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1bf6>
 8473897:	e9 4b 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847389c:	3d 0c 04 00 00       	cmp    $0x40c,%eax
 84738a1:	0f 84 15 12 00 00    	je     8474abc <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x145c>
 84738a7:	3d 0c 04 00 00       	cmp    $0x40c,%eax
 84738ac:	7f 1b                	jg     84738c9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x269>
 84738ae:	3d 0a 04 00 00       	cmp    $0x40a,%eax
 84738b3:	0f 84 2f 13 00 00    	je     8474be8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1588>
 84738b9:	3d 0b 04 00 00       	cmp    $0x40b,%eax
 84738be:	0f 84 8e 12 00 00    	je     8474b52 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x14f2>
 84738c4:	e9 1e 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84738c9:	3d 0d 04 00 00       	cmp    $0x40d,%eax
 84738ce:	0f 84 4d 1b 00 00    	je     8475421 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1dc1>
 84738d4:	3d 14 04 00 00       	cmp    $0x414,%eax
 84738d9:	0f 84 2e 28 00 00    	je     847610d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2aad>
 84738df:	e9 03 73 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84738e4:	3d 37 04 00 00       	cmp    $0x437,%eax
 84738e9:	0f 84 e3 30 00 00    	je     84769d2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3372>
 84738ef:	3d 37 04 00 00       	cmp    $0x437,%eax
 84738f4:	0f 8f a2 00 00 00    	jg     847399c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x33c>
 84738fa:	3d 30 04 00 00       	cmp    $0x430,%eax
 84738ff:	0f 84 e4 1c 00 00    	je     84755e9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1f89>
 8473905:	3d 30 04 00 00       	cmp    $0x430,%eax
 847390a:	7f 48                	jg     8473954 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2f4>
 847390c:	3d 2c 04 00 00       	cmp    $0x42c,%eax
 8473911:	0f 84 02 1e 00 00    	je     8475719 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x20b9>
 8473917:	3d 2c 04 00 00       	cmp    $0x42c,%eax
 847391c:	7f 1b                	jg     8473939 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2d9>
 847391e:	3d 24 04 00 00       	cmp    $0x424,%eax
 8473923:	0f 84 ef 17 00 00    	je     8475118 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1ab8>
 8473929:	3d 28 04 00 00       	cmp    $0x428,%eax
 847392e:	0f 84 83 18 00 00    	je     84751b7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1b57>
 8473934:	e9 ae 72 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473939:	3d 2d 04 00 00       	cmp    $0x42d,%eax
 847393e:	0f 84 75 1b 00 00    	je     84754b9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1e59>
 8473944:	3d 2f 04 00 00       	cmp    $0x42f,%eax
 8473949:	0f 84 02 1c 00 00    	je     8475551 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1ef1>
 847394f:	e9 93 72 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473954:	3d 34 04 00 00       	cmp    $0x434,%eax
 8473959:	0f 84 ab 2e 00 00    	je     847680a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x31aa>
 847395f:	3d 34 04 00 00       	cmp    $0x434,%eax
 8473964:	7f 1b                	jg     8473981 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x321>
 8473966:	3d 31 04 00 00       	cmp    $0x431,%eax
 847396b:	0f 84 10 1d 00 00    	je     8475681 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2021>
 8473971:	3d 32 04 00 00       	cmp    $0x432,%eax
 8473976:	0f 84 f6 2d 00 00    	je     8476772 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3112>
 847397c:	e9 66 72 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473981:	3d 35 04 00 00       	cmp    $0x435,%eax
 8473986:	0f 84 16 2f 00 00    	je     84768a2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3242>
 847398c:	3d 36 04 00 00       	cmp    $0x436,%eax
 8473991:	0f 84 a3 2f 00 00    	je     847693a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x32da>
 8473997:	e9 4b 72 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847399c:	3d 44 04 00 00       	cmp    $0x444,%eax
 84739a1:	0f 84 00 36 00 00    	je     8476fa7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3947>
 84739a7:	3d 44 04 00 00       	cmp    $0x444,%eax
 84739ac:	7f 48                	jg     84739f6 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x396>
 84739ae:	3d 3d 04 00 00       	cmp    $0x43d,%eax
 84739b3:	0f 84 41 32 00 00    	je     8476bfa <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x359a>
 84739b9:	3d 3d 04 00 00       	cmp    $0x43d,%eax
 84739be:	7f 1b                	jg     84739db <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x37b>
 84739c0:	3d 39 04 00 00       	cmp    $0x439,%eax
 84739c5:	0f 84 97 31 00 00    	je     8476b62 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3502>
 84739cb:	3d 3b 04 00 00       	cmp    $0x43b,%eax
 84739d0:	0f 84 bc 32 00 00    	je     8476c92 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3632>
 84739d6:	e9 0c 72 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84739db:	3d 3e 04 00 00       	cmp    $0x43e,%eax
 84739e0:	0f 84 44 33 00 00    	je     8476d2a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x36ca>
 84739e6:	3d 3f 04 00 00       	cmp    $0x43f,%eax
 84739eb:	0f 84 d1 33 00 00    	je     8476dc2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3762>
 84739f1:	e9 f1 71 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84739f6:	3d 47 04 00 00       	cmp    $0x447,%eax
 84739fb:	0f 84 d6 36 00 00    	je     84770d7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3a77>
 8473a01:	3d 47 04 00 00       	cmp    $0x447,%eax
 8473a06:	7f 1b                	jg     8473a23 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3c3>
 8473a08:	3d 45 04 00 00       	cmp    $0x445,%eax
 8473a0d:	0f 84 47 34 00 00    	je     8476e5a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x37fa>
 8473a13:	3d 46 04 00 00       	cmp    $0x446,%eax
 8473a18:	0f 84 21 36 00 00    	je     847703f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x39df>
 8473a1e:	e9 c4 71 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473a23:	3d 4c 04 00 00       	cmp    $0x44c,%eax
 8473a28:	0f 84 6c 0f 00 00    	je     847499a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x133a>
 8473a2e:	3d 4d 04 00 00       	cmp    $0x44d,%eax
 8473a33:	0f 84 f2 0f 00 00    	je     8474a2b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x13cb>
 8473a39:	e9 a9 71 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473a3e:	3d 42 06 00 00       	cmp    $0x642,%eax
 8473a43:	0f 84 f4 27 00 00    	je     847623d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2bdd>
 8473a49:	3d 42 06 00 00       	cmp    $0x642,%eax
 8473a4e:	0f 8f 5a 01 00 00    	jg     8473bae <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x54e>
 8473a54:	3d bf 04 00 00       	cmp    $0x4bf,%eax
 8473a59:	0f 84 02 22 00 00    	je     8475c61 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2601>
 8473a5f:	3d bf 04 00 00       	cmp    $0x4bf,%eax
 8473a64:	0f 8f a2 00 00 00    	jg     8473b0c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4ac>
 8473a6a:	3d b9 04 00 00       	cmp    $0x4b9,%eax
 8473a6f:	0f 84 94 1f 00 00    	je     8475a09 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x23a9>
 8473a75:	3d b9 04 00 00       	cmp    $0x4b9,%eax
 8473a7a:	7f 48                	jg     8473ac4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x464>
 8473a7c:	3d b6 04 00 00       	cmp    $0x4b6,%eax
 8473a81:	0f 84 2a 1d 00 00    	je     84757b1 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2151>
 8473a87:	3d b6 04 00 00       	cmp    $0x4b6,%eax
 8473a8c:	7f 1b                	jg     8473aa9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x449>
 8473a8e:	3d 4f 04 00 00       	cmp    $0x44f,%eax
 8473a93:	0f 84 29 24 00 00    	je     8475ec2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2862>
 8473a99:	3d 50 04 00 00       	cmp    $0x450,%eax
 8473a9e:	0f 84 af 24 00 00    	je     8475f53 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x28f3>
 8473aa4:	e9 3e 71 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473aa9:	3d b7 04 00 00       	cmp    $0x4b7,%eax
 8473aae:	0f 84 93 1d 00 00    	je     8475847 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x21e7>
 8473ab4:	3d b8 04 00 00       	cmp    $0x4b8,%eax
 8473ab9:	0f 84 1e 1e 00 00    	je     84758dd <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x227d>
 8473abf:	e9 23 71 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473ac4:	3d bc 04 00 00       	cmp    $0x4bc,%eax
 8473ac9:	0f 84 66 20 00 00    	je     8475b35 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x24d5>
 8473acf:	3d bc 04 00 00       	cmp    $0x4bc,%eax
 8473ad4:	7f 1b                	jg     8473af1 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x491>
 8473ad6:	3d ba 04 00 00       	cmp    $0x4ba,%eax
 8473adb:	0f 84 92 1e 00 00    	je     8475973 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2313>
 8473ae1:	3d bb 04 00 00       	cmp    $0x4bb,%eax
 8473ae6:	0f 84 b3 1f 00 00    	je     8475a9f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x243f>
 8473aec:	e9 f6 70 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473af1:	3d bd 04 00 00       	cmp    $0x4bd,%eax
 8473af6:	0f 84 cf 20 00 00    	je     8475bcb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x256b>
 8473afc:	3d be 04 00 00       	cmp    $0x4be,%eax
 8473b01:	0f 84 f9 21 00 00    	je     8475d00 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x26a0>
 8473b07:	e9 db 70 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473b0c:	3d 14 05 00 00       	cmp    $0x514,%eax
 8473b11:	0f 84 5e 25 00 00    	je     8476075 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2a15>
 8473b17:	3d 14 05 00 00       	cmp    $0x514,%eax
 8473b1c:	7f 48                	jg     8473b66 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x506>
 8473b1e:	3d cb 04 00 00       	cmp    $0x4cb,%eax
 8473b23:	0f 84 41 2f 00 00    	je     8476a6a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x340a>
 8473b29:	3d cb 04 00 00       	cmp    $0x4cb,%eax
 8473b2e:	7f 1b                	jg     8473b4b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4eb>
 8473b30:	3d c0 04 00 00       	cmp    $0x4c0,%eax
 8473b35:	0f 84 5b 22 00 00    	je     8475d96 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2736>
 8473b3b:	3d c1 04 00 00       	cmp    $0x4c1,%eax
 8473b40:	0f 84 e6 22 00 00    	je     8475e2c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x27cc>
 8473b46:	e9 9c 70 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473b4b:	3d cf 04 00 00       	cmp    $0x4cf,%eax
 8473b50:	0f 84 ac 2f 00 00    	je     8476b02 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x34a2>
 8473b56:	3d d2 04 00 00       	cmp    $0x4d2,%eax
 8473b5b:	0f 84 cc 3f 00 00    	je     8477b2d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x44cd>
 8473b61:	e9 81 70 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473b66:	3d dd 05 00 00       	cmp    $0x5dd,%eax
 8473b6b:	0f 84 c7 0b 00 00    	je     8474738 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x10d8>
 8473b71:	3d dd 05 00 00       	cmp    $0x5dd,%eax
 8473b76:	7f 1b                	jg     8473b93 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x533>
 8473b78:	3d 46 05 00 00       	cmp    $0x546,%eax
 8473b7d:	0f 84 20 26 00 00    	je     84761a3 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2b43>
 8473b83:	3d dc 05 00 00       	cmp    $0x5dc,%eax
 8473b88:	0f 84 12 0b 00 00    	je     84746a0 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1040>
 8473b8e:	e9 54 70 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473b93:	3d e0 05 00 00       	cmp    $0x5e0,%eax
 8473b98:	0f 84 6c 0a 00 00    	je     847460a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xfaa>
 8473b9e:	3d e2 05 00 00       	cmp    $0x5e2,%eax
 8473ba3:	0f 84 bf 0c 00 00    	je     8474868 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x1208>
 8473ba9:	e9 39 70 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473bae:	3d d8 06 00 00       	cmp    $0x6d8,%eax
 8473bb3:	0f 84 61 3c 00 00    	je     847781a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x41ba>
 8473bb9:	3d d8 06 00 00       	cmp    $0x6d8,%eax
 8473bbe:	0f 8f 8f 00 00 00    	jg     8473c53 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5f3>
 8473bc4:	3d ac 06 00 00       	cmp    $0x6ac,%eax
 8473bc9:	7f 4b                	jg     8473c16 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5b6>
 8473bcb:	3d ab 06 00 00       	cmp    $0x6ab,%eax
 8473bd0:	0f 8d 18 70 00 00    	jge    847abee <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x758e>
 8473bd6:	3d a5 06 00 00       	cmp    $0x6a5,%eax
 8473bdb:	0f 84 10 70 00 00    	je     847abf1 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7591>
 8473be1:	3d a5 06 00 00       	cmp    $0x6a5,%eax
 8473be6:	7f 1b                	jg     8473c03 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5a3>
 8473be8:	3d 72 06 00 00       	cmp    $0x672,%eax
 8473bed:	0f 84 e2 26 00 00    	je     84762d5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2c75>
 8473bf3:	3d 74 06 00 00       	cmp    $0x674,%eax
 8473bf8:	0f 84 6f 27 00 00    	je     847636d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2d0d>
 8473bfe:	e9 e4 6f 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473c03:	2d a8 06 00 00       	sub    $0x6a8,%eax
 8473c08:	83 f8 01             	cmp    $0x1,%eax
 8473c0b:	0f 87 d6 6f 00 00    	ja     847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473c11:	e9 e5 6f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8473c16:	3d af 06 00 00       	cmp    $0x6af,%eax
 8473c1b:	0f 84 d3 6f 00 00    	je     847abf4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7594>
 8473c21:	3d af 06 00 00       	cmp    $0x6af,%eax
 8473c26:	7f 10                	jg     8473c38 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5d8>
 8473c28:	3d ae 06 00 00       	cmp    $0x6ae,%eax
 8473c2d:	0f 84 c4 6f 00 00    	je     847abf7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7597>
 8473c33:	e9 af 6f 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473c38:	3d b0 06 00 00       	cmp    $0x6b0,%eax
 8473c3d:	0f 84 2a 40 00 00    	je     8477c6d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x460d>
 8473c43:	3d b2 06 00 00       	cmp    $0x6b2,%eax
 8473c48:	0f 84 fc 44 00 00    	je     847814a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4aea>
 8473c4e:	e9 94 6f 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473c53:	3d ea 06 00 00       	cmp    $0x6ea,%eax
 8473c58:	0f 84 82 45 00 00    	je     84781e0 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4b80>
 8473c5e:	3d ea 06 00 00       	cmp    $0x6ea,%eax
 8473c63:	7f 48                	jg     8473cad <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x64d>
 8473c65:	3d e0 06 00 00       	cmp    $0x6e0,%eax
 8473c6a:	0f 84 5e 3f 00 00    	je     8477bce <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x456e>
 8473c70:	3d e0 06 00 00       	cmp    $0x6e0,%eax
 8473c75:	7f 1b                	jg     8473c92 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x632>
 8473c77:	3d dc 06 00 00       	cmp    $0x6dc,%eax
 8473c7c:	0f 84 cc 3c 00 00    	je     847794e <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x42ee>
 8473c82:	3d de 06 00 00       	cmp    $0x6de,%eax
 8473c87:	0f 84 60 3d 00 00    	je     84779ed <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x438d>
 8473c8d:	e9 55 6f 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473c92:	3d e2 06 00 00       	cmp    $0x6e2,%eax
 8473c97:	0f 84 ef 3d 00 00    	je     8477a8c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x442c>
 8473c9d:	3d e5 06 00 00       	cmp    $0x6e5,%eax
 8473ca2:	0f 84 11 44 00 00    	je     84780b9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4a59>
 8473ca8:	e9 3a 6f 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473cad:	3d 0c 07 00 00       	cmp    $0x70c,%eax
 8473cb2:	0f 84 d4 48 00 00    	je     847858c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4f2c>
 8473cb8:	3d 0c 07 00 00       	cmp    $0x70c,%eax
 8473cbd:	7f 1b                	jg     8473cda <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x67a>
 8473cbf:	3d 0a 07 00 00       	cmp    $0x70a,%eax
 8473cc4:	0f 84 e5 46 00 00    	je     84783af <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4d4f>
 8473cca:	3d 0b 07 00 00       	cmp    $0x70b,%eax
 8473ccf:	0f 84 18 48 00 00    	je     84784ed <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4e8d>
 8473cd5:	e9 0d 6f 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473cda:	3d 0d 07 00 00       	cmp    $0x70d,%eax
 8473cdf:	0f 84 46 49 00 00    	je     847862b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4fcb>
 8473ce5:	3d 0e 07 00 00       	cmp    $0x70e,%eax
 8473cea:	0f 84 da 49 00 00    	je     84786ca <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x506a>
 8473cf0:	e9 f2 6e 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473cf5:	3d 5b 1b 00 00       	cmp    $0x1b5b,%eax
 8473cfa:	0f 84 f5 55 00 00    	je     84792f5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5c95>
 8473d00:	3d 5b 1b 00 00       	cmp    $0x1b5b,%eax
 8473d05:	0f 8f ca 02 00 00    	jg     8473fd5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x975>
 8473d0b:	3d ab 0f 00 00       	cmp    $0xfab,%eax
 8473d10:	0f 84 27 39 00 00    	je     847763d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3fdd>
 8473d16:	3d ab 0f 00 00       	cmp    $0xfab,%eax
 8473d1b:	0f 8f 5a 01 00 00    	jg     8473e7b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x81b>
 8473d21:	3d 57 0b 00 00       	cmp    $0xb57,%eax
 8473d26:	0f 84 34 35 00 00    	je     8477260 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3c00>
 8473d2c:	3d 57 0b 00 00       	cmp    $0xb57,%eax
 8473d31:	0f 8f a2 00 00 00    	jg     8473dd9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x779>
 8473d37:	3d dd 09 00 00       	cmp    $0x9dd,%eax
 8473d3c:	0f 84 54 27 00 00    	je     8476496 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2e36>
 8473d42:	3d dd 09 00 00       	cmp    $0x9dd,%eax
 8473d47:	7f 48                	jg     8473d91 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x731>
 8473d49:	3d 6c 07 00 00       	cmp    $0x76c,%eax
 8473d4e:	0f 84 86 29 00 00    	je     84766da <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x307a>
 8473d54:	3d 6c 07 00 00       	cmp    $0x76c,%eax
 8473d59:	7f 1b                	jg     8473d76 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x716>
 8473d5b:	3d 12 07 00 00       	cmp    $0x712,%eax
 8473d60:	0f 84 e8 46 00 00    	je     847844e <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4dee>
 8473d66:	3d 13 07 00 00       	cmp    $0x713,%eax
 8473d6b:	0f 84 97 4a 00 00    	je     8478808 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x51a8>
 8473d71:	e9 71 6e 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473d76:	3d d3 09 00 00       	cmp    $0x9d3,%eax
 8473d7b:	0f 84 9c 4d 00 00    	je     8478b1d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x54bd>
 8473d81:	3d dc 09 00 00       	cmp    $0x9dc,%eax
 8473d86:	0f 84 79 26 00 00    	je     8476405 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2da5>
 8473d8c:	e9 56 6e 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473d91:	3d 8c 0a 00 00       	cmp    $0xa8c,%eax
 8473d96:	0f 84 d3 33 00 00    	je     847716f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3b0f>
 8473d9c:	3d 8c 0a 00 00       	cmp    $0xa8c,%eax
 8473da1:	7f 1b                	jg     8473dbe <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x75e>
 8473da3:	3d de 09 00 00       	cmp    $0x9de,%eax
 8473da8:	0f 84 0a 28 00 00    	je     84765b8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2f58>
 8473dae:	3d e0 09 00 00       	cmp    $0x9e0,%eax
 8473db3:	0f 84 6e 27 00 00    	je     8476527 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x2ec7>
 8473db9:	e9 29 6e 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473dbe:	3d 54 0b 00 00       	cmp    $0xb54,%eax
 8473dc3:	0f 84 22 31 00 00    	je     8476eeb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x388b>
 8473dc9:	3d 55 0b 00 00       	cmp    $0xb55,%eax
 8473dce:	0f 84 2c 34 00 00    	je     8477200 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3ba0>
 8473dd4:	e9 0e 6e 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473dd9:	3d 64 0b 00 00       	cmp    $0xb64,%eax
 8473dde:	0f 84 6e 63 00 00    	je     847a152 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6af2>
 8473de4:	3d 64 0b 00 00       	cmp    $0xb64,%eax
 8473de9:	7f 48                	jg     8473e33 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7d3>
 8473deb:	3d 5f 0b 00 00       	cmp    $0xb5f,%eax
 8473df0:	0f 84 20 31 00 00    	je     8476f16 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x38b6>
 8473df6:	3d 5f 0b 00 00       	cmp    $0xb5f,%eax
 8473dfb:	7f 1b                	jg     8473e18 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7b8>
 8473dfd:	3d 58 0b 00 00       	cmp    $0xb58,%eax
 8473e02:	0f 84 b8 34 00 00    	je     84772c0 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3c60>
 8473e08:	3d 5e 0b 00 00       	cmp    $0xb5e,%eax
 8473e0d:	0f 84 47 35 00 00    	je     847735a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3cfa>
 8473e13:	e9 cf 6d 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473e18:	3d 60 0b 00 00       	cmp    $0xb60,%eax
 8473e1d:	0f 84 ed 44 00 00    	je     8478310 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4cb0>
 8473e23:	3d 61 0b 00 00       	cmp    $0xb61,%eax
 8473e28:	0f 84 63 52 00 00    	je     8479091 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5a31>
 8473e2e:	e9 b4 6d 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473e33:	3d a2 0f 00 00       	cmp    $0xfa2,%eax
 8473e38:	0f 84 45 36 00 00    	je     8477483 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3e23>
 8473e3e:	3d a2 0f 00 00       	cmp    $0xfa2,%eax
 8473e43:	7f 1b                	jg     8473e60 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x800>
 8473e45:	3d 65 0b 00 00       	cmp    $0xb65,%eax
 8473e4a:	0f 84 3b 64 00 00    	je     847a28b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6c2b>
 8473e50:	3d 1c 0c 00 00       	cmp    $0xc1c,%eax
 8473e55:	0f 84 90 35 00 00    	je     84773eb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3d8b>
 8473e5b:	e9 87 6d 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473e60:	3d a3 0f 00 00       	cmp    $0xfa3,%eax
 8473e65:	0f 84 b0 36 00 00    	je     847751b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3ebb>
 8473e6b:	3d a5 0f 00 00       	cmp    $0xfa5,%eax
 8473e70:	0f 84 36 37 00 00    	je     84775ac <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x3f4c>
 8473e76:	e9 6c 6d 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473e7b:	3d 39 10 00 00       	cmp    $0x1039,%eax
 8473e80:	0f 84 63 4b 00 00    	je     84789e9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5389>
 8473e86:	3d 39 10 00 00       	cmp    $0x1039,%eax
 8473e8b:	0f 8f a2 00 00 00    	jg     8473f33 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x8d3>
 8473e91:	3d e7 0f 00 00       	cmp    $0xfe7,%eax
 8473e96:	0f 84 a4 62 00 00    	je     847a140 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6ae0>
 8473e9c:	3d e7 0f 00 00       	cmp    $0xfe7,%eax
 8473ea1:	7f 48                	jg     8473eeb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x88b>
 8473ea3:	3d ae 0f 00 00       	cmp    $0xfae,%eax
 8473ea8:	0f 84 06 3a 00 00    	je     84778b4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4254>
 8473eae:	3d ae 0f 00 00       	cmp    $0xfae,%eax
 8473eb3:	7f 1b                	jg     8473ed0 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x870>
 8473eb5:	3d ac 0f 00 00       	cmp    $0xfac,%eax
 8473eba:	0f 84 1c 38 00 00    	je     84776dc <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x407c>
 8473ec0:	3d ad 0f 00 00       	cmp    $0xfad,%eax
 8473ec5:	0f 84 b0 38 00 00    	je     847777b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x411b>
 8473ecb:	e9 17 6d 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473ed0:	3d af 0f 00 00       	cmp    $0xfaf,%eax
 8473ed5:	0f 84 31 3e 00 00    	je     8477d0c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x46ac>
 8473edb:	3d e6 0f 00 00       	cmp    $0xfe6,%eax
 8473ee0:	0f 84 9b 61 00 00    	je     847a081 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6a21>
 8473ee6:	e9 fc 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473eeb:	3d 06 10 00 00       	cmp    $0x1006,%eax
 8473ef0:	0f 84 29 41 00 00    	je     847801f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x49bf>
 8473ef6:	3d 06 10 00 00       	cmp    $0x1006,%eax
 8473efb:	7f 1b                	jg     8473f18 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x8b8>
 8473efd:	3d 04 10 00 00       	cmp    $0x1004,%eax
 8473f02:	0f 84 42 3f 00 00    	je     8477e4a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x47ea>
 8473f08:	3d 05 10 00 00       	cmp    $0x1005,%eax
 8473f0d:	0f 84 d1 3f 00 00    	je     8477ee4 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4884>
 8473f13:	e9 cf 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473f18:	3d 0a 10 00 00       	cmp    $0x100a,%eax
 8473f1d:	0f 84 5b 40 00 00    	je     8477f7e <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x491e>
 8473f23:	3d 0f 10 00 00       	cmp    $0x100f,%eax
 8473f28:	0f 84 43 43 00 00    	je     8478271 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4c11>
 8473f2e:	e9 b4 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473f33:	3d 77 17 00 00       	cmp    $0x1777,%eax
 8473f38:	0f 84 47 4e 00 00    	je     8478d85 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5725>
 8473f3e:	3d 77 17 00 00       	cmp    $0x1777,%eax
 8473f43:	7f 48                	jg     8473f8d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x92d>
 8473f45:	3d 74 17 00 00       	cmp    $0x1774,%eax
 8473f4a:	0f 84 01 4d 00 00    	je     8478c51 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x55f1>
 8473f50:	3d 74 17 00 00       	cmp    $0x1774,%eax
 8473f55:	7f 1b                	jg     8473f72 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x912>
 8473f57:	3d 3a 10 00 00       	cmp    $0x103a,%eax
 8473f5c:	0f 84 21 4b 00 00    	je     8478a83 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5423>
 8473f62:	3d 73 17 00 00       	cmp    $0x1773,%eax
 8473f67:	0f 84 4a 4c 00 00    	je     8478bb7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5557>
 8473f6d:	e9 75 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473f72:	3d 75 17 00 00       	cmp    $0x1775,%eax
 8473f77:	0f 84 41 4f 00 00    	je     8478ebe <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x585e>
 8473f7d:	3d 76 17 00 00       	cmp    $0x1776,%eax
 8473f82:	0f 84 63 4d 00 00    	je     8478ceb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x568b>
 8473f88:	e9 5a 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473f8d:	3d 7e 17 00 00       	cmp    $0x177e,%eax
 8473f92:	0f 84 5f 50 00 00    	je     8478ff7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5997>
 8473f98:	3d 7e 17 00 00       	cmp    $0x177e,%eax
 8473f9d:	7f 1b                	jg     8473fba <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x95a>
 8473f9f:	3d 78 17 00 00       	cmp    $0x1778,%eax
 8473fa4:	0f 84 75 4e 00 00    	je     8478e1f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x57bf>
 8473faa:	3d 7a 17 00 00       	cmp    $0x177a,%eax
 8473faf:	0f 84 a8 4f 00 00    	je     8478f5d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x58fd>
 8473fb5:	e9 2d 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473fba:	3d c0 17 00 00       	cmp    $0x17c0,%eax
 8473fbf:	0f 84 66 51 00 00    	je     847912b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5acb>
 8473fc5:	3d c2 17 00 00       	cmp    $0x17c2,%eax
 8473fca:	0f 84 f5 51 00 00    	je     84791c5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5b65>
 8473fd0:	e9 12 6c 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8473fd5:	3d 32 23 00 00       	cmp    $0x2332,%eax
 8473fda:	0f 84 68 49 00 00    	je     8478948 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x52e8>
 8473fe0:	3d 32 23 00 00       	cmp    $0x2332,%eax
 8473fe5:	0f 8f 5a 01 00 00    	jg     8474145 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xae5>
 8473feb:	3d bd 1b 00 00       	cmp    $0x1bbd,%eax
 8473ff0:	0f 84 e0 58 00 00    	je     84798d6 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6276>
 8473ff6:	3d bd 1b 00 00       	cmp    $0x1bbd,%eax
 8473ffb:	0f 8f a2 00 00 00    	jg     84740a3 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xa43>
 8474001:	3d 64 1b 00 00       	cmp    $0x1b64,%eax
 8474006:	0f 84 9e 56 00 00    	je     84796aa <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x604a>
 847400c:	3d 64 1b 00 00       	cmp    $0x1b64,%eax
 8474011:	7f 48                	jg     847405b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x9fb>
 8474013:	3d 61 1b 00 00       	cmp    $0x1b61,%eax
 8474018:	0f 84 b4 54 00 00    	je     84794d2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5e72>
 847401e:	3d 61 1b 00 00       	cmp    $0x1b61,%eax
 8474023:	7f 1b                	jg     8474040 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x9e0>
 8474025:	3d 5d 1b 00 00       	cmp    $0x1b5d,%eax
 847402a:	0f 84 64 53 00 00    	je     8479394 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5d34>
 8474030:	3d 5f 1b 00 00       	cmp    $0x1b5f,%eax
 8474035:	0f 84 f8 53 00 00    	je     8479433 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5dd3>
 847403b:	e9 a7 6b 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8474040:	3d 62 1b 00 00       	cmp    $0x1b62,%eax
 8474045:	0f 84 26 55 00 00    	je     8479571 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5f11>
 847404b:	3d 63 1b 00 00       	cmp    $0x1b63,%eax
 8474050:	0f 84 ba 55 00 00    	je     8479610 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5fb0>
 8474056:	e9 8c 6b 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847405b:	3d 6a 1b 00 00       	cmp    $0x1b6a,%eax
 8474060:	0f 84 45 3d 00 00    	je     8477dab <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x474b>
 8474066:	3d 6a 1b 00 00       	cmp    $0x1b6a,%eax
 847406b:	7f 1b                	jg     8474088 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xa28>
 847406d:	3d 65 1b 00 00       	cmp    $0x1b65,%eax
 8474072:	0f 84 cc 56 00 00    	je     8479744 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x60e4>
 8474078:	3d 66 1b 00 00       	cmp    $0x1b66,%eax
 847407d:	0f 84 dc 51 00 00    	je     847925f <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5bff>
 8474083:	e9 5f 6b 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8474088:	3d 6c 1b 00 00       	cmp    $0x1b6c,%eax
 847408d:	0f 84 b5 5a 00 00    	je     8479b48 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x64e8>
 8474093:	3d 6d 1b 00 00       	cmp    $0x1b6d,%eax
 8474098:	0f 84 44 5b 00 00    	je     8479be2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6582>
 847409e:	e9 44 6b 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84740a3:	3d 42 1f 00 00       	cmp    $0x1f42,%eax
 84740a8:	0f 84 00 5a 00 00    	je     8479aae <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x644e>
 84740ae:	3d 42 1f 00 00       	cmp    $0x1f42,%eax
 84740b3:	7f 48                	jg     84740fd <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xa9d>
 84740b5:	3d c7 1b 00 00       	cmp    $0x1bc7,%eax
 84740ba:	0f 84 9b 5e 00 00    	je     8479f5b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x68fb>
 84740c0:	3d c7 1b 00 00       	cmp    $0x1bc7,%eax
 84740c5:	7f 1b                	jg     84740e2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xa82>
 84740c7:	3d c1 1b 00 00       	cmp    $0x1bc1,%eax
 84740cc:	0f 84 a3 58 00 00    	je     8479975 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6315>
 84740d2:	3d c3 1b 00 00       	cmp    $0x1bc3,%eax
 84740d7:	0f 84 eb 5d 00 00    	je     8479ec8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6868>
 84740dd:	e9 05 6b 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84740e2:	3d c8 1b 00 00       	cmp    $0x1bc8,%eax
 84740e7:	0f 84 01 5f 00 00    	je     8479fee <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x698e>
 84740ed:	3d 40 1f 00 00       	cmp    $0x1f40,%eax
 84740f2:	0f 84 1c 59 00 00    	je     8479a14 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x63b4>
 84740f8:	e9 ea 6a 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84740fd:	3d 4b 1f 00 00       	cmp    $0x1f4b,%eax
 8474102:	0f 84 9a 5c 00 00    	je     8479da2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6742>
 8474108:	3d 4b 1f 00 00       	cmp    $0x1f4b,%eax
 847410d:	7f 1b                	jg     847412a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xaca>
 847410f:	3d 45 1f 00 00       	cmp    $0x1f45,%eax
 8474114:	0f 84 62 5b 00 00    	je     8479c7c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x661c>
 847411a:	3d 4a 1f 00 00       	cmp    $0x1f4a,%eax
 847411f:	0f 84 ec 5b 00 00    	je     8479d11 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x66b1>
 8474125:	e9 bd 6a 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847412a:	3d 4c 1f 00 00       	cmp    $0x1f4c,%eax
 847412f:	0f 84 fe 5c 00 00    	je     8479e33 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x67d3>
 8474135:	3d 28 23 00 00       	cmp    $0x2328,%eax
 847413a:	0f 84 67 47 00 00    	je     84788a7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x5247>
 8474140:	e9 a2 6a 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8474145:	3d dc 27 00 00       	cmp    $0x27dc,%eax
 847414a:	0f 84 4c 66 00 00    	je     847a79c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x713c>
 8474150:	3d dc 27 00 00       	cmp    $0x27dc,%eax
 8474155:	0f 8f a2 00 00 00    	jg     84741fd <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xb9d>
 847415b:	3d 19 27 00 00       	cmp    $0x2719,%eax
 8474160:	0f 84 ca 62 00 00    	je     847a430 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6dd0>
 8474166:	3d 19 27 00 00       	cmp    $0x2719,%eax
 847416b:	7f 48                	jg     84741b5 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xb55>
 847416d:	3d 13 27 00 00       	cmp    $0x2713,%eax
 8474172:	0f 84 e4 61 00 00    	je     847a35c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6cfc>
 8474178:	3d 13 27 00 00       	cmp    $0x2713,%eax
 847417d:	7f 1b                	jg     847419a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xb3a>
 847417f:	3d 11 27 00 00       	cmp    $0x2711,%eax
 8474184:	0f 84 5d 60 00 00    	je     847a1e7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6b87>
 847418a:	3d 12 27 00 00       	cmp    $0x2712,%eax
 847418f:	0f 84 86 61 00 00    	je     847a31b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6cbb>
 8474195:	e9 4d 6a 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847419a:	3d 17 27 00 00       	cmp    $0x2717,%eax
 847419f:	0f 84 cd 60 00 00    	je     847a272 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6c12>
 84741a5:	3d 18 27 00 00       	cmp    $0x2718,%eax
 84741aa:	0f 84 ed 61 00 00    	je     847a39d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6d3d>
 84741b0:	e9 32 6a 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84741b5:	3d d9 27 00 00       	cmp    $0x27d9,%eax
 84741ba:	0f 84 27 64 00 00    	je     847a5e7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6f87>
 84741c0:	3d d9 27 00 00       	cmp    $0x27d9,%eax
 84741c5:	7f 1b                	jg     84741e2 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xb82>
 84741c7:	3d 1a 27 00 00       	cmp    $0x271a,%eax
 84741cc:	0f 84 f1 62 00 00    	je     847a4c3 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6e63>
 84741d2:	3d 1b 27 00 00       	cmp    $0x271b,%eax
 84741d7:	0f 84 79 63 00 00    	je     847a556 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6ef6>
 84741dd:	e9 05 6a 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84741e2:	3d da 27 00 00       	cmp    $0x27da,%eax
 84741e7:	0f 84 8b 64 00 00    	je     847a678 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7018>
 84741ed:	3d db 27 00 00       	cmp    $0x27db,%eax
 84741f2:	0f 84 13 65 00 00    	je     847a70b <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x70ab>
 84741f8:	e9 ea 69 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 84741fd:	3d f2 27 00 00       	cmp    $0x27f2,%eax
 8474202:	0f 84 6f 68 00 00    	je     847aa77 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7417>
 8474208:	3d f2 27 00 00       	cmp    $0x27f2,%eax
 847420d:	7f 48                	jg     8474257 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xbf7>
 847420f:	3d e7 27 00 00       	cmp    $0x27e7,%eax
 8474214:	0f 84 cc 67 00 00    	je     847a9e6 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7386>
 847421a:	3d e7 27 00 00       	cmp    $0x27e7,%eax
 847421f:	7f 1b                	jg     847423c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xbdc>
 8474221:	3d df 27 00 00       	cmp    $0x27df,%eax
 8474226:	0f 84 01 66 00 00    	je     847a82d <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x71cd>
 847422c:	3d e2 27 00 00       	cmp    $0x27e2,%eax
 8474231:	0f 84 b1 02 00 00    	je     84744e8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xe88>
 8474237:	e9 ab 69 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847423c:	3d e8 27 00 00       	cmp    $0x27e8,%eax
 8474241:	0f 84 79 66 00 00    	je     847a8c0 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7260>
 8474247:	3d e9 27 00 00       	cmp    $0x27e9,%eax
 847424c:	0f 84 03 67 00 00    	je     847a955 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x72f5>
 8474252:	e9 90 69 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8474257:	3d fa 27 00 00       	cmp    $0x27fa,%eax
 847425c:	0f 84 f8 55 00 00    	je     847985a <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x61fa>
 8474262:	3d fa 27 00 00       	cmp    $0x27fa,%eax
 8474267:	7f 1b                	jg     8474284 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0xc24>
 8474269:	3d f8 27 00 00       	cmp    $0x27f8,%eax
 847426e:	0f 84 94 68 00 00    	je     847ab08 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x74a8>
 8474274:	3d f9 27 00 00       	cmp    $0x27f9,%eax
 8474279:	0f 84 5f 55 00 00    	je     84797de <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x617e>
 847427f:	e9 63 69 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 8474284:	3d fe 27 00 00       	cmp    $0x27fe,%eax
 8474289:	0f 84 07 69 00 00    	je     847ab96 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7536>
 847428f:	3d ff 27 00 00       	cmp    $0x27ff,%eax
 8474294:	0f 84 3e 69 00 00    	je     847abd8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7578>
 847429a:	e9 48 69 00 00       	jmp    847abe7 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x7587>
 847429f:	8b 45 08             	mov    0x8(%ebp),%eax
 84742a2:	89 85 2c fd ff ff    	mov    %eax,-0x2d4(%ebp)
 84742a8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84742ae:	89 04 24             	mov    %eax,(%esp)
 84742b1:	e8 90 49 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84742b6:	c7 44 24 04 41 00 00 	movl   $0x41,0x4(%esp)
 84742bd:	00 
 84742be:	89 04 24             	mov    %eax,(%esp)
 84742c1:	e8 90 49 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84742c6:	8b 85 2c fd ff ff    	mov    -0x2d4(%ebp),%eax
 84742cc:	8b 58 0a             	mov    0xa(%eax),%ebx
 84742cf:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84742d5:	89 04 24             	mov    %eax,(%esp)
 84742d8:	e8 69 49 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84742dd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84742e1:	89 04 24             	mov    %eax,(%esp)
 84742e4:	e8 6d 49 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84742e9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84742ef:	89 04 24             	mov    %eax,(%esp)
 84742f2:	e8 57 49 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84742f7:	c7 44 24 08 33 00 00 	movl   $0x33,0x8(%esp)
 84742fe:	00 
 84742ff:	8b 95 2c fd ff ff    	mov    -0x2d4(%ebp),%edx
 8474305:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474309:	89 04 24             	mov    %eax,(%esp)
 847430c:	e8 41 a3 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474311:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474316:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847431c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474320:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474327:	00 
 8474328:	89 04 24             	mov    %eax,(%esp)
 847432b:	e8 ae cc 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474330:	e9 c6 68 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474335:	8b 45 08             	mov    0x8(%ebp),%eax
 8474338:	89 85 30 fd ff ff    	mov    %eax,-0x2d0(%ebp)
 847433e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474344:	89 04 24             	mov    %eax,(%esp)
 8474347:	e8 fa 48 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847434c:	c7 44 24 04 42 00 00 	movl   $0x42,0x4(%esp)
 8474353:	00 
 8474354:	89 04 24             	mov    %eax,(%esp)
 8474357:	e8 fa 48 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847435c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474362:	89 04 24             	mov    %eax,(%esp)
 8474365:	e8 dc 48 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847436a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8474371:	ff 
 8474372:	89 04 24             	mov    %eax,(%esp)
 8474375:	e8 dc 48 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847437a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474380:	89 04 24             	mov    %eax,(%esp)
 8474383:	e8 c6 48 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474388:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 847438f:	00 
 8474390:	8b 95 30 fd ff ff    	mov    -0x2d0(%ebp),%edx
 8474396:	89 54 24 04          	mov    %edx,0x4(%esp)
 847439a:	89 04 24             	mov    %eax,(%esp)
 847439d:	e8 b0 a2 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84743a2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84743a7:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84743ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 84743b1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84743b8:	00 
 84743b9:	89 04 24             	mov    %eax,(%esp)
 84743bc:	e8 1d cc 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84743c1:	e9 35 68 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84743c6:	8b 45 08             	mov    0x8(%ebp),%eax
 84743c9:	89 85 34 fd ff ff    	mov    %eax,-0x2cc(%ebp)
 84743cf:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84743d5:	89 04 24             	mov    %eax,(%esp)
 84743d8:	e8 69 48 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84743dd:	c7 44 24 04 2d 01 00 	movl   $0x12d,0x4(%esp)
 84743e4:	00 
 84743e5:	89 04 24             	mov    %eax,(%esp)
 84743e8:	e8 69 48 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84743ed:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84743f3:	89 04 24             	mov    %eax,(%esp)
 84743f6:	e8 4b 48 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84743fb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8474402:	ff 
 8474403:	89 04 24             	mov    %eax,(%esp)
 8474406:	e8 4b 48 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847440b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474411:	89 04 24             	mov    %eax,(%esp)
 8474414:	e8 35 48 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474419:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8474420:	00 
 8474421:	8b 95 34 fd ff ff    	mov    -0x2cc(%ebp),%edx
 8474427:	89 54 24 04          	mov    %edx,0x4(%esp)
 847442b:	89 04 24             	mov    %eax,(%esp)
 847442e:	e8 1f a2 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474433:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474438:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847443e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474442:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474449:	00 
 847444a:	89 04 24             	mov    %eax,(%esp)
 847444d:	e8 8c cb 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474452:	e9 a4 67 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474457:	8b 45 08             	mov    0x8(%ebp),%eax
 847445a:	89 85 38 fd ff ff    	mov    %eax,-0x2c8(%ebp)
 8474460:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474466:	89 04 24             	mov    %eax,(%esp)
 8474469:	e8 d8 47 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847446e:	c7 44 24 04 43 00 00 	movl   $0x43,0x4(%esp)
 8474475:	00 
 8474476:	89 04 24             	mov    %eax,(%esp)
 8474479:	e8 d8 47 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847447e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474484:	89 04 24             	mov    %eax,(%esp)
 8474487:	e8 ba 47 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847448c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8474493:	ff 
 8474494:	89 04 24             	mov    %eax,(%esp)
 8474497:	e8 ba 47 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847449c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84744a2:	89 04 24             	mov    %eax,(%esp)
 84744a5:	e8 a4 47 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84744aa:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 84744b1:	00 
 84744b2:	8b 95 38 fd ff ff    	mov    -0x2c8(%ebp),%edx
 84744b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84744bc:	89 04 24             	mov    %eax,(%esp)
 84744bf:	e8 8e a1 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84744c4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84744c9:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84744cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 84744d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84744da:	00 
 84744db:	89 04 24             	mov    %eax,(%esp)
 84744de:	e8 fb ca 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84744e3:	e9 13 67 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84744e8:	8b 45 08             	mov    0x8(%ebp),%eax
 84744eb:	89 85 3c fd ff ff    	mov    %eax,-0x2c4(%ebp)
 84744f1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84744f7:	89 04 24             	mov    %eax,(%esp)
 84744fa:	e8 47 47 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84744ff:	c7 44 24 04 f7 02 00 	movl   $0x2f7,0x4(%esp)
 8474506:	00 
 8474507:	89 04 24             	mov    %eax,(%esp)
 847450a:	e8 47 47 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847450f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474515:	89 04 24             	mov    %eax,(%esp)
 8474518:	e8 29 47 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847451d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8474524:	ff 
 8474525:	89 04 24             	mov    %eax,(%esp)
 8474528:	e8 29 47 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847452d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474533:	89 04 24             	mov    %eax,(%esp)
 8474536:	e8 13 47 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847453b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8474542:	00 
 8474543:	8b 95 3c fd ff ff    	mov    -0x2c4(%ebp),%edx
 8474549:	89 54 24 04          	mov    %edx,0x4(%esp)
 847454d:	89 04 24             	mov    %eax,(%esp)
 8474550:	e8 fd a0 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474555:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847455a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474560:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474564:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847456b:	00 
 847456c:	89 04 24             	mov    %eax,(%esp)
 847456f:	e8 6a ca 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474574:	e9 82 66 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474579:	8b 45 08             	mov    0x8(%ebp),%eax
 847457c:	89 85 40 fd ff ff    	mov    %eax,-0x2c0(%ebp)
 8474582:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474588:	89 04 24             	mov    %eax,(%esp)
 847458b:	e8 b6 46 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474590:	c7 44 24 04 21 01 00 	movl   $0x121,0x4(%esp)
 8474597:	00 
 8474598:	89 04 24             	mov    %eax,(%esp)
 847459b:	e8 b6 46 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84745a0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84745a6:	89 04 24             	mov    %eax,(%esp)
 84745a9:	e8 98 46 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84745ae:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84745b5:	ff 
 84745b6:	89 04 24             	mov    %eax,(%esp)
 84745b9:	e8 98 46 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84745be:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84745c4:	89 04 24             	mov    %eax,(%esp)
 84745c7:	e8 82 46 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84745cc:	c7 44 24 08 0b 00 00 	movl   $0xb,0x8(%esp)
 84745d3:	00 
 84745d4:	8b 95 40 fd ff ff    	mov    -0x2c0(%ebp),%edx
 84745da:	89 54 24 04          	mov    %edx,0x4(%esp)
 84745de:	89 04 24             	mov    %eax,(%esp)
 84745e1:	e8 6c a0 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84745e6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84745eb:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84745f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84745f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84745fc:	00 
 84745fd:	89 04 24             	mov    %eax,(%esp)
 8474600:	e8 d9 c9 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474605:	e9 f1 65 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847460a:	8b 45 08             	mov    0x8(%ebp),%eax
 847460d:	89 85 44 fd ff ff    	mov    %eax,-0x2bc(%ebp)
 8474613:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474619:	89 04 24             	mov    %eax,(%esp)
 847461c:	e8 25 46 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474621:	c7 44 24 04 ab 00 00 	movl   $0xab,0x4(%esp)
 8474628:	00 
 8474629:	89 04 24             	mov    %eax,(%esp)
 847462c:	e8 25 46 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474631:	8b 85 44 fd ff ff    	mov    -0x2bc(%ebp),%eax
 8474637:	8b 58 0a             	mov    0xa(%eax),%ebx
 847463a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474640:	89 04 24             	mov    %eax,(%esp)
 8474643:	e8 fe 45 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474648:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847464c:	89 04 24             	mov    %eax,(%esp)
 847464f:	e8 02 46 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474654:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847465a:	89 04 24             	mov    %eax,(%esp)
 847465d:	e8 ec 45 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474662:	c7 44 24 08 9f 01 00 	movl   $0x19f,0x8(%esp)
 8474669:	00 
 847466a:	8b 95 44 fd ff ff    	mov    -0x2bc(%ebp),%edx
 8474670:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474674:	89 04 24             	mov    %eax,(%esp)
 8474677:	e8 d6 9f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847467c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474681:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474687:	89 54 24 08          	mov    %edx,0x8(%esp)
 847468b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474692:	00 
 8474693:	89 04 24             	mov    %eax,(%esp)
 8474696:	e8 43 c9 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847469b:	e9 5b 65 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84746a0:	8b 45 08             	mov    0x8(%ebp),%eax
 84746a3:	89 85 48 fd ff ff    	mov    %eax,-0x2b8(%ebp)
 84746a9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84746af:	89 04 24             	mov    %eax,(%esp)
 84746b2:	e8 8f 45 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84746b7:	c7 44 24 04 ac 00 00 	movl   $0xac,0x4(%esp)
 84746be:	00 
 84746bf:	89 04 24             	mov    %eax,(%esp)
 84746c2:	e8 8f 45 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84746c7:	8b 85 48 fd ff ff    	mov    -0x2b8(%ebp),%eax
 84746cd:	8b 40 0a             	mov    0xa(%eax),%eax
 84746d0:	89 c3                	mov    %eax,%ebx
 84746d2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84746d8:	89 04 24             	mov    %eax,(%esp)
 84746db:	e8 66 45 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84746e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84746e4:	89 04 24             	mov    %eax,(%esp)
 84746e7:	e8 6a 45 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84746ec:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84746f2:	89 04 24             	mov    %eax,(%esp)
 84746f5:	e8 54 45 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84746fa:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 8474701:	00 
 8474702:	8b 95 48 fd ff ff    	mov    -0x2b8(%ebp),%edx
 8474708:	89 54 24 04          	mov    %edx,0x4(%esp)
 847470c:	89 04 24             	mov    %eax,(%esp)
 847470f:	e8 3e 9f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474714:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474719:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847471f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474723:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847472a:	00 
 847472b:	89 04 24             	mov    %eax,(%esp)
 847472e:	e8 ab c8 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474733:	e9 c3 64 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474738:	8b 45 08             	mov    0x8(%ebp),%eax
 847473b:	89 85 4c fd ff ff    	mov    %eax,-0x2b4(%ebp)
 8474741:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474747:	89 04 24             	mov    %eax,(%esp)
 847474a:	e8 f7 44 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847474f:	c7 44 24 04 ad 00 00 	movl   $0xad,0x4(%esp)
 8474756:	00 
 8474757:	89 04 24             	mov    %eax,(%esp)
 847475a:	e8 f7 44 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847475f:	8b 85 4c fd ff ff    	mov    -0x2b4(%ebp),%eax
 8474765:	8b 40 0a             	mov    0xa(%eax),%eax
 8474768:	89 c3                	mov    %eax,%ebx
 847476a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474770:	89 04 24             	mov    %eax,(%esp)
 8474773:	e8 ce 44 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474778:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847477c:	89 04 24             	mov    %eax,(%esp)
 847477f:	e8 d2 44 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474784:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847478a:	89 04 24             	mov    %eax,(%esp)
 847478d:	e8 bc 44 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474792:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 8474799:	00 
 847479a:	8b 95 4c fd ff ff    	mov    -0x2b4(%ebp),%edx
 84747a0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84747a4:	89 04 24             	mov    %eax,(%esp)
 84747a7:	e8 a6 9e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84747ac:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84747b1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84747b7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84747bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84747c2:	00 
 84747c3:	89 04 24             	mov    %eax,(%esp)
 84747c6:	e8 13 c8 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84747cb:	e9 2b 64 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84747d0:	8b 45 08             	mov    0x8(%ebp),%eax
 84747d3:	89 85 50 fd ff ff    	mov    %eax,-0x2b0(%ebp)
 84747d9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84747df:	89 04 24             	mov    %eax,(%esp)
 84747e2:	e8 5f 44 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84747e7:	c7 44 24 04 44 00 00 	movl   $0x44,0x4(%esp)
 84747ee:	00 
 84747ef:	89 04 24             	mov    %eax,(%esp)
 84747f2:	e8 5f 44 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84747f7:	8b 85 50 fd ff ff    	mov    -0x2b0(%ebp),%eax
 84747fd:	8b 40 0e             	mov    0xe(%eax),%eax
 8474800:	89 c3                	mov    %eax,%ebx
 8474802:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474808:	89 04 24             	mov    %eax,(%esp)
 847480b:	e8 36 44 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474810:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474814:	89 04 24             	mov    %eax,(%esp)
 8474817:	e8 3a 44 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847481c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474822:	89 04 24             	mov    %eax,(%esp)
 8474825:	e8 24 44 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847482a:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 8474831:	00 
 8474832:	8b 95 50 fd ff ff    	mov    -0x2b0(%ebp),%edx
 8474838:	89 54 24 04          	mov    %edx,0x4(%esp)
 847483c:	89 04 24             	mov    %eax,(%esp)
 847483f:	e8 0e 9e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474844:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474849:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847484f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474853:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847485a:	00 
 847485b:	89 04 24             	mov    %eax,(%esp)
 847485e:	e8 7b c7 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474863:	e9 93 63 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474868:	8b 45 08             	mov    0x8(%ebp),%eax
 847486b:	89 85 54 fd ff ff    	mov    %eax,-0x2ac(%ebp)
 8474871:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474877:	89 04 24             	mov    %eax,(%esp)
 847487a:	e8 c7 43 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847487f:	c7 44 24 04 ae 00 00 	movl   $0xae,0x4(%esp)
 8474886:	00 
 8474887:	89 04 24             	mov    %eax,(%esp)
 847488a:	e8 c7 43 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847488f:	8b 85 54 fd ff ff    	mov    -0x2ac(%ebp),%eax
 8474895:	8b 40 0e             	mov    0xe(%eax),%eax
 8474898:	89 c3                	mov    %eax,%ebx
 847489a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84748a0:	89 04 24             	mov    %eax,(%esp)
 84748a3:	e8 9e 43 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84748a8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84748ac:	89 04 24             	mov    %eax,(%esp)
 84748af:	e8 a2 43 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84748b4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84748ba:	89 04 24             	mov    %eax,(%esp)
 84748bd:	e8 8c 43 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84748c2:	c7 44 24 08 3b 00 00 	movl   $0x3b,0x8(%esp)
 84748c9:	00 
 84748ca:	8b 95 54 fd ff ff    	mov    -0x2ac(%ebp),%edx
 84748d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84748d4:	89 04 24             	mov    %eax,(%esp)
 84748d7:	e8 76 9d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84748dc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84748e1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84748e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84748eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84748f2:	00 
 84748f3:	89 04 24             	mov    %eax,(%esp)
 84748f6:	e8 e3 c6 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84748fb:	e9 fb 62 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474900:	8b 45 08             	mov    0x8(%ebp),%eax
 8474903:	89 85 58 fd ff ff    	mov    %eax,-0x2a8(%ebp)
 8474909:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847490f:	89 04 24             	mov    %eax,(%esp)
 8474912:	e8 2f 43 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474917:	c7 44 24 04 46 00 00 	movl   $0x46,0x4(%esp)
 847491e:	00 
 847491f:	89 04 24             	mov    %eax,(%esp)
 8474922:	e8 2f 43 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474927:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847492d:	89 04 24             	mov    %eax,(%esp)
 8474930:	e8 11 43 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474935:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847493c:	ff 
 847493d:	89 04 24             	mov    %eax,(%esp)
 8474940:	e8 11 43 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474945:	8b 85 58 fd ff ff    	mov    -0x2a8(%ebp),%eax
 847494b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847494f:	0f b7 d8             	movzwl %ax,%ebx
 8474952:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474958:	89 04 24             	mov    %eax,(%esp)
 847495b:	e8 ee 42 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474960:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8474964:	8b 95 58 fd ff ff    	mov    -0x2a8(%ebp),%edx
 847496a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847496e:	89 04 24             	mov    %eax,(%esp)
 8474971:	e8 dc 9c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474976:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847497b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474981:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474985:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847498c:	00 
 847498d:	89 04 24             	mov    %eax,(%esp)
 8474990:	e8 49 c6 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474995:	e9 61 62 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847499a:	8b 45 08             	mov    0x8(%ebp),%eax
 847499d:	89 85 5c fd ff ff    	mov    %eax,-0x2a4(%ebp)
 84749a3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84749a9:	89 04 24             	mov    %eax,(%esp)
 84749ac:	e8 95 42 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84749b1:	c7 44 24 04 47 00 00 	movl   $0x47,0x4(%esp)
 84749b8:	00 
 84749b9:	89 04 24             	mov    %eax,(%esp)
 84749bc:	e8 95 42 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84749c1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84749c7:	89 04 24             	mov    %eax,(%esp)
 84749ca:	e8 77 42 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84749cf:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84749d6:	ff 
 84749d7:	89 04 24             	mov    %eax,(%esp)
 84749da:	e8 77 42 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84749df:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84749e5:	89 04 24             	mov    %eax,(%esp)
 84749e8:	e8 61 42 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84749ed:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 84749f4:	00 
 84749f5:	8b 95 5c fd ff ff    	mov    -0x2a4(%ebp),%edx
 84749fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84749ff:	89 04 24             	mov    %eax,(%esp)
 8474a02:	e8 4b 9c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474a07:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474a0c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474a12:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474a16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474a1d:	00 
 8474a1e:	89 04 24             	mov    %eax,(%esp)
 8474a21:	e8 b8 c5 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474a26:	e9 d0 61 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474a2b:	8b 45 08             	mov    0x8(%ebp),%eax
 8474a2e:	89 85 60 fd ff ff    	mov    %eax,-0x2a0(%ebp)
 8474a34:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474a3a:	89 04 24             	mov    %eax,(%esp)
 8474a3d:	e8 04 42 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474a42:	c7 44 24 04 4a 00 00 	movl   $0x4a,0x4(%esp)
 8474a49:	00 
 8474a4a:	89 04 24             	mov    %eax,(%esp)
 8474a4d:	e8 04 42 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474a52:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474a58:	89 04 24             	mov    %eax,(%esp)
 8474a5b:	e8 e6 41 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474a60:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8474a67:	ff 
 8474a68:	89 04 24             	mov    %eax,(%esp)
 8474a6b:	e8 e6 41 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474a70:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474a76:	89 04 24             	mov    %eax,(%esp)
 8474a79:	e8 d0 41 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474a7e:	c7 44 24 08 22 00 00 	movl   $0x22,0x8(%esp)
 8474a85:	00 
 8474a86:	8b 95 60 fd ff ff    	mov    -0x2a0(%ebp),%edx
 8474a8c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474a90:	89 04 24             	mov    %eax,(%esp)
 8474a93:	e8 ba 9b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474a98:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474a9d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474aa3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474aa7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474aae:	00 
 8474aaf:	89 04 24             	mov    %eax,(%esp)
 8474ab2:	e8 27 c5 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474ab7:	e9 3f 61 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474abc:	8b 45 08             	mov    0x8(%ebp),%eax
 8474abf:	89 85 64 fd ff ff    	mov    %eax,-0x29c(%ebp)
 8474ac5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474acb:	89 04 24             	mov    %eax,(%esp)
 8474ace:	e8 73 41 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474ad3:	c7 44 24 04 62 00 00 	movl   $0x62,0x4(%esp)
 8474ada:	00 
 8474adb:	89 04 24             	mov    %eax,(%esp)
 8474ade:	e8 73 41 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474ae3:	8b 85 64 fd ff ff    	mov    -0x29c(%ebp),%eax
 8474ae9:	8b 58 29             	mov    0x29(%eax),%ebx
 8474aec:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474af2:	89 04 24             	mov    %eax,(%esp)
 8474af5:	e8 4c 41 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474afa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474afe:	89 04 24             	mov    %eax,(%esp)
 8474b01:	e8 50 41 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474b06:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474b0c:	89 04 24             	mov    %eax,(%esp)
 8474b0f:	e8 3a 41 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474b14:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 8474b1b:	00 
 8474b1c:	8b 95 64 fd ff ff    	mov    -0x29c(%ebp),%edx
 8474b22:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474b26:	89 04 24             	mov    %eax,(%esp)
 8474b29:	e8 24 9b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474b2e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474b33:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474b39:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474b3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474b44:	00 
 8474b45:	89 04 24             	mov    %eax,(%esp)
 8474b48:	e8 91 c4 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474b4d:	e9 a9 60 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474b52:	8b 45 08             	mov    0x8(%ebp),%eax
 8474b55:	89 85 68 fd ff ff    	mov    %eax,-0x298(%ebp)
 8474b5b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474b61:	89 04 24             	mov    %eax,(%esp)
 8474b64:	e8 dd 40 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474b69:	c7 44 24 04 61 00 00 	movl   $0x61,0x4(%esp)
 8474b70:	00 
 8474b71:	89 04 24             	mov    %eax,(%esp)
 8474b74:	e8 dd 40 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474b79:	8b 85 68 fd ff ff    	mov    -0x298(%ebp),%eax
 8474b7f:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474b82:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474b88:	89 04 24             	mov    %eax,(%esp)
 8474b8b:	e8 b6 40 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474b90:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474b94:	89 04 24             	mov    %eax,(%esp)
 8474b97:	e8 ba 40 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474b9c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474ba2:	89 04 24             	mov    %eax,(%esp)
 8474ba5:	e8 a4 40 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474baa:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8474bb1:	00 
 8474bb2:	8b 95 68 fd ff ff    	mov    -0x298(%ebp),%edx
 8474bb8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474bbc:	89 04 24             	mov    %eax,(%esp)
 8474bbf:	e8 8e 9a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474bc4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474bc9:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474bcf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474bd3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474bda:	00 
 8474bdb:	89 04 24             	mov    %eax,(%esp)
 8474bde:	e8 fb c3 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474be3:	e9 13 60 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474be8:	8b 45 08             	mov    0x8(%ebp),%eax
 8474beb:	89 85 6c fd ff ff    	mov    %eax,-0x294(%ebp)
 8474bf1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474bf7:	89 04 24             	mov    %eax,(%esp)
 8474bfa:	e8 47 40 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474bff:	c7 44 24 04 60 00 00 	movl   $0x60,0x4(%esp)
 8474c06:	00 
 8474c07:	89 04 24             	mov    %eax,(%esp)
 8474c0a:	e8 47 40 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474c0f:	8b 85 6c fd ff ff    	mov    -0x294(%ebp),%eax
 8474c15:	8b 40 0a             	mov    0xa(%eax),%eax
 8474c18:	89 c3                	mov    %eax,%ebx
 8474c1a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474c20:	89 04 24             	mov    %eax,(%esp)
 8474c23:	e8 1e 40 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474c28:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474c2c:	89 04 24             	mov    %eax,(%esp)
 8474c2f:	e8 22 40 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474c34:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474c3a:	89 04 24             	mov    %eax,(%esp)
 8474c3d:	e8 0c 40 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474c42:	c7 44 24 08 39 01 00 	movl   $0x139,0x8(%esp)
 8474c49:	00 
 8474c4a:	8b 95 6c fd ff ff    	mov    -0x294(%ebp),%edx
 8474c50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474c54:	89 04 24             	mov    %eax,(%esp)
 8474c57:	e8 f6 99 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474c5c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474c61:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474c67:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474c6b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474c72:	00 
 8474c73:	89 04 24             	mov    %eax,(%esp)
 8474c76:	e8 63 c3 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474c7b:	e9 7b 5f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474c80:	8b 45 08             	mov    0x8(%ebp),%eax
 8474c83:	89 85 70 fd ff ff    	mov    %eax,-0x290(%ebp)
 8474c89:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474c8f:	89 04 24             	mov    %eax,(%esp)
 8474c92:	e8 af 3f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474c97:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 8474c9e:	00 
 8474c9f:	89 04 24             	mov    %eax,(%esp)
 8474ca2:	e8 af 3f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474ca7:	8b 85 70 fd ff ff    	mov    -0x290(%ebp),%eax
 8474cad:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474cb0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474cb6:	89 04 24             	mov    %eax,(%esp)
 8474cb9:	e8 88 3f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474cbe:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474cc2:	89 04 24             	mov    %eax,(%esp)
 8474cc5:	e8 8c 3f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474cca:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474cd0:	89 04 24             	mov    %eax,(%esp)
 8474cd3:	e8 76 3f c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474cd8:	c7 44 24 08 5a 00 00 	movl   $0x5a,0x8(%esp)
 8474cdf:	00 
 8474ce0:	8b 95 70 fd ff ff    	mov    -0x290(%ebp),%edx
 8474ce6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474cea:	89 04 24             	mov    %eax,(%esp)
 8474ced:	e8 60 99 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474cf2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474cf7:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474cfd:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474d01:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474d08:	00 
 8474d09:	89 04 24             	mov    %eax,(%esp)
 8474d0c:	e8 cd c2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474d11:	e9 e5 5e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474d16:	8b 45 08             	mov    0x8(%ebp),%eax
 8474d19:	89 85 74 fd ff ff    	mov    %eax,-0x28c(%ebp)
 8474d1f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474d25:	89 04 24             	mov    %eax,(%esp)
 8474d28:	e8 19 3f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474d2d:	c7 44 24 04 57 00 00 	movl   $0x57,0x4(%esp)
 8474d34:	00 
 8474d35:	89 04 24             	mov    %eax,(%esp)
 8474d38:	e8 19 3f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474d3d:	8b 85 74 fd ff ff    	mov    -0x28c(%ebp),%eax
 8474d43:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474d46:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474d4c:	89 04 24             	mov    %eax,(%esp)
 8474d4f:	e8 f2 3e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474d54:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474d58:	89 04 24             	mov    %eax,(%esp)
 8474d5b:	e8 f6 3e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474d60:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474d66:	89 04 24             	mov    %eax,(%esp)
 8474d69:	e8 e0 3e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474d6e:	c7 44 24 08 55 00 00 	movl   $0x55,0x8(%esp)
 8474d75:	00 
 8474d76:	8b 95 74 fd ff ff    	mov    -0x28c(%ebp),%edx
 8474d7c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474d80:	89 04 24             	mov    %eax,(%esp)
 8474d83:	e8 ca 98 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474d88:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474d8d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474d93:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474d97:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474d9e:	00 
 8474d9f:	89 04 24             	mov    %eax,(%esp)
 8474da2:	e8 37 c2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474da7:	e9 4f 5e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474dac:	8b 45 08             	mov    0x8(%ebp),%eax
 8474daf:	89 85 78 fd ff ff    	mov    %eax,-0x288(%ebp)
 8474db5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474dbb:	89 04 24             	mov    %eax,(%esp)
 8474dbe:	e8 83 3e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474dc3:	c7 44 24 04 58 00 00 	movl   $0x58,0x4(%esp)
 8474dca:	00 
 8474dcb:	89 04 24             	mov    %eax,(%esp)
 8474dce:	e8 83 3e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474dd3:	8b 85 78 fd ff ff    	mov    -0x288(%ebp),%eax
 8474dd9:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474ddc:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474de2:	89 04 24             	mov    %eax,(%esp)
 8474de5:	e8 5c 3e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474dea:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474dee:	89 04 24             	mov    %eax,(%esp)
 8474df1:	e8 60 3e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474df6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474dfc:	89 04 24             	mov    %eax,(%esp)
 8474dff:	e8 4a 3e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474e04:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8474e0b:	00 
 8474e0c:	8b 95 78 fd ff ff    	mov    -0x288(%ebp),%edx
 8474e12:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474e16:	89 04 24             	mov    %eax,(%esp)
 8474e19:	e8 34 98 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474e1e:	8b 85 78 fd ff ff    	mov    -0x288(%ebp),%eax
 8474e24:	8b 78 12             	mov    0x12(%eax),%edi
 8474e27:	8b 85 78 fd ff ff    	mov    -0x288(%ebp),%eax
 8474e2d:	8b 70 0e             	mov    0xe(%eax),%esi
 8474e30:	8b 85 78 fd ff ff    	mov    -0x288(%ebp),%eax
 8474e36:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474e39:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8474e40:	00 
 8474e41:	c7 44 24 08 a4 01 00 	movl   $0x1a4,0x8(%esp)
 8474e48:	00 
 8474e49:	c7 44 24 04 00 0f c7 	movl   $0x8c70f00,0x4(%esp)
 8474e50:	08 
 8474e51:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 8474e57:	89 04 24             	mov    %eax,(%esp)
 8474e5a:	e8 b9 a8 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8474e5f:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8474e63:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8474e67:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8474e6b:	c7 44 24 04 7c ff c6 	movl   $0x8c6ff7c,0x4(%esp)
 8474e72:	08 
 8474e73:	8d 85 f8 fc ff ff    	lea    -0x308(%ebp),%eax
 8474e79:	89 04 24             	mov    %eax,(%esp)
 8474e7c:	e8 07 a9 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8474e81:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474e86:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474e8c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474e90:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474e97:	00 
 8474e98:	89 04 24             	mov    %eax,(%esp)
 8474e9b:	e8 3e c1 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474ea0:	e9 56 5d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474ea5:	8b 45 08             	mov    0x8(%ebp),%eax
 8474ea8:	89 85 7c fd ff ff    	mov    %eax,-0x284(%ebp)
 8474eae:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474eb4:	89 04 24             	mov    %eax,(%esp)
 8474eb7:	e8 8a 3d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474ebc:	c7 44 24 04 59 00 00 	movl   $0x59,0x4(%esp)
 8474ec3:	00 
 8474ec4:	89 04 24             	mov    %eax,(%esp)
 8474ec7:	e8 8a 3d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474ecc:	8b 85 7c fd ff ff    	mov    -0x284(%ebp),%eax
 8474ed2:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474ed5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474edb:	89 04 24             	mov    %eax,(%esp)
 8474ede:	e8 63 3d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474ee3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474ee7:	89 04 24             	mov    %eax,(%esp)
 8474eea:	e8 67 3d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474eef:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474ef5:	89 04 24             	mov    %eax,(%esp)
 8474ef8:	e8 51 3d c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474efd:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8474f04:	00 
 8474f05:	8b 95 7c fd ff ff    	mov    -0x284(%ebp),%edx
 8474f0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474f0f:	89 04 24             	mov    %eax,(%esp)
 8474f12:	e8 3b 97 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474f17:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474f1c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474f22:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474f26:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474f2d:	00 
 8474f2e:	89 04 24             	mov    %eax,(%esp)
 8474f31:	e8 a8 c0 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474f36:	e9 c0 5c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474f3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8474f3e:	89 85 80 fd ff ff    	mov    %eax,-0x280(%ebp)
 8474f44:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474f4a:	89 04 24             	mov    %eax,(%esp)
 8474f4d:	e8 f4 3c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474f52:	c7 44 24 04 5a 00 00 	movl   $0x5a,0x4(%esp)
 8474f59:	00 
 8474f5a:	89 04 24             	mov    %eax,(%esp)
 8474f5d:	e8 f4 3c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474f62:	8b 85 80 fd ff ff    	mov    -0x280(%ebp),%eax
 8474f68:	8b 58 0a             	mov    0xa(%eax),%ebx
 8474f6b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474f71:	89 04 24             	mov    %eax,(%esp)
 8474f74:	e8 cd 3c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474f79:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8474f7d:	89 04 24             	mov    %eax,(%esp)
 8474f80:	e8 d1 3c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8474f85:	8b 85 80 fd ff ff    	mov    -0x280(%ebp),%eax
 8474f8b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8474f8f:	0f b7 d8             	movzwl %ax,%ebx
 8474f92:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474f98:	89 04 24             	mov    %eax,(%esp)
 8474f9b:	e8 ae 3c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8474fa0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8474fa4:	8b 95 80 fd ff ff    	mov    -0x280(%ebp),%edx
 8474faa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8474fae:	89 04 24             	mov    %eax,(%esp)
 8474fb1:	e8 9c 96 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8474fb6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8474fbb:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8474fc1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8474fc5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8474fcc:	00 
 8474fcd:	89 04 24             	mov    %eax,(%esp)
 8474fd0:	e8 09 c0 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8474fd5:	e9 21 5c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8474fda:	8b 45 08             	mov    0x8(%ebp),%eax
 8474fdd:	89 85 84 fd ff ff    	mov    %eax,-0x27c(%ebp)
 8474fe3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8474fe9:	89 04 24             	mov    %eax,(%esp)
 8474fec:	e8 55 3c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8474ff1:	c7 44 24 04 5b 00 00 	movl   $0x5b,0x4(%esp)
 8474ff8:	00 
 8474ff9:	89 04 24             	mov    %eax,(%esp)
 8474ffc:	e8 55 3c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475001:	8b 85 84 fd ff ff    	mov    -0x27c(%ebp),%eax
 8475007:	8b 58 0a             	mov    0xa(%eax),%ebx
 847500a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475010:	89 04 24             	mov    %eax,(%esp)
 8475013:	e8 2e 3c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475018:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847501c:	89 04 24             	mov    %eax,(%esp)
 847501f:	e8 32 3c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475024:	8b 85 84 fd ff ff    	mov    -0x27c(%ebp),%eax
 847502a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847502e:	0f b7 d8             	movzwl %ax,%ebx
 8475031:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475037:	89 04 24             	mov    %eax,(%esp)
 847503a:	e8 0f 3c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847503f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8475043:	8b 95 84 fd ff ff    	mov    -0x27c(%ebp),%edx
 8475049:	89 54 24 04          	mov    %edx,0x4(%esp)
 847504d:	89 04 24             	mov    %eax,(%esp)
 8475050:	e8 fd 95 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475055:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847505a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475060:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475064:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847506b:	00 
 847506c:	89 04 24             	mov    %eax,(%esp)
 847506f:	e8 6a bf 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475074:	e9 82 5b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475079:	8b 45 08             	mov    0x8(%ebp),%eax
 847507c:	89 85 88 fd ff ff    	mov    %eax,-0x278(%ebp)
 8475082:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475088:	89 04 24             	mov    %eax,(%esp)
 847508b:	e8 b6 3b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475090:	c7 44 24 04 c6 00 00 	movl   $0xc6,0x4(%esp)
 8475097:	00 
 8475098:	89 04 24             	mov    %eax,(%esp)
 847509b:	e8 b6 3b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84750a0:	8b 85 88 fd ff ff    	mov    -0x278(%ebp),%eax
 84750a6:	8b 58 0a             	mov    0xa(%eax),%ebx
 84750a9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84750af:	89 04 24             	mov    %eax,(%esp)
 84750b2:	e8 8f 3b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84750b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84750bb:	89 04 24             	mov    %eax,(%esp)
 84750be:	e8 93 3b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84750c3:	8b 85 88 fd ff ff    	mov    -0x278(%ebp),%eax
 84750c9:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84750cd:	0f b7 d8             	movzwl %ax,%ebx
 84750d0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84750d6:	89 04 24             	mov    %eax,(%esp)
 84750d9:	e8 70 3b c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84750de:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84750e2:	8b 95 88 fd ff ff    	mov    -0x278(%ebp),%edx
 84750e8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84750ec:	89 04 24             	mov    %eax,(%esp)
 84750ef:	e8 5e 95 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84750f4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84750f9:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84750ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475103:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847510a:	00 
 847510b:	89 04 24             	mov    %eax,(%esp)
 847510e:	e8 cb be 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475113:	e9 e3 5a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475118:	8b 45 08             	mov    0x8(%ebp),%eax
 847511b:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
 8475121:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475127:	89 04 24             	mov    %eax,(%esp)
 847512a:	e8 17 3b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847512f:	c7 44 24 04 c7 00 00 	movl   $0xc7,0x4(%esp)
 8475136:	00 
 8475137:	89 04 24             	mov    %eax,(%esp)
 847513a:	e8 17 3b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847513f:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
 8475145:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475148:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847514e:	89 04 24             	mov    %eax,(%esp)
 8475151:	e8 f0 3a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475156:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847515a:	89 04 24             	mov    %eax,(%esp)
 847515d:	e8 f4 3a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475162:	8b 85 8c fd ff ff    	mov    -0x274(%ebp),%eax
 8475168:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847516c:	0f b7 d8             	movzwl %ax,%ebx
 847516f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475175:	89 04 24             	mov    %eax,(%esp)
 8475178:	e8 d1 3a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847517d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8475181:	8b 95 8c fd ff ff    	mov    -0x274(%ebp),%edx
 8475187:	89 54 24 04          	mov    %edx,0x4(%esp)
 847518b:	89 04 24             	mov    %eax,(%esp)
 847518e:	e8 bf 94 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475193:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475198:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847519e:	89 54 24 08          	mov    %edx,0x8(%esp)
 84751a2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84751a9:	00 
 84751aa:	89 04 24             	mov    %eax,(%esp)
 84751ad:	e8 2c be 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84751b2:	e9 44 5a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84751b7:	8b 45 08             	mov    0x8(%ebp),%eax
 84751ba:	89 85 90 fd ff ff    	mov    %eax,-0x270(%ebp)
 84751c0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84751c6:	89 04 24             	mov    %eax,(%esp)
 84751c9:	e8 78 3a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84751ce:	c7 44 24 04 c8 00 00 	movl   $0xc8,0x4(%esp)
 84751d5:	00 
 84751d6:	89 04 24             	mov    %eax,(%esp)
 84751d9:	e8 78 3a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84751de:	8b 85 90 fd ff ff    	mov    -0x270(%ebp),%eax
 84751e4:	8b 58 0a             	mov    0xa(%eax),%ebx
 84751e7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84751ed:	89 04 24             	mov    %eax,(%esp)
 84751f0:	e8 51 3a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84751f5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84751f9:	89 04 24             	mov    %eax,(%esp)
 84751fc:	e8 55 3a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475201:	8b 85 90 fd ff ff    	mov    -0x270(%ebp),%eax
 8475207:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847520b:	0f b7 d8             	movzwl %ax,%ebx
 847520e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475214:	89 04 24             	mov    %eax,(%esp)
 8475217:	e8 32 3a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847521c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8475220:	8b 95 90 fd ff ff    	mov    -0x270(%ebp),%edx
 8475226:	89 54 24 04          	mov    %edx,0x4(%esp)
 847522a:	89 04 24             	mov    %eax,(%esp)
 847522d:	e8 20 94 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475232:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475237:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847523d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475241:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475248:	00 
 8475249:	89 04 24             	mov    %eax,(%esp)
 847524c:	e8 8d bd 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475251:	e9 a5 59 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475256:	8b 45 08             	mov    0x8(%ebp),%eax
 8475259:	89 85 94 fd ff ff    	mov    %eax,-0x26c(%ebp)
 847525f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475265:	89 04 24             	mov    %eax,(%esp)
 8475268:	e8 d9 39 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847526d:	c7 44 24 04 5c 00 00 	movl   $0x5c,0x4(%esp)
 8475274:	00 
 8475275:	89 04 24             	mov    %eax,(%esp)
 8475278:	e8 d9 39 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847527d:	8b 85 94 fd ff ff    	mov    -0x26c(%ebp),%eax
 8475283:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475286:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847528c:	89 04 24             	mov    %eax,(%esp)
 847528f:	e8 b2 39 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475294:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475298:	89 04 24             	mov    %eax,(%esp)
 847529b:	e8 b6 39 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84752a0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84752a6:	89 04 24             	mov    %eax,(%esp)
 84752a9:	e8 a0 39 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84752ae:	c7 44 24 08 3f 23 00 	movl   $0x233f,0x8(%esp)
 84752b5:	00 
 84752b6:	8b 95 94 fd ff ff    	mov    -0x26c(%ebp),%edx
 84752bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84752c0:	89 04 24             	mov    %eax,(%esp)
 84752c3:	e8 8a 93 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84752c8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84752cd:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84752d3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84752d7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84752de:	00 
 84752df:	89 04 24             	mov    %eax,(%esp)
 84752e2:	e8 f7 bc 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84752e7:	e9 0f 59 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84752ec:	8b 45 08             	mov    0x8(%ebp),%eax
 84752ef:	89 85 98 fd ff ff    	mov    %eax,-0x268(%ebp)
 84752f5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84752fb:	89 04 24             	mov    %eax,(%esp)
 84752fe:	e8 43 39 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475303:	c7 44 24 04 5d 00 00 	movl   $0x5d,0x4(%esp)
 847530a:	00 
 847530b:	89 04 24             	mov    %eax,(%esp)
 847530e:	e8 43 39 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475313:	8b 85 98 fd ff ff    	mov    -0x268(%ebp),%eax
 8475319:	8b 58 0b             	mov    0xb(%eax),%ebx
 847531c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475322:	89 04 24             	mov    %eax,(%esp)
 8475325:	e8 1c 39 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847532a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847532e:	89 04 24             	mov    %eax,(%esp)
 8475331:	e8 20 39 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475336:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847533c:	89 04 24             	mov    %eax,(%esp)
 847533f:	e8 0a 39 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475344:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 847534b:	00 
 847534c:	8b 95 98 fd ff ff    	mov    -0x268(%ebp),%edx
 8475352:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475356:	89 04 24             	mov    %eax,(%esp)
 8475359:	e8 f4 92 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847535e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475363:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475369:	89 54 24 08          	mov    %edx,0x8(%esp)
 847536d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475374:	00 
 8475375:	89 04 24             	mov    %eax,(%esp)
 8475378:	e8 61 bc 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847537d:	e9 79 58 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475382:	8b 45 08             	mov    0x8(%ebp),%eax
 8475385:	89 85 9c fd ff ff    	mov    %eax,-0x264(%ebp)
 847538b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475391:	89 04 24             	mov    %eax,(%esp)
 8475394:	e8 ad 38 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475399:	c7 44 24 04 5e 00 00 	movl   $0x5e,0x4(%esp)
 84753a0:	00 
 84753a1:	89 04 24             	mov    %eax,(%esp)
 84753a4:	e8 ad 38 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84753a9:	8b 85 9c fd ff ff    	mov    -0x264(%ebp),%eax
 84753af:	8b 58 0f             	mov    0xf(%eax),%ebx
 84753b2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84753b8:	89 04 24             	mov    %eax,(%esp)
 84753bb:	e8 86 38 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84753c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84753c4:	89 04 24             	mov    %eax,(%esp)
 84753c7:	e8 8a 38 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84753cc:	8b 85 9c fd ff ff    	mov    -0x264(%ebp),%eax
 84753d2:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84753d6:	0f b7 d8             	movzwl %ax,%ebx
 84753d9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84753df:	89 04 24             	mov    %eax,(%esp)
 84753e2:	e8 67 38 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84753e7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84753eb:	8b 95 9c fd ff ff    	mov    -0x264(%ebp),%edx
 84753f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84753f5:	89 04 24             	mov    %eax,(%esp)
 84753f8:	e8 55 92 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84753fd:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475402:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475408:	89 54 24 08          	mov    %edx,0x8(%esp)
 847540c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475413:	00 
 8475414:	89 04 24             	mov    %eax,(%esp)
 8475417:	e8 c2 bb 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847541c:	e9 da 57 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475421:	8b 45 08             	mov    0x8(%ebp),%eax
 8475424:	89 85 a0 fd ff ff    	mov    %eax,-0x260(%ebp)
 847542a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475430:	89 04 24             	mov    %eax,(%esp)
 8475433:	e8 0e 38 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475438:	c7 44 24 04 5f 00 00 	movl   $0x5f,0x4(%esp)
 847543f:	00 
 8475440:	89 04 24             	mov    %eax,(%esp)
 8475443:	e8 0e 38 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475448:	8b 85 a0 fd ff ff    	mov    -0x260(%ebp),%eax
 847544e:	8b 40 0a             	mov    0xa(%eax),%eax
 8475451:	89 c3                	mov    %eax,%ebx
 8475453:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475459:	89 04 24             	mov    %eax,(%esp)
 847545c:	e8 e5 37 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475461:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475465:	89 04 24             	mov    %eax,(%esp)
 8475468:	e8 e9 37 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847546d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475473:	89 04 24             	mov    %eax,(%esp)
 8475476:	e8 d3 37 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847547b:	c7 44 24 08 8f 01 00 	movl   $0x18f,0x8(%esp)
 8475482:	00 
 8475483:	8b 95 a0 fd ff ff    	mov    -0x260(%ebp),%edx
 8475489:	89 54 24 04          	mov    %edx,0x4(%esp)
 847548d:	89 04 24             	mov    %eax,(%esp)
 8475490:	e8 bd 91 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475495:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847549a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84754a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84754a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84754ab:	00 
 84754ac:	89 04 24             	mov    %eax,(%esp)
 84754af:	e8 2a bb 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84754b4:	e9 42 57 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84754b9:	8b 45 08             	mov    0x8(%ebp),%eax
 84754bc:	89 85 a4 fd ff ff    	mov    %eax,-0x25c(%ebp)
 84754c2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84754c8:	89 04 24             	mov    %eax,(%esp)
 84754cb:	e8 76 37 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84754d0:	c7 44 24 04 d8 00 00 	movl   $0xd8,0x4(%esp)
 84754d7:	00 
 84754d8:	89 04 24             	mov    %eax,(%esp)
 84754db:	e8 76 37 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84754e0:	8b 85 a4 fd ff ff    	mov    -0x25c(%ebp),%eax
 84754e6:	8b 40 0a             	mov    0xa(%eax),%eax
 84754e9:	89 c3                	mov    %eax,%ebx
 84754eb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84754f1:	89 04 24             	mov    %eax,(%esp)
 84754f4:	e8 4d 37 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84754f9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84754fd:	89 04 24             	mov    %eax,(%esp)
 8475500:	e8 51 37 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475505:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847550b:	89 04 24             	mov    %eax,(%esp)
 847550e:	e8 3b 37 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475513:	c7 44 24 08 77 00 00 	movl   $0x77,0x8(%esp)
 847551a:	00 
 847551b:	8b 95 a4 fd ff ff    	mov    -0x25c(%ebp),%edx
 8475521:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475525:	89 04 24             	mov    %eax,(%esp)
 8475528:	e8 25 91 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847552d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475532:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475538:	89 54 24 08          	mov    %edx,0x8(%esp)
 847553c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475543:	00 
 8475544:	89 04 24             	mov    %eax,(%esp)
 8475547:	e8 92 ba 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847554c:	e9 aa 56 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475551:	8b 45 08             	mov    0x8(%ebp),%eax
 8475554:	89 85 a8 fd ff ff    	mov    %eax,-0x258(%ebp)
 847555a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475560:	89 04 24             	mov    %eax,(%esp)
 8475563:	e8 de 36 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475568:	c7 44 24 04 64 00 00 	movl   $0x64,0x4(%esp)
 847556f:	00 
 8475570:	89 04 24             	mov    %eax,(%esp)
 8475573:	e8 de 36 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475578:	8b 85 a8 fd ff ff    	mov    -0x258(%ebp),%eax
 847557e:	8b 40 0e             	mov    0xe(%eax),%eax
 8475581:	89 c3                	mov    %eax,%ebx
 8475583:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475589:	89 04 24             	mov    %eax,(%esp)
 847558c:	e8 b5 36 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475591:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475595:	89 04 24             	mov    %eax,(%esp)
 8475598:	e8 b9 36 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847559d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84755a3:	89 04 24             	mov    %eax,(%esp)
 84755a6:	e8 a3 36 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84755ab:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 84755b2:	00 
 84755b3:	8b 95 a8 fd ff ff    	mov    -0x258(%ebp),%edx
 84755b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84755bd:	89 04 24             	mov    %eax,(%esp)
 84755c0:	e8 8d 90 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84755c5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84755ca:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84755d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84755d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84755db:	00 
 84755dc:	89 04 24             	mov    %eax,(%esp)
 84755df:	e8 fa b9 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84755e4:	e9 12 56 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84755e9:	8b 45 08             	mov    0x8(%ebp),%eax
 84755ec:	89 85 ac fd ff ff    	mov    %eax,-0x254(%ebp)
 84755f2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84755f8:	89 04 24             	mov    %eax,(%esp)
 84755fb:	e8 46 36 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475600:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 8475607:	00 
 8475608:	89 04 24             	mov    %eax,(%esp)
 847560b:	e8 46 36 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475610:	8b 85 ac fd ff ff    	mov    -0x254(%ebp),%eax
 8475616:	8b 40 0e             	mov    0xe(%eax),%eax
 8475619:	89 c3                	mov    %eax,%ebx
 847561b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475621:	89 04 24             	mov    %eax,(%esp)
 8475624:	e8 1d 36 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475629:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847562d:	89 04 24             	mov    %eax,(%esp)
 8475630:	e8 21 36 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475635:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847563b:	89 04 24             	mov    %eax,(%esp)
 847563e:	e8 0b 36 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475643:	c7 44 24 08 3a 00 00 	movl   $0x3a,0x8(%esp)
 847564a:	00 
 847564b:	8b 95 ac fd ff ff    	mov    -0x254(%ebp),%edx
 8475651:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475655:	89 04 24             	mov    %eax,(%esp)
 8475658:	e8 f5 8f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847565d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475662:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475668:	89 54 24 08          	mov    %edx,0x8(%esp)
 847566c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475673:	00 
 8475674:	89 04 24             	mov    %eax,(%esp)
 8475677:	e8 62 b9 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847567c:	e9 7a 55 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475681:	8b 45 08             	mov    0x8(%ebp),%eax
 8475684:	89 85 b0 fd ff ff    	mov    %eax,-0x250(%ebp)
 847568a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475690:	89 04 24             	mov    %eax,(%esp)
 8475693:	e8 ae 35 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475698:	c7 44 24 04 66 00 00 	movl   $0x66,0x4(%esp)
 847569f:	00 
 84756a0:	89 04 24             	mov    %eax,(%esp)
 84756a3:	e8 ae 35 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84756a8:	8b 85 b0 fd ff ff    	mov    -0x250(%ebp),%eax
 84756ae:	8b 40 0a             	mov    0xa(%eax),%eax
 84756b1:	89 c3                	mov    %eax,%ebx
 84756b3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84756b9:	89 04 24             	mov    %eax,(%esp)
 84756bc:	e8 85 35 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84756c1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84756c5:	89 04 24             	mov    %eax,(%esp)
 84756c8:	e8 89 35 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84756cd:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84756d3:	89 04 24             	mov    %eax,(%esp)
 84756d6:	e8 73 35 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84756db:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 84756e2:	00 
 84756e3:	8b 95 b0 fd ff ff    	mov    -0x250(%ebp),%edx
 84756e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84756ed:	89 04 24             	mov    %eax,(%esp)
 84756f0:	e8 5d 8f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84756f5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84756fa:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475700:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475704:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847570b:	00 
 847570c:	89 04 24             	mov    %eax,(%esp)
 847570f:	e8 ca b8 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475714:	e9 e2 54 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475719:	8b 45 08             	mov    0x8(%ebp),%eax
 847571c:	89 85 b4 fd ff ff    	mov    %eax,-0x24c(%ebp)
 8475722:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475728:	89 04 24             	mov    %eax,(%esp)
 847572b:	e8 16 35 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475730:	c7 44 24 04 d7 00 00 	movl   $0xd7,0x4(%esp)
 8475737:	00 
 8475738:	89 04 24             	mov    %eax,(%esp)
 847573b:	e8 16 35 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475740:	8b 85 b4 fd ff ff    	mov    -0x24c(%ebp),%eax
 8475746:	8b 40 0a             	mov    0xa(%eax),%eax
 8475749:	89 c3                	mov    %eax,%ebx
 847574b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475751:	89 04 24             	mov    %eax,(%esp)
 8475754:	e8 ed 34 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475759:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847575d:	89 04 24             	mov    %eax,(%esp)
 8475760:	e8 f1 34 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475765:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847576b:	89 04 24             	mov    %eax,(%esp)
 847576e:	e8 db 34 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475773:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 847577a:	00 
 847577b:	8b 95 b4 fd ff ff    	mov    -0x24c(%ebp),%edx
 8475781:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475785:	89 04 24             	mov    %eax,(%esp)
 8475788:	e8 c5 8e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847578d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475792:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475798:	89 54 24 08          	mov    %edx,0x8(%esp)
 847579c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84757a3:	00 
 84757a4:	89 04 24             	mov    %eax,(%esp)
 84757a7:	e8 32 b8 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84757ac:	e9 4a 54 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84757b1:	8b 45 08             	mov    0x8(%ebp),%eax
 84757b4:	89 85 b8 fd ff ff    	mov    %eax,-0x248(%ebp)
 84757ba:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84757c0:	89 04 24             	mov    %eax,(%esp)
 84757c3:	e8 7e 34 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84757c8:	c7 44 24 04 6c 00 00 	movl   $0x6c,0x4(%esp)
 84757cf:	00 
 84757d0:	89 04 24             	mov    %eax,(%esp)
 84757d3:	e8 7e 34 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84757d8:	8b 85 b8 fd ff ff    	mov    -0x248(%ebp),%eax
 84757de:	8b 58 0b             	mov    0xb(%eax),%ebx
 84757e1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84757e7:	89 04 24             	mov    %eax,(%esp)
 84757ea:	e8 57 34 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84757ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84757f3:	89 04 24             	mov    %eax,(%esp)
 84757f6:	e8 5b 34 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84757fb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475801:	89 04 24             	mov    %eax,(%esp)
 8475804:	e8 45 34 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475809:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8475810:	00 
 8475811:	8b 95 b8 fd ff ff    	mov    -0x248(%ebp),%edx
 8475817:	89 54 24 04          	mov    %edx,0x4(%esp)
 847581b:	89 04 24             	mov    %eax,(%esp)
 847581e:	e8 2f 8e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475823:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475828:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847582e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475832:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475839:	00 
 847583a:	89 04 24             	mov    %eax,(%esp)
 847583d:	e8 9c b7 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475842:	e9 b4 53 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475847:	8b 45 08             	mov    0x8(%ebp),%eax
 847584a:	89 85 bc fd ff ff    	mov    %eax,-0x244(%ebp)
 8475850:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475856:	89 04 24             	mov    %eax,(%esp)
 8475859:	e8 e8 33 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847585e:	c7 44 24 04 6d 00 00 	movl   $0x6d,0x4(%esp)
 8475865:	00 
 8475866:	89 04 24             	mov    %eax,(%esp)
 8475869:	e8 e8 33 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847586e:	8b 85 bc fd ff ff    	mov    -0x244(%ebp),%eax
 8475874:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475877:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847587d:	89 04 24             	mov    %eax,(%esp)
 8475880:	e8 c1 33 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475885:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475889:	89 04 24             	mov    %eax,(%esp)
 847588c:	e8 c5 33 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475891:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475897:	89 04 24             	mov    %eax,(%esp)
 847589a:	e8 af 33 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847589f:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 84758a6:	00 
 84758a7:	8b 95 bc fd ff ff    	mov    -0x244(%ebp),%edx
 84758ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 84758b1:	89 04 24             	mov    %eax,(%esp)
 84758b4:	e8 99 8d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84758b9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84758be:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84758c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84758c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84758cf:	00 
 84758d0:	89 04 24             	mov    %eax,(%esp)
 84758d3:	e8 06 b7 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84758d8:	e9 1e 53 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84758dd:	8b 45 08             	mov    0x8(%ebp),%eax
 84758e0:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
 84758e6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84758ec:	89 04 24             	mov    %eax,(%esp)
 84758ef:	e8 52 33 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84758f4:	c7 44 24 04 6e 00 00 	movl   $0x6e,0x4(%esp)
 84758fb:	00 
 84758fc:	89 04 24             	mov    %eax,(%esp)
 84758ff:	e8 52 33 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475904:	8b 85 c0 fd ff ff    	mov    -0x240(%ebp),%eax
 847590a:	8b 58 0a             	mov    0xa(%eax),%ebx
 847590d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475913:	89 04 24             	mov    %eax,(%esp)
 8475916:	e8 2b 33 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847591b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847591f:	89 04 24             	mov    %eax,(%esp)
 8475922:	e8 2f 33 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475927:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847592d:	89 04 24             	mov    %eax,(%esp)
 8475930:	e8 19 33 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475935:	c7 44 24 08 32 00 00 	movl   $0x32,0x8(%esp)
 847593c:	00 
 847593d:	8b 95 c0 fd ff ff    	mov    -0x240(%ebp),%edx
 8475943:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475947:	89 04 24             	mov    %eax,(%esp)
 847594a:	e8 03 8d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847594f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475954:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847595a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847595e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475965:	00 
 8475966:	89 04 24             	mov    %eax,(%esp)
 8475969:	e8 70 b6 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847596e:	e9 88 52 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475973:	8b 45 08             	mov    0x8(%ebp),%eax
 8475976:	89 85 c4 fd ff ff    	mov    %eax,-0x23c(%ebp)
 847597c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475982:	89 04 24             	mov    %eax,(%esp)
 8475985:	e8 bc 32 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847598a:	c7 44 24 04 6f 00 00 	movl   $0x6f,0x4(%esp)
 8475991:	00 
 8475992:	89 04 24             	mov    %eax,(%esp)
 8475995:	e8 bc 32 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847599a:	8b 85 c4 fd ff ff    	mov    -0x23c(%ebp),%eax
 84759a0:	8b 58 0d             	mov    0xd(%eax),%ebx
 84759a3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84759a9:	89 04 24             	mov    %eax,(%esp)
 84759ac:	e8 95 32 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84759b1:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84759b5:	89 04 24             	mov    %eax,(%esp)
 84759b8:	e8 99 32 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84759bd:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84759c3:	89 04 24             	mov    %eax,(%esp)
 84759c6:	e8 83 32 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84759cb:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 84759d2:	00 
 84759d3:	8b 95 c4 fd ff ff    	mov    -0x23c(%ebp),%edx
 84759d9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84759dd:	89 04 24             	mov    %eax,(%esp)
 84759e0:	e8 6d 8c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84759e5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84759ea:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84759f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84759f4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84759fb:	00 
 84759fc:	89 04 24             	mov    %eax,(%esp)
 84759ff:	e8 da b5 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475a04:	e9 f2 51 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475a09:	8b 45 08             	mov    0x8(%ebp),%eax
 8475a0c:	89 85 c8 fd ff ff    	mov    %eax,-0x238(%ebp)
 8475a12:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475a18:	89 04 24             	mov    %eax,(%esp)
 8475a1b:	e8 26 32 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475a20:	c7 44 24 04 70 00 00 	movl   $0x70,0x4(%esp)
 8475a27:	00 
 8475a28:	89 04 24             	mov    %eax,(%esp)
 8475a2b:	e8 26 32 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475a30:	8b 85 c8 fd ff ff    	mov    -0x238(%ebp),%eax
 8475a36:	8b 58 0d             	mov    0xd(%eax),%ebx
 8475a39:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475a3f:	89 04 24             	mov    %eax,(%esp)
 8475a42:	e8 ff 31 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475a47:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475a4b:	89 04 24             	mov    %eax,(%esp)
 8475a4e:	e8 03 32 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475a53:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475a59:	89 04 24             	mov    %eax,(%esp)
 8475a5c:	e8 ed 31 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475a61:	c7 44 24 08 39 00 00 	movl   $0x39,0x8(%esp)
 8475a68:	00 
 8475a69:	8b 95 c8 fd ff ff    	mov    -0x238(%ebp),%edx
 8475a6f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475a73:	89 04 24             	mov    %eax,(%esp)
 8475a76:	e8 d7 8b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475a7b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475a80:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475a86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475a8a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475a91:	00 
 8475a92:	89 04 24             	mov    %eax,(%esp)
 8475a95:	e8 44 b5 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475a9a:	e9 5c 51 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475a9f:	8b 45 08             	mov    0x8(%ebp),%eax
 8475aa2:	89 85 cc fd ff ff    	mov    %eax,-0x234(%ebp)
 8475aa8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475aae:	89 04 24             	mov    %eax,(%esp)
 8475ab1:	e8 90 31 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475ab6:	c7 44 24 04 71 00 00 	movl   $0x71,0x4(%esp)
 8475abd:	00 
 8475abe:	89 04 24             	mov    %eax,(%esp)
 8475ac1:	e8 90 31 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475ac6:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
 8475acc:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475acf:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475ad5:	89 04 24             	mov    %eax,(%esp)
 8475ad8:	e8 69 31 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475add:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475ae1:	89 04 24             	mov    %eax,(%esp)
 8475ae4:	e8 6d 31 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475ae9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475aef:	89 04 24             	mov    %eax,(%esp)
 8475af2:	e8 57 31 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475af7:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 8475afe:	00 
 8475aff:	8b 95 cc fd ff ff    	mov    -0x234(%ebp),%edx
 8475b05:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475b09:	89 04 24             	mov    %eax,(%esp)
 8475b0c:	e8 41 8b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475b11:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475b16:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475b1c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475b20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475b27:	00 
 8475b28:	89 04 24             	mov    %eax,(%esp)
 8475b2b:	e8 ae b4 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475b30:	e9 c6 50 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475b35:	8b 45 08             	mov    0x8(%ebp),%eax
 8475b38:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
 8475b3e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475b44:	89 04 24             	mov    %eax,(%esp)
 8475b47:	e8 fa 30 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475b4c:	c7 44 24 04 72 00 00 	movl   $0x72,0x4(%esp)
 8475b53:	00 
 8475b54:	89 04 24             	mov    %eax,(%esp)
 8475b57:	e8 fa 30 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475b5c:	8b 85 d0 fd ff ff    	mov    -0x230(%ebp),%eax
 8475b62:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475b65:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475b6b:	89 04 24             	mov    %eax,(%esp)
 8475b6e:	e8 d3 30 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475b73:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475b77:	89 04 24             	mov    %eax,(%esp)
 8475b7a:	e8 d7 30 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475b7f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475b85:	89 04 24             	mov    %eax,(%esp)
 8475b88:	e8 c1 30 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475b8d:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 8475b94:	00 
 8475b95:	8b 95 d0 fd ff ff    	mov    -0x230(%ebp),%edx
 8475b9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475b9f:	89 04 24             	mov    %eax,(%esp)
 8475ba2:	e8 ab 8a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475ba7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475bac:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475bb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475bb6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475bbd:	00 
 8475bbe:	89 04 24             	mov    %eax,(%esp)
 8475bc1:	e8 18 b4 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475bc6:	e9 30 50 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475bcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8475bce:	89 85 d4 fd ff ff    	mov    %eax,-0x22c(%ebp)
 8475bd4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475bda:	89 04 24             	mov    %eax,(%esp)
 8475bdd:	e8 64 30 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475be2:	c7 44 24 04 73 00 00 	movl   $0x73,0x4(%esp)
 8475be9:	00 
 8475bea:	89 04 24             	mov    %eax,(%esp)
 8475bed:	e8 64 30 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475bf2:	8b 85 d4 fd ff ff    	mov    -0x22c(%ebp),%eax
 8475bf8:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475bfb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475c01:	89 04 24             	mov    %eax,(%esp)
 8475c04:	e8 3d 30 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475c09:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475c0d:	89 04 24             	mov    %eax,(%esp)
 8475c10:	e8 41 30 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475c15:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475c1b:	89 04 24             	mov    %eax,(%esp)
 8475c1e:	e8 2b 30 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475c23:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8475c2a:	00 
 8475c2b:	8b 95 d4 fd ff ff    	mov    -0x22c(%ebp),%edx
 8475c31:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475c35:	89 04 24             	mov    %eax,(%esp)
 8475c38:	e8 15 8a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475c3d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475c42:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475c48:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475c4c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475c53:	00 
 8475c54:	89 04 24             	mov    %eax,(%esp)
 8475c57:	e8 82 b3 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475c5c:	e9 9a 4f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475c61:	8b 45 08             	mov    0x8(%ebp),%eax
 8475c64:	89 85 d8 fd ff ff    	mov    %eax,-0x228(%ebp)
 8475c6a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475c70:	89 04 24             	mov    %eax,(%esp)
 8475c73:	e8 ce 2f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475c78:	c7 44 24 04 74 00 00 	movl   $0x74,0x4(%esp)
 8475c7f:	00 
 8475c80:	89 04 24             	mov    %eax,(%esp)
 8475c83:	e8 ce 2f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475c88:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
 8475c8e:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475c91:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475c97:	89 04 24             	mov    %eax,(%esp)
 8475c9a:	e8 a7 2f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475c9f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475ca3:	89 04 24             	mov    %eax,(%esp)
 8475ca6:	e8 ab 2f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475cab:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
 8475cb1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8475cb5:	0f b7 d8             	movzwl %ax,%ebx
 8475cb8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475cbe:	89 04 24             	mov    %eax,(%esp)
 8475cc1:	e8 88 2f c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475cc6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8475cca:	8b 95 d8 fd ff ff    	mov    -0x228(%ebp),%edx
 8475cd0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475cd4:	89 04 24             	mov    %eax,(%esp)
 8475cd7:	e8 76 89 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475cdc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475ce1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475ce7:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475ceb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475cf2:	00 
 8475cf3:	89 04 24             	mov    %eax,(%esp)
 8475cf6:	e8 e3 b2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475cfb:	e9 fb 4e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475d00:	8b 45 08             	mov    0x8(%ebp),%eax
 8475d03:	89 85 dc fd ff ff    	mov    %eax,-0x224(%ebp)
 8475d09:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475d0f:	89 04 24             	mov    %eax,(%esp)
 8475d12:	e8 2f 2f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475d17:	c7 44 24 04 75 00 00 	movl   $0x75,0x4(%esp)
 8475d1e:	00 
 8475d1f:	89 04 24             	mov    %eax,(%esp)
 8475d22:	e8 2f 2f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475d27:	8b 85 dc fd ff ff    	mov    -0x224(%ebp),%eax
 8475d2d:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475d30:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475d36:	89 04 24             	mov    %eax,(%esp)
 8475d39:	e8 08 2f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475d3e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475d42:	89 04 24             	mov    %eax,(%esp)
 8475d45:	e8 0c 2f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475d4a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475d50:	89 04 24             	mov    %eax,(%esp)
 8475d53:	e8 f6 2e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475d58:	c7 44 24 08 e1 01 00 	movl   $0x1e1,0x8(%esp)
 8475d5f:	00 
 8475d60:	8b 95 dc fd ff ff    	mov    -0x224(%ebp),%edx
 8475d66:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475d6a:	89 04 24             	mov    %eax,(%esp)
 8475d6d:	e8 e0 88 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475d72:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475d77:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475d7d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475d81:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475d88:	00 
 8475d89:	89 04 24             	mov    %eax,(%esp)
 8475d8c:	e8 4d b2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475d91:	e9 65 4e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475d96:	8b 45 08             	mov    0x8(%ebp),%eax
 8475d99:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
 8475d9f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475da5:	89 04 24             	mov    %eax,(%esp)
 8475da8:	e8 99 2e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475dad:	c7 44 24 04 76 00 00 	movl   $0x76,0x4(%esp)
 8475db4:	00 
 8475db5:	89 04 24             	mov    %eax,(%esp)
 8475db8:	e8 99 2e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475dbd:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
 8475dc3:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475dc6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475dcc:	89 04 24             	mov    %eax,(%esp)
 8475dcf:	e8 72 2e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475dd4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475dd8:	89 04 24             	mov    %eax,(%esp)
 8475ddb:	e8 76 2e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475de0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475de6:	89 04 24             	mov    %eax,(%esp)
 8475de9:	e8 60 2e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475dee:	c7 44 24 08 38 00 00 	movl   $0x38,0x8(%esp)
 8475df5:	00 
 8475df6:	8b 95 e0 fd ff ff    	mov    -0x220(%ebp),%edx
 8475dfc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475e00:	89 04 24             	mov    %eax,(%esp)
 8475e03:	e8 4a 88 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475e08:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475e0d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475e13:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475e17:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475e1e:	00 
 8475e1f:	89 04 24             	mov    %eax,(%esp)
 8475e22:	e8 b7 b1 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475e27:	e9 cf 4d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475e2c:	8b 45 08             	mov    0x8(%ebp),%eax
 8475e2f:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
 8475e35:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475e3b:	89 04 24             	mov    %eax,(%esp)
 8475e3e:	e8 03 2e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475e43:	c7 44 24 04 7a 00 00 	movl   $0x7a,0x4(%esp)
 8475e4a:	00 
 8475e4b:	89 04 24             	mov    %eax,(%esp)
 8475e4e:	e8 03 2e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475e53:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
 8475e59:	8b 58 0a             	mov    0xa(%eax),%ebx
 8475e5c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475e62:	89 04 24             	mov    %eax,(%esp)
 8475e65:	e8 dc 2d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475e6a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8475e6e:	89 04 24             	mov    %eax,(%esp)
 8475e71:	e8 e0 2d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475e76:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475e7c:	89 04 24             	mov    %eax,(%esp)
 8475e7f:	e8 ca 2d c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475e84:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8475e8b:	00 
 8475e8c:	8b 95 e4 fd ff ff    	mov    -0x21c(%ebp),%edx
 8475e92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475e96:	89 04 24             	mov    %eax,(%esp)
 8475e99:	e8 b4 87 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475e9e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475ea3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475ea9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475ead:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475eb4:	00 
 8475eb5:	89 04 24             	mov    %eax,(%esp)
 8475eb8:	e8 21 b1 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475ebd:	e9 39 4d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475ec2:	8b 45 08             	mov    0x8(%ebp),%eax
 8475ec5:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
 8475ecb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475ed1:	89 04 24             	mov    %eax,(%esp)
 8475ed4:	e8 6d 2d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475ed9:	c7 44 24 04 85 00 00 	movl   $0x85,0x4(%esp)
 8475ee0:	00 
 8475ee1:	89 04 24             	mov    %eax,(%esp)
 8475ee4:	e8 6d 2d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475ee9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475eef:	89 04 24             	mov    %eax,(%esp)
 8475ef2:	e8 4f 2d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475ef7:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8475efe:	ff 
 8475eff:	89 04 24             	mov    %eax,(%esp)
 8475f02:	e8 4f 2d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475f07:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475f0d:	89 04 24             	mov    %eax,(%esp)
 8475f10:	e8 39 2d c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475f15:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8475f1c:	00 
 8475f1d:	8b 95 e8 fd ff ff    	mov    -0x218(%ebp),%edx
 8475f23:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475f27:	89 04 24             	mov    %eax,(%esp)
 8475f2a:	e8 23 87 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475f2f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475f34:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475f3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475f3e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475f45:	00 
 8475f46:	89 04 24             	mov    %eax,(%esp)
 8475f49:	e8 90 b0 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475f4e:	e9 a8 4c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475f53:	8b 45 08             	mov    0x8(%ebp),%eax
 8475f56:	89 85 ec fd ff ff    	mov    %eax,-0x214(%ebp)
 8475f5c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475f62:	89 04 24             	mov    %eax,(%esp)
 8475f65:	e8 dc 2c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475f6a:	c7 44 24 04 86 00 00 	movl   $0x86,0x4(%esp)
 8475f71:	00 
 8475f72:	89 04 24             	mov    %eax,(%esp)
 8475f75:	e8 dc 2c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475f7a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475f80:	89 04 24             	mov    %eax,(%esp)
 8475f83:	e8 be 2c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475f88:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8475f8f:	ff 
 8475f90:	89 04 24             	mov    %eax,(%esp)
 8475f93:	e8 be 2c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8475f98:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475f9e:	89 04 24             	mov    %eax,(%esp)
 8475fa1:	e8 a8 2c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8475fa6:	c7 44 24 08 0e 00 00 	movl   $0xe,0x8(%esp)
 8475fad:	00 
 8475fae:	8b 95 ec fd ff ff    	mov    -0x214(%ebp),%edx
 8475fb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8475fb8:	89 04 24             	mov    %eax,(%esp)
 8475fbb:	e8 92 86 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8475fc0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8475fc5:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8475fcb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8475fcf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8475fd6:	00 
 8475fd7:	89 04 24             	mov    %eax,(%esp)
 8475fda:	e8 ff af 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8475fdf:	e9 17 4c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8475fe4:	8b 45 08             	mov    0x8(%ebp),%eax
 8475fe7:	89 85 f0 fd ff ff    	mov    %eax,-0x210(%ebp)
 8475fed:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8475ff3:	89 04 24             	mov    %eax,(%esp)
 8475ff6:	e8 4b 2c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8475ffb:	c7 44 24 04 55 00 00 	movl   $0x55,0x4(%esp)
 8476002:	00 
 8476003:	89 04 24             	mov    %eax,(%esp)
 8476006:	e8 4b 2c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847600b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476011:	89 04 24             	mov    %eax,(%esp)
 8476014:	e8 2d 2c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476019:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476020:	ff 
 8476021:	89 04 24             	mov    %eax,(%esp)
 8476024:	e8 2d 2c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476029:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847602f:	89 04 24             	mov    %eax,(%esp)
 8476032:	e8 17 2c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476037:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 847603e:	00 
 847603f:	8b 95 f0 fd ff ff    	mov    -0x210(%ebp),%edx
 8476045:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476049:	89 04 24             	mov    %eax,(%esp)
 847604c:	e8 01 86 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476051:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476056:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847605c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476060:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476067:	00 
 8476068:	89 04 24             	mov    %eax,(%esp)
 847606b:	e8 6e af 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476070:	e9 86 4b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476075:	8b 45 08             	mov    0x8(%ebp),%eax
 8476078:	89 85 f4 fd ff ff    	mov    %eax,-0x20c(%ebp)
 847607e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476084:	89 04 24             	mov    %eax,(%esp)
 8476087:	e8 ba 2b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847608c:	c7 44 24 04 82 00 00 	movl   $0x82,0x4(%esp)
 8476093:	00 
 8476094:	89 04 24             	mov    %eax,(%esp)
 8476097:	e8 ba 2b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847609c:	8b 85 f4 fd ff ff    	mov    -0x20c(%ebp),%eax
 84760a2:	8b 40 0e             	mov    0xe(%eax),%eax
 84760a5:	89 c3                	mov    %eax,%ebx
 84760a7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84760ad:	89 04 24             	mov    %eax,(%esp)
 84760b0:	e8 91 2b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84760b5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84760b9:	89 04 24             	mov    %eax,(%esp)
 84760bc:	e8 95 2b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84760c1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84760c7:	89 04 24             	mov    %eax,(%esp)
 84760ca:	e8 7f 2b c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84760cf:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 84760d6:	00 
 84760d7:	8b 95 f4 fd ff ff    	mov    -0x20c(%ebp),%edx
 84760dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84760e1:	89 04 24             	mov    %eax,(%esp)
 84760e4:	e8 69 85 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84760e9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84760ee:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84760f4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84760f8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84760ff:	00 
 8476100:	89 04 24             	mov    %eax,(%esp)
 8476103:	e8 d6 ae 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476108:	e9 ee 4a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847610d:	8b 45 08             	mov    0x8(%ebp),%eax
 8476110:	89 85 f8 fd ff ff    	mov    %eax,-0x208(%ebp)
 8476116:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847611c:	89 04 24             	mov    %eax,(%esp)
 847611f:	e8 22 2b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476124:	c7 44 24 04 99 00 00 	movl   $0x99,0x4(%esp)
 847612b:	00 
 847612c:	89 04 24             	mov    %eax,(%esp)
 847612f:	e8 22 2b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476134:	8b 85 f8 fd ff ff    	mov    -0x208(%ebp),%eax
 847613a:	8b 58 0a             	mov    0xa(%eax),%ebx
 847613d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476143:	89 04 24             	mov    %eax,(%esp)
 8476146:	e8 fb 2a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847614b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847614f:	89 04 24             	mov    %eax,(%esp)
 8476152:	e8 ff 2a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476157:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847615d:	89 04 24             	mov    %eax,(%esp)
 8476160:	e8 e9 2a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476165:	c7 44 24 08 5c 01 00 	movl   $0x15c,0x8(%esp)
 847616c:	00 
 847616d:	8b 95 f8 fd ff ff    	mov    -0x208(%ebp),%edx
 8476173:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476177:	89 04 24             	mov    %eax,(%esp)
 847617a:	e8 d3 84 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847617f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476184:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847618a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847618e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476195:	00 
 8476196:	89 04 24             	mov    %eax,(%esp)
 8476199:	e8 40 ae 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847619e:	e9 58 4a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84761a3:	8b 45 08             	mov    0x8(%ebp),%eax
 84761a6:	89 85 fc fd ff ff    	mov    %eax,-0x204(%ebp)
 84761ac:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84761b2:	89 04 24             	mov    %eax,(%esp)
 84761b5:	e8 8c 2a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84761ba:	c7 44 24 04 aa 00 00 	movl   $0xaa,0x4(%esp)
 84761c1:	00 
 84761c2:	89 04 24             	mov    %eax,(%esp)
 84761c5:	e8 8c 2a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84761ca:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84761d0:	89 04 24             	mov    %eax,(%esp)
 84761d3:	e8 6e 2a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84761d8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84761df:	ff 
 84761e0:	89 04 24             	mov    %eax,(%esp)
 84761e3:	e8 6e 2a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84761e8:	8b 85 fc fd ff ff    	mov    -0x204(%ebp),%eax
 84761ee:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84761f2:	0f b7 d8             	movzwl %ax,%ebx
 84761f5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84761fb:	89 04 24             	mov    %eax,(%esp)
 84761fe:	e8 4b 2a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476203:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8476207:	8b 95 fc fd ff ff    	mov    -0x204(%ebp),%edx
 847620d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476211:	89 04 24             	mov    %eax,(%esp)
 8476214:	e8 39 84 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476219:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847621e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476224:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476228:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847622f:	00 
 8476230:	89 04 24             	mov    %eax,(%esp)
 8476233:	e8 a6 ad 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476238:	e9 be 49 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847623d:	8b 45 08             	mov    0x8(%ebp),%eax
 8476240:	89 85 00 fe ff ff    	mov    %eax,-0x200(%ebp)
 8476246:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847624c:	89 04 24             	mov    %eax,(%esp)
 847624f:	e8 f2 29 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476254:	c7 44 24 04 ba 00 00 	movl   $0xba,0x4(%esp)
 847625b:	00 
 847625c:	89 04 24             	mov    %eax,(%esp)
 847625f:	e8 f2 29 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476264:	8b 85 00 fe ff ff    	mov    -0x200(%ebp),%eax
 847626a:	8b 40 0a             	mov    0xa(%eax),%eax
 847626d:	89 c3                	mov    %eax,%ebx
 847626f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476275:	89 04 24             	mov    %eax,(%esp)
 8476278:	e8 c9 29 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847627d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476281:	89 04 24             	mov    %eax,(%esp)
 8476284:	e8 cd 29 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476289:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847628f:	89 04 24             	mov    %eax,(%esp)
 8476292:	e8 b7 29 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476297:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 847629e:	00 
 847629f:	8b 95 00 fe ff ff    	mov    -0x200(%ebp),%edx
 84762a5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84762a9:	89 04 24             	mov    %eax,(%esp)
 84762ac:	e8 a1 83 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84762b1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84762b6:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84762bc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84762c0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84762c7:	00 
 84762c8:	89 04 24             	mov    %eax,(%esp)
 84762cb:	e8 0e ad 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84762d0:	e9 26 49 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84762d5:	8b 45 08             	mov    0x8(%ebp),%eax
 84762d8:	89 85 04 fe ff ff    	mov    %eax,-0x1fc(%ebp)
 84762de:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84762e4:	89 04 24             	mov    %eax,(%esp)
 84762e7:	e8 5a 29 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84762ec:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 84762f3:	00 
 84762f4:	89 04 24             	mov    %eax,(%esp)
 84762f7:	e8 5a 29 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84762fc:	8b 85 04 fe ff ff    	mov    -0x1fc(%ebp),%eax
 8476302:	8b 40 0e             	mov    0xe(%eax),%eax
 8476305:	89 c3                	mov    %eax,%ebx
 8476307:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847630d:	89 04 24             	mov    %eax,(%esp)
 8476310:	e8 31 29 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476315:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476319:	89 04 24             	mov    %eax,(%esp)
 847631c:	e8 35 29 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476321:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476327:	89 04 24             	mov    %eax,(%esp)
 847632a:	e8 1f 29 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847632f:	c7 44 24 08 3b 00 00 	movl   $0x3b,0x8(%esp)
 8476336:	00 
 8476337:	8b 95 04 fe ff ff    	mov    -0x1fc(%ebp),%edx
 847633d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476341:	89 04 24             	mov    %eax,(%esp)
 8476344:	e8 09 83 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476349:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847634e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476354:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476358:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847635f:	00 
 8476360:	89 04 24             	mov    %eax,(%esp)
 8476363:	e8 76 ac 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476368:	e9 8e 48 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847636d:	8b 45 08             	mov    0x8(%ebp),%eax
 8476370:	89 85 08 fe ff ff    	mov    %eax,-0x1f8(%ebp)
 8476376:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847637c:	89 04 24             	mov    %eax,(%esp)
 847637f:	e8 c2 28 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476384:	c7 44 24 04 bd 00 00 	movl   $0xbd,0x4(%esp)
 847638b:	00 
 847638c:	89 04 24             	mov    %eax,(%esp)
 847638f:	e8 c2 28 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476394:	8b 85 08 fe ff ff    	mov    -0x1f8(%ebp),%eax
 847639a:	8b 40 0e             	mov    0xe(%eax),%eax
 847639d:	89 c3                	mov    %eax,%ebx
 847639f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84763a5:	89 04 24             	mov    %eax,(%esp)
 84763a8:	e8 99 28 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84763ad:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84763b1:	89 04 24             	mov    %eax,(%esp)
 84763b4:	e8 9d 28 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84763b9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84763bf:	89 04 24             	mov    %eax,(%esp)
 84763c2:	e8 87 28 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84763c7:	c7 44 24 08 31 00 00 	movl   $0x31,0x8(%esp)
 84763ce:	00 
 84763cf:	8b 95 08 fe ff ff    	mov    -0x1f8(%ebp),%edx
 84763d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84763d9:	89 04 24             	mov    %eax,(%esp)
 84763dc:	e8 71 82 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84763e1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84763e6:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84763ec:	89 54 24 08          	mov    %edx,0x8(%esp)
 84763f0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84763f7:	00 
 84763f8:	89 04 24             	mov    %eax,(%esp)
 84763fb:	e8 de ab 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476400:	e9 f6 47 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476405:	8b 45 08             	mov    0x8(%ebp),%eax
 8476408:	89 85 0c fe ff ff    	mov    %eax,-0x1f4(%ebp)
 847640e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476414:	89 04 24             	mov    %eax,(%esp)
 8476417:	e8 2a 28 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847641c:	c7 44 24 04 92 00 00 	movl   $0x92,0x4(%esp)
 8476423:	00 
 8476424:	89 04 24             	mov    %eax,(%esp)
 8476427:	e8 2a 28 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847642c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476432:	89 04 24             	mov    %eax,(%esp)
 8476435:	e8 0c 28 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847643a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476441:	ff 
 8476442:	89 04 24             	mov    %eax,(%esp)
 8476445:	e8 0c 28 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847644a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476450:	89 04 24             	mov    %eax,(%esp)
 8476453:	e8 f6 27 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476458:	c7 44 24 08 0b 01 00 	movl   $0x10b,0x8(%esp)
 847645f:	00 
 8476460:	8b 95 0c fe ff ff    	mov    -0x1f4(%ebp),%edx
 8476466:	89 54 24 04          	mov    %edx,0x4(%esp)
 847646a:	89 04 24             	mov    %eax,(%esp)
 847646d:	e8 e0 81 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476472:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476477:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847647d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476481:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476488:	00 
 8476489:	89 04 24             	mov    %eax,(%esp)
 847648c:	e8 4d ab 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476491:	e9 65 47 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476496:	8b 45 08             	mov    0x8(%ebp),%eax
 8476499:	89 85 10 fe ff ff    	mov    %eax,-0x1f0(%ebp)
 847649f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84764a5:	89 04 24             	mov    %eax,(%esp)
 84764a8:	e8 99 27 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84764ad:	c7 44 24 04 94 00 00 	movl   $0x94,0x4(%esp)
 84764b4:	00 
 84764b5:	89 04 24             	mov    %eax,(%esp)
 84764b8:	e8 99 27 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84764bd:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84764c3:	89 04 24             	mov    %eax,(%esp)
 84764c6:	e8 7b 27 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84764cb:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84764d2:	ff 
 84764d3:	89 04 24             	mov    %eax,(%esp)
 84764d6:	e8 7b 27 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84764db:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84764e1:	89 04 24             	mov    %eax,(%esp)
 84764e4:	e8 65 27 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84764e9:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 84764f0:	00 
 84764f1:	8b 95 10 fe ff ff    	mov    -0x1f0(%ebp),%edx
 84764f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84764fb:	89 04 24             	mov    %eax,(%esp)
 84764fe:	e8 4f 81 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476503:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476508:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847650e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476512:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476519:	00 
 847651a:	89 04 24             	mov    %eax,(%esp)
 847651d:	e8 bc aa 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476522:	e9 d4 46 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476527:	8b 45 08             	mov    0x8(%ebp),%eax
 847652a:	89 85 14 fe ff ff    	mov    %eax,-0x1ec(%ebp)
 8476530:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476536:	89 04 24             	mov    %eax,(%esp)
 8476539:	e8 08 27 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847653e:	c7 44 24 04 b7 00 00 	movl   $0xb7,0x4(%esp)
 8476545:	00 
 8476546:	89 04 24             	mov    %eax,(%esp)
 8476549:	e8 08 27 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847654e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476554:	89 04 24             	mov    %eax,(%esp)
 8476557:	e8 ea 26 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847655c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476563:	ff 
 8476564:	89 04 24             	mov    %eax,(%esp)
 8476567:	e8 ea 26 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847656c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476572:	89 04 24             	mov    %eax,(%esp)
 8476575:	e8 d4 26 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847657a:	c7 44 24 08 0a 01 00 	movl   $0x10a,0x8(%esp)
 8476581:	00 
 8476582:	8b 95 14 fe ff ff    	mov    -0x1ec(%ebp),%edx
 8476588:	89 54 24 04          	mov    %edx,0x4(%esp)
 847658c:	89 04 24             	mov    %eax,(%esp)
 847658f:	e8 be 80 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476594:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476599:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847659f:	89 54 24 08          	mov    %edx,0x8(%esp)
 84765a3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84765aa:	00 
 84765ab:	89 04 24             	mov    %eax,(%esp)
 84765ae:	e8 2b aa 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84765b3:	e9 43 46 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84765b8:	8b 45 08             	mov    0x8(%ebp),%eax
 84765bb:	89 85 18 fe ff ff    	mov    %eax,-0x1e8(%ebp)
 84765c1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84765c7:	89 04 24             	mov    %eax,(%esp)
 84765ca:	e8 77 26 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84765cf:	c7 44 24 04 b8 00 00 	movl   $0xb8,0x4(%esp)
 84765d6:	00 
 84765d7:	89 04 24             	mov    %eax,(%esp)
 84765da:	e8 77 26 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84765df:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84765e5:	89 04 24             	mov    %eax,(%esp)
 84765e8:	e8 59 26 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84765ed:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84765f4:	ff 
 84765f5:	89 04 24             	mov    %eax,(%esp)
 84765f8:	e8 59 26 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84765fd:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476603:	89 04 24             	mov    %eax,(%esp)
 8476606:	e8 43 26 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847660b:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8476612:	00 
 8476613:	8b 95 18 fe ff ff    	mov    -0x1e8(%ebp),%edx
 8476619:	89 54 24 04          	mov    %edx,0x4(%esp)
 847661d:	89 04 24             	mov    %eax,(%esp)
 8476620:	e8 2d 80 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476625:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847662a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476630:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476634:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 847663b:	00 
 847663c:	89 04 24             	mov    %eax,(%esp)
 847663f:	e8 9a a9 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476644:	e9 b2 45 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476649:	8b 45 08             	mov    0x8(%ebp),%eax
 847664c:	89 85 1c fe ff ff    	mov    %eax,-0x1e4(%ebp)
 8476652:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476658:	89 04 24             	mov    %eax,(%esp)
 847665b:	e8 e6 25 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476660:	c7 44 24 04 ce 00 00 	movl   $0xce,0x4(%esp)
 8476667:	00 
 8476668:	89 04 24             	mov    %eax,(%esp)
 847666b:	e8 e6 25 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476670:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476676:	89 04 24             	mov    %eax,(%esp)
 8476679:	e8 c8 25 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847667e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476685:	ff 
 8476686:	89 04 24             	mov    %eax,(%esp)
 8476689:	e8 c8 25 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847668e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476694:	89 04 24             	mov    %eax,(%esp)
 8476697:	e8 b2 25 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847669c:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 84766a3:	00 
 84766a4:	8b 95 1c fe ff ff    	mov    -0x1e4(%ebp),%edx
 84766aa:	89 54 24 04          	mov    %edx,0x4(%esp)
 84766ae:	89 04 24             	mov    %eax,(%esp)
 84766b1:	e8 9c 7f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84766b6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84766bb:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84766c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84766c5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84766cc:	00 
 84766cd:	89 04 24             	mov    %eax,(%esp)
 84766d0:	e8 09 a9 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84766d5:	e9 21 45 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84766da:	8b 45 08             	mov    0x8(%ebp),%eax
 84766dd:	89 85 20 fe ff ff    	mov    %eax,-0x1e0(%ebp)
 84766e3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84766e9:	89 04 24             	mov    %eax,(%esp)
 84766ec:	e8 55 25 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84766f1:	c7 44 24 04 d3 00 00 	movl   $0xd3,0x4(%esp)
 84766f8:	00 
 84766f9:	89 04 24             	mov    %eax,(%esp)
 84766fc:	e8 55 25 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476701:	8b 85 20 fe ff ff    	mov    -0x1e0(%ebp),%eax
 8476707:	8b 40 0a             	mov    0xa(%eax),%eax
 847670a:	89 c3                	mov    %eax,%ebx
 847670c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476712:	89 04 24             	mov    %eax,(%esp)
 8476715:	e8 2c 25 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847671a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847671e:	89 04 24             	mov    %eax,(%esp)
 8476721:	e8 30 25 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476726:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847672c:	89 04 24             	mov    %eax,(%esp)
 847672f:	e8 1a 25 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476734:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 847673b:	00 
 847673c:	8b 95 20 fe ff ff    	mov    -0x1e0(%ebp),%edx
 8476742:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476746:	89 04 24             	mov    %eax,(%esp)
 8476749:	e8 04 7f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847674e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476753:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476759:	89 54 24 08          	mov    %edx,0x8(%esp)
 847675d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476764:	00 
 8476765:	89 04 24             	mov    %eax,(%esp)
 8476768:	e8 71 a8 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847676d:	e9 89 44 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476772:	8b 45 08             	mov    0x8(%ebp),%eax
 8476775:	89 85 24 fe ff ff    	mov    %eax,-0x1dc(%ebp)
 847677b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476781:	89 04 24             	mov    %eax,(%esp)
 8476784:	e8 bd 24 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476789:	c7 44 24 04 da 00 00 	movl   $0xda,0x4(%esp)
 8476790:	00 
 8476791:	89 04 24             	mov    %eax,(%esp)
 8476794:	e8 bd 24 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476799:	8b 85 24 fe ff ff    	mov    -0x1dc(%ebp),%eax
 847679f:	8b 40 0e             	mov    0xe(%eax),%eax
 84767a2:	89 c3                	mov    %eax,%ebx
 84767a4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84767aa:	89 04 24             	mov    %eax,(%esp)
 84767ad:	e8 94 24 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84767b2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84767b6:	89 04 24             	mov    %eax,(%esp)
 84767b9:	e8 98 24 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84767be:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84767c4:	89 04 24             	mov    %eax,(%esp)
 84767c7:	e8 82 24 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84767cc:	c7 44 24 08 13 00 00 	movl   $0x13,0x8(%esp)
 84767d3:	00 
 84767d4:	8b 95 24 fe ff ff    	mov    -0x1dc(%ebp),%edx
 84767da:	89 54 24 04          	mov    %edx,0x4(%esp)
 84767de:	89 04 24             	mov    %eax,(%esp)
 84767e1:	e8 6c 7e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84767e6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84767eb:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84767f1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84767f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84767fc:	00 
 84767fd:	89 04 24             	mov    %eax,(%esp)
 8476800:	e8 d9 a7 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476805:	e9 f1 43 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847680a:	8b 45 08             	mov    0x8(%ebp),%eax
 847680d:	89 85 28 fe ff ff    	mov    %eax,-0x1d8(%ebp)
 8476813:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476819:	89 04 24             	mov    %eax,(%esp)
 847681c:	e8 25 24 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476821:	c7 44 24 04 db 00 00 	movl   $0xdb,0x4(%esp)
 8476828:	00 
 8476829:	89 04 24             	mov    %eax,(%esp)
 847682c:	e8 25 24 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476831:	8b 85 28 fe ff ff    	mov    -0x1d8(%ebp),%eax
 8476837:	8b 40 0e             	mov    0xe(%eax),%eax
 847683a:	89 c3                	mov    %eax,%ebx
 847683c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476842:	89 04 24             	mov    %eax,(%esp)
 8476845:	e8 fc 23 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847684a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847684e:	89 04 24             	mov    %eax,(%esp)
 8476851:	e8 00 24 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476856:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847685c:	89 04 24             	mov    %eax,(%esp)
 847685f:	e8 ea 23 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476864:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 847686b:	00 
 847686c:	8b 95 28 fe ff ff    	mov    -0x1d8(%ebp),%edx
 8476872:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476876:	89 04 24             	mov    %eax,(%esp)
 8476879:	e8 d4 7d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847687e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476883:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476889:	89 54 24 08          	mov    %edx,0x8(%esp)
 847688d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476894:	00 
 8476895:	89 04 24             	mov    %eax,(%esp)
 8476898:	e8 41 a7 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847689d:	e9 59 43 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84768a2:	8b 45 08             	mov    0x8(%ebp),%eax
 84768a5:	89 85 2c fe ff ff    	mov    %eax,-0x1d4(%ebp)
 84768ab:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84768b1:	89 04 24             	mov    %eax,(%esp)
 84768b4:	e8 8d 23 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84768b9:	c7 44 24 04 dc 00 00 	movl   $0xdc,0x4(%esp)
 84768c0:	00 
 84768c1:	89 04 24             	mov    %eax,(%esp)
 84768c4:	e8 8d 23 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84768c9:	8b 85 2c fe ff ff    	mov    -0x1d4(%ebp),%eax
 84768cf:	8b 40 0e             	mov    0xe(%eax),%eax
 84768d2:	89 c3                	mov    %eax,%ebx
 84768d4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84768da:	89 04 24             	mov    %eax,(%esp)
 84768dd:	e8 64 23 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84768e2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84768e6:	89 04 24             	mov    %eax,(%esp)
 84768e9:	e8 68 23 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84768ee:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84768f4:	89 04 24             	mov    %eax,(%esp)
 84768f7:	e8 52 23 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84768fc:	c7 44 24 08 47 00 00 	movl   $0x47,0x8(%esp)
 8476903:	00 
 8476904:	8b 95 2c fe ff ff    	mov    -0x1d4(%ebp),%edx
 847690a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847690e:	89 04 24             	mov    %eax,(%esp)
 8476911:	e8 3c 7d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476916:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847691b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476921:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476925:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847692c:	00 
 847692d:	89 04 24             	mov    %eax,(%esp)
 8476930:	e8 a9 a6 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476935:	e9 c1 42 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847693a:	8b 45 08             	mov    0x8(%ebp),%eax
 847693d:	89 85 30 fe ff ff    	mov    %eax,-0x1d0(%ebp)
 8476943:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476949:	89 04 24             	mov    %eax,(%esp)
 847694c:	e8 f5 22 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476951:	c7 44 24 04 dd 00 00 	movl   $0xdd,0x4(%esp)
 8476958:	00 
 8476959:	89 04 24             	mov    %eax,(%esp)
 847695c:	e8 f5 22 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476961:	8b 85 30 fe ff ff    	mov    -0x1d0(%ebp),%eax
 8476967:	8b 40 0e             	mov    0xe(%eax),%eax
 847696a:	89 c3                	mov    %eax,%ebx
 847696c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476972:	89 04 24             	mov    %eax,(%esp)
 8476975:	e8 cc 22 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847697a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847697e:	89 04 24             	mov    %eax,(%esp)
 8476981:	e8 d0 22 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476986:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847698c:	89 04 24             	mov    %eax,(%esp)
 847698f:	e8 ba 22 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476994:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 847699b:	00 
 847699c:	8b 95 30 fe ff ff    	mov    -0x1d0(%ebp),%edx
 84769a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84769a6:	89 04 24             	mov    %eax,(%esp)
 84769a9:	e8 a4 7c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84769ae:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84769b3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84769b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84769bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84769c4:	00 
 84769c5:	89 04 24             	mov    %eax,(%esp)
 84769c8:	e8 11 a6 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84769cd:	e9 29 42 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84769d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84769d5:	89 85 34 fe ff ff    	mov    %eax,-0x1cc(%ebp)
 84769db:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84769e1:	89 04 24             	mov    %eax,(%esp)
 84769e4:	e8 5d 22 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84769e9:	c7 44 24 04 de 00 00 	movl   $0xde,0x4(%esp)
 84769f0:	00 
 84769f1:	89 04 24             	mov    %eax,(%esp)
 84769f4:	e8 5d 22 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84769f9:	8b 85 34 fe ff ff    	mov    -0x1cc(%ebp),%eax
 84769ff:	8b 40 0e             	mov    0xe(%eax),%eax
 8476a02:	89 c3                	mov    %eax,%ebx
 8476a04:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476a0a:	89 04 24             	mov    %eax,(%esp)
 8476a0d:	e8 34 22 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476a12:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476a16:	89 04 24             	mov    %eax,(%esp)
 8476a19:	e8 38 22 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476a1e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476a24:	89 04 24             	mov    %eax,(%esp)
 8476a27:	e8 22 22 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476a2c:	c7 44 24 08 34 00 00 	movl   $0x34,0x8(%esp)
 8476a33:	00 
 8476a34:	8b 95 34 fe ff ff    	mov    -0x1cc(%ebp),%edx
 8476a3a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476a3e:	89 04 24             	mov    %eax,(%esp)
 8476a41:	e8 0c 7c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476a46:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476a4b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476a51:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476a55:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476a5c:	00 
 8476a5d:	89 04 24             	mov    %eax,(%esp)
 8476a60:	e8 79 a5 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476a65:	e9 91 41 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476a6a:	8b 45 08             	mov    0x8(%ebp),%eax
 8476a6d:	89 85 38 fe ff ff    	mov    %eax,-0x1c8(%ebp)
 8476a73:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476a79:	89 04 24             	mov    %eax,(%esp)
 8476a7c:	e8 c5 21 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476a81:	c7 44 24 04 e5 00 00 	movl   $0xe5,0x4(%esp)
 8476a88:	00 
 8476a89:	89 04 24             	mov    %eax,(%esp)
 8476a8c:	e8 c5 21 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476a91:	8b 85 38 fe ff ff    	mov    -0x1c8(%ebp),%eax
 8476a97:	8b 40 0e             	mov    0xe(%eax),%eax
 8476a9a:	89 c3                	mov    %eax,%ebx
 8476a9c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476aa2:	89 04 24             	mov    %eax,(%esp)
 8476aa5:	e8 9c 21 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476aaa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476aae:	89 04 24             	mov    %eax,(%esp)
 8476ab1:	e8 a0 21 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476ab6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476abc:	89 04 24             	mov    %eax,(%esp)
 8476abf:	e8 8a 21 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476ac4:	c7 44 24 08 62 00 00 	movl   $0x62,0x8(%esp)
 8476acb:	00 
 8476acc:	8b 95 38 fe ff ff    	mov    -0x1c8(%ebp),%edx
 8476ad2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476ad6:	89 04 24             	mov    %eax,(%esp)
 8476ad9:	e8 74 7b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476ade:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476ae3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476ae9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476aed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476af4:	00 
 8476af5:	89 04 24             	mov    %eax,(%esp)
 8476af8:	e8 e1 a4 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476afd:	e9 f9 40 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476b02:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476b08:	89 04 24             	mov    %eax,(%esp)
 8476b0b:	e8 36 21 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476b10:	c7 44 24 04 e6 00 00 	movl   $0xe6,0x4(%esp)
 8476b17:	00 
 8476b18:	89 04 24             	mov    %eax,(%esp)
 8476b1b:	e8 36 21 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476b20:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476b26:	89 04 24             	mov    %eax,(%esp)
 8476b29:	e8 18 21 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476b2e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476b35:	ff 
 8476b36:	89 04 24             	mov    %eax,(%esp)
 8476b39:	e8 18 21 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476b3e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476b43:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476b49:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476b4d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476b54:	00 
 8476b55:	89 04 24             	mov    %eax,(%esp)
 8476b58:	e8 81 a4 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476b5d:	e9 99 40 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476b62:	8b 45 08             	mov    0x8(%ebp),%eax
 8476b65:	89 85 3c fe ff ff    	mov    %eax,-0x1c4(%ebp)
 8476b6b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476b71:	89 04 24             	mov    %eax,(%esp)
 8476b74:	e8 cd 20 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476b79:	c7 44 24 04 ea 00 00 	movl   $0xea,0x4(%esp)
 8476b80:	00 
 8476b81:	89 04 24             	mov    %eax,(%esp)
 8476b84:	e8 cd 20 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476b89:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
 8476b8f:	8b 40 14             	mov    0x14(%eax),%eax
 8476b92:	89 c3                	mov    %eax,%ebx
 8476b94:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476b9a:	89 04 24             	mov    %eax,(%esp)
 8476b9d:	e8 a4 20 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476ba2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476ba6:	89 04 24             	mov    %eax,(%esp)
 8476ba9:	e8 a8 20 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476bae:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476bb4:	89 04 24             	mov    %eax,(%esp)
 8476bb7:	e8 92 20 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476bbc:	c7 44 24 08 52 00 00 	movl   $0x52,0x8(%esp)
 8476bc3:	00 
 8476bc4:	8b 95 3c fe ff ff    	mov    -0x1c4(%ebp),%edx
 8476bca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476bce:	89 04 24             	mov    %eax,(%esp)
 8476bd1:	e8 7c 7a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476bd6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476bdb:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476be1:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476be5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476bec:	00 
 8476bed:	89 04 24             	mov    %eax,(%esp)
 8476bf0:	e8 e9 a3 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476bf5:	e9 01 40 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476bfa:	8b 45 08             	mov    0x8(%ebp),%eax
 8476bfd:	89 85 40 fe ff ff    	mov    %eax,-0x1c0(%ebp)
 8476c03:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476c09:	89 04 24             	mov    %eax,(%esp)
 8476c0c:	e8 35 20 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476c11:	c7 44 24 04 e7 00 00 	movl   $0xe7,0x4(%esp)
 8476c18:	00 
 8476c19:	89 04 24             	mov    %eax,(%esp)
 8476c1c:	e8 35 20 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476c21:	8b 85 40 fe ff ff    	mov    -0x1c0(%ebp),%eax
 8476c27:	8b 40 0e             	mov    0xe(%eax),%eax
 8476c2a:	89 c3                	mov    %eax,%ebx
 8476c2c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476c32:	89 04 24             	mov    %eax,(%esp)
 8476c35:	e8 0c 20 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476c3a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476c3e:	89 04 24             	mov    %eax,(%esp)
 8476c41:	e8 10 20 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476c46:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476c4c:	89 04 24             	mov    %eax,(%esp)
 8476c4f:	e8 fa 1f c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476c54:	c7 44 24 08 30 00 00 	movl   $0x30,0x8(%esp)
 8476c5b:	00 
 8476c5c:	8b 95 40 fe ff ff    	mov    -0x1c0(%ebp),%edx
 8476c62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476c66:	89 04 24             	mov    %eax,(%esp)
 8476c69:	e8 e4 79 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476c6e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476c73:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476c79:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476c7d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476c84:	00 
 8476c85:	89 04 24             	mov    %eax,(%esp)
 8476c88:	e8 51 a3 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476c8d:	e9 69 3f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476c92:	8b 45 08             	mov    0x8(%ebp),%eax
 8476c95:	89 85 44 fe ff ff    	mov    %eax,-0x1bc(%ebp)
 8476c9b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476ca1:	89 04 24             	mov    %eax,(%esp)
 8476ca4:	e8 9d 1f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476ca9:	c7 44 24 04 e8 00 00 	movl   $0xe8,0x4(%esp)
 8476cb0:	00 
 8476cb1:	89 04 24             	mov    %eax,(%esp)
 8476cb4:	e8 9d 1f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476cb9:	8b 85 44 fe ff ff    	mov    -0x1bc(%ebp),%eax
 8476cbf:	8b 40 0e             	mov    0xe(%eax),%eax
 8476cc2:	89 c3                	mov    %eax,%ebx
 8476cc4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476cca:	89 04 24             	mov    %eax,(%esp)
 8476ccd:	e8 74 1f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476cd2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476cd6:	89 04 24             	mov    %eax,(%esp)
 8476cd9:	e8 78 1f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476cde:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476ce4:	89 04 24             	mov    %eax,(%esp)
 8476ce7:	e8 62 1f c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476cec:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8476cf3:	00 
 8476cf4:	8b 95 44 fe ff ff    	mov    -0x1bc(%ebp),%edx
 8476cfa:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476cfe:	89 04 24             	mov    %eax,(%esp)
 8476d01:	e8 4c 79 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476d06:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476d0b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476d11:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476d15:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476d1c:	00 
 8476d1d:	89 04 24             	mov    %eax,(%esp)
 8476d20:	e8 b9 a2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476d25:	e9 d1 3e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476d2a:	8b 45 08             	mov    0x8(%ebp),%eax
 8476d2d:	89 85 48 fe ff ff    	mov    %eax,-0x1b8(%ebp)
 8476d33:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476d39:	89 04 24             	mov    %eax,(%esp)
 8476d3c:	e8 05 1f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476d41:	c7 44 24 04 e9 00 00 	movl   $0xe9,0x4(%esp)
 8476d48:	00 
 8476d49:	89 04 24             	mov    %eax,(%esp)
 8476d4c:	e8 05 1f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476d51:	8b 85 48 fe ff ff    	mov    -0x1b8(%ebp),%eax
 8476d57:	8b 40 0e             	mov    0xe(%eax),%eax
 8476d5a:	89 c3                	mov    %eax,%ebx
 8476d5c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476d62:	89 04 24             	mov    %eax,(%esp)
 8476d65:	e8 dc 1e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476d6a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476d6e:	89 04 24             	mov    %eax,(%esp)
 8476d71:	e8 e0 1e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476d76:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476d7c:	89 04 24             	mov    %eax,(%esp)
 8476d7f:	e8 ca 1e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476d84:	c7 44 24 08 12 00 00 	movl   $0x12,0x8(%esp)
 8476d8b:	00 
 8476d8c:	8b 95 48 fe ff ff    	mov    -0x1b8(%ebp),%edx
 8476d92:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476d96:	89 04 24             	mov    %eax,(%esp)
 8476d99:	e8 b4 78 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476d9e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476da3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476da9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476dad:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476db4:	00 
 8476db5:	89 04 24             	mov    %eax,(%esp)
 8476db8:	e8 21 a2 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476dbd:	e9 39 3e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476dc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8476dc5:	89 85 4c fe ff ff    	mov    %eax,-0x1b4(%ebp)
 8476dcb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476dd1:	89 04 24             	mov    %eax,(%esp)
 8476dd4:	e8 6d 1e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476dd9:	c7 44 24 04 ed 00 00 	movl   $0xed,0x4(%esp)
 8476de0:	00 
 8476de1:	89 04 24             	mov    %eax,(%esp)
 8476de4:	e8 6d 1e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476de9:	8b 85 4c fe ff ff    	mov    -0x1b4(%ebp),%eax
 8476def:	8b 40 0e             	mov    0xe(%eax),%eax
 8476df2:	89 c3                	mov    %eax,%ebx
 8476df4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476dfa:	89 04 24             	mov    %eax,(%esp)
 8476dfd:	e8 44 1e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476e02:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476e06:	89 04 24             	mov    %eax,(%esp)
 8476e09:	e8 48 1e c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476e0e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476e14:	89 04 24             	mov    %eax,(%esp)
 8476e17:	e8 32 1e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476e1c:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 8476e23:	00 
 8476e24:	8b 95 4c fe ff ff    	mov    -0x1b4(%ebp),%edx
 8476e2a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476e2e:	89 04 24             	mov    %eax,(%esp)
 8476e31:	e8 1c 78 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476e36:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476e3b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476e41:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476e45:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476e4c:	00 
 8476e4d:	89 04 24             	mov    %eax,(%esp)
 8476e50:	e8 89 a1 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476e55:	e9 a1 3d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476e5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8476e5d:	89 85 50 fe ff ff    	mov    %eax,-0x1b0(%ebp)
 8476e63:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476e69:	89 04 24             	mov    %eax,(%esp)
 8476e6c:	e8 d5 1d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476e71:	c7 44 24 04 2a 01 00 	movl   $0x12a,0x4(%esp)
 8476e78:	00 
 8476e79:	89 04 24             	mov    %eax,(%esp)
 8476e7c:	e8 d5 1d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476e81:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476e87:	89 04 24             	mov    %eax,(%esp)
 8476e8a:	e8 b7 1d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476e8f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476e96:	ff 
 8476e97:	89 04 24             	mov    %eax,(%esp)
 8476e9a:	e8 b7 1d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476e9f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476ea5:	89 04 24             	mov    %eax,(%esp)
 8476ea8:	e8 a1 1d c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476ead:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 8476eb4:	00 
 8476eb5:	8b 95 50 fe ff ff    	mov    -0x1b0(%ebp),%edx
 8476ebb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476ebf:	89 04 24             	mov    %eax,(%esp)
 8476ec2:	e8 8b 77 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476ec7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476ecc:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476ed2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476ed6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476edd:	00 
 8476ede:	89 04 24             	mov    %eax,(%esp)
 8476ee1:	e8 f8 a0 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476ee6:	e9 10 3d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476eeb:	8b 45 08             	mov    0x8(%ebp),%eax
 8476eee:	89 85 54 fe ff ff    	mov    %eax,-0x1ac(%ebp)
 8476ef4:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
 8476efa:	0f b6 40 0a          	movzbl 0xa(%eax),%eax
 8476efe:	84 c0                	test   %al,%al
 8476f00:	75 0a                	jne    8476f0c <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x38ac>
 8476f02:	e8 a7 61 fb ff       	call   842d0ae <_ZN29DB_ReloadAutoPunishRuleBackIP11makeRequestEv>
 8476f07:	e9 ef 3c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476f0c:	e8 ff 66 fb ff       	call   842d610 <_ZN31DB_ReloadAutoPunishRuleHackType11makeRequestEv>
 8476f11:	e9 e5 3c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476f16:	8b 45 08             	mov    0x8(%ebp),%eax
 8476f19:	89 85 58 fe ff ff    	mov    %eax,-0x1a8(%ebp)
 8476f1f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476f25:	89 04 24             	mov    %eax,(%esp)
 8476f28:	e8 19 1d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476f2d:	c7 44 24 04 91 01 00 	movl   $0x191,0x4(%esp)
 8476f34:	00 
 8476f35:	89 04 24             	mov    %eax,(%esp)
 8476f38:	e8 19 1d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476f3d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476f43:	89 04 24             	mov    %eax,(%esp)
 8476f46:	e8 fb 1c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476f4b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8476f52:	ff 
 8476f53:	89 04 24             	mov    %eax,(%esp)
 8476f56:	e8 fb 1c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476f5b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476f61:	89 04 24             	mov    %eax,(%esp)
 8476f64:	e8 e5 1c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8476f69:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 8476f70:	00 
 8476f71:	8b 95 58 fe ff ff    	mov    -0x1a8(%ebp),%edx
 8476f77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8476f7b:	89 04 24             	mov    %eax,(%esp)
 8476f7e:	e8 cf 76 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8476f83:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8476f88:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8476f8e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8476f92:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8476f99:	00 
 8476f9a:	89 04 24             	mov    %eax,(%esp)
 8476f9d:	e8 3c a0 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8476fa2:	e9 54 3c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8476fa7:	8b 45 08             	mov    0x8(%ebp),%eax
 8476faa:	89 85 5c fe ff ff    	mov    %eax,-0x1a4(%ebp)
 8476fb0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476fb6:	89 04 24             	mov    %eax,(%esp)
 8476fb9:	e8 88 1c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476fbe:	c7 44 24 04 23 01 00 	movl   $0x123,0x4(%esp)
 8476fc5:	00 
 8476fc6:	89 04 24             	mov    %eax,(%esp)
 8476fc9:	e8 88 1c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476fce:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
 8476fd4:	8b 40 12             	mov    0x12(%eax),%eax
 8476fd7:	89 c3                	mov    %eax,%ebx
 8476fd9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476fdf:	89 04 24             	mov    %eax,(%esp)
 8476fe2:	e8 5f 1c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8476fe7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8476feb:	89 04 24             	mov    %eax,(%esp)
 8476fee:	e8 63 1c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8476ff3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8476ff9:	89 04 24             	mov    %eax,(%esp)
 8476ffc:	e8 4d 1c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477001:	c7 44 24 08 2e 00 00 	movl   $0x2e,0x8(%esp)
 8477008:	00 
 8477009:	8b 95 5c fe ff ff    	mov    -0x1a4(%ebp),%edx
 847700f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477013:	89 04 24             	mov    %eax,(%esp)
 8477016:	e8 37 76 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847701b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477020:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477026:	89 54 24 08          	mov    %edx,0x8(%esp)
 847702a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477031:	00 
 8477032:	89 04 24             	mov    %eax,(%esp)
 8477035:	e8 a4 9f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847703a:	e9 bc 3b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847703f:	8b 45 08             	mov    0x8(%ebp),%eax
 8477042:	89 85 60 fe ff ff    	mov    %eax,-0x1a0(%ebp)
 8477048:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847704e:	89 04 24             	mov    %eax,(%esp)
 8477051:	e8 f0 1b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477056:	c7 44 24 04 24 01 00 	movl   $0x124,0x4(%esp)
 847705d:	00 
 847705e:	89 04 24             	mov    %eax,(%esp)
 8477061:	e8 f0 1b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477066:	8b 85 60 fe ff ff    	mov    -0x1a0(%ebp),%eax
 847706c:	8b 40 12             	mov    0x12(%eax),%eax
 847706f:	89 c3                	mov    %eax,%ebx
 8477071:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477077:	89 04 24             	mov    %eax,(%esp)
 847707a:	e8 c7 1b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847707f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477083:	89 04 24             	mov    %eax,(%esp)
 8477086:	e8 cb 1b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847708b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477091:	89 04 24             	mov    %eax,(%esp)
 8477094:	e8 b5 1b c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477099:	c7 44 24 08 2d 00 00 	movl   $0x2d,0x8(%esp)
 84770a0:	00 
 84770a1:	8b 95 60 fe ff ff    	mov    -0x1a0(%ebp),%edx
 84770a7:	89 54 24 04          	mov    %edx,0x4(%esp)
 84770ab:	89 04 24             	mov    %eax,(%esp)
 84770ae:	e8 9f 75 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84770b3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84770b8:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84770be:	89 54 24 08          	mov    %edx,0x8(%esp)
 84770c2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84770c9:	00 
 84770ca:	89 04 24             	mov    %eax,(%esp)
 84770cd:	e8 0c 9f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84770d2:	e9 24 3b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84770d7:	8b 45 08             	mov    0x8(%ebp),%eax
 84770da:	89 85 64 fe ff ff    	mov    %eax,-0x19c(%ebp)
 84770e0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84770e6:	89 04 24             	mov    %eax,(%esp)
 84770e9:	e8 58 1b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84770ee:	c7 44 24 04 84 01 00 	movl   $0x184,0x4(%esp)
 84770f5:	00 
 84770f6:	89 04 24             	mov    %eax,(%esp)
 84770f9:	e8 58 1b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84770fe:	8b 85 64 fe ff ff    	mov    -0x19c(%ebp),%eax
 8477104:	8b 40 12             	mov    0x12(%eax),%eax
 8477107:	89 c3                	mov    %eax,%ebx
 8477109:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847710f:	89 04 24             	mov    %eax,(%esp)
 8477112:	e8 2f 1b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477117:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847711b:	89 04 24             	mov    %eax,(%esp)
 847711e:	e8 33 1b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477123:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477129:	89 04 24             	mov    %eax,(%esp)
 847712c:	e8 1d 1b c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477131:	c7 44 24 08 16 00 00 	movl   $0x16,0x8(%esp)
 8477138:	00 
 8477139:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
 847713f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477143:	89 04 24             	mov    %eax,(%esp)
 8477146:	e8 07 75 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847714b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477150:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477156:	89 54 24 08          	mov    %edx,0x8(%esp)
 847715a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477161:	00 
 8477162:	89 04 24             	mov    %eax,(%esp)
 8477165:	e8 74 9e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847716a:	e9 8c 3a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847716f:	8b 45 08             	mov    0x8(%ebp),%eax
 8477172:	89 85 68 fe ff ff    	mov    %eax,-0x198(%ebp)
 8477178:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847717e:	89 04 24             	mov    %eax,(%esp)
 8477181:	e8 c0 1a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477186:	c7 44 24 04 25 01 00 	movl   $0x125,0x4(%esp)
 847718d:	00 
 847718e:	89 04 24             	mov    %eax,(%esp)
 8477191:	e8 c0 1a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477196:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847719c:	89 04 24             	mov    %eax,(%esp)
 847719f:	e8 a2 1a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84771a4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84771ab:	ff 
 84771ac:	89 04 24             	mov    %eax,(%esp)
 84771af:	e8 a2 1a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84771b4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84771ba:	89 04 24             	mov    %eax,(%esp)
 84771bd:	e8 8c 1a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84771c2:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 84771c9:	00 
 84771ca:	8b 95 68 fe ff ff    	mov    -0x198(%ebp),%edx
 84771d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84771d4:	89 04 24             	mov    %eax,(%esp)
 84771d7:	e8 76 74 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84771dc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84771e1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84771e7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84771eb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84771f2:	00 
 84771f3:	89 04 24             	mov    %eax,(%esp)
 84771f6:	e8 e3 9d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84771fb:	e9 fb 39 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477200:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477206:	89 04 24             	mov    %eax,(%esp)
 8477209:	e8 38 1a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847720e:	c7 44 24 04 26 01 00 	movl   $0x126,0x4(%esp)
 8477215:	00 
 8477216:	89 04 24             	mov    %eax,(%esp)
 8477219:	e8 38 1a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847721e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477224:	89 04 24             	mov    %eax,(%esp)
 8477227:	e8 1a 1a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847722c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477233:	ff 
 8477234:	89 04 24             	mov    %eax,(%esp)
 8477237:	e8 1a 1a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847723c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477241:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477247:	89 54 24 08          	mov    %edx,0x8(%esp)
 847724b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477252:	00 
 8477253:	89 04 24             	mov    %eax,(%esp)
 8477256:	e8 83 9d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847725b:	e9 9b 39 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477260:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477266:	89 04 24             	mov    %eax,(%esp)
 8477269:	e8 d8 19 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847726e:	c7 44 24 04 55 01 00 	movl   $0x155,0x4(%esp)
 8477275:	00 
 8477276:	89 04 24             	mov    %eax,(%esp)
 8477279:	e8 d8 19 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847727e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477284:	89 04 24             	mov    %eax,(%esp)
 8477287:	e8 ba 19 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847728c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477293:	ff 
 8477294:	89 04 24             	mov    %eax,(%esp)
 8477297:	e8 ba 19 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847729c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84772a1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84772a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84772ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84772b2:	00 
 84772b3:	89 04 24             	mov    %eax,(%esp)
 84772b6:	e8 23 9d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84772bb:	e9 3b 39 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84772c0:	8b 45 08             	mov    0x8(%ebp),%eax
 84772c3:	89 85 6c fe ff ff    	mov    %eax,-0x194(%ebp)
 84772c9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84772cf:	89 04 24             	mov    %eax,(%esp)
 84772d2:	e8 6f 19 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84772d7:	c7 44 24 04 57 01 00 	movl   $0x157,0x4(%esp)
 84772de:	00 
 84772df:	89 04 24             	mov    %eax,(%esp)
 84772e2:	e8 6f 19 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84772e7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84772ed:	89 04 24             	mov    %eax,(%esp)
 84772f0:	e8 51 19 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84772f5:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84772fc:	ff 
 84772fd:	89 04 24             	mov    %eax,(%esp)
 8477300:	e8 51 19 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477305:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
 847730b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847730f:	0f b7 d8             	movzwl %ax,%ebx
 8477312:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477318:	89 04 24             	mov    %eax,(%esp)
 847731b:	e8 2e 19 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477320:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477324:	8b 95 6c fe ff ff    	mov    -0x194(%ebp),%edx
 847732a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847732e:	89 04 24             	mov    %eax,(%esp)
 8477331:	e8 1c 73 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477336:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847733b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477341:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477345:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847734c:	00 
 847734d:	89 04 24             	mov    %eax,(%esp)
 8477350:	e8 89 9c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477355:	e9 a1 38 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847735a:	8b 45 08             	mov    0x8(%ebp),%eax
 847735d:	89 85 70 fe ff ff    	mov    %eax,-0x190(%ebp)
 8477363:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477369:	89 04 24             	mov    %eax,(%esp)
 847736c:	e8 d5 18 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477371:	c7 44 24 04 7d 01 00 	movl   $0x17d,0x4(%esp)
 8477378:	00 
 8477379:	89 04 24             	mov    %eax,(%esp)
 847737c:	e8 d5 18 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477381:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477387:	89 04 24             	mov    %eax,(%esp)
 847738a:	e8 b7 18 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847738f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477396:	ff 
 8477397:	89 04 24             	mov    %eax,(%esp)
 847739a:	e8 b7 18 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847739f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84773a5:	89 04 24             	mov    %eax,(%esp)
 84773a8:	e8 a1 18 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84773ad:	c7 44 24 08 bd 04 00 	movl   $0x4bd,0x8(%esp)
 84773b4:	00 
 84773b5:	8b 95 70 fe ff ff    	mov    -0x190(%ebp),%edx
 84773bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84773bf:	89 04 24             	mov    %eax,(%esp)
 84773c2:	e8 8b 72 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84773c7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84773cc:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84773d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 84773d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84773dd:	00 
 84773de:	89 04 24             	mov    %eax,(%esp)
 84773e1:	e8 f8 9b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84773e6:	e9 10 38 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84773eb:	8b 45 08             	mov    0x8(%ebp),%eax
 84773ee:	89 85 74 fe ff ff    	mov    %eax,-0x18c(%ebp)
 84773f4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84773fa:	89 04 24             	mov    %eax,(%esp)
 84773fd:	e8 44 18 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477402:	c7 44 24 04 ef 00 00 	movl   $0xef,0x4(%esp)
 8477409:	00 
 847740a:	89 04 24             	mov    %eax,(%esp)
 847740d:	e8 44 18 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477412:	8b 85 74 fe ff ff    	mov    -0x18c(%ebp),%eax
 8477418:	8b 40 0e             	mov    0xe(%eax),%eax
 847741b:	89 c3                	mov    %eax,%ebx
 847741d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477423:	89 04 24             	mov    %eax,(%esp)
 8477426:	e8 1b 18 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847742b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847742f:	89 04 24             	mov    %eax,(%esp)
 8477432:	e8 1f 18 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477437:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847743d:	89 04 24             	mov    %eax,(%esp)
 8477440:	e8 09 18 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477445:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 847744c:	00 
 847744d:	8b 95 74 fe ff ff    	mov    -0x18c(%ebp),%edx
 8477453:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477457:	89 04 24             	mov    %eax,(%esp)
 847745a:	e8 f3 71 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847745f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477464:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847746a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847746e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477475:	00 
 8477476:	89 04 24             	mov    %eax,(%esp)
 8477479:	e8 60 9b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847747e:	e9 78 37 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477483:	8b 45 08             	mov    0x8(%ebp),%eax
 8477486:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
 847748c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477492:	89 04 24             	mov    %eax,(%esp)
 8477495:	e8 ac 17 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847749a:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 84774a1:	00 
 84774a2:	89 04 24             	mov    %eax,(%esp)
 84774a5:	e8 ac 17 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84774aa:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
 84774b0:	8b 40 0e             	mov    0xe(%eax),%eax
 84774b3:	89 c3                	mov    %eax,%ebx
 84774b5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84774bb:	89 04 24             	mov    %eax,(%esp)
 84774be:	e8 83 17 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84774c3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84774c7:	89 04 24             	mov    %eax,(%esp)
 84774ca:	e8 87 17 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84774cf:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84774d5:	89 04 24             	mov    %eax,(%esp)
 84774d8:	e8 71 17 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84774dd:	c7 44 24 08 f8 17 00 	movl   $0x17f8,0x8(%esp)
 84774e4:	00 
 84774e5:	8b 95 78 fe ff ff    	mov    -0x188(%ebp),%edx
 84774eb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84774ef:	89 04 24             	mov    %eax,(%esp)
 84774f2:	e8 5b 71 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84774f7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84774fc:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477502:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477506:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847750d:	00 
 847750e:	89 04 24             	mov    %eax,(%esp)
 8477511:	e8 c8 9a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477516:	e9 e0 36 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847751b:	8b 45 08             	mov    0x8(%ebp),%eax
 847751e:	89 85 7c fe ff ff    	mov    %eax,-0x184(%ebp)
 8477524:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847752a:	89 04 24             	mov    %eax,(%esp)
 847752d:	e8 14 17 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477532:	c7 44 24 04 34 01 00 	movl   $0x134,0x4(%esp)
 8477539:	00 
 847753a:	89 04 24             	mov    %eax,(%esp)
 847753d:	e8 14 17 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477542:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477548:	89 04 24             	mov    %eax,(%esp)
 847754b:	e8 f6 16 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477550:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477557:	ff 
 8477558:	89 04 24             	mov    %eax,(%esp)
 847755b:	e8 f6 16 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477560:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477566:	89 04 24             	mov    %eax,(%esp)
 8477569:	e8 e0 16 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847756e:	c7 44 24 08 2a 00 00 	movl   $0x2a,0x8(%esp)
 8477575:	00 
 8477576:	8b 95 7c fe ff ff    	mov    -0x184(%ebp),%edx
 847757c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477580:	89 04 24             	mov    %eax,(%esp)
 8477583:	e8 ca 70 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477588:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847758d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477593:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477597:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847759e:	00 
 847759f:	89 04 24             	mov    %eax,(%esp)
 84775a2:	e8 37 9a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84775a7:	e9 4f 36 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84775ac:	8b 45 08             	mov    0x8(%ebp),%eax
 84775af:	89 85 80 fe ff ff    	mov    %eax,-0x180(%ebp)
 84775b5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84775bb:	89 04 24             	mov    %eax,(%esp)
 84775be:	e8 83 16 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84775c3:	c7 44 24 04 35 01 00 	movl   $0x135,0x4(%esp)
 84775ca:	00 
 84775cb:	89 04 24             	mov    %eax,(%esp)
 84775ce:	e8 83 16 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84775d3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84775d9:	89 04 24             	mov    %eax,(%esp)
 84775dc:	e8 65 16 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84775e1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84775e8:	ff 
 84775e9:	89 04 24             	mov    %eax,(%esp)
 84775ec:	e8 65 16 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84775f1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84775f7:	89 04 24             	mov    %eax,(%esp)
 84775fa:	e8 4f 16 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84775ff:	c7 44 24 08 80 00 00 	movl   $0x80,0x8(%esp)
 8477606:	00 
 8477607:	8b 95 80 fe ff ff    	mov    -0x180(%ebp),%edx
 847760d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477611:	89 04 24             	mov    %eax,(%esp)
 8477614:	e8 39 70 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477619:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847761e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477624:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477628:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847762f:	00 
 8477630:	89 04 24             	mov    %eax,(%esp)
 8477633:	e8 a6 99 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477638:	e9 be 35 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847763d:	8b 45 08             	mov    0x8(%ebp),%eax
 8477640:	89 85 84 fe ff ff    	mov    %eax,-0x17c(%ebp)
 8477646:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847764c:	89 04 24             	mov    %eax,(%esp)
 847764f:	e8 f2 15 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477654:	c7 44 24 04 60 01 00 	movl   $0x160,0x4(%esp)
 847765b:	00 
 847765c:	89 04 24             	mov    %eax,(%esp)
 847765f:	e8 f2 15 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477664:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 847766a:	8b 58 0a             	mov    0xa(%eax),%ebx
 847766d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477673:	89 04 24             	mov    %eax,(%esp)
 8477676:	e8 cb 15 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847767b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847767f:	89 04 24             	mov    %eax,(%esp)
 8477682:	e8 cf 15 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477687:	8b 85 84 fe ff ff    	mov    -0x17c(%ebp),%eax
 847768d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477691:	0f b7 d8             	movzwl %ax,%ebx
 8477694:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847769a:	89 04 24             	mov    %eax,(%esp)
 847769d:	e8 ac 15 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84776a2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84776a6:	8b 95 84 fe ff ff    	mov    -0x17c(%ebp),%edx
 84776ac:	89 54 24 04          	mov    %edx,0x4(%esp)
 84776b0:	89 04 24             	mov    %eax,(%esp)
 84776b3:	e8 9a 6f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84776b8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84776bd:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84776c3:	89 54 24 08          	mov    %edx,0x8(%esp)
 84776c7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84776ce:	00 
 84776cf:	89 04 24             	mov    %eax,(%esp)
 84776d2:	e8 07 99 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84776d7:	e9 1f 35 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84776dc:	8b 45 08             	mov    0x8(%ebp),%eax
 84776df:	89 85 88 fe ff ff    	mov    %eax,-0x178(%ebp)
 84776e5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84776eb:	89 04 24             	mov    %eax,(%esp)
 84776ee:	e8 53 15 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84776f3:	c7 44 24 04 61 01 00 	movl   $0x161,0x4(%esp)
 84776fa:	00 
 84776fb:	89 04 24             	mov    %eax,(%esp)
 84776fe:	e8 53 15 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477703:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 8477709:	8b 58 0a             	mov    0xa(%eax),%ebx
 847770c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477712:	89 04 24             	mov    %eax,(%esp)
 8477715:	e8 2c 15 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847771a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847771e:	89 04 24             	mov    %eax,(%esp)
 8477721:	e8 30 15 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477726:	8b 85 88 fe ff ff    	mov    -0x178(%ebp),%eax
 847772c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477730:	0f b7 d8             	movzwl %ax,%ebx
 8477733:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477739:	89 04 24             	mov    %eax,(%esp)
 847773c:	e8 0d 15 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477741:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477745:	8b 95 88 fe ff ff    	mov    -0x178(%ebp),%edx
 847774b:	89 54 24 04          	mov    %edx,0x4(%esp)
 847774f:	89 04 24             	mov    %eax,(%esp)
 8477752:	e8 fb 6e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477757:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847775c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477762:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477766:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847776d:	00 
 847776e:	89 04 24             	mov    %eax,(%esp)
 8477771:	e8 68 98 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477776:	e9 80 34 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847777b:	8b 45 08             	mov    0x8(%ebp),%eax
 847777e:	89 85 8c fe ff ff    	mov    %eax,-0x174(%ebp)
 8477784:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847778a:	89 04 24             	mov    %eax,(%esp)
 847778d:	e8 b4 14 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477792:	c7 44 24 04 62 01 00 	movl   $0x162,0x4(%esp)
 8477799:	00 
 847779a:	89 04 24             	mov    %eax,(%esp)
 847779d:	e8 b4 14 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84777a2:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 84777a8:	8b 58 0b             	mov    0xb(%eax),%ebx
 84777ab:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84777b1:	89 04 24             	mov    %eax,(%esp)
 84777b4:	e8 8d 14 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84777b9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84777bd:	89 04 24             	mov    %eax,(%esp)
 84777c0:	e8 91 14 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84777c5:	8b 85 8c fe ff ff    	mov    -0x174(%ebp),%eax
 84777cb:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84777cf:	0f b7 d8             	movzwl %ax,%ebx
 84777d2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84777d8:	89 04 24             	mov    %eax,(%esp)
 84777db:	e8 6e 14 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84777e0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84777e4:	8b 95 8c fe ff ff    	mov    -0x174(%ebp),%edx
 84777ea:	89 54 24 04          	mov    %edx,0x4(%esp)
 84777ee:	89 04 24             	mov    %eax,(%esp)
 84777f1:	e8 5c 6e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84777f6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84777fb:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477801:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477805:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847780c:	00 
 847780d:	89 04 24             	mov    %eax,(%esp)
 8477810:	e8 c9 97 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477815:	e9 e1 33 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847781a:	8b 45 08             	mov    0x8(%ebp),%eax
 847781d:	89 85 90 fe ff ff    	mov    %eax,-0x170(%ebp)
 8477823:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477829:	89 04 24             	mov    %eax,(%esp)
 847782c:	e8 15 14 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477831:	c7 44 24 04 74 01 00 	movl   $0x174,0x4(%esp)
 8477838:	00 
 8477839:	89 04 24             	mov    %eax,(%esp)
 847783c:	e8 15 14 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477841:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477847:	89 04 24             	mov    %eax,(%esp)
 847784a:	e8 f7 13 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847784f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477856:	ff 
 8477857:	89 04 24             	mov    %eax,(%esp)
 847785a:	e8 f7 13 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847785f:	8b 85 90 fe ff ff    	mov    -0x170(%ebp),%eax
 8477865:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477869:	0f b7 d8             	movzwl %ax,%ebx
 847786c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477872:	89 04 24             	mov    %eax,(%esp)
 8477875:	e8 d4 13 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847787a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847787e:	8b 95 90 fe ff ff    	mov    -0x170(%ebp),%edx
 8477884:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477888:	89 04 24             	mov    %eax,(%esp)
 847788b:	e8 c2 6d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477890:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477895:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847789b:	89 54 24 08          	mov    %edx,0x8(%esp)
 847789f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84778a6:	00 
 84778a7:	89 04 24             	mov    %eax,(%esp)
 84778aa:	e8 2f 97 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84778af:	e9 47 33 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84778b4:	8b 45 08             	mov    0x8(%ebp),%eax
 84778b7:	89 85 94 fe ff ff    	mov    %eax,-0x16c(%ebp)
 84778bd:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84778c3:	89 04 24             	mov    %eax,(%esp)
 84778c6:	e8 7b 13 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84778cb:	c7 44 24 04 70 01 00 	movl   $0x170,0x4(%esp)
 84778d2:	00 
 84778d3:	89 04 24             	mov    %eax,(%esp)
 84778d6:	e8 7b 13 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84778db:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84778e1:	89 04 24             	mov    %eax,(%esp)
 84778e4:	e8 5d 13 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84778e9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84778f0:	ff 
 84778f1:	89 04 24             	mov    %eax,(%esp)
 84778f4:	e8 5d 13 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84778f9:	8b 85 94 fe ff ff    	mov    -0x16c(%ebp),%eax
 84778ff:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477903:	0f b7 d8             	movzwl %ax,%ebx
 8477906:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847790c:	89 04 24             	mov    %eax,(%esp)
 847790f:	e8 3a 13 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477914:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477918:	8b 95 94 fe ff ff    	mov    -0x16c(%ebp),%edx
 847791e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477922:	89 04 24             	mov    %eax,(%esp)
 8477925:	e8 28 6d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847792a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847792f:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477935:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477939:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477940:	00 
 8477941:	89 04 24             	mov    %eax,(%esp)
 8477944:	e8 95 96 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477949:	e9 ad 32 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847794e:	8b 45 08             	mov    0x8(%ebp),%eax
 8477951:	89 85 98 fe ff ff    	mov    %eax,-0x168(%ebp)
 8477957:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847795d:	89 04 24             	mov    %eax,(%esp)
 8477960:	e8 e1 12 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477965:	c7 44 24 04 71 01 00 	movl   $0x171,0x4(%esp)
 847796c:	00 
 847796d:	89 04 24             	mov    %eax,(%esp)
 8477970:	e8 e1 12 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477975:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 847797b:	8b 58 0a             	mov    0xa(%eax),%ebx
 847797e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477984:	89 04 24             	mov    %eax,(%esp)
 8477987:	e8 ba 12 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847798c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477990:	89 04 24             	mov    %eax,(%esp)
 8477993:	e8 be 12 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477998:	8b 85 98 fe ff ff    	mov    -0x168(%ebp),%eax
 847799e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84779a2:	0f b7 d8             	movzwl %ax,%ebx
 84779a5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84779ab:	89 04 24             	mov    %eax,(%esp)
 84779ae:	e8 9b 12 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84779b3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84779b7:	8b 95 98 fe ff ff    	mov    -0x168(%ebp),%edx
 84779bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84779c1:	89 04 24             	mov    %eax,(%esp)
 84779c4:	e8 89 6c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84779c9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84779ce:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84779d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84779d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84779df:	00 
 84779e0:	89 04 24             	mov    %eax,(%esp)
 84779e3:	e8 f6 95 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84779e8:	e9 0e 32 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84779ed:	8b 45 08             	mov    0x8(%ebp),%eax
 84779f0:	89 85 9c fe ff ff    	mov    %eax,-0x164(%ebp)
 84779f6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84779fc:	89 04 24             	mov    %eax,(%esp)
 84779ff:	e8 42 12 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477a04:	c7 44 24 04 72 01 00 	movl   $0x172,0x4(%esp)
 8477a0b:	00 
 8477a0c:	89 04 24             	mov    %eax,(%esp)
 8477a0f:	e8 42 12 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477a14:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8477a1a:	8b 58 0a             	mov    0xa(%eax),%ebx
 8477a1d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477a23:	89 04 24             	mov    %eax,(%esp)
 8477a26:	e8 1b 12 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477a2b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477a2f:	89 04 24             	mov    %eax,(%esp)
 8477a32:	e8 1f 12 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477a37:	8b 85 9c fe ff ff    	mov    -0x164(%ebp),%eax
 8477a3d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477a41:	0f b7 d8             	movzwl %ax,%ebx
 8477a44:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477a4a:	89 04 24             	mov    %eax,(%esp)
 8477a4d:	e8 fc 11 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477a52:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477a56:	8b 95 9c fe ff ff    	mov    -0x164(%ebp),%edx
 8477a5c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477a60:	89 04 24             	mov    %eax,(%esp)
 8477a63:	e8 ea 6b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477a68:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477a6d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477a73:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477a77:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477a7e:	00 
 8477a7f:	89 04 24             	mov    %eax,(%esp)
 8477a82:	e8 57 95 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477a87:	e9 6f 31 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477a8c:	8b 45 08             	mov    0x8(%ebp),%eax
 8477a8f:	89 85 a0 fe ff ff    	mov    %eax,-0x160(%ebp)
 8477a95:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477a9b:	89 04 24             	mov    %eax,(%esp)
 8477a9e:	e8 a3 11 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477aa3:	c7 44 24 04 73 01 00 	movl   $0x173,0x4(%esp)
 8477aaa:	00 
 8477aab:	89 04 24             	mov    %eax,(%esp)
 8477aae:	e8 a3 11 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477ab3:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8477ab9:	8b 40 0a             	mov    0xa(%eax),%eax
 8477abc:	89 c3                	mov    %eax,%ebx
 8477abe:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477ac4:	89 04 24             	mov    %eax,(%esp)
 8477ac7:	e8 7a 11 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477acc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477ad0:	89 04 24             	mov    %eax,(%esp)
 8477ad3:	e8 7e 11 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477ad8:	8b 85 a0 fe ff ff    	mov    -0x160(%ebp),%eax
 8477ade:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477ae2:	0f b7 d8             	movzwl %ax,%ebx
 8477ae5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477aeb:	89 04 24             	mov    %eax,(%esp)
 8477aee:	e8 5b 11 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477af3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477af7:	8b 95 a0 fe ff ff    	mov    -0x160(%ebp),%edx
 8477afd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477b01:	89 04 24             	mov    %eax,(%esp)
 8477b04:	e8 49 6b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477b09:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477b0e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477b14:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477b18:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477b1f:	00 
 8477b20:	89 04 24             	mov    %eax,(%esp)
 8477b23:	e8 b6 94 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477b28:	e9 ce 30 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477b2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8477b30:	89 85 a4 fe ff ff    	mov    %eax,-0x15c(%ebp)
 8477b36:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477b3c:	89 04 24             	mov    %eax,(%esp)
 8477b3f:	e8 02 11 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477b44:	c7 44 24 04 76 01 00 	movl   $0x176,0x4(%esp)
 8477b4b:	00 
 8477b4c:	89 04 24             	mov    %eax,(%esp)
 8477b4f:	e8 02 11 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477b54:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8477b5a:	8b 40 0a             	mov    0xa(%eax),%eax
 8477b5d:	89 c3                	mov    %eax,%ebx
 8477b5f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477b65:	89 04 24             	mov    %eax,(%esp)
 8477b68:	e8 d9 10 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477b6d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477b71:	89 04 24             	mov    %eax,(%esp)
 8477b74:	e8 dd 10 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477b79:	8b 85 a4 fe ff ff    	mov    -0x15c(%ebp),%eax
 8477b7f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477b83:	0f b7 d8             	movzwl %ax,%ebx
 8477b86:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477b8c:	89 04 24             	mov    %eax,(%esp)
 8477b8f:	e8 ba 10 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477b94:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477b98:	8b 95 a4 fe ff ff    	mov    -0x15c(%ebp),%edx
 8477b9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477ba2:	89 04 24             	mov    %eax,(%esp)
 8477ba5:	e8 a8 6a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477baa:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477baf:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477bb5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477bb9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477bc0:	00 
 8477bc1:	89 04 24             	mov    %eax,(%esp)
 8477bc4:	e8 15 94 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477bc9:	e9 2d 30 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477bce:	8b 45 08             	mov    0x8(%ebp),%eax
 8477bd1:	89 85 a8 fe ff ff    	mov    %eax,-0x158(%ebp)
 8477bd7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477bdd:	89 04 24             	mov    %eax,(%esp)
 8477be0:	e8 61 10 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477be5:	c7 44 24 04 7a 01 00 	movl   $0x17a,0x4(%esp)
 8477bec:	00 
 8477bed:	89 04 24             	mov    %eax,(%esp)
 8477bf0:	e8 61 10 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477bf5:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8477bfb:	8b 58 0a             	mov    0xa(%eax),%ebx
 8477bfe:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477c04:	89 04 24             	mov    %eax,(%esp)
 8477c07:	e8 3a 10 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477c0c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477c10:	89 04 24             	mov    %eax,(%esp)
 8477c13:	e8 3e 10 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477c18:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 8477c1e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477c22:	0f b7 d8             	movzwl %ax,%ebx
 8477c25:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477c2b:	89 04 24             	mov    %eax,(%esp)
 8477c2e:	e8 1b 10 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477c33:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477c37:	8b 95 a8 fe ff ff    	mov    -0x158(%ebp),%edx
 8477c3d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477c41:	89 04 24             	mov    %eax,(%esp)
 8477c44:	e8 09 6a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477c49:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477c4e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477c54:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477c58:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477c5f:	00 
 8477c60:	89 04 24             	mov    %eax,(%esp)
 8477c63:	e8 76 93 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477c68:	e9 8e 2f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477c6d:	8b 45 08             	mov    0x8(%ebp),%eax
 8477c70:	89 85 ac fe ff ff    	mov    %eax,-0x154(%ebp)
 8477c76:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477c7c:	89 04 24             	mov    %eax,(%esp)
 8477c7f:	e8 c2 0f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477c84:	c7 44 24 04 7b 01 00 	movl   $0x17b,0x4(%esp)
 8477c8b:	00 
 8477c8c:	89 04 24             	mov    %eax,(%esp)
 8477c8f:	e8 c2 0f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477c94:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8477c9a:	8b 58 0a             	mov    0xa(%eax),%ebx
 8477c9d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477ca3:	89 04 24             	mov    %eax,(%esp)
 8477ca6:	e8 9b 0f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477cab:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477caf:	89 04 24             	mov    %eax,(%esp)
 8477cb2:	e8 9f 0f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477cb7:	8b 85 ac fe ff ff    	mov    -0x154(%ebp),%eax
 8477cbd:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477cc1:	0f b7 d8             	movzwl %ax,%ebx
 8477cc4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477cca:	89 04 24             	mov    %eax,(%esp)
 8477ccd:	e8 7c 0f c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477cd2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477cd6:	8b 95 ac fe ff ff    	mov    -0x154(%ebp),%edx
 8477cdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477ce0:	89 04 24             	mov    %eax,(%esp)
 8477ce3:	e8 6a 69 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477ce8:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477ced:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477cf3:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477cf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477cfe:	00 
 8477cff:	89 04 24             	mov    %eax,(%esp)
 8477d02:	e8 d7 92 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477d07:	e9 ef 2e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477d0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8477d0f:	89 85 b0 fe ff ff    	mov    %eax,-0x150(%ebp)
 8477d15:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477d1b:	89 04 24             	mov    %eax,(%esp)
 8477d1e:	e8 23 0f c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477d23:	c7 44 24 04 7e 01 00 	movl   $0x17e,0x4(%esp)
 8477d2a:	00 
 8477d2b:	89 04 24             	mov    %eax,(%esp)
 8477d2e:	e8 23 0f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477d33:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8477d39:	8b 58 0a             	mov    0xa(%eax),%ebx
 8477d3c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477d42:	89 04 24             	mov    %eax,(%esp)
 8477d45:	e8 fc 0e c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477d4a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477d4e:	89 04 24             	mov    %eax,(%esp)
 8477d51:	e8 00 0f c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477d56:	8b 85 b0 fe ff ff    	mov    -0x150(%ebp),%eax
 8477d5c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477d60:	0f b7 d8             	movzwl %ax,%ebx
 8477d63:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477d69:	89 04 24             	mov    %eax,(%esp)
 8477d6c:	e8 dd 0e c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477d71:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477d75:	8b 95 b0 fe ff ff    	mov    -0x150(%ebp),%edx
 8477d7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477d7f:	89 04 24             	mov    %eax,(%esp)
 8477d82:	e8 cb 68 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477d87:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477d8c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477d92:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477d96:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477d9d:	00 
 8477d9e:	89 04 24             	mov    %eax,(%esp)
 8477da1:	e8 38 92 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477da6:	e9 50 2e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477dab:	8b 45 08             	mov    0x8(%ebp),%eax
 8477dae:	89 85 b4 fe ff ff    	mov    %eax,-0x14c(%ebp)
 8477db4:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8477dba:	8b 40 0a             	mov    0xa(%eax),%eax
 8477dbd:	89 c2                	mov    %eax,%edx
 8477dbf:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 8477dc4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477dc8:	89 04 24             	mov    %eax,(%esp)
 8477dcb:	e8 74 5f 00 00       	call   847dd44 <_ZN16village_attacked18CVillageMonsterMgr13SetRewardTypeE28ENUM_VILLAGE_ATTACKED_REWARD>
 8477dd0:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8477dd6:	8b 40 0a             	mov    0xa(%eax),%eax
 8477dd9:	83 f8 01             	cmp    $0x1,%eax
 8477ddc:	74 0b                	je     8477de9 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4789>
 8477dde:	83 f8 02             	cmp    $0x2,%eax
 8477de1:	74 15                	je     8477df8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4798>
 8477de3:	85 c0                	test   %eax,%eax
 8477de5:	74 11                	je     8477df8 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x4798>
 8477de7:	eb 1c                	jmp    8477e05 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x47a5>
 8477de9:	a1 80 f7 41 09       	mov    0x941f780,%eax
 8477dee:	89 04 24             	mov    %eax,(%esp)
 8477df1:	e8 28 5f 00 00       	call   847dd1e <_ZN16village_attacked15CRevengeDungeon18OpenRevengeDungeonEv>
 8477df6:	eb 0d                	jmp    8477e05 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x47a5>
 8477df8:	a1 80 f7 41 09       	mov    0x941f780,%eax
 8477dfd:	89 04 24             	mov    %eax,(%esp)
 8477e00:	e8 25 5f 00 00       	call   847dd2a <_ZN16village_attacked15CRevengeDungeon19CloseRevengeDungeonEv>
 8477e05:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8477e0b:	8b 50 0e             	mov    0xe(%eax),%edx
 8477e0e:	a1 80 f7 41 09       	mov    0x941f780,%eax
 8477e13:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477e17:	89 04 24             	mov    %eax,(%esp)
 8477e1a:	e8 17 5f 00 00       	call   847dd36 <_ZN16village_attacked15CRevengeDungeon12SetCloseTimeEj>
 8477e1f:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8477e25:	8b 50 0e             	mov    0xe(%eax),%edx
 8477e28:	8b 85 b4 fe ff ff    	mov    -0x14c(%ebp),%eax
 8477e2e:	8b 40 0a             	mov    0xa(%eax),%eax
 8477e31:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477e35:	89 44 24 04          	mov    %eax,0x4(%esp)
 8477e39:	c7 04 24 d0 ff c6 08 	movl   $0x8c6ffd0,(%esp)
 8477e40:	e8 1b 5d c0 ff       	call   807db60 <printf@plt>
 8477e45:	e9 b1 2d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477e4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8477e4d:	89 85 b8 fe ff ff    	mov    %eax,-0x148(%ebp)
 8477e53:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477e59:	89 04 24             	mov    %eax,(%esp)
 8477e5c:	e8 e5 0d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477e61:	c7 44 24 04 85 01 00 	movl   $0x185,0x4(%esp)
 8477e68:	00 
 8477e69:	89 04 24             	mov    %eax,(%esp)
 8477e6c:	e8 e5 0d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477e71:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477e77:	89 04 24             	mov    %eax,(%esp)
 8477e7a:	e8 c7 0d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477e7f:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477e86:	ff 
 8477e87:	89 04 24             	mov    %eax,(%esp)
 8477e8a:	e8 c7 0d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477e8f:	8b 85 b8 fe ff ff    	mov    -0x148(%ebp),%eax
 8477e95:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477e99:	0f b7 d8             	movzwl %ax,%ebx
 8477e9c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477ea2:	89 04 24             	mov    %eax,(%esp)
 8477ea5:	e8 a4 0d c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477eaa:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477eae:	8b 95 b8 fe ff ff    	mov    -0x148(%ebp),%edx
 8477eb4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477eb8:	89 04 24             	mov    %eax,(%esp)
 8477ebb:	e8 92 67 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477ec0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477ec5:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477ecb:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477ecf:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477ed6:	00 
 8477ed7:	89 04 24             	mov    %eax,(%esp)
 8477eda:	e8 ff 90 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477edf:	e9 17 2d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477ee4:	8b 45 08             	mov    0x8(%ebp),%eax
 8477ee7:	89 85 bc fe ff ff    	mov    %eax,-0x144(%ebp)
 8477eed:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477ef3:	89 04 24             	mov    %eax,(%esp)
 8477ef6:	e8 4b 0d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477efb:	c7 44 24 04 86 01 00 	movl   $0x186,0x4(%esp)
 8477f02:	00 
 8477f03:	89 04 24             	mov    %eax,(%esp)
 8477f06:	e8 4b 0d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477f0b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477f11:	89 04 24             	mov    %eax,(%esp)
 8477f14:	e8 2d 0d c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477f19:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8477f20:	ff 
 8477f21:	89 04 24             	mov    %eax,(%esp)
 8477f24:	e8 2d 0d c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477f29:	8b 85 bc fe ff ff    	mov    -0x144(%ebp),%eax
 8477f2f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477f33:	0f b7 d8             	movzwl %ax,%ebx
 8477f36:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477f3c:	89 04 24             	mov    %eax,(%esp)
 8477f3f:	e8 0a 0d c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477f44:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477f48:	8b 95 bc fe ff ff    	mov    -0x144(%ebp),%edx
 8477f4e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477f52:	89 04 24             	mov    %eax,(%esp)
 8477f55:	e8 f8 66 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477f5a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8477f5f:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8477f65:	89 54 24 08          	mov    %edx,0x8(%esp)
 8477f69:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8477f70:	00 
 8477f71:	89 04 24             	mov    %eax,(%esp)
 8477f74:	e8 65 90 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8477f79:	e9 7d 2c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8477f7e:	8b 45 08             	mov    0x8(%ebp),%eax
 8477f81:	89 85 c0 fe ff ff    	mov    %eax,-0x140(%ebp)
 8477f87:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477f8d:	89 04 24             	mov    %eax,(%esp)
 8477f90:	e8 b1 0c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477f95:	c7 44 24 04 88 01 00 	movl   $0x188,0x4(%esp)
 8477f9c:	00 
 8477f9d:	89 04 24             	mov    %eax,(%esp)
 8477fa0:	e8 b1 0c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477fa5:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8477fab:	8b 40 0a             	mov    0xa(%eax),%eax
 8477fae:	89 c3                	mov    %eax,%ebx
 8477fb0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477fb6:	89 04 24             	mov    %eax,(%esp)
 8477fb9:	e8 88 0c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8477fbe:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8477fc2:	89 04 24             	mov    %eax,(%esp)
 8477fc5:	e8 8c 0c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8477fca:	8b 85 c0 fe ff ff    	mov    -0x140(%ebp),%eax
 8477fd0:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8477fd4:	0f b7 d8             	movzwl %ax,%ebx
 8477fd7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8477fdd:	89 04 24             	mov    %eax,(%esp)
 8477fe0:	e8 69 0c c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8477fe5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8477fe9:	8b 95 c0 fe ff ff    	mov    -0x140(%ebp),%edx
 8477fef:	89 54 24 04          	mov    %edx,0x4(%esp)
 8477ff3:	89 04 24             	mov    %eax,(%esp)
 8477ff6:	e8 57 66 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8477ffb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478000:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478006:	89 54 24 08          	mov    %edx,0x8(%esp)
 847800a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478011:	00 
 8478012:	89 04 24             	mov    %eax,(%esp)
 8478015:	e8 c4 8f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847801a:	e9 dc 2b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847801f:	8b 45 08             	mov    0x8(%ebp),%eax
 8478022:	89 85 c4 fe ff ff    	mov    %eax,-0x13c(%ebp)
 8478028:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847802e:	89 04 24             	mov    %eax,(%esp)
 8478031:	e8 10 0c c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478036:	c7 44 24 04 87 01 00 	movl   $0x187,0x4(%esp)
 847803d:	00 
 847803e:	89 04 24             	mov    %eax,(%esp)
 8478041:	e8 10 0c c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478046:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847804c:	89 04 24             	mov    %eax,(%esp)
 847804f:	e8 f2 0b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478054:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847805b:	ff 
 847805c:	89 04 24             	mov    %eax,(%esp)
 847805f:	e8 f2 0b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478064:	8b 85 c4 fe ff ff    	mov    -0x13c(%ebp),%eax
 847806a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847806e:	0f b7 d8             	movzwl %ax,%ebx
 8478071:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478077:	89 04 24             	mov    %eax,(%esp)
 847807a:	e8 cf 0b c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847807f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478083:	8b 95 c4 fe ff ff    	mov    -0x13c(%ebp),%edx
 8478089:	89 54 24 04          	mov    %edx,0x4(%esp)
 847808d:	89 04 24             	mov    %eax,(%esp)
 8478090:	e8 bd 65 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478095:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847809a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84780a0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84780a4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84780ab:	00 
 84780ac:	89 04 24             	mov    %eax,(%esp)
 84780af:	e8 2a 8f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84780b4:	e9 42 2b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84780b9:	8b 45 08             	mov    0x8(%ebp),%eax
 84780bc:	89 85 c8 fe ff ff    	mov    %eax,-0x138(%ebp)
 84780c2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84780c8:	89 04 24             	mov    %eax,(%esp)
 84780cb:	e8 76 0b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84780d0:	c7 44 24 04 8e 01 00 	movl   $0x18e,0x4(%esp)
 84780d7:	00 
 84780d8:	89 04 24             	mov    %eax,(%esp)
 84780db:	e8 76 0b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84780e0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84780e6:	89 04 24             	mov    %eax,(%esp)
 84780e9:	e8 58 0b c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84780ee:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84780f5:	ff 
 84780f6:	89 04 24             	mov    %eax,(%esp)
 84780f9:	e8 58 0b c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84780fe:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478104:	89 04 24             	mov    %eax,(%esp)
 8478107:	e8 42 0b c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847810c:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 8478113:	00 
 8478114:	8b 95 c8 fe ff ff    	mov    -0x138(%ebp),%edx
 847811a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847811e:	89 04 24             	mov    %eax,(%esp)
 8478121:	e8 2c 65 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478126:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847812b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478131:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478135:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847813c:	00 
 847813d:	89 04 24             	mov    %eax,(%esp)
 8478140:	e8 99 8e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478145:	e9 b1 2a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847814a:	8b 45 08             	mov    0x8(%ebp),%eax
 847814d:	89 85 cc fe ff ff    	mov    %eax,-0x134(%ebp)
 8478153:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478159:	89 04 24             	mov    %eax,(%esp)
 847815c:	e8 e5 0a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478161:	c7 44 24 04 98 01 00 	movl   $0x198,0x4(%esp)
 8478168:	00 
 8478169:	89 04 24             	mov    %eax,(%esp)
 847816c:	e8 e5 0a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478171:	8b 85 cc fe ff ff    	mov    -0x134(%ebp),%eax
 8478177:	8b 58 0a             	mov    0xa(%eax),%ebx
 847817a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478180:	89 04 24             	mov    %eax,(%esp)
 8478183:	e8 be 0a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478188:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847818c:	89 04 24             	mov    %eax,(%esp)
 847818f:	e8 c2 0a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478194:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847819a:	89 04 24             	mov    %eax,(%esp)
 847819d:	e8 ac 0a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84781a2:	c7 44 24 08 17 00 00 	movl   $0x17,0x8(%esp)
 84781a9:	00 
 84781aa:	8b 95 cc fe ff ff    	mov    -0x134(%ebp),%edx
 84781b0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84781b4:	89 04 24             	mov    %eax,(%esp)
 84781b7:	e8 96 64 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84781bc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84781c1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84781c7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84781cb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84781d2:	00 
 84781d3:	89 04 24             	mov    %eax,(%esp)
 84781d6:	e8 03 8e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84781db:	e9 1b 2a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84781e0:	8b 45 08             	mov    0x8(%ebp),%eax
 84781e3:	89 85 d0 fe ff ff    	mov    %eax,-0x130(%ebp)
 84781e9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84781ef:	89 04 24             	mov    %eax,(%esp)
 84781f2:	e8 4f 0a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84781f7:	c7 44 24 04 99 01 00 	movl   $0x199,0x4(%esp)
 84781fe:	00 
 84781ff:	89 04 24             	mov    %eax,(%esp)
 8478202:	e8 4f 0a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478207:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847820d:	89 04 24             	mov    %eax,(%esp)
 8478210:	e8 31 0a c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478215:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847821c:	ff 
 847821d:	89 04 24             	mov    %eax,(%esp)
 8478220:	e8 31 0a c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478225:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847822b:	89 04 24             	mov    %eax,(%esp)
 847822e:	e8 1b 0a c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478233:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 847823a:	00 
 847823b:	8b 95 d0 fe ff ff    	mov    -0x130(%ebp),%edx
 8478241:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478245:	89 04 24             	mov    %eax,(%esp)
 8478248:	e8 05 64 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847824d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478252:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478258:	89 54 24 08          	mov    %edx,0x8(%esp)
 847825c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478263:	00 
 8478264:	89 04 24             	mov    %eax,(%esp)
 8478267:	e8 72 8d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847826c:	e9 8a 29 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478271:	8b 45 08             	mov    0x8(%ebp),%eax
 8478274:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 847827a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478280:	89 04 24             	mov    %eax,(%esp)
 8478283:	e8 be 09 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478288:	c7 44 24 04 a0 01 00 	movl   $0x1a0,0x4(%esp)
 847828f:	00 
 8478290:	89 04 24             	mov    %eax,(%esp)
 8478293:	e8 be 09 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478298:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 847829e:	8b 58 0a             	mov    0xa(%eax),%ebx
 84782a1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84782a7:	89 04 24             	mov    %eax,(%esp)
 84782aa:	e8 97 09 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84782af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84782b3:	89 04 24             	mov    %eax,(%esp)
 84782b6:	e8 9b 09 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84782bb:	8b 85 d4 fe ff ff    	mov    -0x12c(%ebp),%eax
 84782c1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84782c5:	0f b7 d8             	movzwl %ax,%ebx
 84782c8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84782ce:	89 04 24             	mov    %eax,(%esp)
 84782d1:	e8 78 09 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84782d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84782da:	8b 95 d4 fe ff ff    	mov    -0x12c(%ebp),%edx
 84782e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84782e4:	89 04 24             	mov    %eax,(%esp)
 84782e7:	e8 66 63 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84782ec:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84782f1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84782f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84782fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478302:	00 
 8478303:	89 04 24             	mov    %eax,(%esp)
 8478306:	e8 d3 8c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847830b:	e9 eb 28 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478310:	8b 45 08             	mov    0x8(%ebp),%eax
 8478313:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 8478319:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847831f:	89 04 24             	mov    %eax,(%esp)
 8478322:	e8 1f 09 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478327:	c7 44 24 04 a2 01 00 	movl   $0x1a2,0x4(%esp)
 847832e:	00 
 847832f:	89 04 24             	mov    %eax,(%esp)
 8478332:	e8 1f 09 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478337:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 847833d:	8b 58 0a             	mov    0xa(%eax),%ebx
 8478340:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478346:	89 04 24             	mov    %eax,(%esp)
 8478349:	e8 f8 08 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847834e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8478352:	89 04 24             	mov    %eax,(%esp)
 8478355:	e8 fc 08 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847835a:	8b 85 d8 fe ff ff    	mov    -0x128(%ebp),%eax
 8478360:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478364:	0f b7 d8             	movzwl %ax,%ebx
 8478367:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847836d:	89 04 24             	mov    %eax,(%esp)
 8478370:	e8 d9 08 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478375:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478379:	8b 95 d8 fe ff ff    	mov    -0x128(%ebp),%edx
 847837f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478383:	89 04 24             	mov    %eax,(%esp)
 8478386:	e8 c7 62 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847838b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478390:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478396:	89 54 24 08          	mov    %edx,0x8(%esp)
 847839a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84783a1:	00 
 84783a2:	89 04 24             	mov    %eax,(%esp)
 84783a5:	e8 34 8c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84783aa:	e9 4c 28 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84783af:	8b 45 08             	mov    0x8(%ebp),%eax
 84783b2:	89 85 dc fe ff ff    	mov    %eax,-0x124(%ebp)
 84783b8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84783be:	89 04 24             	mov    %eax,(%esp)
 84783c1:	e8 80 08 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84783c6:	c7 44 24 04 aa 01 00 	movl   $0x1aa,0x4(%esp)
 84783cd:	00 
 84783ce:	89 04 24             	mov    %eax,(%esp)
 84783d1:	e8 80 08 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84783d6:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 84783dc:	8b 58 0a             	mov    0xa(%eax),%ebx
 84783df:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84783e5:	89 04 24             	mov    %eax,(%esp)
 84783e8:	e8 59 08 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84783ed:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84783f1:	89 04 24             	mov    %eax,(%esp)
 84783f4:	e8 5d 08 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84783f9:	8b 85 dc fe ff ff    	mov    -0x124(%ebp),%eax
 84783ff:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478403:	0f b7 d8             	movzwl %ax,%ebx
 8478406:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847840c:	89 04 24             	mov    %eax,(%esp)
 847840f:	e8 3a 08 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478414:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478418:	8b 95 dc fe ff ff    	mov    -0x124(%ebp),%edx
 847841e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478422:	89 04 24             	mov    %eax,(%esp)
 8478425:	e8 28 62 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847842a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847842f:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478435:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478439:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478440:	00 
 8478441:	89 04 24             	mov    %eax,(%esp)
 8478444:	e8 95 8b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478449:	e9 ad 27 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847844e:	8b 45 08             	mov    0x8(%ebp),%eax
 8478451:	89 85 e0 fe ff ff    	mov    %eax,-0x120(%ebp)
 8478457:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847845d:	89 04 24             	mov    %eax,(%esp)
 8478460:	e8 e1 07 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478465:	c7 44 24 04 ab 01 00 	movl   $0x1ab,0x4(%esp)
 847846c:	00 
 847846d:	89 04 24             	mov    %eax,(%esp)
 8478470:	e8 e1 07 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478475:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 847847b:	8b 58 0a             	mov    0xa(%eax),%ebx
 847847e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478484:	89 04 24             	mov    %eax,(%esp)
 8478487:	e8 ba 07 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847848c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8478490:	89 04 24             	mov    %eax,(%esp)
 8478493:	e8 be 07 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478498:	8b 85 e0 fe ff ff    	mov    -0x120(%ebp),%eax
 847849e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84784a2:	0f b7 d8             	movzwl %ax,%ebx
 84784a5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84784ab:	89 04 24             	mov    %eax,(%esp)
 84784ae:	e8 9b 07 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84784b3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84784b7:	8b 95 e0 fe ff ff    	mov    -0x120(%ebp),%edx
 84784bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 84784c1:	89 04 24             	mov    %eax,(%esp)
 84784c4:	e8 89 61 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84784c9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84784ce:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84784d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 84784d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84784df:	00 
 84784e0:	89 04 24             	mov    %eax,(%esp)
 84784e3:	e8 f6 8a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84784e8:	e9 0e 27 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84784ed:	8b 45 08             	mov    0x8(%ebp),%eax
 84784f0:	89 85 e4 fe ff ff    	mov    %eax,-0x11c(%ebp)
 84784f6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84784fc:	89 04 24             	mov    %eax,(%esp)
 84784ff:	e8 42 07 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478504:	c7 44 24 04 ac 01 00 	movl   $0x1ac,0x4(%esp)
 847850b:	00 
 847850c:	89 04 24             	mov    %eax,(%esp)
 847850f:	e8 42 07 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478514:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 847851a:	8b 58 0a             	mov    0xa(%eax),%ebx
 847851d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478523:	89 04 24             	mov    %eax,(%esp)
 8478526:	e8 1b 07 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847852b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847852f:	89 04 24             	mov    %eax,(%esp)
 8478532:	e8 1f 07 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478537:	8b 85 e4 fe ff ff    	mov    -0x11c(%ebp),%eax
 847853d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478541:	0f b7 d8             	movzwl %ax,%ebx
 8478544:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847854a:	89 04 24             	mov    %eax,(%esp)
 847854d:	e8 fc 06 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478552:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478556:	8b 95 e4 fe ff ff    	mov    -0x11c(%ebp),%edx
 847855c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478560:	89 04 24             	mov    %eax,(%esp)
 8478563:	e8 ea 60 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478568:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847856d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478573:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478577:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847857e:	00 
 847857f:	89 04 24             	mov    %eax,(%esp)
 8478582:	e8 57 8a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478587:	e9 6f 26 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847858c:	8b 45 08             	mov    0x8(%ebp),%eax
 847858f:	89 85 e8 fe ff ff    	mov    %eax,-0x118(%ebp)
 8478595:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847859b:	89 04 24             	mov    %eax,(%esp)
 847859e:	e8 a3 06 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84785a3:	c7 44 24 04 ad 01 00 	movl   $0x1ad,0x4(%esp)
 84785aa:	00 
 84785ab:	89 04 24             	mov    %eax,(%esp)
 84785ae:	e8 a3 06 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84785b3:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 84785b9:	8b 58 0a             	mov    0xa(%eax),%ebx
 84785bc:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84785c2:	89 04 24             	mov    %eax,(%esp)
 84785c5:	e8 7c 06 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84785ca:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84785ce:	89 04 24             	mov    %eax,(%esp)
 84785d1:	e8 80 06 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84785d6:	8b 85 e8 fe ff ff    	mov    -0x118(%ebp),%eax
 84785dc:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84785e0:	0f b7 d8             	movzwl %ax,%ebx
 84785e3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84785e9:	89 04 24             	mov    %eax,(%esp)
 84785ec:	e8 5d 06 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84785f1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84785f5:	8b 95 e8 fe ff ff    	mov    -0x118(%ebp),%edx
 84785fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84785ff:	89 04 24             	mov    %eax,(%esp)
 8478602:	e8 4b 60 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478607:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847860c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478612:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478616:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847861d:	00 
 847861e:	89 04 24             	mov    %eax,(%esp)
 8478621:	e8 b8 89 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478626:	e9 d0 25 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847862b:	8b 45 08             	mov    0x8(%ebp),%eax
 847862e:	89 85 ec fe ff ff    	mov    %eax,-0x114(%ebp)
 8478634:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847863a:	89 04 24             	mov    %eax,(%esp)
 847863d:	e8 04 06 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478642:	c7 44 24 04 ae 01 00 	movl   $0x1ae,0x4(%esp)
 8478649:	00 
 847864a:	89 04 24             	mov    %eax,(%esp)
 847864d:	e8 04 06 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478652:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 8478658:	8b 58 0a             	mov    0xa(%eax),%ebx
 847865b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478661:	89 04 24             	mov    %eax,(%esp)
 8478664:	e8 dd 05 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478669:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847866d:	89 04 24             	mov    %eax,(%esp)
 8478670:	e8 e1 05 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478675:	8b 85 ec fe ff ff    	mov    -0x114(%ebp),%eax
 847867b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847867f:	0f b7 d8             	movzwl %ax,%ebx
 8478682:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478688:	89 04 24             	mov    %eax,(%esp)
 847868b:	e8 be 05 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478690:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478694:	8b 95 ec fe ff ff    	mov    -0x114(%ebp),%edx
 847869a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847869e:	89 04 24             	mov    %eax,(%esp)
 84786a1:	e8 ac 5f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84786a6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84786ab:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84786b1:	89 54 24 08          	mov    %edx,0x8(%esp)
 84786b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84786bc:	00 
 84786bd:	89 04 24             	mov    %eax,(%esp)
 84786c0:	e8 19 89 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84786c5:	e9 31 25 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84786ca:	8b 45 08             	mov    0x8(%ebp),%eax
 84786cd:	89 85 f0 fe ff ff    	mov    %eax,-0x110(%ebp)
 84786d3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84786d9:	89 04 24             	mov    %eax,(%esp)
 84786dc:	e8 65 05 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84786e1:	c7 44 24 04 af 01 00 	movl   $0x1af,0x4(%esp)
 84786e8:	00 
 84786e9:	89 04 24             	mov    %eax,(%esp)
 84786ec:	e8 65 05 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84786f1:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 84786f7:	8b 58 0a             	mov    0xa(%eax),%ebx
 84786fa:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478700:	89 04 24             	mov    %eax,(%esp)
 8478703:	e8 3e 05 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478708:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847870c:	89 04 24             	mov    %eax,(%esp)
 847870f:	e8 42 05 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478714:	8b 85 f0 fe ff ff    	mov    -0x110(%ebp),%eax
 847871a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847871e:	0f b7 d8             	movzwl %ax,%ebx
 8478721:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478727:	89 04 24             	mov    %eax,(%esp)
 847872a:	e8 1f 05 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847872f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478733:	8b 95 f0 fe ff ff    	mov    -0x110(%ebp),%edx
 8478739:	89 54 24 04          	mov    %edx,0x4(%esp)
 847873d:	89 04 24             	mov    %eax,(%esp)
 8478740:	e8 0d 5f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478745:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847874a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478750:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478754:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847875b:	00 
 847875c:	89 04 24             	mov    %eax,(%esp)
 847875f:	e8 7a 88 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478764:	e9 92 24 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478769:	8b 45 08             	mov    0x8(%ebp),%eax
 847876c:	89 85 f4 fe ff ff    	mov    %eax,-0x10c(%ebp)
 8478772:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478778:	89 04 24             	mov    %eax,(%esp)
 847877b:	e8 c6 04 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478780:	c7 44 24 04 b0 01 00 	movl   $0x1b0,0x4(%esp)
 8478787:	00 
 8478788:	89 04 24             	mov    %eax,(%esp)
 847878b:	e8 c6 04 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478790:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 8478796:	8b 58 0a             	mov    0xa(%eax),%ebx
 8478799:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847879f:	89 04 24             	mov    %eax,(%esp)
 84787a2:	e8 9f 04 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84787a7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84787ab:	89 04 24             	mov    %eax,(%esp)
 84787ae:	e8 a3 04 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84787b3:	8b 85 f4 fe ff ff    	mov    -0x10c(%ebp),%eax
 84787b9:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84787bd:	0f b7 d8             	movzwl %ax,%ebx
 84787c0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84787c6:	89 04 24             	mov    %eax,(%esp)
 84787c9:	e8 80 04 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84787ce:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84787d2:	8b 95 f4 fe ff ff    	mov    -0x10c(%ebp),%edx
 84787d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84787dc:	89 04 24             	mov    %eax,(%esp)
 84787df:	e8 6e 5e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84787e4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84787e9:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84787ef:	89 54 24 08          	mov    %edx,0x8(%esp)
 84787f3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84787fa:	00 
 84787fb:	89 04 24             	mov    %eax,(%esp)
 84787fe:	e8 db 87 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478803:	e9 f3 23 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478808:	8b 45 08             	mov    0x8(%ebp),%eax
 847880b:	89 85 f8 fe ff ff    	mov    %eax,-0x108(%ebp)
 8478811:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478817:	89 04 24             	mov    %eax,(%esp)
 847881a:	e8 27 04 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847881f:	c7 44 24 04 b2 01 00 	movl   $0x1b2,0x4(%esp)
 8478826:	00 
 8478827:	89 04 24             	mov    %eax,(%esp)
 847882a:	e8 27 04 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847882f:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 8478835:	8b 58 0a             	mov    0xa(%eax),%ebx
 8478838:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847883e:	89 04 24             	mov    %eax,(%esp)
 8478841:	e8 00 04 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478846:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847884a:	89 04 24             	mov    %eax,(%esp)
 847884d:	e8 04 04 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478852:	8b 85 f8 fe ff ff    	mov    -0x108(%ebp),%eax
 8478858:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847885c:	0f b7 d8             	movzwl %ax,%ebx
 847885f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478865:	89 04 24             	mov    %eax,(%esp)
 8478868:	e8 e1 03 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847886d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478871:	8b 95 f8 fe ff ff    	mov    -0x108(%ebp),%edx
 8478877:	89 54 24 04          	mov    %edx,0x4(%esp)
 847887b:	89 04 24             	mov    %eax,(%esp)
 847887e:	e8 cf 5d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478883:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478888:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847888e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478892:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478899:	00 
 847889a:	89 04 24             	mov    %eax,(%esp)
 847889d:	e8 3c 87 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84788a2:	e9 54 23 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84788a7:	8b 45 08             	mov    0x8(%ebp),%eax
 84788aa:	89 85 fc fe ff ff    	mov    %eax,-0x104(%ebp)
 84788b0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84788b6:	89 04 24             	mov    %eax,(%esp)
 84788b9:	e8 88 03 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84788be:	c7 44 24 04 b3 01 00 	movl   $0x1b3,0x4(%esp)
 84788c5:	00 
 84788c6:	89 04 24             	mov    %eax,(%esp)
 84788c9:	e8 88 03 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84788ce:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 84788d4:	8b 40 0f             	mov    0xf(%eax),%eax
 84788d7:	89 c3                	mov    %eax,%ebx
 84788d9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84788df:	89 04 24             	mov    %eax,(%esp)
 84788e2:	e8 5f 03 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84788e7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84788eb:	89 04 24             	mov    %eax,(%esp)
 84788ee:	e8 63 03 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84788f3:	8b 85 fc fe ff ff    	mov    -0x104(%ebp),%eax
 84788f9:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84788fd:	0f b7 d8             	movzwl %ax,%ebx
 8478900:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478906:	89 04 24             	mov    %eax,(%esp)
 8478909:	e8 40 03 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847890e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478912:	8b 95 fc fe ff ff    	mov    -0x104(%ebp),%edx
 8478918:	89 54 24 04          	mov    %edx,0x4(%esp)
 847891c:	89 04 24             	mov    %eax,(%esp)
 847891f:	e8 2e 5d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478924:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478929:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847892f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478933:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847893a:	00 
 847893b:	89 04 24             	mov    %eax,(%esp)
 847893e:	e8 9b 86 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478943:	e9 b3 22 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478948:	8b 45 08             	mov    0x8(%ebp),%eax
 847894b:	89 85 00 ff ff ff    	mov    %eax,-0x100(%ebp)
 8478951:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478957:	89 04 24             	mov    %eax,(%esp)
 847895a:	e8 e7 02 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847895f:	c7 44 24 04 b4 01 00 	movl   $0x1b4,0x4(%esp)
 8478966:	00 
 8478967:	89 04 24             	mov    %eax,(%esp)
 847896a:	e8 e7 02 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847896f:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 8478975:	8b 40 0f             	mov    0xf(%eax),%eax
 8478978:	89 c3                	mov    %eax,%ebx
 847897a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478980:	89 04 24             	mov    %eax,(%esp)
 8478983:	e8 be 02 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478988:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847898c:	89 04 24             	mov    %eax,(%esp)
 847898f:	e8 c2 02 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478994:	8b 85 00 ff ff ff    	mov    -0x100(%ebp),%eax
 847899a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847899e:	0f b7 d8             	movzwl %ax,%ebx
 84789a1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84789a7:	89 04 24             	mov    %eax,(%esp)
 84789aa:	e8 9f 02 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84789af:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84789b3:	8b 95 00 ff ff ff    	mov    -0x100(%ebp),%edx
 84789b9:	89 54 24 04          	mov    %edx,0x4(%esp)
 84789bd:	89 04 24             	mov    %eax,(%esp)
 84789c0:	e8 8d 5c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84789c5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84789ca:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84789d0:	89 54 24 08          	mov    %edx,0x8(%esp)
 84789d4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84789db:	00 
 84789dc:	89 04 24             	mov    %eax,(%esp)
 84789df:	e8 fa 85 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84789e4:	e9 12 22 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84789e9:	8b 45 08             	mov    0x8(%ebp),%eax
 84789ec:	89 85 04 ff ff ff    	mov    %eax,-0xfc(%ebp)
 84789f2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84789f8:	89 04 24             	mov    %eax,(%esp)
 84789fb:	e8 46 02 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478a00:	c7 44 24 04 92 01 00 	movl   $0x192,0x4(%esp)
 8478a07:	00 
 8478a08:	89 04 24             	mov    %eax,(%esp)
 8478a0b:	e8 46 02 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478a10:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478a16:	89 04 24             	mov    %eax,(%esp)
 8478a19:	e8 28 02 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478a1e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478a25:	ff 
 8478a26:	89 04 24             	mov    %eax,(%esp)
 8478a29:	e8 28 02 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478a2e:	8b 85 04 ff ff ff    	mov    -0xfc(%ebp),%eax
 8478a34:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478a38:	0f b7 d8             	movzwl %ax,%ebx
 8478a3b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478a41:	89 04 24             	mov    %eax,(%esp)
 8478a44:	e8 05 02 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478a49:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478a4d:	8b 95 04 ff ff ff    	mov    -0xfc(%ebp),%edx
 8478a53:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478a57:	89 04 24             	mov    %eax,(%esp)
 8478a5a:	e8 f3 5b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478a5f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478a64:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478a6a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478a6e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478a75:	00 
 8478a76:	89 04 24             	mov    %eax,(%esp)
 8478a79:	e8 60 85 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478a7e:	e9 78 21 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478a83:	8b 45 08             	mov    0x8(%ebp),%eax
 8478a86:	89 85 08 ff ff ff    	mov    %eax,-0xf8(%ebp)
 8478a8c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478a92:	89 04 24             	mov    %eax,(%esp)
 8478a95:	e8 ac 01 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478a9a:	c7 44 24 04 94 01 00 	movl   $0x194,0x4(%esp)
 8478aa1:	00 
 8478aa2:	89 04 24             	mov    %eax,(%esp)
 8478aa5:	e8 ac 01 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478aaa:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478ab0:	89 04 24             	mov    %eax,(%esp)
 8478ab3:	e8 8e 01 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478ab8:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478abf:	ff 
 8478ac0:	89 04 24             	mov    %eax,(%esp)
 8478ac3:	e8 8e 01 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478ac8:	8b 85 08 ff ff ff    	mov    -0xf8(%ebp),%eax
 8478ace:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478ad2:	0f b7 d8             	movzwl %ax,%ebx
 8478ad5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478adb:	89 04 24             	mov    %eax,(%esp)
 8478ade:	e8 6b 01 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478ae3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478ae7:	8b 95 08 ff ff ff    	mov    -0xf8(%ebp),%edx
 8478aed:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478af1:	89 04 24             	mov    %eax,(%esp)
 8478af4:	e8 59 5b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478af9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478afe:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478b04:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478b08:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478b0f:	00 
 8478b10:	89 04 24             	mov    %eax,(%esp)
 8478b13:	e8 c6 84 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478b18:	e9 de 20 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478b1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8478b20:	89 85 0c ff ff ff    	mov    %eax,-0xf4(%ebp)
 8478b26:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478b2c:	89 04 24             	mov    %eax,(%esp)
 8478b2f:	e8 12 01 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478b34:	c7 44 24 04 b5 01 00 	movl   $0x1b5,0x4(%esp)
 8478b3b:	00 
 8478b3c:	89 04 24             	mov    %eax,(%esp)
 8478b3f:	e8 12 01 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478b44:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478b4a:	89 04 24             	mov    %eax,(%esp)
 8478b4d:	e8 f4 00 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478b52:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478b59:	ff 
 8478b5a:	89 04 24             	mov    %eax,(%esp)
 8478b5d:	e8 f4 00 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478b62:	8b 85 0c ff ff ff    	mov    -0xf4(%ebp),%eax
 8478b68:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478b6c:	0f b7 d8             	movzwl %ax,%ebx
 8478b6f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478b75:	89 04 24             	mov    %eax,(%esp)
 8478b78:	e8 d1 00 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478b7d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478b81:	8b 95 0c ff ff ff    	mov    -0xf4(%ebp),%edx
 8478b87:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478b8b:	89 04 24             	mov    %eax,(%esp)
 8478b8e:	e8 bf 5a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478b93:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478b98:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478b9e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478ba2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478ba9:	00 
 8478baa:	89 04 24             	mov    %eax,(%esp)
 8478bad:	e8 2c 84 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478bb2:	e9 44 20 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478bb7:	8b 45 08             	mov    0x8(%ebp),%eax
 8478bba:	89 85 10 ff ff ff    	mov    %eax,-0xf0(%ebp)
 8478bc0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478bc6:	89 04 24             	mov    %eax,(%esp)
 8478bc9:	e8 78 00 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478bce:	c7 44 24 04 b9 01 00 	movl   $0x1b9,0x4(%esp)
 8478bd5:	00 
 8478bd6:	89 04 24             	mov    %eax,(%esp)
 8478bd9:	e8 78 00 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478bde:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478be4:	89 04 24             	mov    %eax,(%esp)
 8478be7:	e8 5a 00 c5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478bec:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478bf3:	ff 
 8478bf4:	89 04 24             	mov    %eax,(%esp)
 8478bf7:	e8 5a 00 c5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478bfc:	8b 85 10 ff ff ff    	mov    -0xf0(%ebp),%eax
 8478c02:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478c06:	0f b7 d8             	movzwl %ax,%ebx
 8478c09:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478c0f:	89 04 24             	mov    %eax,(%esp)
 8478c12:	e8 37 00 c5 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478c17:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478c1b:	8b 95 10 ff ff ff    	mov    -0xf0(%ebp),%edx
 8478c21:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478c25:	89 04 24             	mov    %eax,(%esp)
 8478c28:	e8 25 5a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478c2d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478c32:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478c38:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478c3c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478c43:	00 
 8478c44:	89 04 24             	mov    %eax,(%esp)
 8478c47:	e8 92 83 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478c4c:	e9 aa 1f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478c51:	8b 45 08             	mov    0x8(%ebp),%eax
 8478c54:	89 85 14 ff ff ff    	mov    %eax,-0xec(%ebp)
 8478c5a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478c60:	89 04 24             	mov    %eax,(%esp)
 8478c63:	e8 de ff c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478c68:	c7 44 24 04 ba 01 00 	movl   $0x1ba,0x4(%esp)
 8478c6f:	00 
 8478c70:	89 04 24             	mov    %eax,(%esp)
 8478c73:	e8 de ff c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478c78:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478c7e:	89 04 24             	mov    %eax,(%esp)
 8478c81:	e8 c0 ff c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478c86:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478c8d:	ff 
 8478c8e:	89 04 24             	mov    %eax,(%esp)
 8478c91:	e8 c0 ff c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478c96:	8b 85 14 ff ff ff    	mov    -0xec(%ebp),%eax
 8478c9c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478ca0:	0f b7 d8             	movzwl %ax,%ebx
 8478ca3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478ca9:	89 04 24             	mov    %eax,(%esp)
 8478cac:	e8 9d ff c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478cb1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478cb5:	8b 95 14 ff ff ff    	mov    -0xec(%ebp),%edx
 8478cbb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478cbf:	89 04 24             	mov    %eax,(%esp)
 8478cc2:	e8 8b 59 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478cc7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478ccc:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478cd2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478cd6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478cdd:	00 
 8478cde:	89 04 24             	mov    %eax,(%esp)
 8478ce1:	e8 f8 82 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478ce6:	e9 10 1f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478ceb:	8b 45 08             	mov    0x8(%ebp),%eax
 8478cee:	89 85 18 ff ff ff    	mov    %eax,-0xe8(%ebp)
 8478cf4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478cfa:	89 04 24             	mov    %eax,(%esp)
 8478cfd:	e8 44 ff c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478d02:	c7 44 24 04 bb 01 00 	movl   $0x1bb,0x4(%esp)
 8478d09:	00 
 8478d0a:	89 04 24             	mov    %eax,(%esp)
 8478d0d:	e8 44 ff c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478d12:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478d18:	89 04 24             	mov    %eax,(%esp)
 8478d1b:	e8 26 ff c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478d20:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478d27:	ff 
 8478d28:	89 04 24             	mov    %eax,(%esp)
 8478d2b:	e8 26 ff c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478d30:	8b 85 18 ff ff ff    	mov    -0xe8(%ebp),%eax
 8478d36:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478d3a:	0f b7 d8             	movzwl %ax,%ebx
 8478d3d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478d43:	89 04 24             	mov    %eax,(%esp)
 8478d46:	e8 03 ff c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478d4b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478d4f:	8b 95 18 ff ff ff    	mov    -0xe8(%ebp),%edx
 8478d55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478d59:	89 04 24             	mov    %eax,(%esp)
 8478d5c:	e8 f1 58 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478d61:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478d66:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478d6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478d70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478d77:	00 
 8478d78:	89 04 24             	mov    %eax,(%esp)
 8478d7b:	e8 5e 82 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478d80:	e9 76 1e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478d85:	8b 45 08             	mov    0x8(%ebp),%eax
 8478d88:	89 85 1c ff ff ff    	mov    %eax,-0xe4(%ebp)
 8478d8e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478d94:	89 04 24             	mov    %eax,(%esp)
 8478d97:	e8 aa fe c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478d9c:	c7 44 24 04 bc 01 00 	movl   $0x1bc,0x4(%esp)
 8478da3:	00 
 8478da4:	89 04 24             	mov    %eax,(%esp)
 8478da7:	e8 aa fe c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478dac:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478db2:	89 04 24             	mov    %eax,(%esp)
 8478db5:	e8 8c fe c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478dba:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478dc1:	ff 
 8478dc2:	89 04 24             	mov    %eax,(%esp)
 8478dc5:	e8 8c fe c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478dca:	8b 85 1c ff ff ff    	mov    -0xe4(%ebp),%eax
 8478dd0:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478dd4:	0f b7 d8             	movzwl %ax,%ebx
 8478dd7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478ddd:	89 04 24             	mov    %eax,(%esp)
 8478de0:	e8 69 fe c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478de5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478de9:	8b 95 1c ff ff ff    	mov    -0xe4(%ebp),%edx
 8478def:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478df3:	89 04 24             	mov    %eax,(%esp)
 8478df6:	e8 57 58 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478dfb:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478e00:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478e06:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478e0a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478e11:	00 
 8478e12:	89 04 24             	mov    %eax,(%esp)
 8478e15:	e8 c4 81 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478e1a:	e9 dc 1d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478e1f:	8b 45 08             	mov    0x8(%ebp),%eax
 8478e22:	89 85 20 ff ff ff    	mov    %eax,-0xe0(%ebp)
 8478e28:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478e2e:	89 04 24             	mov    %eax,(%esp)
 8478e31:	e8 10 fe c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478e36:	c7 44 24 04 bd 01 00 	movl   $0x1bd,0x4(%esp)
 8478e3d:	00 
 8478e3e:	89 04 24             	mov    %eax,(%esp)
 8478e41:	e8 10 fe c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478e46:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8478e4c:	8b 58 0a             	mov    0xa(%eax),%ebx
 8478e4f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478e55:	89 04 24             	mov    %eax,(%esp)
 8478e58:	e8 e9 fd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478e5d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8478e61:	89 04 24             	mov    %eax,(%esp)
 8478e64:	e8 ed fd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478e69:	8b 85 20 ff ff ff    	mov    -0xe0(%ebp),%eax
 8478e6f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478e73:	0f b7 d8             	movzwl %ax,%ebx
 8478e76:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478e7c:	89 04 24             	mov    %eax,(%esp)
 8478e7f:	e8 ca fd c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478e84:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478e88:	8b 95 20 ff ff ff    	mov    -0xe0(%ebp),%edx
 8478e8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478e92:	89 04 24             	mov    %eax,(%esp)
 8478e95:	e8 b8 57 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478e9a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478e9f:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478ea5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478ea9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478eb0:	00 
 8478eb1:	89 04 24             	mov    %eax,(%esp)
 8478eb4:	e8 25 81 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478eb9:	e9 3d 1d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478ebe:	8b 45 08             	mov    0x8(%ebp),%eax
 8478ec1:	89 85 24 ff ff ff    	mov    %eax,-0xdc(%ebp)
 8478ec7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478ecd:	89 04 24             	mov    %eax,(%esp)
 8478ed0:	e8 71 fd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478ed5:	c7 44 24 04 be 01 00 	movl   $0x1be,0x4(%esp)
 8478edc:	00 
 8478edd:	89 04 24             	mov    %eax,(%esp)
 8478ee0:	e8 71 fd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478ee5:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8478eeb:	8b 58 0a             	mov    0xa(%eax),%ebx
 8478eee:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478ef4:	89 04 24             	mov    %eax,(%esp)
 8478ef7:	e8 4a fd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478efc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8478f00:	89 04 24             	mov    %eax,(%esp)
 8478f03:	e8 4e fd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478f08:	8b 85 24 ff ff ff    	mov    -0xdc(%ebp),%eax
 8478f0e:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478f12:	0f b7 d8             	movzwl %ax,%ebx
 8478f15:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478f1b:	89 04 24             	mov    %eax,(%esp)
 8478f1e:	e8 2b fd c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478f23:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478f27:	8b 95 24 ff ff ff    	mov    -0xdc(%ebp),%edx
 8478f2d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478f31:	89 04 24             	mov    %eax,(%esp)
 8478f34:	e8 19 57 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478f39:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478f3e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478f44:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478f48:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478f4f:	00 
 8478f50:	89 04 24             	mov    %eax,(%esp)
 8478f53:	e8 86 80 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478f58:	e9 9e 1c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478f5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8478f60:	89 85 28 ff ff ff    	mov    %eax,-0xd8(%ebp)
 8478f66:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478f6c:	89 04 24             	mov    %eax,(%esp)
 8478f6f:	e8 d2 fc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478f74:	c7 44 24 04 bf 01 00 	movl   $0x1bf,0x4(%esp)
 8478f7b:	00 
 8478f7c:	89 04 24             	mov    %eax,(%esp)
 8478f7f:	e8 d2 fc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478f84:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478f8a:	89 04 24             	mov    %eax,(%esp)
 8478f8d:	e8 b4 fc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8478f92:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8478f99:	ff 
 8478f9a:	89 04 24             	mov    %eax,(%esp)
 8478f9d:	e8 b4 fc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8478fa2:	8b 85 28 ff ff ff    	mov    -0xd8(%ebp),%eax
 8478fa8:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8478fac:	0f b7 d8             	movzwl %ax,%ebx
 8478faf:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8478fb5:	89 04 24             	mov    %eax,(%esp)
 8478fb8:	e8 91 fc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8478fbd:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8478fc1:	8b 95 28 ff ff ff    	mov    -0xd8(%ebp),%edx
 8478fc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8478fcb:	89 04 24             	mov    %eax,(%esp)
 8478fce:	e8 7f 56 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8478fd3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8478fd8:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8478fde:	89 54 24 08          	mov    %edx,0x8(%esp)
 8478fe2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8478fe9:	00 
 8478fea:	89 04 24             	mov    %eax,(%esp)
 8478fed:	e8 ec 7f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8478ff2:	e9 04 1c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8478ff7:	8b 45 08             	mov    0x8(%ebp),%eax
 8478ffa:	89 85 2c ff ff ff    	mov    %eax,-0xd4(%ebp)
 8479000:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479006:	89 04 24             	mov    %eax,(%esp)
 8479009:	e8 38 fc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847900e:	c7 44 24 04 c0 01 00 	movl   $0x1c0,0x4(%esp)
 8479015:	00 
 8479016:	89 04 24             	mov    %eax,(%esp)
 8479019:	e8 38 fc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847901e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479024:	89 04 24             	mov    %eax,(%esp)
 8479027:	e8 1a fc c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847902c:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479033:	ff 
 8479034:	89 04 24             	mov    %eax,(%esp)
 8479037:	e8 1a fc c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847903c:	8b 85 2c ff ff ff    	mov    -0xd4(%ebp),%eax
 8479042:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479046:	0f b7 d8             	movzwl %ax,%ebx
 8479049:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847904f:	89 04 24             	mov    %eax,(%esp)
 8479052:	e8 f7 fb c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479057:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847905b:	8b 95 2c ff ff ff    	mov    -0xd4(%ebp),%edx
 8479061:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479065:	89 04 24             	mov    %eax,(%esp)
 8479068:	e8 e5 55 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847906d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479072:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479078:	89 54 24 08          	mov    %edx,0x8(%esp)
 847907c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479083:	00 
 8479084:	89 04 24             	mov    %eax,(%esp)
 8479087:	e8 52 7f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847908c:	e9 6a 1b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479091:	8b 45 08             	mov    0x8(%ebp),%eax
 8479094:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 847909a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84790a0:	89 04 24             	mov    %eax,(%esp)
 84790a3:	e8 9e fb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84790a8:	c7 44 24 04 cd 01 00 	movl   $0x1cd,0x4(%esp)
 84790af:	00 
 84790b0:	89 04 24             	mov    %eax,(%esp)
 84790b3:	e8 9e fb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84790b8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84790be:	89 04 24             	mov    %eax,(%esp)
 84790c1:	e8 80 fb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84790c6:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84790cd:	ff 
 84790ce:	89 04 24             	mov    %eax,(%esp)
 84790d1:	e8 80 fb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84790d6:	8b 85 30 ff ff ff    	mov    -0xd0(%ebp),%eax
 84790dc:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84790e0:	0f b7 d8             	movzwl %ax,%ebx
 84790e3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84790e9:	89 04 24             	mov    %eax,(%esp)
 84790ec:	e8 5d fb c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84790f1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84790f5:	8b 95 30 ff ff ff    	mov    -0xd0(%ebp),%edx
 84790fb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84790ff:	89 04 24             	mov    %eax,(%esp)
 8479102:	e8 4b 55 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479107:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847910c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479112:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479116:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847911d:	00 
 847911e:	89 04 24             	mov    %eax,(%esp)
 8479121:	e8 b8 7e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479126:	e9 d0 1a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847912b:	8b 45 08             	mov    0x8(%ebp),%eax
 847912e:	89 85 34 ff ff ff    	mov    %eax,-0xcc(%ebp)
 8479134:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847913a:	89 04 24             	mov    %eax,(%esp)
 847913d:	e8 04 fb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479142:	c7 44 24 04 cf 01 00 	movl   $0x1cf,0x4(%esp)
 8479149:	00 
 847914a:	89 04 24             	mov    %eax,(%esp)
 847914d:	e8 04 fb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479152:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479158:	89 04 24             	mov    %eax,(%esp)
 847915b:	e8 e6 fa c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479160:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479167:	ff 
 8479168:	89 04 24             	mov    %eax,(%esp)
 847916b:	e8 e6 fa c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479170:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 8479176:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847917a:	0f b7 d8             	movzwl %ax,%ebx
 847917d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479183:	89 04 24             	mov    %eax,(%esp)
 8479186:	e8 c3 fa c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847918b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847918f:	8b 95 34 ff ff ff    	mov    -0xcc(%ebp),%edx
 8479195:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479199:	89 04 24             	mov    %eax,(%esp)
 847919c:	e8 b1 54 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84791a1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84791a6:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84791ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 84791b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84791b7:	00 
 84791b8:	89 04 24             	mov    %eax,(%esp)
 84791bb:	e8 1e 7e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84791c0:	e9 36 1a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84791c5:	8b 45 08             	mov    0x8(%ebp),%eax
 84791c8:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 84791ce:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84791d4:	89 04 24             	mov    %eax,(%esp)
 84791d7:	e8 6a fa c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84791dc:	c7 44 24 04 d1 01 00 	movl   $0x1d1,0x4(%esp)
 84791e3:	00 
 84791e4:	89 04 24             	mov    %eax,(%esp)
 84791e7:	e8 6a fa c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84791ec:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84791f2:	89 04 24             	mov    %eax,(%esp)
 84791f5:	e8 4c fa c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84791fa:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479201:	ff 
 8479202:	89 04 24             	mov    %eax,(%esp)
 8479205:	e8 4c fa c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847920a:	8b 85 38 ff ff ff    	mov    -0xc8(%ebp),%eax
 8479210:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479214:	0f b7 d8             	movzwl %ax,%ebx
 8479217:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847921d:	89 04 24             	mov    %eax,(%esp)
 8479220:	e8 29 fa c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479225:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479229:	8b 95 38 ff ff ff    	mov    -0xc8(%ebp),%edx
 847922f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479233:	89 04 24             	mov    %eax,(%esp)
 8479236:	e8 17 54 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847923b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479240:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479246:	89 54 24 08          	mov    %edx,0x8(%esp)
 847924a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479251:	00 
 8479252:	89 04 24             	mov    %eax,(%esp)
 8479255:	e8 84 7d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847925a:	e9 9c 19 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847925f:	8b 45 08             	mov    0x8(%ebp),%eax
 8479262:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 8479268:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847926e:	89 04 24             	mov    %eax,(%esp)
 8479271:	e8 d0 f9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479276:	c7 44 24 04 ca 00 00 	movl   $0xca,0x4(%esp)
 847927d:	00 
 847927e:	89 04 24             	mov    %eax,(%esp)
 8479281:	e8 d0 f9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479286:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 847928c:	8b 58 0a             	mov    0xa(%eax),%ebx
 847928f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479295:	89 04 24             	mov    %eax,(%esp)
 8479298:	e8 a9 f9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847929d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84792a1:	89 04 24             	mov    %eax,(%esp)
 84792a4:	e8 ad f9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84792a9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84792af:	89 04 24             	mov    %eax,(%esp)
 84792b2:	e8 97 f9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84792b7:	c7 44 24 08 5f 01 00 	movl   $0x15f,0x8(%esp)
 84792be:	00 
 84792bf:	8b 95 3c ff ff ff    	mov    -0xc4(%ebp),%edx
 84792c5:	89 54 24 04          	mov    %edx,0x4(%esp)
 84792c9:	89 04 24             	mov    %eax,(%esp)
 84792cc:	e8 81 53 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84792d1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84792d6:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84792dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 84792e0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84792e7:	00 
 84792e8:	89 04 24             	mov    %eax,(%esp)
 84792eb:	e8 ee 7c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84792f0:	e9 06 19 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84792f5:	8b 45 08             	mov    0x8(%ebp),%eax
 84792f8:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 84792fe:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479304:	89 04 24             	mov    %eax,(%esp)
 8479307:	e8 3a f9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847930c:	c7 44 24 04 d6 01 00 	movl   $0x1d6,0x4(%esp)
 8479313:	00 
 8479314:	89 04 24             	mov    %eax,(%esp)
 8479317:	e8 3a f9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847931c:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8479322:	8b 58 0e             	mov    0xe(%eax),%ebx
 8479325:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847932b:	89 04 24             	mov    %eax,(%esp)
 847932e:	e8 13 f9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479333:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479337:	89 04 24             	mov    %eax,(%esp)
 847933a:	e8 17 f9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847933f:	8b 85 40 ff ff ff    	mov    -0xc0(%ebp),%eax
 8479345:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479349:	0f b7 d8             	movzwl %ax,%ebx
 847934c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479352:	89 04 24             	mov    %eax,(%esp)
 8479355:	e8 f4 f8 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847935a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847935e:	8b 95 40 ff ff ff    	mov    -0xc0(%ebp),%edx
 8479364:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479368:	89 04 24             	mov    %eax,(%esp)
 847936b:	e8 e2 52 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479370:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479375:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847937b:	89 54 24 08          	mov    %edx,0x8(%esp)
 847937f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479386:	00 
 8479387:	89 04 24             	mov    %eax,(%esp)
 847938a:	e8 4f 7c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847938f:	e9 67 18 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479394:	8b 45 08             	mov    0x8(%ebp),%eax
 8479397:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 847939d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84793a3:	89 04 24             	mov    %eax,(%esp)
 84793a6:	e8 9b f8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84793ab:	c7 44 24 04 d7 01 00 	movl   $0x1d7,0x4(%esp)
 84793b2:	00 
 84793b3:	89 04 24             	mov    %eax,(%esp)
 84793b6:	e8 9b f8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84793bb:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 84793c1:	8b 58 0e             	mov    0xe(%eax),%ebx
 84793c4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84793ca:	89 04 24             	mov    %eax,(%esp)
 84793cd:	e8 74 f8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84793d2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84793d6:	89 04 24             	mov    %eax,(%esp)
 84793d9:	e8 78 f8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84793de:	8b 85 44 ff ff ff    	mov    -0xbc(%ebp),%eax
 84793e4:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84793e8:	0f b7 d8             	movzwl %ax,%ebx
 84793eb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84793f1:	89 04 24             	mov    %eax,(%esp)
 84793f4:	e8 55 f8 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84793f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84793fd:	8b 95 44 ff ff ff    	mov    -0xbc(%ebp),%edx
 8479403:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479407:	89 04 24             	mov    %eax,(%esp)
 847940a:	e8 43 52 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847940f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479414:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847941a:	89 54 24 08          	mov    %edx,0x8(%esp)
 847941e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479425:	00 
 8479426:	89 04 24             	mov    %eax,(%esp)
 8479429:	e8 b0 7b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847942e:	e9 c8 17 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479433:	8b 45 08             	mov    0x8(%ebp),%eax
 8479436:	89 85 48 ff ff ff    	mov    %eax,-0xb8(%ebp)
 847943c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479442:	89 04 24             	mov    %eax,(%esp)
 8479445:	e8 fc f7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847944a:	c7 44 24 04 d8 01 00 	movl   $0x1d8,0x4(%esp)
 8479451:	00 
 8479452:	89 04 24             	mov    %eax,(%esp)
 8479455:	e8 fc f7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847945a:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8479460:	8b 58 0e             	mov    0xe(%eax),%ebx
 8479463:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479469:	89 04 24             	mov    %eax,(%esp)
 847946c:	e8 d5 f7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479471:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479475:	89 04 24             	mov    %eax,(%esp)
 8479478:	e8 d9 f7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847947d:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 8479483:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479487:	0f b7 d8             	movzwl %ax,%ebx
 847948a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479490:	89 04 24             	mov    %eax,(%esp)
 8479493:	e8 b6 f7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479498:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847949c:	8b 95 48 ff ff ff    	mov    -0xb8(%ebp),%edx
 84794a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 84794a6:	89 04 24             	mov    %eax,(%esp)
 84794a9:	e8 a4 51 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84794ae:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84794b3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84794b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 84794bd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84794c4:	00 
 84794c5:	89 04 24             	mov    %eax,(%esp)
 84794c8:	e8 11 7b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84794cd:	e9 29 17 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84794d2:	8b 45 08             	mov    0x8(%ebp),%eax
 84794d5:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 84794db:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84794e1:	89 04 24             	mov    %eax,(%esp)
 84794e4:	e8 5d f7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84794e9:	c7 44 24 04 d9 01 00 	movl   $0x1d9,0x4(%esp)
 84794f0:	00 
 84794f1:	89 04 24             	mov    %eax,(%esp)
 84794f4:	e8 5d f7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84794f9:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 84794ff:	8b 58 0e             	mov    0xe(%eax),%ebx
 8479502:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479508:	89 04 24             	mov    %eax,(%esp)
 847950b:	e8 36 f7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479510:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479514:	89 04 24             	mov    %eax,(%esp)
 8479517:	e8 3a f7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847951c:	8b 85 4c ff ff ff    	mov    -0xb4(%ebp),%eax
 8479522:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479526:	0f b7 d8             	movzwl %ax,%ebx
 8479529:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847952f:	89 04 24             	mov    %eax,(%esp)
 8479532:	e8 17 f7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479537:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847953b:	8b 95 4c ff ff ff    	mov    -0xb4(%ebp),%edx
 8479541:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479545:	89 04 24             	mov    %eax,(%esp)
 8479548:	e8 05 51 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847954d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479552:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479558:	89 54 24 08          	mov    %edx,0x8(%esp)
 847955c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479563:	00 
 8479564:	89 04 24             	mov    %eax,(%esp)
 8479567:	e8 72 7a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847956c:	e9 8a 16 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479571:	8b 45 08             	mov    0x8(%ebp),%eax
 8479574:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 847957a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479580:	89 04 24             	mov    %eax,(%esp)
 8479583:	e8 be f6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479588:	c7 44 24 04 da 01 00 	movl   $0x1da,0x4(%esp)
 847958f:	00 
 8479590:	89 04 24             	mov    %eax,(%esp)
 8479593:	e8 be f6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479598:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 847959e:	8b 58 0e             	mov    0xe(%eax),%ebx
 84795a1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84795a7:	89 04 24             	mov    %eax,(%esp)
 84795aa:	e8 97 f6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84795af:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84795b3:	89 04 24             	mov    %eax,(%esp)
 84795b6:	e8 9b f6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84795bb:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 84795c1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84795c5:	0f b7 d8             	movzwl %ax,%ebx
 84795c8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84795ce:	89 04 24             	mov    %eax,(%esp)
 84795d1:	e8 78 f6 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84795d6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84795da:	8b 95 50 ff ff ff    	mov    -0xb0(%ebp),%edx
 84795e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 84795e4:	89 04 24             	mov    %eax,(%esp)
 84795e7:	e8 66 50 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84795ec:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84795f1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84795f7:	89 54 24 08          	mov    %edx,0x8(%esp)
 84795fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479602:	00 
 8479603:	89 04 24             	mov    %eax,(%esp)
 8479606:	e8 d3 79 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847960b:	e9 eb 15 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479610:	8b 45 08             	mov    0x8(%ebp),%eax
 8479613:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 8479619:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847961f:	89 04 24             	mov    %eax,(%esp)
 8479622:	e8 1f f6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479627:	c7 44 24 04 db 01 00 	movl   $0x1db,0x4(%esp)
 847962e:	00 
 847962f:	89 04 24             	mov    %eax,(%esp)
 8479632:	e8 1f f6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479637:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847963d:	89 04 24             	mov    %eax,(%esp)
 8479640:	e8 01 f6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479645:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847964c:	ff 
 847964d:	89 04 24             	mov    %eax,(%esp)
 8479650:	e8 01 f6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479655:	8b 85 54 ff ff ff    	mov    -0xac(%ebp),%eax
 847965b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847965f:	0f b7 d8             	movzwl %ax,%ebx
 8479662:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479668:	89 04 24             	mov    %eax,(%esp)
 847966b:	e8 de f5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479670:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479674:	8b 95 54 ff ff ff    	mov    -0xac(%ebp),%edx
 847967a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847967e:	89 04 24             	mov    %eax,(%esp)
 8479681:	e8 cc 4f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479686:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847968b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479691:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479695:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 847969c:	00 
 847969d:	89 04 24             	mov    %eax,(%esp)
 84796a0:	e8 39 79 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84796a5:	e9 51 15 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84796aa:	8b 45 08             	mov    0x8(%ebp),%eax
 84796ad:	89 85 58 ff ff ff    	mov    %eax,-0xa8(%ebp)
 84796b3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84796b9:	89 04 24             	mov    %eax,(%esp)
 84796bc:	e8 85 f5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84796c1:	c7 44 24 04 dc 01 00 	movl   $0x1dc,0x4(%esp)
 84796c8:	00 
 84796c9:	89 04 24             	mov    %eax,(%esp)
 84796cc:	e8 85 f5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84796d1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84796d7:	89 04 24             	mov    %eax,(%esp)
 84796da:	e8 67 f5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84796df:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84796e6:	ff 
 84796e7:	89 04 24             	mov    %eax,(%esp)
 84796ea:	e8 67 f5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84796ef:	8b 85 58 ff ff ff    	mov    -0xa8(%ebp),%eax
 84796f5:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84796f9:	0f b7 d8             	movzwl %ax,%ebx
 84796fc:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479702:	89 04 24             	mov    %eax,(%esp)
 8479705:	e8 44 f5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847970a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847970e:	8b 95 58 ff ff ff    	mov    -0xa8(%ebp),%edx
 8479714:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479718:	89 04 24             	mov    %eax,(%esp)
 847971b:	e8 32 4f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479720:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479725:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847972b:	89 54 24 08          	mov    %edx,0x8(%esp)
 847972f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8479736:	00 
 8479737:	89 04 24             	mov    %eax,(%esp)
 847973a:	e8 9f 78 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847973f:	e9 b7 14 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479744:	8b 45 08             	mov    0x8(%ebp),%eax
 8479747:	89 85 5c ff ff ff    	mov    %eax,-0xa4(%ebp)
 847974d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479753:	89 04 24             	mov    %eax,(%esp)
 8479756:	e8 eb f4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847975b:	c7 44 24 04 dd 01 00 	movl   $0x1dd,0x4(%esp)
 8479762:	00 
 8479763:	89 04 24             	mov    %eax,(%esp)
 8479766:	e8 eb f4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847976b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479771:	89 04 24             	mov    %eax,(%esp)
 8479774:	e8 cd f4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479779:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479780:	ff 
 8479781:	89 04 24             	mov    %eax,(%esp)
 8479784:	e8 cd f4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479789:	8b 85 5c ff ff ff    	mov    -0xa4(%ebp),%eax
 847978f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479793:	0f b7 d8             	movzwl %ax,%ebx
 8479796:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847979c:	89 04 24             	mov    %eax,(%esp)
 847979f:	e8 aa f4 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84797a4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84797a8:	8b 95 5c ff ff ff    	mov    -0xa4(%ebp),%edx
 84797ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 84797b2:	89 04 24             	mov    %eax,(%esp)
 84797b5:	e8 98 4e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84797ba:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84797bf:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84797c5:	89 54 24 08          	mov    %edx,0x8(%esp)
 84797c9:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84797d0:	00 
 84797d1:	89 04 24             	mov    %eax,(%esp)
 84797d4:	e8 05 78 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84797d9:	e9 1d 14 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84797de:	8b 45 08             	mov    0x8(%ebp),%eax
 84797e1:	89 85 60 ff ff ff    	mov    %eax,-0xa0(%ebp)
 84797e7:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 84797ee:	ff 
 84797ef:	c7 44 24 04 2a 00 00 	movl   $0x2a,0x4(%esp)
 84797f6:	00 
 84797f7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84797fd:	89 04 24             	mov    %eax,(%esp)
 8479800:	e8 b1 df d1 ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8479805:	8b 85 60 ff ff ff    	mov    -0xa0(%ebp),%eax
 847980b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847980f:	0f b7 d8             	movzwl %ax,%ebx
 8479812:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479818:	89 04 24             	mov    %eax,(%esp)
 847981b:	e8 2e f4 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479820:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479824:	8b 95 60 ff ff ff    	mov    -0xa0(%ebp),%edx
 847982a:	89 54 24 04          	mov    %edx,0x4(%esp)
 847982e:	89 04 24             	mov    %eax,(%esp)
 8479831:	e8 1c 4e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479836:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847983b:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479841:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479845:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847984c:	00 
 847984d:	89 04 24             	mov    %eax,(%esp)
 8479850:	e8 89 77 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479855:	e9 a1 13 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847985a:	8b 45 08             	mov    0x8(%ebp),%eax
 847985d:	89 85 64 ff ff ff    	mov    %eax,-0x9c(%ebp)
 8479863:	c7 44 24 08 ff ff ff 	movl   $0xffffffff,0x8(%esp)
 847986a:	ff 
 847986b:	c7 44 24 04 2b 00 00 	movl   $0x2b,0x4(%esp)
 8479872:	00 
 8479873:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479879:	89 04 24             	mov    %eax,(%esp)
 847987c:	e8 35 df d1 ff       	call   81977b6 <_ZN4ARAD10DISPATCHER24make_internal_stream_jpnER12CStreamGuardNS_23ENUM_INTERNALPACKET_JPNEi>
 8479881:	8b 85 64 ff ff ff    	mov    -0x9c(%ebp),%eax
 8479887:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847988b:	0f b7 d8             	movzwl %ax,%ebx
 847988e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479894:	89 04 24             	mov    %eax,(%esp)
 8479897:	e8 b2 f3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847989c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84798a0:	8b 95 64 ff ff ff    	mov    -0x9c(%ebp),%edx
 84798a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84798aa:	89 04 24             	mov    %eax,(%esp)
 84798ad:	e8 a0 4d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84798b2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84798b7:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84798bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 84798c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84798c8:	00 
 84798c9:	89 04 24             	mov    %eax,(%esp)
 84798cc:	e8 0d 77 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84798d1:	e9 25 13 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 84798d6:	8b 45 08             	mov    0x8(%ebp),%eax
 84798d9:	89 85 68 ff ff ff    	mov    %eax,-0x98(%ebp)
 84798df:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84798e5:	89 04 24             	mov    %eax,(%esp)
 84798e8:	e8 59 f3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84798ed:	c7 44 24 04 14 02 00 	movl   $0x214,0x4(%esp)
 84798f4:	00 
 84798f5:	89 04 24             	mov    %eax,(%esp)
 84798f8:	e8 59 f3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84798fd:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8479903:	8b 58 0f             	mov    0xf(%eax),%ebx
 8479906:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847990c:	89 04 24             	mov    %eax,(%esp)
 847990f:	e8 32 f3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479914:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479918:	89 04 24             	mov    %eax,(%esp)
 847991b:	e8 36 f3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479920:	8b 85 68 ff ff ff    	mov    -0x98(%ebp),%eax
 8479926:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847992a:	0f b7 d8             	movzwl %ax,%ebx
 847992d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479933:	89 04 24             	mov    %eax,(%esp)
 8479936:	e8 13 f3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847993b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847993f:	8b 95 68 ff ff ff    	mov    -0x98(%ebp),%edx
 8479945:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479949:	89 04 24             	mov    %eax,(%esp)
 847994c:	e8 01 4d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479951:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479956:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847995c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479960:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479967:	00 
 8479968:	89 04 24             	mov    %eax,(%esp)
 847996b:	e8 6e 76 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479970:	e9 86 12 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479975:	8b 45 08             	mov    0x8(%ebp),%eax
 8479978:	89 85 6c ff ff ff    	mov    %eax,-0x94(%ebp)
 847997e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479984:	89 04 24             	mov    %eax,(%esp)
 8479987:	e8 ba f2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847998c:	c7 44 24 04 15 02 00 	movl   $0x215,0x4(%esp)
 8479993:	00 
 8479994:	89 04 24             	mov    %eax,(%esp)
 8479997:	e8 ba f2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847999c:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84799a2:	8b 58 12             	mov    0x12(%eax),%ebx
 84799a5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84799ab:	89 04 24             	mov    %eax,(%esp)
 84799ae:	e8 93 f2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 84799b3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84799b7:	89 04 24             	mov    %eax,(%esp)
 84799ba:	e8 97 f2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 84799bf:	8b 85 6c ff ff ff    	mov    -0x94(%ebp),%eax
 84799c5:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 84799c9:	0f b7 d8             	movzwl %ax,%ebx
 84799cc:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 84799d2:	89 04 24             	mov    %eax,(%esp)
 84799d5:	e8 74 f2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 84799da:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84799de:	8b 95 6c ff ff ff    	mov    -0x94(%ebp),%edx
 84799e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 84799e8:	89 04 24             	mov    %eax,(%esp)
 84799eb:	e8 62 4c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 84799f0:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84799f5:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 84799fb:	89 54 24 08          	mov    %edx,0x8(%esp)
 84799ff:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479a06:	00 
 8479a07:	89 04 24             	mov    %eax,(%esp)
 8479a0a:	e8 cf 75 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479a0f:	e9 e7 11 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479a14:	8b 45 08             	mov    0x8(%ebp),%eax
 8479a17:	89 85 70 ff ff ff    	mov    %eax,-0x90(%ebp)
 8479a1d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479a23:	89 04 24             	mov    %eax,(%esp)
 8479a26:	e8 1b f2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479a2b:	c7 44 24 04 f7 01 00 	movl   $0x1f7,0x4(%esp)
 8479a32:	00 
 8479a33:	89 04 24             	mov    %eax,(%esp)
 8479a36:	e8 1b f2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479a3b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479a41:	89 04 24             	mov    %eax,(%esp)
 8479a44:	e8 fd f1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479a49:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479a50:	ff 
 8479a51:	89 04 24             	mov    %eax,(%esp)
 8479a54:	e8 fd f1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479a59:	8b 85 70 ff ff ff    	mov    -0x90(%ebp),%eax
 8479a5f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479a63:	0f b7 d8             	movzwl %ax,%ebx
 8479a66:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479a6c:	89 04 24             	mov    %eax,(%esp)
 8479a6f:	e8 da f1 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479a74:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479a78:	8b 95 70 ff ff ff    	mov    -0x90(%ebp),%edx
 8479a7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479a82:	89 04 24             	mov    %eax,(%esp)
 8479a85:	e8 c8 4b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479a8a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479a8f:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479a95:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479a99:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479aa0:	00 
 8479aa1:	89 04 24             	mov    %eax,(%esp)
 8479aa4:	e8 35 75 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479aa9:	e9 4d 11 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479aae:	8b 45 08             	mov    0x8(%ebp),%eax
 8479ab1:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 8479ab7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479abd:	89 04 24             	mov    %eax,(%esp)
 8479ac0:	e8 81 f1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479ac5:	c7 44 24 04 f8 01 00 	movl   $0x1f8,0x4(%esp)
 8479acc:	00 
 8479acd:	89 04 24             	mov    %eax,(%esp)
 8479ad0:	e8 81 f1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479ad5:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479adb:	89 04 24             	mov    %eax,(%esp)
 8479ade:	e8 63 f1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479ae3:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479aea:	ff 
 8479aeb:	89 04 24             	mov    %eax,(%esp)
 8479aee:	e8 63 f1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479af3:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 8479af9:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479afd:	0f b7 d8             	movzwl %ax,%ebx
 8479b00:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479b06:	89 04 24             	mov    %eax,(%esp)
 8479b09:	e8 40 f1 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479b0e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479b12:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8479b18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479b1c:	89 04 24             	mov    %eax,(%esp)
 8479b1f:	e8 2e 4b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479b24:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479b29:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479b2f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479b33:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479b3a:	00 
 8479b3b:	89 04 24             	mov    %eax,(%esp)
 8479b3e:	e8 9b 74 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479b43:	e9 b3 10 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479b48:	8b 45 08             	mov    0x8(%ebp),%eax
 8479b4b:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 8479b51:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479b57:	89 04 24             	mov    %eax,(%esp)
 8479b5a:	e8 e7 f0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479b5f:	c7 44 24 04 09 02 00 	movl   $0x209,0x4(%esp)
 8479b66:	00 
 8479b67:	89 04 24             	mov    %eax,(%esp)
 8479b6a:	e8 e7 f0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479b6f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479b75:	89 04 24             	mov    %eax,(%esp)
 8479b78:	e8 c9 f0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479b7d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479b84:	ff 
 8479b85:	89 04 24             	mov    %eax,(%esp)
 8479b88:	e8 c9 f0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479b8d:	8b 85 78 ff ff ff    	mov    -0x88(%ebp),%eax
 8479b93:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479b97:	0f b7 d8             	movzwl %ax,%ebx
 8479b9a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479ba0:	89 04 24             	mov    %eax,(%esp)
 8479ba3:	e8 a6 f0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479ba8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479bac:	8b 95 78 ff ff ff    	mov    -0x88(%ebp),%edx
 8479bb2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479bb6:	89 04 24             	mov    %eax,(%esp)
 8479bb9:	e8 94 4a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479bbe:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479bc3:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479bc9:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479bcd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479bd4:	00 
 8479bd5:	89 04 24             	mov    %eax,(%esp)
 8479bd8:	e8 01 74 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479bdd:	e9 19 10 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479be2:	8b 45 08             	mov    0x8(%ebp),%eax
 8479be5:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 8479beb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479bf1:	89 04 24             	mov    %eax,(%esp)
 8479bf4:	e8 4d f0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479bf9:	c7 44 24 04 0a 02 00 	movl   $0x20a,0x4(%esp)
 8479c00:	00 
 8479c01:	89 04 24             	mov    %eax,(%esp)
 8479c04:	e8 4d f0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479c09:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479c0f:	89 04 24             	mov    %eax,(%esp)
 8479c12:	e8 2f f0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479c17:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479c1e:	ff 
 8479c1f:	89 04 24             	mov    %eax,(%esp)
 8479c22:	e8 2f f0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479c27:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 8479c2d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479c31:	0f b7 d8             	movzwl %ax,%ebx
 8479c34:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479c3a:	89 04 24             	mov    %eax,(%esp)
 8479c3d:	e8 0c f0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479c42:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479c46:	8b 95 7c ff ff ff    	mov    -0x84(%ebp),%edx
 8479c4c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479c50:	89 04 24             	mov    %eax,(%esp)
 8479c53:	e8 fa 49 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479c58:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479c5d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479c63:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479c67:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479c6e:	00 
 8479c6f:	89 04 24             	mov    %eax,(%esp)
 8479c72:	e8 67 73 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479c77:	e9 7f 0f 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479c7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8479c7f:	89 45 80             	mov    %eax,-0x80(%ebp)
 8479c82:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479c88:	89 04 24             	mov    %eax,(%esp)
 8479c8b:	e8 b6 ef c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479c90:	c7 44 24 04 0b 02 00 	movl   $0x20b,0x4(%esp)
 8479c97:	00 
 8479c98:	89 04 24             	mov    %eax,(%esp)
 8479c9b:	e8 b6 ef c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479ca0:	8b 45 80             	mov    -0x80(%ebp),%eax
 8479ca3:	8b 40 0a             	mov    0xa(%eax),%eax
 8479ca6:	89 c3                	mov    %eax,%ebx
 8479ca8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479cae:	89 04 24             	mov    %eax,(%esp)
 8479cb1:	e8 90 ef c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479cb6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479cba:	89 04 24             	mov    %eax,(%esp)
 8479cbd:	e8 94 ef c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479cc2:	8b 45 80             	mov    -0x80(%ebp),%eax
 8479cc5:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479cc9:	0f b7 d8             	movzwl %ax,%ebx
 8479ccc:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479cd2:	89 04 24             	mov    %eax,(%esp)
 8479cd5:	e8 74 ef c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479cda:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479cde:	8b 55 80             	mov    -0x80(%ebp),%edx
 8479ce1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479ce5:	89 04 24             	mov    %eax,(%esp)
 8479ce8:	e8 65 49 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479ced:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479cf2:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479cf8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479cfc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479d03:	00 
 8479d04:	89 04 24             	mov    %eax,(%esp)
 8479d07:	e8 d2 72 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479d0c:	e9 ea 0e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479d11:	8b 45 08             	mov    0x8(%ebp),%eax
 8479d14:	89 45 84             	mov    %eax,-0x7c(%ebp)
 8479d17:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479d1d:	89 04 24             	mov    %eax,(%esp)
 8479d20:	e8 21 ef c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479d25:	c7 44 24 04 10 02 00 	movl   $0x210,0x4(%esp)
 8479d2c:	00 
 8479d2d:	89 04 24             	mov    %eax,(%esp)
 8479d30:	e8 21 ef c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479d35:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479d3b:	89 04 24             	mov    %eax,(%esp)
 8479d3e:	e8 03 ef c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479d43:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479d4a:	ff 
 8479d4b:	89 04 24             	mov    %eax,(%esp)
 8479d4e:	e8 03 ef c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479d53:	8b 45 84             	mov    -0x7c(%ebp),%eax
 8479d56:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479d5a:	0f b7 d8             	movzwl %ax,%ebx
 8479d5d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479d63:	89 04 24             	mov    %eax,(%esp)
 8479d66:	e8 e3 ee c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479d6b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479d6f:	8b 55 84             	mov    -0x7c(%ebp),%edx
 8479d72:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479d76:	89 04 24             	mov    %eax,(%esp)
 8479d79:	e8 d4 48 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479d7e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479d83:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479d89:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479d8d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479d94:	00 
 8479d95:	89 04 24             	mov    %eax,(%esp)
 8479d98:	e8 41 72 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479d9d:	e9 59 0e 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479da2:	8b 45 08             	mov    0x8(%ebp),%eax
 8479da5:	89 45 88             	mov    %eax,-0x78(%ebp)
 8479da8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479dae:	89 04 24             	mov    %eax,(%esp)
 8479db1:	e8 90 ee c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479db6:	c7 44 24 04 11 02 00 	movl   $0x211,0x4(%esp)
 8479dbd:	00 
 8479dbe:	89 04 24             	mov    %eax,(%esp)
 8479dc1:	e8 90 ee c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479dc6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479dcc:	89 04 24             	mov    %eax,(%esp)
 8479dcf:	e8 72 ee c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479dd4:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8479ddb:	ff 
 8479ddc:	89 04 24             	mov    %eax,(%esp)
 8479ddf:	e8 72 ee c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479de4:	8b 45 88             	mov    -0x78(%ebp),%eax
 8479de7:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479deb:	0f b7 d8             	movzwl %ax,%ebx
 8479dee:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479df4:	89 04 24             	mov    %eax,(%esp)
 8479df7:	e8 52 ee c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479dfc:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479e00:	8b 55 88             	mov    -0x78(%ebp),%edx
 8479e03:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479e07:	89 04 24             	mov    %eax,(%esp)
 8479e0a:	e8 43 48 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479e0f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479e14:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479e1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479e1e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479e25:	00 
 8479e26:	89 04 24             	mov    %eax,(%esp)
 8479e29:	e8 b0 71 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479e2e:	e9 c8 0d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479e33:	8b 45 08             	mov    0x8(%ebp),%eax
 8479e36:	89 45 8c             	mov    %eax,-0x74(%ebp)
 8479e39:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479e3f:	89 04 24             	mov    %eax,(%esp)
 8479e42:	e8 ff ed c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479e47:	c7 44 24 04 12 02 00 	movl   $0x212,0x4(%esp)
 8479e4e:	00 
 8479e4f:	89 04 24             	mov    %eax,(%esp)
 8479e52:	e8 ff ed c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479e57:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8479e5a:	8b 40 0e             	mov    0xe(%eax),%eax
 8479e5d:	89 c3                	mov    %eax,%ebx
 8479e5f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479e65:	89 04 24             	mov    %eax,(%esp)
 8479e68:	e8 d9 ed c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479e6d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479e71:	89 04 24             	mov    %eax,(%esp)
 8479e74:	e8 dd ed c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479e79:	8b 45 8c             	mov    -0x74(%ebp),%eax
 8479e7c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479e80:	0f b7 d8             	movzwl %ax,%ebx
 8479e83:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479e89:	89 04 24             	mov    %eax,(%esp)
 8479e8c:	e8 bd ed c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479e91:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479e95:	8b 55 8c             	mov    -0x74(%ebp),%edx
 8479e98:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479e9c:	89 04 24             	mov    %eax,(%esp)
 8479e9f:	e8 ae 47 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479ea4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479ea9:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479eaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479eb3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479eba:	00 
 8479ebb:	89 04 24             	mov    %eax,(%esp)
 8479ebe:	e8 1b 71 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479ec3:	e9 33 0d 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479ec8:	8b 45 08             	mov    0x8(%ebp),%eax
 8479ecb:	89 45 90             	mov    %eax,-0x70(%ebp)
 8479ece:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479ed4:	89 04 24             	mov    %eax,(%esp)
 8479ed7:	e8 6a ed c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479edc:	c7 44 24 04 1b 02 00 	movl   $0x21b,0x4(%esp)
 8479ee3:	00 
 8479ee4:	89 04 24             	mov    %eax,(%esp)
 8479ee7:	e8 6a ed c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479eec:	8b 45 90             	mov    -0x70(%ebp),%eax
 8479eef:	8b 58 12             	mov    0x12(%eax),%ebx
 8479ef2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479ef8:	89 04 24             	mov    %eax,(%esp)
 8479efb:	e8 46 ed c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479f00:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479f04:	89 04 24             	mov    %eax,(%esp)
 8479f07:	e8 4a ed c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479f0c:	8b 45 90             	mov    -0x70(%ebp),%eax
 8479f0f:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479f13:	0f b7 d8             	movzwl %ax,%ebx
 8479f16:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479f1c:	89 04 24             	mov    %eax,(%esp)
 8479f1f:	e8 2a ed c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479f24:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479f28:	8b 55 90             	mov    -0x70(%ebp),%edx
 8479f2b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479f2f:	89 04 24             	mov    %eax,(%esp)
 8479f32:	e8 1b 47 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479f37:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479f3c:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479f42:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479f46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479f4d:	00 
 8479f4e:	89 04 24             	mov    %eax,(%esp)
 8479f51:	e8 88 70 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479f56:	e9 a0 0c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479f5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8479f5e:	89 45 94             	mov    %eax,-0x6c(%ebp)
 8479f61:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479f67:	89 04 24             	mov    %eax,(%esp)
 8479f6a:	e8 d7 ec c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479f6f:	c7 44 24 04 1d 02 00 	movl   $0x21d,0x4(%esp)
 8479f76:	00 
 8479f77:	89 04 24             	mov    %eax,(%esp)
 8479f7a:	e8 d7 ec c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479f7f:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8479f82:	8b 58 0e             	mov    0xe(%eax),%ebx
 8479f85:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479f8b:	89 04 24             	mov    %eax,(%esp)
 8479f8e:	e8 b3 ec c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8479f93:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8479f97:	89 04 24             	mov    %eax,(%esp)
 8479f9a:	e8 b7 ec c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8479f9f:	8b 45 94             	mov    -0x6c(%ebp),%eax
 8479fa2:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8479fa6:	0f b7 d8             	movzwl %ax,%ebx
 8479fa9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479faf:	89 04 24             	mov    %eax,(%esp)
 8479fb2:	e8 97 ec c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 8479fb7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8479fbb:	8b 55 94             	mov    -0x6c(%ebp),%edx
 8479fbe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8479fc2:	89 04 24             	mov    %eax,(%esp)
 8479fc5:	e8 88 46 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 8479fca:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 8479fcf:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 8479fd5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8479fd9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8479fe0:	00 
 8479fe1:	89 04 24             	mov    %eax,(%esp)
 8479fe4:	e8 f5 6f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8479fe9:	e9 0d 0c 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 8479fee:	8b 45 08             	mov    0x8(%ebp),%eax
 8479ff1:	89 45 98             	mov    %eax,-0x68(%ebp)
 8479ff4:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 8479ffa:	89 04 24             	mov    %eax,(%esp)
 8479ffd:	e8 44 ec c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a002:	c7 44 24 04 1e 02 00 	movl   $0x21e,0x4(%esp)
 847a009:	00 
 847a00a:	89 04 24             	mov    %eax,(%esp)
 847a00d:	e8 44 ec c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a012:	8b 45 98             	mov    -0x68(%ebp),%eax
 847a015:	8b 58 0e             	mov    0xe(%eax),%ebx
 847a018:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a01e:	89 04 24             	mov    %eax,(%esp)
 847a021:	e8 20 ec c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a026:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a02a:	89 04 24             	mov    %eax,(%esp)
 847a02d:	e8 24 ec c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a032:	8b 45 98             	mov    -0x68(%ebp),%eax
 847a035:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a039:	0f b7 d8             	movzwl %ax,%ebx
 847a03c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a042:	89 04 24             	mov    %eax,(%esp)
 847a045:	e8 04 ec c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a04a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a04e:	8b 55 98             	mov    -0x68(%ebp),%edx
 847a051:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a055:	89 04 24             	mov    %eax,(%esp)
 847a058:	e8 f5 45 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a05d:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a062:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a068:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a06c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a073:	00 
 847a074:	89 04 24             	mov    %eax,(%esp)
 847a077:	e8 62 6f 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a07c:	e9 7a 0b 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a081:	8b 45 08             	mov    0x8(%ebp),%eax
 847a084:	89 45 9c             	mov    %eax,-0x64(%ebp)
 847a087:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a08d:	89 04 24             	mov    %eax,(%esp)
 847a090:	e8 b1 eb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a095:	c7 44 24 04 b6 02 00 	movl   $0x2b6,0x4(%esp)
 847a09c:	00 
 847a09d:	89 04 24             	mov    %eax,(%esp)
 847a0a0:	e8 b1 eb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a0a5:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847a0a8:	8b 40 0e             	mov    0xe(%eax),%eax
 847a0ab:	85 c0                	test   %eax,%eax
 847a0ad:	74 24                	je     847a0d3 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6a73>
 847a0af:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847a0b2:	8b 40 0e             	mov    0xe(%eax),%eax
 847a0b5:	89 c3                	mov    %eax,%ebx
 847a0b7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a0bd:	89 04 24             	mov    %eax,(%esp)
 847a0c0:	e8 81 eb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a0c5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a0c9:	89 04 24             	mov    %eax,(%esp)
 847a0cc:	e8 85 eb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a0d1:	eb 1e                	jmp    847a0f1 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x6a91>
 847a0d3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a0d9:	89 04 24             	mov    %eax,(%esp)
 847a0dc:	e8 65 eb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a0e1:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a0e8:	ff 
 847a0e9:	89 04 24             	mov    %eax,(%esp)
 847a0ec:	e8 65 eb c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a0f1:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847a0f4:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a0f8:	0f b7 d8             	movzwl %ax,%ebx
 847a0fb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a101:	89 04 24             	mov    %eax,(%esp)
 847a104:	e8 45 eb c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a109:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a10d:	8b 55 9c             	mov    -0x64(%ebp),%edx
 847a110:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a114:	89 04 24             	mov    %eax,(%esp)
 847a117:	e8 36 45 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a11c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a121:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a127:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a12b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a132:	00 
 847a133:	89 04 24             	mov    %eax,(%esp)
 847a136:	e8 a3 6e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a13b:	e9 bb 0a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a140:	a1 34 be 40 09       	mov    0x940be34,%eax
 847a145:	89 04 24             	mov    %eax,(%esp)
 847a148:	e8 71 64 ff ff       	call   84705be <_ZN17CHadesServerProxy15ConnTcpHadesSvrEv>
 847a14d:	e9 a9 0a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a152:	8b 45 08             	mov    0x8(%ebp),%eax
 847a155:	89 45 a0             	mov    %eax,-0x60(%ebp)
 847a158:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a15e:	89 04 24             	mov    %eax,(%esp)
 847a161:	e8 e0 ea c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a166:	c7 44 24 04 5b 02 00 	movl   $0x25b,0x4(%esp)
 847a16d:	00 
 847a16e:	89 04 24             	mov    %eax,(%esp)
 847a171:	e8 e0 ea c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a176:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847a179:	8b 40 0a             	mov    0xa(%eax),%eax
 847a17c:	89 c3                	mov    %eax,%ebx
 847a17e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a184:	89 04 24             	mov    %eax,(%esp)
 847a187:	e8 ba ea c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a18c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a190:	89 04 24             	mov    %eax,(%esp)
 847a193:	e8 be ea c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a198:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847a19b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a19f:	0f b7 d8             	movzwl %ax,%ebx
 847a1a2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a1a8:	89 04 24             	mov    %eax,(%esp)
 847a1ab:	e8 9e ea c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a1b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a1b4:	8b 55 a0             	mov    -0x60(%ebp),%edx
 847a1b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a1bb:	89 04 24             	mov    %eax,(%esp)
 847a1be:	e8 8f 44 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a1c3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a1c8:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a1ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a1d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a1d9:	00 
 847a1da:	89 04 24             	mov    %eax,(%esp)
 847a1dd:	e8 fc 6d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a1e2:	e9 14 0a 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a1e7:	8b 45 08             	mov    0x8(%ebp),%eax
 847a1ea:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 847a1ed:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a1f3:	89 04 24             	mov    %eax,(%esp)
 847a1f6:	e8 4b ea c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a1fb:	c7 44 24 04 60 02 00 	movl   $0x260,0x4(%esp)
 847a202:	00 
 847a203:	89 04 24             	mov    %eax,(%esp)
 847a206:	e8 4b ea c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a20b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a211:	89 04 24             	mov    %eax,(%esp)
 847a214:	e8 2d ea c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a219:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a220:	ff 
 847a221:	89 04 24             	mov    %eax,(%esp)
 847a224:	e8 2d ea c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a229:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a22f:	89 04 24             	mov    %eax,(%esp)
 847a232:	e8 17 ea c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a237:	c7 44 24 08 0e 01 00 	movl   $0x10e,0x8(%esp)
 847a23e:	00 
 847a23f:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 847a242:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a246:	89 04 24             	mov    %eax,(%esp)
 847a249:	e8 04 44 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a24e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a253:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a259:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a25d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a264:	00 
 847a265:	89 04 24             	mov    %eax,(%esp)
 847a268:	e8 71 6d 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a26d:	e9 89 09 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a272:	8b 45 08             	mov    0x8(%ebp),%eax
 847a275:	89 45 a8             	mov    %eax,-0x58(%ebp)
 847a278:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847a27b:	8b 40 0a             	mov    0xa(%eax),%eax
 847a27e:	89 04 24             	mov    %eax,(%esp)
 847a281:	e8 92 5a 0d 00       	call   854fd18 <_ZN10CSwitchLog15SetLogWriteFlagEi>
 847a286:	e9 70 09 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a28b:	8b 45 08             	mov    0x8(%ebp),%eax
 847a28e:	89 45 ac             	mov    %eax,-0x54(%ebp)
 847a291:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a297:	89 04 24             	mov    %eax,(%esp)
 847a29a:	e8 a7 e9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a29f:	c7 44 24 04 74 02 00 	movl   $0x274,0x4(%esp)
 847a2a6:	00 
 847a2a7:	89 04 24             	mov    %eax,(%esp)
 847a2aa:	e8 a7 e9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a2af:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847a2b2:	8b 40 0a             	mov    0xa(%eax),%eax
 847a2b5:	89 c3                	mov    %eax,%ebx
 847a2b7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a2bd:	89 04 24             	mov    %eax,(%esp)
 847a2c0:	e8 81 e9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a2c5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a2c9:	89 04 24             	mov    %eax,(%esp)
 847a2cc:	e8 85 e9 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a2d1:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847a2d4:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a2d8:	0f b7 d8             	movzwl %ax,%ebx
 847a2db:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a2e1:	89 04 24             	mov    %eax,(%esp)
 847a2e4:	e8 65 e9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a2e9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a2ed:	8b 55 ac             	mov    -0x54(%ebp),%edx
 847a2f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a2f4:	89 04 24             	mov    %eax,(%esp)
 847a2f7:	e8 56 43 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a2fc:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a301:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a307:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a30b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a312:	00 
 847a313:	89 04 24             	mov    %eax,(%esp)
 847a316:	e8 c3 6c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a31b:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 847a322:	00 
 847a323:	c7 44 24 08 bf 0d 00 	movl   $0xdbf,0x8(%esp)
 847a32a:	00 
 847a32b:	c7 44 24 04 00 0f c7 	movl   $0x8c70f00,0x4(%esp)
 847a332:	08 
 847a333:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 847a339:	89 04 24             	mov    %eax,(%esp)
 847a33c:	e8 d7 53 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847a341:	c7 44 24 04 23 00 c7 	movl   $0x8c70023,0x4(%esp)
 847a348:	08 
 847a349:	8d 85 08 fd ff ff    	lea    -0x2f8(%ebp),%eax
 847a34f:	89 04 24             	mov    %eax,(%esp)
 847a352:	e8 31 54 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847a357:	e9 9f 08 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a35c:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 847a363:	00 
 847a364:	c7 44 24 08 cc 0d 00 	movl   $0xdcc,0x8(%esp)
 847a36b:	00 
 847a36c:	c7 44 24 04 00 0f c7 	movl   $0x8c70f00,0x4(%esp)
 847a373:	08 
 847a374:	8d 85 18 fd ff ff    	lea    -0x2e8(%ebp),%eax
 847a37a:	89 04 24             	mov    %eax,(%esp)
 847a37d:	e8 96 53 0d 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 847a382:	c7 44 24 04 3a 00 c7 	movl   $0x8c7003a,0x4(%esp)
 847a389:	08 
 847a38a:	8d 85 18 fd ff ff    	lea    -0x2e8(%ebp),%eax
 847a390:	89 04 24             	mov    %eax,(%esp)
 847a393:	e8 f0 53 0d 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 847a398:	e9 5e 08 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a39d:	8b 45 08             	mov    0x8(%ebp),%eax
 847a3a0:	89 45 b0             	mov    %eax,-0x50(%ebp)
 847a3a3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a3a9:	89 04 24             	mov    %eax,(%esp)
 847a3ac:	e8 95 e8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a3b1:	c7 44 24 04 a5 02 00 	movl   $0x2a5,0x4(%esp)
 847a3b8:	00 
 847a3b9:	89 04 24             	mov    %eax,(%esp)
 847a3bc:	e8 95 e8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a3c1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847a3c4:	8b 58 0a             	mov    0xa(%eax),%ebx
 847a3c7:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a3cd:	89 04 24             	mov    %eax,(%esp)
 847a3d0:	e8 71 e8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a3d5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a3d9:	89 04 24             	mov    %eax,(%esp)
 847a3dc:	e8 75 e8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a3e1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847a3e4:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a3e8:	0f b7 d8             	movzwl %ax,%ebx
 847a3eb:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a3f1:	89 04 24             	mov    %eax,(%esp)
 847a3f4:	e8 55 e8 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a3f9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a3fd:	8b 55 b0             	mov    -0x50(%ebp),%edx
 847a400:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a404:	89 04 24             	mov    %eax,(%esp)
 847a407:	e8 46 42 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a40c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a411:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a417:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a41b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a422:	00 
 847a423:	89 04 24             	mov    %eax,(%esp)
 847a426:	e8 b3 6b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a42b:	e9 cb 07 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a430:	8b 45 08             	mov    0x8(%ebp),%eax
 847a433:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 847a436:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a43c:	89 04 24             	mov    %eax,(%esp)
 847a43f:	e8 02 e8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a444:	c7 44 24 04 a6 02 00 	movl   $0x2a6,0x4(%esp)
 847a44b:	00 
 847a44c:	89 04 24             	mov    %eax,(%esp)
 847a44f:	e8 02 e8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a454:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847a457:	8b 58 0f             	mov    0xf(%eax),%ebx
 847a45a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a460:	89 04 24             	mov    %eax,(%esp)
 847a463:	e8 de e7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a468:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a46c:	89 04 24             	mov    %eax,(%esp)
 847a46f:	e8 e2 e7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a474:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847a477:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a47b:	0f b7 d8             	movzwl %ax,%ebx
 847a47e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a484:	89 04 24             	mov    %eax,(%esp)
 847a487:	e8 c2 e7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a48c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a490:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 847a493:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a497:	89 04 24             	mov    %eax,(%esp)
 847a49a:	e8 b3 41 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a49f:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a4a4:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a4aa:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a4ae:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a4b5:	00 
 847a4b6:	89 04 24             	mov    %eax,(%esp)
 847a4b9:	e8 20 6b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a4be:	e9 38 07 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a4c3:	8b 45 08             	mov    0x8(%ebp),%eax
 847a4c6:	89 45 b8             	mov    %eax,-0x48(%ebp)
 847a4c9:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a4cf:	89 04 24             	mov    %eax,(%esp)
 847a4d2:	e8 6f e7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a4d7:	c7 44 24 04 a7 02 00 	movl   $0x2a7,0x4(%esp)
 847a4de:	00 
 847a4df:	89 04 24             	mov    %eax,(%esp)
 847a4e2:	e8 6f e7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a4e7:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847a4ea:	8b 58 0a             	mov    0xa(%eax),%ebx
 847a4ed:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a4f3:	89 04 24             	mov    %eax,(%esp)
 847a4f6:	e8 4b e7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a4fb:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a4ff:	89 04 24             	mov    %eax,(%esp)
 847a502:	e8 4f e7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a507:	8b 45 b8             	mov    -0x48(%ebp),%eax
 847a50a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a50e:	0f b7 d8             	movzwl %ax,%ebx
 847a511:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a517:	89 04 24             	mov    %eax,(%esp)
 847a51a:	e8 2f e7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a51f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a523:	8b 55 b8             	mov    -0x48(%ebp),%edx
 847a526:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a52a:	89 04 24             	mov    %eax,(%esp)
 847a52d:	e8 20 41 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a532:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a537:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a53d:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a541:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a548:	00 
 847a549:	89 04 24             	mov    %eax,(%esp)
 847a54c:	e8 8d 6a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a551:	e9 a5 06 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a556:	8b 45 08             	mov    0x8(%ebp),%eax
 847a559:	89 45 bc             	mov    %eax,-0x44(%ebp)
 847a55c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a562:	89 04 24             	mov    %eax,(%esp)
 847a565:	e8 dc e6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a56a:	c7 44 24 04 a8 02 00 	movl   $0x2a8,0x4(%esp)
 847a571:	00 
 847a572:	89 04 24             	mov    %eax,(%esp)
 847a575:	e8 dc e6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a57a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a580:	89 04 24             	mov    %eax,(%esp)
 847a583:	e8 be e6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a588:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a58f:	ff 
 847a590:	89 04 24             	mov    %eax,(%esp)
 847a593:	e8 be e6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a598:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847a59b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a59f:	0f b7 d8             	movzwl %ax,%ebx
 847a5a2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a5a8:	89 04 24             	mov    %eax,(%esp)
 847a5ab:	e8 9e e6 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a5b0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a5b4:	8b 55 bc             	mov    -0x44(%ebp),%edx
 847a5b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a5bb:	89 04 24             	mov    %eax,(%esp)
 847a5be:	e8 8f 40 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a5c3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a5c8:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a5ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a5d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a5d9:	00 
 847a5da:	89 04 24             	mov    %eax,(%esp)
 847a5dd:	e8 fc 69 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a5e2:	e9 14 06 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a5e7:	8b 45 08             	mov    0x8(%ebp),%eax
 847a5ea:	89 45 c0             	mov    %eax,-0x40(%ebp)
 847a5ed:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a5f3:	89 04 24             	mov    %eax,(%esp)
 847a5f6:	e8 4b e6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a5fb:	c7 44 24 04 c5 02 00 	movl   $0x2c5,0x4(%esp)
 847a602:	00 
 847a603:	89 04 24             	mov    %eax,(%esp)
 847a606:	e8 4b e6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a60b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a611:	89 04 24             	mov    %eax,(%esp)
 847a614:	e8 2d e6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a619:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a620:	ff 
 847a621:	89 04 24             	mov    %eax,(%esp)
 847a624:	e8 2d e6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a629:	8b 45 c0             	mov    -0x40(%ebp),%eax
 847a62c:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a630:	0f b7 d8             	movzwl %ax,%ebx
 847a633:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a639:	89 04 24             	mov    %eax,(%esp)
 847a63c:	e8 0d e6 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a641:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a645:	8b 55 c0             	mov    -0x40(%ebp),%edx
 847a648:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a64c:	89 04 24             	mov    %eax,(%esp)
 847a64f:	e8 fe 3f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a654:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a659:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a65f:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a663:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a66a:	00 
 847a66b:	89 04 24             	mov    %eax,(%esp)
 847a66e:	e8 6b 69 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a673:	e9 83 05 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a678:	8b 45 08             	mov    0x8(%ebp),%eax
 847a67b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 847a67e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a684:	89 04 24             	mov    %eax,(%esp)
 847a687:	e8 ba e5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a68c:	c7 44 24 04 c6 02 00 	movl   $0x2c6,0x4(%esp)
 847a693:	00 
 847a694:	89 04 24             	mov    %eax,(%esp)
 847a697:	e8 ba e5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a69c:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847a69f:	8b 58 0a             	mov    0xa(%eax),%ebx
 847a6a2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a6a8:	89 04 24             	mov    %eax,(%esp)
 847a6ab:	e8 96 e5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a6b0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a6b4:	89 04 24             	mov    %eax,(%esp)
 847a6b7:	e8 9a e5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a6bc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847a6bf:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a6c3:	0f b7 d8             	movzwl %ax,%ebx
 847a6c6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a6cc:	89 04 24             	mov    %eax,(%esp)
 847a6cf:	e8 7a e5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a6d4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a6d8:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 847a6db:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a6df:	89 04 24             	mov    %eax,(%esp)
 847a6e2:	e8 6b 3f c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a6e7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a6ec:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a6f2:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a6f6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a6fd:	00 
 847a6fe:	89 04 24             	mov    %eax,(%esp)
 847a701:	e8 d8 68 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a706:	e9 f0 04 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a70b:	8b 45 08             	mov    0x8(%ebp),%eax
 847a70e:	89 45 c8             	mov    %eax,-0x38(%ebp)
 847a711:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a717:	89 04 24             	mov    %eax,(%esp)
 847a71a:	e8 27 e5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a71f:	c7 44 24 04 c7 02 00 	movl   $0x2c7,0x4(%esp)
 847a726:	00 
 847a727:	89 04 24             	mov    %eax,(%esp)
 847a72a:	e8 27 e5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a72f:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a735:	89 04 24             	mov    %eax,(%esp)
 847a738:	e8 09 e5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a73d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a744:	ff 
 847a745:	89 04 24             	mov    %eax,(%esp)
 847a748:	e8 09 e5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a74d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 847a750:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a754:	0f b7 d8             	movzwl %ax,%ebx
 847a757:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a75d:	89 04 24             	mov    %eax,(%esp)
 847a760:	e8 e9 e4 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a765:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a769:	8b 55 c8             	mov    -0x38(%ebp),%edx
 847a76c:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a770:	89 04 24             	mov    %eax,(%esp)
 847a773:	e8 da 3e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a778:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a77d:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a783:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a787:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a78e:	00 
 847a78f:	89 04 24             	mov    %eax,(%esp)
 847a792:	e8 47 68 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a797:	e9 5f 04 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a79c:	8b 45 08             	mov    0x8(%ebp),%eax
 847a79f:	89 45 cc             	mov    %eax,-0x34(%ebp)
 847a7a2:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a7a8:	89 04 24             	mov    %eax,(%esp)
 847a7ab:	e8 96 e4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a7b0:	c7 44 24 04 c8 02 00 	movl   $0x2c8,0x4(%esp)
 847a7b7:	00 
 847a7b8:	89 04 24             	mov    %eax,(%esp)
 847a7bb:	e8 96 e4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a7c0:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a7c6:	89 04 24             	mov    %eax,(%esp)
 847a7c9:	e8 78 e4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a7ce:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a7d5:	ff 
 847a7d6:	89 04 24             	mov    %eax,(%esp)
 847a7d9:	e8 78 e4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a7de:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847a7e1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a7e5:	0f b7 d8             	movzwl %ax,%ebx
 847a7e8:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a7ee:	89 04 24             	mov    %eax,(%esp)
 847a7f1:	e8 58 e4 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a7f6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a7fa:	8b 55 cc             	mov    -0x34(%ebp),%edx
 847a7fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a801:	89 04 24             	mov    %eax,(%esp)
 847a804:	e8 49 3e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a809:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a80e:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a814:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a818:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a81f:	00 
 847a820:	89 04 24             	mov    %eax,(%esp)
 847a823:	e8 b6 67 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a828:	e9 ce 03 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a82d:	8b 45 08             	mov    0x8(%ebp),%eax
 847a830:	89 45 d0             	mov    %eax,-0x30(%ebp)
 847a833:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a839:	89 04 24             	mov    %eax,(%esp)
 847a83c:	e8 05 e4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a841:	c7 44 24 04 ce 02 00 	movl   $0x2ce,0x4(%esp)
 847a848:	00 
 847a849:	89 04 24             	mov    %eax,(%esp)
 847a84c:	e8 05 e4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a851:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847a854:	8b 58 0e             	mov    0xe(%eax),%ebx
 847a857:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a85d:	89 04 24             	mov    %eax,(%esp)
 847a860:	e8 e1 e3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a865:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a869:	89 04 24             	mov    %eax,(%esp)
 847a86c:	e8 e5 e3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a871:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847a874:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a878:	0f b7 d8             	movzwl %ax,%ebx
 847a87b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a881:	89 04 24             	mov    %eax,(%esp)
 847a884:	e8 c5 e3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a889:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a88d:	8b 55 d0             	mov    -0x30(%ebp),%edx
 847a890:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a894:	89 04 24             	mov    %eax,(%esp)
 847a897:	e8 b6 3d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a89c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a8a1:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a8a7:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a8ab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a8b2:	00 
 847a8b3:	89 04 24             	mov    %eax,(%esp)
 847a8b6:	e8 23 67 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a8bb:	e9 3b 03 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a8c0:	8b 45 08             	mov    0x8(%ebp),%eax
 847a8c3:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 847a8c6:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a8cc:	89 04 24             	mov    %eax,(%esp)
 847a8cf:	e8 72 e3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a8d4:	c7 44 24 04 fb 02 00 	movl   $0x2fb,0x4(%esp)
 847a8db:	00 
 847a8dc:	89 04 24             	mov    %eax,(%esp)
 847a8df:	e8 72 e3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a8e4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847a8e7:	8b 40 0a             	mov    0xa(%eax),%eax
 847a8ea:	89 c3                	mov    %eax,%ebx
 847a8ec:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a8f2:	89 04 24             	mov    %eax,(%esp)
 847a8f5:	e8 4c e3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a8fa:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847a8fe:	89 04 24             	mov    %eax,(%esp)
 847a901:	e8 50 e3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a906:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847a909:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a90d:	0f b7 d8             	movzwl %ax,%ebx
 847a910:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a916:	89 04 24             	mov    %eax,(%esp)
 847a919:	e8 30 e3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a91e:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a922:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 847a925:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a929:	89 04 24             	mov    %eax,(%esp)
 847a92c:	e8 21 3d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a931:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a936:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a93c:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a940:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a947:	00 
 847a948:	89 04 24             	mov    %eax,(%esp)
 847a94b:	e8 8e 66 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a950:	e9 a6 02 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a955:	8b 45 08             	mov    0x8(%ebp),%eax
 847a958:	89 45 d8             	mov    %eax,-0x28(%ebp)
 847a95b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a961:	89 04 24             	mov    %eax,(%esp)
 847a964:	e8 dd e2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a969:	c7 44 24 04 fc 02 00 	movl   $0x2fc,0x4(%esp)
 847a970:	00 
 847a971:	89 04 24             	mov    %eax,(%esp)
 847a974:	e8 dd e2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a979:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a97f:	89 04 24             	mov    %eax,(%esp)
 847a982:	e8 bf e2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a987:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847a98e:	ff 
 847a98f:	89 04 24             	mov    %eax,(%esp)
 847a992:	e8 bf e2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847a997:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847a99a:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847a99e:	0f b7 d8             	movzwl %ax,%ebx
 847a9a1:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a9a7:	89 04 24             	mov    %eax,(%esp)
 847a9aa:	e8 9f e2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847a9af:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847a9b3:	8b 55 d8             	mov    -0x28(%ebp),%edx
 847a9b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 847a9ba:	89 04 24             	mov    %eax,(%esp)
 847a9bd:	e8 90 3c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847a9c2:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847a9c7:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847a9cd:	89 54 24 08          	mov    %edx,0x8(%esp)
 847a9d1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847a9d8:	00 
 847a9d9:	89 04 24             	mov    %eax,(%esp)
 847a9dc:	e8 fd 65 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847a9e1:	e9 15 02 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847a9e6:	8b 45 08             	mov    0x8(%ebp),%eax
 847a9e9:	89 45 dc             	mov    %eax,-0x24(%ebp)
 847a9ec:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847a9f2:	89 04 24             	mov    %eax,(%esp)
 847a9f5:	e8 4c e2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847a9fa:	c7 44 24 04 fa 02 00 	movl   $0x2fa,0x4(%esp)
 847aa01:	00 
 847aa02:	89 04 24             	mov    %eax,(%esp)
 847aa05:	e8 4c e2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847aa0a:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847aa10:	89 04 24             	mov    %eax,(%esp)
 847aa13:	e8 2e e2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847aa18:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847aa1f:	ff 
 847aa20:	89 04 24             	mov    %eax,(%esp)
 847aa23:	e8 2e e2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847aa28:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847aa2b:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847aa2f:	0f b7 d8             	movzwl %ax,%ebx
 847aa32:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847aa38:	89 04 24             	mov    %eax,(%esp)
 847aa3b:	e8 0e e2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847aa40:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847aa44:	8b 55 dc             	mov    -0x24(%ebp),%edx
 847aa47:	89 54 24 04          	mov    %edx,0x4(%esp)
 847aa4b:	89 04 24             	mov    %eax,(%esp)
 847aa4e:	e8 ff 3b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847aa53:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847aa58:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847aa5e:	89 54 24 08          	mov    %edx,0x8(%esp)
 847aa62:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847aa69:	00 
 847aa6a:	89 04 24             	mov    %eax,(%esp)
 847aa6d:	e8 6c 65 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847aa72:	e9 84 01 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847aa77:	8b 45 08             	mov    0x8(%ebp),%eax
 847aa7a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 847aa7d:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847aa83:	89 04 24             	mov    %eax,(%esp)
 847aa86:	e8 bb e1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847aa8b:	c7 44 24 04 02 03 00 	movl   $0x302,0x4(%esp)
 847aa92:	00 
 847aa93:	89 04 24             	mov    %eax,(%esp)
 847aa96:	e8 bb e1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847aa9b:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847aaa1:	89 04 24             	mov    %eax,(%esp)
 847aaa4:	e8 9d e1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847aaa9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847aab0:	ff 
 847aab1:	89 04 24             	mov    %eax,(%esp)
 847aab4:	e8 9d e1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847aab9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847aabc:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847aac0:	0f b7 d8             	movzwl %ax,%ebx
 847aac3:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847aac9:	89 04 24             	mov    %eax,(%esp)
 847aacc:	e8 7d e1 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847aad1:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847aad5:	8b 55 e0             	mov    -0x20(%ebp),%edx
 847aad8:	89 54 24 04          	mov    %edx,0x4(%esp)
 847aadc:	89 04 24             	mov    %eax,(%esp)
 847aadf:	e8 6e 3b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847aae4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847aae9:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847aaef:	89 54 24 08          	mov    %edx,0x8(%esp)
 847aaf3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847aafa:	00 
 847aafb:	89 04 24             	mov    %eax,(%esp)
 847aafe:	e8 db 64 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847ab03:	e9 f3 00 00 00       	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847ab08:	8b 45 08             	mov    0x8(%ebp),%eax
 847ab0b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847ab0e:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847ab14:	89 04 24             	mov    %eax,(%esp)
 847ab17:	e8 2a e1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ab1c:	c7 44 24 04 2f 03 00 	movl   $0x32f,0x4(%esp)
 847ab23:	00 
 847ab24:	89 04 24             	mov    %eax,(%esp)
 847ab27:	e8 2a e1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847ab2c:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847ab32:	89 04 24             	mov    %eax,(%esp)
 847ab35:	e8 0c e1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ab3a:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847ab41:	ff 
 847ab42:	89 04 24             	mov    %eax,(%esp)
 847ab45:	e8 0c e1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847ab4a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847ab4d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847ab51:	0f b7 d8             	movzwl %ax,%ebx
 847ab54:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847ab5a:	89 04 24             	mov    %eax,(%esp)
 847ab5d:	e8 ec e0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847ab62:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847ab66:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 847ab69:	89 54 24 04          	mov    %edx,0x4(%esp)
 847ab6d:	89 04 24             	mov    %eax,(%esp)
 847ab70:	e8 dd 3a c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847ab75:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847ab7a:	8d 95 f0 fc ff ff    	lea    -0x310(%ebp),%edx
 847ab80:	89 54 24 08          	mov    %edx,0x8(%esp)
 847ab84:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ab8b:	00 
 847ab8c:	89 04 24             	mov    %eax,(%esp)
 847ab8f:	e8 4a 64 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847ab94:	eb 65                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847ab96:	e8 de 7a ce ff       	call   8162679 <_ZN4ARAD9SingletonI19RestrictGeolocationE3GetEv>
 847ab9b:	89 04 24             	mov    %eax,(%esp)
 847ab9e:	e8 a3 5e cf ff       	call   8170a46 <_ZN19RestrictGeolocation15initGeolocationEv>
 847aba3:	83 f0 01             	xor    $0x1,%eax
 847aba6:	84 c0                	test   %al,%al
 847aba8:	74 50                	je     847abfa <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759a>
 847abaa:	c7 44 24 10 4a 00 c7 	movl   $0x8c7004a,0x10(%esp)
 847abb1:	08 
 847abb2:	c7 44 24 0c 43 11 00 	movl   $0x1143,0xc(%esp)
 847abb9:	00 
 847abba:	c7 44 24 08 00 0f c7 	movl   $0x8c70f00,0x8(%esp)
 847abc1:	08 
 847abc2:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847abc9:	08 
 847abca:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847abd1:	e8 34 90 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847abd6:	eb 23                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847abd8:	e8 09 7a ce ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 847abdd:	89 04 24             	mov    %eax,(%esp)
 847abe0:	e8 f1 3b cf ff       	call   816e7d6 <_ZN22ServiceRestrictManager10loadPolicyEv>
 847abe5:	eb 14                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847abe7:	bb 00 00 00 00       	mov    $0x0,%ebx
 847abec:	eb 32                	jmp    847ac20 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x75c0>
 847abee:	90                   	nop
 847abef:	eb 0a                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847abf1:	90                   	nop
 847abf2:	eb 07                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847abf4:	90                   	nop
 847abf5:	eb 04                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847abf7:	90                   	nop
 847abf8:	eb 01                	jmp    847abfb <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x759b>
 847abfa:	90                   	nop
 847abfb:	bb 01 00 00 00       	mov    $0x1,%ebx
 847ac00:	eb 1e                	jmp    847ac20 <_ZN21CDispatchServerPacket14dispatchPacketEPc+0x75c0>
 847ac02:	89 d3                	mov    %edx,%ebx
 847ac04:	89 c6                	mov    %eax,%esi
 847ac06:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847ac0c:	89 04 24             	mov    %eax,(%esp)
 847ac0f:	e8 be 1c 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ac14:	89 f0                	mov    %esi,%eax
 847ac16:	89 da                	mov    %ebx,%edx
 847ac18:	89 04 24             	mov    %eax,(%esp)
 847ac1b:	e8 30 8b 66 00       	call   8ae3750 <_Unwind_Resume>
 847ac20:	8d 85 f0 fc ff ff    	lea    -0x310(%ebp),%eax
 847ac26:	89 04 24             	mov    %eax,(%esp)
 847ac29:	e8 a4 1c 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ac2e:	89 d8                	mov    %ebx,%eax
 847ac30:	81 c4 2c 03 00 00    	add    $0x32c,%esp
 847ac36:	5b                   	pop    %ebx
 847ac37:	5e                   	pop    %esi
 847ac38:	5f                   	pop    %edi
 847ac39:	5d                   	pop    %ebp
 847ac3a:	c3                   	ret
 847ac3b:	90                   	nop

```

```c
// CDispatchServerPacket::dispatchPacket @ 0x8473660

/* CDispatchServerPacket::dispatchPacket(char*) */

undefined4 CDispatchServerPacket::dispatchPacket(char *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  Stream *pSVar6;
  uint uVar7;
  CStreamGuard *pCVar8;
  RestrictGeolocation *this;
  undefined4 uVar9;
  CStreamGuard local_314 [8];
  cMyTrace local_30c [16];
  cMyTrace local_2fc [16];
  cMyTrace local_2ec [18];
  ushort local_2da;
  char *local_2d8;
  char *local_2d4;
  char *local_2d0;
  char *local_2cc;
  char *local_2c8;
  char *local_2c4;
  char *local_2c0;
  char *local_2bc;
  char *local_2b8;
  char *local_2b4;
  char *local_2b0;
  char *local_2ac;
  char *local_2a8;
  char *local_2a4;
  char *local_2a0;
  char *local_29c;
  char *local_298;
  char *local_294;
  char *local_290;
  char *local_28c;
  char *local_288;
  char *local_284;
  char *local_280;
  char *local_27c;
  char *local_278;
  char *local_274;
  char *local_270;
  char *local_26c;
  char *local_268;
  char *local_264;
  char *local_260;
  char *local_25c;
  char *local_258;
  char *local_254;
  char *local_250;
  char *local_24c;
  char *local_248;
  char *local_244;
  char *local_240;
  char *local_23c;
  char *local_238;
  char *local_234;
  char *local_230;
  char *local_22c;
  char *local_228;
  char *local_224;
  char *local_220;
  char *local_21c;
  char *local_218;
  char *local_214;
  char *local_210;
  char *local_20c;
  char *local_208;
  char *local_204;
  char *local_200;
  char *local_1fc;
  char *local_1f8;
  char *local_1f4;
  char *local_1f0;
  char *local_1ec;
  char *local_1e8;
  char *local_1e4;
  char *local_1e0;
  char *local_1dc;
  char *local_1d8;
  char *local_1d4;
  char *local_1d0;
  char *local_1cc;
  char *local_1c8;
  char *local_1c4;
  char *local_1c0;
  char *local_1bc;
  char *local_1b8;
  char *local_1b4;
  char *local_1b0;
  char *local_1ac;
  char *local_1a8;
  char *local_1a4;
  char *local_1a0;
  char *local_19c;
  char *local_198;
  char *local_194;
  char *local_190;
  char *local_18c;
  char *local_188;
  char *local_184;
  char *local_180;
  char *local_17c;
  char *local_178;
  char *local_174;
  char *local_170;
  char *local_16c;
  char *local_168;
  char *local_164;
  char *local_160;
  char *local_15c;
  char *local_158;
  char *local_154;
  char *local_150;
  char *local_14c;
  char *local_148;
  char *local_144;
  char *local_140;
  char *local_13c;
  char *local_138;
  char *local_134;
  char *local_130;
  char *local_12c;
  char *local_128;
  char *local_124;
  char *local_120;
  char *local_11c;
  char *local_118;
  char *local_114;
  char *local_110;
  char *local_10c;
  char *local_108;
  char *local_104;
  char *local_100;
  char *local_fc;
  char *local_f8;
  char *local_f4;
  char *local_f0;
  char *local_ec;
  char *local_e8;
  char *local_e4;
  char *local_e0;
  char *local_dc;
  char *local_d8;
  char *local_d4;
  char *local_d0;
  char *local_cc;
  char *local_c8;
  char *local_c4;
  char *local_c0;
  char *local_bc;
  char *local_b8;
  char *local_b4;
  char *local_b0;
  char *local_ac;
  char *local_a8;
  char *local_a4;
  char *local_a0;
  char *local_9c;
  char *local_98;
  char *local_94;
  char *local_90;
  char *local_8c;
  char *local_88;
  char *local_84;
  char *local_80;
  char *local_7c;
  char *local_78;
  char *local_74;
  char *local_70;
  char *local_6c;
  char *local_68;
  char *local_64;
  char *local_60;
  char *local_5c;
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  char *local_44;
  char *local_40;
  char *local_3c;
  char *local_38;
  char *local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  
  local_2da = *(short *)(param_1 + 2) + 8;
  CStreamGuard::CStreamGuard(local_314,true);
  if (local_2da < 0x1000) {
                    /* try { // try from 084736bb to 0847abe4 has its CatchHandler @ 0847ac02 */
    pSVar6 = (Stream *)
             SmallStreamPool::Acquire
                       (GlobalData::s_small_stream_pool,"DispatchServerPacket.cpp",0x36);
    CStreamGuard::Set(local_314,pSVar6);
  }
  else if ((local_2da < 0x1000) || (0x3fff < local_2da)) {
    pSVar6 = (Stream *)
             BigStreamPool::Acquire(GlobalData::s_big_stream_pool,"DispatchServerPacket.cpp",0x3e);
    CStreamGuard::Set(local_314,pSVar6);
  }
  else {
    pSVar6 = (Stream *)
             StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x3a);
    CStreamGuard::Set(local_314,pSVar6);
  }
  uVar7 = (uint)*(ushort *)param_1;
  if (uVar7 == 0x70f) {
    local_110 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x1b0);
    iVar2 = *(int *)(local_110 + 10);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,iVar2);
    uVar1 = *(ushort *)(local_110 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_110,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x710) {
    if (uVar7 == 0x44e) {
      local_214 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x55);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_214,0x12);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x44f) {
      if (uVar7 == 0x423) {
        local_27c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xc6);
        iVar2 = *(int *)(local_27c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_27c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_27c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x424) {
        if (uVar7 == 0x3fd) {
          local_294 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x56);
          iVar2 = *(int *)(local_294 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_294,0x5a);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x3fe) {
          if (uVar7 == 0x3f2) {
            local_2ac = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x46);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            uVar1 = *(ushort *)(local_2ac + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_2ac,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x3f3) {
            if (uVar7 == 0x3ea) {
              local_2d4 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x42);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2d4,0xb);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else if (uVar7 < 0x3eb) {
              if (uVar7 != 1000) goto LAB_0847abe7;
              local_2d8 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x41);
              iVar2 = *(int *)(local_2d8 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2d8,0x33);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else if (uVar7 == 0x3ee) {
              local_2cc = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x43);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2cc,0xe);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x3ef) goto LAB_0847abe7;
              local_2b4 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x44);
              iVar2 = *(int *)(local_2b4 + 0xe);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_2b4,0x34);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x3f8) {
            local_2c4 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x121);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_2c4,0xb);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x3f9) {
            if (uVar7 == 0x3f3) {
              local_268 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x5e);
              iVar2 = *(int *)(local_268 + 0xf);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_268 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_268,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x3f7) goto LAB_0847abe7;
              local_1e8 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0xce);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_1e8,0x16);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x3f9) {
            local_2d0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x12d);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_2d0,10);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x3fc) goto LAB_0847abe7;
            local_288 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x59);
            iVar2 = *(int *)(local_288 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_288,0x12);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x407) {
          local_26c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x5d);
          iVar2 = *(int *)(local_26c + 0xb);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_26c,0x32);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x408) {
          if (uVar7 == 0x400) {
            local_284 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x5a);
            iVar2 = *(int *)(local_284 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_284 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_284,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x401) {
            if (uVar7 == 0x3fe) {
              local_290 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x57);
              iVar2 = *(int *)(local_290 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_290,0x55);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x3ff) goto LAB_0847abe7;
              local_28c = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x58);
              iVar2 = *(int *)(local_28c + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_28c,0x16);
              uVar9 = *(undefined4 *)(local_28c + 0x12);
              uVar3 = *(undefined4 *)(local_28c + 0xe);
              uVar4 = *(undefined4 *)(local_28c + 10);
              cMyTrace::cMyTrace(local_30c,
                                 "static bool CDispatchServerPacket::dispatchPacket(char*)",0x1a4,0)
              ;
              cMyTrace::operator()
                        (local_30c,
                         "[GUILD MARK CHANGE] Recv from guild server. (channel:%d, character:%u, guildkey:%u)"
                         ,uVar4,uVar3,uVar9);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x401) {
            local_280 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x5b);
            iVar2 = *(int *)(local_280 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_280 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_280,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x406) goto LAB_0847abe7;
            local_270 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x5c);
            iVar2 = *(int *)(local_270 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_270,0x233f);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x40c) {
          local_2a0 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x62);
          iVar2 = *(int *)(local_2a0 + 0x29);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_2a0,0x2d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x40d) {
          if (uVar7 == 0x40a) {
            local_298 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x60);
            iVar2 = *(int *)(local_298 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_298,0x139);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x40b) goto LAB_0847abe7;
            local_29c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x61);
            iVar2 = *(int *)(local_29c + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_29c,0x16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x40d) {
          local_264 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x5f);
          iVar2 = *(int *)(local_264 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_264,399);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x414) goto LAB_0847abe7;
          local_20c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x99);
          iVar2 = *(int *)(local_20c + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_20c,0x15c);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x437) {
        local_1d0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xde);
        iVar2 = *(int *)(local_1d0 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_1d0,0x34);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x438) {
        if (uVar7 == 0x430) {
          local_258 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x65);
          iVar2 = *(int *)(local_258 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_258,0x3a);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x431) {
          if (uVar7 == 0x42c) {
            local_250 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xd7);
            iVar2 = *(int *)(local_250 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_250,0x13);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x42d) {
            if (uVar7 == 0x424) {
              local_278 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,199);
              iVar2 = *(int *)(local_278 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_278 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_278,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x428) goto LAB_0847abe7;
              local_274 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,200);
              iVar2 = *(int *)(local_274 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_274 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_274,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x42d) {
            local_260 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xd8);
            iVar2 = *(int *)(local_260 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_260,0x77);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x42f) goto LAB_0847abe7;
            local_25c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,100);
            iVar2 = *(int *)(local_25c + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_25c,0x16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x434) {
          local_1dc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xdb);
          iVar2 = *(int *)(local_1dc + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1dc,0x16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x435) {
          if (uVar7 == 0x431) {
            local_254 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x66);
            iVar2 = *(int *)(local_254 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_254,0x2c);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x432) goto LAB_0847abe7;
            local_1e0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xda);
            iVar2 = *(int *)(local_1e0 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1e0,0x13);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x435) {
          local_1d8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xdc);
          iVar2 = *(int *)(local_1d8 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1d8,0x47);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x436) goto LAB_0847abe7;
          local_1d4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xdd);
          iVar2 = *(int *)(local_1d4 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1d4,0x16);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x444) {
        local_1a8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x123);
        iVar2 = *(int *)(local_1a8 + 0x12);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_1a8,0x2e);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x445) {
        if (uVar7 == 0x43d) {
          local_1c4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe7);
          iVar2 = *(int *)(local_1c4 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1c4,0x30);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x43e) {
          if (uVar7 == 0x439) {
            local_1c8 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xea);
            iVar2 = *(int *)(local_1c8 + 0x14);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1c8,0x52);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x43b) goto LAB_0847abe7;
            local_1c0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xe8);
            iVar2 = *(int *)(local_1c0 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1c0,0x16);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x43e) {
          local_1bc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe9);
          iVar2 = *(int *)(local_1bc + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1bc,0x12);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x43f) goto LAB_0847abe7;
          local_1b8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xed);
          iVar2 = *(int *)(local_1b8 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1b8,0x2d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x447) {
        local_1a0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x184);
        iVar2 = *(int *)(local_1a0 + 0x12);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_1a0,0x16);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x448) {
        if (uVar7 == 0x445) {
          local_1b4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x12a);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1b4,0x2e);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x446) goto LAB_0847abe7;
          local_1a4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x124);
          iVar2 = *(int *)(local_1a4 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1a4,0x2d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x44c) {
        local_2a8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x47);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2a8,0xe);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x44d) goto LAB_0847abe7;
        local_2a4 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x4a);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2a4,0x22);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x642) {
      local_204 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0xba);
      iVar2 = *(int *)(local_204 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_204,0x13);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x643) {
      if (uVar7 == 0x4bf) {
        local_22c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x74);
        iVar2 = *(int *)(local_22c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_22c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_22c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x4c0) {
        if (uVar7 == 0x4b9) {
          local_23c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x70);
          iVar2 = *(int *)(local_23c + 0xd);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_23c,0x39);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x4ba) {
          if (uVar7 == 0x4b6) {
            local_24c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6c);
            iVar2 = *(int *)(local_24c + 0xb);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_24c,0x38);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x4b7) {
            if (uVar7 == 0x44f) {
              local_21c = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x85);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_21c,0x12);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x450) goto LAB_0847abe7;
              local_218 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x86);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_218,0xe);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x4b7) {
            local_248 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6d);
            iVar2 = *(int *)(local_248 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_248,0x31);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x4b8) goto LAB_0847abe7;
            local_244 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6e);
            iVar2 = *(int *)(local_244 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_244,0x32);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x4bc) {
          local_234 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x72);
          iVar2 = *(int *)(local_234 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_234,0x31);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x4bd) {
          if (uVar7 == 0x4ba) {
            local_240 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x6f);
            iVar2 = *(int *)(local_240 + 0xd);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_240,0x39);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x4bb) goto LAB_0847abe7;
            local_238 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x71);
            iVar2 = *(int *)(local_238 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_238,0x31);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x4bd) {
          local_230 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x73);
          iVar2 = *(int *)(local_230 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_230,0x12);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x4be) goto LAB_0847abe7;
          local_228 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x75);
          iVar2 = *(int *)(local_228 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_228,0x1e1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x514) {
        local_210 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x82);
        iVar2 = *(int *)(local_210 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_210,0x12);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x515) {
        if (uVar7 == 0x4cb) {
          local_1cc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe5);
          iVar2 = *(int *)(local_1cc + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1cc,0x62);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x4cc) {
          if (uVar7 == 0x4c0) {
            local_224 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x76);
            iVar2 = *(int *)(local_224 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_224,0x38);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x4c1) goto LAB_0847abe7;
            local_220 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x7a);
            iVar2 = *(int *)(local_220 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_220,0x12);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x4cf) {
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xe6);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x4d2) goto LAB_0847abe7;
          local_160 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x176);
          iVar2 = *(int *)(local_160 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_160 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_160,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x5dd) {
        local_2b8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xad);
        iVar2 = *(int *)(local_2b8 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2b8,0x31);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x5de) {
        if (uVar7 == 0x546) {
          local_208 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xaa);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_208 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_208,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x5dc) goto LAB_0847abe7;
          local_2bc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xac);
          iVar2 = *(int *)(local_2bc + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_2bc,0x31);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x5e0) {
        local_2c0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xab);
        iVar2 = *(int *)(local_2c0 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2c0,0x19f);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x5e2) goto LAB_0847abe7;
        local_2b0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0xae);
        iVar2 = *(int *)(local_2b0 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2b0,0x3b);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x6d8) {
      local_174 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x174);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_174 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_174,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x6d9) {
      if (uVar7 < 0x6ad) {
        if ((uVar7 < 0x6ab) && (uVar7 != 0x6a5)) {
          if (uVar7 < 0x6a6) {
            if (uVar7 == 0x672) {
              local_200 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0xbc);
              iVar2 = *(int *)(local_200 + 0xe);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_200,0x3b);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x674) goto LAB_0847abe7;
              local_1fc = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0xbd);
              iVar2 = *(int *)(local_1fc + 0xe);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_1fc,0x31);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (1 < uVar7 - 0x6a8) {
LAB_0847abe7:
            uVar9 = 0;
            goto LAB_0847ac20;
          }
        }
      }
      else if (uVar7 != 0x6af) {
        if (uVar7 < 0x6b0) {
          if (uVar7 != 0x6ae) goto LAB_0847abe7;
        }
        else if (uVar7 == 0x6b0) {
          local_158 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x17b);
          iVar2 = *(int *)(local_158 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_158 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_158,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x6b2) goto LAB_0847abe7;
          local_138 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x198);
          iVar2 = *(int *)(local_138 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_138,0x17);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
    }
    else if (uVar7 == 0x6ea) {
      local_134 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x199);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_134,10);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x6eb) {
      if (uVar7 == 0x6e0) {
        local_15c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x17a);
        iVar2 = *(int *)(local_15c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_15c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_15c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x6e1) {
        if (uVar7 == 0x6dc) {
          local_16c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x171);
          iVar2 = *(int *)(local_16c + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_16c + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_16c,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x6de) goto LAB_0847abe7;
          local_168 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x172);
          iVar2 = *(int *)(local_168 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_168 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_168,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x6e2) {
        local_164 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x173);
        iVar2 = *(int *)(local_164 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_164 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_164,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x6e5) goto LAB_0847abe7;
        local_13c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x18e);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_13c,10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x70c) {
      local_11c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1ad);
      iVar2 = *(int *)(local_11c + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_11c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_11c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x70d) {
      if (uVar7 == 0x70a) {
        local_128 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1aa);
        iVar2 = *(int *)(local_128 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_128 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_128,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x70b) goto LAB_0847abe7;
        local_120 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1ac);
        iVar2 = *(int *)(local_120 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_120 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_120,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x70d) {
      local_118 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1ae);
      iVar2 = *(int *)(local_118 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_118 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_118,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x70e) goto LAB_0847abe7;
      local_114 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1af);
      iVar2 = *(int *)(local_114 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_114 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_114,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x1b5b) {
    local_c4 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x1d6);
    iVar2 = *(int *)(local_c4 + 0xe);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,iVar2);
    uVar1 = *(ushort *)(local_c4 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_c4,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x1b5c) {
    if (uVar7 == 0xfab) {
      local_180 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x160);
      iVar2 = *(int *)(local_180 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_180 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_180,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0xfac) {
      if (uVar7 == 0xb57) {
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x155);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0xb58) {
        if (uVar7 == 0x9dd) {
          local_1f4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x94);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1f4,0x30);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x9de) {
          if (uVar7 == 0x76c) {
            local_1e4 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xd3);
            iVar2 = *(int *)(local_1e4 + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1e4,0x34);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else if (uVar7 < 0x76d) {
            if (uVar7 == 0x712) {
              local_124 = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x1ab);
              iVar2 = *(int *)(local_124 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_124 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_124,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
            else {
              if (uVar7 != 0x713) goto LAB_0847abe7;
              local_10c = param_1;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,0x1b2);
              iVar2 = *(int *)(local_10c + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
              CStreamGuard::operator<<(pCVar8,iVar2);
              uVar1 = *(ushort *)(local_10c + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
              CStreamGuard::put_binary(pCVar8,local_10c,(uint)uVar1);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
            }
          }
          else if (uVar7 == 0x9d3) {
            local_f8 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x1b5);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            uVar1 = *(ushort *)(local_f8 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_f8,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x9dc) goto LAB_0847abe7;
            local_1f8 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x92);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1f8,0x10b);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xa8c) {
          local_19c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x125);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_19c,0x3d);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0xa8d) {
          if (uVar7 == 0x9de) {
            local_1ec = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xb8);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1ec,0x14);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,5,local_314);
          }
          else {
            if (uVar7 != 0x9e0) goto LAB_0847abe7;
            local_1f0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0xb7);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_1f0,0x10a);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xb54) {
          local_1b0 = param_1;
          if (param_1[10] == '\0') {
            DB_ReloadAutoPunishRuleBackIP::makeRequest();
          }
          else {
            DB_ReloadAutoPunishRuleHackType::makeRequest();
          }
        }
        else {
          if (uVar7 != 0xb55) goto LAB_0847abe7;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x126);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0xb64) {
        local_64 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x25b);
        iVar2 = *(int *)(local_64 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_64 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_64,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0xb65) {
        if (uVar7 == 0xb5f) {
          local_1ac = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x191);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_1ac,0xc);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0xb60) {
          if (uVar7 == 0xb58) {
            local_198 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x157);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            uVar1 = *(ushort *)(local_198 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_198,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0xb5e) goto LAB_0847abe7;
            local_194 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x17d);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_194,0x4bd);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xb60) {
          local_12c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1a2);
          iVar2 = *(int *)(local_12c + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_12c + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_12c,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0xb61) goto LAB_0847abe7;
          local_d4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1cd);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_d4 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_d4,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0xfa2) {
        local_18c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x133);
        iVar2 = *(int *)(local_18c + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_18c,0x17f8);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0xfa3) {
        if (uVar7 == 0xb65) {
          local_58 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x274);
          iVar2 = *(int *)(local_58 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_58 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_58,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
LAB_0847a31b:
          cMyTrace::cMyTrace(local_2fc,"static bool CDispatchServerPacket::dispatchPacket(char*)",
                             0xdbf,5);
          cMyTrace::operator()(local_2fc,"TOD: bug random select");
        }
        else {
          if (uVar7 != 0xc1c) goto LAB_0847abe7;
          local_190 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xef);
          iVar2 = *(int *)(local_190 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_190,0x26);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0xfa3) {
        local_188 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x134);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_188,0x2a);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0xfa5) goto LAB_0847abe7;
        local_184 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x135);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_184,0x80);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
      }
    }
    else if (uVar7 == 0x1039) {
      local_100 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x192);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_100 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_100,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x103a) {
      if (uVar7 == 0xfe7) {
        CHadesServerProxy::ConnTcpHadesSvr(GlobalData::s_hades_proxy);
      }
      else if (uVar7 < 0xfe8) {
        if (uVar7 == 0xfae) {
          local_170 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x170);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_170 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_170,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0xfaf) {
          if (uVar7 == 0xfac) {
            local_17c = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x161);
            iVar2 = *(int *)(local_17c + 10);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_17c + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_17c,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0xfad) goto LAB_0847abe7;
            local_178 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x162);
            iVar2 = *(int *)(local_178 + 0xb);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_178 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_178,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0xfaf) {
          local_154 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x17e);
          iVar2 = *(int *)(local_154 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_154 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_154,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0xfe6) goto LAB_0847abe7;
          local_68 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x2b6);
          if (*(int *)(local_68 + 0xe) == 0) {
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,-1);
          }
          else {
            iVar2 = *(int *)(local_68 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
          }
          uVar1 = *(ushort *)(local_68 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_68,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1006) {
        local_140 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x187);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_140 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_140,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x1007) {
        if (uVar7 == 0x1004) {
          local_14c = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x185);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_14c + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_14c,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1005) goto LAB_0847abe7;
          local_148 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x186);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_148 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_148,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x100a) {
        local_144 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x188);
        iVar2 = *(int *)(local_144 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_144 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_144,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x100f) goto LAB_0847abe7;
        local_130 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1a0);
        iVar2 = *(int *)(local_130 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_130 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_130,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1777) {
      local_e8 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1bc);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_e8 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_e8,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1778) {
      if (uVar7 == 0x1774) {
        local_f0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1ba);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_f0 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_f0,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x1775) {
        if (uVar7 == 0x103a) {
          local_fc = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x194);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_fc + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_fc,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1773) goto LAB_0847abe7;
          local_f4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1b9);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_f4 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_f4,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1775) {
        local_e0 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1be);
        iVar2 = *(int *)(local_e0 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_e0 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_e0,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x1776) goto LAB_0847abe7;
        local_ec = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1bb);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_ec + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_ec,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x177e) {
      local_d8 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1c0);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_d8 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_d8,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x177f) {
      if (uVar7 == 0x1778) {
        local_e4 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1bd);
        iVar2 = *(int *)(local_e4 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_e4 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_e4,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x177a) goto LAB_0847abe7;
        local_dc = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1bf);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_dc + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_dc,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x17c0) {
      local_d0 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1cf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_d0 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_d0,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x17c2) goto LAB_0847abe7;
      local_cc = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1d1);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_cc + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_cc,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x2332) {
    local_104 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x1b4);
    iVar2 = *(int *)(local_104 + 0xf);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,iVar2);
    uVar1 = *(ushort *)(local_104 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_104,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x2333) {
    if (uVar7 == 0x1bbd) {
      local_9c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x214);
      iVar2 = *(int *)(local_9c + 0xf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_9c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_9c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1bbe) {
      if (uVar7 == 0x1b64) {
        local_ac = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1dc);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_ac + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_ac,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
      }
      else if (uVar7 < 0x1b65) {
        if (uVar7 == 0x1b61) {
          local_b8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1d9);
          iVar2 = *(int *)(local_b8 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_b8 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_b8,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else if (uVar7 < 0x1b62) {
          if (uVar7 == 0x1b5d) {
            local_c0 = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x1d7);
            iVar2 = *(int *)(local_c0 + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_c0 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_c0,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
          else {
            if (uVar7 != 0x1b5f) goto LAB_0847abe7;
            local_bc = param_1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,0x1d8);
            iVar2 = *(int *)(local_bc + 0xe);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
            CStreamGuard::operator<<(pCVar8,iVar2);
            uVar1 = *(ushort *)(local_bc + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
            CStreamGuard::put_binary(pCVar8,local_bc,(uint)uVar1);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
          }
        }
        else if (uVar7 == 0x1b62) {
          local_b4 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1da);
          iVar2 = *(int *)(local_b4 + 0xe);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_b4 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_b4,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1b63) goto LAB_0847abe7;
          local_b0 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1db);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_b0 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_b0,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
        }
      }
      else if (uVar7 == 0x1b6a) {
        local_150 = param_1;
        village_attacked::CVillageMonsterMgr::SetRewardType
                  (GlobalData::s_villageMonsterMgr,*(undefined4 *)(param_1 + 10));
        iVar2 = *(int *)(local_150 + 10);
        if (iVar2 == 1) {
          village_attacked::CRevengeDungeon::OpenRevengeDungeon(GlobalData::s_revengeDungeonMgr);
        }
        else if ((iVar2 == 2) || (iVar2 == 0)) {
          village_attacked::CRevengeDungeon::CloseRevengeDungeon(GlobalData::s_revengeDungeonMgr);
        }
        village_attacked::CRevengeDungeon::SetCloseTime
                  (GlobalData::s_revengeDungeonMgr,*(uint *)(local_150 + 0xe));
        printf("[Packet_Request_Revenge] isRevengeDungeonOpen : %d, DungeonClose_Remain_Time : %u\n"
               ,*(undefined4 *)(local_150 + 10),*(undefined4 *)(local_150 + 0xe));
      }
      else if (uVar7 < 0x1b6b) {
        if (uVar7 == 0x1b65) {
          local_a8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x1dd);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,-1);
          uVar1 = *(ushort *)(local_a8 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_a8,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_314);
        }
        else {
          if (uVar7 != 0x1b66) goto LAB_0847abe7;
          local_c8 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0xca);
          iVar2 = *(int *)(local_c8 + 10);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_c8,0x15f);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1b6c) {
        local_8c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x209);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_8c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_8c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x1b6d) goto LAB_0847abe7;
        local_88 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x20a);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_88 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_88,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1f42) {
      local_90 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1f8);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_90 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_90,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1f43) {
      if (uVar7 == 0x1bc7) {
        local_70 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x21d);
        iVar2 = *(int *)(local_70 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_70 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_70,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 < 0x1bc8) {
        if (uVar7 == 0x1bc1) {
          local_98 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x215);
          iVar2 = *(int *)(local_98 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_98 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_98,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
        else {
          if (uVar7 != 0x1bc3) goto LAB_0847abe7;
          local_74 = param_1;
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,0x21b);
          iVar2 = *(int *)(local_74 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
          CStreamGuard::operator<<(pCVar8,iVar2);
          uVar1 = *(ushort *)(local_74 + 2);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
          CStreamGuard::put_binary(pCVar8,local_74,(uint)uVar1);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
        }
      }
      else if (uVar7 == 0x1bc8) {
        local_6c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x21e);
        iVar2 = *(int *)(local_6c + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_6c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_6c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 8000) goto LAB_0847abe7;
        local_94 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x1f7);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_94 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_94,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1f4b) {
      local_7c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x211);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_7c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_7c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x1f4c) {
      if (uVar7 == 0x1f45) {
        local_84 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x20b);
        iVar2 = *(int *)(local_84 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_84 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_84,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x1f4a) goto LAB_0847abe7;
        local_80 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x210);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_80 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_80,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x1f4c) {
      local_78 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x212);
      iVar2 = *(int *)(local_78 + 0xe);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_78 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_78,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 9000) goto LAB_0847abe7;
      local_108 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x1b3);
      iVar2 = *(int *)(local_108 + 0xf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_108 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_108,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27dc) {
    local_38 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x2c8);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,-1);
    uVar1 = *(ushort *)(local_38 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_38,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x27dd) {
    if (uVar7 == 0x2719) {
      local_50 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2a6);
      iVar2 = *(int *)(local_50 + 0xf);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_50 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_50,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x271a) {
      if (uVar7 == 0x2713) {
        cMyTrace::cMyTrace(local_2ec,"static bool CDispatchServerPacket::dispatchPacket(char*)",
                           0xdcc,5);
        cMyTrace::operator()(local_2ec,"TOD: bug reload");
      }
      else if (uVar7 < 0x2714) {
        if (uVar7 != 0x2711) {
          if (uVar7 == 0x2712) goto LAB_0847a31b;
          goto LAB_0847abe7;
        }
        local_60 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x260);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_60,0x10e);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else if (uVar7 == 0x2717) {
        local_5c = param_1;
        CSwitchLog::SetLogWriteFlag(*(int *)(param_1 + 10));
      }
      else {
        if (uVar7 != 0x2718) goto LAB_0847abe7;
        local_54 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2a5);
        iVar2 = *(int *)(local_54 + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_54 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_54,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x27d9) {
      local_44 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2c5);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_44 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_44,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x27da) {
      if (uVar7 == 0x271a) {
        local_4c = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2a7);
        iVar2 = *(int *)(local_4c + 10);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_4c + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_4c,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x271b) goto LAB_0847abe7;
        local_48 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2a8);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        uVar1 = *(ushort *)(local_48 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_48,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x27da) {
      local_40 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2c6);
      iVar2 = *(int *)(local_40 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_40 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_40,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x27db) goto LAB_0847abe7;
      local_3c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2c7);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_3c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_3c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27f2) {
    local_24 = param_1;
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,0x302);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
    CStreamGuard::operator<<(pCVar8,-1);
    uVar1 = *(ushort *)(local_24 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_24,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x27f3) {
    if (uVar7 == 0x27e7) {
      local_28 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2fa);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_28 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_28,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else if (uVar7 < 0x27e8) {
      if (uVar7 == 0x27df) {
        local_34 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2ce);
        iVar2 = *(int *)(local_34 + 0xe);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,iVar2);
        uVar1 = *(ushort *)(local_34 + 2);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_34,(uint)uVar1);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
      else {
        if (uVar7 != 0x27e2) goto LAB_0847abe7;
        local_2c8 = param_1;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,0x2f7);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
        CStreamGuard::operator<<(pCVar8,-1);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
        CStreamGuard::put_binary(pCVar8,local_2c8,10);
        MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
      }
    }
    else if (uVar7 == 0x27e8) {
      local_30 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2fb);
      iVar2 = *(int *)(local_30 + 10);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,iVar2);
      uVar1 = *(ushort *)(local_30 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_30,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x27e9) goto LAB_0847abe7;
      local_2c = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x2fc);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_2c + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_2c,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27fa) {
    local_a0 = param_1;
    ARAD::DISPATCHER::make_internal_stream_jpn(local_314,0x2b,0xffffffff);
    uVar1 = *(ushort *)(local_a0 + 2);
    pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
    CStreamGuard::put_binary(pCVar8,local_a0,(uint)uVar1);
    MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
  }
  else if (uVar7 < 0x27fb) {
    if (uVar7 == 0x27f8) {
      local_20 = param_1;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,0x32f);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_314);
      CStreamGuard::operator<<(pCVar8,-1);
      uVar1 = *(ushort *)(local_20 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_20,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
    else {
      if (uVar7 != 0x27f9) goto LAB_0847abe7;
      local_a4 = param_1;
      ARAD::DISPATCHER::make_internal_stream_jpn(local_314,0x2a,0xffffffff);
      uVar1 = *(ushort *)(local_a4 + 2);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_314);
      CStreamGuard::put_binary(pCVar8,local_a4,(uint)uVar1);
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_314);
    }
  }
  else if (uVar7 == 0x27fe) {
    this = (RestrictGeolocation *)ARAD::Singleton<RestrictGeolocation>::Get();
    cVar5 = RestrictGeolocation::initGeolocation(this);
    if (cVar5 != '\x01') {
      LogManager::logFormat
                (1,"DispatchServerPacket.cpp",
                 "static bool CDispatchServerPacket::dispatchPacket(char*)",0x1143,
                 "GEO IP TABLE RELOAD FAIL");
    }
  }
  else {
    if (uVar7 != 0x27ff) goto LAB_0847abe7;
    ARAD::Singleton<ServiceRestrictManager>::Get();
    ServiceRestrictManager::loadPolicy();
  }
  uVar9 = 1;
LAB_0847ac20:
  CStreamGuard::~CStreamGuard(local_314);
  return uVar9;
}

```

---

## dispatchPointPacket

```asm
// === 0847c1fe CDispatchServerPacket::dispatchPointPacket  [0x0847c1fe-0x847dc9d] ===
 847c1fe:	55                   	push   %ebp
 847c1ff:	89 e5                	mov    %esp,%ebp
 847c201:	56                   	push   %esi
 847c202:	53                   	push   %ebx
 847c203:	81 ec 40 01 00 00    	sub    $0x140,%esp
 847c209:	8b 45 08             	mov    0x8(%ebp),%eax
 847c20c:	89 04 24             	mov    %eax,(%esp)
 847c20f:	e8 f8 ba e7 ff       	call   82f7d0c <_ZN3nsl13PACKET_HEADER11getPacketIDEv>
 847c214:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 847c21a:	8b 45 08             	mov    0x8(%ebp),%eax
 847c21d:	89 04 24             	mov    %eax,(%esp)
 847c220:	e8 03 bb e7 ff       	call   82f7d28 <_ZN3nsl13PACKET_HEADER11getCategoryEv>
 847c225:	89 85 78 ff ff ff    	mov    %eax,-0x88(%ebp)
 847c22b:	83 bd 78 ff ff ff 13 	cmpl   $0x13,-0x88(%ebp)
 847c232:	0f 85 57 1a 00 00    	jne    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c238:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 847c23e:	83 f8 09             	cmp    $0x9,%eax
 847c241:	0f 84 e6 0e 00 00    	je     847d12d <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xf2f>
 847c247:	83 f8 09             	cmp    $0x9,%eax
 847c24a:	77 60                	ja     847c2ac <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xae>
 847c24c:	83 f8 04             	cmp    $0x4,%eax
 847c24f:	0f 84 db 05 00 00    	je     847c830 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x632>
 847c255:	83 f8 04             	cmp    $0x4,%eax
 847c258:	77 29                	ja     847c283 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x85>
 847c25a:	83 f8 01             	cmp    $0x1,%eax
 847c25d:	0f 84 4d 02 00 00    	je     847c4b0 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x2b2>
 847c263:	83 f8 01             	cmp    $0x1,%eax
 847c266:	0f 82 b4 00 00 00    	jb     847c320 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x122>
 847c26c:	83 f8 02             	cmp    $0x2,%eax
 847c26f:	0f 84 29 03 00 00    	je     847c59e <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x3a0>
 847c275:	83 f8 03             	cmp    $0x3,%eax
 847c278:	0f 84 5e 04 00 00    	je     847c6dc <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x4de>
 847c27e:	e9 d3 19 00 00       	jmp    847dc56 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a58>
 847c283:	83 f8 06             	cmp    $0x6,%eax
 847c286:	0f 84 22 08 00 00    	je     847caae <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x8b0>
 847c28c:	83 f8 06             	cmp    $0x6,%eax
 847c28f:	0f 82 b0 06 00 00    	jb     847c945 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x747>
 847c295:	83 f8 07             	cmp    $0x7,%eax
 847c298:	0f 84 25 09 00 00    	je     847cbc3 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x9c5>
 847c29e:	83 f8 08             	cmp    $0x8,%eax
 847c2a1:	0f 84 e2 0b 00 00    	je     847ce89 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xc8b>
 847c2a7:	e9 aa 19 00 00       	jmp    847dc56 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a58>
 847c2ac:	83 f8 0e             	cmp    $0xe,%eax
 847c2af:	0f 84 4c 18 00 00    	je     847db01 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1903>
 847c2b5:	83 f8 0e             	cmp    $0xe,%eax
 847c2b8:	77 29                	ja     847c2e3 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xe5>
 847c2ba:	83 f8 0b             	cmp    $0xb,%eax
 847c2bd:	0f 84 0a 11 00 00    	je     847d3cd <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x11cf>
 847c2c3:	83 f8 0b             	cmp    $0xb,%eax
 847c2c6:	0f 82 c2 19 00 00    	jb     847dc8e <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a90>
 847c2cc:	83 f8 0c             	cmp    $0xc,%eax
 847c2cf:	0f 84 53 12 00 00    	je     847d528 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x132a>
 847c2d5:	83 f8 0d             	cmp    $0xd,%eax
 847c2d8:	0f 84 38 13 00 00    	je     847d616 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1418>
 847c2de:	e9 73 19 00 00       	jmp    847dc56 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a58>
 847c2e3:	3d 19 27 00 00       	cmp    $0x2719,%eax
 847c2e8:	0f 84 2d 15 00 00    	je     847d81b <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x161d>
 847c2ee:	3d 19 27 00 00       	cmp    $0x2719,%eax
 847c2f3:	77 10                	ja     847c305 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x107>
 847c2f5:	3d 18 27 00 00       	cmp    $0x2718,%eax
 847c2fa:	0f 84 23 14 00 00    	je     847d723 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1525>
 847c300:	e9 51 19 00 00       	jmp    847dc56 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a58>
 847c305:	3d 1a 27 00 00       	cmp    $0x271a,%eax
 847c30a:	0f 84 03 16 00 00    	je     847d913 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1715>
 847c310:	3d 1b 27 00 00       	cmp    $0x271b,%eax
 847c315:	0f 84 f0 16 00 00    	je     847da0b <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x180d>
 847c31b:	e9 36 19 00 00       	jmp    847dc56 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a58>
 847c320:	8b 45 08             	mov    0x8(%ebp),%eax
 847c323:	89 85 7c ff ff ff    	mov    %eax,-0x84(%ebp)
 847c329:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 847c32f:	8b 40 0e             	mov    0xe(%eax),%eax
 847c332:	85 c0                	test   %eax,%eax
 847c334:	0f 85 ee 00 00 00    	jne    847c428 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x22a>
 847c33a:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c33f:	c7 44 24 08 b4 14 00 	movl   $0x14b4,0x8(%esp)
 847c346:	00 
 847c347:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c34e:	08 
 847c34f:	89 04 24             	mov    %eax,(%esp)
 847c352:	e8 2f 37 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c357:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c35e:	00 
 847c35f:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c363:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847c369:	89 04 24             	mov    %eax,(%esp)
 847c36c:	e8 b5 c8 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c371:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847c377:	89 04 24             	mov    %eax,(%esp)
 847c37a:	e8 c7 c8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c37f:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847c386:	00 
 847c387:	89 04 24             	mov    %eax,(%esp)
 847c38a:	e8 c7 c8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c38f:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847c395:	89 04 24             	mov    %eax,(%esp)
 847c398:	e8 a9 c8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c39d:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847c3a4:	ff 
 847c3a5:	89 04 24             	mov    %eax,(%esp)
 847c3a8:	e8 a9 c8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c3ad:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847c3b3:	89 04 24             	mov    %eax,(%esp)
 847c3b6:	e8 93 c8 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c3bb:	89 04 24             	mov    %eax,(%esp)
 847c3be:	e8 8f 19 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847c3c3:	89 45 80             	mov    %eax,-0x80(%ebp)
 847c3c6:	8b 45 80             	mov    -0x80(%ebp),%eax
 847c3c9:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847c3cf:	8b 45 80             	mov    -0x80(%ebp),%eax
 847c3d2:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 847c3d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c3db:	8d 95 6c ff ff ff    	lea    -0x94(%ebp),%edx
 847c3e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c3e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c3ec:	00 
 847c3ed:	89 04 24             	mov    %eax,(%esp)
 847c3f0:	e8 e9 4b 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c3f5:	eb 1e                	jmp    847c415 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x217>
 847c3f7:	89 d3                	mov    %edx,%ebx
 847c3f9:	89 c6                	mov    %eax,%esi
 847c3fb:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847c401:	89 04 24             	mov    %eax,(%esp)
 847c404:	e8 c9 04 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c409:	89 f0                	mov    %esi,%eax
 847c40b:	89 da                	mov    %ebx,%edx
 847c40d:	89 04 24             	mov    %eax,(%esp)
 847c410:	e8 3b 73 66 00       	call   8ae3750 <_Unwind_Resume>
 847c415:	8d 85 6c ff ff ff    	lea    -0x94(%ebp),%eax
 847c41b:	89 04 24             	mov    %eax,(%esp)
 847c41e:	e8 af 04 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c423:	e9 67 18 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c428:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 847c42e:	8b 40 0e             	mov    0xe(%eax),%eax
 847c431:	83 f8 02             	cmp    $0x2,%eax
 847c434:	75 0a                	jne    847c440 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x242>
 847c436:	e8 1d e4 1b 00       	call   863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>
 847c43b:	e9 4f 18 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c440:	8b 85 7c ff ff ff    	mov    -0x84(%ebp),%eax
 847c446:	8b 40 0e             	mov    0xe(%eax),%eax
 847c449:	83 f8 01             	cmp    $0x1,%eax
 847c44c:	75 31                	jne    847c47f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x281>
 847c44e:	c7 44 24 10 64 00 c7 	movl   $0x8c70064,0x10(%esp)
 847c455:	08 
 847c456:	c7 44 24 0c c8 14 00 	movl   $0x14c8,0xc(%esp)
 847c45d:	00 
 847c45e:	c7 44 24 08 80 0e c7 	movl   $0x8c70e80,0x8(%esp)
 847c465:	08 
 847c466:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c46d:	08 
 847c46e:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847c475:	e8 90 77 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847c47a:	e9 10 18 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c47f:	c7 44 24 10 88 00 c7 	movl   $0x8c70088,0x10(%esp)
 847c486:	08 
 847c487:	c7 44 24 0c cc 14 00 	movl   $0x14cc,0xc(%esp)
 847c48e:	00 
 847c48f:	c7 44 24 08 80 0e c7 	movl   $0x8c70e80,0x8(%esp)
 847c496:	08 
 847c497:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c49e:	08 
 847c49f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847c4a6:	e8 5f 77 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847c4ab:	e9 df 17 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c4b0:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c4b5:	c7 44 24 08 d5 14 00 	movl   $0x14d5,0x8(%esp)
 847c4bc:	00 
 847c4bd:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c4c4:	08 
 847c4c5:	89 04 24             	mov    %eax,(%esp)
 847c4c8:	e8 b9 35 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c4cd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c4d4:	00 
 847c4d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c4d9:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847c4df:	89 04 24             	mov    %eax,(%esp)
 847c4e2:	e8 3f c7 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c4e7:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847c4ed:	89 04 24             	mov    %eax,(%esp)
 847c4f0:	e8 51 c7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c4f5:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847c4fc:	00 
 847c4fd:	89 04 24             	mov    %eax,(%esp)
 847c500:	e8 51 c7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c505:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847c50b:	89 04 24             	mov    %eax,(%esp)
 847c50e:	e8 33 c7 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c513:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847c51a:	ff 
 847c51b:	89 04 24             	mov    %eax,(%esp)
 847c51e:	e8 33 c7 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c523:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847c529:	89 04 24             	mov    %eax,(%esp)
 847c52c:	e8 1d c7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c531:	89 04 24             	mov    %eax,(%esp)
 847c534:	e8 19 18 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847c539:	89 45 84             	mov    %eax,-0x7c(%ebp)
 847c53c:	8b 45 84             	mov    -0x7c(%ebp),%eax
 847c53f:	c6 40 04 00          	movb   $0x0,0x4(%eax)
 847c543:	8b 45 84             	mov    -0x7c(%ebp),%eax
 847c546:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847c54c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c551:	8d 95 64 ff ff ff    	lea    -0x9c(%ebp),%edx
 847c557:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c55b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c562:	00 
 847c563:	89 04 24             	mov    %eax,(%esp)
 847c566:	e8 73 4a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c56b:	eb 1e                	jmp    847c58b <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x38d>
 847c56d:	89 d3                	mov    %edx,%ebx
 847c56f:	89 c6                	mov    %eax,%esi
 847c571:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847c577:	89 04 24             	mov    %eax,(%esp)
 847c57a:	e8 53 03 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c57f:	89 f0                	mov    %esi,%eax
 847c581:	89 da                	mov    %ebx,%edx
 847c583:	89 04 24             	mov    %eax,(%esp)
 847c586:	e8 c5 71 66 00       	call   8ae3750 <_Unwind_Resume>
 847c58b:	8d 85 64 ff ff ff    	lea    -0x9c(%ebp),%eax
 847c591:	89 04 24             	mov    %eax,(%esp)
 847c594:	e8 39 03 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c599:	e9 f1 16 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c59e:	8b 45 08             	mov    0x8(%ebp),%eax
 847c5a1:	89 45 88             	mov    %eax,-0x78(%ebp)
 847c5a4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c5a9:	c7 44 24 08 e9 14 00 	movl   $0x14e9,0x8(%esp)
 847c5b0:	00 
 847c5b1:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c5b8:	08 
 847c5b9:	89 04 24             	mov    %eax,(%esp)
 847c5bc:	e8 c5 34 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c5c1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c5c8:	00 
 847c5c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c5cd:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847c5d3:	89 04 24             	mov    %eax,(%esp)
 847c5d6:	e8 4b c6 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c5db:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847c5e1:	89 04 24             	mov    %eax,(%esp)
 847c5e4:	e8 5d c6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c5e9:	c7 44 24 04 f0 00 00 	movl   $0xf0,0x4(%esp)
 847c5f0:	00 
 847c5f1:	89 04 24             	mov    %eax,(%esp)
 847c5f4:	e8 5d c6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c5f9:	8b 45 88             	mov    -0x78(%ebp),%eax
 847c5fc:	8b 58 12             	mov    0x12(%eax),%ebx
 847c5ff:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847c605:	89 04 24             	mov    %eax,(%esp)
 847c608:	e8 39 c6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c60d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847c611:	89 04 24             	mov    %eax,(%esp)
 847c614:	e8 3d c6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c619:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847c61f:	89 04 24             	mov    %eax,(%esp)
 847c622:	e8 27 c6 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c627:	89 04 24             	mov    %eax,(%esp)
 847c62a:	e8 39 17 00 00       	call   847dd68 <_ZN12CStreamGuard11GetInBufferI28SIG_AUCTION_RESULT_ASK_PRICEEEPT_v>
 847c62f:	89 45 8c             	mov    %eax,-0x74(%ebp)
 847c632:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847c635:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847c63b:	8b 45 88             	mov    -0x78(%ebp),%eax
 847c63e:	8b 50 16             	mov    0x16(%eax),%edx
 847c641:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847c644:	89 50 04             	mov    %edx,0x4(%eax)
 847c647:	8b 45 88             	mov    -0x78(%ebp),%eax
 847c64a:	8b 50 1a             	mov    0x1a(%eax),%edx
 847c64d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847c650:	89 50 08             	mov    %edx,0x8(%eax)
 847c653:	c7 45 90 00 00 00 00 	movl   $0x0,-0x70(%ebp)
 847c65a:	eb 23                	jmp    847c67f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x481>
 847c65c:	8b 55 90             	mov    -0x70(%ebp),%edx
 847c65f:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847c662:	c7 44 90 0c 00 00 00 	movl   $0x0,0xc(%eax,%edx,4)
 847c669:	00 
 847c66a:	8b 55 90             	mov    -0x70(%ebp),%edx
 847c66d:	8b 45 8c             	mov    -0x74(%ebp),%eax
 847c670:	83 c2 04             	add    $0x4,%edx
 847c673:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 847c67a:	00 
 847c67b:	83 45 90 01          	addl   $0x1,-0x70(%ebp)
 847c67f:	83 7d 90 02          	cmpl   $0x2,-0x70(%ebp)
 847c683:	0f 9e c0             	setle  %al
 847c686:	84 c0                	test   %al,%al
 847c688:	75 d2                	jne    847c65c <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x45e>
 847c68a:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c68f:	8d 95 5c ff ff ff    	lea    -0xa4(%ebp),%edx
 847c695:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c699:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c6a0:	00 
 847c6a1:	89 04 24             	mov    %eax,(%esp)
 847c6a4:	e8 35 49 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c6a9:	eb 1e                	jmp    847c6c9 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x4cb>
 847c6ab:	89 d3                	mov    %edx,%ebx
 847c6ad:	89 c6                	mov    %eax,%esi
 847c6af:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847c6b5:	89 04 24             	mov    %eax,(%esp)
 847c6b8:	e8 15 02 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c6bd:	89 f0                	mov    %esi,%eax
 847c6bf:	89 da                	mov    %ebx,%edx
 847c6c1:	89 04 24             	mov    %eax,(%esp)
 847c6c4:	e8 87 70 66 00       	call   8ae3750 <_Unwind_Resume>
 847c6c9:	8d 85 5c ff ff ff    	lea    -0xa4(%ebp),%eax
 847c6cf:	89 04 24             	mov    %eax,(%esp)
 847c6d2:	e8 fb 01 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c6d7:	e9 b3 15 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c6dc:	8b 45 08             	mov    0x8(%ebp),%eax
 847c6df:	89 45 94             	mov    %eax,-0x6c(%ebp)
 847c6e2:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c6e7:	c7 44 24 08 02 15 00 	movl   $0x1502,0x8(%esp)
 847c6ee:	00 
 847c6ef:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c6f6:	08 
 847c6f7:	89 04 24             	mov    %eax,(%esp)
 847c6fa:	e8 87 33 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c6ff:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c706:	00 
 847c707:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c70b:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847c711:	89 04 24             	mov    %eax,(%esp)
 847c714:	e8 0d c5 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c719:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847c71f:	89 04 24             	mov    %eax,(%esp)
 847c722:	e8 1f c5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c727:	c7 44 24 04 f1 00 00 	movl   $0xf1,0x4(%esp)
 847c72e:	00 
 847c72f:	89 04 24             	mov    %eax,(%esp)
 847c732:	e8 1f c5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c737:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c73a:	8b 58 12             	mov    0x12(%eax),%ebx
 847c73d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847c743:	89 04 24             	mov    %eax,(%esp)
 847c746:	e8 fb c4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c74b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847c74f:	89 04 24             	mov    %eax,(%esp)
 847c752:	e8 ff c4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c757:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847c75d:	89 04 24             	mov    %eax,(%esp)
 847c760:	e8 e9 c4 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c765:	89 04 24             	mov    %eax,(%esp)
 847c768:	e8 11 16 00 00       	call   847dd7e <_ZN12CStreamGuard11GetInBufferI40SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUMEEPT_v>
 847c76d:	89 45 98             	mov    %eax,-0x68(%ebp)
 847c770:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c773:	8b 50 16             	mov    0x16(%eax),%edx
 847c776:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c779:	89 50 04             	mov    %edx,0x4(%eax)
 847c77c:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c77f:	0f b7 50 1a          	movzwl 0x1a(%eax),%edx
 847c783:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c786:	66 89 50 08          	mov    %dx,0x8(%eax)
 847c78a:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c78d:	0f b6 50 1c          	movzbl 0x1c(%eax),%edx
 847c791:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c794:	88 50 0a             	mov    %dl,0xa(%eax)
 847c797:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c79a:	0f b7 50 1d          	movzwl 0x1d(%eax),%edx
 847c79e:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c7a1:	66 89 50 0b          	mov    %dx,0xb(%eax)
 847c7a5:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c7a8:	8b 50 1f             	mov    0x1f(%eax),%edx
 847c7ab:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c7ae:	89 50 0d             	mov    %edx,0xd(%eax)
 847c7b1:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c7b4:	8b 50 23             	mov    0x23(%eax),%edx
 847c7b7:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c7ba:	89 50 11             	mov    %edx,0x11(%eax)
 847c7bd:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c7c0:	8b 50 27             	mov    0x27(%eax),%edx
 847c7c3:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c7c6:	89 50 15             	mov    %edx,0x15(%eax)
 847c7c9:	8b 45 94             	mov    -0x6c(%ebp),%eax
 847c7cc:	8b 50 2b             	mov    0x2b(%eax),%edx
 847c7cf:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c7d2:	89 50 19             	mov    %edx,0x19(%eax)
 847c7d5:	8b 45 98             	mov    -0x68(%ebp),%eax
 847c7d8:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847c7de:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c7e3:	8d 95 54 ff ff ff    	lea    -0xac(%ebp),%edx
 847c7e9:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c7ed:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c7f4:	00 
 847c7f5:	89 04 24             	mov    %eax,(%esp)
 847c7f8:	e8 e1 47 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c7fd:	eb 1e                	jmp    847c81d <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x61f>
 847c7ff:	89 d3                	mov    %edx,%ebx
 847c801:	89 c6                	mov    %eax,%esi
 847c803:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847c809:	89 04 24             	mov    %eax,(%esp)
 847c80c:	e8 c1 00 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c811:	89 f0                	mov    %esi,%eax
 847c813:	89 da                	mov    %ebx,%edx
 847c815:	89 04 24             	mov    %eax,(%esp)
 847c818:	e8 33 6f 66 00       	call   8ae3750 <_Unwind_Resume>
 847c81d:	8d 85 54 ff ff ff    	lea    -0xac(%ebp),%eax
 847c823:	89 04 24             	mov    %eax,(%esp)
 847c826:	e8 a7 00 1a 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c82b:	e9 5f 14 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c830:	8b 45 08             	mov    0x8(%ebp),%eax
 847c833:	89 45 9c             	mov    %eax,-0x64(%ebp)
 847c836:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c83b:	c7 44 24 08 23 15 00 	movl   $0x1523,0x8(%esp)
 847c842:	00 
 847c843:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c84a:	08 
 847c84b:	89 04 24             	mov    %eax,(%esp)
 847c84e:	e8 33 32 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c853:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c85a:	00 
 847c85b:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c85f:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847c865:	89 04 24             	mov    %eax,(%esp)
 847c868:	e8 b9 c3 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c86d:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847c873:	89 04 24             	mov    %eax,(%esp)
 847c876:	e8 cb c3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c87b:	c7 44 24 04 f2 00 00 	movl   $0xf2,0x4(%esp)
 847c882:	00 
 847c883:	89 04 24             	mov    %eax,(%esp)
 847c886:	e8 cb c3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c88b:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847c88e:	8b 58 12             	mov    0x12(%eax),%ebx
 847c891:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847c897:	89 04 24             	mov    %eax,(%esp)
 847c89a:	e8 a7 c3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c89f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847c8a3:	89 04 24             	mov    %eax,(%esp)
 847c8a6:	e8 ab c3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c8ab:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847c8b1:	89 04 24             	mov    %eax,(%esp)
 847c8b4:	e8 95 c3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c8b9:	89 04 24             	mov    %eax,(%esp)
 847c8bc:	e8 d3 14 00 00       	call   847dd94 <_ZN12CStreamGuard11GetInBufferI25SIG_AUCTION_RESULT_REGISTEEPT_v>
 847c8c1:	89 45 a0             	mov    %eax,-0x60(%ebp)
 847c8c4:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847c8c7:	8b 50 16             	mov    0x16(%eax),%edx
 847c8ca:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847c8cd:	89 50 04             	mov    %edx,0x4(%eax)
 847c8d0:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847c8d3:	0f b6 50 1a          	movzbl 0x1a(%eax),%edx
 847c8d7:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847c8da:	88 50 08             	mov    %dl,0x8(%eax)
 847c8dd:	8b 45 9c             	mov    -0x64(%ebp),%eax
 847c8e0:	0f b6 50 1b          	movzbl 0x1b(%eax),%edx
 847c8e4:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847c8e7:	88 50 09             	mov    %dl,0x9(%eax)
 847c8ea:	8b 45 a0             	mov    -0x60(%ebp),%eax
 847c8ed:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847c8f3:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847c8f8:	8d 95 4c ff ff ff    	lea    -0xb4(%ebp),%edx
 847c8fe:	89 54 24 08          	mov    %edx,0x8(%esp)
 847c902:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847c909:	00 
 847c90a:	89 04 24             	mov    %eax,(%esp)
 847c90d:	e8 cc 46 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847c912:	eb 1e                	jmp    847c932 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x734>
 847c914:	89 d3                	mov    %edx,%ebx
 847c916:	89 c6                	mov    %eax,%esi
 847c918:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847c91e:	89 04 24             	mov    %eax,(%esp)
 847c921:	e8 ac ff 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c926:	89 f0                	mov    %esi,%eax
 847c928:	89 da                	mov    %ebx,%edx
 847c92a:	89 04 24             	mov    %eax,(%esp)
 847c92d:	e8 1e 6e 66 00       	call   8ae3750 <_Unwind_Resume>
 847c932:	8d 85 4c ff ff ff    	lea    -0xb4(%ebp),%eax
 847c938:	89 04 24             	mov    %eax,(%esp)
 847c93b:	e8 92 ff 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847c940:	e9 4a 13 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847c945:	8b 45 08             	mov    0x8(%ebp),%eax
 847c948:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 847c94b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847c950:	c7 44 24 08 36 15 00 	movl   $0x1536,0x8(%esp)
 847c957:	00 
 847c958:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847c95f:	08 
 847c960:	89 04 24             	mov    %eax,(%esp)
 847c963:	e8 1e 31 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847c968:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847c96f:	00 
 847c970:	89 44 24 04          	mov    %eax,0x4(%esp)
 847c974:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847c97a:	89 04 24             	mov    %eax,(%esp)
 847c97d:	e8 a4 c2 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847c982:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847c988:	89 04 24             	mov    %eax,(%esp)
 847c98b:	e8 b6 c2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c990:	c7 44 24 04 f3 00 00 	movl   $0xf3,0x4(%esp)
 847c997:	00 
 847c998:	89 04 24             	mov    %eax,(%esp)
 847c99b:	e8 b6 c2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c9a0:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847c9a3:	8b 58 12             	mov    0x12(%eax),%ebx
 847c9a6:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847c9ac:	89 04 24             	mov    %eax,(%esp)
 847c9af:	e8 92 c2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847c9b4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847c9b8:	89 04 24             	mov    %eax,(%esp)
 847c9bb:	e8 96 c2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847c9c0:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847c9c6:	89 04 24             	mov    %eax,(%esp)
 847c9c9:	e8 80 c2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847c9ce:	89 04 24             	mov    %eax,(%esp)
 847c9d1:	e8 d4 13 00 00       	call   847ddaa <_ZN12CStreamGuard11GetInBufferI26SIG_AUCTION_RESULT_BIDDINGEEPT_v>
 847c9d6:	89 45 a8             	mov    %eax,-0x58(%ebp)
 847c9d9:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847c9dc:	8b 50 16             	mov    0x16(%eax),%edx
 847c9df:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847c9e2:	89 50 04             	mov    %edx,0x4(%eax)
 847c9e5:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847c9e8:	8b 50 1a             	mov    0x1a(%eax),%edx
 847c9eb:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847c9ee:	89 50 08             	mov    %edx,0x8(%eax)
 847c9f1:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847c9f4:	0f b6 50 1e          	movzbl 0x1e(%eax),%edx
 847c9f8:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847c9fb:	88 50 0c             	mov    %dl,0xc(%eax)
 847c9fe:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847ca01:	0f b6 50 1f          	movzbl 0x1f(%eax),%edx
 847ca05:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847ca08:	88 50 0d             	mov    %dl,0xd(%eax)
 847ca0b:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847ca0e:	8b 50 24             	mov    0x24(%eax),%edx
 847ca11:	8b 40 20             	mov    0x20(%eax),%eax
 847ca14:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 847ca17:	89 41 0e             	mov    %eax,0xe(%ecx)
 847ca1a:	89 51 12             	mov    %edx,0x12(%ecx)
 847ca1d:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847ca20:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847ca26:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847ca29:	83 c0 28             	add    $0x28,%eax
 847ca2c:	89 04 24             	mov    %eax,(%esp)
 847ca2f:	e8 7c 19 c0 ff       	call   807e3b0 <strlen@plt>
 847ca34:	8b 55 a4             	mov    -0x5c(%ebp),%edx
 847ca37:	8d 4a 28             	lea    0x28(%edx),%ecx
 847ca3a:	8b 55 a8             	mov    -0x58(%ebp),%edx
 847ca3d:	83 c2 16             	add    $0x16,%edx
 847ca40:	89 44 24 08          	mov    %eax,0x8(%esp)
 847ca44:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 847ca48:	89 14 24             	mov    %edx,(%esp)
 847ca4b:	e8 80 0e c0 ff       	call   807d8d0 <strncpy@plt>
 847ca50:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 847ca53:	8b 50 48             	mov    0x48(%eax),%edx
 847ca56:	8b 45 a8             	mov    -0x58(%ebp),%eax
 847ca59:	89 50 36             	mov    %edx,0x36(%eax)
 847ca5c:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847ca61:	8d 95 44 ff ff ff    	lea    -0xbc(%ebp),%edx
 847ca67:	89 54 24 08          	mov    %edx,0x8(%esp)
 847ca6b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ca72:	00 
 847ca73:	89 04 24             	mov    %eax,(%esp)
 847ca76:	e8 63 45 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847ca7b:	eb 1e                	jmp    847ca9b <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x89d>
 847ca7d:	89 d3                	mov    %edx,%ebx
 847ca7f:	89 c6                	mov    %eax,%esi
 847ca81:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847ca87:	89 04 24             	mov    %eax,(%esp)
 847ca8a:	e8 43 fe 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ca8f:	89 f0                	mov    %esi,%eax
 847ca91:	89 da                	mov    %ebx,%edx
 847ca93:	89 04 24             	mov    %eax,(%esp)
 847ca96:	e8 b5 6c 66 00       	call   8ae3750 <_Unwind_Resume>
 847ca9b:	8d 85 44 ff ff ff    	lea    -0xbc(%ebp),%eax
 847caa1:	89 04 24             	mov    %eax,(%esp)
 847caa4:	e8 29 fe 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847caa9:	e9 e1 11 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847caae:	8b 45 08             	mov    0x8(%ebp),%eax
 847cab1:	89 45 ac             	mov    %eax,-0x54(%ebp)
 847cab4:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847cab9:	c7 44 24 08 4e 15 00 	movl   $0x154e,0x8(%esp)
 847cac0:	00 
 847cac1:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847cac8:	08 
 847cac9:	89 04 24             	mov    %eax,(%esp)
 847cacc:	e8 b5 2f e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847cad1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847cad8:	00 
 847cad9:	89 44 24 04          	mov    %eax,0x4(%esp)
 847cadd:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847cae3:	89 04 24             	mov    %eax,(%esp)
 847cae6:	e8 3b c1 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847caeb:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847caf1:	89 04 24             	mov    %eax,(%esp)
 847caf4:	e8 4d c1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847caf9:	c7 44 24 04 f4 00 00 	movl   $0xf4,0x4(%esp)
 847cb00:	00 
 847cb01:	89 04 24             	mov    %eax,(%esp)
 847cb04:	e8 4d c1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cb09:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847cb0c:	8b 58 12             	mov    0x12(%eax),%ebx
 847cb0f:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847cb15:	89 04 24             	mov    %eax,(%esp)
 847cb18:	e8 29 c1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cb1d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cb21:	89 04 24             	mov    %eax,(%esp)
 847cb24:	e8 2d c1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cb29:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847cb2f:	89 04 24             	mov    %eax,(%esp)
 847cb32:	e8 17 c1 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cb37:	89 04 24             	mov    %eax,(%esp)
 847cb3a:	e8 81 12 00 00       	call   847ddc0 <_ZN12CStreamGuard11GetInBufferI32SIG_AUCTION_RESULT_REGIST_CANCELEEPT_v>
 847cb3f:	89 45 b0             	mov    %eax,-0x50(%ebp)
 847cb42:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847cb45:	8b 50 16             	mov    0x16(%eax),%edx
 847cb48:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847cb4b:	89 50 04             	mov    %edx,0x4(%eax)
 847cb4e:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847cb51:	0f b6 50 1a          	movzbl 0x1a(%eax),%edx
 847cb55:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847cb58:	88 50 08             	mov    %dl,0x8(%eax)
 847cb5b:	8b 45 ac             	mov    -0x54(%ebp),%eax
 847cb5e:	0f b6 50 1b          	movzbl 0x1b(%eax),%edx
 847cb62:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847cb65:	88 50 09             	mov    %dl,0x9(%eax)
 847cb68:	8b 45 b0             	mov    -0x50(%ebp),%eax
 847cb6b:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847cb71:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847cb76:	8d 95 3c ff ff ff    	lea    -0xc4(%ebp),%edx
 847cb7c:	89 54 24 08          	mov    %edx,0x8(%esp)
 847cb80:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847cb87:	00 
 847cb88:	89 04 24             	mov    %eax,(%esp)
 847cb8b:	e8 4e 44 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847cb90:	eb 1e                	jmp    847cbb0 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x9b2>
 847cb92:	89 d3                	mov    %edx,%ebx
 847cb94:	89 c6                	mov    %eax,%esi
 847cb96:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847cb9c:	89 04 24             	mov    %eax,(%esp)
 847cb9f:	e8 2e fd 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847cba4:	89 f0                	mov    %esi,%eax
 847cba6:	89 da                	mov    %ebx,%edx
 847cba8:	89 04 24             	mov    %eax,(%esp)
 847cbab:	e8 a0 6b 66 00       	call   8ae3750 <_Unwind_Resume>
 847cbb0:	8d 85 3c ff ff ff    	lea    -0xc4(%ebp),%eax
 847cbb6:	89 04 24             	mov    %eax,(%esp)
 847cbb9:	e8 14 fd 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847cbbe:	e9 cc 10 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847cbc3:	8b 45 08             	mov    0x8(%ebp),%eax
 847cbc6:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 847cbc9:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847cbce:	c7 44 24 08 61 15 00 	movl   $0x1561,0x8(%esp)
 847cbd5:	00 
 847cbd6:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847cbdd:	08 
 847cbde:	89 04 24             	mov    %eax,(%esp)
 847cbe1:	e8 a0 2e e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847cbe6:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847cbed:	00 
 847cbee:	89 44 24 04          	mov    %eax,0x4(%esp)
 847cbf2:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cbf8:	89 04 24             	mov    %eax,(%esp)
 847cbfb:	e8 26 c0 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847cc00:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cc06:	89 04 24             	mov    %eax,(%esp)
 847cc09:	e8 38 c0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cc0e:	c7 44 24 04 f5 00 00 	movl   $0xf5,0x4(%esp)
 847cc15:	00 
 847cc16:	89 04 24             	mov    %eax,(%esp)
 847cc19:	e8 38 c0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cc1e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cc21:	8b 58 12             	mov    0x12(%eax),%ebx
 847cc24:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cc2a:	89 04 24             	mov    %eax,(%esp)
 847cc2d:	e8 14 c0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cc32:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cc36:	89 04 24             	mov    %eax,(%esp)
 847cc39:	e8 18 c0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cc3e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cc41:	8b 58 16             	mov    0x16(%eax),%ebx
 847cc44:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cc4a:	89 04 24             	mov    %eax,(%esp)
 847cc4d:	e8 f4 bf c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cc52:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cc56:	89 04 24             	mov    %eax,(%esp)
 847cc59:	e8 f8 bf c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cc5e:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cc61:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 847cc65:	0f b6 d8             	movzbl %al,%ebx
 847cc68:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cc6e:	89 04 24             	mov    %eax,(%esp)
 847cc71:	e8 d0 bf c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cc76:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cc7a:	89 04 24             	mov    %eax,(%esp)
 847cc7d:	e8 d2 07 fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847cc82:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cc85:	8b 58 1b             	mov    0x1b(%eax),%ebx
 847cc88:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cc8e:	89 04 24             	mov    %eax,(%esp)
 847cc91:	e8 b0 bf c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cc96:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cc9a:	89 04 24             	mov    %eax,(%esp)
 847cc9d:	e8 f0 55 c6 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 847cca2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cca5:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 847cca9:	0f b7 c0             	movzwl %ax,%eax
 847ccac:	69 c0 89 00 00 00    	imul   $0x89,%eax,%eax
 847ccb2:	83 c0 02             	add    $0x2,%eax
 847ccb5:	89 45 b8             	mov    %eax,-0x48(%ebp)
 847ccb8:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847ccbe:	89 04 24             	mov    %eax,(%esp)
 847ccc1:	e8 88 bf c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847ccc6:	89 04 24             	mov    %eax,(%esp)
 847ccc9:	e8 2c 43 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847ccce:	89 04 24             	mov    %eax,(%esp)
 847ccd1:	e8 2a f1 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847ccd6:	89 c3                	mov    %eax,%ebx
 847ccd8:	03 5d b8             	add    -0x48(%ebp),%ebx
 847ccdb:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cce1:	89 04 24             	mov    %eax,(%esp)
 847cce4:	e8 65 bf c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cce9:	89 04 24             	mov    %eax,(%esp)
 847ccec:	e8 09 43 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847ccf1:	89 04 24             	mov    %eax,(%esp)
 847ccf4:	e8 cf f0 19 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847ccf9:	39 c3                	cmp    %eax,%ebx
 847ccfb:	0f 9f c0             	setg   %al
 847ccfe:	84 c0                	test   %al,%al
 847cd00:	74 45                	je     847cd47 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xb49>
 847cd02:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cd08:	89 04 24             	mov    %eax,(%esp)
 847cd0b:	e8 3e bf c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cd10:	89 04 24             	mov    %eax,(%esp)
 847cd13:	e8 e2 42 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cd18:	89 04 24             	mov    %eax,(%esp)
 847cd1b:	e8 e0 f0 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847cd20:	89 c3                	mov    %eax,%ebx
 847cd22:	03 5d b8             	add    -0x48(%ebp),%ebx
 847cd25:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cd2b:	89 04 24             	mov    %eax,(%esp)
 847cd2e:	e8 1b bf c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cd33:	89 04 24             	mov    %eax,(%esp)
 847cd36:	e8 bf 42 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cd3b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cd3f:	89 04 24             	mov    %eax,(%esp)
 847cd42:	e8 a1 f1 19 00       	call   861bee8 <_ZN6Stream6resizeEi>
 847cd47:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cd4d:	89 04 24             	mov    %eax,(%esp)
 847cd50:	e8 f9 be c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cd55:	89 04 24             	mov    %eax,(%esp)
 847cd58:	e8 9d 42 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cd5d:	89 04 24             	mov    %eax,(%esp)
 847cd60:	e8 9b f0 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847cd65:	89 c3                	mov    %eax,%ebx
 847cd67:	03 5d b8             	add    -0x48(%ebp),%ebx
 847cd6a:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cd70:	89 04 24             	mov    %eax,(%esp)
 847cd73:	e8 d6 be c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cd78:	89 04 24             	mov    %eax,(%esp)
 847cd7b:	e8 7a 42 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cd80:	89 04 24             	mov    %eax,(%esp)
 847cd83:	e8 40 f0 19 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847cd88:	39 c3                	cmp    %eax,%ebx
 847cd8a:	0f 9e c0             	setle  %al
 847cd8d:	84 c0                	test   %al,%al
 847cd8f:	74 5c                	je     847cded <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xbef>
 847cd91:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cd94:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 847cd98:	0f b7 d8             	movzwl %ax,%ebx
 847cd9b:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cda1:	89 04 24             	mov    %eax,(%esp)
 847cda4:	e8 9d be c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cda9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cdad:	89 04 24             	mov    %eax,(%esp)
 847cdb0:	e8 45 0f 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847cdb5:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cdb8:	0f b7 40 1f          	movzwl 0x1f(%eax),%eax
 847cdbc:	0f b7 c0             	movzwl %ax,%eax
 847cdbf:	69 c0 89 00 00 00    	imul   $0x89,%eax,%eax
 847cdc5:	89 c3                	mov    %eax,%ebx
 847cdc7:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 847cdca:	8d 70 21             	lea    0x21(%eax),%esi
 847cdcd:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cdd3:	89 04 24             	mov    %eax,(%esp)
 847cdd6:	e8 73 be c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cddb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847cddf:	89 74 24 04          	mov    %esi,0x4(%esp)
 847cde3:	89 04 24             	mov    %eax,(%esp)
 847cde6:	e8 67 18 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847cdeb:	eb 4a                	jmp    847ce37 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xc39>
 847cded:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847cdf3:	89 04 24             	mov    %eax,(%esp)
 847cdf6:	e8 4b be c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cdfb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847ce02:	00 
 847ce03:	89 04 24             	mov    %eax,(%esp)
 847ce06:	e8 ef 0e 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847ce0b:	c7 44 24 10 a0 01 c7 	movl   $0x8c701a0,0x10(%esp)
 847ce12:	08 
 847ce13:	c7 44 24 0c 79 15 00 	movl   $0x1579,0xc(%esp)
 847ce1a:	00 
 847ce1b:	c7 44 24 08 80 0e c7 	movl   $0x8c70e80,0x8(%esp)
 847ce22:	08 
 847ce23:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847ce2a:	08 
 847ce2b:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847ce32:	e8 d3 6d 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847ce37:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847ce3c:	8d 95 34 ff ff ff    	lea    -0xcc(%ebp),%edx
 847ce42:	89 54 24 08          	mov    %edx,0x8(%esp)
 847ce46:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847ce4d:	00 
 847ce4e:	89 04 24             	mov    %eax,(%esp)
 847ce51:	e8 88 41 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847ce56:	eb 1e                	jmp    847ce76 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xc78>
 847ce58:	89 d3                	mov    %edx,%ebx
 847ce5a:	89 c6                	mov    %eax,%esi
 847ce5c:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847ce62:	89 04 24             	mov    %eax,(%esp)
 847ce65:	e8 68 fa 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ce6a:	89 f0                	mov    %esi,%eax
 847ce6c:	89 da                	mov    %ebx,%edx
 847ce6e:	89 04 24             	mov    %eax,(%esp)
 847ce71:	e8 da 68 66 00       	call   8ae3750 <_Unwind_Resume>
 847ce76:	8d 85 34 ff ff ff    	lea    -0xcc(%ebp),%eax
 847ce7c:	89 04 24             	mov    %eax,(%esp)
 847ce7f:	e8 4e fa 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847ce84:	e9 06 0e 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847ce89:	8b 45 08             	mov    0x8(%ebp),%eax
 847ce8c:	89 45 bc             	mov    %eax,-0x44(%ebp)
 847ce8f:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847ce94:	c7 44 24 08 84 15 00 	movl   $0x1584,0x8(%esp)
 847ce9b:	00 
 847ce9c:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847cea3:	08 
 847cea4:	89 04 24             	mov    %eax,(%esp)
 847cea7:	e8 da 2b e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847ceac:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847ceb3:	00 
 847ceb4:	89 44 24 04          	mov    %eax,0x4(%esp)
 847ceb8:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cebe:	89 04 24             	mov    %eax,(%esp)
 847cec1:	e8 60 bd c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847cec6:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cecc:	89 04 24             	mov    %eax,(%esp)
 847cecf:	e8 72 bd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847ced4:	c7 44 24 04 f6 00 00 	movl   $0xf6,0x4(%esp)
 847cedb:	00 
 847cedc:	89 04 24             	mov    %eax,(%esp)
 847cedf:	e8 72 bd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cee4:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847cee7:	8b 58 12             	mov    0x12(%eax),%ebx
 847ceea:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cef0:	89 04 24             	mov    %eax,(%esp)
 847cef3:	e8 4e bd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cef8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cefc:	89 04 24             	mov    %eax,(%esp)
 847ceff:	e8 52 bd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cf04:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847cf07:	8b 58 16             	mov    0x16(%eax),%ebx
 847cf0a:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cf10:	89 04 24             	mov    %eax,(%esp)
 847cf13:	e8 2e bd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cf18:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cf1c:	89 04 24             	mov    %eax,(%esp)
 847cf1f:	e8 32 bd c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847cf24:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847cf27:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 847cf2b:	0f b6 d8             	movzbl %al,%ebx
 847cf2e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cf34:	89 04 24             	mov    %eax,(%esp)
 847cf37:	e8 0a bd c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847cf3c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cf40:	89 04 24             	mov    %eax,(%esp)
 847cf43:	e8 0c 05 fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847cf48:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847cf4b:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 847cf4f:	0f b6 c0             	movzbl %al,%eax
 847cf52:	6b c0 75             	imul   $0x75,%eax,%eax
 847cf55:	83 c0 01             	add    $0x1,%eax
 847cf58:	89 45 c0             	mov    %eax,-0x40(%ebp)
 847cf5b:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cf61:	89 04 24             	mov    %eax,(%esp)
 847cf64:	e8 e5 bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cf69:	89 04 24             	mov    %eax,(%esp)
 847cf6c:	e8 89 40 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cf71:	89 04 24             	mov    %eax,(%esp)
 847cf74:	e8 87 ee 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847cf79:	89 c3                	mov    %eax,%ebx
 847cf7b:	03 5d c0             	add    -0x40(%ebp),%ebx
 847cf7e:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cf84:	89 04 24             	mov    %eax,(%esp)
 847cf87:	e8 c2 bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cf8c:	89 04 24             	mov    %eax,(%esp)
 847cf8f:	e8 66 40 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cf94:	89 04 24             	mov    %eax,(%esp)
 847cf97:	e8 2c ee 19 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847cf9c:	39 c3                	cmp    %eax,%ebx
 847cf9e:	0f 9f c0             	setg   %al
 847cfa1:	84 c0                	test   %al,%al
 847cfa3:	74 45                	je     847cfea <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xdec>
 847cfa5:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cfab:	89 04 24             	mov    %eax,(%esp)
 847cfae:	e8 9b bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cfb3:	89 04 24             	mov    %eax,(%esp)
 847cfb6:	e8 3f 40 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cfbb:	89 04 24             	mov    %eax,(%esp)
 847cfbe:	e8 3d ee 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847cfc3:	89 c3                	mov    %eax,%ebx
 847cfc5:	03 5d c0             	add    -0x40(%ebp),%ebx
 847cfc8:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cfce:	89 04 24             	mov    %eax,(%esp)
 847cfd1:	e8 78 bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cfd6:	89 04 24             	mov    %eax,(%esp)
 847cfd9:	e8 1c 40 c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847cfde:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847cfe2:	89 04 24             	mov    %eax,(%esp)
 847cfe5:	e8 fe ee 19 00       	call   861bee8 <_ZN6Stream6resizeEi>
 847cfea:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847cff0:	89 04 24             	mov    %eax,(%esp)
 847cff3:	e8 56 bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847cff8:	89 04 24             	mov    %eax,(%esp)
 847cffb:	e8 fa 3f c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d000:	89 04 24             	mov    %eax,(%esp)
 847d003:	e8 f8 ed 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847d008:	89 c3                	mov    %eax,%ebx
 847d00a:	03 5d c0             	add    -0x40(%ebp),%ebx
 847d00d:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847d013:	89 04 24             	mov    %eax,(%esp)
 847d016:	e8 33 bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d01b:	89 04 24             	mov    %eax,(%esp)
 847d01e:	e8 d7 3f c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d023:	89 04 24             	mov    %eax,(%esp)
 847d026:	e8 9d ed 19 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847d02b:	39 c3                	cmp    %eax,%ebx
 847d02d:	0f 9e c0             	setle  %al
 847d030:	84 c0                	test   %al,%al
 847d032:	74 5d                	je     847d091 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xe93>
 847d034:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847d037:	8d 58 1b             	lea    0x1b(%eax),%ebx
 847d03a:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847d040:	89 04 24             	mov    %eax,(%esp)
 847d043:	e8 06 bc c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d048:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d04f:	00 
 847d050:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d054:	89 04 24             	mov    %eax,(%esp)
 847d057:	e8 f6 15 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847d05c:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847d05f:	0f b6 40 1b          	movzbl 0x1b(%eax),%eax
 847d063:	0f b6 c0             	movzbl %al,%eax
 847d066:	6b c0 75             	imul   $0x75,%eax,%eax
 847d069:	89 c3                	mov    %eax,%ebx
 847d06b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 847d06e:	8d 70 1c             	lea    0x1c(%eax),%esi
 847d071:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847d077:	89 04 24             	mov    %eax,(%esp)
 847d07a:	e8 cf bb c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d07f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847d083:	89 74 24 04          	mov    %esi,0x4(%esp)
 847d087:	89 04 24             	mov    %eax,(%esp)
 847d08a:	e8 c3 15 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847d08f:	eb 4a                	jmp    847d0db <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xedd>
 847d091:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847d097:	89 04 24             	mov    %eax,(%esp)
 847d09a:	e8 a7 bb c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d09f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847d0a6:	00 
 847d0a7:	89 04 24             	mov    %eax,(%esp)
 847d0aa:	e8 4b 0c 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847d0af:	c7 44 24 10 c8 01 c7 	movl   $0x8c701c8,0x10(%esp)
 847d0b6:	08 
 847d0b7:	c7 44 24 0c 9b 15 00 	movl   $0x159b,0xc(%esp)
 847d0be:	00 
 847d0bf:	c7 44 24 08 80 0e c7 	movl   $0x8c70e80,0x8(%esp)
 847d0c6:	08 
 847d0c7:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d0ce:	08 
 847d0cf:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847d0d6:	e8 2f 6b 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847d0db:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d0e0:	8d 95 2c ff ff ff    	lea    -0xd4(%ebp),%edx
 847d0e6:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d0ea:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d0f1:	00 
 847d0f2:	89 04 24             	mov    %eax,(%esp)
 847d0f5:	e8 e4 3e 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d0fa:	eb 1e                	jmp    847d11a <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0xf1c>
 847d0fc:	89 d3                	mov    %edx,%ebx
 847d0fe:	89 c6                	mov    %eax,%esi
 847d100:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847d106:	89 04 24             	mov    %eax,(%esp)
 847d109:	e8 c4 f7 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d10e:	89 f0                	mov    %esi,%eax
 847d110:	89 da                	mov    %ebx,%edx
 847d112:	89 04 24             	mov    %eax,(%esp)
 847d115:	e8 36 66 66 00       	call   8ae3750 <_Unwind_Resume>
 847d11a:	8d 85 2c ff ff ff    	lea    -0xd4(%ebp),%eax
 847d120:	89 04 24             	mov    %eax,(%esp)
 847d123:	e8 aa f7 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d128:	e9 62 0b 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d12d:	8b 45 08             	mov    0x8(%ebp),%eax
 847d130:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 847d133:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d138:	c7 44 24 08 a6 15 00 	movl   $0x15a6,0x8(%esp)
 847d13f:	00 
 847d140:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d147:	08 
 847d148:	89 04 24             	mov    %eax,(%esp)
 847d14b:	e8 36 29 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d150:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d157:	00 
 847d158:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d15c:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d162:	89 04 24             	mov    %eax,(%esp)
 847d165:	e8 bc ba c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d16a:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d170:	89 04 24             	mov    %eax,(%esp)
 847d173:	e8 ce ba c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d178:	c7 44 24 04 f7 00 00 	movl   $0xf7,0x4(%esp)
 847d17f:	00 
 847d180:	89 04 24             	mov    %eax,(%esp)
 847d183:	e8 ce ba c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d188:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d18b:	8b 58 12             	mov    0x12(%eax),%ebx
 847d18e:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d194:	89 04 24             	mov    %eax,(%esp)
 847d197:	e8 aa ba c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d19c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d1a0:	89 04 24             	mov    %eax,(%esp)
 847d1a3:	e8 ae ba c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d1a8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d1ab:	8b 58 16             	mov    0x16(%eax),%ebx
 847d1ae:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d1b4:	89 04 24             	mov    %eax,(%esp)
 847d1b7:	e8 8a ba c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d1bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d1c0:	89 04 24             	mov    %eax,(%esp)
 847d1c3:	e8 8e ba c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d1c8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d1cb:	0f b6 40 1a          	movzbl 0x1a(%eax),%eax
 847d1cf:	0f b6 d8             	movzbl %al,%ebx
 847d1d2:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d1d8:	89 04 24             	mov    %eax,(%esp)
 847d1db:	e8 66 ba c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d1e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d1e4:	89 04 24             	mov    %eax,(%esp)
 847d1e7:	e8 68 02 fd ff       	call   844d454 <_ZN12CStreamGuardlsEh>
 847d1ec:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d1ef:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 847d1f3:	0f b7 c0             	movzwl %ax,%eax
 847d1f6:	6b c0 7d             	imul   $0x7d,%eax,%eax
 847d1f9:	83 c0 02             	add    $0x2,%eax
 847d1fc:	89 45 c8             	mov    %eax,-0x38(%ebp)
 847d1ff:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d205:	89 04 24             	mov    %eax,(%esp)
 847d208:	e8 41 ba c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d20d:	89 04 24             	mov    %eax,(%esp)
 847d210:	e8 e5 3d c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d215:	89 04 24             	mov    %eax,(%esp)
 847d218:	e8 e3 eb 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847d21d:	89 c3                	mov    %eax,%ebx
 847d21f:	03 5d c8             	add    -0x38(%ebp),%ebx
 847d222:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d228:	89 04 24             	mov    %eax,(%esp)
 847d22b:	e8 1e ba c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d230:	89 04 24             	mov    %eax,(%esp)
 847d233:	e8 c2 3d c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d238:	89 04 24             	mov    %eax,(%esp)
 847d23b:	e8 88 eb 19 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847d240:	39 c3                	cmp    %eax,%ebx
 847d242:	0f 9f c0             	setg   %al
 847d245:	84 c0                	test   %al,%al
 847d247:	74 45                	je     847d28e <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1090>
 847d249:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d24f:	89 04 24             	mov    %eax,(%esp)
 847d252:	e8 f7 b9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d257:	89 04 24             	mov    %eax,(%esp)
 847d25a:	e8 9b 3d c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d25f:	89 04 24             	mov    %eax,(%esp)
 847d262:	e8 99 eb 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847d267:	89 c3                	mov    %eax,%ebx
 847d269:	03 5d c8             	add    -0x38(%ebp),%ebx
 847d26c:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d272:	89 04 24             	mov    %eax,(%esp)
 847d275:	e8 d4 b9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d27a:	89 04 24             	mov    %eax,(%esp)
 847d27d:	e8 78 3d c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d282:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d286:	89 04 24             	mov    %eax,(%esp)
 847d289:	e8 5a ec 19 00       	call   861bee8 <_ZN6Stream6resizeEi>
 847d28e:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d294:	89 04 24             	mov    %eax,(%esp)
 847d297:	e8 b2 b9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d29c:	89 04 24             	mov    %eax,(%esp)
 847d29f:	e8 56 3d c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d2a4:	89 04 24             	mov    %eax,(%esp)
 847d2a7:	e8 54 eb 19 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 847d2ac:	89 c3                	mov    %eax,%ebx
 847d2ae:	03 5d c8             	add    -0x38(%ebp),%ebx
 847d2b1:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d2b7:	89 04 24             	mov    %eax,(%esp)
 847d2ba:	e8 8f b9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d2bf:	89 04 24             	mov    %eax,(%esp)
 847d2c2:	e8 33 3d c8 ff       	call   8100ffa <_ZN12CStreamGuard3GetEv>
 847d2c7:	89 04 24             	mov    %eax,(%esp)
 847d2ca:	e8 f9 ea 19 00       	call   861bdc8 <_ZN6Stream4sizeEv>
 847d2cf:	39 c3                	cmp    %eax,%ebx
 847d2d1:	0f 9e c0             	setle  %al
 847d2d4:	84 c0                	test   %al,%al
 847d2d6:	74 59                	je     847d331 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1133>
 847d2d8:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d2db:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 847d2df:	0f b7 d8             	movzwl %ax,%ebx
 847d2e2:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d2e8:	89 04 24             	mov    %eax,(%esp)
 847d2eb:	e8 56 b9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d2f0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d2f4:	89 04 24             	mov    %eax,(%esp)
 847d2f7:	e8 fe 09 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847d2fc:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d2ff:	0f b7 40 1b          	movzwl 0x1b(%eax),%eax
 847d303:	0f b7 c0             	movzwl %ax,%eax
 847d306:	6b c0 7d             	imul   $0x7d,%eax,%eax
 847d309:	89 c3                	mov    %eax,%ebx
 847d30b:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 847d30e:	8d 70 1d             	lea    0x1d(%eax),%esi
 847d311:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d317:	89 04 24             	mov    %eax,(%esp)
 847d31a:	e8 2f b9 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d31f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847d323:	89 74 24 04          	mov    %esi,0x4(%esp)
 847d327:	89 04 24             	mov    %eax,(%esp)
 847d32a:	e8 23 13 c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847d32f:	eb 4a                	jmp    847d37b <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x117d>
 847d331:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d337:	89 04 24             	mov    %eax,(%esp)
 847d33a:	e8 07 b9 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d33f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 847d346:	00 
 847d347:	89 04 24             	mov    %eax,(%esp)
 847d34a:	e8 ab 09 00 00       	call   847dcfa <_ZN12CStreamGuardlsEt>
 847d34f:	c7 44 24 10 fc 01 c7 	movl   $0x8c701fc,0x10(%esp)
 847d356:	08 
 847d357:	c7 44 24 0c bd 15 00 	movl   $0x15bd,0xc(%esp)
 847d35e:	00 
 847d35f:	c7 44 24 08 80 0e c7 	movl   $0x8c70e80,0x8(%esp)
 847d366:	08 
 847d367:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d36e:	08 
 847d36f:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847d376:	e8 8f 68 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847d37b:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d380:	8d 95 24 ff ff ff    	lea    -0xdc(%ebp),%edx
 847d386:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d38a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d391:	00 
 847d392:	89 04 24             	mov    %eax,(%esp)
 847d395:	e8 44 3c 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d39a:	eb 1e                	jmp    847d3ba <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x11bc>
 847d39c:	89 d3                	mov    %edx,%ebx
 847d39e:	89 c6                	mov    %eax,%esi
 847d3a0:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d3a6:	89 04 24             	mov    %eax,(%esp)
 847d3a9:	e8 24 f5 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d3ae:	89 f0                	mov    %esi,%eax
 847d3b0:	89 da                	mov    %ebx,%edx
 847d3b2:	89 04 24             	mov    %eax,(%esp)
 847d3b5:	e8 96 63 66 00       	call   8ae3750 <_Unwind_Resume>
 847d3ba:	8d 85 24 ff ff ff    	lea    -0xdc(%ebp),%eax
 847d3c0:	89 04 24             	mov    %eax,(%esp)
 847d3c3:	e8 0a f5 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d3c8:	e9 c2 08 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d3cd:	8b 45 08             	mov    0x8(%ebp),%eax
 847d3d0:	89 45 cc             	mov    %eax,-0x34(%ebp)
 847d3d3:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d3d8:	c7 44 24 08 ce 15 00 	movl   $0x15ce,0x8(%esp)
 847d3df:	00 
 847d3e0:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d3e7:	08 
 847d3e8:	89 04 24             	mov    %eax,(%esp)
 847d3eb:	e8 96 26 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d3f0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d3f7:	00 
 847d3f8:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d3fc:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847d402:	89 04 24             	mov    %eax,(%esp)
 847d405:	e8 1c b8 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d40a:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847d410:	89 04 24             	mov    %eax,(%esp)
 847d413:	e8 2e b8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d418:	c7 44 24 04 fa 00 00 	movl   $0xfa,0x4(%esp)
 847d41f:	00 
 847d420:	89 04 24             	mov    %eax,(%esp)
 847d423:	e8 2e b8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d428:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d42b:	8b 58 12             	mov    0x12(%eax),%ebx
 847d42e:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847d434:	89 04 24             	mov    %eax,(%esp)
 847d437:	e8 0a b8 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d43c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d440:	89 04 24             	mov    %eax,(%esp)
 847d443:	e8 0e b8 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d448:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847d44e:	89 04 24             	mov    %eax,(%esp)
 847d451:	e8 f8 b7 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d456:	89 04 24             	mov    %eax,(%esp)
 847d459:	e8 a4 09 00 00       	call   847de02 <_ZN12CStreamGuard11GetInBufferI26SIG_AUCTION_LOG_MESSAGE_PGEEPT_v>
 847d45e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 847d461:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d464:	0f b6 50 16          	movzbl 0x16(%eax),%edx
 847d468:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d46b:	88 10                	mov    %dl,(%eax)
 847d46d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d470:	8b 50 1b             	mov    0x1b(%eax),%edx
 847d473:	8b 40 17             	mov    0x17(%eax),%eax
 847d476:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 847d479:	89 41 01             	mov    %eax,0x1(%ecx)
 847d47c:	89 51 05             	mov    %edx,0x5(%ecx)
 847d47f:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d482:	8b 50 1f             	mov    0x1f(%eax),%edx
 847d485:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d488:	89 50 09             	mov    %edx,0x9(%eax)
 847d48b:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d48e:	8b 50 23             	mov    0x23(%eax),%edx
 847d491:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d494:	89 50 0d             	mov    %edx,0xd(%eax)
 847d497:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d49a:	8b 50 27             	mov    0x27(%eax),%edx
 847d49d:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d4a0:	89 50 11             	mov    %edx,0x11(%eax)
 847d4a3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d4a6:	0f b6 50 2b          	movzbl 0x2b(%eax),%edx
 847d4aa:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d4ad:	88 50 15             	mov    %dl,0x15(%eax)
 847d4b0:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d4b3:	8b 50 2c             	mov    0x2c(%eax),%edx
 847d4b6:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d4b9:	89 50 16             	mov    %edx,0x16(%eax)
 847d4bc:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d4bf:	0f b7 50 30          	movzwl 0x30(%eax),%edx
 847d4c3:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d4c6:	66 89 50 1a          	mov    %dx,0x1a(%eax)
 847d4ca:	8b 45 cc             	mov    -0x34(%ebp),%eax
 847d4cd:	8b 50 32             	mov    0x32(%eax),%edx
 847d4d0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 847d4d3:	89 50 1c             	mov    %edx,0x1c(%eax)
 847d4d6:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d4db:	8d 95 1c ff ff ff    	lea    -0xe4(%ebp),%edx
 847d4e1:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d4e5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d4ec:	00 
 847d4ed:	89 04 24             	mov    %eax,(%esp)
 847d4f0:	e8 e9 3a 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d4f5:	eb 1e                	jmp    847d515 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1317>
 847d4f7:	89 d3                	mov    %edx,%ebx
 847d4f9:	89 c6                	mov    %eax,%esi
 847d4fb:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847d501:	89 04 24             	mov    %eax,(%esp)
 847d504:	e8 c9 f3 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d509:	89 f0                	mov    %esi,%eax
 847d50b:	89 da                	mov    %ebx,%edx
 847d50d:	89 04 24             	mov    %eax,(%esp)
 847d510:	e8 3b 62 66 00       	call   8ae3750 <_Unwind_Resume>
 847d515:	8d 85 1c ff ff ff    	lea    -0xe4(%ebp),%eax
 847d51b:	89 04 24             	mov    %eax,(%esp)
 847d51e:	e8 af f3 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d523:	e9 67 07 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d528:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d52d:	c7 44 24 08 e5 15 00 	movl   $0x15e5,0x8(%esp)
 847d534:	00 
 847d535:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d53c:	08 
 847d53d:	89 04 24             	mov    %eax,(%esp)
 847d540:	e8 41 25 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d545:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d54c:	00 
 847d54d:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d551:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847d557:	89 04 24             	mov    %eax,(%esp)
 847d55a:	e8 c7 b6 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d55f:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847d565:	89 04 24             	mov    %eax,(%esp)
 847d568:	e8 d9 b6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d56d:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847d574:	00 
 847d575:	89 04 24             	mov    %eax,(%esp)
 847d578:	e8 d9 b6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d57d:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847d583:	89 04 24             	mov    %eax,(%esp)
 847d586:	e8 bb b6 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d58b:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847d592:	ff 
 847d593:	89 04 24             	mov    %eax,(%esp)
 847d596:	e8 bb b6 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d59b:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847d5a1:	89 04 24             	mov    %eax,(%esp)
 847d5a4:	e8 a5 b6 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d5a9:	89 04 24             	mov    %eax,(%esp)
 847d5ac:	e8 a1 07 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847d5b1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 847d5b4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847d5b7:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 847d5bb:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 847d5be:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847d5c4:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d5c9:	8d 95 14 ff ff ff    	lea    -0xec(%ebp),%edx
 847d5cf:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d5d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d5da:	00 
 847d5db:	89 04 24             	mov    %eax,(%esp)
 847d5de:	e8 fb 39 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d5e3:	eb 1e                	jmp    847d603 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1405>
 847d5e5:	89 d3                	mov    %edx,%ebx
 847d5e7:	89 c6                	mov    %eax,%esi
 847d5e9:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847d5ef:	89 04 24             	mov    %eax,(%esp)
 847d5f2:	e8 db f2 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d5f7:	89 f0                	mov    %esi,%eax
 847d5f9:	89 da                	mov    %ebx,%edx
 847d5fb:	89 04 24             	mov    %eax,(%esp)
 847d5fe:	e8 4d 61 66 00       	call   8ae3750 <_Unwind_Resume>
 847d603:	8d 85 14 ff ff ff    	lea    -0xec(%ebp),%eax
 847d609:	89 04 24             	mov    %eax,(%esp)
 847d60c:	e8 c1 f2 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d611:	e9 79 06 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d616:	8b 45 08             	mov    0x8(%ebp),%eax
 847d619:	89 45 d8             	mov    %eax,-0x28(%ebp)
 847d61c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 847d61f:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 847d623:	84 c0                	test   %al,%al
 847d625:	0f 84 ee 00 00 00    	je     847d719 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x151b>
 847d62b:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d630:	c7 44 24 08 fa 15 00 	movl   $0x15fa,0x8(%esp)
 847d637:	00 
 847d638:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d63f:	08 
 847d640:	89 04 24             	mov    %eax,(%esp)
 847d643:	e8 3e 24 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d648:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d64f:	00 
 847d650:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d654:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 847d65a:	89 04 24             	mov    %eax,(%esp)
 847d65d:	e8 c4 b5 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d662:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 847d668:	89 04 24             	mov    %eax,(%esp)
 847d66b:	e8 d6 b5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d670:	c7 44 24 04 f9 00 00 	movl   $0xf9,0x4(%esp)
 847d677:	00 
 847d678:	89 04 24             	mov    %eax,(%esp)
 847d67b:	e8 d6 b5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d680:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 847d686:	89 04 24             	mov    %eax,(%esp)
 847d689:	e8 b8 b5 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d68e:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847d695:	ff 
 847d696:	89 04 24             	mov    %eax,(%esp)
 847d699:	e8 b8 b5 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d69e:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 847d6a4:	89 04 24             	mov    %eax,(%esp)
 847d6a7:	e8 a2 b5 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d6ac:	89 04 24             	mov    %eax,(%esp)
 847d6af:	e8 9e 06 00 00       	call   847dd52 <_ZN12CStreamGuard11GetInBufferI34SIG_AUCTION_NOTIFY_AUCTION_SERVICEEEPT_v>
 847d6b4:	89 45 dc             	mov    %eax,-0x24(%ebp)
 847d6b7:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847d6ba:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 847d6c0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 847d6c3:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 847d6c7:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d6cc:	8d 95 0c ff ff ff    	lea    -0xf4(%ebp),%edx
 847d6d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d6d6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d6dd:	00 
 847d6de:	89 04 24             	mov    %eax,(%esp)
 847d6e1:	e8 f8 38 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d6e6:	eb 1e                	jmp    847d706 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1508>
 847d6e8:	89 d3                	mov    %edx,%ebx
 847d6ea:	89 c6                	mov    %eax,%esi
 847d6ec:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 847d6f2:	89 04 24             	mov    %eax,(%esp)
 847d6f5:	e8 d8 f1 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d6fa:	89 f0                	mov    %esi,%eax
 847d6fc:	89 da                	mov    %ebx,%edx
 847d6fe:	89 04 24             	mov    %eax,(%esp)
 847d701:	e8 4a 60 66 00       	call   8ae3750 <_Unwind_Resume>
 847d706:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 847d70c:	89 04 24             	mov    %eax,(%esp)
 847d70f:	e8 be f1 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d714:	e9 76 05 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d719:	e8 3a d1 1b 00       	call   863a858 <_ZN23Timer_CheckAuctionReady15RegistNextTimerEv>
 847d71e:	e9 6c 05 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d723:	8b 45 08             	mov    0x8(%ebp),%eax
 847d726:	89 45 e0             	mov    %eax,-0x20(%ebp)
 847d729:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d72e:	c7 44 24 08 13 16 00 	movl   $0x1613,0x8(%esp)
 847d735:	00 
 847d736:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d73d:	08 
 847d73e:	89 04 24             	mov    %eax,(%esp)
 847d741:	e8 40 23 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d746:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d74d:	00 
 847d74e:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d752:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 847d758:	89 04 24             	mov    %eax,(%esp)
 847d75b:	e8 c6 b4 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d760:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 847d766:	89 04 24             	mov    %eax,(%esp)
 847d769:	e8 d8 b4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d76e:	c7 44 24 04 a5 02 00 	movl   $0x2a5,0x4(%esp)
 847d775:	00 
 847d776:	89 04 24             	mov    %eax,(%esp)
 847d779:	e8 d8 b4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d77e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847d781:	8b 58 0a             	mov    0xa(%eax),%ebx
 847d784:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 847d78a:	89 04 24             	mov    %eax,(%esp)
 847d78d:	e8 b4 b4 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d792:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d796:	89 04 24             	mov    %eax,(%esp)
 847d799:	e8 b8 b4 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d79e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 847d7a1:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847d7a5:	0f b7 d8             	movzwl %ax,%ebx
 847d7a8:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 847d7ae:	89 04 24             	mov    %eax,(%esp)
 847d7b1:	e8 98 b4 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d7b6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847d7ba:	8b 55 e0             	mov    -0x20(%ebp),%edx
 847d7bd:	89 54 24 04          	mov    %edx,0x4(%esp)
 847d7c1:	89 04 24             	mov    %eax,(%esp)
 847d7c4:	e8 89 0e c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847d7c9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d7ce:	8d 95 04 ff ff ff    	lea    -0xfc(%ebp),%edx
 847d7d4:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d7d8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d7df:	00 
 847d7e0:	89 04 24             	mov    %eax,(%esp)
 847d7e3:	e8 f6 37 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d7e8:	eb 1e                	jmp    847d808 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x160a>
 847d7ea:	89 d3                	mov    %edx,%ebx
 847d7ec:	89 c6                	mov    %eax,%esi
 847d7ee:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 847d7f4:	89 04 24             	mov    %eax,(%esp)
 847d7f7:	e8 d6 f0 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d7fc:	89 f0                	mov    %esi,%eax
 847d7fe:	89 da                	mov    %ebx,%edx
 847d800:	89 04 24             	mov    %eax,(%esp)
 847d803:	e8 48 5f 66 00       	call   8ae3750 <_Unwind_Resume>
 847d808:	8d 85 04 ff ff ff    	lea    -0xfc(%ebp),%eax
 847d80e:	89 04 24             	mov    %eax,(%esp)
 847d811:	e8 bc f0 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d816:	e9 74 04 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d81b:	8b 45 08             	mov    0x8(%ebp),%eax
 847d81e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 847d821:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d826:	c7 44 24 08 20 16 00 	movl   $0x1620,0x8(%esp)
 847d82d:	00 
 847d82e:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d835:	08 
 847d836:	89 04 24             	mov    %eax,(%esp)
 847d839:	e8 48 22 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d83e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d845:	00 
 847d846:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d84a:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 847d850:	89 04 24             	mov    %eax,(%esp)
 847d853:	e8 ce b3 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d858:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 847d85e:	89 04 24             	mov    %eax,(%esp)
 847d861:	e8 e0 b3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d866:	c7 44 24 04 a6 02 00 	movl   $0x2a6,0x4(%esp)
 847d86d:	00 
 847d86e:	89 04 24             	mov    %eax,(%esp)
 847d871:	e8 e0 b3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d876:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847d879:	8b 58 0f             	mov    0xf(%eax),%ebx
 847d87c:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 847d882:	89 04 24             	mov    %eax,(%esp)
 847d885:	e8 bc b3 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d88a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d88e:	89 04 24             	mov    %eax,(%esp)
 847d891:	e8 c0 b3 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d896:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 847d899:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847d89d:	0f b7 d8             	movzwl %ax,%ebx
 847d8a0:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 847d8a6:	89 04 24             	mov    %eax,(%esp)
 847d8a9:	e8 a0 b3 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d8ae:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847d8b2:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 847d8b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 847d8b9:	89 04 24             	mov    %eax,(%esp)
 847d8bc:	e8 91 0d c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847d8c1:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d8c6:	8d 95 fc fe ff ff    	lea    -0x104(%ebp),%edx
 847d8cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d8d0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d8d7:	00 
 847d8d8:	89 04 24             	mov    %eax,(%esp)
 847d8db:	e8 fe 36 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d8e0:	eb 1e                	jmp    847d900 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1702>
 847d8e2:	89 d3                	mov    %edx,%ebx
 847d8e4:	89 c6                	mov    %eax,%esi
 847d8e6:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 847d8ec:	89 04 24             	mov    %eax,(%esp)
 847d8ef:	e8 de ef 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d8f4:	89 f0                	mov    %esi,%eax
 847d8f6:	89 da                	mov    %ebx,%edx
 847d8f8:	89 04 24             	mov    %eax,(%esp)
 847d8fb:	e8 50 5e 66 00       	call   8ae3750 <_Unwind_Resume>
 847d900:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
 847d906:	89 04 24             	mov    %eax,(%esp)
 847d909:	e8 c4 ef 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d90e:	e9 7c 03 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847d913:	8b 45 08             	mov    0x8(%ebp),%eax
 847d916:	89 45 e8             	mov    %eax,-0x18(%ebp)
 847d919:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847d91e:	c7 44 24 08 2c 16 00 	movl   $0x162c,0x8(%esp)
 847d925:	00 
 847d926:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847d92d:	08 
 847d92e:	89 04 24             	mov    %eax,(%esp)
 847d931:	e8 50 21 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847d936:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847d93d:	00 
 847d93e:	89 44 24 04          	mov    %eax,0x4(%esp)
 847d942:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 847d948:	89 04 24             	mov    %eax,(%esp)
 847d94b:	e8 d6 b2 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847d950:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 847d956:	89 04 24             	mov    %eax,(%esp)
 847d959:	e8 e8 b2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d95e:	c7 44 24 04 a7 02 00 	movl   $0x2a7,0x4(%esp)
 847d965:	00 
 847d966:	89 04 24             	mov    %eax,(%esp)
 847d969:	e8 e8 b2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d96e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847d971:	8b 58 0a             	mov    0xa(%eax),%ebx
 847d974:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 847d97a:	89 04 24             	mov    %eax,(%esp)
 847d97d:	e8 c4 b2 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847d982:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847d986:	89 04 24             	mov    %eax,(%esp)
 847d989:	e8 c8 b2 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847d98e:	8b 45 e8             	mov    -0x18(%ebp),%eax
 847d991:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847d995:	0f b7 d8             	movzwl %ax,%ebx
 847d998:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 847d99e:	89 04 24             	mov    %eax,(%esp)
 847d9a1:	e8 a8 b2 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847d9a6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847d9aa:	8b 55 e8             	mov    -0x18(%ebp),%edx
 847d9ad:	89 54 24 04          	mov    %edx,0x4(%esp)
 847d9b1:	89 04 24             	mov    %eax,(%esp)
 847d9b4:	e8 99 0c c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847d9b9:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847d9be:	8d 95 f4 fe ff ff    	lea    -0x10c(%ebp),%edx
 847d9c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 847d9c8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847d9cf:	00 
 847d9d0:	89 04 24             	mov    %eax,(%esp)
 847d9d3:	e8 06 36 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847d9d8:	eb 1e                	jmp    847d9f8 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x17fa>
 847d9da:	89 d3                	mov    %edx,%ebx
 847d9dc:	89 c6                	mov    %eax,%esi
 847d9de:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 847d9e4:	89 04 24             	mov    %eax,(%esp)
 847d9e7:	e8 e6 ee 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847d9ec:	89 f0                	mov    %esi,%eax
 847d9ee:	89 da                	mov    %ebx,%edx
 847d9f0:	89 04 24             	mov    %eax,(%esp)
 847d9f3:	e8 58 5d 66 00       	call   8ae3750 <_Unwind_Resume>
 847d9f8:	8d 85 f4 fe ff ff    	lea    -0x10c(%ebp),%eax
 847d9fe:	89 04 24             	mov    %eax,(%esp)
 847da01:	e8 cc ee 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847da06:	e9 84 02 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847da0b:	8b 45 08             	mov    0x8(%ebp),%eax
 847da0e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 847da11:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847da16:	c7 44 24 08 38 16 00 	movl   $0x1638,0x8(%esp)
 847da1d:	00 
 847da1e:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847da25:	08 
 847da26:	89 04 24             	mov    %eax,(%esp)
 847da29:	e8 58 20 e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847da2e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847da35:	00 
 847da36:	89 44 24 04          	mov    %eax,0x4(%esp)
 847da3a:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 847da40:	89 04 24             	mov    %eax,(%esp)
 847da43:	e8 de b1 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847da48:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 847da4e:	89 04 24             	mov    %eax,(%esp)
 847da51:	e8 f0 b1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847da56:	c7 44 24 04 a8 02 00 	movl   $0x2a8,0x4(%esp)
 847da5d:	00 
 847da5e:	89 04 24             	mov    %eax,(%esp)
 847da61:	e8 f0 b1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847da66:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 847da6c:	89 04 24             	mov    %eax,(%esp)
 847da6f:	e8 d2 b1 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847da74:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 847da7b:	ff 
 847da7c:	89 04 24             	mov    %eax,(%esp)
 847da7f:	e8 d2 b1 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847da84:	8b 45 ec             	mov    -0x14(%ebp),%eax
 847da87:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 847da8b:	0f b7 d8             	movzwl %ax,%ebx
 847da8e:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 847da94:	89 04 24             	mov    %eax,(%esp)
 847da97:	e8 b2 b1 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847da9c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 847daa0:	8b 55 ec             	mov    -0x14(%ebp),%edx
 847daa3:	89 54 24 04          	mov    %edx,0x4(%esp)
 847daa7:	89 04 24             	mov    %eax,(%esp)
 847daaa:	e8 a3 0b c6 ff       	call   80de652 <_ZN12CStreamGuard10put_binaryEPvi>
 847daaf:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847dab4:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 847daba:	89 54 24 08          	mov    %edx,0x8(%esp)
 847dabe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847dac5:	00 
 847dac6:	89 04 24             	mov    %eax,(%esp)
 847dac9:	e8 10 35 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847dace:	eb 1e                	jmp    847daee <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x18f0>
 847dad0:	89 d3                	mov    %edx,%ebx
 847dad2:	89 c6                	mov    %eax,%esi
 847dad4:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 847dada:	89 04 24             	mov    %eax,(%esp)
 847dadd:	e8 f0 ed 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847dae2:	89 f0                	mov    %esi,%eax
 847dae4:	89 da                	mov    %ebx,%edx
 847dae6:	89 04 24             	mov    %eax,(%esp)
 847dae9:	e8 62 5c 66 00       	call   8ae3750 <_Unwind_Resume>
 847daee:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 847daf4:	89 04 24             	mov    %eax,(%esp)
 847daf7:	e8 d6 ed 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847dafc:	e9 8e 01 00 00       	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847db01:	8b 45 08             	mov    0x8(%ebp),%eax
 847db04:	89 45 f0             	mov    %eax,-0x10(%ebp)
 847db07:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 847db0c:	c7 44 24 08 46 16 00 	movl   $0x1646,0x8(%esp)
 847db13:	00 
 847db14:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847db1b:	08 
 847db1c:	89 04 24             	mov    %eax,(%esp)
 847db1f:	e8 62 1f e1 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 847db24:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 847db2b:	00 
 847db2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 847db30:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 847db36:	89 04 24             	mov    %eax,(%esp)
 847db39:	e8 e8 b0 c4 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 847db3e:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 847db44:	89 04 24             	mov    %eax,(%esp)
 847db47:	e8 fa b0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847db4c:	c7 44 24 04 da 02 00 	movl   $0x2da,0x4(%esp)
 847db53:	00 
 847db54:	89 04 24             	mov    %eax,(%esp)
 847db57:	e8 fa b0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847db5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847db5f:	8b 58 12             	mov    0x12(%eax),%ebx
 847db62:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 847db68:	89 04 24             	mov    %eax,(%esp)
 847db6b:	e8 d6 b0 c4 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 847db70:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 847db74:	89 04 24             	mov    %eax,(%esp)
 847db77:	e8 da b0 c4 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 847db7c:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 847db82:	89 04 24             	mov    %eax,(%esp)
 847db85:	e8 c4 b0 c4 ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 847db8a:	89 04 24             	mov    %eax,(%esp)
 847db8d:	e8 86 02 00 00       	call   847de18 <_ZN12CStreamGuard11GetInBufferI24SIG_AUCTION_OWNER_IS_VIPEEPT_v>
 847db92:	89 45 f4             	mov    %eax,-0xc(%ebp)
 847db95:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847db98:	8b 50 1a             	mov    0x1a(%eax),%edx
 847db9b:	8b 40 16             	mov    0x16(%eax),%eax
 847db9e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 847dba1:	89 41 04             	mov    %eax,0x4(%ecx)
 847dba4:	89 51 08             	mov    %edx,0x8(%ecx)
 847dba7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbaa:	8b 50 1f             	mov    0x1f(%eax),%edx
 847dbad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dbb0:	89 50 0d             	mov    %edx,0xd(%eax)
 847dbb3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbb6:	8b 50 23             	mov    0x23(%eax),%edx
 847dbb9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dbbc:	89 50 11             	mov    %edx,0x11(%eax)
 847dbbf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbc2:	8d 50 27             	lea    0x27(%eax),%edx
 847dbc5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dbc8:	83 c0 15             	add    $0x15,%eax
 847dbcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 847dbcf:	89 04 24             	mov    %eax,(%esp)
 847dbd2:	e8 19 03 c0 ff       	call   807def0 <strcpy@plt>
 847dbd7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbda:	8b 50 12             	mov    0x12(%eax),%edx
 847dbdd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dbe0:	89 10                	mov    %edx,(%eax)
 847dbe2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbe5:	0f b6 50 1e          	movzbl 0x1e(%eax),%edx
 847dbe9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dbec:	88 50 0c             	mov    %dl,0xc(%eax)
 847dbef:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbf2:	8b 50 38             	mov    0x38(%eax),%edx
 847dbf5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dbf8:	89 50 26             	mov    %edx,0x26(%eax)
 847dbfb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 847dbfe:	8b 50 34             	mov    0x34(%eax),%edx
 847dc01:	8b 45 f4             	mov    -0xc(%ebp),%eax
 847dc04:	89 50 22             	mov    %edx,0x22(%eax)
 847dc07:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 847dc0c:	8d 95 e4 fe ff ff    	lea    -0x11c(%ebp),%edx
 847dc12:	89 54 24 08          	mov    %edx,0x8(%esp)
 847dc16:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 847dc1d:	00 
 847dc1e:	89 04 24             	mov    %eax,(%esp)
 847dc21:	e8 b8 33 0f 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 847dc26:	eb 1e                	jmp    847dc46 <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a48>
 847dc28:	89 d3                	mov    %edx,%ebx
 847dc2a:	89 c6                	mov    %eax,%esi
 847dc2c:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 847dc32:	89 04 24             	mov    %eax,(%esp)
 847dc35:	e8 98 ec 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847dc3a:	89 f0                	mov    %esi,%eax
 847dc3c:	89 da                	mov    %ebx,%edx
 847dc3e:	89 04 24             	mov    %eax,(%esp)
 847dc41:	e8 0a 5b 66 00       	call   8ae3750 <_Unwind_Resume>
 847dc46:	8d 85 e4 fe ff ff    	lea    -0x11c(%ebp),%eax
 847dc4c:	89 04 24             	mov    %eax,(%esp)
 847dc4f:	e8 7e ec 19 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 847dc54:	eb 39                	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847dc56:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 847dc5c:	89 44 24 14          	mov    %eax,0x14(%esp)
 847dc60:	c7 44 24 10 34 01 c7 	movl   $0x8c70134,0x10(%esp)
 847dc67:	08 
 847dc68:	c7 44 24 0c 6f 16 00 	movl   $0x166f,0xc(%esp)
 847dc6f:	00 
 847dc70:	c7 44 24 08 80 0e c7 	movl   $0x8c70e80,0x8(%esp)
 847dc77:	08 
 847dc78:	c7 44 24 04 60 ff c6 	movl   $0x8c6ff60,0x4(%esp)
 847dc7f:	08 
 847dc80:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 847dc87:	e8 7e 5f 65 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 847dc8c:	eb 01                	jmp    847dc8f <_ZN21CDispatchServerPacket19dispatchPointPacketEPc+0x1a91>
 847dc8e:	90                   	nop
 847dc8f:	b8 01 00 00 00       	mov    $0x1,%eax
 847dc94:	81 c4 40 01 00 00    	add    $0x140,%esp
 847dc9a:	5b                   	pop    %ebx
 847dc9b:	5e                   	pop    %esi
 847dc9c:	5d                   	pop    %ebp
 847dc9d:	c3                   	ret

```

```c
// CDispatchServerPacket::dispatchPointPacket @ 0x847c1fe

/* CDispatchServerPacket::dispatchPointPacket(char*) */

undefined4 CDispatchServerPacket::dispatchPointPacket(char *param_1)

{
  char *pcVar1;
  uchar uVar2;
  byte bVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint uVar6;
  Stream *pSVar7;
  CStreamGuard *pCVar8;
  size_t __n;
  int iVar9;
  int iVar10;
  CStreamGuard local_120 [8];
  CStreamGuard local_118 [8];
  CStreamGuard local_110 [8];
  CStreamGuard local_108 [8];
  CStreamGuard local_100 [8];
  CStreamGuard local_f8 [8];
  CStreamGuard local_f0 [8];
  CStreamGuard local_e8 [8];
  CStreamGuard local_e0 [8];
  CStreamGuard local_d8 [8];
  CStreamGuard local_d0 [8];
  CStreamGuard local_c8 [8];
  CStreamGuard local_c0 [8];
  CStreamGuard local_b8 [8];
  CStreamGuard local_b0 [8];
  CStreamGuard local_a8 [8];
  CStreamGuard local_a0 [8];
  CStreamGuard local_98 [8];
  uint local_90;
  int local_8c;
  char *local_88;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_84;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_80;
  char *local_7c;
  SIG_AUCTION_RESULT_ASK_PRICE *local_78;
  int local_74;
  char *local_70;
  SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *local_6c;
  char *local_68;
  SIG_AUCTION_RESULT_REGIST *local_64;
  char *local_60;
  SIG_AUCTION_RESULT_BIDDING *local_5c;
  char *local_58;
  SIG_AUCTION_RESULT_REGIST_CANCEL *local_54;
  char *local_50;
  int local_4c;
  char *local_48;
  int local_44;
  char *local_40;
  int local_3c;
  char *local_38;
  SIG_AUCTION_LOG_MESSAGE_PG *local_34;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_30;
  char *local_2c;
  SIG_AUCTION_NOTIFY_AUCTION_SERVICE *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  SIG_AUCTION_OWNER_IS_VIP *local_10;
  
  local_90 = nsl::PACKET_HEADER::getPacketID((PACKET_HEADER *)param_1);
  local_8c = nsl::PACKET_HEADER::getCategory((PACKET_HEADER *)param_1);
  if (local_8c == 0x13) {
    if (local_90 == 9) {
      local_40 = param_1;
      pSVar7 = (Stream *)
               StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x15a6);
      CStreamGuard::CStreamGuard(local_e0,pSVar7,true);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
                    /* try { // try from 0847d183 to 0847d399 has its CatchHandler @ 0847d39c */
      CStreamGuard::operator<<(pCVar8,0xf7);
      iVar9 = *(int *)(local_40 + 0x12);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar8,iVar9);
      iVar9 = *(int *)(local_40 + 0x16);
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar8,iVar9);
      uVar2 = local_40[0x1a];
      pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
      CStreamGuard::operator<<(pCVar8,uVar2);
      local_3c = (uint)*(ushort *)(local_40 + 0x1b) * 0x7d + 2;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar9 = Stream::in_ptr(pSVar7);
      iVar9 = iVar9 + local_3c;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar10 = Stream::size(pSVar7);
      if (iVar10 < iVar9) {
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
        pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
        iVar9 = Stream::in_ptr(pSVar7);
        iVar9 = iVar9 + local_3c;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
        pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
        Stream::resize(pSVar7,iVar9);
      }
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar9 = Stream::in_ptr(pSVar7);
      iVar9 = iVar9 + local_3c;
      pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
      pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
      iVar10 = Stream::size(pSVar7);
      if (iVar10 < iVar9) {
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
        CStreamGuard::operator<<(pCVar8,0);
        LogManager::logFormat
                  (1,"DispatchServerPacket.cpp",
                   "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x15bd,
                   "onAUCTION_MY_BIDDING_INFO_PG, resize failed.");
      }
      else {
        uVar4 = *(ushort *)(local_40 + 0x1b);
        pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e0);
        CStreamGuard::operator<<(pCVar8,uVar4);
        uVar4 = *(ushort *)(local_40 + 0x1b);
        pcVar1 = local_40 + 0x1d;
        pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e0);
        CStreamGuard::put_binary(pCVar8,pcVar1,(uint)uVar4 * 0x7d);
      }
      MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e0);
      CStreamGuard::~CStreamGuard(local_e0);
    }
    else {
      if (local_90 < 10) {
        if (local_90 == 4) {
          local_68 = param_1;
          pSVar7 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1523);
          CStreamGuard::CStreamGuard(local_b8,pSVar7,true);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
                    /* try { // try from 0847c886 to 0847c911 has its CatchHandler @ 0847c914 */
          CStreamGuard::operator<<(pCVar8,0xf2);
          iVar9 = *(int *)(local_68 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b8);
          CStreamGuard::operator<<(pCVar8,iVar9);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_b8);
          local_64 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST>(pCVar8);
          *(undefined4 *)(local_64 + 4) = *(undefined4 *)(local_68 + 0x16);
          local_64[8] = *(SIG_AUCTION_RESULT_REGIST *)(local_68 + 0x1a);
          local_64[9] = *(SIG_AUCTION_RESULT_REGIST *)(local_68 + 0x1b);
          *(undefined4 *)local_64 = 1;
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b8);
          CStreamGuard::~CStreamGuard(local_b8);
          return 1;
        }
        if (local_90 < 5) {
          if (local_90 == 1) {
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x14d5
                                        );
            CStreamGuard::CStreamGuard(local_a0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
                    /* try { // try from 0847c500 to 0847c56a has its CatchHandler @ 0847c56d */
            CStreamGuard::operator<<(pCVar8,0xf9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a0);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_a0);
            local_80 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
            local_80[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x0;
            *(undefined4 *)local_80 = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a0);
            CStreamGuard::~CStreamGuard(local_a0);
            return 1;
          }
          if (local_90 == 0) {
            local_88 = param_1;
            if (*(int *)(param_1 + 0xe) == 0) {
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x14b4);
              CStreamGuard::CStreamGuard(local_98,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_98);
                    /* try { // try from 0847c38a to 0847c3f4 has its CatchHandler @ 0847c3f7 */
              CStreamGuard::operator<<(pCVar8,0xf9);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_98);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_98);
              local_84 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
              *(undefined4 *)local_84 = 1;
              local_84[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_98);
              CStreamGuard::~CStreamGuard(local_98);
              return 1;
            }
            if (*(int *)(param_1 + 0xe) == 2) {
              Timer_CheckAuctionReady::RegistNextTimer();
              return 1;
            }
            if (*(int *)(param_1 + 0xe) == 1) {
              LogManager::logFormat
                        (1,"DispatchServerPacket.cpp",
                         "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x14c8,
                         "AUCTION REGIST SERVER ID DUPLICATE");
              return 1;
            }
            LogManager::logFormat
                      (1,"DispatchServerPacket.cpp",
                       "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x14cc,
                       "AUCTION REGIST UNHANDLED ERROR");
            return 1;
          }
          if (local_90 == 2) {
            local_7c = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x14e9
                                        );
            CStreamGuard::CStreamGuard(local_a8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
                    /* try { // try from 0847c5f4 to 0847c6a8 has its CatchHandler @ 0847c6ab */
            CStreamGuard::operator<<(pCVar8,0xf0);
            iVar9 = *(int *)(local_7c + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_a8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_a8);
            local_78 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_PRICE>(pCVar8);
            *(undefined4 *)local_78 = 1;
            *(undefined4 *)(local_78 + 4) = *(undefined4 *)(local_7c + 0x16);
            *(undefined4 *)(local_78 + 8) = *(undefined4 *)(local_7c + 0x1a);
            for (local_74 = 0; local_74 < 3; local_74 = local_74 + 1) {
              *(undefined4 *)(local_78 + local_74 * 4 + 0xc) = 0;
              *(undefined4 *)(local_78 + (local_74 + 4) * 4 + 8) = 0;
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_a8);
            CStreamGuard::~CStreamGuard(local_a8);
            return 1;
          }
          if (local_90 == 3) {
            local_70 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1502
                                        );
            CStreamGuard::CStreamGuard(local_b0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
                    /* try { // try from 0847c732 to 0847c7fc has its CatchHandler @ 0847c7ff */
            CStreamGuard::operator<<(pCVar8,0xf1);
            iVar9 = *(int *)(local_70 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_b0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_b0);
            local_6c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM>(pCVar8);
            *(undefined4 *)(local_6c + 4) = *(undefined4 *)(local_70 + 0x16);
            *(undefined2 *)(local_6c + 8) = *(undefined2 *)(local_70 + 0x1a);
            local_6c[10] = *(SIG_AUCTION_RESULT_ASK_REGISTED_ITEM_NUM *)(local_70 + 0x1c);
            *(undefined2 *)(local_6c + 0xb) = *(undefined2 *)(local_70 + 0x1d);
            *(undefined4 *)(local_6c + 0xd) = *(undefined4 *)(local_70 + 0x1f);
            *(undefined4 *)(local_6c + 0x11) = *(undefined4 *)(local_70 + 0x23);
            *(undefined4 *)(local_6c + 0x15) = *(undefined4 *)(local_70 + 0x27);
            *(undefined4 *)(local_6c + 0x19) = *(undefined4 *)(local_70 + 0x2b);
            *(undefined4 *)local_6c = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_b0);
            CStreamGuard::~CStreamGuard(local_b0);
            return 1;
          }
        }
        else {
          if (local_90 == 6) {
            local_58 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x154e
                                        );
            CStreamGuard::CStreamGuard(local_c8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
                    /* try { // try from 0847cb04 to 0847cb8f has its CatchHandler @ 0847cb92 */
            CStreamGuard::operator<<(pCVar8,0xf4);
            iVar9 = *(int *)(local_58 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_c8);
            local_54 = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_REGIST_CANCEL>(pCVar8);
            *(undefined4 *)(local_54 + 4) = *(undefined4 *)(local_58 + 0x16);
            local_54[8] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_58 + 0x1a);
            local_54[9] = *(SIG_AUCTION_RESULT_REGIST_CANCEL *)(local_58 + 0x1b);
            *(undefined4 *)local_54 = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c8);
            CStreamGuard::~CStreamGuard(local_c8);
            return 1;
          }
          if (local_90 < 6) {
            local_60 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1536
                                        );
            CStreamGuard::CStreamGuard(local_c0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
                    /* try { // try from 0847c99b to 0847ca7a has its CatchHandler @ 0847ca7d */
            CStreamGuard::operator<<(pCVar8,0xf3);
            iVar9 = *(int *)(local_60 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_c0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_c0);
            local_5c = CStreamGuard::GetInBuffer<SIG_AUCTION_RESULT_BIDDING>(pCVar8);
            *(undefined4 *)(local_5c + 4) = *(undefined4 *)(local_60 + 0x16);
            *(undefined4 *)(local_5c + 8) = *(undefined4 *)(local_60 + 0x1a);
            local_5c[0xc] = *(SIG_AUCTION_RESULT_BIDDING *)(local_60 + 0x1e);
            local_5c[0xd] = *(SIG_AUCTION_RESULT_BIDDING *)(local_60 + 0x1f);
            uVar5 = *(undefined4 *)(local_60 + 0x24);
            *(undefined4 *)(local_5c + 0xe) = *(undefined4 *)(local_60 + 0x20);
            *(undefined4 *)(local_5c + 0x12) = uVar5;
            *(undefined4 *)local_5c = 1;
            __n = strlen(local_60 + 0x28);
            strncpy((char *)(local_5c + 0x16),local_60 + 0x28,__n);
            *(undefined4 *)(local_5c + 0x36) = *(undefined4 *)(local_60 + 0x48);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_c0);
            CStreamGuard::~CStreamGuard(local_c0);
            return 1;
          }
          if (local_90 == 7) {
            local_50 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1561
                                        );
            CStreamGuard::CStreamGuard(local_d0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
                    /* try { // try from 0847cc19 to 0847ce55 has its CatchHandler @ 0847ce58 */
            CStreamGuard::operator<<(pCVar8,0xf5);
            iVar9 = *(int *)(local_50 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            iVar9 = *(int *)(local_50 + 0x16);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,iVar9);
            uVar2 = local_50[0x1a];
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,uVar2);
            uVar6 = *(uint *)(local_50 + 0x1b);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
            CStreamGuard::operator<<(pCVar8,uVar6);
            local_4c = (uint)*(ushort *)(local_50 + 0x1f) * 0x89 + 2;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_4c;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              iVar9 = Stream::in_ptr(pSVar7);
              iVar9 = iVar9 + local_4c;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              Stream::resize(pSVar7,iVar9);
            }
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_4c;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
              CStreamGuard::operator<<(pCVar8,0);
              LogManager::logFormat
                        (1,"DispatchServerPacket.cpp",
                         "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x1579,
                         "onAUCTION_ITEM_LIST_PG, resize failed.");
            }
            else {
              uVar4 = *(ushort *)(local_50 + 0x1f);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d0);
              CStreamGuard::operator<<(pCVar8,uVar4);
              uVar4 = *(ushort *)(local_50 + 0x1f);
              pcVar1 = local_50 + 0x21;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d0);
              CStreamGuard::put_binary(pCVar8,pcVar1,(uint)uVar4 * 0x89);
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d0);
            CStreamGuard::~CStreamGuard(local_d0);
            return 1;
          }
          if (local_90 == 8) {
            local_48 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1584
                                        );
            CStreamGuard::CStreamGuard(local_d8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
                    /* try { // try from 0847cedf to 0847d0f9 has its CatchHandler @ 0847d0fc */
            CStreamGuard::operator<<(pCVar8,0xf6);
            iVar9 = *(int *)(local_48 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            iVar9 = *(int *)(local_48 + 0x16);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            uVar2 = local_48[0x1a];
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
            CStreamGuard::operator<<(pCVar8,uVar2);
            local_44 = (uint)(byte)local_48[0x1b] * 0x75 + 1;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_44;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              iVar9 = Stream::in_ptr(pSVar7);
              iVar9 = iVar9 + local_44;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
              Stream::resize(pSVar7,iVar9);
            }
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar9 = Stream::in_ptr(pSVar7);
            iVar9 = iVar9 + local_44;
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
            pSVar7 = (Stream *)CStreamGuard::Get(pCVar8);
            iVar10 = Stream::size(pSVar7);
            if (iVar10 < iVar9) {
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_d8);
              CStreamGuard::operator<<(pCVar8,0);
              LogManager::logFormat
                        (1,"DispatchServerPacket.cpp",
                         "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x159b,
                         "onAUCTION_MY_REGISTED_ITEM_INFO_PG, resize failed.");
            }
            else {
              pcVar1 = local_48 + 0x1b;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              CStreamGuard::put_binary(pCVar8,pcVar1,1);
              bVar3 = local_48[0x1b];
              pcVar1 = local_48 + 0x1c;
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_d8);
              CStreamGuard::put_binary(pCVar8,pcVar1,(uint)bVar3 * 0x75);
            }
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_d8);
            CStreamGuard::~CStreamGuard(local_d8);
            return 1;
          }
        }
      }
      else {
        if (local_90 == 0xe) {
          local_14 = param_1;
          pSVar7 = (Stream *)
                   StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1646);
          CStreamGuard::CStreamGuard(local_120,pSVar7,true);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_120);
                    /* try { // try from 0847db57 to 0847dc25 has its CatchHandler @ 0847dc28 */
          CStreamGuard::operator<<(pCVar8,0x2da);
          iVar9 = *(int *)(local_14 + 0x12);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_120);
          CStreamGuard::operator<<(pCVar8,iVar9);
          pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_120);
          local_10 = CStreamGuard::GetInBuffer<SIG_AUCTION_OWNER_IS_VIP>(pCVar8);
          uVar5 = *(undefined4 *)(local_14 + 0x1a);
          *(undefined4 *)(local_10 + 4) = *(undefined4 *)(local_14 + 0x16);
          *(undefined4 *)(local_10 + 8) = uVar5;
          *(undefined4 *)(local_10 + 0xd) = *(undefined4 *)(local_14 + 0x1f);
          *(undefined4 *)(local_10 + 0x11) = *(undefined4 *)(local_14 + 0x23);
          strcpy((char *)(local_10 + 0x15),local_14 + 0x27);
          *(undefined4 *)local_10 = *(undefined4 *)(local_14 + 0x12);
          local_10[0xc] = *(SIG_AUCTION_OWNER_IS_VIP *)(local_14 + 0x1e);
          *(undefined4 *)(local_10 + 0x26) = *(undefined4 *)(local_14 + 0x38);
          *(undefined4 *)(local_10 + 0x22) = *(undefined4 *)(local_14 + 0x34);
          MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_120);
          CStreamGuard::~CStreamGuard(local_120);
          return 1;
        }
        if (local_90 < 0xf) {
          if (local_90 == 0xb) {
            local_38 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x15ce
                                        );
            CStreamGuard::CStreamGuard(local_e8,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
                    /* try { // try from 0847d423 to 0847d4f4 has its CatchHandler @ 0847d4f7 */
            CStreamGuard::operator<<(pCVar8,0xfa);
            iVar9 = *(int *)(local_38 + 0x12);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_e8);
            CStreamGuard::operator<<(pCVar8,iVar9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_e8);
            local_34 = CStreamGuard::GetInBuffer<SIG_AUCTION_LOG_MESSAGE_PG>(pCVar8);
            *local_34 = *(SIG_AUCTION_LOG_MESSAGE_PG *)(local_38 + 0x16);
            uVar5 = *(undefined4 *)(local_38 + 0x1b);
            *(undefined4 *)(local_34 + 1) = *(undefined4 *)(local_38 + 0x17);
            *(undefined4 *)(local_34 + 5) = uVar5;
            *(undefined4 *)(local_34 + 9) = *(undefined4 *)(local_38 + 0x1f);
            *(undefined4 *)(local_34 + 0xd) = *(undefined4 *)(local_38 + 0x23);
            *(undefined4 *)(local_34 + 0x11) = *(undefined4 *)(local_38 + 0x27);
            local_34[0x15] = *(SIG_AUCTION_LOG_MESSAGE_PG *)(local_38 + 0x2b);
            *(undefined4 *)(local_34 + 0x16) = *(undefined4 *)(local_38 + 0x2c);
            *(undefined2 *)(local_34 + 0x1a) = *(undefined2 *)(local_38 + 0x30);
            *(undefined4 *)(local_34 + 0x1c) = *(undefined4 *)(local_38 + 0x32);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_e8);
            CStreamGuard::~CStreamGuard(local_e8);
            return 1;
          }
          if (local_90 < 0xb) {
            return 1;
          }
          if (local_90 == 0xc) {
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x15e5
                                        );
            CStreamGuard::CStreamGuard(local_f0,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
                    /* try { // try from 0847d578 to 0847d5e2 has its CatchHandler @ 0847d5e5 */
            CStreamGuard::operator<<(pCVar8,0xf9);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f0);
            CStreamGuard::operator<<(pCVar8,-1);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_f0);
            local_30 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
            local_30[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
            *(undefined4 *)local_30 = 1;
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f0);
            CStreamGuard::~CStreamGuard(local_f0);
            return 1;
          }
          if (local_90 == 0xd) {
            local_2c = param_1;
            if (param_1[0x12] != '\0') {
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x15fa);
              CStreamGuard::CStreamGuard(local_f8,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f8);
                    /* try { // try from 0847d67b to 0847d6e5 has its CatchHandler @ 0847d6e8 */
              CStreamGuard::operator<<(pCVar8,0xf9);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_f8);
              CStreamGuard::operator<<(pCVar8,-1);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_f8);
              local_28 = CStreamGuard::GetInBuffer<SIG_AUCTION_NOTIFY_AUCTION_SERVICE>(pCVar8);
              *(undefined4 *)local_28 = 1;
              local_28[4] = (SIG_AUCTION_NOTIFY_AUCTION_SERVICE)0x1;
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_f8);
              CStreamGuard::~CStreamGuard(local_f8);
              return 1;
            }
            Timer_CheckAuctionReady::RegistNextTimer();
            return 1;
          }
        }
        else {
          if (local_90 == 0x2719) {
            local_20 = param_1;
            pSVar7 = (Stream *)
                     StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",0x1620
                                        );
            CStreamGuard::CStreamGuard(local_108,pSVar7,true);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_108);
                    /* try { // try from 0847d871 to 0847d8df has its CatchHandler @ 0847d8e2 */
            CStreamGuard::operator<<(pCVar8,0x2a6);
            iVar9 = *(int *)(local_20 + 0xf);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_108);
            CStreamGuard::operator<<(pCVar8,iVar9);
            uVar4 = *(ushort *)(local_20 + 2);
            pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_108);
            CStreamGuard::put_binary(pCVar8,local_20,(uint)uVar4);
            MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_108);
            CStreamGuard::~CStreamGuard(local_108);
            return 1;
          }
          if (local_90 < 0x271a) {
            if (local_90 == 0x2718) {
              local_24 = param_1;
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x1613);
              CStreamGuard::CStreamGuard(local_100,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_100);
                    /* try { // try from 0847d779 to 0847d7e7 has its CatchHandler @ 0847d7ea */
              CStreamGuard::operator<<(pCVar8,0x2a5);
              iVar9 = *(int *)(local_24 + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_100);
              CStreamGuard::operator<<(pCVar8,iVar9);
              uVar4 = *(ushort *)(local_24 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_100);
              CStreamGuard::put_binary(pCVar8,local_24,(uint)uVar4);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_100);
              CStreamGuard::~CStreamGuard(local_100);
              return 1;
            }
          }
          else {
            if (local_90 == 0x271a) {
              local_1c = param_1;
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x162c);
              CStreamGuard::CStreamGuard(local_110,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_110);
                    /* try { // try from 0847d969 to 0847d9d7 has its CatchHandler @ 0847d9da */
              CStreamGuard::operator<<(pCVar8,0x2a7);
              iVar9 = *(int *)(local_1c + 10);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_110);
              CStreamGuard::operator<<(pCVar8,iVar9);
              uVar4 = *(ushort *)(local_1c + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_110);
              CStreamGuard::put_binary(pCVar8,local_1c,(uint)uVar4);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_110);
              CStreamGuard::~CStreamGuard(local_110);
              return 1;
            }
            if (local_90 == 0x271b) {
              local_18 = param_1;
              pSVar7 = (Stream *)
                       StreamPool::Acquire(GlobalData::s_stream_pool,"DispatchServerPacket.cpp",
                                           0x1638);
              CStreamGuard::CStreamGuard(local_118,pSVar7,true);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_118);
                    /* try { // try from 0847da61 to 0847dacd has its CatchHandler @ 0847dad0 */
              CStreamGuard::operator<<(pCVar8,0x2a8);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator*(local_118);
              CStreamGuard::operator<<(pCVar8,-1);
              uVar4 = *(ushort *)(local_18 + 2);
              pCVar8 = (CStreamGuard *)CStreamGuard::operator->(local_118);
              CStreamGuard::put_binary(pCVar8,local_18,(uint)uVar4);
              MsgQueueMgr::put(GlobalData::s_msgq_mgr,1,local_118);
              CStreamGuard::~CStreamGuard(local_118);
              return 1;
            }
          }
        }
      }
      LogManager::logFormat
                (1,"DispatchServerPacket.cpp",
                 "static bool CDispatchServerPacket::dispatchPointPacket(char*)",0x166f,
                 "[AUCTION PACKET ERROR] not exist packet id (%d)",local_90);
    }
  }
  return 1;
}

```

