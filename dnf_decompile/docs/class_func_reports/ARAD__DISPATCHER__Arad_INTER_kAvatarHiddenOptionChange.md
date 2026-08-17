# ARAD__DISPATCHER__Arad_INTER_kAvatarHiddenOptionChange

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08199d6e ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig  [0x08199d6e-0x8199f0d] ===
 8199d6e:	55                   	push   %ebp
 8199d6f:	89 e5                	mov    %esp,%ebp
 8199d71:	56                   	push   %esi
 8199d72:	53                   	push   %ebx
 8199d73:	83 ec 30             	sub    $0x30,%esp
 8199d76:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8199d7a:	75 0a                	jne    8199d86 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x18>
 8199d7c:	bb 64 06 00 00       	mov    $0x664,%ebx
 8199d81:	e9 7e 01 00 00       	jmp    8199f04 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x196>
 8199d86:	8b 45 10             	mov    0x10(%ebp),%eax
 8199d89:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8199d8c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8199d90:	75 36                	jne    8199dc8 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x5a>
 8199d92:	c7 44 24 10 b4 1e ba 	movl   $0x8ba1eb4,0x10(%esp)
 8199d99:	08 
 8199d9a:	c7 44 24 0c 69 06 00 	movl   $0x669,0xc(%esp)
 8199da1:	00 
 8199da2:	c7 44 24 08 40 2d ba 	movl   $0x8ba2d40,0x8(%esp)
 8199da9:	08 
 8199daa:	c7 44 24 04 38 1c ba 	movl   $0x8ba1c38,0x4(%esp)
 8199db1:	08 
 8199db2:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8199db9:	e8 4c 9e 93 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 8199dbe:	bb 6a 06 00 00       	mov    $0x66a,%ebx
 8199dc3:	e9 3c 01 00 00       	jmp    8199f04 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x196>
 8199dc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199dcb:	89 04 24             	mov    %eax,(%esp)
 8199dce:	e8 5f 66 f8 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8199dd3:	85 c0                	test   %eax,%eax
 8199dd5:	0f 94 c0             	sete   %al
 8199dd8:	84 c0                	test   %al,%al
 8199dda:	74 0a                	je     8199de6 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x78>
 8199ddc:	bb 70 06 00 00       	mov    $0x670,%ebx
 8199de1:	e9 1e 01 00 00       	jmp    8199f04 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x196>
 8199de6:	e8 b9 52 fe ff       	call   817f0a4 <_ZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEv>
 8199deb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8199dee:	89 54 24 08          	mov    %edx,0x8(%esp)
 8199df2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8199df5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199df9:	89 04 24             	mov    %eax,(%esp)
 8199dfc:	e8 c5 46 fe ff       	call   817e4c6 <_ZN29AvatarFixedHiddenOptionServer14CheckConditionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE>
 8199e01:	83 f0 01             	xor    $0x1,%eax
 8199e04:	84 c0                	test   %al,%al
 8199e06:	74 0a                	je     8199e12 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0xa4>
 8199e08:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199e0d:	e9 f2 00 00 00       	jmp    8199f04 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x196>
 8199e12:	e8 8d 52 fe ff       	call   817f0a4 <_ZN4ARAD9SingletonI29AvatarFixedHiddenOptionServerE3GetEv>
 8199e17:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8199e1a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8199e1e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8199e21:	89 54 24 04          	mov    %edx,0x4(%esp)
 8199e25:	89 04 24             	mov    %eax,(%esp)
 8199e28:	e8 a9 4a fe ff       	call   817e8d6 <_ZN29AvatarFixedHiddenOptionServer18ChangeHiddenOptionEP5CUserPN4arad27SigAvatarHiddenOptionChangeE>
 8199e2d:	83 f0 01             	xor    $0x1,%eax
 8199e30:	84 c0                	test   %al,%al
 8199e32:	74 0a                	je     8199e3e <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0xd0>
 8199e34:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199e39:	e9 c6 00 00 00       	jmp    8199f04 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x196>
 8199e3e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199e41:	89 04 24             	mov    %eax,(%esp)
 8199e44:	e8 03 3f 3f 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8199e49:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199e4c:	89 04 24             	mov    %eax,(%esp)
 8199e4f:	e8 92 1a f3 ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 8199e54:	c7 44 24 08 4c 02 00 	movl   $0x24c,0x8(%esp)
 8199e5b:	00 
 8199e5c:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199e63:	00 
 8199e64:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199e67:	89 04 24             	mov    %eax,(%esp)
 8199e6a:	e8 8d 1a f3 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8199e6f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199e76:	00 
 8199e77:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199e7a:	89 04 24             	mov    %eax,(%esp)
 8199e7d:	e8 9e 1a f3 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8199e82:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8199e85:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 8199e89:	98                   	cwtl
 8199e8a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199e8e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199e91:	89 04 24             	mov    %eax,(%esp)
 8199e94:	e8 0b 00 f4 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8199e99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8199e9c:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 8199ea0:	0f b7 c0             	movzwl %ax,%eax
 8199ea3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199ea7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199eaa:	89 04 24             	mov    %eax,(%esp)
 8199ead:	e8 f2 ff f3 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8199eb2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8199eb9:	00 
 8199eba:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199ebd:	89 04 24             	mov    %eax,(%esp)
 8199ec0:	e8 93 1a f3 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8199ec5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199ec8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8199ecc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8199ecf:	89 04 24             	mov    %eax,(%esp)
 8199ed2:	e8 e3 e6 4a 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8199ed7:	bb 00 00 00 00       	mov    $0x0,%ebx
 8199edc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199edf:	89 04 24             	mov    %eax,(%esp)
 8199ee2:	e8 99 3f 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8199ee7:	eb 1b                	jmp    8199f04 <_ZN4ARAD10DISPATCHER36Arad_INTER_kAvatarHiddenOptionChange12dispatch_sigEP5CUserPci+0x196>
 8199ee9:	89 d3                	mov    %edx,%ebx
 8199eeb:	89 c6                	mov    %eax,%esi
 8199eed:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8199ef0:	89 04 24             	mov    %eax,(%esp)
 8199ef3:	e8 88 3f 3f 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8199ef8:	89 f0                	mov    %esi,%eax
 8199efa:	89 da                	mov    %ebx,%edx
 8199efc:	89 04 24             	mov    %eax,(%esp)
 8199eff:	e8 4c 98 94 00       	call   8ae3750 <_Unwind_Resume>
 8199f04:	89 d8                	mov    %ebx,%eax
 8199f06:	83 c4 30             	add    $0x30,%esp
 8199f09:	5b                   	pop    %ebx
 8199f0a:	5e                   	pop    %esi
 8199f0b:	5d                   	pop    %ebp
 8199f0c:	c3                   	ret
 8199f0d:	90                   	nop

```

```c
// ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig @ 0x8199d6e

/* ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig(CUser*, char*, int) */

undefined4
ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig
          (CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  AvatarFixedHiddenOptionServer *pAVar3;
  undefined4 uVar4;
  PacketGuard local_1c [12];
  SigAvatarHiddenOptionChange *local_10;
  
  if (param_2 == (char *)0x0) {
    uVar4 = 0x664;
  }
  else {
    local_10 = (SigAvatarHiddenOptionChange *)param_3;
    if (param_3 == 0) {
      LogManager::logFormat
                (1,"localjapan/Arad_InterDispatcher.cpp",
                 "virtual int ARAD::DISPATCHER::Arad_INTER_kAvatarHiddenOptionChange::dispatch_sig(CUser*, char*, int)"
                 ,0x669,"AVATAR HIDDENOPTION CHANGE INTER_DSP(SigAvatarHiddenOptionChange) null.");
      uVar4 = 0x66a;
    }
    else {
      iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
      if (iVar2 == 0) {
        uVar4 = 0x670;
      }
      else {
        pAVar3 = (AvatarFixedHiddenOptionServer *)Singleton<AvatarFixedHiddenOptionServer>::Get();
        cVar1 = AvatarFixedHiddenOptionServer::CheckCondition(pAVar3,(CUser *)param_2,local_10);
        if (cVar1 == '\x01') {
          pAVar3 = (AvatarFixedHiddenOptionServer *)Singleton<AvatarFixedHiddenOptionServer>::Get();
          cVar1 = AvatarFixedHiddenOptionServer::ChangeHiddenOption
                            (pAVar3,(CUser *)param_2,local_10);
          if (cVar1 == '\x01') {
            PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08199e4f to 08199ed6 has its CatchHandler @ 08199ee9 */
            InterfacePacketBuf::clear((InterfacePacketBuf *)local_1c);
            InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x24c);
            InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 2));
            InterfacePacketBuf::put_short
                      ((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 4));
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

