# ARAD__DISPATCHER__Arad_INTER_kUseAvatarRecharge

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08199f0e ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig  [0x08199f0e-0x819a0bf] ===
 8199f0e:	55                   	push   %ebp
 8199f0f:	89 e5                	mov    %esp,%ebp
 8199f11:	56                   	push   %esi
 8199f12:	53                   	push   %ebx
 8199f13:	83 ec 30             	sub    $0x30,%esp
 8199f16:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8199f1a:	75 0a                	jne    8199f26 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x18>
 8199f1c:	bb 8e 06 00 00       	mov    $0x68e,%ebx
 8199f21:	e9 90 01 00 00       	jmp    819a0b6 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x1a8>
 8199f26:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199f29:	89 04 24             	mov    %eax,(%esp)
 8199f2c:	e8 01 65 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8199f31:	85 c0                	test   %eax,%eax
 8199f33:	0f 94 c0             	sete   %al
 8199f36:	84 c0                	test   %al,%al
 8199f38:	74 0a                	je     8199f44 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x36>
 8199f3a:	bb 91 06 00 00       	mov    $0x691,%ebx
 8199f3f:	e9 72 01 00 00       	jmp    819a0b6 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x1a8>
 8199f44:	8b 45 10             	mov    0x10(%ebp),%eax
 8199f47:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8199f4a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8199f4e:	75 36                	jne    8199f86 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x78>
 8199f50:	c7 44 24 10 fc 1e ba 	movl   $0x8ba1efc,0x10(%esp)
 8199f57:	08 
 8199f58:	c7 44 24 0c 96 06 00 	movl   $0x696,0xc(%esp)
 8199f5f:	00 
 8199f60:	c7 44 24 08 e0 2c ba 	movl   $0x8ba2ce0,0x8(%esp)
 8199f67:	08 
 8199f68:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8199f6f:	08 
 8199f70:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8199f77:	e8 8e 9c 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8199f7c:	bb 97 06 00 00       	mov    $0x697,%ebx
 8199f81:	e9 30 01 00 00       	jmp    819a0b6 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x1a8>
 8199f86:	e8 17 96 ff ff       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 8199f8b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8199f8e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8199f92:	8b 55 0c             	mov    0xc(%ebp),%edx
 8199f95:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199f99:	89 04 24             	mov    %eax,(%esp)
 8199f9c:	e8 41 67 ff ff       	call   81906e2 <_ZN20AvatarRechargeServer25CheckConditionUseRechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE>
 8199fa1:	83 f0 01             	xor    $0x1,%eax
 8199fa4:	84 c0                	test   %al,%al
 8199fa6:	74 0a                	je     8199fb2 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0xa4>
 8199fa8:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199fad:	e9 04 01 00 00       	jmp    819a0b6 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x1a8>
 8199fb2:	e8 eb 95 ff ff       	call   81935a2 <_ZN4ARAD9SingletonI20AvatarRechargeServerE3GetEv>
 8199fb7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8199fba:	89 54 24 08          	mov    %edx,0x8(%esp)
 8199fbe:	8b 55 0c             	mov    0xc(%ebp),%edx
 8199fc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199fc5:	89 04 24             	mov    %eax,(%esp)
 8199fc8:	e8 a3 6a ff ff       	call   8190a70 <_ZN20AvatarRechargeServer8RechargeEP5CUserPN4arad24SigAradUseAvatarRechargeE>
 8199fcd:	83 f0 01             	xor    $0x1,%eax
 8199fd0:	84 c0                	test   %al,%al
 8199fd2:	74 0a                	je     8199fde <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0xd0>
 8199fd4:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199fd9:	e9 d8 00 00 00       	jmp    819a0b6 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x1a8>
 8199fde:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199fe1:	89 04 24             	mov    %eax,(%esp)
 8199fe4:	e8 63 3d 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8199fe9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199fec:	89 04 24             	mov    %eax,(%esp)
 8199fef:	e8 f2 18 f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8199ff4:	c7 44 24 08 4d 02 00 	movl   $0x24d,0x8(%esp)
 8199ffb:	00 
 8199ffc:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819a003:	00 
 819a004:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a007:	89 04 24             	mov    %eax,(%esp)
 819a00a:	e8 ed 18 f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 819a00f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819a016:	00 
 819a017:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a01a:	89 04 24             	mov    %eax,(%esp)
 819a01d:	e8 fe 18 f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 819a022:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819a025:	8b 40 0c             	mov    0xc(%eax),%eax
 819a028:	89 44 24 04          	mov    %eax,0x4(%esp)
 819a02c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a02f:	89 04 24             	mov    %eax,(%esp)
 819a032:	e8 05 19 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819a037:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819a03a:	8b 40 04             	mov    0x4(%eax),%eax
 819a03d:	89 44 24 04          	mov    %eax,0x4(%esp)
 819a041:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a044:	89 04 24             	mov    %eax,(%esp)
 819a047:	e8 f0 18 f3 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 819a04c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 819a04f:	0f b7 00             	movzwl (%eax),%eax
 819a052:	0f b7 c0             	movzwl %ax,%eax
 819a055:	89 44 24 04          	mov    %eax,0x4(%esp)
 819a059:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a05c:	89 04 24             	mov    %eax,(%esp)
 819a05f:	e8 40 fe f3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 819a064:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 819a06b:	00 
 819a06c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a06f:	89 04 24             	mov    %eax,(%esp)
 819a072:	e8 e1 18 f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 819a077:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a07a:	89 44 24 04          	mov    %eax,0x4(%esp)
 819a07e:	8b 45 0c             	mov    0xc(%ebp),%eax
 819a081:	89 04 24             	mov    %eax,(%esp)
 819a084:	e8 31 e5 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 819a089:	bb 00 00 00 00       	mov    $0x0,%ebx
 819a08e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a091:	89 04 24             	mov    %eax,(%esp)
 819a094:	e8 e7 3d 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819a099:	eb 1b                	jmp    819a0b6 <_ZN4ARAD10DISPATCHER29Arad_INTER_kUseAvatarRecharge12dispatch_sigEP5CUserPci+0x1a8>
 819a09b:	89 d3                	mov    %edx,%ebx
 819a09d:	89 c6                	mov    %eax,%esi
 819a09f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 819a0a2:	89 04 24             	mov    %eax,(%esp)
 819a0a5:	e8 d6 3d 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 819a0aa:	89 f0                	mov    %esi,%eax
 819a0ac:	89 da                	mov    %ebx,%edx
 819a0ae:	89 04 24             	mov    %eax,(%esp)
 819a0b1:	e8 9a 96 94 00       	call   8ae3750 <_Unwind_Resume>
 819a0b6:	89 d8                	mov    %ebx,%eax
 819a0b8:	83 c4 30             	add    $0x30,%esp
 819a0bb:	5b                   	pop    %ebx
 819a0bc:	5e                   	pop    %esi
 819a0bd:	5d                   	pop    %ebp
 819a0be:	c3                   	ret
 819a0bf:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig @ 0x8199f0e

/* ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  AvatarRechargeServer *pAVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  SigAradUseAvatarRecharge *local_10;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x68e;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar4 = 0x691;
    }
    else {
      local_10 = (SigAradUseAvatarRecharge *)param_3;
      if (param_3 == 0) {
        LogManager::logFormat
                  (1,"localjapan/Arad_InterDispatcher.cpp",
                   "virtual int ARAD::DISPATCHER::Arad_INTER_kUseAvatarRecharge::dispatch_sig(CUser*, char*, int)"
                   ,0x696,"AVATAR USE AVATAR RECHARGE INTER_DSP(SigAradUseAvatarRecharge) null.");
        uVar4 = 0x697;
      }
      else {
        pAVar3 = (AvatarRechargeServer *)Singleton<AvatarRechargeServer>::Get();
        cVar1 = AvatarRechargeServer::CheckConditionUseRecharge(pAVar3,(CUser *)param_2,local_10);
        if (cVar1 == '\x01') {
          pAVar3 = (AvatarRechargeServer *)Singleton<AvatarRechargeServer>::Get();
          cVar1 = AvatarRechargeServer::Recharge(pAVar3,(CUser *)param_2,local_10);
          if (cVar1 == '\x01') {
            PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08199fef to 0819a088 has its CatchHandler @ 0819a09b */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x24d);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xc));
            InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 4));
            InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)local_10);
            InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
            CUser::Send((CUser *)param_2,local_1c);
            uVar4 = 0;
            PacketGuard::~PacketGuard(local_1c);
          }
          else {
            uVar4 = 0;
          }
        }
        else {
          uVar4 = 0;
        }
      }
    }
  }
  return uVar4;
}

```

