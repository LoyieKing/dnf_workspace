# Inter_HadesAction

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch_sig

```asm
// === 084e5f02 Inter_HadesAction::dispatch_sig  [0x084e5f02-0x84e6095] ===
 84e5f02:	55                   	push   %ebp
 84e5f03:	89 e5                	mov    %esp,%ebp
 84e5f05:	57                   	push   %edi
 84e5f06:	56                   	push   %esi
 84e5f07:	53                   	push   %ebx
 84e5f08:	83 ec 5c             	sub    $0x5c,%esp
 84e5f0b:	8b 45 10             	mov    0x10(%ebp),%eax
 84e5f0e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 84e5f11:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e5f15:	74 1c                	je     84e5f33 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x31>
 84e5f17:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5f1a:	89 04 24             	mov    %eax,(%esp)
 84e5f1d:	e8 4c 44 bf ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84e5f22:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 84e5f25:	8b 52 0a             	mov    0xa(%edx),%edx
 84e5f28:	39 d0                	cmp    %edx,%eax
 84e5f2a:	75 07                	jne    84e5f33 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x31>
 84e5f2c:	b8 01 00 00 00       	mov    $0x1,%eax
 84e5f31:	eb 05                	jmp    84e5f38 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x36>
 84e5f33:	b8 00 00 00 00       	mov    $0x0,%eax
 84e5f38:	84 c0                	test   %al,%al
 84e5f3a:	0f 84 9f 00 00 00    	je     84e5fdf <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0xdd>
 84e5f40:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84e5f47:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 84e5f4e:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 84e5f55:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 84e5f5c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5f5f:	89 04 24             	mov    %eax,(%esp)
 84e5f62:	e8 99 a8 d4 ff       	call   8230800 <_ZN5CUser8getHadesEv>
 84e5f67:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84e5f6a:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e5f6e:	89 04 24             	mov    %eax,(%esp)
 84e5f71:	e8 fe 37 fd ff       	call   84b9774 <_ZN8XNuclear6CHades5GetIPEPc>
 84e5f76:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5f79:	8b 40 1e             	mov    0x1e(%eax),%eax
 84e5f7c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 84e5f7f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5f82:	8b 78 1a             	mov    0x1a(%eax),%edi
 84e5f85:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5f88:	8b 70 16             	mov    0x16(%eax),%esi
 84e5f8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5f8e:	8b 58 12             	mov    0x12(%eax),%ebx
 84e5f91:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5f94:	89 04 24             	mov    %eax,(%esp)
 84e5f97:	e8 64 a8 d4 ff       	call   8230800 <_ZN5CUser8getHadesEv>
 84e5f9c:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84e5f9f:	89 54 24 14          	mov    %edx,0x14(%esp)
 84e5fa3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84e5fa6:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e5faa:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84e5fae:	89 74 24 08          	mov    %esi,0x8(%esp)
 84e5fb2:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84e5fb6:	89 04 24             	mov    %eax,(%esp)
 84e5fb9:	e8 fe 35 fd ff       	call   84b95bc <_ZN8XNuclear6CHades14RunHadesActionEjjjjPc>
 84e5fbe:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5fc1:	8b 40 12             	mov    0x12(%eax),%eax
 84e5fc4:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e5fc8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5fcb:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5fcf:	8b 45 08             	mov    0x8(%ebp),%eax
 84e5fd2:	89 04 24             	mov    %eax,(%esp)
 84e5fd5:	e8 88 fe ff ff       	call   84e5e62 <_ZN17Inter_HadesAction10send_alertEP5CUserj>
 84e5fda:	e9 aa 00 00 00       	jmp    84e6089 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x187>
 84e5fdf:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e5fe3:	0f 85 a0 00 00 00    	jne    84e6089 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x187>
 84e5fe9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5fec:	8b 40 0a             	mov    0xa(%eax),%eax
 84e5fef:	85 c0                	test   %eax,%eax
 84e5ff1:	0f 84 92 00 00 00    	je     84e6089 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x187>
 84e5ff7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e5ffa:	8b 40 12             	mov    0x12(%eax),%eax
 84e5ffd:	83 e0 02             	and    $0x2,%eax
 84e6000:	85 c0                	test   %eax,%eax
 84e6002:	74 3c                	je     84e6040 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x13e>
 84e6004:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6007:	8b 58 1e             	mov    0x1e(%eax),%ebx
 84e600a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e600d:	8b 48 1a             	mov    0x1a(%eax),%ecx
 84e6010:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6013:	8b 50 16             	mov    0x16(%eax),%edx
 84e6016:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6019:	8b 40 0a             	mov    0xa(%eax),%eax
 84e601c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84e6023:	00 
 84e6024:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e6028:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e602c:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e6030:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e6037:	00 
 84e6038:	89 04 24             	mov    %eax,(%esp)
 84e603b:	e8 94 fd f5 ff       	call   8445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>
 84e6040:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6043:	8b 40 12             	mov    0x12(%eax),%eax
 84e6046:	83 e0 01             	and    $0x1,%eax
 84e6049:	84 c0                	test   %al,%al
 84e604b:	74 3c                	je     84e6089 <_ZN17Inter_HadesAction12dispatch_sigEP5CUserPci+0x187>
 84e604d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6050:	8b 58 1e             	mov    0x1e(%eax),%ebx
 84e6053:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6056:	8b 48 1a             	mov    0x1a(%eax),%ecx
 84e6059:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e605c:	8b 50 16             	mov    0x16(%eax),%edx
 84e605f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84e6062:	8b 40 0a             	mov    0xa(%eax),%eax
 84e6065:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84e606c:	00 
 84e606d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e6071:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 84e6075:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e6079:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e6080:	00 
 84e6081:	89 04 24             	mov    %eax,(%esp)
 84e6084:	e8 4b fd f5 ff       	call   8445dd4 <_ZN14DB_HadesPunish11makeRequestEjjjjjPc>
 84e6089:	b8 00 00 00 00       	mov    $0x0,%eax
 84e608e:	83 c4 5c             	add    $0x5c,%esp
 84e6091:	5b                   	pop    %ebx
 84e6092:	5e                   	pop    %esi
 84e6093:	5f                   	pop    %edi
 84e6094:	5d                   	pop    %ebp
 84e6095:	c3                   	ret

```

```c
// Inter_HadesAction::dispatch_sig @ 0x84e5f02

/* Inter_HadesAction::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_HadesAction::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  CHades *pCVar7;
  char local_30 [16];
  int local_20;
  
  local_20 = param_3;
  if (param_2 != (char *)0x0) {
    iVar6 = CUser::get_acc_id((CUser *)param_2);
    if (iVar6 == *(int *)(local_20 + 10)) {
      bVar5 = true;
      goto LAB_084e5f38;
    }
  }
  bVar5 = false;
LAB_084e5f38:
  if (bVar5) {
    local_30[0] = '\0';
    local_30[1] = '\0';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\0';
    local_30[5] = '\0';
    local_30[6] = '\0';
    local_30[7] = '\0';
    local_30[8] = '\0';
    local_30[9] = '\0';
    local_30[10] = '\0';
    local_30[0xb] = '\0';
    local_30[0xc] = '\0';
    local_30[0xd] = '\0';
    local_30[0xe] = '\0';
    local_30[0xf] = '\0';
    pCVar7 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::GetIP(pCVar7,local_30);
    uVar1 = *(uint *)(local_20 + 0x1e);
    uVar2 = *(uint *)(local_20 + 0x1a);
    uVar3 = *(uint *)(local_20 + 0x16);
    uVar4 = *(uint *)(local_20 + 0x12);
    pCVar7 = (CHades *)CUser::getHades((CUser *)param_2);
    XNuclear::CHades::RunHadesAction(pCVar7,uVar4,uVar3,uVar2,uVar1,local_30);
    send_alert((Inter_HadesAction *)param_1,(CUser *)param_2,*(uint *)(local_20 + 0x12));
  }
  else if ((param_2 == (char *)0x0) && (*(int *)(local_20 + 10) != 0)) {
    if ((*(uint *)(local_20 + 0x12) & 2) != 0) {
      DB_HadesPunish::makeRequest
                (*(uint *)(local_20 + 10),2,*(uint *)(local_20 + 0x16),*(uint *)(local_20 + 0x1a),
                 *(uint *)(local_20 + 0x1e),(char *)0x0);
    }
    if ((*(uint *)(local_20 + 0x12) & 1) != 0) {
      DB_HadesPunish::makeRequest
                (*(uint *)(local_20 + 10),1,*(uint *)(local_20 + 0x16),*(uint *)(local_20 + 0x1a),
                 *(uint *)(local_20 + 0x1e),(char *)0x0);
    }
  }
  return 0;
}

```

---

## send_alert

```asm
// === 084e5e62 Inter_HadesAction::send_alert  [0x084e5e62-0x84e5f01] ===
 84e5e62:	55                   	push   %ebp
 84e5e63:	89 e5                	mov    %esp,%ebp
 84e5e65:	56                   	push   %esi
 84e5e66:	53                   	push   %ebx
 84e5e67:	83 ec 20             	sub    $0x20,%esp
 84e5e6a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5e6d:	89 04 24             	mov    %eax,(%esp)
 84e5e70:	e8 d7 7e 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e5e75:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5e78:	89 04 24             	mov    %eax,(%esp)
 84e5e7b:	e8 66 5a be ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84e5e80:	c7 44 24 08 bf 01 00 	movl   $0x1bf,0x8(%esp)
 84e5e87:	00 
 84e5e88:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e5e8f:	00 
 84e5e90:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5e93:	89 04 24             	mov    %eax,(%esp)
 84e5e96:	e8 61 5a be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e5e9b:	8b 45 10             	mov    0x10(%ebp),%eax
 84e5e9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5ea2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5ea5:	89 04 24             	mov    %eax,(%esp)
 84e5ea8:	e8 8f 5a be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e5ead:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e5eb4:	00 
 84e5eb5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5eb8:	89 04 24             	mov    %eax,(%esp)
 84e5ebb:	e8 98 5a be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e5ec0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5ec3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e5ec7:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e5eca:	89 04 24             	mov    %eax,(%esp)
 84e5ecd:	e8 e8 26 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e5ed2:	eb 1b                	jmp    84e5eef <_ZN17Inter_HadesAction10send_alertEP5CUserj+0x8d>
 84e5ed4:	89 d3                	mov    %edx,%ebx
 84e5ed6:	89 c6                	mov    %eax,%esi
 84e5ed8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5edb:	89 04 24             	mov    %eax,(%esp)
 84e5ede:	e8 9d 7f 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5ee3:	89 f0                	mov    %esi,%eax
 84e5ee5:	89 da                	mov    %ebx,%edx
 84e5ee7:	89 04 24             	mov    %eax,(%esp)
 84e5eea:	e8 61 d8 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e5eef:	8d 45 ec             	lea    -0x14(%ebp),%eax
 84e5ef2:	89 04 24             	mov    %eax,(%esp)
 84e5ef5:	e8 86 7f 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e5efa:	83 c4 20             	add    $0x20,%esp
 84e5efd:	5b                   	pop    %ebx
 84e5efe:	5e                   	pop    %esi
 84e5eff:	5d                   	pop    %ebp
 84e5f00:	c3                   	ret
 84e5f01:	90                   	nop

```

```c
// Inter_HadesAction::send_alert @ 0x84e5e62

/* Inter_HadesAction::send_alert(CUser*, unsigned int) */

void __thiscall Inter_HadesAction::send_alert(Inter_HadesAction *this,CUser *param_1,uint param_2)

{
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 084e5e7b to 084e5ed1 has its CatchHandler @ 084e5ed4 */
  InterfacePacketBuf::clear((InterfacePacketBuf *)local_18);
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x1bf);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send(param_1,local_18);
  PacketGuard::~PacketGuard(local_18);
  return;
}

```

