# Inter_NoticePowerWarProlong

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d4fce Inter_NoticePowerWarProlong::dispatch_sig  [0x084d4fce-0x84d5071] ===
 84d4fce:	55                   	push   %ebp
 84d4fcf:	89 e5                	mov    %esp,%ebp
 84d4fd1:	56                   	push   %esi
 84d4fd2:	53                   	push   %ebx
 84d4fd3:	83 ec 20             	sub    $0x20,%esp
 84d4fd6:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4fd9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4fdc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4fdf:	89 04 24             	mov    %eax,(%esp)
 84d4fe2:	e8 65 8d 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4fe7:	c7 44 24 08 a3 00 00 	movl   $0xa3,0x8(%esp)
 84d4fee:	00 
 84d4fef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d4ff6:	00 
 84d4ff7:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4ffa:	89 04 24             	mov    %eax,(%esp)
 84d4ffd:	e8 fa 68 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d5002:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d5005:	8b 40 0a             	mov    0xa(%eax),%eax
 84d5008:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d500c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d500f:	89 04 24             	mov    %eax,(%esp)
 84d5012:	e8 25 69 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d5017:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d501e:	00 
 84d501f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5022:	89 04 24             	mov    %eax,(%esp)
 84d5025:	e8 2e 69 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d502a:	e8 78 53 c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d502f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d5032:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d5036:	89 04 24             	mov    %eax,(%esp)
 84d5039:	e8 d6 3b 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d503e:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d5043:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d5046:	89 04 24             	mov    %eax,(%esp)
 84d5049:	e8 32 8e 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d504e:	89 d8                	mov    %ebx,%eax
 84d5050:	83 c4 20             	add    $0x20,%esp
 84d5053:	5b                   	pop    %ebx
 84d5054:	5e                   	pop    %esi
 84d5055:	5d                   	pop    %ebp
 84d5056:	c3                   	ret
 84d5057:	89 d3                	mov    %edx,%ebx
 84d5059:	89 c6                	mov    %eax,%esi
 84d505b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d505e:	89 04 24             	mov    %eax,(%esp)
 84d5061:	e8 1a 8e 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d5066:	89 f0                	mov    %esi,%eax
 84d5068:	89 da                	mov    %ebx,%edx
 84d506a:	89 04 24             	mov    %eax,(%esp)
 84d506d:	e8 de e6 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_NoticePowerWarProlong::dispatch_sig @ 0x84d4fce

/* Inter_NoticePowerWarProlong::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NoticePowerWarProlong::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4ffd to 084d503d has its CatchHandler @ 084d5057 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xa3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

