# Inter_FullLevelBroadCast

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e0816 Inter_FullLevelBroadCast::dispatch_sig  [0x084e0816-0x84e08fb] ===
 84e0816:	55                   	push   %ebp
 84e0817:	89 e5                	mov    %esp,%ebp
 84e0819:	56                   	push   %esi
 84e081a:	53                   	push   %ebx
 84e081b:	83 ec 20             	sub    $0x20,%esp
 84e081e:	8b 45 10             	mov    0x10(%ebp),%eax
 84e0821:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e0824:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0827:	89 04 24             	mov    %eax,(%esp)
 84e082a:	e8 1d d5 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e082f:	c7 44 24 08 56 00 00 	movl   $0x56,0x8(%esp)
 84e0836:	00 
 84e0837:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e083e:	00 
 84e083f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0842:	89 04 24             	mov    %eax,(%esp)
 84e0845:	e8 b2 b0 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e084a:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 84e0851:	00 
 84e0852:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0855:	89 04 24             	mov    %eax,(%esp)
 84e0858:	e8 c3 b0 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e085d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0860:	83 c0 0a             	add    $0xa,%eax
 84e0863:	89 04 24             	mov    %eax,(%esp)
 84e0866:	e8 45 db b9 ff       	call   807e3b0 <strlen@plt>
 84e086b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e086f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0872:	89 04 24             	mov    %eax,(%esp)
 84e0875:	e8 c2 b0 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e087a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e087d:	83 c0 0a             	add    $0xa,%eax
 84e0880:	89 04 24             	mov    %eax,(%esp)
 84e0883:	e8 28 db b9 ff       	call   807e3b0 <strlen@plt>
 84e0888:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e088b:	83 c2 0a             	add    $0xa,%edx
 84e088e:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e0892:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e0896:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e0899:	89 04 24             	mov    %eax,(%esp)
 84e089c:	e8 43 6b cd ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84e08a1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e08a8:	00 
 84e08a9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e08ac:	89 04 24             	mov    %eax,(%esp)
 84e08af:	e8 a4 b0 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e08b4:	e8 ee 9a bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e08b9:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84e08bc:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e08c0:	89 04 24             	mov    %eax,(%esp)
 84e08c3:	e8 4c 83 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84e08c8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e08cd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e08d0:	89 04 24             	mov    %eax,(%esp)
 84e08d3:	e8 a8 d5 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e08d8:	89 d8                	mov    %ebx,%eax
 84e08da:	83 c4 20             	add    $0x20,%esp
 84e08dd:	5b                   	pop    %ebx
 84e08de:	5e                   	pop    %esi
 84e08df:	5d                   	pop    %ebp
 84e08e0:	c3                   	ret
 84e08e1:	89 d3                	mov    %edx,%ebx
 84e08e3:	89 c6                	mov    %eax,%esi
 84e08e5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e08e8:	89 04 24             	mov    %eax,(%esp)
 84e08eb:	e8 90 d5 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e08f0:	89 f0                	mov    %esi,%eax
 84e08f2:	89 da                	mov    %ebx,%edx
 84e08f4:	89 04 24             	mov    %eax,(%esp)
 84e08f7:	e8 54 2e 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_FullLevelBroadCast::dispatch_sig @ 0x84e0816

/* Inter_FullLevelBroadCast::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_FullLevelBroadCast::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  size_t sVar1;
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e0845 to 084e08c7 has its CatchHandler @ 084e08e1 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x56);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,6);
  sVar1 = strlen((char *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar1);
  sVar1 = strlen((char *)(local_10 + 10));
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,(char *)(local_10 + 10),sVar1);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

