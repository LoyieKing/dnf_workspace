# Inter_ItemLimitEdition_Sell_End

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084dbbb2 Inter_ItemLimitEdition_Sell_End::dispatch_sig  [0x084dbbb2-0x84dbd15] ===
 84dbbb2:	55                   	push   %ebp
 84dbbb3:	89 e5                	mov    %esp,%ebp
 84dbbb5:	56                   	push   %esi
 84dbbb6:	53                   	push   %ebx
 84dbbb7:	83 ec 40             	sub    $0x40,%esp
 84dbbba:	8b 45 10             	mov    0x10(%ebp),%eax
 84dbbbd:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84dbbc0:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbbc3:	89 04 24             	mov    %eax,(%esp)
 84dbbc6:	e8 81 21 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84dbbcb:	c7 44 24 08 e1 00 00 	movl   $0xe1,0x8(%esp)
 84dbbd2:	00 
 84dbbd3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84dbbda:	00 
 84dbbdb:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbbde:	89 04 24             	mov    %eax,(%esp)
 84dbbe1:	e8 16 fd be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84dbbe6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dbbed:	00 
 84dbbee:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbbf1:	89 04 24             	mov    %eax,(%esp)
 84dbbf4:	e8 27 fd be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dbbf9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dbbfc:	8b 40 0e             	mov    0xe(%eax),%eax
 84dbbff:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dbc03:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbc06:	89 04 24             	mov    %eax,(%esp)
 84dbc09:	e8 12 fd be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84dbc0e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84dbc15:	e9 8d 00 00 00       	jmp    84dbca7 <_ZN31Inter_ItemLimitEdition_Sell_End12dispatch_sigEP5CUserPci+0xf5>
 84dbc1a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dbc1d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dbc20:	83 c2 04             	add    $0x4,%edx
 84dbc23:	8b 5c 90 02          	mov    0x2(%eax,%edx,4),%ebx
 84dbc27:	e8 6f 05 bf ff       	call   80cc19b <_Z14G_CDataManagerv>
 84dbc2c:	89 04 24             	mov    %eax,(%esp)
 84dbc2f:	e8 72 e3 c9 ff       	call   8179fa6 <_ZN12CDataManager22getItemLimitEditionMgrEv>
 84dbc34:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84dbc38:	89 04 24             	mov    %eax,(%esp)
 84dbc3b:	e8 36 dc 00 00       	call   84e9876 <_ZN20CItemLimitEditionMgr10removeItemEj>
 84dbc40:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dbc43:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dbc46:	83 c2 04             	add    $0x4,%edx
 84dbc49:	8b 5c 90 02          	mov    0x2(%eax,%edx,4),%ebx
 84dbc4d:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84dbc54:	00 
 84dbc55:	c7 44 24 08 5a 46 00 	movl   $0x465a,0x8(%esp)
 84dbc5c:	00 
 84dbc5d:	c7 44 24 04 80 bd c8 	movl   $0x8c8bd80,0x4(%esp)
 84dbc64:	08 
 84dbc65:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84dbc68:	89 04 24             	mov    %eax,(%esp)
 84dbc6b:	e8 a8 3a 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84dbc70:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84dbc74:	c7 44 24 04 bf 98 c8 	movl   $0x8c898bf,0x4(%esp)
 84dbc7b:	08 
 84dbc7c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84dbc7f:	89 04 24             	mov    %eax,(%esp)
 84dbc82:	e8 01 3b 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84dbc87:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84dbc8a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dbc8d:	83 c2 04             	add    $0x4,%edx
 84dbc90:	8b 44 90 02          	mov    0x2(%eax,%edx,4),%eax
 84dbc94:	89 44 24 04          	mov    %eax,0x4(%esp)
 84dbc98:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbc9b:	89 04 24             	mov    %eax,(%esp)
 84dbc9e:	e8 99 fc be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84dbca3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84dbca7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84dbcaa:	8b 40 0e             	mov    0xe(%eax),%eax
 84dbcad:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84dbcb0:	0f 97 c0             	seta   %al
 84dbcb3:	84 c0                	test   %al,%al
 84dbcb5:	0f 85 5f ff ff ff    	jne    84dbc1a <_ZN31Inter_ItemLimitEdition_Sell_End12dispatch_sigEP5CUserPci+0x68>
 84dbcbb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84dbcc2:	00 
 84dbcc3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbcc6:	89 04 24             	mov    %eax,(%esp)
 84dbcc9:	e8 8a fc be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84dbcce:	e8 d4 e6 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84dbcd3:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84dbcd6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84dbcda:	89 04 24             	mov    %eax,(%esp)
 84dbcdd:	e8 32 cf 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84dbce2:	bb 00 00 00 00       	mov    $0x0,%ebx
 84dbce7:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbcea:	89 04 24             	mov    %eax,(%esp)
 84dbced:	e8 8e 21 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dbcf2:	89 d8                	mov    %ebx,%eax
 84dbcf4:	83 c4 40             	add    $0x40,%esp
 84dbcf7:	5b                   	pop    %ebx
 84dbcf8:	5e                   	pop    %esi
 84dbcf9:	5d                   	pop    %ebp
 84dbcfa:	c3                   	ret
 84dbcfb:	89 d3                	mov    %edx,%ebx
 84dbcfd:	89 c6                	mov    %eax,%esi
 84dbcff:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84dbd02:	89 04 24             	mov    %eax,(%esp)
 84dbd05:	e8 76 21 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84dbd0a:	89 f0                	mov    %esi,%eax
 84dbd0c:	89 da                	mov    %ebx,%edx
 84dbd0e:	89 04 24             	mov    %eax,(%esp)
 84dbd11:	e8 3a 7a 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_ItemLimitEdition_Sell_End::dispatch_sig @ 0x84dbbb2

/* Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CDataManager *this;
  uint uVar2;
  GameWorld *this_00;
  PacketGuard local_30 [12];
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084dbbe1 to 084dbce1 has its CatchHandler @ 084dbcfb */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0xe1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(local_14 + 0xe));
  for (local_10 = 0; local_10 < *(uint *)(local_14 + 0xe); local_10 = local_10 + 1) {
    this = (CDataManager *)G_CDataManager();
    uVar2 = CDataManager::getItemLimitEditionMgr(this);
    CItemLimitEditionMgr::removeItem(uVar2);
    uVar1 = *(undefined4 *)(local_14 + 2 + (local_10 + 4) * 4);
    cMyTrace::cMyTrace(local_24,
                       "virtual int Inter_ItemLimitEdition_Sell_End::dispatch_sig(CUser*, char*, int)"
                       ,0x465a,0);
    cMyTrace::operator()(local_24,"ipg: %d",uVar1);
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_30,*(int *)(local_14 + 2 + (local_10 + 4) * 4));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
  this_00 = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this_00,local_30);
  PacketGuard::~PacketGuard(local_30);
  return 0;
}

```

