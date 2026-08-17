# Dispatcher_P2P_Statistics

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## check_error

```asm
// === 081e2ef6 Dispatcher_P2P_Statistics::check_error  [0x081e2ef6-0x81e2f21] ===
 81e2ef6:	55                   	push   %ebp
 81e2ef7:	89 e5                	mov    %esp,%ebp
 81e2ef9:	83 ec 18             	sub    $0x18,%esp
 81e2efc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2f03:	00 
 81e2f04:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2f0b:	00 
 81e2f0c:	c7 44 24 04 80 15 bd 	movl   $0x8bd1580,0x4(%esp)
 81e2f13:	08 
 81e2f14:	c7 04 24 70 59 00 00 	movl   $0x5970,(%esp)
 81e2f1b:	e8 b7 d9 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2f20:	c9                   	leave
 81e2f21:	c3                   	ret

```

```c
// Dispatcher_P2P_Statistics::check_error @ 0x81e2ef6

/* Dispatcher_P2P_Statistics::check_error(CUser*, MSG_BASE&) */

void Dispatcher_P2P_Statistics::check_error(CUser *param_1,MSG_BASE *param_2)

{
  LineFunc(0x5970,"int Dispatcher_P2P_Statistics::check_error(CUser*, MSG_BASE&)",0,0);
  return;
}

```

---

## process

```asm
// === 081e2bde Dispatcher_P2P_Statistics::process  [0x081e2bde-0x81e2ef5] ===
 81e2bde:	55                   	push   %ebp
 81e2bdf:	89 e5                	mov    %esp,%ebp
 81e2be1:	57                   	push   %edi
 81e2be2:	56                   	push   %esi
 81e2be3:	53                   	push   %ebx
 81e2be4:	81 ec fc 00 00 00    	sub    $0xfc,%esp
 81e2bea:	8b 45 10             	mov    0x10(%ebp),%eax
 81e2bed:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81e2bf0:	8d 85 65 ff ff ff    	lea    -0x9b(%ebp),%eax
 81e2bf6:	89 04 24             	mov    %eax,(%esp)
 81e2bf9:	e8 98 9a 04 00       	call   822c696 <_ZN21Packet_P2P_StatisticsC1Ev>
 81e2bfe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c01:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81e2c05:	0f be d0             	movsbl %al,%edx
 81e2c08:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c0b:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e2c0f:	0f be c0             	movsbl %al,%eax
 81e2c12:	89 d1                	mov    %edx,%ecx
 81e2c14:	29 c1                	sub    %eax,%ecx
 81e2c16:	89 c8                	mov    %ecx,%eax
 81e2c18:	89 85 6f ff ff ff    	mov    %eax,-0x91(%ebp)
 81e2c1e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c21:	0f b6 40 0e          	movzbl 0xe(%eax),%eax
 81e2c25:	0f be c0             	movsbl %al,%eax
 81e2c28:	89 85 73 ff ff ff    	mov    %eax,-0x8d(%ebp)
 81e2c2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2c31:	89 04 24             	mov    %eax,(%esp)
 81e2c34:	e8 57 90 ee ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 81e2c39:	88 85 77 ff ff ff    	mov    %al,-0x89(%ebp)
 81e2c3f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c42:	0f b7 40 10          	movzwl 0x10(%eax),%eax
 81e2c46:	66 89 85 78 ff ff ff 	mov    %ax,-0x88(%ebp)
 81e2c4d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c50:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81e2c54:	66 89 85 7a ff ff ff 	mov    %ax,-0x86(%ebp)
 81e2c5b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c5e:	0f b7 40 14          	movzwl 0x14(%eax),%eax
 81e2c62:	66 89 85 7c ff ff ff 	mov    %ax,-0x84(%ebp)
 81e2c69:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c6c:	8b 40 18             	mov    0x18(%eax),%eax
 81e2c6f:	89 85 7e ff ff ff    	mov    %eax,-0x82(%ebp)
 81e2c75:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c78:	8b 40 1c             	mov    0x1c(%eax),%eax
 81e2c7b:	89 45 82             	mov    %eax,-0x7e(%ebp)
 81e2c7e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c81:	8b 40 20             	mov    0x20(%eax),%eax
 81e2c84:	89 45 86             	mov    %eax,-0x7a(%ebp)
 81e2c87:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c8a:	8b 40 24             	mov    0x24(%eax),%eax
 81e2c8d:	89 45 8a             	mov    %eax,-0x76(%ebp)
 81e2c90:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c93:	0f b7 40 28          	movzwl 0x28(%eax),%eax
 81e2c97:	66 89 45 8e          	mov    %ax,-0x72(%ebp)
 81e2c9b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2c9e:	0f b7 40 2a          	movzwl 0x2a(%eax),%eax
 81e2ca2:	66 89 45 90          	mov    %ax,-0x70(%ebp)
 81e2ca6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2ca9:	0f b7 40 2c          	movzwl 0x2c(%eax),%eax
 81e2cad:	66 89 45 92          	mov    %ax,-0x6e(%ebp)
 81e2cb1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2cb4:	8b 40 30             	mov    0x30(%eax),%eax
 81e2cb7:	89 45 94             	mov    %eax,-0x6c(%ebp)
 81e2cba:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2cbd:	8b 40 34             	mov    0x34(%eax),%eax
 81e2cc0:	89 45 98             	mov    %eax,-0x68(%ebp)
 81e2cc3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2cc6:	8b 40 38             	mov    0x38(%eax),%eax
 81e2cc9:	89 45 9c             	mov    %eax,-0x64(%ebp)
 81e2ccc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81e2ccf:	8b 40 3c             	mov    0x3c(%eax),%eax
 81e2cd2:	89 45 a0             	mov    %eax,-0x60(%ebp)
 81e2cd5:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2cdc:	00 
 81e2cdd:	c7 44 24 08 53 59 00 	movl   $0x5953,0x8(%esp)
 81e2ce4:	00 
 81e2ce5:	c7 44 24 04 c0 15 bd 	movl   $0x8bd15c0,0x4(%esp)
 81e2cec:	08 
 81e2ced:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81e2cf0:	89 04 24             	mov    %eax,(%esp)
 81e2cf3:	e8 20 ca 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e2cf8:	c7 44 24 04 16 1b bc 	movl   $0x8bc1b16,0x4(%esp)
 81e2cff:	08 
 81e2d00:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 81e2d03:	89 04 24             	mov    %eax,(%esp)
 81e2d06:	e8 7d ca 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e2d0b:	8b 7d 8a             	mov    -0x76(%ebp),%edi
 81e2d0e:	8b 45 86             	mov    -0x7a(%ebp),%eax
 81e2d11:	89 85 30 ff ff ff    	mov    %eax,-0xd0(%ebp)
 81e2d17:	8b 4d 82             	mov    -0x7e(%ebp),%ecx
 81e2d1a:	89 8d 34 ff ff ff    	mov    %ecx,-0xcc(%ebp)
 81e2d20:	8b 85 7e ff ff ff    	mov    -0x82(%ebp),%eax
 81e2d26:	89 85 38 ff ff ff    	mov    %eax,-0xc8(%ebp)
 81e2d2c:	0f b7 85 7c ff ff ff 	movzwl -0x84(%ebp),%eax
 81e2d33:	98                   	cwtl
 81e2d34:	89 85 3c ff ff ff    	mov    %eax,-0xc4(%ebp)
 81e2d3a:	0f b7 85 7a ff ff ff 	movzwl -0x86(%ebp),%eax
 81e2d41:	98                   	cwtl
 81e2d42:	89 85 40 ff ff ff    	mov    %eax,-0xc0(%ebp)
 81e2d48:	0f b7 85 78 ff ff ff 	movzwl -0x88(%ebp),%eax
 81e2d4f:	0f bf f0             	movswl %ax,%esi
 81e2d52:	8b 9d 6f ff ff ff    	mov    -0x91(%ebp),%ebx
 81e2d58:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2d5f:	00 
 81e2d60:	c7 44 24 08 54 59 00 	movl   $0x5954,0x8(%esp)
 81e2d67:	00 
 81e2d68:	c7 44 24 04 c0 15 bd 	movl   $0x8bd15c0,0x4(%esp)
 81e2d6f:	08 
 81e2d70:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e2d73:	89 04 24             	mov    %eax,(%esp)
 81e2d76:	e8 9d c9 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e2d7b:	89 7c 24 24          	mov    %edi,0x24(%esp)
 81e2d7f:	8b 8d 30 ff ff ff    	mov    -0xd0(%ebp),%ecx
 81e2d85:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81e2d89:	8b 85 34 ff ff ff    	mov    -0xcc(%ebp),%eax
 81e2d8f:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81e2d93:	8b 8d 38 ff ff ff    	mov    -0xc8(%ebp),%ecx
 81e2d99:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81e2d9d:	8b 85 3c ff ff ff    	mov    -0xc4(%ebp),%eax
 81e2da3:	89 44 24 14          	mov    %eax,0x14(%esp)
 81e2da7:	8b 8d 40 ff ff ff    	mov    -0xc0(%ebp),%ecx
 81e2dad:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81e2db1:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e2db5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e2db9:	c7 44 24 04 28 1b bc 	movl   $0x8bc1b28,0x4(%esp)
 81e2dc0:	08 
 81e2dc1:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 81e2dc4:	89 04 24             	mov    %eax,(%esp)
 81e2dc7:	e8 bc c9 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e2dcc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2dd3:	00 
 81e2dd4:	c7 44 24 08 5e 59 00 	movl   $0x595e,0x8(%esp)
 81e2ddb:	00 
 81e2ddc:	c7 44 24 04 c0 15 bd 	movl   $0x8bd15c0,0x4(%esp)
 81e2de3:	08 
 81e2de4:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81e2de7:	89 04 24             	mov    %eax,(%esp)
 81e2dea:	e8 29 c9 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e2def:	c7 44 24 04 6d 1b bc 	movl   $0x8bc1b6d,0x4(%esp)
 81e2df6:	08 
 81e2df7:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 81e2dfa:	89 04 24             	mov    %eax,(%esp)
 81e2dfd:	e8 86 c9 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e2e02:	8b 7d a0             	mov    -0x60(%ebp),%edi
 81e2e05:	8b 45 9c             	mov    -0x64(%ebp),%eax
 81e2e08:	89 85 44 ff ff ff    	mov    %eax,-0xbc(%ebp)
 81e2e0e:	8b 4d 98             	mov    -0x68(%ebp),%ecx
 81e2e11:	89 8d 48 ff ff ff    	mov    %ecx,-0xb8(%ebp)
 81e2e17:	8b 45 94             	mov    -0x6c(%ebp),%eax
 81e2e1a:	89 85 4c ff ff ff    	mov    %eax,-0xb4(%ebp)
 81e2e20:	0f b7 45 92          	movzwl -0x6e(%ebp),%eax
 81e2e24:	98                   	cwtl
 81e2e25:	89 85 50 ff ff ff    	mov    %eax,-0xb0(%ebp)
 81e2e2b:	0f b7 45 90          	movzwl -0x70(%ebp),%eax
 81e2e2f:	98                   	cwtl
 81e2e30:	89 85 54 ff ff ff    	mov    %eax,-0xac(%ebp)
 81e2e36:	0f b7 45 8e          	movzwl -0x72(%ebp),%eax
 81e2e3a:	0f bf f0             	movswl %ax,%esi
 81e2e3d:	8b 9d 73 ff ff ff    	mov    -0x8d(%ebp),%ebx
 81e2e43:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2e4a:	00 
 81e2e4b:	c7 44 24 08 5f 59 00 	movl   $0x595f,0x8(%esp)
 81e2e52:	00 
 81e2e53:	c7 44 24 04 c0 15 bd 	movl   $0x8bd15c0,0x4(%esp)
 81e2e5a:	08 
 81e2e5b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e2e5e:	89 04 24             	mov    %eax,(%esp)
 81e2e61:	e8 b2 c8 36 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 81e2e66:	89 7c 24 24          	mov    %edi,0x24(%esp)
 81e2e6a:	8b 8d 44 ff ff ff    	mov    -0xbc(%ebp),%ecx
 81e2e70:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 81e2e74:	8b 85 48 ff ff ff    	mov    -0xb8(%ebp),%eax
 81e2e7a:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 81e2e7e:	8b 8d 4c ff ff ff    	mov    -0xb4(%ebp),%ecx
 81e2e84:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 81e2e88:	8b 85 50 ff ff ff    	mov    -0xb0(%ebp),%eax
 81e2e8e:	89 44 24 14          	mov    %eax,0x14(%esp)
 81e2e92:	8b 8d 54 ff ff ff    	mov    -0xac(%ebp),%ecx
 81e2e98:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 81e2e9c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 81e2ea0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81e2ea4:	c7 44 24 04 28 1b bc 	movl   $0x8bc1b28,0x4(%esp)
 81e2eab:	08 
 81e2eac:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 81e2eaf:	89 04 24             	mov    %eax,(%esp)
 81e2eb2:	e8 d1 c8 36 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 81e2eb7:	8d 9d 65 ff ff ff    	lea    -0x9b(%ebp),%ebx
 81e2ebd:	a1 30 be 40 09       	mov    0x940be30,%eax
 81e2ec2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81e2ec9:	00 
 81e2eca:	89 04 24             	mov    %eax,(%esp)
 81e2ecd:	e8 26 ee f2 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 81e2ed2:	c7 44 24 08 3f 00 00 	movl   $0x3f,0x8(%esp)
 81e2ed9:	00 
 81e2eda:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81e2ede:	89 04 24             	mov    %eax,(%esp)
 81e2ee1:	e8 5e f1 28 00       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 81e2ee6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2eeb:	81 c4 fc 00 00 00    	add    $0xfc,%esp
 81e2ef1:	5b                   	pop    %ebx
 81e2ef2:	5e                   	pop    %esi
 81e2ef3:	5f                   	pop    %edi
 81e2ef4:	5d                   	pop    %ebp
 81e2ef5:	c3                   	ret

```

```c
// Dispatcher_P2P_Statistics::process @ 0x81e2bde

/* Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_P2P_Statistics::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  CStatisticServerProxy *this;
  int iVar8;
  Packet_P2P_Statistics local_9f [10];
  int local_95;
  int local_91;
  undefined1 local_8d;
  short local_8c;
  short local_8a;
  short local_88;
  undefined4 local_86;
  undefined4 local_82;
  undefined4 local_7e;
  undefined4 local_7a;
  short local_76;
  short local_74;
  short local_72;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  cMyTrace local_60 [16];
  cMyTrace local_50 [16];
  cMyTrace local_40 [16];
  cMyTrace local_30 [16];
  ParamBase *local_20;
  
  local_20 = param_3;
  Packet_P2P_Statistics::Packet_P2P_Statistics(local_9f);
  local_95 = (int)(char)local_20[0xd] - (int)(char)local_20[0xe];
  local_91 = (int)(char)local_20[0xe];
  local_8d = CUser::GetServerGroup((CUser *)param_2);
  local_8c = *(short *)(local_20 + 0x10);
  local_8a = *(short *)(local_20 + 0x12);
  local_88 = *(short *)(local_20 + 0x14);
  local_86 = *(undefined4 *)(local_20 + 0x18);
  local_82 = *(undefined4 *)(local_20 + 0x1c);
  local_7e = *(undefined4 *)(local_20 + 0x20);
  local_7a = *(undefined4 *)(local_20 + 0x24);
  local_76 = *(short *)(local_20 + 0x28);
  local_74 = *(short *)(local_20 + 0x2a);
  local_72 = *(short *)(local_20 + 0x2c);
  local_70 = *(undefined4 *)(local_20 + 0x30);
  local_6c = *(undefined4 *)(local_20 + 0x34);
  local_68 = *(undefined4 *)(local_20 + 0x38);
  local_64 = *(undefined4 *)(local_20 + 0x3c);
  cMyTrace::cMyTrace(local_60,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x5953,0);
  cMyTrace::operator()(local_60,"p2p statistics");
  uVar5 = local_7a;
  uVar4 = local_7e;
  uVar3 = local_82;
  uVar2 = local_86;
  iVar1 = local_95;
  iVar6 = (int)local_88;
  iVar7 = (int)local_8a;
  iVar8 = (int)local_8c;
  cMyTrace::cMyTrace(local_50,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x5954,0);
  cMyTrace::operator()
            (local_50,"num(%d) min(%d) max(%d), avg(%d), 100(%u), 200(%u), 300(%u), 400(%u)",iVar1,
             iVar8,iVar7,iVar6,uVar2,uVar3,uVar4,uVar5);
  cMyTrace::cMyTrace(local_40,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x595e,0);
  cMyTrace::operator()(local_40,"relay statistics");
  uVar5 = local_64;
  uVar4 = local_68;
  uVar3 = local_6c;
  uVar2 = local_70;
  iVar1 = local_91;
  iVar6 = (int)local_72;
  iVar7 = (int)local_74;
  iVar8 = (int)local_76;
  cMyTrace::cMyTrace(local_30,
                     "virtual int Dispatcher_P2P_Statistics::process(CUser*, MSG_BASE&, ParamBase&)"
                     ,0x595f,0);
  cMyTrace::operator()
            (local_30,"num(%d) min(%d) max(%d), avg(%d), 100(%u), 200(%u), 300(%u), 400(%u)",iVar1,
             iVar8,iVar7,iVar6,uVar2,uVar3,uVar4,uVar5);
  this = (CStatisticServerProxy *)
         CServerProxyMgr<CStatisticServerProxy>::GetServerProxy(GlobalData::s_statistic_proxy_mgr,0)
  ;
  CStatisticServerProxy::SendPacket(this,(char *)local_9f,0x3f);
  return 0;
}

```

---

## read

```asm
// === 081e2780 Dispatcher_P2P_Statistics::read  [0x081e2780-0x81e2bdd] ===
 81e2780:	55                   	push   %ebp
 81e2781:	89 e5                	mov    %esp,%ebp
 81e2783:	83 ec 28             	sub    $0x28,%esp
 81e2786:	8b 45 10             	mov    0x10(%ebp),%eax
 81e2789:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81e278c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e278f:	83 c0 0d             	add    $0xd,%eax
 81e2792:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2796:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2799:	89 04 24             	mov    %eax,(%esp)
 81e279c:	e8 81 a7 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e27a1:	83 f0 01             	xor    $0x1,%eax
 81e27a4:	84 c0                	test   %al,%al
 81e27a6:	74 29                	je     81e27d1 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x51>
 81e27a8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e27af:	00 
 81e27b0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e27b7:	00 
 81e27b8:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e27bf:	08 
 81e27c0:	c7 04 24 1a 59 00 00 	movl   $0x591a,(%esp)
 81e27c7:	e8 0b e1 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e27cc:	e9 0a 04 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e27d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e27d4:	83 c0 0e             	add    $0xe,%eax
 81e27d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e27db:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e27de:	89 04 24             	mov    %eax,(%esp)
 81e27e1:	e8 3c a7 3a 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81e27e6:	83 f0 01             	xor    $0x1,%eax
 81e27e9:	84 c0                	test   %al,%al
 81e27eb:	74 29                	je     81e2816 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x96>
 81e27ed:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e27f4:	00 
 81e27f5:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e27fc:	00 
 81e27fd:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2804:	08 
 81e2805:	c7 04 24 1b 59 00 00 	movl   $0x591b,(%esp)
 81e280c:	e8 c6 e0 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2811:	e9 c5 03 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2816:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2819:	83 c0 10             	add    $0x10,%eax
 81e281c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2820:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2823:	89 04 24             	mov    %eax,(%esp)
 81e2826:	e8 95 a7 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e282b:	83 f0 01             	xor    $0x1,%eax
 81e282e:	84 c0                	test   %al,%al
 81e2830:	74 29                	je     81e285b <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0xdb>
 81e2832:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2839:	00 
 81e283a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2841:	00 
 81e2842:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2849:	08 
 81e284a:	c7 04 24 1d 59 00 00 	movl   $0x591d,(%esp)
 81e2851:	e8 81 e0 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2856:	e9 80 03 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e285b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e285e:	83 c0 12             	add    $0x12,%eax
 81e2861:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2865:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2868:	89 04 24             	mov    %eax,(%esp)
 81e286b:	e8 50 a7 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e2870:	83 f0 01             	xor    $0x1,%eax
 81e2873:	84 c0                	test   %al,%al
 81e2875:	74 29                	je     81e28a0 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x120>
 81e2877:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e287e:	00 
 81e287f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2886:	00 
 81e2887:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e288e:	08 
 81e288f:	c7 04 24 1e 59 00 00 	movl   $0x591e,(%esp)
 81e2896:	e8 3c e0 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e289b:	e9 3b 03 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e28a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e28a3:	83 c0 14             	add    $0x14,%eax
 81e28a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e28aa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e28ad:	89 04 24             	mov    %eax,(%esp)
 81e28b0:	e8 0b a7 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e28b5:	83 f0 01             	xor    $0x1,%eax
 81e28b8:	84 c0                	test   %al,%al
 81e28ba:	74 29                	je     81e28e5 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x165>
 81e28bc:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e28c3:	00 
 81e28c4:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e28cb:	00 
 81e28cc:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e28d3:	08 
 81e28d4:	c7 04 24 1f 59 00 00 	movl   $0x591f,(%esp)
 81e28db:	e8 f7 df 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e28e0:	e9 f6 02 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e28e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e28e8:	83 c0 18             	add    $0x18,%eax
 81e28eb:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e28ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e28f2:	89 04 24             	mov    %eax,(%esp)
 81e28f5:	e8 f6 a7 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e28fa:	83 f0 01             	xor    $0x1,%eax
 81e28fd:	84 c0                	test   %al,%al
 81e28ff:	74 29                	je     81e292a <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x1aa>
 81e2901:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2908:	00 
 81e2909:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2910:	00 
 81e2911:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2918:	08 
 81e2919:	c7 04 24 21 59 00 00 	movl   $0x5921,(%esp)
 81e2920:	e8 b2 df 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2925:	e9 b1 02 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e292a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e292d:	83 c0 1c             	add    $0x1c,%eax
 81e2930:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2934:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2937:	89 04 24             	mov    %eax,(%esp)
 81e293a:	e8 b1 a7 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e293f:	83 f0 01             	xor    $0x1,%eax
 81e2942:	84 c0                	test   %al,%al
 81e2944:	74 29                	je     81e296f <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x1ef>
 81e2946:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e294d:	00 
 81e294e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2955:	00 
 81e2956:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e295d:	08 
 81e295e:	c7 04 24 22 59 00 00 	movl   $0x5922,(%esp)
 81e2965:	e8 6d df 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e296a:	e9 6c 02 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e296f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2972:	83 c0 20             	add    $0x20,%eax
 81e2975:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2979:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e297c:	89 04 24             	mov    %eax,(%esp)
 81e297f:	e8 6c a7 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e2984:	83 f0 01             	xor    $0x1,%eax
 81e2987:	84 c0                	test   %al,%al
 81e2989:	74 29                	je     81e29b4 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x234>
 81e298b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2992:	00 
 81e2993:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e299a:	00 
 81e299b:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e29a2:	08 
 81e29a3:	c7 04 24 23 59 00 00 	movl   $0x5923,(%esp)
 81e29aa:	e8 28 df 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e29af:	e9 27 02 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e29b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e29b7:	83 c0 24             	add    $0x24,%eax
 81e29ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e29be:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e29c1:	89 04 24             	mov    %eax,(%esp)
 81e29c4:	e8 27 a7 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e29c9:	83 f0 01             	xor    $0x1,%eax
 81e29cc:	84 c0                	test   %al,%al
 81e29ce:	74 29                	je     81e29f9 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x279>
 81e29d0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e29d7:	00 
 81e29d8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e29df:	00 
 81e29e0:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e29e7:	08 
 81e29e8:	c7 04 24 24 59 00 00 	movl   $0x5924,(%esp)
 81e29ef:	e8 e3 de 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e29f4:	e9 e2 01 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e29f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e29fc:	83 c0 28             	add    $0x28,%eax
 81e29ff:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2a03:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2a06:	89 04 24             	mov    %eax,(%esp)
 81e2a09:	e8 b2 a5 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e2a0e:	83 f0 01             	xor    $0x1,%eax
 81e2a11:	84 c0                	test   %al,%al
 81e2a13:	74 29                	je     81e2a3e <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x2be>
 81e2a15:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2a1c:	00 
 81e2a1d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2a24:	00 
 81e2a25:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2a2c:	08 
 81e2a2d:	c7 04 24 26 59 00 00 	movl   $0x5926,(%esp)
 81e2a34:	e8 9e de 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2a39:	e9 9d 01 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2a3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2a41:	83 c0 2a             	add    $0x2a,%eax
 81e2a44:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2a48:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2a4b:	89 04 24             	mov    %eax,(%esp)
 81e2a4e:	e8 6d a5 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e2a53:	83 f0 01             	xor    $0x1,%eax
 81e2a56:	84 c0                	test   %al,%al
 81e2a58:	74 29                	je     81e2a83 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x303>
 81e2a5a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2a61:	00 
 81e2a62:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2a69:	00 
 81e2a6a:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2a71:	08 
 81e2a72:	c7 04 24 27 59 00 00 	movl   $0x5927,(%esp)
 81e2a79:	e8 59 de 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2a7e:	e9 58 01 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2a83:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2a86:	83 c0 2c             	add    $0x2c,%eax
 81e2a89:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2a8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2a90:	89 04 24             	mov    %eax,(%esp)
 81e2a93:	e8 28 a5 3a 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81e2a98:	83 f0 01             	xor    $0x1,%eax
 81e2a9b:	84 c0                	test   %al,%al
 81e2a9d:	74 29                	je     81e2ac8 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x348>
 81e2a9f:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2aa6:	00 
 81e2aa7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2aae:	00 
 81e2aaf:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2ab6:	08 
 81e2ab7:	c7 04 24 28 59 00 00 	movl   $0x5928,(%esp)
 81e2abe:	e8 14 de 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2ac3:	e9 13 01 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2ac8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2acb:	83 c0 30             	add    $0x30,%eax
 81e2ace:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2ad2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2ad5:	89 04 24             	mov    %eax,(%esp)
 81e2ad8:	e8 13 a6 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e2add:	83 f0 01             	xor    $0x1,%eax
 81e2ae0:	84 c0                	test   %al,%al
 81e2ae2:	74 29                	je     81e2b0d <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x38d>
 81e2ae4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2aeb:	00 
 81e2aec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2af3:	00 
 81e2af4:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2afb:	08 
 81e2afc:	c7 04 24 2a 59 00 00 	movl   $0x592a,(%esp)
 81e2b03:	e8 cf dd 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2b08:	e9 ce 00 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2b0d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2b10:	83 c0 34             	add    $0x34,%eax
 81e2b13:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2b17:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2b1a:	89 04 24             	mov    %eax,(%esp)
 81e2b1d:	e8 ce a5 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e2b22:	83 f0 01             	xor    $0x1,%eax
 81e2b25:	84 c0                	test   %al,%al
 81e2b27:	74 29                	je     81e2b52 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x3d2>
 81e2b29:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2b30:	00 
 81e2b31:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2b38:	00 
 81e2b39:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2b40:	08 
 81e2b41:	c7 04 24 2b 59 00 00 	movl   $0x592b,(%esp)
 81e2b48:	e8 8a dd 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2b4d:	e9 89 00 00 00       	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2b52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2b55:	83 c0 38             	add    $0x38,%eax
 81e2b58:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2b5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2b5f:	89 04 24             	mov    %eax,(%esp)
 81e2b62:	e8 89 a5 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e2b67:	83 f0 01             	xor    $0x1,%eax
 81e2b6a:	84 c0                	test   %al,%al
 81e2b6c:	74 26                	je     81e2b94 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x414>
 81e2b6e:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2b75:	00 
 81e2b76:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2b7d:	00 
 81e2b7e:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2b85:	08 
 81e2b86:	c7 04 24 2c 59 00 00 	movl   $0x592c,(%esp)
 81e2b8d:	e8 45 dd 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2b92:	eb 47                	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2b94:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81e2b97:	83 c0 3c             	add    $0x3c,%eax
 81e2b9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81e2b9e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81e2ba1:	89 04 24             	mov    %eax,(%esp)
 81e2ba4:	e8 47 a5 3a 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81e2ba9:	83 f0 01             	xor    $0x1,%eax
 81e2bac:	84 c0                	test   %al,%al
 81e2bae:	74 26                	je     81e2bd6 <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x456>
 81e2bb0:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81e2bb7:	00 
 81e2bb8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81e2bbf:	00 
 81e2bc0:	c7 44 24 04 20 16 bd 	movl   $0x8bd1620,0x4(%esp)
 81e2bc7:	08 
 81e2bc8:	c7 04 24 2d 59 00 00 	movl   $0x592d,(%esp)
 81e2bcf:	e8 03 dd 3a 00       	call   85908d7 <_Z8LineFunciPKcij>
 81e2bd4:	eb 05                	jmp    81e2bdb <_ZN25Dispatcher_P2P_Statistics4readER9PacketBufR8MSG_BASE+0x45b>
 81e2bd6:	b8 00 00 00 00       	mov    $0x0,%eax
 81e2bdb:	c9                   	leave
 81e2bdc:	c3                   	ret
 81e2bdd:	90                   	nop

```

```c
// Dispatcher_P2P_Statistics::read @ 0x81e2780

/* Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_P2P_Statistics::read
          (Dispatcher_P2P_Statistics *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x14));
          if (cVar1 == '\x01') {
            cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x18));
            if (cVar1 == '\x01') {
              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x1c));
              if (cVar1 == '\x01') {
                cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x20));
                if (cVar1 == '\x01') {
                  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x24));
                  if (cVar1 == '\x01') {
                    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x28));
                    if (cVar1 == '\x01') {
                      cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x2a));
                      if (cVar1 == '\x01') {
                        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x2c));
                        if (cVar1 == '\x01') {
                          cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x30));
                          if (cVar1 == '\x01') {
                            cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x34));
                            if (cVar1 == '\x01') {
                              cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x38));
                              if (cVar1 == '\x01') {
                                cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x3c));
                                if (cVar1 == '\x01') {
                                  uVar2 = 0;
                                }
                                else {
                                  uVar2 = LineFunc(0x592d,
                                                  "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                                  ,0,0);
                                }
                              }
                              else {
                                uVar2 = LineFunc(0x592c,
                                                 "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                                 ,0,0);
                              }
                            }
                            else {
                              uVar2 = LineFunc(0x592b,
                                               "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                               ,0,0);
                            }
                          }
                          else {
                            uVar2 = LineFunc(0x592a,
                                             "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                             ,0,0);
                          }
                        }
                        else {
                          uVar2 = LineFunc(0x5928,
                                           "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                           ,0,0);
                        }
                      }
                      else {
                        uVar2 = LineFunc(0x5927,
                                         "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                         ,0,0);
                      }
                    }
                    else {
                      uVar2 = LineFunc(0x5926,
                                       "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                       ,0,0);
                    }
                  }
                  else {
                    uVar2 = LineFunc(0x5924,
                                     "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                     ,0,0);
                  }
                }
                else {
                  uVar2 = LineFunc(0x5923,
                                   "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                   ,0,0);
                }
              }
              else {
                uVar2 = LineFunc(0x5922,
                                 "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                                 ,0,0);
              }
            }
            else {
              uVar2 = LineFunc(0x5921,
                               "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",
                               0,0);
            }
          }
          else {
            uVar2 = LineFunc(0x591f,
                             "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0,
                             0);
          }
        }
        else {
          uVar2 = LineFunc(0x591e,
                           "virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0,0)
          ;
        }
      }
      else {
        uVar2 = LineFunc(0x591d,"virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)"
                         ,0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x591b,"virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0
                       ,0);
    }
  }
  else {
    uVar2 = LineFunc(0x591a,"virtual int Dispatcher_P2P_Statistics::read(PacketBuf&, MSG_BASE&)",0,0
                    );
  }
  return uVar2;
}

```

