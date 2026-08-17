# Dispatcher_AuctionBuyItemApiece

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08214e44 Dispatcher_AuctionBuyItemApiece::dispatch_sig  [0x08214e44-0x82151b7] ===
 8214e44:	55                   	push   %ebp
 8214e45:	89 e5                	mov    %esp,%ebp
 8214e47:	56                   	push   %esi
 8214e48:	53                   	push   %ebx
 8214e49:	83 ec 60             	sub    $0x60,%esp
 8214e4c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214e53:	00 
 8214e54:	c7 44 24 04 4f 01 00 	movl   $0x14f,0x4(%esp)
 8214e5b:	00 
 8214e5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214e5f:	89 04 24             	mov    %eax,(%esp)
 8214e62:	e8 2f bc 46 00       	call   8680a96 <_ZN5CUser15AuctionPreCheckE14ENUM_CMDPACKET8PAY_TYPE>
 8214e67:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8214e6a:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8214e6e:	78 08                	js     8214e78 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x34>
 8214e70:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8214e73:	e9 39 03 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8214e78:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8214e7b:	89 04 24             	mov    %eax,(%esp)
 8214e7e:	e8 61 9a 01 00       	call   822e8e4 <_ZN30PCK_AUCTION_BUY_ITEM_APIECE_GAC1Ev>
 8214e83:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214e86:	89 04 24             	mov    %eax,(%esp)
 8214e89:	e8 08 3e eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8214e8e:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8214e91:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214e94:	89 04 24             	mov    %eax,(%esp)
 8214e97:	e8 b2 6d eb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8214e9c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8214e9f:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8214ea2:	83 c0 1a             	add    $0x1a,%eax
 8214ea5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214ea9:	8b 45 10             	mov    0x10(%ebp),%eax
 8214eac:	89 04 24             	mov    %eax,(%esp)
 8214eaf:	e8 3c 82 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8214eb4:	83 f0 01             	xor    $0x1,%eax
 8214eb7:	84 c0                	test   %al,%al
 8214eb9:	74 29                	je     8214ee4 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0xa0>
 8214ebb:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214ec2:	00 
 8214ec3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214eca:	00 
 8214ecb:	c7 44 24 04 40 dd bc 	movl   $0x8bcdd40,0x4(%esp)
 8214ed2:	08 
 8214ed3:	c7 04 24 01 c5 00 00 	movl   $0xc501,(%esp)
 8214eda:	e8 f8 b9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214edf:	e9 cd 02 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8214ee4:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8214ee7:	83 c0 26             	add    $0x26,%eax
 8214eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214eee:	8b 45 10             	mov    0x10(%ebp),%eax
 8214ef1:	89 04 24             	mov    %eax,(%esp)
 8214ef4:	e8 f7 81 37 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8214ef9:	83 f0 01             	xor    $0x1,%eax
 8214efc:	84 c0                	test   %al,%al
 8214efe:	74 29                	je     8214f29 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0xe5>
 8214f00:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214f07:	00 
 8214f08:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214f0f:	00 
 8214f10:	c7 44 24 04 40 dd bc 	movl   $0x8bcdd40,0x4(%esp)
 8214f17:	08 
 8214f18:	c7 04 24 02 c5 00 00 	movl   $0xc502,(%esp)
 8214f1f:	e8 b3 b9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214f24:	e9 88 02 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8214f29:	8d 45 aa             	lea    -0x56(%ebp),%eax
 8214f2c:	83 c0 1e             	add    $0x1e,%eax
 8214f2f:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 8214f36:	00 
 8214f37:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214f3b:	8b 45 10             	mov    0x10(%ebp),%eax
 8214f3e:	89 04 24             	mov    %eax,(%esp)
 8214f41:	e8 6c 84 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8214f46:	83 f0 01             	xor    $0x1,%eax
 8214f49:	84 c0                	test   %al,%al
 8214f4b:	74 29                	je     8214f76 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x132>
 8214f4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214f54:	00 
 8214f55:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214f5c:	00 
 8214f5d:	c7 44 24 04 40 dd bc 	movl   $0x8bcdd40,0x4(%esp)
 8214f64:	08 
 8214f65:	c7 04 24 03 c5 00 00 	movl   $0xc503,(%esp)
 8214f6c:	e8 66 b9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214f71:	e9 3b 02 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8214f76:	c7 45 df 00 00 00 00 	movl   $0x0,-0x21(%ebp)
 8214f7d:	c7 45 e3 00 00 00 00 	movl   $0x0,-0x1d(%ebp)
 8214f84:	c7 45 e7 00 00 00 00 	movl   $0x0,-0x19(%ebp)
 8214f8b:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8214f8f:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8214f96:	00 
 8214f97:	8d 45 df             	lea    -0x21(%ebp),%eax
 8214f9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8214f9e:	8b 45 10             	mov    0x10(%ebp),%eax
 8214fa1:	89 04 24             	mov    %eax,(%esp)
 8214fa4:	e8 09 84 37 00       	call   858d3b2 <_ZN9PacketBuf10get_binaryEPci>
 8214fa9:	83 f0 01             	xor    $0x1,%eax
 8214fac:	84 c0                	test   %al,%al
 8214fae:	74 29                	je     8214fd9 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x195>
 8214fb0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8214fb7:	00 
 8214fb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8214fbf:	00 
 8214fc0:	c7 44 24 04 40 dd bc 	movl   $0x8bcdd40,0x4(%esp)
 8214fc7:	08 
 8214fc8:	c7 04 24 08 c5 00 00 	movl   $0xc508,(%esp)
 8214fcf:	e8 03 b9 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 8214fd4:	e9 d8 01 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8214fd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8214fdc:	89 04 24             	mov    %eax,(%esp)
 8214fdf:	e8 a4 51 f6 ff       	call   817a188 <_ZNK15CUserCharacInfo17getCurCharacMoneyEv>
 8214fe4:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8214fe7:	39 d0                	cmp    %edx,%eax
 8214fe9:	0f 9c c0             	setl   %al
 8214fec:	84 c0                	test   %al,%al
 8214fee:	74 25                	je     8215015 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x1d1>
 8214ff0:	c7 44 24 08 90 00 00 	movl   $0x90,0x8(%esp)
 8214ff7:	00 
 8214ff8:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 8214fff:	00 
 8215000:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215003:	89 04 24             	mov    %eax,(%esp)
 8215006:	e8 37 6f 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821500b:	b8 00 00 00 00       	mov    $0x0,%eax
 8215010:	e9 9c 01 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8215015:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215018:	89 04 24             	mov    %eax,(%esp)
 821501b:	e8 6e 52 ec ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8215020:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8215023:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8215026:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 821502d:	00 
 821502e:	c7 44 24 08 1a 00 00 	movl   $0x1a,0x8(%esp)
 8215035:	00 
 8215036:	89 44 24 04          	mov    %eax,0x4(%esp)
 821503a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821503d:	89 04 24             	mov    %eax,(%esp)
 8215040:	e8 07 a5 2e 00       	call   84ff54c <_ZN10CInventory9use_moneyEi15eMoneySubReasonb>
 8215045:	83 f0 01             	xor    $0x1,%eax
 8215048:	84 c0                	test   %al,%al
 821504a:	74 25                	je     8215071 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x22d>
 821504c:	c7 44 24 08 93 00 00 	movl   $0x93,0x8(%esp)
 8215053:	00 
 8215054:	c7 44 24 04 bc 00 00 	movl   $0xbc,0x4(%esp)
 821505b:	00 
 821505c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821505f:	89 04 24             	mov    %eax,(%esp)
 8215062:	e8 db 6e 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8215067:	b8 00 00 00 00       	mov    $0x0,%eax
 821506c:	e9 40 01 00 00       	jmp    82151b1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x36d>
 8215071:	8b 45 0c             	mov    0xc(%ebp),%eax
 8215074:	89 04 24             	mov    %eax,(%esp)
 8215077:	e8 5c b4 43 00       	call   86504d8 <_ZN5CUser13SaveMoneyCoinEv>
 821507c:	a1 48 be 40 09       	mov    0x940be48,%eax
 8215081:	8d 55 aa             	lea    -0x56(%ebp),%edx
 8215084:	89 54 24 04          	mov    %edx,0x4(%esp)
 8215088:	89 04 24             	mov    %eax,(%esp)
 821508b:	e8 8c 2a 0e 00       	call   82f7b1c <_ZN19CAuctionServerProxy10SendPacketEPN3nsl13PACKET_HEADERE>
 8215090:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 8215093:	3d 87 13 00 00       	cmp    $0x1387,%eax
 8215098:	0f 8e 0e 01 00 00    	jle    82151ac <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x368>
 821509e:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82150a3:	c7 44 24 08 29 c5 00 	movl   $0xc529,0x8(%esp)
 82150aa:	00 
 82150ab:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 82150b2:	08 
 82150b3:	89 04 24             	mov    %eax,(%esp)
 82150b6:	e8 cb a9 07 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82150bb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82150c2:	00 
 82150c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82150c7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82150ca:	89 04 24             	mov    %eax,(%esp)
 82150cd:	e8 54 3b eb ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 82150d2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82150d5:	89 04 24             	mov    %eax,(%esp)
 82150d8:	e8 69 3b eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82150dd:	c7 44 24 04 09 03 00 	movl   $0x309,0x4(%esp)
 82150e4:	00 
 82150e5:	89 04 24             	mov    %eax,(%esp)
 82150e8:	e8 69 3b eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82150ed:	8b 45 0c             	mov    0xc(%ebp),%eax
 82150f0:	89 04 24             	mov    %eax,(%esp)
 82150f3:	e8 9e 3b eb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 82150f8:	89 c3                	mov    %eax,%ebx
 82150fa:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82150fd:	89 04 24             	mov    %eax,(%esp)
 8215100:	e8 41 3b eb ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8215105:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8215109:	89 04 24             	mov    %eax,(%esp)
 821510c:	e8 45 3b eb ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8215111:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8215114:	89 04 24             	mov    %eax,(%esp)
 8215117:	e8 32 3b eb ff       	call   80c8c4e <_ZN12CStreamGuardptEv>
 821511c:	89 04 24             	mov    %eax,(%esp)
 821511f:	e8 72 2a 02 00       	call   8237b96 <_ZN12CStreamGuard11GetInBufferI21SIG_AUCTION_MONEY_SUBEEPT_v>
 8215124:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8215127:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 821512e:	00 
 821512f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8215136:	00 
 8215137:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821513a:	89 04 24             	mov    %eax,(%esp)
 821513d:	e8 7e 8b e6 ff       	call   807dcc0 <memset@plt>
 8215142:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8215145:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8215148:	89 50 04             	mov    %edx,0x4(%eax)
 821514b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821514e:	8d 50 08             	lea    0x8(%eax),%edx
 8215151:	c7 44 24 08 0d 00 00 	movl   $0xd,0x8(%esp)
 8215158:	00 
 8215159:	8d 45 df             	lea    -0x21(%ebp),%eax
 821515c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8215160:	89 14 24             	mov    %edx,(%esp)
 8215163:	e8 68 87 e6 ff       	call   807d8d0 <strncpy@plt>
 8215168:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 821516d:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 8215170:	89 54 24 08          	mov    %edx,0x8(%esp)
 8215174:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 821517b:	00 
 821517c:	89 04 24             	mov    %eax,(%esp)
 821517f:	e8 5a be 35 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 8215184:	eb 1b                	jmp    82151a1 <_ZN31Dispatcher_AuctionBuyItemApiece12dispatch_sigEP5CUserR9PacketBuf+0x35d>
 8215186:	89 d3                	mov    %edx,%ebx
 8215188:	89 c6                	mov    %eax,%esi
 821518a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 821518d:	89 04 24             	mov    %eax,(%esp)
 8215190:	e8 3d 77 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 8215195:	89 f0                	mov    %esi,%eax
 8215197:	89 da                	mov    %ebx,%edx
 8215199:	89 04 24             	mov    %eax,(%esp)
 821519c:	e8 af e5 8c 00       	call   8ae3750 <_Unwind_Resume>
 82151a1:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 82151a4:	89 04 24             	mov    %eax,(%esp)
 82151a7:	e8 26 77 40 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82151ac:	b8 00 00 00 00       	mov    $0x0,%eax
 82151b1:	83 c4 60             	add    $0x60,%esp
 82151b4:	5b                   	pop    %ebx
 82151b5:	5e                   	pop    %esi
 82151b6:	5d                   	pop    %ebp
 82151b7:	c3                   	ret

```

```c
// Dispatcher_AuctionBuyItemApiece::dispatch_sig @ 0x8214e44

/* Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&) */

int __thiscall
Dispatcher_AuctionBuyItemApiece::dispatch_sig
          (Dispatcher_AuctionBuyItemApiece *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  Stream *pSVar3;
  CStreamGuard *pCVar4;
  PCK_AUCTION_BUY_ITEM_APIECE_GA local_5a [18];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  char acStack_3c [8];
  int iStack_34;
  CStreamGuard local_30 [11];
  char local_25 [13];
  int local_18;
  CInventory *local_14;
  SIG_AUCTION_MONEY_SUB *local_10;
  
  local_18 = CUser::AuctionPreCheck(param_1,0x14f,0);
  if (local_18 < 0) {
    PCK_AUCTION_BUY_ITEM_APIECE_GA::PCK_AUCTION_BUY_ITEM_APIECE_GA(local_5a);
    local_48 = CUser::GetUID(param_1);
    local_44 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    cVar1 = PacketBuf::get_int(param_2,&local_40);
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_2,&iStack_34);
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_binary(param_2,acStack_3c,8);
        if (cVar1 == '\x01') {
          local_25[0] = '\0';
          local_25[1] = '\0';
          local_25[2] = '\0';
          local_25[3] = '\0';
          local_25[4] = '\0';
          local_25[5] = '\0';
          local_25[6] = '\0';
          local_25[7] = '\0';
          local_25[8] = '\0';
          local_25[9] = '\0';
          local_25[10] = '\0';
          local_25[0xb] = '\0';
          local_25[0xc] = 0;
          cVar1 = PacketBuf::get_binary(param_2,local_25,0xd);
          if (cVar1 == '\x01') {
            iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
            if (iVar2 < local_40) {
              CUser::SendCmdErrorPacket(param_1,0xbc,0x90);
              local_18 = 0;
            }
            else {
              local_14 = (CInventory *)
                         CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
              cVar1 = CInventory::use_money(local_14,local_40,0x1a,1);
              if (cVar1 == '\x01') {
                CUser::SaveMoneyCoin(param_1);
                CAuctionServerProxy::SendPacket
                          (GlobalData::s_auction_proxy,(PACKET_HEADER *)local_5a);
                if (4999 < local_40) {
                  pSVar3 = (Stream *)
                           StreamPool::Acquire(GlobalData::s_stream_pool,
                                               "PacketDispatcher_Impl_1.cpp",0xc529);
                  CStreamGuard::CStreamGuard(local_30,pSVar3,true);
                  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                    /* try { // try from 082150e8 to 08215183 has its CatchHandler @ 08215186 */
                  CStreamGuard::operator<<(pCVar4,0x309);
                  iVar2 = CUser::GetUID(param_1);
                  pCVar4 = (CStreamGuard *)CStreamGuard::operator*(local_30);
                  CStreamGuard::operator<<(pCVar4,iVar2);
                  pCVar4 = (CStreamGuard *)CStreamGuard::operator->(local_30);
                  local_10 = CStreamGuard::GetInBuffer<SIG_AUCTION_MONEY_SUB>(pCVar4);
                  memset(local_10,0,0x28);
                  *(int *)(local_10 + 4) = local_40;
                  strncpy((char *)(local_10 + 8),local_25,0xd);
                  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_30);
                  CStreamGuard::~CStreamGuard(local_30);
                }
                local_18 = 0;
              }
              else {
                CUser::SendCmdErrorPacket(param_1,0xbc,0x93);
                local_18 = 0;
              }
            }
          }
          else {
            local_18 = LineFunc(0xc508,
                                "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                                ,0,0);
          }
        }
        else {
          local_18 = LineFunc(0xc503,
                              "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                              ,0,0);
        }
      }
      else {
        local_18 = LineFunc(0xc502,
                            "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                            ,0,0);
      }
    }
    else {
      local_18 = LineFunc(0xc501,
                          "virtual int Dispatcher_AuctionBuyItemApiece::dispatch_sig(CUser*, PacketBuf&)"
                          ,0,0);
    }
  }
  return local_18;
}

```

