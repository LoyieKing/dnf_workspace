# Inter_GetPremiumSelectedCubeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8936 Inter_GetPremiumSelectedCubeInfo::dispatch_sig  [0x084e8936-0x84e8a41] ===
 84e8936:	55                   	push   %ebp
 84e8937:	89 e5                	mov    %esp,%ebp
 84e8939:	56                   	push   %esi
 84e893a:	53                   	push   %ebx
 84e893b:	83 ec 20             	sub    $0x20,%esp
 84e893e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e8941:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e8944:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8947:	89 04 24             	mov    %eax,(%esp)
 84e894a:	e8 e3 7a c3 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84e894f:	85 c0                	test   %eax,%eax
 84e8951:	0f 94 c0             	sete   %al
 84e8954:	84 c0                	test   %al,%al
 84e8956:	74 0a                	je     84e8962 <_ZN32Inter_GetPremiumSelectedCubeInfo12dispatch_sigEP5CUserPci+0x2c>
 84e8958:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e895d:	e9 d6 00 00 00       	jmp    84e8a38 <_ZN32Inter_GetPremiumSelectedCubeInfo12dispatch_sigEP5CUserPci+0x102>
 84e8962:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e8965:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84e8969:	0f b6 c8             	movzbl %al,%ecx
 84e896c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e896f:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e8973:	84 c0                	test   %al,%al
 84e8975:	0f 95 c0             	setne  %al
 84e8978:	0f b6 d0             	movzbl %al,%edx
 84e897b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e897e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84e8982:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e8986:	89 04 24             	mov    %eax,(%esp)
 84e8989:	e8 f2 3b 00 00       	call   84ec580 <_ZN15CUserCharacInfo29initContractOfCubePremiumInfoEbh>
 84e898e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e8991:	89 04 24             	mov    %eax,(%esp)
 84e8994:	e8 b3 53 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e8999:	c7 44 24 08 17 02 00 	movl   $0x217,0x8(%esp)
 84e89a0:	00 
 84e89a1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e89a8:	00 
 84e89a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e89ac:	89 04 24             	mov    %eax,(%esp)
 84e89af:	e8 48 2f be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e89b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e89b7:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84e89bb:	0f b6 c0             	movzbl %al,%eax
 84e89be:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e89c2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e89c5:	89 04 24             	mov    %eax,(%esp)
 84e89c8:	e8 53 2f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e89cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e89d0:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84e89d4:	0f b6 c0             	movzbl %al,%eax
 84e89d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e89db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e89de:	89 04 24             	mov    %eax,(%esp)
 84e89e1:	e8 3a 2f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e89e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e89ed:	00 
 84e89ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e89f1:	89 04 24             	mov    %eax,(%esp)
 84e89f4:	e8 5f 2f be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e89f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e89fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e8a00:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8a03:	89 04 24             	mov    %eax,(%esp)
 84e8a06:	e8 af fb 15 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e8a0b:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e8a10:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e8a13:	89 04 24             	mov    %eax,(%esp)
 84e8a16:	e8 65 54 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e8a1b:	eb 1b                	jmp    84e8a38 <_ZN32Inter_GetPremiumSelectedCubeInfo12dispatch_sigEP5CUserPci+0x102>
 84e8a1d:	89 d3                	mov    %edx,%ebx
 84e8a1f:	89 c6                	mov    %eax,%esi
 84e8a21:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e8a24:	89 04 24             	mov    %eax,(%esp)
 84e8a27:	e8 54 54 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e8a2c:	89 f0                	mov    %esi,%eax
 84e8a2e:	89 da                	mov    %ebx,%edx
 84e8a30:	89 04 24             	mov    %eax,(%esp)
 84e8a33:	e8 18 ad 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e8a38:	89 d8                	mov    %ebx,%eax
 84e8a3a:	83 c4 20             	add    $0x20,%esp
 84e8a3d:	5b                   	pop    %ebx
 84e8a3e:	5e                   	pop    %esi
 84e8a3f:	5d                   	pop    %ebp
 84e8a40:	c3                   	ret
 84e8a41:	90                   	nop

```

```c
// Inter_GetPremiumSelectedCubeInfo::dispatch_sig @ 0x84e8936

/* Inter_GetPremiumSelectedCubeInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GetPremiumSelectedCubeInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar1 != 0) {
    CUserCharacInfo::initContractOfCubePremiumInfo
              ((CUserCharacInfo *)param_2,*(char *)(local_10 + 4) != '\0',*(uchar *)(local_10 + 5));
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e89af to 084e8a0a has its CatchHandler @ 084e8a1d */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x217);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 4));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 5));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

