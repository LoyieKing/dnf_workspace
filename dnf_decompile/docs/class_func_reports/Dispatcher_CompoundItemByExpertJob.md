# Dispatcher_CompoundItemByExpertJob

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821eb66 Dispatcher_CompoundItemByExpertJob::dispatch_sig  [0x0821eb66-0x821eed1] ===
 821eb66:	55                   	push   %ebp
 821eb67:	89 e5                	mov    %esp,%ebp
 821eb69:	56                   	push   %esi
 821eb6a:	53                   	push   %ebx
 821eb6b:	83 ec 50             	sub    $0x50,%esp
 821eb6e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eb71:	89 04 24             	mov    %eax,(%esp)
 821eb74:	e8 b9 18 f0 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 821eb79:	85 c0                	test   %eax,%eax
 821eb7b:	0f 94 c0             	sete   %al
 821eb7e:	84 c0                	test   %al,%al
 821eb80:	74 2b                	je     821ebad <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x47>
 821eb82:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821eb89:	00 
 821eb8a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821eb91:	00 
 821eb92:	c7 44 24 04 60 d1 bc 	movl   $0x8bcd160,0x4(%esp)
 821eb99:	08 
 821eb9a:	c7 04 24 3c d7 00 00 	movl   $0xd73c,(%esp)
 821eba1:	e8 31 1d 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821eba6:	89 c3                	mov    %eax,%ebx
 821eba8:	e9 1c 03 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ebad:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ebb0:	89 04 24             	mov    %eax,(%esp)
 821ebb3:	e8 dc 0c 01 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 821ebb8:	85 c0                	test   %eax,%eax
 821ebba:	0f 94 c0             	sete   %al
 821ebbd:	84 c0                	test   %al,%al
 821ebbf:	74 2b                	je     821ebec <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x86>
 821ebc1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ebc8:	00 
 821ebc9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ebd0:	00 
 821ebd1:	c7 44 24 04 60 d1 bc 	movl   $0x8bcd160,0x4(%esp)
 821ebd8:	08 
 821ebd9:	c7 04 24 3f d7 00 00 	movl   $0xd73f,(%esp)
 821ebe0:	e8 f2 1c 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ebe5:	89 c3                	mov    %eax,%ebx
 821ebe7:	e9 dd 02 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ebec:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ebef:	89 04 24             	mov    %eax,(%esp)
 821ebf2:	e8 95 b7 eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821ebf7:	83 f8 03             	cmp    $0x3,%eax
 821ebfa:	0f 95 c0             	setne  %al
 821ebfd:	84 c0                	test   %al,%al
 821ebff:	74 0a                	je     821ec0b <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0xa5>
 821ec01:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ec06:	e9 be 02 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ec0b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ec0e:	89 04 24             	mov    %eax,(%esp)
 821ec11:	e8 e8 b6 eb ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 821ec16:	84 c0                	test   %al,%al
 821ec18:	74 0a                	je     821ec24 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0xbe>
 821ec1a:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ec1f:	e9 a5 02 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ec24:	e8 bd 39 f4 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 821ec29:	c7 44 24 0c 13 00 00 	movl   $0x13,0xc(%esp)
 821ec30:	00 
 821ec31:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821ec38:	00 
 821ec39:	8b 55 0c             	mov    0xc(%ebp),%edx
 821ec3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 821ec40:	89 04 24             	mov    %eax,(%esp)
 821ec43:	e8 70 fa f4 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 821ec48:	84 c0                	test   %al,%al
 821ec4a:	74 25                	je     821ec71 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x10b>
 821ec4c:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 821ec53:	00 
 821ec54:	c7 44 24 04 f2 00 00 	movl   $0xf2,0x4(%esp)
 821ec5b:	00 
 821ec5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ec5f:	89 04 24             	mov    %eax,(%esp)
 821ec62:	e8 db d2 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821ec67:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ec6c:	e9 58 02 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ec71:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 821ec76:	c7 44 24 08 1c 00 00 	movl   $0x1c,0x8(%esp)
 821ec7d:	00 
 821ec7e:	8b 55 0c             	mov    0xc(%ebp),%edx
 821ec81:	89 54 24 04          	mov    %edx,0x4(%esp)
 821ec85:	89 04 24             	mov    %eax,(%esp)
 821ec88:	e8 75 9d 06 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 821ec8d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 821ec90:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 821ec94:	74 27                	je     821ecbd <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x157>
 821ec96:	8b 45 f0             	mov    -0x10(%ebp),%eax
 821ec99:	0f b6 c0             	movzbl %al,%eax
 821ec9c:	89 44 24 08          	mov    %eax,0x8(%esp)
 821eca0:	c7 44 24 04 f2 00 00 	movl   $0xf2,0x4(%esp)
 821eca7:	00 
 821eca8:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ecab:	89 04 24             	mov    %eax,(%esp)
 821ecae:	e8 8f d2 45 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821ecb3:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ecb8:	e9 0c 02 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ecbd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 821ecc0:	83 c0 0d             	add    $0xd,%eax
 821ecc3:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ecc7:	8b 45 10             	mov    0x10(%ebp),%eax
 821ecca:	89 04 24             	mov    %eax,(%esp)
 821eccd:	e8 ac e5 36 00       	call   858d27e <_ZN9PacketBuf7get_intERm>
 821ecd2:	83 f0 01             	xor    $0x1,%eax
 821ecd5:	84 c0                	test   %al,%al
 821ecd7:	74 2b                	je     821ed04 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x19e>
 821ecd9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ece0:	00 
 821ece1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ece8:	00 
 821ece9:	c7 44 24 04 60 d1 bc 	movl   $0x8bcd160,0x4(%esp)
 821ecf0:	08 
 821ecf1:	c7 04 24 62 d7 00 00 	movl   $0xd762,(%esp)
 821ecf8:	e8 da 1b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ecfd:	89 c3                	mov    %eax,%ebx
 821ecff:	e9 c5 01 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ed04:	8d 45 dc             	lea    -0x24(%ebp),%eax
 821ed07:	83 c0 12             	add    $0x12,%eax
 821ed0a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ed0e:	8b 45 10             	mov    0x10(%ebp),%eax
 821ed11:	89 04 24             	mov    %eax,(%esp)
 821ed14:	e8 97 e3 36 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 821ed19:	83 f0 01             	xor    $0x1,%eax
 821ed1c:	84 c0                	test   %al,%al
 821ed1e:	74 2b                	je     821ed4b <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x1e5>
 821ed20:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ed27:	00 
 821ed28:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ed2f:	00 
 821ed30:	c7 44 24 04 60 d1 bc 	movl   $0x8bcd160,0x4(%esp)
 821ed37:	08 
 821ed38:	c7 04 24 64 d7 00 00 	movl   $0xd764,(%esp)
 821ed3f:	e8 93 1b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ed44:	89 c3                	mov    %eax,%ebx
 821ed46:	e9 7e 01 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ed4b:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 821ed4f:	66 85 c0             	test   %ax,%ax
 821ed52:	75 2b                	jne    821ed7f <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x219>
 821ed54:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ed5b:	00 
 821ed5c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ed63:	00 
 821ed64:	c7 44 24 04 60 d1 bc 	movl   $0x8bcd160,0x4(%esp)
 821ed6b:	08 
 821ed6c:	c7 04 24 6a d7 00 00 	movl   $0xd76a,(%esp)
 821ed73:	e8 5f 1b 37 00       	call   85908d7 <_Z8LineFunciPKcij>
 821ed78:	89 c3                	mov    %eax,%ebx
 821ed7a:	e9 4a 01 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ed7f:	0f b7 45 ee          	movzwl -0x12(%ebp),%eax
 821ed83:	0f b7 d0             	movzwl %ax,%edx
 821ed86:	8b 45 e9             	mov    -0x17(%ebp),%eax
 821ed89:	c7 44 24 10 f2 00 00 	movl   $0xf2,0x10(%esp)
 821ed90:	00 
 821ed91:	89 54 24 0c          	mov    %edx,0xc(%esp)
 821ed95:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 821ed9c:	00 
 821ed9d:	89 44 24 04          	mov    %eax,0x4(%esp)
 821eda1:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eda4:	89 04 24             	mov    %eax,(%esp)
 821eda7:	e8 e0 33 45 00       	call   867218c <_ZN5CUser13compound_itemEibti>
 821edac:	89 45 f4             	mov    %eax,-0xc(%ebp)
 821edaf:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 821edb3:	0f 8e a0 00 00 00    	jle    821ee59 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x2f3>
 821edb9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821edbc:	89 04 24             	mov    %eax,(%esp)
 821edbf:	e8 88 ef 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821edc4:	c7 44 24 08 f2 00 00 	movl   $0xf2,0x8(%esp)
 821edcb:	00 
 821edcc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821edd3:	00 
 821edd4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821edd7:	89 04 24             	mov    %eax,(%esp)
 821edda:	e8 1d cb ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821eddf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821ede6:	00 
 821ede7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821edea:	89 04 24             	mov    %eax,(%esp)
 821eded:	e8 2e cb ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821edf2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 821edf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 821edf9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821edfc:	89 04 24             	mov    %eax,(%esp)
 821edff:	e8 1c cb ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821ee04:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821ee0b:	00 
 821ee0c:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821ee0f:	89 04 24             	mov    %eax,(%esp)
 821ee12:	e8 41 cb ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821ee17:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821ee1a:	89 44 24 04          	mov    %eax,0x4(%esp)
 821ee1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ee21:	89 04 24             	mov    %eax,(%esp)
 821ee24:	e8 91 97 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821ee29:	bb 00 00 00 00       	mov    $0x0,%ebx
 821ee2e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821ee31:	89 04 24             	mov    %eax,(%esp)
 821ee34:	e8 47 f0 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821ee39:	e9 8b 00 00 00       	jmp    821eec9 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x363>
 821ee3e:	89 d3                	mov    %edx,%ebx
 821ee40:	89 c6                	mov    %eax,%esi
 821ee42:	8d 45 d0             	lea    -0x30(%ebp),%eax
 821ee45:	89 04 24             	mov    %eax,(%esp)
 821ee48:	e8 33 f0 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821ee4d:	89 f0                	mov    %esi,%eax
 821ee4f:	89 da                	mov    %ebx,%edx
 821ee51:	89 04 24             	mov    %eax,(%esp)
 821ee54:	e8 f7 48 8c 00       	call   8ae3750 <_Unwind_Resume>
 821ee59:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 821ee5d:	74 65                	je     821eec4 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x35e>
 821ee5f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 821ee63:	75 5f                	jne    821eec4 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x35e>
 821ee65:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ee68:	89 04 24             	mov    %eax,(%esp)
 821ee6b:	e8 24 0a 01 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 821ee70:	83 f8 02             	cmp    $0x2,%eax
 821ee73:	74 07                	je     821ee7c <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x316>
 821ee75:	83 f8 04             	cmp    $0x4,%eax
 821ee78:	74 27                	je     821eea1 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x33b>
 821ee7a:	eb 48                	jmp    821eec4 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x35e>
 821ee7c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821ee83:	00 
 821ee84:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821ee8b:	00 
 821ee8c:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 821ee93:	00 
 821ee94:	8b 45 0c             	mov    0xc(%ebp),%eax
 821ee97:	89 04 24             	mov    %eax,(%esp)
 821ee9a:	e8 f1 34 f0 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 821ee9f:	eb 23                	jmp    821eec4 <_ZN34Dispatcher_CompoundItemByExpertJob12dispatch_sigEP5CUserR9PacketBuf+0x35e>
 821eea1:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821eea8:	00 
 821eea9:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821eeb0:	00 
 821eeb1:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 821eeb8:	00 
 821eeb9:	8b 45 0c             	mov    0xc(%ebp),%eax
 821eebc:	89 04 24             	mov    %eax,(%esp)
 821eebf:	e8 cc 34 f0 ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 821eec4:	bb 00 00 00 00       	mov    $0x0,%ebx
 821eec9:	89 d8                	mov    %ebx,%eax
 821eecb:	83 c4 50             	add    $0x50,%esp
 821eece:	5b                   	pop    %ebx
 821eecf:	5e                   	pop    %esi
 821eed0:	5d                   	pop    %ebp
 821eed1:	c3                   	ret

```

```c
// Dispatcher_CompoundItemByExpertJob::dispatch_sig @ 0x821eb66

/* Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_CompoundItemByExpertJob::dispatch_sig
          (Dispatcher_CompoundItemByExpertJob *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  ServiceRestrictManager *pSVar4;
  PacketGuard local_34 [25];
  ulong local_1b;
  ushort local_16;
  uint local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 == 0) {
    uVar3 = LineFunc(0xd73c,
                     "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                     ,0,0);
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_1);
    if (iVar2 == 0) {
      uVar3 = LineFunc(0xd73f,
                       "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
    else {
      iVar2 = CUser::get_state(param_1);
      if (iVar2 == 3) {
        cVar1 = CUser::CheckInTrade(param_1);
        if (cVar1 == '\0') {
          pSVar4 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
          cVar1 = ServiceRestrictManager::isRestricted(pSVar4,param_1,1,0x13);
          if (cVar1 == '\0') {
            local_14 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x1c)
            ;
            if (local_14 == 0) {
              cVar1 = PacketBuf::get_int(param_2,&local_1b);
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_short(param_2,&local_16);
                if (cVar1 == '\x01') {
                  if (local_16 == 0) {
                    uVar3 = LineFunc(0xd76a,
                                     "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                                     ,0,0);
                  }
                  else {
                    local_10 = CUser::compound_item(param_1,local_1b,true,local_16,0xf2);
                    if (local_10 < 1) {
                      if ((param_1 != (CUser *)0x0) && (local_10 == 0)) {
                        iVar2 = CUserCharacInfo::GetCurCharacExpertJobType
                                          ((CUserCharacInfo *)param_1);
                        if (iVar2 == 2) {
                          APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x1d,0,0);
                        }
                        else if (iVar2 == 4) {
                          APSystem::CUserProc::ClearActionAndSendtoUser(param_1,0x1e,0,0);
                        }
                      }
                      uVar3 = 0;
                    }
                    else {
                      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0821edda to 0821ee28 has its CatchHandler @ 0821ee3e */
                      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,1,0xf2);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
                      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,local_10);
                      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
                      CUser::Send(param_1,local_34);
                      uVar3 = 0;
                      PacketGuard::~PacketGuard(local_34);
                    }
                  }
                }
                else {
                  uVar3 = LineFunc(0xd764,
                                   "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                                   ,0,0);
                }
              }
              else {
                uVar3 = LineFunc(0xd762,
                                 "virtual int Dispatcher_CompoundItemByExpertJob::dispatch_sig(CUser*, PacketBuf&)"
                                 ,0,0);
              }
            }
            else {
              CUser::SendCmdErrorPacket(param_1,0xf2,local_14 & 0xff);
              uVar3 = 0;
            }
          }
          else {
            CUser::SendCmdErrorPacket(param_1,0xf2,0xd1);
            uVar3 = 0;
          }
        }
        else {
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

```

