# Inter_ChangeGuildName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d5072 Inter_ChangeGuildName::dispatch_sig  [0x084d5072-0x84d51db] ===
 84d5072:	55                   	push   %ebp
 84d5073:	89 e5                	mov    %esp,%ebp
 84d5075:	56                   	push   %esi
 84d5076:	53                   	push   %ebx
 84d5077:	83 ec 30             	sub    $0x30,%esp
 84d507a:	8b 45 10             	mov    0x10(%ebp),%eax
 84d507d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d5080:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d5083:	89 04 24             	mov    %eax,(%esp)
 84d5086:	e8 c1 8c 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d508b:	c7 44 24 08 b6 00 00 	movl   $0xb6,0x8(%esp)
 84d5092:	00 
 84d5093:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d509a:	00 
 84d509b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d509e:	89 04 24             	mov    %eax,(%esp)
 84d50a1:	e8 56 68 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d50a6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d50a9:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84d50ad:	84 c0                	test   %al,%al
 84d50af:	0f 85 a2 00 00 00    	jne    84d5157 <_ZN21Inter_ChangeGuildName12dispatch_sigEP5CUserPci+0xe5>
 84d50b5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d50bc:	00 
 84d50bd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d50c0:	89 04 24             	mov    %eax,(%esp)
 84d50c3:	e8 58 68 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d50c8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d50cb:	83 c0 17             	add    $0x17,%eax
 84d50ce:	89 04 24             	mov    %eax,(%esp)
 84d50d1:	e8 da 92 ba ff       	call   807e3b0 <strlen@plt>
 84d50d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d50d9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d50dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d50e0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d50e3:	89 04 24             	mov    %eax,(%esp)
 84d50e6:	e8 51 68 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d50eb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d50ee:	8d 50 17             	lea    0x17(%eax),%edx
 84d50f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d50f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d50f8:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d50fc:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d50ff:	89 04 24             	mov    %eax,(%esp)
 84d5102:	e8 dd 22 ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d5107:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d510a:	83 c0 17             	add    $0x17,%eax
 84d510d:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5111:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d5114:	89 04 24             	mov    %eax,(%esp)
 84d5117:	e8 48 7d 01 00       	call   84ece64 <_ZN5CUser15ChangeGuildNameEPc>
 84d511c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d511f:	8d 70 17             	lea    0x17(%eax),%esi
 84d5122:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d5125:	8b 58 0e             	mov    0xe(%eax),%ebx
 84d5128:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d512b:	89 04 24             	mov    %eax,(%esp)
 84d512e:	e8 5d 6b bf ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 84d5133:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 84d5139:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d513d:	89 14 24             	mov    %edx,(%esp)
 84d5140:	e8 73 82 c4 ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 84d5145:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d5149:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d514d:	89 04 24             	mov    %eax,(%esp)
 84d5150:	e8 e9 98 f9 ff       	call   846ea3e <_ZN17CGuildServerProxy22ChangeGuildNameInProxyEjPc>
 84d5155:	eb 2c                	jmp    84d5183 <_ZN21Inter_ChangeGuildName12dispatch_sigEP5CUserPci+0x111>
 84d5157:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d515e:	00 
 84d515f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d5162:	89 04 24             	mov    %eax,(%esp)
 84d5165:	e8 b6 67 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d516a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d516d:	0f b6 40 16          	movzbl 0x16(%eax),%eax
 84d5171:	0f b6 c0             	movzbl %al,%eax
 84d5174:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d5178:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d517b:	89 04 24             	mov    %eax,(%esp)
 84d517e:	e8 9d 67 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d5183:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d518a:	00 
 84d518b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d518e:	89 04 24             	mov    %eax,(%esp)
 84d5191:	e8 c2 67 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d5196:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d5199:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d519d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d51a0:	89 04 24             	mov    %eax,(%esp)
 84d51a3:	e8 12 34 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d51a8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d51ad:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d51b0:	89 04 24             	mov    %eax,(%esp)
 84d51b3:	e8 c8 8c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d51b8:	89 d8                	mov    %ebx,%eax
 84d51ba:	83 c4 30             	add    $0x30,%esp
 84d51bd:	5b                   	pop    %ebx
 84d51be:	5e                   	pop    %esi
 84d51bf:	5d                   	pop    %ebp
 84d51c0:	c3                   	ret
 84d51c1:	89 d3                	mov    %edx,%ebx
 84d51c3:	89 c6                	mov    %eax,%esi
 84d51c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d51c8:	89 04 24             	mov    %eax,(%esp)
 84d51cb:	e8 b0 8c 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d51d0:	89 f0                	mov    %esi,%eax
 84d51d2:	89 da                	mov    %ebx,%edx
 84d51d4:	89 04 24             	mov    %eax,(%esp)
 84d51d7:	e8 74 e5 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_ChangeGuildName::dispatch_sig @ 0x84d5072

/* Inter_ChangeGuildName::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ChangeGuildName::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  CGuildServerProxy *this;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d50a1 to 084d51a7 has its CatchHandler @ 084d51c1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0xb6);
  if (*(char *)(local_14 + 0x16) == '\0') {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
    local_10 = strlen((char *)(local_14 + 0x17));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x17),local_10);
    CUser::ChangeGuildName((CUser *)param_2,(char *)(local_14 + 0x17));
    pcVar1 = (char *)(local_14 + 0x17);
    uVar2 = *(uint *)(local_14 + 0xe);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::ChangeGuildNameInProxy(this,uVar2,pcVar1);
  }
  else {
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(uint)*(byte *)(local_14 + 0x16));
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  CUser::Send((CUser *)param_2,local_20);
  PacketGuard::~PacketGuard(local_20);
  return 0;
}

```

