# Dispatcher_PowerWarProcessInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821ea32 Dispatcher_PowerWarProcessInfo::dispatch_sig  [0x0821ea32-0x821eb65] ===
 821ea32:	55                   	push   %ebp
 821ea33:	89 e5                	mov    %esp,%ebp
 821ea35:	56                   	push   %esi
 821ea36:	53                   	push   %ebx
 821ea37:	83 ec 20             	sub    $0x20,%esp
 821ea3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ea3d:	89 04 24             	mov    %eax,(%esp)
 821ea40:	e8 47 b9 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821ea45:	83 f8 02             	cmp    $0x2,%eax
 821ea48:	7e 0f                	jle    821ea59 <_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf+0x27>
 821ea4a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ea4d:	89 04 24             	mov    %eax,(%esp)
 821ea50:	e8 dd 19 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821ea55:	85 c0                	test   %eax,%eax
 821ea57:	75 07                	jne    821ea60 <_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf+0x2e>
 821ea59:	b8 01 00 00 00       	mov    $0x1,%eax
 821ea5e:	eb 05                	jmp    821ea65 <_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf+0x33>
 821ea60:	b8 00 00 00 00       	mov    $0x0,%eax
 821ea65:	84 c0                	test   %al,%al
 821ea67:	74 2b                	je     821ea94 <_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf+0x62>
 821ea69:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ea70:	00 
 821ea71:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ea78:	00 
 821ea79:	c7 44 24 04 c0 d1 bc 	movl   $0x8bcd1c0,0x4(%esp)
 821ea80:	08 
 821ea81:	c7 04 24 21 d7 00 00 	movl   $0xd721,(%esp)
 821ea88:	e8 4a 1e 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ea8d:	89 c3                	mov    %eax,%ebx
 821ea8f:	e9 c9 00 00 00       	jmp    821eb5d <_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf+0x12b>
 821ea94:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 821ea9b:	ff 
 821ea9c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ea9f:	89 04 24             	mov    %eax,(%esp)
 821eaa2:	e8 f9 f4 42 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 821eaa7:	89 c3                	mov    %eax,%ebx
 821eaa9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eaac:	89 04 24             	mov    %eax,(%esp)
 821eaaf:	e8 dc d1 ea ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 821eab4:	8b 15 2c be 40 09    	mov    0x940be2c,%edx
 821eaba:	89 44 24 04          	mov    %eax,0x4(%esp)
 821eabe:	89 14 24             	mov    %edx,(%esp)
 821eac1:	e8 f2 e8 ef ff       	call   811d3b8 <_ZN15CServerProxyMgrI17CGuildServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 821eac6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 821eaca:	89 04 24             	mov    %eax,(%esp)
 821eacd:	e8 4a f4 24 00       	call   846df1c <_ZN17CGuildServerProxy23SendPowerWarProcessInfoEj>
 821ead2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821ead5:	89 04 24             	mov    %eax,(%esp)
 821ead8:	e8 6f f2 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821eadd:	c7 44 24 08 ec 00 00 	movl   $0xec,0x8(%esp)
 821eae4:	00 
 821eae5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821eaec:	00 
 821eaed:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821eaf0:	89 04 24             	mov    %eax,(%esp)
 821eaf3:	e8 04 ce ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821eaf8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821eaff:	00 
 821eb00:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821eb03:	89 04 24             	mov    %eax,(%esp)
 821eb06:	e8 15 ce ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821eb0b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821eb12:	00 
 821eb13:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821eb16:	89 04 24             	mov    %eax,(%esp)
 821eb19:	e8 3a ce ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821eb1e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821eb21:	89 44 24 04          	mov    %eax,0x4(%esp)
 821eb25:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eb28:	89 04 24             	mov    %eax,(%esp)
 821eb2b:	e8 8a 9a 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821eb30:	bb 00 00 00 00       	mov    $0x0,%ebx
 821eb35:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821eb38:	89 04 24             	mov    %eax,(%esp)
 821eb3b:	e8 40 f3 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821eb40:	eb 1b                	jmp    821eb5d <_ZN30Dispatcher_PowerWarProcessInfo12dispatch_sigEP5CUserR9PacketBuf+0x12b>
 821eb42:	89 d3                	mov    %edx,%ebx
 821eb44:	89 c6                	mov    %eax,%esi
 821eb46:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821eb49:	89 04 24             	mov    %eax,(%esp)
 821eb4c:	e8 2f f3 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821eb51:	89 f0                	mov    %esi,%eax
 821eb53:	89 da                	mov    %ebx,%edx
 821eb55:	89 04 24             	mov    %eax,(%esp)
 821eb58:	e8 f3 4b 8c 00       	call   8ae3750 <_Unwind_Resume>
 821eb5d:	89 d8                	mov    %ebx,%eax
 821eb5f:	83 c4 20             	add    $0x20,%esp
 821eb62:	5b                   	pop    %ebx
 821eb63:	5e                   	pop    %esi
 821eb64:	5d                   	pop    %ebp
 821eb65:	c3                   	ret

```

```c
// Dispatcher_PowerWarProcessInfo::dispatch_sig @ 0x821ea32

/* Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  CGuildServerProxy *this;
  PacketGuard local_18 [12];
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_0821ea65;
    }
  }
  bVar1 = true;
LAB_0821ea65:
  if (bVar1) {
    uVar3 = LineFunc(0xd721,
                     "virtual int Dispatcher_PowerWarProcessInfo::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
  }
  else {
    uVar4 = CUser::get_charac_no((CUser *)param_2,-1);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    this = (CGuildServerProxy *)
           CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar3);
    CGuildServerProxy::SendPowerWarProcessInfo(this,uVar4);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821eaf3 to 0821eb2f has its CatchHandler @ 0821eb42 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xec);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send((CUser *)param_2,local_18);
    uVar3 = 0;
    PacketGuard::~PacketGuard(local_18);
  }
  return uVar3;
}

```

