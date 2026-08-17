# Inter_AuctionResultRegist

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d6ad6 Inter_AuctionResultRegist::dispatch_sig  [0x084d6ad6-0x84d6ca3] ===
 84d6ad6:	55                   	push   %ebp
 84d6ad7:	89 e5                	mov    %esp,%ebp
 84d6ad9:	56                   	push   %esi
 84d6ada:	53                   	push   %ebx
 84d6adb:	83 ec 40             	sub    $0x40,%esp
 84d6ade:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84d6ae2:	75 0a                	jne    84d6aee <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x18>
 84d6ae4:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d6ae9:	e9 ac 01 00 00       	jmp    84d6c9a <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x1c4>
 84d6aee:	8b 45 10             	mov    0x10(%ebp),%eax
 84d6af1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d6af4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d6af7:	8b 40 04             	mov    0x4(%eax),%eax
 84d6afa:	89 c3                	mov    %eax,%ebx
 84d6afc:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6aff:	89 04 24             	mov    %eax,(%esp)
 84d6b02:	e8 47 51 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6b07:	39 c3                	cmp    %eax,%ebx
 84d6b09:	0f 95 c0             	setne  %al
 84d6b0c:	84 c0                	test   %al,%al
 84d6b0e:	74 0a                	je     84d6b1a <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x44>
 84d6b10:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d6b15:	e9 80 01 00 00       	jmp    84d6c9a <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x1c4>
 84d6b1a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d6b21:	eb 75                	jmp    84d6b98 <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0xc2>
 84d6b23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d6b26:	8b 04 85 4c bb 3a 09 	mov    0x93abb4c(,%eax,4),%eax
 84d6b2d:	89 c3                	mov    %eax,%ebx
 84d6b2f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6b32:	89 04 24             	mov    %eax,(%esp)
 84d6b35:	e8 14 51 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6b3a:	39 c3                	cmp    %eax,%ebx
 84d6b3c:	0f 94 c0             	sete   %al
 84d6b3f:	84 c0                	test   %al,%al
 84d6b41:	74 51                	je     84d6b94 <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0xbe>
 84d6b43:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6b46:	89 04 24             	mov    %eax,(%esp)
 84d6b49:	e8 00 51 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d6b4e:	89 c3                	mov    %eax,%ebx
 84d6b50:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d6b57:	00 
 84d6b58:	c7 44 24 08 b4 3a 00 	movl   $0x3ab4,0x8(%esp)
 84d6b5f:	00 
 84d6b60:	c7 44 24 04 60 c5 c8 	movl   $0x8c8c560,0x4(%esp)
 84d6b67:	08 
 84d6b68:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d6b6b:	89 04 24             	mov    %eax,(%esp)
 84d6b6e:	e8 a5 8b 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d6b73:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d6b77:	c7 44 24 08 44 92 c8 	movl   $0x8c89244,0x8(%esp)
 84d6b7e:	08 
 84d6b7f:	c7 44 24 04 e9 91 c8 	movl   $0x8c891e9,0x4(%esp)
 84d6b86:	08 
 84d6b87:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d6b8a:	89 04 24             	mov    %eax,(%esp)
 84d6b8d:	e8 f6 8b 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d6b92:	eb 0f                	jmp    84d6ba3 <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0xcd>
 84d6b94:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d6b98:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 84d6b9c:	0f 9e c0             	setle  %al
 84d6b9f:	84 c0                	test   %al,%al
 84d6ba1:	75 80                	jne    84d6b23 <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x4d>
 84d6ba3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6ba6:	89 04 24             	mov    %eax,(%esp)
 84d6ba9:	e8 9e 71 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d6bae:	c7 44 24 08 ba 00 00 	movl   $0xba,0x8(%esp)
 84d6bb5:	00 
 84d6bb6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d6bbd:	00 
 84d6bbe:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6bc1:	89 04 24             	mov    %eax,(%esp)
 84d6bc4:	e8 33 4d bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d6bc9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d6bcc:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d6bd0:	0f b6 c0             	movzbl %al,%eax
 84d6bd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6bd7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6bda:	89 04 24             	mov    %eax,(%esp)
 84d6bdd:	e8 3e 4d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d6be2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d6be5:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d6be9:	84 c0                	test   %al,%al
 84d6beb:	75 19                	jne    84d6c06 <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x130>
 84d6bed:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d6bf0:	0f b6 40 09          	movzbl 0x9(%eax),%eax
 84d6bf4:	0f b6 c0             	movzbl %al,%eax
 84d6bf7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6bfb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6bfe:	89 04 24             	mov    %eax,(%esp)
 84d6c01:	e8 1a 4d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d6c06:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d6c09:	8b 00                	mov    (%eax),%eax
 84d6c0b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6c0f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6c12:	89 04 24             	mov    %eax,(%esp)
 84d6c15:	e8 06 4d bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d6c1a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d6c21:	00 
 84d6c22:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6c25:	89 04 24             	mov    %eax,(%esp)
 84d6c28:	e8 2b 4d bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d6c2d:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6c30:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d6c34:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6c37:	89 04 24             	mov    %eax,(%esp)
 84d6c3a:	e8 7b 19 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d6c3f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d6c42:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84d6c46:	3c 01                	cmp    $0x1,%al
 84d6c48:	75 23                	jne    84d6c6d <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x197>
 84d6c4a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d6c51:	00 
 84d6c52:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84d6c59:	00 
 84d6c5a:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 84d6c61:	00 
 84d6c62:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d6c65:	89 04 24             	mov    %eax,(%esp)
 84d6c68:	e8 23 b7 c4 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 84d6c6d:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d6c72:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6c75:	89 04 24             	mov    %eax,(%esp)
 84d6c78:	e8 03 72 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d6c7d:	eb 1b                	jmp    84d6c9a <_ZN25Inter_AuctionResultRegist12dispatch_sigEP5CUserPci+0x1c4>
 84d6c7f:	89 d3                	mov    %edx,%ebx
 84d6c81:	89 c6                	mov    %eax,%esi
 84d6c83:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84d6c86:	89 04 24             	mov    %eax,(%esp)
 84d6c89:	e8 f2 71 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d6c8e:	89 f0                	mov    %esi,%eax
 84d6c90:	89 da                	mov    %ebx,%edx
 84d6c92:	89 04 24             	mov    %eax,(%esp)
 84d6c95:	e8 b6 ca 60 00       	call   8ae3750 <_Unwind_Resume>
 84d6c9a:	89 d8                	mov    %ebx,%eax
 84d6c9c:	83 c4 40             	add    $0x40,%esp
 84d6c9f:	5b                   	pop    %ebx
 84d6ca0:	5e                   	pop    %esi
 84d6ca1:	5d                   	pop    %ebp
 84d6ca2:	c3                   	ret
 84d6ca3:	90                   	nop

```

```c
// Inter_AuctionResultRegist::dispatch_sig @ 0x84d6ad6

/* Inter_AuctionResultRegist::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_AuctionResultRegist::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int *local_14;
  int local_10;
  
  if (param_2 != (char *)0x0) {
    local_14 = (int *)param_3;
    iVar1 = *(int *)(param_3 + 4);
    iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    if (iVar1 == iVar2) {
      for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
        iVar1 = *(int *)(gmList + local_10 * 4);
        iVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
        if (iVar1 == iVar2) {
          uVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
          cMyTrace::cMyTrace(local_24,
                             "virtual int Inter_AuctionResultRegist::dispatch_sig(CUser*, char*, int)"
                             ,0x3ab4,0);
          cMyTrace::operator()
                    (local_24,"Trace Auction Delay, %s(%d)","ACK AuctionResultRegist",uVar3);
          break;
        }
      }
      PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084d6bc4 to 084d6c6c has its CatchHandler @ 084d6c7f */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,1,0xba);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,(uint)*(byte *)(local_14 + 2));
      if ((char)local_14[2] == '\0') {
        InterfacePacketBuf::put_byte
                  ((InterfacePacketBuf *)local_30,(uint)*(byte *)((int)local_14 + 9));
      }
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*local_14);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
      CUser::Send((CUser *)param_2,local_30);
      if ((char)local_14[2] == '\x01') {
        APSystem::CUserProc::ClearActionAndSendtoUser(param_2,9,0,0);
      }
      PacketGuard::~PacketGuard(local_30);
    }
  }
  return 0;
}

```

