# Inter_NpcLimitBuyItemInfoRenew

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e6e82 Inter_NpcLimitBuyItemInfoRenew::dispatch_sig  [0x084e6e82-0x84e7023] ===
 84e6e82:	55                   	push   %ebp
 84e6e83:	89 e5                	mov    %esp,%ebp
 84e6e85:	56                   	push   %esi
 84e6e86:	53                   	push   %ebx
 84e6e87:	83 ec 30             	sub    $0x30,%esp
 84e6e8a:	8b 45 10             	mov    0x10(%ebp),%eax
 84e6e8d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e6e90:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6e93:	89 04 24             	mov    %eax,(%esp)
 84e6e96:	e8 b1 6e 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e6e9b:	c7 44 24 08 93 01 00 	movl   $0x193,0x8(%esp)
 84e6ea2:	00 
 84e6ea3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6eaa:	00 
 84e6eab:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6eae:	89 04 24             	mov    %eax,(%esp)
 84e6eb1:	e8 46 4a be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e6eb6:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e6eb9:	8b 40 0a             	mov    0xa(%eax),%eax
 84e6ebc:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6ec0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6ec3:	89 04 24             	mov    %eax,(%esp)
 84e6ec6:	e8 71 4a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6ecb:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e6ed2:	e9 cc 00 00 00       	jmp    84e6fa3 <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x121>
 84e6ed7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6eda:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6edd:	89 d0                	mov    %edx,%eax
 84e6edf:	01 c0                	add    %eax,%eax
 84e6ee1:	01 d0                	add    %edx,%eax
 84e6ee3:	c1 e0 02             	shl    $0x2,%eax
 84e6ee6:	8b 44 08 0e          	mov    0xe(%eax,%ecx,1),%eax
 84e6eea:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6eee:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6ef1:	89 04 24             	mov    %eax,(%esp)
 84e6ef4:	e8 43 4a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6ef9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6efc:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6eff:	89 d0                	mov    %edx,%eax
 84e6f01:	01 c0                	add    %eax,%eax
 84e6f03:	01 d0                	add    %edx,%eax
 84e6f05:	c1 e0 02             	shl    $0x2,%eax
 84e6f08:	8b 44 08 12          	mov    0x12(%eax,%ecx,1),%eax
 84e6f0c:	85 c0                	test   %eax,%eax
 84e6f0e:	75 15                	jne    84e6f25 <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0xa3>
 84e6f10:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6f17:	00 
 84e6f18:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6f1b:	89 04 24             	mov    %eax,(%esp)
 84e6f1e:	e8 19 4a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6f23:	eb 7a                	jmp    84e6f9f <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x11d>
 84e6f25:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6f28:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6f2b:	89 d0                	mov    %edx,%eax
 84e6f2d:	01 c0                	add    %eax,%eax
 84e6f2f:	01 d0                	add    %edx,%eax
 84e6f31:	c1 e0 02             	shl    $0x2,%eax
 84e6f34:	8b 5c 08 16          	mov    0x16(%eax,%ecx,1),%ebx
 84e6f38:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6f3b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6f3e:	89 d0                	mov    %edx,%eax
 84e6f40:	01 c0                	add    %eax,%eax
 84e6f42:	01 d0                	add    %edx,%eax
 84e6f44:	c1 e0 02             	shl    $0x2,%eax
 84e6f47:	8b 44 08 12          	mov    0x12(%eax,%ecx,1),%eax
 84e6f4b:	39 c3                	cmp    %eax,%ebx
 84e6f4d:	72 15                	jb     84e6f64 <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0xe2>
 84e6f4f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6f56:	00 
 84e6f57:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6f5a:	89 04 24             	mov    %eax,(%esp)
 84e6f5d:	e8 da 49 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6f62:	eb 3b                	jmp    84e6f9f <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x11d>
 84e6f64:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6f67:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6f6a:	89 d0                	mov    %edx,%eax
 84e6f6c:	01 c0                	add    %eax,%eax
 84e6f6e:	01 d0                	add    %edx,%eax
 84e6f70:	c1 e0 02             	shl    $0x2,%eax
 84e6f73:	8b 5c 08 12          	mov    0x12(%eax,%ecx,1),%ebx
 84e6f77:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e6f7a:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84e6f7d:	89 d0                	mov    %edx,%eax
 84e6f7f:	01 c0                	add    %eax,%eax
 84e6f81:	01 d0                	add    %edx,%eax
 84e6f83:	c1 e0 02             	shl    $0x2,%eax
 84e6f86:	8b 44 08 16          	mov    0x16(%eax,%ecx,1),%eax
 84e6f8a:	89 da                	mov    %ebx,%edx
 84e6f8c:	29 c2                	sub    %eax,%edx
 84e6f8e:	89 d0                	mov    %edx,%eax
 84e6f90:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6f94:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6f97:	89 04 24             	mov    %eax,(%esp)
 84e6f9a:	e8 9d 49 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6f9f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e6fa3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e6fa6:	8b 40 0a             	mov    0xa(%eax),%eax
 84e6fa9:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e6fac:	7e 0d                	jle    84e6fbb <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x139>
 84e6fae:	83 7d f4 1d          	cmpl   $0x1d,-0xc(%ebp)
 84e6fb2:	7f 07                	jg     84e6fbb <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x139>
 84e6fb4:	b8 01 00 00 00       	mov    $0x1,%eax
 84e6fb9:	eb 05                	jmp    84e6fc0 <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x13e>
 84e6fbb:	b8 00 00 00 00       	mov    $0x0,%eax
 84e6fc0:	84 c0                	test   %al,%al
 84e6fc2:	0f 85 0f ff ff ff    	jne    84e6ed7 <_ZN30Inter_NpcLimitBuyItemInfoRenew12dispatch_sigEP5CUserPci+0x55>
 84e6fc8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6fcf:	00 
 84e6fd0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6fd3:	89 04 24             	mov    %eax,(%esp)
 84e6fd6:	e8 7d 49 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e6fdb:	e8 c7 33 bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e6fe0:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 84e6fe3:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e6fe7:	89 04 24             	mov    %eax,(%esp)
 84e6fea:	e8 25 1c 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84e6fef:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e6ff4:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e6ff7:	89 04 24             	mov    %eax,(%esp)
 84e6ffa:	e8 81 6e 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e6fff:	89 d8                	mov    %ebx,%eax
 84e7001:	83 c4 30             	add    $0x30,%esp
 84e7004:	5b                   	pop    %ebx
 84e7005:	5e                   	pop    %esi
 84e7006:	5d                   	pop    %ebp
 84e7007:	c3                   	ret
 84e7008:	89 d3                	mov    %edx,%ebx
 84e700a:	89 c6                	mov    %eax,%esi
 84e700c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84e700f:	89 04 24             	mov    %eax,(%esp)
 84e7012:	e8 69 6e 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e7017:	89 f0                	mov    %esi,%eax
 84e7019:	89 da                	mov    %ebx,%edx
 84e701b:	89 04 24             	mov    %eax,(%esp)
 84e701e:	e8 2d c7 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e7023:	90                   	nop

```

```c
// Inter_NpcLimitBuyItemInfoRenew::dispatch_sig @ 0x84e6e82

/* Inter_NpcLimitBuyItemInfoRenew::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemInfoRenew::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  GameWorld *this;
  PacketGuard local_20 [12];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e6eb1 to 084e6fee has its CatchHandler @ 084e7008 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x193);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 10));
  local_10 = 0;
  while( true ) {
    if ((local_10 < *(int *)(local_14 + 10)) && (local_10 < 0x1e)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    InterfacePacketBuf::put_int
              ((InterfacePacketBuf *)local_20,*(int *)(local_10 * 0xc + 0xe + local_14));
    if (*(int *)(local_10 * 0xc + 0x12 + local_14) == 0) {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
    }
    else if (*(uint *)(local_10 * 0xc + 0x16 + local_14) <
             *(uint *)(local_10 * 0xc + 0x12 + local_14)) {
      InterfacePacketBuf::put_int
                ((InterfacePacketBuf *)local_20,
                 *(int *)(local_10 * 0xc + 0x12 + local_14) -
                 *(int *)(local_10 * 0xc + 0x16 + local_14));
    }
    else {
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,0);
    }
    local_10 = local_10 + 1;
  }
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_20);
  PacketGuard::~PacketGuard(local_20);
  return 0;
}

```

